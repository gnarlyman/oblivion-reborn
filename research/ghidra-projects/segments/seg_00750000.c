
void FUN_00750040(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6)

{
  float fVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  fVar3 = param_6;
  if (0.0 < param_6) {
    if (param_5 <= param_4) {
      return;
    }
    if (param_2 <= param_4) {
      return;
    }
    if (param_3 < param_5) {
      fVar1 = param_5;
      if (param_2 < param_5 != (param_2 == param_5)) {
        fVar1 = param_2;
      }
      param_6 = 0.0;
      if (param_4 < param_3 != (param_4 == param_3)) {
        param_6 = param_3 - param_4;
      }
      param_5._0_2_ = (short)(int)ROUND(param_6 * fVar3);
      sVar2 = param_5._0_2_;
      uVar7 = (int)ROUND(param_6 * fVar3) & 0xffff;
      param_5._0_2_ = (short)(int)ROUND((fVar1 - param_4) * fVar3);
      uVar5 = (uint)(ushort)(param_5._0_2_ - sVar2);
      if (0xf < (ushort)(param_5._0_2_ - sVar2)) {
        uVar5 = 0xf;
      }
      *(undefined4 *)(in_ECX + 0x60) = 0;
      if ((short)uVar5 != 0) {
        uVar6 = uVar5;
        do {
          uVar7 = uVar7 + 1;
          iVar4 = *(int *)(in_ECX + 0x5c);
          if (*(int *)(in_ECX + 0x60) == iVar4) {
            if (iVar4 == 0) {
              iVar4 = 1;
            }
            else {
              iVar4 = iVar4 * 2;
            }
            FUN_0074f9a0(iVar4);
          }
          *(float *)(*(int *)(in_ECX + 0x58) + *(int *)(in_ECX + 0x60) * 4) =
               (fVar1 - param_4) - (float)(uVar7 & 0xffff) * (1.0 / fVar3);
          *(int *)(in_ECX + 0x60) = *(int *)(in_ECX + 0x60) + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      (**(code **)(**(int **)(in_ECX + 0x44) + 0x5c))(param_1,uVar5,*(undefined4 *)(in_ECX + 0x58));
      return;
    }
  }
  return;
}



undefined4 * FUN_007501f0(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(100);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0075e540();
    *puVar1 = &PTR_FUN_00a862c4;
    puVar1[0x12] = 0;
    *(undefined1 *)(puVar1 + 0x15) = 0;
    puVar1[0x14] = 0xff7fffff;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    FUN_0074fd50(puVar1,param_1);
    return puVar1;
  }
  FUN_0074fd50(0,param_1);
  return (undefined4 *)0x0;
}



void FUN_00750260(float param_1)

{
  float fVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  undefined1 uVar6;
  int *piVar7;
  int *piVar8;
  float *pfVar9;
  uint uVar10;
  int in_ECX;
  char *pcVar11;
  float unaff_EBP;
  float *pfVar12;
  float unaff_EDI;
  uint uVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined1 *puVar16;
  uint uVar17;
  int iVar18;
  float fStack_50;
  float *local_4c;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  int *piStack_38;
  int *local_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined8 uStack_24;
  float *local_1c;
  undefined4 uStack_18;
  double local_14;
  double dStack_c;
  
  fVar1 = *(float *)(in_ECX + 0x20);
  if (param_1 < fVar1) {
    *(undefined4 *)(in_ECX + 0x50) = 0xff7fffff;
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    return;
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    if (((byte)*(ushort *)(in_ECX + 8) >> 5 & 1) != 0) {
      *(undefined4 *)(in_ECX + 0x28) = 0xff7fffff;
    }
    if (((fVar1 != -3.4028235e+38) && ((*(ushort *)(in_ECX + 8) & 6) == 0)) &&
       (*(float *)(*(int *)(in_ECX + 0x44) + 0x48) < param_1 - fVar1)) {
      *(float *)(in_ECX + 0x20) = param_1;
    }
    cVar5 = FUN_006c36b0();
    if (((cVar5 == '\0') && (*(int *)(in_ECX + 0x48) != 0)) && (*(int *)(in_ECX + 0x3c) != 0)) {
      param_1 = -3.4028235e+38;
      cVar5 = FUN_00405650();
      if (cVar5 != '\0') {
        FUN_006cd0f0();
        cVar5 = FUN_006cc550();
        local_14 = (double)CONCAT71(local_14._1_7_,cVar5);
        if (cVar5 != -1) {
          fVar14 = (float10)FUN_0074f7f0();
          param_1 = (float)fVar14;
        }
      }
      piVar7 = (int *)FUN_0074fa90();
      fVar1 = param_1;
      local_14 = (double)CONCAT44(local_14._4_4_,0xff7fffff);
      param_1 = (float)CONCAT31(param_1._1_3_,1);
      if (fVar1 == -3.4028235e+38) {
        param_1 = (float)((uint)param_1._1_3_ << 8);
      }
      local_1c = (float *)0xff7fffff;
      cVar5 = FUN_00405650(&DAT_00b3cf5c);
      if (cVar5 != '\0') {
        FUN_006cd0f0();
        cVar5 = FUN_006cc550();
        local_14 = (double)CONCAT71(local_14._1_7_,cVar5);
        if (cVar5 != -1) {
          fVar14 = (float10)FUN_0074f7f0();
          local_1c = (float *)(float)fVar14;
        }
      }
      piVar8 = (int *)FUN_0053d850();
      if ((piVar7 == (int *)0x0) || (piVar8 == (int *)0x0)) {
        return;
      }
      local_4c = *(float **)(in_ECX + 0x28);
      if ((param_1._0_1_ != '\0') || ((float)local_1c != -3.4028235e+38)) {
        local_4c = local_1c;
      }
      local_34 = piVar8;
      if (((*(byte *)(in_ECX + 8) >> 5 & 1) != 0) && (*(int **)(in_ECX + 0x4c) != piVar8)) {
        *(float **)(in_ECX + 0x50) = local_4c;
        (**(code **)(*piVar7 + 0x60))(local_4c,*(undefined4 *)(in_ECX + 0x30));
        *(int **)(in_ECX + 0x4c) = piVar8;
        return;
      }
      *(int **)(in_ECX + 0x4c) = piVar8;
      local_48 = (float)FUN_006d2940(&param_1,&local_14,(int)&uStack_40 + 4);
      uVar4 = (uint)param_1;
      if ((param_1 != 0.0) || (cVar5 = (**(code **)(*piVar7 + 0xb0))(0), cVar5 != '\0')) {
        uVar17 = 0;
        cVar5 = (**(code **)(*piVar7 + 0xb0))();
        if (cVar5 == '\0') {
          local_1c = (float *)0x0;
          uVar6 = FUN_006bdba0(fStack_50,local_4c,uStack_18,uVar4,&local_1c,(undefined4)uStack_40);
          if (*(float *)(in_ECX + 0x50) == -3.4028235e+38) {
            *(float *)(in_ECX + 0x50) = fStack_50;
            *(undefined1 *)(in_ECX + 0x54) = uVar6;
            return;
          }
          fStack_28 = *(float *)(in_ECX + 0x50);
          bVar2 = *(byte *)(in_ECX + 0x54);
          *(undefined1 *)(in_ECX + 0x54) = uVar6;
          *(float *)(in_ECX + 0x50) = fStack_50;
          iVar18 = (uint)bVar2 << 0x10;
          uStack_24._4_4_ = 0;
          while (uStack_24._4_4_ < 0x14) {
            dStack_c = (double)fStack_28;
            local_14 = (double)fStack_50;
            bVar3 = fStack_50 < fStack_28;
            if ((char)((uint)iVar18 >> 0x10) == '\0') {
              uVar17 = 0;
              if (uVar4 != 0) {
                pfVar9 = local_4c;
                do {
                  fVar1 = *pfVar9;
                  if ((fStack_28 < fVar1) &&
                     (((bVar3 || (fVar1 < fStack_50 != (fVar1 == fStack_50))) &&
                      (*(char *)(pfVar9 + 1) != '\0')))) break;
                  uVar17 = uVar17 + 1;
                  pfVar9 = (float *)((int)pfVar9 + (uint)(byte)uStack_40);
                } while (uVar17 < uVar4);
              }
              if (uVar17 == uVar4) {
                if (!bVar3) {
                  return;
                }
                uVar17 = 0;
                if (uVar4 != 0) {
                  pfVar9 = local_4c;
                  do {
                    if ((*pfVar9 < fStack_50) && (*(char *)(pfVar9 + 1) != '\0')) break;
                    uVar17 = uVar17 + 1;
                    pfVar9 = (float *)((int)pfVar9 + (uint)(byte)uStack_40);
                  } while (uVar17 < uVar4);
                }
                if (uVar17 == uVar4) {
                  return;
                }
              }
            }
            else {
              uVar17 = uVar4;
              if (uVar4 != 0) {
                pfVar9 = (float *)((uVar4 - 1) * (uint)(byte)uStack_40 + (int)local_4c);
                do {
                  if ((*pfVar9 < fStack_28 != (*pfVar9 == fStack_28)) &&
                     (*(char *)(pfVar9 + 1) == '\0')) break;
                  uVar17 = uVar17 - 1;
                  pfVar9 = (float *)((int)pfVar9 - (uint)(byte)uStack_40);
                } while (uVar17 != 0);
              }
            }
            uVar10 = uVar17;
            if (uVar17 < uVar4) {
              pcVar11 = (char *)((byte)uStack_40 * uVar17 + 4 + (int)local_4c);
              do {
                if (*pcVar11 == '\0') break;
                uVar10 = uVar10 + 1;
                pcVar11 = pcVar11 + (byte)uStack_40;
              } while (uVar10 < uVar4);
            }
            if (uVar10 == uVar4) {
              uVar10 = uVar10 - 1;
            }
            uVar13 = (uint)(byte)uStack_40;
            pfVar9 = (float *)(uVar13 * uVar17 + (int)local_4c);
            pfVar12 = (float *)(uVar13 * uVar10 + (int)local_4c);
            fStack_30 = fStack_28;
            if (bVar3) {
              if (*pfVar12 <= fStack_28) {
                uStack_40 = (double)CONCAT44(fStack_50,(undefined4)uStack_40);
                fStack_30 = *local_4c;
                fStack_44 = *pfVar9;
                local_48 = fStack_50;
                if (*pfVar12 < fStack_50) {
                  local_48 = *pfVar12;
                }
                uStack_24._0_4_ = fStack_44 + (local_48 - fStack_44) * 0.5;
                fVar1 = (float)uStack_24;
              }
              else {
                uStack_40 = (double)CONCAT44(*(float *)((uVar4 - 1) * uVar13 + (int)local_4c),
                                             (undefined4)uStack_40);
                fStack_44 = *pfVar9;
                local_48 = *pfVar12;
                uStack_24._0_4_ = fStack_44 + (local_48 - fStack_44) * 0.5;
                fVar1 = (float)uStack_24;
              }
LAB_007509bf:
              (**(code **)(*piStack_38 + 0x5c))(fVar1,*(undefined4 *)(in_ECX + 0x30),&local_34);
            }
            else {
              if (fStack_50 <= *pfVar12) {
                uStack_40 = (double)CONCAT44(fStack_50,(undefined4)uStack_40);
                fStack_44 = *pfVar9;
                local_48 = *pfVar12;
                fVar1 = fStack_50;
                goto LAB_007509bf;
              }
              uStack_40 = (double)CONCAT44(*pfVar12,(undefined4)uStack_40);
              fStack_44 = *pfVar9;
              local_48 = *pfVar12;
              uStack_24._0_4_ = fStack_44 + (local_48 - fStack_44) * 0.5;
              (**(code **)(*piStack_38 + 0x5c))
                        ((float)uStack_24,*(undefined4 *)(in_ECX + 0x30),&local_34);
            }
            fVar1 = *(float *)(*(int *)(in_ECX + 0x30) + 0xe8);
            if (bVar3) {
              fVar1 = (*(float *)(in_ECX + 0x18) - *(float *)(in_ECX + 0x14)) + fVar1;
            }
            uStack_24 = (double)CONCAT44(uStack_24._4_4_,fVar1);
            FUN_00750040((fVar1 + (float)local_14) - (float)dStack_c,uStack_40._4_4_,fStack_30,
                         fStack_44,local_48,local_34);
            if ((float)local_14 <= *pfVar12) {
              iVar18 = CONCAT13(1,(int3)iVar18);
            }
            else {
              fStack_28 = uStack_40._4_4_;
              uVar6 = FUN_006bdba0(uStack_40._4_4_,local_4c,uStack_18,uVar4,&local_1c,
                                   (undefined4)uStack_40);
              iVar18 = (uint)CONCAT11((char)((uint)iVar18 >> 0x18),uVar6) << 0x10;
            }
            uStack_24._4_4_ = uStack_24._4_4_ + 1;
            if ((char)((uint)iVar18 >> 0x18) != '\0') {
              return;
            }
          }
        }
        else {
          uVar15 = *(undefined4 *)(in_ECX + 0x30);
          puVar16 = (undefined1 *)register0x00000010;
          (**(code **)(*piVar7 + 0x60))(0,uVar15,&stack0x00000000);
          if (dStack_c._0_1_ != '\0') {
            local_34 = *(int **)(*(int *)(in_ECX + 0x30) + 0xe8);
            *(float *)(in_ECX + 0x50) = unaff_EDI;
            cVar5 = (**(code **)(*piVar8 + 0xb0))(0);
            if (cVar5 == '\0') {
              pfVar9 = (float *)FUN_006d2940(&fStack_28,&fStack_30,&stack0xffffff9f);
              local_34 = (int *)*pfVar9;
              fStack_30 = *(float *)(((int)fStack_28 + -1) * (uVar17 >> 0x18) + (int)pfVar9);
              uStack_40 = (double)((ulonglong)(uint)uStack_40._4_4_ << 0x20);
              uStack_24 = (double)unaff_EBP;
              if (unaff_EBP < unaff_EDI) {
                uStack_40 = (double)(fStack_30 - unaff_EDI);
                fStack_28 = (fStack_30 - unaff_EDI) * 0.5 + unaff_EDI;
                (**(code **)(*piVar8 + 0x5c))(fStack_28,*(undefined4 *)(in_ECX + 0x30),&fStack_50);
                fStack_28 = (float)uStack_40;
                uStack_40 = (double)CONCAT44(uStack_40._4_4_,fStack_28);
                fStack_28 = fStack_28 + (float)piStack_38;
                FUN_00750040(fStack_28,fStack_30,unaff_EDI,local_34,fStack_30,fStack_50);
                unaff_EDI = *pfVar9;
                unaff_EBP = (float)uStack_24;
              }
              uStack_24 = (double)(unaff_EBP - unaff_EDI);
              fStack_28 = (unaff_EBP - unaff_EDI) * 0.5 + unaff_EDI;
              (**(code **)(*piVar8 + 0x5c))(fStack_28,*(undefined4 *)(in_ECX + 0x30),&fStack_50);
              local_34 = (int *)(fStack_44 + (float)(double)CONCAT44(uStack_2c,fStack_30) +
                                (float)local_4c);
              FUN_00750040(local_34,uVar15,puVar16,(undefined4)uStack_40,uVar15,unaff_EDI);
              return;
            }
            fStack_30 = unaff_EBP - unaff_EDI;
            if (unaff_EBP < unaff_EDI) {
              unaff_EDI = 0.0;
              fStack_30 = unaff_EBP;
            }
            cVar5 = (**(code **)(*piVar8 + 0x5c))(0,*(undefined4 *)(in_ECX + 0x30),&fStack_50);
            if (cVar5 != '\0') {
              local_34 = (int *)(uStack_40._4_4_ + fStack_44);
              FUN_00750040(local_34,uVar15,puVar16,0,uVar15,unaff_EDI);
              return;
            }
          }
        }
      }
      return;
    }
  }
  return;
}



void FUN_00750b50(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00752bf0();
  in_ECX[6] = 0;
  *in_ECX = &PTR_FUN_00a8637c;
  in_ECX[7] = DAT_00b258d0;
  in_ECX[8] = DAT_00b258d4;
  uVar1 = DAT_00b258d8;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = 0x3f800000;
  in_ECX[9] = uVar1;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x3f800000;
  return;
}



void FUN_00750bc0(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  float *pfVar9;
  int in_ECX;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  uint local_1a8;
  uint local_1a4;
  float fStack_17c;
  float local_108;
  float local_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [36];
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a4 [13];
  undefined4 local_70 [13];
  undefined1 local_3c [56];
  
  if ((*(short *)(param_2 + 0x48) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar14 = local_a4;
    for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    puVar12 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar14 = local_70;
    for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = *puVar12;
      puVar12 = puVar12 + 1;
      puVar14 = puVar14 + 1;
    }
    FUN_00718a80(local_3c);
    FUN_0053d7a0(local_d8,local_a4);
    pfVar9 = (float *)FUN_007101f0(&local_108,in_ECX + 0x1c);
    fVar4 = *pfVar9;
    uVar8 = *(undefined8 *)pfVar9;
    fVar5 = pfVar9[2];
    FUN_0043f350();
    fVar6 = *(float *)(in_ECX + 0x2c) * 1.6;
    uVar3 = *(ushort *)(param_2 + 0x48);
    fStack_17c = (float)((ulonglong)uVar8 >> 0x20);
    if (*(int *)(in_ECX + 0x30) == 0) {
      if ((*(float *)(in_ECX + 0x28) == 0.0) && (*(float *)(in_ECX + 0x34) == 0.0)) {
        if (uVar3 != 0) {
          uVar11 = (uint)uVar3;
          pfVar9 = *(float **)(param_2 + 0x5c);
          do {
            uVar11 = uVar11 - 1;
            fVar1 = (param_1 - pfVar9[5]) * fVar6;
            *pfVar9 = *pfVar9 + fVar1 * fVar4;
            pfVar9[1] = fVar1 * fStack_17c + pfVar9[1];
            pfVar9[2] = fVar1 * fVar5 + pfVar9[2];
            pfVar9 = pfVar9 + 7;
          } while (uVar11 != 0);
        }
      }
      else if ((*(float *)(in_ECX + 0x28) == 0.0) && (*(float *)(in_ECX + 0x34) != 0.0)) {
        fVar1 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x34) * 500.0;
        if (uVar3 != 0) {
          uVar11 = (uint)uVar3;
          pfVar9 = *(float **)(param_2 + 0x5c);
          do {
            fVar15 = (float10)FUN_0053d480();
            fVar16 = (float10)FUN_0053d480();
            fVar17 = (float10)FUN_0053d480();
            uVar11 = uVar11 - 1;
            fVar2 = param_1 - pfVar9[5];
            *pfVar9 = ((float)(fVar15 * (float10)fVar1) + fVar4 * fVar6) * fVar2 + *pfVar9;
            pfVar9[1] = ((float)(fVar16 * (float10)fVar1) + fStack_17c * fVar6) * fVar2 + pfVar9[1];
            pfVar9[2] = fVar2 * ((float)(fVar17 * (float10)fVar1) + fVar6 * fVar5) + pfVar9[2];
            pfVar9 = pfVar9 + 7;
          } while (uVar11 != 0);
          return;
        }
      }
      else if ((*(float *)(in_ECX + 0x28) == 0.0) || (*(float *)(in_ECX + 0x34) != 0.0)) {
        if ((*(float *)(in_ECX + 0x28) != 0.0) && (*(float *)(in_ECX + 0x34) != 0.0)) {
          pfVar9 = *(float **)(param_2 + 0x1c);
          fVar1 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x34) * 500.0;
          if (uVar3 != 0) {
            local_1a4 = (uint)uVar3;
            pfVar13 = *(float **)(param_2 + 0x5c);
            do {
              fVar15 = (float10)FUN_0053d480();
              local_e4 = (float)(fVar15 * (float10)fVar1);
              fVar15 = (float10)FUN_0053d480();
              local_e0 = (float)(fVar15 * (float10)fVar1);
              fVar15 = (float10)FUN_0053d480();
              local_dc = (float)(fVar15 * (float10)fVar1);
              if (0.0 <= (local_ac - pfVar9[2]) * fVar5 +
                         (local_b4 - *pfVar9) * fVar4 + (local_b0 - pfVar9[1]) * fStack_17c) {
                fVar15 = (float10)FUN_009866bc();
              }
              else {
                fVar15 = (float10)FUN_009866bc();
              }
              fStack_e8 = (float)fVar15;
              pfVar9 = pfVar9 + 3;
              local_1a4 = local_1a4 - 1;
              fStack_f0 = fVar6 * fVar4 * fStack_e8;
              fStack_ec = fStack_17c * fVar6 * fStack_e8;
              fStack_e8 = fStack_e8 * fVar5 * fVar6;
              fStack_fc = fStack_f0 + local_e4;
              fStack_f8 = fStack_ec + local_e0;
              fStack_f4 = fStack_e8 + local_dc;
              local_100 = param_1 - pfVar13[5];
              local_108 = fStack_fc * local_100;
              local_104 = fStack_f8 * local_100;
              local_100 = local_100 * fStack_f4;
              *pfVar13 = local_108 + *pfVar13;
              pfVar13[1] = local_104 + pfVar13[1];
              pfVar13[2] = pfVar13[2] + local_100;
              pfVar13 = pfVar13 + 7;
            } while (local_1a4 != 0);
            return;
          }
        }
      }
      else {
        pfVar9 = *(float **)(param_2 + 0x1c);
        if (uVar3 != 0) {
          local_1a8 = (uint)uVar3;
          pfVar13 = *(float **)(param_2 + 0x5c);
          do {
            if (0.0 <= fVar5 * (local_ac - pfVar9[2]) +
                       (local_b0 - pfVar9[1]) * fStack_17c + (local_b4 - *pfVar9) * fVar4) {
              fVar15 = (float10)FUN_009866bc();
            }
            else {
              fVar15 = (float10)FUN_009866bc();
            }
            pfVar9 = pfVar9 + 3;
            local_1a8 = local_1a8 - 1;
            fVar1 = (float)fVar15 * fVar6 * (param_1 - pfVar13[5]);
            *pfVar13 = *pfVar13 + fVar1 * fVar4;
            pfVar13[1] = fVar1 * fStack_17c + pfVar13[1];
            pfVar13[2] = fVar1 * fVar5 + pfVar13[2];
            pfVar13 = pfVar13 + 7;
          } while (local_1a8 != 0);
          return;
        }
      }
    }
    else if (*(int *)(in_ECX + 0x30) == 1) {
      if ((*(float *)(in_ECX + 0x28) == 0.0) && (*(float *)(in_ECX + 0x34) == 0.0)) {
        pfVar9 = *(float **)(param_2 + 0x1c);
        if (uVar3 != 0) {
          uVar11 = (uint)uVar3;
          pfVar13 = *(float **)(param_2 + 0x5c);
          do {
            fVar4 = *pfVar9;
            fVar5 = pfVar9[1];
            fVar1 = pfVar9[2];
            FUN_0043f350();
            pfVar9 = pfVar9 + 3;
            uVar11 = uVar11 - 1;
            fVar2 = (param_1 - pfVar13[5]) * fVar6;
            *pfVar13 = (local_b4 - fVar4) * fVar2 + *pfVar13;
            pfVar13[1] = (local_b0 - fVar5) * fVar2 + pfVar13[1];
            pfVar13[2] = pfVar13[2] + fVar2 * (local_ac - fVar1);
            pfVar13 = pfVar13 + 7;
          } while (uVar11 != 0);
          return;
        }
      }
      else if ((*(float *)(in_ECX + 0x28) == 0.0) && (*(float *)(in_ECX + 0x34) != 0.0)) {
        pfVar9 = *(float **)(param_2 + 0x1c);
        fVar4 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x34) * 500.0;
        if (uVar3 != 0) {
          uVar11 = (uint)uVar3;
          pfVar13 = *(float **)(param_2 + 0x5c);
          do {
            fVar5 = *pfVar9;
            fVar1 = pfVar9[1];
            fVar2 = pfVar9[2];
            FUN_0043f350();
            fVar15 = (float10)FUN_0053d480();
            fVar16 = (float10)FUN_0053d480();
            fVar17 = (float10)FUN_0053d480();
            pfVar9 = pfVar9 + 3;
            uVar11 = uVar11 - 1;
            fVar7 = param_1 - pfVar13[5];
            *pfVar13 = *pfVar13 +
                       ((local_b4 - fVar5) * fVar6 + (float)(fVar15 * (float10)fVar4)) * fVar7;
            pfVar13[1] = ((local_b0 - fVar1) * fVar6 + (float)(fVar16 * (float10)fVar4)) * fVar7 +
                         pfVar13[1];
            pfVar13[2] = fVar7 * (fVar6 * (local_ac - fVar2) + (float)(fVar17 * (float10)fVar4)) +
                         pfVar13[2];
            pfVar13 = pfVar13 + 7;
          } while (uVar11 != 0);
          return;
        }
      }
      else if ((*(float *)(in_ECX + 0x28) == 0.0) || (*(float *)(in_ECX + 0x34) != 0.0)) {
        if ((*(float *)(in_ECX + 0x28) != 0.0) && (*(float *)(in_ECX + 0x34) != 0.0)) {
          pfVar9 = *(float **)(param_2 + 0x1c);
          fVar1 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x34) * 500.0;
          if (uVar3 != 0) {
            local_1a4 = (uint)uVar3;
            pfVar13 = *(float **)(param_2 + 0x5c);
            do {
              fVar15 = (float10)FUN_0053d480();
              fVar16 = (float10)FUN_0053d480();
              fVar17 = (float10)FUN_0053d480();
              local_108 = local_b4 - *pfVar9;
              local_104 = local_b0 - pfVar9[1];
              local_100 = local_ac - pfVar9[2];
              FUN_0043f350();
              fVar18 = (float10)FUN_009866bc();
              fVar2 = (float)fVar18;
              pfVar9 = pfVar9 + 3;
              local_1a4 = local_1a4 - 1;
              fVar7 = param_1 - pfVar13[5];
              *pfVar13 = (fVar4 * fVar6 * fVar2 + (float)(fVar15 * (float10)fVar1)) * fVar7 +
                         *pfVar13;
              pfVar13[1] = pfVar13[1] +
                           (fStack_17c * fVar6 * fVar2 + (float)(fVar16 * (float10)fVar1)) * fVar7;
              pfVar13[2] = fVar7 * (fVar2 * fVar6 * fVar5 + (float)(fVar17 * (float10)fVar1)) +
                           pfVar13[2];
              pfVar13 = pfVar13 + 7;
            } while (local_1a4 != 0);
            return;
          }
        }
      }
      else {
        pfVar9 = *(float **)(param_2 + 0x1c);
        if (uVar3 != 0) {
          local_1a4 = (uint)uVar3;
          pfVar13 = *(float **)(param_2 + 0x5c);
          do {
            fVar4 = *pfVar9;
            fVar5 = pfVar9[1];
            fVar1 = pfVar9[2];
            FUN_0043f350();
            fVar15 = (float10)FUN_009866bc();
            pfVar9 = pfVar9 + 3;
            local_1a4 = local_1a4 - 1;
            fVar2 = (param_1 - pfVar13[5]) * (float)fVar15 * fVar6;
            *pfVar13 = (local_b4 - fVar4) * fVar2 + *pfVar13;
            pfVar13[1] = (local_b0 - fVar5) * fVar2 + pfVar13[1];
            pfVar13[2] = pfVar13[2] + fVar2 * (local_ac - fVar1);
            pfVar13 = pfVar13 + 7;
          } while (local_1a4 != 0);
          return;
        }
      }
    }
  }
  return;
}



