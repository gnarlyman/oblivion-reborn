
undefined4 FUN_006b0350(undefined4 param_1,float param_2)

{
  undefined4 uVar1;
  float *pfVar2;
  
  switch(param_1) {
  case 0:
  case 0x1e:
    if (param_2 < 0.0001) {
      uVar1 = FUN_00447490("CStoneStatic");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      pfVar2 = (float *)FUN_00403c00();
      if (*pfVar2 <= param_2) {
        uVar1 = FUN_00447490("CStoneLarge");
        return uVar1;
      }
      uVar1 = FUN_00447490("CStoneMedium");
      return uVar1;
    }
    uVar1 = FUN_00447490("CStoneSmall");
    return uVar1;
  case 1:
    pfVar2 = (float *)FUN_00403c00();
    if (param_2 < *pfVar2) {
      uVar1 = FUN_00447490("CClothSmall");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      uVar1 = FUN_00447490("CClothLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CClothMedium");
    return uVar1;
  case 2:
    pfVar2 = (float *)FUN_00403c00();
    if (param_2 < *pfVar2) {
      uVar1 = FUN_00447490("CEarthSmall");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      uVar1 = FUN_00447490("CEarthLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CEarthMedium");
    return uVar1;
  case 3:
    if (param_2 < 6.0) {
      uVar1 = FUN_00447490("CGlassSmall");
      return uVar1;
    }
    if (15.0 <= param_2) {
      uVar1 = FUN_00447490("CGlassLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CGlassMedium");
    return uVar1;
  case 4:
    if (param_2 < 6.0) {
      uVar1 = FUN_00447490("CGrassSmall");
      return uVar1;
    }
    if (70.0 <= param_2) {
      uVar1 = FUN_00447490("CGrassLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CGrassMedium");
    return uVar1;
  case 5:
    if (param_2 < 0.0001) {
      uVar1 = FUN_00447490("CMetalStatic");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      pfVar2 = (float *)FUN_00403c00();
      if (*pfVar2 <= param_2) {
        uVar1 = FUN_00447490("CMetalLarge");
        return uVar1;
      }
      uVar1 = FUN_00447490("CMetalMedium");
      return uVar1;
    }
    uVar1 = FUN_00447490("CMetalSmall");
    return uVar1;
  case 6:
    uVar1 = FUN_00447490("COrganicSmall");
    return uVar1;
  case 7:
    pfVar2 = (float *)FUN_00403c00();
    if (param_2 < *pfVar2) {
      uVar1 = FUN_00447490("CSkinSmall");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      uVar1 = FUN_00447490("CSkinLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CSkinMedium");
    return uVar1;
  case 8:
    if (6.0 <= param_2) {
      if (param_2 < 15.0) {
        uVar1 = FUN_00447490("CWoodMedium");
        return uVar1;
      }
LAB_006b0588:
      uVar1 = FUN_00447490("CWoodLarge");
      return uVar1;
    }
    break;
  case 9:
    if (param_2 < 0.0001) {
      uVar1 = FUN_00447490("CWoodStatic");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      pfVar2 = (float *)FUN_00403c00();
      if (param_2 < *pfVar2) {
        uVar1 = FUN_00447490("CWoodMedium");
        return uVar1;
      }
      goto LAB_006b0588;
    }
    break;
  case 10:
    uVar1 = FUN_00447490("CSpecialHeavyStone");
    return uVar1;
  case 0xb:
    uVar1 = FUN_00447490("CSpecialHeavyMetal");
    return uVar1;
  case 0xc:
    uVar1 = FUN_00447490("CSpecialHeavyWood");
    return uVar1;
  case 0xd:
    pfVar2 = (float *)FUN_00403c00();
    if (param_2 < *pfVar2) {
      uVar1 = FUN_00447490("CChainSmall");
      return uVar1;
    }
    pfVar2 = (float *)FUN_00403c00();
    if (*pfVar2 <= param_2) {
      uVar1 = FUN_00447490("CChainLarge");
      return uVar1;
    }
    uVar1 = FUN_00447490("CChainMedium");
    return uVar1;
  default:
    return 0;
  }
  uVar1 = FUN_00447490("CWoodSmall");
  return uVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b07f0(int *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined1 auStack_12c [3];
  char cStack_129;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined1 auStack_10c [4];
  char acStack_108 [4];
  undefined4 uStack_104;
  uint uStack_100;
  undefined2 uStack_fc;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_12c;
  if (DAT_00b16304 <= DAT_00b3c20c) {
    return;
  }
  if (DAT_00b3c0f0 == 0) {
    DAT_00b3c0f0 = *(int *)(DAT_00b33398 + 0x24);
  }
  pfVar3 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_118 = _DAT_00b162fc;
  fStack_114 = *pfVar3;
  fStack_110 = pfVar3[1];
  auStack_10c = (undefined1  [4])pfVar3[2];
  if (DAT_00b333b8 != '\0') {
    fStack_118 = _DAT_00b162fc * 0.5;
  }
  fStack_124 = *(float *)(DAT_00b3c0f0 + 0x80) - fStack_114;
  fStack_120 = *(float *)(DAT_00b3c0f0 + 0x84) - fStack_110;
  fStack_11c = *(float *)(DAT_00b3c0f0 + 0x88) - (float)auStack_10c;
  fStack_128 = fStack_120 * fStack_120 + fStack_124 * fStack_124 + fStack_11c * fStack_11c;
  fVar9 = (float10)FUN_00982c30();
  fStack_128 = (float)fVar9;
  if (fStack_118 < fStack_128) {
    return;
  }
  cStack_129 = '\0';
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (iVar4 == 0) {
    return;
  }
  if (*(int **)(iVar4 + 0x58) == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(**(int **)(iVar4 + 0x58) + 0xec))(1);
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
  }
  if (iVar4 == 0) {
    return;
  }
  iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
  if (iVar4 == 0) {
    return;
  }
  switch(*(undefined1 *)(iVar4 + 0x90)) {
  case 0:
    builtin_strncpy(acStack_108,"WPNB",4);
    uStack_104._0_1_ = 'l';
    uStack_104._1_1_ = 'a';
    uStack_104._2_1_ = 'd';
    uStack_104._3_1_ = 'e';
    uStack_100._0_1_ = '1';
    uStack_100._1_1_ = 'H';
    uStack_100._2_1_ = 'a';
    uStack_100._3_1_ = 'n';
    uStack_fc = 100;
    break;
  case 1:
    builtin_strncpy(acStack_108,"WPNB",4);
    cStack_129 = '\x01';
    uStack_104._0_1_ = 'l';
    uStack_104._1_1_ = 'a';
    uStack_104._2_1_ = 'd';
    uStack_104._3_1_ = 'e';
    uStack_100._0_1_ = '2';
    uStack_100._1_1_ = 'H';
    uStack_100._2_1_ = 'a';
    uStack_100._3_1_ = 'n';
    uStack_fc = 100;
    break;
  case 2:
    uVar5._0_1_ = 'l';
    uVar5._1_1_ = 'u';
    uVar5._2_1_ = 'n';
    uVar5._3_1_ = 't';
    builtin_strncpy(acStack_108,"WPNB",4);
    uStack_100._0_1_ = '1';
    uStack_100._1_1_ = 'H';
    uStack_100._2_1_ = 'a';
    uStack_100._3_1_ = 'n';
    uStack_fc = 100;
    goto LAB_006b0a7d;
  case 3:
    builtin_strncpy(acStack_108,"WPNB",4);
    cStack_129 = '\x01';
    uStack_104._0_1_ = 'l';
    uStack_104._1_1_ = 'u';
    uStack_104._2_1_ = 'n';
    uStack_104._3_1_ = 't';
    uStack_100._0_1_ = '2';
    uStack_100._1_1_ = 'H';
    uStack_100._2_1_ = 'a';
    uStack_100._3_1_ = 'n';
    uStack_fc = 100;
    break;
  case 4:
    uVar5._0_1_ = 't';
    uVar5._1_1_ = 'a';
    uVar5._2_1_ = 'f';
    uVar5._3_1_ = 'f';
    builtin_strncpy(acStack_108,"WPNS",4);
    uStack_100 = uStack_100 & 0xffffff00;
LAB_006b0a7d:
    uStack_104._0_1_ = (char)uVar5;
    uStack_104._1_1_ = SUB41(uVar5,1);
    uStack_104._2_1_ = SUB41(uVar5,2);
    uStack_104._3_1_ = SUB41(uVar5,3);
    break;
  case 5:
    builtin_strncpy(acStack_108,"WPNB",4);
    uStack_104._0_3_ = 0x776f;
    break;
  default:
    goto switchD_006b0985_default;
  }
  if (param_2 == 9) {
    puVar8 = (undefined4 *)(auStack_10c + 3);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined4 *)((int)puVar7 + 1);
    } while (*(char *)((int)puVar7 + 1) != '\0');
    *(undefined4 *)((int)puVar7 + 1) = 0x69757145;
    *(undefined2 *)((int)puVar7 + 5) = 0x70;
  }
  else if (param_2 == 10) {
    pcVar1 = auStack_10c + 3;
    do {
      pcVar6 = pcVar1;
      pcVar1 = pcVar6 + 1;
    } while (pcVar6[1] != '\0');
    builtin_strncpy(pcVar6 + 1,"Unequip",8);
  }
  cVar2 = FUN_005e0550();
  if ((DAT_00b3c0f0 != 0) &&
     (puVar8 = (undefined4 *)FUN_006ade50(acStack_108,0x4102,1), puVar8 != (undefined4 *)0x0)) {
    FUN_006b7360(fStack_114,fStack_110,auStack_10c);
    FUN_006ac3e0(*puVar8,param_1);
    if (cStack_129 == '\0') {
      fStack_128 = 1.0 / ((1.0 - *(float *)(iVar4 + 0x98)) * 0.5 + *(float *)(iVar4 + 0x98));
      FUN_006b7310(fStack_128);
    }
    if (cVar2 == '\0') {
      uVar5 = 0x3f800000;
    }
    else {
      uVar5 = 0x3ecccccd;
    }
    FUN_006b7280(uVar5);
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(puVar8);
  }
switchD_006b0985_default:
  return;
}



void FUN_006b0be0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c68c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a777ec;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a77408;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b0c50(byte param_1)

{
  FUN_006b0be0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b0c70(float *param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float fStack_28;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pfVar3 = param_1;
  puStack_8 = &LAB_009c68fe;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1[7] == param_1[8]) && (param_1[7] != 0.0)) || (DAT_00b16304 <= DAT_00b3c20c))
  goto LAB_006b11ed;
  if ((_DAT_00b3c180 & 1) == 0) {
    _DAT_00b3c180 = _DAT_00b3c180 | 1;
    local_4 = 0;
    FUN_00401000(uVar5);
    _atexit(FUN_00a26270);
  }
  local_4 = 0xffffffff;
  FUN_00401020("ImpactMixer::PlayCollisionSound");
  if (DAT_00b3c0f0 == 0) {
    DAT_00b3c0f0 = *(int *)(DAT_00b33398 + 0x24);
  }
  fStack_20 = pfVar3[3] * 0.0142875;
  fStack_28 = pfVar3[3] / 200.0;
  if ((*(char *)(pfVar3 + 5) == '\x1f') && (*(char *)((int)pfVar3 + 0x15) == '\x06')) {
    fStack_28 = fStack_28 * 4.0;
  }
  if (DAT_00b333b8 == '\0') {
LAB_006b0dec:
    if (pfVar3[7] == 0.0) {
      fVar11 = (float10)5.0;
    }
    else {
      fVar11 = (float10)FUN_00535ac0();
    }
    param_1 = (float *)(float)fVar11;
    if (pfVar3[8] == 0.0) {
      fVar11 = (float10)5.0;
    }
    else {
      fVar11 = (float10)FUN_00535ac0();
    }
    if ('\x0e' < *(char *)(pfVar3 + 5)) {
      *(char *)(pfVar3 + 5) = *(char *)(pfVar3 + 5) + -0xf;
    }
    if ('\x0e' < *(char *)((int)pfVar3 + 0x15)) {
      *(char *)((int)pfVar3 + 0x15) = *(char *)((int)pfVar3 + 0x15) + -0xf;
    }
    iVar6 = FUN_006b0350((int)*(char *)(pfVar3 + 5),param_1);
    uStack_1c = FUN_006b0350((int)*(char *)((int)pfVar3 + 0x15),(float)fVar11);
    iVar2 = DAT_00b33ea0;
    puVar8 = (undefined4 *)0x0;
    puVar10 = (undefined4 *)0x0;
    param_1 = (float *)0x0;
    cVar4 = FUN_0055e000(pfVar3[6],&param_1);
    if ((cVar4 == '\0') || (DAT_00b16244 <= (uint)(iVar2 - (int)param_1))) {
      FUN_00452570(pfVar3[6],iVar2);
      if ((iVar6 != 0) &&
         ((*(char *)(pfVar3 + 5) != '\a' || (*(char *)((int)pfVar3 + 0x15) != '\a')))) {
        puVar10 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar6 + 0xc),0x4102,0);
      }
      if ((uStack_1c != 0) &&
         ((*(char *)(pfVar3 + 5) != '\a' || (*(char *)((int)pfVar3 + 0x15) != '\a')))) {
        puVar8 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(uStack_1c + 0xc),0x4102,0);
      }
      if (puVar10 != (undefined4 *)0x0) {
        FUN_006b7360(*pfVar3,pfVar3[1],pfVar3[2]);
        fVar1 = fStack_20 / 20.0;
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        param_1 = (float *)(fVar1 * 0.2 + 0.9);
        FUN_006b7310(param_1);
        fVar1 = fStack_28 * 0.5;
        if ((1.0 <= fVar1) || (0.0 < fVar1)) {
          param_1 = (float *)0x3f800000;
          if (fVar1 < 1.0) goto LAB_006b0f9c;
        }
        else {
          fVar1 = 0.0;
LAB_006b0f9c:
          param_1 = (float *)fVar1;
        }
        FUN_006b7280(param_1);
        uStack_1c = (uint)ROUND(fStack_28);
        param_1 = (float *)(uStack_1c & 0xff);
        FUN_006acc50(*puVar10,(float)(int)param_1,0x41c80000);
        FUN_006b7190(0);
        FUN_006b73e0();
        FUN_00401f20(puVar10);
      }
      if (puVar8 != (undefined4 *)0x0) {
        FUN_006b7360(*pfVar3,pfVar3[1],pfVar3[2]);
        fVar1 = fStack_20 / 20.0;
        if (1.0 < fVar1) {
          fVar1 = 1.0;
        }
        param_1 = (float *)(fVar1 * 0.2 + 0.9);
        FUN_006b7310(param_1);
        fVar1 = fStack_28 * 0.5;
        if ((1.0 <= fVar1) || (0.0 < fVar1)) {
          param_1 = (float *)0x3f800000;
          if (fVar1 < 1.0) goto LAB_006b10ad;
        }
        else {
          fVar1 = 0.0;
LAB_006b10ad:
          param_1 = (float *)fVar1;
        }
        FUN_006b7280(param_1);
        uStack_1c = (uint)ROUND(fStack_28);
        param_1 = (float *)(uStack_1c & 0xff);
        FUN_006acc50(*puVar8,(float)(int)param_1,0x41c80000);
        FUN_006b7190(0);
        FUN_006b73e0();
        FUN_00401f20(puVar8);
      }
      _DAT_00b3c0f4 = *pfVar3;
      _DAT_00b3c0f8 = pfVar3[1];
      _DAT_00b3c0fc = pfVar3[2];
      uVar5 = DAT_00b16244 * 4;
      param_1 = (float *)FUN_006a9030();
      iVar2 = DAT_00b33ea0;
      uVar9 = 0;
      do {
        if (param_1 == (float *)0x0) goto LAB_006b11e3;
        uVar9 = uVar9 + 1;
        FUN_00452600(&param_1,&fStack_20,&uStack_1c);
        if (uVar5 < iVar2 - uStack_1c) {
          FUN_004524c0(fStack_20);
          uVar7 = 0;
          if (DAT_00b16310 != 0) {
            do {
              if (*(int *)(DAT_00b16314 + uVar7 * 4) != 0) {
                param_1 = *(float **)(DAT_00b16314 + uVar7 * 4);
                goto LAB_006b11c3;
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < DAT_00b16310);
          }
          param_1 = (float *)0x0;
        }
LAB_006b11c3:
      } while (uVar9 < 0x101);
      FUN_007c2a40();
    }
  }
  else {
    fStack_18 = *(float *)(DAT_00b3c0f0 + 0x80) - *pfVar3;
    fStack_14 = *(float *)(DAT_00b3c0f0 + 0x84) - pfVar3[1];
    fStack_10 = *(float *)(DAT_00b3c0f0 + 0x88) - pfVar3[2];
    param_1 = (float *)(fStack_14 * fStack_14 + fStack_18 * fStack_18 + fStack_10 * fStack_10);
    fVar11 = (float10)FUN_00982c30();
    param_1 = (float *)(_DAT_00b162fc * 0.5);
    if ((float)fVar11 <= (float)param_1) goto LAB_006b0dec;
  }
LAB_006b11e3:
  FUN_00401040();
LAB_006b11ed:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b1210(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  float10 fVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  float fStack_88;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  double local_70;
  int local_68;
  double local_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [24];
  undefined4 uStack_38;
  undefined4 uStack_14;
  
  local_64 = (double)((ulonglong)local_64 & 0xffffffff00000000);
  local_70 = (double)((ulonglong)local_70 & 0xffffffff00000000);
  local_68 = 0;
  if (DAT_00b16304 <= DAT_00b3c20c) {
    return;
  }
  if (DAT_00b3c0f0 == 0) {
    DAT_00b3c0f0 = *(int *)(DAT_00b33398 + 0x24);
  }
  pfVar3 = (float *)(**(code **)(*param_1 + 0x174))();
  fStack_88 = _DAT_00b162fc;
  fStack_80 = *pfVar3;
  fStack_7c = pfVar3[1];
  fStack_78 = pfVar3[2];
  if (DAT_00b333b8 != '\0') {
    fStack_88 = _DAT_00b162fc * 0.5;
  }
  fStack_5c = *(float *)(DAT_00b3c0f0 + 0x80) - fStack_80;
  fStack_58 = *(float *)(DAT_00b3c0f0 + 0x84) - fStack_7c;
  fStack_54 = *(float *)(DAT_00b3c0f0 + 0x88) - fStack_78;
  fStack_74 = fStack_58 * fStack_58 + fStack_5c * fStack_5c + fStack_54 * fStack_54;
  fVar11 = (float10)FUN_00982c30();
  fStack_74 = (float)fVar11;
  if (fStack_88 < fStack_74) {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 400))();
  if (cVar2 == '\0') {
    return;
  }
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  cVar2 = FUN_005e3270();
  if (cVar2 != '\0') {
    uVar5 = (**(code **)(*param_1 + 0x170))();
    FUN_009832e6(uVar5,0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
    iVar4 = FUN_0051cec0(param_2);
    if (iVar4 == 0) {
      return;
    }
    if (DAT_00b3c0f0 == 0) {
      return;
    }
    puVar6 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar4 + 0xc),0x410a,1);
    if (puVar6 == (undefined4 *)0x0) {
      return;
    }
    FUN_006b7360(fStack_80,fStack_7c,fStack_78);
    FUN_006ac3e0(*puVar6,param_1);
    FUN_006b7280(0x3f7ae148);
    fVar11 = (float10)FUN_0047e0b0(0x3e19999a);
    local_70 = (double)CONCAT44(local_70._4_4_,(float)(fVar11 + (float10)1.0));
    FUN_006b7310((float)(fVar11 + (float10)1.0));
    FUN_006b7190(0);
    FUN_006b73e0();
    FUN_00401f20(puVar6);
    return;
  }
  iVar7 = *(int *)(DAT_00b333a0 + 0x34);
  fStack_88 = 0.0;
  if (iVar7 == 0) {
    uVar13 = 0;
    uVar5 = FUN_0043f270(0);
    iVar7 = FUN_0044a270(fStack_80,fStack_7c,uVar5,uVar13);
  }
  bVar10 = false;
  cVar2 = FUN_005e0530();
  if (((cVar2 == '\0') && (cVar2 = FUN_005e06c0(&fStack_80,iVar7,0x3a03126f), cVar2 != '\0')) &&
     (((cVar2 = FUN_004c97f0(), cVar2 != '\0' && ((*(byte *)(iVar7 + 0x24) >> 1 & 1) != 0)) ||
      ((cVar2 = FUN_004c97f0(), cVar2 == '\0' && (cVar2 = FUN_004ca6f0(), cVar2 == '\0')))))) {
    bVar10 = true;
  }
  if (((*(int *)(DAT_00b333a0 + 0x34) == 0) && (iVar7 != 0)) && (iVar7 = FUN_004ce3c0(), iVar7 != 0)
     ) {
    uVar5 = 1;
    pfVar3 = &fStack_80;
    puVar12 = auStack_50;
    FUN_004ce3c0(puVar12,pfVar3,1);
    FUN_004c3030(puVar12,pfVar3,uVar5);
    FUN_004ce3c0(uStack_38,uStack_14);
    iVar7 = FUN_004c0190(uStack_38,uStack_14);
    fStack_74 = 0.0;
    fStack_88 = 0.0;
    if (bVar10) {
      fStack_88 = 1.12104e-44;
      goto LAB_006b15d8;
    }
    if (((iVar4 == 0) || (iVar4 = FUN_0065a2c0(), iVar4 == 0)) ||
       (iVar4 = FUN_0065a2c0(), *(int *)(iVar4 + 0x214) == 0x1f)) {
      if (iVar7 != 0) {
        fStack_88 = (float)FUN_004c8d10();
        cVar2 = FUN_004d1e10(&fStack_80,&fStack_74);
        if (cVar2 != '\0') {
          fStack_78 = fStack_74;
        }
      }
      goto LAB_006b15d8;
    }
  }
  else {
    if (bVar10) {
      fStack_88 = 1.12104e-44;
      goto LAB_006b15d8;
    }
    if ((iVar4 == 0) || (iVar4 = FUN_0065a2c0(), iVar4 == 0)) goto LAB_006b15d8;
  }
  iVar4 = FUN_0065a2c0();
  fStack_88 = *(float *)(iVar4 + 0x214);
LAB_006b15d8:
  iVar4 = FUN_005e4330(5);
  uVar9 = 0xffffffff;
  if (iVar4 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(iVar4 + 8);
  }
  if (iVar7 != 0) {
    uVar9 = FUN_004b4c70();
    uVar9 = uVar9 & 0xff;
  }
  cVar2 = FUN_005e0550();
  if (0xe < (int)fStack_88) {
    fStack_88 = (float)((int)fStack_88 + -0xf);
  }
  switch(fStack_88) {
  case 0.0:
  case 4.2039e-44:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 3;
    break;
  default:
    uVar8 = -(uint)(cVar2 != '\0') & 0x10;
    break;
  case 2.8026e-45:
    uVar8 = -(uint)(cVar2 != '\0') & 0x10;
    break;
  case 5.60519e-45:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 1;
    break;
  case 7.00649e-45:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 2;
    break;
  case 1.12104e-44:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 4;
    break;
  case 1.26117e-44:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 5;
    break;
  case 1.96182e-44:
    uVar8 = (-(uint)(cVar2 != '\0') & 0x10) + 6;
  }
  if (uVar9 == 0) {
    local_68 = DAT_00b36238;
    if (cVar2 != '\0') {
      local_68 = DAT_00b36278;
    }
  }
  else if ((uVar9 == 1) && (local_68 = DAT_00b36274, cVar2 == '\0')) {
    local_68 = DAT_00b36234;
  }
  if (iVar4 != 0) {
    FUN_00484470();
    FUN_00401f20(iVar4);
  }
  if ((&DAT_00b36218)[uVar8] != 0) {
    if (DAT_00b3c0f0 != 0) {
      uVar5 = FUN_006ae0a0(*(undefined4 *)((&DAT_00b36218)[uVar8] + 0xc),0x410a,1);
      local_64 = (double)CONCAT44(local_64._4_4_,uVar5);
      if (local_68 != 0) {
        uVar5 = FUN_006ae0a0(*(undefined4 *)(local_68 + 0xc),0x410a,1);
        local_70 = (double)CONCAT44(local_70._4_4_,uVar5);
      }
    }
    bVar10 = param_1 != DAT_00b333c4;
    puVar6 = local_64._0_4_;
    if (local_64._0_4_ != (undefined4 *)0x0) {
      local_64 = (double)CONCAT44(local_64._4_4_,fStack_78 - 128.0);
      FUN_006b7360(fStack_80,fStack_7c,fStack_78 - 128.0);
      FUN_006ac3e0(*puVar6,param_1);
      if (bVar10) {
        fVar11 = (float10)FUN_0047e0b0(0x3dcccccd);
        fVar11 = (float10)1 - fVar11;
      }
      else {
        pfVar3 = (float *)FUN_00403c00();
        local_64 = (double)*pfVar3;
        fVar11 = (float10)FUN_0047e0b0(0x3dcccccd);
        fVar11 = (float10)local_64 - fVar11;
      }
      local_64 = (double)CONCAT44(local_64._4_4_,(float)fVar11);
      FUN_006b7280((float)fVar11);
      puVar1 = local_70._0_4_;
      if (local_70._0_4_ != (undefined4 *)0x0) {
        local_70 = (double)CONCAT44(local_70._4_4_,fStack_78 - 128.0);
        FUN_006b7360(fStack_80,fStack_7c,fStack_78 - 128.0);
        FUN_006ac3e0(*puVar1,param_1);
        if (bVar10) {
          fVar11 = (float10)FUN_0047e0b0(0x3dcccccd);
          fVar11 = (float10)1 - fVar11;
        }
        else {
          pfVar3 = (float *)FUN_00403c00();
          local_70 = (double)*pfVar3;
          fVar11 = (float10)FUN_0047e0b0(0x3dcccccd);
          fVar11 = (float10)local_70 - fVar11;
        }
        local_70 = (double)CONCAT44(local_70._4_4_,(float)fVar11);
        FUN_006b7280((float)fVar11);
        FUN_006b7190(0);
        FUN_006b73e0();
        FUN_00401f20(puVar1);
      }
      FUN_006b7190(0);
      FUN_006b73e0();
      FUN_00401f20(puVar6);
    }
  }
  return;
}



void FUN_006b1900(int *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  float10 fVar8;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_00b3c20c < DAT_00b16304) {
    if (0xe < param_2) {
      param_2 = param_2 + -0xf;
    }
    if (DAT_00b3c0f0 == 0) {
      DAT_00b3c0f0 = *(int *)(DAT_00b33398 + 0x24);
    }
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_c = *puVar2;
    uStack_8 = puVar2[1];
    uStack_4 = puVar2[2];
    iVar5 = *(int *)(DAT_00b333a0 + 0x34);
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      iVar3 = (**(code **)(*param_1 + 0x380))();
      if ((iVar3 != 0) && (cVar1 = FUN_005e3290(), cVar1 == '\0')) {
        uVar4 = (**(code **)(*param_1 + 0x380))(0);
        FUN_006b1210(uVar4);
        uVar4 = (**(code **)(*param_1 + 0x380))(1);
        FUN_006b1210(uVar4);
        return;
      }
      cVar1 = FUN_005e3290();
      if (cVar1 != '\0') {
        FUN_006b1210(param_1,0);
        FUN_006b1210(param_1,1);
        return;
      }
      if (iVar5 == 0) {
        uVar4 = FUN_0043f270(0);
        iVar5 = FUN_0044a270(uStack_c,uStack_8,uVar4,iVar5);
      }
      cVar1 = (**(code **)(*param_1 + 400))();
      if ((((cVar1 == '\0') || (iVar5 == 0)) ||
          (((cVar1 = FUN_004c97f0(), cVar1 == '\0' || ((*(byte *)(iVar5 + 0x24) >> 1 & 1) == 0)) &&
           (cVar1 = FUN_004c97f0(), cVar1 != '\0')))) ||
         (((cVar1 = FUN_005e0530(), cVar1 != '\0' ||
           (cVar1 = FUN_005e06c0(&uStack_c,iVar5,0x3a03126f), cVar1 == '\0')) ||
          (cVar1 = FUN_004ca6f0(), cVar1 != '\0')))) {
        switch(param_2) {
        case 0:
        case 0x1e:
          iVar5 = DAT_00b36248;
          break;
        default:
          iVar5 = DAT_00b3623c;
          break;
        case 4:
          iVar5 = DAT_00b36240;
          break;
        case 5:
          iVar5 = DAT_00b36244;
          break;
        case 8:
          iVar5 = DAT_00b3624c;
          break;
        case 9:
          iVar5 = DAT_00b36250;
        }
        iVar3 = FUN_005e4330(5);
        if (iVar3 == 0) {
          iVar7 = 0;
        }
        else {
          iVar7 = *(int *)(iVar3 + 8);
        }
        uVar6 = 0xffffffff;
        if (iVar7 != 0) {
          uVar6 = FUN_004b4c70();
          uVar6 = uVar6 & 0xff;
        }
        iVar7 = DAT_00b36238;
        if ((uVar6 != 0) && (iVar7 = 0, uVar6 == 1)) {
          iVar7 = DAT_00b36234;
        }
        if ((iVar5 != 0) &&
           (puVar2 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar5 + 0xc),0x410a,1),
           puVar2 != (undefined4 *)0x0)) {
          FUN_006b7360(uStack_c,uStack_8,uStack_4);
          FUN_006ac3e0(*puVar2,param_1);
          fVar8 = (float10)FUN_0047e0b0(0x3dcccccd);
          FUN_006b7280((float)((float10)0.949999988079071 - fVar8));
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(puVar2);
        }
        if ((iVar7 != 0) &&
           (puVar2 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar7 + 0xc),0x410a,1),
           puVar2 != (undefined4 *)0x0)) {
          FUN_006b7360(uStack_c,uStack_8,uStack_4);
          FUN_006ac3e0(*puVar2,param_1);
          fVar8 = (float10)FUN_0047e0b0(0x3dcccccd);
          FUN_006b7280((float)((float10)0.949999988079071 - fVar8));
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(puVar2);
        }
        if (iVar3 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar3);
        }
      }
      else {
        puVar2 = (undefined4 *)FUN_006ade50("FSTWaterLand",0x410a,1);
        if (puVar2 != (undefined4 *)0x0) {
          FUN_006b7360(uStack_c,uStack_8,uStack_4);
          FUN_006ac3e0(*puVar2,param_1);
          fVar8 = (float10)FUN_0047e0b0(0x3dcccccd);
          FUN_006b7280((float)((float10)0.949999988079071 - fVar8));
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(puVar2);
          return;
        }
      }
    }
  }
  return;
}



