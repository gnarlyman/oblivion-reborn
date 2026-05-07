
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00630100(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *piVar8;
  int *in_ECX;
  int *piVar9;
  float10 fVar10;
  float10 fVar11;
  int *piVar12;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_4;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  iVar4 = (**(code **)(*in_ECX + 0x36c))();
  if (iVar4 != 0) {
    (**(code **)(*param_1 + 800))();
  }
  iVar4 = 0;
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x0f')) {
    iVar4 = iVar3;
  }
  (**(code **)(*in_ECX + 0xd0))(DAT_00b333c4);
  cVar2 = FUN_00566dc0(param_1,0,0xbf800000);
  if (cVar2 == '\0') {
    fVar10 = (float10)FUN_004d7e90(DAT_00b333c4,0);
    if (fVar10 <= (float10)1000.0) {
      (**(code **)(*in_ECX + 0x58c))(param_1,0,0,0x101);
      return;
    }
    (**(code **)(*in_ECX + 0x58c))(param_1,0,0,0x201);
    return;
  }
  cVar2 = (**(code **)(*in_ECX + 0xc0))();
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0xbc))(1);
    pfVar5 = (float *)(**(code **)(*param_1 + 0x174))();
    pfVar6 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
    fStack_10 = pfVar6[1] - pfVar5[1];
    fStack_c = pfVar6[2] - pfVar5[2];
    fStack_14 = *pfVar6 - *pfVar5;
    fStack_4 = fStack_10;
    fVar10 = (float10)FUN_00683cb0(&fStack_14);
    fVar11 = (float10)FUN_00683d80(param_1,(float)fVar10,&stack0xffffffe4);
    fStack_4 = (float)_DAT_00b36c10 * 0.017453292;
    cVar2 = FUN_005e0590();
    if (cVar2 != '\0') {
      fStack_4 = (float)_DAT_00b36c18 * 0.017453292;
    }
    if (ABS((float)fVar11) <= fStack_4) {
      FUN_005e05f0(0x30);
    }
    else {
      FUN_00685530(param_1,(float)fVar10,1);
    }
    uVar7 = FUN_0052ed50(2,3);
    param_1[0x39] = (int)DAT_00b333c4;
    (**(code **)(*(int *)param_1[0x16] + 0x1a4))(param_1,uVar7,0,0,1);
    pcVar1 = *(code **)(*in_ECX + 0x594);
    *(undefined1 *)((int)in_ECX + 0x25d) = 1;
    (*pcVar1)(param_1);
    piVar9 = DAT_00b333c4;
    uVar7 = (**(code **)(*DAT_00b333c4 + 0x170))(DAT_00b333c4);
    FUN_006286e0(param_1,uVar7,piVar9);
    (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
    piVar9 = *(int **)(iVar4 + 0x3c);
    if (piVar9 != (int *)0x0) {
      while (iVar3 = *piVar9, iVar3 != 0) {
        if (*(int *)(iVar3 + 4) == 0) {
          iVar4 = FUN_00420680();
          piVar8 = param_1;
          if (iVar4 != 0) {
            piVar8 = (int *)FUN_00420680();
          }
          uVar7 = *(undefined4 *)(iVar3 + 0x24);
          piVar12 = DAT_00b333c4;
          FUN_0041e6f0(DAT_00b333c4,piVar8,uVar7);
          FUN_004919e0(piVar12,piVar8,uVar7);
        }
        piVar9 = (int *)piVar9[1];
        if (piVar9 == (int *)0x0) {
          return;
        }
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x164))();
    cVar2 = FUN_00472ea0();
    if (cVar2 != '\0') {
      iVar3 = FUN_0041fb20();
      if ((iVar3 != 0) && (*(char *)(iVar3 + 0x20) == '\x04')) {
        in_ECX[0xb] = (int)DAT_00b333c4;
        (**(code **)(*in_ECX + 0x198))(param_1,0,0xffffffff,0);
        return;
      }
      (**(code **)(*in_ECX + 0x188))(param_1,1);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00630400(int *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  float *pfVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  int *piVar13;
  undefined2 extraout_var_01;
  undefined4 uVar14;
  int *in_ECX;
  int iVar15;
  undefined4 uVar16;
  float10 fVar17;
  float10 fVar18;
  float fVar19;
  int *piStack_40;
  float fStack_3c;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar13 = param_1;
  iVar6 = (**(code **)(*in_ECX + 0x184))();
  uVar7 = 0;
  if (iVar6 == 0) goto LAB_00630d30;
  piStack_40 = (int *)FUN_005e6780();
  if (piStack_40 == (int *)0x0) {
    if (((int *)in_ECX[0xb] == (int *)0x0) ||
       ((cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 == '\0' &&
        (cVar5 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar5 == '\0')))) {
      (**(code **)(*in_ECX + 0x558))(param_1);
      if (((int *)in_ECX[0xb] == (int *)0x0) ||
         ((cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 == '\0' &&
          (cVar5 = FUN_004d88c0(*(undefined4 *)(in_ECX[0xb] + 0xc)), cVar5 == '\0')))) {
        uVar7 = (**(code **)(*in_ECX + 0x188))(param_1,1);
        if ((char)in_ECX[0x34] == '\0') {
          uVar7 = (**(code **)(*in_ECX + 0x194))(param_1);
          return uVar7 & 0xffffff00;
        }
        goto LAB_00630d30;
      }
    }
    piVar11 = (int *)in_ECX[0x11];
    if ((piVar11 != (int *)0x0) && ((int *)*piVar11 == param_1)) {
      piStack_40 = (int *)FUN_004d8d70(piVar11[1],0);
    }
  }
  bVar3 = false;
  bVar4 = false;
  if ((((int *)in_ECX[0xb] != (int *)0x0) &&
      (cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 != '\0')) &&
     (piVar11 = (int *)in_ECX[0xb], piVar11 != param_1)) {
    iVar15 = 0;
    bVar4 = true;
    if ((piVar11 != (int *)0x0) && (cVar5 = (**(code **)(*piVar11 + 400))(), cVar5 != '\0')) {
      iVar15 = in_ECX[0xb];
    }
    iVar15 = *(int *)(*(int *)(iVar15 + 0x58) + 8);
    if ((in_ECX[0xb] != DAT_00b333c4) &&
       ((iVar15 == 0 ||
        ((*(char *)(iVar15 + 0x20) != '\x01' && (cVar5 = FUN_005660a0(), cVar5 == '\0')))))) {
      uVar7 = (**(code **)(*in_ECX + 0x17c))(0);
      return uVar7 & 0xffffff00;
    }
    bVar3 = true;
  }
  (**(code **)(*param_1 + 0x174))();
  if (bVar3) {
    (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    (**(code **)(*param_1 + 0x174))();
  }
  fStack_3c = 0.0;
  if (bVar3) {
    piVar11 = (int *)in_ECX[0xb];
    fStack_3c = (float)FUN_00452a60();
    if ((int)fStack_3c < 1) {
      fStack_3c = 2.8026e-43;
    }
    if (in_ECX[0xb] == DAT_00b333c4) {
      fStack_3c = (float)(int)fStack_3c;
    }
    else {
      iVar15 = FUN_006ecc80();
      if (iVar15 != 0) {
        FUN_006ecc80();
        cVar5 = FUN_004c97f0();
        if (cVar5 != '\0') {
          pfVar9 = (float *)FUN_00403c00();
          fStack_3c = *pfVar9;
          goto LAB_00630647;
        }
      }
      fStack_3c = (float)(int)fStack_3c * _DAT_00b36a98;
    }
LAB_00630647:
    iVar15 = (**(code **)(*(int *)param_1[0x16] + 0x40c))();
    if (iVar15 != 0) {
      piVar8 = (int *)(**(code **)(*(int *)param_1[0x16] + 0x40c))();
      iVar15 = (**(code **)(*piVar8 + 4))();
      if ((iVar15 == 2) && (iVar15 = (**(code **)(*(int *)param_1[0x16] + 0x40c))(), iVar15 != 0)) {
        piVar8 = (int *)FUN_0068a1b0();
        if (piVar8 == (int *)0x0) {
          pfVar9 = (float *)FUN_0068a160();
        }
        else {
          pfVar9 = (float *)(**(code **)(*piVar8 + 0x174))();
        }
        fVar19 = pfVar9[1];
        fVar1 = *pfVar9;
        fVar2 = pfVar9[2];
        pfVar9 = (float *)(**(code **)(*param_1 + 0x174))();
        fStack_c = *pfVar9 - fVar1;
        fStack_8 = pfVar9[1] - fVar19;
        fStack_4 = pfVar9[2] - fVar2;
        (**(code **)(*piVar11 + 0x174))();
      }
    }
  }
  if ((*(int *)(iVar6 + 0x24) == 0) || (cVar5 = FUN_00566dc0(param_1,0,0xbf800000), cVar5 == '\0'))
  {
    FUN_005677b0(param_1,2);
    iVar6 = FUN_009828c0();
    if (((int *)in_ECX[0xb] != (int *)0x0) &&
       (cVar5 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar5 != '\0')) {
      fVar17 = (float10)FUN_004d7e90(in_ECX[0xb],0);
      fVar18 = (float10)iVar6;
      uVar7 = CONCAT22(extraout_var_01,
                       (ushort)(fVar18 < fVar17) << 8 | (ushort)(NAN(fVar18) || NAN(fVar17)) << 10 |
                       (ushort)(fVar18 == fVar17) << 0xe);
      if (fVar18 >= fVar17) goto LAB_00630d30;
    }
    fVar19 = (float)iVar6;
    iVar6 = *in_ECX;
    uVar16 = FUN_00566940(param_1);
    uVar10 = FUN_00566a40(param_1);
    uVar14 = FUN_00566b30(&fStack_c,param_1);
    uVar7 = (**(code **)(iVar6 + 0x418))(param_1,uVar14,uVar10,uVar16,param_2,fVar19);
  }
  else {
    if (bVar4) {
      fVar17 = (float10)FUN_00404c90();
      fVar18 = (float10)fStack_3c;
      uVar7 = CONCAT22(extraout_var,
                       (ushort)(fVar18 < fVar17) << 8 | (ushort)(NAN(fVar18) || NAN(fVar17)) << 10 |
                       (ushort)(fVar18 == fVar17) << 0xe);
      if (fVar18 >= fVar17) {
        fVar17 = (float10)FUN_00404c90();
        fVar18 = (float10)FUN_00404c90();
        fVar17 = (float10)(float)fVar17;
        uVar7 = CONCAT22(extraout_var_00,
                         (ushort)(fVar17 < fVar18) << 8 | (ushort)(NAN(fVar17) || NAN(fVar18)) << 10
                         | (ushort)(fVar17 == fVar18) << 0xe);
        if (fVar17 < fVar18 != (fVar17 == fVar18)) {
          (**(code **)(*in_ECX + 0x188))(param_1,1);
          piVar11 = (int *)in_ECX[0xb];
          iVar6 = (**(code **)(*(int *)piVar11[0x16] + 0x184))();
          uVar7 = 0;
          if (iVar6 != 0) {
            (**(code **)(*(int *)piVar11[0x16] + 0x188))(param_1,1);
            (**(code **)(*(int *)piVar11[0x16] + 0x184))();
            uVar7 = FUN_005660a0();
            if ((char)uVar7 != '\0') {
              piVar13 = (int *)(**(code **)(*(int *)piVar11[0x16] + 0x184))();
              if (piVar13 != (int *)0x0) {
                (**(code **)(*piVar13 + 0x10))(1);
              }
              *(undefined4 *)(piVar11[0x16] + 8) = 0;
              (**(code **)(*piVar11 + 0x44))(0x30000);
              cVar5 = FUN_005e05b0();
              if (cVar5 != '\0') {
                FUN_005e02b0();
              }
              (**(code **)(*in_ECX + 0xbc))(1);
              uVar7 = (**(code **)(*in_ECX + 0x18))(param_1,0);
              return uVar7 & 0xffffff00;
            }
          }
        }
      }
    }
    else {
      iVar6 = *(int *)(iVar6 + 0x24);
      if (piStack_40 != (int *)0x0) {
        param_1 = (int *)0x0;
        if ((int *)*piStack_40 != (int *)0x0) {
          param_1 = *(int **)*piStack_40;
        }
        param_2 = 0;
        if ((param_1 != (int *)0x0) && (iVar15 = FUN_0041fb00(), iVar15 != 0)) {
          iVar15 = FUN_0041fb00();
          param_2 = *(undefined4 *)(iVar15 + 0xc);
        }
        fStack_3c = (float)FUN_005697e0();
        if (((fStack_3c == 0.0) && (fStack_3c = (float)in_ECX[0xc], fStack_3c == 0.0)) ||
           (iVar15 = FUN_004d6d40(), iVar15 == 0)) {
          if ((int *)*piStack_40 != (int *)0x0) {
            param_1 = *(int **)*piStack_40;
          }
          puVar12 = (undefined4 *)0x0;
          if (((iVar6 != 0) &&
              ((piVar11 = (int *)FUN_005697e0(), piVar11 != (int *)0x0 ||
               (piVar11 = (int *)in_ECX[0xc], piVar11 != (int *)0x0)))) &&
             ((iVar15 = (**(code **)(*piVar11 + 0x170))(), iVar15 == DAT_00b35eac ||
              (iVar15 = (**(code **)(*piVar11 + 0x170))(), iVar15 == DAT_00b35eb0)))) {
            puVar12 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
            uVar16 = *puVar12;
            uVar10 = puVar12[1];
            uVar14 = puVar12[2];
            puVar12 = (undefined4 *)FUN_00401f00(0xc);
            if (puVar12 == (undefined4 *)0x0) {
              puVar12 = (undefined4 *)0x0;
            }
            else {
              *puVar12 = uVar16;
              puVar12[1] = uVar10;
              puVar12[2] = uVar14;
            }
          }
          uVar16 = 1;
          iVar15 = FUN_00569e60();
          if (iVar15 == 0) {
            uVar16 = FUN_00452a60();
          }
          (**(code **)(*piVar13 + 0x2c8))(piStack_40[2],param_1,uVar16,puVar12,0);
        }
        else {
          iVar15 = piStack_40[2];
          uVar16 = param_2;
          uVar10 = FUN_00452a60(param_2);
          FUN_005fc6d0(iVar15,param_1,fStack_3c,uVar10,uVar16);
        }
        *(undefined1 *)((int)in_ECX + 0x25d) = 0;
        FUN_00484470();
        FUN_00401f20(piStack_40);
        iVar15 = FUN_00569e80();
        if ((iVar15 == 0xd) ||
           ((iVar15 = FUN_00569e80(), 0x14 < iVar15 && (iVar15 = FUN_00569e80(), iVar15 < 0x1a)))) {
          while ((in_ECX[0x10] != 0 || (in_ECX[0xf] != 0))) {
            in_ECX[0x11] = in_ECX[0xf];
            FUN_0065c620(in_ECX[0xf]);
            (**(code **)(*in_ECX + 0xd0))(*(undefined4 *)in_ECX[0x11]);
            piVar11 = (int *)FUN_004d8d70(*(undefined4 *)(in_ECX[0x11] + 4),0);
            if (in_ECX[0x11] != 0) {
              FUN_00401f20(in_ECX[0x11]);
            }
            in_ECX[0x11] = 0;
            if ((fStack_3c == 0.0) || (iVar15 = FUN_004d6d40(), iVar15 == 0)) {
              if ((int *)*piVar11 != (int *)0x0) {
                param_1 = *(int **)*piVar11;
              }
              piStack_40 = (undefined4 *)0x0;
              if (((iVar6 != 0) &&
                  ((piVar8 = (int *)FUN_005697e0(), piVar8 != (int *)0x0 ||
                   (piVar8 = (int *)in_ECX[0xc], piVar8 != (int *)0x0)))) &&
                 ((iVar15 = (**(code **)(*piVar8 + 0x170))(), iVar15 == DAT_00b35eac ||
                  (iVar15 = (**(code **)(*piVar8 + 0x170))(), iVar15 == DAT_00b35eb0)))) {
                puVar12 = (undefined4 *)(**(code **)(*piVar8 + 0x174))();
                uVar16 = *puVar12;
                uVar10 = puVar12[1];
                uVar14 = puVar12[2];
                piStack_40 = (int *)FUN_00401f00(0xc);
                if (piStack_40 == (undefined4 *)0x0) {
                  piStack_40 = (undefined4 *)0x0;
                }
                else {
                  *piStack_40 = uVar16;
                  piStack_40[1] = uVar10;
                  piStack_40[2] = uVar14;
                }
              }
              uVar16 = 1;
              iVar15 = FUN_00569e60();
              if (iVar15 == 0) {
                uVar16 = FUN_00452a60();
              }
              (**(code **)(*piVar13 + 0x2c8))(piVar11[2],param_1,uVar16,piStack_40,0);
            }
            else {
              iVar15 = piVar11[2];
              uVar16 = param_2;
              uVar10 = FUN_00452a60(param_2);
              FUN_005fc6d0(iVar15,param_1,fStack_3c,uVar10,uVar16);
            }
            FUN_00484470();
            FUN_00401f20(piVar11);
          }
          param_2 = CONCAT31(param_2._1_3_,1);
          param_1 = (int *)CONCAT31(param_1._1_3_,1);
          if (in_ECX[2] != 0) {
            uVar7 = *(uint *)(in_ECX[2] + 0x1c);
            if ((uVar7 >> 0x14 & 1) != 0) {
              param_2 = (uint)param_2._1_3_ << 8;
            }
            if ((uVar7 >> 0x15 & 1) != 0) {
              param_1 = (int *)((uint)param_1._1_3_ << 8);
            }
          }
          cVar5 = FUN_005e32d0();
          if (cVar5 == '\0') {
            cVar5 = FUN_005e3270();
            if ((cVar5 != '\0') && (iVar6 = (**(code **)(*piVar13 + 0x170))(), iVar6 != 0)) {
              FUN_0051e240(piVar13,param_2,param_1,1);
            }
          }
          else {
            iVar6 = (**(code **)(*piVar13 + 0x170))();
            if (iVar6 != 0) {
              FUN_005227a0(piVar13,param_2,param_1,0,1);
            }
          }
        }
        (**(code **)(*in_ECX + 0xbc))(1);
      }
      uVar7 = (**(code **)(*in_ECX + 0x188))(piVar13,1);
    }
    if ((char)in_ECX[0x34] == '\0') {
      uVar7 = (**(code **)(*in_ECX + 0x194))(piVar13);
      return uVar7 & 0xffffff00;
    }
  }
LAB_00630d30:
  return uVar7 & 0xffffff00;
}



uint FUN_00630d40(int *param_1,char param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined2 extraout_var;
  undefined4 uVar8;
  int *in_ECX;
  float10 fVar9;
  float10 fVar10;
  
  piVar4 = (int *)(**(code **)(*in_ECX + 0x184))();
  piVar5 = piVar4;
  if (piVar4 != (int *)0x0) {
    if ((*(byte *)((int)piVar4 + 0x1e) & 1) != 0) {
      piVar5 = (int *)FUN_00663a60(param_1);
      if (((char)piVar5 != '\0') || (piVar5 = (int *)FUN_00663a00(), DAT_00b36a80 <= (int)piVar5))
      goto LAB_00631047;
      piVar5 = (int *)FUN_005668e0(0);
    }
    if (in_ECX[0xb] == 0) {
      piVar5 = (int *)(**(code **)(*in_ECX + 0x558))(param_1);
    }
    piVar1 = (int *)in_ECX[0xb];
    if (piVar1 == (int *)0x0) {
      if (param_3 != '\0') {
        uVar6 = (**(code **)(*in_ECX + 0x188))(param_1,1);
        return uVar6 & 0xffffff00;
      }
    }
    else {
      uVar6 = (uint)piVar1[2] >> 5;
      piVar5 = (int *)(uVar6 & 0xffffff01);
      if (((uVar6 & 1) == 0) && (((uint)piVar1[2] >> 0xb & 1) == 0)) {
        cVar3 = (**(code **)(*piVar1 + 0x198))(1);
        if (cVar3 != '\0') {
          FUN_00566870(in_ECX[0xb],1);
          uVar6 = (**(code **)(*param_1 + 0x2f8))(in_ECX[0xb]);
          return uVar6 & 0xffffff00;
        }
        if ((in_ECX[0xb] == 0) ||
           (((piVar4[9] != 0 && (iVar7 = FUN_00569740(), iVar7 < 2)) &&
            (cVar3 = FUN_00566dc0(param_1,0,0xbf800000), cVar3 != '\0')))) {
          if (param_2 != '\0') {
            (**(code **)(*in_ECX + 0x188))(param_1,1);
          }
          cVar3 = FUN_005660a0();
          if (cVar3 != '\0') {
            (**(code **)(*piVar4 + 0x10))(1);
            in_ECX[2] = 0;
            (**(code **)(*param_1 + 0x44))(0x30000);
            (**(code **)(*in_ECX + 0x18))(param_1,0);
            iVar7 = (**(code **)(*param_1 + 0x380))();
            piVar5 = (int *)0x0;
            if ((iVar7 != 0) && (piVar5 = (int *)in_ECX[2], ((uint)piVar5[7] >> 0x17 & 1) == 0)) {
              (**(code **)(*param_1 + 0x380))();
              cVar3 = FUN_005e9a60();
              if (cVar3 == '\0') {
                in_ECX[0x6a] = 0;
                (**(code **)(*param_1 + 0x380))();
                FUN_005f80d0();
              }
              uVar6 = (**(code **)(*param_1 + 0x230))();
              return uVar6 & 0xffffff00;
            }
            goto LAB_00631047;
          }
        }
        cVar3 = FUN_005660a0();
        if (((cVar3 != '\0') && (iVar7 = in_ECX[2], iVar7 != 0)) &&
           (((*(uint *)(iVar7 + 0x1c) >> 9 & 1) != 0 &&
            (((*(byte *)(iVar7 + 0x1c) & 1) != 0 && (iVar7 = FUN_006ecc80(), iVar7 != 0)))))) {
          piVar5 = param_1;
          FUN_006ecc80(param_1);
          cVar3 = FUN_004caac0(piVar5);
          if ((cVar3 != '\0') && (cVar3 = FUN_005f2820(0,in_ECX[0xb],1,0,0), cVar3 != '\0')) {
            uVar6 = (**(code **)(*in_ECX + 0x194))(param_1);
            return uVar6 & 0xffffff00;
          }
        }
        FUN_005677b0(param_1,2);
        iVar7 = FUN_009828c0();
        piVar5 = (int *)0x0;
        if (in_ECX[0xb] != 0) {
          fVar9 = (float10)FUN_004d7e90(in_ECX[0xb],0);
          fVar10 = (float10)iVar7;
          piVar5 = (int *)CONCAT22(extraout_var,
                                   (ushort)(fVar10 < fVar9) << 8 |
                                   (ushort)(NAN(fVar10) || NAN(fVar9)) << 10 |
                                   (ushort)(fVar10 == fVar9) << 0xe);
          if ((fVar10 < fVar9) && (piVar5 = (int *)in_ECX[0xb], piVar5 != DAT_00b333c4)) {
            iVar2 = *in_ECX;
            uVar8 = FUN_004d6670(param_1,(float)iVar7);
            uVar8 = FUN_006ecc80(uVar8);
            uVar8 = (**(code **)(*piVar5 + 0x174))(uVar8);
            uVar6 = (**(code **)(iVar2 + 0x418))(param_1,uVar8);
            return uVar6 & 0xffffff00;
          }
          return (uint)piVar5 & 0xffffff00;
        }
      }
      else {
        if (((byte)uVar6 & 1 & (byte)piVar5) != 0) {
          piVar5 = (int *)FUN_00566870(piVar1,1);
        }
        if (param_3 != '\0') {
          piVar5 = (int *)(**(code **)(*in_ECX + 0x188))(param_1,1);
        }
      }
    }
  }
LAB_00631047:
  return (uint)piVar5 & 0xffffff00;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00631268) */
/* WARNING: Removing unreachable block (ram,0x006314b4) */
/* WARNING: Removing unreachable block (ram,0x00631132) */

uint FUN_00631050(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  float *pfVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined2 extraout_var;
  int *in_ECX;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar12;
  undefined8 uVar11;
  undefined4 uVar14;
  undefined8 uVar13;
  int *piStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  uint uStack_158;
  undefined1 auStack_154 [12];
  undefined1 auStack_148 [12];
  undefined1 auStack_13c [12];
  char acStack_130 [300];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&piStack_178;
  iVar2 = FUN_006ecc80();
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*in_ECX + 0x184))();
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      if (*(int *)(iVar2 + 0x18) != 1) {
        (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      }
      FUN_006ecc80();
      piVar3 = (int *)FUN_004c97f0();
      if ((char)piVar3 == '\0') {
        pfVar4 = (float *)(**(code **)(*param_1 + 0x174))();
        fStack_174 = *pfVar4;
        fStack_170 = pfVar4[1];
        fStack_16c = pfVar4[2];
        uVar14 = 0;
        uVar5 = FUN_004d6670();
        uStack_15c = FUN_0044a270(fStack_174,fStack_170,uVar5,uVar14);
        puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
        uVar7 = FUN_00566db0();
        piStack_178 = (int *)(uVar7 >> 2);
        uVar7 = FUN_00566db0();
        piStack_178 = (int *)((uint)((ulonglong)uVar7 * 0xaaaaaaab >> 0x20) & 0xfffffffe);
        fVar12 = (float)(int)piStack_178;
        if ((int)piStack_178 < 0) {
          fVar12 = fVar12 + 4.2949673e+09;
        }
        pfVar4 = (float *)FUN_0062e790(&fStack_168,*puVar6,puVar6[1],puVar6[2],fVar12);
        fStack_174 = *pfVar4;
        fStack_170 = pfVar4[1];
        fStack_16c = pfVar4[2];
        pfVar4 = (float *)FUN_005e2e20(&fStack_168,*pfVar4,pfVar4[1],pfVar4[2],uStack_15c,1,0,0);
        fStack_174 = *pfVar4;
        fStack_170 = pfVar4[1];
        fStack_16c = pfVar4[2];
        if (DAT_00b3b928 == (int *)0x0) {
          FUN_004526e0();
          piStack_178 = in_ECX + 0x6f;
          iVar2 = 0;
          do {
            if (*piStack_178 == 0) break;
            FUN_00446cb0();
            piStack_178 = piStack_178 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < 4);
          uVar13 = CONCAT44(param_1,FUN_0062eaa0);
          piStack_178 = (int *)FUN_00566db0(FUN_0062eaa0,param_1);
          fVar12 = (float)(int)piStack_178;
          if ((int)piStack_178 < 0) {
            fVar12 = fVar12 + 4.2949673e+09;
          }
          uVar5 = FUN_00566b30(&fStack_168,param_1);
          uVar11 = CONCAT44(fVar12,uVar5);
          uVar7 = FUN_00566db0(uVar5);
          piStack_178 = (int *)(uVar7 >> 1);
          FUN_00446b90(uStack_15c,&fStack_174,(float)(int)piStack_178,uVar11,uVar13);
        }
        piVar1 = DAT_00b3b928;
        bVar8 = DAT_00b3b928 == (int *)0x0;
        DAT_00b3b928 = (int *)0x0;
        if (bVar8) {
          pfVar4 = (float *)FUN_00566b30(auStack_154,param_1);
          fStack_168 = fStack_174 - *pfVar4;
          fStack_164 = fStack_170 - pfVar4[1];
          fStack_160 = fStack_16c - pfVar4[2];
          piStack_178 = (int *)(fStack_160 * fStack_160 +
                               fStack_168 * fStack_168 + fStack_164 * fStack_164);
          fVar9 = (float10)FUN_00982c30();
          piStack_178 = (int *)(float)fVar9;
          uStack_158 = FUN_00566db0();
          fVar12 = (float)(int)uStack_158;
          if ((int)uStack_158 < 0) {
            fVar12 = fVar12 + 4.2949673e+09;
          }
          if (fVar12 < (float)piStack_178) {
            do {
              puVar6 = (undefined4 *)FUN_00566b30(auStack_154,param_1);
              uStack_158 = FUN_00566db0();
              uStack_158 = uStack_158 >> 1;
              uStack_158 = FUN_00566db0();
              fVar12 = (float)(int)uStack_158;
              if ((int)uStack_158 < 0) {
                fVar12 = fVar12 + 4.2949673e+09;
              }
              pfVar4 = (float *)FUN_0062e790(auStack_13c,*puVar6,puVar6[1],puVar6[2],fVar12);
              fStack_174 = *pfVar4;
              fStack_170 = pfVar4[1];
              fStack_16c = pfVar4[2];
              pfVar4 = (float *)FUN_00566b30(auStack_148,param_1);
              fStack_168 = fStack_174 - *pfVar4;
              fStack_164 = fStack_170 - pfVar4[1];
              fStack_160 = fStack_16c - pfVar4[2];
              uVar14 = 0;
              uVar5 = FUN_004d6670();
              uStack_15c = FUN_0044a270(fStack_174,fStack_170,uVar5,uVar14);
              piStack_178 = (int *)(fStack_160 * fStack_160 +
                                   fStack_168 * fStack_168 + fStack_164 * fStack_164);
              fVar9 = (float10)FUN_00982c30();
              piStack_178 = (int *)(float)fVar9;
              uStack_158 = FUN_00566db0();
              fVar12 = (float)(int)uStack_158;
              if ((int)uStack_158 < 0) {
                fVar12 = fVar12 + 4.2949673e+09;
              }
            } while (fVar12 < (float)piStack_178);
          }
          pfVar4 = (float *)FUN_005e2e20(auStack_148,fStack_174,fStack_170,fStack_16c,uStack_15c,1,0
                                         ,0);
          fStack_174 = *pfVar4;
          fStack_170 = pfVar4[1];
          fStack_16c = pfVar4[2];
          if (in_ECX[0x72] != 0) {
            in_ECX[0x6f] = in_ECX[0x70];
            in_ECX[0x70] = in_ECX[0x71];
            in_ECX[0x71] = in_ECX[0x72];
            in_ECX[0x72] = 0;
          }
          iVar2 = (**(code **)(*in_ECX + 0x36c))();
          if (iVar2 != 0) {
            (**(code **)(*in_ECX + 0x1b0))();
          }
          iVar2 = *in_ECX;
          FUN_004d6670(0x42c80000,0xbf800000);
          uVar5 = FUN_006ecc80();
          (**(code **)(iVar2 + 0x418))(param_1,&fStack_174,uVar5);
          piVar3 = (int *)FUN_00579440();
          if (piVar3 == param_1) {
            uVar5 = FUN_004da2a0((double)fStack_174,(double)fStack_170);
            _sprintf(acStack_130,"%s is wandering to point x %.02f and y %.02f",uVar5);
            piVar3 = (int *)FUN_00579b60(acStack_130);
          }
        }
        else {
          if (in_ECX[0x72] == 0) {
            iVar2 = 0;
            piVar3 = in_ECX + 0x6f;
            do {
              if (*piVar3 == 0) {
                in_ECX[iVar2 + 0x6f] = (int)piVar1;
                break;
              }
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < 4);
          }
          else {
            in_ECX[in_ECX[0x80] + 0x6f] = (int)piVar1;
            in_ECX[0x80] = in_ECX[0x80] + 1;
            if (3 < in_ECX[0x80]) {
              in_ECX[0x80] = 0;
            }
          }
          (**(code **)(*piVar1 + 0x170))();
          FUN_0046d5c0();
          piStack_178 = (int *)FUN_009828c0();
          if (piStack_178 == (int *)0x0) {
            piStack_178 = DAT_00b36b28;
          }
          piStack_178 = (int *)(float)(int)piStack_178;
          fVar9 = (float10)FUN_004d7e90(piVar1,0);
          fVar10 = (float10)(float)piStack_178;
          piVar3 = (int *)CONCAT22(extraout_var,
                                   (ushort)(fVar10 < fVar9) << 8 |
                                   (ushort)(NAN(fVar10) || NAN(fVar9)) << 10 |
                                   (ushort)(fVar10 == fVar9) << 0xe);
          if (fVar10 < fVar9) {
            iVar2 = (**(code **)(*in_ECX + 0x36c))();
            if (iVar2 != 0) {
              (**(code **)(*in_ECX + 0x1b0))();
            }
            iVar2 = *in_ECX;
            FUN_004d6670(param_2,piStack_178);
            uVar5 = FUN_006ecc80();
            uVar5 = (**(code **)(*piVar1 + 0x174))(uVar5);
            (**(code **)(iVar2 + 0x418))(param_1,uVar5);
            piVar3 = (int *)FUN_00579440();
            if (piVar3 == param_1) {
              pfVar4 = (float *)(**(code **)(*piVar1 + 0x174))();
              iVar2 = (**(code **)(*piVar1 + 0x174))();
              uVar5 = FUN_004da2a0((double)*pfVar4,(double)*(float *)(iVar2 + 4));
              uVar5 = FUN_004da2a0(uVar5);
              _sprintf(acStack_130,"%s is wandering to object %s at x %.02f and y %.02f",uVar5);
              piVar3 = (int *)FUN_00579b60(acStack_130);
            }
          }
        }
      }
    }
  }
  return (uint)piVar3 & 0xffffff00;
}



undefined4 FUN_00631700(int *param_1,undefined4 param_2)

