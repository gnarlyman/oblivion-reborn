
int * FUN_00620050(int *param_1,undefined4 param_2,int *param_3,char param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  float unaff_ESI;
  float10 fVar5;
  float10 fVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 uStack_70;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  fVar5 = (float10)FUN_00612f50(param_1,param_2,0);
  fVar6 = (float10)FUN_0061ddf0(param_1,param_2,&local_74,2);
  uStack_70 = (double)CONCAT44((float)fVar6,(undefined4)uStack_70);
  if ((((param_3 != (int *)0x0) && ((int *)param_3[0x16] != (int *)0x0)) && (param_3 != param_1)) &&
     (iVar3 = (**(code **)(*(int *)param_3[0x16] + 8))(), iVar3 == 0)) {
    if ((param_4 != '\0') && (cVar2 = (**(code **)(*param_3 + 0x334))(1), cVar2 == '\0')) {
      return (int *)0x0;
    }
    fVar6 = (float10)FUN_00612f50(param_1,param_3,0);
    if ((float)fVar6 < (float)fVar5) {
      FUN_0061ddf0(param_1,param_3,&local_74,2);
      pfVar4 = (float *)(**(code **)(*param_3 + 0x15c))(auStack_60);
      local_78 = SUB84((double)*pfVar4,0);
      local_74 = (undefined4)((ulonglong)(double)*pfVar4 >> 0x20);
      puVar8 = auStack_58;
      pfVar4 = (float *)(**(code **)(*param_3 + 0x158))();
      puVar7 = auStack_50;
      uStack_70 = (double)((float)(double)CONCAT44(local_78,(float)fVar6) - *pfVar4);
      iVar3 = (**(code **)(*param_3 + 0x15c))();
      fVar1 = *(float *)(iVar3 + 4);
      iVar3 = (**(code **)(*param_3 + 0x158))(auStack_48);
      if ((float)(double)CONCAT44(local_74,local_78) <=
          (float)(double)CONCAT44(SUB84((double)fVar1,0),unaff_ESI) - *(float *)(iVar3 + 4)) {
        (**(code **)(*param_3 + 0x15c))(auStack_28);
        (**(code **)(*param_3 + 0x158))(auStack_20);
      }
      else {
        (**(code **)(*param_3 + 0x15c))(auStack_40);
        (**(code **)(*param_3 + 0x158))(auStack_38);
      }
      if ((float)puVar7 == 0.0) {
        fVar1 = 0.017453292;
      }
      else {
        fVar5 = (float10)FUN_009870a0();
        fVar1 = (float)fVar5;
      }
      if (ABS(unaff_ESI - (float)puVar8) <= fVar1) {
        cVar2 = (**(code **)(*param_3 + 0x334))(1);
        if (((cVar2 != '\0') && (iVar3 = (**(code **)(*param_3 + 0x330))(), iVar3 != 0)) &&
           (*(char *)(iVar3 + 0x15a) == '\0')) {
          FUN_00612cf0();
        }
        return param_3;
      }
    }
  }
  return (int *)0x0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00620290(char param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  float *pfVar15;
  int in_ECX;
  float unaff_EBX;
  undefined4 unaff_EDI;
  undefined4 *puVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 extraout_ST0;
  float10 fVar20;
  float10 extraout_ST1;
  undefined4 uVar21;
  float fVar22;
  undefined8 uStack_3c;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  int iStack_20;
  float local_1c;
  undefined8 uStack_18;
  undefined8 uStack_10;
  float fStack_4;
  
  if (*(int *)(in_ECX + 0x74) != 3) {
    return;
  }
  iVar9 = FUN_006135f0();
  if (iVar9 == 0) {
    return;
  }
  *(undefined4 *)(in_ECX + 0x50) = 0xff;
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar21 = *(undefined4 *)(in_ECX + 0x3c);
    uVar10 = FUN_006135f0(0);
    fVar17 = (float10)FUN_00612f50(uVar21,uVar10);
    *(float *)(in_ECX + 0x184) = (float)fVar17;
  }
  uStack_18 = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x184),(undefined4)uStack_18);
  if (param_1 == '\0') {
    fVar17 = (float10)FUN_00615520();
  }
  else {
    piVar11 = *(int **)(in_ECX + 0x3c);
    fVar17 = (float10)(**(code **)(*piVar11 + 0x26c))();
    uStack_10 = (double)fVar17;
    fVar17 = (float10)(**(code **)(*piVar11 + 0xec))();
    fVar17 = fVar17 * (float10)uStack_10;
  }
  local_1c = (float)fVar17;
  uVar21 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  uVar21 = FUN_00470720(uVar21);
  uVar5 = FUN_0051ac80(uVar21);
  uStack_18 = (double)CONCAT71(uStack_18._1_7_,uVar5);
  uVar21 = 3;
  (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
  FUN_00470750(uVar21);
  FUN_005e0ee0();
  iVar9 = FUN_005e0ee0();
  if (iVar9 != 7) {
    FUN_005e0ee0();
  }
  FUN_006135f0();
  uVar5 = FUN_005e5640();
  iStack_20 = CONCAT31(iStack_20._1_3_,uVar5);
  FUN_006135f0();
  iVar9 = FUN_005e0ee0();
  uStack_10 = (double)CONCAT71(uStack_10._1_7_,iVar9 == 3);
  FUN_006135f0();
  iVar9 = FUN_005e0ee0();
  if (iVar9 == 7) {
LAB_006203ed:
    fStack_24 = (float)CONCAT31(fStack_24._1_3_,1);
  }
  else {
    FUN_006135f0();
    iVar9 = FUN_005e0ee0();
    fStack_24 = (float)((uint)fStack_24 & 0xffffff00);
    if (iVar9 == 8) goto LAB_006203ed;
  }
  piVar11 = (int *)FUN_006135f0();
  uVar21 = 1;
  (**(code **)(*piVar11 + 0x334))();
  FUN_006135f0();
  uVar5 = FUN_005e5670();
  uStack_3c._0_5_ = CONCAT14(uVar5,(float)uStack_3c);
  FUN_00612d60();
  cVar6 = FUN_00613440((undefined4)uStack_18,iStack_20,0);
  if (cVar6 == '\0') {
    return;
  }
  iVar9 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xf8))(1);
  iStack_34 = iVar9;
  if ((param_1 == '\0') || (iVar12 = FUN_00612d60(), iVar12 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (((fStack_4._0_1_ == '\0') &&
      ((iVar12 = FUN_00612d60(), iVar12 != 0 || (*(int *)(in_ECX + 0x70) == 0)))) || (bVar3)) {
    piVar13 = (int *)FUN_006135f0();
    piVar11 = *(int **)(in_ECX + 0x3c);
    iVar9 = *(int *)(in_ECX + 0x70);
    uVar10 = (**(code **)(*piVar13 + 0x19c))((float)uStack_3c);
    uVar10 = (**(code **)(*piVar11 + 0x284))(7,uStack_28,iVar9 == 0,uStack_2c,uVar10);
    uVar10 = FUN_00613780(uVar10);
    uVar10 = FUN_005e0f50(uVar10);
    FUN_00546800(uVar10);
    iVar9 = iStack_34;
  }
  fStack_4 = 0.0;
  if (((*(int *)(in_ECX + 0x7c) != 0) &&
      (*(float *)(in_ECX + 0x108) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x104))) &&
     (cVar6 = FUN_00613bb0(*(int *)(in_ECX + 0x7c),0,0), cVar6 != '\0')) {
    piVar13 = (int *)FUN_006135f0();
    piVar11 = *(int **)(in_ECX + 0x3c);
    iVar9 = *piVar11;
    uVar10 = (**(code **)(*piVar13 + 0x19c))(0);
    uVar10 = (**(code **)(*piVar11 + 0x284))(7,uStack_28,0,uStack_2c,uVar10);
    uVar10 = FUN_00415360(uVar10);
    uVar10 = (**(code **)(iVar9 + 0x284))(uVar10);
    uVar10 = FUN_005e0f50(uVar10);
    fVar17 = (float10)FUN_00546800(uVar10);
    fStack_4 = (float)fVar17;
    iVar9 = iStack_34;
  }
  if ((((char)((uint)unaff_EDI >> 0x10) == '\0') &&
      (iVar12 = FUN_006135f0(), iVar12 != DAT_00b333c4)) &&
     ((*(int *)(in_ECX + 0x7c) != 0 && (0.0 < fStack_4)))) {
    fStack_4 = fStack_4 + 100.0;
  }
  piVar11 = *(int **)(in_ECX + 0x3c);
  uVar10 = (**(code **)(*piVar11 + 0x284))(7,iVar9 != 0,uStack_28);
  uVar10 = (**(code **)(*piVar11 + 0x284))(0xf,uVar10);
  uVar10 = FUN_005e0f50(uVar10);
  fVar17 = (float10)FUN_00546d40(uVar10);
  fVar22 = (float)fVar17;
  if ((char)((uint)uVar21 >> 0x18) != '\0') {
    uStack_10 = (double)((ulonglong)uStack_10 & 0xffffffff);
  }
  piVar11 = (int *)FUN_006135f0();
  cVar6 = (**(code **)(*piVar11 + 0x1a0))();
  if (cVar6 == '\0') {
    piVar11 = (int *)FUN_006135f0();
    cVar6 = (**(code **)(*piVar11 + 0x19c))();
    if (cVar6 != '\0') goto LAB_006206a4;
    FUN_006135f0();
    iVar12 = FUN_005e0dc0();
    if (iVar12 == 3) goto LAB_006206a4;
    FUN_006135f0();
    cVar6 = FUN_005e0f30();
    if (cVar6 != '\0') goto LAB_006206a4;
    FUN_006135f0();
    iVar12 = FUN_005e0dc0();
    if (iVar12 == 5) goto LAB_006206a4;
    FUN_006135f0();
    cVar6 = FUN_005e0da0();
    if (cVar6 == '\0') goto LAB_006206a4;
  }
  else {
LAB_006206a4:
    fVar22 = 0.0;
  }
  cVar6 = (char)uStack_28;
  fVar17 = (float10)unaff_EBX;
  if ((char)uStack_28 == '\0') {
LAB_006206c9:
    cVar7 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2dc))();
    if (cVar7 != '\0') {
      fVar17 = (float10)unaff_EBX;
      fVar18 = (float10)uStack_10._4_4_;
      goto LAB_006206eb;
    }
LAB_006206f8:
    fVar19 = (float10)0;
    unaff_EBX = (float)fVar19;
    uStack_10 = (double)CONCAT44((float)fVar19,(uint)uStack_10);
    if (*(char *)(in_ECX + 0x158) == '\0') {
      fVar22 = (float)fVar19;
    }
    fVar20 = (float10)unaff_EBX;
  }
  else {
    fVar18 = (float10)uStack_10._4_4_;
    if (fVar17 <= fVar18) goto LAB_006206c9;
LAB_006206eb:
    fVar19 = (float10)0;
    if (*(char *)(in_ECX + 0x158) == '\0') goto LAB_006206f8;
    fVar20 = fVar17;
    if ((fVar19 < fVar18) && (fVar20 = fVar18, fVar19 < fVar17)) {
      uStack_3c._0_4_ = ABS((float)(fVar18 - fVar17));
      uVar10 = FUN_009828c0();
      uStack_3c = (double)CONCAT44(uStack_3c._4_4_,uVar10);
      iVar12 = FUN_009828c0();
      fVar18 = extraout_ST0;
      fVar20 = extraout_ST1;
      fVar19 = fVar17;
      if (iVar12 != 0) {
        if (extraout_ST1 <= extraout_ST0) {
          iVar14 = FUN_0047df80(0);
          uStack_10 = (double)CONCAT44((float)(iVar14 % iVar12) + uStack_10._4_4_,(uint)uStack_10);
          uStack_3c._0_4_ = (float)(iVar14 % iVar12);
          iVar14 = FUN_0047df80(0);
          uStack_3c = (double)CONCAT44(uStack_3c._4_4_,iVar14 % iVar12);
          unaff_EBX = unaff_EBX - (float)(iVar14 % iVar12);
        }
        else {
          uStack_3c = (double)extraout_ST1;
          iVar14 = FUN_0047df80(0);
          uStack_10 = (double)CONCAT44((float)uStack_3c - (float)(iVar14 % iVar12),(uint)uStack_10);
          iVar14 = FUN_0047df80(0);
          uStack_3c = (double)CONCAT44(uStack_3c._4_4_,iVar14 % iVar12);
          unaff_EBX = (float)(iVar14 % iVar12) + unaff_EBX;
        }
        fVar18 = (float10)unaff_EBX;
        fVar20 = (float10)uStack_10._4_4_;
        fVar19 = (float10)0;
      }
      if (fVar20 <= fVar18) {
        fVar20 = fVar18;
      }
    }
  }
  fVar1 = (float)fVar20;
  if ((((cVar6 != '\0') && ((char)((uint)uVar21 >> 8) == '\0')) || (*(int *)(in_ECX + 0x6c) == 4))
     || ((char)uVar21 != '\0')) {
    fVar22 = (float)fVar19;
  }
  iVar12 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))();
  cVar7 = (char)((uint)uVar21 >> 8);
  if (iVar12 == 0) {
LAB_0062085f:
    fVar22 = 0.0;
  }
  else {
    uVar21 = 0x1b;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(0x1b);
    cVar8 = FUN_00470d00(uVar21);
    if (cVar8 == '\0') goto LAB_0062085f;
  }
  if (iVar9 == 0) {
    iVar12 = FUN_006135f0();
    cVar8 = (**(code **)(**(int **)(iVar12 + 0x58) + 0x138))();
    if (cVar8 == '\0') goto LAB_00620881;
  }
  else {
LAB_00620881:
    iVar12 = FUN_006135f0();
    cVar8 = (**(code **)(**(int **)(iVar12 + 0x58) + 0x13c))();
    if (cVar8 == '\0') goto LAB_006208a3;
  }
  fVar22 = 0.0;
LAB_006208a3:
  if ((iVar9 != 0) && (0.0 < fVar22)) {
    fVar17 = (float10)FUN_00484850(0);
    if (fVar17 <= (float10)0) {
      fVar22 = (float)(float10)0;
    }
  }
  uStack_18 = (double)(fVar22 + fVar1);
  fVar2 = 100.0 - (fVar22 + fVar1);
  fVar4 = _DAT_00b37128;
  if (_DAT_00b37128 < fVar2) {
    fVar4 = fVar2;
  }
  uStack_3c._0_4_ = fVar4;
  if (*(int *)(in_ECX + 0x6c) == 1) {
    uStack_3c._0_4_ = 0.0;
  }
  if ((cVar6 != '\0') && (cVar7 == '\0')) {
    uStack_3c._0_4_ = 0.0;
  }
  if (*(int *)(in_ECX + 0x78) == 2) {
    uStack_3c._0_4_ = 0.0;
  }
  iVar9 = FUN_009828c0();
  if (iVar9 < 1) {
    iVar9 = 100;
  }
  iVar12 = FUN_0047df80(0);
  fVar2 = (float)(iVar12 % iVar9);
  uStack_3c = (double)CONCAT44(uStack_3c._4_4_,fVar2);
  if ((fVar1 <= fVar2) || (uStack_10._4_4_ < unaff_EBX == (uStack_10._4_4_ == unaff_EBX))) {
    if ((fVar1 <= fVar2) || ((uStack_10._4_4_ <= unaff_EBX || ((char)uStack_28 != '\0')))) {
      if ((0.0 < fVar22) && (fVar2 < (float)uStack_18)) {
        FUN_005f4ae0(1);
        uVar21 = *(undefined4 *)(in_ECX + 0x74);
        *(undefined4 *)(in_ECX + 0x74) = 1;
        *(undefined4 *)(in_ECX + 0x78) = uVar21;
        return;
      }
      if (*(int *)(in_ECX + 0x78) != 2) {
        *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
        *(undefined4 *)(in_ECX + 0x74) = 2;
        piVar11 = (int *)FUN_005e0f50();
        piVar13 = (int *)FUN_005e0f50();
        fVar17 = (float10)(**(code **)(*piVar11 + 0x140))();
        fVar17 = (float10)(**(code **)(*piVar13 + 0x13c))((float)fVar17);
        fVar17 = (float10)FUN_00546b20((float)fVar17);
        *(undefined4 *)(in_ECX + 0xe0) = *(undefined4 *)(in_ECX + 0x44);
        *(float *)(in_ECX + 0xe4) = (float)fVar17;
        *(undefined4 *)(in_ECX + 0xe8) = 0xbf800000;
      }
    }
    else {
      if ((*(char *)(in_ECX + 0x49) != '\0') && (FUN_005f4ae0(0), *(int *)(in_ECX + 0x74) == 1)) {
        *(undefined4 *)(in_ECX + 0x78) = 1;
        *(undefined4 *)(in_ECX + 0x74) = 3;
      }
      iVar9 = FUN_006135f0();
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = iVar9 + 0x68;
      }
      cVar6 = FUN_00617340(*(undefined4 *)(in_ECX + 0x7c),iVar9);
      if (cVar6 != '\0') {
        uStack_10._4_4_ = (float)*(undefined4 *)(in_ECX + 0x44);
        puVar16 = (undefined4 *)FUN_00403c00();
        uVar21 = *puVar16;
        *(float *)(in_ECX + 0x104) = uStack_10._4_4_;
        *(undefined4 *)(in_ECX + 0x108) = uVar21;
        *(undefined4 *)(in_ECX + 0x10c) = 0xbf800000;
        return;
      }
    }
  }
  else {
    if ((*(char *)(in_ECX + 0x49) != '\0') && (FUN_005f4ae0(0), *(int *)(in_ECX + 0x74) == 1)) {
      *(undefined4 *)(in_ECX + 0x78) = 1;
      *(undefined4 *)(in_ECX + 0x74) = 3;
    }
    uStack_10._0_5_ = (uint5)(uint)uStack_10;
    uStack_3c = (double)((ulonglong)uStack_3c & 0xffffffffffffff00);
    iVar9 = FUN_0061f8f0(uStack_28,fStack_24,uStack_2c,uStack_30,iStack_20,iStack_34,
                         (int)&uStack_10 + 4,&uStack_3c);
    if ((iVar9 != 0xff) && (*(char *)(in_ECX + 0x159) == '\0')) {
      piVar11 = (int *)FUN_006135f0();
      iVar12 = (**(code **)(*piVar11 + 0x154))();
      if (iVar12 != 0) {
        FUN_00616ca0();
        pfVar15 = (float *)FUN_00403c00();
        fStack_24 = *pfVar15;
        iStack_20 = FUN_0047df80(0);
        if ((float)iStack_20 / 32767.0 <= fStack_24) {
          puVar16 = (undefined4 *)(**(int **)(in_ECX + 0x3c) + 0x308);
          if (uStack_10._4_1_ != '\0') {
            uVar21 = FUN_006135f0(10,0);
            (*(code *)*puVar16)(uVar21);
            FUN_00612bd0(iVar9,fVar22);
            return;
          }
          uVar21 = FUN_006135f0(0,0);
          (*(code *)*puVar16)(uVar21);
        }
        FUN_00612bd0(iVar9,(float)uStack_3c);
        return;
      }
    }
  }
  return;
}



void FUN_00620e50(void)

{
  int in_ECX;
  
  FUN_006160b0();
  if ((*(int *)(in_ECX + 0x70) != 2) && (*(int *)(in_ECX + 0x70) != 4)) {
    FUN_0061fef0();
    return;
  }
  FUN_0061fe90();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00620e80(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  
  piVar1 = (int *)(*(int **)(in_ECX + 0x3c))[0x16];
  if (*(int *)(in_ECX + 0x6c) != 8) {
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
    if (cVar3 != '\0') {
      *(undefined1 *)(in_ECX + 0x4d) = 1;
      if (*(int *)(in_ECX + 0x70) != 0xd) {
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      *(undefined4 *)(in_ECX + 0x70) = 0xd;
      FUN_006160b0();
      if ((*(int *)(in_ECX + 0x70) != 2) && (*(int *)(in_ECX + 0x70) != 4)) {
        FUN_0061fef0();
        return;
      }
      FUN_0061fe90();
      return;
    }
    piVar2 = *(int **)(in_ECX + 0x3c);
    *(undefined1 *)(in_ECX + 0x4f) = 0;
    FUN_00619920(8);
    iVar5 = **(int **)(in_ECX + 0x3c);
    uVar4 = FUN_006135f0(2,0);
    (**(code **)(iVar5 + 0x308))(uVar4);
    iVar5 = **(int **)(in_ECX + 0x3c);
    uVar4 = FUN_006135f0(1,1,0,0);
    (**(code **)(iVar5 + 0x318))(uVar4);
    cVar3 = (**(code **)(*piVar2 + 0x334))(1);
    if (cVar3 == '\0') {
      return;
    }
    uVar4 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
    iVar5 = FUN_009832e6(uVar4);
    if (iVar5 != 0) {
      for (piVar2 = *(int **)(in_ECX + 0x40);
          (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1])
      {
        FUN_00626c90(*(undefined4 *)*piVar2);
      }
    }
    cVar3 = FUN_005e3270();
    if (cVar3 == '\0') {
      FUN_005e6d70(0);
    }
  }
  cVar3 = FUN_005e5670();
  if (cVar3 != '\0') {
    FUN_005f4ae0(0);
  }
  if ((*(int *)(in_ECX + 0x70) == 0xc) && (cVar3 = FUN_005e0530(), cVar3 == '\0')) {
    uVar4 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
    iVar5 = FUN_009832e6(uVar4);
    if (iVar5 != 0) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x178))(0);
    }
    if (*(int *)(in_ECX + 0x70) != 0xd) {
      *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
    }
    *(undefined4 *)(in_ECX + 0x70) = 0xd;
    FUN_00619920(0);
  }
  iVar5 = (**(code **)(*piVar1 + 0x184))();
  if (iVar5 != in_ECX) {
    uVar4 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
    iVar5 = FUN_009832e6(uVar4);
    if ((iVar5 != 0) &&
       (_DAT_00b36d50 < *(float *)(iVar5 + 0x4c) != (_DAT_00b36d50 == *(float *)(iVar5 + 0x4c)))) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x178))(0);
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x340))(0);
    }
    return;
  }
  *(undefined1 *)(in_ECX + 0x4d) = 1;
  if (*(int *)(in_ECX + 0x70) != 0xd) {
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0xd;
  FUN_0061d320();
  return;
}



void FUN_006210d0(undefined4 param_1,char param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 == '\0') {
    puVar1 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar1;
      while (puVar2 != (undefined4 *)0x0) {
        FUN_006162d0(*puVar2);
        puVar2 = (undefined4 *)*puVar1;
      }
    }
    FUN_00616190(param_1,0,0,0,0);
  }
  if ((*(int *)(in_ECX + 0x6c) == 7) &&
     (iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x174))(), iVar3 != in_ECX))
  {
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x178))(0);
  }
  FUN_00612de0((-(param_2 != '\0') & 5U) + 7);
  FUN_00619920(0);
  FUN_00620e80();
  return;
}



undefined4
FUN_00621170(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (((param_1 != (int *)0x0) && ((int *)param_1[0x16] != (int *)0x0)) &&
     (iVar2 = (**(code **)(*(int *)param_1[0x16] + 8))(), iVar2 == 0)) {
    uVar4 = 0;
    iVar2 = (**(code **)(*param_1 + 0x330))();
    if (iVar2 == 0) {
      puVar3 = (undefined4 *)FUN_0067c880(param_1,0);
      puVar5 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        do {
          puVar1 = (undefined4 *)puVar5[1];
          uVar4 = FUN_00620050(param_1,param_2,*(undefined4 *)*puVar5,param_3,param_4,param_5);
          puVar5 = puVar1;
        } while (puVar1 != (undefined4 *)0x0);
        FUN_004526e0();
        FUN_00401f20(puVar3);
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x330))();
      puVar5 = (undefined4 *)(iVar2 + 0x15c);
      if (puVar5 != (undefined4 *)0x0) {
        do {
          uVar4 = *puVar5;
          puVar5 = (undefined4 *)puVar5[1];
          uVar4 = FUN_00620050(param_1,param_2,uVar4,param_3,param_4,param_5);
        } while (puVar5 != (undefined4 *)0x0);
        return uVar4;
      }
    }
    return uVar4;
  }
  return 0;
}



void FUN_00621270(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = FUN_006135f0();
  if (iVar3 == 0) {
    return;
  }
  cVar1 = FUN_005e0530();
  if ((cVar1 != '\0') && (cVar1 = FUN_005e1cb0(), cVar1 == '\0')) {
    FUN_006135f0();
    if ((*(int *)(in_ECX + 0x6c) == 7) &&
       (iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x174))(), iVar3 != in_ECX
       )) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x178))(0);
    }
    FUN_00612de0(0xc);
    FUN_00619920(0);
    FUN_00620e80();
    return;
  }
  if (*(int *)(in_ECX + 0x6c) == 0xb) {
    return;
  }
  if (*(int *)(in_ECX + 0x6c) == 10) {
    return;
  }
  FUN_006135f0();
  cVar1 = FUN_005e0530();
  if (((cVar1 != '\0') && (cVar2 = FUN_005e0530(), cVar2 == '\0')) &&
     (cVar2 = FUN_005e3400(), cVar2 != '\0')) {
    cVar2 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
    if (cVar2 == '\0') {
      cVar2 = FUN_005e1cb0();
      if (cVar2 == '\0') {
        FUN_006160b0();
        FUN_0061fef0();
      }
    }
    else if ((*(char *)(in_ECX + 0x130) != '\0') && (*(int *)(in_ECX + 0x7c) == 0)) {
      if (*(char *)(in_ECX + 0x115) == '\0') {
        FUN_006160b0();
        FUN_0061fe90();
        return;
      }
      goto LAB_006213b1;
    }
  }
  cVar2 = FUN_005e1e90();
  if (cVar2 == '\0') {
    cVar2 = FUN_005e3400();
    if ((cVar2 != '\0') && (cVar2 = FUN_005e1cb0(), cVar2 != '\0')) {
      return;
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  else if (cVar1 != '\0') {
    return;
  }
  if (*(char *)(in_ECX + 0x115) == '\0') {
    FUN_00620e50();
    return;
  }
LAB_006213b1:
  FUN_0061c6e0();
  return;
}



void FUN_006213d0(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  
  switch(*(undefined4 *)(in_ECX + 0x74)) {
  case 0:
    if (*(int *)(in_ECX + 0x74) == 0) {
      iVar4 = *(int *)(in_ECX + 0x70);
      if ((((iVar4 == 4) || (iVar4 == 3)) || (iVar4 == 8)) || (iVar4 == 9)) {
        iVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x5c) + 0x30))();
        cVar1 = iVar4 != 0;
      }
      else {
        uVar6 = 3;
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
        uVar6 = FUN_00470720(uVar6);
        cVar1 = FUN_0051ac80(uVar6);
      }
      iVar4 = *(int *)(in_ECX + 0x70);
      if ((((iVar4 == 4) || (iVar4 == 3)) || ((iVar4 == 8 || (iVar4 == 9)))) &&
         ((iVar4 != 2 && (iVar4 != 4)))) {
        if (cVar1 == '\0') {
LAB_00620cb4:
          uVar6 = *(undefined4 *)(in_ECX + 0x74);
          *(undefined4 *)(in_ECX + 0x74) = 3;
          *(undefined4 *)(in_ECX + 0x78) = uVar6;
          return;
        }
      }
      else if ((iVar4 == 0) || ((iVar4 == 1 || (iVar4 == 3)))) {
        if (cVar1 == '\0') {
          uVar6 = *(undefined4 *)(in_ECX + 0x74);
          *(undefined4 *)(in_ECX + 0x74) = 3;
          *(undefined4 *)(in_ECX + 0x78) = uVar6;
          return;
        }
        uVar6 = 3;
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
        iVar4 = FUN_00470750(uVar6);
        if (iVar4 == 2) {
          *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(in_ECX + 0x74);
          *(undefined4 *)(in_ECX + 0x74) = 3;
          FUN_00620290(0);
          return;
        }
      }
      else if ((iVar4 == 2) || (iVar4 == 4)) {
        if (cVar1 == '\0') goto LAB_00620cb4;
        cVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x138))();
        if (cVar1 != '\0') {
          uVar6 = 3;
          (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
          iVar4 = FUN_00470750(uVar6);
          if (iVar4 != 2) {
            return;
          }
          cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
          if (cVar1 != '\0') {
            return;
          }
          iVar4 = FUN_006135f0();
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            FUN_006135f0();
            cVar1 = FUN_005e05b0();
            iVar4 = (-(uint)(cVar1 != '\0') & 0xffffffd3) + 0x32;
          }
          if (((*(char *)(in_ECX + 0x17e) == '\0') || (*(char *)(in_ECX + 0x159) != '\0')) &&
             ((iVar2 = FUN_0047df80(0), iVar4 <= iVar2 % 100 ||
              ((*(char *)(in_ECX + 0x159) != '\0' || (*(char *)(in_ECX + 0x158) == '\0')))))) {
            uVar6 = 3;
            (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(3);
            FUN_004706d0(uVar6);
            return;
          }
          *(undefined1 *)(in_ECX + 0x17e) = 0;
        }
        uVar6 = *(undefined4 *)(in_ECX + 0x3c);
        uVar3 = FUN_006135f0(&stack0xfffffffc,*(undefined4 *)(in_ECX + 0x180));
        FUN_0061ddf0(uVar6,uVar3);
        fVar5 = (float10)FUN_004a9720();
        FUN_0065a650((float)(fVar5 + (float10)0.0));
      }
    }
    return;
  case 1:
    FUN_0061c550();
    return;
  case 2:
    FUN_00612c30();
    return;
  case 3:
    break;
  default:
    goto switchD_006213df_default;
  }
  iVar4 = FUN_006135f0();
  if ((iVar4 == 0) || (iVar4 = FUN_006135f0(), *(int *)(iVar4 + 0x58) == 0)) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_006135f0();
    iVar4 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x47c))();
  }
  if (*(int *)(in_ECX + 0x1a8) < DAT_00b372f0) {
    return;
  }
  if (iVar4 != 0) {
    return;
  }
  cVar1 = FUN_00612670(*(undefined4 *)(in_ECX + 0x70));
  if (cVar1 == '\0') {
    if (*(int *)(in_ECX + 0x7c) != 0) {
      uVar6 = 1;
      goto LAB_00621454;
    }
  }
  else {
    uVar6 = 0;
LAB_00621454:
    FUN_00620290(uVar6);
  }
  if ((*(int *)(in_ECX + 0x6c) != 4) &&
     (cVar1 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70)), cVar1 != '\0')) {
    FUN_006189e0(0);
  }
  if ((*(int *)(in_ECX + 0x80) != 0) &&
     (cVar1 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70)), cVar1 == '\0')) {
    FUN_006189e0(1);
  }
switchD_006213df_default:
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006214b0(void)

{
  char cVar1;
  ushort uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int in_ECX;
  int *piVar7;
  float10 fVar8;
  char local_15;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  if (*(int *)(in_ECX + 0x6c) != 2) {
    return;
  }
  local_15 = '\x01';
  cVar1 = FUN_00612790(*(undefined4 *)(in_ECX + 0x44),&local_15);
  if (cVar1 != '\0') {
    FUN_006160b0();
    FUN_00619920(0);
    iVar4 = *(int *)(in_ECX + 0x6c);
    if (iVar4 == 4) {
      return;
    }
    if (iVar4 == 7) {
      return;
    }
    if (iVar4 == 9) {
      return;
    }
    if (iVar4 == 8) {
      return;
    }
    if (iVar4 == 0xc) {
      return;
    }
    *(undefined1 *)(in_ECX + 0x191) = 1;
    return;
  }
  uVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  cVar1 = FUN_005e05b0();
  if (cVar1 == '\0') goto LAB_00621682;
  if (DAT_00b333b8 == '\0') {
    pfVar3 = (float *)(**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))();
    fStack_c = *(float *)(in_ECX + 0x198) - *pfVar3;
    fStack_8 = *(float *)(in_ECX + 0x19c) - pfVar3[1];
    fStack_4 = *(float *)(in_ECX + 0x1a0) - pfVar3[2];
    fStack_14 = fStack_4 * fStack_4 + fStack_c * fStack_c + fStack_8 * fStack_8;
    if (_DAT_00b372c8 * _DAT_00b372c8 <= fStack_14) {
      FUN_00614bb0();
    }
  }
  iVar4 = FUN_006135f0();
  if (iVar4 != 0) {
    FUN_006135f0();
    iVar4 = FUN_005e0ee0();
    if ((iVar4 == 2) && (*(int *)(in_ECX + 0x74) == 2)) {
      *(undefined4 *)(in_ECX + 0x78) = 2;
      *(undefined4 *)(in_ECX + 0x74) = 3;
      FUN_006213d0();
    }
  }
  if ((*(ushort *)(in_ECX + 0x192) & uVar2) != 0) {
    if (DAT_00b3b908 != '\0') {
      uVar5 = FUN_004da2a0();
      FUN_00579b60("%.20s has run out of room to dodge.",uVar5);
    }
LAB_0062167b:
    FUN_006160b0();
LAB_00621682:
    FUN_00619920(0);
    return;
  }
  fVar8 = (float10)FUN_00615980();
  fStack_14 = (float)fVar8;
  fVar8 = (float10)FUN_00615520();
  fStack_10 = (float)fVar8;
  if ((uVar2 & 0xc) == 0) {
    if ((((uVar2 & 1) != 0) && (pfVar3 = (float *)FUN_00403c00(), fStack_14 <= *pfVar3)) &&
       (local_15 != '\0')) goto LAB_0062167b;
  }
  else if (fStack_14 <= fStack_10) {
    pfVar3 = (float *)FUN_00403c00();
    if ((fStack_14 < *pfVar3) && ((uVar2 & 1) != 0)) {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(1,0);
    }
  }
  else {
    cVar1 = FUN_00613440(fStack_14,fStack_10,0);
    if (cVar1 == '\0') {
      if (local_15 != '\0') {
        cVar1 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
        if (cVar1 == '\0') {
LAB_006216f7:
          FUN_006160b0();
          FUN_0061d320();
        }
        else {
          cVar1 = FUN_00614290();
          if (cVar1 == '\0') {
            FUN_006160b0();
            FUN_0061fe90();
          }
          else if (*(int *)(in_ECX + 0x74) != 0) goto LAB_006216f7;
        }
      }
    }
    else {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(1,1);
    }
  }
  iVar4 = FUN_006135f0();
  if (iVar4 == 0) {
LAB_006217d0:
    uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
    if ((uVar6 & 0x200) == 0) goto LAB_006217fd;
    piVar7 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    uVar5 = 0x100;
  }
  else {
    FUN_006135f0();
    iVar4 = FUN_005e0ee0();
    if (iVar4 != 2) goto LAB_006217d0;
    iVar4 = FUN_0047df80(0);
    fStack_10 = (float)(iVar4 % 100);
    uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
    if ((((uVar6 & 0x100) == 0) || (*(char *)(in_ECX + 0x49) != '\0')) ||
       (pfVar3 = (float *)FUN_00403c00(), fStack_10 <= *pfVar3)) goto LAB_006217fd;
    piVar7 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    uVar5 = 0x200;
  }
  (**(code **)(*piVar7 + 0x2c4))(uVar5,1);
LAB_006217fd:
  fStack_10 = (float)FUN_0047df80(0);
  if ((float)(int)fStack_10 / 32767.0 <= _DAT_00b36f48) {
    iVar4 = **(int **)(in_ECX + 0x3c);
    uVar5 = FUN_006135f0(0,0);
    (**(code **)(iVar4 + 0x308))(uVar5);
  }
  return;
}