void FUN_006b1d40(int param_1)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6df1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = param_1;
  iVar2 = FUN_00401f00(0x18,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006af660();
  }
  local_4 = 0xffffffff;
  in_ECX[1] = iVar2;
  iVar2 = FUN_00401f00(0x1090,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006b5820(0x47000000);
  }
  local_4 = 0xffffffff;
  in_ECX[2] = iVar2;
  iVar2 = FUN_00401f00(8,uVar1);
  local_4 = 2;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_006b57c0();
  }
  iVar3 = 0x240;
  in_ECX[3] = iVar2;
  in_ECX[5] = 0x240;
  in_ECX[4] = 0x240;
  in_ECX[0x1049] = 0;
  in_ECX[0x104a] = 0;
  in_ECX[6] = 0;
  in_ECX[0x104b] = 1;
  in_ECX[0x1048] = 2;
  iVar2 = *(int *)(*(int *)(*in_ECX + 4) + 8);
  if (iVar2 == 32000) {
    in_ECX[0x104e] = 5;
  }
  else if (iVar2 == 0xac44) {
    in_ECX[0x104e] = 3;
  }
  else if (iVar2 == 48000) {
    in_ECX[0x104e] = 4;
  }
  in_ECX[0x104d] = 0;
  in_ECX[0x104c] = 0;
  piVar4 = in_ECX + 0x90b;
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = 0;
    piVar4 = piVar4 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b1ea0(float *param_1,float *param_2,int param_3)

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
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float *pfVar29;
  float *pfVar30;
  int iVar31;
  
  if (param_3 == 2) {
    iVar31 = 4;
    pfVar29 = param_2 + 7;
    do {
      pfVar29[1] = 0.0;
      iVar31 = iVar31 + -1;
      *pfVar29 = 0.0;
      pfVar29[-1] = 0.0;
      pfVar29[-2] = 0.0;
      pfVar29[-3] = 0.0;
      pfVar29[-4] = 0.0;
      pfVar29[-5] = 0.0;
      pfVar29[-6] = 0.0;
      pfVar29[-7] = 0.0;
      pfVar29 = pfVar29 + 9;
    } while (iVar31 != 0);
    param_1 = param_1 + 9;
    iVar31 = 3;
    pfVar29 = param_2 + 7;
    do {
      param_1[6] = param_1[6] + param_1[3];
      param_1[3] = param_1[3] + *param_1;
      *param_1 = param_1[-3] + *param_1;
      param_1[-3] = param_1[-6] + param_1[-3];
      fVar1 = param_1[-9];
      fVar2 = fVar1 + param_1[-6];
      param_1[-6] = fVar2;
      param_1[6] = param_1[6] + *param_1;
      fVar5 = *param_1 + fVar2;
      *param_1 = fVar5;
      fVar3 = param_1[3] * 0.5 + fVar1;
      fVar1 = fVar1 - param_1[3];
      fVar6 = param_1[-3] * 0.8660254 + fVar3;
      fVar3 = fVar3 - param_1[-3] * 0.8660254;
      fVar5 = fVar5 * 0.8660254;
      fVar4 = param_1[6] * 0.5 + fVar2;
      fVar7 = (fVar4 - fVar5) * 1.9318516;
      fVar2 = (fVar2 - param_1[6]) * 0.70710677;
      fVar4 = (fVar5 + fVar4) * 0.5176381;
      fVar5 = (fVar3 - fVar7) * 0.8213398;
      fVar8 = (fVar1 - fVar2) * 1.306563;
      fVar9 = (fVar6 - fVar4) * 3.830649;
      fVar4 = -((fVar6 + fVar4) * 0.5043145);
      fVar1 = -((fVar1 + fVar2) * 0.5411961);
      fVar2 = -((fVar3 + fVar7) * 0.6302362);
      pfVar30 = pfVar29 + 6;
      param_1 = param_1 + 1;
      iVar31 = iVar31 + -1;
      pfVar29[-1] = pfVar29[-1] + fVar5 * 0.13052619;
      *pfVar29 = *pfVar29 + fVar8 * 0.38268343;
      pfVar29[1] = fVar9 * 0.6087614 + pfVar29[1];
      pfVar29[2] = pfVar29[2] + -fVar9 * 0.7933533;
      pfVar29[3] = pfVar29[3] + -fVar8 * 0.9238795;
      pfVar29[4] = pfVar29[4] + -fVar5 * 0.9914449;
      pfVar29[5] = fVar2 * 0.9914449 + pfVar29[5];
      *pfVar30 = *pfVar30 + fVar1 * 0.9238795;
      pfVar29[7] = pfVar29[7] + fVar4 * 0.7933533;
      pfVar29[8] = pfVar29[8] + fVar4 * 0.6087614;
      pfVar29[9] = fVar1 * 0.38268343 + pfVar29[9];
      pfVar29[10] = pfVar29[10] + fVar2 * 0.13052619;
      pfVar29 = pfVar30;
    } while (iVar31 != 0);
    return;
  }
  param_1[0x11] = param_1[0x11] + param_1[0x10];
  param_1[0x10] = param_1[0xf] + param_1[0x10];
  param_1[0xf] = param_1[0xe] + param_1[0xf];
  param_1[0xe] = param_1[0xd] + param_1[0xe];
  param_1[0xd] = param_1[0xc] + param_1[0xd];
  param_1[0xc] = param_1[0xb] + param_1[0xc];
  param_1[0xb] = param_1[10] + param_1[0xb];
  param_1[10] = param_1[9] + param_1[10];
  param_1[9] = param_1[8] + param_1[9];
  param_1[8] = param_1[7] + param_1[8];
  param_1[7] = param_1[6] + param_1[7];
  param_1[6] = param_1[5] + param_1[6];
  param_1[5] = param_1[4] + param_1[5];
  param_1[4] = param_1[3] + param_1[4];
  param_1[3] = param_1[2] + param_1[3];
  param_1[2] = param_1[1] + param_1[2];
  fVar1 = *param_1;
  fVar6 = fVar1 + param_1[1];
  param_1[1] = fVar6;
  param_1[0x11] = param_1[0x11] + param_1[0xf];
  param_1[0xf] = param_1[0xd] + param_1[0xf];
  param_1[0xd] = param_1[0xb] + param_1[0xd];
  param_1[0xb] = param_1[9] + param_1[0xb];
  param_1[9] = param_1[7] + param_1[9];
  param_1[7] = param_1[5] + param_1[7];
  param_1[5] = param_1[3] + param_1[5];
  fVar7 = param_1[3] + fVar6;
  param_1[3] = fVar7;
  fVar2 = param_1[0xc];
  fVar8 = fVar1 + fVar1 + fVar2;
  fVar3 = param_1[4];
  fVar4 = param_1[8];
  fVar5 = param_1[0x10];
  fVar9 = fVar3 * 1.8793852 + fVar8 + fVar4 * 1.5320889 + fVar5 * 0.34729636;
  fVar10 = ((((fVar1 + fVar1 + fVar3) - fVar4) - fVar2) - fVar2) - fVar5;
  fVar17 = fVar5 * 1.5320889 + ((fVar8 - fVar3 * 0.34729636) - fVar4 * 1.8793852);
  fVar15 = (fVar4 * 0.34729636 + (fVar8 - fVar3 * 1.5320889)) - fVar5 * 1.8793852;
  fVar5 = (((fVar1 - fVar3) + fVar4) - fVar2) + fVar5;
  fVar4 = param_1[6] * 1.7320508;
  fVar1 = param_1[2];
  fVar2 = param_1[10];
  fVar3 = param_1[0xe];
  fVar28 = fVar1 * 1.9696155 + fVar4 + fVar2 * 1.2855753 + fVar3 * 0.6840403;
  fVar26 = ((fVar1 - fVar2) - fVar3) * 1.7320508;
  fVar25 = fVar3 * 1.9696155 + ((fVar1 * 1.2855753 - fVar4) - fVar2 * 0.6840403);
  fVar27 = (fVar2 * 1.9696155 + (fVar1 * 0.6840403 - fVar4)) - fVar3 * 1.2855753;
  fVar1 = param_1[0xd];
  fVar8 = fVar6 + fVar6 + fVar1;
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  fVar4 = param_1[0x11];
  fVar19 = fVar4 * 0.34729636 + fVar3 * 1.5320889 + fVar2 * 1.8793852 + fVar8;
  fVar20 = ((((fVar6 + fVar6 + fVar2) - fVar3) - fVar1) - fVar1) - fVar4;
  fVar16 = fVar4 * 1.5320889 + ((fVar8 - fVar2 * 0.34729636) - fVar3 * 1.8793852);
  fVar14 = ((fVar8 - fVar2 * 1.5320889) + fVar3 * 0.34729636) - fVar4 * 1.8793852;
  fVar18 = ((((fVar6 - fVar2) + fVar3) - fVar1) + fVar4) * 0.70710677;
  fVar4 = param_1[7] * 1.7320508;
  fVar1 = param_1[0xb];
  fVar2 = param_1[0xf];
  fVar23 = fVar2 * 0.6840403 + fVar1 * 1.2855753 + fVar7 * 1.9696155 + fVar4;
  fVar3 = param_1[3];
  fVar21 = ((fVar3 - fVar1) - fVar2) * 1.7320508;
  fVar24 = fVar2 * 1.9696155 + ((fVar3 * 1.2855753 - fVar4) - fVar1 * 0.6840403);
  fVar22 = ((fVar3 * 0.6840403 - fVar4) + fVar1 * 1.9696155) - fVar2 * 1.2855753;
  fVar1 = fVar9 + fVar28;
  fVar2 = (fVar19 + fVar23) * 0.5019099;
  fVar3 = fVar1 + fVar2;
  fVar1 = fVar1 - fVar2;
  fVar4 = fVar10 + fVar26;
  fVar2 = (fVar20 + fVar21) * 0.5176381;
  fVar6 = fVar4 + fVar2;
  fVar4 = fVar4 - fVar2;
  fVar7 = fVar17 + fVar25;
  fVar2 = (fVar16 + fVar24) * 0.55168897;
  fVar8 = fVar7 + fVar2;
  fVar7 = fVar7 - fVar2;
  fVar11 = fVar15 + fVar27;
  fVar2 = (fVar14 + fVar22) * 0.61038727;
  fVar12 = fVar11 + fVar2;
  fVar11 = fVar11 - fVar2;
  fVar13 = fVar5 + fVar18;
  fVar5 = fVar5 - fVar18;
  fVar15 = fVar15 - fVar27;
  fVar2 = (fVar14 - fVar22) * 0.8717234;
  fVar14 = fVar15 + fVar2;
  fVar15 = fVar15 - fVar2;
  fVar17 = fVar17 - fVar25;
  fVar2 = (fVar16 - fVar24) * 1.1831008;
  fVar16 = fVar17 + fVar2;
  fVar17 = fVar17 - fVar2;
  fVar10 = fVar10 - fVar26;
  fVar2 = (fVar20 - fVar21) * 1.9318516;
  fVar18 = fVar10 + fVar2;
  fVar10 = fVar10 - fVar2;
  fVar9 = fVar9 - fVar28;
  fVar2 = (fVar19 - fVar23) * 5.7368565;
  fVar19 = fVar9 + fVar2;
  param_3 = param_3 * 0x90;
  fVar9 = fVar9 - fVar2;
  *param_2 = -fVar9 * *(float *)(&DAT_00b183d0 + param_3);
  param_2[1] = -fVar10 * *(float *)(&DAT_00b183d4 + param_3);
  param_2[2] = -fVar17 * *(float *)(&DAT_00b183d8 + param_3);
  param_2[3] = -fVar15 * *(float *)(&DAT_00b183dc + param_3);
  param_2[4] = -fVar5 * *(float *)(&DAT_00b183e0 + param_3);
  param_2[5] = -fVar11 * *(float *)(&DAT_00b183e4 + param_3);
  param_2[6] = -fVar7 * *(float *)(&DAT_00b183e8 + param_3);
  param_2[7] = -fVar4 * *(float *)(&DAT_00b183ec + param_3);
  param_2[8] = -fVar1 * *(float *)(&DAT_00b183f0 + param_3);
  param_2[9] = *(float *)(&DAT_00b183f4 + param_3) * fVar1;
  param_2[10] = *(float *)(&DAT_00b183f8 + param_3) * fVar4;
  param_2[0xb] = *(float *)(&DAT_00b183fc + param_3) * fVar7;
  param_2[0xc] = fVar11 * *(float *)(&DAT_00b18400 + param_3);
  param_2[0xd] = fVar5 * *(float *)(&DAT_00b18404 + param_3);
  param_2[0xe] = fVar15 * *(float *)(&DAT_00b18408 + param_3);
  param_2[0xf] = fVar17 * *(float *)(&DAT_00b1840c + param_3);
  param_2[0x10] = fVar10 * *(float *)(&DAT_00b18410 + param_3);
  param_2[0x11] = fVar9 * *(float *)(&DAT_00b18414 + param_3);
  param_2[0x12] = *(float *)(&DAT_00b18418 + param_3) * fVar19;
  param_2[0x13] = *(float *)(&DAT_00b1841c + param_3) * fVar18;
  param_2[0x14] = *(float *)(&DAT_00b18420 + param_3) * fVar16;
  param_2[0x15] = *(float *)(&DAT_00b18424 + param_3) * fVar14;
  param_2[0x16] = *(float *)(&DAT_00b18428 + param_3) * fVar13;
  param_2[0x17] = *(float *)(&DAT_00b1842c + param_3) * fVar12;
  param_2[0x18] = fVar8 * *(float *)(&DAT_00b18430 + param_3);
  param_2[0x19] = fVar6 * *(float *)(&DAT_00b18434 + param_3);
  param_2[0x1a] = *(float *)(&DAT_00b18438 + param_3) * fVar3;
  param_2[0x1b] = fVar3 * *(float *)(&DAT_00b1843c + param_3);
  param_2[0x1c] = *(float *)(&DAT_00b18440 + param_3) * fVar6;
  param_2[0x1d] = *(float *)(&DAT_00b18444 + param_3) * fVar8;
  param_2[0x1e] = fVar12 * *(float *)(&DAT_00b18448 + param_3);
  param_2[0x1f] = fVar13 * *(float *)(&DAT_00b1844c + param_3);
  param_2[0x20] = fVar14 * *(float *)(&DAT_00b18450 + param_3);
  param_2[0x21] = fVar16 * *(float *)(&DAT_00b18454 + param_3);
  param_2[0x22] = fVar18 * *(float *)(&DAT_00b18458 + param_3);
  param_2[0x23] = fVar19 * *(float *)(&DAT_00b1845c + param_3);
  return;
}



void FUN_006b2a30(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int local_50;
  int local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  
  iVar6 = *(int *)(*in_ECX + 4);
  piVar4 = (int *)(iVar6 + 0x2c + (int)param_1 * 0x48);
  piVar5 = local_48;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar5 = *piVar4;
    piVar4 = piVar4 + 1;
    piVar5 = piVar5 + 1;
  }
  uVar1 = *(undefined4 *)(&DAT_00b16320 + local_48[3] * 4);
  uVar2 = *(undefined4 *)(&DAT_00b16360 + local_48[3] * 4);
  if ((local_38 != 0) && (local_34 == 2)) {
    if (local_30 != 0) {
      piVar4 = in_ECX + 0x100a;
      iVar6 = 8;
      do {
        iVar3 = FUN_006af6f0(*(undefined4 *)(&DAT_00b16320 + local_48[3] * 4));
        *piVar4 = iVar3;
        piVar4 = piVar4 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      param_1 = in_ECX + 0x1024;
      local_50 = 3;
      do {
        iVar6 = 3;
        piVar4 = param_1;
        do {
          iVar3 = FUN_006af6f0(*(undefined4 *)(&DAT_00b16320 + local_48[3] * 4));
          *piVar4 = iVar3;
          piVar4 = piVar4 + 0xd;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        param_1 = param_1 + 1;
        local_50 = local_50 + -1;
      } while (local_50 != 0);
      piVar4 = in_ECX + 0x1027;
      param_1 = (int *)0x6;
      do {
        iVar6 = 3;
        piVar5 = piVar4;
        do {
          iVar3 = FUN_006af6f0(*(undefined4 *)(&DAT_00b16360 + local_48[3] * 4));
          *piVar5 = iVar3;
          piVar5 = piVar5 + 0xd;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        piVar4 = piVar4 + 1;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      in_ECX[0x102d] = 0;
      in_ECX[0x103a] = 0;
      in_ECX[0x1047] = 0;
      return;
    }
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1021] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x102e] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x103b] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1022] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x102f] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x103c] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1023] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1030] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x103d] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1024] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1031] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x103e] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1025] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1032] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x103f] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1026] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1033] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1040] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1027] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1034] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1041] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1028] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1035] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1042] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1029] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1036] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1043] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x102a] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1037] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1044] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x102b] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1038] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1045] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x102c] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1039] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1046] = iVar6;
    in_ECX[0x102d] = 0;
    in_ECX[0x103a] = 0;
    in_ECX[0x1047] = 0;
    return;
  }
  if ((*(int *)(iVar6 + 0x1c) == 0) || (param_1 == (int *)0x0)) {
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100a] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100b] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100c] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100d] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100e] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x100f] = iVar6;
  }
  if ((*(int *)(*(int *)(*in_ECX + 4) + 0x20) == 0) || (param_1 == (int *)0x0)) {
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1010] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1011] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1012] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1013] = iVar6;
    iVar6 = FUN_006af6f0(uVar1);
    in_ECX[0x1014] = iVar6;
  }
  if ((*(int *)(*(int *)(*in_ECX + 4) + 0x24) == 0) || (param_1 == (int *)0x0)) {
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1015] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1016] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1017] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1018] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x1019] = iVar6;
  }
  if ((*(int *)(*(int *)(*in_ECX + 4) + 0x28) == 0) || (param_1 == (int *)0x0)) {
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x101a] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x101b] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x101c] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x101d] = iVar6;
    iVar6 = FUN_006af6f0(uVar2);
    in_ECX[0x101e] = iVar6;
  }
  in_ECX[0x101f] = 0;
  in_ECX[0x1020] = 0;
  return;
}



void FUN_006b2f30(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  int local_50;
  undefined4 local_48 [4];
  int local_38;
  int local_34;
  int local_30;
  int aiStack_20 [5];
  int local_c;
  byte local_8;
  
  puVar7 = (undefined4 *)(*(int *)(*in_ECX + 4) + 0x2c + param_2 * 0x48);
  puVar8 = local_48;
  for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  iVar4 = 0;
  local_50 = 0;
  if ((local_38 == 0) || (local_34 != 2)) {
    iVar5 = *(int *)(&DAT_00b17f5c + in_ECX[0x104e] * 0x94);
  }
  else if (local_30 == 0) {
    local_50 = *(int *)(&DAT_00b17fb8 + in_ECX[0x104e] * 0x94);
    iVar5 = local_50 * 3;
  }
  else {
    iVar5 = *(int *)(&DAT_00b17f5c + in_ECX[0x104e] * 0x94);
  }
  param_2 = 0;
  fVar9 = (float10)FUN_00985b70();
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    piVar6 = in_ECX + 7;
    do {
      if (*piVar6 == 0) {
        *(undefined4 *)(param_1 + iVar2 * 4) = 0;
      }
      else {
        iVar3 = *piVar6;
        if (iVar3 < 1) {
          fVar1 = -(float)fVar9 * *(float *)(&DAT_00b1bc50 + iVar3 * -4);
        }
        else {
          fVar1 = *(float *)(&DAT_00b1bc50 + iVar3 * 4) * (float)fVar9;
        }
        *(float *)(param_1 + iVar2 * 4) = fVar1;
      }
      iVar2 = iVar2 + 1;
      piVar6 = piVar6 + 1;
    } while (iVar2 < in_ECX[4]);
  }
  iVar2 = 0;
  if (0 < in_ECX[4]) {
    do {
      if (iVar2 == iVar5) {
        if ((local_38 == 0) || (local_34 != 2)) {
          iVar3 = in_ECX[0x104e];
LAB_006b310e:
          iVar4 = iVar4 + 1;
          iVar5 = *(int *)(&DAT_00b17f5c + (iVar3 * 0x25 + iVar4) * 4);
        }
        else {
          iVar3 = in_ECX[0x104e];
          if (local_30 == 0) {
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 * 0x25 + iVar4;
            iVar5 = *(int *)(&DAT_00b17fb8 + iVar3 * 4) * 3;
            local_50 = *(int *)(&DAT_00b17fb8 + iVar3 * 4) - *(int *)(&DAT_00b17fb4 + iVar3 * 4);
            param_2 = *(int *)(&DAT_00b17fb4 + iVar3 * 4) * 3;
          }
          else if (iVar2 == *(int *)(&DAT_00b17f78 + iVar3 * 0x94)) {
            iVar5 = *(int *)(&DAT_00b17fc4 + iVar3 * 0x94) * 3;
            local_50 = *(int *)(&DAT_00b17fc4 + iVar3 * 0x94) -
                       *(int *)(&DAT_00b17fc0 + iVar3 * 0x94);
            param_2 = *(int *)(&DAT_00b17fc0 + iVar3 * 0x94) * 3;
            iVar4 = 3;
          }
          else {
            if (iVar2 < *(int *)(&DAT_00b17f78 + iVar3 * 0x94)) goto LAB_006b310e;
            iVar4 = iVar4 + 1;
            iVar3 = iVar3 * 0x25 + iVar4;
            iVar5 = *(int *)(&DAT_00b17fb8 + iVar3 * 4) * 3;
            local_50 = *(int *)(&DAT_00b17fb8 + iVar3 * 4) - *(int *)(&DAT_00b17fb4 + iVar3 * 4);
            param_2 = *(int *)(&DAT_00b17fb4 + iVar3 * 4) * 3;
          }
        }
      }
      if (((local_38 == 0) || (local_34 != 2)) || ((local_30 != 0 && (iVar2 < 0x24)))) {
        iVar3 = in_ECX[iVar4 + 0x100a];
        if (local_c != 0) {
          iVar3 = iVar3 + *(int *)(iVar4 * 4 + 0xb163a0);
        }
        fVar1 = *(float *)(&DAT_00b182d0 + (iVar3 << (local_8 & 0x1f)) * 4);
      }
      else {
        iVar3 = (iVar2 - param_2) / local_50;
        fVar1 = *(float *)(&DAT_00b182d0 +
                          ((in_ECX[iVar3 * 0xd + iVar4 + 0x1021] << (local_8 & 0x1f)) +
                          aiStack_20[iVar3] * 4) * 4);
      }
      iVar3 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      *(float *)(param_1 + -4 + iVar2 * 4) = fVar1 * *(float *)(param_1 + iVar3);
    } while (iVar2 < in_ECX[4]);
  }
  iVar4 = in_ECX[4];
  if (iVar4 < 0x240) {
    puVar7 = (undefined4 *)(param_1 + iVar4 * 4);
    for (iVar5 = 0x240 - iVar4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  return;
}



void FUN_006b31d0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 8));
  }
  return;
}



uint FUN_006b3200(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  
  uVar3 = *(int *)(in_ECX + 0xc) - 1;
  if (*(uint *)(in_ECX + 0x10) < uVar3) {
    do {
      iVar2 = *(int *)(in_ECX + 0x10);
      if ((*(char *)(*(int *)(in_ECX + 8) + iVar2) == -1) &&
         ((cVar1 = *(char *)(*(int *)(in_ECX + 8) + 1 + iVar2), cVar1 == -5 || (cVar1 == -6)))) {
        return CONCAT31((int3)((uint)iVar2 >> 8),1);
      }
      uVar3 = iVar2 + 1;
      *(uint *)(in_ECX + 0x10) = uVar3;
    } while (uVar3 < *(int *)(in_ECX + 0xc) - 1U);
  }
  return uVar3 & 0xffffff00;
}



uint FUN_006b3240(int param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined1 *)(*(int *)(in_ECX + 8) + *(int *)(in_ECX + 0x10));
  uVar3 = *(int *)(in_ECX + 0x14) + param_1;
  bVar2 = (byte)*(int *)(in_ECX + 0x14);
  if ((int)uVar3 < 0x11) {
    uVar4 = (uint)((ushort)(CONCAT11(*puVar1,puVar1[1]) << (bVar2 & 0x1f)) >>
                  (0x10U - (char)param_1 & 0x1f));
  }
  else {
    uVar4 = (uint)((byte)puVar1[2] >> (('\x18' - *(char *)(in_ECX + 0x14)) - (char)param_1 & 0x1fU))
            + ((uint)((ushort)(CONCAT11(*puVar1,puVar1[1]) << (bVar2 & 0x1f)) >> (bVar2 & 0x1f)) <<
              ((char)uVar3 - 0x10U & 0x1f));
  }
  *(uint *)(in_ECX + 0x14) = uVar3;
  if (7 < (int)uVar3) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  }
  if (0xf < (int)uVar3) {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  }
  uVar3 = uVar3 & 0x80000007;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  *(uint *)(in_ECX + 0x14) = uVar3;
  return uVar4;
}



undefined4 FUN_006b32f0(char *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_8;
  undefined4 local_4;
  
  local_8 = DAT_00b163f8;
  iVar3 = *(int *)(param_1 + 0x20);
  uVar4 = 0;
  local_4 = 1;
  if (iVar3 == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *param_3 = 0;
    *param_2 = 0;
    return 0;
  }
  do {
    if (*(char *)(iVar3 + uVar4 * 2) == '\0') {
      *param_2 = (uint)(*(byte *)(*(int *)(param_1 + 0x20) + 1 + uVar4 * 2) >> 4);
      *param_3 = *(byte *)(*(int *)(param_1 + 0x20) + 1 + uVar4 * 2) & 0xf;
      local_4 = 0;
      break;
    }
    iVar2 = FUN_006af750();
    iVar3 = *(int *)(param_1 + 0x20);
    if (iVar2 == 0) {
      bVar1 = *(byte *)(iVar3 + uVar4 * 2);
      while (0xf9 < bVar1) {
        uVar4 = uVar4 + bVar1;
        bVar1 = *(byte *)(iVar3 + uVar4 * 2);
      }
      bVar1 = *(byte *)(iVar3 + uVar4 * 2);
    }
    else {
      bVar1 = *(byte *)(iVar3 + 1 + uVar4 * 2);
      while (0xf9 < bVar1) {
        uVar4 = uVar4 + bVar1;
        bVar1 = *(byte *)(iVar3 + 1 + uVar4 * 2);
      }
      bVar1 = *(byte *)(iVar3 + 1 + uVar4 * 2);
    }
    uVar4 = uVar4 + bVar1;
    local_8 = local_8 >> 1;
  } while ((local_8 != 0) || (uVar4 < DAT_00b17a2c));
  if ((*param_1 == '3') && ((param_1[1] == '2' || (param_1[1] == '3')))) {
    *param_4 = (int)*param_3 >> 3 & 1;
    *param_5 = (int)*param_3 >> 2 & 1;
    *param_2 = (int)*param_3 >> 1 & 1;
    *param_3 = *param_3 & 1;
    if ((*param_4 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_4 = -*param_4;
    }
    if ((*param_5 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_5 = -*param_5;
    }
    if ((*param_2 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_2 = -*param_2;
    }
    if ((*param_3 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_3 = -*param_3;
      return local_4;
    }
  }
  else {
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 4) - 1U == *param_2)) {
      iVar3 = FUN_006af6f0(*(int *)(param_1 + 0xc));
      *param_2 = *param_2 + iVar3;
    }
    if ((*param_2 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_2 = -*param_2;
    }
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 8) - 1U == *param_3)) {
      iVar3 = FUN_006af6f0(*(int *)(param_1 + 0xc));
      *param_3 = *param_3 + iVar3;
    }
    if ((*param_3 != 0) && (iVar3 = FUN_006af750(), iVar3 != 0)) {
      *param_3 = -*param_3;
    }
  }
  return local_4;
}