void FUN_00751a00(int *param_1)

{
  int in_ECX;
  
  FUN_00752e40(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  FUN_007094a0(param_1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x28,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x2c,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x30,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x34,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x38,4,&stack0x00000000,1);
  return;
}



void FUN_00752780(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00752dc0(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x20,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x22,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x24,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x28,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x2c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x30,4,&param_1,1);
  return;
}



void FUN_00752890(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00752e40(param_1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x20,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x22,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x24,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x28,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x2c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x30,4,&param_1,1);
  return;
}



void FUN_00752bf0(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a8653c;
  *(undefined1 *)(in_ECX + 5) = 1;
  return;
}



void FUN_00752c20(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8653c;
  FUN_00401f20(in_ECX[2]);
  FUN_0055ace0();
  return;
}



void FUN_00752c40(int param_1,undefined4 param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_00700770(param_1,param_2);
  _Src = *(char **)(in_ECX + 8);
  FUN_00401f20(*(undefined4 *)(param_1 + 8));
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(_Src + 1)));
  *(char **)(param_1 + 8) = _Dst;
  _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(_Src + 1))),_Src);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(in_ECX + 0x14);
  return;
}



void FUN_00752cb0(undefined4 param_1)

{
  FUN_0068f970(param_1);
  FUN_007124a0();
  return;
}



uint FUN_00752cd0(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int in_ECX;
  byte *pbVar3;
  bool bVar4;
  
  pbVar2 = (byte *)FUN_00700670(param_1);
  if ((((char)pbVar2 != '\0') && (pbVar2 = *(byte **)(in_ECX + 8), pbVar2 != (byte *)0x0)) &&
     (pbVar3 = *(byte **)(param_1 + 8), pbVar3 != (byte *)0x0)) {
    do {
      bVar1 = *pbVar2;
      bVar4 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_00752d10:
        pbVar2 = (byte *)((1 - (uint)bVar4) - (uint)(bVar4 != 0));
        goto LAB_00752d15;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar4 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_00752d10;
      pbVar2 = pbVar2 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    pbVar2 = (byte *)0x0;
LAB_00752d15:
    if (((pbVar2 == (byte *)0x0) &&
        (pbVar2 = *(byte **)(in_ECX + 0xc), pbVar2 == *(byte **)(param_1 + 0xc))) &&
       (*(char *)(in_ECX + 0x14) == *(char *)(param_1 + 0x14))) {
      return CONCAT31((int3)((uint)pbVar2 >> 8),1);
    }
  }
  return (uint)pbVar2 & 0xffffff00;
}



void FUN_00752d40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8653c;
  FUN_00401f20(in_ECX[2]);
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00752d80(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  FUN_0055e000(*(undefined4 *)(in_ECX + 0x10),&param_1);
  *(int *)(iVar1 + 0x10) = param_1;
  return;
}



void FUN_00752dc0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_007008a0(param_1);
  FUN_00713620(in_ECX + 8);
  iVar1 = *(int *)(iVar2 + 0x21c);
  local_4 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0xc,4,&local_4,1);
  FUN_00712a20();
  iVar1 = *(int *)(iVar2 + 0x21c);
  local_4 = 1;
  (**(code **)(iVar1 + 4))(iVar1,&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0x14) = (char)param_1 != '\0';
  return;
}



void FUN_00752e40(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = param_1;
  FUN_0068f970(param_1);
  FUN_00713720(*(undefined4 *)(in_ECX + 8));
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0xc,4,&param_1,1);
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&stack0x00000000,1,&stack0xfffffff8,1);
  return;
}