void FUN_00621850(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) == 1) {
    if (*(float *)(in_ECX + 0xd8) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4)) {
      FUN_00619920(0);
      return;
    }
    iVar2 = FUN_006135f0();
    if (iVar2 != 0) {
      FUN_006135f0();
      cVar1 = FUN_005e5640();
      if (cVar1 != '\0') goto LAB_0062189e;
    }
    if (*(char *)(in_ECX + 0x15a) != '\0') {
LAB_0062189e:
      if (*(int *)(in_ECX + 0x74) == 2) {
        *(undefined4 *)(in_ECX + 0x78) = 2;
        *(undefined4 *)(in_ECX + 0x74) = 3;
        FUN_006213d0();
      }
      FUN_0061ce40();
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006218d0(void)

{
  float fVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int in_ECX;
  float10 fVar9;
  
  if (*(int *)(in_ECX + 0x6c) != 3) {
    return;
  }
  uVar6 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c0))();
  cVar5 = FUN_005e05b0();
  if (cVar5 == '\0') {
    FUN_00619920(0);
    *(undefined4 *)(in_ECX + 0x54) = 0xbf800000;
    *(undefined1 *)(in_ECX + 0x58) = 0;
    return;
  }
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar2 = *(undefined4 *)(in_ECX + 0x3c);
    uVar7 = FUN_006135f0(0);
    fVar9 = (float10)FUN_00612f50(uVar2,uVar7);
    *(float *)(in_ECX + 0x184) = (float)fVar9;
  }
  fVar1 = *(float *)(in_ECX + 0x184);
  fVar9 = (float10)FUN_00615520();
  if ((*(float *)(in_ECX + 0x54) <= 0.0) || (3.0 < ABS(fVar1 - *(float *)(in_ECX + 0x54)))) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar4 = false;
  if ((!bVar3) && (cVar5 = FUN_005e05b0(), cVar5 != '\0')) {
    if (*(char *)(in_ECX + 0x58) == '\0') {
      *(undefined1 *)(in_ECX + 0x58) = 1;
      *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xfc) = 0x3f800000;
      *(undefined4 *)(in_ECX + 0x100) = 0xbf800000;
    }
    else if (*(float *)(in_ECX + 0xfc) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xf8)) {
      bVar4 = true;
    }
  }
  if ((uVar6 & 2) == 0) {
    if ((*(char *)(in_ECX + 0x58) == '\0') &&
       (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xf8) <= *(float *)(in_ECX + 0xfc))) {
      return;
    }
    if ((float)fVar9 < fVar1) {
      cVar5 = FUN_00613440(fVar1,(float)fVar9,0);
      if (((cVar5 == '\0') || (bVar4)) &&
         ((cVar5 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70)), cVar5 == '\0' ||
          (*(int *)(in_ECX + 0x74) != 0)))) {
        *(undefined4 *)(in_ECX + 0x54) = 0xbf800000;
        *(undefined1 *)(in_ECX + 0x58) = 0;
        if (cVar5 == '\0') {
          cVar5 = FUN_00614290();
          if (cVar5 == '\0') {
            piVar8 = (int *)FUN_005e0f50();
            cVar5 = (**(code **)(*piVar8 + 0x16c))(0x80);
            if (cVar5 != '\0') {
              FUN_006160b0();
              FUN_0061fef0();
              return;
            }
          }
        }
        else {
          cVar5 = FUN_00614290();
          if (cVar5 == '\0') {
            FUN_006160b0();
            FUN_0061fe90();
            return;
          }
        }
        FUN_0061d320();
        return;
      }
      *(float *)(in_ECX + 0x54) = fVar1;
      return;
    }
  }
  else {
    if (fVar1 < _DAT_00b36f18) {
      *(float *)(in_ECX + 0x54) = fVar1;
      FUN_006213d0();
      return;
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(2,0);
  }
  FUN_00619920(0);
  *(undefined4 *)(in_ECX + 0x54) = 0xbf800000;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00621b40(int *param_1,int *param_2,float *param_3,char param_4,char param_5)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  char cVar13;
  int iVar14;
  float10 fVar15;
  int *piStack_1c;
  int local_18;
  int *local_14;
  double dStack_c;
  float fStack_4;
  
  piVar1 = param_1;
  local_18 = -0x40800000;
  piVar8 = (int *)FUN_005e0f50();
  cVar2 = (**(code **)(*piVar8 + 0x16c))(0x40);
  cVar3 = FUN_005e0530();
  iVar9 = (**(code **)(*piVar1 + 0x330))();
  piVar8 = param_2;
  if (iVar9 == 0) {
    if ((int *)piVar1[0x16] == (int *)0x0) {
      uVar11 = FUN_005f2820(0,param_2,1,0,0);
    }
    else {
      uVar11 = (**(code **)(*(int *)piVar1[0x16] + 0x1c4))(piVar1,param_2);
    }
    cVar4 = FUN_00617590(piVar1,piVar8,uVar11);
  }
  else {
    iVar9 = (**(code **)(*piVar1 + 0x330))();
    iVar10 = FUN_006135f0();
    if (iVar10 != 0) {
      FUN_006135f0();
      cVar4 = FUN_005e0530();
      if (((cVar4 != '\0') && (cVar4 = FUN_005e0530(), cVar4 == '\0')) &&
         (cVar4 = FUN_005e1cb0(), cVar4 == '\0')) {
        cVar4 = '\0';
        goto LAB_00621c1e;
      }
    }
    cVar4 = *(char *)(iVar9 + 0x174);
  }
LAB_00621c1e:
  local_14 = param_1;
  if (param_1 == (int *)0x0) {
    local_14 = (int *)(**(code **)(*(int *)piVar1[0x16] + 0xec))(1);
  }
  if (local_14 == (int *)0x0) {
    iVar9 = 0;
LAB_00621c69:
    iVar10 = (**(code **)(*piVar1 + 0x330))();
    if (iVar10 != 0) {
      local_14 = (int *)0x0;
      iVar9 = (**(code **)(*piVar1 + 0x330))();
      iVar9 = *(int *)(iVar9 + 0xa8);
      if (iVar9 != 0) goto LAB_00621c95;
    }
  }
  else {
    iVar9 = FUN_009832e6(local_14[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
    if (iVar9 == 0) goto LAB_00621c69;
LAB_00621c95:
    if ((*(char *)(iVar9 + 0x90) == '\x04') && (iVar10 = *(int *)(iVar9 + 100), iVar10 != 0)) {
      fVar15 = (float10)FUN_004849c0();
      dStack_c = (double)fVar15;
      fVar15 = (float10)(*(code *)**(undefined4 **)(iVar10 + 0x24))(0);
      if ((float10)dStack_c < fVar15) {
        local_14 = (int *)0x0;
        iVar9 = 0;
      }
    }
  }
  iVar10 = (**(code **)(*piVar1 + 0x330))();
  cVar5 = FUN_00612a30(piVar1,local_14);
  if (iVar10 == 0) {
    cVar13 = '\0';
    sVar7 = FUN_005e5690(0x11,0,1);
    if (((sVar7 != 0) && (iVar14 = (**(code **)(*piVar1 + 0x164))(), iVar14 != 0)) &&
       (cVar6 = FUN_00470960(sVar7,&dStack_c), cVar6 != '\0')) {
      cVar13 = '\x01';
    }
  }
  else {
    cVar13 = *(char *)(iVar10 + 0x1bc);
  }
  iVar14 = -1;
  cVar6 = FUN_005e1cf0();
  if (((cVar6 != '\0') && (iVar9 != 0)) && (cVar5 != '\0')) {
    if (param_1 == (int *)0x0) {
      if (local_14 == (int *)0x0) {
        fVar15 = (float10)FUN_00612560(piVar1,iVar9,0x3f800000,0);
      }
      else {
        iVar14 = (**(code **)(*piVar1 + 0x330))();
        if ((iVar14 == 0) || (iVar14 = (**(code **)(*(int *)piVar1[0x16] + 0xec))(1), iVar14 == 0))
        {
          fVar15 = (float10)(**(code **)(*(int *)piVar1[0x16] + 0x324))();
        }
        else {
          uVar11 = (**(code **)(*(int *)piVar1[0x16] + 0xec))(1);
          fVar15 = (float10)FUN_00612a90(piVar1,uVar11);
        }
      }
    }
    else {
      fVar15 = (float10)FUN_00612a90(piVar1,param_1);
    }
    piStack_1c = (int *)(float)fVar15;
    if ((*(char *)(iVar9 + 0x90) == '\x05') || (*(char *)(iVar9 + 0x90) == '\x04')) {
      local_18 = 2;
      if (cVar3 != '\0') {
        local_18 = 0xd;
        piStack_1c = (int *)0x0;
      }
    }
    else {
      local_18 = 1;
    }
    iVar14 = FUN_004bb060();
  }
  if (iVar10 == 0) {
LAB_00621e6f:
    if (cVar4 == '\0') {
LAB_00621e7a:
      cVar4 = FUN_005e3270();
      if (cVar4 == '\0') goto LAB_00621f5e;
    }
  }
  else {
    FUN_00621270();
    if (*(int *)(iVar10 + 0x70) == 0xc) {
      return 0xc;
    }
    if (*(int *)(iVar10 + 0x6c) == 0xb) goto LAB_00621e6f;
    if (cVar4 == '\0') {
      if (local_18 == 1) {
        piStack_1c = (int *)0x0;
      }
      goto LAB_00621e7a;
    }
  }
  param_1 = (int *)0x0;
  if (iVar10 != 0) {
    iVar9 = FUN_00616980(&param_1,3,*(undefined1 *)(iVar10 + 0x17c));
    *(int *)(iVar10 + 0x7c) = iVar9;
    if (((((float)piStack_1c < (float)param_1) && (0.0 < (float)param_1)) && (iVar9 != 0)) &&
       (local_14 == (int *)0x0)) {
      piStack_1c = param_1;
      local_18 = 3;
      iVar14 = FUN_00415360();
    }
  }
  param_1 = (int *)(**(code **)(*piVar1 + 0x34c))(0,1);
  fVar15 = (float10)FUN_00546c60((float)(int)param_1);
  param_1 = (int *)(float)fVar15;
  if (((float)piStack_1c < (float)param_1) && (cVar13 != '\0')) {
    if (iVar14 != -1) {
      iVar9 = (**(code **)(*piVar1 + 0x284))(iVar14);
      iVar14 = (**(code **)(*piVar1 + 0x284))(0x11);
      if (iVar14 <= iVar9) goto LAB_00621f5e;
    }
    local_18 = 0;
    piStack_1c = param_1;
  }
LAB_00621f5e:
  if ((iVar10 != 0) && (cVar3 == '\0')) {
    param_1 = (int *)0x0;
    iVar9 = FUN_00616980(&param_1,4,*(undefined1 *)(iVar10 + 0x17c));
    *(int *)(iVar10 + 0x80) = iVar9;
    if (((float)piStack_1c < (float)param_1) &&
       ((iVar9 != 0 && (cVar2 != '\0' || local_14 == (int *)0x0)))) {
      piStack_1c = param_1;
      local_18 = 4;
      FUN_00415360();
    }
  }
  if (((cVar2 != '\0') &&
      (((local_18 == 2 || (iVar9 = (**(code **)(*piVar1 + 0x330))(), iVar9 == 0)) ||
       (iVar9 = (**(code **)(*piVar1 + 0x330))(), *(int *)(iVar9 + 0x80) != 0)))) &&
     ((local_18 == 3 && (local_18 = 4, iVar10 != 0)))) {
    FUN_00415360();
  }
  if (param_4 == '\0') {
    uVar11 = (**(code **)(*piVar1 + 0x284))(0x22);
    iVar9 = FUN_005f1910(8);
    fVar15 = (float10)(**(code **)(*piVar1 + 0x288))(8,(float)iVar9,uVar11);
    fVar15 = (float10)FUN_00546cc0((float)fVar15);
    fStack_4 = (float)fVar15;
    cVar2 = (**(code **)(*piVar1 + 0x25c))();
    if (cVar2 != '\0') {
      param_1 = (int *)0x0;
    }
    if (((float)piStack_1c < (float)param_1) && (_DAT_00b37038 < (float)param_1)) {
      piVar8 = (int *)FUN_005e0f50();
      cVar2 = (**(code **)(*piVar8 + 0x16c))(0x20);
      if (cVar2 == '\0') {
        local_18 = 7;
        piStack_1c = param_1;
      }
    }
    piVar8 = param_2;
    if ((param_5 != '\0') && (param_2 == DAT_00b333c4)) {
      piVar12 = (int *)FUN_005e0f50();
      cVar2 = (**(code **)(*piVar12 + 0x16c))(8);
      if (cVar2 != '\0') {
        uVar11 = (**(code **)(*piVar1 + 0x224))(piVar8);
        uVar11 = (**(code **)(*piVar1 + 0x284))(0x21,uVar11);
        fVar15 = (float10)FUN_00546d10(param_1,uVar11);
        param_1 = (int *)(float)fVar15;
        if (((float)piStack_1c < (float)param_1) &&
           (cVar2 = (**(code **)(*piVar8 + 0x370))(piVar1), cVar2 != '\0')) {
          local_18 = 5;
          piStack_1c = param_1;
        }
      }
    }
  }
  if (param_3 != (float *)0x0) {
    *param_3 = (float)piStack_1c;
  }
  return local_18;
}



void FUN_00622180(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  uint *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  double dStack_18;
  uint uStack_14;
  uint uStack_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b520b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = uStack_14;
  dStack_18 = (double)((ulonglong)uStack_14 << 0x20);
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1,uVar3);
  cVar2 = FUN_00613880();
  if ((cVar2 != '\0') || (*(int *)(in_ECX + 0x6c) == 7)) goto LAB_00622795;
  FUN_0061ff40();
  if ((iVar4 == 0) &&
     (((iVar8 = *(int *)(in_ECX + 0x70), iVar8 == 1 || (iVar8 == 2)) || (iVar8 == 0xd)))) {
    if ((*(int *)(in_ECX + 0xa8) != 0) && (*(int *)(in_ECX + 0x98) != 0)) {
      if (iVar8 != 5) {
        if (DAT_00b3b908 != '\0') {
          uVar5 = FUN_004da2a0("attempt to Yield");
          FUN_00579b60("%.20s is going to %s!",uVar5);
        }
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      uVar5 = *(undefined4 *)(in_ECX + 0x3c);
      *(undefined4 *)(in_ECX + 0x70) = 5;
      uVar6 = FUN_006135f0();
      uVar5 = FUN_00521450(uVar5,uVar6);
      *(undefined4 *)(in_ECX + 200) = uVar5;
      FUN_00612de0(iVar8);
      iVar7 = FUN_00401f00(0xc);
      dStack_18 = (double)CONCAT44(uVar1,iVar7);
      iVar8 = 0;
      puStack_8 = (undefined1 *)0x0;
      if (iVar7 != 0) {
        iVar8 = FUN_00484420(*(undefined4 *)(in_ECX + 0xa8),0);
      }
      uVar5 = *(undefined4 *)(in_ECX + 0x3c);
      puStack_8 = (undefined1 *)0xffffffff;
      uVar6 = FUN_006135f0(0,*(undefined1 *)(in_ECX + 0x4d),*(int *)(in_ECX + 200) != 0);
      FUN_00621b40(uVar5,iVar8,uVar6);
      if (iVar8 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar8);
      }
    }
    if (*(int *)(in_ECX + 0x6c) == 7) goto LAB_00622795;
    uVar1 = uStack_14;
    if ((*(char *)(in_ECX + 0x48) == '\0') && (cVar2 = FUN_005e1cf0(), cVar2 != '\0')) {
      piVar9 = (int *)FUN_005e0f50();
      cVar2 = (**(code **)(*piVar9 + 0x168))(1);
      if (cVar2 == '\0') {
        iVar8 = FUN_005e0a90(0xd);
        if (iVar8 != 0) {
          iVar7 = FUN_009832e6(*(undefined4 *)(iVar8 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
          if ((iVar7 == 0) || (*(char *)(iVar7 + 0x90) != '\x04')) {
LAB_006223a3:
            iVar4 = *(int *)(in_ECX + 0x70);
            if (iVar4 != 5) {
              if (DAT_00b3b908 != '\0') {
                uVar5 = FUN_004da2a0("attempt to Yield");
                FUN_00579b60("%.20s is going to %s!",uVar5);
              }
              *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
            }
            uVar5 = *(undefined4 *)(in_ECX + 0x3c);
            *(undefined4 *)(in_ECX + 0x70) = 5;
            uVar6 = FUN_006135f0();
            uVar5 = FUN_00521450(uVar5,uVar6);
            *(undefined4 *)(in_ECX + 200) = uVar5;
            FUN_00612de0(iVar4);
            uVar5 = *(undefined4 *)(in_ECX + 0x3c);
            uVar6 = FUN_006135f0(0,*(undefined1 *)(in_ECX + 0x4d),*(int *)(in_ECX + 200) != 0);
            iVar4 = FUN_00621b40(uVar5,iVar8,uVar6);
            FUN_00484470();
            FUN_00401f20(iVar8);
            if ((iVar4 != 1) && (iVar4 != 2)) {
              FUN_00612de0(iVar4);
              FUN_005e0a70();
              *unaff_FS_OFFSET = uStack_10;
              return;
            }
            FUN_00619920(7);
            if (*(int *)(in_ECX + 0x70) != 0xd) {
              *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
            }
            *(undefined4 *)(in_ECX + 0x70) = 0xd;
            FUN_005f5170(0,1);
            *(undefined1 *)(in_ECX + 0x48) = 1;
            *unaff_FS_OFFSET = uStack_10;
            return;
          }
          iVar7 = *(int *)(iVar7 + 100);
          if (iVar7 != 0) {
            fVar10 = (float10)FUN_004849c0();
            dStack_18 = (double)fVar10;
            fVar10 = (float10)(*(code *)**(undefined4 **)(iVar7 + 0x24))(0);
            if (fVar10 <= (float10)dStack_18) goto LAB_006223a3;
          }
        }
        *(undefined1 *)(in_ECX + 0x48) = 1;
        FUN_005e0a70();
        uVar1 = uStack_14;
      }
    }
  }
  uStack_14 = uVar1;
  switch(*(undefined4 *)(in_ECX + 0x70)) {
  case 0:
    if ((*(char *)(in_ECX + 0x1bc) != '\0') &&
       (cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x304))(), cVar2 == '\0'))
    {
LAB_00622504:
      FUN_005e6d70(1);
      *unaff_FS_OFFSET = uStack_10;
      return;
    }
    break;
  case 1:
    if ((iVar4 == 0) ||
       (fVar10 = (float10)FUN_00484850(0), fVar10 < (float10)0.0 != (fVar10 == (float10)0.0))) {
      if (*(char *)(in_ECX + 0x131) == '\0') {
        iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(5);
        if ((iVar4 != 0) ||
           (iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(4), iVar4 != 0)) {
          uVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
          FUN_0061c680(uVar5);
        }
        *(undefined1 *)(in_ECX + 0x130) = 1;
        *unaff_FS_OFFSET = uStack_14;
        return;
      }
      goto LAB_006226d6;
    }
    cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x304))();
    if (cVar2 == '\0') {
      FUN_005e6d70(1);
      *unaff_FS_OFFSET = uStack_10;
      return;
    }
    break;
  case 2:
    if (((iVar4 == 0) ||
        (iVar4 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
        iVar4 == 0)) ||
       (fVar10 = (float10)FUN_00484850(0), fVar10 < (float10)0.0 != (fVar10 == (float10)0.0))) {
      if (*(char *)(in_ECX + 0x130) == '\0') {
        iVar4 = FUN_00612960(1);
        if (iVar4 != 0) {
          uVar5 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
          FUN_0061c680(uVar5);
        }
        *(undefined1 *)(in_ECX + 0x131) = 1;
        *unaff_FS_OFFSET = uStack_10;
        return;
      }
      goto LAB_006226d6;
    }
    if ((*(char *)(iVar4 + 0x90) == '\x05') &&
       (iVar8 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xf4))(1), iVar8 == 0)) {
      FUN_00619920(7);
      if (*(int *)(in_ECX + 0x70) != 0xd) {
        *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
      }
      *(undefined4 *)(in_ECX + 0x70) = 0xd;
      FUN_005f5170(1,5);
      *unaff_FS_OFFSET = uStack_10;
      return;
    }
    cVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x304))();
    if (cVar2 == '\0') goto LAB_00622504;
    if (*(char *)(iVar4 + 0x90) == '\x04') {
      iVar4 = *(int *)(iVar4 + 100);
      if (iVar4 == 0) {
LAB_006226d6:
        if (*(int *)(in_ECX + 0x70) != 0xd) {
          *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
        }
        *(undefined4 *)(in_ECX + 0x70) = 0xd;
        *unaff_FS_OFFSET = uStack_10;
        return;
      }
      fVar10 = (float10)FUN_004849c0();
      fVar11 = (float10)(*(code *)**(undefined4 **)(iVar4 + 0x24))(0);
      if ((float10)(double)fVar10 < fVar11) goto LAB_006226d6;
    }
    break;
  case 3:
    if ((*(int *)(in_ECX + 0x7c) == 0) ||
       (cVar2 = FUN_00613bb0(*(int *)(in_ECX + 0x7c),*(undefined1 *)(in_ECX + 0x17c),1),
       cVar2 != '\0')) {
      iVar4 = *(int *)(in_ECX + 0x7c);
LAB_00622772:
      if (iVar4 != 0) break;
    }
    goto LAB_00622774;
  case 4:
    if ((*(int *)(in_ECX + 0x80) == 0) ||
       (cVar2 = FUN_00613bb0(*(int *)(in_ECX + 0x80),*(undefined1 *)(in_ECX + 0x17c),1),
       cVar2 != '\0')) {
      iVar4 = *(int *)(in_ECX + 0x80);
      goto LAB_00622772;
    }
LAB_00622774:
    if (*(int *)(in_ECX + 0x70) != 0xd) {
      *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
    }
    *(undefined4 *)(in_ECX + 0x70) = 0xd;
    break;
  case 8:
    FUN_0061d7e0();
    *unaff_FS_OFFSET = uStack_10;
    return;
  case 9:
    FUN_00619810();
  }
  if (*(int *)(in_ECX + 0x6c) != 0xc) {
    FUN_006213d0();
  }
LAB_00622795:
  *unaff_FS_OFFSET = uStack_10;
  return;
}



undefined1 FUN_00622820(void)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  float10 fVar9;
  undefined1 local_d;
  
  local_d = 0;
  bVar2 = false;
  iVar4 = FUN_006135f0();
  if (iVar4 == 0) {
    return 0;
  }
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar7 = *(undefined4 *)(in_ECX + 0x3c);
    uVar5 = FUN_006135f0(0);
    fVar9 = (float10)FUN_00612f50(uVar7,uVar5);
    *(float *)(in_ECX + 0x184) = (float)fVar9;
  }
  fVar1 = *(float *)(in_ECX + 0x184);
  cVar3 = FUN_005e3270();
  if ((cVar3 != '\0') && (*(int *)(in_ECX + 0x70) == 4)) {
    piVar6 = (int *)FUN_005e0f50();
    fVar9 = (float10)(**(code **)(*piVar6 + 0x14c))();
    if (((float10)fVar1 < fVar9) &&
       ((*(char *)(in_ECX + 0x1bc) != '\0' && (*(char *)(in_ECX + 0x130) != '\0')))) {
      iVar8 = 0;
      local_d = 1;
      goto LAB_00622b61;
    }
  }
  if ((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) {
    cVar3 = FUN_005e0530();
    if (cVar3 == '\0') {
      cVar3 = FUN_005e0530();
      if (cVar3 == '\0') {
        FUN_006135f0();
        cVar3 = FUN_005e0530();
        if (cVar3 != '\0') goto LAB_00622904;
      }
    }
    else {
LAB_00622904:
      bVar2 = true;
    }
  }
  iVar4 = *(int *)(in_ECX + 0x70);
  if (((((iVar4 == 2) || (iVar4 == 4)) && (*(char *)(in_ECX + 0x130) != '\0')) && (!bVar2)) ||
     ((((iVar4 == 0 || (iVar4 == 1)) || (iVar4 == 3)) && (*(char *)(in_ECX + 0x131) != '\0')))) {
    return 0;
  }
  if (bVar2) {
LAB_00622a72:
    iVar4 = 0;
    if ((*(char *)(in_ECX + 0x130) == '\0') && (iVar4 = FUN_00612960(1), iVar4 == 0)) {
      *(undefined1 *)(in_ECX + 0x130) = 1;
    }
    if ((bVar2) && (cVar3 = FUN_004d7f80(), cVar3 != '\0')) {
      if ((iVar4 != 0) || (*(char *)(in_ECX + 0x1bc) == '\0')) goto LAB_00622ac1;
      iVar8 = 0;
LAB_00622b2d:
      FUN_0061c680(0);
      cVar3 = FUN_00614290();
      *(bool *)(in_ECX + 0x116) = cVar3 == '\0';
    }
    else {
      if ((iVar4 == 0) && (*(int *)(in_ECX + 0x7c) == 0)) {
        return 0;
      }
LAB_00622ac1:
      uVar7 = *(undefined4 *)(in_ECX + 0x3c);
      uVar5 = FUN_006135f0(0,*(undefined1 *)(in_ECX + 0x4d),*(int *)(in_ECX + 200) != 0);
      iVar8 = FUN_00621b40(uVar7,iVar4,uVar5);
      if ((iVar4 == 0) || (iVar8 != 1)) {
        if (iVar8 == 0) goto LAB_00622b2d;
      }
      else {
        uVar7 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
        FUN_0061c680(uVar7);
        cVar3 = FUN_00614290();
        *(bool *)(in_ECX + 0x116) = cVar3 == '\0';
      }
    }
    if (iVar4 != 0) goto LAB_00622b4c;
  }
  else {
    if ((iVar4 == 2) || (iVar4 == 4)) {
      piVar6 = (int *)FUN_005e0f50();
      fVar9 = (float10)(**(code **)(*piVar6 + 0x14c))();
      if (((float10)fVar1 < fVar9) && (*(char *)(in_ECX + 0x130) == '\0')) goto LAB_00622a72;
    }
    iVar4 = *(int *)(in_ECX + 0x70);
    if (((iVar4 != 0) && (iVar4 != 1)) && (iVar4 != 3)) {
      return 0;
    }
    piVar6 = (int *)FUN_005e0f50();
    fVar9 = (float10)(**(code **)(*piVar6 + 0x150))();
    if (fVar9 < (float10)fVar1 == (fVar9 == (float10)fVar1)) {
      return 0;
    }
    if (*(char *)(in_ECX + 0x131) != '\0') {
      return 0;
    }
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(5);
    if (((iVar4 == 0) && (iVar4 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x2b8))(4), iVar4 == 0))
       && (*(undefined1 *)(in_ECX + 0x131) = 1, *(int *)(in_ECX + 0x80) == 0)) {
      return 0;
    }
    uVar7 = *(undefined4 *)(in_ECX + 0x3c);
    uVar5 = FUN_006135f0(0,*(undefined1 *)(in_ECX + 0x4d),*(int *)(in_ECX + 200) != 0);
    iVar8 = FUN_00621b40(uVar7,iVar4,uVar5);
    if (iVar4 != 0) {
      if (iVar8 == 2) {
        uVar7 = FUN_009832e6(*(undefined4 *)(iVar4 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
        FUN_0061c680(uVar7);
      }
LAB_00622b4c:
      FUN_00484470();
      FUN_00401f20(iVar4);
    }
  }
  if (iVar8 == 0xd) {
    return 0;
  }
LAB_00622b61:
  if (iVar8 != *(int *)(in_ECX + 0x70)) {
    if (*(int *)(in_ECX + 0x70) != 10) {
      FUN_00612de0(iVar8);
    }
    cVar3 = FUN_00612640(*(undefined4 *)(in_ECX + 0x70));
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_00615520();
      FUN_00612ea0((float)fVar9);
    }
    cVar3 = FUN_00612640(*(undefined4 *)(in_ECX + 0x70));
    if (cVar3 != '\0') {
      fVar9 = (float10)FUN_00615520();
      FUN_00612ea0((float)fVar9);
    }
    local_d = 1;
  }
  return local_d;
}



void FUN_00622bd0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(in_ECX + 0x6c) != 10) {
    return;
  }
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar3 = *(undefined4 *)(in_ECX + 0x3c);
    uVar2 = FUN_006135f0(0);
    fVar4 = (float10)FUN_00612f50(uVar3,uVar2);
    *(float *)(in_ECX + 0x184) = (float)fVar4;
  }
  local_4 = *(float *)(in_ECX + 0x184);
  local_c = 0.0;
  local_8 = 0.0;
  FUN_006142d0(&local_c,&local_8);
  if ((*(char *)(in_ECX + 0x49) != '\0') || (*(int *)(in_ECX + 0x74) == 1)) {
    FUN_006191b0();
    return;
  }
  if ((local_4 <= local_c) || (local_8 < local_4)) {
    if (local_4 <= local_c) {
      FUN_00621270();
      if ((*(int *)(in_ECX + 0x6c) != 10) && (*(int *)(in_ECX + 0x6c) != 0xb)) {
        FUN_00619920(0);
      }
    }
  }
  else {
    FUN_006213d0();
  }
  cVar1 = FUN_006195b0();
  if (cVar1 != '\0') {
    return;
  }
  if (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd8)) {
    return;
  }
  cVar1 = FUN_00622820();
  if (cVar1 == '\0') {
    cVar1 = FUN_00614290();
    if ((cVar1 == '\0') && (cVar1 = FUN_006150e0(0), cVar1 == '\0')) {
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    }
    else {
      FUN_0061d320();
    }
    if (*(int *)(in_ECX + 0x80) == 0) {
      uVar3 = FUN_00616980(&local_4,4,*(undefined1 *)(in_ECX + 0x17c));
      *(undefined4 *)(in_ECX + 0x80) = uVar3;
    }
    return;
  }
  return;
}



void FUN_00622d40(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined1 local_4 [4];
  
  if (*(int *)(in_ECX + 0x6c) != 0xf) {
    return;
  }
  iVar2 = FUN_006135f0();
  if (iVar2 == 0) {
LAB_00622d81:
    if (*(char *)(in_ECX + 0x174) != '\0') goto LAB_00622d8a;
  }
  else {
    FUN_006135f0();
    cVar1 = FUN_005e0530();
    if (((cVar1 == '\0') || (cVar1 = FUN_005e0530(), cVar1 != '\0')) ||
       (cVar1 = FUN_005e1cb0(), cVar1 != '\0')) goto LAB_00622d81;
  }
  cVar1 = FUN_006195b0();
  if (((cVar1 != '\0') ||
      (*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd8))) ||
     (cVar1 = FUN_00622820(), cVar1 != '\0')) {
    return;
  }
  cVar1 = FUN_00614290();
  if ((cVar1 == '\0') && (cVar1 = FUN_006150e0(0), cVar1 == '\0')) {
    if (*(int *)(in_ECX + 0x80) == 0) {
      uVar3 = FUN_00616980(local_4,4,*(undefined1 *)(in_ECX + 0x17c));
      *(undefined4 *)(in_ECX + 0x80) = uVar3;
    }
    *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
    *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
    *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    return;
  }
LAB_00622d8a:
  FUN_0061d320();
  return;
}



uint FUN_00622e30(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint in_EAX;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  char extraout_CL;
  int in_ECX;
  char extraout_DL;
  int *piVar11;
  float10 fVar12;
  float10 fVar13;
  undefined1 *puVar14;
  int iVar15;
  float local_14;
  undefined1 local_c [12];
  
  if (*(int *)(in_ECX + 0x6c) != 0xb) {
    return in_EAX;
  }
  if (*(float *)(in_ECX + 0x184) < 0.0) {
    uVar6 = *(undefined4 *)(in_ECX + 0x3c);
    uVar4 = FUN_006135f0(0);
    fVar12 = (float10)FUN_00612f50(uVar6,uVar4);
    *(float *)(in_ECX + 0x184) = (float)fVar12;
  }
  uVar6 = *(undefined4 *)(in_ECX + 0x184);
  fVar12 = (float10)FUN_00615520();
  if ((*(char *)(in_ECX + 0x49) != '\0') || (*(int *)(in_ECX + 0x74) == 1)) {
    uVar7 = FUN_006191b0();
    return uVar7;
  }
  cVar3 = FUN_005e1e90();
  if (cVar3 != '\0') {
    cVar3 = FUN_00614290();
    *(bool *)(in_ECX + 0x116) = cVar3 == '\0';
    iVar5 = FUN_006135f0();
    if (iVar5 != 0) {
      FUN_006135f0();
      cVar3 = FUN_005e0530();
      if (((cVar3 != '\0') && (*(char *)(in_ECX + 0x116) == '\0')) &&
         (DAT_00b372f0 <= *(int *)(in_ECX + 0x1a8))) goto LAB_00623006;
    }
    fVar2 = *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4);
    fVar1 = *(float *)(in_ECX + 0xd8);
    if (fVar1 >= fVar2) {
      return (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10
                           | (ushort)(fVar1 == fVar2) << 0xe);
    }
    iVar5 = **(int **)(in_ECX + 0x3c);
    uVar6 = FUN_006135f0();
    uVar7 = (**(code **)(iVar5 + 0x340))(uVar6);
    return uVar7;
  }
  cVar3 = FUN_005e3400();
  if ((cVar3 == '\0') && (iVar5 = FUN_006135f0(), iVar5 != 0)) {
    FUN_006135f0();
    cVar3 = FUN_005e0530();
    if (cVar3 == '\0') {
      cVar3 = FUN_00614290();
      *(bool *)(in_ECX + 0x116) = cVar3 == '\0';
      if ((cVar3 != '\0') && (DAT_00b372f0 <= *(int *)(in_ECX + 0x1a8))) goto LAB_00623006;
    }
  }
  cVar3 = FUN_00613440(uVar6,(float)fVar12,0);
  if ((cVar3 != '\0') &&
     ((*(char *)(in_ECX + 0x116) == '\0' && (DAT_00b372f0 <= *(int *)(in_ECX + 0x1a8))))) {
LAB_00623006:
    uVar7 = FUN_00619920(0);
    return uVar7;
  }
  iVar5 = FUN_006135f0();
  if (iVar5 == 0) {
    return 0;
  }
  fVar2 = *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4);
  fVar1 = *(float *)(in_ECX + 0xd8);
  uVar7 = (uint)(ushort)((ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                        (ushort)(fVar1 == fVar2) << 0xe);
  if (fVar1 >= fVar2) {
    return uVar7;
  }
  if (*(int *)(in_ECX + 0x74) == 0) {
    return uVar7;
  }
  cVar3 = FUN_00614290();
  if (((cVar3 != '\0') || (cVar3 = FUN_00622820(), cVar3 != '\0')) &&
     (DAT_00b372f0 <= *(int *)(in_ECX + 0x1a8))) goto LAB_00623006;
  cVar3 = FUN_006150e0(1);
  if (cVar3 != '\0') {
    uVar7 = FUN_0061d320();
    return uVar7;
  }
  uVar6 = *(undefined4 *)(in_ECX + 0x70);
  uVar7 = FUN_00612690(uVar6);
  cVar3 = (char)uVar7;
  if (((cVar3 != '\0') && (*(char *)(in_ECX + 0x158) != '\0')) &&
     (*(char *)(in_ECX + 0x15b) == '\0')) goto LAB_006231a3;
  uVar7 = FUN_00612670(uVar6);
  if ((((char)uVar7 == '\0') || (extraout_DL == '\0')) &&
     ((extraout_CL != '\0' || ((extraout_DL == '\0' && (cVar3 == '\0')))))) {
    piVar11 = *(int **)(in_ECX + 0x118);
    uVar7 = FUN_0052b4a0();
    if (uVar7 < 2) goto LAB_006231a3;
    uVar9 = FUN_0052b4a0();
    uVar10 = FUN_0047df80(0);
    uVar7 = uVar10 / uVar9;
    uVar10 = uVar10 % uVar9;
    if (0 < (int)uVar10) {
      do {
        uVar10 = uVar10 - 1;
        piVar11 = (int *)piVar11[1];
      } while (uVar10 != 0);
    }
    if (piVar11 == (int *)0x0) goto LAB_006231a3;
    iVar5 = *piVar11;
  }
  else {
    piVar11 = *(int **)(in_ECX + 0x118);
    iVar5 = 0;
    local_14 = 3.4028235e+38;
    *(undefined1 *)(in_ECX + 0x17f) = 0;
    while ((piVar11 != (int *)0x0 && (uVar7 = FUN_0046cb60(), (char)uVar7 == '\0'))) {
      if (*piVar11 != 0) {
        piVar8 = (int *)FUN_006135f0();
        iVar15 = *piVar11;
        puVar14 = local_c;
        (**(code **)(*piVar8 + 0x174))(puVar14,iVar15);
        FUN_004121a0(puVar14,iVar15);
        fVar12 = (float10)FUN_00404c90();
        fVar1 = (float)fVar12;
        uVar7 = (uint)(ushort)((ushort)(local_14 < fVar1) << 8 |
                               (ushort)(NAN(local_14) || NAN(fVar1)) << 10 |
                              (ushort)(local_14 == fVar1) << 0xe);
        if (local_14 >= fVar1 && (local_14 == fVar1) == 0) {
          iVar5 = *piVar11;
          local_14 = fVar1;
        }
      }
      piVar11 = (int *)piVar11[1];
    }
  }
  if (iVar5 != 0) {
    puVar14 = local_c;
    iVar15 = iVar5;
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0x174))(puVar14,iVar5);
    FUN_004121a0(puVar14,iVar15);
    fVar13 = (float10)FUN_00404c90();
    fVar12 = (float10)100.0;
    uVar7 = (uint)(ushort)((ushort)(fVar13 < fVar12) << 8 |
                           (ushort)(NAN(fVar13) || NAN(fVar12)) << 10 |
                          (ushort)(fVar13 == fVar12) << 0xe);
    if (fVar13 >= fVar12 && (fVar13 == fVar12) == 0) {
      uVar7 = FUN_0061c9a0(iVar5);
      return uVar7;
    }
  }