void FUN_006b3500(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  if (iVar1 != 0) {
    FUN_006af6d0();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 != 0) {
    FUN_00732a20();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}



void FUN_006b3560(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint local_1c;
  int local_18;
  int local_14;
  int local_10;
  undefined *local_c;
  int local_8;
  int local_4;
  
  iVar3 = *in_ECX;
  param_1 = param_1 * 0x48;
  iVar4 = in_ECX[0x104a] + *(int *)(*(int *)(iVar3 + 4) + 0x2c + param_1);
  if ((*(int *)(*(int *)(iVar3 + 4) + param_1 + 0x3c) == 0) ||
     (*(int *)(*(int *)(iVar3 + 4) + 0x40 + param_1) != 2)) {
    local_4 = *(int *)(*(int *)(iVar3 + 4) + 0x60 + param_1);
    local_10 = *(int *)(&DAT_00b17f5c + (local_4 + in_ECX[0x104e] * 0x25) * 4);
    local_c = *(undefined **)
               (&DAT_00b17f60 +
               (*(int *)(*(int *)(iVar3 + 4) + param_1 + 100) + local_4 + in_ECX[0x104e] * 0x25) * 4
               );
  }
  else {
    local_10 = 0x24;
    local_c = (undefined *)0x240;
  }
  iVar5 = 0;
  local_1c = 0;
  if ((*(uint *)(*(int *)(iVar3 + 4) + 0x30 + param_1) & 0x7fffffff) != 0) {
    piVar6 = in_ECX + 7;
    do {
      if ((int)local_1c < local_10) {
        iVar3 = *(int *)(*(int *)(*in_ECX + 4) + 0x48 + param_1);
      }
      else if ((int)local_1c < (int)local_c) {
        iVar3 = *(int *)(*(int *)(*in_ECX + 4) + 0x4c + param_1);
      }
      else {
        iVar3 = *(int *)(*(int *)(*in_ECX + 4) + 0x50 + param_1);
      }
      FUN_006b32f0(&DAT_00b17a08 + iVar3 * 0x28,&local_18,&local_14,&local_8,&local_4,in_ECX[1]);
      *piVar6 = local_18;
      piVar6[1] = local_14;
      local_1c = local_1c + 2;
      iVar5 = iVar5 + 2;
      piVar6 = piVar6 + 2;
    } while (local_1c < (uint)(*(int *)(*(int *)(*in_ECX + 4) + 0x30 + param_1) * 2));
  }
  local_c = &DAT_00b17f08 + *(int *)(*(int *)(*in_ECX + 4) + 0x70 + param_1) * 0x28;
  iVar3 = in_ECX[1];
  iVar2 = *(int *)(iVar3 + 4);
  iVar1 = iVar2 - iVar4;
  if (iVar2 < iVar4) {
    piVar6 = in_ECX + iVar5 + 7;
    do {
      if (0x23f < iVar5) break;
      FUN_006b32f0(local_c,&local_18,&local_14,&local_8,&local_4,iVar3);
      *piVar6 = local_8;
      piVar6[1] = local_4;
      piVar6[2] = local_18;
      piVar6[3] = local_14;
      iVar3 = in_ECX[1];
      in_ECX[6] = in_ECX[6] + local_18 + local_14 + local_8 + local_4;
      iVar2 = *(int *)(iVar3 + 4);
      iVar5 = iVar5 + 4;
      piVar6 = piVar6 + 4;
    } while (iVar2 < iVar4);
    iVar1 = iVar2 - iVar4;
  }
  if (iVar2 != iVar4 && SBORROW4(iVar2,iVar4) == iVar1 < 0) {
    FUN_006af7b0(iVar2 - iVar4);
    iVar5 = iVar5 + -4;
  }
  if (*(int *)(in_ECX[1] + 4) < iVar4) {
    FUN_006af6f0(iVar4 - *(int *)(in_ECX[1] + 4));
  }
  if (iVar5 < 0x240) {
    in_ECX[4] = iVar5;
    piVar6 = in_ECX + iVar5 + 7;
    for (iVar3 = 0x240 - iVar5; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = 0;
      piVar6 = piVar6 + 1;
    }
  }
  else {
    in_ECX[4] = 0x240;
  }
  return;
}



undefined4 FUN_006b3790(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  
  cVar4 = FUN_006b3200();
  if (cVar4 != '\0') {
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
    uVar2 = *(uint *)(in_ECX + 0x10);
    if (uVar2 <= *(uint *)(in_ECX + 0xc)) {
      cVar4 = *(char *)(uVar2 + *(int *)(in_ECX + 8));
      *(uint *)(in_ECX + 0x10) = uVar2 + 1;
      **(uint **)(in_ECX + 4) = (uint)(cVar4 != -5);
      switch((*(byte *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 8)) >> 4) - 1) {
      case 0:
        *(undefined1 *)(*(int *)(in_ECX + 4) + 4) = 0x20;
        break;
      case 1:
        *(undefined1 *)(*(int *)(in_ECX + 4) + 4) = 0x28;
        break;
      case 2:
        *(undefined1 *)(*(int *)(in_ECX + 4) + 4) = 0x30;
        break;
      case 3:
        *(undefined1 *)(*(int *)(in_ECX + 4) + 4) = 0x38;
        break;
      case 4:
        *(undefined1 *)(*(int *)(in_ECX + 4) + 4) = 0x40;
        break;
      default:
        goto switchD_006b37e0_default;
      }
      bVar1 = *(byte *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 8)) >> 2;
      bVar5 = bVar1 & 3;
      if ((bVar1 & 3) == 0) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 8) = 0xac44;
      }
      else if (bVar5 == 1) {
        *(undefined4 *)(*(int *)(in_ECX + 4) + 8) = 48000;
      }
      else {
        if (bVar5 != 2) {
          return 0;
        }
        *(undefined4 *)(*(int *)(in_ECX + 4) + 8) = 32000;
      }
      bVar1 = *(byte *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 8));
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      iVar8 = *(int *)(in_ECX + 4);
      *(uint *)(iVar8 + 0xc) =
           ((uint)*(byte *)(iVar8 + 4) * 0x23280) / *(uint *)(iVar8 + 8) + (uint)((bVar1 & 2) != 0);
      *(int *)(*(int *)(in_ECX + 4) + 0x10) = *(int *)(*(int *)(in_ECX + 4) + 0xc) + -0x15;
      bVar1 = *(byte *)(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 8));
      *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
      if ((bVar1 & 0xc0) != 0xc0) {
        return 0;
      }
      uVar6 = FUN_006b3240(9);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x14) = uVar6;
      uVar6 = FUN_006b3240(5);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x18) = uVar6;
      uVar6 = FUN_006b3240(1);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x1c) = uVar6;
      uVar6 = FUN_006b3240(1);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x20) = uVar6;
      uVar6 = FUN_006b3240(1);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x24) = uVar6;
      uVar6 = FUN_006b3240(1);
      *(undefined4 *)(*(int *)(in_ECX + 4) + 0x28) = uVar6;
      iVar8 = 0;
      do {
        uVar6 = FUN_006b3240(0xc);
        *(undefined4 *)(iVar8 + 0x2c + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(9);
        *(undefined4 *)(iVar8 + 0x30 + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(8);
        *(undefined4 *)(iVar8 + 0x34 + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(4);
        *(undefined4 *)(iVar8 + 0x38 + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(1);
        *(undefined4 *)(iVar8 + 0x3c + *(int *)(in_ECX + 4)) = uVar6;
        if (*(int *)(iVar8 + 0x3c + *(int *)(in_ECX + 4)) == 0) {
          uVar6 = FUN_006b3240(5);
          *(undefined4 *)(iVar8 + 0x48 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(5);
          *(undefined4 *)(iVar8 + 0x4c + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(5);
          *(undefined4 *)(iVar8 + 0x50 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(4);
          *(undefined4 *)(iVar8 + 0x60 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(3);
          *(undefined4 *)(iVar8 + 100 + *(int *)(in_ECX + 4)) = uVar6;
          *(undefined4 *)(iVar8 + 0x40 + *(int *)(in_ECX + 4)) = 0;
        }
        else {
          uVar6 = FUN_006b3240(2);
          *(undefined4 *)(iVar8 + 0x40 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(1);
          *(undefined4 *)(iVar8 + 0x44 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(5);
          *(undefined4 *)(iVar8 + 0x48 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(5);
          *(undefined4 *)(iVar8 + 0x4c + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(3);
          *(undefined4 *)(iVar8 + 0x54 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(3);
          *(undefined4 *)(iVar8 + 0x58 + *(int *)(in_ECX + 4)) = uVar6;
          uVar6 = FUN_006b3240(3);
          *(undefined4 *)(iVar8 + 0x5c + *(int *)(in_ECX + 4)) = uVar6;
          iVar3 = *(int *)(iVar8 + 0x40 + *(int *)(in_ECX + 4));
          iVar7 = iVar8 + *(int *)(in_ECX + 4);
          if (iVar3 == 0) {
            return 0;
          }
          if ((iVar3 == 2) && (*(int *)(iVar7 + 0x44) == 0)) {
            *(undefined4 *)(iVar7 + 0x60) = 8;
          }
          else {
            *(undefined4 *)(iVar7 + 0x60) = 7;
          }
          iVar7 = *(int *)(in_ECX + 4) + iVar8;
          *(int *)(iVar7 + 100) = 0x14 - *(int *)(iVar7 + 0x60);
        }
        uVar6 = FUN_006b3240(1);
        *(undefined4 *)(iVar8 + 0x68 + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(1);
        *(undefined4 *)(iVar8 + 0x6c + *(int *)(in_ECX + 4)) = uVar6;
        uVar6 = FUN_006b3240(1);
        *(undefined4 *)(iVar8 + 0x70 + *(int *)(in_ECX + 4)) = uVar6;
        iVar8 = iVar8 + 0x48;
      } while (iVar8 < 0x90);
      return 1;
    }
  }
switchD_006b37e0_default:
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006b3ae0(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  int *in_ECX;
  int iVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint local_b8;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  int local_a0;
  int local_98;
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
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
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
  
  if (*(char *)(*in_ECX + 0x18) == '\0') {
    return 0;
  }
  iVar16 = *(int *)(*(int *)(*in_ECX + 4) + 0x10);
  _memset(*(void **)(in_ECX[3] + 4),0,0x900);
  iVar13 = iVar16;
  if (0 < iVar16) {
    do {
      uVar5 = FUN_006b3240(8);
      FUN_006af790(uVar5);
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
  }
  uVar14 = *(uint *)(in_ECX[1] + 4) >> 3;
  uVar6 = *(uint *)(in_ECX[1] + 4) & 7;
  if (uVar6 != 0) {
    FUN_006af6f0(8 - uVar6);
    uVar14 = uVar14 + 1;
  }
  iVar16 = in_ECX[0x1049] + iVar16;
  iVar13 = (in_ECX[0x1049] - *(int *)(*(int *)(*in_ECX + 4) + 0x14)) - uVar14;
  in_ECX[0x1049] = iVar16;
  if (iVar13 < 0) {
    return 0;
  }
  if (0x1000 < uVar14) {
    in_ECX[0x1049] = iVar16 + -0x1000;
    FUN_006af7e0(0x1000);
  }
  for (; 0 < iVar13; iVar13 = iVar13 + -1) {
    FUN_006af6f0(8);
  }
  local_a4 = 0;
  if (0 < in_ECX[0x1048]) {
    piVar2 = in_ECX + 0x48b;
    local_a0 = 0;
    do {
      iVar16 = *(int *)(*in_ECX + 4) + 0x2c + local_a0;
      in_ECX[0x104a] = *(int *)(in_ECX[1] + 4);
      FUN_006b2a30(local_a4);
      FUN_006b3560(local_a4);
      FUN_006b2f30(in_ECX + 0x24b,local_a4);
      iVar13 = 0x20;
      piVar8 = piVar2;
      do {
        iVar10 = 6;
        piVar7 = piVar8;
        do {
          piVar8 = piVar7 + 3;
          iVar10 = iVar10 + -1;
          *piVar7 = piVar7[-0x240];
          piVar7[1] = piVar7[-0x23f];
          piVar7[2] = piVar7[-0x23e];
          piVar7 = piVar8;
        } while (iVar10 != 0);
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if ((*(int *)(iVar16 + 0x10) == 0) || (*(int *)(iVar16 + 0x14) != 2)) {
        iVar13 = 0x40;
        piVar8 = in_ECX + 0x6cc;
        piVar7 = in_ECX + 0x48d;
        do {
          piVar8[-1] = piVar7[-2];
          iVar13 = iVar13 + -1;
          *piVar8 = piVar7[-1];
          piVar8[1] = *piVar7;
          piVar8[2] = piVar7[1];
          piVar8[3] = piVar7[2];
          piVar8[4] = piVar7[3];
          piVar8[5] = piVar7[4];
          piVar8[6] = piVar7[5];
          piVar8[7] = piVar7[6];
          piVar8 = piVar8 + 9;
          piVar7 = piVar7 + 9;
        } while (iVar13 != 0);
      }
      else {
        piVar8 = in_ECX + 0x6cb;
        for (iVar13 = 0x240; iVar13 != 0; iVar13 = iVar13 + -1) {
          *piVar8 = 0;
          piVar8 = piVar8 + 1;
        }
        if (*(int *)(iVar16 + 0x18) == 0) {
          iVar13 = 0;
          piVar8 = in_ECX + 0x6cc;
          do {
            piVar8[-1] = piVar2[*(int *)(&DAT_00b18650 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            *piVar8 = piVar2[*(int *)(&DAT_00b18654 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[1] = piVar2[*(int *)(&DAT_00b18658 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[2] = piVar2[*(int *)(&DAT_00b1865c + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[3] = piVar2[*(int *)(&DAT_00b18660 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[4] = piVar2[*(int *)(&DAT_00b18664 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[5] = piVar2[*(int *)(&DAT_00b18668 + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            piVar8[6] = piVar2[*(int *)(&DAT_00b1866c + (in_ECX[0x104e] * 0x240 + iVar13) * 4)];
            iVar10 = in_ECX[0x104e] * 0x240 + iVar13;
            iVar13 = iVar13 + 9;
            piVar8[7] = piVar2[*(int *)(&DAT_00b18670 + iVar10 * 4)];
            piVar8 = piVar8 + 9;
          } while (iVar13 < 0x240);
        }
        else {
          iVar13 = 4;
          piVar8 = in_ECX + 0x6cc;
          piVar7 = in_ECX + 0x48d;
          do {
            piVar8[-1] = piVar7[-2];
            iVar13 = iVar13 + -1;
            *piVar8 = piVar7[-1];
            piVar8[1] = *piVar7;
            piVar8[2] = piVar7[1];
            piVar8[3] = piVar7[2];
            piVar8[4] = piVar7[3];
            piVar8[5] = piVar7[4];
            piVar8[6] = piVar7[5];
            piVar8[7] = piVar7[6];
            piVar8 = piVar8 + 9;
            piVar7 = piVar7 + 9;
          } while (iVar13 != 0);
          iVar13 = *(int *)(&DAT_00b17fc0 + in_ECX[0x104e] * 0x94);
          local_b8 = *(int *)(&DAT_00b17fc4 + in_ECX[0x104e] * 0x94) - iVar13;
          local_94 = 3;
          do {
            local_b4 = 0;
            local_98 = 0;
            if (3 < (int)local_b8) {
              iVar10 = local_b8 * 4;
              local_b0 = iVar13 * 0xc + 4;
              iVar12 = -(int)piVar2;
              local_98 = ((local_b8 - 4 >> 2) + 1) * 0xc;
              piVar8 = in_ECX + iVar13 * 3 + 0x48c;
              piVar7 = in_ECX + iVar13 * 3 + 0x6cd;
              do {
                piVar7[-2] = piVar8[-1];
                iVar15 = (int)piVar8 + iVar10 + iVar12 + -4;
                piVar7[-1] = *(int *)(iVar15 + (int)piVar2);
                local_b4 = local_b4 + 4;
                *piVar7 = *(int *)((int)piVar2 + iVar15 + iVar10);
                iVar15 = local_b0 + iVar10;
                local_b0 = local_b0 + 0x10;
                piVar7[1] = *piVar8;
                piVar7[2] = *(int *)(iVar15 + (int)piVar2);
                piVar7[3] = *(int *)((int)piVar2 + iVar15 + iVar10);
                iVar15 = (int)piVar8 + iVar10 + iVar12 + 4;
                piVar7[4] = piVar8[1];
                piVar7[5] = *(int *)(iVar15 + (int)piVar2);
                piVar7[6] = *(int *)((int)piVar2 + iVar15 + iVar10);
                iVar15 = (int)piVar8 + iVar10 + iVar12 + 8;
                piVar1 = piVar8 + 2;
                piVar8 = piVar8 + 4;
                piVar7[7] = *piVar1;
                piVar7[8] = *(int *)(iVar15 + (int)piVar2);
                piVar7[9] = *(int *)((int)piVar2 + iVar15 + iVar10);
                piVar7 = piVar7 + 0xc;
              } while (local_b4 < local_b8 - 3);
            }
            if (local_b4 < local_b8) {
              iVar10 = (local_b4 + iVar13 * 3) * 4;
              iVar12 = local_b8 - local_b4;
              piVar8 = in_ECX + local_98 + iVar13 * 3 + 0x6cd;
              do {
                piVar8[-2] = *(int *)(iVar10 + (int)piVar2);
                iVar13 = iVar10 + local_b8 * 4;
                piVar8[-1] = *(int *)(iVar13 + (int)piVar2);
                iVar10 = iVar10 + 4;
                iVar12 = iVar12 + -1;
                *piVar8 = *(int *)(iVar13 + local_b8 * 4 + (int)piVar2);
                piVar8 = piVar8 + 3;
              } while (iVar12 != 0);
            }
            local_94 = local_94 + 1;
            iVar10 = in_ECX[0x104e] * 0x25 + local_94;
            iVar13 = *(int *)(&DAT_00b17fb4 + iVar10 * 4);
            local_b8 = *(int *)(&DAT_00b17fb8 + iVar10 * 4) - iVar13;
          } while (local_94 < 0xd);
        }
      }
      if (*(int *)(iVar16 + 0x10) == 0) {
        if ((*(int *)(iVar16 + 0x18) == 0) && (*(int *)(iVar16 + 0x14) == 2)) {
          return 0;
        }
LAB_006b4010:
        iVar13 = 0x22e;
      }
      else if ((*(int *)(iVar16 + 0x18) == 0) || (iVar13 = 0x12, *(int *)(iVar16 + 0x14) != 2))
      goto LAB_006b4010;
      iVar13 = (iVar13 - 1U) / 0x12 + 1;
      pfVar11 = (float *)(in_ECX + 0x6dd);
      do {
        fVar3 = pfVar11[-1];
        pfVar11[-1] = _DAT_00b18610 * fVar3 - _DAT_00b18630 * *pfVar11;
        *pfVar11 = *pfVar11 * _DAT_00b18610 + _DAT_00b18630 * fVar3;
        fVar3 = pfVar11[-2];
        pfVar11[-2] = _DAT_00b18614 * fVar3 - _DAT_00b18634 * pfVar11[1];
        pfVar11[1] = pfVar11[1] * _DAT_00b18614 + _DAT_00b18634 * fVar3;
        fVar3 = pfVar11[-3];
        pfVar11[-3] = _DAT_00b18618 * fVar3 - _DAT_00b18638 * pfVar11[2];
        pfVar11[2] = pfVar11[2] * _DAT_00b18618 + _DAT_00b18638 * fVar3;
        fVar3 = pfVar11[-4];
        pfVar11[-4] = _DAT_00b1861c * fVar3 - _DAT_00b1863c * pfVar11[3];
        pfVar11[3] = pfVar11[3] * _DAT_00b1861c + _DAT_00b1863c * fVar3;
        fVar3 = pfVar11[-5];
        pfVar11[-5] = _DAT_00b18620 * fVar3 - _DAT_00b18640 * pfVar11[4];
        iVar13 = iVar13 + -1;
        pfVar11[4] = pfVar11[4] * _DAT_00b18620 + _DAT_00b18640 * fVar3;
        fVar3 = pfVar11[-6];
        pfVar11[-6] = _DAT_00b18624 * fVar3 - _DAT_00b18644 * pfVar11[5];
        pfVar11[5] = pfVar11[5] * _DAT_00b18624 + _DAT_00b18644 * fVar3;
        fVar3 = pfVar11[-7];
        pfVar11[-7] = _DAT_00b18628 * fVar3 - _DAT_00b18648 * pfVar11[6];
        pfVar11[6] = pfVar11[6] * _DAT_00b18628 + _DAT_00b18648 * fVar3;
        fVar3 = pfVar11[-8];
        pfVar11[-8] = _DAT_00b1862c * fVar3 - _DAT_00b1864c * pfVar11[7];
        pfVar11[7] = pfVar11[7] * _DAT_00b1862c + _DAT_00b1864c * fVar3;
        pfVar11 = pfVar11 + 0x12;
      } while (iVar13 != 0);
      local_b0 = 0;
      pfVar11 = (float *)(in_ECX + 0x90c);
      do {
        if (((*(int *)(iVar16 + 0x10) == 0) || (*(int *)(iVar16 + 0x18) == 0)) || (0x23 < local_b0))
        {
          uVar5 = *(undefined4 *)(iVar16 + 0x14);
        }
        else {
          uVar5 = 0;
        }
        FUN_006b1ea0(pfVar11 + -0x241,&local_90,uVar5);
        pfVar11[-0x241] = pfVar11[-1] + local_90;
        pfVar11[-1] = local_48;
        pfVar11[-0x240] = *pfVar11 + local_8c;
        *pfVar11 = local_44;
        pfVar11[-0x23f] = pfVar11[1] + local_88;
        pfVar11[1] = local_40;
        pfVar11[-0x23e] = pfVar11[2] + local_84;
        pfVar11[2] = local_3c;
        pfVar11[-0x23d] = pfVar11[3] + local_80;
        pfVar11[3] = local_38;
        pfVar11[-0x23c] = pfVar11[4] + local_7c;
        pfVar11[4] = local_34;
        pfVar11[-0x23b] = pfVar11[5] + local_78;
        pfVar11[5] = local_30;
        pfVar11[-0x23a] = pfVar11[6] + local_74;
        pfVar11[6] = local_2c;
        pfVar11[-0x239] = pfVar11[7] + local_70;
        pfVar11[7] = local_28;
        pfVar11[-0x238] = pfVar11[8] + local_6c;
        pfVar11[8] = local_24;
        pfVar11[-0x237] = pfVar11[9] + local_68;
        pfVar11[9] = local_20;
        pfVar11[-0x236] = pfVar11[10] + local_64;
        pfVar11[10] = local_1c;
        pfVar11[-0x235] = pfVar11[0xb] + local_60;
        pfVar11[0xb] = local_18;
        pfVar11[-0x234] = pfVar11[0xc] + local_5c;
        pfVar11[0xc] = local_14;
        pfVar11[-0x233] = pfVar11[0xd] + local_58;
        pfVar11[0xd] = local_10;
        local_b0 = local_b0 + 0x12;
        pfVar11[-0x232] = pfVar11[0xe] + local_54;
        pfVar11[0xe] = local_c;
        pfVar11[-0x231] = pfVar11[0xf] + local_50;
        pfVar11[0xf] = local_8;
        pfVar11[-0x230] = local_4c + pfVar11[0x10];
        pfVar11[0x10] = local_4;
        pfVar11 = pfVar11 + 0x12;
      } while (local_b0 < 0x240);
      pfVar11 = (float *)(in_ECX + 0x6de);
      iVar16 = 0x10;
      do {
        iVar13 = 9;
        pfVar9 = pfVar11;
        do {
          iVar13 = iVar13 + -1;
          *pfVar9 = -*pfVar9;
          pfVar9 = pfVar9 + 2;
        } while (iVar13 != 0);
        pfVar11 = pfVar11 + 0x24;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
      piVar8 = in_ECX + 0x6cb;
      local_ac = 0x12;
      do {
        iVar16 = 0x1008;
        iVar13 = 0x20;
        piVar7 = piVar8;
        do {
          *(int *)(iVar16 + in_ECX[2]) = *piVar7;
          iVar16 = iVar16 + 4;
          piVar7 = piVar7 + 0x12;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        FUN_006b66a0(in_ECX[3]);
        piVar8 = piVar8 + 1;
        local_ac = local_ac + -1;
      } while (local_ac != 0);
      local_a0 = local_a0 + 0x48;
      local_a4 = local_a4 + 1;
    } while (local_a4 < in_ECX[0x1048]);
  }
  cVar4 = FUN_006b3790();
  if (cVar4 == '\0') {
    *(undefined1 *)(*in_ECX + 0x18) = 0;
    return *(undefined4 *)(in_ECX[3] + 4);
  }
  *(undefined1 *)(*in_ECX + 0x18) = 1;
  return *(undefined4 *)(in_ECX[3] + 4);
}



uint FUN_006b4500(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  undefined4 *puVar4;
  
  piVar1 = (int *)FUN_00431130(param_1,0,0x2800,0x10);
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    puVar4 = (undefined4 *)*piVar1;
    if ((char)piVar1[9] != '\0') {
      iVar2 = (*(code *)puVar4[7])();
      in_ECX[3] = iVar2;
      if (iVar2 != 0) {
        iVar2 = FUN_00401f00(iVar2);
        in_ECX[2] = iVar2;
        param_1 = 1;
        (*(code *)piVar1[1])(piVar1,iVar2,in_ECX[3],&param_1,1);
        (**(code **)*piVar1)(1);
        uVar3 = 0;
        *in_ECX = 0;
        if (in_ECX[3] != 1) {
          do {
            if ((*(char *)(in_ECX[2] + uVar3) == -1) && (*(char *)(in_ECX[2] + 1 + uVar3) == -5)) {
              *in_ECX = *in_ECX + 1;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 < in_ECX[3] - 1U);
        }
        in_ECX[4] = 0;
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
      puVar4 = (undefined4 *)*piVar1;
    }
    uVar3 = (*(code *)*puVar4)(1);
  }
  return uVar3 & 0xffffff00;
}



void FUN_006b45c0(undefined4 param_1)

{
  char cVar1;
  void *_Dst;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  cVar1 = FUN_006b4500(param_1);
  if (cVar1 == '\0') {
    *(undefined1 *)(in_ECX + 0x18) = 0;
    *(undefined4 *)(in_ECX + 4) = 0;
    return;
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  _Dst = (void *)FUN_00401f00(0xd0);
  if (_Dst == (void *)0x0) {
    _Dst = (void *)0x0;
  }
  else {
    _memset(_Dst,0,0xd0);
  }
  *(void **)(in_ECX + 4) = _Dst;
  cVar1 = FUN_006b3790();
  *(bool *)(in_ECX + 0x18) = cVar1 != '\0';
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b4630(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  undefined1 local_24 [12];
  float local_18;
  float local_14;
  char local_10;
  char local_f;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_0088d4e0(param_1);
  if (param_1[7] == 0) {
    local_18 = (float)param_1[6] * 6.99904;
    iVar6 = *param_1;
    for (iVar3 = *(int *)(*param_1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar6 = iVar3;
    }
    iVar3 = param_1[1];
    for (iVar4 = *(int *)(param_1[1] + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc)) {
      iVar3 = iVar4;
    }
    if (_DAT_00b23c50 < local_18 == (_DAT_00b23c50 == local_18)) {
      return;
    }
    if (local_18 < 5.0) {
      return;
    }
    uVar1 = *(uint *)(iVar3 + 0x1c);
    uVar2 = *(uint *)(iVar6 + 0x1c);
    if (((uVar1 ^ uVar2) & 0xffff0000) == 0) {
      bVar7 = ((byte)uVar2 & 0x3f) == 8;
    }
    else if (((byte)uVar2 & 0x3f) == 8) {
      bVar7 = (uVar2 & 0x1f00) == 0x1100;
    }
    else {
      if (((byte)uVar1 & 0x3f) != 8) goto LAB_006b46ed;
      bVar7 = (uVar1 & 0x1f00) == 0x1100;
    }
    if (!bVar7) {
LAB_006b46ed:
      FUN_0043f3e0(local_24,param_1[4]);
      if (param_1[5] == 0) {
        local_14 = 0.3;
      }
      else {
        local_14 = (float)*(ushort *)(param_1[5] + 4) * 0.00390625;
      }
      local_10 = FUN_00536140(*param_1,local_24);
      cVar5 = FUN_00536140(param_1[1],local_24);
      local_8 = 0;
      local_4 = 0;
      local_f = cVar5;
      if ((*(char *)(iVar6 + 0x18) == '\x01') && (iVar6 = FUN_0047de00(iVar6), iVar6 != 0)) {
        local_8 = *(undefined4 *)(iVar6 + 0xc);
      }
      if ((*(char *)(iVar3 + 0x18) == '\x01') && (iVar6 = FUN_0047de00(iVar3), iVar6 != 0)) {
        local_4 = *(undefined4 *)(iVar6 + 0xc);
      }
      local_c = (cVar5 + 1) * (local_10 + 1);
      FUN_006b0c70(local_24);
      return;
    }
  }
  return;
}



void FUN_006b47d0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *puVar2;
  
  puVar1 = in_ECX + 0x200;
  puVar2 = in_ECX + 0x400;
  while (in_ECX < puVar1) {
    puVar2 = puVar2 + -1;
    puVar1 = puVar1 + -1;
    *puVar2 = 0;
    *puVar1 = 0;
  }
  puVar1 = in_ECX + 0x422;
  while (in_ECX + 0x402 < puVar1) {
    puVar1 = puVar1 + -1;
    *puVar1 = 0;
  }
  in_ECX[0x400] = in_ECX;
  in_ECX[0x401] = 0xf;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b4820(void)

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
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  int iVar51;
  int in_ECX;
  
  fVar2 = *(float *)(in_ECX + 0x1084) + *(float *)(in_ECX + 0x1008);
  fVar3 = *(float *)(in_ECX + 0x1080) + *(float *)(in_ECX + 0x100c);
  fVar4 = *(float *)(in_ECX + 0x107c) + *(float *)(in_ECX + 0x1010);
  fVar5 = *(float *)(in_ECX + 0x1078) + *(float *)(in_ECX + 0x1014);
  fVar6 = *(float *)(in_ECX + 0x1074) + *(float *)(in_ECX + 0x1018);
  fVar7 = *(float *)(in_ECX + 0x1070) + *(float *)(in_ECX + 0x101c);
  fVar8 = *(float *)(in_ECX + 0x106c) + *(float *)(in_ECX + 0x1020);
  fVar9 = *(float *)(in_ECX + 0x1068) + *(float *)(in_ECX + 0x1024);
  fVar10 = *(float *)(in_ECX + 0x1064) + *(float *)(in_ECX + 0x1028);
  fVar11 = *(float *)(in_ECX + 0x1060) + *(float *)(in_ECX + 0x102c);
  fVar12 = *(float *)(in_ECX + 0x105c) + *(float *)(in_ECX + 0x1030);
  fVar13 = *(float *)(in_ECX + 0x1058) + *(float *)(in_ECX + 0x1034);
  fVar14 = *(float *)(in_ECX + 0x1054) + *(float *)(in_ECX + 0x1038);
  fVar15 = *(float *)(in_ECX + 0x1050) + *(float *)(in_ECX + 0x103c);
  fVar16 = *(float *)(in_ECX + 0x104c) + *(float *)(in_ECX + 0x1040);
  fVar17 = *(float *)(in_ECX + 0x1048) + *(float *)(in_ECX + 0x1044);
  fVar23 = fVar2 + fVar17;
  fVar24 = fVar3 + fVar16;
  fVar25 = fVar4 + fVar15;
  fVar18 = fVar14 + fVar5;
  fVar19 = fVar13 + fVar6;
  fVar20 = fVar12 + fVar7;
  fVar21 = fVar11 + fVar8;
  fVar22 = fVar10 + fVar9;
  fVar17 = _DAT_00b3c1d0 * (fVar2 - fVar17);
  fVar16 = (fVar3 - fVar16) * _DAT_00b3c1d4;
  fVar15 = (fVar4 - fVar15) * _DAT_00b3c1d8;
  fVar14 = (fVar5 - fVar14) * _DAT_00b3c1dc;
  fVar6 = (fVar6 - fVar13) * _DAT_00b3c1e0;
  fVar7 = (fVar7 - fVar12) * _DAT_00b3c1e4;
  fVar8 = (fVar8 - fVar11) * _DAT_00b3c1e8;
  fVar9 = (fVar9 - fVar10) * _DAT_00b3c1ec;
  fVar10 = fVar23 + fVar22;
  fVar13 = fVar24 + fVar21;
  fVar26 = fVar25 + fVar20;
  fVar2 = fVar19 + fVar18;
  fVar11 = _DAT_00b3c1f0 * (fVar23 - fVar22);
  fVar21 = _DAT_00b3c1f4 * (fVar24 - fVar21);
  fVar20 = _DAT_00b3c1f8 * (fVar25 - fVar20);
  fVar18 = _DAT_00b3c1fc * (fVar18 - fVar19);
  fVar12 = fVar17 + fVar9;
  fVar3 = fVar8 + fVar16;
  fVar4 = fVar7 + fVar15;
  fVar5 = fVar6 + fVar14;
  fVar9 = (fVar17 - fVar9) * _DAT_00b3c1f0;
  fVar8 = (fVar16 - fVar8) * _DAT_00b3c1f4;
  fVar7 = (fVar15 - fVar7) * _DAT_00b3c1f8;
  fVar14 = (fVar14 - fVar6) * _DAT_00b3c1fc;
  fVar31 = fVar10 + fVar2;
  fVar35 = fVar26 + fVar13;
  fVar15 = _DAT_00b3c200 * (fVar10 - fVar2);
  fVar22 = _DAT_00b3c204 * (fVar13 - fVar26);
  fVar19 = fVar18 + fVar11;
  fVar2 = fVar20 + fVar21;
  fVar10 = (fVar11 - fVar18) * _DAT_00b3c200;
  fVar13 = (fVar21 - fVar20) * _DAT_00b3c204;
  fVar17 = fVar5 + fVar12;
  fVar6 = fVar4 + fVar3;
  fVar16 = (fVar12 - fVar5) * _DAT_00b3c200;
  fVar18 = (fVar3 - fVar4) * _DAT_00b3c204;
  fVar11 = fVar14 + fVar9;
  fVar3 = fVar7 + fVar8;
  fVar9 = (fVar9 - fVar14) * _DAT_00b3c200;
  fVar7 = (fVar8 - fVar7) * _DAT_00b3c204;
  fVar39 = _DAT_00b3c208 * (fVar31 - fVar35);
  fVar40 = (fVar15 - fVar22) * _DAT_00b3c208;
  fVar4 = fVar13 + fVar10;
  fVar41 = (fVar10 - fVar13) * _DAT_00b3c208;
  fVar13 = (fVar16 - fVar18) * _DAT_00b3c208;
  fVar5 = fVar3 + fVar11;
  fVar42 = (fVar11 - fVar3) * _DAT_00b3c208;
  fVar3 = fVar7 + fVar9;
  fVar43 = (fVar9 - fVar7) * _DAT_00b3c208;
  fVar7 = fVar41 + (fVar19 - fVar2) * _DAT_00b3c208;
  fVar8 = -fVar7;
  fVar9 = fVar8 - fVar4;
  fVar2 = (-fVar4 - fVar41) - (fVar2 + fVar19);
  fVar4 = fVar43 + fVar13;
  fVar10 = fVar43 + fVar42 + (fVar17 - fVar6) * _DAT_00b3c208;
  fVar11 = -fVar10;
  fVar12 = fVar11 - fVar3;
  fVar3 = -fVar3 - fVar43;
  fVar13 = (fVar3 - (fVar18 + fVar16)) - fVar13;
  fVar14 = fVar13 - fVar42;
  fVar3 = (fVar3 - fVar5) - (fVar6 + fVar17);
  fVar13 = fVar13 - fVar5;
  fVar5 = -fVar40 - (fVar22 + fVar15);
  fVar22 = (*(float *)(in_ECX + 0x1008) - *(float *)(in_ECX + 0x1084)) * _DAT_00b3c190;
  fVar23 = (*(float *)(in_ECX + 0x100c) - *(float *)(in_ECX + 0x1080)) * _DAT_00b3c194;
  fVar24 = (*(float *)(in_ECX + 0x1010) - *(float *)(in_ECX + 0x107c)) * _DAT_00b3c198;
  fVar25 = (*(float *)(in_ECX + 0x1014) - *(float *)(in_ECX + 0x1078)) * _DAT_00b3c19c;
  fVar26 = (*(float *)(in_ECX + 0x1018) - *(float *)(in_ECX + 0x1074)) * _DAT_00b3c1a0;
  fVar27 = (*(float *)(in_ECX + 0x101c) - *(float *)(in_ECX + 0x1070)) * _DAT_00b3c1a4;
  fVar28 = (*(float *)(in_ECX + 0x1020) - *(float *)(in_ECX + 0x106c)) * _DAT_00b3c1a8;
  fVar29 = (*(float *)(in_ECX + 0x1024) - *(float *)(in_ECX + 0x1068)) * _DAT_00b3c1ac;
  fVar30 = (*(float *)(in_ECX + 0x1028) - *(float *)(in_ECX + 0x1064)) * _DAT_00b3c1b0;
  fVar32 = (*(float *)(in_ECX + 0x102c) - *(float *)(in_ECX + 0x1060)) * _DAT_00b3c1b4;
  fVar33 = (*(float *)(in_ECX + 0x1030) - *(float *)(in_ECX + 0x105c)) * _DAT_00b3c1b8;
  fVar34 = (*(float *)(in_ECX + 0x1034) - *(float *)(in_ECX + 0x1058)) * _DAT_00b3c1bc;
  fVar36 = (*(float *)(in_ECX + 0x1038) - *(float *)(in_ECX + 0x1054)) * _DAT_00b3c1c0;
  fVar37 = (*(float *)(in_ECX + 0x103c) - *(float *)(in_ECX + 0x1050)) * _DAT_00b3c1c4;
  fVar38 = (*(float *)(in_ECX + 0x1040) - *(float *)(in_ECX + 0x104c)) * _DAT_00b3c1c8;
  fVar44 = (*(float *)(in_ECX + 0x1044) - *(float *)(in_ECX + 0x1048)) * _DAT_00b3c1cc;
  fVar6 = fVar44 + fVar22;
  fVar15 = fVar38 + fVar23;
  fVar16 = fVar37 + fVar24;
  fVar17 = fVar36 + fVar25;
  fVar18 = fVar34 + fVar26;
  fVar19 = fVar33 + fVar27;
  fVar20 = fVar32 + fVar28;
  fVar21 = fVar30 + fVar29;
  fVar44 = (fVar22 - fVar44) * _DAT_00b3c1d0;
  fVar38 = (fVar23 - fVar38) * _DAT_00b3c1d4;
  fVar37 = (fVar24 - fVar37) * _DAT_00b3c1d8;
  fVar36 = (fVar25 - fVar36) * _DAT_00b3c1dc;
  fVar34 = (fVar26 - fVar34) * _DAT_00b3c1e0;
  fVar27 = (fVar27 - fVar33) * _DAT_00b3c1e4;
  fVar28 = (fVar28 - fVar32) * _DAT_00b3c1e8;
  fVar29 = (fVar29 - fVar30) * _DAT_00b3c1ec;
  fVar22 = fVar21 + fVar6;
  fVar23 = fVar20 + fVar15;
  fVar24 = fVar19 + fVar16;
  fVar25 = fVar18 + fVar17;
  fVar21 = (fVar6 - fVar21) * _DAT_00b3c1f0;
  fVar20 = (fVar15 - fVar20) * _DAT_00b3c1f4;
  fVar26 = (fVar16 - fVar19) * _DAT_00b3c1f8;
  fVar30 = (fVar17 - fVar18) * _DAT_00b3c1fc;
  fVar6 = fVar29 + fVar44;
  fVar15 = fVar28 + fVar38;
  fVar16 = fVar27 + fVar37;
  fVar17 = fVar34 + fVar36;
  fVar18 = (fVar44 - fVar29) * _DAT_00b3c1f0;
  fVar19 = (fVar38 - fVar28) * _DAT_00b3c1f4;
  fVar27 = (fVar37 - fVar27) * _DAT_00b3c1f8;
  fVar28 = (fVar36 - fVar34) * _DAT_00b3c1fc;
  fVar34 = fVar22 + fVar25;
  fVar38 = fVar24 + fVar23;
  fVar22 = _DAT_00b3c200 * (fVar22 - fVar25);
  fVar24 = (fVar23 - fVar24) * _DAT_00b3c204;
  fVar33 = fVar21 + fVar30;
  fVar37 = fVar26 + fVar20;
  fVar23 = _DAT_00b3c200 * (fVar21 - fVar30);
  fVar25 = (fVar20 - fVar26) * _DAT_00b3c204;
  fVar32 = fVar6 + fVar17;
  fVar36 = fVar16 + fVar15;
  fVar20 = _DAT_00b3c200 * (fVar6 - fVar17);
  fVar26 = (fVar15 - fVar16) * _DAT_00b3c204;
  fVar15 = fVar18 + fVar28;
  fVar17 = fVar27 + fVar19;
  fVar6 = (fVar18 - fVar28) * _DAT_00b3c200;
  fVar16 = _DAT_00b3c204 * (fVar19 - fVar27);
  fVar50 = fVar22 + fVar24;
  fVar21 = (fVar22 - fVar24) * _DAT_00b3c208;
  fVar22 = (fVar33 - fVar37) * _DAT_00b3c208;
  fVar49 = fVar23 + fVar25;
  fVar23 = (fVar23 - fVar25) * _DAT_00b3c208;
  fVar44 = (fVar20 - fVar26) * _DAT_00b3c208;
  fVar48 = fVar15 + fVar17;
  fVar45 = (fVar15 - fVar17) * _DAT_00b3c208;
  fVar47 = fVar6 + fVar16;
  fVar46 = (fVar6 - fVar16) * _DAT_00b3c208;
  fVar25 = fVar23 + fVar46;
  fVar17 = fVar44 + fVar25;
  fVar27 = fVar45 + fVar17 + fVar22;
  fVar16 = fVar46 + fVar44 + fVar21;
  fVar6 = fVar46 + fVar45 + (fVar32 - fVar36) * _DAT_00b3c208;
  fVar28 = fVar6 + (fVar34 - fVar38) * _DAT_00b3c208;
  fVar29 = -fVar28;
  fVar19 = fVar29 - fVar47;
  fVar24 = fVar6 + fVar22 + fVar23;
  fVar30 = -fVar24;
  fVar18 = (fVar30 - fVar49) - fVar47;
  fVar15 = ((-(fVar20 + fVar26) - fVar44) - fVar47) - fVar46;
  fVar6 = fVar15 - fVar45;
  fVar26 = (fVar6 - fVar50) - fVar21;
  fVar22 = ((fVar6 - fVar22) - fVar49) - fVar23;
  fVar15 = fVar15 - fVar48;
  fVar21 = (fVar15 - fVar50) - fVar21;
  fVar23 = fVar49 + fVar33 + fVar37 + fVar23;
  pfVar1 = (float *)(*(int *)(in_ECX + 0x1000) + *(int *)(in_ECX + 0x1004) * 4);
  fVar15 = fVar15 - fVar23;
  fVar6 = ((-(fVar32 + fVar36) - fVar48) - fVar47) - fVar46;
  fVar20 = fVar6 - (fVar34 + fVar38);
  fVar6 = fVar6 - fVar23;
  *pfVar1 = fVar39;
  pfVar1[0x10] = fVar28;
  pfVar1[0x20] = fVar10;
  pfVar1[0x30] = fVar24;
  pfVar1[0x40] = fVar7;
  pfVar1[0x50] = fVar27;
  pfVar1[0x60] = fVar4 + fVar42;
  pfVar1[0x70] = fVar16 + fVar45;
  pfVar1[0x80] = fVar40;
  pfVar1[0x90] = fVar16;
  pfVar1[0xa0] = fVar4;
  pfVar1[0xb0] = fVar17;
  pfVar1[0xc0] = fVar41;
  pfVar1[0xd0] = fVar25;
  pfVar1[0xe0] = fVar43;
  pfVar1[0xf0] = fVar46;
  pfVar1[0x100] = 0.0;
  pfVar1[0x110] = -fVar46;
  pfVar1[0x120] = -fVar43;
  pfVar1[0x130] = -fVar25;
  pfVar1[0x140] = -fVar41;
  pfVar1[0x150] = -fVar17;
  pfVar1[0x160] = -fVar4;
  pfVar1[0x170] = -fVar16;
  pfVar1[0x180] = -fVar40;
  pfVar1[400] = -(fVar16 + fVar45);
  pfVar1[0x1a0] = -(fVar4 + fVar42);
  pfVar1[0x1b0] = -fVar27;
  pfVar1[0x1c0] = fVar8;
  pfVar1[0x1d0] = fVar30;
  pfVar1[0x1e0] = fVar11;
  pfVar1[0x1f0] = fVar29;
  iVar51 = in_ECX + 0x800;
  if (*(int *)(in_ECX + 0x1000) != in_ECX) {
    iVar51 = in_ECX;
  }
  pfVar1 = (float *)(iVar51 + *(int *)(in_ECX + 0x1004) * 4);
  *pfVar1 = -fVar39;
  pfVar1[0x10] = fVar19;
  pfVar1[0x20] = fVar12;
  pfVar1[0x30] = fVar18;
  pfVar1[0x40] = fVar9;
  pfVar1[0x50] = fVar22;
  pfVar1[0x60] = fVar14;
  pfVar1[0x70] = fVar26;
  pfVar1[0x80] = fVar5;
  pfVar1[0x90] = fVar21;
  pfVar1[0xa0] = fVar13;
  pfVar1[0xb0] = fVar15;
  pfVar1[0xc0] = fVar2;
  pfVar1[0xd0] = fVar6;
  pfVar1[0xe0] = fVar3;
  pfVar1[0xf0] = fVar20;
  pfVar1[0x100] = -(fVar35 + fVar31);
  pfVar1[0x110] = fVar20;
  pfVar1[0x120] = fVar3;
  pfVar1[0x130] = fVar6;
  pfVar1[0x140] = fVar2;
  pfVar1[0x150] = fVar15;
  pfVar1[0x160] = fVar13;
  pfVar1[0x170] = fVar21;
  pfVar1[0x180] = fVar5;
  pfVar1[400] = fVar26;
  pfVar1[0x1a0] = fVar14;
  pfVar1[0x1b0] = fVar22;
  pfVar1[0x1c0] = fVar9;
  pfVar1[0x1d0] = fVar18;
  pfVar1[0x1e0] = fVar12;
  pfVar1[0x1f0] = fVar19;
  return;
}



void FUN_006b57c0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401f00(0x900);
  in_ECX[1] = uVar1;
  *in_ECX = 0;
  return;
}



int FUN_006b57e0(float param_1)

{
  short sVar1;
  
  if (32767.0 < param_1) {
    return 0x7fff;
  }
  if (param_1 < -32768.0) {
    return -0x8000;
  }
  sVar1 = FUN_009828c0();
  return (int)sVar1;
}



undefined4 FUN_006b5820(undefined4 param_1)

{
  int in_ECX;
  undefined4 extraout_ECX;
  
  *(undefined4 *)(in_ECX + 0x108c) = param_1;
  FUN_006b47d0();
  return extraout_ECX;
}



int FUN_006b5840(int *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int in_ECX;
  float *pfVar4;
  float *pfVar5;
  
  piVar1 = param_1;
  iVar3 = *(int *)(in_ECX + 0x1004);
  pfVar5 = *(float **)(in_ECX + 0x1000);
  switch(iVar3) {
  case 0:
    pfVar4 = (float *)&DAT_00a77c20;
    param_1 = (int *)0x20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[1] +
                           pfVar4[0xc] * pfVar5[2] +
                           pfVar4[0xb] * pfVar5[3] +
                           pfVar4[10] * pfVar5[4] +
                           pfVar4[9] * pfVar5[5] +
                           pfVar4[8] * pfVar5[6] +
                           pfVar4[7] * pfVar5[7] +
                           pfVar4[6] * pfVar5[8] +
                           pfVar4[5] * pfVar5[9] +
                           pfVar4[4] * pfVar5[10] +
                           pfVar4[3] * pfVar5[0xb] +
                           pfVar4[2] * pfVar5[0xc] +
                           pfVar4[1] * pfVar5[0xd] +
                           pfVar5[0xe] * *pfVar4 + pfVar4[-2] * *pfVar5 + pfVar4[-1] * pfVar5[0xf])
                           * *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 1:
    pfVar4 = (float *)&DAT_00a77c20;
    param_1 = (int *)0x20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[2] +
                           pfVar4[0xc] * pfVar5[3] +
                           pfVar4[0xb] * pfVar5[4] +
                           pfVar4[10] * pfVar5[5] +
                           pfVar4[9] * pfVar5[6] +
                           pfVar4[8] * pfVar5[7] +
                           pfVar4[7] * pfVar5[8] +
                           pfVar4[6] * pfVar5[9] +
                           pfVar4[5] * pfVar5[10] +
                           pfVar4[4] * pfVar5[0xb] +
                           pfVar4[3] * pfVar5[0xc] +
                           pfVar4[2] * pfVar5[0xd] +
                           pfVar4[1] * pfVar5[0xe] +
                           pfVar5[0xf] * *pfVar4 + pfVar4[-1] * *pfVar5 + pfVar4[-2] * pfVar5[1]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 2:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[3] +
                           pfVar4[0xc] * pfVar5[4] +
                           pfVar4[0xb] * pfVar5[5] +
                           pfVar4[10] * pfVar5[6] +
                           pfVar4[9] * pfVar5[7] +
                           pfVar4[8] * pfVar5[8] +
                           pfVar4[7] * pfVar5[9] +
                           pfVar4[6] * pfVar5[10] +
                           pfVar4[5] * pfVar5[0xb] +
                           pfVar4[4] * pfVar5[0xc] +
                           pfVar4[3] * pfVar5[0xd] +
                           pfVar4[2] * pfVar5[0xe] +
                           pfVar4[1] * pfVar5[0xf] +
                           *pfVar5 * *pfVar4 + pfVar4[-1] * pfVar5[1] + pfVar4[-2] * pfVar5[2]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 3:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[4] +
                           pfVar4[0xc] * pfVar5[5] +
                           pfVar4[0xb] * pfVar5[6] +
                           pfVar4[10] * pfVar5[7] +
                           pfVar4[9] * pfVar5[8] +
                           pfVar4[8] * pfVar5[9] +
                           pfVar4[7] * pfVar5[10] +
                           pfVar4[6] * pfVar5[0xb] +
                           pfVar4[5] * pfVar5[0xc] +
                           pfVar4[4] * pfVar5[0xd] +
                           pfVar4[3] * pfVar5[0xe] +
                           pfVar4[2] * pfVar5[0xf] +
                           pfVar4[1] * *pfVar5 +
                           pfVar5[1] * *pfVar4 + pfVar4[-1] * pfVar5[2] + pfVar4[-2] * pfVar5[3]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 4:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[5] +
                           pfVar4[0xc] * pfVar5[6] +
                           pfVar4[0xb] * pfVar5[7] +
                           pfVar4[10] * pfVar5[8] +
                           pfVar4[9] * pfVar5[9] +
                           pfVar4[8] * pfVar5[10] +
                           pfVar4[7] * pfVar5[0xb] +
                           pfVar4[6] * pfVar5[0xc] +
                           pfVar4[5] * pfVar5[0xd] +
                           pfVar4[4] * pfVar5[0xe] +
                           pfVar4[3] * pfVar5[0xf] +
                           pfVar4[2] * *pfVar5 +
                           pfVar4[1] * pfVar5[1] +
                           pfVar5[2] * *pfVar4 + pfVar4[-1] * pfVar5[3] + pfVar4[-2] * pfVar5[4]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 5:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[6] +
                           pfVar4[0xc] * pfVar5[7] +
                           pfVar4[0xb] * pfVar5[8] +
                           pfVar4[10] * pfVar5[9] +
                           pfVar4[9] * pfVar5[10] +
                           pfVar4[8] * pfVar5[0xb] +
                           pfVar4[7] * pfVar5[0xc] +
                           pfVar4[6] * pfVar5[0xd] +
                           pfVar4[5] * pfVar5[0xe] +
                           pfVar4[4] * pfVar5[0xf] +
                           pfVar4[3] * *pfVar5 +
                           pfVar4[2] * pfVar5[1] +
                           pfVar4[1] * pfVar5[2] +
                           pfVar5[3] * *pfVar4 + pfVar4[-1] * pfVar5[4] + pfVar4[-2] * pfVar5[5]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 6:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[7] +
                           pfVar4[0xc] * pfVar5[8] +
                           pfVar4[0xb] * pfVar5[9] +
                           pfVar4[10] * pfVar5[10] +
                           pfVar4[9] * pfVar5[0xb] +
                           pfVar4[8] * pfVar5[0xc] +
                           pfVar4[7] * pfVar5[0xd] +
                           pfVar4[6] * pfVar5[0xe] +
                           pfVar4[5] * pfVar5[0xf] +
                           pfVar4[4] * *pfVar5 +
                           pfVar4[3] * pfVar5[1] +
                           pfVar4[2] * pfVar5[2] +
                           pfVar4[1] * pfVar5[3] +
                           pfVar5[4] * *pfVar4 + pfVar4[-1] * pfVar5[5] + pfVar4[-2] * pfVar5[6]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 7:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[8] +
                           pfVar4[0xc] * pfVar5[9] +
                           pfVar4[0xb] * pfVar5[10] +
                           pfVar4[10] * pfVar5[0xb] +
                           pfVar4[9] * pfVar5[0xc] +
                           pfVar4[8] * pfVar5[0xd] +
                           pfVar4[7] * pfVar5[0xe] +
                           pfVar4[6] * pfVar5[0xf] +
                           pfVar4[5] * *pfVar5 +
                           pfVar4[4] * pfVar5[1] +
                           pfVar4[3] * pfVar5[2] +
                           pfVar4[2] * pfVar5[3] +
                           pfVar4[1] * pfVar5[4] +
                           pfVar5[5] * *pfVar4 + pfVar4[-1] * pfVar5[6] + pfVar4[-2] * pfVar5[7]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 8:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[9] +
                           pfVar4[0xc] * pfVar5[10] +
                           pfVar4[0xb] * pfVar5[0xb] +
                           pfVar4[10] * pfVar5[0xc] +
                           pfVar4[9] * pfVar5[0xd] +
                           pfVar4[8] * pfVar5[0xe] +
                           pfVar4[7] * pfVar5[0xf] +
                           pfVar4[6] * *pfVar5 +
                           pfVar4[5] * pfVar5[1] +
                           pfVar4[4] * pfVar5[2] +
                           pfVar4[3] * pfVar5[3] +
                           pfVar4[2] * pfVar5[4] +
                           pfVar4[1] * pfVar5[5] +
                           pfVar5[6] * *pfVar4 + pfVar4[-1] * pfVar5[7] + pfVar4[-2] * pfVar5[8]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 9:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[10] +
                           pfVar4[0xc] * pfVar5[0xb] +
                           pfVar4[0xb] * pfVar5[0xc] +
                           pfVar4[10] * pfVar5[0xd] +
                           pfVar4[9] * pfVar5[0xe] +
                           pfVar4[8] * pfVar5[0xf] +
                           pfVar4[7] * *pfVar5 +
                           pfVar4[6] * pfVar5[1] +
                           pfVar4[5] * pfVar5[2] +
                           pfVar4[4] * pfVar5[3] +
                           pfVar4[3] * pfVar5[4] +
                           pfVar4[2] * pfVar5[5] +
                           pfVar4[1] * pfVar5[6] +
                           pfVar5[7] * *pfVar4 + pfVar4[-1] * pfVar5[8] + pfVar4[-2] * pfVar5[9]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 10:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[0xb] +
                           pfVar4[0xc] * pfVar5[0xc] +
                           pfVar4[0xb] * pfVar5[0xd] +
                           pfVar4[10] * pfVar5[0xe] +
                           pfVar4[9] * pfVar5[0xf] +
                           pfVar4[8] * *pfVar5 +
                           pfVar4[7] * pfVar5[1] +
                           pfVar4[6] * pfVar5[2] +
                           pfVar4[5] * pfVar5[3] +
                           pfVar4[4] * pfVar5[4] +
                           pfVar4[3] * pfVar5[5] +
                           pfVar4[2] * pfVar5[6] +
                           pfVar4[1] * pfVar5[7] +
                           pfVar5[8] * *pfVar4 + pfVar4[-1] * pfVar5[9] + pfVar4[-2] * pfVar5[10]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 0xb:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[0xc] +
                           pfVar4[0xc] * pfVar5[0xd] +
                           pfVar4[0xb] * pfVar5[0xe] +
                           pfVar4[10] * pfVar5[0xf] +
                           pfVar4[9] * *pfVar5 +
                           pfVar4[8] * pfVar5[1] +
                           pfVar4[7] * pfVar5[2] +
                           pfVar4[6] * pfVar5[3] +
                           pfVar4[5] * pfVar5[4] +
                           pfVar4[4] * pfVar5[5] +
                           pfVar4[3] * pfVar5[6] +
                           pfVar4[2] * pfVar5[7] +
                           pfVar4[1] * pfVar5[8] +
                           pfVar5[9] * *pfVar4 + pfVar4[-1] * pfVar5[10] + pfVar4[-2] * pfVar5[0xb])
                           * *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 0xc:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[0xd] +
                           pfVar4[0xc] * pfVar5[0xe] +
                           pfVar4[0xb] * pfVar5[0xf] +
                           pfVar4[10] * *pfVar5 +
                           pfVar4[9] * pfVar5[1] +
                           pfVar4[8] * pfVar5[2] +
                           pfVar4[7] * pfVar5[3] +
                           pfVar4[6] * pfVar5[4] +
                           pfVar4[5] * pfVar5[5] +
                           pfVar4[4] * pfVar5[6] +
                           pfVar4[3] * pfVar5[7] +
                           pfVar4[2] * pfVar5[8] +
                           pfVar4[1] * pfVar5[9] +
                           pfVar5[10] * *pfVar4 +
                           pfVar4[-1] * pfVar5[0xb] + pfVar4[-2] * pfVar5[0xc]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 0xd:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[0xe] +
                           pfVar4[0xc] * pfVar5[0xf] +
                           pfVar4[0xb] * *pfVar5 +
                           pfVar4[10] * pfVar5[1] +
                           pfVar4[9] * pfVar5[2] +
                           pfVar4[8] * pfVar5[3] +
                           pfVar4[7] * pfVar5[4] +
                           pfVar4[6] * pfVar5[5] +
                           pfVar4[5] * pfVar5[6] +
                           pfVar4[4] * pfVar5[7] +
                           pfVar4[3] * pfVar5[8] +
                           pfVar4[2] * pfVar5[9] +
                           pfVar4[1] * pfVar5[10] +
                           pfVar5[0xb] * *pfVar4 +
                           pfVar4[-1] * pfVar5[0xc] + pfVar4[-2] * pfVar5[0xd]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 0xe:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * pfVar5[0xf] +
                           pfVar4[0xc] * *pfVar5 +
                           pfVar4[0xb] * pfVar5[1] +
                           pfVar4[10] * pfVar5[2] +
                           pfVar4[9] * pfVar5[3] +
                           pfVar4[8] * pfVar5[4] +
                           pfVar4[7] * pfVar5[5] +
                           pfVar4[6] * pfVar5[6] +
                           pfVar4[5] * pfVar5[7] +
                           pfVar4[4] * pfVar5[8] +
                           pfVar4[3] * pfVar5[9] +
                           pfVar4[2] * pfVar5[10] +
                           pfVar4[1] * pfVar5[0xb] +
                           pfVar5[0xc] * *pfVar4 +
                           pfVar4[-1] * pfVar5[0xd] + pfVar4[-2] * pfVar5[0xe]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = *piVar1;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (iVar3 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
    return (iVar3 + 1) / 0x480;
  case 0xf:
    param_1 = (int *)0x20;
    pfVar4 = (float *)&DAT_00a77c20;
    do {
      uVar2 = FUN_006b57e0((pfVar4[0xd] * *pfVar5 +
                           pfVar4[0xc] * pfVar5[1] +
                           pfVar4[0xb] * pfVar5[2] +
                           pfVar4[10] * pfVar5[3] +
                           pfVar4[9] * pfVar5[4] +
                           pfVar4[8] * pfVar5[5] +
                           pfVar4[7] * pfVar5[6] +
                           pfVar4[6] * pfVar5[7] +
                           pfVar4[5] * pfVar5[8] +
                           pfVar4[4] * pfVar5[9] +
                           pfVar4[3] * pfVar5[10] +
                           pfVar4[2] * pfVar5[0xb] +
                           pfVar4[1] * pfVar5[0xc] +
                           pfVar5[0xd] * *pfVar4 +
                           pfVar4[-1] * pfVar5[0xe] + pfVar4[-2] * pfVar5[0xf]) *
                           *(float *)(in_ECX + 0x108c));
      *(undefined2 *)(piVar1[1] + *piVar1 * 2) = uVar2;
      iVar3 = (*piVar1 + 1) / 0x480;
      pfVar4 = pfVar4 + 0x10;
      pfVar5 = pfVar5 + 0x10;
      param_1 = (int *)((int)param_1 + -1);
      *piVar1 = (*piVar1 + 1) % 0x480;
    } while (param_1 != (int *)0x0);
  }
  return iVar3;
}



void FUN_006b66a0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  FUN_006b4820();
  FUN_006b5840(param_1);
  *(uint *)(in_ECX + 0x1004) = *(int *)(in_ECX + 0x1004) + 1U & 0xf;
  iVar1 = in_ECX + 0x800;
  if (*(int *)(in_ECX + 0x1000) != in_ECX) {
    iVar1 = in_ECX;
  }
  *(int *)(in_ECX + 0x1000) = iVar1;
  puVar2 = (undefined4 *)(in_ECX + 0x1088);
  while ((undefined4 *)(in_ECX + 0x1008) < puVar2) {
    puVar2 = puVar2 + -1;
    *puVar2 = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b6700(void)

{
  int iVar1;
  uint *in_ECX;
  
  if ((*in_ECX & 0x4000) != 0) {
    DAT_00b3c20c = DAT_00b3c20c + -1;
  }
  _DAT_00b3c210 = _DAT_00b3c210 + -1;
  if (in_ECX[0x13] != 0) {
    FUN_00401f20(in_ECX[0x13]);
  }
  if (in_ECX[0x14] != 0) {
    do {
      iVar1 = (**(code **)(*(int *)in_ECX[0x14] + 8))((int *)in_ECX[0x14]);
    } while (iVar1 != 0);
    in_ECX[0x14] = 0;
  }
  if (in_ECX[0x15] != 0) {
    do {
      iVar1 = (**(code **)(*(int *)in_ECX[0x15] + 8))((int *)in_ECX[0x15]);
    } while (iVar1 != 0);
    in_ECX[0x15] = 0;
  }
  return;
}



void FUN_006b6770(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x4c));
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00401f00(pcVar2 + (1 - (int)(param_1 + 1)));
  *(char **)(in_ECX + 0x4c) = pcVar2;
  do {
    cVar1 = *param_1;
    *pcVar2 = cVar1;
    param_1 = param_1 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return;
}



undefined4 FUN_006b67d0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x4c);
}



undefined4 FUN_006b67e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x50);
}



int FUN_006b67f0(undefined4 *param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *in_ECX;
  
  if (param_1 == (undefined4 *)0x0) {
    return -0x7fffbffb;
  }
  pbVar1 = in_ECX + 0x50;
  iVar2 = (**(code **)*param_1)(param_1,&DAT_00a78e94,pbVar1);
  if ((*(int *)pbVar1 != 0) && ((*in_ECX & 2) != 0)) {
    iVar2 = (**(code **)**(undefined4 **)pbVar1)(*(undefined4 **)pbVar1,&DAT_00a78e74,in_ECX + 0x54)
    ;
  }
  if (iVar2 < 0) {
    if (iVar2 < -0x7787ffe1) {
      if (iVar2 == -0x7787ffe2) {
        _printf("DSERR_CONTROLUNAVAIL");
        return -0x7787ffe2;
      }
      if (iVar2 < -0x7ff8fff1) {
        if (iVar2 == -0x7ff8fff2) {
          _printf("DSERR_OUTOFMEMORY");
          return -0x7ff8fff2;
        }
        if (iVar2 == -0x7fffbfff) {
          _printf("DSERR_UNSUPPORTED");
          return -0x7fffbfff;
        }
        if (iVar2 == -0x7ffbfef0) {
          _printf("DSERR_NOAGGREGATION");
          return -0x7ffbfef0;
        }
      }
      else {
        if (iVar2 == -0x7ff8ffa9) {
          _printf("DSERR_INVALIDPARAM");
          return -0x7ff8ffa9;
        }
        if (iVar2 == -0x7787fff6) {
          _printf("DSERR_ALLOCATED");
          return -0x7787fff6;
        }
      }
    }
    else {
      switch(iVar2) {
      case -0x7787ffce:
        _printf("DSERR_INVALIDCALL");
        return iVar2;
      case -0x7787ff9c:
        _printf("DSERR_BADFORMAT");
        return iVar2;
      case -0x7787ff56:
        _printf("DSERR_UNINITIALIZED");
        return iVar2;
      case -0x7787ff4c:
        _printf("DSERR_BUFFERTOOSMALL");
        return iVar2;
      case -0x7787ff42:
        _printf("DSERR_DS8_REQUIRED");
        return iVar2;
      }
    }
  }
  else {
    (**(code **)(**(int **)pbVar1 + 0x20))(*(int **)pbVar1,in_ECX + 0x40);
  }
  return iVar2;
}



int FUN_006b6a50(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x30))
                      (*(int **)(in_ECX + 0x50),0,0,param_1 | 8);
    if (iVar1 == -0x7ff8ffa9) {
      iVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x30))
                        (*(int **)(in_ECX + 0x50),0,0,param_1 | 4);
    }
    return iVar1;
  }
  return -0x7fffbffb;
}



undefined4 FUN_006b6aa0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x48))(*(int **)(in_ECX + 0x50));
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b6ac0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x48))(*(int **)(in_ECX + 0x50));
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x34))(*(int **)(in_ECX + 0x50),0);
    return uVar1;
  }
  return 0x80004005;
}



uint FUN_006b6af0(void)

{
  uint in_EAX;
  undefined4 uVar1;
  int in_ECX;
  int *piVar2;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x50) != 0) {
    piVar2 = *(int **)(in_ECX + 0x50);
    uVar1 = (**(code **)(*piVar2 + 0x24))(piVar2,local_4);
    return CONCAT31((int3)((uint)uVar1 >> 8),(char)piVar2) & 0xffffff01;
  }
  return in_EAX & 0xffffff00;
}



undefined4 FUN_006b6b20(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 local_8;
  
  fVar1 = (float)*(int *)(in_ECX + 0x40);
  if (*(int *)(in_ECX + 0x40) < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  local_8 = (int)(longlong)ROUND(fVar1 * param_1);
  if ((local_8 - 100U < 0x30cdd) && (*(int *)(in_ECX + 0x50) != 0)) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x44))(*(int **)(in_ECX + 0x50),local_8);
    return uVar2;
  }
  return 0x80004005;
}



float10 FUN_006b6b90(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  int local_4;
  
  local_4 = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x50) + 0x20))(*(int **)(in_ECX + 0x50),&local_4);
  }
  fVar1 = (float)local_4;
  if (local_4 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  fVar2 = (float)*(int *)(in_ECX + 0x40);
  if (*(int *)(in_ECX + 0x40) < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  return (float10)(fVar1 / fVar2);
}



undefined4 FUN_006b6be0(float param_1,float param_2,float param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint *in_ECX;
  
  if ((*in_ECX & 1) != 0) {
    return 1;
  }
  if ((*in_ECX & 2) != 0) {
    in_ECX[8] = (uint)param_1;
    in_ECX[9] = (uint)param_2;
    in_ECX[10] = (uint)param_3;
    piVar1 = (int *)in_ECX[0x15];
    if (piVar1 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar1 + 0x4c))
                        (piVar1,param_1 / 69.99,param_3 / 69.99,param_2 / 69.99,1);
      return uVar2;
    }
  }
  return 0x80004005;
}



void FUN_006b6c60(float param_1)

{
  int *piVar1;
  uint *in_ECX;
  float fStack_4;
  
  if ((((*in_ECX & 1) == 0) && ((*in_ECX & 2) != 0)) &&
     (piVar1 = (int *)in_ECX[0x15], piVar1 != (int *)0x0)) {
    if (param_1 <= 0.0) {
      (**(code **)(*piVar1 + 0x44))(piVar1,0x3f800000);
    }
    else {
      (**(code **)(*piVar1 + 0x44))(piVar1,param_1 / 69.99);
    }
    piVar1 = (int *)in_ECX[0x15];
    if (0.0 < fStack_4) {
      (**(code **)(*piVar1 + 0x40))(piVar1,fStack_4 / 69.99,0);
      in_ECX[0xe] = 0;
      return;
    }
    (**(code **)(*piVar1 + 0x40))(piVar1,0x4e6e6b28,0);
    in_ECX[0xe] = 1000000000;
  }
  return;
}



void FUN_006b6d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint *in_ECX;
  float unaff_EDI;
  int *piVar1;
  undefined4 uVar2;
  undefined4 uStack_8;
  
  if ((((*in_ECX & 1) == 0) && ((*in_ECX & 2) != 0)) &&
     (piVar1 = (int *)in_ECX[0x15], piVar1 != (int *)0x0)) {
    uVar2 = param_3;
    (**(code **)(*piVar1 + 0x40))();
    (**(code **)(*(int *)in_ECX[0x15] + 0x44))
              ((int *)in_ECX[0x15],uStack_8,param_3,piVar1,param_2,uVar2);
    in_ECX[0xe] = (uint)(longlong)ROUND(unaff_EDI * 69.99);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006b6dc0(undefined4 param_1,uint param_2,uint param_3)

{
  uint *in_ECX;
  
  in_ECX[0x14] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x10] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined2 *)((int)in_ECX + 0x46) = 0;
  *(undefined1 *)((int)in_ECX + 0x4a) = 0;
  *(undefined1 *)((int)in_ECX + 0x4b) = 0;
  in_ECX[0xd] = 0;
  in_ECX[3] = param_2;
  *in_ECX = param_3;
  *(undefined1 *)(in_ECX + 4) = 0xff;
  *(undefined1 *)((int)in_ECX + 0x11) = 2;
  in_ECX[0xe] = 1000000000;
  param_2._0_2_ = (undefined2)(int)ROUND(_DAT_00b23c58 * 100.0);
  *(undefined2 *)(in_ECX + 0x12) = (undefined2)param_2;
  if ((param_3 & 0x4000) != 0) {
    DAT_00b3c20c = DAT_00b3c20c + 1;
  }
  _DAT_00b3c210 = _DAT_00b3c210 + 1;
  in_ECX[0xf] = 0x3f800000;
  return;
}



int FUN_006b6e60(char param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint *in_ECX;
  uint uVar4;
  
  uVar2 = *in_ECX;
  uVar4 = (-(uint)((uVar2 >> 2 & 1) != 0) & 0xfffffffc) + 8;
  piVar1 = (int *)in_ECX[0x14];
  if (piVar1 == (int *)0x0) {
    iVar3 = -0x7fffbffb;
  }
  else if (param_1 == '\0') {
    *in_ECX = uVar2 & 0xffffffef;
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,uVar4);
    if (iVar3 == -0x7ff8ffa9) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 0x30))((int *)in_ECX[0x14],0,0,0);
      return iVar3;
    }
  }
  else {
    *in_ECX = uVar2 | 0x10;
    if (in_ECX[2] != 0) {
      iVar3 = *piVar1;
      uVar2 = FUN_0047df80(0);
      (**(code **)(iVar3 + 0x34))(in_ECX[0x14],uVar2 % in_ECX[2]);
    }
    iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 0x30))((int *)in_ECX[0x14],0,0,uVar4 | 1);
    if (iVar3 == -0x7ff8ffa9) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x14] + 0x30))((int *)in_ECX[0x14],0,0,1);
      return iVar3;
    }
  }
  return iVar3;
}