void FUN_00752ec0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b40d08);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30(&DAT_00a363d4,*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb40("Order",*(undefined4 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070f950("Active",*(undefined1 *)(in_ECX + 0x14));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00752fd0(void)

{
  undefined4 *in_ECX;
  
  FUN_0074eda0();
  *in_ECX = &PTR_FUN_00a865b4;
  in_ECX[0x14] = 0;
  return;
}



void thunk_FUN_0074ee00(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00752c40(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(in_ECX + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(in_ECX + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(in_ECX + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(in_ECX + 0x44);
  return;
}



void FUN_00753010(undefined4 param_1)

{
  FUN_0074f240(param_1);
  FUN_00712a20();
  return;
}



void FUN_00753030(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  thunk_FUN_00752cb0(param_1);
  uVar1 = FUN_007124a0();
  *(undefined4 *)(in_ECX + 0x50) = uVar1;
  return;
}



void thunk_FUN_00700650(void)

{
  thunk_FUN_00700650();
  return;
}



void FUN_00753060(int *param_1)

{
  int in_ECX;
  
  FUN_0074f3a0(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x50));
  return;
}



uint FUN_00753080(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_0074f160(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *(uint *)(in_ECX + 0x50);
    if (uVar1 != 0) {
      if (*(int *)(param_1 + 0x50) == 0) goto LAB_00753092;
      if (uVar1 != 0) goto LAB_007530b0;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
LAB_007530b0:
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_00753092:
  return uVar1 & 0xffffff00;
}



void FUN_00753180(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00752d80(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  if (*(int *)(in_ECX + 0x50) != 0) {
    cVar2 = FUN_0055e000(*(int *)(in_ECX + 0x50),&param_1);
    if (cVar2 != '\0') {
      *(int *)(iVar1 + 0x50) = param_1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  }
  return;
}



void FUN_007531e0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0074f4f0(param_1);
  param_1 = FUN_0070f910(DAT_00b40d60);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  if (*(int *)(in_ECX + 0x50) != 0) {
    param_1 = FUN_0070fc30("Emitter Object",*(undefined4 *)(*(int *)(in_ECX + 0x50) + 8));
    uVar2 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar2) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
    }
    FUN_0042bb90(uVar2,&param_1);
  }
  return;
}



float * FUN_00753280(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_4 = (param_4[2] - param_2[2]) * param_3[2] +
            (param_4[1] - param_2[1]) * param_3[1] + (*param_4 - *param_2) * *param_3;
  local_c = local_4 * *param_3;
  local_8 = local_4 * param_3[1];
  local_4 = local_4 * param_3[2];
  local_18 = (*param_4 - *param_2) - local_c;
  local_14 = (param_4[1] - param_2[1]) - local_8;
  local_10 = (param_4[2] - param_2[2]) - local_4;
  if (((DAT_00b3f9a8 == local_18) && (DAT_00b3f9ac == local_14)) && (DAT_00b3f9b0 == local_10)) {
    *param_1 = local_18;
    param_1[1] = local_14;
    param_1[2] = local_10;
    return param_1;
  }
  FUN_004bf9e0(param_1,&local_18);
  return param_1;
}



void FUN_00753400(float param_1,int param_2)

{
  float *pfVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc [12];
  undefined1 local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar6 = local_68;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar6 = local_9c;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  FUN_00718a80(local_34);
  FUN_0053d7a0(local_d0,local_68);
  local_104 = local_ac;
  local_100 = local_a8;
  local_fc = local_a4;
  FUN_007101f0(local_dc,in_ECX + 0x30);
  FUN_0043f350();
  local_ec = *(float *)(in_ECX + 0x28) * *(float *)(in_ECX + 0x28);
  uVar4 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      uVar3 = (uint)uVar4;
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + uVar3 * 0x1c);
      local_108 = param_1 - pfVar1[5];
      if (local_108 != 0.0) {
        local_f8 = *(float *)(*(int *)(param_2 + 0x1c) + uVar3 * 0xc);
        iVar2 = *(int *)(param_2 + 0x1c) + uVar3 * 0xc;
        local_f4 = *(float *)(iVar2 + 4);
        local_e8 = local_f8 - local_104;
        local_f0 = *(float *)(iVar2 + 8);
        local_e4 = local_f4 - local_100;
        local_e0 = local_f0 - local_fc;
        fVar7 = (float10)FUN_00982c30();
        if (((float)fVar7 != 0.0) && ((float)fVar7 <= local_ec)) {
          FUN_00753280(&local_114,&local_104,local_dc,&local_f8);
          local_108 = *(float *)(in_ECX + 0x1c) * local_108;
          local_114 = local_108 * local_114;
          local_110 = local_110 * local_108;
          local_10c = local_108 * local_10c;
          *pfVar1 = *pfVar1 + local_114;
          pfVar1[1] = pfVar1[1] + local_110;
          pfVar1[2] = pfVar1[2] + local_10c;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_00753610(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_100;
  float local_fc;
  float local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined1 local_dc [12];
  undefined1 local_d0 [36];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar7 = local_68;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar7 = local_9c;
  for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00718a80(local_34);
  FUN_0053d7a0(local_d0,local_68);
  local_e8 = local_ac;
  local_e4 = local_a8;
  local_e0 = local_a4;
  FUN_007101f0(local_dc,in_ECX + 0x30);
  FUN_0043f350();
  uVar5 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      uVar4 = (uint)uVar5;
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + uVar4 * 0x1c);
      fVar2 = pfVar1[5];
      if (param_1 - fVar2 != 0.0) {
        local_f4 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + uVar4 * 0xc);
        iVar3 = *(int *)(param_2 + 0x1c) + uVar4 * 0xc;
        local_f0 = *(undefined4 *)(iVar3 + 4);
        local_ec = *(undefined4 *)(iVar3 + 8);
        FUN_00753280(&local_100,&local_e8,local_dc,&local_f4);
        fVar2 = *(float *)(in_ECX + 0x1c) * (param_1 - fVar2);
        local_100 = fVar2 * local_100;
        local_fc = local_fc * fVar2;
        local_f8 = fVar2 * local_f8;
        *pfVar1 = *pfVar1 + local_100;
        pfVar1[1] = pfVar1[1] + local_fc;
        pfVar1[2] = local_f8 + pfVar1[2];
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_00753800(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00752d80(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  if (*(int *)(in_ECX + 0x18) != 0) {
    cVar2 = FUN_0055e000(*(int *)(in_ECX + 0x18),&param_1);
    if (cVar2 != '\0') {
      *(int *)(iVar1 + 0x18) = param_1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  }
  return;
}



void FUN_00753890(float param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float local_128;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  int local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_f0 [12];
  undefined1 local_e4 [12];
  undefined1 local_d8 [36];
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a4 [13];
  undefined4 local_70 [13];
  undefined1 local_3c [56];
  
  if ((((*(float *)(in_ECX + 0x1c) != 0.0) && (*(short *)(param_2 + 0x48) != 0)) &&
      (cVar1 = FUN_008aa350(&DAT_00b3f9a8), cVar1 == '\0')) && (*(int *)(in_ECX + 0x18) != 0)) {
    if (*(float *)(in_ECX + 0x20) == 0.0) {
      if (*(char *)(in_ECX + 0x24) == '\0') {
        FUN_00753610(param_1,param_2);
        return;
      }
      FUN_00753400(param_1,param_2);
      return;
    }
    puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar6 = local_a4;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar6 = local_70;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    FUN_00718a80(local_3c);
    FUN_0053d7a0(local_d8,local_a4);
    local_110 = local_ac;
    local_118 = local_b4;
    local_114 = local_b0;
    FUN_007101f0(local_e4,in_ECX + 0x30);
    FUN_0043f350();
    uVar4 = 0;
    if (*(short *)(param_2 + 0x48) != 0) {
      do {
        uVar3 = (uint)uVar4;
        local_100 = *(int *)(param_2 + 0x5c) + uVar3 * 0x1c;
        local_128 = param_1 - *(float *)(local_100 + 0x14);
        if (local_128 != 0.0) {
          local_10c = *(float *)(*(int *)(param_2 + 0x1c) + uVar3 * 0xc);
          iVar2 = *(int *)(param_2 + 0x1c) + uVar3 * 0xc;
          local_108 = *(float *)(iVar2 + 4);
          local_fc = local_10c - local_118;
          local_104 = *(float *)(iVar2 + 8);
          local_f8 = local_108 - local_114;
          local_f4 = local_104 - local_110;
          fVar7 = (float10)FUN_00404c90();
          if (((float)fVar7 != 0.0) &&
             ((*(char *)(in_ECX + 0x24) == '\0' || ((float)fVar7 <= *(float *)(in_ECX + 0x28))))) {
            FUN_00753280(local_f0,&local_118,local_e4,&local_10c);
            local_128 = local_128 * *(float *)(in_ECX + 0x1c);
            if (*(float *)(in_ECX + 0x20) != 0.0) {
              fVar7 = (float10)FUN_00985b70();
              local_128 = local_128 / (float)fVar7;
            }
            FUN_0069dd70(local_128);
            FUN_004121d0(local_f0);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)(param_2 + 0x48));
    }
  }
  return;
}



void FUN_00753dc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b40dfc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00753e20(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  ushort uVar6;
  
  uVar6 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar6 * 0x1c);
      iVar3 = _rand();
      iVar4 = _rand();
      iVar5 = _rand();
      uVar6 = uVar6 + 1;
      fVar2 = *(float *)(in_ECX + 0x1c);
      *pfVar1 = *pfVar1 + fVar2 * (((float)iVar3 + (float)iVar3) / 32767.0 - 1.0);
      pfVar1[1] = pfVar1[1] + fVar2 * (((float)iVar4 + (float)iVar4) / 32767.0 - 1.0);
      pfVar1[2] = pfVar1[2] + fVar2 * (((float)iVar5 + (float)iVar5) / 32767.0 - 1.0);
    } while (uVar6 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_00753f80(undefined4 param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  ushort uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined1 local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar11 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar12 = local_9c;
  for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar11 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar12 = local_68;
  for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar12 = *puVar11;
    puVar11 = puVar11 + 1;
    puVar12 = puVar12 + 1;
  }
  FUN_00718a80(local_34);
  FUN_0053d7a0(local_d0,local_9c);
  uVar10 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      uVar6 = (uint)uVar10;
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + uVar6 * 0x1c);
      pfVar2 = (float *)(*(int *)(param_2 + 0x1c) + uVar6 * 0xc);
      fVar3 = *pfVar2 - local_ac;
      fVar4 = *(float *)(*(int *)(param_2 + 0x1c) + 4 + uVar6 * 0xc) - local_a8;
      fVar5 = pfVar2[2] - local_a4;
      if (fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 <= *(float *)(in_ECX + 0x2c)) {
        iVar9 = _rand();
        iVar7 = _rand();
        iVar8 = _rand();
        fVar3 = *(float *)(in_ECX + 0x1c);
        *pfVar1 = *pfVar1 + fVar3 * (((float)iVar9 + (float)iVar9) / 32767.0 - 1.0);
        pfVar1[1] = pfVar1[1] + fVar3 * (((float)iVar7 + (float)iVar7) / 32767.0 - 1.0);
        pfVar1[2] = pfVar1[2] + fVar3 * (((float)iVar8 + (float)iVar8) / 32767.0 - 1.0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



uint FUN_00754540(float param_1,float *param_2,int param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  uint in_ECX;
  float10 fVar11;
  
  pfVar1 = (float *)(*(int *)(param_3 + 0x1c) + (param_4 & 0xffff) * 0xc);
  fVar7 = *pfVar1 - *(float *)(in_ECX + 0x3c);
  pfVar2 = (float *)(*(int *)(param_3 + 0x5c) + (param_4 & 0xffff) * 0x1c);
  bVar9 = 0;
  fVar3 = pfVar1[1] - *(float *)(in_ECX + 0x40);
  fVar4 = pfVar1[2] - *(float *)(in_ECX + 0x44);
  fVar5 = (fVar3 * fVar3 + fVar7 * fVar7 + fVar4 * fVar4) - *(float *)(in_ECX + 0x38);
  if (-fVar5 <= 0.001) {
    bVar8 = false;
    if (fVar5 <= 0.001) goto LAB_007547e4;
  }
  else {
    bVar8 = true;
  }
  fVar7 = -(pfVar2[1] * fVar3 + *pfVar2 * fVar7 + pfVar2[2] * fVar4);
  if ((bVar8) || (0.0 < fVar7)) {
    fVar7 = fVar7 / (pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2 + pfVar2[2] * pfVar2[2]);
    fVar3 = (*pfVar1 + fVar7 * *pfVar2) - *(float *)(in_ECX + 0x3c);
    fVar4 = (pfVar2[1] * fVar7 + pfVar1[1]) - *(float *)(in_ECX + 0x40);
    fVar5 = (pfVar1[2] + pfVar2[2] * fVar7) - *(float *)(in_ECX + 0x44);
    if ((bVar8) || (fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4 < *(float *)(in_ECX + 0x38))) {
      if (bVar8) {
        fVar11 = (float10)FUN_00982c30();
        fVar7 = (float)fVar11 + fVar7;
      }
      else {
        fVar11 = (float10)FUN_00982c30();
        fVar7 = fVar7 - (float)fVar11;
      }
      if (fVar7 < *param_2 - param_1) {
        bVar9 = 1;
        *param_2 = fVar7 + param_1;
        *(float *)(in_ECX + 0x20) = fVar7 + param_1;
        fVar3 = pfVar2[1];
        fVar4 = pfVar2[2];
        fVar5 = pfVar1[1];
        fVar6 = pfVar1[2];
        *(float *)(in_ECX + 0x14) = *pfVar1 + fVar7 * *pfVar2;
        *(float *)(in_ECX + 0x18) = fVar3 * fVar7 + fVar5;
        *(float *)(in_ECX + 0x1c) = fVar6 + fVar4 * fVar7;
      }
    }
  }
LAB_007547e4:
  uVar10 = FUN_0075ed20(param_1,param_2,param_3,param_4);
  if (uVar10 == 0) {
    uVar10 = -(uint)bVar9 & in_ECX;
  }
  return uVar10;
}



void FUN_00754810(undefined4 param_1,int param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  
  pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (param_3 & 0xffff) * 0x1c);
  fVar2 = 1.0 / *(float *)(in_ECX + 0x34);
  fVar4 = fVar2 * (*(float *)(in_ECX + 0x14) - *(float *)(in_ECX + 0x3c));
  fVar3 = (*(float *)(in_ECX + 0x18) - *(float *)(in_ECX + 0x40)) * fVar2;
  fVar2 = fVar2 * (*(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x44));
  fVar5 = fVar4 * *pfVar1 + fVar3 * pfVar1[1] + fVar2 * pfVar1[2];
  fVar4 = fVar5 * fVar4;
  fVar3 = fVar5 * fVar3;
  fVar5 = fVar5 * fVar2;
  fVar4 = *pfVar1 - (fVar4 + fVar4);
  *pfVar1 = fVar4;
  fVar3 = pfVar1[1] - (fVar3 + fVar3);
  pfVar1[1] = fVar3;
  fVar5 = pfVar1[2] - (fVar5 + fVar5);
  pfVar1[2] = fVar5;
  fVar2 = *(float *)(in_ECX + 8);
  *pfVar1 = fVar2 * fVar4;
  pfVar1[1] = fVar2 * fVar3;
  pfVar1[2] = fVar5 * fVar2;
  FUN_0075ec40(param_1,param_2,param_3);
  return;
}



void FUN_00754ac0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_0075eda0(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    cVar2 = FUN_0055e000(*(int *)(in_ECX + 0x2c),&param_1);
    if (cVar2 != '\0') {
      *(int *)(iVar1 + 0x2c) = param_1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  }
  return;
}



void FUN_00754b20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,float param_6)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0075ecb0(param_1,param_2,param_3,param_4);
  in_ECX[0xc] = 0x3f800000;
  in_ECX[0xe] = 0x3f800000;
  in_ECX[0xb] = param_5;
  *in_ECX = &PTR_FUN_00a86784;
  in_ECX[0xf] = DAT_00b3f9a8;
  in_ECX[0x10] = DAT_00b3f9ac;
  in_ECX[0x11] = DAT_00b3f9b0;
  if (0.0 <= param_6) {
    in_ECX[0xc] = param_6;
  }
  in_ECX[0x28] = 0xff7fffff;
  in_ECX[0x1b] = 0xff7fffff;
  in_ECX[0x29] = 0xff7fffff;
  in_ECX[0x1c] = 0xff7fffff;
  in_ECX[0x2a] = 0xff7fffff;
  in_ECX[0x1d] = 0xff7fffff;
  puVar2 = &DAT_00b3fadc;
  puVar3 = in_ECX + 0x1f;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_ECX + 0x1f;
  puVar3 = in_ECX + 0x12;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  in_ECX[0x2b] = 0xff7fffff;
  in_ECX[0x1e] = 0xff7fffff;
  return;
}



void FUN_00754cb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_0075efa0(param_1);
  FUN_00712a20();
  if (0xa000112 < *(uint *)(iVar1 + 0xd8)) {
    iVar1 = *(int *)(iVar1 + 0x21c);
    param_1 = 4;
    (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x30,4,&param_1,1);
  }
  return;
}



void thunk_FUN_00715e70(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int *in_ECX;
  
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0xd] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar5 = FUN_007124a0();
  in_ECX[0xc] = iVar5;
  if (*(uint *)(param_1 + 0xd8) < 0xa000110) {
    cVar2 = (**(code **)(*in_ECX + 0x60))();
    if ((cVar2 != '\0') && (in_ECX[0xc] != 0)) {
      iVar5 = *(int *)(in_ECX[0xc] + 0xb4);
      *(ushort *)(iVar5 + 0x2e) = *(ushort *)(iVar5 + 0x2e) & 0xfff | 0x8000;
    }
  }
  return;
}



undefined1 thunk_FUN_00715f10(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(param_1);
  }
  return 1;
}



void thunk_FUN_00716050(int *param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  FUN_0068f970(param_1);
  piVar1 = *(int **)(in_ECX + 0x34);
  while ((piVar1 != (int *)0x0 && (cVar2 = (**(code **)(*piVar1 + 0x6c))(), cVar2 == '\0'))) {
    piVar1 = (int *)piVar1[0xd];
  }
  (**(code **)(*param_1 + 0x2c))(piVar1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 8,2,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0xc,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x10,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x14,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x18,4,&stack0x00000000,1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x30));
  return;
}



void FUN_00754ec0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  *(ushort *)(in_ECX + 8) = *(ushort *)(in_ECX + 8) & 0xfff9;
  if (*(int *)(in_ECX + 0x30) != 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 == '\0') {
      if (*(float *)(in_ECX + 0x3c) == -3.4028235e+38) {
        *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x28);
      }
      if (*(float *)(in_ECX + 0x28) < *(float *)(in_ECX + 0x3c)) {
        *(undefined1 *)(*(int *)(in_ECX + 0x30) + 0xec) = 1;
      }
      *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x28);
    }
  }
  return;
}



void FUN_00754f80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00716140(param_1);
  param_1 = FUN_0070f910(DAT_00b40f30);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00755030(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  int iVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float *pfVar10;
  undefined1 local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar9 = local_9c;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar9 = local_68;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  FUN_00718a80(local_34);
  FUN_0053d7a0(local_d0,local_9c);
  fVar2 = *(float *)(in_ECX + 0x1c);
  pfVar10 = *(float **)(param_2 + 0x1c);
  uVar7 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar7 * 0x1c);
      if (param_1 - pfVar1[5] != 0.0) {
        fVar3 = pfVar10[1];
        fVar4 = pfVar10[2];
        fVar5 = (param_1 - pfVar1[5]) * fVar2;
        *pfVar1 = *pfVar1 + fVar5 * (*pfVar10 - local_ac);
        pfVar1[1] = pfVar1[1] + (fVar3 - local_a8) * fVar5;
        pfVar1[2] = fVar5 * (fVar4 - local_a4) + pfVar1[2];
        pfVar10 = pfVar10 + 3;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_007551d0(float param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  int iVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  float local_114;
  float local_110;
  float local_10c;
  undefined1 local_d8 [36];
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a4 [13];
  undefined4 local_70 [13];
  undefined1 local_3c [56];
  
  if (((*(float *)(in_ECX + 0x1c) != 0.0) && (*(short *)(param_2 + 0x48) != 0)) &&
     (*(int *)(in_ECX + 0x18) != 0)) {
    if (*(char *)(in_ECX + 0x24) == '\0') {
      if (*(float *)(in_ECX + 0x20) == 0.0) {
        FUN_00755030(param_1,param_2);
        return;
      }
      if (*(float *)(in_ECX + 0x30) == 0.0) {
        FUN_00755030(param_1,param_2);
        return;
      }
    }
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar8 = local_a4;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar8 = local_70;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_00718a80(local_3c);
    FUN_0053d7a0(local_d8,local_a4);
    uVar6 = 0;
    if (*(short *)(param_2 + 0x48) != 0) {
      do {
        pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar6 * 0x1c);
        local_114 = param_1 - pfVar1[5];
        if (local_114 != 0.0) {
          pfVar2 = (float *)(*(int *)(param_2 + 0x1c) + (uint)uVar6 * 0xc);
          fVar4 = *pfVar2 - local_b4;
          local_110 = pfVar2[1] - local_b0;
          local_10c = pfVar2[2] - local_ac;
          fVar3 = fVar4 * fVar4 + local_110 * local_110 + local_10c * local_10c;
          if ((*(char *)(in_ECX + 0x24) == '\0') || (fVar3 <= *(float *)(in_ECX + 0x2c))) {
            if ((*(float *)(in_ECX + 0x20) == 0.0) || (fVar3 == 0.0)) {
              local_114 = *(float *)(in_ECX + 0x1c) * local_114;
            }
            else {
              fVar3 = *(float *)(in_ECX + 0x1c);
              fVar9 = (float10)FUN_00985b70();
              fVar9 = (float10)FUN_004ac790(0x3f800000,(float)fVar9 * *(float *)(in_ECX + 0x30));
              local_114 = (float)((float10)(fVar3 * local_114) / fVar9);
            }
            local_10c = local_114 * local_10c;
            local_110 = local_110 * local_114;
            local_114 = local_114 * fVar4;
            *pfVar1 = *pfVar1 + local_114;
            pfVar1[1] = pfVar1[1] + local_110;
            pfVar1[2] = local_10c + pfVar1[2];
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_2 + 0x48));
      return;
    }
  }
  return;
}



void FUN_007555f0(float param_1,int *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  ushort uVar7;
  
  (**(code **)(*param_2 + 0x5c))();
  iVar5 = param_2[0x17];
  uVar7 = 0;
  if ((short)param_2[0x12] != 0) {
    do {
      pfVar1 = (float *)(iVar5 + (uint)uVar7 * 0x1c);
      pfVar2 = (float *)(param_2[7] + (uint)uVar7 * 0xc);
      fVar6 = param_1 - pfVar1[5];
      uVar7 = uVar7 + 1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      *pfVar2 = *pfVar2 + fVar6 * *pfVar1;
      pfVar2[1] = fVar3 * fVar6 + pfVar2[1];
      pfVar2[2] = pfVar2[2] + fVar6 * fVar4;
      pfVar1[5] = param_1;
    } while (uVar7 < *(ushort *)(param_2 + 0x12));
  }
  return;
}



void FUN_00755740(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00752ec0(param_1);
  param_1 = FUN_0070f910(DAT_00b40fd0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00755790(float param_1,float *param_2,float param_3,uint param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint in_ECX;
  float10 fVar10;
  float local_3c;
  float local_38;
  float local_34;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  iVar8 = (int)param_3;
  pfVar1 = (float *)(*(int *)((int)param_3 + 0x1c) + (param_4 & 0xffff) * 0xc);
  bVar7 = 0;
  pfVar2 = (float *)(*(int *)((int)param_3 + 0x5c) + (param_4 & 0xffff) * 0x1c);
  fVar3 = (*(float *)(in_ECX + 0x60) * pfVar1[2] +
          *pfVar1 * *(float *)(in_ECX + 0x58) + *(float *)(in_ECX + 0x5c) * pfVar1[1]) -
          *(float *)(in_ECX + 100);
  if ((0.001 <= fVar3) || (0.001 <= -fVar3)) {
    fVar5 = *param_2 - param_1;
    fVar4 = *(float *)(in_ECX + 0x60) * pfVar2[2] * fVar5 +
            *(float *)(in_ECX + 0x58) * fVar5 * *pfVar2 +
            *(float *)(in_ECX + 0x5c) * fVar5 * pfVar2[1];
    param_3 = fVar4 + fVar3;
    if (ABS(param_3) < 0.001) {
      param_3 = 0.0;
    }
    if (param_3 * fVar3 < 0.0) {
      fVar4 = (-fVar3 * fVar5) / fVar4;
      local_3c = *pfVar1 + fVar4 * *pfVar2;
      local_38 = fVar4 * pfVar2[1] + pfVar1[1];
      local_34 = fVar4 * pfVar2[2] + pfVar1[2];
      if ((_DAT_00b41020 & 1) == 0) {
        _DAT_00b41020 = _DAT_00b41020 | 1;
        fVar10 = (float10)FUN_00985b70();
        _DAT_00b4101c = (float)fVar10;
      }
      if (((local_38 * *(float *)(in_ECX + 0x5c) + local_3c * *(float *)(in_ECX + 0x58) +
           local_34 * *(float *)(in_ECX + 0x60)) - *(float *)(in_ECX + 100)) * fVar3 < 0.0) {
        fVar5 = ABS(local_3c);
        if (fVar5 < ABS(local_38)) {
          fVar5 = ABS(local_38);
        }
        if (fVar5 < ABS(local_34)) {
          fVar5 = ABS(local_34);
        }
        fVar5 = _DAT_00b4101c * fVar5;
        if (0.0 <= fVar3) {
          local_3c = fVar5 * *(float *)(in_ECX + 0x58) + local_3c;
          local_38 = local_38 + *(float *)(in_ECX + 0x5c) * fVar5;
          local_34 = local_34 + fVar5 * *(float *)(in_ECX + 0x60);
        }
        else {
          local_3c = local_3c - fVar5 * *(float *)(in_ECX + 0x58);
          local_38 = local_38 - *(float *)(in_ECX + 0x5c) * fVar5;
          local_34 = local_34 - fVar5 * *(float *)(in_ECX + 0x60);
        }
      }
      fVar5 = local_3c - *(float *)(in_ECX + 0x68);
      fVar6 = local_38 - *(float *)(in_ECX + 0x6c);
      fVar3 = local_34 - *(float *)(in_ECX + 0x70);
      FUN_007101f0(&local_18,in_ECX + 0x38);
      FUN_007101f0(&local_c,in_ECX + 0x44);
      local_1c = local_10 * fVar3 + local_18 * fVar5 + fVar6 * local_14;
      local_24 = local_1c * local_18;
      local_20 = local_1c * local_14;
      local_1c = local_10 * local_1c;
      fVar3 = local_4 * fVar3 + local_c * fVar5 + local_8 * fVar6;
      if ((local_1c * local_1c + local_24 * local_24 + local_20 * local_20 <
           *(float *)(in_ECX + 0x50)) &&
         (local_4 * fVar3 * local_4 * fVar3 +
          fVar3 * local_c * fVar3 * local_c + fVar3 * local_8 * fVar3 * local_8 <
          *(float *)(in_ECX + 0x54))) {
        bVar7 = 1;
        *param_2 = fVar4 + param_1;
        *(float *)(in_ECX + 0x14) = local_3c;
        *(float *)(in_ECX + 0x20) = fVar4 + param_1;
        *(float *)(in_ECX + 0x18) = local_38;
        *(float *)(in_ECX + 0x1c) = local_34;
      }
    }
  }
  else {
    fVar3 = *pfVar1 - *(float *)(in_ECX + 0x68);
    fVar4 = pfVar1[1] - *(float *)(in_ECX + 0x6c);
    fVar5 = pfVar1[2] - *(float *)(in_ECX + 0x70);
    FUN_007101f0(&local_24,in_ECX + 0x38);
    FUN_007101f0(&local_18,in_ECX + 0x44);
    fVar6 = local_1c * fVar5 + fVar4 * local_20 + local_24 * fVar3;
    fVar3 = local_10 * fVar5 + local_14 * fVar4 + local_18 * fVar3;
    if ((local_1c * fVar6 * local_1c * fVar6 +
         fVar6 * local_20 * fVar6 * local_20 + fVar6 * local_24 * fVar6 * local_24 <
         *(float *)(in_ECX + 0x50)) &&
       (fVar3 * local_10 * fVar3 * local_10 +
        local_14 * fVar3 * local_14 * fVar3 + fVar3 * local_18 * fVar3 * local_18 <
        *(float *)(in_ECX + 0x54))) {
      *param_2 = param_1;
      *(float *)(in_ECX + 0x20) = param_1;
      *(float *)(in_ECX + 0x14) = *pfVar1;
      *(float *)(in_ECX + 0x18) = pfVar1[1];
      *(float *)(in_ECX + 0x1c) = pfVar1[2];
      return in_ECX;
    }
  }
  uVar9 = FUN_0075ed20(param_1,param_2,iVar8,param_4);
  if (uVar9 == 0) {
    uVar9 = -(uint)bVar7 & in_ECX;
  }
  return uVar9;
}



void FUN_00755d90(float param_1,int param_2,uint param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  
  pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (param_3 & 0xffff) * 0x1c);
  fVar2 = *(float *)(in_ECX + 0x60) * pfVar1[2] +
          *pfVar1 * *(float *)(in_ECX + 0x58) + *(float *)(in_ECX + 0x5c) * pfVar1[1];
  fVar3 = fVar2 * *(float *)(in_ECX + 0x58);
  fVar4 = *(float *)(in_ECX + 0x5c) * fVar2;
  fVar5 = *(float *)(in_ECX + 0x60) * fVar2;
  if ((param_1 != *(float *)(in_ECX + 0x20)) || (0.001 <= fVar2)) {
    fVar3 = *pfVar1 - (fVar3 + fVar3);
    *pfVar1 = fVar3;
    fVar4 = pfVar1[1] - (fVar4 + fVar4);
    pfVar1[1] = fVar4;
    fVar5 = pfVar1[2] - (fVar5 + fVar5);
    pfVar1[2] = fVar5;
    fVar2 = *(float *)(in_ECX + 8);
    *pfVar1 = fVar2 * fVar3;
    pfVar1[1] = fVar2 * fVar4;
    fVar5 = fVar5 * fVar2;
  }
  else {
    *pfVar1 = *pfVar1 - fVar3;
    pfVar1[1] = pfVar1[1] - fVar4;
    fVar5 = pfVar1[2] - fVar5;
  }
  pfVar1[2] = fVar5;
  FUN_0075ec40(param_1,param_2,param_3);
  return;
}



void FUN_007561f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  FUN_0075ecb0(param_1,param_2,param_3,param_4);
  in_ECX[0xc] = param_6;
  in_ECX[0xd] = param_7;
  in_ECX[0xe] = param_8;
  in_ECX[0x14] = 0x3f000000;
  in_ECX[0x15] = 0x3f000000;
  in_ECX[0xb] = param_5;
  in_ECX[0xf] = param_9;
  in_ECX[0x11] = param_11;
  in_ECX[0x10] = param_10;
  in_ECX[0x12] = param_12;
  *in_ECX = &PTR_FUN_00a8694c;
  in_ECX[0x13] = param_13;
  FUN_00716de0(&DAT_00b3f9a8,0);
  in_ECX[0x1a] = DAT_00b3f9a8;
  in_ECX[0x1b] = DAT_00b3f9ac;
  in_ECX[0x1c] = DAT_00b3f9b0;
  puVar2 = &DAT_00b26dc4;
  puVar3 = in_ECX + 0x1d;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00718a50();
  FUN_00718a50();
  return;
}



void FUN_007562d0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00756800(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f4b0(param_1);
  param_1 = FUN_0070f910(DAT_00b410ac);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00756960(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41108);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00756a60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b4116c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00756b60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b411ac);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00756c40(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41224);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00756ca0(undefined4 param_1,float param_2)

{
  int iVar1;
  short sVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  ushort uVar5;
  uint uVar6;
  float local_8;
  
  iVar4 = (int)param_2;
  uVar5 = 0;
  if (*(short *)((int)param_2 + 0x48) != 0) {
    do {
      uVar6 = (uint)uVar5;
      local_8 = 1.0;
      sVar2 = *(short *)(*(int *)(iVar4 + 0x5c) + 0x18 + uVar6 * 0x1c);
      iVar1 = *(int *)(iVar4 + 0x5c) + uVar6 * 0x1c;
      if (((sVar2 == *(short *)(in_ECX + 0x1c)) &&
          (*(float *)(iVar1 + 0xc) < *(float *)(in_ECX + 0x18))) &&
         (*(float *)(in_ECX + 0x18) != 0.0)) {
        local_8 = *(float *)(iVar1 + 0xc) / *(float *)(in_ECX + 0x18);
      }
      param_2 = 1.0;
      fVar3 = *(float *)(iVar1 + 0x10) - *(float *)(iVar1 + 0xc);
      if (((sVar2 == *(short *)(in_ECX + 0x24)) && (fVar3 < *(float *)(in_ECX + 0x20))) &&
         (*(float *)(in_ECX + 0x20) != 0.0)) {
        param_2 = fVar3 / *(float *)(in_ECX + 0x20);
      }
      if (local_8 < param_2) {
        param_2 = local_8;
      }
      if (param_2 < 0.0001) {
        param_2 = 0.0001;
      }
      uVar5 = uVar5 + 1;
      *(float *)(*(int *)(iVar4 + 0x4c) + uVar6 * 4) = param_2;
    } while (uVar5 < *(ushort *)(iVar4 + 0x48));
  }
  return;
}



void FUN_00757260(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b412ec);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007572b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_ECX;
  
  FUN_0075e800();
  *in_ECX = &PTR_FUN_00a86ea4;
  fVar3 = DAT_00b258e4;
  fVar1 = -DAT_00b258dc;
  fVar2 = -DAT_00b258e0;
  in_ECX[0xc] = fVar1;
  in_ECX[0xf] = fVar1;
  in_ECX[0xd] = fVar2;
  in_ECX[0x10] = fVar2;
  in_ECX[0xe] = -fVar3;
  in_ECX[0x11] = -fVar3;
  FUN_0043f350();
  return;
}



void FUN_00757350(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  FUN_0075e920(param_1);
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  FUN_00709430(param_1);
  *puVar1 = *puVar1;
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(in_ECX + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(in_ECX + 0x34);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(in_ECX + 0x38);
  FUN_0043f350();
  return;
}



void FUN_007573c0(byte param_1)

{
  FUN_00752c20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007573e0(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined4 local_d0 [13];
  undefined1 local_9c [52];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar7 = local_68;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar7 = local_d0;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00718a80(local_9c);
  FUN_0053d7a0(local_34,local_68);
  FUN_007101f0(&local_e8,in_ECX + 0x30);
  FUN_0043f350();
  fVar2 = *(float *)(in_ECX + 0x1c);
  uVar5 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar5 * 0x1c);
      fVar3 = param_1 - pfVar1[5];
      if (fVar3 != 0.0) {
        *pfVar1 = *pfVar1 + fVar2 * local_e8 * fVar3;
        pfVar1[1] = local_e4 * fVar2 * fVar3 + pfVar1[1];
        pfVar1[2] = pfVar1[2] + fVar3 * fVar2 * local_e0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_00757580(float param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  ushort uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float local_13c;
  float local_138;
  float local_134;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  double local_e0;
  undefined1 local_d8 [36];
  float local_b4;
  float local_b0;
  float local_ac;
  undefined4 local_a4 [13];
  undefined4 local_70 [13];
  undefined1 local_3c [56];
  
  if (((*(float *)(in_ECX + 0x1c) != 0.0) && (*(short *)(param_2 + 0x48) != 0)) &&
     (*(int *)(in_ECX + 0x18) != 0)) {
    if ((*(char *)(in_ECX + 0x24) == '\0') && (*(float *)(in_ECX + 0x20) == 0.0)) {
      FUN_007573e0(param_1,param_2);
      return;
    }
    puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar7 = local_a4;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    puVar6 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar7 = local_70;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00718a80(local_3c);
    FUN_0053d7a0(local_d8,local_a4);
    local_f0 = *(float *)(in_ECX + 0x20) * 0.5;
    local_120 = local_b4;
    local_11c = local_b0;
    local_118 = local_ac;
    FUN_007101f0(&local_12c,in_ECX + 0x3c);
    uVar5 = 0;
    if (*(short *)(param_2 + 0x48) != 0) {
      do {
        pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar5 * 0x1c);
        local_134 = param_1 - pfVar1[5];
        if (local_134 != 0.0) {
          pfVar2 = (float *)(*(int *)(param_2 + 0x1c) + (uint)uVar5 * 0xc);
          local_fc = *pfVar2;
          local_ec = local_fc - local_120;
          local_f8 = pfVar2[1];
          local_f4 = pfVar2[2];
          local_e8 = local_f8 - local_11c;
          local_e4 = local_f4 - local_118;
          fVar3 = local_e4 * local_e4 + local_ec * local_ec + local_e8 * local_e8;
          if ((*(char *)(in_ECX + 0x24) == '\0') || (fVar3 <= *(float *)(in_ECX + 0x2c))) {
            if ((*(float *)(in_ECX + 0x20) == 0.0) || (fVar3 == 0.0)) {
              local_134 = local_134 * *(float *)(in_ECX + 0x1c);
              local_13c = local_134 * local_12c;
              local_138 = local_128 * local_134;
              local_134 = local_134 * local_124;
              local_108 = local_13c;
              local_104 = local_138;
              local_100 = local_134;
            }
            else {
              local_e0 = (double)(local_134 * *(float *)(in_ECX + 0x1c));
              fVar8 = (float10)FUN_00985b70();
              fVar8 = (float10)FUN_004ac790(0x3f800000,(float)fVar8);
              local_134 = (float)((float10)local_e0 / fVar8);
              local_13c = local_134 * local_12c;
              local_138 = local_128 * local_134;
              local_134 = local_134 * local_124;
              local_114 = local_13c;
              local_110 = local_138;
              local_10c = local_134;
            }
            *pfVar1 = *pfVar1 + local_13c;
            pfVar1[1] = pfVar1[1] + local_138;
            pfVar1[2] = local_134 + pfVar1[2];
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_2 + 0x48));
    }
  }
  return;
}



void FUN_007579a0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b413d0);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757ae0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b4140c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757bd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b4146c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757cb0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b414cc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757da0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41528);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757e50(byte param_1)

{
  FUN_0075e570();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00757ec0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41578);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00757fc0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b415f4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007580c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41658);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007581b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b416cc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00758300(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41708);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_007583a0(int param_1)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  
  cVar2 = FUN_00700670(param_1);
  if ((((cVar2 != '\0') && (*(int *)(param_1 + 8) == *(int *)(in_ECX + 8))) &&
      (*(int *)(param_1 + 0x10) == *(int *)(in_ECX + 0x10))) &&
     ((*(int *)(param_1 + 0x18) == *(int *)(in_ECX + 0x18) &&
      (*(char *)(param_1 + 0x14) == *(char *)(in_ECX + 0x14))))) {
    pcVar1 = *(code **)(&DAT_00b3d4a0 + *(int *)(in_ECX + 0x10) * 4);
    uVar4 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x14) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(param_1 + 0xc) + iVar3,*(int *)(in_ECX + 0xc) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 8));
    }
    uVar4 = 0;
    if (*(int *)(in_ECX + 0x18) != 0) {
      do {
        iVar3 = *(byte *)(in_ECX + 0x24) * uVar4;
        cVar2 = (*pcVar1)(*(int *)(param_1 + 0x1c) + iVar3,*(int *)(in_ECX + 0x1c) + iVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 0x18));
    }
    return 1;
  }
  return 0;
}