{
  uint uVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  int *in_ECX;
  float10 fVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  double dStack_18;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  if (iVar4 == 0) {
    return 0;
  }
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  uVar10 = 1;
  if ((int *)in_ECX[0xb] == (int *)0x0) goto LAB_00631b28;
  cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 0x198))(1);
  if ((cVar3 != '\0') && (in_ECX[0x11] == 0)) {
    FUN_00566870(in_ECX[0xb],1);
    if ((*(uint *)(iVar4 + 0x1c) >> 0xc & 1) != 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x2f8))(in_ECX[0xb]);
    return 0;
  }
  uVar1 = *(uint *)(in_ECX[0xb] + 8);
  uVar5 = uVar1 >> 5;
  if (((uVar5 & 1) != 0) || ((uVar1 >> 0xb & 1) != 0)) {
    if ((uVar5 & 1) != 0) {
      FUN_00566870(in_ECX[0xb],1);
    }
    uVar10 = 1;
    goto LAB_00631b28;
  }
  if (*(char *)(iVar4 + 0x20) == '\t') {
    uVar10 = FUN_00566b30(auStack_c,param_1);
    FUN_004d7e30(uVar10);
    iVar6 = FUN_009828c0();
    dStack_18 = (double)iVar6;
    iVar6 = FUN_00566db0();
    fVar2 = (float)iVar6;
    if (iVar6 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    if (fVar2 + 300.0 < (float)dStack_18) {
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
    }
  }
  iVar6 = FUN_004d7630();
  if (iVar6 == 0) {
    cVar3 = FUN_005687d0(param_1);
    if (cVar3 == '\0') goto LAB_00631888;
  }
  else {
    uVar10 = (**(code **)(*param_1 + 0x174))();
    pdVar7 = &dStack_18;
    FUN_004d76f0(pdVar7,uVar10);
    FUN_004121a0(pdVar7,uVar10);
    fVar8 = (float10)FUN_00404c90();
    if ((float10)DAT_00b36b28 < fVar8) {
LAB_00631888:
      cVar3 = FUN_0064ada0();
      if (cVar3 != '\0') {
        return 0;
      }
      iVar6 = (**(code **)(*in_ECX + 0x36c))();
      if (iVar6 != 0) {
        (**(code **)(*in_ECX + 0x1b0))(param_1);
      }
      iVar6 = FUN_004d7630();
      if (iVar6 == 0) {
        pdVar7 = (double *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
      }
      else {
        pdVar7 = (double *)FUN_004d76f0();
      }
      iVar6 = *in_ECX;
      dStack_18 = *pdVar7;
      uStack_10 = *(undefined4 *)(pdVar7 + 1);
      fVar8 = (float10)FUN_005677b0(param_1,2);
      uVar10 = FUN_004d6670(param_2,(float)fVar8);
      uVar10 = FUN_006ecc80(uVar10);
      (**(code **)(iVar6 + 0x418))(param_1,&dStack_18,uVar10);
      iVar6 = FUN_00659a00();
      if (iVar6 != 0) {
        return 0;
      }
      iVar6 = FUN_004d7630();
      if (iVar6 == 0) {
        cVar3 = FUN_005687d0(param_1);
        if (cVar3 == '\0') {
          return 0;
        }
      }
      else {
        uVar10 = (**(code **)(*param_1 + 0x174))();
        puVar9 = auStack_c;
        FUN_004d76f0(puVar9,uVar10);
        FUN_004121a0(puVar9,uVar10);
        fVar8 = (float10)FUN_00404c90();
        if ((float10)DAT_00b36b28 < fVar8) {
          return 0;
        }
      }
    }
  }
  cVar3 = FUN_0064ada0();
  if ((cVar3 != '\0') && ((*(uint *)(iVar4 + 0x1c) >> 2 & 1) != 0)) {
    return 0;
  }
  cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
  if (cVar3 == '\0') {
    (**(code **)(*in_ECX + 0x394))(1);
    iVar6 = in_ECX[0x11];
    if (iVar6 == 0) {
      FUN_004dd260(param_1,0,0,1);
    }
    else {
      FUN_004dd260(param_1,1,*(undefined4 *)(iVar6 + 4),*(undefined4 *)(iVar6 + 0x10));
      in_ECX[0xe] = in_ECX[0xe] + -1;
      if (in_ECX[0x11] != 0) {
        FUN_00401f20(in_ECX[0x11]);
      }
      in_ECX[0x11] = 0;
      in_ECX[0xb] = 0;
      if (0 < in_ECX[0xe]) {
        return 1;
      }
      if ((*(int *)(iVar4 + 0x18) == 0x1a) && (*(int *)(iVar4 + 0x30) == 0)) {
        (**(code **)(*in_ECX + 0x188))(param_1,2);
        return 1;
      }
    }
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return 1;
  }
  if (((in_ECX[0xb] == DAT_00b333c4) &&
      (cVar3 = FUN_0065d550(), iVar4 = DAT_00b333c4, cVar3 != '\0')) &&
     (*(char *)(DAT_00b333c4 + 300) == '\0')) {
    *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
    *(undefined1 *)(iVar4 + 0x594) = 1;
    uVar10 = 0xfffffffe;
  }
  else if (in_ECX[0x11] == 0) {
    if (in_ECX[0xb] == DAT_00b333c4) {
      return 0;
    }
    uVar10 = 2;
  }
  else {
    cVar3 = (**(code **)(*(int *)in_ECX[0xb] + 0x198))(0);
    if ((cVar3 == '\0') && (*(int *)(in_ECX[0x11] + 8) < 1)) {
      if (0 < *(int *)(in_ECX[0x11] + 0xc)) {
        (**(code **)(*in_ECX + 0x228))(param_1,in_ECX[0xb],0,0,1,0,1,0,0,1);
      }
    }
    else {
      FUN_004dd260(param_1,1,*(undefined4 *)(in_ECX[0x11] + 4),*(undefined4 *)(in_ECX[0x11] + 0x10))
      ;
      in_ECX[0xe] = in_ECX[0xe] + -1;
      if (in_ECX[0x11] != 0) {
        FUN_00401f20(in_ECX[0x11]);
      }
      in_ECX[0x11] = 0;
      in_ECX[0xb] = 0;
    }
    if (0 < in_ECX[0xe]) {
      return 0;
    }
    uVar10 = 2;
  }
LAB_00631b28:
  (**(code **)(*in_ECX + 0x188))(param_1,uVar10);
  return 0;
}



undefined4 * FUN_00631be0(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*in_ECX + 0x3b0))(param_1);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00401f00(0x10);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 0;
      puVar1[3] = 0;
    }
    FUN_00446cb0(puVar1);
  }
  puVar1[1] = param_1;
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 2) = param_2;
  puVar1[3] = param_3;
  return puVar1;
}



undefined4 FUN_00631d70(int param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  if ((param_1 == 0) || (cVar1 = FUN_005e6b40(), cVar1 == '\0')) {
    if (in_ECX[0x88] != 0) {
      return 1;
    }
  }
  else {
    iVar2 = (**(code **)(*in_ECX + 0x184))();
    if (((iVar2 != 0) && (*(char *)(iVar2 + 0x20) == '\x12')) && (*(int *)(iVar2 + 0x48) == param_1)
       ) {
      return 1;
    }
  }
  return 0;
}



void FUN_00631dc0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x3c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00568e10();
  }
  local_4 = 0xffffffff;
  FUN_005661e0(6);
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffff9;
  iVar3 = FUN_00401f00(0xc,uVar1);
  local_4 = 1;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_005696b0();
  }
  local_4 = 0xffffffff;
  FUN_00569750(0);
  FUN_005697f0(param_2);
  FUN_005697c0(0);
  FUN_00565e00(iVar3);
  if (iVar3 != 0) {
    FUN_00569730();
    FUN_00401f20(iVar3);
  }
  FUN_005672a0();
  FUN_005f1590(iVar2,1,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00631ec0(int *param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  undefined4 uVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c57b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = (**(code **)(*in_ECX + 0x184))(uVar2);
  iVar5 = 0;
  if ((iVar3 != 0) &&
     (((*(uint *)(iVar3 + 0x1c) >> 9 & 1) == 0 || ((*(byte *)(iVar3 + 0x1c) & 1) == 0)))) {
    cVar1 = *(char *)(iVar3 + 0x20);
    if (cVar1 == '\x05') {
      iVar3 = *(int *)(iVar3 + 0x18);
      iVar4 = (**(code **)(*in_ECX + 0x180))();
      bVar6 = *(int *)((&PTR_DAT_00b152b0)[iVar3] + iVar4 * 4) == 1;
    }
    else {
      if ((cVar1 != '\x06') && (cVar1 != '\0')) goto LAB_00632076;
      iVar3 = *(int *)(iVar3 + 0x18);
      iVar4 = (**(code **)(*in_ECX + 0x180))();
      bVar6 = *(int *)((&PTR_DAT_00b152b0)[iVar3] + iVar4 * 4) == 0x2c;
    }
    if (!bVar6) goto LAB_00632076;
  }
  iVar3 = (**(code **)(*param_1 + 0x380))();
  if (iVar3 == 0) {
    iVar3 = (**(code **)(*param_1 + 0x18c))();
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 800))();
    }
  }
  iVar3 = FUN_00401f00(0x3c);
  uStack_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00568e10();
  }
  uStack_4 = 0xffffffff;
  FUN_005661e0(1);
  *(uint *)(iVar3 + 0x1c) = *(uint *)(iVar3 + 0x1c) | 6;
  iVar4 = FUN_00401f00(0xc);
  uStack_4 = 1;
  if (iVar4 != 0) {
    iVar5 = FUN_00569e40();
  }
  uStack_4 = 0xffffffff;
  FUN_00565ec0(iVar5);
  if (iVar5 != 0) {
    FUN_0060d0a0();
    FUN_00401f20(iVar5);
  }
  FUN_00569e90(0);
  FUN_00569ec0(DAT_00b333c4);
  if (param_2 == '\0') {
    uVar7 = 0x50;
  }
  else {
    uVar7 = 3000;
  }
  FUN_00468230(uVar7);
  *(undefined4 *)(iVar3 + 0x18) = 7;
  FUN_005f1590(iVar3,1,1);
  (**(code **)(*in_ECX + 0x484))(DAT_00b333c4);
  if (param_2 != '\0') {
    (**(code **)(*in_ECX + 0x160))(_DAT_00b36b38);
  }
LAB_00632076:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00632090(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  int *unaff_retaddr;
  float fVar8;
  float fStack_8;
  int *piStack_4;
  
  iVar3 = (**(code **)(*in_ECX + 0xf4))(1);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = (**(code **)(*in_ECX + 0xf4))(1);
  if ((*(int *)(iVar3 + 8) != 0) &&
     (iVar3 = (**(code **)(*in_ECX + 0xf4))(1), *(char *)(*(int *)(iVar3 + 8) + 4) == '\"')) {
    iVar3 = (**(code **)(*in_ECX + 0xf4))(1);
    if (*(int *)(iVar3 + 8) != 0) {
      fVar8 = *(float *)(*(int *)(iVar3 + 8) + 0x7c);
      goto LAB_006320f1;
    }
  }
  fVar8 = 1.0;
LAB_006320f1:
  fVar8 = fVar8 * _DAT_00b37040;
  fVar5 = (float10)FUN_00608280(piStack_4);
  iVar3 = (**(code **)(*unaff_retaddr + 0x174))();
  fVar1 = *(float *)(iVar3 + 8);
  iVar3 = (**(code **)(*piStack_4 + 0x174))();
  fVar2 = *(float *)(iVar3 + 8);
  fVar6 = (float10)FUN_005e0660();
  fVar7 = (float10)FUN_00982c30();
  fVar5 = (float10)FUN_006132d0((float)fVar7,fVar1 - (float)(fVar6 * (float10)0.75 + (float10)fVar2)
                                ,fVar8,(float)fVar5);
  FUN_00613410((float)fVar7,(float)fVar5,fVar8);
  (**(code **)(*unaff_retaddr + 0x174))();
  FUN_004a9720();
  iVar3 = (**(code **)(*piStack_4 + 0x284))(0x1c);
  if (iVar3 < 5) {
    iVar3 = 5;
  }
  else if (100 < iVar3) {
    iVar3 = 100;
  }
  iVar4 = FUN_0047df80(0);
  fStack_8 = (float)((iVar4 % (0x69 - iVar3)) / 10) * 0.017453292 + fStack_8;
  if (fStack_8 != 0.0) {
    if (fStack_8 < -3.1415927 == (fStack_8 == -3.1415927)) {
      if (3.1415927 < fStack_8) {
        fStack_8 = fStack_8 + 6.2831855;
      }
    }
    else {
      fStack_8 = 6.2831855 - fStack_8;
    }
  }
  fVar5 = (float10)FUN_004a9720();
  FUN_0065a650((float)(fVar5 + (float10)fStack_8));
  return;
}



undefined4 FUN_00632310(float *param_1)

{
  float *in_ECX;
  
  if ((((*param_1 == *in_ECX) && (param_1[1] == in_ECX[1])) && (param_1[2] == in_ECX[2])) &&
     (param_1[3] == in_ECX[3])) {
    return 0;
  }
  return 1;
}



ushort FUN_00632370(uint param_1,undefined4 param_2)

{
  ushort uVar1;
  byte bVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  short sVar8;
  int in_ECX;
  short sVar9;
  uint uVar10;
  
  uVar7 = param_2;
  uVar5 = FUN_00650f50(param_1,param_2);
  uVar5 = uVar5 & 0xffff;
  cVar4 = FUN_0045a170();
  uVar10 = uVar5;
  if (cVar4 != '\0') {
    uVar10 = uVar5 + 6;
  }
  bVar2 = *(byte *)(DAT_00b33b00 + 0x7c);
  sVar9 = (short)uVar10 + 0x36;
  if (0x31 < bVar2) {
    sVar9 = (short)uVar10 + 0x3a;
  }
  sVar8 = 0x2d;
  if (0x3e < bVar2) {
    sVar8 = 0x32;
  }
  sVar9 = sVar9 + sVar8;
  if (0x41 < bVar2) {
    sVar9 = sVar9 + 5;
  }
  sVar8 = 0;
  for (piVar6 = *(int **)(in_ECX + 0x18c); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    if (*piVar6 != 0) {
      sVar8 = sVar8 + 1;
    }
  }
  param_2._0_2_ = sVar9 + 0xe + sVar8 * 0xd;
  if ((param_1 & 0x2000000) != 0) {
    param_2._0_2_ = (short)param_2 + 1;
  }
  sVar9 = FUN_00651ad0(uVar7);
  uVar1 = (short)param_2 + sVar9 + 2;
  bVar2 = *(byte *)(DAT_00b33b00 + 0x7c);
  if (0x59 < bVar2) {
    uVar1 = uVar1 + 0x1e;
  }
  if (0x5c < bVar2) {
    uVar1 = uVar1 + 8;
  }
  if (0x69 < bVar2) {
    uVar1 = uVar1 + 4;
  }
  if (0x70 < bVar2) {
    uVar1 = uVar1 + 0x18;
  }
  if (DAT_00b05bac == '\0') {
    return uVar1;
  }
  puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
  if (puVar3 == (undefined4 *)0x0) {
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",uVar1 - uVar5,0x2aee,
                 ".\\AI\\HighProcess.cpp");
    return uVar1;
  }
  piVar6 = (int *)FUN_0046b250(*puVar3);
  uVar7 = (**(code **)(*piVar6 + 0xd4))
                    (*(undefined4 *)((int)puVar3 + 5),0x2aee,".\\AI\\HighProcess.cpp");
  FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
               uVar1 - uVar5,*puVar3,uVar7);
  return uVar1;
}



void FUN_006324f0(uint param_1,undefined4 param_2)

{
  undefined2 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  short *psVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  uint uVar9;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  short *local_8;
  undefined4 local_4;
  
  FUN_00651140(param_1,param_2);
  local_4 = 0;
  local_20 = *(int *)(DAT_00b33b00 + 0x14);
  local_8 = (short *)0x0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    local_10 = 0x4b4f4c42;
    FUN_0045b9a0(&local_10,4);
    local_8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  FUN_0045b9a0(in_ECX + 0x228,1);
  FUN_0045b9a0(in_ECX + 0x23c,1);
  FUN_0045b9a0(in_ECX + 0x25c,1);
  FUN_0045b9a0(in_ECX + 0x25d,1);
  FUN_0045b9a0(in_ECX + 0x1fc,2);
  FUN_0045b9a0(in_ECX + 500,2);
  FUN_0045b9a0(in_ECX + 0x208,2);
  FUN_0045b9a0(in_ECX + 0x1f0,4);
  FUN_0045b9a0(in_ECX + 0x1ac,4);
  FUN_0045b9a0(in_ECX + 0x204,4);
  FUN_0045b9a0(in_ECX + 0x21c,4);
  FUN_0045b9a0(in_ECX + 0x22c,4);
  FUN_0045b9a0(in_ECX + 0x230,4);
  FUN_0045b9a0(in_ECX + 0x234,4);
  FUN_0045b9a0(in_ECX + 0x248,4);
  FUN_0045b9a0(in_ECX + 0x198,4);
  FUN_0045b9a0(in_ECX + 0x1b0,4);
  FUN_0045b9a0(in_ECX + 0x1b4,4);
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x19c,4);
  }
  FUN_0045b9a0(in_ECX + 0x1cc,4);
  FUN_0045b9a0(in_ECX + 0x244,1);
  FUN_0045b9a0(in_ECX + 0x20c,0xc);
  FUN_0045b9a0(in_ECX + 0x254,4);
  FUN_0045b9a0(in_ECX + 700,4);
  FUN_0045b9a0(in_ECX + 0x2c0,4);
  FUN_0045b9a0(in_ECX + 0x238,4);
  FUN_0045b9a0(in_ECX + 0x1a8,4);
  FUN_0045b9a0(in_ECX + 0x1b8,4);
  FUN_0045b9a0(in_ECX + 0x260,4);
  if (0x3e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x278,1);
    FUN_0045b9a0(in_ECX + 0x274,4);
  }
  if (0x41 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x290,1);
    FUN_0045b9a0(in_ECX + 0x28c,4);
  }
  local_1c = 0;
  if (*(int *)(in_ECX + 0x218) != 0) {
    local_1c = *(undefined4 *)(*(int *)(in_ECX + 0x218) + 0xc);
  }
  FUN_0045f7a0(&local_1c,4);
  local_18 = 0;
  if (*(int *)(in_ECX + 0x1a4) != 0) {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x1a4) + 0xc);
  }
  FUN_0045f7a0(&local_18,4);
  local_14 = 0;
  if (*(int *)(in_ECX + 0x2c4) != 0) {
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x2c4) + 0xc);
  }
  FUN_0045f7a0(&local_14,4);
  local_24 = 0;
  puVar1 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_24,2);
  for (piVar7 = *(int **)(in_ECX + 0x18c);
      (piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))); piVar7 = (int *)piVar7[1]) {
    piVar2 = (int *)*piVar7;
    local_10 = 0;
    if (*piVar2 != 0) {
      local_10 = *(undefined4 *)(*piVar2 + 0xc);
    }
    FUN_0045f7a0(&local_10,4);
    FUN_0045b9a0(piVar2 + 1,4);
    FUN_0045b9a0(piVar2 + 2,1);
    FUN_0045b9a0(piVar2 + 3,4);
    local_24 = local_24 + 1;
  }
  *puVar1 = (undefined2)local_24;
  if ((param_1 & 0x2000000) != 0) {
    param_1._1_3_ = (undefined3)(param_1 >> 8);
    param_1 = CONCAT31(param_1._1_3_,0xff);
    if ((*(int *)(in_ECX + 0x17c) != 0) && (*(int *)(in_ECX + 0x1f8) != 0)) {
      uVar9 = 0;
      do {
        iVar6 = FUN_004706e0(uVar9);
        if (iVar6 == *(int *)(in_ECX + 0x1f8)) {
          param_1 = CONCAT31(param_1._1_3_,(char)uVar9);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < 5);
    }
    FUN_0045b9a0(&param_1,1);
  }
  uVar8 = param_2;
  local_c = FUN_00651ad0(param_2);
  local_c = local_c & 0xffff;
  FUN_0045b9a0(&local_c,2);
  if ((short)local_c != 0) {
    FUN_00651b90(uVar8);
  }
  if (0x59 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar9 = 0;
    piVar7 = (int *)(in_ECX + 0x2c8);
    do {
      param_1 = 0;
      if (*piVar7 != 0) {
        param_1 = *(uint *)(*piVar7 + 0xc);
      }
      FUN_0045f7a0(&param_1,4);
      FUN_0045b9a0(in_ECX + 0x2dc + uVar9,1);
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar9 < 5);
    param_2 = 0;
    if (*(int *)(in_ECX + 0x2e4) != 0) {
      param_2 = *(undefined4 *)(*(int *)(in_ECX + 0x2e4) + 0xc);
    }
    FUN_0045f7a0(&param_2,4);
    FUN_0045b9a0(in_ECX + 0x2e8,1);
  }
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x2ac,4);
    FUN_0045b9a0(in_ECX + 0x2b0,4);
  }
  if (0x69 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    param_1 = 0;
    if (*(int *)(in_ECX + 600) != 0) {
      param_1 = *(uint *)(*(int *)(in_ECX + 600) + 0xc);
    }
    FUN_0045f7a0(&param_1,4);
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0x1d0,1);
    FUN_0045b9a0(in_ECX + 0x1d8,4);
    FUN_0045b9a0(in_ECX + 0x1dc,4);
    FUN_0045b9a0(in_ECX + 0x1e0,4);
    FUN_0045b9a0(in_ECX + 0x2a8,1);
    FUN_0045b9a0(in_ECX + 0x1e4,1);
    FUN_0045b9a0(in_ECX + 0x1e8,4);
    FUN_0045b9a0(in_ECX + 0x240,4);
    FUN_0045b9a0(in_ECX + 0x2a8,1);
  }
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar6 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar6 - local_20,0x2b9b,
                   ".\\AI\\HighProcess.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar3);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x2b9b,".\\AI\\HighProcess.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar6 - local_20,*puVar3,uVar8);
    }
  }
  cVar5 = FUN_0045a170();
  psVar4 = local_8;
  if (cVar5 != '\0') {
    uVar9 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_8 + 0xffffU < uVar9) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   ".\\AI\\HighProcess.cpp",0x2b9b);
    }
    *psVar4 = (short)uVar9 - (short)psVar4;
  }
  return;
}



void FUN_00633080(int param_1,int param_2,char param_3)

{
  int in_ECX;
  char cVar1;
  
  if ((*(int *)(in_ECX + 700) != 6) && (*(int *)(in_ECX + 700) != 5)) {
    *(uint *)(in_ECX + 700) = (uint)(param_3 != '\0') * 2 + 2;
    if (param_2 != 0) {
      *(int *)(in_ECX + 0x2c4) = param_2;
    }
    if (*(float *)(in_ECX + 0x2c0) <= 0.0) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
    }
    if (param_3 != '\0') {
      cVar1 = '\x01';
      if ((param_1 == DAT_00b333c4) && (cVar1 = *(char *)(DAT_00b333c4 + 0x588), cVar1 == '\0')) {
        FUN_0066c580(0);
      }
      FUN_005e05f0(0x3f);
      FUN_005fcab0(0x3f800000,0x3f800000);
      if (cVar1 == '\0') {
        FUN_0066c580(1);
      }
    }
  }
  return;
}



void FUN_00633130(int param_1)

{
  int in_ECX;
  char cVar1;
  
  *(undefined4 *)(in_ECX + 700) = 6;
  *(undefined4 *)(in_ECX + 0x2c4) = 0;
  if (*(float *)(in_ECX + 0x2c0) <= 0.0) {
    *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
  }
  cVar1 = '\x01';
  if ((param_1 == DAT_00b333c4) && (cVar1 = *(char *)(DAT_00b333c4 + 0x588), cVar1 == '\0')) {
    FUN_0066c580(0);
  }
  FUN_005e05f0(0x3f);
  FUN_005fcab0(0x3f800000,0x3f800000);
  if (cVar1 == '\0') {
    FUN_0066c580();
    return;
  }
  return;
}



void FUN_006331c0(int param_1)

{
  int in_ECX;
  char cVar1;
  
  *(undefined4 *)(in_ECX + 700) = 5;
  *(undefined4 *)(in_ECX + 0x2c4) = 0;
  if (*(float *)(in_ECX + 0x2c0) <= 0.0) {
    *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
  }
  cVar1 = '\x01';
  if ((param_1 == DAT_00b333c4) && (cVar1 = *(char *)(DAT_00b333c4 + 0x588), cVar1 == '\0')) {
    FUN_0066c580(0);
  }
  FUN_005e05f0(0x3f);
  FUN_005fcab0(0x3f800000,0x3f800000);
  if (cVar1 == '\0') {
    FUN_0066c580();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00633250(int *param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = *(int *)(in_ECX + 700);
  if (iVar2 == 0) {
    fVar1 = *(float *)(in_ECX + 0x2c0);
    if (NAN(fVar1) || 1.0 < fVar1 == (fVar1 == 1.0)) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
      FUN_005ee1b0();
      return false;
    }
    return false;
  }
  fVar1 = _DAT_00b367a8;
  if (param_1 == DAT_00b333c4) {
    fVar1 = _DAT_00b367b0;
  }
  fVar1 = _DAT_00b33e9c / fVar1;
  if ((iVar2 == 1) || (iVar2 == 3)) {
    fVar1 = fVar1 + *(float *)(in_ECX + 0x2c0);
    *(float *)(in_ECX + 0x2c0) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0x3f800000;
      *(undefined4 *)(in_ECX + 700) = 0;
    }
  }
  else if (iVar2 == 2) {
    fVar1 = *(float *)(in_ECX + 0x2c0) - fVar1;
    *(float *)(in_ECX + 0x2c0) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0;
      *(undefined4 *)(in_ECX + 0x2c4) = 0;
      *(undefined4 *)(in_ECX + 700) = 0;
    }
  }
  else if (iVar2 == 4) {
    fVar1 = *(float *)(in_ECX + 0x2c0) - fVar1;
    *(float *)(in_ECX + 0x2c0) = fVar1;
    if (fVar1 < 0.0) {
      iVar2 = *(int *)(in_ECX + 0x2c4);
      *(undefined4 *)(in_ECX + 0x2c0) = 0;
      *(undefined4 *)(in_ECX + 0x2c4) = 0;
      if (iVar2 != 0) {
        FUN_004dd260(param_1,0,0,1);
      }
      if ((param_1 != DAT_00b333c4) && (iVar2 = FUN_0065ad00(), iVar2 != 0)) {
        *(undefined4 *)(in_ECX + 700) = 0;
        return true;
      }
      FUN_00628630(param_1,1);
    }
  }
  else if (iVar2 == 6) {
    fVar1 = *(float *)(in_ECX + 0x2c0) - fVar1;
    *(float *)(in_ECX + 0x2c0) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(in_ECX + 0x2c0) = 0;
      (**(code **)(*param_1 + 0x8c))(1);
    }
  }
  else if ((iVar2 == 5) &&
          (fVar1 = *(float *)(in_ECX + 0x2c0) - fVar1, *(float *)(in_ECX + 0x2c0) = fVar1,
          fVar1 < 0.0)) {
    *(undefined4 *)(in_ECX + 0x2c0) = 0;
    FUN_004e4690();
  }
  FUN_005ee1b0();
  return *(int *)(in_ECX + 700) - 3U < 4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633460(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  if (0.0 < (float)in_ECX[0x78]) {
    pcVar1 = *(code **)(*in_ECX + 0x36c);
    in_ECX[0x78] = (int)((float)in_ECX[0x78] - _DAT_00b33e9c);
    iVar2 = (*pcVar1)();
    if (iVar2 == 0) {
      *(ushort *)(in_ECX + 0x7f) = *(ushort *)(in_ECX + 0x7f) | (short)(char)in_ECX[0x79];
    }
    if ((float)in_ECX[0x78] <= 0.0) {
      (**(code **)(*in_ECX + 0x2c4))(0x30,0);
    }
  }
  return;
}



void FUN_00633540(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x224) != 0) && (cVar1 = FUN_006b73a0(), cVar1 != '\0')) {
    return;
  }
  iVar2 = FUN_00447490("ITMTorchHeldLP");
  if ((param_1 != 0) && (iVar2 != 0)) {
    uVar3 = FUN_0065ac50(*(undefined4 *)(iVar2 + 0xc),1,2,1);
    *(undefined4 *)(in_ECX + 0x224) = uVar3;
  }
  return;
}



undefined1 FUN_00633590(int *param_1,float param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x330))();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x338))();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = (**(code **)(*param_1 + 0x330))();
  uVar6 = 0;
  uVar3 = FUN_006135f0(0);
  fVar5 = (float10)FUN_004d7e90(uVar3,uVar6);
  if ((float10)param_2 < fVar5 == ((float10)param_2 == fVar5)) {
    uStack_18 = *(undefined4 *)(iVar2 + 0x120);
    uStack_14 = *(undefined4 *)(iVar2 + 0x124);
    uStack_10 = *(undefined4 *)(iVar2 + 0x128);
    cVar1 = FUN_008aa350(&DAT_00b3f9a8);
    if ((cVar1 != '\0') || (cVar1 = FUN_0064ada0(), cVar1 != '\0')) {
      uVar3 = FUN_0064ada0();
      uVar3 = FUN_006135f0(uVar3);
      puVar4 = (undefined4 *)FUN_00628790(auStack_c,param_1,param_2,uVar3);
      uStack_18 = *puVar4;
      uStack_14 = puVar4[1];
      uStack_10 = puVar4[2];
      FUN_006127e0(*puVar4,puVar4[1],puVar4[2]);
    }
    fVar5 = (float10)FUN_004d7e30(&uStack_18);
    if (fVar5 < (float10)30.0 == (fVar5 == (float10)30.0)) {
      uVar3 = FUN_006ecc80();
      uVar6 = FUN_004d6670();
      if (((char)in_ECX[0x34] != '\0') &&
         (cVar1 = (**(code **)(*in_ECX + 0x3dc))(param_1,uStack_18,uStack_14,uStack_10,uVar3,uVar6),
         cVar1 == '\0')) {
        return 0;
      }
      (**(code **)(*in_ECX + 0x238))(param_1,param_3);
      (**(code **)(*in_ECX + 0x414))(param_1,&stack0xffffffe0,uVar3,uVar6,0xbf800000);
      return 0;
    }
    if ((char)in_ECX[0x34] == '\0') {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    FUN_006127e0(DAT_00b3f9a8,DAT_00b3f9ac,DAT_00b3f9b0);
    return 1;
  }
  return 1;
}



void FUN_00633790(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (in_ECX[0x4f] == 0) {
    (**(code **)(*in_ECX + 0x188))(param_1);
    return;
  }
  cVar1 = (**(code **)(*(int *)in_ECX[0x4f] + 0x334))(1);
  if (cVar1 == '\0') {
    if (in_ECX[0x4f] == DAT_00b333c4) {
      cVar1 = FUN_006605a0(0);
      if (cVar1 != '\0') goto LAB_00633822;
      if (in_ECX[0x4f] == DAT_00b333c4) {
        (**(code **)(*in_ECX + 0x198))(unaff_retaddr,0,0xffffffff,0);
        return;
      }
    }
    (**(code **)(*in_ECX + 0x520))(unaff_retaddr);
    return;
  }
LAB_00633822:
  if (in_ECX[0x4f] == DAT_00b333c4) {
    piVar2 = (int *)FUN_006758e0(DAT_00b333c4,0xc,1);
    if (piVar2 != (int *)0x0) {
      while ((int *)*piVar2 != (int *)0x0) {
        cVar1 = (**(code **)(*(int *)*piVar2 + 400))();
        if ((cVar1 != '\0') && (iVar3 = *piVar2, iVar3 != 0)) {
          cVar1 = FUN_0067cb50(iVar3);
          (**(code **)(*in_ECX + 0x228))
                    (unaff_retaddr,iVar3,cVar1 == '\0',0,0,cVar1 == '\0',0,0,0,1);
        }
        piVar2 = (int *)piVar2[1];
        if (piVar2 == (int *)0x0) {
          return;
        }
      }
    }
  }
  else {
    iVar3 = (**(code **)(*(int *)in_ECX[0x4f] + 0x330))();
    if (iVar3 != 0) {
      for (piVar2 = *(int **)(iVar3 + 0x40);
          (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != (undefined4 *)0x0));
          piVar2 = (int *)piVar2[1]) {
        (**(code **)(*in_ECX + 0x228))(unaff_retaddr,*(undefined4 *)*piVar2,0,0,0,0,0,0,0,1);
      }
    }
  }
  return;
}



void FUN_00633c50(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((param_1 != (int *)0x0) && ((param_1 != DAT_00b333c4 || ((char)DAT_00b333c4[0x1ce] == '\0'))))
  {
    iVar1 = (**(code **)(*(int *)param_1[0x16] + 0x444))();
    if (iVar1 < DAT_00b36a70) {
      iVar1 = (**(code **)(*param_1 + 0x330))();
      if (iVar1 != 0) {
        piVar2 = (int *)FUN_006135f0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x240))(param_1,1);
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00633cb0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  char cVar1;
  uint in_EAX;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *in_ECX;
  
  if (param_2 == 0) {
    return in_EAX & 0xffffff00;
  }
  iVar2 = (**(code **)(*in_ECX + 0x184))();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x20) == '\x1d')) {
    uVar3 = FUN_0052ed50(4,1);
    (**(code **)(*in_ECX + 0x484))(DAT_00b333c4);
    param_1[0x39] = DAT_00b333c4;
    (**(code **)(*in_ECX + 0x1a4))(param_1,uVar3,0,0,1);
  }
  cVar1 = FUN_005e3290();
  if (cVar1 != '\0') {
    uVar4 = (**(code **)(*param_1 + 0x388))();
    if (uVar4 != 0) goto LAB_00633da9;
  }
  if ((char)in_ECX[0xa4] != '\0') {
    (**(code **)(*in_ECX + 0x588))(param_1,0,0);
    *(undefined1 *)(in_ECX + 0xa4) = 0;
    in_ECX[0xa3] = _DAT_00b36c88;
  }
  iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x3d0))();
  if (iVar2 == 0) {
    iVar2 = FUN_004db6b0();
    if (iVar2 != 0) {
      uVar4 = FUN_004de770(param_2,1);
      if ((char)uVar4 != '\0') goto LAB_00633da9;
    }
  }
  iVar2 = FUN_004db6b0();
  if (iVar2 != 0) {
    uVar4 = FUN_004de770(param_1,1);
    if ((char)uVar4 != '\0') {
LAB_00633da9:
      return uVar4 & 0xffffff00;
    }
  }
  uVar4 = FUN_0064bbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10);
  return uVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633df0(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  undefined4 local_1c [7];
  
  iVar3 = FUN_005f23b0(0x12);
  if (iVar3 < 0) {
    local_1c[0] = 0xd;
    local_1c[1] = 1;
    local_1c[2] = 0;
    local_1c[3] = 4;
    local_1c[4] = 2;
    local_1c[5] = 5;
    local_1c[6] = 3;
    iVar3 = FUN_005e5c80(1);
    for (iVar4 = 0; (DAT_00b374c8 <= iVar3 && (iVar4 < 7)); iVar4 = iVar4 + 1) {
      iVar3 = FUN_005e4330(local_1c[iVar4]);
      if (iVar3 != 0) {
        iVar1 = *(int *)(iVar3 + 8);
        iVar5 = 0;
        if ((iVar1 != 0) && (*(char *)(iVar1 + 4) == '\x14')) {
          iVar5 = iVar1;
        }
        cVar2 = FUN_004b4c70();
        if (cVar2 == '\x01') {
          FUN_005f2e70(iVar5,1,0,0,0,0);
        }
        FUN_00484470();
        FUN_00401f20(iVar3);
      }
      iVar3 = FUN_005e5c80(1);
    }
    *(undefined1 *)(in_ECX + 0xa4) = 1;
    in_ECX[0xa3] = _DAT_00b36c88;
  }
  (**(code **)(*in_ECX + 0x188))(param_1,1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00633f10(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  int *local_24;
  float local_20;
  int *local_18;
  float local_10;
  
  if ((param_1 != -0x44) && (iVar6 = FUN_00420ef0(), iVar6 != 0)) {
    local_18 = (int *)FUN_00401f00(8);
    if (local_18 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      *local_18 = 0;
      local_18[1] = 0;
    }
    local_24 = (int *)FUN_00401f00(8);
    if (local_24 == (int *)0x0) {
      local_24 = (int *)0x0;
    }
    else {
      *local_24 = 0;
      local_24[1] = 0;
    }
    piVar1 = *(int **)(iVar6 + 0xc);
    FUN_00673a50(0);
    FUN_007616d0();
    local_20 = 0.0;
    for (; (piVar2 = local_24, piVar1 != (int *)0x0 && (iVar8 = *piVar1, iVar8 != 0));
        piVar1 = (int *)piVar1[1]) {
      iVar9 = local_24[1];
      while (iVar9 != 0) {
        piVar2 = (int *)piVar2[1];
        iVar9 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = iVar8;
      }
      else {
        piVar7 = (int *)FUN_00401f00(8);
        if (piVar7 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar7 = iVar8;
          piVar7[1] = 0;
          piVar2[1] = (int)piVar7;
        }
      }
    }
    for (; (piVar1 = local_18, piVar2 != (int *)0x0 &&
           (piVar7 = (int *)*piVar2, piVar7 != (int *)0x0)); piVar2 = (int *)piVar2[1]) {
      iVar8 = FUN_0052b4a0();
      if (piVar7 != DAT_00b333c4) {
        bVar3 = false;
        iVar9 = FUN_005e03a0();
        iVar10 = FUN_0041fb20();
        if (((iVar9 == 0) || (cVar5 = FUN_00567770(), cVar5 != '\0')) && (iVar10 != 0)) {
          iVar9 = iVar10;
        }
        if ((iVar9 != 0) && (*(char *)(iVar9 + 0x20) == '\x02')) {
          bVar3 = true;
        }
        iVar9 = FUN_005e03a0();
        iVar10 = FUN_0041fb20();
        if (((iVar9 != 0) && (cVar5 = FUN_00567770(), cVar5 != '\0')) && (iVar10 != 0)) {
          iVar9 = iVar10;
        }
        if ((bVar3) ||
           ((iVar9 != 0 &&
            ((*(char *)(iVar9 + 0x20) == '\x01' || (*(char *)(iVar9 + 0x20) == '\a')))))) {
          iVar9 = FUN_00659a00();
          if (iVar9 == 0) {
            (**(code **)(*piVar7 + 0x1c0))(0);
            cVar5 = (**(code **)(*piVar7 + 400))();
            if ((cVar5 != '\0') && (iVar9 = FUN_00659a00(), iVar9 == 0)) {
              fVar11 = (float10)(**(code **)(*piVar7 + 0x1d8))();
              if (((float10)0.0 <= fVar11) ||
                 (((iVar9 = FUN_005e0dc0(), iVar9 == 3 ||
                   (cVar5 = (**(code **)(*piVar7 + 0x198))(0), cVar5 != '\0')) ||
                  (fVar11 = (float10)FUN_004d7e90(DAT_00b333c4,0), (float10)3600.0 <= fVar11)))) {
                (**(code **)(*piVar7 + 0x1dc))();
              }
              else {
                (**(code **)(*piVar7 + 0x1d4))(local_20);
                fVar4 = (float)iVar8;
                if (iVar8 < 0) {
                  fVar4 = fVar4 + 4.2949673e+09;
                }
                local_20 = fVar4 * 0.25 * _DAT_00b33e9c + local_20;
              }
            }
          }
          else {
            local_10 = param_2;
            if (param_2 <= 0.0) {
              local_10 = 3600.0;
            }
            if (iVar9 == 3) {
              iVar8 = *(int *)piVar7[0x16];
              fVar11 = (float10)FUN_00402bd0();
              (**(code **)(iVar8 + 0x1c))((float)(fVar11 - (float10)1.0));
            }
            (**(code **)(*piVar7 + 0x1c0))(local_10);
          }
        }
        else {
          FUN_00446cb0(piVar7);
        }
      }
    }
    for (; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
      FUN_00424d00(*piVar1);
    }
    FUN_004526e0();
    FUN_00401f20(local_18);
    FUN_004526e0();
    FUN_00401f20(local_24);
    if (((*(int **)(iVar6 + 0xc))[1] == 0) && (**(int **)(iVar6 + 0xc) == 0)) {
      FUN_00420f00();
    }
  }
  return;
}



int FUN_00634270(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  
  if ((param_1 == 0) || (iVar1 = FUN_005e02e0(0), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x2a4);
    if (iVar1 == 0) {
      iVar1 = FUN_005e02e0(0);
      piVar2 = (int *)(iVar1 + 0x60);
      do {
        if ((piVar2 == (int *)0x0) || ((piVar2[1] == 0 && (*piVar2 == 0)))) {
          return *(int *)(in_ECX + 0x2a4);
        }
        if ((*piVar2 != 0) &&
           (piVar3 = (int *)FUN_004b0920(param_1), piVar6 = piVar3, piVar3 != (int *)0x0)) {
          do {
            if ((piVar6[1] == 0) && (*piVar6 == 0)) break;
            iVar1 = *piVar6;
            if (iVar1 != 0) {
              iVar4 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x18))();
              if ((iVar4 != 4) &&
                 ((iVar4 = (**(code **)(*(int *)(iVar1 + 0x18) + 0x18))(), iVar4 != 1 ||
                  (param_2 != '\0')))) {
                if (*(int *)(in_ECX + 0x2a4) == 0) {
                  puVar5 = (undefined4 *)FUN_00401f00(8);
                  if (puVar5 == (undefined4 *)0x0) {
                    puVar5 = (undefined4 *)0x0;
                  }
                  else {
                    *puVar5 = 0;
                    puVar5[1] = 0;
                  }
                  *(undefined4 **)(in_ECX + 0x2a4) = puVar5;
                }
                FUN_00446cb0(iVar1);
              }
            }
            piVar6 = (int *)piVar6[1];
          } while (piVar6 != (int *)0x0);
          FUN_004526e0();
          FUN_00401f20(piVar3);
        }
        piVar2 = (int *)piVar2[1];
      } while( true );
    }
  }
  return iVar1;
}