undefined4 FUN_006b6f20(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x50);
  if (piVar1 == (int *)0x0) {
    return 0x80004005;
  }
  *(undefined4 *)(in_ECX + 0x3c) = param_1;
  FUN_00986cd0();
  iVar2 = FUN_009828c0();
  if (*(char *)(in_ECX + 0x4a) != '\0') {
    uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,0xffffd8f0);
    return uVar3;
  }
  iVar2 = ((iVar2 - (uint)*(ushort *)(in_ECX + 0x48)) - (uint)*(ushort *)(in_ECX + 0x46)) -
          (uint)*(ushort *)(in_ECX + 0x44);
  if (iVar2 < -9999) {
LAB_006b7005:
    uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,0xffffd8f0);
    return uVar3;
  }
  if (iVar2 < 0) {
    if (iVar2 < -9999) goto LAB_006b7005;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = (**(code **)(*piVar1 + 0x3c))(piVar1,iVar2);
  return uVar3;
}



uint FUN_006b7050(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  int in_ECX;
  ushort uVar7;
  
  uVar5 = *(uint *)(DAT_00b333a0 + 0x5c);
  uVar4 = 0;
  if (uVar5 != 0) {
    if (((*(int *)(in_ECX + 0x34) != 0) && (*(int *)(uVar5 + 0x10) != 0)) &&
       ((*(byte *)(*(int *)(uVar5 + 0x10) + 0x53) & (byte)*(int *)(in_ECX + 0x34)) == 0))
    goto LAB_006b7105;
    fVar1 = *(float *)(uVar5 + 0xd0);
    fVar2 = ABS(*(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x2c));
    uVar7 = (ushort)(uVar5 >> 0x10);
    uVar4 = CONCAT22(uVar7,(ushort)(fVar2 < 0.09375) << 8 | (ushort)NAN(fVar2) << 10 |
                           (ushort)(fVar2 == 0.09375) << 0xe);
    if (fVar2 < 0.09375 != 0) goto LAB_006b710e;
    uVar5 = (uint)uVar7 << 0x10;
    if (*(float *)(in_ECX + 0x2c) < *(float *)(in_ECX + 0x30)) {
      fVar2 = *(float *)(in_ECX + 0x2c);
      uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 >= fVar1 && (fVar2 == fVar1) == 0) {
LAB_006b7105:
        return uVar5 & 0xffffff00;
      }
      fVar2 = *(float *)(in_ECX + 0x30);
      uVar5 = CONCAT22(uVar7,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 < fVar1) goto LAB_006b7105;
    }
    fVar2 = *(float *)(in_ECX + 0x2c);
    fVar3 = *(float *)(in_ECX + 0x30);
    uVar7 = (ushort)(fVar3 < fVar2) << 8 | (ushort)(NAN(fVar3) || NAN(fVar2)) << 10 |
            (ushort)(fVar3 == fVar2) << 0xe;
    uVar6 = (undefined2)(uVar5 >> 0x10);
    if (fVar3 < fVar2) {
      fVar2 = *(float *)(in_ECX + 0x2c);
      uVar7 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 < fVar1 == 0 && (fVar2 == fVar1) == 0) {
        fVar2 = *(float *)(in_ECX + 0x30);
        uVar4 = CONCAT22(uVar6,(ushort)(fVar2 < fVar1) << 8 |
                               (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                               (ushort)(fVar2 == fVar1) << 0xe);
        if (fVar2 < fVar1) {
          return uVar4;
        }
        goto LAB_006b710e;
      }
    }
    uVar4 = CONCAT22(uVar6,uVar7);
  }