LAB_006231a3:
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
  *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
  return uVar7;
}



void FUN_006231e0(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int in_ECX;
  float10 fVar8;
  float10 fVar9;
  
  if (*(int *)(in_ECX + 0x6c) == 0xc) {
    if (*(int *)(in_ECX + 0x11c) == 0) {
      FUN_006160b0();
      if ((*(int *)(in_ECX + 0x70) != 2) && (*(int *)(in_ECX + 0x70) != 4)) {
        FUN_0061fef0();
        return;
      }
      FUN_0061fe90();
      return;
    }
    piVar1 = *(int **)(in_ECX + 0x3c);
    piVar7 = (int *)piVar1[0x16];
    if ((*(float *)(in_ECX + 0xf0) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xec)) &&
       (uVar4 = (**(code **)(*piVar7 + 0x2c0))(), (uVar4 & 0x100) != 0)) {
      (**(code **)(*piVar7 + 0x2c4))(0x201,1);
    }
    cVar2 = FUN_005e05b0();
    if (cVar2 == '\0') {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x101,1);
      fVar8 = (float10)FUN_005e5850(3);
      fVar9 = (float10)0.5;
      if (fVar9 < fVar8) {
        fVar9 = (float10)FUN_005e5850(3);
      }
      *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
      *(float *)(in_ECX + 0xf0) = (float)fVar9;
      *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
    }
    iVar6 = *piVar7;
    uVar5 = FUN_004d6670();
    uVar5 = FUN_006ecc80(uVar5);
    (**(code **)(iVar6 + 0x414))(piVar1,*(undefined4 *)(in_ECX + 0x11c),uVar5);
    cVar2 = '\0';
    iVar6 = (**(code **)(*piVar7 + 0x40c))();
    if (iVar6 != 0) {
      piVar7 = (int *)(**(code **)(*piVar7 + 0x40c))();
      cVar3 = (**(code **)(*piVar7 + 0x2c))();
      if (cVar3 != '\0') {
        cVar2 = '\x01';
      }
    }
    piVar7 = (int *)piVar1[0x16];
    cVar3 = -1;
    iVar6 = (**(code **)(*piVar7 + 0x184))();
    if (iVar6 != 0) {
      cVar3 = *(char *)(iVar6 + 0x20);
    }
    iVar6 = (**(code **)(*piVar1 + 0x330))();
    if (cVar3 == '\f') {
      (**(code **)(*piVar1 + 0x174))();
      if ((cVar2 == '\0') &&
         (fVar8 = (float10)FUN_00404c90(), fVar8 < (float10)32.0 == (fVar8 == (float10)32.0))) {
        cVar2 = FUN_00612690(*(undefined4 *)(iVar6 + 0x70));
        if ((cVar2 != '\0') && (cVar2 = FUN_00622820(), cVar2 != '\0')) {
          FUN_00612da0(9);
          FUN_00619920(0);
        }
        cVar2 = FUN_005e5670();
        if (cVar2 != '\0') {
          FUN_005f4ae0(0);
        }
        cVar2 = FUN_00614290();
        if ((cVar2 != '\0') && (DAT_00b372f0 <= *(int *)(iVar6 + 0x1a8))) {
          FUN_00612da0(9);
          FUN_00619920(0);
          return;
        }
      }
      else {
        FUN_00612da0(9);
        FUN_0061c6e0();
        *(undefined4 *)(iVar6 + 0x11c) = 0;
      }
    }
    else {
      cVar2 = (**(code **)(*piVar7 + 200))();
      if (cVar2 == '\0') {
        FUN_00612da0(9);
        return;
      }
    }
  }
  return;
}



void FUN_00623480(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  float unaff_EDI;
  float10 fVar9;
  float10 fVar10;
  undefined *puVar11;
  undefined4 uVar12;
  
  if (*(int *)(in_ECX + 0x6c) == 4) {
    piVar1 = *(int **)(in_ECX + 0x3c);
    if (*(float *)(in_ECX + 0x184) < 0.0) {
      uVar5 = FUN_006135f0(0);
      fVar9 = (float10)FUN_00612f50(piVar1,uVar5);
      *(float *)(in_ECX + 0x184) = (float)fVar9;
    }
    FUN_00615520();
    FUN_006163a0();
    piVar2 = (int *)piVar1[0x16];
    if ((*(float *)(in_ECX + 0xf0) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xec)) &&
       (sVar4 = (**(code **)(*piVar2 + 0x2c0))(), sVar4 == 0x101)) {
      (**(code **)(*piVar1 + 0xec))();
      *(undefined4 *)(in_ECX + 0xd0) = 0x201;
      fVar9 = (float10)FUN_005e5850(7);
      fVar10 = (float10)0.5;
      if (fVar10 < fVar9) {
        fVar10 = (float10)FUN_005e5850(7);
      }
      *(undefined4 *)(in_ECX + 0xec) = *(undefined4 *)(in_ECX + 0x44);
      *(float *)(in_ECX + 0xf0) = (float)fVar10;
      *(undefined4 *)(in_ECX + 0xf4) = 0xbf800000;
    }
    if (*(float *)(in_ECX + 0xd8) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0xd4)) {
      cVar3 = FUN_00622820();
      if (cVar3 != '\0') {
        return;
      }
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0xd8) = 0x40400000;
      *(undefined4 *)(in_ECX + 0xdc) = 0xbf800000;
    }
    iVar6 = FUN_006135f0();
    if (iVar6 != 0) {
      FUN_006135f0();
      cVar3 = FUN_005e0530();
      if ((cVar3 != '\0') &&
         ((((iVar6 = *(int *)(in_ECX + 0x70), iVar6 == 0 || (iVar6 == 1)) || (iVar6 == 3)) &&
          ((cVar3 = FUN_005e0530(), cVar3 == '\0' && (cVar3 = FUN_005e1cb0(), cVar3 == '\0')))))) {
        if (DAT_00b3b908 != '\0') {
          uVar5 = FUN_004da2a0();
          FUN_00579b60("%.20s can\'t fight in the water, entering combat alert state.",uVar5);
        }
        FUN_00620e50();
        return;
      }
    }
    (**(code **)(*piVar2 + 0x198))(piVar1,0,*(undefined4 *)(in_ECX + 0xd0),1);
    piVar2 = (int *)piVar1[0x16];
    iVar6 = (**(code **)(*piVar2 + 0x184))();
    if ((iVar6 == 0) || (*(char *)(iVar6 + 0x20) != '\f')) {
      cVar3 = (**(code **)(*piVar2 + 200))();
      if (cVar3 == '\0') {
        FUN_005e02b0();
        return;
      }
    }
    else {
      iVar6 = (**(code **)(*piVar1 + 0x330))();
      iVar7 = (**(code **)(*piVar2 + 0x40c))();
      if (iVar7 != 0) {
        piVar8 = (int *)(**(code **)(*piVar2 + 0x40c))();
        cVar3 = (**(code **)(*piVar8 + 0x2c))();
        if (cVar3 != '\0') {
          if (DAT_00b3b908 != '\0') {
            uVar5 = FUN_004da2a0();
            FUN_00579b60("%.20s pathing failed, entering combat alert state.",uVar5);
          }
          *(undefined1 *)(in_ECX + 0x174) = 0;
          FUN_00620e50();
          return;
        }
      }
      cVar3 = (**(code **)(*piVar2 + 200))();
      if (cVar3 != '\0') {
        if ((char)((uint)unaff_EBX >> 0x10) != '\0') {
          (**(code **)(*(int *)piVar1[0x16] + 0x2c4))(0x101,1);
          FUN_00619920(3);
          fVar9 = (float10)FUN_005e5850(3);
          fVar10 = (float10)0.5;
          if (fVar10 < fVar9) {
            fVar10 = (float10)FUN_005e5850(3);
          }
          *(undefined4 *)(iVar6 + 0xf8) = *(undefined4 *)(in_ECX + 0x44);
          *(float *)(iVar6 + 0xfc) = (float)fVar10;
          *(undefined4 *)(iVar6 + 0x100) = 0xbf800000;
          FUN_00612da0(9);
          return;
        }
LAB_00623857:
        FUN_00619920(0);
        FUN_00612da0(9);
        return;
      }
      cVar3 = FUN_005e5670();
      if (cVar3 != '\0') {
        FUN_005f4ae0(0);
      }
      if ((*(int *)(iVar6 + 0x70) == 2) || (*(int *)(iVar6 + 0x70) == 4)) {
        if (*(int *)(iVar6 + 0x74) == 0) goto LAB_00623857;
      }
      else {
        cVar3 = FUN_00613440(unaff_EBP,unaff_EDI,0);
        if ((cVar3 != '\0') && (*(char *)(iVar6 + 0x158) != '\0')) {
          if ((char)((uint)unaff_EBX >> 0x10) != '\0') {
            (**(code **)(*(int *)piVar1[0x16] + 0x2c4))(0x101,1);
            FUN_00619920(3);
            fVar9 = (float10)FUN_005e5850(3);
            fVar10 = (float10)0.5;
            if (fVar10 < fVar9) {
              fVar10 = (float10)FUN_005e5850(3);
            }
            *(undefined4 *)(iVar6 + 0xf8) = *(undefined4 *)(in_ECX + 0x44);
            *(float *)(iVar6 + 0xfc) = (float)fVar10;
            *(undefined4 *)(iVar6 + 0x100) = 0xbf800000;
          }
          goto LAB_00623857;
        }
        if ((((*(int *)(iVar6 + 0x74) == 0) ||
             (cVar3 = FUN_00613440(unaff_EBP,unaff_EDI + unaff_EDI,0), cVar3 == '\0')) ||
            (*(char *)(iVar6 + 0x158) == '\0')) ||
           (((cVar3 = FUN_004d7f80(), cVar3 == '\0' ||
             (cVar3 = FUN_00612670(*(undefined4 *)(iVar6 + 0x70)), cVar3 == '\0')) ||
            (cVar3 = (**(code **)(*piVar2 + 0x2dc))(), cVar3 == '\0')))) {
          if ((char)((uint)unaff_EBX >> 0x18) != '\0') {
            FUN_0061e5a0(unaff_EBP,unaff_EDI);
          }
        }
        else {
          uVar5 = FUN_006135f0(0);
          cVar3 = FUN_006131d0(piVar1,uVar5);
          if (((cVar3 != '\0') && (iVar6 = FUN_00612d60(), iVar6 != 0)) &&
             ((*(char *)(iVar6 + 0x90) != '\x05' && (*(char *)(iVar6 + 0x90) != '\x04')))) {
            FUN_00403c00();
            iVar6 = FUN_009828c0();
            iVar7 = FUN_0047df80(0);
            if (iVar7 % 100 < iVar6) {
              uVar12 = 0;
              uVar5 = 0;
              puVar11 = PTR_DAT_00b241c4;
              (**(code **)(**(int **)(in_ECX + 0x3c) + 0x164))(0,PTR_DAT_00b241c4,0);
              cVar3 = FUN_004727e0(uVar5,puVar11,uVar12);
              FUN_00612bd0((cVar3 != 'l') + '\x14',0);
              return;
            }
          }
        }
      }
    }
  }
  return;
}



int FUN_006239d0(undefined4 param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  
  if (((*(int *)(in_ECX + 0x3c) == 0) ||
      (piVar4 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar4 == (int *)0x0)) ||
     (iVar3 = (**(code **)(*piVar4 + 0xec))(1), iVar3 == 0)) {
LAB_00623a0d:
    iVar3 = *(int *)(in_ECX + 0xa8);
  }
  else {
    iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
    iVar3 = *(int *)(iVar3 + 8);
    if (iVar3 == 0) goto LAB_00623a0d;
  }
  if (*(int *)(in_ECX + 0xa8) == 0) {
    piVar4 = (int *)FUN_005e0f50();
    cVar2 = (**(code **)(*piVar4 + 0x168))(1);
    if (cVar2 != '\0') goto LAB_00623a36;
  }
  else {
LAB_00623a36:
    *(undefined1 *)(in_ECX + 0x48) = 1;
  }
  cVar2 = FUN_005e1cf0();
  if (((cVar2 != '\0') && (iVar3 == 0)) &&
     ((*(char *)(in_ECX + 0x48) == '\0' && (*(int *)(in_ECX + 0x70) != 6)))) {
    return 0xd;
  }
  iVar1 = *(int *)(in_ECX + 0x70);
  if (iVar1 != 5) {
    if (DAT_00b3b908 != '\0') {
      uVar5 = FUN_004da2a0("attempt to Yield");
      FUN_00579b60("%.20s is going to %s!",uVar5);
    }
    *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
  }
  uVar5 = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(in_ECX + 0x70) = 5;
  uVar6 = FUN_006135f0();
  uVar5 = FUN_00521450(uVar5,uVar6);
  *(undefined4 *)(in_ECX + 200) = uVar5;
  uVar7 = FUN_00612de0(iVar1);
  if ((param_2 == '\0') && (*(char *)(in_ECX + 0x4d) == '\0')) {
    uVar7 = uVar7 & 0xffffff00;
  }
  else {
    uVar7 = 1;
  }
  uVar5 = *(undefined4 *)(in_ECX + 0x3c);
  uVar6 = FUN_006135f0(param_1,uVar7,*(int *)(in_ECX + 200) != 0);
  iVar8 = FUN_00621b40(uVar5,0,uVar6);
  if (iVar3 != 0) {
    if (iVar8 == 0) {
      uVar11 = 1;
      uVar6 = 1;
      iVar3 = iVar8;
      iVar10 = iVar8;
      iVar12 = iVar8;
      uVar5 = FUN_00612d60(1,0,0,1,0);
      FUN_005f2e70(uVar5,uVar6,iVar3,iVar10,uVar11,iVar12);
      goto LAB_00623bb4;
    }
    if (iVar8 == 0xd) {
      switch(*(undefined1 *)(iVar3 + 0x90)) {
      case 0:
      case 1:
      case 2:
      case 3:
        iVar8 = 1;
        FUN_005e6d70(1);
        break;
      case 5:
        iVar3 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xf4))(1);
        if ((iVar3 == 0) && (*(char *)(in_ECX + 0x48) == '\0')) {
          FUN_005f5170(1,5);
        }
      case 4:
        iVar8 = 2;
        FUN_005e6d70(1);
        break;
      default:
        return 0xd;
      }
      goto LAB_00623bb4;
    }
  }
  if ((((iVar8 != 0) && (iVar8 != 1)) && (iVar8 != 3)) && ((iVar8 != 2 && (iVar8 != 4)))) {
    return iVar8;
  }
LAB_00623bb4:
  FUN_00612de0(iVar8);
  FUN_0061e8a0();
  fVar9 = (float10)FUN_00615520();
  FUN_00612ea0((float)fVar9);
  FUN_00612de0(iVar1);
  return iVar8;
}



void FUN_00623c00(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  float10 fVar8;
  undefined4 uVar9;
  float fVar10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(int *)(in_ECX + 0x6c) == 0) && (*(int *)(in_ECX + 0x70) != 8)) {
    if (*(float *)(in_ECX + 0x184) < 0.0) {
      uVar9 = *(undefined4 *)(in_ECX + 0x3c);
      uVar4 = FUN_006135f0(0);
      fVar8 = (float10)FUN_00612f50(uVar9,uVar4);
      *(float *)(in_ECX + 0x184) = (float)fVar8;
    }
    fVar10 = *(float *)(in_ECX + 0x184);
    fVar8 = (float10)FUN_00615520();
    local_c = (float)fVar8;
    local_8 = 0.0;
    local_4 = 0.0;
    FUN_006142d0(&local_8,&local_4);
    if ((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) {
      local_c = local_8;
    }
    cVar1 = FUN_00613440(fVar10,local_c,0);
    if ((cVar1 != '\0') &&
       ((((iVar6 = *(int *)(in_ECX + 0x70), iVar6 == 0 || (iVar6 == 1)) || (iVar6 == 3)) &&
        (*(char *)(in_ECX + 0x158) == '\0')))) {
      uVar9 = *(undefined4 *)(in_ECX + 0x3c);
      uVar4 = FUN_006135f0(0);
      cVar2 = FUN_006131d0(uVar9,uVar4);
      if (cVar2 != '\0') {
        uVar9 = *(undefined4 *)(in_ECX + 0x3c);
        uVar4 = FUN_006135f0(*(undefined1 *)(in_ECX + 0x158));
        uVar3 = FUN_00617590(uVar9,uVar4);
        *(undefined1 *)(in_ECX + 0x174) = uVar3;
        goto LAB_00623d06;
      }
    }
    if ((*(char *)(in_ECX + 0x49) != '\0') || (*(int *)(in_ECX + 0x74) == 1)) {
      FUN_006191b0();
      return;
    }
    cVar2 = FUN_00622820();
    if (cVar2 == '\0') {
      cVar2 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
      if ((cVar2 != '\0') && (*(int *)(in_ECX + 0x74) == 0)) {
        if (fVar10 <= local_4) {
          if (*(char *)(in_ECX + 0x158) != '\0') {
            return;
          }
          if (*(int *)(in_ECX + 0x6c) == 2) {
            return;
          }
          FUN_0061ce40();
          return;
        }
        *(undefined1 *)(in_ECX + 0x17e) = 1;
      }
      if (fVar10 <= local_c) {
        iVar6 = FUN_006135f0();
        if (iVar6 == DAT_00b333c4) {
          *(undefined1 *)(in_ECX + 0x4b) = 1;
        }
        iVar6 = FUN_006135f0();
        if (iVar6 != 0) {
          piVar5 = (int *)FUN_006135f0();
          cVar1 = (**(code **)(*piVar5 + 0x350))();
          if (cVar1 != '\0') {
            if (*(char *)(in_ECX + 0x49) == '\0') {
              return;
            }
            cVar1 = FUN_005e5670();
            if (cVar1 != '\0') {
              FUN_005f4ae0(0);
            }
            if (*(int *)(in_ECX + 0x74) != 1) {
              return;
            }
            *(undefined4 *)(in_ECX + 0x78) = 1;
            *(undefined4 *)(in_ECX + 0x74) = 3;
            return;
          }
        }
        cVar1 = FUN_00612690(*(undefined4 *)(in_ECX + 0x70));
        if (cVar1 != '\0') {
          if (*(char *)(in_ECX + 0x116) != '\0') {
            FUN_0061c6e0();
            return;
          }
          piVar5 = (int *)FUN_005e0f50();
          fVar8 = (float10)(**(code **)(*piVar5 + 0x158))();
          local_4 = (float)fVar8;
          if ((0.0 < local_4) && (fVar10 < local_4)) {
            puVar7 = (undefined4 *)FUN_00403c00();
            uVar9 = *puVar7;
            fVar10 = local_4;
            uVar4 = FUN_006135f0(uVar9,local_4);
            FUN_0061caa0(uVar4,uVar9,fVar10);
            return;
          }
        }
        FUN_0061ce40();
        return;
      }
      if (cVar2 == '\0') {
        if ((cVar1 == '\0') || (cVar1 = FUN_006163a0(), cVar1 != '\0')) {
          cVar1 = FUN_00614290();
          if (cVar1 == '\0') {
            piVar5 = (int *)FUN_005e0f50();
            cVar1 = (**(code **)(*piVar5 + 0x16c))(0x80);
            if (cVar1 != '\0') {
              FUN_0061fef0();
              return;
            }
          }
          goto LAB_00623d06;
        }
        cVar1 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x25c))();
        if (cVar1 != '\0') {
          return;
        }
      }
      else {
        if (*(char *)(in_ECX + 0x116) != '\0') {
          FUN_0061c6e0();
          return;
        }
        if (cVar1 == '\0') {
          cVar1 = FUN_00614290();
          if (cVar1 == '\0') {
            FUN_0061fe90();
            return;
          }
LAB_00623d06:
          FUN_0061d320();
          return;
        }
      }
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(2,0);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(1,1);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x2c4))(0x100,1);
      FUN_00619920(3);
    }
  }
  return;
}



void FUN_00623fa0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x6c) == 7) {
    iVar1 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x184))();
    if (iVar1 == in_ECX) {
      iVar1 = FUN_00612d60();
      if (iVar1 != 0) {
        if (*(int *)(in_ECX + 0x70) != 0xd) {
          *(undefined4 *)(in_ECX + 0x188) = 0xbf800000;
        }
        *(undefined4 *)(in_ECX + 0x70) = 0xd;
        FUN_0061d320();
        return;
      }
      if (DAT_00b3b908 != '\0') {
        uVar2 = FUN_004da2a0();
        FUN_00579b60("%.20s cannot find any weapons or ammo!",uVar2);
      }
      uVar2 = FUN_006239d0(0,0);
      FUN_00612de0(uVar2);
      FUN_00619920(0);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00624030(char param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int in_ECX;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  if (*(int *)(in_ECX + 0x3c) == 0) {
    return;
  }
  iVar5 = FUN_006135f0();
  if (iVar5 == 0) {
    return;
  }
  if (((*(float *)(in_ECX + 0x144) < *(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x140)) ||
      (param_1 != '\0')) || (-1 < *(char *)(in_ECX + 0x1ac))) {
    cVar4 = *(char *)(in_ECX + 0x1ac);
    if (cVar4 < '\0') {
      *(undefined1 *)(in_ECX + 0x1ac) = 0;
      cVar4 = *(char *)(in_ECX + 0x1ac);
    }
    if (cVar4 == '\0') {
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0;
      uVar6 = FUN_006135f0(0,0,0);
      uVar3 = FUN_005f2820(0,uVar6,uVar10,uVar11,uVar12);
      *(undefined1 *)(in_ECX + 0x158) = uVar3;
    }
    if (*(char *)(in_ECX + 0x1ac) == '\x01') {
      uVar6 = *(undefined4 *)(in_ECX + 0x3c);
      uVar10 = FUN_006135f0(1,0,0xbf800000);
      iVar5 = FUN_00621170(uVar6,uVar10);
      *(bool *)(in_ECX + 0x159) = iVar5 != 0;
    }
    if (*(char *)(in_ECX + 0x1ac) == '\x02') {
      if (((param_1 == '\0') && (*(int *)(in_ECX + 0x70) != 0xd)) &&
         ((*(int *)(in_ECX + 0x6c) == 4 ||
          ((*(int *)(in_ECX + 0x6c) == 0 || (*(int *)(in_ECX + 0x74) == 0)))))) {
        *(undefined1 *)(in_ECX + 0x1ac) = 3;
      }
      else {
        uVar6 = *(undefined4 *)(in_ECX + 0x3c);
        uVar10 = FUN_006135f0(*(undefined1 *)(in_ECX + 0x158));
        uVar3 = FUN_00617590(uVar6,uVar10);
        *(undefined1 *)(in_ECX + 0x174) = uVar3;
      }
    }
    cVar4 = *(char *)(in_ECX + 0x1ac);
    if ((((cVar4 == '\x03') || (cVar4 == '\x04')) || (cVar4 == '\x05')) || (cVar4 == '\x06')) {
      do {
        if ('\x06' < *(char *)(in_ECX + 0x1ac)) break;
        iVar5 = FUN_00614550(*(char *)(in_ECX + 0x1ac) + -3);
        *(char *)(in_ECX + 0x1ac) = *(char *)(in_ECX + 0x1ac) + (char)iVar5;
      } while (0 < iVar5);
    }
    if (*(char *)(in_ECX + 0x191) == '\0') {
LAB_00624190:
      if (*(char *)(in_ECX + 0x1ac) == '\a') {
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 1;
        iVar5 = in_ECX + 0x158;
        bVar2 = *(int *)(in_ECX + 0x1a8) < DAT_00b372f0;
        uVar6 = FUN_006135f0(iVar5,1,0,0);
        iVar5 = FUN_005f6540(0,uVar6,iVar5,uVar10,uVar11,uVar12);
        *(int *)(in_ECX + 0x1a8) = iVar5;
        if (((bVar2) && (DAT_00b372f0 <= iVar5)) &&
           (((iVar5 = *(int *)(in_ECX + 0x6c), iVar5 == 0xf || ((iVar5 == 10 || (iVar5 == 0xb)))) ||
            (iVar5 == 0xc)))) {
          uVar6 = FUN_0052ed50(4,1);
          *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0xe4) = DAT_00b333c4;
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0x1a4))
                    (*(int *)(in_ECX + 0x3c),uVar6,0,0,1);
          uVar6 = FUN_006239d0(0,0);
          FUN_00612de0(uVar6);
          FUN_0061d320();
        }
      }
    }
    else if (*(char *)(in_ECX + 0x1ac) == '\a') {
      *(undefined1 *)(in_ECX + 0x191) = 0;
      goto LAB_00624190;
    }
    *(char *)(in_ECX + 0x1ac) = *(char *)(in_ECX + 0x1ac) + '\x01';
    if ('\a' < *(char *)(in_ECX + 0x1ac)) {
      if (*(char *)(in_ECX + 0x1bd) != '\0') {
        *(undefined1 *)(in_ECX + 0x1bd) = 0;
      }
      *(undefined1 *)(in_ECX + 0x1ac) = 0xff;
      FUN_006135f0();
      FUN_005e04e0();
      puVar7 = (undefined4 *)FUN_00403c00();
      uVar6 = *puVar7;
      *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(in_ECX + 0x44);
      *(undefined4 *)(in_ECX + 0x144) = uVar6;
      *(undefined4 *)(in_ECX + 0x148) = 0xbf800000;
    }
  }
  if ((*(float *)(in_ECX + 0x44) - *(float *)(in_ECX + 0x14c) <= *(float *)(in_ECX + 0x150)) &&
     (param_1 == '\0')) {
    return;
  }
  FUN_004526e0();
  iVar5 = 0;
  *(undefined4 *)(in_ECX + 0x178) = 0;
  *(undefined1 *)(in_ECX + 0x17c) = 0;
  puVar8 = (undefined4 *)FUN_0067c880(*(undefined4 *)(in_ECX + 0x3c),0);
  puVar7 = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    do {
      puVar1 = (undefined4 *)*puVar7;
      puVar7 = (undefined4 *)puVar7[1];
      cVar4 = FUN_00614f80(*puVar1);
      if ((cVar4 != '\0') && (iVar9 = (**(code **)(*(int *)*puVar1 + 0x330))(), iVar9 != 0)) {
        iVar9 = (**(code **)(*(int *)*puVar1 + 0x330))();
        if ((*(int *)(iVar9 + 0x70) == 2) || (*(int *)(iVar9 + 0x70) == 4)) {
          iVar5 = iVar5 + 1;
        }
      }
    } while (puVar7 != (undefined4 *)0x0);
    FUN_004526e0();
    FUN_00401f20(puVar8);
    if (iVar5 != 0) goto LAB_00624399;
  }
  *(undefined1 *)(in_ECX + 0x15a) = 0;
LAB_00624399:
  uVar6 = _DAT_00b37280;
  *(undefined4 *)(in_ECX + 0x14c) = *(undefined4 *)(in_ECX + 0x44);
  *(undefined4 *)(in_ECX + 0x150) = uVar6;
  *(undefined4 *)(in_ECX + 0x154) = 0xbf800000;
  return;
}



void FUN_006243d0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  
  if (param_1 != 0) {
    piVar4 = *(int **)(in_ECX + 0x40);
    iVar2 = FUN_006135f0();
    piVar1 = (int *)*piVar4;
    if ((piVar1 == (int *)0x0) || (piVar4[1] != 0)) {
      while( true ) {
        piVar1 = (int *)piVar4[1];
        if ((piVar1 == (int *)0x0) && (*piVar4 == 0)) {
          return;
        }
        piVar4 = (int *)*piVar4;
        if ((*piVar4 == param_1) && ((char)piVar4[2] == '\0')) break;
        piVar4 = piVar1;
        if (piVar1 == (int *)0x0) {
          return;
        }
      }
      param_2 = (-(uint)((char)piVar4[2] != '\0') & DAT_00b37210) + param_2;
      if (piVar4[1] != param_2) {
        piVar4[1] = param_2;
        FUN_00619c90();
      }
      iVar3 = FUN_006135f0();
      if (iVar2 != iVar3) {
        FUN_00624030(1);
      }
    }
    else if ((*piVar1 == param_1) && ((char)piVar1[2] == '\0')) {
      piVar1[1] = param_2;
      return;
    }
  }
  return;
}



void FUN_00624480(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int in_ECX;
  undefined1 uVar5;
  undefined1 auStack_4 [4];
  
  FUN_0061e8a0();
  piVar1 = *(int **)(in_ECX + 0x3c);
  *(undefined1 *)(in_ECX + 0x174) = 1;
  uVar5 = 0;
  sVar3 = FUN_005e5690(0x11,0,1);
  if (sVar3 != 0) {
    iVar4 = (**(code **)(*piVar1 + 0x164))();
    if (iVar4 != 0) {
      cVar2 = FUN_00470960(sVar3,auStack_4);
      if (cVar2 != '\0') {
        uVar5 = 1;
      }
    }
  }
  *(undefined1 *)(in_ECX + 0x1bc) = uVar5;
  if ((*(int *)(in_ECX + 0x3c) != 0) &&
     (piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58), piVar1 != (int *)0x0)) {
    iVar4 = (**(code **)(*piVar1 + 0xec))(1);
    if (iVar4 != 0) {
      iVar4 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x3c) + 0x58) + 0xec))(1);
      if (*(int *)(iVar4 + 8) != 0) {
        cVar2 = *(char *)(*(int *)(iVar4 + 8) + 0x90);
        if ((cVar2 == '\x05') || (cVar2 == '\x04')) {
          *(undefined1 *)(in_ECX + 0x131) = 0;
          iVar4 = FUN_00612960(1);
          if (iVar4 == 0) {
            *(undefined1 *)(in_ECX + 0x130) = 1;
            FUN_00624030(0);
            return;
          }
LAB_00624545:
          FUN_00484470();
          FUN_00401f20(iVar4);
          FUN_00624030(0);
          return;
        }
        *(undefined1 *)(in_ECX + 0x130) = 0;
        iVar4 = FUN_00612960(1);
        if (iVar4 != 0) goto LAB_00624545;
        goto LAB_00624596;
      }
    }
  }
  *(undefined1 *)(in_ECX + 0x130) = 1;
LAB_00624596:
  *(undefined1 *)(in_ECX + 0x131) = 1;
  FUN_00624030(0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00624c90(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  float10 fVar7;
  undefined4 uVar8;
  
  if (*(char *)(in_ECX + 0x59) == '\0') {
    FUN_00624480();
    *(undefined1 *)(in_ECX + 0x59) = 1;
  }
  piVar3 = (int *)FUN_006135f0();
  if ((param_1 != piVar3) && (piVar3 = *(int **)(in_ECX + 0x3c), param_1 != piVar3)) {
    cVar2 = FUN_00613670(param_1);
    if (cVar2 == '\0') {
      uVar4 = FUN_005e3270(0,100);
      uVar8 = 1;
      fVar7 = (float10)FUN_004d7e90(param_1,0);
      uVar4 = (**(code **)(*piVar3 + 0x284))(0x21,(float)fVar7,uVar8,uVar4);
      uVar4 = (**(code **)(*piVar3 + 0x224))(param_1,100,uVar4);
      iVar5 = FUN_00546190(uVar4);
      cVar2 = FUN_005e3270();
      if ((cVar2 == '\0') || (cVar2 = FUN_005e3270(), cVar2 == '\0')) {
        if (iVar5 < 1) goto LAB_00624da5;
      }
      else {
        iVar5 = FUN_004db6b0();
        if (iVar5 == 0) goto LAB_00624da5;
        iVar5 = FUN_004db6b0();
        iVar6 = FUN_004db6b0();
        if (iVar6 == iVar5) goto LAB_00624da5;
      }
      (**(code **)(*(int *)param_1[0x16] + 0x170))(param_1,*(undefined4 *)(in_ECX + 0x3c));
      uVar4 = FUN_009828c0();
      FUN_00616190(param_1,uVar4,0,0,0);
    }
    else {
      uVar4 = 1;
      cVar2 = FUN_00614290(1);
      FUN_00619d40(param_1,cVar2 == '\0',uVar4);
    }
  }
LAB_00624da5:
  if (param_2 != 0) {
    FUN_00616ba0(param_2);
  }
  if (*(int *)(in_ECX + 0x88) == 0) {
    FUN_00613880();
  }
  iVar5 = *(int *)(in_ECX + 0x6c);
  if (iVar5 == 8) {
    *(char *)(in_ECX + 0x4f) = *(char *)(in_ECX + 0x4f) + '\x01';
    if (*(char *)(in_ECX + 0x4f) <= DAT_00b36d48) {
      return;
    }
    piVar3 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x58);
    *(undefined1 *)(in_ECX + 0x4d) = 1;
    iVar5 = (**(code **)(*piVar3 + 0x174))();
    if ((iVar5 != 0) && (iVar5 = (**(code **)(*piVar3 + 0x174))(), *(char *)(iVar5 + 0x20) != '\f'))
    {
      (**(code **)(*piVar3 + 0x178))(0);
    }
  }
  else {
    iVar6 = *(int *)(in_ECX + 0x70);
    if ((iVar6 == 6) || (iVar6 == 5)) {
      (**(code **)(**(int **)(in_ECX + 0x3c) + 0x374))(param_1,_DAT_00b376c0);
      if (*(int *)(in_ECX + 0x70) != 6) {
        return;
      }
      if (*(char *)(in_ECX + 0x4e) <= DAT_00b36d78) {
        return;
      }
      iVar5 = FUN_006239d0(0,0);
      if (iVar5 != 5) {
        FUN_00612de0(iVar5);
        FUN_00619920(0);
      }
      *(undefined1 *)(in_ECX + 0x4e) = 0;
      return;
    }
    if (((iVar5 == 0xe) || (iVar5 == 0x10)) && (iVar6 == 8)) {
      bVar1 = true;
      if (((int *)param_1[0x16] == (int *)0x0) ||
         (iVar5 = (**(code **)(*(int *)param_1[0x16] + 0xec))(1), iVar5 == 0)) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(iVar5 + 8);
      }
      if ((iVar5 != 0) &&
         ((*(char *)(iVar5 + 0x90) == '\x04' || (*(char *)(iVar5 + 0x90) == '\x05')))) {
        bVar1 = false;
      }
      if ((((param_2 == 0) || (*(int *)(*(int *)(param_2 + 0xc) + 0x10) == 1)) && (bVar1)) &&
         (iVar5 = (**(code **)(**(int **)(in_ECX + 0x3c) + 0x330))(), iVar5 != 0)) {
        uVar4 = 9;
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x330))(9);
        FUN_00612da0(uVar4);
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x330))();
        FUN_006160b0();
        uVar4 = 0;
        (**(code **)(**(int **)(in_ECX + 0x3c) + 0x330))(0);
        FUN_00619920(uVar4);
        return;
      }
    }
  }
  if (((*(int *)(in_ECX + 0x70) == 2) || (*(int *)(in_ECX + 0x70) == 4)) &&
     ((piVar3 = (int *)FUN_006135f0(), param_1 == piVar3 && (cVar2 = FUN_00614290(), cVar2 == '\0'))
     )) {
    return;
  }
  uVar4 = FUN_006239d0(0,0);
  FUN_00612de0(uVar4);
  FUN_00619920(0);
  return;
}



float10 FUN_00624fc0(void)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  ppuVar5 = &PTR_PTR_00b0375c;
  ppuVar4 = &PTR_PTR_00b03de4;
  uVar3 = 0;
  uVar1 = FUN_005e02e0(0);
  iVar2 = FUN_009832e6(uVar1,uVar3,ppuVar4,ppuVar5,uVar6);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x284))(0xc);
    return (float10)iVar2;
  }
  return (float10)0;
}



void FUN_00625020(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x154))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x388))();
    if (iVar1 != 0) {
      (**(code **)(*in_ECX + 0x388))();
      FUN_005f0410();
    }
  }
  TESObjectREFR_Set3D(param_1);
  return;
}



void FUN_00625070(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x3c4))();
  return;
}



void FUN_00625090(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0062509b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x58) + 0x3c8))();
  return;
}