void FUN_00634590(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x4cc);
  in_ECX[0xb2] = 0;
  *(undefined1 *)(in_ECX + 0xb7) = 0;
  iVar2 = (*pcVar1)();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_006345e0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x4cc);
  in_ECX[0xb3] = 0;
  *(undefined1 *)((int)in_ECX + 0x2dd) = 0;
  iVar2 = (*pcVar1)();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_00634630(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x4cc);
  in_ECX[0xb4] = 0;
  *(undefined1 *)((int)in_ECX + 0x2de) = 0;
  iVar2 = (*pcVar1)();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_00634680(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x4cc);
  in_ECX[0xb5] = 0;
  *(undefined1 *)((int)in_ECX + 0x2df) = 0;
  iVar2 = (*pcVar1)();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_006346d0(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  
  pcVar1 = *(code **)(*in_ECX + 0x4cc);
  in_ECX[0xb6] = 0;
  *(undefined1 *)(in_ECX + 0xb8) = 0;
  iVar2 = (*pcVar1)();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_00634720(void)

{
  code *pcVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  
  iVar2 = 0;
  piVar3 = in_ECX + 0xb2;
  do {
    *piVar3 = 0;
    *(undefined1 *)((int)in_ECX + iVar2 + 0x2dc) = 0;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 5);
  iVar2 = (**(code **)(*in_ECX + 0x4cc))();
  if (in_ECX[0xb9] != iVar2) {
    pcVar1 = *(code **)(*in_ECX + 0x4cc);
    *(undefined1 *)(in_ECX + 0xba) = 0;
    iVar2 = (*pcVar1)();
    in_ECX[0xb9] = iVar2;
  }
  return;
}



void FUN_006347e0(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0052ed50(1,2);
  param_1[0x39] = DAT_00b333c4;
  if (iVar1 != 0) {
    (**(code **)(*(int *)param_1[0x16] + 0x1a4))(param_1,iVar1,0,1,0);
  }
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if (iVar1 == 0) {
    iVar1 = FUN_005e0380();
    if ((iVar1 != 0) && (iVar1 = FUN_005e0380(), *(char *)(iVar1 + 0x20) == '\x06')) {
      return;
    }
    (**(code **)(*(int *)param_1[0x16] + 0x158))(param_1,1);
  }
  return;
}



void FUN_00634860(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  *in_ECX = 0;
  in_ECX[6] = 0x3f800000;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[7] = DAT_00b3fc80;
  in_ECX[8] = DAT_00b3fc84;
  return;
}



void FUN_00634890(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x30) + 4))();
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)(in_ECX + 0x34);
  if (*(int *)(in_ECX + 0x34) != 0) {
    *(undefined4 **)(*(int *)(in_ECX + 0x34) + 4) = puVar1;
    *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
    *(undefined4 **)(in_ECX + 0x34) = puVar1;
    return;
  }
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  *(undefined4 **)(in_ECX + 0x38) = puVar1;
  *(undefined4 **)(in_ECX + 0x34) = puVar1;
  return;
}