void FUN_00758460(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xc) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x10) * 4))(*(int *)(in_ECX + 0xc));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d3e8)[param_3];
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined1 *)(in_ECX + 0x14) = uVar1;
    *(int *)(in_ECX + 8) = param_2;
    *(int *)(in_ECX + 0x10) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



void FUN_007584c0(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    (**(code **)(&DAT_00b3d2c8 + *(int *)(in_ECX + 0x20) * 4))(*(int *)(in_ECX + 0x1c));
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = (&DAT_00b3d406)[param_3];
    *(int *)(in_ECX + 0x1c) = param_1;
    *(undefined1 *)(in_ECX + 0x24) = uVar1;
    *(int *)(in_ECX + 0x18) = param_2;
    *(int *)(in_ECX + 0x20) = param_3;
    return;
  }
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_00758520(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a87634;
  if (in_ECX[3] != 0) {
    (**(code **)(&DAT_00b3d2c8 + in_ECX[4] * 4))(in_ECX[3]);
  }
  if (in_ECX[7] != 0) {
    (**(code **)(&DAT_00b3d340 + in_ECX[8] * 4))(in_ECX[7]);
  }
  FUN_0055ace0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00758580(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iStack_c;
  int local_8;
  int iStack_4;
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  local_8 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,4,&local_8,1);
  if (param_1 != 0) {
    local_8 = 4;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_4,4,&local_8,1);
    iVar2 = iStack_4;
    iVar4 = iStack_4 * 4;
    iStack_4 = CONCAT31(iStack_4._1_3_,(&DAT_00b3d3e8)[iStack_4]);
    uVar3 = (**(code **)(&DAT_00b3d088 + iVar4))(iVar1,param_1);
    (**(code **)(&DAT_00b3d410 + iVar2 * 4))(uVar3,param_1,iStack_4);
    FUN_00758460(uVar3,param_1,iVar2);
  }
  iStack_4 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_c,4,&iStack_4,1);
  if (iStack_c != 0) {
    iVar4 = 5;
    if (0xa010067 < *(uint *)(iVar1 + 0xd8)) {
      iStack_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&local_8,4,&iStack_4,1);
      iVar4 = local_8;
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,(&DAT_00b3d406)[iVar4]);
    uVar3 = (**(code **)(&DAT_00b3d100 + iVar4 * 4))(iVar1,iStack_c);
    (**(code **)(&DAT_00b3d488 + iVar4 * 4))(uVar3,iStack_c,iStack_4);
    FUN_007584c0(uVar3,iStack_c,iVar4);
  }
  return;
}



void FUN_00758910(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_00752bf0();
  *in_ECX = &PTR_FUN_00a876dc;
  in_ECX[6] = 0;
  in_ECX[7] = DAT_00b258d0;
  in_ECX[8] = DAT_00b258d4;
  uVar1 = DAT_00b258d8;
  in_ECX[10] = 0x3d4ccccd;
  in_ECX[9] = uVar1;
  in_ECX[0xb] = 0x7f7fffff;
  in_ECX[0xc] = 0x7f7fffff;
  return;
}



void FUN_00759030(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  int in_ECX;
  ushort uVar3;
  
  uVar3 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar3 * 0x1c);
      fVar2 = (param_1 - pfVar1[5]) * *(float *)(in_ECX + 0x1c);
      if (1.0 <= fVar2) {
        *pfVar1 = DAT_00b3f9a8;
        pfVar1[1] = DAT_00b3f9ac;
        pfVar1[2] = DAT_00b3f9b0;
      }
      else {
        fVar2 = 1.0 - fVar2;
        *pfVar1 = fVar2 * *pfVar1;
        pfVar1[1] = pfVar1[1] * fVar2;
        pfVar1[2] = fVar2 * pfVar1[2];
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_00759120(float param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  ushort uVar6;
  undefined4 *puVar7;
  undefined1 local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
  puVar7 = local_9c;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
  puVar7 = local_68;
  for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  FUN_00718a80(local_34);
  FUN_0053d7a0(local_d0,local_9c);
  uVar6 = 0;
  if (*(short *)(param_2 + 0x48) != 0) {
    do {
      pfVar1 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar6 * 0x1c);
      fVar3 = (param_1 - pfVar1[5]) * *(float *)(in_ECX + 0x1c);
      if ((fVar3 != 0.0) &&
         (pfVar2 = (float *)(*(int *)(param_2 + 0x1c) + (uint)uVar6 * 0xc),
         (pfVar2[2] - local_a4) * (pfVar2[2] - local_a4) +
         (*pfVar2 - local_ac) * (*pfVar2 - local_ac) +
         (pfVar2[1] - local_a8) * (pfVar2[1] - local_a8) <= *(float *)(in_ECX + 0x2c))) {
        if (1.0 <= fVar3) {
          *pfVar1 = DAT_00b3f9a8;
          pfVar1[1] = DAT_00b3f9ac;
          pfVar1[2] = DAT_00b3f9b0;
        }
        else {
          fVar3 = 1.0 - fVar3;
          *pfVar1 = fVar3 * *pfVar1;
          pfVar1[1] = pfVar1[1] * fVar3;
          pfVar1[2] = fVar3 * pfVar1[2];
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_2 + 0x48));
  }
  return;
}



void FUN_007597f0(void)

{
  undefined4 *in_ECX;
  
  FUN_0073ee80();
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  *(undefined2 *)(in_ECX + 0x19) = 0;
  *(undefined2 *)((int)in_ECX + 0x66) = 0;
  *in_ECX = &PTR_FUN_00a877f4;
  return;
}



void FUN_00759830(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a877f4;
  FUN_00401f20(in_ECX[0x17]);
  FUN_00401f20(in_ECX[0x18]);
  FUN_0073eec0();
  return;
}



void FUN_00759860(uint param_1)

{
  ushort uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = *(short *)(in_ECX + 0x48) - 1;
  FUN_0073efb0(param_1);
  if ((ushort)param_1 != uVar1) {
    puVar3 = (undefined4 *)(*(int *)(in_ECX + 0x5c) + (uint)uVar1 * 0x1c);
    puVar4 = (undefined4 *)(*(int *)(in_ECX + 0x5c) + (param_1 & 0xffff) * 0x1c);
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    if (*(int *)(in_ECX + 0x60) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x60) + (param_1 & 0xffff) * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x60) + (uint)uVar1 * 4);
    }
  }
  return;
}