void FUN_006250a0(void)

{
  undefined4 *in_ECX;
  
  FUN_005e15e0();
  *in_ECX = &PTR_FUN_00a710f4;
  in_ECX[6] = &PTR_FUN_00a710ec;
  in_ECX[0x17] = &PTR_LAB_00a710a4;
  in_ECX[0x1a] = &PTR_LAB_00a71074;
  *(undefined1 *)(in_ECX + 1) = 0x33;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  return;
}



void FUN_00625100(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005e1880(param_1);
  *in_ECX = &PTR_FUN_00a710f4;
  in_ECX[6] = &PTR_FUN_00a710ec;
  in_ECX[0x17] = &PTR_LAB_00a710a4;
  in_ECX[0x1a] = &PTR_LAB_00a71074;
  *(undefined1 *)(in_ECX + 1) = 0x33;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  return;
}



void FUN_00625140(void)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c32a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = (int)&PTR_FUN_00a710f4;
  in_ECX[6] = (int)&PTR_FUN_00a710ec;
  in_ECX[0x17] = (int)&PTR_LAB_00a710a4;
  in_ECX[0x1a] = (int)&PTR_LAB_00a71074;
  local_4 = 0;
  if (((uint)in_ECX[2] >> 0xe & 1) == 0) {
    if ((int *)in_ECX[0x35] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x35] + 900))(0,uVar1);
      in_ECX[0x35] = 0;
    }
    iVar2 = (**(code **)(*in_ECX + 0x154))();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*in_ECX + 0x388))();
      if (iVar2 != 0) {
        (**(code **)(*in_ECX + 0x388))();
        FUN_005f0410();
      }
    }
    TESObjectREFR_Set3D(0);
  }
  local_4 = 0xffffffff;
  FUN_005f13d0();
  *unaff_FS_OFFSET = local_c;
  return;
}



float * FUN_00625290(float *param_1)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  float *unaff_retaddr;
  
  piVar3 = (int *)(**(code **)(*in_ECX + 0x154))();
  if (piVar3 == (int *)0x0) {
    pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
    *param_1 = *pfVar4;
    fVar1 = pfVar4[2];
    param_1[1] = pfVar4[1];
    param_1[2] = fVar1;
    return param_1;
  }
  iVar5 = (**(code **)(*piVar3 + 0x58))("EntryPoint");
  if (iVar5 == 0) {
    uVar6 = (**(code **)(*in_ECX + 0x170))();
    uVar6 = FUN_0046d3f0(uVar6);
    FUN_004a7a60("Missing \'EntryPoint\' node for creature \'%s\'.",uVar6);
    fVar1 = (float)piVar3[0x16];
    *unaff_retaddr = (float)piVar3[0x15];
    fVar2 = (float)piVar3[0x17];
    unaff_retaddr[1] = fVar1;
    unaff_retaddr[2] = fVar2;
    return unaff_retaddr;
  }
  pfVar4 = (float *)FUN_007101f0(&stack0xfffffff0,iVar5 + 0x54);
  *unaff_retaddr = *pfVar4 + (float)piVar3[0x15];
  unaff_retaddr[1] = pfVar4[1] + (float)piVar3[0x16];
  unaff_retaddr[2] = pfVar4[2] + (float)piVar3[0x17];
  return unaff_retaddr;
}



void FUN_006253a0(byte param_1)

{
  FUN_00625140();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1 FUN_00625850(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_004a05e0(param_1);
  iVar3 = DAT_00b3b918;
  DAT_00b3b918 = DAT_00b3b918 + 1;
  if (iVar2 != 0) {
    DAT_00b3b918 = iVar3;
    return 1;
  }
  if (DAT_00b3b918 < 4) {
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 != 0) {
      uVar4 = FUN_00405790(0);
      uVar1 = FUN_00625850(uVar4);
    }
  }
  DAT_00b3b918 = DAT_00b3b918 + -1;
  return uVar1;
}



void FUN_006258d0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  undefined4 uVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  ppuVar8 = &PTR_PTR_00b0375c;
  ppuVar7 = &PTR_PTR_00b03de4;
  uVar6 = 0;
  uVar3 = FUN_005e02e0(0);
  iVar4 = FUN_009832e6(uVar3,uVar6,ppuVar7,ppuVar8,uVar9);
  if (iVar4 != 0) {
    iVar5 = (**(code **)(*in_ECX + 0x164))();
    if ((iVar5 != 0) && (*(int *)(iVar5 + 0x98) != 0)) {
      piVar1 = *(int **)(*(int *)(iVar5 + 0x98) + 0x7c);
      cVar2 = (**(code **)(*(int *)(iVar4 + 0x24) + 0x18))();
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*piVar1 + 0x4c))("Bip01 L UpperArm");
        FUN_00536740(uVar3);
      }
      cVar2 = (**(code **)(*(int *)(iVar4 + 0x24) + 0x1c))();
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*piVar1 + 0x4c))("Bip01 R UpperArm");
        FUN_00536740(uVar3);
      }
      cVar2 = (**(code **)(*(int *)(iVar4 + 0x24) + 0x20))();
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*piVar1 + 0x4c))("Bip01 Head");
        FUN_00536740(uVar3);
      }
    }
  }
  return;
}



void FUN_00625d00(void)

{
  undefined4 *in_ECX;
  
  FUN_00568e10();
  in_ECX[0x11] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *in_ECX = &PTR_FUN_00a7151c;
  return;
}



undefined4 FUN_00625d30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x5c);
}



void FUN_00625d40(undefined4 param_1)

{
  FUN_00566380(param_1);
  FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b058e8,0);
  return;
}



void FUN_00625d70(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
    FUN_005ef930();
    return;
  }
  return;
}



void FUN_00625d80(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar2;
  float10 fVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2ed8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7151c;
  in_ECX[0x14] = param_1;
  if (param_1 != 0) {
    FUN_006b74b0();
  }
  in_ECX[0x11] = 0;
  in_ECX[0x18] = param_3;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = param_2;
  (**(code **)(*param_2 + 0x17c))(0);
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x12] = 0;
  fVar2 = (float10)FUN_004d7e90(DAT_00b333c4,0);
  if (((float)fVar2 < 800.0) &&
     ((*(int *)(DAT_00b333c4 + 0x118) == 0 ||
      (fVar3 = (float10)FUN_004d7e90(DAT_00b333c4,0), (float10)(float)fVar2 < fVar3)))) {
    *(undefined4 **)(DAT_00b333c4 + 0x118) = in_ECX;
  }
  *(undefined1 *)(in_ECX + 0x13) = 0;
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_00625e70(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c35d8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7151c;
  local_4 = 0;
  if (in_ECX == *(undefined4 **)(DAT_00b333c4 + 0x118)) {
    *(undefined4 *)(DAT_00b333c4 + 0x118) = 0;
  }
  iVar1 = in_ECX[0x14];
  if (iVar1 != 0) {
    thunk_FUN_006b7450(uVar2);
    FUN_00401f20(iVar1);
  }
  local_4 = 0xffffffff;
  FUN_00568640();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00625fe0(void)

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
  uint local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  uint local_c;
  short *local_8;
  undefined4 local_4;
  
  FUN_00567e00();
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_8 = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_c = 0x4b4f4c42;
    FUN_0045b9a0(&local_c,4);
    local_8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  FUN_0046ac70(in_ECX + 0x44,4);
  if (0x69 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x4c,1);
  }
  local_20 = 0;
  if (*(int *)(in_ECX + 0x48) != 0) {
    local_20 = *(undefined4 *)(*(int *)(in_ECX + 0x48) + 0xc);
  }
  FUN_0046ac90(&local_20,4);
  local_1c = 0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    local_1c = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0xc);
  }
  FUN_0046ac90(&local_1c,4);
  local_18 = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x60) + 0xc);
  }
  FUN_0046ac90(&local_18,4);
  local_14 = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x40) + 0xc);
  }
  FUN_0046ac90(&local_14,4);
  local_24 = 0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    local_24 = FUN_006b75b0();
    local_24 = local_24 & 0xffff;
  }
  FUN_0045b9a0(&local_24,2);
  if ((short)local_24 != 0) {
    FUN_006b7690();
    local_10 = 0xffffffff;
    if (*(int *)(in_ECX + 0x54) != 0) {
      local_10 = FUN_006b7520(*(int *)(in_ECX + 0x54));
      local_10 = local_10 & 0xffff;
    }
    FUN_0046ac70(&local_10,2);
    local_c = 0xffffffff;
    if ((*(int *)(in_ECX + 0x54) != 0) && (*(int *)(in_ECX + 0x58) != 0)) {
      local_c = FUN_006b7c60(*(int *)(in_ECX + 0x58));
      local_c = local_c & 0xffff;
    }
    FUN_0046ac70(&local_c,2);
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x17a,
                   ".\\AI\\DialoguePackage.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x17a,".\\AI\\DialoguePackage.cpp");
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
                   ".\\AI\\DialoguePackage.cpp",0x17a);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_00626230(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  char *pcVar9;
  short asStack_3c [2];
  short asStack_38 [2];
  short asStack_34 [2];
  uint local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c360b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00567f70(uVar4);
  local_30 = 0;
  iVar8 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_2c,4);
    if (local_2c != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\DialoguePackage.cpp",0x182,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\DialoguePackage.cpp",0x182,*puVar2,uVar6);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_30,2);
  }
  FUN_0046ac80(in_ECX + 0x44,4);
  if (0x69 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x4c,1);
  }
  FUN_0046aca0(&uStack_28,4);
  *(undefined4 *)(in_ECX + 0x48) = uStack_28;
  FUN_0046aca0(&uStack_24,4);
  *(undefined4 *)(in_ECX + 0x5c) = uStack_24;
  FUN_0046aca0(&uStack_20,4);
  *(undefined4 *)(in_ECX + 0x60) = uStack_20;
  FUN_0046aca0(&uStack_1c,4);
  uVar6 = FUN_0046b250(uStack_1c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05390,0);
  uVar6 = FUN_009832e6(uVar6);
  *(undefined4 *)(in_ECX + 0x40) = uVar6;
  if (0x1f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(asStack_3c,2);
    if (asStack_3c[0] != 0) {
      iStack_10 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = FUN_006b7410();
      }
      uStack_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x50) = uVar6;
      FUN_006b7840();
      FUN_0046ac80(&uStack_18,2);
      if ((short)uStack_18 == -1) {
        *(undefined4 *)(in_ECX + 0x54) = 0;
      }
      else {
        uVar6 = FUN_006b7560(uStack_18);
        *(undefined4 *)(in_ECX + 0x54) = uVar6;
      }
      FUN_0046ac80(&uStack_14,2);
      *(int *)(in_ECX + 0x58) = (int)(short)uStack_14;
      if ((*(int *)(in_ECX + 0x54) == 0) || ((short)uStack_14 == -1)) {
        *(undefined4 *)(in_ECX + 0x58) = 0;
      }
      else {
        uVar6 = FUN_006b7ca0(uStack_14);
        *(undefined4 *)(in_ECX + 0x58) = uVar6;
      }
    }
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) {
    FUN_0046ac80(&iStack_10,4);
    *(int *)(in_ECX + 0x50) = iStack_10;
    if (iStack_10 == 0) {
      *(undefined4 *)(in_ECX + 0x54) = 0;
      *(undefined4 *)(in_ECX + 0x58) = 0;
    }
    else {
      FUN_0046ac80(asStack_38,2);
      *(int *)(in_ECX + 0x54) = (int)asStack_38[0];
      FUN_0046ac80(asStack_34,2);
      *(int *)(in_ECX + 0x58) = (int)asStack_34[0];
    }
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar7 = local_30 & 0xffff;
      if (uVar7 + iVar8 < uVar4) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar4 - uVar7) - iVar8;
        pcVar9 = "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
        ;
      }
      else {
        if (uVar7 + iVar8 <= uVar4) goto LAB_006265e5;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar7 - uVar4) + iVar8;
        pcVar9 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar9,iVar8,".\\AI\\DialoguePackage.cpp",0x1d1,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (local_30 & 0xffff) + iVar8;
      if (uVar7 < uVar4) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar4 - (local_30 & 0xffff)) - iVar8,".\\AI\\DialoguePackage.cpp",0x1d1,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      if (uVar4 < uVar7) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_30 & 0xffff) - uVar4) + iVar8,".\\AI\\DialoguePackage.cpp",0x1d1,
                     *puVar2,uVar6);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
LAB_006265e5:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00626600(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_005660f0(uVar4);
  uVar5 = FUN_0046b250(*(undefined4 *)(in_ECX + 0x48),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
  uVar5 = FUN_009832e6(uVar5);
  *(undefined4 *)(in_ECX + 0x48) = uVar5;
  uVar5 = FUN_0046b250(*(undefined4 *)(in_ECX + 0x5c),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
  uVar5 = FUN_009832e6(uVar5);
  *(undefined4 *)(in_ECX + 0x5c) = uVar5;
  uVar5 = FUN_0046b250(*(undefined4 *)(in_ECX + 0x60),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
  uVar5 = FUN_009832e6(uVar5);
  *(undefined4 *)(in_ECX + 0x60) = uVar5;
  if ((0x1f < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(int *)(in_ECX + 0x50) != 0)) {
    FUN_006b7b60();
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) {
    iVar3 = *(int *)(in_ECX + 0x50);
    sVar1 = *(short *)(in_ECX + 0x54);
    sVar2 = *(short *)(in_ECX + 0x58);
    if (iVar3 != 0) {
      iVar6 = FUN_00401f00(0x10);
      local_4 = 0;
      if (iVar6 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_006b7420(*(undefined4 *)(in_ECX + 0x5c),*(undefined4 *)(in_ECX + 0x60),
                             *(undefined4 *)(in_ECX + 0x40),iVar3);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x50) = uVar5;
      if (sVar1 == -1) {
        *(undefined4 *)(in_ECX + 0x54) = 0;
      }
      else {
        uVar5 = FUN_006b7560(sVar1);
        *(undefined4 *)(in_ECX + 0x54) = uVar5;
      }
      if ((*(int *)(in_ECX + 0x54) == 0) || (sVar2 == -1)) {
        *(undefined4 *)(in_ECX + 0x58) = 0;
      }
      else {
        uVar5 = FUN_006b7ca0(sVar2);
        *(undefined4 *)(in_ECX + 0x58) = uVar5;
      }
      FUN_006b74f0(*(undefined4 *)(in_ECX + 0x54));
      FUN_006b74f0(*(undefined4 *)(in_ECX + 0x58));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00626780(byte param_1)

{
  FUN_00625e70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_006267a0(char param_1)

{
  float fVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c3638;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)(in_ECX + 0x4c) == '\0') {
    if (*(int *)(in_ECX + 0x54) == 0) {
      if (*(int *)(in_ECX + 0x50) == 0) {
        (**(code **)(**(int **)(in_ECX + 0x5c) + 0x17c))(1);
        (**(code **)(**(int **)(in_ECX + 0x60) + 0x17c))(1);
        goto LAB_00626bef;
      }
      FUN_006b74b0();
      iVar4 = FUN_006b7c20();
      *(int *)(in_ECX + 0x54) = iVar4;
      if (iVar4 != 0) {
        FUN_006b7ba0();
        goto LAB_0062684e;
      }
      (**(code **)(**(int **)(in_ECX + 0x5c) + 0x17c))(1);
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x17c))(1);
LAB_00626859:
      if (*(int *)(in_ECX + 0x58) != 0) goto LAB_0062687d;
    }
    else if (*(int *)(in_ECX + 0x58) != 0) {
      FUN_006b7c00(uVar3);
LAB_0062684e:
      uVar5 = FUN_006b7c20();
      *(undefined4 *)(in_ECX + 0x58) = uVar5;
      goto LAB_00626859;
    }
    if (*(int *)(in_ECX + 0x54) != 0) {
      FUN_006b7c30();
    }
    FUN_006b74c0();
    uVar5 = FUN_006b7c20();
    *(undefined4 *)(in_ECX + 0x54) = uVar5;
  }
LAB_0062687d:
  if (*(int *)(in_ECX + 0x54) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x5c) + 0x17c))(1);
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x17c))(1);
    goto LAB_00626bef;
  }
  if (*(int *)(in_ECX + 0x58) == 0) {
    FUN_006b7ba0();
    iVar4 = FUN_006b7c20();
    *(int *)(in_ECX + 0x58) = iVar4;
    if (iVar4 == 0) {
      FUN_004a7a60("No responses found for conversation Topic Info (%08X).",
                   *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x54) + 0xc) + 0xc));
    }
    if (*(int *)(in_ECX + 0x58) == 0) goto LAB_00626bef;
  }
  iVar4 = FUN_009832e6(*(undefined4 *)(*(int *)(in_ECX + 0x54) + 0x18),0,&PTR_PTR_00b03054,
                       &PTR_PTR_00b03070,0);
  if ((iVar4 == 0) || (param_1 == '\0')) goto LAB_00626bef;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x48) != 0) {
    FUN_005ef930();
    *(undefined4 *)(in_ECX + 0x48) = 0;
  }
  FUN_004028d0(*(undefined4 *)(*(int *)(in_ECX + 0x58) + 0x10),0);
  iVar6 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x260))();
  if (iVar6 == 0) {
    cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x250))();
    if ((cVar2 != '\0') || (DAT_00b1490c == '\0')) goto LAB_006269ad;
    cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x25c))();
    if (cVar2 != '\0') goto LAB_006269ad;
    uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 0xc);
    uVar16 = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 8);
    uVar15 = 1;
    uVar14 = 1;
    uVar13 = 0;
    uVar12 = 1;
    uVar7 = FUN_00404fd0(1,0,1,1);
    fVar11 = (float10)FUN_005f7310(0,in_ECX + 0x3c,uVar16,uVar5,uVar7,uVar12,uVar13,uVar14,uVar15);
    *(float *)(in_ECX + 0x44) = (float)fVar11;
    *(int *)(in_ECX + 0x48) = iVar4;
    cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x250))();
    if (cVar2 != '\0') {
      *(undefined1 *)(in_ECX + 0x4c) = 1;
    }
  }
  else {
LAB_006269ad:
    cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x250))();
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x25c))();
      if (cVar2 == '\0') goto LAB_00626bbc;
    }
    iVar6 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x260))();
    if (iVar6 == 0) {
      cVar2 = (**(code **)(**(int **)(iVar4 + 0x58) + 0x25c))();
      if ((cVar2 == '\0') && (DAT_00b1490c != '\0')) goto LAB_00626bbc;
    }
    uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 0xc);
    uVar16 = *(undefined4 *)(*(int *)(in_ECX + 0x58) + 8);
    uVar15 = 1;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 1;
    uVar7 = FUN_00404fd0(1,0,0,1);
    fVar11 = (float10)FUN_005f7310(0,(undefined4 *)(in_ECX + 0x3c),uVar16,uVar5,uVar7,uVar12,uVar13,
                                   uVar14,uVar15);
    *(float *)(in_ECX + 0x44) = (float)fVar11;
    *(int *)(in_ECX + 0x48) = iVar4;
    (**(code **)(**(int **)(iVar4 + 0x58) + 0x264))(0);
    *(undefined1 *)(in_ECX + 0x4c) = 0;
    (**(code **)(**(int **)(iVar4 + 0x58) + 600))(0);
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x48) + 0x164))();
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x60) + 0x164))();
    if ((iVar4 != 0) && (iVar6 != 0)) {
      iVar4 = FUN_00521450(*(undefined4 *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x60));
      if (iVar4 != 0) {
        uVar16 = 2;
        uVar5 = FUN_00520200(2);
        FUN_00477db0(iVar4,*(undefined4 *)(in_ECX + 0x48),uVar5,uVar16);
        (**(code **)(**(int **)(*(int *)(in_ECX + 0x5c) + 0x58) + 0x68))(0);
      }
      if (*(int *)(in_ECX + 0x60) != *(int *)(in_ECX + 0x48)) {
        iVar4 = FUN_00521450(*(int *)(in_ECX + 0x60),*(int *)(in_ECX + 0x48));
        if (iVar4 != 0) {
          uVar16 = 2;
          uVar5 = FUN_00520200(2);
          FUN_00477db0(iVar4,*(undefined4 *)(in_ECX + 0x60),uVar5,uVar16);
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x60) + 0x58) + 0x68))(0);
        }
      }
    }
    if ((in_ECX == *(int *)(DAT_00b333c4 + 0x118)) || (DAT_00b3bda5 != '\0')) {
      iVar4 = FUN_006b7c20();
      if (iVar4 != 0) {
        FUN_006b7c20();
        iVar4 = FUN_006b7c20();
        if (iVar4 != 0) {
          FUN_006b7c20();
          piVar8 = (int *)FUN_006b7c20();
          if ((*piVar8 != 0) && (DAT_00b13208 != '\0')) {
            FUN_006b7c20();
            puVar9 = (undefined4 *)FUN_006b7c20();
            FUN_0057acc0(*puVar9,*(undefined4 *)(in_ECX + 0x3c),0,0xbf800000);
          }
        }
      }
    }
    if (*(float *)(in_ECX + 0x44) <= 0.0) {
      iVar4 = FUN_00404fd0();
      fVar1 = (float)iVar4;
      if (iVar4 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      pfVar10 = (float *)FUN_00403c00();
      *(float *)(in_ECX + 0x44) = *pfVar10 * fVar1;
    }
  }
LAB_00626bbc:
  local_4 = 0xffffffff;
  FUN_00402da0();
LAB_00626bef:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00626c10(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined1 auStack_c [12];
  
  uVar1 = (**(code **)(*param_1 + 0x174))();
  puVar2 = (undefined4 *)FUN_005e03e0(auStack_c,uVar1);
  *(undefined4 *)(in_ECX + 0x40) = *puVar2;
  *(undefined4 *)(in_ECX + 0x44) = puVar2[1];
  *(undefined4 *)(in_ECX + 0x48) = puVar2[2];
  return;
}



void FUN_00626c50(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a71664;
  iVar1 = in_ECX[0x16];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x16] + 4);
    FUN_00401f20(in_ECX[0x16]);
    in_ECX[0x16] = iVar1;
  }
  in_ECX[0x15] = 0;
  FUN_00568640();
  return;
}



void FUN_00626c90(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = (int *)(in_ECX + 0x54);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00446cb0();
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



void FUN_00626de0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x54);
  piVar3 = piVar1;
  while ((piVar3 != (int *)0x0 && (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0))) {
    cVar4 = (**(code **)(*piVar2 + 0x198))(0);
    if ((cVar4 == '\0') &&
       (((cVar4 = (**(code **)(*piVar2 + 0x334))(1), cVar4 != '\0' || (piVar2 == DAT_00b333c4)) &&
        (((uint)piVar2[2] >> 5 & 1) == 0)))) {
      piVar3 = (int *)piVar3[1];
    }
    else {
      piVar2 = (int *)piVar3[1];
      if (piVar2 == (int *)0x0) {
        *piVar3 = 0;
        piVar3 = piVar1;
      }
      else {
        piVar3[1] = piVar2[1];
        *piVar3 = *piVar2;
        FUN_00401f20(piVar2);
        piVar3 = piVar1;
      }
    }
  }
  return;
}



undefined4 FUN_00626e60(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  
  piVar1 = (int *)(in_ECX + 0x54);
  iVar5 = 0;
  piVar4 = piVar1;
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar4 != 0) {
        iVar5 = iVar5 + 1;
      }
      piVar2 = piVar4 + 1;
      piVar4 = (int *)*piVar2;
    } while ((int *)*piVar2 != (int *)0x0);
    if (((iVar5 == 1) && (*piVar1 == DAT_00b333c4)) && (cVar3 = FUN_006605a0(0), cVar3 == '\0')) {
      return 1;
    }
  }
  return 0;
}



uint FUN_00626ea0(void)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  
  uVar3 = FUN_00567d20();
  uVar3 = uVar3 & 0xffff;
  cVar2 = FUN_0045a170();
  uVar7 = uVar3;
  if (cVar2 != '\0') {
    uVar7 = uVar3 + 6;
  }
  iVar6 = 0;
  for (piVar4 = (int *)(in_ECX + 0x54); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if (*piVar4 != 0) {
      iVar6 = iVar6 + 1;
    }
  }
  uVar7 = uVar7 + 0x1f + iVar6 * 4;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x1d6,".\\AI\\FleePackage.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,(uVar7 & 0xffff) - uVar3,*puVar1,uVar5);
      return uVar7 & 0xffff;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(uVar7 & 0xffff) - uVar3,0x1d6,
                 ".\\AI\\FleePackage.cpp");
  }
  return uVar7 & 0xffff;
}



void FUN_00626f70(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00567e00();
  local_4 = 0;
  local_18 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_1c = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_1c,2);
  for (piVar7 = (int *)(in_ECX + 0x54);
      (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]) {
    local_8 = *(undefined4 *)(*piVar7 + 0xc);
    FUN_0046ac90(&local_8,4);
    local_1c = local_1c + 1;
  }
  *puVar1 = (undefined2)local_1c;
  local_14 = 0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x60) + 0xc);
  }
  FUN_0046ac90(&local_14,4);
  local_10 = 0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0xc);
  }
  FUN_0046ac90(&local_10,4);
  FUN_0046ac70(in_ECX + 0x3d,1);
  FUN_0046ac70(in_ECX + 100,1);
  FUN_0046ac70(in_ECX + 0x50,1);
  FUN_0046ac70(in_ECX + 0x4c,4);
  FUN_0046ac70(in_ECX + 0x40,0xc);
  FUN_0046ac70(in_ECX + 0x3c,1);
  FUN_0046ac70(in_ECX + 0x65,1);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - local_18,0x209,
                   ".\\AI\\FleePackage.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x209,".\\AI\\FleePackage.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - local_18,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\FleePackage.cpp",0x209);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00627190(void)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  ushort local_18 [2];
  uint local_14;
  int local_10;
  int iStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00567f70();
  iVar8 = 0;
  local_14 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_10,4);
    if (local_10 != 0x4b4f4c42) {
      puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\FleePackage.cpp",0x211,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar6);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\FleePackage.cpp",0x211,*puVar6,uVar5);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
  }
  FUN_0046ac80(local_18,2);
  iVar9 = 0;
  if (local_18[0] != 0) {
    do {
      FUN_0046aca0(&iStack_c,4);
      iVar2 = iStack_c;
      if (iStack_c != 0) {
        if (*(int *)(in_ECX + 0x54) == 0) {
          *(int *)(in_ECX + 0x54) = iStack_c;
        }
        else {
          puVar6 = (undefined4 *)FUN_00401f00(8);
          if (puVar6 == (undefined4 *)0x0) {
            _DAT_00000004 = *(undefined4 *)(in_ECX + 0x58);
            *(undefined4 *)(in_ECX + 0x58) = 0;
            *(int *)(in_ECX + 0x54) = iVar2;
          }
          else {
            *puVar6 = *(undefined4 *)(in_ECX + 0x54);
            puVar6[1] = 0;
            puVar6[1] = *(undefined4 *)(in_ECX + 0x58);
            *(undefined4 **)(in_ECX + 0x58) = puVar6;
            *(int *)(in_ECX + 0x54) = iVar2;
          }
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)local_18[0]);
  }
  FUN_0046aca0(&uStack_8,4);
  *(undefined4 *)(in_ECX + 0x60) = uStack_8;
  FUN_0046aca0(&uStack_4,4);
  *(undefined4 *)(in_ECX + 0x5c) = uStack_4;
  FUN_0046ac80(in_ECX + 0x3d,1);
  FUN_0046ac80(in_ECX + 100,1);
  FUN_0046ac80(in_ECX + 0x50,1);
  FUN_0046ac80(in_ECX + 0x4c,4);
  FUN_0046ac80(in_ECX + 0x40,0xc);
  FUN_0046ac80(in_ECX + 0x3c,1);
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x65,1);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = local_14 & 0xffff;
      if (uVar7 + iVar8 < uVar1) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar1 - uVar7) - iVar8,".\\AI\\FleePackage.cpp",0x239,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar1 < uVar7 + iVar8) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar7 - uVar1) + iVar8,".\\AI\\FleePackage.cpp",0x239,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar6);
      uVar7 = (local_14 & 0xffff) + iVar8;
      if (uVar7 < uVar1) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar1 - (local_14 & 0xffff)) - iVar8,".\\AI\\FleePackage.cpp",0x239,*puVar6,
                     uVar5);
        return;
      }
      if (uVar1 < uVar7) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar1) + iVar8,".\\AI\\FleePackage.cpp",0x239,*puVar6,
                     uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_00627490(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c367e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar3);
  *in_ECX = &PTR_FUN_00a71664;
  local_4 = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  FUN_005661e0(0x10);
  in_ECX[7] = in_ECX[7] | 6;
  if (param_1 == 0) goto LAB_00627604;
  iVar4 = FUN_00401f00(0xc);
  local_4._0_1_ = 1;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_005696b0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (param_2 == 0) {
    if (param_3 != 0) {
LAB_0062753f:
      FUN_00569750(0);
      FUN_005697f0(param_3);
      goto LAB_00627566;
    }
    FUN_00569750(0);
    FUN_005697f0(param_1);
    *(undefined1 *)(in_ECX + 0xf) = 1;
  }
  else {
    if (param_3 != 0) goto LAB_0062753f;
    FUN_00569750(1);
    FUN_00569810(param_2);
LAB_00627566:
    *(undefined1 *)(in_ECX + 0xf) = 0;
  }
  FUN_00565e00(iVar4);
  if (iVar4 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar4);
  }
  iVar4 = FUN_00401f00(0xc);
  local_4._0_1_ = 2;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_00569e40();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00565ec0(iVar4);
  if (iVar4 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar4);
  }
  in_ECX[6] = 0x13;
  FUN_00569e90(0);
  FUN_00569ec0(param_1);
  for (piVar1 = in_ECX + 0x15; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 == param_1) goto LAB_00627604;
  }
  FUN_00446cb0(param_1);
LAB_00627604:
  FUN_00566830(1);
  in_ECX[0x10] = DAT_00b3f9a8;
  in_ECX[0x11] = DAT_00b3f9ac;
  uVar2 = DAT_00b3f9b0;
  in_ECX[0x13] = 0xbf800000;
  in_ECX[0x12] = uVar2;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x65) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00627660(byte param_1)

{
  FUN_00626c50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00627680(undefined4 *param_1,int *param_2,int *param_3,char param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  int in_ECX;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *puVar14;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar3 = FUN_004d7930();
  if ((iVar3 == 0) || (iVar3 = (**(code **)(*param_2 + 0x380))(), iVar3 != 0)) {
    iVar3 = (**(code **)(*param_2 + 0x380))();
    if (iVar3 != 0) {
      param_4 = '\0';
    }
  }
  else {
    piVar4 = (int *)FUN_004d7930();
    iVar3 = FUN_009832e6(piVar4,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if (((piVar4 != (int *)0x0) && (iVar3 != 0)) && (*(int *)(iVar3 + 0x58) != 0)) {
      uVar5 = (**(code **)(*param_2 + 0x170))();
      FUN_00423660(uVar5);
      iVar3 = FUN_004d6670();
      iVar6 = FUN_004d6670();
      if (((iVar3 == iVar6) && (cVar2 = (**(code **)(*piVar4 + 0x198))(0), cVar2 == '\0')) &&
         ((((uint)piVar4[2] >> 0xb & 1) == 0 &&
          (fVar11 = (float10)FUN_004d7e90(param_2,0),
          fVar11 < (float10)500.0 != (fVar11 == (float10)500.0))))) {
        *(undefined1 *)(in_ECX + 0x65) = 1;
        param_4 = '\0';
      }
    }
  }
  if (*(char *)(in_ECX + 0x3c) == '\0') {
    puVar10 = (undefined4 *)FUN_00566b30(&fStack_c,param_2);
    *param_1 = *puVar10;
    param_1[1] = puVar10[1];
    param_1[2] = puVar10[2];
  }
  else if (param_3 != (int *)0x0) {
    DAT_00b3b924 = param_3;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
    if (((param_4 != '\0') && (cVar2 = FUN_004db4a0(), cVar2 != '\0')) &&
       (cVar2 = FUN_00680ee0(param_2), cVar2 != '\0')) {
      puVar14 = &LAB_00626cc0;
      uVar13 = 0x457a0000;
      piVar4 = param_2;
      uVar5 = (**(code **)(*param_2 + 0x174))(0x457a0000,&LAB_00626cc0,param_2);
      uVar12 = 0x457a0000;
      uVar7 = (**(code **)(*param_2 + 0x174))(0x457a0000,uVar5);
      uVar8 = FUN_006ecc80(uVar7);
      FUN_00446b90(uVar8,uVar7,uVar12,uVar5,uVar13,puVar14,piVar4);
    }
    DAT_00b3b924 = (int *)0x0;
    if (DAT_00b3b91c != 0) {
      *(int *)(in_ECX + 0x5c) = DAT_00b3b91c;
      DAT_00b3b91c = 0;
    }
    if (*(int *)(in_ECX + 0x5c) == 0) {
      pfVar9 = (float *)(**(code **)(*param_3 + 0x174))();
      fStack_14 = pfVar9[1];
      fStack_18 = *pfVar9;
      fStack_10 = pfVar9[2];
      pfVar9 = (float *)(**(code **)(*param_2 + 0x174))();
      fVar1 = _DAT_00b37030;
      fStack_24 = *pfVar9;
      fStack_20 = pfVar9[1];
      fStack_1c = pfVar9[2];
      fStack_30 = fStack_24 - fStack_18;
      fStack_2c = fStack_20 - fStack_14;
      fStack_28 = fStack_1c - fStack_10;
      FUN_0043f350();
      fStack_18 = fVar1 * fStack_30;
      fStack_14 = fStack_2c * fVar1;
      fStack_10 = fVar1 * fStack_28;
      fStack_30 = fStack_18 + fStack_24;
      fStack_2c = fStack_14 + fStack_20;
      fStack_28 = fStack_10 + fStack_1c;
      fStack_c = fStack_30;
      fStack_8 = fStack_2c;
      fStack_4 = fStack_28;
      uVar5 = FUN_006ecc80();
      puVar10 = (undefined4 *)FUN_005e2e20(&fStack_c,fStack_30,fStack_2c,fStack_28,uVar5,0,0,0);
      *param_1 = *puVar10;
      param_1[1] = puVar10[1];
      param_1[2] = puVar10[2];
      cVar2 = FUN_008aa350(&fStack_30);
      if (cVar2 == '\0') goto LAB_00627981;
      puVar10 = (undefined4 *)FUN_005e03e0(&fStack_c,&fStack_30);
    }
    else {
      puVar10 = (undefined4 *)FUN_004d76f0();
    }
    *param_1 = *puVar10;
    param_1[1] = puVar10[1];
    param_1[2] = puVar10[2];
  }
LAB_00627981:
  *(undefined4 *)(in_ECX + 0x40) = *param_1;
  *(undefined4 *)(in_ECX + 0x44) = param_1[1];
  *(undefined4 *)(in_ECX + 0x48) = param_1[2];
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_006279a0(undefined4 *param_1,int *param_2,int *param_3,char param_4)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  int in_ECX;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  int *piVar13;
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
  float fStack_14;
  float fStack_10;
  float local_c;
  float fStack_8;
  float fStack_4;
  
  if (*(char *)(in_ECX + 0x3c) == '\x01') {
    DAT_00b3b924 = param_3;
    if (param_4 != '\0') {
      cVar2 = FUN_004db4a0();
      if (cVar2 != '\0') {
        iVar3 = (**(code **)(*param_2 + 0x380))();
        if (iVar3 == 0) {
          cVar2 = FUN_00680ee0(param_2);
          if (cVar2 != '\0') {
            puVar12 = &LAB_00626cc0;
            uVar11 = 0x457a0000;
            piVar13 = param_2;
            uVar4 = (**(code **)(*param_2 + 0x174))(0x457a0000,&LAB_00626cc0,param_2);
            uVar10 = 0x457a0000;
            uVar5 = (**(code **)(*param_2 + 0x174))(0x457a0000,uVar4);
            uVar6 = FUN_006ecc80(uVar5);
            FUN_00446b90(uVar6,uVar5,uVar10,uVar4,uVar11,puVar12,piVar13);
          }
        }
      }
    }
    iVar3 = DAT_00b3b91c;
    DAT_00b3b924 = (int *)0x0;
    if (DAT_00b3b91c == 0) {
      if (param_3 == (int *)0x0) goto LAB_00627d41;
      pfVar8 = (float *)(**(code **)(*param_3 + 0x174))();
      fStack_20 = pfVar8[1];
      fStack_24 = *pfVar8;
      fStack_1c = pfVar8[2];
      pfVar8 = (float *)(**(code **)(*param_2 + 0x174))();
      fVar1 = _DAT_00b37028;
      fStack_30 = *pfVar8;
      fStack_2c = pfVar8[1];
      fStack_28 = pfVar8[2];
      fStack_3c = fStack_30 - fStack_24;
      fStack_38 = fStack_2c - fStack_20;
      fStack_34 = fStack_28 - fStack_1c;
      FUN_0043f350();
      fStack_24 = fVar1 * fStack_3c;
      fStack_20 = fStack_38 * fVar1;
      fStack_1c = fVar1 * fStack_34;
      fStack_3c = fStack_24 + fStack_30;
      fStack_38 = fStack_20 + fStack_2c;
      fStack_34 = fStack_1c + fStack_28;
      fStack_18 = fStack_3c;
      fStack_14 = fStack_38;
      fStack_10 = fStack_34;
      uVar4 = FUN_006ecc80();
      puVar7 = (undefined4 *)FUN_005e2e20(&local_c,fStack_3c,fStack_38,fStack_34,uVar4,0,0,0);
      *param_1 = *puVar7;
      param_1[1] = puVar7[1];
      param_1[2] = puVar7[2];
      cVar2 = FUN_008aa350(&fStack_3c);
      if (cVar2 == '\0') {
        fVar9 = (float10)FUN_004d7e30(param_1);
        if (fVar9 < (float10)200.0) goto LAB_00627bab;
      }
      else {
LAB_00627bab:
        puVar7 = (undefined4 *)FUN_005e03e0(&local_c,&fStack_3c);
        *param_1 = *puVar7;
        param_1[1] = puVar7[1];
        param_1[2] = puVar7[2];
      }
      cVar2 = FUN_008aa350(&fStack_3c);
      if (cVar2 == '\0') goto LAB_00627d41;
      pfVar8 = (float *)(**(code **)(*param_3 + 0x174))();
      fStack_14 = pfVar8[1];
      fStack_18 = *pfVar8;
      fStack_10 = pfVar8[2];
      pfVar8 = (float *)(**(code **)(*param_2 + 0x174))();
      fVar1 = _DAT_00b37028;
      fStack_24 = *pfVar8;
      fStack_20 = pfVar8[1];
      fStack_1c = pfVar8[2];
      fStack_30 = fStack_18 - fStack_24;
      fStack_2c = fStack_14 - fStack_20;
      fStack_28 = fStack_10 - fStack_1c;
      FUN_0043f350();
      fStack_18 = fVar1 * fStack_30;
      fStack_14 = fStack_2c * fVar1;
      fStack_10 = fVar1 * fStack_28;
      fStack_30 = fStack_18 + fStack_24;
      fStack_2c = fStack_14 + fStack_20;
      fStack_28 = fStack_10 + fStack_1c;
      local_c = fStack_30;
      fStack_8 = fStack_2c;
      fStack_4 = fStack_28;
      uVar4 = FUN_006ecc80();
      puVar7 = (undefined4 *)FUN_005e2e20(&local_c,fStack_30,fStack_2c,fStack_28,uVar4,0,0,0);
      *param_1 = *puVar7;
      param_1[1] = puVar7[1];
      param_1[2] = puVar7[2];
      cVar2 = FUN_008aa350(&fStack_30);
      if (cVar2 == '\0') goto LAB_00627d41;
      puVar7 = (undefined4 *)FUN_005e03e0(&local_c,&fStack_30);
    }
    else {
      DAT_00b3b91c = 0;
      *(int *)(in_ECX + 0x5c) = iVar3;
      puVar7 = (undefined4 *)FUN_004d76f0();
    }
  }
  else {
    puVar7 = (undefined4 *)FUN_00566b30(&local_c,param_2);
  }
  *param_1 = *puVar7;
  param_1[1] = puVar7[1];
  param_1[2] = puVar7[2];
LAB_00627d41:
  *(undefined4 *)(in_ECX + 0x40) = *param_1;
  *(undefined4 *)(in_ECX + 0x44) = param_1[1];
  *(undefined4 *)(in_ECX + 0x48) = param_1[2];
  return param_1;
}



void FUN_00627d60(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x54);
  FUN_0065c620(param_1);
  if (*(int *)(in_ECX + 0x28) != 0) {
    iVar2 = FUN_00569e60();
    if ((iVar2 != 0) && (iVar2 == param_1)) {
      if ((*(int *)(in_ECX + 0x58) == 0) && (*piVar1 == 0)) {
        FUN_00569ec0(0);
        iVar2 = 0;
      }
      else {
        FUN_00569ec0(*piVar1);
        iVar2 = *piVar1;
      }
      FUN_005697f0(iVar2);
    }
  }
  if (param_1 == *(int *)(in_ECX + 0x60)) {
    *(undefined4 *)(in_ECX + 0x60) = 0;
  }
  return;
}



undefined2 FUN_00627dd0(int *param_1)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  int *piVar7;
  float fVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x198))(0);
  if (cVar3 != '\0') {
    return 0;
  }
  uVar1 = param_1[2];
  if ((uVar1 >> 5 & 1) != 0) {
    return 0;
  }
  if ((uVar1 >> 0xe & 1) != 0) {
    return 0;
  }
  if ((uVar1 >> 0xb & 1) != 0) {
    return 0;
  }
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  bVar2 = false;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  cVar3 = (**(code **)(*piVar4 + 0x334))(1);
  if (cVar3 == '\0') {
    iVar5 = (**(code **)(*param_1 + 0x330))();
    if (iVar5 == 0) goto LAB_00627e8b;
    piVar7 = piVar4;
    (**(code **)(*param_1 + 0x330))(piVar4);
    cVar3 = FUN_00613670(piVar7);
    if (cVar3 == '\0') goto LAB_00627e8b;
  }
  bVar2 = true;