void FUN_00634910(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x118);
  local_4 = 0;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    *(undefined4 **)(in_ECX + 0x118) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_1 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00634a30(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int iVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c36b6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a71814;
  local_4 = 1;
  if ((*(undefined4 **)(DAT_00b333c4 + 0x58) == in_ECX) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')
     ) {
    FUN_004a7a60("Don\'t kill the PlayerCharacter HighProcess until we exit the game. The game will now crash."
                 ,uVar4);
  }
  iVar6 = in_ECX[0x9a];
  if (iVar6 != 0) {
    if ((((*(int *)(iVar6 + 0x1c) != 0) &&
         ((**(code **)(**(int **)(iVar6 + 0x1c) + 0x88))(local_14,iVar6),
         local_14[0] != (undefined4 *)0x0)) &&
        (LVar5 = InterlockedDecrement(local_14[0] + 1), LVar5 == 0)) &&
       (local_14[0] != (undefined4 *)0x0)) {
      (**(code **)*local_14[0])(1);
    }
    puVar1 = (undefined4 *)in_ECX[0x9a];
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[0x9a] = 0;
    }
  }
  iVar6 = in_ECX[0xad];
  if (iVar6 != 0) {
    FUN_00493b70();
    FUN_00401f20(iVar6);
  }
  piVar7 = (int *)in_ECX[99];
  in_ECX[0xad] = 0;
  in_ECX[0x75] = 0;
  for (; (piVar7 != (int *)0x0 && (*piVar7 != 0)); piVar7 = (int *)piVar7[1]) {
    FUN_00401f20(*piVar7);
  }
  puVar1 = (undefined4 *)in_ECX[99];
  iVar6 = puVar1[1];
  while (iVar6 != 0) {
    iVar6 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar6;
  }
  *puVar1 = 0;
  FUN_00401f20(in_ECX[99]);
  if ((in_ECX[0x65] != 0) || (in_ECX[100] != 0)) {
    FUN_004526e0();
  }
  piVar7 = in_ECX + 0x88;
  iVar6 = 2;
  do {
    if (*piVar7 != 0) {
      cVar3 = FUN_006b7260();
      if (cVar3 != '\0') {
        FUN_006b7240();
      }
      FUN_006b73c0();
      iVar2 = *piVar7;
      if (iVar2 != 0) {
        FUN_006b73e0();
        FUN_00401f20(iVar2);
      }
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (in_ECX[0xa2] != 0) {
    *(undefined1 *)(in_ECX[0xa2] + 0x10) = 1;
  }
  iVar6 = in_ECX[0x94];
  if (iVar6 != 0) {
    FUN_006b81d0();
    FUN_00401f20(iVar6);
  }
  puVar1 = (undefined4 *)in_ECX[0xa9];
  if (puVar1 != (undefined4 *)0x0) {
    iVar6 = puVar1[1];
    while (iVar6 != 0) {
      iVar6 = *(int *)(puVar1[1] + 4);
      FUN_00401f20(puVar1[1]);
      puVar1[1] = iVar6;
    }
    *puVar1 = 0;
    FUN_00401f20(in_ECX[0xa9]);
    in_ECX[0xa9] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x9a];
  local_4 = local_4 & 0xffffff00;
  if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
     (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  local_4 = 0xffffffff;
  FUN_00651f70();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00634cb0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  
  *(undefined4 *)(in_ECX + 0x1ec) = 0;
  if (((*(int *)(param_1 + 0x3c) != 0) &&
      (iVar1 = FUN_004d96f0(*(int *)(param_1 + 0x3c),&DAT_00a30968), iVar1 != 0)) &&
     (piVar3 = *(int **)(iVar1 + 0xc), piVar3 != (int *)0x0)) {
    while (puVar2 = (undefined4 *)(**(code **)(*piVar3 + 4))(), puVar2 != &DAT_00b3f52c) {
      piVar3 = (int *)piVar3[0xd];
      if (piVar3 == (int *)0x0) {
        return;
      }
    }
    *(int **)(in_ECX + 0x1ec) = piVar3;
  }
  return;
}



uint FUN_00634d10(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  
  uVar1 = (**(code **)(*in_ECX + 0x2d0))();
  uVar2 = 0;
  switch(uVar1) {
  default:
switchD_00634d2c_caseD_0:
    return uVar2 & 0xffffff00;
  case 2:
  case 4:
  case 5:
    if (in_ECX[0x5f] != 0) {
      iVar3 = FUN_004706e0(1);
      uVar2 = 0;
      if (iVar3 != 0) {
        iVar3 = FUN_0051ac70();
        uVar2 = iVar3 - 0x22;
        if (uVar2 < 6) goto switchD_00634d2c_caseD_0;
      }
    }
switchD_00634d2c_caseD_ffffffff:
    return CONCAT31((int3)(uVar2 >> 8),1);
  case 0xffffffff:
  case 3:
  case 6:
    goto switchD_00634d2c_caseD_ffffffff;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00634f60(int *param_1)

{
  int *piVar1;
  float fVar2;
  bool bVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  undefined4 *puVar12;
  undefined8 *puVar13;
  int *in_ECX;
  undefined4 unaff_EBX;
  int *piVar14;
  float10 fVar15;
  undefined4 uVar16;
  undefined4 uStack_38;
  int iStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  int *piStack_28;
  float fStack_1c;
  undefined8 uStack_18;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_1;
  iVar8 = (**(code **)(*in_ECX + 0x50))();
  if (iVar8 != 0) {
    (**(code **)(*in_ECX + 0x50))();
    cVar5 = FUN_00419cf0();
    if (cVar5 == '\0') {
      (**(code **)(*in_ECX + 0x50))();
      cVar5 = FUN_00419e50();
      if (cVar5 != '\0') {
        return;
      }
      uVar9 = 0;
      (**(code **)(*in_ECX + 0x50))(0);
      FUN_0041a610(uVar9);
      return;
    }
    if (param_1 == (int *)0x0) {
      piVar14 = (int *)0x0;
    }
    else {
      piVar14 = param_1 + 0x1a;
    }
    uVar16 = 0;
    uVar9 = (**(code **)(*in_ECX + 0x50))(piVar14,0);
    FUN_00699190(uVar9,piVar14,uVar16);
    uVar9 = 0;
    (**(code **)(*in_ECX + 0x50))(0);
    FUN_00419f10(uVar9);
    (**(code **)(*in_ECX + 0x54))(0);
  }
  iVar10 = (**(code **)(*in_ECX + 0x184))();
  iVar8 = 0;
  if ((iVar10 != 0) && (*(char *)(iVar10 + 0x20) == '\x10')) {
    FUN_00626de0();
    iVar8 = iVar10;
  }
  piStack_2c = (int *)0x0;
  iVar10 = (**(code **)(*param_1 + 0x330))();
  if ((iVar10 == 0) || (iVar10 = (**(code **)(*param_1 + 0x330))(), *(int *)(iVar10 + 0x70) != 0xc))
  {
    if ((iVar8 == 0) || ((*(int *)(iVar8 + 0x58) == 0 && (*(int *)(iVar8 + 0x54) == 0)))) {
LAB_00635097:
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      return;
    }
    cVar5 = FUN_00626e60();
    if (cVar5 != '\0') {
      uVar9 = FUN_005e3270(0,100);
      uVar16 = 0;
      fVar15 = (float10)FUN_004d7e90(DAT_00b333c4,0);
      uVar9 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar15,uVar16,uVar9);
      uVar9 = (**(code **)(*param_1 + 0x224))(DAT_00b333c4,0,uVar9);
      iVar10 = FUN_00546190(uVar9);
      if (iVar10 == 0) goto LAB_00635097;
    }
  }
  cVar5 = (**(code **)(*param_1 + 0x25c))();
  if (cVar5 != '\0') {
    *(undefined1 *)(iVar8 + 0x50) = 0;
    *(float *)(iVar8 + 0x4c) = *(float *)(iVar8 + 0x4c) - *(float *)(iVar8 + 0x4c);
    return;
  }
  if (((iVar8 != 0) && (*(int *)(iVar8 + 0x28) != 0)) && (iVar10 = FUN_00569e60(), iVar10 != 0)) {
    piStack_2c = (int *)FUN_00569e60();
  }
  if ((*(char *)(iVar8 + 0x65) != '\0') && (iVar10 = (**(code **)(*param_1 + 0x18c))(), iVar10 != 4)
     ) {
    (**(code **)(*in_ECX + 0x560))(param_1);
    return;
  }
  iStack_34 = FUN_006ecc80();
  uStack_30 = FUN_004d6670();
  uStack_18 = (double)CONCAT44(uStack_18._4_4_,*(undefined4 *)(iVar8 + 0x4c));
  piStack_28 = (int *)FUN_00628140(param_1);
  if (((piStack_28 == (int *)0x0) && (piStack_2c != (int *)0x0)) &&
     (cVar5 = (**(code **)(*piStack_2c + 400))(), cVar5 != '\0')) {
    piStack_28 = piStack_2c;
  }
  cVar5 = *(char *)(iVar8 + 100);
  uStack_c = *(undefined4 *)(iVar8 + 0x40);
  uStack_8 = *(undefined4 *)(iVar8 + 0x44);
  uStack_38 = CONCAT13(cVar5,(undefined3)uStack_38);
  uStack_4 = *(undefined4 *)(iVar8 + 0x48);
  if (piStack_28 == (int *)0x0) {
    return;
  }
  if ((((int *)param_1[0x16] != (int *)0x0) &&
      (iVar10 = (**(code **)(*(int *)param_1[0x16] + 0x410))(), iVar10 != 0)) &&
     (cVar6 = FUN_00683a70(), cVar6 != '\0')) {
    (**(code **)(*param_1 + 0x180))(1);
    *(undefined4 *)(iVar8 + 0x60) = 0;
    *(undefined4 *)(iVar8 + 0x5c) = 0;
    FUN_00626c10(param_1);
    FUN_00683a80(0);
    (**(code **)(*in_ECX + 0x3dc))
              (param_1,*(undefined4 *)(iVar8 + 0x40),*(undefined4 *)(iVar8 + 0x44),
               *(undefined4 *)(iVar8 + 0x48),uStack_38,iStack_34);
    return;
  }
  if (iStack_34 == 0) goto LAB_006355df;
  fStack_1c = 3.4028235e+38;
  if (((piStack_2c != (int *)0x0) && (cVar6 = (**(code **)(*piStack_2c + 0x198))(0), cVar6 == '\0'))
     && (((uint)piStack_2c[2] >> 0xb & 1) == 0)) {
    fVar15 = (float10)FUN_004d7e90(piStack_28,0);
    fStack_1c = (float)fVar15;
  }
  cVar6 = FUN_004c97f0();
  if (cVar6 == '\0') {
    pfVar11 = (float *)FUN_00403c00();
  }
  else {
    pfVar11 = (float *)FUN_00403c00();
  }
  piVar14 = *(int **)(iVar8 + 0x60);
  piStack_2c = (int *)*pfVar11;
  if ((piVar14 != (int *)0x0) &&
     (((cVar7 = (**(code **)(*piVar14 + 0x334))(1), cVar7 != '\0' ||
       (cVar7 = (**(code **)(*piVar14 + 0x198))(0), cVar7 != '\0')) ||
      ((((uint)piVar14[2] >> 0xb & 1) != 0 || (cVar7 = FUN_005e3350(), cVar7 == '\0')))))) {
    piVar14 = (int *)0x0;
    *(undefined4 *)(iVar8 + 0x60) = 0;
  }
  piVar1 = *(int **)(iVar8 + 0x5c);
  if (((((float)piStack_2c <= fStack_1c) || (piVar1 != (int *)0x0)) || (piVar14 != (int *)0x0)) &&
     (((cVar5 != '\0' || ((float)uStack_18 != 0.0)) || (*(char *)(iVar8 + 0x3c) == '\0')))) {
    if (*(char *)(iVar8 + 0x3c) == '\0') {
      iVar10 = FUN_00569740();
      if (iVar10 == 1) {
        FUN_00569800();
      }
      else {
        iVar10 = FUN_00569740();
        if (iVar10 == 0) {
          piVar14 = (int *)FUN_005697e0();
          puVar12 = (undefined4 *)(**(code **)(*piVar14 + 0x174))();
          uStack_c = *puVar12;
          uStack_8 = puVar12[1];
          uStack_4 = puVar12[2];
          FUN_006ecc80();
          FUN_004d6670();
        }
      }
    }
    else if (piVar14 == (int *)0x0) {
      if (piVar1 == (int *)0x0) {
        uStack_c = *(undefined4 *)(iVar8 + 0x40);
        uStack_8 = *(undefined4 *)(iVar8 + 0x44);
        uStack_4 = *(undefined4 *)(iVar8 + 0x48);
      }
      else {
        iVar10 = FUN_004d7630();
        if (iVar10 == 0) {
          puVar12 = (undefined4 *)(**(code **)(*piVar1 + 0x174))();
          uStack_c = *puVar12;
          uStack_8 = puVar12[1];
          uStack_4 = puVar12[2];
        }
        else {
          FUN_0042b410();
          FUN_004d7630();
          puVar12 = (undefined4 *)FUN_006899c0();
          uStack_c = *puVar12;
          uStack_8 = puVar12[1];
          uStack_4 = puVar12[2];
        }
      }
    }
    else {
      puVar12 = (undefined4 *)(**(code **)(*piVar14 + 0x174))();
      uStack_c = *puVar12;
      uStack_8 = puVar12[1];
      uStack_4 = puVar12[2];
      FUN_006ecc80();
      FUN_004d6670();
    }
    goto LAB_006355df;
  }
  if (0.0 < (float)in_ECX[0x22]) {
    fVar2 = (float)in_ECX[0x22] - _DAT_00b33e9c;
  }
  else {
    fVar2 = 20.0;
  }
  bVar3 = 0.0 >= (float)in_ECX[0x22];
  in_ECX[0x22] = (int)fVar2;
  if (*(char *)(iVar8 + 0x3c) == '\0') {
    FUN_005eae70();
    return;
  }
  fVar15 = (float10)(**(code **)(*param_1 + 0x250))();
  if (fVar15 == (float10)0.0) {
    FUN_00627ff0(param_1);
  }
  piVar14 = *(int **)(iVar8 + 0x60);
  if (piVar14 == DAT_00b333c4) {
    *(undefined4 *)(iVar8 + 0x60) = 0;
LAB_006353d1:
    if (cVar6 == '\0') {
      puVar12 = (undefined4 *)FUN_006279a0(&uStack_18,param_1,piStack_28,bVar3);
    }
    else {
      puVar12 = (undefined4 *)FUN_00627680(&uStack_18,param_1,piStack_28,bVar3);
    }
    uStack_c = *puVar12;
    uStack_8 = puVar12[1];
    uStack_4 = puVar12[2];
  }
  else {
    if (piVar14 == (int *)0x0) goto LAB_006353d1;
    puVar12 = (undefined4 *)(**(code **)(*piVar14 + 0x174))();
    uStack_c = *puVar12;
    uStack_8 = puVar12[1];
    uStack_4 = puVar12[2];
    iStack_34 = FUN_006ecc80();
    uStack_30 = FUN_004d6670();
  }
  iVar10 = FUN_006ecc80();
  if (iVar10 != iStack_34) {
    FUN_004d6670();
  }
  if (((char)in_ECX[0x34] != '\0') &&
     (cVar5 = (**(code **)(*in_ECX + 0x3dc))(param_1,uStack_c,uStack_8,uStack_4,iStack_34,uStack_30)
     , cVar5 == '\0')) {
    return;
  }
  *(undefined1 *)(iVar8 + 0x50) = 0;
  *(float *)(iVar8 + 0x4c) = *(float *)(iVar8 + 0x4c) - *(float *)(iVar8 + 0x4c);
LAB_006355df:
  if ((char)in_ECX[0x34] == '\0') {
    iVar8 = (**(code **)(*param_1 + 0x164))();
    if ((iVar8 != 0) && (cVar5 = FUN_00472ea0(), cVar5 == '\0')) {
      (**(code **)(*in_ECX + 0x594))(param_1);
    }
    (**(code **)(*in_ECX + 0x238))(param_1,0x201);
    uStack_4 = 0x41a00000;
    if (piStack_2c != (int *)0x0) {
      uStack_4 = 0x42700000;
    }
    (**(code **)(*in_ECX + 0x414))(param_1,(int)&uStack_18 + 4,unaff_EBX,uStack_38,uStack_4);
    if (((int *)in_ECX[0xd] != (int *)0x0) &&
       (cVar5 = (**(code **)(*(int *)in_ECX[0xd] + 0x2c))(), cVar5 != '\0')) {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
  }
  else {
    param_1 = *(int **)(iVar8 + 0x60);
    if (param_1 == DAT_00b333c4) {
      param_1 = (int *)0x0;
      *(undefined4 *)(iVar8 + 0x60) = 0;
    }
    piVar14 = *(int **)(iVar8 + 0x5c);
    if (piVar14 == (int *)0x0) {
      if ((param_1 == (int *)0x0) ||
         (fVar15 = (float10)FUN_004d7e90(param_1,0), fVar15 <= (float10)160.0)) {
        iVar10 = (**(code **)(*piVar4 + 0x164))();
        if ((iVar10 != 0) && (cVar5 = FUN_00472ea0(), cVar5 != '\0')) {
          (**(code **)(*in_ECX + 0x48))(piVar4);
        }
        *(undefined1 *)(iVar8 + 0x50) = 1;
        *(float *)(iVar8 + 0x4c) = _DAT_00b33e9c + *(float *)(iVar8 + 0x4c);
        return;
      }
      puVar13 = (undefined8 *)(**(code **)(*param_1 + 0x174))();
      uStack_18 = (double)*puVar13;
      uStack_10 = *(undefined4 *)(puVar13 + 1);
      iStack_34 = FUN_006ecc80();
      uVar9 = FUN_004d6670();
      iVar10 = FUN_006ecc80();
      if (iVar10 != iStack_34) {
        FUN_004d6670();
      }
    }
    else {
      param_1 = (int *)0x461c4000;
      iVar10 = FUN_004d7630();
      if (iVar10 != 0) {
        uVar9 = (**(code **)(*piVar4 + 0x174))();
        puVar13 = &uStack_18;
        FUN_0042b410(puVar13,uVar9);
        FUN_004d7630();
        FUN_006899c0();
        FUN_004121a0(puVar13,uVar9);
        fVar15 = (float10)FUN_00404c90();
        param_1 = (int *)(float)fVar15;
      }
      uStack_18 = (double)(float)param_1;
      fVar15 = (float10)FUN_004d7e90(piVar14,0);
      if (fVar15 <= (float10)uStack_18) {
        fVar15 = (float10)FUN_004d7e90(piVar14,0);
      }
      else {
        fVar15 = (float10)(float)param_1;
      }
      if ((float)fVar15 < 160.0) {
        (**(code **)(*in_ECX + 0x594))(piVar4);
        *(undefined4 *)(iVar8 + 0x5c) = 0;
        FUN_004dd260(piVar4,0,0,1);
        in_ECX[0x22] = 0x41a00000;
        return;
      }
      if (iVar10 == 0) {
        puVar13 = (undefined8 *)(**(code **)(*piVar14 + 0x174))();
      }
      else {
        FUN_0042b410();
        FUN_004d7630();
        puVar13 = (undefined8 *)FUN_006899c0();
      }
      uStack_18 = (double)*puVar13;
      uStack_10 = *(undefined4 *)(puVar13 + 1);
      iStack_34 = FUN_006ecc80();
      uVar9 = FUN_004d6670();
    }
    cVar5 = (**(code **)(*in_ECX + 0x3dc))
                      (piVar4,(float)uStack_18,uStack_18._4_4_,uStack_10,iStack_34,uVar9);
    if (cVar5 == '\0') {
      *(undefined4 *)(iVar8 + 0x60) = 0;
      return;
    }
  }
  return;
}



void FUN_006358e0(undefined4 param_1,undefined4 param_2)

{
  FUN_00630d40(param_1,param_2,1);
  return;
}



void FUN_00635900(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int in_ECX;
  float10 fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  local_10 = (int *)(in_ECX + 0x54);
  piVar2 = local_10;
  local_8 = in_ECX;
  do {
    local_4 = piVar2;
    if ((local_10 == (int *)0x0) || (puVar1 = (undefined4 *)*local_10, puVar1 == (undefined4 *)0x0))
    {
      FUN_0064e240();
      FUN_0064e2b0();
      iVar5 = piVar2[1];
      while (iVar5 != 0) {
        iVar5 = *(int *)(piVar2[1] + 4);
        FUN_00401f20(piVar2[1]);
        piVar2[1] = iVar5;
      }
      *piVar2 = 0;
      return;
    }
    local_c = puVar1[1];
    piVar2 = (int *)*puVar1;
    bVar3 = true;
    iVar5 = FUN_004db6b0();
    if (((iVar5 == 0) || (cVar4 = FUN_004de770(param_1,1), cVar4 != '\0')) &&
       (cVar4 = (**(code **)(*piVar2 + 400))(), cVar4 == '\0')) {
LAB_00635a2b:
      FUN_004d7e90(piVar2,0);
      uVar7 = FUN_009828c0();
      puVar1[5] = uVar7;
LAB_00635c61:
      FUN_004d6f80(1);
      piVar2 = (int *)(local_8 + 0x3c);
      iVar5 = *(int *)(local_8 + 0x40);
      while (iVar5 != 0) {
        piVar2 = (int *)piVar2[1];
        iVar5 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = (int)puVar1;
      }
      else {
        piVar8 = (int *)FUN_00401f00(8);
        if (piVar8 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar8 = (int)puVar1;
          piVar8[1] = 0;
          piVar2[1] = (int)piVar8;
        }
      }
    }
    else {
      local_14 = -1;
      cVar4 = FUN_004d7f80();
      if ((cVar4 == '\0') ||
         (cVar4 = (**(code **)(*piVar2 + 0x198))(0), piVar8 = piVar2, cVar4 != '\0')) {
        iVar5 = FUN_004db6b0();
        if ((iVar5 != 0) && (*(char *)(iVar5 + 4) == '#')) {
          piVar8 = (int *)FUN_00675220(iVar5);
          goto LAB_006359bf;
        }
LAB_00635a81:
        cVar4 = FUN_004d7f80();
        if (cVar4 != '\0') {
          puVar1[7] = 0;
          goto LAB_00635c61;
        }
      }
      else {
LAB_006359bf:
        if ((piVar8 == (int *)0x0) || (cVar4 = (**(code **)(*piVar8 + 0x198))(0), cVar4 != '\0'))
        goto LAB_00635a81;
        iVar5 = local_c;
        FUN_005e02e0(0);
        cVar4 = FUN_004685b0(iVar5);
        if (cVar4 != '\0') {
          iVar5 = FUN_00470520(puVar1[1]);
          iVar6 = FUN_005e4420();
          if (iVar5 <= iVar6) {
            cVar4 = (**(code **)(*param_1 + 0x334))(1);
            if (cVar4 == '\0') {
              puVar1[7] = 2;
              goto LAB_00635a2b;
            }
            bVar3 = false;
          }
        }
      }
      cVar4 = (**(code **)(*piVar2 + 400))();
      if (cVar4 == '\0') {
        uVar7 = (**(code **)(*param_1 + 0x284))(0x24);
        FUN_005e0430(0x1f);
        uVar7 = FUN_009828c0(uVar7);
        iVar5 = FUN_00546600(uVar7);
LAB_00635b6d:
        if ((iVar5 < 1) && (local_14 < 1)) goto LAB_00635b7b;
        cVar4 = (**(code **)(*piVar2 + 400))();
        if (cVar4 == '\0') {
          if (puVar1[7] == 1) {
            puVar1[7] = 4;
            local_c = 0;
            cVar4 = FUN_005e4a00(DAT_00b35ec8,0,1,0,&local_c);
            if (((cVar4 == '\0') &&
                (cVar4 = FUN_005e4a00(DAT_00b35ecc,0,1,0,&local_c), cVar4 == '\0')) &&
               (iVar6 = FUN_004d7740(), iVar6 != 0)) goto LAB_00635c47;
          }
          else {
            puVar1[7] = 3;
          }
        }
        else {
          cVar4 = (**(code **)(*param_1 + 0x334))(1);
          if (iVar5 < local_14) {
            if (cVar4 == '\0') {
              puVar1[7] = 5;
            }
            else {
LAB_00635c47:
              bVar3 = false;
            }
          }
          else {
            if (cVar4 != '\0') goto LAB_00635c47;
            puVar1[7] = 4;
          }
        }
        puVar1[2] = iVar5;
        puVar1[3] = local_14;
        if (bVar3) goto LAB_00635c61;
      }
      else {
        cVar4 = (**(code **)(*piVar2 + 0x198))(0);
        if ((cVar4 == '\0') && (cVar4 = FUN_004d7f80(), cVar4 != '\0')) {
          uVar7 = (**(code **)(*param_1 + 0x284))(0x24);
          FUN_005e0430(0x1f);
          uVar7 = FUN_009828c0(uVar7);
          local_10 = (int *)FUN_00546620(uVar7);
          uVar12 = 100;
          uVar11 = 0;
          uVar10 = 0;
          uVar7 = 0;
          fVar9 = (float10)FUN_004d7e90(piVar2,0);
          uVar7 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar9,uVar7,uVar10,uVar11,uVar12);
          uVar7 = (**(code **)(*param_1 + 0x224))(piVar2,0,uVar7);
          uVar7 = FUN_00546190(uVar7);
          (**(code **)(*param_1 + 0x284))(0x24);
          FUN_005e02e0(0);
          cVar4 = FUN_00467560();
          if (cVar4 != '\0') {
            uVar7 = 100;
          }
          uVar10 = (**(code **)(*param_1 + 0x284))(0x24);
          local_14 = FUN_00546640(uVar7,uVar10);
          iVar5 = local_c;
          goto LAB_00635b6d;
        }
LAB_00635b7b:
        cVar4 = FUN_005e3270();
        if ((cVar4 == '\0') &&
           ((cVar4 = (**(code **)(*piVar2 + 400))(), cVar4 != '\0' &&
            (cVar4 = FUN_004d7f80(), cVar4 == '\0')))) {
          iVar5 = (**(code **)(*param_1 + 0x170))();
          iVar6 = FUN_004db6b0();
          if (iVar6 != iVar5) {
            puVar1[7] = 5;
            goto LAB_00635c61;
          }
        }
      }
      FUN_00401f20(puVar1);
    }
    local_10 = (int *)local_10[1];
    piVar2 = local_4;
  } while( true );
}



undefined4
FUN_00635d60(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
  if (param_1 != (int *)0x0) {
    FUN_0062e790(&local_18,param_2,param_3,param_4,param_5,0);
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = 1;
    uVar2 = FUN_006ecc80(1,0,0);
    puVar3 = (undefined4 *)FUN_005e2e20(local_c,local_18,local_14,local_10,uVar2,uVar4,uVar5,uVar6);
    *param_6 = *puVar3;
    param_6[1] = puVar3[1];
    param_6[2] = puVar3[2];
    uVar2 = (**(code **)(*param_1 + 0x174))();
    cVar1 = FUN_008aa390(uVar2);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00635e20(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  (**(code **)(*param_1 + 0x174))();
  FUN_00982c30();
  iVar1 = FUN_009828c0();
  if (*(int *)(*(int *)(in_ECX + 0x1ec) + 0x40) <= iVar1) {
    iVar1 = -1;
  }
  if (iVar1 != *(int *)(in_ECX + 0x1f0)) {
    FUN_006fd5d0(iVar1);
    *(int *)(in_ECX + 0x1f0) = iVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00635f10(int *param_1,int param_2,undefined4 *param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *in_ECX;
  uint uVar14;
  int unaff_EBX;
  int unaff_EBP;
  float10 fVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  code *pcVar22;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  char cStack_c;
  
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  uVar17 = uStack_20;
  uStack_20 = uStack_20 & 0xffffff00;
  if (*(char *)(iVar4 + 0x20) == '\t') {
    iVar6 = *in_ECX;
    uStack_20 = CONCAT31(SUB43(uVar17,1),1);
    uVar5 = FUN_00569e60();
    (**(code **)(iVar6 + 0x484))(uVar5);
  }
  piVar1 = param_1;
  uVar5 = FUN_00566b30(&uStack_18,param_1);
  fVar15 = (float10)FUN_004d7e30(uVar5);
  fStack_1c = (float)fVar15;
  piStack_28 = (int *)0x0;
  if (*(int *)(iVar4 + 0x24) != 0) {
    piStack_28 = (int *)FUN_005697e0();
  }
  if (((int *)in_ECX[0xc] != (int *)0x0) && (in_ECX[0x30] == 0)) {
    piStack_28 = (int *)in_ECX[0xc];
  }
  if (piStack_28 == (int *)0x0) {
LAB_00636453:
    uVar3 = FUN_00566dc0(piVar1,uStack_20,0xbf800000);
    param_1 = (int *)CONCAT31(param_1._1_3_,uVar3);
  }
  else {
    cVar2 = FUN_004d74b0();
    if (cVar2 != '\0') {
      (**(code **)(*piVar1 + 0x174))();
      iVar6 = (**(code **)(*in_ECX + 0x36c))();
      if ((iVar6 == 4) || (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 == 9)) {
        if (((*(uint *)(iVar4 + 0x1c) >> 1 & 1) != 0) && (*(int *)(iVar4 + 0x28) == 0)) {
          in_ECX[0x6b] = 0;
        }
        if ((char)param_3 != '\0') {
          (**(code **)(*in_ECX + 0x188))(piVar1,1);
        }
        (**(code **)(*in_ECX + 0x194))(piVar1);
        return;
      }
      if ((((char)in_ECX[0x34] != '\0') && (in_ECX[0x48] != 0)) &&
         (cVar2 = FUN_004d72c0(0), cVar2 != '\0')) {
        if ((char)param_3 != '\0') {
          (**(code **)(*in_ECX + 0x188))(piVar1,1);
        }
        (**(code **)(*in_ECX + 0x194))(piVar1);
        return;
      }
    }
    piVar7 = (int *)(**(code **)(*piVar1 + 0x380))();
    if ((piStack_28 == piVar7) && (cVar2 = (**(code **)(*piStack_28 + 0x198))(0), cVar2 != '\0')) {
      piVar7 = (int *)(**(code **)(*piVar1 + 0x380))();
      (**(code **)(*piVar7 + 900))(0);
      *(undefined4 *)(piVar7[0x16] + 8) = 0;
      (**(code **)(*in_ECX + 0x178))(0);
      (**(code **)(*piVar1 + 900))(0);
      return;
    }
    cVar2 = FUN_004d74b0();
    if (((cVar2 != '\0') && ((char)in_ECX[0x34] == '\0')) &&
       ((in_ECX[0x48] == 0 && ((char)in_ECX[0x49] != '\x7f')))) {
      *(undefined1 *)(in_ECX + 0x34) = 1;
      *(undefined1 *)(in_ECX + 0x49) = 0x7f;
    }
    cVar2 = FUN_004d74b0();
    if ((cVar2 == '\0') || ((char)in_ECX[0x34] == '\0')) goto LAB_00636453;
    if (in_ECX[0x48] == 0) {
      in_ECX[0x48] = (int)piStack_28;
    }
    if ((char)in_ECX[0x49] == '\x7f') {
      iVar6 = FUN_006ecc80();
      iVar8 = FUN_006ecc80();
      if (iVar6 == iVar8) {
        puVar9 = (uint *)(**(code **)(*piVar1 + 0x174))();
        uStack_18 = *puVar9;
        uStack_14 = puVar9[1];
        piVar7 = in_ECX + 0x4a;
        uStack_10 = puVar9[2];
        param_1 = (int *)0x0;
        cVar2 = FUN_004dbae0(&uStack_18,1,1,piVar7,&param_1);
        if (cVar2 == '\0') {
          fVar15 = (float10)FUN_004d7e90(piVar1,0);
          if ((float10)200.0 < fVar15) {
            param_2 = *in_ECX;
            puVar13 = (undefined4 *)(**(code **)(*(int *)in_ECX[0x48] + 0x174))();
            uVar5 = FUN_004d6670();
            uVar5 = FUN_006ecc80(uVar5);
            cVar2 = (**(code **)(param_2 + 0x3dc))(piVar1,*puVar13,puVar13[1],puVar13[2],uVar5);
            if (cVar2 == '\0') {
              return;
            }
            if (cStack_c != '\0') {
              (**(code **)(*in_ECX + 0x188))(piVar1,1);
            }
            in_ECX[0x48] = 0;
            FUN_006faee0(0);
            *(undefined1 *)((int)in_ECX + 0x136) = 0;
            *piVar7 = DAT_00b3f9a8;
            in_ECX[0x4b] = DAT_00b3f9ac;
            in_ECX[0x4c] = DAT_00b3f9b0;
            pcVar22 = *(code **)(*in_ECX + 0x194);
            *(undefined1 *)(in_ECX + 0x49) = 0x7f;
            (*pcVar22)(piVar1);
            return;
          }
        }
        else if (piVar1 == DAT_00b333c4) {
          (**(code **)(*DAT_00b333c4 + 0x1cc))(piVar7);
          piStack_28 = (int *)((float)*(ushort *)(in_ECX + 0x4d) / 1000.0);
          (**(code **)(*DAT_00b333c4 + 0x1e8))(piStack_28);
          FUN_005e0610(0);
          *(char *)(in_ECX + 0x49) = (char)param_1;
          *(undefined1 *)(in_ECX + 0x34) = 0;
        }
        else {
          iVar6 = *in_ECX;
          uVar5 = FUN_004d6670();
          uVar5 = FUN_006ecc80(uVar5);
          cVar2 = (**(code **)(iVar6 + 0x3dc))(piVar1,*piVar7,in_ECX[0x4b],in_ECX[0x4c],uVar5);
          if (cVar2 == '\0') {
            return;
          }
          *(char *)(in_ECX + 0x49) = (char)param_1;
          if ((int *)in_ECX[0xd] != (int *)0x0) {
            fVar15 = (float10)(**(code **)(*(int *)in_ECX[0xd] + 0x28))(piVar1);
            fStack_1c = (float)fVar15;
          }
        }
      }
    }
    iVar6 = (**(code **)(*in_ECX + 0x36c))();
    if (iVar6 == 0) {
      iVar6 = (**(code **)(*in_ECX + 0x36c))();
      if ((((iVar6 == 0) && ((char)in_ECX[0x49] != '\x7f')) &&
          (cVar2 = FUN_004d72c0((char)in_ECX[0x49]), cVar2 != '\0')) && ((char)in_ECX[0x34] == '\0')
         ) {
        in_ECX[0x48] = 0;
        FUN_006faee0(0);
        *(undefined1 *)((int)in_ECX + 0x136) = 0;
        in_ECX[0x4a] = DAT_00b3f9a8;
        in_ECX[0x4b] = DAT_00b3f9ac;
        pcVar22 = *(code **)(*in_ECX + 0x194);
        in_ECX[0x4c] = DAT_00b3f9b0;
        *(undefined1 *)(in_ECX + 0x49) = 0x7f;
        (*pcVar22)(piVar1);
        (**(code **)(*in_ECX + 0x188))(piVar1,1);
        return;
      }
      goto LAB_00636453;
    }
    param_1 = (int *)CONCAT31(param_1._1_3_,1);
  }
  FUN_005677b0(piVar1,1);
  iStack_24 = FUN_009828c0();
  if ((*(char *)(iVar4 + 0x20) == '\x05') && (iVar6 = FUN_00566a40(piVar1), iVar6 != 0)) {
    FUN_00566a40(piVar1);
    cVar2 = FUN_004c97f0();
    if (cVar2 != '\0') {
      iStack_24 = 0x14;
    }
  }
  if ((in_ECX[0xc] != 0) || ((char)uStack_20 != '\0')) {
    iStack_24 = 10;
  }
  if (((char)param_1 != '\0') || (cVar2 = FUN_0064ada0(), cVar2 != '\0')) {
    if (((*(char *)(iVar4 + 0x20) == '\x03') &&
        (((piStack_28 != (int *)0x0 && (cVar2 = FUN_004d74b0(), cVar2 != '\0')) &&
         ((char)param_1 != '\0')))) && (iVar6 = FUN_005e4400(), iVar6 == 0)) {
      (**(code **)(*in_ECX + 0x188))(piVar1,1);
      (**(code **)(*in_ECX + 0x194))(piVar1);
      return;
    }
    if (in_ECX[0x73] != 0) {
      FUN_00607b90(piStack_28,1);
      in_ECX[0x73] = 0;
    }
    if (((piStack_28 != (int *)0x0) && (cVar2 = FUN_004d74b0(), cVar2 != '\0')) &&
       ((*(char *)(iVar4 + 0x20) != '\x05' && ((char)param_1 != '\0')))) {
      if (in_ECX[0x48] == 0) {
        in_ECX[0x48] = (int)piStack_28;
      }
      iVar6 = FUN_006ecc80();
      iVar8 = FUN_006ecc80();
      if (iVar6 != iVar8) {
        return;
      }
      iVar6 = (**(code **)(*in_ECX + 0x36c))();
      if ((iVar6 != 4) && (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 != 9)) {
        cVar2 = (**(code **)(*in_ECX + 0x1b4))(piVar1);
        if (cVar2 != '\0') {
          return;
        }
        (**(code **)(*in_ECX + 0x188))(piVar1,1);
        pcVar22 = *(code **)(*in_ECX + 0x194);
        in_ECX[0xc] = 0;
        (*pcVar22)(piVar1);
        return;
      }
      if (((*(uint *)(iVar4 + 0x1c) >> 1 & 1) != 0) && (*(int *)(iVar4 + 0x28) == 0)) {
        in_ECX[0x6b] = 0;
      }
      if ((char)param_3 != '\0') {
        (**(code **)(*in_ECX + 0x188))(piVar1,1);
      }
      (**(code **)(*in_ECX + 0x194))(piVar1);
      return;
    }
    uVar3 = FUN_0064ada0();
    param_2 = CONCAT31(param_2._1_3_,uVar3);
    (**(code **)(*in_ECX + 0x194))(piVar1);
    if ((((char)param_1 == '\0') &&
        (((piStack_28 != (int *)0x0 &&
          (iVar6 = (**(code **)(*piStack_28 + 0x170))(), iVar6 == DAT_00b35eb0)) ||
         ((*(int *)(iVar4 + 0x24) != 0 && (iVar6 = FUN_00569740(), iVar6 == 3)))))) &&
       (((cVar2 = FUN_0064ada0(), cVar2 == '\0' &&
         (iVar6 = (**(code **)(*piVar1 + 0x18c))(), iVar6 == 0)) &&
        (cVar2 = (**(code **)(*in_ECX + 0x4dc))(), cVar2 == '\0')))) {
      if (piStack_28 == (int *)0x0) {
        iVar6 = (**(code **)(*piVar1 + 0xf0))(&uStack_10);
        param_1 = *(int **)(iVar6 + 8);
      }
      else {
        param_1 = (int *)piStack_28[10];
      }
      if (0.0 <= (float)param_1) {
        if (!NAN((float)param_1) && 6.2831855 < (float)param_1 != ((float)param_1 == 6.2831855)) {
          fVar15 = (float10)FUN_00982bfa();
          param_1 = (int *)(float)fVar15;
        }
      }
      else {
        fVar15 = (float10)FUN_00982bfa();
        param_1 = (int *)((float)fVar15 + 6.2831855);
      }
      fVar15 = (float10)FUN_00683d80(piVar1,param_1,&stack0x00000000);
      param_3 = (undefined4 *)((float)_DAT_00b36c18 * 0.017453292);
      if ((float)param_3 < ABS((float)fVar15)) {
        FUN_00685530(piVar1,param_1,1);
        return;
      }
      FUN_005e05f0(0x30);
    }
    cVar2 = FUN_0064ada0();
    if (((cVar2 == '\0') ||
        (((*(uint *)(iVar4 + 0x1c) >> 1 & 1) == 0 &&
         (((*(uint *)(iVar4 + 0x1c) >> 2 & 1) == 0 || (*(char *)(iVar4 + 0x20) != '\x06')))))) &&
       ((char)param_2 != '\0')) {
      (**(code **)(*in_ECX + 0x188))(piVar1,1);
    }
    if ((((*(uint *)(iVar4 + 0x1c) >> 1 & 1) != 0) && (cVar2 = FUN_00565df0(), cVar2 == '\0')) &&
       (*(int *)(iVar4 + 0x28) == 0)) {
      in_ECX[0x6b] = 0;
    }
    cVar2 = FUN_00565df0();
    if ((cVar2 != '\0') &&
       (((iVar4 == -0x2c || (*(int *)(iVar4 + 0x30) == 0)) && (*(char *)(iVar4 + 0x20) == '\x06'))))
    {
      uVar5 = FUN_00402ba0();
      FUN_0041ffc0(iVar4,uVar5);
    }
    if ((char)in_ECX[0x21] == '\0') {
      cVar2 = FUN_00565dd0();
      if (cVar2 != '\0') {
        pcVar22 = FUN_00645a30;
        uVar19 = 0x459c4000;
        piVar7 = piVar1;
        uVar5 = (**(code **)(*piVar1 + 0x174))(0x459c4000,FUN_00645a30,piVar1);
        uVar16 = 0x459c4000;
        uVar10 = (**(code **)(*piVar1 + 0x174))(0x459c4000,uVar5);
        uVar12 = FUN_006ecc80(uVar10);
        FUN_00446b90(uVar12,uVar10,uVar16,uVar5,uVar19,pcVar22,piVar7);
      }
      *(undefined1 *)(in_ECX + 0x21) = 1;
    }
    cVar2 = FUN_00565de0();
    if (cVar2 != '\0') {
      pcVar22 = FUN_00645af0;
      uVar19 = 0x459c4000;
      piVar7 = piVar1;
      uVar5 = (**(code **)(*piVar1 + 0x174))(0x459c4000,FUN_00645af0,piVar1);
      uVar16 = 0x459c4000;
      uVar10 = (**(code **)(*piVar1 + 0x174))(0x459c4000,uVar5);
      uVar12 = FUN_006ecc80(uVar10);
      FUN_00446b90(uVar12,uVar10,uVar16,uVar5,uVar19,pcVar22,piVar7);
    }
    if (*(char *)((int)in_ECX + 0x169) != '\0') {
      return;
    }
    if (((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) == 0) && ((*(uint *)(iVar4 + 0x1c) >> 0x15 & 1) == 0)
       ) {
      return;
    }
    *(undefined1 *)((int)in_ECX + 0x169) = 1;
    if ((*(uint *)(iVar4 + 0x1c) >> 0x14 & 1) != 0) {
      iVar4 = (**(code **)(*piVar1 + 0x170))();
      iVar8 = 0;
      iVar6 = 0;
      if (*(char *)(iVar4 + 4) == '#') {
        iVar8 = (**(code **)(*piVar1 + 0x170))();
      }
      else if (*(char *)(iVar4 + 4) == '$') {
        iVar6 = (**(code **)(*piVar1 + 0x170))();
      }
      param_1 = (int *)CONCAT31(param_1._1_3_,1);
      param_2 = CONCAT31(param_2._1_3_,1);
      if (in_ECX[2] != 0) {
        uVar17 = *(uint *)(in_ECX[2] + 0x1c);
        if ((uVar17 >> 0x14 & 1) != 0) {
          param_1 = (int *)((uint)param_1._1_3_ << 8);
        }
        if ((uVar17 >> 0x15 & 1) != 0) {
          param_2 = (uint)param_2._1_3_ << 8;
        }
      }
      if (iVar8 == 0) {
        if (iVar6 == 0) {
          return;
        }
        FUN_0051e240(piVar1,param_1,param_2,1);
        return;
      }
      FUN_005227a0(piVar1,param_1,param_2,0,1);
      return;
    }
    puVar13 = (undefined4 *)(**(code **)(*in_ECX + 0xec))(1);
    if (puVar13 != (undefined4 *)0x0) {
      FUN_005f2e70(puVar13[2],1,*(undefined4 *)*puVar13,0,0,0);
    }
    puVar13 = (undefined4 *)(**(code **)(*in_ECX + 0xf4))(1);
    if (puVar13 == (undefined4 *)0x0) {
      return;
    }
    uVar5 = *(undefined4 *)*puVar13;
    uVar10 = puVar13[2];
    uVar20 = 0;
    uVar19 = 0;
    uVar16 = 0;
    uVar12 = FUN_004b2460(uVar5,0,0,0);
    FUN_005f2e70(uVar10,uVar12,uVar5,uVar16,uVar19,uVar20);
    return;
  }
  if (((char)param_2 == '\0') &&
     ((((char)in_ECX[0x34] == '\0' ||
       (cVar2 = FUN_00566dc0(piVar1,uStack_20,0xbf800000), cVar2 != '\0')) ||
      (cVar2 = FUN_0064ada0(), cVar2 != '\0')))) goto LAB_0063670c;
  iVar6 = (**(code **)(*piVar1 + 0x380))();
  if ((iVar6 == 0) &&
     ((iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 == 4 ||
      (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 == 9)))) {
    (**(code **)(*piVar1 + 800))();
    return;
  }
  if (piStack_28 == (int *)0x0) {
LAB_006366b8:
    param_3 = (undefined4 *)*in_ECX;
    puVar9 = (uint *)FUN_00566b30(&uStack_18,piVar1);
    uVar5 = FUN_00566940(piVar1);
    uVar10 = FUN_00566a40(piVar1);
    uVar17 = *puVar9;
    uVar18 = puVar9[1];
    uVar14 = puVar9[2];
  }
  else {
    cVar2 = FUN_004d74b0();
    if (cVar2 != '\0') {
      puVar9 = (uint *)(**(code **)(*piVar1 + 0x174))();
      uStack_18 = *puVar9;
      uStack_14 = puVar9[1];
      uStack_10 = puVar9[2];
      param_3 = (undefined4 *)0x0;
      cVar2 = FUN_004dbae0(&uStack_18,1,1,in_ECX + 0x4a,&param_3);
      if (cVar2 == '\0') {
        (**(code **)(*in_ECX + 0x194))(piVar1);
        iVar6 = *in_ECX;
        iVar4 = FUN_00673980(*(undefined4 *)(iVar4 + 0x18));
        (**(code **)(iVar6 + 0x17c))(iVar4 + -1);
        return;
      }
      param_2 = *in_ECX;
      uVar5 = FUN_00566940(piVar1);
      uVar10 = FUN_00566a40(piVar1);
      cVar2 = (**(code **)(param_2 + 0x3dc))
                        (piVar1,in_ECX[0x4a],in_ECX[0x4b],in_ECX[0x4c],uVar10,uVar5);
      if (cVar2 == '\0') {
        return;
      }
      in_ECX[0x48] = (int)piStack_28;
      *(char *)(in_ECX + 0x49) = (char)param_3;
      if ((int *)in_ECX[0xd] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0xd] + 0x28))(piVar1);
      }
      goto LAB_0063670c;
    }
    piVar7 = (int *)(**(code **)(*piVar1 + 0x380))();
    if (piStack_28 != piVar7) goto LAB_006366b8;
    (**(code **)(*piVar1 + 0x380))();
    FUN_00625290(&uStack_18);
    param_3 = (undefined4 *)*in_ECX;
    uVar5 = FUN_004d6670();
    uVar10 = FUN_006ecc80(uVar5);
    uVar14 = uStack_10;
    uVar17 = uStack_18;
    uVar18 = uStack_14;
  }
  cVar2 = (*(code *)param_3[0xf7])(piVar1,uVar17,uVar18,uVar14,uVar10,uVar5);
  if (cVar2 == '\0') {
    return;
  }
LAB_0063670c:
  cVar2 = FUN_0064ada0();
  if (((cVar2 != '\0') && ((*(uint *)(iVar4 + 0x1c) >> 1 & 1) == 0)) &&
     ((*(uint *)(iVar4 + 0x1c) >> 2 & 1) == 0)) {
    iVar6 = *in_ECX;
    iVar4 = FUN_00673980(*(undefined4 *)(iVar4 + 0x18));
    (**(code **)(iVar6 + 0x17c))(iVar4 + -1);
    return;
  }
  if (((*(int *)(iVar4 + 0x24) != 0) && (piVar7 = (int *)FUN_005697e0(), piVar7 != (int *)0x0)) &&
     (cVar2 = (**(code **)(*piVar7 + 400))(), cVar2 != '\0')) {
    if (*(char *)(iVar4 + 0x20) == '\x16') {
      cVar2 = FUN_005e3290();
      if (((cVar2 != '\0') && (fVar15 = (float10)FUN_004d7e90(piVar7,0), fVar15 < (float10)80.0)) &&
         ((iVar6 = (**(code **)(*in_ECX + 0x410))(), iVar6 != 0 &&
          (cVar2 = FUN_00683aa0(), cVar2 != '\0')))) {
        FUN_00625290(&uStack_18);
        fVar15 = (float10)FUN_004d7e30(&uStack_18);
        if ((float10)80.0 < fVar15) {
          (**(code **)(*piVar1 + 0x1cc))(&uStack_18);
          return;
        }
      }
    }
    else {
      uVar5 = (**(code **)(*piVar7 + 0x174))();
      FUN_004121a0(&uStack_18,uVar5);
      fVar15 = (float10)FUN_00404c90();
      param_3 = (undefined4 *)(float)fVar15;
      pfVar11 = (float *)FUN_00403c00();
      if ((*pfVar11 < (float)param_3) ||
         (((float)iStack_24 < fStack_1c && ((char)in_ECX[0x34] != '\0')))) {
        param_2 = *in_ECX;
        param_3 = (undefined4 *)(**(code **)(*piVar7 + 0x174))();
        uVar5 = FUN_004d6670();
        uVar5 = FUN_006ecc80(uVar5);
        cVar2 = (**(code **)(param_2 + 0x3dc))(piVar1,*param_3,param_3[1],param_3[2],uVar5);
        if (cVar2 == '\0') {
          return;
        }
        piVar7 = (int *)(**(code **)(*piVar7 + 0x174))();
        in_ECX[0x35] = *piVar7;
        in_ECX[0x36] = piVar7[1];
        in_ECX[0x37] = piVar7[2];
      }
    }
  }
  iVar6 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar6 != 0) &&
     ((iVar6 = (**(code **)(*piVar1 + 0x380))(), iVar6 == 0 ||
      (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 != 4)))) {
    if ((piStack_28 != (int *)0x0) && (cVar2 = FUN_004d74b0(), cVar2 != '\0')) {
      return;
    }
    (**(code **)(*piVar1 + 800))();
    return;
  }
  if ((*(uint *)(iVar4 + 0x1c) >> 0xd & 1) == 0) {
    iVar4 = param_4;
    if (param_4 == -1) {
      param_3 = (undefined4 *)0x0;
      if ((in_ECX[2] != 0) &&
         ((cVar2 = *(char *)(in_ECX[2] + 0x20), cVar2 == '\x0f' || (cVar2 == '\f')))) {
        param_3 = (undefined4 *)0x1;
      }
      uVar5 = param_3;
      param_3 = (undefined4 *)(iStack_24 * 2);
      iVar4 = FUN_00629f40(piVar1,fStack_1c,(float)iStack_24,(float)(int)param_3,uVar5,1);
    }
  }
  else {
    iVar4 = 0x201;
  }
  (**(code **)(*in_ECX + 0x238))(piVar1,iVar4);
  FUN_00566b30(&uStack_20,piVar1);
  if ((unaff_EBP != 0) && (iVar4 = (**(code **)(*piVar1 + 0x380))(), unaff_EBP == iVar4)) {
    (**(code **)(*piVar1 + 0x380))();
    puVar9 = (uint *)FUN_00625290(&uStack_14);
    uStack_20 = *puVar9;
    fStack_1c = (float)puVar9[1];
    uStack_18 = puVar9[2];
  }
  fVar21 = (float)unaff_EBX;
  iVar4 = *in_ECX;
  uVar5 = FUN_00566940(piVar1);
  uVar10 = FUN_00566a40(piVar1);
  (**(code **)(iVar4 + 0x414))(piVar1,&uStack_20,uVar10,uVar5,fVar21);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00636fd0(int *param_1,char param_2)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int *piVar12;
  int *in_ECX;
  undefined3 unaff_EBX;
  int unaff_EBP;
  float fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 extraout_ST0;
  int unaff_retaddr;
  float fVar16;
  undefined4 uVar17;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  undefined8 uStack_1c;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  fVar14 = (float10)FUN_00572ea0(2);
  if ((float10)0.0 < fVar14) {
    return 0;
  }
  iVar5 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar5 != 4) && (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 != 0)) {
    return 0;
  }
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  uStack_1c = (double)CONCAT44(uStack_1c._4_4_,iVar5);
  cVar2 = FUN_0041fb20();
  if ((in_ECX[0xb] == 0) || ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0)) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  piVar12 = (int *)in_ECX[0xb];
  if (piVar12 == (int *)0x0) goto LAB_0063848f;
  uVar6 = (uint)piVar12[2] >> 5;
  if (((uVar6 & 1) != 0) || (((uint)piVar12[2] >> 0xb & 1) != 0)) {
    if ((uVar6 & 1) != 0) {
      FUN_00566870(piVar12,1);
    }
LAB_0063848d:
    if (param_2 == '\0') {
      return 0;
    }
LAB_0063848f:
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    return 0;
  }
  cVar3 = (**(code **)(*piVar12 + 0x198))(1);
  if ((cVar3 != '\0') && (in_ECX[0x11] == 0)) {
    FUN_00566870(in_ECX[0xb],1);
    if ((*(uint *)(iVar5 + 0x1c) >> 0xc & 1) != 0) {
      return 0;
    }
    (**(code **)(*param_1 + 0x2f8))(in_ECX[0xb]);
    return 0;
  }
  if ((((in_ECX[0xb] == DAT_00b333c4) && (*(char *)(iVar5 + 0x20) == '\x12')) &&
      (cVar3 = (**(code **)(*in_ECX + 0x1cc))(), cVar3 != '\0')) &&
     ((fVar14 = (float10)FUN_004d7e90(param_1,0), (float10)800.0 < fVar14 &&
      (cVar3 = FUN_005e05b0(), cVar3 != '\0')))) {
    uVar7 = FUN_00566b30(&uStack_10,param_1);
    fVar14 = (float10)FUN_004d7e30(uVar7);
    if ((unaff_retaddr != 0) && (600.0 < (float)fVar14)) {
      FUN_005eae70();
      return 0;
    }
  }
  iVar8 = FUN_00566d00(param_1);
  if ((((iVar8 != 0) && (cVar3 = FUN_004d74b0(), cVar3 != '\0')) ||
      (iVar9 = (**(code **)(*param_1 + 0x18c))(), iVar9 == 4)) &&
     ((iVar9 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(), iVar9 == DAT_00b35eb0 ||
      (iVar9 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(), iVar9 == DAT_00b35eac)))) {
    (**(code **)(*in_ECX + 0x484))(iVar8);
    return 1;
  }
  if (*(char *)(iVar5 + 0x20) == '\t') {
    uVar7 = FUN_00566b30(&uStack_10,param_1);
    FUN_004d7e30(uVar7);
    iVar5 = FUN_009828c0();
    iVar8 = FUN_00566db0();
    uStack_1c = (double)CONCAT44(uStack_1c._4_4_,iVar8);
    fVar13 = (float)iVar8;
    if (iVar8 < 0) {
      fVar13 = fVar13 + 4.2949673e+09;
    }
    if (fVar13 + 300.0 < (float)iVar5) {
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
    }
  }
  if ((in_ECX[0xb] == 0) || (cVar3 = FUN_004d74d0(), cVar3 == '\0')) {
    iStack_28 = 0;
  }
  else {
    iStack_28 = in_ECX[0xb];
  }
  uVar7 = FUN_004d7630();
  uStack_1c = (double)CONCAT44(uStack_1c._4_4_,uVar7);
  cVar4 = '\0';
  cVar3 = FUN_004d74b0();
  if (cVar3 != '\0') {
    if (in_ECX[0x48] == 0) {
      in_ECX[0x48] = in_ECX[0xb];
      *(undefined1 *)(in_ECX + 0x49) = 0x7f;
    }
    iVar5 = (**(code **)(*in_ECX + 0x36c))();
    if ((iVar5 != 0) && (iVar5 = (**(code **)(*param_1 + 0x380))(), iVar5 == 0)) {
      cVar4 = '\x01';
    }
    if ((((in_ECX[0x48] != 0) && (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 0)) &&
        (cVar3 = FUN_004d72c0((char)in_ECX[0x49]), cVar3 != '\0')) && ((char)in_ECX[0x34] == '\0'))
    {
      in_ECX[0x48] = 0;
      FUN_006faee0(0);
      *(undefined1 *)((int)in_ECX + 0x136) = 0;
      in_ECX[0x4a] = DAT_00b3f9a8;
      in_ECX[0x4b] = DAT_00b3f9ac;
      in_ECX[0x4c] = DAT_00b3f9b0;
      pcVar1 = *(code **)(*in_ECX + 0x194);
      *(undefined1 *)(in_ECX + 0x49) = 0x7f;
      (*pcVar1)(param_1);
      in_ECX[0xb] = 0;
      return 0;
    }
    puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_10 = *puVar10;
    uStack_c = puVar10[1];
    uStack_8 = puVar10[2];
    fStack_24 = 0.0;
    if ((char)in_ECX[0x49] == '\x7f') {
      iVar5 = FUN_006ecc80();
      iVar8 = FUN_006ecc80();
      if (iVar5 == iVar8) {
        piVar12 = in_ECX + 0x4a;
        cVar3 = FUN_004dbae0(&uStack_10,1,1,piVar12,&fStack_24);
        if (cVar3 == '\0') {
          in_ECX[0x48] = 0;
          FUN_006faee0(0);
          *(undefined1 *)((int)in_ECX + 0x136) = 0;
          *piVar12 = DAT_00b3f9a8;
          in_ECX[0x4b] = DAT_00b3f9ac;
          in_ECX[0x4c] = DAT_00b3f9b0;
          pcVar1 = *(code **)(*in_ECX + 0x194);
          *(undefined1 *)(in_ECX + 0x49) = 0x7f;
          (*pcVar1)(param_1);
          in_ECX[0xb] = 0;
          goto LAB_0063848d;
        }
        iVar5 = *in_ECX;
        in_ECX[0x48] = in_ECX[0xb];
        uVar7 = FUN_004d6670();
        uVar7 = FUN_006ecc80(uVar7);
        cVar3 = (**(code **)(iVar5 + 0x3dc))(param_1,*piVar12,in_ECX[0x4b],in_ECX[0x4c],uVar7);
        if (cVar3 == '\0') {
          return 0;
        }
        *(undefined1 *)(in_ECX + 0x49) = fStack_24._0_1_;
        if ((int *)in_ECX[0xd] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[0xd] + 0x28))(param_1);
        }
      }
    }
  }
  fVar13 = fStack_20;
  if ((*(char *)((int)fStack_20 + 0x20) == '\b') && (cVar2 != '\0')) {
    cVar4 = '\x01';
  }
  else if ((float)uStack_1c == 0.0) {
    if (cVar4 == '\0') {
      cVar4 = FUN_005687d0(param_1);
    }
  }
  else {
    uVar7 = (**(code **)(*param_1 + 0x174))();
    puVar10 = &uStack_10;
    FUN_004d76f0(puVar10,uVar7);
    FUN_004121a0(puVar10,uVar7);
    fVar14 = (float10)FUN_00404c90();
    if (fVar14 <= (float10)DAT_00b36b28) {
      cVar4 = '\x01';
    }
  }
  cVar3 = FUN_0064ada0();
  if ((cVar4 == '\0') && (cVar3 == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x380))();
    if ((iVar5 == 0) &&
       ((iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 4 ||
        (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 9)))) {
LAB_00637531:
      (**(code **)(*param_1 + 800))();
      return 1;
    }
    uVar7 = (**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    FUN_004121a0(&uStack_10,uVar7);
    fVar14 = (float10)FUN_00404c90();
    if ((char)in_ECX[0x34] == '\0') {
      pfVar11 = (float *)FUN_00403c00();
      uStack_1c = (double)*pfVar11;
      fVar15 = (float10)FUN_005677b0(param_1,1);
      if (fVar15 * (float10)0.75 <= (float10)uStack_1c) {
        FUN_005677b0(param_1,1);
        fVar15 = extraout_ST0 * (float10)0.75;
      }
      else {
        pfVar11 = (float *)FUN_00403c00();
        fVar15 = (float10)*pfVar11;
      }
      if ((float10)(float)fVar14 <= fVar15) goto LAB_0063780f;
    }
    iVar5 = FUN_004d7630();
    if (iVar5 == 0) {
      cVar2 = FUN_004d74b0();
      if (cVar2 == '\0') {
        if (iStack_28 == 0) {
          iVar5 = *in_ECX;
          puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
          uVar7 = FUN_004d6670();
          uVar7 = FUN_006ecc80(uVar7);
          cVar2 = (**(code **)(iVar5 + 0x3dc))(param_1,*puVar10,puVar10[1],puVar10[2],uVar7);
          if (cVar2 == '\0') {
            return 0;
          }
        }
        else {
          FUN_00625290(&uStack_10);
          iVar5 = *in_ECX;
          uVar7 = FUN_004d6670();
          uVar7 = FUN_006ecc80(uVar7);
          cVar2 = (**(code **)(iVar5 + 0x3dc))(param_1,uStack_10,uStack_c,uStack_8,uVar7);
          if (cVar2 == '\0') {
            return 0;
          }
        }
      }
      else {
        puVar10 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
        uStack_10 = *puVar10;
        uStack_c = puVar10[1];
        piVar12 = in_ECX + 0x4a;
        uStack_8 = puVar10[2];
        cVar2 = FUN_004dbae0(&uStack_10,1,1,piVar12,&stack0x00000000);
        if (cVar2 == '\0') {
          in_ECX[0x48] = 0;
          FUN_006faee0(0);
          *(undefined1 *)((int)in_ECX + 0x136) = 0;
          *piVar12 = DAT_00b3f9a8;
          in_ECX[0x4b] = DAT_00b3f9ac;
          in_ECX[0x4c] = DAT_00b3f9b0;
          pcVar1 = *(code **)(*in_ECX + 0x194);
          *(undefined1 *)(in_ECX + 0x49) = 0x7f;
          (*pcVar1)(param_1);
          in_ECX[0xb] = 0;
          goto LAB_0063848d;
        }
        iVar5 = *in_ECX;
        uVar7 = FUN_004d6670();
        uVar7 = FUN_006ecc80(uVar7);
        cVar2 = (**(code **)(iVar5 + 0x3dc))(param_1,*piVar12,in_ECX[0x4b],in_ECX[0x4c],uVar7);
        if (cVar2 == '\0') {
          return 0;
        }
        *(undefined1 *)(in_ECX + 0x49) = uStack_1c._4_1_;
        if ((int *)in_ECX[0xd] != (int *)0x0) {
          (**(code **)(*(int *)in_ECX[0xd] + 0x28))(param_1);
        }
      }
    }
    else {
      iVar5 = *in_ECX;
      puVar10 = (undefined4 *)FUN_004d76f0();
      uVar7 = FUN_004d6670();
      uVar7 = FUN_006ecc80(uVar7);
      cVar2 = (**(code **)(iVar5 + 0x3dc))(param_1,*puVar10,puVar10[1],puVar10[2],uVar7);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    piVar12 = (int *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    in_ECX[0x35] = *piVar12;
    in_ECX[0x36] = piVar12[1];
    in_ECX[0x37] = piVar12[2];
    fVar13 = fStack_20;
LAB_0063780f:
    if ((char)in_ECX[0x34] != '\0') {
      return 0;
    }
    uVar7 = 0x101;
    if ((((((char)param_1[0x32] != '\0') || ((*(uint *)((int)fVar13 + 0x1c) >> 0xd & 1) != 0)) ||
         (cVar2 = (**(code **)(*param_1 + 0x334))(1), cVar2 != '\0')) ||
        (*(char *)((int)fVar13 + 0x20) == '\x0f')) ||
       ((in_ECX[2] != 0 && (*(char *)(in_ECX[2] + 0x20) == '\f')))) {
      uVar7 = 0x201;
    }
    if (*(char *)((int)param_1 + 0xc9) != '\0') {
      (**(code **)(*in_ECX + 0x2c4))(0x400,1);
    }
    (**(code **)(*in_ECX + 0x238))(param_1,uVar7);
    pfVar11 = (float *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
    fStack_24 = *pfVar11;
    fStack_20 = pfVar11[1];
    uStack_1c._0_4_ = pfVar11[2];
    if (unaff_EBP != 0) {
      pfVar11 = (float *)FUN_00625290((int)&uStack_1c + 4);
      fStack_24 = *pfVar11;
      fStack_20 = pfVar11[1];
      uStack_1c._0_4_ = pfVar11[2];
    }
    iVar5 = *in_ECX;
    fVar14 = (float10)FUN_005677b0(param_1,2);
    uVar7 = FUN_004d6670((float)fVar14);
    uVar7 = FUN_006ecc80(uVar7);
    (**(code **)(iVar5 + 0x414))(param_1,&fStack_24,uVar7);
    return 0;
  }
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
  if ((iVar5 == DAT_00b35eb0) && (cVar4 = FUN_0064ada0(), cVar4 == '\0')) {
    fVar16 = *(float *)(in_ECX[0xb] + 0x28);
    if (0.0 <= fVar16) {
      if (!NAN(fVar16) && 6.2831855 < fVar16 != (fVar16 == 6.2831855)) {
        fVar14 = (float10)FUN_00982bfa();
        fVar16 = (float)fVar14;
      }
    }
    else {
      fVar14 = (float10)FUN_00982bfa();
      fVar16 = (float)fVar14 + 6.2831855;
    }
    uStack_1c = (double)((ulonglong)uStack_1c & 0xffffffff00000000);
    fVar14 = (float10)FUN_00683d80(param_1,fVar16,&uStack_1c);
    fStack_20 = (float)_DAT_00b36c18 * 0.017453292;
    if (fStack_20 < ABS((float)fVar14)) {
      FUN_00685530(param_1,fVar16,1);
      return 1;
    }
    FUN_005e05f0(0x30);
  }
  if ((((int *)in_ECX[0xb] != param_1) &&
      (cVar4 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar4 != '\0')) &&
     (iVar5 = (**(code **)(*param_1 + 0x18c))(), iVar5 != 4)) {
    iVar5 = (**(code **)(*param_1 + 0x380))();
    if ((iVar5 == 0) && (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 9)) goto LAB_00637531;
    piVar12 = (int *)in_ECX[0xb];
    uVar7 = (**(code **)(*param_1 + 0x174))();
    puVar10 = &uStack_10;
    (**(code **)(*piVar12 + 0x174))(puVar10,uVar7);
    FUN_004121a0(puVar10,uVar7);
    fVar14 = (float10)FUN_00683cb0(&uStack_10);
    fStack_20 = (float)fVar14;
    uStack_1c = (double)((ulonglong)uStack_1c & 0xffffffff00000000);
    fVar14 = (float10)FUN_00683d80(param_1,fStack_20,&uStack_1c);
    iVar5 = _DAT_00b36c10;
    fStack_24 = (float)fVar14;
    cVar4 = FUN_005e0590();
    if (cVar4 != '\0') {
      iVar5 = _DAT_00b36c18;
    }
    fStack_24 = ABS(fStack_24);
    if ((float)iVar5 * 0.017453292 < fStack_24) {
      FUN_00685530(param_1,fStack_20,1);
      return 1;
    }
    FUN_005e05f0(0x30);
  }
  if (((in_ECX[2] != 0) && (*(char *)(in_ECX[2] + 0x20) == '\x12')) &&
     (cVar4 = FUN_0064ada0(), cVar4 != '\0')) goto LAB_00637e9c;
  if (cVar2 == '\0') {
    if (cVar3 != '\0') {
      if ((*(uint *)((int)fVar13 + 0x1c) >> 2 & 1) == 0) {
        if ((((*(char *)((int)fVar13 + 0x20) == '\x02') && ((int *)in_ECX[0xb] != (int *)0x0)) &&
            (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) &&
           (iVar5 = in_ECX[0xb], iVar5 != 0)) {
          (**(code **)(**(int **)(iVar5 + 0x58) + 0x188))(iVar5,1);
        }
        goto LAB_00638438;
      }
      goto LAB_0063815d;
    }
    cVar2 = FUN_004d74b0();
    if (cVar2 == '\0') {
      if (in_ECX[0x11] != 0) {
        iVar5 = (**(code **)(*param_1 + 0x164))();
        if (*(char *)((int)in_ECX + 0x25d) != '\0') {
          if ((iVar5 == 0) || (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
            cVar2 = FUN_004dd260(param_1,0,*(undefined4 *)(in_ECX[0x11] + 4),
                                 *(undefined4 *)(in_ECX[0x11] + 0x10));
            if (cVar2 != '\0') {
              if ((in_ECX[0x11] != 0) && (in_ECX[0xe] <= *(int *)(in_ECX[0x11] + 0x10))) {
                (**(code **)(*in_ECX + 0x188))(param_1,1);
              }
              if (in_ECX[0x11] != 0) {
                FUN_00401f20(in_ECX[0x11]);
              }
              in_ECX[0x11] = 0;
            }
            pcVar1 = *(code **)(*in_ECX + 0x49c);
            in_ECX[0xb] = 0;
            *(undefined1 *)((int)in_ECX + 0x25d) = 0;
            (*pcVar1)();
          }
          goto LAB_00638438;
        }
        goto LAB_00637fb6;
      }
      if (*(char *)((int)fVar13 + 0x20) == '\a') {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        (**(code **)(*in_ECX + 0x194))(param_1);
        return 1;
      }
      cVar2 = FUN_004d7f80();
      if (cVar2 == '\0') {
        iVar5 = (**(code **)(*param_1 + 0x164))();
        if (*(char *)((int)in_ECX + 0x25d) == '\0') {
          pcVar1 = *(code **)(*in_ECX + 0x594);
          *(undefined1 *)((int)in_ECX + 0x25d) = 1;
          (*pcVar1)(param_1);
          if (CONCAT13(cVar3,unaff_EBX) == 0) {
            piVar12 = (int *)in_ECX[0xb];
            uVar7 = (**(code **)(*piVar12 + 0x170))(piVar12);
            FUN_006286e0(param_1,uVar7,piVar12);
          }
          (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
          return 0;
        }
        if ((iVar5 != 0) && (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
          (**(code **)(*in_ECX + 0x49c))();
          FUN_004dd260(param_1,0,0,1);
          *(undefined1 *)((int)in_ECX + 0x25d) = 0;
        }
      }
      else {
        iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))();
        if (((iVar5 == 0) || (iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))(), iVar5 == 4)) ||
           (iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))(), iVar5 == 9)) {
          FUN_004dd260(param_1,0,0,1);
        }
      }
      goto LAB_00638438;
    }
    iVar5 = (**(code **)(*in_ECX + 0x36c))();
    if ((iVar5 == 4) || (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 9)) goto LAB_00637dfa;
  }
  else {
    cVar2 = FUN_004d7f80();
    if (((cVar2 == '\0') || (iVar5 = in_ECX[0xb], iVar5 == 0)) || (iVar5 != DAT_00b333c4)) {
      if (cVar3 != '\0') goto LAB_00637f41;
    }
    else {
      if (cVar3 != '\0') {
LAB_00637f41:
        if ((*(uint *)((int)fVar13 + 0x1c) >> 2 & 1) != 0) {
          iVar5 = *in_ECX;
          puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
          uVar7 = FUN_004d6670();
          uVar7 = FUN_006ecc80(uVar7);
          (**(code **)(iVar5 + 0x3dc))(param_1,*puVar10,puVar10[1],puVar10[2],uVar7);
          return 0;
        }
        if (*(char *)((int)fVar13 + 0x20) == '\x02') {
          if ((((int *)in_ECX[0xb] != (int *)0x0) &&
              (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) &&
             (iVar5 = in_ECX[0xb], iVar5 != 0)) {
            (**(code **)(**(int **)(iVar5 + 0x58) + 0x188))(iVar5,1);
            return 1;
          }
        }
        else if (cVar3 == '\0') {
          iVar5 = (**(code **)(*param_1 + 0x164))();
          if (*(char *)((int)in_ECX + 0x25d) == '\0') {
LAB_00637fb6:
            pcVar1 = *(code **)(*in_ECX + 0x594);
            *(undefined1 *)((int)in_ECX + 0x25d) = 1;
            (*pcVar1)(param_1);
            piVar12 = (int *)in_ECX[0xb];
            uVar7 = (**(code **)(*piVar12 + 0x170))(piVar12);
            FUN_006286e0(param_1,uVar7,piVar12);
            (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
            return 0;
          }
          if (((iVar5 == 0) || (cVar2 = FUN_00472ea0(), cVar2 != '\0')) &&
             (iVar5 = in_ECX[0x11], iVar5 != 0)) {
            cVar2 = FUN_004dd260(param_1,0,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0x10))
            ;
            if (cVar2 != '\0') {
              if (in_ECX[0x11] == 0) {
                in_ECX[0xe] = in_ECX[0xe] + -1;
              }
              else {
                if (in_ECX[0xe] <= *(int *)(in_ECX[0x11] + 0x10)) {
                  (**(code **)(*in_ECX + 0x188))(param_1,1);
                }
                if (in_ECX[0x11] != 0) {
                  FUN_00401f20(in_ECX[0x11]);
                }
              }
              in_ECX[0x11] = 0;
            }
            pcVar1 = *(code **)(*in_ECX + 0x49c);
            in_ECX[0xb] = 0;
            *(undefined1 *)((int)in_ECX + 0x25d) = 0;
            (*pcVar1)();
            iVar5 = in_ECX[0x11];
            if (iVar5 != 0) {
              if (in_ECX[0xe] < 1) {
                iVar5 = *in_ECX;
                iVar8 = FUN_00673980(*(undefined4 *)((int)fVar13 + 0x18));
                (**(code **)(iVar5 + 0x17c))(iVar8 + -1);
                return 1;
              }
              if (iVar5 != 0) {
                in_ECX[0xb] = 0;
                FUN_00401f20(iVar5);
                in_ECX[0x11] = 0;
                return 1;
              }
            }
          }
        }
        else {
          pcVar1 = *(code **)(*in_ECX + 0x49c);
          *(undefined1 *)((int)in_ECX + 0x25d) = 0;
          (*pcVar1)();
          iVar5 = in_ECX[0x11];
          if (iVar5 != 0) {
            if (in_ECX[0xe] < 1) {
              iVar5 = *in_ECX;
              iVar8 = FUN_00673980(*(undefined4 *)((int)fVar13 + 0x18));
              (**(code **)(iVar5 + 0x17c))(iVar8 + -1);
            }
            else if (iVar5 != 0) {
              in_ECX[0xb] = 0;
              FUN_00401f20(iVar5);
              in_ECX[0x11] = 0;
            }
          }
          if (in_ECX[0xb] != 0) {
            iVar5 = (**(code **)(*in_ECX + 0x410))();
            if ((iVar5 != 0) && (cVar2 = FUN_00683a70(), cVar2 != '\0')) {
              FUN_00683a80(0);
            }
LAB_0063815d:
            iVar5 = *in_ECX;
            puVar10 = (undefined4 *)(**(code **)(*(int *)in_ECX[0xb] + 0x174))();
            uVar7 = FUN_004d6670();
            uVar7 = FUN_006ecc80(uVar7);
            (**(code **)(iVar5 + 0x3dc))(param_1,*puVar10,puVar10[1],puVar10[2],uVar7);
            return 0;
          }
        }
        return 1;
      }
      cVar2 = (**(code **)(**(int **)(iVar5 + 0x58) + 0x2e0))(iVar5);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    if (in_ECX[0x11] != 0) {
      iVar5 = (**(code **)(*param_1 + 0x164))();
      if (*(char *)((int)in_ECX + 0x25d) == '\0') {
        pcVar1 = *(code **)(*in_ECX + 0x594);
        *(undefined1 *)((int)in_ECX + 0x25d) = 1;
        (*pcVar1)(param_1);
        (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
        piVar12 = (int *)in_ECX[0xb];
        uVar7 = (**(code **)(*piVar12 + 0x170))(piVar12);
        FUN_006286e0(param_1,uVar7,piVar12);
        return 0;
      }
      if ((iVar5 != 0) && (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
        FUN_004dd260(param_1,1,*(undefined4 *)(in_ECX[0x11] + 4),
                     *(undefined4 *)(in_ECX[0x11] + 0x10));
        pcVar1 = *(code **)(*in_ECX + 0x49c);
        in_ECX[0xe] = in_ECX[0xe] + -1;
        *(undefined1 *)((int)in_ECX + 0x25d) = 0;
        (*pcVar1)();
      }
      if ((in_ECX[0xe] < 1) && ((iVar5 == 0 || (cVar2 = FUN_00472ea0(), cVar2 != '\0')))) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        (**(code **)(*in_ECX + 0x394))(1);
        *(undefined1 *)((int)in_ECX + 0x25d) = 0;
      }
      goto LAB_00638438;
    }
    cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))();
    if ((cVar2 == '\0') && (cVar2 = FUN_004d74b0(), cVar2 == '\0')) {
      iVar5 = (**(code **)(*param_1 + 0x164))();
      if (*(char *)((int)in_ECX + 0x25d) == '\0') {
        pcVar1 = *(code **)(*in_ECX + 0x594);
        *(undefined1 *)((int)in_ECX + 0x25d) = 1;
        (*pcVar1)(param_1);
        (**(code **)(*in_ECX + 0x484))(in_ECX[0xb]);
        piVar12 = (int *)in_ECX[0xb];
        uVar7 = (**(code **)(*piVar12 + 0x170))(piVar12);
        FUN_006286e0(param_1,uVar7,piVar12);
        return 0;
      }
      if ((iVar5 == 0) || (cVar2 = FUN_00472ea0(), cVar2 != '\0')) {
        (**(code **)(*in_ECX + 0x188))(param_1,1);
        iVar5 = in_ECX[0x11];
        if (iVar5 == 0) {
          uVar7 = 1;
          uVar17 = 0;
        }
        else {
          uVar7 = *(undefined4 *)(iVar5 + 0x10);
          uVar17 = *(undefined4 *)(iVar5 + 4);
        }
        FUN_004dd260(param_1,1,uVar17,uVar7);
        (**(code **)(*in_ECX + 0x394))(1);
        (**(code **)(*in_ECX + 0x49c))();
        *(undefined1 *)((int)in_ECX + 0x25d) = 0;
      }
      goto LAB_00638438;
    }
    cVar2 = FUN_004d74b0();
    if (cVar2 == '\0') {
      fVar14 = (float10)FUN_00402bd0();
      in_ECX[0x66] = (int)(float)fVar14;
      cVar2 = FUN_004d7f80();
      if ((cVar2 == '\0') && (cVar2 = FUN_004d7f80(), cVar2 != '\0')) {
        FUN_004dd260(param_1,0,0,1);
        return 1;
      }
      iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))();
      if (((iVar5 == 0) || (iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))(), iVar5 == 4)) ||
         (iVar5 = (**(code **)(*(int *)in_ECX[0xb] + 0x18c))(), iVar5 == 9)) {
        if (((*(int *)((int)fVar13 + 0x18) == 0x16) && (cVar2 = FUN_00565df0(), cVar2 != '\0')) &&
           ((fVar13 != -NAN && (*(int *)((int)fVar13 + 0x30) == 0)))) {
          (**(code **)(*in_ECX + 0x188))(param_1,2);
          uVar7 = FUN_00402ba0();
          FUN_0041ffc0(fVar13,uVar7);
        }
        cVar2 = FUN_005660a0();
        if (((cVar2 == '\0') &&
            (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 0x198))(1), cVar2 != '\0')) &&
           (in_ECX[0x11] == 0)) {
          FUN_00566870(in_ECX[0xb],1);
        }
        FUN_004dd260(param_1,1,0,1);
        return 1;
      }
      (**(code **)(**(int **)(in_ECX[0xb] + 0x58) + 0x1b0))(in_ECX[0xb]);