void FUN_007598c0(void)

{
  ushort uVar1;
  int *in_ECX;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = *(ushort *)(in_ECX + 0x12);
  uVar1 = *(ushort *)((int)in_ECX + 0x66);
  if (uVar2 < uVar1) {
    uVar3 = (uint)uVar2;
    *(ushort *)(in_ECX + 0x12) = (short)in_ECX[0x19] + uVar1;
    if (uVar2 < uVar1) {
      do {
        if (*(ushort *)(in_ECX + 0x12) <= *(ushort *)((int)in_ECX + 0x66)) break;
        (**(code **)(*in_ECX + 0x58))(uVar3);
        uVar3 = uVar3 + 1;
      } while ((ushort)uVar3 < *(ushort *)((int)in_ECX + 0x66));
    }
    uVar2 = (ushort)uVar3;
    if (uVar2 < *(ushort *)((int)in_ECX + 0x66)) {
      *(ushort *)(in_ECX + 0x12) = uVar2;
      *(undefined2 *)(in_ECX + 0x19) = 0;
      *(ushort *)((int)in_ECX + 0x66) = uVar2;
      return;
    }
  }
  else {
    *(ushort *)(in_ECX + 0x12) = (short)in_ECX[0x19] + uVar2;
  }
  *(undefined2 *)(in_ECX + 0x19) = 0;
  *(short *)((int)in_ECX + 0x66) = (short)in_ECX[0x12];
  return;
}



void FUN_00759940(int param_1,undefined4 param_2)

{
  ushort uVar1;
  size_t sVar2;
  void *pvVar3;
  int in_ECX;
  void *_Dst;
  void *_Dst_00;
  
  FUN_00700770(param_1,param_2);
  pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 0xc);
  sVar2 = (uint)*(ushort *)(in_ECX + 8) * 0xc;
  _memcpy(pvVar3,*(void **)(in_ECX + 0x1c),sVar2);
  _Dst = (void *)0x0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    _Dst = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 0xc);
    _memcpy(_Dst,*(void **)(in_ECX + 0x20),sVar2);
  }
  _Dst_00 = (void *)0x0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    uVar1 = *(ushort *)(in_ECX + 8);
    _Dst_00 = (void *)FUN_00401f00((uint)uVar1 * 0x10);
    if (_Dst_00 == (void *)0x0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(_Dst_00,0x10,(uint)uVar1,FUN_0047ea50);
    }
    _memcpy(_Dst_00,*(void **)(in_ECX + 0x24),(uint)*(ushort *)(in_ECX + 8) << 4);
  }
  FUN_00728890(*(undefined2 *)(in_ECX + 8),pvVar3,_Dst,_Dst_00,0,0,0);
  pvVar3 = (void *)0x0;
  if (*(int *)(in_ECX + 0x50) != 0) {
    pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 0x10);
    _memcpy(pvVar3,*(void **)(in_ECX + 0x50),(uint)*(ushort *)(in_ECX + 8) << 4);
  }
  FUN_0073ef50(pvVar3);
  pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
  sVar2 = (uint)*(ushort *)(in_ECX + 8) * 4;
  _memcpy(pvVar3,*(void **)(in_ECX + 0x4c),sVar2);
  FUN_0073ef30(pvVar3);
  pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
  _memcpy(pvVar3,*(void **)(in_ECX + 0x44),sVar2);
  FUN_0073ef10(pvVar3);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(in_ECX + 0x48);
  if (*(int *)(in_ECX + 0x54) != 0) {
    pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
    _memcpy(pvVar3,*(void **)(in_ECX + 0x54),sVar2);
    FUN_0073ef70(pvVar3);
  }
  if (*(int *)(in_ECX + 0x58) != 0) {
    pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 0xc);
    _memcpy(pvVar3,*(void **)(in_ECX + 0x58),(uint)*(ushort *)(in_ECX + 8) * 0xc);
    FUN_0073ef90(pvVar3);
  }
  pvVar3 = (void *)0x0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    uVar1 = *(ushort *)(in_ECX + 8);
    pvVar3 = (void *)FUN_00401f00((uint)uVar1 * 0x1c);
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
    }
    else {
      _vector_constructor_iterator_(pvVar3,0x1c,(uint)uVar1,FUN_0075f780);
    }
    _memcpy(pvVar3,*(void **)(in_ECX + 0x5c),(uint)*(ushort *)(in_ECX + 8) * 0x1c);
  }
  FUN_00401f20(*(undefined4 *)(param_1 + 0x5c));
  *(void **)(param_1 + 0x5c) = pvVar3;
  pvVar3 = (void *)0x0;
  if (*(int *)(in_ECX + 0x60) != 0) {
    pvVar3 = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
    _memcpy(pvVar3,*(void **)(in_ECX + 0x60),(uint)*(ushort *)(in_ECX + 8) * 4);
  }
  FUN_00401f20(*(undefined4 *)(param_1 + 0x60));
  *(void **)(param_1 + 0x60) = pvVar3;
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(in_ECX + 100);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(in_ECX + 0x66);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  return;
}



uint FUN_00759c90(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  ushort uVar5;
  uint uVar6;
  
  uVar4 = FUN_0073f270(param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = *(uint *)(in_ECX + 0x60);
    if (uVar4 != 0) {
      if (*(int *)(param_1 + 0x60) == 0) goto LAB_00759ca2;
      if (uVar4 != 0) goto LAB_00759cc0;
    }
    if (*(int *)(param_1 + 0x60) == 0) {
LAB_00759cc0:
      if (*(short *)(in_ECX + 0x48) != 0) {
        uVar5 = 0;
        do {
          uVar6 = (uint)uVar5;
          uVar4 = FUN_0075f7c0(*(int *)(param_1 + 0x5c) + uVar6 * 0x1c);
          if ((char)uVar4 == '\0') goto LAB_00759d33;
          iVar3 = *(int *)(in_ECX + 0x60);
          uVar4 = 0;
          if (iVar3 != 0) {
            fVar1 = *(float *)(iVar3 + uVar6 * 4);
            fVar2 = *(float *)(*(int *)(param_1 + 0x60) + uVar6 * 4);
            uVar4 = CONCAT22((short)((uint)iVar3 >> 0x10),
                             (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
            if (fVar2 != fVar1) goto LAB_00759d33;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ushort *)(in_ECX + 0x48));
      }
      uVar4 = CONCAT22((short)(uVar4 >> 0x10),*(short *)(in_ECX + 100));
      if ((*(short *)(in_ECX + 100) == *(short *)(param_1 + 100)) &&
         (*(short *)(in_ECX + 0x66) == *(short *)(param_1 + 0x66))) {
        return CONCAT31((int3)(uVar4 >> 8),1);
      }
LAB_00759d33:
      return uVar4 & 0xffffff00;
    }
  }
LAB_00759ca2:
  return uVar4 & 0xffffff00;
}



void FUN_00759d40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a877f4;
  FUN_00401f20(in_ECX[0x17]);
  FUN_00401f20(in_ECX[0x18]);
  FUN_0073eec0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00759d80(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x68);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0073ee80();
    *puVar1 = &PTR_FUN_00a877f4;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    *(undefined2 *)(puVar1 + 0x19) = 0;
    *(undefined2 *)((int)puVar1 + 0x66) = 0;
    FUN_00759940(puVar1,param_1);
    return puVar1;
  }
  FUN_00759940(0,param_1);
  return (undefined4 *)0x0;
}



void FUN_00759de0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  int in_ECX;
  uint uVar4;
  ushort uVar5;
  int local_4;
  
  iVar1 = param_1;
  local_4 = in_ECX;
  FUN_0073f460(param_1);
  if ((*(uint *)(iVar1 + 0xd8) < 0xa030005) && (*(int *)(in_ECX + 0x50) != 0)) {
    uVar2 = FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
    *(undefined4 *)(in_ECX + 0x54) = uVar2;
    uVar2 = FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 0xc);
    uVar5 = 0;
    *(undefined4 *)(in_ECX + 0x58) = uVar2;
    if (*(short *)(in_ECX + 8) != 0) {
      do {
        FUN_00715000(*(int *)(in_ECX + 0x54) + (uint)uVar5 * 4,
                     *(int *)(in_ECX + 0x58) + (uint)uVar5 * 0xc);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(in_ECX + 8));
    }
    FUN_0073ef50(0);
  }
  uVar4 = (uint)*(ushort *)(in_ECX + 8);
  param_1 = FUN_00401f00(uVar4 * 0x1c);
  iVar3 = param_1;
  if (param_1 == 0) {
    iVar3 = 0;
  }
  else {
    while (uVar4 = uVar4 - 1, param_1 = iVar3, -1 < (int)uVar4) {
      FUN_0075f780();
      iVar3 = param_1;
    }
  }
  uVar5 = 0;
  *(int *)(in_ECX + 0x5c) = iVar3;
  if (*(short *)(in_ECX + 8) != 0) {
    do {
      FUN_0075f840(iVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 8));
  }
  if (*(uint *)(iVar1 + 0xd8) < 0x14000002) {
    if (*(int *)(in_ECX + 0x54) != 0) {
      _Dst = (void *)FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
      *(void **)(in_ECX + 0x60) = _Dst;
      _memset(_Dst,0,(uint)*(ushort *)(in_ECX + 8) * 4);
    }
  }
  else {
    local_4 = 1;
    (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
    if ((char)param_1 != '\0') {
      uVar2 = FUN_00401f00((uint)*(ushort *)(in_ECX + 8) * 4);
      *(undefined4 *)(in_ECX + 0x60) = uVar2;
      local_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))
                (*(int *)(iVar1 + 0x21c),uVar2,(uint)*(ushort *)(in_ECX + 8) * 4,&local_4,1);
    }
  }
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 100,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x66,2,&param_1,1);
  return;
}



void FUN_00759ff0(int param_1)

{
  int iVar1;
  int in_ECX;
  ushort uVar2;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_0073f950(param_1);
  uVar2 = 0;
  if (*(short *)(in_ECX + 8) != 0) {
    do {
      FUN_0075f910(iVar1);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 8));
  }
  param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x60) != 0);
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,&local_4,1);
  if ((char)param_1 != '\0') {
    local_4 = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),*(undefined4 *)(in_ECX + 0x60),
               (uint)*(ushort *)(in_ECX + 8) * 4,&local_4,1);
  }
  local_4 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 100,2,&local_4,1);
  local_4 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x66,2,&local_4,1);
  return;
}



void FUN_0075a0e0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0073fb80(param_1);
  param_1 = FUN_0070f910(DAT_00b41864);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pkParticleInfo",*(undefined4 *)(in_ECX + 0x5c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pfRotationSpeeds",*(undefined4 *)(in_ECX + 0x60));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("NumAddedParticles",*(undefined2 *)(in_ECX + 100));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("AddedParticlesBase",*(undefined2 *)(in_ECX + 0x66));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075a220(undefined4 param_1)

{
  FUN_00752dc0(param_1);
  FUN_00712a20();
  return;
}



void FUN_0075a250(undefined4 param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar4 = *(undefined4 **)((int)param_2 + 0x24);
  if (puVar4 != (undefined4 *)0x0) {
    iVar1 = *(int *)(in_ECX + 0x18);
    local_18 = *(undefined4 *)(iVar1 + 0x10);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    local_14 = *(undefined4 *)(iVar1 + 0xc);
    local_1c = CONCAT31(local_1c._1_3_,*(undefined1 *)(iVar1 + 0x14));
    if (*(ushort *)((int)param_2 + 0x48) != 0) {
      pfVar5 = (float *)(*(int *)((int)param_2 + 0x5c) + 0x10);
      uVar3 = (uint)*(ushort *)((int)param_2 + 0x48);
      local_20 = in_ECX;
      do {
        param_2 = pfVar5[-1] / *pfVar5;
        if (param_2 <= *(float *)(local_20 + 0x1c)) {
          param_2 = *(float *)(local_20 + 0x1c);
        }
        if (*(float *)(local_20 + 0x20) <= param_2) {
          param_2 = *(float *)(local_20 + 0x20);
        }
        local_24 = 0;
        FUN_006be040(&local_10,param_2,local_14,local_18,uVar2,&local_24,local_1c);
        *puVar4 = local_10;
        puVar4[1] = local_c;
        puVar4[2] = local_8;
        puVar4[3] = local_4;
        puVar4 = puVar4 + 4;
        pfVar5 = pfVar5 + 7;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return;
}



void FUN_0075a3f0(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar2 != param_1) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar2 + 1);
      if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x18) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  if (iVar3 != 0) {
    iVar4 = *(int *)(iVar3 + 8);
    bVar1 = *(byte *)(iVar3 + 0x14);
    puVar2 = *(undefined4 **)(iVar3 + 0xc);
    if (iVar4 != 0) {
      *(undefined4 *)(in_ECX + 0x1c) = *puVar2;
      *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)((iVar4 + -1) * (uint)bVar1 + (int)puVar2);
    }
  }
  return;
}



void FUN_0075a760(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00752c20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0075a7b0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00752bf0();
    *puVar1 = &PTR_FUN_00a8790c;
    puVar1[6] = 0;
  }
  FUN_00752c40(puVar1,param_1);
  if (*(int **)(in_ECX + 0x18) != (int *)0x0) {
    uVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x18))(param_1);
    FUN_0075fa90(uVar2);
  }
  return puVar1;
}