LAB_00627e8b:
  if (piVar4 == param_1) {
    return 0;
  }
  if (param_1 == DAT_00b333c4) {
    return 0;
  }
  if (bVar2) {
    return 0;
  }
  if (((uint)piVar4[2] >> 0xb & 1) != 0) {
    return 0;
  }
  cVar3 = (**(code **)(*piVar4 + 0x198))(0);
  if (cVar3 != '\0') {
    return 0;
  }
  if (((uint)piVar4[2] >> 5 & 1) != 0) {
    return 0;
  }
  FUN_005e02e0(1);
  cVar3 = FUN_0046cb60();
  if (cVar3 != '\0') {
    FUN_005e02e0(0);
  }
  cVar3 = FUN_00467560();
  if ((cVar3 == '\0') && (iVar5 = (**(code **)(*param_1 + 0x284))(0x24), DAT_00b36c30 <= iVar5)) {
    cVar3 = FUN_005e6c60();
    if (cVar3 == '\0') {
      return 0;
    }
    cVar3 = FUN_005e3270();
    if (cVar3 != '\0') {
      return 0;
    }
  }
  else {
    iVar5 = (**(code **)(*piVar4 + 0x224))(param_1);
    if (iVar5 < 0x46) {
      return 0;
    }
    iVar5 = (**(code **)(*piVar4 + 0x284))(0x21);
    if (iVar5 < 0x32) {
      return 0;
    }
  }
  fVar8 = (float)piVar4[0xd];
  cVar3 = FUN_005e1c30();
  if ((cVar3 == '\0') || (cVar3 = FUN_005e3400(), cVar3 == '\0')) {
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      FUN_006ecc80();
      fVar6 = (float10)FUN_004cace0();
      if ((float10)fVar8 < fVar6) {
        return 0;
      }
    }
    DAT_00b3b920 = piVar4;
    return 1;
  }
  cVar3 = FUN_005e1e90();
  if (cVar3 == '\0') {
    DAT_00b3b920 = piVar4;
    return 1;
  }
  iVar5 = FUN_006ecc80();
  if (iVar5 == 0) {
    DAT_00b3b920 = piVar4;
    return 1;
  }
  FUN_006ecc80();
  fVar6 = (float10)FUN_004cace0();
  if ((float10)fVar8 <= fVar6) {
    DAT_00b3b920 = piVar4;
    return 1;
  }
  return 0;
}



void FUN_00627ff0(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  code *pcVar4;
  int *piVar5;
  
  cVar1 = FUN_00680ee0(param_1);
  if (cVar1 != '\0') {
    pcVar4 = FUN_00627dd0;
    uVar3 = 0x45fa0000;
    piVar5 = param_1;
    uVar2 = (**(code **)(*param_1 + 0x174))(0x45fa0000,FUN_00627dd0,param_1);
    FUN_00446a40(param_1,0x45fa0000,uVar2,uVar3,pcVar4,piVar5);
    *(undefined4 *)(in_ECX + 0x60) = DAT_00b3b920;
    DAT_00b3b920 = 0;
  }
  return;
}



void FUN_00628050(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  
  FUN_005660f0();
  piVar5 = (int *)(in_ECX + 0x54);
  piVar4 = (int *)0x0;
joined_r0x00628061:
  do {
    piVar3 = piVar5;
    if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
      if (*(int *)(in_ECX + 0x60) != 0) {
        uVar6 = FUN_0046b250(*(int *)(in_ECX + 0x60),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
        uVar6 = FUN_009832e6(uVar6);
        *(undefined4 *)(in_ECX + 0x60) = uVar6;
      }
      if (*(int *)(in_ECX + 0x5c) != 0) {
        uVar6 = FUN_0046b250(*(int *)(in_ECX + 0x5c),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        uVar6 = FUN_009832e6(uVar6);
        *(undefined4 *)(in_ECX + 0x5c) = uVar6;
      }
      return;
    }
    iVar1 = *piVar3;
    if (iVar1 != 0) {
      uVar6 = FUN_0046b250(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
      iVar7 = FUN_009832e6(uVar6);
      if (iVar7 != 0) {
        *piVar3 = iVar7;
        piVar5 = (int *)piVar3[1];
        piVar4 = piVar3;
        goto joined_r0x00628061;
      }
    }
    if (piVar4 == (int *)0x0) {
      piVar2 = (int *)piVar3[1];
      piVar5 = piVar3;
      if (piVar2 == (int *)0x0) {
        *piVar3 = 0;
      }
      else {
        piVar3[1] = piVar2[1];
        *piVar3 = *piVar2;
        FUN_00401f20(piVar2);
      }
    }
    else {
      FUN_0065c620(iVar1);
      piVar5 = (int *)piVar4[1];
    }
  } while( true );
}



int * FUN_00628140(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  float10 fVar4;
  float local_c;
  int *local_8;
  
  if ((*(char *)(in_ECX + 0x3c) != '\0') && (cVar3 = FUN_004db4a0(), cVar3 != '\0')) {
    local_c = 3.4028235e+38;
    local_8 = (int *)0x0;
    piVar2 = (int *)(in_ECX + 0x54);
    while ((piVar2 != (int *)0x0 && (piVar1 = (int *)*piVar2, piVar1 != (int *)0x0))) {
      piVar2 = (int *)piVar2[1];
      fVar4 = (float10)FUN_004d7e90(param_1,0);
      if ((((uint)piVar1[2] >> 0xb & 1) == 0) &&
         (cVar3 = (**(code **)(*piVar1 + 0x198))(0), cVar3 == '\0')) {
        if ((float)fVar4 < local_c) {
          local_c = (float)fVar4;
          local_8 = piVar1;
        }
      }
      else {
        FUN_00627d60(piVar1);
        piVar2 = (int *)(in_ECX + 0x54);
      }
    }
    return local_8;
  }
  return (int *)0x0;
}



void FUN_006282b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x36c))();
  if (((iVar1 != 0) && (iVar1 = (**(code **)(*in_ECX + 0x36c))(), iVar1 != 4)) &&
     (iVar1 = (**(code **)(*in_ECX + 0x36c))(), iVar1 != 9)) {
    return;
  }
  iVar1 = (**(code **)(*param_1 + 0x164))();
  if (iVar1 != 0) {
    FUN_00475440(1,0);
  }
  piVar2 = (int *)FUN_005e12b0();
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x80))(0x3f400000,1,1,1,1);
  }
  return;
}



void FUN_00628330(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  undefined4 uStack_c;
  undefined4 uStack_8;
  float fStack_4;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  cVar1 = FUN_005e01b0();
  if (cVar1 != '\0') {
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
  uStack_c = *puVar2;
  uStack_8 = puVar2[1];
  fStack_4 = (float)puVar2[2];
  FUN_006ecc80();
  fVar4 = (float10)FUN_004cace0();
  fStack_4 = (float)(fVar4 + (float10)500.0);
  iVar3 = (**(code **)(*in_ECX + 0x410))();
  if (iVar3 == 0) {
    (**(code **)(*in_ECX + 0x408))();
    iVar3 = (**(code **)(*in_ECX + 0x410))();
    if (iVar3 == 0) goto LAB_006283c2;
  }
  FUN_006862c0(&uStack_c);
LAB_006283c2:
  (**(code **)(*in_ECX + 0x2c4))(0x101,1);
  return;
}



void FUN_00628400(void)

{
  char cVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (in_ECX[0xb] != 0) {
    cVar1 = (**(code **)(*(int *)in_ECX[0xb] + 0x198))(0);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x51c))(unaff_retaddr,0);
      return;
    }
    (**(code **)(*in_ECX + 0x228))(unaff_retaddr,in_ECX[0xb],0,0,1,1,0,0,0,1);
  }
  return;
}



void FUN_00628460(void)

{
  char cVar1;
  int *in_ECX;
  undefined4 unaff_ESI;
  
  (**(code **)(*in_ECX + 0x2c4))(0x400,1);
  cVar1 = (**(code **)(*in_ECX + 0x51c))(unaff_ESI,0);
  if (cVar1 != '\0') {
    (**(code **)(*in_ECX + 0x2c4))(0x400,0);
  }
  return;
}



uint FUN_006284b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x184))();
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    cVar1 = FUN_00566dc0(param_1,0,0xbf800000);
    if (cVar1 != '\0') {
      uVar3 = (**(code **)(*in_ECX + 0xbc))(1);
      return uVar3 & 0xffffff00;
    }
    uVar3 = (**(code **)(*in_ECX + 0x17c))(0);
  }
  return uVar3 & 0xffffff00;
}



undefined4 FUN_00628520(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 0x184))();
  if (iVar2 != 0) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    cVar1 = FUN_00566dc0(param_1,0,0xbf800000);
    if (cVar1 == '\0') {
      (**(code **)(*in_ECX + 0x17c))(0);
      return 1;
    }
    (**(code **)(*in_ECX + 0xbc))(1);
  }
  return 0;
}



void FUN_00628590(void)

{
  int in_ECX;
  
  *(ushort *)(in_ECX + 0x1fc) = *(ushort *)(in_ECX + 0x1fc) & 0xfcff;
  return;
}



void FUN_00628600(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x2c) != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x2c) + 0x174))();
    *(undefined4 *)(in_ECX + 0xd4) = *puVar1;
    *(undefined4 *)(in_ECX + 0xd8) = puVar1[1];
    *(undefined4 *)(in_ECX + 0xdc) = puVar1[2];
  }
  return;
}



void FUN_00628630(int *param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 700) != 6) && (*(int *)(in_ECX + 700) != 5)) &&
     (iVar2 = (**(code **)(*param_1 + 0x284))(0x2f), (float)iVar2 <= 0.0)) {
    fVar1 = *(float *)(in_ECX + 0x2c0);
    *(undefined4 *)(in_ECX + 0x2c4) = 0;
    *(uint *)(in_ECX + 700) = (uint)((char)param_1 != '\0') * 2 + 1;
    if (!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0;
      return;
    }
  }
  return;
}



void FUN_006286b0(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 700) == 1) || (*(int *)(in_ECX + 700) == 3)) {
    *(undefined4 *)(in_ECX + 700) = 0;
    *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
    FUN_005ee1b0();
  }
  return;
}



void FUN_006286e0(int *param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  
  FUN_00520f00(param_2);
  FUN_00520f40(1);
  uVar4 = 0;
  if (param_3 != (int *)0x0) {
    iVar3 = (**(code **)(*param_1 + 0x174))();
    fVar1 = *(float *)(iVar3 + 8);
    iVar3 = (**(code **)(*param_3 + 0x174))();
    if (*(float *)(iVar3 + 8) <= fVar1 + 60.0) {
      cVar2 = FUN_004d7f80();
      if (cVar2 == '\0') goto LAB_00628757;
    }
    uVar4 = 1;
  }
LAB_00628757:
  FUN_00520f20(uVar4);
  (**(code **)(*in_ECX + 0x48))(param_1);
  FUN_00520f00(0);
  FUN_00520f40(0);
  FUN_00520f20(0xffffffff);
  return;
}



float * FUN_00628790(float *param_1,int *param_2,float param_3,int *param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  float *pfVar8;
  int iVar9;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  *param_1 = DAT_00b3f9a8;
  param_1[1] = DAT_00b3f9ac;
  param_1[2] = DAT_00b3f9b0;
  if ((param_4 != (int *)0x0) && (param_2 != (int *)0x0)) {
    pfVar8 = (float *)(**(code **)(*param_4 + 0x174))();
    fVar1 = pfVar8[1];
    fVar2 = *pfVar8;
    fVar3 = pfVar8[2];
    pfVar8 = (float *)(**(code **)(*param_2 + 0x174))();
    param_3 = param_3 + 0.0;
    fVar4 = *pfVar8;
    fVar5 = pfVar8[1];
    fVar6 = pfVar8[2];
    if (param_5 == '\0') {
      fStack_c = fVar4 - fVar2;
      fStack_8 = fVar5 - fVar1;
      fStack_4 = fVar6 - fVar3;
    }
    else {
      fStack_c = fVar2 - fVar4;
      fStack_8 = fVar1 - fVar5;
      fStack_4 = fVar3 - fVar6;
    }
    *param_1 = fStack_c;
    param_1[1] = fStack_8;
    param_1[2] = fStack_4;
    FUN_0043f350();
    fStack_c = param_3 * *param_1;
    fStack_8 = param_1[1] * param_3;
    fStack_4 = param_3 * param_1[2];
    *param_1 = fStack_c + fVar4;
    param_1[1] = fStack_8 + fVar5;
    param_1[2] = fStack_4 + fVar6;
    iVar9 = FUN_006ecc80();
    if (iVar9 != 0) {
      cVar7 = FUN_004c97f0();
      if (cVar7 != '\0') {
        pfVar8 = (float *)FUN_005e2e20(&fStack_c,*param_1,param_1[1],param_1[2],iVar9,0,0,0);
        *param_1 = *pfVar8;
        param_1[1] = pfVar8[1];
        param_1[2] = pfVar8[2];
      }
    }
  }
  return param_1;
}



void FUN_00628b20(int *param_1,undefined4 param_2)

{
  int in_ECX;
  
  switch(param_2) {
  case 0:
  case 7:
  case 0x12:
  case 0x1b:
    (**(code **)(*param_1 + 0x2c0))();
    break;
  case 0xb:
    *(undefined4 *)(in_ECX + 0x294) = 0xbf800000;
    return;
  case 0x30:
    *(undefined4 *)(in_ECX + 0x298) = 0xffffffff;
    return;
  }
  return;
}



void FUN_00628e40(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0xe8);
  uVar1 = *(undefined4 *)(in_ECX + 0xf0);
  param_1[1] = *(undefined4 *)(in_ECX + 0xec);
  param_1[2] = uVar1;
  return;
}



undefined4 FUN_00628e70(void)

{
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0x61) != '\0') && (*(int *)(in_ECX + 100) != 0)) {
    return 1;
  }
  return 0;
}



float10 FUN_00628e90(void)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = 0.0;
  if (0.0 <= *(float *)(in_ECX + 0xcc)) {
    fVar1 = *(float *)(in_ECX + 0xcc);
  }
  return (float10)fVar1;
}



void FUN_00628eb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0x7fffffff;
  in_ECX[3] = 0x7fffffff;
  in_ECX[7] = 0xffffffff;
  in_ECX[4] = 0;
  in_ECX[5] = 0x7fffffff;
  in_ECX[6] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00628ee0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c36b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0064b400(uVar2);
  *in_ECX = &PTR_FUN_00a71814;
  in_ECX[100] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x9a] = 0;
  *(undefined1 *)(in_ECX + 0x34) = 1;
  in_ECX[0x75] = 0;
  in_ECX[0x24] = 0xffffffff;
  DAT_00b3b928 = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x72] = 0;
  in_ECX[0x76] = 0;
  in_ECX[0x77] = 0;
  *(undefined2 *)(in_ECX + 0x7f) = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x80] = 0;
  in_ECX[0x81] = 0;
  *(undefined2 *)(in_ECX + 0x82) = 0xffff;
  in_ECX[0x66] = 0;
  in_ECX[0x69] = 0;
  in_ECX[0x7b] = 0;
  in_ECX[0x7c] = 0;
  *(undefined2 *)(in_ECX + 0x7d) = 0xffff;
  in_ECX[0x7e] = 0;
  in_ECX[0x86] = 0;
  *(undefined1 *)(in_ECX + 0x74) = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x83] = DAT_00b3f9a8;
  in_ECX[0x84] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0x87] = 0;
  in_ECX[0x8b] = 0;
  local_4 = 1;
  in_ECX[0x85] = uVar1;
  *(undefined1 *)(in_ECX + 0x8a) = 0;
  *(undefined1 *)(in_ECX + 0x8f) = 1;
  *(undefined1 *)(in_ECX + 0x91) = 0;
  in_ECX[0x94] = 0;
  iVar3 = FUN_0047df80(0);
  *(undefined1 *)(in_ECX + 0x93) = 0;
  *(undefined1 *)(in_ECX + 0x97) = 0;
  in_ECX[0x73] = 0;
  in_ECX[0x8c] = (float)(iVar3 % 5000) * 0.001 + 10.0;
  in_ECX[0x92] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x7a] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6c] = 0;
  puVar4 = (undefined4 *)FUN_00401f00(8);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  in_ECX[99] = puVar4;
  in_ECX[0x8e] = 0x41a00000;
  *(undefined1 *)(in_ECX + 0x79) = 0;
  in_ECX[0xaf] = 1;
  in_ECX[0x6a] = 0;
  in_ECX[0xb1] = 0;
  in_ECX[0x78] = 0;
  *(undefined1 *)((int)in_ECX + 0x25d) = 0;
  in_ECX[0x90] = 0;
  in_ECX[0xb0] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x9f] = DAT_00b3f9a8;
  in_ECX[0xa0] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0x98] = 0;
  in_ECX[0xa1] = uVar1;
  in_ECX[0x67] = _DAT_00b36940;
  in_ECX[0xa2] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0x9b] = 0x3f800000;
  in_ECX[0x9c] = 0;
  puVar4 = (undefined4 *)in_ECX[0x9a];
  if (puVar4 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar4 + 1);
    if ((LVar5 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    in_ECX[0x9a] = 0;
  }
  in_ECX[0xa3] = 0;
  in_ECX[0x9d] = 0;
  *(undefined1 *)(in_ECX + 0x9e) = 0;
  in_ECX[0xa5] = 0xbf800000;
  *(undefined1 *)(in_ECX + 0xa4) = 0;
  in_ECX[0xa6] = 0xffffffff;
  in_ECX[0xa7] = 0xffffffff;
  in_ECX[0xa8] = 0xffffffff;
  in_ECX[0xa9] = 0;
  *(undefined1 *)(in_ECX + 0xaa) = 0;
  *(undefined1 *)((int)in_ECX + 0x2a9) = 0;
  iVar3 = 0;
  puVar4 = in_ECX + 0xb2;
  do {
    *puVar4 = 0;
    *(undefined1 *)((int)in_ECX + iVar3 + 0x2dc) = 0;
    iVar3 = iVar3 + 1;
    puVar4 = puVar4 + 1;
  } while (iVar3 < 5);
  in_ECX[0xab] = 0;
  in_ECX[0xb9] = 0;
  in_ECX[0xac] = 0;
  *(undefined1 *)(in_ECX + 0xba) = 0;
  *(undefined1 *)(in_ECX + 0x68) = 0;
  in_ECX[0xad] = 0;
  *(undefined1 *)(in_ECX + 0xae) = 0;
  in_ECX[0x96] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d1) = 0;
  *(undefined1 *)((int)in_ECX + 0x2b9) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00629260(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = param_1;
  return;
}



undefined4 FUN_00629420(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x48);
}



void FUN_006299f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1bc) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(in_ECX + 0x1c0) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(in_ECX + 0x1c4) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(in_ECX + 0x1c8) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(in_ECX + 0x1b0) = *(undefined4 *)(param_1 + 0x1b0);
  *(undefined4 *)(in_ECX + 0x1b4) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined1 *)(in_ECX + 0x25d) = *(undefined1 *)(param_1 + 0x25d);
  for (piVar1 = *(int **)(param_1 + 0x18c); (piVar1 != (int *)0x0 && (iVar2 = *piVar1, iVar2 != 0));
      piVar1 = (int *)piVar1[1]) {
    piVar3 = *(int **)(in_ECX + 0x18c);
    iVar4 = piVar3[1];
    while (iVar4 != 0) {
      piVar3 = (int *)piVar3[1];
      iVar4 = piVar3[1];
    }
    if (*piVar3 == 0) {
      *piVar3 = iVar2;
    }
    else {
      piVar5 = (int *)FUN_00401f00(8);
      if (piVar5 == (int *)0x0) {
        piVar3[1] = 0;
      }
      else {
        *piVar5 = iVar2;
        piVar5[1] = 0;
        piVar3[1] = (int)piVar5;
      }
    }
  }
  *(undefined4 *)(in_ECX + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(in_ECX + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(in_ECX + 0x294) = *(undefined4 *)(param_1 + 0x294);
  *(undefined4 *)(in_ECX + 0x298) = *(undefined4 *)(param_1 + 0x298);
  *(undefined4 *)(in_ECX + 0x29c) = *(undefined4 *)(param_1 + 0x29c);
  *(undefined4 *)(in_ECX + 0x2a0) = *(undefined4 *)(param_1 + 0x2a0);
  *(undefined1 *)(in_ECX + 0x2a9) = *(undefined1 *)(param_1 + 0x2a9);
  *(undefined4 *)(in_ECX + 0x2b4) = *(undefined4 *)(param_1 + 0x2b4);
  *(undefined1 *)(in_ECX + 0x2b8) = *(undefined1 *)(param_1 + 0x2b8);
  *(undefined4 *)(in_ECX + 600) = *(undefined4 *)(param_1 + 600);
  return;
}



void FUN_00629e20(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x34c))();
  if (cVar1 == '\0') {
    if (param_2 == -1) {
      param_2 = 0x101;
    }
    uVar3 = (ushort)param_2;
    iVar4 = (**(code **)(*in_ECX + 0x184))();
    if ((iVar4 != 0) && ((*(uint *)(iVar4 + 0x1c) >> 0xd & 1) != 0)) {
      uVar3 = 0x201;
    }
    uVar2 = (**(code **)(*in_ECX + 0x2c0))();
    uVar3 = uVar2 & 0xc00 | uVar3;
    iVar4 = (**(code **)(*param_1 + 0x380))();
    if (iVar4 != 0) {
      iVar4 = (**(code **)(*in_ECX + 0x36c))();
      if (iVar4 == 4) {
        iVar4 = (**(code **)(*param_1 + 0x380))();
        (**(code **)(**(int **)(iVar4 + 0x58) + 0x2c8))(uVar3);
        return;
      }
    }
    (**(code **)(*in_ECX + 0x2c8))(uVar3);
  }
  return;
}



void FUN_00629ee0(void)

{
  int iVar1;
  int *in_ECX;
  int *unaff_retaddr;
  
  (**(code **)(*in_ECX + 0xc4))(1);
  (**(code **)(*in_ECX + 0xb8))(unaff_retaddr);
  if (unaff_retaddr != (int *)0x0) {
    iVar1 = (**(code **)(*unaff_retaddr + 0x380))();
    if ((iVar1 != 0) && (*(int **)(iVar1 + 0x58) != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00629f2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x194))(iVar1);
      return;
    }
  }
  return;
}