LAB_006b710e:
  return CONCAT31((int3)(uVar4 >> 8),1);
}



uint FUN_006b7120(void)

{
  uint *in_ECX;
  
  return *in_ECX >> 4 & 1;
}



void FUN_006b7130(char param_1)

{
  int in_ECX;
  
  if (param_1 == '\0') {
    if (*(char *)(in_ECX + 0x4a) == '\0') {
      return;
    }
    *(undefined1 *)(in_ECX + 0x4a) = 0;
    *(undefined2 *)(in_ECX + 0x46) = 0;
  }
  else {
    if (*(char *)(in_ECX + 0x4a) != '\0') {
      return;
    }
    *(undefined1 *)(in_ECX + 0x4a) = 1;
    *(undefined2 *)(in_ECX + 0x46) = 10000;
  }
  FUN_006b6f20(*(undefined4 *)(in_ECX + 0x3c));
  FUN_006b6f20(*(undefined4 *)(in_ECX + 0x3c));
  return;
}



void FUN_006b7180(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}



undefined4 FUN_006b7190(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab540(*in_ECX,param_1);
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b71c0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab6f0(*in_ECX,param_1);
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b71f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006acab0(*in_ECX,param_1,param_2);
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b7220(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab850(*in_ECX);
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b7240(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab890(*in_ECX);
    return uVar1;
  }
  return 0x80004005;
}



uint FUN_006b7260(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab9d0(*in_ECX);
    return uVar1;
  }
  return (uint)in_ECX & 0xffffff00;
}



undefined4 FUN_006b7280(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006aba20(*in_ECX,param_1);
    return uVar1;
  }
  return 0x80004005;
}



undefined4 FUN_006b72b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006aba60(*in_ECX,param_1);
    return uVar1;
  }
  return 0x80004005;
}



float10 FUN_006b72e0(void)

{
  undefined4 *in_ECX;
  float10 fVar1;
  
  if (DAT_00b3c214 != 0) {
    fVar1 = (float10)FUN_006abac0(*in_ECX);
    return (float10)(float)fVar1;
  }
  return (float10)0.0;
}



undefined4 FUN_006b7310(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ab500(*in_ECX,param_1);
    return uVar1;
  }
  return 0x80004005;
}



undefined2 FUN_006b7340(void)

{
  undefined2 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006aca70(*in_ECX);
    return uVar1;
  }
  return 0;
}



undefined4 FUN_006b7360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006acbf0(*in_ECX,param_1,param_2,param_3);
    return uVar1;
  }
  return 0x80004005;
}



uint FUN_006b73a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006aca40(*in_ECX);
    return uVar1;
  }
  return (uint)in_ECX & 0xffffff00;
}



undefined4 FUN_006b73c0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  if (DAT_00b3c214 != 0) {
    uVar1 = FUN_006ac9f0(*in_ECX);
    return uVar1;
  }
  return 0x80004005;
}



void FUN_006b73e0(void)

{
  char cVar1;
  
  if ((DAT_00b33a98 != 0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
    cVar1 = FUN_0057b050();
    if (cVar1 != '\0') {
      FUN_0057af10();
      FUN_0057b0f0(0);
    }
  }
  return;
}



void FUN_006b7410(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[2] = 0;
  return;
}



void FUN_006b7420(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_0052f830(param_1,param_2);
  return;
}



void FUN_006b7450(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_006b81d0();
        FUN_00401f20(iVar1);
      }
      piVar2 = (int *)in_ECX[1];
      if (piVar2 == (int *)0x0) {
        *in_ECX = 0;
      }
      else {
        in_ECX[1] = piVar2[1];
        *in_ECX = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  in_ECX[2] = 0;
  return;
}



bool FUN_006b74b0(void)

{
  int *in_ECX;
  
  in_ECX[2] = (int)in_ECX;
  return *in_ECX != 0;
}



undefined4 FUN_006b74c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 4);
  }
  if ((*(int **)(in_ECX + 8) != (int *)0x0) && (**(int **)(in_ECX + 8) != 0)) {
    return 1;
  }
  return 0;
}



void FUN_006b74f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = in_ECX;
  if (in_ECX != (int *)0x0) {
    while( true ) {
      piVar1 = (int *)piVar2[1];
      if ((piVar1 == (int *)0x0) && (*piVar2 == 0)) {
        return;
      }
      if (param_1 == *piVar2) break;
      piVar2 = piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
    }
    in_ECX[2] = (int)piVar2;
  }
  return;
}



uint FUN_006b7520(int param_1)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = 0;
  while ((in_ECX != (int *)0x0 && (((int *)in_ECX[1] != (int *)0x0 || (*in_ECX != 0))))) {
    if (param_1 == *in_ECX) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    in_ECX = (int *)in_ECX[1];
  }
  uVar1 = FUN_004a7a60(
                      "When trying to get a dialogue item index, the dialogue item was not found in the dialogue items list."
                      );
  return uVar1 & 0xffff0000;
}



int FUN_006b7560(short param_1)

{
  int *in_ECX;
  short sVar1;
  
  sVar1 = 0;
  while ((in_ECX != (int *)0x0 && (((int *)in_ECX[1] != (int *)0x0 || (*in_ECX != 0))))) {
    if (sVar1 == param_1) {
      return *in_ECX;
    }
    sVar1 = sVar1 + 1;
    in_ECX = (int *)in_ECX[1];
  }
  FUN_004a7a60(
              "When trying to get a dialogue item by its index, the index was larger than the size of the dialogue items list."
              );
  return 0;
}



short FUN_006b75b0(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int *in_ECX;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar6 = sVar6 + 2;
  for (; (in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0)))); in_ECX = (int *)in_ECX[1])
  {
    sVar3 = FUN_006b7cf0();
    sVar6 = sVar6 + sVar3;
  }
  sVar6 = sVar6 + 2;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 == (undefined4 *)0x0) {
      FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0xbe,
                   ".\\Dialogue\\Conversation.cpp");
      return sVar6;
    }
    piVar4 = (int *)FUN_0046b250(*puVar1);
    uVar5 = (**(code **)(*piVar4 + 0xd4))
                      (*(undefined4 *)((int)puVar1 + 5),0xbe,".\\Dialogue\\Conversation.cpp");
    FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                 ,sVar6,*puVar1,uVar5);
    return sVar6;
  }
  return sVar6;
}



void FUN_006b7690(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  int local_18;
  int local_14;
  uint local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_14 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_18 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_18,2);
  for (piVar7 = in_ECX; (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0))));
      piVar7 = (int *)piVar7[1]) {
    FUN_006b7d30();
    local_18 = local_18 + 1;
  }
  *puVar1 = (undefined2)local_18;
  local_10 = 0xffffffff;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    local_10 = FUN_006b7520(*(undefined4 *)in_ECX[2]);
    local_10 = local_10 & 0xffff;
  }
  FUN_0045b9a0(&local_10,2);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_14,0xdf,
                   ".\\Dialogue\\Conversation.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0xdf,".\\Dialogue\\Conversation.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_14,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\Dialogue\\Conversation.cpp",0xdf);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_006b7840(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar11;
  ushort local_28 [2];
  uint local_24;
  int local_20;
  uint uStack_1c;
  int local_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6e7b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_24 = 0;
  local_20 = 0;
  cVar4 = FUN_0045a170(uVar5);
  if (cVar4 != '\0') {
    FUN_004534d0(&local_18,4);
    if (local_18 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\Dialogue\\Conversation.cpp",0xe5,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar6 = (int *)FUN_0046b250(*puVar2);
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\Dialogue\\Conversation.cpp",0xe5,*puVar2,uVar7);
      }
    }
    local_20 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_24,2);
  }
  FUN_004534d0(local_28,2);
  uStack_1c = 0;
  if (local_28[0] != 0) {
    do {
      iStack_10 = FUN_00401f00(0x1c);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = FUN_006b7be0();
      }
      uStack_4 = 0xffffffff;
      FUN_006b7e50();
      if (iVar8 != 0) {
        iVar3 = in_ECX[1];
        piVar6 = in_ECX;
        while (iVar3 != 0) {
          piVar6 = (int *)piVar6[1];
          iVar3 = piVar6[1];
        }
        if (*piVar6 == 0) {
          *piVar6 = iVar8;
        }
        else {
          piVar9 = (int *)FUN_00401f00(8);
          if (piVar9 == (int *)0x0) {
            piVar6[1] = 0;
          }
          else {
            *piVar9 = iVar8;
            piVar9[1] = 0;
            piVar6[1] = (int)piVar9;
          }
        }
      }
      uStack_1c = uStack_1c + 1;
    } while (uStack_1c < local_28[0]);
  }
  FUN_004534d0(&uStack_14,2);
  if ((short)uStack_14 == -1) {
    in_ECX[2] = 0;
  }
  else {
    iVar8 = FUN_006b7560(uStack_14);
    piVar6 = in_ECX;
    do {
      piVar9 = piVar6;
      if ((piVar9 == (int *)0x0) || (((int *)piVar9[1] == (int *)0x0 && (*piVar9 == 0))))
      goto LAB_006b7a14;
      piVar6 = (int *)piVar9[1];
    } while (iVar8 != *piVar9);
    in_ECX[2] = (int)piVar9;
  }
LAB_006b7a14:
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar10 = local_24 & 0xffff;
      if (uVar10 + local_20 < uVar5) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar5 - uVar10) - local_20;
        pcVar11 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar10 + local_20 <= uVar5) goto LAB_006b7b47;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar10 - uVar5) + local_20;
        pcVar11 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar11,iVar8,".\\Dialogue\\Conversation.cpp",0xfb,uVar1);
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar2);
      iVar8 = local_20;
      uVar10 = (local_24 & 0xffff) + local_20;
      if (uVar10 < uVar5) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar5 - (local_24 & 0xffff)) - iVar8,".\\Dialogue\\Conversation.cpp",0xfb,
                     *puVar2,uVar7);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      if (uVar5 < uVar10) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_24 & 0xffff) - uVar5) + iVar8,".\\Dialogue\\Conversation.cpp",0xfb,
                     *puVar2,uVar7);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
LAB_006b7b47:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b7b60(void)

{
  int *in_ECX;
  
  for (; (in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0)))); in_ECX = (int *)in_ECX[1])
  {
    FUN_006b7bb0();
  }
  return;
}



void thunk_FUN_006b7450(void)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *in_ECX;
      if (iVar1 != 0) {
        FUN_006b81d0();
        FUN_00401f20(iVar1);
      }
      piVar2 = (int *)in_ECX[1];
      if (piVar2 == (int *)0x0) {
        *in_ECX = 0;
      }
      else {
        in_ECX[1] = piVar2[1];
        *in_ECX = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  in_ECX[2] = 0;
  return;
}



undefined1 FUN_006b7ba0(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 8) = in_ECX;
  return 1;
}



void FUN_006b7bb0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    uVar1 = FUN_0046b250(*(int *)(in_ECX + 0x18),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    uVar1 = FUN_009832e6(uVar1);
    *(undefined4 *)(in_ECX + 0x18) = uVar1;
  }
  return;
}



void FUN_006b7be0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



bool FUN_006b7c00(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(*(int *)(in_ECX + 8) + 4);
  }
  return *(int *)(in_ECX + 8) != 0;
}



undefined4 FUN_006b7c20(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
    return **(undefined4 **)(in_ECX + 8);
  }
  return 0;
}



void FUN_006b7c30(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xc) != 0) && ((*(byte *)(*(int *)(in_ECX + 0xc) + 0x25) >> 3 & 1) == 0)) {
    FUN_005308d0();
    FUN_00531470(*(undefined4 *)(in_ECX + 0x18));
  }
  return;
}



uint FUN_006b7c60(int param_1)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = 0;
  while ((in_ECX != (int *)0x0 && (((int *)in_ECX[1] != (int *)0x0 || (*in_ECX != 0))))) {
    if (param_1 == *in_ECX) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    in_ECX = (int *)in_ECX[1];
  }
  uVar1 = FUN_004a7a60(
                      "When trying to get a dialogue response index, the dialogue item was not found in the dialogue responses list."
                      );
  return uVar1 & 0xffff0000;
}



int FUN_006b7ca0(short param_1)

{
  int *in_ECX;
  short sVar1;
  
  sVar1 = 0;
  while ((in_ECX != (int *)0x0 && (((int *)in_ECX[1] != (int *)0x0 || (*in_ECX != 0))))) {
    if (sVar1 == param_1) {
      return *in_ECX;
    }
    sVar1 = sVar1 + 1;
    in_ECX = (int *)in_ECX[1];
  }
  FUN_004a7a60(
              "When trying to get a dialogue response by its index, the index was larger than the size of the dialogue responses list."
              );
  return 0;
}



int FUN_006b7cf0(void)

{
  short sVar1;
  int *in_ECX;
  uint local_4;
  
  local_4 = 1;
  while ((in_ECX != (int *)0x0 && ((in_ECX[1] != 0 || (*in_ECX != 0))))) {
    sVar1 = FUN_006b8460();
    in_ECX = (int *)in_ECX[1];
    local_4 = (uint)(ushort)((short)local_4 + sVar1);
  }
  return local_4 + 0x11;
}



void FUN_006b7d30(void)

{
  char *pcVar1;
  int *piVar2;
  int *in_ECX;
  char local_12;
  undefined1 local_11;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_12 = '\0';
  pcVar1 = *(char **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_12,1);
  for (piVar2 = in_ECX; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
      piVar2 = (int *)piVar2[1]) {
    FUN_006b84a0();
    local_12 = local_12 + '\x01';
  }
  *pcVar1 = local_12;
  local_11 = 0xff;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    local_11 = FUN_006b7c60(*(undefined4 *)in_ECX[2]);
  }
  FUN_0045b9a0(&local_11,1);
  local_10 = 0;
  if (in_ECX[3] != 0) {
    local_10 = *(undefined4 *)(in_ECX[3] + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  local_c = 0;
  if (in_ECX[4] != 0) {
    local_c = *(undefined4 *)(in_ECX[4] + 0xc);
  }
  FUN_0045f7a0(&local_c,4);
  local_8 = 0;
  if (in_ECX[5] != 0) {
    local_8 = *(undefined4 *)(in_ECX[5] + 0xc);
  }
  FUN_0045f7a0(&local_8,4);
  local_4 = 0;
  if (in_ECX[6] != 0) {
    local_4 = *(undefined4 *)(in_ECX[6] + 0xc);
  }
  FUN_0045f7a0(&local_4,4);
  return;
}



void FUN_006b7e50(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  byte local_26;
  char local_25;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6e7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004534d0(&local_26,1);
  local_24 = 0;
  if (local_26 != 0) {
    do {
      local_10 = FUN_00401f00(0x18,uVar3);
      local_4 = 0;
      if (local_10 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_006b8390();
      }
      local_4 = 0xffffffff;
      FUN_006b8280();
      if (iVar4 != 0) {
        iVar1 = in_ECX[1];
        piVar2 = in_ECX;
        while (iVar1 != 0) {
          piVar2 = (int *)piVar2[1];
          iVar1 = piVar2[1];
        }
        if (*piVar2 == 0) {
          *piVar2 = iVar4;
        }
        else {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar2[1] = 0;
          }
          else {
            *piVar5 = iVar4;
            piVar5[1] = 0;
            piVar2[1] = (int)piVar5;
          }
        }
      }
      local_24 = local_24 + 1;
    } while (local_24 < local_26);
  }
  FUN_004534d0(&local_25,1);
  if (local_25 == -1) {
    in_ECX[2] = 0;
  }
  else {
    iVar4 = FUN_006b7ca0((short)local_25);
    piVar2 = in_ECX;
    do {
      piVar5 = piVar2;
      if ((piVar5 == (int *)0x0) || (((int *)piVar5[1] == (int *)0x0 && (*piVar5 == 0))))
      goto LAB_006b7f72;
      piVar2 = (int *)piVar5[1];
    } while (iVar4 != *piVar5);
    in_ECX[2] = (int)piVar5;
  }
LAB_006b7f72:
  FUN_0045ba00(&local_20,4);
  if (local_20 != 0) {
    uVar6 = FUN_0046b250(local_20,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
    iVar4 = FUN_009832e6(uVar6);
    in_ECX[3] = iVar4;
  }
  FUN_0045ba00(&local_1c,4);
  if (local_1c != 0) {
    uVar6 = FUN_0046b250(local_1c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
    iVar4 = FUN_009832e6(uVar6);
    in_ECX[4] = iVar4;
  }
  FUN_0045ba00(&local_18,4);
  if (local_18 != 0) {
    uVar6 = FUN_0046b250(local_18,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
    iVar4 = FUN_009832e6(uVar6);
    in_ECX[5] = iVar4;
  }
  FUN_0045ba00(&local_14,4);
  in_ECX[6] = local_14;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b8050(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009be328;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00401f20(in_ECX[4],uVar1);
  in_ECX[4] = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b80d0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_14 [3];
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c6eb3;
  local_14[2] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)(local_14 + 2);
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (param_1 != 0)) {
    in_ECX[5] = param_1;
    in_ECX[3] = param_3;
    in_ECX[4] = param_2;
    in_ECX[6] = param_4;
    local_14[0] = 0;
    local_14[1] = 0;
    local_4 = 0;
    FUN_00531270(local_14);
    piVar5 = local_14;
    do {
      iVar1 = *piVar5;
      if (iVar1 == 0) break;
      piVar5 = (int *)piVar5[1];
      iVar3 = FUN_00401f00(0x18,uVar2);
      local_4._0_1_ = 1;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_006b83b0(param_1,param_2,param_3,param_4,iVar1);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0067b1e0(uVar4);
    } while (piVar5 != (int *)0x0);
    local_4 = 0xffffffff;
    FUN_005308e0();
  }
  *unaff_FS_OFFSET = local_14[2];
  return;
}



void FUN_006b81d0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6ed8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX != (undefined4 *)0x0) {
    while (cVar2 = FUN_0046cb60(uVar3), cVar2 == '\0') {
      puVar1 = (undefined4 *)*in_ECX;
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00401f20(puVar1[4]);
        puVar1[4] = 0;
        *(undefined2 *)((int)puVar1 + 0x16) = 0;
        *(undefined2 *)(puVar1 + 5) = 0;
        FUN_00401f20(*puVar1);
        *puVar1 = 0;
        *(undefined2 *)((int)puVar1 + 6) = 0;
        *(undefined2 *)(puVar1 + 1) = 0;
        FUN_00401f20(puVar1);
      }
      puVar1 = (undefined4 *)in_ECX[1];
      if (puVar1 == (undefined4 *)0x0) {
        *in_ECX = 0;
      }
      else {
        in_ECX[1] = puVar1[1];
        *in_ECX = *puVar1;
        FUN_00401f20(puVar1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006b8280(void)

{
  int in_ECX;
  undefined1 *puVar1;
  undefined1 auStack_10c [2];
  char local_10a;
  char local_109;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_10c;
  FUN_004534d0(&local_109,1);
  if (local_109 == '\0') {
    puVar1 = &DAT_00a2f7ec;
  }
  else {
    _memset(local_108,0,0x104);
    FUN_004534d0(local_108,local_109);
    puVar1 = local_108;
  }
  FUN_004028d0(puVar1,0);
  FUN_004534d0(&local_10a,1);
  if (local_10a == '\0') {
    puVar1 = &DAT_00a2f7ec;
  }
  else {
    _memset(local_108,0,0x104);
    FUN_004534d0(local_108,local_10a);
    puVar1 = local_108;
  }
  FUN_004028d0(puVar1,0);
  FUN_004534d0(in_ECX + 8,4);
  FUN_004534d0(in_ECX + 0xc,4);
  return;
}



void FUN_006b8390(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  return;
}



void FUN_006b83b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6f13;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[4] = 0;
  *(undefined2 *)(in_ECX + 5) = 0;
  *(undefined2 *)((int)in_ECX + 0x16) = 0;
  local_4 = 1;
  if (param_5 != (undefined4 *)0x0) {
    uVar3 = 0;
    uVar2 = FUN_0052e100(0,uVar1);
    FUN_004028d0(uVar2,uVar3);
    in_ECX[2] = *param_5;
    in_ECX[3] = param_5[1];
    FUN_0052e410(param_4,param_1,param_2,param_3,in_ECX + 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_006b8460(void)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 *in_ECX;
  
  pcVar4 = (char *)in_ECX[4];
  cVar3 = (char)pcVar4;
  do {
    cVar2 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  pcVar5 = (char *)*in_ECX;
  pcVar1 = pcVar5 + 1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  return CONCAT22((short)((uint)((int)pcVar5 - (int)pcVar1) >> 0x10),
                  (ushort)(byte)((int)pcVar5 - (int)pcVar1) +
                  (ushort)(byte)((char)pcVar4 - (cVar3 + '\x01')) + 10);
}



void FUN_006b84a0(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 *in_ECX;
  undefined1 local_2;
  char local_1;
  
  pcVar3 = (char *)*in_ECX;
  cVar2 = (char)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  cVar2 = (char)pcVar3 - (cVar2 + '\x01');
  FUN_0045b9a0(&local_2,1);
  if (cVar2 != '\0') {
    FUN_0045b9a0(*in_ECX,cVar2);
  }
  pcVar3 = (char *)in_ECX[4];
  cVar2 = (char)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_1 = (char)pcVar3 - (cVar2 + '\x01');
  FUN_0045b9a0(&local_1,1);
  if (local_1 != '\0') {
    FUN_0045b9a0(in_ECX[4],local_1);
  }
  FUN_0045b9a0(in_ECX + 2,4);
  FUN_0045b9a0(in_ECX + 3,4);
  return;
}



undefined4 FUN_006b8560(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0xc);
  *(int **)(in_ECX + 0x1c) = piVar1;
  if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_006b8580(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 4);
  }
  if ((*(int **)(in_ECX + 0x1c) != (int *)0x0) && (**(int **)(in_ECX + 0x1c) != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_006b85b0(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0x1c) != (undefined4 *)0x0) {
    return **(undefined4 **)(in_ECX + 0x1c);
  }
  return 0;
}



undefined4 FUN_006b85c0(char param_1)

{
  int *in_ECX;
  
  *in_ECX = (int)(in_ECX + 1);
  if (param_1 != '\0') {
    if (in_ECX + 1 == (int *)0x0) {
      return 0;
    }
    *in_ECX = in_ECX[2];
  }
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    return 1;
  }
  return 0;
}



undefined4 FUN_006b85f0(void)

{
  int *piVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    piVar1 = *(int **)(*in_ECX + 4);
    *in_ECX = (int)piVar1;
    if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_006b8610(int param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  if (in_ECX != (undefined4 *)0xfffffffc) {
    for (piVar1 = (int *)in_ECX[2]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (param_1 <= iVar2) {
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        *in_ECX = piVar1;
        if (*piVar1 == 0) {
          return 0;
        }
        return 1;
      }
      iVar2 = iVar2 + 1;
    }
  }
  return 0;
}



undefined4 FUN_006b8650(void)

{
  int *in_ECX;
  
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    return *(undefined4 *)*in_ECX;
  }
  return 0;
}



void FUN_006b8660(void)

{
  if (DAT_00b3c218 == (undefined4 *)0x0) {
    DAT_00b3c218 = (undefined4 *)FUN_00401f00(0x10);
    if (DAT_00b3c218 != (undefined4 *)0x0) {
      DAT_00b3c218[1] = 0;
      DAT_00b3c218[2] = 0;
      *DAT_00b3c218 = 0;
      DAT_00b3c218[3] = 0;
      return;
    }
    DAT_00b3c218 = (undefined4 *)0x0;
  }
  return;
}



uint FUN_006b86a0(void)

{
  char *pcVar1;
  undefined4 *puVar2;
  char cVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int iVar7;
  
  iVar7 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    iVar7 = 6;
  }
  pcVar4 = (char *)*in_ECX;
  pcVar1 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  pcVar4 = pcVar4 + ((iVar7 + 0x10) - (int)pcVar1);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar2 != (undefined4 *)0x0) {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar6 = (**(code **)(*piVar5 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x209,".\\Dialogue\\MenuTopic.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,(uint)pcVar4 & 0xffff,*puVar2,uVar6);
      return (uint)pcVar4 & 0xffff;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(uint)pcVar4 & 0xffff,0x209,
                 ".\\Dialogue\\MenuTopic.cpp");
  }
  return (uint)pcVar4 & 0xffff;
}



void FUN_006b8750(void)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *in_ECX;
  char local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  pcVar2 = (char *)*in_ECX;
  pcVar8 = pcVar2;
  do {
    cVar7 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar7 != '\0');
  local_19 = (char)pcVar8 - ((char)pcVar2 + '\x01');
  FUN_0045b9a0(&local_19,1);
  if (local_19 != '\0') {
    FUN_0045b9a0(pcVar2,local_19);
  }
  FUN_0045b9a0(in_ECX + 2,1);
  FUN_0045b9a0(in_ECX + 8,1);
  FUN_0045b9a0((int)in_ECX + 0x21,1);
  local_18 = 0;
  if (in_ECX[5] != 0) {
    local_18 = *(undefined4 *)(in_ECX[5] + 0xc);
  }
  FUN_0045f7a0(&local_18,4);
  local_14 = 0;
  if (in_ECX[9] != 0) {
    local_14 = *(undefined4 *)(in_ECX[9] + 0xc);
  }
  FUN_0045f7a0(&local_14,4);
  local_10 = 0;
  if (in_ECX[6] != 0) {
    local_10 = *(undefined4 *)(in_ECX[6] + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar4 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x22f,
                   ".\\Dialogue\\MenuTopic.cpp");
    }
    else {
      piVar9 = (int *)FUN_0046b250(*puVar3);
      uVar10 = (**(code **)(*piVar9 + 0xd4))
                         (*(undefined4 *)((int)puVar3 + 5),0x22f,".\\Dialogue\\MenuTopic.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar4 - iVar1,*puVar3,uVar10);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_c;
  if (cVar7 != '\0') {
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar5) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\Dialogue\\MenuTopic.cpp",0x22f);
    }
    *psVar6 = (short)uVar5 - (short)psVar6;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006b8950(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_120 [3];
  char cStack_11d;
  uint local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  int local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_120;
  local_11c = 0;
  iVar8 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    FUN_004534d0(&local_10c,4);
    if (local_10c != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\Dialogue\\MenuTopic.cpp",0x235,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\Dialogue\\MenuTopic.cpp",0x235,*puVar2,uVar6);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_11c,2);
  }
  _memset(local_108,0,0x104);
  FUN_004534d0(&cStack_11d,1);
  if (cStack_11d != '\0') {
    FUN_004534d0(local_108,cStack_11d);
    FUN_004028d0(local_108,0);
  }
  FUN_004534d0(in_ECX + 8,1);
  FUN_004534d0(in_ECX + 0x20,1);
  FUN_004534d0(in_ECX + 0x21,1);
  FUN_0045ba00(&uStack_118,4);
  uVar6 = FUN_0046b250(uStack_118,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
  uVar6 = FUN_009832e6(uVar6);
  *(undefined4 *)(in_ECX + 0x14) = uVar6;
  FUN_0045ba00(&uStack_114,4);
  uVar6 = FUN_0046b250(uStack_114,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
  uVar6 = FUN_009832e6(uVar6);
  *(undefined4 *)(in_ECX + 0x24) = uVar6;
  FUN_0045ba00(&uStack_110,4);
  uVar6 = FUN_0046b250(uStack_110,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0544c,0);
  uVar6 = FUN_009832e6(uVar6);
  *(undefined4 *)(in_ECX + 0x18) = uVar6;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar7 = local_11c & 0xffff;
      if (uVar7 + iVar8 < uVar3) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar3 - uVar7) - iVar8;
        pcVar9 = "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
        ;
      }
      else {
        if (uVar7 + iVar8 <= uVar3) {
          return;
        }
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar7 - uVar3) + iVar8;
        pcVar9 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar9,iVar8,".\\Dialogue\\MenuTopic.cpp",0x259,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (local_11c & 0xffff) + iVar8;
      if (uVar7 < uVar3) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_11c & 0xffff)) - iVar8,".\\Dialogue\\MenuTopic.cpp",0x259,
                     *puVar2,uVar6);
      }
      else if (uVar3 < uVar7) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_11c & 0xffff) - uVar3) + iVar8,".\\Dialogue\\MenuTopic.cpp",0x259,
                     *puVar2,uVar6);
      }
    }
  }
  return;
}