void FUN_0075a870(short param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  *(short *)(in_ECX + 0x18) = param_1;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  if (param_1 < 2) {
    param_1 = 1;
  }
  uVar7 = (uint)param_1;
  uVar3 = FUN_00401f00(-(uint)((int)((ulonglong)uVar7 * 0x10 >> 0x20) != 0) |
                       (uint)((ulonglong)uVar7 * 0x10));
  *(undefined4 *)(in_ECX + 0x1c) = uVar3;
  iVar4 = 0;
  if (3 < (int)uVar7) {
    iVar6 = 0;
    iVar8 = (uVar7 - 4 >> 2) + 1;
    iVar4 = iVar8 * 4;
    do {
      iVar1 = *(int *)(in_ECX + 0x1c);
      *(undefined4 *)(iVar1 + iVar6) = DAT_00b3f9a8;
      *(undefined4 *)(iVar1 + 4 + iVar6) = DAT_00b3f9ac;
      *(undefined4 *)(iVar1 + 8 + iVar6) = DAT_00b3f9b0;
      *(undefined4 *)(iVar1 + 0xc + iVar6) = 0;
      iVar1 = *(int *)(in_ECX + 0x1c);
      *(undefined4 *)(iVar1 + 0x10 + iVar6) = DAT_00b3f9a8;
      *(undefined4 *)(iVar1 + 0x14 + iVar6) = DAT_00b3f9ac;
      *(undefined4 *)(iVar1 + 0x18 + iVar6) = DAT_00b3f9b0;
      *(undefined4 *)(iVar1 + 0x1c + iVar6) = 0;
      iVar2 = *(int *)(in_ECX + 0x1c);
      iVar1 = iVar6 + 0x30;
      *(undefined4 *)(iVar2 + -0x10 + iVar1) = DAT_00b3f9a8;
      iVar2 = iVar2 + -0x10 + iVar1;
      *(undefined4 *)(iVar2 + 4) = DAT_00b3f9ac;
      *(undefined4 *)(iVar2 + 8) = DAT_00b3f9b0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar1);
      *puVar5 = DAT_00b3f9a8;
      puVar5[1] = DAT_00b3f9ac;
      iVar6 = iVar6 + 0x40;
      iVar8 = iVar8 + -1;
      puVar5[2] = DAT_00b3f9b0;
      puVar5[3] = 0;
    } while (iVar8 != 0);
  }
  if (iVar4 < (int)uVar7) {
    iVar6 = iVar4 << 4;
    iVar4 = uVar7 - iVar4;
    do {
      puVar5 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar6);
      *puVar5 = DAT_00b3f9a8;
      puVar5[1] = DAT_00b3f9ac;
      uVar3 = DAT_00b3f9b0;
      puVar5[3] = 0;
      iVar6 = iVar6 + 0x10;
      iVar4 = iVar4 + -1;
      puVar5[2] = uVar3;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_0075aa50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8796c;
  FUN_00401f20(in_ECX[7]);
  FUN_00752c20();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0075aa90(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float local_4;
  
  uVar1 = *(ushort *)(param_2 + 0x48);
  iVar2 = *(int *)(param_2 + 0x68);
  if (*(short *)(in_ECX + 0x18) == -1) {
    FUN_0075a870(*(ushort *)(param_2 + 8) / 0x14 + 1);
  }
  uVar10 = (uint)uVar1;
  iVar6 = uVar10 / 0x14 + 1;
  iVar9 = (int)*(short *)(in_ECX + 0x18);
  if (iVar6 <= *(short *)(in_ECX + 0x18)) {
    iVar9 = iVar6;
  }
  if (iVar9 < 2) {
    iVar9 = 1;
  }
  if (*(short *)(iVar2 + 0xb6) == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = **(int **)(iVar2 + 0xb0);
  }
  uVar3 = *(undefined4 *)(iVar6 + 0x20);
  uVar11 = (uint)*(ushort *)(in_ECX + 0x1a);
  uVar4 = *(undefined4 *)(iVar6 + 0x24);
  uVar5 = *(undefined4 *)(iVar6 + 0x28);
  local_4 = *(float *)(iVar6 + 0x2c);
  if (uVar11 < uVar10) {
    do {
      if (uVar11 < *(ushort *)(iVar2 + 0xb6)) {
        iVar6 = *(int *)(*(int *)(iVar2 + 0xb0) + uVar11 * 4);
      }
      else {
        iVar6 = 0;
      }
      FUN_0072a6b0(iVar6 + 0x20);
      uVar11 = uVar11 + iVar9;
    } while ((int)uVar11 < (int)uVar10);
  }
  puVar7 = (undefined4 *)((uint)*(ushort *)(in_ECX + 0x1a) * 0x10 + *(int *)(in_ECX + 0x1c));
  *puVar7 = uVar3;
  puVar7[1] = uVar4;
  puVar7[2] = uVar5;
  *(float *)((uint)*(ushort *)(in_ECX + 0x1a) * 0x10 + 0xc + *(int *)(in_ECX + 0x1c)) = local_4;
  if (iVar9 < *(short *)(in_ECX + 0x18)) {
    iVar8 = iVar9 << 4;
    iVar6 = iVar9;
    do {
      puVar7 = (undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar8);
      *puVar7 = DAT_00b3f9a8;
      puVar7[1] = DAT_00b3f9ac;
      puVar7[2] = DAT_00b3f9b0;
      *(undefined4 *)(iVar8 + 0xc + *(int *)(in_ECX + 0x1c)) = 0;
      iVar6 = iVar6 + 1;
      iVar8 = iVar8 + 0x10;
    } while (iVar6 < *(short *)(in_ECX + 0x18));
  }
  if (1 < iVar9) {
    iVar8 = 0x10;
    iVar6 = iVar9 + -1;
    do {
      if (*(float *)(*(int *)(in_ECX + 0x1c) + 0xc + iVar8) != 0.0) {
        FUN_0072a6b0(*(int *)(in_ECX + 0x1c) + iVar8);
      }
      iVar8 = iVar8 + 0x10;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_4 == 0.0) {
    local_4 = **(float **)(param_2 + 0x4c) * **(float **)(param_2 + 0x44);
  }
  *(undefined4 *)(iVar2 + 0x20) = uVar3;
  *(undefined4 *)(iVar2 + 0x24) = uVar4;
  *(undefined4 *)(iVar2 + 0x28) = uVar5;
  *(float *)(iVar2 + 0x2c) = local_4;
  *(short *)(in_ECX + 0x1a) = *(short *)(in_ECX + 0x1a) + 1;
  if (iVar9 <= (int)(uint)*(ushort *)(in_ECX + 0x1a)) {
    *(undefined2 *)(in_ECX + 0x1a) = 0;
  }
  return;
}



void FUN_0075ace0(undefined4 param_1,int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  int *piVar7;
  undefined4 *puVar8;
  int *piVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  float10 fVar19;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  piVar7 = param_2;
  uVar4 = *(ushort *)(param_2 + 0x12);
  if (uVar4 == 0) {
    param_2[3] = DAT_00b3f9a8;
    param_2[4] = DAT_00b3f9ac;
    iVar15 = DAT_00b3f9b0;
    param_2[6] = 0;
    param_2[5] = iVar15;
    *(undefined2 *)(in_ECX + 0x1a) = 0;
    return;
  }
  puVar8 = (undefined4 *)(**(code **)(*param_2 + 4))();
  while( true ) {
    if (puVar8 == (undefined4 *)0x0) {
      if (*(short *)(in_ECX + 0x18) == -1) {
        FUN_0075a870(*(ushort *)(param_2 + 2) / 0x32 + 1);
      }
      uVar10 = (uint)uVar4;
      iVar15 = uVar10 / 0x32 + 1;
      iVar18 = (int)*(short *)(in_ECX + 0x18);
      if (iVar15 <= *(short *)(in_ECX + 0x18)) {
        iVar18 = iVar15;
      }
      if (iVar18 < 2) {
        iVar18 = 1;
      }
      pfVar13 = (float *)param_2[7];
      fVar1 = *pfVar13;
      fVar2 = pfVar13[1];
      fVar3 = pfVar13[2];
      uVar11 = (uint)*(ushort *)(in_ECX + 0x1a);
      fStack_40 = fVar1;
      fStack_3c = fVar2;
      fStack_38 = fVar3;
      if (uVar11 < uVar10) {
        pfVar16 = (float *)(param_2[0x11] + uVar11 * 4);
        pfVar13 = pfVar13 + uVar11 * 3;
        uVar12 = uVar11;
        do {
          fVar6 = *(float *)((param_2[0x13] - param_2[0x11]) + (int)pfVar16) * *pfVar16;
          if (*pfVar13 - fVar6 <= fVar1) {
            fVar1 = *pfVar13 - fVar6;
          }
          if (fStack_40 <= fVar6 + *pfVar13) {
            fStack_40 = fVar6 + *pfVar13;
          }
          if (pfVar13[1] - fVar6 <= fVar2) {
            fVar2 = pfVar13[1] - fVar6;
          }
          if (fStack_3c <= pfVar13[1] + fVar6) {
            fStack_3c = pfVar13[1] + fVar6;
          }
          if (pfVar13[2] - fVar6 <= fVar3) {
            fVar3 = pfVar13[2] - fVar6;
          }
          if (fStack_38 <= fVar6 + pfVar13[2]) {
            fStack_38 = fVar6 + pfVar13[2];
          }
          uVar12 = uVar12 + iVar18;
          pfVar13 = pfVar13 + iVar18 * 3;
          pfVar16 = pfVar16 + iVar18;
        } while ((int)uVar12 < (int)uVar10);
      }
      pfVar13 = (float *)(uVar11 * 0x10 + *(int *)(in_ECX + 0x1c));
      *pfVar13 = (fStack_40 + fVar1) * 0.5;
      pfVar13[1] = (fStack_3c + fVar2) * 0.5;
      pfVar13[2] = (fStack_38 + fVar3) * 0.5;
      fVar19 = (float10)FUN_00982c30();
      *(float *)((uint)*(ushort *)(in_ECX + 0x1a) * 0x10 + 0xc + *(int *)(in_ECX + 0x1c)) =
           (float)fVar19 * 0.5;
      if (iVar18 < *(short *)(in_ECX + 0x18)) {
        iVar14 = iVar18 << 4;
        iVar15 = iVar18;
        do {
          piVar9 = (int *)(*(int *)(in_ECX + 0x1c) + iVar14);
          *piVar9 = DAT_00b3f9a8;
          piVar9[1] = DAT_00b3f9ac;
          piVar9[2] = DAT_00b3f9b0;
          *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0xc + iVar14) = 0;
          iVar15 = iVar15 + 1;
          iVar14 = iVar14 + 0x10;
        } while (iVar15 < *(short *)(in_ECX + 0x18));
      }
      piVar9 = (int *)((uint)*(ushort *)(in_ECX + 0x1a) * 0x10 + *(int *)(in_ECX + 0x1c));
      iVar15 = *piVar9;
      iVar14 = piVar9[1];
      iVar5 = piVar9[2];
      fVar1 = (float)piVar9[3];
      if (1 < iVar18) {
        param_2 = (int *)(iVar18 + -1);
        iVar17 = 0x10;
        do {
          if (*(float *)(*(int *)(in_ECX + 0x1c) + 0xc + iVar17) != 0.0) {
            FUN_0072a6b0(*(int *)(in_ECX + 0x1c) + iVar17);
          }
          iVar17 = iVar17 + 0x10;
          param_2 = (int *)((int)param_2 + -1);
        } while (param_2 != (int *)0x0);
      }
      piVar7[6] = (int)fVar1;
      piVar7[3] = iVar15;
      piVar7[4] = iVar14;
      piVar7[5] = iVar5;
      if (fVar1 == 0.0) {
        piVar7[6] = (int)(*(float *)piVar7[0x11] * *(float *)piVar7[0x13]);
      }
      *(short *)(in_ECX + 0x1a) = *(short *)(in_ECX + 0x1a) + 1;
      if (iVar18 <= (int)(uint)*(ushort *)(in_ECX + 0x1a)) {
        *(undefined2 *)(in_ECX + 0x1a) = 0;
      }
      return;
    }
    if (puVar8 == &DAT_00b41c4c) break;
    puVar8 = (undefined4 *)puVar8[1];
  }
  FUN_0075aa90(param_1,param_2);
  return;
}



void FUN_0075b7e0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00752d80(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  cVar2 = FUN_0055e000(*(undefined4 *)(in_ECX + 0x18),&param_1);
  if (cVar2 != '\0') {
    *(int *)(iVar1 + 0x18) = param_1;
    return;
  }
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  return;
}



void FUN_0075b970(int *param_1)

{
  int in_ECX;
  
  FUN_00752e40(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  FUN_007094a0(param_1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x28,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x2c,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x30,4,&stack0x00000000,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x34,4,&stack0x00000000,1);
  return;
}



void FUN_0075bea0(int param_1)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  FUN_00752d80(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    cVar2 = FUN_0055e000(*(int *)(in_ECX + 0x1c),&param_1);
    if (cVar2 != '\0') {
      *(int *)(iVar1 + 0x1c) = param_1;
      return;
    }
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  }
  return;
}



void FUN_0075c170(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41ac4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075c1c0(float *param_1)

{
  float *pfVar1;
  int in_ECX;
  
  *(float *)(in_ECX + 0x40) = *param_1;
  *(float *)(in_ECX + 0x44) = param_1[1];
  *(float *)(in_ECX + 0x48) = param_1[2];
  pfVar1 = (float *)(in_ECX + 0x4c);
  *pfVar1 = *param_1;
  *(float *)(in_ECX + 0x50) = param_1[1];
  *(float *)(in_ECX + 0x54) = param_1[2];
  FUN_0043f350();
  if (((DAT_00b3f9a8 == *pfVar1) && (DAT_00b3f9ac == *(float *)(in_ECX + 0x50))) &&
     (DAT_00b3f9b0 == *(float *)(in_ECX + 0x54))) {
    *pfVar1 = DAT_00b258d0;
    *(undefined4 *)(in_ECX + 0x50) = DAT_00b258d4;
    *(undefined4 *)(in_ECX + 0x54) = DAT_00b258d8;
  }
  return;
}



void FUN_0075c250(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_0075e800();
  *in_ECX = &PTR_FUN_00a87be4;
  local_c = -DAT_00b258d0;
  local_8 = -DAT_00b258d4;
  local_4 = -DAT_00b258d8;
  FUN_0075c1c0(&local_c);
  in_ECX[0xc] = DAT_00b28b54;
  in_ECX[0xd] = DAT_00b28b58;
  uVar1 = DAT_00b28b5c;
  in_ECX[0xf] = 0x7f7fffff;
  in_ECX[0xe] = uVar1;
  return;
}



void FUN_0075c2f0(float param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined4 *puVar8;
  ushort uVar9;
  undefined4 *puVar10;
  float local_118;
  undefined1 local_100 [24];
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_d0 [36];
  float local_ac;
  float local_a8;
  float local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  if (*(float *)(in_ECX + 0x1c) != 0.0) {
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar10 = local_9c;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar10 = local_68;
    for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00718a80(local_34);
    FUN_0053d7a0(local_d0,local_9c);
    *(float *)(in_ECX + 0x3c) = param_1;
    *(float *)(in_ECX + 0x30) = local_ac;
    *(float *)(in_ECX + 0x34) = local_a8;
    local_e8 = local_ac;
    local_e4 = local_a8;
    local_e0 = local_a4;
    *(float *)(in_ECX + 0x38) = local_a4;
    if (*(char *)(in_ECX + 0x60) == '\0') {
      local_118 = *(float *)(in_ECX + 0x4c);
      fVar6 = *(float *)(in_ECX + 0x50);
      fVar7 = *(float *)(in_ECX + 0x54);
    }
    else {
      pfVar4 = (float *)FUN_007101f0(local_100,in_ECX + 0x4c);
      local_118 = *pfVar4;
      fVar6 = pfVar4[1];
      fVar7 = pfVar4[2];
    }
    fVar2 = *(float *)(in_ECX + 0x1c);
    uVar9 = 0;
    local_118 = fVar2 * local_118;
    fVar6 = fVar6 * fVar2;
    fVar2 = fVar2 * fVar7;
    if (*(short *)(param_2 + 0x48) != 0) {
      do {
        pfVar4 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar9 * 0x1c);
        fVar7 = param_1 - pfVar4[5];
        if (((fVar7 != 0.0) &&
            (pfVar1 = (float *)(*(int *)(param_2 + 0x1c) + (uint)uVar9 * 0xc),
            (pfVar1[2] - local_e0) * (pfVar1[2] - local_e0) +
            (*pfVar1 - local_e8) * (*pfVar1 - local_e8) +
            (pfVar1[1] - local_e4) * (pfVar1[1] - local_e4) <= *(float *)(in_ECX + 0x2c))) &&
           ((pfVar4[2] - fVar2) * fVar2 +
            (*pfVar4 - local_118) * local_118 + (pfVar4[1] - fVar6) * fVar6 < 0.0)) {
          fVar3 = *(float *)(in_ECX + 0x58);
          *pfVar4 = *pfVar4 + fVar3 * local_118 * fVar7;
          pfVar4[1] = pfVar4[1] + fVar3 * fVar6 * fVar7;
          pfVar4[2] = fVar7 * fVar3 * fVar2 + pfVar4[2];
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(param_2 + 0x48));
    }
  }
  return;
}



void FUN_0075c590(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  float fVar5;
  ushort uVar6;
  float fVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float local_f4;
  undefined1 local_dc [12];
  undefined1 local_d0 [36];
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_9c [13];
  undefined4 local_68 [13];
  undefined1 local_34 [52];
  
  if (*(float *)(in_ECX + 0x1c) != 0.0) {
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x18) + 100);
    puVar9 = local_68;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    puVar8 = (undefined4 *)(*(int *)(in_ECX + 0x10) + 100);
    puVar9 = local_9c;
    for (iVar4 = 0xd; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    FUN_00718a80(local_34);
    FUN_0053d7a0(local_d0,local_68);
    *(float *)(in_ECX + 0x3c) = param_1;
    *(undefined4 *)(in_ECX + 0x30) = local_ac;
    *(undefined4 *)(in_ECX + 0x34) = local_a8;
    *(undefined4 *)(in_ECX + 0x38) = local_a4;
    if (*(char *)(in_ECX + 0x60) == '\0') {
      local_f4 = *(float *)(in_ECX + 0x4c);
      fVar5 = *(float *)(in_ECX + 0x50);
      fVar7 = *(float *)(in_ECX + 0x54);
    }
    else {
      pfVar3 = (float *)FUN_007101f0(local_dc,in_ECX + 0x4c);
      local_f4 = *pfVar3;
      fVar5 = pfVar3[1];
      fVar7 = pfVar3[2];
    }
    fVar1 = *(float *)(in_ECX + 0x1c);
    uVar6 = 0;
    local_f4 = fVar1 * local_f4;
    fVar5 = fVar5 * fVar1;
    fVar1 = fVar1 * fVar7;
    if (*(short *)(param_2 + 0x48) != 0) {
      do {
        pfVar3 = (float *)(*(int *)(param_2 + 0x5c) + (uint)uVar6 * 0x1c);
        fVar7 = param_1 - pfVar3[5];
        if ((fVar7 != 0.0) &&
           ((pfVar3[2] - fVar1) * fVar1 +
            (*pfVar3 - local_f4) * local_f4 + (pfVar3[1] - fVar5) * fVar5 < 0.0)) {
          fVar2 = *(float *)(in_ECX + 0x58);
          *pfVar3 = *pfVar3 + fVar2 * local_f4 * fVar7;
          pfVar3[1] = fVar2 * fVar5 * fVar7 + pfVar3[1];
          pfVar3[2] = pfVar3[2] + fVar7 * fVar2 * fVar1;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_2 + 0x48));
    }
  }
  return;
}



void FUN_0075d390(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41b78);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075d530(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075f730(param_1);
  param_1 = FUN_0070f910(DAT_00b41bf8);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a87e24;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_0075d5c0(void)

{
  int *piVar1;
  short sVar2;
  undefined4 *puVar3;
  ushort uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  
  sVar2 = *(short *)((int)in_ECX + 0x7e);
  *in_ECX = &PTR_FUN_00a87e2c;
  while (sVar2 != 0) {
    if (*(short *)((int)in_ECX + 0x7e) != 0) {
      uVar4 = *(short *)((int)in_ECX + 0x7e) - 1;
      *(ushort *)((int)in_ECX + 0x7e) = uVar4;
      piVar1 = (int *)(in_ECX[0x1e] + (uint)uVar4 * 4);
      puVar3 = (undefined4 *)*piVar1;
      *piVar1 = 0;
      if ((puVar3 != (undefined4 *)0x0) &&
         (*(short *)(in_ECX + 0x20) = *(short *)(in_ECX + 0x20) + -1, puVar3 != (undefined4 *)0x0))
      {
        (**(code **)*puVar3)(1);
      }
    }
    sVar2 = *(short *)((int)in_ECX + 0x7e);
  }
  in_ECX[0x1d] = &PTR__scalar_deleting_destructor__00a87e24;
  FUN_00401f20(in_ECX[0x1e]);
  puVar3 = (undefined4 *)in_ECX[0x1a];
  if (((puVar3 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar3 + 1), LVar5 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  FUN_00759830();
  return;
}



void FUN_0075d740(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_00759940(param_1,param_2);
  puVar2 = (undefined4 *)(**(code **)(**(int **)(in_ECX + 0x68) + 0x18))(param_2);
  puVar1 = *(undefined4 **)(param_1 + 0x68);
  if (puVar1 == puVar2) {
    *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(in_ECX + 0x6c);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *(undefined4 **)(param_1 + 0x68) = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
    *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(in_ECX + 0x6c);
    return;
  }
  *(undefined1 *)(param_1 + 0x6c) = *(undefined1 *)(in_ECX + 0x6c);
  return;
}



void FUN_0075d910(uint param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  LONG *lpAddend;
  
  if (param_1 < *(ushort *)(in_ECX + 0x7e)) {
    if (*(int *)(*(int *)(in_ECX + 0x78) + param_1 * 4) == 0) {
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      lpAddend = param_2 + 1;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + param_1 * 4);
      if (*(ushort *)(iVar1 + 10) < *(ushort *)(iVar1 + 8)) {
        FUN_006feb00(&param_2);
      }
      if (param_2 == (undefined4 *)0x0) {
        return;
      }
      lpAddend = param_2 + 1;
    }
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
    lpAddend = param_2 + 1;
  }
  puVar2 = param_2;
  LVar3 = InterlockedDecrement(lpAddend);
  if (LVar3 == 0) {
    (**(code **)*puVar2)(1);
  }
  return;
}



void FUN_0075d990(byte param_1)

{
  FUN_0075d5c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0075d9b0(uint param_1)

{
  undefined4 *puVar1;
  short sVar2;
  undefined4 uVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 unaff_EDI;
  uint uVar5;
  undefined4 *puVar6;
  undefined2 local_c [4];
  undefined4 *local_4;
  
  uVar5 = param_1 & 0xffff;
  sVar2 = *(short *)(in_ECX + 0x48) + -1;
  local_4 = (undefined4 *)(uint)*(ushort *)(*(int *)(in_ECX + 0x5c) + 0x18 + uVar5 * 0x1c);
  FUN_00759860(param_1);
  if ((short)param_1 == sVar2) {
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x8c))(local_c,sVar2);
    FUN_0055e2a0(uVar3);
    if (unaff_EBP != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_EBP + 1);
      if ((LVar4 == 0) && (unaff_EBP != (undefined4 *)0x0)) {
        (**(code **)*unaff_EBP)(1);
      }
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x68) + 0x8c))(local_c,sVar2);
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x68) + 0x8c))(&stack0xfffffff0,uVar5);
    FUN_0055e2a0(uVar3);
    if (unaff_ESI != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_ESI + 1);
      if ((LVar4 == 0) && (unaff_ESI != (undefined4 *)0x0)) {
        (**(code **)*unaff_ESI)(1);
      }
    }
    (**(code **)(**(int **)(in_ECX + 0x68) + 0x90))(&stack0xffffffe8,uVar5,unaff_EDI);
    if (unaff_EBX != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_EBX + 1);
      if ((LVar4 == 0) && (unaff_EBX != (undefined4 *)0x0)) {
        (**(code **)*unaff_EBX)(1);
      }
    }
    if (unaff_EBP != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(unaff_EBP + 1);
      if ((LVar4 == 0) && (unaff_EBP != (undefined4 *)0x0)) {
        (**(code **)*unaff_EBP)(1);
      }
    }
  }
  puVar1 = local_4;
  puVar6 = local_4;
  if (local_4 != (undefined4 *)0x0) {
    InterlockedIncrement(local_4 + 1);
  }
  FUN_0075d910(local_c[0],puVar6);
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_0075db40(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  ushort uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  undefined4 *local_4;
  
  uVar4 = (uint)*(ushort *)((int)in_ECX + 0x7e);
  if (param_1 < uVar4) {
    if (param_1 < uVar4) {
      do {
        if (*(short *)((int)in_ECX + 0x7e) != 0) {
          uVar3 = *(short *)((int)in_ECX + 0x7e) - 1;
          *(ushort *)((int)in_ECX + 0x7e) = uVar3;
          piVar1 = (int *)(in_ECX[0x1e] + (uint)uVar3 * 4);
          puVar2 = (undefined4 *)*piVar1;
          *piVar1 = 0;
          if ((puVar2 != (undefined4 *)0x0) &&
             (*(short *)(in_ECX + 0x20) = *(short *)(in_ECX + 0x20) + -1,
             puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
        }
      } while (param_1 < *(ushort *)((int)in_ECX + 0x7e));
      return;
    }
  }
  else if (uVar4 < param_1) {
    local_4 = in_ECX;
    FUN_004e4a10(param_1);
    for (; uVar4 < param_1; uVar4 = uVar4 + 1) {
      local_4 = (undefined4 *)FUN_00401f00(0x10);
      if (local_4 == (undefined4 *)0x0) {
        local_4 = (undefined4 *)0x0;
      }
      else {
        *local_4 = &PTR_FUN_00a43850;
        *(undefined2 *)(local_4 + 2) = 0;
        *(undefined2 *)((int)local_4 + 0xe) = 1;
        *(undefined2 *)((int)local_4 + 10) = 0;
        *(undefined2 *)(local_4 + 3) = 0;
        local_4[1] = 0;
      }
      FUN_00523b10(in_ECX[0x1c]);
      FUN_0042bb90(uVar4,&local_4);
    }
  }
  return;
}



undefined4 * FUN_0075dc20(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x84);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_007597f0();
    *puVar1 = &PTR_FUN_00a87e2c;
    puVar1[0x1a] = 0;
    puVar1[0x1d] = &PTR__scalar_deleting_destructor__00a87e24;
    *(undefined2 *)(puVar1 + 0x1f) = 0;
    *(undefined2 *)((int)puVar1 + 0x82) = 1;
    *(undefined2 *)((int)puVar1 + 0x7e) = 0;
    *(undefined2 *)(puVar1 + 0x20) = 0;
    puVar1[0x1e] = 0;
    FUN_0075d740(puVar1,param_1);
    return puVar1;
  }
  FUN_0075d740(0,param_1);
  return (undefined4 *)0x0;
}