LAB_00637e9c:
      (**(code **)(*param_1 + 0x30c))();
      return 0;
    }
    iVar5 = (**(code **)(*in_ECX + 0x36c))();
    if ((iVar5 == 4) || (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 9)) {
      (**(code **)(*in_ECX + 0x188))(param_1,1);
LAB_00637dfa:
      (**(code **)(*in_ECX + 0x394))(1);
      return 1;
    }
  }
  cVar2 = (**(code **)(*in_ECX + 0x1b4))(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*in_ECX + 0x188))(param_1,1);
    (**(code **)(*in_ECX + 0x194))(param_1);
    return 1;
  }
LAB_00638438:
  iVar5 = (**(code **)(*param_1 + 0x164))();
  if ((iVar5 != 0) && (cVar2 = FUN_00472ea0(), cVar2 == '\0')) {
    return 0;
  }
  if (in_ECX[0x11] != 0) {
    FUN_00401f20(in_ECX[0x11]);
  }
  in_ECX[0x11] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x12] = 0;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006384b0(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  code *pcVar13;
  int *in_ECX;
  bool bVar14;
  float10 fVar15;
  undefined8 uVar16;
  undefined4 *puStack_180;
  float fStack_17c;
  double dStack_178;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  int *piStack_164;
  char cStack_15d;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  int iStack_144;
  undefined1 auStack_140 [12];
  char acStack_134 [304];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&puStack_180;
  if ((char)in_ECX[0x8a] != '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
    return;
  }
  fStack_15c = (float)(uint)fStack_15c._0_3_;
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  iStack_144 = iVar5;
  iVar6 = FUN_00566db0();
  dStack_178 = (double)CONCAT44(dStack_178._4_4_,iVar6);
  fStack_17c = (float)iVar6;
  if (iVar6 < 0) {
    fStack_17c = fStack_17c + 4.2949673e+09;
  }
  bVar14 = true;
  if (*(int *)(iVar5 + 0x18) != 1) {
    bVar14 = false;
    if (*(char *)(iVar5 + 0x20) == '\x03') {
      iVar6 = FUN_005e4400();
      cVar4 = FUN_00566dc0();
      if (cVar4 == '\0') {
        (**(code **)(*in_ECX + 0x188))(param_1,0xfffffffe);
        return;
      }
      if (iVar6 != 0) {
        iVar5 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar5 != 4) {
          (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
          return;
        }
        in_ECX[9] = *(int *)(iVar6 + 8);
        (**(code **)(*in_ECX + 0xbc))();
        goto LAB_0063859b;
      }
    }
    else if (*(char *)(iVar5 + 0x20) == '\x04') {
      cVar4 = FUN_00566dc0();
      if (cVar4 == '\0') {
        (**(code **)(*in_ECX + 0x188))(param_1,0xfffffffe);
        return;
      }
      iVar6 = (**(code **)(*in_ECX + 0x36c))();
      if (iVar6 == 9) goto LAB_0063859b;
    }
  }
  piStack_164 = (int *)0x0;
  FUN_00566b30(&fStack_150,param_1);
  if (((*(int *)(iVar5 + 0x24) != 0) &&
      (piStack_164 = (int *)FUN_005697e0(), piStack_164 == (int *)0x0)) &&
     (iVar6 = FUN_00569740(), iVar6 == 1)) {
    cStack_15d = '\x01';
    pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
    fStack_150 = *pfVar7;
    fStack_14c = pfVar7[1];
    fStack_148 = pfVar7[2];
  }
  if (((int *)in_ECX[0xc] == (int *)0x0) || (piVar11 = (int *)in_ECX[0xc], in_ECX[0x30] != 0)) {
    piVar11 = piStack_164;
  }
  if (60.0 <= fStack_17c) {
    if (!bVar14) goto LAB_0063879a;
  }
  else {
    if (bVar14) {
      cVar4 = FUN_00566dc0();
      if (cVar4 != '\0') {
        if (piVar11 == (int *)0x0) {
          return;
        }
        iVar5 = (**(code **)(*piVar11 + 0x170))();
        if (iVar5 != DAT_00b35eb0) {
          return;
        }
        fStack_17c = (float)piVar11[10];
        if (0.0 <= fStack_17c) {
          if (!NAN(fStack_17c) && 6.2831855 < fStack_17c != (fStack_17c == 6.2831855)) {
            fVar15 = (float10)FUN_00982bfa();
            fStack_17c = (float)fVar15;
            dStack_178 = (double)CONCAT44(dStack_178._4_4_,fStack_17c);
          }
        }
        else {
          fVar15 = (float10)FUN_00982bfa();
          dStack_178 = (double)CONCAT44(dStack_178._4_4_,(float)fVar15);
          fStack_17c = (float)fVar15 + 6.2831855;
        }
        dStack_178 = (double)((ulonglong)dStack_178 & 0xffffffff00000000);
        fVar15 = (float10)FUN_00683d80();
        puStack_180 = (undefined4 *)((float)_DAT_00b36c18 * 0.017453292);
        if ((float)puStack_180 < ABS((float)fVar15)) {
          FUN_00685530();
          return;
        }
        FUN_005e05f0();
        return;
      }
LAB_0063859b:
      (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
      return;
    }
LAB_0063879a:
    if (((float)in_ECX[0x7a] <= 0.0) && ((char)in_ECX[0x34] != '\0')) {
      (**(code **)(*in_ECX + 0x194))();
      (**(code **)(*in_ECX + 0x188))();
      in_ECX[0x7a] = 0x41a00000;
      return;
    }
    in_ECX[0x7a] = (int)((float)in_ECX[0x7a] - _DAT_00b33e9c);
  }
  if ((char)in_ECX[0x34] != '\0') {
    iVar6 = (**(code **)(*in_ECX + 0x36c))();
    if (((iVar6 == 4) || (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 == 0)) ||
       (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 == 9)) {
      if ((in_ECX[0x48] != 0) && (iVar6 = (**(code **)(*in_ECX + 0x36c))(), iVar6 != 4)) {
        iVar6 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar6 == 0) {
          fVar15 = (float10)FUN_004d7e30();
          if ((float10)60.0 < fVar15) {
            if (DAT_00b3b935 != '\0') {
              return;
            }
            DAT_00b3b935 = '\x01';
            iVar5 = *in_ECX;
            FUN_004d6670();
            uVar8 = FUN_006ecc80();
            cVar4 = (**(code **)(iVar5 + 0x3dc))
                              (param_1,in_ECX[0x4a],in_ECX[0x4b],in_ECX[0x4c],uVar8);
            iVar5 = iStack_144;
            if (cVar4 == '\0') {
              return;
            }
            goto LAB_00638937;
          }
        }
        cVar4 = (**(code **)(*in_ECX + 0x1b4))();
        if (cVar4 == '\0') {
          FUN_006faee0();
          *(undefined1 *)((int)in_ECX + 0x136) = 0;
          in_ECX[0x4a] = DAT_00b3f9a8;
          in_ECX[0x4b] = DAT_00b3f9ac;
          in_ECX[0x4c] = DAT_00b3f9b0;
          (**(code **)(*in_ECX + 0x370))(param_1,0,0,0x7f);
        }
      }
LAB_00638937:
      fVar15 = (float10)FUN_004d7e90(DAT_00b333c4,0);
      dStack_178 = (double)CONCAT44(dStack_178._4_4_,(float)fVar15);
      cVar4 = FUN_005e32d0();
      if (((((cVar4 == '\0') || (_DAT_00b36930 < (float)dStack_178._0_4_)) ||
           (0.0 < (float)in_ECX[0x6a])) ||
          (((*(uint *)(iVar5 + 0x1c) >> 0xc & 1) != 0 ||
           (cVar4 = (**(code **)(*in_ECX + 0x200))(), cVar4 != '\0')))) || (DAT_00b3bd99 == '\0')) {
        in_ECX[0x6a] = (int)((float)in_ECX[0x6a] - _DAT_00b33e9c);
      }
      else {
        puVar9 = (undefined4 *)in_ECX[99];
        dStack_178 = (double)CONCAT44(dStack_178._4_4_,puVar9);
        if (puVar9 != (undefined4 *)0x0) {
          while (puVar2 = (undefined4 *)*puVar9, puVar2 != (undefined4 *)0x0) {
            piVar11 = (int *)*puVar2;
            if (((puVar2[1] == 3) && (*(char *)(puVar2 + 2) != '\0')) &&
               ((piVar11 != param_1 && ((piVar11[0x16] != 0 && (piVar11 != DAT_00b333c4)))))) {
              cVar4 = FUN_004d7f80();
              if ((cVar4 != '\0') &&
                 (iVar5 = (**(code **)(*(int *)piVar11[0x16] + 0x3d0))(), iVar5 == 0)) {
                puStack_180 = (undefined4 *)FUN_00566db0();
                piStack_164 = (int *)(float)(int)puStack_180;
                if ((int)puStack_180 < 0) {
                  piStack_164 = (int *)((float)piStack_164 + 4.2949673e+09);
                }
                if (!bVar14) {
                  piStack_164 = (int *)0x44160000;
                }
                puStack_180 = (undefined4 *)FUN_00403c00();
                puStack_180 = (undefined4 *)*puStack_180;
                FUN_006ecc80();
                cVar4 = FUN_004c97f0();
                if (cVar4 != '\0') {
                  puStack_180 = (undefined4 *)FUN_00403c00();
                  puStack_180 = (undefined4 *)*puStack_180;
                }
                if ((float)puStack_180 < (float)piStack_164) {
                  puVar9 = (undefined4 *)FUN_00403c00();
                  piStack_164 = (int *)*puVar9;
                }
                fVar15 = (float10)FUN_004d7e30();
                if ((fVar15 <= (float10)(float)piStack_164) &&
                   ((cVar4 = FUN_005ed730(), cVar4 != '\0' ||
                    (cVar4 = (**(code **)(*piVar11 + 0x198))(), cVar4 != '\0')))) {
                  cVar4 = FUN_0046cb60();
                  if (cVar4 == '\0') {
                    fVar1 = (float)in_ECX[0x66] - _DAT_00b33e9c;
                  }
                  else {
                    pfVar7 = (float *)FUN_00403c00();
                    fVar1 = *pfVar7;
                  }
                  in_ECX[0x66] = (int)fVar1;
                  if ((float)in_ECX[0x66] <= 0.0) {
                    FUN_004526e0();
                  }
                  iVar5 = FUN_0047df80();
                  iVar6 = (int)((ulonglong)((longlong)iVar5 * -0x51eb851f) >> 0x20);
                  piStack_164 = (int *)(iVar5 + ((iVar6 >> 5) - (iVar6 >> 0x1f)) * 100);
                  cVar4 = FUN_00446c30();
                  if (cVar4 == '\0') {
                    puStack_180 = (undefined4 *)FUN_00403c00();
                    puStack_180 = (undefined4 *)*puStack_180;
                    FUN_006ecc80();
                    cVar4 = FUN_004c97f0();
                    if (cVar4 != '\0') {
                      puStack_180 = (undefined4 *)FUN_00403c00();
                      puStack_180 = (undefined4 *)*puStack_180;
                    }
                    if ((float)(int)piStack_164 < (float)puStack_180) {
                      FUN_00446cb0();
                      (**(code **)(*(int *)piVar11[0x16] + 0x16c))();
                      cVar4 = FUN_005e32d0();
                      if ((((((cVar4 != '\0') &&
                             (cVar4 = (**(code **)(*piVar11 + 0x1a0))(), cVar4 == '\0')) &&
                            (cVar4 = FUN_005e0f30(), cVar4 == '\0')) &&
                           ((iVar5 = FUN_005e0dc0(), iVar5 != 3 &&
                            (cVar4 = FUN_005ed730(), cVar4 != '\0')))) &&
                          ((((int *)piVar11[0x16] != (int *)0x0 &&
                            ((cVar4 = (**(code **)(*(int *)piVar11[0x16] + 0x200))(), cVar4 == '\0'
                             && (piVar11 != DAT_00b333c4)))) &&
                           (cVar4 = (**(code **)(*piVar11 + 0x198))(), cVar4 == '\0')))) &&
                         ((((iVar5 = (**(code **)(*piVar11 + 0x154))(), iVar5 != 0 &&
                            (piVar11[0x16] != 0)) &&
                           ((*(int *)(piVar11[0x16] + 8) == 0 ||
                            (cVar4 = FUN_00567770(), cVar4 == '\0')))) &&
                          (cVar4 = (**(code **)(*param_1 + 0x2f4))(), cVar4 != '\0')))) {
                        in_ECX[0x76] = 0;
                        piVar12 = (int *)FUN_00403c00();
                        in_ECX[0x6a] = *piVar12;
                        piVar12 = (int *)FUN_00579440();
                        if (piVar12 == param_1) {
                          FUN_004da2a0();
                          uVar8 = FUN_004da2a0();
                          _sprintf(acStack_134,"%s wants to talk to  %s ",uVar8);
                          FUN_00579b60(acStack_134);
                        }
                        iVar5 = FUN_005e0380();
                        if ((iVar5 == 0) ||
                           (iVar5 = FUN_005e0380(), (*(uint *)(iVar5 + 0x1c) >> 0xc & 1) == 0)) {
                          if ((*(int *)(piVar11[0x16] + 8) != 0) &&
                             (cVar4 = FUN_005660a0(), cVar4 == '\0')) {
                            piVar12 = (int *)piVar11[0x16];
                            uVar8 = (**(code **)(*piVar12 + 0x390))();
                            uVar10 = (**(code **)(*piVar12 + 0xc0))();
                            uVar16 = CONCAT44(uVar8,uVar10);
                            uVar8 = (**(code **)(*piVar12 + 0xcc))(uVar10);
                            FUN_004268b0(piVar12[2],piVar12[1],uVar8,uVar16);
                          }
                          FUN_005e0380(0,1);
                          FUN_005f1590();
                          (**(code **)(*(int *)piVar11[0x16] + 0x188))(param_1,1);
                        }
                        else {
                          cVar4 = (**(code **)(*piVar11 + 0x198))();
                          if (cVar4 == '\0') {
                            (**(code **)(*(int *)param_1[0x16] + 0x188))(param_1,3);
                            in_ECX[0x76] = 0;
                            return;
                          }
                        }
                        goto LAB_00638dcd;
                      }
                      break;
                    }
                  }
                }
              }
              puVar9 = dStack_178._0_4_;
            }
            puVar9 = (undefined4 *)puVar9[1];
            dStack_178 = (double)CONCAT44(dStack_178._4_4_,puVar9);
            if (puVar9 == (undefined4 *)0x0) break;
          }
        }
      }
      if (0.0 < (float)in_ECX[0x76]) {
        in_ECX[0x76] = (int)((float)in_ECX[0x76] - _DAT_00b33e9c);
        return;
      }
      pfVar7 = (float *)(**(code **)(*param_1 + 0x174))();
      fStack_170 = *pfVar7;
      fStack_16c = pfVar7[1];
      fStack_168 = pfVar7[2];
      piStack_164 = (int *)FUN_006ecc80();
      cVar4 = FUN_005e3290();
      if (cVar4 == '\0') {
        if ((!bVar14) || (cStack_15d != '\0')) {
          fStack_17c = 800.0;
        }
        fStack_15c = fStack_150 - fStack_170;
        fStack_158 = fStack_14c - fStack_16c;
        fStack_154 = fStack_148 - fStack_168;
        dStack_178 = (double)(fStack_17c + 250.0);
        fVar15 = (float10)FUN_0043f350();
        if ((float10)dStack_178 < fVar15) {
          pcVar13 = *(code **)(*in_ECX + 0x17c);
          goto LAB_006397a4;
        }
        FUN_006ecc80();
        cVar4 = FUN_004c97f0();
        if (cVar4 == '\0') {
          uVar10 = 0;
          uVar8 = FUN_004d6670();
          piVar11 = (int *)FUN_0044a270(fStack_170,fStack_16c,uVar8,uVar10);
          piStack_164 = piVar11;
          puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
          fVar1 = fStack_17c / 3.0 + fStack_17c / 3.0;
          dStack_178 = (double)CONCAT44(dStack_178._4_4_,fVar1);
          pfVar7 = (float *)FUN_0062e790(&fStack_15c,*puVar9,puVar9[1],puVar9[2],fVar1,
                                         fStack_17c * 0.25);
          fStack_170 = *pfVar7;
          fStack_16c = pfVar7[1];
          fStack_168 = pfVar7[2];
          pfVar7 = (float *)FUN_005e2e20(&fStack_15c,*pfVar7,pfVar7[1],pfVar7[2],piVar11,1,0,0);
          fStack_170 = *pfVar7;
          fStack_16c = pfVar7[1];
          fStack_168 = pfVar7[2];
        }
        else {
          piVar11 = (int *)FUN_006ecc80();
          piStack_164 = piVar11;
          if (fStack_17c < 500.0) {
            puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
            fVar1 = fStack_17c;
            fVar3 = fStack_17c;
          }
          else {
            puVar9 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
            fVar1 = fStack_17c / 3.0 + fStack_17c / 3.0;
            dStack_178 = (double)CONCAT44(dStack_178._4_4_,fVar1);
            fVar3 = fStack_17c * 0.25;
          }
          pfVar7 = (float *)FUN_0062e790(&fStack_15c,*puVar9,puVar9[1],puVar9[2],fVar1,fVar3);
          fStack_170 = *pfVar7;
          fStack_16c = pfVar7[1];
          fStack_168 = pfVar7[2];
          pfVar7 = (float *)FUN_005e2e20(&fStack_15c,fStack_170,fStack_16c,fStack_168,piVar11,0,1,0)
          ;
          fStack_170 = *pfVar7;
          fStack_16c = pfVar7[1];
          fStack_168 = pfVar7[2];
        }
        fVar15 = (float10)FUN_004d7e30();
        if (fVar15 < (float10)20.0 != (fVar15 == (float10)20.0)) {
          in_ECX[0x76] = 0;
        }
      }
      if ((DAT_00b3b928 == (int *)0x0) && (cVar4 = FUN_004d7f80(), cVar4 != '\0')) {
        FUN_004526e0();
        iVar5 = 0;
        piVar11 = in_ECX + 0x6f;
        do {
          if (*piVar11 == 0) break;
          FUN_00446cb0();
          iVar5 = iVar5 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar5 < 4);
        FUN_00446b90(piStack_164,&fStack_170,0x43fa0000,&fStack_150,fStack_17c,FUN_0062eaa0,param_1)
        ;
      }
      piVar11 = DAT_00b3b928;
      bVar14 = DAT_00b3b928 == (int *)0x0;
      DAT_00b3b928 = (int *)0x0;
      if (bVar14) {
        FUN_006ecc80();
        cVar4 = FUN_004c97f0();
        if (cVar4 == '\0') {
          if (DAT_00b3b935 != '\0') {
            return;
          }
          fStack_15c = fStack_170 - fStack_150;
          DAT_00b3b935 = 1;
          fStack_158 = fStack_16c - fStack_14c;
          fStack_154 = fStack_168 - fStack_148;
          dStack_178 = (double)fStack_17c;
          fVar15 = (float10)FUN_00404c90();
          if ((float10)dStack_178 < fVar15) {
            dStack_178 = (double)CONCAT44(dStack_178._4_4_,
                                          (float)((float10)dStack_178 * (float10)0.5));
            do {
              pfVar7 = (float *)FUN_0062e790(auStack_140,fStack_150,fStack_14c,fStack_148,fStack_17c
                                             ,SUB84(dStack_178,0));
              fStack_170 = *pfVar7;
              fStack_15c = fStack_170 - fStack_150;
              fStack_16c = pfVar7[1];
              fStack_168 = pfVar7[2];
              fStack_158 = fStack_16c - fStack_14c;
              fStack_154 = fStack_168 - fStack_148;
              puStack_180 = (undefined4 *)
                            (fStack_154 * fStack_154 +
                            fStack_158 * fStack_158 + fStack_15c * fStack_15c);
              fVar15 = (float10)FUN_00982c30();
              puStack_180 = (undefined4 *)(float)fVar15;
            } while (fStack_17c < (float)puStack_180);
            iVar5 = FUN_004d6670();
            if (iVar5 != 0) {
              uVar16 = 0;
              uVar10 = 1;
              FUN_004d6670(&fStack_170,1,0,0);
              uVar8 = FUN_004f1a80();
              pfVar7 = (float *)FUN_005e2e20(auStack_140,fStack_170,fStack_16c,fStack_168,uVar8,
                                             uVar10,uVar16);
              fStack_170 = *pfVar7;
              fStack_16c = pfVar7[1];
              fStack_168 = pfVar7[2];
            }
          }
          if (in_ECX[0x72] != 0) {
            in_ECX[0x6f] = in_ECX[0x70];
            in_ECX[0x70] = in_ECX[0x71];
            in_ECX[0x71] = in_ECX[0x72];
            in_ECX[0x72] = 0;
          }
          iVar5 = (**(code **)(*in_ECX + 0x36c))();
          if (iVar5 != 0) {
            (**(code **)(*param_1 + 800))();
          }
          iVar5 = *in_ECX;
          FUN_004d6670();
          uVar8 = FUN_006ecc80();
          cVar4 = (**(code **)(iVar5 + 0x3dc))(param_1,fStack_170,fStack_16c,fStack_168,uVar8);
          if (cVar4 == '\0') {
            return;
          }
          fVar15 = (float10)FUN_004d7e30();
          if ((float10)50.0 <= fVar15) {
            FUN_005f4880();
            uVar8 = FUN_005e1f90();
            fVar15 = (float10)FUN_00546720(uVar8);
          }
          else {
            fVar15 = (float10)0;
          }
          in_ECX[0x76] = (int)(float)fVar15;
          piVar11 = (int *)FUN_00579440();
          if (piVar11 != param_1) {
            return;
          }
          uVar8 = FUN_004da2a0((double)fStack_170,(double)fStack_16c);
          _sprintf(acStack_134,"%s is wandering to point x %.02f and y %.02f",uVar8);
          FUN_00579b60(acStack_134);
          return;
        }
        if (DAT_00b3b935 != '\0') {
          return;
        }
        DAT_00b3b935 = '\x01';
        iVar5 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar5 != 0) {
          (**(code **)(*param_1 + 800))();
        }
        iVar5 = *in_ECX;
        FUN_004d6670();
        uVar8 = FUN_006ecc80();
        cVar4 = (**(code **)(iVar5 + 0x3dc))(param_1,fStack_170,fStack_16c,fStack_168,uVar8);
        if (cVar4 == '\0') {
          return;
        }
        fVar15 = (float10)FUN_004d7e30();
        if ((float10)50.0 <= fVar15) {
          FUN_005f4880();
          uVar8 = FUN_005e1f90();
          fVar15 = (float10)FUN_00546720(uVar8);
          in_ECX[0x76] = (int)(float)fVar15;
          return;
        }
LAB_00638dcd:
        in_ECX[0x76] = 0;
        return;
      }
      cVar4 = FUN_004d74b0();
      if ((cVar4 == '\0') || (iVar5 = (**(code **)(*in_ECX + 0x36c))(), iVar5 == 0)) {
        if (in_ECX[0x72] == 0) {
          iVar5 = 0;
          piVar12 = in_ECX + 0x6f;
          do {
            if (*piVar12 == 0) {
              in_ECX[iVar5 + 0x6f] = (int)piVar11;
              break;
            }
            iVar5 = iVar5 + 1;
            piVar12 = piVar12 + 1;
          } while (iVar5 < 4);
        }
        else {
          in_ECX[in_ECX[0x80] + 0x6f] = (int)piVar11;
          in_ECX[0x80] = in_ECX[0x80] + 1;
          if (3 < in_ECX[0x80]) {
            in_ECX[0x80] = 0;
          }
        }
      }
      fVar15 = (float10)FUN_004d7e90(piVar11,0);
      if ((fVar15 <= (float10)200.0) && (cVar4 = FUN_004d74b0(), cVar4 == '\0')) {
        return;
      }
      if (DAT_00b3b935 != '\0') {
        return;
      }
      DAT_00b3b935 = 1;
      cVar4 = FUN_004d74b0();
      if (cVar4 == '\0') {
        iVar5 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar5 != 0) {
          (**(code **)(*param_1 + 800))();
        }
        iVar5 = *in_ECX;
        uVar8 = (**(code **)(*piVar11 + 0x174))();
        dStack_178 = (double)CONCAT44(dStack_178._4_4_,uVar8);
        FUN_004d6670();
        uVar8 = FUN_006ecc80();
        puVar9 = dStack_178._0_4_;
LAB_006392cb:
        cVar4 = (**(code **)(iVar5 + 0x3dc))(param_1,*puVar9,puVar9[1],puVar9[2],uVar8);
      }
      else {
        iVar5 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar5 != 0) goto LAB_006392f0;
        dStack_178 = (double)((ulonglong)dStack_178 & 0xffffffff00000000);
        cVar4 = FUN_004e0e20();
        if (cVar4 == '\0') {
          iVar5 = *in_ECX;
          puStack_180 = (undefined4 *)(**(code **)(*piVar11 + 0x174))();
          FUN_004d6670();
          uVar8 = FUN_006ecc80();
          puVar9 = puStack_180;
          goto LAB_006392cb;
        }
        *(undefined1 *)(in_ECX + 0x49) = dStack_178._0_1_;
        puStack_180 = (undefined4 *)(*in_ECX + 0x3dc);
        in_ECX[0x48] = (int)piVar11;
        FUN_004d6670();
        uVar8 = FUN_006ecc80();
        cVar4 = (*(code *)*puStack_180)(param_1,in_ECX[0x4a],in_ECX[0x4b],in_ECX[0x4c],uVar8);
      }
      if (cVar4 == '\0') {
        return;
      }