void FUN_006b8c80(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6f38;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  local_4 = 0;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[9] = 0;
  in_ECX[6] = 0;
  FUN_004028d0(&DAT_00a2f7ec,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b8cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_14 [3];
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c6f73;
  local_14[2] = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)(local_14 + 2);
  local_14[0] = 0;
  local_14[1] = 0;
  local_4 = 0;
  FUN_00531270(local_14);
  piVar9 = local_14;
  local_1c = 0;
  do {
    iVar3 = *piVar9;
    if (iVar3 == 0) break;
    piVar9 = (int *)piVar9[1];
    if (*(ushort *)(iVar3 + 0x14) == 0xffff) {
      pcVar5 = *(char **)(iVar3 + 0x10);
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar3 + 0x14);
    }
    if ((uVar6 != 0) && ((*(char *)(in_ECX + 0x20) == '\0' || (local_1c == 0)))) {
      iVar7 = FUN_00401f00(0x18,uVar4);
      local_4._0_1_ = 1;
      if (iVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_006b83b0(param_1,param_2,param_3,param_4,iVar3);
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0067b1e0(uVar8);
      local_1c = local_1c + 1;
    }
  } while (piVar9 != (int *)0x0);
  local_4 = 0xffffffff;
  FUN_005308e0();
  *unaff_FS_OFFSET = local_14[2];
  return;
}



void FUN_006b8e00(int param_1,int param_2,int param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 *in_ECX;
  undefined1 uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar2 = param_2;
  puStack_8 = &LAB_009c6f98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = 0;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[9] = 0;
  in_ECX[6] = 0;
  local_4 = 0;
  if (*(int *)(param_2 + 0xc) == 0xd7) {
    *(undefined1 *)(in_ECX + 8) = 1;
    *(undefined1 *)(in_ECX + 2) = 0;
  }
  else {
    *(undefined1 *)(in_ECX + 8) = 0;
  }
  param_2 = param_1;
  param_1 = iVar2;
  if (param_3 != 0) {
    cVar1 = *(char *)(param_3 + 0x22);
    in_ECX[6] = param_3;
    *(bool *)((int)in_ECX + 0x21) = cVar1 == '\0';
    if ((param_5 != '\0') && ((*(byte *)(param_3 + 0x25) >> 4 & 1) == 0)) {
      iVar4 = FUN_0052ed50(6,0,uVar3);
      iVar5 = FUN_00530020(param_4,DAT_00b333c4);
      if (iVar5 != 0) {
        in_ECX[6] = iVar5;
        param_2 = FUN_0052f570(iVar5);
        param_1 = iVar4;
      }
    }
    puVar6 = *(undefined1 **)(iVar2 + 0x1c);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_00a2f7ec;
    }
    FUN_004028d0(puVar6,0);
    if (*(char *)(in_ECX + 8) == '\0') {
      iVar2 = *(int *)(in_ECX[6] + 0x30);
      if ((iVar2 != 0) && ((*(int *)(iVar2 + 0xc) != 0 || (*(int *)(iVar2 + 8) != 0)))) {
        uVar7 = 1;
      }
      *(undefined1 *)(in_ECX + 2) = uVar7;
    }
    FUN_006b8cf0(param_2,param_1,in_ECX[6],param_4);
  }
  in_ECX[5] = param_2;
  in_ECX[9] = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b8f50(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c6ed8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if ((*(char *)(in_ECX + 8) == '\0') && (piVar1 = in_ECX + 3, piVar1 != (int *)0x0)) {
    while( true ) {
      cVar4 = FUN_0046cb60(uVar5);
      if (cVar4 != '\0') break;
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        FUN_006b8050();
        FUN_00401f20(iVar2);
      }
      piVar3 = (int *)in_ECX[4];
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        in_ECX[4] = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
    }
  }
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9010(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  uint local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6fcb;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar1 = false;
  FUN_009832e6(*(undefined4 *)(in_ECX + 0xc),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0,uVar5);
  piVar6 = (int *)(in_ECX + 4);
  if (piVar6 != (int *)0x0) {
    iVar9 = 0;
    do {
      if (*piVar6 != 0) {
        iVar9 = iVar9 + 1;
      }
      piVar6 = (int *)piVar6[1];
    } while (piVar6 != (int *)0x0);
    if (iVar9 != 0) {
joined_r0x006b908e:
      do {
        if ((param_1 == (int *)0x0) || (iVar9 = *param_1, iVar9 == 0)) goto LAB_006b9235;
        param_1 = (int *)param_1[1];
        if ((*(int *)(iVar9 + 0xc) == 0xd7) &&
           (((cVar4 = FUN_005e1e30(), cVar4 == '\0' &&
             (iVar7 = FUN_00425970(*(undefined4 *)(in_ECX + 0xc)), iVar7 != 0)) && (!bVar1)))) {
          piVar6 = (int *)(iVar7 + 0xc);
          *(int **)(iVar7 + 0x1c) = piVar6;
          if (((piVar6 != (int *)0x0) && (*piVar6 != 0)) &&
             (cVar4 = FUN_00446c30(iVar7), cVar4 == '\0')) {
            FUN_0067b1e0(iVar7);
          }
          bVar1 = true;
        }
        local_14 = local_14 & 0xffffff00;
        iVar7 = FUN_0052f770(&local_14,*(undefined4 *)(in_ECX + 0xc),DAT_00b333c4);
      } while (iVar7 == 0);
      uVar8 = FUN_0052f570(iVar7);
      bVar3 = false;
      bVar2 = true;
      if (*(int *)(iVar9 + 0xc) == 0xd7) {
        if ((bVar1) || (cVar4 = FUN_005e1e30(), cVar4 != '\0')) {
          bVar2 = false;
        }
        else {
          bVar3 = true;
        }
      }
      iVar10 = 0;
      if (bVar2) {
        local_10 = FUN_00401f00(0x28);
        local_4 = 0;
        if (local_10 == 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_006b8e00(uVar8,iVar9,iVar7,*(undefined4 *)(in_ECX + 0xc),local_14);
        }
        local_4 = 0xffffffff;
      }
      if ((bVar3) && ((*(byte *)(*(int *)(iVar10 + 0x18) + 0x25) >> 2 & 1) == 0)) {
        FUN_00422c70(iVar10);
      }
      if (bVar2) {
        piVar6 = (int *)(iVar10 + 0xc);
        *(int **)(iVar10 + 0x1c) = piVar6;
        if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
          for (piVar6 = (int *)(in_ECX + 4); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
            if (*piVar6 == iVar10) goto LAB_006b9216;
          }
          FUN_0067b1e0(iVar10);
          goto joined_r0x006b908e;
        }
      }
LAB_006b9216:
      if (iVar10 != 0) {
        FUN_006b8f50();
        FUN_00401f20(iVar10);
      }
      goto joined_r0x006b908e;
    }
  }
LAB_006b9235:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9250(char param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined4 *in_ECX;
  int *piVar4;
  
  *in_ECX = 0;
  piVar4 = in_ECX + 1;
  if (param_1 == '\0') {
    if (piVar4 == (int *)0x0) {
      return;
    }
    piVar4 = (int *)in_ECX[2];
  }
  if (piVar4 != (int *)0x0) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      iVar1 = *piVar4;
      if ((*(char *)(iVar1 + 0x20) == '\0') && (iVar1 != 0)) {
        FUN_006b8f50();
        FUN_00401f20(iVar1);
      }
      piVar2 = (int *)piVar4[1];
      if (piVar2 == (int *)0x0) {
        *piVar4 = 0;
      }
      else {
        piVar4[1] = piVar2[1];
        *piVar4 = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
  }
  return;
}



undefined4 FUN_006b92c0(char param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int *in_ECX;
  int iVar4;
  undefined4 uStack_4;
  
  piVar1 = (int *)*in_ECX;
  iVar4 = 0;
  bVar3 = false;
  uStack_4 = 0;
  uStack_4._2_2_ = 0;
  if ((((piVar1 != (int *)0x0) && (iVar2 = *piVar1, iVar2 != 0)) &&
      (*(char *)(iVar2 + 0x20) != '\0')) &&
     ((*(byte *)(*(int *)(iVar2 + 0x18) + 0x25) >> 6 & 1) == 0)) {
    bVar3 = true;
  }
  if (param_1 != '\0') {
    if (piVar1 == (int *)0x0) goto LAB_006b9326;
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + 0x18);
      uStack_4 = (uint)*(byte *)(iVar2 + 8) << 0x10;
    }
  }
  if (((piVar1 != (int *)0x0) && (*piVar1 != 0)) && (*(char *)(*piVar1 + 0x20) != '\0')) {
    uStack_4 = CONCAT13(1,(undefined3)uStack_4);
  }
LAB_006b9326:
  FUN_006b9250(param_2 != '\0');
  if (((iVar4 != 0) && (FUN_005308d0(), !bVar3)) &&
     (((*(byte *)(iVar4 + 0x25) & 1) != 0 ||
      (FUN_00531470(in_ECX[3]), (*(byte *)(iVar4 + 0x25) & 1) != 0)))) {
    return 1;
  }
  if ((uStack_4._2_1_ == '\0') || (uStack_4._3_1_ != '\0')) {
    iVar4 = DAT_00b333c4 + 0x5e4;
  }
  else {
    iVar4 = *(int *)(iVar4 + 0x30) + 8;
  }
  FUN_006b9010(iVar4);
  *in_ECX = (int)(in_ECX + 1);
  if (in_ECX + 1 != (int *)0x0) {
    *in_ECX = in_ECX[2];
  }
  return 0;
}



undefined4 FUN_006b93b0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[3] = 0;
  FUN_006b9250(1);
  in_ECX[3] = param_1;
  iVar2 = param_2;
  if (param_2 == 0) {
    iVar2 = FUN_0052ed50(0,0,uVar1);
    if (iVar2 != 0) goto LAB_006b9407;
LAB_006b94ac:
    iVar2 = DAT_00b333c4 + 0x5e4;
  }
  else {
LAB_006b9407:
    iVar3 = FUN_0052f770(&param_1,in_ECX[3],DAT_00b333c4);
    if (iVar3 == 0) goto LAB_006b94ac;
    uVar4 = FUN_0052f570(iVar3);
    param_2 = FUN_00401f00(0x28);
    local_4 = 0;
    if (param_2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_006b8e00(uVar4,iVar2,iVar3,in_ECX[3],0);
    }
    local_4 = 0xffffffff;
    FUN_0067b1e0(iVar2);
    if ((iVar2 == 0) || (iVar3 = *(int *)(iVar2 + 0x18), iVar3 == 0)) goto LAB_006b94ac;
    if ((*(byte *)(iVar3 + 0x25) & 1) != 0) {
      FUN_005308d0();
      FUN_00531470(in_ECX[3]);
      uVar4 = 1;
      goto LAB_006b94c7;
    }
    if ((iVar3 == 0) || (*(char *)(iVar2 + 8) == '\0')) goto LAB_006b94ac;
    iVar2 = *(int *)(iVar3 + 0x30) + 8;
  }
  FUN_006b9010(iVar2);
  *in_ECX = (int)(in_ECX + 1);
  uVar4 = 0;
LAB_006b94c7:
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



void FUN_006b94e0(void)

{
  int iVar1;
  
  iVar1 = DAT_00b3c218;
  if (DAT_00b3c218 != 0) {
    *(undefined4 *)(DAT_00b3c218 + 0xc) = 0;
    FUN_006b9250(1);
    FUN_00401f20(iVar1);
    DAT_00b3c218 = 0;
  }
  return;
}



undefined4 FUN_006b9510(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xfc);
}



