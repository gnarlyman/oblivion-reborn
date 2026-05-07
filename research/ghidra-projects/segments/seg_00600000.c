
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006005f0(undefined4 param_1)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  int *piVar11;
  double *pdVar12;
  undefined1 *puVar13;
  int *in_ECX;
  float10 fVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined1 auStack_144 [4];
  float fStack_140;
  double dStack_13c;
  float fStack_134;
  float fStack_130;
  int *piStack_12c;
  int local_128;
  undefined1 auStack_124 [48];
  undefined1 auStack_f4 [16];
  char acStack_e4 [208];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_144;
  local_128 = param_1;
  cVar3 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar3 != '\0') {
    return;
  }
  *(undefined1 *)(in_ECX + 0x20) = 0;
  FUN_005ef930();
  if (in_ECX == (int *)DAT_00b333c4[0x78]) {
    DAT_00b333c4[0x78] = 0;
  }
  if (DAT_00b14e98 != '\0') {
    iVar6 = (**(code **)(*in_ECX + 0x170))();
    iVar8 = 0;
    if ((iVar6 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
      iVar8 = iVar6;
    }
    if ((*(uint *)(iVar8 + 0x28) >> 1 & 1) != 0) {
      if ((in_ECX[0x2c] == 3) || (in_ECX[0x2c] == 5)) {
        iVar8 = FUN_005f1910(8);
        dStack_13c = (double)CONCAT44(dStack_13c._4_4_,_DAT_00b37d10 * (float)iVar8);
        fVar14 = (float10)(**(code **)(*in_ECX + 0x288))(8);
        piStack_12c = (int *)(float)fVar14;
        fStack_140 = fStack_140 - (float)piStack_12c;
        (**(code **)(*in_ECX + 0x2a4))(8,fStack_140,0);
        return;
      }
      FUN_00424770();
      iVar8 = *(int *)in_ECX[0x16];
      puVar7 = (undefined4 *)FUN_00403c00();
      (**(code **)(iVar8 + 0xa0))(*puVar7);
      (**(code **)(*in_ECX + 0x340))(0);
      FUN_005eae70();
      if (((int *)in_ECX[0x16] != (int *)0x0) &&
         (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))(), iVar8 != 0)) {
        piVar11 = (int *)in_ECX[0x16];
        uVar16 = 0;
        uVar9 = (**(code **)(*piVar11 + 0x37c))(0);
        (**(code **)(*piVar11 + 0x378))(uVar9);
        FUN_004d7300(uVar9,uVar16);
      }
      iVar8 = (**(code **)(*in_ECX + 0x380))();
      if ((iVar8 != 0) || (iVar8 = (**(code **)(*in_ECX + 0x388))(), iVar8 != 0)) {
        FUN_005f0410();
      }
      FUN_00699da0();
      FUN_005e6680(6);
      iVar8 = FUN_005f1910(8);
      fStack_130 = (float)iVar8;
      pfVar10 = (float *)FUN_00403c00();
      fStack_130 = *pfVar10 * fStack_130;
      fVar14 = (float10)(**(code **)(*in_ECX + 0x288))(8);
      (**(code **)(*in_ECX + 0x2a4))(8,fStack_134 - (float)fVar14,0);
      uVar9 = FUN_004da2a0(DAT_00b38908);
      _sprintf(acStack_e4,"%s %s",uVar9);
      FUN_0057acc0(acStack_e4,0,1,0xbf800000);
      goto LAB_00600f6d;
    }
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x204))(0);
  }
  piVar11 = piStack_12c;
  if (((piStack_12c != (int *)0x0) && ((int *)piStack_12c[0x16] != (int *)0x0)) &&
     (iVar8 = (**(code **)(*(int *)piStack_12c[0x16] + 0x3d0))(), iVar8 != 0)) {
    piVar11 = (int *)(**(code **)(*(int *)piVar11[0x16] + 0x3d0))();
    piStack_12c = piVar11;
  }
  cVar3 = FUN_004d7f80();
  if (((cVar3 != '\0') || (iVar8 = FUN_004db6b0(), iVar8 != 0)) &&
     ((piVar11 != (int *)0x0 && (cVar3 = FUN_004d7f80(), cVar3 != '\0')))) {
    if (((int *)in_ECX[0x16] == (int *)0x0) ||
       (cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x148))(), cVar3 == '\0')) {
      cVar3 = FUN_0067cb50(in_ECX);
      *(bool *)(in_ECX + 0x20) = cVar3 == '\0';
    }
    else {
      *(undefined1 *)(in_ECX + 0x20) = 0;
    }
  }
  if ((piVar11 == DAT_00b333c4) && (cVar3 = (**(code **)(*in_ECX + 0x1f8))(), cVar3 == '\0')) {
    cVar3 = FUN_004d7f80();
    if (cVar3 == '\0') {
      DAT_00b333c4[0x19b] = DAT_00b333c4[0x19b] + 1;
    }
    else {
      DAT_00b333c4[0x19c] = DAT_00b333c4[0x19c] + 1;
      cVar3 = FUN_004db760();
      if ((cVar3 == '\0') && ((char)in_ECX[0x20] != '\0')) {
        FUN_006608f0();
      }
    }
  }
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x378))(), iVar8 != 0)) {
    piVar1 = (int *)in_ECX[0x16];
    uVar16 = 0;
    uVar9 = (**(code **)(*piVar1 + 0x37c))(0);
    (**(code **)(*piVar1 + 0x378))(uVar9);
    FUN_004d7300(uVar9,uVar16);
  }
  FUN_005ea380();
  if (in_ECX != DAT_00b333c4) {
    in_ECX[0x1f] = (int)piVar11;
  }
  iVar8 = (**(code **)(*in_ECX + 0x380))();
  if ((iVar8 != 0) || (iVar8 = (**(code **)(*in_ECX + 0x388))(), iVar8 != 0)) {
    FUN_005f0410();
  }
  FUN_00699da0();
  uVar5 = FUN_005e5690(0x20,0,0);
  iVar8 = FUN_0051aa00(uVar5);
  if (iVar8 == 0x20) {
    (**(code **)(*in_ECX + 0x164))();
    FUN_00477b60(uVar5,1,0xffffffff);
    (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x4b4))();
    iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
    if (iVar8 == 0) {
      if ((in_ECX != DAT_00b333c4) && (DAT_00b333b8 != '\0')) {
        fVar14 = (float10)FUN_004d7e90(DAT_00b333c4,0);
        dStack_13c = (double)CONCAT44(dStack_13c._4_4_,(float)fVar14);
        if (_DAT_00b37d78 < (float)fVar14) goto LAB_00600b5d;
      }
      iVar8 = (**(code **)(*in_ECX + 0x170))();
      if (*(char *)(iVar8 + 4) == '$') {
        cVar3 = FUN_005e3270();
        if ((cVar3 == '\0') || (iVar8 = (**(code **)(*in_ECX + 0x170))(), iVar8 == 0)) {
          iVar8 = 0;
        }
        else {
          iVar8 = FUN_0051cec0(8);
        }
        if (((iVar8 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
           (puVar7 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar8 + 0xc),0x102,0),
           puVar7 != (undefined4 *)0x0)) {
          pdVar12 = (double *)(**(code **)(*in_ECX + 0x174))();
          dStack_13c = *pdVar12;
          fStack_134 = *(float *)(pdVar12 + 1);
          FUN_006b7360(*(undefined4 *)pdVar12,*(undefined4 *)((int)pdVar12 + 4),fStack_134);
          FUN_006ac3e0(*puVar7,in_ECX);
          FUN_006b7190(0);
          FUN_006b73e0();
          FUN_00401f20(puVar7);
        }
      }
      else {
        (**(code **)(*in_ECX + 0x308))(piStack_12c,1,1);
      }
    }
  }
LAB_00600b5d:
  FUN_005e6680(1);
  if ((in_ECX == DAT_00b333c4) && (*(int *)(DAT_00b33398 + 0x24) != 0)) {
    FUN_006ab160(8,".\\Data\\Music\\Special\\death.mp3",0);
    FUN_006ab420();
  }
  if (((int *)in_ECX[0x16] != (int *)0x0) &&
     (piVar11 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))(), piVar11 != (int *)0x0)) {
    (**(code **)(*piVar11 + 0x9c))(1,0);
  }
  if ((in_ECX == DAT_00b333c4) && ((char)DAT_00b333c4[0x162] == '\0')) {
    FUN_0066c580(0);
  }
  piVar11 = (int *)in_ECX[0x16];
  if ((piVar11 != (int *)0x0) && (iVar8 = (**(code **)(*piVar11 + 8))(), iVar8 == 0)) {
    dStack_13c = (double)CONCAT71(dStack_13c._1_7_,*(char *)((int)piVar11 + 0x16a));
    if (*(char *)((int)piVar11 + 0x16a) != '\0') {
      uVar4 = FUN_00693210();
      *(undefined1 *)((int)piVar11 + 0x16a) = uVar4;
    }
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
    iVar8 = *(int *)in_ECX[0x16];
    iVar6 = FUN_00402c00();
    fVar2 = (float)iVar6;
    if (iVar6 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    dStack_13c = (double)(fVar2 * 24.0);
    fVar15 = (float10)FUN_00402bd0();
    fVar14 = (float10)dStack_13c;
    dStack_13c = (double)CONCAT44(dStack_13c._4_4_,(float)(fVar15 + fVar14));
    (**(code **)(iVar8 + 0x4f4))((float)(fVar15 + fVar14));
  }
  iVar6 = (**(code **)(*in_ECX + 0x170))();
  iVar8 = 0;
  if ((iVar6 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
    iVar8 = iVar6;
  }
  FUN_00440fa0(iVar8,1);
  cVar3 = (**(code **)(*in_ECX + 0x334))(1);
  if (cVar3 != '\0') {
    (**(code **)(*in_ECX + 0x340))(0);
  }
  cVar3 = (**(code **)(*in_ECX + 0x354))();
  if (cVar3 != '\0') {
    FUN_004246f0();
  }
  iVar8 = in_ECX[0xf];
  iVar6 = FUN_0065a2c0();
  if (((iVar6 != 0) && (iVar6 = FUN_0065a2c0(), iVar6 != 0)) && (*(int *)(iVar6 + 8) != 0)) {
    uVar9 = FUN_008ac0a0();
    FUN_0043f3e0(&dStack_13c,uVar9);
  }
  if (in_ECX == DAT_00b333c4) {
    FUN_0065ac20(1);
  }
  else {
    (**(code **)(*in_ECX + 0x1c8))();
  }
  if (((int *)in_ECX[0x16] == (int *)0x0) ||
     (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar6 != 0)) {
    FUN_005e9e70();
    FUN_004d7190();
    *(undefined1 *)(in_ECX + 0x30) = 1;
  }
  else {
    (**(code **)(*(int *)in_ECX[0x16] + 0x364))(_DAT_00b36c80);
    iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2e4))();
    if ((iVar6 == 0) || (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x2e4))(), iVar6 == 6)) {
      fVar14 = (float10)(**(code **)(*in_ECX + 0x1e0))();
      FUN_0070fdd0((float)fVar14);
      dStack_13c = 0.0078125;
      fStack_134 = 0.0;
      pdVar12 = (double *)FUN_007101f0(auStack_124,&dStack_13c);
      dStack_13c = *pdVar12;
      fStack_134 = *(float *)(pdVar12 + 1);
      FUN_0088d070(iVar8,6,1,0);
      FUN_008ab440(iVar8,&dStack_13c,1,0,0);
    }
    else {
      cVar3 = (**(code **)(*in_ECX + 0x1a0))();
      if (cVar3 != '\0') {
        FUN_008a5580(iVar8,0);
        fVar14 = (float10)(**(code **)(*in_ECX + 0x1e0))();
        FUN_0070fdd0((float)fVar14);
        dStack_13c = 2048.0;
        fStack_134 = 0.0;
        pdVar12 = (double *)FUN_007101f0(auStack_124,&dStack_13c);
        dStack_13c = *pdVar12;
        fStack_134 = *(float *)(pdVar12 + 1);
        FUN_004529e0(auStack_f4,&dStack_13c);
        FUN_00536660(iVar8,auStack_f4);
      }
    }
    if (((((DAT_00b3b914 <= DAT_00b148e4) ||
          (cVar3 = (**(code **)(*in_ECX + 0x278))(), cVar3 == '\0')) &&
         ((int *)in_ECX[0x16] != (int *)0x0)) &&
        (iVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d0))(), iVar8 == 0)) &&
       ((iVar8 = FUN_0047df80(0), iVar8 % 100 <= DAT_00b378b0 ||
        (cVar3 = (**(code **)(*in_ECX + 0x278))(), cVar3 == '\0')))) {
      FUN_005f5d10();
    }
  }
  if (in_ECX[0x16] != 0) {
    FUN_005eae70();
    if (((*(int *)(in_ECX[0x16] + 8) != 0) && (cVar3 = FUN_005660a0(), cVar3 != '\0')) &&
       (*(int **)(in_ECX[0x16] + 8) != (int *)0x0)) {
      (**(code **)(**(int **)(in_ECX[0x16] + 8) + 0x10))(1);
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
    *(undefined4 *)(in_ECX[0x16] + 8) = 0;
  }
  if (DAT_00b3b908 != '\0') {
    uVar9 = FUN_004da2a0();
    FUN_00579b60("%.20s is dead!",uVar9);
  }
LAB_00600f6d:
  if (DAT_00b148c4 != '\0') {
    if (piStack_12c != (int *)0x0) {
      dStack_13c = (double)CONCAT44(dStack_13c._4_4_,piStack_12c[3]);
      iVar6 = (**(code **)(*piStack_12c + 0x170))();
      iVar8 = 0;
      if ((iVar6 != 0) && (cVar3 = (**(code **)(*piStack_12c + 400))(), cVar3 != '\0')) {
        iVar8 = iVar6;
      }
      piStack_12c = *(int **)(iVar8 + 0xa4);
      if (piStack_12c == (int *)0x0) {
        piStack_12c = (int *)&DAT_00a2f7ec;
      }
      local_128 = in_ECX[3];
      iVar6 = (**(code **)(*in_ECX + 0x170))();
      iVar8 = 0;
      if ((iVar6 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
        iVar8 = iVar6;
      }
      puVar13 = *(undefined1 **)(iVar8 + 0xa4);
      if (puVar13 == (undefined1 *)0x0) {
        puVar13 = &DAT_00a2f7ec;
      }
      FUN_00404ee0("\'%s\' (%08X) was killed by \'%s\' (%08X).",puVar13,local_128,piStack_12c,
                   dStack_13c._0_4_);
      return;
    }
    dStack_13c = (double)CONCAT44(dStack_13c._4_4_,in_ECX[3]);
    iVar6 = (**(code **)(*in_ECX + 0x170))();
    iVar8 = 0;
    if ((iVar6 != 0) && (cVar3 = (**(code **)(*in_ECX + 400))(), cVar3 != '\0')) {
      iVar8 = iVar6;
    }
    puVar13 = *(undefined1 **)(iVar8 + 0xa4);
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &DAT_00a2f7ec;
    }
    FUN_00404ee0("\'%s\' (%08X) has died with no attacker.",puVar13,dStack_13c._0_4_);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0060158e) */

void FUN_006010b0(int *param_1,char param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int *unaff_retaddr;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iStack_1c;
  double dStack_14;
  int local_c;
  undefined1 *puStack_8;
  int *piStack_4;
  
  iVar5 = param_5;
  piStack_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009c2bdb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((((((in_ECX[0x2c] != 5) && (in_ECX[0x2c] != 3)) && (param_1 != in_ECX)) &&
       ((cVar2 = (**(code **)(*in_ECX + 0x198))(0,uVar3), cVar2 == '\0' &&
        (iVar4 = (**(code **)(*in_ECX + 0x388))(), iVar4 == 0)))) && ((char)in_ECX[0x30] == '\0'))
     && (((param_2 != '\0' || (iVar4 = (**(code **)(*in_ECX + 0x18c))(), iVar4 == 0)) ||
         ((iVar4 == 4 || (iVar4 == 9)))))) {
    iVar4 = (**(code **)(*in_ECX + 0x284))(4);
    if (iVar4 == 0) {
      fVar10 = (float10)FUN_004d7e90(param_1,0);
      fVar11 = (float10)(**(code **)(*in_ECX + 0x26c))();
      dStack_14 = (double)(float)fVar10;
      fVar12 = (float10)(**(code **)(*in_ECX + 0x26c))();
      if (fVar12 + (float10)(float)(fVar11 * (float10)0.25) < (float10)(float)fVar10)
      goto LAB_00601659;
    }
    dStack_14 = (double)CONCAT71(dStack_14._1_7_,0 < param_5);
    iVar4 = (**(code **)(*in_ECX + 0x18c))();
    if (iVar4 != 0) {
      (**(code **)(*in_ECX + 800))();
    }
    bVar9 = param_5 == 0;
    param_5 = 0;
    if (bVar9) {
      piVar6 = in_ECX;
      if (((int *)in_ECX[0x16] != (int *)0x0) &&
         (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x3d0))(), iVar5 != 0)) {
        piVar6 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x3d0))();
      }
      iVar5 = param_5;
      if ((int *)param_1[0x16] != (int *)0x0) {
        (**(code **)(*(int *)param_1[0x16] + 0x170))(param_1,piVar6);
        iVar5 = FUN_009828c0();
      }
    }
    param_5 = iVar5;
    cVar2 = (**(code **)(*in_ECX + 0x334))(1);
    if (cVar2 == '\0') {
      FUN_004fbf90(param_1,in_ECX + 0x11,0x8000);
      iVar4 = (**(code **)(*in_ECX + 0x170))();
      iStack_1c = 0;
      iVar5 = iVar4;
      if ((*(char *)(iVar4 + 4) != '#') && (iVar5 = 0, *(char *)(iVar4 + 4) == '$')) {
        iStack_1c = iVar4;
      }
      piVar6 = (int *)FUN_00579540();
      if (piVar6 == in_ECX) {
        FUN_00578d50(0);
      }
      iVar4 = *(int *)(in_ECX[0x16] + 8);
      if (iVar4 != 0) {
        if ((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) == 0) {
          if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x1c) >> 0x15 & 1) != 0)) &&
             (iVar4 = (**(code **)(*in_ECX + 0x2b8))(0xffffffff), iVar4 != 0)) {
            iVar1 = *(int *)(iVar4 + 8);
            iVar8 = 0;
            if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '!')) {
              iVar8 = iVar1;
            }
            FUN_005faea0(iVar1,1,0,1,0);
            if (*(char *)(iVar8 + 0x90) == '\x05') {
              iVar4 = (**(code **)(*in_ECX + 700))();
              uVar14 = 0;
              uVar15 = *(undefined4 *)(iVar4 + 8);
              uVar13 = 1;
              uVar7 = 0;
              uVar16 = FUN_004b2460(0,1,0);
              FUN_005faea0(uVar15,uVar16,uVar7,uVar13,uVar14);
            }
            FUN_00484470();
            FUN_00401f20(iVar4);
          }
        }
        else if (iVar5 == 0) {
          if (iStack_1c != 0) {
            FUN_0051e240(in_ECX,1,1,1);
          }
        }
        else {
          FUN_005227a0(in_ECX,1,1,0,1);
        }
      }
      if (((char)param_1 == '\0') && ((char)param_5 != '\0')) {
        if ((unaff_retaddr != (int *)0x0) &&
           ((cVar2 = (**(code **)(*unaff_retaddr + 0x334))(1), cVar2 == '\0' &&
            (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))(), iVar4 == 0)))) {
          FUN_005e91e0(0x1d,0x49564e49,1);
          iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
          if (iVar4 == 0) {
            FUN_005e91e0(0x1d,0x4c4d4843,1);
          }
          iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
          if (iVar4 != 0) {
            uVar15 = 0;
            (**(code **)(*(int *)in_ECX[0x16] + 0x50))(0);
            FUN_0041a610(uVar15);
          }
        }
        iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
        if (iVar4 != 0) {
          (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
          cVar2 = FUN_00419cf0();
          if (cVar2 == '\0') {
            (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
            cVar2 = FUN_00419e50();
            if (cVar2 == '\0') {
              uVar15 = 0;
              (**(code **)(*(int *)in_ECX[0x16] + 0x50))(0);
              FUN_0041a610(uVar15);
            }
            goto LAB_00601659;
          }
          uVar16 = 0;
          piVar6 = in_ECX + 0x1a;
          uVar15 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))(piVar6,0);
          FUN_00699190(uVar15,piVar6,uVar16);
          uVar15 = 0;
          (**(code **)(*(int *)in_ECX[0x16] + 0x50))(0);
          FUN_00419f10(uVar15);
          (**(code **)(*(int *)in_ECX[0x16] + 0x54))(0);
        }
      }
      FUN_005eae70();
      (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
      piVar6 = unaff_retaddr;
      if ((*(int *)(in_ECX[0x16] + 8) != 0) && (cVar2 = FUN_005660a0(), cVar2 == '\0')) {
        piVar6 = (int *)in_ECX[0x16];
        uVar15 = (**(code **)(*piVar6 + 0x390))();
        uVar16 = (**(code **)(*piVar6 + 0xc0))(uVar15);
        uVar7 = (**(code **)(*piVar6 + 0xcc))(uVar16);
        FUN_004268b0(piVar6[2],piVar6[1],uVar7,uVar16,uVar15);
        piVar6 = piStack_4;
      }
      iVar4 = FUN_00401f00(0x1c0);
      local_c = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0061bb60(in_ECX,piVar6,param_3,iStack_1c);
      }
      local_c = -1;
      if (param_2 != '\0') {
        FUN_00612de0(7);
      }
      if ((char)unaff_retaddr != '\0') {
        *(undefined1 *)(iVar4 + 0x4d) = 1;
      }
      if ((((in_ECX[0x16] != 0) && (iVar1 = *(int *)(in_ECX[0x16] + 8), iVar1 != 0)) &&
          ((uVar3 = *(uint *)(iVar1 + 0x1c), (uVar3 >> 0x14 & 1) != 0 || ((uVar3 >> 0x15 & 1) != 0))
          )) && (iVar5 != 0)) {
        FUN_005227a0(in_ECX,1,1,0,1);
      }
      (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
      FUN_005f1590(iVar4,0,1);
    }
    else {
      iVar5 = (**(code **)(*in_ECX + 0x330))();
      if (iVar5 != 0) {
        if (param_1 == (int *)0x0) goto LAB_00601659;
        (**(code **)(*in_ECX + 0x330))();
        piVar6 = (int *)FUN_006135f0();
        if (piVar6 != param_1) {
          in_ECX[0x2b] = 0x40a00000;
          uVar16 = 0;
          uVar15 = 0;
          piVar6 = param_1;
          (**(code **)(*in_ECX + 0x330))(param_1,param_5,dStack_14._0_4_,0,0);
          FUN_00616190(piVar6,param_5,dStack_14._0_4_,uVar15,uVar16);
          piVar6 = param_1;
          (**(code **)(*in_ECX + 0x330))(param_1);
          FUN_0061eae0(piVar6);
        }
      }
    }
    if ((param_1 != (int *)0x0) && (DAT_00b3b908 != '\0')) {
      uVar15 = FUN_004da2a0();
      uVar15 = FUN_004da2a0(uVar15);
      FUN_00579b60("%.20s is entering combat with %.20s!",uVar15);
    }
  }
LAB_00601659:
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00601670(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float10 fVar8;
  float local_10;
  int local_8;
  int *local_4;
  
  local_8 = 0;
  local_4 = (int *)0x0;
  FUN_00673a50(0);
  piVar3 = (int *)FUN_007616d0();
  piVar7 = (int *)0x0;
  iVar6 = 0;
  iVar5 = local_8;
  piVar4 = local_4;
  for (; (piVar3 != (int *)0x0 &&
         ((iVar5 = iVar6, piVar4 = piVar7, piVar3[1] != 0 || (*piVar3 != 0))));
      piVar3 = (int *)piVar3[1]) {
    iVar1 = *piVar3;
    cVar2 = FUN_005f7a80(iVar1,1);
    if ((cVar2 != '\0') && ((iVar1 != 0 && (iVar5 = iVar1, iVar6 != 0)))) {
      piVar4 = (int *)FUN_00401f00(8);
      if (piVar4 == (int *)0x0) {
        piVar4 = (int *)0x0;
      }
      else {
        *piVar4 = iVar6;
        piVar4[1] = 0;
      }
      piVar4[1] = (int)piVar7;
    }
    piVar7 = piVar4;
    iVar6 = iVar5;
  }
  local_4 = piVar4;
  local_8 = iVar5;
  cVar2 = FUN_005f7a80(DAT_00b333c4,1);
  if (cVar2 != '\0') {
    FUN_00446cb0(DAT_00b333c4);
    piVar7 = local_4;
  }
  iVar6 = 0;
  local_10 = 0.0;
  piVar3 = &local_8;
  do {
    if ((piVar3[1] == 0) && (*piVar3 == 0)) break;
    iVar5 = *piVar3;
    fVar8 = (float10)FUN_005e68a0(iVar5);
    if (local_10 < (float)fVar8) {
      iVar6 = iVar5;
      local_10 = (float)fVar8;
    }
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  while (piVar7 != (int *)0x0) {
    piVar3 = (int *)piVar7[1];
    FUN_00401f20(piVar7);
    piVar7 = piVar3;
  }
  return iVar6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00601790(undefined4 param_1,undefined4 *param_2)

{
  char *pcVar1;
  int *piVar2;
  ushort uVar3;
  uint3 uVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  code *pcVar11;
  int *in_ECX;
  char *pcVar12;
  uint uVar13;
  undefined4 unaff_EBX;
  float10 fVar14;
  float10 fVar15;
  float fVar16;
  undefined4 uStack_20;
  int iStack_1c;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar4 = (uint3)uStack_20;
  pfVar6 = (float *)(**(code **)(*in_ECX + 0x174))();
  pfVar7 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
  fStack_8 = pfVar7[1] - pfVar6[1];
  fStack_4 = pfVar7[2] - pfVar6[2];
  fStack_c = *pfVar7 - *pfVar6;
  fVar14 = (float10)FUN_00683cb0(&fStack_c);
  iVar8 = (**(code **)(*in_ECX + 0x164))();
  iVar9 = *(int *)(in_ECX[0x16] + 8);
  iStack_1c = 0;
  if ((iVar9 != 0) && (*(char *)(iVar9 + 0x20) == '\x12')) {
    iStack_1c = iVar9;
  }
  uStack_20 = (uint)(uint3)uStack_20;
  if (iVar8 == 0) {
    return;
  }
  fVar15 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  if ((ABS((float)(fVar15 - (float10)(float)fVar14)) <= 0.0) ||
     (iVar9 = (**(code **)(*in_ECX + 0x18c))(), iVar9 != 0)) {
    if (in_ECX[0x16] != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x30,0);
    }
    uStack_20 = CONCAT13(1,uVar4);
  }
  else {
    FUN_00685530();
  }
  uVar3 = (ushort)uStack_20;
  uStack_20._0_3_ = (uint3)(ushort)uStack_20;
  if (param_2 == (undefined4 *)0x0) {
LAB_0060191d:
    if (in_ECX[0x16] != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
    }
  }
  else if (in_ECX[0x16] != 0) {
    if (*(ushort *)(param_2 + 1) == 0xffff) {
      pcVar12 = (char *)*param_2;
      pcVar1 = pcVar12 + 1;
      do {
        cVar5 = *pcVar12;
        pcVar12 = pcVar12 + 1;
      } while (cVar5 != '\0');
      uVar13 = (int)pcVar12 - (int)pcVar1;
    }
    else {
      uVar13 = (uint)*(ushort *)(param_2 + 1);
    }
    fVar14 = (float10)FUN_005f7310(param_2[4],&param_2,param_2[2],param_2[3],uVar13,1,1,0,1);
    param_2 = (undefined4 *)(float)fVar14;
    (**(code **)(*(int *)in_ECX[0x16] + 0x20c))(param_2);
    uStack_20._0_3_ = CONCAT12(1,uVar3);
    FUN_00475440(1,0);
    goto LAB_0060191d;
  }
  FUN_005fcab0(0x3f800000,0x3f800000);
  FUN_00476d10(in_ECX,_DAT_00b33e9c,0xbf800000);
  if ((int *)in_ECX[0x16] == (int *)0x0) goto LAB_00601ae2;
  iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x33c))(0);
  if (in_ECX[0x16] == 0) {
    piVar10 = (int *)0x0;
  }
  else {
    piVar10 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
  }
  if ((iVar9 == 0) || (cVar5 = FUN_006b7260(), cVar5 == '\0')) {
    iVar8 = FUN_00589b70(0x40a);
    if ((iStack_1c != 0) && ((*(int *)(iStack_1c + 0x48) != 0 && (iVar9 == 0)))) {
      *(undefined4 *)(iStack_1c + 0x48) = 0;
      FUN_00475440(1,0);
    }
    if (piVar10 == (int *)0x0) goto LAB_00601ae2;
    iVar9 = in_ECX[0x1c];
    if (iVar9 != 7) {
      if (iVar9 == 1) {
        iVar9 = in_ECX[0x1d];
        fVar16 = 1.12104e-44;
      }
      else {
        if (iVar9 != 5) goto LAB_00601ae2;
        iVar9 = in_ECX[0x1d];
        fVar16 = 1.68156e-44;
      }
      pcVar11 = *(code **)(*piVar10 + 200);
LAB_00601add:
      (*pcVar11)(fVar16,iVar9);
      goto LAB_00601ae2;
    }
    if (DAT_00b1206c != '\0') {
      piVar2 = (int *)in_ECX[0x16];
      goto joined_r0x00601a8f;
    }
  }
  else {
    if ((piVar10 == (int *)0x0) || (in_ECX[0x1c] != 7)) goto LAB_00601ae2;
    iVar8 = FUN_00589b70(0x40a);
    piVar10 = (int *)FUN_005e12b0();
    if (piVar10 == (int *)0x0) goto LAB_00601ae2;
    if (DAT_00b1206c != '\0') {
      piVar2 = (int *)in_ECX[0x16];
joined_r0x00601a8f:
      if ((((piVar2 != (int *)0x0) && (iVar8 == 0)) &&
          (iVar9 = (**(code **)(*piVar2 + 0x1dc))(), iVar9 != 0)) ||
         (cVar5 = FUN_0057ab70(), cVar5 == '\0')) goto LAB_00601ae2;
      iVar8 = *piVar10;
      piVar10 = (int *)in_ECX[0x16];
      iVar9 = FUN_005e0e60();
      fVar14 = (float10)(**(code **)(*piVar10 + 0x1d8))();
      pcVar11 = *(code **)(iVar8 + 0xd0);
      fVar16 = (float)fVar14;
      goto LAB_00601add;
    }
  }
  (**(code **)(*piVar10 + 0x78))(0,1,0,0,0,0);
LAB_00601ae2:
  FUN_006ae860(1,1);
  (**(code **)(*in_ECX + 0x228))(param_1);
  if (((char)((uint)unaff_EBX >> 0x10) != '\0') && (uStack_20 != 0)) {
    *(int **)(uStack_20 + 0x48) = in_ECX;
  }
  iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
  if ((((char)((uint)unaff_EBX >> 0x18) != '\0') && (iVar9 != 0)) &&
     ((*(char *)(iVar9 + 0x20) == '\x12' && (cVar5 = FUN_00472ea0(), cVar5 != '\0')))) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x48))();
  }
  iVar9 = FUN_006ecc80();
  if (iVar9 != 0) {
    FUN_004cb6c0();
  }
  (**(code **)(*in_ECX + 0xfc))();
  return;
}



void FUN_00601b80(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *in_ECX;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  code *pcVar12;
  
  if (((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar2 != 0))
     && (*(char *)(iVar2 + 0x20) == '\x12')) {
    return;
  }
  cVar1 = (**(code **)(*in_ECX + 0x198))(1);
  if (cVar1 != '\0') {
    return;
  }
  if ((int *)in_ECX[0x16] == (int *)0x0) goto LAB_00601fe6;
  iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x20);
    if (cVar1 == '\x17') {
      return;
    }
    if (cVar1 == '\x1e') {
      return;
    }
    if ((cVar1 == '\x18') && (iVar2 = (**(code **)(*in_ECX + 0x388))(), iVar2 != 0)) {
      return;
    }
  }
  iVar2 = 0;
  if (((int *)in_ECX[0x16])[2] != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0xb8))();
    iVar2 = *(int *)(in_ECX[0x16] + 8);
    cVar1 = FUN_00565dc0();
    if (cVar1 != '\0') {
      pcVar12 = FUN_00645af0;
      uVar11 = 0x459c4000;
      piVar7 = in_ECX;
      uVar3 = (**(code **)(*in_ECX + 0x174))(0x459c4000,FUN_00645af0);
      uVar10 = 0x459c4000;
      uVar4 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar3);
      uVar5 = FUN_006ecc80(uVar4);
      FUN_00446b90(uVar5,uVar4,uVar10,uVar3,uVar11,pcVar12,piVar7);
    }
    cVar1 = FUN_00565db0();
    if (cVar1 != '\0') {
      pcVar12 = FUN_00645a30;
      uVar11 = 0x459c4000;
      piVar7 = in_ECX;
      uVar3 = (**(code **)(*in_ECX + 0x174))(0x459c4000,FUN_00645a30);
      uVar10 = 0x459c4000;
      uVar4 = (**(code **)(*in_ECX + 0x174))(0x459c4000,uVar3);
      uVar5 = FUN_006ecc80(uVar4);
      FUN_00446b90(uVar5,uVar4,uVar10,uVar3,uVar11,pcVar12,piVar7);
    }
  }
  cVar1 = (**(code **)(*(int *)in_ECX[0x16] + 0x248))();
  if ((cVar1 != '\0') && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar6 != 0)) {
    piVar7 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xcc))();
    cVar1 = (**(code **)(*piVar7 + 400))();
    if ((cVar1 != '\0') && (iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(), iVar6 != 0)) {
      FUN_00424d00(in_ECX);
    }
  }
  FUN_005eae70();
  iVar6 = *(int *)(in_ECX[0x16] + 8);
  if ((iVar6 != 0) && (cVar1 = FUN_005660b0(), cVar1 == '\0')) {
    *(undefined4 *)(in_ECX[0x16] + 8) = 0;
  }
  (**(code **)(*(int *)in_ECX[0x16] + 0x3c0))();
  (**(code **)(*(int *)in_ECX[0x16] + 0x394))(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x18))();
  if (*(int *)(in_ECX[0x16] + 8) != iVar2) {
    FUN_004fbf90(iVar2,in_ECX + 0x11,0x800);
  }
  if ((iVar6 != 0) &&
     (((*(char *)(iVar6 + 0x20) == '\x04' || ((*(uint *)(iVar6 + 0x1c) >> 0x14 & 1) != 0)) ||
      ((*(uint *)(iVar6 + 0x1c) >> 0x15 & 1) != 0)))) {
    iVar8 = (**(code **)(*in_ECX + 0x170))();
    iVar6 = 0;
    iVar2 = iVar8;
    if ((*(char *)(iVar8 + 4) != '#') && (iVar2 = 0, *(char *)(iVar8 + 4) == '$')) {
      iVar6 = iVar8;
    }
    iVar8 = *(int *)(in_ECX[0x16] + 8);
    uVar4 = 1;
    uVar3 = 1;
    if ((iVar8 == 0) || ((*(uint *)(iVar8 + 0x1c) >> 0x14 & 1) != 0)) {
      uVar4 = 0;
    }
    if ((iVar8 == 0) || ((*(uint *)(iVar8 + 0x1c) >> 0x15 & 1) != 0)) {
      uVar3 = 0;
    }
    if (iVar2 == 0) {
      if (iVar6 != 0) {
        FUN_0051e240(in_ECX,uVar4,uVar3,1);
      }
    }
    else {
      FUN_005227a0(in_ECX,uVar4,uVar3,0,1);
    }
  }
  if (in_ECX[0x16] != 0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
  }
  iVar2 = (**(code **)(*in_ECX + 0x18c))();
  if (iVar2 == 0) goto LAB_00601fe6;
  if (iVar2 == 4) {
    iVar2 = (**(code **)(*in_ECX + 0x380))();
    if ((iVar2 == 0) ||
       ((*(int *)(in_ECX[0x16] + 8) != 0 &&
        ((*(uint *)(*(int *)(in_ECX[0x16] + 8) + 0x1c) >> 0x17 & 1) != 0)))) goto LAB_00601fd9;
    (**(code **)(*in_ECX + 0x380))();
    cVar1 = FUN_005e9a60();
    if (cVar1 == '\0') {
      (**(code **)(*in_ECX + 0x380))();
      FUN_005f80d0();
    }
    pcVar12 = *(code **)(*in_ECX + 0x230);
  }
  else {
    if (iVar2 != 9) {
      iVar2 = (**(code **)(*in_ECX + 0x380))();
      if (iVar2 != 0) {
        piVar7 = (int *)(**(code **)(*in_ECX + 0x380))();
        iVar2 = (**(code **)(*piVar7 + 0x164))();
        if (iVar2 != 0) {
          FUN_00470fc0(5,0);
          FUN_00475440(1,0);
        }
        FUN_005e13d0(0);
        uVar3 = (**(code **)(*in_ECX + 0x154))();
        FUN_0065a2c0();
        uVar4 = FUN_00531d80();
        FUN_005ea350(uVar4);
        FUN_0088d0e0(uVar3,uVar4,1,0);
        (**(code **)(*piVar7 + 0x38c))(0);
        (**(code **)(*in_ECX + 900))(0);
      }
      FUN_0065ac20(0);
      (**(code **)(*(int *)in_ECX[0x16] + 0x370))();
      FUN_005effd0(0xffffffff,0);
      iVar2 = (**(code **)(*in_ECX + 0x164))();
      if (iVar2 != 0) {
        FUN_00470fc0(5,0);
        FUN_00475440(1,0);
      }
      goto LAB_00601fe6;
    }
LAB_00601fd9:
    pcVar12 = *(code **)(*in_ECX + 800);
  }
  (*pcVar12)();
LAB_00601fe6:
  if ((in_ECX[0x16] != 0) && (iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar2 != 0)) {
    iVar2 = *(int *)in_ECX[0x16];
    fVar9 = (float10)FUN_00402bd0();
    (**(code **)(iVar2 + 0x1c))((float)(fVar9 - (float10)1.0));
  }
  if ((*(int *)(in_ECX[0x16] + 8) != 0) && (*(int *)(*(int *)(in_ECX[0x16] + 8) + 0x28) != 0)) {
    iVar2 = *(int *)in_ECX[0x16];
    uVar3 = FUN_00452a60();
    (**(code **)(iVar2 + 0x100))(uVar3);
  }
  return;
}



void FUN_00602050(int *param_1)

{
  undefined2 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int *unaff_EBX;
  int unaff_EDI;
  int iVar8;
  undefined4 *puVar9;
  float10 fVar10;
  undefined4 uVar11;
  int local_34;
  int *local_30;
  float afStack_2c [2];
  undefined1 auStack_24 [16];
  int *piStack_14;
  
  if (param_1 != (int *)0x0) {
    local_30 = (int *)param_1[0xf];
    iVar8 = in_ECX[0xf];
    local_34 = iVar8;
    afStack_2c[0] = (float)(**(code **)(*param_1 + 0x164))();
    iVar3 = (**(code **)(*in_ECX + 0x164))();
    if (in_ECX == DAT_00b333c4) {
      local_34 = FUN_00660110(0);
      iVar3 = FUN_0065d750(0);
      iVar8 = local_34;
    }
    if ((local_30 != (int *)0x0) && (iVar8 != 0)) {
      local_34 = (**(code **)(*local_30 + 0x58))("ActorParent");
      if (local_34 == 0) {
        uVar4 = (**(code **)(*param_1 + 0x170))();
        uVar4 = FUN_0046d3f0(uVar4);
        FUN_004a7a60("Missing \'ActorParent\' node for horse \'%s\'.",uVar4);
        return;
      }
      fVar10 = (float10)(**(code **)(*in_ECX + 0xec))();
      afStack_2c[0] = ABS((float)((float10)1 / fVar10));
      *(float *)(local_34 + 0x60) = afStack_2c[0];
      (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x400,0);
      FUN_0065ac20(1);
      if (in_ECX[0x16] != 0) {
        (**(code **)(*(int *)in_ECX[0x16] + 0x2c4))(0x30,0);
      }
      (**(code **)(*in_ECX + 0x1e8))(0);
      puVar5 = (undefined4 *)FUN_004d7af0(&local_34);
      puVar9 = (undefined4 *)(iVar8 + 0x30);
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar9 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)(iVar3 + 0xc) = DAT_00b3f9a8;
      *(undefined4 *)(iVar3 + 0x10) = DAT_00b3f9ac;
      *(undefined4 *)(iVar3 + 0x14) = DAT_00b3f9b0;
      FUN_00470fc0(0,0);
      *(undefined1 *)(iVar3 + 0xc4) = 1;
      piVar6 = (int *)(**(code **)(*unaff_EBX + 8))();
      iVar8 = unaff_EDI;
      (**(code **)(*piVar6 + 0x84))(unaff_EDI,1);
      *(undefined4 *)(unaff_EDI + 0x94) = *(undefined4 *)(iVar3 + 0x94);
      FUN_005e13d0(1);
      (**(code **)(*(int *)in_ECX[0x16] + 0x370))();
      if (in_ECX == DAT_00b333c4) {
        iVar3 = *piVar6;
        uVar11 = 1;
        uVar4 = FUN_00660110(1);
        (**(code **)(iVar3 + 0x84))(uVar4,uVar11);
        iVar3 = FUN_0065abe0(afStack_2c);
        uVar1 = *(undefined2 *)(iVar3 + 2);
        iVar3 = (**(code **)(*piStack_14 + 0x154))();
      }
      else {
        iVar3 = FUN_0065abe0(auStack_24);
        uVar1 = *(undefined2 *)(iVar3 + 2);
        iVar3 = (**(code **)(*in_ECX + 0x154))();
      }
      iVar7 = FUN_0065a2c0();
      if ((iVar7 != 0) && (iVar3 != 0)) {
        FUN_005ea350(uVar1);
        FUN_0088d0e0(iVar3,uVar1,1,0);
      }
      FUN_00470fc0(5,0);
      *(undefined1 *)(iVar8 + 0xc4) = 1;
      cVar2 = FUN_0045a500();
      if (cVar2 == '\0') {
        FUN_005fcab0(0x3f800000,0x3f800000);
      }
    }
  }
  return;
}



void FUN_006022f0(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  int *in_ECX;
  int iVar9;
  uint uVar10;
  int unaff_FS_OFFSET;
  bool bVar11;
  uint uStack_14;
  uint uStack_10;
  int iStack_c;
  uint local_8;
  int iStack_4;
  
  uVar10 = param_1;
  if (((param_2 & 0x28000000) != 0) && ((param_1 & 0x28000000) == 0)) {
    iVar3 = (**(code **)(*in_ECX + 0x170))();
    iVar9 = 0;
    iVar4 = iVar3;
    if ((*(char *)(iVar3 + 4) != '#') && (iVar4 = 0, *(char *)(iVar3 + 4) == '$')) {
      iVar9 = iVar3;
    }
    uStack_14 = CONCAT31(uStack_14._1_3_,1);
    uStack_10 = CONCAT31(uStack_10._1_3_,1);
    if (((int *)in_ECX[0x16] != (int *)0x0) &&
       (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))(), iVar3 != 0)) {
      if ((*(uint *)(iVar3 + 0x1c) >> 0x14 & 1) != 0) {
        uStack_14 = uStack_14 & 0xffffff00;
      }
      if ((*(uint *)(iVar3 + 0x1c) >> 0x15 & 1) != 0) {
        uStack_10 = uStack_10 & 0xffffff00;
      }
    }
    if (iVar4 == 0) {
      if (iVar9 != 0) {
        FUN_0051e240(in_ECX,uStack_14,uStack_10,1);
      }
    }
    else {
      FUN_005227a0(in_ECX,uStack_14,uStack_10,0,1);
    }
  }
  local_8 = uVar10 & 0x40;
  if ((local_8 == 0) && ((param_2 & 0x40) != 0)) {
    iVar4 = (**(code **)(*in_ECX + 0x170))();
    iVar9 = 0;
    if ((iVar4 != 0) && (cVar2 = (**(code **)(*in_ECX + 400))(), cVar2 != '\0')) {
      iVar9 = iVar4;
    }
    if ((*(uint *)(iVar9 + 8) >> 0x13 & 1) == 0) {
      FUN_005e6680(0);
      *(undefined1 *)(in_ECX + 0x30) = 0;
      FUN_005f87f0();
    }
    else {
      FUN_004de100(0);
    }
  }
  iVar9 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  iVar4 = in_ECX[0x2c];
  iVar3 = in_ECX[0x30];
  *(undefined1 *)(iVar9 + 0x184) = 1;
  FUN_00659c90(param_1,param_2);
  *(undefined1 *)(iVar9 + 0x184) = 0;
  uStack_10 = 0;
  iStack_c = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&iStack_4,4);
    if (iStack_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\Actor.cpp",0x4403,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar1);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\Actor.cpp",0x4403,*puVar1,uVar6);
      }
    }
    iStack_c = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&uStack_10,2);
  }
  in_ECX[0x2c] = iVar4;
  *(char *)(in_ECX + 0x30) = (char)iVar3;
  FUN_0046ac80(in_ECX + 0x2f,4);
  FUN_0046ac80(in_ECX + 0x32,1);
  FUN_0046ac80((int)in_ECX + 0xc9,1);
  if (0x24 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x1e,1);
  }
  if (local_8 != 0) {
    FUN_0046ac80(&uStack_14,1);
    if (((((in_ECX[0x2c] != (uStack_14 & 0xff)) &&
          (in_ECX[0x2c] = uStack_14 & 0xff, (char)uStack_14 != '\x02')) &&
         ((char)uStack_14 != '\x01')) && ((char)uStack_14 != '\x06')) &&
       (((iVar4 == 2 || (iVar4 == 1)) || (iVar4 == 6)))) {
      FUN_005f87f0();
      *(undefined1 *)(in_ECX + 0x30) = 0;
    }
  }
  iVar9 = (**(code **)(*in_ECX + 0x170))();
  if (((*(char *)(iVar9 + 4) == '$') && (iVar9 = (**(code **)(*in_ECX + 0x170))(), iVar9 != 0)) &&
     (*(char *)(iVar9 + 0x104) == '\x04')) {
    local_8 = 0;
    FUN_0046ac80(&uStack_14,1);
    if ((char)uStack_14 != '\0') {
      FUN_0046aca0(&local_8,4);
    }
    in_ECX[0x35] = local_8;
  }
  if ((param_1 & 0x8000) != 0) {
    FUN_004534d0(&uStack_14,2);
    uVar10 = 0;
    if ((short)uStack_14 != 0) {
      do {
        iVar9 = FUN_00401f00(8);
        FUN_0046aca0(&local_8,4);
        *(uint *)(iVar9 + 4) = local_8;
        FUN_0046ac80(iVar9,4);
        if (in_ECX[0x29] != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = in_ECX[0x29];
            piVar5[1] = 0;
          }
          piVar5[1] = in_ECX[0x2a];
          in_ECX[0x2a] = (int)piVar5;
        }
        uVar10 = uVar10 + 1;
        in_ECX[0x29] = iVar9;
      } while (uVar10 < (uStack_14 & 0xffff));
    }
  }
  uVar10 = param_1;
  if ((param_1 & 0x20000000) == 0) {
    bVar11 = (param_2 & 0x20000000) == 0;
  }
  else {
    FUN_0046ac80(&param_1,4);
    uVar7 = FUN_00453a00(in_ECX);
    bVar11 = param_1 == uVar7;
  }
  if ((!bVar11) && ((int *)in_ECX[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x31c))(1);
  }
  if (0x13 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&param_1,2);
    uVar7 = 0;
    if ((short)param_1 != 0) {
      do {
        puVar8 = (uint *)FUN_00401f00(8);
        FUN_0046aca0(&param_2,4);
        *puVar8 = param_2;
        FUN_0046ac80(puVar8 + 1,4);
        if (in_ECX[0x27] != 0) {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar5 = (int *)0x0;
          }
          else {
            *piVar5 = in_ECX[0x27];
            piVar5[1] = 0;
          }
          piVar5[1] = in_ECX[0x28];
          in_ECX[0x28] = (int)piVar5;
        }
        uVar7 = uVar7 + 1;
        in_ECX[0x27] = (int)puVar8;
      } while (uVar7 < (param_1 & 0xffff));
    }
  }
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046aca0(&param_1,4);
    in_ECX[0x1f] = param_1;
  }
  if (0x3b < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046aca0(&param_1,4);
    if (param_1 == 0) {
      in_ECX[0x34] = 0;
    }
    else {
      uVar6 = FUN_0046b250(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03de4,0);
      iVar9 = FUN_009832e6(uVar6);
      in_ECX[0x34] = iVar9;
    }
  }
  if (in_ECX == DAT_00b333c4) {
    DAT_00b3b77d = 0;
  }
  if ((0x43 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((uVar10 & 0x200000) != 0)) {
    FUN_0065cbb0();
  }
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x20,1);
    FUN_0045ba00(&param_1,4);
    in_ECX[0x33] = param_1;
  }
  if (0x60 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045ba00(&param_1,4);
    in_ECX[0x39] = param_1;
  }
  if (100 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x21,4);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x2b,4);
    FUN_0046ac80((int)in_ECX + 0xca,1);
    FUN_0046ac80(in_ECX + 0x36,1);
    FUN_0046ac80(in_ECX + 0x37,4);
    FUN_0046ac80(in_ECX + 0x40,4);
  }
  if (0x72 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x3f,1);
  }
  if (0x7a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x30,1);
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar10 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar7 = uStack_10 & 0xffff;
      if (uVar7 + iStack_c < uVar10) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar10 - uVar7) - iStack_c,".\\AI\\Actor.cpp",0x44b8,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar10 < uVar7 + iStack_c) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar7 - uVar10) + iStack_c,".\\AI\\Actor.cpp",0x44b8,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar1);
      iVar9 = iStack_c;
      uVar7 = (uStack_10 & 0xffff) + iStack_c;
      if (uVar7 < uVar10) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar10 - (uStack_10 & 0xffff)) - iVar9,".\\AI\\Actor.cpp",0x44b8,*puVar1,
                     uVar6);
        return;
      }
      if (uVar10 < uVar7) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((uStack_10 & 0xffff) - uVar10) + iVar9,".\\AI\\Actor.cpp",0x44b8,*puVar1,
                     uVar6);
        return;
      }
    }
  }
  return;
}



void FUN_00602a70(undefined4 param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *piVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2c13;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x318))();
  }
  FUN_0065ba90(param_1,param_2);
  iVar4 = (**(code **)(*in_ECX + 0x170))(uVar3);
  if ((((*(char *)(iVar4 + 4) == '$') && (iVar4 = (**(code **)(*in_ECX + 0x170))(), iVar4 != 0)) &&
      (*(char *)(iVar4 + 0x104) == '\x04')) &&
     (piVar5 = (int *)(**(code **)(*in_ECX + 0x388))(), piVar5 != (int *)0x0)) {
    if (((((uint)piVar5[2] >> 0xb & 1) == 0) && (((uint)piVar5[2] >> 5 & 1) == 0)) &&
       ((((uint)in_ECX[2] >> 0xb & 1) == 0 && (((uint)in_ECX[2] >> 5 & 1) == 0)))) {
      iVar4 = (**(code **)(*piVar5 + 0x18c))();
      if (((iVar4 == 3) || (iVar4 == 4)) || (iVar4 == 5)) {
        FUN_00602050(in_ECX);
      }
      if ((int *)piVar5[0x16] != (int *)0x0) {
        (**(code **)(*(int *)piVar5[0x16] + 0x370))();
      }
    }
    else {
      (**(code **)(*piVar5 + 900))(0);
      (**(code **)(*in_ECX + 0x38c))(0);
    }
  }
  if ((int *)in_ECX[0x16] == (int *)0x0) goto LAB_00602c80;
  uVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x304))();
  iVar4 = FUN_005ef9b0(uVar6);
  iVar7 = FUN_0065a2c0();
  if (iVar4 == 0) goto LAB_00602c80;
  if (iVar7 == 0) {
LAB_00602be2:
    iVar7 = FUN_006ecc80();
    if (iVar7 != 0) {
      FUN_006ecc80();
      cVar2 = FUN_004c97f0();
      iVar7 = DAT_00b35c24;
      if (cVar2 != '\0') {
        iVar7 = FUN_00424180();
      }
      if (iVar7 != 0) {
        uVar6 = *(undefined4 *)(iVar4 + 0x10);
        FUN_006ecc80(uVar6);
        FUN_004440c0();
        FUN_00532c80(uVar6);
      }
    }
  }
  else {
    if (*(int *)(iVar7 + 8) == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_008ac0c0();
    }
    if ((*(int *)(iVar7 + 8) == 0) || (*(int *)(*(int *)(iVar7 + 8) + 0x2b0) == 0))
    goto LAB_00602be2;
  }
  iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x124))(0);
  if ((iVar4 == 0) && (iVar4 = (**(code **)(*in_ECX + 0x27c))(), iVar4 == 0)) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x300))(1);
    cVar2 = (**(code **)(*in_ECX + 0x198))(0);
    if (cVar2 != '\0') {
      (**(code **)(*(int *)in_ECX[0x16] + 0x308))(1);
    }
  }
LAB_00602c80:
  iVar4 = (**(code **)(in_ECX[0x17] + 0x30))();
  if ((iVar4 != 0) && (in_ECX[0xf] != 0)) {
    uVar6 = 0;
    (**(code **)(in_ECX[0x17] + 0x30))(0);
    iVar4 = FUN_00419b30(uVar6);
    if (iVar4 != 0) {
      if (*(ushort *)(iVar4 + 0x20) == 0xffff) {
        pcVar8 = *(char **)(iVar4 + 0x1c);
        pcVar1 = pcVar8 + 1;
        do {
          cVar2 = *pcVar8;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 != '\0');
        uVar3 = (int)pcVar8 - (int)pcVar1;
      }
      else {
        uVar3 = (uint)*(ushort *)(iVar4 + 0x20);
      }
      if (uVar3 != 0) {
        iVar7 = FUN_0069fd20(iVar4);
        if (in_ECX == DAT_00b333c4) {
          if ((char)DAT_00b333c4[0x162] == '\0') {
            iVar9 = FUN_0065d750(1);
          }
          else {
            iVar9 = FUN_0065d750(0);
          }
        }
        else {
          iVar9 = (**(code **)(*in_ECX + 0x164))();
        }
        if ((iVar9 != 0) && (*(int *)(iVar9 + 0x98) != 0)) {
          piVar5 = (int *)(**(code **)(**(int **)(*(int *)(iVar9 + 0x98) + 0x7c) + 0x4c))
                                    ("magicNode");
          if (piVar5 == (int *)0x0) {
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)(**(code **)(*piVar5 + 8))();
          }
          if ((((iVar7 != 0) && (piVar10 != (int *)0x0)) &&
              ((**(code **)(*piVar10 + 0x84))(iVar7,1), *(int *)(iVar4 + 0x70) != 0)) &&
             (DAT_00b333b8 == '\0')) {
            iVar7 = FUN_00401f00(0x1c);
            uStack_4 = 0;
            if (iVar7 == 0) {
              iVar4 = 0;
            }
            else {
              iVar4 = FUN_0069e250(*(undefined4 *)(*(int *)(iVar4 + 0x70) + 0xc),piVar5);
            }
            uStack_4 = 0xffffffff;
            in_ECX[0x18] = iVar4;
          }
        }
      }
    }
  }
  if (((in_ECX[0xf] != 0) && ((int *)in_ECX[0x16] != (int *)0x0)) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar4 != 5)) {
    if (in_ECX == DAT_00b333c4) {
      param_1 = FUN_006600d0(0);
    }
    else {
      param_1 = (**(code **)(*in_ECX + 0x168))();
    }
    param_2 = 1;
    if (in_ECX == DAT_00b333c4) {
      param_2 = 2;
    }
    do {
      iVar4 = (**(code **)(*in_ECX + 0x164))();
      if ((in_ECX == DAT_00b333c4) && (param_2 == 1)) {
        param_1 = FUN_006600d0(1);
        iVar4 = FUN_0065d750(1);
      }
      iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 300))(param_1);
      if (iVar7 != 0) {
        if (iVar4 != 0) {
          uVar3 = 0;
          if (*(short *)(iVar7 + 0xb6) != 0) {
            if (*(short *)(iVar7 + 0xb6) != 0) goto LAB_00602e8a;
            uVar6 = 0;
            while( true ) {
              FUN_004712d0(uVar6);
              uVar3 = uVar3 + 1;
              if (*(ushort *)(iVar7 + 0xb6) <= uVar3) break;
LAB_00602e8a:
              uVar6 = *(undefined4 *)(*(int *)(iVar7 + 0xb0) + uVar3 * 4);
            }
          }
        }
        FUN_00477ef0();
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (((in_ECX[0xf] != 0) && ((int *)in_ECX[0x16] != (int *)0x0)) &&
     (iVar4 = (**(code **)(*(int *)in_ECX[0x16] + 0x2d0))(), iVar4 == 5)) {
    if (in_ECX == DAT_00b333c4) {
      param_1 = FUN_006600d0(0);
    }
    else {
      param_1 = (**(code **)(*in_ECX + 0x168))();
    }
    param_2 = 1;
    if (in_ECX != DAT_00b333c4) goto LAB_00602f4a;
    param_2 = 2;
    do {
      if ((in_ECX == DAT_00b333c4) && (param_2 == 1)) {
        param_1 = FUN_006600d0(1);
      }
LAB_00602f4a:
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x128))(param_1);
      piVar10 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 300))(param_1);
      if ((piVar5 != (int *)0x0) && (piVar10 != (int *)0x0)) {
        iVar4 = (**(code **)(*piVar5 + 0x58))("Arrow:0");
        if (iVar4 != 0) {
          uVar6 = FUN_00700900();
          FUN_00477ef0();
          (**(code **)(*piVar10 + 0x84))(uVar6,1);
        }
        if ((in_ECX == DAT_00b333c4) && (cVar2 = FUN_0065d820(), cVar2 == '\0')) {
          iVar7 = (**(code **)(*(int *)in_ECX[0x16] + 0xf4))(1);
          iVar7 = FUN_005e0f00(*(undefined4 *)(iVar7 + 8));
          if (iVar7 != 1) {
            if (DAT_00b35588 < iVar7) goto LAB_00603054;
            uStack_14 = 0;
            uStack_10 = 0;
            uStack_e = 0;
            uStack_4 = 1;
            FUN_00402e30(&uStack_14,"Arrow%d",iVar7 + -1);
            iVar4 = (**(code **)(*piVar5 + 0x58))(uStack_14);
            uStack_4 = 0xffffffff;
            FUN_00402da0();
          }
          if (iVar4 != 0) {
            *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
          }
        }
      }
LAB_00603054:
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_005ee1b0();
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    fVar11 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x438))();
    if (0.0 < (float)fVar11) {
      (**(code **)(*in_ECX + 0x270))(1,(float)fVar11);
    }
  }
  iVar4 = (**(code **)(*in_ECX + 0x18c))();
  if ((((iVar4 == 9) || (in_ECX[0x2c] == 3)) ||
      (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 != '\0')) &&
     (((int *)in_ECX[0x16] != (int *)0x0 &&
      (piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))(), piVar5 != (int *)0x0)))) {
    (**(code **)(*piVar5 + 0x9c))(1,1);
  }
  (**(code **)(*in_ECX + 0x2ec))();
  if (((in_ECX != DAT_00b333c4) && (in_ECX[0x2c] != 2)) &&
     ((in_ECX[0x2c] != 1 &&
      ((iVar4 = (**(code **)(*in_ECX + 0x164))(), iVar4 != 0 &&
       (cVar2 = FUN_00470d00(3), cVar2 == '\0')))))) {
    FUN_004e3490();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00603160(void)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  undefined4 unaff_EBP;
  
  if (in_ECX != DAT_00b333c4) {
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf0))(0);
    iVar5 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(0);
    bVar1 = false;
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x304))();
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xec))(1);
    if (iVar6 != 0) {
      cVar2 = *(char *)(*(int *)(iVar6 + 8) + 0x90);
      if ((cVar2 == '\x01') || (('\x02' < cVar2 && (cVar2 < '\x06')))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
    }
    cVar2 = FUN_005e8b80();
    if (cVar2 == '\0') {
      if ((iVar4 != 0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
        FUN_004853b0(0,0,0);
        FUN_004dcab0();
        if ((iVar5 != 0) && (!bVar1)) {
          FUN_004853b0(1,0,0);
          FUN_004e1b40(*(undefined4 *)(iVar5 + 8));
        }
        FUN_005f2e70(*(undefined4 *)(iVar4 + 8),1,0,0,0,0);
      }
    }
    else {
      cVar2 = (char)((uint)unaff_EBP >> 0x18);
      if (iVar4 == 0) {
        if (((cVar2 == '\0') || (!bVar1)) && (piVar7 = (int *)FUN_005e43b0(), piVar7 != (int *)0x0))
        {
          uVar8 = 0;
          if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
            uVar8 = *(undefined4 *)*piVar7;
          }
          FUN_005faea0(piVar7[2],1,uVar8,1,0);
          if (iVar5 != 0) {
            FUN_004853b0(0,0,0);
            FUN_004dc8f0(0);
          }
          FUN_004853b0(1,0,0);
          FUN_004e1c70(piVar7[2]);
          return;
        }
      }
      else {
        cVar3 = FUN_00484e80(0);
        if ((cVar3 == '\0') && ((cVar2 == '\0' || (!bVar1)))) {
          if (iVar5 != 0) {
            FUN_004853b0(0,0,0);
            FUN_004dc8f0(0);
          }
          FUN_004853b0(1,0,0);
          FUN_004e1c70(*(undefined4 *)(iVar4 + 8));
          return;
        }
      }
    }
  }
  return;
}



void FUN_00603320(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *in_ECX;
  undefined4 uVar6;
  
  iVar3 = (**(code **)(*in_ECX + 0x164))();
  if (iVar3 == 0) {
    cVar1 = '\0';
  }
  else {
    uVar6 = 1;
    (**(code **)(*in_ECX + 0x164))(1);
    uVar6 = FUN_00470720(uVar6);
    cVar1 = FUN_0051ac80(uVar6);
  }
  cVar2 = (**(code **)(*in_ECX + 0x334))(1);
  if ((((cVar2 == '\0') && (in_ECX[0x2c] != 5)) && (in_ECX[0x2c] != 3)) &&
     ((in_ECX[0x16] != 0 && (cVar1 == '\0')))) {
    iVar3 = (**(code **)(*in_ECX + 0x284))(8);
    iVar4 = FUN_005f1910(8);
    if (iVar3 < iVar4) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x45c))();
      if (iVar3 != 0) {
        FUN_005e91e0(0x1d,0x45484552,0);
        iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x50))();
        if (iVar3 != 0) {
          cVar1 = FUN_00699190(iVar3,in_ECX + 0x1a,0);
          if (cVar1 != '\0') {
            (**(code **)(*(int *)in_ECX[0x16] + 0x458))(1);
          }
          (**(code **)(*(int *)in_ECX[0x16] + 0x54))(0);
          return;
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x458))(0);
      }
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x464))();
      if (iVar3 != 0) {
        FUN_005e02e0(0);
        iVar3 = FUN_00485e00();
        if ((iVar3 != 0) && (piVar5 = (int *)FUN_004865f0(0x45484552), piVar5 != (int *)0x0)) {
          uVar6 = 0;
          if ((undefined4 *)*piVar5 != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)*piVar5;
          }
          FUN_005faea0(piVar5[2],1,uVar6,1,0);
          (**(code **)(*(int *)in_ECX[0x16] + 0x460))(1);
          return;
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x460))(0);
      }
    }
  }
  return;
}



void FUN_006034b0(void)

{
  char cVar1;
  int *in_ECX;
  undefined4 unaff_ESI;
  float10 fVar2;
  undefined4 unaff_retaddr;
  
  cVar1 = (**(code **)(*in_ECX + 0x198))(0);
  if (cVar1 == '\0') {
    fVar2 = (float10)(**(code **)(*in_ECX + 0x288))(8);
    if (fVar2 < (float10)1.0) {
      FUN_006005f0(unaff_ESI,unaff_retaddr);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00603500(void)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  float *pfVar7;
  int *piVar8;
  int *in_ECX;
  int *unaff_EBX;
  float10 fVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  undefined8 uStack_4c;
  undefined4 uStack_44;
  undefined4 uStack_3c;
  int *piStack_38;
  int *apiStack_34 [2];
  undefined1 auStack_2c [12];
  undefined1 auStack_20 [32];
  
  if ((int *)in_ECX[0x16] == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  if (iVar3 != 0) {
    return;
  }
  piVar8 = (int *)in_ECX[0x16];
  if (piVar8 == (int *)0x0) {
    return;
  }
  if (piVar8 == (int *)0x0) {
    return;
  }
  iVar3 = (**(code **)(*piVar8 + 0xe8))();
  if (iVar3 == 0) {
    return;
  }
  if ((int *)in_ECX[0xf] == (int *)0x0) {
    return;
  }
  piStack_38 = (int *)(**(code **)(*(int *)in_ECX[0xf] + 0x58))("Bip01 NonAccum");
  apiStack_34[0] = (int *)(**(code **)(*piStack_38 + 0x58))("Bip01 Spine2");
  uStack_3c = (**(code **)(*apiStack_34[0] + 0x58))("Bip01 Head");
  if ((~in_ECX[0x31] & 7U) != 0) {
    *(undefined1 *)(in_ECX + 0x38) = 0;
    if ((int *)in_ECX[0x16] == (int *)0x0) {
      uRam000001d5 = 0;
      return;
    }
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
    *(undefined1 *)(iVar3 + 0x1d5) = 0;
    return;
  }
  if ((char)in_ECX[0x38] == '\0') {
    iVar3 = FUN_005e12b0();
    *(undefined1 *)(iVar3 + 0x1d4) = 1;
    *(undefined1 *)(in_ECX + 0x38) = 1;
  }
  fVar9 = (float10)FUN_004d7e90(in_ECX,0);
  if ((float10)_DAT_00b36ab8 < fVar9) {
    iVar3 = FUN_005e12b0();
    *(undefined1 *)(iVar3 + 0x1d5) = 0;
    return;
  }
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
  if (iVar3 != 0) {
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
    cVar2 = (**(code **)(*piVar4 + 0x188))();
    if (cVar2 != '\0') {
      piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
      iVar3 = (**(code **)(*piVar4 + 0x154))();
      if (iVar3 == 0) {
        (**(code **)(*(int *)in_ECX[0x16] + 0x4b4))();
      }
    }
  }
  in_ECX[0x40] = (int)((float)in_ECX[0x40] - _DAT_00b33e9c);
  in_ECX[0x37] = (int)((float)in_ECX[0x37] - _DAT_00b33e9c);
  if ((float)in_ECX[0x40] <= 0.0) {
    fVar9 = (float10)FUN_0047e060(0x3e4ccccd,0x3ecccccd);
    in_ECX[0x40] = (int)(float)(fVar9 + (float10)(float)in_ECX[0x40]);
    cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x4bc))();
    if (cVar2 != '\0') {
      if ((float)in_ECX[0x37] < 0.0) {
        in_ECX[0x37] = 0;
      }
      piVar4 = (int *)FUN_00601670();
      iVar3 = FUN_005e0380();
      if (((iVar3 != 0) &&
          (((iVar3 = FUN_005e0380(), *(char *)(iVar3 + 0x20) == '\x06' ||
            (iVar3 = FUN_005e0380(), *(char *)(iVar3 + 0x20) == '\t')) &&
           (iVar3 = FUN_005e0380(), iVar3 != 0)))) &&
         (iVar3 = FUN_005e0380(), *(int *)(iVar3 + 0x28) != 0)) {
        FUN_005e0380();
        piVar5 = (int *)FUN_00569e60();
        if (piVar5 != (int *)0x0) {
          fVar15 = 100.0;
          if (piVar5 == DAT_00b333c4) {
            fVar15 = 500.0;
          }
          fVar9 = (float10)FUN_004d7e90(piVar5,0);
          if (fVar9 < (float10)fVar15) {
            piVar4 = piVar5;
          }
        }
      }
      piVar5 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
      if (piVar4 != piVar5) {
        (**(code **)(*(int *)in_ECX[0x16] + 0x480))(piVar4);
        fVar9 = (float10)FUN_0047e060(0x40800000,0x41200000);
        in_ECX[0x37] = (int)(float)fVar9;
      }
    }
  }
  cVar2 = FUN_005f7900(0);
  if (cVar2 != '\0') {
    uVar13 = 1;
    (**(code **)(*piVar8 + 0x4d8))(1);
    piVar4 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
    uVar6 = (**(code **)(*in_ECX + 0x174))();
    (**(code **)(*piVar4 + 0x174))(&piStack_38,uVar6);
    FUN_004121a0(uVar6,uVar13);
    FUN_00683cb0(apiStack_34);
    unaff_EBX = (int *)0x0;
    fVar9 = (float10)FUN_00683d80();
    iVar3 = _DAT_00b36c10;
    uStack_4c._0_4_ = (float)fVar9;
    cVar2 = FUN_005e0590();
    if (cVar2 != '\0') {
      iVar3 = _DAT_00b36c18;
    }
    uStack_4c._0_4_ = ABS((float)uStack_4c);
    if ((float)uStack_4c <= (float)iVar3 * 0.017453292 * 0.8) {
      FUN_005e05f0(0x30);
    }
    else {
      FUN_00685530();
    }
  }
  piVar4 = (int *)FUN_005e12b0();
  uVar13 = 0;
  uVar6 = (**(code **)(*piVar8 + 0x4cc))(0);
  fVar9 = (float10)FUN_004d7e90(uVar6,uVar13);
  uStack_4c = (double)fVar9;
  pfVar7 = (float *)FUN_00403c00();
  bVar1 = *pfVar7 < (float)uStack_4c;
  if (piVar4 == (int *)0x0) goto LAB_00603a1c;
  cVar2 = (**(code **)(*in_ECX + 0x334))(1);
  if (cVar2 == '\0') {
    if (DAT_00b1206c == '\0') goto LAB_00603a03;
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x33c))(0);
      if ((iVar3 == 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x1dc))(), iVar3 == 0)) {
        if (bVar1) {
          fVar9 = (float10)50.0;
        }
        else {
          fVar9 = (float10)FUN_005e0dd0();
        }
        (**(code **)(*piVar4 + 0xd0))((float)fVar9,0);
      }
      goto LAB_00603a1c;
    }
    if (bVar1) {
      fVar9 = (float10)50.0;
    }
    else {
      fVar9 = (float10)FUN_005e0dd0();
    }
    fVar15 = (float)fVar9;
  }
  else {
    if (DAT_00b1206c == '\0') {
LAB_00603a03:
      (**(code **)(*piVar4 + 0x78))(0,1,0,0,0,0);
      goto LAB_00603a1c;
    }
    if (bVar1) {
      fVar15 = 50.0;
    }
    else {
      fVar9 = (float10)FUN_005e0dd0();
      fVar15 = (float)fVar9;
    }
  }
  (**(code **)(*piVar4 + 0xd0))(fVar15,0);
LAB_00603a1c:
  bVar1 = false;
  if ((in_ECX[0x2c] != 0) && (in_ECX[0x2c] != 5)) {
    bVar1 = true;
  }
  if ((in_ECX[0x16] != 0) && (iVar3 = (**(code **)(*in_ECX + 0x168))(), iVar3 != 0)) {
    uVar6 = 0;
    (**(code **)(*in_ECX + 0x168))(0);
    uVar6 = FUN_00477ec0(uVar6);
    uVar6 = (**(code **)(*in_ECX + 0x154))(uVar6);
    iVar3 = FUN_0047f750(uVar6);
    if (0x59 < iVar3) {
      bVar1 = true;
    }
    uVar6 = 3;
    (**(code **)(*in_ECX + 0x164))(3);
    uVar6 = FUN_00470720(uVar6);
    cVar2 = FUN_0051ac80(uVar6);
    if (cVar2 != '\0') {
      bVar1 = true;
    }
  }
  iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
  uVar6 = DAT_00b3f9b0;
  uVar13 = DAT_00b3f9a8;
  uVar14 = DAT_00b3f9ac;
  if ((iVar3 != 0) && (!bVar1)) {
    piVar8 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0x4cc))();
    cVar2 = FUN_005e0550();
    bVar1 = false;
    if ((cVar2 != '\0') && (piVar8 == DAT_00b333c4)) {
      uVar14 = 0;
      uVar13 = 0;
      uVar6 = FUN_006605a0(0);
      iVar3 = FUN_005f6540(0,DAT_00b333c4,&stack0xffffffa7,uVar6,uVar13,uVar14);
      if (iVar3 < 1) {
        bVar1 = true;
      }
    }
    uVar6 = (**(code **)(*in_ECX + 0x11c))(apiStack_34);
    puVar11 = auStack_2c;
    puVar12 = auStack_20;
    (**(code **)(*piVar8 + 0x11c))(puVar12,puVar11,uVar6);
    iVar3 = FUN_004121a0(puVar12,puVar11);
    unaff_EBX = *(int **)(iVar3 + 4);
    uStack_4c = (double)CONCAT44(uStack_4c._4_4_,*(undefined4 *)(iVar3 + 8));
    iVar3 = (**(code **)(*in_ECX + 0x380))();
    if (((iVar3 != 0) && (cVar2 = (**(code **)(*piVar8 + 400))(), cVar2 != '\0')) &&
       (iVar3 = (**(code **)(*piVar8 + 0x380))(), iVar3 != 0)) {
      uStack_44 = 0;
    }
    if (bVar1) {
      uStack_44 = 0;
    }
    FUN_0043f350();
    uVar6 = uStack_44;
    uVar13 = (float)uStack_4c;
    uVar14 = uStack_4c._4_4_;
  }
  (**(code **)(*piVar4 + 0x84))(uVar13,uVar14,uVar6,0);
  cVar2 = FUN_005e05b0();
  FUN_0054a0a0(cVar2 == '\0');
  (**(code **)(**(int **)(unaff_EBX[7] + 0x1c) + 0x74))();
  (**(code **)(*(int *)unaff_EBX[7] + 0x74))();
  (**(code **)(*unaff_EBX + 0x74))();
  iVar3 = FUN_005e12b0();
  if (iVar3 != 0) {
    uVar6 = (float)uStack_4c;
    fVar15 = _DAT_00b33e9c;
    uVar13 = (float)uStack_4c;
    FUN_005e12b0(_DAT_00b33e9c,(float)uStack_4c,unaff_EBX);
    FUN_0054b010(fVar15,uVar13,unaff_EBX);
    iVar3 = FUN_005e12b0();
    if ((*(char *)(iVar3 + 0x1d5) != '\0') && (DAT_00b148f4 == '\0')) {
      puVar11 = &stack0xffffffb0;
      puVar10 = &uStack_4c;
      fVar15 = _DAT_00b33e9c;
      FUN_005e12b0(_DAT_00b33e9c,uVar6,puVar10,puVar11);
      FUN_0054b3e0(fVar15,uVar6,puVar10,puVar11);
      FUN_0047caf0((float)uStack_4c);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00603ca0(float param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  int *piVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int **ppiVar17;
  int *in_ECX;
  undefined4 unaff_EBX;
  float *pfVar18;
  float unaff_EBP;
  undefined4 unaff_ESI;
  float *pfVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int *unaff_FS_OFFSET;
  bool bVar22;
  float10 fVar23;
  float10 fVar24;
  float unaff_retaddr;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  char *pcVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  undefined2 uVar36;
  undefined8 uStack_d4;
  float fStack_cc;
  undefined8 uStack_c8;
  undefined4 uStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  uint uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float afStack_88 [9];
  undefined1 auStack_64 [36];
  undefined1 auStack_40 [40];
  undefined1 auStack_18 [12];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar36 = (undefined2)((uint)unaff_ESI >> 8);
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c2c60;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffff1c;
  *unaff_FS_OFFSET = (int)&local_c;
  uStack_d4 = (double)(ulonglong)(uint)(float)uStack_d4;
  iVar9 = (**(code **)(*in_ECX + 0x154))(uVar8);
  uStack_c8 = (double)CONCAT44(iVar9,(float)uStack_c8);
  if ((int *)in_ECX[0x16] == (int *)0x0) {
    piStack_a8 = (int *)0x0;
  }
  else {
    piStack_a8 = (int *)(**(code **)(*(int *)in_ECX[0x16] + 0xe8))();
  }
  piVar11 = piStack_a8;
  piStack_ac = (int *)FUN_0065a2c0();
  uVar8 = (**(code **)(*in_ECX + 0x164))();
  if (((iVar9 == 0) || (uStack_a4 = uVar8, iVar9 = FUN_006ecc80(), iVar9 == 0)) ||
     (iVar9 = FUN_006ecc80(), *(char *)(iVar9 + 0x26) != '\x06')) goto LAB_00605740;
  if (900.0 <= param_1) {
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x474))(1);
    }
    goto LAB_00605740;
  }
  if (in_ECX == DAT_00b333c4) {
    uStack_d4._0_2_ = CONCAT11(1,(byte)uStack_d4);
    if ((char)DAT_00b333c4[0x162] != '\0') goto LAB_00603d94;
  }
  else {
LAB_00603d94:
    uStack_d4._0_2_ = (ushort)(byte)uStack_d4;
  }
  iVar9 = FUN_0065a2c0();
  if (iVar9 != 0) {
    uStack_d4._0_3_ = (uint3)(ushort)uStack_d4;
    if (uVar8 != 0) {
      uVar7 = FUN_00470720(3);
      cVar2 = FUN_0051acc0(uVar7);
      if ((cVar2 == '\0') || (iVar9 = FUN_0051aa00(uVar7), 0x19 < iVar9)) {
        uVar7 = FUN_00470720(1);
        cVar2 = FUN_0051acc0(uVar7);
        if ((cVar2 == '\0') || (iVar9 = FUN_0051aa00(uVar7), 0x19 < iVar9)) goto LAB_00603e00;
      }
      uStack_d4._0_3_ = CONCAT12(1,(ushort)uStack_d4);
    }
LAB_00603e00:
    FUN_0065a2c0();
    FUN_005e14e0((int)&uStack_d4 + 2);
  }
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x2f4))();
    (**(code **)(*(int *)in_ECX[0x16] + 0x440))();
    if (DAT_00b14e90 != '\0') {
      (**(code **)(*(int *)in_ECX[0x16] + 0x60))();
    }
    iVar9 = (**(code **)(*in_ECX + 0x18c))();
    if (((iVar9 == 9) || (in_ECX[0x2c] == 3)) &&
       ((piVar11 != (int *)0x0 && (cVar2 = (**(code **)(*piVar11 + 0x98))(), cVar2 == '\0')))) {
      (**(code **)(*piVar11 + 0x9c))(1,0);
    }
    if ((in_ECX[0x2c] == 6) &&
       ((iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x2e4))(), iVar9 == 3 ||
        (iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x2e4))(), iVar9 == 1)))) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x98))();
      fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x9c))();
      if (fVar23 < (float10)0.0 != (fVar23 == (float10)0.0)) {
        FUN_005e6680(0);
        iVar9 = FUN_005f1910(8);
        uStack_c0 = (float)iVar9;
        pfVar10 = (float *)FUN_00403c00();
        uStack_c0 = *pfVar10 * uStack_c0;
        fVar23 = (float10)(**(code **)(*in_ECX + 0x288))(8);
        fStack_bc = (float)fVar23;
        fVar35 = uStack_c8._4_4_ - fStack_bc;
        uStack_c8 = (double)CONCAT44(fVar35,(float)uStack_c8);
        (**(code **)(*in_ECX + 0x2a4))(8,fVar35,0);
      }
    }
  }
  if (in_ECX != DAT_00b333c4) {
    iVar9 = 0;
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x184))();
    }
    cVar2 = (**(code **)(*in_ECX + 0x334))(1);
    if ((cVar2 == '\0') &&
       (((iVar9 == 0 || (*(char *)(iVar9 + 0x20) != '\b')) &&
        (cVar2 = FUN_005e5670(), cVar2 != '\0')))) {
      FUN_005f4ae0(0);
    }
    if ((*(char *)((int)in_ECX + 0xc9) == '\0') &&
       ((iVar9 == 0 || ((*(uint *)(iVar9 + 0x1c) >> 0x11 & 1) == 0)))) {
      cVar2 = FUN_005e0550();
      if (cVar2 != '\0') {
        FUN_005e05f0(0x400);
      }
    }
    else {
      FUN_005e0610(0x400);
    }
  }
  iVar9 = (**(code **)(*in_ECX + 0x27c))();
  if (iVar9 != 2) {
    FUN_005e0ce0(in_ECX);
  }
  cVar2 = FUN_005e1030();
  if (cVar2 == '\0') {
    fVar35 = 8.839337e-39;
    iVar9 = (**(code **)(*in_ECX + 0x388))();
    if (iVar9 != 0) {
      DAT_00b3cbd0 = 1;
    }
  }
  else {
    piVar11 = (int *)(**(code **)(*in_ECX + 0x380))();
    iVar9 = *in_ECX;
    fVar23 = (float10)(**(code **)(*piVar11 + 0x1e0))();
    fVar35 = (float)fVar23;
    (**(code **)(iVar9 + 0x1e8))();
    piVar11 = (int *)(**(code **)(*in_ECX + 0x380))();
    puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
    FUN_004d8a30(*puVar12,puVar12[1],puVar12[2]);
  }
  cVar2 = (char)((uint)unaff_EBX >> 8);
  iVar9 = in_ECX[0xb];
  iVar13 = in_ECX[0xc];
  if (cVar2 == '\0') {
    fStack_cc = (float)in_ECX[0xd];
    fVar23 = (float10)FUN_0065abb0();
    uStack_c8 = (double)CONCAT44((float)fVar23,(float)uStack_c8);
    cVar3 = FUN_005e1030();
    if (cVar3 != '\0') {
      uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffff);
      fStack_cc = DAT_00b3f9b0;
      iVar9 = DAT_00b3f9a8;
      iVar13 = DAT_00b3f9ac;
    }
    if (DAT_00b3baa8 == '\0') {
      iVar14 = (**(code **)(*in_ECX + 0x18c))();
      if (((iVar14 == 0) && (cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 == '\0')) &&
         ((cVar3 = (**(code **)(*in_ECX + 0x19c))(), cVar3 == '\0' &&
          (cVar3 = FUN_005e1030(), cVar3 == '\0')))) {
        pfVar10 = (float *)FUN_00403c00();
        fStack_cc = *pfVar10 + fStack_cc;
      }
      *(int *)((int)(float)uStack_c8 + 0x54) = iVar9;
      *(int *)((int)(float)uStack_c8 + 0x58) = iVar13;
      *(float *)((int)(float)uStack_c8 + 0x5c) = fStack_cc;
    }
    FUN_0070fdd0(uStack_c8._4_4_);
    if ((fStack_b0 != 0.0) && (*(float *)((int)fStack_b0 + 0x32c) != 0.0)) {
      FUN_0070fd30(*(undefined4 *)((int)fStack_b0 + 0x32c));
      pfVar10 = (float *)FUN_007100a0(auStack_40,auStack_64);
      pfVar18 = afStack_88;
      for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
        *pfVar18 = *pfVar10;
        pfVar10 = pfVar10 + 1;
        pfVar18 = pfVar18 + 1;
      }
    }
    puVar12 = (undefined4 *)FUN_004d7c50(auStack_40,afStack_88,0);
    puVar20 = (undefined4 *)((int)(float)uStack_c8 + 0x30);
    for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar20 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar20 = puVar20 + 1;
    }
  }
  else {
    fStack_cc = (float)in_ECX[0xd];
    cVar3 = FUN_005e1030();
    if (cVar3 != '\0') {
      fStack_cc = DAT_00b3f9b0;
      iVar9 = DAT_00b3f9a8;
      iVar13 = DAT_00b3f9ac;
    }
    fStack_bc = (float)DAT_00b333c4[0x175];
    *(int *)((int)(float)uStack_c8 + 0x54) = iVar9;
    *(int *)((int)(float)uStack_c8 + 0x58) = iVar13;
    fStack_cc = fStack_bc + fStack_cc;
    *(float *)((int)(float)uStack_c8 + 0x5c) = fStack_cc;
    FUN_00660130();
  }
  piVar11 = (int *)FUN_004d7fc0();
  if ((piVar11 != (int *)0x0) && (iVar9 = *piVar11, iVar9 != 0)) {
    FUN_007b4280(0,iVar9);
    FUN_007c6ff0(iVar9);
  }
  if (uVar8 != 0) {
    FUN_00471c00(in_ECX);
    if ((cVar2 == '\0') && (cVar3 = FUN_005e1030(), cVar3 != '\0')) {
      (**(code **)(*in_ECX + 0x380))();
      iVar9 = FUN_0065a2c0();
      if (iVar9 != 0) {
        iVar13 = (**(code **)(**(int **)(*(int *)(uVar8 + 0x98) + 0x7c) + 0x4c))("Bip01 Spine");
        iVar14 = (**(code **)(**(int **)(*(int *)(uVar8 + 0x98) + 0x7c) + 0x4c))("Bip01 Spine1");
        uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,iVar14);
        if ((iVar13 != 0) && (iVar14 != 0)) {
          fStack_bc = *(float *)(iVar9 + 0x32c) * 0.5;
          FUN_0070fdd0(fStack_bc);
          pfVar10 = (float *)(iVar13 + 0x30);
          pfVar18 = afStack_88;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar18 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar18 = pfVar18 + 1;
          }
          pfVar10 = (float *)FUN_007100a0(auStack_40,auStack_64);
          pfVar18 = pfVar10;
          pfVar19 = afStack_88;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar19 = *pfVar18;
            pfVar18 = pfVar18 + 1;
            pfVar19 = pfVar19 + 1;
          }
          pfVar18 = (float *)(iVar13 + 0x30);
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar18 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar18 = pfVar18 + 1;
          }
          pfVar18 = (float *)((int)(float)uStack_c8 + 0x30);
          pfVar10 = pfVar18;
          pfVar19 = afStack_88;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar19 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar19 = pfVar19 + 1;
          }
          pfVar10 = (float *)FUN_007100a0(auStack_40,auStack_64);
          pfVar19 = pfVar10;
          pfVar21 = afStack_88;
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar21 = *pfVar19;
            pfVar19 = pfVar19 + 1;
            pfVar21 = pfVar21 + 1;
          }
          for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
            *pfVar18 = *pfVar10;
            pfVar10 = pfVar10 + 1;
            pfVar18 = pfVar18 + 1;
          }
        }
      }
    }
    if ((in_ECX[0x2c] != 3) &&
       ((((cVar3 = (**(code **)(*in_ECX + 0x198))(0), cVar3 == '\0' || (in_ECX[0x2c] == 1)) &&
         (cVar3 = FUN_005e0f30(), cVar3 == '\0')) &&
        ((cVar2 == '\0' && (cVar3 = (**(code **)(*in_ECX + 0x19c))(), cVar3 == '\0')))))) {
      FUN_00603500(_DAT_00b33e9c);
    }
    FUN_00471f20();
    uVar15 = (**(code **)(*in_ECX + 0x18c))();
    switch(uVar15) {
    case 3:
    case 5:
    case 8:
    case 10:
      uStack_d4 = (double)CONCAT44(DAT_00b3f9ac,DAT_00b3f9a8);
      fStack_cc = DAT_00b3f9b0;
      fVar23 = (float10)(**(code **)(*in_ECX + 0xec))();
      uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,(float)fVar23);
      if (((float)fVar23 != 1.0) &&
         (FUN_004723a0(&uStack_d4,in_ECX,(uint)in_ECX[2] >> 4 & 0xffffff01,0), fStack_cc != 0.0)) {
        fStack_bc = fStack_cc - (float)uStack_c8 * fStack_cc;
        iVar9 = (**(code **)(*in_ECX + 0x174))();
        fStack_bc = *(float *)(iVar9 + 8) - fStack_bc;
        FUN_004d8a60(fStack_bc);
      }
    }
  }
  DAT_00b3cbd0 = 0;
  if (cVar2 == '\0') {
    if (((fStack_b0 != 0.0) && (cVar2 = FUN_00578f60(), cVar2 == '\0')) &&
       (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')) {
      uVar33 = 0x3c23d70a;
      uVar15 = FUN_006ecc80(0x3c23d70a);
      piVar11 = in_ECX + 0xb;
      cVar2 = FUN_005e06c0(piVar11,uVar15,uVar33);
      uVar33 = 0x3f333333;
      uVar15 = FUN_006ecc80(0x3f333333);
      cVar3 = FUN_005e06c0(piVar11,uVar15,uVar33);
      uVar33 = 0x3f600000;
      uVar15 = FUN_006ecc80(0x3f600000);
      FUN_005e06c0(piVar11,uVar15,uVar33);
      uVar15 = (**(code **)(*in_ECX + 0x284))(5);
      fVar23 = (float10)FUN_00548960(uVar15);
      fStack_cc = (float)fVar23;
      if ((char)in_ECX[0x36] == '\0') {
        uStack_c8 = (double)CONCAT17(1,(undefined7)uStack_c8);
        if (cVar2 == '\0') goto LAB_00604577;
      }
      else {
LAB_00604577:
        uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffffffffff);
      }
      pcVar1 = *(code **)(*in_ECX + 0x198);
      *(char *)(in_ECX + 0x36) = cVar2;
      cVar4 = (*pcVar1)(0);
      if (cVar4 == '\0') {
        cVar4 = FUN_005ea680();
        cVar5 = (char)((uint)unaff_ESI >> 8);
        if (cVar4 != '\0') {
          if ((cVar5 == '\0') ||
             (uVar8 = (**(code **)(*(int *)in_ECX[0x16] + 0x2c0))(), (uVar8 & 0x800) == 0)) {
            cVar5 = '\x01';
          }
          else {
            cVar5 = '\0';
          }
        }
        if (((in_ECX == DAT_00b333c4) && (cVar4 = FUN_0065d820(), cVar4 != '\0')) || (cVar5 != '\0')
           ) {
          (**(code **)(*(int *)in_ECX[0x16] + 0x1f0))(uStack_d4._4_4_);
        }
        else {
          fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 500))();
          fStack_cc = (float)fVar23;
          iVar9 = (**(code **)(*in_ECX + 0x284))(0x37);
          if (iVar9 == 0) {
            fVar31 = uStack_d4._4_4_ - _DAT_00b33e9c;
          }
          else {
            fVar31 = _DAT_00b33e9c + uStack_d4._4_4_;
          }
          uStack_d4 = (double)CONCAT44(fVar31,(float)uStack_d4);
          if (0.0 <= fVar31) {
            if ((float)uStack_d4 < fVar31) {
              uStack_d4 = (double)CONCAT44((float)uStack_d4,(float)uStack_d4);
            }
            fVar23 = (float10)FUN_005e3920();
            uVar36 = (undefined2)((uint)(float)fVar23 >> 8);
            FUN_006ecc80();
            fVar23 = (float10)FUN_004cace0();
            uStack_c8 = (double)fVar23;
            iVar9 = (**(code **)(*in_ECX + 0x174))();
            fVar31 = (float)uStack_d4 - *(float *)(iVar9 + 8);
            uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,fVar31);
            if (((unaff_EBP < fVar31 / fVar35 + 1.0) && (cVar4 = FUN_005e1e90(), cVar4 == '\0')) &&
               (cVar4 = FUN_005e6fe0(), cVar4 == '\0')) {
              FUN_005f5730();
            }
          }
          else {
            iVar9 = *in_ECX;
            uVar30 = 0;
            uStack_c8._0_4_ = _DAT_00b33e9c;
            uVar33 = 0;
            uVar15 = FUN_005f1910(8);
            fVar24 = (float10)FUN_00548980(uVar15,uVar33,uVar30);
            fVar23 = (float10)(float)uStack_c8;
            uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,(float)(fVar24 * fVar23));
            (**(code **)(iVar9 + 0x220))((float)(fVar24 * fVar23));
            iVar9 = FUN_0065a970("NPCHumanDrowning",0,0x102,0);
            if (iVar9 != 0) {
              FUN_006b73e0();
              FUN_00401f20(iVar9);
            }
            FUN_005e70f0(1,1);
            unaff_EBP = 0.0;
          }
          (**(code **)(*(int *)in_ECX[0x16] + 0x1f0))(unaff_EBP);
        }
      }
      cVar4 = (char)((ushort)uVar36 >> 8);
      if (in_ECX == DAT_00b333c4) {
        iVar9 = FUN_00589b70(0x415);
        if ((cVar4 != '\0') && (iVar9 == 0)) {
          iVar9 = FUN_005965c0();
        }
        if ((char)uVar36 != '\0') {
          if (DAT_00b3b77d == '\0') {
            FUN_005964e0();
            DAT_00b3b77d = '\x01';
          }
LAB_0060484a:
          if ((iVar9 != 0) && (DAT_00b3b77d != '\0')) {
            fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 500))();
            FUN_00596550((float)(fVar23 / (float10)uStack_d4._4_4_));
          }
          goto LAB_0060487d;
        }
        if (iVar9 != 0) {
          if (cVar4 != '\0') {
            if (DAT_00b3b77d != '\0') {
              fVar23 = (float10)FUN_00596470();
              if ((float)fVar23 < 0.01) {
                iVar13 = FUN_005e1df0();
                if (iVar13 == 0) {
                  pcVar28 = "NPCHumanGaspMale";
                }
                else {
                  pcVar28 = "NPCHumanGaspFemale";
                }
                iVar13 = FUN_0065a970(pcVar28,0,0x102,1);
                if (iVar13 != 0) {
                  FUN_006b73e0();
                  FUN_00401f20(iVar13);
                }
              }
              FUN_005964b0();
              DAT_00b3b77d = '\0';
            }
            goto LAB_0060484a;
          }
          puVar12 = (undefined4 *)FUN_005898f0();
          if (puVar12 != (undefined4 *)0x0) {
            (**(code **)*puVar12)(1);
          }
          DAT_00b3b77d = '\0';
        }
LAB_00604884:
        iVar9 = (**(code **)(*in_ECX + 0x284))(0x38);
        if (iVar9 == 0) goto LAB_00604897;
LAB_006048a2:
        uVar15 = 0x3dcccccd;
      }
      else {
LAB_0060487d:
        if ((char)uVar36 == '\0') goto LAB_00604884;
LAB_00604897:
        cVar5 = FUN_005e1c70();
        if (cVar5 != '\0') goto LAB_006048a2;
        uVar15 = 0x3fcccccd;
      }
      fVar35 = fStack_b8;
      *(undefined4 *)((int)fStack_b8 + 0x338) = uVar15;
      iVar9 = (**(code **)(*in_ECX + 0x284))(0x38);
      if ((iVar9 == 0) && (cVar5 = FUN_005e1c70(), cVar5 == '\0')) {
        if (cVar3 == '\0') {
          cVar3 = FUN_005e0530();
          if ((cVar3 == '\0') && (iVar9 = FUN_0088d370(), iVar9 != 5)) {
            if (((uStack_c0._3_1_ != '\0') && (0.5 < *(float *)((int)fVar35 + 0x324))) &&
               (*(float *)((int)fVar35 + 0x2e8) < -1.0)) {
              fVar35 = *(float *)((int)fVar35 + 0x2e8);
              fStack_b0 = 1.0;
              if (-50.0 < fVar35) {
                fStack_b0 = (fVar35 * -1.0) / 50.0;
              }
              uStack_d4._0_4_ = fVar35;
              fVar23 = (float10)FUN_00985b70();
              fStack_b0 = (float)fVar23;
              uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,fStack_b0);
              if (((*(int *)(DAT_00b33398 + 0x24) != 0) &&
                  (iVar9 = (**(code **)(*in_ECX + 0x154))(), iVar9 != 0)) &&
                 ((iVar9 = FUN_006ade50("CWaterHumanoid",0x102,1), iVar9 != 0 &&
                  (cVar3 = FUN_006b7260(), cVar3 == '\0')))) {
                pfVar10 = (float *)(**(code **)(*in_ECX + 0x174))();
                fStack_b4 = pfVar10[2];
                fStack_b8 = pfVar10[1];
                fVar35 = *pfVar10;
                fStack_bc = fVar35;
                FUN_006b7360(fVar35,fStack_b8,fStack_b4);
                FUN_006b7280(fStack_b0);
                FUN_006b7190(0);
                FUN_006b73e0();
                FUN_00401f20(iVar9);
                iVar9 = FUN_006ecc80();
                if (iVar9 != 0) {
                  FUN_006ecc80();
                  iVar9 = FUN_004cafc0();
                  if (iVar9 != 0) {
                    FUN_006ecc80();
                    piVar11 = (int *)FUN_004cafc0();
                    cVar3 = (**(code **)(*piVar11 + 0x88))();
                    if (cVar3 == '\0') {
                      FUN_006ecc80();
                      FUN_004cace0();
                      FUN_006ecc80();
                      uVar15 = FUN_004c9be0(DAT_00b333c4);
                      uVar33 = 3;
                      FUN_006ecc80(uVar15,3);
                      uVar15 = FUN_00441800(uVar15,uVar33);
                      iVar9 = FUN_00401f00(0x20);
                      uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,iVar9);
                      puStack_8 = (undefined1 *)0x0;
                      if (iVar9 == 0) {
                        uVar15 = 0;
                      }
                      else {
                        puVar12 = (undefined4 *)FUN_00403c00();
                        uVar33 = *puVar12;
                        uVar34 = 1;
                        uVar25 = 0x3f800000;
                        uVar30 = DAT_00b37b38;
                        uVar26 = DAT_00b258dc;
                        uVar27 = DAT_00b258e0;
                        uVar29 = DAT_00b258e4;
                        fVar31 = fStack_b8;
                        fVar32 = fStack_b4;
                        uVar16 = FUN_006ecc80(0x3f800000,uVar15,DAT_00b37b38,DAT_00b258dc,
                                              DAT_00b258e0,DAT_00b258e4,fVar35,fStack_b8,fStack_b4,
                                              uVar33,1);
                        uVar15 = FUN_005713f0(uVar16,uVar25,uVar15,uVar30,uVar26,uVar27,uVar29,
                                              fVar35,fVar31,fVar32,uVar33,uVar34);
                      }
                      puStack_8 = (undefined1 *)0xffffffff;
                      FUN_00678d30(uVar15);
                    }
                  }
                }
              }
            }
          }
          else if ((*(uint *)((int)fVar35 + 500) >> 8 & 1) != 0) {
            FUN_005e05f0(0x800);
            *(undefined4 *)((int)fVar35 + 0x2a0) = 0;
          }
        }
        else {
          iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
          if (iVar9 != 0) {
            iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0xf0))(1);
            FUN_005f2e70(*(undefined4 *)(iVar9 + 8),1,0,0,0,0);
          }
          FUN_005e0610(0x800);
          *(undefined4 *)((int)fVar35 + 0x2a0) = 5;
        }
      }
      else {
        if (cVar3 == '\0') {
          FUN_005e05f0(0x800);
        }
        else {
          FUN_005e0610(0x800);
        }
        iVar9 = FUN_0088d370();
        if ((iVar9 == 5) && (cVar4 == '\0')) {
          *(undefined4 *)((int)fVar35 + 0x2a0) = 0;
        }
        else {
          iVar9 = FUN_0088d370();
          if ((iVar9 != 5) && ((cVar4 != '\0' && (*(float *)((int)fVar35 + 0x2e8) < 1.0)))) {
            *(undefined4 *)((int)fVar35 + 0x2a0) = 5;
          }
        }
        iVar9 = FUN_0088d370();
        if ((iVar9 == 5) && (*(float *)((int)fVar35 + 0x300) < 0.01)) {
          if (cVar2 == '\0') goto LAB_00604e12;
          if (cVar3 == '\0') {
            uStack_d4._0_4_ = *(float *)((int)fVar35 + 0x348);
            iVar9 = FUN_00531e00();
            fVar35 = (*(float *)((int)fVar35 + 0x334) * (float)uStack_d4 * 0.1 +
                     (*(float *)(iVar9 + 8) - (float)uStack_d4)) -
                     (*(float *)((int)fVar35 + 0x318) - 5.0) * 0.14287673;
            uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,fVar35);
            if (0.1 <= fVar35) {
              if (fVar35 <= 0.1) goto LAB_00604d50;
              fStack_cc = -5.0;
            }
            else {
              fStack_cc = 5.0;
            }
            uStack_d4 = 0.0;
            FUN_008907a0(&uStack_d4,0x3f800000);
          }
        }
      }
LAB_00604d50:
      if (((cVar2 != '\0') && (cVar2 = FUN_005e1c70(), cVar2 == '\0')) &&
         ((iVar9 = FUN_006ecc80(), iVar9 != 0 &&
          (((piVar11 = (int *)FUN_004cafc0(), piVar11 != (int *)0x0 &&
            (cVar2 = (**(code **)(*piVar11 + 0x88))(), cVar2 != '\0')) &&
           (iVar9 = (**(code **)(*in_ECX + 0x284))(0x47), iVar9 < 1)))))) {
        fStack_bc = _DAT_00b33e9c;
        uVar15 = (**(code **)(piVar11[6] + 0x10))();
        uStack_d4 = (double)(CONCAT44(uStack_d4._4_4_,uVar15) & 0xffffffff0000ffff);
        fVar35 = (float)(int)(float)uStack_d4 * fStack_bc;
        uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,fVar35);
        if (0.0 < fVar35) {
          (**(code **)(*in_ECX + 0x220))(fVar35,0,0);
          FUN_005e70f0(1,1);
        }
      }
    }
LAB_00604e12:
    uStack_c8 = (double)((ulonglong)uStack_c8 & 0xffffffffffffff00);
    if (in_ECX != DAT_00b333c4) {
      uVar6 = (**(code **)(*in_ECX + 0x334))(1);
      uStack_c8 = (double)CONCAT71(uStack_c8._1_7_,uVar6);
    }
    cVar2 = FUN_005e6cd0(0);
    if (((cVar2 == '\0') && (in_ECX != DAT_00b333c4)) &&
       (iVar9 = (**(code **)(*in_ECX + 0x164))(), iVar9 != 0)) {
      (**(code **)(*in_ECX + 0x164))();
      cVar2 = FUN_00472ea0();
      if ((((cVar2 == '\0') || (in_ECX[0x2c] == 3)) ||
          ((((cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 != '\0' ||
             ((((cVar2 = FUN_005e0f30(), cVar2 != '\0' ||
                (cVar2 = (**(code **)(*in_ECX + 0x19c))(), cVar2 != '\0')) ||
               (cVar2 = FUN_005e0550(), cVar2 != '\0')) ||
              ((cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x244))(), cVar2 != '\0' ||
               (cVar2 = (**(code **)(*DAT_00b333c4 + 0x354))(), cVar2 != '\0')))))) ||
            (cVar2 = FUN_005e32d0(), cVar2 == '\0')) ||
           ((iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x33c))(0), iVar9 != 0 ||
            (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x200))(), cVar2 != '\0')))))) ||
         ((char)DAT_00b333c4[0x180] != '\0')) goto LAB_00605114;
      iVar9 = FUN_005f6540(0,DAT_00b333c4,(int)&uStack_c0 + 3,(float)uStack_c8,0,0);
      if ((((0 < iVar9) && (in_ECX != DAT_00b333c4)) &&
          (piVar11 = (int *)FUN_005eae10(), piVar11 != DAT_00b333c4)) &&
         (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x4c0))(), cVar2 != '\0')) {
        fVar23 = (float10)FUN_004d7e90(in_ECX,0);
        uStack_d4 = (double)fVar23;
        pfVar10 = (float *)FUN_00403c00();
        if (((((((float)uStack_d4 <= *pfVar10) && (cVar2 = FUN_006605a0(0), cVar2 == '\0')) &&
              ((in_ECX[0x16] != 0 &&
               ((iVar9 = *(int *)(in_ECX[0x16] + 8), iVar9 == 0 ||
                ((*(uint *)(iVar9 + 0x1c) >> 0xc & 1) == 0)))))) &&
             (cVar2 = FUN_005e0e80(), cVar2 == '\0')) &&
            (((cVar2 = (**(code **)(*in_ECX + 0x334))(1), cVar2 == '\0' &&
              (cVar2 = FUN_005e6ba0(), cVar2 == '\0')) &&
             ((cVar2 = FUN_005e6b40(), cVar2 == '\0' || (cVar2 = FUN_005e05b0(), cVar2 != '\0'))))))
           && ((((fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x360))(),
                 fVar23 < (float10)0.0 != (fVar23 == (float10)0.0) && (DAT_00b333c4 != (int *)0x0))
                && (iVar9 = FUN_0052ed50(1,0), iVar9 != 0)) &&
               ((iVar9 != -0x28 && (cVar2 = FUN_0046cb60(), cVar2 == '\0')))))) {
          (**(code **)(*(int *)in_ECX[0x16] + 0x484))(DAT_00b333c4);
          in_ECX[0x39] = (int)DAT_00b333c4;
          (**(code **)(*(int *)in_ECX[0x16] + 0x1a4))();
          iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
          if (iVar9 == 0) {
            (**(code **)(*(int *)in_ECX[0x16] + 0x158))();
          }
        }
      }
    }
    else {
LAB_00605114:
      if (((int *)in_ECX[0x16] != (int *)0x0) &&
         (cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x200))(), cVar2 != '\0')) {
        uVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0x34c))();
        fStack_bc = (float)CONCAT31(fStack_bc._1_3_,uVar6);
        uStack_d4 = (double)CONCAT71(uStack_d4._1_7_,DAT_00b1490c);
        (**(code **)(*(int *)in_ECX[0x16] + 0x1a4))();
      }
    }
    cVar2 = (**(code **)(*in_ECX + 0x1f8))();
    if ((cVar2 == '\0') || (piStack_a8 == (int *)0x0)) {
      cVar2 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar2 != '\0') {
        fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x360))();
        if (fVar23 == (float10)3.4028234663852886e+38) {
          (**(code **)(*(int *)in_ECX[0x16] + 0x364))(0);
        }
        iVar9 = *(int *)in_ECX[0x16];
        uStack_d4._0_4_ = _DAT_00b33e9c;
        fVar24 = (float10)(**(code **)(iVar9 + 0x360))();
        fVar23 = (float10)(float)uStack_d4;
        uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,(float)(fVar24 - fVar23));
        (**(code **)(iVar9 + 0x364))((float)(fVar24 - fVar23));
      }
    }
    else {
      bVar22 = true;
      uVar15 = FUN_00470720(0);
      iVar9 = FUN_0051aa00(uVar15);
      fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x360))();
      if (fVar23 != (float10)3.4028234663852886e+38) {
        fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x360))();
        if (fVar23 < (float10)0.0 == (fVar23 == (float10)0.0)) {
          iVar13 = *(int *)in_ECX[0x16];
          uStack_d4._0_4_ = _DAT_00b33e9c;
          fVar24 = (float10)(**(code **)(iVar13 + 0x360))();
          fVar23 = (float10)(float)uStack_d4;
          uStack_d4 = (double)CONCAT44(uStack_d4._4_4_,(float)(fVar24 - fVar23));
          (**(code **)(iVar13 + 0x364))((float)(fVar24 - fVar23));
        }
        else {
          FUN_005e9e70();
        }
      }
      if (iVar9 != 0x20) {
        fVar23 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x28))();
        fStack_bc = (float)fVar23;
        fVar23 = (float10)FUN_00402bd0();
        fVar35 = (float)fVar23;
        if (fStack_bc <= fVar35) {
          fVar35 = fVar35 - fStack_bc;
        }
        else {
          fVar35 = (fStack_bc + 23.0) - fVar35;
        }
        uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,fVar35);
        uStack_d4 = (double)fVar35;
        fVar23 = (float10)FUN_004029d0();
        bVar22 = true;
        if (fVar23 * (float10)0.0024999999441206455 <= (float10)uStack_d4) {
          bVar22 = false;
        }
      }
      piVar11 = piStack_a8;
      if ((((int *)piStack_a8[2] != (int *)0x0) &&
          (iVar9 = (**(code **)(*(int *)piStack_a8[2] + 8))(), iVar9 != 0)) &&
         (fVar23 = (float10)FUN_0088fa30(iVar9), fVar23 < (float10)0.0 != (fVar23 == (float10)0.0)))
      {
        uVar33 = 0;
        uVar15 = 1;
        if (in_ECX == DAT_00b333c4) {
          FUN_0065d750(0);
          FUN_00475440(uVar15,uVar33);
          uVar33 = 0;
          uVar15 = 5;
          FUN_0065d750(0);
          FUN_00470fc0(uVar15,uVar33);
          iVar9 = FUN_0065d750(0);
          *(int *)(iVar9 + 0x18) = DAT_00b3f9a8;
          *(int *)(iVar9 + 0x1c) = DAT_00b3f9ac;
          uVar33 = 0;
          uVar15 = 1;
          *(float *)(iVar9 + 0x20) = DAT_00b3f9b0;
          FUN_0065d750(1);
          FUN_00475440(uVar15,uVar33);
          uVar33 = 0;
          uVar15 = 5;
          FUN_0065d750(1);
          FUN_00470fc0(uVar15,uVar33);
          iVar9 = FUN_0065d750(1);
          *(int *)(iVar9 + 0x18) = DAT_00b3f9a8;
          *(int *)(iVar9 + 0x1c) = DAT_00b3f9ac;
          *(float *)(iVar9 + 0x20) = DAT_00b3f9b0;
        }
        else {
          FUN_00475440(1,0);
          FUN_00470fc0(5,0);
          piVar11[6] = DAT_00b3f9a8;
          piVar11[7] = DAT_00b3f9ac;
          piVar11[8] = (int)DAT_00b3f9b0;
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x194))();
      }
      piVar11 = piStack_ac;
      if (((piStack_ac != (int *)0x0) &&
          (cVar2 = (**(code **)(*piStack_ac + 0x98))(), cVar2 == '\0')) &&
         (((int *)in_ECX[0x16] == (int *)0x0 ||
          (iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 0x33c))(0), iVar9 == 0)))) {
        (**(code **)(*piVar11 + 0x9c))(1,0);
      }
      if (!bVar22) {
        bVar22 = true;
        cVar2 = FUN_00470d00(0x20);
        if (((cVar2 != '\0') && (iVar9 = (**(code **)(*in_ECX + 0x27c))(), iVar9 == 0)) &&
           (cVar2 = (**(code **)(*in_ECX + 0x278))(), cVar2 == '\0')) {
          bVar22 = false;
        }
        (**(code **)(*in_ECX + 0x9c))(1);
        if (bVar22) {
          FUN_004dc550();
        }
      }
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x318))();
  }
  cVar2 = (**(code **)(*(int *)in_ECX[0x16] + 0x424))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)in_ECX[0x16] + 0x42c))();
  }
  if ((((DAT_00b333c4 != in_ECX) || (unaff_retaddr == 0.0)) && ((int *)in_ECX[0x16] != (int *)0x0))
     && (iVar9 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar9 == 0)) {
    FUN_00633250(in_ECX);
  }
  FUN_005f12d0();
  bVar22 = (int *)in_ECX[0x16] == (int *)0x0;
  if (bVar22) {
    piStack_ac = (int *)0x0;
    ppiVar17 = &piStack_ac;
  }
  else {
    ppiVar17 = (int **)(**(code **)(*(int *)in_ECX[0x16] + 0x18c))(&fStack_bc);
    puStack_8 = (undefined1 *)0x1;
  }
  piVar11 = *ppiVar17;
  if (bVar22) {
    uStack_d4 = (double)((ulonglong)uStack_d4 & 0xffffffff00000000);
    FUN_007016a0();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  if (!bVar22) {
    FUN_007016a0();
  }
  iVar9 = (**(code **)(*in_ECX + 0x154))();
  if ((in_ECX != DAT_00b333c4) && (iVar9 != 0)) {
    if ((((char)DAT_00b333c4[0x162] == '\0') || (iVar13 = DAT_00b3bb10, DAT_00b3bb10 == 0)) &&
       (iVar13 = DAT_00b3bb0c, DAT_00b3bb0c == 0)) {
      fVar23 = (float10)FUN_005e40c0(&DAT_00b258e8);
      uVar15 = FUN_0047da10(&fStack_90,(float)fVar23);
      pfVar10 = (float *)FUN_0047d9b0(auStack_18,uVar15);
      fStack_90 = *pfVar10;
      fStack_cc = pfVar10[1];
      afStack_88[0] = pfVar10[2];
    }
    else {
      fStack_90 = *(float *)(iVar13 + 0x88);
      fStack_cc = *(float *)(iVar13 + 0x8c);
      afStack_88[0] = *(float *)(iVar13 + 0x90);
    }
    uStack_d4 = (double)CONCAT44(fStack_90,(float)uStack_d4);
    fStack_a0 = *(float *)(iVar9 + 0x20);
    fStack_90 = fStack_90 - fStack_a0;
    fStack_94 = *(float *)(iVar9 + 0x2c);
    fStack_9c = *(float *)(iVar9 + 0x24);
    fStack_8c = fStack_cc - fStack_9c;
    uStack_c8 = (double)CONCAT44(uStack_c8._4_4_,afStack_88[0]);
    fStack_98 = *(float *)(iVar9 + 0x28);
    afStack_88[0] = afStack_88[0] - fStack_98;
    fVar23 = (float10)FUN_00404c90();
    bVar22 = false;
    uStack_a4 = uStack_a4 & 0xffffff00;
    piStack_a8 = (int *)(float)(fVar23 - (float10)fStack_94 * (float10)1.25);
    cVar2 = FUN_00435cc0(&DAT_00b35288,iVar9);
    if (cVar2 != '\0') {
      fVar35 = (float)piStack_a8 / (_DAT_00b0762c * _DAT_00b075f0);
      fVar35 = fVar35 * fVar35;
      uStack_d4 = (double)CONCAT44(fVar35,(float)uStack_d4);
      bVar22 = *(float *)(iVar9 + 0xe4) < fVar35;
      uStack_a4 = CONCAT31(uStack_a4._1_3_,bVar22);
    }
    iVar9 = FUN_007b7650();
    if ((iVar9 != 0) && (*(int *)(iVar9 + 0x2228) != 0)) {
      if (bVar22) {
LAB_00605705:
        uStack_c8._0_5_ = (uint5)(uint)(float)uStack_c8;
      }
      else {
        uStack_c8._0_5_ = CONCAT14(1,(float)uStack_c8);
        if ((float)piStack_a8 <= 0.0) goto LAB_00605705;
      }
      FUN_007abd00(in_ECX[3],&fStack_a0,uStack_c8._4_4_);
    }
    if (piVar11 == (int *)0x0) goto LAB_00605740;
    FUN_005ea2f0(uStack_a4);
  }
  if (piVar11 != (int *)0x0) {
    FUN_005ea320(DAT_00b333b8);
  }
LAB_00605740:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605770(void)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  double *pdVar9;
  int *in_ECX;
  float10 fVar10;
  float10 fVar11;
  float unaff_retaddr;
  float fStack00000004;
  undefined4 uVar12;
  double dStack_34;
  undefined4 uStack_2c;
  
  if (((uint)in_ECX[2] >> 0xb & 1) == 0) {
    if (((char)in_ECX[0x1e] == '\0') && (cVar3 = FUN_0045a500(), cVar3 == '\0')) {
      fVar10 = (float10)FUN_00673b00();
      fVar1 = (float)fVar10;
      fStack00000004 = fVar1 - (float)in_ECX[0x2f];
      if ((fVar1 < (float)in_ECX[0x2f]) || ((float)in_ECX[0x2f] < 0.0)) {
        in_ECX[0x2f] = (int)fVar1;
        fStack00000004 = 0.0;
        if ((0.0 < fVar1) && (fVar1 < 0.3)) {
          in_ECX[0x2f] = 0;
          fStack00000004 = fVar1;
        }
      }
      (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
      FUN_006a2280(fStack00000004);
      in_ECX[0x2f] = (int)fVar1;
      return;
    }
    if ((int *)in_ECX[0x16] != (int *)0x0) {
      iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x34))();
      cVar3 = FUN_00402ba0();
      if (iVar5 == cVar3) {
        *(undefined1 *)((int)in_ECX + 0xfd) = 0;
      }
      else {
        if ((*(char *)((int)in_ECX + 0xfd) == '\0') &&
           (((iVar5 = FUN_00402c40(), iVar5 == DAT_00b37d80 || (iVar5 == DAT_00b37d88)) &&
            (piVar6 = (int *)FUN_00420680(), piVar6 != (int *)0x0)))) {
          iVar5 = *piVar6;
          cVar3 = FUN_004dc070();
          (**(code **)(iVar5 + 0x184))(cVar3 == '\0');
        }
        *(undefined1 *)((int)in_ECX + 0xfd) = 1;
      }
    }
    cVar3 = (**(code **)(*in_ECX + 0x1a0))();
    if ((cVar3 != '\0') &&
       ((iVar5 = (**(code **)(*in_ECX + 0x380))(), iVar5 != 0 ||
        (iVar5 = (**(code **)(*in_ECX + 0x388))(), iVar5 != 0)))) {
      FUN_005f0410();
    }
    cVar3 = (**(code **)(*in_ECX + 0x198))(0);
    if (((cVar3 == '\0') && ((char)in_ECX[0x30] == '\0')) &&
       ((DAT_00b3bd98 != '\0' && (in_ECX[0x2c] != 6)))) {
      iVar5 = (**(code **)(*in_ECX + 0x388))();
      if ((iVar5 != 0) &&
         ((iVar5 = FUN_005e0380(), iVar5 == 0 ||
          ((iVar5 = FUN_005e0380(), *(char *)(iVar5 + 0x20) != '\x18' &&
           (iVar5 = FUN_005e0380(), *(char *)(iVar5 + 0x20) != '\x1e')))))) {
        FUN_005f8000();
      }
      if (in_ECX[0x33] != 0) {
        FUN_005f7cf0(in_ECX[0x33],1);
      }
      cVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x34))();
      cVar4 = FUN_00402ba0();
      if (cVar4 != cVar3) {
        FUN_00422d10();
      }
      cVar3 = (**(code **)(*in_ECX + 0x19c))();
      if ((cVar3 == '\0') &&
         ((DAT_00b3bda4 != '\0' ||
          ((*(int *)(in_ECX[0x16] + 8) != 0 && (cVar3 = FUN_00567770(), cVar3 != '\0')))))) {
        piVar6 = (int *)in_ECX[0x16];
        if ((piVar6[2] == 0) || (*(char *)(piVar6[2] + 0x20) != '\x18')) {
          if ((unaff_retaddr == 0.0) || (in_ECX == DAT_00b333c4)) {
            (**(code **)(*piVar6 + 0x10))();
          }
          else {
            (**(code **)(*piVar6 + 0xc))();
          }
        }
      }
      uVar7 = FUN_00402ba0();
      FUN_00420050(uVar7);
    }
    else {
      cVar3 = (**(code **)(*in_ECX + 0x198))(0);
      if (cVar3 != '\0') {
        if (in_ECX[0x2c] == 1) {
          if ((DAT_00b14e98 != '\0') && (cVar3 = FUN_005e1d30(), cVar3 != '\0')) {
            (**(code **)(*in_ECX + 0x20c))(0,0,1);
          }
        }
        else {
          (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
          in_ECX[0x21] = (int)((float)in_ECX[0x21] - _DAT_00b33e9c);
        }
        cVar3 = FUN_005e1d30();
        if ((cVar3 == '\0') && (cVar3 = FUN_005e1d70(), cVar3 != '\0')) {
          uVar12 = 0;
          uVar7 = FUN_006ecc80(0);
          cVar3 = FUN_0043f8c0(uVar7,uVar12);
          if ((cVar3 == '\0') &&
             (((int *)in_ECX[0x16] != (int *)0x0 &&
              (fVar10 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x4f0))(), iVar5 = DAT_00b35c1c
              , fVar10 != (float10)0.0)))) {
            fVar10 = (float10)(**(code **)(*(int *)in_ECX[0x16] + 0x4f0))();
            fVar11 = (float10)iVar5;
            if (iVar5 < 0) {
              fVar11 = fVar11 + (float10)4.2949673e+09;
            }
            dStack_34 = (double)(fVar11 + fVar10);
            iVar5 = FUN_00402c00();
            fVar1 = (float)iVar5;
            if (iVar5 < 0) {
              fVar1 = fVar1 + 4.2949673e+09;
            }
            fVar10 = (float10)FUN_00402bd0();
            if ((float10)dStack_34 < fVar10 + (float10)(fVar1 * 24.0)) {
              FUN_006748b0(in_ECX);
            }
          }
        }
      }
    }
    cVar3 = FUN_0045a500();
    if (cVar3 == '\0') {
      iVar5 = *in_ECX;
      fVar10 = (float10)FUN_00673b00();
      (**(code **)(iVar5 + 0x368))((float)fVar10);
    }
    if (((((char)in_ECX[0x30] != '\0') && ((int *)in_ECX[0x16] != (int *)0x0)) &&
        (iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 8))(), iVar5 == 0)) &&
       (iVar5 = in_ECX[0xf], iVar5 != 0)) {
      bVar2 = true;
      iVar8 = (**(code **)(*in_ECX + 0x170))();
      if ((*(char *)(iVar8 + 4) == '$') && (cVar3 = (**(code **)(*in_ECX + 0x278))(), cVar3 == '\0')
         ) {
        bVar2 = false;
      }
      FUN_005e6680(1);
      (**(code **)(*in_ECX + 0x1c8))();
      if (bVar2) {
        fVar10 = (float10)(**(code **)(*in_ECX + 0x1e0))();
        FUN_0070fdd0((float)fVar10);
        dStack_34 = 0.0078125;
        uStack_2c = 0;
        pdVar9 = (double *)FUN_007101f0(&stack0xffffffc0,&dStack_34);
        dStack_34 = *pdVar9;
        uStack_2c = *(undefined4 *)(pdVar9 + 1);
        FUN_008ab440(iVar5,&dStack_34,1,0,0);
        (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
      }
      else {
        iVar5 = (**(code **)(*in_ECX + 0x164))();
        if (iVar5 != 0) {
          uVar7 = 0x20;
          (**(code **)(*in_ECX + 0x164))(0x20);
          cVar3 = FUN_00470d00(uVar7);
          if (cVar3 != '\0') {
            (**(code **)(*in_ECX + 0x164))();
            FUN_00470fc0(5,0);
            FUN_00474ab0(0,0x20,0xffffffff,0,0xffffffff);
            iVar5 = FUN_004706e0(0);
            if (iVar5 != 0) {
              *(undefined4 *)(iVar5 + 0x48) = *(undefined4 *)(iVar5 + 0x30);
              FUN_00476d10(in_ECX,0,*(undefined4 *)(iVar5 + 0x30));
              FUN_00474510(in_ECX);
            }
            FUN_005f5d10();
          }
        }
      }
      *(undefined1 *)(in_ECX + 0x30) = 0;
    }
    piVar6 = (int *)(**(code **)(*in_ECX + 0x388))();
    if ((piVar6 == (int *)0x0) || (iVar5 = (**(code **)(*piVar6 + 0x18c))(), iVar5 != 4)) {
      FUN_00603ca0(unaff_retaddr);
    }
    if ((in_ECX != DAT_00b333c4) && (iVar5 = (**(code **)(*in_ECX + 0x170))(), iVar5 != 0)) {
      iVar5 = FUN_006ecc80();
      pdVar9 = (double *)(**(code **)(*in_ECX + 0x174))();
      dStack_34 = *pdVar9;
      uStack_2c = *(undefined4 *)(pdVar9 + 1);
      if ((iVar5 != 0) &&
         ((cVar3 = FUN_004c97f0(), cVar3 == '\0' &&
          (cVar3 = FUN_004cc540(&dStack_34), cVar3 == '\0')))) {
        FUN_004c9cf0();
        FUN_004dd4b0();
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00605dc0(float *param_1)

{
  int in_ECX;
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    FUN_008b8a10(&local_30);
  }
  return;
}



void FUN_00605e20(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 unaff_retaddr;
  
  uVar1 = (**(code **)(*param_2 + 0x284))(0x24);
  FUN_00546700(unaff_retaddr,uVar1);
  return;
}



void FUN_00605e50(void)

{
  undefined4 *in_ECX;
  
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  return;
}



void FUN_00605e80(void)

{
  int iVar1;
  int in_ECX;
  
  if ((DAT_00b33a98 != 0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
    FUN_00675740(in_ECX,1);
  }
  iVar1 = *(int *)(in_ECX + 0x20);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x20) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x20));
    *(int *)(in_ECX + 0x20) = iVar1;
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}



undefined4 FUN_00605ed0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 0x1c); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[1]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}



void FUN_00605f00(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = (int *)(in_ECX + 0x1c);
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



int FUN_00605f30(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  piVar2 = (int *)(in_ECX + 0x1c);
  if ((*(int *)(in_ECX + 0x20) == 0) && (*piVar2 == 0)) {
    return 0;
  }
  iVar1 = 0;
  for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if (*piVar2 != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605f60(int *param_1,char param_2)

{
  int in_ECX;
  float10 fVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    if (*(int *)(in_ECX + 0x14) == 0) {
      iVar2 = *(int *)(in_ECX + 0x18);
    }
    else {
      iVar2 = FUN_00470520(*(int *)(in_ECX + 0x14));
    }
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    if (param_2 == '\0') {
      iVar2 = 0x24;
      fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24);
LAB_00605fcb:
      FUN_009828c0((float)((float10)iVar2 * (float10)_DAT_00b376d0 * (fVar1 / (float10)100.0)));
      return;
    }
    break;
  case 1:
    if (param_2 == '\0') {
      fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24);
      FUN_009828c0((float)((fVar1 / (float10)100.0) * (float10)_DAT_00b376d8));
      return;
    }
    FUN_009828c0(_DAT_00b376d8);
    return;
  case 2:
    if (param_2 != '\0') {
      FUN_009828c0(_DAT_00b376e0);
      return;
    }
    fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24);
    fVar3 = (float)((fVar1 / (float10)100.0) * (float10)_DAT_00b376e0);
  default:
    FUN_009828c0(fVar3);
    return;
  case 3:
    if (param_2 == '\0') {
      fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24);
      FUN_009828c0((float)((fVar1 / (float10)100.0) * (float10)_DAT_00b376c0));
      return;
    }
    FUN_009828c0(_DAT_00b376c0);
    return;
  case 4:
    if (param_2 == '\0') {
      fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24,0);
      FUN_009828c0((float)((fVar1 / (float10)100.0) * (float10)_DAT_00b376c8));
      return;
    }
    FUN_009828c0(_DAT_00b376c8);
    return;
  case 5:
    iVar2 = DAT_00b376b0;
    if (param_2 == '\0') {
      iVar2 = 0x24;
      fVar1 = (float10)(**(code **)(*param_1 + 0x288))(0x24);
      goto LAB_00605fcb;
    }
  }
  FUN_009828c0((float)iVar2 * _DAT_00b376d0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00606140(void)

{
  int in_ECX;
  float local_4;
  
  local_4 = 0.0;
  switch(*(undefined4 *)(in_ECX + 4)) {
  case 0:
    if (*(int *)(in_ECX + 0x14) == 0) {
      local_4 = *(float *)(in_ECX + 0x18);
    }
    else {
      local_4 = (float)FUN_00470520(*(int *)(in_ECX + 0x14));
    }
    if (local_4 == 0.0) {
      local_4 = 1.4013e-45;
    }
    return (float10)((float)(int)local_4 * _DAT_00b37698);
  case 1:
    return (float10)_DAT_00b376a0;
  case 2:
    local_4 = (float)_DAT_00b376a8;
    break;
  case 3:
    return (float10)_DAT_00b37688;
  case 4:
    return (float10)_DAT_00b37690;
  case 5:
    return (float10)DAT_00b376b0;
  }
  return (float10)local_4;
}



short FUN_006061f0(void)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  short sVar5;
  int in_ECX;
  short sVar6;
  
  sVar6 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar6 = 6;
  }
  sVar5 = 0;
  for (piVar3 = (int *)(in_ECX + 0x1c); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (*piVar3 != 0) {
      sVar5 = sVar5 + 1;
    }
  }
  sVar6 = sVar6 + 0x25 + sVar5 * 4;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      uVar4 = (**(code **)(*piVar3 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xfa,".\\AI\\AlarmPackage.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar4);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0xfa,
                 ".\\AI\\AlarmPackage.cpp");
  }
  return sVar6;
}



void FUN_006062b0(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  int local_20;
  undefined4 local_1c;
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
  FUN_0045b9a0(in_ECX + 0x10,1);
  FUN_0045b9a0(in_ECX + 0x11,1);
  FUN_0045b9a0(in_ECX + 0x2c,1);
  FUN_0045b9a0(in_ECX + 4,4);
  FUN_0045b9a0(in_ECX + 0x18,4);
  FUN_0045b9a0(in_ECX + 0x28,4);
  local_1c = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    local_1c = *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc);
  }
  FUN_0045f7a0(&local_1c,4);
  local_18 = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0xc) + 0xc);
  }
  FUN_0045f7a0(&local_18,4);
  local_14 = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0xc);
  }
  FUN_0045f7a0(&local_14,4);
  local_10 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  local_20 = 0;
  puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_20,2);
  for (piVar9 = (int *)(in_ECX + 0x1c);
      (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1]) {
    local_8 = *(undefined4 *)(*piVar9 + 0xc);
    FUN_0045f7a0(&local_8,4);
    local_20 = local_20 + 1;
  }
  *puVar2 = (undefined2)local_20;
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar4 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x132,
                   ".\\AI\\AlarmPackage.cpp");
    }
    else {
      piVar9 = (int *)FUN_0046b250(*puVar3);
      uVar8 = (**(code **)(*piVar9 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x132,".\\AI\\AlarmPackage.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar4 - iVar1,*puVar3,uVar8);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_c;
  if (cVar7 != '\0') {
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar5) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\AlarmPackage.cpp",0x132);
    }
    *psVar6 = (short)uVar5 - (short)psVar6;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606520(void)

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
  ushort auStack_24 [2];
  uint local_20;
  int iStack_1c;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  local_20 = 0;
  iVar8 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_18,4);
    if (local_18 != 0x4b4f4c42) {
      puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\AlarmPackage.cpp",0x138,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar6);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\AlarmPackage.cpp",0x138,*puVar6,uVar5);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_20,2);
  }
  FUN_004534d0(in_ECX + 0x10,1);
  FUN_004534d0(in_ECX + 0x11,1);
  FUN_004534d0(in_ECX + 0x2c,1);
  FUN_004534d0(in_ECX + 4,4);
  FUN_004534d0(in_ECX + 0x18,4);
  FUN_004534d0(in_ECX + 0x28,4);
  FUN_0045ba00(&uStack_14,4);
  *(undefined4 *)(in_ECX + 8) = uStack_14;
  FUN_0045ba00(&uStack_10,4);
  *(undefined4 *)(in_ECX + 0xc) = uStack_10;
  FUN_0045ba00(&uStack_c,4);
  *(undefined4 *)(in_ECX + 0x14) = uStack_c;
  FUN_0045ba00(&uStack_8,4);
  *(undefined4 *)(in_ECX + 0x24) = uStack_8;
  FUN_004534d0(auStack_24,2);
  iStack_1c = 0;
  if (auStack_24[0] != 0) {
    do {
      FUN_0045ba00(&iStack_4,4);
      iVar2 = iStack_4;
      if (iStack_4 != 0) {
        if (*(int *)(in_ECX + 0x1c) == 0) {
          *(int *)(in_ECX + 0x1c) = iStack_4;
        }
        else {
          puVar6 = (undefined4 *)FUN_00401f00(8);
          if (puVar6 == (undefined4 *)0x0) {
            _DAT_00000004 = *(undefined4 *)(in_ECX + 0x20);
            *(undefined4 *)(in_ECX + 0x20) = 0;
            *(int *)(in_ECX + 0x1c) = iVar2;
          }
          else {
            *puVar6 = *(undefined4 *)(in_ECX + 0x1c);
            puVar6[1] = 0;
            puVar6[1] = *(undefined4 *)(in_ECX + 0x20);
            *(undefined4 **)(in_ECX + 0x20) = puVar6;
            *(int *)(in_ECX + 0x1c) = iVar2;
          }
        }
      }
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < (int)(uint)auStack_24[0]);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = local_20 & 0xffff;
      if (uVar7 + iVar8 < uVar1) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar1 - uVar7) - iVar8,".\\AI\\AlarmPackage.cpp",0x161,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar1 < uVar7 + iVar8) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar7 - uVar1) + iVar8,".\\AI\\AlarmPackage.cpp",0x161,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar6);
      uVar7 = (local_20 & 0xffff) + iVar8;
      if (uVar7 < uVar1) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar1 - (local_20 & 0xffff)) - iVar8,".\\AI\\AlarmPackage.cpp",0x161,*puVar6,
                     uVar5);
        return;
      }
      if (uVar1 < uVar7) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_20 & 0xffff) - uVar1) + iVar8,".\\AI\\AlarmPackage.cpp",0x161,*puVar6,
                     uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_00606860(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2ea8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6ef94;
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  in_ECX[0xf] = puVar2;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_006068d0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2ea8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00568e10(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6ef94;
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  in_ECX[0xf] = puVar2;
  if (param_1 != 0) {
    FUN_00446cb0(param_1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00606960(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c2ed8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6ef94;
  local_4 = 0;
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    FUN_00675090(in_ECX);
  }
  puVar1 = (undefined4 *)in_ECX[0xf];
  iVar2 = puVar1[1];
  while (iVar2 != 0) {
    iVar2 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1],uVar3);
    puVar1[1] = iVar2;
  }
  *puVar1 = 0;
  FUN_00401f20(in_ECX[0xf],uVar3);
  in_ECX[0xf] = 0;
  local_4 = 0xffffffff;
  FUN_00568640();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00606ad0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0x3c); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[1]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00606b00(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (param_1 != 0) {
    if (*piVar1 != 0) {
      piVar2 = (int *)FUN_00401f00(8);
      if (piVar2 != (int *)0x0) {
        *piVar2 = *piVar1;
        piVar2[1] = 0;
        piVar2[1] = piVar1[1];
        *piVar1 = param_1;
        piVar1[1] = (int)piVar2;
        return;
      }
      _DAT_00000004 = piVar1[1];
      piVar1[1] = 0;
    }
    *piVar1 = param_1;
  }
  return;
}



void FUN_00606b50(undefined4 param_1)

{
  int in_ECX;
  
  FUN_0065c620(param_1);
  if (((*(int **)(in_ECX + 0x3c))[1] == 0) && (**(int **)(in_ECX + 0x3c) == 0)) {
    FUN_005eae70();
  }
  return;
}



uint FUN_00606b80(void)

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
  for (piVar4 = *(int **)(in_ECX + 0x3c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if (*piVar4 != 0) {
      iVar6 = iVar6 + 1;
    }
  }
  uVar7 = iVar6 * 3 + uVar7 + 2;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),499,".\\AI\\AlarmPackage.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,(uVar7 & 0xffff) - uVar3,*puVar1,uVar5);
      return uVar7 & 0xffff;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(uVar7 & 0xffff) - uVar3,499,
                 ".\\AI\\AlarmPackage.cpp");
  }
  return uVar7 & 0xffff;
}



void FUN_00606c50(void)

{
  undefined2 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  short *psVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  char local_15;
  int local_14;
  int local_10;
  short *local_c;
  uint local_8;
  undefined4 local_4;
  
  FUN_00567e00();
  local_4 = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_14 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_14,2);
  for (piVar7 = *(int **)(in_ECX + 0x3c);
      (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]) {
    iVar2 = *piVar7;
    local_15 = *(char *)(iVar2 + 4);
    FUN_0045b9a0(&local_15,1);
    local_8 = FUN_00675cc0((int)local_15,iVar2);
    local_8 = local_8 & 0xffff;
    FUN_0045b9a0(&local_8,2);
    local_14 = local_14 + 1;
  }
  *puVar1 = (undefined2)local_14;
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar2 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar2 - local_10,0x216,
                   ".\\AI\\AlarmPackage.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar3);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x216,".\\AI\\AlarmPackage.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar2 - local_10,*puVar3,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\AlarmPackage.cpp",0x216);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_00606e10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  char cStack_19;
  ushort local_18 [2];
  uint local_14;
  int iStack_10;
  int local_c;
  undefined4 uStack_8;
  int local_4;
  
  FUN_00567f70();
  local_14 = 0;
  iVar9 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_c,4);
    if (local_c != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\AlarmPackage.cpp",0x21e,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\AlarmPackage.cpp",0x21e,*puVar1,uVar5);
      }
    }
    iVar9 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
  }
  FUN_0046ac80(local_18,2);
  iStack_10 = 0;
  if (local_18[0] != 0) {
    do {
      FUN_004534d0(&cStack_19,1);
      FUN_004534d0(&uStack_8,2);
      iVar6 = FUN_00675d00((int)cStack_19,uStack_8);
      if (iVar6 != 0) {
        piVar4 = *(int **)(local_4 + 0x3c);
        if (*piVar4 != 0) {
          piVar7 = (int *)FUN_00401f00(8);
          if (piVar7 == (int *)0x0) {
            piVar7 = (int *)0x0;
          }
          else {
            *piVar7 = *piVar4;
            piVar7[1] = 0;
          }
          piVar7[1] = piVar4[1];
          piVar4[1] = (int)piVar7;
        }
        *piVar4 = iVar6;
      }
      iStack_10 = iStack_10 + 1;
    } while (iStack_10 < (int)(uint)local_18[0]);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar8 = local_14 & 0xffff;
      if (uVar8 + iVar9 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar8) - iVar9,".\\AI\\AlarmPackage.cpp",0x232,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar8 + iVar9) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - uVar2) + iVar9,".\\AI\\AlarmPackage.cpp",0x232,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar8 = (local_14 & 0xffff) + iVar9;
      if (uVar8 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_14 & 0xffff)) - iVar9,".\\AI\\AlarmPackage.cpp",0x232,*puVar1,
                     uVar5);
        return;
      }
      if (uVar2 < uVar8) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar2) + iVar9,".\\AI\\AlarmPackage.cpp",0x232,*puVar1,
                     uVar5);
        return;
      }
    }
  }
  return;
}



void FUN_006070b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *in_ECX;
  
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[2] = param_2;
  in_ECX[5] = param_4;
  in_ECX[6] = param_5;
  in_ECX[1] = param_1;
  *in_ECX = 0;
  in_ECX[3] = param_3;
  *(undefined1 *)(in_ECX + 4) = 0;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  in_ECX[9] = param_6;
  *(undefined1 *)(in_ECX + 0xb) = 0;
  iVar1 = FUN_00675ef0(param_1,param_3);
  in_ECX[10] = iVar1 + 1;
  return;
}



void FUN_00607110(void)

{
  FUN_0065c620();
  return;
}



void FUN_00607120(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  float local_4;
  
  for (piVar1 = (int *)(in_ECX + 0x1c);
      (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    cVar3 = FUN_005e6c60();
    if (cVar3 == '\0') {
      iVar4 = FUN_00605f60(piVar2,0);
      local_4 = (float)iVar4;
      if (piVar2 == *(int **)(in_ECX + 8)) {
        local_4 = local_4 + local_4;
      }
      (**(code **)(*piVar2 + 0x374))(*(undefined4 *)(in_ECX + 0xc),local_4 * -1.0);
    }
  }
  return;
}



void FUN_006071a0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    uVar6 = FUN_0046b250(*(int *)(in_ECX + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    uVar6 = FUN_009832e6(uVar6);
    *(undefined4 *)(in_ECX + 8) = uVar6;
  }
  if (*(int *)(in_ECX + 0xc) != 0) {
    uVar6 = FUN_0046b250(*(int *)(in_ECX + 0xc),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    uVar6 = FUN_009832e6(uVar6);
    *(undefined4 *)(in_ECX + 0xc) = uVar6;
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar6 = FUN_0046b250(*(int *)(in_ECX + 0x14),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    uVar6 = FUN_009832e6(uVar6);
    *(undefined4 *)(in_ECX + 0x14) = uVar6;
  }
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar6 = FUN_0046b250(*(int *)(in_ECX + 0x24));
    *(undefined4 *)(in_ECX + 0x24) = uVar6;
  }
  piVar5 = (int *)(in_ECX + 0x1c);
  piVar4 = (int *)0x0;
joined_r0x0060723c:
  do {
    piVar3 = piVar5;
    if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
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
        goto joined_r0x0060723c;
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



void FUN_006072c0(byte param_1)

{
  FUN_00606960();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00607400(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x80);
}



undefined4 FUN_00607410(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x84);
}



undefined4 FUN_00607530(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar1);
    if (iVar2 == 0) goto LAB_006075fd;
  }
  uVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  FUN_00674550(in_ECX,uVar3);
  iVar2 = FUN_00401f00(0x2ec);
  uStack_4 = 0;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_00628ee0();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar4 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar4;
  FUN_00673a90(in_ECX,0,0,0,0);
  (**(code **)(*in_ECX + 0x178))(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
LAB_006075fd:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_00607620(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((int *)in_ECX[0x16] != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)in_ECX[0x16] + 8))(uVar1);
    if (iVar2 == 1) goto LAB_006076ee;
  }
  uVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
  FUN_00674550(in_ECX,uVar3);
  iVar2 = FUN_00401f00(0x18c);
  uStack_4 = 0;
  if (iVar2 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)FUN_0064b400();
  }
  uStack_4 = 0xffffffff;
  (**(code **)(*piVar4 + 4))(in_ECX[0x16]);
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  in_ECX[0x16] = (int)piVar4;
  FUN_00673a90(in_ECX,1,0,0,0);
  (**(code **)(*in_ECX + 0x178))(0);
  (**(code **)(*(int *)in_ECX[0x16] + 0x4c))();
LAB_006076ee:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_00607730(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x5c) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x28) = 0;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00607740(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)(param_1 + 0x18);
  iVar4 = 3;
  do {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    puVar3[-6] = *param_2;
    puVar3[-3] = uVar1;
    *puVar3 = uVar2;
    param_2 = param_2 + 4;
    puVar3 = puVar3 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}



int FUN_006077c0(int param_1,int param_2)

{
  FUN_00607740(param_1,param_2);
  FUN_0043f3e0(param_1 + 0x24,param_2 + 0x30);
  return param_1;
}



undefined1 * FUN_006077f0(undefined4 param_1,undefined4 param_2)

{
  char *pcVar1;
  int in_ECX;
  
  if ((in_ECX != 0) && (*(int **)(in_ECX + 8) != (int *)0x0)) {
    pcVar1 = (char *)(**(code **)(**(int **)(in_ECX + 8) + 0x14))(&param_2,param_1,param_2);
    return (undefined1 *)(uint)(*pcVar1 != '\0');
  }
  return &stack0x00000000;
}



undefined1 * FUN_00607840(void)

{
  int in_ECX;
  undefined1 auStack_100 [255];
  undefined1 local_1;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    return (undefined1 *)
           CONCAT31((int3)((uint)&local_1 >> 8),*(int *)(*(int *)(in_ECX + 8) + 8) != 0);
  }
  return auStack_100;
}



undefined1 * FUN_00607880(void)

{
  int in_ECX;
  undefined1 auStack_100 [255];
  undefined1 local_1;
  
  if ((in_ECX != 0) && (*(int *)(in_ECX + 8) != 0)) {
    return (undefined1 *)
           CONCAT31((int3)((uint)&local_1 >> 8),*(char *)(*(int *)(in_ECX + 8) + 0x91) != '\0');
  }
  return auStack_100;
}



void FUN_006078e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2f13;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00659990(uVar1);
  in_ECX[2] = in_ECX[2] | 0x200000;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6f08c;
  in_ECX[6] = &PTR_FUN_00a6f084;
  iVar2 = FUN_00401f00(0x2ec);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00628ee0();
  }
  in_ECX[0x16] = uVar3;
  in_ECX[0x17] = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  in_ECX[0x26] = 0;
  *(undefined1 *)((int)in_ECX + 0x95) = 0;
  *(undefined1 *)((int)in_ECX + 0x97) = 0;
  DAT_00b3b7d0 = DAT_00b3b7d0 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_006079a0(undefined4 param_1)

{
  undefined4 *puVar1;
  float *pfVar2;
  int *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  float fStack_44;
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_44;
  if ((undefined4 *)in_ECX[0x17] == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x54);
    in_ECX[0x17] = (int)puVar1;
    *puVar1 = 4;
    *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
    *(undefined4 *)(in_ECX[0x17] + 0x28) = param_1;
    iVar3 = in_ECX[0x17];
    *(undefined4 *)(iVar3 + 0x10) = DAT_00b3f9a8;
    *(undefined4 *)(iVar3 + 0x14) = DAT_00b3f9ac;
    *(undefined4 *)(iVar3 + 0x18) = DAT_00b3f9b0;
    iVar3 = in_ECX[0x17];
    *(undefined4 *)(iVar3 + 4) = DAT_00b3f9a8;
    *(undefined4 *)(iVar3 + 8) = DAT_00b3f9ac;
    *(undefined4 *)(iVar3 + 0xc) = DAT_00b3f9b0;
    puVar1 = &DAT_00b26dc4;
    puVar4 = (undefined4 *)(in_ECX[0x17] + 0x30);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = in_ECX[0x17];
    *(undefined4 *)(iVar3 + 0x1c) = DAT_00b3f9a8;
    *(undefined4 *)(iVar3 + 0x20) = DAT_00b3f9ac;
    *(undefined4 *)(iVar3 + 0x24) = DAT_00b3f9b0;
    iVar3 = FUN_0065a2c0();
    if (iVar3 != 0) {
      iVar3 = FUN_0065a2c0();
      if ((iVar3 == 0) || (*(int *)(iVar3 + 8) == 0)) {
        pfVar2 = (float *)&DAT_00ba7a40;
      }
      else {
        pfVar2 = (float *)FUN_008ac0a0();
      }
      local_40[0] = *pfVar2;
      fStack_2c = pfVar2[1];
      fStack_28 = pfVar2[2];
      fStack_24 = pfVar2[3];
      local_30 = local_40[0];
      if (local_40[0] == -3.4028235e+38) {
        iVar3 = (**(code **)(*in_ECX + 0x154))();
        if (iVar3 != 0) {
          fStack_44 = (float)in_ECX[0x1b];
          local_30 = fStack_44 * DAT_00b258dc;
          fStack_2c = DAT_00b258e0 * fStack_44;
          fStack_28 = fStack_44 * DAT_00b258e4;
          (**(code **)(*in_ECX + 0x154))();
          puVar1 = (undefined4 *)FUN_007101f0(local_40,&local_30);
          iVar3 = in_ECX[0x17];
          *(undefined4 *)(iVar3 + 0x1c) = *puVar1;
          *(undefined4 *)(iVar3 + 0x20) = puVar1[1];
          *(undefined4 *)(iVar3 + 0x24) = puVar1[2];
        }
      }
      else {
        FUN_0043f3e0(in_ECX[0x17] + 0x1c,&local_30);
      }
    }
  }
  else {
    *(undefined4 *)in_ECX[0x17] = 4;
  }
  in_ECX[0x18] = 1;
  return;
}



void FUN_00607b60(void)

{
  if ((DAT_00b3b7d4 == 0) &&
     (DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff, DAT_00b3b7d4 = DAT_00b2eb3c, DAT_00b2eb3c == 0)) {
    DAT_00b2eb3c = 10;
    DAT_00b3b7d4 = DAT_00b2eb3c;
  }
  return;
}



void FUN_00607b90(int *param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  if ((param_1 == (int *)0x0) || (cVar5 = (**(code **)(*param_1 + 0xe8))(), cVar5 != '\0')) {
    return;
  }
  bVar4 = true;
  cVar5 = (**(code **)(*param_1 + 400))();
  if ((cVar5 != '\0') && (piVar1 = (int *)param_1[0x16], piVar1 != (int *)0x0)) {
    iVar6 = (**(code **)(*piVar1 + 0x504))();
    if (iVar6 != 0) {
      for (piVar7 = (int *)(**(code **)(*piVar1 + 0x504))();
          (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1])
      {
        piVar2 = (int *)*piVar7;
        if (piVar2 != (int *)0x0) {
          iVar6 = piVar2[0x17];
          if (iVar6 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = *(int **)(iVar6 + 0x28);
          }
          if (piVar8 == param_1) {
            if (iVar6 != 0) {
              *(undefined4 *)(iVar6 + 0x28) = 0;
            }
            if (((uint)piVar2[2] >> 5 & 1) == 0) {
              if (param_2 == '\0') {
                piVar2[0x18] = 3;
              }
              else {
                (**(code **)(*piVar2 + 0x8c))(1);
              }
            }
          }
          if (((uint)piVar2[2] >> 5 & 1) != 0) {
            (**(code **)(*piVar2 + 0x150))(0);
          }
        }
      }
      (**(code **)(*piVar1 + 0x504))();
      FUN_004526e0();
    }
    iVar6 = (**(code **)(*piVar1 + 8))();
    if (iVar6 == 0) {
      bVar4 = false;
    }
    else {
      iVar6 = (**(code **)(*piVar1 + 8))();
      if (iVar6 == 1) goto LAB_00607da6;
    }
  }
  FUN_00673a50(0);
  piVar7 = (int *)FUN_007616d0();
  piVar1 = piVar7;
  while ((piVar2 = piVar7, piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))))) {
    piVar7 = (int *)*piVar2;
    bVar3 = false;
    cVar5 = (**(code **)(*piVar7 + 0xe8))();
    if ((cVar5 == '\0') ||
       (piVar8 = (int *)FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0),
       piVar8 == (int *)0x0)) {
LAB_00607d8c:
      piVar7 = (int *)piVar2[1];
      piVar1 = piVar2;
    }
    else {
      iVar6 = piVar8[0x17];
      if (iVar6 == 0) {
        piVar9 = (int *)0x0;
      }
      else {
        piVar9 = *(int **)(iVar6 + 0x28);
      }
      if (piVar9 == param_1) {
        if (iVar6 != 0) {
          *(undefined4 *)(iVar6 + 0x28) = 0;
        }
        if (((uint)piVar7[2] >> 5 & 1) == 0) {
          if (param_2 == '\0') {
            piVar8[0x18] = 3;
          }
          else {
            (**(code **)(*piVar8 + 0x8c))(1);
            bVar3 = true;
          }
        }
      }
      if (((uint)piVar8[2] >> 5 & 1) != 0) {
        (**(code **)(*piVar8 + 0x150))(0);
      }
      if (!bVar3) goto LAB_00607d8c;
      piVar7 = piVar2;
      if (piVar2 != piVar1) {
        piVar7 = (int *)piVar1[1];
      }
    }
  }
  if (!bVar4) {
    return;
  }
LAB_00607da6:
  FUN_00673a50(1);
  piVar7 = (int *)FUN_007616d0();
  piVar1 = piVar7;
  do {
    while( true ) {
      piVar2 = piVar7;
      if (piVar2 == (int *)0x0) {
        return;
      }
      if ((piVar2[1] == 0) && (*piVar2 == 0)) {
        return;
      }
      piVar7 = (int *)*piVar2;
      bVar4 = false;
      cVar5 = (**(code **)(*piVar7 + 0xe8))();
      if ((cVar5 != '\0') &&
         (piVar8 = (int *)FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0),
         piVar8 != (int *)0x0)) break;
LAB_00607e71:
      piVar7 = (int *)piVar2[1];
      piVar1 = piVar2;
    }
    iVar6 = piVar8[0x17];
    if (iVar6 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      piVar9 = *(int **)(iVar6 + 0x28);
    }
    if (piVar9 == param_1) {
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 0x28) = 0;
      }
      if (((uint)piVar7[2] >> 5 & 1) == 0) {
        (**(code **)(*piVar8 + 0x8c))(1);
        bVar4 = true;
      }
    }
    if (((uint)piVar8[2] >> 5 & 1) != 0) {
      (**(code **)(*piVar8 + 0x150))(0);
    }
    if (!bVar4) goto LAB_00607e71;
    piVar7 = piVar2;
    if (piVar2 != piVar1) {
      piVar7 = (int *)piVar1[1];
    }
  } while( true );
}



void FUN_00607e90(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  FUN_00673a50(0);
  piVar3 = (int *)FUN_007616d0();
  piVar2 = piVar3;
joined_r0x00607eab:
  do {
    piVar1 = piVar3;
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00673a50(1);
      piVar3 = (int *)FUN_007616d0();
      piVar2 = piVar3;
      while ((piVar1 = piVar3, piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))))) {
        piVar3 = (int *)FUN_009832e6(*piVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
        if ((piVar3 == (int *)0x0) ||
           ((piVar3[0x17] == 0 || (*(int *)(piVar3[0x17] + 0x2c) != param_1)))) {
          piVar3 = (int *)piVar1[1];
          piVar2 = piVar1;
        }
        else {
          (**(code **)(*piVar3 + 0x10))(1);
          piVar3 = piVar1;
          if (piVar1 != piVar2) {
            piVar3 = (int *)piVar2[1];
          }
        }
      }
      return;
    }
    piVar3 = (int *)FUN_009832e6(*piVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
    if (((piVar3 != (int *)0x0) && (piVar3[0x17] != 0)) &&
       (*(int *)(piVar3[0x17] + 0x2c) == param_1)) {
      if (param_2 != '\0') {
        (**(code **)(*piVar3 + 0x10))(1);
        piVar3 = piVar1;
        if (piVar1 != piVar2) {
          piVar3 = (int *)piVar2[1];
        }
        goto joined_r0x00607eab;
      }
      piVar3[0x18] = 3;
    }
    piVar3 = (int *)piVar1[1];
    piVar2 = piVar1;
  } while( true );
}



void FUN_00607f90(int param_1,int param_2,int param_3,char param_4,char param_5)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  FUN_00673a50(0);
  piVar1 = (int *)FUN_007616d0();
  iVar5 = 0;
  piVar4 = piVar1;
joined_r0x00607fb4:
  do {
    if ((piVar4 == (int *)0x0) || (((piVar4[1] == 0 && (*piVar4 == 0)) || (param_2 <= iVar5))))
    break;
    piVar2 = (int *)FUN_009832e6(*piVar4,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
    local_4 = iVar5;
    if (piVar2 != (int *)0x0) {
      if (piVar2[0x17] == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(piVar2[0x17] + 0x28);
      }
      if (((iVar3 == param_3) && (iVar3 = (**(code **)(*piVar2 + 0x170))(), iVar3 == param_1)) &&
         ((param_5 == '\0' || (*(char *)((int)piVar2 + 0x95) != '\0')))) {
        local_4 = iVar5 + 1;
        iVar5 = iVar5 + 1;
        if (param_4 != '\0') {
          (**(code **)(*piVar2 + 0x10))(1);
          if (piVar4 != piVar1) {
            piVar4 = (int *)piVar1[1];
          }
          goto joined_r0x00607fb4;
        }
        piVar2[0x18] = 3;
      }
    }
    iVar5 = local_4;
    piVar1 = piVar4;
    piVar4 = (int *)piVar4[1];
  } while( true );
  FUN_00673a50(1);
  piVar4 = (int *)FUN_007616d0();
  piVar1 = piVar4;
  do {
    while( true ) {
      if (((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) || (param_2 <= iVar5)) {
        return;
      }
      piVar2 = (int *)FUN_009832e6(*piVar1,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0);
      if (piVar2 != (int *)0x0) break;
LAB_0060810d:
      piVar4 = piVar1;
      piVar1 = (int *)piVar1[1];
    }
    if (piVar2[0x17] == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar2[0x17] + 0x28);
    }
    if (((iVar3 != param_3) || (iVar3 = (**(code **)(*piVar2 + 0x170))(), iVar3 != param_1)) ||
       ((param_5 != '\0' && (*(char *)((int)piVar2 + 0x95) == '\0')))) goto LAB_0060810d;
    (**(code **)(*piVar2 + 0x10))(1);
    if (piVar1 != piVar4) {
      piVar1 = (int *)piVar4[1];
    }
    iVar5 = iVar5 + 1;
  } while( true );
}



int FUN_00608120(undefined4 param_1,char param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  float local_4;
  
  local_4 = 0.0;
  piVar4 = (int *)0x0;
  FUN_00673a50(1);
  for (piVar2 = (int *)FUN_007616d0();
      (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0)))); piVar2 = (int *)piVar2[1]) {
    piVar3 = (int *)*piVar2;
    if ((piVar3 != (int *)0x0) &&
       ((((cVar1 = (**(code **)(*piVar3 + 0xe8))(), cVar1 != '\0' &&
          (piVar3 = (int *)FUN_009832e6(piVar3,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0),
          piVar3 != (int *)0x0)) && (local_4 < (float)piVar3[0x1a])) && (piVar3[0x18] == 2)))) {
      local_4 = (float)piVar3[0x1a];
      piVar4 = piVar3;
    }
  }
  FUN_00673a50(0);
  piVar2 = (int *)FUN_007616d0();
  if (piVar4 == (int *)0x0) {
    if (piVar2 == (int *)0x0) goto LAB_00608265;
    do {
      if ((piVar2[1] == 0) && (*piVar2 == 0)) break;
      piVar3 = (int *)*piVar2;
      if ((((piVar3 != (int *)0x0) &&
           ((cVar1 = (**(code **)(*piVar3 + 0xe8))(), cVar1 != '\0' &&
            (piVar3 = (int *)FUN_009832e6(piVar3,0,&PTR_PTR_00b05538,&PTR_PTR_00b05ad0,0),
            piVar3 != (int *)0x0)))) && (local_4 < (float)piVar3[0x1a])) && (piVar3[0x18] == 2)) {
        local_4 = (float)piVar3[0x1a];
        piVar4 = piVar3;
      }
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    if (piVar4 == (int *)0x0) goto LAB_00608265;
  }
  if (param_2 != '\0') {
    (**(code **)(*piVar4 + 0x8c))(1);
    return DAT_00b3b7d0 + -1;
  }
  piVar4[0x18] = 3;
LAB_00608265:
  return DAT_00b3b7d0 + -1;
}



float10 FUN_00608280(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float fVar5;
  undefined4 uStack_4;
  
  uVar1 = (**(code **)(*param_1 + 0x284))(7);
  iVar2 = (**(code **)(*param_1 + 0x284))(0x1c,uVar1);
  fVar4 = (float10)FUN_00547700(0x3f800000,(float)iVar2);
  fVar5 = (float)fVar4;
  uStack_4 = 1.0;
  piVar3 = (int *)FUN_0065a2c0();
  iVar2 = (**(code **)(*piVar3 + 0x58))();
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_0065a2c0();
    iVar2 = (**(code **)(*piVar3 + 0x58))();
    uStack_4 = *(float *)(iVar2 + 0x28) * 6.99904 * fVar5;
  }
  return (float10)uStack_4;
}



void FUN_00608410(uint param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  int in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  short asStack_2c [2];
  uint local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 auStack_10 [16];
  
  FUN_00659c90(param_1,param_2);
  local_28 = 0;
  iVar7 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&local_24,4);
    if (local_24 != 0x4b4f4c42) {
      puVar8 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar8 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\ArrowProjectile.cpp",0x8f1,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar8);
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar8 + 9),*(undefined4 *)((int)puVar8 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\ArrowProjectile.cpp",0x8f1,*puVar8,uVar4);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_28,2);
  }
  FUN_004534d0((int *)(in_ECX + 0x60),4);
  FUN_0046ac80(in_ECX + 100,4);
  FUN_0046ac80(in_ECX + 0x68,4);
  FUN_0046ac80(in_ECX + 0x6c,4);
  FUN_0046ac80(in_ECX + 0x70,4);
  FUN_0046ac80(in_ECX + 0x74,4);
  FUN_0046ac80(in_ECX + 0x88,0xc);
  FUN_0046aca0(&uStack_20,4);
  *(undefined4 *)(in_ECX + 0x78) = uStack_20;
  FUN_0046aca0(&uStack_1c,4);
  *(undefined4 *)(in_ECX + 0x7c) = uStack_1c;
  FUN_0046aca0(&uStack_18,4);
  *(undefined4 *)(in_ECX + 0x84) = uStack_18;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) {
    FUN_00452170(8);
  }
  param_2 = param_2 & 0xffffff00;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) {
LAB_006085c0:
    iVar5 = *(int *)(in_ECX + 0x60);
    if ((iVar5 != 1) && (iVar5 != 2)) {
      param_2 = (uint)param_2._1_3_ << 8;
      goto LAB_00608745;
    }
    param_2 = CONCAT31(param_2._1_3_,1);
  }
  else {
    FUN_0046ac80(&param_2,1);
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) goto LAB_006085c0;
    if ((char)param_2 == '\0') goto LAB_00608745;
  }
  iVar5 = FUN_00401f00(0x54);
  *(int *)(in_ECX + 0x5c) = iVar5;
  *(undefined4 *)(iVar5 + 0x2c) = 0;
  *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x28) = 0;
  puVar8 = &DAT_00b26dc4;
  puVar9 = (undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x30);
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_004534d0(*(undefined4 *)(in_ECX + 0x5c),4);
  FUN_0046ac80(*(int *)(in_ECX + 0x5c) + 4,0xc);
  FUN_0046ac80(*(int *)(in_ECX + 0x5c) + 0x10,0xc);
  FUN_0046ac80(*(int *)(in_ECX + 0x5c) + 0x1c,0xc);
  if (0x4f < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(auStack_10,0x10);
    FUN_0047c600(*(int *)(in_ECX + 0x5c) + 0x30);
  }
  if ((**(int **)(in_ECX + 0x5c) == 1) || (**(int **)(in_ECX + 0x5c) == 0)) {
    FUN_0046aca0(&uStack_14,4);
    *(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x28) = uStack_14;
    if (0x1f < *(byte *)(DAT_00b33b00 + 0x7c)) {
      FUN_0046ac80(&param_1,2);
      FUN_0046ac80(asStack_2c,2);
      *(uint *)(*(int *)(in_ECX + 0x5c) + 0x2c) = param_1 * 0x10000 + (int)asStack_2c[0];
      if (0x1f < *(byte *)(DAT_00b33b00 + 0x7c)) goto LAB_00608745;
    }
    FUN_0046ac80(&param_1,1);
    _Dst = (void *)thunk_FUN_00401aa0((param_1 & 0xff) + 1,1);
    _memset(_Dst,0,(param_1 & 0xff) + 1);
    FUN_0046ac80(_Dst,param_1 & 0xff);
    *(void **)(*(int *)(in_ECX + 0x5c) + 0x2c) = _Dst;
  }
LAB_00608745:
  if (0x53 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x95,1);
  }
  if (0x54 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac80(in_ECX + 0x96,1);
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar8 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar8 == (undefined4 *)0x0) {
      uVar6 = local_28 & 0xffff;
      if (uVar6 + iVar7 < uVar1) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar1 - uVar6) - iVar7,".\\AI\\ArrowProjectile.cpp",0x961,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar1 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar1) + iVar7,".\\AI\\ArrowProjectile.cpp",0x961,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar3 = (int *)FUN_0046b250(*puVar8);
      uVar6 = (local_28 & 0xffff) + iVar7;
      if (uVar6 < uVar1) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar8 + 9),*(undefined4 *)((int)puVar8 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar1 - (local_28 & 0xffff)) - iVar7,".\\AI\\ArrowProjectile.cpp",0x961,
                     *puVar8,uVar4);
        return;
      }
      if (uVar1 < uVar6) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar8 + 9),*(undefined4 *)((int)puVar8 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_28 & 0xffff) - uVar1) + iVar7,".\\AI\\ArrowProjectile.cpp",0x961,
                     *puVar8,uVar4);
        return;
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006088f0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,int *param_7)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int in_ECX;
  float10 fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_48;
  if (param_7 == (int *)0x0) {
    return;
  }
  if (*(char *)(in_ECX + 0x97) != '\0') {
    return;
  }
  iVar1 = (**(code **)(*param_7 + 0x58))();
  if (iVar1 == 0) goto LAB_00608ab8;
  iVar1 = param_7[2];
  fStack_48 = *(float *)(in_ECX + 0x6c);
  if ((iVar1 == 0) || (iVar1 == -0x14)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x30);
  }
  uVar2 = uVar2 & 0x3f;
  if (uVar2 == 8) {
LAB_0060898d:
    pfVar3 = (float *)FUN_00403c00();
    fStack_48 = fStack_48 * *pfVar3;
  }
  else if (uVar2 == 10) {
    pfVar3 = (float *)FUN_00403c00();
    fStack_48 = *pfVar3 * fStack_48;
  }
  else {
    if (uVar2 != 0xe) goto LAB_0060898d;
    pfVar3 = (float *)FUN_00403c00();
    fStack_48 = *pfVar3 * fStack_48;
  }
  if (param_7[2] == 0) {
    fVar4 = (float10)0;
  }
  else {
    fVar4 = (float10)FUN_0089da90();
  }
  fStack_44 = (float)fVar4;
  if (fStack_44 < _DAT_00b37108) {
    fStack_48 = (fStack_44 / _DAT_00b37108) * fStack_48;
  }
  fStack_48 = _DAT_00b370e0 * fStack_48;
  iVar1 = param_7[2];
  param_4 = param_4 * 0.14287673;
  param_5 = param_5 * 0.14287673;
  param_6 = param_6 * 0.14287673;
  fVar6 = param_6 * param_6;
  fStack_30 = param_1 * 0.14287673;
  fVar5 = fVar6 + param_5 * param_5 + param_4 * param_4;
  fStack_2c = param_2 * 0.14287673;
  auVar7._4_4_ = fVar6;
  auVar7._0_4_ = fVar5;
  auVar7._8_4_ = fVar6;
  auVar7._12_4_ = fVar6;
  auVar7 = rsqrtss(auVar7,auVar7);
  fVar6 = auVar7._0_4_;
  fStack_28 = param_3 * 0.14287673;
  fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
  fStack_40 = fVar5 * param_4 * fStack_48;
  fStack_3c = fVar5 * param_5 * fStack_48;
  fStack_38 = fVar5 * param_6 * fStack_48;
  fStack_34 = fVar5 * fStack_34 * fStack_48;
  FUN_008a6410();
  (**(code **)(**(int **)(iVar1 + 0x50) + 0x60))(&fStack_40,&fStack_30);
LAB_00608ab8:
  *(undefined1 *)(in_ECX + 0x97) = 1;
  return;
}



void FUN_00608ae0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x8c);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x8c) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



uint FUN_00608b30(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x364) == 0) {
    return 0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 0x364) + 8);
  if ((iVar1 != 0) && (iVar1 != -0x14)) {
    return *(uint *)(iVar1 + 0x30) >> 0x10;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00608b60(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_4c [12];
  undefined1 local_40 [28];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_18 = &LAB_009c2f38;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_4c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_1c;
  *in_ECX = &PTR_FUN_00a6f08c;
  in_ECX[6] = &PTR_FUN_00a6f084;
  DAT_00b3b7d0 = DAT_00b3b7d0 + -1;
  local_14 = 0;
  FUN_0065c620(in_ECX);
  if (((in_ECX[0xf] != 0) && ((int *)in_ECX[0x17] != (int *)0x0)) && (*(int *)in_ECX[0x17] == 1)) {
    iVar4 = FUN_00480340(in_ECX[0xf],uVar3);
    if ((iVar4 != 0) && (*(int **)(iVar4 + 0x10) != (int *)0x0)) {
      (**(code **)(**(int **)(iVar4 + 0x10) + 0xa8))(local_40);
      FUN_00535dd0(local_40,*(undefined4 *)(in_ECX[0x17] + 0x2c));
    }
  }
  if (((*(char *)(in_ECX + 0x25) == '\0') && (piVar1 = (int *)in_ECX[0x17], piVar1 != (int *)0x0))
     && ((*piVar1 == 0 && (piVar1[10] != 0)))) {
    cVar2 = (**(code **)(*(int *)piVar1[10] + 400))();
    if (((cVar2 != '\0') && (*(int *)(in_ECX[0x17] + 0x28) != 0)) &&
       (piVar1 = *(int **)(*(int *)(in_ECX[0x17] + 0x28) + 0x58), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x4fc))();
    }
  }
  FUN_00401f20(in_ECX[0x17]);
  TESObjectREFR_Set3D(0);
  if (*(char *)(DAT_00b33a98 + 0xcd4) == '\0') {
    FUN_0065a050(0);
  }
  local_14 = 0xffffffff;
  FUN_00659f90();
  *unaff_FS_OFFSET = local_1c;
  return;
}



void FUN_00608cb0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 auStack_24 [9];
  
  iVar2 = (**(code **)(*in_ECX + 0x154))();
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0x60) = 0x3f800000;
    puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
    *(undefined4 *)(iVar2 + 0x54) = *puVar3;
    *(undefined4 *)(iVar2 + 0x58) = puVar3[1];
    *(undefined4 *)(iVar2 + 0x5c) = puVar3[2];
    FUN_007117c0(in_ECX[10],in_ECX[8],in_ECX[9]);
    puVar3 = auStack_24;
    puVar6 = (undefined4 *)(iVar2 + 0x30);
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    iVar5 = FUN_00480340(iVar2);
    if (iVar5 != 0) {
      piVar1 = *(int **)(iVar5 + 0x10);
      if (((piVar1 == (int *)0x0) || (iVar5 = piVar1[2], iVar5 == 0)) || (iVar5 == -0x14)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar5 + 0x30);
      }
      if (((piVar1 != (int *)0x0) && (iVar5 = piVar1[2], iVar5 != 0)) && (iVar5 != -0x14)) {
        *(uint *)(iVar5 + 0x30) = uVar4 | 0x4000;
      }
      (**(code **)(*piVar1 + 0x80))();
    }
    FUN_00481570(iVar2);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00608da0(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  float fStack_44;
  float local_40 [4];
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&fStack_44;
  iVar4 = in_ECX[0x17];
  if (iVar4 != 0) {
    cVar1 = FUN_008aa390(&DAT_00b3f9a8);
    if (cVar1 != '\0') {
      *(undefined4 *)(iVar4 + 0x10) = *param_2;
      *(undefined4 *)(iVar4 + 0x14) = param_2[1];
      *(undefined4 *)(iVar4 + 0x18) = param_2[2];
    }
    cVar1 = FUN_008aa390(&DAT_00b3f9a8);
    if (cVar1 != '\0') {
      iVar4 = in_ECX[0x17];
      *(undefined4 *)(iVar4 + 4) = *param_1;
      *(undefined4 *)(iVar4 + 8) = param_1[1];
      *(undefined4 *)(iVar4 + 0xc) = param_1[2];
    }
    *(undefined4 *)in_ECX[0x17] = 3;
    *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
    return;
  }
  puVar2 = (undefined4 *)FUN_00401f00(0x54);
  in_ECX[0x17] = (int)puVar2;
  *puVar2 = 3;
  *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
  *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
  iVar4 = in_ECX[0x17];
  *(undefined4 *)(iVar4 + 0x10) = *param_2;
  *(undefined4 *)(iVar4 + 0x14) = param_2[1];
  *(undefined4 *)(iVar4 + 0x18) = param_2[2];
  iVar4 = in_ECX[0x17];
  *(undefined4 *)(iVar4 + 4) = *param_1;
  *(undefined4 *)(iVar4 + 8) = param_1[1];
  *(undefined4 *)(iVar4 + 0xc) = param_1[2];
  puVar2 = &DAT_00b26dc4;
  puVar5 = (undefined4 *)(in_ECX[0x17] + 0x30);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar4 = in_ECX[0x17];
  *(undefined4 *)(iVar4 + 0x1c) = DAT_00b3f9a8;
  *(undefined4 *)(iVar4 + 0x20) = DAT_00b3f9ac;
  *(undefined4 *)(iVar4 + 0x24) = DAT_00b3f9b0;
  iVar4 = FUN_0065a2c0();
  if (iVar4 != 0) {
    iVar4 = FUN_0065a2c0();
    if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
      pfVar3 = (float *)&DAT_00ba7a40;
    }
    else {
      pfVar3 = (float *)FUN_008ac0a0();
    }
    local_40[0] = *pfVar3;
    fStack_2c = pfVar3[1];
    fStack_28 = pfVar3[2];
    fStack_24 = pfVar3[3];
    local_30 = local_40[0];
    if (local_40[0] == -3.4028235e+38) {
      iVar4 = (**(code **)(*in_ECX + 0x154))();
      if (iVar4 != 0) {
        fStack_44 = (float)in_ECX[0x1b];
        local_30 = fStack_44 * DAT_00b258dc;
        fStack_2c = DAT_00b258e0 * fStack_44;
        fStack_28 = fStack_44 * DAT_00b258e4;
        (**(code **)(*in_ECX + 0x154))();
        puVar2 = (undefined4 *)FUN_007101f0(local_40,&local_30);
        iVar4 = in_ECX[0x17];
        *(undefined4 *)(iVar4 + 0x1c) = *puVar2;
        *(undefined4 *)(iVar4 + 0x20) = puVar2[1];
        *(undefined4 *)(iVar4 + 0x24) = puVar2[2];
      }
    }
    else {
      FUN_0043f3e0(in_ECX[0x17] + 0x1c,&local_30);
    }
  }
  in_ECX[0x18] = 1;
  return;
}



undefined4 FUN_00608fc0(void)

{
  float fVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int iVar7;
  int unaff_EBX;
  undefined4 *puVar8;
  uint uVar9;
  
  iVar5 = (**(code **)(*in_ECX + 0x154))();
  (**(code **)(*in_ECX + 0x1c8))();
  if ((*(int *)(in_ECX[0x17] + 0x28) == 0) ||
     (cVar4 = (**(code **)(**(int **)(in_ECX[0x17] + 0x28) + 400))(), cVar4 == '\0')) {
    FUN_004a7a60(
                "An arrow thinks it is colliding with an Actor, but there is no Actor in the collision data!"
                );
    return 0;
  }
  piVar2 = *(int **)(in_ECX[0x17] + 0x2c);
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  FUN_0088cd50(iVar5,1,0);
  FUN_00536740(iVar5);
  fVar1 = *(float *)(iVar5 + 0x60);
  iVar7 = in_ECX[0x17];
  *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar7 + 4);
  *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar7 + 8);
  *(undefined4 *)(iVar5 + 0x5c) = *(undefined4 *)(iVar7 + 0xc);
  puVar6 = (undefined4 *)(in_ECX[0x17] + 0x30);
  puVar8 = (undefined4 *)(iVar5 + 0x30);
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar8 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar8 = puVar8 + 1;
  }
  *(float *)(iVar5 + 0x60) = ABS(fVar1 / (float)piVar2[0x25]);
  FUN_007b4280(0);
  FUN_007c5e70(iVar5);
  (**(code **)(*piVar2 + 0x84))(iVar5,1);
  FUN_007c5d00(iVar5);
  uVar9 = 0;
  if (*(short *)(iVar5 + 0x14) != 0) {
    do {
      piVar2 = *(int **)(*(int *)(iVar5 + 0x10) + (uVar9 & 0xffff) * 4);
      if (piVar2 == (int *)0x0) {
LAB_006090f6:
        uVar9 = uVar9 + 1;
      }
      else {
        for (puVar6 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar6 != (undefined4 *)0x0;
            puVar6 = (undefined4 *)puVar6[1]) {
          if (puVar6 == &DAT_00b35acc) {
            bVar3 = 1;
            goto LAB_006090e0;
          }
        }
        bVar3 = 0;
LAB_006090e0:
        if ((-(uint)bVar3 & (uint)piVar2) == 0) goto LAB_006090f6;
        FUN_006ffbe0(uVar9 & 0xffff);
      }
    } while (uVar9 < *(ushort *)(iVar5 + 0x14));
  }
  iVar5 = *(int *)(*(int *)(unaff_EBX + 0x5c) + 0x28);
  if ((iVar5 != 0) && (piVar2 = *(int **)(iVar5 + 0x58), piVar2 != (int *)0x0)) {
    (**(code **)(*piVar2 + 0x4f8))(unaff_EBX);
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00609150(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  int *in_ECX;
  float10 fVar7;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [28];
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_34;
  (**(code **)(*in_ECX + 0x1c8))();
  if (*(int *)(in_ECX[0x17] + 0x28) == 0) {
    FUN_004a7a60(
                "An arrow thinks it is colliding with an Reference, but there is no Reference in the collision data!"
                );
  }
  else {
    iVar2 = FUN_00480340(*(undefined4 *)(in_ECX[0x17] + 0x2c));
    if (iVar2 != 0) {
      iVar2 = *(int *)(iVar2 + 0x10);
      uVar3 = (**(code **)(*in_ECX + 0x154))(6,1,0);
      FUN_0088d070(uVar3);
      if (((iVar2 == 0) || (iVar1 = *(int *)(iVar2 + 8), iVar1 == 0)) || (iVar1 == -0x14)) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar1 + 0x30);
      }
      uVar5 = uVar4 & 0xffff0006 | 6;
      if (((iVar2 == 0) || (iVar2 = *(int *)(iVar2 + 8), iVar2 == 0)) || (iVar2 == -0x14)) {
        bVar6 = 0;
      }
      else {
        bVar6 = (byte)*(undefined4 *)(iVar2 + 0x30);
      }
      if ((bVar6 & 0x3f) != 4) {
        uVar5 = uVar4 & 0xffff0006 | 0xf;
      }
      if (((param_1 != (int *)0x0) && (iVar2 = param_1[2], iVar2 != 0)) && (iVar2 != -0x14)) {
        *(uint *)(iVar2 + 0x30) = uVar5;
      }
      (**(code **)(*param_1 + 0x80))();
      FUN_00446cb0(in_ECX);
      fVar7 = (float10)FUN_00535ac0();
      if ((float10)0.0 < fVar7) {
        (**(code **)(*param_1 + 0xa8))(auStack_30);
        FUN_00535be0(auStack_30,*(undefined4 *)(in_ECX[0x17] + 0x2c));
      }
      return 1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_006092a0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_174 [8];
  int *local_16c;
  int iStack_168;
  undefined4 auStack_164 [9];
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 auStack_130 [12];
  undefined4 uStack_100;
  undefined4 auStack_fc [9];
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 auStack_c8 [13];
  undefined1 auStack_94 [52];
  undefined1 auStack_60 [48];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_174;
  local_16c = in_ECX;
  iVar3 = (**(code **)(*in_ECX + 0x154))();
  if ((((iVar3 != 0) && (((uint)in_ECX[2] >> 5 & 1) == 0)) &&
      (piVar1 = (int *)in_ECX[0x17], piVar1 != (int *)0x0)) && (*piVar1 == 1)) {
    iVar4 = FUN_00480340(piVar1[0xb]);
    if (iVar4 == 0) {
      (**(code **)(*in_ECX + 0x8c))(1);
    }
    else {
      iVar4 = *(int *)(iVar4 + 0x10);
      iStack_168 = iVar4;
      cVar2 = FUN_00607880();
      if (cVar2 == '\0') {
        iVar5 = FUN_004b6d90();
        iVar7 = iStack_168;
        if (iVar5 == 6) {
          puVar6 = (undefined4 *)(*(int *)(in_ECX[0x17] + 0x2c) + 100);
          puVar8 = auStack_130;
          for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar8 = puVar8 + 1;
          }
          cVar2 = FUN_00405650(&DAT_00ba8018,iStack_168);
          in_ECX = local_16c;
          if (cVar2 != '\0') {
            FUN_008b1dd0(iVar7 + 0x20);
            uStack_30 = *(undefined4 *)(iVar7 + 0x30);
            uStack_2c = *(undefined4 *)(iVar7 + 0x34);
            uStack_28 = *(undefined4 *)(iVar7 + 0x38);
            uStack_24 = *(undefined4 *)(iVar7 + 0x3c);
            FUN_006077c0(auStack_164,auStack_60);
            puVar6 = auStack_130;
            puVar8 = auStack_c8;
            for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
            puVar6 = (undefined4 *)FUN_0053d7a0(auStack_94,auStack_164);
            puVar8 = auStack_130;
            for (iVar4 = 0xd; in_ECX = local_16c, iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar6;
              puVar6 = puVar6 + 1;
              puVar8 = puVar8 + 1;
            }
          }
        }
        else {
          if (iVar4 == 0) {
            iVar4 = 0;
          }
          else {
            iVar4 = *(int *)(iVar4 + 8);
          }
          FUN_006077c0(auStack_130,*(int *)(iVar4 + 0x50) + 0x10);
        }
        iVar4 = in_ECX[0x17];
        uStack_100 = 0x3f800000;
        puVar6 = (undefined4 *)(iVar4 + 0x30);
        puVar8 = auStack_fc;
        for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        uStack_d8 = *(undefined4 *)(iVar4 + 4);
        uStack_d4 = *(undefined4 *)(iVar4 + 8);
        uStack_d0 = *(undefined4 *)(iVar4 + 0xc);
        uStack_cc = 0x3f800000;
        FUN_0053d7a0(auStack_164,auStack_fc);
        FUN_004d8a30(uStack_140,uStack_13c,uStack_138);
        *(undefined4 *)(iVar3 + 0x54) = uStack_140;
        *(undefined4 *)(iVar3 + 0x58) = uStack_13c;
        puVar6 = auStack_164;
        puVar8 = (undefined4 *)(iVar3 + 0x30);
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + 1;
          puVar8 = puVar8 + 1;
        }
        *(undefined4 *)(iVar3 + 0x5c) = uStack_138;
        FUN_00707370(0,0);
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_006094c0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x1c8))();
  iVar1 = in_ECX[0x17];
  iVar2 = (**(code **)(*in_ECX + 0x154))();
  *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar1 + 8);
  *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar1 + 0xc);
  iVar1 = in_ECX[0x17];
  FUN_004d8a30(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc));
  if (((param_1 == (int *)0x0) || (iVar1 = param_1[2], iVar1 == 0)) || (iVar1 == -0x14)) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(iVar1 + 0x30);
  }
  if (((param_1 != (int *)0x0) && (iVar1 = param_1[2], iVar1 != 0)) && (iVar1 != -0x14)) {
    *(uint *)(iVar1 + 0x30) = uVar3 & 0xffffbfcf | 0xf;
  }
  (**(code **)(*param_1 + 0x80))();
  if ((DAT_00b3b7d4 == 0) &&
     (DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff, DAT_00b3b7d4 = DAT_00b2eb3c, DAT_00b2eb3c == 0)) {
    DAT_00b2eb3c = 10;
    DAT_00b3b7d4 = DAT_00b2eb3c;
  }
  iVar1 = param_1[2];
  if ((iVar1 != 0) && (iVar1 != -0x14)) {
    *(uint *)(iVar1 + 0x30) = DAT_00b3b7d4 << 0x10 | 0xf;
  }
  (**(code **)(*param_1 + 0x80))();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_006095b0(int *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
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
  float afStack_30 [3];
  undefined1 auStack_24 [36];
  
  (**(code **)(*in_ECX + 0x1c8))();
  cVar2 = FUN_0045a500();
  if (cVar2 == '\0') {
    iVar4 = in_ECX[0x17];
    iVar3 = (**(code **)(*in_ECX + 0x154))();
    *(undefined4 *)(iVar3 + 0x54) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(iVar3 + 0x58) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(iVar3 + 0x5c) = *(undefined4 *)(iVar4 + 0xc);
    uVar7 = 0;
    uVar6 = 0;
    (**(code **)(*in_ECX + 0x154))(0,0);
    FUN_00707370(uVar6,uVar7);
  }
  uVar6 = (**(code **)(*in_ECX + 0x154))(1,1,0);
  FUN_0088d070(uVar6);
  if ((DAT_00b3b7d4 == 0) &&
     (DAT_00b2eb3c = DAT_00b2eb3c + 1 & 0xffff, DAT_00b3b7d4 = DAT_00b2eb3c, DAT_00b2eb3c == 0)) {
    DAT_00b2eb3c = 10;
    DAT_00b3b7d4 = DAT_00b2eb3c;
  }
  if (((param_1 != (int *)0x0) && (iVar4 = param_1[2], iVar4 != 0)) && (iVar4 != -0x14)) {
    *(uint *)(iVar4 + 0x30) = DAT_00b3b7d4 << 0x10 | 4;
  }
  (**(code **)(*param_1 + 0x80))();
  cVar2 = FUN_0045a500();
  if (cVar2 == '\0') {
    fStack_60 = (float)in_ECX[0x22] * -1.0;
    fStack_5c = (float)in_ECX[0x23] * -1.0;
    fStack_58 = (float)in_ECX[0x24] * -1.0;
    FUN_004bfaa0(&fStack_60);
    FUN_004bfaa0(in_ECX[0x17] + 0x10);
    iVar4 = in_ECX[0x17];
    fVar1 = fStack_5c * *(float *)(iVar4 + 0x14) + fStack_60 * *(float *)(iVar4 + 0x10) +
            fStack_58 * *(float *)(iVar4 + 0x18);
    fStack_48 = (fVar1 * *(float *)(iVar4 + 0x10) - fStack_60) * 2.0;
    fStack_44 = (*(float *)(iVar4 + 0x14) * fVar1 - fStack_5c) * 2.0;
    fStack_40 = (fVar1 * *(float *)(iVar4 + 0x18) - fStack_58) * 2.0;
    fStack_60 = fStack_48 + fStack_60;
    fStack_5c = fStack_5c + fStack_44;
    fStack_58 = fStack_58 + fStack_40;
    fStack_34 = (float)in_ECX[0x1b] * _DAT_00b37058;
    fStack_3c = fStack_34 * fStack_60;
    fStack_38 = fStack_5c * fStack_34;
    fStack_34 = fStack_34 * fStack_58;
    FUN_004d9960(&fStack_3c);
    (**(code **)(*in_ECX + 0x154))();
    FUN_007102b0(auStack_24);
    FUN_007101f0(&fStack_54,in_ECX[0x17] + 0x10);
    if (ABS(fStack_4c) < ABS(fStack_50)) {
      fVar5 = (float10)FUN_00537770(fStack_4c);
      fStack_4c = (float)(fVar5 * (float10)ABS(fStack_50));
    }
    fStack_50 = 0.0;
    FUN_004bfaa0(&fStack_54);
    afStack_30[0] = _DAT_00b37050 * fStack_4c;
    afStack_30[1] = 0.0;
    afStack_30[2] = -fStack_54 * _DAT_00b37050;
    (**(code **)(*in_ECX + 0x154))();
    uVar6 = FUN_007101f0(&fStack_3c,afStack_30);
    FUN_004d99e0(uVar6);
  }
  uVar6 = (**(code **)(*in_ECX + 0x154))();
  iVar4 = FUN_00480340(uVar6);
  if (iVar4 != 0) {
    *(ushort *)(iVar4 + 0xc) = *(ushort *)(iVar4 + 0xc) | 0xc;
  }
  return 1;
}



undefined4 FUN_006098c0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x1c8))();
  uVar1 = (**(code **)(*in_ECX + 0x154))(1,1,0);
  FUN_0088d070(uVar1);
  iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX[0x17] + 0x28),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0)
  ;
  if ((iVar2 == 0) || (iVar2 = FUN_0065a2c0(), iVar2 == 0)) {
    uVar3 = DAT_00b3b7d4;
    if ((DAT_00b3b7d4 == 0) &&
       (uVar3 = DAT_00b2eb3c + 1 & 0xffff, DAT_00b2eb3c = uVar3, DAT_00b3b7d4 = uVar3, uVar3 == 0))
    {
      DAT_00b2eb3c = 10;
      uVar3 = DAT_00b2eb3c;
      DAT_00b3b7d4 = DAT_00b2eb3c;
    }
  }
  else {
    iVar2 = FUN_0065a2c0();
    if (*(int *)(iVar2 + 0x364) == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x364) + 8);
      if ((iVar2 == 0) || (iVar2 == -0x14)) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(uint *)(iVar2 + 0x30) >> 0x10;
      }
    }
  }
  if (((param_1 != (int *)0x0) && (iVar2 = param_1[2], iVar2 != 0)) && (iVar2 != -0x14)) {
    *(uint *)(iVar2 + 0x30) = uVar3 << 0x10 | 4;
  }
  (**(code **)(*param_1 + 0x80))();
  FUN_004d9960(in_ECX[0x17] + 0x1c);
  iVar2 = FUN_0047fa60(param_1[2]);
  if (iVar2 != 0) {
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) | 0xc;
  }
  return 1;
}



void FUN_006099d0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  short *psVar5;
  char cVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int in_ECX;
  uint local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  short *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10 [16];
  
  FUN_00659c30(param_1);
  local_18 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_1c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_20 = 0x4b4f4c42;
    FUN_0045b9a0(&local_20,4);
    local_1c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_18,2);
  }
  FUN_0045b9a0(in_ECX + 0x60,4);
  FUN_0046ac70(in_ECX + 100,4);
  FUN_0046ac70(in_ECX + 0x68,4);
  FUN_0046ac70(in_ECX + 0x6c,4);
  FUN_0046ac70(in_ECX + 0x70,4);
  FUN_0046ac70(in_ECX + 0x74,4);
  FUN_0046ac70(in_ECX + 0x88,0xc);
  local_2c = 0;
  if (*(int *)(in_ECX + 0x78) != 0) {
    local_2c = *(undefined4 *)(*(int *)(in_ECX + 0x78) + 0xc);
  }
  FUN_0046ac90(&local_2c,4);
  local_28 = 0;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    local_28 = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0xc);
  }
  FUN_0046ac90(&local_28,4);
  local_24 = 0;
  if (*(int *)(in_ECX + 0x84) != 0) {
    local_24 = *(undefined4 *)(*(int *)(in_ECX + 0x84) + 0xc);
  }
  FUN_0046ac90(&local_24,4);
  uVar3 = param_1;
  param_1 = param_1 & 0xffffff00;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    param_1 = CONCAT31(SUB43(uVar3,1),1);
  }
  FUN_0046ac70(&param_1,1);
  if ((char)param_1 != '\0') {
    FUN_0045b9a0(*(undefined4 *)(in_ECX + 0x5c),4);
    FUN_0046ac70(*(int *)(in_ECX + 0x5c) + 4,0xc);
    FUN_0046ac70(*(int *)(in_ECX + 0x5c) + 0x10,0xc);
    FUN_0046ac70(*(int *)(in_ECX + 0x5c) + 0x1c,0xc);
    if (0x4f < *(byte *)(DAT_00b33b00 + 0x7c)) {
      FUN_007150f0(*(int *)(in_ECX + 0x5c) + 0x30);
      FUN_0045b9a0(local_10,0x10);
    }
    iVar2 = **(int **)(in_ECX + 0x5c);
    if ((iVar2 == 1) || (iVar2 == 0)) {
      local_20 = 0;
      iVar2 = (*(int **)(in_ECX + 0x5c))[10];
      if (iVar2 != 0) {
        local_20 = *(undefined4 *)(iVar2 + 0xc);
      }
      FUN_0046ac90(&local_20,4);
      piVar8 = *(int **)(in_ECX + 0x5c);
      local_34 = 0;
      local_30 = 0xffffffff;
      if ((piVar8[10] != 0) && (uVar3 = piVar8[0xb], uVar3 != 0)) {
        if (*(char *)(in_ECX + 0x94) == '\0') {
          local_14 = CONCAT31(local_14._1_3_,*piVar8 == 0);
          uVar9 = local_14;
          local_34 = FUN_00480c50(*(undefined4 *)(piVar8[10] + 0x3c),local_14,local_14,1);
          local_34 = local_34 & 0xffff;
          uVar7 = FUN_004a05e0(*(undefined4 *)(*(int *)(in_ECX + 0x5c) + 0x2c));
          local_30 = FUN_00480d60(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x5c) + 0x28) + 0x3c),
                                  uVar7,uVar9,uVar9,1);
          local_30 = local_30 & 0xffff;
        }
        else {
          local_30 = uVar3 & 0xffff;
          local_34 = uVar3 >> 0x10;
        }
      }
      FUN_0046ac70(&local_34,2);
      FUN_0046ac70(&local_30,2);
    }
  }
  if (0x53 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x95,1);
  }
  if (0x54 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x96,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar2 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar2 - iVar1,0x8e6,
                   ".\\AI\\ArrowProjectile.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar4);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar4 + 5),0x8e6,".\\AI\\ArrowProjectile.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar2 - iVar1,*puVar4,uVar9);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_1c;
  if (cVar6 != '\0') {
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_1c + 0xffffU < uVar3) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\ArrowProjectile.cpp",0x8e6);
    }
    *psVar5 = (short)uVar3 - (short)psVar5;
  }
  return;
}



void FUN_00609d50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,undefined1 param_6)

{
  int iVar1;
  int *in_ECX;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  iVar1 = (**(code **)(*in_ECX + 0x154))();
  if (((iVar1 != 0) && ((int *)in_ECX[0x17] != (int *)0x0)) && (*(int *)in_ECX[0x17] == 1)) {
    iVar1 = FUN_00480340(iVar1);
    if ((iVar1 != 0) && (iStack_8 = *(int *)(iVar1 + 0x10), iStack_8 != 0)) {
      uStack_14 = 0x3f000000;
      iStack_4 = param_5;
      iVar1 = FUN_00494f10();
      uStack_10 = *(undefined1 *)(iVar1 + 0x10);
      uStack_18 = param_1;
      uStack_24 = param_2;
      uStack_f = param_6;
      iStack_c = param_5 + (int)in_ECX;
      uStack_20 = param_3;
      uStack_1c = param_4;
      FUN_006b0c70(&uStack_24);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_00609df0(int *param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float *param_8,undefined4 param_9)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  int *piVar11;
  undefined4 uVar12;
  code *pcVar13;
  int iVar14;
  undefined1 auStack_184 [15];
  char local_175;
  float local_174;
  undefined1 uStack_16d;
  int *local_16c;
  float *local_168;
  uint uStack_164;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined1 auStack_100 [20];
  float local_ec;
  undefined1 local_e0 [16];
  undefined1 local_d0 [32];
  undefined4 local_b0;
  undefined4 local_ac;
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
  undefined1 local_60 [48];
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_184;
  local_16c = param_1;
  local_168 = param_8;
  local_175 = '\0';
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar7 = FUN_0047fac0(param_1);
  if ((iVar7 == 0) || (piVar11 = *(int **)(iVar7 + 0x10), piVar11 == (int *)0x0)) goto LAB_0060a12c;
  iVar1 = piVar11[2];
  if ((iVar1 == 0) ||
     (((int *)(iVar1 + 0x14) == (int *)0x0 || (iVar14 = *(int *)(iVar1 + 0x14), iVar14 == 0)))) {
    iVar14 = 0;
  }
  else {
    iVar14 = *(int *)(iVar14 + 8);
  }
  param_1 = local_16c;
  if (iVar14 == 0) goto LAB_0060a12c;
  if ((iVar1 == 0) || (iVar1 == -0x14)) {
    bVar5 = 0;
  }
  else {
    bVar5 = (byte)*(undefined4 *)(iVar1 + 0x30);
  }
  if ((((((bVar5 & 0x3f) != 8) ||
        (puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c,
        (*puVar8 & 0x1f00) == 0x1600)) ||
       (puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c, (*puVar8 & 0x1f00) == 0x1200
       )) || ((puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c,
              (*puVar8 & 0x1f00) == 0x1300 ||
              (puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c,
              (*puVar8 & 0x1f00) == 0x1400)))) ||
     ((puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c, (*puVar8 & 0x1f00) == 0x1500
      || (((char)param_9 != '\0' &&
          (puVar8 = (uint *)FUN_00497340(&local_174), param_1 = local_16c,
          (*puVar8 & 0x1f00) == 0x100)))))) goto LAB_0060a12c;
  FUN_004529e0(local_e0,&param_2);
  local_174 = *local_168;
  local_150 = local_174 * param_5;
  local_14c = param_6 * local_174;
  local_148 = local_174 * param_7;
  local_15c = param_2 + local_150;
  local_158 = param_3 + local_14c;
  local_154 = param_4 + local_148;
  FUN_004529e0(&local_150,&local_15c);
  local_ec = 1.0;
  local_b0 = 0;
  local_ac = 0;
  cVar6 = FUN_00405650(&DAT_00ba7a20,iVar7);
  if (cVar6 == '\0') {
    pcVar13 = *(code **)(*piVar11 + 0xac);
LAB_0060a0ae:
    (*pcVar13)(&local_140);
  }
  else {
    cVar6 = FUN_00607840();
    if ((cVar6 != '\0') && (*(float *)(iVar7 + 0x14) != 1.0)) {
      pcVar13 = *(code **)(*piVar11 + 0xac);
      goto LAB_0060a0ae;
    }
    FUN_005398e0(&local_140,local_16c + 0x19);
    cVar6 = FUN_00405650(&DAT_00ba8018,piVar11);
    if (cVar6 != '\0') {
      local_a0 = local_140;
      uStack_9c = uStack_13c;
      uStack_98 = uStack_138;
      uStack_94 = uStack_134;
      local_90 = local_130;
      uStack_8c = uStack_12c;
      uStack_88 = uStack_128;
      uStack_84 = uStack_124;
      local_80 = local_120;
      uStack_7c = uStack_11c;
      uStack_78 = uStack_118;
      uStack_74 = uStack_114;
      local_70 = local_110;
      uStack_6c = uStack_10c;
      uStack_68 = uStack_108;
      uStack_64 = uStack_104;
      FUN_008b1dd0(piVar11 + 8);
      local_30 = piVar11[0xc];
      iStack_2c = piVar11[0xd];
      iStack_28 = piVar11[0xe];
      iStack_24 = piVar11[0xf];
      FUN_008b1f70(&local_a0,local_60);
    }
  }
  FUN_0088fd10(&local_140,local_e0);
  FUN_0088fd10(&local_140,&local_150);
  (**(code **)(**(int **)(iVar14 + 8) + 0x14))(&uStack_16d,local_d0,auStack_100);
  pcVar9 = (char *)FUN_00538a70(&uStack_16d);
  param_1 = local_16c;
  if (*pcVar9 != '\0') {
    local_175 = '\x01';
    *local_168 = local_ec * *local_168;
  }
LAB_0060a12c:
  local_174 = (float)(**(code **)(*param_1 + 8))();
  fVar4 = param_7;
  fVar3 = param_6;
  fVar2 = param_5;
  if (local_174 != 0.0) {
    uVar10 = (uint)*(ushort *)((int)local_174 + 0xb6);
    uStack_164 = 0;
    if (uVar10 != 0) {
      do {
        if (uStack_164 < uVar10) {
          uVar12 = *(undefined4 *)(*(int *)((int)local_174 + 0xb0) + uStack_164 * 4);
        }
        else {
          uVar12 = 0;
        }
        piVar11 = (int *)FUN_00609df0(uVar12,param_2,param_3,param_4,fVar2,fVar3,fVar4,local_168,
                                      param_9);
        if (piVar11 != (int *)0x0) {
          return piVar11;
        }
        uVar10 = (uint)*(ushort *)((int)local_174 + 0xb6);
        uStack_164 = uStack_164 + 1;
        param_1 = local_16c;
      } while (uStack_164 < uVar10);
    }
  }
  if (local_175 == '\0') {
    return (int *)0x0;
  }
  return param_1;
}



void FUN_0060a210(byte param_1)

{
  FUN_00608b60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0060a230(int ***param_1,undefined4 param_2)

{
  int ***pppiVar1;
  char cVar2;
  int iVar3;
  int ***pppiVar4;
  int ***pppiVar5;
  undefined4 uVar6;
  float *pfVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte bVar10;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  int ***pppiStack_118;
  uint uStack_114;
  undefined1 auStack_104 [12];
  int ***local_f8;
  int ***pppiStack_f4;
  int **ppiStack_f0;
  int **ppiStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  undefined4 uStack_70;
  uint uStack_6c;
  int ***pppiStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined1 uStack_5c;
  undefined4 uStack_58;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int ***pppiStack_14;
  
  pppiStack_14 = (int ***)0xffffffff;
  puStack_18 = &LAB_009c2f87;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_104;
  uStack_114 = DAT_00b30aac ^ (uint)&stack0xfffffef0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_f8 = param_1;
  if (in_ECX[0x16] != 0) {
    pppiStack_118 = (int ***)0x60a28d;
    iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 8))();
    if (iVar3 == 0) {
      pppiStack_118 = (int ***)0x60a29c;
      pppiVar4 = (int ***)FUN_0065a2c0();
      pppiStack_118 = (int ***)0x60a2a5;
      ppiStack_f0 = (int **)FUN_006ecc80();
      if (ppiStack_f0 == (int **)0x0) {
        pppiVar5 = (int ***)0x0;
      }
      else {
        pppiStack_118 = (int ***)0x60a2b6;
        cVar2 = FUN_004c97f0();
        pppiVar5 = DAT_00b35c24;
        if (cVar2 != '\0') {
          pppiStack_118 = (int ***)0x60a2c2;
          pppiVar5 = (int ***)FUN_00424180();
        }
      }
      pppiStack_f4 = pppiVar5;
      if (pppiVar4 == (int ***)0x0) {
        pppiStack_118 = (int ***)0x1;
        FUN_00890c00();
        pppiVar1 = local_f8;
        uStack_64 = 0;
        pppiStack_14 = pppiVar4;
        if (local_f8 != (int ***)0x0) {
          pppiStack_118 = (int ***)0x7;
          uVar6 = (*(code *)(*local_f8)[0xa1])();
          local_f8 = (int ***)(*(code *)(*pppiVar1)[0xa1])(0x1c,uVar6);
          fVar11 = (float10)FUN_00547700(param_2,(float)(int)local_f8);
          fStack_60 = (float)fVar11;
        }
        pppiStack_118 = (int ***)0x60a350;
        uStack_70 = (**(code **)(*in_ECX + 0x154))();
        pppiStack_118 = (int ***)0x60a363;
        pfVar7 = (float *)(**(code **)(*in_ECX + 0x174))();
        pppiStack_118 = (int ***)0x14;
        fStack_e0 = *pfVar7 * 0.14287673;
        fStack_dc = pfVar7[1] * 0.14287673;
        fStack_d8 = pfVar7[2] * 0.14287673;
        pppiStack_68 = pppiVar5;
        local_f8 = (int ***)FUN_00401f00();
        pppiStack_14._0_1_ = 1;
        if (local_f8 == (int ***)0x0) {
          pppiStack_118 = (int ***)0x0;
        }
        else {
          pppiStack_118 = (int ***)0x1;
          pppiStack_118 = (int ***)FUN_00532090(0x3dcccccd);
        }
        pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
        FUN_00608ae0();
        uStack_5c = 0;
        if (pppiVar1 == (int ***)0x0) {
          pppiStack_118 = (int ***)0x60a3f0;
          uVar8 = FUN_00607b60();
        }
        else {
          pppiStack_118 = (int ***)&local_f8;
          iVar3 = FUN_0065abe0();
          uVar8 = (uint)*(ushort *)(iVar3 + 2);
        }
        pppiStack_118 = (int ***)0x1;
        uStack_6c = uVar8 << 0x10 | 6;
        uStack_58 = 6;
        iVar3 = thunk_FUN_00401aa0(0x3f0);
        bVar10 = 0x10 - ((byte)iVar3 & 0xf);
        local_f8 = (int ***)(iVar3 + (uint)bVar10);
        *(byte *)((int)local_f8 + -1) = bVar10;
        pppiStack_14._0_1_ = 2;
        pppiVar4 = (int ***)FUN_0060d8b0(&fStack_e0);
        pppiVar4[0xc9] = (int **)0x3f800000;
        pppiStack_14 = (int ***)((uint)pppiStack_14._1_3_ << 8);
        if (DAT_00b333b8 == '\0') {
          pppiVar4[0x7d] = (int **)((uint)pppiVar4[0x7d] & 0xffefffff);
        }
        else {
          pppiVar4[0x7d] = (int **)((uint)pppiVar4[0x7d] | 0x100000);
        }
        pppiVar4[0x7d] = (int **)((uint)pppiVar4[0x7d] | 0x80000);
        local_f8 = (int ***)&pppiStack_118;
        pppiStack_118 = pppiVar4;
        InterlockedIncrement((LONG *)(pppiVar4 + 1));
        (**(code **)(*(int *)in_ECX[0x16] + 400))();
        FUN_008910f0(1000);
        pppiStack_14 = (int ***)0xffffffff;
        pppiStack_118 = (int ***)0x60a4bf;
        FUN_00890f70();
      }
      pppiVar5 = pppiStack_f4;
      if ((ppiStack_f0 == (int **)0x0) || (pppiStack_f4 == (int ***)0x0)) {
        fVar11 = (float10)-4.8618427e+37;
      }
      else {
        pppiStack_118 = (int ***)0x60a4d4;
        fVar11 = (float10)FUN_004cace0();
        fVar11 = fVar11 * (float10)0.1428767293691635;
      }
      pppiVar4[0xc6] = (int **)(float)fVar11;
      if (pppiVar4[2] == (int **)0x0) {
        iVar3 = 0;
      }
      else {
        pppiStack_118 = (int ***)0x60a4f4;
        iVar3 = FUN_008ac0c0();
      }
      if (*(int *)(iVar3 + 8) == 0) {
        local_f8 = (int ***)0x0;
      }
      else {
        local_f8 = *(int ****)(*(int *)(iVar3 + 8) + 0x2b0);
      }
      pppiStack_118 = pppiVar5;
      FUN_00895060();
      pppiStack_118 = (int ***)0x60a527;
      pppiStack_f4 = (int ***)(**(code **)(*in_ECX + 0x154))();
      if (pppiVar4[0xd9] == (int **)0x0) {
        iVar3 = 0;
      }
      else {
        pppiStack_118 = (int ***)0x0;
        iVar3 = FUN_0089f6b0();
      }
      if ((int ***)iVar3 != pppiStack_f4) {
        if (pppiVar4[0xd9] != (int **)0x0) {
          pppiStack_118 = (int ***)0x0;
          FUN_0089f650(pppiStack_f4);
        }
        if ((pppiVar5 != (int ***)0x0) && (*(char *)((int)pppiVar5 + 0x1a) != '\0')) {
          pppiStack_118 = (int ***)0x0;
          (*(code *)(*pppiVar4)[0x22])();
        }
        pppiStack_118 = (int ***)0x0;
        FUN_0088d070(pppiStack_f4,6,1);
      }
      pppiStack_118 = (int ***)0x60a591;
      puVar9 = (undefined4 *)(**(code **)(*in_ECX + 0x174))();
      ppiStack_ec = (int **)*puVar9;
      uStack_e8 = puVar9[1];
      fStack_e4 = (float)puVar9[2];
      if (local_f8 != pppiVar5) {
        if (local_f8 != (int ***)0x0) {
          pppiStack_118 = (int ***)0x0;
          FUN_0088cd50(pppiStack_f4,1);
        }
        fStack_e4 = fStack_e4 + 8.0;
      }
      if (pppiVar5 != (int ***)0x0) {
        pppiStack_118 = &ppiStack_ec;
        FUN_00452a10();
        pppiStack_118 = &ppiStack_f0;
        FUN_0057e270();
        pppiStack_118 = (int ***)0x0;
        (*(code *)(*pppiVar5)[0x24])(pppiStack_f4,1,0,(uint)ppiStack_f0 >> 0x10);
      }
    }
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0060a640(float *param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 uVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  int *piVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float10 fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined1 auStack_1b4 [10];
  undefined1 uStack_1aa;
  undefined4 uStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined8 uStack_198;
  float fStack_190;
  int *local_184;
  int iStack_180;
  int iStack_17c;
  float fStack_178;
  int iStack_174;
  float fStack_170;
  float afStack_16c [4];
  float fStack_15c;
  float fStack_150;
  undefined1 auStack_148 [36];
  undefined1 auStack_124 [36];
  undefined1 auStack_100 [36];
  undefined1 auStack_dc [52];
  undefined1 auStack_a8 [52];
  undefined1 auStack_74 [36];
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  undefined4 uStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_1b4;
  local_184 = param_3;
  puVar2 = (undefined4 *)FUN_00401f00(0x54);
  in_ECX[0x17] = (int)puVar2;
  *puVar2 = 0;
  *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
  *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
  iVar7 = in_ECX[0x17];
  *(undefined4 *)(iVar7 + 0x10) = *param_2;
  *(undefined4 *)(iVar7 + 0x14) = param_2[1];
  *(undefined4 *)(iVar7 + 0x18) = param_2[2];
  iVar7 = in_ECX[0x17];
  *(float *)(iVar7 + 4) = *param_1;
  *(float *)(iVar7 + 8) = param_1[1];
  *(float *)(iVar7 + 0xc) = param_1[2];
  puVar2 = &DAT_00b26dc4;
  puVar11 = (undefined4 *)(in_ECX[0x17] + 0x30);
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar11 = puVar11 + 1;
  }
  iVar7 = in_ECX[0x17];
  *(undefined4 *)(iVar7 + 0x1c) = DAT_00b3f9a8;
  *(undefined4 *)(iVar7 + 0x20) = DAT_00b3f9ac;
  *(undefined4 *)(iVar7 + 0x24) = DAT_00b3f9b0;
  iVar3 = FUN_0065a2c0();
  iVar7 = 0;
  if (iVar3 != 0) {
    iVar7 = FUN_0065a2c0();
    if ((iVar7 == 0) || (*(int *)(iVar7 + 8) == 0)) {
      pfVar4 = (float *)&DAT_00ba7a40;
    }
    else {
      pfVar4 = (float *)FUN_008ac0a0();
    }
    local_50 = *pfVar4;
    fStack_4c = pfVar4[1];
    fStack_48 = pfVar4[2];
    fStack_44 = pfVar4[3];
    local_40 = local_50;
    if (local_50 == -3.4028235e+38) {
      iVar3 = (**(code **)(*in_ECX + 0x154))();
      iVar7 = 0;
      if (iVar3 != 0) {
        fStack_48 = (float)in_ECX[0x1b];
        uStack_198 = (double)CONCAT44(uStack_198._4_4_,fStack_48);
        local_50 = fStack_48 * DAT_00b258dc;
        fStack_4c = fStack_48 * DAT_00b258e0;
        fStack_48 = fStack_48 * DAT_00b258e4;
        (**(code **)(*in_ECX + 0x154))();
        puVar2 = (undefined4 *)FUN_007101f0(&local_40,&local_50);
        iVar3 = in_ECX[0x17];
        *(undefined4 *)(iVar3 + 0x1c) = *puVar2;
        *(undefined4 *)(iVar3 + 0x20) = puVar2[1];
        iVar7 = puVar2[2];
        *(int *)(iVar3 + 0x24) = iVar7;
      }
    }
    else {
      iVar7 = FUN_0043f3e0(in_ECX[0x17] + 0x1c,&local_50);
    }
  }
  piVar6 = local_184;
  in_ECX[0x18] = 1;
  if (local_184 == (int *)0x0) {
    return iVar7;
  }
  iStack_180 = (**(code **)(*in_ECX + 0x154))();
  if (((int *)in_ECX[0x1e] != (int *)0x0) &&
     (iVar7 = (**(code **)(*(int *)in_ECX[0x1e] + 0x330))(), iVar7 != 0)) {
    piVar9 = (int *)in_ECX[0x1e];
    uVar18 = 1;
    uVar5 = (**(code **)(*piVar6 + 0x174))(1);
    (**(code **)(*piVar9 + 0x330))(uVar5);
    FUN_00618120(uVar5,uVar18);
  }
  *(int **)(in_ECX[0x17] + 0x28) = piVar6;
  uVar5 = (**(code **)(*in_ECX + 0x170))(*(int *)(in_ECX[0x17] + 0x28) + 0x44,0x100);
  FUN_004fbf90(uVar5);
  piVar9 = (int *)in_ECX[0x1e];
  if (piVar9 != (int *)0x0) {
    if ((piVar9 == DAT_00b333c4) || (cVar1 = (**(code **)(*piVar9 + 0x334))(1), cVar1 != '\0')) {
      uStack_1aa = (**(code **)(*piVar6 + 0x198))(0);
      (**(code **)(*(int *)in_ECX[0x1e] + 0x3ac))(0);
      if (((uStack_1a8._2_1_ == '\0') && (cVar1 = (**(code **)(*piVar6 + 0x198))(0), cVar1 != '\0'))
         && (((cVar1 = FUN_005e3270(), cVar1 == '\0' ||
              (cVar1 = (**(code **)(*piVar6 + 0x278))(), cVar1 != '\0')) &&
             (iVar7 = piVar6[0xf], iVar7 != 0)))) {
        puVar2 = (undefined4 *)FUN_00403c00();
        fVar12 = (float10)FUN_00547770(*puVar2);
        uStack_198 = (double)CONCAT44(uStack_198._4_4_,(float)fVar12);
        FUN_008b8700(iVar7);
        FUN_0088d070(iVar7,1,1,0);
        FUN_00707370(0,0);
        FUN_007101f0(&fStack_1a4,&DAT_00b258dc);
        FUN_0043f350();
        fStack_30 = fStack_1a4 * -1024.0;
        fStack_2c = fStack_1a0 * -1024.0;
        fStack_28 = fStack_19c * -1024.0;
        pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
        fStack_1a4 = *pfVar4 + fStack_30;
        fStack_1a0 = pfVar4[1] + fStack_2c;
        fStack_19c = pfVar4[2] + fStack_28;
        local_50 = fStack_1a4;
        fStack_4c = fStack_1a0;
        fStack_48 = fStack_19c;
        FUN_004529e0(&local_40,&fStack_1a4);
        FUN_005364b0(iVar7,&local_40,(float)uStack_198);
      }
    }
    else {
      (**(code **)(*(int *)in_ECX[0x1e] + 0x3b0))(0);
    }
  }
  iStack_17c = 0;
  if (piVar6 == DAT_00b333c4) {
    iStack_174 = FUN_00660110(0);
  }
  else {
    iStack_174 = piVar6[0xf];
  }
  fStack_170 = 512.0;
  fVar12 = (float10)(**(code **)(*in_ECX + 0x1e0))();
  FUN_0070fdd0((float)fVar12);
  fVar12 = (float10)FUN_004a9720();
  FUN_0070fd30((float)fVar12);
  pfVar4 = (float *)FUN_007100a0(auStack_148,auStack_100);
  pfVar10 = afStack_16c;
  for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar10 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar10 = pfVar10 + 1;
  }
  fStack_1a4 = afStack_16c[1];
  fStack_1a0 = fStack_15c;
  fStack_19c = fStack_150;
  FUN_004bfaa0(&fStack_1a4);
  local_50 = fStack_170 * fStack_1a4;
  fStack_4c = fStack_1a0 * fStack_170;
  fStack_48 = fStack_170 * fStack_19c;
  uStack_198._0_4_ = local_50 * 0.5;
  uStack_198._4_4_ = fStack_4c * 0.5;
  fStack_190 = fStack_48 * 0.5;
  pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
  piVar9 = local_184;
  fStack_30 = *pfVar4 - (float)uStack_198;
  uVar18 = 1;
  uStack_1a8._0_3_ = (uint3)(ushort)uStack_1a8;
  fStack_2c = pfVar4[1] - uStack_198._4_4_;
  fStack_28 = pfVar4[2] - fStack_190;
  cVar1 = (**(code **)(*local_184 + 0x198))(1);
  uVar8 = (uint)(cVar1 == '\0');
  piVar6 = &iStack_174;
  fVar13 = fStack_30;
  fVar14 = fStack_2c;
  uVar15 = uStack_1a8;
  fVar16 = fStack_1a4;
  fVar17 = fStack_1a0;
  uVar5 = (**(code **)(*piVar9 + 0x154))
                    (uStack_34,fStack_30,fStack_2c,uStack_1a8,fStack_1a4,fStack_1a0,piVar6,uVar8);
  iVar7 = FUN_00609df0(uVar5,fVar13,fVar14,uVar15,fVar16,fVar17,piVar6,uVar8,uVar18);
  uStack_198 = (double)CONCAT44(uStack_198._4_4_,iVar7);
  if (iVar7 != 0) {
    fStack_178 = fStack_170 + 18.0;
    local_50 = fStack_178 * fStack_1a4;
    fStack_4c = fStack_1a0 * fStack_178;
    fStack_48 = fStack_178 * fStack_19c;
    FUN_00718a80(auStack_dc);
    local_40 = local_50 + fStack_30;
    fStack_3c = fStack_4c + fStack_2c;
    fStack_38 = fStack_48 + fStack_28;
    puVar2 = (undefined4 *)FUN_0053d4b0(&local_50,&local_40);
    iVar7 = in_ECX[0x17];
    *(undefined4 *)(iVar7 + 4) = *puVar2;
    *(undefined4 *)(iVar7 + 8) = puVar2[1];
    *(undefined4 *)(iVar7 + 0xc) = puVar2[2];
    FUN_007102b0(auStack_124);
    puVar2 = (undefined4 *)FUN_007100a0(auStack_148,iStack_180 + 100);
    puVar11 = (undefined4 *)(in_ECX[0x17] + 0x30);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar11 = puVar11 + 1;
    }
    *(float *)(in_ECX[0x17] + 0x2c) = (float)uStack_198;
    iVar7 = FUN_00480340((float)uStack_198);
    if (iVar7 != 0) {
      iStack_17c = *(int *)(iVar7 + 0x10);
    }
    uStack_1a8._0_3_ = CONCAT12(1,(ushort)uStack_1a8);
    uStack_1a8 = (uint)(uint3)uStack_1a8;
    piVar9 = local_184;
  }
  uStack_1a8 = uStack_1a8 & 0xffffff;
  cVar1 = FUN_005e5670();
  if (((cVar1 != '\0') && ((int *)piVar9[0x16] != (int *)0x0)) &&
     ((iVar7 = (**(code **)(*(int *)piVar9[0x16] + 0xf8))(1), iVar7 != 0 &&
      (cVar1 = FUN_006131d0(piVar9), cVar1 != '\0')))) {
    fStack_3c = (float)piVar9[0xc];
    local_40 = (float)piVar9[0xb];
    fStack_38 = (float)piVar9[0xd];
    uStack_198 = (double)param_1[2];
    fVar12 = (float10)FUN_005e0660();
    fStack_178 = (float)(fVar12 * (float10)0.5 + (float10)fStack_38);
    if (fStack_178 < (float)uStack_198 != (fStack_178 == (float)uStack_198)) {
      cVar1 = '\x01';
      goto LAB_0060ad8b;
    }
  }
  cVar1 = uStack_1a8._3_1_;
LAB_0060ad8b:
  if ((uStack_1a8._2_1_ == '\0') || (cVar1 != '\0')) {
    local_40 = *param_1 * 0.14287673;
    fStack_3c = param_1[1] * 0.14287673;
    fStack_38 = param_1[2] * 0.14287673;
    uStack_24 = 0x43480000;
    fStack_30 = local_40;
    fStack_2c = fStack_3c;
    fStack_28 = fStack_38;
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*piVar9 + 0x198))(1);
      iVar7 = FUN_008afd70(iStack_174,&fStack_30,cVar1 == '\0');
    }
    else {
      iVar7 = FUN_008afb50(iStack_174,7);
    }
    if ((iVar7 != 0) &&
       (iStack_17c = iVar7, iVar7 = FUN_0047fa60(*(undefined4 *)(iVar7 + 8)), iVar7 != 0)) {
      iVar7 = FUN_00452a60();
      local_50 = fStack_1a4 * 18.0;
      uStack_198 = (double)CONCAT44(uStack_198._4_4_,iVar7);
      fStack_4c = fStack_1a0 * 18.0;
      fStack_48 = fStack_19c * 18.0;
      FUN_00718a80(auStack_a8);
      local_40 = *(float *)(iVar7 + 0x88) + local_50;
      fStack_3c = *(float *)(iVar7 + 0x8c) + fStack_4c;
      fStack_38 = *(float *)(iVar7 + 0x90) + fStack_48;
      puVar2 = (undefined4 *)FUN_0053d4b0(&local_50,&local_40);
      iVar7 = in_ECX[0x17];
      *(undefined4 *)(iVar7 + 4) = *puVar2;
      *(undefined4 *)(iVar7 + 8) = puVar2[1];
      *(undefined4 *)(iVar7 + 0xc) = puVar2[2];
      FUN_007102b0(auStack_148);
      puVar2 = (undefined4 *)FUN_007100a0(auStack_74,iStack_180 + 100);
      puVar11 = (undefined4 *)(in_ECX[0x17] + 0x30);
      for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar11 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar11 = puVar11 + 1;
      }
      *(float *)(in_ECX[0x17] + 0x2c) = (float)uStack_198;
      piVar9 = local_184;
    }
    if (*(int *)(in_ECX[0x17] + 0x2c) == 0) {
      iVar7 = FUN_006079a0(piVar9);
      return iVar7;
    }
  }
  if (iStack_17c != 0) {
    puVar2 = (undefined4 *)FUN_007101f0(&local_40,&DAT_00b258dc);
    FUN_006088f0(*param_1,param_1[1],param_1[2],*puVar2,puVar2[1],puVar2[2],iStack_17c);
  }
  if (((*(int *)(in_ECX[0x17] + 0x2c) != 0) &&
      (iVar7 = FUN_0047fac0(*(int *)(in_ECX[0x17] + 0x2c)), iVar7 != 0)) &&
     (*(int *)(iVar7 + 0x10) != 0)) {
    iVar7 = *(int *)(*(int *)(iVar7 + 0x10) + 8);
    if (((iVar7 == 0) || (piVar6 = (int *)(iVar7 + 0x14), piVar6 == (int *)0x0)) ||
       (iVar7 = *piVar6, iVar7 == 0)) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)(iVar7 + 8);
    }
    if (iVar7 != 0) {
      switch(*(undefined4 *)(iVar7 + 0x10)) {
      case 0:
      case 3:
      case 5:
      case 10:
      case 0xb:
      case 0xd:
      case 0xf:
      case 0x12:
      case 0x14:
      case 0x19:
      case 0x1a:
      case 0x1c:
      case 0x1e:
        iVar7 = FUN_00608da0(param_1,param_2);
        return iVar7;
      }
    }
  }
  iVar7 = FUN_005e3270();
  if (((char)iVar7 != '\0') && (iVar7 = (**(code **)(*piVar9 + 0x278))(), (char)iVar7 == '\0')) {
    iVar7 = FUN_006079a0(piVar9);
    in_ECX[0x18] = 3;
    return iVar7;
  }
  if (in_ECX[0x1f] == 0) {
    iVar3 = FUN_0047df80(0);
    iVar7 = iVar3 / 100;
    if (iVar3 % 100 < DAT_00b370c8) {
      iVar7 = *piVar9;
      uVar5 = (**(code **)(*in_ECX + 0x170))(0,1);
      iVar7 = (**(code **)(iVar7 + 0x114))(uVar5);
      *(undefined1 *)((int)in_ECX + 0x95) = 1;
    }
  }
  return iVar7;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0060b120(undefined4 *param_1,float *param_2,int *param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  int *in_ECX;
  int iVar12;
  int *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_234 [12];
  float local_228;
  float local_224;
  float fStack_220;
  undefined4 *local_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  int *piStack_20c;
  int *local_208;
  float fStack_204;
  float *local_200;
  undefined4 uStack_1fc;
  float fStack_1f8;
  undefined4 uStack_1f4;
  undefined1 auStack_1f0 [4];
  undefined1 auStack_1ec [12];
  float local_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float local_1d0 [4];
  undefined1 auStack_1c0 [16];
  int iStack_1b0;
  float fStack_1ac;
  undefined1 auStack_1a0 [32];
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined1 auStack_130 [48];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_70 [76];
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c2fce;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_234;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffdc0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_21c = param_1;
  local_200 = param_2;
  local_208 = param_3;
  local_228 = (float)param_4;
  puVar4 = (undefined4 *)FUN_00401f00(0x54,uVar3);
  in_ECX[0x17] = (int)puVar4;
  *puVar4 = 1;
  *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
  *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
  iVar12 = in_ECX[0x17];
  *(float *)(iVar12 + 0x10) = *param_2;
  *(float *)(iVar12 + 0x14) = param_2[1];
  *(float *)(iVar12 + 0x18) = param_2[2];
  iVar12 = in_ECX[0x17];
  *(undefined4 *)(iVar12 + 4) = *param_1;
  *(undefined4 *)(iVar12 + 8) = param_1[1];
  *(undefined4 *)(iVar12 + 0xc) = param_1[2];
  puVar4 = &DAT_00b26dc4;
  puVar10 = (undefined4 *)(in_ECX[0x17] + 0x30);
  for (iVar12 = 9; iVar12 != 0; iVar12 = iVar12 + -1) {
    *puVar10 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar10 = puVar10 + 1;
  }
  iVar12 = in_ECX[0x17];
  *(undefined4 *)(iVar12 + 0x1c) = DAT_00b3f9a8;
  *(undefined4 *)(iVar12 + 0x20) = DAT_00b3f9ac;
  *(undefined4 *)(iVar12 + 0x24) = DAT_00b3f9b0;
  iVar12 = FUN_0065a2c0();
  if (iVar12 != 0) {
    iVar12 = FUN_0065a2c0();
    if ((iVar12 == 0) || (*(int *)(iVar12 + 8) == 0)) {
      pfVar5 = (float *)&DAT_00ba7a40;
    }
    else {
      pfVar5 = (float *)FUN_008ac0a0();
    }
    local_1e0 = *pfVar5;
    fStack_1dc = pfVar5[1];
    fStack_1d8 = pfVar5[2];
    fStack_1d4 = pfVar5[3];
    local_1d0[0] = local_1e0;
    if (local_1e0 == -3.4028235e+38) {
      iVar12 = (**(code **)(*in_ECX + 0x154))();
      if (iVar12 != 0) {
        local_224 = (float)in_ECX[0x1b];
        fStack_220 = local_224 * DAT_00b258dc;
        fStack_214 = local_224 * DAT_00b258e0;
        local_224 = local_224 * DAT_00b258e4;
        fStack_218 = fStack_220;
        fStack_210 = local_224;
        piStack_20c = (int *)fStack_214;
        (**(code **)(*in_ECX + 0x154))();
        puVar4 = (undefined4 *)FUN_007101f0(auStack_1ec,&fStack_218);
        iVar12 = in_ECX[0x17];
        *(undefined4 *)(iVar12 + 0x1c) = *puVar4;
        *(undefined4 *)(iVar12 + 0x20) = puVar4[1];
        *(undefined4 *)(iVar12 + 0x24) = puVar4[2];
      }
    }
    else {
      FUN_0043f3e0(in_ECX[0x17] + 0x1c,&local_1e0);
    }
  }
  pcVar1 = *(code **)(*in_ECX + 0x154);
  in_ECX[0x18] = 1;
  local_224 = 0.0;
  fStack_220 = (float)(*pcVar1)();
  piVar7 = local_208;
  if ((local_208 != (int *)0x0) && (fStack_220 != 0.0)) {
    if (((int *)in_ECX[0x1e] != (int *)0x0) &&
       (iVar12 = (**(code **)(*(int *)in_ECX[0x1e] + 0x330))(), iVar12 != 0)) {
      piVar8 = (int *)in_ECX[0x1e];
      uVar21 = 0;
      uVar6 = (**(code **)(*piVar7 + 0x174))(0);
      (**(code **)(*piVar8 + 0x330))(uVar6);
      FUN_00618120(uVar6,uVar21);
    }
    *(int **)(in_ECX[0x17] + 0x28) = piVar7;
    uVar6 = (**(code **)(*in_ECX + 0x170))(*(int *)(in_ECX[0x17] + 0x28) + 0x44,0x100);
    FUN_004fbf90(uVar6);
    fVar15 = local_228;
    if (((local_228 != 0.0) &&
        (iVar12 = FUN_0047fa60(*(undefined4 *)((int)local_228 + 8)), iVar12 != 0)) &&
       (iVar12 = FUN_00452a60(), iVar12 != 0)) {
      *(int *)(in_ECX[0x17] + 0x2c) = iVar12;
      local_224 = fVar15;
    }
    if (*(int *)(in_ECX[0x17] + 0x2c) == 0) {
      *(int *)(in_ECX[0x17] + 0x2c) = piVar7[0xf];
      iVar12 = FUN_00480340(*(undefined4 *)(in_ECX[0x17] + 0x2c));
      if (iVar12 == 0) {
        FUN_00401f20(in_ECX[0x17]);
        in_ECX[0x17] = 0;
        in_ECX[0x18] = 0;
        goto LAB_0060ba65;
      }
      local_224 = *(float *)(iVar12 + 0x10);
    }
    if (((local_224 == 0.0) || (*(int *)((int)local_224 + 8) == 0)) ||
       ((piVar7 = (int *)(*(int *)((int)local_224 + 8) + 0x14), piVar7 == (int *)0x0 ||
        (iVar12 = *piVar7, iVar12 == 0)))) {
      piVar7 = (int *)0x0;
    }
    else {
      piVar7 = *(int **)(iVar12 + 8);
    }
    if (local_224 == 0.0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)((int)local_224 + 8);
    }
    iVar12 = *(int *)(iVar12 + 0x50);
    uStack_170 = *(undefined4 *)(iVar12 + 0x10);
    uStack_16c = *(undefined4 *)(iVar12 + 0x14);
    uStack_168 = *(undefined4 *)(iVar12 + 0x18);
    uStack_164 = *(undefined4 *)(iVar12 + 0x1c);
    uStack_160 = *(undefined4 *)(iVar12 + 0x20);
    uStack_15c = *(undefined4 *)(iVar12 + 0x24);
    uStack_158 = *(undefined4 *)(iVar12 + 0x28);
    uStack_154 = *(undefined4 *)(iVar12 + 0x2c);
    uStack_150 = *(undefined4 *)(iVar12 + 0x30);
    uStack_14c = *(undefined4 *)(iVar12 + 0x34);
    uStack_148 = *(undefined4 *)(iVar12 + 0x38);
    uStack_144 = *(undefined4 *)(iVar12 + 0x3c);
    uStack_140 = *(undefined4 *)(iVar12 + 0x40);
    uStack_13c = *(undefined4 *)(iVar12 + 0x44);
    uStack_138 = *(undefined4 *)(iVar12 + 0x48);
    uStack_134 = *(undefined4 *)(iVar12 + 0x4c);
    FUN_005398e0(auStack_b0,(int)fStack_220 + 100);
    FUN_008b1ff0(&uStack_170,auStack_b0);
    fStack_1ac = 1.0;
    local_1e0 = 0.0;
    fStack_1dc = -18.288221;
    uStack_180 = 0;
    uStack_17c = 0;
    fStack_1d8 = 0.0;
    iStack_1b0 = -1;
    fStack_1d4 = 0.0;
    local_1d0[0] = 0.0;
    local_1d0[1] = 73.152885;
    local_1d0[2] = 0.0;
    local_1d0[3] = 0.0;
    FUN_0088fcc0(auStack_f0,&local_1e0);
    FUN_0088fcc0(auStack_f0,local_1d0);
    FUN_006077f0(auStack_1a0,auStack_1c0);
    if (1.0 <= fStack_1ac) {
      FUN_00401f20(in_ECX[0x17]);
      in_ECX[0x17] = 0;
      in_ECX[0x18] = 0;
    }
    else {
      piVar8 = (int *)piVar7[4];
      piStack_20c = piVar8;
      if (iStack_1b0 != -1) {
        piVar7 = (int *)(**(code **)(*piVar7 + 0x88))();
        if (piVar7 == (int *)0x0) {
          FUN_004a7a60(
                      "The arrow raycast has returned a sub-shape key, but the shape was unable to find a shape collection"
                      );
        }
        else {
          piVar8 = (int *)(**(code **)(*piVar7 + 0x9c))(iStack_1b0);
          piStack_20c = piVar8;
        }
      }
      iVar12 = in_ECX[0x17];
      local_228 = *(float *)(iVar12 + 0x24) * *(float *)(iVar12 + 0x24) +
                  *(float *)(iVar12 + 0x1c) * *(float *)(iVar12 + 0x1c) +
                  *(float *)(iVar12 + 0x20) * *(float *)(iVar12 + 0x20);
      fVar13 = (float10)FUN_00982c30();
      puVar4 = local_21c;
      local_228 = (float)fVar13;
      FUN_00609d50(local_228,*local_21c,local_21c[1],local_21c[2],local_224,piVar8);
      local_21c = (undefined4 *)-(float)in_ECX[0x22];
      local_228 = -(float)in_ECX[0x23];
      fStack_210 = -(float)in_ECX[0x24];
      fStack_218 = (float)local_21c;
      fStack_214 = local_228;
      fStack_204 = fStack_210;
      FUN_0043f350();
      fStack_218 = fStack_218 + *local_200;
      fStack_214 = local_200[1] + fStack_214;
      fStack_210 = local_200[2] + fStack_210;
      FUN_0043f350();
      iVar12 = FUN_005361b0(piVar8);
      if (iVar12 != 0) {
        FUN_006ecc80();
        uVar6 = FUN_004c9be0();
        uVar21 = 3;
        FUN_006ecc80(uVar6,3);
        fStack_204 = (float)FUN_00441800(uVar6,uVar21);
        local_21c = (undefined4 *)FUN_00401f00(0x20);
        uStack_14 = 0;
        if (local_21c == (undefined4 *)0x0) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar4;
          uVar21 = puVar4[1];
          uVar22 = 0;
          uVar20 = 0x3f800000;
          uVar19 = puVar4[2];
          uVar14 = 0x40a00000;
          fVar15 = fStack_204;
          fVar16 = fStack_218;
          fVar17 = fStack_214;
          fVar18 = fStack_210;
          uVar9 = FUN_006ecc80(0x40a00000,fStack_204,iVar12,fStack_218,fStack_214,fStack_210,uVar6,
                               uVar21,uVar19,0x3f800000,0);
          uVar6 = FUN_005713f0(uVar9,uVar14,fVar15,iVar12,fVar16,fVar17,fVar18,uVar6,uVar21,uVar19,
                               uVar20,uVar22);
        }
        uStack_14 = 0xffffffff;
        FUN_00678d30(uVar6);
      }
      if (in_ECX[0x1e] != 0) {
        fStack_204 = (float)(**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x30))();
        local_21c = (undefined4 *)(**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x38))();
        if (in_ECX[0x1f] != 0) {
          (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x1f] + 0x18);
          iVar12 = *(int *)(in_ECX[0x1e] + 0x5c);
          uVar6 = (**(code **)(*piStack_20c + 0x124))();
          (**(code **)(iVar12 + 0x3c))(uVar6);
          uVar6 = (**(code **)(*in_ECX + 0x170))();
          FUN_0069bec0(uVar6);
        }
        if (in_ECX[0x21] != 0) {
          (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x21] + 0x24);
          iVar12 = *(int *)(in_ECX[0x1e] + 0x5c);
          uVar6 = (**(code **)(*piStack_20c + 0x124))();
          (**(code **)(iVar12 + 0x3c))(uVar6);
          uVar6 = (**(code **)(*in_ECX + 0x170))();
          FUN_0069bec0(uVar6);
        }
        if (in_ECX[0x20] != 0) {
          (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x20] + 0x18);
          iVar12 = *(int *)(in_ECX[0x1e] + 0x5c);
          uVar6 = (**(code **)(*piStack_20c + 0x124))();
          (**(code **)(iVar12 + 0x3c))(uVar6);
          uVar6 = (**(code **)(*in_ECX + 0x170))();
          FUN_0069bec0(uVar6);
        }
        (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(fStack_204);
        (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x3c))(fStack_220);
      }
      piVar7 = local_208;
      iVar12 = FUN_006ecc80();
      if ((iVar12 == 0) || (iVar12 = FUN_004440c0(), iVar12 == 0)) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(iVar12 + 0x24);
      }
      if (((iVar12 != 0) && (cVar2 = FUN_00536ae0(piVar7), cVar2 != '\0')) &&
         (piVar7 + 0x11 != (int *)0x0)) {
        FUN_004fbf90(piVar7,piVar7 + 0x11,0x10000000);
      }
      if (in_ECX[0x1f] != 0) {
        in_ECX[0x18] = 3;
      }
      iVar12 = (int)fStack_220 + 100;
      puVar10 = (undefined4 *)FUN_007101f0(auStack_1ec,&DAT_00b258dc);
      FUN_006088f0(*puVar4,puVar4[1],puVar4[2],*puVar10,puVar10[1],puVar10[2],local_224);
      switch(piStack_20c) {
      case (int *)0x0:
      case (int *)0x3:
      case (int *)0x5:
      case (int *)0xa:
      case (int *)0xb:
      case (int *)0xd:
      case (int *)0xf:
      case (int *)0x12:
      case (int *)0x14:
      case (int *)0x19:
      case (int *)0x1a:
      case (int *)0x1c:
      case (int *)0x1e:
        break;
      default:
        puVar11 = (uint *)FUN_00497340(auStack_1f0);
        uVar3 = *puVar11 & 0x3f;
        if ((uVar3 != 0) && ((uVar3 < 4 || (6 < uVar3)))) {
          uStack_1fc = 0;
          uStack_1f4 = 0;
          fStack_1f8 = (fStack_1ac * 640.0 - 128.0) + 12.0;
          FUN_0053d4b0(&fStack_218,&uStack_1fc);
          fVar15 = fStack_218;
          FUN_004d8a30(fStack_218,fStack_214,fStack_210);
          *(float *)((int)fStack_220 + 0x54) = fVar15;
          *(float *)((int)fStack_220 + 0x58) = fStack_214;
          *(float *)((int)fStack_220 + 0x5c) = fStack_210;
          FUN_00707370(0,0);
          FUN_005398e0(auStack_70,iVar12);
          FUN_008b1ff0(&uStack_170,auStack_70);
          FUN_0043f3e0(in_ECX[0x17] + 4,auStack_100);
          FUN_00607740(in_ECX[0x17] + 0x30,auStack_130);
          goto LAB_0060ba65;
        }
      }
      FUN_00608da0(puVar4,local_200);
    }
  }
LAB_0060ba65:
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0060bac0(float *param_1,undefined4 *param_2)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *in_ECX;
  undefined4 *puVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined1 auStack_54 [12];
  float *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)auStack_54;
  local_48 = param_1;
  iVar1 = FUN_00401f00(0x54);
  fStack_2c = (float)in_ECX[0x23];
  fStack_28 = (float)in_ECX[0x24];
  in_ECX[0x17] = iVar1;
  local_30 = (float)in_ECX[0x22];
  FUN_004bfaa0(&local_30);
  *(undefined4 *)in_ECX[0x17] = 2;
  local_30 = local_30 * 24.0;
  *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
  *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
  fStack_2c = fStack_2c * 24.0;
  iVar1 = in_ECX[0x17];
  *(undefined4 *)(iVar1 + 0x10) = *param_2;
  fStack_28 = fStack_28 * 24.0;
  *(undefined4 *)(iVar1 + 0x14) = param_2[1];
  *(undefined4 *)(iVar1 + 0x18) = param_2[2];
  local_44 = *param_1 + local_30;
  iVar1 = in_ECX[0x17];
  local_40 = param_1[1] + fStack_2c;
  local_3c = param_1[2];
  *(float *)(iVar1 + 4) = local_44;
  local_3c = local_3c + fStack_28;
  *(float *)(iVar1 + 8) = local_40;
  *(float *)(iVar1 + 0xc) = local_3c;
  puVar3 = &DAT_00b26dc4;
  puVar5 = (undefined4 *)(in_ECX[0x17] + 0x30);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  iVar1 = in_ECX[0x17];
  *(undefined4 *)(iVar1 + 0x1c) = DAT_00b3f9a8;
  *(undefined4 *)(iVar1 + 0x20) = DAT_00b3f9ac;
  *(undefined4 *)(iVar1 + 0x24) = DAT_00b3f9b0;
  iVar1 = FUN_0065a2c0();
  if (iVar1 != 0) {
    iVar1 = FUN_0065a2c0();
    if ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0)) {
      pfVar2 = (float *)&DAT_00ba7a40;
    }
    else {
      pfVar2 = (float *)FUN_008ac0a0();
    }
    local_44 = *pfVar2;
    fStack_2c = pfVar2[1];
    fStack_28 = pfVar2[2];
    fStack_24 = pfVar2[3];
    local_30 = local_44;
    if (local_44 == -3.4028235e+38) {
      iVar1 = (**(code **)(*in_ECX + 0x154))();
      if (iVar1 != 0) {
        fStack_34 = (float)in_ECX[0x1b];
        local_44 = fStack_34 * DAT_00b258dc;
        local_40 = DAT_00b258e0 * fStack_34;
        local_3c = fStack_34 * DAT_00b258e4;
        (**(code **)(*in_ECX + 0x154))();
        puVar3 = (undefined4 *)FUN_007101f0(&local_30,&local_44);
        iVar1 = in_ECX[0x17];
        *(undefined4 *)(iVar1 + 0x1c) = *puVar3;
        *(undefined4 *)(iVar1 + 0x20) = puVar3[1];
        *(undefined4 *)(iVar1 + 0x24) = puVar3[2];
      }
    }
    else {
      FUN_0043f3e0(in_ECX[0x17] + 0x1c,&local_30);
    }
  }
  pfVar2 = local_48;
  uVar4 = FUN_00440ac0(local_48);
  switch(uVar4) {
  case 0:
  case 3:
  case 5:
  case 10:
  case 0xb:
  case 0xd:
  case 0xf:
  case 0x12:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    FUN_00608da0(pfVar2,param_2);
  }
  iVar1 = in_ECX[0x17];
  in_ECX[0x18] = 1;
  fVar7 = *pfVar2;
  fVar8 = pfVar2[1];
  uVar10 = 0;
  fVar9 = pfVar2[2];
  local_48 = (float *)(*(float *)(iVar1 + 0x24) * *(float *)(iVar1 + 0x24) +
                      *(float *)(iVar1 + 0x1c) * *(float *)(iVar1 + 0x1c) +
                      *(float *)(iVar1 + 0x20) * *(float *)(iVar1 + 0x20));
  fVar6 = (float10)FUN_00982c30(fVar7,fVar8,fVar9,0,uVar4);
  local_48 = (float *)(float)fVar6;
  FUN_00609d50(local_48,fVar7,fVar8,fVar9,uVar10,uVar4);
  if (((int *)in_ECX[0x1e] != (int *)0x0) &&
     (iVar1 = (**(code **)(*(int *)in_ECX[0x1e] + 0x330))(), iVar1 != 0)) {
    uVar4 = 0;
    (**(code **)(*(int *)in_ECX[0x1e] + 0x330))(pfVar2,0);
    FUN_00618120(pfVar2,uVar4);
  }
  if (in_ECX[0x1e] != 0) {
    if (in_ECX[0x1f] != 0) {
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x1f] + 0x18);
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x3c))(0);
      uVar4 = (**(code **)(*in_ECX + 0x170))();
      FUN_0069bec0(uVar4);
    }
    if (in_ECX[0x21] != 0) {
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x21] + 0x24);
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x3c))(0);
      uVar4 = (**(code **)(*in_ECX + 0x170))();
      FUN_0069bec0(uVar4);
    }
    if (in_ECX[0x20] != 0) {
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x34))(in_ECX[0x20] + 0x18);
      (**(code **)(*(int *)(in_ECX[0x1e] + 0x5c) + 0x3c))(0);
      uVar4 = (**(code **)(*in_ECX + 0x170))();
      FUN_0069bec0(uVar4);
    }
  }
  if (in_ECX[0x1f] != 0) {
    in_ECX[0x18] = 3;
  }
  return;
}



char FUN_0060be90(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  cVar1 = '\0';
  if (in_ECX[0x17] == 0) {
    return '\0';
  }
  iVar2 = (**(code **)(*in_ECX + 0x154))();
  if (iVar2 == 0) {
LAB_0060bec3:
    FUN_004a7a60("No collision data was found on this arrow");
    FUN_00401f20(in_ECX[0x17]);
    in_ECX[0x17] = 0;
    return '\0';
  }
  uVar3 = (**(code **)(*in_ECX + 0x154))();
  iVar2 = FUN_00480340(uVar3);
  if (iVar2 == 0) goto LAB_0060bec3;
  uVar3 = *(undefined4 *)(iVar2 + 0x10);
  switch(*(undefined4 *)in_ECX[0x17]) {
  case 0:
    cVar1 = FUN_00608fc0(uVar3);
    break;
  case 1:
    cVar1 = FUN_00609150(uVar3);
    break;
  case 2:
    cVar1 = FUN_006094c0(uVar3);
    break;
  case 3:
    cVar1 = FUN_006095b0(uVar3);
    break;
  case 4:
    cVar1 = FUN_006098c0(uVar3);
    break;
  default:
    goto switchD_0060bef2_default;
  }
  if (cVar1 == '\0') {
switchD_0060bef2_default:
    if (in_ECX[0x17] != 0) {
      FUN_00401f20(in_ECX[0x17]);
      in_ECX[0x17] = 0;
    }
    in_ECX[0x18] = 0;
  }
  return cVar1;
}



void FUN_0060bf70(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  bool bVar10;
  
  in_ECX[2] = in_ECX[2] & 0xffdfffff;
  if (in_ECX[0xf] != 0) {
    FUN_0060a230(in_ECX[0x1e],0x3f800000);
    FUN_0065ba90(param_1,param_2);
    piVar3 = (int *)in_ECX[0x17];
    if ((piVar3 != (int *)0x0) && ((iVar7 = *piVar3, iVar7 == 1 || (iVar7 == 0)))) {
      if (0x1f < *(byte *)(DAT_00b33b00 + 0x7c)) {
        sVar1 = *(short *)((int)piVar3 + 0x2e);
        iVar4 = piVar3[0xb];
        piVar3[0xb] = 0;
        bVar10 = iVar7 == 0;
        if (*(int *)(in_ECX[0x17] + 0x28) != 0) {
          sVar6 = FUN_00480c50(*(undefined4 *)(*(int *)(in_ECX[0x17] + 0x28) + 0x3c),bVar10,bVar10,1
                              );
          if (sVar1 == sVar6) {
            if (((short)iVar4 != -1) &&
               (iVar7 = FUN_00480e90(*(undefined4 *)(*(int *)(in_ECX[0x17] + 0x28) + 0x3c),
                                     (int)(short)iVar4,bVar10,bVar10,1), iVar7 != 0)) {
              uVar8 = FUN_00452a60();
              *(undefined4 *)(in_ECX[0x17] + 0x2c) = uVar8;
            }
          }
          else {
            uVar8 = (**(code **)(**(int **)(in_ECX[0x17] + 0x28) + 0xd4))
                              ((*(int **)(in_ECX[0x17] + 0x28))[3]);
            FUN_004a7a60("Collision object count has changed on object %s %08",uVar8);
          }
        }
      }
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x20) {
        iVar7 = in_ECX[0x17];
        uVar8 = *(undefined4 *)(iVar7 + 0x2c);
        if (*(int *)(iVar7 + 0x28) == 0) {
          *(undefined4 *)(iVar7 + 0x2c) = 0;
        }
        else {
          uVar9 = FUN_006f94a0(*(undefined4 *)(*(int *)(iVar7 + 0x28) + 0x3c),uVar8);
          *(undefined4 *)(in_ECX[0x17] + 0x2c) = uVar9;
        }
        FUN_00401e40(uVar8);
      }
      if (((undefined4 *)in_ECX[0x17])[0xb] == 0) {
        *(undefined4 *)in_ECX[0x17] = 3;
      }
    }
    FUN_004593d0(in_ECX);
    return;
  }
  iVar7 = in_ECX[0x17];
  if (iVar7 != 0) {
    if (((*(int *)(iVar7 + 0x28) != 0) &&
        (uVar2 = *(uint *)(*(int *)(iVar7 + 0x28) + 8), (uVar2 >> 0xb & 1) != 0)) &&
       ((uVar2 >> 5 & 1) != 0)) {
      (**(code **)(*in_ECX + 0x8c))(1);
      *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
      return;
    }
    if (((iVar7 != 0) && (*(int *)(iVar7 + 0x28) != 0)) &&
       ((cVar5 = (**(code **)(**(int **)(iVar7 + 0x28) + 400))(), cVar5 != '\0' &&
        ((piVar3 = *(int **)(*(int *)(in_ECX[0x17] + 0x28) + 0x58), piVar3 != (int *)0x0 &&
         (iVar7 = (**(code **)(*piVar3 + 8))(), 1 < iVar7)))))) {
      (**(code **)(*in_ECX + 0x8c))(1);
      if (in_ECX[0x17] != 0) {
        *(undefined4 *)(in_ECX[0x17] + 0x28) = 0;
      }
      *(undefined4 *)(in_ECX[0x17] + 0x2c) = 0;
      return;
    }
  }
  *(undefined1 *)(in_ECX + 0x25) = 1;
  in_ECX[0x26] = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c170(float param_1)

{
  int *piVar1;
  code *pcVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int *in_ECX;
  undefined4 *puVar9;
  undefined4 *puVar10;
  float10 fVar11;
  float10 fVar12;
  double dStack_5c;
  float fStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [9];
  
  if (((char)in_ECX[0x25] != '\0') &&
     ((piVar1 = (int *)in_ECX[0x17], piVar1 == (int *)0x0 ||
      ((((*piVar1 != 1 && (*piVar1 != 0)) || (piVar1[10] == 0)) ||
       (*(int *)(piVar1[10] + 0x3c) != 0)))))) {
    pcVar2 = *(code **)(*in_ECX + 0x5c);
    *(undefined1 *)(in_ECX + 0x25) = 0;
    (*pcVar2)(in_ECX[0x26],0);
    FUN_0045d190();
  }
  iVar5 = (**(code **)(*in_ECX + 0x154))();
  if (0.0 <= param_1) {
    fVar3 = param_1 + (float)in_ECX[0x1a];
    dStack_5c = (double)CONCAT44(dStack_5c._4_4_,fVar3);
    in_ECX[0x1a] = (int)fVar3;
    if (_DAT_00b37048 < fVar3) {
      in_ECX[0x18] = 3;
    }
    if (((uint)in_ECX[2] >> 5 & 1) != 0) {
      return;
    }
    if ((in_ECX[0x18] == 0) && (iVar6 = FUN_0065a2c0(), iVar6 != 0)) {
      uStack_30 = 0;
      fStack_2c = (float)in_ECX[0x1b] * param_1;
      uStack_28 = 0;
      pfVar7 = (float *)(**(code **)(*in_ECX + 0x174))();
      fStack_3c = *pfVar7;
      fStack_38 = pfVar7[1];
      fStack_34 = pfVar7[2];
      iVar6 = FUN_0065a2c0();
      dStack_5c._0_4_ = *(float *)(iVar6 + 0x318) * 6.99904;
      iVar6 = (**(code **)(*in_ECX + 0x174))();
      if (*(float *)(iVar6 + 8) <= dStack_5c._0_4_) {
        dStack_5c._0_4_ = ((float)in_ECX[0x1d] - param_1) / (float)in_ECX[0x1d];
        in_ECX[0x1b] = (int)(dStack_5c._0_4_ * (float)in_ECX[0x1b]);
        in_ECX[0x1c] = (int)(dStack_5c._0_4_ * (float)in_ECX[0x1c]);
        iVar6 = FUN_0065a2c0();
        *(float *)(iVar6 + 0x324) = dStack_5c._0_4_;
        dStack_5c._0_4_ = (float)in_ECX[0x1d] - param_1;
        in_ECX[0x1d] = (int)dStack_5c._0_4_;
        if (dStack_5c._0_4_ < 0.5) {
          FUN_006079a0(0);
          FUN_0060be90();
        }
      }
      (**(code **)(*in_ECX + 0x1b4))(param_1,&uStack_30,0xf);
      iVar6 = in_ECX[0x18];
      if (iVar6 != 0) {
        cVar4 = FUN_0060be90();
        if (cVar4 != '\0') {
          if (iVar5 != 0) {
            FUN_004d8a30(*(undefined4 *)(iVar5 + 0x54),*(undefined4 *)(iVar5 + 0x58),
                         *(undefined4 *)(iVar5 + 0x5c));
          }
          in_ECX[0x18] = (iVar6 == 3) + 2;
          return;
        }
      }
      pfVar7 = (float *)(**(code **)(*in_ECX + 0x174))();
      fStack_48 = *pfVar7;
      fStack_44 = pfVar7[1];
      fStack_40 = pfVar7[2];
      if (iVar5 == 0) {
        return;
      }
      *(float *)(iVar5 + 0x54) = *pfVar7;
      *(float *)(iVar5 + 0x58) = pfVar7[1];
      fVar3 = pfVar7[2];
      puVar9 = (undefined4 *)(iVar5 + 0x30);
      puVar10 = auStack_24;
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
      *(float *)(iVar5 + 0x5c) = fVar3;
      FUN_00711440(&fStack_4c,&dStack_5c,&uStack_50);
      in_ECX[0x22] = (int)(fStack_48 - fStack_3c);
      in_ECX[0x23] = (int)(fStack_44 - fStack_38);
      fStack_54 = fStack_40 - fStack_34;
      in_ECX[0x24] = (int)fStack_54;
      dStack_5c = (double)(float)in_ECX[0x24];
      fVar11 = (float10)FUN_00404c90();
      fVar12 = (float10)dStack_5c;
      dStack_5c._0_4_ = (float)(fVar12 / fVar11);
      fVar12 = (float10)FUN_0047d970((float)(fVar12 / fVar11));
      dStack_5c = (double)CONCAT44(dStack_5c._4_4_,(float)-fVar12);
      FUN_007117c0(fStack_4c,(float)-fVar12,uStack_50);
      puVar9 = auStack_24;
      puVar10 = (undefined4 *)(iVar5 + 0x30);
      for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar10 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar10 = puVar10 + 1;
      }
    }
    else if ((in_ECX[0x18] == 2) && (piVar1 = (int *)in_ECX[0x17], piVar1 != (int *)0x0)) {
      if (iVar5 == 0) {
        return;
      }
      if (*piVar1 == 0) {
        FUN_004d8a30(*(undefined4 *)(iVar5 + 0x88),*(undefined4 *)(iVar5 + 0x8c),
                     *(undefined4 *)(iVar5 + 0x90));
        iVar6 = 0;
        if (*(int *)(in_ECX[0x17] + 0x28) != 0) {
          iVar6 = FUN_006ecc80();
        }
        iVar8 = FUN_006ecc80();
        if (iVar6 != iVar8) {
          if (iVar6 == 0) {
            (**(code **)(*in_ECX + 0x8c))(1);
          }
          else {
            FUN_006748b0(in_ECX);
          }
        }
      }
      else if ((*piVar1 == 1) && ((piVar1[10] == 0 || (*(int *)(piVar1[10] + 0x3c) == 0)))) {
        (**(code **)(*in_ECX + 0x8c))(1);
      }
    }
    else if (in_ECX[0x18] == 3) {
      fStack_4c = (float)in_ECX[0x19] - param_1 / 3.0;
      in_ECX[0x19] = (int)fStack_4c;
      if (fStack_4c < 0.0 != (fStack_4c == 0.0)) {
        in_ECX[0x19] = 0;
        (**(code **)(*in_ECX + 0x8c))(1);
      }
      if (iVar5 == 0) {
        return;
      }
      FUN_004a2a90(iVar5,in_ECX[0x19]);
    }
  }
  if (iVar5 == 0) {
    return;
  }
  FUN_00707370(param_1,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0060c5b0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  undefined1 auStack_2d4 [15];
  char cStack_2c5;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
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
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  float fStack_27c;
  undefined4 uStack_270;
  undefined1 auStack_260 [16];
  undefined1 auStack_250 [32];
  undefined1 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_20c;
  undefined4 uStack_200;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 *puStack_1d8;
  undefined1 auStack_1d0 [16];
  int iStack_1c0;
  int iStack_1bc;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009c300b;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_2d4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffd20;
  *unaff_FS_OFFSET = (int)&local_1c;
  iVar3 = (**(code **)(*in_ECX + 0x154))(uVar2);
  if (((int *)in_ECX[0x1e] == DAT_00b333c4) && (iVar3 != 0)) {
    uStack_20c = 0x3f800000;
    uStack_230 = 0;
    uStack_22c = 0;
    uStack_200 = 0;
    uStack_1e0 = 0;
    uStack_1dc = 0;
    puStack_1d8 = (undefined1 *)0x0;
    uStack_1f0 = DAT_00ba7a40;
    uStack_1ec = DAT_00ba7a44;
    uStack_1e8 = DAT_00ba7a48;
    uStack_1e4 = uRam00ba7a4c;
    pfVar4 = (float *)(**(code **)(*in_ECX + 0x174))();
    fStack_2a4 = *pfVar4;
    fStack_2a0 = pfVar4[1];
    fStack_29c = pfVar4[2];
    pfVar4 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    fStack_2b4 = *pfVar4;
    fStack_2b0 = pfVar4[1];
    fStack_2ac = pfVar4[2];
    fStack_2a8 = (float)DAT_00b333c4[0x175];
    fVar8 = (float10)(**(code **)(*DAT_00b333c4 + 0xec))();
    fStack_2ac = (float)(fVar8 * (float10)fStack_2a8 + (float10)fStack_2ac);
    fStack_298 = fStack_2a4 - fStack_2b4;
    fStack_294 = fStack_2a0 - fStack_2b0;
    fStack_2a8 = fStack_29c - fStack_2ac;
    iVar3 = FUN_0065a2c0();
    if (iVar3 == 0) {
      puVar5 = (undefined4 *)FUN_0065abe0(&fStack_2c0);
    }
    else {
      puVar5 = (undefined4 *)FUN_0057e270(&fStack_2c0);
    }
    uStack_22c = *puVar5;
    FUN_004f8840(&fStack_2b4);
    fStack_2bc = fStack_298 + fStack_2b4;
    fStack_2b8 = fStack_2b0 + fStack_294;
    fStack_2c4 = fStack_2a8 + fStack_2ac;
    fStack_2a4 = fStack_2bc;
    fStack_2a0 = fStack_2b8;
    fStack_29c = fStack_2c4;
    FUN_004f90c0(&fStack_2a4);
    FUN_00538c00();
    puStack_1d8 = auStack_1d0;
    uStack_14 = 0;
    uStack_1dc = 0;
    FUN_006ecc80();
    cVar1 = FUN_004c97f0();
    piVar6 = DAT_00b35c24;
    if (cVar1 != '\0') {
      piVar6 = (int *)FUN_00424180();
    }
    cVar1 = (**(code **)(*piVar6 + 0x88))(auStack_250);
    if (cVar1 != '\0') {
      cStack_2c5 = '\x01';
      fStack_2bc = 0.0;
      iVar3 = 0;
      do {
        if (iStack_1bc <= (int)fStack_2bc) break;
        puVar5 = (undefined4 *)(iVar3 + iStack_1c0);
        uStack_290 = *puVar5;
        uStack_28c = puVar5[1];
        uStack_288 = puVar5[2];
        uStack_284 = puVar5[3];
        uStack_280 = *(undefined4 *)(iVar3 + 0x10 + iStack_1c0);
        fStack_27c = *(float *)(iVar3 + 0x14 + iStack_1c0);
        uStack_270 = *(undefined4 *)(iVar3 + 0x20 + iStack_1c0);
        iVar7 = FUN_004806e0(uStack_270);
        if ((((iVar7 != 0) && (piVar6 = (int *)FUN_004dc270(iVar7), piVar6 != (int *)0x0)) &&
            (piVar6 != DAT_00b333c4)) && (piVar6 != in_ECX)) {
          fStack_2c4 = fStack_27c * fStack_298 + fStack_2b4;
          fStack_2b8 = fStack_2b0 + fStack_294 * fStack_27c;
          fStack_2c0 = fStack_27c * fStack_2a8 + fStack_2ac;
          fStack_2a4 = fStack_2c4;
          fStack_2a0 = fStack_2b8;
          fStack_29c = fStack_2c0;
          FUN_004529e0(auStack_260,&fStack_2a4);
          FUN_0060d950();
          FUN_0060be90();
          cStack_2c5 = '\0';
        }
        fStack_2bc = (float)((int)fStack_2bc + 1);
        iVar3 = iVar3 + 0x30;
      } while (cStack_2c5 != '\0');
    }
    uStack_14 = 0xffffffff;
    FUN_00538c80();
  }
  *unaff_FS_OFFSET = local_1c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060c940(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,int param_8,undefined4 *param_9
                 )

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  byte bVar10;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  float10 fVar12;
  undefined1 auStack_64 [8];
  int local_5c;
  double local_58;
  int local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int iStack_28;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_009c305e;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_64;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff90;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_5c = param_8;
  FUN_00659990(uVar4);
  *in_ECX = &PTR_FUN_00a6f08c;
  in_ECX[6] = &PTR_FUN_00a6f084;
  local_4c = *(int *)(local_5c + 8);
  in_ECX[0x19] = 0x3f800000;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  local_14 = 0;
  fVar1 = _DAT_00b37040 * *(float *)(local_4c + 0x7c);
  local_58 = (double)CONCAT44(local_58._4_4_,fVar1);
  in_ECX[0x1b] = fVar1;
  fVar2 = (1.0 - param_7) * _DAT_00b37090;
  in_ECX[0x1e] = param_1;
  in_ECX[0x1b] = (fVar2 + param_7) * fVar1;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[0x1a] = 0;
  in_ECX[0x22] = DAT_00b3f9a8;
  in_ECX[0x23] = DAT_00b3f9ac;
  in_ECX[0x24] = DAT_00b3f9b0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  in_ECX[0x26] = 0;
  *(undefined1 *)((int)in_ECX + 0x95) = 0;
  *(undefined1 *)((int)in_ECX + 0x96) = 0;
  *(undefined1 *)((int)in_ECX + 0x97) = 0;
  if ((param_9 != (undefined4 *)0x0) && (param_1 != 0)) {
    fVar11 = (float10)FUN_00484f80(param_1,0x3f800000);
    local_58 = (double)fVar11;
    fVar12 = (float10)FUN_00484f80(param_1,0x3f800000);
    fVar11 = (float10)local_58;
    local_58 = (double)CONCAT44(local_58._4_4_,(float)(fVar12 + fVar11));
    in_ECX[0x1c] = (float)(fVar12 + fVar11) * param_7;
    iVar5 = FUN_00484df0();
    in_ECX[0x21] = iVar5;
    if (iVar5 != 0) {
      FUN_00484e50();
    }
    in_ECX[0x1f] = *(undefined4 *)(local_4c + 0x58);
    iVar5 = FUN_009832e6(param_9[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
    if (iVar5 == 0) {
      bVar10 = 0;
    }
    else {
      bVar10 = *(byte *)(iVar5 + 0x9c) & 1;
    }
    *(byte *)((int)in_ECX + 0x96) = bVar10;
    in_ECX[0x20] = 0;
    if (iVar5 == 0) {
      local_5c = 0;
    }
    else {
      local_5c = *(int *)(iVar5 + 100);
    }
    if (local_5c != 0) {
      fVar11 = (float10)FUN_004849c0();
      local_48 = (float)fVar11;
      fVar11 = (float10)(*(code *)**(undefined4 **)(local_5c + 0x24))(param_1);
      fVar1 = (float)fVar11;
      local_58 = (double)CONCAT44(local_58._4_4_,fVar1);
      if (fVar1 < local_48 != (fVar1 == local_48)) {
        uVar9 = *(undefined4 *)*param_9;
        uVar6 = FUN_0041e6f0(uVar9);
        fVar1 = local_48 - local_58._0_4_;
        local_58 = (double)CONCAT44(local_58._4_4_,fVar1);
        FUN_00488aa0(fVar1,uVar6,uVar9);
        if (*(int *)(param_1 + 0x58) != 0) {
          fVar11 = (float10)FUN_004849c0();
          local_58 = (double)fVar11;
          fVar11 = (float10)(*(code *)**(undefined4 **)(local_5c + 0x24))(param_1);
          if ((float10)local_58 < fVar11) {
            (**(code **)(**(int **)(param_1 + 0x58) + 0x42c))(param_1,1,0,0);
          }
        }
        in_ECX[0x20] = local_5c;
      }
      *(undefined1 *)((int)in_ECX + 0x96) = 1;
    }
    if ((((in_ECX[0x1f] != 0) || (in_ECX[0x20] != 0)) && (iVar5 = FUN_00419b30(0), iVar5 != 0)) &&
       (iVar5 = *(int *)(iVar5 + 0x7c), iVar5 != 0)) {
      iVar7 = FUN_00401f00(0x4c);
      local_58 = (double)CONCAT44(local_58._4_4_,iVar7);
      local_14._0_1_ = 1;
      if (iVar7 == 0) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_006a0980(in_ECX,iVar5,0xbf800000);
      }
      local_14 = (uint)local_14._1_3_ << 8;
      cVar3 = (**(code **)(*piVar8 + 0x68))();
      if (cVar3 == '\0') {
        (**(code **)*piVar8)(1);
      }
      else {
        FUN_00678d30(piVar8);
      }
    }
  }
  FUN_004d8a30(param_2,param_3,param_4);
  iVar5 = FUN_00401f00(0x2ec);
  local_58 = (double)CONCAT44(local_58._4_4_,iVar5);
  local_14._0_1_ = 2;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00628ee0();
  }
  local_14 = (uint)local_14._1_3_ << 8;
  in_ECX[0x16] = uVar9;
  FUN_004d8a10(param_5);
  FUN_004d89d0(param_6);
  FUN_004d89f0(0);
  if (param_1 != 0) {
    uVar9 = FUN_006ecc80();
    FUN_0065a330(uVar9);
  }
  FUN_006c5420(local_58._0_4_);
  iVar5 = FUN_00659f30();
  if (iVar5 != 0) {
    FUN_006ff420("Arrow");
  }
  FUN_00608cb0();
  FUN_0060a230(param_1,param_7);
  local_4c = -0x800001;
  local_48 = 0.0;
  local_44 = 0;
  uStack_40 = 0;
  iVar5 = FUN_0065a2c0();
  if ((iVar5 != 0) && (*(int *)(iVar5 + 8) != 0)) {
    FUN_008ac0b0(&local_4c);
  }
  FUN_006ecc80();
  FUN_004d35d0(in_ECX);
  FUN_0060c5b0();
  DAT_00b3b7d0 = DAT_00b3b7d0 + 1;
  if (DAT_00b370d0 < DAT_00b3b7d0) {
    FUN_00608120(DAT_00b370d0,0);
  }
  *unaff_FS_OFFSET = iStack_28;
  return;
}



void FUN_0060cd90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a6f464;
  return;
}



void FUN_0060cda0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a6f464;
  return;
}



void FUN_0060cdb0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  
  if (param_1 != 0) {
    piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0);
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b05908,&PTR_PTR_00b09dfc,0);
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b05908,&PTR_PTR_00b149c4,0);
    iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b05908,&PTR_PTR_00b149a8,0);
    piVar5 = (int *)FUN_009832e6();
    iVar6 = FUN_009832e6();
    iVar7 = FUN_009832e6();
    iVar8 = FUN_009832e6();
    if (piVar1 != (int *)0x0) {
      fVar9 = (float10)(**(code **)(*piVar1 + 0x15c))();
      if ((float10)0.0 < fVar9) {
        (**(code **)(*piVar1 + 0x178))(0);
        (**(code **)(*piVar1 + 0xd0))(0);
      }
    }
    if (piVar5 != (int *)0x0) {
      fVar9 = (float10)(**(code **)(*piVar5 + 0x15c))();
      if ((float10)0.0 < fVar9) {
        (**(code **)(*piVar5 + 0x178))(0);
        (**(code **)(*piVar5 + 0xd0))(0);
      }
      if (piVar1 != (int *)0x0) {
        FUN_006299f0(piVar1);
      }
    }
    if ((iVar6 != 0) && (iVar2 != 0)) {
      FUN_0064b650(iVar2);
    }
    if ((iVar7 != 0) && (iVar3 != 0)) {
      FUN_00658760(iVar3);
    }
    if ((iVar8 != 0) && (iVar4 != 0)) {
      FUN_00643520(iVar4);
    }
  }
  return;
}



void FUN_0060cf60(void)

{
  return;
}



void FUN_0060cf80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_3,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
  if ((((iVar1 != 0) && (iVar1 != DAT_00b333c4)) && (*(int *)(in_ECX + 8) == 0)) &&
     (*(int *)(in_ECX + 4) == -1)) {
    *(undefined4 *)(in_ECX + 4) = 0;
    FUN_00601b80();
  }
  return;
}



void FUN_0060d020(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = param_1;
  return;
}



void FUN_0060d0a0(void)

{
  return;
}



short FUN_0060d0e0(uint param_1)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  short sVar6;
  
  sVar3 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    sVar3 = 6;
  }
  sVar6 = sVar3 + 4;
  if (*(int *)(in_ECX + 8) != 0) {
    if ((param_1 & 0x20000) != 0) {
      cVar2 = FUN_00446b80(*(undefined4 *)(*(int *)(in_ECX + 8) + 0xc));
      if (cVar2 != '\0') {
        sVar6 = sVar3 + 5;
        if ((param_1 & 0x10000) == 0) {
          sVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0xdc))();
          sVar6 = sVar6 + sVar3;
        }
      }
    }
    sVar6 = sVar6 + 4;
  }
  sVar6 = sVar6 + 8;
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0xfe,".\\AI\\BaseProcess.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,sVar6,*puVar1,uVar5);
      return sVar6;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",sVar6,0xfe,
                 ".\\AI\\BaseProcess.cpp");
    return sVar6;
  }
  return sVar6;
}



void FUN_0060d1f0(uint param_1)

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
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_10 = 0;
  if (*(int *)(in_ECX + 8) != 0) {
    local_10 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  uVar4 = param_1;
  if (local_10 != 0) {
    if ((param_1 & 0x20000) != 0) {
      cVar6 = FUN_00446b80(local_10);
      if (cVar6 != '\0') {
        param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(*(int *)(in_ECX + 8) + 0x20));
        FUN_0045b9a0(&param_1,1);
        if ((uVar4 & 0x10000) == 0) {
          (**(code **)(**(int **)(in_ECX + 8) + 0xe0))();
        }
      }
    }
    FUN_0045b9a0(in_ECX + 4,4);
  }
  FUN_0045b9a0(in_ECX + 0xc,4);
  FUN_0045b9a0(in_ECX + 0x10,4);
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x122,
                   ".\\AI\\BaseProcess.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x122,".\\AI\\BaseProcess.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar8);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = local_c;
  if (cVar6 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\BaseProcess.cpp",0x122);
    }
    *psVar5 = (short)uVar4 - (short)psVar5;
  }
  return;
}



void FUN_0060d3c0(uint param_1,undefined4 param_2,int *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int in_ECX;
  int iVar11;
  int local_c;
  uint local_8;
  int local_4;
  
  iVar11 = 0;
  local_8 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    FUN_004534d0(&local_4,4);
    if (local_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\BaseProcess.cpp",0x12d,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar6 = (int *)FUN_0046b250(*puVar1);
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\BaseProcess.cpp",0x12d,*puVar1,uVar7);
      }
    }
    iVar11 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_8,2);
  }
  cVar4 = FUN_0045ba00(&local_c,4);
  if ((*(int *)(in_ECX + 8) != 0) && (cVar5 = FUN_005660a0(), cVar5 != '\0')) {
    FUN_0045c7a0(*(undefined4 *)(in_ECX + 8));
  }
  piVar6 = param_3;
  *(undefined4 *)(in_ECX + 8) = 0;
  bVar3 = false;
  if (local_c == 0) {
    if (cVar4 == '\0') goto LAB_0060d630;
    FUN_00452170(4);
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  else {
    if (((param_1 & 0x20000) == 0) || (cVar4 = FUN_00446b80(local_c), cVar4 == '\0')) {
      uVar7 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
      iVar8 = FUN_009832e6(uVar7);
      *(int *)(in_ECX + 8) = iVar8;
      if (iVar8 == 0) {
        bVar3 = true;
      }
      else {
        FUN_005672a0();
      }
    }
    else {
      FUN_004534d0(&param_3,1);
      if ((param_1 & 0x10000) == 0) {
        iVar8 = FUN_009832e6(piVar6,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0);
        if (iVar8 == 0) {
          (**(code **)(*DAT_00b34d90 + 0x18))("Package being created on non-actor!");
        }
        piVar9 = (int *)FUN_00463ec0(local_c,iVar8,param_3);
        (**(code **)(*piVar9 + 0xe4))();
        *(int **)(in_ECX + 8) = piVar9;
        if (piVar9[6] == -1) {
          FUN_005672a0();
        }
      }
      else {
        *(int *)(in_ECX + 8) = local_c;
      }
    }
    FUN_004534d0(in_ECX + 4,4);
    if (!bVar3) goto LAB_0060d630;
  }
  if (local_c == 0) {
    uVar7 = (**(code **)(*piVar6 + 0xd4))(piVar6[3]);
    FUN_004a7a60("%s %08X couldn\'t find a plugin package while loading and will try to choose a new one."
                 ,uVar7);
  }
  else {
    uVar7 = (**(code **)(*piVar6 + 0xd4))(piVar6[3],local_c);
    FUN_004a7a60("%s %08X couldn\'t find package %08X while loading and will try to choose a new one."
                 ,uVar7);
  }
  *(undefined4 *)(in_ECX + 4) = 0xffffffff;
LAB_0060d630:
  FUN_004534d0(in_ECX + 0xc,4);
  FUN_004534d0(in_ECX + 0x10,4);
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar10 = local_8 & 0xffff;
      if (uVar10 + iVar11 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar10) - iVar11,".\\AI\\BaseProcess.cpp",0x17b,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar10 + iVar11) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar10 - uVar2) + iVar11,".\\AI\\BaseProcess.cpp",0x17b,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar6 = (int *)FUN_0046b250(*puVar1);
      uVar10 = (local_8 & 0xffff) + iVar11;
      if (uVar10 < uVar2) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_8 & 0xffff)) - iVar11,".\\AI\\BaseProcess.cpp",0x17b,*puVar1,
                     uVar7);
        return;
      }
      if (uVar2 < uVar10) {
        uVar7 = (**(code **)(*piVar6 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_8 & 0xffff) - uVar2) + iVar11,".\\AI\\BaseProcess.cpp",0x17b,*puVar1,
                     uVar7);
        return;
      }
    }
  }
  return;
}



void FUN_0060d780(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  
  iVar3 = *(int *)(in_ECX + 8);
  if (iVar3 != 0) {
    if ((param_1 & 0x20000) != 0) {
      if ((param_1 & 0x10000) == 0) {
        cVar1 = FUN_00446b80(*(undefined4 *)(iVar3 + 0xc));
        if (cVar1 != '\0') {
          (**(code **)(**(int **)(in_ECX + 8) + 0xe8))();
        }
      }
      else {
        uVar2 = FUN_0046b250(iVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03e00,0);
        uVar2 = FUN_009832e6(uVar2);
        *(undefined4 *)(in_ECX + 8) = uVar2;
      }
    }
    if (*(int *)(in_ECX + 8) != 0) {
      iVar3 = FUN_00673980(*(undefined4 *)(*(int *)(in_ECX + 8) + 0x18));
      if (iVar3 <= *(int *)(in_ECX + 4)) {
        *(int *)(in_ECX + 4) = iVar3 + -1;
      }
    }
  }
  return;
}



void FUN_0060d810(uint param_1)

{
  char cVar1;
  int in_ECX;
  
  if (((param_1 & 0x20000) != 0) && (*(int *)(in_ECX + 8) != 0)) {
    cVar1 = FUN_00446b80(*(undefined4 *)(*(int *)(in_ECX + 8) + 0xc));
    if (cVar1 != '\0') {
      if ((param_1 & 0x10000) == 0) {
        FUN_0045c7a0(*(undefined4 *)(in_ECX + 8));
      }
      *(undefined4 *)(in_ECX + 8) = 0;
    }
  }
  return;
}



void FUN_0060d860(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



void FUN_0060d880(undefined4 *param_1)

{
  LONG LVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    LVar1 = InterlockedDecrement(param_1 + 1);
    if (LVar1 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  return;
}



void FUN_0060d8b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00897230(param_1);
  *in_ECX = &PTR_FUN_00a6fa64;
  in_ECX[0x78] = &PTR_LAB_00a6fa54;
  in_ECX[0x7c] = &PTR_LAB_00a6fa38;
  in_ECX[0xf4] = param_2;
  return;
}



void FUN_0060d920(byte param_1)

{
  int in_ECX;
  
  FUN_00893040();
  if (((param_1 & 1) != 0) && (in_ECX != 0)) {
    FUN_00401e40(in_ECX - (uint)*(byte *)(in_ECX + -1));
  }
  return;
}



void FUN_0060d950(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  piVar7 = (int *)0x0;
  iVar2 = FUN_008afce0(param_2);
  if (iVar2 != 0) {
    piVar7 = (int *)FUN_004dc270(iVar2);
  }
  piVar3 = (int *)FUN_009832e6(piVar7,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((*(char *)(param_2 + 0x18) == '\x02') && (*(int *)(param_2 + 0x10) + param_2 != 0)) {
    if (piVar3 == (int *)0x0) {
      return;
    }
    cVar1 = (**(code **)(*piVar3 + 0x198))(0);
    if (cVar1 != '\0') {
      return;
    }
    if ((((int *)piVar3[0x16] != (int *)0x0) &&
        (iVar2 = (**(code **)(*(int *)piVar3[0x16] + 0x2e4))(), iVar2 != 0)) &&
       (iVar2 = (**(code **)(*(int *)piVar3[0x16] + 0x2e4))(), iVar2 != 6)) {
      return;
    }
    iVar2 = (**(code **)(*piVar3 + 0x18c))();
    if ((iVar2 == 4) || (iVar2 = (**(code **)(*piVar3 + 0x18c))(), iVar2 == 9)) {
      iVar2 = *(int *)(param_1 + 0x78);
      if (iVar2 == 0) {
        return;
      }
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x174))();
      uVar8 = 1;
      goto LAB_0060db8d;
    }
  }
  uVar6 = *(uint *)(param_2 + 0x1c) >> 0x10;
  uVar5 = FUN_00607b60();
  if (uVar6 == uVar5) {
    return;
  }
  if ((piVar7 != (int *)0x0) && (piVar7 == *(int **)(DAT_00b333c4 + 0x578))) {
    return;
  }
  FUN_0043f3e0(&uStack_18,param_3);
  FUN_004d68a0(auStack_c,param_4);
  if (uVar6 == 1) {
    FUN_0060bac0(&uStack_18,auStack_c);
    if (*(int *)(param_1 + 0x78) == 0) {
      return;
    }
    FUN_00677760(*(int *)(param_1 + 0x78),uStack_18,uStack_14,uStack_10,0,0);
    return;
  }
  if (piVar7 == (int *)0x0) {
    return;
  }
  if (piVar3 != (int *)0x0) {
    cVar1 = FUN_005e8eb0();
    if (cVar1 != '\0') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x78);
    if (iVar2 != 0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x174))();
      FUN_00677760(iVar2,*puVar4,puVar4[1],puVar4[2],1,piVar3);
    }
    FUN_0060a640(&uStack_18,auStack_c,piVar3);
    return;
  }
  iVar2 = FUN_0047de00(param_2);
  if (iVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
  }
  FUN_0060b120(&uStack_18,auStack_c,piVar7,uVar8);
  iVar2 = *(int *)(param_1 + 0x78);
  if (iVar2 == 0) {
    return;
  }
  puVar4 = (undefined4 *)(**(code **)(*piVar7 + 0x174))();
  piVar3 = (int *)0x0;
  uVar8 = 0;
LAB_0060db8d:
  FUN_00677760(iVar2,*puVar4,puVar4[1],puVar4[2],uVar8,piVar3);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0060dbf0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_44;
  local_34 = param_1;
  local_38 = *(int *)(param_2 + 0x4c);
  iVar8 = 0;
  local_3c = param_2;
  local_44 = 0;
  if (local_38 < 1) {
    return;
  }
  iVar6 = 0;
  local_40 = in_ECX;
  do {
    iVar5 = *(int *)(*local_34 + iVar6 + 0x28);
    puVar7 = (undefined4 *)(*(int *)(local_3c + 0x48) + iVar8);
    if ((*(char *)(iVar5 + 0x18) == '\x01') && (*(int *)(iVar5 + 0x10) + iVar5 != 0)) {
      iVar5 = FUN_008afce0(iVar5);
      if (((iVar5 != 0) && (iVar5 = FUN_004dc270(iVar5), iVar5 != 0)) &&
         (iVar5 == *(int *)(DAT_00b333c4 + 0x578))) {
        if ((local_40 == 0x1f0) || (*(int *)(local_40 + -0x1e8) == 0)) {
          puVar4 = &DAT_00ba7a40;
        }
        else {
          puVar4 = (undefined4 *)FUN_008ac0a0();
        }
        uVar1 = puVar4[1];
        uVar2 = puVar4[2];
        uVar3 = puVar4[3];
        puVar7[4] = *puVar4;
        puVar7[5] = uVar1;
        puVar7[6] = uVar2;
        puVar7[7] = uVar3;
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[3] = 0x3f800000;
        return;
      }
    }
    else if (((byte)*(undefined4 *)(iVar5 + 0x1c) & 0x3f) != 0x14) {
      if ((local_40 == 0x1f0) || (*(int *)(local_40 + -0x1e8) == 0)) {
        puVar4 = &DAT_00ba7a40;
      }
      else {
        puVar4 = (undefined4 *)FUN_008ac0a0();
      }
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      local_30 = 0;
      uStack_2c = 0;
      puVar7[4] = *puVar4;
      puVar7[5] = uVar1;
      puVar7[6] = uVar2;
      puVar7[7] = uVar3;
      uStack_28 = 0;
      uStack_24 = 0x3f800000;
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0x3f800000;
    }
    local_44 = local_44 + 1;
    iVar8 = iVar8 + 0x40;
    iVar6 = iVar6 + 0x30;
    if (local_38 <= local_44) {
      return;
    }
  } while( true );
}



void FUN_0060dd90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6faf4;
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0060ddc0(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x154))(uVar1);
    if (piVar2 != (int *)0x0) {
      iVar3 = (**(code **)(*piVar2 + 8))();
      if (iVar3 != 0) {
        iVar4 = FUN_00700010(&DAT_00b3b808);
        if (iVar4 != 0) {
          *(ushort *)(iVar4 + 8) = *(ushort *)(iVar4 + 8) | 8;
          *(undefined1 *)(iVar4 + 0x3c) = 1;
          *unaff_FS_OFFSET = local_c;
          return;
        }
        piVar2 = (int *)FUN_00401f00(0x40);
        uStack_4 = 0;
        if (piVar2 == (int *)0x0) {
          piVar2 = (int *)0x0;
        }
        else {
          FUN_00715990();
          *piVar2 = (int)&PTR_FUN_00a6faf4;
          *(undefined1 *)(piVar2 + 0xf) = 0;
        }
        uStack_4 = 0xffffffff;
        (**(code **)(*piVar2 + 0x58))(iVar3);
        *(ushort *)(piVar2 + 2) = *(ushort *)(piVar2 + 2) | 8;
        *(undefined1 *)(piVar2 + 0xf) = 1;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0060dea0(void)

{
  undefined4 *puVar1;
  
  while ((DAT_00b3b804 != (undefined4 *)0x0 || (DAT_00b3b800 != (int *)0x0))) {
    (**(code **)(*DAT_00b3b800 + 0x148))();
    puVar1 = DAT_00b3b804;
    if (DAT_00b3b804 == (undefined4 *)0x0) {
      DAT_00b3b800 = (int *)0x0;
    }
    else {
      DAT_00b3b800 = (int *)*DAT_00b3b804;
      DAT_00b3b804 = (undefined4 *)DAT_00b3b804[1];
      FUN_00401f20(puVar1);
    }
  }
  return;
}



void FUN_0060df00(int param_1)

{
  if (param_1 != 0) {
    FUN_0065c620(param_1);
  }
  return;
}



undefined4 * FUN_0060e010(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x40,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    *puVar2 = &PTR_FUN_00a6faf4;
    *(undefined1 *)(puVar2 + 0xf) = 0;
  }
  local_4 = 0xffffffff;
  FUN_00715d80(puVar2,param_1);
  *(ushort *)(puVar2 + 2) = *(ushort *)(puVar2 + 2) & 0xfff7;
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0060e0a0(void)

{
  undefined4 *in_ECX;
  
  FUN_00715990();
  in_ECX[0xf] = 0;
  *in_ECX = &PTR_FUN_00a6fb84;
  in_ECX[0x10] = 0;
  return;
}



void FUN_0060e0c0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x3c) = param_1;
  return;
}



void FUN_0060e0d0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x40) = param_1;
  return;
}



void FUN_0060e0f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6fb84;
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0060e120(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00715990();
    puVar2[0xf] = 0;
    *puVar2 = &PTR_FUN_00a6fb84;
    puVar2[0x10] = 0;
  }
  puVar2[0x10] = *(undefined4 *)(in_ECX + 0x40);
  puVar2[0xf] = *(undefined4 *)(in_ECX + 0x3c);
  local_4 = 0xffffffff;
  FUN_00715d80(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0060e270(void)

{
  undefined4 uVar1;
  int *in_ECX;
  float10 fVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  local_4 = 0;
  fVar2 = (float10)FUN_005f4880(0,&local_8,&local_4);
  uVar1 = (**(code **)(*in_ECX + 0x284))(0,(float)fVar2);
  uVar1 = (**(code **)(*in_ECX + 0x284))(7,uVar1);
  uVar1 = (**(code **)(*in_ECX + 0x284))(0x11,uVar1);
  FUN_00547280(uVar1);
  FUN_009828c0();
  return;
}



void FUN_0060e2e0(undefined4 param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
  FUN_009832e6(uVar1);
  FUN_00529530(param_1);
  return;
}



undefined4 FUN_0060e320(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_var;
  
  iVar1 = FUN_006ecc80();
  if (iVar1 != 0) {
    FUN_006ecc80();
    uVar2 = FUN_004cabc0(extraout_var);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_0060e350(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0xd4);
}



uint thunk_FUN_005e7d00(uint param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *in_ECX;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  uVar4 = param_1;
  uVar7 = FUN_00659be0(param_1);
  uVar7 = uVar7 & 0xffff;
  cVar5 = FUN_0045a170();
  uVar11 = uVar7;
  if (cVar5 != '\0') {
    uVar11 = uVar7 + 6;
  }
  iVar12 = uVar11 + 7;
  if ((param_1 & 0x40) != 0) {
    iVar12 = uVar11 + 8;
  }
  iVar8 = (**(code **)(*in_ECX + 0x170))();
  iVar13 = iVar12;
  if ((((*(char *)(iVar8 + 4) == '$') && (iVar8 = (**(code **)(*in_ECX + 0x170))(), iVar8 != 0)) &&
      (*(char *)(iVar8 + 0x104) == '\x04')) && (iVar13 = iVar12 + 1, in_ECX[0x35] != 0)) {
    iVar13 = iVar12 + 5;
  }
  if ((param_1 & 0x8000) != 0) {
    iVar13 = iVar13 + 2;
    piVar9 = in_ECX + 0x29;
    while ((piVar9 != (int *)0x0 &&
           ((piVar2 = (int *)piVar9[1], piVar2 != (int *)0x0 || (*piVar9 != 0))))) {
      iVar12 = *piVar9;
      piVar9 = piVar2;
      if (*(int *)(iVar12 + 4) != 0) {
        iVar13 = iVar13 + 8;
      }
    }
  }
  if ((param_1 & 0x20000000) != 0) {
    iVar13 = iVar13 + 4;
  }
  iVar12 = 0;
  for (piVar9 = in_ECX + 0x27; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
    if (*piVar9 != 0) {
      iVar12 = iVar12 + 1;
    }
  }
  param_1 = iVar13 + 2 + iVar12 * 8;
  bVar1 = *(byte *)(DAT_00b33b00 + 0x7c);
  if (0x31 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (0x3b < bVar1) {
    param_1 = param_1 + 4;
  }
  if ((0x43 < bVar1) && ((uVar4 & 0x200000) != 0)) {
    sVar6 = FUN_0065c520();
    param_1 = (uint)(ushort)((short)param_1 + sVar6);
  }
  bVar1 = *(byte *)(DAT_00b33b00 + 0x7c);
  if (0x44 < bVar1) {
    param_1 = param_1 + 5;
  }
  if (0x60 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (100 < bVar1) {
    param_1 = param_1 + 4;
  }
  if (0x70 < bVar1) {
    param_1 = param_1 + 0xe;
  }
  if (0x72 < bVar1) {
    param_1 = param_1 + 1;
  }
  if (0x7a < bVar1) {
    param_1 = param_1 + 1;
  }
  if (DAT_00b05bac == '\0') {
    return param_1 & 0xffff;
  }
  puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",(param_1 & 0xffff) - uVar7,
                 0x4323,".\\AI\\Actor.cpp");
    return param_1 & 0xffff;
  }
  piVar9 = (int *)FUN_0046b250(*puVar3);
  uVar10 = (**(code **)(*piVar9 + 0xd4))(*(undefined4 *)((int)puVar3 + 5),0x4323,".\\AI\\Actor.cpp")
  ;
  FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
               (param_1 & 0xffff) - uVar7,*puVar3,uVar10);
  return param_1 & 0xffff;
}



void thunk_FUN_005e7ef0(uint param_1)

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  short *psVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *in_ECX;
  uint uVar10;
  char cStack_19;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  short *psStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uVar10 = param_1;
  FUN_00659c30(param_1);
  uStack_8 = 0;
  iStack_10 = *(int *)(DAT_00b33b00 + 0x14);
  psStack_c = (short *)0x0;
  cVar6 = FUN_0045a170();
  if (cVar6 != '\0') {
    iStack_18 = 0x4b4f4c42;
    FUN_0045b9a0(&iStack_18,4);
    psStack_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&uStack_8,2);
  }
  FUN_0046ac70(in_ECX + 0x2f,4);
  FUN_0046ac70(in_ECX + 0x32,1);
  FUN_0046ac70((int)in_ECX + 0xc9,1);
  FUN_0046ac70(in_ECX + 0x1e,1);
  if ((uVar10 & 0x40) != 0) {
    cStack_19 = (char)in_ECX[0x2c];
    FUN_0046ac70(&cStack_19,1);
  }
  iVar7 = (**(code **)(*in_ECX + 0x170))();
  if (((*(char *)(iVar7 + 4) == '$') && (iVar7 = (**(code **)(*in_ECX + 0x170))(), iVar7 != 0)) &&
     (*(char *)(iVar7 + 0x104) == '\x04')) {
    cStack_19 = in_ECX[0x35] != 0;
    FUN_0046ac70(&cStack_19,1);
    if (cStack_19 != '\0') {
      iStack_18 = *(int *)(in_ECX[0x35] + 0xc);
      FUN_0046ac90(&iStack_18,4);
    }
  }
  if ((uVar10 & 0x8000) != 0) {
    iStack_18 = 0;
    puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&iStack_18,2);
    uVar10 = param_1;
    for (piVar8 = in_ECX + 0x29;
        (param_1 = uVar10, piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
        piVar8 = (int *)piVar8[1]) {
      iVar7 = *piVar8;
      iVar2 = *(int *)(iVar7 + 4);
      if (iVar2 != 0) {
        uStack_4 = *(undefined4 *)(iVar2 + 0xc);
        FUN_0046ac90(&uStack_4,4);
        FUN_0046ac70(iVar7,4);
        iStack_18 = iStack_18 + 1;
      }
      uVar10 = param_1;
    }
    *puVar1 = (undefined2)iStack_18;
  }
  if ((uVar10 & 0x20000000) != 0) {
    uStack_4 = FUN_00453a00(in_ECX);
    FUN_0046ac70(&uStack_4,4);
  }
  iStack_14 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&iStack_14,2);
  for (piVar8 = in_ECX + 0x27; (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    piVar3 = (int *)*piVar8;
    iStack_18 = 0;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      iStack_18 = *(int *)(iVar7 + 0xc);
    }
    FUN_0046ac90(&iStack_18,4);
    FUN_0046ac70(piVar3 + 1,4);
    iStack_14 = iStack_14 + 1;
  }
  *puVar1 = (undefined2)iStack_14;
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    iStack_18 = 0;
    if (in_ECX[0x1f] != 0) {
      iStack_18 = *(int *)(in_ECX[0x1f] + 0xc);
    }
    FUN_0046ac90(&iStack_18,4);
  }
  if (0x3b < *(byte *)(DAT_00b33b00 + 0x7c)) {
    iStack_18 = 0;
    if (in_ECX[0x34] != 0) {
      iStack_18 = *(int *)(in_ECX[0x34] + 0xc);
    }
    FUN_0046ac90(&iStack_18,4);
  }
  if ((0x43 < *(byte *)(DAT_00b33b00 + 0x7c)) && ((param_1 & 0x200000) != 0)) {
    FUN_0065c270();
  }
  if (0x44 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x20,1);
    param_1 = 0;
    if (in_ECX[0x33] != 0) {
      param_1 = *(uint *)(in_ECX[0x33] + 0xc);
    }
    FUN_0045f7a0(&param_1,4);
  }
  if (0x60 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (in_ECX[0x39] != 0) {
      param_1 = *(uint *)(in_ECX[0x39] + 0xc);
    }
    FUN_0045f7a0(&param_1,4);
  }
  if (100 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x21,4);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x2b,4);
    FUN_0046ac70((int)in_ECX + 0xca,1);
    FUN_0046ac70(in_ECX + 0x36,1);
    FUN_0046ac70(in_ECX + 0x37,4);
    FUN_0046ac70(in_ECX + 0x40,4);
  }
  if (0x72 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x3f,1);
  }
  if (0x7a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046ac70(in_ECX + 0x30,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar4 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar7 - iStack_10,0x43c2,
                   ".\\AI\\Actor.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar4);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar4 + 5),0x43c2,".\\AI\\Actor.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar7 - iStack_10,*puVar4,uVar9);
    }
  }
  cVar6 = FUN_0045a170();
  psVar5 = psStack_c;
  if (cVar6 != '\0') {
    uVar10 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)psStack_c + 0xffffU < uVar10) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\Actor.cpp",0x43c2);
    }
    *psVar5 = (short)uVar10 - (short)psVar5;
  }
  return;
}



void FUN_0060e390(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX[0x16] != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x284))(0x45);
    if (iVar1 != 0) {
      (**(code **)(*(int *)in_ECX[0x16] + 0x31c))(1);
    }
  }
  FUN_005e83a0(param_1,param_2);
  return;
}



void FUN_0060e430(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x154))();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*in_ECX + 0x380))();
    if (iVar1 != 0) {
      FUN_005f0410();
    }
  }
  TESObjectREFR_Set3D(param_1);
  return;
}



void FUN_0060e470(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x1000;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffffefff;
  return;
}



void FUN_0060e490(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800000;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xff7fffff;
  return;
}



void FUN_0060e4b0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x200000;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffdfffff;
  return;
}



void FUN_0060e4d0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x100000;
    return;
  }
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xffefffff;
  return;
}



void FUN_0060e4f0(void)

{
  undefined4 *in_ECX;
  
  FUN_005e15e0();
  in_ECX[0x42] = 0xbf800000;
  *in_ECX = &PTR_FUN_00a6fc9c;
  in_ECX[6] = &PTR_FUN_00a6fc94;
  in_ECX[0x17] = &PTR_LAB_00a6fc4c;
  in_ECX[0x1a] = &PTR_LAB_00a6fc1c;
  *(undefined1 *)(in_ECX + 1) = 0x32;
  in_ECX[0x41] = 0;
  return;
}



void FUN_0060e540(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_005e1880(param_1);
  *in_ECX = &PTR_FUN_00a6fc9c;
  in_ECX[6] = &PTR_FUN_00a6fc94;
  in_ECX[0x17] = &PTR_LAB_00a6fc4c;
  in_ECX[0x1a] = &PTR_LAB_00a6fc1c;
  *(undefined1 *)(in_ECX + 1) = 0x32;
  in_ECX[0x41] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0060e580(void)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  bool bVar7;
  float10 fVar8;
  float local_50;
  float local_4c;
  int local_48;
  int local_40 [16];
  
  iVar6 = 0;
  local_40[0] = 0;
  if (*(float *)(in_ECX + 0x108) < 0.0) {
    *(undefined4 *)(in_ECX + 0x108) = 0;
    local_4c = 0.0;
    local_50 = 0.0;
    iVar3 = FUN_0041e6f0();
    if (iVar3 != 0) {
      local_48 = 0;
      do {
        if (local_48 == 0xd) {
          if (((*(int **)(in_ECX + 0x58) != (int *)0x0) &&
              (iVar3 = (**(code **)(**(int **)(in_ECX + 0x58) + 0xf8))(1), iVar3 != 0)) &&
             (iVar3 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,
                                   0), iVar3 != 0)) {
            cVar2 = FUN_004b4c70();
            if (cVar2 == '\0') {
              fVar8 = (float10)FUN_00488cb0(in_ECX);
              local_4c = (float)(fVar8 + (float10)local_4c);
            }
            else {
              fVar8 = (float10)FUN_00488cb0(in_ECX);
              local_50 = (float)(fVar8 + (float10)local_50);
            }
          }
        }
        else {
          iVar3 = FUN_00486790(local_48,0);
          if (iVar3 != 0) {
            iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0)
            ;
            if (iVar4 != 0) {
              bVar7 = false;
              if ((iVar6 != 0) && (iVar5 = 0, 0 < iVar6)) {
                do {
                  if (bVar7) goto LAB_0060e6d7;
                  bVar7 = local_40[iVar5] == iVar4;
                  iVar5 = iVar5 + 1;
                } while (iVar5 < iVar6);
                if (bVar7) goto LAB_0060e6d7;
              }
              cVar2 = FUN_004b4c70();
              if (cVar2 == '\0') {
                fVar8 = (float10)FUN_00488cb0(in_ECX);
                local_4c = (float)(fVar8 + (float10)local_4c);
              }
              else {
                fVar8 = (float10)FUN_00488cb0(in_ECX);
                local_50 = (float)(fVar8 + (float10)local_50);
              }
              local_40[iVar6] = iVar4;
              iVar6 = iVar6 + 1;
            }
LAB_0060e6d7:
            FUN_00484470();
            FUN_00401f20(iVar3);
          }
        }
        local_48 = local_48 + 1;
      } while (local_48 < 0x10);
    }
    *(float *)(in_ECX + 0x108) = local_50 + local_4c;
  }
  local_4c = *(float *)(in_ECX + 0x108);
  iVar6 = FUN_005f23b0(0x1b);
  if (((iVar6 == 4) && (iVar6 = FUN_005e5c80(1), iVar6 == 0)) &&
     (iVar6 = FUN_005e5c80(0), DAT_00b37260 <= iVar6)) {
    local_4c = _DAT_00b37258 * local_4c;
  }
  fVar8 = (float10)FUN_005e0cd0();
  fVar1 = (float)(fVar8 + (float10)local_4c);
  if (_DAT_00b37d20 <= 0.0) {
    return (float10)fVar1;
  }
  if (_DAT_00b37d20 <= fVar1) {
    return (float10)_DAT_00b37d20;
  }
  return (float10)fVar1;
}



undefined4 FUN_0060e8a0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_0041e6f0();
  if (iVar1 != 0) {
    uVar3 = 0;
    uVar2 = FUN_005e02e0(0);
    uVar2 = FUN_0048b9c0(uVar2,uVar3);
    return uVar2;
  }
  return 0;
}



void FUN_0060eaf0(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int unaff_ESI;
  int iVar7;
  
  iVar7 = 1;
  cVar2 = (**(code **)(*in_ECX + 0x334))();
  if ((((((cVar2 == '\0') && (cVar2 = (**(code **)(*in_ECX + 0x198))(0), cVar2 == '\0')) &&
        (cVar2 = FUN_005e6ba0(), cVar2 == '\0')) &&
       ((cVar2 = FUN_005e6cd0(0), cVar2 == '\0' &&
        (cVar2 = (**(code **)(*in_ECX + 0x354))(), cVar2 == '\0')))) &&
      ((unaff_ESI == 0 || (*(int *)(unaff_ESI + 0x54) < 1)))) &&
     (((iVar3 = (**(code **)(*in_ECX + 0x18c))(), iVar3 == 0 ||
       (iVar3 = (**(code **)(*in_ECX + 0x18c))(), iVar3 == 4)) ||
      (iVar3 = (**(code **)(*in_ECX + 0x18c))(), iVar3 == 9)))) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0x49c))();
    iVar3 = FUN_005e0380();
    if (iVar3 != 0) {
      FUN_005e0380();
      cVar2 = FUN_00567770();
      if (cVar2 != '\0') {
        FUN_005eae70();
      }
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1[2] != 0) {
      uVar4 = (**(code **)(*piVar1 + 0x390))();
      uVar5 = (**(code **)(*piVar1 + 0xc0))(uVar4);
      uVar6 = (**(code **)(*piVar1 + 0xcc))(uVar5);
      unaff_ESI = iVar7;
      FUN_004268b0(piVar1[2],piVar1[1],uVar6,uVar5,uVar4);
    }
    FUN_005f1590(unaff_ESI,0,0);
    *(int *)(unaff_ESI + 0x54) = *(int *)(unaff_ESI + 0x54) + 1;
                    /* WARNING: Could not recover jumptable at 0x0060ec57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)in_ECX[0x16] + 0x17c))(0);
    return;
  }
  return;
}



void FUN_0060ec60(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b58d1;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = (**(code **)(*in_ECX + 0x334))(1,uVar3);
  if (cVar2 == '\0') {
    iVar4 = FUN_005e0380();
    if (iVar4 != 0) {
      iVar4 = FUN_005e0380();
      if ((*(uint *)(iVar4 + 0x1c) >> 0xc & 1) != 0) goto LAB_0060eec4;
    }
    iVar10 = 0;
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
    (**(code **)(*(int *)in_ECX[0x16] + 0x49c))();
    iVar4 = *(int *)(in_ECX[0x16] + 8);
    iVar5 = FUN_005e0380();
    if (iVar5 != 0) {
      FUN_005e0380();
      cVar2 = FUN_00567770();
      if (cVar2 != '\0') {
        (**(code **)(*in_ECX + 0x30c))();
      }
    }
    iVar5 = FUN_00401f00(0x3c);
    local_c = 0;
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_00568e10();
    }
    local_c = -1;
    FUN_005661e0(0x1b);
    *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 6;
    iVar6 = FUN_00401f00(0xc);
    local_c = 1;
    if (iVar6 != 0) {
      iVar10 = FUN_005696b0();
    }
    local_c = -1;
    FUN_00569750(0);
    FUN_005697f0(in_ECX);
    FUN_00565e00(iVar10);
    if (iVar10 != 0) {
      FUN_00569730();
      FUN_00401f20(iVar10);
    }
    iVar10 = FUN_00401f00(0xc);
    local_c = 2;
    if (iVar10 == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = FUN_00569e40();
    }
    local_c = -1;
    FUN_00565ec0(iVar10);
    if (iVar10 != 0) {
      FUN_0060d0a0();
      FUN_00401f20(iVar10);
    }
    *(undefined4 *)(iVar5 + 0x18) = 0x1f;
    FUN_00569e90(0);
    FUN_00569ec0(uStack_4);
    FUN_00468230(0);
    if (iVar4 != 0) {
      if ((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) == 0) {
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xffefffff;
      }
      else {
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x100000;
      }
      if ((*(uint *)(iVar4 + 0x1c) >> 0x15 & 1) == 0) {
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) & 0xffdfffff;
      }
      else {
        *(uint *)(iVar5 + 0x1c) = *(uint *)(iVar5 + 0x1c) | 0x200000;
      }
    }
    (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
    piVar1 = (int *)in_ECX[0x16];
    if (piVar1[2] != 0) {
      uVar7 = (**(code **)(*piVar1 + 0x390))();
      uVar8 = (**(code **)(*piVar1 + 0xc0))(uVar7);
      uVar9 = (**(code **)(*piVar1 + 0xcc))(uVar8);
      FUN_004268b0(piVar1[2],piVar1[1],uVar9,uVar8,uVar7);
    }
    (**(code **)(*(int *)in_ECX[0x16] + 1000))(unaff_retaddr,param_2,param_1);
    FUN_005f1590(iVar5,0,1);
    FUN_005f8000();
  }
LAB_0060eec4:
  *unaff_FS_OFFSET = iStack_10;
  return;
}



undefined4 FUN_0060eee0(int *param_1,char param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c30ec;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_00659a00(uVar4);
  if (iVar5 == 0) {
    iVar5 = FUN_00659a00(uVar4);
    if (iVar5 == 0) {
      iVar5 = *(int *)(in_ECX[0x16] + 8);
      bVar10 = param_1 != (int *)0x0;
      param_1 = (int *)0x0;
      if (bVar10) {
        iVar6 = (**(code **)(*piVar2 + 0x18c))();
        if (iVar6 != 0) {
          iVar6 = (**(code **)(*piVar2 + 0x18c))();
          if (iVar6 != 4) {
            iVar6 = (**(code **)(*piVar2 + 0x18c))();
            if (iVar6 != 9) goto LAB_0060f237;
          }
        }
        if (piVar2 != DAT_00b333c4) {
          iVar6 = FUN_00401f00(0x10);
          uStack_4 = 0;
          if (iVar6 == 0) {
            param_1 = (int *)0x0;
          }
          else {
            param_1 = (int *)FUN_006b7420(in_ECX,piVar2,param_3,0);
          }
          uStack_4 = 0xffffffff;
        }
        FUN_005ef930();
        (**(code **)(*in_ECX + 0x340))(0);
        (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
        iVar6 = (**(code **)(*in_ECX + 0x284))(0x2f);
        if (0 < iVar6) {
          FUN_006a24b0(0x49564e49,0);
        }
        if (piVar2 != DAT_00b333c4) {
          cVar3 = FUN_006b74b0();
          if (cVar3 == '\0') goto LAB_0060f237;
        }
        piVar1 = (int *)in_ECX[0x16];
        if (piVar1[2] != 0) {
          uVar7 = (**(code **)(*piVar1 + 0x390))();
          uVar8 = (**(code **)(*piVar1 + 0xc0))(uVar7);
          uVar9 = (**(code **)(*piVar1 + 0xcc))(uVar8);
          FUN_004268b0(piVar1[2],piVar1[1],uVar9,uVar8,uVar7);
        }
        (**(code **)(*(int *)in_ECX[0x16] + 0x49c))();
        (**(code **)(*(int *)in_ECX[0x16] + 0x490))(piVar2);
        (**(code **)(*(int *)piVar2[0x16] + 0x49c))();
        (**(code **)(*(int *)piVar2[0x16] + 0x490))();
        iVar6 = FUN_00401f00(100);
        local_c = 1;
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_00625d80(uStack_4,in_ECX,piVar2);
        }
        local_c = -1;
        *(int **)(iVar6 + 0x40) = param_1;
        if (iVar5 != 0) {
          FUN_0060e470(*(uint *)(iVar5 + 0x1c) >> 0xc & 0xffffff01);
          FUN_0060e490(*(uint *)(iVar5 + 0x1c) >> 0x17 & 0xffffff01);
          FUN_0060e4d0(*(uint *)(iVar5 + 0x1c) >> 0x14 & 0xffffff01);
          FUN_0060e4b0(*(uint *)(iVar5 + 0x1c) >> 0x15 & 0xffffff01);
        }
        FUN_005661e0(0x12);
        *(uint *)(iVar6 + 0x1c) = *(uint *)(iVar6 + 0x1c) | 6;
        iVar5 = FUN_00401f00(0xc);
        local_c = 2;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_005696b0();
        }
        local_c = -1;
        FUN_00569750(0);
        FUN_005697f0(piVar2);
        FUN_00565e00(iVar5);
        if (iVar5 != 0) {
          FUN_00569730();
          FUN_00401f20(iVar5);
        }
        iVar5 = FUN_00401f00(0xc);
        local_c = 3;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = FUN_00569e40();
        }
        local_c = -1;
        FUN_00565ec0(iVar5);
        if (iVar5 != 0) {
          FUN_0060d0a0();
          FUN_00401f20(iVar5);
        }
        *(undefined4 *)(iVar6 + 0x18) = 10;
        FUN_00569e90(0);
        FUN_00569ec0(piVar2);
        iVar5 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))();
        if (iVar5 == 4) {
          uVar7 = 200;
        }
        else {
          uVar7 = 0x5a;
        }
        FUN_00468230(uVar7);
        (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
        FUN_005f1590(iVar6,0,1);
        if (param_2 != '\0') {
          *(int *)(in_ECX[0x16] + 4) = *(int *)(in_ECX[0x16] + 4) + 1;
        }
        uVar7 = 1;
        goto LAB_0060f239;
      }
    }
  }
LAB_0060f237:
  uVar7 = 0;
LAB_0060f239:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



void FUN_0060f250(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c3131;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((in_ECX[0x16] != 0) && (iVar3 = *(int *)(in_ECX[0x16] + 8), iVar3 != 0)) &&
     (*(char *)(iVar3 + 0x20) == '\x0f')) goto LAB_0060fb86;
  if (param_1 != 0) {
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x10000,uVar2);
      uVar5 = 0x400000;
      break;
    case 1:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x20000,uVar2);
      uVar5 = 0x800000;
      break;
    case 2:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x40000,uVar2);
      uVar5 = 0x1000000;
      break;
    case 3:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x80000,uVar2);
      uVar5 = 0x2000000;
      break;
    case 4:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x100000,uVar2);
      uVar5 = 0x4000000;
      break;
    case 5:
      FUN_004fbf90(*(undefined4 *)(param_1 + 0xc),in_ECX + 0x11,0x200000,uVar2);
      uVar5 = 0x8000000;
      break;
    default:
      goto switchD_0060f2a6_default;
    }
    FUN_004fbf90(*(undefined4 *)(param_1 + 8),in_ECX + 0x11,uVar5);
  }
switchD_0060f2a6_default:
  iVar3 = (**(code **)(*in_ECX + 0x380))();
  if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)in_ECX[0x16] + 0x36c))(), iVar3 == 0)) {
    piVar4 = (int *)(**(code **)(*in_ECX + 0x380))();
    (**(code **)(*piVar4 + 0x38c))(0);
    (**(code **)(*in_ECX + 900))(0);
  }
  cVar1 = FUN_005e6c60();
  if (cVar1 != '\0') {
    if ((param_1 != 0) && (param_4 == (int *)0x0)) {
      param_4 = *(int **)(param_1 + 0xc);
    }
    piVar4 = (int *)FUN_006758e0(param_4,0xf,0);
    if (piVar4 == (int *)0x0) {
      (**(code **)(*(int *)param_4[0x16] + 0x234))(0);
    }
    else {
      iVar3 = 0;
      do {
        if (*piVar4 != 0) {
          iVar3 = iVar3 + 1;
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
      (**(code **)(*(int *)param_4[0x16] + 0x234))(iVar3);
    }
    iVar3 = (**(code **)(*(int *)param_4[0x16] + 0x444))();
    if (DAT_00b36a70 <= iVar3) {
      if (((param_1 != 0) && (cVar1 = FUN_005e32d0(), cVar1 != '\0')) &&
         (*(char *)(param_1 + 0x11) == '\0')) {
        iVar3 = (**(code **)(*in_ECX + 0x284))(0x24);
        if (iVar3 < 100) {
          FUN_005e3320();
          cVar1 = FUN_0051bef0();
          if (cVar1 == '\0') goto LAB_0060fb86;
        }
        uVar5 = FUN_005e02e0(1);
        cVar1 = FUN_0046cb60();
        if (cVar1 != '\0') {
          uVar5 = FUN_005e02e0(0);
        }
        FUN_009832e6(uVar5,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
        fVar10 = (float10)FUN_00606140();
        fVar11 = (float10)FUN_005234a0();
        (**(code **)(**(int **)(param_1 + 0xc) + 0x254))((float)(fVar11 * (float10)(float)fVar10));
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
      goto LAB_0060fb86;
    }
    if ((param_4 == DAT_00b333c4) && ((char)DAT_00b333c4[0x1ce] != '\0')) {
      if ((param_1 != 0) &&
         ((cVar1 = FUN_005e32d0(), cVar1 != '\0' && (*(char *)(param_1 + 0x11) == '\0')))) {
        iVar3 = (**(code **)(*in_ECX + 0x284))(0x24);
        if (iVar3 < 100) {
          FUN_005e3320();
          cVar1 = FUN_0051bef0();
          if (cVar1 == '\0') goto LAB_0060f5a4;
        }
        uVar5 = FUN_005e02e0(1);
        cVar1 = FUN_0046cb60();
        if (cVar1 != '\0') {
          uVar5 = FUN_005e02e0(0);
        }
        FUN_009832e6(uVar5,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
        fVar10 = (float10)FUN_00606140();
        fVar11 = (float10)FUN_005234a0();
        (**(code **)(**(int **)(param_1 + 0xc) + 0x254))((float)(fVar11 * (float10)(float)fVar10));
        *(undefined1 *)(param_1 + 0x11) = 1;
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
LAB_0060f5a4:
      (**(code **)(*(int *)in_ECX[0x16] + 0x228))();
      goto LAB_0060fb86;
    }
    (**(code **)(*(int *)param_4[0x16] + 0x448))(1);
  }
  iVar3 = (**(code **)(*in_ECX + 0x18c))();
  if (iVar3 == 9) {
    (**(code **)(*in_ECX + 800))();
  }
  iVar9 = 0;
  iVar3 = FUN_005e03a0();
  if ((iVar3 != 0) && (cVar1 = FUN_00567770(), cVar1 != '\0')) {
    iVar3 = FUN_0041fb20();
  }
  cVar1 = (**(code **)(*in_ECX + 0x334))(0);
  if (((((cVar1 == '\0') && (cVar1 = (**(code **)(*in_ECX + 0x198))(0), cVar1 == '\0')) &&
       (cVar1 = FUN_005e6cd0(0), cVar1 == '\0')) &&
      (((iVar3 == 0 || ((*(uint *)(iVar3 + 0x1c) >> 0x16 & 1) == 0)) ||
       ((param_1 == 0 ||
        (iVar3 = *(int *)(param_1 + 8), iVar6 = (**(code **)(*(int *)in_ECX[0x16] + 0xcc))(),
        iVar3 == iVar6)))))) || ((char)param_2 == '\0')) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x178))(0);
    iVar3 = FUN_005e0380();
    if (iVar3 != 0) {
      iVar3 = FUN_005e0380();
      if (*(char *)(iVar3 + 0x20) == '\x0f') {
        iVar9 = FUN_005e0380();
      }
      else {
        FUN_005e0380();
        cVar1 = FUN_00567770();
        if (cVar1 != '\0') {
          FUN_005eae70();
        }
      }
    }
    if (param_1 != 0) {
      cVar1 = FUN_005e32d0();
      if ((cVar1 != '\0') && (*(char *)(param_1 + 0x11) == '\0')) {
        iVar3 = (**(code **)(*in_ECX + 0x284))(0x24);
        if (iVar3 < 100) {
          FUN_005e3320();
          cVar1 = FUN_0051bef0();
          if (cVar1 == '\0') goto LAB_0060f875;
        }
        uVar5 = FUN_005e02e0(1);
        cVar1 = FUN_0046cb60();
        if (cVar1 != '\0') {
          uVar5 = FUN_005e02e0(0);
        }
        FUN_009832e6(uVar5,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
        fVar10 = (float10)FUN_00606140();
        fVar11 = (float10)FUN_005234a0();
        (**(code **)(**(int **)(param_1 + 0xc) + 0x254))((float)(fVar11 * (float10)(float)fVar10));
        *(undefined1 *)(param_1 + 0x11) = 1;
      }
LAB_0060f875:
      FUN_005e3320();
      cVar1 = FUN_0051bef0();
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x2c) = 1;
        if ((*(int **)(param_1 + 0xc) == DAT_00b333c4) && (cVar1 = FUN_0065da50(), cVar1 != '\0')) {
          FUN_0065d670(1);
          (**(code **)(*(int *)in_ECX[0x16] + 0x228))();
          goto LAB_0060fb86;
        }
        cVar1 = FUN_005e32d0();
        if ((((cVar1 != '\0') && (*(int **)(param_1 + 0xc) != DAT_00b333c4)) &&
            (cVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x334))(1), cVar1 == '\0')) &&
           (cVar1 = FUN_004db4a0(), cVar1 != '\0')) {
          piVar4 = *(int **)(param_1 + 0xc);
          cVar1 = FUN_005e6cd0(0);
          if (cVar1 == '\0') {
            (**(code **)(*piVar4 + 0x318))();
          }
          uVar5 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b0a048,0);
          iVar3 = FUN_009832e6(uVar5);
          if (iVar3 != 0) {
            FUN_00626c90(in_ECX);
          }
        }
      }
    }
    if (iVar9 == 0) {
      iVar3 = *(int *)(in_ECX[0x16] + 8);
      iVar9 = FUN_00401f00(0x40);
      uStack_4 = 0;
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = FUN_006068d0(param_1);
      }
      uStack_4 = 0xffffffff;
      FUN_005661e0(0xf);
      if (iVar3 != 0) {
        if ((*(uint *)(iVar3 + 0x1c) >> 0x17 & 1) == 0) {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xff7fffff;
        }
        else {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x800000;
        }
        if ((*(uint *)(iVar3 + 0x1c) >> 0x14 & 1) == 0) {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xffefffff;
        }
        else {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x100000;
        }
        if ((*(uint *)(iVar3 + 0x1c) >> 0x15 & 1) == 0) {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) & 0xffdfffff;
        }
        else {
          *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 0x200000;
        }
      }
      *(uint *)(iVar9 + 0x1c) = *(uint *)(iVar9 + 0x1c) | 6;
      iVar3 = FUN_00401f00(0xc);
      uStack_4 = 1;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_005696b0();
      }
      uStack_4 = 0xffffffff;
      FUN_00569750(0);
      piVar4 = param_4;
      if (param_1 != 0) {
        piVar4 = *(int **)(param_1 + 0xc);
      }
      FUN_005697f0(piVar4);
      FUN_00565e00(iVar3);
      if (iVar3 != 0) {
        FUN_00569730();
        FUN_00401f20(iVar3);
      }
      iVar3 = FUN_00401f00(0xc);
      uStack_4 = 2;
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_00569e40();
      }
      uStack_4 = 0xffffffff;
      FUN_00565ec0(iVar3);
      if (iVar3 != 0) {
        FUN_0060d0a0();
        FUN_00401f20(iVar3);
      }
      *(undefined4 *)(iVar9 + 0x18) = 0xb;
      FUN_00569e90(0);
      if (param_1 != 0) {
        param_4 = *(int **)(param_1 + 0xc);
      }
      FUN_00569ec0(param_4);
      (**(code **)(*(int *)in_ECX[0x16] + 0x20))();
      piVar4 = (int *)in_ECX[0x16];
      if (piVar4[2] != 0) {
        uVar5 = (**(code **)(*piVar4 + 0x390))();
        uVar7 = (**(code **)(*piVar4 + 0xc0))(uVar5);
        uVar8 = (**(code **)(*piVar4 + 0xcc))(uVar7);
        FUN_004268b0(piVar4[2],piVar4[1],uVar8,uVar7,uVar5);
      }
      FUN_005f1590(iVar9,0,1);
      if (param_1 != 0) {
        FUN_00605f00(in_ECX);
      }
      (**(code **)(*(int *)in_ECX[0x16] + 0x17c))(param_2);
    }
    else if (((param_1 != 0) &&
             (iVar3 = *(int *)(param_1 + 0xc), iVar9 = FUN_00569e60(), iVar9 == iVar3)) &&
            (cVar1 = FUN_00606ad0(param_1), cVar1 == '\0')) {
      FUN_00606b00(param_1);
    }
    goto LAB_0060fb86;
  }
  if (((param_1 != 0) && (cVar1 = FUN_005e32d0(), cVar1 != '\0')) &&
     (*(char *)(param_1 + 0x11) == '\0')) {
    iVar3 = (**(code **)(*in_ECX + 0x284))(0x24);
    if (iVar3 < 100) {
      FUN_005e3320();
      cVar1 = FUN_0051bef0();
      if (cVar1 == '\0') goto LAB_0060f740;
    }
    uVar5 = FUN_005e02e0(1);
    cVar1 = FUN_0046cb60();
    if (cVar1 != '\0') {
      uVar5 = FUN_005e02e0(0);
    }
    FUN_009832e6(uVar5,0,&PTR_PTR_00b03de4,&PTR_PTR_00b02fb4,0);
    fVar10 = (float10)FUN_00606140();
    fVar11 = (float10)FUN_005234a0();
    (**(code **)(**(int **)(param_1 + 0xc) + 0x254))((float)(fVar11 * (float10)(float)fVar10));
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
LAB_0060f740:
  cVar1 = (**(code **)(*in_ECX + 0x198))(0);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x10) == '\0')) {
    (**(code **)(*(int *)in_ECX[0x16] + 0x230))();
  }
LAB_0060fb86:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0060fd20(int *param_1)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int *piStack_154;
  float fStack_150;
  int *piStack_148;
  uint uStack_144;
  int *local_140;
  char acStack_13c [300];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c326e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_154;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe9c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_140 = param_1;
  if (in_ECX == DAT_00b333c4) {
    fVar10 = (float10)FUN_0041fc90();
    if (fVar10 < (float10)0.0 != (fVar10 == (float10)0.0)) {
      DAT_00b333c4[0x1b7] = DAT_00b333c4[0x1b7] + 1;
      FUN_004269e0((float)DAT_00b376b0);
      (**(code **)(*param_1 + 0x40))(0x80);
    }
  }
  else {
    iVar5 = (**(code **)(*in_ECX + 0x284))(0x1f,uVar3);
    if ((iVar5 == 100) && (cVar2 = FUN_005e0550(), cVar2 != '\0')) goto LAB_0060fe77;
  }
  uVar4 = FUN_004db6b0();
  fStack_150 = (float)FUN_00401f00(0x30);
  uStack_4 = 0;
  if (fStack_150 == 0.0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_006070b0(5,param_1,in_ECX,0,0,uVar4);
  }
  uStack_4 = 0xffffffff;
  piStack_154 = (int *)FUN_0067a290(iVar5);
  piStack_148 = piStack_154;
  if (piStack_154 == (int *)0x0) {
    if (iVar5 != 0) {
      FUN_00605e80();
      FUN_00401f20(iVar5);
    }
    uVar4 = FUN_004da2a0();
    _sprintf(acStack_13c,"%s got away with stealing horse",uVar4);
    FUN_00579b60(acStack_13c);
  }
  else {
    do {
      piVar9 = (int *)*piStack_154;
      if (piVar9 == (int *)0x0) break;
      uStack_144 = uStack_144 & 0xffffff00;
      if ((piVar9 == *(int **)(iVar5 + 8)) || (piVar6 = (int *)FUN_004db6b0(), piVar6 == piVar9)) {
        uStack_144 = CONCAT31(uStack_144._1_3_,1);
      }
      cVar2 = FUN_004db760();
      if ((cVar2 == '\0') || (cVar2 = FUN_004db760(), cVar2 != '\0')) {
        iVar7 = FUN_00605f60(piVar9,uStack_144);
        fStack_150 = (float)iVar7;
        (**(code **)(*piVar9 + 0x374))(*(undefined4 *)(iVar5 + 0xc),fStack_150);
        piVar6 = piStack_154;
        uVar8 = (**(code **)(*piVar9 + 0x224))(piStack_154,piVar9);
        cVar2 = FUN_00605e20(uVar8,piVar6);
        if (cVar2 == '\0') {
          _DAT_00b361c4 = uVar4;
          piVar9[0x39] = *(int *)(iVar5 + 0xc);
          uVar8 = FUN_0052ed50(2,0xe);
          (**(code **)(*(int *)piVar9[0x16] + 0x1a4))(piVar9,uVar8,0,0,1);
          _DAT_00b361c4 = 0;
        }
        else {
          cVar2 = FUN_004db760();
          if (cVar2 == '\0') {
            _DAT_00b361c4 = uVar4;
            FUN_00605f00(unaff_EBX);
            piVar9[0x39] = *(int *)(iVar5 + 0xc);
            uVar8 = FUN_0052ed50(2,3);
            (**(code **)(*(int *)piVar9[0x16] + 0x1a4))(piVar9,uVar8,0,0,1);
            _DAT_00b361c4 = 0;
          }
          (**(code **)(*piVar9 + 0x310))(iVar5,0,1,0);
        }
      }
      piStack_154 = (int *)piStack_154[1];
    } while (piStack_154 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(piStack_148);
    iVar7 = FUN_00605f30();
    if (iVar7 == 0) {
      if (iVar5 != 0) {
        FUN_00605e80();
        FUN_00401f20(iVar5);
      }
    }
    else {
      FUN_00675b30(iVar5);
      piVar9 = *(int **)(iVar5 + 0xc);
      iVar5 = FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
      if (piVar9 == DAT_00b333c4) {
        if (iVar5 == 0) {
          piVar9 = (int *)FUN_009832e6(uVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
          if (piVar9 != (int *)0x0) {
            uVar4 = 1;
            piVar6 = piVar9;
            FUN_005e02e0(0);
            iVar5 = FUN_00467510(piVar6,uVar4);
            if (iVar5 != -1) {
              pcVar1 = *(code **)(*piVar9 + 0x40);
              *(byte *)(piVar9 + 0xd) = *(byte *)(piVar9 + 0xd) | 0x10;
              (*pcVar1)(4);
            }
          }
        }
        else {
          FUN_00467f80(2);
        }
      }
    }
  }
  FUN_00401f20(piStack_154);
LAB_0060fe77:
  *unaff_FS_OFFSET = local_c;
  return;
}