LAB_006392f0:
      FUN_005f4880();
      uVar8 = FUN_005e1f90();
      fVar15 = (float10)FUN_00546720(uVar8);
      in_ECX[0x76] = (int)(float)fVar15;
      piVar12 = (int *)FUN_00579440();
      if (piVar12 != param_1) {
        return;
      }
      pfVar7 = (float *)(**(code **)(*piVar11 + 0x174))();
      iVar5 = (**(code **)(*piVar11 + 0x174))();
      uVar8 = FUN_004da2a0((double)*pfVar7,(double)*(float *)(iVar5 + 4));
      uVar8 = FUN_004da2a0(uVar8);
      _sprintf(acStack_134,"%s is wandering to object %s at x %.02f and y %.02f",uVar8);
      FUN_00579b60(acStack_134);
      return;
    }
    if ((char)in_ECX[0x34] != '\0') {
      return;
    }
  }
  if ((in_ECX[0x48] != 0) && (cVar4 = FUN_004d72c0(), cVar4 != '\0')) {
    (**(code **)(*in_ECX + 0x194))();
    in_ECX[0x76] = 0;
    in_ECX[0x48] = 0;
    return;
  }
  (**(code **)(*in_ECX + 0x238))(param_1,0x101);
  if (in_ECX[0x48] == 0) {
    puStack_180 = (undefined4 *)0x42700000;
  }
  else {
    puStack_180 = (undefined4 *)0x41200000;
  }
  if (in_ECX[0xd] == 0) {
    (**(code **)(*in_ECX + 0x408))();
  }
  iVar5 = *in_ECX;
  uVar8 = FUN_0068a1a0();
  uVar8 = FUN_0068a190(uVar8);
  uVar8 = FUN_0068a160(uVar8);
  cVar4 = (**(code **)(iVar5 + 0x414))(param_1,uVar8);
  if (cVar4 != '\0') {
    return;
  }
  pcVar13 = *(code **)(*in_ECX + 0x194);
LAB_006397a4:
  (*pcVar13)();
  return;
}