void FUN_0075dca0(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uStack_c;
  int iStack_8;
  undefined4 *local_4;
  
  iVar1 = param_1;
  FUN_00759de0(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa010001) {
    *(uint *)(in_ECX + 0x70) = (uint)*(ushort *)(in_ECX + 8);
    FUN_0075db40(1);
    FUN_00712a20();
    return;
  }
  local_4 = (undefined4 *)0x4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x70,4,&local_4,1);
  local_4 = (undefined4 *)0x1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0x6c) = (char)param_1 != '\0';
  local_4 = (undefined4 *)&DAT_00000004;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&uStack_c,4,&local_4,1);
  FUN_004e4a10(uStack_c);
  uVar2 = 0;
  if (uStack_c != 0) {
    do {
      local_4 = (undefined4 *)&DAT_00000004;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&iStack_8,4,&local_4,1);
      if (iStack_8 != 0) {
        local_4 = (undefined4 *)FUN_00401f00(0x10);
        if (local_4 == (undefined4 *)0x0) {
          local_4 = (undefined4 *)0x0;
        }
        else {
          *local_4 = &PTR_FUN_00a43850;
          *(undefined2 *)(local_4 + 2) = 0;
          *(undefined2 *)((int)local_4 + 0xe) = 1;
          *(undefined2 *)((int)local_4 + 10) = 0;
          *(undefined2 *)(local_4 + 3) = 0;
          local_4[1] = 0;
        }
        FUN_00523b10(iStack_8);
        FUN_0042bb90(uVar2,&local_4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uStack_c);
  }
  FUN_00712a20();
  return;
}



void FUN_0075de00(int *param_1)

{
  int *piVar1;
  int in_ECX;
  uint *puVar2;
  uint uVar3;
  uint auStack_8 [2];
  
  piVar1 = param_1;
  FUN_00759ff0(param_1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 0x70,4,&param_1,1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x6c));
  auStack_8[0] = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&param_1,1,auStack_8,1);
  auStack_8[0] = (uint)*(ushort *)(in_ECX + 0x7e);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],auStack_8,4,&param_1,1);
  uVar3 = 0;
  if (*(short *)(in_ECX + 0x7e) != 0) {
    do {
      param_1 = (int *)0x4;
      if (*(int *)(*(int *)(in_ECX + 0x78) + uVar3 * 4) == 0) {
        auStack_8[1] = 0;
        puVar2 = auStack_8 + 1;
      }
      else {
        auStack_8[0] = (uint)*(ushort *)(*(int *)(*(int *)(in_ECX + 0x78) + uVar3 * 4) + 8);
        puVar2 = auStack_8;
      }
      (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],puVar2,4,&param_1,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0x7e));
  }
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x68));
  return;
}



void FUN_0075df00(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075a0e0(param_1);
  param_1 = FUN_0070f910(DAT_00b41c4c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075df50(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a87e94;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  return;
}



void FUN_0075df80(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a87e94;
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a680dc;
  FUN_0055ace0();
  return;
}



void FUN_0075dff0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = param_2;
  return;
}



void FUN_0075e040(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  if (((int *)in_ECX[3] != (int *)0x0) && (DAT_00b3f944 == '\0')) {
    (**(code **)(*(int *)in_ECX[3] + 0x9c))(in_ECX[4]);
    puVar1 = (undefined4 *)in_ECX[3];
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      in_ECX[3] = 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0075e098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x54))();
  return;
}



void FUN_0075e0a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[5];
  in_ECX[2] = 0;
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      if (puVar2[-1] == 0) {
        FUN_00401f20(puVar2 + -1);
      }
      else {
        (**(code **)*puVar2)(3);
      }
    }
    if (piVar1[2] != 0) {
      FUN_0056b680(1);
    }
    FUN_00401f20(piVar1);
  }
  FUN_00401f20(*in_ECX);
  return;
}



void FUN_0075e100(uint param_1)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar2 = -(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0x14);
    puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar3 = puVar1 + 1;
      *puVar1 = param_1;
      _vector_constructor_iterator_(puVar3,0x14,param_1,FUN_0075df50);
    }
  }
  *in_ECX = puVar3;
  return;
}



void FUN_0075e240(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int *local_4;
  
  iVar1 = FUN_00401f00(0xc);
  iVar4 = 0;
  if (iVar1 == 0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = (int *)FUN_0075e100(param_1);
  }
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      if (uVar3 < (uint)local_4[1]) {
        iVar1 = *local_4 + iVar4;
      }
      else {
        iVar1 = 0;
      }
      iVar2 = in_ECX[1];
      if (in_ECX[2] == iVar2) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = iVar2 * 2;
        }
        FUN_006e8ca0(iVar2);
      }
      *(int *)(*in_ECX + in_ECX[2] * 4) = iVar1;
      in_ECX[2] = in_ECX[2] + 1;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0075e2e0(void)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b41d80);
  _DAT_00b41df8 = GetCurrentThreadId();
  _DAT_00b41dfc = _DAT_00b41dfc + 1;
  if (DAT_00b28c64 == 0) {
    FUN_0075e240(DAT_00b28c68);
    DAT_00b28c68 = DAT_00b28c68 * 2;
  }
  DAT_00b28c64 = DAT_00b28c64 + -1;
  uVar1 = *DAT_00b28c5c;
  *DAT_00b28c5c = DAT_00b28c5c[DAT_00b28c64];
  _DAT_00b41dfc = _DAT_00b41dfc + -1;
  if (_DAT_00b41dfc == 0) {
    _DAT_00b41df8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b41d80);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075e370(undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b41d80);
  _DAT_00b41df8 = GetCurrentThreadId();
  _DAT_00b41dfc = _DAT_00b41dfc + 1;
  FUN_0073a5e0(&param_1);
  _DAT_00b41dfc = _DAT_00b41dfc + -1;
  if (_DAT_00b41dfc == 0) {
    _DAT_00b41df8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b41d80);
  return;
}



undefined4 FUN_0075e3d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_0075e370();
  return 1;
}



void FUN_0075e410(int param_1,undefined4 param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_006ce2c0(param_1,param_2);
  _Src = *(char **)(in_ECX + 0x40);
  FUN_00401f20(*(undefined4 *)(param_1 + 0x40));
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(_Src + 1)));
  *(char **)(param_1 + 0x40) = _Dst;
  _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(_Src + 1))),_Src);
  return;
}



void FUN_0075e460(undefined4 param_1)

{
  int in_ECX;
  
  FUN_006ce320(param_1);
  FUN_00713620(in_ECX + 0x40);
  return;
}



void thunk_FUN_00715e70(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  int *in_ECX;
  
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0xd] = (int)puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar5 = FUN_007124a0();
  in_ECX[0xc] = iVar5;
  if (*(uint *)(param_1 + 0xd8) < 0xa000110) {
    cVar2 = (**(code **)(*in_ECX + 0x60))();
    if ((cVar2 != '\0') && (in_ECX[0xc] != 0)) {
      iVar5 = *(int *)(in_ECX[0xc] + 0xb4);
      *(ushort *)(iVar5 + 0x2e) = *(ushort *)(iVar5 + 0x2e) & 0xfff | 0x8000;
    }
  }
  return;
}



uint FUN_0075e490(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int in_ECX;
  byte *pbVar4;
  bool bVar5;
  
  pbVar2 = (byte *)FUN_006ce3a0(param_1);
  if ((char)pbVar2 == '\0') goto LAB_0075e4a2;
  pbVar2 = *(byte **)(in_ECX + 0x44);
  if (pbVar2 == (byte *)0x0) {
LAB_0075e4ba:
    if (*(int *)(param_1 + 0x44) != 0) goto LAB_0075e4a2;
    if (pbVar2 != (byte *)0x0) goto LAB_0075e4c4;
  }
  else {
    if (*(int *)(param_1 + 0x44) == 0) goto LAB_0075e4a2;
    if (pbVar2 == (byte *)0x0) goto LAB_0075e4ba;
LAB_0075e4c4:
    if ((*(int *)(param_1 + 0x44) != 0) &&
       (pbVar2 = (byte *)(**(code **)(**(int **)(in_ECX + 0x44) + 0x2c))(*(int *)(param_1 + 0x44)),
       (char)pbVar2 == '\0')) goto LAB_0075e4a2;
  }
  pbVar2 = *(byte **)(in_ECX + 0x40);
  pbVar3 = pbVar2;
  if (pbVar2 == (byte *)0x0) {
LAB_0075e4eb:
    if (*(int *)(param_1 + 0x40) != 0) goto LAB_0075e4a2;
    if (pbVar2 == (byte *)0x0) goto LAB_0075e52d;
  }
  else {
    if (*(int *)(param_1 + 0x40) == 0) goto LAB_0075e4a2;
    if (pbVar2 == (byte *)0x0) goto LAB_0075e4eb;
  }
  pbVar4 = *(byte **)(param_1 + 0x40);
  if (pbVar4 != (byte *)0x0) {
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_0075e520:
        pbVar2 = (byte *)((1 - (uint)bVar5) - (uint)(bVar5 != 0));
        goto LAB_0075e525;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_0075e520;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    pbVar2 = (byte *)0x0;
LAB_0075e525:
    pbVar3 = (byte *)0x0;
    if (pbVar2 != (byte *)0x0) {
LAB_0075e4a2:
      return (uint)pbVar2 & 0xffffff00;
    }
  }
LAB_0075e52d:
  return CONCAT31((int3)((uint)pbVar3 >> 8),1);
}



void FUN_0075e540(void)

{
  undefined4 *in_ECX;
  
  FUN_006ce1d0();
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  *in_ECX = &PTR_FUN_00a87f04;
  return;
}



void FUN_0075e570(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a87f04;
  FUN_00401f20(in_ECX[0x10]);
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00715a70();
  return;
}



undefined4 FUN_0075e600(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00b40864) {
        if (*(int *)(in_ECX + 0x40) == 0) {
          return 0;
        }
        if (*(int *)(in_ECX + 0x30) == 0) {
          return 0;
        }
        cVar1 = FUN_0055e000(*(int *)(in_ECX + 0x40),&param_1);
        if (cVar1 == '\0') {
          return 0;
        }
        if (param_1 == (int *)0x0) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0075e670(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_006ce2f0(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar1 = param_1;
  if ((*(int *)(in_ECX + 0x30) != 0) && (*(int *)(param_1 + 0x30) != 0)) {
    FUN_0055e000(*(undefined4 *)(in_ECX + 0x44),&param_1);
    *(int *)(iVar1 + 0x44) = param_1;
  }
  return;
}



void FUN_0075e700(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a87f04;
  FUN_00401f20(in_ECX[0x10]);
  puVar1 = (undefined4 *)in_ECX[0xf];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00715a70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0075e760(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_006ce3f0(param_1);
  param_1 = FUN_0070f910(DAT_00b41e14);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fc30("Modifier Name",*(undefined4 *)(in_ECX + 0x40));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075e800(void)

{
  undefined4 *in_ECX;
  
  FUN_00752bf0();
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[6] = 0;
  in_ECX[10] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  in_ECX[0xb] = 0;
  *in_ECX = &PTR_FUN_00a87fdc;
  return;
}



void FUN_0075e830(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00752c40(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(in_ECX + 0x24);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(in_ECX + 0x2c);
  return;
}



void FUN_0075e870(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00752cb0(param_1);
  uVar1 = FUN_007124a0();
  *(undefined4 *)(in_ECX + 0x18) = uVar1;
  return;
}



uint FUN_0075e890(int param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  undefined2 uVar4;
  int in_ECX;
  bool bVar5;
  
  uVar3 = FUN_00752cd0(param_1);
  if ((char)uVar3 == '\0') goto LAB_0075e90f;
  uVar3 = *(uint *)(in_ECX + 0x18);
  if (uVar3 == 0) {
LAB_0075e8b3:
    if (*(int *)(param_1 + 0x18) != 0) goto LAB_0075e90f;
    bVar5 = uVar3 != 0;
    uVar3 = 0;
    if (bVar5) goto LAB_0075e8bd;
  }
  else {
    if (*(int *)(param_1 + 0x18) == 0) goto LAB_0075e90f;
    if (uVar3 == 0) goto LAB_0075e8b3;
LAB_0075e8bd:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar3 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x2c))(*(int *)(param_1 + 0x18));
      if ((char)uVar3 == '\0') goto LAB_0075e90f;
    }
  }
  fVar1 = *(float *)(param_1 + 0x1c);
  fVar2 = *(float *)(in_ECX + 0x1c);
  uVar4 = (undefined2)(uVar3 >> 0x10);
  uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                         (ushort)(fVar2 == fVar1) << 0xe);
  if (fVar2 == fVar1) {
    fVar1 = *(float *)(param_1 + 0x20);
    fVar2 = *(float *)(in_ECX + 0x20);
    uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                           (ushort)(fVar2 == fVar1) << 0xe);
    if ((fVar2 == fVar1) && (*(char *)(param_1 + 0x24) == *(char *)(in_ECX + 0x24))) {
      fVar1 = *(float *)(param_1 + 0x28);
      fVar2 = *(float *)(in_ECX + 0x28);
      uVar3 = CONCAT22(uVar4,(ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10
                             | (ushort)(fVar2 == fVar1) << 0xe);
      if (fVar2 == fVar1) {
        return CONCAT31((int3)(uVar3 >> 8),1);
      }
    }
  }
LAB_0075e90f:
  return uVar3 & 0xffffff00;
}



void FUN_0075e920(int param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_4;
  
  iVar2 = param_1;
  FUN_00752dc0(param_1);
  FUN_00712a20();
  local_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1c,4,&local_4,1);
  local_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x20,4,&local_4,1);
  local_4 = 1;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0x24) = (char)param_1 != '\0';
  local_4 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))
            (*(int *)(iVar2 + 0x21c),(float *)(in_ECX + 0x28),4,&local_4,1);
  fVar1 = *(float *)(in_ECX + 0x28);
  *(float *)(in_ECX + 0x2c) = fVar1 * fVar1;
  return;
}



void FUN_0075e9e0(int *param_1)

{
  int in_ECX;
  
  FUN_00752e40(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x18));
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x1c,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x20,4,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0x00000000,1,&stack0xfffffff8,1);
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],in_ECX + 0x28,4,&stack0xfffffff8,1);
  return;
}