void FUN_006b9520(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b23c60 != '\0') {
    iVar2 = FUN_00401f00(0x28,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_006b9bd0(&DAT_00a30374,0);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    piVar4 = (int *)(in_ECX + 8);
    iVar2 = 0x3c;
    do {
      if (*piVar4 != 0) {
        FUN_006b9d10(*piVar4);
      }
      piVar4 = piVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    FUN_006b9610(0x3c);
    FUN_006b9930();
    FUN_006b9e10();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9610(uint param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  *(uint *)(in_ECX + 0x24) = *(uint *)(in_ECX + 0x24) / param_1;
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
    FUN_006b9610(param_1);
  }
  return;
}



int FUN_006b9640(int *param_1,int *param_2)

{
  return *(int *)(*param_2 + 0x24) - *(int *)(*param_1 + 0x24);
}



void FUN_006b9660(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7028;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a78830;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a78820;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b96d0(byte param_1)

{
  FUN_006b9660();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_006b96f0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  int in_ECX;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  puVar6 = *(undefined4 **)(in_ECX + 0x14);
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x1c) != 0) {
    do {
      pbVar3 = *(byte **)(puVar6[2] + 8);
      pbVar5 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar5;
        if (bVar1 != *pbVar5) {
LAB_006b9730:
          iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_006b9735;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_006b9730;
        pbVar3 = pbVar3 + 2;
        pbVar5 = pbVar5 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_006b9735:
      if (iVar4 == 0) {
        return uVar2;
      }
      puVar6 = (undefined4 *)*puVar6;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x1c));
  }
  return 0xffffffff;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006b9750(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int in_ECX;
  float fVar2;
  int *piVar3;
  int *unaff_FS_OFFSET;
  float10 fVar4;
  float local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c705b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_11c;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0(param_4,0);
  local_4 = 0;
  _sprintf(local_110,"%s%s",param_4,*(undefined4 *)(in_ECX + 8),uVar1);
  FUN_0057b8e0(local_110,0,(float)*param_1,1,0xffffffff);
  _sprintf(local_110,"%u",*(uint *)(in_ECX + 0x24) / 100);
  fVar4 = (float10)FUN_0057d7a0((float)*param_1,1,0xffffffff);
  local_11c = (float)((fVar4 * (float10)80.0) / (float10)100.0);
  FUN_0057b8e0(local_110,local_11c);
  _sprintf(local_110,"%u",(uint)(*(int *)(in_ECX + 0x24) * 100) / param_3);
  fVar4 = (float10)FUN_0057d7a0((float)*param_1,1,0xffffffff);
  local_11c = (float)((fVar4 * (float10)95.0) / (float10)100.0);
  FUN_0057b8e0(local_110,local_11c);
  *param_1 = *param_1 + param_2;
  FUN_00412fa0(&DAT_00a403a0);
  piVar3 = *(int **)(in_ECX + 0x14);
  if (piVar3 != (int *)0x0) {
    fVar2 = (float)(param_3 / 100);
    local_11c = fVar2;
    do {
      if ((uint)fVar2 < (uint)*(float *)(piVar3[2] + 0x24)) {
        FUN_006b9750(param_1,param_2,param_3,local_118);
        fVar2 = local_11c;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  FUN_00401f20(local_118);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9930(void)

{
  uint _NumOfElements;
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *_Base;
  LONG LVar3;
  int in_ECX;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined **local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c70b0;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  _NumOfElements = *(uint *)(in_ECX + 0x1c);
  if (1 < _NumOfElements) {
    _Base = (undefined4 *)
            FUN_00401f00(-(uint)((int)((ulonglong)_NumOfElements * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)_NumOfElements * 4),uVar2);
    uVar2 = 0;
    puVar4 = _Base;
    for (puVar1 = *(undefined4 **)(in_ECX + 0x14); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      *puVar4 = puVar1[2];
      puVar4 = puVar4 + 1;
    }
    _qsort(_Base,_NumOfElements,4,FUN_006b9640);
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_1c = &PTR_FUN_00a78840;
    local_4 = 0;
    if (_NumOfElements != 0) {
      do {
        puVar1 = (undefined4 *)_Base[uVar2];
        local_20 = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
        local_4._0_1_ = 1;
        FUN_00749800(&local_20);
        local_4 = (uint)local_4._1_3_ << 8;
        if ((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0))
        {
          (**(code **)*puVar1)(1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < _NumOfElements);
    }
    FUN_00401f20(_Base);
    puVar1 = *(undefined4 **)(in_ECX + 0x14);
    while (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar1;
      (**(code **)(*(int *)(in_ECX + 0x10) + 8))(puVar1);
      puVar1 = puVar4;
    }
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x18) = 0;
    for (puVar1 = local_18; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      puVar4 = (undefined4 *)puVar1[2];
      local_20 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
      local_4._0_1_ = 2;
      FUN_00749800(&local_20);
      local_4 = (uint)local_4._1_3_ << 8;
      if ((puVar4 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar4 + 1), LVar3 == 0)) {
        (**(code **)*puVar4)(1);
      }
    }
    local_1c = &PTR_FUN_00a78830;
    local_4 = 3;
    puVar1 = local_18;
    while (puVar1 != (undefined4 *)0x0) {
      puVar4 = (undefined4 *)*puVar1;
      (*(code *)local_1c[2])(puVar1);
      puVar1 = puVar4;
    }
    local_10 = 0;
    local_18 = (undefined4 *)0x0;
    local_14 = 0;
    local_1c = &PTR_LAB_00a78820;
  }
  local_4 = 0xffffffff;
  for (puVar1 = *(undefined4 **)(in_ECX + 0x14); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)*puVar1) {
    FUN_006b9930();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9b40(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar1 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  local_4 = 0;
  FUN_007c16b0(&param_1);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9bd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c70ee;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a7885c;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = &PTR_FUN_00a78840;
  local_4 = 2;
  FUN_004028d0(param_1,0);
  in_ECX[8] = param_2;
  in_ECX[9] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9c70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7123;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_006b9660(uVar1);
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9cf0(byte param_1)

{
  FUN_006b9c70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006b9d10(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + *(int *)(param_1 + 0x38);
  uVar7 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      puVar6 = *(undefined4 **)(param_1 + 0x28);
      for (uVar5 = uVar7; uVar5 != 0; uVar5 = uVar5 - 1) {
        if (puVar6 == (undefined4 *)0x0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)*puVar6;
        }
      }
      iVar1 = puVar6[2];
      iVar3 = FUN_006b96f0(*(undefined4 *)(iVar1 + 0xc));
      if (iVar3 == -1) {
        iVar3 = FUN_00401f00(0x28,uVar2);
        local_4 = 0;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_006b9bd0(*(undefined4 *)(iVar1 + 0xc),in_ECX);
        }
        local_4 = 0xffffffff;
        FUN_006b9b40(uVar4);
      }
      else {
        puVar6 = *(undefined4 **)(in_ECX + 0x14);
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6 = (undefined4 *)*puVar6;
          }
        }
      }
      FUN_006b9d10(iVar1);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0x30));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006b9e10(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7153;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    iVar5 = *(int *)(in_ECX + 0x24);
    for (puVar3 = *(undefined4 **)(in_ECX + 0x14); puVar3 != (undefined4 *)0x0;
        puVar3 = (undefined4 *)*puVar3) {
      iVar5 = iVar5 - *(int *)(puVar3[2] + 0x24);
      FUN_006b9e10(uVar1);
    }
    iVar2 = FUN_00401f00(0x28);
    local_4 = 0;
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_006b9bd0("Other",in_ECX);
    }
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
    local_4 = 1;
    puVar3[9] = iVar5;
    FUN_006b9b40(puVar3);
    local_4 = 0xffffffff;
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void DirectInput8Create(void)

{
                    /* WARNING: Could not recover jumptable at 0x006bb260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectInput8Create();
  return;
}



void DirectSoundCreate8(void)

{
                    /* WARNING: Could not recover jumptable at 0x006bb266. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DirectSoundCreate8();
  return;
}



float10 FUN_006bb270(float param_1,float *param_2,int param_3,float param_4,int *param_5,
                    byte param_6)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float local_10;
  float local_c;
  float *local_8;
  
  iVar3 = (int)param_4;
  if ((param_4 == 1.4013e-45) || (param_1 == -3.4028235e+38)) {
    return (float10)param_2[1];
  }
  uVar7 = (uint)param_6;
  uVar1 = (int)param_4 - 1;
  local_c = *(float *)(uVar7 * *param_5 + (int)param_2);
  param_4 = (float)*param_5;
  if (param_1 < local_c) {
    local_c = *param_2;
    param_4 = 0.0;
  }
  uVar4 = (int)param_4 + 1;
  if (3 < (int)((uVar1 - uVar4) + 1)) {
    local_8 = (float *)(((int)param_4 + 4) * uVar7 + (int)param_2);
    pfVar9 = (float *)(uVar7 * uVar4 + (int)param_2);
    pfVar6 = (float *)(((int)param_4 + 3) * uVar7 + (int)param_2);
    pfVar5 = (float *)(((int)param_4 + 2) * uVar7 + (int)param_2);
    do {
      fVar2 = *pfVar9;
      local_10 = fVar2;
      if (param_1 <= fVar2) goto LAB_006bb3f7;
      local_c = *pfVar5;
      if (param_1 <= local_c) {
        uVar4 = uVar4 + 1;
        param_4 = (float)((int)param_4 + 1);
        local_10 = local_c;
        local_c = fVar2;
        goto LAB_006bb3f7;
      }
      fVar2 = *pfVar6;
      if (param_1 <= fVar2) {
        uVar4 = uVar4 + 2;
        param_4 = (float)((int)param_4 + 2);
        local_10 = fVar2;
        goto LAB_006bb3f7;
      }
      local_10 = *local_8;
      if (param_1 <= local_10) {
        uVar4 = uVar4 + 3;
        param_4 = (float)((int)param_4 + 3);
        local_c = fVar2;
        goto LAB_006bb3f7;
      }
      param_4 = (float)((int)param_4 + 4);
      local_8 = local_8 + uVar7;
      uVar4 = uVar4 + 4;
      pfVar9 = pfVar9 + uVar7;
      pfVar5 = pfVar5 + uVar7;
      pfVar6 = pfVar6 + uVar7;
      local_c = local_10;
    } while (uVar4 <= iVar3 - 4U);
  }
  if (uVar4 <= uVar1) {
    pfVar5 = (float *)(uVar7 * uVar4 + (int)param_2);
    do {
      local_10 = *pfVar5;
      if (param_1 <= local_10) break;
      uVar4 = uVar4 + 1;
      param_4 = (float)((int)param_4 + 1);
      pfVar5 = (float *)((int)pfVar5 + uVar7);
      local_c = local_10;
    } while (uVar4 <= uVar1);
  }
LAB_006bb3f7:
  iVar3 = (int)param_4;
  iVar8 = uVar7 * (int)param_4;
  param_4 = (param_1 - local_c) / (local_10 - local_c);
  (**(code **)(&DAT_00b3cff8 + param_3 * 4))
            (param_4,(float *)(iVar8 + (int)param_2),(float *)(uVar7 * uVar4 + (int)param_2),
             &param_4);
  *param_5 = iVar3;
  return (float10)param_4;
}



undefined4 FUN_006bb490(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006d3190(param_1,param_2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if (*(float *)(param_2 + 4) == *(float *)(param_1 + 4)) {
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006bb4d0(float param_1,float *param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = param_4;
  if (param_4 == 0) {
    return (float10)_DAT_00b3c220;
  }
  if (param_1 < *param_2) {
    return (float10)param_2[1];
  }
  if (*(float *)((param_4 + -1) * (param_5 & 0xff) + (int)param_2) < param_1) {
    return (float10)*(float *)((param_4 + -1) * (param_5 & 0xff) + 4 + (int)param_2);
  }
  param_4 = 0;
  fVar2 = (float10)FUN_006bb270(param_1,param_2,param_3,iVar1,&param_4,param_5);
  return fVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bb550(void)

{
  if (DAT_00b3c27c != '\0') {
    return 0;
  }
  _DAT_00b3d118 = 0;
  _DAT_00b3d238 = 0;
  _DAT_00b3d650 = 0;
  _DAT_00b3d1a8 = 0;
  DAT_00b3c27c = 1;
  _DAT_00b3d088 = FUN_006f7070;
  _DAT_00b3d5c0 = FUN_0060d0a0;
  _DAT_00b3d530 = FUN_0060d0a0;
  _DAT_00b3d358 = FUN_006f7070;
  _DAT_00b3d2c8 = FUN_0060d0a0;
  DAT_00b3d3e8 = 8;
  _DAT_00b3cff8 = FUN_0060d0a0;
  _DAT_00b3d4a0 = FUN_006bb490;
  _DAT_00b3d410 = FUN_0060d0a0;
  return 1;
}



void FUN_006bb5e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_006d3630(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 4,4,&param_1,1);
  return;
}



void FUN_006bb620(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_006d3660(param_1,param_2);
  param_2 = 4;
  (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),iVar1 + 4,4,&param_2,1);
  return;
}



undefined4 FUN_006bb660(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006bb490(param_1,param_2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if ((*(float *)(param_2 + 8) == *(float *)(param_1 + 8)) &&
     (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))) {
    return 1;
  }
  return 0;
}



void FUN_006bb6b0(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_006d36b0(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0xc),
                                *(undefined4 *)(param_3 + 4),*(undefined4 *)(param_3 + 8));
  *param_4 = (float)fVar1;
  return;
}



undefined4 FUN_006bb730(uint param_1,undefined4 *param_2,uint *param_3)

{
  float fVar1;
  void *_Src;
  char cVar2;
  uint uVar3;
  uint *_Dst;
  uint uVar4;
  uint *puVar5;
  int *unaff_FS_OFFSET;
  float10 fVar6;
  uint local_28;
  uint local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c6e7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  cVar2 = FUN_006d31b0(param_1,_Src,*param_3,&local_28,0x10,uVar3);
  if (cVar2 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  uVar4 = *param_3 + 1;
  uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x10);
  local_10 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
  _Dst = (uint *)0x0;
  local_4 = 0;
  if (local_10 != (uint *)0x0) {
    _Dst = local_10 + 1;
    *local_10 = uVar4;
    _eh_vector_constructor_iterator_(_Dst,0x10,uVar4,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  _memcpy(_Dst,_Src,local_28 << 4);
  if (local_28 < *param_3) {
    _memcpy(_Dst + local_28 * 4 + 4,(void *)(local_28 * 0x10 + (int)_Src),
            (*param_3 - local_28) * 0x10);
  }
  fVar6 = (float10)FUN_006bb4d0(param_1,_Src,2,*param_3,0x10);
  fVar1 = (float)fVar6;
  puVar5 = _Dst + local_28 * 4;
  *puVar5 = param_1;
  puVar5[1] = (uint)fVar1;
  puVar5[2] = 0;
  puVar5[3] = 0;
  local_20 = fVar1;
  if ((local_28 != 0) && (local_28 != *param_3)) {
    local_10 = (uint *)_Dst[local_28 * 4 + -3];
    local_14 = _Dst[local_28 * 4 + -4];
    local_24 = _Dst[local_28 * 4 + -1];
    local_18 = _Dst[local_28 * 4 + 5];
    local_1c = _Dst[local_28 * 4 + 4];
    local_20 = (float)_Dst[local_28 * 4 + 6];
    FUN_006d3720(local_10,local_14,&local_24,local_18,local_1c,&local_20,param_1,fVar1,&local_10,
                 &local_14);
    _Dst[local_28 * 4 + -1] = local_24;
    puVar5[2] = (uint)local_10;
    puVar5[3] = local_14;
    _Dst[local_28 * 4 + 6] = (uint)local_20;
  }
  *param_3 = *param_3 + 1;
  if (_Src != (void *)0x0) {
    _eh_vector_destructor_iterator_(_Src,0x10,*(int *)((int)_Src + -4),FUN_0060d0a0);
    FUN_00401f20((int)_Src + -4);
  }
  *param_2 = _Dst;
  *unaff_FS_OFFSET = local_c;
  return 1;
}



uint * FUN_006bb960(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar4 = (uint)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c1feb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar3 = -(uint)((int)(ZEXT48(param_2) * 0x10 >> 0x20) != 0) | (uint)(ZEXT48(param_2) * 0x10);
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    param_2 = (uint *)0x0;
  }
  else {
    *puVar2 = (uint)param_2;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x10,(int)param_2,FUN_007616d0,FUN_0060d0a0);
    param_2 = puVar2 + 1;
  }
  local_4 = 0xffffffff;
  if (uVar4 != 0) {
    puVar2 = param_2 + 3;
    do {
      FUN_006bb5e0(param_1);
      local_14 = 4;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))
                (*(int *)(param_1 + 0x21c),puVar2 + -1,4,&local_14,1);
      uStack_10 = 4;
      (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c),puVar2,4,&uStack_10,1);
      puVar2 = puVar2 + 4;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
    *unaff_FS_OFFSET = local_c;
    return param_2;
  }
  *unaff_FS_OFFSET = local_c;
  return param_2;
}



void FUN_006bba80(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    param_2 = param_2 + 0xc;
    iVar1 = param_3;
    do {
      FUN_006bb620(param_1,param_2 + -0xc);
      param_3 = 4;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),param_2 + -4,4,&param_3,1);
      param_3 = 4;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),param_2,4,&param_3,1);
      param_2 = param_2 + 0x10;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bbaf0(void)

{
  if (DAT_00b3c27d != '\0') {
    return 0;
  }
  _DAT_00b3d120 = 0;
  _DAT_00b3d240 = 0;
  _DAT_00b3d658 = 0;
  DAT_00b3c27d = 1;
  _DAT_00b3d090 = FUN_006bb960;
  _DAT_00b3d5c8 = FUN_006bba80;
  _DAT_00b3d538 = &LAB_006bb710;
  _DAT_00b3d360 = FUN_006bf4d0;
  _DAT_00b3d2d0 = &LAB_006bf570;
  DAT_00b3d3ea = 0x10;
  _DAT_00b3d000 = FUN_006bb6b0;
  _DAT_00b3d4a8 = FUN_006bb660;
  _DAT_00b3d418 = FUN_0060d0a0;
  _DAT_00b3d1b0 = FUN_006bb730;
  return 1;
}



void FUN_006bbba0(float *param_1,float param_2,float *param_3,int param_4,float param_5,int *param_6
                 ,byte param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float local_1c;
  float *local_18;
  float *local_14;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  if ((param_5 == 1.4013e-45) || (param_2 == -3.4028235e+38)) {
    *param_1 = param_3[1];
    fVar2 = param_3[3];
    param_1[1] = param_3[2];
    param_1[2] = fVar2;
    return;
  }
  uVar7 = (uint)param_7;
  iVar8 = *param_6;
  uVar4 = (int)param_5 - 1;
  local_1c = *(float *)(uVar7 * iVar8 + (int)param_3);
  if (param_2 < local_1c) {
    local_1c = *param_3;
    iVar8 = 0;
  }
  uVar3 = iVar8 + 1;
  fVar2 = param_5;
  if (3 < (int)((uVar4 - uVar3) + 1)) {
    local_14 = (float *)((iVar8 + 4) * uVar7 + (int)param_3);
    local_18 = (float *)((iVar8 + 3) * uVar7 + (int)param_3);
    pfVar5 = (float *)(uVar7 * uVar3 + (int)param_3);
    pfVar6 = (float *)((iVar8 + 2) * uVar7 + (int)param_3);
    do {
      fVar1 = *pfVar5;
      fVar2 = fVar1;
      if (param_2 <= fVar1) goto LAB_006bbd38;
      local_1c = *pfVar6;
      if (param_2 <= local_1c) {
        uVar3 = uVar3 + 1;
        iVar8 = iVar8 + 1;
        fVar2 = local_1c;
        local_1c = fVar1;
        goto LAB_006bbd38;
      }
      fVar1 = *local_18;
      if (param_2 <= fVar1) {
        uVar3 = uVar3 + 2;
        iVar8 = iVar8 + 2;
        fVar2 = fVar1;
        goto LAB_006bbd38;
      }
      fVar2 = *local_14;
      if (param_2 <= fVar2) {
        uVar3 = uVar3 + 3;
        iVar8 = iVar8 + 3;
        local_1c = fVar1;
        goto LAB_006bbd38;
      }
      local_18 = local_18 + uVar7;
      local_14 = local_14 + uVar7;
      uVar3 = uVar3 + 4;
      iVar8 = iVar8 + 4;
      pfVar5 = pfVar5 + uVar7;
      pfVar6 = pfVar6 + uVar7;
      local_1c = fVar2;
    } while (uVar3 <= (int)param_5 - 4U);
  }
  if (uVar3 <= uVar4) {
    pfVar5 = (float *)(uVar7 * uVar3 + (int)param_3);
    do {
      fVar2 = *pfVar5;
      if (param_2 <= fVar2) break;
      uVar3 = uVar3 + 1;
      iVar8 = iVar8 + 1;
      pfVar5 = (float *)((int)pfVar5 + uVar7);
      local_1c = fVar2;
    } while (uVar3 <= uVar4);
  }
LAB_006bbd38:
  (*(code *)(&DAT_00b3d010)[param_4])
            ((param_2 - local_1c) / (fVar2 - local_1c),(float *)(uVar7 * iVar8 + (int)param_3),
             (float *)(uVar7 * uVar3 + (int)param_3),&local_c);
  *param_6 = iVar8;
  *param_1 = local_c;
  param_1[1] = fStack_8;
  param_1[2] = fStack_4;
  return;
}



float * FUN_006bbdc0(float *param_1,float param_2,float *param_3,undefined4 param_4,int param_5,
                    uint param_6)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_5 == 0) {
    *param_1 = DAT_00b3c31c;
    param_1[1] = DAT_00b3c320;
    param_1[2] = DAT_00b3c324;
    return param_1;
  }
  if (param_2 < *param_3) {
    *param_1 = param_3[1];
    param_1[1] = param_3[2];
    param_1[2] = param_3[3];
    return param_1;
  }
  if (*(float *)((param_5 + -1) * (param_6 & 0xff) + (int)param_3) < param_2) {
    param_3 = (float *)((param_5 + -1) * (param_6 & 0xff) + 4 + (int)param_3);
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    return param_1;
  }
  param_5 = 0;
  FUN_006bbba0(param_1,param_2,param_3,param_4,iVar1,&param_5,param_6);
  return param_1;
}



undefined4 FUN_006bbe80(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006d3190(param_1,param_2);
  if ((char)uVar1 == '\0') {
    return uVar1;
  }
  if (((*(float *)(param_2 + 4) == *(float *)(param_1 + 4)) &&
      (*(float *)(param_2 + 8) == *(float *)(param_1 + 8))) &&
     (*(float *)(param_2 + 0xc) == *(float *)(param_1 + 0xc))) {
    return 1;
  }
  return 0;
}



void FUN_006bbee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 float *param_5,float *param_6,float *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  code *pcVar9;
  float10 fVar10;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  pcVar9 = *(code **)(&DAT_00b3d668 + param_4 * 4);
  (*(code *)(&DAT_00b3d250)[param_4])(param_1,param_2,param_3,&local_24);
  (*pcVar9)(param_1,param_2,param_3,&fStack_18);
  fVar1 = fStack_1c * fStack_1c + local_24 * local_24 + fStack_20 * fStack_20;
  fVar10 = (float10)FUN_00982c30();
  fVar2 = 1.0 / (float)fVar10;
  *param_5 = fVar2 * local_24;
  param_5[1] = fStack_20 * fVar2;
  param_5[2] = fStack_1c * fVar2;
  fStack_c = fStack_10 * fStack_20 - fStack_14 * fStack_1c;
  fStack_8 = fStack_18 * fStack_1c - local_24 * fStack_10;
  fStack_4 = fStack_14 * local_24 - fStack_20 * fStack_18;
  fVar10 = (float10)FUN_00982c30();
  fVar2 = fVar2 * fVar2 * (float)fVar10;
  *param_8 = fVar2;
  if (ABS(fVar2) <= 1e-06) {
    *param_8 = 0.0;
    if ((1e-06 < ABS(*param_5)) || (1e-06 < ABS(param_5[1]))) {
      *param_6 = param_5[1];
      param_6[1] = -*param_5;
      param_6[2] = 0.0;
    }
    else {
      param_6[2] = param_5[1];
      param_6[1] = -param_5[2];
      *param_6 = 0.0;
    }
  }
  else {
    fVar2 = fStack_20 * fStack_14 + local_24 * fStack_18 + fStack_1c * fStack_10;
    local_24 = fVar2 * local_24;
    fStack_20 = fVar2 * fStack_20;
    fStack_1c = fStack_1c * fVar2;
    fStack_c = fVar1 * fStack_18;
    fStack_8 = fVar1 * fStack_14;
    fStack_4 = fStack_10 * fVar1;
    fStack_18 = fStack_c - local_24;
    *param_6 = fStack_18;
    fStack_14 = fStack_8 - fStack_20;
    param_6[1] = fStack_14;
    fStack_10 = fStack_4 - fStack_1c;
    param_6[2] = fStack_10;
  }
  FUN_0043f350();
  fVar1 = *param_6;
  fVar2 = param_5[2];
  fVar3 = param_6[2];
  fVar4 = *param_5;
  fVar5 = *param_5;
  fVar6 = param_6[1];
  fVar7 = *param_6;
  fVar8 = param_5[1];
  *param_7 = param_6[2] * param_5[1] - param_5[2] * param_6[1];
  param_7[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_7[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}



void FUN_006bc1c0(undefined4 param_1)

{
  FUN_006d3630(param_1);
  FUN_00709430(param_1);
  return;
}



void FUN_006bc1e0(undefined4 param_1,undefined4 param_2)

{
  FUN_006d3660(param_1,param_2);
  FUN_007094a0(param_1);
  return;
}



void FUN_006bc200(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(undefined1 **)(&DAT_00b3d118 + iVar1) = &LAB_006bf3d0;
  *(undefined1 **)(&DAT_00b3cff8 + iVar1) = &LAB_006bbb80;
  *(undefined1 **)(&DAT_00b3d238 + iVar1) = &LAB_006bbb80;
  *(undefined1 **)(&DAT_00b3d650 + iVar1) = &LAB_006bbb80;
  *(code **)(&DAT_00b3d4a0 + iVar1) = FUN_006bbe80;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_0060d0a0;
  *(undefined4 *)(&DAT_00b3d1a8 + iVar1) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bc260(void)

{
  if (DAT_00b3c2d8 != '\0') {
    return 0;
  }
  DAT_00b3c2d8 = 1;
  _DAT_00b3d0a0 = FUN_006f7070;
  _DAT_00b3d5d8 = FUN_0060d0a0;
  _DAT_00b3d548 = FUN_0060d0a0;
  _DAT_00b3d370 = FUN_006f7070;
  _DAT_00b3d2e0 = FUN_0060d0a0;
  DAT_00b3d3ee = 0x10;
  FUN_006bc200(1,0);
  return 1;
}



undefined4 FUN_006bc2c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_006bbe80(param_1,param_2);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((*(float *)(param_2 + 0x10) == *(float *)(param_1 + 0x10)) &&
      (*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14))) &&
     (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))) {
    cVar1 = FUN_008aa350(param_2 + 0x1c);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



void FUN_006bc3a0(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 0x38);
  fVar2 = *(float *)(param_2 + 0x3c);
  fVar3 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x24);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0xc);
  *param_4 = *(float *)(param_2 + 4) +
             (*(float *)(param_2 + 0x1c) +
             (*(float *)(param_2 + 0x28) + param_1 * *(float *)(param_2 + 0x34)) * param_1) *
             param_1;
  param_4[1] = fVar7 + (fVar5 + (fVar3 + fVar1 * param_1) * param_1) * param_1;
  param_4[2] = fVar8 + param_1 * (fVar6 + (fVar4 + fVar2 * param_1) * param_1);
  return;
}



void FUN_006bc480(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_1 * 3.0;
  fVar1 = *(float *)(param_2 + 0x38);
  fVar2 = *(float *)(param_2 + 0x3c);
  fVar3 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_2 + 0x20);
  fVar6 = *(float *)(param_2 + 0x24);
  *param_4 = *(float *)(param_2 + 0x1c) +
             (*(float *)(param_2 + 0x28) * 2.0 + fVar7 * *(float *)(param_2 + 0x34)) * param_1;
  param_4[1] = fVar5 + (fVar3 * 2.0 + fVar1 * fVar7) * param_1;
  param_4[2] = fVar6 + param_1 * (fVar4 * 2.0 + fVar7 * fVar2);
  return;
}



void FUN_006bc560(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * 6.0;
  fVar1 = *(float *)(param_2 + 0x38);
  fVar2 = *(float *)(param_2 + 0x3c);
  fVar3 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x30);
  *param_4 = *(float *)(param_2 + 0x28) * 2.0 + param_1 * *(float *)(param_2 + 0x34);
  param_4[1] = fVar1 * param_1 + fVar3 * 2.0;
  param_4[2] = fVar4 * 2.0 + param_1 * fVar2;
  return;
}



void FUN_006bc600(int param_1,int param_2)

{
  float *pfVar1;
  
  param_2 = param_2 + -1;
  if (param_2 != 0) {
    pfVar1 = (float *)(param_1 + 0x4c);
    do {
      pfVar1[-9] = (pfVar1[-2] - pfVar1[-0x12]) * 3.0 - (pfVar1[1] + pfVar1[-0xc] * 2.0);
      pfVar1[-8] = (pfVar1[-1] - pfVar1[-0x11]) * 3.0 - (pfVar1[2] + pfVar1[-0xb] * 2.0);
      pfVar1[-7] = (*pfVar1 - pfVar1[-0x10]) * 3.0 - (pfVar1[3] + pfVar1[-10] * 2.0);
      pfVar1[-6] = (pfVar1[1] + pfVar1[-0xc]) - (pfVar1[-2] - pfVar1[-0x12]) * 2.0;
      param_2 = param_2 + -1;
      pfVar1[-5] = (pfVar1[2] + pfVar1[-0xb]) - (pfVar1[-1] - pfVar1[-0x11]) * 2.0;
      pfVar1[-4] = (pfVar1[3] + pfVar1[-10]) - (*pfVar1 - pfVar1[-0x10]) * 2.0;
      pfVar1 = pfVar1 + 0x10;
    } while (param_2 != 0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_006bc780(int param_1,int param_2)

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
    param_1 = iVar2 + 0x40;
    local_50 = 0;
    if (-1 < iVar3) {
      do {
        fVar1 = (float)local_50 * _DAT_00b3c2f4;
        FUN_006bc480(fVar1,iVar2,param_1,&local_14);
        FUN_006bc560(fVar1,iVar2,param_1,local_20);
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



uint * FUN_006bc900(uint param_1)

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
    _eh_vector_constructor_iterator_(puVar2 + 1,0x40,param_1,FUN_007616d0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006bc9a0(uint param_1,undefined4 *param_2,uint *param_3)

{
  char cVar1;
  uint uVar2;
  uint *_Dst;
  uint uVar3;
  uint *puVar4;
  void *_Src;
  int *unaff_FS_OFFSET;
  uint local_7c;
  uint local_78;
  uint *local_74;
  void *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c717b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff74;
  *unaff_FS_OFFSET = (int)&local_c;
  _Src = (void *)*param_2;
  local_70 = _Src;
  cVar1 = FUN_006d31b0(param_1,_Src,*param_3,&local_7c,0x40,uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  uVar3 = *param_3 + 1;
  uVar2 = -(uint)((int)((ulonglong)uVar3 * 0x40 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x40);
  local_74 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
  _Dst = (uint *)0x0;
  local_4 = 0;
  if (local_74 != (uint *)0x0) {
    _Dst = local_74 + 1;
    *local_74 = uVar3;
    _eh_vector_constructor_iterator_(_Dst,0x40,uVar3,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  _memcpy(_Dst,_Src,local_7c << 6);
  if (local_7c < *param_3) {
    _memcpy(_Dst + local_7c * 0x10 + 0x10,(void *)(local_7c * 0x40 + (int)_Src),
            (*param_3 - local_7c) * 0x40);
  }
  FUN_006bbdc0(&local_18,param_1,_Src,2,*param_3,0x40);
  puVar4 = _Dst + local_7c * 0x10;
  *puVar4 = param_1;
  puVar4[1] = local_18;
  puVar4[2] = local_14;
  puVar4[3] = local_10;
  puVar4[4] = DAT_00b3f9a8;
  puVar4[5] = DAT_00b3f9ac;
  puVar4[6] = DAT_00b3f9b0;
  puVar4[7] = DAT_00b3f9a8;
  puVar4[8] = DAT_00b3f9ac;
  puVar4[9] = DAT_00b3f9b0;
  if ((local_7c != 0) && (local_7c != *param_3)) {
    local_38 = _Dst[local_7c * 0x10 + -0xe];
    local_74 = (uint *)_Dst[local_7c * 0x10 + -0x10];
    local_34 = _Dst[local_7c * 0x10 + -0xd];
    local_3c = _Dst[local_7c * 0x10 + -0xf];
    local_6c = _Dst[local_7c * 0x10 + -9];
    local_54 = puVar4[1];
    local_68 = _Dst[local_7c * 0x10 + -8];
    local_50 = puVar4[2];
    local_64 = _Dst[local_7c * 0x10 + -7];
    local_78 = _Dst[local_7c * 0x10 + 0x10];
    local_4c = puVar4[3];
    local_48 = _Dst[local_7c * 0x10 + 0x11];
    local_60 = _Dst[local_7c * 0x10 + 0x14];
    local_44 = _Dst[local_7c * 0x10 + 0x12];
    local_40 = _Dst[local_7c * 0x10 + 0x13];
    local_5c = _Dst[local_7c * 0x10 + 0x15];
    local_58 = _Dst[local_7c * 0x10 + 0x16];
    FUN_006d3720(local_3c,local_74,&local_6c,local_48,local_78,&local_60,param_1,local_54,&local_30,
                 &local_24);
    FUN_006d3720(local_38,local_74,&local_68,local_44,local_78,&local_5c,param_1,local_50,&local_2c,
                 &local_20);
    FUN_006d3720(local_34,local_74,&local_64,local_40,local_78,&local_58,param_1,local_4c,&local_28,
                 &local_1c);
    _Dst[local_7c * 0x10 + -9] = local_6c;
    _Dst[local_7c * 0x10 + -8] = local_68;
    _Dst[local_7c * 0x10 + -7] = local_64;
    puVar4[4] = local_30;
    puVar4[5] = local_2c;
    puVar4[6] = local_28;
    puVar4[7] = local_24;
    puVar4[8] = local_20;
    puVar4[9] = local_1c;
    _Dst[local_7c * 0x10 + 0x14] = local_60;
    _Dst[local_7c * 0x10 + 0x15] = local_5c;
    _Dst[local_7c * 0x10 + 0x16] = local_58;
    _Src = local_70;
  }
  *param_3 = *param_3 + 1;
  if (_Src != (void *)0x0) {
    _eh_vector_destructor_iterator_(_Src,0x40,*(int *)((int)_Src + -4),FUN_0060d0a0);
    FUN_00401f20((int)_Src + -4);
  }
  *param_2 = _Dst;
  FUN_006bc600(_Dst,*param_3,0x40);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



uint * FUN_006bcda0(undefined4 param_1,uint param_2)

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
    _eh_vector_constructor_iterator_(puVar4,0x40,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bc1c0(param_1);
    FUN_00709430(param_1);
    FUN_00709430(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006bce70(undefined4 param_1,int param_2,int param_3)

{
  if (param_3 != 0) {
    param_2 = param_2 + 0x1c;
    do {
      FUN_006bc1e0(param_1,param_2 + -0x1c);
      FUN_007094a0(param_1);
      FUN_007094a0(param_1);
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



void FUN_006bceb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(code **)(&DAT_00b3d118 + iVar1) = FUN_006bc780;
  *(code **)(&DAT_00b3cff8 + iVar1) = FUN_006bc3a0;
  *(code **)(&DAT_00b3d238 + iVar1) = FUN_006bc480;
  *(code **)(&DAT_00b3d650 + iVar1) = FUN_006bc560;
  *(code **)(&DAT_00b3d4a0 + iVar1) = FUN_006bc2c0;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_006bc600;
  *(code **)(&DAT_00b3d1a8 + iVar1) = FUN_006bc9a0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bcf10(void)

{
  if (DAT_00b3c344 != '\0') {
    return 0;
  }
  DAT_00b3c344 = 1;
  _DAT_00b3d0a8 = FUN_006bcda0;
  _DAT_00b3d5e0 = FUN_006bce70;
  _DAT_00b3d550 = &LAB_006bc330;
  _DAT_00b3d378 = FUN_006bc900;
  _DAT_00b3d2e8 = &LAB_006c0fe0;
  DAT_00b3d3f0 = 0x40;
  FUN_006bceb0(1,2);
  return 1;
}



void FUN_006bcf70(float *param_1,float param_2,float *param_3,int param_4,float param_5,int *param_6
                 ,byte param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float local_30;
  float *local_2c;
  float *local_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if ((param_5 == 1.4013e-45) || (param_2 == -3.4028235e+38)) {
    if (param_4 != 4) {
      *param_1 = param_3[1];
      param_1[1] = param_3[2];
      fVar2 = param_3[4];
      param_1[2] = param_3[3];
      param_1[3] = fVar2;
      return;
    }
  }
  else if (param_4 != 4) {
    uVar4 = (uint)param_7;
    iVar8 = *param_6;
    uVar5 = (int)param_5 - 1;
    local_30 = *(float *)(uVar4 * iVar8 + (int)param_3);
    if (param_2 < local_30) {
      local_30 = *param_3;
      iVar8 = 0;
    }
    uVar3 = iVar8 + 1;
    fVar2 = param_5;
    if (3 < (int)((uVar5 - uVar3) + 1)) {
      local_28 = (float *)((iVar8 + 4) * uVar4 + (int)param_3);
      local_2c = (float *)((iVar8 + 3) * uVar4 + (int)param_3);
      pfVar6 = (float *)(uVar4 * uVar3 + (int)param_3);
      pfVar7 = (float *)((iVar8 + 2) * uVar4 + (int)param_3);
      do {
        fVar1 = *pfVar6;
        fVar2 = fVar1;
        if (param_2 <= fVar1) goto LAB_006bd180;
        local_30 = *pfVar7;
        if (param_2 <= local_30) {
          uVar3 = uVar3 + 1;
          iVar8 = iVar8 + 1;
          fVar2 = local_30;
          local_30 = fVar1;
          goto LAB_006bd180;
        }
        fVar1 = *local_2c;
        if (param_2 <= fVar1) {
          uVar3 = uVar3 + 2;
          iVar8 = iVar8 + 2;
          fVar2 = fVar1;
          goto LAB_006bd180;
        }
        fVar2 = *local_28;
        if (param_2 <= fVar2) {
          uVar3 = uVar3 + 3;
          iVar8 = iVar8 + 3;
          local_30 = fVar1;
          goto LAB_006bd180;
        }
        local_2c = local_2c + uVar4;
        local_28 = local_28 + uVar4;
        uVar3 = uVar3 + 4;
        iVar8 = iVar8 + 4;
        pfVar6 = pfVar6 + uVar4;
        pfVar7 = pfVar7 + uVar4;
        local_30 = fVar2;
      } while (uVar3 <= (int)param_5 - 4U);
    }
    if (uVar3 <= uVar5) {
      pfVar6 = (float *)(uVar4 * uVar3 + (int)param_3);
      do {
        fVar2 = *pfVar6;
        if (param_2 <= fVar2) break;
        uVar3 = uVar3 + 1;
        iVar8 = iVar8 + 1;
        pfVar6 = (float *)((int)pfVar6 + uVar4);
        local_30 = fVar2;
      } while (uVar3 <= uVar5);
    }
LAB_006bd180:
    (**(code **)(&DAT_00b3d028 + param_4 * 4))
              ((param_2 - local_30) / (fVar2 - local_30),(float *)(uVar4 * iVar8 + (int)param_3),
               (float *)(uVar4 * uVar3 + (int)param_3),&local_10);
    *param_6 = iVar8;
    *param_1 = local_10;
    param_1[1] = fStack_c;
    param_1[2] = fStack_8;
    param_1[3] = fStack_4;
    return;
  }
  (**(code **)(&DAT_00b3d028 + param_4 * 4))(param_2,param_3,0,&local_20);
  *param_1 = local_20;
  param_1[1] = fStack_1c;
  param_1[2] = fStack_18;
  param_1[3] = fStack_14;
  return;
}



float * FUN_006bd1f0(float *param_1,float param_2,float *param_3,undefined4 param_4,int param_5,
                    uint param_6)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_5 == 0) {
    *param_1 = DAT_00b3c3a4;
    param_1[1] = DAT_00b3c3a8;
    param_1[2] = DAT_00b3c3ac;
    param_1[3] = DAT_00b3c3b0;
    return param_1;
  }
  if (param_2 < *param_3) {
    *param_1 = param_3[1];
    param_1[1] = param_3[2];
    param_1[2] = param_3[3];
    param_1[3] = param_3[4];
    return param_1;
  }
  if (*(float *)((param_5 + -1) * (param_6 & 0xff) + (int)param_3) < param_2) {
    param_3 = (float *)((param_5 + -1) * (param_6 & 0xff) + 4 + (int)param_3);
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    return param_1;
  }
  param_5 = 0;
  FUN_006bcf70(param_1,param_2,param_3,param_4,iVar1,&param_5,param_6);
  return param_1;
}



void FUN_006bd310(int param_1,uint param_2,byte param_3)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  float *local_18;
  undefined1 local_10 [16];
  
  local_18 = (float *)(param_2 - 1);
  if (local_18 != (float *)0x0) {
    uVar4 = (uint)param_3;
    pfVar6 = (float *)(uVar4 + 4 + param_1);
    pfVar5 = (float *)(param_1 + 0xc);
    do {
      if (pfVar6[3] * pfVar5[1] +
          pfVar6[2] * *pfVar5 + pfVar5[-2] * *pfVar6 + pfVar6[1] * pfVar5[-1] < 0.0) {
        pfVar1 = (float *)FUN_00714cc0(local_10);
        *pfVar6 = *pfVar1;
        pfVar6[1] = pfVar1[1];
        pfVar6[2] = pfVar1[2];
        pfVar6[3] = pfVar1[3];
      }
      pfVar6 = (float *)((int)pfVar6 + uVar4);
      pfVar5 = (float *)((int)pfVar5 + uVar4);
      local_18 = (float *)((int)local_18 + -1);
    } while (local_18 != (float *)0x0);
  }
  uVar4 = 0;
  if (3 < (int)param_2) {
    uVar2 = (uint)param_3;
    local_18 = (float *)(uVar2 * 3 + 4 + param_1);
    iVar3 = (param_2 - 4 >> 2) + 1;
    pfVar6 = (float *)(param_1 + 4 + uVar2 * 2);
    pfVar1 = (float *)(uVar2 + 4 + param_1);
    uVar4 = iVar3 * 4;
    pfVar5 = (float *)(param_1 + 4);
    do {
      if (-1.0 <= *pfVar5) {
        if (1.0 < *pfVar5) {
          *pfVar5 = 1.0;
        }
      }
      else {
        *pfVar5 = -1.0;
      }
      if (-1.0 <= *pfVar1) {
        if (1.0 < *pfVar1) {
          *pfVar1 = 1.0;
        }
      }
      else {
        *pfVar1 = -1.0;
      }
      if (-1.0 <= *pfVar6) {
        if (1.0 < *pfVar6) {
          *pfVar6 = 1.0;
        }
      }
      else {
        *pfVar6 = -1.0;
      }
      if (-1.0 <= *local_18) {
        if (1.0 < *local_18) {
          *local_18 = 1.0;
        }
      }
      else {
        *local_18 = -1.0;
      }
      local_18 = local_18 + uVar2;
      pfVar5 = pfVar5 + uVar2;
      pfVar1 = pfVar1 + uVar2;
      pfVar6 = pfVar6 + uVar2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (param_2 <= uVar4) {
    return;
  }
  pfVar5 = (float *)(param_3 * uVar4 + 4 + param_1);
  iVar3 = param_2 - uVar4;
  do {
    if (-1.0 <= *pfVar5) {
      if (1.0 < *pfVar5) {
        *pfVar5 = 1.0;
      }
    }
    else {
      *pfVar5 = -1.0;
    }
    pfVar5 = (float *)((int)pfVar5 + (uint)param_3);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



void FUN_006bd510(undefined4 param_1)

{
  FUN_006d3630(param_1);
  FUN_00715420(param_1);
  return;
}



void FUN_006bd530(undefined4 param_1,undefined4 param_2)

{
  FUN_006d3660(param_1,param_2);
  FUN_007154b0(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bd550(void)

{
  if (DAT_00b3c3a0 != '\0') {
    return 0;
  }
  _DAT_00b3d148 = 0;
  _DAT_00b3d268 = 0;
  _DAT_00b3d680 = 0;
  _DAT_00b3d1d8 = 0;
  DAT_00b3c3a0 = 1;
  _DAT_00b3d0b8 = FUN_006f7070;
  _DAT_00b3d5f0 = FUN_0060d0a0;
  _DAT_00b3d560 = FUN_0060d0a0;
  _DAT_00b3d388 = FUN_006f7070;
  _DAT_00b3d2f8 = FUN_0060d0a0;
  DAT_00b3d3f4 = 0x14;
  _DAT_00b3d028 = &LAB_006bd2d0;
  _DAT_00b3d4d0 = FUN_006be360;
  _DAT_00b3d440 = FUN_006bd310;
  return 1;
}



void FUN_006bd5e0(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_006be360(param_1,param_2);
  if (cVar1 == '\0') {
    return;
  }
  FUN_0073b770(param_2 + 0x14);
  return;
}



void FUN_006bd6b0(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int local_14;
  undefined1 local_10 [16];
  
  if (1 < param_2) {
    FUN_006bd310(param_1,param_2,param_3);
    puVar1 = (undefined4 *)FUN_00714e70(local_10,param_1 + 4,param_1 + 4,param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x14) = *puVar1;
    *(undefined4 *)(param_1 + 0x18) = puVar1[1];
    *(undefined4 *)(param_1 + 0x1c) = puVar1[2];
    *(undefined4 *)(param_1 + 0x20) = puVar1[3];
    if (1 < param_2 - 1) {
      local_14 = param_2 - 2;
      iVar2 = param_1 + 0x28;
      do {
        puVar1 = (undefined4 *)FUN_00714e70(local_10,iVar2 + -0x24,iVar2,iVar2 + 0x24);
        *(undefined4 *)(iVar2 + 0x10) = *puVar1;
        *(undefined4 *)(iVar2 + 0x14) = puVar1[1];
        *(undefined4 *)(iVar2 + 0x18) = puVar1[2];
        local_14 = local_14 + -1;
        *(undefined4 *)(iVar2 + 0x1c) = puVar1[3];
        iVar2 = iVar2 + 0x24;
      } while (local_14 != 0);
    }
    iVar2 = param_1 + (param_2 - 1) * 0x24;
    puVar1 = (undefined4 *)
             FUN_00714e70(local_10,param_1 + -0x44 + param_2 * 0x24,iVar2 + 4,iVar2 + 4);
    *(undefined4 *)(iVar2 + 0x14) = *puVar1;
    *(undefined4 *)(iVar2 + 0x18) = puVar1[1];
    *(undefined4 *)(iVar2 + 0x1c) = puVar1[2];
    *(undefined4 *)(iVar2 + 0x20) = puVar1[3];
  }
  return;
}



uint * FUN_006bd790(uint param_1)

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
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x24)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x24,param_1,FUN_006c0ad0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006bd860(uint param_1,undefined4 *param_2,uint *param_3)

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
  cVar2 = FUN_006d31b0(param_1,_Src,*param_3,&local_24,0x24,uVar3);
  if (cVar2 != '\0') {
    uVar4 = *param_3 + 1;
    uVar3 = -(uint)((int)((ulonglong)uVar4 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)uVar4 * 0x24);
    local_20 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4);
    local_4 = 0;
    if (local_20 == (uint *)0x0) {
      _Dst = (uint *)0x0;
    }
    else {
      _Dst = local_20 + 1;
      *local_20 = uVar4;
      _eh_vector_constructor_iterator_(_Dst,0x24,uVar4,FUN_006c0ad0,FUN_0060d0a0);
    }
    local_4 = 0xffffffff;
    _memcpy(_Dst,_Src,local_24 * 0x24);
    if (local_24 < *param_3) {
      _memcpy(_Dst + local_24 * 9 + 9,(void *)(local_24 * 0x24 + (int)_Src),
              (*param_3 - local_24) * 0x24);
    }
    FUN_006bd1f0(&local_1c,param_1,_Src,2,*param_3,0x24);
    puVar1 = _Dst + local_24 * 9;
    *puVar1 = param_1;
    puVar1[1] = local_1c;
    puVar1[2] = local_18;
    puVar1[3] = local_14;
    puVar1[4] = local_10;
    *param_3 = *param_3 + 1;
    if (_Src != (void *)0x0) {
      _eh_vector_destructor_iterator_(_Src,0x24,*(int *)((int)_Src + -4),FUN_0060d0a0);
      FUN_00401f20((int)_Src + -4);
    }
    *param_2 = _Dst;
    FUN_006bd6b0(_Dst,*param_3,0x24);
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_006bda10(undefined4 param_1,uint param_2)

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
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x24 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x24)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x24,param_2,FUN_006c0ad0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bd510(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006bdad0(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bd530(param_1,param_2);
    param_2 = param_2 + 0x24;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bdb00(void)

{
  if (DAT_00b3c40c != '\0') {
    return 0;
  }
  _DAT_00b3d150 = 0;
  _DAT_00b3d270 = 0;
  _DAT_00b3d688 = 0;
  DAT_00b3c40c = 1;
  _DAT_00b3d0c0 = FUN_006bda10;
  _DAT_00b3d5f8 = FUN_006bdad0;
  _DAT_00b3d568 = &LAB_006bd610;
  _DAT_00b3d390 = FUN_006bd790;
  _DAT_00b3d300 = &LAB_006bd830;
  DAT_00b3d3f6 = 0x24;
  _DAT_00b3d030 = &LAB_006bd660;
  _DAT_00b3d4d8 = FUN_006bd5e0;
  _DAT_00b3d448 = FUN_006bd6b0;
  _DAT_00b3d1e0 = FUN_006bd860;
  return 1;
}



uint FUN_006bdba0(float param_1,float *param_2,int param_3,float param_4,int *param_5,byte param_6)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  float local_10;
  float local_c;
  float *local_8;
  
  iVar3 = (int)param_4;
  if ((param_4 == 1.4013e-45) || (param_1 == -3.4028235e+38)) {
    return (uint)*(byte *)(param_2 + 1);
  }
  uVar7 = (uint)param_6;
  uVar1 = (int)param_4 - 1;
  local_c = *(float *)(uVar7 * *param_5 + (int)param_2);
  param_4 = (float)*param_5;
  if (param_1 < local_c) {
    local_c = *param_2;
    param_4 = 0.0;
  }
  uVar4 = (int)param_4 + 1;
  if (3 < (int)((uVar1 - uVar4) + 1)) {
    local_8 = (float *)(((int)param_4 + 4) * uVar7 + (int)param_2);
    pfVar9 = (float *)(uVar7 * uVar4 + (int)param_2);
    pfVar6 = (float *)(((int)param_4 + 3) * uVar7 + (int)param_2);
    pfVar5 = (float *)(((int)param_4 + 2) * uVar7 + (int)param_2);
    do {
      fVar2 = *pfVar9;
      local_10 = fVar2;
      if (param_1 <= fVar2) goto LAB_006bdd27;
      local_c = *pfVar5;
      if (param_1 <= local_c) {
        uVar4 = uVar4 + 1;
        param_4 = (float)((int)param_4 + 1);
        local_10 = local_c;
        local_c = fVar2;
        goto LAB_006bdd27;
      }
      fVar2 = *pfVar6;
      if (param_1 <= fVar2) {
        uVar4 = uVar4 + 2;
        param_4 = (float)((int)param_4 + 2);
        local_10 = fVar2;
        goto LAB_006bdd27;
      }
      local_10 = *local_8;
      if (param_1 <= local_10) {
        uVar4 = uVar4 + 3;
        param_4 = (float)((int)param_4 + 3);
        local_c = fVar2;
        goto LAB_006bdd27;
      }
      param_4 = (float)((int)param_4 + 4);
      local_8 = local_8 + uVar7;
      uVar4 = uVar4 + 4;
      pfVar9 = pfVar9 + uVar7;
      pfVar5 = pfVar5 + uVar7;
      pfVar6 = pfVar6 + uVar7;
      local_c = local_10;
    } while (uVar4 <= iVar3 - 4U);
  }
  if (uVar4 <= uVar1) {
    pfVar5 = (float *)(uVar7 * uVar4 + (int)param_2);
    do {
      local_10 = *pfVar5;
      if (param_1 <= local_10) break;
      uVar4 = uVar4 + 1;
      param_4 = (float)((int)param_4 + 1);
      pfVar5 = (float *)((int)pfVar5 + uVar7);
      local_c = local_10;
    } while (uVar4 <= uVar1);
  }
LAB_006bdd27:
  iVar3 = (int)param_4;
  iVar8 = uVar7 * (int)param_4;
  param_4 = (param_1 - local_c) / (local_10 - local_c);
  (**(code **)(&DAT_00b3d070 + param_3 * 4))
            (param_4,(float *)(iVar8 + (int)param_2),(float *)(uVar7 * uVar4 + (int)param_2),
             &param_4);
  *param_5 = iVar3;
  return (uint)param_4 & 0xff;
}



undefined1 FUN_006bddc0(float param_1,float *param_2,undefined4 param_3,int param_4,uint param_5)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = param_4;
  if (param_4 == 0) {
    return DAT_00b3c468;
  }
  if (param_1 < *param_2) {
    return *(undefined1 *)(param_2 + 1);
  }
  if (*(float *)((param_4 + -1) * (param_5 & 0xff) + (int)param_2) < param_1) {
    return *(undefined1 *)((param_4 + -1) * (param_5 & 0xff) + 4 + (int)param_2);
  }
  param_4 = 0;
  uVar2 = FUN_006bdba0(param_1,param_2,param_3,iVar1,&param_4,param_5);
  return uVar2;
}



bool FUN_006bde40(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_006d3190(param_1,param_2);
  if (cVar1 == '\0') {
    return false;
  }
  return *(char *)(param_1 + 4) == *(char *)(param_2 + 4);
}



void FUN_006bde70(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(undefined1 **)(&DAT_00b3d118 + iVar1) = &LAB_006bf3d0;
  *(undefined1 **)(&DAT_00b3cff8 + iVar1) = &LAB_006bdb90;
  *(undefined1 **)(&DAT_00b3d238 + iVar1) = &LAB_006bdb90;
  *(undefined1 **)(&DAT_00b3d650 + iVar1) = &LAB_006bdb90;
  *(code **)(&DAT_00b3d4a0 + iVar1) = FUN_006bde40;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_0060d0a0;
  *(undefined4 *)(&DAT_00b3d1a8 + iVar1) = 0;
  return;
}



void FUN_006bded0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 1;
  (**(code **)(*piVar1 + 4))(*piVar1,param_2,1,&param_1,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bdf00(void)

{
  if (DAT_00b3c4c0 != '\0') {
    return 0;
  }
  DAT_00b3c4c0 = 1;
  _DAT_00b3d100 = FUN_006f7070;
  _DAT_00b3d638 = FUN_0060d0a0;
  _DAT_00b3d5a8 = FUN_0060d0a0;
  _DAT_00b3d3d0 = FUN_006f7070;
  _DAT_00b3d340 = FUN_0060d0a0;
  DAT_00b3d406 = 8;
  FUN_006bde70(5,0);
  return 1;
}



void FUN_006bdf60(int param_1)

{
  int iVar1;
  int in_ECX;
  undefined4 local_4;
  
  iVar1 = param_1;
  local_4 = 4;
  (**(code **)(*(int *)(param_1 + 0x21c) + 4))(*(int *)(param_1 + 0x21c));
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 4) = (char)param_1 != '\0';
  return;
}



void FUN_006bdfc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_2;
  iVar1 = param_1;
  FUN_006d3660(param_1,param_2);
  param_2 = CONCAT31(param_2._1_3_,*(char *)(iVar2 + 4) != '\0');
  param_1 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_2,1,&param_1,1);
  return;
}



void FUN_006be040(float *param_1,float param_2,float *param_3,int param_4,float param_5,int *param_6
                 ,byte param_7)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  int iVar8;
  float local_20;
  float *local_1c;
  float *local_18;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((param_5 == 1.4013e-45) || (param_2 == -3.4028235e+38)) {
    *param_1 = param_3[1];
    param_1[1] = param_3[2];
    fVar2 = param_3[4];
    param_1[2] = param_3[3];
    param_1[3] = fVar2;
    return;
  }
  uVar7 = (uint)param_7;
  iVar8 = *param_6;
  uVar4 = (int)param_5 - 1;
  local_20 = *(float *)(uVar7 * iVar8 + (int)param_3);
  if (param_2 < local_20) {
    local_20 = *param_3;
    iVar8 = 0;
  }
  uVar3 = iVar8 + 1;
  fVar2 = param_5;
  if (3 < (int)((uVar4 - uVar3) + 1)) {
    local_18 = (float *)((iVar8 + 4) * uVar7 + (int)param_3);
    local_1c = (float *)((iVar8 + 3) * uVar7 + (int)param_3);
    pfVar5 = (float *)(uVar7 * uVar3 + (int)param_3);
    pfVar6 = (float *)((iVar8 + 2) * uVar7 + (int)param_3);
    do {
      fVar1 = *pfVar5;
      fVar2 = fVar1;
      if (param_2 <= fVar1) goto LAB_006be1d8;
      local_20 = *pfVar6;
      if (param_2 <= local_20) {
        uVar3 = uVar3 + 1;
        iVar8 = iVar8 + 1;
        fVar2 = local_20;
        local_20 = fVar1;
        goto LAB_006be1d8;
      }
      fVar1 = *local_1c;
      if (param_2 <= fVar1) {
        uVar3 = uVar3 + 2;
        iVar8 = iVar8 + 2;
        fVar2 = fVar1;
        goto LAB_006be1d8;
      }
      fVar2 = *local_18;
      if (param_2 <= fVar2) {
        uVar3 = uVar3 + 3;
        iVar8 = iVar8 + 3;
        local_20 = fVar1;
        goto LAB_006be1d8;
      }
      local_1c = local_1c + uVar7;
      local_18 = local_18 + uVar7;
      uVar3 = uVar3 + 4;
      iVar8 = iVar8 + 4;
      pfVar5 = pfVar5 + uVar7;
      pfVar6 = pfVar6 + uVar7;
      local_20 = fVar2;
    } while (uVar3 <= (int)param_5 - 4U);
  }
  if (uVar3 <= uVar4) {
    pfVar5 = (float *)(uVar7 * uVar3 + (int)param_3);
    do {
      fVar2 = *pfVar5;
      if (param_2 <= fVar2) break;
      uVar3 = uVar3 + 1;
      iVar8 = iVar8 + 1;
      pfVar5 = (float *)((int)pfVar5 + uVar7);
      local_20 = fVar2;
    } while (uVar3 <= uVar4);
  }
LAB_006be1d8:
  local_10 = 0.0;
  local_c = 0.0;
  local_8 = 0.0;
  local_4 = 0.0;
  (**(code **)(&DAT_00b3d040 + param_4 * 4))
            ((param_2 - local_20) / (fVar2 - local_20),(float *)(uVar7 * iVar8 + (int)param_3),
             (float *)(uVar7 * uVar3 + (int)param_3),&local_10);
  *param_6 = iVar8;
  *param_1 = local_10;
  param_1[1] = local_c;
  param_1[2] = local_8;
  param_1[3] = local_4;
  return;
}



float * FUN_006be280(float *param_1,float param_2,float *param_3,undefined4 param_4,int param_5,
                    uint param_6)

{
  int iVar1;
  
  iVar1 = param_5;
  if (param_5 == 0) {
    *param_1 = DAT_00b3c4e8;
    param_1[1] = DAT_00b3c4ec;
    param_1[2] = DAT_00b3c4f0;
    param_1[3] = DAT_00b3c4f4;
    return param_1;
  }
  if (param_2 < *param_3) {
    *param_1 = param_3[1];
    param_1[1] = param_3[2];
    param_1[2] = param_3[3];
    param_1[3] = param_3[4];
    return param_1;
  }
  if (*(float *)((param_5 + -1) * (param_6 & 0xff) + (int)param_3) < param_2) {
    param_3 = (float *)((param_5 + -1) * (param_6 & 0xff) + 4 + (int)param_3);
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
    return param_1;
  }
  param_5 = 0;
  FUN_006be040(param_1,param_2,param_3,param_4,iVar1,&param_5,param_6);
  return param_1;
}



void FUN_006be360(undefined4 param_1,int param_2)

{
  char cVar1;
  
  cVar1 = FUN_006d3190(param_1,param_2);
  if (cVar1 == '\0') {
    return;
  }
  FUN_0073b770(param_2 + 4);
  return;
}



void FUN_006be390(undefined4 param_1,undefined4 param_2)

{
  FUN_006d3660(param_1,param_2);
  FUN_00709510(param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006be3b0(void)

{
  if (DAT_00b3c4c1 != '\0') {
    return 0;
  }
  _DAT_00b3d160 = 0;
  _DAT_00b3d280 = 0;
  _DAT_00b3d698 = 0;
  _DAT_00b3d458 = 0;
  _DAT_00b3d1f0 = 0;
  DAT_00b3c4c1 = 1;
  _DAT_00b3d0d0 = FUN_006f7070;
  _DAT_00b3d608 = FUN_0060d0a0;
  _DAT_00b3d578 = FUN_0060d0a0;
  _DAT_00b3d3a0 = FUN_006f7070;
  _DAT_00b3d310 = FUN_0060d0a0;
  DAT_00b3d3fa = 0x14;
  _DAT_00b3d040 = &LAB_006be010;
  _DAT_00b3d4e8 = FUN_006be360;
  return 1;
}



void FUN_006be430(void)

{
  int in_ECX;
  
  FUN_00714c40(0,0,0,0);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x2d) = 0;
  *(undefined1 *)(in_ECX + 0x2e) = 0;
  return;
}



void FUN_006be490(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x30);
  iVar1 = 3;
  do {
    if (*piVar2 != 0) {
      (**(code **)(&DAT_00b3d2c8 + piVar2[-4] * 4))(*piVar2);
    }
    *piVar2 = 0;
    piVar2[-7] = 0;
    piVar2[-4] = 0;
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



void FUN_006be4d0(undefined4 param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float local_c [3];
  
  uVar6 = 0;
  piVar5 = (int *)(param_2 + 0x14);
  do {
    if (*piVar5 == 0) {
      fVar7 = (float10)0;
    }
    else {
      fVar7 = (float10)FUN_006bb270(param_1,piVar5[7],piVar5[3],*piVar5,piVar5 + 10,
                                    *(undefined1 *)(uVar6 + 0x2c + param_2));
    }
    local_c[uVar6] = (float)fVar7;
    uVar6 = uVar6 + 1;
    piVar5 = piVar5 + 1;
  } while (uVar6 < 3);
  fVar7 = (float10)fcos((float10)(local_c[0] * 0.5));
  fVar8 = (float10)fsin((float10)(local_c[0] * 0.5));
  fVar1 = (float)fVar7;
  fVar2 = (float)fVar8;
  fVar7 = (float10)fcos((float10)(local_c[1] * 0.5));
  fVar9 = (float10)fsin((float10)(local_c[1] * 0.5));
  fVar8 = (float10)fcos((float10)(local_c[2] * 0.5));
  fVar10 = (float10)fsin((float10)(local_c[2] * 0.5));
  fVar4 = (float)fVar9 * (float)fVar10;
  fVar3 = (float)fVar8 * (float)fVar7;
  *param_4 = fVar2 * fVar4 + fVar1 * fVar3;
  param_4[1] = fVar2 * fVar3 - fVar1 * fVar4;
  fVar3 = (float)fVar7 * (float)fVar10;
  fVar4 = (float)fVar8 * (float)fVar9;
  param_4[2] = fVar2 * fVar3 + fVar1 * fVar4;
  param_4[3] = fVar1 * fVar3 - fVar4 * fVar2;
  return;
}



uint FUN_006be5e0(int *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint local_c;
  
  pbVar1 = (byte *)((int)param_1 + 0x2c);
  local_c = 0;
  piVar8 = (int *)((int)param_1 + 0x20);
  iVar6 = param_2 - (int)param_1;
  pbVar5 = pbVar1;
  param_1 = (int *)(param_2 + 0x30);
  while (((iVar2 = piVar8[-3], uVar4 = local_c, iVar2 == *(int *)((int)piVar8 + iVar6 + -0xc) &&
          (*piVar8 == *(int *)((int)piVar8 + iVar6))) &&
         (pbVar1[local_c] == *(byte *)(local_c + 0x2c + param_2)))) {
    if (iVar2 != 0) {
      pcVar3 = *(code **)(&DAT_00b3d4a0 + *piVar8 * 4);
      uVar7 = 0;
      if (iVar2 != 0) {
        do {
          uVar4 = (*pcVar3)(*pbVar5 * uVar7 + piVar8[4],pbVar5[iVar6] * uVar7 + *param_1);
          if ((char)uVar4 == '\0') goto LAB_006be6a4;
          uVar7 = uVar7 + 1;
        } while (uVar7 < (uint)piVar8[-3]);
      }
    }
    param_1 = param_1 + 1;
    local_c = local_c + 1;
    piVar8 = piVar8 + 1;
    pbVar5 = pbVar5 + 1;
    if (2 < local_c) {
      return CONCAT31((int3)(local_c >> 8),1);
    }
  }
LAB_006be6a4:
  return uVar4 & 0xffffff00;
}



void FUN_006be6b0(int *param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  
  iVar4 = (int)param_1 - param_2;
  piVar7 = (int *)(param_2 + 0x20);
  param_2 = param_2 - (int)param_1;
  pbVar5 = (byte *)((int)param_1 + 0x2c);
  local_c = 3;
  param_1 = (int *)((int)param_1 + 0x30);
  do {
    *(int *)(iVar4 + -0xc + (int)piVar7) = piVar7[-3];
    *(int *)(iVar4 + (int)piVar7) = *piVar7;
    uVar1 = piVar7[-3];
    if (uVar1 != 0) {
      iVar3 = (**(code **)(&DAT_00b3d358 + *piVar7 * 4))(uVar1);
      *param_1 = iVar3;
      pcVar2 = *(code **)(&DAT_00b3d530 + *piVar7 * 4);
      uVar6 = 0;
      if (uVar1 != 0) {
        do {
          (*pcVar2)(*pbVar5 * uVar6 + *param_1,pbVar5[param_2] * uVar6 + piVar7[4]);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
      }
    }
    param_1 = param_1 + 1;
    piVar7 = piVar7 + 1;
    pbVar5 = pbVar5 + 1;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}



uint * FUN_006be770(uint param_1)

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
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x48 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x48)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x48,param_1,FUN_006be430,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



void FUN_006be840(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(param_1 + 0x30);
  do {
    if (*piVar1 != 0) {
      (**(code **)(&DAT_00b3d410 + piVar1[-4] * 4))
                (*piVar1,piVar1[-7],*(undefined1 *)(uVar2 + 0x2c + param_1));
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (uVar2 < 3);
  return;
}



bool FUN_006be880(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  piVar3 = param_3;
  piVar2 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*param_3 == 0) {
    param_3 = (int *)FUN_00401f00(0x4c,uVar5);
    local_4 = 0;
    if (param_3 == (int *)0x0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = param_3 + 1;
      *param_3 = 1;
      _eh_vector_constructor_iterator_(piVar6,0x48,1,FUN_006be430,FUN_0060d0a0);
    }
    *piVar2 = (int)piVar6;
    *piVar3 = 1;
  }
  local_4 = 0xffffffff;
  iVar1 = *piVar2;
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  uVar5 = 0;
  do {
    uVar7 = uVar5 & 0xff;
    local_10 = *(undefined4 *)(iVar1 + 0x30 + uVar7 * 4);
    param_2 = *(int **)(iVar1 + 0x14 + uVar7 * 4);
    if (param_2 != (int *)0x0) {
      cVar4 = (**(code **)(&DAT_00b3d1a8 + *(int *)(iVar1 + 0x20 + uVar7 * 4) * 4))
                        (param_1,&local_10,&param_2);
      if (cVar4 != '\0') {
        param_3 = (int *)CONCAT31(param_3._1_3_,1);
      }
      *(int **)(iVar1 + 0x14 + uVar7 * 4) = param_2;
      *(undefined4 *)(iVar1 + 0x30 + uVar7 * 4) = local_10;
      *(undefined4 *)(iVar1 + 0x3c + uVar7 * 4) = 0;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  *unaff_FS_OFFSET = local_c;
  return (char)param_3 != '\0';
}



void FUN_006be990(int param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1,&local_4,4,&param_1,1);
  *param_2 = local_4;
  return;
}



void FUN_006be9d0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1,param_2,4,&param_1,1);
  return;
}



void FUN_006bea00(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int *piVar4;
  int local_8;
  int local_4;
  
  iVar1 = param_1;
  local_4 = in_ECX;
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    piVar4 = (int *)(param_1 + 0x21c);
    param_1 = 4;
    (**(code **)(*piVar4 + 4))(*piVar4,&local_8,4,&param_1,1);
  }
  uVar3 = 0;
  piVar4 = (int *)(in_ECX + 0x14);
  do {
    param_1 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),piVar4,4,&param_1,1);
    if (*piVar4 != 0) {
      param_1 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&param_1,1);
      piVar4[3] = local_8;
      *(undefined *)(uVar3 + 0x2c + local_4) = (&DAT_00b3d3e8)[local_8];
      iVar2 = (**(code **)(&DAT_00b3d088 + local_8 * 4))(iVar1,*piVar4);
      piVar4[7] = iVar2;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (uVar3 < 3);
  return;
}



void FUN_006bead0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 local_4;
  
  piVar1 = (int *)(param_2 + 0x14);
  param_2 = 3;
  do {
    local_4 = 4;
    (**(code **)(*(int *)(param_1 + 0x220) + 8))(*(int *)(param_1 + 0x220),piVar1,4,&local_4,1);
    if (*piVar1 != 0) {
      local_4 = 4;
      (**(code **)(*(int *)(param_1 + 0x220) + 8))
                (*(int *)(param_1 + 0x220),piVar1 + 3,4,&local_4,1);
      (**(code **)(&DAT_00b3d5c0 + piVar1[3] * 4))(param_1,piVar1[7],*piVar1);
    }
    piVar1 = piVar1 + 1;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}



uint * FUN_006beb60(undefined4 param_1,uint param_2)

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
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x48 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x48)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x48,param_2,FUN_006be430,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bea00(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006bec20(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bead0(param_1,param_2);
    param_2 = param_2 + 0x48;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bec50(void)

{
  if (DAT_00b3c52c != '\0') {
    return 0;
  }
  _DAT_00b3d158 = 0;
  _DAT_00b3d278 = 0;
  _DAT_00b3d690 = 0;
  DAT_00b3c52c = 1;
  _DAT_00b3d0c8 = FUN_006beb60;
  _DAT_00b3d600 = FUN_006bec20;
  _DAT_00b3d570 = FUN_006be6b0;
  _DAT_00b3d398 = FUN_006be770;
  _DAT_00b3d308 = &LAB_006be810;
  DAT_00b3d3f8 = 0x48;
  _DAT_00b3d038 = FUN_006be4d0;
  _DAT_00b3d4e0 = FUN_006be5e0;
  _DAT_00b3d450 = FUN_006be840;
  _DAT_00b3d1e8 = FUN_006be880;
  return 1;
}



void FUN_006bece0(float param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar7 = 1.0 - param_1;
  fVar2 = *(float *)(param_2 + 0xc);
  fVar3 = *(float *)(param_2 + 0x10);
  fVar4 = *(float *)(param_3 + 8);
  fVar5 = *(float *)(param_3 + 0xc);
  fVar6 = *(float *)(param_3 + 0x10);
  *param_4 = *(float *)(param_3 + 4) * param_1 + fVar7 * *(float *)(param_2 + 4);
  param_4[1] = fVar4 * param_1 + fVar1 * fVar7;
  param_4[2] = fVar5 * param_1 + fVar2 * fVar7;
  param_4[3] = param_1 * fVar6 + fVar7 * fVar3;
  return;
}



undefined4 FUN_006bee00(uint param_1,undefined4 *param_2,uint *param_3)

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
    FUN_006be280(&local_1c,param_1,_Src,1,*param_3,0x14);
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



void FUN_006befa0(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006be390(param_1,param_2);
    param_2 = param_2 + 0x14;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006befd0(void)

{
  if (DAT_00b3c588 != '\0') {
    return 0;
  }
  _DAT_00b3d164 = 0;
  _DAT_00b3d284 = 0;
  _DAT_00b3d69c = 0;
  _DAT_00b3d45c = 0;
  DAT_00b3c588 = 1;
  _DAT_00b3d0d4 = FUN_006c2270;
  _DAT_00b3d60c = FUN_006befa0;
  _DAT_00b3d57c = &LAB_006c29e0;
  _DAT_00b3d3a4 = FUN_006c2000;
  _DAT_00b3d314 = &LAB_006c20a0;
  DAT_00b3d3fb = 0x14;
  _DAT_00b3d044 = FUN_006bece0;
  _DAT_00b3d4ec = &LAB_006c1fb0;
  _DAT_00b3d1f4 = FUN_006bee00;
  return 1;
}



uint * FUN_006bf0b0(uint param_1)

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
  uVar3 = -(uint)((int)((ulonglong)param_1 * 8 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 8);
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,8,param_1,FUN_007616d0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006bf180(uint param_1,undefined4 *param_2,uint *param_3)

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
    fVar4 = (float10)FUN_006bb4d0(param_1,_Src,1,*param_3,8);
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



void FUN_006bf300(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bb620(param_1,param_2);
    param_2 = param_2 + 8;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bf330(void)

{
  if (DAT_00b3c5e4 != '\0') {
    return 0;
  }
  _DAT_00b3d11c = 0;
  _DAT_00b3d23c = 0;
  _DAT_00b3d654 = 0;
  DAT_00b3c5e4 = 1;
  _DAT_00b3d08c = FUN_006c2590;
  _DAT_00b3d5c4 = FUN_006bf300;
  _DAT_00b3d534 = &LAB_006c23f0;
  _DAT_00b3d35c = FUN_006bf0b0;
  _DAT_00b3d2cc = &LAB_006bf150;
  DAT_00b3d3e9 = 8;
  _DAT_00b3cffc = &LAB_006bf070;
  _DAT_00b3d4a4 = &LAB_006bf060;
  _DAT_00b3d414 = FUN_0060d0a0;
  _DAT_00b3d1ac = FUN_006bf180;
  return 1;
}



void FUN_006bf3e0(float param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = 1.0 - param_1;
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 0xc);
  fVar3 = *(float *)(param_3 + 8);
  fVar4 = *(float *)(param_3 + 0xc);
  *param_4 = *(float *)(param_3 + 4) * param_1 + fVar5 * *(float *)(param_2 + 4);
  param_4[1] = fVar1 * fVar5 + fVar3 * param_1;
  param_4[2] = param_1 * fVar4 + fVar5 * fVar2;
  return;
}



void FUN_006bf480(undefined4 param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)(param_3 + 8);
  fVar2 = *(float *)(param_2 + 8);
  fVar3 = *(float *)(param_3 + 0xc);
  fVar4 = *(float *)(param_2 + 0xc);
  *param_4 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  param_4[1] = fVar1 - fVar2;
  param_4[2] = fVar3 - fVar4;
  return;
}



uint * FUN_006bf4d0(uint param_1)

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
  uVar3 = -(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 0x10)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 != (uint *)0x0) {
    *puVar2 = param_1;
    _eh_vector_constructor_iterator_(puVar2 + 1,0x10,param_1,FUN_007616d0,FUN_0060d0a0);
    *unaff_FS_OFFSET = local_c;
    return puVar2 + 1;
  }
  *unaff_FS_OFFSET = local_c;
  return (uint *)0x0;
}



undefined4 FUN_006bf5a0(uint param_1,undefined4 *param_2,uint *param_3)

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
    FUN_006bbdc0(&local_18,param_1,_Src,1,*param_3,0x10);
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



uint * FUN_006bf730(undefined4 param_1,uint param_2)

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
  uVar3 = -(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)param_2 * 0x10)
  ;
  puVar2 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar3) | uVar3 + 4,uVar1);
  local_4 = 0;
  if (puVar2 == (uint *)0x0) {
    puVar4 = (uint *)0x0;
  }
  else {
    puVar4 = puVar2 + 1;
    *puVar2 = param_2;
    _eh_vector_constructor_iterator_(puVar4,0x10,param_2,FUN_007616d0,FUN_0060d0a0);
  }
  local_4 = 0xffffffff;
  for (; param_2 != 0; param_2 = param_2 - 1) {
    FUN_006bc1c0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar4;
}



void FUN_006bf7f0(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bc1e0(param_1,param_2);
    param_2 = param_2 + 0x10;
  }
  return;
}



void FUN_006bf820(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (param_2 + param_1 * 6) * 4;
  *(undefined1 **)(&DAT_00b3d118 + iVar1) = &LAB_006bf3d0;
  *(code **)(&DAT_00b3cff8 + iVar1) = FUN_006bf3e0;
  *(code **)(&DAT_00b3d238 + iVar1) = FUN_006bf480;
  *(undefined1 **)(&DAT_00b3d650 + iVar1) = &LAB_006bbb80;
  *(undefined1 **)(&DAT_00b3d4a0 + iVar1) = &LAB_006bf3c0;
  *(code **)(&DAT_00b3d410 + iVar1) = FUN_0060d0a0;
  *(code **)(&DAT_00b3d1a8 + iVar1) = FUN_006bf5a0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bf880(void)

{
  if (DAT_00b3c640 != '\0') {
    return 0;
  }
  DAT_00b3c640 = 1;
  _DAT_00b3d0a4 = FUN_006bf730;
  _DAT_00b3d5dc = FUN_006bf7f0;
  _DAT_00b3d54c = &LAB_006c26e0;
  _DAT_00b3d374 = FUN_006bf4d0;
  _DAT_00b3d2e4 = &LAB_006bf570;
  DAT_00b3d3ef = 0x10;
  FUN_006bf820(1,1);
  return 1;
}



undefined4 FUN_006bf940(uint param_1,undefined4 *param_2,uint *param_3)

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
    FUN_006bd1f0(&local_1c,param_1,_Src,1,*param_3,0x14);
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



void FUN_006bfaf0(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_006bd530(param_1,param_2);
    param_2 = param_2 + 0x14;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006bfb20(void)

{
  if (DAT_00b3c69c != '\0') {
    return 0;
  }
  _DAT_00b3d14c = 0;
  _DAT_00b3d26c = 0;
  _DAT_00b3d684 = 0;
  DAT_00b3c69c = 1;
  _DAT_00b3d0bc = FUN_006c2c60;
  _DAT_00b3d5f4 = FUN_006bfaf0;
  _DAT_00b3d564 = &LAB_006c29e0;
  _DAT_00b3d38c = FUN_006c2a10;
  _DAT_00b3d2fc = &LAB_006c20a0;
  DAT_00b3d3f5 = 0x14;
  _DAT_00b3d02c = &LAB_006bf8f0;
  _DAT_00b3d4d4 = &LAB_006c1fb0;
  _DAT_00b3d444 = &LAB_006bf8e0;
  _DAT_00b3d1dc = FUN_006bf940;
  return 1;
}



undefined4 FUN_006bfbb0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_006bbe80(param_1,param_2);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  if (((*(float *)(param_2 + 0x10) == *(float *)(param_1 + 0x10)) &&
      (*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14))) &&
     (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))) {
    cVar1 = FUN_008aa350(param_2 + 0x1c);
    if (cVar1 != '\0') {
      cVar1 = FUN_008aa350(param_2 + 0x28);
      if (cVar1 != '\0') {
        cVar1 = FUN_008aa350(param_2 + 0x34);
        if (cVar1 != '\0') {
          cVar1 = FUN_008aa350(param_2 + 0x40);
          if (cVar1 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



void FUN_006bfcd0(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x48);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x3c);
  fVar5 = *(float *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  fVar7 = *(float *)(param_2 + 8);
  fVar8 = *(float *)(param_2 + 0xc);
  *param_4 = *(float *)(param_2 + 4) +
             (*(float *)(param_2 + 0x28) +
             (*(float *)(param_2 + 0x34) + param_1 * *(float *)(param_2 + 0x40)) * param_1) *
             param_1;
  param_4[1] = fVar7 + (fVar5 + (fVar3 + fVar1 * param_1) * param_1) * param_1;
  param_4[2] = fVar8 + param_1 * (fVar6 + (fVar4 + fVar2 * param_1) * param_1);
  return;
}



void FUN_006bfdb0(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar7 = param_1 * 3.0;
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x48);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x3c);
  fVar5 = *(float *)(param_2 + 0x2c);
  fVar6 = *(float *)(param_2 + 0x30);
  *param_4 = *(float *)(param_2 + 0x28) +
             (*(float *)(param_2 + 0x34) * 2.0 + fVar7 * *(float *)(param_2 + 0x40)) * param_1;
  param_4[1] = fVar5 + (fVar3 * 2.0 + fVar1 * fVar7) * param_1;
  param_4[2] = fVar6 + param_1 * (fVar4 * 2.0 + fVar7 * fVar2);
  return;
}



void FUN_006bfe90(float param_1,int param_2,undefined4 param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_1 = param_1 * 6.0;
  fVar1 = *(float *)(param_2 + 0x44);
  fVar2 = *(float *)(param_2 + 0x48);
  fVar3 = *(float *)(param_2 + 0x38);
  fVar4 = *(float *)(param_2 + 0x3c);
  *param_4 = *(float *)(param_2 + 0x34) * 2.0 + param_1 * *(float *)(param_2 + 0x40);
  param_4[1] = fVar1 * param_1 + fVar3 * 2.0;
  param_4[2] = fVar4 * 2.0 + param_1 * fVar2;
  return;
}



void FUN_006bff30(float *param_1,float *param_2,float param_3,float param_4)

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
  
  fVar1 = *(float *)(in_ECX + 4) - *param_1;
  fVar2 = *(float *)(in_ECX + 8) - param_1[1];
  fVar3 = *(float *)(in_ECX + 0xc) - param_1[2];
  fVar4 = *param_2 - *(float *)(in_ECX + 4);
  fVar5 = param_2[1] - *(float *)(in_ECX + 8);
  fVar6 = param_2[2] - *(float *)(in_ECX + 0xc);
  fVar7 = *(float *)(in_ECX + 0x18) + 1.0;
  fVar8 = 1.0 - *(float *)(in_ECX + 0x18);
  fVar9 = (1.0 - *(float *)(in_ECX + 0x10)) * 0.5;
  fVar10 = fVar9 * (*(float *)(in_ECX + 0x14) + 1.0);
  fVar9 = fVar9 * (1.0 - *(float *)(in_ECX + 0x14));
  fVar11 = fVar8 * fVar10;
  fVar12 = fVar9 * fVar7;
  *(float *)(in_ECX + 0x1c) = fVar12 * fVar1 + fVar11 * fVar4;
  *(float *)(in_ECX + 0x20) = fVar2 * fVar12 + fVar5 * fVar11;
  *(float *)(in_ECX + 0x24) = fVar3 * fVar12 + fVar6 * fVar11;
  fVar9 = fVar9 * fVar8;
  fVar7 = fVar7 * fVar10;
  *(float *)(in_ECX + 0x28) = fVar7 * fVar1 + fVar9 * fVar4;
  *(float *)(in_ECX + 0x2c) = fVar2 * fVar7 + fVar5 * fVar9;
  *(float *)(in_ECX + 0x30) = fVar7 * fVar3 + fVar6 * fVar9;
  fVar1 = 2.0 / (param_4 + param_3);
  param_3 = fVar1 * param_3;
  *(float *)(in_ECX + 0x1c) = param_3 * *(float *)(in_ECX + 0x1c);
  *(float *)(in_ECX + 0x20) = *(float *)(in_ECX + 0x20) * param_3;
  *(float *)(in_ECX + 0x24) = param_3 * *(float *)(in_ECX + 0x24);
  param_4 = param_4 * fVar1;
  *(float *)(in_ECX + 0x28) = param_4 * *(float *)(in_ECX + 0x28);
  *(float *)(in_ECX + 0x2c) = *(float *)(in_ECX + 0x2c) * param_4;
  *(float *)(in_ECX + 0x30) = param_4 * *(float *)(in_ECX + 0x30);
  return;
}


