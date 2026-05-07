
void FUN_00930040(undefined1 *param_1,int param_2,int *param_3,int *param_4,float *param_5,
                 char *param_6,int *param_7,int *param_8)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  ushort *puVar10;
  ushort *puVar11;
  char *pcVar12;
  ushort *puVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float *pfVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar34;
  float fVar36;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar35;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  float local_110;
  int local_10c;
  ushort *local_108;
  int local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e0 [6];
  int local_c8;
  ushort *local_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 local_85;
  int local_84;
  float local_80 [4];
  ushort *local_70;
  ushort *local_6c;
  ushort *local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  uint local_4c [3];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_84 = *param_3;
  local_10c = param_3[1];
  local_104 = 0;
  if (0 < param_3[2]) {
    do {
      local_4c[0] = *(uint *)(param_3[1] + local_104 * 8);
      uVar17 = (uint)*(ushort *)(param_3[1] + 4 + local_104 * 8);
      local_108 = (ushort *)(uint)*(ushort *)(local_10c + 4 + uVar17 * 8);
      if ((local_104 < (int)uVar17) && (local_104 < (int)local_108)) {
        iVar15 = param_7[1];
        iVar19 = iVar15 + 1;
        if ((int)(param_7[2] & 0x3fffffffU) < iVar19) {
          iVar16 = (param_7[2] & 0x3fffffffU) * 2;
          if (iVar16 <= iVar19) {
            iVar16 = iVar19;
          }
          FUN_008a6e40(param_7,iVar16,0x10);
        }
        param_7[1] = iVar15 + 1;
        pfVar18 = (float *)(iVar15 * 0x10 + *param_7);
        iVar19 = *param_3;
        pfVar14 = (float *)((local_4c[0] & 0xffff) * 0x10 + iVar19);
        local_c0 = *pfVar14;
        fStack_bc = pfVar14[1];
        fStack_b8 = pfVar14[2];
        fStack_b4 = pfVar14[3];
        local_110 = (float)(local_10c + uVar17 * 8);
        pfVar14 = (float *)((uint)*(ushort *)(local_10c + uVar17 * 8) * 0x10 + iVar19);
        local_a0 = *pfVar14;
        local_9c = pfVar14[1];
        local_20 = local_c0 - local_a0;
        local_98 = pfVar14[2];
        local_94 = pfVar14[3];
        fStack_1c = fStack_bc - local_9c;
        local_108 = (ushort *)(local_10c + (int)local_108 * 8);
        fStack_18 = fStack_b8 - local_98;
        pfVar14 = (float *)((uint)*local_108 * 0x10 + iVar19);
        local_60 = *pfVar14;
        local_5c = pfVar14[1];
        local_c4 = (ushort *)0x40400000;
        fVar22 = fStack_1c * fStack_1c;
        fVar23 = fStack_18 * fStack_18;
        auVar25._4_4_ = fVar22;
        auVar25._0_4_ = fVar22;
        auVar25._8_4_ = fVar22;
        auVar25._12_4_ = fVar22;
        auVar26._4_12_ = auVar25._4_12_;
        auVar26._0_4_ = fVar22 + local_20 * local_20;
        auVar5._4_8_ = uStack_f8;
        auVar5._0_4_ = fVar23;
        local_100 = auVar5._0_8_ << 0x20;
        uStack_f8._0_4_ = fVar23;
        uStack_f8._4_4_ = fVar23;
        auVar27._4_4_ = fVar23;
        auVar27._0_4_ = fVar23 + auVar26._0_4_;
        auVar27._8_4_ = fVar23;
        auVar27._12_4_ = fVar23;
        auVar27 = rsqrtss(auVar26,auVar27);
        local_58 = pfVar14[2];
        local_54 = pfVar14[3];
        fVar22 = auVar27._0_4_;
        local_c8 = 0x3f000000;
        local_40 = local_60 - local_a0;
        fStack_14 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar26._0_4_) * fVar22 * fVar22);
        local_20 = fStack_14 * local_20;
        fStack_1c = fStack_14 * fStack_1c;
        fStack_18 = fStack_14 * fStack_18;
        fStack_14 = fStack_14 * (fStack_b4 - local_94);
        fStack_3c = local_5c - local_9c;
        fStack_38 = local_58 - local_98;
        fVar22 = fStack_3c * fStack_3c;
        fVar23 = fStack_38 * fStack_38;
        auVar48._4_4_ = fVar22;
        auVar48._0_4_ = fVar22;
        auVar48._8_4_ = fVar22;
        auVar48._12_4_ = fVar22;
        auVar49._4_12_ = auVar48._4_12_;
        auVar49._0_4_ = fVar22 + local_40 * local_40;
        auVar6._4_8_ = uStack_f8;
        auVar6._0_4_ = fVar23;
        local_100 = auVar6._0_8_ << 0x20;
        uStack_f8._0_4_ = fVar23;
        uStack_f8._4_4_ = fVar23;
        auVar27 = _local_100;
        auVar50._4_4_ = fVar23;
        auVar50._0_4_ = fVar23 + auVar49._0_4_;
        auVar50._8_4_ = fVar23;
        auVar50._12_4_ = fVar23;
        auVar50 = rsqrtss(auVar49,auVar50);
        fVar22 = auVar50._0_4_;
        local_100._0_4_ = fVar22;
        fStack_34 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar49._0_4_) * fVar22 * fVar22);
        local_40 = fStack_34 * local_40;
        fStack_3c = fStack_34 * fStack_3c;
        fStack_38 = fStack_34 * fStack_38;
        fStack_34 = fStack_34 * (local_54 - local_94);
        fVar24 = fStack_1c * fStack_38 - fStack_18 * fStack_3c;
        fVar34 = fStack_18 * local_40 - local_20 * fStack_38;
        fVar36 = local_20 * fStack_3c - fStack_1c * local_40;
        fVar38 = fStack_14 * fStack_34 - fStack_14 * fStack_34;
        fVar22 = fVar34 * fVar34;
        fVar23 = fVar36 * fVar36;
        local_28 = fVar23 + fVar22 + fVar24 * fVar24;
        *pfVar18 = fVar24;
        pfVar18[1] = fVar34;
        pfVar18[2] = fVar36;
        pfVar18[3] = fVar38;
        if (*(float *)(param_2 + 8) <= local_28) {
          auVar51._4_4_ = fVar22;
          auVar51._0_4_ = fVar22;
          auVar51._8_4_ = fVar22;
          auVar51._12_4_ = fVar22;
          auVar52._4_12_ = auVar51._4_12_;
          auVar52._0_4_ = fVar22 + fVar24 * fVar24;
          uStack_f8 = auVar27._8_8_;
          auVar7._4_8_ = uStack_f8;
          auVar7._0_4_ = fVar23;
          local_100 = auVar7._0_8_ << 0x20;
          uStack_f8._0_4_ = fVar23;
          uStack_f8._4_4_ = fVar23;
          auVar4._4_4_ = fVar23;
          auVar4._0_4_ = fVar23 + auVar52._0_4_;
          auVar4._8_4_ = fVar23;
          auVar4._12_4_ = fVar23;
          auVar27 = rsqrtss(auVar52,auVar4);
          fVar22 = auVar27._0_4_;
          local_100._0_4_ = fVar22;
          fVar22 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar52._0_4_) * fVar22 * fVar22);
          *pfVar18 = fVar22 * fVar24;
          pfVar18[1] = fVar22 * fVar34;
          pfVar18[2] = fVar22 * fVar36;
          pfVar18[3] = fVar22 * fVar38;
          local_24 = fVar22 * fVar36 * fStack_b8 +
                     fVar22 * fVar34 * fStack_bc + fVar22 * fVar24 * local_c0;
          pfVar18[3] = -local_24;
          iVar15 = param_8[1];
          iVar19 = iVar15 + 1;
          local_80[0] = (local_a0 - local_c0) * 0.5;
          local_80[1] = (local_9c - fStack_bc) * 0.5;
          local_80[2] = (local_98 - fStack_b8) * 0.5;
          local_80[3] = (local_94 - fStack_b4) * 0.5;
          local_e0[0] = (local_60 - local_c0) * 0.5;
          local_e0[1] = (local_5c - fStack_bc) * 0.5;
          local_e0[2] = (local_58 - fStack_b8) * 0.5;
          local_e0[3] = (local_54 - fStack_b4) * 0.5;
          if ((int)(param_8[2] & 0x3fffffffU) < iVar19) {
            iVar16 = (param_8[2] & 0x3fffffffU) * 2;
            if (iVar16 <= iVar19) {
              iVar16 = iVar19;
            }
            FUN_008a6e40(param_8,iVar16,0x20);
          }
          param_8[1] = iVar15 + 1;
          fVar22 = pfVar18[1];
          fVar23 = pfVar18[2];
          fVar24 = pfVar18[3];
          pfVar14 = (float *)(iVar15 * 0x20 + *param_8);
          *pfVar14 = *pfVar18;
          pfVar14[1] = fVar22;
          pfVar14[2] = fVar23;
          pfVar14[3] = fVar24;
          iVar19 = param_3[1];
          pfVar14[5] = local_110;
          pfVar14[4] = (float)(iVar19 + local_104 * 8);
          pfVar14[6] = (float)local_108;
          FUN_0092dc50();
        }
        else {
          iVar19 = param_7[1] + -1;
          if ((int)(param_7[2] & 0x3fffffffU) < iVar19) {
            iVar15 = (param_7[2] & 0x3fffffffU) * 2;
            if (iVar15 <= iVar19) {
              iVar15 = iVar19;
            }
            FUN_008a6e40(param_7,iVar15,0x10);
          }
          param_7[1] = iVar19;
        }
      }
      local_104 = local_104 + 1;
    } while (local_104 < param_3[2]);
  }
  *param_6 = '\0';
  if (0 < param_8[1]) {
    local_104 = 0;
    local_108 = (ushort *)0x1;
    do {
      local_c4 = local_108;
      if ((int)local_108 < param_8[1]) {
        local_c8 = local_104 + 0x20;
        do {
          iVar19 = *param_8;
          pfVar14 = (float *)(iVar19 + local_104);
          pfVar18 = local_80;
          for (iVar15 = 8; iVar15 != 0; iVar15 = iVar15 + -1) {
            *pfVar18 = *pfVar14;
            pfVar14 = pfVar14 + 1;
            pfVar18 = pfVar18 + 1;
          }
          puVar20 = (undefined4 *)(iVar19 + local_c8);
          puVar21 = &local_100;
          for (iVar15 = 8; puVar10 = local_6c, puVar13 = local_70, iVar15 != 0; iVar15 = iVar15 + -1
              ) {
            *(undefined4 *)puVar21 = *puVar20;
            puVar20 = puVar20 + 1;
            puVar21 = (undefined8 *)((int)puVar21 + 4);
          }
          local_e0[0] = (float)local_100 + local_80[0];
          local_e0[1] = local_100._4_4_ + local_80[1];
          local_e0[2] = (float)uStack_f8 + local_80[2];
          local_e0[3] = uStack_f8._4_4_ + local_80[3];
          local_110 = local_e0[2] * local_e0[2] + local_e0[0] * local_e0[0] +
                      local_e0[3] * local_e0[3] + local_e0[1] * local_e0[1];
          if (local_110 < *(float *)(param_2 + 0x18)) {
            local_80[0] = -(float)local_100;
            local_80[1] = -local_100._4_4_;
            *param_6 = '\x01';
            local_80[2] = -(float)uStack_f8;
            pcVar12 = (char *)FUN_0092c790(&local_a6,local_10c,local_70,local_f0,local_6c,local_ec,
                                           local_80,&local_100);
            puVar11 = local_68;
            if ((*pcVar12 != '\0') ||
               (pcVar12 = (char *)FUN_0092c790(&local_85,local_10c,puVar13,local_f0,puVar10,local_e8
                                               ,local_80,&local_100), *pcVar12 != '\0')) {
              *param_6 = '\x01';
              FUN_0092e640(local_80,(uint)*puVar13 * 0x10 + local_84,
                           (uint)*puVar10 * 0x10 + local_84,(uint)*puVar11 * 0x10 + local_84,param_7
                          );
            }
            pcVar12 = (char *)FUN_0092c790(&local_a5,local_10c,puVar13,local_f0,puVar11,local_ec,
                                           local_80,&local_100);
            if ((*pcVar12 != '\0') ||
               (pcVar12 = (char *)FUN_0092c790(&local_a1,local_10c,puVar13,local_f0,puVar11,local_e8
                                               ,local_80,&local_100), *pcVar12 != '\0')) {
              *param_6 = '\x01';
              FUN_0092e640(local_80,(uint)*puVar13 * 0x10 + local_84,
                           (uint)*puVar11 * 0x10 + local_84,(uint)*puVar10 * 0x10 + local_84,param_7
                          );
            }
            pcVar12 = (char *)FUN_0092c790(&local_a2,local_10c,puVar10,local_f0,puVar11,local_ec,
                                           local_80,&local_100);
            if (((*pcVar12 != '\0') ||
                (pcVar12 = (char *)FUN_0092c790(&local_a4,local_10c,puVar10,local_f0,puVar11,
                                                local_e8,local_80,&local_100), *pcVar12 != '\0')) ||
               (pcVar12 = (char *)FUN_0092c790(&local_a3,local_10c,puVar10,local_ec,puVar11,local_e8
                                               ,local_80,&local_100), *pcVar12 != '\0')) {
              *param_6 = '\x01';
              FUN_0092e640(local_80,(uint)*puVar10 * 0x10 + local_84,
                           (uint)*puVar11 * 0x10 + local_84,(uint)*puVar13 * 0x10 + local_84,param_7
                          );
            }
          }
          local_c4 = (ushort *)((int)local_c4 + 1);
          local_c8 = local_c8 + 0x20;
        } while ((int)local_c4 < param_8[1]);
      }
      puVar13 = (ushort *)((int)local_108 + 1);
      local_104 = local_104 + 0x20;
      bVar1 = (int)local_108 < param_8[1];
      local_108 = puVar13;
    } while (bVar1);
    if (*param_6 != '\0') {
      pfVar14 = (float *)*param_4;
      fVar22 = *pfVar14 - pfVar14[4];
      fVar23 = pfVar14[1] - pfVar14[5];
      fVar24 = pfVar14[2] - pfVar14[6];
      fVar34 = pfVar14[3] - pfVar14[7];
      fVar36 = *pfVar14 - pfVar14[8];
      fVar35 = pfVar14[1] - pfVar14[9];
      fVar37 = pfVar14[2] - pfVar14[10];
      fVar39 = pfVar14[3] - pfVar14[0xb];
      fVar38 = fVar23 * fVar37 - fVar24 * fVar35;
      fVar24 = fVar24 * fVar36 - fVar22 * fVar37;
      fVar36 = fVar22 * fVar35 - fVar23 * fVar36;
      fVar34 = fVar34 * fVar39 - fVar34 * fVar39;
      fVar22 = fVar24 * fVar24;
      fVar23 = fVar36 * fVar36;
      auVar40._4_4_ = fVar22;
      auVar40._0_4_ = fVar22;
      auVar40._8_4_ = fVar22;
      auVar40._12_4_ = fVar22;
      auVar41._4_12_ = auVar40._4_12_;
      auVar41._0_4_ = fVar22 + fVar38 * fVar38;
      auVar8._4_8_ = uStack_f8;
      auVar8._0_4_ = fVar23;
      local_100 = auVar8._0_8_ << 0x20;
      uStack_f8._0_4_ = fVar23;
      uStack_f8._4_4_ = fVar23;
      auVar2._4_4_ = fVar23;
      auVar2._0_4_ = fVar23 + auVar41._0_4_;
      auVar2._8_4_ = fVar23;
      auVar2._12_4_ = fVar23;
      auVar27 = rsqrtss(auVar41,auVar2);
      fVar22 = auVar27._0_4_;
      local_100._0_4_ = fVar22;
      fVar22 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar41._0_4_) * fVar22 * fVar22);
      *param_5 = fVar38;
      param_5[1] = fVar24;
      param_5[2] = fVar36;
      param_5[3] = fVar34;
      *param_5 = fVar22 * fVar38;
      param_5[1] = fVar22 * fVar24;
      param_5[2] = fVar22 * fVar36;
      param_5[3] = fVar22 * fVar34;
      pfVar14 = (float *)*param_4;
      local_110 = fVar22 * fVar36 * pfVar14[2] +
                  fVar22 * fVar24 * pfVar14[1] + fVar22 * fVar38 * *pfVar14;
      param_5[3] = -local_110;
    }
  }
  if (1 < param_7[1]) {
    FUN_0092b640(*param_7,0,param_7[1] + -1,&LAB_0092c9b0);
  }
  FUN_0092dca0(*(undefined4 *)(param_2 + 0x10),param_7,&local_110);
  iVar19 = param_7[1];
  if (iVar19 < 2) {
    if (param_3[2] == 1) {
      pfVar14 = (float *)((uint)*(ushort *)param_3[1] * 0x10 + *param_3);
      local_80[0] = *pfVar14;
      local_80[1] = pfVar14[1];
      local_80[2] = pfVar14[2];
      local_80[3] = pfVar14[3];
      local_40 = local_80[0] + 1.0;
      fStack_3c = local_80[1] + 0.0;
      fStack_38 = local_80[2] + 0.0;
      fStack_34 = local_80[3] + 0.0;
    }
    else {
      pfVar14 = (float *)((uint)*(ushort *)param_3[1] * 0x10 + *param_3);
      local_80[0] = *pfVar14;
      local_80[1] = pfVar14[1];
      local_80[2] = pfVar14[2];
      local_80[3] = pfVar14[3];
      pfVar14 = (float *)((uint)*(ushort *)(param_3[1] + (uint)*(ushort *)(param_3[1] + 2) * 8) *
                          0x10 + *param_3);
      local_40 = *pfVar14;
      fStack_3c = pfVar14[1];
      fStack_38 = pfVar14[2];
      fStack_34 = pfVar14[3];
    }
    local_100._0_4_ = local_80[0] - local_40;
    local_100._4_4_ = local_80[1] - fStack_3c;
    uStack_f8._0_4_ = local_80[2] - fStack_38;
    uStack_f8._4_4_ = local_80[3] - fStack_34;
    local_108 = (ushort *)0x7f7fffff;
    iVar15 = 0;
    do {
      local_e0[0] = 0.0;
      local_e0[1] = 0.0;
      local_e0[2] = 0.0;
      local_e0[3] = 0.0;
      local_e0[iVar15] = 1.0;
      local_110 = (float)uStack_f8 * local_e0[2] +
                  local_100._4_4_ * local_e0[1] + (float)local_100 * local_e0[0];
      if (ABS(local_110) < (float)local_108) {
        local_20 = local_e0[0];
        fStack_1c = local_e0[1];
        fStack_18 = local_e0[2];
        fStack_14 = 0.0;
        local_108 = (ushort *)ABS(local_110);
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < 3);
    iVar15 = iVar19 + 6;
    if ((int)(param_7[2] & 0x3fffffffU) < iVar15) {
      iVar16 = (param_7[2] & 0x3fffffffU) * 2;
      if (iVar16 <= iVar15) {
        iVar16 = iVar15;
      }
      FUN_008a6e40(param_7,iVar16,0x10);
    }
    fVar23 = local_100._4_4_ * fStack_18 - (float)uStack_f8 * fStack_1c;
    fVar24 = (float)uStack_f8 * local_20 - (float)local_100 * fStack_18;
    fVar34 = (float)local_100 * fStack_1c - local_100._4_4_ * local_20;
    fVar36 = uStack_f8._4_4_ * fStack_14 - uStack_f8._4_4_ * fStack_14;
    fVar22 = fVar24 * fVar24;
    auVar28._8_4_ = fVar34 * fVar34;
    auVar53._4_4_ = fVar22;
    auVar53._0_4_ = fVar22;
    auVar53._8_4_ = fVar22;
    auVar53._12_4_ = fVar22;
    auVar54._4_12_ = auVar53._4_12_;
    auVar54._0_4_ = fVar22 + fVar23 * fVar23;
    auVar28._4_4_ = auVar28._8_4_;
    auVar28._0_4_ = auVar28._8_4_;
    auVar28._12_4_ = auVar28._8_4_;
    auVar29._4_12_ = auVar28._4_12_;
    auVar29._0_4_ = auVar28._8_4_ + auVar54._0_4_;
    auVar27 = rsqrtss(auVar54,auVar29);
    fVar22 = auVar27._0_4_;
    local_e0[0] = 0.5;
    local_e0[1] = 0.0;
    local_e0[2] = 0.0;
    local_e0[3] = 0.0;
    fVar22 = fVar22 * 0.5 * (3.0 - auVar29._0_4_ * fVar22 * fVar22);
    param_7[1] = iVar15;
    pfVar14 = (float *)(*param_7 + iVar19 * 0x10);
    *pfVar14 = fVar23;
    pfVar14[1] = fVar24;
    pfVar14[2] = fVar34;
    pfVar14[3] = fVar36;
    *pfVar14 = fVar22 * fVar23;
    pfVar14[1] = fVar22 * fVar24;
    pfVar14[2] = fVar22 * fVar34;
    pfVar14[3] = fVar22 * fVar36;
    pfVar14[3] = -(fVar22 * fVar34 * local_80[2] +
                  fVar22 * fVar24 * local_80[1] + fVar22 * fVar23 * local_80[0]);
    fVar23 = local_100._4_4_ * pfVar14[2] - (float)uStack_f8 * pfVar14[1];
    fVar24 = (float)uStack_f8 * *pfVar14 - (float)local_100 * pfVar14[2];
    fVar34 = (float)local_100 * pfVar14[1] - local_100._4_4_ * *pfVar14;
    fVar36 = uStack_f8._4_4_ * pfVar14[3] - uStack_f8._4_4_ * pfVar14[3];
    fVar22 = fVar24 * fVar24;
    auVar30._8_4_ = fVar34 * fVar34;
    pfVar18 = (float *)(iVar19 * 0x10 + 0x10 + *param_7);
    auVar42._4_4_ = fVar22;
    auVar42._0_4_ = fVar22;
    auVar42._8_4_ = fVar22;
    auVar42._12_4_ = fVar22;
    *pfVar18 = fVar23;
    pfVar18[1] = fVar24;
    pfVar18[2] = fVar34;
    pfVar18[3] = fVar36;
    auVar43._4_12_ = auVar42._4_12_;
    auVar43._0_4_ = fVar22 + fVar23 * fVar23;
    auVar30._4_4_ = auVar30._8_4_;
    auVar30._0_4_ = auVar30._8_4_;
    auVar30._12_4_ = auVar30._8_4_;
    auVar31._4_12_ = auVar30._4_12_;
    auVar31._0_4_ = auVar30._8_4_ + auVar43._0_4_;
    auVar27 = rsqrtss(auVar43,auVar31);
    fVar22 = auVar27._0_4_;
    fVar22 = fVar22 * 0.5 * (3.0 - auVar31._0_4_ * fVar22 * fVar22);
    *pfVar18 = fVar22 * fVar23;
    pfVar18[1] = fVar22 * fVar24;
    pfVar18[2] = fVar22 * fVar34;
    pfVar18[3] = fVar22 * fVar36;
    pfVar18[3] = -(fVar22 * fVar34 * local_80[2] +
                  fVar22 * fVar24 * local_80[1] + fVar22 * fVar23 * local_80[0]);
    fVar22 = *pfVar14;
    fVar23 = pfVar14[1];
    fVar24 = pfVar14[2];
    fVar34 = pfVar14[3];
    iVar15 = *param_7;
    iVar16 = (iVar19 + 2) * 0x10;
    pfVar14 = (float *)(iVar16 + iVar15);
    *pfVar14 = -fVar22;
    pfVar14[1] = -fVar23;
    pfVar14[2] = -fVar24;
    pfVar14[3] = -fVar34;
    *(float *)(iVar16 + iVar15 + 0xc) =
         -(-fVar24 * local_80[2] + -fVar23 * local_80[1] + -fVar22 * local_80[0]);
    iVar15 = *param_7;
    fVar22 = *pfVar18;
    fVar23 = pfVar18[1];
    fVar24 = pfVar18[2];
    fVar34 = pfVar18[3];
    iVar16 = (iVar19 + 3) * 0x10;
    pfVar14 = (float *)(iVar16 + iVar15);
    *pfVar14 = -fVar22;
    pfVar14[1] = -fVar23;
    pfVar14[2] = -fVar24;
    pfVar14[3] = -fVar34;
    *(float *)(iVar16 + iVar15 + 0xc) =
         -(-fVar24 * local_80[2] + -fVar23 * local_80[1] + -fVar22 * local_80[0]);
    pfVar14 = (float *)((iVar19 + 4) * 0x10 + *param_7);
    fVar22 = local_100._4_4_ * local_100._4_4_;
    auVar32._8_4_ = (float)uStack_f8 * (float)uStack_f8;
    *pfVar14 = (float)local_100;
    pfVar14[1] = local_100._4_4_;
    pfVar14[2] = (float)uStack_f8;
    pfVar14[3] = uStack_f8._4_4_;
    auVar44._4_4_ = fVar22;
    auVar44._0_4_ = fVar22;
    auVar44._8_4_ = fVar22;
    auVar44._12_4_ = fVar22;
    auVar45._4_12_ = auVar44._4_12_;
    auVar45._0_4_ = fVar22 + (float)local_100 * (float)local_100;
    auVar32._4_4_ = auVar32._8_4_;
    auVar32._0_4_ = auVar32._8_4_;
    auVar32._12_4_ = auVar32._8_4_;
    auVar33._4_12_ = auVar32._4_12_;
    auVar33._0_4_ = auVar32._8_4_ + auVar45._0_4_;
    auVar27 = rsqrtss(auVar45,auVar33);
    fVar22 = auVar27._0_4_;
    fVar22 = fVar22 * 0.5 * (3.0 - auVar33._0_4_ * fVar22 * fVar22);
    *pfVar14 = fVar22 * (float)local_100;
    pfVar14[1] = fVar22 * local_100._4_4_;
    pfVar14[2] = fVar22 * (float)uStack_f8;
    pfVar14[3] = fVar22 * uStack_f8._4_4_;
    pfVar14[3] = -(fVar22 * (float)uStack_f8 * local_80[2] +
                  fVar22 * local_100._4_4_ * local_80[1] + fVar22 * (float)local_100 * local_80[0]);
    fVar22 = pfVar14[3];
    fVar23 = -*pfVar14;
    fVar34 = -pfVar14[1];
    fVar38 = -pfVar14[2];
    fVar24 = fVar34 * fVar34;
    fVar36 = fVar38 * fVar38;
    auVar46._4_4_ = fVar24;
    auVar46._0_4_ = fVar24;
    auVar46._8_4_ = fVar24;
    auVar46._12_4_ = fVar24;
    auVar47._4_12_ = auVar46._4_12_;
    auVar47._0_4_ = fVar24 + fVar23 * fVar23;
    uStack_f8 = auVar32._8_8_;
    auVar9._4_8_ = uStack_f8;
    auVar9._0_4_ = fVar36;
    local_100 = auVar9._0_8_ << 0x20;
    uStack_f8._0_4_ = fVar36;
    uStack_f8._4_4_ = fVar36;
    auVar3._4_4_ = fVar36;
    auVar3._0_4_ = fVar36 + auVar47._0_4_;
    auVar3._8_4_ = fVar36;
    auVar3._12_4_ = fVar36;
    auVar27 = rsqrtss(auVar47,auVar3);
    fVar24 = auVar27._0_4_;
    local_100._0_4_ = fVar24;
    pfVar14 = (float *)((iVar19 + 5) * 0x10 + *param_7);
    fVar24 = fVar24 * 0.5 * (3.0 - (fVar36 + auVar47._0_4_) * fVar24 * fVar24);
    *pfVar14 = fVar23;
    pfVar14[1] = fVar34;
    pfVar14[2] = fVar38;
    pfVar14[3] = -fVar22;
    fVar23 = fVar24 * fVar23;
    fVar34 = fVar24 * fVar34;
    fVar38 = fVar24 * fVar38;
    *pfVar14 = fVar23;
    pfVar14[1] = fVar34;
    pfVar14[2] = fVar38;
    pfVar14[3] = fVar24 * -fVar22;
    if (param_3[2] == 1) {
      local_110 = fVar38 * local_80[2] + fVar34 * local_80[1] + fVar23 * local_80[0];
    }
    else {
      local_110 = fVar38 * fStack_38 + fVar34 * fStack_3c + fVar23 * local_40;
    }
    pfVar14[3] = -local_110;
  }
  if ((*param_6 != '\0') && (*(char *)(param_2 + 2) != '\0')) {
    param_7[1] = 0;
    local_4c[0] = 0;
    local_4c[1] = 0;
    local_4c[2] = -0x80000000;
    FUN_0092f270(param_5,*param_4,param_4[1],local_4c,param_7);
    if (-1 < (int)local_4c[2]) {
      FUN_008a75d0(local_4c[0],local_4c[2] << 4,0x14);
    }
  }
  if (1 < param_7[1]) {
    FUN_0092b640(*param_7,0,param_7[1] + -1,&LAB_0092c9b0);
  }
  FUN_0092dca0(*(undefined4 *)(param_2 + 0x10),param_7,&local_110);
  *param_1 = 1;
  return;
}



void FUN_00930fc0(int param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int unaff_FS_OFFSET;
  
  piVar10 = param_2;
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      *(undefined4 *)((uint)*(ushort *)(*(int *)(param_1 + 4) + iVar11 * 8) * 0x10 + 0xc + *param_2)
           = 0x40000000;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 8));
  }
  iVar11 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar4 = *(int **)(iVar11 + 0x19c);
  uVar5 = param_2[1];
  iVar13 = piVar4[8];
  uVar12 = uVar5 * 4 + 0x10 & 0xfffffff0;
  uVar1 = iVar13 + uVar12;
  if ((uint)piVar4[0xb] < uVar1) {
    iVar13 = (**(code **)(*piVar4 + 0xc))(uVar12);
  }
  else {
    piVar4[8] = uVar1;
  }
  iVar15 = 0;
  iVar16 = 0;
  if (0 < param_2[1]) {
    param_2 = (int *)0x0;
    iVar14 = 0;
    do {
      iVar6 = *piVar10;
      if (*(int *)(iVar15 + 0xc + iVar6) == 0x40000000) {
        puVar2 = (undefined4 *)(iVar15 + iVar6);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar9 = puVar2[3];
        puVar3 = (undefined4 *)(iVar6 + (int)param_2);
        *puVar3 = *puVar2;
        puVar3[1] = uVar7;
        puVar3[2] = uVar8;
        puVar3[3] = uVar9;
        *(int *)(iVar13 + iVar14 * 4) = iVar16;
        iVar16 = iVar16 + 1;
        param_2 = (int *)((int)param_2 + 0x10);
      }
      else {
        *(undefined4 *)(iVar13 + iVar14 * 4) = 0xffffffff;
      }
      iVar14 = iVar14 + 1;
      iVar15 = iVar15 + 0x10;
    } while (iVar14 < piVar10[1]);
  }
  if ((int)(piVar10[2] & 0x3fffffffU) < iVar16) {
    iVar15 = (piVar10[2] & 0x3fffffffU) * 2;
    if (iVar15 <= iVar16) {
      iVar15 = iVar16;
    }
    FUN_008a6e40(piVar10,iVar15,0x10);
  }
  piVar10[1] = iVar16;
  iVar15 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      *(undefined2 *)(*(int *)(param_1 + 4) + iVar15 * 8) =
           *(undefined2 *)(iVar13 + (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar15 * 8) * 4);
      iVar15 = iVar15 + 1;
    } while (iVar15 < *(int *)(param_1 + 8));
  }
  piVar4 = *(int **)(iVar11 + 0x19c);
  piVar4[8] = iVar13;
  if (iVar13 == piVar4[10]) {
    (**(code **)(*piVar4 + 0x10))(iVar13);
  }
  if (-1 < (int)(uVar5 | 0x80000000)) {
    FUN_008a75d0(iVar13,uVar5 << 2,0x14);
  }
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      *(undefined4 *)((uint)*(ushort *)(*(int *)(param_1 + 4) + iVar11 * 8) * 0x10 + 0xc + *piVar10)
           = 0;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 8));
  }
  return;
}



void FUN_00931140(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  if ((int)(param_4[2] & 0x3fffffffU) < iVar4) {
    iVar5 = (param_4[2] & 0x3fffffffU) * 2;
    if (iVar5 <= iVar4) {
      iVar5 = iVar4;
    }
    FUN_008a6e40(param_4,iVar5,2);
  }
  param_4[1] = iVar4;
  iVar4 = *(int *)(param_3 + 8);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + iVar5 * 8);
      if ((*(short *)((int)puVar1 + 6) == 1) || (*(short *)((int)puVar1 + 6) == 2)) {
        *(undefined2 *)(*param_4 + iVar5 * 2) = *(undefined2 *)(param_3 + 8);
        if (*(uint *)(param_3 + 8) == (*(uint *)(param_3 + 0xc) & 0x3fffffff)) {
          FUN_008a6ee0((int *)(param_3 + 4),8);
        }
        iVar2 = *(int *)(param_3 + 8);
        iVar3 = *(int *)(param_3 + 4);
        *(undefined4 *)(iVar3 + iVar2 * 8) = *puVar1;
        *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = puVar1[1];
        *(int *)(param_3 + 8) = *(int *)(param_3 + 8) + 1;
      }
      else {
        *(undefined2 *)(*param_4 + iVar5 * 2) = 0xffff;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  if (iVar4 < *(int *)(param_3 + 8)) {
    do {
      iVar5 = *(int *)(param_3 + 4) + iVar4 * 8;
      *(undefined2 *)(iVar5 + 2) = *(undefined2 *)(*param_4 + (uint)*(ushort *)(iVar5 + 2) * 2);
      *(undefined2 *)(iVar5 + 4) = *(undefined2 *)(*param_4 + (uint)*(ushort *)(iVar5 + 4) * 2);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_3 + 8));
  }
  return;
}



void FUN_00931240(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,int *param_7)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  undefined4 *local_20c;
  uint local_208;
  uint local_204;
  undefined4 local_200 [128];
  
  fVar2 = *(float *)(param_1 + 0xc);
  uVar3 = *param_2;
  if ((1 < param_7[1]) &&
     (iVar5 = *param_7, *(float *)(iVar5 + 0xc) - *(float *)(iVar5 + 4) < fVar2)) {
    local_20c = local_200;
    local_208 = 0;
    local_204 = 0x80000040;
    fVar4 = *(float *)(iVar5 + 4);
    iVar5 = 0;
    if (0 < param_7[1]) {
      do {
        puVar1 = (undefined4 *)(*param_7 + iVar5 * 8);
        if (fVar2 < *(float *)(*param_7 + 4 + iVar5 * 8) - fVar4) break;
        if (local_208 == (local_204 & 0x3fffffff)) {
          FUN_008a6ee0(&local_20c,8);
        }
        local_20c[local_208 * 2] = *puVar1;
        local_20c[local_208 * 2 + 1] = puVar1[1];
        local_208 = local_208 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < param_7[1]);
    }
    FUN_0092ec70(uVar3,param_1,fVar4,param_3,param_4,param_5,param_6,&local_20c);
    puVar1 = (undefined4 *)*param_7;
    *puVar1 = *local_20c;
    puVar1[1] = local_20c[1];
    *(float *)(*param_7 + 4) = fVar4;
    if ((param_7[2] & 0x3fffffffU) == 0) {
      FUN_008a6e40(param_7,1,8);
    }
    param_7[1] = 1;
    if (-1 < (int)local_204) {
      FUN_008a75d0(local_20c,local_204 << 3,0x14);
    }
  }
  return;
}



void FUN_009313e0(int param_1,undefined4 param_2,undefined4 param_3,short param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,int *param_8,int *param_9
                 )

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_8[1] == 1) && (param_9[1] == 1)) {
    uVar3 = *param_5;
    if ((param_5[2] != 0) && ((param_4 != -1 && (**(short **)(param_5[2] + 4) == param_4)))) {
      uVar3 = param_5[1];
    }
    piVar1 = (int *)*param_8;
    puVar2 = (undefined4 *)*param_9;
    if (ABS((float)piVar1[1] - (float)puVar2[1]) < *(float *)(param_1 + 0xc)) {
      local_14 = &DAT_80000002;
      local_1c = &local_10;
      local_10 = *piVar1;
      local_c = piVar1[1];
      local_8 = *puVar2;
      local_4 = puVar2[1];
      local_18 = 2;
      FUN_0092ec70(param_2,param_1,puVar2[1],param_3,uVar3,param_6,param_7,&local_1c);
      param_8 = (int *)*param_8;
      if (*local_1c != *param_8) {
        param_8 = (int *)*param_9;
      }
      param_8[1] = (int)((float)param_8[1] * 0.5);
      if (-1 < (int)local_14) {
        FUN_008a75d0(local_1c,(int)local_14 << 3,0x14);
      }
    }
  }
  return;
}



undefined1 * FUN_00931520(undefined1 *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *local_20c;
  uint local_208;
  uint local_204;
  undefined4 local_200 [128];
  
  iVar1 = *(int *)(param_2 + 4);
  local_20c = local_200;
  uVar5 = 0x80000080;
  local_204 = 0x80000080;
  local_200[0] = param_3;
  local_208 = 1;
  do {
    iVar2 = local_20c[local_208 - 1];
    local_208 = local_208 - 1;
    iVar3 = iVar2;
    do {
      iVar3 = iVar1 + (uint)*(ushort *)(iVar3 + 4) * 8;
      uVar4 = (uint)*(ushort *)(iVar3 + 6);
      if (uVar4 == 1) {
LAB_0093159b:
        if (uVar4 != param_4) {
          *param_1 = 0;
          if ((int)uVar5 < 0) {
            return param_1;
          }
          FUN_008a75d0(local_20c,uVar5 << 2,0x14);
          return param_1;
        }
LAB_009315a8:
        *(undefined2 *)(iVar3 + 6) = (undefined2)param_4;
        uVar5 = local_204;
      }
      else {
        if (uVar4 != 2) {
          if (uVar4 == 3) goto LAB_0093159b;
          goto LAB_009315a8;
        }
        if (param_4 != 3) goto LAB_009315a8;
      }
      iVar6 = iVar2;
    } while (iVar3 != iVar2);
    do {
      uVar4 = (uint)*(ushort *)(iVar1 + 2 + (uint)*(ushort *)(iVar6 + 4) * 8);
      iVar6 = iVar1 + (uint)*(ushort *)(iVar6 + 4) * 8;
      if (*(short *)(iVar1 + 6 + uVar4 * 8) == 0) {
        if (local_208 == (uVar5 & 0x3fffffff)) {
          FUN_008a6ee0(&local_20c,4);
        }
        local_20c[local_208] = iVar1 + uVar4 * 8;
        local_208 = local_208 + 1;
        uVar5 = local_204;
      }
    } while (iVar6 != iVar2);
    if (local_208 == 0) {
      *param_1 = 1;
      if (-1 < (int)uVar5) {
        FUN_008a75d0(local_20c,uVar5 << 2,0x14);
      }
      return param_1;
    }
  } while( true );
}



void FUN_009316c0(char *param_1,int param_2,undefined4 param_3,char param_4,int *param_5)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  short *psVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined1 local_1a;
  undefined1 local_19;
  int local_18;
  char local_14;
  int local_10;
  int local_c;
  char local_8;
  int local_4;
  
  local_18 = *(int *)(param_2 + 4);
  iVar11 = 0;
  iVar5 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      *(undefined2 *)(*(int *)(param_2 + 4) + 6 + iVar5 * 8) = 0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_2 + 8));
  }
  if (param_4 == '\0') {
    iVar5 = *(int *)(*param_5 + 4);
  }
  else {
    iVar5 = *(int *)*param_5;
  }
  iVar12 = param_5[1] + -1;
  if (-1 < iVar12) {
    iVar9 = iVar12 * 0x10;
    do {
      if (param_4 == '\0') {
        iVar6 = *(int *)(iVar9 + 4 + *param_5);
      }
      else {
        iVar6 = *(int *)(iVar9 + *param_5);
      }
      if (iVar6 != iVar5) {
        iVar11 = iVar11 + 1;
        iVar5 = iVar6;
        if (param_4 != '\0') {
          iVar5 = local_18 + (uint)*(ushort *)(iVar6 + 2) * 8;
        }
        if (*(short *)(iVar5 + 6) == 3) goto LAB_009317e8;
        *(undefined2 *)(iVar5 + 6) = 3;
        iVar5 = iVar6;
      }
      iVar12 = iVar12 + -1;
      iVar9 = iVar9 + -0x10;
    } while (-1 < iVar12);
    if (iVar11 != 0) {
      if (param_4 == '\0') {
        iVar5 = *(int *)(*param_5 + 4);
      }
      else {
        iVar5 = *(int *)*param_5;
      }
      iVar11 = param_5[1] + -1;
      if (-1 < iVar11) {
        iVar12 = iVar11 * 0x10;
        do {
          if (param_4 == '\0') {
            iVar9 = *(int *)(iVar12 + 4 + *param_5);
          }
          else {
            iVar9 = *(int *)(iVar12 + *param_5);
          }
          if (iVar9 != iVar5) {
            iVar6 = iVar9;
            if (param_4 == '\0') {
              iVar6 = local_18 + (uint)*(ushort *)(iVar9 + 2) * 8;
            }
            sVar1 = *(short *)(iVar6 + 6);
            iVar5 = iVar9;
            if (sVar1 == 0) {
              *(undefined2 *)(iVar6 + 6) = 1;
            }
            else {
              if (sVar1 == 1) {
LAB_009317e8:
                *param_1 = '\0';
                return;
              }
              if (sVar1 == 3) {
                *(undefined2 *)(iVar6 + 6) = 2;
              }
            }
          }
          iVar11 = iVar11 + -1;
          iVar12 = iVar12 + -0x10;
        } while (-1 < iVar11);
      }
      cVar4 = '\x01';
      local_14 = '\x01';
      if (param_4 == '\0') {
        iVar5 = ((int *)*param_5)[1];
      }
      else {
        iVar5 = *(int *)*param_5;
      }
      local_c = param_5[1];
      cVar3 = local_14;
      if (-1 < local_c + -1) {
        iVar11 = (local_c + -1) * 0x10;
        do {
          if (param_4 == '\0') {
            iVar12 = *(int *)(iVar11 + 4 + *param_5);
          }
          else {
            iVar12 = *(int *)(iVar11 + *param_5);
          }
          if (iVar12 != iVar5) {
            iVar9 = iVar12;
            if (param_4 == '\0') {
              iVar9 = local_18 + (uint)*(ushort *)(iVar12 + 2) * 8;
            }
            if (*(short *)(iVar9 + 6) == 1) {
              if ((cVar4 == '\0') ||
                 (pcVar7 = (char *)FUN_00931520(&local_1a,param_2,iVar9,1), *pcVar7 == '\0')) {
                cVar4 = '\0';
              }
              else {
                cVar4 = '\x01';
              }
            }
            iVar5 = iVar12;
            if (*(short *)(local_18 + 6 + (uint)*(ushort *)(iVar9 + 2) * 8) == 3) {
              if ((cVar4 == '\0') ||
                 (pcVar7 = (char *)FUN_00931520(&local_19,param_2,
                                                local_18 + (uint)*(ushort *)(iVar9 + 2) * 8,3),
                 *pcVar7 == '\0')) {
                cVar4 = '\0';
              }
              else {
                cVar4 = '\x01';
              }
            }
          }
          iVar11 = iVar11 + -0x10;
          local_c = local_c + -1;
          cVar3 = cVar4;
        } while (local_c != 0);
      }
      local_14 = cVar3;
      if (param_4 == '\0') {
        local_10 = ((int *)*param_5)[1];
      }
      else {
        local_10 = *(int *)*param_5;
      }
      local_4 = param_5[1];
      if (-1 < local_4 + -1) {
        local_c = (local_4 + -1) * 0x10;
        do {
          piVar10 = (int *)*param_5;
          if (param_4 == '\0') {
            iVar5 = *(int *)((int)piVar10 + local_c + 4);
          }
          else {
            iVar5 = *(int *)((int)piVar10 + local_c);
          }
          if (iVar5 != local_10) {
            iVar11 = iVar5;
            if (param_4 == '\0') {
              iVar11 = local_18 + (uint)*(ushort *)(iVar5 + 2) * 8;
            }
            local_10 = iVar5;
            if (*(short *)(iVar11 + 6) == 2) {
              local_8 = '\x01';
              if (param_4 == '\0') {
                iVar5 = piVar10[1];
              }
              else {
                iVar5 = *piVar10;
              }
              iVar12 = param_5[1] + -1;
              if (-1 < iVar12) {
                piVar10 = piVar10 + iVar12 * 4;
                do {
                  if (param_4 == '\0') {
                    iVar9 = piVar10[1];
                  }
                  else {
                    iVar9 = *piVar10;
                  }
                  if ((iVar9 != iVar5) && (iVar5 = iVar9, *(short *)(iVar9 + 6) != 2)) {
                    local_8 = '\0';
                    break;
                  }
                  iVar12 = iVar12 + -1;
                  piVar10 = piVar10 + -4;
                } while (-1 < iVar12);
              }
              bVar2 = false;
              iVar5 = 0;
              if (0 < *(int *)(param_2 + 8)) {
                psVar8 = (short *)(*(int *)(param_2 + 4) + 6);
                do {
                  if (*psVar8 == 0) {
                    bVar2 = true;
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  psVar8 = psVar8 + 4;
                } while (iVar5 < *(int *)(param_2 + 8));
              }
              if ((local_8 != '\0') && (bVar2)) {
                if ((local_14 == '\0') ||
                   (pcVar7 = (char *)FUN_00931520(&local_19,param_2,iVar11,3), *pcVar7 == '\0')) {
                  local_14 = '\0';
                }
                else {
                  local_14 = '\x01';
                }
              }
            }
          }
          local_c = local_c + -0x10;
          local_4 = local_4 + -1;
        } while (local_4 != 0);
      }
      iVar5 = 0;
      if (0 < *(int *)(param_2 + 8)) {
        do {
          if ((local_14 == '\0') || (*(short *)(*(int *)(param_2 + 4) + 6 + iVar5 * 8) == 0)) {
            local_14 = '\0';
          }
          else {
            local_14 = '\x01';
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *(int *)(param_2 + 8));
      }
      *param_1 = local_14;
      return;
    }
  }
  *param_1 = '\x01';
  return;
}



void FUN_00931a30(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int local_10;
  
  iVar5 = *(int *)(param_1 + 4);
  local_10 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      uVar6 = *(uint *)(*(int *)(param_1 + 4) + local_10 * 8);
      uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 4) + 4 + local_10 * 8);
      if ((local_10 < (int)uVar8) &&
         (uVar10 = (uint)*(ushort *)(iVar5 + 4 + uVar8 * 8), local_10 < (int)uVar10)) {
        uVar3 = *(ushort *)(iVar5 + uVar8 * 8);
        uVar4 = *(ushort *)(iVar5 + uVar10 * 8);
        iVar7 = *(int *)(param_2 + 0x10);
        iVar1 = iVar7 + 1;
        uVar8 = *(uint *)(param_2 + 0x14) & 0x3fffffff;
        if ((int)uVar8 < iVar1) {
          iVar9 = uVar8 * 2;
          if (iVar9 <= iVar1) {
            iVar9 = iVar1;
          }
          FUN_008a6e40((int *)(param_2 + 0xc),iVar9,0xc);
        }
        puVar2 = (uint *)(*(int *)(param_2 + 0xc) + iVar7 * 0xc);
        *(int *)(param_2 + 0x10) = iVar1;
        *puVar2 = uVar6 & 0xffff;
        puVar2[1] = (uint)uVar4;
        puVar2[2] = (uint)uVar3;
      }
      local_10 = local_10 + 1;
    } while (local_10 < *(int *)(param_1 + 8));
  }
  return;
}



undefined1 *
FUN_00931af0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined1 local_31;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined1 local_20 [28];
  
  local_2c = 0;
  local_28 = 0;
  local_24 = -0x80000000;
  FUN_00930040(&local_31,param_2,param_3,param_4,local_20,local_30,param_5,&local_2c);
  *param_1 = local_30[0];
  if (-1 < local_24) {
    FUN_008a75d0(local_2c,local_24 << 5,0x14);
  }
  return param_1;
}



void FUN_00931b80(int param_1,int param_2,int *param_3,int param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  int *extraout_ECX;
  int *piVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int unaff_FS_OFFSET;
  undefined2 *local_48;
  undefined4 local_44;
  undefined2 local_40;
  int local_3c;
  int local_34;
  int local_20 [4];
  int local_10 [4];
  
  iVar5 = _tls_index;
  *(undefined4 *)(param_4 + 8) = 0;
  local_10[0] = 0;
  local_10[1] = 0;
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + iVar5 * 4);
  uVar6 = *(uint *)(param_1 + 8);
  piVar15 = *(int **)(iVar5 + 0x19c);
  local_10[2] = 0x80000000;
  local_10[3] = piVar15[8];
  uVar11 = uVar6 * 2 + 0x10 & 0xfffffff0;
  uVar16 = local_10[3] + uVar11;
  if ((uint)piVar15[0xb] < uVar16) {
    local_10[3] = (**(code **)(*piVar15 + 0xc))(uVar11);
  }
  else {
    piVar15[8] = uVar16;
  }
  local_10[2] = uVar6 | 0x80000000;
  local_10[0] = local_10[3];
  FUN_00931140(param_1,1,param_4,local_10);
  uVar6 = *(uint *)(param_2 + 8);
  piVar15 = *(int **)(iVar5 + 0x19c);
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0x80000000;
  local_20[3] = piVar15[8];
  uVar11 = uVar6 * 2 + 0x10 & 0xfffffff0;
  uVar16 = local_20[3] + uVar11;
  if ((uint)piVar15[0xb] < uVar16) {
    local_20[3] = (**(code **)(*piVar15 + 0xc))(uVar11);
    piVar15 = extraout_ECX;
  }
  else {
    piVar15[8] = uVar16;
  }
  local_20[2] = uVar6 | 0x80000000;
  local_20[0] = local_20[3];
  FUN_00931140(param_2,(uint)piVar15 & 0xffffff00,param_4,local_20);
  iVar12 = param_3[1] * 3 + *(int *)(param_4 + 8);
  piVar15 = (int *)(param_4 + 4);
  if ((int)(*(uint *)(param_4 + 0xc) & 0x3fffffff) < iVar12) {
    FUN_008a6e40(piVar15,iVar12,8);
  }
  local_3c = 0;
  if (0 < param_3[1]) {
    param_2 = 0;
    do {
      piVar13 = (int *)(*param_3 + param_2);
      puVar7 = (undefined2 *)*piVar13;
      *(undefined2 *)(piVar13 + 2) = *puVar7;
      *(undefined2 *)(piVar13 + 3) =
           *(undefined2 *)(*(int *)(param_1 + 4) + (uint)(ushort)puVar7[2] * 8);
      *(undefined2 *)((int)piVar13 + 0xe) = *(undefined2 *)piVar13[1];
      uVar3 = ((undefined2 *)piVar13[1])[1];
      uVar16 = (uint)*(ushort *)(local_10[0] + ((int)puVar7 - *(int *)(param_1 + 4) >> 3) * 2);
      if (uVar16 == 0xffff) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar15 + uVar16 * 8;
      }
      *piVar13 = iVar12;
      uVar16 = (uint)*(ushort *)(local_20[0] + ((int)((uint)uVar3 << 3) >> 3) * 2);
      if (uVar16 == 0xffff) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar15 + uVar16 * 8;
      }
      piVar13[1] = iVar12;
      local_3c = local_3c + 1;
      param_2 = param_2 + 0x10;
    } while (local_3c < param_3[1]);
  }
  iVar12 = *piVar15;
  local_48 = (undefined2 *)0x0;
  local_34 = param_3[1];
  iVar8 = *(int *)(param_4 + 8);
  local_44 = 0xffff;
  local_44._0_2_ = 0xffff;
  uVar4 = (undefined2)local_44;
  if (-1 < local_34 + -1) {
    iVar17 = (local_34 + -1) * 0x10;
    piVar13 = (int *)*param_3;
    do {
      piVar14 = (int *)(*param_3 + iVar17);
      uVar9 = *(undefined4 *)(param_4 + 8);
      iVar18 = *(int *)(param_4 + 8);
      *(int *)(param_4 + 8) = iVar18 + 1;
      puVar7 = (undefined2 *)(*piVar15 + iVar18 * 8);
      uVar10 = *(undefined4 *)(param_4 + 8);
      iVar18 = *(int *)(param_4 + 8);
      *(int *)(param_4 + 8) = iVar18 + 1;
      puVar2 = (undefined2 *)(*piVar15 + iVar18 * 8);
      iVar18 = *piVar14;
      local_40 = (undefined2)uVar10;
      param_2._0_2_ = (undefined2)uVar9;
      if (iVar18 == *piVar13) {
        iVar18 = piVar14[1];
        if (*(short *)(iVar18 + 6) == 2) {
          uVar4 = *(undefined2 *)(iVar18 + 2);
          uVar16 = (uint)*(ushort *)(iVar18 + 2);
          iVar18 = iVar12;
        }
        else {
          uVar4 = (undefined2)*(undefined4 *)(param_4 + 8);
          uVar16 = *(uint *)(param_4 + 8);
          *(uint *)(param_4 + 8) = uVar16 + 1;
          iVar18 = *piVar15;
        }
        puVar1 = (undefined2 *)(iVar18 + uVar16 * 8);
        *puVar7 = *(undefined2 *)piVar14[1];
        puVar7[2] = local_40;
        puVar7[1] = (undefined2)local_44;
        if (local_48 != (undefined2 *)0x0) {
          local_48[1] = (undefined2)param_2;
        }
        *puVar1 = *(undefined2 *)((int)piVar14 + 0xe);
        puVar1[2] = (undefined2)param_2;
        puVar1[1] = (short)(piVar14[1] - iVar12 >> 3);
        *(undefined2 *)(piVar14[1] + 2) = uVar4;
        *puVar2 = (short)piVar14[2];
        puVar2[2] = uVar4;
      }
      else {
        if (*(short *)(iVar18 + 6) == 2) {
          uVar4 = *(undefined2 *)(iVar18 + 2);
          uVar16 = (uint)*(ushort *)(iVar18 + 2);
          iVar18 = iVar12;
        }
        else {
          uVar4 = (undefined2)*(undefined4 *)(param_4 + 8);
          uVar16 = *(uint *)(param_4 + 8);
          *(uint *)(param_4 + 8) = uVar16 + 1;
          iVar18 = *piVar15;
        }
        puVar1 = (undefined2 *)(iVar18 + uVar16 * 8);
        *puVar7 = *(undefined2 *)((int)piVar14 + 0xe);
        puVar7[2] = uVar4;
        puVar7[1] = (undefined2)local_44;
        if (local_48 != (undefined2 *)0x0) {
          local_48[1] = (undefined2)param_2;
        }
        *puVar1 = (short)piVar14[3];
        puVar1[2] = local_40;
        puVar1[1] = (short)(*piVar14 - iVar12 >> 3);
        *(undefined2 *)(*piVar14 + 2) = uVar4;
        *puVar2 = *(undefined2 *)*piVar14;
        puVar2[2] = (undefined2)param_2;
      }
      iVar17 = iVar17 + -0x10;
      local_34 = local_34 + -1;
      piVar13 = piVar14;
      local_48 = puVar2;
      local_44 = uVar10;
      uVar4 = local_40;
    } while (local_34 != 0);
  }
  local_44._0_2_ = uVar4;
  local_48[1] = (short)iVar8;
  *(undefined2 *)(iVar12 + 2 + iVar8 * 8) = (undefined2)local_44;
  piVar15 = *(int **)(iVar5 + 0x19c);
  piVar15[8] = local_20[3];
  if (local_20[3] == piVar15[10]) {
    (**(code **)(*piVar15 + 0x10))(local_20[3]);
  }
  if (-1 < local_20[2]) {
    FUN_008a75d0(local_20[0],(local_20[2] & 0x3fffffffU) << 1,0x14);
  }
  piVar15 = *(int **)(iVar5 + 0x19c);
  piVar15[8] = local_10[3];
  if (local_10[3] == piVar15[10]) {
    (**(code **)(*piVar15 + 0x10))(local_10[3]);
  }
  if (-1 < local_10[2]) {
    FUN_008a75d0(local_10[0],(local_10[2] & 0x3fffffffU) << 1,0x14);
  }
  return;
}



void FUN_00931fd0(undefined4 param_1,int *param_2,undefined4 param_3,ushort param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,int *param_8)

{
  int iVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  float10 fVar9;
  float local_10;
  
  if (param_2[2] != 1) {
    iVar4 = param_2[1];
    iVar5 = *param_2;
    puVar2 = (ushort *)(iVar4 + (uint)*(ushort *)(param_5 + 2) * 8);
    puVar8 = puVar2;
    do {
      if (*puVar8 == param_4) {
        local_10 = 4.0;
      }
      else {
        fVar9 = (float10)FUN_0092d8f0(param_1,(uint)*puVar8 * 0x10 + iVar5,param_3,param_6,param_7);
        local_10 = (float)fVar9;
      }
      iVar6 = param_8[1];
      iVar1 = iVar6 + 1;
      if ((int)(param_8[2] & 0x3fffffffU) < iVar1) {
        iVar7 = (param_8[2] & 0x3fffffffU) * 2;
        if (iVar7 <= iVar1) {
          iVar7 = iVar1;
        }
        FUN_008a6e40(param_8,iVar7,8);
      }
      puVar3 = (undefined4 *)(*param_8 + iVar6 * 8);
      param_8[1] = iVar1;
      *puVar3 = puVar8;
      puVar3[1] = local_10;
      puVar8 = (ushort *)(iVar4 + (uint)*(ushort *)(iVar4 + 2 + (uint)puVar8[2] * 8) * 8);
    } while (puVar8 != puVar2);
    if (1 < param_8[1]) {
      FUN_0092cc50(*param_8,0,param_8[1] + -1,&LAB_0092ca50);
    }
    FUN_00931240(param_1,param_2,param_3,param_5,param_6,param_7,param_8);
  }
  return;
}



void FUN_009320f0(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint extraout_ECX;
  int *piVar5;
  int *piVar6;
  int local_14;
  int local_10;
  char local_8 [4];
  char local_4 [4];
  
  local_10 = 0;
  if (0 < param_3[1]) {
    local_14 = 0;
    do {
      param_4[1] = 0;
      piVar5 = (int *)(*param_3 + local_14);
      if ((param_4[2] & 0x3fffffffU) == 0) {
        FUN_008a6e40(param_4,1,0x10);
      }
      piVar2 = (int *)*param_4;
      param_4[1] = 1;
      *piVar2 = *piVar5;
      piVar2[1] = piVar5[1];
      for (piVar2 = (int *)piVar5[2]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
        if (((*piVar2 == *piVar5) && (piVar2[1] == piVar5[1])) && (piVar2[3] == piVar5[3])) {
          FUN_009316c0(local_8,param_1,*(undefined4 *)(param_2 + 4),
                       CONCAT31((int3)((uint)piVar2[1] >> 8),1),param_4);
          FUN_009316c0(local_4,param_2,*(undefined4 *)(param_1 + 4),extraout_ECX & 0xffffff00,
                       param_4);
          if ((local_8[0] != '\0') && (local_4[0] != '\0')) {
            return;
          }
        }
        iVar3 = param_4[1];
        iVar1 = iVar3 + 1;
        if ((int)(param_4[2] & 0x3fffffffU) < iVar1) {
          iVar4 = (param_4[2] & 0x3fffffffU) * 2;
          if (iVar4 <= iVar1) {
            iVar4 = iVar1;
          }
          FUN_008a6e40(param_4,iVar4,0x10);
        }
        param_4[1] = iVar1;
        piVar6 = (int *)(iVar3 * 0x10 + *param_4);
        *piVar6 = *piVar2;
        piVar6[1] = piVar2[1];
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + 0x14;
    } while (local_10 < param_3[1]);
  }
  param_4[1] = 0;
  return;
}



undefined4 FUN_00932250(int param_1,int *param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  char *pcVar10;
  undefined1 **ppuVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  undefined4 *puVar16;
  int iVar17;
  float *pfVar18;
  int unaff_FS_OFFSET;
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
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 **local_e44;
  int local_e14;
  int local_e0c;
  undefined1 local_e01;
  float local_e00;
  float fStack_dfc;
  float fStack_df8;
  float fStack_df4;
  int local_dec;
  int local_de8;
  float local_de4;
  float local_de0;
  float local_ddc;
  undefined4 local_dd8;
  undefined4 local_dd4;
  float local_dd0;
  float local_dcc [2];
  int local_dc4;
  float local_dc0;
  float fStack_dbc;
  float fStack_db8;
  float fStack_db4;
  float local_db0;
  float fStack_dac;
  float fStack_da8;
  float fStack_da4;
  float local_da0;
  float fStack_d9c;
  float fStack_d98;
  float fStack_d94;
  float local_d90;
  float fStack_d8c;
  float fStack_d88;
  float fStack_d84;
  undefined1 *local_d80;
  undefined4 local_d7c;
  uint local_d78;
  undefined1 local_d74 [20];
  float local_d60;
  float fStack_d5c;
  float fStack_d58;
  float fStack_d54;
  undefined1 *local_d50;
  uint local_d4c;
  uint local_d48;
  undefined1 local_d44 [260];
  undefined1 *local_c40;
  undefined4 local_c3c;
  int local_c38;
  undefined1 local_c34 [516];
  undefined1 *local_a30;
  undefined4 local_a2c;
  int local_a28;
  undefined1 local_a24 [516];
  undefined1 *local_820;
  int local_81c;
  int local_818;
  undefined1 local_814 [2064];
  
  *param_4 = *param_2;
  pcVar10 = (char *)FUN_0092ce60(&local_e01,*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  if (*pcVar10 == '\0') {
    iVar1 = *param_2;
    local_d80 = local_d74;
    local_d78 = 0x80000001;
    local_d7c = 1;
    FUN_0092d6d0(param_2,param_3,local_d80,&local_dc0);
    local_db0 = local_dc0;
    fStack_da4 = fStack_db4;
    fStack_dac = fStack_dbc;
    local_d50 = local_d44;
    iVar17 = param_2[2] + 2 + param_3[2];
    local_dcc[0] = *(float *)(param_1 + 0x20);
    local_820 = local_814;
    local_dc4 = iVar17 * 3;
    fStack_da8 = fStack_db8;
    local_d4c = 0;
    local_81c = 0;
    local_d48 = 0x80000040;
    local_818 = -0x7fffff80;
    local_e0c = 0;
    local_dec = iVar17;
    if (0 < local_dc4) {
      iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      local_e44 = &local_d80;
      while( true ) {
        if ((iVar17 < local_e0c) && (local_dcc[0] = local_dcc[0] * 1.1, 1.0 < local_dcc[0])) {
          iVar17 = iVar17 + 1;
          local_dec = iVar17;
        }
        piVar3 = *(int **)(iVar2 + 0x19c);
        ppuVar11 = (undefined1 **)piVar3[8];
        if ((undefined1 **)piVar3[0xb] < ppuVar11 + 0x54) {
          ppuVar11 = (undefined1 **)(**(code **)(*piVar3 + 0xc))(0x150);
        }
        else {
          piVar3[8] = (int)(ppuVar11 + 0x54);
        }
        if (ppuVar11 != (undefined1 **)0x0) {
          *ppuVar11 = (undefined1 *)(ppuVar11 + 3);
          ppuVar11[1] = (undefined1 *)0x0;
          ppuVar11[2] = (undefined1 *)0x80000010;
        }
        if (local_d4c == (local_d48 & 0x3fffffff)) {
          FUN_008a6ee0(&local_d50,4);
        }
        *(undefined1 ***)(local_d50 + local_d4c * 4) = ppuVar11;
        local_d4c = local_d4c + 1;
        local_de8 = 0;
        if (0 < (int)local_e44[1]) {
          local_e14 = 0;
          do {
            puVar16 = (undefined4 *)(*local_e44 + local_e14);
            local_a30 = local_a24;
            local_a2c = 0;
            local_a28 = -0x7fffffc0;
            local_c3c = 0;
            local_c38 = -0x7fffffc0;
            local_c40 = local_c34;
            pfVar18 = (float *)((uint)*(ushort *)*puVar16 * 0x10 + iVar1);
            puVar4 = (undefined4 *)puVar16[2];
            pfVar15 = (float *)((uint)*(ushort *)puVar16[1] * 0x10 + iVar1);
            local_d60 = local_dc0;
            fStack_d5c = fStack_dbc;
            fStack_d58 = fStack_db8;
            fStack_d54 = fStack_db4;
            if (puVar4 != (undefined4 *)0x0) {
              pfVar12 = (float *)((uint)*(ushort *)*puVar4 * 0x10 + iVar1);
              pfVar13 = (float *)((uint)*(ushort *)puVar4[1] * 0x10 + iVar1);
              pfVar14 = pfVar15;
              if (pfVar12 != pfVar18) {
                pfVar14 = pfVar18;
              }
              local_dd4 = 0x40400000;
              local_e00 = *pfVar13 - *pfVar12;
              fStack_dfc = pfVar13[1] - pfVar12[1];
              fStack_df8 = pfVar13[2] - pfVar12[2];
              fVar24 = *pfVar14 - *pfVar12;
              fVar20 = fStack_dfc * fStack_dfc;
              fVar22 = fStack_df8 * fStack_df8;
              auVar27._4_4_ = fVar20;
              auVar27._0_4_ = fVar20;
              auVar27._8_4_ = fVar20;
              auVar27._12_4_ = fVar20;
              auVar28._4_12_ = auVar27._4_12_;
              auVar28._0_4_ = fVar20 + local_e00 * local_e00;
              fVar20 = pfVar14[1] - pfVar12[1];
              fVar21 = pfVar14[2] - pfVar12[2];
              auVar29._4_4_ = fVar22;
              auVar29._0_4_ = fVar22 + auVar28._0_4_;
              auVar29._8_4_ = fVar22;
              auVar29._12_4_ = fVar22;
              auVar29 = rsqrtss(auVar28,auVar29);
              fVar23 = auVar29._0_4_;
              local_dd8 = 0x3f000000;
              fStack_df4 = fVar23 * 0.5 * (3.0 - (fVar22 + auVar28._0_4_) * fVar23 * fVar23);
              local_e00 = fStack_df4 * local_e00;
              fStack_dfc = fStack_df4 * fStack_dfc;
              fStack_df8 = fStack_df4 * fStack_df8;
              fStack_df4 = fStack_df4 * (pfVar13[3] - pfVar12[3]);
              fVar22 = fVar20 * fVar20;
              fVar23 = fVar21 * fVar21;
              auVar36._4_4_ = fVar22;
              auVar36._0_4_ = fVar22;
              auVar36._8_4_ = fVar22;
              auVar36._12_4_ = fVar22;
              auVar37._4_12_ = auVar36._4_12_;
              auVar37._0_4_ = fVar22 + fVar24 * fVar24;
              auVar6._4_4_ = fVar23;
              auVar6._0_4_ = fVar23 + auVar37._0_4_;
              auVar6._8_4_ = fVar23;
              auVar6._12_4_ = fVar23;
              auVar29 = rsqrtss(auVar37,auVar6);
              fVar22 = auVar29._0_4_;
              fVar23 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar37._0_4_) * fVar22 * fVar22);
              fVar26 = fVar23 * (pfVar14[3] - pfVar12[3]);
              fVar22 = fStack_dfc * fVar23 * fVar21 - fStack_df8 * fVar23 * fVar20;
              fVar21 = fStack_df8 * fVar23 * fVar24 - local_e00 * fVar23 * fVar21;
              fVar24 = local_e00 * fVar23 * fVar20 - fStack_dfc * fVar23 * fVar24;
              local_dd0 = fVar24 * fVar24 + fVar21 * fVar21 + fVar22 * fVar22;
              fVar20 = fStack_df4 * fVar26 - fStack_df4 * fVar26;
              if (local_dd0 < 1e-06) {
                fVar23 = *pfVar14 - *pfVar13;
                fVar26 = pfVar14[1] - pfVar13[1];
                fVar25 = pfVar14[2] - pfVar13[2];
                fVar24 = fVar26 * fVar26;
                fVar20 = fVar25 * fVar25;
                auVar30._4_4_ = fVar24;
                auVar30._0_4_ = fVar24;
                auVar30._8_4_ = fVar24;
                auVar30._12_4_ = fVar24;
                auVar31._4_12_ = auVar30._4_12_;
                auVar31._0_4_ = fVar24 + fVar23 * fVar23;
                auVar7._4_4_ = fVar20;
                auVar7._0_4_ = fVar20 + auVar31._0_4_;
                auVar7._8_4_ = fVar20;
                auVar7._12_4_ = fVar20;
                auVar29 = rsqrtss(auVar31,auVar7);
                fVar24 = auVar29._0_4_;
                fVar19 = fVar24 * 0.5 * (3.0 - (fVar20 + auVar31._0_4_) * fVar24 * fVar24);
                fVar23 = fVar19 * fVar23;
                fVar26 = fVar19 * fVar26;
                fVar25 = fVar19 * fVar25;
                fVar19 = fVar19 * (pfVar14[3] - pfVar13[3]);
                fVar22 = fStack_dfc * fVar25 - fStack_df8 * fVar26;
                fVar21 = fStack_df8 * fVar23 - local_e00 * fVar25;
                fVar24 = local_e00 * fVar26 - fStack_dfc * fVar23;
                local_de0 = fVar24 * fVar24 + fVar21 * fVar21 + fVar22 * fVar22;
                fVar20 = fStack_df4 * fVar19 - fStack_df4 * fVar19;
                if (local_de0 < 1e-06) {
                  local_da0 = fVar23 + local_e00;
                  fStack_d9c = fVar26 + fStack_dfc;
                  fStack_d98 = fVar25 + fStack_df8;
                  fStack_d94 = fVar19 + fStack_df4;
                  local_d90 = local_e00 - fVar23;
                  fStack_d8c = fStack_dfc - fVar26;
                  fStack_d88 = fStack_df8 - fVar25;
                  fStack_d84 = fStack_df4 - fVar19;
                  auVar38._0_4_ = local_d90 * local_d90;
                  auVar38._4_4_ = fStack_d8c * fStack_d8c;
                  auVar38._8_4_ = fStack_d88 * fStack_d88;
                  auVar38._12_4_ = fStack_d84 * fStack_d84;
                  local_ddc = auVar38._8_4_ + auVar38._4_4_ + auVar38._0_4_;
                  fVar22 = local_db0;
                  fVar21 = fStack_dac;
                  fVar24 = fStack_da8;
                  fVar20 = fStack_da4;
                  if (1e-06 <= local_ddc) {
                    fVar23 = fStack_d9c * fStack_d9c;
                    fVar26 = fStack_d98 * fStack_d98;
                    local_de4 = fVar26 + fVar23 + local_da0 * local_da0;
                    if (1e-06 <= local_de4) {
                      auVar32._4_4_ = fVar23;
                      auVar32._0_4_ = fVar23;
                      auVar32._8_4_ = fVar23;
                      auVar32._12_4_ = fVar23;
                      auVar33._4_12_ = auVar32._4_12_;
                      auVar33._0_4_ = fVar23 + local_da0 * local_da0;
                      auVar8._4_4_ = fVar26;
                      auVar8._0_4_ = fVar26 + auVar33._0_4_;
                      auVar8._8_4_ = fVar26;
                      auVar8._12_4_ = fVar26;
                      auVar29 = rsqrtss(auVar33,auVar8);
                      fVar24 = auVar29._0_4_;
                      fVar24 = fVar24 * 0.5 * (3.0 - (fVar26 + auVar33._0_4_) * fVar24 * fVar24);
                      local_da0 = fVar24 * local_da0;
                      fStack_d9c = fVar24 * fStack_d9c;
                      fStack_d98 = fVar24 * fStack_d98;
                      fStack_d94 = fVar24 * fStack_d94;
                      fVar24 = auVar38._8_4_ + auVar38._4_4_ + auVar38._0_4_;
                      auVar9._4_4_ = auVar38._8_4_;
                      auVar9._0_4_ = fVar24;
                      auVar9._8_4_ = auVar38._8_4_;
                      auVar9._12_4_ = auVar38._8_4_;
                      auVar29 = rsqrtss(auVar38,auVar9);
                      fVar20 = auVar29._0_4_;
                      fVar24 = fVar20 * 0.5 * (3.0 - fVar24 * fVar20 * fVar20);
                      local_d90 = fVar24 * local_d90;
                      fStack_d8c = fVar24 * fStack_d8c;
                      fStack_d88 = fVar24 * fStack_d88;
                      fStack_d84 = fVar24 * fStack_d84;
                      fVar22 = fStack_d8c * fStack_d98 - fStack_d88 * fStack_d9c;
                      fVar21 = fStack_d88 * local_da0 - local_d90 * fStack_d98;
                      fVar24 = local_d90 * fStack_d9c - fStack_d8c * local_da0;
                      fVar20 = fStack_d84 * fStack_d94 - fStack_d84 * fStack_d94;
                    }
                  }
                }
              }
              fVar23 = fVar21 * fVar21;
              auVar34._8_4_ = fVar24 * fVar24;
              auVar39._4_4_ = fVar23;
              auVar39._0_4_ = fVar23;
              auVar39._8_4_ = fVar23;
              auVar39._12_4_ = fVar23;
              auVar40._4_12_ = auVar39._4_12_;
              auVar40._0_4_ = fVar23 + fVar22 * fVar22;
              auVar34._4_4_ = auVar34._8_4_;
              auVar34._0_4_ = auVar34._8_4_;
              auVar34._12_4_ = auVar34._8_4_;
              auVar35._4_12_ = auVar34._4_12_;
              auVar35._0_4_ = auVar34._8_4_ + auVar40._0_4_;
              auVar29 = rsqrtss(auVar40,auVar35);
              fVar23 = auVar29._0_4_;
              fVar23 = fVar23 * 0.5 * (3.0 - auVar35._0_4_ * fVar23 * fVar23);
              local_d60 = fVar23 * fVar22;
              fStack_d5c = fVar23 * fVar21;
              fStack_d58 = fVar23 * fVar24;
              fStack_d54 = fVar23 * fVar20;
            }
            local_db0 = local_d60;
            fStack_dac = fStack_d5c;
            fStack_da8 = fStack_d58;
            fStack_da4 = fStack_d54;
            FUN_00931fd0(param_1,param_2,&local_d60,*(undefined2 *)(puVar16 + 3),*puVar16,pfVar18,
                         pfVar15,&local_a30);
            FUN_00931fd0(param_1,param_3,&local_d60,*(undefined2 *)(puVar16 + 3),puVar16[1],pfVar18,
                         pfVar15,&local_c40);
            FUN_009313e0(param_1,*param_3,&local_d60,*(undefined2 *)(puVar16 + 3),puVar16,pfVar18,
                         pfVar15,&local_a30,&local_c40);
            FUN_0092ef10(local_dcc,puVar16,&local_a30,&local_c40,ppuVar11);
            if (-1 < local_c38) {
              FUN_008a75d0(local_c40,local_c38 << 3,0x14);
            }
            if (-1 < local_a28) {
              FUN_008a75d0(local_a30,local_a28 << 3,0x14);
            }
            local_de8 = local_de8 + 1;
            local_e14 = local_e14 + 0x14;
            iVar17 = local_dec;
          } while (local_de8 < (int)local_e44[1]);
        }
        if (1 < (int)ppuVar11[1]) {
          FUN_0092cab0(*ppuVar11,0,ppuVar11[1] + -1,&LAB_0092ca80);
        }
        FUN_009320f0(param_2,param_3,ppuVar11,&local_820);
        if (local_81c != 0) break;
        local_e0c = local_e0c + 1;
        local_e44 = ppuVar11;
      }
    }
    iVar17 = local_d4c - 1;
    if (-1 < iVar17) {
      iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      do {
        uVar5 = (*(undefined4 **)(local_d50 + iVar17 * 4))[2];
        if (-1 < (int)uVar5) {
          FUN_008a75d0(**(undefined4 **)(local_d50 + iVar17 * 4),(uVar5 & 0x3fffffff) * 0x14,0x14);
        }
        iVar2 = *(int *)(local_d50 + iVar17 * 4);
        piVar3 = *(int **)(iVar1 + 0x19c);
        piVar3[8] = iVar2;
        if (iVar2 == piVar3[10]) {
          (**(code **)(*piVar3 + 0x10))(iVar2);
        }
        iVar17 = iVar17 + -1;
      } while (-1 < iVar17);
    }
    local_d4c = 0;
    if (local_81c == 0) {
      if (-1 < local_818) {
        FUN_008a75d0(local_820,local_818 << 4,0x14);
      }
      if (-1 < (int)local_d48) {
        FUN_008a75d0(local_d50,local_d48 << 2,0x14);
      }
      if (-1 < (int)local_d78) {
        FUN_008a75d0(local_d80,(local_d78 & 0x3fffffff) * 0x14,0x14);
      }
      return 1;
    }
    FUN_00931b80(param_2,param_3,&local_820,param_4);
    if (-1 < local_818) {
      FUN_008a75d0(local_820,local_818 << 4,0x14);
    }
    if (-1 < (int)local_d48) {
      FUN_008a75d0(local_d50,local_d48 << 2,0x14);
    }
    if (-1 < (int)local_d78) {
      FUN_008a75d0(local_d80,(local_d78 & 0x3fffffff) * 0x14,0x14);
    }
  }
  return 0;
}



void FUN_00932d60(undefined4 param_1,int *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int iVar6;
  char local_844 [4];
  int local_840;
  undefined4 *local_83c;
  uint local_838;
  uint local_834;
  undefined4 local_830 [3];
  char local_824 [4];
  int local_820;
  int local_81c;
  int local_818;
  int local_814;
  int local_410;
  int local_40c;
  int local_408;
  int local_404;
  
  iVar6 = 0;
  local_840 = param_4 + 1;
  iVar2 = param_3;
  if (3 < local_840 - param_3) {
    pfVar4 = (float *)(param_3 * 0x10 + 0x1c + *param_2);
    iVar1 = ((local_840 - param_3) - 4U >> 2) + 1;
    iVar2 = param_3 + iVar1 * 4;
    do {
      iVar6 = iVar6 + (uint)(pfVar4[-4] == 0.0) + (uint)(*pfVar4 == 0.0) + (uint)(pfVar4[4] == 0.0)
              + (uint)(pfVar4[8] == 0.0);
      pfVar4 = pfVar4 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (iVar2 < local_840) {
    pfVar4 = (float *)(iVar2 * 0x10 + 0xc + *param_2);
    iVar2 = local_840 - iVar2;
    do {
      iVar6 = iVar6 + (uint)(*pfVar4 == 0.0);
      pfVar4 = pfVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (iVar6 < 4) {
    *param_5 = *param_2;
    puVar5 = local_830;
    uVar3 = 0x80000003;
    local_838 = 0;
    local_834 = 0x80000003;
    local_83c = puVar5;
    if (param_3 < local_840) {
      iVar2 = param_3 << 4;
      do {
        if (*(float *)(iVar2 + 0xc + *param_2) == 0.0) {
          if (local_838 == (uVar3 & 0x3fffffff)) {
            FUN_008a6ee0(&local_83c,4);
            puVar5 = local_83c;
          }
          puVar5[local_838] = param_3;
          local_838 = local_838 + 1;
          uVar3 = local_834;
          puVar5 = local_83c;
        }
        param_3 = param_3 + 1;
        iVar2 = iVar2 + 0x10;
      } while (param_3 < local_840);
    }
    if (iVar6 != 0) {
      if (iVar6 == 1) {
        FUN_00933810(*puVar5);
        uVar3 = local_834;
        puVar5 = local_83c;
      }
      else if (iVar6 == 2) {
        FUN_00933870(*puVar5,puVar5[1]);
        uVar3 = local_834;
        puVar5 = local_83c;
      }
      else {
        FUN_00933920(*puVar5,puVar5[1],puVar5[2]);
        uVar3 = local_834;
        puVar5 = local_83c;
      }
    }
    if (-1 < (int)uVar3) {
      FUN_008a75d0(puVar5,uVar3 << 2,0x14);
    }
  }
  else {
    iVar2 = (param_3 + param_4) / 2;
    FUN_00933d80();
    local_410 = *param_2;
    FUN_00933d80();
    local_820 = *param_2;
    local_844[0] = '\x01';
    do {
      do {
        local_408 = 0;
        FUN_00932d60(param_1,param_2,param_3,iVar2,&local_410);
        FUN_0092de30(&local_410,param_3,iVar2,param_1,local_844);
      } while (local_844[0] != '\0');
      local_844[0] = '\x01';
      do {
        local_818 = 0;
        FUN_00932d60(param_1,param_2,iVar2 + 1,param_4,&local_820);
        FUN_0092de30(&local_820,iVar2 + 1,param_4,param_1,local_844);
      } while (local_844[0] != '\0');
      local_824[0] = '\x01';
      FUN_0092de30(&local_410,param_3,param_4,param_1,local_824);
      local_840 = CONCAT31(local_840._1_3_,1);
      FUN_0092de30(&local_820,param_3,param_4,param_1,&local_840);
      if ((local_824[0] == '\0') && ((char)local_840 == '\0')) {
        local_844[0] = '\0';
      }
      else {
        local_844[0] = '\x01';
      }
    } while (local_844[0] != '\0');
    if (local_408 == 0) {
      iVar2 = 0;
      if (0 < local_818) {
        do {
          puVar5 = (undefined4 *)(local_81c + iVar2 * 8);
          if (param_5[2] == (param_5[3] & 0x3fffffffU)) {
            FUN_008a6ee0(param_5 + 1,8);
          }
          iVar6 = param_5[2];
          iVar1 = param_5[1];
          *(undefined4 *)(iVar1 + iVar6 * 8) = *puVar5;
          *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = puVar5[1];
          iVar2 = iVar2 + 1;
          param_5[2] = param_5[2] + 1;
        } while (iVar2 < local_818);
      }
    }
    else if (local_818 == 0) {
      iVar2 = 0;
      if (0 < local_408) {
        do {
          puVar5 = (undefined4 *)(local_40c + iVar2 * 8);
          if (param_5[2] == (param_5[3] & 0x3fffffffU)) {
            FUN_008a6ee0(param_5 + 1,8);
          }
          iVar6 = param_5[2];
          iVar1 = param_5[1];
          *(undefined4 *)(iVar1 + iVar6 * 8) = *puVar5;
          *(undefined4 *)(iVar1 + 4 + iVar6 * 8) = puVar5[1];
          iVar2 = iVar2 + 1;
          param_5[2] = param_5[2] + 1;
        } while (iVar2 < local_408);
      }
    }
    else {
      FUN_00932250(param_1,&local_410,&local_820,param_5);
    }
    if (param_5[2] == 0) {
      FUN_0092f1d0(&local_40c);
    }
    if (-1 < local_814) {
      FUN_008a75d0(local_81c,local_814 << 3,0x14);
    }
    if (-1 < local_404) {
      FUN_008a75d0(local_40c,local_404 << 3,0x14);
      return;
    }
  }
  return;
}



void FUN_00933240(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  int local_38;
  char local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  param_5[1] = 0;
  if (0 < param_3) {
    do {
      if (param_5[1] == (param_5[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_5,0x10);
      }
      puVar6 = (undefined4 *)(param_5[1] * 0x10 + *param_5);
      param_5[1] = param_5[1] + 1;
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      param_2 = param_2 + 4;
      param_3 = param_3 + -1;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
    } while (param_3 != 0);
  }
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_0092e860(param_5,local_20,local_30);
  }
  if (1 < param_5[1]) {
    FUN_0092b640(*param_5,0,param_5[1] + -1,&LAB_0092c9b0);
  }
  FUN_0092dca0(*(undefined4 *)(param_1 + 4),param_5,&local_38);
  if ((*(char *)(param_1 + 2) != '\0') && (local_38 < 300)) {
    FUN_0092fbd0(param_5,0x3a83126f);
  }
  local_38 = CONCAT31(local_38._1_3_,1);
  cVar8 = '\0';
  cVar5 = '\x01';
  while ((cVar8 == '\0' || (cVar5 != '\0'))) {
    local_34 = cVar5 == '\0';
    iVar7 = 0;
    if (0 < param_5[1]) {
      iVar9 = 0;
      do {
        *(undefined4 *)(iVar9 + 0xc + *param_5) = 0;
        iVar7 = iVar7 + 1;
        iVar9 = iVar9 + 0x10;
      } while (iVar7 < param_5[1]);
    }
    *(undefined4 *)(param_4 + 8) = 0;
    FUN_00932d60(param_1,param_5,0,param_5[1] + -1,param_4);
    FUN_00930fc0(param_4,param_5);
    FUN_0092eb50(param_5);
    FUN_0092de30(param_4,0,param_5[1] + -1,param_1,&local_38);
    FUN_0092eb50(param_5);
    cVar8 = local_34;
    cVar5 = (char)local_38;
  }
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_0092ea40(param_5,local_20,local_30);
  }
  return;
}



void FUN_009333b0(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 local_99;
  char local_98 [4];
  char local_94 [4];
  int local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [28];
  undefined1 local_44;
  undefined1 local_43;
  char local_42;
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
  
  local_42 = param_5 == 2;
  local_40 = 0x37a7c5ac;
  local_38 = 0x358637bd;
  local_34 = 0x3727c5ac;
  local_30 = 0x3d4ccccd;
  local_2c = 0x358637bd;
  local_28 = 0x358637bd;
  local_24 = 0x322bcc77;
  local_20 = 0x358637bd;
  local_1c = 0x38d1b717;
  local_18 = 0x3727c5ac;
  local_14 = 0x37a7c5ac;
  local_44 = 0;
  local_3c = 0x368637bd;
  local_43 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0x80000000;
  puVar8 = param_1;
  iVar9 = param_2;
  if (0 < param_2) {
    do {
      if (local_8c == (local_88 & 0x3fffffff)) {
        FUN_008a6ee0(&local_90,0x10);
      }
      uVar5 = local_8c;
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = puVar8[2];
      uVar4 = puVar8[3];
      puVar6 = (undefined4 *)(local_8c * 0x10 + local_90);
      local_8c = local_8c + 1;
      puVar8 = puVar8 + 4;
      iVar9 = iVar9 + -1;
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
    } while (iVar9 != 0);
    if (1 < (int)local_8c) {
      FUN_0092b640(local_90,0,uVar5,&LAB_0092c9b0);
    }
  }
  FUN_0092dca0(local_40,&local_90,local_94);
  local_84 = 0;
  local_80 = 0;
  *(undefined4 *)(param_4 + 4) = 0;
  local_7c = -0x80000000;
  FUN_00933240(&local_44,local_90,local_8c,param_3,param_4);
  pcVar7 = (char *)FUN_009515c0(&local_99,&local_44,local_90,local_8c,param_3,param_4);
  local_94[0] = *pcVar7;
  if (local_94[0] == '\0') {
    if (local_42 == '\0') goto LAB_009336e4;
    local_80 = 0;
    local_98[0] = '\0';
    local_6c = 0;
    local_68 = 0;
    local_64 = -0x80000000;
    FUN_00930040(&local_99,&local_44,param_3,param_4,local_60,local_98,&local_84,&local_6c);
    if (local_98[0] != '\0') {
      *(undefined4 *)(param_4 + 4) = 0;
      FUN_0092fbd0(&local_90,0x3a83126f);
      local_78 = 0;
      local_74 = 0;
      local_70 = -0x80000000;
      FUN_0092f270(local_60,local_90,local_8c,param_4,&local_78);
      pcVar7 = (char *)FUN_009515c0(&local_99,&local_44,param_1,param_2,param_3,param_4);
      local_94[0] = *pcVar7;
      if (-1 < local_70) {
        FUN_008a75d0(local_78,local_70 << 4,0x14);
      }
    }
    if (-1 < local_64) {
      FUN_008a75d0(local_6c,local_64 << 5,0x14);
    }
  }
  if (local_42 != '\0') {
    if (-1 < local_7c) {
      FUN_008a75d0(local_84,local_7c << 4,0x14);
    }
    if ((int)local_88 < 0) {
      return;
    }
    FUN_008a75d0(local_90,local_88 << 4,0x14);
    return;
  }
LAB_009336e4:
  local_43 = 1;
  if (local_94[0] == '\0') {
    local_44 = 1;
    FUN_00933240(&local_44,param_1,param_2,param_3,param_4);
    pcVar7 = (char *)FUN_009515c0(&local_99,&local_44,param_1,param_2,param_3,param_4);
    if (*pcVar7 == '\0') {
      local_3c = 0x3456bf95;
      FUN_00933240(&local_44,param_1,param_2,param_3,param_4);
      pcVar7 = (char *)FUN_009515c0(&local_99,&local_44,param_1,param_2,param_3,param_4);
      if (*pcVar7 == '\0') {
        local_14 = 0x358637bd;
        FUN_00933240(&local_44,param_1,param_2,param_3,param_4);
        FUN_009515c0(&local_99,&local_44,param_1,param_2,param_3,param_4);
      }
    }
  }
  if (-1 < local_7c) {
    FUN_008a75d0(local_84,local_7c << 4,0x14);
  }
  if (-1 < (int)local_88) {
    FUN_008a75d0(local_90,local_88 << 4,0x14);
  }
  return;
}



void FUN_00933810(ushort param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  local_4 = local_4 & 0xffff0000;
  local_8 = (uint)param_1;
  if (*(uint *)(in_ECX + 8) == (*(uint *)(in_ECX + 0xc) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 4),8);
  }
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = *(int *)(in_ECX + 4);
  *(uint *)(iVar2 + iVar1 * 8) = local_8;
  *(uint *)(iVar2 + 4 + iVar1 * 8) = local_4;
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  return;
}



void FUN_00933870(undefined2 param_1,ushort param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = (int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 8) = 0;
  local_4 = local_4 & 0xffff0000;
  local_10 = CONCAT22(1,param_1);
  local_c = CONCAT22(local_c._2_2_,1);
  local_8 = (uint)param_2;
  if (*(uint *)(in_ECX + 8) == (*(uint *)(in_ECX + 0xc) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,8);
  }
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *piVar1;
  *(undefined4 *)(iVar3 + iVar2 * 8) = local_10;
  *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = local_c;
  uVar4 = *(int *)(in_ECX + 8) + 1;
  *(uint *)(in_ECX + 8) = uVar4;
  if (uVar4 == (*(uint *)(in_ECX + 0xc) & 0x3fffffff)) {
    FUN_008a6ee0(piVar1,8);
  }
  iVar2 = *(int *)(in_ECX + 8);
  iVar3 = *piVar1;
  *(uint *)(iVar3 + iVar2 * 8) = local_8;
  *(uint *)(iVar3 + 4 + iVar2 * 8) = local_4;
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + 1;
  return;
}



void FUN_00933920(int param_1,uint param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auVar4 [16];
  float *pfVar5;
  float *pfVar6;
  int *in_ECX;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  in_ECX[2] = 0;
  iVar2 = *in_ECX;
  pfVar5 = (float *)(param_2 * 0x10 + iVar2);
  pfVar7 = (float *)(param_1 * 0x10 + iVar2);
  pfVar6 = (float *)(param_1 * 0x10 + iVar2);
  fVar17 = *pfVar5 - *pfVar7;
  fVar18 = pfVar5[1] - pfVar7[1];
  fVar19 = pfVar5[2] - pfVar7[2];
  fVar8 = fVar18 * fVar18;
  fVar9 = fVar19 * fVar19;
  fVar10 = fVar9 + fVar17 * fVar17 + (pfVar5[3] - pfVar7[3]) * (pfVar5[3] - pfVar7[3]) + fVar8;
  pfVar7 = (float *)(iVar2 + param_3 * 0x10);
  fVar20 = *pfVar7 - *pfVar5;
  fVar21 = pfVar7[1] - pfVar5[1];
  fVar22 = pfVar7[2] - pfVar5[2];
  auVar11._0_4_ = fVar20 * fVar20;
  auVar11._4_4_ = fVar21 * fVar21;
  auVar11._8_4_ = fVar22 * fVar22;
  auVar11._12_4_ = (pfVar7[3] - pfVar5[3]) * (pfVar7[3] - pfVar5[3]);
  fVar12 = auVar11._8_4_ + auVar11._0_4_ + auVar11._12_4_ + auVar11._4_4_;
  fVar13 = (pfVar6[2] - pfVar7[2]) * (pfVar6[2] - pfVar7[2]) +
           (*pfVar6 - *pfVar7) * (*pfVar6 - *pfVar7) +
           (pfVar6[3] - pfVar7[3]) * (pfVar6[3] - pfVar7[3]) +
           (pfVar6[1] - pfVar7[1]) * (pfVar6[1] - pfVar7[1]);
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar8;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar8;
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = fVar8 + fVar17 * fVar17;
  auVar16._4_4_ = fVar9;
  auVar16._0_4_ = fVar9 + auVar15._0_4_;
  auVar16._8_4_ = fVar9;
  auVar16._12_4_ = fVar9;
  auVar16 = rsqrtss(auVar15,auVar16);
  fVar8 = auVar16._0_4_;
  fVar24 = fVar8 * 0.5 * (3.0 - (fVar9 + auVar15._0_4_) * fVar8 * fVar8);
  fVar8 = auVar11._8_4_ + auVar11._4_4_ + auVar11._0_4_;
  auVar4._4_4_ = auVar11._8_4_;
  auVar4._0_4_ = fVar8;
  auVar4._8_4_ = auVar11._8_4_;
  auVar4._12_4_ = auVar11._8_4_;
  auVar16 = rsqrtss(auVar11,auVar4);
  fVar9 = auVar16._0_4_;
  fVar23 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  fVar8 = fVar23 * fVar20 - fVar24 * fVar17;
  fVar9 = fVar23 * fVar21 - fVar24 * fVar18;
  fVar17 = fVar23 * fVar22 - fVar24 * fVar19;
  if (1e-06 <= fVar17 * fVar17 + fVar9 * fVar9 + fVar8 * fVar8) {
    piVar1 = in_ECX + 1;
    local_30 = CONCAT22(1,(short)param_1);
    local_2c = CONCAT22(local_2c._2_2_,2);
    local_38 = param_2 & 0xffff;
    local_34 = CONCAT22(local_34._2_2_,5);
    local_40 = CONCAT22(3,(short)param_2);
    local_3c = CONCAT22(local_3c._2_2_,4);
    local_48 = CONCAT22(2,(short)param_3);
    local_44 = CONCAT22(local_44._2_2_,1);
    local_28 = CONCAT22(5,(short)param_3);
    local_24 = local_24 & 0xffff0000;
    local_20 = CONCAT22(4,(short)param_1);
    uStack_1c = CONCAT22((short)((uint)auVar11._8_4_ >> 0x10),3);
    if (in_ECX[2] == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = local_30;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = local_2c;
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1U;
    if (iVar2 + 1U == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(uint *)(iVar3 + iVar2 * 8) = local_38;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = local_34;
    in_ECX[2] = in_ECX[2] + 1;
    if (in_ECX[2] == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = local_40;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = local_3c;
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1U;
    if (iVar2 + 1U == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = local_48;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = local_44;
    iVar2 = in_ECX[2];
    in_ECX[2] = iVar2 + 1U;
    if (iVar2 + 1U == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = local_28;
    *(uint *)(iVar3 + 4 + iVar2 * 8) = local_24;
    in_ECX[2] = in_ECX[2] + 1;
    if (in_ECX[2] == (in_ECX[3] & 0x3fffffffU)) {
      FUN_008a6ee0(piVar1,8);
    }
    iVar2 = in_ECX[2];
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + iVar2 * 8) = local_20;
    *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = uStack_1c;
    in_ECX[2] = in_ECX[2] + 1;
  }
  else {
    fVar8 = fVar13;
    if (fVar13 < fVar12) {
      fVar8 = fVar12;
    }
    if (fVar8 < fVar10) {
      fVar8 = fVar10;
    }
    if (fVar10 == fVar8) {
      FUN_00933870(param_1,param_2);
      return;
    }
    if (fVar12 == fVar8) {
      FUN_00933870(param_2,param_3);
      return;
    }
    if (fVar13 == fVar8) {
      FUN_00933870(param_3,param_1);
      return;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00933daa) */

void FUN_00933d80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = in_ECX + 4;
  in_ECX[2] = 0;
  in_ECX[3] = 0x80000080;
  in_ECX[2] = 0;
  return;
}



void FUN_00933dd0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[0x14];
  *in_ECX = &PTR_FUN_00a9b2f4;
  if (iVar1 != 0) {
    FUN_008b44c0();
    (**(code **)(*DAT_00ba7d98 + 0x14))(iVar1,0x18,0x24);
    in_ECX[0x14] = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_00933e10(int *param_1,int *param_2)

{
  code *pcVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int local_18;
  int *local_14;
  
  local_14 = *(int **)*param_1;
  piVar3 = local_14 + 4;
  local_14 = (int *)(*local_14 + 0x10 + (int)local_14);
  local_18 = 4;
  do {
    piVar4 = piVar3;
    switch((char)*piVar3) {
    case '\0':
      piVar4 = (int *)((int)piVar3 + (uint)*(byte *)((int)piVar3 + 3));
      break;
    case '\x01':
      return;
    case '\x02':
    case '\x03':
    case '\x06':
      piVar2 = piVar3 + 4;
      goto LAB_00933e54;
    case '\x04':
    case '\x05':
      piVar2 = piVar3 + 8;
      piVar3[3] = -0x40800000;
      piVar3[4] = 0;
      piVar3[5] = 0;
      piVar3[6] = 0;
      piVar3[7] = 0;
LAB_00933e54:
      piVar4 = (int *)((int)piVar3 + (uint)*(byte *)((int)piVar3 + 3));
      pcVar1 = *(code **)((uint)*(byte *)((int)piVar3 + 1) * 0x34 + 0x16b0 + *param_2);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(piVar3,piVar2,param_2);
      }
    }
    piVar3 = piVar4;
    if (local_14 <= piVar3) {
      piVar3 = *(int **)(local_18 + *param_1);
      local_18 = local_18 + 4;
      local_14 = (int *)(*piVar3 + 0x10 + (int)piVar3);
      piVar3 = piVar3 + 4;
    }
  } while( true );
}



void FUN_00933ee0(int *param_1,float param_2,int param_3,int *param_4)

{
  int iVar1;
  code *pcVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_4;
  
  piVar3 = *(int **)*param_1;
  local_4 = 4;
  do {
    iVar1 = *piVar3;
    piVar5 = piVar3 + 4;
    do {
      piVar6 = piVar5;
      switch((char)*piVar5) {
      case '\0':
        piVar6 = (int *)((int)piVar5 + (uint)*(byte *)((int)piVar5 + 3));
        break;
      case '\x01':
        return;
      case '\x02':
      case '\x03':
      case '\x06':
        piVar4 = piVar5 + 4;
        goto LAB_00933f24;
      case '\x04':
      case '\x05':
        piVar4 = piVar5 + 8;
        if ((float)piVar5[3] == param_2) {
          piVar5[3] = param_3;
        }
        else {
          piVar5[3] = -0x40800000;
        }
LAB_00933f24:
        piVar6 = (int *)((int)piVar5 + (uint)*(byte *)((int)piVar5 + 3));
        pcVar2 = *(code **)((uint)*(byte *)((int)piVar5 + 1) * 0x34 + 0x16b4 + *param_4);
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(piVar5,piVar4,param_2,param_3,param_4);
        }
      }
      piVar5 = piVar6;
    } while (piVar6 < (int *)(iVar1 + 0x10 + (int)piVar3));
    piVar3 = *(int **)(local_4 + *param_1);
    local_4 = local_4 + 4;
  } while( true );
}



void FUN_00933fc0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *unaff_ESI;
  undefined4 *unaff_EDI;
  
  puVar1 = unaff_EDI + 8;
  FUN_008dd150(*(int *)(*unaff_ESI + 8) + 0x40,*(undefined4 *)(unaff_ESI[2] + 0x10),puVar1);
  puVar2 = unaff_EDI + 0x18;
  FUN_008dd150(*(int *)(unaff_ESI[1] + 8) + 0x40,*(undefined4 *)(unaff_ESI[2] + 0x10),puVar2);
  *param_1 = unaff_EDI;
  param_1[1] = unaff_EDI + 4;
  param_1[3] = unaff_ESI[3];
  param_1[2] = unaff_ESI[2];
  uVar3 = ((undefined4 *)*unaff_ESI)[1];
  *unaff_EDI = *(undefined4 *)*unaff_ESI;
  unaff_EDI[1] = uVar3;
  unaff_EDI[3] = *unaff_ESI;
  unaff_EDI[2] = puVar1;
  if (unaff_EDI + 4 != (undefined4 *)0x0) {
    unaff_EDI[7] = unaff_ESI[1];
    unaff_EDI[6] = puVar2;
  }
  FUN_008b1ff0(puVar1,puVar2);
  return;
}



void FUN_00934050(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined1 *puVar4;
  int iVar5;
  
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
  *(undefined2 *)(in_ECX + 8) = *(undefined2 *)(param_1 + 8);
  puVar4 = (undefined1 *)((int)in_ECX + 0x22);
  iVar5 = 0xe;
  do {
    *puVar4 = puVar4[(int)param_1 - (int)in_ECX];
    puVar4 = puVar4 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  return;
}



void FUN_00934100(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int unaff_FS_OFFSET;
  int local_4;
  
  piVar6 = *(int **)*param_1;
  piVar3 = (int *)(*piVar6 + 0x10 + (int)piVar6);
  local_4 = 4;
  do {
    piVar4 = piVar6 + 4;
    do {
      piVar5 = piVar4;
      switch((char)*piVar4) {
      case '\0':
        piVar5 = (int *)((int)piVar4 + (uint)*(byte *)((int)piVar4 + 3));
        break;
      case '\x01':
        iVar1 = *(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
        if (*(int *)(iVar1 + 0xa8) < *(int *)(iVar1 + 0x30)) {
          *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + 1;
          *piVar6 = *(int *)(iVar1 + 100);
          *(int **)(iVar1 + 100) = piVar6;
        }
        else {
          (**(code **)(*DAT_00ba7d98 + 0x1c))(piVar6,0xc,0x1c);
        }
        if (-1 < param_1[2]) {
          FUN_008a75d0(*param_1,param_1[2] << 2,0x14);
        }
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = param_1[2] & 0xc0000000U | 0x80000000;
        return;
      case '\x02':
      case '\x03':
      case '\x06':
        piVar2 = piVar4 + 4;
        goto LAB_00934134;
      case '\x04':
      case '\x05':
        piVar2 = piVar4 + 8;
LAB_00934134:
        piVar5 = (int *)((int)piVar4 + (uint)*(byte *)((int)piVar4 + 3));
        (**(code **)((uint)*(byte *)((int)piVar4 + 1) * 0x34 + 0x1698 + param_2))
                  (piVar4,piVar2,param_3);
      }
      piVar4 = piVar5;
    } while (piVar5 < piVar3);
    iVar1 = *(int *)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
    if (*(int *)(iVar1 + 0xa8) < *(int *)(iVar1 + 0x30)) {
      *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + 1;
      *piVar6 = *(int *)(iVar1 + 100);
      *(int **)(iVar1 + 100) = piVar6;
    }
    else {
      (**(code **)(*DAT_00ba7d98 + 0x1c))(piVar6,0xc,0x1c);
    }
    piVar6 = *(int **)(local_4 + *param_1);
    local_4 = local_4 + 4;
    piVar3 = (int *)(*piVar6 + 0x10 + (int)piVar6);
  } while( true );
}



void FUN_00934270(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_FS_OFFSET;
  
  param_1[1] = 0;
  if ((param_1[2] & 0x3fffffff) == 0) {
    FUN_008a6ee0(param_1,4);
  }
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  param_1[1] = param_1[1] + 1;
  iVar1 = *(int *)(*(int *)(iVar1 + _tls_index * 4) + 0x19c);
  puVar2 = *(undefined4 **)(iVar1 + 100);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x18))(0xc,0x1c);
  }
  else {
    *(int *)(iVar1 + 0xa8) = *(int *)(iVar1 + 0xa8) + -1;
    *(undefined4 *)(iVar1 + 100) = *puVar2;
  }
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
  }
  *(undefined4 **)*param_1 = puVar2;
  *(undefined1 *)((int)puVar2 + 0x13) = 0x10;
  *(undefined1 *)(puVar2 + 4) = 1;
  puVar2[6] = 0xffffffff;
  *puVar2 = 0x10;
  return;
}



void FUN_00934300(int *param_1,int *param_2,int *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  uint *puVar3;
  int iVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  float fVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  bool bVar17;
  short sVar18;
  uint *puVar19;
  int *piVar20;
  int iVar21;
  int iVar22;
  undefined4 *puVar23;
  uint *puVar24;
  undefined1 *puVar25;
  int iVar26;
  int unaff_FS_OFFSET;
  float fVar27;
  float fVar28;
  int local_868;
  int local_864;
  float local_860;
  undefined4 *local_858;
  uint *local_850;
  float local_840;
  float fStack_83c;
  float fStack_838;
  float fStack_834;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  uint uStack_824;
  int iStack_820;
  undefined4 uStack_814;
  ushort auStack_810 [256];
  undefined1 local_610 [512];
  short asStack_410 [256];
  undefined1 auStack_210 [524];
  
  puVar3 = (uint *)param_3[0xc10];
  iVar4 = *(int *)*param_1;
  local_864 = 0;
  puVar19 = puVar3 + 0x102;
  local_858 = (undefined4 *)0x0;
  local_850 = puVar19;
  if (puVar19 < (uint *)*puVar3) {
    do {
      pfVar5 = (float *)*puVar19;
      puVar6 = (uint *)puVar3[1];
      puVar24 = puVar3 + 2;
      asStack_410[(int)local_858] = -1;
      bVar17 = false;
      if (puVar24 < puVar6) {
        do {
          pfVar7 = (float *)*puVar24;
          if (pfVar5 != pfVar7) {
            fVar8 = *(float *)(iVar4 + 0xc);
            fVar27 = pfVar5[4] * pfVar7[4];
            fVar28 = pfVar5[5] * pfVar7[5];
            fStack_834 = pfVar5[6] * pfVar7[6];
            local_840 = pfVar5[4] * (*pfVar7 - *pfVar5) + pfVar5[5] * (pfVar7[1] - pfVar5[1]) +
                        pfVar5[6] * (pfVar7[2] - pfVar5[2]);
            fStack_83c = pfVar7[4] * (*pfVar7 - *pfVar5) + pfVar7[5] * (pfVar7[1] - pfVar5[1]) +
                         pfVar7[6] * (pfVar7[2] - pfVar5[2]);
            fStack_838 = fVar27 + fVar28 + fStack_834;
            fStack_834 = fVar27 + fVar28 + fStack_834;
            fVar27 = (fStack_838 - 1.0) * fVar8;
            local_860 = -fStack_83c + fVar27;
            if ((local_860 <= fVar8) && ((fStack_838 <= 0.9999 || (*(short *)(pfVar7 + 8) != -1))))
            {
              if ((*(short *)(pfVar7 + 8) != -1) ||
                 (((0.8 <= fStack_838 || (0.1 <= fVar27 + local_840 + local_860)) ||
                  (fVar8 * -2.0 <= pfVar7[7] + pfVar5[7])))) {
                fVar8 = 0.0;
                if (*(short *)(pfVar7 + 8) != -1) {
                  fVar8 = **(float **)(param_1[2] + 0x28) * 0.05;
                }
                if (pfVar5[7] < pfVar7[7] - fVar8 == (pfVar5[7] == pfVar7[7] - fVar8))
                goto LAB_0093454c;
              }
              else {
                bVar17 = true;
              }
            }
          }
          puVar24 = puVar24 + 1;
        } while (puVar24 < (uint *)puVar3[1]);
        if (bVar17) {
          auStack_810[local_864] = (ushort)local_858;
          local_864 = local_864 + 1;
        }
      }
      uVar9 = local_850[1];
      uStack_82c = (**(code **)(*param_2 + 0x28))(*(undefined4 *)(uVar9 + 8),local_610);
      iStack_820 = param_1[1];
      uStack_824 = *(uint *)(iStack_820 + 8);
      uStack_828 = *(undefined4 *)(uVar9 + 8);
      sVar18 = (**(code **)(*(int *)param_1[3] + 8))(*param_1,&uStack_82c,param_1[2],*local_858);
      asStack_410[(int)local_858] = sVar18;
      if (sVar18 != -1) {
        (**(code **)(*(int *)param_1[3] + 0xc))(0xffffffff);
      }
LAB_0093454c:
      local_858 = (undefined4 *)((int)local_858 + 1);
      puVar19 = puVar19 + 3;
      local_850 = local_850 + 3;
    } while (puVar19 < (uint *)*puVar3);
  }
  iVar4 = *(int *)param_1[2];
  iVar26 = 0;
  if (0 < local_864) {
    do {
      (**(code **)((uint)*(byte *)(puVar3[(auStack_810[iVar26] + 0x56) * 3 + 1] + 1) * 0x34 + 0x16a8
                  + iVar4))
                (puVar3[(auStack_810[iVar26] + 0x56) * 3 + 1],
                 puVar3[(auStack_810[iVar26] + 0x56) * 3 + 2],0xffff);
      iVar26 = iVar26 + 1;
    } while (iVar26 < local_864);
  }
  if (1 < local_864) {
    iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    do {
      if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
        iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        puVar10 = *(undefined4 **)(iVar26 + 0x1a4);
        *puVar10 = "TtConflicts";
        uVar13 = rdtsc();
        puVar10[1] = (int)uVar13;
        *(undefined4 **)(iVar26 + 0x1a4) = puVar10 + 3;
      }
      fVar8 = 2.0;
      local_860 = 0.0;
      local_868 = 1;
      iVar26 = 0;
      if (0 < local_864) {
        do {
          uVar9 = puVar3[(auStack_810[iVar26] + 0x56) * 3];
          iVar21 = iVar26 + 1;
          if (iVar21 < local_864) {
            iVar22 = iVar21;
            do {
              uVar11 = puVar3[(auStack_810[iVar22] + 0x56) * 3];
              fVar27 = *(float *)(uVar9 + 0x18) * *(float *)(uVar11 + 0x18) +
                       *(float *)(uVar9 + 0x14) * *(float *)(uVar11 + 0x14) +
                       *(float *)(uVar9 + 0x10) * *(float *)(uVar11 + 0x10);
              if (fVar27 < fVar8) {
                fVar8 = fVar27;
                local_868 = iVar22;
                local_860 = (float)iVar26;
              }
              iVar22 = iVar22 + 1;
            } while (iVar22 < local_864);
          }
          iVar26 = iVar21;
        } while (iVar21 < local_864);
      }
      puVar1 = auStack_810 + (int)local_860;
      uVar2 = *puVar1;
      local_860 = (float)puVar3[(auStack_810[local_868] + 0x56) * 3 + 1];
      fVar8 = (float)(puVar3 + (uVar2 + 0x56) * 3)[1];
      piVar12 = *(int **)*param_1;
      iVar26 = (**(code **)(*piVar12 + 8))();
      if ((*(uint *)(*(int *)param_1[2] + 0x10c + iVar26 * 4) >> 1 & 1) == 0) break;
      piVar20 = (int *)(**(code **)(*param_2 + 0x28))(*(undefined4 *)((int)fVar8 + 8),local_610);
      iVar26 = (**(code **)(*piVar20 + 8))();
      if ((*(uint *)(*(int *)param_1[2] + 0x10c + iVar26 * 4) >> 1 & 1) == 0) break;
      piVar20 = (int *)(**(code **)(*param_2 + 0x28))
                                 (*(undefined4 *)((int)local_860 + 8),auStack_210);
      iVar26 = (**(code **)(*piVar20 + 8))();
      if ((*(uint *)(*(int *)param_1[2] + 0x10c + iVar26 * 4) >> 1 & 1) == 0) break;
      uStack_824 = puVar3[(uVar2 + 0x56) * 3];
      iStack_820 = *piVar20;
      local_840 = fVar8;
      fStack_83c = local_860;
      FUN_00952c90(*(undefined4 *)(*param_1 + 8),piVar12,&local_840,2,param_1 + 4,&uStack_824);
      auStack_810[local_868] = auStack_810[local_864 + -1];
      iVar26 = local_864 + -2;
      local_864 = local_864 + -2;
      *puVar1 = auStack_810[iVar26];
      iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar26 + 0x1a4) < *(uint *)(iVar26 + 0x1a8)) {
        iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        puVar10 = *(undefined4 **)(iVar26 + 0x1a4);
        *puVar10 = &DAT_00a9610c;
        uVar13 = rdtsc();
        uStack_814 = (undefined4)uVar13;
        puVar10[1] = uStack_814;
        *(undefined4 **)(iVar26 + 0x1a4) = puVar10 + 3;
      }
    } while (1 < local_864);
  }
  if (local_864 != 0) {
    sVar18 = asStack_410[auStack_810[0]];
    if (sVar18 != -1) {
      (**(code **)(*(int *)param_1[3] + 0x10))(sVar18);
      iVar4 = *(int *)param_1[3];
      asStack_410[auStack_810[0]] = -1;
      (**(code **)(iVar4 + 0xc))(1);
    }
  }
  iVar4 = *(int *)param_1[2];
  iVar26 = ((int)*puVar3 + (-0x408 - (int)puVar3)) / 0xc;
  piVar12 = (int *)*puVar3;
  while (iVar26 = iVar26 + -1, -1 < iVar26) {
    sVar18 = asStack_410[iVar26];
    piVar20 = piVar12 + -3;
    if (sVar18 == -1) {
      (**(code **)(*(int *)param_1[3] + 0xc))(0xffffffff);
      (**(code **)((uint)*(byte *)(piVar12[-2] + 1) * 0x34 + 0x16a0 + (int)local_860))
                (piVar12[-2],piVar12[-1],0xffff);
      iVar21 = *param_3;
      puVar23 = (undefined4 *)(iVar21 + -0x30);
      *param_3 = (int)puVar23;
      puVar10 = (undefined4 *)*piVar20;
      uVar14 = *(undefined4 *)(iVar21 + -0x2c);
      uVar15 = *(undefined4 *)(iVar21 + -0x28);
      uVar16 = *(undefined4 *)(iVar21 + -0x24);
      *puVar10 = *puVar23;
      puVar10[1] = uVar14;
      puVar10[2] = uVar15;
      puVar10[3] = uVar16;
      uVar14 = *(undefined4 *)(iVar21 + -0x1c);
      uVar15 = *(undefined4 *)(iVar21 + -0x18);
      uVar16 = *(undefined4 *)(iVar21 + -0x14);
      puVar10[4] = *(undefined4 *)(iVar21 + -0x20);
      puVar10[5] = uVar14;
      puVar10[6] = uVar15;
      puVar10[7] = uVar16;
      *(undefined2 *)(puVar10 + 8) = *(undefined2 *)(iVar21 + -0x10);
      puVar25 = (undefined1 *)((int)puVar10 + 0x22);
      iVar21 = 0xe;
      do {
        *puVar25 = puVar25[(int)puVar23 - (int)puVar10];
        puVar25 = puVar25 + 1;
        iVar21 = iVar21 + -1;
        piVar12 = piVar20;
      } while (iVar21 != 0);
    }
    else {
      (**(code **)((uint)*(byte *)(piVar12[-2] + 1) * 0x34 + 0x16a4 + iVar4))
                (piVar12[-2],piVar12[-1],sVar18);
      *(short *)(*piVar20 + 0x20) = sVar18;
      piVar12 = piVar20;
    }
  }
  return;
}



void FUN_00934990(int *param_1,int *param_2,code *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int unaff_FS_OFFSET;
  int *local_25c;
  int *local_258;
  int local_254;
  int local_250;
  int *local_24c;
  int *local_248;
  int local_240;
  int *local_23c;
  undefined4 local_238;
  int *piStack_234;
  int *local_230;
  int local_22c;
  int local_228;
  undefined4 *local_224;
  int local_220;
  int local_21c;
  int local_218;
  int local_214;
  undefined1 local_210 [524];
  
  local_22c = param_2[1];
  local_230 = *(int **)(local_22c + 8);
  local_248 = *(int **)*param_1;
  local_23c = (int *)(*local_248 + 0x10 + (int)local_248);
  local_240 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  iVar7 = *(int *)(local_240 + 0x19c);
  local_25c = *(int **)(iVar7 + 100);
  local_250 = 1;
  local_254 = 0;
  local_24c = (int *)0x0;
  if (local_25c == (int *)0x0) {
    local_25c = (int *)(**(code **)(*DAT_00ba7d98 + 0x18))(0xc,0x1c);
  }
  else {
    *(int *)(iVar7 + 0xa8) = *(int *)(iVar7 + 0xa8) + -1;
    *(int *)(iVar7 + 100) = *local_25c;
  }
  piVar9 = local_248 + 4;
  if (local_25c == (int *)0x0) {
    local_25c = (int *)0x0;
    piVar8 = (int *)0x10;
  }
  else {
    *local_25c = 0;
    piVar8 = local_25c + 4;
  }
  do {
    local_258 = (int *)(uint)(*(byte *)((int)piVar9 + 3) >> 4);
    if (-1 < (int)((int)local_258 - 1U)) {
      piVar6 = piVar9 + 3;
      piVar2 = piVar8 + 2;
      do {
        piVar2[-2] = piVar6[-3];
        piVar2[-1] = piVar6[-2];
        *piVar2 = *(int *)(((int)piVar9 - (int)piVar8) + (int)piVar2);
        piVar2[1] = *piVar6;
        piVar6 = piVar6 + 4;
        piVar2 = piVar2 + 4;
        local_258 = (int *)((int)local_258 - 1);
      } while (local_258 != (int *)0x0);
    }
    local_258 = (int *)((int)piVar9 + (uint)*(byte *)((int)piVar9 + 3));
    local_228 = *param_2;
    piVar9 = (int *)piVar9[2];
    local_224 = (undefined4 *)param_2[1];
    local_220 = param_2[2];
    local_21c = param_2[3];
    local_218 = param_2[4];
    local_214 = param_2[5];
    iVar7 = 0x10;
    switch((char)*piVar8) {
    case '\x01':
      piVar8 = piVar8 + 4;
      break;
    case '\x04':
      iVar7 = 0x20;
    case '\x02':
    case '\x06':
      local_238 = (**(code **)(*(int *)param_2[2] + 0x28))(piVar9,local_210);
      piStack_234 = piVar9;
    case '\0':
      local_228 = *param_2;
      local_224 = &local_238;
      piVar8 = (int *)(*param_3)(&local_228,piVar8,iVar7 + (int)piVar8);
      break;
    case '\x05':
      iVar7 = 0x20;
    case '\x03':
      local_240 = (**(code **)(*(int *)param_2[2] + 0x28))(piVar9,local_210);
      local_22c = *param_2;
      local_230 = &local_240;
      local_23c = piVar9;
      piVar8 = (int *)(*param_3)(&local_230,piVar8,iVar7 + (int)piVar8);
    }
    if (local_258 == local_23c) {
      if (local_24c != (int *)0x0) {
        iVar7 = *(int *)(local_240 + 0x19c);
        if (*(int *)(iVar7 + 0xa8) < *(int *)(iVar7 + 0x30)) {
          *(int *)(iVar7 + 0xa8) = *(int *)(iVar7 + 0xa8) + 1;
          *local_24c = *(int *)(iVar7 + 100);
          *(int **)(iVar7 + 100) = local_24c;
        }
        else {
          (**(code **)(*DAT_00ba7d98 + 0x1c))(local_24c,0xc,0x1c);
        }
      }
      local_24c = local_248;
      if (param_1[1] <= local_250) {
        *local_25c = (int)piVar8 + (-0x10 - (int)local_25c);
        iVar7 = local_254 + 1;
        if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
          iVar3 = (param_1[2] & 0x3fffffffU) * 2;
          if (iVar3 <= iVar7) {
            iVar3 = iVar7;
          }
          FUN_008a6e40(param_1,iVar3,4);
        }
        param_1[1] = iVar7;
        *(int **)(*param_1 + local_254 * 4) = local_25c;
        if (local_248 != (int *)0x0) {
          iVar7 = *(int *)(local_240 + 0x19c);
          if (*(int *)(iVar7 + 0xa8) < *(int *)(iVar7 + 0x30)) {
            *(int *)(iVar7 + 0xa8) = *(int *)(iVar7 + 0xa8) + 1;
            *local_248 = *(int *)(iVar7 + 100);
            *(int **)(iVar7 + 100) = local_248;
            return;
          }
          (**(code **)(*DAT_00ba7d98 + 0x1c))(local_248,0xc,0x1c);
        }
        return;
      }
      local_248 = *(int **)(*param_1 + local_250 * 4);
      local_258 = local_248 + 4;
      local_23c = (int *)(*local_248 + 0x10 + (int)local_248);
      local_250 = local_250 + 1;
    }
    piVar6 = local_24c;
    iVar7 = (int)piVar8 + (-0x10 - (int)local_25c);
    piVar9 = local_258;
    if (0x1a0 < (int)((uint)*(byte *)((int)local_258 + 3) + iVar7)) {
      *local_25c = iVar7;
      if (local_250 <= local_254) {
        iVar7 = param_1[1] + 1;
        iVar3 = param_1[1] - local_250;
        if ((int)(param_1[2] & 0x3fffffffU) < iVar7) {
          iVar4 = (param_1[2] & 0x3fffffffU) * 2;
          if (iVar4 <= iVar7) {
            iVar4 = iVar7;
          }
          FUN_008a6e40(param_1,iVar4,4);
        }
        iVar1 = *param_1 + local_250 * 4;
        iVar4 = iVar1 + 4;
        if (-1 < iVar3 + -1) {
          puVar5 = (undefined4 *)(iVar4 + (iVar3 + -1) * 4);
          do {
            *puVar5 = *(undefined4 *)((iVar1 - iVar4) + (int)puVar5);
            puVar5 = puVar5 + -1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_250 = local_250 + 1;
        param_1[1] = iVar7;
      }
      *(int **)(*param_1 + local_254 * 4) = local_25c;
      local_254 = local_254 + 1;
      local_25c = local_24c;
      if (local_24c == (int *)0x0) {
        iVar7 = *(int *)(local_240 + 0x19c);
        local_25c = *(int **)(iVar7 + 100);
        if (local_25c == (int *)0x0) {
          local_25c = (int *)(**(code **)(*DAT_00ba7d98 + 0x18))(0xc,0x1c);
        }
        else {
          *(int *)(iVar7 + 0xa8) = *(int *)(iVar7 + 0xa8) + -1;
          *(int *)(iVar7 + 100) = *local_25c;
        }
        if (local_25c == (int *)0x0) {
          local_25c = (int *)0x0;
          piVar8 = (int *)0x10;
        }
        else {
          *local_25c = 0;
          piVar8 = local_25c + 4;
        }
      }
      else {
        local_24c = (int *)0x0;
        piVar8 = piVar6 + 4;
      }
    }
  } while( true );
}



void FUN_00934da0(undefined4 param_1,undefined4 param_2)

{
  FUN_00934990(param_1,param_2,&LAB_00934090);
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00934dc0(int *param_1,uint *param_2,int *param_3,undefined4 *param_4,undefined4 param_5,
                 uint *param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  float fVar7;
  bool bVar8;
  bool bVar9;
  byte bVar10;
  char cVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  byte *pbVar18;
  char cVar19;
  char *pcVar20;
  int iVar21;
  float *pfVar22;
  int unaff_FS_OFFSET;
  bool bVar23;
  uint *puVar24;
  byte *local_15c0;
  uint local_15b4;
  byte *local_15ac;
  byte *pbStack_15a8;
  undefined4 *local_15a4;
  undefined1 local_15a0 [8];
  undefined4 local_1598;
  uint local_1594;
  int local_1590;
  int local_158c;
  int local_1588;
  float fStack_1584;
  uint local_1580;
  int *local_157c;
  undefined4 uStack_1578;
  byte *local_1574;
  float fStack_1570;
  undefined4 uStack_156c;
  uint uStack_1568;
  undefined4 uStack_1564;
  float fStack_1560;
  float fStack_1558;
  undefined4 uStack_1554;
  undefined1 auStack_1550 [72];
  undefined1 auStack_1508 [8];
  undefined1 auStack_1500 [72];
  undefined1 auStack_14b8 [8];
  uint uStack_14b0;
  uint uStack_14ac;
  uint uStack_14a8;
  uint uStack_14a4;
  float fStack_1460;
  float fStack_1450;
  float fStack_144c;
  float fStack_1448;
  undefined4 *puStack_1444;
  undefined4 uStack_1398;
  undefined4 *puStack_1394;
  undefined1 auStack_1308 [8];
  uint uStack_1300;
  uint uStack_12fc;
  uint uStack_12f8;
  uint uStack_12f4;
  uint uStack_12a0;
  uint uStack_129c;
  uint uStack_1298;
  uint uStack_1294;
  uint uStack_1290;
  uint uStack_128c;
  uint uStack_1238;
  uint uStack_1234;
  uint uStack_1230;
  uint uStack_122c;
  undefined1 local_1220 [520];
  undefined1 *local_1018;
  undefined1 *local_1014;
  undefined1 local_1010 [1024];
  undefined1 local_c10 [3068];
  undefined4 uStack_14;
  
  uStack_14 = 0x934dd0;
  local_1580 = param_6[0xc10];
  if ((local_1580 == 0) && ((char)param_3[3] == '\0')) {
    local_1018 = local_c10;
    local_1014 = local_1010;
    param_6[0xc10] = (uint)&local_1018;
  }
  else {
    param_6[0xc10] = 0;
  }
  iVar21 = *(int *)param_2[2];
  local_1594 = param_2[1];
  local_1598 = *(undefined4 *)(local_1594 + 8);
  param_2[1] = (uint)local_15a0;
  local_157c = *(int **)*param_1;
  local_15ac = (byte *)(local_157c + 4);
  local_1574 = (byte *)(*local_157c + 0x10 + (int)local_157c);
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  iVar13 = *(int *)(iVar2 + 0x19c);
  puVar17 = *(undefined4 **)(iVar13 + 100);
  local_1588 = 0;
  local_1590 = 1;
  local_158c = 0;
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x18))(0xc,0x1c);
  }
  else {
    *(int *)(iVar13 + 0xa8) = *(int *)(iVar13 + 0xa8) + -1;
    *(undefined4 *)(iVar13 + 100) = *puVar17;
  }
  if (puVar17 == (undefined4 *)0x0) {
    puVar17 = (undefined4 *)0x0;
  }
  else {
    *puVar17 = 0;
  }
  bVar9 = false;
  bVar8 = false;
  do {
    pcVar20 = (char *)(puVar17 + 4);
    local_15a4 = puVar17;
    do {
      cVar19 = (char)pcVar20;
      pcVar14 = pcVar20;
      if (param_4 == (undefined4 *)0x0) {
        local_15b4 = (uint)(local_15ac[3] >> 4);
        local_15c0 = local_15ac;
        if (-1 < (int)(local_15b4 - 1)) {
          pbVar18 = local_15ac + 0xc;
          pcVar12 = pcVar20 + 8;
          do {
            *(undefined4 *)(pcVar12 + -8) = *(undefined4 *)(pbVar18 + -0xc);
            *(undefined4 *)(pcVar12 + -4) = *(undefined4 *)(pbVar18 + -8);
            *(undefined4 *)pcVar12 = *(undefined4 *)(pcVar12 + ((int)local_15ac - (int)pcVar20));
            *(undefined4 *)(pcVar12 + 4) = *(undefined4 *)pbVar18;
            pbVar18 = pbVar18 + 0x10;
            pcVar12 = pcVar12 + 0x10;
            local_15b4 = local_15b4 - 1;
          } while (local_15b4 != 0);
        }
        puVar17 = *(undefined4 **)(local_15ac + 8);
        local_15ac = local_15ac + local_15ac[3];
LAB_00935198:
        switch(*pcVar20) {
        case '\x02':
          pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
          local_15a4 = puVar17;
          pcVar14 = (char *)(**(code **)(local_15c0 + (uint)(byte)pcVar20[1] * 0x34 + 0x16bc))
                                      (param_2,pcVar20,pcVar20 + 0x10,0,param_6);
          pcVar20[3] = (char)pcVar14 - cVar19;
          break;
        case '\x03':
          uStack_12fc = *param_2;
          uStack_1300 = param_2[1];
          uStack_12f8 = param_2[2];
          uStack_1294 = param_2[0x1b];
          uStack_12f4 = param_2[3];
          uStack_12a0 = param_2[0x18] ^ 0x80000000;
          uStack_129c = param_2[0x19] ^ 0x80000000;
          uStack_1298 = param_2[0x1a] ^ 0x80000000;
          FUN_008b1f10(param_2 + 4);
          pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
          uStack_1578 = param_6[0xc0d];
          pfVar22 = (float *)*param_6;
          local_15a4 = puVar17;
          pcVar14 = (char *)(**(code **)(local_15c0 + (uint)(byte)pcVar20[1] * 0x34 + 0x16bc))
                                      (auStack_1308,pcVar20,pcVar20 + 0x10,0,param_6);
          pcVar20[3] = (char)pcVar14 - cVar19;
          if (pfVar22 < (float *)*param_6) {
            do {
              fVar7 = pfVar22[7];
              *pfVar22 = *pfVar22 + fVar7 * pfVar22[4];
              pfVar22[1] = pfVar22[1] + fVar7 * pfVar22[5];
              pfVar22[2] = pfVar22[2] + fVar7 * pfVar22[6];
              pfVar22[3] = pfVar22[3] + fVar7 * pfVar22[7];
              pfVar22[4] = -pfVar22[4];
              pfVar22[5] = -pfVar22[5];
              pfVar22[6] = -pfVar22[6];
              pfVar22[7] = pfVar22[7];
              pfVar22 = pfVar22 + 0xc;
            } while (pfVar22 < (float *)*param_6);
          }
          if (fStack_1570 != (float)param_6[0xc0d]) {
            param_6[8] = param_6[8] ^ 0x80000000;
            param_6[9] = param_6[9] ^ 0x80000000;
            param_6[10] = param_6[10] ^ 0x80000000;
            param_6[0xb] = param_6[0xb];
          }
          break;
        case '\x04':
          uVar5 = param_2[2];
          if (*(float *)(pcVar20 + 0xc) == *(float *)(uVar5 + 0x10)) {
LAB_00935850:
            *(undefined4 *)(pcVar20 + 0xc) = *(undefined4 *)(param_2[2] + 0x14);
            fStack_1584 = (float)param_2[0x19] * *(float *)(pcVar20 + 0x14) +
                          (float)param_2[0x18] * *(float *)(pcVar20 + 0x10) +
                          (float)param_2[0x1a] * *(float *)(pcVar20 + 0x18) + (float)param_2[0x1b];
            fVar7 = *(float *)(pcVar20 + 0x1c) - fStack_1584;
            if (*(float *)(param_2[2] + 8) <= fVar7) {
              *(float *)(pcVar20 + 0x1c) = fVar7;
              if (pcVar20[2] == '\0') {
                pcVar14 = pcVar20 + (byte)pcVar20[3];
                local_1588 = local_1588 + 1;
              }
              else {
                pcVar14 = (char *)(**(code **)((uint)(byte)pcVar20[1] * 0x34 + 0x169c + iVar21))
                                            (pcVar20,pcVar20 + 0x20,param_2[3]);
                pcVar20[3] = (char)pcVar14 - cVar19;
                local_1588 = local_1588 + 1;
              }
              break;
            }
          }
          else {
            iVar13 = *(int *)(uVar5 + 0x28);
            if (*(char *)(iVar13 + 0x10) != '\0') {
              iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
              if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
                puVar4 = *(undefined4 **)(iVar2 + 0x1a4);
                *puVar4 = "TtrecalcT0";
                uVar6 = rdtsc();
                uStack_156c = (undefined4)uVar6;
                puVar4[1] = uStack_156c;
                *(undefined4 **)(iVar2 + 0x1a4) = puVar4 + 3;
              }
              if (!bVar9) {
                bVar9 = true;
                FUN_00933fc0(auStack_1550);
              }
              uStack_1398 = (**(code **)(*param_3 + 0x28))(puVar17,local_1220);
              puStack_1394 = puVar17;
              (**(code **)(pcVar20 + ((uint)(byte)pcVar20[1] * 0xd + 0x5ae) * 4))
                        (&fStack_1558,pcVar20 + 0x20,pcVar20 + 0x10);
              iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
              if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
                puVar4 = *(undefined4 **)(iVar2 + 0x1a4);
                *puVar4 = &DAT_00a9610c;
                uVar6 = rdtsc();
                uStack_1564 = (undefined4)uVar6;
                puVar4[1] = uStack_1564;
                *(undefined4 **)(iVar2 + 0x1a4) = puVar4 + 3;
              }
              goto LAB_00935850;
            }
            *(undefined4 *)(pcVar20 + 0xc) = *(undefined4 *)(uVar5 + 0x14);
            fVar7 = *(float *)(iVar13 + 0x14) * 0.1;
            pcVar20[0x10] = '\0';
            pcVar20[0x11] = '\0';
            pcVar20[0x12] = '\0';
            pcVar20[0x13] = '\0';
            pcVar20[0x14] = '\0';
            pcVar20[0x15] = '\0';
            pcVar20[0x16] = '\0';
            pcVar20[0x17] = '\0';
            pcVar20[0x18] = '\0';
            pcVar20[0x19] = '\0';
            pcVar20[0x1a] = '\0';
            pcVar20[0x1b] = '\0';
            pcVar20[0x1c] = '\0';
            pcVar20[0x1d] = '\0';
            pcVar20[0x1e] = '\0';
            pcVar20[0x1f] = '\0';
            *(float *)(pcVar20 + 0x1c) = fVar7;
          }
          param_2[0x14] = (uint)fVar7;
          pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
          local_15a4 = puVar17;
          pcVar14 = (char *)(**(code **)(pcVar20 + ((uint)(byte)pcVar20[1] * 0xd + 0x5af) * 4))
                                      (param_2,pcVar20,pcVar20 + 0x20,pcVar20 + 0x10,param_6);
          pcVar20[3] = (char)pcVar14 - cVar19;
          break;
        case '\x05':
          uStack_14ac = *param_2;
          uStack_14b0 = param_2[1];
          uStack_14a8 = param_2[2];
          puStack_1444 = (undefined4 *)param_2[0x1b];
          uStack_14a4 = param_2[3];
          fStack_1450 = -(float)param_2[0x18];
          fStack_144c = -(float)param_2[0x19];
          fStack_1448 = -(float)param_2[0x1a];
          FUN_008b1f10(param_2 + 4);
          if (*(float *)(pcVar20 + 0xc) == *(float *)(uStack_14a8 + 0x10)) {
LAB_00935607:
            *(undefined4 *)(pcVar20 + 0xc) = *(undefined4 *)(uStack_14a8 + 0x14);
            fStack_1558 = fStack_144c * *(float *)(pcVar20 + 0x14) +
                          fStack_1450 * *(float *)(pcVar20 + 0x10) +
                          fStack_1448 * *(float *)(pcVar20 + 0x18) + (float)puStack_1444;
            fVar7 = *(float *)(pcVar20 + 0x1c) - fStack_1558;
            if (*(float *)(uStack_14a8 + 8) <= fVar7) {
              *(float *)(pcVar20 + 0x1c) = fVar7;
              if (pcVar20[2] == '\0') {
                pcVar14 = pcVar20 + (byte)pcVar20[3];
                local_1588 = local_1588 + 1;
              }
              else {
                pcVar14 = (char *)(**(code **)((uint)(byte)pcVar20[1] * 0x34 + 0x169c + iVar21))
                                            (pcVar20,pcVar20 + 0x20,uStack_14a4);
                pcVar20[3] = (char)pcVar14 - cVar19;
                local_1588 = local_1588 + 1;
              }
              break;
            }
          }
          else {
            iVar13 = *(int *)(uStack_14a8 + 0x28);
            if (*(char *)(iVar13 + 0x10) != '\0') {
              iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
              if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
                puVar4 = *(undefined4 **)(iVar2 + 0x1a4);
                *puVar4 = "TtrecalcT0";
                uVar6 = rdtsc();
                uStack_1554 = (undefined4)uVar6;
                puVar4[1] = uStack_1554;
                *(undefined4 **)(iVar2 + 0x1a4) = puVar4 + 3;
              }
              if (!bVar8) {
                bVar8 = true;
                FUN_00933fc0(auStack_1500);
              }
              fStack_1448 = (float)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
              puStack_1444 = puVar17;
              (**(code **)(pcVar20 + ((uint)(byte)pcVar20[1] * 0xd + 0x5ae) * 4))
                        (auStack_1508,pcVar20 + 0x20,pcVar20 + 0x10);
              iVar13 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
              if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
                puVar4 = *(undefined4 **)(iVar2 + 0x1a4);
                *puVar4 = &DAT_00a9610c;
                uVar6 = rdtsc();
                uStack_1568 = (uint)uVar6;
                puVar4[1] = uStack_1568;
                *(undefined4 **)(iVar2 + 0x1a4) = puVar4 + 3;
              }
              goto LAB_00935607;
            }
            *(undefined4 *)(pcVar20 + 0xc) = *(undefined4 *)(uStack_14a8 + 0x14);
            fVar7 = *(float *)(iVar13 + 0x14) * 0.5;
            pcVar20[0x10] = '\0';
            pcVar20[0x11] = '\0';
            pcVar20[0x12] = '\0';
            pcVar20[0x13] = '\0';
            pcVar20[0x14] = '\0';
            pcVar20[0x15] = '\0';
            pcVar20[0x16] = '\0';
            pcVar20[0x17] = '\0';
            pcVar20[0x18] = '\0';
            pcVar20[0x19] = '\0';
            pcVar20[0x1a] = '\0';
            pcVar20[0x1b] = '\0';
            pcVar20[0x1c] = '\0';
            pcVar20[0x1d] = '\0';
            pcVar20[0x1e] = '\0';
            pcVar20[0x1f] = '\0';
            *(float *)(pcVar20 + 0x1c) = fVar7;
          }
          fStack_1460 = fVar7;
          pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
          uStack_1568 = param_6[0xc0d];
          pfVar22 = (float *)*param_6;
          local_15a4 = puVar17;
          pcVar14 = (char *)(**(code **)(pcVar20 + ((uint)(byte)pcVar20[1] * 0xd + 0x5af) * 4))
                                      (auStack_14b8,pcVar20,pcVar20 + 0x20,pcVar20 + 0x10,param_6);
          pcVar20[3] = (char)pcVar14 - cVar19;
          if (pfVar22 < (float *)*param_6) {
            do {
              fVar7 = pfVar22[7];
              *pfVar22 = *pfVar22 + fVar7 * pfVar22[4];
              pfVar22[1] = pfVar22[1] + fVar7 * pfVar22[5];
              pfVar22[2] = pfVar22[2] + fVar7 * pfVar22[6];
              pfVar22[3] = pfVar22[3] + fVar7 * pfVar22[7];
              pfVar22[4] = -pfVar22[4];
              pfVar22[5] = -pfVar22[5];
              pfVar22[6] = -pfVar22[6];
              pfVar22[7] = pfVar22[7];
              pfVar22 = pfVar22 + 0xc;
            } while (pfVar22 < (float *)*param_6);
          }
          if (fStack_1560 != (float)param_6[0xc0d]) {
            param_6[8] = param_6[8] ^ 0x80000000;
            param_6[9] = param_6[9] ^ 0x80000000;
            param_6[10] = param_6[10] ^ 0x80000000;
            param_6[0xb] = param_6[0xb];
          }
          break;
        case '\x06':
          pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
          local_15a4 = puVar17;
          (**(code **)(**(int **)(pcVar20 + 4) + 0x14))(*param_2,&pbStack_15a8,param_2[2],param_6);
        case '\0':
        case '\x01':
          pcVar14 = pcVar20 + 0x10;
        }
      }
      else {
        puVar17 = (undefined4 *)*param_4;
        if (*(undefined4 **)(local_15ac + 8) == puVar17) {
          local_15c0 = (byte *)(uint)(local_15ac[3] >> 4);
          pbVar18 = (byte *)((int)local_15c0 - 1U);
          if (-1 < (int)((int)local_15c0 - 1U)) {
            pbVar18 = local_15ac + 0xc;
            pbStack_15a8 = local_15ac + -(int)pcVar20;
            pcVar12 = pcVar20 + 8;
            do {
              *(undefined4 *)(pcVar12 + -8) = *(undefined4 *)(pbVar18 + -0xc);
              *(undefined4 *)(pcVar12 + -4) = *(undefined4 *)(pbVar18 + -8);
              *(undefined4 *)pcVar12 = *(undefined4 *)(pcVar12 + (int)pbStack_15a8);
              *(undefined4 *)(pcVar12 + 4) = *(undefined4 *)pbVar18;
              pbVar18 = pbVar18 + 0x10;
              pcVar12 = pcVar12 + 0x10;
              local_15c0 = (byte *)((int)local_15c0 - 1);
            } while (local_15c0 != (byte *)0x0);
            pbVar18 = (byte *)0x0;
          }
          local_15c0 = pbVar18;
          local_15ac = local_15ac + local_15ac[3];
LAB_00935194:
          param_4 = param_4 + 1;
          goto LAB_00935198;
        }
        if (puVar17 <= *(undefined4 **)(local_15ac + 8)) {
          local_15c0 = *(byte **)(param_2[1] + 0xc);
          pbStack_15a8 = *(byte **)(param_2[2] + 4);
          pcVar12 = (char *)(*(code *)**(undefined4 **)pbStack_15a8)
                                      ((int)&uStack_1578 + 3,param_2[2],*param_2,local_15c0,param_3,
                                       puVar17);
          if (*pcVar12 == '\0') {
            *(undefined4 **)(pcVar20 + 8) = puVar17;
            pcVar20[1] = '\0';
            pcVar20[2] = '\0';
            *pcVar20 = '\0';
            pcVar20[3] = '\x10';
          }
          else {
            pbStack_15a8 = (byte *)(**(code **)(*param_3 + 0x28))(puVar17,local_1220);
            *(undefined4 **)(pcVar20 + 8) = puVar17;
            piVar3 = *(int **)*param_2;
            uStack_1564 = CONCAT31(uStack_1564._1_3_,*(undefined1 *)(param_2[2] + 0xc));
            local_15a4 = puVar17;
            iVar13 = (**(code **)(*(int *)pbStack_15a8 + 8))();
            iVar15 = (**(code **)(*piVar3 + 8))();
            if ((char)uStack_1564 == '\0') {
              bVar10 = local_15c0[iVar15 * 0x20 + iVar13 + 0xe94];
            }
            else {
              bVar10 = local_15c0[iVar15 * 0x20 + iVar13 + 0x1294];
            }
            pcVar20[1] = bVar10;
            pcVar20[2] = '\0';
            bVar23 = *(int *)(local_15c0 + (uint)bVar10 * 0x34 + 0x16c4) == 2;
            puVar24 = param_2;
            if (bVar23) {
              uStack_1294 = *param_2;
              uStack_1298 = param_2[1];
              uStack_122c = param_2[0x1b];
              puVar24 = &uStack_1298;
              uStack_1290 = param_2[2];
              uStack_128c = param_2[3];
              uStack_1238 = param_2[0x18] ^ 0x80000000;
              uStack_1234 = param_2[0x19] ^ 0x80000000;
              uStack_1230 = param_2[0x1a] ^ 0x80000000;
              FUN_008b1f10(param_2 + 4);
            }
            bVar9 = false;
            bVar8 = false;
            iVar13 = (uint)(byte)pcVar20[1] * 0x34;
            if (*(int *)(local_15c0 + iVar13 + 0x16b8) == 0) {
              *pcVar20 = bVar23 + '\x02';
              cVar11 = (**(code **)(local_15c0 + iVar13 + 0x1694))(puVar24,pcVar20,pcVar20 + 0x10);
              pcVar20[3] = cVar11 - cVar19;
            }
            else {
              *pcVar20 = bVar23 + '\x04';
              pcVar20[0xc] = '\0';
              pcVar20[0xd] = '\0';
              pcVar20[0xe] = -0x80;
              pcVar20[0xf] = -0x41;
              pcVar20[0x10] = '\0';
              pcVar20[0x11] = '\0';
              pcVar20[0x12] = '\0';
              pcVar20[0x13] = '\0';
              pcVar20[0x14] = '\0';
              pcVar20[0x15] = '\0';
              pcVar20[0x16] = '\0';
              pcVar20[0x17] = '\0';
              pcVar20[0x18] = '\0';
              pcVar20[0x19] = '\0';
              pcVar20[0x1a] = '\0';
              pcVar20[0x1b] = '\0';
              pcVar20[0x1c] = '\0';
              pcVar20[0x1d] = '\0';
              pcVar20[0x1e] = '\0';
              pcVar20[0x1f] = '\0';
              cVar11 = (**(code **)(local_15c0 + iVar13 + 0x1694))(puVar24,pcVar20,pcVar20 + 0x20);
              pcVar20[3] = cVar11 - cVar19;
            }
          }
          goto LAB_00935194;
        }
        pbVar18 = local_15ac + 0x20;
        if ((*local_15ac & 0xe) != 4) {
          pbVar18 = local_15ac + 0x10;
        }
        bVar10 = local_15ac[3];
        (**(code **)((uint)local_15ac[1] * 0x34 + 0x1698 + iVar21))(local_15ac,pbVar18,param_2[3]);
        local_15ac = local_15ac + bVar10;
      }
      if (local_15ac == local_1574) {
        iVar13 = *(int *)(iVar2 + 0x19c);
        if (*(int *)(iVar13 + 0xa8) < *(int *)(iVar13 + 0x30)) {
          *(int *)(iVar13 + 0xa8) = *(int *)(iVar13 + 0xa8) + 1;
          *local_157c = *(int *)(iVar13 + 100);
          *(int **)(iVar13 + 100) = local_157c;
        }
        else {
          (**(code **)(*DAT_00ba7d98 + 0x1c))(local_157c,0xc,0x1c);
        }
        if (param_1[1] <= local_1590) {
          *local_15a4 = pcVar14 + (-0x10 - (int)local_15a4);
          iVar21 = local_158c + 1;
          if ((int)(param_1[2] & 0x3fffffffU) < iVar21) {
            iVar13 = (param_1[2] & 0x3fffffffU) * 2;
            if (iVar13 <= iVar21) {
              iVar13 = iVar21;
            }
            FUN_008a6e40(param_1,iVar13,4);
          }
          param_1[1] = iVar21;
          iVar15 = _tls_index;
          iVar21 = *(int *)(unaff_FS_OFFSET + 0x2c);
          *(undefined4 **)(*param_1 + local_158c * 4) = local_15a4;
          iVar13 = *(int *)(iVar21 + iVar15 * 4);
          if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
            puVar17 = *(undefined4 **)(iVar13 + 0x1a4);
            *puVar17 = "MinumTim";
            puVar17[1] = (float)local_1588;
            *(undefined4 **)(iVar13 + 0x1a4) = puVar17 + 2;
          }
          param_2[1] = local_1594;
          puVar24 = (uint *)param_6[0xc10];
          if (puVar24 != (uint *)0x0) {
            if ((uint *)*puVar24 <= puVar24 + 0x102) {
              param_6[0xc10] = local_1580;
              return;
            }
            iVar13 = *(int *)(iVar21 + iVar15 * 4);
            if (*(uint *)(iVar13 + 0x1a4) < *(uint *)(iVar13 + 0x1a8)) {
              puVar17 = *(undefined4 **)(iVar2 + 0x1a4);
              *puVar17 = "TtWelding";
              uVar6 = rdtsc();
              fStack_1584 = (float)uVar6;
              puVar17[1] = fStack_1584;
              *(undefined4 **)(iVar2 + 0x1a4) = puVar17 + 3;
            }
            FUN_00934300(param_2,param_3,param_6);
            iVar21 = *(int *)(iVar21 + iVar15 * 4);
            if (*(uint *)(iVar21 + 0x1a4) < *(uint *)(iVar21 + 0x1a8)) {
              puVar17 = *(undefined4 **)(iVar2 + 0x1a4);
              *puVar17 = &DAT_00a9610c;
              uVar6 = rdtsc();
              puVar17[1] = (int)uVar6;
              *(undefined4 **)(iVar2 + 0x1a4) = puVar17 + 3;
              param_6[0xc10] = local_1580;
              return;
            }
          }
          param_6[0xc10] = local_1580;
          return;
        }
        local_157c = *(int **)(*param_1 + local_1590 * 4);
        local_15ac = (byte *)(local_157c + 4);
        local_1574 = (byte *)(*local_157c + 0x10 + (int)local_157c);
        local_1590 = local_1590 + 1;
      }
      pcVar20 = pcVar14;
    } while ((int)(pcVar14 + (-0x10 - (int)local_15a4) + local_15ac[3]) < 0x1a1);
    *local_15a4 = pcVar14 + (-0x10 - (int)local_15a4);
    if (local_1590 <= local_158c) {
      iVar13 = param_1[1] + 1;
      iVar15 = param_1[1] - local_1590;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar13) {
        iVar16 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar16 <= iVar13) {
          iVar16 = iVar13;
        }
        FUN_008a6e40(param_1,iVar16,4);
      }
      iVar1 = *param_1 + local_1590 * 4;
      iVar16 = iVar1 + 4;
      if (-1 < iVar15 + -1) {
        puVar17 = (undefined4 *)(iVar16 + (iVar15 + -1) * 4);
        do {
          *puVar17 = *(undefined4 *)((iVar1 - iVar16) + (int)puVar17);
          puVar17 = puVar17 + -1;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      local_1590 = local_1590 + 1;
      param_1[1] = iVar13;
    }
    *(undefined4 **)(*param_1 + local_158c * 4) = local_15a4;
    local_158c = local_158c + 1;
    iVar13 = *(int *)(iVar2 + 0x19c);
    puVar17 = *(undefined4 **)(iVar13 + 100);
    if (puVar17 == (undefined4 *)0x0) {
      puVar17 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x18))(0xc,0x1c);
    }
    else {
      *(int *)(iVar13 + 0xa8) = *(int *)(iVar13 + 0xa8) + -1;
      *(undefined4 *)(iVar13 + 100) = *puVar17;
    }
    if (puVar17 == (undefined4 *)0x0) {
      puVar17 = (undefined4 *)0x0;
    }
    else {
      *puVar17 = 0;
    }
  } while( true );
}



void FUN_00935bb0(float *param_1)

{
  float fVar1;
  int in_ECX;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  
  fVar1 = param_1[7];
  fStack_24 = param_1[7];
  local_1c = param_1[8];
  local_20 = param_1[9];
  local_40 = *param_1 + fVar1 * param_1[4];
  fStack_3c = param_1[1] + fVar1 * param_1[5];
  fStack_38 = param_1[2] + fVar1 * param_1[6];
  fStack_34 = param_1[3] + fVar1 * fStack_24;
  local_30 = -param_1[4];
  fStack_2c = -param_1[5];
  fStack_28 = -param_1[6];
  (**(code **)(**(int **)(in_ECX + 8) + 4))(&local_40);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(*(int *)(in_ECX + 8) + 4);
  return;
}



void FUN_00935c20(float *param_1)

{
  float fVar1;
  int in_ECX;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float local_1c;
  
  fVar1 = param_1[7];
  local_1c = param_1[8];
  local_20 = param_1[9];
  local_40 = *param_1 + fVar1 * *(float *)(in_ECX + 0x10);
  fStack_3c = param_1[1] + fVar1 * *(float *)(in_ECX + 0x14);
  fStack_38 = param_1[2] + fVar1 * *(float *)(in_ECX + 0x18);
  fStack_34 = param_1[3] + fVar1 * *(float *)(in_ECX + 0x1c);
  fStack_24 = param_1[7];
  local_30 = -param_1[4];
  fStack_2c = -param_1[5];
  fStack_28 = -param_1[6];
  (**(code **)(**(int **)(in_ECX + 0x20) + 4))(&local_40);
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(*(int *)(in_ECX + 0x20) + 4);
  return;
}



void FUN_00935cc0(undefined4 *param_1,undefined4 *param_2,int *param_3,int *param_4,int *param_5)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int local_180;
  int local_17c;
  float local_178;
  int local_174;
  undefined **local_170;
  undefined4 local_16c;
  char local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  undefined4 *puStack_120;
  undefined4 *puStack_11c;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 *puStack_108;
  undefined4 *puStack_104;
  undefined **ppuStack_100;
  undefined4 uStack_fc;
  char cStack_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  undefined1 auStack_c0 [48];
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  local_180 = *param_3;
  local_17c = param_3[1];
  local_178 = (float)param_3[2] + (float)param_3[9];
  local_174 = param_3[3];
  local_170 = &PTR_LAB_00a9bb8c;
  local_168 = '\0';
  local_144 = 3.4028235e+38;
  local_16c = 0x7f7fffff;
  iVar2 = (**(code **)(*(int *)*param_1 + 8))();
  iVar3 = (**(code **)(*(int *)*param_2 + 8))();
  pcVar1 = *(code **)(*param_3 + 0x998 +
                     (uint)*(byte *)(iVar2 * 0x20 + *param_3 + 400 + iVar3) * 0x14);
  (*pcVar1)(param_1,param_2,&local_180,&local_170);
  if (local_168 != '\0') {
    puStack_120 = param_1;
    puStack_11c = param_2;
    fStack_130 = fStack_150;
    fStack_12c = fStack_14c;
    fStack_128 = fStack_148;
    fStack_124 = local_144;
    uStack_140 = uStack_160;
    uStack_13c = uStack_15c;
    uStack_138 = uStack_158;
    uStack_134 = uStack_154;
    if ((local_144 < (float)param_3[2]) && (param_5 != (int *)0x0)) {
      (**(code **)(*param_5 + 4))(&uStack_140);
    }
    fStack_d0 = (float)param_3[4];
    fStack_cc = (float)param_3[5];
    fStack_c8 = (float)param_3[6];
    fStack_c4 = (float)param_3[7];
    fVar4 = fStack_148 * fStack_c8 + fStack_14c * fStack_cc + fStack_150 * fStack_d0;
    fVar5 = local_144 + fVar4;
    if ((fVar5 <= 0.0) && (fVar4 + (float)param_3[8] < 0.0)) {
      if (local_144 < *(float *)param_3[10] == (local_144 == *(float *)param_3[10])) {
        fStack_124 = local_144 / (local_144 - fVar5);
        ppuStack_100 = &PTR_LAB_00a9bb8c;
        cStack_f8 = '\0';
        fStack_d4 = 3.4028235e+38;
        uStack_fc = 0x7f7fffff;
        FUN_00903fa0(param_1[2]);
        uStack_110 = *param_1;
        puStack_108 = auStack_c0;
        uStack_10c = param_1[1];
        iVar2 = *(int *)(param_3[10] + 4);
        puStack_104 = param_1;
        do {
          iVar2 = iVar2 + -1;
          if (iVar2 < 0) break;
          iVar3 = param_1[2];
          cStack_f8 = '\0';
          fStack_d4 = 3.4028235e+38;
          uStack_fc = 0x7f7fffff;
          fStack_90 = *(float *)(iVar3 + 0x30) + fStack_124 * fStack_d0;
          fStack_8c = *(float *)(iVar3 + 0x34) + fStack_124 * fStack_cc;
          fStack_88 = *(float *)(iVar3 + 0x38) + fStack_124 * fStack_c8;
          fStack_84 = *(float *)(iVar3 + 0x3c) + fStack_124 * fStack_c4;
          (*pcVar1)(&uStack_110,param_2,&local_180,&ppuStack_100);
          if (cStack_f8 == '\0') {
            return;
          }
          fStack_d0 = (float)param_3[4];
          fStack_cc = (float)param_3[5];
          fStack_c8 = (float)param_3[6];
          fStack_c4 = (float)param_3[7];
          fVar5 = fStack_d8 * fStack_c8 + fStack_dc * fStack_cc + fStack_e0 * fStack_d0;
          if (0.0 <= fVar5) {
            return;
          }
          fVar5 = -fVar5;
          if (fVar5 < fStack_124 * fVar5 + fStack_d4) {
            return;
          }
          fStack_124 = fStack_d4 / fVar5 + fStack_124;
          if ((float)param_4[1] < fStack_124) {
            return;
          }
          fStack_130 = fStack_e0;
          fStack_12c = fStack_dc;
          fStack_128 = fStack_d8;
          uStack_140 = uStack_f0;
          uStack_13c = uStack_ec;
          uStack_138 = uStack_e8;
          uStack_134 = uStack_e4;
        } while (fStack_d4 < *(float *)param_3[10] == (fStack_d4 == *(float *)param_3[10]));
        (**(code **)(*param_4 + 4))(&uStack_140);
        return;
      }
      if (local_144 <= 0.0) {
        fStack_124 = 0.0;
        (**(code **)(*param_4 + 4))(&uStack_140);
        return;
      }
      fStack_124 = local_144 / (local_144 - fVar5);
      if (fStack_124 <= (float)param_4[1]) {
        (**(code **)(*param_4 + 4))(&uStack_140);
        return;
      }
    }
  }
  return;
}



void FUN_00936050(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,int *param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float fVar3;
  float fVar4;
  undefined1 auStack_190 [16];
  undefined4 local_180;
  undefined4 local_17c;
  float local_178;
  undefined4 local_174;
  undefined **local_170;
  undefined4 local_16c;
  uint local_168;
  undefined4 uStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  undefined **ppuStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined4 local_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 *puStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined4 *puStack_114;
  undefined **ppuStack_110;
  undefined4 uStack_10c;
  undefined1 uStack_108;
  undefined **ppuStack_100;
  undefined4 uStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined1 auStack_d0 [48];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  
  local_180 = *param_3;
  local_17c = param_3[1];
  local_178 = (float)param_3[2] + (float)param_3[9];
  local_174 = param_3[3];
  local_170 = &PTR_LAB_00a9bb8c;
  local_168 = local_168 & 0xffffff00;
  local_144 = 0x7f7fffff;
  local_16c = 0x7f7fffff;
  (**(code **)(*in_ECX + 0xc))(param_1,param_2,&local_180,&local_170);
  if (local_178._0_1_ != '\0') {
    ppuStack_150 = local_170;
    uStack_14c = local_16c;
    uStack_148 = local_168;
    local_144 = uStack_164;
    puStack_130 = param_1;
    uStack_12c = param_2;
    fStack_140 = fStack_160;
    fStack_13c = fStack_15c;
    fStack_138 = fStack_158;
    fStack_134 = fStack_154;
    if ((fStack_154 < (float)param_3[2]) && (param_5 != (int *)0x0)) {
      (**(code **)(*param_5 + 4))(&ppuStack_150);
    }
    fStack_e0 = (float)param_3[4];
    fStack_dc = (float)param_3[5];
    fStack_d8 = (float)param_3[6];
    fStack_d4 = (float)param_3[7];
    fVar3 = fStack_158 * fStack_d8 + fStack_15c * fStack_dc + fStack_160 * fStack_e0;
    fVar4 = fStack_154 + fVar3;
    if ((fVar4 <= 0.0) && (fVar3 + (float)param_3[8] < 0.0)) {
      if (fStack_154 < *(float *)param_3[10] == (fStack_154 == *(float *)param_3[10])) {
        fStack_134 = fStack_154 / (fStack_154 - fVar4);
        ppuStack_110 = &PTR_LAB_00a9bb8c;
        uStack_108 = 0;
        fStack_e4 = 3.4028235e+38;
        uStack_10c = 0x7f7fffff;
        FUN_00903fa0(param_1[2]);
        uStack_120 = *param_1;
        puStack_118 = auStack_d0;
        uStack_11c = param_1[1];
        iVar1 = *(int *)(param_3[10] + 4);
        puStack_114 = param_1;
        do {
          iVar1 = iVar1 + -1;
          if (iVar1 < 0) break;
          iVar2 = param_1[2];
          uStack_108 = 0;
          fStack_e4 = 3.4028235e+38;
          uStack_10c = 0x7f7fffff;
          fStack_a0 = *(float *)(iVar2 + 0x30) + fStack_134 * fStack_e0;
          fStack_9c = *(float *)(iVar2 + 0x34) + fStack_134 * fStack_dc;
          fStack_98 = *(float *)(iVar2 + 0x38) + fStack_134 * fStack_d8;
          fStack_94 = *(float *)(iVar2 + 0x3c) + fStack_134 * fStack_d4;
          (**(code **)(*in_ECX + 0xc))(&uStack_120,param_2,auStack_190,&ppuStack_110);
          fStack_e0 = (float)param_3[4];
          fStack_dc = (float)param_3[5];
          fStack_d8 = (float)param_3[6];
          fStack_d4 = (float)param_3[7];
          fVar4 = fStack_e8 * fStack_d8 + fStack_ec * fStack_dc + fStack_f0 * fStack_e0;
          if (0.0 <= fVar4) {
            return;
          }
          fVar4 = -fVar4;
          if (fVar4 < fStack_134 * fVar4 + fStack_e4) {
            return;
          }
          fStack_134 = fStack_e4 / fVar4 + fStack_134;
          if ((float)param_4[1] < fStack_134) {
            return;
          }
          fStack_140 = fStack_f0;
          fStack_13c = fStack_ec;
          fStack_138 = fStack_e8;
          ppuStack_150 = ppuStack_100;
          uStack_14c = uStack_fc;
          uStack_148 = uStack_f8;
          local_144 = uStack_f4;
        } while (fStack_e4 < *(float *)param_3[10] == (fStack_e4 == *(float *)param_3[10]));
        (**(code **)(*param_4 + 4))(&ppuStack_150);
        return;
      }
      if (fStack_154 <= 0.0) {
        fStack_134 = 0.0;
        (**(code **)(*param_4 + 4))(&ppuStack_150);
        return;
      }
      fStack_134 = fStack_154 / (fStack_154 - fVar4);
      if (fStack_134 <= (float)param_4[1]) {
        (**(code **)(*param_4 + 4))(&ppuStack_150);
        return;
      }
    }
  }
  return;
}



void FUN_009363c0(int param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x22) = 0;
  *(undefined4 *)(in_ECX + param_1 * 4) =
       *(undefined4 *)(in_ECX + -4 + (uint)*(byte *)(in_ECX + 0x21) * 4);
  *(char *)(in_ECX + 0x21) = *(char *)(in_ECX + 0x21) + -1;
  return;
}



void FUN_009363e0(undefined1 *param_1,char *param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(byte *)(in_ECX + 0x21) - 1;
  if (-1 < iVar1) {
    do {
      if ((*(char *)(in_ECX + iVar1 * 4) == *param_2) &&
         (*(char *)(in_ECX + 1 + iVar1 * 4) == param_2[1])) {
        *param_1 = 1;
        return;
      }
      iVar1 = iVar1 + -1;
    } while (-1 < iVar1);
  }
  *param_1 = 0;
  return;
}



void FUN_00936420(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 0x1a) = 0;
  *(undefined2 *)(in_ECX + 0x1e) = 0;
  *(undefined1 *)(in_ECX + 0x21) = 0;
  *(undefined1 *)(in_ECX + 0x20) = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  return;
}



uint FUN_00936460(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  uint uVar4;
  int in_ECX;
  
  puVar2 = param_3;
  bVar1 = *(byte *)(in_ECX + 0x21);
  if (8 < bVar1) {
    return 0xffffffff;
  }
  pcVar3 = (char *)FUN_009363e0(&param_3,param_3);
  if ((*pcVar3 == '\0') && (uVar4 = (uint)bVar1, uVar4 < 8)) {
    *(undefined4 *)(in_ECX + uVar4 * 4) = *puVar2;
    *(char *)(in_ECX + 0x21) = *(char *)(in_ECX + 0x21) + '\x01';
    return uVar4;
  }
  return 0xffffffff;
}



void FUN_009364b0(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int in_EAX;
  uint uVar4;
  uint *unaff_EBX;
  int iVar5;
  
  uVar4 = in_EAX >> 4;
  bVar3 = ~(byte)uVar4 & 1;
  bVar1 = ~(byte)(uVar4 >> 1) & 1;
  bVar2 = ~(byte)(uVar4 >> 2) & 1;
  if (param_1 != 0) {
    iVar5 = 1 << (bVar1 + bVar2 * '\x02') * '\x02';
    if ((*unaff_EBX & iVar5 * 2) == 0) {
      *unaff_EBX = *unaff_EBX + iVar5;
    }
  }
  if (param_1 != 1) {
    iVar5 = 1 << ((bVar3 + 4 + bVar2 * '\x02') * '\x02' & 0x1f);
    if ((*unaff_EBX & iVar5 * 2) == 0) {
      *unaff_EBX = *unaff_EBX + iVar5;
    }
  }
  if (param_1 != 2) {
    iVar5 = 1 << ((bVar3 + 8 + bVar1 * '\x02') * '\x02' & 0x1f);
    if ((*unaff_EBX & iVar5 * 2) == 0) {
      *unaff_EBX = *unaff_EBX + iVar5;
    }
  }
  return;
}



void FUN_00936540(void)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *unaff_EDI;
  
  uVar1 = (int)in_EAX >> 4;
  uVar4 = ~(uVar1 >> 1) & 1;
  uVar2 = ~(uVar1 >> 2) & 1;
  if ((in_EAX & 0xf) == 0) {
    iVar3 = uVar4 + uVar2 * 2;
  }
  else if ((in_EAX & 0xf) == 1) {
    iVar3 = (~uVar1 & 1) + 4 + uVar2 * 2;
  }
  else {
    iVar3 = (~uVar1 & 1) + 8 + uVar4 * 2;
  }
  iVar3 = 1 << ((byte)(iVar3 << 1) & 0x1f);
  if ((*unaff_EDI & iVar3 * 2) == 0) {
    *unaff_EDI = *unaff_EDI + iVar3;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0093669c) */

void FUN_009365a0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int local_4;
  
  if (*(byte *)(param_1 + 0x21) < 3) {
    return;
  }
  if (3 < *(byte *)(param_1 + 0x20)) {
    *(undefined1 *)(param_1 + 0x22) = 1;
    return;
  }
  if ((param_2 >> 4 & 1U) == 0) {
    local_4 = 2 - (uint)((param_2 >> 4 & 2U) != 0);
  }
  else {
    local_4 = 0;
  }
  if ((param_3 >> 4 & 1U) == 0) {
    param_3 = 2 - (uint)((param_3 >> 4 & 2U) != 0);
  }
  else {
    param_3 = 0;
  }
  iVar2 = 0;
  if (*(byte *)(param_1 + 0x21) != 0) {
    do {
      bVar1 = *(byte *)(param_1 + iVar2 * 4);
      if (bVar1 < 3) {
        FUN_009364b0(param_3);
      }
      else if (bVar1 < 7) {
        FUN_009364b0(local_4);
      }
      else {
        FUN_00936540();
        FUN_00936540();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x21));
  }
  *(undefined1 *)(param_1 + 0x22) = 1;
  return;
}



void FUN_009366b0(float *param_1,float *param_2,uint *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  
  fVar1 = *param_2;
  auVar2._4_4_ = -(uint)(fVar1 < param_1[1]);
  auVar2._0_4_ = -(uint)(fVar1 < *param_1);
  auVar2._8_4_ = -(uint)(fVar1 < param_1[2]);
  auVar2._12_4_ = -(uint)(fVar1 < param_1[3]);
  uVar3 = movmskps(param_2,auVar2);
  *param_3 = uVar3 & 7;
  return;
}



void FUN_009366f0(float *param_1)

{
  *param_1 = 1.0 / SQRT(*param_1 + 1.1920929e-07);
  param_1[1] = 1.0 / SQRT(param_1[1] + 1.1920929e-07);
  param_1[2] = 1.0 / SQRT(param_1[2] + 1.1920929e-07);
  param_1[3] = 0.0;
  return;
}



void FUN_00936740(uint *param_1,uint *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  
  fVar1 = *param_4;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = param_3[3];
  uVar5 = *param_2;
  *param_1 = -(uint)(fVar1 < *param_3) & uVar5 | ~-(uint)(fVar1 < *param_3) & *param_1;
  param_1[1] = -(uint)(fVar1 < fVar2) & uVar5 | ~-(uint)(fVar1 < fVar2) & param_1[1];
  param_1[2] = -(uint)(fVar1 < fVar3) & uVar5 | ~-(uint)(fVar1 < fVar3) & param_1[2];
  param_1[3] = -(uint)(fVar1 < fVar4) & uVar5 | ~-(uint)(fVar1 < fVar4) & param_1[3];
  return;
}



void FUN_00936790(undefined4 *param_1,int param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 *in_EAX;
  undefined4 uVar3;
  undefined4 uVar4;
  byte *in_EDX;
  int unaff_EBX;
  undefined4 local_30 [4];
  undefined4 local_20 [7];
  
  local_30[0] = *param_1;
  local_30[1] = param_1[1];
  local_30[2] = param_1[2];
  local_30[3] = param_1[3];
  local_20[0] = *in_EAX;
  local_20[1] = in_EAX[1];
  local_20[2] = in_EAX[2];
  local_20[3] = in_EAX[3];
  local_30[param_2] = 0x3f800000;
  auVar1._4_4_ = local_30[1];
  auVar1._0_4_ = local_30[0];
  auVar1._8_4_ = local_30[2];
  auVar1._12_4_ = local_30[3];
  local_20[unaff_EBX] = 0x3f800000;
  uVar4 = movmskps(0x3f800000,auVar1);
  auVar2._4_4_ = local_20[1];
  auVar2._0_4_ = local_20[0];
  auVar2._8_4_ = local_20[2];
  auVar2._12_4_ = local_20[3];
  uVar3 = movmskps(param_2,auVar2);
  *in_EDX = ((byte)uVar4 | 0xf8) << 4 | (byte)param_2;
  in_EDX[1] = (~(byte)uVar3 & 7) * '\x10' + (char)unaff_EBX;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00936810(undefined1 *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int in_ECX;
  uint uVar6;
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
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_40 [4];
  float local_30 [5];
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  uVar7 = (uint)param_2[0xf] & 0xf;
  fVar13 = *(float *)(in_ECX + 0x70 + uVar7 * 4);
  uVar6 = (uint)param_2[0xe] & 0xf;
  fVar13 = fVar13 + fVar13;
  uVar5 = *(byte *)(param_2 + 0xe) & 0x70;
  fVar2 = *(float *)(&DAT_00aa1cc0 + uVar5);
  fVar3 = *(float *)(&UNK_00aa1cc4 + uVar5);
  fVar4 = *(float *)(&UNK_00aa1cc8 + uVar5);
  fVar12 = *(float *)(in_ECX + 0x60 + uVar6 * 4) * -2.0;
  local_40[0] = fVar2 * *(float *)(in_ECX + 0x60);
  local_40[1] = fVar3 * *(float *)(in_ECX + 100);
  local_40[2] = fVar4 * *(float *)(in_ECX + 0x68);
  local_40[3] = *(float *)(&UNK_00aa1ccc + uVar5) * *(float *)(in_ECX + 0x6c);
  uVar5 = *(byte *)(param_2 + 0xf) & 0x70;
  fVar14 = *(float *)(&DAT_00aa1cc0 + uVar5) * *(float *)(in_ECX + 0x70);
  fVar16 = *(float *)(&UNK_00aa1cc4 + uVar5) * *(float *)(in_ECX + 0x74);
  fVar17 = *(float *)(&UNK_00aa1cc8 + uVar5) * *(float *)(in_ECX + 0x78);
  pfVar1 = (float *)((uVar7 + 2) * 0x10 + in_ECX);
  fVar8 = fVar13 * *pfVar1;
  fVar9 = fVar13 * pfVar1[1];
  fVar11 = fVar13 * pfVar1[2];
  fVar13 = fVar13 * pfVar1[3];
  local_30[0] = fVar8;
  local_30[1] = fVar9;
  local_30[2] = fVar11;
  local_30[3] = fVar13;
  fVar15 = fVar12 * local_30[uVar6];
  fVar10 = *(float *)(in_ECX + 0x70 + uVar7 * 4);
  fVar10 = fVar10 * fVar10 * 4.0;
  fVar22 = (*(float *)(in_ECX + 0x20) * fVar14 + *(float *)(in_ECX + 0x30) * fVar16 +
           *(float *)(in_ECX + 0x40) * fVar17 + *(float *)(in_ECX + 0x50)) - local_40[0];
  fVar23 = (*(float *)(in_ECX + 0x24) * fVar14 + *(float *)(in_ECX + 0x34) * fVar16 +
           *(float *)(in_ECX + 0x44) * fVar17 + *(float *)(in_ECX + 0x54)) - local_40[1];
  fVar24 = (*(float *)(in_ECX + 0x28) * fVar14 + *(float *)(in_ECX + 0x38) * fVar16 +
           *(float *)(in_ECX + 0x48) * fVar17 + *(float *)(in_ECX + 0x58)) - local_40[2];
  fVar21 = fVar11 * fVar24 + fVar9 * fVar23 + fVar8 * fVar22;
  local_30[4] = fVar22;
  fStack_1c = fVar23;
  fStack_18 = fVar24;
  fStack_14 = (*(float *)(in_ECX + 0x2c) * fVar14 + *(float *)(in_ECX + 0x3c) * fVar16 +
              *(float *)(in_ECX + 0x4c) * fVar17 + *(float *)(in_ECX + 0x5c)) - local_40[3];
  fVar14 = ABS(fVar12 * fVar12 * fVar10 - fVar15 * fVar15);
  fVar16 = fVar12 * local_30[uVar6 + 4] * fVar10 - fVar21 * fVar15;
  if ((_DAT_00b3058c * fVar14 < fVar16) &&
     (fVar17 = (1.0 - _DAT_00b3058c) * fVar14, fVar17 < fVar16 == (fVar17 == fVar16))) {
    fVar21 = (fVar16 / fVar14) * fVar15 - fVar21;
    if ((fVar21 < _DAT_00b3058c * fVar10 == (fVar21 == _DAT_00b3058c * fVar10)) &&
       (fVar21 < (1.0 - _DAT_00b3058c) * fVar10)) {
      local_30[0] = 0.0;
      local_30[1] = 0.0;
      local_30[2] = 0.0;
      local_30[3] = 0.0;
      local_40[uVar6] = (fVar16 / fVar14) * fVar12 + local_40[uVar6];
      local_30[uVar6] = fVar12 * 0.5;
      fVar15 = local_30[1] * fVar11 - local_30[2] * fVar9;
      fVar14 = local_30[2] * fVar8 - local_30[0] * fVar11;
      fVar16 = local_30[0] * fVar9 - local_30[1] * fVar8;
      fVar10 = fVar14 * fVar14;
      fVar12 = fVar16 * fVar16;
      auVar18._4_4_ = fVar10;
      auVar18._0_4_ = fVar10;
      auVar18._8_4_ = fVar10;
      auVar18._12_4_ = fVar10;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar10 + fVar15 * fVar15;
      fVar10 = fVar12 + auVar19._0_4_;
      auVar20._4_4_ = fVar12;
      auVar20._0_4_ = fVar10;
      auVar20._8_4_ = fVar12;
      auVar20._12_4_ = fVar12;
      auVar20 = rsqrtss(auVar19,auVar20);
      fVar12 = auVar20._0_4_;
      fVar12 = fVar12 * 0.5 * (3.0 - fVar10 * fVar12 * fVar12);
      fVar15 = fVar12 * fVar15;
      fVar14 = fVar12 * fVar14;
      fVar16 = fVar12 * fVar16;
      fVar13 = fVar12 * (local_30[3] * fVar13 - local_30[3] * fVar13);
      if (*(float *)(in_ECX + 0xb4) <= fVar10 * fVar12) {
        if (fVar16 * fVar4 + fVar14 * fVar3 + fVar15 * fVar2 < 0.0) {
          fVar15 = -fVar15;
          fVar14 = -fVar14;
          fVar16 = -fVar16;
          fVar13 = -fVar13;
        }
        fVar10 = fVar16 * fVar24 + fVar14 * fVar23 + fVar15 * fVar22;
        if (fVar10 <= *(float *)(in_ECX + 0xb0)) {
          *param_2 = local_40[0];
          param_2[1] = local_40[1];
          param_2[2] = local_40[2];
          param_2[3] = local_40[3];
          param_2[0xd] = fVar10;
          param_2[8] = -fVar15;
          param_2[9] = -fVar14;
          param_2[10] = -fVar16;
          param_2[0xb] = -fVar13;
          *param_1 = 1;
          return;
        }
      }
    }
  }
  *param_1 = 0;
  return;
}



void FUN_00936b70(float *param_1,byte *param_2)

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
  int in_ECX;
  uint uVar16;
  
  param_1[0xe] = (float)(uint)*param_2;
  param_1[0xc] = (float)((param_2[1] & 0xfffffff8) << 0x1c | 0x3f800000);
  fVar1 = *(float *)(in_ECX + 0x74);
  fVar2 = *(float *)(in_ECX + 0x78);
  fVar3 = *(float *)(in_ECX + 0x7c);
  uVar16 = param_2[1] & 0x70;
  fVar4 = *(float *)(&UNK_00aa1cc4 + uVar16);
  fVar5 = *(float *)(&UNK_00aa1cc8 + uVar16);
  fVar6 = *(float *)(&UNK_00aa1ccc + uVar16);
  param_1[4] = *(float *)(in_ECX + 0x70) * *(float *)(&DAT_00aa1cc0 + uVar16);
  param_1[5] = fVar1 * fVar4;
  param_1[6] = fVar2 * fVar5;
  param_1[7] = fVar3 * fVar6;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = *(float *)(in_ECX + 0x54);
  fVar5 = *(float *)(in_ECX + 0x58);
  fVar6 = *(float *)(in_ECX + 0x5c);
  fVar7 = *(float *)(in_ECX + 0x44);
  fVar8 = *(float *)(in_ECX + 0x48);
  fVar9 = *(float *)(in_ECX + 0x4c);
  fVar10 = *(float *)(in_ECX + 0x34);
  fVar11 = *(float *)(in_ECX + 0x38);
  fVar12 = *(float *)(in_ECX + 0x3c);
  fVar13 = *(float *)(in_ECX + 0x24);
  fVar14 = *(float *)(in_ECX + 0x28);
  fVar15 = *(float *)(in_ECX + 0x2c);
  *param_1 = *(float *)(in_ECX + 0x20) * fVar1 + *(float *)(in_ECX + 0x30) * fVar2 +
             *(float *)(in_ECX + 0x40) * fVar3 + *(float *)(in_ECX + 0x50);
  param_1[1] = fVar13 * fVar1 + fVar10 * fVar2 + fVar7 * fVar3 + fVar4;
  param_1[2] = fVar14 * fVar1 + fVar11 * fVar2 + fVar8 * fVar3 + fVar5;
  param_1[3] = fVar15 * fVar1 + fVar12 * fVar2 + fVar9 * fVar3 + fVar6;
  return;
}



void FUN_00936c10(float *param_1,byte *param_2,int param_3)

{
  byte bVar1;
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
  int in_ECX;
  
  bVar1 = *param_2;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 2);
  pfVar2 = *(float **)(in_ECX + 0x18);
  fVar3 = pfVar2[0xd];
  fVar4 = pfVar2[0xe];
  fVar5 = pfVar2[0xf];
  fVar6 = pfVar2[9];
  fVar7 = pfVar2[10];
  fVar8 = pfVar2[0xb];
  fVar9 = *(float *)(param_3 + 0x10);
  fVar10 = *(float *)(param_3 + 0x14);
  fVar11 = *(float *)(param_3 + 0x18);
  fVar12 = pfVar2[5];
  fVar13 = pfVar2[6];
  fVar14 = pfVar2[7];
  fVar15 = pfVar2[1];
  fVar16 = pfVar2[2];
  fVar17 = pfVar2[3];
  *param_1 = *pfVar2 * fVar9 + pfVar2[4] * fVar10 + pfVar2[8] * fVar11 + pfVar2[0xc];
  param_1[1] = fVar15 * fVar9 + fVar12 * fVar10 + fVar6 * fVar11 + fVar3;
  param_1[2] = fVar16 * fVar9 + fVar13 * fVar10 + fVar7 * fVar11 + fVar4;
  param_1[3] = fVar17 * fVar9 + fVar14 * fVar10 + fVar8 * fVar11 + fVar5;
  fVar3 = -*(float *)(param_3 + 0x30);
  pfVar2 = (float *)((uint)bVar1 * 0x10 + *(int *)(in_ECX + 0x14));
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  param_1[4] = fVar3 * *pfVar2;
  param_1[5] = fVar3 * fVar4;
  param_1[6] = fVar3 * fVar5;
  param_1[7] = fVar3 * fVar6;
  param_1[7] = *(float *)(param_3 + 0x34);
  return;
}



void FUN_00936cb0(float *param_1,byte *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  param_1[0xe] = (float)(uint)*param_2;
  param_1[0xc] = (float)((param_2[1] & 0xfffffff8) << 0x1c | 0x3f800000);
  fVar1 = *(float *)(in_ECX + 0x6c);
  uVar7 = param_2[1] & 0x70;
  fVar2 = *(float *)(&UNK_00aa1ccc + uVar7);
  fVar8 = *(float *)(in_ECX + 0x60) * *(float *)(&DAT_00aa1cc0 + uVar7);
  fVar9 = *(float *)(in_ECX + 100) * *(float *)(&UNK_00aa1cc4 + uVar7);
  fVar10 = *(float *)(in_ECX + 0x68) * *(float *)(&UNK_00aa1cc8 + uVar7);
  *param_1 = fVar8;
  param_1[1] = fVar9;
  param_1[2] = fVar10;
  param_1[3] = fVar1 * fVar2;
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *(float *)(in_ECX + 0x44);
  fVar3 = *(float *)(in_ECX + 0x48);
  fVar4 = *(float *)(in_ECX + 0x30);
  fVar5 = *(float *)(in_ECX + 0x34);
  fVar6 = *(float *)(in_ECX + 0x38);
  fVar8 = fVar8 - *(float *)(in_ECX + 0x50);
  fVar9 = fVar9 - *(float *)(in_ECX + 0x54);
  fVar10 = fVar10 - *(float *)(in_ECX + 0x58);
  param_1[4] = *(float *)(in_ECX + 0x20) * fVar8 + *(float *)(in_ECX + 0x24) * fVar9 +
               *(float *)(in_ECX + 0x28) * fVar10;
  param_1[5] = fVar4 * fVar8 + fVar5 * fVar9 + fVar6 * fVar10;
  param_1[6] = fVar1 * fVar8 + fVar2 * fVar9 + fVar3 * fVar10;
  param_1[7] = fVar1 * fVar8 + fVar2 * fVar9 + fVar3 * fVar10;
  return;
}



void FUN_00936d70(float *param_1,byte *param_2,float *param_3)

{
  byte bVar1;
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
  int in_ECX;
  
  bVar1 = *param_2;
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 2);
  pfVar2 = *(float **)(in_ECX + 0x14);
  fVar3 = pfVar2[0xd];
  fVar4 = pfVar2[0xe];
  fVar5 = pfVar2[0xf];
  fVar6 = pfVar2[9];
  fVar7 = pfVar2[10];
  fVar8 = pfVar2[0xb];
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar12 = pfVar2[5];
  fVar13 = pfVar2[6];
  fVar14 = pfVar2[7];
  fVar15 = pfVar2[1];
  fVar16 = pfVar2[2];
  fVar17 = pfVar2[3];
  *param_1 = *pfVar2 * fVar9 + pfVar2[4] * fVar10 + pfVar2[8] * fVar11 + pfVar2[0xc];
  param_1[1] = fVar15 * fVar9 + fVar12 * fVar10 + fVar6 * fVar11 + fVar3;
  param_1[2] = fVar16 * fVar9 + fVar13 * fVar10 + fVar7 * fVar11 + fVar4;
  param_1[3] = fVar17 * fVar9 + fVar14 * fVar10 + fVar8 * fVar11 + fVar5;
  fVar3 = -param_3[0xc];
  pfVar2 = (float *)((bVar1 - 4) * 0x10 + *(int *)(in_ECX + 0x18));
  fVar4 = pfVar2[1];
  fVar5 = pfVar2[2];
  fVar6 = pfVar2[3];
  param_1[4] = fVar3 * *pfVar2;
  param_1[5] = fVar3 * fVar4;
  param_1[6] = fVar3 * fVar5;
  param_1[7] = fVar3 * fVar6;
  param_1[7] = param_3[0xd];
  return;
}



void FUN_00936e10(float *param_1,int param_2,float *param_3)

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
  
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 2);
  pfVar1 = *(float **)(in_ECX + 0x14);
  fVar2 = pfVar1[0xd];
  fVar3 = pfVar1[0xe];
  fVar4 = pfVar1[0xf];
  fVar5 = pfVar1[9];
  fVar6 = pfVar1[10];
  fVar7 = pfVar1[0xb];
  fVar8 = *param_3;
  fVar9 = param_3[1];
  fVar10 = param_3[2];
  fVar11 = pfVar1[5];
  fVar12 = pfVar1[6];
  fVar13 = pfVar1[7];
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  fVar16 = pfVar1[3];
  *param_1 = *pfVar1 * fVar8 + pfVar1[4] * fVar9 + pfVar1[8] * fVar10 + pfVar1[0xc];
  param_1[1] = fVar14 * fVar8 + fVar11 * fVar9 + fVar5 * fVar10 + fVar2;
  param_1[2] = fVar15 * fVar8 + fVar12 * fVar9 + fVar6 * fVar10 + fVar3;
  param_1[3] = fVar16 * fVar8 + fVar13 * fVar9 + fVar7 * fVar10 + fVar4;
  fVar2 = param_3[8];
  fVar3 = param_3[9];
  fVar4 = param_3[10];
  pfVar1 = *(float **)(in_ECX + 0x14);
  fVar5 = pfVar1[9];
  fVar6 = pfVar1[10];
  fVar7 = pfVar1[0xb];
  fVar8 = pfVar1[5];
  fVar9 = pfVar1[6];
  fVar10 = pfVar1[7];
  fVar11 = pfVar1[1];
  fVar12 = pfVar1[2];
  fVar13 = pfVar1[3];
  param_1[4] = *pfVar1 * fVar2 + pfVar1[4] * fVar3 + pfVar1[8] * fVar4;
  param_1[5] = fVar11 * fVar2 + fVar8 * fVar3 + fVar5 * fVar4;
  param_1[6] = fVar12 * fVar2 + fVar9 * fVar3 + fVar6 * fVar4;
  param_1[7] = fVar13 * fVar2 + fVar10 * fVar3 + fVar7 * fVar4;
  param_1[7] = param_3[0xd];
  return;
}



void FUN_00936ec0(int param_1,undefined4 param_2,ushort param_3,float param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte local_64;
  byte bStack_63;
  undefined2 uStack_62;
  int local_60;
  ushort *local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_20;
  float local_1c;
  int local_18;
  
  local_5c = &DAT_00aa1d40;
LAB_00936ee0:
  if ((*local_5c & param_3) == 0) {
    bVar4 = (byte)((uint)param_2 >> 8);
    bVar4 = (byte)*local_5c ^ bVar4 | bVar4 & 0xf;
    uVar6 = (uint)*(byte *)(param_1 + 0x21);
    uStack_62 = (undefined2)((uint)param_2 >> 0x10);
    local_64 = (byte)param_2;
    _local_64 = CONCAT11(bVar4,local_64);
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        FUN_00936b70(local_50,&local_64);
        auVar2._4_4_ = -(uint)(ABS(local_50[1]) < (float)in_ECX[0x25]);
        auVar2._0_4_ = -(uint)(ABS(local_50[0]) < (float)in_ECX[0x24]);
        auVar2._8_4_ = -(uint)(ABS(local_50[2]) < (float)in_ECX[0x26]);
        auVar2._12_4_ = -(uint)(ABS(local_50[3]) < (float)in_ECX[0x27]);
        uVar8 = movmskps(extraout_ECX,auVar2);
        if ((((byte)uVar8 & 7) == 7) &&
           (local_1c = local_20 * local_50[local_18] - (float)in_ECX[local_18 + 0x18],
           param_4 - 1.1920929e-07 <= local_1c)) {
          if (6 < local_64) goto LAB_00937054;
          if (local_64 < 3) {
            pfVar7 = (float *)in_ECX[6];
            fVar11 = local_40;
            fVar13 = fStack_3c;
            fVar15 = fStack_38;
          }
          else {
            pfVar7 = (float *)in_ECX[5];
            fVar11 = local_50[0];
            fVar13 = local_50[1];
            fVar15 = local_50[2];
          }
          iVar9 = 0;
          if (*(char *)(param_1 + 0x21) == '\0') goto LAB_00937054;
          iVar10 = 0;
          goto LAB_00936ff0;
        }
        break;
      }
    } while ((*(byte *)(param_1 + uVar6 * 4) != local_64) ||
            (*(byte *)(param_1 + 1 + uVar6 * 4) != bVar4));
  }
  goto LAB_00937170;
LAB_00936ff0:
  do {
    if (*(byte *)(param_1 + iVar9 * 4) < 7) {
      pfVar1 = (float *)(in_ECX[4] + 0x30 + iVar10);
      fVar12 = (*pfVar7 * fVar11 + pfVar7[4] * fVar13 + pfVar7[8] * fVar15 + pfVar7[0xc]) - *pfVar1;
      fVar14 = (pfVar7[1] * fVar11 + pfVar7[5] * fVar13 + pfVar7[9] * fVar15 + pfVar7[0xd]) -
               pfVar1[1];
      fVar16 = (pfVar7[2] * fVar11 + pfVar7[6] * fVar13 + pfVar7[10] * fVar15 + pfVar7[0xe]) -
               pfVar1[2];
      fVar3 = (float)in_ECX[0x2c] * (float)in_ECX[0x2c] + 1.1920929e-07;
      local_58 = fVar16 * fVar16 + fVar14 * fVar14 + fVar12 * fVar12;
      if (local_58 < fVar3 != (local_58 == fVar3)) goto LAB_00937170;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 0x30;
  } while (iVar9 < (int)(uint)*(byte *)(param_1 + 0x21));
LAB_00937054:
  if ((*(byte *)(param_1 + 0x21) < 8) &&
     (local_60 = FUN_00936460(*in_ECX,in_ECX[1],&local_64), -1 < local_60)) {
    iVar9 = *(int *)in_ECX[4];
    if (local_18 < 3) {
      FUN_00936c10(iVar9,&local_64,local_50);
    }
    else if (local_18 < 7) {
      FUN_00936d70(iVar9,&local_64,local_50);
    }
    else {
      FUN_00936e10(iVar9,&local_64,local_50);
    }
    if (1 < *(byte *)(param_1 + 0x21)) {
      iVar10 = *(int *)in_ECX[4];
      local_54 = *(float *)(iVar10 + -0x18) * *(float *)(iVar9 + 0x18) +
                 *(float *)(iVar10 + -0x1c) * *(float *)(iVar9 + 0x14) +
                 *(float *)(iVar10 + -0x20) * *(float *)(iVar9 + 0x10);
      if (local_54 < 0.0 != (local_54 == 0.0)) {
        FUN_009363c0(local_60);
        goto LAB_00937170;
      }
    }
    sVar5 = (**(code **)(*(int *)in_ECX[3] + 8))(*in_ECX,in_ECX[1],in_ECX[2],iVar9);
    *(short *)(param_1 + 2 + local_60 * 4) = sVar5;
    if (sVar5 == -1) {
      FUN_009363c0(local_60);
    }
    else {
      *(int *)in_ECX[4] = *(int *)in_ECX[4] + 0x30;
      *(undefined2 *)(iVar9 + 0x20) = *(undefined2 *)(param_1 + 2 + local_60 * 4);
      if ((byte)_local_64 < 7) {
        *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
      }
    }
  }
LAB_00937170:
  local_5c = local_5c + 1;
  if (0xaa1d4d < (int)local_5c) {
    return;
  }
  goto LAB_00936ee0;
}



void FUN_00937190(int param_1,undefined4 param_2,ushort param_3,float param_4)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  byte bVar4;
  short sVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  byte local_64;
  byte bStack_63;
  undefined2 uStack_62;
  int local_60;
  ushort *local_5c;
  float local_58;
  float local_54;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_20;
  float local_1c;
  int local_18;
  
  local_5c = &DAT_00aa1d40;
LAB_009371b0:
  if ((*local_5c & param_3) == 0) {
    bVar4 = (byte)((uint)param_2 >> 8);
    bVar4 = (byte)*local_5c ^ bVar4 | bVar4 & 0xf;
    uVar6 = (uint)*(byte *)(param_1 + 0x21);
    uStack_62 = (undefined2)((uint)param_2 >> 0x10);
    local_64 = (byte)param_2;
    _local_64 = CONCAT11(bVar4,local_64);
    do {
      uVar6 = uVar6 - 1;
      if ((int)uVar6 < 0) {
        FUN_00936cb0(local_50,&local_64);
        auVar2._4_4_ = -(uint)(ABS(fStack_3c) < (float)in_ECX[0x29]);
        auVar2._0_4_ = -(uint)(ABS(local_40) < (float)in_ECX[0x28]);
        auVar2._8_4_ = -(uint)(ABS(fStack_38) < (float)in_ECX[0x2a]);
        auVar2._12_4_ = -(uint)(ABS(fStack_34) < (float)in_ECX[0x2b]);
        uVar8 = movmskps(extraout_ECX,auVar2);
        if ((((byte)uVar8 & 7) == 7) &&
           (local_1c = -(local_20 * local_50[local_18]) - (float)in_ECX[local_18 + 0x18],
           param_4 - 1.1920929e-07 <= local_1c)) {
          if (6 < local_64) goto LAB_00937326;
          if (local_64 < 3) {
            pfVar7 = (float *)in_ECX[6];
            fVar11 = local_40;
            fVar13 = fStack_3c;
            fVar15 = fStack_38;
          }
          else {
            pfVar7 = (float *)in_ECX[5];
            fVar11 = local_50[0];
            fVar13 = local_50[1];
            fVar15 = local_50[2];
          }
          iVar9 = 0;
          if (*(char *)(param_1 + 0x21) == '\0') goto LAB_00937326;
          iVar10 = 0;
          goto LAB_009372c2;
        }
        break;
      }
    } while ((*(byte *)(param_1 + uVar6 * 4) != local_64) ||
            (*(byte *)(param_1 + 1 + uVar6 * 4) != bVar4));
  }
  goto LAB_00937442;
LAB_009372c2:
  do {
    if (*(byte *)(param_1 + iVar9 * 4) < 7) {
      pfVar1 = (float *)(in_ECX[4] + 0x30 + iVar10);
      fVar12 = (*pfVar7 * fVar11 + pfVar7[4] * fVar13 + pfVar7[8] * fVar15 + pfVar7[0xc]) - *pfVar1;
      fVar14 = (pfVar7[1] * fVar11 + pfVar7[5] * fVar13 + pfVar7[9] * fVar15 + pfVar7[0xd]) -
               pfVar1[1];
      fVar16 = (pfVar7[2] * fVar11 + pfVar7[6] * fVar13 + pfVar7[10] * fVar15 + pfVar7[0xe]) -
               pfVar1[2];
      fVar3 = (float)in_ECX[0x2c] * (float)in_ECX[0x2c] + 1.1920929e-07;
      local_58 = fVar16 * fVar16 + fVar14 * fVar14 + fVar12 * fVar12;
      if (local_58 < fVar3 != (local_58 == fVar3)) goto LAB_00937442;
    }
    iVar9 = iVar9 + 1;
    iVar10 = iVar10 + 0x30;
  } while (iVar9 < (int)(uint)*(byte *)(param_1 + 0x21));
LAB_00937326:
  if ((*(byte *)(param_1 + 0x21) < 8) &&
     (local_60 = FUN_00936460(*in_ECX,in_ECX[1],&local_64), -1 < local_60)) {
    iVar9 = *(int *)in_ECX[4];
    if (local_18 < 3) {
      FUN_00936c10(iVar9,&local_64,local_50);
    }
    else if (local_18 < 7) {
      FUN_00936d70(iVar9,&local_64,local_50);
    }
    else {
      FUN_00936e10(iVar9,&local_64,local_50);
    }
    if (1 < *(byte *)(param_1 + 0x21)) {
      iVar10 = *(int *)in_ECX[4];
      local_54 = *(float *)(iVar10 + -0x18) * *(float *)(iVar9 + 0x18) +
                 *(float *)(iVar10 + -0x1c) * *(float *)(iVar9 + 0x14) +
                 *(float *)(iVar10 + -0x20) * *(float *)(iVar9 + 0x10);
      if (local_54 < 0.0 != (local_54 == 0.0)) {
        FUN_009363c0(local_60);
        goto LAB_00937442;
      }
    }
    sVar5 = (**(code **)(*(int *)in_ECX[3] + 8))(*in_ECX,in_ECX[1],in_ECX[2],iVar9);
    *(short *)(param_1 + 2 + local_60 * 4) = sVar5;
    if (sVar5 == -1) {
      FUN_009363c0(local_60);
    }
    else {
      *(int *)in_ECX[4] = *(int *)in_ECX[4] + 0x30;
      *(undefined2 *)(iVar9 + 0x20) = *(undefined2 *)(param_1 + 2 + local_60 * 4);
      if ((byte)_local_64 < 7) {
        *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
      }
    }
  }
LAB_00937442:
  local_5c = local_5c + 1;
  if (0xaa1d4d < (int)local_5c) {
    return;
  }
  goto LAB_009371b0;
}



void FUN_00937470(int param_1,byte *param_2,float param_3)

{
  float *pfVar1;
  float fVar2;
  short sVar3;
  int iVar4;
  char *pcVar5;
  float *pfVar6;
  undefined4 *in_ECX;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_59;
  float local_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_1c;
  uint local_18;
  uint local_14;
  
  iVar4 = *(byte *)(param_1 + 0x21) - 1;
  if (-1 < iVar4) {
    do {
      if ((*(byte *)(param_1 + iVar4 * 4) == *param_2) &&
         (*(byte *)(param_1 + 1 + iVar4 * 4) == param_2[1])) {
        return;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  local_18 = (uint)*param_2;
  local_14 = (uint)param_2[1];
  pcVar5 = (char *)FUN_00936810(&local_59,&local_50);
  if ((*pcVar5 != '\0') && (param_3 * 0.999 < local_1c != (param_3 * 0.999 == local_1c))) {
    if (*param_2 < 7) {
      if (*param_2 < 3) {
        pfVar6 = (float *)in_ECX[6];
      }
      else {
        pfVar6 = (float *)in_ECX[5];
        local_40 = local_50;
        fStack_3c = fStack_4c;
        fStack_38 = fStack_48;
      }
      iVar4 = 0;
      if (*(char *)(param_1 + 0x21) != '\0') {
        iVar7 = 0;
        do {
          if (*(byte *)(param_1 + iVar4 * 4) < 7) {
            pfVar1 = (float *)(in_ECX[4] + 0x30 + iVar7);
            fVar8 = (*pfVar6 * local_40 + pfVar6[4] * fStack_3c +
                    pfVar6[8] * fStack_38 + pfVar6[0xc]) - *pfVar1;
            fVar9 = (pfVar6[1] * local_40 + pfVar6[5] * fStack_3c +
                    pfVar6[9] * fStack_38 + pfVar6[0xd]) - pfVar1[1];
            fVar10 = (pfVar6[2] * local_40 + pfVar6[6] * fStack_3c +
                     pfVar6[10] * fStack_38 + pfVar6[0xe]) - pfVar1[2];
            fVar2 = (float)in_ECX[0x2c] * (float)in_ECX[0x2c] + 1.1920929e-07;
            local_58 = fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8;
            if (local_58 < fVar2 != (local_58 == fVar2)) {
              return;
            }
          }
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 0x30;
        } while (iVar4 < (int)(uint)*(byte *)(param_1 + 0x21));
      }
    }
    if (7 < *(byte *)(param_1 + 0x21)) {
      return;
    }
    local_58 = (float)FUN_00936460(*in_ECX,in_ECX[1],param_2);
    if ((int)local_58 < 0) {
      return;
    }
    iVar4 = *(int *)in_ECX[4];
    if ((int)local_18 < 3) {
      FUN_00936c10(iVar4,param_2,&local_50);
    }
    else if ((int)local_18 < 7) {
      FUN_00936d70(iVar4,param_2,&local_50);
    }
    else {
      FUN_00936e10(iVar4,param_2,&local_50);
    }
    if (1 < *(byte *)(param_1 + 0x21)) {
      iVar7 = *(int *)in_ECX[4];
      local_54 = *(float *)(iVar7 + -0x18) * *(float *)(iVar4 + 0x18) +
                 *(float *)(iVar7 + -0x1c) * *(float *)(iVar4 + 0x14) +
                 *(float *)(iVar7 + -0x20) * *(float *)(iVar4 + 0x10);
      if (local_54 < 0.0 != (local_54 == 0.0)) goto LAB_0093766f;
    }
    sVar3 = (**(code **)(*(int *)in_ECX[3] + 8))(*in_ECX,in_ECX[1],in_ECX[2],iVar4);
    *(short *)(param_1 + 2 + (int)local_58 * 4) = sVar3;
    if (sVar3 == -1) {
LAB_0093766f:
      FUN_009363c0(local_58);
      return;
    }
    *(int *)in_ECX[4] = *(int *)in_ECX[4] + 0x30;
    *(undefined2 *)(param_2 + 2) = *(undefined2 *)(param_1 + 2 + (int)local_58 * 4);
    *(undefined2 *)(iVar4 + 0x20) = *(undefined2 *)(param_1 + 2 + (int)local_58 * 4);
    if (*param_2 < 7) {
      *(char *)(param_1 + 0x20) = *(char *)(param_1 + 0x20) + '\x01';
    }
  }
  return;
}



void FUN_009376e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  byte bVar2;
  ushort in_CX;
  undefined4 extraout_EDX;
  byte bVar3;
  undefined4 local_4;
  
  local_4 = (uint)in_CX;
  FUN_00936790(param_6,param_2);
  FUN_00937470(param_1,extraout_EDX,param_8);
  cVar1 = '\0';
  if (param_4 != 0) {
    cVar1 = (param_4 != 1) + '\x01';
  }
  if (param_5 == 0) {
    param_2._0_1_ = '\0';
  }
  else {
    param_2._0_1_ = (param_5 != 1) + '\x01';
  }
  bVar3 = (byte)(1 << cVar1 + 4);
  local_4 = CONCAT31(local_4._1_3_,(byte)local_4 ^ bVar3);
  FUN_00937470(param_1,&local_4,param_8);
  bVar2 = local_4._1_1_ ^ '\x01' << (char)param_2 + 4;
  local_4._0_2_ = CONCAT11(bVar2,(byte)local_4);
  FUN_00937470(param_1,&local_4,param_8);
  local_4 = CONCAT31(local_4._1_3_,(byte)local_4 ^ bVar3);
  FUN_00937470(param_1,&local_4,param_8);
  return;
}



undefined4 FUN_009377c0(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  int in_ECX;
  uint uVar8;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
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
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 local_70;
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
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_90 = 0x4479ffff;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_114 = -1e+17;
  local_70 = 0xdbb1a2bc;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_f0 = ABS(*(float *)(in_ECX + 0x30));
  fStack_ec = ABS(*(float *)(in_ECX + 0x34));
  fStack_e8 = ABS(*(float *)(in_ECX + 0x38));
  fStack_e4 = ABS(*(float *)(in_ECX + 0x3c));
  local_e0 = ABS(*(float *)(in_ECX + 0x40));
  fStack_dc = ABS(*(float *)(in_ECX + 0x44));
  fStack_d8 = ABS(*(float *)(in_ECX + 0x48));
  fStack_d4 = ABS(*(float *)(in_ECX + 0x4c));
  local_100 = ABS(*(float *)(in_ECX + 0x20));
  fStack_fc = ABS(*(float *)(in_ECX + 0x24));
  fStack_f8 = ABS(*(float *)(in_ECX + 0x28));
  fStack_f4 = ABS(*(float *)(in_ECX + 0x2c));
  fVar12 = *(float *)(in_ECX + 0x70);
  fVar6 = *(float *)(in_ECX + 0x74);
  fVar7 = *(float *)(in_ECX + 0x78);
  fVar9 = ABS(*(float *)(in_ECX + 0xc0)) -
          (local_100 * fVar12 + local_f0 * fVar6 + local_e0 * fVar7 + *(float *)(in_ECX + 0x60));
  fVar10 = ABS(*(float *)(in_ECX + 0xc4)) -
           (fStack_fc * fVar12 + fStack_ec * fVar6 + fStack_dc * fVar7 + *(float *)(in_ECX + 100));
  fVar11 = ABS(*(float *)(in_ECX + 200)) -
           (fStack_f8 * fVar12 + fStack_e8 * fVar6 + fStack_d8 * fVar7 + *(float *)(in_ECX + 0x68));
  fVar12 = ABS(*(float *)(in_ECX + 0xcc)) -
           (fStack_f4 * fVar12 + fStack_e4 * fVar6 + fStack_d4 * fVar7 + *(float *)(in_ECX + 0x6c));
  auVar5._4_4_ = -(uint)(param_1[1] < fVar10);
  auVar5._0_4_ = -(uint)(*param_1 < fVar9);
  auVar5._8_4_ = -(uint)(param_1[2] < fVar11);
  auVar5._12_4_ = -(uint)(param_1[3] < fVar12);
  uVar8 = movmskps(in_ECX,auVar5);
  if ((uVar8 & 7) == 0) {
    *(float *)(in_ECX + 0xe0) = fVar9;
    *(float *)(in_ECX + 0xe4) = fVar10;
    *(float *)(in_ECX + 0xe8) = fVar11;
    *(float *)(in_ECX + 0xec) = fVar12;
    fVar12 = *(float *)(in_ECX + 0x60);
    fVar6 = *(float *)(in_ECX + 100);
    fVar7 = *(float *)(in_ECX + 0x68);
    fVar9 = ABS(*(float *)(in_ECX + 0xd0)) -
            (local_100 * fVar12 + fStack_fc * fVar6 + fStack_f8 * fVar7 + *(float *)(in_ECX + 0x70))
    ;
    fVar10 = ABS(*(float *)(in_ECX + 0xd4)) -
             (local_f0 * fVar12 + fStack_ec * fVar6 + fStack_e8 * fVar7 + *(float *)(in_ECX + 0x74))
    ;
    fVar11 = ABS(*(float *)(in_ECX + 0xd8)) -
             (local_e0 * fVar12 + fStack_dc * fVar6 + fStack_d8 * fVar7 + *(float *)(in_ECX + 0x78))
    ;
    fVar12 = ABS(*(float *)(in_ECX + 0xdc)) -
             (local_e0 * fVar12 + fStack_dc * fVar6 + fStack_d8 * fVar7 + *(float *)(in_ECX + 0x7c))
    ;
    auVar1._4_4_ = -(uint)(param_1[1] < fVar10);
    auVar1._0_4_ = -(uint)(*param_1 < fVar9);
    auVar1._8_4_ = -(uint)(param_1[2] < fVar11);
    auVar1._12_4_ = -(uint)(param_1[3] < fVar12);
    uVar8 = movmskps(in_EDX,auVar1);
    if ((uVar8 & 7) == 0) {
      *(float *)(in_ECX + 0xf0) = fVar9;
      *(float *)(in_ECX + 0xf4) = fVar10;
      *(float *)(in_ECX + 0xf8) = fVar11;
      *(float *)(in_ECX + 0xfc) = fVar12;
      FUN_008d2860(in_ECX + 0x20);
      local_60 = local_50 * local_50;
      fStack_5c = fStack_4c * fStack_4c;
      fStack_58 = fStack_48 * fStack_48;
      fStack_54 = fStack_44 * fStack_44;
      fStack_74 = *(float *)(in_ECX + 200);
      local_80 = fStack_74 * local_40;
      fStack_7c = fStack_74 * fStack_3c;
      fStack_78 = fStack_74 * fStack_38;
      fStack_74 = fStack_74 * fStack_34;
      local_b0 = local_30 * local_30;
      fStack_ac = fStack_2c * fStack_2c;
      fStack_a8 = fStack_28 * fStack_28;
      fStack_a4 = fStack_24 * fStack_24;
      local_c0 = *(float *)(in_ECX + 0xc4);
      local_110 = local_e0 * *(float *)(in_ECX + 0x74) +
                  local_f0 * *(float *)(in_ECX + 0x78) +
                  fStack_fc * *(float *)(in_ECX + 0x68) + fStack_f8 * *(float *)(in_ECX + 100);
      local_20 = local_40 * local_40;
      fStack_1c = fStack_3c * fStack_3c;
      fStack_18 = fStack_38 * fStack_38;
      fStack_14 = fStack_34 * fStack_34;
      local_d0 = local_b0 + local_20;
      fStack_cc = fStack_ac + fStack_1c;
      fStack_c8 = fStack_a8 + fStack_18;
      fStack_c4 = fStack_a4 + fStack_14;
      fStack_104 = 0.0;
      fStack_10c = local_100 * *(float *)(in_ECX + 0x78) +
                   local_e0 * *(float *)(in_ECX + 0x70) +
                   fStack_ec * *(float *)(in_ECX + 0x68) + fStack_e8 * *(float *)(in_ECX + 100);
      fStack_108 = local_100 * *(float *)(in_ECX + 0x74) +
                   local_f0 * *(float *)(in_ECX + 0x70) +
                   fStack_dc * *(float *)(in_ECX + 0x68) + fStack_d8 * *(float *)(in_ECX + 100);
      fStack_bc = local_c0;
      fStack_b8 = local_c0;
      fStack_b4 = local_c0;
      FUN_009366f0(&local_d0);
      local_110 = local_d0 * (ABS(local_80 - local_c0 * local_30) - local_110);
      fStack_10c = fStack_cc * (ABS(fStack_7c - local_c0 * fStack_2c) - fStack_10c);
      fStack_108 = fStack_c8 * (ABS(fStack_78 - local_c0 * fStack_28) - fStack_108);
      fStack_104 = fStack_c4 * (ABS(fStack_74 - local_c0 * fStack_24) - fStack_104);
      local_114 = *(float *)(in_ECX + 0xb0);
      auVar3._4_4_ = -(uint)(local_114 < fStack_10c);
      auVar3._0_4_ = -(uint)(local_114 < local_110);
      auVar3._8_4_ = -(uint)(local_114 < fStack_108);
      auVar3._12_4_ = -(uint)(local_114 < fStack_104);
      uVar8 = movmskps(extraout_EDX,auVar3);
      uStack_9c = 0;
      uStack_98 = 0;
      uStack_94 = 0;
      if ((uVar8 & 7) == 0) {
        local_a0 = local_114;
        FUN_00936740(&local_110,&local_70,&local_d0,&local_90);
        *(float *)(in_ECX + 0x100) = local_110;
        *(float *)(in_ECX + 0x104) = fStack_10c;
        *(float *)(in_ECX + 0x108) = fStack_108;
        *(float *)(in_ECX + 0x10c) = fStack_104;
        fStack_b4 = *(float *)(in_ECX + 0xc0);
        local_c0 = fStack_b4 * local_30;
        fStack_bc = fStack_b4 * fStack_2c;
        fStack_b8 = fStack_b4 * fStack_28;
        fStack_b4 = fStack_b4 * fStack_24;
        local_80 = *(float *)(in_ECX + 200);
        local_d0 = local_b0 + local_60;
        fStack_cc = fStack_ac + fStack_5c;
        fStack_c8 = fStack_a8 + fStack_58;
        fStack_c4 = fStack_a4 + fStack_54;
        fStack_104 = 0.0;
        local_110 = fStack_f8 * *(float *)(in_ECX + 0x60) +
                    fStack_dc * *(float *)(in_ECX + 0x74) +
                    local_100 * *(float *)(in_ECX + 0x68) + fStack_ec * *(float *)(in_ECX + 0x78);
        fStack_10c = fStack_e8 * *(float *)(in_ECX + 0x60) +
                     local_f0 * *(float *)(in_ECX + 0x68) +
                     fStack_dc * *(float *)(in_ECX + 0x70) + fStack_fc * *(float *)(in_ECX + 0x78);
        fStack_108 = fStack_d8 * *(float *)(in_ECX + 0x60) +
                     fStack_fc * *(float *)(in_ECX + 0x74) +
                     local_e0 * *(float *)(in_ECX + 0x68) + fStack_ec * *(float *)(in_ECX + 0x70);
        fStack_7c = local_80;
        fStack_78 = local_80;
        fStack_74 = local_80;
        FUN_009366f0(&local_d0);
        local_110 = local_d0 * (ABS(local_c0 - local_80 * local_50) - local_110);
        fStack_10c = fStack_cc * (ABS(fStack_bc - local_80 * fStack_4c) - fStack_10c);
        fStack_108 = fStack_c8 * (ABS(fStack_b8 - local_80 * fStack_48) - fStack_108);
        fStack_104 = fStack_c4 * (ABS(fStack_b4 - local_80 * fStack_44) - fStack_104);
        auVar4._4_4_ = -(uint)(local_a0 < fStack_10c);
        auVar4._0_4_ = -(uint)(local_a0 < local_110);
        auVar4._8_4_ = -(uint)(local_a0 < fStack_108);
        auVar4._12_4_ = -(uint)(local_a0 < fStack_104);
        uVar8 = movmskps(extraout_EDX_00,auVar4);
        if ((uVar8 & 7) == 0) {
          FUN_00936740(&local_110,&local_70,&local_d0,&local_90);
          *(float *)(in_ECX + 0x110) = local_110;
          *(float *)(in_ECX + 0x114) = fStack_10c;
          *(float *)(in_ECX + 0x118) = fStack_108;
          *(float *)(in_ECX + 0x11c) = fStack_104;
          fStack_a4 = *(float *)(in_ECX + 0xc4);
          local_b0 = fStack_a4 * local_50;
          fStack_ac = fStack_a4 * fStack_4c;
          fStack_a8 = fStack_a4 * fStack_48;
          fStack_a4 = fStack_a4 * fStack_44;
          local_a0 = *(float *)(in_ECX + 0xc0);
          uStack_9c = *(undefined4 *)(in_ECX + 0xc4);
          uStack_98 = *(undefined4 *)(in_ECX + 200);
          uStack_94 = *(undefined4 *)(in_ECX + 0xcc);
          local_d0 = local_20 + local_60;
          fStack_cc = fStack_1c + fStack_5c;
          fStack_c8 = fStack_18 + fStack_58;
          fStack_c4 = fStack_14 + fStack_54;
          fStack_104 = 0.0;
          local_110 = fStack_fc * *(float *)(in_ECX + 0x60) +
                      fStack_d8 * *(float *)(in_ECX + 0x74) +
                      local_100 * *(float *)(in_ECX + 100) + fStack_e8 * *(float *)(in_ECX + 0x78);
          fStack_10c = fStack_ec * *(float *)(in_ECX + 0x60) +
                       local_f0 * *(float *)(in_ECX + 100) +
                       fStack_d8 * *(float *)(in_ECX + 0x70) + fStack_f8 * *(float *)(in_ECX + 0x78)
          ;
          fStack_108 = fStack_dc * *(float *)(in_ECX + 0x60) +
                       fStack_f8 * *(float *)(in_ECX + 0x74) +
                       local_e0 * *(float *)(in_ECX + 100) + fStack_e8 * *(float *)(in_ECX + 0x70);
          FUN_009366f0(&local_d0);
          local_110 = local_d0 * (ABS(local_b0 - local_a0 * local_40) - local_110);
          fStack_10c = fStack_cc * (ABS(fStack_ac - local_a0 * fStack_3c) - fStack_10c);
          fStack_108 = fStack_c8 * (ABS(fStack_a8 - local_a0 * fStack_38) - fStack_108);
          fStack_104 = fStack_c4 * (ABS(fStack_a4 - local_a0 * fStack_34) - fStack_104);
          auVar2._4_4_ = -(uint)(param_1[1] < fStack_10c);
          auVar2._0_4_ = -(uint)(*param_1 < local_110);
          auVar2._8_4_ = -(uint)(param_1[2] < fStack_108);
          auVar2._12_4_ = -(uint)(param_1[3] < fStack_104);
          uVar8 = movmskps(extraout_EDX_01,auVar2);
          local_114 = (float)(uVar8 & 7);
          FUN_009366b0(&local_110,in_ECX + 0xb0,&local_114);
          if (local_114 == 0.0) {
            FUN_00936740(&local_110,&local_70,&local_d0,&local_90);
            *(float *)(in_ECX + 0x120) = local_110;
            *(float *)(in_ECX + 0x124) = fStack_10c;
            *(float *)(in_ECX + 0x128) = fStack_108;
            *(float *)(in_ECX + 300) = fStack_104;
            return 0;
          }
        }
      }
    }
  }
  return 1;
}



void FUN_00937db0(float *param_1,float param_2)

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
  int in_ECX;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  param_1[0xe] = param_2;
  fVar1 = *(float *)(in_ECX + 0x20 + (int)param_2 * 4);
  fVar2 = *(float *)(in_ECX + 0x30 + (int)param_2 * 4);
  fVar3 = *(float *)(in_ECX + 0x40 + (int)param_2 * 4);
  if (0.0 <= *(float *)(in_ECX + 0xc0 + (int)param_2 * 4)) {
    param_1[0xc] = 1.0;
    fVar4 = *(float *)(in_ECX + 0x74);
    fVar5 = *(float *)(in_ECX + 0x78);
    fVar6 = *(float *)(in_ECX + 0x7c);
    param_1[4] = -*(float *)(in_ECX + 0x70);
    param_1[5] = -fVar4;
    param_1[6] = -fVar5;
    param_1[7] = -fVar6;
  }
  else {
    param_1[0xc] = -1.0;
    fVar4 = *(float *)(in_ECX + 0x74);
    fVar5 = *(float *)(in_ECX + 0x78);
    fVar6 = *(float *)(in_ECX + 0x7c);
    param_1[4] = *(float *)(in_ECX + 0x70);
    param_1[5] = fVar4;
    param_1[6] = fVar5;
    param_1[7] = fVar6;
  }
  fVar4 = param_1[0xc];
  uVar16 = -(uint)(0.0 < *(float *)(in_ECX + 0xd0));
  uVar17 = -(uint)(0.0 < *(float *)(in_ECX + 0xd4));
  uVar18 = -(uint)(0.0 < *(float *)(in_ECX + 0xd8));
  uVar19 = -(uint)(0.0 < *(float *)(in_ECX + 0xdc));
  param_1[4] = (float)((uint)param_1[4] ^
                      (uint)(fVar1 + fVar4 * (float)(uVar16 & 0x3727c5ac | ~uVar16 & 0xb727c5ac)) &
                      0x80000000);
  param_1[5] = (float)((uint)param_1[5] ^
                      (uint)(fVar2 + fVar4 * (float)(uVar17 & 0x3727c5ac | ~uVar17 & 0xb727c5ac)) &
                      0x80000000);
  param_1[6] = (float)((uint)param_1[6] ^
                      (uint)(fVar3 + fVar4 * (float)(uVar18 & 0x3727c5ac | ~uVar18 & 0xb727c5ac)) &
                      0x80000000);
  param_1[7] = (float)((uint)param_1[7] ^
                      (uint)(fVar4 * (float)(uVar19 & 0x3727c5ac | ~uVar19 & 0xb727c5ac) + 0.0) &
                      0x80000000);
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = *(float *)(in_ECX + 0x54);
  fVar5 = *(float *)(in_ECX + 0x58);
  fVar6 = *(float *)(in_ECX + 0x5c);
  fVar7 = *(float *)(in_ECX + 0x44);
  fVar8 = *(float *)(in_ECX + 0x48);
  fVar9 = *(float *)(in_ECX + 0x4c);
  fVar10 = *(float *)(in_ECX + 0x34);
  fVar11 = *(float *)(in_ECX + 0x38);
  fVar12 = *(float *)(in_ECX + 0x3c);
  fVar13 = *(float *)(in_ECX + 0x24);
  fVar14 = *(float *)(in_ECX + 0x28);
  fVar15 = *(float *)(in_ECX + 0x2c);
  *param_1 = *(float *)(in_ECX + 0x20) * fVar1 + *(float *)(in_ECX + 0x30) * fVar2 +
             *(float *)(in_ECX + 0x40) * fVar3 + *(float *)(in_ECX + 0x50);
  param_1[1] = fVar13 * fVar1 + fVar10 * fVar2 + fVar7 * fVar3 + fVar4;
  param_1[2] = fVar14 * fVar1 + fVar11 * fVar2 + fVar8 * fVar3 + fVar5;
  param_1[3] = fVar15 * fVar1 + fVar12 * fVar2 + fVar9 * fVar3 + fVar6;
  return;
}



void FUN_00937ef0(float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  float *pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  param_1[0xe] = (float)(param_2 + 4);
  pfVar7 = (float *)((param_2 + 2) * 0x10 + in_ECX);
  fVar1 = *pfVar7;
  fVar2 = pfVar7[1];
  fVar3 = pfVar7[2];
  fVar4 = pfVar7[3];
  if (0.0 <= *(float *)(in_ECX + 0xd0 + param_2 * 4)) {
    param_1[0xc] = 1.0;
    fVar5 = *(float *)(in_ECX + 100);
    fVar6 = *(float *)(in_ECX + 0x68);
    fVar12 = *(float *)(in_ECX + 0x6c);
    *param_1 = *(float *)(in_ECX + 0x60);
    param_1[1] = fVar5;
    param_1[2] = fVar6;
    param_1[3] = fVar12;
  }
  else {
    param_1[0xc] = -1.0;
    fVar5 = *(float *)(in_ECX + 100);
    fVar6 = *(float *)(in_ECX + 0x68);
    fVar12 = *(float *)(in_ECX + 0x6c);
    *param_1 = -*(float *)(in_ECX + 0x60);
    param_1[1] = -fVar5;
    param_1[2] = -fVar6;
    param_1[3] = -fVar12;
  }
  fVar5 = -param_1[0xc];
  uVar8 = -(uint)(0.0 < *(float *)(in_ECX + 0xc0));
  uVar9 = -(uint)(0.0 < *(float *)(in_ECX + 0xc4));
  uVar10 = -(uint)(0.0 < *(float *)(in_ECX + 200));
  uVar11 = -(uint)(0.0 < *(float *)(in_ECX + 0xcc));
  fVar12 = (float)((uint)*param_1 ^
                  (uint)(fVar1 + fVar5 * (float)(uVar8 & 0xb727c5ac | ~uVar8 & 0x3727c5ac)) &
                  0x80000000);
  fVar13 = (float)((uint)param_1[1] ^
                  (uint)(fVar2 + fVar5 * (float)(uVar9 & 0xb727c5ac | ~uVar9 & 0x3727c5ac)) &
                  0x80000000);
  fVar14 = (float)((uint)param_1[2] ^
                  (uint)(fVar3 + fVar5 * (float)(uVar10 & 0xb727c5ac | ~uVar10 & 0x3727c5ac)) &
                  0x80000000);
  *param_1 = fVar12;
  param_1[1] = fVar13;
  param_1[2] = fVar14;
  param_1[3] = (float)((uint)param_1[3] ^
                      (uint)(fVar4 + fVar5 * (float)(uVar11 & 0xb727c5ac | ~uVar11 & 0x3727c5ac)) &
                      0x80000000);
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *(float *)(in_ECX + 0x44);
  fVar3 = *(float *)(in_ECX + 0x48);
  fVar4 = *(float *)(in_ECX + 0x30);
  fVar5 = *(float *)(in_ECX + 0x34);
  fVar6 = *(float *)(in_ECX + 0x38);
  fVar12 = fVar12 - *(float *)(in_ECX + 0x50);
  fVar13 = fVar13 - *(float *)(in_ECX + 0x54);
  fVar14 = fVar14 - *(float *)(in_ECX + 0x58);
  param_1[4] = *(float *)(in_ECX + 0x20) * fVar12 + *(float *)(in_ECX + 0x24) * fVar13 +
               *(float *)(in_ECX + 0x28) * fVar14;
  param_1[5] = fVar4 * fVar12 + fVar5 * fVar13 + fVar6 * fVar14;
  param_1[6] = fVar1 * fVar12 + fVar2 * fVar13 + fVar3 * fVar14;
  param_1[7] = fVar1 * fVar12 + fVar2 * fVar13 + fVar3 * fVar14;
  return;
}



void FUN_00938060(float *param_1)

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
  float *pfVar10;
  int in_ECX;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_20 [7];
  
  local_20[0] = 0.0;
  local_20[1] = 0.0;
  local_20[2] = 0.0;
  local_20[3] = 0.0;
  pfVar10 = (float *)(((int)param_1[0xf] + 2) * 0x10 + in_ECX);
  local_20[(int)param_1[0xe]] = 1.0;
  fVar11 = local_20[1] * pfVar10[2] - local_20[2] * pfVar10[1];
  fVar12 = local_20[2] * *pfVar10 - local_20[0] * pfVar10[2];
  fVar13 = local_20[0] * pfVar10[1] - local_20[1] * *pfVar10;
  fVar14 = local_20[3] * pfVar10[3] - local_20[3] * pfVar10[3];
  if (fVar13 * *(float *)(in_ECX + 200) +
      fVar12 * *(float *)(in_ECX + 0xc4) + fVar11 * *(float *)(in_ECX + 0xc0) < 0.0) {
    fVar11 = -fVar11;
    fVar12 = -fVar12;
    fVar13 = -fVar13;
    fVar14 = -fVar14;
  }
  fVar1 = *(float *)(in_ECX + 0x40);
  fVar2 = *(float *)(in_ECX + 0x44);
  fVar3 = *(float *)(in_ECX + 0x48);
  fVar4 = *(float *)(in_ECX + 0x20);
  fVar5 = *(float *)(in_ECX + 0x24);
  fVar6 = *(float *)(in_ECX + 0x28);
  fVar7 = *(float *)(in_ECX + 0x30);
  fVar8 = *(float *)(in_ECX + 0x34);
  fVar9 = *(float *)(in_ECX + 0x38);
  *param_1 = fVar11;
  param_1[1] = fVar12;
  param_1[2] = fVar13;
  param_1[3] = fVar14;
  param_1[4] = fVar4 * fVar11 + fVar5 * fVar12 + fVar6 * fVar13;
  param_1[5] = fVar7 * fVar11 + fVar8 * fVar12 + fVar9 * fVar13;
  param_1[6] = fVar1 * fVar11 + fVar2 * fVar12 + fVar3 * fVar13;
  param_1[7] = fVar1 * fVar11 + fVar2 * fVar12 + fVar3 * fVar13;
  return;
}



undefined4 FUN_00938190(int param_1,char *param_2,undefined1 (*param_3) [16])

{
  float fVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  byte *extraout_EDX;
  uint local_44;
  int local_40;
  char local_34 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = 8;
  do {
    fVar1 = *(float *)(in_ECX + 0xe0);
    if (fVar1 < *(float *)(in_ECX + 0xe0)) {
      fVar1 = *(float *)(in_ECX + 0xe0);
    }
    bVar2 = fVar1 < *(float *)(in_ECX + 0xe4);
    if (bVar2) {
      fVar1 = *(float *)(in_ECX + 0xe4);
    }
    local_44 = (uint)bVar2;
    if (fVar1 < *(float *)(in_ECX + 0xe8)) {
      local_44 = 2;
      fVar1 = *(float *)(in_ECX + 0xe8);
    }
    if (fVar1 < *(float *)(in_ECX + 0xf0)) {
      local_44 = 4;
      fVar1 = *(float *)(in_ECX + 0xf0);
    }
    if (fVar1 < *(float *)(in_ECX + 0xf4)) {
      local_44 = 5;
      fVar1 = *(float *)(in_ECX + 0xf4);
    }
    if (fVar1 < *(float *)(in_ECX + 0xf8)) {
      local_44 = 6;
      fVar1 = *(float *)(in_ECX + 0xf8);
    }
    if (fVar1 < *(float *)(in_ECX + 0x100)) {
      local_44 = 8;
      fVar1 = *(float *)(in_ECX + 0x100);
    }
    if (fVar1 < *(float *)(in_ECX + 0x104)) {
      local_44 = 9;
      fVar1 = *(float *)(in_ECX + 0x104);
    }
    if (fVar1 < *(float *)(in_ECX + 0x108)) {
      local_44 = 10;
      fVar1 = *(float *)(in_ECX + 0x108);
    }
    if (fVar1 < *(float *)(in_ECX + 0x110)) {
      local_44 = 0xc;
      fVar1 = *(float *)(in_ECX + 0x110);
    }
    if (fVar1 < *(float *)(in_ECX + 0x114)) {
      local_44 = 0xd;
      fVar1 = *(float *)(in_ECX + 0x114);
    }
    if (fVar1 < *(float *)(in_ECX + 0x118)) {
      local_44 = 0xe;
      fVar1 = *(float *)(in_ECX + 0x118);
    }
    if (fVar1 < *(float *)(in_ECX + 0x120)) {
      local_44 = 0x10;
      fVar1 = *(float *)(in_ECX + 0x120);
    }
    if (fVar1 < *(float *)(in_ECX + 0x124)) {
      local_44 = 0x11;
      fVar1 = *(float *)(in_ECX + 0x124);
    }
    if (*(float *)(in_ECX + 0x128) <= fVar1) {
      if (local_44 < 3) {
        *param_2 = (char)local_44;
        FUN_00937db0(param_3,local_44);
        uVar7 = movmskps(*(undefined4 *)param_3[3],param_3[1]);
        bVar5 = ((byte)uVar7 & 7) << 4 | (byte)((uint)*(undefined4 *)param_3[3] >> 0x1c) & 8;
        param_2[1] = bVar5;
        iVar6 = *(byte *)(param_1 + 0x21) - 1;
        if (-1 < iVar6) {
          do {
            if ((*(char *)(param_1 + iVar6 * 4) == *param_2) &&
               (*(byte *)(param_1 + 1 + iVar6 * 4) == bVar5)) {
              return 1;
            }
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        local_30 = *(float *)*param_3;
        fStack_2c = *(float *)(*param_3 + 4);
        fStack_28 = *(float *)(*param_3 + 8);
        fStack_24 = *(float *)(*param_3 + 0xc);
        auVar3._4_4_ = -(uint)(ABS(fStack_2c) < *(float *)(in_ECX + 0x94));
        auVar3._0_4_ = -(uint)(ABS(local_30) < *(float *)(in_ECX + 0x90));
        auVar3._8_4_ = -(uint)(ABS(fStack_28) < *(float *)(in_ECX + 0x98));
        auVar3._12_4_ = -(uint)(ABS(fStack_24) < *(float *)(in_ECX + 0x9c));
        uVar7 = movmskps(param_3,auVar3);
        if (((byte)uVar7 & 7) == 7) {
          *(float *)(param_3[3] + 4) =
               *(float *)(*param_3 + *(int *)(param_3[3] + 8) * 4) * *(float *)param_3[3] -
               *(float *)(in_ECX + 0x60 + *(int *)(param_3[3] + 8) * 4);
          return 2;
        }
      }
      else {
        if (6 < local_44) goto LAB_00938367;
        *param_2 = (char)local_44;
        uVar7 = FUN_00937ef0(param_3,local_44 - 4);
        uVar7 = movmskps(uVar7,*param_3);
        bVar5 = ((byte)uVar7 & 7) << 4 | (byte)((uint)*(undefined4 *)param_3[3] >> 0x1c) & 8;
        param_2[1] = bVar5;
        iVar6 = *(byte *)(param_1 + 0x21) - 1;
        if (-1 < iVar6) {
          do {
            if ((*(char *)(param_1 + iVar6 * 4) == *param_2) &&
               (*(byte *)(param_1 + 1 + iVar6 * 4) == bVar5)) {
              return 1;
            }
            iVar6 = iVar6 + -1;
          } while (-1 < iVar6);
        }
        local_20 = *(float *)param_3[1];
        fStack_1c = *(float *)(param_3[1] + 4);
        fStack_18 = *(float *)(param_3[1] + 8);
        fStack_14 = *(float *)(param_3[1] + 0xc);
        auVar4._4_4_ = -(uint)(ABS(fStack_1c) < *(float *)(in_ECX + 0xa4));
        auVar4._0_4_ = -(uint)(ABS(local_20) < *(float *)(in_ECX + 0xa0));
        auVar4._8_4_ = -(uint)(ABS(fStack_18) < *(float *)(in_ECX + 0xa8));
        auVar4._12_4_ = -(uint)(ABS(fStack_14) < *(float *)(in_ECX + 0xac));
        uVar7 = movmskps(param_3 + 1,auVar4);
        if (((byte)uVar7 & 7) == 7) {
          *(float *)(param_3[3] + 4) =
               -(*(float *)(*param_3 + *(int *)(param_3[3] + 8) * 4) * *(float *)param_3[3]) -
               *(float *)(in_ECX + 0x70 + (*(int *)(param_3[3] + 8) + -4) * 4);
          return 2;
        }
      }
    }
    else {
      local_44 = 0x12;
LAB_00938367:
      *(uint *)(param_3[3] + 8) = local_44 - 8 >> 2;
      *(uint *)(param_3[3] + 0xc) = local_44 - 8 & 3;
      FUN_00938060(param_3);
      FUN_00936790(param_3,*(undefined4 *)(param_3[3] + 8));
      *(uint *)(param_3[3] + 8) = (uint)*extraout_EDX;
      *(uint *)(param_3[3] + 0xc) = (uint)extraout_EDX[1];
      iVar6 = *(byte *)(param_1 + 0x21) - 1;
      if (-1 < iVar6) {
        do {
          if ((*(byte *)(param_1 + iVar6 * 4) == *extraout_EDX) &&
             (*(byte *)(param_1 + 1 + iVar6 * 4) == extraout_EDX[1])) {
            return 1;
          }
          iVar6 = iVar6 + -1;
        } while (-1 < iVar6);
      }
      FUN_00936810(local_34,param_3);
      if (local_34[0] != '\0') {
        return 2;
      }
    }
    local_40 = local_40 + -1;
    *(undefined4 *)(in_ECX + ((local_44 & 3) + 0x38 + (local_44 & 0xfffffffc)) * 4) = 0xff7fffff;
    if (local_40 < 1) {
      return 0;
    }
  } while( true );
}



void FUN_009385c0(undefined1 *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined1 uVar3;
  uint local_d4;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined1 local_a0 [56];
  int local_68;
  undefined1 local_60 [92];
  
  uVar3 = 0;
  FUN_00936420();
  local_d4 = (uint)(ushort)local_d4;
  FUN_008fdaf0();
  iVar2 = FUN_009377c0(in_ECX + 0x80);
  if (iVar2 == 0) {
    iVar2 = FUN_00938190(local_60,&local_d4,local_a0);
    if (iVar2 != 2) {
      *param_1 = 0;
      return;
    }
    uVar3 = 1;
    if (local_68 < 3) {
      FUN_00936c10(&local_d0,&local_d4,local_a0);
    }
    else if (local_68 < 7) {
      FUN_00936d70(&local_d0,&local_d4,local_a0);
    }
    else {
      FUN_00936e10(&local_d0,&local_d4,local_a0);
    }
    if (2 < (byte)local_d4) {
      fVar1 = -fStack_b4;
      local_d0 = local_d0 + fVar1 * local_c0;
      fStack_cc = fStack_cc + fVar1 * fStack_bc;
      fStack_c8 = fStack_c8 + fVar1 * fStack_b8;
      fStack_c4 = fStack_c4 + fVar1 * fStack_b4;
    }
    param_2[4] = local_c0;
    param_2[5] = fStack_bc;
    param_2[6] = fStack_b8;
    param_2[7] = fStack_b4;
    *param_2 = local_d0;
    param_2[1] = fStack_cc;
    param_2[2] = fStack_c8;
    param_2[3] = fStack_c4;
    param_2[7] = fStack_b4;
  }
  *param_1 = uVar3;
  return;
}



void FUN_009386c0(byte *param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  byte bVar3;
  int *piVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  uint uVar16;
  short sVar17;
  uint uVar18;
  undefined4 uVar19;
  char *pcVar20;
  float *pfVar21;
  undefined4 *in_ECX;
  undefined4 extraout_ECX;
  int iVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 *puVar25;
  byte *pbVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 local_138;
  uint local_134;
  uint local_130;
  float local_12c;
  uint local_128;
  undefined4 local_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined1 local_111;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float afStack_f0 [4];
  float afStack_e0 [4];
  float local_d0 [4];
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  float local_9c;
  int local_98;
  float local_90 [4];
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_60;
  float local_5c;
  int local_58;
  undefined1 local_50 [56];
  uint local_18;
  uint local_14;
  
  FUN_008fdaf0();
  local_128 = *(int *)in_ECX[4];
  local_138 = 0.0;
  pbVar26 = param_1;
  if (param_1[0x21] != 0) {
    do {
      uVar18 = (uint)*pbVar26;
      if (uVar18 < 3) {
        uVar19 = FUN_00936b70(local_d0,pbVar26);
        auVar8._4_4_ = -(uint)(ABS(local_d0[1]) < (float)in_ECX[0x25]);
        auVar8._0_4_ = -(uint)(ABS(local_d0[0]) < (float)in_ECX[0x24]);
        auVar8._8_4_ = -(uint)(ABS(local_d0[2]) < (float)in_ECX[0x26]);
        auVar8._12_4_ = -(uint)(ABS(local_d0[3]) < (float)in_ECX[0x27]);
        uVar19 = movmskps(uVar19,auVar8);
        if (((byte)uVar19 & 7) != 7) goto LAB_0093886e;
        local_9c = local_a0 * local_d0[local_98] - (float)in_ECX[local_98 + 0x18];
        iVar22 = *(int *)in_ECX[4];
        *(int *)in_ECX[4] = iVar22 + 0x30;
        FUN_00936c10(iVar22,pbVar26,local_d0);
        local_138 = (float)((int)local_138 + 1);
        pbVar26 = pbVar26 + 4;
      }
      else if (uVar18 < 7) {
        FUN_00936cb0(local_90,pbVar26);
        auVar9._4_4_ = -(uint)(ABS(fStack_7c) < (float)in_ECX[0x29]);
        auVar9._0_4_ = -(uint)(ABS(local_80) < (float)in_ECX[0x28]);
        auVar9._8_4_ = -(uint)(ABS(fStack_78) < (float)in_ECX[0x2a]);
        auVar9._12_4_ = -(uint)(ABS(fStack_74) < (float)in_ECX[0x2b]);
        uVar19 = movmskps(extraout_ECX,auVar9);
        if (((byte)uVar19 & 7) == 7) {
          local_5c = -(local_60 * local_90[local_58]) - (float)in_ECX[local_58 + 0x18];
          iVar22 = *(int *)in_ECX[4];
          *(int *)in_ECX[4] = iVar22 + 0x30;
          FUN_00936d70(iVar22,pbVar26,local_90);
          local_138 = (float)((int)local_138 + 1);
          pbVar26 = pbVar26 + 4;
        }
        else {
LAB_0093886e:
          if (*pbVar26 < 7) {
            param_1[0x20] = param_1[0x20] - 1;
          }
          (**(code **)(*(int *)in_ECX[3] + 0x10))(*(undefined2 *)(pbVar26 + 2));
          FUN_009363c0(local_138);
        }
      }
      else {
        local_14 = (uint)pbVar26[1];
        local_18 = uVar18;
        pcVar20 = (char *)FUN_00936810(&local_111,local_50);
        if (*pcVar20 == '\0') goto LAB_0093886e;
        iVar22 = *(int *)in_ECX[4];
        *(int *)in_ECX[4] = iVar22 + 0x30;
        FUN_00936e10(iVar22,pbVar26,local_50);
        local_138 = (float)((int)local_138 + 1);
        pbVar26 = pbVar26 + 4;
      }
    } while ((int)local_138 < (int)(uint)param_1[0x21]);
  }
  if (param_1[0x21] < 2) {
    param_1[0x23] = 0;
    local_124 = CONCAT31(local_124._1_3_,1);
  }
  else {
    if (param_1[0x23] == 0) {
      fVar10 = (float)in_ECX[0x10];
      fVar28 = (float)in_ECX[0x11];
      fVar29 = (float)in_ECX[0x12];
      fVar31 = *(float *)(param_1 + 0x30);
      fVar30 = *(float *)(param_1 + 0x34);
      fVar11 = *(float *)(param_1 + 0x38);
      fVar12 = (float)in_ECX[0xc];
      fVar13 = (float)in_ECX[0xd];
      fVar14 = (float)in_ECX[0xe];
      *(float *)(param_1 + 0x40) =
           (float)in_ECX[8] * fVar31 + (float)in_ECX[9] * fVar30 + (float)in_ECX[10] * fVar11;
      *(float *)(param_1 + 0x44) = fVar12 * fVar31 + fVar13 * fVar30 + fVar14 * fVar11;
      *(float *)(param_1 + 0x48) = fVar10 * fVar31 + fVar28 * fVar30 + fVar29 * fVar11;
      *(float *)(param_1 + 0x4c) = fVar10 * fVar31 + fVar28 * fVar30 + fVar29 * fVar11;
      param_1[0x23] = 1;
    }
    fVar10 = *(float *)(param_1 + 0x40);
    fVar28 = *(float *)(param_1 + 0x44);
    fVar29 = *(float *)(param_1 + 0x48);
    local_12c = *(float *)(param_1 + 0x38) *
                ((float)in_ECX[10] * fVar10 + (float)in_ECX[0xe] * fVar28 +
                (float)in_ECX[0x12] * fVar29) +
                *(float *)(param_1 + 0x34) *
                ((float)in_ECX[9] * fVar10 + (float)in_ECX[0xd] * fVar28 +
                (float)in_ECX[0x11] * fVar29) +
                *(float *)(param_1 + 0x30) *
                ((float)in_ECX[8] * fVar10 + (float)in_ECX[0xc] * fVar28 +
                (float)in_ECX[0x10] * fVar29);
    local_124 = CONCAT31(local_124._1_3_,local_12c < 0.95);
    if ((local_12c >= 0.95) && (param_1[0x22] != 0)) {
      return;
    }
  }
  bVar3 = param_1[0x21];
  if (bVar3 == 0) {
    pfVar21 = (float *)(in_ECX + 0x20);
  }
  else {
    local_12c = *(float *)(local_128 + 0x1c);
    iVar22 = bVar3 - 1;
    if (3 < iVar22) {
      pfVar21 = (float *)(iVar22 * 0x30 + -0x14 + local_128);
      iVar24 = (bVar3 - 5 >> 2) + 1;
      iVar22 = iVar22 + iVar24 * -4;
      do {
        if (pfVar21[0xc] <= local_12c) {
          local_12c = pfVar21[0xc];
        }
        if (*pfVar21 <= local_12c) {
          local_12c = *pfVar21;
        }
        if (pfVar21[-0xc] <= local_12c) {
          local_12c = pfVar21[-0xc];
        }
        local_138 = pfVar21[-0x18];
        if (local_138 <= local_12c) {
          local_12c = local_138;
        }
        pfVar21 = pfVar21 + -0x30;
        iVar24 = iVar24 + -1;
      } while (iVar24 != 0);
    }
    if (0 < iVar22) {
      pfVar21 = (float *)(iVar22 * 0x30 + 0x1c + local_128);
      do {
        local_138 = *pfVar21;
        if (local_138 <= local_12c) {
          local_12c = local_138;
        }
        pfVar21 = pfVar21 + -0xc;
        iVar22 = iVar22 + -1;
      } while (iVar22 != 0);
    }
    pfVar21 = &local_110;
    local_12c = local_12c - (float)in_ECX[0x20] * 0.05;
    local_110 = local_12c;
    fStack_10c = local_12c;
    fStack_108 = local_12c;
    fStack_104 = local_12c;
  }
  iVar22 = FUN_009377c0(pfVar21);
  if (iVar22 == 0) {
    local_138 = (float)((uint)local_138 & 0xffff);
    local_128 = FUN_00938190(param_1,&local_138,local_d0);
    if (((char)local_124 != '\0') && (local_128 != 0)) {
      pfVar21 = (float *)(param_1 + 0x30);
      if (local_98 < 3) {
        *pfVar21 = 0.0;
        param_1[0x34] = 0;
        param_1[0x35] = 0;
        param_1[0x36] = 0;
        param_1[0x37] = 0;
        param_1[0x38] = 0;
        param_1[0x39] = 0;
        param_1[0x3a] = 0;
        param_1[0x3b] = 0;
        param_1[0x3c] = 0;
        param_1[0x3d] = 0;
        param_1[0x3e] = 0;
        param_1[0x3f] = 0;
        pfVar21[(uint)local_138 & 0xff] = -local_a0;
      }
      else if (local_98 < 7) {
        local_12c = -local_a0;
        pfVar2 = (float *)(in_ECX + (((uint)local_138 & 0xff) - 2) * 4);
        fVar10 = pfVar2[1];
        fVar28 = pfVar2[2];
        fVar29 = pfVar2[3];
        *pfVar21 = local_12c * *pfVar2;
        *(float *)(param_1 + 0x34) = local_12c * fVar10;
        *(float *)(param_1 + 0x38) = local_12c * fVar28;
        *(float *)(param_1 + 0x3c) = local_12c * fVar29;
      }
      else {
        *pfVar21 = local_b0;
        *(undefined4 *)(param_1 + 0x34) = uStack_ac;
        *(undefined4 *)(param_1 + 0x38) = uStack_a8;
        *(undefined4 *)(param_1 + 0x3c) = uStack_a4;
      }
      if (param_1[0x23] != 0) {
        FUN_0088fe00(in_ECX[5],pfVar21);
        local_134 = 0;
        if (param_1[0x21] != 0) {
          local_130 = (((*(int *)in_ECX[4] - (int)in_ECX[4]) + -0x30) / 0x30 - (uint)param_1[0x21])
                      * 0x30;
          do {
            uVar18 = local_134;
            piVar4 = (int *)in_ECX[4];
            pfVar21 = (float *)(local_130 + 0x40 + (int)piVar4);
            local_12c = pfVar21[2] * fStack_108 + pfVar21[1] * fStack_10c + *pfVar21 * local_110;
            if (0.95 <= local_12c) {
              uVar18 = local_134 + 1;
              local_130 = local_130 + 0x30;
              local_134 = uVar18;
            }
            else {
              iVar22 = *piVar4;
              uVar19 = *(undefined4 *)(iVar22 + -0x2c);
              uVar23 = *(undefined4 *)(iVar22 + -0x28);
              uVar15 = *(undefined4 *)(iVar22 + -0x24);
              puVar1 = (undefined4 *)(local_130 + 0x30 + (int)piVar4);
              *puVar1 = *(undefined4 *)(iVar22 + -0x30);
              puVar1[1] = uVar19;
              puVar1[2] = uVar23;
              puVar1[3] = uVar15;
              uVar19 = *(undefined4 *)(iVar22 + -0x1c);
              uVar23 = *(undefined4 *)(iVar22 + -0x18);
              uVar15 = *(undefined4 *)(iVar22 + -0x14);
              puVar1[4] = *(undefined4 *)(iVar22 + -0x20);
              puVar1[5] = uVar19;
              puVar1[6] = uVar23;
              puVar1[7] = uVar15;
              *(undefined2 *)(puVar1 + 8) = *(undefined2 *)(iVar22 + -0x10);
              puVar25 = (undefined1 *)((int)puVar1 + 0x22);
              iVar24 = 0xe;
              do {
                *puVar25 = puVar25[(iVar22 + -0x30) - (int)puVar1];
                puVar25 = puVar25 + 1;
                iVar24 = iVar24 + -1;
              } while (iVar24 != 0);
              if (param_1[local_134 * 4] < 7) {
                param_1[0x20] = param_1[0x20] - 1;
              }
              (**(code **)(*(int *)in_ECX[3] + 0x10))(*(undefined2 *)(param_1 + local_134 * 4 + 2));
              FUN_009363c0(uVar18);
              *(int *)in_ECX[4] = *(int *)in_ECX[4] + -0x30;
            }
          } while ((int)uVar18 < (int)(uint)param_1[0x21]);
        }
        if (param_1[0x21] < 2) {
          param_1[0x23] = 0;
        }
        else {
          fVar10 = (float)in_ECX[0x10];
          fVar28 = (float)in_ECX[0x11];
          fVar29 = (float)in_ECX[0x12];
          fVar31 = *(float *)(param_1 + 0x30);
          fVar30 = *(float *)(param_1 + 0x34);
          fVar11 = *(float *)(param_1 + 0x38);
          fVar12 = (float)in_ECX[0xc];
          fVar13 = (float)in_ECX[0xd];
          fVar14 = (float)in_ECX[0xe];
          *(float *)(param_1 + 0x40) =
               (float)in_ECX[8] * fVar31 + (float)in_ECX[9] * fVar30 + (float)in_ECX[10] * fVar11;
          *(float *)(param_1 + 0x44) = fVar12 * fVar31 + fVar13 * fVar30 + fVar14 * fVar11;
          *(float *)(param_1 + 0x48) = fVar10 * fVar31 + fVar28 * fVar30 + fVar29 * fVar11;
          *(float *)(param_1 + 0x4c) = fVar10 * fVar31 + fVar28 * fVar30 + fVar29 * fVar11;
          param_1[0x23] = 1;
        }
      }
    }
    if (local_128 == 2) {
      if ((byte)local_138 < 7) {
        if ((byte)local_138 < 3) {
          pfVar21 = (float *)in_ECX[6];
        }
        else {
          pfVar21 = (float *)in_ECX[5];
          local_c0 = local_d0[0];
          fStack_bc = local_d0[1];
          fStack_b8 = local_d0[2];
        }
        iVar22 = 0;
        if (param_1[0x21] != 0) {
          iVar24 = 0;
          do {
            if (param_1[iVar22 * 4] < 7) {
              pfVar2 = (float *)(iVar24 + 0x30 + in_ECX[4]);
              fVar28 = (*pfVar21 * local_c0 + pfVar21[4] * fStack_bc +
                       pfVar21[8] * fStack_b8 + pfVar21[0xc]) - *pfVar2;
              fVar29 = (pfVar21[1] * local_c0 + pfVar21[5] * fStack_bc +
                       pfVar21[9] * fStack_b8 + pfVar21[0xd]) - pfVar2[1];
              fVar31 = (pfVar21[2] * local_c0 + pfVar21[6] * fStack_bc +
                       pfVar21[10] * fStack_b8 + pfVar21[0xe]) - pfVar2[2];
              fVar10 = (float)in_ECX[0x2c] * (float)in_ECX[0x2c] + 1.1920929e-07;
              local_12c = fVar31 * fVar31 + fVar29 * fVar29 + fVar28 * fVar28;
              if (local_12c < fVar10 != (local_12c == fVar10)) {
                return;
              }
            }
            iVar22 = iVar22 + 1;
            iVar24 = iVar24 + 0x30;
          } while (iVar22 < (int)(uint)param_1[0x21]);
        }
      }
      if (param_1[0x21] < 8) {
        iVar22 = FUN_00936460(*in_ECX,in_ECX[1],&local_138);
        if (-1 < iVar22) {
          local_134 = *(int *)in_ECX[4];
          if (local_98 < 3) {
            FUN_00936c10(local_134,&local_138,local_d0);
          }
          else if (local_98 < 7) {
            FUN_00936d70(local_134,&local_138,local_d0);
          }
          else {
            FUN_00936e10(local_134,&local_138,local_d0);
          }
          if (1 < param_1[0x21]) {
            iVar24 = *(int *)in_ECX[4];
            local_12c = *(float *)(iVar24 + -0x18) * *(float *)(local_134 + 0x18) +
                        *(float *)(iVar24 + -0x1c) * *(float *)(local_134 + 0x14) +
                        *(float *)(iVar24 + -0x20) * *(float *)(local_134 + 0x10);
            if (local_12c < 0.0 != (local_12c == 0.0)) {
              FUN_009363c0(iVar22);
              return;
            }
          }
          sVar17 = (**(code **)(*(int *)in_ECX[3] + 8))(*in_ECX,in_ECX[1],in_ECX[2],local_134);
          uVar18 = (uint)local_138;
          *(short *)(param_1 + iVar22 * 4 + 2) = sVar17;
          if (sVar17 == -1) {
            FUN_009363c0(iVar22);
          }
          else {
            *(int *)in_ECX[4] = *(int *)in_ECX[4] + 0x30;
            local_138 = (float)CONCAT22(*(undefined2 *)(param_1 + iVar22 * 4 + 2),
                                        (undefined2)local_138);
            uVar16 = (uint)local_138;
            *(undefined2 *)(local_134 + 0x20) = *(undefined2 *)(param_1 + iVar22 * 4 + 2);
            local_138._0_1_ = (byte)uVar18;
            bVar27 = (byte)local_138 < 7;
            local_138 = (float)uVar16;
            if (bVar27) {
              param_1[0x20] = param_1[0x20] + 1;
            }
          }
        }
        if (param_1[0x21] != 0) {
          piVar4 = (int *)in_ECX[4];
          local_12c = (float)(uint)param_1[0x21];
          iVar22 = ((*piVar4 - (int)piVar4) + -0x30) / 0x30 - (int)local_12c;
          pfVar2 = (float *)in_ECX[5];
          pfVar5 = (float *)in_ECX[6];
          pfVar21 = (float *)(piVar4 + iVar22 * 0xc + 0x10);
          fVar10 = *pfVar21;
          fVar28 = pfVar21[1];
          fVar29 = pfVar21[2];
          fStack_100 = *pfVar5 * fVar10 + pfVar5[1] * fVar28 + pfVar5[2] * fVar29;
          fStack_fc = pfVar5[4] * fVar10 + pfVar5[5] * fVar28 + pfVar5[6] * fVar29;
          fStack_f8 = pfVar5[8] * fVar10 + pfVar5[9] * fVar28 + pfVar5[10] * fVar29;
          fStack_f4 = pfVar5[8] * fVar10 + pfVar5[9] * fVar28 + pfVar5[10] * fVar29;
          fVar31 = *pfVar2 * fVar10 + pfVar2[1] * fVar28 + pfVar2[2] * fVar29;
          fVar30 = pfVar2[4] * fVar10 + pfVar2[5] * fVar28 + pfVar2[6] * fVar29;
          local_110 = -fVar31;
          fStack_10c = -fVar30;
          fStack_108 = -(pfVar2[8] * fVar10 + pfVar2[9] * fVar28 + pfVar2[10] * fVar29);
          fStack_104 = -(pfVar2[8] * fVar10 + pfVar2[9] * fVar28 + pfVar2[10] * fVar29);
          afStack_e0[3] = ABS(fStack_104);
          afStack_e0[0] = ABS(local_110);
          afStack_e0[1] = ABS(fStack_10c);
          afStack_e0[2] = ABS(fStack_108);
          afStack_f0[0] = ABS(fStack_100);
          afStack_f0[1] = ABS(fStack_fc);
          afStack_f0[3] = ABS(fStack_f4);
          afStack_f0[2] = ABS(fStack_f8);
          bVar27 = ABS(local_110) <= ABS(fStack_10c);
          if (bVar27) {
            uStack_11c = 0x20;
          }
          else {
            uStack_11c = 0x10;
          }
          local_130 = (uint)bVar27;
          uVar18 = (uint)bVar27;
          if (afStack_e0[uVar18] < ABS(fStack_108)) {
            uVar18 = 2;
            local_130 = 2;
            uStack_11c = 0x40;
          }
          if (afStack_f0[0] <= afStack_f0[1]) {
            uStack_118 = 0x20;
          }
          else {
            uStack_118 = 0x10;
          }
          local_134 = (uint)(afStack_f0[0] <= afStack_f0[1]);
          if (afStack_f0[local_134] < ABS(fStack_f8)) {
            local_134 = 2;
            uStack_118 = 0x40;
          }
          if ((0.98 <= afStack_e0[uVar18]) && (0.98 <= afStack_f0[local_134])) {
            auVar7._4_4_ = fStack_fc;
            auVar7._0_4_ = fStack_100;
            auVar7._8_4_ = fStack_f8;
            auVar7._12_4_ = fStack_f4;
            uVar23 = movmskps(local_134,auVar7);
            uVar18 = (uint)in_ECX[uVar18 + 0x30] >> 0x1c & 0xffffff08;
            local_124._2_2_ = (undefined2)((uint)local_138 >> 0x10);
            auVar6._8_4_ = fStack_108;
            auVar6._0_8_ = CONCAT44(fVar30,fVar31) ^ 0x8000000080000000;
            auVar6._12_4_ = fStack_104;
            uVar19 = movmskps(uVar18,auVar6);
            local_124 = CONCAT31(CONCAT21(local_124._2_2_,((byte)uVar23 & 7) << 4 | (byte)uVar18),
                                 (undefined1)local_130);
            local_128 = (uint)CONCAT11(((byte)uVar19 & 7) << 4 |
                                       (byte)((uint)in_ECX[local_134 + 0x34] >> 0x1c) & 8,
                                       (char)local_134 + '\x04');
            fStack_120 = 1.0;
            if (local_12c != 0.0) {
              pfVar21 = (float *)(iVar22 * 0x30 + 0x4c + in_ECX[4]);
              uVar18 = (uint)param_1[0x21];
              do {
                if (*pfVar21 < fStack_120) {
                  fStack_120 = *pfVar21;
                }
                pfVar21 = pfVar21 + 0xc;
                uVar18 = uVar18 - 1;
              } while (uVar18 != 0);
            }
            fVar10 = fStack_120;
            FUN_00936ec0(param_1,local_124,uStack_118,fStack_120);
            FUN_00937190(param_1,local_128,uStack_11c,fVar10);
            if (3 < param_1[0x20]) {
              param_1[0x22] = 1;
              return;
            }
            if (DAT_00ba81cc != '\0') {
              iVar22 = local_134 * 4;
              local_128 = *(uint *)(&UNK_00aa1c94 + local_130 * 4);
              local_124 = *(undefined4 *)(&UNK_00aa1c98 + local_130 * 4);
              local_134 = *(uint *)(&UNK_00aa1c98 + local_134 * 4);
              fStack_100 = -fStack_100;
              fStack_fc = -fStack_fc;
              fStack_f8 = -fStack_f8;
              fStack_f4 = -fStack_f4;
              local_130 = *(uint *)(&UNK_00aa1c94 + iVar22);
              FUN_009376e0(param_1,local_128,*(uint *)(&UNK_00aa1c94 + iVar22),local_124,local_134,
                           &local_110,&fStack_100,fVar10);
              FUN_009376e0(param_1,local_128,local_134,local_124,local_130,&local_110,&fStack_100,
                           fVar10);
              FUN_009376e0(param_1,local_124,local_130,local_128,local_134,&local_110,&fStack_100,
                           fVar10);
              FUN_009376e0(param_1,local_124,local_134,local_128,local_130,&local_110,&fStack_100,
                           fVar10);
            }
            FUN_009365a0(param_1,uStack_11c,uStack_118);
          }
        }
      }
    }
  }
  return;
}



void FUN_009392e0(void)

{
  undefined4 *in_ECX;
  
  FUN_00939b60(in_ECX + 0xc,in_ECX[2]);
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_00939300(short param_1)

{
  int iVar1;
  int in_ECX;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(in_ECX + 0x32) != 0) {
    psVar2 = (short *)(in_ECX + 0x36);
    while (*psVar2 != param_1) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 4;
      if ((int)(uint)*(byte *)(in_ECX + 0x32) <= iVar1) {
        return;
      }
    }
    FUN_00939b00(in_ECX + 0x30,iVar1);
  }
  return;
}



void FUN_00939340(undefined2 param_1)

{
  int iVar1;
  int in_ECX;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(in_ECX + 0x32) != 0) {
    psVar2 = (short *)(in_ECX + 0x36);
    while (*psVar2 != -1) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 4;
      if ((int)(uint)*(byte *)(in_ECX + 0x32) <= iVar1) {
        return;
      }
    }
    *(undefined2 *)(in_ECX + 0x36 + iVar1 * 8) = param_1;
  }
  return;
}



void FUN_00939380(short param_1)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (*(byte *)(in_ECX + 0x32) != 0) {
    puVar1 = (undefined1 *)(in_ECX + 0x34);
    while (*(short *)(puVar1 + 2) != param_1) {
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 8;
      if ((int)(uint)*(byte *)(in_ECX + 0x32) <= iVar2) {
        return;
      }
    }
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return;
}



void FUN_009393b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  FUN_0093f0e0(param_1,param_2,param_3);
  *in_ECX = &PTR_LAB_00aa1d60;
  in_ECX[0xc] = 0;
  return;
}



undefined4 * FUN_009393e0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined4 unaff_retaddr;
  int in_stack_00000010;
  
  if (in_stack_00000010 != 0) {
    puVar1 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x80,0x1c);
    *(undefined2 *)(puVar1 + 1) = 0x80;
    FUN_0093f0e0(unaff_EDI,unaff_retaddr,in_stack_00000010);
    *puVar1 = &PTR_LAB_00aa1d60;
    puVar1[0xc] = 0;
    return puVar1;
  }
  iVar2 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x1c);
  *(undefined2 *)(iVar2 + 4) = 0x30;
  puVar1 = (undefined4 *)FUN_0093f0e0(unaff_EDI,unaff_retaddr,0);
  return puVar1;
}



void FUN_00939450(int *param_1,int *param_2,int param_3,uint *param_4)

{
  undefined4 *puVar1;
  byte *pbVar2;
  float fVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *piVar6;
  float *pfVar7;
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
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  int *piVar29;
  short sVar30;
  int iVar31;
  uint uVar32;
  int in_ECX;
  float *pfVar33;
  uint uVar34;
  int unaff_EBX;
  undefined4 *unaff_EDI;
  int iVar35;
  uint uVar36;
  undefined4 *puVar37;
  undefined1 *local_1c4;
  int local_1c0;
  int local_1bc;
  int local_1b8;
  undefined4 local_1b4;
  int *local_1b0;
  int *local_1ac;
  int local_1a8;
  int *local_1a4;
  undefined1 local_1a0 [96];
  undefined4 local_140;
  float afStack_13c [67];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_1a4 = *(int **)(in_ECX + 8);
  local_1ac = param_2;
  local_1a8 = param_3;
  local_1b0 = param_1;
  FUN_008b1ff0(param_1[2],param_2[2]);
  local_1bc = *local_1b0;
  local_1b8 = *local_1ac;
  local_1c4 = local_1a0;
  local_1c0 = local_1b0[2];
  local_1b4 = *(undefined4 *)(local_1a8 + 8);
  puVar1 = (undefined4 *)(in_ECX + 0x20);
  pbVar2 = (byte *)(in_ECX + 0x30);
  iVar35 = in_ECX + 0xc;
  iVar31 = FUN_0093d4a0(&local_1c4,iVar35,puVar1,&local_140);
  if (iVar31 == 1) {
    if (*(char *)(in_ECX + 0x32) != '\0') {
      FUN_00939b60(pbVar2,local_1a4);
      return;
    }
  }
  else {
    uVar32 = FUN_0093a620(pbVar2,iVar35);
    piVar29 = local_1ac;
    uVar32 = uVar32 & 0xff;
    puVar5 = (undefined4 *)*param_4;
    bVar4 = *(byte *)(in_ECX + 0x32);
    if (uVar32 < bVar4) {
      local_18 = *(float *)(local_1a8 + 8);
      piVar6 = (int *)*local_1ac;
      local_20 = (float)((int *)*local_1b0)[3];
      local_1c = (float)piVar6[3];
      local_30 = *puVar1;
      uStack_2c = *(undefined4 *)(in_ECX + 0x24);
      uStack_28 = *(undefined4 *)(in_ECX + 0x28);
      uStack_24 = *(undefined4 *)(in_ECX + 0x2c);
      local_14 = local_20 + local_1c + local_18;
      local_14 = local_14 * local_14;
      if (bVar4 != 0) {
        (**(code **)(*(int *)*local_1b0 + 0x28))
                  (in_ECX + 0x34 + (uint)bVar4 * 8,*pbVar2,afStack_13c + 3);
        pfVar33 = *(float **)(uVar32 + 8);
        uVar34 = (uint)*pbVar2;
        fVar3 = *pfVar33;
        fVar8 = pfVar33[1];
        fVar9 = pfVar33[2];
        fVar10 = pfVar33[3];
        fVar11 = pfVar33[4];
        fVar12 = pfVar33[5];
        fVar13 = pfVar33[6];
        fVar14 = pfVar33[7];
        fVar15 = pfVar33[8];
        fVar16 = pfVar33[9];
        fVar17 = pfVar33[10];
        fVar18 = pfVar33[0xb];
        fVar19 = pfVar33[0xc];
        fVar20 = pfVar33[0xd];
        fVar21 = pfVar33[0xe];
        fVar22 = pfVar33[0xf];
        pfVar33 = afStack_13c;
        uVar36 = uVar34;
        do {
          fVar23 = *pfVar33;
          fVar24 = pfVar33[1];
          fVar25 = pfVar33[2];
          *pfVar33 = fVar3 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
          pfVar33[1] = fVar8 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
          pfVar33[2] = fVar9 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
          pfVar33[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
          pfVar33 = pfVar33 + 4;
          uVar36 = uVar36 - 1;
        } while (0 < (int)uVar36);
        pfVar33 = afStack_13c + uVar34 * 4;
        (**(code **)(*piVar6 + 0x28))(unaff_EBX + uVar34 * 2,*(undefined1 *)(in_ECX + 0x31),pfVar33)
        ;
        pfVar7 = (float *)piVar29[2];
        uVar36 = (uint)*(byte *)(in_ECX + 0x31);
        fVar3 = *pfVar7;
        fVar8 = pfVar7[1];
        fVar9 = pfVar7[2];
        fVar10 = pfVar7[3];
        fVar11 = pfVar7[4];
        fVar12 = pfVar7[5];
        fVar13 = pfVar7[6];
        fVar14 = pfVar7[7];
        fVar15 = pfVar7[8];
        fVar16 = pfVar7[9];
        fVar17 = pfVar7[10];
        fVar18 = pfVar7[0xb];
        fVar19 = pfVar7[0xc];
        fVar20 = pfVar7[0xd];
        fVar21 = pfVar7[0xe];
        fVar22 = pfVar7[0xf];
        do {
          fVar23 = *pfVar33;
          fVar24 = pfVar33[1];
          fVar25 = pfVar33[2];
          *pfVar33 = fVar3 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
          pfVar33[1] = fVar8 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
          pfVar33[2] = fVar9 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
          pfVar33[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
          pfVar33 = pfVar33 + 4;
          uVar36 = uVar36 - 1;
        } while (0 < (int)uVar36);
      }
      FUN_00939bb0(pbVar2,afStack_13c + 3,uVar32,param_4,local_1a4);
    }
    puVar37 = (undefined4 *)*param_4;
    *puVar37 = local_140;
    puVar37[1] = afStack_13c[0];
    puVar37[2] = afStack_13c[1];
    puVar37[3] = afStack_13c[2];
    uVar26 = *(undefined4 *)(in_ECX + 0x24);
    uVar27 = *(undefined4 *)(in_ECX + 0x28);
    uVar28 = *(undefined4 *)(in_ECX + 0x2c);
    puVar37[4] = *puVar1;
    puVar37[5] = uVar26;
    puVar37[6] = uVar27;
    puVar37[7] = uVar28;
    if (uVar32 == 0) {
      if ((int)*(char *)(in_ECX + 0x15) + (int)*(char *)(in_ECX + 0x14) == 4) {
        fVar3 = *(float *)(*(int *)(local_1a8 + 0x28) + 4);
      }
      else {
        fVar3 = *(float *)(*(int *)(local_1a8 + 0x28) + 8);
      }
      if (*(float *)(in_ECX + 0x2c) < fVar3) {
        iVar31 = FUN_0093ab40(pbVar2,local_1b0,local_1ac,local_1a8,iVar35,puVar37,puVar5,local_1a4,1
                             );
        if (iVar31 == 4) {
          if (*(short *)(puVar37 + 8) == -1) {
            sVar30 = (**(code **)(*local_1a4 + 8))(local_1b0,local_1ac,local_1a8,puVar37);
            *(short *)(puVar37 + 8) = sVar30;
            if (sVar30 == -1) {
              FUN_00939b00(pbVar2,0);
              puVar37 = unaff_EDI;
            }
            else {
              *(short *)(in_ECX + 0x36) = sVar30;
              *param_4 = *param_4 + 0x30;
            }
          }
          else {
            *param_4 = *param_4 + 0x30;
          }
        }
        else {
          puVar37 = puVar5;
          if (iVar31 != 5) {
            if (iVar31 == 6) {
              *param_4 = *param_4 - 0x30;
            }
            else {
              puVar37 = puVar5 + iVar31 * 0xc;
            }
          }
        }
      }
    }
    else {
      *(undefined2 *)(puVar37 + 8) = *(undefined2 *)(in_ECX + 0x36);
      *param_4 = *param_4 + 0x30;
    }
    if ((param_4[0xc10] != 0) && (puVar37 < (undefined4 *)*param_4)) {
      **(uint **)(param_4[0xc10] + 4) = (uint)puVar37;
      *(int *)(param_4[0xc10] + 4) = *(int *)(param_4[0xc10] + 4) + 4;
    }
  }
  return;
}



void FUN_009397f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int in_ECX;
  int iVar8;
  int unaff_FS_OFFSET;
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtGskAgent";
    puVar3[3] = &DAT_00a9bc80;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(*(int *)(iVar1 + iVar8 * 4) + 0x1a4) = puVar3 + 4;
  }
  if (*(float *)(in_ECX + 0x18) != *(float *)(param_3 + 0x10)) {
    iVar2 = *(int *)(param_2 + 8);
    iVar4 = *(int *)(param_1 + 8);
    fVar7 = *(float *)(param_3 + 0x18) * *(float *)(iVar4 + 0x5c);
    fVar6 = *(float *)(param_3 + 0x18) * *(float *)(iVar2 + 0x5c);
    if (*(float *)(param_3 + 8) < *(float *)(in_ECX + 0x2c)) {
      *(float *)(in_ECX + 0x2c) =
           *(float *)(in_ECX + 0x2c) -
           ((fVar7 * (*(float *)(iVar4 + 0x44) - *(float *)(iVar4 + 0x54)) +
            fVar6 * (*(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x44))) *
            *(float *)(in_ECX + 0x24) +
            (fVar7 * (*(float *)(iVar4 + 0x40) - *(float *)(iVar4 + 0x50)) +
            fVar6 * (*(float *)(iVar2 + 0x50) - *(float *)(iVar2 + 0x40))) *
            *(float *)(in_ECX + 0x20) +
           (fVar7 * (*(float *)(iVar4 + 0x48) - *(float *)(iVar4 + 0x58)) +
           fVar6 * (*(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x48))) *
           *(float *)(in_ECX + 0x28) +
           *(float *)(iVar2 + 0xa0) * *(float *)(iVar2 + 0x9c) * fVar6 +
           *(float *)(iVar4 + 0xa0) * *(float *)(iVar4 + 0x9c) * fVar7);
      if (*(float *)(param_3 + 8) < *(float *)(in_ECX + 0x2c)) goto LAB_00939996;
    }
  }
  iVar2 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "StGsk";
    iVar8 = _tls_index;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(*(int *)(iVar1 + iVar8 * 4) + 0x1a4) = puVar3 + 3;
  }
  *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_3 + 0x14);
  FUN_00939450(param_1,param_2,param_3,param_4);
LAB_00939996:
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_009399e0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *in_ECX;
  int iVar7;
  int iVar8;
  uint uVar9;
  char local_50 [16];
  uint auStack_40 [16];
  
  bVar4 = in_ECX[2];
  local_50[0] = '\0';
  local_50[1] = '\0';
  local_50[2] = '\0';
  local_50[3] = '\0';
  local_50[4] = '\0';
  local_50[5] = '\0';
  local_50[6] = '\0';
  local_50[7] = '\0';
  local_50[8] = '\0';
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  local_50[0xc] = '\0';
  local_50[0xd] = '\0';
  local_50[0xe] = '\0';
  local_50[0xf] = '\0';
  if (bVar4 != 0) {
    uVar9 = (uint)in_ECX[2];
    pbVar6 = in_ECX;
    do {
      bVar1 = pbVar6[5];
      bVar2 = pbVar6[4];
      local_50[pbVar6[8] >> 4] = '\x01';
      local_50[pbVar6[9] >> 4] = '\x01';
      if (2 < (uint)bVar2 + (uint)bVar1) {
        local_50[pbVar6[10] >> 4] = '\x01';
      }
      if ((uint)bVar2 + (uint)bVar1 == 4) {
        local_50[pbVar6[0xb] >> 4] = '\x01';
      }
      uVar9 = uVar9 - 1;
      pbVar6 = pbVar6 + 8;
    } while (uVar9 != 0);
  }
  bVar1 = *in_ECX;
  iVar8 = (uint)bVar4 * 8 + 4;
  bVar4 = in_ECX[1];
  iVar5 = 0;
  iVar7 = 0;
  uVar9 = 0;
  if ((uint)bVar4 + (uint)bVar1 != 0) {
    do {
      cVar3 = local_50[iVar5];
      auStack_40[iVar5] = uVar9;
      if (cVar3 != '\0') {
        *(undefined2 *)(in_ECX + iVar7 * 2 + iVar8) = *(undefined2 *)(in_ECX + iVar5 * 2 + iVar8);
        iVar7 = iVar7 + 1;
        uVar9 = uVar9 + 0x10;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)((uint)bVar4 + (uint)bVar1));
  }
  bVar4 = (byte)(auStack_40[*in_ECX] >> 4);
  *in_ECX = bVar4;
  iVar8 = 0;
  in_ECX[1] = (char)iVar7 - bVar4;
  if (in_ECX[2] != 0) {
    pbVar6 = in_ECX + 9;
    do {
      pbVar6[-1] = (byte)auStack_40[pbVar6[-1] >> 4];
      *pbVar6 = (byte)auStack_40[*pbVar6 >> 4];
      pbVar6[1] = (byte)auStack_40[pbVar6[1] >> 4];
      pbVar6[2] = (byte)auStack_40[pbVar6[2] >> 4];
      iVar8 = iVar8 + 1;
      pbVar6 = pbVar6 + 8;
    } while (iVar8 < (int)(uint)in_ECX[2]);
  }
  return;
}



void FUN_00939b00(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar1 = param_1[2] - 1;
  param_1[2] = bVar1;
  *(undefined4 *)(param_1 + param_2 * 8 + 4) = *(undefined4 *)(param_1 + (uint)bVar1 * 8 + 4);
  *(undefined4 *)(param_1 + param_2 * 8 + 8) = *(undefined4 *)(param_1 + (uint)bVar1 * 8 + 8);
  pbVar3 = param_1 + (uint)param_1[2] * 8;
  pbVar4 = pbVar3 + 0xc;
  iVar2 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
  if (-1 < iVar2) {
    iVar2 = iVar2 + 1;
    do {
      pbVar3 = pbVar3 + 4;
      *(undefined4 *)pbVar3 = *(undefined4 *)pbVar4;
      pbVar4 = pbVar4 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_009399e0();
  return;
}



void FUN_00939b60(undefined1 *param_1,int *param_2)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (param_1[2] != '\0') {
    psVar2 = (short *)(param_1 + 6);
    do {
      if (*psVar2 != -1) {
        (**(code **)(*param_2 + 0x10))(*psVar2);
      }
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 4;
    } while (iVar1 < (int)(uint)(byte)param_1[2]);
  }
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



void FUN_00939bb0(byte *param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  byte *pbVar18;
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
  float fVar37;
  float fVar44;
  float fVar45;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  int local_104;
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  
  uVar14 = (uint)param_1[2];
  local_104 = param_3;
  if (param_3 < (int)uVar14) {
    pbVar18 = param_1 + param_3 * 8 + 4;
    do {
      pfVar5 = (float *)*param_4;
      switch((uint)pbVar18[1] + (uint)*pbVar18 * 4) {
      default:
        goto switchD_00939c0b_caseD_0;
      case 5:
        pfVar1 = (float *)((uint)pbVar18[4] + param_2);
        pfVar2 = (float *)((uint)pbVar18[5] + param_2);
        fVar31 = *pfVar1 - *pfVar2;
        fVar32 = pfVar1[1] - pfVar2[1];
        fVar33 = pfVar1[2] - pfVar2[2];
        if (fVar33 * fVar33 + fVar32 * fVar32 + fVar31 * fVar31 <= *(float *)(param_2 + 0x11c)) {
          local_b0 = *(float *)(param_2 + 0x100);
          fStack_ac = *(float *)(param_2 + 0x104);
          fStack_a8 = *(float *)(param_2 + 0x108);
          fStack_a4 = *(float *)(param_2 + 0x10c);
          uVar15 = 0;
          local_d0 = *pfVar1;
          fStack_cc = pfVar1[1];
          fStack_c8 = pfVar1[2];
          fStack_c4 = pfVar1[3];
          local_c0 = fVar31;
          fStack_bc = fVar32;
          fStack_b8 = fVar33;
        }
        else {
LAB_00939c65:
          uVar15 = 1;
        }
        break;
      case 6:
        pfVar1 = (float *)((uint)pbVar18[4] + param_2);
        local_d0 = *pfVar1;
        fStack_cc = pfVar1[1];
        fStack_c8 = pfVar1[2];
        fStack_c4 = pfVar1[3];
        local_b0 = *(float *)(param_2 + 0x100);
        fStack_ac = *(float *)(param_2 + 0x104);
        fStack_a8 = *(float *)(param_2 + 0x108);
        fStack_a4 = *(float *)(param_2 + 0x10c);
        pfVar1 = (float *)((uint)pbVar18[6] + param_2);
        fVar31 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        pfVar1 = (float *)((uint)pbVar18[5] + param_2);
        fVar11 = *pfVar1;
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar20 = fVar31 - local_d0;
        fVar23 = fVar32 - fStack_cc;
        fVar27 = fVar33 - fStack_c8;
        fVar19 = fVar31 - fVar11;
        fVar22 = fVar32 - fVar12;
        fVar26 = fVar33 - fVar13;
        fVar21 = fVar22 * fVar27 - fVar26 * fVar23;
        fVar25 = fVar26 * fVar20 - fVar19 * fVar27;
        fVar24 = fVar19 * fVar23 - fVar22 * fVar20;
        fVar21 = fVar21 * fVar21;
        fVar25 = fVar25 * fVar25;
        fVar24 = fVar24 * fVar24;
        fVar20 = fVar20 * fVar19 + fVar23 * fVar22 + fVar27 * fVar26;
        fVar23 = (local_d0 - fVar11) * fVar19 + (fStack_cc - fVar12) * fVar22 +
                 (fStack_c8 - fVar13) * fVar26;
        fVar27 = fVar21 + fVar25 + fVar24;
        if (((fVar26 * fVar26 + fVar22 * fVar22 + fVar19 * fVar19) * *(float *)(param_2 + 0x11c) <
             fVar27) ||
           (auVar9._4_4_ = fVar23, auVar9._0_4_ = fVar20, auVar9._8_4_ = fVar21 + fVar25 + fVar24,
           auVar9._12_4_ = fVar27, uVar15 = movmskps((uint)pbVar18[6] + param_2,auVar9),
           (uVar15 & 3) != 0)) goto LAB_00939c65;
        fVar20 = fVar20 / (fVar20 + fVar23);
        uVar15 = 0;
        local_c0 = local_d0 - ((1.0 - fVar20) * fVar11 + fVar20 * fVar31);
        fStack_bc = fStack_cc - ((1.0 - fVar20) * fVar12 + fVar20 * fVar32);
        fStack_b8 = fStack_c8 - ((1.0 - fVar20) * fVar13 + fVar20 * fVar33);
        break;
      case 7:
        pfVar1 = (float *)((uint)pbVar18[7] + param_2);
        fVar31 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        pfVar2 = (float *)((uint)pbVar18[5] + param_2);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        pfVar3 = (float *)((uint)pbVar18[6] + param_2);
        fVar19 = *pfVar3;
        fVar22 = pfVar3[1];
        fVar26 = pfVar3[2];
        pfVar4 = (float *)((uint)pbVar18[4] + param_2);
        local_d0 = *pfVar4;
        fStack_cc = pfVar4[1];
        fStack_c8 = pfVar4[2];
        fStack_c4 = pfVar4[3];
        fVar28 = fVar11 - fVar31;
        fVar30 = fVar12 - fVar32;
        fVar35 = fVar13 - fVar33;
        fVar37 = pfVar2[3] - pfVar1[3];
        fVar20 = fVar31 - fVar19;
        fVar27 = fVar32 - fVar22;
        fVar21 = fVar33 - fVar26;
        fVar24 = pfVar1[3] - pfVar3[3];
        local_c0 = local_d0 - fVar11;
        fStack_bc = fStack_cc - fVar12;
        fStack_b8 = fStack_c8 - fVar13;
        fVar29 = fVar27 * fVar35 - fVar21 * fVar30;
        fVar34 = fVar21 * fVar28 - fVar20 * fVar35;
        fVar36 = fVar20 * fVar30 - fVar27 * fVar28;
        fVar23 = fVar34 * fVar34;
        fVar25 = fVar36 * fVar36;
        auVar38._4_4_ = fVar23;
        auVar38._0_4_ = fVar23;
        auVar38._8_4_ = fVar23;
        auVar38._12_4_ = fVar23;
        auVar39._4_12_ = auVar38._4_12_;
        auVar39._0_4_ = fVar23 + fVar29 * fVar29;
        auVar7._4_4_ = fVar25;
        auVar7._0_4_ = fVar25 + auVar39._0_4_;
        auVar7._8_4_ = fVar25;
        auVar7._12_4_ = fVar25;
        auVar43 = rsqrtss(auVar39,auVar7);
        fVar23 = auVar43._0_4_;
        fVar23 = fVar23 * 0.5 * (3.0 - (fVar25 + auVar39._0_4_) * fVar23 * fVar23);
        local_b0 = fVar23 * fVar29;
        fStack_ac = fVar23 * fVar34;
        fStack_a8 = fVar23 * fVar36;
        fStack_a4 = fVar23 * (fVar24 * fVar37 - fVar24 * fVar37);
        auVar40._0_4_ =
             ((fStack_cc - fVar22) * fVar21 - (fStack_c8 - fVar26) * fVar27) * local_b0 +
             ((fStack_c8 - fVar26) * fVar20 - (local_d0 - fVar19) * fVar21) * fStack_ac +
             ((local_d0 - fVar19) * fVar27 - (fStack_cc - fVar22) * fVar20) * fStack_a8;
        auVar40._4_4_ =
             ((fStack_cc - fVar32) * fVar35 - (fStack_c8 - fVar33) * fVar30) * local_b0 +
             ((fStack_c8 - fVar33) * fVar28 - (local_d0 - fVar31) * fVar35) * fStack_ac +
             ((local_d0 - fVar31) * fVar30 - (fStack_cc - fVar32) * fVar28) * fStack_a8;
        auVar40._8_4_ =
             (fStack_bc * (fVar26 - fVar13) - fStack_b8 * (fVar22 - fVar12)) * local_b0 +
             (fStack_b8 * (fVar19 - fVar11) - local_c0 * (fVar26 - fVar13)) * fStack_ac +
             (local_c0 * (fVar22 - fVar12) - fStack_bc * (fVar19 - fVar11)) * fStack_a8;
        auVar40._12_4_ =
             *(float *)(param_2 + 0x100) * local_b0 + *(float *)(param_2 + 0x104) * fStack_ac +
             *(float *)(param_2 + 0x108) * fStack_a8;
        uVar15 = movmskps((uint)pbVar18[4] + param_2,auVar40);
        goto LAB_0093a487;
      case 9:
        local_b0 = *(float *)(param_2 + 0x100);
        fStack_ac = *(float *)(param_2 + 0x104);
        fStack_a8 = *(float *)(param_2 + 0x108);
        fStack_a4 = *(float *)(param_2 + 0x10c);
        pfVar1 = (float *)((uint)pbVar18[4] + param_2);
        fVar31 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        pfVar2 = (float *)((uint)pbVar18[5] + param_2);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        pfVar3 = (float *)((uint)pbVar18[6] + param_2);
        fVar19 = *pfVar3;
        fVar22 = pfVar3[1];
        fVar26 = pfVar3[2];
        fVar21 = fVar11 - fVar19;
        fVar25 = fVar12 - fVar22;
        fVar24 = fVar13 - fVar26;
        fVar20 = fVar11 - fVar31;
        fVar23 = fVar12 - fVar32;
        fVar27 = fVar13 - fVar33;
        fVar28 = fVar23 * fVar24 - fVar27 * fVar25;
        fVar29 = fVar27 * fVar21 - fVar20 * fVar24;
        fVar30 = fVar20 * fVar25 - fVar23 * fVar21;
        fVar28 = fVar28 * fVar28;
        fVar29 = fVar29 * fVar29;
        fVar30 = fVar30 * fVar30;
        fVar21 = fVar21 * fVar20 + fVar25 * fVar23 + fVar24 * fVar27;
        fVar25 = (fVar19 - fVar31) * fVar20 + (fVar22 - fVar32) * fVar23 +
                 (fVar26 - fVar33) * fVar27;
        fVar24 = fVar28 + fVar29 + fVar30;
        if (((fVar27 * fVar27 + fVar23 * fVar23 + fVar20 * fVar20) * *(float *)(param_2 + 0x11c) <
             fVar24) ||
           (auVar8._4_4_ = fVar25, auVar8._0_4_ = fVar21, auVar8._8_4_ = fVar28 + fVar29 + fVar30,
           auVar8._12_4_ = fVar24, uVar15 = movmskps((uint)pbVar18[5] + param_2,auVar8),
           (uVar15 & 3) != 0)) goto LAB_00939c65;
        fVar21 = fVar21 / (fVar21 + fVar25);
        local_d0 = (1.0 - fVar21) * fVar11 + fVar21 * fVar31;
        fStack_cc = (1.0 - fVar21) * fVar12 + fVar21 * fVar32;
        fStack_c8 = (1.0 - fVar21) * fVar13 + fVar21 * fVar33;
        uVar15 = 0;
        fStack_c4 = (1.0 - fVar21) * pfVar2[3] + fVar21 * pfVar1[3];
        local_c0 = local_d0 - fVar19;
        fStack_bc = fStack_cc - fVar22;
        fStack_b8 = fStack_c8 - fVar26;
        break;
      case 10:
        pfVar1 = (float *)((uint)pbVar18[4] + param_2);
        fVar31 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        pfVar2 = (float *)((uint)pbVar18[5] + param_2);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        pfVar3 = (float *)((uint)pbVar18[7] + param_2);
        fVar19 = *pfVar3;
        fVar22 = pfVar3[1];
        fVar26 = pfVar3[2];
        pfVar3 = (float *)((uint)pbVar18[6] + param_2);
        fVar20 = *pfVar3;
        fVar23 = pfVar3[1];
        fVar27 = pfVar3[2];
        fVar25 = fVar19 - fVar20;
        fVar29 = fVar22 - fVar23;
        fVar30 = fVar26 - fVar27;
        fVar21 = fVar11 - fVar31;
        fVar24 = fVar12 - fVar32;
        fVar28 = fVar13 - fVar33;
        fVar36 = fVar24 * fVar30 - fVar28 * fVar29;
        fVar37 = fVar28 * fVar25 - fVar21 * fVar30;
        fVar44 = fVar21 * fVar29 - fVar24 * fVar25;
        fVar34 = fVar29 * fVar44 - fVar30 * fVar37;
        fVar30 = fVar30 * fVar36 - fVar25 * fVar44;
        fVar35 = fVar25 * fVar37 - fVar29 * fVar36;
        local_b0 = *(float *)(param_2 + 0x100);
        fStack_ac = *(float *)(param_2 + 0x104);
        fStack_a8 = *(float *)(param_2 + 0x108);
        fStack_a4 = *(float *)(param_2 + 0x10c);
        fVar25 = fVar24 * fVar44 - fVar28 * fVar37;
        fVar28 = fVar28 * fVar36 - fVar21 * fVar44;
        fVar29 = fVar21 * fVar37 - fVar24 * fVar36;
        fVar21 = (fVar31 - fVar20) * fVar34 + (fVar32 - fVar23) * fVar30 +
                 (fVar33 - fVar27) * fVar35;
        fVar24 = (fVar31 - fVar20) * fVar25 + (fVar32 - fVar23) * fVar28 +
                 (fVar33 - fVar27) * fVar29;
        fVar30 = (fVar11 - fVar19) * fVar34 + (fVar12 - fVar22) * fVar30 +
                 (fVar13 - fVar26) * fVar35;
        fVar25 = (fVar11 - fVar19) * fVar25 + (fVar12 - fVar22) * fVar28 +
                 (fVar13 - fVar26) * fVar29;
        auVar6._4_4_ = fVar24;
        auVar6._0_4_ = fVar21;
        auVar6._8_4_ = fVar30;
        auVar6._12_4_ = fVar25;
        iVar16 = movmskps((uint)pbVar18[4] + param_2,auVar6);
        if ((iVar16 == 3) || (iVar16 == 0xc)) {
          fVar21 = fVar21 / (fVar21 - fVar30);
          local_d0 = (1.0 - fVar21) * fVar31 + fVar21 * fVar11;
          fStack_cc = (1.0 - fVar21) * fVar32 + fVar21 * fVar12;
          fStack_c8 = (1.0 - fVar21) * fVar33 + fVar21 * fVar13;
          fStack_c4 = (1.0 - fVar21) * pfVar1[3] + fVar21 * pfVar2[3];
          fVar24 = fVar24 / (fVar24 - fVar25);
          local_c0 = local_d0 - ((1.0 - fVar24) * fVar20 + fVar24 * fVar19);
          fStack_bc = fStack_cc - ((1.0 - fVar24) * fVar23 + fVar24 * fVar22);
          fStack_b8 = fStack_c8 - ((1.0 - fVar24) * fVar27 + fVar24 * fVar26);
          uVar15 = 0;
        }
        else {
          uVar15 = 1;
        }
        break;
      case 0xd:
        pfVar1 = (float *)((uint)pbVar18[4] + param_2);
        fVar31 = *pfVar1;
        fVar32 = pfVar1[1];
        fVar33 = pfVar1[2];
        pfVar2 = (float *)((uint)pbVar18[7] + param_2);
        fVar11 = *pfVar2;
        fVar12 = pfVar2[1];
        fVar13 = pfVar2[2];
        pfVar3 = (float *)((uint)pbVar18[6] + param_2);
        fVar19 = *pfVar3;
        fVar22 = pfVar3[1];
        fVar26 = pfVar3[2];
        pfVar4 = (float *)((uint)pbVar18[5] + param_2);
        fVar20 = *pfVar4;
        fVar23 = pfVar4[1];
        fVar27 = pfVar4[2];
        local_c0 = fVar31 - fVar11;
        fStack_bc = fVar32 - fVar12;
        fStack_b8 = fVar33 - fVar13;
        fVar21 = fVar19 - fVar20;
        fVar24 = fVar22 - fVar23;
        fVar28 = fVar26 - fVar27;
        fVar30 = pfVar3[3] - pfVar4[3];
        fVar37 = fVar31 - fVar19;
        fVar44 = fVar32 - fVar22;
        fVar45 = fVar33 - fVar26;
        fVar46 = pfVar1[3] - pfVar3[3];
        fVar34 = fVar24 * fVar45 - fVar28 * fVar44;
        fVar35 = fVar28 * fVar37 - fVar21 * fVar45;
        fVar36 = fVar21 * fVar44 - fVar24 * fVar37;
        fVar25 = fVar35 * fVar35;
        fVar29 = fVar36 * fVar36;
        auVar41._4_4_ = fVar25;
        auVar41._0_4_ = fVar25;
        auVar41._8_4_ = fVar25;
        auVar41._12_4_ = fVar25;
        auVar42._4_12_ = auVar41._4_12_;
        auVar42._0_4_ = fVar25 + fVar34 * fVar34;
        auVar43._4_4_ = fVar29;
        auVar43._0_4_ = fVar29 + auVar42._0_4_;
        auVar43._8_4_ = fVar29;
        auVar43._12_4_ = fVar29;
        auVar43 = rsqrtss(auVar42,auVar43);
        fVar25 = auVar43._0_4_;
        fVar25 = fVar25 * 0.5 * (3.0 - (fVar29 + auVar42._0_4_) * fVar25 * fVar25);
        local_b0 = fVar25 * fVar34;
        fStack_ac = fVar25 * fVar35;
        fStack_a8 = fVar25 * fVar36;
        fStack_a4 = fVar25 * (fVar30 * fVar46 - fVar30 * fVar46);
        fVar25 = fStack_b8 * fStack_a8 + fStack_bc * fStack_ac + local_c0 * local_b0;
        local_d0 = fVar11 + fVar25 * local_b0;
        fStack_cc = fVar12 + fVar25 * fStack_ac;
        fStack_c8 = fVar13 + fVar25 * fStack_a8;
        fStack_c4 = pfVar2[3] + fVar25 * fStack_a4;
        auVar10._4_4_ =
             ((fVar12 - fVar22) * fVar45 - (fVar13 - fVar26) * fVar44) * local_b0 +
             ((fVar13 - fVar26) * fVar37 - (fVar11 - fVar19) * fVar45) * fStack_ac +
             ((fVar11 - fVar19) * fVar44 - (fVar12 - fVar22) * fVar37) * fStack_a8;
        auVar10._0_4_ =
             ((fVar12 - fVar23) * fVar28 - (fVar13 - fVar27) * fVar24) * local_b0 +
             ((fVar13 - fVar27) * fVar21 - (fVar11 - fVar20) * fVar28) * fStack_ac +
             ((fVar11 - fVar20) * fVar24 - (fVar12 - fVar23) * fVar21) * fStack_a8;
        auVar10._8_4_ =
             ((fVar12 - fVar32) * (fVar27 - fVar33) - (fVar13 - fVar33) * (fVar23 - fVar32)) *
             local_b0 +
             ((fVar13 - fVar33) * (fVar20 - fVar31) - (fVar11 - fVar31) * (fVar27 - fVar33)) *
             fStack_ac +
             ((fVar11 - fVar31) * (fVar23 - fVar32) - (fVar12 - fVar32) * (fVar20 - fVar31)) *
             fStack_a8;
        auVar10._12_4_ =
             *(float *)(param_2 + 0x100) * local_b0 + *(float *)(param_2 + 0x104) * fStack_ac +
             *(float *)(param_2 + 0x108) * fStack_a8;
        uVar15 = movmskps((uint)pbVar18[4] + param_2,auVar10);
LAB_0093a487:
        if ((uVar15 & 8) != 0) {
          local_b0 = -local_b0;
          fStack_ac = -fStack_ac;
          fStack_a8 = -fStack_a8;
          fStack_a4 = -fStack_a4;
        }
        uVar15 = ~uVar15 & 7;
      }
      if (uVar15 == 0) {
        fVar31 = (fStack_a8 * fStack_b8 + fStack_ac * fStack_bc + local_b0 * local_c0) -
                 *(float *)(param_2 + 0x114);
        fVar32 = -fVar31;
        fVar31 = fVar31 - *(float *)(param_2 + 0x110);
        if (*(float *)(param_2 + 0x118) <= fVar31) goto switchD_00939c0b_caseD_0;
        pfVar5[4] = local_b0;
        pfVar5[5] = fStack_ac;
        pfVar5[6] = fStack_a8;
        pfVar5[7] = fStack_a4;
        *pfVar5 = local_d0 + fVar32 * local_b0;
        pfVar5[1] = fStack_cc + fVar32 * fStack_ac;
        pfVar5[2] = fStack_c8 + fVar32 * fStack_a8;
        pfVar5[3] = fStack_c4 + fVar32 * fStack_a4;
        pfVar5[7] = fVar31;
        *(undefined2 *)(pfVar5 + 8) = *(undefined2 *)(pbVar18 + 2);
        *param_4 = *param_4 + 0x30;
      }
      else {
switchD_00939c0b_caseD_0:
        if (*(short *)(pbVar18 + 2) != -1) {
          (**(code **)(*param_5 + 0x10))(*(short *)(pbVar18 + 2));
        }
        bVar17 = param_1[2] - 1;
        param_1[2] = bVar17;
        *(undefined4 *)pbVar18 = *(undefined4 *)(param_1 + (uint)bVar17 * 8 + 4);
        local_104 = local_104 + -1;
        *(undefined4 *)(pbVar18 + 4) = *(undefined4 *)(param_1 + (uint)bVar17 * 8 + 8);
        pbVar18 = pbVar18 + -8;
      }
      local_104 = local_104 + 1;
      pbVar18 = pbVar18 + 8;
    } while (local_104 < (int)(uint)param_1[2]);
  }
  if (param_1[2] < uVar14) {
    pbVar18 = param_1 + (uint)param_1[2] * 8 + 4;
    iVar16 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
    param_1 = param_1 + uVar14 * 8 + 4;
    if (-1 < iVar16) {
      iVar16 = iVar16 + 1;
      do {
        *(undefined4 *)pbVar18 = *(undefined4 *)param_1;
        pbVar18 = pbVar18 + 4;
        param_1 = param_1 + 4;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    FUN_009399e0();
  }
  return;
}



undefined4 FUN_0093a620(byte *param_1,short *param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  int local_4;
  
  uVar7 = (uint)param_1[2];
  local_4 = 0;
  pbVar6 = param_1;
  if (uVar7 != 0) {
    do {
      if (((int)(char)param_2[4] == (uint)pbVar6[4]) &&
         ((int)*(char *)((int)param_2 + 9) == (uint)pbVar6[5])) {
        iVar5 = (int)*(char *)((int)param_2 + 9) + (int)(char)param_2[4];
        iVar1 = uVar7 * 8;
        if ((((*param_2 == *(short *)(param_1 + (uint)(pbVar6[8] >> 3) + iVar1 + 4)) &&
             (param_2[1] == *(short *)(param_1 + (uint)(pbVar6[9] >> 3) + iVar1 + 4))) &&
            ((iVar5 < 3 || (param_2[2] == *(short *)(param_1 + (uint)(pbVar6[10] >> 3) + iVar1 + 4))
             ))) && ((iVar5 < 4 ||
                     (param_2[3] == *(short *)(param_1 + (uint)(pbVar6[0xb] >> 3) + iVar1 + 4))))) {
          if (0 < local_4) {
            uVar3 = *(undefined4 *)(param_1 + local_4 * 8 + 4);
            uVar4 = *(undefined4 *)(param_1 + local_4 * 8 + 8);
            *(undefined4 *)(param_1 + local_4 * 8 + 4) = *(undefined4 *)(param_1 + 4);
            *(undefined4 *)(param_1 + local_4 * 8 + 8) = *(undefined4 *)(param_1 + 8);
            *(undefined4 *)(param_1 + 4) = uVar3;
            *(undefined4 *)(param_1 + 8) = uVar4;
          }
          return 1;
        }
      }
      local_4 = local_4 + 1;
      pbVar6 = pbVar6 + 8;
    } while (local_4 < (int)uVar7);
  }
  cVar2 = (char)param_2[4];
  if (((cVar2 == '\x01') || (*(char *)((int)param_2 + 9) == '\x01')) && (local_4 = 0, uVar7 != 0)) {
    pbVar6 = param_1 + 4;
    while ((((cVar2 != '\x01' || (*pbVar6 != 1)) ||
            (*(short *)(param_1 + uVar7 * 8 + (pbVar6[4] >> 3) + 4) != *param_2)) &&
           (((*(char *)((int)param_2 + 9) != '\x01' || (pbVar6[1] != 1)) ||
            (*(short *)(param_1 + uVar7 * 8 + (pbVar6[*pbVar6 + 4] >> 3) + 4) != param_2[cVar2])))))
    {
      local_4 = local_4 + 1;
      pbVar6 = pbVar6 + 8;
      if ((int)uVar7 <= local_4) {
        return 0;
      }
    }
    *pbVar6 = 0;
    pbVar6[1] = 0;
  }
  return 0;
}



int FUN_0093a7a0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  int iVar4;
  float *pfVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_2c;
  char local_28 [8];
  float local_20 [7];
  
  fVar1 = 0.0;
  fVar2 = in_ECX[0x30];
  fVar16 = in_ECX[0x31];
  fVar3 = in_ECX[0x32];
  iVar6 = 0;
  iVar8 = 0;
  local_28[0] = '\0';
  local_28[1] = 0;
  local_28[2] = 0;
  local_28[3] = 0;
  local_28[4] = '\0';
  local_2c = 3.4028235e+38;
  iVar4 = 0;
  pfVar5 = in_ECX;
  do {
    fVar17 = (fVar3 - pfVar5[2]) * (fVar3 - pfVar5[2]) +
             (fVar16 - pfVar5[1]) * (fVar16 - pfVar5[1]) + (fVar2 - *pfVar5) * (fVar2 - *pfVar5);
    local_20[iVar4] = fVar17;
    if (fVar1 < fVar17) {
      iVar6 = iVar4;
      fVar1 = fVar17;
    }
    if (fVar17 < local_2c) {
      iVar8 = iVar4;
      local_2c = fVar17;
    }
    iVar4 = iVar4 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar4 < 4);
  fVar2 = in_ECX[0x37] - in_ECX[iVar8 * 0xc + 7];
  local_28[iVar6] = '\x01';
  iVar8 = 4;
  pfVar5 = in_ECX + iVar6 * 0xc;
  fVar1 = fVar1 * 1.05;
  iVar6 = 0;
  pfVar7 = in_ECX;
  do {
    if ((local_28[iVar6] == '\0') &&
       (fVar16 = (pfVar5[2] - pfVar7[2]) * (pfVar5[2] - pfVar7[2]) +
                 (pfVar5[1] - pfVar7[1]) * (pfVar5[1] - pfVar7[1]) +
                 (*pfVar5 - *pfVar7) * (*pfVar5 - *pfVar7), fVar1 < fVar16)) {
      iVar8 = iVar6;
      fVar1 = fVar16;
    }
    iVar6 = iVar6 + 1;
    pfVar7 = pfVar7 + 0xc;
  } while (iVar6 < 5);
  fVar16 = *pfVar5;
  fVar3 = pfVar5[1];
  fVar17 = pfVar5[2];
  fVar1 = 0.0;
  pfVar5 = in_ECX + iVar8 * 0xc;
  fVar13 = *pfVar5;
  fVar14 = pfVar5[1];
  fVar15 = pfVar5[2];
  local_28[iVar8] = '\x01';
  iVar6 = 0;
  fVar13 = fVar16 - fVar13;
  fVar14 = fVar3 - fVar14;
  fVar15 = fVar17 - fVar15;
  iVar8 = 0;
  pfVar5 = in_ECX;
  do {
    if ((local_28[iVar8] == '\0') &&
       (fVar9 = *pfVar5 - fVar16, fVar11 = pfVar5[1] - fVar3, fVar12 = pfVar5[2] - fVar17,
       fVar10 = fVar11 * fVar15 - fVar12 * fVar14, fVar12 = fVar12 * fVar13 - fVar9 * fVar15,
       fVar9 = fVar9 * fVar14 - fVar11 * fVar13,
       fVar9 = fVar9 * fVar9 + fVar12 * fVar12 + fVar10 * fVar10, fVar1 < fVar9)) {
      iVar6 = iVar8;
      fVar1 = fVar9;
    }
    iVar8 = iVar8 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar8 < 5);
  local_28[iVar6] = '\x01';
  fVar1 = 0.0;
  iVar8 = 0;
  pfVar7 = in_ECX + iVar6 * 0xc;
  iVar6 = 0;
  pfVar5 = in_ECX;
  do {
    if ((local_28[iVar6] == '\0') &&
       (fVar16 = (pfVar7[2] - pfVar5[2]) * (pfVar7[2] - pfVar5[2]) +
                 (pfVar7[1] - pfVar5[1]) * (pfVar7[1] - pfVar5[1]) +
                 (*pfVar7 - *pfVar5) * (*pfVar7 - *pfVar5), fVar1 < fVar16)) {
      iVar8 = iVar6;
      fVar1 = fVar16;
    }
    iVar6 = iVar6 + 1;
    pfVar5 = pfVar5 + 0xc;
  } while (iVar6 < 5);
  local_28[iVar8] = '\x01';
  if (((local_28[4] == '\0') && (fVar2 < 0.0)) && (local_2c < fVar2 * fVar2 * 526.0)) {
    fVar1 = in_ECX[0x37];
    iVar6 = 4;
    fVar16 = (in_ECX[7] - fVar1) * (in_ECX[7] - fVar1) + 1e-09;
    fVar2 = 0.030461743;
    if (local_20[0] * 0.030461743 < fVar16) {
      iVar6 = 0;
      fVar2 = fVar16 / (local_20[0] + 1e-09);
    }
    fVar16 = (in_ECX[0x13] - fVar1) * (in_ECX[0x13] - fVar1) + 1e-09;
    if (local_20[1] * fVar2 < fVar16) {
      iVar6 = 1;
      fVar2 = fVar16 / (local_20[1] + 1e-09);
    }
    fVar16 = (in_ECX[0x1f] - fVar1) * (in_ECX[0x1f] - fVar1) + 1e-09;
    if (local_20[2] * fVar2 < fVar16) {
      iVar6 = 2;
      fVar2 = fVar16 / (local_20[2] + 1e-09);
    }
    if (local_20[3] * fVar2 < (in_ECX[0x2b] - fVar1) * (in_ECX[0x2b] - fVar1) + 1e-09) {
      iVar6 = 3;
    }
    return iVar6;
  }
  iVar6 = 0;
  do {
    if (local_28[iVar6] == '\0') {
      return iVar6;
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  return 0;
}



int FUN_0093ab40(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                int param_6,int param_7,int *param_8,int param_9)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  int local_4;
  
  pbVar10 = param_1;
  local_4 = 4;
  if (param_1[2] == 4) {
    local_4 = FUN_0093a7a0();
    if (local_4 == 4) {
      return 5;
    }
    (**(code **)(*param_8 + 0x10))(*(undefined2 *)(param_1 + local_4 * 8 + 6));
    if (local_4 == 0) {
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x10);
    }
    else {
      *(undefined4 *)(param_1 + local_4 * 8 + 4) = *(undefined4 *)(param_1 + 4);
      *(undefined4 *)(param_1 + local_4 * 8 + 8) = *(undefined4 *)(param_1 + 8);
    }
    FUN_009399e0();
    sVar2 = (**(code **)(*param_8 + 8))(param_1,param_2,param_3,param_5);
    if (sVar2 == -1) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x20);
      bVar1 = param_1[2];
      param_1[2] = bVar1 - 1;
      pbVar5 = param_1 + (uint)(byte)(bVar1 - 1) * 8;
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x1c);
      pbVar10 = pbVar5 + 0xc;
      iVar3 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
      if (-1 < iVar3) {
        iVar3 = iVar3 + 1;
        do {
          pbVar5 = pbVar5 + 4;
          *(undefined4 *)pbVar5 = *(undefined4 *)pbVar10;
          pbVar10 = pbVar10 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      FUN_00934050(param_7 + 0x90);
      return 6;
    }
    *(short *)(param_5 + 0x20) = sVar2;
    FUN_00934050(param_5);
  }
  else {
    if ((param_9 == 0) || (*(char *)(param_5 + 9) == '\x03')) {
      sVar2 = (**(code **)(*param_8 + 8))(param_2,param_3,param_4,param_6);
      if (sVar2 == -1) {
        return 5;
      }
    }
    else {
      sVar2 = -1;
    }
    *(short *)(param_6 + 0x20) = sVar2;
    iVar11 = (int)((param_1[1] - 1) + (uint)*param_1) >> 1;
    iVar3 = iVar11 + (uint)param_1[2] * 2;
    pbVar5 = param_1 + iVar3 * 4 + 0xc;
    pbVar6 = param_1 + iVar3 * 4 + 4;
    if (-1 < iVar11) {
      iVar11 = iVar11 + 1;
      do {
        *(undefined4 *)pbVar5 = *(undefined4 *)pbVar6;
        pbVar5 = pbVar5 + -4;
        pbVar6 = pbVar6 + -4;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    bVar1 = param_1[2];
    *(undefined4 *)(param_1 + (uint)bVar1 * 8 + 4) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + (uint)bVar1 * 8 + 8) = *(undefined4 *)(param_1 + 8);
    param_1[2] = param_1[2] + 1;
  }
  param_1[4] = *(byte *)(param_5 + 8);
  bVar1 = *(byte *)(param_5 + 9);
  *(short *)(param_1 + 6) = sVar2;
  param_1[5] = bVar1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  bVar1 = param_1[2];
  iVar11 = 0;
  iVar3 = (uint)bVar1 * 8 + 4;
  param_1 = (byte *)0x0;
  if ('\0' < *(char *)(param_5 + 8)) {
    do {
      sVar2 = *(short *)(param_5 + iVar11 * 2);
      iVar4 = 0;
      if (*pbVar10 != 0) {
        do {
          if (*(short *)(pbVar10 + iVar4 * 2 + iVar3) == sVar2) goto LAB_0093ad85;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)(uint)*pbVar10);
      }
      for (iVar7 = (uint)pbVar10[1] + (uint)*pbVar10; iVar4 < iVar7; iVar7 = iVar7 + -1) {
        *(undefined2 *)(pbVar10 + iVar7 * 2 + iVar3) =
             *(undefined2 *)(pbVar10 + iVar7 * 2 + (uint)bVar1 * 8 + 2);
      }
      *(short *)(pbVar10 + iVar4 * 2 + iVar3) = sVar2;
      param_1 = (byte *)((int)param_1 + 0x10);
      *pbVar10 = *pbVar10 + 1;
LAB_0093ad85:
      pbVar10[iVar11 + 8] = (char)iVar4 << 4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(char *)(param_5 + 8));
    if (param_1 != (byte *)0x0) {
      pbVar5 = pbVar10 + 0xc;
      iVar11 = 1;
      if (1 < pbVar10[2]) {
        do {
          uVar8 = (uint)*pbVar5;
          if (uVar8 < pbVar5[1] + uVar8) {
            do {
              pbVar5[uVar8 + 4] = pbVar5[uVar8 + 4] + (char)param_1;
              uVar8 = uVar8 + 1;
            } while ((int)uVar8 < (int)((uint)pbVar5[1] + (uint)*pbVar5));
          }
          pbVar5 = pbVar5 + 8;
          iVar11 = iVar11 + 1;
        } while (iVar11 < (int)(uint)pbVar10[2]);
      }
    }
  }
  iVar11 = 0;
  if ('\0' < *(char *)(param_5 + 9)) {
    do {
      uVar8 = (uint)*pbVar10;
      sVar2 = *(short *)(param_5 + (*(char *)(param_5 + 8) + iVar11) * 2);
      uVar9 = pbVar10[1] + uVar8;
      if (uVar8 < uVar9) {
        do {
          if (*(short *)(pbVar10 + uVar8 * 2 + iVar3) == sVar2) goto LAB_0093ae24;
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar9);
      }
      *(short *)(pbVar10 + uVar8 * 2 + iVar3) = sVar2;
      pbVar10[1] = pbVar10[1] + 1;
LAB_0093ae24:
      pbVar10[*(char *)(param_5 + 8) + iVar11 + 8] = (char)uVar8 << 4;
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(char *)(param_5 + 9));
  }
  return local_4;
}



undefined4 FUN_0093ae50(float *param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *unaff_EDI;
  float *pfVar9;
  
  iVar8 = 0;
  pfVar9 = unaff_EDI;
  do {
    iVar6 = (int)(char)(&DAT_00a99f0e)[iVar8];
    iVar7 = (int)(char)(&DAT_00a99f0c)[iVar8];
    if ((0.0 <= param_2[iVar6]) && (0.0 <= param_2[iVar7])) {
      fVar3 = *pfVar9;
      fVar4 = pfVar9[1];
      fVar5 = pfVar9[2];
      pfVar1 = unaff_EDI + iVar6 * 4;
      pfVar2 = unaff_EDI + iVar7 * 4;
      if (((unaff_EDI[0xe] - fVar5) * (pfVar1[2] - fVar5) +
          (unaff_EDI[0xd] - fVar4) * (pfVar1[1] - fVar4) +
          (unaff_EDI[0xc] - fVar3) * (*pfVar1 - fVar3)) *
          ((param_1[2] - fVar5) * (pfVar2[2] - fVar5) +
          (param_1[1] - fVar4) * (pfVar2[1] - fVar4) + (*param_1 - fVar3) * (*pfVar2 - fVar3)) <=
          ((unaff_EDI[0xe] - fVar5) * (pfVar2[2] - fVar5) +
          (unaff_EDI[0xd] - fVar4) * (pfVar2[1] - fVar4) +
          (unaff_EDI[0xc] - fVar3) * (*pfVar2 - fVar3)) *
          ((param_1[2] - fVar5) * (pfVar1[2] - fVar5) +
          (param_1[1] - fVar4) * (pfVar1[1] - fVar4) + (*param_1 - fVar3) * (*pfVar1 - fVar3))) {
        param_2[iVar6] = -1.0;
      }
      else {
        param_2[iVar7] = -1.0;
      }
    }
    iVar8 = iVar8 + 1;
    pfVar9 = pfVar9 + 4;
  } while (iVar8 < 3);
  if (0.0 < *param_2) {
    return 0;
  }
  if (0.0 < param_2[1]) {
    return 1;
  }
  if (0.0 < param_2[2]) {
    return 2;
  }
  return 0xffffffff;
}



uint FUN_0093b000(float *param_1,float *param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  uint uVar7;
  int in_ECX;
  undefined4 unaff_ESI;
  uint uVar8;
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
  
  fVar10 = param_2[4];
  fVar12 = param_2[5];
  fVar14 = param_2[6];
  fVar2 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar9 = param_2[8] - fVar10;
  fVar11 = param_2[9] - fVar12;
  fVar13 = param_2[10] - fVar14;
  fVar15 = param_2[0xb] - param_2[7];
  fVar16 = *param_2 - param_2[8];
  fVar17 = param_2[1] - param_2[9];
  fVar18 = param_2[2] - param_2[10];
  fVar19 = param_2[3] - param_2[0xb];
  fVar20 = fVar10 - *param_2;
  fVar21 = fVar12 - param_2[1];
  fVar22 = fVar14 - param_2[2];
  fVar23 = fVar11 * fVar18 - fVar13 * fVar17;
  fVar24 = fVar13 * fVar16 - fVar9 * fVar18;
  fVar25 = fVar9 * fVar17 - fVar11 * fVar16;
  fVar26 = fVar15 * fVar19 - fVar15 * fVar19;
  fVar19 = ((fVar5 - param_2[1]) * fVar22 - (fVar6 - param_2[2]) * fVar21) * fVar23;
  fVar22 = ((fVar6 - param_2[2]) * fVar20 - (fVar2 - *param_2) * fVar22) * fVar24;
  fVar15 = ((fVar2 - *param_2) * fVar21 - (fVar5 - param_2[1]) * fVar20) * fVar25;
  fVar10 = ((fVar5 - fVar12) * fVar13 - (fVar6 - fVar14) * fVar11) * fVar23 +
           ((fVar6 - fVar14) * fVar9 - (fVar2 - fVar10) * fVar13) * fVar24 +
           ((fVar2 - fVar10) * fVar11 - (fVar5 - fVar12) * fVar9) * fVar25;
  fVar12 = ((fVar5 - param_2[9]) * fVar18 - (fVar6 - param_2[10]) * fVar17) * fVar23 +
           ((fVar6 - param_2[10]) * fVar16 - (fVar2 - param_2[8]) * fVar18) * fVar24 +
           ((fVar2 - param_2[8]) * fVar17 - (fVar5 - param_2[9]) * fVar16) * fVar25;
  fVar14 = fVar19 + fVar22 + fVar15;
  fVar15 = fVar19 + fVar22 + fVar15;
  auVar3._4_4_ = fVar12;
  auVar3._0_4_ = fVar10;
  auVar3._8_4_ = fVar14;
  auVar3._12_4_ = fVar15;
  uVar8 = movmskps(unaff_ESI,auVar3);
  *(float *)(in_ECX + 0x160) = fVar10;
  *(float *)(in_ECX + 0x164) = fVar12;
  *(float *)(in_ECX + 0x168) = fVar14;
  *(float *)(in_ECX + 0x16c) = fVar15;
  if (param_3 != 0) {
    *(float *)(in_ECX + 0x120) = fVar23;
    *(float *)(in_ECX + 0x124) = fVar24;
    *(float *)(in_ECX + 0x128) = fVar25;
    *(float *)(in_ECX + 300) = fVar26;
    if ((uVar8 & 7) == 7) {
      fVar10 = fVar25 * (*(float *)(in_ECX + 0x28) - *(float *)(in_ECX + 0xa8));
      auVar4._4_4_ = fVar10;
      auVar4._0_4_ = fVar10 + fVar24 * (*(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0xa4)) +
                              fVar23 * (*(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0xa0));
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = fVar10;
      uVar7 = movmskps(param_3,auVar4);
      if ((uVar7 & 1) != 0) {
        *(float *)(in_ECX + 0x120) = -fVar23;
        *(float *)(in_ECX + 0x124) = -fVar24;
        *(float *)(in_ECX + 0x128) = -fVar25;
        *(float *)(in_ECX + 300) = -fVar26;
        fVar10 = *param_2;
        fVar12 = param_2[1];
        fVar14 = param_2[2];
        fVar2 = param_2[3];
        *param_2 = param_2[4];
        param_2[1] = param_2[5];
        param_2[2] = param_2[6];
        param_2[3] = param_2[7];
        param_2[4] = fVar10;
        param_2[5] = fVar12;
        param_2[6] = fVar14;
        param_2[7] = fVar2;
        fVar10 = param_2[0x10];
        fVar12 = param_2[0x11];
        fVar14 = param_2[0x12];
        fVar2 = param_2[0x13];
        param_2[0x10] = param_2[0x14];
        param_2[0x11] = param_2[0x15];
        param_2[0x12] = param_2[0x16];
        param_2[0x13] = param_2[0x17];
        param_2[0x14] = fVar10;
        param_2[0x15] = fVar12;
        param_2[0x16] = fVar14;
        param_2[0x17] = fVar2;
        uVar1 = *(undefined4 *)(in_ECX + 0x160);
        *(undefined4 *)(in_ECX + 0x160) = *(undefined4 *)(in_ECX + 0x164);
        *(undefined4 *)(in_ECX + 0x164) = uVar1;
        *(undefined4 *)(in_ECX + 0x14) = 1;
      }
    }
  }
  return uVar8 & 7;
}



undefined4
FUN_0093b220(float *param_1,float *param_2,int *param_3,int *param_4,char param_5,undefined4 param_6
            )

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined4 in_EAX;
  uint uVar6;
  int iVar7;
  int in_ECX;
  int extraout_ECX;
  undefined4 in_EDX;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float *local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [32];
  float local_50;
  undefined1 local_40 [32];
  float local_20;
  
  if (param_5 != '\0') {
    fVar12 = *param_2;
    fVar15 = param_2[1];
    fVar16 = param_2[2];
    local_80 = param_2[4] - param_2[8];
    fStack_7c = param_2[5] - param_2[9];
    fStack_78 = param_2[6] - param_2[10];
    fStack_74 = param_2[7] - param_2[0xb];
    local_90 = fVar12 - param_2[8];
    fStack_8c = fVar15 - param_2[9];
    fStack_88 = fVar16 - param_2[10];
    fStack_84 = param_2[3] - param_2[0xb];
    pfVar1 = param_2 + 8;
    fVar11 = fStack_7c * fStack_88 - fStack_78 * fStack_8c;
    fVar13 = fStack_78 * local_90 - local_80 * fStack_88;
    fVar14 = local_80 * fStack_8c - fStack_7c * local_90;
    fVar10 = fVar14 * (param_1[2] - fVar16);
    fVar9 = fVar10 + fVar13 * (param_1[1] - fVar15) + fVar11 * (*param_1 - fVar12);
    fVar14 = fVar14 * (param_1[6] - fVar16);
    fVar12 = fVar14 + fVar13 * (param_1[5] - fVar15) + fVar11 * (param_1[4] - fVar12);
    auVar4._4_4_ = fVar14;
    auVar4._0_4_ = fVar12;
    auVar4._8_4_ = fVar14;
    auVar4._12_4_ = fVar14;
    uVar6 = movmskps(CONCAT31((int3)((uint)in_EAX >> 8),param_5),auVar4);
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar9;
    auVar3._8_4_ = fVar10;
    auVar3._12_4_ = fVar10;
    uVar8 = movmskps(in_EDX,auVar3);
    if (((uVar6 ^ uVar8) & 1) == 0) {
      if (ABS(fVar12) < ABS(fVar9)) {
        fVar15 = *param_1;
        fVar16 = param_1[1];
        fVar10 = param_1[2];
        fVar11 = param_1[3];
        *param_1 = param_1[4];
        param_1[1] = param_1[5];
        param_1[2] = param_1[6];
        param_1[3] = param_1[7];
        param_1[4] = fVar15;
        param_1[5] = fVar16;
        param_1[6] = fVar10;
        param_1[7] = fVar11;
        local_b0 = param_1[0x10];
        fStack_ac = param_1[0x11];
        fStack_a8 = param_1[0x12];
        fStack_a4 = param_1[0x13];
        param_1[0x10] = param_1[0x14];
        param_1[0x11] = param_1[0x15];
        param_1[0x12] = param_1[0x16];
        param_1[0x13] = param_1[0x17];
        param_1[0x14] = local_b0;
        param_1[0x15] = fStack_ac;
        param_1[0x16] = fStack_a8;
        param_1[0x17] = fStack_a4;
      }
      local_98 = (float *)fVar9;
      local_94 = fVar12;
      iVar7 = FUN_0093b000(param_1,param_2,1);
      if (iVar7 == 7) {
        *param_3 = *param_3 + -1;
        return 0;
      }
    }
    else {
      fVar9 = fVar9 / (fVar9 - fVar12);
      local_b0 = (1.0 - fVar9) * *param_1 + fVar9 * param_1[4];
      fStack_ac = (1.0 - fVar9) * param_1[1] + fVar9 * param_1[5];
      fStack_a8 = (1.0 - fVar9) * param_1[2] + fVar9 * param_1[6];
      fStack_a4 = (1.0 - fVar9) * param_1[3] + fVar9 * param_1[7];
      iVar7 = FUN_0093b000(&local_b0,param_2,0);
      if (iVar7 == 7) {
        return 1;
      }
    }
    local_b0 = param_1[4] - *param_1;
    fStack_ac = param_1[5] - param_1[1];
    fStack_a8 = param_1[6] - param_1[2];
    fStack_a4 = param_1[7] - param_1[3];
    FUN_008d1a30(param_1,&local_b0,pfVar1,&local_80,local_70);
    FUN_008d1a30(param_1,&local_b0,pfVar1,&local_90,local_40);
    fVar12 = param_2[9];
    fVar15 = param_2[10];
    fVar16 = param_2[0xb];
    pfVar2 = param_2 + (uint)(local_20 < local_50) * 4;
    *pfVar2 = *pfVar1;
    pfVar2[1] = fVar12;
    pfVar2[2] = fVar15;
    pfVar2[3] = fVar16;
    fVar12 = param_2[0x19];
    fVar15 = param_2[0x1a];
    fVar16 = param_2[0x1b];
    pfVar1 = param_2 + ((local_20 < local_50) + 4) * 4;
    *pfVar1 = param_2[0x18];
    pfVar1[1] = fVar12;
    pfVar1[2] = fVar15;
    pfVar1[3] = fVar16;
    *param_4 = *param_4 + -1;
    return 2;
  }
  local_98 = (float *)(in_ECX + 0x160);
  local_b0 = *local_98;
  fVar16 = *(float *)(in_ECX + 0x128) * (param_1[6] - param_2[2]) +
           *(float *)(in_ECX + 0x124) * (param_1[5] - param_2[1]) +
           *(float *)(in_ECX + 0x120) * (param_1[4] - *param_2);
  fVar15 = *(float *)(in_ECX + 0x128) * (param_1[2] - param_2[2]);
  fStack_ac = *(float *)(in_ECX + 0x164);
  fStack_a8 = *(float *)(in_ECX + 0x168);
  fStack_a4 = *(float *)(in_ECX + 0x16c);
  fVar12 = fVar15 + *(float *)(in_ECX + 0x124) * (param_1[1] - param_2[1]) +
                    *(float *)(in_ECX + 0x120) * (*param_1 - *param_2);
  auVar5._4_4_ = fVar15;
  auVar5._0_4_ = fVar12 * fVar16;
  auVar5._8_4_ = fVar15;
  auVar5._12_4_ = fVar15;
  uVar6 = movmskps(fStack_a8,auVar5);
  if ((uVar6 & 1) != 0) {
    fVar12 = fVar12 / (fVar12 - fVar16);
    local_90 = (1.0 - fVar12) * *param_1 + fVar12 * param_1[4];
    fStack_8c = (1.0 - fVar12) * param_1[1] + fVar12 * param_1[5];
    fStack_88 = (1.0 - fVar12) * param_1[2] + fVar12 * param_1[6];
    fStack_84 = (1.0 - fVar12) * param_1[3] + fVar12 * param_1[7];
    iVar7 = FUN_0093b000(&local_90,param_2,0);
    if (iVar7 == 7) {
      return 1;
    }
  }
  iVar7 = FUN_0093b000(param_1 + 4,param_2,0);
  if (iVar7 == 7) {
    *param_3 = *param_3 + -1;
    *param_1 = param_1[4];
    param_1[1] = param_1[5];
    param_1[2] = param_1[6];
    param_1[3] = param_1[7];
    param_1[0x10] = param_1[0x14];
    param_1[0x11] = param_1[0x15];
    param_1[0x12] = param_1[0x16];
    param_1[0x13] = param_1[0x17];
    *(undefined4 *)(extraout_ECX + 0x170) = param_6;
    return 0;
  }
  if (iVar7 == 6) goto LAB_0093b63a;
  if (iVar7 != 5) {
    if (iVar7 != 3) {
      if (iVar7 != 1) {
        if (iVar7 == 2) {
          if ((*(float *)(extraout_ECX + 0x168) - fStack_a8) * local_b0 <=
              (*local_98 - local_b0) * fStack_a8) goto LAB_0093b5da;
        }
        else if ((iVar7 == 4) &&
                ((*(float *)(extraout_ECX + 0x164) - fStack_ac) * local_b0 <
                 (*local_98 - local_b0) * fStack_ac)) goto LAB_0093b617;
LAB_0093b63a:
        *param_4 = *param_4 + -1;
        *param_2 = param_2[8];
        param_2[1] = param_2[9];
        param_2[2] = param_2[10];
        param_2[3] = param_2[0xb];
        param_2[0x10] = param_2[0x18];
        param_2[0x11] = param_2[0x19];
        param_2[0x12] = param_2[0x1a];
        param_2[0x13] = param_2[0x1b];
        return 2;
      }
      if ((*(float *)(extraout_ECX + 0x164) - fStack_ac) * fStack_a8 <=
          (*(float *)(extraout_ECX + 0x168) - fStack_a8) * fStack_ac) goto LAB_0093b617;
    }
LAB_0093b5da:
    *param_4 = *param_4 + -1;
    return 2;
  }
LAB_0093b617:
  *param_4 = *param_4 + -1;
  param_2[4] = param_2[8];
  param_2[5] = param_2[9];
  param_2[6] = param_2[10];
  param_2[7] = param_2[0xb];
  param_2[0x14] = param_2[0x18];
  param_2[0x15] = param_2[0x19];
  param_2[0x16] = param_2[0x1a];
  param_2[0x17] = param_2[0x1b];
  return 2;
}



void FUN_0093b660(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int *in_ECX;
  ushort uVar3;
  ushort uVar4;
  char cVar5;
  ushort uVar6;
  
  *(char *)(param_1 + 4) = (char)*in_ECX;
  *(char *)((int)param_1 + 9) = (char)in_ECX[1];
  uVar1 = *(ushort *)(in_ECX + 0xb);
  if (1 < *in_ECX) {
    uVar3 = *(ushort *)(in_ECX + 0xf);
    cVar5 = uVar1 < uVar3;
    uVar2 = uVar1;
    if ((bool)cVar5) {
      uVar2 = uVar3;
      uVar3 = uVar1;
    }
    uVar1 = uVar2;
    if (2 < *in_ECX) {
      uVar4 = *(ushort *)(in_ECX + 0x13);
      uVar6 = uVar4;
      if (uVar2 < uVar4) {
        cVar5 = cVar5 + '\x01';
        uVar6 = uVar2;
        uVar1 = uVar4;
      }
      uVar2 = uVar3;
      if (cVar5 == '\x01') {
        uVar2 = uVar6;
        uVar6 = uVar3;
      }
      uVar3 = uVar2;
      param_1[2] = uVar6;
    }
    param_1[1] = uVar3;
  }
  *param_1 = uVar1;
  uVar1 = *(ushort *)(in_ECX + 0x3b);
  if (1 < in_ECX[1]) {
    uVar3 = *(ushort *)(in_ECX + 0x3f);
    uVar2 = uVar1;
    uVar4 = uVar3;
    if (uVar1 < uVar3) {
      uVar2 = uVar3;
      uVar4 = uVar1;
    }
    cVar5 = uVar1 < uVar3;
    if (2 < in_ECX[1]) {
      uVar1 = *(ushort *)(in_ECX + 0x43);
      uVar3 = uVar1;
      if (uVar2 < uVar1) {
        cVar5 = cVar5 + '\x01';
        uVar3 = uVar2;
        uVar2 = uVar1;
      }
      uVar1 = uVar4;
      if (cVar5 == '\x01') {
        uVar1 = uVar3;
        uVar3 = uVar4;
      }
      uVar4 = uVar1;
      param_1[*in_ECX + 2] = uVar3;
    }
    param_1[*in_ECX + 1] = uVar4;
    param_1[*in_ECX] = uVar2;
    return;
  }
  param_1[*in_ECX] = uVar1;
  return;
}



void FUN_0093b740(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *in_ECX;
  
  param_2[8] = param_1[3];
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *param_2 = *param_1;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  if (*in_ECX == 1) {
    fVar1 = (float)in_ECX[8];
    fVar2 = (float)in_ECX[9];
    fVar3 = (float)in_ECX[10];
    fVar4 = (float)in_ECX[0xb];
    param_2[9] = 1.0;
    param_2[4] = fVar1;
    param_2[5] = fVar2;
    param_2[6] = fVar3;
    param_2[7] = fVar4;
    return;
  }
  if (in_ECX[1] == 1) {
    fVar1 = param_1[3];
    fVar2 = (float)in_ECX[0x28];
    fVar3 = (float)in_ECX[0x29];
    fVar4 = (float)in_ECX[0x2a];
    fVar5 = (float)in_ECX[0x2b];
    param_2[9] = 0.0;
    param_2[4] = fVar2 + fVar1 * *param_2;
    param_2[5] = fVar3 + fVar1 * param_2[1];
    param_2[6] = fVar4 + fVar1 * param_2[2];
    param_2[7] = fVar5 + fVar1 * param_2[3];
    return;
  }
  fVar1 = (float)in_ECX[0x4c];
  fVar2 = (float)in_ECX[0x4d];
  fVar3 = (float)in_ECX[0x4e];
  fVar4 = (float)in_ECX[0x4f];
  param_2[9] = 0.5;
  param_2[4] = fVar1;
  param_2[5] = fVar2;
  param_2[6] = fVar3;
  param_2[7] = fVar4;
  return;
}



void FUN_0093b7d0(void)

{
  float *pfVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int *in_ECX;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  int iVar10;
  int local_7c;
  float local_74;
  int local_6c;
  int local_68;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined1 local_40 [32];
  float local_20;
  
  if ((in_ECX[1] == 3) && (iVar7 = 0, 0 < *in_ECX)) {
    piVar9 = in_ECX + 8;
    do {
      iVar5 = FUN_0093b000(piVar9,in_ECX + 0x28,0);
      if (iVar5 == 7) {
        piVar9 = in_ECX + (iVar7 + 2) * 4;
        iVar7 = piVar9[1];
        iVar5 = piVar9[2];
        iVar10 = piVar9[3];
        in_ECX[8] = *piVar9;
        in_ECX[9] = iVar7;
        in_ECX[10] = iVar5;
        in_ECX[0xb] = iVar10;
        *in_ECX = 1;
        return;
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 4;
    } while (iVar7 < *in_ECX);
  }
  if ((*in_ECX == 3) && (iVar7 = 0, 0 < in_ECX[1])) {
    piVar9 = in_ECX + 0x28;
    do {
      iVar5 = FUN_0093b000(piVar9,in_ECX + 8,0);
      if (iVar5 == 7) {
        piVar9 = in_ECX + (iVar7 + 0xe) * 4;
        iVar5 = piVar9[1];
        iVar10 = piVar9[2];
        iVar4 = piVar9[3];
        in_ECX[0x38] = *piVar9;
        in_ECX[0x39] = iVar5;
        in_ECX[0x3a] = iVar10;
        in_ECX[0x3b] = iVar4;
        piVar9 = in_ECX + (iVar7 + 10) * 4;
        iVar7 = piVar9[1];
        iVar5 = piVar9[2];
        iVar10 = piVar9[3];
        in_ECX[0x28] = *piVar9;
        in_ECX[0x29] = iVar7;
        in_ECX[0x2a] = iVar5;
        in_ECX[0x2b] = iVar10;
        in_ECX[1] = 1;
        return;
      }
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 4;
    } while (iVar7 < in_ECX[1]);
  }
  local_74 = 3.4028235e+38;
  local_6c = 0;
  iVar10 = (uint)(*in_ECX == 3) * 2;
  iVar7 = iVar10 + 1;
  iVar4 = (uint)(in_ECX[1] == 3) * 2;
  iVar5 = iVar4 + 1;
  local_68 = 0;
  local_7c = 0;
  if (iVar10 != -1) {
    pfVar6 = (float *)(in_ECX + 8);
    do {
      iVar10 = 0;
      if (iVar4 != -1) {
        pfVar8 = (float *)(in_ECX + 0x28);
        do {
          pfVar1 = (float *)(in_ECX + ((char)(&DAT_00a99f0e)[local_7c] + 2) * 4);
          local_50 = *pfVar1 - *pfVar6;
          fStack_4c = pfVar1[1] - pfVar6[1];
          fStack_48 = pfVar1[2] - pfVar6[2];
          fStack_44 = pfVar1[3] - pfVar6[3];
          pfVar1 = (float *)(in_ECX + ((char)(&DAT_00a99f0e)[iVar10] + 10) * 4);
          local_60 = *pfVar1 - *pfVar8;
          fStack_5c = pfVar1[1] - pfVar8[1];
          fStack_58 = pfVar1[2] - pfVar8[2];
          fStack_54 = pfVar1[3] - pfVar8[3];
          FUN_008d1a30(pfVar6,&local_50,pfVar8,&local_60,local_40);
          if (local_20 < local_74) {
            local_74 = local_20;
            local_6c = local_7c;
            local_68 = iVar10;
          }
          iVar10 = iVar10 + 1;
          pfVar8 = pfVar8 + 4;
        } while (iVar10 < iVar5);
      }
      local_7c = local_7c + 1;
      pfVar6 = pfVar6 + 4;
    } while (local_7c < iVar7);
  }
  if (iVar7 == 3) {
    iVar7 = *in_ECX;
    *in_ECX = iVar7 + -1;
    piVar9 = in_ECX + (iVar7 + 1) * 4;
    iVar7 = piVar9[1];
    iVar10 = piVar9[2];
    iVar4 = piVar9[3];
    piVar2 = in_ECX + ((char)(&DAT_00a99f0c)[local_6c] + 2) * 4;
    *piVar2 = *piVar9;
    piVar2[1] = iVar7;
    piVar2[2] = iVar10;
    piVar2[3] = iVar4;
  }
  if (iVar5 == 3) {
    iVar7 = in_ECX[1];
    in_ECX[1] = iVar7 + -1;
    cVar3 = (&DAT_00a99f0c)[local_68];
    piVar9 = in_ECX + (iVar7 + 0xd) * 4;
    iVar7 = piVar9[1];
    iVar5 = piVar9[2];
    iVar10 = piVar9[3];
    piVar2 = in_ECX + (cVar3 + 0xe) * 4;
    *piVar2 = *piVar9;
    piVar2[1] = iVar7;
    piVar2[2] = iVar5;
    piVar2[3] = iVar10;
    piVar9 = in_ECX + (in_ECX[1] + 10) * 4;
    iVar7 = piVar9[1];
    iVar5 = piVar9[2];
    iVar10 = piVar9[3];
    piVar2 = in_ECX + (cVar3 + 10) * 4;
    *piVar2 = *piVar9;
    piVar2[1] = iVar7;
    piVar2[2] = iVar5;
    piVar2[3] = iVar10;
  }
  return;
}



void FUN_0093ba20(float *param_1,float *param_2,int param_3,uint param_4,float *param_5,
                 float *param_6,float *param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 local_64 [4];
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
  
  switch(param_3 << 3 | param_4) {
  case 9:
    fVar8 = param_2[3];
    fVar9 = param_1[3];
    fVar18 = *param_1 - *param_2;
    fVar14 = param_1[1] - param_2[1];
    fVar16 = param_1[2] - param_2[2];
    *param_7 = fVar18;
    param_7[1] = fVar14;
    param_7[2] = fVar16;
    param_7[3] = fVar9 - fVar8;
    fVar10 = *param_5;
    fVar11 = param_5[1];
    fVar12 = param_5[2];
    fVar13 = param_5[3];
    fVar15 = fVar14 * fVar14;
    fVar17 = fVar16 * fVar16;
    if (fVar17 + fVar15 + fVar18 * fVar18 <=
        (fVar12 * fVar16 + fVar11 * fVar14 + fVar10 * fVar18) * 1000.0) {
      auVar19._4_4_ = fVar15;
      auVar19._0_4_ = fVar15;
      auVar19._8_4_ = fVar15;
      auVar19._12_4_ = fVar15;
      auVar20._4_12_ = auVar19._4_12_;
      auVar20._0_4_ = fVar15 + fVar18 * fVar18;
      fVar10 = fVar17 + auVar20._0_4_;
      auVar3._4_4_ = fVar17;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar17;
      auVar3._12_4_ = fVar17;
      auVar25 = rsqrtss(auVar20,auVar3);
      fVar11 = auVar25._0_4_;
      fVar11 = fVar11 * 0.5 * (3.0 - fVar10 * fVar11 * fVar11);
      *param_7 = fVar11 * fVar18;
      param_7[1] = fVar11 * fVar14;
      param_7[2] = fVar11 * fVar16;
      param_7[3] = fVar11 * (fVar9 - fVar8);
      param_7[3] = fVar10 * fVar11;
      fVar8 = param_1[1];
      fVar9 = param_1[2];
      fVar10 = param_1[3];
      *param_6 = *param_1;
      param_6[1] = fVar8;
      param_6[2] = fVar9;
      param_6[3] = fVar10;
      return;
    }
    *param_7 = fVar10;
    param_7[1] = fVar11;
    param_7[2] = fVar12;
    param_7[3] = fVar13;
    param_7[3] = fVar16 * fVar12 + fVar14 * fVar11 + fVar18 * fVar10;
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    fVar10 = param_1[3];
    *param_6 = *param_1;
    param_6[1] = fVar8;
    param_6[2] = fVar9;
    param_6[3] = fVar10;
    return;
  case 10:
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = *param_2;
    fVar12 = param_2[1];
    fVar13 = param_2[2];
    fVar15 = *param_5;
    fVar17 = param_5[1];
    fVar18 = param_5[2];
    fVar14 = param_5[3];
    *param_7 = fVar15;
    param_7[1] = fVar17;
    param_7[2] = fVar18;
    param_7[3] = fVar14;
    param_7[3] = fVar18 * (fVar10 - fVar13) + fVar17 * (fVar9 - fVar12) + fVar15 * (fVar8 - fVar11);
    fVar8 = param_1[1];
    fVar9 = param_1[2];
    fVar10 = param_1[3];
    *param_6 = *param_1;
    param_6[1] = fVar8;
    param_6[2] = fVar9;
    param_6[3] = fVar10;
    return;
  case 0xb:
    fVar8 = param_2[8] - param_2[4];
    fVar9 = param_2[9] - param_2[5];
    fVar10 = param_2[10] - param_2[6];
    fVar11 = param_2[0xb] - param_2[7];
    fVar12 = *param_2 - param_2[8];
    fVar15 = param_2[1] - param_2[9];
    fVar17 = param_2[2] - param_2[10];
    fVar18 = param_2[3] - param_2[0xb];
    fVar13 = fVar9 * fVar17 - fVar10 * fVar15;
    fVar10 = fVar10 * fVar12 - fVar8 * fVar17;
    fVar12 = fVar8 * fVar15 - fVar9 * fVar12;
    fVar11 = fVar11 * fVar18 - fVar11 * fVar18;
    fVar8 = fVar10 * fVar10;
    fVar9 = fVar12 * fVar12;
    auVar21._4_4_ = fVar8;
    auVar21._0_4_ = fVar8;
    auVar21._8_4_ = fVar8;
    auVar21._12_4_ = fVar8;
    auVar22._4_12_ = auVar21._4_12_;
    auVar22._0_4_ = fVar8 + fVar13 * fVar13;
    auVar2._4_4_ = fVar9;
    auVar2._0_4_ = fVar9 + auVar22._0_4_;
    auVar2._8_4_ = fVar9;
    auVar2._12_4_ = fVar9;
    auVar25 = rsqrtss(auVar22,auVar2);
    fVar8 = auVar25._0_4_;
    fVar9 = fVar8 * 0.5 * (3.0 - (fVar9 + auVar22._0_4_) * fVar8 * fVar8);
    *param_7 = fVar13;
    param_7[1] = fVar10;
    param_7[2] = fVar12;
    param_7[3] = fVar11;
    fVar8 = fVar12 * param_5[2];
    auVar6._4_4_ = fVar8;
    auVar6._0_4_ = fVar8 + fVar10 * param_5[1] + fVar13 * *param_5;
    auVar6._8_4_ = fVar8;
    auVar6._12_4_ = fVar8;
    uVar7 = movmskps(param_5,auVar6);
    if ((uVar7 & 1) != 0) {
      *param_7 = -fVar13;
      param_7[1] = -fVar10;
      param_7[2] = -fVar12;
      param_7[3] = -fVar11;
    }
    fVar8 = *param_7;
    fVar10 = param_7[1];
    fVar11 = param_7[2];
    *param_7 = fVar9 * fVar8;
    param_7[1] = fVar9 * fVar10;
    param_7[2] = fVar9 * fVar11;
    param_7[3] = fVar9 * param_7[3];
    fVar12 = *param_2;
    fVar13 = param_2[1];
    fVar15 = param_2[2];
    fVar17 = *param_1;
    fVar18 = param_1[1];
    fVar14 = param_1[2];
    fVar16 = param_1[3];
    *param_6 = fVar17;
    param_6[1] = fVar18;
    param_6[2] = fVar14;
    param_6[3] = fVar16;
    param_7[3] = (fVar14 - fVar15) * fVar9 * fVar11 +
                 (fVar18 - fVar13) * fVar9 * fVar10 + (fVar17 - fVar12) * fVar9 * fVar8;
    return;
  default:
    return;
  case 0x11:
    fVar8 = *param_1;
    fVar9 = param_1[1];
    fVar10 = param_1[2];
    fVar11 = *param_2;
    fVar12 = param_2[1];
    fVar13 = param_2[2];
    fVar15 = *param_5;
    fVar17 = param_5[1];
    fVar18 = param_5[2];
    fVar14 = param_5[3];
    *param_7 = fVar15;
    param_7[1] = fVar17;
    param_7[2] = fVar18;
    param_7[3] = fVar14;
    fVar9 = fVar18 * (fVar13 - fVar10) + fVar17 * (fVar12 - fVar9) + fVar15 * (fVar11 - fVar8);
    fVar8 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    fVar12 = param_2[3];
    break;
  case 0x12:
    local_50 = param_1[4] - *param_1;
    fStack_4c = param_1[5] - param_1[1];
    fStack_48 = param_1[6] - param_1[2];
    fStack_44 = param_1[7] - param_1[3];
    local_60 = param_2[4] - *param_2;
    fStack_5c = param_2[5] - param_2[1];
    fStack_58 = param_2[6] - param_2[2];
    fStack_54 = param_2[7] - param_2[3];
    FUN_008d1a30(param_1,&local_50,param_2,&local_60,&local_40);
    fVar10 = fStack_4c * fStack_58 - fStack_48 * fStack_5c;
    fVar11 = fStack_48 * local_60 - local_50 * fStack_58;
    fVar12 = local_50 * fStack_5c - fStack_4c * local_60;
    fVar13 = fStack_44 * fStack_54 - fStack_44 * fStack_54;
    fVar9 = fStack_48 * fStack_48 + fStack_58 * fStack_58 +
            fStack_4c * fStack_4c + fStack_5c * fStack_5c +
            local_50 * local_50 + local_60 * local_60;
    fVar8 = (fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10) * 0.001;
    *param_7 = fVar10;
    param_7[1] = fVar11;
    param_7[2] = fVar12;
    param_7[3] = fVar13;
    fVar9 = fVar9 * fVar9;
    if (fVar9 < fVar8) {
      fVar15 = fVar12 * param_5[2];
      auVar4._4_4_ = fVar15;
      auVar4._0_4_ = fVar15 + fVar11 * param_5[1] + fVar10 * *param_5;
      auVar4._8_4_ = fVar15;
      auVar4._12_4_ = fVar15;
      uVar7 = movmskps(CONCAT22((short)((uint)local_64 >> 0x10),
                                (ushort)(fVar9 < fVar8) << 8 |
                                (ushort)(NAN(fVar9) || NAN(fVar8)) << 10 |
                                (ushort)(fVar9 == fVar8) << 0xe),auVar4);
      if ((uVar7 & 1) != 0) {
        *param_7 = -fVar10;
        param_7[1] = -fVar11;
        param_7[2] = -fVar12;
        param_7[3] = -fVar13;
      }
      fVar8 = *param_7;
      fVar9 = param_7[1];
      fVar10 = param_7[2];
      fVar11 = fVar9 * fVar9;
      fVar12 = fVar10 * fVar10;
      auVar26._4_4_ = fVar11;
      auVar26._0_4_ = fVar11;
      auVar26._8_4_ = fVar11;
      auVar26._12_4_ = fVar11;
      auVar27._4_12_ = auVar26._4_12_;
      auVar27._0_4_ = fVar11 + fVar8 * fVar8;
      auVar1._4_4_ = fVar12;
      auVar1._0_4_ = fVar12 + auVar27._0_4_;
      auVar1._8_4_ = fVar12;
      auVar1._12_4_ = fVar12;
      auVar25 = rsqrtss(auVar27,auVar1);
      fVar11 = auVar25._0_4_;
      fVar11 = fVar11 * 0.5 * (3.0 - (fVar12 + auVar27._0_4_) * fVar11 * fVar11);
      *param_7 = fVar11 * fVar8;
      param_7[1] = fVar11 * fVar9;
      param_7[2] = fVar11 * fVar10;
      param_7[3] = fVar11 * param_7[3];
    }
    else {
      fVar8 = param_5[1];
      fVar9 = param_5[2];
      fVar10 = param_5[3];
      *param_7 = *param_5;
      param_7[1] = fVar8;
      param_7[2] = fVar9;
      param_7[3] = fVar10;
    }
    fVar8 = *param_2;
    fVar9 = param_2[1];
    fVar10 = param_2[2];
    fVar11 = *param_1;
    fVar12 = param_1[1];
    fVar13 = param_1[2];
    fVar15 = *param_7;
    fVar17 = param_7[1];
    fVar18 = param_7[2];
    *param_6 = local_40;
    param_6[1] = fStack_3c;
    param_6[2] = fStack_38;
    param_6[3] = fStack_34;
    param_7[3] = (fVar13 - fVar10) * fVar18 + (fVar12 - fVar9) * fVar17 + (fVar11 - fVar8) * fVar15;
    return;
  case 0x19:
    fVar8 = param_1[8] - param_1[4];
    fVar9 = param_1[9] - param_1[5];
    fVar10 = param_1[10] - param_1[6];
    fVar11 = param_1[0xb] - param_1[7];
    fVar12 = *param_1 - param_1[8];
    fVar15 = param_1[1] - param_1[9];
    fVar17 = param_1[2] - param_1[10];
    fVar18 = param_1[3] - param_1[0xb];
    fVar13 = fVar9 * fVar17 - fVar10 * fVar15;
    fVar10 = fVar10 * fVar12 - fVar8 * fVar17;
    fVar12 = fVar8 * fVar15 - fVar9 * fVar12;
    fVar11 = fVar11 * fVar18 - fVar11 * fVar18;
    fVar8 = fVar10 * fVar10;
    fVar9 = fVar12 * fVar12;
    auVar23._4_4_ = fVar8;
    auVar23._0_4_ = fVar8;
    auVar23._8_4_ = fVar8;
    auVar23._12_4_ = fVar8;
    auVar24._4_12_ = auVar23._4_12_;
    auVar24._0_4_ = fVar8 + fVar13 * fVar13;
    auVar25._4_4_ = fVar9;
    auVar25._0_4_ = fVar9 + auVar24._0_4_;
    auVar25._8_4_ = fVar9;
    auVar25._12_4_ = fVar9;
    auVar25 = rsqrtss(auVar24,auVar25);
    fVar8 = auVar25._0_4_;
    fVar9 = fVar8 * 0.5 * (3.0 - (fVar9 + auVar24._0_4_) * fVar8 * fVar8);
    *param_7 = fVar13;
    param_7[1] = fVar10;
    param_7[2] = fVar12;
    param_7[3] = fVar11;
    fVar8 = fVar12 * param_5[2];
    auVar5._4_4_ = fVar8;
    auVar5._0_4_ = fVar8 + fVar10 * param_5[1] + fVar13 * *param_5;
    auVar5._8_4_ = fVar8;
    auVar5._12_4_ = fVar8;
    uVar7 = movmskps(param_5,auVar5);
    if ((uVar7 & 1) != 0) {
      *param_7 = -fVar13;
      param_7[1] = -fVar10;
      param_7[2] = -fVar12;
      param_7[3] = -fVar11;
    }
    fVar13 = *param_7;
    fVar15 = param_7[1];
    fVar17 = param_7[2];
    *param_7 = fVar9 * fVar13;
    param_7[1] = fVar9 * fVar15;
    param_7[2] = fVar9 * fVar17;
    param_7[3] = fVar9 * param_7[3];
    fVar8 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[2];
    fVar12 = param_2[3];
    fVar9 = (fVar11 - param_1[2]) * fVar9 * fVar17 +
            (fVar10 - param_1[1]) * fVar9 * fVar15 + (fVar8 - *param_1) * fVar9 * fVar13;
  }
  *param_6 = fVar8;
  param_6[1] = fVar10;
  param_6[2] = fVar11;
  param_6[3] = fVar12;
  fVar13 = param_7[1];
  fVar15 = param_7[2];
  fVar17 = param_7[3];
  *param_6 = fVar8 - fVar9 * *param_7;
  param_6[1] = fVar10 - fVar9 * fVar13;
  param_6[2] = fVar11 - fVar9 * fVar15;
  param_6[3] = fVar12 - fVar9 * fVar17;
  param_7[3] = -fVar9;
  return;
}



uint FUN_0093c0c0(float param_1)

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
  float *in_EAX;
  uint uVar15;
  int iVar16;
  float *pfVar17;
  float *unaff_EBX;
  bool bVar18;
  float fVar19;
  float fVar20;
  float local_70 [4];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [4];
  float local_40 [6];
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar19 = in_EAX[4];
  fVar20 = in_EAX[5];
  fVar1 = in_EAX[6];
  fVar2 = in_EAX[7];
  fVar3 = *in_EAX;
  fVar4 = in_EAX[1];
  fVar5 = in_EAX[2];
  fVar6 = in_EAX[3];
  fVar7 = in_EAX[0xc];
  fVar8 = in_EAX[0xd];
  fVar9 = in_EAX[0xe];
  fVar10 = in_EAX[0xf];
  fVar11 = in_EAX[8];
  fVar12 = in_EAX[9];
  fVar13 = in_EAX[10];
  fVar14 = in_EAX[0xb];
  local_20 = (fVar20 - fVar4) * (fVar9 - fVar5) - (fVar1 - fVar5) * (fVar8 - fVar4);
  fStack_1c = (fVar1 - fVar5) * (fVar7 - fVar3) - (fVar19 - fVar3) * (fVar9 - fVar5);
  fStack_18 = (fVar19 - fVar3) * (fVar8 - fVar4) - (fVar20 - fVar4) * (fVar7 - fVar3);
  local_40[0] = (fVar12 - fVar20) * (fVar9 - fVar1) - (fVar13 - fVar1) * (fVar8 - fVar20);
  local_40[1] = (fVar13 - fVar1) * (fVar7 - fVar19) - (fVar11 - fVar19) * (fVar9 - fVar1);
  local_40[2] = (fVar11 - fVar19) * (fVar8 - fVar20) - (fVar12 - fVar20) * (fVar7 - fVar19);
  local_40[4] = (fVar4 - fVar12) * (fVar9 - fVar13) - (fVar5 - fVar13) * (fVar8 - fVar12);
  local_40[5] = (fVar5 - fVar13) * (fVar7 - fVar11) - (fVar3 - fVar11) * (fVar9 - fVar13);
  fStack_28 = (fVar3 - fVar11) * (fVar8 - fVar12) - (fVar4 - fVar12) * (fVar7 - fVar11);
  fVar19 = param_1 * (*unaff_EBX - in_EAX[0xc]);
  fVar20 = param_1 * (unaff_EBX[1] - in_EAX[0xd]);
  param_1 = param_1 * (unaff_EBX[2] - in_EAX[0xe]);
  local_40[3] = (fVar14 - fVar2) * (fVar10 - fVar2) - (fVar14 - fVar2) * (fVar10 - fVar2);
  fStack_24 = (fVar6 - fVar14) * (fVar10 - fVar14) - (fVar6 - fVar14) * (fVar10 - fVar14);
  fStack_14 = (fVar2 - fVar6) * (fVar10 - fVar6) - (fVar2 - fVar6) * (fVar10 - fVar6);
  local_60 = local_40[0] * fVar19 + local_40[1] * fVar20 + local_40[2] * param_1;
  fStack_5c = local_40[4] * fVar19 + local_40[5] * fVar20 + fStack_28 * param_1;
  fStack_58 = local_20 * fVar19 + fStack_1c * fVar20 + fStack_18 * param_1;
  local_70[3] = local_20 * fVar19 + fStack_1c * fVar20 + fStack_18 * param_1;
  local_50[3] = local_70[3] * ABS(local_70[3]);
  local_50[0] = local_60 * ABS(local_60);
  local_50[1] = fStack_5c * ABS(fStack_5c);
  local_50[2] = fStack_58 * ABS(fStack_58);
  pfVar17 = local_40;
  iVar16 = 0;
  do {
    fVar19 = pfVar17[2] * pfVar17[2] + pfVar17[1] * pfVar17[1] + *pfVar17 * *pfVar17;
    if (fVar19 == 0.0) {
      *(undefined4 *)((int)local_70 + iVar16) = 0x7f7fffff;
    }
    else {
      *(float *)((int)local_70 + iVar16) = *(float *)((int)local_50 + iVar16) / fVar19;
    }
    fVar19 = local_70[0];
    iVar16 = iVar16 + 4;
    pfVar17 = pfVar17 + 4;
  } while (iVar16 < 0xc);
  bVar18 = local_70[0] <= local_70[1];
  if (!bVar18) {
    local_70[0] = local_70[1];
    local_70[1] = fVar19;
  }
  uVar15 = (uint)bVar18;
  if (local_70[1] <= local_70[2]) {
    uVar15 = 2;
    fVar19 = local_70[1];
  }
  else {
    bVar18 = local_70[2] < local_70[0];
    fVar19 = local_70[2];
    local_70[2] = local_70[1];
    if (bVar18) {
      fVar19 = local_70[0];
    }
  }
  if (local_70[2] < 1.0000001e-06) {
    return 0xffffffff;
  }
  if (fVar19 * 1.1 < local_70[2]) {
    return uVar15;
  }
  local_70[0] = local_60;
  local_70[1] = fStack_5c;
  local_70[2] = fStack_58;
  fStack_54 = local_70[3];
  uVar15 = FUN_0093ae50();
  return uVar15;
}



void FUN_0093c350(undefined4 param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  float *pfVar23;
  float *pfVar24;
  int *in_ECX;
  int iVar25;
  int iVar26;
  int local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  float local_50 [19];
  
  iVar25 = in_ECX[1];
  iVar26 = 4;
  local_a4 = 4;
  if (iVar25 < 3) {
    if (*in_ECX < 3) {
      iVar26 = 1;
      local_a4 = 1;
    }
    else {
      if (*in_ECX < 4) {
        if (iVar25 < 2) {
          iVar26 = 3;
          local_a4 = 3;
        }
        else {
          in_ECX[0x14] = in_ECX[8];
          in_ECX[0x15] = in_ECX[9];
          in_ECX[0x16] = in_ECX[10];
          in_ECX[0x17] = in_ECX[0xb];
          in_ECX[0x44] = in_ECX[0x3c];
          in_ECX[0x45] = in_ECX[0x3d];
          in_ECX[0x46] = in_ECX[0x3e];
          in_ECX[0x47] = in_ECX[0x3f];
          in_ECX[0x34] = in_ECX[0x2c];
          in_ECX[0x35] = in_ECX[0x2d];
          in_ECX[0x36] = in_ECX[0x2e];
          in_ECX[0x37] = in_ECX[0x2f];
        }
      }
      else {
        in_ECX[0x44] = in_ECX[0x38];
        in_ECX[0x45] = in_ECX[0x39];
        in_ECX[0x46] = in_ECX[0x3a];
        in_ECX[0x47] = in_ECX[0x3b];
        in_ECX[0x34] = in_ECX[0x28];
        in_ECX[0x35] = in_ECX[0x29];
        in_ECX[0x36] = in_ECX[0x2a];
        in_ECX[0x37] = in_ECX[0x2b];
      }
      in_ECX[0x3c] = in_ECX[0x38];
      in_ECX[0x3d] = in_ECX[0x39];
      in_ECX[0x3e] = in_ECX[0x3a];
      in_ECX[0x3f] = in_ECX[0x3b];
      in_ECX[0x2c] = in_ECX[0x28];
      in_ECX[0x2d] = in_ECX[0x29];
      in_ECX[0x2e] = in_ECX[0x2a];
      in_ECX[0x2f] = in_ECX[0x2b];
      in_ECX[0x40] = in_ECX[0x38];
      in_ECX[0x41] = in_ECX[0x39];
      in_ECX[0x42] = in_ECX[0x3a];
      in_ECX[0x43] = in_ECX[0x3b];
      in_ECX[0x30] = in_ECX[0x28];
      in_ECX[0x31] = in_ECX[0x29];
      in_ECX[0x32] = in_ECX[0x2a];
      in_ECX[0x33] = in_ECX[0x2b];
    }
  }
  else {
    if (iVar25 < 4) {
      if (*in_ECX < 2) {
        iVar26 = 3;
        local_a4 = 3;
      }
      else {
        in_ECX[0x14] = in_ECX[0xc];
        in_ECX[0x15] = in_ECX[0xd];
        in_ECX[0x16] = in_ECX[0xe];
        in_ECX[0x17] = in_ECX[0xf];
        in_ECX[0x44] = in_ECX[0x38];
        in_ECX[0x45] = in_ECX[0x39];
        in_ECX[0x46] = in_ECX[0x3a];
        in_ECX[0x47] = in_ECX[0x3b];
        in_ECX[0x34] = in_ECX[0x28];
        in_ECX[0x35] = in_ECX[0x29];
        in_ECX[0x36] = in_ECX[0x2a];
        in_ECX[0x37] = in_ECX[0x2b];
      }
    }
    else {
      in_ECX[0x14] = in_ECX[8];
      in_ECX[0x15] = in_ECX[9];
      in_ECX[0x16] = in_ECX[10];
      in_ECX[0x17] = in_ECX[0xb];
    }
    in_ECX[0xc] = in_ECX[8];
    in_ECX[0xd] = in_ECX[9];
    in_ECX[0xe] = in_ECX[10];
    in_ECX[0xf] = in_ECX[0xb];
    in_ECX[0x10] = in_ECX[8];
    in_ECX[0x11] = in_ECX[9];
    in_ECX[0x12] = in_ECX[10];
    in_ECX[0x13] = in_ECX[0xb];
  }
  if (iVar26 != 0) {
    pfVar24 = local_50;
    pfVar23 = (float *)(in_ECX + 8);
    do {
      fVar3 = pfVar23[0x21];
      fVar4 = pfVar23[0x22];
      fVar5 = pfVar23[0x23];
      fVar6 = pfVar23[1];
      fVar7 = pfVar23[2];
      fVar8 = pfVar23[3];
      *pfVar24 = *pfVar23 - pfVar23[0x20];
      pfVar24[1] = fVar6 - fVar3;
      pfVar24[2] = fVar7 - fVar4;
      pfVar24[3] = fVar8 - fVar5;
      pfVar23 = pfVar23 + 4;
      pfVar24 = pfVar24 + 4;
      iVar26 = iVar26 + -1;
    } while (iVar26 != 0);
  }
  FUN_00952b90(param_1,param_2,param_3,0x38d1b717,in_ECX + 8,in_ECX + 0x38,local_50,&local_a4,
               &local_80);
  if (local_a4 == 1) {
    in_ECX[1] = 1;
    *in_ECX = 1;
    in_ECX[5] = 1;
    in_ECX[0x48] = local_80;
    in_ECX[0x49] = iStack_7c;
    in_ECX[0x4a] = iStack_78;
    in_ECX[0x4b] = iStack_74;
    return;
  }
  in_ECX[1] = 3;
  *in_ECX = 3;
  if (((in_ECX[0xf] & 0xc0ffffffU) == (in_ECX[0x13] & 0xc0ffffffU)) ||
     ((in_ECX[0xb] & 0xc0ffffffU) == (in_ECX[0x13] & 0xc0ffffffU))) {
    *in_ECX = 2;
  }
  if ((in_ECX[0xb] & 0xc0ffffffU) == (in_ECX[0xf] & 0xc0ffffffU)) {
    iVar25 = *in_ECX;
    *in_ECX = iVar25 + -1;
    piVar1 = in_ECX + (iVar25 + 1) * 4;
    iVar25 = piVar1[1];
    iVar26 = piVar1[2];
    iVar22 = piVar1[3];
    in_ECX[8] = *piVar1;
    in_ECX[9] = iVar25;
    in_ECX[10] = iVar26;
    in_ECX[0xb] = iVar22;
  }
  if (((in_ECX[0x3f] & 0xc0ffffffU) == (in_ECX[0x43] & 0xc0ffffffU)) ||
     ((in_ECX[0x3b] & 0xc0ffffffU) == (in_ECX[0x43] & 0xc0ffffffU))) {
    in_ECX[1] = in_ECX[1] + -1;
  }
  iVar25 = in_ECX[1];
  if ((1 < iVar25) && ((in_ECX[0x3b] & 0xc0ffffffU) == (in_ECX[0x3f] & 0xc0ffffffU))) {
    in_ECX[1] = iVar25 + -1;
    piVar1 = in_ECX + (iVar25 + 0xd) * 4;
    iVar25 = piVar1[1];
    iVar26 = piVar1[2];
    iVar22 = piVar1[3];
    in_ECX[0x38] = *piVar1;
    in_ECX[0x39] = iVar25;
    in_ECX[0x3a] = iVar26;
    in_ECX[0x3b] = iVar22;
  }
  fVar3 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar6 = param_3[3];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  fVar10 = param_3[7];
  fVar11 = param_3[8];
  fVar12 = param_3[9];
  fVar13 = param_3[10];
  fVar14 = param_3[0xb];
  fVar15 = param_3[0xc];
  fVar16 = param_3[0xd];
  fVar17 = param_3[0xe];
  fVar18 = param_3[0xf];
  iVar25 = in_ECX[1];
  pfVar23 = (float *)(in_ECX + 0x28);
  pfVar24 = (float *)(in_ECX + 0x38);
  do {
    fVar19 = *pfVar24;
    fVar20 = pfVar24[1];
    fVar21 = pfVar24[2];
    pfVar2 = (float *)(((int)pfVar23 - (int)(in_ECX + 0x38)) + (int)pfVar24);
    *pfVar2 = fVar3 * fVar19 + fVar7 * fVar20 + fVar11 * fVar21 + fVar15;
    pfVar2[1] = fVar4 * fVar19 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16;
    pfVar2[2] = fVar5 * fVar19 + fVar9 * fVar20 + fVar13 * fVar21 + fVar17;
    pfVar2[3] = fVar6 * fVar19 + fVar10 * fVar20 + fVar14 * fVar21 + fVar18;
    pfVar24 = pfVar24 + 4;
    iVar25 = iVar25 + -1;
  } while (0 < iVar25);
  if (4 < *in_ECX + in_ECX[1]) {
    FUN_0093b7d0();
  }
  if ((*in_ECX == 2) && (in_ECX[1] == 2)) {
    local_a0 = (float)in_ECX[0xc] - (float)in_ECX[8];
    fStack_9c = (float)in_ECX[0xd] - (float)in_ECX[9];
    fStack_98 = (float)in_ECX[0xe] - (float)in_ECX[10];
    fStack_94 = (float)in_ECX[0xf] - (float)in_ECX[0xb];
    local_90 = (float)in_ECX[0x2c] - *pfVar23;
    fStack_8c = (float)in_ECX[0x2d] - (float)in_ECX[0x29];
    fStack_88 = (float)in_ECX[0x2e] - (float)in_ECX[0x2a];
    fStack_84 = (float)in_ECX[0x2f] - (float)in_ECX[0x2b];
    FUN_008d1a30(in_ECX + 8,&local_a0,pfVar23,&local_90,in_ECX + 0x4c);
  }
  in_ECX[5] = 1;
  in_ECX[0x48] = local_80;
  in_ECX[0x49] = iStack_7c;
  in_ECX[0x4a] = iStack_78;
  in_ECX[0x4b] = iStack_74;
  return;
}



undefined4 FUN_0093c690(int *param_1,int *param_2,float *param_3,uint *param_4)

{
  uint *puVar1;
  float *pfVar2;
  uint *puVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  uint uVar14;
  bool bVar15;
  bool bVar16;
  float *pfVar17;
  uint uVar18;
  int iVar19;
  uint *in_ECX;
  uint *puVar20;
  uint extraout_ECX;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
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
  float fVar44;
  float fVar45;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar38;
  float fVar46;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  float fVar47;
  ulonglong uVar48;
  undefined8 uVar49;
  uint *puVar50;
  undefined4 uVar51;
  float local_94;
  float local_60;
  float fStack_5c;
  float fStack_58;
  uint uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  uint uStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar37 = *param_3;
  fVar33 = param_3[1];
  fVar30 = param_3[2];
  fVar32 = param_3[3];
  fVar47 = param_3[4];
  fVar25 = param_3[5];
  fVar28 = param_3[6];
  fVar29 = param_3[7];
  fVar27 = param_3[8];
  fVar26 = param_3[9];
  fVar31 = param_3[10];
  fVar34 = param_3[0xb];
  fVar35 = param_3[0xc];
  fVar36 = param_3[0xd];
  fVar38 = param_3[0xe];
  fVar44 = param_3[0xf];
  uVar22 = in_ECX[1];
  puVar1 = in_ECX + 1;
  pfVar17 = (float *)(in_ECX + 0x38);
  iVar19 = 0xa0 - (int)pfVar17;
  do {
    fVar45 = *pfVar17;
    fVar46 = pfVar17[1];
    fVar13 = pfVar17[2];
    pfVar2 = (float *)((int)in_ECX + iVar19 + (int)pfVar17);
    *pfVar2 = fVar37 * fVar45 + fVar47 * fVar46 + fVar27 * fVar13 + fVar35;
    pfVar2[1] = fVar33 * fVar45 + fVar25 * fVar46 + fVar26 * fVar13 + fVar36;
    pfVar2[2] = fVar30 * fVar45 + fVar28 * fVar46 + fVar31 * fVar13 + fVar38;
    pfVar2[3] = fVar32 * fVar45 + fVar29 * fVar46 + fVar34 * fVar13 + fVar44;
    pfVar17 = pfVar17 + 4;
    uVar22 = uVar22 - 1;
  } while (0 < (int)uVar22);
  bVar16 = false;
  local_94 = 1e-10;
LAB_0093c722:
  uVar22 = *puVar1;
  local_94 = local_94 + local_94;
  bVar16 = (bool)(bVar16 ^ 1);
  puVar3 = (uint *)(*in_ECX + uVar22);
  uVar18 = *in_ECX << 3 | uVar22;
  in_ECX[0x5c] = 0;
  puVar24 = puVar3;
  while (uVar18 - 9 < 0x19) {
    uVar18 = (uint)(&switchD_0093c767::switchdataD_0093d47c)[uVar18 - 9];
    switch((&switchD_0093c767::switchdataD_0093d450)[uVar18]) {
    case (undefined *)0x93c76e:
      uVar51 = 1;
      uVar18 = in_ECX[0x5d];
      puVar24 = in_ECX + 0x28;
      puVar20 = in_ECX + 8;
      puVar50 = in_ECX;
      puVar23 = puVar1;
      goto LAB_0093c7aa;
    case (undefined *)0x93c78d:
      uVar51 = 0xffffffff;
      uVar18 = in_ECX[0x5d];
      puVar20 = in_ECX + 0x28;
      puVar24 = in_ECX + 8;
      puVar50 = puVar1;
      puVar23 = in_ECX;
LAB_0093c7aa:
      iVar19 = FUN_0093b220(puVar20,puVar24,puVar50,puVar23,
                            CONCAT31((int3)(uVar22 >> 8),uVar18 == 2),uVar51);
      if (iVar19 != 1) {
        if (iVar19 == 2) {
switchD_0093c767_caseD_93c7bf:
          pfVar17 = (float *)(in_ECX + 8);
          local_20 = (float)in_ECX[0xc] - (float)in_ECX[8];
          fStack_1c = (float)in_ECX[0xd] - (float)in_ECX[9];
          fStack_18 = (float)in_ECX[0xe] - (float)in_ECX[10];
          fStack_14 = (float)in_ECX[0xf] - (float)in_ECX[0xb];
          local_50 = (float)in_ECX[0x2c] - (float)in_ECX[0x28];
          fStack_4c = (float)in_ECX[0x2d] - (float)in_ECX[0x29];
          fStack_48 = (float)in_ECX[0x2e] - (float)in_ECX[0x2a];
          fStack_44 = (float)in_ECX[0x2f] - (float)in_ECX[0x2b];
          uVar48 = FUN_008d1a30(pfVar17,&local_20,in_ECX + 0x28,&local_50,in_ECX + 0x4c);
          puVar24 = (uint *)(uVar48 >> 0x20);
          if ((int)uVar48 != 0) {
            if ((uVar48 & 1) == 0) {
              if ((uVar48 & 2) != 0) goto LAB_0093c828;
            }
            else {
              *pfVar17 = (float)in_ECX[0xc];
              in_ECX[9] = in_ECX[0xd];
              in_ECX[10] = in_ECX[0xe];
              in_ECX[0xb] = in_ECX[0xf];
LAB_0093c828:
              *in_ECX = 1;
            }
            if ((uVar48 & 4) == 0) {
              if ((uVar48 & 8) != 0) {
                *puVar1 = 1;
              }
            }
            else {
              in_ECX[0x28] = in_ECX[0x2c];
              in_ECX[0x29] = in_ECX[0x2d];
              in_ECX[0x2a] = in_ECX[0x2e];
              in_ECX[0x2b] = in_ECX[0x2f];
              in_ECX[0x38] = in_ECX[0x3c];
              in_ECX[0x39] = in_ECX[0x3d];
              in_ECX[0x3a] = in_ECX[0x3e];
              in_ECX[0x3b] = in_ECX[0x3f];
              *puVar1 = 1;
            }
            goto LAB_0093cb05;
          }
          fVar33 = fStack_1c * fStack_48 - fStack_18 * fStack_4c;
          fVar30 = fStack_18 * local_50 - local_20 * fStack_48;
          fVar32 = local_20 * fStack_4c - fStack_1c * local_50;
          fVar47 = fStack_14 * fStack_44 - fStack_14 * fStack_44;
          fVar37 = fVar32 * ((float)in_ECX[10] - (float)in_ECX[0x2a]);
          auVar39._4_4_ = fVar37;
          auVar39._0_4_ = fVar37;
          auVar39._8_4_ = fVar37;
          auVar39._12_4_ = fVar37;
          auVar40._4_12_ = auVar39._4_12_;
          auVar40._0_4_ =
               fVar37 + fVar30 * ((float)in_ECX[9] - (float)in_ECX[0x29]) +
                        fVar33 * (*pfVar17 - (float)in_ECX[0x28]);
          uVar22 = movmskps(puVar24,auVar40);
          in_ECX[0x48] = (uint)fVar33;
          in_ECX[0x49] = (uint)fVar30;
          in_ECX[0x4a] = (uint)fVar32;
          in_ECX[0x4b] = (uint)fVar47;
          if ((uVar22 & 1) == 0) goto LAB_0093cfe4;
          fVar33 = -fVar33;
          fVar30 = -fVar30;
          fVar32 = -fVar32;
          fVar47 = -fVar47;
          goto LAB_0093cfdd;
        }
        goto LAB_0093cfe4;
      }
      goto switchD_0093c767_caseD_93cb1a;
    case (undefined *)0x93c7bf:
      goto switchD_0093c767_caseD_93c7bf;
    case (undefined *)0x93c86c:
      iVar19 = FUN_0093c0c0(0x3f800000);
      if (iVar19 < 0) goto switchD_0093c767_caseD_93cb1a;
      uVar22 = in_ECX[0x35];
      uVar18 = in_ECX[0x36];
      uVar14 = in_ECX[0x37];
      *puVar1 = *puVar1 - 1;
      puVar24 = in_ECX + (iVar19 + 10) * 4;
      *puVar24 = in_ECX[0x34];
      puVar24[1] = uVar22;
      puVar24[2] = uVar18;
      puVar24[3] = uVar14;
      uVar22 = in_ECX[0x45];
      uVar18 = in_ECX[0x46];
      uVar14 = in_ECX[0x47];
      puVar24 = in_ECX + (iVar19 + 0xe) * 4;
      *puVar24 = in_ECX[0x44];
      puVar24[1] = uVar22;
      puVar24[2] = uVar18;
      puVar24[3] = uVar14;
    case (undefined *)0x93c8b1:
      uVar49 = FUN_0093b000(in_ECX + 8,in_ECX + 0x28,1);
      puVar24 = (uint *)((ulonglong)uVar49 >> 0x20);
      if ((int)uVar49 == 7) {
LAB_0093cfe4:
        in_ECX[0x5d] = *puVar1;
        bVar15 = false;
        goto LAB_0093cb1f;
      }
      iVar19 = (int)(char)(&DAT_00a99f04)[(int)uVar49];
      if (iVar19 < 0) {
        iVar19 = iVar19 + 8;
        if (3 < iVar19) {
          iVar19 = 1;
        }
        uVar22 = in_ECX[0x31];
        uVar18 = in_ECX[0x32];
        uVar14 = in_ECX[0x33];
        *puVar1 = *puVar1 - 1;
        puVar20 = in_ECX + (iVar19 + 10) * 4;
        *puVar20 = in_ECX[0x30];
        puVar20[1] = uVar22;
        puVar20[2] = uVar18;
        puVar20[3] = uVar14;
        uVar22 = in_ECX[0x41];
        uVar14 = in_ECX[0x42];
        uVar21 = in_ECX[0x43];
        uVar18 = (iVar19 + 0xe) * 0x10;
        puVar20 = in_ECX + (iVar19 + 0xe) * 4;
        *puVar20 = in_ECX[0x40];
        puVar20[1] = uVar22;
        puVar20[2] = uVar14;
        puVar20[3] = uVar21;
switchD_0093c767_caseD_93cde0:
        fVar37 = (float)in_ECX[0x2c];
        fVar33 = (float)in_ECX[0x2d];
        fVar30 = (float)in_ECX[0x2e];
        fVar32 = (float)in_ECX[0x2f];
        fVar31 = fVar37 - (float)in_ECX[0x28];
        fVar34 = fVar33 - (float)in_ECX[0x29];
        fVar35 = fVar30 - (float)in_ECX[0x2a];
        fVar36 = fVar32 - (float)in_ECX[0x2b];
        fVar47 = (float)in_ECX[0x28] - (float)in_ECX[8];
        fVar25 = (float)in_ECX[0x29] - (float)in_ECX[9];
        fVar28 = (float)in_ECX[0x2a] - (float)in_ECX[10];
        fVar27 = (float)in_ECX[0x2b] - (float)in_ECX[0xb];
        fVar38 = fVar37 - (float)in_ECX[8];
        fVar44 = fVar33 - (float)in_ECX[9];
        fVar45 = fVar30 - (float)in_ECX[10];
        fVar46 = fVar32 - (float)in_ECX[0xb];
        fVar29 = fVar45 * fVar35;
        fVar26 = fVar28 * fVar35;
        auVar12._4_4_ = fVar29;
        auVar12._0_4_ = fVar29 + fVar44 * fVar34 + fVar38 * fVar31;
        auVar12._8_4_ = fVar29;
        auVar12._12_4_ = fVar29;
        uVar22 = movmskps(uVar18,auVar12);
        auVar10._4_4_ = fVar26;
        auVar10._0_4_ = fVar26 + fVar25 * fVar34 + fVar47 * fVar31;
        auVar10._8_4_ = fVar26;
        auVar10._12_4_ = fVar26;
        uVar18 = movmskps(puVar24,auVar10);
        if ((uVar22 & 1) == (uVar18 & 1)) {
          if ((uVar22 & 1) != 0) {
            in_ECX[0x28] = (uint)fVar37;
            in_ECX[0x29] = (uint)fVar33;
            in_ECX[0x2a] = (uint)fVar30;
            in_ECX[0x2b] = (uint)fVar32;
            in_ECX[0x38] = in_ECX[0x3c];
            in_ECX[0x39] = in_ECX[0x3d];
            in_ECX[0x3a] = in_ECX[0x3e];
            in_ECX[0x3b] = in_ECX[0x3f];
          }
          *puVar1 = *puVar1 - 1;
switchD_0093c767_caseD_93cfd0:
          fVar33 = (float)in_ECX[8] - (float)in_ECX[0x28];
          fVar30 = (float)in_ECX[9] - (float)in_ECX[0x29];
          fVar32 = (float)in_ECX[10] - (float)in_ECX[0x2a];
          fVar47 = (float)in_ECX[0xb] - (float)in_ECX[0x2b];
LAB_0093cfdd:
          in_ECX[0x48] = (uint)fVar33;
          in_ECX[0x49] = (uint)fVar30;
          in_ECX[0x4a] = (uint)fVar32;
          in_ECX[0x4b] = (uint)fVar47;
          goto LAB_0093cfe4;
        }
        fVar37 = fVar44 * fVar28 - fVar45 * fVar25;
        fVar33 = fVar45 * fVar47 - fVar38 * fVar28;
        fVar30 = fVar38 * fVar25 - fVar44 * fVar47;
        fVar32 = fVar46 * fVar27 - fVar46 * fVar27;
        in_ECX[0x48] = (uint)(fVar34 * fVar30 - fVar35 * fVar33);
        in_ECX[0x49] = (uint)(fVar35 * fVar37 - fVar31 * fVar30);
        in_ECX[0x4a] = (uint)(fVar31 * fVar33 - fVar34 * fVar37);
        in_ECX[0x4b] = (uint)(fVar36 * fVar32 - fVar36 * fVar32);
        in_ECX[0x5d] = *puVar1;
        bVar15 = false;
        goto LAB_0093cb1f;
      }
      puVar23 = (uint *)(int)(char)(&DAT_00a99f0c)[iVar19];
      puVar20 = (uint *)(int)(char)(&DAT_00a99f0e)[iVar19];
      fVar37 = (float)in_ECX[9];
      fVar33 = (float)in_ECX[10];
      pfVar17 = (float *)(in_ECX + (iVar19 + 10) * 4);
      fVar30 = *pfVar17;
      fVar32 = pfVar17[1];
      fVar47 = pfVar17[2];
      pfVar17 = (float *)(in_ECX + ((int)puVar20 + 10) * 4);
      fVar25 = *pfVar17;
      fVar28 = pfVar17[1];
      fVar29 = pfVar17[2];
      puVar24 = in_ECX + ((int)puVar20 + 10) * 4;
      pfVar17 = (float *)(in_ECX + ((int)puVar23 + 10) * 4);
      puVar50 = in_ECX + ((int)puVar23 + 10) * 4;
      fVar26 = (float)in_ECX[8] - fVar30;
      fVar27 = (fVar33 - fVar47) * (pfVar17[2] - fVar47);
      uVar22 = in_ECX[0x31];
      uVar18 = in_ECX[0x32];
      uVar14 = in_ECX[0x33];
      auVar8._4_4_ = fVar27;
      auVar8._0_4_ = fVar27 + (fVar37 - fVar32) * (pfVar17[1] - fVar32) +
                              fVar26 * (*pfVar17 - fVar30);
      auVar8._8_4_ = fVar27;
      auVar8._12_4_ = fVar27;
      uVar21 = movmskps(puVar50,auVar8);
      *puVar1 = 2;
      if ((uVar21 & 1) == 0) {
        *puVar24 = in_ECX[0x30];
        puVar24[1] = uVar22;
        puVar24[2] = uVar18;
        puVar24[3] = uVar14;
        uVar22 = in_ECX[0x41];
        uVar18 = in_ECX[0x42];
        uVar14 = in_ECX[0x43];
        puVar20 = in_ECX + ((int)puVar20 + 0xe) * 4;
        *puVar20 = in_ECX[0x40];
        puVar20[1] = uVar22;
        puVar20[2] = uVar18;
        puVar20[3] = uVar14;
      }
      else {
        *puVar50 = in_ECX[0x30];
        puVar50[1] = uVar22;
        puVar50[2] = uVar18;
        puVar50[3] = uVar14;
        uVar22 = in_ECX[0x41];
        uVar18 = in_ECX[0x42];
        uVar14 = in_ECX[0x43];
        fVar33 = (fVar33 - fVar47) * (fVar29 - fVar47);
        puVar24 = in_ECX + ((int)puVar23 + 0xe) * 4;
        *puVar24 = in_ECX[0x40];
        puVar24[1] = uVar22;
        puVar24[2] = uVar18;
        puVar24[3] = uVar14;
        auVar7._4_4_ = fVar33;
        auVar7._0_4_ = fVar33 + (fVar37 - fVar32) * (fVar28 - fVar32) + fVar26 * (fVar25 - fVar30);
        auVar7._8_4_ = fVar33;
        auVar7._12_4_ = fVar33;
        uVar22 = movmskps(((int)puVar23 + 0xe) * 0x10,auVar7);
        puVar24 = puVar23;
        if ((uVar22 & 1) != 0) {
          puVar24 = (uint *)*puVar1;
          if (puVar20 == puVar24) {
            puVar20 = puVar23;
          }
          *puVar1 = (int)puVar24 - 1;
          puVar50 = in_ECX + ((int)puVar24 + 9) * 4;
          uVar22 = puVar50[1];
          uVar18 = puVar50[2];
          uVar14 = puVar50[3];
          puVar24 = (uint *)(((int)puVar20 + 10) * 0x10);
          puVar23 = (uint *)((int)puVar24 + (int)in_ECX);
          *puVar23 = *puVar50;
          puVar23[1] = uVar22;
          puVar23[2] = uVar18;
          puVar23[3] = uVar14;
          puVar50 = in_ECX + (*puVar1 + 0xe) * 4;
          uVar22 = puVar50[1];
          uVar18 = puVar50[2];
          uVar14 = puVar50[3];
          puVar20 = in_ECX + ((int)puVar20 + 0xe) * 4;
          *puVar20 = *puVar50;
          puVar20[1] = uVar22;
          puVar20[2] = uVar18;
          puVar20[3] = uVar14;
        }
      }
LAB_0093cb05:
      uVar22 = *puVar1;
      uVar18 = *in_ECX << 3 | uVar22;
      break;
    case (undefined *)0x93c9e4:
      iVar19 = FUN_0093c0c0(0xbf800000);
      if (-1 < iVar19) {
        uVar22 = in_ECX[0x15];
        uVar18 = in_ECX[0x16];
        uVar14 = in_ECX[0x17];
        *in_ECX = *in_ECX - 1;
        puVar24 = in_ECX + (iVar19 + 2) * 4;
        *puVar24 = in_ECX[0x14];
        puVar24[1] = uVar22;
        puVar24[2] = uVar18;
        puVar24[3] = uVar14;
switchD_0093c767_caseD_93ca15:
        iVar19 = FUN_0093b000(in_ECX + 0x28,in_ECX + 8,0xffffffff);
        if (iVar19 == 7) goto LAB_0093cfe4;
        iVar19 = (int)(char)(&DAT_00a99f04)[iVar19];
        if (-1 < iVar19) {
          cVar4 = (&DAT_00a99f0c)[iVar19];
          uVar21 = (uint)(char)(&DAT_00a99f0e)[iVar19];
          fVar37 = (float)in_ECX[0x28];
          fVar33 = (float)in_ECX[0x29];
          pfVar17 = (float *)(in_ECX + (iVar19 + 2) * 4);
          fVar30 = *pfVar17;
          fVar32 = pfVar17[1];
          fVar47 = pfVar17[2];
          pfVar17 = (float *)(in_ECX + (uVar21 + 2) * 4);
          fVar25 = *pfVar17;
          fVar28 = pfVar17[1];
          fVar29 = pfVar17[2];
          puVar50 = in_ECX + (uVar21 + 2) * 4;
          iVar19 = (int)cVar4 + 2;
          pfVar17 = (float *)(in_ECX + iVar19 * 4);
          puVar20 = in_ECX + iVar19 * 4;
          fVar27 = ((float)in_ECX[0x2a] - fVar47) * (pfVar17[2] - fVar47);
          uVar22 = in_ECX[0x11];
          uVar18 = in_ECX[0x12];
          uVar14 = in_ECX[0x13];
          auVar43._4_4_ = fVar27;
          auVar43._0_4_ =
               fVar27 + (fVar33 - fVar32) * (pfVar17[1] - fVar32) +
                        (fVar37 - fVar30) * (*pfVar17 - fVar30);
          auVar43._8_4_ = fVar27;
          auVar43._12_4_ = fVar27;
          puVar24 = (uint *)movmskps(iVar19 * 0x10,auVar43);
          *in_ECX = 2;
          if (((uint)puVar24 & 1) == 0) {
            *puVar50 = in_ECX[0x10];
            puVar50[1] = uVar22;
            puVar50[2] = uVar18;
            puVar50[3] = uVar14;
          }
          else {
            fVar47 = ((float)in_ECX[0x2a] - fVar47) * (fVar29 - fVar47);
            *puVar20 = in_ECX[0x10];
            puVar20[1] = uVar22;
            puVar20[2] = uVar18;
            puVar20[3] = uVar14;
            auVar6._4_4_ = fVar47;
            auVar6._0_4_ = fVar47 + (fVar33 - fVar32) * (fVar28 - fVar32) +
                                    (fVar37 - fVar30) * (fVar25 - fVar30);
            auVar6._8_4_ = fVar47;
            auVar6._12_4_ = fVar47;
            uVar22 = movmskps(puVar20,auVar6);
            if ((uVar22 & 1) != 0) {
              uVar22 = *in_ECX;
              if (uVar21 == uVar22) {
                uVar21 = (int)cVar4;
              }
              *in_ECX = uVar22 - 1;
              puVar20 = in_ECX + (uVar22 + 1) * 4;
              uVar22 = puVar20[1];
              uVar18 = puVar20[2];
              uVar14 = puVar20[3];
              puVar50 = in_ECX + (uVar21 + 2) * 4;
              *puVar50 = *puVar20;
              puVar50[1] = uVar22;
              puVar50[2] = uVar18;
              puVar50[3] = uVar14;
            }
          }
          goto LAB_0093cb05;
        }
        iVar19 = iVar19 + 8;
        if (3 < iVar19) {
          iVar19 = 1;
        }
        uVar22 = in_ECX[0x11];
        uVar14 = in_ECX[0x12];
        uVar21 = in_ECX[0x13];
        uVar18 = (iVar19 + 2) * 0x10;
        *in_ECX = *in_ECX - 1;
        puVar24 = in_ECX + (iVar19 + 2) * 4;
        *puVar24 = in_ECX[0x10];
        puVar24[1] = uVar22;
        puVar24[2] = uVar14;
        puVar24[3] = uVar21;
        uVar22 = extraout_ECX;
switchD_0093c767_caseD_93cef1:
        fVar37 = (float)in_ECX[0xc];
        fVar33 = (float)in_ECX[0xd];
        fVar30 = (float)in_ECX[0xe];
        fVar32 = (float)in_ECX[0xf];
        fVar47 = (float)in_ECX[8];
        fVar31 = fVar37 - fVar47;
        fVar34 = fVar33 - (float)in_ECX[9];
        fVar35 = fVar30 - (float)in_ECX[10];
        fVar36 = fVar32 - (float)in_ECX[0xb];
        fVar47 = fVar47 - (float)in_ECX[0x28];
        fVar25 = (float)in_ECX[9] - (float)in_ECX[0x29];
        fVar28 = (float)in_ECX[10] - (float)in_ECX[0x2a];
        fVar27 = (float)in_ECX[0xb] - (float)in_ECX[0x2b];
        fVar38 = fVar37 - (float)in_ECX[0x28];
        fVar44 = fVar33 - (float)in_ECX[0x29];
        fVar45 = fVar30 - (float)in_ECX[0x2a];
        fVar46 = fVar32 - (float)in_ECX[0x2b];
        fVar29 = fVar45 * fVar35;
        fVar26 = fVar28 * fVar35;
        auVar11._4_4_ = fVar29;
        auVar11._0_4_ = fVar29 + fVar44 * fVar34 + fVar38 * fVar31;
        auVar11._8_4_ = fVar29;
        auVar11._12_4_ = fVar29;
        uVar18 = movmskps(uVar18,auVar11);
        auVar9._4_4_ = fVar26;
        auVar9._0_4_ = fVar26 + fVar25 * fVar34 + fVar47 * fVar31;
        auVar9._8_4_ = fVar26;
        auVar9._12_4_ = fVar26;
        uVar22 = movmskps(uVar22,auVar9);
        if ((uVar18 & 1) == (uVar22 & 1)) {
          if ((uVar18 & 1) != 0) {
            in_ECX[8] = (uint)fVar37;
            in_ECX[9] = (uint)fVar33;
            in_ECX[10] = (uint)fVar30;
            in_ECX[0xb] = (uint)fVar32;
            in_ECX[0x18] = in_ECX[0x1c];
            in_ECX[0x19] = in_ECX[0x1d];
            in_ECX[0x1a] = in_ECX[0x1e];
            in_ECX[0x1b] = in_ECX[0x1f];
          }
          *in_ECX = *in_ECX - 1;
          goto switchD_0093c767_caseD_93cfd0;
        }
        fVar37 = fVar44 * fVar28 - fVar45 * fVar25;
        fVar33 = fVar45 * fVar47 - fVar38 * fVar28;
        fVar30 = fVar38 * fVar25 - fVar44 * fVar47;
        fVar32 = fVar46 * fVar27 - fVar46 * fVar27;
        in_ECX[0x48] = (uint)(fVar33 * fVar35 - fVar30 * fVar34);
        in_ECX[0x49] = (uint)(fVar30 * fVar31 - fVar37 * fVar35);
        in_ECX[0x4a] = (uint)(fVar37 * fVar34 - fVar33 * fVar31);
        in_ECX[0x4b] = (uint)(fVar32 * fVar36 - fVar32 * fVar36);
        in_ECX[0x5d] = *puVar1;
        bVar15 = false;
        goto LAB_0093cb1f;
      }
      goto switchD_0093c767_caseD_93cb1a;
    case (undefined *)0x93ca15:
      goto switchD_0093c767_caseD_93ca15;
    case (undefined *)0x93cb1a:
      goto switchD_0093c767_caseD_93cb1a;
    case (undefined *)0x93cde0:
      goto switchD_0093c767_caseD_93cde0;
    case (undefined *)0x93cef1:
      goto switchD_0093c767_caseD_93cef1;
    case (undefined *)0x93cfd0:
      goto switchD_0093c767_caseD_93cfd0;
    }
  }
switchD_0093c767_caseD_93cb1a:
  bVar15 = true;
LAB_0093cb1f:
  uVar22 = *in_ECX;
  fVar33 = (float)in_ECX[0x4a] * (float)in_ECX[0x4a] +
           (float)in_ECX[0x49] * (float)in_ECX[0x49] + (float)in_ECX[0x48] * (float)in_ECX[0x48];
  in_ECX[5] = in_ECX[5] | (uVar22 - (int)puVar3) + *puVar1;
  pfVar17 = (float *)(in_ECX + 8);
  fVar37 = ((float)in_ECX[10] - (float)in_ECX[0x2a]) * (float)in_ECX[0x4a] +
           ((float)in_ECX[9] - (float)in_ECX[0x29]) * (float)in_ECX[0x49] +
           ((float)in_ECX[8] - (float)in_ECX[0x28]) * (float)in_ECX[0x48];
  if (((bVar15) ||
      (fVar30 = fVar33 * local_94, fVar37 = ABS(fVar37) * fVar37,
      fVar37 < fVar30 != (fVar37 == fVar30))) || (fVar33 < local_94)) {
    if ((char)in_ECX[4] != '\0') {
      if (4 < (int)(*in_ECX + *puVar1)) {
        if ((int)*puVar1 < (int)*in_ECX) {
          *in_ECX = 3;
          *puVar1 = 1;
          return 4;
        }
        *in_ECX = 1;
        *puVar1 = 3;
      }
      return 4;
    }
    FUN_0093c350(param_1,param_2,param_3);
LAB_0093d335:
    fVar37 = (float)in_ECX[0x48];
    fVar33 = (float)in_ECX[0x49];
    fVar30 = (float)in_ECX[0x4a];
    fVar32 = (float)in_ECX[0x28];
    fVar47 = (float)in_ECX[0x29];
    fVar25 = (float)in_ECX[0x2a];
    fVar28 = *pfVar17;
    fVar29 = (float)in_ECX[9];
    fVar27 = (float)in_ECX[10];
    fVar26 = fVar33 * fVar33;
    fVar31 = fVar30 * fVar30;
    auVar41._4_4_ = fVar26;
    auVar41._0_4_ = fVar26;
    auVar41._8_4_ = fVar26;
    auVar41._12_4_ = fVar26;
    auVar42._4_12_ = auVar41._4_12_;
    auVar42._0_4_ = fVar26 + fVar37 * fVar37;
    auVar5._4_4_ = fVar31;
    auVar5._0_4_ = fVar31 + auVar42._0_4_;
    auVar5._8_4_ = fVar31;
    auVar5._12_4_ = fVar31;
    auVar43 = rsqrtss(auVar42,auVar5);
    fVar26 = auVar43._0_4_;
    fVar26 = fVar26 * 0.5 * (3.0 - (fVar31 + auVar42._0_4_) * fVar26 * fVar26);
    in_ECX[0x48] = (uint)(fVar26 * fVar37);
    in_ECX[0x49] = (uint)(fVar26 * fVar33);
    in_ECX[0x4a] = (uint)(fVar26 * fVar30);
    in_ECX[0x4b] = (uint)(fVar26 * (float)in_ECX[0x4b]);
    uVar22 = in_ECX[0x49];
    uVar18 = in_ECX[0x4a];
    uVar14 = in_ECX[0x4b];
    *param_4 = in_ECX[0x48];
    param_4[1] = uVar22;
    param_4[2] = uVar18;
    param_4[3] = uVar14;
    fVar37 = (fVar27 - fVar25) * (float)in_ECX[0x4a] +
             (fVar29 - fVar47) * (float)in_ECX[0x49] + (fVar28 - fVar32) * (float)in_ECX[0x48];
    param_4[3] = (uint)fVar37;
    in_ECX[0x4b] = (uint)fVar37;
    return 0;
  }
  if (((bVar16) && (uVar22 != in_ECX[2])) && (in_ECX[0x5c] != 1)) {
    local_30 = -(float)in_ECX[0x48];
    fStack_2c = -(float)in_ECX[0x49];
    fStack_28 = -(float)in_ECX[0x4a];
    uStack_24 = in_ECX[0x4b] ^ 0x80000000;
    (**(code **)(*param_1 + 0x24))(&local_30,in_ECX + (uVar22 + 2) * 4);
    uVar22 = *in_ECX;
    pfVar2 = (float *)(in_ECX + (uVar22 + 2) * 4);
    fVar37 = *pfVar2;
    fVar33 = pfVar2[1];
    fVar32 = pfVar2[2];
    fVar47 = (fVar32 - (float)in_ECX[10]) * fStack_28 +
             (fVar33 - (float)in_ECX[9]) * fStack_2c + (fVar37 - *pfVar17) * local_30;
    if (fVar30 < ABS(fVar47) * fVar47) {
      if (uVar22 == 2) {
LAB_0093ccd6:
        fVar37 = (fVar32 - (float)in_ECX[0xe]) * fStack_28 +
                 (fVar33 - (float)in_ECX[0xd]) * fStack_2c +
                 (fVar37 - (float)in_ECX[0xc]) * local_30;
        if (ABS(fVar37) * fVar37 < fVar30) goto LAB_0093cff3;
      }
      else if (uVar22 == 3) {
        fVar47 = (fVar32 - (float)in_ECX[0x12]) * fStack_28 +
                 (fVar33 - (float)in_ECX[0x11]) * fStack_2c +
                 (fVar37 - (float)in_ECX[0x10]) * local_30;
        if (ABS(fVar47) * fVar47 < fVar30) goto LAB_0093cff3;
        goto LAB_0093ccd6;
      }
      *in_ECX = uVar22 + 1;
      in_ECX[5] = 1;
      goto LAB_0093c722;
    }
  }
LAB_0093cff3:
  if ((*puVar1 == in_ECX[3]) || (in_ECX[0x5c] == 0xffffffff)) {
LAB_0093d1d1:
    if (((bVar16) || (*in_ECX == in_ECX[2])) || (in_ECX[0x5c] == 1)) goto LAB_0093d335;
    local_60 = -(float)in_ECX[0x48];
    fStack_5c = -(float)in_ECX[0x49];
    fStack_58 = -(float)in_ECX[0x4a];
    uStack_54 = in_ECX[0x4b] ^ 0x80000000;
    (**(code **)(*param_1 + 0x24))(&local_60,in_ECX + (*in_ECX + 2) * 4);
    uVar22 = *in_ECX;
    pfVar2 = (float *)(in_ECX + (uVar22 + 2) * 4);
    fVar37 = *pfVar2;
    fVar33 = pfVar2[1];
    fVar32 = pfVar2[2];
    fVar47 = (fVar32 - (float)in_ECX[10]) * fStack_58 +
             (fVar33 - (float)in_ECX[9]) * fStack_5c + (fVar37 - *pfVar17) * local_60;
    if (ABS(fVar47) * fVar47 <= fVar30) goto LAB_0093d335;
    if (uVar22 == 2) {
LAB_0093d2c9:
      fVar37 = (fVar32 - (float)in_ECX[0xe]) * fStack_58 +
               (fVar33 - (float)in_ECX[0xd]) * fStack_5c + (fVar37 - (float)in_ECX[0xc]) * local_60;
      if (ABS(fVar37) * fVar37 < fVar30) goto LAB_0093d335;
    }
    else if (uVar22 == 3) {
      fVar47 = (fVar32 - (float)in_ECX[0x12]) * fStack_58 +
               (fVar33 - (float)in_ECX[0x11]) * fStack_5c +
               (fVar37 - (float)in_ECX[0x10]) * local_60;
      if (fVar30 <= ABS(fVar47) * fVar47) goto LAB_0093d2c9;
      goto LAB_0093d335;
    }
    *in_ECX = uVar22 + 1;
    in_ECX[5] = 1;
  }
  else {
    fVar37 = (float)in_ECX[0x48];
    fVar33 = (float)in_ECX[0x49];
    fVar32 = (float)in_ECX[0x4a];
    fStack_40 = *param_3 * fVar37 + param_3[1] * fVar33 + param_3[2] * fVar32;
    fStack_3c = param_3[4] * fVar37 + param_3[5] * fVar33 + param_3[6] * fVar32;
    fStack_38 = param_3[8] * fVar37 + param_3[9] * fVar33 + param_3[10] * fVar32;
    fStack_34 = param_3[8] * fVar37 + param_3[9] * fVar33 + param_3[10] * fVar32;
    (**(code **)(*param_2 + 0x24))(&fStack_40,in_ECX + (*puVar1 + 0xe) * 4);
    uVar22 = *puVar1;
    pfVar2 = (float *)(in_ECX + (uVar22 + 0xe) * 4);
    fVar37 = *pfVar2;
    fVar33 = pfVar2[1];
    fVar32 = pfVar2[2];
    pfVar2 = (float *)(in_ECX + (uVar22 + 0xe) * 4);
    fVar47 = (fVar32 - (float)in_ECX[0x3a]) * fStack_38 +
             (fVar33 - (float)in_ECX[0x39]) * fStack_3c + (fVar37 - (float)in_ECX[0x38]) * fStack_40
    ;
    if (ABS(fVar47) * fVar47 <= fVar30) goto LAB_0093d1d1;
    if (uVar22 == 2) {
LAB_0093d13d:
      fVar37 = (fVar32 - (float)in_ECX[0x3e]) * fStack_38 +
               (fVar33 - (float)in_ECX[0x3d]) * fStack_3c +
               (fVar37 - (float)in_ECX[0x3c]) * fStack_40;
      if (ABS(fVar37) * fVar37 < fVar30) goto LAB_0093d1d1;
    }
    else if (uVar22 == 3) {
      fVar47 = (fVar32 - (float)in_ECX[0x42]) * fStack_38 +
               (fVar33 - (float)in_ECX[0x41]) * fStack_3c +
               (fVar37 - (float)in_ECX[0x40]) * fStack_40;
      if (ABS(fVar47) * fVar47 < fVar30) goto LAB_0093d1d1;
      goto LAB_0093d13d;
    }
    fVar37 = *pfVar2;
    fVar33 = pfVar2[1];
    fVar30 = pfVar2[2];
    fVar32 = param_3[0xd];
    fVar47 = param_3[0xe];
    fVar25 = param_3[0xf];
    fVar28 = param_3[9];
    fVar29 = param_3[10];
    fVar27 = param_3[0xb];
    fVar26 = param_3[5];
    fVar31 = param_3[6];
    fVar34 = param_3[7];
    fVar35 = param_3[1];
    fVar36 = param_3[2];
    fVar38 = param_3[3];
    pfVar17 = (float *)(in_ECX + (uVar22 + 10) * 4);
    *pfVar17 = *param_3 * fVar37 + param_3[4] * fVar33 + param_3[8] * fVar30 + param_3[0xc];
    pfVar17[1] = fVar35 * fVar37 + fVar26 * fVar33 + fVar28 * fVar30 + fVar32;
    pfVar17[2] = fVar36 * fVar37 + fVar31 * fVar33 + fVar29 * fVar30 + fVar47;
    pfVar17[3] = fVar38 * fVar37 + fVar34 * fVar33 + fVar27 * fVar30 + fVar25;
    *puVar1 = *puVar1 + 1;
    in_ECX[5] = 1;
  }
  goto LAB_0093c722;
}



undefined4 FUN_0093d4a0(undefined4 *param_1,int param_2,float *param_3,float *param_4)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  float *pfVar4;
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
  undefined4 uVar16;
  int unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float fVar17;
  float fVar18;
  float fStack_1b8;
  undefined1 *puStack_1b4;
  int iStack_1a4;
  int iStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  float local_180;
  undefined1 local_170 [104];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  undefined1 auStack_bc [68];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  
  piVar3 = (int *)param_1[3];
  fStack_1b8 = (float)(int)*(char *)(param_2 + 8);
  cVar1 = *(char *)(param_2 + 0xb);
  cVar2 = *(char *)(param_2 + 10);
  puStack_1b4 = local_170;
  local_180 = (float)((uint)local_180 & 0xffffff00);
  (**(code **)(*(int *)param_1[2] + 0x28))(param_2);
  (**(code **)(*piVar3 + 0x28))(param_2 + iStack_19c * 2,uStack_198,auStack_bc);
  FUN_0093c690(param_1[2],param_1[3],*param_1,&fStack_1b8);
  if (iStack_194 != 0) {
    FUN_0093b660(param_2);
  }
  pfVar4 = (float *)param_1[1];
  fVar17 = pfVar4[9];
  fVar5 = pfVar4[10];
  fVar6 = pfVar4[0xb];
  fVar7 = pfVar4[5];
  fVar8 = pfVar4[6];
  fVar9 = pfVar4[7];
  fVar10 = pfVar4[1];
  fVar11 = pfVar4[2];
  fVar12 = pfVar4[3];
  fVar18 = (unaff_ESI - *(float *)(param_1[2] + 0xc)) - *(float *)(param_1[3] + 0xc);
  *param_3 = *pfVar4 * fStack_1b8 + pfVar4[4] * (float)puStack_1b4 + pfVar4[8] * unaff_EDI;
  param_3[1] = fVar10 * fStack_1b8 + fVar7 * (float)puStack_1b4 + fVar17 * unaff_EDI;
  param_3[2] = fVar11 * fStack_1b8 + fVar8 * (float)puStack_1b4 + fVar5 * unaff_EDI;
  param_3[3] = fVar12 * fStack_1b8 + fVar9 * (float)puStack_1b4 + fVar6 * unaff_EDI;
  param_3[3] = fVar18;
  uVar16 = 1;
  if (fVar18 < (float)param_1[4]) {
    if (unaff_EBX == 1) {
      fVar18 = *(float *)(param_1[3] + 0xc) - unaff_ESI;
      fStack_1b8 = fVar18 * fStack_1b8;
      fVar17 = fVar18 * (float)puStack_1b4;
      fVar18 = fVar18 * unaff_EDI;
      fStack_108 = (float)(int)cVar2;
      fStack_104 = (float)(int)cVar1;
    }
    else if (iStack_1a4 == 1) {
      fVar18 = *(float *)(param_1[3] + 0xc);
      fStack_1b8 = fVar18 * fStack_1b8;
      fVar17 = fVar18 * (float)puStack_1b4;
      fVar18 = fVar18 * unaff_EDI;
      local_180 = fStack_100;
    }
    else {
      fVar18 = *(float *)(param_1[3] + 0xc) - unaff_ESI;
      fStack_1b8 = fVar18 * fStack_1b8;
      fVar17 = fVar18 * (float)puStack_1b4;
      fVar18 = fVar18 * unaff_EDI;
      fStack_108 = fStack_78;
      fStack_104 = fStack_74;
      local_180 = fStack_70;
    }
    pfVar4 = (float *)param_1[1];
    fVar5 = pfVar4[0xd];
    fVar6 = pfVar4[0xe];
    fVar7 = pfVar4[0xf];
    fVar8 = pfVar4[9];
    fVar9 = pfVar4[10];
    fVar10 = pfVar4[0xb];
    fStack_108 = fStack_108 + fStack_1b8;
    fStack_104 = fStack_104 + fVar17;
    fVar18 = local_180 + fVar18;
    fVar17 = pfVar4[5];
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[7];
    fVar13 = pfVar4[1];
    fVar14 = pfVar4[2];
    fVar15 = pfVar4[3];
    *param_4 = *pfVar4 * fStack_108 + pfVar4[4] * fStack_104 + pfVar4[8] * fVar18 + pfVar4[0xc];
    param_4[1] = fVar13 * fStack_108 + fVar17 * fStack_104 + fVar8 * fVar18 + fVar5;
    param_4[2] = fVar14 * fStack_108 + fVar11 * fStack_104 + fVar9 * fVar18 + fVar6;
    param_4[3] = fVar15 * fStack_108 + fVar12 * fStack_104 + fVar10 * fVar18 + fVar7;
    uVar16 = 0;
  }
  return uVar16;
}



void FUN_0093d670(int *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_30 [7];
  float fStack_14;
  
  puVar3 = (undefined4 *)param_1[0x10];
  fVar16 = (float)puVar3[2];
  FUN_008dd340(*param_1 + 0x40,*puVar3,param_2 * fVar16,param_3);
  FUN_008dd340(param_1[1] + 0x40,*puVar3,param_2 * fVar16,param_3 + 0x10);
  pfVar1 = param_3 + 0x20;
  FUN_008b1ff0(param_3,param_3 + 0x10);
  FUN_0088fe00(pfVar1,param_1 + 8);
  FUN_0088fcc0(pfVar1,param_1 + 0xc);
  param_3[0x33] = -(float)param_1[5];
  fVar16 = param_3[8];
  fVar17 = param_3[9];
  fVar18 = param_3[10];
  fVar19 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = param_3[4];
  fVar8 = param_3[5];
  fVar9 = param_3[6];
  iVar4 = *param_1;
  pfVar13 = (float *)(param_1 + 0x18);
  iVar14 = (int)local_30 - (int)pfVar13;
  iVar15 = 2;
  do {
    fVar10 = *pfVar13;
    fVar11 = pfVar13[1];
    fVar12 = pfVar13[2];
    pfVar2 = (float *)(iVar14 + (int)pfVar13);
    *pfVar2 = fVar19 * fVar10 + fVar5 * fVar11 + fVar6 * fVar12;
    pfVar2[1] = fVar7 * fVar10 + fVar8 * fVar11 + fVar9 * fVar12;
    pfVar2[2] = fVar16 * fVar10 + fVar17 * fVar11 + fVar18 * fVar12;
    pfVar2[3] = fVar16 * fVar10 + fVar17 * fVar11 + fVar18 * fVar12;
    pfVar13 = pfVar13 + 4;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  param_3[0x3c] = local_30[4] - local_30[0];
  param_3[0x3d] = local_30[5] - local_30[1];
  param_3[0x3e] = local_30[6] - local_30[2];
  param_3[0x3f] = fStack_14 - local_30[3];
  FUN_0088fcc0(pfVar1,param_1[1] + 0x80);
  fVar16 = param_3[0x40] - *(float *)(iVar4 + 0x80);
  fVar17 = param_3[0x41] - *(float *)(iVar4 + 0x84);
  fVar18 = param_3[0x42] - *(float *)(iVar4 + 0x88);
  fVar19 = param_3[0x43] - *(float *)(iVar4 + 0x8c);
  FUN_0088fd90(param_3,param_1 + 0x14);
  param_3[0x38] = param_3[0x38] - (fVar17 * local_30[2] - fVar18 * local_30[1]);
  param_3[0x39] = param_3[0x39] - (fVar18 * local_30[0] - fVar16 * local_30[2]);
  param_3[0x3a] = param_3[0x3a] - (fVar16 * local_30[1] - fVar17 * local_30[0]);
  param_3[0x3b] = param_3[0x3b] - (fVar19 * local_30[3] - fVar19 * local_30[3]);
  return;
}



float10 FUN_0093d820(float *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_EAX;
  float *in_ECX;
  int in_EDX;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar8 = (param_4 - *(float *)(in_EAX + 0x4c)) * *(float *)(in_EAX + 0x5c);
  fVar6 = *param_1 - ((1.0 - fVar8) * *(float *)(in_EAX + 0x40) + fVar8 * *(float *)(in_EAX + 0x50))
  ;
  fVar7 = param_1[1] -
          ((1.0 - fVar8) * *(float *)(in_EAX + 0x44) + fVar8 * *(float *)(in_EAX + 0x54));
  fVar8 = param_1[2] -
          ((1.0 - fVar8) * *(float *)(in_EAX + 0x48) + fVar8 * *(float *)(in_EAX + 0x58));
  fVar8 = (*in_ECX * fVar7 - in_ECX[1] * fVar6) * fVar3 +
          (in_ECX[2] * fVar6 - *in_ECX * fVar8) * fVar2 +
          (in_ECX[1] * fVar8 - in_ECX[2] * fVar7) * fVar1;
  if (fVar8 < 0.0 == (fVar8 == 0.0)) {
    fVar4 = (float10)(float)0x3f555555;
  }
  else {
    fVar4 = (float10)1.2;
  }
  fVar4 = (float10)fVar8 * fVar4 +
          (float10)(-param_3[2] * fVar3 + -param_3[1] * fVar2 + -*param_3 * fVar1);
  fVar8 = (param_4 - *(float *)(in_EDX + 0x4c)) * *(float *)(in_EDX + 0x5c);
  fVar6 = *param_1 - ((1.0 - fVar8) * *(float *)(in_EDX + 0x40) + fVar8 * *(float *)(in_EDX + 0x50))
  ;
  fVar7 = param_1[1] -
          ((1.0 - fVar8) * *(float *)(in_EDX + 0x44) + fVar8 * *(float *)(in_EDX + 0x54));
  fVar8 = param_1[2] -
          ((1.0 - fVar8) * *(float *)(in_EDX + 0x48) + fVar8 * *(float *)(in_EDX + 0x58));
  fVar8 = (in_ECX[4] * fVar7 - in_ECX[5] * fVar6) * fVar3 +
          (in_ECX[6] * fVar6 - in_ECX[4] * fVar8) * fVar2 +
          (in_ECX[5] * fVar8 - in_ECX[6] * fVar7) * fVar1;
  fVar5 = (float10)fVar8;
  if (0.0 <= fVar8) {
    return fVar4 - fVar5 * (float10)1.2;
  }
  return fVar4 - fVar5 * (float10)(float)0x3f555555;
}



float10 FUN_0093d9d0(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5,
                    float param_6,float param_7,undefined4 param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float local_12c;
  undefined1 local_120 [192];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  
  fVar1 = param_2[4];
  local_12c = param_4;
  iVar4 = 0;
  do {
    if ((param_6 < *param_2 != (param_6 == *param_2)) || (-(fVar1 * 0.25) < param_7 - param_6))
    break;
    fVar5 = (*param_2 - param_6) / (param_7 - param_6);
    if (0.1 < fVar5) {
      if (0.9 <= fVar5) {
        fVar5 = 0.9;
      }
    }
    else {
      fVar5 = 0.1;
    }
    local_12c = fVar5 * param_5 + (1.0 - fVar5) * param_4;
    FUN_0093d670(param_1,local_12c,local_120);
    fVar5 = fStack_5c * (param_3[1] - fStack_4c) + local_60 * (*param_3 - local_50) +
            fStack_58 * (param_3[2] - fStack_48) + fStack_54;
    if (ABS(fVar5 - *param_2) < fVar1 * 0.25) break;
    fVar2 = local_12c;
    fVar3 = fVar5;
    if (fVar5 < *param_2) {
      fVar2 = param_4;
      param_5 = local_12c;
      fVar3 = param_6;
      param_7 = fVar5;
    }
    param_6 = fVar3;
    param_4 = fVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  if (local_12c < *param_9) {
    *param_9 = local_12c;
  }
  return (float10)local_12c;
}



void FUN_0093db40(int param_1,float *param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float10 fVar6;
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
  float local_168;
  float local_15c;
  float local_154;
  int local_14c;
  float *local_148;
  float local_144;
  undefined1 local_120 [192];
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_168 = *(float *)(param_1 + 0x80);
  local_15c = 1.0;
  local_144 = local_168;
  do {
    FUN_0093d670(param_1,local_168,local_120);
    fVar2 = local_15c - local_168;
    pfVar4 = *(float **)(param_1 + 8);
    local_14c = *(int *)(param_1 + 0xc);
    fVar1 = *(float *)(param_1 + 0x44);
    local_154 = local_15c;
    pfVar5 = pfVar4;
    fVar10 = local_30;
    fVar11 = fStack_2c;
    fVar12 = fStack_28;
    fVar13 = local_60;
    fVar14 = fStack_5c;
    fVar15 = fStack_58;
    fVar16 = fStack_54;
    local_148 = pfVar4;
    if (-1 < local_14c + -1) {
      do {
        fVar17 = fVar14 * (pfVar5[1] - fStack_4c) + fVar13 * (*pfVar5 - local_50) +
                 fVar15 * (pfVar5[2] - fStack_48) + fVar16;
        fVar3 = local_154;
        if ((fVar17 <= fVar2 * fVar1 + *param_2) &&
           (fVar7 = *pfVar5 - local_20, fVar8 = pfVar5[1] - fStack_1c, fVar9 = pfVar5[2] - fStack_18
           , fVar7 = ((fVar7 * fVar11 - fVar8 * fVar10) - fStack_38) * fVar15 +
                     ((fVar9 * fVar10 - fVar7 * fVar12) - fStack_3c) * fVar14 +
                     ((fVar8 * fVar12 - fVar9 * fVar11) - local_40) * fVar13,
           fVar7 * fVar2 + (fVar17 - *param_2) <= fVar2 * *(float *)(param_1 + 0x18) * fVar2 * 0.5))
        {
          if (*param_2 <= fVar17) {
            fVar14 = pfVar4[1];
            fVar15 = pfVar4[2];
            fVar16 = pfVar4[3];
            fVar10 = *pfVar5;
            fVar11 = pfVar5[1];
            fVar12 = pfVar5[2];
            fVar13 = pfVar5[3];
            *pfVar5 = *pfVar4;
            pfVar5[1] = fVar14;
            pfVar5[2] = fVar15;
            pfVar5[3] = fVar16;
            *pfVar4 = fVar10;
            pfVar4[1] = fVar11;
            pfVar4[2] = fVar12;
            pfVar4[3] = fVar13;
            pfVar4[3] = fVar17;
            pfVar4 = pfVar4 + 4;
            fVar17 = (fVar17 - param_2[1]) * *(float *)(param_1 + 0x1c);
            fVar17 = fVar17 + fVar17;
            fVar10 = local_30;
            fVar11 = fStack_2c;
            fVar12 = fStack_28;
            fVar13 = local_60;
            fVar14 = fStack_5c;
            fVar15 = fStack_58;
            fVar16 = fStack_54;
            local_148 = pfVar4;
            if (fVar17 <= fVar2 * fVar2) {
              fVar8 = (*param_2 - param_2[1]) * *(float *)(param_1 + 0x1c);
              fVar17 = SQRT(fVar17);
              fVar3 = fVar7 * *(float *)(param_1 + 0x1c);
              if (fVar7 < 0.0) {
                if (fVar17 < -fVar3) {
                  fVar17 = -fVar3;
                }
              }
              else {
                fVar17 = fVar3 + fVar3 + fVar17;
              }
              if (fVar17 <= fVar2) {
                fVar17 = SQRT(fVar8 + fVar8) + fVar17;
                if (fVar17 <= param_2[2]) {
                  fVar17 = param_2[2];
                }
                fVar3 = fVar17 + local_168;
                if (fVar17 + local_168 <= local_154) goto LAB_0093dddd;
              }
            }
            fVar3 = local_154;
          }
          else {
            fVar6 = (float10)FUN_0093d9d0(param_1,param_2,pfVar5,local_144,local_168,pfVar5[3],
                                          fVar17,fVar7,param_3);
            local_15c = (float)fVar6;
            pfVar4 = local_148;
            fVar10 = local_30;
            fVar11 = fStack_2c;
            fVar12 = fStack_28;
            fVar13 = local_60;
            fVar14 = fStack_5c;
            fVar15 = fStack_58;
            fVar16 = fStack_54;
          }
        }
LAB_0093dddd:
        local_154 = fVar3;
        local_14c = local_14c + -1;
        pfVar5 = pfVar5 + 4;
      } while (local_14c != 0);
    }
    if ((local_15c < local_168) || ((local_168 == local_154 && (local_15c <= local_168)))) {
      return;
    }
    local_144 = local_168;
    local_168 = local_154;
  } while( true );
}



void FUN_0093de40(float *param_1,float param_2,int *param_3,float param_4,int param_5,float *param_6
                 ,int param_7)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  int unaff_ESI;
  int *piVar8;
  int unaff_FS_OFFSET;
  float10 fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  int *piVar19;
  int *piStack_3b4;
  float fStack_3b0;
  int *piStack_3ac;
  float local_3a8;
  int *local_3a4;
  float fStack_3a0;
  int iStack_39c;
  int *piStack_398;
  float *pfStack_394;
  float fStack_390;
  int local_38c;
  int *piStack_388;
  int local_384;
  int *local_380;
  undefined4 uStack_37c;
  float fStack_378;
  float local_374;
  float fStack_370;
  float local_36c;
  float fStack_368;
  float fStack_364;
  float local_360;
  int *local_35c;
  float local_358;
  undefined4 local_354;
  float local_350;
  char cStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_334;
  int iStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  int *piStack_308;
  int iStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  int iStack_2c8;
  float fStack_2c4;
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
  float local_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  int local_190;
  int local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined1 local_170 [104];
  float afStack_108 [16];
  float afStack_c8 [3];
  undefined1 auStack_bc [68];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  iVar18 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar18 + 0x1a4);
    *puVar1 = "LtToi";
    puVar1[3] = "setup";
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar18 + 0x1a4) = puVar1 + 4;
  }
  fVar2 = param_1[2];
  iVar18 = *(int *)((int)fVar2 + 0x28);
  local_350 = param_2 * *(float *)(iVar18 + 0x2c);
  local_360 = param_4;
  local_35c = param_3;
  param_2 = param_2 * *(float *)(iVar18 + 0x1c);
  local_358 = *(float *)(iVar18 + 0x20);
  if (*(float *)(iVar18 + 0x20) < param_2) {
    local_358 = param_2;
  }
  local_358 = local_358 * *(float *)((int)fVar2 + 0x1c);
  local_354 = *(undefined4 *)(iVar18 + 0x34);
  local_38c = *(int *)param_1[1];
  local_384 = ((int *)param_1[1])[2];
  local_3a4 = *(int **)*param_1;
  piVar8 = (int *)((undefined4 *)*param_1)[2];
  local_2e8 = 0.0;
  fStack_284 = *(float *)((int)fVar2 + 0x18) * (float)piVar8[0x17];
  local_374 = (float)((uint)local_374 & 0xffffff00);
  local_334 = (float)((uint)local_334 & 0xffffff00);
  local_3a8 = *(float *)(local_384 + 0x5c) * *(float *)((int)fVar2 + 0x18);
  local_290 = fStack_284 * (float)piVar8[0x24];
  fStack_28c = fStack_284 * (float)piVar8[0x25];
  fStack_288 = fStack_284 * (float)piVar8[0x26];
  fStack_284 = fStack_284 * (float)piVar8[0x27];
  local_190 = (int)*(char *)(param_5 + 8);
  local_18c = (int)*(char *)(param_5 + 9);
  local_188 = (float)(int)*(char *)(param_5 + 10);
  local_184 = (float)(int)*(char *)(param_5 + 0xb);
  local_280 = local_3a8 * *(float *)(local_384 + 0x90);
  fStack_27c = local_3a8 * *(float *)(local_384 + 0x94);
  fStack_278 = local_3a8 * *(float *)(local_384 + 0x98);
  fStack_274 = local_3a8 * *(float *)(local_384 + 0x9c);
  local_36c = 0.0;
  local_180 = (float)((uint)local_180 & 0xffffff00);
  local_17c = 0.0;
  local_380 = piVar8;
  (**(code **)(*local_3a4 + 0x28))(param_5,local_190,local_170);
  (**(code **)(*piStack_398 + 0x28))(param_5 + iStack_19c * 2,uStack_198,auStack_bc);
  fVar2 = fStack_368 + param_4;
  piStack_3b4 = (int *)param_6[3];
  piVar19 = (int *)0x0;
  fStack_3a0 = 0.0;
  iVar18 = 1;
  fVar11 = (float)piVar19;
  piStack_388 = piStack_3b4;
  if ((float)piStack_3b4 < fVar2 == ((float)piStack_3b4 == fVar2)) {
    do {
      fVar13 = 1.0 - fVar11;
      if (fVar13 < 0.0 != (fVar13 == 0.0)) goto LAB_0093ed80;
      fVar16 = *param_6;
      fVar14 = param_6[1];
      fVar17 = param_6[2];
      fVar10 = fStack_2a4 * fVar17 - fStack_2a0 * fVar14;
      fVar12 = fStack_2a0 * fVar16 - fStack_2a8 * fVar17;
      fVar15 = fStack_2a8 * fVar14 - fStack_2a4 * fVar16;
      fStack_32c = SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar10 * fVar10);
      fVar10 = fStack_294 * fVar17 - local_290 * fVar14;
      fVar12 = local_290 * fVar16 - fStack_298 * fVar17;
      fStack_344 = fStack_298 * fVar14 - fStack_294 * fVar16;
      fStack_344 = fStack_344 * fStack_344;
      fStack_348 = SQRT(fStack_344 + fVar12 * fVar12 + fVar10 * fVar10);
      fStack_3b0 = fStack_32c * (float)piVar8[0x28] + fStack_348 * *(float *)(iStack_39c + 0xa0);
      piStack_3ac = (int *)(param_1[0x1a] * fVar17 + param_1[0x19] * fVar14 + param_1[0x18] * fVar16
                           );
      local_3a8 = (float)piStack_3ac + fStack_3b0;
      fStack_340 = fStack_344;
      fStack_33c = fStack_344;
      local_334 = fStack_348;
      if ((local_3a8 < 0.0 != (local_3a8 == 0.0)) ||
         ((float)param_3 < param_6[3] - local_3a8 * fVar13)) goto LAB_0093ed80;
      fVar13 = (param_6[3] - (float)param_3) / local_3a8;
      if ((0.2 <= fVar13) ||
         (((cStack_34c != '\0' || ((char)local_38c == '\0')) ||
          (fStack_3b0 <= (float)piStack_3ac * 10.0)))) {
        iVar18 = *(int *)(unaff_FS_OFFSET + 0x2c);
      }
      else {
        fVar16 = fVar13;
        if (fStack_300 == 0.0) {
          piVar8 = *(int **)*param_1;
          local_380 = (int *)((int *)*param_1)[2];
          iStack_330 = ((int *)param_1[1])[2];
          fStack_2f4 = *(float *)(*(int *)param_1[1] + 0xc) + (float)piVar8[3];
          iStack_2c8 = (int)param_1[2] + 0x10;
          piStack_308 = local_380;
          iStack_304 = iStack_330;
          fStack_2b8 = param_1[0x18];
          fStack_2b4 = param_1[0x19];
          fStack_2b0 = param_1[0x1a];
          fStack_2ac = param_1[0x1b];
          (**(code **)(*piVar8 + 0x1c))(&fStack_328);
          piVar19 = *(int **)(*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x19c);
          fStack_2fc = fStack_32c;
          fStack_300 = fStack_32c;
          iVar18 = piVar19[8];
          iVar5 = ((int)fStack_32c + 1) * 0x10;
          uVar7 = iVar18 + iVar5;
          if ((uint)piVar19[0xb] < uVar7) {
            iVar18 = (**(code **)(*piVar19 + 0xc))(iVar5);
            fVar16 = fVar13;
          }
          else {
            piVar19[8] = uVar7;
            fVar16 = fVar13;
          }
          iStack_304 = iVar18;
          (**(code **)(*piVar8 + 0x20))(iVar18);
          fStack_2f0 = fStack_29c * (float)local_380[0x28] * fStack_29c +
                       fStack_28c * *(float *)(iStack_330 + 0xa0) * fStack_28c;
          fStack_2ec = 1.0 / (fStack_2f0 + 1.1920929e-07);
        }
        iVar18 = *(int *)(unaff_FS_OFFSET + 0x2c);
        fStack_2c4 = local_3a8;
        piVar8 = *(int **)(iVar18 + _tls_index * 4);
        if ((uint)piVar8[0x69] < (uint)piVar8[0x6a]) {
          puVar1 = (undefined4 *)piVar8[0x69];
          *puVar1 = "Stplane";
          uVar4 = rdtsc();
          fStack_390 = (float)uVar4;
          puVar1[1] = fStack_390;
          piVar8[0x69] = (int)(puVar1 + 3);
          local_380 = piVar8;
        }
        fStack_3b0 = 1.0;
        fStack_288 = fVar11;
        FUN_0093db40(&piStack_308,&fStack_378,&fStack_3b0);
        fVar13 = fStack_3b0 - fVar11;
        if (fVar13 < fVar16 + fVar16) {
          cStack_34c = '\x01';
          fVar13 = fVar16;
        }
      }
      if (1.0 <= fVar13 + fVar11) goto LAB_0093ed87;
      if (fVar13 < fStack_370) {
        fVar13 = fStack_370;
      }
      piVar19 = (int *)(fVar13 + fVar11);
      if (1.0 <= (float)piVar19) {
        piVar19 = (int *)0x3f800000;
      }
      piStack_388 = (int *)param_6[3];
      iVar18 = *(int *)(iVar18 + _tls_index * 4);
      fStack_278 = *param_6;
      fStack_274 = param_6[1];
      fStack_270 = param_6[2];
      fStack_26c = param_6[3];
      if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
        puVar1 = *(undefined4 **)(iVar18 + 0x1a4);
        *puVar1 = "StsepNormal";
        uVar4 = rdtsc();
        pfStack_394 = (float *)uVar4;
        puVar1[1] = pfStack_394;
        *(undefined4 **)(iVar18 + 0x1a4) = puVar1 + 3;
      }
      fVar13 = param_1[2];
      fStack_3b0 = (float)piVar19 * *(float *)((int)fVar13 + 0x18);
      fStack_3a0 = fVar11;
      FUN_008dd340(piStack_398 + 0x10,*(undefined4 *)((int)fVar13 + 0x10),fStack_3b0,&fStack_1e8);
      FUN_008dd340(iStack_39c + 0x40,*(undefined4 *)((int)fVar13 + 0x10),fStack_3b0,&fStack_268);
      local_384 = local_384 + 1;
      FUN_008b1ff0(&fStack_1e8,&fStack_268);
      FUN_0093c690(unaff_ESI,local_3a4,&fStack_228,&fStack_318);
      *param_6 = fStack_1e8 * fStack_318 + fStack_1d8 * fStack_314 + fStack_1c8 * fStack_310;
      param_6[1] = fStack_1e4 * fStack_318 + fStack_1d4 * fStack_314 + fStack_1c4 * fStack_310;
      param_6[2] = fStack_1e0 * fStack_318 + fStack_1d0 * fStack_314 + fStack_1c0 * fStack_310;
      param_6[3] = fStack_1dc * fStack_318 + fStack_1cc * fStack_314 + fStack_1bc * fStack_310;
      fVar11 = local_188;
      fVar13 = local_184;
      fVar16 = local_180;
      if ((iStack_1a8 != 1) &&
         (fVar11 = fStack_78, fVar13 = fStack_74, fVar16 = fStack_70, iStack_1a4 == 1)) {
        fVar11 = afStack_108[0] + fStack_30c * fStack_318;
        fVar13 = afStack_108[1] + fStack_30c * fStack_314;
        fVar16 = afStack_108[2] + fStack_30c * fStack_310;
      }
      fVar11 = (fVar11 - fStack_30c * fStack_318) - fStack_1f8;
      fVar13 = (fVar13 - fStack_30c * fStack_314) - fStack_1f4;
      fVar16 = (fVar16 - fStack_30c * fStack_310) - fStack_1f0;
      fStack_2d8 = fStack_228 * fVar11 + fStack_224 * fVar13 + fStack_220 * fVar16;
      fStack_2d4 = fStack_218 * fVar11 + fStack_214 * fVar13 + fStack_210 * fVar16;
      fStack_2d0 = fStack_208 * fVar11 + fStack_204 * fVar13 + fStack_200 * fVar16;
      fStack_2cc = fStack_208 * fVar11 + fStack_204 * fVar13 + fStack_200 * fVar16;
      param_6[3] = (fStack_30c - *(float *)(unaff_ESI + 0xc)) - (float)local_3a4[3];
      piStack_3b4 = (int *)param_6[3];
      fVar11 = *param_6;
      fVar13 = param_6[1];
      fVar16 = param_6[2];
      local_2e8 = fStack_268 * fVar11 + fStack_264 * fVar13 + fStack_260 * fVar16;
      fStack_2e4 = fStack_258 * fVar11 + fStack_254 * fVar13 + fStack_250 * fVar16;
      fStack_2e0 = fStack_248 * fVar11 + fStack_244 * fVar13 + fStack_240 * fVar16;
      fStack_2dc = fStack_248 * fVar11 + fStack_244 * fVar13 + fStack_240 * fVar16;
      local_38c = CONCAT31(local_38c._1_3_,1);
      iVar18 = iStack_194;
      piVar8 = piStack_398;
      fVar11 = (float)piVar19;
    } while ((float)piStack_3b4 < fVar2 == ((float)piStack_3b4 == fVar2));
  }
  iVar5 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = "Stfinal";
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
  }
  local_3a4 = piStack_3b4;
  piStack_3ac = piStack_388;
  local_3a8 = fStack_3a0;
  fStack_390 = *(float *)(*(int *)*param_1 + 0xc) + *(float *)(*(int *)param_1[1] + 0xc);
  iStack_39c = 0;
  fStack_3a0 = ((float)piStack_3b4 - (float)piStack_388) / ((float)piVar19 - fStack_3a0);
  fVar2 = -fStack_368;
  do {
    fVar11 = (float)local_3a4 - (float)piStack_3ac;
    fVar13 = (float)piVar19;
    if (fVar2 < fVar11) {
      fVar11 = 0.5;
      fVar13 = local_3a8;
    }
    if (fStack_368 <= ABS((float)local_3a4 - param_4)) {
      local_38c = (uint)local_38c._1_3_ << 8;
      fVar11 = (param_4 - (float)piStack_3ac) / fVar11;
      if (0.1 < fVar11) {
        if (0.9 <= fVar11) {
          fVar11 = 0.9;
        }
      }
      else {
        fVar11 = 0.1;
      }
      piStack_3b4 = (int *)(fVar11 * fVar13 + (1.0 - fVar11) * local_3a8);
    }
    else {
      local_38c = CONCAT31(local_38c._1_3_,1);
      iVar18 = 0;
      piStack_3b4 = (int *)fVar13;
    }
    fVar11 = param_1[2];
    fVar16 = (float)piStack_3b4 * *(float *)((int)fVar11 + 0x18);
    pfStack_394 = (float *)fVar16;
    FUN_008dd340(*(int *)((int)*param_1 + 8) + 0x40,*(undefined4 *)((int)fVar11 + 0x10),fVar16,
                 &fStack_268);
    FUN_008dd340(*(int *)((int)param_1[1] + 8) + 0x40,*(undefined4 *)((int)fVar11 + 0x10),fVar16,
                 &fStack_1e8);
    FUN_008b1ff0(&fStack_268,&fStack_1e8);
    if (iVar18 == 0) {
      pfVar6 = afStack_c8;
      iVar5 = iStack_1a4;
      do {
        fVar11 = *pfVar6;
        fVar16 = pfVar6[1];
        fVar14 = pfVar6[2];
        pfVar6[-0x10] = fStack_228 * fVar11 + fStack_218 * fVar16 + fStack_208 * fVar14 + fStack_1f8
        ;
        pfVar6[-0xf] = fStack_224 * fVar11 + fStack_214 * fVar16 + fStack_204 * fVar14 + fStack_1f4;
        pfVar6[-0xe] = fStack_220 * fVar11 + fStack_210 * fVar16 + fStack_200 * fVar14 + fStack_1f0;
        pfVar6[-0xd] = fStack_21c * fVar11 + fStack_20c * fVar16 + fStack_1fc * fVar14 + fStack_1ec;
        pfVar6 = pfVar6 + 4;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
      fStack_318 = fStack_268 * fStack_278 + fStack_264 * fStack_274 + fStack_260 * fStack_270;
      fStack_314 = fStack_258 * fStack_278 + fStack_254 * fStack_274 + fStack_250 * fStack_270;
      fStack_310 = fStack_248 * fStack_278 + fStack_244 * fStack_274 + fStack_240 * fStack_270;
      fStack_30c = fStack_248 * fStack_278 + fStack_244 * fStack_274 + fStack_240 * fStack_270;
      FUN_0093ba20(&local_188,afStack_108,iStack_1a8,iStack_1a4,&fStack_318,&fStack_328,&fStack_348)
      ;
    }
    else {
      FUN_0093c690(*(undefined4 *)*param_1,*(undefined4 *)param_1[1],&fStack_228,&fStack_348);
      if (iStack_1a8 == 1) {
        fStack_328 = local_188;
        fStack_324 = local_184;
        fStack_320 = local_180;
        fStack_31c = local_17c;
      }
      else if (iStack_1a4 == 1) {
        fStack_328 = afStack_108[0] + fStack_33c * fStack_348;
        fStack_324 = afStack_108[1] + fStack_33c * fStack_344;
        fStack_320 = afStack_108[2] + fStack_33c * fStack_340;
        fStack_31c = afStack_108[3] + fStack_33c * fStack_33c;
      }
      else {
        fStack_328 = fStack_78;
        fStack_324 = fStack_74;
        fStack_320 = fStack_70;
        fStack_31c = fStack_6c;
      }
    }
    piStack_398 = (int *)(fStack_33c - fStack_390);
    if (((ABS((float)piStack_398 - param_4) < fStack_368) || ((char)local_38c != '\0')) ||
       (local_3a8 == fVar13)) break;
    piVar19 = piStack_3b4;
    piVar8 = piStack_398;
    if (param_4 <= (float)piStack_398) {
      local_3a8 = (float)piStack_3b4;
      piVar19 = (int *)fVar13;
      piStack_3ac = piStack_398;
      piVar8 = local_3a4;
    }
    local_3a4 = piVar8;
    iStack_39c = iStack_39c + 1;
  } while (iStack_39c < 10);
  fVar2 = param_1[2];
  fVar11 = (float)piStack_3b4 * *(float *)((int)fVar2 + 0x18);
  pfStack_394 = (float *)((int)fVar2 + 0x10);
  if (fVar11 <= local_36c) {
    fVar11 = local_36c;
  }
  fVar11 = fVar11 + *pfStack_394;
  if ((fVar11 < *(float *)(param_7 + 0x3034)) &&
     (fVar11 < *(float *)((int)fVar2 + 0x14) - local_36c)) {
    iVar18 = *(int *)*param_1;
    FUN_0088fcc0(&fStack_268,&fStack_328);
    FUN_0088fe00(&fStack_268,&fStack_348);
    fVar13 = -*(float *)(iVar18 + 0xc) - (float)piStack_398;
    fStack_390 = *param_1;
    fVar2 = param_1[1];
    fStack_378 = fStack_278 + fVar13 * fStack_368;
    local_374 = fStack_274 + fVar13 * fStack_364;
    fStack_370 = fStack_270 + fVar13 * local_360;
    local_36c = fStack_26c + fVar13 * (float)local_35c;
    local_35c = piStack_398;
    iVar18 = *(int *)((int)fStack_390 + 8);
    iVar5 = *(int *)((int)fVar2 + 8);
    fVar13 = (fVar11 - *(float *)(iVar18 + 0x4c)) * *(float *)(iVar18 + 0x5c);
    fVar16 = (fVar11 - *(float *)(iVar5 + 0x4c)) * *(float *)(iVar5 + 0x5c);
    fVar17 = fStack_378 -
             ((1.0 - fVar13) * *(float *)(iVar18 + 0x40) + fVar13 * *(float *)(iVar18 + 0x50));
    fVar10 = local_374 -
             ((1.0 - fVar13) * *(float *)(iVar18 + 0x44) + fVar13 * *(float *)(iVar18 + 0x54));
    fVar12 = fStack_370 -
             ((1.0 - fVar13) * *(float *)(iVar18 + 0x48) + fVar13 * *(float *)(iVar18 + 0x58));
    fVar13 = fStack_378 -
             ((1.0 - fVar16) * *(float *)(iVar5 + 0x40) + fVar16 * *(float *)(iVar5 + 0x50));
    fVar14 = local_374 -
             ((1.0 - fVar16) * *(float *)(iVar5 + 0x44) + fVar16 * *(float *)(iVar5 + 0x54));
    fVar16 = fStack_370 -
             ((1.0 - fVar16) * *(float *)(iVar5 + 0x48) + fVar16 * *(float *)(iVar5 + 0x58));
    piStack_3ac = (int *)(((-param_1[0x1a] + (fStack_2a8 * fVar10 - fStack_2a4 * fVar17)) -
                          (fStack_298 * fVar14 - fStack_294 * fVar13)) * local_360 +
                         ((-param_1[0x19] + (fStack_2a0 * fVar17 - fStack_2a8 * fVar12)) -
                         (local_290 * fVar13 - fStack_298 * fVar16)) * fStack_364 +
                         ((-param_1[0x18] + (fStack_2a4 * fVar12 - fStack_2a0 * fVar10)) -
                         (fStack_294 * fVar16 - local_290 * fVar14)) * fStack_368);
    fVar9 = (float10)(float)piStack_3ac;
    if (fStack_3a0 < (float)piStack_3ac) {
      if (fStack_3a0 <= (float)piStack_3ac * 1.2) {
        fVar9 = (float10)FUN_0093d820(&fStack_378,&fStack_368,param_1 + 0x18,fVar11);
        if ((float10)0.0 < fVar9) {
          fVar9 = (float10)0.0;
        }
      }
      else {
        fVar9 = (float10)fStack_3a0;
      }
    }
    fVar13 = pfStack_394[3];
    iVar18 = (**(code **)(*(int *)param_1[3] + 0x1c))
                       (fStack_390,fVar2,param_1[2],&fStack_378,fVar11,
                        (float)(fVar9 * (float10)fVar13),&local_380);
    if (iVar18 == 0) {
      *(float *)(param_7 + 0x3030) = (float)(fVar9 * (float10)fVar13);
      *(float *)(param_7 + 0x10) = fStack_378;
      *(float *)(param_7 + 0x14) = local_374;
      *(float *)(param_7 + 0x18) = fStack_370;
      *(float *)(param_7 + 0x1c) = local_36c;
      *(float *)(param_7 + 0x20) = fStack_368;
      *(float *)(param_7 + 0x24) = fStack_364;
      *(float *)(param_7 + 0x28) = local_360;
      *(int **)(param_7 + 0x2c) = local_35c;
      *(float *)(param_7 + 0x3034) = fVar11;
      *(int **)(param_7 + 0x3038) = local_380;
      *(undefined4 *)(param_7 + 0x303c) = uStack_37c;
    }
  }
LAB_0093ed80:
  iVar18 = *(int *)(unaff_FS_OFFSET + 0x2c);
LAB_0093ed87:
  iVar5 = _tls_index;
  if (fStack_300 != 0.0) {
    piVar8 = *(int **)(*(int *)(iVar18 + _tls_index * 4) + 0x19c);
    piVar8[8] = (int)fStack_300;
    if (fStack_300 == (float)piVar8[10]) {
      (**(code **)(*piVar8 + 0x10))(fStack_300);
    }
  }
  iVar3 = *(int *)(iVar18 + iVar5 * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar1 = "MinumIter";
    puVar1[1] = (float)local_384;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar1 + 2;
  }
  if (iStack_194 != 0) {
    FUN_0093b660(param_5);
  }
  iVar18 = *(int *)(iVar18 + iVar5 * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar18 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar1[1] = (int)uVar4;
    *(undefined4 **)(iVar18 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0093ee40(int *param_1,int *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined2 *in_ECX;
  float fStack_80;
  float fStack_7c;
  uint uStack_78;
  uint uStack_74;
  undefined1 auStack_68 [4];
  undefined2 uStack_64;
  float fStack_50;
  float fStack_4c;
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [20];
  float local_30;
  float fStack_2c;
  
  (**(code **)(*param_1 + 0x2c))(&local_30);
  (**(code **)(*param_2 + 0x2c))(auStack_44);
  FUN_0088fcc0(param_3,auStack_48);
  fStack_80 = fStack_50 - local_30;
  fStack_7c = fStack_4c - fStack_2c;
  (**(code **)(*param_1 + 0x24))(&stack0xffffff78,auStack_68);
  *in_ECX = uStack_64;
  FUN_0088fd90(param_3,&stack0xffffff70);
  fStack_80 = -fStack_80;
  fStack_7c = -fStack_7c;
  uStack_78 = uStack_78 ^ 0x80000000;
  uStack_74 = uStack_74 ^ 0x80000000;
  (**(code **)(*param_2 + 0x24))(&fStack_80,&local_30);
  in_ECX[1] = fStack_2c._0_2_;
  in_ECX[2] = 0xffff;
  in_ECX[3] = 0xffff;
  *(undefined1 *)(in_ECX + 4) = 1;
  *(undefined1 *)((int)in_ECX + 9) = 1;
  uVar1 = (**(code **)(*param_1 + 0x30))();
  *(undefined1 *)(in_ECX + 5) = uVar1;
  uVar1 = (**(code **)(*param_2 + 0x30))();
  *(undefined1 *)((int)in_ECX + 0xb) = uVar1;
  return;
}



void FUN_0093ef30(int *param_1,int param_2,float *param_3)

{
  float *pfVar1;
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
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 uVar21;
  float *pfVar22;
  undefined2 *in_ECX;
  int iVar23;
  int iVar24;
  undefined4 extraout_EDX;
  uint uVar25;
  float fVar26;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  undefined1 auStack_54 [4];
  undefined2 uStack_50;
  float fStack_44;
  float local_40 [7];
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0x10;
  in_ECX[3] = 0x20;
  fVar26 = *param_3;
  fVar3 = param_3[1];
  fVar4 = param_3[2];
  fVar5 = param_3[3];
  fVar6 = param_3[4];
  fVar7 = param_3[5];
  fVar8 = param_3[6];
  fVar9 = param_3[7];
  fVar10 = param_3[8];
  fVar11 = param_3[9];
  fVar12 = param_3[10];
  fVar13 = param_3[0xb];
  fVar14 = param_3[0xc];
  fVar15 = param_3[0xd];
  fVar16 = param_3[0xe];
  fVar17 = param_3[0xf];
  pfVar22 = (float *)(param_2 + 0x10);
  iVar23 = (int)local_40 - (int)pfVar22;
  iVar24 = 3;
  do {
    fVar18 = *pfVar22;
    fVar19 = pfVar22[1];
    fVar20 = pfVar22[2];
    pfVar1 = (float *)(iVar23 + (int)pfVar22);
    *pfVar1 = fVar26 * fVar18 + fVar6 * fVar19 + fVar10 * fVar20 + fVar14;
    pfVar1[1] = fVar3 * fVar18 + fVar7 * fVar19 + fVar11 * fVar20 + fVar15;
    pfVar1[2] = fVar4 * fVar18 + fVar8 * fVar19 + fVar12 * fVar20 + fVar16;
    pfVar1[3] = fVar5 * fVar18 + fVar9 * fVar19 + fVar13 * fVar20 + fVar17;
    pfVar22 = pfVar22 + 4;
    iVar24 = iVar24 + -1;
  } while (iVar24 != 0);
  local_70 = (local_40[5] - local_40[1]) * (fStack_18 - local_40[6]) -
             (local_40[6] - local_40[2]) * (fStack_1c - local_40[5]);
  fStack_6c = (local_40[6] - local_40[2]) * (local_20 - local_40[4]) -
              (local_40[4] - local_40[0]) * (fStack_18 - local_40[6]);
  fStack_68 = (local_40[4] - local_40[0]) * (fStack_1c - local_40[5]) -
              (local_40[5] - local_40[1]) * (local_20 - local_40[4]);
  fStack_64 = (fStack_24 - local_40[3]) * (fStack_14 - fStack_24) -
              (fStack_24 - local_40[3]) * (fStack_14 - fStack_24);
  (**(code **)(*param_1 + 0x2c))(&local_60);
  fVar26 = (fStack_5c - local_40[1]) * fStack_6c;
  auVar2._4_4_ = fVar26;
  auVar2._0_4_ = fVar26 + (local_60 - local_40[0]) * local_70 + (fStack_64 - fStack_44) * fStack_74;
  auVar2._8_4_ = fVar26;
  auVar2._12_4_ = fVar26;
  uVar25 = movmskps(extraout_EDX,auVar2);
  if ((uVar25 & 1) != 0) {
    fStack_74 = -fStack_74;
    local_70 = -local_70;
    fStack_6c = -fStack_6c;
    fStack_68 = -fStack_68;
  }
  (**(code **)(*param_1 + 0x24))(&fStack_74,auStack_54);
  *in_ECX = uStack_50;
  *(undefined1 *)(in_ECX + 4) = 1;
  *(undefined1 *)((int)in_ECX + 9) = 3;
  uVar21 = (**(code **)(*param_1 + 0x30))();
  *(undefined1 *)(in_ECX + 5) = uVar21;
  *(undefined1 *)((int)in_ECX + 0xb) = 3;
  return;
}



void FUN_0093f080(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0xbf800000;
  return;
}



void FUN_0093f0a0(float param_1,undefined4 param_2)

{
  int in_ECX;
  
  if (*(float *)(in_ECX + 0x18) == param_1) {
    *(undefined4 *)(in_ECX + 0x18) = param_2;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  return;
}



void FUN_0093f0e0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *in_ECX;
  undefined1 local_50 [76];
  
  in_ECX[2] = param_3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa1e18;
  uVar1 = *param_1;
  piVar2 = (int *)*param_2;
  FUN_008b1ff0(param_1[2],param_2[2]);
  iVar6 = (**(code **)(*piVar2 + 8))();
  if (iVar6 == 6) {
    FUN_0093ef30(uVar1,piVar2,local_50);
  }
  else {
    FUN_0093ee40(uVar1,piVar2,local_50);
  }
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xb] = 0xbf800000;
  in_ECX[6] = 0xbf800000;
  puVar5 = (undefined4 *)param_1[3];
  while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
    param_1 = puVar4;
    puVar5 = (undefined4 *)puVar4[3];
  }
  puVar5 = (undefined4 *)param_2[3];
  while (puVar4 = puVar5, puVar4 != (undefined4 *)0x0) {
    param_2 = puVar4;
    puVar5 = (undefined4 *)puVar4[3];
  }
  fVar3 = (float)param_2[8];
  if ((float)param_1[8] < (float)param_2[8]) {
    fVar3 = (float)param_1[8];
  }
  in_ECX[7] = fVar3;
  return;
}



void FUN_0093f1c0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,float *param_5)

{
  int iVar1;
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
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 local_50 [76];
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  FUN_008b1ff0(param_1[2],param_2[2]);
  FUN_0093c690(iVar2,iVar1,local_50,&local_60);
  pfVar3 = (float *)param_1[2];
  fVar4 = pfVar3[9];
  fVar5 = pfVar3[10];
  fVar6 = pfVar3[0xb];
  fVar7 = pfVar3[5];
  fVar8 = pfVar3[6];
  fVar9 = pfVar3[7];
  fVar10 = pfVar3[1];
  fVar11 = pfVar3[2];
  fVar12 = pfVar3[3];
  *param_5 = *pfVar3 * local_60 + pfVar3[4] * fStack_5c + pfVar3[8] * fStack_58;
  param_5[1] = fVar10 * local_60 + fVar7 * fStack_5c + fVar4 * fStack_58;
  param_5[2] = fVar11 * local_60 + fVar8 * fStack_5c + fVar5 * fStack_58;
  param_5[3] = fVar12 * local_60 + fVar9 * fStack_5c + fVar6 * fStack_58;
  param_5[3] = (fStack_54 - *(float *)(iVar2 + 0xc)) - *(float *)(iVar1 + 0xc);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0093f250(float *param_1,int *param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float unaff_EBX;
  float unaff_EDI;
  int unaff_FS_OFFSET;
  int *piStack_288;
  float *pfStack_284;
  float local_274;
  float local_270 [2];
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  float fStack_1dc;
  float *pfStack_1d8;
  int *piStack_1d4;
  undefined1 auStack_1c8 [28];
  int iStack_1ac;
  undefined4 uStack_1a8;
  int *piStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined1 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_180 [180];
  undefined1 auStack_cc [160];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = "TtGsk";
    uVar5 = rdtsc();
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  local_274 = *param_1;
  pfStack_284 = (float *)param_2[2];
  piStack_288 = (int *)param_1[2];
  piVar2 = (int *)*param_2;
  FUN_008b1ff0();
  pfStack_284 = (float *)0x93f2d3;
  iVar8 = (**(code **)(*piVar2 + 8))();
  piStack_288 = piVar2;
  if (iVar8 == 6) {
    pfStack_284 = local_270;
    FUN_0093ef30(local_274);
  }
  else {
    pfStack_284 = local_270;
    FUN_0093ee40(local_274);
  }
  iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = "StGsk";
    uVar5 = rdtsc();
    local_274 = (float)uVar5;
    puVar1[1] = local_274;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  piVar2 = (int *)*param_1;
  piVar3 = (int *)*param_2;
  piStack_288 = (int *)(int)(char)auStack_20._8_4_;
  iStack_19c = (int)SUB41(auStack_20._8_4_,1);
  iStack_198 = (int)SUB41(auStack_20._8_4_,2);
  iStack_194 = (int)SUB41(auStack_20._8_4_,3);
  pfStack_284 = (float *)auStack_180;
  uStack_190 = 0;
  uStack_18c = 0;
  piStack_1a0 = piStack_288;
  (**(code **)(*piVar2 + 0x28))(auStack_20);
  (**(code **)(*piVar3 + 0x28))(auStack_2c + iStack_1ac * 2,uStack_1a8,auStack_cc);
  iVar8 = FUN_0093c690(piVar2,piVar3,&piStack_288,auStack_1c8);
  if (iVar8 == 0) {
    FUN_0093b740(auStack_1c8,&fStack_248);
    FUN_0088fe00(param_1[2],&fStack_248);
    fStack_228 = (fStack_228 - (float)piVar2[3]) - (float)piVar3[3];
    if (fStack_228 < *(float *)(param_3 + 8)) {
      fVar7 = -(float)piVar2[3];
      pfVar4 = (float *)param_2[2];
      fVar6 = -fStack_228;
      fStack_238 = fStack_238 + fVar7 * fStack_248;
      fStack_234 = fStack_234 + fVar7 * fStack_244;
      fStack_230 = fStack_230 + fVar7 * fStack_240;
      fStack_22c = fStack_22c + fVar7 * fStack_23c;
      fStack_258 = (fStack_238 + fVar6 * fStack_248) - fStack_258;
      fStack_254 = (fStack_234 + fVar6 * fStack_244) - fStack_254;
      fStack_250 = (fStack_230 + fVar6 * fStack_240) - fStack_250;
      fStack_218 = (float)piStack_288 * fStack_258 + (float)pfStack_284 * fStack_254 +
                   unaff_EDI * fStack_250;
      fStack_214 = unaff_EBX * fStack_258 + local_274 * fStack_254 + local_270[0] * fStack_250;
      fStack_210 = fStack_268 * fStack_258 + fStack_264 * fStack_254 + fStack_260 * fStack_250;
      fStack_20c = fStack_268 * fStack_258 + fStack_264 * fStack_254 + fStack_260 * fStack_250;
      pfStack_1d8 = param_1;
      piStack_1d4 = param_2;
      fStack_1f8 = *pfVar4 * fStack_218 + pfVar4[4] * fStack_214 +
                   pfVar4[8] * fStack_210 + pfVar4[0xc];
      fStack_1f4 = pfVar4[1] * fStack_218 + pfVar4[5] * fStack_214 +
                   pfVar4[9] * fStack_210 + pfVar4[0xd];
      fStack_1f0 = pfVar4[2] * fStack_218 + pfVar4[6] * fStack_214 +
                   pfVar4[10] * fStack_210 + pfVar4[0xe];
      fStack_1ec = pfVar4[3] * fStack_218 + pfVar4[7] * fStack_214 +
                   pfVar4[0xb] * fStack_210 + pfVar4[0xf];
      uStack_1e8 = uStack_208;
      uStack_1e4 = uStack_204;
      uStack_1e0 = uStack_200;
      fStack_1dc = fStack_228;
      (**(code **)(*param_4 + 4))(&fStack_1f8);
    }
  }
  iVar8 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar8 + 0x1a4) < *(uint *)(iVar8 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar8 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar8 + 0x1a4) = puVar1 + 3;
  }
  return;
}



void FUN_0093f5e0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float *pfVar4;
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
  int iVar16;
  int iVar17;
  int in_ECX;
  float unaff_EBX;
  int unaff_ESI;
  int iVar18;
  int unaff_FS_OFFSET;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  int iStack_1dc;
  undefined4 uStack_1d8;
  int iStack_1d4;
  undefined1 local_1b0 [180];
  undefined1 auStack_fc [148];
  undefined1 auStack_68 [100];
  
  iVar16 = _tls_index;
  iVar17 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar18 = *(int *)(iVar17 + _tls_index * 4);
  if (*(uint *)(iVar18 + 0x1a4) < *(uint *)(iVar18 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar18 + 0x1a4);
    *puVar1 = "LtGsk";
    puVar1[3] = &DAT_00aa1e60;
    uVar5 = rdtsc();
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar18 + 0x1a4) = puVar1 + 4;
  }
  iVar17 = *(int *)(iVar17 + iVar16 * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar1 = "StSepNormal";
    uVar5 = rdtsc();
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar1 + 3;
  }
  piVar2 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  FUN_008b1ff0(param_1[2],param_2[2]);
  iVar18 = in_ECX + 0xc;
  (**(code **)(*piVar3 + 0x28))(iVar18,(int)*(char *)(in_ECX + 0x14),local_1b0);
  (**(code **)(*piVar2 + 0x28))(iVar18 + iStack_1dc * 2,uStack_1d8,auStack_fc);
  iVar17 = FUN_0093c690(piVar3,piVar2,auStack_68,&stack0xfffffe08);
  if (iStack_1d4 != 0) {
    FUN_0093b660(iVar18);
  }
  if (iVar17 == 0) {
    pfVar4 = (float *)param_1[2];
    fVar7 = pfVar4[9];
    fVar8 = pfVar4[10];
    fVar9 = pfVar4[0xb];
    fVar10 = pfVar4[5];
    fVar11 = pfVar4[6];
    fVar12 = pfVar4[7];
    fVar6 = (fStack_1ec - (float)piVar3[3]) - (float)piVar2[3];
    fVar13 = pfVar4[1];
    fVar14 = pfVar4[2];
    fVar15 = pfVar4[3];
    *(float *)(unaff_ESI + 0x20) =
         *pfVar4 * unaff_EBX + pfVar4[4] * fStack_1f4 + pfVar4[8] * fStack_1f0;
    *(float *)(unaff_ESI + 0x24) = fVar13 * unaff_EBX + fVar10 * fStack_1f4 + fVar7 * fStack_1f0;
    *(float *)(unaff_ESI + 0x28) = fVar14 * unaff_EBX + fVar11 * fStack_1f4 + fVar8 * fStack_1f0;
    *(float *)(unaff_ESI + 0x2c) = fVar15 * unaff_EBX + fVar12 * fStack_1f4 + fVar9 * fStack_1f0;
    *(float *)(unaff_ESI + 0x2c) = fVar6;
    if (fVar6 < 0.0) {
      (**(code **)(*param_4 + 4))(param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x20) = 0;
    *(undefined4 *)(unaff_ESI + 0x24) = 0;
    *(undefined4 *)(unaff_ESI + 0x28) = 0;
    *(undefined4 *)(unaff_ESI + 0x2c) = 0;
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar17 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar17 + 0x1a4) < *(uint *)(iVar17 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar17 + 0x1a4);
    *puVar1 = &DAT_00a6a630;
    uVar5 = rdtsc();
    puVar1[1] = (int)uVar5;
    *(undefined4 **)(iVar17 + 0x1a4) = puVar1 + 3;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0093f800(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  undefined8 uVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  float fStack_1fc;
  undefined4 local_1f8 [6];
  undefined1 local_1e0 [52];
  int iStack_1ac;
  undefined4 uStack_1a8;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  undefined1 uStack_190;
  undefined4 uStack_18c;
  undefined1 auStack_180 [180];
  undefined1 auStack_cc [160];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar6 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = "TtGsk";
    uVar5 = rdtsc();
    local_1f8[0] = (undefined4)uVar5;
    puVar2[1] = local_1f8[0];
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  piVar3 = (int *)*param_2;
  piVar4 = (int *)*param_1;
  FUN_008b1ff0(param_1[2],param_2[2]);
  iVar6 = (**(code **)(*piVar3 + 8))();
  if (iVar6 == 6) {
    FUN_0093ef30(piVar4,piVar3,local_1e0);
  }
  else {
    FUN_0093ee40(piVar4,piVar3,local_1e0);
  }
  iStack_1a0 = (int)(char)auStack_20._8_4_;
  iStack_19c = (int)SUB41(auStack_20._8_4_,1);
  iStack_198 = (int)SUB41(auStack_20._8_4_,2);
  iStack_194 = (int)SUB41(auStack_20._8_4_,3);
  uStack_190 = 1;
  uStack_18c = 0;
  (**(code **)(*piVar4 + 0x28))(auStack_20,iStack_1a0,auStack_180);
  (**(code **)(*piVar3 + 0x28))(auStack_2c + iStack_1ac * 2,uStack_1a8,auStack_cc);
  iVar6 = FUN_0093c690(piVar4,piVar3,local_1f8,&stack0xfffffdf8);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  if ((iVar6 != 0) || ((fStack_1fc - (float)piVar4[3]) - (float)piVar3[3] < 0.0)) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  return;
}



void FUN_0093f9c0(undefined4 *param_1,undefined4 *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  undefined1 *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
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
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined1 local_50 [76];
  
  iVar4 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar5 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar2 = "TtGsk";
    uVar3 = rdtsc();
    local_a4 = (undefined4)uVar3;
    puVar2[1] = local_a4;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar2 + 3;
  }
  FUN_008b1ff0(param_1[2],param_2[2]);
  local_b0 = *param_1;
  local_ac = *param_2;
  local_b4 = param_1[2];
  local_b8 = local_50;
  local_a8 = *(undefined4 *)(param_3 + 8);
  iVar5 = FUN_0093d4a0(&local_b8,in_ECX + 0xc,&local_90,&local_a0);
  if (iVar5 == 0) {
    local_5c = param_2;
    local_80 = local_a0;
    uStack_7c = uStack_9c;
    uStack_78 = uStack_98;
    uStack_74 = uStack_94;
    local_60 = param_1;
    local_70 = local_90;
    uStack_6c = uStack_8c;
    uStack_68 = uStack_88;
    uStack_64 = uStack_84;
    (**(code **)(*param_4 + 4))(&local_80);
  }
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



void FUN_0093fb40(undefined4 *param_1)

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



void FUN_0093fb80(float *param_1,byte *param_2,float *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  float *pfVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  char *pcVar18;
  int iVar19;
  int in_ECX;
  uint uVar20;
  int unaff_EBX;
  byte *pbVar21;
  int iVar22;
  uint auStack_440 [60];
  int **ppiStack_350;
  int *piStack_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  int iStack_340;
  undefined1 *puStack_33c;
  undefined1 *puStack_338;
  int iStack_334;
  undefined4 uStack_330;
  float *pfStack_32c;
  byte *pbStack_328;
  float *local_324;
  uint local_310;
  float local_308;
  float local_304;
  int *local_300;
  int local_2fc;
  int local_2f8;
  float local_2f4;
  float local_2f0;
  float local_2ec;
  undefined1 local_2e5;
  undefined4 *local_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  undefined4 uStack_2d4;
  float local_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  float local_2a4;
  float local_2a0;
  float local_28c;
  float local_288;
  float local_284;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float local_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float local_230;
  undefined1 auStack_228 [8];
  float local_220;
  float local_210 [131];
  
  local_2f8 = in_ECX;
LAB_0093fba2:
  uVar20 = (uint)*param_2;
  local_2fc = 999;
  local_324 = param_1;
  switch(uVar20) {
  case 0:
    goto switchD_0093fbbd_caseD_0;
  case 1:
  case 2:
  case 3:
  case 4:
    fStack_2e0 = (float)param_2[1];
    fStack_2dc = (float)param_2[2];
    uStack_2d4 = 0;
    fStack_2d8 = (float)param_2[3];
    fVar3 = (float)(1 << (*param_2 & 0x1f));
    *param_3 = *param_3 - fStack_2e0;
    param_3[1] = param_3[1] - fStack_2dc;
    param_3[2] = param_3[2] - fStack_2d8;
    param_3[3] = param_3[3] - 0.0;
    param_3[4] = param_3[4] - fStack_2e0;
    param_3[5] = param_3[5] - fStack_2dc;
    param_3[6] = param_3[6] - fStack_2d8;
    param_3[7] = param_3[7] - 0.0;
    *param_3 = *param_3 * fVar3;
    param_3[1] = param_3[1] * fVar3;
    param_3[2] = param_3[2] * fVar3;
    param_3[3] = param_3[3] * fVar3;
    param_3[4] = param_3[4] * fVar3;
    param_3[5] = param_3[5] * fVar3;
    param_3[6] = param_3[6] * fVar3;
    param_3[7] = param_3[7] * fVar3;
    local_2d0 = (*param_1 + fStack_2e0) * fVar3;
    fStack_2cc = (param_1[1] + fStack_2dc) * fVar3;
    fStack_2c8 = (param_1[2] + fStack_2d8) * fVar3;
    fStack_2c4 = (param_1[3] + 0.0) * fVar3;
    local_2ac = (float)((int)param_1[9] + uVar20);
    param_2 = param_2 + 4;
    local_2a8 = fVar3 * param_1[10];
    local_2c0 = fVar3 * param_1[4];
    fStack_2bc = fVar3 * param_1[5];
    fStack_2b8 = fVar3 * param_1[6];
    fStack_2b4 = fVar3 * param_1[7];
    local_2b0 = fVar3 * param_1[8];
    local_2a0 = param_1[0xc];
    local_2a4 = param_1[0xb];
    param_1 = &local_2d0;
    goto LAB_0093fba2;
  case 5:
    param_2 = param_2 + param_2[1] + 2;
    goto LAB_0093fba2;
  case 6:
    param_2 = param_2 + (uint)param_2[1] * 0x100 + param_2[2] + 3;
    goto LAB_0093fba2;
  case 7:
    param_2 = param_2 + (uint)CONCAT11(param_2[1],param_2[2]) * 0x100 + param_2[3] + 4;
    goto LAB_0093fba2;
  default:
    pbStack_328 = (byte *)0x200;
    pfStack_32c = local_210;
    local_324 = (float *)0x1;
    uStack_330 = 0x9407e1;
    FUN_008bbfb0();
    local_324 = (float *)0xaa1eac;
    pbStack_328 = (byte *)0x9407f2;
    FUN_008bbdb0();
    local_324 = (float *)0x1c7;
    pbStack_328 = (byte *)0xaa1e74;
    pfStack_32c = local_210;
    uStack_330 = 0x1298fedd;
    iStack_334 = 3;
    puStack_338 = (undefined1 *)0x940816;
    (**(code **)(*DAT_00ba7fb0 + 8))();
    local_324 = (float *)0x940822;
    FUN_008bc000();
    goto LAB_0093fba2;
  case 9:
    bVar5 = param_2[1];
    if (param_1 != &local_2d0) {
      pbStack_328 = (byte *)0x94068a;
      FUN_0093fb40();
      param_1 = &local_2d0;
    }
    local_2a4 = (float)((int)local_2a4 + (uint)bVar5);
    param_2 = param_2 + 2;
    goto LAB_0093fba2;
  case 10:
    bVar5 = param_2[1];
    bVar6 = param_2[2];
    if (param_1 != &local_2d0) {
      pbStack_328 = (byte *)0x9406c7;
      FUN_0093fb40();
      param_1 = &local_2d0;
    }
    local_2a4 = (float)((int)local_2a4 + (uint)CONCAT11(bVar5,bVar6));
    param_2 = param_2 + 3;
    goto LAB_0093fba2;
  case 0xb:
    bVar5 = param_2[1];
    bVar6 = param_2[2];
    bVar7 = param_2[3];
    bVar8 = param_2[4];
    if (param_1 != &local_2d0) {
      pbStack_328 = (byte *)0x940710;
      FUN_0093fb40();
      param_1 = &local_2d0;
    }
    local_2a4 = (float)CONCAT31(CONCAT21(CONCAT11(bVar5,bVar6),bVar7),bVar8);
    param_2 = param_2 + 5;
    goto LAB_0093fba2;
  case 0x10:
  case 0x11:
  case 0x12:
    local_2fc = uVar20 - 0x10;
    local_308 = (float)param_2[2] - param_1[uVar20 - 0xc];
    local_304 = (float)param_2[1] + param_1[uVar20 - 0xc];
    fVar3 = param_3[local_2fc];
    fVar4 = param_3[uVar20 - 0xc];
    break;
  case 0x13:
    local_304 = param_1[6] + param_1[5] + param_1[6] + param_1[5];
    local_308 = (float)((uint)param_2[2] << 1) - local_304;
    local_304 = (float)((uint)param_2[1] << 1) + local_304;
    fVar3 = param_3[2] + param_3[1];
    fVar4 = param_3[6] + param_3[5];
    break;
  case 0x14:
    local_304 = param_1[6] + param_1[5] + param_1[6] + param_1[5];
    local_308 = (float)(int)((uint)param_2[2] * 2 + -0xff) - local_304;
    local_304 = (float)(int)((uint)param_2[1] * 2 + -0xff) + local_304;
    fVar3 = param_3[1] - param_3[2];
    fVar4 = param_3[5] - param_3[6];
    break;
  case 0x15:
    local_304 = param_1[6] + param_1[4] + param_1[6] + param_1[4];
    local_308 = (float)((uint)param_2[2] << 1) - local_304;
    local_304 = (float)((uint)param_2[1] << 1) + local_304;
    fVar3 = param_3[2] + *param_3;
    fVar4 = param_3[6] + param_3[4];
    break;
  case 0x16:
    local_304 = param_1[6] + param_1[4] + param_1[6] + param_1[4];
    local_308 = (float)(int)((uint)param_2[2] * 2 + -0xff) - local_304;
    local_304 = (float)(int)((uint)param_2[1] * 2 + -0xff) + local_304;
    fVar3 = *param_3 - param_3[2];
    fVar4 = param_3[4] - param_3[6];
    break;
  case 0x17:
    local_304 = param_1[5] + param_1[4] + param_1[5] + param_1[4];
    local_308 = (float)((uint)param_2[2] << 1) - local_304;
    local_304 = (float)((uint)param_2[1] << 1) + local_304;
    fVar3 = param_3[1] + *param_3;
    fVar4 = param_3[5] + param_3[4];
    break;
  case 0x18:
    local_304 = param_1[5] + param_1[4] + param_1[5] + param_1[4];
    local_308 = (float)(int)((uint)param_2[2] * 2 + -0xff) - local_304;
    local_304 = (float)(int)((uint)param_2[1] * 2 + -0xff) + local_304;
    fVar3 = *param_3 - param_3[1];
    fVar4 = param_3[4] - param_3[5];
    break;
  case 0x19:
    local_308 = (float)((uint)param_2[2] * 3) - param_1[8];
    local_304 = (float)((uint)param_2[1] * 3) + param_1[8];
    fVar3 = param_3[2] + param_3[1] + *param_3;
    fVar4 = param_3[6] + param_3[5] + param_3[4];
    break;
  case 0x1a:
    local_308 = (float)(int)((param_2[2] - 0x55) * 3) - param_1[8];
    local_304 = (float)(int)((param_2[1] - 0x55) * 3) + param_1[8];
    fVar3 = (param_3[1] + *param_3) - param_3[2];
    fVar4 = (param_3[5] + param_3[4]) - param_3[6];
    break;
  case 0x1b:
    local_308 = (float)(int)((param_2[2] - 0x55) * 3) - param_1[8];
    local_304 = (float)(int)((param_2[1] - 0x55) * 3) + param_1[8];
    fVar3 = (*param_3 - param_3[1]) + param_3[2];
    fVar4 = (param_3[4] - param_3[5]) + param_3[6];
    break;
  case 0x1c:
    local_308 = (float)(int)((param_2[2] - 0xaa) * 3) - param_1[8];
    local_304 = (float)(int)((param_2[1] - 0xaa) * 3) + param_1[8];
    fVar3 = (*param_3 - param_3[1]) - param_3[2];
    fVar4 = (param_3[4] - param_3[5]) - param_3[6];
    break;
  case 0x20:
  case 0x21:
  case 0x22:
    local_310 = (uint)param_2[2];
    local_2fc = uVar20 - 0x20;
    pbVar21 = param_2 + 3;
    local_308 = (float)param_2[1] - param_1[uVar20 - 0x1c];
    local_304 = (float)param_2[1] + 1.0 + param_1[uVar20 - 0x1c];
    fVar3 = param_3[local_2fc];
    fVar4 = param_3[uVar20 - 0x1c];
    local_300 = (int *)0x0;
    goto LAB_0093ff8a;
  case 0x23:
  case 0x24:
  case 0x25:
    local_2fc = uVar20 - 0x23;
    local_308 = (float)param_2[2] - param_1[uVar20 - 0x1f];
    pbVar21 = param_2 + 7;
    local_304 = (float)param_2[1] + param_1[uVar20 - 0x1f];
    fVar3 = param_3[local_2fc];
    fVar4 = param_3[uVar20 - 0x1f];
    local_300 = (int *)(uint)CONCAT11(param_2[3],param_2[4]);
    local_310 = (uint)CONCAT11(param_2[5],param_2[6]);
    goto LAB_0093ff8a;
  case 0x26:
  case 0x27:
  case 0x28:
    pbVar21 = param_2 + 2;
    iVar19 = uVar20 - 0x26;
    local_308 = (float)param_2[1] - param_1[uVar20 - 0x22];
    param_2 = param_2 + 3;
    fVar3 = (float)*pbVar21;
    goto LAB_00940398;
  case 0x29:
  case 0x2a:
  case 0x2b:
    pbVar21 = param_2 + 4;
    iVar19 = uVar20 - 0x29;
    pbVar1 = param_2 + 5;
    pbVar2 = param_2 + 6;
    local_308 = ((float)CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]) *
                 *(float *)(local_2f8 + 0x14) * param_1[10] - param_1[iVar19]) -
                param_1[uVar20 - 0x25];
    param_2 = param_2 + 7;
    fVar3 = (float)CONCAT21(CONCAT11(*pbVar21,*pbVar1),*pbVar2) * *(float *)(local_2f8 + 0x14) *
            param_1[10] - param_1[iVar19];
LAB_00940398:
    fVar3 = fVar3 + param_1[iVar19 + 4];
    local_300 = (int *)param_3[iVar19];
    fVar4 = param_3[iVar19 + 4];
    if (fVar4 <= (float)local_300) {
      if ((float)local_300 < local_308) {
        return;
      }
      if (fVar3 < fVar4) {
        return;
      }
      local_2fc = 1;
    }
    else {
      if (fVar4 < local_308) {
        return;
      }
      if (fVar3 < (float)local_300) {
        return;
      }
      local_2fc = 0;
    }
    fVar11 = (float)local_300 - fVar3;
    local_280 = *param_3;
    fStack_27c = param_3[1];
    fStack_278 = param_3[2];
    fStack_274 = param_3[3];
    local_270 = param_3[4];
    fStack_26c = param_3[5];
    fStack_268 = param_3[6];
    fStack_264 = param_3[7];
    if (fVar11 * (fVar4 - fVar3) < 0.0) {
      local_324 = (float *)(fVar11 / (fVar11 - (fVar4 - fVar3)));
      pbStack_328 = (byte *)0x9404a2;
      FUN_00535aa0();
      param_3[local_2fc * -4 + 4] = (1.0 - local_230) * local_280 + local_230 * local_270;
      param_3[local_2fc * -4 + 5] = (1.0 - local_230) * fStack_27c + local_230 * fStack_26c;
      param_3[local_2fc * -4 + 6] = (1.0 - local_230) * fStack_278 + local_230 * fStack_268;
      param_3[local_2fc * -4 + 7] = (1.0 - local_230) * fStack_274 + local_230 * fStack_264;
    }
    fVar3 = (float)local_300 - local_308;
    if ((fVar4 - local_308) * fVar3 < 0.0) {
      local_324 = (float *)(fVar3 / (fVar3 - (fVar4 - local_308)));
      pbStack_328 = (byte *)0x940520;
      FUN_00535aa0();
      pfVar9 = param_3 + local_2fc * 4;
      *pfVar9 = (1.0 - local_220) * local_280 + local_220 * local_270;
      pfVar9[1] = (1.0 - local_220) * fStack_27c + local_220 * fStack_26c;
      pfVar9[2] = (1.0 - local_220) * fStack_278 + local_220 * fStack_268;
      pfVar9[3] = (1.0 - local_220) * fStack_274 + local_220 * fStack_264;
    }
    goto LAB_0093fba2;
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
    uVar20 = uVar20 - 0x30;
    goto LAB_00940879;
  case 0x50:
    uVar20 = (uint)param_2[1];
    goto LAB_00940879;
  case 0x51:
    uVar20 = (uint)CONCAT11(param_2[1],param_2[2]);
    goto LAB_00940879;
  case 0x52:
    uVar20 = (uint)CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]);
    goto LAB_00940879;
  case 0x53:
    uVar20 = (uint)param_2[4] + (uint)CONCAT11(param_2[1],param_2[2]) * 0x10000 +
             (uint)param_2[3] * 0x100;
LAB_00940879:
    iVar22 = uVar20 + (int)param_1[0xb];
    iVar19 = *(int *)(local_2f8 + 0x2c);
    piVar10 = *(int **)(**(int **)(iVar19 + 0x38) + 0xc);
    iStack_334 = *(int *)(iVar19 + 0x30);
    local_2e4 = *(undefined4 **)(iStack_334 + 4);
    pfStack_32c = *(float **)(iVar19 + 0x38);
    uStack_330 = *(undefined4 *)(iVar19 + 0x34);
    puStack_338 = &local_2e5;
    puStack_33c = (undefined1 *)0x9408ad;
    pbStack_328 = (byte *)piVar10;
    local_324 = (float *)iVar22;
    pcVar18 = (char *)(**(code **)*local_2e4)();
    if (*pcVar18 == '\0') {
      return;
    }
    puStack_33c = auStack_228;
    uStack_344 = 0x9408c2;
    iStack_340 = iVar22;
    local_300 = (int *)(**(code **)(*piVar10 + 0x28))();
    local_2f4 = *(float *)(*(int *)(unaff_EBX + 0x2c) + 0x38);
    local_2f8 = *(undefined4 *)((int)local_2f4 + 8);
    uStack_344 = 0x9408e6;
    local_2fc = iVar22;
    iVar19 = (**(code **)(*local_300 + 8))();
    piStack_34c = *(int **)(*(int *)(unaff_EBX + 0x2c) + 0x30);
    auStack_440[0x3b] = *(undefined4 *)(*(int *)(unaff_EBX + 0x2c) + 0x34);
    uStack_344 = *(undefined4 *)(unaff_EBX + 0x28);
    uStack_348 = *(undefined4 *)(unaff_EBX + 0x24);
    ppiStack_350 = &local_300;
    auStack_440[0x3a] = 0x940919;
    (**(code **)(*piStack_34c +
                (*(byte *)(*(int *)(unaff_EBX + 0x18) * 0x20 + *piStack_34c + 400 + iVar19) + 0x7b)
                * 0x14))();
    *(undefined4 *)(unaff_EBX + 0x1c) = *(undefined4 *)(*(int *)(unaff_EBX + 0x24) + 4);
    return;
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
    pbVar21 = param_2 + 1;
    param_2 = param_2 + 2;
    auStack_440[uVar20 + 8] = (uint)*pbVar21;
    goto LAB_00940776;
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
    auStack_440[uVar20 + 4] = (uint)CONCAT11(param_2[1],param_2[2]);
    param_2 = param_2 + 3;
    goto LAB_00940776;
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
    auStack_440[uVar20] = CONCAT31(CONCAT21(CONCAT11(param_2[1],param_2[2]),param_2[3]),param_2[4]);
    param_2 = param_2 + 5;
LAB_00940776:
    if (param_1 != &local_2d0) {
      local_2d0 = *param_1;
      fStack_2cc = param_1[1];
      fStack_2c8 = param_1[2];
      fStack_2c4 = param_1[3];
      local_2c0 = param_1[4];
      fStack_2bc = param_1[5];
      fStack_2b8 = param_1[6];
      fStack_2b4 = param_1[7];
      local_2b0 = param_1[8];
      local_2ac = param_1[9];
      local_2a8 = param_1[10];
      local_2a4 = param_1[0xb];
      param_1 = &local_2d0;
    }
    goto LAB_0093fba2;
  }
  local_310 = (uint)param_2[3];
  pbVar21 = param_2 + 4;
  local_300 = (int *)0x0;
LAB_0093ff8a:
  if ((local_308 <= fVar4) || (local_308 <= fVar3)) {
    param_2 = pbVar21 + local_310;
    if ((fVar3 <= local_304) || (fVar4 <= local_304)) {
      local_250 = *param_3;
      fStack_24c = param_3[1];
      fStack_248 = param_3[2];
      fStack_244 = param_3[3];
      local_2ec = fVar3 - local_304;
      local_240 = param_3[4];
      fStack_23c = param_3[5];
      fStack_238 = param_3[6];
      fStack_234 = param_3[7];
      local_2f4 = fVar3 - local_308;
      local_2f0 = fVar4 - local_304;
      fVar4 = fVar4 - local_308;
      pfStack_32c = param_1;
      if (local_2f0 <= local_2ec) {
        if (fVar4 * local_2f4 < 0.0) {
          local_2f4 = local_2f4 / (local_2f4 - fVar4);
          local_240 = (1.0 - local_2f4) * local_250 + local_2f4 * local_240;
          fStack_23c = (1.0 - local_2f4) * fStack_24c + local_2f4 * fStack_23c;
          fStack_238 = (1.0 - local_2f4) * fStack_248 + local_2f4 * fStack_238;
          fStack_234 = (1.0 - local_2f4) * fStack_244 + local_2f4 * fStack_234;
        }
        local_324 = &local_250;
        uStack_330 = 0x9401f9;
        pbStack_328 = param_2;
        FUN_0093fb80();
        if (local_2f0 * local_2ec < 0.0) {
          local_2f0 = local_2ec / (local_2ec - local_2f0);
          *param_3 = (1.0 - local_2f0) * *param_3 + local_2f0 * param_3[4];
          param_3[1] = (1.0 - local_2f0) * param_3[1] + local_2f0 * param_3[5];
          param_3[2] = (1.0 - local_2f0) * param_3[2] + local_2f0 * param_3[6];
          param_3[3] = (1.0 - local_2f0) * param_3[3] + local_2f0 * param_3[7];
        }
        if (*(float *)(local_2f8 + 0x1c) < *(float *)(local_2f8 + 0x20)) {
          local_288 = *(float *)(local_2f8 + 0x1c);
          *(float *)(local_2f8 + 0x20) = local_288;
          pfVar9 = *(float **)(local_2f8 + 0x2c);
          fVar3 = pfVar9[5];
          fVar4 = pfVar9[6];
          fVar11 = pfVar9[7];
          iVar19 = *(int *)(local_2f8 + 0x10);
          fVar12 = *(float *)(iVar19 + 0x14);
          fVar13 = *(float *)(iVar19 + 0x18);
          fVar14 = *(float *)(iVar19 + 0x1c);
          fVar15 = pfVar9[1];
          fVar16 = pfVar9[2];
          fVar17 = pfVar9[3];
          param_3[4] = ((1.0 - local_288) * *pfVar9 + local_288 * pfVar9[4]) -
                       *(float *)(iVar19 + 0x10);
          param_3[5] = ((1.0 - local_288) * fVar15 + local_288 * fVar3) - fVar12;
          param_3[6] = ((1.0 - local_288) * fVar16 + local_288 * fVar4) - fVar13;
          param_3[7] = ((1.0 - local_288) * fVar17 + local_288 * fVar11) - fVar14;
          local_2e4 = (undefined4 *)param_1[10];
          param_3[4] = (float)local_2e4 * param_3[4];
          param_3[5] = (float)local_2e4 * param_3[5];
          param_3[6] = (float)local_2e4 * param_3[6];
          param_3[7] = (float)local_2e4 * param_3[7];
          fVar3 = param_1[1];
          fVar4 = param_1[2];
          fVar11 = param_1[3];
          param_3[4] = param_3[4] - *param_1;
          param_3[5] = param_3[5] - fVar3;
          param_3[6] = param_3[6] - fVar4;
          param_3[7] = param_3[7] - fVar11;
          if ((local_2fc < 3) && (local_304 < param_3[local_2fc + 4])) {
switchD_0093fbbd_caseD_0:
            return;
          }
        }
        param_2 = param_2 + ((int)local_300 - local_310);
      }
      else {
        if (local_2f0 * local_2ec < 0.0) {
          fVar3 = local_2ec / (local_2ec - local_2f0);
          local_240 = (1.0 - fVar3) * local_250 + fVar3 * local_240;
          fStack_23c = (1.0 - fVar3) * fStack_24c + fVar3 * fStack_23c;
          fStack_238 = (1.0 - fVar3) * fStack_248 + fVar3 * fStack_238;
          fStack_234 = (1.0 - fVar3) * fStack_244 + fVar3 * fStack_234;
        }
        local_324 = &local_250;
        pbStack_328 = param_2 + ((int)local_300 - local_310);
        uStack_330 = 0x94008b;
        FUN_0093fb80();
        if (fVar4 * local_2f4 < 0.0) {
          fVar3 = local_2f4 / (local_2f4 - fVar4);
          *param_3 = (1.0 - fVar3) * *param_3 + fVar3 * param_3[4];
          param_3[1] = (1.0 - fVar3) * param_3[1] + fVar3 * param_3[5];
          param_3[2] = (1.0 - fVar3) * param_3[2] + fVar3 * param_3[6];
          param_3[3] = (1.0 - fVar3) * param_3[3] + fVar3 * param_3[7];
        }
        if (*(float *)(local_2f8 + 0x1c) < *(float *)(local_2f8 + 0x20)) {
          local_28c = *(float *)(local_2f8 + 0x1c);
          *(float *)(local_2f8 + 0x20) = local_28c;
          pfVar9 = *(float **)(local_2f8 + 0x2c);
          fVar3 = pfVar9[5];
          fVar4 = pfVar9[6];
          fVar11 = pfVar9[7];
          iVar19 = *(int *)(local_2f8 + 0x10);
          fVar12 = *(float *)(iVar19 + 0x14);
          fVar13 = *(float *)(iVar19 + 0x18);
          fVar14 = *(float *)(iVar19 + 0x1c);
          fVar15 = pfVar9[1];
          fVar16 = pfVar9[2];
          fVar17 = pfVar9[3];
          param_3[4] = ((1.0 - local_28c) * *pfVar9 + local_28c * pfVar9[4]) -
                       *(float *)(iVar19 + 0x10);
          param_3[5] = ((1.0 - local_28c) * fVar15 + local_28c * fVar3) - fVar12;
          param_3[6] = ((1.0 - local_28c) * fVar16 + local_28c * fVar4) - fVar13;
          param_3[7] = ((1.0 - local_28c) * fVar17 + local_28c * fVar11) - fVar14;
          local_284 = param_1[10];
          param_3[4] = local_284 * param_3[4];
          param_3[5] = local_284 * param_3[5];
          param_3[6] = local_284 * param_3[6];
          param_3[7] = local_284 * param_3[7];
          fVar3 = param_1[1];
          fVar4 = param_1[2];
          fVar11 = param_1[3];
          param_3[4] = param_3[4] - *param_1;
          param_3[5] = param_3[5] - fVar3;
          param_3[6] = param_3[6] - fVar4;
          param_3[7] = param_3[7] - fVar11;
          if ((local_2fc < 3) && (param_3[local_2fc + 4] < local_308)) {
            return;
          }
        }
      }
    }
  }
  else {
    param_2 = pbVar21 + (int)local_300;
  }
  goto LAB_0093fba2;
}