void FUN_006397d0(int *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  
  iVar3 = (**(code **)(*in_ECX + 0x184))();
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x558))(param_1);
  }
  piVar5 = (int *)0x0;
  if ((in_ECX[0xb] != 0) && (cVar2 = (**(code **)(*(int *)in_ECX[0xb] + 400))(), cVar2 != '\0')) {
    piVar5 = (int *)in_ECX[0xb];
  }
  piVar10 = in_ECX + 0x4a;
  FUN_004d7e30(piVar10);
  iVar4 = FUN_009828c0();
  if ((float)iVar4 < 40.0 == ((float)iVar4 == 40.0)) {
    if ((char)in_ECX[0x34] != '\0') {
      iVar3 = *in_ECX;
      uVar6 = FUN_004d6670();
      uVar6 = FUN_006ecc80(uVar6);
      (**(code **)(iVar3 + 0x3dc))(param_1,*piVar10,in_ECX[0x4b],in_ECX[0x4c],uVar6);
      return;
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((char)in_ECX[0x34] == '\0') && (!bVar1)) {
    uVar6 = 0x101;
    if (((char)param_1[0x32] != '\0') ||
       (((((*(uint *)(iVar3 + 0x1c) >> 0xd & 1) != 0 ||
          (cVar2 = (**(code **)(*param_1 + 0x334))(1), cVar2 != '\0')) ||
         (*(char *)(in_ECX[2] + 0x20) == '\x0f')) || (*(char *)(in_ECX[2] + 0x20) == '\f')))) {
      uVar6 = 0x201;
    }
    (**(code **)(*in_ECX + 0x238))(param_1,uVar6);
    iVar3 = *in_ECX;
    uVar6 = FUN_004d6670(0x41a00000);
    uVar6 = FUN_006ecc80(uVar6);
    (**(code **)(iVar3 + 0x414))(param_1,piVar10,uVar6);
    return;
  }
  (**(code **)(*in_ECX + 0xf0))(0);
  (**(code **)(*in_ECX + 0xf8))(0);
  iVar3 = FUN_0041e6f0();
  piVar10 = (int *)0x0;
  if (iVar3 != 0) {
    piVar10 = (int *)FUN_00486790(0xd,0);
    FUN_00486790(0xe,0);
  }
  if ((char)in_ECX[0x34] == '\0') {
    (**(code **)(*in_ECX + 0x194))(param_1);
  }
  iVar4 = 1;
  iVar3 = (**(code **)(*in_ECX + 0xf8))();
  if ((iVar3 != 0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
    FUN_004853b0(0,0,0);
    FUN_004dc8f0(0);
  }
  iVar3 = (**(code **)(*in_ECX + 0xf0))(1);
  if ((iVar3 != 0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) {
    FUN_004853b0(0,0,0);
    FUN_004dcab0();
  }
  cVar2 = (**(code **)(*in_ECX + 0x304))();
  if (cVar2 != '\0') {
    (**(code **)(*in_ECX + 0x300))(0);
  }
  iVar3 = (**(code **)(*in_ECX + 0x36c))();
  if ((iVar3 == 4) || (iVar3 = (**(code **)(*in_ECX + 0x36c))(), iVar3 == 9)) {
    (**(code **)(*param_1 + 0x264))(1);
    puVar7 = (undefined4 *)0x1;
    piVar8 = param_1;
    (**(code **)(*in_ECX + 0x188))();
    (**(code **)(*(int *)piVar5[0x16] + 0x178))(0);
    (**(code **)(*in_ECX + 0x394))(1);
    (**(code **)(*piVar5 + 0x240))(param_1,1);
    if ((int *)in_ECX[0x3c] != (int *)0x0) {
      if (*(int *)in_ECX[0x3c] != 0) {
        FUN_00446cb0(*(undefined4 *)*piVar8);
      }
      FUN_004e1b40(*(undefined4 *)(iVar4 + 8));
      return;
    }
    if (((iVar4 == 0) && (piVar10 != (int *)0x0)) && (cVar2 = FUN_00484e80(0), cVar2 == '\0')) {
      if ((puVar7 != (undefined4 *)0x0) && (*piVar10 != 0)) {
        FUN_00446cb0(*(undefined4 *)*puVar7);
      }
      FUN_004e1c70(piVar10[2]);
    }
  }
  else {
    cVar2 = (**(code **)(*in_ECX + 0x1b4))(param_1);
    if (cVar2 == '\0') {
      puVar9 = (undefined4 *)0x1;
      (**(code **)(*param_1 + 0x264))();
      puVar7 = (undefined4 *)0x1;
      (**(code **)(*piVar5 + 0x240))(param_1);
      (**(code **)(*in_ECX + 0x188))(param_1,1);
      (**(code **)(*(int *)piVar5[0x16] + 0x178))(0);
      if ((int *)in_ECX[0x3c] != (int *)0x0) {
        if (*(int *)in_ECX[0x3c] != 0) {
          FUN_00446cb0(*(undefined4 *)*puVar7);
        }
        FUN_004e1b40(*(undefined4 *)(iVar4 + 8));
        return;
      }
      if (((iVar4 == 0) && (piVar10 != (int *)0x0)) && (cVar2 = FUN_00484e80(0), cVar2 == '\0')) {
        if ((puVar9 != (undefined4 *)0x0) && (*piVar10 != 0)) {
          FUN_00446cb0(*(undefined4 *)*puVar9);
        }
        FUN_004e1c70(piVar10[2]);
        return;
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00639c10(int *param_1)

{
  float fVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *in_ECX;
  float10 fVar11;
  int *piStack_10;
  undefined1 auStack_c [12];
  
  piVar3 = param_1;
  iVar5 = (**(code **)(*in_ECX + 0x184))();
  piVar10 = (int *)in_ECX[0xb];
  if ((piVar10 == (int *)0x0) || (((uint)piVar10[2] >> 0xb & 1) != 0)) {
    if (0.0 < (float)in_ECX[0x7a]) {
      fVar1 = (float)in_ECX[0x7a] - _DAT_00b33e9c;
    }
    else {
      (**(code **)(*in_ECX + 0x558))(param_1);
      if (in_ECX[0xb] != 0) goto LAB_00639cfb;
      fVar1 = 10.0;
    }
    in_ECX[0x7a] = (int)fVar1;
  }
  else {
    if (((uint)piVar10[2] >> 5 & 1) != 0) {
      FUN_00566870(piVar10,1);
      (**(code **)(*in_ECX + 0x188))(param_1,2);
      return;
    }
    cVar4 = (**(code **)(*piVar10 + 0x198))(1);
    if ((cVar4 != '\0') && (in_ECX[0x11] == 0)) {
      FUN_00566870(in_ECX[0xb],1);
                    /* WARNING: Could not recover jumptable at 0x00639c9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x2f8))();
      return;
    }
  }
  if (in_ECX[0xb] == 0) {
    (**(code **)(*in_ECX + 0x188))(param_1,2);
    return;
  }
LAB_00639cfb:
  uVar6 = FUN_00566b30(auStack_c,param_1);
  FUN_004d7e30(uVar6);
  iVar7 = FUN_009828c0();
  if ((double)iVar7 <= 200.0) {
    piStack_10 = (int *)0x0;
    fVar11 = (float10)FUN_004d7e90(in_ECX[0xb],0);
    uVar6 = FUN_00566b30(auStack_c,param_1);
    FUN_004d7e30(uVar6);
    uVar8 = FUN_009828c0();
    uVar9 = FUN_00566db0();
    if ((uVar9 < uVar8) || (bVar2 = true, (float)fVar11 == 3.4028235e+38)) {
      bVar2 = false;
    }
    piVar10 = piStack_10;
    if (*(int *)(iVar5 + 0x24) != 0) {
      piVar10 = (int *)FUN_005697e0();
    }
    if (!bVar2) {
      if (piVar10 == (int *)0x0) {
        return;
      }
      iVar5 = (**(code **)(*piVar10 + 0x170))();
      if (iVar5 != DAT_00b35eb0) {
        return;
      }
      param_1 = (int *)piVar10[10];
      if (0.0 <= (float)param_1) {
        if (!NAN((float)param_1) && 6.2831855 < (float)param_1 != ((float)param_1 == 6.2831855)) {
          fVar11 = (float10)FUN_00982bfa();
          param_1 = (int *)(float)fVar11;
        }
      }
      else {
        fVar11 = (float10)FUN_00982bfa();
        param_1 = (int *)((float)fVar11 + 6.2831855);
      }
      piStack_10 = (int *)0x0;
      fVar11 = (float10)FUN_00683d80(piVar3,param_1,&piStack_10);
      if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar11)) {
        FUN_00685530(piVar3,param_1,1);
        return;
      }
      FUN_005e05f0(0x30);
      return;
    }
    if ((in_ECX[0xb] == DAT_00b333c4) && (*(char *)(DAT_00b333c4 + 300) != '\0')) {
      return;
    }
    if ((char)in_ECX[0x34] == '\0') {
      (**(code **)(*in_ECX + 0x194))(param_1);
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0xffffffff;
  }
  (**(code **)(*in_ECX + 0x188))(param_1,uVar6);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00639ef0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c25fb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = 0;
  iVar1 = in_ECX[0x10];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0x10] + 4);
    FUN_00401f20(in_ECX[0x10],uVar2);
    in_ECX[0x10] = iVar1;
  }
  in_ECX[0xf] = 0;
  uVar3 = FUN_006ecc80();
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
  uStack_18 = *puVar4;
  uStack_14 = puVar4[1];
  iStack_10 = puVar4[2];
  in_ECX[0x1b] = param_2;
  in_ECX[0x19] = 0;
  pcVar9 = FUN_00646600;
  uVar8 = _DAT_00b368e8;
  piVar10 = param_1;
  uVar5 = (**(code **)(*param_1 + 0x174))(_DAT_00b368e8,FUN_00646600,param_1);
  FUN_00446b90(uVar3,&uStack_18,_DAT_00b368e8,uVar5,uVar8,pcVar9,piVar10);
  pcVar9 = *(code **)(*in_ECX + 0x568);
  in_ECX[0x1b] = 0;
  in_ECX[0x19] = 0;
  (*pcVar9)(param_1);
  if ((in_ECX[0x10] == 0) && (in_ECX[0xf] == 0)) {
    uVar7 = 0;
  }
  else {
    iVar1 = in_ECX[0xf];
    iVar6 = FUN_00401f00(0xc);
    puStack_8 = (undefined1 *)0x0;
    if (iVar6 != 0) {
      uVar7 = FUN_00484420(*(undefined4 *)(iVar1 + 4),1);
    }
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_00446cb0(*(undefined4 *)(iVar1 + 0x18));
  }
  *unaff_FS_OFFSET = iStack_10;
  return uVar7;
}



void FUN_0063a020(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *in_ECX;
  int *unaff_EBX;
  int *unaff_EDI;
  float10 fVar10;
  int *unaff_retaddr;
  int local_8;
  
  if ((*(char *)(DAT_00b333c4 + 0x6e5) == '\0') && (cVar6 = FUN_005e1af0(), cVar6 != '\0')) {
    iVar7 = FUN_005e2dd0();
    iVar8 = (**(code **)(*in_ECX + 0x184))();
    if ((((iVar8 == 0) || (*(char *)(iVar8 + 0x20) != '\x14')) &&
        ((cVar6 = (**(code **)(*param_1 + 0x334))(1), cVar6 == '\0' &&
         (cVar6 = FUN_005e6cd0(0), cVar6 == '\0')))) &&
       ((iVar7 == 0 || ((*(uint *)(iVar7 + 0x1c) >> 0xc & 1) == 0)))) {
      piVar1 = in_ECX + 0xf;
      while ((in_ECX[0x10] != 0 || (*piVar1 != 0))) {
        iVar7 = *piVar1;
        if (iVar7 != 0) {
          FUN_00401f20(iVar7);
        }
        FUN_0065c620(iVar7);
      }
      piVar2 = (int *)in_ECX[99];
      local_8 = 0;
      while (((piVar2 != (int *)0x0 &&
              (piVar9 = (int *)*piVar2, in_ECX = unaff_EDI, piVar9 != (int *)0x0)) && (local_8 < 3))
            ) {
        piVar3 = (int *)*piVar9;
        cVar6 = (**(code **)(*piVar3 + 0x198))(0);
        if ((((cVar6 != '\0') && (cVar6 = (**(code **)(*piVar3 + 0x1f8))(), cVar6 == '\0')) &&
            (((float)piVar3[0x21] < 0.0 &&
             ((fVar10 = (float10)FUN_004d7e90(unaff_retaddr,0),
              fVar10 < (float10)550.0 != (fVar10 == (float10)550.0) &&
              ((char)unaff_EDI[0x8a] == '\0')))))) &&
           ((-10.0 < (float)piVar9[3] && (cVar6 = FUN_00446c30(piVar3), cVar6 == '\0')))) {
          iVar7 = FUN_00401f00(0x20);
          if (iVar7 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            piVar9 = (int *)FUN_00628eb0();
          }
          *piVar9 = (int)piVar3;
          FUN_00446cb0(piVar9);
          local_8 = local_8 + 1;
        }
        piVar2 = (int *)piVar2[1];
      }
      puVar4 = (undefined4 *)*piVar1;
      if (puVar4 != (undefined4 *)0x0) {
        uVar5 = *puVar4;
        FUN_0067f100();
        FUN_00401f20(puVar4);
        (**(code **)(*unaff_retaddr + 0x2f8))(uVar5);
        FUN_00446cb0(uVar5);
        in_ECX = unaff_EBX;
      }
      *(undefined1 *)(in_ECX + 0x74) = 0;
    }
  }
  return;
}



void FUN_0063ba30(uint *param_1)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int unaff_ESI;
  uint *puVar10;
  float10 fVar11;
  undefined4 uVar12;
  uint *puVar13;
  undefined4 uVar14;
  code *pcVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  float fVar18;
  int *piVar19;
  uint uStack_48;
  float fStack_44;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];
  undefined1 auStack_18 [8];
  int *piStack_10;
  int *piStack_8;
  uint *puStack_4;
  
  if (param_1 == (uint *)0x0) {
    return;
  }
  *(undefined1 *)(in_ECX + 0x8a) = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x2f] = -0x40800000;
  FUN_006ac3d0();
  in_ECX[0x76] = 0;
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  cVar2 = (**(code **)(*param_1 + 400))();
  puVar10 = (uint *)0x0;
  if (cVar2 != '\0') {
    puVar10 = param_1;
  }
  cVar2 = (**(code **)(*puVar10 + 0x1f8))();
  if (cVar2 == '\0') {
    pcVar15 = *(code **)(*in_ECX + 0x364);
    puVar13 = (uint *)0x0;
  }
  else {
    FUN_005e9e70();
    pcVar15 = *(code **)(*in_ECX + 0x23c);
    puVar13 = puVar10;
  }
  (*pcVar15)(puVar13);
  FUN_0065da10();
  uStack_48 = uStack_48 & 0xffffff00;
  if ((float)in_ECX[0x98] != 0.0) {
    fVar11 = (float10)FUN_00402bd0();
    fStack_44 = ABS((float)fVar11 - (float)in_ECX[3]) * 100.0;
    if ((float)in_ECX[0x98] < fStack_44 != ((float)in_ECX[0x98] == fStack_44)) {
      pcVar15 = *(code **)(*in_ECX + 0x188);
      in_ECX[0x6b] = 0;
      uStack_48 = CONCAT31(uStack_48._1_3_,1);
      (*pcVar15)(puVar10,3);
      FUN_004fbf90(iVar4,puVar10 + 0x11,0x400);
      if ((iVar4 != 0) && (cVar2 = FUN_00565df0(), cVar2 != '\0')) {
        uVar5 = FUN_00402ba0();
        FUN_0041ffc0(iVar4,uVar5);
      }
    }
  }
  cVar2 = (**(code **)(*in_ECX + 0x18))(puVar10,uStack_48);
  if (((cVar2 != '\0') && (iVar4 = (**(code **)(*puVar10 + 0x380))(), iVar4 != 0)) &&
     ((*(uint *)(in_ECX[2] + 0x1c) >> 0x17 & 1) == 0)) {
    (**(code **)(*puVar10 + 0x380))();
    cVar2 = FUN_005e9a60();
    if (cVar2 == '\0') {
      (**(code **)(*puVar10 + 0x380))();
      FUN_005f80d0();
      in_ECX[0x6a] = 0;
    }
    (**(code **)(*puVar10 + 0x230))();
    return;
  }
  (**(code **)(*in_ECX + 0x574))();
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x18) != -1)) {
    do {
      iVar4 = (**(code **)(*in_ECX + 0x184))();
      if (iVar4 == 0) break;
      iVar7 = *(int *)(iVar4 + 0x18);
      iVar6 = (**(code **)(*in_ECX + 0x180))();
      puVar13 = puVar10;
      switch(*(undefined4 *)((&PTR_DAT_00b152b0)[iVar7] + iVar6 * 4)) {
      case 0:
        cVar2 = FUN_00566dc0(puVar10,0,0xbf800000);
        if (cVar2 == '\0') {
          piVar19 = (int *)0x0;
          if (*(int *)(iVar4 + 0x24) != 0) {
            piVar19 = (int *)FUN_005697e0();
          }
          if (((int *)in_ECX[0xc] != (int *)0x0) && (in_ECX[0x30] == 0)) {
            piVar19 = (int *)in_ECX[0xc];
          }
          iVar7 = (**(code **)(*in_ECX + 0x36c))();
          if (iVar7 != 0) {
            uVar17 = 0xbf800000;
            uVar5 = 0;
            FUN_005e0380(puVar10,0,0xbf800000);
            cVar2 = FUN_00566dc0(puVar13,uVar5,uVar17);
            if (cVar2 == '\0') {
              (**(code **)(*in_ECX + 0x1b0))(puVar10);
            }
          }
          iVar7 = *in_ECX;
          fVar11 = (float10)FUN_005677b0(puVar10,1);
          fVar18 = (float)fVar11;
          puVar13 = puStack_4;
          uVar5 = FUN_00566940(puVar10);
          uVar17 = FUN_00566a40(puVar10);
          uVar8 = FUN_00566b30(auStack_30,puVar10);
          (**(code **)(iVar7 + 0x418))(puVar10,uVar8,uVar17,uVar5,puVar13,fVar18);
          iVar7 = (**(code **)(*(int *)puVar10[0x16] + 8))();
          if ((iVar7 != 0) || (cVar2 = FUN_00566dc0(puVar10,0,0xbf800000), cVar2 == '\0'))
          goto switchD_0063bc6f_caseD_a;
          if ((char)in_ECX[0x21] == '\0') {
            cVar2 = FUN_00565dd0();
            if (cVar2 != '\0') {
              pcVar15 = FUN_00645a30;
              uVar14 = 0x459c4000;
              puVar13 = puVar10;
              uVar5 = (**(code **)(*puVar10 + 0x174))(0x459c4000,FUN_00645a30,puVar10);
              uVar12 = 0x459c4000;
              uVar17 = (**(code **)(*puVar10 + 0x174))(0x459c4000,uVar5);
              uVar8 = FUN_006ecc80(uVar17);
              FUN_00446b90(uVar8,uVar17,uVar12,uVar5,uVar14,pcVar15,puVar13);
            }
            *(undefined1 *)(in_ECX + 0x21) = 1;
          }
          cVar2 = FUN_00565de0();
          if (cVar2 != '\0') {
            pcVar15 = FUN_00645af0;
            uVar14 = 0x459c4000;
            puVar13 = puVar10;
            uVar5 = (**(code **)(*puVar10 + 0x174))(0x459c4000,FUN_00645af0,puVar10);
            uVar12 = 0x459c4000;
            uVar17 = (**(code **)(*puVar10 + 0x174))(0x459c4000,uVar5);
            uVar8 = FUN_006ecc80(uVar17);
            FUN_00446b90(uVar8,uVar17,uVar12,uVar5,uVar14,pcVar15,puVar13);
          }
          (**(code **)(*in_ECX + 0x188))(puVar10,1);
          if ((((piVar19 == (int *)0x0) ||
               (iVar7 = (**(code **)(*piVar19 + 0x170))(), iVar7 != DAT_00b35eb0)) &&
              ((*(int *)(iVar4 + 0x24) == 0 || (iVar4 = FUN_00569740(), iVar4 != 3)))) ||
             (cVar2 = FUN_0064ada0(), cVar2 != '\0')) {
            iVar4 = FUN_00566db0();
            if (iVar4 != 0) {
              puVar9 = (undefined4 *)FUN_00566b30(auStack_18,puVar10);
              puStack_4 = (uint *)FUN_00566db0(&uStack_48);
              fVar18 = (float)(int)puStack_4;
              if ((int)puStack_4 < 0) {
                fVar18 = fVar18 + 4.2949673e+09;
              }
              cVar2 = FUN_00635d60(puVar10,*puVar9,puVar9[1],puVar9[2],fVar18);
              if (cVar2 != '\0') {
                pcVar15 = *(code **)(*puVar10 + 0x1cc);
                puVar13 = &uStack_48;
                goto LAB_0063bf1d;
              }
            }
            goto switchD_0063bc6f_caseD_a;
          }
          if (piVar19 == (int *)0x0) {
            pcVar15 = *(code **)(*puVar10 + 0xf0);
            puVar16 = auStack_24;
            goto LAB_0063bf00;
          }
          puVar13 = (uint *)piVar19[10];
        }
        else {
          (**(code **)(*in_ECX + 0x188))(puVar10,1);
          if (((*(int *)(iVar4 + 0x24) == 0) || (iVar4 = FUN_00569740(), iVar4 != 3)) ||
             (cVar2 = FUN_0064ada0(), cVar2 != '\0')) goto switchD_0063bc6f_caseD_a;
          pcVar15 = *(code **)(*puVar10 + 0xf0);
          puVar16 = auStack_3c;
LAB_0063bf00:
          iVar4 = (*pcVar15)(puVar16);
          puVar13 = *(uint **)(iVar4 + 8);
        }
        pcVar15 = *(code **)(*puVar10 + 0x1e8);
        puStack_4 = puVar13;
        goto LAB_0063bf1d;
      case 1:
        FUN_00631050(puVar10,puStack_4);
        goto switchD_0063bc6f_caseD_a;
      case 2:
        bVar3 = (**(code **)(*in_ECX + 0x6c))(puVar10,puStack_4);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      case 3:
        iVar4 = (**(code **)(*in_ECX + 0x36c))();
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*puVar10 + 0x380))(), iVar4 == 0)) {
          (**(code **)(*in_ECX + 0x1b0))(puVar10);
        }
        FUN_006440b0(puVar10);
        goto switchD_0063bc6f_caseD_a;
      case 4:
        bVar3 = FUN_006284b0(puVar10,puStack_4);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      case 5:
        bVar3 = FUN_00628520(puVar10,puStack_4);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      case 6:
        iVar4 = (**(code **)(*in_ECX + 0x36c))();
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*puVar10 + 0x380))(), iVar4 == 0)) {
          (**(code **)(*in_ECX + 0x1b0))(puVar10);
        }
        bVar3 = FUN_00630d40(puVar10,puStack_4,1);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      case 7:
        iVar4 = (**(code **)(*in_ECX + 0x36c))();
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*puVar10 + 0x380))(), iVar4 == 0)) {
          (**(code **)(*in_ECX + 0x1b0))(puVar10);
        }
        bVar3 = FUN_00630400(puVar10,puStack_4);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      case 8:
        iVar4 = (**(code **)(*in_ECX + 0x36c))();
        if ((iVar4 != 0) && (iVar4 = (**(code **)(*puVar10 + 0x380))(), iVar4 == 0)) {
          pcVar15 = *(code **)(*in_ECX + 0x1b0);
          goto LAB_0063bf1d;
        }
        goto switchD_0063bc6f_caseD_a;
      case 9:
        iVar4 = (**(code **)(*in_ECX + 0x36c))();
        if (iVar4 != 0) {
          (**(code **)(*in_ECX + 0x1b0))(puVar10);
        }
        bVar3 = (**(code **)(*in_ECX + 0x56c))(puVar10,puStack_4);
        unaff_ESI = (uint)bVar3 << 0x18;
        break;
      default:
        goto switchD_0063bc6f_caseD_a;
      case 0xd:
        if (in_ECX[0xb] == 0) {
          (**(code **)(*in_ECX + 0x558))(puVar10);
        }
        piVar19 = (int *)in_ECX[0xb];
        if (piVar19 == (int *)0x0) {
          (**(code **)(*in_ECX + 0x188))(puVar10,1);
        }
        else {
          if (*(char *)(iVar4 + 0x20) != '\x01') {
            if ((((uint)piVar19[2] >> 5 & 1) != 0) || (((uint)piVar19[2] >> 0xb & 1) != 0)) {
              if ((*(uint *)(in_ECX[0xb] + 8) >> 5 & 1) != 0) {
                FUN_00566870(in_ECX[0xb],1);
              }
              (**(code **)(*in_ECX + 0x188))(puVar10,1);
              return;
            }
            cVar2 = (**(code **)(*piVar19 + 0x198))(1);
            if (cVar2 != '\0') {
              FUN_00566870(in_ECX[0xb],1);
              (**(code **)(*puVar10 + 0x2f8))(in_ECX[0xb]);
              return;
            }
            iVar4 = FUN_00566db0();
            fVar18 = (float)iVar4;
            if (iVar4 < 0) {
              fVar18 = fVar18 + 4.2949673e+09;
            }
            if (fVar18 < 1.0) {
              fVar18 = 400.0;
            }
            fVar11 = (float10)FUN_004d7e90(in_ECX[0xb],0);
            if (fVar11 <= (float10)fVar18) goto LAB_0063be8e;
            goto switchD_0063bc6f_caseD_a;
          }
          iVar4 = FUN_00663a00();
          if (DAT_00b36a80 <= iVar4) goto switchD_0063bc6f_caseD_a;
          (**(code **)(*in_ECX + 0x188))(puVar10,1);
        }
        break;
      case 0xe:
        if (((in_ECX[0xb] == 0) && ((**(code **)(*in_ECX + 0x558))(puVar10), in_ECX[0xb] == 0)) &&
           ((**(code **)(*in_ECX + 0x188))(puVar10,1), (char)in_ECX[0x34] == '\0')) {
          (**(code **)(*in_ECX + 0x194))(puVar10);
        }
        (**(code **)(*in_ECX + 0x6c))(puVar10,puStack_4);
        goto switchD_0063bc6f_caseD_a;
      case 0xf:
        FUN_00646200(puVar10,0,1,0xffffffff);
        goto switchD_0063bc6f_caseD_a;
      case 0x11:
        (**(code **)(*in_ECX + 0x84))(puVar10,iVar4,1);
        goto LAB_0063be8e;
      case 0x16:
        (**(code **)(*in_ECX + 0x1b0))(puVar10);
LAB_0063be8e:
        (**(code **)(*in_ECX + 0x188))(puVar10,1);
        break;
      case 0x1d:
        FUN_006358e0(puVar10,puStack_4);
        goto switchD_0063bc6f_caseD_a;
      case 0x1f:
        pcVar15 = *(code **)(*in_ECX + 0x528);
        goto LAB_0063bf1d;
      case 0x20:
        pcVar15 = *(code **)(*in_ECX + 0x52c);
        goto LAB_0063bf1d;
      case 0x25:
        (**(code **)(*in_ECX + 0x588))(puVar10,1,0);
        goto switchD_0063bc6f_caseD_a;
      case 0x29:
        pcVar15 = *(code **)(*in_ECX + 0x53c);
LAB_0063bf1d:
        (*pcVar15)(puVar13);
        goto switchD_0063bc6f_caseD_a;
      }
    } while ((char)((uint)unaff_ESI >> 0x18) != '\0');
  }
switchD_0063bc6f_caseD_a:
  iVar4 = FUN_00659a00();
  if (((iVar4 != 0) || (iVar4 = (**(code **)(*in_ECX + 0x184))(), iVar4 == 0)) ||
     (iVar7 = *(int *)(iVar4 + 0x18), iVar6 = (**(code **)(*in_ECX + 0x180))(),
     *(int *)((&PTR_DAT_00b152b0)[iVar7] + iVar6 * 4) != 0x2c)) goto LAB_0063c66c;
  if (in_ECX[0x30] == 0) {
    in_ECX[0x98] = 0;
  }
  iVar7 = *(int *)(iVar4 + 0x18);
  if (iVar7 == 0) {
LAB_0063bf80:
    cVar2 = FUN_00566dc0(puVar10,0,0xbf800000);
    if (cVar2 == '\0') {
LAB_0063bf9c:
      (**(code **)(*in_ECX + 0x188))(puVar10,0xffffffff);
      return;
    }
  }
  else {
    if (((iVar7 == 3) || (*(char *)(iVar4 + 0x20) == '\x03')) || (*(char *)(iVar4 + 0x20) == '\x04')
       ) goto LAB_0063bf9c;
    if (iVar7 == 7) goto LAB_0063bf80;
  }
  (**(code **)(*in_ECX + 0x194))(puVar10);
  if ((char)in_ECX[0x97] != '\0') {
    (**(code **)(*in_ECX + 0x188))(puVar10,0xffffffff);
    (**(code **)(*in_ECX + 0xbc))(0);
    return;
  }
  FUN_004fbf90(iVar4,puVar10 + 0x11,0x400);
  cVar2 = FUN_00565df0();
  if (cVar2 != '\0') {
    uVar5 = FUN_00402ba0();
    FUN_0041ffc0(iVar4,uVar5);
  }
  if (*(int *)(iVar4 + 0x30) == 0) {
    in_ECX[0xb] = 0;
    if ((in_ECX[0x30] == 0) || (cVar2 = (**(code **)(*in_ECX + 0x388))(), cVar2 != '\0')) {
      cVar2 = FUN_005660a0();
      if (cVar2 != '\0') {
        piVar19 = (int *)in_ECX[2];
        cVar2 = FUN_00567770();
        if (cVar2 == '\0') {
          in_ECX[2] = 0;
        }
        else {
          (**(code **)(*puVar10 + 0x44))(0x30000);
          iVar4 = FUN_0041fb20();
          if (iVar4 == 0) {
            *(undefined4 *)(puVar10[0x16] + 8) = 0;
            *(undefined4 *)(puVar10[0x16] + 4) = 0;
            (**(code **)(*(int *)puVar10[0x16] + 0xd0))(0);
            (**(code **)(*puVar10 + 0x17c))(0);
            (**(code **)(*(int *)puVar10[0x16] + 0x394))(0);
            (**(code **)(*(int *)puVar10[0x16] + 0x18))(puVar10,0);
          }
          else {
            uVar1 = puVar10[0x16];
            uVar5 = FUN_0041fb20();
            *(undefined4 *)(uVar1 + 8) = uVar5;
            FUN_005e8de0(*(undefined4 *)(puVar10[0x16] + 8));
            uVar1 = puVar10[0x16];
            uVar5 = FUN_0041fb40();
            *(undefined4 *)(uVar1 + 4) = uVar5;
            piStack_8 = (int *)puVar10[0x16];
            iVar4 = *piStack_8;
            uVar5 = FUN_0041fb60();
            (**(code **)(iVar4 + 0xd0))(uVar5);
            uVar1 = *puVar10;
            uVar5 = FUN_0041fb80();
            (**(code **)(uVar1 + 0x17c))(uVar5);
            piStack_10 = (int *)puVar10[0x16];
            iVar4 = *piStack_10;
            uVar5 = FUN_0041fba0();
            (**(code **)(iVar4 + 0x394))(uVar5);
            FUN_004246d0();
          }
        }
        if (piVar19 != (int *)0x0) {
          (**(code **)(*piVar19 + 0x10))(1);
        }
        if ((char)in_ECX[0x34] == '\0') {
          (**(code **)(*in_ECX + 0x194))(puVar10);
        }
      }
    }
    else {
      if ((int *)in_ECX[0x30] != (int *)0x0) {
        (**(code **)(*(int *)in_ECX[0x30] + 0x10))(1);
      }
      in_ECX[0x30] = 0;
    }
    if ((in_ECX[2] != 0) &&
       (((cVar2 = FUN_00565df0(), cVar2 != '\0' || ((*(uint *)(in_ECX[2] + 0x1c) >> 1 & 1) != 0)) ||
        ((*(uint *)(in_ECX[2] + 0x1c) >> 2 & 1) != 0)))) {
      in_ECX[0x6b] = 0;
    }
    if (in_ECX[0x11] != 0) {
      FUN_00401f20(in_ECX[0x11]);
    }
    in_ECX[0x11] = 0;
    in_ECX[9] = 0;
    cVar2 = FUN_0046cb60();
    while (cVar2 == '\0') {
      iVar4 = in_ECX[0xf];
      if (iVar4 != 0) {
        FUN_00401f20(iVar4);
      }
      FUN_0065c620(iVar4);
      cVar2 = FUN_0046cb60();
    }
    in_ECX[0x66] = 0;
    in_ECX[0xc] = 0;
    FUN_004526e0();
  }
LAB_0063c66c:
  if (((DAT_00b15800 == '\0') || (DAT_00b3bf80 == 0)) ||
     (cVar2 = FUN_006825c0(puVar10), cVar2 == '\0')) {
    (**(code **)(*(int *)piStack_8[0x16] + 0x20))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0063c730(int *param_1,float param_2,float param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  undefined2 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  LONG LVar12;
  float *pfVar13;
  int iVar14;
  undefined4 *puVar15;
  int *in_ECX;
  undefined4 unaff_EBX;
  bool bVar16;
  float10 fVar17;
  undefined4 *unaff_retaddr;
  float *pfVar18;
  float fStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  undefined1 auStack_28 [28];
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  cVar5 = FUN_0045a500();
  if (cVar5 != '\0') {
    return;
  }
  if (((*(uint *)(DAT_00b33b00 + 0x18) >> 0xd & 1) != 0) &&
     (fVar17 = (float10)FUN_00572ea0(2), (float10)0.0 < fVar17)) {
    return;
  }
  piVar4 = param_1;
  local_44 = DAT_00b3f9b0;
  local_4c = DAT_00b3f9a8;
  local_48 = DAT_00b3f9ac;
  if (param_1 == DAT_00b333c4) {
    piVar9 = (int *)FUN_0065d750(0);
    if ((char)DAT_00b333c4[0x162] == '\0') {
      param_1 = (int *)FUN_0065d750(1);
      piVar11 = param_1;
      if (piVar9 != (int *)0x0) {
        sVar6 = FUN_00470720(0);
        sVar7 = FUN_00470720(0);
        piVar11 = param_1;
        if (sVar6 != sVar7) goto LAB_0063c804;
      }
      goto LAB_0063c802;
    }
  }
  else {
    piVar11 = (int *)(**(code **)(*param_1 + 0x164))();
LAB_0063c802:
    piVar9 = piVar11;
  }
LAB_0063c804:
  cVar5 = (**(code **)(*piVar4 + 0x19c))();
  if ((((cVar5 == '\0') || (iVar10 = (**(code **)(*in_ECX + 0x2e4))(), iVar10 == 6)) &&
      (cVar5 = (**(code **)(*piVar4 + 0x198))(0), cVar5 == '\0')) &&
     (*(char *)((int)in_ECX + 0x2a9) == '\0')) {
    if (piVar9 != (int *)0x0) {
      bVar16 = ((uint)piVar4[2] >> 4 & 1) == 0;
      FUN_004723a0(&local_4c,piVar4,!bVar16,bVar16);
    }
    piVar11 = (int *)(**(code **)(*in_ECX + 0x18c))(&param_1);
    iVar10 = *piVar11;
    FUN_007016a0();
    if (((iVar10 != 0) && (iVar10 != -0x1f0)) && (cVar5 = FUN_00628e70(), cVar5 != '\0')) {
      fStack_50 = DAT_00b3f9a8;
      local_4c = DAT_00b3f9ac;
      local_48 = DAT_00b3f9b0;
    }
    if ((((((*(ushort *)(in_ECX + 0x7f) & 3) != 0) && ((*(ushort *)(in_ECX + 0x7f) & 0xc) != 0)) &&
         (cVar5 = (**(code **)(*piVar4 + 0x1f8))(), cVar5 == '\0')) &&
        ((iVar10 = (**(code **)(*in_ECX + 0x2d0))(), fVar2 = fStack_50, iVar10 < 0xb ||
         (0xc < iVar10)))) && (local_4c != 0.0)) {
      fVar3 = ((_DAT_00b33e9c * (float)param_1) / local_4c) * 0.7853982;
      if ((*(ushort *)(in_ECX + 0x7f) & 4) == 0) {
        if ((*(ushort *)(in_ECX + 0x7f) & 8) != 0) {
          param_1 = (int *)(1.5707964 - fVar3);
          fVar17 = (float10)FUN_00986000();
          param_1 = (int *)ABS((float)fVar17 * local_4c);
          fStack_50 = (float)param_1 + fStack_50;
        }
      }
      else {
        param_1 = (int *)(1.5707964 - fVar3);
        fVar17 = (float10)FUN_00986000();
        param_1 = (int *)ABS((float)fVar17 * local_4c);
        fStack_50 = fVar2 - (float)param_1;
      }
      fVar17 = (float10)FUN_00986000();
      local_4c = (float)fVar17 * local_4c;
    }
  }
  else {
    iVar10 = piVar4[0xf];
    cVar5 = (**(code **)(*piVar4 + 0x198))(0);
    FUN_0088f700(iVar10,&fStack_50,cVar5 == '\0');
    piVar11 = (int *)(**(code **)(*in_ECX + 0x18c))(&stack0x00000000);
    iVar10 = *piVar11;
    if (((unaff_retaddr != (undefined4 *)0x0) &&
        (LVar12 = InterlockedDecrement(unaff_retaddr + 1), LVar12 == 0)) &&
       (unaff_retaddr != (undefined4 *)0x0)) {
      (**(code **)*unaff_retaddr)(1);
    }
    if (iVar10 != 0) {
      puVar1 = (uint *)(iVar10 + 500);
      *puVar1 = *puVar1 | 0x1000;
    }
    param_2 = (float)piVar4[9];
    param_3 = (float)piVar4[10];
    param_1 = (int *)piVar4[8];
    FUN_0070fdd0(param_3);
    pfVar13 = (float *)FUN_00710250(&param_1,&fStack_50,auStack_28);
    fStack_50 = *pfVar13;
    local_4c = pfVar13[1];
    local_48 = pfVar13[2];
  }
  if (((uint)piVar4[2] >> 4 & 1) != 0) {
    param_1 = (int *)((float)piVar4[0xb] + fStack_50);
    param_2 = (float)piVar4[0xc] + local_4c;
    param_3 = (float)piVar4[0xd] + local_48;
    if ((*(int *)(DAT_00b333a0 + 0x34) == 0) && (piVar4 != DAT_00b333c4)) {
      FUN_00440590(&param_1,&param_3);
    }
    (**(code **)(*piVar4 + 0x1cc))(&param_1);
    return;
  }
  iVar10 = *piVar4;
  uVar8 = (**(code **)(*in_ECX + 0x2c0))();
  (**(code **)(iVar10 + 0x1b4))(unaff_EBX,&fStack_50,uVar8);
  iVar10 = FUN_006ecc80();
  if (iVar10 != 0) {
    cVar5 = FUN_004c97f0();
    if (cVar5 == '\0') {
      fStack_c = 0.0;
      pfVar13 = (float *)(**(code **)(*piVar4 + 0x174))();
      fStack_8 = *pfVar13;
      fStack_4 = pfVar13[1];
      fVar2 = pfVar13[2];
      pfVar13 = &fStack_c;
      pfVar18 = &fStack_8;
      FUN_004ce3c0(pfVar18,pfVar13);
      cVar5 = FUN_004c5b50(pfVar18,pfVar13);
      if ((cVar5 != '\0') && (32.0 < fStack_c - fVar2)) {
LAB_0063cbd0:
        (**(code **)(*piVar4 + 0x1cc))(&fStack_8);
        return;
      }
    }
    else {
      iVar14 = FUN_00441800(0,2);
      if ((iVar14 != 0) && (cVar5 = (**(code **)(*piVar4 + 400))(), cVar5 != '\0')) {
        pfVar13 = (float *)(**(code **)(*piVar4 + 0x174))();
        local_44 = *(float *)(iVar14 + 0x20);
        fStack_8 = local_44 - *pfVar13;
        fStack_38 = *(float *)(iVar14 + 0x2c);
        fStack_40 = *(float *)(iVar14 + 0x24);
        fStack_4 = fStack_40 - pfVar13[1];
        uStack_3c = *(undefined4 *)(iVar14 + 0x28);
        fVar17 = (float10)FUN_00404c90();
        if ((float10)fStack_38 < fVar17) {
          FUN_005e2e20(&fStack_8,*pfVar13,pfVar13[1],pfVar13[2],iVar10,0,0,0);
          cVar5 = FUN_008aa350(&stack0xffffff98);
          if (cVar5 != '\0') {
            cVar5 = FUN_005e0260();
            if ((cVar5 != '\0') && (iVar14 = FUN_005e1f60(), iVar14 == iVar10)) {
              puVar15 = (undefined4 *)FUN_00628e40(&fStack_50);
              pfVar13 = (float *)FUN_005e2e20(&local_44,*puVar15,puVar15[1],puVar15[2],iVar10,0,0,0)
              ;
              fStack_8 = *pfVar13;
              fStack_4 = pfVar13[1];
            }
            cVar5 = FUN_008aa350(&stack0xffffff98);
            if ((cVar5 != '\0') && (iVar14 = FUN_006ecc80(), iVar14 == iVar10)) {
              puVar15 = (undefined4 *)(**(code **)(*DAT_00b333c4 + 0x174))();
              pfVar13 = (float *)FUN_005e2e20(&local_44,*puVar15,puVar15[1],puVar15[2],iVar10,0,0,0)
              ;
              fStack_8 = *pfVar13;
              fStack_4 = pfVar13[1];
            }
          }
          goto LAB_0063cbd0;
        }
      }
    }
  }
  return;
}



void FUN_0063cfb0(int *param_1)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  float10 fVar7;
  undefined4 uVar8;
  
  cVar4 = FUN_0088d150(param_1[0xf],1,0);
  bVar3 = false;
  if (cVar4 != '\0') {
    fVar7 = (float10)(**(code **)(*in_ECX + 0x28))();
    fVar1 = (float)fVar7;
    fVar7 = (float10)FUN_00402bd0();
    fVar2 = (float)fVar7;
    if (fVar1 <= fVar2) {
      fVar2 = fVar2 - fVar1;
    }
    else {
      fVar2 = (fVar1 + 23.0) - fVar2;
    }
    fVar7 = (float10)FUN_004029d0();
    if (fVar7 * (float10)0.0005000000237487257 <= (float10)fVar2) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  if (((in_ECX[0x5f] != 0) && (iVar5 = FUN_004706e0(0), iVar5 != 0)) &&
     (iVar6 = FUN_0051ac70(), iVar6 == 0x20)) {
    uVar8 = 0xbf800000;
    fVar7 = (float10)FUN_00470ce0(iVar5,0xbf800000);
    FUN_00476d10(param_1,(float)fVar7,uVar8);
    FUN_00474510(param_1);
  }
  if (!bVar3) {
    FUN_005e9e70();
    (**(code **)(*param_1 + 0x144))();
    (**(code **)(*param_1 + 0x9c))(1);
    FUN_004dc550();
    FUN_00424870(param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0063d0c0(int *param_1)

{
  float fVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int *in_ECX;
  float10 fVar16;
  undefined4 unaff_retaddr;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int *piStack_48;
  int *piStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  undefined8 uStack_24;
  undefined8 uStack_18;
  undefined1 auStack_10 [4];
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar14 = param_1;
  iStack_40 = (**(code **)(*in_ECX + 0x184))();
  fVar16 = (float10)FUN_004d7e90(DAT_00b333c4,0);
  if ((float10)_DAT_00b36cc8 < fVar16) {
    return 1;
  }
  if (in_ECX[9] != 0) {
    iVar12 = in_ECX[0x38];
    iVar5 = FUN_00568240(in_ECX[9]);
    if ((iVar12 != iVar5) && (iVar12 != 0)) {
      (**(code **)(*in_ECX + 0x594))(param_1);
      goto LAB_0063d129;
    }
  }
  iVar5 = FUN_0047df80(0);
  iStack_38 = 0;
  iStack_3c = 0;
  piStack_44 = (int *)0x0;
  piStack_48 = (int *)0x0;
  iStack_34 = 0;
  iVar12 = *(int *)(iStack_40 + 0x24);
  iVar6 = FUN_005e02e0(0);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar6 + 0x44;
  }
  iVar7 = FUN_00485e00(param_1,iVar6);
  iVar6 = *(int *)(iStack_40 + 0x28);
  if ((iVar12 != 0) && (iVar8 = FUN_005697e0(), iVar8 != 0)) {
    piStack_44 = (int *)FUN_005697e0();
  }
  cVar3 = FUN_00566dc0(param_1,0,0xbf800000);
  if (cVar3 == '\0') {
    (**(code **)(*in_ECX + 0x188))(param_1,0xffffffff);
    return 0;
  }
  iVar8 = FUN_005e0ee0();
  if (((iVar8 == -1) && (piStack_44 != (int *)0x0)) &&
     (iVar8 = (**(code **)(*piStack_44 + 0x170))(), iVar8 == DAT_00b35eb0)) {
    param_1 = (int *)piStack_44[10];
    if (0.0 <= (float)param_1) {
      if (!NAN((float)param_1) && 6.2831855 < (float)param_1 != ((float)param_1 == 6.2831855)) {
        fVar16 = (float10)FUN_00982bfa();
        param_1 = (int *)(float)fVar16;
      }
    }
    else {
      fVar16 = (float10)FUN_00982bfa();
      param_1 = (int *)((float)fVar16 + 6.2831855);
    }
    uStack_24 = (double)((ulonglong)uStack_24 & 0xffffffff00000000);
    fVar16 = (float10)FUN_00683d80(piVar14,param_1,&uStack_24);
    uStack_18 = (double)CONCAT44(uStack_18._4_4_,(float)_DAT_00b36c18 * 0.017453292);
    fStack_30 = (float)param_1;
    if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) goto LAB_0063d2cb;
    FUN_005e05f0(0x30);
    (**(code **)(*in_ECX + 0x49c))();
    puVar9 = (undefined4 *)(**(code **)(*piStack_44 + 0x174))();
    FUN_004d8a30(*puVar9,puVar9[1],puVar9[2]);
    (**(code **)(*piVar14 + 0x1e8))(piStack_44[10]);
    (**(code **)(*in_ECX + 0x194))(piVar14);
  }
  pfVar10 = (float *)(**(code **)(*piVar14 + 0x174))();
  pfVar11 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
  fStack_8 = pfVar11[1] - pfVar10[1];
  fStack_4 = pfVar11[2] - pfVar10[2];
  fStack_c = *pfVar11 - *pfVar10;
  uStack_18._0_4_ = fStack_4;
  fVar16 = (float10)FUN_00683cb0(&fStack_c);
  uStack_18._0_4_ = (float)fVar16;
  fVar16 = (float10)FUN_00683d80(piVar14,(float)uStack_18,auStack_10);
  uStack_18 = (double)CONCAT44(uStack_18._4_4_,(float)ABS(fVar16));
  bVar2 = 0.7853982 <= (float)ABS(fVar16);
  if (iVar6 == 0) {
LAB_0063d54d:
    in_ECX[0x38] = 0;
  }
  else {
    if ((iVar12 != 0) && (iVar12 = FUN_005697e0(), iVar12 != 0)) {
      piStack_44 = (int *)FUN_005697e0();
    }
    piStack_48 = piStack_44;
    if ((piStack_44 != (int *)0x0) &&
       (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
      piStack_48 = (int *)FUN_00420d20();
    }
    iStack_34 = FUN_00452a60();
    iVar12 = FUN_00569e50();
    if (iVar12 == 0) {
      iVar12 = *in_ECX;
      uVar13 = FUN_00569e60();
      (**(code **)(iVar12 + 0xd0))(uVar13);
      iStack_40 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
      uVar13 = (**(code **)(*(int *)in_ECX[0xb] + 0x170))();
      iVar12 = FUN_00568240(uVar13);
LAB_0063d4d0:
      in_ECX[0x38] = iVar12;
    }
    else {
      iVar12 = FUN_00569e50();
      if (iVar12 == 1) {
        iStack_3c = FUN_00569e70();
        iVar12 = FUN_00568240(iStack_3c);
        goto LAB_0063d4d0;
      }
      iVar12 = FUN_00569e50();
      if (iVar12 == 2) {
        iVar12 = FUN_00569e80();
        goto LAB_0063d4d0;
      }
    }
    if (in_ECX[0x38] == 0) {
      piVar15 = piStack_48;
      if ((piStack_48 == (int *)0x0) && (piVar15 = piStack_44, piStack_44 == (int *)0x0)) {
        if (in_ECX[0xc] == 0) goto LAB_0063d54d;
        (**(code **)(*in_ECX + 0xd0))(in_ECX[0xc]);
        iStack_40 = (**(code **)(*(int *)in_ECX[0xc] + 0x170))();
        iVar12 = *(int *)in_ECX[0xc];
      }
      else {
        (**(code **)(*in_ECX + 0xd0))(piVar15);
        iStack_40 = (**(code **)(*piVar15 + 0x170))();
        iVar12 = *piVar15;
      }
      uVar13 = (**(code **)(iVar12 + 0x170))();
      iVar12 = FUN_00568240(uVar13);
      in_ECX[0x38] = iVar12;
    }
  }
  iVar12 = (**(code **)(*in_ECX + 0xec))(1);
  if (((iVar12 != 0) && (iVar12 = (**(code **)(*in_ECX + 0xec))(1), *(int *)(iVar12 + 8) != 0)) &&
     (iVar12 = (**(code **)(*in_ECX + 0xec))(1), *(char *)(*(int *)(iVar12 + 8) + 4) == '!')) {
    iVar12 = (**(code **)(*in_ECX + 0xec))(1);
    iStack_38 = *(int *)(iVar12 + 8);
  }
  switch(in_ECX[0x38]) {
  default:
    if (iStack_3c != 0) {
      (**(code **)(*in_ECX + 0x154))(iStack_3c);
    }
    if (((0 < iStack_34) && (iStack_34 <= in_ECX[0x73])) && (iVar12 = FUN_005e0ee0(), iVar12 == -1))
    {
      (**(code **)(*piVar14 + 0x164))();
      cVar3 = FUN_00472ea0();
      if (cVar3 != '\0') {
        if (in_ECX[9] != 0) {
          FUN_005faea0(in_ECX[9],1,0,1,0);
        }
        goto LAB_0063eab9;
      }
    }
    if ((piStack_44 != (int *)0x0) &&
       (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
      param_1 = (int *)piStack_44[10];
      if (0.0 <= (float)param_1) {
        if (!NAN((float)param_1) && 6.2831855 < (float)param_1 != ((float)param_1 == 6.2831855)) {
          fVar16 = (float10)FUN_00982bfa();
          param_1 = (int *)(float)fVar16;
        }
      }
      else {
        fVar16 = (float10)FUN_00982bfa();
        param_1 = (int *)((float)fVar16 + 6.2831855);
      }
      uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff00000000);
      fVar16 = (float10)FUN_00683d80(piVar14,param_1,&uStack_18);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(float)_DAT_00b36c18 * 0.017453292);
      fStack_30 = (float)param_1;
      if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) goto LAB_0063d2cb;
      FUN_005e05f0(0x30);
      (**(code **)(*in_ECX + 0x49c))();
    }
    iVar12 = (**(code **)(*piVar14 + 0x164))();
    if (in_ECX[9] == 0) {
      if (in_ECX[0x38] != 0) {
LAB_0063d129:
        (**(code **)(*in_ECX + 0x188))(piVar14,0xfffffffe);
        return 0;
      }
      if (in_ECX[0x38] == 0) goto LAB_0063ec01;
    }
    else {
LAB_0063ec01:
      if ((iVar12 != 0) && (cVar3 = FUN_00472ea0(), cVar3 != '\0')) {
        FUN_00520f00(in_ECX[9]);
        (**(code **)(*in_ECX + 0x48))(piVar14);
        iVar12 = *in_ECX;
        iVar5 = FUN_0047df80(0);
        fStack_4 = (float)(iVar5 % 5000) * 0.001 + 5.0;
        (**(code **)(iVar12 + 0x224))(fStack_4);
        FUN_00520f00(0);
        in_ECX[0x73] = in_ECX[0x73] + 1;
      }
    }
    cVar3 = FUN_00472ea0();
    if (cVar3 != '\0') {
      if (in_ECX[9] != 0) {
        FUN_005faea0(in_ECX[9],1,0,1,0);
      }
      cVar3 = FUN_00565df0();
      if (((cVar3 != '\0') && (piStack_44[0xc] == 0)) && (cVar3 = FUN_00472ea0(), cVar3 != '\0')) {
        (**(code **)(*in_ECX + 0x188))(piVar14,2);
      }
    }
    break;
  case 3:
    iVar12 = FUN_00569e50();
    if (iVar12 == 1) {
      FUN_00569e70();
    }
    else {
      iVar12 = FUN_00569e50();
      if (iVar12 != 0) {
        return 0;
      }
      piVar14 = (int *)FUN_00569e60();
      (**(code **)(*piVar14 + 0x170))();
    }
    cVar3 = FUN_00468ff0(0xd,0);
    if ((cVar3 != '\0') && (cVar3 = FUN_005e5670(), cVar3 == '\0')) {
      FUN_005f4ae0(1);
      return 0;
    }
    break;
  case 5:
  case 0x15:
    cVar3 = (**(code **)(*in_ECX + 0x554))(piVar14,1);
    if (cVar3 == '\0') {
      (**(code **)(*in_ECX + 0x188))(piVar14,2);
      (**(code **)(*in_ECX + 0x594))(piVar14);
      if ((char)in_ECX[0x34] != '\0') {
        return 0;
      }
      (**(code **)(*in_ECX + 0x194))(piVar14);
      return 0;
    }
    iVar12 = FUN_00569e50();
    if (iVar12 == 1) {
      iVar12 = FUN_00569e70();
    }
    else {
      iVar12 = FUN_00569e50();
      if (iVar12 != 0) goto switchD_0063d5c2_caseD_1;
      piVar15 = (int *)FUN_00569e60();
      iVar12 = (**(code **)(*piVar15 + 0x170))();
    }
    if ((iVar12 != 0) &&
       (iVar12 = FUN_009832e6(iVar12,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0), iVar12 != 0)) {
      FUN_004691b0(iVar12);
      cVar3 = FUN_00468ff0(0xd,0);
      if (cVar3 != '\0') {
        iVar5 = (**(code **)(*(int *)piVar14[0x16] + 0xf8))(1);
        if (iVar5 == 0) {
          FUN_005faea0(iVar12,1,0,1,0);
        }
        FUN_005e0e10(1);
        if (((0 < iStack_34) && (iStack_34 <= in_ECX[0x73])) &&
           (iVar12 = FUN_005e0ee0(), iVar12 == -1)) {
          (**(code **)(*piVar14 + 0x164))();
          cVar3 = FUN_00472ea0();
          if (cVar3 != '\0') {
            (**(code **)(*in_ECX + 0x188))(piVar14,2);
            (**(code **)(*in_ECX + 0x594))(piVar14);
            FUN_005f4ae0(0);
            FUN_005e0e10(0);
            goto LAB_0063ead5;
          }
        }
        if ((piStack_44 != (int *)0x0) &&
           (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
          fVar1 = (float)piStack_44[10];
          if (0.0 <= fVar1) {
            if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
              fVar16 = (float10)FUN_00982bfa();
              fVar1 = (float)fVar16;
            }
          }
          else {
            fVar16 = (float10)FUN_00982bfa();
            fVar1 = (float)fVar16 + 6.2831855;
          }
          uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff00000000);
          fVar16 = (float10)FUN_00683d80(piVar14,fVar1,&uStack_18);
          uStack_24 = (double)CONCAT44(uStack_24._4_4_,(float)_DAT_00b36c18 * 0.017453292);
          if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) goto LAB_0063e67f;
          FUN_005e05f0(0x30);
        }
        if (piStack_48 != (int *)0x0) {
          (**(code **)(*in_ECX + 0x484))(piStack_48);
        }
        if ((0.0 <= (float)in_ECX[0x6c]) || (0.0 <= (float)in_ECX[0x6d])) {
          FUN_005f4ae0(0);
          in_ECX[0x6c] = 0x3f4ccccd;
        }
        else {
          FUN_005f4ae0(1);
          in_ECX[0x6d] = 0x3fc00000;
        }
        in_ECX[0x6d] = (int)((float)in_ECX[0x6d] - _DAT_00b33e9c);
      }
    }
  case 1:
switchD_0063d5c2_caseD_1:
    if (((0 < iStack_34) && (iStack_34 <= in_ECX[0x73])) && (iVar12 = FUN_005e0ee0(), iVar12 == -1))
    {
      (**(code **)(*piVar14 + 0x164))();
      cVar3 = FUN_00472ea0();
      if (cVar3 != '\0') {
LAB_0063eab9:
        (**(code **)(*in_ECX + 0x188))(piVar14,2);
        (**(code **)(*in_ECX + 0x594))(piVar14);
LAB_0063ead5:
        if ((char)in_ECX[0x34] == '\0') {
          (**(code **)(*in_ECX + 0x194))(piVar14);
        }
        return 1;
      }
    }
    if ((piStack_44 != (int *)0x0) &&
       (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
      fVar1 = (float)piStack_44[10];
      if (0.0 <= fVar1) {
        if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
          fVar16 = (float10)FUN_00982bfa();
          fVar1 = (float)fVar16;
        }
      }
      else {
        fVar16 = (float10)FUN_00982bfa();
        fVar1 = (float)fVar16 + 6.2831855;
      }
      uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff00000000);
      fVar16 = (float10)FUN_00683d80(piVar14,fVar1,&uStack_18);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(float)_DAT_00b36c18 * 0.017453292);
      if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) {
LAB_0063e67f:
        (**(code **)(*in_ECX + 0x484))(0);
        FUN_00685530(piVar14,unaff_retaddr,1);
        return 0;
      }
      FUN_005e05f0(0x30);
    }
    cVar3 = (**(code **)(*in_ECX + 0x51c))(piVar14,1);
    if (cVar3 != '\0') {
      in_ECX[0x73] = in_ECX[0x73] + 1;
    }
    cVar3 = FUN_00565df0();
    if ((cVar3 != '\0') && (piStack_48[0xc] == 0)) {
      (**(code **)(*piVar14 + 0x164))();
      cVar3 = FUN_00472ea0();
      if (cVar3 != '\0') {
        (**(code **)(*in_ECX + 0x49c))();
        (**(code **)(*in_ECX + 0x188))(piVar14,2);
        return 0;
      }
    }
    break;
  case 0xd:
  case 0x17:
  case 0x18:
  case 0x19:
    cVar3 = (**(code **)(*in_ECX + 0x554))(piVar14,1);
    if ((cVar3 == '\0') && (in_ECX[0x38] != 0x17)) {
      (**(code **)(*in_ECX + 0x188))(piVar14,2);
      (**(code **)(*in_ECX + 0x594))(piVar14);
      if ((char)in_ECX[0x34] != '\0') {
        return 0;
      }
      (**(code **)(*in_ECX + 0x194))(piVar14);
      return 0;
    }
    if (iStack_38 != 0) {
      iVar12 = FUN_00569e50();
      if (iVar12 == 1) {
        iVar12 = FUN_00569e70();
        if (iStack_38 != iVar12) {
          uVar20 = 0;
          uVar19 = 1;
          uVar18 = 0;
          uVar17 = 1;
          uVar13 = FUN_00569e70(1,0,1,0);
          FUN_005faea0(uVar13,uVar17,uVar18,uVar19,uVar20);
        }
      }
      else {
        iVar12 = FUN_00569e50();
        if (iVar12 == 0) {
          piVar15 = (int *)FUN_00569e60();
          iVar12 = (**(code **)(*piVar15 + 0x170))();
          if (iStack_38 != iVar12) {
            piVar15 = (int *)FUN_00569e60();
            iVar12 = FUN_00569e60();
            uVar19 = 0;
            uVar18 = 1;
            iVar12 = iVar12 + 0x44;
            uVar17 = 1;
            uVar13 = (**(code **)(*piVar15 + 0x170))(1,iVar12,1,0);
            FUN_005faea0(uVar13,uVar17,iVar12,uVar18,uVar19);
          }
        }
      }
    }
    if (((iStack_34 < 1) || (in_ECX[0x73] < iStack_34)) || (iVar12 = FUN_005e0ee0(), iVar12 != -1))
    {
      if (((((float)in_ECX[0x6d] <= 0.0) && (iVar12 = FUN_005e0ee0(), iVar12 == -1)) &&
          ((piStack_48 != (int *)0x0 &&
           ((cVar3 = (**(code **)(*piStack_48 + 400))(), cVar3 == '\0' && (0x46 < iVar5 % 100))))))
         && (7 < in_ECX[0x73])) {
        (**(code **)(*in_ECX + 0x300))(0);
        (**(code **)(*in_ECX + 0x214))(0);
        FUN_00631dc0(piVar14,piStack_48);
        return 0;
      }
      cVar3 = FUN_00566dc0(piVar14,0,0xbf800000);
      if (cVar3 == '\0') {
        (**(code **)(*in_ECX + 0x188))(piVar14,0xffffffff);
        return 0;
      }
      iVar12 = (**(code **)(*in_ECX + 0xec))(1);
      if (iVar12 != 0) {
        iStack_38 = 0;
        iVar12 = (**(code **)(*in_ECX + 0xec))(1);
        if ((*(int *)(iVar12 + 8) != 0) &&
           (iVar12 = (**(code **)(*in_ECX + 0xec))(1), *(char *)(*(int *)(iVar12 + 8) + 4) == '!'))
        {
          iVar12 = (**(code **)(*in_ECX + 0xec))(1);
          iStack_38 = *(int *)(iVar12 + 8);
        }
      }
      iVar12 = in_ECX[0x38];
      if (iVar12 == 0x17) {
        if (iStack_38 != 0) {
          FUN_005f2e70(iStack_38,1,0,0,0,0);
        }
      }
      else {
        if (iVar12 == 0x19) {
          iVar12 = 0;
          if ((iStack_38 == 0) ||
             ((*(char *)(iStack_38 + 0x90) != '\x05' && (*(char *)(iStack_38 + 0x90) != '\x04')))) {
            uStack_18 = (double)((ulonglong)uStack_18._4_4_ << 0x20);
            if ((int *)in_ECX[0xb] == (int *)0x0) {
              if (iStack_3c != 0) {
                uVar17 = 0;
                uVar13 = 1;
                goto LAB_0063dcaf;
              }
              iVar5 = FUN_00486150(0x19,&uStack_18);
              if (iVar5 == 0) goto LAB_0063dd60;
LAB_0063dcce:
              FUN_005faea0(iVar5,1,0,1,0);
              iVar5 = (**(code **)(*in_ECX + 0xec))(1);
              if (iVar5 != 0) {
                iStack_38 = 0;
                iVar5 = (**(code **)(*in_ECX + 0xec))(1);
                if ((*(int *)(iVar5 + 8) != 0) &&
                   (iVar5 = (**(code **)(*in_ECX + 0xec))(1),
                   *(char *)(*(int *)(iVar5 + 8) + 4) == '!')) {
                  iVar5 = (**(code **)(*in_ECX + 0xec))(1);
                  iStack_38 = *(int *)(iVar5 + 8);
                }
              }
            }
            else {
              uVar17 = 0;
              uVar13 = 1;
              iStack_3c = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(1,0);
LAB_0063dcaf:
              iVar12 = FUN_00485e80(iStack_3c,uVar13,uVar17);
              if ((iVar12 != 0) && (iVar5 = *(int *)(iVar12 + 8), iVar5 != 0)) goto LAB_0063dcce;
LAB_0063dd60:
              (**(code **)(*in_ECX + 0x188))(piVar14,2);
            }
            if (iVar12 != 0) {
              FUN_00484470();
              FUN_00401f20(iVar12);
            }
          }
          iVar12 = 0;
          if ((in_ECX[0x3b] == 0) && (iVar12 = (**(code **)(*piVar14 + 700))(), iVar12 != 0)) {
            uVar13 = *(undefined4 *)(iVar12 + 8);
            uVar20 = 0;
            uVar19 = 1;
            uVar18 = 0;
            uVar17 = FUN_004b2460(0,1,0);
            FUN_005faea0(uVar13,uVar17,uVar18,uVar19,uVar20);
          }
          iVar5 = (**(code **)(*in_ECX + 0xf4))(1);
          if ((iVar5 == 0) || ((iStack_38 != 0 && (*(char *)(iStack_38 + 0x90) != '\x05'))))
          goto LAB_0063da1f;
          if (iVar12 == 0) goto LAB_0063deaf;
        }
        else {
          if ((iVar12 != 0x18) ||
             (((iStack_38 != 0 && (*(char *)(iStack_38 + 0x90) != '\x05')) &&
              (*(char *)(iStack_38 + 0x90) != '\x04')))) goto LAB_0063deaf;
          iVar12 = 0;
          uStack_18 = (double)((ulonglong)uStack_18._4_4_ << 0x20);
          if ((int *)in_ECX[0xb] == (int *)0x0) {
            if (iStack_3c != 0) {
              uVar17 = 0;
              uVar13 = 1;
              goto LAB_0063de2e;
            }
            iVar5 = FUN_00486150(0x18,&uStack_18);
            if (iVar5 == 0) goto LAB_0063de79;
LAB_0063de45:
            FUN_005faea0(iVar5,1,0,1,0);
          }
          else {
            uVar17 = 0;
            uVar13 = 1;
            iStack_3c = (**(code **)(*(int *)in_ECX[0xb] + 0x170))(1,0);
LAB_0063de2e:
            iVar12 = FUN_00485e80(iStack_3c,uVar13,uVar17);
            if ((iVar12 != 0) && (iVar5 = *(int *)(iVar12 + 8), iVar5 != 0)) goto LAB_0063de45;
LAB_0063de79:
            (**(code **)(*in_ECX + 0x188))(piVar14,2);
          }
          if (iVar12 == 0) goto LAB_0063deaf;
          FUN_005faea0(*(undefined4 *)(iVar12 + 8),1,0,1,0);
        }
        FUN_00484470();
        FUN_00401f20(iVar12);
      }
LAB_0063deaf:
      if ((piStack_44 != (int *)0x0) &&
         (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
        fStack_30 = (float)piStack_44[10];
        if (0.0 <= fStack_30) {
          if (!NAN(fStack_30) && 6.2831855 < fStack_30 != (fStack_30 == 6.2831855)) {
            fVar16 = (float10)FUN_00982bfa();
            fStack_30 = (float)fVar16;
            uStack_18 = (double)CONCAT44(uStack_18._4_4_,fStack_30);
          }
        }
        else {
          fVar16 = (float10)FUN_00982bfa();
          uStack_18 = (double)CONCAT44(uStack_18._4_4_,(float)fVar16);
          fStack_30 = (float)fVar16 + 6.2831855;
        }
        uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff00000000);
        fVar16 = (float10)FUN_00683d80(piVar14,fStack_30,&uStack_18);
        uStack_24 = (double)CONCAT44(uStack_24._4_4_,(float)_DAT_00b36c18 * 0.017453292);
        if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) {
LAB_0063d2cb:
          FUN_00685530(piVar14,fStack_30,1);
          (**(code **)(*in_ECX + 0x484))(0);
          return 0;
        }
        FUN_005e05f0(0x30);
        (**(code **)(*in_ECX + 0x49c))();
        puVar9 = (undefined4 *)(**(code **)(*piStack_44 + 0x174))();
        FUN_004d8a30(*puVar9,puVar9[1],puVar9[2]);
        (**(code **)(*piVar14 + 0x1e8))(piStack_44[10]);
        (**(code **)(*in_ECX + 0x194))(piVar14);
        piStack_48 = (int *)FUN_00420d20();
      }
      cVar3 = (**(code **)(*in_ECX + 0x304))();
      if (cVar3 == '\0') {
        FUN_005e6d70(1);
        *(undefined1 *)(in_ECX + 0x91) = 1;
        goto LAB_0063e42c;
      }
      if (((float)in_ECX[0x6c] <= 0.0) &&
         ((iVar12 = FUN_005e0ee0(), iVar12 == -1 || (iVar12 = FUN_005e0ee0(), iVar12 == 6)))) {
        fVar16 = (float10)FUN_004d7e90(piVar14,0);
        uStack_24 = (double)fVar16;
        fVar16 = (float10)FUN_004d7e90(piStack_48,0);
        if ((fVar16 <= (float10)uStack_24) || (bVar2)) {
          iVar12 = FUN_0047df80(0);
          iVar12 = iVar12 % 100;
          cVar3 = -1;
          iVar5 = (**(code **)(*in_ECX + 0xec))(1);
          if (((iVar5 != 0) && (iVar5 = (**(code **)(*in_ECX + 0xec))(1), *(int *)(iVar5 + 8) != 0))
             && (iVar5 = (**(code **)(*in_ECX + 0xec))(1), *(char *)(*(int *)(iVar5 + 8) + 4) == '!'
                )) {
            iVar5 = (**(code **)(*in_ECX + 0xec))(1);
            if ((*(int *)(iVar5 + 8) != 0) && (*(char *)(*(int *)(iVar5 + 8) + 0x90) == '\x05')) {
              FUN_005f48d0(0x13);
              piVar15 = (int *)FUN_00403c00();
              in_ECX[0x6d] = *piVar15;
              in_ECX[0x73] = in_ECX[0x73] + 1;
              in_ECX[0x6c] = 0x3f000000;
              if (piStack_48 == (int *)0x0) {
                return 0;
              }
              FUN_00632090(piVar14,piStack_48);
              goto LAB_0063e42c;
            }
          }
          if ((char)in_ECX[0x34] != '\0') {
            iVar5 = (**(code **)(*in_ECX + 0x2d0))();
            if (iVar5 == -1) {
              if ((piStack_48 == (int *)0x0) ||
                 (cVar4 = (**(code **)(*piStack_48 + 400))(), cVar4 == '\0')) {
                if (iVar12 < 0xb) {
                  cVar3 = '\x18';
                }
                else if (iVar12 < 0x15) {
                  cVar3 = '\x1a';
                }
                else if (iVar12 < 0x1f) {
                  cVar3 = '\x16';
                }
                else if (iVar12 < 0x29) {
                  cVar3 = '\x19';
                }
                else {
                  cVar3 = (0x46 < iVar12) + '\x14';
                }
              }
              else {
                cVar4 = FUN_005e05b0();
                if (cVar4 == '\0') {
                  if ((0x1d < iVar12) &&
                     ((iVar5 = FUN_005e0ee0(), iVar5 == 2 || (iVar5 = FUN_005e0ee0(), iVar5 == 3))))
                  {
                    FUN_005f4ae0(1);
                    in_ECX[0x6c] = 0x3f99999a;
                    return 0;
                  }
                  if (iVar12 < 0xb) {
                    cVar3 = '\x18';
                  }
                  else if (iVar12 < 0x15) {
                    cVar3 = '\x1a';
                  }
                  else if (iVar12 < 0x1f) {
                    cVar3 = '\x16';
                  }
                  else if (iVar12 < 0x29) {
                    cVar3 = '\x19';
                  }
                  else {
                    cVar3 = (0x46 < iVar12) + '\x14';
                  }
                }
              }
              cVar4 = FUN_00615f70(piVar14,cVar3,&uStack_24);
              if ((cVar4 != '\0') && (uStack_24._4_4_ != 0.0)) {
                cVar3 = '\x15';
              }
              cVar4 = FUN_005e0550();
              if ((((cVar4 != '\0') && (cVar4 = (**(code **)(*in_ECX + 0x13c))(), cVar4 == '\0')) &&
                  (cVar4 = (**(code **)(*in_ECX + 0x138))(), cVar4 == '\0')) &&
                 (cVar4 = FUN_005e0530(), cVar4 == '\0')) {
                cVar3 = '\x16';
              }
              cVar4 = FUN_005e5670();
              if (cVar4 == '\0') {
                FUN_005f48d0(cVar3);
              }
              in_ECX[0x6c] = 0x3f4ccccd;
            }
            else {
              cVar3 = FUN_005e5670();
              if (cVar3 != '\0') {
                FUN_005f4ae0(0);
              }
            }
          }
          goto LAB_0063e42c;
        }
      }
      cVar3 = FUN_00566dc0(piVar14,0,0xbf800000);
      if ((cVar3 == '\0') && (iVar12 = FUN_005e0ee0(), iVar12 == -1)) {
        (**(code **)(*piVar14 + 0x164))();
        cVar3 = FUN_00472ea0();
        if (cVar3 != '\0') {
          (**(code **)(*in_ECX + 0x188))(piVar14,0xffffffff);
        }
      }
      if ((float)in_ECX[0x6d] <= 0.0) {
        in_ECX[0x6c] = (int)((float)in_ECX[0x6c] - _DAT_00b33e9c);
        goto LAB_0063e42c;
      }
      (**(code **)(*piVar14 + 0x164))();
      uVar13 = FUN_00470720(3);
      cVar3 = FUN_0051ac80(uVar13);
      if (cVar3 != '\0') {
        uVar13 = FUN_00470720(3);
        cVar3 = FUN_0051acc0(uVar13);
        if (cVar3 == '\0') {
          if ((float)in_ECX[0x6d] <= 0.0) {
            fVar16 = (float10)FUN_004d7e90(piVar14,0);
            uStack_24 = (double)fVar16;
            fVar16 = (float10)FUN_004d7e90(piStack_48,0);
            if ((fVar16 <= (float10)uStack_24) || (bVar2)) goto LAB_0063e3ec;
          }
          iVar12 = FUN_00470750(3);
          if (iVar12 == 2) {
            FUN_004706d0(3);
          }
        }
      }
LAB_0063e3ec:
      fVar16 = (float10)FUN_004d7e90(piVar14,0);
      uStack_24 = (double)fVar16;
      fVar16 = (float10)FUN_004d7e90(piStack_48,0);
      if ((fVar16 <= (float10)uStack_24) || (bVar2)) {
        in_ECX[0x6d] = (int)((float)in_ECX[0x6d] - _DAT_00b33e9c);
      }
LAB_0063e42c:
      if (piStack_48 == (int *)0x0) {
        return 0;
      }
      (**(code **)(*in_ECX + 0x484))(piStack_48);
      return 0;
    }
    goto LAB_0063eab9;
  case 0xe:
    if (((0 < iStack_34) && (iStack_34 <= in_ECX[0x73])) && (iVar12 = FUN_005e0ee0(), iVar12 == -1))
    goto LAB_0063eab9;
    if ((((((float)in_ECX[0x6d] <= 0.0) && (iVar12 = FUN_005e0ee0(), iVar12 == -1)) &&
         (piStack_48 != (int *)0x0)) &&
        ((cVar3 = (**(code **)(*piStack_48 + 400))(), cVar3 == '\0' && (0x46 < iVar5 % 100)))) &&
       (7 < in_ECX[0x73])) {
      (**(code **)(*in_ECX + 0x300))(0);
      (**(code **)(*in_ECX + 0x214))(0);
      FUN_00631dc0(piVar14,piStack_48);
      return 0;
    }
    if ((piStack_44 != (int *)0x0) &&
       (iVar12 = (**(code **)(*piStack_44 + 0x170))(), iVar12 == DAT_00b35eb0)) {
      fVar1 = (float)piStack_44[10];
      if (0.0 <= fVar1) {
        if (!NAN(fVar1) && 6.2831855 < fVar1 != (fVar1 == 6.2831855)) {
          fVar16 = (float10)FUN_00982bfa();
          fVar1 = (float)fVar16;
          uStack_18 = (double)CONCAT44(uStack_18._4_4_,fVar1);
        }
      }
      else {
        fVar16 = (float10)FUN_00982bfa();
        uStack_18 = (double)CONCAT44(uStack_18._4_4_,(float)fVar16);
        fVar1 = (float)fVar16 + 6.2831855;
      }
      uStack_18 = (double)((ulonglong)uStack_18 & 0xffffffff00000000);
      fVar16 = (float10)FUN_00683d80(piVar14,fVar1,&uStack_18);
      uStack_24 = (double)CONCAT44(uStack_24._4_4_,(float)_DAT_00b36c18 * 0.017453292);
      if ((float)_DAT_00b36c18 * 0.017453292 < ABS((float)fVar16)) {
        (**(code **)(*in_ECX + 0x484))(0);
        FUN_00685530(piVar14,iStack_38,1);
        return 0;
      }
      (**(code **)(*in_ECX + 0x49c))();
      FUN_005e05f0(0x30);
      puVar9 = (undefined4 *)(**(code **)(*piStack_44 + 0x174))();
      FUN_004d8a30(*puVar9,puVar9[1],puVar9[2]);
      (**(code **)(*piVar14 + 0x1e8))(piStack_44[10]);
      (**(code **)(*in_ECX + 0x194))(piVar14);
    }
    iVar12 = 0;
    iVar5 = (**(code **)(*in_ECX + 0xec))(1);
    if ((*(int *)(iVar5 + 8) != 0) &&
       (iVar5 = (**(code **)(*in_ECX + 0xec))(1), *(char *)(*(int *)(iVar5 + 8) + 4) == '!')) {
      iVar12 = (**(code **)(*in_ECX + 0xec))(1);
      iVar12 = *(int *)(iVar12 + 8);
      if ((iVar12 != 0) && (*(char *)(iVar12 + 0x90) == '\x05')) goto LAB_0063d90f;
    }
    iVar5 = (**(code **)(*piVar14 + 0x2b8))(5);
    if (iVar5 != 0) {
      FUN_005faea0(*(undefined4 *)(iVar5 + 8),1,0,1,0);
    }
    if ((in_ECX[0x3b] == 0) && (iVar5 = (**(code **)(*piVar14 + 700))(), iVar5 != 0)) {
      uVar13 = *(undefined4 *)(iVar5 + 8);
      uVar20 = 0;
      uVar19 = 1;
      uVar18 = 0;
      uVar17 = FUN_004b2460(0,1,0);
      FUN_005faea0(uVar13,uVar17,uVar18,uVar19,uVar20);
      iVar12 = iVar7;
    }
    iVar6 = (**(code **)(*in_ECX + 0xf4))(1);
    if ((iVar6 != 0) && ((iVar12 == 0 || (*(char *)(iVar12 + 0x90) == '\x05')))) {
      if (iVar5 != 0) {
        FUN_00484470();
        FUN_00401f20(iVar5);
      }
LAB_0063d90f:
      cVar3 = (**(code **)(*in_ECX + 0x304))();
      if (cVar3 == '\0') {
        FUN_005e6d70(1);
        *(undefined1 *)(in_ECX + 0x91) = 1;
        return 0;
      }
      if (((float)in_ECX[0x6c] <= 0.0) && (iVar12 = FUN_005e0ee0(), iVar12 == -1)) {
        fVar16 = (float10)FUN_004d7e90(piVar14,0);
        uStack_18 = (double)fVar16;
        fVar16 = (float10)FUN_004d7e90(piStack_48,0);
        if ((fVar16 <= (float10)uStack_18) || (bVar2)) {
          FUN_005f48d0(0x13);
          piVar15 = (int *)FUN_00403c00();
          iVar12 = *piVar15;
          in_ECX[0x73] = in_ECX[0x73] + 1;
          in_ECX[0x6d] = iVar12;
          in_ECX[0x6c] = 0x3f000000;
          if (piStack_48 != (int *)0x0) {
            FUN_00632090(piVar14,piStack_48);
          }
          piVar14 = (int *)(**(code **)(*(int *)piVar14[0x16] + 0xec))(1);
          if (piVar14 == (int *)0x0) {
            return 0;
          }
          if (*piVar14 == 0) {
            return 0;
          }
          FUN_0041f610();
          return 0;
        }
      }
      in_ECX[0x6c] = (int)((float)in_ECX[0x6c] - 1.0);
      return 0;
    }
LAB_0063da1f:
    (**(code **)(*in_ECX + 0x188))(piVar14,2);
    goto LAB_0063ead5;
  case 0xf:
  case 0x10:
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
    if (((0 < iStack_34) && (iStack_34 <= in_ECX[0x73])) && (iVar12 = FUN_005e0ee0(), iVar12 == -1))
    goto LAB_0063eab9;
    if (0.0 < (float)in_ECX[0x6c]) {
      fVar1 = (float)in_ECX[0x6c] - _DAT_00b33e9c;
LAB_0063e9f9:
      in_ECX[0x6c] = (int)fVar1;
    }
    else {
      if ((in_ECX[0x52] == 0) && (iStack_3c != 0)) {
        iVar12 = FUN_009832e6(iStack_3c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03280,0);
        in_ECX[0x52] = iVar12;
      }
      if (in_ECX[0x52] != 0) {
        iVar12 = FUN_004152c0(3,0);
        if (*(int *)(iVar12 + 0x10) == 2) {
          FUN_005f59e0(in_ECX[0x52],piStack_48,1);
          fVar1 = 0.8;
          in_ECX[0x73] = in_ECX[0x73] + 1;
          in_ECX[0x52] = 0;
        }
        else if (*(int *)(iVar12 + 0x10) == 1) {
          FUN_005f5870(in_ECX[0x52],piStack_48);
          fVar1 = 0.8;
          in_ECX[0x73] = in_ECX[0x73] + 1;
          in_ECX[0x52] = 0;
        }
        else {
          cVar3 = (**(code **)(*in_ECX + 0x2dc))();
          if ((cVar3 != '\0') &&
             (((iVar12 = FUN_005e0ee0(), iVar12 == -1 && (piVar14 == (int *)0xffffff98)) ||
              (cVar3 = FUN_006a1df0(in_ECX[0x52]), cVar3 == '\0')))) {
            (**(code **)(*in_ECX + 0x54c))(piVar14);
            in_ECX[0x73] = in_ECX[0x73] + 1;
          }
          fVar1 = 0.8;
        }
        goto LAB_0063e9f9;
      }
      FUN_005e91e0(in_ECX[0x38],0xffffffff,1);
    }
    cVar3 = FUN_00565df0();
    if ((cVar3 != '\0') && (*(int *)(iStack_40 + 0x30) == 0)) {
      (**(code **)(*piVar14 + 0x164))();
      cVar3 = FUN_00472ea0();
      if (cVar3 != '\0') {
        (**(code **)(*in_ECX + 0x188))(piVar14,2);
        return 0;
      }
    }
  }
  return 0;
}



void FUN_0063ed20(uint param_1,uint param_2,int *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  uint uVar7;
  int in_ECX;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint local_28;
  uint uStack_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int *piStack_8;
  float *pfStack_4;
  
  FUN_006564c0(param_1,param_2,param_3);
  local_28 = 0;
  local_20 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    FUN_004534d0(&local_1c,4);
    if (local_1c != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,".\\AI\\HighProcess.cpp",0x2ba8,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar3 = (int *)FUN_0046b250(*puVar1);
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,".\\AI\\HighProcess.cpp",0x2ba8,*puVar1,uVar4);
      }
    }
    local_20 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_28,2);
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x3e) {
    FUN_004534d0(&param_2,1);
  }
  FUN_004534d0(in_ECX + 0x228,1);
  FUN_004534d0(in_ECX + 0x23c,1);
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x71) {
    FUN_004534d0(in_ECX + 0x1f,1);
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x19) {
    FUN_004534d0(&param_2,1);
  }
  FUN_004534d0(in_ECX + 0x25c,1);
  if (0x1a < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x25d,1);
  }
  FUN_004534d0(in_ECX + 0x1fc,2);
  FUN_004534d0(in_ECX + 500,2);
  FUN_004534d0(in_ECX + 0x208,2);
  FUN_004534d0(in_ECX + 0x1f0,4);
  FUN_004534d0(in_ECX + 0x1ac,4);
  FUN_004534d0(in_ECX + 0x204,4);
  FUN_004534d0(in_ECX + 0x21c,4);
  FUN_004534d0(in_ECX + 0x22c,4);
  FUN_004534d0(in_ECX + 0x230,4);
  FUN_004534d0(in_ECX + 0x234,4);
  FUN_004534d0(in_ECX + 0x248,4);
  FUN_004534d0(in_ECX + 0x198,4);
  FUN_004534d0(in_ECX + 0x1b0,4);
  FUN_004534d0(in_ECX + 0x1b4,4);
  if (0x31 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x19c,4);
  }
  FUN_004534d0(in_ECX + 0x1cc,4);
  FUN_004534d0(in_ECX + 0x244,1);
  FUN_004534d0(in_ECX + 0x20c,0xc);
  FUN_004534d0(in_ECX + 0x254,4);
  piStack_8 = (int *)(in_ECX + 700);
  FUN_004534d0(piStack_8,4);
  pfStack_4 = (float *)(in_ECX + 0x2c0);
  FUN_004534d0(pfStack_4,4);
  FUN_004534d0(in_ECX + 0x238,4);
  FUN_004534d0(in_ECX + 0x1a8,4);
  FUN_004534d0(in_ECX + 0x1b8,4);
  if (0x13 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x260,4);
  }
  if (0x3e < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x278,1);
    FUN_004534d0(in_ECX + 0x274,4);
  }
  if (0x41 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x290,1);
    FUN_004534d0(in_ECX + 0x28c,4);
  }
  FUN_0045ba00(&uStack_18,4);
  *(undefined4 *)(in_ECX + 0x218) = uStack_18;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x71) {
    FUN_0045ba00(&param_2,4);
  }
  FUN_0045ba00(&uStack_14,4);
  *(undefined4 *)(in_ECX + 0x1a4) = uStack_14;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x4f) {
    FUN_0045ba00(&param_2,4);
    uVar4 = FUN_0046b250(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    uVar4 = FUN_009832e6(uVar4);
    *(undefined4 *)(in_ECX + 0x24) = uVar4;
  }
  FUN_0045ba00(&uStack_10,4);
  piVar3 = *(int **)(in_ECX + 0x18c);
  *(undefined4 *)(in_ECX + 0x2c4) = uStack_10;
  for (; (piVar3 != (int *)0x0 && (*piVar3 != 0)); piVar3 = (int *)piVar3[1]) {
    FUN_00401f20(*piVar3);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x18c);
  iVar10 = puVar1[1];
  while (iVar10 != 0) {
    iVar10 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar10;
  }
  *puVar1 = 0;
  uStack_24 = 0;
  if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x4e) ||
     (FUN_004534d0(&uStack_24,2), *(byte *)(DAT_00b33b00 + 0x7c) < 0x4e)) {
    FUN_004534d0(&param_2,1);
    uStack_24 = param_2 & 0xff;
  }
  uVar8 = 0;
  if ((short)uStack_24 != 0) {
    do {
      puVar5 = (uint *)FUN_00401f00(0x10);
      puVar9 = (uint *)0x0;
      if (puVar5 != (uint *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[3] = 0;
        *(undefined1 *)(puVar5 + 2) = 0;
        puVar9 = puVar5;
      }
      FUN_0045ba00(&param_2,4);
      FUN_004534d0(puVar9 + 1,4);
      FUN_004534d0(puVar9 + 2,1);
      FUN_004534d0(puVar9 + 3,4);
      *puVar9 = param_2;
      piVar3 = *(int **)(in_ECX + 0x18c);
      if (*piVar3 != 0) {
        piVar6 = (int *)FUN_00401f00(8);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)0x0;
        }
        else {
          *piVar6 = *piVar3;
          piVar6[1] = 0;
        }
        piVar6[1] = piVar3[1];
        piVar3[1] = (int)piVar6;
      }
      *piVar3 = (int)puVar9;
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uStack_24 & 0xffff));
  }
  piVar3 = param_3;
  if (param_3 == DAT_00b333c4) {
    for (piVar6 = *(int **)(in_ECX + 0x18c); (piVar6 != (int *)0x0 && (*piVar6 != 0));
        piVar6 = (int *)piVar6[1]) {
      FUN_00401f20(*piVar6);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x18c);
    iVar10 = puVar1[1];
    while (iVar10 != 0) {
      iVar10 = *(int *)(puVar1[1] + 4);
      FUN_00401f20(puVar1[1]);
      puVar1[1] = iVar10;
    }
    *puVar1 = 0;
  }
  uVar8 = 0;
  *(undefined4 *)(in_ECX + 0x1f8) = 0;
  if ((param_1 & 0x2000000) == 0) {
    if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x1c) &&
       (cVar2 = (**(code **)(*piVar3 + 400))(), cVar2 != '\0')) {
      FUN_00452170(1);
    }
  }
  else {
    FUN_004534d0(&param_1,1);
    if ((char)param_1 == -1) {
      *(undefined4 *)(in_ECX + 0x1f8) = 0;
    }
    else {
      *(int *)(in_ECX + 0x1f8) = (char)param_1 + 5;
    }
  }
  FUN_004534d0(&uStack_c,2);
  if ((short)uStack_c != 0) {
    FUN_004590e0(piVar3,uStack_c);
  }
  if (0x59 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    puVar9 = (uint *)(in_ECX + 0x2c8);
    do {
      FUN_0045ba00(&param_1,4);
      FUN_004534d0(in_ECX + 0x2dc + uVar8,1);
      *puVar9 = param_1;
      uVar8 = uVar8 + 1;
      puVar9 = puVar9 + 1;
    } while (uVar8 < 5);
    FUN_0045ba00(&param_2,4);
    *(uint *)(in_ECX + 0x2e4) = param_2;
    FUN_004534d0(in_ECX + 0x2e8,1);
  }
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x2ac,4);
    FUN_004534d0(in_ECX + 0x2b0,4);
  }
  if (0x69 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045ba00(&param_1,4);
    *(uint *)(in_ECX + 600) = param_1;
  }
  if (0x70 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(in_ECX + 0x1d0,1);
    FUN_004534d0(in_ECX + 0x1d8,4);
    FUN_004534d0(in_ECX + 0x1dc,4);
    FUN_004534d0(in_ECX + 0x1e0,4);
    FUN_004534d0(in_ECX + 0x2a8,1);
    FUN_004534d0(in_ECX + 0x1e4,1);
    FUN_004534d0(in_ECX + 0x1e8,4);
    FUN_004534d0(in_ECX + 0x240,4);
    FUN_004534d0(in_ECX + 0x2a8,1);
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x7d) {
      iVar10 = 5;
      do {
        FUN_0045ba00(&param_1,4);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
  }
  if ((((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 400))(), cVar2 != '\0')) &&
      (0.0 < *(float *)(in_ECX + 0x28))) &&
     (((*piStack_8 != 6 && (*piStack_8 != 5)) && (*piStack_8 = 2, *pfStack_4 <= 0.0)))) {
    *pfStack_4 = 1.0;
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar7 = local_28 & 0xffff;
      if (local_20 + uVar7 < uVar8) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar8 - local_20) - uVar7,".\\AI\\HighProcess.cpp",0x2c9c,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar8 < local_20 + uVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(local_20 - uVar8) + uVar7,".\\AI\\HighProcess.cpp",0x2c9c,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar3 = (int *)FUN_0046b250(*puVar1);
      iVar10 = local_20;
      uVar7 = (local_28 & 0xffff) + local_20;
      if (uVar7 < uVar8) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar8 - (local_28 & 0xffff)) - iVar10,".\\AI\\HighProcess.cpp",0x2c9c,*puVar1
                     ,uVar4);
        return;
      }
      if (uVar8 < uVar7) {
        uVar4 = (**(code **)(*piVar3 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_28 & 0xffff) - uVar8) + iVar10,".\\AI\\HighProcess.cpp",0x2c9c,*puVar1
                     ,uVar4);
        return;
      }
    }
  }
  return;
}



void FUN_0063f700(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  undefined4 uVar6;
  
  if (DAT_00b07090 == '\0') {
    return;
  }
  if ((*(int *)(DAT_00b333a0 + 0x34) != 0) &&
     ((*(byte *)(*(int *)(DAT_00b333a0 + 0x34) + 0x24) >> 1 & 1) == 0)) {
    return;
  }
  FUN_006ecc80();
  fVar5 = (float10)FUN_004cace0();
  iVar2 = (**(code **)(*param_1 + 0x174))();
  if (*(float *)(iVar2 + 8) < (float)fVar5) {
    uVar6 = 0x3f800000;
    uVar3 = FUN_006ecc80(0x3f800000);
    cVar1 = FUN_005e06c0(param_1 + 0xb,uVar3,uVar6);
    if (cVar1 == '\0') {
      iVar2 = *(int *)(DAT_00b333a0 + 0x54);
      if ((((iVar2 != 0) && (*(int *)(in_ECX + 0x288) == 0)) && (DAT_00b45dba == '\0')) &&
         ((iVar4 = (**(code **)(*param_1 + 0x380))(), iVar4 == 0 &&
          (cVar1 = (**(code **)(*param_1 + 0x198))(0), cVar1 == '\0')))) {
        FUN_006ecc80();
        fVar5 = (float10)FUN_004cace0();
        if (((fVar5 == (float10)0.0) || (*(int *)(DAT_00b333a0 + 0x34) != 0)) &&
           ((param_1 == DAT_00b333c4 || (*(int *)(iVar2 + 0x3c) < 9)))) {
          iVar2 = FUN_00401f00(0x24);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_00634860();
          }
          *(undefined4 *)(in_ECX + 0x288) = uVar3;
          FUN_0049e7f0(uVar3);
          **(undefined4 **)(in_ECX + 0x288) = param_1;
          FUN_00634890(*(undefined4 *)(in_ECX + 0x288));
          FUN_0049b930(*(undefined4 *)(in_ECX + 0x288),1);
        }
      }
      if (*(int *)(in_ECX + 0x288) != 0) {
        *(undefined4 *)(*(int *)(in_ECX + 0x288) + 0x14) = 0;
      }
      if (*(int *)(in_ECX + 0x288) == 0) {
        return;
      }
      iVar2 = (**(code **)(*param_1 + 0x380))();
      if ((iVar2 == 0) && (cVar1 = (**(code **)(*param_1 + 0x198))(0), cVar1 == '\0')) {
        FUN_006ecc80();
        fVar5 = (float10)FUN_004cace0();
        if (fVar5 == (float10)0.0) {
          return;
        }
        if (*(int *)(DAT_00b333a0 + 0x34) != 0) {
          return;
        }
      }
      *(undefined1 *)(*(int *)(in_ECX + 0x288) + 0x10) = 1;
      *(undefined4 *)(in_ECX + 0x288) = 0;
      return;
    }
  }
  iVar2 = *(int *)(in_ECX + 0x288);
  if (iVar2 != 0) {
    if (10.0 <= *(float *)(iVar2 + 0x14)) {
      *(undefined1 *)(iVar2 + 0x10) = 1;
      *(undefined4 *)(in_ECX + 0x288) = 0;
    }
    else {
      fVar5 = (float10)FUN_0043f490(1,1);
      *(float *)(iVar2 + 0x14) = (float)(fVar5 + (float10)*(float *)(iVar2 + 0x14));
    }
    iVar2 = (**(code **)(*param_1 + 0x380))();
    if (iVar2 != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x288) + 0x10) = 1;
      *(undefined4 *)(in_ECX + 0x288) = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0063f950(int *param_1,int *param_2,undefined1 *param_3)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined2 extraout_var;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  int *in_ECX;
  int *unaff_EBX;
  int *piVar14;
  int *unaff_EBP;
  float10 fVar15;
  float10 fVar16;
  int *piVar17;
  int *local_24;
  undefined4 uStack_20;
  int iStack_14;
  int iStack_10;
  
  iVar4 = (**(code **)(*in_ECX + 0x184))();
  iVar5 = (**(code **)(*param_2 + 0x330))();
  uVar6 = 0;
  if ((iVar5 != 0) &&
     ((((iVar4 == 0 || (uVar6 = *(uint *)(iVar4 + 0x1c) >> 0xc, (uVar6 & 1) == 0)) &&
       (uVar6 = FUN_005e6b70(), (char)uVar6 == '\0')) &&
      ((uVar6 = FUN_005e6ba0(), (char)uVar6 == '\0' &&
       (uVar6 = (**(code **)(*param_1 + 0x334))(), (char)uVar6 == '\0')))))) {
    fVar15 = (float10)FUN_004d7e90(param_1,0);
    fVar16 = (float10)_DAT_00b36b08;
    uVar6 = CONCAT22(extraout_var,
                     (ushort)(fVar16 < fVar15) << 8 | (ushort)(NAN(fVar16) || NAN(fVar15)) << 10 |
                     (ushort)(fVar16 == fVar15) << 0xe);
    if (fVar16 >= fVar15) {
      piVar7 = (int *)FUN_0067cf50(0xc,param_2);
      if (((*piVar7 != 0) && (iVar4 = FUN_0067b710(), iVar4 != 0)) &&
         (iVar4 = FUN_0067b6b0(param_1,0), iVar4 == 0)) {
        piVar8 = (int *)FUN_0067b6b0(param_2,0);
        iVar4 = (**(code **)(*param_2 + 0x330))();
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_2 + 0x330))();
          piVar2 = *(int **)(iVar4 + 0x40);
          local_24 = in_ECX;
          do {
            if ((((piVar2 == (int *)0x0) || (*piVar2 == 0)) ||
                (cVar3 = (**(code **)(*param_1 + 0x334))(1), cVar3 != '\0')) ||
               (cVar3 = FUN_005e6ba0(), cVar3 != '\0')) break;
            piVar17 = *(int **)*piVar2;
            puVar9 = (undefined4 *)FUN_0067b6b0(piVar17,0);
            iVar4 = (**(code **)(*param_1 + 0x224))(piVar17);
            if ((piVar17 != (int *)0x0) && (cVar3 = FUN_005e9d40(piVar17), cVar3 != '\0')) {
              uVar10 = (**(code **)(*param_1 + 0x224))(param_2);
              uVar11 = (**(code **)(*param_1 + 0x284))(0x24);
              uVar11 = FUN_005e3270(0,uVar11);
              piVar14 = piVar8;
              fVar15 = (float10)FUN_004d7e90(param_2,0);
              uVar11 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar15,piVar14,uVar11);
              iVar5 = FUN_00546190(uVar10,local_24,uVar11);
              iVar12 = (**(code **)(*unaff_EBX + 0x3b0))(piVar17);
              if ((iVar12 != 0) && ((0 < *(int *)(iVar12 + 0xc) && (0 < iVar5)))) {
                (**(code **)(*unaff_EBP + 0x228))(param_1,param_2,0,0,0,0,0,0,0,1);
                break;
              }
            }
            cVar3 = FUN_005e9d40(param_2);
            if (cVar3 != '\0') {
              (**(code **)(*param_1 + 0x224))(param_2);
            }
            if ((piVar17 == (int *)0x0) ||
               ((cVar3 = FUN_005e6c60(), cVar3 != '\0' && (cVar3 = FUN_005e6c60(), cVar3 == '\0'))))
            {
              cVar3 = FUN_005e6c60();
              if ((cVar3 != '\0') && (cVar3 = FUN_004db760(), cVar3 == '\0')) {
                piVar17 = param_2;
                if ((char)piVar8[1] == '\0') {
                  if ((puVar9 == (undefined4 *)0x0) || (*(char *)(puVar9 + 1) == '\0'))
                  goto LAB_0063fdeb;
                  piVar17 = (int *)*puVar9;
                }
LAB_0063fe54:
                FUN_00633c50(piVar17);
                break;
              }
            }
            else {
              uStack_20 = 0;
              piVar13 = (int *)FUN_0067cf50(0xc,param_2);
              iStack_10 = 0;
              piVar14 = piVar13;
              if (piVar13 != (int *)0x0) {
                do {
                  iVar5 = *piVar14;
                  if (iVar5 == 0) break;
                  iVar12 = FUN_0067b6b0(param_2,0);
                  iStack_10 = iVar5;
                  if ((iVar12 != 0) && (*(char *)(iVar12 + 4) != '\0')) {
                    uStack_20 = 1;
                    break;
                  }
                  piVar1 = piVar14 + 1;
                  piVar14 = (int *)*piVar1;
                } while ((int *)*piVar1 != (int *)0x0);
                FUN_004526e0();
              }
              FUN_00401f20(piVar13);
              uVar10 = (**(code **)(*param_1 + 0x284))(0x24);
              uVar10 = FUN_005e3270(piVar13,uVar10);
              piVar14 = piVar2;
              fVar15 = (float10)FUN_004d7e90(piVar17,0);
              uVar10 = (**(code **)(*param_1 + 0x284))(0x21,(float)fVar15,piVar14,uVar10);
              uVar10 = FUN_00546190(uStack_20,piVar13,uVar10);
              iVar5 = (**(code **)(_DAT_00000000 + 0x3b0))(piVar17);
              if (((iVar5 != 0) && (0 < *(int *)(iVar5 + 0xc))) && (0 < iVar4)) {
                (**(code **)(_DAT_00000000 + 0x228))(param_1,piVar17,0,0,0,uVar10,0,0,0,1);
                break;
              }
              FUN_00403c00();
              local_24 = (int *)FUN_009828c0();
              iVar4 = FUN_006ecc80();
              if (iVar4 != 0) {
                FUN_006ecc80();
                cVar3 = FUN_004c97f0();
                if (cVar3 != '\0') {
                  FUN_00403c00();
                  local_24 = (int *)FUN_009828c0();
                }
              }
              cVar3 = FUN_005e3270();
              if (((cVar3 == '\0') && (cVar3 = FUN_004db760(), cVar3 == '\0')) &&
                 ((cVar3 = (**(code **)(*param_1 + 0x334))(0), cVar3 == '\0' &&
                  (iVar4 = (**(code **)(*param_2 + 0x330))(), iVar4 != 0)))) {
                piVar14 = param_1;
                (**(code **)(*param_2 + 0x330))(param_1);
                cVar3 = FUN_00613670(piVar14);
                if (((cVar3 != '\0') &&
                    (fVar15 = (float10)FUN_004d7e90(param_2,0), fVar15 <= (float10)(int)local_24))
                   && ((cVar3 = FUN_005e6cd0(0), cVar3 == '\0' &&
                       (cVar3 = (**(code **)(*param_1 + 0x350))(), cVar3 == '\0'))))
                goto LAB_0063fe54;
              }
              cVar3 = FUN_005e6ba0();
              if ((((cVar3 == '\0') && (cVar3 = (**(code **)(*param_1 + 0x334))(0), cVar3 == '\0'))
                  && ((fVar15 = (float10)FUN_004d7e90(piVar17,0), fVar15 <= (float10)(int)local_24
                      || ((iStack_14 != 0 && (*(char *)(iStack_14 + 0x20) == '\x04')))))) &&
                 (cVar3 = (**(code **)(_DAT_00000000 + 0x210))(), cVar3 == '\0')) {
                *param_3 = 1;
                DAT_00b3b930 = iStack_10;
              }
            }
LAB_0063fdeb:
            piVar2 = (int *)piVar2[1];
          } while( true );
        }
        iVar4 = (**(code **)(*param_2 + 0x330))();
        if (iVar4 != 0) {
          iVar4 = (**(code **)(*param_2 + 0x330))();
          for (piVar2 = *(int **)(iVar4 + 0x40);
              (piVar2 != (int *)0x0 && ((undefined4 *)*piVar2 != (undefined4 *)0x0));
              piVar2 = (int *)piVar2[1]) {
            uVar10 = *(undefined4 *)*piVar2;
            piVar8 = (int *)FUN_0067b6b0(uVar10,0);
            if (piVar8 != (int *)0x0) {
              if (*piVar8 != 0) {
                FUN_005e02e0(1);
                cVar3 = FUN_0046cb60();
                if (cVar3 != '\0') {
                  FUN_005e02e0(0);
                }
              }
              cVar3 = FUN_005e32d0();
              if ((((cVar3 != '\0') && (cVar3 = FUN_005e8a90(), cVar3 != '\0')) &&
                  (cVar3 = FUN_00467560(), cVar3 == '\0')) &&
                 (((char)piVar8[1] == '\0' && (iVar4 = FUN_00675bf0(param_2,uVar10,3), iVar4 != 0)))
                 ) {
                (**(code **)(*param_1 + 0x310))(iVar4,0,1,0);
              }
            }
          }
        }
        if ((piVar8 != (int *)0x0) &&
           (iVar4 = (**(code **)(*(int *)*piVar8 + 0x338))(), iVar4 == DAT_00b333c4)) {
          FUN_005e02e0(1);
          cVar3 = FUN_0046cb60();
          if (cVar3 != '\0') {
            FUN_005e02e0(0);
          }
          cVar3 = FUN_00467560();
          if ((cVar3 == '\0') && (iVar4 = FUN_00675bf0(*piVar8,param_2,3), iVar4 != 0)) {
            (**(code **)(*param_1 + 0x310))(iVar4,0,1,0);
          }
        }
        cVar3 = FUN_005e0f30();
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 800))();
          *(int *)(param_1[0x16] + 4) = *(int *)(param_1[0x16] + 4) + -1;
        }
      }
      FUN_004526e0();
      uVar6 = FUN_00401f20(piVar7);
    }
  }
  return uVar6 & 0xffffff00;
}