undefined4 FUN_00629f40(int *param_1,float param_2,float param_3,char param_4,char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x2c0))();
  iVar2 = (**(code **)(*in_ECX + 0x184))();
  iVar3 = FUN_005e0dc0();
  if ((iVar3 == 5) || (iVar3 = FUN_005e0dc0(), iVar3 == 3)) {
    return 0;
  }
  if (((char)param_1[0x32] != '\0') || ((iVar2 != 0 && ((*(uint *)(iVar2 + 0x1c) >> 0xd & 1) != 0)))
     ) {
    return 0x201;
  }
  cVar1 = (**(code **)(*param_1 + 0x334))(1);
  if (cVar1 != '\0') {
    return 0x201;
  }
  if (param_4 != '\0') {
    return 0x201;
  }
  if (param_5 != '\0') {
    return 0x101;
  }
  uVar4 = (**(code **)(*in_ECX + 0x2c0))();
  if ((uVar4 & 0x200) == 0) {
    if (param_3 < (float)param_1) {
      return 0x201;
    }
    return 0x101;
  }
  if ((float)param_1 < param_2) {
    return 0x101;
  }
  return 0x201;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062a0e0(undefined4 param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *in_ECX;
  int unaff_EBX;
  int unaff_EBP;
  int iVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uStack_4;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  iVar7 = 0;
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x11')) {
    iVar7 = iVar3;
  }
  if ((((iVar7 != 0) && ((int *)in_ECX[0xb] != (int *)0x0)) &&
      (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) &&
     ((int *)in_ECX[0xb] != (int *)0x0)) {
    cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 0x354))();
    if (cVar2 == '\0') {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      return;
    }
    if (*(int *)(iVar7 + 0x50) < 1) {
      FUN_005e6c60();
    }
    if (0.0 < *(float *)(iVar7 + 0x3c)) {
      fVar1 = (float)in_ECX[0x87];
      if (fVar1 > 0.0) {
        in_ECX[0x87] = (int)((float)in_ECX[0x87] - _DAT_00b33e9c);
      }
      if (in_ECX[0x94] != 0) {
        FUN_006b7c30();
        iVar7 = in_ECX[0x94];
        if (iVar7 != 0) {
          FUN_006b81d0();
          FUN_00401f20(iVar7);
        }
        in_ECX[0x94] = 0;
      }
      if (fVar1 <= 0.0) {
        (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      }
    }
    else {
      FUN_006ecc80();
      _DAT_00b361c4 = FUN_004ca970();
      iVar3 = FUN_0052ed50(2,4);
      _DAT_00b361c4 = 0;
      if (iVar3 != 0) {
        (**(code **)(*in_ECX + 0x344))(0);
        iVar3 = FUN_0052f790(param_1,in_ECX[0xb],0,0);
        (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
        if (iVar3 != 0) {
          FUN_006b7ba0();
          piVar4 = (int *)FUN_006b7c20();
          if (piVar4 != (int *)0x0) {
            iVar7 = piVar4[3];
            uVar12 = 1;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 1;
            uVar5 = FUN_00404fd0(1,0,0,1);
            fVar8 = (float10)FUN_005f7310(piVar4[4],in_ECX + 0x88,piVar4[2],iVar7,uVar5,uVar9,uVar10
                                          ,uVar11,uVar12);
            in_ECX[0x87] = (int)(float)fVar8;
            if ((DAT_00b13208 != '\0') && (*piVar4 != 0)) {
              fVar8 = (float10)FUN_004d7e90(DAT_00b333c4,0);
              pfVar6 = (float *)FUN_00403c00();
              if ((float)fVar8 <= *pfVar6 + *pfVar6) {
                FUN_0057acc0(*piVar4,in_ECX[0x88],0,0xbf800000);
              }
            }
            (**(code **)(*in_ECX + 0x48))(uStack_4);
            iVar3 = unaff_EBX;
            iVar7 = unaff_EBP;
          }
        }
        in_ECX[0x94] = iVar3;
        *(undefined1 *)(in_ECX + 0x8a) = 1;
        *(float *)(iVar7 + 0x3c) = *(float *)(iVar7 + 0x3c) + _DAT_00b33e9c;
        FUN_0067d330(1);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062a350(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *in_ECX;
  float10 fVar10;
  undefined4 uVar11;
  float fStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 auStack_2c [2];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  if (iVar5 == 0) {
    return;
  }
  if (*(char *)(iVar5 + 0x20) != '\x13') {
    return;
  }
  uStack_38 = 0x201;
  FUN_0067c830(&uStack_30);
  fVar10 = (float10)FUN_004d7e30(&uStack_30);
  fVar1 = (float)fVar10;
  iVar6 = FUN_006ecc80();
  if ((*(int *)(iVar5 + 0x3c) == 0) || (cVar3 = FUN_0067cc60(), cVar3 == '\0')) {
    FUN_0067bfd0(*(undefined4 *)(iVar5 + 0x3c));
    FUN_005eae70();
    return;
  }
  if ((iVar6 == 0) || (cVar3 = FUN_004c97f0(), cVar3 == '\0')) {
    fStack_3c = _DAT_00b36b10;
    fStack_34 = _DAT_00b36b08;
    fVar2 = _DAT_00b36b08;
  }
  else {
    pfVar7 = (float *)FUN_00403c00();
    fStack_3c = *pfVar7;
    pfVar7 = (float *)FUN_00403c00();
    fStack_34 = *pfVar7;
    fVar2 = fStack_3c;
  }
  if ((char)in_ECX[0x34] != '\0') {
    if (fVar1 < fVar2) {
      uVar8 = FUN_0064ada0();
      FUN_0067c4a0(&uStack_18,param_1,uVar8);
      cVar3 = FUN_004c97f0();
      if (cVar3 == '\0') {
        uVar11 = 0;
        uVar8 = FUN_004d6670(0);
        iVar6 = FUN_0044a270(uStack_30,auStack_2c[0],uVar8,uVar11);
      }
      iVar5 = *in_ECX;
      uVar8 = FUN_004d6670();
      cVar3 = (**(code **)(iVar5 + 0x3dc))(param_1,uStack_18,uStack_14,uStack_10,iVar6,uVar8);
      if (cVar3 == '\0') {
        return;
      }
      FUN_0067c7f0(param_1,0);
      FUN_0067c6e0(param_1,0);
    }
    if ((char)in_ECX[0x34] != '\0') {
      cVar3 = FUN_004d7f80();
      if (cVar3 != '\0') {
        FUN_0067c7f0(param_1,1);
        FUN_0067c6e0(param_1,1);
      }
      goto LAB_0062a60f;
    }
  }
  puVar9 = (undefined4 *)FUN_0067c660(auStack_c,param_1);
  uStack_24 = *puVar9;
  uStack_20 = puVar9[1];
  uStack_1c = puVar9[2];
  FUN_004d7e30(&uStack_24);
  if ((fStack_3c * 0.3 < fVar1) || (sVar4 = (**(code **)(*in_ECX + 0x2c0))(), sVar4 != 0x201)) {
    sVar4 = (**(code **)(*in_ECX + 0x2c0))();
    if (sVar4 == 0x101) {
      uStack_38 = 0x101;
    }
    else {
      cVar3 = FUN_004d7f80();
      if ((((cVar3 != '\0') && (iVar6 != 0)) && (cVar3 = FUN_004c97f0(), cVar3 == '\0')) &&
         (((sVar4 = (**(code **)(*in_ECX + 0x2c0))(), sVar4 == 0x102 ||
           (cVar3 = FUN_005e05b0(), cVar3 == '\0')) && (cVar3 = FUN_0064ada0(), cVar3 == '\0')))) {
        FUN_004d7e30(&uStack_30);
      }
    }
  }
  else {
    uStack_38 = 0x101;
  }
  (**(code **)(*in_ECX + 0x238))(param_1,uStack_38);
  iVar5 = *in_ECX;
  uVar8 = FUN_004d6670(0xbf800000);
  (**(code **)(iVar5 + 0x414))(param_1,auStack_2c,iVar6,uVar8);
LAB_0062a60f:
  if (fStack_34 + fStack_34 < fVar1 == (fStack_34 + fStack_34 == fVar1)) {
    return;
  }
  FUN_005eae70();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062a660(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int *in_ECX;
  int unaff_ESI;
  float10 fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iStack_c;
  undefined4 local_4;
  
  cVar5 = FUN_0065d550();
  if (cVar5 != '\0') {
    FUN_005eae70();
    return;
  }
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  iVar10 = in_ECX[0xb];
  if (iVar10 != 0) {
    fVar11 = (float10)FUN_004d7e90(iVar10,0);
    if ((float10)400.0 < fVar11) {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      return;
    }
    cVar5 = FUN_004d7f80();
    if (((cVar5 == '\0') || (*(int **)(iVar10 + 0x7c) == param_1)) ||
       (cVar5 = FUN_004d7f80(), cVar5 == '\0')) {
      cVar5 = (**(code **)(*in_ECX + 0xc0))();
      if (cVar5 == '\0') {
        (**(code **)(*in_ECX + 0x48))(param_1);
        (**(code **)(*in_ECX + 0xbc))(1);
      }
    }
    else {
      cVar5 = (**(code **)(*in_ECX + 0xc0))();
      if (cVar5 == '\0') {
        iVar6 = FUN_0052ed50(6,3);
        if (iVar6 != 0) {
          (**(code **)(*in_ECX + 0x344))(0);
          iStack_c = FUN_0052f790(param_1,in_ECX[0xb],0,0);
          (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
          iVar6 = iStack_c;
          if (iStack_c != 0) {
            FUN_006b7ba0();
            iVar7 = FUN_006b7c20();
            if (iVar7 != 0) {
              uVar1 = *(undefined4 *)(iVar7 + 0x10);
              uVar2 = *(undefined4 *)(iVar7 + 0xc);
              uVar3 = *(undefined4 *)(iVar7 + 8);
              local_4 = CONCAT31((int3)((uint)iVar10 >> 8),DAT_00b1490c);
              uVar14 = 1;
              uVar13 = 0;
              uVar12 = 0;
              uVar8 = FUN_00404fd0(0,0,local_4,1);
              fVar11 = (float10)FUN_005f7310(uVar1,in_ECX + 0x88,uVar3,uVar2,uVar8,uVar12,uVar13,
                                             local_4,uVar14);
              in_ECX[0x87] = (int)(float)fVar11;
              (**(code **)(*in_ECX + 0x48))(param_1);
              iVar6 = unaff_ESI;
              iVar10 = iStack_c;
            }
          }
          pcVar4 = *(code **)(*in_ECX + 0xbc);
          in_ECX[0x94] = iVar6;
          *(undefined1 *)(in_ECX + 0x8a) = 1;
          (*pcVar4)(1);
        }
      }
      else {
        if ((float)in_ECX[0x87] <= 0.0) {
          DAT_00b3b92c = '\x01';
        }
        else {
          in_ECX[0x87] = (int)((float)in_ECX[0x87] - _DAT_00b33e9c);
        }
        if (in_ECX[0x94] != 0) {
          FUN_006b7c30();
          iVar6 = in_ECX[0x94];
          if (iVar6 != 0) {
            FUN_006b81d0();
            FUN_00401f20(iVar6);
          }
          in_ECX[0x94] = 0;
        }
      }
      if (DAT_00b3b92c != '\0') {
        in_ECX[0x94] = 0;
        *(undefined1 *)(in_ECX + 0x8a) = 0;
      }
    }
    iVar6 = (**(code **)(*param_1 + 0x164))();
    if ((iVar6 != 0) && (cVar5 = FUN_00472ea0(), cVar5 != '\0')) {
      if (*(int **)(iVar10 + 0x58) != (int *)0x0) {
        (**(code **)(**(int **)(iVar10 + 0x58) + 0x204))(0);
      }
      puVar9 = (undefined4 *)FUN_00403c00();
      *(undefined4 *)(iVar10 + 0x84) = *puVar9;
      (**(code **)(*in_ECX + 0x49c))();
      if (in_ECX[0xf] == 0) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        return;
      }
      iVar10 = (**(code **)(*in_ECX + 0x33c))(0);
      if (iVar10 != 0) {
        (**(code **)(*in_ECX + 0x33c))(0);
        cVar5 = FUN_006b7260();
        if (cVar5 != '\0') {
          return;
        }
      }
      iVar10 = in_ECX[0xf];
      FUN_0067f100();
      FUN_00401f20(iVar10);
      (**(code **)(*in_ECX + 0xbc))(0);
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      pcVar4 = *(code **)(*in_ECX + 0x184);
      in_ECX[0xb] = iStack_c;
      (*pcVar4)();
      FUN_005697f0(in_ECX[0xb]);
      FUN_00446cb0(iStack_c);
    }
    return;
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062b070(int *param_1)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  float10 fVar10;
  float10 fVar11;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar2 = param_1;
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  iStack_28 = iVar4;
  piVar5 = (int *)(**(code **)(*in_ECX + 0x3b8))();
  if ((piVar5 != (int *)0x0) ||
     ((*(int *)(iVar4 + 0x24) != 0 && (piVar5 = (int *)FUN_005697e0(), piVar5 != (int *)0x0)))) {
    iVar4 = (**(code **)(*piVar5 + 0x170))();
    if (iVar4 == DAT_00b35eb0) {
      piVar5 = (int *)FUN_00420d20();
    }
    if (piVar5 != (int *)0x0) {
      iVar4 = (**(code **)(*in_ECX + 0x2a8))();
      if ((iVar4 == 0) || (iVar4 = FUN_00419b30(2), iVar4 == 0)) {
        fStack_30 = 1.0;
      }
      else {
        fStack_30 = *(float *)(iVar4 + 0x74);
      }
      fStack_30 = fStack_30 * _DAT_00b37ee8;
      pfVar6 = (float *)(**(code **)(*piVar5 + 0x174))();
      fStack_14 = pfVar6[1];
      fStack_18 = *pfVar6;
      fStack_10 = pfVar6[2];
      pfVar6 = (float *)(**(code **)(*param_1 + 0x174))();
      fStack_24 = *pfVar6;
      fStack_20 = pfVar6[1];
      fStack_1c = pfVar6[2];
      fVar10 = (float10)FUN_005e0660();
      fStack_1c = (float)(fVar10 * (float10)0.75 + (float10)fStack_1c);
      fStack_c = fStack_18 - fStack_24;
      fStack_8 = fStack_14 - fStack_20;
      fStack_4 = fStack_10 - fStack_1c;
      fVar10 = (float10)FUN_00982c30();
      fVar11 = (float10)FUN_006132d0((float)fVar10,fStack_4,fStack_30,0);
      fStack_2c = (float)fVar11;
      FUN_00613410((float)fVar10,fStack_2c,fStack_30);
      (**(code **)(*piVar5 + 0x174))();
      fVar1 = -fStack_2c;
      fVar10 = (float10)FUN_004a9720();
      param_1 = (int *)(float)((float10)fVar1 - fVar10);
      if ((float)param_1 != 0.0) {
        if ((float)param_1 < -3.1415927 == ((float)param_1 == -3.1415927)) {
          if (3.1415927 < (float)param_1) {
            param_1 = (int *)((float)param_1 + 6.2831855);
          }
        }
        else {
          param_1 = (int *)(6.2831855 - (float)param_1);
        }
      }
      fVar10 = (float10)FUN_004a9720();
      FUN_0065a650((float)(fVar10 + (float10)(float)param_1));
      iVar4 = (**(code **)(*(int *)piVar2[0x16] + 0x36c))();
      if (iVar4 == 0) {
        pfVar6 = (float *)(**(code **)(*piVar2 + 0x174))();
        pfVar7 = (float *)(**(code **)(*piVar5 + 0x174))();
        fStack_8 = pfVar7[1] - pfVar6[1];
        fStack_2c = pfVar7[2] - pfVar6[2];
        fStack_c = *pfVar7 - *pfVar6;
        fStack_4 = fStack_2c;
        fVar10 = (float10)FUN_00683cb0(&fStack_c);
        fStack_30 = 0.0;
        fVar11 = (float10)FUN_00683d80(piVar2,(float)fVar10,&fStack_30);
        fStack_2c = (float)_DAT_00b36c18 * 0.017453292;
        if (fStack_2c < ABS((float)fVar11)) {
          FUN_00685530(piVar2,(float)fVar10,1);
          return;
        }
        FUN_005e05f0(0x30);
        (**(code **)(*in_ECX + 0x188))(piVar2,1);
        cVar3 = (**(code **)(*piVar5 + 400))();
        if ((cVar3 != '\0') && (piVar5 != piVar2)) {
          FUN_005f8000();
        }
        (**(code **)(*piVar2 + 0x1e8))(fStack_4);
        uVar8 = FUN_00569e70(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
        uVar8 = FUN_009832e6(uVar8);
        (**(code **)(*piVar2 + 0x120))();
        uVar9 = (**(code **)(*piVar5 + 0x124))();
        FUN_00699190(uVar8,uVar9,0);
        FUN_005f25f0(0x43fa0000,0);
      }
    }
  }
  return;
}



void FUN_0062b420(int *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  code *pcVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int *piStack_1c;
  undefined1 auStack_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c36e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*in_ECX + 0x184))(uVar2);
  iVar8 = 0;
  if (*(int *)(iVar3 + 0x28) != 0) {
    uVar4 = FUN_00569e70(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
    iVar8 = FUN_009832e6(uVar4);
  }
  piStack_1c = (int *)0x0;
  if (iVar8 == 0) {
    iVar8 = in_ECX[0x52];
    if (iVar8 != 0) {
      in_ECX[0x52] = 0;
      FUN_00569e40();
      uStack_4 = 0;
      if (iVar8 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = iVar8 + -0x18;
      }
      FUN_00569ed0(iVar6);
      FUN_00565ec0(auStack_18);
      uStack_4 = 0xffffffff;
      FUN_0060d0a0();
      goto LAB_0062b4d8;
    }
    pcVar7 = *(code **)(*in_ECX + 0x188);
  }
  else {
LAB_0062b4d8:
    piVar5 = (int *)in_ECX[0xc];
    if (((int *)in_ECX[0xc] == (int *)0x0) && (piVar5 = piStack_1c, *(int *)(iVar3 + 0x24) != 0)) {
      piVar5 = (int *)FUN_005697e0();
    }
    piStack_1c = piVar5;
    iVar6 = FUN_005e0ee0();
    if ((iVar6 == -1) &&
       ((*(char *)(iVar3 + 0x20) == '\x1c' || (iVar6 = FUN_00414b10(0), *(int *)(iVar6 + 0x10) == 0)
        ))) {
      if (param_1 == (int *)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = param_1 + 0x1a;
      }
      FUN_00699190(iVar8,piVar5,0);
      FUN_005f25f0(0x3f000000,1);
      if (*(char *)(iVar3 + 0x20) != '\x1c') goto LAB_0062b5a0;
    }
    else {
      iVar8 = FUN_005e0ee0();
      if (iVar8 != -1) goto LAB_0062b5a0;
      if (((piStack_1c != (int *)0x0) && (cVar1 = (**(code **)(*piStack_1c + 400))(), cVar1 != '\0')
          ) && (piStack_1c != param_1)) {
        (**(code **)(*(int *)piStack_1c[0x16] + 0x178))(0);
      }
    }
    pcVar7 = *(code **)(*in_ECX + 0x188);
  }
  (*pcVar7)(param_1,1);
LAB_0062b5a0:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062b5c0(int param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  
  if ((in_ECX[0xb] != 0) || ((**(code **)(*in_ECX + 0x558))(param_1), in_ECX[0xb] != 0)) {
    FUN_005e0e10(1);
    pcVar1 = *(code **)(*in_ECX + 0xc0);
    in_ECX[0x7a] = (int)((float)in_ECX[0x7a] + _DAT_00b33e9c);
    cVar4 = (*pcVar1)();
    if (((cVar4 == '\0') || ((char)in_ECX[0x34] == '\0')) && ((float)in_ECX[0x7a] <= _DAT_00b36890))
    {
      iVar2 = in_ECX[0xb];
      if ((0.0 < (float)in_ECX[0x67]) || (cVar4 = FUN_004d7f80(), cVar4 == '\0')) {
        fVar3 = (float)in_ECX[0x67] - _DAT_00b33e9c;
      }
      else {
        iVar5 = FUN_0052ed50(4,3);
        if (((iVar5 != 0) && (iVar5 != -0x28)) && (cVar4 = FUN_0046cb60(), cVar4 == '\0')) {
          *(int *)(param_1 + 0xe4) = iVar2;
          (**(code **)(*in_ECX + 0x1a4))(param_1,iVar5,0,0,1);
        }
        fVar3 = 1.5;
      }
      in_ECX[0x67] = (int)fVar3;
      if ((char)in_ECX[0x34] != '\0') {
        (**(code **)(*in_ECX + 0xbc))(1);
        iVar2 = *in_ECX;
        puVar6 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
        uVar7 = FUN_004d6670();
        uVar7 = FUN_006ecc80(uVar7);
        cVar4 = (**(code **)(iVar2 + 0x3dc))(param_1,*puVar6,puVar6[1],puVar6[2],uVar7);
        if (cVar4 == '\0') {
          return;
        }
        piVar8 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
        in_ECX[0x35] = *piVar8;
        in_ECX[0x36] = piVar8[1];
        in_ECX[0x37] = piVar8[2];
      }
      (**(code **)(*in_ECX + 0x238))(param_1,0x201);
      iVar2 = *in_ECX;
      uVar7 = FUN_004d6670(0x43160000);
      uVar7 = FUN_006ecc80(uVar7);
      (**(code **)(iVar2 + 0x414))(param_1,in_ECX + 0x35,uVar7);
      return;
    }
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  FUN_005e0e10(0);
  (**(code **)(*in_ECX + 0xbc))(0);
  in_ECX[0x7a] = 0;
  return;
}



void FUN_0062b7a0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  undefined4 unaff_EBX;
  float10 fVar6;
  undefined4 uVar7;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  iVar5 = 0;
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x10')) {
    FUN_00626de0();
    iVar5 = iVar3;
  }
  cVar2 = (**(code **)(*param_1 + 0x25c))();
  if (cVar2 == '\0') {
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
    if ((in_ECX[0xb] != 0) && (fVar6 = (float10)FUN_004d7e90(in_ECX[0xb],0), fVar6 < (float10)fVar1)
       ) {
      (**(code **)(*param_1 + 0x318))(param_1,1,1,0,0);
      iVar3 = 0;
      if ((in_ECX[0xb] != 0) && (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0'))
      {
        iVar3 = in_ECX[0xb];
      }
      if (iVar5 == 0) {
        return;
      }
      if (iVar3 == 0) {
        return;
      }
      FUN_00626c90(iVar3);
      return;
    }
    if ((in_ECX[0xb] == 0) && (cVar2 = FUN_00566dc0(param_1,0,0xbf800000), cVar2 == '\0')) {
      uVar7 = FUN_00566a40(param_1);
      FUN_00566b30(&stack0xfffffff0,param_1);
      if ((char)in_ECX[0x34] == '\0') {
        iVar5 = (**(code **)(*param_1 + 0x164))();
        if ((iVar5 != 0) && (cVar2 = FUN_00472ea0(), cVar2 == '\0')) {
          (**(code **)(*in_ECX + 0x594))(param_1);
        }
        (**(code **)(*in_ECX + 0x238))(param_1,0x201);
        iVar5 = *in_ECX;
        uVar4 = FUN_004d6670(uStack_8);
        (**(code **)(iVar5 + 0x414))(param_1,&stack0xffffffe8,uVar7,uVar4);
        return;
      }
      iVar5 = *in_ECX;
      uVar4 = FUN_004d6670();
      (**(code **)(iVar5 + 0x3dc))(param_1,unaff_EBX,uStack_c,uStack_8,uVar7,uVar4);
      return;
    }
    if ((char)in_ECX[0x34] == '\0') {
      (**(code **)(*in_ECX + 0x194))(param_1);
      iVar5 = (**(code **)(*param_1 + 0x164))();
      if (iVar5 == 0) {
        return;
      }
      cVar2 = FUN_00472ea0();
      if (cVar2 == '\0') {
        return;
      }
      (**(code **)(*in_ECX + 0x48))(param_1);
      return;
    }
    if (in_ECX[0xb] == 0) {
      return;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
    if (cVar2 == '\0') {
      return;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 0x334))(1);
    if (cVar2 != '\0') {
      return;
    }
    uVar7 = 3;
  }
  else {
    uVar7 = 1;
  }
  (**(code **)(*in_ECX + 0x188))(param_1,uVar7);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062ba20(int *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  undefined4 uVar15;
  int *in_ECX;
  int *piVar16;
  undefined4 uVar17;
  float10 fVar18;
  float10 fVar19;
  float fVar20;
  int *piStack_44;
  int iStack_38;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar14 = param_1;
  iVar6 = (**(code **)(*in_ECX + 0x184))();
  piVar7 = (int *)FUN_005e6780();
  if (piVar7 == (int *)0x0) {
    if (((int *)in_ECX[0xb] == (int *)0x0) ||
       ((cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 == '\0' &&
        (cVar5 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar5 == '\0')))) {
      (**(code **)(*in_ECX + 0x558))(param_1);
      if (((int *)in_ECX[0xb] == (int *)0x0) ||
         ((cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 == '\0' &&
          (cVar5 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar5 == '\0')))) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        if ((char)in_ECX[0x34] != '\0') {
          return;
        }
        (**(code **)(*in_ECX + 0x194))(param_1);
        return;
      }
    }
    piVar16 = (int *)in_ECX[0x11];
    if ((piVar16 != (int *)0x0) && ((int *)*piVar16 == param_1)) {
      piVar7 = (int *)FUN_004d8d70(piVar16[1],0);
    }
  }
  bVar4 = false;
  if ((((int *)in_ECX[0xb] != (int *)0x0) &&
      (cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 != '\0')) &&
     (piVar16 = (int *)in_ECX[0xb], piVar16 != param_1)) {
    bVar4 = true;
    if ((piVar16 != DAT_00b333c4) &&
       ((*(int *)(piVar16[0x16] + 8) == 0 ||
        ((*(char *)(*(int *)(piVar16[0x16] + 8) + 0x20) != '\x01' &&
         (cVar5 = FUN_005660a0(), cVar5 == '\0')))))) {
      (**(code **)(*in_ECX + 0x17c))(0);
      if (piVar7 == (int *)0x0) {
        return;
      }
      FUN_00484470();
      FUN_00401f20(piVar7);
      return;
    }
  }
  (**(code **)(*param_1 + 0x174))();
  if (bVar4) {
    (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    (**(code **)(*param_1 + 0x174))();
  }
  piVar16 = (int *)0x0;
  piStack_44 = (int *)0x0;
  if (bVar4) {
    piVar16 = (int *)in_ECX[0xb];
    piStack_44 = (int *)FUN_00452a60();
    if ((int)piStack_44 < 1) {
      piStack_44 = (int *)0xc8;
    }
    if ((int *)in_ECX[0xb] == DAT_00b333c4) {
      fVar20 = (float)(int)piStack_44;
    }
    else {
      FUN_006ecc80();
      cVar5 = FUN_004c97f0();
      fVar20 = _DAT_00b36aa0;
      if (cVar5 == '\0') {
        fVar20 = (float)(int)piStack_44 * _DAT_00b36a98;
      }
    }
    piStack_44 = (int *)fVar20;
    iVar8 = (**(code **)(*(int *)param_1[0x16] + 0x40c))();
    if (iVar8 != 0) {
      piVar9 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x40c))();
      iVar8 = (**(code **)(*piVar9 + 4))();
      if ((iVar8 == 2) && (iVar8 = (**(code **)(*(int *)param_1[0x16] + 0x40c))(), iVar8 != 0)) {
        piVar9 = (int *)FUN_0068a1b0();
        if (piVar9 == (int *)0x0) {
          pfVar10 = (float *)FUN_0068a160();
        }
        else {
          pfVar10 = (float *)(**(code **)(*piVar9 + 0x174))();
        }
        fVar20 = pfVar10[1];
        fVar1 = *pfVar10;
        fVar2 = pfVar10[2];
        pfVar10 = (float *)(**(code **)(*param_1 + 0x174))();
        fStack_c = *pfVar10 - fVar1;
        fStack_14 = pfVar10[1] - fVar20;
        fStack_10 = pfVar10[2] - fVar2;
        fStack_8 = fStack_14;
        fStack_4 = fStack_10;
        iVar8 = (**(code **)(*piVar16 + 0x174))();
        fStack_14 = *(float *)(iVar8 + 4) - fVar20;
        fStack_10 = *(float *)(iVar8 + 8) - fVar2;
      }
    }
  }
  if ((*(int *)(iVar6 + 0x24) != 0) && (cVar5 = FUN_00566dc0(param_1,0,0xbf800000), cVar5 != '\0'))
  {
    if (bVar4) {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      piVar7 = (int *)in_ECX[0xb];
      iVar6 = (**(code **)(*(int *)piVar7[0x16] + 0x184))();
      if (iVar6 != 0) {
        (**(code **)(*(int *)piVar7[0x16] + 0x188))(param_1,1);
        (**(code **)(*(int *)piVar7[0x16] + 0x184))();
        cVar5 = FUN_005660a0();
        if (cVar5 != '\0') {
          piVar14 = (int *)(**(code **)(*(int *)piVar7[0x16] + 0x184))();
          if (piVar14 != (int *)0x0) {
            (**(code **)(*piVar14 + 0x10))(1);
          }
          *(undefined4 *)(piVar7[0x16] + 8) = 0;
          (**(code **)(*piVar7 + 0x44))(0x30000);
          cVar5 = FUN_005e05b0();
          if (cVar5 != '\0') {
            FUN_005e02b0();
          }
          (**(code **)(*in_ECX + 0xbc))(1);
          (**(code **)(*in_ECX + 0x18))(param_1,0);
          iVar6 = (**(code **)(*param_1 + 0x380))();
          if (iVar6 == 0) {
            return;
          }
          if ((*(uint *)(in_ECX[2] + 0x1c) >> 0x17 & 1) != 0) {
            return;
          }
          (**(code **)(*param_1 + 0x380))();
          cVar5 = FUN_005e9a60();
          if (cVar5 == '\0') {
            (**(code **)(*param_1 + 0x380))();
            FUN_005f80d0();
            in_ECX[0x6a] = 0;
          }
          (**(code **)(*param_1 + 0x230))();
          return;
        }
      }
    }
    else {
      iVar8 = (**(code **)(*param_1 + 0x164))();
      if ((iVar8 != 0) && (cVar5 = FUN_00472ea0(), cVar5 == '\0')) {
        if (piVar7 == (int *)0x0) {
          return;
        }
        goto LAB_0062bdbc;
      }
      iVar8 = *(int *)(iVar6 + 0x24);
      uVar11 = *(undefined4 *)(iVar6 + 0x28);
      if (piVar7 != (int *)0x0) {
        param_1 = (int *)0x0;
        if ((int *)*piVar7 != (int *)0x0) {
          param_1 = *(int **)*piVar7;
        }
        uVar15 = 0;
        if ((param_1 != (int *)0x0) && (iVar6 = FUN_0041fb00(), iVar6 != 0)) {
          iVar6 = FUN_0041fb00();
          uVar15 = *(undefined4 *)(iVar6 + 0xc);
        }
        piStack_44 = (int *)FUN_005697e0();
        if (((piStack_44 == (int *)0x0) &&
            (piStack_44 = (int *)in_ECX[0xc], piStack_44 == (int *)0x0)) ||
           (iVar6 = FUN_004d6d40(), iVar6 == 0)) {
          if ((int *)*piVar7 != (int *)0x0) {
            param_1 = *(int **)*piVar7;
          }
          puVar13 = (undefined4 *)0x0;
          if (((iVar8 != 0) &&
              ((piVar16 = (int *)FUN_005697e0(), piVar16 != (int *)0x0 ||
               (piVar16 = (int *)in_ECX[0xc], piVar16 != (int *)0x0)))) &&
             ((iVar6 = (**(code **)(*piVar16 + 0x170))(), iVar6 == DAT_00b35eac ||
              (iVar6 = (**(code **)(*piVar16 + 0x170))(), iVar6 == DAT_00b35eb0)))) {
            puVar13 = (undefined4 *)(**(code **)(*piVar16 + 0x174))();
            uVar17 = *puVar13;
            fStack_14 = (float)puVar13[1];
            fStack_10 = (float)puVar13[2];
            puVar13 = (undefined4 *)FUN_00401f00(0xc);
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              *puVar13 = uVar17;
              puVar13[1] = fStack_14;
              puVar13[2] = fStack_10;
            }
          }
          uVar17 = 1;
          iVar6 = FUN_00569e60();
          if (iVar6 == 0) {
            uVar17 = FUN_00452a60();
          }
          if (*(char *)((int)in_ECX + 0x25d) == '\0') {
            *(undefined1 *)((int)in_ECX + 0x25d) = 1;
            FUN_006286e0(piVar14,piVar7[2],0);
            FUN_00484470();
            FUN_00401f20(piVar7);
            return;
          }
          iVar6 = (**(code **)(*piVar14 + 0x164))();
          if ((iVar6 != 0) && (cVar5 = FUN_00472ea0(), cVar5 == '\0')) goto LAB_0062bdbc;
          (**(code **)(*piVar14 + 0x2c8))(piVar7[2],param_1,uVar17,puVar13,0);
        }
        else {
          if (*(char *)((int)in_ECX + 0x25d) == '\0') {
            *(undefined1 *)((int)in_ECX + 0x25d) = 1;
            uVar11 = (**(code **)(*piStack_44 + 0x170))(piStack_44);
            FUN_006286e0(piVar14,uVar11,piStack_44);
LAB_0062bdbc:
            FUN_00484470();
            FUN_00401f20(piVar7);
            return;
          }
          iVar6 = (**(code **)(*piVar14 + 0x164))();
          if ((iVar6 != 0) && (cVar5 = FUN_00472ea0(), cVar5 == '\0')) goto LAB_0062bdbc;
          iVar6 = piVar7[2];
          uVar17 = uVar15;
          uVar12 = FUN_00452a60(uVar15);
          FUN_005fc6d0(iVar6,param_1,piStack_44,uVar12,uVar17);
        }
        *(undefined1 *)((int)in_ECX + 0x25d) = 0;
        FUN_00484470();
        FUN_00401f20(piVar7);
        iVar6 = FUN_00569e80();
        if ((iVar6 == 0xd) ||
           ((iVar6 = FUN_00569e80(), 0x14 < iVar6 && (iVar6 = FUN_00569e80(), iVar6 < 0x1a)))) {
          while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
            in_ECX[0x11] = in_ECX[0xf];
            FUN_0065c620(in_ECX[0xf]);
            (**(code **)(*in_ECX + 0xd0))(*(undefined4 *)in_ECX[0x11]);
            piVar7 = (int *)FUN_004d8d70(*(undefined4 *)(in_ECX[0x11] + 4),0);
            if (in_ECX[0x11] != 0) {
              FUN_00401f20(in_ECX[0x11]);
            }
            in_ECX[0x11] = 0;
            if ((piStack_44 == (int *)0x0) || (iVar6 = FUN_004d6d40(), iVar6 == 0)) {
              if ((int *)*piVar7 != (int *)0x0) {
                param_1 = *(int **)*piVar7;
              }
              puVar13 = (undefined4 *)0x0;
              if (((iVar8 != 0) &&
                  ((piVar16 = (int *)FUN_005697e0(), piVar16 != (int *)0x0 ||
                   (piVar16 = (int *)in_ECX[0xc], piVar16 != (int *)0x0)))) &&
                 ((iVar6 = (**(code **)(*piVar16 + 0x170))(), iVar6 == DAT_00b35eac ||
                  (iVar6 = (**(code **)(*piVar16 + 0x170))(), iVar6 == DAT_00b35eb0)))) {
                puVar13 = (undefined4 *)(**(code **)(*piVar16 + 0x174))();
                uVar17 = *puVar13;
                fStack_14 = (float)puVar13[1];
                fStack_10 = (float)puVar13[2];
                puVar13 = (undefined4 *)FUN_00401f00(0xc);
                if (puVar13 == (undefined4 *)0x0) {
                  puVar13 = (undefined4 *)0x0;
                }
                else {
                  *puVar13 = uVar17;
                  puVar13[1] = fStack_14;
                  puVar13[2] = fStack_10;
                }
              }
              uVar17 = 1;
              iVar6 = FUN_00569e60();
              if (iVar6 == 0) {
                uVar17 = FUN_00452a60();
              }
              (**(code **)(*piVar14 + 0x2c8))(piVar7[2],param_1,uVar17,puVar13,0);
            }
            else {
              iVar6 = piVar7[2];
              uVar17 = uVar15;
              uVar12 = FUN_00452a60(uVar15);
              FUN_005fc6d0(iVar6,param_1,piStack_44,uVar12,uVar17);
            }
            FUN_00484470();
            FUN_00401f20(piVar7);
          }
          iStack_38._1_3_ = (uint3)((uint)uVar11 >> 8);
          iStack_38 = CONCAT31(iStack_38._1_3_,1);
          param_1 = (int *)CONCAT31(param_1._1_3_,1);
          if (in_ECX[2] != 0) {
            uVar3 = *(uint *)(in_ECX[2] + 0x1c);
            if ((uVar3 >> 0x14 & 1) != 0) {
              iStack_38 = (uint)iStack_38._1_3_ << 8;
            }
            if ((uVar3 >> 0x15 & 1) != 0) {
              param_1 = (int *)((uint)param_1._1_3_ << 8);
            }
          }
          cVar5 = FUN_005e32d0();
          if (cVar5 == '\0') {
            cVar5 = FUN_005e3270();
            if ((cVar5 != '\0') && (iVar6 = (**(code **)(*piVar14 + 0x170))(), iVar6 != 0)) {
              FUN_0051e240(piVar14,iStack_38,param_1,1);
            }
          }
          else {
            iVar6 = (**(code **)(*piVar14 + 0x170))();
            if (iVar6 != 0) {
              FUN_005227a0(piVar14,iStack_38,param_1,0,1);
            }
          }
        }
        (**(code **)(*in_ECX + 0xbc))(1);
      }
      (**(code **)(*in_ECX + 0x188))(piVar14,1);
    }
    if ((char)in_ECX[0x34] != '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x194))(piVar14);
    return;
  }
  if (bVar4) {
    fVar18 = (float10)FUN_00982c30();
    if ((float)piStack_44 < (float)fVar18) {
      fVar18 = (float10)FUN_00982c30();
      fVar19 = (float10)FUN_00982c30();
      if ((float)fVar18 < (float)fVar19 == ((float)fVar18 == (float)fVar19)) goto LAB_0062c498;
LAB_0062c4bd:
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0xc4))(1);
        (**(code **)(*in_ECX + 0xbc))(1);
        (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
        return;
      }
      goto LAB_0062c59f;
    }
LAB_0062c498:
    if ((piVar16 != DAT_00b333c4) && (iVar6 = FUN_005e0380(), iVar6 != 0)) {
      FUN_005e0380();
      cVar5 = FUN_00567770();
      if (cVar5 != '\0') goto LAB_0062c4bd;
    }
  }
  if ((char)in_ECX[0x34] == '\0') {
    FUN_005677b0(param_1,1);
    iVar6 = FUN_009828c0();
    uVar11 = FUN_00629f40(param_1,0,(float)iVar6,(float)(iVar6 * 2),0,0);
    (**(code **)(*in_ECX + 0x238))(param_1,uVar11);
    iVar6 = *in_ECX;
    fVar18 = (float10)FUN_005677b0(param_1,1);
    fVar20 = (float)fVar18;
    uVar11 = FUN_00566940(param_1);
    uVar15 = FUN_00566a40(param_1);
    uVar17 = FUN_00566b30(&fStack_14,param_1);
    (**(code **)(iVar6 + 0x414))(param_1,uVar17,uVar15,uVar11,fVar20);
    return;
  }
LAB_0062c59f:
  if ((!bVar4) || (fVar18 = (float10)FUN_00404c90(), fVar18 <= (float10)(float)piStack_44)) {
    iVar6 = *in_ECX;
    puVar13 = (undefined4 *)FUN_00566b30(&fStack_c,param_1);
    uVar11 = FUN_00566940(param_1);
    uVar15 = FUN_00566a40(param_1);
    (**(code **)(iVar6 + 0x3dc))(param_1,*puVar13,puVar13[1],puVar13[2],uVar15,uVar11);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062c610(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *in_ECX;
  undefined4 unaff_EBP;
  float10 fVar11;
  float10 fVar12;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  float fStack_10;
  undefined4 uStack_4;
  
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  if ((*(byte *)(iVar5 + 0x1e) & 1) != 0) {
    return;
  }
  if (((in_ECX[0xb] == 0) || (cVar4 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar4 == '\0')) &&
     (((**(code **)(*in_ECX + 0x558))(param_1), in_ECX[0xb] == 0 ||
      ((cVar4 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar4 == '\0' &&
       (cVar4 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar4 == '\0')))))) {
LAB_0062ca4a:
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    if ((char)in_ECX[0x34] == '\0') {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    return;
  }
  piVar1 = (int *)in_ECX[0xb];
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((int *)piVar1[0x16] == (int *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*(int *)piVar1[0x16] + 0x184))();
  if (iVar5 == 0) {
    return;
  }
  (**(code **)(*(int *)piVar1[0x16] + 0x70))(&uStack_24,piVar1,1);
  (**(code **)(*(int *)piVar1[0x16] + 0x74))(piVar1);
  (**(code **)(*(int *)piVar1[0x16] + 0x78))(piVar1);
  if (((*(byte *)(iVar5 + 0x1e) & 1) != 0) ||
     (iVar5 = *(int *)(iVar5 + 0x18), iVar6 = (**(code **)(*(int *)piVar1[0x16] + 0x180))(),
     *(int *)((&PTR_DAT_00b152b0)[iVar5] + iVar6 * 4) == 0x2c)) {
    if (((int *)param_1[0x16] != (int *)0x0) &&
       (iVar5 = (**(code **)(*(int *)param_1[0x16] + 0x36c))(), iVar5 != 0)) {
      return;
    }
    uVar8 = (**(code **)(*param_1 + 0x174))();
    puVar9 = &uStack_2c;
    (**(code **)(*piVar1 + 0x174))(puVar9,uVar8);
    FUN_004121a0(puVar9,uVar8);
    fVar11 = (float10)FUN_00683cb0(&uStack_2c);
    fVar12 = (float10)FUN_00683d80(param_1,(float)fVar11,&stack0xffffffb8);
    fStack_10 = (float)_DAT_00b36c10 * 0.017453292;
    cVar4 = FUN_005e0590();
    if (cVar4 != '\0') {
      fStack_10 = (float)_DAT_00b36c18 * 0.017453292;
    }
    if (fStack_10 < ABS((float)fVar12)) {
      FUN_00685530(param_1,(float)fVar11,1);
      return;
    }
    FUN_005e05f0(0x30);
    return;
  }
  iVar6 = 0;
  iVar5 = (**(code **)(*(int *)piVar1[0x16] + 0x40c))();
  if (iVar5 != 0) {
    piVar7 = (int *)(**(code **)(*(int *)piVar1[0x16] + 0x40c))();
    iVar5 = (**(code **)(*piVar7 + 4))();
    if (iVar5 == 2) {
      iVar6 = (**(code **)(*(int *)piVar1[0x16] + 0x40c))();
    }
  }
  iVar5 = FUN_00452a60();
  fStack_10 = (float)iVar5;
  if (fStack_10 <= 0.0) {
    fStack_10 = 200.0;
  }
  if (iVar6 == 0) {
    uVar8 = (**(code **)(*piVar1 + 0x174))();
    puVar9 = &uStack_2c;
    (**(code **)(*param_1 + 0x174))(puVar9,uVar8);
  }
  else {
    uVar8 = FUN_0068b3f0();
    puVar9 = &uStack_2c;
    (**(code **)(*param_1 + 0x174))(puVar9,uVar8);
  }
  puVar9 = (undefined4 *)FUN_004121a0(puVar9,uVar8);
  uVar8 = puVar9[1];
  uVar2 = *puVar9;
  uVar3 = puVar9[2];
  uVar10 = (**(code **)(*piVar1 + 0x174))();
  puVar9 = &uStack_20;
  (**(code **)(*param_1 + 0x174))(puVar9,uVar10);
  puVar9 = (undefined4 *)FUN_004121a0(puVar9,uVar10);
  uStack_28 = puVar9[1];
  uStack_2c = *puVar9;
  uStack_24 = puVar9[2];
  cVar4 = (**(code **)(*piVar1 + 0x198))(0);
  if ((cVar4 != '\0') || (((uint)piVar1[2] >> 0xb & 1) != 0)) goto LAB_0062ca4a;
  cVar4 = FUN_005e05b0();
  if (cVar4 != '\0') {
    fVar11 = (float10)FUN_00404c90();
    fVar12 = (float10)FUN_00404c90();
    if ((fVar12 < (float10)(float)fVar11) && ((float10)(float)param_1 < (float10)(float)fVar11)) {
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0x194))(param_1);
        (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
        return;
      }
      goto LAB_0062c92a;
    }
  }
  if ((char)in_ECX[0x34] == '\0') {
    fVar11 = (float10)FUN_004d7e90(in_ECX[0xb],0);
    uVar8 = FUN_00629f40(param_1,(float)fVar11,param_1,(float)param_1 + (float)param_1,0,0);
    (**(code **)(*in_ECX + 0x238))(param_1,uVar8);
    (**(code **)(*in_ECX + 0x414))(param_1,&uStack_2c,uVar2,unaff_EBP,uStack_4);
    return;
  }
LAB_0062c92a:
  (**(code **)(*in_ECX + 0x3dc))(param_1,uStack_24,uStack_20,uStack_1c,uVar3,uVar8);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062ca80(int *param_1,int param_2,char param_3)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  float *pfVar15;
  undefined4 uVar16;
  int *in_ECX;
  int unaff_EBP;
  float10 fVar17;
  float10 fVar18;
  int *piVar19;
  int iStack_44;
  float fStack_40;
  float fStack_38;
  int iStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar6 = param_1;
  piVar8 = (int *)(**(code **)(*in_ECX + 0x184))();
  if ((piVar8 != (int *)0x0) && ((*(byte *)((int)piVar8 + 0x1e) & 1) != 0)) {
    return;
  }
  cVar7 = FUN_00660e90(param_1);
  if ((cVar7 != '\0') && (*(char *)((int)DAT_00b333c4 + 0x115) != '\0')) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    return;
  }
  if (in_ECX[0xb] == 0) {
    cVar7 = (**(code **)(*param_1 + 0x334))(1);
    if ((cVar7 == '\0') || (iVar9 = (**(code **)(*param_1 + 0x330))(), iVar9 == 0)) {
      (**(code **)(*in_ECX + 0x558))(param_1);
    }
    else {
      (**(code **)(*param_1 + 0x330))();
      iVar9 = FUN_006135f0();
      in_ECX[0xb] = iVar9;
    }
    if ((int *)in_ECX[0xb] != (int *)0x0) {
      piVar10 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      in_ECX[0x35] = *piVar10;
      in_ECX[0x36] = piVar10[1];
      in_ECX[0x37] = piVar10[2];
    }
  }
  piVar10 = (int *)in_ECX[0xb];
  if (piVar10 == (int *)0x0) {
    if ((char)param_2 == '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  uVar11 = (uint)piVar10[2] >> 5;
  if (((uVar11 & 1) != 0) || (((uint)piVar10[2] >> 0xb & 1) != 0)) {
    if ((uVar11 & 1) != 0) {
      FUN_00566870(piVar10,1);
    }
    if ((char)param_2 == '\0') {
      return;
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  cVar7 = (**(code **)(*piVar10 + 0x198))(1);
  if (cVar7 != '\0') {
    FUN_00566870(in_ECX[0xb],1);
    (**(code **)(*param_1 + 0x2f8))(in_ECX[0xb]);
    return;
  }
  piVar10 = (int *)0x0;
  cVar7 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
  if ((((cVar7 != '\0') && (piVar10 = (int *)in_ECX[0xb], piVar10 != (int *)0x0)) &&
      (iVar9 = (**(code **)(*in_ECX + 0x410))(), iVar9 != 0)) &&
     (cVar7 = FUN_00683aa0(), cVar7 != '\0')) {
    cVar7 = FUN_005e0530();
    if (cVar7 == '\0') {
      cVar7 = FUN_005e1e90();
      if (cVar7 != '\0') goto LAB_0062cc35;
    }
    else {
      cVar7 = FUN_005e1c30();
      if ((cVar7 == '\0') || (cVar7 = FUN_005e3400(), cVar7 == '\0')) {
LAB_0062cc35:
        (**(code **)(*in_ECX + 0x194))(param_1);
        return;
      }
    }
  }
  bVar3 = false;
  cVar7 = FUN_005660a0();
  if (((cVar7 != '\0') && (iVar9 = in_ECX[2], iVar9 != 0)) &&
     (((*(uint *)(iVar9 + 0x1c) >> 9 & 1) != 0 &&
      (((*(byte *)(iVar9 + 0x1c) & 1) != 0 && (iVar9 = FUN_006ecc80(), iVar9 != 0)))))) {
    piVar19 = param_1;
    FUN_006ecc80(param_1);
    cVar7 = FUN_004caac0(piVar19);
    if (cVar7 != '\0') {
      cVar7 = FUN_005f2820(0,in_ECX[0xb],1,0,0);
      if ((cVar7 != '\0') || (iVar9 = (**(code **)(*in_ECX + 0x3b0))(in_ECX[0xb]), iVar9 == 0)) {
        if ((char)in_ECX[0x34] == '\0') {
          (**(code **)(*in_ECX + 0x194))(param_1);
        }
        uVar14 = (**(code **)(*param_1 + 0x174))();
        pfVar15 = &fStack_10;
        (**(code **)(*DAT_00b333c4 + 0x174))(pfVar15,uVar14);
        FUN_004121a0(pfVar15,uVar14);
        fVar17 = (float10)FUN_00683cb0(&fStack_10);
        _param_3 = (float)fVar17;
        fVar17 = (float10)FUN_00683d80(param_1,_param_3,&stack0x00000000);
        iVar9 = _DAT_00b36c10;
        cVar7 = FUN_005e0590();
        if (cVar7 != '\0') {
          iVar9 = _DAT_00b36c18;
        }
        goto LAB_0062d6de;
      }
      bVar3 = true;
    }
  }
  iVar9 = (**(code **)(*param_1 + 0x330))();
  fVar17 = (float10)FUN_004d7e90(in_ECX[0xb],0);
  fStack_40 = (float)fVar17;
  if ((in_ECX[0xd] != 0) && (cVar7 = FUN_006899e0(), cVar7 == '\0')) {
    iVar12 = FUN_004d6670();
    iVar13 = FUN_004d6670();
    if (iVar12 != iVar13) {
      uVar14 = FUN_0068a160();
      fVar17 = (float10)FUN_004d7e30(uVar14);
      fStack_40 = (float)fVar17;
    }
  }
  bVar5 = false;
  if ((((piVar10 != (int *)0x0) && (piVar10 != DAT_00b333c4)) &&
      (cVar7 = FUN_005e05b0(), cVar7 != '\0')) && (cVar7 = FUN_005e05b0(), cVar7 != '\0')) {
    bVar5 = true;
  }
  piVar10 = (int *)in_ECX[0xb];
  if (((piVar8[10] == 0) || (iVar12 = FUN_00569e50(), iVar12 == 0)) ||
     ((int *)in_ECX[0xb] == DAT_00b333c4)) {
    FUN_005677b0(param_1,2);
    iStack_44 = FUN_009828c0();
    if (iStack_44 < 1) goto LAB_0062cd97;
  }
  else {
LAB_0062cd97:
    iStack_44 = DAT_00b36b28;
  }
  if ((in_ECX[0xb] == 0) ||
     ((((char)piVar8[8] == '\x01' && (piVar8[9] != 0)) &&
      ((iVar12 = FUN_00569740(), iVar12 < 2 &&
       (cVar7 = FUN_00566dc0(param_1,0,0xbf800000), cVar7 != '\0')))))) {
    if ((char)param_1 != '\0') {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      cVar7 = FUN_005660a0();
      if (cVar7 != '\0') {
        if (in_ECX[0x30] == 0) {
          in_ECX[2] = 0;
        }
        else {
          in_ECX[0x30] = 0;
        }
        (**(code **)(*piVar8 + 0x10))(1);
        (**(code **)(*param_1 + 0x44))(0x30000);
        (**(code **)(*in_ECX + 0x18))(param_1,0);
        iVar9 = (**(code **)(*param_1 + 0x380))();
        if (iVar9 == 0) {
          return;
        }
        if ((*(uint *)(in_ECX[2] + 0x1c) >> 0x17 & 1) != 0) {
          return;
        }
        (**(code **)(*param_1 + 0x380))();
        cVar7 = FUN_005e9a60();
        if (cVar7 == '\0') {
          (**(code **)(*param_1 + 0x380))();
          FUN_005f80d0();
          in_ECX[0x6a] = 0;
        }
        (**(code **)(*param_1 + 0x230))();
        return;
      }
      if ((char)in_ECX[0x34] == '\0') {
        (**(code **)(*in_ECX + 0x194))(param_1);
      }
    }
  }
  else {
    uVar14 = (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    FUN_004121a0(&fStack_10,uVar14);
    fVar17 = (float10)FUN_00404c90();
    pfVar15 = (float *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    fStack_1c = *pfVar15;
    fStack_18 = pfVar15[1];
    fStack_14 = pfVar15[2];
    if (iVar9 != 0) {
      fVar18 = (float10)FUN_00628e90();
      if (0.0 < (float)fVar18) {
        FUN_004dd070(&fStack_28,(float)fVar18);
        fStack_28 = fStack_28 * 250.0;
        fStack_24 = fStack_24 * 250.0;
        fStack_20 = fStack_20 * 250.0;
        pfVar15 = (float *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
        fStack_1c = *pfVar15 + fStack_28;
        fStack_18 = pfVar15[1] + fStack_24;
        fStack_14 = pfVar15[2] + fStack_20;
        fStack_10 = fStack_1c;
        fStack_c = fStack_18;
        fStack_8 = fStack_14;
      }
    }
    bVar4 = false;
    if (((iVar9 != 0) && (pfVar15 = (float *)FUN_00403c00(), fStack_40 < *pfVar15)) &&
       (((piVar8 = (int *)(**(code **)(*in_ECX + 0x410))(), piVar8 == (int *)0x0 ||
         ((cVar7 = (**(code **)(*piVar8 + 0xc))(), cVar7 != '\0' ||
          (cVar7 = FUN_00683aa0(), cVar7 != '\0')))) &&
        ((cVar7 = FUN_006163a0(), cVar7 != '\0' || (cVar7 = FUN_00612550(), cVar7 == '\0')))))) {
      bVar4 = true;
      iStack_44 = 0;
    }
    fVar18 = (float10)FUN_005677b0(param_1,1);
    fStack_38 = (float)(fVar18 * (float10)0.75);
    pfVar15 = (float *)FUN_00403c00();
    if (*pfVar15 < fStack_38) {
      pfVar15 = (float *)FUN_00403c00();
      fStack_38 = *pfVar15;
    }
    fVar1 = fStack_38;
    if (iVar9 != 0) {
      fVar1 = 0.0;
    }
    bVar2 = false;
    iVar9 = (**(code **)(*in_ECX + 0x410))();
    if ((iVar9 != 0) && (cVar7 = FUN_00683a70(), cVar7 != '\0')) {
      bVar2 = true;
    }
    if (((bVar3) || (bVar4)) || (fStack_38 < (float)fVar17)) {
LAB_0062d0d5:
      if ((iVar9 != 0) && (bVar2)) {
        FUN_00684ec0();
      }
      if (param_3 != '\0') {
        pfVar15 = (float *)FUN_00403c00();
        if ((fStack_40 <= *pfVar15) || (cVar7 = FUN_005f2820(0,in_ECX[0xb],1,0,0), cVar7 != '\0')) {
          in_ECX[0x2e] = 0;
        }
        else {
          fVar1 = (float)in_ECX[0x2e];
          in_ECX[0x2e] = (int)(fVar1 + 1.0);
          if (30.0 <= fVar1 + 1.0) {
            cVar7 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar7 == '\0') {
              (**(code **)(*in_ECX + 0x188))(param_1,2);
            }
            else if ((((int *)in_ECX[0xb] != (int *)0x0) &&
                     (cVar7 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar7 != '\0')) &&
                    (in_ECX[0xb] != 0)) {
              (**(code **)(*param_1 + 0x340))(in_ECX[0xb]);
              in_ECX[0x2e] = 0;
              return;
            }
            in_ECX[0x2e] = 0;
            return;
          }
        }
      }
      cVar7 = (**(code **)(*param_1 + 0x334))(1);
      if ((cVar7 == '\0') || ((int *)in_ECX[0xb] == DAT_00b333c4)) {
LAB_0062d270:
        iVar9 = *in_ECX;
        uVar14 = FUN_004d6670();
        uVar14 = FUN_006ecc80(uVar14);
        cVar7 = (**(code **)(iVar9 + 0x3dc))(param_1,fStack_20,fStack_1c,fStack_18,uVar14);
        if (cVar7 == '\0') {
          return;
        }
      }
      else {
        uVar14 = (**(code **)(*(int *)in_ECX[0xb] + 0x174))(0x43c80000);
        uVar14 = (**(code **)(*param_1 + 0x174))(uVar14);
        iVar9 = FUN_00480520(uVar14);
        if ((-1 < iVar9) || (cVar7 = FUN_005f2820(0,in_ECX[0xb],1,0,0), cVar7 == '\0'))
        goto LAB_0062d270;
        if (in_ECX[0xd] == 0) {
          (**(code **)(*in_ECX + 0x408))();
        }
        iVar9 = (**(code **)(*in_ECX + 0x410))();
        if (iVar9 != 0) {
          uVar14 = (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
          FUN_006862c0(uVar14);
          *(undefined1 *)(in_ECX + 0x34) = 0;
        }
      }
      piVar8 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      in_ECX[0x35] = *piVar8;
      in_ECX[0x36] = piVar8[1];
      in_ECX[0x37] = piVar8[2];
LAB_0062d2d7:
      if ((char)in_ECX[0x34] != '\0') goto LAB_0062d507;
    }
    else {
      uVar14 = (**(code **)(*(int *)in_ECX[0xb] + 0x174))((float)iStack_44 + fVar1,0);
      cVar7 = FUN_00684b30(param_1,uVar14);
      if (cVar7 != '\0') goto LAB_0062d2d7;
      if ((char)in_ECX[0x34] != '\0') {
        if (!bVar2) goto LAB_0062d0d5;
        goto LAB_0062d2d7;
      }
    }
    if (param_2 == -1) {
      _param_3 = 0.0;
      if ((*(char *)(iStack_34 + 0x20) == '\x0f') || (*(char *)(iStack_34 + 0x20) == '\f')) {
        _param_3 = 1.4013e-45;
      }
      FUN_005677b0(param_1,2);
      iVar9 = FUN_009828c0();
      cVar7 = FUN_005660a0();
      if ((((cVar7 != '\0') && (iVar12 = in_ECX[2], iVar12 != 0)) &&
          ((*(uint *)(iVar12 + 0x1c) >> 9 & 1) != 0)) &&
         (((*(byte *)(iVar12 + 0x1c) & 1) != 0 && (iVar12 = FUN_006ecc80(), iVar12 != 0)))) {
        piVar8 = param_1;
        FUN_006ecc80(param_1);
        cVar7 = FUN_004caac0(piVar8);
        if (cVar7 != '\0') {
          (**(code **)(*in_ECX + 0x238))(param_1,0x101);
          goto LAB_0062d3c8;
        }
      }
      uVar14 = FUN_00629f40(param_1,fStack_40,(float)iVar9,(float)(iVar9 * 2),_param_3,0);
      (**(code **)(*in_ECX + 0x238))(param_1,uVar14);
    }
    else {
      (**(code **)(*in_ECX + 0x238))(param_1,param_2);
    }
LAB_0062d3c8:
    if (fStack_8._0_1_ == '\0') {
      if (fStack_4._0_1_ == '\0') {
        fVar17 = (float10)FUN_005677b0(param_1,2);
      }
      else {
        fVar17 = (float10)unaff_EBP;
      }
    }
    else {
      fVar17 = (float10)10.0;
    }
    iVar9 = *in_ECX;
    fStack_4 = (float)fVar17;
    uVar14 = FUN_004d6670(fStack_4);
    uVar14 = FUN_006ecc80(uVar14);
    (**(code **)(iVar9 + 0x414))(param_1,&fStack_24,uVar14);
  }
LAB_0062d507:
  piVar8 = (int *)0x0;
  fVar17 = (float10)FUN_004d7e90(piVar10,0);
  if ((bVar5) && (iStack_44 = iStack_44 + -0x32, iStack_44 < 0)) {
    iStack_44 = 0;
  }
  if ((float)iStack_44 < (float)fVar17) {
    return;
  }
  if (((int *)in_ECX[0xb] == DAT_00b333c4) &&
     (cVar7 = FUN_005f2820(0,(int *)in_ECX[0xb],1,0,0), cVar7 == '\0')) {
    return;
  }
  uVar14 = 1;
  cVar7 = (**(code **)(*param_1 + 0x334))(1);
  if (cVar7 != '\0') {
    iVar9 = (**(code **)(*param_1 + 0x330))();
    if (iVar9 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x330))();
    cVar7 = FUN_006163a0();
    if (cVar7 != '\0') {
      return;
    }
  }
  if ((char)in_ECX[0x34] == '\0') {
    if (((int *)param_1[0x16] != (int *)0x0) &&
       (iVar9 = (**(code **)(*(int *)param_1[0x16] + 8))(), iVar9 == 0)) {
      piVar8 = (int *)param_1[0x16];
    }
    cVar7 = FUN_005e0e80();
    if ((cVar7 != '\0') && (piVar8 != (int *)0x0)) {
      iVar9 = FUN_0052ed50(6,4);
      param_1[0x39] = (int)DAT_00b333c4;
      if (iVar9 == 0) {
        cVar7 = (**(code **)(*in_ECX + 0x200))();
        if (cVar7 == '\0') goto LAB_0062d61a;
        iVar9 = 0;
      }
      (**(code **)(*piVar8 + 0x1a4))(param_1,iVar9,0,0,1);
    }
LAB_0062d61a:
    FUN_005e02b0();
  }
  if (((piVar10 == (int *)0x0) || ((char)in_ECX[0x8f] == '\0')) ||
     (((int *)param_1[0x16] != (int *)0x0 &&
      (iVar9 = (**(code **)(*(int *)param_1[0x16] + 0x36c))(), iVar9 != 0)))) {
    return;
  }
  uVar16 = (**(code **)(*param_1 + 0x174))();
  (**(code **)(*piVar10 + 0x174))(&fStack_14,uVar16);
  FUN_004121a0(uVar16,uVar14);
  fVar17 = (float10)FUN_00683cb0(&fStack_10);
  _param_3 = (float)fVar17;
  fVar17 = (float10)FUN_00683d80(param_1,_param_3,&stack0x00000000);
  iVar9 = _DAT_00b36c10;
  cVar7 = FUN_005e0590();
  if (cVar7 != '\0') {
    iVar9 = _DAT_00b36c18;
  }
LAB_0062d6de:
  param_1 = (int *)((float)iVar9 * 0.017453292);
  if ((float)param_1 < ABS((float)fVar17)) {
    FUN_00685530(piVar6,_param_3,1);
    return;
  }
  FUN_005e05f0(0x30);
  return;
}



void FUN_0062d750(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0x48] == 0) {
    *(undefined1 *)(in_ECX + 0x49) = 0x7f;
  }
  if (in_ECX[0x3a] != 0) {
    FUN_005f2e70(*(undefined4 *)(in_ECX[0x3a] + 8),1,0,0,0,0);
  }
  cVar1 = FUN_005e32d0();
  if ((((cVar1 != '\0') && (iVar2 = (**(code **)(*in_ECX + 0x36c))(), iVar2 == 0)) &&
      (in_ECX[0x48] == 0)) && ((in_ECX[0x2d] == 0 && (in_ECX[0x2c] == 0)))) {
    FUN_006553e0(param_1,0);
  }
  iVar2 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar2 != 9) && (cVar1 = FUN_005e32d0(), cVar1 != '\0')) {
    if (in_ECX[0x48] == 0) {
      piVar6 = in_ECX + 0x2c;
      iVar2 = 0;
      piVar3 = piVar6;
      if (piVar6 != (int *)0x0) {
        do {
          if (*piVar3 != 0) {
            iVar2 = iVar2 + 1;
          }
          piVar3 = (int *)piVar3[1];
        } while (piVar3 != (int *)0x0);
        if (iVar2 != 0) {
          iVar2 = *piVar6;
          in_ECX[0x48] = iVar2;
          while ((iVar2 != 0 && (cVar1 = FUN_004db9a0(), cVar1 == '\0'))) {
            FUN_0065c620(in_ECX[0x48]);
            iVar2 = *piVar6;
            in_ECX[0x48] = iVar2;
          }
          if ((in_ECX[0x48] != 0) && (iVar2 = FUN_004db6b0(), iVar2 == 0)) {
            iVar4 = FUN_0052b4a0();
            iVar5 = FUN_0047df80(0);
            iVar2 = iVar5 % iVar4;
            if (iVar4 <= iVar5 % iVar4) {
              iVar2 = iVar4;
            }
            if (0 < iVar2) {
              do {
                iVar2 = iVar2 + -1;
                piVar6 = (int *)piVar6[1];
              } while (iVar2 != 0);
            }
            in_ECX[0x48] = *piVar6;
          }
        }
      }
    }
    if (in_ECX[0x48] != 0) {
      if (in_ECX[0xb] == 0) {
        (**(code **)(*in_ECX + 0xd0))(in_ECX[0x48]);
      }
      (**(code **)(*in_ECX + 0x51c))(param_1,0);
    }
  }
  iVar2 = (**(code **)(*in_ECX + 0x36c))();
  if (iVar2 == 9) {
    (**(code **)(*in_ECX + 0xbc))(1);
    FUN_004526e0();
  }
  else if ((((in_ECX[0x48] == 0) && (in_ECX[0x2d] == 0)) && (in_ECX[0x2c] == 0)) &&
          (cVar1 = FUN_005e32d0(), cVar1 != '\0')) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    in_ECX[0x7a] = 0x41a00000;
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  cVar1 = FUN_0064ada0();
  if (cVar1 == '\0') {
    (**(code **)(*in_ECX + 0x48))(param_1);
    iVar2 = (**(code **)(*param_1 + 0x18c))();
    if (((iVar2 == 9) && (piVar6 = (int *)FUN_005e12b0(), piVar6 != (int *)0x0)) &&
       (cVar1 = (**(code **)(*piVar6 + 0x98))(), cVar1 == '\0')) {
      (**(code **)(*piVar6 + 0x9c))(1,0);
    }
    return;
  }
  in_ECX[0x48] = 0;
  FUN_006faee0(0);
  *(undefined1 *)((int)in_ECX + 0x136) = 0;
  in_ECX[0x4a] = DAT_00b3f9a8;
  in_ECX[0x4b] = DAT_00b3f9ac;
  in_ECX[0x4c] = DAT_00b3f9b0;
  (**(code **)(*in_ECX + 0x194))(param_1);
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062da10(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 uVar12;
  int *in_ECX;
  float10 fVar13;
  float fVar14;
  undefined4 uVar15;
  code *pcVar16;
  float fVar17;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  (**(code **)(*in_ECX + 0x184))();
  cVar2 = (**(code **)(*in_ECX + 0xc0))();
  if ((cVar2 != '\0') || (cVar2 = FUN_005e32d0(), cVar2 == '\0')) {
    piVar3 = (int *)FUN_00566d00(param_1);
    cVar2 = FUN_005e32d0();
    if ((cVar2 == '\0') &&
       (((piVar3 != (int *)0x0 && (((uint)piVar3[2] >> 5 & 1) == 0)) &&
        (iVar4 = (**(code **)(*piVar3 + 0x170))(), *(char *)(iVar4 + 4) == '\x19')))) {
      (**(code **)(*param_1 + 0x2cc))(piVar3,1,0);
      iVar4 = (**(code **)(*piVar3 + 0x170))();
      in_ECX[9] = iVar4;
      uVar15 = 1;
      piVar11 = piVar3 + 0x11;
      uVar7 = (**(code **)(*piVar3 + 0x170))(piVar11,1);
      FUN_005e44c0(uVar7,piVar11,uVar15);
      (**(code **)(*in_ECX + 0x594))(param_1);
    }
    iVar4 = (**(code **)(*param_1 + 0x164))();
    if (iVar4 == 0) {
      return;
    }
    (**(code **)(*param_1 + 0x164))();
    cVar2 = FUN_00472ea0();
    if (cVar2 == '\0') {
      return;
    }
    fVar13 = (float10)(**(code **)(*in_ECX + 0x220))();
    if (fVar13 < (float10)0.0 != (fVar13 == (float10)0.0)) {
      FUN_00520f00(in_ECX[9]);
      (**(code **)(*in_ECX + 0x48))(param_1);
      iVar4 = *in_ECX;
      iVar5 = FUN_0047df80(0);
      (**(code **)(iVar4 + 0x224))((float)(iVar5 % 5000) * 0.001 + 1.0);
      FUN_00520f00(0);
      return;
    }
    fVar13 = (float10)(**(code **)(*in_ECX + 0x220))();
    (**(code **)(*in_ECX + 0x224))((float)fVar13 - _DAT_00b33e9c);
    puVar9 = (undefined4 *)in_ECX[99];
    *(undefined1 *)(in_ECX + 0x74) = 0;
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
    do {
      puVar1 = (undefined4 *)*puVar9;
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      piVar3 = (int *)*puVar1;
      if (((puVar1[1] == 3) && (cVar2 = (**(code **)(*piVar3 + 0x198))(0), cVar2 == '\0')) &&
         ((piVar3 != param_1 &&
          ((piVar3 != DAT_00b333c4 && (cVar2 = FUN_004d7f80(), cVar2 != '\0')))))) {
        fVar17 = 200.0;
        pfVar10 = (float *)FUN_00403c00();
        fVar14 = *pfVar10;
        FUN_006ecc80();
        cVar2 = FUN_004c97f0();
        if (cVar2 != '\0') {
          pfVar10 = (float *)FUN_00403c00();
          fVar14 = *pfVar10;
        }
        if (fVar14 < 200.0) {
          pfVar10 = (float *)FUN_00403c00();
          fVar17 = *pfVar10;
        }
        fVar13 = (float10)FUN_004d7e90(param_1,0);
        if ((fVar13 <= (float10)fVar17) && (cVar2 = FUN_005ed730(param_1), cVar2 != '\0')) {
          cVar2 = FUN_0046cb60();
          if (cVar2 == '\0') {
            fVar14 = (float)in_ECX[0x66] - _DAT_00b33e9c;
          }
          else {
            pfVar10 = (float *)FUN_00403c00();
            fVar14 = *pfVar10;
          }
          in_ECX[0x66] = (int)fVar14;
          if ((float)in_ECX[0x66] <= 0.0) {
            FUN_004526e0();
          }
          iVar4 = FUN_0047df80(0);
          iVar5 = (int)((ulonglong)((longlong)iVar4 * -0x51eb851f) >> 0x20);
          cVar2 = FUN_00446c30(piVar3);
          if (cVar2 == '\0') {
            pfVar10 = (float *)FUN_00403c00();
            fVar14 = *pfVar10;
            FUN_006ecc80();
            cVar2 = FUN_004c97f0();
            if (cVar2 != '\0') {
              pfVar10 = (float *)FUN_00403c00();
              fVar14 = *pfVar10;
            }
            if ((float)(iVar4 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * 100) < fVar14) {
              FUN_00446cb0(piVar3);
              (**(code **)(*(int *)piVar3[0x16] + 0x16c))(param_1);
              cVar2 = FUN_005e32d0();
              if (cVar2 == '\0') {
                return;
              }
              cVar2 = (**(code **)(*piVar3 + 0x1a0))();
              if (cVar2 != '\0') {
                return;
              }
              cVar2 = FUN_005e0f30();
              if (cVar2 != '\0') {
                return;
              }
              iVar4 = FUN_005e0dc0();
              if (iVar4 == 3) {
                return;
              }
              cVar2 = FUN_005ed730(param_1);
              if (cVar2 == '\0') {
                return;
              }
              if ((int *)piVar3[0x16] == (int *)0x0) {
                return;
              }
              cVar2 = (**(code **)(*(int *)piVar3[0x16] + 0x200))();
              if (cVar2 != '\0') {
                return;
              }
              if (piVar3 == DAT_00b333c4) {
                return;
              }
              cVar2 = (**(code **)(*piVar3 + 0x198))(0);
              if (cVar2 != '\0') {
                return;
              }
              iVar4 = (**(code **)(*piVar3 + 0x154))();
              if (iVar4 == 0) {
                return;
              }
              if (piVar3[0x16] == 0) {
                return;
              }
              if ((*(int *)(piVar3[0x16] + 8) != 0) && (cVar2 = FUN_00567770(), cVar2 != '\0')) {
                return;
              }
              cVar2 = (**(code **)(*param_1 + 0x2f4))(piVar3,0,0);
              in_ECX[0x76] = 0;
              (**(code **)(*in_ECX + 0x224))(0);
              piVar11 = (int *)FUN_00403c00();
              in_ECX[0x6a] = *piVar11;
              if ((cVar2 != '\0') &&
                 ((iVar4 = FUN_005e0380(), iVar4 == 0 ||
                  (iVar4 = FUN_005e0380(), (*(uint *)(iVar4 + 0x1c) >> 0xc & 1) == 0)))) {
                if ((*(int *)(piVar3[0x16] + 8) != 0) && (cVar2 = FUN_005660a0(), cVar2 == '\0')) {
                  piVar11 = (int *)piVar3[0x16];
                  uVar7 = (**(code **)(*piVar11 + 0x390))();
                  uVar15 = (**(code **)(*piVar11 + 0xc0))(uVar7);
                  uVar12 = (**(code **)(*piVar11 + 0xcc))(uVar15);
                  FUN_004268b0(piVar11[2],piVar11[1],uVar12,uVar15,uVar7);
                }
                uVar12 = 1;
                uVar15 = 0;
                uVar7 = FUN_005e0380(0,1);
                FUN_005f1590(uVar7,uVar15,uVar12);
                (**(code **)(*(int *)piVar3[0x16] + 0x188))(param_1,1);
              }
              in_ECX[0x76] = 0;
              return;
            }
          }
        }
      }
      puVar9 = (undefined4 *)puVar9[1];
      if (puVar9 == (undefined4 *)0x0) {
        return;
      }
    } while( true );
  }
  piVar3 = (int *)FUN_005e4400();
  if (piVar3 == (int *)0x0) {
    if (in_ECX[0xb] != 0) {
      (**(code **)(*in_ECX + 0x524))(param_1);
      return;
    }
    if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
      iVar4 = FUN_00566a40(param_1);
      puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
      uStack_18 = *puVar9;
      uStack_14 = puVar9[1];
      uStack_10 = puVar9[2];
      if (iVar4 == 0) {
        iVar4 = FUN_006ecc80();
      }
      DAT_00b3b934 = 1;
      in_ECX[0x1b] = 0x14;
      in_ECX[0x19] = 0;
      cVar2 = FUN_004c97f0();
      if (cVar2 == '\0') {
        pfVar10 = (float *)FUN_00403c00();
        fVar14 = *pfVar10;
      }
      else {
        fVar14 = 3.4028235e+38;
      }
      pcVar16 = FUN_00646600;
      fVar17 = fVar14;
      piVar3 = param_1;
      uVar7 = FUN_00566b30(auStack_c,param_1);
      FUN_00446b90(iVar4,&uStack_18,fVar14 * 0.5,uVar7,fVar17,pcVar16,piVar3);
      pcVar16 = *(code **)(*in_ECX + 0x568);
      DAT_00b3b934 = 0;
      in_ECX[0x1b] = 0;
      (*pcVar16)(param_1);
      cVar2 = FUN_0046cb60();
      if (cVar2 == '\0') {
        return;
      }
      (**(code **)(*in_ECX + 0x194))(param_1);
      in_ECX[0x7a] = 0x41a00000;
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      return;
    }
    iVar4 = in_ECX[0xf];
    in_ECX[0x11] = iVar4;
    *(undefined4 *)(iVar4 + 0x10) = 1;
    FUN_0065c620(in_ECX[0x11]);
    piVar3 = *(int **)in_ECX[0x11];
    if (((undefined4 *)in_ECX[0x11])[7] != 2) {
      (**(code **)(*in_ECX + 0xd0))(piVar3);
      return;
    }
    cVar2 = (**(code **)(*piVar3 + 400))();
    if (cVar2 == '\0') {
      iVar4 = FUN_004db6b0();
      if (iVar4 == 0) {
        return;
      }
      if (*(char *)(iVar4 + 4) != '#') {
        return;
      }
      iVar5 = *in_ECX;
      uVar7 = FUN_00675220(iVar4);
      (**(code **)(iVar5 + 0xd0))(uVar7);
      return;
    }
    (**(code **)(*in_ECX + 0xd0))(*(undefined4 *)in_ECX[0x11]);
    return;
  }
  cVar2 = FUN_00566dc0(param_1,0,0xbf800000);
  if ((cVar2 == '\0') && (in_ECX[0x48] == 0)) {
    (**(code **)(*in_ECX + 0x17c))(0);
    return;
  }
  iVar4 = (**(code **)(*in_ECX + 0x36c))();
  if (((iVar4 == 0) && (in_ECX[0x48] == 0)) && (cVar2 = FUN_0046cb60(), cVar2 != '\0')) {
    FUN_006553e0(param_1,1);
  }
  iVar4 = (**(code **)(*in_ECX + 0x36c))();
  if (iVar4 == 4) {
    iVar4 = (**(code **)(*param_1 + 0x164))();
    in_ECX[9] = piVar3[2];
    uVar7 = 0;
    if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
      uVar7 = *(undefined4 *)*piVar3;
    }
    if ((iVar4 == 0) || (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
      FUN_005e44c0(piVar3[2],uVar7,1);
    }
    (**(code **)(*in_ECX + 0xbc))(1);
    FUN_004526e0();
  }
  else {
    if (in_ECX[0x48] == 0) {
      piVar11 = in_ECX + 0x2c;
      iVar4 = FUN_0052b4a0();
      if (iVar4 != 0) {
        iVar4 = *piVar11;
        in_ECX[0x48] = iVar4;
        while ((iVar4 != 0 && (cVar2 = FUN_004db9a0(), cVar2 == '\0'))) {
          FUN_0065c620(in_ECX[0x48]);
          iVar4 = *piVar11;
          in_ECX[0x48] = iVar4;
        }
        if ((in_ECX[0x48] != 0) && (iVar4 = FUN_004db6b0(), iVar4 == 0)) {
          iVar5 = FUN_0052b4a0();
          iVar6 = FUN_0047df80(0);
          iVar4 = iVar6 % iVar5;
          if (iVar5 <= iVar6 % iVar5) {
            iVar4 = iVar5;
          }
          if (0 < iVar4) {
            do {
              iVar4 = iVar4 + -1;
              piVar11 = (int *)piVar11[1];
            } while (iVar4 != 0);
          }
          in_ECX[0x48] = *piVar11;
        }
      }
    }
    (**(code **)(*in_ECX + 0xd0))(in_ECX[0x48]);
    iVar4 = (**(code **)(*param_1 + 0x164))();
    if (in_ECX[0x48] == 0) {
LAB_0062dbcb:
      cVar2 = FUN_0046cb60();
      if (cVar2 != '\0') {
        uVar7 = 0;
        if ((undefined4 *)*piVar3 != (undefined4 *)0x0) {
          uVar7 = *(undefined4 *)*piVar3;
        }
        in_ECX[9] = piVar3[2];
        FUN_005faea0(piVar3[2],1,uVar7,1,0);
        (**(code **)(*in_ECX + 0xbc))(1);
        FUN_004526e0();
        (**(code **)(*in_ECX + 0x224))(0);
      }
    }
    else {
      if ((iVar4 == 0) || (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
        (**(code **)(*in_ECX + 0x51c))(param_1,0);
      }
      if (in_ECX[0x48] == 0) goto LAB_0062dbcb;
    }
    cVar2 = FUN_0064ada0();
    if (cVar2 == '\0') goto LAB_0062dce5;
    in_ECX[0x48] = 0;
    FUN_006faee0(0);
    *(undefined1 *)((int)in_ECX + 0x136) = 0;
    in_ECX[0x4a] = DAT_00b3f9a8;
    in_ECX[0x4b] = DAT_00b3f9ac;
    in_ECX[0x4c] = DAT_00b3f9b0;
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  (**(code **)(*in_ECX + 0x224))(0);
LAB_0062dce5:
  uVar8 = (**(code **)(*in_ECX + 0x2c0))();
  if ((uVar8 & 0x400) == 0) {
    return;
  }
  (**(code **)(*in_ECX + 0x2c4))(0x400,0);
  return;
}



void FUN_0062e3f0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *in_ECX;
  undefined4 uVar10;
  code *pcVar11;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar9 = param_1;
  pcVar11 = *(code **)(*in_ECX + 0x184);
  in_ECX[0xb] = 0;
  iVar2 = (*pcVar11)();
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x28) == 0) {
    return;
  }
  if ((*(char *)(iVar2 + 0x20) != '\x02') && (*(int *)(iVar2 + 0x24) != 0)) {
    param_1 = (int *)FUN_005697e0();
  }
  cVar1 = *(char *)(iVar2 + 0x20);
  if (('\0' < cVar1) &&
     (((cVar1 < '\x03' || (cVar1 == '\a')) && (cVar1 = FUN_00567ca0(), cVar1 != '\0')))) {
    FUN_00568bb0(piVar9);
    goto LAB_0062e717;
  }
  if (*(int *)(iVar2 + 0x28) == 0) goto LAB_0062e717;
  iVar3 = FUN_00569e50();
  if (iVar3 == 0) {
    iVar2 = FUN_00569e60();
    if (iVar2 == 0) {
      return;
    }
    piVar4 = (int *)FUN_00569e60();
    cVar1 = (**(code **)(*piVar4 + 0x198))(1);
    if ((cVar1 != '\0') && (cVar1 = FUN_005660a0(), cVar1 == '\0')) {
      FUN_00566870(in_ECX[0xb],1);
      (**(code **)(*piVar9 + 0x2f8))(in_ECX[0xb]);
      return;
    }
    iVar2 = *in_ECX;
    uVar5 = FUN_00569e60();
    (**(code **)(iVar2 + 0xd0))(uVar5);
    goto LAB_0062e717;
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
    uVar5 = FUN_006ecc80();
    puVar6 = (undefined4 *)(**(code **)(*piVar9 + 0x174))();
    uStack_c = *puVar6;
    uStack_8 = puVar6[1];
    uStack_4 = puVar6[2];
    iVar3 = FUN_00569e50();
    if (iVar3 == 1) {
      iVar3 = FUN_00569e70();
      if (iVar3 != 0) {
        piVar4 = (int *)FUN_00569e70();
        cVar1 = (**(code **)(*piVar4 + 0xa4))();
        if (cVar1 != '\0') {
          iVar3 = FUN_00569e70();
          in_ECX[0x19] = iVar3;
        }
      }
      in_ECX[0x1b] = 0;
    }
    else if (iVar3 == 2) {
      in_ECX[0x19] = 0;
      iVar3 = FUN_00569e80();
      in_ECX[0x1b] = iVar3;
      in_ECX[0x38] = iVar3;
    }
    if (in_ECX[0x19] == 0) {
      switch(in_ECX[0x1b]) {
      case 0:
        uVar5 = FUN_00569e70(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
        iVar3 = FUN_009832e6(uVar5);
        if (iVar3 != 0) {
          in_ECX[0x52] = iVar3;
        }
        break;
      default:
        goto switchD_0062e5ad_caseD_1;
      case 0xd:
      case 0x15:
      case 0x16:
      case 0x18:
      case 0x19:
        cVar1 = (**(code **)(*piVar9 + 0x334))(1);
        if (cVar1 != '\0') goto switchD_0062e5ad_caseD_1;
        FUN_00647bd0(piVar9,param_1,in_ECX[0x1b]);
        in_ECX[0x38] = in_ECX[0x1b];
        break;
      case 0x1a:
      case 0x1b:
      case 0x1c:
      case 0x1d:
      case 0x1e:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
        FUN_005e91e0(in_ECX[0x1b],0xffffffff,1);
        in_ECX[0x38] = in_ECX[0x1b];
      }
    }
    else {
switchD_0062e5ad_caseD_1:
      puVar6 = (undefined4 *)FUN_00403c00();
      puVar7 = (undefined4 *)FUN_00403c00();
      uVar10 = *puVar6;
      pcVar11 = FUN_00646600;
      piVar4 = piVar9;
      uVar8 = (**(code **)(*piVar9 + 0x174))(uVar10,FUN_00646600,piVar9);
      FUN_00446b90(uVar5,&uStack_c,*puVar7,uVar8,uVar10,pcVar11,piVar4);
      in_ECX[0x1b] = 0;
      in_ECX[0x19] = 0;
      (**(code **)(*in_ECX + 0x568))(piVar9);
    }
    if (*(int *)(iVar2 + 0x28) != 0) {
      iVar2 = FUN_00452a60();
      in_ECX[0xe] = iVar2;
    }
  }
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) goto LAB_0062e717;
  puVar6 = (undefined4 *)in_ECX[0xf];
  in_ECX[0x11] = (int)puVar6;
  piVar9 = (int *)*puVar6;
  if (puVar6[7] == 2) {
    cVar1 = (**(code **)(*piVar9 + 400))();
    piVar9 = *(int **)in_ECX[0x11];
    if (cVar1 != '\0') goto LAB_0062e700;
    iVar2 = FUN_004db6b0();
    if ((iVar2 != 0) && (*(char *)(iVar2 + 4) == '#')) {
      iVar3 = *in_ECX;
      piVar9 = (int *)FUN_00675220(iVar2);
      pcVar11 = *(code **)(iVar3 + 0xd0);
      goto LAB_0062e708;
    }
  }
  else {
LAB_0062e700:
    pcVar11 = *(code **)(*in_ECX + 0xd0);
LAB_0062e708:
    (*pcVar11)(piVar9);
  }
  FUN_0065c620(in_ECX[0x11]);
LAB_0062e717:
  if ((int *)in_ECX[0xb] != (int *)0x0) {
    piVar9 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    in_ECX[0x35] = *piVar9;
    in_ECX[0x36] = piVar9[1];
    in_ECX[0x37] = piVar9[2];
  }
  if (in_ECX[0xb] != 0) {
    FUN_004d6f80(1);
  }
  return;
}



float * FUN_0062e790(float *param_1,float param_2,float param_3,float param_4,float param_5,
                    float param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_0047df80(0);
  iVar3 = FUN_0047df80(0);
  *param_1 = (float)iVar2 - 16383.5;
  param_1[1] = (float)iVar3 - 16383.5;
  param_1[2] = 0.0;
  FUN_0043f350();
  iVar2 = FUN_0047df80(0);
  fVar1 = (param_6 + param_5) * ((float)iVar2 / 32767.0);
  if (fVar1 < param_6) {
    fVar1 = param_6;
  }
  *param_1 = *param_1 * fVar1 + param_2;
  param_1[1] = param_3 + param_1[1] * fVar1;
  param_1[2] = param_4 + fVar1 * param_1[2];
  return param_1;
}



uint FUN_0062e890(int *param_1)

{
  uint in_EAX;
  int iVar1;
  
  if (((param_1 != (int *)0x0) && (in_EAX = param_1[2], (in_EAX >> 5 & 1) == 0)) &&
     (in_EAX = in_EAX >> 0xe, (in_EAX & 1) == 0)) {
    in_EAX = (**(code **)(*param_1 + 0x170))();
    if (*(char *)(in_EAX + 4) == '\x18') {
      iVar1 = FUN_004d7630();
      in_EAX = 0;
      if (iVar1 != 0) {
        in_EAX = FUN_00446cb0(param_1);
      }
    }
  }
  return in_EAX & 0xffffff00;
}



void FUN_0062ea30(void)

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
    iVar2 = FUN_00401f00(0x4c,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00685fc0();
    }
    *(int *)(in_ECX + 0x34) = iVar2;
    *(undefined1 *)(iVar2 + 0x10) = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0062eaa0(int *param_1,int *param_2)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  if ((((param_1 == (int *)0x0) || (uVar2 = param_1[2], (uVar2 >> 5 & 1) != 0)) ||
      ((uVar2 >> 0xe & 1) != 0)) || ((uVar2 >> 0xb & 1) != 0)) {
    return 0;
  }
  if ((param_2 == (int *)0x0) || (cVar4 = FUN_00446c30(param_1), cVar4 != '\0')) {
    return 0;
  }
  piVar3 = (int *)param_2[0x16];
  iVar5 = (**(code **)(*piVar3 + 0x174))();
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_2[0x16] + 8);
  }
  else {
    iVar5 = (**(code **)(*piVar3 + 0x174))();
  }
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(iVar5 + 0x18), iVar6 = (**(code **)(*piVar3 + 0x180))(),
     *(int *)((&PTR_DAT_00b152b0)[iVar5] + iVar6 * 4) == 1)) {
    iVar5 = FUN_006ecc80();
    if (iVar5 != 0) {
      FUN_006ecc80();
      cVar4 = FUN_004c97f0();
      if (cVar4 != '\0') {
        iVar5 = (**(code **)(*param_1 + 0x174))();
        fVar1 = *(float *)(iVar5 + 8);
        iVar5 = (**(code **)(*param_2 + 0x174))();
        if (80.0 < ABS(fVar1 - *(float *)(iVar5 + 8))) {
          return 0;
        }
      }
    }
    cVar4 = (**(code **)(*param_1 + 400))();
    if ((cVar4 == '\0') &&
       (iVar5 = (**(code **)(*param_1 + 0x170))(), *(int *)(iVar5 + 0xc) == 0x20)) {
      DAT_00b3b928 = param_1;
      return 1;
    }
  }
  return 0;
}