void FUN_0075eaa0(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_00752ec0(param_1);
  param_1 = FUN_0070f910(DAT_00b41e68);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (*(int *)(in_ECX + 0x18) == 0) {
    puVar2 = &DAT_00a308d0;
  }
  else {
    puVar2 = *(undefined **)(*(int *)(in_ECX + 0x18) + 8);
  }
  param_1 = FUN_0070fc30("Field Object",puVar2);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb90("Magnitude",*(undefined4 *)(in_ECX + 0x1c));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb90("Attenuation",*(undefined4 *)(in_ECX + 0x20));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070f950("Use Max Distance",*(undefined1 *)(in_ECX + 0x24));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb90("Max Distance",*(undefined4 *)(in_ECX + 0x28));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_0075ec40(undefined4 param_1,int *param_2,uint param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(param_2[7] + (param_3 & 0xffff) * 0xc);
  *puVar1 = *(undefined4 *)(in_ECX + 0x14);
  puVar1[1] = *(undefined4 *)(in_ECX + 0x18);
  puVar1[2] = *(undefined4 *)(in_ECX + 0x1c);
  if ((*(char *)(in_ECX + 0xc) != '\0') && (*(int *)(in_ECX + 0x10) != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0x5c))
              (param_1,*(undefined4 *)(in_ECX + 0x20),param_3,
               *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x10));
  }
  if (*(char *)(in_ECX + 0xd) != '\0') {
    (**(code **)(*param_2 + 0x58))(param_3);
  }
  return;
}



void FUN_0075ecb0(undefined4 param_1,undefined1 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = param_1;
  *(undefined1 *)(in_ECX + 3) = param_2;
  *in_ECX = &PTR_FUN_00a88094;
  *(undefined1 *)((int)in_ECX + 0xd) = param_3;
  in_ECX[4] = param_4;
  in_ECX[5] = DAT_00b3f9a8;
  in_ECX[6] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[7] = uVar1;
  in_ECX[10] = 0;
  return;
}



int FUN_0075ed20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x28) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x4c))(param_1,param_2,param_3,param_4),
     iVar1 != 0)) {
    return iVar1;
  }
  return 0;
}



void FUN_0075ed50(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00700770(param_1,param_2);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 8);
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(in_ECX + 0xc);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(in_ECX + 0xd);
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(param_2);
    FUN_0075fa90(uVar1);
  }
  return;
}



void FUN_0075eda0(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&param_1);
  iVar2 = param_1;
  if (*(int *)(in_ECX + 0x10) != 0) {
    cVar3 = FUN_0055e000(*(int *)(in_ECX + 0x10),&param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(in_ECX + 0x10);
    }
    else {
      *(int *)(iVar2 + 0x10) = param_1;
    }
  }
  if (*(int *)(in_ECX + 0x24) != 0) {
    cVar3 = FUN_0055e000(*(int *)(in_ECX + 0x24),&param_1);
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(in_ECX + 0x24);
    }
    else {
      *(int *)(iVar2 + 0x24) = param_1;
    }
  }
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x38))(iVar1);
  }
  return;
}



void FUN_0075ee30(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int in_ECX;
  
  FUN_0068f970(param_1);
  uVar2 = FUN_007124a0();
  *(undefined4 *)(in_ECX + 0x10) = uVar2;
  uVar2 = FUN_007124a0();
  *(undefined4 *)(in_ECX + 0x24) = uVar2;
  puVar3 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x28) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  return;
}



undefined1 FUN_0075eea0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x24))(param_1);
  }
  return 1;
}



undefined4 FUN_0075eed0(int param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  cVar3 = FUN_00700670(param_1);
  if (cVar3 == '\0') {
    return 0;
  }
  if (*(float *)(param_1 + 8) != *(float *)(in_ECX + 8)) {
    return 0;
  }
  if (*(char *)(in_ECX + 0xc) != *(char *)(param_1 + 0xc)) {
    return 0;
  }
  if (*(char *)(in_ECX + 0xd) != *(char *)(param_1 + 0xd)) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  if (iVar1 == 0) {
LAB_0075ef1e:
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    if (iVar1 != 0) goto LAB_0075ef28;
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
      return 0;
    }
    if (iVar1 == 0) goto LAB_0075ef1e;
LAB_0075ef28:
    if ((*(int *)(param_1 + 0x10) != 0) &&
       (cVar3 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x2c))(*(int *)(param_1 + 0x10)),
       cVar3 == '\0')) {
      return 0;
    }
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
LAB_0075ef4f:
    if (*(int *)(param_1 + 0x24) != 0) {
      return 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0;
    }
    if (*(int *)(in_ECX + 0x24) == 0) goto LAB_0075ef4f;
  }
  piVar2 = *(int **)(in_ECX + 0x28);
  if (piVar2 != (int *)0x0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return 0;
    }
    if (piVar2 != (int *)0x0) goto LAB_0075ef70;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    return 0;
  }
  if (piVar2 == (int *)0x0) {
    return 1;
  }
LAB_0075ef70:
  if ((*(int *)(param_1 + 0x28) != 0) &&
     (cVar3 = (**(code **)(*piVar2 + 0x2c))(*(int *)(param_1 + 0x28)), cVar3 == '\0')) {
    return 0;
  }
  return 1;
}



void FUN_0075efa0(int param_1)

{
  int iVar1;
  int in_ECX;
  char cStack_5;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_007008a0(param_1);
  local_4 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 8,4,&local_4,1);
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&param_1,1,&local_4,1);
  *(bool *)(in_ECX + 0xc) = (char)param_1 != '\0';
  local_4 = 1;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),&cStack_5,1,&local_4,1);
  *(bool *)(in_ECX + 0xd) = cStack_5 != '\0';
  FUN_00712a20();
  FUN_00712a20();
  FUN_00712a20();
  return;
}



void FUN_0075f050(int *param_1)

{
  int *piVar1;
  int in_ECX;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  FUN_0068f970(param_1);
  param_1 = (int *)0x4;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],in_ECX + 8,4,&param_1,1);
  uStack_4 = 1;
  param_1._0_1_ = *(undefined1 *)(in_ECX + 0xc);
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&param_1,1,&uStack_4,1);
  param_1 = (int *)CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0xd));
  uStack_4 = 1;
  (**(code **)(piVar1[0x88] + 8))(piVar1[0x88],&param_1,1,&uStack_4,1);
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x10));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x24));
  (**(code **)(*piVar1 + 0x2c))(*(undefined4 *)(in_ECX + 0x28));
  return;
}



void FUN_0075f110(int param_1)

{
  int iVar1;
  undefined *puVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b41ecc);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fb90("Bounce",*(undefined4 *)(in_ECX + 8));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070f950("Spawn on Collide",*(undefined1 *)(in_ECX + 0xc));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070f950("Die on Collide",*(undefined1 *)(in_ECX + 0xd));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (*(int *)(in_ECX + 0x10) == 0) {
    puVar2 = &DAT_00a308d0;
  }
  else {
    puVar2 = *(undefined **)(*(int *)(in_ECX + 0x10) + 8);
  }
  param_1 = FUN_0070fc30("Spawn Modifier",puVar2);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070fbe0("Manager",*(undefined4 *)(in_ECX + 0x24));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x30))(iVar1);
  }
  return;
}



void FUN_0075f2c0(void)

{
  undefined4 *in_ECX;
  
  FUN_0075e540();
  *in_ECX = &PTR_FUN_00a88134;
  return;
}



void thunk_FUN_0075e490(void)

{
  FUN_0075e490();
  return;
}



void FUN_0075f370(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3e7e8)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  (**(code **)(*in_ECX + 0xac))(&param_1);
  FUN_006e80f0(unaff_retaddr);
  return;
}



void FUN_0075f3d0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  if ((*(byte *)(in_ECX + 2) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if ((int *)in_ECX[0xf] == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*(int *)in_ECX[0xf] + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    in_ECX[10] = -0x800001;
  }
  if ((int *)in_ECX[0xf] != (int *)0x0) {
    puVar2 = &param_1;
    cVar1 = (**(code **)(*(int *)in_ECX[0xf] + 0x60))(in_ECX[10],in_ECX[0xc],puVar2);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0xb0))(puVar2);
    }
  }
  return;
}



void FUN_0075f450(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar1 = FUN_007124a0();
    iVar2 = FUN_00401f00(0x20);
    if (iVar2 != 0) {
      uVar1 = FUN_006e7db0(uVar1);
      FUN_0075fa90(uVar1);
      return;
    }
    FUN_0075fa90(0);
  }
  return;
}



void FUN_0075f4b0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075e760(param_1);
  param_1 = FUN_0070f910(DAT_00b41f2c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075f510(void)

{
  undefined4 *in_ECX;
  
  FUN_0075e540();
  *in_ECX = &PTR_FUN_00a88204;
  return;
}



void thunk_FUN_0075e410(int param_1,undefined4 param_2)

{
  char cVar1;
  char *_Src;
  char *pcVar2;
  char *_Dst;
  int in_ECX;
  
  FUN_006ce2c0(param_1,param_2);
  _Src = *(char **)(in_ECX + 0x40);
  FUN_00401f20(*(undefined4 *)(param_1 + 0x40));
  pcVar2 = _Src;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  _Dst = (char *)FUN_00401f00(pcVar2 + (1 - (int)(_Src + 1)));
  *(char **)(param_1 + 0x40) = _Dst;
  _strcpy_s(_Dst,(rsize_t)(pcVar2 + (1 - (int)(_Src + 1))),_Src);
  return;
}



void FUN_0075f5b0(int param_1)

{
  FUN_0075e460(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    FUN_00712a20();
  }
  return;
}



void FUN_0075f5e0(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))();
        (puVar1 != (undefined4 *)0x0 && (puVar1 != &DAT_00b3cfbc)); puVar1 = (undefined4 *)puVar1[1]
        ) {
    }
  }
  (**(code **)(*in_ECX + 0xac))(&param_1);
  FUN_006d2b70(unaff_retaddr);
  return;
}



void FUN_0075f650(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  if ((*(byte *)(in_ECX + 2) >> 5 & 1) == 0) {
    cVar1 = FUN_006c36b0(param_1);
    if (cVar1 != '\0') {
      if ((int *)in_ECX[0xf] == (int *)0x0) {
        return;
      }
      cVar1 = (**(code **)(*(int *)in_ECX[0xf] + 0x94))();
      if (cVar1 == '\0') {
        return;
      }
    }
  }
  else {
    in_ECX[10] = -0x800001;
  }
  if ((int *)in_ECX[0xf] != (int *)0x0) {
    puVar2 = &param_1;
    cVar1 = (**(code **)(*(int *)in_ECX[0xf] + 0x5c))(in_ECX[10],in_ECX[0xc],puVar2);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0xb0))(puVar2);
    }
  }
  return;
}



void FUN_0075f6d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_00715e70(param_1);
  if (*(uint *)(param_1 + 0xd8) < 0xa010068) {
    uVar1 = FUN_007124a0();
    iVar2 = FUN_00401f00(0x18);
    if (iVar2 != 0) {
      uVar1 = FUN_006d2990(uVar1);
      FUN_0075fa90(uVar1);
      return;
    }
    FUN_0075fa90(0);
  }
  return;
}



void FUN_0075f730(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0075e760(param_1);
  param_1 = FUN_0070f910(DAT_00b41f8c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0075f780(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = DAT_00b3f9a8;
  in_ECX[1] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[3] = 0;
  in_ECX[2] = uVar1;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0;
  return;
}



ushort FUN_0075f7c0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  ushort uVar3;
  
  fVar1 = *in_ECX;
  fVar2 = *param_1;
  uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
          (ushort)(fVar2 == fVar1) << 0xe;
  if (fVar2 == fVar1) {
    fVar1 = in_ECX[1];
    fVar2 = param_1[1];
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 == fVar1) {
      fVar1 = in_ECX[2];
      fVar2 = param_1[2];
      uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
              (ushort)(fVar2 == fVar1) << 0xe;
      if (fVar2 == fVar1) {
        fVar1 = in_ECX[3];
        fVar2 = param_1[3];
        uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                (ushort)(fVar2 == fVar1) << 0xe;
        if (fVar2 == fVar1) {
          fVar1 = in_ECX[4];
          fVar2 = param_1[4];
          uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                  (ushort)(fVar2 == fVar1) << 0xe;
          if (fVar2 == fVar1) {
            fVar1 = in_ECX[5];
            fVar2 = param_1[5];
            uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                    (ushort)(fVar2 == fVar1) << 0xe;
            if (((fVar2 == fVar1) &&
                (uVar3 = *(ushort *)(in_ECX + 6), uVar3 == *(ushort *)(param_1 + 6))) &&
               (*(short *)((int)in_ECX + 0x1a) == *(short *)((int)param_1 + 0x1a))) {
              return CONCAT11((char)(uVar3 >> 8),1);
            }
          }
        }
      }
    }
  }
  return uVar3 & 0xff00;
}



void FUN_0075f840(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00709430(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0xa030005) {
    FUN_00709430(iVar1);
  }
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x18,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0x1a,2,&param_1,1);
  return;
}



void FUN_0075f910(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007094a0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x14,4,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,2,&param_1,1);
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1a,2,&param_1,1);
  return;
}



undefined4 FUN_0075f9d0(void)

{
  return DAT_00b42040;
}



uint FUN_0075fa00(int param_1,int param_2)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x14);
  if (param_1 + uVar1 <= DAT_00b28cb0) {
    if ((uint)(*(int *)(in_ECX + 0x1c) + param_2) <= DAT_00b28cb4) {
      return CONCAT31((int3)(uVar1 + param_2 >> 8),uVar1 + param_2 <= DAT_00b28cb4);
    }
  }
  return uVar1 & 0xffffff00;
}



void FUN_0075fa40(undefined4 param_1)

{
  DAT_00b28cb0 = param_1;
  return;
}



void FUN_0075fa50(undefined4 param_1)

{
  DAT_00b28cb4 = param_1;
  return;
}



void FUN_0075fa60(undefined4 param_1)

{
  DAT_00b28cb8 = param_1;
  return;
}



void FUN_0075fa90(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *in_ECX = (int)param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_0075fae0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (iVar2 != *param_1) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar2 = *param_1;
    *in_ECX = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
    }
  }
  return;
}



int * FUN_0075fb10(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 4);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_0075fb30(int param_1)

{
  int *piVar1;
  
  DAT_00b4203c = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    if (DAT_00b42038 != (int *)0x0) {
      (**(code **)(*DAT_00b42038 + 8))(DAT_00b42038);
    }
    DAT_00b42038 = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    DAT_00b42040 = *(undefined4 *)(DAT_00b4203c + 0x8ac);
    return;
  }
  if (DAT_00b42038 != (int *)0x0) {
    (**(code **)(*DAT_00b42038 + 8))(DAT_00b42038);
  }
  DAT_00b42038 = (int *)0x0;
  DAT_00b42040 = 0;
  return;
}



undefined4
FUN_0075fba0(uint param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int unaff_ESI;
  uint uVar5;
  int iVar6;
  undefined4 unaff_retaddr;
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar6 = param_4;
  iVar2 = param_3;
  uStack_14 = 0;
  if (*(int **)(in_ECX + 0x44) == (int *)0x0) {
    uStack_18 = 0;
    uStack_1c = 0x75fc1e;
    (**(code **)(*DAT_00b42040 + 0x78))();
  }
  else {
    iVar1 = *DAT_00b42040;
    uStack_18 = 0x75fbc8;
    uStack_18 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x38))();
    uStack_1c = 0x75fbd4;
    (**(code **)(iVar1 + 0x78))();
    if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
      uStack_1c = 0;
      (**(code **)(**(int **)(in_ECX + 0x34) + 0x40))
                (*(undefined4 *)(in_ECX + 0x44),unaff_EBX,unaff_retaddr,iVar2,iVar6,param_3,param_4,
                 param_5,param_6,param_7);
    }
  }
  uStack_1c = 0;
  if (*(int **)(in_ECX + 0x58) == (int *)0x0) {
    (**(code **)(*DAT_00b42040 + 0x88))(0);
    if (iVar6 == 0) {
      if (iVar2 == 0) {
        iVar6 = *(int *)(*(int *)(unaff_ESI + 0xb4) + 0x38);
      }
      else {
        iVar6 = *(int *)(iVar2 + 0x28);
      }
    }
    if (*(int *)(iVar6 + 8) != 0) {
      (**(code **)(*DAT_00b42040 + 0x98))(*(int *)(iVar6 + 8));
      return 0;
    }
    (**(code **)(*DAT_00b42040 + 0xa8))(*(undefined4 *)(iVar6 + 0xc),0);
  }
  else {
    iVar1 = *DAT_00b42040;
    uVar4 = (**(code **)(**(int **)(in_ECX + 0x58) + 0x40))();
    (**(code **)(iVar1 + 0x88))(uVar4);
    if (*(int **)(in_ECX + 0x48) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x48) + 0x40))
                (*(undefined4 *)(in_ECX + 0x58),unaff_ESI,unaff_EBP,iVar2,iVar6,param_1,param_2,
                 param_3,param_4,param_5,0);
    }
    uVar5 = 0;
    if (DAT_00b28cb0 != 0) {
      do {
        (**(code **)(*DAT_00b42040 + 200))(uVar5,0xb,uVar5,0);
        uVar4 = 0;
        if (((uVar5 < *(uint *)(in_ECX + 0x18)) &&
            (iVar6 = *(int *)(*(int *)(in_ECX + 0x24) + uVar5 * 4), iVar6 != 0)) &&
           (*(int *)(iVar6 + 0xc) != 0)) {
          param_1 = 0;
          uStack_1c = uStack_1c & 0xffffff00;
          cVar3 = FUN_007730a0(0x18,&param_1,&uStack_1c);
          if ((cVar3 != '\0') && ((param_1 & 0x100) != 0)) {
            uVar4 = 0x100;
          }
        }
        (**(code **)(*DAT_00b42040 + 200))(uVar5,0x18,uVar4,0);
        uVar5 = uVar5 + 1;
      } while (uVar5 < DAT_00b28cb0);
      return 0;
    }
  }
  return 0;
}



void FUN_0075fe30(ushort param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a882d4;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  uVar2 = (uint)param_1;
  puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    _vector_constructor_iterator_(puVar1 + 1,4,uVar2,FUN_007c88a0);
    in_ECX[1] = puVar1 + 1;
    return;
  }
  in_ECX[1] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0075fed0(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if ((_DAT_00b4204c & 1) == 0) {
    _DAT_00b4204c = _DAT_00b4204c | 1;
    DAT_00b42048 = 0;
    _atexit(FUN_00a26d40);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b42048) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b42048) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b42048) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b42048) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  piVar2 = (int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  iVar3 = *piVar2;
  if (iVar3 != *param_2) {
    if (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 0x5c);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00772560();
      }
    }
    iVar3 = *param_2;
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
    }
  }
  return;
}



void FUN_0075ff80(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  ushort uVar4;
  
  uVar4 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      piVar2 = (int *)(*(int *)(in_ECX + 4) + (uint)uVar4 * 4);
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        piVar1 = (int *)(iVar3 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
        *piVar2 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  return;
}



void FUN_0075ffd0(void)

{
  DAT_00b42044 = (undefined4 *)FUN_00401f00(0x18);
  if (DAT_00b42044 != (undefined4 *)0x0) {
    *DAT_00b42044 = 0;
    DAT_00b42044[1] = 0;
    DAT_00b42044[2] = 0;
    DAT_00b42044[3] = 8;
    DAT_00b42044[4] = 8;
    DAT_00b42044[5] = 0;
    return;
  }
  DAT_00b42044 = (undefined4 *)0x0;
  return;
}


