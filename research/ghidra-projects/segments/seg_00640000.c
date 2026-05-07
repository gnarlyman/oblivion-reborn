
void FUN_00640000(byte param_1)

{
  FUN_00634a30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00640020(int *param_1)

{
  ushort *puVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  LONG LVar7;
  undefined4 uVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined2 *puVar13;
  int iVar14;
  float in_ECX;
  float fVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  float *pfVar17;
  undefined4 uStack_40;
  float *pfStack_3c;
  undefined4 uStack_38;
  undefined8 local_34;
  float local_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar9 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c375a;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_2c = in_ECX;
  fVar16 = (float10)FUN_004d7570(uVar5);
  local_34 = (double)fVar16;
  FUN_005e02e0(0);
  iVar6 = FUN_00519c10();
  *(float *)((int)in_ECX + 0x26c) = (float)local_34 / (float)iVar6;
  cVar4 = FUN_005f0d60();
  fVar15 = in_ECX;
  if (cVar4 == '\0') {
    iVar6 = *(int *)((int)in_ECX + 0x268);
    if (iVar6 == 0) goto LAB_006408db;
    param_1 = (int *)(*(float *)((int)in_ECX + 0x264) - _DAT_00b33e9c / _DAT_00b14ccc);
    *(int **)((int)in_ECX + 0x264) = param_1;
    if ((float)param_1 < 0.0) {
      (**(code **)(**(int **)(iVar6 + 0x1c) + 0x88))(&param_1,iVar6);
      piVar9 = param_1;
      if (((param_1 != (int *)0x0) && (LVar7 = InterlockedDecrement(param_1 + 1), LVar7 == 0)) &&
         (piVar9 != (int *)0x0)) {
        (**(code **)*piVar9)(1);
      }
      puVar11 = *(undefined4 **)((int)in_ECX + 0x268);
      if (puVar11 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar11 + 1);
        if ((LVar7 == 0) && (puVar11 != (undefined4 *)0x0)) {
          (**(code **)*puVar11)(1);
        }
        *(int *)((int)in_ECX + 0x268) = 0;
      }
      goto LAB_006408db;
    }
  }
  else {
    fVar3 = _DAT_00b33e9c / _DAT_00b14ccc + *(float *)((int)in_ECX + 0x264);
    *(float *)((int)in_ECX + 0x264) = fVar3;
    if (1.0 < fVar3) {
      *(undefined4 *)((int)in_ECX + 0x264) = 0x3f800000;
    }
    piVar2 = (int *)((int)in_ECX + 0x268);
    if (*(int *)((int)in_ECX + 0x268) == 0) {
      iVar6 = (**(code **)(*piVar9 + 0x154))();
      if (iVar6 == 0) goto LAB_006408db;
      iVar6 = FUN_00401f00(0xe4);
      local_34 = (double)CONCAT44(local_34._4_4_,iVar6);
      uStack_4 = 0;
      if (iVar6 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_004ba360();
      }
      uStack_4 = 0xffffffff;
      FUN_0075fa90(uVar8);
      FUN_0070fe20(0x3fc90fdb,0x3f800000,0,0);
      fVar16 = (float10)FUN_005e0660();
      iVar6 = *piVar2;
      fStack_20 = (float)(fVar16 + (float10)2.0);
      fStack_28 = 0.0;
      fStack_24 = 0.0;
      *(undefined4 *)(iVar6 + 0x54) = 0;
      *(undefined4 *)(iVar6 + 0x58) = 0;
      *(float *)(iVar6 + 0x5c) = fStack_20;
      FUN_006ff420("HealthBar");
      piVar9 = (int *)(**(code **)(*piVar9 + 0x154))();
      (**(code **)(*piVar9 + 0x84))(*piVar2,1);
      pfVar10 = (float *)FUN_00401f00(0x30);
      puVar11 = (undefined4 *)FUN_00401f00(0x20);
      pfVar12 = (float *)FUN_00401f00(0x40);
      local_c = 1;
      if (pfVar12 == (float *)0x0) {
        pfVar17 = (float *)0x0;
        pfStack_3c = pfVar12;
      }
      else {
        pfStack_3c = pfVar12;
        _vector_constructor_iterator_(pfVar12,0x10,4,FUN_0047ea50);
        pfVar17 = pfVar12;
      }
      local_c = -1;
      puVar13 = (undefined2 *)FUN_00401f00(0xc);
      fVar15 = _DAT_00b14cb4 * 0.5;
      fVar3 = _DAT_00b14cbc * 0.5;
      *pfVar10 = -fVar15;
      pfVar10[1] = fVar3;
      pfVar10[2] = 0.0;
      pfVar10[3] = -fVar15;
      local_2c = -fVar3;
      pfVar10[4] = local_2c;
      pfVar10[5] = 0.0;
      pfVar10[6] = fVar15;
      pfVar10[7] = fVar3;
      pfVar10[8] = 0.0;
      local_34 = (double)CONCAT44(fVar15,(float)local_34);
      pfVar10[9] = fVar15;
      pfVar10[10] = local_2c;
      fStack_28 = 0.0;
      pfVar10[0xb] = 0.0;
      *puVar11 = 0x3f800000;
      puVar11[1] = 0x3f800000;
      puVar11[2] = 0x3f800000;
      puVar11[3] = 0;
      puVar11[4] = 0;
      pfStack_3c = (float *)0x0;
      uStack_38 = 0;
      puVar11[5] = 0x3f800000;
      puVar11[6] = 0;
      puVar11[7] = 0;
      puVar13[1] = 1;
      puVar13[2] = 2;
      puVar13[3] = 2;
      puVar13[4] = 1;
      *puVar13 = 0;
      puVar13[5] = 3;
      iVar6 = 4;
      pfVar12 = pfVar17;
      do {
        *pfVar12 = DAT_00b25ae0;
        pfVar12[1] = DAT_00b25ae4;
        pfVar12[2] = DAT_00b25ae8;
        pfVar12[3] = DAT_00b25aec;
        pfVar12 = pfVar12 + 4;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      pfStack_3c = (float *)FUN_00401f00(0x1c);
      local_c = 2;
      if (pfStack_3c == (float *)0x0) {
        pfVar12 = (float *)0x0;
      }
      else {
        FUN_006ffd30();
        *pfStack_3c = (float)&PTR_FUN_00a3d604;
        *(undefined2 *)(pfStack_3c + 6) = 0xec;
        *(undefined1 *)((int)pfStack_3c + 0x1a) = 0;
        pfVar12 = pfStack_3c;
      }
      *(ushort *)(pfVar12 + 6) = *(ushort *)(pfVar12 + 6) | 1;
      local_c = -1;
      FUN_00405680(pfVar12);
      pfStack_3c = (float *)FUN_00401f00(0xc0);
      local_c = 3;
      if (pfStack_3c == (float *)0x0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_007174b0(4,pfVar10,0,pfVar17,puVar11,1,0,2,puVar13);
      }
      *(undefined1 *)(*(int *)(iVar6 + 0xb4) + 0x30) = 5;
      local_c = -1;
      (**(code **)(*(int *)*piVar2 + 0x84))(iVar6,1);
      pfStack_3c = (float *)0x0;
      uStack_38 = 0;
      uStack_4 = 4;
      FUN_00402e30(&pfStack_3c,"Data\\Textures\\Menus\\Misc\\HealthBar3DBW.dds");
      pfVar10 = pfStack_3c;
      FUN_006ff420(pfStack_3c);
      uVar8 = FUN_00701e00(pfVar10,&DAT_00b256d0,1);
      iVar6 = FUN_00401f00(0x30);
      uStack_4._0_1_ = 5;
      local_34._0_4_ = (float)iVar6;
      if (iVar6 == 0) {
        uStack_40 = 0;
      }
      else {
        uStack_40 = FUN_007043b0();
      }
      uStack_4._0_1_ = 4;
      FUN_004057b0(uVar8);
      FUN_00405680(uStack_40);
      iVar6 = FUN_00401f00(0x5c);
      local_34 = (double)CONCAT44(local_34._4_4_,iVar6);
      uStack_4._0_1_ = 6;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_007095a0();
      }
      *(float *)(iVar6 + 0x40) = DAT_00b25ac4;
      *(float *)(iVar6 + 0x44) = DAT_00b25ac8;
      fVar15 = DAT_00b25acc;
      *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 1;
      *(float *)(iVar6 + 0x48) = fVar15;
      iVar14 = *(int *)(iVar6 + 0x54);
      *(float *)(iVar6 + 0x1c) = DAT_00b25ac4;
      *(float *)(iVar6 + 0x20) = DAT_00b25ac8;
      fVar15 = DAT_00b25acc;
      *(int *)(iVar6 + 0x54) = iVar14 + 1;
      *(float *)(iVar6 + 0x24) = fVar15;
      *(float *)(iVar6 + 0x28) = DAT_00b25ac4;
      *(float *)(iVar6 + 0x2c) = DAT_00b25ac8;
      fVar15 = DAT_00b25acc;
      *(int *)(iVar6 + 0x54) = iVar14 + 2;
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      *(float *)(iVar6 + 0x30) = fVar15;
      FUN_00405680(iVar6);
      FUN_00707980();
      FUN_00707610();
      FUN_00707370(0,0);
      uStack_4 = 0xffffffff;
      FUN_00401f20(pfVar10);
      fVar15 = local_2c;
    }
  }
  fStack_14 = 0.0;
  fStack_10 = *(float *)((int)fVar15 + 0x264);
  fVar3 = *(float *)((int)fVar15 + 0x26c) - 0.5;
  local_34 = (double)CONCAT44(local_34._4_4_,(fVar3 + fVar3) * -_DAT_00b14cb4 * 0.5);
  if (*(short *)(*(int *)((int)in_ECX + 0x268) + 0xb6) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(*(int *)((int)in_ECX + 0x268) + 0xb0);
  }
  pfStack_3c = *(float **)(*(int *)(iVar6 + 0xb4) + 0x1c);
  pfVar10 = *(float **)(*(int *)(iVar6 + 0xb4) + 0x24);
  iVar14 = FUN_00707530(2);
  fStack_24 = DAT_00b25ac8;
  fStack_28 = DAT_00b25ac4;
  fStack_20 = DAT_00b25acc;
  if (*(float *)((int)fVar15 + 0x26c) <= 0.5) {
    fStack_1c = 1.0;
    fStack_18 = *(float *)((int)fVar15 + 0x26c) + *(float *)((int)fVar15 + 0x26c);
  }
  else {
    fStack_18 = 1.0;
    fVar3 = *(float *)((int)fVar15 + 0x26c) - 0.5;
    fStack_1c = 1.0 - (fVar3 + fVar3);
  }
  if ((iVar14 != 0) && (0.0 < *(float *)((int)fVar15 + 0x270))) {
    param_1 = *(int **)(iVar14 + 0x50);
    fVar16 = (float10)FUN_005e0ac0();
    param_1 = (int *)(float)(fVar16 * (float10)(float)param_1);
    local_2c = *(float *)((int)fVar15 + 0x270) - _DAT_00b14ccc * _DAT_00b33e9c;
    *(float *)((int)fVar15 + 0x270) = local_2c;
    if (0.0 <= local_2c) {
      if (local_2c < _DAT_00b14cdc) {
        param_1 = (int *)((local_2c / _DAT_00b14cdc) * (float)param_1);
      }
    }
    else {
      param_1 = (int *)0x0;
    }
    fStack_28 = (float)param_1 * fStack_1c;
    fStack_24 = (float)param_1 * fStack_18;
    fStack_20 = (float)param_1 * 0.0;
    cVar4 = FUN_008aa390(&fStack_28);
    if (cVar4 != '\0') {
      *(float *)(iVar14 + 0x40) = fStack_28;
      *(float *)(iVar14 + 0x44) = fStack_24;
      *(float *)(iVar14 + 0x48) = fStack_20;
      *(int *)(iVar14 + 0x54) = *(int *)(iVar14 + 0x54) + 1;
    }
  }
  cVar4 = FUN_00632310(&fStack_1c);
  if (cVar4 != '\0') {
    *pfVar10 = fStack_1c;
    pfVar10[4] = fStack_1c;
    pfVar10[8] = fStack_1c;
    pfVar10[0xc] = fStack_1c;
    pfVar10[1] = fStack_18;
    pfVar10[5] = fStack_18;
    pfVar10[9] = fStack_18;
    pfVar10[0xd] = fStack_18;
    pfVar10[2] = fStack_14;
    pfVar10[6] = fStack_14;
    pfVar10[10] = fStack_14;
    pfVar10[0xe] = fStack_14;
    pfVar10[3] = fStack_10;
    pfVar10[7] = fStack_10;
    pfVar10[0xb] = fStack_10;
    pfVar10[0xf] = fStack_10;
    puVar1 = (ushort *)(*(int *)(iVar6 + 0xb4) + 0x2e);
    *puVar1 = *puVar1 | 4;
  }
  if (*pfStack_3c != (float)local_34) {
    fVar3 = _DAT_00b14cc4 * _DAT_00b33e9c;
    if (fVar3 <= ABS((float)local_34 - *pfStack_3c)) {
      if ((float)local_34 - *pfStack_3c <= 0.0) {
        *pfStack_3c = *pfStack_3c - fVar3;
        local_34._0_4_ = pfStack_3c[3] - fVar3;
      }
      else {
        *pfStack_3c = fVar3 + *pfStack_3c;
        local_34._0_4_ = fVar3 + pfStack_3c[3];
      }
    }
    else {
      *pfStack_3c = (float)local_34;
    }
    pfStack_3c[3] = (float)local_34;
    *(undefined4 *)((int)fVar15 + 0x270) = _DAT_00b14cd4;
    puVar1 = (ushort *)(*(int *)(iVar6 + 0xb4) + 0x2e);
    *puVar1 = *puVar1 | 1;
  }
LAB_006408db:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00640ccf) */
/* WARNING: Removing unreachable block (ram,0x00640cdb) */
/* WARNING: Removing unreachable block (ram,0x00640d57) */
/* WARNING: Removing unreachable block (ram,0x00640d6c) */
/* WARNING: Removing unreachable block (ram,0x00640d70) */
/* WARNING: Removing unreachable block (ram,0x00640d77) */
/* WARNING: Removing unreachable block (ram,0x00640d87) */
/* WARNING: Removing unreachable block (ram,0x00640d96) */
/* WARNING: Removing unreachable block (ram,0x00640d8d) */
/* WARNING: Removing unreachable block (ram,0x00640d94) */
/* WARNING: Removing unreachable block (ram,0x00640da1) */
/* WARNING: Removing unreachable block (ram,0x00640da8) */
/* WARNING: Removing unreachable block (ram,0x00640e11) */
/* WARNING: Removing unreachable block (ram,0x00640e18) */
/* WARNING: Removing unreachable block (ram,0x00640e23) */
/* WARNING: Removing unreachable block (ram,0x00640e2f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00640900(int *param_1,int *param_2)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *in_ECX;
  int *unaff_EBX;
  int *piVar10;
  undefined4 uVar11;
  int *unaff_ESI;
  bool bVar12;
  float10 fVar13;
  uint uVar14;
  uint local_18;
  int local_14;
  int iStack_10;
  int iStack_c;
  undefined4 uStack_8;
  
  local_14 = 0;
  (**(code **)(*in_ECX + 0x184))();
  if (param_1 == (int *)0x0) {
    return;
  }
  if (((uint)param_1[2] >> 0xb & 1) != 0) {
    return;
  }
  cVar3 = (**(code **)(*param_1 + 400))();
  piVar2 = param_2;
  if (cVar3 == '\0') {
    return;
  }
  if (param_1 != param_2) {
    if (param_1 == DAT_00b333c4) {
      uVar4 = FUN_006605a0(0);
    }
    else {
      uVar4 = (**(code **)(*param_1 + 0x334))(0);
    }
    local_14 = FUN_005f6540(1,param_1,&param_2,uVar4,0,0);
    fVar1 = (float)local_14;
    uVar11 = 0;
    if (_DAT_00b36778 < fVar1) {
      uVar11 = 3;
    }
    iVar5 = (**(code **)(*in_ECX + 0x3b0))(piVar2);
    if ((iVar5 != 0) ||
       (iVar5 = (**(code **)(*in_ECX + 0xa8))(param_1,uVar11,param_2,local_14), iVar5 != 0)) {
      *(int *)(iVar5 + 0xc) = local_14;
      *(undefined4 *)(iVar5 + 4) = uVar11;
      *(undefined1 *)(iVar5 + 8) = param_2._0_1_;
      pfVar6 = (float *)FUN_00403c00();
      if (fVar1 <= *pfVar6) {
        switch(uVar11) {
        case 0:
          pfVar6 = (float *)FUN_00403c00();
          if ((fVar1 < *pfVar6) && (pfVar6 = (float *)FUN_00403c00(), *pfVar6 < fVar1)) {
            uVar11 = 2;
          }
          break;
        case 1:
          pfVar6 = (float *)FUN_00403c00();
          if (fVar1 <= *pfVar6) {
            pfVar6 = (float *)FUN_00403c00();
            if (fVar1 < *pfVar6) {
              uVar11 = 0;
            }
          }
          else {
            uVar11 = 2;
          }
          break;
        case 2:
          pfVar6 = (float *)FUN_00403c00();
          if (fVar1 < *pfVar6) goto switchD_00640a2e_caseD_3;
          break;
        case 3:
switchD_00640a2e_caseD_3:
          uVar11 = 1;
        }
      }
      else {
        uVar11 = 3;
      }
      *(undefined4 *)(iVar5 + 4) = uVar11;
    }
  }
  iVar5 = (**(code **)(*piVar2 + 0x330))();
  if (iVar5 != 0) {
    (**(code **)(*piVar2 + 0x330))();
    piVar7 = (int *)FUN_006135f0();
    iVar5 = (**(code **)(*piVar2 + 0x330))();
    if ((*(char *)(iVar5 + 0x4d) == '\0') && (piVar7 == param_1)) {
      pfVar6 = (float *)FUN_00403c00();
      if (*pfVar6 < (float)local_14) {
        in_ECX[0x6e] = 0;
      }
      else {
        fVar1 = (float)in_ECX[0x6e] + _DAT_00b33e9c;
        in_ECX[0x6e] = (int)fVar1;
        pfVar6 = (float *)FUN_00403c00();
        if (*pfVar6 < fVar1 != (*pfVar6 == fVar1)) {
          (**(code **)(*piVar2 + 0x340))(param_1);
          in_ECX[0x6e] = 0;
        }
      }
    }
  }
  if ((float)local_14 <= _DAT_00b36778) {
    return;
  }
  piVar7 = (int *)0x0;
  cVar3 = (**(code **)(*param_1 + 0x198))();
  if ((((cVar3 != '\0') && (cVar3 = (**(code **)(*param_1 + 0x1f8))(), cVar3 == '\0')) &&
      (cVar3 = (**(code **)(*(int *)param_1[0x16] + 0x200))(), cVar3 == '\0')) &&
     ((float)param_1[0x21] <= 0.0)) {
    *(undefined1 *)(unaff_ESI + 0x74) = 1;
  }
  cVar3 = (**(code **)(*param_1 + 0x198))(0);
  if (cVar3 != '\0') {
    return;
  }
  iVar5 = (**(code **)(*param_1 + 0x330))();
  local_18 = (uint)in_ECX & 0xffffff00;
  if (iVar5 != 0) {
    cVar3 = FUN_005e8a90();
    if (((cVar3 == '\0') || (cVar3 = FUN_005e8a90(), cVar3 == '\0')) &&
       ((cVar3 = (**(code **)(*(int *)param_1[0x16] + 0x148))(), cVar3 != '\0' &&
        ((cVar3 = FUN_005e6c60(), cVar3 != '\0' && (param_1 != DAT_00b333c4)))))) {
      (**(code **)(*unaff_ESI + 0x228))(piVar2,param_1,0,0,0,0,0,0,0,1);
    }
    if (DAT_00b333b8 == '\0') {
      piVar8 = piVar2;
      (**(code **)(*param_1 + 0x330))(piVar2,&stack0x00000000);
      FUN_006144d0(piVar8,register0x00000010);
    }
    else {
      FUN_005e02e0(0);
      cVar3 = FUN_00467560();
      if (cVar3 != '\0') {
        FUN_005e02e0(0);
        cVar3 = FUN_00467560();
        if (cVar3 != '\0') goto LAB_00640db1;
      }
      FUN_005e02e0(0);
      cVar3 = FUN_00467560();
      if (cVar3 == '\0') {
        FUN_005e02e0(0);
        FUN_00467560();
      }
    }
  }
LAB_00640db1:
  piVar8 = param_1;
  if (((int *)param_1[0x16] != (int *)0x0) &&
     (iVar5 = (**(code **)(*(int *)param_1[0x16] + 0x3d0))(), iVar5 != 0)) {
    piVar8 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x3d0))();
  }
  iVar5 = (**(code **)(*unaff_EBX + 0x3d0))();
  piVar10 = piVar8;
  piVar9 = piVar2;
  if ((iVar5 != 0) && (piVar9 = (int *)(**(code **)(*unaff_EBX + 0x3d0))(), piVar9 == DAT_00b333c4))
  {
    piVar10 = DAT_00b333c4;
    piVar9 = piVar8;
  }
  uVar11 = (**(code **)(*piVar9 + 0x284))(0x24);
  uVar11 = FUN_005e3270(0,uVar11);
  uVar14 = local_18;
  fVar13 = (float10)FUN_004d7e90(piVar10,0);
  uVar11 = (**(code **)(*piVar9 + 0x284))(0x21,(float)fVar13,uVar14,uVar11);
  uVar11 = (**(code **)(*piVar9 + 0x224))(piVar10,0,uVar11);
  iStack_10 = FUN_00546190(uVar11);
  cVar3 = FUN_005e8eb0();
  if (((cVar3 == '\0') && (cVar3 = FUN_005e8eb0(), cVar3 == '\0')) && (piVar9 != piVar10)) {
    if (iStack_10 < 1) goto LAB_00640edf;
  }
  else {
    iStack_10 = 0;
LAB_00640edf:
    FUN_00403c00();
    iStack_c = FUN_009828c0();
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      FUN_006ecc80();
      cVar3 = FUN_004c97f0();
      if (cVar3 != '\0') {
        FUN_00403c00();
        iStack_c = FUN_009828c0();
      }
    }
    cVar3 = (**(code **)(*piVar2 + 0x334))(0);
    if ((cVar3 == '\0') && (iVar5 = (**(code **)(*param_1 + 0x330))(), iVar5 != 0)) {
      piVar8 = piVar2;
      (**(code **)(*param_1 + 0x330))(piVar2);
      cVar3 = FUN_00613670(piVar8);
      if (((cVar3 != '\0') &&
          ((fVar13 = (float10)FUN_004d7e90(param_1,0), fVar13 <= (float10)iStack_c &&
           (cVar3 = FUN_005e6cd0(0), cVar3 == '\0')))) &&
         (cVar3 = (**(code **)(*param_1 + 0x350))(), cVar3 == '\0')) {
        FUN_00633c50(param_1);
      }
    }
  }
  cVar3 = FUN_005e3270();
  if (((cVar3 == '\0') && (cVar3 = FUN_004d7f80(), cVar3 != '\0')) &&
     (iVar5 = FUN_005e32f0(), (*(byte *)(iVar5 + 0x70) & 1) != 0)) {
    FUN_005e02e0(0);
    cVar3 = FUN_00467560();
    if (cVar3 != '\0') goto LAB_00640fe1;
  }
  else {
LAB_00640fe1:
    if (0 < iStack_10) {
      FUN_005e6c60();
      FUN_005e02e0(0);
      cVar3 = FUN_00467560();
      if (cVar3 == '\0') {
        cVar3 = FUN_0067cb50(param_1);
        bVar12 = cVar3 == '\0';
      }
      else {
        bVar12 = true;
      }
      (**(code **)(*piVar7 + 0x228))(piVar2,param_1,0,0,0,bVar12,0,0,0,1);
      goto LAB_006411ad;
    }
  }
  cVar3 = FUN_005e6c60();
  if ((((cVar3 == '\0') || (cVar3 = FUN_004d7f80(), cVar3 == '\0')) ||
      ((cVar3 = (**(code **)(*param_1 + 0x334))(0), cVar3 != '\0' ||
       ((cVar3 = (**(code **)(*piVar2 + 0x334))(0), cVar3 != '\0' ||
        (fVar13 = (float10)(**(code **)(*param_1 + 0x250))(),
        (float10)_DAT_00b36a60 < fVar13 == ((float10)_DAT_00b36a60 == fVar13))))))) ||
     ((param_1 == DAT_00b333c4 && (cVar3 = FUN_0065da50(), cVar3 != '\0')))) {
    cVar3 = FUN_005e6c60();
    if ((cVar3 == '\0') && (0 < iStack_10)) {
      iVar5 = (**(code **)(*param_1 + 0x330))();
      if (iVar5 != 0) {
        (**(code **)(*param_1 + 0x330))();
        local_18 = FUN_006135f0();
      }
      cVar3 = FUN_005e8a90();
      if (((cVar3 == '\0') || (local_18 == 0)) || (cVar3 = FUN_005e8a90(), cVar3 == '\0')) {
        FUN_005e6c60();
        FUN_005e02e0(0);
        cVar3 = FUN_00467560();
        if (cVar3 == '\0') {
          FUN_005e02e0(0);
          cVar3 = FUN_00467560();
          if (cVar3 == '\0') {
            cVar3 = FUN_0067cb50(param_1);
            bVar12 = cVar3 == '\0';
          }
          else {
            bVar12 = false;
          }
        }
        else {
          bVar12 = true;
        }
        cVar3 = (**(code **)(*piVar7 + 0x228))(piVar2,param_1,bVar12,0,0,bVar12,0,0,0,1);
        if (cVar3 != '\0') {
          piVar7[0x69] = (int)param_1;
        }
      }
    }
  }
  else {
    (**(code **)(*piVar2 + 0x310))(0,0,0,param_1);
  }
LAB_006411ad:
  FUN_0063f950(piVar2,param_1,unaff_EBX,uStack_8);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_006411e0(int *param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  float *pfVar13;
  int iVar14;
  int *in_ECX;
  char cVar15;
  int *piVar16;
  uint3 unaff_EBP;
  uint uVar17;
  int *piVar18;
  float unaff_ESI;
  int *piVar19;
  uint *unaff_FS_OFFSET;
  bool bVar20;
  float10 fVar21;
  int *piStack_184;
  undefined4 uStack_180;
  int *piStack_17c;
  undefined4 uStack_178;
  int *local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int *piStack_168;
  int *piStack_164;
  char acStack_160 [4];
  int iStack_15c;
  undefined4 *puStack_158;
  undefined8 uStack_154;
  uint uStack_14c;
  int *piStack_148;
  int *piStack_144;
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c379c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_184;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffffe6c;
  *unaff_FS_OFFSET = (uint)&local_c;
  piVar19 = (int *)0x0;
  local_174 = in_ECX;
  (**(code **)(*param_1 + 0x198))(0,uVar6);
  if (DAT_00b3bd99 == '\0') {
    bVar20 = false;
    goto LAB_0064282a;
  }
  pcVar1 = *(code **)(*in_ECX + 0x184);
  *(undefined1 *)(in_ECX + 0x74) = 0;
  uVar7 = (*pcVar1)();
  uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar7);
  uStack_180 = (int *)((uint)uStack_180 & 0xffffff);
  FUN_004526e0();
  piVar18 = (int *)DAT_00b333c4[0x16b];
  piStack_164 = DAT_00b333c4;
  piStack_17c = (int *)0x0;
  piStack_168 = (int *)((uint)piStack_168 & 0xffffff00);
  iStack_15c = 0;
  piStack_148 = (int *)0x0;
  uStack_14c = uStack_14c & 0xffffff00;
  uStack_170 = piVar18;
  iStack_15c = (**(code **)(*param_1 + 0x224))(DAT_00b333c4);
  piVar11 = _DAT_00b36708;
  uVar6 = (uint)unaff_EBP;
  piStack_148 = (int *)0x0;
  uStack_170 = (int *)((uint)uStack_170 & 0xffffff);
  if ((DAT_00b333b8 == '\0') && (piVar18 != (int *)0x0)) {
LAB_006412d4:
    if ((piVar18[1] == 0) && (*piVar18 == 0)) goto LAB_006414c0;
    piVar19 = (int *)0x0;
    if (((int *)*piVar18 != (int *)0x0) &&
       (cVar4 = (**(code **)(*(int *)*piVar18 + 400))(), cVar4 != '\0')) {
      piVar19 = (int *)*piVar18;
    }
    uVar17 = 0;
    if (piVar19 != (int *)0x0) {
      cVar4 = (**(code **)(*piVar19 + 0x334))(1);
      if (cVar4 != '\0') {
        if ((((int *)piVar19[0x16] != (int *)0x0) &&
            (iVar8 = (**(code **)(*(int *)piVar19[0x16] + 8))(), iVar8 == 0)) &&
           (cVar4 = FUN_005e9d40(piVar19), cVar4 != '\0')) {
          uVar17 = (**(code **)(*param_1 + 0x224))(piVar19);
        }
        goto LAB_0064135f;
      }
      FUN_0065def0(piVar19);
      piVar19 = (int *)0x0;
      piVar18 = (int *)DAT_00b333c4[0x16b];
      goto LAB_006413ed;
    }
LAB_0064135f:
    if ((int)uStack_14c < (int)uVar17) {
      uStack_14c = uVar17;
      piVar18 = (int *)FUN_0067cf50(0xc,piVar19);
      uStack_178 = piVar18;
      if ((piVar18[1] == 0) && (*piVar18 == 0)) {
        piStack_164 = (int *)FUN_00401f00(0x24);
        iVar8 = 0;
        local_c = 0;
        if (piStack_164 != (int *)0x0) {
          iVar8 = FUN_0067cbc0();
        }
        local_c = 0xffffffff;
        *(undefined4 *)(iVar8 + 0xc) = 0xc;
        FUN_0067bf80(iVar8);
        cVar15 = '\0';
        local_174 = (int *)((uint)local_174 & 0xffffff00);
        cVar4 = FUN_005e6cd0(0);
        if ((cVar4 != '\0') || (cVar4 = FUN_005e6ba0(), cVar4 != '\0')) {
          cVar15 = '\x01';
          local_174 = (int *)CONCAT31(local_174._1_3_,1);
        }
        FUN_0067cdb0(DAT_00b333c4,local_174,0xffffffff);
        FUN_0067cdb0(piVar19,cVar15 == '\0',0xffffffff);
        uStack_154._0_5_ = CONCAT14(1,(int)uStack_154);
        uVar6 = CONCAT13(cVar15,(int3)uVar6);
        piVar18 = uStack_178;
        if (cVar15 != '\0') {
          piStack_148 = piVar19;
        }
LAB_006414b0:
        FUN_004526e0();
        FUN_00401f20(piVar18);
LAB_006414c0:
        if ((piVar19 != (int *)0x0) && (cVar4 = FUN_005e6c60(), cVar4 != '\0')) {
          uStack_170 = (int *)CONCAT13(1,(undefined3)uStack_170);
        }
        goto LAB_006414d4;
      }
      if (*piVar18 != 0) {
        uStack_178 = (int *)FUN_0067b6b0(piVar19,0);
        iVar8 = FUN_0067b6b0(DAT_00b333c4,0);
        if ((iVar8 != 0) && (*(char *)(iVar8 + 4) != '\0')) {
          uVar6 = CONCAT13(1,(int3)uVar6);
          piStack_148 = piVar19;
        }
        if ((uStack_178 != (int *)0x0) && ((char)uStack_178[1] != '\0')) {
          uStack_154._0_5_ = CONCAT14(1,(int)uStack_154);
          goto LAB_006414b0;
        }
      }
      FUN_004526e0();
      FUN_00401f20(piVar18);
    }
    uStack_16c = (int *)CONCAT31(uStack_16c._1_3_,1);
    piVar18 = local_174;
LAB_006413ed:
    if ((piVar18 == (int *)0x0) ||
       (piVar18 = (int *)piVar18[1], local_174 = piVar18, piVar18 == (int *)0x0)) goto LAB_006414c0;
    goto LAB_006412d4;
  }
LAB_006414d4:
  piVar19 = piStack_168;
  cVar4 = (**(code **)(*piStack_168 + 0x198))(0);
  if (cVar4 == '\0') {
    uStack_16c = param_1;
    piStack_168 = piVar19;
    if (((int *)piVar19[0x16] != (int *)0x0) &&
       (iVar8 = (**(code **)(*(int *)piVar19[0x16] + 0x3d0))(), iVar8 != 0)) {
      piVar19 = (int *)(**(code **)(*(int *)piVar19[0x16] + 0x3d0))();
    }
    piVar18 = uStack_180;
    iVar8 = (**(code **)(*uStack_180 + 0x3d0))();
    piVar16 = piVar19;
    piVar9 = param_1;
    if ((iVar8 != 0) && (piVar9 = (int *)(**(code **)(*piVar18 + 0x3d0))(), piVar9 == DAT_00b333c4))
    {
      piVar16 = DAT_00b333c4;
      piVar9 = piVar19;
    }
    uVar7 = (**(code **)(*piVar9 + 0x224))(piVar16);
    piVar19 = uStack_16c;
    param_1 = uStack_170;
    uStack_180 = (int *)uVar7;
    if (piVar9 != piVar16) {
      uVar10 = (**(code **)(*piVar9 + 0x284))(0x24);
      uVar10 = FUN_005e3270(iStack_15c,uVar10);
      piVar19 = uStack_178;
      fVar21 = (float10)FUN_004d7e90(piVar16,0);
      uVar10 = (**(code **)(*piVar9 + 0x284))(0x21,(float)fVar21,piVar19,uVar10);
      piStack_168 = (int *)FUN_00546190(uVar7,(int)uStack_154,uVar10);
      piVar19 = uStack_16c;
      param_1 = uStack_170;
    }
  }
  else {
    uStack_180 = (int *)(**(code **)(*param_1 + 0x224))(piVar19);
    piVar18 = piStack_184;
  }
  iVar8 = FUN_006ecc80();
  if (iVar8 == 0) {
LAB_006415f0:
    unaff_ESI = unaff_ESI + unaff_ESI;
  }
  else {
    FUN_006ecc80();
    cVar4 = FUN_004c97f0();
    if (cVar4 == '\0') goto LAB_006415f0;
  }
  fVar21 = (float10)FUN_004d7e90(DAT_00b333c4,0);
  piVar16 = DAT_00b333c4;
  if ((float10)unaff_ESI < fVar21) {
    iVar8 = (**(code **)(*piVar18 + 0x3b0))(DAT_00b333c4);
    if (iVar8 == 0) {
      (**(code **)(*piVar18 + 0xa8))(piVar16,0,0,DAT_00b372f0);
    }
    else {
      *(int *)(iVar8 + 0xc) = DAT_00b372f0;
    }
    iVar8 = (**(code **)(*param_1 + 0x330))();
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x330))();
      piVar18 = (int *)FUN_006135f0();
      iVar8 = (**(code **)(*param_1 + 0x330))();
      if ((*(char *)(iVar8 + 0x4d) == '\0') && (piVar18 == DAT_00b333c4)) {
        (**(code **)(*param_1 + 0x330))();
        cVar4 = FUN_00612a10();
        piVar11 = uStack_178;
        if (cVar4 != '\0') {
          piStack_184 = (int *)((float)uStack_178[0x6e] + _DAT_00b33e9c);
          uStack_178[0x6e] = (int)piStack_184;
          pfVar13 = (float *)FUN_00403c00();
          if (*pfVar13 < (float)piStack_184) {
            (**(code **)(*param_1 + 0x340))(piVar18);
            cVar4 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar4 == '\0') {
              (**(code **)(*param_1 + 0x31c))(piVar18);
            }
          }
        }
        if (DAT_00b372f0 < (int)piStack_17c) {
          piVar11[0x6e] = 0;
        }
        else {
          piStack_184 = (int *)((float)piVar11[0x6e] + _DAT_00b33e9c);
          piVar11[0x6e] = (int)piStack_184;
          pfVar13 = (float *)FUN_00403c00();
          if (*pfVar13 < (float)piStack_184 != (*pfVar13 == (float)piStack_184)) {
            (**(code **)(*param_1 + 0x340))(piVar18);
            cVar4 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar4 == '\0') {
              (**(code **)(*param_1 + 0x31c))(piVar18);
            }
          }
        }
        if (iStack_15c < 1) {
          cVar4 = (**(code **)(*DAT_00b333c4 + 0x354))();
          if (cVar4 != '\0') {
            uVar7 = (**(code **)(*piVar19 + 0x284))(0x24);
            cVar4 = FUN_00546700(puStack_158,uVar7);
            piVar11 = uStack_178;
            if (cVar4 != '\0') goto LAB_006425d3;
          }
        }
        else {
LAB_006425d3:
          cVar4 = FUN_005e0f30();
          if ((((cVar4 != '\0') || (cVar4 = FUN_005e32d0(), cVar4 == '\0')) ||
              (fVar21 = (float10)(**(code **)(*(int *)param_1[0x16] + 0x1e8))(),
              (float10)0.0 <= fVar21)) || (iVar8 = (**(code **)(*piVar11 + 0x33c))(0), iVar8 != 0))
          {
            (**(code **)(*param_1 + 0x1dc))();
          }
          else {
            iVar8 = FUN_0052ed50(4,3);
            cVar4 = FUN_005e6ba0();
            if ((((cVar4 == '\0') && (cVar4 = FUN_005e6cd0(0), cVar4 == '\0')) &&
                ((cVar4 = (**(code **)(*param_1 + 0x334))(1), cVar4 == '\0' &&
                 ((iVar8 != 0 && (iVar8 != -0x28)))))) &&
               (cVar4 = FUN_0046cb60(), piVar19 = uStack_178, cVar4 == '\0')) {
              (**(code **)(*uStack_178 + 0x484))(DAT_00b333c4);
              param_1[0x39] = (int)DAT_00b333c4;
              (**(code **)(*piVar19 + 0x1a4))(param_1,iVar8,0,0,1);
              iVar8 = *(int *)param_1[0x16];
              puVar12 = (undefined4 *)FUN_00403c00();
              (**(code **)(iVar8 + 0x1c0))(*puVar12);
            }
          }
        }
      }
    }
  }
  else {
    if (piVar19 != param_1) {
      piVar11 = (int *)FUN_005f6540(1,piVar19,&uStack_16c,local_174,0,0);
      iVar8 = (**(code **)(*piVar18 + 0x3b0))(piVar19);
      if (iVar8 == 0) {
        iVar8 = (**(code **)(*piVar18 + 0xa8))(piVar19,0,uStack_170,uVar6);
      }
      piVar18 = *(int **)(iVar8 + 4);
      piStack_17c._0_3_ = (uint3)(ushort)piStack_17c;
      uStack_178 = piVar18;
      cVar4 = (**(code **)(*DAT_00b333c4 + 0x198))(0);
      if ((((cVar4 != '\0') && (cVar4 = (**(code **)(*DAT_00b333c4 + 0x1f8))(), cVar4 == '\0')) &&
          (cVar4 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0x200))(), cVar4 == '\0')) &&
         ((float)DAT_00b333c4[0x21] <= 0.0)) {
        *(undefined1 *)(piStack_184 + 0x74) = 1;
      }
      fVar3 = (float)(int)piVar11;
      if (fVar3 <= _DAT_00b36778) {
        switch(local_174) {
        case (int *)0x0:
          pfVar13 = (float *)FUN_00403c00();
          if ((fVar3 < *pfVar13) && (pfVar13 = (float *)FUN_00403c00(), *pfVar13 < fVar3)) {
            piVar18 = (int *)&DAT_00000002;
          }
          break;
        case (int *)0x1:
          pfVar13 = (float *)FUN_00403c00();
          if (fVar3 <= *pfVar13) {
            pfVar13 = (float *)FUN_00403c00();
            if (fVar3 < *pfVar13) {
              piVar18 = (int *)0x0;
            }
          }
          else {
            piVar18 = (int *)&DAT_00000002;
          }
          break;
        case (int *)0x2:
          pfVar13 = (float *)FUN_00403c00();
          if (fVar3 < *pfVar13) goto switchD_0064170e_caseD_3;
          break;
        case (int *)0x3:
switchD_0064170e_caseD_3:
          piVar18 = (int *)0x1;
        }
      }
      else {
        piVar18 = (int *)0x3;
      }
      *(int **)(iVar8 + 4) = piVar18;
      *(int **)(iVar8 + 0xc) = piVar11;
      *(undefined1 *)(iVar8 + 8) = (undefined1)uStack_16c;
      if (piVar18 != local_174) {
        uStack_178._0_3_ = CONCAT12(1,(undefined2)uStack_178);
      }
      if ((int)piStack_168 < 1) {
        cVar4 = (**(code **)(*DAT_00b333c4 + 0x354))();
        if (cVar4 != '\0') {
          uVar7 = (**(code **)(*piVar19 + 0x284))(0x24);
          cVar4 = FUN_00546700(piStack_164,uVar7);
          if (cVar4 != '\0') goto LAB_0064180c;
        }
        goto LAB_00641954;
      }
LAB_0064180c:
      cVar4 = FUN_005e0f30();
      if ((((cVar4 != '\0') || (cVar4 = FUN_005e32d0(), cVar4 == '\0')) ||
          ((fVar21 = (float10)(**(code **)(*(int *)piVar19[0x16] + 0x1e8))(), (float10)0.0 <= fVar21
           && (uStack_178._2_1_ == '\0')))) ||
         (iVar8 = (**(code **)(*piStack_184 + 0x33c))(0), iVar8 != 0)) {
        (**(code **)(*piVar19 + 0x1dc))();
        goto LAB_00641954;
      }
      iVar8 = 0;
      switch(piVar18) {
      case (int *)0x0:
        uVar7 = 3;
        break;
      case (int *)0x1:
        uVar7 = 2;
        break;
      case (int *)0x2:
        uVar7 = 0;
        break;
      case (int *)0x3:
        uVar7 = 1;
        break;
      default:
        goto switchD_0064186e_default;
      }
      iVar8 = FUN_0052ed50(4,uVar7);
switchD_0064186e_default:
      cVar4 = FUN_005e6ba0();
      if (((((cVar4 == '\0') && (cVar4 = FUN_005e6cd0(0), cVar4 == '\0')) &&
           (cVar4 = (**(code **)(*param_1 + 0x334))(1), cVar4 == '\0')) &&
          ((iVar8 != 0 && (iVar8 != -0x28)))) && (cVar4 = FUN_0046cb60(), cVar4 == '\0')) {
        (**(code **)(*piStack_184 + 0x1a4))(param_1,iVar8,0,0,1);
        uVar7 = FUN_004da2a0(piVar18);
        uVar7 = FUN_004da2a0(uVar7);
        _sprintf(acStack_160,"%s sees %s at %d ",uVar7);
        FUN_00579b60(acStack_160);
        iVar8 = *(int *)piVar19[0x16];
        puVar12 = (undefined4 *)FUN_00403c00();
        (**(code **)(iVar8 + 0x1c0))(*puVar12);
      }
    }
LAB_00641954:
    piStack_17c = (int *)0x0;
    iVar8 = (**(code **)(*param_1 + 0x330))();
    if (iVar8 != 0) {
      (**(code **)(*param_1 + 0x330))();
      piVar18 = (int *)FUN_006135f0();
      uStack_170 = piVar18;
      iVar8 = (**(code **)(*param_1 + 0x330))();
      if ((*(char *)(iVar8 + 0x4d) == '\0') && (piVar18 == DAT_00b333c4)) {
        (**(code **)(*param_1 + 0x330))();
        cVar4 = FUN_00612a10();
        piVar16 = uStack_178;
        if (cVar4 != '\0') {
          piStack_184 = (int *)((float)uStack_178[0x6e] + _DAT_00b33e9c);
          uStack_178[0x6e] = (int)piStack_184;
          pfVar13 = (float *)FUN_00403c00();
          if (*pfVar13 < (float)piStack_184) {
            (**(code **)(*param_1 + 0x340))(piVar18);
            cVar4 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar4 == '\0') {
              (**(code **)(*param_1 + 0x31c))(piVar18);
            }
          }
        }
        if (DAT_00b372f0 < (int)piStack_17c) {
          piVar16[0x6e] = 0;
        }
        else {
          piStack_184 = (int *)((float)piVar16[0x6e] + _DAT_00b33e9c);
          piVar16[0x6e] = (int)piStack_184;
          pfVar13 = (float *)FUN_00403c00();
          if (*pfVar13 < (float)piStack_184 != (*pfVar13 == (float)piStack_184)) {
            (**(code **)(*param_1 + 0x340))(piVar18);
            cVar4 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar4 == '\0') {
              (**(code **)(*param_1 + 0x31c))(piVar18);
            }
          }
        }
      }
    }
    if (_DAT_00b36778 < (float)(int)piStack_17c) {
      cVar4 = (**(code **)(*piVar19 + 0x198))(0);
      iVar8 = iStack_15c;
      if (cVar4 == '\0') {
        if (iStack_15c < 1) {
          FUN_00403c00();
          iVar14 = FUN_006ecc80();
          if (iVar14 != 0) {
            FUN_006ecc80();
            cVar4 = FUN_004c97f0();
            if (cVar4 != '\0') {
              FUN_00403c00();
            }
          }
        }
        cVar4 = FUN_005e6c60();
        if (((((cVar4 != '\0') && (iVar14 = (**(code **)(*piVar19 + 0x330))(), iVar14 == 0)) &&
             (iVar14 = (**(code **)(*param_1 + 0x330))(), iVar14 == 0)) &&
            (((char)((uint)piVar11 >> 0x18) != '\0' ||
             (fVar21 = (float10)(**(code **)(*piVar19 + 0x250))(),
             (float10)_DAT_00b36a60 < fVar21 != ((float10)_DAT_00b36a60 == fVar21))))) &&
           ((piVar19 != DAT_00b333c4 || (cVar4 = FUN_0065da50(), cVar4 == '\0')))) {
          fVar21 = (float10)(**(code **)(*DAT_00b333c4 + 0x250))();
          if (fVar21 == (float10)0.0) {
            if (piStack_144 != (int *)0x0) {
              (**(code **)(*piStack_144 + 0x240))(DAT_00b333c4,1);
            }
          }
          else {
            (**(code **)(*param_1 + 0x310))(0,0,0,piVar19);
          }
          goto LAB_00641ce9;
        }
        cVar4 = FUN_005e6c60();
        if (((((cVar4 == '\0') || (piVar19 != DAT_00b333c4)) ||
             (((char)DAT_00b333c4[0x184] == '\0' && ((char)DAT_00b333c4[0x1ce] == '\0')))) &&
            (((cVar4 = FUN_005e6c60(), cVar4 != '\0' && (uStack_16c._3_1_ == '\0')) || (iVar8 < 1)))
            ) || (((cVar4 = FUN_005e8a90(), cVar4 != '\0' && (uStack_170 != (int *)0x0)) &&
                  (cVar4 = FUN_005e8a90(), cVar4 != '\0')))) goto LAB_00641ce9;
        cVar4 = FUN_005e6c60();
        piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,cVar4 == '\0');
        FUN_005e02e0(0);
        cVar4 = FUN_00467560();
        if (cVar4 == '\0') {
          cVar4 = FUN_005e6c60();
          if (cVar4 == '\0') {
            uVar7 = FUN_0067cf50(0xc,DAT_00b333c4);
            cVar4 = FUN_0046cb60();
            if (cVar4 == '\0') {
              cVar4 = FUN_0067cb50(DAT_00b333c4);
              piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,cVar4 == '\0');
            }
            else {
              piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,1);
            }
            FUN_004526e0();
            FUN_00401f20(uVar7);
          }
        }
        else {
          piStack_17c = (int *)CONCAT31(piStack_17c._1_3_,1);
        }
        piVar18 = uStack_178;
        cVar4 = (**(code **)(*uStack_178 + 0x228))
                          (param_1,piVar19,piStack_17c,0,0,piStack_17c,0,0,0,1);
        if (cVar4 == '\0') {
          piVar18[0x69] = (int)DAT_00b333c4;
          goto LAB_00641ce9;
        }
LAB_00641efa:
        bVar20 = true;
        goto LAB_0064282a;
      }
LAB_00641ce9:
      if (((piVar19 == DAT_00b333c4) ||
          (iVar8 = (**(code **)(*piVar19 + 0x284))(0x1f), iVar8 != 100)) &&
         ((cVar4 = (**(code **)(*piVar19 + 0x354))(), cVar4 != '\0' &&
          (cVar4 = (**(code **)(*param_1 + 0x35c))(), cVar4 == '\0')))) {
        FUN_006ecc80();
        iVar8 = FUN_004ca970();
        bVar20 = false;
        if (iVar8 != 0) {
          if (*(char *)(iVar8 + 4) == '#') {
            bVar5 = FUN_00467560();
          }
          else {
            if (*(char *)(iVar8 + 4) != '\x06') goto LAB_00641d70;
            bVar5 = *(byte *)(iVar8 + 0x34) >> 1 & 1;
          }
          if (bVar5 != 0) {
            bVar20 = true;
          }
        }
LAB_00641d70:
        FUN_005e02e0(1);
        cVar4 = FUN_0046cb60();
        if (cVar4 != '\0') {
          FUN_005e02e0(0);
        }
        if ((!bVar20) || (cVar4 = FUN_00467560(), cVar4 != '\0')) {
          uVar7 = (**(code **)(*param_1 + 0x284))(0x24);
          cVar4 = FUN_00546700(local_174,uVar7);
          if (cVar4 != '\0') {
            iVar8 = FUN_006ecc80();
            iVar14 = FUN_0041fc70();
            if (iVar14 == 0) {
LAB_00641e09:
              local_174 = (int *)0x1;
              cVar4 = FUN_004ca690();
              if (cVar4 != '\0') {
                local_174 = (int *)0x0;
              }
              iVar14 = FUN_00401f00(0x58);
              uStack_154 = (double)CONCAT44(uStack_154._4_4_,iVar14);
              puStack_8 = (undefined1 *)0x1;
              if (iVar14 == 0) {
                iVar14 = 0;
              }
              else {
                piVar18 = local_174;
                uVar7 = FUN_004ca970(iVar8,local_174);
                iVar14 = FUN_0067d3a0(piVar19,uVar7,iVar8,piVar18);
              }
              puStack_8 = (undefined1 *)0xffffffff;
              FUN_0041fbc0(iVar14);
              (**(code **)(*piVar19 + 0x40))(0x40000);
            }
            else {
              iVar2 = *(int *)(iVar14 + 0x48);
              if (((iVar2 != 0) && (*(char *)(iVar2 + 4) == '0')) && (iVar8 != iVar2)) {
                FUN_004246f0();
                goto LAB_00641e09;
              }
            }
            iVar8 = FUN_00675bf0(piVar19,0,2);
            if (iVar8 == 0) {
LAB_00641eb0:
              cVar4 = (**(code **)(*param_1 + 0x354))();
              if (cVar4 == '\0') {
                (**(code **)(*param_1 + 0x2fc))(iVar14);
                bVar20 = true;
                goto LAB_0064282a;
              }
            }
            else {
              piVar18 = param_1;
              uVar7 = (**(code **)(*param_1 + 0x224))(piVar19,param_1);
              cVar4 = FUN_00605e20(uVar7,piVar18);
              if (cVar4 != '\0') goto LAB_00641eb0;
            }
            cVar4 = (**(code **)(*piVar19 + 0x354))();
            if (cVar4 == '\0') {
              FUN_004246f0();
              (**(code **)(*piVar19 + 0x44))(0x40000);
            }
            goto LAB_00641efa;
          }
        }
      }
      piStack_17c = (int *)DAT_00b333c4[0x16b];
      piStack_164 = piStack_17c;
      if ((((piStack_17c != (int *)0x0) &&
           (((int)uStack_154 == 0 || ((*(uint *)((int)uStack_154 + 0x1c) >> 0xc & 1) == 0)))) &&
          (cVar4 = FUN_005e6b70(), cVar4 == '\0')) &&
         (((cVar4 = FUN_005e32d0(), cVar4 != '\0' && (cVar4 = FUN_005e6ba0(), cVar4 == '\0')) &&
          (cVar4 = (**(code **)(*param_1 + 0x334))(0), cVar4 == '\0')))) {
        fVar21 = (float10)FUN_004d7e90(param_1,0);
        uStack_154 = (double)fVar21;
        pfVar13 = (float *)FUN_00403c00();
        if ((float)uStack_154 <= *pfVar13) {
          puStack_158 = (undefined4 *)FUN_0067cf50(0xc,piVar19);
          piStack_184 = (int *)*puStack_158;
          if ((((piStack_184 != (int *)0x0) && (cVar4 = FUN_005e6b70(), cVar4 == '\0')) &&
              (iVar8 = FUN_0067b710(), iVar8 != 0)) &&
             ((iVar8 = FUN_0067b6b0(param_1,0), iVar8 == 0 &&
              (cVar4 = FUN_005e6c10(), cVar4 == '\0')))) {
            FUN_0067b6b0(piVar19,0);
            while (piVar18 = piStack_17c, *piStack_17c != 0) {
              cVar4 = FUN_005e6c60();
              if ((cVar4 == '\0') || (cVar4 = FUN_005e6c60(), piVar11 = piStack_164, cVar4 != '\0'))
              {
                FUN_00403c00();
                local_174 = (int *)FUN_009828c0();
                iVar8 = FUN_006ecc80();
                if (iVar8 != 0) {
                  FUN_006ecc80();
                  cVar4 = FUN_004c97f0();
                  if (cVar4 != '\0') {
                    FUN_00403c00();
                    local_174 = (int *)FUN_009828c0();
                  }
                }
                cVar4 = (**(code **)(*param_1 + 0x334))(0);
                if ((cVar4 == '\0') && (iVar8 = (**(code **)(*piVar19 + 0x330))(), iVar8 != 0)) {
                  piVar11 = param_1;
                  (**(code **)(*piVar19 + 0x330))(param_1);
                  cVar4 = FUN_00613670(piVar11);
                  if ((cVar4 != '\0') &&
                     (((fVar21 = (float10)FUN_004d7e90(piVar19,0), fVar21 <= (float10)(int)local_174
                       && (cVar4 = FUN_005e6cd0(0), cVar4 == '\0')) &&
                      (cVar4 = (**(code **)(*piVar19 + 0x350))(), cVar4 == '\0')))) {
                    FUN_00633c50(piVar19);
                    piVar19 = piStack_184;
                    goto LAB_00642270;
                  }
                }
                iVar8 = FUN_006ecc80();
                if (iVar8 != 0) {
                  FUN_006ecc80();
                  FUN_004c97f0();
                }
                FUN_00403c00();
                local_174 = (int *)FUN_009828c0();
                cVar4 = FUN_005e6ba0();
                piVar11 = piStack_164;
                if (((cVar4 == '\0') &&
                    (cVar4 = (**(code **)(*param_1 + 0x334))(0), piVar11 = piStack_164,
                    cVar4 == '\0')) &&
                   (fVar21 = (float10)FUN_004d7e90(DAT_00b333c4,0), piVar11 = piStack_164,
                   fVar21 <= (float10)(int)local_174)) {
                  uStack_180 = (int *)CONCAT13(1,(undefined3)uStack_180);
                  piVar11 = piStack_164;
                  DAT_00b3b930 = piStack_184;
                }
              }
              while( true ) {
                piStack_17c = piVar11;
                if (piStack_17c == (int *)0x0) goto LAB_0064230d;
                iVar8 = *piStack_17c;
                if (iVar8 == 0) break;
                puVar12 = (undefined4 *)FUN_0067b6b0(iVar8,0);
                if ((puVar12 != (undefined4 *)0x0) && (cVar4 = FUN_005e32d0(), cVar4 != '\0')) {
                  cVar4 = FUN_005e6c60();
                  if ((cVar4 != '\0') &&
                     ((*(char *)(puVar12 + 1) != '\0' && (cVar4 = FUN_005e6c60(), cVar4 == '\0'))))
                  {
                    cVar4 = FUN_005e8a90();
                    if ((cVar4 == '\0') || ((iVar8 == 0 || (cVar4 = FUN_005e8a90(), cVar4 == '\0')))
                       ) {
                      (**(code **)(*(int *)param_1[0x16] + 0x228))(param_1,*puVar12,0,0,0,0,0,0,0,1)
                      ;
                    }
                    bVar20 = true;
                    goto LAB_0064282a;
                  }
                  cVar4 = FUN_005e6c60();
                  if ((cVar4 != '\0') && (cVar4 = FUN_005e6c60(), cVar4 != '\0')) {
                    cVar4 = FUN_005e8a90();
                    if ((cVar4 == '\0') || ((iVar8 == 0 || (cVar4 = FUN_005e8a90(), cVar4 == '\0')))
                       ) {
                      (**(code **)(*(int *)param_1[0x16] + 0x228))(param_1,piVar19,0,0,0,0,0,0,0,1);
                    }
                    bVar20 = true;
                    goto LAB_0064282a;
                  }
                  FUN_00403c00();
                  uVar7 = FUN_009828c0();
                  uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar7);
                  cVar4 = FUN_005e6ba0();
                  if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x334))(0), cVar4 == '\0')
                     ) {
                    fVar21 = (float10)FUN_004d7e90(uStack_170,0);
                    if (fVar21 <= (float10)(int)uStack_154) {
                      uStack_180 = (int *)CONCAT13(1,(undefined3)uStack_180);
                      DAT_00b3b930 = piStack_184;
                    }
                  }
                }
                piVar11 = (int *)piStack_17c[1];
              }
            }
          }
          goto LAB_0064230d;
        }
      }
    }
  }
  goto LAB_006426e6;
  while( true ) {
    iVar8 = FUN_0067b6b0(*piVar18,0);
    if (((iVar8 != 0) && (cVar4 = FUN_005e32d0(), cVar4 != '\0')) &&
       ((*(char *)(iVar8 + 4) != '\0' && (cVar4 = FUN_005e8a90(), cVar4 == '\0')))) {
      FUN_00403c00();
      uVar7 = FUN_009828c0();
      uStack_154 = (double)CONCAT44(uStack_154._4_4_,uVar7);
      cVar4 = FUN_005e6ba0();
      if ((cVar4 == '\0') && (cVar4 = (**(code **)(*param_1 + 0x334))(0), cVar4 == '\0')) {
        fVar21 = (float10)FUN_004d7e90(uStack_170,0);
        if (fVar21 <= (float10)(int)uStack_154) {
          uStack_180 = (int *)CONCAT13(1,(undefined3)uStack_180);
          DAT_00b3b930 = piVar19;
        }
      }
    }
    piVar18 = (int *)piVar18[1];
    if (piVar18 == (int *)0x0) break;
LAB_00642270:
    if (*piVar18 == 0) break;
  }
LAB_0064230d:
  puVar12 = puStack_158;
  FUN_004526e0();
  FUN_00401f20(puVar12);
  if (((((uStack_180._3_1_ != '\0') && (DAT_00b3b930 != (int *)0x0)) &&
       (cVar4 = FUN_005e6ba0(), cVar4 == '\0')) &&
      (cVar4 = (**(code **)(*param_1 + 0x334))(0), cVar4 == '\0')) &&
     ((uStack_178[2] == 0 || ((*(uint *)(uStack_178[2] + 0x1c) >> 0x16 & 1) == 0)))) {
    (**(code **)(*param_1 + 0x314))(DAT_00b3b930);
  }
LAB_006426e6:
  FUN_00673a50(0);
  piVar19 = (int *)FUN_007616d0();
  piVar18 = uStack_178;
  uStack_178[0x69] = 0;
  piStack_184 = _DAT_00b36708;
  iVar8 = FUN_006ecc80();
  if (iVar8 == 0) {
LAB_00642730:
    piStack_184 = (int *)((float)piStack_184 + (float)piStack_184);
    uVar7 = uStack_180;
  }
  else {
    FUN_006ecc80();
    cVar4 = FUN_004c97f0();
    uVar7 = uStack_180;
    if (cVar4 == '\0') goto LAB_00642730;
  }
  while (((uStack_180 = (int *)uVar7, piVar19 != (int *)0x0 &&
          (piVar11 = (int *)*piVar19, piVar11 != (int *)0x0)) && (piVar18[0x69] == 0))) {
    fVar21 = (float10)FUN_004d7e90(piVar11,0);
    if ((float10)(float)piStack_184 < fVar21) {
      cVar4 = (**(code **)(*piVar11 + 400))();
      if (cVar4 != '\0') {
        iVar8 = (**(code **)(*piVar18 + 0x3b0))(piVar11);
        if (iVar8 == 0) {
          (**(code **)(*piVar18 + 0xa8))(piVar11,0,0,DAT_00b372f0);
        }
        else {
          *(int *)(iVar8 + 0xc) = DAT_00b372f0;
        }
      }
    }
    else {
      FUN_00640900(piVar11,param_1,(int)&uStack_180 + 3);
    }
    piVar19 = (int *)piVar19[1];
    uVar7 = uStack_180;
  }
  uStack_180._3_1_ = (char)((uint)uVar7 >> 0x18);
  if ((((uStack_180._3_1_ != '\0') && (DAT_00b3b930 != (int *)0x0)) &&
      (cVar4 = FUN_005e6ba0(), cVar4 == '\0')) &&
     ((cVar4 = (**(code **)(*param_1 + 0x334))(0), cVar4 == '\0' &&
      ((piVar18[2] == 0 || ((*(uint *)(piVar18[2] + 0x1c) >> 0x16 & 1) == 0)))))) {
    (**(code **)(*param_1 + 0x314))(DAT_00b3b930);
  }
  bVar20 = piVar18[0x69] != 0;
LAB_0064282a:
  *unaff_FS_OFFSET = local_10;
  return bVar20;
}



void FUN_006428f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c38f8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436fa0(0);
  in_ECX[0xc] = param_1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a71ffc;
  in_ECX[10] = param_2;
  in_ECX[0xb] = 0;
  FUN_00434600(param_3);
  FUN_00434cb0(4,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006429c0(byte param_1)

{
  FUN_00436fd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006429e0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(*(int *)(in_ECX + 0x28) + 0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x264))(*(undefined4 *)(in_ECX + 0x2c));
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x58) + 0x254))(0);
    if (*(int *)(in_ECX + 0x2c) == 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x58) + 600))(1);
    }
  }
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x10))(*(undefined4 *)(in_ECX + 0x28));
  return;
}



void FUN_00642a40(undefined4 param_1)

{
  int in_ECX;
  
  ModelLoader_CancelPending_helper2(param_1);
  if ((char)param_1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00642a63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x10))();
    return;
  }
  return;
}



void FUN_00642a70(int param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar2 = FUN_00401f00();
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006428f0(in_ECX);
  }
  local_4 = 0xffffffff;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 8));
  }
  (**(code **)(*in_ECX + 0xc))(param_1);
  (**(code **)(**(int **)(param_1 + 0x58) + 600))(0);
  (**(code **)(*g_IOManager_singleton + 0x3c))(iVar2);
  *unaff_FS_OFFSET = uVar1;
  return;
}



void FUN_00642b40(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  LONG LVar3;
  int *in_ECX;
  int unaff_ESI;
  undefined4 *unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ac618;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  cVar1 = (**(code **)(*in_ECX + 4))(param_1,&local_10,uVar2);
  if (cVar1 != '\0') {
    (**(code **)(*in_ECX + 0x10))(param_1);
    IOManager_TaskStateTransition(unaff_EDI);
  }
  local_c = -1;
  if (unaff_EDI != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(unaff_EDI + 2);
    if ((LVar3 == 0) && (unaff_EDI != (undefined4 *)0x0)) {
      (**(code **)*unaff_EDI)(1);
    }
  }
  *unaff_FS_OFFSET = unaff_ESI;
  return;
}



undefined4 FUN_00642bf0(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  uint uVar6;
  int *piVar7;
  
LAB_00642c00:
  while( true ) {
    cVar3 = FUN_0043c070(param_1,*param_2);
    if (cVar3 == '\0') {
      if ((in_ECX[5] & 0xfffffffe) != 0) goto code_r0x00642cb0;
      break;
    }
    if ((in_ECX[6] & 0xfffffffe) == 0) break;
    if ((*(uint *)((in_ECX[6] & 0xfffffffe) + 8) & 1) == 0) {
      (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
      uVar4 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[6] & 0xfffffffe));
      *param_2 = uVar4;
      puVar1 = (undefined4 *)*param_3;
      piVar7 = (int *)((in_ECX[6] & 0xfffffffe) + 4);
      if (puVar1 != (undefined4 *)*piVar7) {
        if (puVar1 != (undefined4 *)0x0) {
          LVar5 = InterlockedDecrement(puVar1 + 2);
          if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
        }
        iVar2 = *piVar7;
        *param_3 = iVar2;
        if (iVar2 != 0) {
          InterlockedIncrement((LONG *)(iVar2 + 8));
        }
      }
      uVar6 = in_ECX[6];
      goto LAB_00642d28;
    }
  }
  uVar4 = 0;
LAB_00642d69:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar4;
code_r0x00642cb0:
  if ((*(uint *)((in_ECX[5] & 0xfffffffe) + 8) & 1) == 0) {
    (**(code **)(*(int *)*in_ECX + 0x20))(*param_2);
    uVar4 = (**(code **)(*(int *)*in_ECX + 0x24))(*(undefined4 *)(in_ECX[5] & 0xfffffffe));
    *param_2 = uVar4;
    puVar1 = (undefined4 *)*param_3;
    piVar7 = (int *)((in_ECX[5] & 0xfffffffe) + 4);
    if (puVar1 != (undefined4 *)*piVar7) {
      if (puVar1 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar1 + 2);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      iVar2 = *piVar7;
      *param_3 = iVar2;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 8));
      }
    }
    uVar6 = in_ECX[5];
LAB_00642d28:
    uVar4 = 1;
    if ((*(uint *)((uVar6 & 0xfffffffe) + 8) & 1) == 0) goto LAB_00642d69;
    puVar1 = (undefined4 *)*param_3;
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 2);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *param_3 = 0;
    }
  }
  goto LAB_00642c00;
}



uint FUN_00642d90(int param_1,undefined4 *param_2,undefined4 param_3,char param_4)

{
  uint in_EAX;
  LPVOID pvVar1;
  uint uVar2;
  int in_ECX;
  
  if ((*(byte *)(param_1 + 0xc) & 2) != 0) {
    return in_EAX & 0xffffff00;
  }
  while( true ) {
    if ((*(byte *)(param_1 + 0xc) & 1) == 0) {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = FUN_00435d50(*(undefined4 *)(param_1 + 4),param_1 + 8,param_3);
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 1;
    }
    else {
      pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
      if (pvVar1 == (LPVOID)0x0) {
        ThreadSpecificInterfaceManager_AddInterface(in_ECX);
      }
      uVar2 = FUN_00642bf0(*(undefined4 *)(param_1 + 4),param_1 + 8,param_3);
    }
    if ((char)uVar2 != '\0') {
      *param_2 = *(undefined4 *)(param_1 + 8);
      return uVar2;
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
    if (*(uint *)(in_ECX + 8) <= *(uint *)(param_1 + 4)) {
      *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 2;
      return uVar2;
    }
    if (param_4 == '\0') break;
    *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xfe;
  }
  return uVar2;
}



void FUN_00642e50(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c392b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    FUN_0043c4c0(uVar4);
    FUN_00401f20(puVar1);
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    local_14 = 0;
    if (in_ECX[2] != 0) {
      do {
        uVar4 = *(uint *)(in_ECX[3] + local_14 * 4);
        *(undefined4 *)(in_ECX[3] + local_14 * 4) = 0;
        while (puVar1 = (undefined4 *)(uVar4 & 0xfffffffe), puVar1 != (undefined4 *)0x0) {
          uVar4 = puVar1[2];
          puVar1[2] = 0;
          puVar3 = (undefined4 *)puVar1[1];
          if (puVar3 != (undefined4 *)0x0) {
            LVar5 = InterlockedDecrement(puVar3 + 2);
            if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
              (**(code **)*puVar3)(1);
            }
            puVar1[1] = 0;
          }
          (**(code **)(*in_ECX + 0x20))(*puVar1);
          puVar3 = (undefined4 *)puVar1[1];
          if (((puVar3 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar3 + 2), LVar5 == 0)) &&
             (puVar3 != (undefined4 *)0x0)) {
            (**(code **)*puVar3)(1);
          }
          FUN_00401f20(puVar1);
        }
        local_14 = local_14 + 1;
      } while (local_14 < (uint)in_ECX[2]);
    }
    if (param_1 == '\0') {
      iVar6 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = ThreadSpecificInterfaceManager_ctor(uVar2);
      }
      in_ECX[5] = iVar6;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00643000(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint Comperand;
  uint uVar6;
  LONG LVar7;
  undefined4 *in_ECX;
  uint uVar8;
  int *unaff_FS_OFFSET;
  undefined4 uVar9;
  undefined1 local_15;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_15 = 1;
  uVar8 = 0;
  cVar2 = FUN_0043c070(param_1,param_2);
  if (cVar2 == '\0') {
    do {
      if (uVar8 == 0) {
        iVar4 = FUN_00401f00(0xc,uVar3);
        local_4 = 0;
        if (iVar4 == 0) {
          uVar8 = 0;
        }
        else {
          uVar9 = param_3;
          uVar5 = (**(code **)(*(int *)*in_ECX + 0x24))(param_2,param_3);
          uVar8 = FUN_004bd150(uVar5,uVar9);
        }
        local_4 = 0xffffffff;
      }
      Comperand = in_ECX[5] & 0xfffffffe;
      *(uint *)(uVar8 + 8) = Comperand;
      uVar6 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar8 & 0xfffffffe,Comperand);
      if (uVar6 == Comperand) {
        (**(code **)(*(int *)*in_ECX + 0x30))();
        goto LAB_00643141;
      }
      cVar2 = FUN_0043c070(param_1,param_2);
    } while (cVar2 == '\0');
    if (uVar8 != 0) {
      puVar1 = *(undefined4 **)(uVar8 + 4);
      if (puVar1 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar1 + 2);
        if ((LVar7 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
      }
      FUN_00401f20(uVar8);
    }
  }
  if (param_4 == '\0') {
    local_15 = 0;
  }
  else {
    LFM_DoublyLinkedQueueInsert(param_3);
  }
LAB_00643141:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[3];
  *puVar1 = 0;
  *unaff_FS_OFFSET = local_c;
  return CONCAT31((int3)((uint)puVar1 >> 8),local_15);
}



undefined1
FUN_00643180(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  LPVOID pvVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3958;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  pvVar4 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar4 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = FUN_00643000(param_1,param_2,&param_3,param_4);
  puVar1 = param_3;
  local_4 = 0xffffffff;
  if (param_3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(param_3 + 2);
    if (LVar5 == 0) {
      (**(code **)*puVar1)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



void FUN_00643230(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_28;
  undefined4 local_24;
  int local_20;
  undefined **local_1c;
  undefined4 local_18;
  undefined4 local_14;
  byte local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3998;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  local_1c = &PTR_FUN_00a72038;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  do {
    local_24 = 0;
    local_28 = (undefined4 *)0x0;
    local_4 = CONCAT31(local_4._1_3_,2);
    cVar2 = FUN_00642d90(&local_1c,&local_24,&local_28,1);
    puVar1 = local_28;
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 0x10))(local_24,uVar3);
      IOManager_TaskStateTransition(puVar1);
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 2);
      if (LVar4 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
  } while ((local_10 & 2) == 0);
  local_1c = &PTR_FUN_00a72038;
  local_4 = 0xffffffff;
  *in_ECX = (int)&PTR_LAB_00a72044;
  FUN_00642e50(1);
  FUN_00401f20(in_ECX[3]);
  local_20 = in_ECX[1];
  FUN_00401f20(local_20);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00643340(int *param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_0065cb80(param_2);
  }
  if ((param_2 == 0xb) && (param_3 != 0)) {
    FUN_0065cb80(0xb);
    FUN_004d8fb0();
    FUN_009828c0();
    return;
  }
  FUN_0065cb80(param_2);
  (**(code **)(*param_1 + 0x128))(param_2);
  FUN_009828c0();
  return;
}



float10 FUN_006433e0(int *param_1,int param_2,int param_3)

{
  float unaff_EBX;
  float10 fVar1;
  float10 fVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0.0;
  if (param_3 != 0) {
    fVar1 = (float10)FUN_0065cb80(param_2);
    local_c = (float)fVar1;
  }
  if ((param_2 == 0xb) && (param_3 != 0)) {
    fVar1 = (float10)FUN_0065cb80(0xb);
    fVar2 = (float10)FUN_004d8fb0();
    return (float10)(float)(fVar2 + (float10)local_c + (float10)(double)fVar1);
  }
  fVar1 = (float10)FUN_0065cb80(param_2);
  local_8 = SUB84((double)fVar1,0);
  fVar1 = (float10)(**(code **)(*param_1 + 300))(param_2);
  return (float10)(float)(fVar1 + (float10)unaff_EBX + (float10)(double)CONCAT44(local_8,local_c));
}



void FUN_00643480(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x134))(param_2,param_3);
  return;
}



void FUN_006434a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  (**(code **)(*param_1 + 0x130))(param_2,param_3);
  return;
}



void FUN_00643520(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  float10 fVar4;
  
  iVar2 = *in_ECX;
  fVar4 = (float10)(**(code **)(*param_1 + 0x28))();
  (**(code **)(iVar2 + 0x1c))((float)fVar4);
  in_ECX[2] = param_1[2];
  param_1[2] = 0;
  in_ECX[3] = param_1[3];
  *(undefined1 *)((int)in_ECX + 0x1f) = *(undefined1 *)((int)param_1 + 0x1f);
  uVar1 = (**(code **)(*param_1 + 0xc0))();
  *(undefined1 *)((int)in_ECX + 0x1d) = uVar1;
  uVar1 = (**(code **)(*param_1 + 0x390))();
  *(undefined1 *)(in_ECX + 7) = uVar1;
  in_ECX[0x11] = param_1[0x11];
  param_1[0x11] = 0;
  *(char *)(in_ECX + 0x21) = (char)param_1[0x21];
  in_ECX[10] = param_1[10];
  in_ECX[9] = param_1[9];
  uVar1 = (**(code **)(*param_1 + 0x148))();
  *(undefined1 *)((int)in_ECX + 0x1e) = uVar1;
  if (param_1[0x12] != 0) {
    in_ECX[0x12] = param_1[0x12];
    param_1[0x12] = 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x40c))();
  if (iVar2 != 0) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    iVar2 = *(int *)in_ECX[0xd];
    uVar3 = (**(code **)(*param_1 + 0x40c))();
    (**(code **)(iVar2 + 8))(uVar3);
  }
  iVar2 = (**(code **)(*param_1 + 0x2c))();
  in_ECX[6] = iVar2;
  in_ECX[0xb] = param_1[0xb];
  in_ECX[1] = param_1[1];
  in_ECX[0xe] = param_1[0xe];
  FUN_0065cd10(param_1 + 0x1c);
  in_ECX[0x22] = param_1[0x22];
  in_ECX[0x23] = param_1[0x23];
  return;
}



void FUN_00643640(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  float10 fVar4;
  
  fVar4 = (float10)FUN_00402bd0();
  *(float *)(in_ECX + 0x14) = (float)fVar4;
  iVar2 = FUN_00402b40();
  uVar3 = FUN_00402b80();
  cVar1 = FUN_00402ba0();
  *(uint *)(in_ECX + 0x18) = (int)cVar1 | (uVar3 | iVar2 << 4) << 9;
  return;
}



void FUN_006436e0(int param_1,float param_2)

{
  int *piVar1;
  int *in_ECX;
  
  if ((param_1 != 0) &&
     (piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0),
     piVar1 != (int *)0x0)) {
    if (3600.0 < param_2) {
      (**(code **)(*in_ECX + 0x14))(param_1,1);
    }
    (**(code **)(*piVar1 + 0x1c0))(0);
  }
  return;
}



void FUN_00643740(int param_1)

{
  int in_ECX;
  
  if ((DAT_00b3bf80 != 0) && (param_1 != 0)) {
    FUN_006826d0(param_1);
  }
  if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0x34))(1);
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  return;
}



undefined4 FUN_00643780(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 4))();
    if (iVar1 == 2) {
      return *(undefined4 *)(in_ECX + 0x34);
    }
  }
  return 0;
}



void FUN_00643810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  FUN_0060d780(param_1,param_2,param_3);
  if (*(int *)(in_ECX + 0x2c) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x2c),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar2 = FUN_009832e6(uVar1);
    *(int *)(in_ECX + 0x2c) = iVar2;
    if (iVar2 != 0) {
      FUN_004d6f80(1);
    }
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x30),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    uVar1 = FUN_009832e6(uVar1);
    *(undefined4 *)(in_ECX + 0x30) = uVar1;
  }
  return;
}



void FUN_00643890(int param_1)

{
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_004d6f80(1);
  }
  *(int *)(in_ECX + 0x2c) = param_1;
  return;
}



void FUN_006438f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c39c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0060cd90(uVar1);
  *in_ECX = &PTR_FUN_00a720a4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  local_4 = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  FUN_0065be10();
  in_ECX[5] = 0xbf800000;
  in_ECX[2] = 0;
  in_ECX[3] = 0xbf800000;
  in_ECX[0xd] = 0;
  in_ECX[1] = 0;
  in_ECX[4] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[6] = 0;
  in_ECX[0x23] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xc] = 0;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  *(undefined1 *)((int)in_ECX + 0x1f) = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[9] = 0;
  in_ECX[0xe] = 0;
  *(undefined1 *)((int)in_ECX + 0x1e) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006439e0(int *param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iStack_14;
  int *local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  local_10 = (int *)(in_ECX + 0x54);
  piVar8 = local_10;
  local_4 = in_ECX;
  do {
    local_8 = piVar8;
    if ((local_10 == (int *)0x0) || (puVar1 = (undefined4 *)*local_10, puVar1 == (undefined4 *)0x0))
    {
      iVar4 = piVar8[1];
      while (iVar4 != 0) {
        iVar4 = *(int *)(piVar8[1] + 4);
        FUN_00401f20(piVar8[1]);
        piVar8[1] = iVar4;
      }
      *piVar8 = 0;
      return;
    }
    local_c = puVar1[1];
    piVar8 = (int *)*puVar1;
    bVar2 = true;
    iVar4 = FUN_004db6b0();
    if (iVar4 == 0) {
LAB_00643a44:
      cVar3 = (**(code **)(*piVar8 + 400))();
      if (cVar3 != '\0') goto LAB_00643a58;
LAB_00643b26:
      FUN_004d7e90(piVar8,0);
      uVar6 = FUN_009828c0();
      puVar1[5] = uVar6;
LAB_00643d46:
      FUN_004d6f80(1);
      piVar8 = (int *)(local_4 + 0x3c);
      iVar4 = *(int *)(local_4 + 0x40);
      while (iVar4 != 0) {
        piVar8 = (int *)piVar8[1];
        iVar4 = piVar8[1];
      }
      if (*piVar8 == 0) {
        *piVar8 = (int)puVar1;
      }
      else {
        piVar7 = (int *)FUN_00401f00(8);
        if (piVar7 == (int *)0x0) {
          piVar8[1] = 0;
        }
        else {
          *piVar7 = (int)puVar1;
          piVar7[1] = 0;
          piVar8[1] = (int)piVar7;
        }
      }
    }
    else {
      iVar4 = (**(code **)(*param_1 + 0x170))();
      iVar5 = FUN_004db6b0();
      if (iVar5 == iVar4) goto LAB_00643a44;
LAB_00643a58:
      iStack_14 = -1;
      iVar4 = FUN_00470520(local_c);
      cVar3 = (**(code **)(*piVar8 + 0x198))(0);
      if ((cVar3 == '\0') && (iVar5 = FUN_005e4420(), iVar4 <= iVar5)) {
        cVar3 = FUN_004d7f80();
        piVar7 = piVar8;
        if (cVar3 == '\0') {
          uVar6 = FUN_004db6b0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
          iVar4 = FUN_009832e6(uVar6);
          if ((iVar4 == 0) || (piVar7 = (int *)FUN_00675220(iVar4), piVar7 == (int *)0x0))
          goto LAB_00643b42;
        }
        FUN_005e02e0(0);
        cVar3 = FUN_00467560();
        if ((cVar3 == '\0') && (piVar7 != (int *)0x0)) {
          iVar4 = local_c;
          FUN_005e02e0(0);
          cVar3 = FUN_004685b0(iVar4);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar3 == '\0') {
              puVar1[7] = 2;
              goto LAB_00643b26;
            }
            bVar2 = false;
          }
        }
      }
LAB_00643b42:
      cVar3 = (**(code **)(*piVar8 + 400))();
      if (cVar3 == '\0') {
        uVar6 = (**(code **)(*param_1 + 0x284))(0x24);
        FUN_005e0430(0x1f);
        uVar6 = FUN_009828c0(uVar6);
        iVar4 = FUN_00546600(uVar6);
LAB_00643c51:
        if ((iVar4 < 1) && (iStack_14 < 1)) goto LAB_00643c5f;
        cVar3 = (**(code **)(*piVar8 + 400))();
        if (cVar3 == '\0') {
          if (puVar1[7] == 1) {
            puVar1[7] = 4;
            local_c = 0;
            cVar3 = FUN_005e4a00(DAT_00b35ec8,0,1,0,&local_c);
            if (((cVar3 == '\0') &&
                (cVar3 = FUN_005e4a00(DAT_00b35ecc,0,1,0,&local_c), cVar3 == '\0')) &&
               (iVar5 = FUN_004d7740(), iVar5 != 0)) goto LAB_00643d2c;
          }
          else {
            puVar1[7] = 3;
          }
        }
        else {
          cVar3 = (**(code **)(*param_1 + 0x334))(1);
          if (iVar4 < iStack_14) {
            if (cVar3 == '\0') {
              puVar1[7] = 5;
            }
            else {
LAB_00643d2c:
              bVar2 = false;
            }
          }
          else {
            if (cVar3 != '\0') goto LAB_00643d2c;
            puVar1[7] = 4;
          }
        }
        puVar1[2] = iVar4;
        puVar1[3] = iStack_14;
        if (bVar2) goto LAB_00643d46;
      }
      else {
        cVar3 = (**(code **)(*piVar8 + 0x198))(0);
        if ((cVar3 == '\0') && (cVar3 = FUN_004d7f80(), cVar3 != '\0')) {
          uVar6 = (**(code **)(*param_1 + 0x284))(0x24);
          FUN_005e0430(0x1f);
          uVar6 = FUN_009828c0(uVar6);
          local_10 = (int *)FUN_00546620(uVar6);
          uVar12 = 100;
          uVar11 = 0;
          uVar10 = 0;
          uVar6 = 0;
          fVar9 = (float10)FUN_004d7e90(piVar8,0);
          uVar6 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar9,uVar6,uVar10,uVar11,uVar12);
          uVar6 = (**(code **)(*param_1 + 0x224))(piVar8,0,uVar6);
          uVar6 = FUN_00546190(uVar6);
          (**(code **)(*param_1 + 0x284))(0x24);
          FUN_005e02e0(0);
          cVar3 = FUN_00467560();
          if (cVar3 != '\0') {
            uVar6 = 100;
          }
          uVar10 = (**(code **)(*param_1 + 0x284))(0x24);
          iStack_14 = FUN_00546640(uVar6,uVar10);
          iVar4 = local_c;
          goto LAB_00643c51;
        }
LAB_00643c5f:
        cVar3 = FUN_005e3270();
        if ((cVar3 == '\0') &&
           ((cVar3 = (**(code **)(*piVar8 + 400))(), cVar3 != '\0' &&
            (cVar3 = FUN_004d7f80(), cVar3 == '\0')))) {
          iVar4 = (**(code **)(*param_1 + 0x170))();
          iVar5 = FUN_004db6b0();
          if (iVar5 != iVar4) {
            puVar1[7] = 5;
            goto LAB_00643d46;
          }
        }
      }
      FUN_00401f20(puVar1);
    }
    local_10 = (int *)local_10[1];
    piVar8 = local_8;
  } while( true );
}



void FUN_00643e30(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar10 = 0;
  piVar3 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x2c),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,
                               0,uVar2);
  if (((piVar3 != param_1) && (piVar3 != (int *)0x0)) && (piVar3[0x16] != 0)) {
    iVar4 = (**(code **)(*param_1 + 0x380))();
    if (iVar4 == 0) {
      iVar4 = (**(code **)(*param_1 + 0x18c))();
      if (iVar4 != 0) {
        (**(code **)(*param_1 + 800))();
      }
    }
    iVar4 = FUN_00401f00(0x3c);
    uStack_4 = 0;
    if (iVar4 != 0) {
      iVar10 = FUN_00568e10();
    }
    uStack_4 = 0xffffffff;
    FUN_005661e0(1);
    *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 6;
    FUN_00565e00(*(undefined4 *)(*(int *)(in_ECX + 8) + 0x24));
    FUN_00565ec0(*(undefined4 *)(*(int *)(in_ECX + 8) + 0x28));
    *(undefined4 *)(iVar10 + 0x18) = 6;
    FUN_00569e90(0);
    FUN_00569ec0(param_1);
    uVar5 = FUN_00452a60();
    FUN_00468230(uVar5);
    if ((*(uint *)(param_2 + 0x1c) >> 0x13 & 1) == 0) {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfff7ffff;
    }
    else {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x80000;
    }
    if ((*(uint *)(param_2 + 0x1c) >> 0x12 & 1) == 0) {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffbffff;
    }
    else {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x40000;
    }
    if ((*(uint *)(param_2 + 0x1c) >> 0xd & 1) == 0) {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xffffdfff;
    }
    else {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x2000;
    }
    if ((*(uint *)(param_2 + 0x1c) >> 0x11 & 1) == 0) {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xfffdffff;
    }
    else {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x20000;
    }
    if ((*(uint *)(param_2 + 0x1c) >> 0xc & 1) == 0) {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) & 0xffffefff;
    }
    else {
      *(uint *)(iVar10 + 0x1c) = *(uint *)(iVar10 + 0x1c) | 0x1000;
    }
    (**(code **)(*(int *)piVar3[0x16] + 0x20))();
    iVar4 = FUN_005e0380();
    if (iVar4 != 0) {
      piVar1 = (int *)piVar3[0x16];
      uVar5 = (**(code **)(*piVar1 + 0x390))();
      uVar6 = (**(code **)(*piVar1 + 0xc0))(uVar5);
      uVar7 = (**(code **)(*piVar1 + 0xcc))(uVar6);
      uVar8 = (**(code **)(*piVar1 + 0x180))(uVar7);
      uVar9 = FUN_005e0380(uVar8);
      FUN_004268b0(uVar9,uVar8,uVar7,uVar6,uVar5);
    }
    FUN_00424c50(piVar3);
    FUN_005f1590(iVar10,0,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00644050(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int *in_ECX;
  
  if (in_ECX[2] != 0) {
    cVar1 = FUN_00566dc0(param_1,0,0xbf800000);
    if (cVar1 == '\0') {
      uVar2 = (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      return uVar2 & 0xffffff00;
    }
  }
  uVar2 = in_ECX[2];
  if ((*(uint *)(uVar2 + 0x1c) >> 2 & 1) != 0) {
    uVar2 = (**(code **)(*in_ECX + 0x188))(param_1,1);
  }
  return uVar2 & 0xffffff00;
}



void FUN_006440b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = 0;
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (((int *)in_ECX[0xb] == (int *)0x0) ||
     (iVar3 = *(int *)(in_ECX[2] + 0x28), *(char *)(in_ECX[2] + 0x20) != '\b')) {
switchD_006440ff_caseD_13:
    if (((iVar3 != 0) && (iVar3 = FUN_00569e60(), iVar3 != 0)) ||
       ((*(uint *)(in_ECX[2] + 0x1c) >> 2 & 1) != 0)) {
      uVar4 = 1;
      if ((*(int *)(in_ECX[2] + 0x28) != 0) && (iVar3 = FUN_00452a60(), iVar3 != 0)) {
        uVar4 = FUN_00452a60();
      }
      cVar1 = (**(code **)(*in_ECX + 0x554))(param_1,uVar4);
      if (cVar1 == '\0') {
        iVar3 = FUN_00659a00();
        if (1 < iVar3) {
          (**(code **)(*in_ECX + 0x51c))(param_1,1);
          return;
        }
        (**(code **)(*in_ECX + 0x6c))(param_1,0x45610000);
        return;
      }
      cVar1 = FUN_00566dc0(param_1,0,0xbf800000);
      if ((cVar1 == '\0') && (*(char *)(in_ECX[2] + 0x20) == '\x03')) {
        (**(code **)(*in_ECX + 0x17c))(0);
      }
      else {
        if ((*(int *)(in_ECX[2] + 0x18) == 0x1a) && (*(int *)(in_ECX[2] + 0x30) == 0)) {
          uVar4 = 2;
        }
        else {
          uVar4 = 1;
        }
        (**(code **)(*in_ECX + 0x188))(param_1,uVar4);
      }
      if (*(char *)(in_ECX[2] + 0x20) != '\x02') {
        return;
      }
      (**(code **)(*in_ECX + 0x508))(param_1);
      return;
    }
    if (*(int *)(in_ECX[2] + 0x18) == 0x1a) {
      (**(code **)(*in_ECX + 0x188))(param_1,2);
      return;
    }
  }
  else {
    iVar2 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
    switch(*(undefined1 *)(iVar2 + 4)) {
    case 0x12:
    case 0x17:
    case 0x18:
    case 0x1c:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x32:
    case 0x33:
      break;
    default:
      goto switchD_006440ff_caseD_13;
    case 0x1a:
      uVar4 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b03518,0);
      iVar3 = FUN_009832e6(uVar4);
      if (iVar3 == 0) {
        return;
      }
      if ((*(uint *)(iVar3 + 0x7c) >> 1 & 1) != 0) {
        return;
      }
    }
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



void FUN_00644390(int *param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  float fVar14;
  float fVar15;
  float fStack_4c;
  undefined4 *puStack_48;
  float fStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [32];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c4268;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffa4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = (**(code **)(*in_ECX + 0x184))(uVar4);
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  fStack_4c = 0.0;
  piVar6 = (int *)FUN_005e6780();
  if (piVar6 == (int *)0x0) {
    if (((in_ECX[0xb] == 0) ||
        ((cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar3 == '\0' &&
         (cVar3 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar3 == '\0')))) &&
       (((**(code **)(*in_ECX + 0x558))(param_1), in_ECX[0xb] == 0 ||
        ((cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar3 == '\0' &&
         (cVar3 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar3 == '\0')))))) {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      goto LAB_006448f1;
    }
    piVar1 = (int *)in_ECX[0x11];
    if ((piVar1 != (int *)0x0) && ((int *)*piVar1 == param_1)) {
      piVar6 = (int *)FUN_004d8d70(piVar1[1],0);
    }
  }
  param_1 = piVar6;
  if ((*(int *)(in_ECX[2] + 0x28) != 0) && (iVar7 = FUN_00452a60(), iVar7 != 0)) {
    fStack_4c = (float)FUN_00452a60();
  }
  if (((in_ECX[0xb] == 0) ||
      ((cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar3 == '\0' &&
       (cVar3 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar3 == '\0')))) &&
     (cVar3 = (**(code **)(*in_ECX + 0x554))(piVar2,fStack_4c), cVar3 == '\0')) {
    (**(code **)(*in_ECX + 0x188))(piVar2,1);
    if (param_1 == (int *)0x0) goto LAB_006448f1;
    FUN_00484470();
  }
  else {
    iVar7 = FUN_0046b250(0x3a);
    fVar13 = (float10)FUN_00402bd0();
    fStack_4c = (float)fVar13;
    fVar13 = (float10)FUN_006599b0();
    if ((float10)fStack_4c < fVar13) {
      fStack_4c = fStack_4c + 24.0;
    }
    fVar13 = (float10)FUN_006599b0();
    fVar14 = (3600.0 / *(float *)(iVar7 + 0x24)) * (float)((float10)fStack_4c - fVar13);
    cVar3 = FUN_00566dc0(piVar2,0,0xbf800000);
    if (cVar3 == '\0') {
      FUN_005677b0(piVar2,2);
      iVar5 = FUN_009828c0();
      puStack_48 = (undefined4 *)0x0;
      fStack_44 = 0.0;
      if (in_ECX[0xb] != 0) {
        cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
        if (cVar3 != '\0') {
          FUN_00566b30(&uStack_38,piVar2);
          uVar9 = FUN_00566a40(piVar2);
          uVar11 = FUN_00566940(piVar2);
          FUN_0068a9f0();
          uStack_4 = 0;
          FUN_0068b030(piVar2,&uStack_38,uVar9,uVar11);
          fVar13 = (float10)FUN_0068a760(piVar2);
          puStack_48 = (undefined4 *)(float)fVar13;
          iVar7 = in_ECX[0xb];
          FUN_0068b030(iVar7,&uStack_38,uVar9,uVar11);
          fVar13 = (float10)FUN_0068a760(iVar7);
          fStack_44 = (float)fVar13;
          uStack_4 = 0xffffffff;
          FUN_0068aa10();
        }
        if ((((in_ECX[0xb] != 0) &&
             (cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar3 != '\0')) &&
            (fVar13 = (float10)FUN_004d7e90(in_ECX[0xb],0), (float10)iVar5 <= fVar13)) &&
           ((float)puStack_48 <= fStack_44)) goto LAB_006448d9;
      }
      fVar15 = (float)iVar5;
      iVar5 = *in_ECX;
      uVar9 = FUN_00566940(piVar2);
      uVar11 = FUN_00566a40(piVar2);
      uVar12 = FUN_00566b30(auStack_2c,piVar2);
      (**(code **)(iVar5 + 0x418))(piVar2,uVar12,uVar11,uVar9,fVar14,fVar15);
    }
    else if (((in_ECX[0xb] == 0) ||
             (cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar3 != '\0')) &&
            (in_ECX[0xb] != 0)) {
      cVar3 = FUN_00566dc0(in_ECX[0xb],0,0xbf800000);
      if (cVar3 != '\0') {
        (**(code **)(*in_ECX + 0x188))(piVar2,1);
      }
    }
    else {
      if (param_1 != (int *)0x0) {
        fStack_4c = 0.0;
        if ((int *)*param_1 != (int *)0x0) {
          fStack_4c = *(float *)*param_1;
        }
        puStack_48 = (undefined4 *)0x0;
        if ((fStack_4c != 0.0) && (iVar7 = FUN_0041fb00(), iVar7 != 0)) {
          iVar7 = FUN_0041fb00();
          puStack_48 = *(undefined4 **)(iVar7 + 0xc);
        }
        iVar7 = FUN_005697e0();
        if (((iVar7 != 0) || (iVar7 = in_ECX[0xc], iVar7 != 0)) &&
           (iVar8 = FUN_004d6d40(), iVar8 != 0)) {
          iVar5 = param_1[2];
          uVar9 = FUN_00452a60(puStack_48);
          FUN_005fc6d0(iVar5,fStack_4c,iVar7,uVar9,puStack_48);
          (**(code **)(*in_ECX + 0x188))(piVar2,1);
          goto LAB_006448d9;
        }
        if ((int *)*param_1 != (int *)0x0) {
          fStack_4c = *(float *)*param_1;
        }
        puStack_48 = (undefined4 *)0x0;
        if (((*(int *)(iVar5 + 0x24) != 0) &&
            ((piVar6 = (int *)FUN_005697e0(), piVar6 != (int *)0x0 ||
             (piVar6 = (int *)in_ECX[0xc], piVar6 != (int *)0x0)))) &&
           ((iVar5 = (**(code **)(*piVar6 + 0x170))(), iVar5 == DAT_00b35eac ||
            (iVar5 = (**(code **)(*piVar6 + 0x170))(), iVar5 == DAT_00b35eb0)))) {
          puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x174))();
          uStack_38 = *puVar10;
          uStack_34 = puVar10[1];
          uStack_30 = puVar10[2];
          puStack_48 = (undefined4 *)FUN_00401f00(0xc);
          if (puStack_48 == (undefined4 *)0x0) {
            puStack_48 = (undefined4 *)0x0;
          }
          else {
            *puStack_48 = uStack_38;
            puStack_48[1] = uStack_34;
            puStack_48[2] = uStack_30;
          }
        }
        iVar5 = FUN_00569e60();
        if (iVar5 == 0) {
          FUN_00452a60();
        }
        iVar5 = param_1[2];
        iVar7 = *piVar2;
        uVar9 = FUN_00452a60(puStack_48,0);
        (**(code **)(iVar7 + 0x2c8))(iVar5,fStack_4c,uVar9);
      }
      (**(code **)(*in_ECX + 0x188))(piVar2,1);
    }
LAB_006448d9:
    if (param_1 == (int *)0x0) goto LAB_006448f1;
    FUN_00484470();
  }
  FUN_00401f20(param_1);
LAB_006448f1:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00644a70(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  float fVar3;
  
  iVar1 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  (**(code **)(*in_ECX + 0x55c))(param_1);
  fVar3 = 0.0;
  if (*(int *)(iVar1 + 0x28) != 0) {
    iVar1 = FUN_00452a60();
    fVar3 = (float)iVar1;
  }
  if ((in_ECX[0xb] != 0) && (fVar2 = (float10)FUN_004d7e90(in_ECX[0xb],0), (float10)fVar3 < fVar2))
  {
    return;
  }
  if (in_ECX[0xb] == 0) {
    FUN_00566dc0(param_1,0,0xbf800000);
  }
  return;
}



void FUN_00644b10(float param_1)

{
  float fVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  uVar3 = param_1;
  if ((in_ECX[2] != 0) && ((*(byte *)(in_ECX[2] + 0x1e) & 1) != 0)) {
    cVar4 = FUN_00663a60(param_1);
    if (cVar4 != '\0') {
      return;
    }
    iVar5 = FUN_00663a00();
    if (DAT_00b36a80 <= iVar5) {
      return;
    }
    FUN_005668e0(0);
  }
  if (((in_ECX[0xb] == 0) && ((**(code **)(*in_ECX + 0x558))(param_1), in_ECX[0xb] == 0)) ||
     ((*(int *)(in_ECX[2] + 0x24) != 0 &&
      ((cVar4 = FUN_00566dc0(param_1,0,0xbf800000), cVar4 != '\0' &&
       (*(char *)(in_ECX[2] + 0x20) == '\x01')))))) {
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    cVar4 = FUN_005660a0();
    if (cVar4 != '\0') {
      piVar2 = (int *)in_ECX[2];
      in_ECX[2] = 0;
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x10))(1);
      }
      (**(code **)(*in_ECX + 0x18))(param_1,0);
      return;
    }
  }
  iVar5 = FUN_0046b250(0x3a);
  fVar7 = (float10)FUN_00402bd0();
  param_1 = (float)fVar7;
  fVar7 = (float10)FUN_006599b0();
  if ((float10)param_1 < fVar7) {
    param_1 = param_1 + 24.0;
  }
  fVar7 = (float10)FUN_006599b0();
  fVar1 = *(float *)(iVar5 + 0x24);
  fVar8 = (float10)FUN_005677b0(uVar3,2);
  if ((in_ECX[0xb] != 0) &&
     (fVar9 = (float10)FUN_004d7e90(in_ECX[0xb],0), (float10)(float)fVar8 < fVar9)) {
    piVar2 = (int *)in_ECX[0xb];
    iVar5 = *in_ECX;
    uVar6 = FUN_004d6670((3600.0 / fVar1) * (float)((float10)param_1 - fVar7),(float)fVar8);
    uVar6 = FUN_006ecc80(uVar6);
    uVar6 = (**(code **)(*piVar2 + 0x174))(uVar6);
    (**(code **)(iVar5 + 0x418))(uVar3,uVar6);
    return;
  }
  return;
}



void FUN_00644ce0(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((in_ECX[2] != 0) && (*(int *)(in_ECX[2] + 0x28) != 0)) {
    iVar1 = FUN_00569e60();
    if (iVar1 != 0) {
      iVar1 = FUN_00569e60();
      if (((*(uint *)(iVar1 + 8) >> 5 & 1) == 0) && (iVar1 != in_ECX[0xb])) {
        (**(code **)(*in_ECX + 0xd0))(iVar1);
      }
    }
  }
  return;
}



void FUN_00644de0(void)

{
  uint uVar1;
  int iVar2;
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
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar2 = FUN_00401f00(0x14,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0068a9f0();
    }
    *(int *)(in_ECX + 0x34) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_00644e50(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  if (param_1 == DAT_00b333c4) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    cVar2 = FUN_006899e0();
    if (cVar2 == '\0') {
      iVar4 = *param_1;
      uVar3 = FUN_0068a160();
      (**(code **)(iVar4 + 0x1cc))(uVar3);
    }
    else {
      (**(code **)(*param_1 + 0x1cc))(param_2);
    }
    iVar4 = (**(code **)(*in_ECX + 0x378))();
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*in_ECX + 0x380))(), iVar4 != 0)) {
      iVar4 = (**(code **)(*in_ECX + 0x380))();
      (**(code **)(*DAT_00b333c4 + 0x1e8))((float)*(ushort *)(iVar4 + 0xc) / 1000.0);
      return 1;
    }
    iVar4 = (**(code **)(*DAT_00b333c4 + 0x380))();
    if (iVar4 == 0) {
      return 1;
    }
    piVar5 = (int *)(**(code **)(*DAT_00b333c4 + 0x380))();
    iVar4 = *DAT_00b333c4;
    fVar7 = (float10)(**(code **)(*piVar5 + 0x1e0))();
    (**(code **)(iVar4 + 0x1e8))((float)(fVar7 + (float10)1.5707963705062866));
    return 1;
  }
  if (param_1 == (int *)0x0) {
    return 1;
  }
  cVar2 = (**(code **)(*in_ECX + 0x34c))();
  if (cVar2 != '\0') {
    return 1;
  }
  if ((in_ECX[0xd] == 0) || (cVar2 = FUN_006899e0(), cVar2 != '\0')) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    cVar2 = FUN_006899e0();
    if (cVar2 != '\0') {
      uStack_8 = param_2[1];
      uStack_c = *param_2;
      fStack_4 = (float)param_2[2];
      piVar5 = (int *)(**(code **)(*in_ECX + 0xcc))();
      cVar2 = FUN_005e0530();
      if ((((cVar2 == '\0') && (piVar5 != (int *)0x0)) &&
          (cVar2 = (**(code **)(*piVar5 + 400))(), cVar2 != '\0')) &&
         (cVar2 = FUN_005e0530(), fVar1 = fStack_4, cVar2 != '\0')) {
        fVar7 = (float10)FUN_005e0660();
        fStack_4 = (float)((float10)fVar1 - fVar7);
      }
      if (DAT_00b15800 == '\0') {
        cVar2 = FUN_0068b030(param_1,&uStack_c,param_3,param_4);
      }
      else {
        uVar3 = FUN_0065d550();
        FUN_006836e0(param_1,param_3,param_4,uStack_c,uStack_8,fStack_4,uVar3);
        param_2 = (undefined4 *)((uint)param_2 & 0xffffff00);
        cVar2 = FUN_00682820(param_1,&param_2);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = (char)param_2;
      }
      if (cVar2 == '\0') {
        FUN_005f7cf0(0,0);
        return 0;
      }
      iVar4 = *(int *)in_ECX[0xd];
      uVar3 = FUN_0068a160(0);
      (**(code **)(iVar4 + 0x14))(param_1,uVar3);
      cVar2 = FUN_006899e0();
      if (cVar2 != '\0') goto LAB_00645260;
    }
  }
  iVar4 = (**(code **)(*param_1 + 0x380))();
  if (((iVar4 != 0) && (in_ECX[0xd] != 0)) &&
     ((iVar4 = FUN_0068a180(), iVar4 != 0 &&
      ((iVar4 = FUN_004d7630(), iVar4 != 0 &&
       (fVar7 = (float10)FUN_004d7e90(param_1,0),
       fVar7 < (float10)800.0 != (fVar7 == (float10)800.0))))))) {
    (**(code **)(*param_1 + 0x380))();
    cVar2 = FUN_005e9a60();
    if (cVar2 == '\0') {
      (**(code **)(*param_1 + 0x380))();
      FUN_005f80d0();
    }
    (**(code **)(*param_1 + 0x230))();
    return 0;
  }
  FUN_0068a9d0(param_5);
  iVar4 = FUN_00659a00();
  cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x20))(param_1);
  if (cVar2 == '\0') {
    cVar2 = FUN_005e3270();
    if (((cVar2 == '\0') && (iVar6 = (**(code **)(*param_1 + 0x380))(), iVar6 == 0)) &&
       (cVar2 = (**(code **)(*(int *)param_1[0x16] + 0x3a0))(param_1,0), cVar2 != '\0')) {
      return 0;
    }
    (**(code **)(*(int *)in_ECX[0xd] + 0x18))(param_1);
  }
  iVar6 = FUN_00659a00();
  if (iVar4 != iVar6) {
    return 1;
  }
  cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x20))(param_1);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
    if ((cVar2 == '\0') && (iVar6 = (**(code **)(*in_ECX + 0x410))(), iVar6 != 0)) {
      FUN_00684ec0();
      (**(code **)(*param_1 + 0x180))(1);
    }
    cVar2 = FUN_0068aba0(param_1);
    if (cVar2 == '\0') {
      return 0;
    }
    if (in_ECX[0xd] == 0) {
      return 1;
    }
    iVar6 = FUN_00659a00();
    if (iVar4 != iVar6) {
      return 1;
    }
    iVar6 = FUN_0065ad00();
    if (iVar4 != iVar6) {
      return 1;
    }
  }
  cVar2 = FUN_006899e0();
  if (cVar2 == '\0') {
    return 1;
  }
LAB_00645260:
  (**(code **)(*param_1 + 0x180))(1);
  return 1;
}



undefined4
FUN_00645280(int *param_1,undefined4 *param_2,undefined4 param_3,float param_4,float param_5,
            undefined4 param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 1;
  }
  if (param_5 <= 0.0) {
    return 1;
  }
  if ((in_ECX[0xd] == 0) || (cVar2 = FUN_006899e0(), cVar2 != '\0')) {
    if (in_ECX[0xd] == 0) {
      (**(code **)(*in_ECX + 0x408))();
    }
    cVar2 = FUN_006899e0();
    if (cVar2 != '\0') {
      if (DAT_00b15800 == '\0') {
        cVar2 = FUN_0068b030(piVar1,param_2,param_3,param_4);
      }
      else {
        uVar3 = FUN_0065d550();
        FUN_006836e0(piVar1,param_3,param_4,*param_2,param_2[1],param_2[2],uVar3);
        param_1 = (int *)((uint)param_1 & 0xffffff00);
        cVar2 = FUN_00682820(piVar1,&param_1);
        if (cVar2 == '\0') {
          return 0;
        }
        cVar2 = (char)param_1;
      }
      if (cVar2 == '\0') {
        FUN_005f7cf0(0,0);
        return 0;
      }
      iVar4 = *(int *)in_ECX[0xd];
      uVar3 = FUN_0068a160(0);
      (**(code **)(iVar4 + 0x14))(piVar1,uVar3);
      cVar2 = FUN_006899e0();
      if (cVar2 != '\0') {
        (**(code **)(*piVar1 + 0x180))(1);
        return 1;
      }
    }
  }
  FUN_0068a9d0(param_6);
  param_4 = param_5;
  while( true ) {
    cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x20))(piVar1);
    if (cVar2 != '\0') {
      iVar4 = FUN_00659a00();
      cVar2 = FUN_0068aba0(piVar1);
      if (cVar2 == '\0') {
        return 0;
      }
      iVar5 = FUN_00659a00();
      if (iVar4 != iVar5) {
        return 1;
      }
      iVar5 = FUN_0065ad00();
      if (iVar4 != iVar5) {
        return 1;
      }
      if (in_ECX[0xd] == 0) {
        return 1;
      }
    }
    cVar2 = FUN_006899e0();
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 0x180))(1);
      return 1;
    }
    iVar4 = FUN_00659a00();
    cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0xc))();
    if (cVar2 != '\0') {
      iVar5 = *(int *)in_ECX[0xd];
      uVar3 = FUN_0068a160(0);
      (**(code **)(iVar5 + 0x14))(piVar1,uVar3);
    }
    cVar2 = FUN_005e3270();
    if (((cVar2 == '\0') && (iVar5 = (**(code **)(*piVar1 + 0x380))(), iVar5 == 0)) &&
       (cVar2 = (**(code **)(*(int *)piVar1[0x16] + 0x3a0))(piVar1,0), cVar2 != '\0')) {
      return 0;
    }
    fVar6 = (float10)(**(code **)(*(int *)in_ECX[0xd] + 0x1c))(piVar1,param_3);
    param_1 = (int *)(float)fVar6;
    iVar5 = FUN_00659a00();
    if (iVar4 != iVar5) {
      return 1;
    }
    iVar5 = FUN_0065ad00();
    if (iVar4 != iVar5) break;
    if (in_ECX[0xd] == 0) {
      return 1;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))();
    if (cVar2 != '\0') {
      return 1;
    }
    if (param_4 <= 0.0) {
      return 1;
    }
  }
  return 1;
}



void FUN_00645500(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) {
    FUN_00401f20(piVar1);
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x48);
  if ((piVar1 != (int *)0x0) && (*piVar1 == param_1)) {
    FUN_00401f20(piVar1);
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar1 = (int *)(in_ECX + 0x3c);
  while ((piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0))) {
    if (*piVar2 == param_1) {
      FUN_0065c620(piVar2);
      FUN_00401f20(piVar2);
      piVar1 = (int *)(in_ECX + 0x3c);
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  if (*(int *)(in_ECX + 0x30) == param_1) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  piVar2 = (int *)(in_ECX + 0x4c);
  piVar1 = (int *)0x0;
  while ((piVar5 = piVar2, piVar5 != (int *)0x0 && (iVar3 = *piVar5, iVar3 != 0))) {
    if (iVar3 == param_1) {
      if (piVar1 == (int *)0x0) {
        piVar4 = (int *)piVar5[1];
        piVar2 = piVar5;
        if (piVar4 == (int *)0x0) {
          *piVar5 = 0;
        }
        else {
          piVar5[1] = piVar4[1];
          *piVar5 = *piVar4;
          FUN_00401f20(piVar4);
        }
      }
      else {
        FUN_0065c620(iVar3);
        piVar2 = (int *)piVar1[1];
      }
    }
    else {
      piVar2 = (int *)piVar5[1];
      piVar1 = piVar5;
    }
  }
  return;
}



void FUN_006455f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 0xc) == param_1)) {
    FUN_00401f20(piVar1);
    *(undefined4 *)(in_ECX + 0x44) = 0;
  }
  piVar1 = *(int **)(in_ECX + 0x48);
  if ((piVar1 != (int *)0x0) && (*(int *)(*piVar1 + 0xc) == param_1)) {
    FUN_00401f20(piVar1);
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  piVar1 = (int *)(in_ECX + 0x3c);
  while ((piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0))) {
    if (*(int *)(*piVar2 + 0xc) == param_1) {
      FUN_0065c620(piVar2);
      FUN_00401f20(piVar2);
      piVar1 = (int *)(in_ECX + 0x3c);
    }
    else {
      piVar1 = (int *)piVar1[1];
    }
  }
  if ((*(int *)(in_ECX + 0x30) != 0) && (*(int *)(*(int *)(in_ECX + 0x30) + 0xc) == param_1)) {
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  piVar2 = (int *)(in_ECX + 0x4c);
  piVar1 = (int *)0x0;
  while ((piVar5 = piVar2, piVar5 != (int *)0x0 && (iVar3 = *piVar5, iVar3 != 0))) {
    if (*(int *)(iVar3 + 0xc) == param_1) {
      if (piVar1 == (int *)0x0) {
        piVar4 = (int *)piVar5[1];
        piVar2 = piVar5;
        if (piVar4 == (int *)0x0) {
          *piVar5 = 0;
        }
        else {
          piVar5[1] = piVar4[1];
          *piVar5 = *piVar4;
          FUN_00401f20(piVar4);
        }
      }
      else {
        FUN_0065c620(iVar3);
        piVar2 = (int *)piVar1[1];
      }
    }
    else {
      piVar2 = (int *)piVar5[1];
      piVar1 = piVar5;
    }
  }
  return;
}



uint FUN_00645a30(undefined4 param_1,int *param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int *unaff_retaddr;
  
  if ((((param_2 == (int *)0x0) ||
       (in_EAX = (**(code **)(*param_2 + 0x198))(0), (char)in_EAX != '\0')) ||
      (unaff_retaddr == (int *)0x0)) ||
     (in_EAX = (**(code **)(*unaff_retaddr + 0x170))(), *(char *)(in_EAX + 4) != '\x18'))
  goto LAB_00645ae8;
  param_1 = 0;
  iVar2 = FUN_004d7630();
  if (iVar2 != 0) {
    iVar2 = FUN_0042b470();
    if ((iVar2 == 0) && (iVar2 = FUN_006ecc80(), iVar2 != 0)) {
      FUN_006ecc80();
      cVar1 = FUN_004c97f0();
      if (cVar1 != '\0') goto LAB_00645aaf;
    }
    param_1 = 1;
  }
LAB_00645aaf:
  in_EAX = FUN_004de770(param_2,param_1);
  if ((char)in_EAX != '\0') {
    iVar2 = FUN_004d7740();
    in_EAX = 0;
    if (iVar2 != 0) {
      FUN_004dbe40();
      iVar2 = FUN_004d7630();
      in_EAX = 0;
      if (iVar2 != 0) {
        in_EAX = FUN_0042b5f0(unaff_retaddr,0);
      }
    }
  }
LAB_00645ae8:
  return in_EAX & 0xffffff00;
}



uint FUN_00645af0(undefined4 param_1,int *param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_retaddr;
  
  if (param_2 != (int *)0x0) {
    in_EAX = (**(code **)(*param_2 + 0x198))(0);
    if ((char)in_EAX == '\0') {
      if (unaff_retaddr != (int *)0x0) {
        in_EAX = (**(code **)(*unaff_retaddr + 0x170))();
        if (*(char *)(in_EAX + 4) == '\x18') {
          param_1 = 0;
          iVar2 = FUN_004d7630();
          if (iVar2 != 0) {
            iVar3 = FUN_0042b470();
            if (iVar3 == 0) {
              iVar3 = FUN_006ecc80();
              if (iVar3 != 0) {
                FUN_006ecc80();
                cVar1 = FUN_004c97f0();
                if (cVar1 != '\0') goto LAB_00645b72;
              }
            }
            param_1 = 1;
          }
LAB_00645b72:
          uVar4 = FUN_004de770(param_2,param_1);
          if ((char)uVar4 != '\0') {
            iVar3 = FUN_004d7740();
            uVar4 = 0;
            if (iVar3 != 0) {
              uVar4 = FUN_004dbea0();
              if (iVar2 != 0) {
                uVar4 = FUN_0042b5f0(unaff_retaddr,1);
              }
            }
          }
          return uVar4 & 0xffffff00;
        }
      }
      return in_EAX & 0xffffff00;
    }
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_00645bc0(float param_1,char param_2)

{
  float fVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *in_ECX;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  
  iVar5 = (int)param_1;
  iVar11 = in_ECX[2];
  if ((in_ECX[0xb] == 0) || ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0)) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (in_ECX[0xb] == 0) {
    if (param_2 == '\0') {
      return 0;
    }
LAB_00645bfd:
    (**(code **)(*in_ECX + 0x188))(iVar5,2);
    return 0;
  }
  iVar7 = FUN_00569e50();
  if (iVar7 == 0) {
    in_ECX[0xe] = 0;
  }
  iVar7 = FUN_00566d00(param_1);
  if ((iVar7 != 0) && (cVar6 = FUN_004d74b0(), cVar6 != '\0')) {
    iVar7 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
    if (iVar7 == DAT_00b35eb0) {
      return 1;
    }
    iVar7 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
    if (iVar7 == DAT_00b35eac) {
      return 1;
    }
  }
  if (*(char *)(iVar11 + 0x20) == '\t') {
    iVar7 = FUN_00566db0();
    fVar1 = (float)iVar7;
    if (iVar7 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    cVar6 = FUN_00566dc0(param_1,0,fVar1 + 300.0);
    if (cVar6 == '\0') {
      (**(code **)(*in_ECX + 0x188))(param_1,0xfffffffe);
    }
  }
  if (in_ECX[0xd] == 0) {
    iVar7 = *in_ECX;
    puVar8 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    uVar9 = FUN_004d6670();
    uVar9 = FUN_006ecc80(uVar9);
    cVar6 = (**(code **)(iVar7 + 0x3dc))(param_1,*puVar8,puVar8[1],puVar8[2],uVar9);
    if (cVar6 == '\0') {
      return 0;
    }
  }
  iVar7 = FUN_0046b250(0x3a);
  fVar12 = (float10)FUN_00402bd0();
  param_1 = (float)fVar12;
  fVar12 = (float10)FUN_006599b0();
  if ((float10)param_1 < fVar12) {
    param_1 = param_1 + 24.0;
  }
  fVar12 = (float10)FUN_006599b0();
  fVar1 = *(float *)(iVar7 + 0x24);
  fVar13 = (float10)FUN_005677b0(iVar5,2);
  if ((in_ECX[0xb] != 0) &&
     (fVar14 = (float10)FUN_004d7e90(in_ECX[0xb],0), (float10)(float)fVar13 < fVar14)) {
    iVar10 = FUN_00659a00();
    piVar2 = (int *)in_ECX[0xb];
    iVar7 = *in_ECX;
    uVar9 = FUN_004d6670((3600.0 / fVar1) * (float)((float10)param_1 - fVar12),(float)fVar13);
    uVar9 = FUN_006ecc80(uVar9);
    uVar9 = (**(code **)(*piVar2 + 0x174))(uVar9);
    (**(code **)(iVar7 + 0x418))(iVar5,uVar9);
    iVar7 = FUN_00659a00();
    if (iVar7 != iVar10) {
      return 1;
    }
  }
  cVar6 = FUN_005687d0(iVar5);
  if (cVar6 == '\0') {
    return 0;
  }
  piVar2 = (int *)in_ECX[0xb];
  if (param_2 == '\0') {
    cVar6 = (**(code **)(*piVar2 + 400))();
    if (cVar6 == '\0') {
      FUN_004dd260(iVar5,0,0,1);
    }
    else {
      if (*(char *)(iVar11 + 0x20) != '\x02') {
        if (in_ECX[0xb] != DAT_00b333c4) {
          return 1;
        }
        cVar6 = FUN_0065d550();
        iVar11 = DAT_00b333c4;
        if (cVar6 == '\0') {
          return 1;
        }
        if (*(char *)(DAT_00b333c4 + 300) != '\0') {
          return 1;
        }
        *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
        *(undefined1 *)(iVar11 + 0x594) = 1;
        return 0;
      }
      (**(code **)(**(int **)(iVar5 + 0x58) + 0x188))(iVar5,2);
    }
    goto LAB_00645fc5;
  }
  piVar3 = (int *)in_ECX[0x11];
  uVar9 = 0;
  iVar11 = 1;
  bVar4 = false;
  if (piVar3 != (int *)0x0) {
    if (((*piVar3 == 0) || (cVar6 = (**(code **)(*(int *)*piVar3 + 0x198))(0), cVar6 != '\0')) ||
       (cVar6 = FUN_004d7f80(), cVar6 == '\0')) {
      puVar8 = (undefined4 *)in_ECX[0x11];
      iVar11 = puVar8[4];
      uVar9 = puVar8[1];
      in_ECX[0xe] = in_ECX[0xe] - iVar11;
      cVar6 = (**(code **)(*(int *)*puVar8 + 0x198))(0);
      if (cVar6 != '\0') {
        bVar4 = true;
      }
    }
    if (in_ECX[0xe] < 1) {
      (**(code **)(*in_ECX + 0x188))(iVar5,2);
    }
  }
  cVar6 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
  if ((cVar6 != '\0') && (!bVar4)) {
    cVar6 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
    if (cVar6 == '\0') goto LAB_00645fc5;
    if (((in_ECX[0xb] == DAT_00b333c4) &&
        (cVar6 = FUN_0065d550(), iVar7 = DAT_00b333c4, cVar6 != '\0')) &&
       (*(char *)(DAT_00b333c4 + 300) == '\0')) {
      *(undefined1 *)(DAT_00b333c4 + 0x594) = 0;
      *(undefined4 *)(iVar7 + 0x590) = 0;
      return 0;
    }
    iVar7 = in_ECX[0x11];
    if (iVar7 == 0) {
      if (in_ECX[0xb] != DAT_00b333c4) goto LAB_00645bfd;
      goto LAB_00645fc5;
    }
    if (0 < *(int *)(iVar7 + 0xc)) {
      (**(code **)(*in_ECX + 0x228))(iVar5,in_ECX[0xb],0,0,1,0,1,0,0,1);
      goto LAB_00645fc5;
    }
    if (*(int *)(iVar7 + 8) == 0) goto LAB_00645fc5;
    uVar9 = *(undefined4 *)(iVar7 + 4);
  }
  FUN_004dd260(iVar5,1,uVar9,iVar11);
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0xb] = 0;
LAB_00645fc5:
  if (piVar2 != (int *)0x0) {
    FUN_004d7190();
  }
  return 1;
}



undefined4
FUN_00646020(undefined4 param_1,undefined4 param_2,char param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3a11;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x3c,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(0xd);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 6;
  iVar4 = FUN_00401f00(0xc,uVar2);
  local_4 = 1;
  if (iVar4 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(param_2);
  FUN_00565e00(iVar5);
  if (iVar5 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar5);
  }
  iVar5 = FUN_00401f00(0xc);
  local_4 = 2;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_00569e40();
  }
  local_4 = 0xffffffff;
  FUN_00565ec0(iVar5);
  if (iVar5 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar5);
  }
  *(undefined4 *)(iVar3 + 0x18) = 0x12;
  FUN_00569e90(0);
  FUN_00569ec0(param_2);
  FUN_00468230(0x5a);
  (**(code **)(*in_ECX + 0x14c))(param_6);
  iVar5 = FUN_005e0380();
  if (iVar5 != 0) {
    piVar1 = *(int **)(unaff_retaddr + 0x58);
    uVar6 = (**(code **)(*piVar1 + 0x390))();
    uVar7 = (**(code **)(*piVar1 + 0xc0))(uVar6);
    uVar8 = (**(code **)(*piVar1 + 0xcc))(uVar7);
    uVar9 = (**(code **)(*piVar1 + 0x180))(uVar8);
    uVar10 = FUN_005e0380(uVar9);
    FUN_004268b0(uVar10,uVar9,uVar8,uVar7,uVar6);
  }
  FUN_005f1590(iVar3,0,1);
  if (param_3 != '\0') {
    (**(code **)(**(int **)(unaff_retaddr + 0x58) + 0x188))(unaff_retaddr,1);
  }
  *unaff_FS_OFFSET = iVar4;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00646200(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  float10 fVar5;
  
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (in_ECX[0xb] != 0) {
    iVar2 = FUN_00659a00();
    if (iVar2 < 1) {
      cVar1 = FUN_005e6ba0();
      if (cVar1 == '\0') {
        (**(code **)(*in_ECX + 0x188))(param_1,2);
        FUN_005eff30(param_1);
      }
    }
    fVar5 = (float10)FUN_004d7e90(in_ECX[0xb],0);
    if ((float10)200.0 < fVar5) {
      (**(code **)(*in_ECX + 0x198))(param_1,0,param_4,1);
      return;
    }
    cVar1 = FUN_005e6c60();
    if ((cVar1 != '\0') && (*(char *)(in_ECX[2] + 0x20) != '\r')) {
      piVar3 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b05940,0);
      if (piVar3 != (int *)0x0) {
        fVar5 = (float10)(**(code **)(*piVar3 + 0x250))();
        if ((float10)_DAT_00b36a60 < fVar5 != ((float10)_DAT_00b36a60 == fVar5)) {
          (**(code **)(*in_ECX + 0x228))(param_1,piVar3,0,0,0,0,0,0,0,1);
          return;
        }
        iVar2 = FUN_005e4420();
        fVar5 = (float10)(**(code **)(*piVar3 + 0x250))();
        if (fVar5 < (float10)iVar2 != (fVar5 == (float10)iVar2)) {
          (**(code **)(*piVar3 + 0x250))();
          uVar4 = FUN_009828c0();
          FUN_005e4a40(param_1,uVar4);
          iVar2 = *piVar3;
          fVar5 = (float10)(**(code **)(iVar2 + 0x250))();
          (**(code **)(iVar2 + 0x254))((float)(fVar5 * (float10)-1.0));
          (**(code **)(*in_ECX + 0x188))(param_1,2);
          FUN_005eff30(param_1);
          return;
        }
      }
      (**(code **)(*in_ECX + 0x188))(param_1,2);
      FUN_005eff30(param_1);
      (**(code **)(*in_ECX + 0x228))(param_1,piVar3,0,0,0,0,0,0,0,1);
      return;
    }
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



undefined4 FUN_00646400(int *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  if ((((param_1 != (int *)0x0) && (uVar1 = param_1[2], (uVar1 >> 5 & 1) == 0)) &&
      ((uVar1 >> 0xe & 1) == 0)) && ((uVar1 >> 0xb & 1) == 0)) {
    if (param_2 != (int *)0x0) {
      cVar2 = FUN_004d74d0();
      if (cVar2 != '\0') {
        cVar2 = (**(code **)(*param_1 + 0x198))(0);
        if (cVar2 == '\0') {
          iVar3 = (**(code **)(*param_1 + 0x388))();
          if (iVar3 == 0) {
            cVar2 = FUN_004de770(param_2,1);
            if (cVar2 != '\0') {
              (**(code **)(*param_2 + 0x22c))(param_1);
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  return 0;
}



undefined1
FUN_00646490(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            int param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  bool bVar7;
  undefined1 local_5;
  
  local_5 = 0;
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  iVar6 = param_5;
  uVar1 = param_1;
  if ((iVar3 == 0) && (param_1 == 0)) {
    return 1;
  }
  if (param_5 == 0) {
LAB_006464d7:
    if (param_6 == 0) {
      return 1;
    }
  }
  else {
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') {
      iVar6 = 0;
      goto LAB_006464d7;
    }
  }
  iVar3 = FUN_006ecc80();
  iVar4 = FUN_004d6670();
  if (iVar3 == 0) {
LAB_00646501:
    if (iVar4 == 0) {
      return 1;
    }
  }
  else {
    cVar2 = FUN_004c97f0();
    if (cVar2 == '\0') {
      iVar3 = 0;
      goto LAB_00646501;
    }
  }
  if (iVar6 == 0) {
    bVar7 = param_6 == iVar4;
  }
  else {
    bVar7 = iVar6 == iVar3;
  }
  if (in_ECX[0xd] == 0) {
LAB_0064652e:
    (**(code **)(*in_ECX + 0x408))();
  }
  else {
    if (bVar7) goto LAB_006465b4;
    if (in_ECX[0xd] == 0) goto LAB_0064652e;
    FUN_00689a00();
  }
  if (DAT_00b15800 == '\0') {
    cVar2 = FUN_0068b030(uVar1,&param_2,iVar6,param_6);
  }
  else {
    uVar5 = FUN_0065d550();
    FUN_006836e0(uVar1,iVar6,param_6,param_2,param_3,param_4,uVar5);
    param_1 = param_1 & 0xffffff00;
    cVar2 = FUN_00682820(uVar1,&param_1);
    if (cVar2 == '\0') goto LAB_006465b4;
    cVar2 = (char)param_1;
  }
  if (cVar2 == '\0') {
    FUN_005f7cf0(0,0);
  }
  else {
    local_5 = 1;
    FUN_00689dc0(uVar1);
  }
LAB_006465b4:
  if ((int *)in_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xd] + 0x30))(0);
  }
  return local_5;
}



undefined4 FUN_00646600(int *param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  bool bVar13;
  float10 fVar14;
  
  piVar3 = param_1;
  if ((((param_1 == (int *)0x0) || (param_1 == param_2)) ||
      (uVar6 = param_1[2], (uVar6 >> 5 & 1) != 0)) ||
     (((uVar6 >> 0xe & 1) != 0 || ((uVar6 >> 0xb & 1) != 0)))) {
    return 0;
  }
  if (param_2 == (int *)0x0) {
    return 1;
  }
  bVar2 = false;
  if ((((int *)param_2[0x16] == (int *)0x0) ||
      (uVar6 = (**(code **)(*(int *)param_2[0x16] + 8))(), 3 < uVar6)) ||
     (iVar1 = param_2[0x16], iVar1 == 0)) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x6c) == 0) {
LAB_006466b4:
    iVar8 = *(int *)(iVar1 + 100);
    if ((iVar8 != 0) && (iVar10 = (**(code **)(*param_1 + 0x170))(), iVar8 == iVar10))
    goto LAB_006466a2;
    if (*(int *)(iVar1 + 0x6c) == 0) {
      bVar13 = iVar8 == 0;
      goto LAB_006466d3;
    }
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x170))(*(int *)(iVar1 + 0x6c));
    cVar4 = FUN_00568370(uVar7);
    if (cVar4 == '\0') goto LAB_006466b4;
LAB_006466a2:
    cVar4 = (**(code **)(*param_1 + 0x198))(0);
    bVar13 = cVar4 == '\0';
LAB_006466d3:
    if (bVar13) {
      bVar2 = true;
    }
  }
  iVar8 = (**(code **)(*param_1 + 0x170))();
  if (*(char *)(iVar8 + 4) == '\x15') {
    iVar8 = (**(code **)(*param_1 + 0x170))();
    if ((*(byte *)(iVar8 + 0x88) & 2) != 0) goto LAB_00646720;
  }
  else if ((*(char *)(iVar8 + 4) == '\x1a') &&
          (iVar8 = (**(code **)(*param_1 + 0x170))(), (*(uint *)(iVar8 + 0x7c) >> 1 & 1) == 0)) {
LAB_00646720:
    bVar2 = false;
  }
  iVar8 = (**(code **)(*param_1 + 0x170))();
  if (*(char *)(iVar8 + 4) == '!') {
    iVar8 = (**(code **)(*param_1 + 0x170))();
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 0x80;
    }
    cVar4 = (**(code **)(*param_2 + 0x334))(1);
    if (((iVar8 != 0) &&
        (fVar14 = (float10)FUN_004d7570(), fVar14 < (float10)0.0 != (fVar14 == (float10)0.0))) &&
       (cVar4 != '\0')) goto LAB_006467de;
  }
  if (bVar2) {
    iVar8 = FUN_00401f00(0x20);
    if (iVar8 == 0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      puVar9 = (undefined4 *)FUN_00628eb0();
    }
    uVar7 = (**(code **)(*param_1 + 0x170))();
    puVar9[1] = uVar7;
    *puVar9 = param_1;
    sVar5 = FUN_0041e860();
    puVar9[4] = (int)sVar5;
    puVar9[7] = 0;
    puVar9[6] = param_1 + 0x11;
    FUN_0067b1e0(puVar9);
  }
LAB_006467de:
  cVar4 = (**(code **)(*param_1 + 400))();
  if (((cVar4 != '\0') && (param_1 != DAT_00b333c4)) ||
     (iVar8 = (**(code **)(*param_1 + 0x170))(), *(char *)(iVar8 + 4) == '\x17')) {
    iVar8 = FUN_0041e6f0();
    if (((iVar8 != 0) && (*(int *)(iVar8 + 4) != 0)) && (iVar10 = FUN_004d6d40(), iVar10 != 0)) {
      if (*(int *)(iVar8 + 4) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_004d6d40();
      }
      for (piVar11 = (int *)(iVar8 + 8); (piVar11 != (int *)0x0 && (iVar8 = *piVar11, iVar8 != 0));
          piVar11 = (int *)piVar11[1]) {
        iVar10 = FUN_00485e80(*(undefined4 *)(iVar8 + 4),1,0);
        if ((iVar10 == 0) &&
           ((((*(int *)(iVar1 + 0x6c) != 0 &&
              (cVar4 = FUN_00568370(*(undefined4 *)(iVar8 + 4),*(int *)(iVar1 + 0x6c)),
              cVar4 != '\0')) ||
             ((iVar10 = *(int *)(iVar1 + 100), iVar10 != 0 && (iVar10 == *(int *)(iVar8 + 4))))) ||
            ((*(int *)(iVar1 + 0x6c) == 0 && (iVar10 == 0)))))) {
          iVar10 = FUN_004d8af0();
          iVar12 = FUN_004d8af0();
          if (iVar10 == iVar12) {
            iVar10 = FUN_00401f00(0x20);
            if (iVar10 == 0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar9 = (undefined4 *)FUN_00628eb0();
            }
            puVar9[1] = *(undefined4 *)(iVar8 + 4);
            *puVar9 = param_1;
            puVar9[7] = 1;
            iVar10 = FUN_004d6d40();
            if (iVar10 == 0) {
              puVar9[4] = 1;
            }
            else {
              iVar10 = FUN_00485e00(param_1,iVar10);
              if (iVar10 != 0) {
                uVar7 = FUN_004869c0(*(undefined4 *)(iVar8 + 4));
                puVar9[4] = uVar7;
              }
            }
            FUN_0067b1e0(puVar9);
          }
        }
      }
    }
    iVar8 = FUN_004d8950(0);
    param_1 = (int *)0x0;
    if (0 < iVar8) {
      do {
        piVar11 = (int *)FUN_004d88f0(param_1,0);
        if (piVar11 != (int *)0x0) {
          cVar4 = FUN_00484e80(0);
          if ((cVar4 == '\0') &&
             ((((*(int *)(iVar1 + 0x6c) != 0 &&
                (cVar4 = FUN_00568370(piVar11[2],*(int *)(iVar1 + 0x6c)), cVar4 != '\0')) ||
               ((iVar10 = *(int *)(iVar1 + 100), iVar10 != 0 && (iVar10 == piVar11[2])))) ||
              ((*(int *)(iVar1 + 0x6c) == 0 && (iVar10 == 0)))))) {
            iVar10 = FUN_004d8af0();
            iVar12 = FUN_004d8af0();
            if (iVar10 == iVar12) {
              iVar10 = FUN_00401f00(0x20);
              if (iVar10 == 0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                puVar9 = (undefined4 *)FUN_00628eb0();
              }
              puVar9[1] = piVar11[2];
              *puVar9 = piVar3;
              puVar9[7] = 1;
              iVar10 = FUN_004d6d40();
              if (iVar10 == 0) {
                puVar9[4] = 1;
              }
              else {
                iVar10 = FUN_00485e00(piVar3,iVar10);
                if (iVar10 != 0) {
                  uVar7 = FUN_004869c0(puVar9[1]);
                  puVar9[4] = uVar7;
                }
              }
              FUN_0067b1e0(puVar9);
              if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
                puVar9[6] = *(undefined4 *)*piVar11;
              }
            }
          }
          FUN_00484470();
          FUN_00401f20(piVar11);
        }
        param_1 = (int *)((int)param_1 + 1);
      } while ((int)param_1 < iVar8);
    }
  }
  return 0;
}



uint FUN_00646a80(int *param_1,int *param_2)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  if ((((param_1 == (int *)0x0) || (param_1 == param_2)) ||
      (uVar4 = param_1[2], in_EAX = uVar4, (uVar4 >> 5 & 1) != 0)) ||
     (((uVar4 >> 0xe & 1) != 0 || (in_EAX = uVar4 >> 0xb, (in_EAX & 1) != 0)))) {
    return in_EAX & 0xffffff00;
  }
  if (param_2 == (int *)0x0) {
    return CONCAT31((uint3)(uVar4 >> 0x13),1);
  }
  iVar2 = FUN_009832e6(param_2[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b149a8,0);
  if (iVar2 == 0) {
    return 1;
  }
  if (*(int *)(iVar2 + 0x6c) == 0) {
LAB_00646b25:
    iVar7 = *(int *)(iVar2 + 0x68);
    if ((iVar7 != 0) && (iVar6 = (**(code **)(*param_1 + 0x170))(), iVar7 == iVar6))
    goto LAB_00646b13;
    if (*(int *)(iVar2 + 0x6c) != 0) goto LAB_00646b58;
    bVar8 = iVar7 == 0;
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x170))(*(int *)(iVar2 + 0x6c));
    cVar1 = FUN_00568370(uVar3);
    if (cVar1 == '\0') goto LAB_00646b25;
LAB_00646b13:
    cVar1 = (**(code **)(*param_1 + 0x198))(0);
    bVar8 = cVar1 == '\0';
  }
  if (bVar8) {
    FUN_004d6f80(1);
    FUN_0067b1e0(param_1);
  }
LAB_00646b58:
  cVar1 = (**(code **)(*param_1 + 400))();
  if (((cVar1 != '\0') && (param_1 != DAT_00b333c4)) ||
     (uVar4 = (**(code **)(*param_1 + 0x170))(), *(char *)(uVar4 + 4) == '\x17')) {
    uVar5 = FUN_004d8950(0);
    iVar7 = 0;
    uVar4 = uVar5;
    if (0 < (int)uVar5) {
      do {
        iVar6 = FUN_004d88f0(iVar7,0);
        uVar4 = 0;
        if (iVar6 != 0) {
          cVar1 = FUN_00484e80(0);
          if ((cVar1 == '\0') &&
             ((((*(int *)(iVar2 + 0x6c) != 0 &&
                (cVar1 = FUN_00568370(*(undefined4 *)(iVar6 + 8),*(int *)(iVar2 + 0x6c)),
                cVar1 != '\0')) || (*(int *)(iVar2 + 0x68) == *(int *)(iVar6 + 8))) ||
              (((*(int *)(iVar2 + 0x6c) == 0 && (*(int *)(iVar2 + 100) == 0)) &&
               (*(int *)(iVar2 + 0x68) == 0)))))) {
            FUN_004d6f80(1);
            FUN_0067b1e0(param_1);
          }
          FUN_00484470();
          uVar4 = FUN_00401f20(iVar6);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
  }
  return uVar4 & 0xffffff00;
}



undefined4 * FUN_00646c30(undefined4 *param_1,int *param_2,char param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int in_ECX;
  undefined1 *puVar9;
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined1 local_24 [12];
  undefined1 local_18 [12];
  undefined1 local_c [12];
  
  puVar3 = param_1;
  uVar1 = DAT_00b3f9ac;
  iVar5 = *(int *)(in_ECX + 8);
  piVar7 = *(int **)(in_ECX + 0x2c);
  iVar6 = *(int *)(in_ECX + 4);
  *param_1 = DAT_00b3f9a8;
  uVar2 = DAT_00b3f9b0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  if (param_3 == '\0') {
    if (iVar5 == 0) {
      return param_1;
    }
    cVar4 = FUN_00567770();
    if (cVar4 != '\0') {
      iVar5 = FUN_0041fb20();
      iVar6 = FUN_0041fb40();
      piVar7 = (int *)FUN_0041fb60();
    }
  }
  param_1 = (undefined4 *)iVar6;
  if (iVar5 == 0) {
    return puVar3;
  }
  if (*(int *)(iVar5 + 0x18) == -1) {
    return puVar3;
  }
  switch(*(undefined4 *)((&PTR_DAT_00b152b0)[*(int *)(iVar5 + 0x18)] + (int)param_1 * 4)) {
  case 0:
    if (*(int *)(iVar5 + 0x24) != 0) {
      puVar8 = (undefined4 *)FUN_00566b30(local_48,param_2);
      goto LAB_00646dce;
    }
  default:
switchD_00646cd0_caseD_a:
    iVar5 = *param_2;
LAB_00646dc6:
    puVar8 = (undefined4 *)(**(code **)(iVar5 + 0x174))();
    goto LAB_00646dce;
  case 1:
  case 2:
  case 3:
  case 6:
  case 8:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x20:
  case 0x28:
    goto switchD_00646cd0_caseD_1;
  case 4:
    if (*(int *)(iVar5 + 0x24) != 0) {
      puVar9 = local_30;
      goto LAB_00646cfd;
    }
    break;
  case 5:
    if (*(int *)(iVar5 + 0x24) != 0) {
      puVar9 = local_24;
      goto LAB_00646cfd;
    }
    break;
  case 7:
    if (*(int *)(iVar5 + 0x24) != 0) {
      puVar9 = local_18;
      goto LAB_00646cfd;
    }
    break;
  case 9:
    if (piVar7 == (int *)0x0) {
      iVar6 = *param_2;
    }
    else {
      iVar6 = *piVar7;
    }
    puVar8 = (undefined4 *)(**(code **)(iVar6 + 0x174))();
    uVar1 = puVar8[1];
    uVar2 = puVar8[2];
    *puVar3 = *puVar8;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  case 0x2c:
    if (param_3 == '\0') {
      switch(*(undefined1 *)(iVar5 + 0x20)) {
      case 6:
        if (*(int *)(iVar5 + 0x24) != 0) {
          puVar9 = local_c;
LAB_00646cfd:
          puVar8 = (undefined4 *)FUN_00566b30(puVar9,param_2);
          uVar1 = puVar8[1];
          *puVar3 = *puVar8;
          uVar2 = puVar8[2];
          puVar3[1] = uVar1;
          puVar3[2] = uVar2;
          return puVar3;
        }
        puVar8 = (undefined4 *)FUN_004d79f0();
        goto LAB_00646dce;
      }
    }
switchD_00646cd0_caseD_1:
    if (piVar7 == (int *)0x0) goto switchD_00646cd0_caseD_a;
    iVar5 = *piVar7;
    goto LAB_00646dc6;
  case 0x1e:
    if (*(int *)(iVar5 + 0x24) != 0) {
      puVar9 = local_3c;
      goto LAB_00646cfd;
    }
  }
  puVar8 = (undefined4 *)(**(code **)(*param_2 + 0x174))();
LAB_00646dce:
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  *puVar3 = *puVar8;
  puVar3[1] = uVar1;
  puVar3[2] = uVar2;
  return puVar3;
}



ushort FUN_00647060(uint param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  short sVar7;
  uint uVar8;
  ushort uVar9;
  
  uVar4 = FUN_0060d0e0(param_1,param_2);
  uVar4 = uVar4 & 0xffff;
  cVar3 = FUN_0045a170();
  uVar8 = uVar4;
  if (cVar3 != '\0') {
    uVar8 = uVar4 + 6;
  }
  bVar1 = *(byte *)(DAT_00b33b00 + 0x7c);
  sVar7 = (short)uVar8 + 0xb;
  if (0x33 < bVar1) {
    sVar7 = (short)uVar8 + 0xc;
  }
  if (0x36 < bVar1) {
    sVar7 = sVar7 + 1;
  }
  if (0x4a < bVar1) {
    sVar7 = sVar7 + 4;
  }
  if (0x4e < bVar1) {
    sVar7 = sVar7 + 8;
  }
  if (0x55 < bVar1) {
    sVar7 = sVar7 + 4;
  }
  uVar9 = sVar7 + 8;
  if ((param_1 & 0x400000) != 0) {
    sVar7 = FUN_0065c520();
    uVar9 = uVar9 + sVar7;
  }
  if (0x73 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar9 = uVar9 + 4;
  }
  if (0x75 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar9 = uVar9 + 1;
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar6 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0xed8,".\\AI\\LowProcess.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,uVar9 - uVar4,*puVar2,uVar6);
      return uVar9;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",uVar9 - uVar4,0xed8,
                 ".\\AI\\LowProcess.cpp");
  }
  return uVar9;
}



void FUN_006471a0(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 local_c;
  short *local_8;
  undefined4 local_4;
  
  uVar4 = param_1;
  FUN_0060d1f0(param_1,param_2);
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_8 = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    param_2 = 0x4b4f4c42;
    FUN_0045b9a0(&param_2,4);
    local_8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  FUN_0045b9a0(in_ECX + 0x14,4);
  FUN_0045b9a0(in_ECX + 0x18,4);
  FUN_0045b9a0(in_ECX + 0x1c,1);
  FUN_0045b9a0(in_ECX + 0x1d,1);
  FUN_0045b9a0(in_ECX + 0x84,1);
  if (0x33 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x1f,1);
  }
  if (0x36 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x20,1);
  }
  if (0x4a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x88,4);
  }
  if (0x4e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x28,4);
    param_2 = 0;
    if (*(int *)(in_ECX + 0x24) != 0) {
      param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0xc);
    }
    FUN_0045f7a0(&param_2,4);
  }
  if (0x55 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x38,4);
  }
  param_1 = 0;
  if ((*(int *)(in_ECX + 0x2c) != 0) && (*(int *)(in_ECX + 0x44) == 0)) {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0xc);
  }
  FUN_0045f7a0(&param_1,4);
  local_c = 0;
  if (*(int *)(in_ECX + 0x30) != 0) {
    local_c = *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0xc);
  }
  FUN_0045f7a0(&local_c,4);
  if ((uVar4 & 0x400000) != 0) {
    FUN_0065c270();
  }
  if (0x73 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x8c,4);
  }
  if (0x75 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x1e,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0xf2b,
                   ".\\AI\\LowProcess.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0xf2b,".\\AI\\LowProcess.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_8;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_8 + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\LowProcess.cpp",0xf2b);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_00647450(uint param_1,float param_2,uint param_3)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ushort in_FPUControlWord;
  float10 fVar10;
  int local_14;
  longlong lStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar9 = param_1;
  FUN_0060d3c0(param_1,param_2,param_3);
  iVar8 = 0;
  param_3 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_14,4);
    if (local_14 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\LowProcess.cpp",0xf38,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\LowProcess.cpp",0xf38,*puVar1,uVar5);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&param_3,2);
    uVar9 = param_1;
  }
  FUN_004534d0(in_ECX + 0x14,4);
  if (0x35 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x18,4);
    if (0x35 < *(byte *)(DAT_00b33b00 + 0x7c)) goto LAB_0064761e;
  }
  FUN_004534d0(&param_2,4);
  fVar10 = (float10)FUN_00982bfa();
  param_1._2_2_ = (undefined2)((uint)(float)fVar10 >> 0x10);
  lStack_10._0_4_ = (uint)(longlong)ROUND((float)fVar10 / 100.0);
  uVar6 = (uint)lStack_10;
  fVar2 = param_2 / 10000.0;
  param_1 = CONCAT22(param_1._2_2_,in_FPUControlWord);
  param_2 = (float)(in_FPUControlWord | 0xc00);
  lStack_10 = (longlong)ROUND(fVar2);
  uVar7 = (uint)lStack_10 << 4;
  fVar10 = (float10)FUN_00982bfa();
  param_1._2_2_ = (undefined2)((uint)(float)fVar10 >> 0x10);
  param_1 = CONCAT22(param_1._2_2_,in_FPUControlWord);
  param_2 = (float)(in_FPUControlWord | 0xc00);
  lStack_10 = (longlong)ROUND((float)fVar10);
  *(uint *)(in_ECX + 0x18) = (uVar6 | uVar7) << 9 | (uint)lStack_10;
LAB_0064761e:
  FUN_004534d0(in_ECX + 0x1c,1);
  FUN_004534d0(in_ECX + 0x1d,1);
  FUN_004534d0(in_ECX + 0x84,1);
  if (0x33 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x1f,1);
  }
  if (0x36 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x20,1);
  }
  if (0x4a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x88,4);
  }
  if (0x4e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x28,4);
    FUN_0045ba00(&param_1,4);
    uVar5 = FUN_0046b250(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    uVar5 = FUN_009832e6(uVar5);
    *(undefined4 *)(in_ECX + 0x24) = uVar5;
  }
  if (0x55 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x38,4);
  }
  FUN_0045ba00(&uStack_8,4);
  *(undefined4 *)(in_ECX + 0x2c) = uStack_8;
  FUN_0045ba00(&uStack_4,4);
  *(undefined4 *)(in_ECX + 0x30) = uStack_4;
  if ((uVar9 & 0x400000) != 0) {
    FUN_0065cbb0();
  }
  if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x33) && ((uVar9 & 0x200000) != 0)) {
    FUN_004534d0(&param_1,2);
    if ((short)param_1 != 0) {
      FUN_00452170((param_1 & 0xffff) * 8);
    }
  }
  if (0x73 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x8c,4);
  }
  if (0x75 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x1e,1);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar9 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = param_3 & 0xffff;
      if (uVar6 + iVar8 < uVar9) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar9 - uVar6) - iVar8,".\\AI\\LowProcess.cpp",0xf8f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar9 < uVar6 + iVar8) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar9) + iVar8,".\\AI\\LowProcess.cpp",0xf8f,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (param_3 & 0xffff) + iVar8;
      if (uVar6 < uVar9) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar9 - (param_3 & 0xffff)) - iVar8,".\\AI\\LowProcess.cpp",0xf8f,*puVar1,
                     uVar5);
        return;
      }
      if (uVar9 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((param_3 & 0xffff) - uVar9) + iVar8,".\\AI\\LowProcess.cpp",0xf8f,*puVar1,
                     uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_006478e0(uint param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  
  FUN_0060d810(param_1,param_2);
  if ((*(int *)(DAT_00b33b00 + 0x44) == 0x1ffff000) || (*(int *)(DAT_00b33b00 + 0x44) == 0x7ffff000)
     ) {
    if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x34))(1);
    }
    *(undefined4 *)(in_ECX + 0x34) = 0;
    *(undefined4 *)(in_ECX + 0x38) = 0;
    while ((*(int *)(in_ECX + 0x40) != 0 || (*(int *)(in_ECX + 0x3c) != 0))) {
      iVar1 = *(int *)(in_ECX + 0x3c);
      FUN_0065c620(iVar1);
      if (iVar1 != 0) {
        FUN_00401f20(iVar1);
      }
    }
    FUN_004526e0();
    *(undefined4 *)(in_ECX + 0x14) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    *(undefined4 *)(in_ECX + 0x28) = 0;
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined1 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x8c) = 0;
    *(undefined4 *)(in_ECX + 0x2c) = 0;
    *(undefined4 *)(in_ECX + 0x30) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    *(undefined1 *)(in_ECX + 0x1d) = 0;
    *(undefined1 *)(in_ECX + 0x1f) = 0;
    *(undefined1 *)(in_ECX + 0x20) = 0;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(undefined1 *)(in_ECX + 0x1e) = 0;
  }
  if ((param_1 & 0x400000) != 0) {
    FUN_0065cc90();
  }
  return;
}



void FUN_00647a80(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *in_ECX;
  float10 fVar6;
  int *unaff_retaddr;
  
  (**(code **)(*in_ECX + 0x184))();
  piVar1 = (int *)in_ECX[0xb];
  if ((piVar1 == (int *)0x0) || (((uint)piVar1[2] >> 0xb & 1) != 0)) {
    (**(code **)(*in_ECX + 0x188))(param_1,2);
    return;
  }
  if (((uint)piVar1[2] >> 5 & 1) != 0) {
    FUN_00566870(piVar1,1);
    (**(code **)(*in_ECX + 0x188))(param_1,2);
    return;
  }
  cVar2 = (**(code **)(*piVar1 + 0x198))(1);
  if ((cVar2 != '\0') && (in_ECX[0x11] == 0)) {
    FUN_00566870(in_ECX[0xb],1);
                    /* WARNING: Could not recover jumptable at 0x00647b17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*unaff_retaddr + 0x2f8))();
    return;
  }
  cVar2 = FUN_00566dc0(unaff_retaddr,0,0xbf800000);
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0x188))(unaff_retaddr,0xffffffff);
  }
  else {
    fVar6 = (float10)FUN_004d7e90(in_ECX[0xb],0);
    if (fVar6 != (float10)3.4028234663852886e+38) {
      uVar3 = FUN_00566b30(&stack0xfffffff0,unaff_retaddr);
      FUN_004d7e30(uVar3);
      uVar4 = FUN_009828c0();
      uVar5 = FUN_00566db0();
      if (uVar4 <= uVar5) {
        (**(code **)(*in_ECX + 0x188))(unaff_retaddr,1);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00647bd0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  undefined4 uVar11;
  code *pcVar12;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar10 = 0;
  if (((param_2 == 0) || (iVar1 = FUN_004d6d40(), iVar1 == 0)) ||
     (iVar1 = FUN_00485e00(param_2,iVar1), iVar1 == 0)) {
    uVar7 = FUN_006ecc80();
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_c = *puVar8;
    uStack_8 = puVar8[1];
    uStack_4 = puVar8[2];
    in_ECX[0x1b] = param_3;
    pcVar12 = FUN_00646600;
    uVar11 = _DAT_00b368e8;
    piVar6 = param_1;
    uVar9 = (**(code **)(*param_1 + 0x174))(_DAT_00b368e8,FUN_00646600,param_1);
    FUN_00446b90(uVar7,&uStack_c,_DAT_00b368e8,uVar9,uVar11,pcVar12,piVar6);
    pcVar12 = *(code **)(*in_ECX + 0x568);
    in_ECX[0x1b] = 0;
    in_ECX[0x19] = 0;
    (*pcVar12)(param_1);
  }
  else {
    switch(param_3) {
    case 0xd:
      iVar10 = FUN_0048d6c0();
      iVar1 = 0;
      if (0 < iVar10) {
        do {
          iVar4 = FUN_00486a40(iVar1);
          if (iVar4 != 0) {
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0)
            ;
            if (iVar5 != 0) {
              iVar5 = FUN_00401f00(0x20);
              if (iVar5 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)FUN_00628eb0();
              }
              piVar6[1] = *(int *)(iVar4 + 8);
              iVar5 = FUN_004b2460();
              piVar6[4] = iVar5;
              *piVar6 = param_2;
              piVar6[7] = 1;
              FUN_00446cb0(piVar6);
            }
            FUN_00484470();
            FUN_00401f20(iVar4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar10);
        return;
      }
      break;
    case 0x15:
      iVar1 = FUN_0048d6c0();
      if (0 < iVar1) {
        do {
          iVar4 = FUN_00486a40(iVar10);
          if (iVar4 != 0) {
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0)
            ;
            iVar2 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0)
            ;
            iVar3 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0)
            ;
            if (((iVar5 != 0) || (iVar2 != 0)) || (iVar3 != 0)) {
              iVar5 = FUN_00401f00(0x20);
              if (iVar5 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)FUN_00628eb0();
              }
              piVar6[1] = *(int *)(iVar4 + 8);
              iVar5 = FUN_004b2460();
              piVar6[4] = iVar5;
              *piVar6 = param_2;
              piVar6[7] = 1;
              FUN_00446cb0(piVar6);
            }
            FUN_00484470();
            FUN_00401f20(iVar4);
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar1);
        return;
      }
      break;
    case 0x16:
      iVar10 = FUN_0048d6c0();
      param_3 = 0;
      if (0 < iVar10) {
        do {
          iVar1 = FUN_00486a40(param_3);
          if (iVar1 != 0) {
            iVar4 = FUN_009832e6(*(undefined4 *)(iVar1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0)
            ;
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0)
            ;
            iVar2 = FUN_009832e6(*(undefined4 *)(iVar1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0)
            ;
            iVar3 = FUN_009832e6(*(undefined4 *)(iVar1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0)
            ;
            if ((((iVar4 != 0) || (iVar5 != 0)) || (iVar2 != 0)) || (iVar3 != 0)) {
              iVar4 = FUN_00401f00(0x20);
              if (iVar4 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)FUN_00628eb0();
              }
              piVar6[1] = *(int *)(iVar1 + 8);
              iVar4 = FUN_004b2460();
              *piVar6 = param_2;
              piVar6[4] = iVar4;
              piVar6[7] = 1;
              FUN_00446cb0(piVar6);
            }
            FUN_00484470();
            FUN_00401f20(iVar1);
          }
          param_3 = param_3 + 1;
        } while (param_3 < iVar10);
        return;
      }
      break;
    case 0x18:
      iVar10 = FUN_0048d6c0();
      iVar1 = 0;
      if (0 < iVar10) {
        do {
          iVar4 = FUN_00486a40(iVar1);
          if (iVar4 != 0) {
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0)
            ;
            if ((iVar5 != 0) && (*(char *)(iVar5 + 0x90) < '\x04')) {
              iVar5 = FUN_00401f00(0x20);
              if (iVar5 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)FUN_00628eb0();
              }
              piVar6[1] = *(int *)(iVar4 + 8);
              iVar5 = FUN_004b2460();
              piVar6[4] = iVar5;
              *piVar6 = param_2;
              piVar6[7] = 1;
              FUN_00446cb0(piVar6);
            }
            FUN_00484470();
            FUN_00401f20(iVar4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar10);
        return;
      }
      break;
    case 0x19:
      iVar10 = FUN_0048d6c0();
      iVar1 = 0;
      if (0 < iVar10) {
        do {
          iVar4 = FUN_00486a40(iVar1);
          if (iVar4 != 0) {
            iVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0)
            ;
            if ((iVar5 != 0) && ('\x03' < *(char *)(iVar5 + 0x90))) {
              iVar5 = FUN_00401f00(0x20);
              if (iVar5 == 0) {
                piVar6 = (int *)0x0;
              }
              else {
                piVar6 = (int *)FUN_00628eb0();
              }
              piVar6[1] = *(int *)(iVar4 + 8);
              iVar5 = FUN_004b2460();
              *piVar6 = param_2;
              piVar6[4] = iVar5;
              piVar6[7] = 1;
              FUN_00446cb0(piVar6);
            }
            FUN_00484470();
            FUN_00401f20(iVar4);
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < iVar10);
        return;
      }
    }
  }
  return;
}



float10 FUN_006481b0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  float unaff_ESI;
  float10 fVar8;
  float fVar9;
  float fVar10;
  float fStack_3c;
  int *piVar11;
  int *piVar12;
  float fVar13;
  float fStack_30;
  int *piStack_18;
  undefined8 uStack_c;
  
  fStack_30 = 9.10844e-44;
  iVar3 = (**(code **)(*param_2 + 0x284))();
  uStack_c = (double)iVar3;
  fVar8 = (float10)(**(code **)(*param_2 + 0x348))();
  piVar1 = (int *)(float)((fVar8 / (float10)100.0) * (float10)uStack_c);
  iVar3 = (**(code **)(*param_2 + 0x284))(2);
  uStack_c._0_4_ = (undefined4)((ulonglong)((double)iVar3 * 0.005) >> 0x20);
  (**(code **)(*param_2 + 0x284))(0x40);
  piVar2 = uStack_c._4_4_;
  fStack_3c = 1.4013e-45;
  iVar4 = (**(code **)(*(int *)uStack_c._4_4_[0x16] + 0xec))();
  if (iVar4 == 0) {
    uStack_c._0_4_ = 0;
    fVar8 = (float10)FUN_005f4880(1,&fStack_30,&uStack_c);
    uVar5 = (**(code **)(*piVar2 + 0x284))(0,(float)fVar8);
    uVar5 = (**(code **)(*piVar2 + 0x284))(7,uVar5);
    uVar5 = (**(code **)(*piVar2 + 0x284))(0x11,uVar5);
    FUN_00547280(uVar5);
  }
  else {
    iVar4 = (**(code **)(*(int *)piVar2[0x16] + 0xec))(1);
    if ((iVar4 != 0) &&
       (iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar4 != 0)) {
      fVar8 = (float10)(**(code **)(*(int *)piVar2[0x16] + 0x324))();
      fStack_3c = (float)fVar8;
      if (fStack_3c <= 0.0) {
        uVar5 = (**(code **)(*(int *)piVar2[0x16] + 0xec))(1);
        fVar8 = (float10)FUN_00612a90(piVar2,uVar5);
        (**(code **)(*(int *)piVar2[0x16] + 0x328))((float)fVar8);
      }
    }
  }
  fVar13 = fStack_3c / 100.0;
  piVar6 = (int *)FUN_005e8ed0(1);
  fStack_30 = 0.0;
  piVar11 = (int *)0x0;
  piStack_18 = (int *)0x0;
  if (piVar6 != (int *)0x0) {
    do {
      iVar4 = *piVar6;
      if (iVar4 == 0) break;
      piVar6 = (int *)piVar6[1];
      iVar7 = FUN_004152c0(3,0);
      if (*(int *)(iVar7 + 0x10) == 2) {
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar4 + 0x18;
        }
        fVar8 = (float10)FUN_005e0970(iVar7);
        piVar12 = piVar11;
        fVar8 = (float10)FUN_00546ca0((float)fVar8);
        piVar11 = piVar12;
        if ((float10)0.0 < fVar8) {
          piVar11 = piStack_18;
          if (piStack_18 == (int *)0x0) {
            piStack_18 = (int *)FUN_00401f00(8);
            piVar11 = piVar12;
            if (piStack_18 == (int *)0x0) {
              piStack_18 = (int *)0x0;
            }
            else if (iVar4 == 0) {
              *piStack_18 = 0;
              piStack_18[1] = 0;
            }
            else {
              *piStack_18 = iVar4 + 0x18;
              piStack_18[1] = 0;
            }
          }
          else {
LAB_0064845b:
            if (iVar4 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + 0x18;
            }
            *piVar11 = iVar4;
            piVar11 = piVar12;
          }
        }
      }
      else if (*(int *)(iVar7 + 0x10) == 1) {
        if (iVar4 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = iVar4 + 0x18;
        }
        fVar8 = (float10)FUN_005e0970(iVar7);
        fVar8 = (float10)FUN_00546ca0((float)fVar8);
        if ((float10)0.0 < fVar8) {
          piVar12 = piVar11;
          if (piVar11 != (int *)0x0) goto LAB_0064845b;
          piVar11 = (int *)FUN_00401f00(8);
          if (piVar11 == (int *)0x0) {
            piVar11 = (int *)0x0;
          }
          else if (iVar4 == 0) {
            *piVar11 = 0;
            piVar11[1] = 0;
          }
          else {
            *piVar11 = iVar4 + 0x18;
            piVar11[1] = 0;
          }
        }
      }
    } while (piVar6 != (int *)0x0);
    param_2 = piVar1;
    if ((piVar11 != (int *)0x0) || (piStack_18 != (int *)0x0)) {
      uVar5 = FUN_00415360();
      iVar4 = (**(code **)(*piVar2 + 0x284))(uVar5);
      fStack_30 = ((float)iVar4 * 0.0) / 100.0;
    }
  }
  fVar9 = fStack_3c;
  if (fVar13 - 0.0 <= fStack_30 - unaff_ESI) {
    fVar9 = 0.0;
  }
  fVar8 = (float10)FUN_004d7e90(param_2,0);
  fVar13 = (float)fVar8;
  fVar10 = fVar13;
  FUN_005e02e0(0);
  iVar4 = FUN_00519c10(fVar9,fVar10);
  iVar4 = (**(code **)(*piVar2 + 0x284))(8,(float)iVar4);
  fVar9 = (float)iVar4;
  fVar8 = (float10)FUN_005ead00(8);
  fVar8 = (float10)FUN_00547910((float)fVar8,fVar9);
  if (fVar13 != 0.0) {
    FUN_004526e0();
    FUN_00401f20(fVar13);
  }
  FUN_00401f20(fStack_3c);
  FUN_00401f20(iVar3);
  fVar8 = (float10)(float)fVar8;
  if (fVar8 < (float10)0 != (fVar8 == (float10)0)) {
    fVar8 = (float10)1.0;
  }
  return fVar8;
}



void FUN_006485b0(int *param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  float unaff_ESI;
  float10 fVar13;
  undefined4 *puVar14;
  float fVar15;
  undefined4 uStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [8];
  undefined4 uStack_8;
  
  uVar4 = FUN_005e2e00(0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  piVar5 = (int *)FUN_009832e6(uVar4);
  if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x198))(0), cVar3 != '\0')) {
    FUN_005eae70();
  }
  else if (piVar5 != DAT_00b333c4) {
    fStack_14 = (float)(**(code **)(*piVar5 + 0x284))(0x41);
    unique0x100000f8 = (double)(int)fStack_14;
    fVar13 = (float10)(**(code **)(*piVar5 + 0x348))();
    auStack_10._0_4_ = (undefined4)((fVar13 / (float10)100.0) * (float10)stack0xfffffff4);
    fStack_18 = (float)(**(code **)(*piVar5 + 0x284))(2);
    auStack_10 = (undefined1  [8])((double)(int)fStack_18 * 0.005);
    iVar6 = (**(code **)(*piVar5 + 0x284))(0x40);
    fStack_14 = (float)iVar6 + (float)(double)CONCAT44(auStack_10._0_4_,fStack_14);
    uStack_8 = 0;
    iVar6 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1);
    if (iVar6 == 0) {
      puVar14 = &uStack_20;
      uStack_20 = 0;
      fVar13 = (float10)FUN_005f4880(1,auStack_10 + 4);
      uVar4 = (**(code **)(*param_1 + 0x284))(0,(float)fVar13);
      uVar4 = (**(code **)(*param_1 + 0x284))(7,uVar4);
      uVar4 = (**(code **)(*param_1 + 0x284))(0x11,uVar4);
      FUN_00547280(uVar4);
    }
    else {
      puVar14 = (undefined4 *)0x1;
      iVar6 = (**(code **)(*(int *)param_1[0x16] + 0xec))();
      if (iVar6 != 0) {
        iVar6 = FUN_009832e6(*(undefined4 *)(iVar6 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
        if (iVar6 != 0) {
          fVar13 = (float10)(**(code **)(*(int *)param_1[0x16] + 0x324))();
          fStack_18 = (float)fVar13;
          if (fStack_18 <= 0.0) {
            uVar4 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1);
            fVar13 = (float10)FUN_00612a90(param_1,uVar4);
            fStack_1c = (float)fVar13;
            (**(code **)(*(int *)param_1[0x16] + 0x328))(fStack_1c);
          }
        }
      }
    }
    fVar15 = fStack_18 / 100.0;
    piVar7 = (int *)FUN_005e8ed0(1);
    iVar6 = 0;
    piVar1 = piVar7;
    piVar10 = (int *)0x0;
    piVar9 = (int *)0x0;
joined_r0x00648793:
    while( true ) {
      do {
        piVar12 = piVar10;
        fVar2 = fStack_14;
        if ((piVar1 == (int *)0x0) || (iVar11 = *piVar1, iVar11 == 0)) {
          while( true ) {
            if (fVar2 == 0.0) {
              if (piVar7 == (int *)0x0) {
                return;
              }
              FUN_004526e0();
              FUN_00401f20(piVar7);
              return;
            }
            cVar3 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar3 == '\0') break;
            if ((iVar6 != 0) || (puVar14 != (undefined4 *)0x0)) {
              uVar4 = FUN_00415360();
              iVar11 = (**(code **)(*param_1 + 0x284))(uVar4);
              fVar15 = ((float)iVar11 * 0.0) / 100.0;
            }
            piVar9 = (int *)((float)piVar9 - (float)piVar7);
            fVar15 = fVar15 - unaff_ESI;
            if ((float)piVar9 <= fVar15) {
              fStack_18 = -0.0;
            }
            else {
              fStack_18 = fStack_1c * -1.0;
            }
            (**(code **)(*piVar5 + 0x2a4))(8,fStack_18,param_1);
            cVar3 = (**(code **)(*piVar5 + 0x198))(0);
            if (cVar3 != '\0') {
              FUN_005eae70();
            }
            fVar2 = (float)((int)fVar2 + -1);
          }
          return;
        }
        piVar1 = (int *)piVar1[1];
        iVar8 = FUN_004152c0(3,0);
        piVar10 = piVar12;
        if (*(int *)(iVar8 + 0x10) != 2) goto LAB_0064883c;
        if (iVar11 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = iVar11 + 0x18;
        }
        fVar13 = (float10)FUN_005e0970(iVar8);
        piVar12 = piVar9;
        fVar13 = (float10)FUN_00546ca0((float)fVar13);
        piVar9 = piVar12;
      } while (fVar13 <= (float10)0.0);
      if (piVar12 != (int *)0x0) break;
      piVar9 = (int *)FUN_00401f00(8);
      if (piVar9 == (int *)0x0) {
        piVar9 = (int *)0x0;
      }
      else if (iVar11 == 0) {
        *piVar9 = 0;
        piVar9[1] = 0;
      }
      else {
        *piVar9 = iVar11 + 0x18;
        piVar9[1] = 0;
      }
    }
    goto LAB_006488ae;
  }
  return;
LAB_0064883c:
  if (*(int *)(iVar8 + 0x10) == 1) {
    if (iVar11 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar11 + 0x18;
    }
    fVar13 = (float10)FUN_005e0970(iVar8);
    fVar13 = (float10)FUN_00546ca0((float)fVar13);
    piVar10 = piVar12;
    if ((float10)0.0 < fVar13) {
      if (piVar12 == (int *)0x0) {
        piVar10 = (int *)FUN_00401f00(8);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else if (iVar11 == 0) {
          *piVar10 = 0;
          piVar10[1] = 0;
        }
        else {
          *piVar10 = iVar11 + 0x18;
          piVar10[1] = 0;
        }
      }
      else {
LAB_006488ae:
        if (iVar11 == 0) {
          iVar11 = 0;
        }
        else {
          iVar11 = iVar11 + 0x18;
        }
        *piVar12 = iVar11;
      }
    }
  }
  goto joined_r0x00648793;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006489e0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 unaff_EBP;
  char cVar9;
  int *piStack_18;
  int *piStack_14;
  
  cVar9 = (char)((uint)unaff_EBP >> 0x18);
  cVar3 = (**(code **)(*param_1 + 0x198))(0);
  if ((cVar3 != '\0') || (((uint)param_1[2] >> 0xb & 1) != 0)) {
    cVar9 = '\x01';
  }
  iVar4 = FUN_00420ef0();
  if (iVar4 != 0) {
    piStack_18 = (int *)FUN_00401f00(8);
    if (piStack_18 == (int *)0x0) {
      piStack_18 = (int *)0x0;
    }
    else {
      *piStack_18 = 0;
      piStack_18[1] = 0;
    }
    piStack_14 = (int *)FUN_00401f00(8);
    if (piStack_14 == (int *)0x0) {
      piStack_14 = (int *)0x0;
    }
    else {
      *piStack_14 = 0;
      piStack_14[1] = 0;
    }
    for (piVar6 = *(int **)(iVar4 + 0xc);
        (piVar5 = piStack_14, piVar6 != (int *)0x0 && (iVar7 = *piVar6, iVar7 != 0));
        piVar6 = (int *)piVar6[1]) {
      piVar5 = piStack_14 + 1;
      iVar8 = *piVar5;
      piVar1 = piStack_14;
      while (iVar8 != 0) {
        piVar1 = (int *)*piVar5;
        piVar5 = piVar1 + 1;
        iVar8 = piVar1[1];
      }
      if (*piVar1 == 0) {
        *piVar1 = iVar7;
      }
      else {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar1[1] = 0;
        }
        else {
          *piVar5 = iVar7;
          piVar5[1] = 0;
          piVar1[1] = (int)piVar5;
        }
      }
    }
    for (; (piVar6 = piStack_18, piVar5 != (int *)0x0 &&
           (piVar1 = (int *)*piVar5, piVar1 != (int *)0x0)); piVar5 = (int *)piVar5[1]) {
      if (cVar9 == '\0') {
        if (piVar1 != DAT_00b333c4) {
          bVar2 = false;
          iVar7 = FUN_005e03a0();
          iVar8 = FUN_0041fb20();
          if (((iVar7 == 0) || (cVar3 = FUN_00567770(), cVar3 != '\0')) && (iVar8 != 0)) {
            iVar7 = iVar8;
          }
          if ((iVar7 != 0) && (*(char *)(iVar7 + 0x20) == '\x02')) {
            bVar2 = true;
          }
          iVar7 = FUN_005e03a0();
          iVar8 = FUN_0041fb20();
          if ((iVar7 == 0) || ((cVar3 = FUN_00567770(), cVar3 != '\0' && (iVar8 != 0)))) {
            iVar7 = iVar8;
          }
          if ((bVar2) ||
             ((iVar7 != 0 &&
              ((*(char *)(iVar7 + 0x20) == '\x01' || (*(char *)(iVar7 + 0x20) == '\a')))))) {
            iVar7 = FUN_00659a00();
            if (iVar7 != 0) {
              (**(code **)(*piVar1 + 0x1c0))(param_1);
              FUN_004d7190();
            }
          }
          else {
            FUN_00446cb0(piVar1);
          }
        }
      }
      else {
        if (*piStack_18 != 0) {
          piVar6 = (int *)FUN_00401f00(8);
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piStack_18;
            piVar6[1] = 0;
            piVar6[1] = piStack_18[1];
            piStack_18[1] = (int)piVar6;
            *piStack_18 = (int)piVar1;
            goto LAB_00648bde;
          }
          _DAT_00000004 = piStack_18[1];
          piStack_18[1] = 0;
        }
        *piStack_18 = (int)piVar1;
      }
LAB_00648bde:
    }
    for (; (piVar6 != (int *)0x0 && (*piVar6 != 0)); piVar6 = (int *)piVar6[1]) {
      FUN_00424d00(*piVar6);
    }
    FUN_004526e0();
    FUN_00401f20(piStack_14);
    FUN_004526e0();
    FUN_00401f20(piStack_18);
    if (((*(int **)(iVar4 + 0xc))[1] == 0) && (**(int **)(iVar4 + 0xc) == 0)) {
      FUN_00420f00();
    }
  }
  return;
}



void FUN_00648c60(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a72084;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00648c80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a72084;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00648cb0(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c3a43;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a720a4;
  local_4 = 1;
  if ((undefined4 *)in_ECX[0xd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xd])(1,uVar3);
  }
  if ((in_ECX[2] != 0) && (cVar2 = FUN_005660a0(), cVar2 != '\0')) {
    cVar2 = FUN_0045a500();
    if (cVar2 == '\0') {
      if ((int *)in_ECX[2] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[2] + 0x10))(1);
      }
    }
    else {
      FUN_0045c7a0(in_ECX[2]);
    }
  }
  iVar1 = in_ECX[0x11];
  in_ECX[2] = 0;
  if (iVar1 != 0) {
    if (in_ECX[0x12] == iVar1) {
      in_ECX[0x12] = 0;
    }
    FUN_00401f20(iVar1);
    in_ECX[0x11] = 0;
  }
  if (in_ECX[0x12] != 0) {
    FUN_00401f20(in_ECX[0x12]);
    in_ECX[0x12] = 0;
  }
  while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
    iVar1 = in_ECX[0xf];
    FUN_0065c620(iVar1);
    if (iVar1 != 0) {
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = in_ECX[0x14];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x14] + 4);
    FUN_00401f20(in_ECX[0x14]);
    in_ECX[0x14] = iVar1;
  }
  in_ECX[0x13] = 0;
  in_ECX[0xc] = 0;
  while ((in_ECX[0x16] != 0 || (in_ECX[0x15] != 0))) {
    iVar1 = in_ECX[0x15];
    FUN_0065c620(iVar1);
    if (iVar1 != 0) {
      FUN_00401f20(iVar1);
    }
  }
  iVar1 = in_ECX[0x18];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x18] + 4);
    FUN_00401f20(in_ECX[0x18]);
    in_ECX[0x18] = iVar1;
  }
  in_ECX[0x17] = 0;
  if ((int *)in_ECX[0x19] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x19] + 0x10))(1);
  }
  local_4 = local_4 & 0xffffff00;
  FUN_0065ccc0();
  local_4 = 0xffffffff;
  FUN_0060cda0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00648e40(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  
  iVar2 = FUN_005e0330();
  if (((*(int *)(in_ECX + 8) != 0) && (iVar2 != *(int *)(in_ECX + 8))) &&
     ((iVar2 == 0 || (cVar1 = FUN_00446b80(*(undefined4 *)(iVar2 + 0xc)), cVar1 == '\0')))) {
    (**(code **)(*param_1 + 0x44))(0x30000);
  }
  *(int *)(in_ECX + 8) = iVar2;
  if (iVar2 != 0) {
    if ((*(int *)(iVar2 + 0x24) != 0) && (iVar2 = FUN_00569740(), iVar2 != 2)) {
      return;
    }
    iVar2 = param_1[10];
    uVar3 = (**(code **)(*param_1 + 0x174))(iVar2);
    uVar4 = FUN_006ecc80(uVar3);
    uVar5 = FUN_004d6670(uVar4);
    FUN_004d7a20(uVar5,uVar4,uVar3,iVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00648ed0(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 uVar8;
  code *pcVar9;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (*(int *)(in_ECX[2] + 0x28) == 0) {
    return;
  }
  iVar3 = FUN_00569e50();
  if (iVar3 == 0) {
    iVar3 = FUN_00569e60();
    if (iVar3 == 0) {
      (**(code **)(*in_ECX + 0xd0))(0);
      return;
    }
    piVar4 = (int *)FUN_00569e60();
    cVar2 = (**(code **)(*piVar4 + 0x198))(1);
    if (cVar2 != '\0') {
      FUN_00566870(in_ECX[0xb],1);
      return;
    }
    cVar2 = *(char *)(in_ECX[2] + 0x20);
    if ((cVar2 < '\x01') ||
       ((('\x02' < cVar2 && (cVar2 != '\a')) || (cVar2 = FUN_00567ca0(), cVar2 == '\0')))) {
      iVar3 = *in_ECX;
      uVar5 = FUN_00569e60();
      (**(code **)(iVar3 + 0xd0))(uVar5);
    }
    else {
      FUN_00568bb0(unaff_retaddr);
    }
    piVar4 = (int *)in_ECX[0xb];
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (((uint)piVar4[2] >> 5 & 1) == 0) {
      return;
    }
    cVar2 = (**(code **)(*piVar4 + 400))();
    if (cVar2 != '\0') {
      return;
    }
    if (in_ECX[0xb] == -0x44) {
      return;
    }
    iVar3 = *in_ECX;
    uVar5 = FUN_0041fb00();
    (**(code **)(iVar3 + 0xd0))(uVar5);
    return;
  }
  if ((*(uint *)(in_ECX[2] + 0x1c) >> 2 & 1) == 0) {
    return;
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
    cVar2 = *(char *)(in_ECX[2] + 0x20);
    if (((cVar2 < '\x01') || (('\x02' < cVar2 && (cVar2 != '\a')))) ||
       (cVar2 = FUN_00567ca0(), cVar2 == '\0')) {
      uVar5 = FUN_006ecc80();
      puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      uStack_c = *puVar6;
      uStack_8 = puVar6[1];
      uStack_4 = puVar6[2];
      iVar3 = FUN_00569e50();
      if (iVar3 == 1) {
        iVar3 = FUN_00569e70();
        in_ECX[0x19] = iVar3;
        in_ECX[0x1b] = 0;
      }
      else if (iVar3 == 2) {
        in_ECX[0x19] = 0;
        iVar3 = FUN_00569e80();
        in_ECX[0x1b] = iVar3;
      }
      pcVar9 = FUN_00646600;
      uVar8 = _DAT_00b368e8;
      piVar4 = param_1;
      uVar7 = (**(code **)(*param_1 + 0x174))(_DAT_00b368e8,FUN_00646600,param_1);
      FUN_00446b90(uVar5,&uStack_c,_DAT_00b368e8,uVar7,uVar8,pcVar9,piVar4);
      pcVar9 = *(code **)(*in_ECX + 0x568);
      in_ECX[0x1b] = 0;
      in_ECX[0x19] = 0;
      (*pcVar9)(param_1);
      if ((*(int *)(in_ECX[2] + 0x28) != 0) && (iVar3 = FUN_00569e50(), iVar3 != 0)) {
        iVar3 = FUN_00452a60();
        in_ECX[0xe] = iVar3;
      }
    }
    else {
      FUN_00568bb0(param_1);
    }
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
    return;
  }
  puVar6 = (undefined4 *)in_ECX[0xf];
  in_ECX[0x11] = (int)puVar6;
  piVar4 = (int *)*puVar6;
  if (puVar6[7] == 2) {
    cVar2 = (**(code **)(*piVar4 + 400))();
    piVar4 = *(int **)in_ECX[0x11];
    if (cVar2 != '\0') goto LAB_0064916d;
    uVar5 = FUN_004db6b0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
    iVar3 = FUN_009832e6(uVar5);
    if (iVar3 == 0) goto LAB_00649179;
    iVar1 = *in_ECX;
    piVar4 = (int *)FUN_00675220(iVar3);
    pcVar9 = *(code **)(iVar1 + 0xd0);
  }
  else {
LAB_0064916d:
    pcVar9 = *(code **)(*in_ECX + 0xd0);
  }
  (*pcVar9)(piVar4);
LAB_00649179:
  FUN_0065c620(in_ECX[0x11]);
  return;
}



void FUN_00649190(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *in_ECX;
  undefined4 uVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if ((in_ECX[2] != 0) && (*(int *)(in_ECX[2] + 0x24) != 0)) {
    iVar3 = FUN_00569740();
    if (iVar3 == 0) {
      iVar3 = FUN_005697e0();
      in_ECX[0xc] = iVar3;
      return;
    }
    cVar2 = FUN_00569a10();
    if (cVar2 != '\0') {
      if ((*(uint *)(in_ECX[2] + 0x1c) >> 2 & 1) == 0) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        return;
      }
      cVar2 = FUN_0046cb60();
      if (cVar2 != '\0') {
        uVar4 = FUN_006ecc80();
        puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
        uStack_c = *puVar5;
        uStack_8 = puVar5[1];
        uStack_4 = puVar5[2];
        iVar3 = FUN_00569740();
        if (iVar3 == 4) {
          iVar3 = FUN_00569820();
          in_ECX[0x1a] = iVar3;
          in_ECX[0x1b] = 0;
        }
        else if (iVar3 == 5) {
          in_ECX[0x1a] = 0;
          iVar3 = FUN_00569830();
          in_ECX[0x1b] = iVar3;
        }
        puVar5 = (undefined4 *)FUN_00403c00();
        puVar6 = (undefined4 *)FUN_00403c00();
        uVar8 = *puVar5;
        pcVar9 = FUN_00646a80;
        piVar10 = param_1;
        uVar7 = (**(code **)(*param_1 + 0x174))(uVar8,FUN_00646a80,param_1);
        FUN_00446b90(uVar4,&uStack_c,*puVar6,uVar7,uVar8,pcVar9,piVar10);
        piVar10 = in_ECX + 0x17;
        in_ECX[0x1b] = 0;
        in_ECX[0x1a] = 0;
        if (piVar10 != (int *)0x0) {
          while (*piVar10 != 0) {
            FUN_00446cb0(*piVar10);
            piVar1 = (int *)in_ECX[0x18];
            if (piVar1 == (int *)0x0) {
              *piVar10 = 0;
            }
            else {
              in_ECX[0x18] = piVar1[1];
              *piVar10 = *piVar1;
              FUN_00401f20(piVar1);
            }
          }
        }
      }
      cVar2 = FUN_0046cb60();
      if (cVar2 != '\0') {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        return;
      }
      in_ECX[0xc] = in_ECX[0x13];
      FUN_0067f100();
    }
  }
  return;
}



bool FUN_00649340(int *param_1,char param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *in_ECX;
  int *piVar8;
  bool bVar9;
  float10 fVar10;
  float10 extraout_ST0;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  int *piVar14;
  
  fVar10 = (float10)FUN_00402bd0();
  fVar1 = (float)fVar10;
  piVar8 = (int *)in_ECX[2];
  if ((param_2 == '\0') &&
     ((cVar2 = FUN_005e6ba0(), cVar2 != '\0' ||
      (cVar2 = (**(code **)(*param_1 + 0x334))(1), cVar2 != '\0')))) {
    return false;
  }
  if ((in_ECX[2] != 0) && (cVar2 = FUN_00565db0(), cVar2 == '\0')) {
    FUN_00565dc0();
  }
  bVar9 = false;
  if (piVar8 == (int *)0x0) {
    FUN_00648e40(param_1);
    piVar8 = (int *)in_ECX[2];
    bVar9 = piVar8 != (int *)0x0;
    pcVar13 = *(code **)(*in_ECX + 0x394);
    in_ECX[3] = (int)fVar1;
    in_ECX[1] = 0;
    in_ECX[0xb] = 0;
    (*pcVar13)(0);
  }
  else {
    if (piVar8[6] == -1) {
      FUN_005672a0();
    }
    fVar10 = (float10)fVar1;
    if ((piVar8[0xc] == 0) || (((uint)piVar8[7] >> 2 & 1) == 0)) {
      if (((uint)piVar8[7] >> 2 & 1) == 0) {
        if (((uint)piVar8[7] >> 1 & 1) != 0) {
          cVar2 = FUN_00566dc0(param_1,0,0xbf800000);
          if ((cVar2 == '\0') && (*(int *)((&PTR_DAT_00b152b0)[piVar8[6]] + in_ECX[1] * 4) != 0x2c))
          {
            return false;
          }
          bVar9 = true;
          goto LAB_0064958f;
        }
      }
      else if (*(int *)((&PTR_DAT_00b152b0)[piVar8[6]] + in_ECX[1] * 4) != 0x2c) {
        return false;
      }
      bVar9 = true;
    }
    else {
      cVar2 = (char)piVar8[8];
      if ((((cVar2 == '\x05') || (cVar2 == '\x04')) || (cVar2 == '\x03')) ||
         (*(int *)((&PTR_DAT_00b152b0)[*(int *)(in_ECX[2] + 0x18)] + in_ECX[1] * 4) == 0x2c)) {
        if (*(char *)((int)piVar8 + 0x2f) == -1) {
          iVar7 = FUN_009828c0();
          iVar7 = iVar7 + piVar8[0xc];
          fVar10 = extraout_ST0;
        }
        else {
          iVar7 = (int)*(char *)((int)piVar8 + 0x2f) + piVar8[0xc];
        }
        if (iVar7 < 0x18) {
          if (fVar10 < (float10)(int)*(char *)((int)piVar8 + 0x2f)) {
            bVar9 = true;
          }
        }
        else {
          iVar7 = iVar7 + -0x17;
        }
        iVar3 = FUN_009828c0();
        if (iVar3 < iVar7) {
          if ((bVar9 == false) && (param_2 != '\0')) {
            param_2 = '\0';
          }
        }
        else {
          bVar9 = true;
        }
        FUN_004fbf90(piVar8,param_1 + 0x11,0x400);
        cVar2 = FUN_00565df0();
        if (cVar2 != '\0') {
          uVar4 = FUN_00402ba0();
          FUN_0041ffc0(piVar8,uVar4);
        }
        if (bVar9 != false) goto LAB_0064958f;
      }
      if (param_2 == '\0') {
        return bVar9;
      }
      cVar2 = FUN_005660b0();
      if (cVar2 != '\0') {
        return bVar9;
      }
    }
LAB_0064958f:
    cVar2 = FUN_005660a0();
    if (cVar2 != '\0') {
      FUN_005eae70();
      if (((int *)in_ECX[2] != (int *)0x0) && (piVar8 == (int *)in_ECX[2])) {
        (**(code **)(*piVar8 + 0x10))(1);
      }
      piVar8 = (int *)0x0;
    }
    FUN_00648e40(param_1);
    if ((piVar8 == (int *)0x0) || (piVar8 == (int *)in_ECX[2])) {
      return false;
    }
    if (((uint)piVar8[7] >> 9 & 1) != 0) {
      iVar7 = FUN_006ecc80();
      iVar3 = FUN_006ecc80();
      if (iVar7 == iVar3) {
        if (in_ECX[1] != 0) {
          (**(code **)(*in_ECX + 0x38c))(1);
        }
        in_ECX[2] = (int)piVar8;
        return false;
      }
    }
    in_ECX[3] = (int)fVar1;
    in_ECX[1] = 0;
  }
  if (!bVar9) {
    return bVar9;
  }
  if ((piVar8 != (int *)0x0) && ((int *)in_ECX[2] != piVar8)) {
    cVar2 = FUN_00565db0();
    if (cVar2 == '\0') {
      cVar2 = FUN_00565dc0();
      if (cVar2 == '\0') goto LAB_00649686;
      pcVar13 = FUN_00645af0;
    }
    else {
      pcVar13 = FUN_00645a30;
    }
    uVar12 = 0x459c4000;
    piVar14 = param_1;
    uVar4 = (**(code **)(*param_1 + 0x174))(0x459c4000,pcVar13,param_1);
    uVar11 = 0x459c4000;
    uVar5 = (**(code **)(*param_1 + 0x174))(0x459c4000,uVar4);
    uVar6 = FUN_006ecc80(uVar5);
    FUN_00446b90(uVar6,uVar5,uVar11,uVar4,uVar12,pcVar13,piVar14);
  }
LAB_00649686:
  if (((int *)in_ECX[2] != (int *)0x0) && ((int *)in_ECX[2] != piVar8)) {
    cVar2 = FUN_004bf150();
    if (cVar2 == '\0') {
      cVar2 = FUN_00565da0();
      if (cVar2 == '\0') goto LAB_006496f5;
      pcVar13 = FUN_00645af0;
    }
    else {
      pcVar13 = FUN_00645a30;
    }
    uVar12 = 0x459c4000;
    piVar14 = param_1;
    uVar4 = (**(code **)(*param_1 + 0x174))(0x459c4000,pcVar13,param_1);
    uVar11 = 0x459c4000;
    uVar5 = (**(code **)(*param_1 + 0x174))(0x459c4000,uVar4);
    uVar6 = FUN_006ecc80(uVar5);
    FUN_00446b90(uVar6,uVar5,uVar11,uVar4,uVar12,pcVar13,piVar14);
  }
LAB_006496f5:
  if ((((int *)in_ECX[2] != (int *)0x0) &&
      (((piVar8 != (int *)in_ECX[2] || (iVar7 = FUN_005eae10(), iVar7 == 0)) &&
       (cVar2 = FUN_00567ca0(), cVar2 != '\0')))) && (*(char *)(in_ECX[2] + 0x20) != '\0')) {
    FUN_00568bb0(param_1);
  }
  cVar2 = FUN_00566dc0(param_1,0,0xbf800000);
  if (cVar2 != '\0') {
    FUN_005e6e00();
  }
  *(undefined1 *)(in_ECX + 0x21) = 0;
  iVar7 = param_1[10];
  uVar4 = (**(code **)(*param_1 + 0x174))(iVar7);
  uVar5 = FUN_006ecc80(uVar4);
  uVar6 = FUN_004d6670(uVar5);
  FUN_004d7a20(uVar6,uVar5,uVar4,iVar7);
  (**(code **)(*in_ECX + 0x38c))(0);
  pcVar13 = *(code **)(*in_ECX + 0x174);
  in_ECX[0xb] = 0;
  iVar7 = (*pcVar13)();
  if ((iVar7 != 0) && (*(char *)(iVar7 + 0x20) != '\x15')) {
    (**(code **)(*in_ECX + 0x178))(0);
  }
  (**(code **)(*in_ECX + 0xbc))(0);
  (**(code **)(*in_ECX + 0x394))(0);
  while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
    iVar7 = in_ECX[0xf];
    if (iVar7 != 0) {
      FUN_00401f20(iVar7);
    }
    FUN_0065c620(iVar7);
  }
  return bVar9;
}



void FUN_0064a380(undefined4 param_1,char param_2)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *in_ECX;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  code *pcVar16;
  int iStack_4c;
  int *piStack_48;
  int *local_44;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  iVar6 = in_ECX[2];
  if (((piVar5 != (int *)0x0) && (iVar6 == 0)) ||
     (((*(uint *)(iVar6 + 0x1c) >> 2 & 1) == 0 &&
      ((cVar4 = FUN_005660b0(), cVar4 == '\0' && ((*(uint *)(iVar6 + 0x1c) >> 1 & 1) == 0)))))) {
    local_44 = (int *)FUN_00401f00(8);
    if (local_44 == (int *)0x0) {
      local_44 = (int *)0x0;
    }
    else {
      *local_44 = 0;
      local_44[1] = 0;
    }
    iVar6 = (**(code **)(*in_ECX + 0x2c))();
    fVar2 = (float)iVar6;
    if (iVar6 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    FUN_005e0340(local_44,fVar2);
    iVar6 = 0;
    iStack_4c = 0;
    bVar3 = false;
    piStack_48 = local_44;
    if ((local_44[1] != 0) || (*local_44 != 0)) {
      do {
        if ((piStack_48[1] == 0) && (*piStack_48 == 0)) break;
        iVar1 = *piStack_48;
        uVar12 = 0;
        if (*(int *)(iVar1 + 0x28) != 0) {
          uVar12 = FUN_00569e60();
        }
        (**(code **)(*in_ECX + 0x144))(0);
        cVar4 = FUN_0056a950(piVar5,uVar12);
        if (cVar4 != '\0') {
          if (param_2 != '\0') {
            FUN_004fbf90(iVar1,piVar5 + 0x11,0x200);
            FUN_004fbf90(in_ECX[2],piVar5 + 0x11,0x400);
          }
          in_ECX[2] = iVar1;
          FUN_005e6e00();
          (**(code **)(*in_ECX + 0x55c))(piVar5);
          switch(*(undefined1 *)(iVar1 + 0x20)) {
          case 0:
            if (*(int *)(iVar1 + 0x28) == 0) {
              puVar15 = auStack_30;
            }
            else {
              piVar9 = (int *)FUN_00569e60();
              if ((piVar9 != (int *)0x0) && (((uint)piVar9[2] >> 5 & 1) == 0)) {
                puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x174))();
                FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
                bVar3 = true;
                cVar4 = (**(code **)(*piVar9 + 400))();
                if ((cVar4 == '\0') &&
                   ((((uint)piVar9[2] >> 0xb & 1) == 0 && (((uint)piVar9[2] >> 5 & 1) == 0)))) {
                  FUN_004dd260(piVar5,0,0,1);
                }
                iVar6 = FUN_006ecc80();
                iStack_4c = FUN_004d6670();
                break;
              }
              puVar15 = auStack_24;
            }
            puVar7 = (undefined4 *)FUN_00566b30(puVar15,piVar5);
            FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
            iVar6 = FUN_00566a40(piVar5);
            iStack_4c = FUN_00566940(piVar5);
LAB_0064a77a:
            bVar3 = false;
            break;
          case 1:
            if (((*(int *)(iVar1 + 0x28) != 0) &&
                ((((iVar8 = FUN_00569e60(), iVar8 != 0 || (iVar8 = FUN_00569e70(), iVar8 != 0)) ||
                  (iVar8 = FUN_00569e80(), iVar8 != 0)) &&
                 ((piVar9 = (int *)FUN_00569e60(), piVar9 != (int *)0x0 &&
                  (((uint)piVar9[2] >> 5 & 1) == 0)))))) && (piVar9 != DAT_00b333c4)) {
              puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x174))();
              FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
              iVar6 = FUN_006ecc80();
              iStack_4c = FUN_004d6670();
              goto LAB_0064a77a;
            }
            break;
          case 3:
            puVar7 = (undefined4 *)FUN_00566b30(auStack_18,piVar5);
            FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
            iVar6 = FUN_00566a40(piVar5);
            iStack_4c = FUN_00566940(piVar5);
            if ((*(int *)(iVar1 + 0x24) == 0) || (iVar8 = FUN_005697e0(), iVar8 == 0))
            goto LAB_0064a77a;
            bVar3 = true;
            break;
          case 4:
            puVar7 = (undefined4 *)FUN_00566b30(auStack_c,piVar5);
            FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
            iVar6 = FUN_00566a40(piVar5);
            iStack_4c = FUN_00566940(piVar5);
            if ((*(int *)(iVar1 + 0x24) == 0) || (iVar8 = FUN_005697e0(), iVar8 == 0))
            goto LAB_0064a77a;
            bVar3 = true;
            break;
          case 5:
          case 6:
            puVar7 = (undefined4 *)FUN_00566b30(auStack_3c,piVar5);
            FUN_004d8a30(*puVar7,puVar7[1],puVar7[2]);
            iVar6 = FUN_00566a40(piVar5);
            iStack_4c = FUN_00566940(piVar5);
            if ((*(int *)(iVar1 + 0x24) == 0) || (iVar8 = FUN_00569740(), iVar8 != 1))
            goto LAB_0064a77a;
            bVar3 = true;
          }
          FUN_005e6e00();
          cVar4 = FUN_00565df0();
          if (cVar4 != '\0') {
            uVar12 = FUN_00402ba0();
            FUN_0041ffc0(iVar1,uVar12);
          }
          cVar4 = FUN_00565db0();
          if (cVar4 == '\0') {
            cVar4 = FUN_00565dc0();
            if (cVar4 == '\0') goto LAB_0064a80a;
            pcVar16 = FUN_00645af0;
          }
          else {
            pcVar16 = FUN_00645a30;
          }
          uVar14 = 0x459c4000;
          piVar9 = piVar5;
          uVar12 = (**(code **)(*piVar5 + 0x174))(0x459c4000,pcVar16,piVar5);
          uVar13 = 0x459c4000;
          uVar10 = (**(code **)(*piVar5 + 0x174))(0x459c4000,uVar12);
          uVar11 = FUN_006ecc80(uVar10);
          FUN_00446b90(uVar11,uVar10,uVar13,uVar12,uVar14,pcVar16,piVar9);
        }
LAB_0064a80a:
        piStack_48 = (int *)piStack_48[1];
      } while (piStack_48 != (int *)0x0);
      FUN_004526e0();
      FUN_00401f20(local_44);
      local_44 = piStack_48;
      if ((iVar6 != 0) || (iStack_4c != 0)) {
        if (bVar3) {
          FUN_004d89d0(0x7f7fffff);
        }
        FUN_004dd4b0(piVar5,iVar6,iStack_4c);
        in_ECX[2] = 0;
      }
    }
    FUN_00401f20(local_44);
  }
  (**(code **)(*(int *)piVar5[0x16] + 0x144))(0);
  return;
}



undefined4 FUN_0064abd0(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *in_ECX;
  int iVar5;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x380))();
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*param_1 + 900))(0);
  (**(code **)(*piVar1 + 0x38c))(0);
  iVar5 = piVar1[10];
  uVar2 = (**(code **)(*piVar1 + 0x174))(iVar5);
  uVar3 = FUN_006ecc80(uVar2);
  uVar4 = FUN_004d6670(uVar3);
  FUN_004d7a20(uVar4,uVar3,uVar2,iVar5);
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return 1;
}



void FUN_0064ac60(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c3a68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a72660;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a72084;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0064acd0(byte param_1)

{
  FUN_00648cb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0064acf0(byte param_1)

{
  FUN_0064ac60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0064ada0(void)

{
  uint in_EAX;
  uint uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0064adb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x2c))();
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



void FUN_0064adc0(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 uVar3;
  
  if (in_ECX[0xb] != 0) {
    (**(code **)(*param_1 + 0x120))();
    if (in_ECX[0xb] == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*(int *)in_ECX[0xb] + 0x124))();
    }
    uVar3 = 0;
    uVar2 = (**(code **)(*in_ECX + 0x2a8))(uVar1,0);
    FUN_00699190(uVar2,uVar1,uVar3);
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



void FUN_0064ae20(undefined4 param_1)

{
  int *in_ECX;
  
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



undefined4 FUN_0064ae90(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xe8);
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0xe8) = param_1;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0xe8) = param_1;
  return 1;
}



undefined4 FUN_0064aed0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xec);
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0xec) = param_1;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0xec) = param_1;
  return 1;
}



undefined4 FUN_0064af10(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xf0);
  if (iVar1 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0xf0) = param_1;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0xf0) = param_1;
  return 1;
}



undefined4 FUN_0064b1f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  iVar1 = FUN_006600d0(1);
  uVar2 = DAT_00b3ba98;
  if (param_1 != iVar1) {
    uVar2 = *(undefined4 *)(in_ECX + 0x110);
  }
  return uVar2;
}



int FUN_0064b300(void)

{
  undefined2 uVar1;
  int in_ECX;
  
  if (*(short *)(in_ECX + 0x138) == -1) {
    FUN_005e02e0(0);
    uVar1 = FUN_0051ca50();
    *(undefined2 *)(in_ECX + 0x138) = uVar1;
  }
  return (int)*(short *)(in_ECX + 0x138);
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0064b3a0(float *param_1)

{
  int in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    local_30 = *param_1 * 0.14287673;
    local_2c = param_1[1] * 0.14287673;
    local_28 = param_1[2] * 0.14287673;
    FUN_008ac0b0(&local_30);
  }
  return;
}



void FUN_0064b400(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3ab4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00658690(uVar2);
  *in_ECX = &PTR_FUN_00a72684;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x46] = 0;
  *(undefined2 *)(in_ECX + 0x4d) = 0;
  *(undefined1 *)((int)in_ECX + 0x136) = 0xff;
  in_ECX[0x61] = 0;
  in_ECX[0x3e] = 0xbf800000;
  local_4 = 2;
  in_ECX[0x51] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  *(undefined1 *)(in_ECX + 0x3d) = 0;
  *(undefined1 *)((int)in_ECX + 0xf5) = 0;
  *(undefined2 *)(in_ECX + 0x4e) = 0xffff;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  puVar3 = (undefined4 *)FUN_00401f00(8);
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
  }
  in_ECX[0x5d] = puVar3;
  in_ECX[0xd] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x5f] = 0;
  *(undefined1 *)(in_ECX + 0x45) = 0;
  *(undefined1 *)((int)in_ECX + 0x115) = 0;
  *(undefined1 *)(in_ECX + 0x47) = 0;
  in_ECX[0xe] = 0;
  *(undefined1 *)((int)in_ECX + 0x11d) = 0;
  in_ECX[0x48] = 0;
  *(undefined1 *)(in_ECX + 0x49) = 0x7f;
  FUN_006faee0(0);
  *(undefined1 *)((int)in_ECX + 0x136) = 0;
  in_ECX[0x4a] = DAT_00b3f9a8;
  in_ECX[0x4b] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0x2e] = 0;
  in_ECX[0x4c] = uVar1;
  *(undefined1 *)(in_ECX + 0x60) = 0;
  puVar3 = (undefined4 *)in_ECX[0x61];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[0x61] = 0;
  }
  in_ECX[0x2f] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x52] = 0;
  *(undefined1 *)(in_ECX + 0x53) = 0;
  in_ECX[0x55] = 0x3f800000;
  in_ECX[0x54] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x56] = 0;
  *(undefined1 *)((int)in_ECX + 0x161) = 0;
  in_ECX[0x22] = 0;
  *(undefined1 *)(in_ECX + 0x32) = 1;
  *(undefined1 *)(in_ECX + 0x5a) = 0;
  *(undefined1 *)((int)in_ECX + 0x169) = 0;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  in_ECX[0x62] = 0;
  *(undefined1 *)((int)in_ECX + 0x16a) = 0;
  *(undefined1 *)((int)in_ECX + 0x16b) = 0;
  *(undefined1 *)(in_ECX + 0x5b) = 0;
  *(undefined1 *)((int)in_ECX + 0x16d) = 0;
  in_ECX[0x5c] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0064b650(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  
  *(char *)(in_ECX + 0xd0) = (char)param_1[0x34];
  *(int *)(in_ECX + 0xc0) = param_1[0x30];
  pcVar1 = *(code **)(*param_1 + 0x180);
  param_1[0x30] = 0;
  uVar4 = (*pcVar1)();
  *(undefined4 *)(in_ECX + 0xcc) = uVar4;
  *(int *)(in_ECX + 0xd4) = param_1[0x35];
  *(int *)(in_ECX + 0xd8) = param_1[0x36];
  *(int *)(in_ECX + 0xdc) = param_1[0x37];
  *(int *)(in_ECX + 0x17c) = param_1[0x5f];
  param_1[0x5f] = 0;
  if (*(int *)(in_ECX + 0x17c) != 0) {
    FUN_00470fc0(5,0);
  }
  *(int *)(in_ECX + 0xe4) = param_1[0x39];
  *(int *)(in_ECX + 0xe8) = param_1[0x3a];
  *(int *)(in_ECX + 0xec) = param_1[0x3b];
  *(int *)(in_ECX + 0xf0) = param_1[0x3c];
  *(int *)(in_ECX + 0xf8) = param_1[0x3e];
  *(char *)(in_ECX + 0xf4) = (char)param_1[0x3d];
  *(undefined1 *)(in_ECX + 0xf5) = *(undefined1 *)((int)param_1 + 0xf5);
  uVar3 = (**(code **)(*param_1 + 0x2fc))();
  *(undefined1 *)(in_ECX + 0x114) = uVar3;
  uVar3 = (**(code **)(*param_1 + 0x304))();
  *(undefined1 *)(in_ECX + 0x115) = uVar3;
  *(char *)(in_ECX + 0x11c) = (char)param_1[0x47];
  *(int *)(in_ECX + 0x110) = param_1[0x44];
  *(int *)(in_ECX + 0x148) = param_1[0x52];
  *(undefined1 *)(in_ECX + 0xf5) = *(undefined1 *)((int)param_1 + 0xf5);
  *(int *)(in_ECX + 0xfc) = param_1[0x3f];
  *(int *)(in_ECX + 0x100) = param_1[0x40];
  *(int *)(in_ECX + 0x104) = param_1[0x41];
  *(int *)(in_ECX + 0x108) = param_1[0x42];
  *(int *)(in_ECX + 0x10c) = param_1[0x43];
  *(char *)(in_ECX + 0x168) = (char)param_1[0x5a];
  *(undefined1 *)(in_ECX + 0x169) = *(undefined1 *)((int)param_1 + 0x169);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0xf5) = 0;
  *(int *)(in_ECX + 0xe0) = param_1[0x38];
  piVar8 = param_1 + 0x2a;
  *(int *)(in_ECX + 0xbc) = param_1[0x2f];
  *(int *)(in_ECX + 0xc4) = param_1[0x31];
  for (; (piVar8 != (int *)0x0 && (iVar9 = *piVar8, iVar9 != 0)); piVar8 = (int *)piVar8[1]) {
    if (*(int *)(in_ECX + 0xa8) != 0) {
      puVar5 = (undefined4 *)FUN_00401f00(8);
      if (puVar5 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)0x0;
      }
      else {
        *puVar5 = *(undefined4 *)(in_ECX + 0xa8);
        puVar5[1] = 0;
      }
      puVar5[1] = *(undefined4 *)(in_ECX + 0xac);
      *(undefined4 **)(in_ECX + 0xac) = puVar5;
    }
    *(int *)(in_ECX + 0xa8) = iVar9;
  }
  uVar3 = (**(code **)(*param_1 + 0x398))();
  *(undefined1 *)(in_ECX + 0x180) = uVar3;
  *(undefined1 *)(in_ECX + 0x11d) = *(undefined1 *)((int)param_1 + 0x11d);
  *(int *)(in_ECX + 0x120) = param_1[0x48];
  *(char *)(in_ECX + 0x124) = (char)param_1[0x49];
  *(int *)(in_ECX + 0x128) = param_1[0x4a];
  *(int *)(in_ECX + 300) = param_1[0x4b];
  *(int *)(in_ECX + 0x130) = param_1[0x4c];
  *(int *)(in_ECX + 0x134) = param_1[0x4d];
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x3a4))();
  puVar5 = *(undefined4 **)(in_ECX + 0x184);
  if (puVar5 != puVar6) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar5 + 1), LVar7 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 **)(in_ECX + 0x184) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar5 = *(undefined4 **)(in_ECX + 0x174);
  iVar9 = puVar5[1];
  while (iVar9 != 0) {
    iVar9 = *(int *)(puVar5[1] + 4);
    FUN_00401f20(puVar5[1]);
    puVar5[1] = iVar9;
  }
  *puVar5 = 0;
  for (piVar8 = (int *)(**(code **)(*param_1 + 0x298))();
      (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0)))); piVar8 = (int *)piVar8[1]) {
    iVar9 = (**(code **)(*(int *)*piVar8 + 4))();
    piVar2 = *(int **)(in_ECX + 0x174);
    if (iVar9 != 0) {
      if (*piVar2 != 0) {
        piVar10 = (int *)FUN_00401f00(8);
        if (piVar10 == (int *)0x0) {
          piVar10 = (int *)0x0;
        }
        else {
          *piVar10 = *piVar2;
          piVar10[1] = 0;
        }
        piVar10[1] = piVar2[1];
        piVar2[1] = (int)piVar10;
      }
      *piVar2 = iVar9;
    }
  }
  *(short *)(in_ECX + 0x138) = (short)param_1[0x4e];
  *(int *)(in_ECX + 0x13c) = param_1[0x4f];
  *(int *)(in_ECX + 0x140) = param_1[0x50];
  puVar5 = *(undefined4 **)(in_ECX + 0x118);
  if (puVar5 != (undefined4 *)param_1[0x46]) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar5 + 1), LVar7 == 0)) &&
       (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    iVar9 = param_1[0x46];
    *(int *)(in_ECX + 0x118) = iVar9;
    if (iVar9 != 0) {
      InterlockedIncrement((LONG *)(iVar9 + 4));
    }
  }
  *(char *)(in_ECX + 0x14c) = (char)param_1[0x53];
  *(int *)(in_ECX + 0x150) = param_1[0x54];
  *(int *)(in_ECX + 0x154) = param_1[0x55];
  *(int *)(in_ECX + 0x158) = param_1[0x56];
  *(int *)(in_ECX + 0x188) = param_1[0x62];
  *(undefined1 *)(in_ECX + 0x16a) = *(undefined1 *)((int)param_1 + 0x16a);
  *(char *)(in_ECX + 0x16c) = (char)param_1[0x5b];
  *(undefined1 *)(in_ECX + 0x16d) = *(undefined1 *)((int)param_1 + 0x16d);
  *(int *)(in_ECX + 0x170) = param_1[0x5c];
  param_1[0x5c] = 0;
  return;
}



undefined4
FUN_0064bbc0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            float param_6,uint param_7,int *param_8,undefined4 param_9)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 uVar10;
  int *piVar11;
  int *in_ECX;
  int *unaff_EBX;
  uint *unaff_FS_OFFSET;
  float10 fVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined1 auStack_44 [56];
  uint local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  piVar2 = param_2;
  piVar1 = param_1;
  iStack_4 = -1;
  puStack_8 = &LAB_009c3ae3;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (param_2 != (int *)0x0) {
    iVar6 = FUN_00659a00(uVar5);
    iVar7 = FUN_00659a00();
    if ((iVar7 != iVar6) && (iVar6 = (**(code **)(*piVar1 + 0x154))(), iVar6 == 0)) {
      FUN_00646020(piVar1,piVar2,param_3,param_4,param_5,param_6,param_7,param_9,0,1);
    }
    param_7 = CONCAT31(param_7._1_3_,param_6._0_1_);
    param_2 = (int *)(**(code **)(*in_ECX + 0x184))();
    (**(code **)(*in_ECX + 0x350))();
    iVar6 = FUN_005e0dc0();
    if (((iVar6 != 5) && (iVar6 = FUN_005e0dc0(), iVar6 != 3)) &&
       (iVar6 = (**(code **)(*piVar1 + 0x388))(), iVar6 == 0)) {
      iVar6 = (**(code **)(*piVar1 + 0x330))();
      if (iVar6 != 0) {
        piVar11 = piVar2;
        (**(code **)(*piVar1 + 0x330))(piVar2);
        cVar3 = FUN_00613670(piVar11);
        if (cVar3 != '\0') goto LAB_0064bead;
      }
      iVar6 = (**(code **)(*piVar1 + 0x330))();
      if ((iVar6 == 0) && ((char)param_8 == '\0')) {
        param_1 = (int *)0x0;
        uVar8 = (**(code **)(*in_ECX + 0xec))(1,piVar2,&param_1,0,1);
        iVar6 = FUN_00621b40(piVar1,uVar8);
        if ((iVar6 == 7) && (pfVar9 = (float *)FUN_00403c00(), *pfVar9 < (float)param_1)) {
          iVar6 = (**(code **)(*piVar1 + 0x380))();
          if ((((iVar6 == 0) && (iVar6 = (**(code **)(*piVar1 + 0x388))(), iVar6 == 0)) ||
              (iVar6 = FUN_005e0380(), iVar6 == 0)) ||
             (iVar6 = *(int *)((int)param_2 + 0x18), iVar7 = (**(code **)(*in_ECX + 0x180))(),
             *(int *)((&PTR_DAT_00b152b0)[iVar6] + iVar7 * 4) != 0)) {
            (**(code **)(*piVar1 + 0x318))(piVar2,1,1,0,0);
            if (piVar2 == DAT_00b333c4) {
              FUN_0065df40(piVar1);
            }
            uVar8 = 1;
            goto LAB_0064beaf;
          }
          goto LAB_0064bead;
        }
      }
      if ((piVar2 == DAT_00b333c4) && ((char)param_8 == '\0')) {
        iVar6 = FUN_00660530();
        if (DAT_00b36a78 <= iVar6) goto LAB_0064bead;
        DAT_00b333c4[0x1e8] = DAT_00b333c4[0x1e8] + 1;
      }
      cVar3 = FUN_005e0530();
      cVar4 = FUN_005e1cb0();
      if ((cVar4 != '\0') || (cVar3 == '\0')) {
        cVar4 = FUN_005e1e90();
        if (cVar4 != '\0') {
          if (cVar3 == '\0') goto LAB_0064bead;
          iVar6 = (**(code **)(*in_ECX + 8))();
          if (iVar6 == 0) {
            uVar8 = (**(code **)(*piVar2 + 0x174))();
            uVar8 = (**(code **)(*piVar1 + 0x174))(uVar8);
            cVar3 = FUN_00689230(piVar1,uVar8);
            if (cVar3 == '\0') {
              FUN_0067d760();
              uVar14 = 0;
              iStack_4 = 0;
              piVar11 = piVar1;
              uVar8 = (**(code **)(*piVar2 + 0x174))(piVar1,0);
              uVar10 = (**(code **)(*piVar1 + 0x174))(uVar8);
              cVar3 = FUN_0067eb60(uVar10,uVar8,piVar11,uVar14);
              if ((cVar3 != '\0') && (cVar3 = FUN_0067d650(piVar1), cVar3 == '\0')) {
                iStack_4 = 0xffffffff;
                FUN_0060d0a0();
                goto LAB_0064bead;
              }
              iStack_4 = -1;
              FUN_0060d0a0();
            }
          }
        }
        if ((in_ECX[2] != 0) && (cVar3 = FUN_00567770(), cVar3 != '\0')) {
          param_2 = (int *)FUN_0041fb20();
        }
        iVar6 = (int)param_2;
        uVar8 = 0;
        (**(code **)(*in_ECX + 0x70))(auStack_44,piVar1,0);
        if ((((iVar6 == 0) || ((*(uint *)(iVar6 + 0x1c) >> 0x16 & 1) == 0)) ||
            ((char)param_5 != '\0')) || (param_6._0_1_ != '\0')) {
          iVar6 = (**(code **)(*piVar1 + 0x330))();
          if (iVar6 == 0) {
            (**(code **)(*piVar1 + 0x30c))();
            in_ECX[0x12] = in_ECX[0x11];
            in_ECX[0x11] = 0;
            cVar3 = FUN_005e6c60();
            if (cVar3 == '\0') {
              cVar3 = (**(code **)(*piVar2 + 0x334))(1);
              if ((cVar3 != '\0') && (iVar6 = (**(code **)(*piVar2 + 0x330))(), iVar6 != 0)) {
                piVar11 = piVar1;
                (**(code **)(*piVar2 + 0x330))(piVar1);
                cVar3 = FUN_00613670(piVar11);
                if (cVar3 != '\0') goto LAB_0064c105;
              }
            }
            else {
LAB_0064c105:
              param_7 = param_7 & 0xffffff00;
            }
            goto LAB_0064c124;
          }
          (**(code **)(*piVar1 + 0x330))(piVar2);
          cVar3 = FUN_00613670(uVar8);
          if (cVar3 == '\0') goto LAB_0064c124;
        }
        else {
          iVar6 = FUN_00566db0();
          param_6 = (float)iVar6;
          if (iVar6 < 0) {
            param_6 = param_6 + 4.2949673e+09;
          }
          if (param_6 < 1.0) {
            param_6 = 600.0;
          }
          piVar11 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
          cVar3 = *(char *)(iStack_4 + 0x20);
          if ((((cVar3 == '\x01') || (cVar3 == '\x02')) || (cVar3 == '\a')) &&
             ((char)in_ECX[0x34] != '\0')) {
            iVar6 = (**(code **)(*piVar1 + 0x174))();
            unaff_EBX = *(int **)(iVar6 + 4);
          }
          fVar12 = (float10)FUN_004d7e30(&stack0xffffffb0);
          if ((float10)param_6 < fVar12) {
            if ((piVar11 != (int *)0x0) && (iVar6 = (**(code **)(*piVar11 + 0x330))(), iVar6 != 0))
            {
              piVar13 = piVar2;
              (**(code **)(*piVar11 + 0x330))(piVar2);
              cVar3 = FUN_00613670(piVar13);
              if (cVar3 != '\0') goto LAB_0064c068;
            }
            if ((piVar11 == DAT_00b333c4) && (iVar6 = (**(code **)(*piVar2 + 0x330))(), iVar6 != 0))
            {
              piVar11 = DAT_00b333c4;
              (**(code **)(*piVar2 + 0x330))(DAT_00b333c4);
              cVar3 = FUN_00613670(piVar11);
              if (cVar3 != '\0') goto LAB_0064c068;
            }
            (**(code **)(*in_ECX + 0x8c))(1);
            goto LAB_0064bead;
          }
LAB_0064c068:
          (**(code **)(*in_ECX + 0x8c))(0);
          (**(code **)(*piVar1 + 0x30c))();
          in_ECX[0x12] = in_ECX[0x11];
          in_ECX[0x11] = 0;
LAB_0064c124:
          (**(code **)(*in_ECX + 0x14c))(param_6);
          if (DAT_00b333b8 == '\0') {
            piVar11 = (int *)FUN_0067cf50(0xc,piVar2);
            iVar6 = 0;
            param_1 = piVar11;
            if (piVar11 == (int *)0x0) {
LAB_0064c241:
              param_8 = (int *)FUN_00401f00(0x24);
              puStack_8 = (undefined1 *)0x1;
              if (param_8 == (int *)0x0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_0067cbc0();
              }
              puStack_8 = (undefined1 *)0xffffffff;
              *(undefined4 *)(iVar6 + 0xc) = 0xc;
              FUN_0067bf80(iVar6);
              uVar5 = param_5;
              FUN_0067cdb0(piVar1,param_5,0xffffffff);
              FUN_0067cdb0(piVar2,(char)uVar5 == '\0',0xffffffff);
            }
            else {
              do {
                iVar7 = *piVar11;
                if (iVar7 == 0) break;
                piVar11 = (int *)piVar11[1];
                param_8 = piVar11;
                if (iVar7 == 0) {
                  param_8 = (int *)FUN_0067cf50(0xc,piVar1);
                  iVar7 = *param_8;
                  if (iVar7 == 0) {
                    iVar7 = 0;
                  }
                  else {
                    FUN_0067cdb0(piVar2,(char)param_5 == '\0',0xffffffff);
                  }
                  FUN_004526e0();
                  FUN_00401f20(param_8);
                }
                else {
                  iVar6 = FUN_0067b6b0(piVar2,0);
                  if ((*(char *)(iVar6 + 4) == '\0') && ((char)param_5 == '\0')) {
                    piVar11 = (int *)FUN_0067cf50(0xc,piVar1);
                    iVar7 = *piVar11;
                    if (iVar7 == 0) {
                      iVar7 = 0;
                    }
                    else {
                      FUN_0067cdb0(piVar2,1,0xffffffff);
                    }
                    FUN_004526e0();
                    FUN_00401f20(piVar11);
                    piVar11 = param_8;
                  }
                  else {
                    FUN_0067cdb0(piVar1,param_5,0xffffffff);
                  }
                }
                iVar6 = iVar7;
              } while (piVar11 != (int *)0x0);
              if (iVar6 == 0) goto LAB_0064c241;
            }
            piVar11 = param_1;
            FUN_004526e0();
            FUN_00401f20(piVar11);
            in_ECX = unaff_EBX;
          }
          uVar5 = param_5;
          uVar8 = 0;
          if ((char)param_7 != '\0') {
            uVar8 = 200;
          }
          iVar6 = in_ECX[2];
          param_5 = param_5 & 0xffffff00;
          if ((iVar6 != 0) &&
             (((*(char *)(iVar6 + 0x20) == '\x04' || ((*(uint *)(iVar6 + 0x1c) >> 0x15 & 1) != 0))
              || ((*(uint *)(iVar6 + 0x1c) >> 0x14 & 1) != 0)))) {
            param_5 = CONCAT31(SUB43(uVar5,1),1);
          }
          (**(code **)(*piVar1 + 0x32c))(piVar2,param_7,param_6,param_3,uVar8,param_9);
          if (piVar2 == DAT_00b333c4) {
            FUN_0065df40(piVar1);
          }
          if (param_6._0_1_ != '\0') {
            (**(code **)(*in_ECX + 0x588))(piVar1,0,0);
          }
        }
        uVar8 = 1;
        goto LAB_0064beaf;
      }
    }
  }
LAB_0064bead:
  uVar8 = 0;
LAB_0064beaf:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064c350(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *in_ECX;
  int *piVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fStack_44;
  float *pfStack_40;
  double dStack_30;
  undefined8 uStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar10 = param_1;
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  iVar4 = FUN_005e6780();
  if ((iVar4 != 0) ||
     ((in_ECX[0xb] != 0 &&
      ((cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0' ||
       (cVar2 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar2 != '\0')))))) {
    bVar1 = false;
    if ((in_ECX[0xb] != 0) &&
       ((cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0' &&
        ((int *)in_ECX[0xb] != param_1)))) {
      bVar1 = true;
      iVar4 = FUN_009832e6((int *)in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      iVar4 = *(int *)(*(int *)(iVar4 + 0x58) + 8);
      if (((int *)in_ECX[0xb] != DAT_00b333c4) &&
         ((iVar4 == 0 ||
          ((*(char *)(iVar4 + 0x20) != '\x01' && (cVar2 = FUN_005660a0(), cVar2 == '\0')))))) {
        (**(code **)(*in_ECX + 0x17c))(0);
        return;
      }
    }
    pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
    pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_18 = *pfVar6 - *pfVar5;
    fStack_14 = pfVar6[1] - pfVar5[1];
    fStack_10 = pfVar6[2] - pfVar5[2];
    piVar14 = (int *)0x0;
    fStack_44 = 0.0;
    fVar18 = fStack_44;
    if (bVar1) {
      pfVar5 = (float *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
      fStack_18 = *pfVar6 - *pfVar5;
      fStack_14 = pfVar6[1] - pfVar5[1];
      uStack_24 = (double)CONCAT44(fStack_14,fStack_18);
      fStack_1c = pfVar6[2] - pfVar5[2];
      piVar14 = (int *)in_ECX[0xb];
      fStack_10 = fStack_1c;
      fStack_44 = (float)FUN_00452a60();
      if ((int)fStack_44 < 1) {
        fStack_44 = 2.8026e-43;
      }
      if ((int *)in_ECX[0xb] == DAT_00b333c4) {
        fVar18 = (float)(int)fStack_44;
      }
      else {
        FUN_006ecc80();
        cVar2 = FUN_004c97f0();
        fVar18 = _DAT_00b36aa0;
        if (cVar2 == '\0') {
          fVar18 = (float)(int)fStack_44 * _DAT_00b36a98;
        }
      }
    }
    fStack_44 = fVar18;
    if ((*(int *)(iVar3 + 0x24) == 0) || (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 == '\0')
       ) {
      if (bVar1) {
        pfVar5 = (float *)FUN_00566b30(&fStack_c,param_1);
        pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
        uStack_24 = (double)CONCAT44(pfVar6[1] - pfVar5[1],*pfVar6 - *pfVar5);
        fStack_1c = pfVar6[2] - pfVar5[2];
        pfVar5 = (float *)FUN_00566b30(&dStack_30,param_1);
        pfVar6 = (float *)(**(code **)(*piVar14 + 0x174))();
        fStack_c = *pfVar6 - *pfVar5;
        fStack_8 = pfVar6[1] - pfVar5[1];
        fStack_4 = pfVar6[2] - pfVar5[2];
        fVar15 = (float10)FUN_00982c30();
        if ((float)fVar15 <= fStack_44) {
LAB_0064c93d:
          if ((piVar14 != DAT_00b333c4) && (iVar3 = FUN_005e0380(), iVar3 != 0)) {
            FUN_005e0380();
            cVar2 = FUN_00567770();
            if (cVar2 != '\0') goto LAB_0064c962;
          }
          goto LAB_0064c992;
        }
        dStack_30 = (double)fStack_8;
        uStack_24 = (double)fStack_4;
        fVar15 = (float10)FUN_00982c30();
        fVar16 = (float10)FUN_00982c30();
        if ((float)fVar15 < (float)fVar16 == ((float)fVar15 == (float)fVar16)) goto LAB_0064c93d;
LAB_0064c962:
        if ((char)in_ECX[0x34] == '\0') {
          (**(code **)(*in_ECX + 0xc4))(1);
          (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
          return;
        }
      }
      else {
LAB_0064c992:
        if ((char)in_ECX[0x34] == '\0') goto LAB_0064ca44;
      }
      if ((!bVar1) || (fVar15 = (float10)FUN_00982c30(), (float)fVar15 <= fStack_44)) {
        iVar3 = *in_ECX;
        puVar11 = (undefined4 *)FUN_00566b30(&fStack_c,param_1);
        uVar8 = FUN_00566940(param_1);
        uVar12 = FUN_00566a40(param_1);
        cVar2 = (**(code **)(iVar3 + 0x3dc))(param_1,*puVar11,puVar11[1],puVar11[2],uVar12,uVar8);
        if (cVar2 == '\0') {
          return;
        }
      }
      if ((char)in_ECX[0x34] != '\0') {
        return;
      }
LAB_0064ca44:
      iVar3 = FUN_0046b250(0x3a);
      fVar15 = (float10)FUN_00402bd0();
      param_1 = (int *)(float)fVar15;
      uStack_24 = (double)(float)param_1;
      fVar15 = (float10)FUN_006599b0();
      if ((float10)uStack_24 < fVar15) {
        param_1 = (int *)((float)param_1 + 24.0);
      }
      uStack_24 = (double)(float)param_1;
      fVar16 = (float10)FUN_006599b0();
      fVar15 = (float10)uStack_24;
      fVar18 = *(float *)(iVar3 + 0x24);
      iVar3 = *in_ECX;
      fVar17 = (float10)FUN_005677b0(piVar10,1);
      fVar19 = (float)fVar17;
      fVar18 = (3600.0 / fVar18) * (float)(fVar15 - fVar16);
      uVar8 = FUN_00566940(piVar10);
      uVar12 = FUN_00566a40(piVar10);
      uVar13 = FUN_00566b30(&fStack_c,piVar10);
      (**(code **)(iVar3 + 0x418))(piVar10,uVar13,uVar12,uVar8,fVar18,fVar19);
      return;
    }
    if (bVar1) {
      fVar15 = (float10)FUN_00982c30();
      if ((float)fVar15 <= fStack_44) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        piVar14 = (int *)in_ECX[0xb];
        iVar3 = (**(code **)(*(int *)piVar14[0x16] + 0x184))();
        if (iVar3 != 0) {
          (**(code **)(*(int *)piVar14[0x16] + 0x188))(param_1,1);
          (**(code **)(*(int *)piVar14[0x16] + 0x184))();
          cVar2 = FUN_005660a0();
          if (cVar2 != '\0') {
            piVar10 = (int *)(**(code **)(*(int *)piVar14[0x16] + 0x184))();
            if (piVar10 != (int *)0x0) {
              (**(code **)(*piVar10 + 0x10))(1);
            }
            *(undefined4 *)(piVar14[0x16] + 8) = 0;
            (**(code **)(*piVar14 + 0x44))(0x30000);
            cVar2 = FUN_005e05b0();
            if (cVar2 != '\0') {
              FUN_005e02b0();
            }
            (**(code **)(*in_ECX + 0x18))(param_1,0);
            return;
          }
        }
      }
      goto LAB_0064c3be;
    }
    piVar14 = (int *)FUN_005e6780();
    if (piVar14 != (int *)0x0) {
      param_1 = (int *)0x0;
      if ((int *)*piVar14 != (int *)0x0) {
        param_1 = *(int **)*piVar14;
      }
      pfStack_40 = (float *)0x0;
      if ((param_1 != (int *)0x0) && (iVar4 = FUN_0041fb00(), iVar4 != 0)) {
        iVar4 = FUN_0041fb00();
        pfStack_40 = *(float **)(iVar4 + 0xc);
      }
      iVar4 = FUN_005697e0();
      if (((iVar4 == 0) && (iVar4 = in_ECX[0xc], iVar4 == 0)) ||
         (iVar7 = FUN_004d6d40(), iVar7 == 0)) {
        if ((int *)*piVar14 != (int *)0x0) {
          param_1 = *(int **)*piVar14;
        }
        pfStack_40 = (float *)0x0;
        if (((*(int *)(iVar3 + 0x24) != 0) &&
            ((piVar9 = (int *)FUN_005697e0(), piVar9 != (int *)0x0 ||
             (piVar9 = (int *)in_ECX[0xc], piVar9 != (int *)0x0)))) &&
           ((iVar3 = (**(code **)(*piVar9 + 0x170))(), iVar3 == DAT_00b35eac ||
            (iVar3 = (**(code **)(*piVar9 + 0x170))(), iVar3 == DAT_00b35eb0)))) {
          pfVar5 = (float *)(**(code **)(*piVar9 + 0x174))();
          fStack_18 = *pfVar5;
          fStack_14 = pfVar5[1];
          fStack_10 = pfVar5[2];
          pfStack_40 = (float *)FUN_00401f00(0xc);
          if (pfStack_40 == (float *)0x0) {
            pfStack_40 = (float *)0x0;
          }
          else {
            *pfStack_40 = fStack_18;
            pfStack_40[1] = fStack_14;
            pfStack_40[2] = fStack_10;
          }
        }
        iVar3 = piVar14[2];
        iVar4 = *piVar10;
        uVar8 = FUN_00452a60(pfStack_40,0);
        (**(code **)(iVar4 + 0x2c8))(iVar3,param_1,uVar8);
      }
      else {
        iVar3 = piVar14[2];
        uVar8 = FUN_00452a60(pfStack_40);
        FUN_005fc6d0(iVar3,param_1,iVar4,uVar8,pfStack_40);
      }
      FUN_00484470();
      FUN_00401f20(piVar14);
    }
  }
  (**(code **)(*in_ECX + 0x188))(piVar10,1);
LAB_0064c3be:
  if ((char)in_ECX[0x34] != '\0') {
    return;
  }
  (**(code **)(*in_ECX + 0x194))(piVar10);
  return;
}



char FUN_0064cb10(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  bool bVar5;
  uint unaff_retaddr;
  uint uVar6;
  int iVar7;
  uint3 uVar8;
  
  cVar1 = (**(code **)(*param_1 + 0x334))(1);
  if (((((cVar1 != '\0') || (cVar1 = FUN_005e6b40(), cVar1 != '\0')) ||
       (cVar1 = FUN_005e6ba0(), cVar1 != '\0')) || (cVar1 = FUN_005e03b0(), cVar1 != '\0')) ||
     (((iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 != 0 && (iVar2 != 4)) && (iVar2 != 9)))) {
    return '\0';
  }
  if (in_ECX[0x30] != 0) {
    (**(code **)(*in_ECX + 0x178))(0);
  }
  FUN_00402bd0();
  cVar1 = '\0';
  iVar2 = FUN_005e0380();
  uVar6 = unaff_retaddr & 0xffffff00;
  bVar5 = false;
  if ((iVar2 != 0) &&
     (((*(char *)(iVar2 + 0x20) == '\x04' || ((*(uint *)(iVar2 + 0x1c) >> 0x14 & 1) != 0)) ||
      ((*(uint *)(iVar2 + 0x1c) >> 0x15 & 1) != 0)))) {
    uVar6 = CONCAT31((int3)(unaff_retaddr >> 8),1);
    bVar5 = true;
  }
  if ((((char)param_1 != '\0') || (in_ECX[2] == 0)) ||
     (iVar2 = FUN_009828c0(), in_ECX[0x24] != iVar2)) {
    cVar1 = FUN_00649340(param_1,param_1);
    iVar2 = FUN_009828c0();
    in_ECX[0x24] = iVar2;
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x38c))(0);
      (**(code **)(*in_ECX + 0xbc))(0);
      (**(code **)(*in_ECX + 0x394))(0);
      while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
        iVar2 = in_ECX[0xf];
        if (iVar2 != 0) {
          FUN_00401f20(iVar2);
        }
        FUN_0065c620(iVar2);
      }
      if (bVar5) {
        uVar3 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        iVar2 = FUN_009832e6(uVar3);
        uVar3 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
        iVar4 = FUN_009832e6(uVar3);
        bVar5 = true;
        uVar8 = (uint3)(uVar6 >> 8);
        iVar7 = CONCAT31(uVar8,1);
        if ((in_ECX[2] != 0) &&
           (uVar6 = *(uint *)(in_ECX[2] + 0x1c), bVar5 = (uVar6 >> 0x14 & 1) == 0,
           (uVar6 >> 0x15 & 1) != 0)) {
          iVar7 = (uint)uVar8 << 8;
        }
        if (iVar2 != 0) {
          FUN_005227a0(param_1,bVar5,iVar7,0,1);
          return cVar1;
        }
        if (iVar4 != 0) {
          FUN_0051e240(param_1,bVar5,iVar7,1);
        }
      }
    }
  }
  return cVar1;
}



uint FUN_0064cd60(uint param_1,undefined4 param_2,undefined4 param_3,float param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *in_ECX;
  uint uVar12;
  float10 fVar13;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  uVar12 = param_5;
  if ((param_5 != 0) && (cVar4 = FUN_004c97f0(), cVar4 == '\0')) {
    uVar12 = 0;
  }
  param_5 = param_5 & 0xffffff00;
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  uVar1 = param_1;
  if ((iVar5 == 0) && (param_1 == 0)) {
    return 1;
  }
  if ((uVar12 == 0) && (param_6 == 0)) {
    return 1;
  }
  iVar5 = FUN_006ecc80();
  iVar6 = FUN_004d6670();
  if (((iVar5 == 0) || (cVar4 = FUN_004c97f0(), cVar4 == '\0')) && (iVar6 == 0)) {
    return 1;
  }
  param_1 = param_1 & 0xffffff00;
  uVar7 = FUN_004d8af0();
  uVar2 = param_6;
  if (uVar12 == 0) {
    uVar8 = 0;
    if ((param_6 != 0) && (uVar8 = FUN_004f0600(&param_2), uVar8 == 0)) {
      uVar8 = uVar2;
    }
  }
  else {
    uVar8 = FUN_004cbbb0(&param_2);
    if (uVar8 == 0) {
      uVar8 = uVar12;
    }
  }
  if (uVar7 != uVar8) {
    param_1 = CONCAT31(param_1._1_3_,1);
  }
  uStack_c = param_2;
  uStack_8 = param_3;
  fStack_4 = param_4;
  piVar9 = (int *)(**(code **)(*in_ECX + 0xcc))();
  cVar4 = FUN_005e0530();
  if (((cVar4 == '\0') && (piVar9 != (int *)0x0)) &&
     ((cVar4 = (**(code **)(*piVar9 + 400))(), cVar4 != '\0' &&
      (cVar4 = FUN_005e0530(), fVar3 = fStack_4, cVar4 != '\0')))) {
    fVar13 = (float10)FUN_005e0660();
    fStack_4 = (float)((float10)fVar3 - fVar13);
  }
  piVar9 = (int *)in_ECX[0xd];
  if (piVar9 == (int *)0x0) {
LAB_0064ceb9:
    (**(code **)(*in_ECX + 0x408))();
  }
  else {
    if ((char)param_1 == '\0') {
      (**(code **)(*piVar9 + 0x24))(uVar1,&uStack_c);
      param_5 = CONCAT31(param_5._1_3_,1);
      goto LAB_0064cf85;
    }
    if (piVar9 == (int *)0x0) goto LAB_0064ceb9;
    FUN_00689a00();
  }
  if (DAT_00b15800 == '\0') {
    cVar4 = FUN_0068b030(uVar1,&uStack_c,uVar12,param_6);
  }
  else {
    uVar10 = FUN_0065d550();
    FUN_006836e0(uVar1,uVar12,param_6,uStack_c,uStack_8,fStack_4,uVar10);
    param_1 = param_1 & 0xffffff00;
    cVar4 = FUN_00682820(uVar1,&param_1);
    if (cVar4 == '\0') goto LAB_0064cf85;
    cVar4 = (char)param_1;
  }
  if (cVar4 == '\0') {
    FUN_005f7cf0(0,0);
  }
  else {
    param_5 = CONCAT31(param_5._1_3_,1);
    puVar11 = (undefined4 *)FUN_0068a160();
    param_2 = *puVar11;
    param_3 = puVar11[1];
    param_4 = (float)puVar11[2];
    (**(code **)(*(int *)in_ECX[0xd] + 0x14))(uVar1,&param_2,0);
  }
LAB_0064cf85:
  if ((int *)in_ECX[0xd] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0xd] + 0x30))(0);
  }
  if ((char)param_5 != '\0') {
    *(undefined1 *)(in_ECX + 0x34) = 0;
  }
  return param_5 & 0xff;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064cfb0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  float10 fVar8;
  float10 fVar9;
  undefined1 *puVar10;
  undefined4 uStack_1c;
  float fStack_18;
  double dStack_14;
  undefined1 auStack_c [12];
  
  piVar1 = param_1;
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (((int *)in_ECX[0xb] == DAT_00b333c4) && ((char)DAT_00b333c4[0x170] != '\0')) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    return;
  }
  uVar4 = (**(code **)(*in_ECX + 0x184))(0,&PTR_PTR_00b03e00,&PTR_PTR_00b14b54,0);
  iVar5 = FUN_009832e6(uVar4);
  piVar7 = (int *)in_ECX[0xb];
  dStack_14 = (double)CONCAT44(dStack_14._4_4_,piVar7);
  if (((iVar5 != 0) && (piVar7 != (int *)0x0)) &&
     (cVar3 = (**(code **)(*piVar7 + 0x354))(), cVar3 == '\0')) {
    (**(code **)(*in_ECX + 0x188))(piVar7,2);
    return;
  }
  fVar8 = (float10)FUN_004d7e90(in_ECX[0xb],0);
  if ((float10)200.0 < fVar8) {
    (**(code **)(*in_ECX + 0x198))(param_1,0,param_4,1);
    return;
  }
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  if (((in_ECX[0xb] != 0) &&
      (iVar6 = FUN_009832e6(param_1[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0), iVar6 != 0)) &&
     (((int *)param_1[0x16] != (int *)0x0 &&
      (iVar6 = (**(code **)(*(int *)param_1[0x16] + 0x36c))(), iVar6 == 0)))) {
    piVar7 = (int *)in_ECX[0xb];
    uVar4 = (**(code **)(*param_1 + 0x174))();
    puVar10 = auStack_c;
    (**(code **)(*piVar7 + 0x174))(puVar10,uVar4);
    FUN_004121a0(puVar10,uVar4);
    fVar8 = (float10)FUN_00683cb0(auStack_c);
    uStack_1c = 0;
    fVar9 = (float10)FUN_00683d80(param_1,(float)fVar8,&uStack_1c);
    iVar6 = _DAT_00b36c10;
    fStack_18 = (float)fVar9;
    cVar3 = FUN_005e0590();
    if (cVar3 != '\0') {
      iVar6 = _DAT_00b36c18;
    }
    param_1 = (int *)((float)iVar6 * 0.017453292);
    fStack_18 = ABS(fStack_18);
    if (fStack_18 <= (float)param_1) {
      FUN_005e05f0(0x30);
    }
    else {
      FUN_00685530(piVar1,(float)fVar8,1);
    }
  }
  if (iVar5 != 0) {
    piVar7 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if ((piVar7 != (int *)0x0) && (cVar3 = (**(code **)(*piVar7 + 0x354))(), cVar3 == '\0'))
    goto LAB_0064d4d5;
    if (((*(int *)(iVar5 + 0x50) == 0) ||
        ((*(int *)(iVar5 + 0x50) < *(int *)(iVar5 + 0x40) && (*(float *)(iVar5 + 0x3c) <= 0.0)))) &&
       (dStack_14._0_4_ != 0)) {
      cVar3 = FUN_005e6c60();
      if (cVar3 == '\0') {
        (**(code **)(*(int *)piVar1[0x16] + 0x228))(piVar1,piVar7,0,0,0,0,0,0,0,1);
        return;
      }
      if (*(int *)(iVar5 + 0x4c) == -1) {
        uVar4 = (**(code **)(*piVar7 + 0x248))(piVar1,*(undefined4 *)(iVar5 + 0x44),0xffffffff);
        *(undefined4 *)(iVar5 + 0x4c) = uVar4;
        return;
      }
      iVar6 = FUN_00675bb0(2,*(int *)(iVar5 + 0x4c));
      if (iVar6 == 0) {
        return;
      }
      if (*(char *)(iVar6 + 0x2c) != '\0') {
        return;
      }
      (**(code **)(*piVar7 + 0x248))
                (piVar1,*(undefined4 *)(iVar5 + 0x44),*(undefined4 *)(iVar5 + 0x4c));
      return;
    }
    if (*(float *)(iVar5 + 0x3c) <= 0.0) {
      (**(code **)(*in_ECX + 0x188))(piVar1,1);
      return;
    }
    fVar2 = _DAT_00b33e9c + _DAT_00b33e9c + *(float *)(iVar5 + 0x3c);
    *(float *)(iVar5 + 0x3c) = fVar2;
    if (_DAT_00b36b30 < fVar2) {
      *(float *)(iVar5 + 0x3c) = fVar2 + fVar2 * -1.0;
    }
  }
  piVar7 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b05940,0);
  iVar5 = FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  cVar3 = FUN_005e6ba0();
  if ((cVar3 != '\0') && (iVar5 != 0)) {
    if (piVar7 == DAT_00b333c4) {
      if ((((int *)in_ECX[0xb] == DAT_00b333c4) &&
          (cVar3 = FUN_0065d550(), piVar7 = DAT_00b333c4, cVar3 != '\0')) &&
         ((char)DAT_00b333c4[0x4b] == '\0')) {
        DAT_00b333c4[0x164] = 0;
        *(undefined1 *)(piVar7 + 0x165) = 1;
        return;
      }
      cVar3 = (**(code **)(*in_ECX + 0x1cc))();
      if (cVar3 == '\0') {
        if ((char)DAT_00b333c4[0x1ce] == '\0') {
          cVar3 = FUN_004dd260(piVar1,0,0,1);
          if (cVar3 == '\0') {
            return;
          }
          (**(code **)(*in_ECX + 0x188))(piVar1,1);
          return;
        }
      }
      else if ((char)DAT_00b333c4[0x1ce] == '\0') {
        return;
      }
      cVar3 = (**(code **)(*in_ECX + 0x228))(piVar1,DAT_00b333c4,0,0,0,0,0,0,0,1);
      if (cVar3 == '\0') {
        piVar7 = (int *)FUN_0067cf50(0xc,DAT_00b333c4);
        piVar1 = piVar7;
        do {
          if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) goto LAB_0064d45f;
          piVar1 = (int *)piVar1[1];
          iVar5 = FUN_0067b710();
        } while (iVar5 == 0);
        FUN_005eae70();
LAB_0064d45f:
        FUN_004526e0();
        FUN_00401f20(piVar7);
        return;
      }
    }
    else {
      if (piVar7 != (int *)0x0) {
        iVar6 = FUN_005e4420();
        dStack_14 = (double)iVar6;
        fVar8 = (float10)(**(code **)(*piVar7 + 0x250))();
        if (fVar8 < (float10)dStack_14 != (fVar8 == (float10)dStack_14)) {
          (**(code **)(*piVar7 + 0x250))();
          uVar4 = FUN_009828c0();
          FUN_005e4a40(piVar1,uVar4);
          (**(code **)(*piVar7 + 0x2b4))();
          FUN_005eff30(piVar1);
LAB_0064d4d5:
          (**(code **)(*in_ECX + 0x188))(piVar1,2);
          return;
        }
      }
      (**(code **)(*in_ECX + 0x188))(piVar1,2);
      (**(code **)(*in_ECX + 0x228))(piVar1,iVar5,0,0,0,0,0,0,0,1);
    }
  }
  return;
}



void FUN_0064d530(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 unaff_EBX;
  float10 fVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  (**(code **)(*in_ECX + 0x55c))(param_1);
  if (*(int *)(iVar3 + 0x28) == 0) {
    iVar3 = FUN_00566db0();
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
  }
  else {
    iVar3 = FUN_00452a60();
    fVar1 = (float)iVar3;
  }
  if ((in_ECX[0xb] == 0) || (fVar7 = (float10)FUN_004d7e90(in_ECX[0xb],0), fVar7 <= (float10)fVar1))
  {
    if ((in_ECX[0xb] == 0) && (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 == '\0')) {
      uVar4 = FUN_00566a40(param_1);
      FUN_00566b30(&stack0xfffffff0,param_1);
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0x238))(param_1,0x201);
        iVar3 = *in_ECX;
        uVar6 = FUN_004d6670(uStack_8);
        (**(code **)(iVar3 + 0x414))(param_1,&stack0xffffffe8,uVar4,uVar6);
        return;
      }
      iVar3 = *in_ECX;
      uVar6 = FUN_004d6670();
      (**(code **)(iVar3 + 0x3dc))(param_1,unaff_EBX,uStack_c,uStack_8,uVar4,uVar6);
      return;
    }
    if ((char)in_ECX[0x34] == '\0') {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    return;
  }
  (**(code **)(*param_1 + 0x318))(param_1,1,1,0,0);
  uVar4 = (**(code **)(*in_ECX + 0x184))(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
  iVar3 = FUN_009832e6(uVar4);
  iVar5 = FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (iVar3 == 0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  FUN_00626c90(iVar5);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064db20(int *param_1,char param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *in_ECX;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  piVar3 = param_1;
  piVar5 = (int *)(**(code **)(*in_ECX + 0x184))();
  if ((piVar5 != (int *)0x0) && ((*(byte *)((int)piVar5 + 0x1e) & 1) != 0)) {
    cVar4 = FUN_00663a60(param_1);
    if (cVar4 != '\0') {
      return;
    }
    iVar6 = FUN_00663a00();
    if (DAT_00b36a80 <= iVar6) {
      return;
    }
    FUN_005668e0(0);
  }
  if ((in_ECX[0xb] == 0) || ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0)) {
    (**(code **)(*in_ECX + 0x558))(param_1);
    if ((int *)in_ECX[0xb] != (int *)0x0) {
      piVar7 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      in_ECX[0x35] = *piVar7;
      in_ECX[0x36] = piVar7[1];
      in_ECX[0x37] = piVar7[2];
    }
  }
  if (in_ECX[0xb] == 0) {
    if (param_2 == '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  fVar11 = (float10)FUN_004d7e90(in_ECX[0xb],0);
  param_1 = (int *)(float)fVar11;
  iVar6 = FUN_004d6670();
  iVar8 = FUN_004d6670();
  if ((iVar6 != iVar8) && (in_ECX[0xd] != 0)) {
    uVar9 = FUN_0068a160();
    fVar11 = (float10)FUN_004d7e30(uVar9);
    param_1 = (int *)(float)fVar11;
  }
  fVar11 = (float10)FUN_005677b0(piVar3,2);
  iVar6 = in_ECX[0xb];
  if ((iVar6 == 0) ||
     (((((char)piVar5[8] == '\x01' && (piVar5[9] != 0)) && (iVar8 = FUN_00569740(), iVar8 < 2)) &&
      (cVar4 = FUN_00566dc0(piVar3,0,0xbf800000), cVar4 != '\0')))) {
    if (param_2 != '\0') {
      (**(code **)(*in_ECX + 0x188))(piVar3,1);
      cVar4 = FUN_005660a0();
      if (cVar4 != '\0') {
        if (in_ECX[0x30] == 0) {
          in_ECX[2] = 0;
        }
        else {
          in_ECX[0x30] = 0;
        }
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 0x10))(1);
        }
        (**(code **)(*piVar3 + 0x44))(0x30000);
        (**(code **)(*in_ECX + 0x18))(piVar3,0);
        return;
      }
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0x194))(piVar3);
      }
    }
    goto LAB_0064ded3;
  }
  (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
  fVar12 = (float10)FUN_00982c30();
  if (_DAT_00b36a88 < (float)fVar12) {
LAB_0064dd0b:
    iVar8 = *in_ECX;
    puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    uVar9 = FUN_004d6670();
    uVar9 = FUN_006ecc80(uVar9);
    cVar4 = (**(code **)(iVar8 + 0x3dc))(piVar3,*puVar10,puVar10[1],puVar10[2],uVar9);
    if (cVar4 == '\0') {
      return;
    }
    piVar5 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    in_ECX[0x35] = *piVar5;
    in_ECX[0x36] = piVar5[1];
    in_ECX[0x37] = piVar5[2];
LAB_0064dd86:
    if ((char)in_ECX[0x34] != '\0') goto LAB_0064ded3;
  }
  else {
    if ((float)param_1 <= (float)fVar11) goto LAB_0064dd86;
    if ((char)in_ECX[0x34] != '\0') goto LAB_0064dd0b;
  }
  iVar8 = FUN_0046b250(0x3a);
  fVar12 = (float10)FUN_00402bd0();
  _param_2 = (float)fVar12;
  fVar12 = (float10)FUN_006599b0();
  if ((float10)_param_2 < fVar12) {
    _param_2 = _param_2 + 24.0;
  }
  fVar12 = (float10)FUN_006599b0();
  iVar2 = *in_ECX;
  fVar1 = *(float *)(iVar8 + 0x24);
  piVar5 = (int *)in_ECX[0xb];
  fVar13 = (float10)FUN_005677b0(piVar3,1);
  uVar9 = FUN_004d6670((3600.0 / fVar1) * (float)((float10)_param_2 - fVar12),(float)fVar13);
  uVar9 = FUN_006ecc80(uVar9);
  uVar9 = (**(code **)(*piVar5 + 0x174))(uVar9);
  (**(code **)(iVar2 + 0x418))(piVar3,uVar9);
LAB_0064ded3:
  fVar12 = (float10)FUN_004d7e90(iVar6,0);
  if ((fVar12 < (float10)(float)fVar11) && ((char)in_ECX[0x34] == '\0')) {
    cVar4 = (**(code **)(*piVar3 + 0x334))(1);
    if ((cVar4 != '\0') &&
       ((iVar6 = (**(code **)(*piVar3 + 0x330))(), iVar6 != 0 &&
        (cVar4 = FUN_006163a0(), cVar4 != '\0')))) {
      return;
    }
    FUN_005e02b0();
  }
  return;
}



void FUN_0064df40(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *unaff_retaddr;
  undefined4 uVar9;
  code *pcVar10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pcVar10 = *(code **)(*in_ECX + 0x184);
  in_ECX[0xb] = 0;
  iVar2 = (*pcVar10)();
  if (iVar2 == 0) {
    return;
  }
  cVar1 = *(char *)(iVar2 + 0x20);
  if (('\0' < cVar1) &&
     (((cVar1 < '\x03' || (cVar1 == '\a')) && (cVar1 = FUN_00567ca0(), cVar1 != '\0')))) {
    FUN_00568bb0(param_1);
    goto LAB_0064e1f4;
  }
  if (*(int *)(iVar2 + 0x28) == 0) goto LAB_0064e1f4;
  iVar3 = FUN_00569e50();
  if (iVar3 == 0) {
    piVar8 = (int *)FUN_00569e60();
    cVar1 = (**(code **)(*piVar8 + 0x198))(1);
    if (cVar1 != '\0') {
      FUN_00566870(in_ECX[0xb],1);
                    /* WARNING: Could not recover jumptable at 0x0064dfee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*unaff_retaddr + 0x2f8))();
      return;
    }
    iVar2 = *in_ECX;
    uVar4 = FUN_00569e60();
    (**(code **)(iVar2 + 0xd0))(uVar4);
    piVar8 = (int *)in_ECX[0xb];
    if ((((piVar8 != (int *)0x0) && (((uint)piVar8[2] >> 5 & 1) != 0)) &&
        (cVar1 = (**(code **)(*piVar8 + 400))(), cVar1 == '\0')) && (in_ECX[0xb] != -0x44)) {
      iVar2 = *in_ECX;
      uVar4 = FUN_0041fb00();
      (**(code **)(iVar2 + 0xd0))(uVar4);
    }
    goto LAB_0064e1f4;
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
    if ((in_ECX[0x30] == 0) && ((*(uint *)(iVar2 + 0x1c) >> 2 & 1) != 0)) {
      uVar4 = FUN_006ecc80();
      puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      uStack_c = *puVar5;
      uStack_8 = puVar5[1];
      uStack_4 = puVar5[2];
      iVar2 = FUN_00569e50();
      iVar3 = FUN_00452a60();
      in_ECX[0xe] = iVar3;
      if (iVar2 == 1) {
        iVar2 = FUN_00569e70();
        in_ECX[0x19] = iVar2;
        in_ECX[0x1b] = 0;
      }
      else if (iVar2 == 2) {
        in_ECX[0x19] = 0;
        iVar2 = FUN_00569e80();
        in_ECX[0x1b] = iVar2;
      }
      puVar5 = (undefined4 *)FUN_00403c00();
      puVar6 = (undefined4 *)FUN_00403c00();
      uVar9 = *puVar5;
      pcVar10 = FUN_00646600;
      piVar8 = param_1;
      uVar7 = (**(code **)(*param_1 + 0x174))(uVar9,FUN_00646600,param_1);
      FUN_00446b90(uVar4,&uStack_c,*puVar6,uVar7,uVar9,pcVar10,piVar8);
      in_ECX[0x1b] = 0;
      in_ECX[0x19] = 0;
      (**(code **)(*in_ECX + 0x568))(param_1);
    }
    else {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
    }
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) goto LAB_0064e1f4;
  puVar5 = (undefined4 *)in_ECX[0xf];
  in_ECX[0x11] = (int)puVar5;
  piVar8 = (int *)*puVar5;
  if (puVar5[7] == 2) {
    cVar1 = (**(code **)(*piVar8 + 400))();
    piVar8 = *(int **)in_ECX[0x11];
    if (cVar1 != '\0') goto LAB_0064e1dd;
    uVar4 = FUN_004db6b0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
    iVar2 = FUN_009832e6(uVar4);
    if (iVar2 != 0) {
      iVar3 = *in_ECX;
      piVar8 = (int *)FUN_00675220(iVar2);
      pcVar10 = *(code **)(iVar3 + 0xd0);
      goto LAB_0064e1e5;
    }
  }
  else {
LAB_0064e1dd:
    pcVar10 = *(code **)(*in_ECX + 0xd0);
LAB_0064e1e5:
    (*pcVar10)(piVar8);
  }
  FUN_0065c620(in_ECX[0x11]);
LAB_0064e1f4:
  if ((int *)in_ECX[0xb] != (int *)0x0) {
    piVar8 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    in_ECX[0x35] = *piVar8;
    in_ECX[0x36] = piVar8[1];
    in_ECX[0x37] = piVar8[2];
    FUN_004d6f80(1);
  }
  return;
}



void FUN_0064e240(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(in_ECX + 0x3c);
  if (piVar4 != (int *)0x0) {
    iVar5 = 0;
    piVar3 = piVar4;
    do {
      if (*piVar3 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    bVar2 = true;
    while ((iVar5 != 0 && (bVar2))) {
      bVar2 = false;
      for (piVar3 = piVar4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        iVar1 = *piVar4;
        if (*(int *)(*piVar3 + 0x1c) < *(int *)(iVar1 + 0x1c)) {
          *piVar4 = *piVar3;
          *piVar3 = iVar1;
          bVar2 = true;
        }
      }
      iVar5 = iVar5 + -1;
      piVar4 = (int *)piVar4[1];
    }
  }
  return;
}



void FUN_0064e2b0(void)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(in_ECX + 0x3c);
  if (piVar4 != (int *)0x0) {
    iVar5 = 0;
    piVar3 = piVar4;
    do {
      if (*piVar3 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    bVar2 = true;
    while ((iVar5 != 0 && (bVar2))) {
      bVar2 = false;
      for (piVar3 = piVar4; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
        iVar1 = *piVar4;
        if (*(int *)(*piVar3 + 0x14) < *(int *)(iVar1 + 0x14)) {
          *piVar4 = *piVar3;
          *piVar3 = iVar1;
          bVar2 = true;
        }
      }
      iVar5 = iVar5 + -1;
      piVar4 = (int *)piVar4[1];
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0064e320(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar13;
  undefined2 extraout_var_01;
  int *in_ECX;
  undefined4 uVar14;
  float10 fVar15;
  float10 fVar16;
  undefined4 uVar17;
  float fVar18;
  int *piStack_54;
  float fStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int iStack_40;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar13 = param_1;
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  uVar4 = 0;
  if (iVar3 != 0) {
    piStack_54 = (int *)FUN_005e6780();
    if (piStack_54 == (int *)0x0) {
      if (((int *)in_ECX[0xb] == (int *)0x0) ||
         ((cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 == '\0' &&
          (cVar2 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar2 == '\0')))) {
        (**(code **)(*in_ECX + 0x558))(param_1);
        if (((int *)in_ECX[0xb] == (int *)0x0) ||
           ((cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 == '\0' &&
            (cVar2 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar2 == '\0')))) {
          uVar4 = (**(code **)(*in_ECX + 0x188))(param_1,1);
          if ((char)in_ECX[0x34] == '\0') {
            uVar4 = (**(code **)(*in_ECX + 0x194))(param_1);
            return uVar4 & 0xffffff00;
          }
          goto LAB_0064ec3c;
        }
      }
      piVar10 = (int *)in_ECX[0x11];
      if ((piVar10 != (int *)0x0) && ((int *)*piVar10 == param_1)) {
        piStack_54 = (int *)FUN_004d8d70(piVar10[1],0);
      }
    }
    bVar1 = false;
    if ((((int *)in_ECX[0xb] != (int *)0x0) &&
        (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) &&
       ((int *)in_ECX[0xb] != param_1)) {
      bVar1 = true;
      iVar5 = FUN_009832e6((int *)in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      iVar5 = *(int *)(*(int *)(iVar5 + 0x58) + 8);
      if ((in_ECX[0xb] != DAT_00b333c4) &&
         ((iVar5 == 0 ||
          ((*(char *)(iVar5 + 0x20) != '\x01' && (cVar2 = FUN_005660a0(), cVar2 == '\0')))))) {
        uVar4 = (**(code **)(*in_ECX + 0x17c))(0);
        return uVar4 & 0xffffff00;
      }
    }
    (**(code **)(*param_1 + 0x174))();
    if (bVar1) {
      (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      (**(code **)(*param_1 + 0x174))();
    }
    fStack_4c = 0.0;
    if (bVar1) {
      piVar10 = (int *)in_ECX[0xb];
      fStack_4c = (float)FUN_00452a60();
      if ((int)fStack_4c < 1) {
        fStack_4c = 2.8026e-43;
      }
      if (in_ECX[0xb] == DAT_00b333c4) {
        fVar18 = (float)(int)fStack_4c;
      }
      else {
        FUN_006ecc80();
        cVar2 = FUN_004c97f0();
        fVar18 = _DAT_00b36aa0;
        if (cVar2 == '\0') {
          fVar18 = (float)(int)fStack_4c * _DAT_00b36a98;
        }
      }
      fStack_4c = fVar18;
      uVar6 = (**(code **)(*(int *)param_1[0x16] + 0x40c))(0,&PTR_PTR_00b02fe4,&PTR_PTR_00b02fcc,0);
      iVar5 = FUN_009832e6(uVar6);
      if (iVar5 != 0) {
        FUN_0068a160();
        (**(code **)(*param_1 + 0x174))();
        pfVar7 = (float *)FUN_0068a160();
        pfVar8 = (float *)(**(code **)(*piVar10 + 0x174))();
        fStack_c = *pfVar8 - *pfVar7;
        fStack_8 = pfVar8[1] - pfVar7[1];
        fStack_4 = pfVar8[2] - pfVar7[2];
      }
    }
    if ((*(int *)(iVar3 + 0x24) == 0) || (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 == '\0')
       ) {
      FUN_005677b0(param_1,2);
      iVar3 = FUN_009828c0();
      if (((int *)in_ECX[0xb] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) {
        fVar15 = (float10)FUN_004d7e90(in_ECX[0xb],0);
        fVar16 = (float10)iVar3;
        uVar4 = CONCAT22(extraout_var_01,
                         (ushort)(fVar16 < fVar15) << 8 | (ushort)(NAN(fVar16) || NAN(fVar15)) << 10
                         | (ushort)(fVar16 == fVar15) << 0xe);
        if (fVar16 >= fVar15) goto LAB_0064ec3c;
      }
      fVar18 = (float)iVar3;
      iVar3 = *in_ECX;
      uVar17 = 0x45610000;
      uVar6 = FUN_00566940(param_1);
      uVar14 = FUN_00566a40(param_1);
      uVar9 = FUN_00566b30(&fStack_c,param_1);
      uVar4 = (**(code **)(iVar3 + 0x418))(param_1,uVar9,uVar14,uVar6,uVar17,fVar18);
    }
    else {
      if (bVar1) {
        fVar15 = (float10)FUN_00404c90();
        fVar16 = (float10)fStack_4c;
        uVar4 = CONCAT22(extraout_var,
                         (ushort)(fVar16 < fVar15) << 8 | (ushort)(NAN(fVar16) || NAN(fVar15)) << 10
                         | (ushort)(fVar16 == fVar15) << 0xe);
        if (fVar16 >= fVar15) {
          fVar15 = (float10)FUN_00404c90();
          fVar16 = (float10)FUN_00404c90();
          fVar15 = (float10)(double)fVar15;
          uVar4 = CONCAT22(extraout_var_00,
                           (ushort)(fVar16 < fVar15) << 8 |
                           (ushort)(NAN(fVar16) || NAN(fVar15)) << 10 |
                           (ushort)(fVar16 == fVar15) << 0xe);
          if (fVar16 >= fVar15) {
            (**(code **)(*in_ECX + 0x188))(param_1,1);
            piVar10 = (int *)in_ECX[0xb];
            iVar3 = (**(code **)(*(int *)piVar10[0x16] + 0x184))();
            uVar4 = 0;
            if (iVar3 != 0) {
              (**(code **)(*(int *)piVar10[0x16] + 0x188))(param_1,1);
              (**(code **)(*(int *)piVar10[0x16] + 0x184))();
              uVar4 = FUN_005660a0();
              if ((char)uVar4 != '\0') {
                piVar13 = (int *)(**(code **)(*(int *)piVar10[0x16] + 0x184))();
                if (piVar13 != (int *)0x0) {
                  (**(code **)(*piVar13 + 0x10))(1);
                }
                *(undefined4 *)(piVar10[0x16] + 8) = 0;
                (**(code **)(*piVar10 + 0x44))(0x30000);
                cVar2 = FUN_005e05b0();
                if (cVar2 != '\0') {
                  FUN_005e02b0();
                }
                (**(code **)(*in_ECX + 0xbc))(1);
                uVar4 = (**(code **)(*in_ECX + 0x18))(param_1,0);
                return uVar4 & 0xffffff00;
              }
            }
          }
        }
      }
      else {
        iVar5 = *(int *)(iVar3 + 0x24);
        uVar6 = *(undefined4 *)(iVar3 + 0x28);
        if (piStack_54 != (int *)0x0) {
          param_1 = (int *)0x0;
          if ((int *)*piStack_54 != (int *)0x0) {
            param_1 = *(int **)*piStack_54;
          }
          uStack_48 = 0;
          if ((param_1 != (int *)0x0) && (iVar3 = FUN_0041fb00(), iVar3 != 0)) {
            iVar3 = FUN_0041fb00();
            uStack_48 = *(undefined4 *)(iVar3 + 0xc);
          }
          iStack_44 = FUN_005697e0();
          if (((iStack_44 == 0) && (iStack_44 = in_ECX[0xc], iStack_44 == 0)) ||
             (iVar3 = FUN_004d6d40(), iVar3 == 0)) {
            if ((int *)*piStack_54 != (int *)0x0) {
              param_1 = *(int **)*piStack_54;
            }
            puVar12 = (undefined4 *)0x0;
            if (((iVar5 != 0) &&
                ((piVar10 = (int *)FUN_005697e0(), piVar10 != (int *)0x0 ||
                 (piVar10 = (int *)in_ECX[0xc], piVar10 != (int *)0x0)))) &&
               ((iVar3 = (**(code **)(*piVar10 + 0x170))(), iVar3 == DAT_00b35eac ||
                (iVar3 = (**(code **)(*piVar10 + 0x170))(), iVar3 == DAT_00b35eb0)))) {
              puVar12 = (undefined4 *)(**(code **)(*piVar10 + 0x174))();
              uVar14 = *puVar12;
              uVar9 = puVar12[1];
              uVar17 = puVar12[2];
              puVar12 = (undefined4 *)FUN_00401f00(0xc);
              if (puVar12 == (undefined4 *)0x0) {
                puVar12 = (undefined4 *)0x0;
              }
              else {
                *puVar12 = uVar14;
                puVar12[1] = uVar9;
                puVar12[2] = uVar17;
              }
            }
            uVar14 = 1;
            iVar3 = FUN_00569e60();
            if (iVar3 == 0) {
              uVar14 = FUN_00452a60();
            }
            (**(code **)(*piVar13 + 0x2c8))(piStack_54[2],param_1,uVar14,puVar12,0);
          }
          else {
            iVar3 = piStack_54[2];
            uVar14 = uStack_48;
            uVar9 = FUN_00452a60(uStack_48);
            FUN_005fc6d0(iVar3,param_1,iStack_44,uVar9,uVar14);
          }
          FUN_00484470();
          FUN_00401f20(piStack_54);
          iVar3 = FUN_00569e80();
          if ((iVar3 == 0xd) ||
             ((iVar3 = FUN_00569e80(), 0x14 < iVar3 && (iVar3 = FUN_00569e80(), iVar3 < 0x1a)))) {
            while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
              in_ECX[0x11] = in_ECX[0xf];
              FUN_0065c620(in_ECX[0xf]);
              (**(code **)(*in_ECX + 0xd0))(*(undefined4 *)in_ECX[0x11]);
              piVar10 = (int *)FUN_004d8d70(*(undefined4 *)(in_ECX[0x11] + 4),0);
              if (in_ECX[0x11] != 0) {
                FUN_00401f20(in_ECX[0x11]);
              }
              in_ECX[0x11] = 0;
              if ((iStack_44 == 0) || (iVar3 = FUN_004d6d40(), iVar3 == 0)) {
                if ((int *)*piVar10 != (int *)0x0) {
                  param_1 = *(int **)*piVar10;
                }
                puVar12 = (undefined4 *)0x0;
                if (((iVar5 != 0) &&
                    ((piVar11 = (int *)FUN_005697e0(), piVar11 != (int *)0x0 ||
                     (piVar11 = (int *)in_ECX[0xc], piVar11 != (int *)0x0)))) &&
                   ((iVar3 = (**(code **)(*piVar11 + 0x170))(), iVar3 == DAT_00b35eac ||
                    (iVar3 = (**(code **)(*piVar11 + 0x170))(), iVar3 == DAT_00b35eb0)))) {
                  puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
                  uVar14 = *puVar12;
                  uVar9 = puVar12[1];
                  uVar17 = puVar12[2];
                  puVar12 = (undefined4 *)FUN_00401f00(0xc);
                  if (puVar12 == (undefined4 *)0x0) {
                    puVar12 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar12 = uVar14;
                    puVar12[1] = uVar9;
                    puVar12[2] = uVar17;
                  }
                }
                uVar14 = 1;
                iVar3 = FUN_00569e60();
                if (iVar3 == 0) {
                  uVar14 = FUN_00452a60();
                }
                (**(code **)(*piVar13 + 0x2c8))(piVar10[2],param_1,uVar14,puVar12,0);
              }
              else {
                iVar3 = piVar10[2];
                uVar14 = uStack_48;
                uVar9 = FUN_00452a60(uStack_48);
                FUN_005fc6d0(iVar3,param_1,iStack_44,uVar9,uVar14);
              }
              FUN_00484470();
              FUN_00401f20(piVar10);
            }
            iStack_40._1_3_ = (uint3)((uint)uVar6 >> 8);
            iStack_40 = CONCAT31(iStack_40._1_3_,1);
            param_1 = (int *)CONCAT31(param_1._1_3_,1);
            if (in_ECX[2] != 0) {
              uVar4 = *(uint *)(in_ECX[2] + 0x1c);
              if ((uVar4 >> 0x14 & 1) != 0) {
                iStack_40 = (uint)iStack_40._1_3_ << 8;
              }
              if ((uVar4 >> 0x15 & 1) != 0) {
                param_1 = (int *)((uint)param_1._1_3_ << 8);
              }
            }
            cVar2 = FUN_005e32d0();
            if (cVar2 == '\0') {
              uVar6 = (**(code **)(*piVar13 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
              iVar3 = FUN_009832e6(uVar6);
              if (iVar3 != 0) {
                FUN_0051e240(piVar13,iStack_40,param_1,1);
              }
            }
            else {
              uVar6 = (**(code **)(*piVar13 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4);
              iVar3 = FUN_009832e6(uVar6);
              if (iVar3 != 0) {
                FUN_005227a0(piVar13,iStack_40,param_1,0,1);
              }
            }
          }
          (**(code **)(*in_ECX + 0xbc))(1);
        }
        uVar4 = (**(code **)(*in_ECX + 0x188))(piVar13,1);
      }
      if ((char)in_ECX[0x34] == '\0') {
        uVar4 = (**(code **)(*in_ECX + 0x194))(piVar13);
        return uVar4 & 0xffffff00;
      }
    }
  }
LAB_0064ec3c:
  return uVar4 & 0xffffff00;
}



uint FUN_0064ec50(int *param_1,char param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  undefined4 uVar7;
  
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  uVar3 = 0;
  if ((in_ECX[0xb] == 0) || (uVar3 = *(uint *)(in_ECX[0xb] + 8) >> 5, (uVar3 & 1) != 0)) {
    if (param_3 != '\0') {
      uVar3 = (**(code **)(*in_ECX + 0x188))(param_1,1);
      return uVar3 & 0xffffff00;
    }
  }
  else {
    iVar4 = (**(code **)(*in_ECX + 0x184))();
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x1e) & 1) != 0)) {
      uVar3 = FUN_00663a60(param_1);
      if (((char)uVar3 != '\0') || (uVar3 = FUN_00663a00(), DAT_00b36a80 <= (int)uVar3))
      goto LAB_0064ed70;
      FUN_005668e0(0);
    }
    cVar2 = (**(code **)(*param_1 + 0x334))(1);
    if ((cVar2 == '\0') &&
       ((in_ECX[0xb] == 0 ||
        (((*(int *)(in_ECX[2] + 0x24) != 0 && (iVar4 = FUN_00569740(), iVar4 < 2)) &&
         (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 != '\0')))))) {
      if (param_2 != '\0') {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
      }
      cVar2 = FUN_005660a0();
      if (cVar2 != '\0') {
        if ((int *)in_ECX[2] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[2] + 0x10))(1);
        }
        in_ECX[2] = 0;
        (**(code **)(*param_1 + 0x44))(0x30000);
        uVar3 = (**(code **)(*in_ECX + 0x18))(param_1,0);
        goto LAB_0064ed70;
      }
    }
    FUN_005677b0(param_1,2);
    iVar4 = FUN_009828c0();
    uVar3 = 0;
    if (in_ECX[0xb] != 0) {
      fVar5 = (float10)FUN_004d7e90(in_ECX[0xb],0);
      fVar6 = (float10)iVar4;
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar6 < fVar5) << 8 | (ushort)(NAN(fVar6) || NAN(fVar5)) << 10 |
                       (ushort)(fVar6 == fVar5) << 0xe);
      if (fVar6 < fVar5) {
        piVar1 = (int *)in_ECX[0xb];
        iVar4 = *in_ECX;
        uVar7 = 0xbf800000;
        fVar5 = (float10)FUN_005677b0(param_1,1);
        uVar7 = FUN_004d6670((float)fVar5,uVar7);
        uVar7 = FUN_006ecc80(uVar7);
        uVar7 = (**(code **)(*piVar1 + 0x174))(uVar7);
        uVar3 = (**(code **)(iVar4 + 0x418))(param_1,uVar7);
        return uVar3 & 0xffffff00;
      }
    }
  }
LAB_0064ed70:
  return uVar3 & 0xffffff00;
}



uint FUN_0064ee20(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_005e4400();
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar3 = 0;
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      uVar3 = *(undefined4 *)*piVar1;
    }
    uVar2 = FUN_005e44c0(piVar1[2],uVar3,1);
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
  }
  return uVar2 & 0xffffff00;
}



undefined4 FUN_0064ee60(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *in_ECX;
  float10 fVar8;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if ((in_ECX[0xb] == 0) || ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0)) {
    in_ECX[1] = in_ECX[1] + 1;
    return 0;
  }
  if (*(char *)(iVar3 + 0x20) == '\t') {
    uVar4 = FUN_00566b30(&fStack_c,param_1);
    FUN_004d7e30(uVar4);
    iVar3 = FUN_009828c0();
    iVar5 = FUN_00566db0();
    fVar1 = (float)iVar5;
    if (iVar5 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 + 300.0 < (float)iVar3) {
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
    }
  }
  iVar3 = FUN_004d7630();
  if (iVar3 == 0) {
    cVar2 = FUN_005687d0(param_1);
    if (cVar2 == '\0') goto LAB_0064eff1;
  }
  else {
    pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
    pfVar7 = (float *)FUN_004d76f0();
    fStack_c = *pfVar7 - *pfVar6;
    fStack_8 = pfVar7[1] - pfVar6[1];
    fStack_4 = pfVar7[2] - pfVar6[2];
    fVar8 = (float10)FUN_00982c30();
    if ((float)fVar8 < 128.0 == ((float)fVar8 == 128.0)) {
LAB_0064eff1:
      iVar3 = (**(code **)(*in_ECX + 0x36c))();
      if (iVar3 != 0) {
        (**(code **)(*in_ECX + 0x1b0))(param_1);
      }
      iVar3 = FUN_004d7630();
      if (iVar3 == 0) {
        pfVar6 = (float *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      }
      else {
        pfVar6 = (float *)FUN_004d76f0();
      }
      fStack_c = *pfVar6;
      iVar3 = *in_ECX;
      fStack_8 = pfVar6[1];
      fStack_4 = pfVar6[2];
      uVar4 = FUN_004d6670(0x45610000,0xbf800000);
      uVar4 = FUN_006ecc80(uVar4);
      (**(code **)(iVar3 + 0x418))(param_1,&fStack_c,uVar4);
      return 0;
    }
  }
  if (in_ECX[0xb] == DAT_00b333c4) {
    cVar2 = FUN_0065d550();
    iVar3 = DAT_00b333c4;
    if ((cVar2 != '\0') && (*(char *)(DAT_00b333c4 + 300) == '\0')) {
      *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
      *(undefined1 *)(iVar3 + 0x594) = 1;
      (**(code **)(*in_ECX + 0x188))(param_1,0xfffffffe);
      return 0;
    }
  }
  cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0x394))(1);
    FUN_004dd260(param_1,0,0,1);
  }
  else {
    if (in_ECX[0xb] == DAT_00b333c4) {
      cVar2 = FUN_0065d550();
      iVar3 = DAT_00b333c4;
      if ((cVar2 != '\0') && (*(char *)(DAT_00b333c4 + 300) == '\0')) {
        *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
        *(undefined1 *)(iVar3 + 0x594) = 1;
        (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
        return 0;
      }
    }
    (**(code **)(*in_ECX + 0x394))(1);
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return 1;
}



void FUN_0064f140(int *param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  float10 fVar6;
  int local_4;
  
  local_4 = FUN_009828c0();
  piVar3 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((piVar3 == (int *)0x0) || (((uint)piVar3[2] >> 0xb & 1) != 0)) {
    (**(code **)(*param_1 + 0x340))(piVar3);
    return;
  }
  iVar4 = FUN_006ecc80();
  if (iVar4 == 0) {
LAB_0064f1b8:
    fVar6 = (float10)FUN_004d7e90(piVar3,0);
    if ((float10)300.0 <= fVar6) goto LAB_0064f290;
  }
  else {
    iVar4 = FUN_006ecc80();
    iVar5 = FUN_006ecc80();
    if (iVar5 != iVar4) goto LAB_0064f1b8;
  }
  bVar1 = false;
  if (((int *)piVar3[0x16] != (int *)0x0) &&
     (iVar4 = (**(code **)(*(int *)piVar3[0x16] + 8))(), iVar4 == 1)) {
    if (local_4 != 0) {
      do {
        cVar2 = (**(code **)(*param_1 + 0x198))(0);
        if (cVar2 != '\0') break;
        (**(code **)(*param_1 + 0x344))();
        piVar3 = (int *)FUN_009832e6(in_ECX[0xb],0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
        if (((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 0x198))(0), cVar2 == '\0'))
           && (iVar4 = (**(code **)(*(int *)piVar3[0x16] + 8))(), iVar4 == 1)) {
          (**(code **)(*piVar3 + 0x344))();
          bVar1 = true;
        }
        local_4 = local_4 + -1;
      } while (local_4 != 0);
      if ((bVar1) && (piVar3 != (int *)0x0)) {
        (**(code **)(*(int *)piVar3[0x16] + 0x20))();
      }
    }
    return;
  }
LAB_0064f290:
  (**(code **)(*in_ECX + 0x198))(param_1,1,0xffffffff,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064f400(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int *in_ECX;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  code *pcVar14;
  int iVar15;
  undefined4 uVar16;
  
  piVar3 = param_1;
  iVar9 = in_ECX[2];
  uVar5 = FUN_00569e60();
  bVar2 = false;
  FUN_005e3320();
  cVar4 = FUN_0051bef0();
  if (cVar4 == '\0') {
    param_1 = *(int **)(iVar9 + 0x3c);
    if (param_1 != (int *)0x0) {
      do {
        iVar9 = *param_1;
        if (iVar9 == 0) break;
        piVar1 = *(int **)(iVar9 + 8);
        iVar10 = 0;
        if ((piVar1 != (int *)0x0) && (cVar4 = (**(code **)(*piVar1 + 400))(), cVar4 != '\0')) {
          iVar10 = FUN_009832e6(piVar1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
        }
        if (*(char *)(iVar9 + 0x10) == '\0') {
          fVar13 = (float)_DAT_00b36a50;
          pcVar14 = FUN_0062e890;
          iVar15 = iVar9;
          uVar6 = (**(code **)(*piVar3 + 0x174))(fVar13,FUN_0062e890,iVar9);
          fVar12 = (float)_DAT_00b36a50;
          uVar7 = (**(code **)(*piVar3 + 0x174))(fVar12,uVar6);
          uVar8 = FUN_006ecc80(uVar7);
          FUN_00446b90(uVar8,uVar7,fVar12,uVar6,fVar13,pcVar14,iVar15);
        }
        if (!bVar2) {
          if (*(int *)(iVar9 + 4) < 3) {
            uVar16 = 100;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 0;
            fVar11 = (float10)FUN_004d7e90(uVar5,0);
            iVar10 = (**(code **)(*piVar3 + 0x284))(0x21,(float)fVar11,uVar6,uVar7,uVar8,uVar16);
            uVar6 = 0;
          }
          else {
            if (iVar10 == 0) goto LAB_0064f577;
            uVar16 = 100;
            uVar8 = 0;
            uVar7 = 0;
            uVar6 = 1;
            fVar11 = (float10)FUN_004d7e90(uVar5,0);
            uVar6 = (**(code **)(*piVar3 + 0x284))(0x21,(float)fVar11,uVar6,uVar7,uVar8,uVar16);
            uVar6 = (**(code **)(*piVar3 + 0x224))(iVar10,uVar6);
          }
          uVar6 = (**(code **)(*piVar3 + 0x224))(uVar5,uVar6,iVar10);
          iVar9 = FUN_00546190(uVar6);
          if (0 < iVar9) {
            bVar2 = true;
          }
        }
LAB_0064f577:
        param_1 = (int *)param_1[1];
      } while (param_1 != (int *)0x0);
      if (bVar2) {
        (**(code **)(*in_ECX + 0x228))(piVar3,uVar5,0,0,0,0,0,0,0,1);
        return;
      }
    }
    uVar5 = 3;
  }
  else {
    uVar5 = 1;
  }
  (**(code **)(*in_ECX + 0x188))(piVar3,uVar5);
  return;
}



undefined4 FUN_0064f5e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((param_1 != 0) && (*(int *)(in_ECX + 0xe4) != 0)) {
    iVar1 = FUN_0065d750(1);
    if (param_1 == iVar1) {
      DAT_00b3ba98 = FUN_006f94a0(*(undefined4 *)(param_1 + 4),"ArrowBone");
      return 1;
    }
    uVar2 = FUN_006f94a0(*(undefined4 *)(param_1 + 4),"ArrowBone");
    *(undefined4 *)(in_ECX + 0x110) = uVar2;
    return 1;
  }
  *(undefined4 *)(in_ECX + 0x110) = 0;
  return 1;
}



void FUN_0064f650(void)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x184))();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x28) != 0)) {
    iVar1 = FUN_00569e60();
    if (iVar1 != 0) {
      iVar1 = FUN_00569e60();
      if ((((*(uint *)(iVar1 + 8) >> 5 & 1) == 0) && (in_ECX[0xb] != 0)) && (iVar1 != in_ECX[0xb]))
      {
        in_ECX[0xb] = iVar1;
      }
    }
  }
  return;
}



void FUN_0064f6a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int unaff_EBX;
  
  iVar1 = (**(code **)(*in_ECX + 0x184))();
  (**(code **)(*in_ECX + 0x570))(0);
  if (in_ECX[0x30] == 0) {
    in_ECX[1] = in_ECX[1] + param_1;
  }
  else {
    in_ECX[0x33] = in_ECX[0x33] + param_1;
  }
  if (in_ECX[1] < 0) {
    in_ECX[1] = 0;
  }
  if (iVar1 != 0) {
    iVar2 = FUN_00673980(*(undefined4 *)(iVar1 + 0x18));
    iVar3 = (**(code **)(*in_ECX + 0x180))();
    if (iVar2 <= iVar3) {
      (**(code **)(*in_ECX + 0x17c))(iVar2 + -1);
      iVar2 = *(int *)(iVar1 + 0x18);
      iVar3 = (**(code **)(*in_ECX + 0x180))();
      if (*(int *)((&PTR_DAT_00b152b0)[iVar2] + iVar3 * 4) == 0x2c) {
        FUN_004fbf90(iVar1,unaff_EBX + 0x44,0x400);
      }
    }
  }
  return;
}



void FUN_0064f760(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0x30] == 0) {
    in_ECX[1] = param_1;
  }
  else {
    in_ECX[0x33] = param_1;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_00673980(*(undefined4 *)(iVar1 + 0x18));
    iVar2 = (**(code **)(*in_ECX + 0x180))();
    if (iVar1 <= iVar2) {
      (**(code **)(*in_ECX + 0x17c))(iVar1 + -1);
    }
  }
  return;
}



void FUN_0064f7d0(void)

{
  uint uVar1;
  int iVar2;
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
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar2 = FUN_00401f00(0x1c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0068b2c0();
    }
    *(int *)(in_ECX + 0x34) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_0064f840(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  
  uVar1 = (**(code **)(*in_ECX + 0x184))();
  if (*(int *)(uVar1 + 0x28) == 0) {
    return uVar1 & 0xffffff00;
  }
  iVar2 = FUN_00569e50();
  iVar3 = FUN_00569e50();
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_00569e60();
    iVar2 = FUN_00569e60();
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
    piVar9 = in_ECX + 0x38;
    uVar7 = 1;
    uVar6 = 0;
    uVar5 = (**(code **)(*piVar4 + 0x170))(0,1,uVar8,piVar9);
    uVar1 = FUN_005e4a00(uVar5,uVar6,uVar7,uVar8,piVar9);
    return uVar1;
  }
  piVar4 = in_ECX + 0x38;
  uVar8 = 0;
  if (iVar2 == 1) {
    uVar6 = 0;
    uVar5 = FUN_00569e70(0,param_2);
    uVar1 = FUN_005e4a00(uVar5,uVar6,param_2,uVar8,piVar4);
    return uVar1;
  }
  uVar5 = FUN_00569e80(param_2,0,piVar4);
  uVar1 = FUN_005e4a00(0,uVar5,param_2,uVar8,piVar4);
  return uVar1;
}



void FUN_0064f900(int *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *in_ECX;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  if (iVar3 == 0) {
    return;
  }
  uVar7 = 1;
  if ((*(int *)(iVar3 + 0x28) != 0) && (iVar4 = FUN_00452a60(), iVar4 != 0)) {
    uVar7 = FUN_00452a60();
  }
  if (((*(char *)(iVar3 + 0x20) == '\0') && (*(int *)(iVar3 + 0x28) != 0)) &&
     ((iVar4 = FUN_00569e80(), iVar4 == 0x15 || (iVar4 = FUN_00569e80(), iVar4 == 0x16)))) {
    (**(code **)(*in_ECX + 0x51c))(param_1,1);
    if (in_ECX[1] < 2) {
      return;
    }
    if ((in_ECX[0x10] != 0) || (in_ECX[0xf] != 0)) {
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      iVar3 = in_ECX[0xf];
      in_ECX[0x11] = iVar3;
      FUN_0065c620(iVar3);
      in_ECX[0xb] = *(int *)in_ECX[0x11];
      return;
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    cVar2 = FUN_005e32d0();
    if (cVar2 == '\0') {
      uVar7 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
      iVar3 = FUN_009832e6(uVar7);
      if (iVar3 == 0) {
        return;
      }
      FUN_0051e240(param_1,1,1,1);
      return;
    }
    uVar7 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
    iVar3 = FUN_009832e6(uVar7);
    if (iVar3 == 0) {
      return;
    }
    FUN_005227a0(param_1,1,1,0,1);
    return;
  }
  cVar2 = (**(code **)(*in_ECX + 0x554))(param_1,uVar7);
  if (cVar2 == '\0') {
    if (((in_ECX[0xb] == 0) || (uVar1 = *(uint *)(in_ECX[0xb] + 8), (uVar1 >> 5 & 1) != 0)) ||
       ((uVar1 >> 0xb & 1) != 0)) {
      (**(code **)(*in_ECX + 0x558))(param_1);
    }
    if ((int *)in_ECX[0xb] == (int *)0x0) {
LAB_0064fbcf:
      pcVar5 = *(code **)(*in_ECX + 0x188);
      goto LAB_0064fbd9;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
    iVar4 = in_ECX[0x11];
    if (cVar2 == '\0') {
      if (iVar4 == 0) {
        if ((*(int *)(iVar3 + 0x28) == 0) || (iVar4 = FUN_00569e60(), iVar4 != in_ECX[0xb]))
        goto LAB_0064fbcf;
        iVar6 = *in_ECX;
        uVar8 = 1;
      }
      else {
        iVar6 = *in_ECX;
        if (*(int *)(iVar4 + 0x1c) == 3) {
          (**(code **)(iVar6 + 0x57c))(param_1);
          goto LAB_0064fb4c;
        }
        uVar8 = 0;
      }
      (**(code **)(iVar6 + 0x51c))(param_1,uVar8);
    }
    else if (iVar4 != 0) {
      if (*(int *)(iVar4 + 0x1c) == 4) {
        (**(code **)(*in_ECX + 0x580))();
      }
      else {
        (**(code **)(*in_ECX + 0x578))(param_1);
      }
    }
LAB_0064fb4c:
    iVar4 = FUN_00659a00();
    if (iVar4 != 1) {
      return;
    }
    iVar4 = FUN_0065ad00();
    if (iVar4 != 1) {
      return;
    }
    cVar2 = (**(code **)(*in_ECX + 0x554))(param_1,uVar7);
    if (cVar2 == '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x194))(param_1);
    iVar4 = in_ECX[0x30];
  }
  else {
    (**(code **)(*in_ECX + 0x194))(param_1);
    iVar4 = in_ECX[0x30];
  }
  if (((iVar4 == 0) && (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 == '\0')) &&
     (*(char *)(iVar3 + 0x20) != '\x02')) {
    (**(code **)(*in_ECX + 0x17c))(0);
    return;
  }
  pcVar5 = *(code **)(*in_ECX + 0x188);
  if (*(int *)(iVar3 + 0x18) == 0x1a) {
    (*pcVar5)(param_1,2);
    return;
  }
LAB_0064fbd9:
  (*pcVar5)(param_1,1);
  return;
}



void FUN_0064fbf0(int *param_1)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int *piVar9;
  float10 fVar10;
  double *pdVar11;
  double dStack_c;
  
  piVar9 = param_1;
  (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (((in_ECX[0xb] == 0) || (uVar2 = *(uint *)(in_ECX[0xb] + 8), (uVar2 >> 5 & 1) != 0)) ||
     ((uVar2 >> 0xb & 1) != 0)) {
    (**(code **)(*in_ECX + 0x188))(param_1,1);
  }
  else {
    piVar3 = (int *)in_ECX[0x11];
    if (piVar3 == (int *)0x0) {
      return;
    }
    iVar5 = (**(code **)(*(int *)*piVar3 + 0x170))();
    if (piVar3[1] == iVar5) {
      in_ECX[0xb] = *piVar3;
      return;
    }
    iVar5 = FUN_004d7630();
    if (iVar5 == 0) {
      cVar4 = FUN_005687d0(param_1);
      if (cVar4 != '\0') goto LAB_0064fcbf;
    }
    else {
      uVar6 = (**(code **)(*param_1 + 0x174))();
      pdVar11 = &dStack_c;
      FUN_004d76f0(pdVar11,uVar6);
      FUN_004121a0(pdVar11,uVar6);
      fVar10 = (float10)FUN_00404c90();
      if (fVar10 < (float10)128.0 != (fVar10 == (float10)128.0)) goto LAB_0064fcbf;
    }
    cVar4 = FUN_0064ada0();
    if (cVar4 != '\0') {
LAB_0064fcbf:
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0x194))(param_1);
      }
      cVar4 = FUN_0064ada0();
      if (cVar4 == '\0') {
        piVar9 = (int *)0x0;
        cVar4 = (**(code **)(**(int **)in_ECX[0x11] + 400))();
        if (cVar4 == '\0') {
          uVar6 = FUN_004db6b0(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4);
          iVar5 = FUN_009832e6(uVar6);
          if (iVar5 != 0) {
            piVar9 = (int *)FUN_00675220(iVar5);
          }
          FUN_004dd260(param_1,0,*(undefined4 *)(in_ECX[0x11] + 4),1);
        }
        else {
          piVar9 = (int *)in_ECX[0xb];
          (**(code **)(*piVar9 + 0x100))(*(undefined4 *)(in_ECX[0x11] + 4),0,1,0,0,param_1,0,0,1,0);
        }
        if (piVar9 != (int *)0x0) {
          iVar5 = FUN_00470520(*(undefined4 *)(in_ECX[0x11] + 4));
          FUN_005e4a40(param_1,*(int *)(in_ECX[0x11] + 0x10) * iVar5);
        }
        FUN_004fbf90(piVar9,*(undefined4 *)(in_ECX[0x11] + 0x18),0x4000);
      }
      if (in_ECX[0x11] != 0) {
        FUN_00401f20(in_ECX[0x11]);
      }
      in_ECX[0xb] = 0;
      in_ECX[0x11] = 0;
      *(undefined1 *)(in_ECX + 0x34) = 0;
      return;
    }
    if ((char)in_ECX[0x34] != '\0') {
      iVar7 = FUN_004d7630();
      iVar5 = *in_ECX;
      if (iVar7 == 0) {
        puVar8 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      }
      else {
        puVar8 = (undefined4 *)FUN_004d76f0();
      }
      uVar6 = FUN_004d6670();
      uVar6 = FUN_006ecc80(uVar6);
      cVar4 = (**(code **)(iVar5 + 0x3dc))(param_1,*puVar8,puVar8[1],puVar8[2],uVar6);
      if (cVar4 == '\0') {
        return;
      }
    }
    if ((char)in_ECX[0x34] == '\0') {
      iVar5 = FUN_0046b250(0x3a);
      fVar10 = (float10)FUN_00402bd0();
      param_1 = (int *)(float)fVar10;
      dStack_c = (double)(float)param_1;
      fVar10 = (float10)FUN_006599b0();
      if ((float10)dStack_c < fVar10) {
        param_1 = (int *)((float)param_1 + 24.0);
      }
      dStack_c = (double)(float)param_1;
      fVar10 = (float10)FUN_006599b0();
      dStack_c = (double)CONCAT44(dStack_c._4_4_,(float)((float10)dStack_c - fVar10));
      fVar1 = *(float *)(iVar5 + 0x24);
      iVar5 = *in_ECX;
      fVar10 = (float10)FUN_005677b0(piVar9,2);
      uVar6 = FUN_004d6670((3600.0 / fVar1) * dStack_c._0_4_,(float)fVar10);
      uVar6 = FUN_006ecc80(uVar6);
      uVar6 = FUN_004d76f0(uVar6);
      (**(code **)(iVar5 + 0x418))(piVar9,uVar6);
      return;
    }
  }
  return;
}



void FUN_0064fff0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x17c);
  if (iVar1 != 0) {
    if (iVar1 == param_1) {
      return;
    }
    FUN_00475b60();
    FUN_00401f20(iVar1);
  }
  *(int *)(in_ECX + 0x17c) = param_1;
  return;
}