void FUN_0062ec10(int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int *in_ECX;
  int *piVar9;
  float10 fVar10;
  undefined1 *puVar11;
  undefined1 auStack_c [12];
  
  (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if (((in_ECX[0xb] == 0) || (uVar1 = *(uint *)(in_ECX[0xb] + 8), (uVar1 >> 5 & 1) != 0)) ||
     ((uVar1 >> 0xb & 1) != 0)) {
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  if (in_ECX[0x11] == 0) {
    return;
  }
  puVar8 = (undefined4 *)in_ECX[0x11];
  FUN_00470520(puVar8[1]);
  if (in_ECX[0xb] == 0) {
    puVar2 = (undefined4 *)in_ECX[0x11];
    iVar5 = (**(code **)(*(int *)*puVar8 + 0x170))();
    if (puVar2[1] == iVar5) {
      (**(code **)(*in_ECX + 0xd0))(*puVar2);
      return;
    }
  }
  cVar4 = '\0';
  iVar5 = FUN_004d7630();
  if (iVar5 == 0) {
    cVar4 = FUN_005687d0(param_1);
    if (cVar4 != '\0') goto LAB_0062ed0d;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x174))();
    puVar11 = auStack_c;
    FUN_004d76f0(puVar11,uVar6);
    FUN_004121a0(puVar11,uVar6);
    fVar10 = (float10)FUN_00404c90();
    if (fVar10 <= (float10)DAT_00b36b28) {
      cVar4 = '\x01';
      goto LAB_0062ed0d;
    }
  }
  cVar3 = FUN_0064ada0();
  if (cVar3 == '\0') {
    iVar5 = (**(code **)(*in_ECX + 0x36c))();
    if (iVar5 != 0) {
      (**(code **)(*param_1 + 800))();
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
      if ((char)in_ECX[0x34] != '\0') {
        return;
      }
    }
    (**(code **)(*in_ECX + 0x238))(param_1,0x101);
    iVar5 = *in_ECX;
    piVar9 = (int *)in_ECX[0xb];
    fVar10 = (float10)FUN_005677b0(param_1,2);
    uVar6 = FUN_004d6670((float)fVar10);
    uVar6 = FUN_006ecc80(uVar6);
    uVar6 = (**(code **)(*piVar9 + 0x174))(uVar6);
    (**(code **)(iVar5 + 0x414))(param_1,uVar6);
    return;
  }
LAB_0062ed0d:
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  cVar3 = FUN_0064ada0();
  if ((cVar3 == '\0') || (cVar4 != '\0')) {
    piVar9 = (int *)0x0;
    cVar4 = (**(code **)(**(int **)in_ECX[0x11] + 400))();
    if (cVar4 == '\0') {
      iVar5 = FUN_004db6b0();
      if (((iVar5 != 0) && (*(char *)(iVar5 + 4) == '#')) && (iVar5 = FUN_004db6b0(), iVar5 != 0)) {
        piVar9 = (int *)FUN_00675220(iVar5);
      }
      uVar6 = (**(code **)(*param_1 + 0x170))();
      FUN_00423660(uVar6);
      FUN_004fbf90(piVar9,*(undefined4 *)(in_ECX[0x11] + 0x18),0x4000);
      FUN_004dd260(param_1,0,*(undefined4 *)(in_ECX[0x11] + 4),1);
    }
    else {
      piVar9 = (int *)in_ECX[0xb];
      FUN_004fbf90(piVar9,*(undefined4 *)(in_ECX[0x11] + 0x18),0x4000);
      (**(code **)(*piVar9 + 0x100))(*(undefined4 *)(in_ECX[0x11] + 4),0,1,0,0,param_1,0,0,1,0);
    }
    if ((piVar9 != (int *)0x0) && (piVar9 != param_1)) {
      uVar6 = FUN_009828c0();
      FUN_005e4a40(piVar9,uVar6);
    }
  }
  else {
    in_ECX[0xb] = 0;
  }
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  *(undefined1 *)(in_ECX + 0x34) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062ef80(int *param_1)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  if (iVar4 == 0) {
    return;
  }
  cVar2 = (**(code **)(*param_1 + 0x334))(1);
  if ((cVar2 != '\0') && ((float)in_ECX[0x67] < _DAT_00b36750)) {
    in_ECX[0x67] = (int)(_DAT_00b33e9c + (float)in_ECX[0x67]);
    return;
  }
  if ((*(int *)(iVar4 + 0x28) != 0) && (iVar5 = FUN_00452a60(), iVar5 != 0)) {
    unaff_EBP = FUN_00452a60();
  }
  cVar2 = (**(code **)(*in_ECX + 0x554))(param_1,unaff_EBP);
  if (cVar2 != '\0') {
    if (*(int *)(in_ECX[2] + 0x18) == 0x1a) {
      (**(code **)(*in_ECX + 0x188))(param_1,2);
      return;
    }
LAB_0062f33c:
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return;
  }
  if ((((in_ECX[0xb] == 0) || (uVar11 = *(uint *)(in_ECX[0xb] + 8), (uVar11 >> 5 & 1) != 0)) ||
      ((uVar11 >> 0xb & 1) != 0)) || (in_ECX[0x11] == 0)) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  if ((*(char *)(iVar4 + 0x20) == '\0') &&
     ((iVar5 = FUN_00569e80(), iVar5 == 0xd ||
      ((iVar5 = FUN_00569e80(), 0x14 < iVar5 && (iVar5 = FUN_00569e80(), iVar5 < 0x1a)))))) {
    (**(code **)(*in_ECX + 0x51c))(param_1,1);
    if (in_ECX[1] < 2) {
      return;
    }
    cVar2 = FUN_0046cb60();
    if (cVar2 == '\0') {
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      in_ECX[0x11] = in_ECX[0xf];
      FUN_0065c620(in_ECX[0xf]);
      (**(code **)(*in_ECX + 0xd0))(*(undefined4 *)in_ECX[0x11]);
      return;
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    iVar4 = FUN_00569e80();
    if ((iVar4 == 0x15) || (iVar4 = FUN_00569e80(), iVar4 == 0x16)) {
      uVar11 = 1;
      uVar10 = 1;
      if ((in_ECX[2] != 0) &&
         (uVar1 = *(uint *)(in_ECX[2] + 0x1c), uVar11 = (uint)((uVar1 >> 0x14 & 1) == 0),
         (uVar1 >> 0x15 & 1) != 0)) {
        uVar10 = 0;
      }
      cVar2 = FUN_005e32d0();
      if (cVar2 == '\0') {
        cVar2 = FUN_005e3270();
        if ((cVar2 != '\0') && (iVar4 = (**(code **)(*param_1 + 0x170))(), iVar4 != 0)) {
          FUN_0051e240(param_1,uVar11,uVar10,1);
        }
      }
      else {
        iVar4 = (**(code **)(*param_1 + 0x170))();
        if (iVar4 != 0) {
          FUN_005227a0(param_1,uVar11,uVar10,0,1);
        }
      }
    }
    if (in_ECX[0x39] == 0) {
      return;
    }
    iVar4 = *(int *)(in_ECX[0x39] + 8);
    if (iVar4 == 0) {
      return;
    }
    if (*(char *)(iVar4 + 4) != '!') {
      return;
    }
    if (*(char *)(iVar4 + 0x90) != '\x05') {
      return;
    }
    if (in_ECX[0x3b] != 0) {
      return;
    }
    iVar4 = (**(code **)(*param_1 + 700))();
    if (iVar4 == 0) {
      return;
    }
    uVar10 = *(undefined4 *)(iVar4 + 8);
    uVar9 = 0;
    uVar8 = 1;
    uVar7 = 0;
    uVar6 = FUN_004b2460(0,1,0);
    FUN_005faea0(uVar10,uVar6,uVar7,uVar8,uVar9);
    return;
  }
  cVar2 = (**(code **)(*in_ECX + 0x554))(param_1,unaff_EDI);
  if (cVar2 == '\0') {
    if (((in_ECX[0xb] == 0) || (uVar11 = *(uint *)(in_ECX[0xb] + 8), (uVar11 >> 5 & 1) != 0)) ||
       ((uVar11 >> 0xb & 1) != 0)) {
      (**(code **)(*in_ECX + 0x558))(param_1);
    }
    if (*(char *)(iVar4 + 0x20) == '\b') {
      if ((int *)in_ECX[0xb] == (int *)0x0) {
        iVar4 = FUN_00569e80();
      }
      else {
        uVar10 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
        iVar4 = FUN_00568240(uVar10);
      }
      switch(iVar4) {
      case 1:
      case 6:
      case 7:
      case 0xb:
      case 0xc:
      case 0xf:
      case 0x10:
      case 0x17:
      case 0x1a:
        in_ECX[0x38] = iVar4;
        goto LAB_0062f33c;
      default:
        iVar4 = unaff_ESI;
        break;
      case 9:
        iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
        if (((*(char *)(iVar5 + 4) == '\x1a') &&
            (iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(), iVar5 != 0)) &&
           ((*(uint *)(iVar5 + 0x7c) >> 1 & 1) == 0)) {
          (**(code **)(*in_ECX + 0x188))(param_1,1);
        }
        in_ECX[0x38] = iVar4;
        return;
      }
    }
    if ((int *)in_ECX[0xb] != (int *)0x0) {
      cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
      iVar5 = in_ECX[0x11];
      if (cVar2 == '\0') {
        if (iVar5 != 0) {
          if (*(int *)(iVar5 + 0x1c) != 3) {
            (**(code **)(*in_ECX + 0x51c))(param_1,1);
            return;
          }
          (**(code **)(*in_ECX + 0x57c))(param_1);
          return;
        }
        if ((*(int *)(iVar4 + 0x28) != 0) && (iVar4 = FUN_00569e60(), iVar4 == in_ECX[0xb])) {
          (**(code **)(*in_ECX + 0x51c))(param_1,1);
          return;
        }
      }
      else if (iVar5 != 0) {
        iVar4 = *(int *)(iVar5 + 0x1c);
        if (iVar4 == 4) {
          (**(code **)(*in_ECX + 0x580))(param_1);
          return;
        }
        if (iVar4 != 5) {
          if (iVar4 != 2) {
            (**(code **)(*in_ECX + 0x51c))(param_1,0);
            return;
          }
          (**(code **)(*in_ECX + 0x578))(param_1);
          return;
        }
        FUN_00628400(param_1);
        return;
      }
    }
    goto LAB_0062f33c;
  }
  (**(code **)(*in_ECX + 0x194))(param_1);
  if (in_ECX[0x30] == 0) {
    cVar2 = FUN_00566dc0(param_1,0,0xbf800000);
    if ((cVar2 == '\0') && (*(char *)(iVar4 + 0x20) == '\x03')) {
      (**(code **)(*in_ECX + 0x17c))(0);
      goto LAB_0062f295;
    }
    if ((*(int *)(iVar4 + 0x18) != 0x1a) || (*(int *)(iVar4 + 0x30) != 0)) goto LAB_0062f286;
    uVar10 = 2;
  }
  else {
LAB_0062f286:
    uVar10 = 1;
  }
  (**(code **)(*in_ECX + 0x188))(param_1,uVar10);
LAB_0062f295:
  sVar3 = (**(code **)(*in_ECX + 0x2c0))();
  if (sVar3 != 0x400) {
    return;
  }
  (**(code **)(*in_ECX + 0x2c4))(0x400,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062f4e0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  int *in_ECX;
  float10 fVar8;
  float10 fVar9;
  float fStack_24;
  float fStack_20;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  iVar2 = (**(code **)(*in_ECX + 0x184))();
  piVar3 = (int *)FUN_00779480();
  piVar4 = (int *)FUN_00625d30();
  if ((piVar3 == (int *)0x0) || (piVar4 == (int *)0x0)) {
    *(undefined4 *)(param_1[0x16] + 8) = 0;
    *(undefined4 *)(param_1[0x16] + 4) = 0;
    return;
  }
  iVar5 = (**(code **)(*piVar3 + 0x18c))();
  if ((iVar5 == 0) && (piVar3 != param_1)) {
    pfVar6 = (float *)(**(code **)(*piVar3 + 0x174))();
    pfVar7 = (float *)(**(code **)(*piVar4 + 0x174))();
    fStack_8 = pfVar7[1] - pfVar6[1];
    fStack_4 = pfVar7[2] - pfVar6[2];
    fStack_c = *pfVar7 - *pfVar6;
    fVar8 = (float10)FUN_00683cb0(&fStack_c);
    fStack_18 = 0.0;
    fVar9 = (float10)FUN_00683d80(piVar4,(float)fVar8,&fStack_18);
    iVar5 = _DAT_00b36c10;
    fStack_14 = (float)fVar9;
    cVar1 = FUN_005e0590();
    if (cVar1 != '\0') {
      iVar5 = _DAT_00b36c18;
    }
    fStack_24 = (float)iVar5 * 0.017453292;
    fStack_14 = ABS(fStack_14);
    if (fStack_14 <= fStack_24) {
      FUN_005e05f0(0x30);
    }
    else {
      FUN_00685530(piVar3,(float)fVar8,1);
    }
  }
  iVar5 = (**(code **)(*piVar4 + 0x18c))();
  if ((iVar5 == 0) && (piVar4 != piVar3)) {
    pfVar6 = (float *)(**(code **)(*piVar4 + 0x174))();
    pfVar7 = (float *)(**(code **)(*piVar3 + 0x174))();
    fStack_14 = pfVar7[1] - pfVar6[1];
    fStack_18 = pfVar7[2] - pfVar6[2];
    fStack_c = *pfVar7 - *pfVar6;
    fStack_8 = fStack_14;
    fStack_4 = fStack_18;
    fVar8 = (float10)FUN_00683cb0(&fStack_c);
    uStack_10 = 0;
    fVar9 = (float10)FUN_00683d80(piVar3,(float)fVar8,&uStack_10);
    iVar5 = _DAT_00b36c10;
    fStack_14 = (float)fVar9;
    cVar1 = FUN_005e0590();
    if (cVar1 != '\0') {
      iVar5 = _DAT_00b36c18;
    }
    fStack_20 = (float)iVar5 * 0.017453292;
    fStack_14 = ABS(fStack_14);
    if (fStack_14 <= fStack_20) {
      FUN_005e05f0(0x30);
    }
    else {
      FUN_00685530(piVar4,(float)fVar8,1);
    }
  }
  if (0.0 < *(float *)(iVar2 + 0x44)) {
    *(float *)(iVar2 + 0x44) = *(float *)(iVar2 + 0x44) - _DAT_00b33e9c;
  }
  else {
    cVar1 = (**(code **)(*in_ECX + 0xc0))();
    if ((cVar1 != '\0') &&
       ((*(int *)(iVar2 + 0x3c) == 0 || (cVar1 = FUN_006b7260(), cVar1 == '\0')))) {
      iVar2 = FUN_005e0380();
      iVar5 = FUN_005e0380();
      (**(code **)(*param_1 + 0x30c))();
      FUN_005e05f0(0x30);
      if (iVar5 == iVar2) {
        if (piVar4 != param_1) {
          piVar3 = piVar4;
        }
        if ((((int *)piVar3[0x16] != (int *)0x0) &&
            (iVar2 = (**(code **)(*(int *)piVar3[0x16] + 8))(), iVar2 == 0)) && (piVar3[0x16] != 0))
        {
          *(undefined4 *)(piVar3[0x16] + 0x1ac) = 0;
        }
      }
      in_ECX[0x6b] = 0;
      return;
    }
    if ((*(int *)(iVar2 + 0x3c) == 0) || (cVar1 = FUN_006b7260(), cVar1 == '\0')) {
      FUN_006267a0(1);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0062f810(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  code *pcVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 local_30;
  undefined1 auStack_20 [20];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3d88;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_30 = 0;
  iVar4 = (**(code **)(*param_1 + 0x170))(uVar3);
  if (*(char *)(iVar4 + 4) == '#') {
    local_30 = (**(code **)(*param_1 + 0x170))();
  }
  if (*(int **)(param_3 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_3 + 8) + 400))();
  }
  cVar2 = FUN_004d8b90();
  fVar12 = (float)_DAT_00b36a50;
  pcVar14 = FUN_0062e890;
  if (cVar2 == '\0') {
    iVar4 = param_3;
    uVar5 = (**(code **)(*param_1 + 0x174))(fVar12,FUN_0062e890,param_3);
    fVar11 = (float)_DAT_00b36a50;
    uVar13 = (**(code **)(*param_1 + 0x174))(fVar11,uVar5);
    uVar15 = FUN_006ecc80(uVar13);
    FUN_00446b90(uVar15,uVar13,fVar11,uVar5,fVar12,pcVar14,iVar4);
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x174))();
    uVar5 = (**(code **)(*param_1 + 0x174))((float)_DAT_00b36a50,uVar5);
    uVar5 = FUN_006ecc80(uVar5);
    FUN_004d5e30(uVar5);
  }
  piVar6 = (int *)FUN_0067a420(param_3,&DAT_00b3b944);
  while (DAT_00b3b948 != 0) {
    iVar4 = *(int *)(DAT_00b3b948 + 4);
    FUN_00401f20(DAT_00b3b948);
    DAT_00b3b948 = iVar4;
  }
  _DAT_00b3b944 = 0;
  DAT_00b3b948 = 0;
  piVar8 = piVar6;
  if (piVar6 != (int *)0x0) {
    do {
      if ((int *)*piVar8 == (int *)0x0) break;
      piVar7 = (int *)0x0;
      cVar2 = (**(code **)(*(int *)*piVar8 + 400))();
      if (cVar2 != '\0') {
        piVar7 = (int *)*piVar8;
      }
      piVar8 = (int *)piVar8[1];
      if (((((piVar7 != (int *)0x0) && (cVar2 = FUN_005e6ba0(), cVar2 == '\0')) &&
           (cVar2 = FUN_005e0f30(), cVar2 == '\0')) &&
          (cVar2 = (**(code **)(*piVar7 + 0x334))(1), cVar2 == '\0')) &&
         ((cVar2 = FUN_005e6c60(), cVar2 == '\0' || (*(char *)(param_3 + 0x2c) == '\0')))) {
        cVar2 = FUN_005e6c60();
        if ((cVar2 == '\0') || (cVar2 = FUN_00467560(), cVar2 != '\0')) {
          cVar2 = FUN_005e6c60();
          if (cVar2 == '\0') {
            uVar16 = 100;
            uVar15 = 0;
            uVar13 = 0;
            uVar5 = 1;
            fVar9 = (float10)FUN_004d7e90(param_2,0);
            uVar5 = (**(code **)(*piVar7 + 0x284))(0x21,(float)fVar9,uVar5,uVar13,uVar15,uVar16);
            uVar5 = (**(code **)(*piVar7 + 0x224))(local_30,uVar5);
            uVar5 = (**(code **)(*piVar7 + 0x224))(param_2,uVar5);
            iVar4 = FUN_00546190(uVar5);
            if (0 < iVar4) goto LAB_0062fa4b;
          }
        }
        else {
LAB_0062fa4b:
          FUN_0068a9f0();
          uStack_4 = 0;
          bVar1 = false;
          iVar4 = (**(code **)(*(int *)piVar7[0x16] + 8))();
          if ((iVar4 == 0) || (cVar2 = FUN_0065d880(auStack_20,piVar7), cVar2 != '\0')) {
            bVar1 = true;
          }
          if ((piVar7[0x16] == 0) || (!bVar1)) {
            iVar4 = FUN_005e02e0(1);
            if ((*(int *)(iVar4 + 0x40) == 0) && (*(int *)(iVar4 + 0x3c) == 0)) {
              iVar4 = FUN_005e02e0(0);
            }
            FUN_009832e6(iVar4,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
            fVar9 = (float10)FUN_00606140();
            fVar10 = (float10)FUN_005234a0();
            (**(code **)(**(int **)(param_3 + 0xc) + 0x254))
                      ((float)((float10)(float)fVar9 + (float10)(float)fVar9 * fVar10));
            *(undefined1 *)(param_3 + 0x11) = 1;
          }
          else {
            (**(code **)(*piVar7 + 0x310))(param_3,0,1,0);
            iVar4 = FUN_00659a00();
            if (iVar4 != 0) {
              iVar4 = *(int *)piVar7[0x16];
              fVar9 = (float10)FUN_00402bd0();
              (**(code **)(iVar4 + 0x1c))((float)(fVar9 - (float10)1.5));
              uVar5 = FUN_00659a00();
              FUN_00674550(piVar7,uVar5);
              uVar16 = 0;
              uVar15 = 0;
              uVar13 = 0;
              uVar5 = FUN_00659a00(0,0,0);
              FUN_00673a90(piVar7,uVar5,uVar13,uVar15,uVar16);
            }
          }
          uStack_4 = 0xffffffff;
          FUN_0068aa10();
        }
      }
    } while (piVar8 != (int *)0x0);
    FUN_004526e0();
  }
  FUN_00401f20(piVar6);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0062fbd0(int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  float *pfVar12;
  int *piVar13;
  int *in_ECX;
  uint uVar14;
  int iVar15;
  float10 fVar16;
  undefined4 unaff_retaddr;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piStack_18;
  int *piStack_14;
  
  iVar10 = in_ECX[2];
  bVar4 = false;
  piVar7 = (int *)FUN_00569e60();
  iVar8 = FUN_0041fb20();
  if ((piVar7 == DAT_00b333c4) && ((char)DAT_00b333c4[0x170] != '\0')) {
    (**(code **)(*in_ECX + 0x194))(param_1);
    return;
  }
  bVar5 = false;
  iVar9 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar9 != 0) &&
     ((iVar9 = (**(code **)(*in_ECX + 0x36c))(), iVar9 == 4 ||
      (iVar9 = (**(code **)(*in_ECX + 0x36c))(), iVar9 == 9)))) {
    iVar10 = (**(code **)(*param_1 + 0x380))();
    if (iVar10 == 0) {
      (**(code **)(*param_1 + 800))();
      return;
    }
    (**(code **)(*param_1 + 0x230))();
    return;
  }
  FUN_005e3320();
  cVar6 = FUN_0051bef0();
  if (cVar6 != '\0') {
    uVar17 = 1;
    goto LAB_0063006f;
  }
  piStack_14 = *(int **)(iVar10 + 0x3c);
  bVar3 = true;
  if (piStack_14 != (int *)0x0) {
    do {
      iVar10 = *piStack_14;
      if (iVar10 == 0) break;
      piVar11 = *(int **)(iVar10 + 8);
      piStack_18 = (int *)0x0;
      if ((piVar11 != (int *)0x0) && (cVar6 = (**(code **)(*piVar11 + 400))(), cVar6 != '\0')) {
        piStack_18 = piVar11;
      }
      if ((*(char *)(iVar10 + 0x2c) == '\0') &&
         ((**(code **)(*in_ECX + 0x230))(param_1,piVar7,iVar10), *(char *)(iVar10 + 0x2c) == '\0'))
      {
        iVar9 = *(int *)(iVar10 + 4);
        if (((iVar9 == 0) || (iVar9 == 1)) && (*(int **)(iVar10 + 0xc) == DAT_00b333c4)) {
          iVar1 = *(int *)(iVar10 + 0x24);
          iVar15 = 0;
          if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '\x06')) {
            iVar15 = iVar1;
          }
          if ((iVar9 == 1) || (iVar9 = (**(code **)(*param_1 + 0x170))(), iVar9 == iVar1)) {
LAB_0062fd9a:
            bVar4 = true;
          }
          else if (iVar15 != 0) {
            uVar14 = (uint)(param_1 == DAT_00b333c4);
            FUN_005e02e0(0);
            iVar9 = FUN_00467510(iVar15,uVar14);
            if (-1.0 < (float)iVar9) goto LAB_0062fd9a;
          }
        }
      }
      else {
        bVar3 = false;
      }
      if (!bVar5) {
        if (*(int *)(iVar10 + 4) < 3) {
          uVar20 = 100;
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 0;
          fVar16 = (float10)FUN_004d7e90(piVar7,0);
          piVar11 = (int *)(**(code **)(*param_1 + 0x284))
                                     (0x21,(float)fVar16,uVar17,uVar18,uVar19,uVar20);
          uVar17 = 0;
        }
        else {
          if (piStack_18 == (int *)0x0) goto LAB_0062fe3a;
          uVar20 = 100;
          uVar19 = 0;
          uVar18 = 0;
          uVar17 = 1;
          fVar16 = (float10)FUN_004d7e90(piVar7,0);
          uVar17 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar16,uVar17,uVar18,uVar19,uVar20);
          piVar11 = in_ECX;
          uVar17 = (**(code **)(*param_1 + 0x224))(in_ECX,uVar17);
        }
        uVar17 = (**(code **)(*param_1 + 0x224))(piVar7,uVar17,piVar11);
        iVar10 = FUN_00546190(uVar17);
        if (0 < iVar10) {
          bVar5 = true;
        }
      }
LAB_0062fe3a:
      piStack_14 = (int *)piStack_14[1];
    } while (piStack_14 != (int *)0x0);
    if (bVar5) {
      FUN_005eae70();
      (**(code **)(*in_ECX + 0x228))(param_1,piVar7,0,0,0,0,0,0,0,1);
      return;
    }
  }
  if (((iVar8 == 0) || ((*(uint *)(iVar8 + 0x1c) >> 0xc & 1) == 0)) &&
     (((piVar7 == DAT_00b333c4 && (cVar6 = FUN_006605a0(0), cVar6 != '\0')) ||
      (cVar6 = (**(code **)(*piVar7 + 0x334))(1), cVar6 != '\0')))) {
    fVar16 = (float10)FUN_004d7e90(param_1,0);
    pfVar12 = (float *)FUN_00403c00();
    if (*pfVar12 < (float)fVar16) goto LAB_0062ffbc;
    piVar13 = (int *)FUN_0067cf50(0xc,piVar7);
    piVar11 = piVar13;
    while ((piVar11 != (int *)0x0 && (iVar10 = *piVar11, iVar10 != 0))) {
      piVar11 = (int *)piVar11[1];
      iVar8 = FUN_0067b710();
      if ((iVar8 != 0) && (iVar8 = FUN_0067b6b0(param_1,0), iVar8 == 0)) {
        (**(code **)(*param_1 + 0x314))(iVar10);
        FUN_004526e0();
        FUN_00401f20(unaff_retaddr);
        return;
      }
    }
    FUN_004526e0();
    FUN_00401f20(piVar13);
  }
  else {
LAB_0062ffbc:
    if (bVar3) {
      if (bVar4) {
        uVar17 = 3;
      }
      else {
        cVar6 = (**(code **)(*piVar7 + 0x354))();
        if (cVar6 != '\0') {
          FUN_005eae70();
          iVar10 = FUN_0041fc70();
          if (iVar10 != 0) {
            FUN_0067d330(0);
            *(float *)(iVar10 + 0x3c) = *(float *)(iVar10 + 0x3c) + 0.0;
          }
          (**(code **)(*param_1 + 0x2fc))(iVar10);
          return;
        }
        uVar17 = 2;
      }
      goto LAB_0063006f;
    }
  }
  iVar10 = FUN_0041fb20();
  if (((piVar7 == DAT_00b333c4) ||
      ((((iVar10 != 0 && (*(char *)(iVar10 + 0x20) == '\x04')) &&
        (cVar6 = FUN_00566dc0(param_1,0,0xbf800000), cVar6 != '\0')) && (piVar7 == DAT_00b333c4))))
     && (cVar6 = (**(code **)(*piVar7 + 0x354))(), cVar6 != '\0')) {
    pcVar2 = *(code **)(*in_ECX + 0x198);
    in_ECX[0xb] = (int)DAT_00b333c4;
    (*pcVar2)(param_1,0,0xffffffff,0);
    return;
  }
  uVar17 = 4;
LAB_0063006f:
  (**(code **)(*in_ECX + 0x188))(param_1,uVar17);
  return;
}


