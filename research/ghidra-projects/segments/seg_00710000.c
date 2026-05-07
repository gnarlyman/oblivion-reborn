
void FUN_00710030(float *param_1,float *param_2)

{
  float *in_ECX;
  int iVar1;
  float *pfVar2;
  
  pfVar2 = param_1;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar2 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar2 = pfVar2 + 1;
  }
  *param_1 = *param_1 - *param_2;
  param_1[1] = param_1[1] - param_2[1];
  param_1[2] = param_1[2] - param_2[2];
  param_1[3] = param_1[3] - param_2[3];
  param_1[4] = param_1[4] - param_2[4];
  param_1[5] = param_1[5] - param_2[5];
  param_1[6] = param_1[6] - param_2[6];
  param_1[7] = param_1[7] - param_2[7];
  param_1[8] = param_1[8] - param_2[8];
  return;
}



void FUN_007100a0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[6] * in_ECX[2] + param_2[3] * in_ECX[1] + *param_2 * *in_ECX;
  param_1[3] = param_2[6] * in_ECX[5] + in_ECX[3] * *param_2 + in_ECX[4] * param_2[3];
  param_1[6] = param_2[6] * in_ECX[8] + in_ECX[6] * *param_2 + in_ECX[7] * param_2[3];
  param_1[1] = in_ECX[2] * param_2[7] + param_2[4] * in_ECX[1] + param_2[1] * *in_ECX;
  param_1[4] = param_2[7] * in_ECX[5] + param_2[1] * in_ECX[3] + param_2[4] * in_ECX[4];
  param_1[7] = param_2[7] * in_ECX[8] + in_ECX[6] * param_2[1] + param_2[4] * in_ECX[7];
  param_1[2] = in_ECX[2] * param_2[8] + param_2[5] * in_ECX[1] + param_2[2] * *in_ECX;
  param_1[5] = param_2[8] * in_ECX[5] + param_2[2] * in_ECX[3] + param_2[5] * in_ECX[4];
  param_1[8] = param_2[8] * in_ECX[8] + in_ECX[6] * param_2[2] + param_2[5] * in_ECX[7];
  return;
}



void FUN_00710190(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = param_2 * *in_ECX;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = in_ECX[2] * param_2;
  param_1[3] = in_ECX[3] * param_2;
  param_1[4] = in_ECX[4] * param_2;
  param_1[5] = in_ECX[5] * param_2;
  param_1[6] = in_ECX[6] * param_2;
  param_1[7] = in_ECX[7] * param_2;
  param_1[8] = param_2 * in_ECX[8];
  return;
}



void FUN_007101f0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = in_ECX[2] * param_2[2] + *param_2 * *in_ECX + in_ECX[1] * param_2[1];
  param_1[1] = in_ECX[5] * param_2[2] + in_ECX[4] * param_2[1] + in_ECX[3] * *param_2;
  param_1[2] = in_ECX[8] * param_2[2] + in_ECX[7] * param_2[1] + in_ECX[6] * *param_2;
  return;
}



void FUN_00710250(float *param_1,float *param_2,float *param_3)

{
  *param_1 = param_3[6] * param_2[2] + *param_2 * *param_3 + param_3[3] * param_2[1];
  param_1[1] = param_3[7] * param_2[2] + param_3[4] * param_2[1] + param_3[1] * *param_2;
  param_1[2] = param_3[8] * param_2[2] + param_3[5] * param_2[1] + param_3[2] * *param_2;
  return;
}



uint FUN_007102b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  float *in_ECX;
  int iVar5;
  
  *param_1 = in_ECX[8] * in_ECX[4] - in_ECX[7] * in_ECX[5];
  param_1[1] = in_ECX[7] * in_ECX[2] - in_ECX[1] * in_ECX[8];
  param_1[2] = in_ECX[1] * in_ECX[5] - in_ECX[2] * in_ECX[4];
  param_1[3] = in_ECX[6] * in_ECX[5] - in_ECX[3] * in_ECX[8];
  param_1[4] = *in_ECX * in_ECX[8] - in_ECX[6] * in_ECX[2];
  param_1[5] = in_ECX[3] * in_ECX[2] - in_ECX[5] * *in_ECX;
  param_1[6] = in_ECX[3] * in_ECX[7] - in_ECX[6] * in_ECX[4];
  param_1[7] = in_ECX[1] * in_ECX[6] - in_ECX[7] * *in_ECX;
  param_1[8] = *in_ECX * in_ECX[4] - in_ECX[3] * in_ECX[1];
  fVar1 = param_1[6] * in_ECX[2] + in_ECX[1] * param_1[3] + *param_1 * *in_ECX;
  fVar2 = ABS(fVar1);
  if (fVar2 < 1e-06 != (fVar2 == 1e-06)) {
    return (uint)(ushort)((ushort)(fVar2 < 1e-06) << 8 | (ushort)NAN(fVar2) << 10 |
                         (ushort)(fVar2 == 1e-06) << 0xe);
  }
  fVar1 = 1.0 / fVar1;
  iVar5 = 3;
  pfVar3 = param_1 + 2;
  do {
    pfVar4 = pfVar3 + 3;
    iVar5 = iVar5 + -1;
    pfVar3[-2] = pfVar3[-2] * fVar1;
    pfVar3[-1] = pfVar3[-1] * fVar1;
    *pfVar3 = *pfVar3 * fVar1;
    pfVar3 = pfVar4;
  } while (iVar5 != 0);
  return CONCAT31((int3)((uint)pfVar4 >> 8),1);
}



undefined4 * FUN_007103c0(undefined4 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_007102b0(param_1);
  if (cVar1 == '\0') {
    *param_1 = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[8] = 0;
  }
  return param_1;
}



void FUN_00710400(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[1];
  uVar2 = in_ECX[2];
  uVar3 = in_ECX[3];
  uVar4 = in_ECX[4];
  uVar5 = in_ECX[5];
  uVar6 = in_ECX[6];
  uVar7 = in_ECX[7];
  uVar8 = in_ECX[8];
  *param_1 = *in_ECX;
  param_1[3] = uVar1;
  param_1[6] = uVar2;
  param_1[1] = uVar3;
  param_1[4] = uVar4;
  param_1[7] = uVar5;
  param_1[2] = uVar6;
  param_1[5] = uVar7;
  param_1[8] = uVar8;
  return;
}



void FUN_00710490(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = param_2[6] * in_ECX[6] + param_2[3] * in_ECX[3] + *param_2 * *in_ECX;
  param_1[3] = param_2[6] * in_ECX[7] + in_ECX[1] * *param_2 + in_ECX[4] * param_2[3];
  param_1[6] = param_2[6] * in_ECX[8] + in_ECX[2] * *param_2 + in_ECX[5] * param_2[3];
  param_1[1] = in_ECX[6] * param_2[7] + param_2[4] * in_ECX[3] + param_2[1] * *in_ECX;
  param_1[4] = param_2[7] * in_ECX[7] + param_2[1] * in_ECX[1] + param_2[4] * in_ECX[4];
  param_1[7] = param_2[7] * in_ECX[8] + param_2[1] * in_ECX[2] + param_2[4] * in_ECX[5];
  param_1[2] = in_ECX[6] * param_2[8] + param_2[5] * in_ECX[3] + param_2[2] * *in_ECX;
  param_1[5] = param_2[8] * in_ECX[7] + param_2[2] * in_ECX[1] + param_2[5] * in_ECX[4];
  param_1[8] = param_2[8] * in_ECX[8] + param_2[2] * in_ECX[2] + param_2[5] * in_ECX[5];
  return;
}



void FUN_00710580(float *param_1,float *param_2,uint param_3,int param_4,int param_5)

{
  float *pfVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  
  uVar2 = 0;
  if (3 < (int)param_3) {
    iVar4 = (param_3 - 4 >> 2) + 1;
    uVar2 = iVar4 * 4;
    pfVar1 = (float *)(param_4 + 4);
    pfVar3 = (float *)(param_5 + 0xc);
    do {
      pfVar3[-3] = pfVar1[1] * param_1[2] + param_1[1] * *pfVar1 + *param_1 * pfVar1[-1] + *param_2;
      *(float *)((int)pfVar1 + (param_5 - param_4)) =
           param_1[5] * pfVar1[1] + param_1[4] * *pfVar1 + param_1[3] * pfVar1[-1] + param_2[1];
      pfVar3[-1] = param_1[8] * pfVar1[1] +
                   *pfVar1 * param_1[7] + param_1[6] * pfVar1[-1] + param_2[2];
      *pfVar3 = pfVar1[4] * param_1[2] + param_1[1] * pfVar1[3] + *param_1 * pfVar1[2] + *param_2;
      pfVar3[1] = param_1[5] * pfVar1[4] +
                  param_1[4] * pfVar1[3] + param_1[3] * pfVar1[2] + param_2[1];
      pfVar3[2] = param_1[8] * pfVar1[4] +
                  pfVar1[3] * param_1[7] + param_1[6] * pfVar1[2] + param_2[2];
      pfVar3[3] = pfVar1[7] * param_1[2] + param_1[1] * pfVar1[6] + *param_1 * pfVar1[5] + *param_2;
      pfVar3[4] = param_1[5] * pfVar1[7] +
                  param_1[4] * pfVar1[6] + param_1[3] * pfVar1[5] + param_2[1];
      iVar4 = iVar4 + -1;
      pfVar3[5] = param_1[8] * pfVar1[7] +
                  pfVar1[6] * param_1[7] + param_1[6] * pfVar1[5] + param_2[2];
      pfVar3[6] = pfVar1[10] * param_1[2] + param_1[1] * pfVar1[9] + *param_1 * pfVar1[8] + *param_2
      ;
      pfVar3[7] = param_1[5] * pfVar1[10] +
                  param_1[4] * pfVar1[9] + param_1[3] * pfVar1[8] + param_2[1];
      pfVar3[8] = param_1[8] * pfVar1[10] +
                  pfVar1[9] * param_1[7] + param_1[6] * pfVar1[8] + param_2[2];
      pfVar1 = pfVar1 + 0xc;
      pfVar3 = pfVar3 + 0xc;
    } while (iVar4 != 0);
  }
  if (uVar2 < param_3) {
    iVar4 = param_3 - uVar2;
    pfVar1 = (float *)(uVar2 * 0xc + 4 + param_4);
    pfVar3 = (float *)(uVar2 * 0xc + param_5);
    do {
      iVar4 = iVar4 + -1;
      *pfVar3 = pfVar1[1] * param_1[2] + param_1[1] * *pfVar1 + *param_1 * pfVar1[-1] + *param_2;
      *(float *)((int)pfVar1 + (param_5 - param_4)) =
           param_1[5] * pfVar1[1] + param_1[4] * *pfVar1 + param_1[3] * pfVar1[-1] + param_2[1];
      pfVar3[2] = param_1[8] * pfVar1[1] +
                  *pfVar1 * param_1[7] + param_1[6] * pfVar1[-1] + param_2[2];
      pfVar1 = pfVar1 + 3;
      pfVar3 = pfVar3 + 3;
    } while (iVar4 != 0);
  }
  return;
}



void FUN_007107a0(float *param_1,uint param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (3 < (int)param_2) {
    iVar3 = (param_2 - 4 >> 2) + 1;
    uVar4 = iVar3 * 4;
    pfVar1 = (float *)(param_3 + 4);
    pfVar2 = (float *)(param_4 + 0xc);
    do {
      pfVar2[-3] = pfVar1[1] * param_1[6] + *pfVar1 * param_1[3] + pfVar1[-1] * *param_1;
      *(float *)((int)pfVar1 + (param_4 - param_3)) =
           pfVar1[1] * param_1[7] + *pfVar1 * param_1[4] + pfVar1[-1] * param_1[1];
      pfVar2[-1] = pfVar1[1] * param_1[8] + *pfVar1 * param_1[5] + pfVar1[-1] * param_1[2];
      *pfVar2 = pfVar1[4] * param_1[6] + pfVar1[3] * param_1[3] + pfVar1[2] * *param_1;
      pfVar2[1] = pfVar1[4] * param_1[7] + pfVar1[3] * param_1[4] + pfVar1[2] * param_1[1];
      pfVar2[2] = pfVar1[4] * param_1[8] + pfVar1[3] * param_1[5] + pfVar1[2] * param_1[2];
      pfVar2[3] = pfVar1[7] * param_1[6] + pfVar1[6] * param_1[3] + pfVar1[5] * *param_1;
      pfVar2[4] = pfVar1[7] * param_1[7] + pfVar1[6] * param_1[4] + pfVar1[5] * param_1[1];
      pfVar2[5] = pfVar1[7] * param_1[8] + pfVar1[6] * param_1[5] + pfVar1[5] * param_1[2];
      iVar3 = iVar3 + -1;
      pfVar2[6] = pfVar1[10] * param_1[6] + pfVar1[9] * param_1[3] + pfVar1[8] * *param_1;
      pfVar2[7] = pfVar1[10] * param_1[7] + pfVar1[9] * param_1[4] + pfVar1[8] * param_1[1];
      pfVar2[8] = pfVar1[10] * param_1[8] + pfVar1[9] * param_1[5] + pfVar1[8] * param_1[2];
      pfVar1 = pfVar1 + 0xc;
      pfVar2 = pfVar2 + 0xc;
    } while (iVar3 != 0);
  }
  if (uVar4 < param_2) {
    iVar3 = param_2 - uVar4;
    pfVar1 = (float *)(uVar4 * 0xc + 4 + param_3);
    pfVar2 = (float *)(uVar4 * 0xc + param_4);
    do {
      iVar3 = iVar3 + -1;
      *pfVar2 = pfVar1[1] * param_1[6] + *pfVar1 * param_1[3] + pfVar1[-1] * *param_1;
      *(float *)((int)pfVar1 + (param_4 - param_3)) =
           pfVar1[1] * param_1[7] + *pfVar1 * param_1[4] + pfVar1[-1] * param_1[1];
      pfVar2[2] = pfVar1[1] * param_1[8] + *pfVar1 * param_1[5] + pfVar1[-1] * param_1[2];
      pfVar1 = pfVar1 + 3;
      pfVar2 = pfVar2 + 3;
    } while (iVar3 != 0);
  }
  return;
}



undefined4 FUN_00710990(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 *in_ECX;
  float10 fVar8;
  
  fVar1 = (float)in_ECX[1];
  fVar2 = (float)in_ECX[2];
  fVar3 = (float)in_ECX[4];
  fVar4 = (float)in_ECX[5];
  fVar5 = (float)in_ECX[8];
  *param_1 = *in_ECX;
  if (1e-08 <= ABS(fVar2)) {
    fVar8 = (float10)FUN_00982c30();
    *param_2 = (float)fVar8;
    fVar6 = 1.0 / (float)fVar8;
    fVar1 = fVar6 * fVar1;
    fVar6 = fVar6 * fVar2;
    fVar7 = fVar6 * (fVar5 - fVar3) + fVar4 * (fVar1 + fVar1);
    fVar2 = fVar7 * fVar6;
    param_1[1] = fVar3 + fVar2;
    param_1[2] = fVar5 - fVar2;
    param_2[1] = fVar4 - fVar1 * fVar7;
    *in_ECX = 0x3f800000;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    in_ECX[6] = 0;
    in_ECX[4] = fVar1;
    in_ECX[5] = fVar6;
    in_ECX[7] = fVar6;
    in_ECX[8] = -fVar1;
    return 1;
  }
  param_1[1] = fVar3;
  param_1[2] = fVar5;
  *param_2 = fVar1;
  param_2[1] = fVar4;
  *in_ECX = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[4] = 0x3f800000;
  in_ECX[8] = 0x3f800000;
  return 0;
}



undefined4 FUN_00710b00(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float10 fVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float local_30;
  int local_24;
  
  local_24 = 0;
  while( true ) {
    fVar1 = ABS(param_1[1]) + ABS(*param_1);
    if (ABS(*param_2) + fVar1 == fVar1) {
      *param_2 = 0.0;
      if (ABS(param_2[1]) + ABS(param_1[1]) + ABS(param_1[2]) != ABS(param_1[1]) + ABS(param_1[2]))
      {
        fVar1 = param_1[2];
        fVar2 = param_1[1];
        fVar3 = fVar2 - fVar1;
        fVar6 = (float10)FUN_00982c30();
        fVar5 = ((fVar1 + fVar2) - (float)fVar6) * 0.5;
        if (NAN(fVar3) || 0.0 < fVar3 == (fVar3 == 0.0)) {
          local_30 = fVar1 - fVar5;
          fVar3 = param_2[1];
        }
        else {
          local_30 = param_2[1];
          fVar3 = fVar2 - fVar5;
        }
        FUN_00982c30();
        local_30 = local_30 * (1.0 / (float)extraout_ST0);
        fVar3 = (1.0 / (float)extraout_ST0) * fVar3;
        fVar4 = in_ECX[2];
        in_ECX[2] = in_ECX[1] * fVar3 + fVar4 * local_30;
        in_ECX[1] = in_ECX[1] * local_30 - fVar4 * fVar3;
        fVar4 = in_ECX[5];
        in_ECX[5] = in_ECX[4] * fVar3 + fVar4 * local_30;
        in_ECX[4] = in_ECX[4] * local_30 - fVar4 * fVar3;
        fVar4 = in_ECX[8];
        in_ECX[8] = in_ECX[7] * fVar3 + fVar4 * local_30;
        in_ECX[7] = in_ECX[7] * local_30 - fVar4 * fVar3;
        param_1[1] = fVar5;
        param_1[2] = ((float)fVar6 + fVar1 + fVar2) * 0.5;
      }
      param_2[1] = 0.0;
      return 1;
    }
    fVar1 = ABS(param_1[1]) + ABS(param_1[2]);
    if (ABS(param_2[1]) + fVar1 == fVar1) break;
    fVar1 = *param_1;
    fVar2 = *param_2;
    fVar5 = (param_1[1] - fVar1) / (fVar2 * 2.0);
    fVar6 = (float10)FUN_00982c30();
    fVar3 = param_2[1];
    if (NAN(fVar5) || 0.0 < fVar5 == (fVar5 == 0.0)) {
      fVar5 = fVar5 - (float)fVar6;
    }
    else {
      fVar5 = (float)fVar6 + fVar5;
    }
    fVar1 = fVar2 / fVar5 + (param_1[2] - fVar1);
    if (ABS(fVar1) < ABS(fVar3) == (ABS(fVar1) == ABS(fVar3))) {
      fVar6 = (float10)FUN_00982c30();
      local_30 = 1.0 / (float)fVar6;
      fVar2 = local_30 * (fVar3 / fVar1);
    }
    else {
      fVar6 = (float10)FUN_00982c30();
      fVar2 = 1.0 / (float)fVar6;
      local_30 = fVar2 * (fVar1 / fVar3);
    }
    fVar1 = in_ECX[2];
    in_ECX[2] = fVar1 * local_30 + in_ECX[1] * fVar2;
    in_ECX[1] = in_ECX[1] * local_30 - fVar1 * fVar2;
    fVar1 = in_ECX[5];
    in_ECX[5] = in_ECX[4] * fVar2 + fVar1 * local_30;
    in_ECX[4] = in_ECX[4] * local_30 - fVar1 * fVar2;
    fVar1 = in_ECX[8];
    in_ECX[8] = in_ECX[7] * fVar2 + fVar1 * local_30;
    in_ECX[7] = in_ECX[7] * local_30 - fVar1 * fVar2;
    fVar1 = param_2[1];
    fVar5 = (fVar1 + fVar1) * local_30 + (param_1[1] - param_1[2]) * fVar2;
    fVar4 = local_30 * *param_2;
    fVar3 = *param_2 * fVar2;
    fVar1 = fVar5 * local_30 - fVar1;
    fVar2 = fVar2 * fVar5;
    if (ABS(fVar1) < ABS(fVar3) == (ABS(fVar1) == ABS(fVar3))) {
      fVar6 = (float10)FUN_00982c30();
      param_2[1] = fVar1 * (float)fVar6;
      local_30 = 1.0 / (float)fVar6;
      fVar5 = local_30 * (fVar3 / fVar1);
    }
    else {
      fVar6 = (float10)FUN_00982c30();
      param_2[1] = fVar3 * (float)fVar6;
      fVar5 = 1.0 / (float)fVar6;
      local_30 = fVar5 * (fVar1 / fVar3);
    }
    fVar1 = in_ECX[1];
    in_ECX[1] = *in_ECX * fVar5 + fVar1 * local_30;
    *in_ECX = *in_ECX * local_30 - fVar1 * fVar5;
    fVar1 = in_ECX[4];
    in_ECX[4] = in_ECX[3] * fVar5 + fVar1 * local_30;
    in_ECX[3] = in_ECX[3] * local_30 - fVar1 * fVar5;
    fVar1 = in_ECX[7];
    in_ECX[7] = in_ECX[6] * fVar5 + fVar1 * local_30;
    in_ECX[6] = in_ECX[6] * local_30 - fVar1 * fVar5;
    fVar3 = param_1[1] - fVar2;
    param_1[2] = fVar2 + param_1[2];
    fVar1 = fVar4 * 2.0 * local_30 + (*param_1 - fVar3) * fVar5;
    *param_2 = fVar1 * local_30 - fVar4;
    fVar1 = fVar1 * fVar5;
    local_24 = local_24 + 1;
    param_1[1] = fVar3 + fVar1;
    *param_1 = *param_1 - fVar1;
    if (0x1f < local_24) {
      return 0;
    }
  }
  param_2[1] = 0.0;
  if (ABS(*param_2) + ABS(*param_1) + ABS(param_1[1]) != ABS(*param_1) + ABS(param_1[1])) {
    fVar1 = param_1[1];
    fVar2 = *param_1;
    fVar3 = fVar2 - fVar1;
    fVar6 = (float10)FUN_00982c30();
    fVar5 = ((fVar2 + fVar1) - (float)fVar6) * 0.5;
    if (NAN(fVar3) || 0.0 < fVar3 == (fVar3 == 0.0)) {
      local_30 = fVar1 - fVar5;
      fVar3 = *param_2;
    }
    else {
      local_30 = *param_2;
      fVar3 = fVar2 - fVar5;
    }
    FUN_00982c30();
    local_30 = local_30 * (1.0 / (float)extraout_ST0_00);
    fVar3 = (1.0 / (float)extraout_ST0_00) * fVar3;
    fVar4 = in_ECX[1];
    in_ECX[1] = *in_ECX * fVar3 + fVar4 * local_30;
    *in_ECX = *in_ECX * local_30 - fVar4 * fVar3;
    fVar4 = in_ECX[4];
    in_ECX[4] = in_ECX[3] * fVar3 + fVar4 * local_30;
    in_ECX[3] = in_ECX[3] * local_30 - fVar4 * fVar3;
    fVar4 = in_ECX[7];
    in_ECX[7] = in_ECX[6] * fVar3 + fVar4 * local_30;
    in_ECX[6] = in_ECX[6] * local_30 - fVar4 * fVar3;
    *param_1 = fVar5;
    param_1[1] = ((float)fVar6 + fVar2 + fVar1) * 0.5;
  }
  *param_2 = 0.0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00711300(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 *in_ECX;
  float10 fVar2;
  float10 extraout_ST0;
  
  if ((float)in_ECX[2] <= -1.0) {
    fVar1 = -_DAT_00b3f99c;
  }
  else {
    fVar1 = _DAT_00b3f99c;
    if ((float)in_ECX[2] < 1.0) {
      fVar2 = (float10)FUN_00985870();
      fVar1 = (float)fVar2;
    }
  }
  fVar1 = -fVar1;
  *param_2 = fVar1;
  if (_DAT_00b3f99c <= fVar1) {
    fVar2 = (float10)FUN_007070b0(in_ECX[3],in_ECX[4]);
    *param_3 = 0.0;
    *param_1 = 0.0 - (float)fVar2;
    return 0;
  }
  if (fVar1 <= -_DAT_00b3f99c) {
    fVar2 = (float10)FUN_007070b0(in_ECX[3],in_ECX[4]);
    *param_3 = 0.0;
    *param_1 = (float)fVar2 - 0.0;
    return 0;
  }
  fVar2 = (float10)FUN_007070b0(-(float)in_ECX[5],in_ECX[8]);
  *param_1 = (float)-fVar2;
  FUN_007070b0(-(float)in_ECX[1],*in_ECX);
  *param_3 = (float)-extraout_ST0;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00711440(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  undefined4 *in_ECX;
  float10 fVar2;
  float10 extraout_ST0;
  
  if ((float)in_ECX[7] <= -1.0) {
    fVar1 = -_DAT_00b3f99c;
  }
  else {
    fVar1 = _DAT_00b3f99c;
    if ((float)in_ECX[7] < 1.0) {
      fVar2 = (float10)FUN_00985870();
      fVar1 = (float)fVar2;
    }
  }
  fVar1 = -fVar1;
  *param_2 = fVar1;
  if (_DAT_00b3f99c <= fVar1) {
    fVar2 = (float10)FUN_007070b0(in_ECX[2],*in_ECX);
    *param_3 = 0.0;
    *param_1 = 0.0 - (float)fVar2;
    return 0;
  }
  if (fVar1 <= -_DAT_00b3f99c) {
    fVar2 = (float10)FUN_007070b0(in_ECX[2],*in_ECX);
    *param_3 = 0.0;
    *param_1 = (float)fVar2 - 0.0;
    return 0;
  }
  fVar2 = (float10)FUN_007070b0(-(float)in_ECX[1],in_ECX[4]);
  *param_1 = (float)-fVar2;
  FUN_007070b0(-(float)in_ECX[6],in_ECX[8]);
  *param_3 = (float)-extraout_ST0;
  return 1;
}



void FUN_00711580(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  float10 fVar5;
  float local_90 [3];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [36];
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fsin((float10)param_1);
  local_38 = (float)fVar1;
  local_34 = (float)fVar5;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_2c = -local_34;
  fVar1 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  local_90[0] = (float)fVar1;
  local_78 = (float)fVar5;
  local_90[1] = 0.0;
  local_90[2] = -local_78;
  local_84 = 0;
  local_80 = 0x3f800000;
  local_7c = 0;
  local_74 = 0;
  fVar1 = (float10)fcos((float10)param_3);
  fVar5 = (float10)fsin((float10)param_3);
  local_6c = (float)fVar1;
  local_68 = (float)fVar5;
  local_64 = 0;
  local_60 = -local_68;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0x3f800000;
  local_70 = local_90[0];
  local_5c = local_6c;
  local_28 = local_38;
  uVar2 = FUN_007100a0(local_24,&local_6c);
  puVar3 = (undefined4 *)FUN_007100a0(local_90,uVar2);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *in_ECX = *puVar3;
    puVar3 = puVar3 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_007116a0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  float10 fVar5;
  float local_90;
  float local_8c;
  undefined4 local_88;
  float local_84;
  float local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  float local_6c [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  undefined1 local_24 [36];
  
  fVar1 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fsin((float10)param_1);
  local_38 = (float)fVar1;
  local_34 = (float)fVar5;
  local_48 = 0x3f800000;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  local_2c = -local_34;
  fVar1 = (float10)fcos((float10)param_3);
  fVar5 = (float10)fsin((float10)param_3);
  local_6c[0] = (float)fVar1;
  local_54 = (float)fVar5;
  local_6c[1] = 0.0;
  local_6c[2] = -local_54;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  fVar1 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  local_90 = (float)fVar1;
  local_8c = (float)fVar5;
  local_88 = 0;
  local_84 = -local_8c;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0x3f800000;
  local_80 = local_90;
  local_4c = local_6c[0];
  local_28 = local_38;
  uVar2 = FUN_007100a0(local_24,local_6c);
  puVar3 = (undefined4 *)FUN_007100a0(&local_90,uVar2);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *in_ECX = *puVar3;
    puVar3 = puVar3 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_007117c0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  float10 fVar5;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float local_70;
  float local_6c [3];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [36];
  
  fVar1 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  local_80 = (float)fVar1;
  local_7c = (float)fVar5;
  local_90 = 0x3f800000;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_78 = 0;
  local_74 = -local_7c;
  fVar1 = (float10)fcos((float10)param_3);
  fVar5 = (float10)fsin((float10)param_3);
  local_6c[0] = (float)fVar1;
  local_54 = (float)fVar5;
  local_6c[1] = 0.0;
  local_6c[2] = -local_54;
  local_60 = 0;
  local_5c = 0x3f800000;
  local_58 = 0;
  local_50 = 0;
  fVar1 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fsin((float10)param_1);
  local_48 = (float)fVar1;
  local_44 = (float)fVar5;
  local_40 = 0;
  local_3c = -local_44;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_70 = local_80;
  local_4c = local_6c[0];
  local_38 = local_48;
  uVar2 = FUN_007100a0(local_24,local_6c);
  puVar3 = (undefined4 *)FUN_007100a0(&local_90,uVar2);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *in_ECX = *puVar3;
    puVar3 = puVar3 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_007118e0(float param_1,float param_2,float param_3)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  float10 fVar5;
  float local_90 [3];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [36];
  
  fVar1 = (float10)fcos((float10)param_3);
  fVar5 = (float10)fsin((float10)param_3);
  local_5c = (float)fVar1;
  local_58 = (float)fVar5;
  local_6c = 0x3f800000;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_54 = 0;
  local_50 = -local_58;
  fVar1 = (float10)fcos((float10)param_2);
  fVar5 = (float10)fsin((float10)param_2);
  local_90[0] = (float)fVar1;
  local_78 = (float)fVar5;
  local_90[1] = 0.0;
  local_90[2] = -local_78;
  local_84 = 0;
  local_80 = 0x3f800000;
  local_7c = 0;
  local_74 = 0;
  fVar1 = (float10)fcos((float10)param_1);
  fVar5 = (float10)fsin((float10)param_1);
  local_48 = (float)fVar1;
  local_44 = (float)fVar5;
  local_40 = 0;
  local_3c = -local_44;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_70 = local_90[0];
  local_4c = local_5c;
  local_38 = local_48;
  uVar2 = FUN_007100a0(local_24,&local_6c);
  puVar3 = (undefined4 *)FUN_007100a0(local_90,uVar2);
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *in_ECX = *puVar3;
    puVar3 = puVar3 + 1;
    in_ECX = in_ECX + 1;
  }
  return;
}



void FUN_00711a00(void)

{
  float *in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = 3;
  do {
    iVar1 = 3;
    do {
      if ((ABS(*in_ECX) < 1e-08 != (ABS(*in_ECX) == 1e-08)) && (*in_ECX != 0.0)) {
        *in_ECX = 0.0;
      }
      in_ECX = in_ECX + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



undefined4 FUN_00711a50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *in_ECX;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00();
  FUN_006c5d40(uVar3,pcVar2 + (0x80 - (int)(param_1 + 1)),"%s = ((%g,%g,%g),(%g,%g,%g),(%g,%g,%g))",
               param_1,(double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3],
               (double)in_ECX[4],(double)in_ECX[5],(double)in_ECX[6],(double)in_ECX[7],
               (double)in_ECX[8]);
  return uVar3;
}



void FUN_00711ae0(undefined4 param_1,float *param_2)

{
  char cVar1;
  float *in_ECX;
  int iVar2;
  float *pfVar3;
  undefined1 local_2c [8];
  float local_24 [4];
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = local_24;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *in_ECX;
    in_ECX = in_ECX + 1;
    pfVar3 = pfVar3 + 1;
  }
  cVar1 = FUN_00710990(param_1,local_2c);
  FUN_00710b00(param_1,local_2c);
  *param_2 = local_24[0];
  param_2[1] = local_24[3];
  param_2[2] = local_c;
  param_2[3] = local_24[1];
  param_2[4] = local_14;
  param_2[5] = local_8;
  if (cVar1 != '\0') {
    param_2[6] = -local_24[2];
    param_2[7] = -local_10;
    param_2[8] = -local_4;
    return;
  }
  param_2[6] = local_24[2];
  param_2[7] = local_10;
  param_2[8] = local_4;
  return;
}



void FUN_00711b90(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = param_1;
  param_1 = 3;
  do {
    iVar2 = 3;
    do {
      local_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX,4,&local_4,1);
      in_ECX = in_ECX + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}



void FUN_00711bf0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = param_1;
  FUN_00711a00();
  param_1 = 3;
  do {
    iVar2 = 3;
    do {
      local_4 = 4;
      (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX,4,&local_4,1);
      in_ECX = in_ECX + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}



void FUN_00711c50(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  *in_ECX = &PTR_LAB_00a7e76c;
  in_ECX[2] = 0;
  return;
}



void FUN_00711c80(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a7e76c;
  FUN_0055ace0();
  return;
}



void FUN_00711c90(undefined4 param_1)

{
  FUN_007008a0(param_1);
  FUN_00712a20();
  return;
}



void FUN_00711cb0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0068f970(param_1);
  uVar1 = FUN_007124a0();
  *(undefined4 *)(in_ECX + 8) = uVar1;
  return;
}



undefined1 FUN_00711cd0(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (*(int *)(in_ECX + 8) != 0) {
    (**(code **)(**(int **)(in_ECX + 8) + 0x24))(param_1);
  }
  return 1;
}



void FUN_00711d00(int *param_1)

{
  int in_ECX;
  
  FUN_0068f970(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 8));
  return;
}



uint FUN_00711d20(int param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = FUN_00700670(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = *(uint *)(in_ECX + 8);
    if (uVar1 != 0) {
      if (param_1 == 0) goto LAB_00711d32;
      if (uVar1 != 0) goto LAB_00711d4c;
    }
    if (param_1 == 0) {
LAB_00711d4c:
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
LAB_00711d32:
  return uVar1 & 0xffffff00;
}



void FUN_00711d60(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 8) = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xa8) != in_ECX)) {
    FUN_00435ce0();
    return;
  }
  return;
}



void FUN_00711d90(int param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_LAB_00a7e76c;
  in_ECX[2] = param_1;
  if ((param_1 != 0) && (*(undefined4 **)(param_1 + 0xa8) != in_ECX)) {
    FUN_00435ce0(in_ECX);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00711e00(int param_1)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007009a0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fb00);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  (**(code **)(*in_ECX + 0x34))(iVar1);
  return;
}



void FUN_00711e60(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070f910(DAT_00b3fb00);
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  param_1 = FUN_0070fbe0("m_pkSceneObject",*(undefined4 *)(in_ECX + 8));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



undefined4 FUN_00711ef0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b40334 != (code *)0x0) {
    uVar2 = (*DAT_00b40334)();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  local_10 = FUN_00401f00(0x210,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_007478c0();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00711f80(void)

{
  if (DAT_00b3fb80 != (undefined4 *)0x0) {
    (**(code **)*DAT_00b3fb80)(1);
  }
  if (DAT_00b3fb84 != (undefined4 *)0x0) {
    (**(code **)*DAT_00b3fb84)(1);
  }
  return;
}



void FUN_00711fb0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x380) = param_1;
  return;
}



undefined1 FUN_00711fc0(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = in_ECX + 0x38;
  _strcpy_s((char *)piVar3,0x104,param_1);
  FUN_0060d0a0(piVar3);
  FUN_00747930(piVar3);
  piVar3 = (int *)thunk_FUN_00748110(piVar3,0,0x8000);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 4))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*in_ECX + 4))(piVar3);
      (**(code **)*piVar3)(1);
      return uVar2;
    }
    (**(code **)*piVar3)(1);
  }
  in_ECX[0xe0] = 1;
  _strcpy_s((char *)(in_ECX + 0xe1),0x104,"Cannot open file.");
  return 0;
}



undefined1 FUN_00712070(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_2c [28];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9b78;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00748820(param_1,param_2);
  local_4 = 0;
  uVar1 = (**(code **)(*in_ECX + 4))(local_2c,uVar2);
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_007488b0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar1;
}



void FUN_007120f0(int *param_1)

{
  code *pcVar1;
  char cVar2;
  int *in_ECX;
  
  cVar2 = (**(code **)(*param_1 + 4))();
  if (cVar2 == '\0') {
    in_ECX[0x87] = 0;
    return;
  }
  pcVar1 = *(code **)(*in_ECX + 0x3c);
  in_ECX[0x87] = (int)param_1;
  (*pcVar1)();
  in_ECX[0x87] = 0;
  return;
}



undefined1 FUN_00712140(char *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int *in_ECX;
  
  piVar3 = in_ECX + 0x38;
  _strcpy_s((char *)piVar3,0x104,param_1);
  FUN_0060d0a0(piVar3);
  FUN_00747930(piVar3);
  piVar3 = (int *)thunk_FUN_00748110(param_1,1,0x8000);
  if (piVar3 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar3 + 4))();
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*in_ECX + 0x10))(piVar3);
      (**(code **)*piVar3)(1);
      return uVar2;
    }
    (**(code **)*piVar3)(1);
  }
  return 0;
}



undefined1 FUN_007121d0(undefined4 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *unaff_retaddr;
  undefined1 local_2c [16];
  undefined4 uStack_1c;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9b78;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00748860(uVar2);
  local_4 = 0;
  uVar1 = (**(code **)(*in_ECX + 0x10))(local_2c);
  *param_1 = uStack_1c;
  uVar3 = FUN_007489a0();
  *unaff_retaddr = uVar3;
  puStack_8 = (undefined1 *)0xffffffff;
  FUN_007488b0();
  *unaff_FS_OFFSET = iStack_10;
  return uVar1;
}



void FUN_00712260(int param_1)

{
  int *in_ECX;
  
  in_ECX[0x88] = param_1;
  (**(code **)(*in_ECX + 0x40))();
  in_ECX[0x88] = 0;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_00712290(char *param_1)

{
  byte bVar1;
  char *_Str;
  long lVar2;
  byte bVar3;
  uint uVar4;
  char *local_18;
  char local_14 [16];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_18;
  _strcpy_s(local_14,0x10,param_1);
  bVar3 = 0x18;
  uVar4 = 0;
  _Str = _strtok_s(local_14,".",&local_18);
  while (_Str != (char *)0x0) {
    lVar2 = _atol(_Str);
    bVar1 = bVar3 & 0x1f;
    bVar3 = bVar3 - 8;
    uVar4 = uVar4 | lVar2 << bVar1;
    _Str = _strtok_s((char *)0x0,".",&local_18);
  }
  return uVar4;
}



void FUN_00712330(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,puVar3[1]);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  if ((char)in_ECX[4] == '\0') {
    puVar3[1] = param_1;
  }
  *(undefined2 *)(puVar3 + 2) = (undefined2)param_1;
  return;
}



uint FUN_007123c0(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      return uVar3 & 0xffffff00;
    }
    uVar3 = (**(code **)(*in_ECX + 8))(param_1,puVar2[1]);
    if ((char)uVar3 != '\0') break;
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar1 = *(undefined2 *)(puVar2 + 2);
  *param_1 = uVar1;
  return CONCAT31((int3)(CONCAT22((short)(uVar3 >> 0x10),uVar1) >> 8),1);
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7e830;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a7e858;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



undefined4 FUN_007124a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x230);
  *(int *)(in_ECX + 0x230) = iVar1 + 1;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x224) + iVar1 * 4);
  if (iVar1 == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x1f0) + iVar1 * 4);
}



undefined4 FUN_007124d0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x240);
  *(int *)(in_ECX + 0x240) = iVar1 + 1;
  return *(undefined4 *)(*(int *)(in_ECX + 0x234) + iVar1 * 4);
}



undefined4 FUN_00712520(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *local_4;
  
  cVar1 = FUN_0055e000(param_1,&local_4);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = (*local_4)();
  return uVar2;
}



undefined4 FUN_00712550(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(*(int *)(in_ECX + 0xcc) + param_1 * 4);
}



uint FUN_00712560(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  if (*(ushort *)(in_ECX + 0xd2) != 0) {
    piVar2 = *(int **)(in_ECX + 0xcc);
    do {
      if (param_1 == *piVar2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0xd2));
  }
  return 0;
}



undefined4 FUN_00712590(undefined4 param_1,undefined4 param_2)

{
  FUN_00412d30(param_1,param_2);
  return 0;
}



void FUN_007125b0(undefined4 param_1)

{
  FUN_004524c0(param_1);
  return;
}



void FUN_007125d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  iVar2 = DAT_00b3fb84;
  uVar3 = 0;
  if (*(ushort *)(DAT_00b3fb84 + 10) != 0) {
    piVar4 = *(int **)(DAT_00b3fb84 + 4);
    while (*piVar4 != param_1) {
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
      if (*(ushort *)(DAT_00b3fb84 + 10) <= uVar3) {
        return;
      }
    }
    if (uVar3 < *(ushort *)(DAT_00b3fb84 + 10)) {
      piVar4 = (int *)(*(int *)(DAT_00b3fb84 + 4) + uVar3 * 4);
      iVar1 = *piVar4;
      *piVar4 = 0;
      if (iVar1 != 0) {
        *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
      }
      if (uVar3 == *(ushort *)(iVar2 + 10) - 1) {
        *(ushort *)(iVar2 + 10) = *(ushort *)(iVar2 + 10) - 1;
      }
    }
  }
  return;
}



void FUN_00712640(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(ushort *)(param_1 + 6) = *(ushort *)(param_1 + 6) & 0xffef | 0xe;
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    uVar3 = 0;
    if (*(short *)(iVar2 + 0xb6) != 0) {
      if (*(short *)(iVar2 + 0xb6) == 0) goto LAB_0071268c;
      do {
        iVar1 = *(int *)(*(int *)(iVar2 + 0xb0) + uVar3 * 4);
        if (iVar1 != 0) {
          FUN_00712640(iVar1);
        }
LAB_0071268c:
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar2 + 0xb6));
    }
  }
  return;
}



void FUN_007126a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  
  if ((*(uint *)(in_ECX + 0xd8) < 0x401000c) && (uVar3 = 0, *(int *)(in_ECX + 0x1f8) != 0)) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x1f0) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        for (puVar2 = (undefined4 *)(**(code **)(*piVar1 + 4))(); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)puVar2[1]) {
          if (puVar2 == &DAT_00b3fa80) {
            if (piVar1[7] == 0) {
              FUN_00712640(piVar1);
            }
            break;
          }
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x1f8));
  }
  return;
}



void FUN_00712710(void)

{
  int in_ECX;
  uint uVar1;
  
  if (*(int *)(in_ECX + 0x210) != 0) {
    uVar1 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x208) + uVar1 * 4) + 0x24))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0x210));
  }
  return;
}



void FUN_00712740(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x0071274b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 0x254) + 8))();
  return;
}



undefined4 FUN_00712750(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x254) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0071275f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x254) + 4))();
    return uVar1;
  }
  return 0;
}



void FUN_007127a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e838;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007127c0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e860;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_007127e0(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 1;
  (**(code **)(*piVar1 + 8))(*piVar1,param_2,1,&param_1,1);
  return;
}



void FUN_00712810(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e880;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00712830(byte param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = (void *)in_ECX[1];
  *in_ECX = &PTR_FUN_00a7e8a0;
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,4,*(int *)((int)pvVar1 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar1 + -4);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00712880(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e838;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007128b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e860;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007128e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7e880;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00712930(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  _DAT_00b3fc78 = GetCurrentThreadId();
  _DAT_00b3fc7c = _DAT_00b3fc7c + 1;
  FUN_008bcc50();
  _DAT_00b3fc7c = _DAT_00b3fc7c + -1;
  if (_DAT_00b3fc7c == 0) {
    _DAT_00b3fc78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  return;
}



void FUN_00712980(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
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
  FUN_008bcd40(*(undefined4 *)(in_ECX + 0x268),&param_1);
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



void FUN_00712a20(void)

{
  int iVar1;
  int in_ECX;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),&local_4,4,&local_8,1);
  iVar1 = *(int *)(in_ECX + 0x228);
  if (*(int *)(in_ECX + 0x22c) == iVar1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    FUN_006e8ca0(iVar1);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x224) + *(int *)(in_ECX + 0x22c) * 4) = local_4;
  *(int *)(in_ECX + 0x22c) = *(int *)(in_ECX + 0x22c) + 1;
  return;
}



undefined4 FUN_00712a90(void)

{
  int in_ECX;
  undefined4 local_8;
  int local_4;
  
  local_8 = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),&local_4,4,&local_8,1);
  if (local_4 == -1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x1f0) + local_4 * 4);
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00712ae0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint local_c [3];
  
  local_c[1] = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),local_c,4,local_c + 1,1);
  iVar1 = *(int *)(in_ECX + 0x238);
  if (*(int *)(in_ECX + 0x23c) == iVar1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    FUN_006e8ca0(iVar1);
  }
  *(uint *)(*(int *)(in_ECX + 0x234) + *(int *)(in_ECX + 0x23c) * 4) = local_c[0];
  *(int *)(in_ECX + 0x23c) = *(int *)(in_ECX + 0x23c) + 1;
  uVar2 = 0;
  if (local_c[0] != 0) {
    do {
      local_c[1] = 4;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
                (*(int *)(in_ECX + 0x21c),local_c + 2,4,local_c + 1,1);
      iVar1 = *(int *)(in_ECX + 0x228);
      if (*(int *)(in_ECX + 0x22c) == iVar1) {
        if (iVar1 == 0) {
          iVar1 = 1;
        }
        else {
          iVar1 = iVar1 * 2;
        }
        FUN_006e8ca0(iVar1);
      }
      *(uint *)(*(int *)(in_ECX + 0x224) + *(int *)(in_ECX + 0x22c) * 4) = local_c[2];
      *(int *)(in_ECX + 0x22c) = *(int *)(in_ECX + 0x22c) + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 < local_c[0]);
  }
  return;
}



void FUN_00712bc0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x238);
  if (*(int *)(in_ECX + 0x23c) == iVar1) {
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else {
      iVar1 = iVar1 * 2;
    }
    FUN_006e8ca0(iVar1);
  }
  *(undefined4 *)(*(int *)(in_ECX + 0x234) + *(int *)(in_ECX + 0x23c) * 4) = param_1;
  *(int *)(in_ECX + 0x23c) = *(int *)(in_ECX + 0x23c) + 1;
  return;
}



void FUN_00712f10(void)

{
  uint uVar1;
  LONG LVar2;
  int in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  uint local_18;
  undefined4 *local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = (undefined4 *)0x4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
            (*(int *)(in_ECX + 0x21c),&local_18,4,&local_14,1,uVar1);
  FUN_008bca30(local_18);
  uVar1 = 0;
  if (local_18 != 0) {
    do {
      local_14 = (undefined4 *)0x4;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),&iStack_10,4,&local_14,1)
      ;
      if (iStack_10 == -1) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x1f0) + iStack_10 * 4);
      }
      local_14 = puVar3;
      if (puVar3 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar3 + 1);
      }
      uStack_4 = 0;
      FUN_008bcd40(uVar1,&local_14);
      uStack_4 = 0xffffffff;
      if (puVar3 != (undefined4 *)0x0) {
        LVar2 = InterlockedDecrement(puVar3 + 1);
        if (LVar2 == 0) {
          (**(code **)*puVar3)(1);
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_18);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00713030(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint local_1c [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9c0b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c[1] = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
            (*(int *)(in_ECX + 0x21c),local_1c,4,local_1c + 1,1,uVar1);
  local_1c[0] = local_1c[0] + 1;
  FUN_004e4a10(local_1c[0]);
  local_1c[1] = 0;
  FUN_0042bb90(0,local_1c + 1);
  uVar1 = 1;
  if (1 < local_1c[0]) {
    do {
      local_1c[2] = 4;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
                (*(int *)(in_ECX + 0x21c),local_1c + 3,4,local_1c + 2,1);
      local_1c[2] = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (local_1c[2] == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_007329d0(local_1c[3]);
      }
      uStack_4 = 0xffffffff;
      if (uVar1 < *(ushort *)(in_ECX + 0xd2)) {
        if (iVar2 == 0) {
          if (*(int *)(*(int *)(in_ECX + 0xcc) + uVar1 * 4) != 0) {
            *(short *)(in_ECX + 0xd4) = *(short *)(in_ECX + 0xd4) + -1;
          }
        }
        else if (*(int *)(*(int *)(in_ECX + 0xcc) + uVar1 * 4) == 0) {
          *(short *)(in_ECX + 0xd4) = *(short *)(in_ECX + 0xd4) + 1;
        }
      }
      else {
        *(short *)(in_ECX + 0xd2) = (short)uVar1 + 1;
        if (iVar2 != 0) {
          *(short *)(in_ECX + 0xd4) = *(short *)(in_ECX + 0xd4) + 1;
        }
      }
      *(int *)(*(int *)(in_ECX + 0xcc) + uVar1 * 4) = iVar2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_1c[0]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00713180(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  byte *pbVar4;
  undefined4 uStack_10;
  undefined4 uStack_c;
  byte *pbStack_8;
  
  (**(code **)(**(int **)(in_ECX + 0x220) + 8))(0);
  FUN_007483c0("Gamebryo File Format, Version 20.0.0.5\n");
  uStack_10 = 4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&DAT_00b26df4,4,&uStack_10,1)
  ;
  pbVar4 = (byte *)(in_ECX + 0x1e4);
  uStack_10 = 1;
  pbStack_8 = pbVar4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),pbVar4,1,&uStack_10,1);
  uStack_10 = 4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&DAT_00b26df8,4,&uStack_10,1)
  ;
  uStack_c = *(undefined4 *)(in_ECX + 0x1f8);
  uStack_10 = 4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&uStack_c,4,&uStack_10,1);
  if (DAT_00b26df8 != 0) {
    uStack_c = 4;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),in_ECX + 4,4,&uStack_c,1);
    cVar2 = (char)in_ECX;
    pcVar3 = (char *)(in_ECX + 8);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),&stack0xffffffef,1,&uStack_c,1);
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),(char *)(in_ECX + 8),
               ((char)pcVar3 - (cVar2 + '\t')) + '\x01',&uStack_c,1);
    pcVar3 = (char *)(in_ECX + 0x48);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),&stack0xffffffef,1,&uStack_c,1);
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),(char *)(in_ECX + 0x48),
               ((char)pcVar3 - (cVar2 + 'I')) + '\x01',&uStack_c,1);
    pcVar3 = (char *)(in_ECX + 0x88);
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),&stack0xffffffef,1,&uStack_c,1);
    uStack_c = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))
              (*(int *)(in_ECX + 0x220),(char *)(in_ECX + 0x88),
               ((char)pcVar3 - (cVar2 + -0x77)) + '\x01',&uStack_c,1);
    pbVar4 = pbStack_8;
  }
  (**(code **)(**(int **)(in_ECX + 0x220) + 8))(*pbVar4 ^ 1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00713390(void)

{
  int *in_ECX;
  uint uVar1;
  uint local_8 [2];
  
  local_8[0] = in_ECX[0x84];
  local_8[1] = 4;
  (**(code **)(in_ECX[0x88] + 8))(in_ECX[0x88],local_8,4,local_8 + 1,1);
  if (local_8[0] != 0) {
    uVar1 = 0;
    do {
      (**(code **)(*in_ECX + 0x2c))(*(undefined4 *)(in_ECX[0x82] + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_8[0]);
  }
  return;
}



void FUN_00713400(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  uint uVar7;
  uint local_8;
  undefined4 *puStack_4;
  
  FUN_004e4a10(1);
  local_8 = 0;
  FUN_0042bb90(0,&local_8);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    do {
      uVar7 = local_8;
      puVar2 = (undefined4 *)
               (**(code **)(**(int **)(*(int *)(in_ECX + 0x1f0) + local_8 * 4) + 0x44))();
      puStack_4 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        uVar3 = 0;
        if (*(ushort *)(in_ECX + 0xd2) != 0) {
          puVar6 = *(undefined4 **)(in_ECX + 0xcc);
          do {
            if (puVar2 == (undefined4 *)*puVar6) {
              if (uVar3 != 0) goto LAB_007134b5;
              break;
            }
            uVar3 = uVar3 + 1;
            puVar6 = puVar6 + 1;
          } while (uVar3 < *(ushort *)(in_ECX + 0xd2));
        }
        uVar7 = (uint)*(ushort *)(in_ECX + 0xd2);
        if (*(ushort *)(in_ECX + 0xd0) <= uVar7) {
          FUN_004e4a10(*(ushort *)(in_ECX + 0xd6) + uVar7);
        }
        FUN_0042bb90(uVar7,&puStack_4);
        *puVar2 = 0;
        uVar7 = local_8;
      }
LAB_007134b5:
      local_8 = uVar7 + 1;
    } while (local_8 < *(uint *)(in_ECX + 0x1f8));
  }
  uVar7 = 0;
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    do {
      piVar4 = (int *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1f0) + uVar7 * 4) + 0x44))();
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
        iVar5 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x1f0) + uVar7 * 4) + 0x40))();
        *piVar4 = iVar5 + iVar1;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(in_ECX + 0x1f8));
  }
  return;
}



void FUN_00713520(void)

{
  int in_ECX;
  uint uVar1;
  undefined4 local_8;
  int local_4;
  
  local_4 = *(ushort *)(in_ECX + 0xd2) - 1;
  local_8 = 4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&local_4,4,&local_8,1);
  uVar1 = 1;
  if (1 < *(ushort *)(in_ECX + 0xd2)) {
    do {
      local_8 = **(undefined4 **)(*(int *)(in_ECX + 0xcc) + uVar1 * 4);
      local_4 = 4;
      (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&local_8,4,&local_4,1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0xd2));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007135c0(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  _DAT_00b3fc78 = GetCurrentThreadId();
  _DAT_00b3fc7c = _DAT_00b3fc7c + 1;
  FUN_008bcc50();
  *(undefined4 *)(in_ECX + 0x22c) = 0;
  *(undefined4 *)(in_ECX + 0x23c) = 0;
  *(undefined4 *)(in_ECX + 0x230) = 0;
  *(undefined4 *)(in_ECX + 0x240) = 0;
  _DAT_00b3fc7c = _DAT_00b3fc7c + -1;
  if (_DAT_00b3fc7c == 0) {
    _DAT_00b3fc78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00713620(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int local_8 [2];
  
  local_8[1] = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),local_8,4,local_8 + 1,1);
  if (0 < local_8[0]) {
    iVar2 = FUN_00401f00(local_8[0] + 1);
    piVar1 = param_1;
    *param_1 = iVar2;
    param_1 = (int *)0x1;
    (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
              (*(int *)(in_ECX + 0x21c),iVar2,local_8[0],&param_1,1);
    *(undefined1 *)(local_8[0] + *piVar1) = 0;
    return;
  }
  *param_1 = 0;
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_007136b0(int param_1)

{
  int in_ECX;
  int local_8 [2];
  
  local_8[1] = 4;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))(*(int *)(in_ECX + 0x21c),local_8,4,local_8 + 1,1);
  local_8[1] = 1;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
            (*(int *)(in_ECX + 0x21c),param_1,local_8[0],local_8 + 1,1);
  *(undefined1 *)(local_8[0] + param_1) = 0;
  return;
}



void FUN_00713720(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int in_ECX;
  undefined4 local_4;
  
  pcVar3 = param_1;
  if (param_1 == (char *)0x0) {
    param_1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    param_1 = (char *)((int)param_1 - (int)pcVar1);
  }
  local_4 = 4;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&param_1,4,&local_4,1);
  if (param_1 != (char *)0x0) {
    local_4 = 1;
    (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),pcVar3,param_1,&local_4,1);
  }
  return;
}



void FUN_007137a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9c38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e9bc;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7e838;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00713810(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9c68;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e8a8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7e860;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00713880(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a7e9dc;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_00713810();
  return;
}



void FUN_007138d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9c98;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7e8c8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a7e880;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00713940(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a7e9fc;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  FUN_007138d0();
  return;
}



void FUN_007139f0(byte param_1)

{
  FUN_00713810();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00713a10(byte param_1)

{
  FUN_007138d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00713a30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *_Dst;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009c9d22;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ea1c;
  in_ECX[1] = 0xb;
  *(undefined1 *)(in_ECX + 2) = 0;
  *(undefined1 *)(in_ECX + 0x12) = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  in_ECX[0x32] = &PTR__scalar_deleting_destructor__00a7e830;
  *(undefined2 *)(in_ECX + 0x34) = 0;
  *(undefined2 *)((int)in_ECX + 0xd6) = 1;
  *(undefined2 *)((int)in_ECX + 0xd2) = 0;
  *(undefined2 *)(in_ECX + 0x35) = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x7b] = &PTR_FUN_00a7e8a0;
  in_ECX[0x7d] = 0;
  in_ECX[0x80] = 0x400;
  in_ECX[0x7e] = 0;
  in_ECX[0x7f] = 0;
  in_ECX[0x7c] = 0;
  in_ECX[0x81] = &PTR_FUN_00a7e8a0;
  in_ECX[0x83] = 0;
  in_ECX[0x86] = 1;
  in_ECX[0x84] = 0;
  in_ECX[0x85] = 0;
  in_ECX[0x82] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[0x8e] = 0;
  in_ECX[0x8f] = 0;
  in_ECX[0x92] = 0x25;
  local_4 = 6;
  uStack_3 = 0;
  in_ECX[0x91] = &PTR_FUN_00a7e838;
  in_ECX[0x94] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar3);
  in_ECX[0x93] = _Dst;
  _memset(_Dst,0,in_ECX[0x92] * 4);
  in_ECX[0x91] = &PTR_FUN_00a7e9bc;
  in_ECX[0x95] = 0;
  in_ECX[0x9d] = 0;
  in_ECX[0x9e] = 0;
  in_ECX[0xe0] = 0;
  *(undefined1 *)(in_ECX + 0xe1) = 0;
  in_ECX[0x87] = 0;
  in_ECX[0x88] = 0;
  in_ECX[0x36] = DAT_00b26df4;
  in_ECX[0x37] = DAT_00b26df8;
  *(undefined1 *)(in_ECX + 0x79) = 1;
  *(undefined1 *)((int)in_ECX + 0x1e5) = 1;
  *(undefined1 *)(in_ECX + 0x38) = 0;
  puVar2 = DAT_00b3fac8;
  puVar1 = (undefined4 *)in_ECX[0x95];
  _local_4 = CONCAT31(uStack_3,8);
  if (puVar1 != DAT_00b3fac8) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[0x95] = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  in_ECX[0x8c] = 0;
  in_ECX[0x90] = 0;
  uVar5 = FUN_00711ef0();
  in_ECX[0x7a] = uVar5;
  in_ECX[0x98] = 0;
  in_ECX[0xe0] = 0;
  *(undefined1 *)(in_ECX + 0xe1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00713c60(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009c9da2;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7ea1c;
  local_4 = 6;
  if ((undefined4 *)in_ECX[0x87] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x87])(1,uVar3);
  }
  if ((undefined4 *)in_ECX[0x88] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x88])(1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  _DAT_00b3fc78 = GetCurrentThreadId();
  _DAT_00b3fc7c = _DAT_00b3fc7c + 1;
  FUN_008bcc50();
  _DAT_00b3fc7c = _DAT_00b3fc7c + -1;
  if (_DAT_00b3fc7c == 0) {
    _DAT_00b3fc78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
  puVar1 = (undefined4 *)in_ECX[0x95];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x95] = 0;
  }
  if ((undefined4 *)in_ECX[0x7a] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x7a])(1);
  }
  if ((undefined4 *)in_ECX[0x9e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x9e])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x95];
  local_4._0_1_ = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 4;
  FUN_007137a0();
  FUN_00401f20(in_ECX[0x8d]);
  FUN_00401f20(in_ECX[0x89]);
  pvVar2 = (void *)in_ECX[0x82];
  local_4._0_1_ = 1;
  in_ECX[0x81] = &PTR_FUN_00a7e8a0;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  pvVar2 = (void *)in_ECX[0x7c];
  local_4 = (uint)local_4._1_3_ << 8;
  in_ECX[0x7b] = &PTR_FUN_00a7e8a0;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  in_ECX[0x32] = &PTR__scalar_deleting_destructor__00a7e830;
  FUN_00401f20(in_ECX[0x33]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00713e50(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (undefined4 *)0x0) {
    InterlockedIncrement(param_1 + 1);
  }
  uVar1 = *(uint *)(in_ECX + 0x210);
  local_4 = 0;
  if (*(uint *)(in_ECX + 0x20c) <= uVar1) {
    FUN_008bca30(*(int *)(in_ECX + 0x218) + uVar1);
  }
  FUN_008bcd40(uVar1,&param_1);
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1,uVar3);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00713f00(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar2 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar3 = FUN_0055e000(param_1,&param_1);
  if (cVar3 != '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  FUN_00452570(puVar2,*(undefined4 *)(in_ECX + 0x1f8));
  param_1 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  uVar1 = *(uint *)(in_ECX + 0x1f8);
  local_4 = 0;
  if (*(uint *)(in_ECX + 500) <= uVar1) {
    FUN_008bca30(*(int *)(in_ECX + 0x200) + uVar1);
  }
  FUN_008bcd40(uVar1,&param_1);
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00713ff0(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  ushort local_124 [2];
  undefined4 *puStack_120;
  uint local_11c;
  int iStack_118;
  ushort auStack_114 [2];
  char acStack_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9dcb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_124;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = 2;
  (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
            (*(int *)(in_ECX + 0x21c),local_124,2,&local_11c,1,uVar2);
  iVar3 = FUN_00401f00((uint)local_124[0] * 4);
  uVar2 = 0;
  iStack_118 = iVar3;
  if (local_124[0] != 0) {
    do {
      puStack_120 = (undefined4 *)0x4;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
                (*(int *)(in_ECX + 0x21c),&local_11c,4,&puStack_120,1);
      puStack_120 = (undefined4 *)0x1;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
                (*(int *)(in_ECX + 0x21c),acStack_110,local_11c,&puStack_120,1);
      acStack_110[local_11c] = '\0';
      cVar1 = FUN_0055e000(acStack_110,iVar3);
      if (cVar1 == '\0') {
        *(undefined4 *)(in_ECX + 0x380) = 5;
        _strcpy_s((char *)(in_ECX + 900),0x104,acStack_110);
        _strcat_s((char *)(in_ECX + 900),0x104,": cannot find create function.");
        FUN_00401f20(iStack_118);
        uVar6 = 0;
        goto LAB_007141d1;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar2 < local_124[0]);
  }
  local_11c = 0;
  if (*(int *)(in_ECX + 500) != 0) {
    do {
      puStack_120 = (undefined4 *)0x2;
      (**(code **)(*(int *)(in_ECX + 0x21c) + 4))
                (*(int *)(in_ECX + 0x21c),auStack_114,2,&puStack_120,1);
      puVar4 = (undefined4 *)(**(code **)(iStack_118 + (uint)auStack_114[0] * 4))();
      puStack_120 = puVar4;
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
      }
      uVar2 = *(uint *)(in_ECX + 0x1f8);
      uStack_4 = 0;
      if (*(uint *)(in_ECX + 500) <= uVar2) {
        FUN_008bca30(*(int *)(in_ECX + 0x200) + uVar2);
      }
      FUN_008bcd40(uVar2,&puStack_120);
      uStack_4 = 0xffffffff;
      if ((puVar4 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar4 + 1), LVar5 == 0)) {
        (**(code **)*puVar4)(1);
      }
      local_11c = local_11c + 1;
    } while (local_11c < *(uint *)(in_ECX + 500));
  }
  FUN_00401f20(iStack_118);
  uVar6 = 1;
LAB_007141d1:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00714240(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  code *local_114;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9e0b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_114;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffedc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007136b0(local_110);
  cVar1 = FUN_0055e000(local_110,&local_114);
  if (cVar1 == '\0') {
    *(undefined4 *)(in_ECX + 0x380) = 5;
    _strcpy_s((char *)(in_ECX + 900),0x104,local_110);
    _strcat_s((char *)(in_ECX + 900),0x104,": cannot find create function.");
    uVar3 = 0;
  }
  else {
    pcVar4 = (code *)(*local_114)(uVar2);
    local_114 = pcVar4;
    if (pcVar4 != (code *)0x0) {
      InterlockedIncrement((LONG *)(pcVar4 + 4));
    }
    uVar2 = *(uint *)(in_ECX + 0x1f8);
    uStack_4 = 0;
    if (*(uint *)(in_ECX + 500) <= uVar2) {
      FUN_008bca30(*(int *)(in_ECX + 0x200) + uVar2);
    }
    FUN_008bcd40(uVar2,&local_114);
    uStack_4 = 0xffffffff;
    if (pcVar4 != (code *)0x0) {
      LVar5 = InterlockedDecrement((LONG *)(pcVar4 + 4));
      if (LVar5 == 0) {
        (*(code *)**(undefined4 **)pcVar4)(1);
      }
    }
    (**(code **)(*(int *)pcVar4 + 0x1c))();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00714390(void)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  cVar3 = (**(code **)(*in_ECX + 0x34))();
  if (cVar3 == '\0') {
    return 0;
  }
  in_ECX[0x9c] = 0;
  in_ECX[0x9b] = 0;
  in_ECX[0x9a] = 0;
  FUN_00712930();
  uVar5 = in_ECX[0x36];
  if ((uVar5 >= 0x5000001) && (cVar3 = FUN_00713ff0(), cVar3 == '\0')) {
    return 0;
  }
  if (0x5000005 < (uint)in_ECX[0x36]) {
    FUN_00713030();
  }
  uVar6 = in_ECX[0x7d];
  uVar1 = in_ECX[0x9a];
  while( true ) {
    if (uVar6 <= uVar1) {
      (**(code **)(*in_ECX + 0x48))();
      uVar5 = in_ECX[0x9b];
      while (uVar5 < uVar6) {
        if (in_ECX[0x98] == 3) {
          in_ECX[0x98] = 4;
          thunk_FUN_00747800();
        }
        (**(code **)(**(int **)(in_ECX[0x7c] + in_ECX[0x9b] * 4) + 0x20))();
        in_ECX[0x9b] = in_ECX[0x9b] + 1;
        uVar5 = in_ECX[0x9b];
      }
      uVar5 = in_ECX[0x9c];
      while (uVar5 < uVar6) {
        if (in_ECX[0x98] == 3) {
          in_ECX[0x98] = 4;
          thunk_FUN_00747800();
        }
        (**(code **)(**(int **)(in_ECX[0x7c] + in_ECX[0x9c] * 4) + 0x3c))();
        in_ECX[0x9c] = in_ECX[0x9c] + 1;
        uVar5 = in_ECX[0x9c];
      }
      if (in_ECX[0x98] != 2) {
        if (in_ECX[0x98] == 3) {
          in_ECX[0x98] = 4;
          thunk_FUN_00747800();
        }
        if ((*(short *)(DAT_00b3fb84 + 0xc) != 0) &&
           (uVar5 = 0, iVar4 = DAT_00b3fb84, in_ECX[0x84] != 0)) {
          do {
            if ((*(int *)(in_ECX[0x82] + uVar5 * 4) != 0) &&
               (uVar6 = 0, *(short *)(iVar4 + 10) != 0)) {
              do {
                pcVar2 = *(code **)(*(int *)(iVar4 + 4) + uVar6 * 4);
                if (pcVar2 != (code *)0x0) {
                  (*pcVar2)();
                  iVar4 = DAT_00b3fb84;
                }
                uVar6 = uVar6 + 1;
              } while (uVar6 < *(ushort *)(iVar4 + 10));
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < (uint)in_ECX[0x84]);
        }
        if (in_ECX[0x98] != 2) {
          FUN_007126a0();
          EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
          _DAT_00b3fc78 = GetCurrentThreadId();
          _DAT_00b3fc7c = _DAT_00b3fc7c + 1;
          FUN_008bcc50();
          in_ECX[0x8b] = 0;
          in_ECX[0x8f] = 0;
          in_ECX[0x8c] = 0;
          in_ECX[0x90] = 0;
          _DAT_00b3fc7c = _DAT_00b3fc7c + -1;
          if (_DAT_00b3fc7c == 0) {
            _DAT_00b3fc78 = 0;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
          return 1;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
      _DAT_00b3fc78 = GetCurrentThreadId();
      _DAT_00b3fc7c = _DAT_00b3fc7c + 1;
      FUN_008bcc50();
      in_ECX[0x8b] = 0;
      in_ECX[0x8f] = 0;
      in_ECX[0x8c] = 0;
      in_ECX[0x90] = 0;
      _DAT_00b3fc7c = _DAT_00b3fc7c + -1;
      if (_DAT_00b3fc7c == 0) {
        _DAT_00b3fc78 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fc00);
      return 0;
    }
    if (in_ECX[0x98] == 2) break;
    if (in_ECX[0x98] == 3) {
      in_ECX[0x98] = 4;
      thunk_FUN_00747800();
    }
    if (uVar5 < 0x5000001) {
      cVar3 = (**(code **)(*in_ECX + 0x50))();
      if (cVar3 == '\0') break;
    }
    else {
      (**(code **)(**(int **)(in_ECX[0x7c] + in_ECX[0x9a] * 4) + 0x1c))();
    }
    in_ECX[0x9a] = in_ECX[0x9a] + 1;
    uVar1 = in_ECX[0x9a];
  }
  FUN_007135c0();
  return 0;
}



void FUN_00714680(void)

{
  FUN_004baca0(&stack0x00000004);
  return;
}



void FUN_007146b0(byte param_1)

{
  FUN_007137a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007146d0(byte param_1)

{
  FUN_00713880();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007146f0(byte param_1)

{
  FUN_00713940();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00714710(void)

{
  uint uVar1;
  undefined4 *puVar2;
  void *_Dst;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9e56;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0x3b;
    *puVar2 = &PTR_FUN_00a7e860;
    puVar2[3] = 0;
    _Dst = (void *)FUN_00401f00(0xec,uVar1);
    puVar2[2] = _Dst;
    _memset(_Dst,0,puVar2[1] * 4);
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_00a7ea74;
  }
  local_4 = 0xffffffff;
  DAT_00b3fb80 = puVar2;
  DAT_00b3fb84 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  if (DAT_00b3fb84 != (undefined4 *)0x0) {
    *DAT_00b3fb84 = &PTR__scalar_deleting_destructor__00a7e858;
    *(undefined2 *)(DAT_00b3fb84 + 2) = 0;
    *(undefined2 *)((int)DAT_00b3fb84 + 0xe) = 3;
    *(undefined2 *)((int)DAT_00b3fb84 + 10) = 0;
    *(undefined2 *)(DAT_00b3fb84 + 3) = 0;
    DAT_00b3fb84[1] = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  DAT_00b3fb84 = (undefined4 *)0x0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00714800(byte param_1)

{
  FUN_00713c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00714820(void)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  uint uVar10;
  int *unaff_FS_OFFSET;
  int iStack_2c;
  uint local_28;
  int iStack_24;
  undefined **local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  char local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9e90;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = 0x25;
  local_20 = &PTR_FUN_00a7e880;
  local_14 = 0;
  local_18 = (void *)FUN_00401f00(0x94,uVar6);
  _memset(local_18,0,local_1c * 4);
  local_10 = '\0';
  local_20 = &PTR_FUN_00a7ea94;
  uVar10 = 0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    do {
      puVar7 = (undefined4 *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1f0) + uVar10 * 4) + 4))();
      uVar3 = *puVar7;
      cVar5 = FUN_007123c0(uVar3,&iStack_2c);
      if (cVar5 == '\0') {
        FUN_00712330(uVar3,local_14);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(in_ECX + 0x1f8));
  }
  local_28 = local_14 & 0xffff;
  iVar8 = FUN_00401f00((local_14 & 0xffff) * 4,uVar6);
  uVar6 = 0;
  if (local_1c != 0) {
    do {
      if (*(int *)((int)local_18 + uVar6 * 4) != 0) {
        piVar9 = *(int **)((int)local_18 + uVar6 * 4);
        goto joined_r0x00714944;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_1c);
  }
  piVar9 = (int *)0x0;
joined_r0x00714944:
  while (piVar9 != (int *)0x0) {
    iVar4 = piVar9[1];
    uVar2 = *(ushort *)(piVar9 + 2);
    piVar9 = (int *)*piVar9;
    iStack_2c = iVar8;
    if (piVar9 == (int *)0x0) {
      uVar6 = (*(code *)local_20[1])(iVar4);
      do {
        uVar6 = uVar6 + 1;
        if (local_1c <= uVar6) {
          piVar9 = (int *)0x0;
          break;
        }
        piVar9 = *(int **)((int)local_18 + uVar6 * 4);
      } while (piVar9 == (int *)0x0);
    }
    *(int *)(iStack_2c + (uint)uVar2 * 4) = iVar4;
    iVar8 = iStack_2c;
  }
  iStack_2c = 2;
  (**(code **)(*(int *)(in_ECX + 0x220) + 8))(*(int *)(in_ECX + 0x220),&local_28,2,&iStack_2c,1);
  uVar6 = 0;
  if ((short)local_28 != 0) {
    do {
      FUN_00713720(*(undefined4 *)(iVar8 + uVar6 * 4));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (local_28 & 0xffff));
  }
  FUN_00401f20(iVar8);
  uVar6 = 0;
  if (*(int *)(in_ECX + 0x1f8) != 0) {
    do {
      puVar7 = (undefined4 *)(**(code **)(**(int **)(*(int *)(in_ECX + 0x1f0) + uVar6 * 4) + 4))();
      uVar3 = *puVar7;
      iVar8 = (*(code *)local_20[1])(uVar3);
      for (puVar7 = *(undefined4 **)(local_1c + iVar8 * 4); puVar7 != (undefined4 *)0x0;
          puVar7 = (undefined4 *)*puVar7) {
        cVar5 = (**(code **)(iStack_24 + 8))(uVar3,puVar7[1]);
        if (cVar5 != '\0') {
          local_28 = (uint)*(ushort *)(puVar7 + 2);
          break;
        }
      }
      (**(code **)(*(int *)(in_ECX + 0x220) + 8))
                (*(int *)(in_ECX + 0x220),&local_28,2,&stack0xffffffd0,1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(in_ECX + 0x1f8));
  }
  local_20 = &PTR_FUN_00a7e9fc;
  if ((local_10 != '\0') && (uVar6 = 0, local_1c != 0)) {
    do {
      puVar7 = *(undefined4 **)((int)local_18 + uVar6 * 4);
      while (puVar7 != (undefined4 *)0x0) {
        puVar1 = puVar7 + 1;
        puVar7 = (undefined4 *)*puVar7;
        FUN_00401f20(*puVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < local_1c);
  }
  local_20 = &PTR_FUN_00a7e8c8;
  local_4 = 1;
  FUN_007c2a40();
  local_4 = 0xffffffff;
  local_20 = &PTR_FUN_00a7e880;
  FUN_007c2a40();
  FUN_00401f20(local_18);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00714b20(void)

{
  int *in_ECX;
  uint uVar1;
  
  (**(code **)(*in_ECX + 0x44))();
  (**(code **)(*in_ECX + 0x38))();
  FUN_00714820();
  FUN_00713400();
  FUN_00713520();
  uVar1 = 0;
  if (in_ECX[0x7e] != 0) {
    do {
      (**(code **)(**(int **)(in_ECX[0x7c] + uVar1 * 4) + 0x28))();
      uVar1 = uVar1 + 1;
    } while (uVar1 < (uint)in_ECX[0x7e]);
  }
  (**(code **)(*in_ECX + 0x4c))();
  FUN_008bcc50();
  FUN_007c2a40();
  return 1;
}



void FUN_00714ba0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 4,4,&param_1,1);
  return;
}



void FUN_00714bf0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 4,4,&param_1,1);
  return;
}



void FUN_00714c40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}



void FUN_00714c60(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  param_1[3] = param_2[3] + in_ECX[3];
  return;
}



void FUN_00714c90(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  param_1[3] = in_ECX[3] - param_2[3];
  return;
}



void FUN_00714cc0(float *param_1)

{
  float *in_ECX;
  
  *param_1 = -*in_ECX;
  param_1[1] = -in_ECX[1];
  param_1[2] = -in_ECX[2];
  param_1[3] = -in_ECX[3];
  return;
}



void FUN_00714cf0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = ((*param_2 * *in_ECX - param_2[1] * in_ECX[1]) - param_2[2] * in_ECX[2]) -
             param_2[3] * in_ECX[3];
  param_1[1] = (param_2[3] * in_ECX[2] + param_2[1] * *in_ECX + in_ECX[1] * *param_2) -
               in_ECX[3] * param_2[2];
  param_1[2] = (param_2[1] * in_ECX[3] + param_2[2] * *in_ECX + in_ECX[2] * *param_2) -
               param_2[3] * in_ECX[1];
  param_1[3] = (in_ECX[1] * param_2[2] + param_2[3] * *in_ECX + in_ECX[3] * *param_2) -
               param_2[1] * in_ECX[2];
  return;
}



void FUN_00714d80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = -(float)param_2[1];
  param_1[2] = -(float)param_2[2];
  param_1[3] = -(float)param_2[3];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00714db0(undefined4 *param_1,float *param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = _DAT_00b3f9a4;
  if (-1.0 < *param_2) {
    if (1.0 <= *param_2) {
      fVar1 = 0.0;
    }
    else {
      fVar2 = (float10)FUN_00986130();
      fVar1 = (float)fVar2;
    }
  }
  fVar2 = (float10)FUN_00986300();
  if (0.001 <= ABS((float)fVar2)) {
    fVar1 = fVar1 / (float)fVar2;
  }
  else {
    fVar1 = 1.0;
  }
  *param_1 = 0;
  param_1[1] = fVar1 * param_2[1];
  param_1[2] = param_2[2] * fVar1;
  param_1[3] = fVar1 * param_2[3];
  return;
}



undefined4 FUN_00714e70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  float *pfVar2;
  float *pfVar3;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  uVar1 = FUN_00714cf0(local_40,param_4);
  pfVar2 = (float *)FUN_00714db0(local_20,uVar1);
  uVar1 = FUN_00714cf0(local_50,param_2);
  pfVar3 = (float *)FUN_00714db0(local_30,uVar1);
  local_6c = pfVar2[1] + pfVar3[1];
  local_68 = pfVar2[2] + pfVar3[2];
  local_64 = pfVar2[3] + pfVar3[3];
  local_70 = *pfVar2 + *pfVar3;
  uVar1 = FUN_0072f990(local_10,0xbe800000,&local_70);
  FUN_0072f9f0(local_60,uVar1);
  FUN_00714cf0(param_1,local_60);
  return param_1;
}



undefined4
FUN_00714f80(undefined4 param_1,float param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  uVar1 = FUN_0072fc00(local_20,param_2,param_4,param_5);
  uVar1 = FUN_0072fc00(local_10,param_2,param_3,param_6,uVar1);
  FUN_0072fc00(param_1,(param_2 + param_2) * (1.0 - param_2),uVar1);
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00715000(float *param_1,float *param_2)

{
  float fVar1;
  float *in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)FUN_00982c30();
  if (0.001 <= (float)fVar2) {
    fVar1 = _DAT_00b3f9a4;
    if (-1.0 < *in_ECX) {
      if (1.0 <= *in_ECX) {
        fVar1 = 0.0;
      }
      else {
        fVar3 = (float10)FUN_00986130();
        fVar1 = (float)fVar3;
      }
    }
    *param_1 = fVar1 + fVar1;
    fVar1 = 1.0 / (float)fVar2;
    *param_2 = fVar1 * in_ECX[1];
    param_2[1] = fVar1 * in_ECX[2];
    param_2[2] = fVar1 * in_ECX[3];
    return;
  }
  *param_1 = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  return;
}



void FUN_007150f0(float *param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float *in_ECX;
  uint uVar4;
  float10 fVar5;
  float *local_c [3];
  
  if (0.0 < *param_1 + param_1[4] + param_1[8]) {
    fVar5 = (float10)FUN_00982c30();
    *in_ECX = (float)fVar5 * 0.5;
    fVar3 = 0.5 / (float)fVar5;
    in_ECX[1] = fVar3 * (param_1[7] - param_1[5]);
    in_ECX[2] = (param_1[2] - param_1[6]) * fVar3;
    in_ECX[3] = (param_1[3] - param_1[1]) * fVar3;
    return;
  }
  uVar4 = (uint)(*param_1 < param_1[4]);
  if (param_1[uVar4 * 4] < param_1[8]) {
    uVar4 = 2;
  }
  iVar1 = *(int *)(&DAT_00b27120 + uVar4 * 4);
  iVar2 = *(int *)(&DAT_00b27120 + iVar1 * 4);
  fVar5 = (float10)FUN_00982c30();
  local_c[0] = in_ECX + 1;
  local_c[1] = in_ECX + 2;
  local_c[2] = in_ECX + 3;
  *local_c[uVar4] = (float)fVar5 * 0.5;
  fVar3 = 0.5 / (float)fVar5;
  *in_ECX = fVar3 * (param_1[iVar2 * 3 + iVar1] - param_1[iVar1 * 3 + iVar2]);
  *local_c[iVar1] = (param_1[uVar4 * 3 + iVar1] + param_1[iVar1 * 3 + uVar4]) * fVar3;
  *local_c[iVar2] = (param_1[uVar4 * 3 + iVar2] + param_1[iVar2 * 3 + uVar4]) * fVar3;
  return;
}



void FUN_007152a0(void)

{
  float *in_ECX;
  
  if ((ABS(in_ECX[1]) <= 1e-08) && (in_ECX[1] != 0.0)) {
    in_ECX[1] = 0.0;
  }
  if ((ABS(in_ECX[2]) < 1e-08 != (ABS(in_ECX[2]) == 1e-08)) && (in_ECX[2] != 0.0)) {
    in_ECX[2] = 0.0;
  }
  if ((ABS(in_ECX[3]) < 1e-08 != (ABS(in_ECX[3]) == 1e-08)) && (in_ECX[3] != 0.0)) {
    in_ECX[3] = 0.0;
  }
  if ((ABS(*in_ECX) < 1e-08 != (ABS(*in_ECX) == 1e-08)) && (*in_ECX != 0.0)) {
    *in_ECX = 0.0;
    return;
  }
  return;
}



void FUN_00715340(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  float10 fVar2;
  undefined1 local_10 [16];
  
  fVar2 = (float10)FUN_00982c30();
  puVar1 = (undefined4 *)FUN_0072f930(local_10,1.0 / (float)fVar2);
  *in_ECX = *puVar1;
  in_ECX[1] = puVar1[1];
  in_ECX[2] = puVar1[2];
  in_ECX[3] = puVar1[3];
  return;
}



undefined4 FUN_007153c0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  float *in_ECX;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  uVar3 = FUN_00401f00();
  FUN_006c5d40(uVar3,pcVar2 + (0x80 - (int)(param_1 + 1)),"%s: (w=%g,x=%g,y=%g,z=%g)",param_1,
               (double)*in_ECX,(double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3]);
  return uVar3;
}



void FUN_00715420(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x21c);
  param_1 = 4;
  (**(code **)(*piVar1 + 4))(*piVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_007154b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_007152a0();
  iVar2 = param_1;
  piVar1 = (int *)(param_1 + 0x220);
  param_1 = 4;
  (**(code **)(*piVar1 + 8))(*piVar1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 4,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 8,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00715540(undefined4 param_1)

{
  int in_ECX;
  
  *(ushort *)(in_ECX + 8) = *(ushort *)(in_ECX + 8) | 8;
  *(undefined4 *)(in_ECX + 0x20) = 0xff7fffff;
  if ((*(ushort *)(in_ECX + 8) & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x1c) = param_1;
  }
  return;
}



void FUN_00715570(void)

{
  int in_ECX;
  
  *(ushort *)(in_ECX + 8) = *(ushort *)(in_ECX + 8) & 0xfff7;
  *(undefined4 *)(in_ECX + 0x20) = 0xff7fffff;
  if ((*(ushort *)(in_ECX + 8) & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x1c) = 0xff7fffff;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_007155a0(float param_1)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  uint uVar4;
  int in_ECX;
  float10 fVar5;
  
  fVar3 = param_1;
  if (*(float *)(in_ECX + 0x1c) == -3.4028235e+38) {
    *(float *)(in_ECX + 0x1c) = param_1;
  }
  if (*(float *)(in_ECX + 0x20) == -3.4028235e+38) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    fVar1 = 0.0;
    if ((*(byte *)(in_ECX + 8) & 1) == 0) {
      fVar1 = param_1;
    }
  }
  else {
    fVar1 = param_1 - *(float *)(in_ECX + 0x20);
  }
  param_1 = fVar1;
  bVar2 = *(byte *)(in_ECX + 8) >> 1;
  uVar4 = bVar2 & 3;
  param_1 = *(float *)(in_ECX + 0xc) * param_1 + *(float *)(in_ECX + 0x24);
  *(float *)(in_ECX + 0x24) = param_1;
  param_1 = param_1 + *(float *)(in_ECX + 0x10);
  *(float *)(in_ECX + 0x20) = fVar3;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fca0);
  if ((((*(float *)(in_ECX + 0x18) == _DAT_00b3fc94) && (*(float *)(in_ECX + 0x14) == _DAT_00b3fc90)
       ) && (param_1 == _DAT_00b3fc8c)) && (DAT_00b27130 == uVar4)) {
    param_1 = _DAT_00b3fc88;
    goto LAB_00715800;
  }
  _DAT_00b3fc94 = *(float *)(in_ECX + 0x18);
  _DAT_00b3fc90 = *(float *)(in_ECX + 0x14);
  DAT_00b27130 = uVar4;
  _DAT_00b3fc8c = param_1;
  if ((*(float *)(in_ECX + 0x18) != -3.4028235e+38) && (*(float *)(in_ECX + 0x14) != 3.4028235e+38))
  {
    if ((bVar2 & 3) == 0) {
      fVar3 = *(float *)(in_ECX + 0x18) - *(float *)(in_ECX + 0x14);
      if (fVar3 == 0.0) {
LAB_00715746:
        param_1 = *(float *)(in_ECX + 0x14);
      }
      else {
        fVar5 = (float10)FUN_00982bfa();
        param_1 = (float)fVar5 + *(float *)(in_ECX + 0x14);
        if (param_1 < *(float *)(in_ECX + 0x14)) {
          param_1 = param_1 + fVar3;
        }
      }
    }
    else if (uVar4 == 1) {
      fVar3 = *(float *)(in_ECX + 0x18) - *(float *)(in_ECX + 0x14);
      if (fVar3 == 0.0) goto LAB_00715746;
      fVar5 = (float10)FUN_00982bfa();
      fVar1 = (float)fVar5;
      if (fVar1 < 0.0) {
        fVar1 = fVar1 + fVar3 + fVar3;
      }
      if (fVar3 < fVar1) {
        fVar1 = (fVar3 + fVar3) - fVar1;
      }
      param_1 = fVar1 + *(float *)(in_ECX + 0x14);
    }
  }
  if (param_1 <= *(float *)(in_ECX + 0x18)) {
    if (param_1 < *(float *)(in_ECX + 0x14)) {
      param_1 = *(float *)(in_ECX + 0x14);
    }
  }
  else {
    param_1 = *(float *)(in_ECX + 0x18);
  }
  if ((*(byte *)(in_ECX + 8) >> 4 & 1) != 0) {
    param_1 = *(float *)(in_ECX + 0x18) - (param_1 - *(float *)(in_ECX + 0x14));
  }
LAB_00715800:
  _DAT_00b3fc88 = param_1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b3fca0);
  return (float10)param_1;
}



ushort FUN_00715820(int param_1)

{
  float fVar1;
  float fVar2;
  ushort uVar3;
  int in_ECX;
  
  uVar3 = FUN_00700670(param_1);
  if (((char)uVar3 != '\0') && (uVar3 = *(ushort *)(in_ECX + 8), uVar3 == *(ushort *)(param_1 + 8)))
  {
    fVar1 = *(float *)(in_ECX + 0xc);
    fVar2 = *(float *)(param_1 + 0xc);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x10);
    fVar2 = *(float *)(param_1 + 0x10);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x14);
    fVar2 = *(float *)(param_1 + 0x14);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    fVar1 = *(float *)(in_ECX + 0x18);
    fVar2 = *(float *)(param_1 + 0x18);
    uVar3 = (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
            (ushort)(fVar2 == fVar1) << 0xe;
    if (fVar2 != fVar1) goto LAB_00715896;
    if (*(int *)(in_ECX + 0x30) != 0) {
      if (*(int *)(param_1 + 0x30) == 0) goto LAB_00715896;
      if (*(int *)(in_ECX + 0x30) != 0) goto LAB_0071588f;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
LAB_0071588f:
      return CONCAT11((char)(uVar3 >> 8),1);
    }
  }
LAB_00715896:
  return uVar3 & 0xff00;
}



undefined4 FUN_007158a0(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0xc - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 == 0) {
    FUN_006c5d40(uVar3,pcVar2,"%s = APP_TIME",param_1);
  }
  else if (param_2 == 1) {
    FUN_006c5d40(uVar3,pcVar2,"%s = APP_INIT",param_1);
    return uVar3;
  }
  return uVar3;
}



undefined4 FUN_00715910(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0xb - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  if (param_2 == 0) {
    FUN_006c5d40(uVar3,pcVar2,"%s = LOOP",param_1);
  }
  else {
    if (param_2 == 1) {
      FUN_006c5d40(uVar3,pcVar2,"%s = REVERSE",param_1);
      return uVar3;
    }
    if (param_2 == 2) {
      FUN_006c5d40(uVar3,pcVar2,"%s = CLAMP",param_1);
      return uVar3;
    }
  }
  return uVar3;
}



void FUN_00715990(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ec3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a7eb24;
  in_ECX[0xd] = 0;
  in_ECX[3] = 0x3f800000;
  *(undefined2 *)(in_ECX + 2) = 0xc;
  local_4 = 1;
  in_ECX[4] = 0;
  in_ECX[5] = 0x7f7fffff;
  in_ECX[6] = 0xff7fffff;
  in_ECX[7] = 0xff7fffff;
  in_ECX[8] = 0xff7fffff;
  in_ECX[9] = 0;
  in_ECX[0xc] = 0;
  in_ECX[10] = 0xff7fffff;
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  *(undefined1 *)(in_ECX + 0xb) = 1;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00715a70(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009c9ec3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7eb24;
  puVar1 = (undefined4 *)in_ECX[0xd];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0055ace0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00715b20(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = 0;
  for (; in_ECX != 0; in_ECX = *(int *)(in_ECX + 0x34)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



void FUN_00715b40(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    (**(code **)(*piVar1 + 0x4c))(0xff7fffff);
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_00715bbe;
    if (puVar2 == &DAT_00b3fa80) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  puVar2 = (undefined4 *)param_1[0x27];
  while (puVar2 != (undefined4 *)0x0) {
    iVar3 = puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
      FUN_00715b40(iVar3);
    }
  }
LAB_00715bbe:
  iVar3 = (**(code **)(*param_1 + 8))();
  if (iVar3 != 0) {
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      if (*(short *)((int)param_1 + 0xb6) == 0) goto LAB_00715bf2;
      do {
        iVar3 = *(int *)(param_1[0x2c] + uVar4 * 4);
        if (iVar3 != 0) {
          FUN_00715b40(iVar3);
        }
LAB_00715bf2:
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 0xb6));
    }
  }
  return;
}



void FUN_00715c10(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
    (**(code **)(*piVar1 + 0x4c))(param_2);
  }
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))();
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) goto LAB_00715c86;
    if (puVar2 == &DAT_00b3fa80) break;
    puVar2 = (undefined4 *)puVar2[1];
  }
  puVar2 = (undefined4 *)param_1[0x27];
  while (puVar2 != (undefined4 *)0x0) {
    iVar3 = puVar2[2];
    puVar2 = (undefined4 *)*puVar2;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
      FUN_00715c10(iVar3,param_2);
    }
  }
LAB_00715c86:
  iVar3 = (**(code **)(*param_1 + 8))();
  if (iVar3 != 0) {
    uVar4 = 0;
    if (*(short *)((int)param_1 + 0xb6) != 0) {
      if (*(short *)((int)param_1 + 0xb6) == 0) goto LAB_00715cc2;
      do {
        iVar3 = *(int *)(param_1[0x2c] + uVar4 * 4);
        if (iVar3 != 0) {
          FUN_00715c10(iVar3,param_2);
        }
LAB_00715cc2:
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)param_1 + 0xb6));
    }
  }
  return;
}



void FUN_00715ce0(int param_1)

{
  int *piVar1;
  char cVar2;
  LONG LVar3;
  int *in_ECX;
  
  if (in_ECX[0xc] != param_1) {
    InterlockedIncrement(in_ECX + 1);
    if ((in_ECX[0xc] != 0) && (*(int *)(in_ECX[0xc] + 0xc) != 0)) {
      FUN_006ffe90(in_ECX);
    }
    in_ECX[0xc] = param_1;
    if (param_1 != 0) {
      for (piVar1 = *(int **)(param_1 + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
        if (piVar1 == in_ECX) {
          return;
        }
      }
      FUN_006ffe60(in_ECX);
      cVar2 = (**(code **)(*in_ECX + 0x60))();
      if (cVar2 != '\0') {
        *(ushort *)(*(int *)(in_ECX[0xc] + 0xb4) + 0x2e) =
             *(ushort *)(*(int *)(in_ECX[0xc] + 0xb4) + 0x2e) & 0xfff | 0x8000;
      }
    }
    LVar3 = InterlockedDecrement(in_ECX + 1);
    if (LVar3 == 0) {
      (**(code **)*in_ECX)(1);
    }
  }
  return;
}



void FUN_00715d80(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  
  piVar1 = param_1;
  FUN_00700770(param_1,param_2);
  *(undefined2 *)(piVar1 + 2) = *(undefined2 *)(in_ECX + 8);
  piVar1[3] = *(int *)(in_ECX + 0xc);
  piVar1[4] = *(int *)(in_ECX + 0x10);
  piVar1[5] = *(int *)(in_ECX + 0x14);
  piVar1[6] = *(int *)(in_ECX + 0x18);
  piVar1[7] = *(int *)(in_ECX + 0x1c);
  piVar1[8] = *(int *)(in_ECX + 0x20);
  piVar1[9] = *(int *)(in_ECX + 0x24);
  if (*(int *)(in_ECX + 0x30) != 0) {
    cVar3 = FUN_0055e000(*(int *)(in_ECX + 0x30),&param_1);
    piVar2 = param_1;
    if (cVar3 != '\0') {
      piVar4 = *(int **)(in_ECX + 0x30);
      param_1 = (int *)(**(code **)(*param_1 + 4))();
      piVar4 = (int *)(**(code **)(*piVar4 + 4))();
      if (piVar4 == param_1) {
        piVar1[0xc] = (int)piVar2;
        goto LAB_00715e12;
      }
    }
    piVar1[0xc] = 0;
  }
LAB_00715e12:
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    uVar5 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))(param_2);
    FUN_0075fa90(uVar5);
  }
  return;
}



void FUN_00715e40(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00700750(param_1);
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x38))(param_1);
  }
  return;
}



void FUN_00715e70(int param_1)

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



undefined1 FUN_00715f10(undefined4 param_1)

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



void FUN_00715f40(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = param_1;
  FUN_007008a0(param_1);
  FUN_00712a20();
  puVar1 = (ushort *)(in_ECX + 8);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),puVar1,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x10,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x14,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x18,4,&param_1,1);
  FUN_00712a20();
  if (*(uint *)(iVar2 + 0xd8) < 0xa000101) {
    *puVar1 = (*puVar1 & 0xfff0) * 2 | *puVar1 & 0xf;
  }
  if (*(uint *)(iVar2 + 0xd8) < 0xa000103) {
    *(ushort *)(iVar2 + 0x25a) = *puVar1;
    *puVar1 = *puVar1 & 0x1f;
  }
  if (*(uint *)(iVar2 + 0xd8) < 0xa01006d) {
    *puVar1 = *puVar1 & 0xffdf;
  }
  return;
}



void FUN_00716050(int *param_1)

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



void FUN_00716140(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  undefined4 local_4;
  
  local_4 = FUN_0070f910(DAT_00b3fc98);
  iVar1 = param_1;
  uVar2 = (uint)*(ushort *)(param_1 + 10);
  if (*(ushort *)(param_1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(param_1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&local_4);
  param_1 = FUN_0070fb90("m_fFrequency",*(undefined4 *)(in_ECX + 0xc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fPhase",*(undefined4 *)(in_ECX + 0x10));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fLoKeyTime",*(undefined4 *)(in_ECX + 0x14));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fHiKeyTime",*(undefined4 *)(in_ECX + 0x18));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fStartTime",*(undefined4 *)(in_ECX + 0x1c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fLastTime",*(undefined4 *)(in_ECX + 0x20));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pTarget",*(undefined4 *)(in_ECX + 0x30));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_007158a0("anim type",*(byte *)(in_ECX + 8) & 1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00715910("cycle type",*(byte *)(in_ECX + 8) >> 1 & 3);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 8) >> 3) & 0xffffff01;
  param_1 = FUN_0070f950("Active",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = CONCAT31(param_1._1_3_,*(byte *)(in_ECX + 8) >> 4) & 0xffffff01;
  param_1 = FUN_0070f950("Play Backwards",param_1);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00716460(int *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  FUN_00700750(param_1);
  FUN_0055e000(in_ECX,&param_1);
  piVar1 = param_1;
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_0055e000(*(int *)(in_ECX + 0x1c),&param_1);
    piVar1[7] = (int)param_1;
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar4 = 0;
    if (*(uint *)(in_ECX + 0xc) != 0) {
      piVar5 = *(int **)(in_ECX + 0x10);
      do {
        if (*piVar5 != 0) {
          param_1 = (int *)(*(int **)(in_ECX + 0x10))[uVar4];
          goto joined_r0x007164cd;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar4 < *(uint *)(in_ECX + 0xc));
    }
    param_1 = (int *)0x0;
joined_r0x007164cd:
    while (param_1 != (int *)0x0) {
      FUN_00452600(&param_1,&local_c,&local_8);
      iVar2 = local_c;
      if (((local_c != 0) && (local_8 != 0)) &&
         (cVar3 = FUN_0055e000(local_8,&local_4), cVar3 != '\0')) {
        (**(code **)(*piVar1 + 0x50))(iVar2,local_4);
      }
    }
  }
  return;
}



undefined4 FUN_00716530(int *param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  piVar1 = param_1;
  cVar2 = FUN_00731e80(param_1);
  if ((cVar2 != '\0') && (piVar1[5] == *(int *)(in_ECX + 0x14))) {
    if (*(int *)(in_ECX + 0x14) == 0) {
      return 1;
    }
    param_1 = (int *)FUN_006a9030();
    do {
      if (param_1 == (int *)0x0) {
        return 1;
      }
      FUN_00452600(&param_1,&local_8,local_4);
      iVar3 = (**(code **)(*piVar1 + 0x4c))(local_8);
    } while (iVar3 != 0);
  }
  return 0;
}



void FUN_007165b0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_1[2] != 0) {
      (**(code **)(*param_2 + 0x50))(param_1[2],param_1);
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_007165f9;
        uVar2 = 0;
        while( true ) {
          FUN_007165b0(uVar2,param_2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_007165f9:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_00716620(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if ((param_1 != (int *)0x0) && (param_2 != (int *)0x0)) {
    if (param_1[2] != 0) {
      (**(code **)(*param_2 + 0x50))(param_1[2],0);
    }
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_0071666a;
        uVar2 = 0;
        while( true ) {
          FUN_00716620(uVar2,param_2);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar3) break;
LAB_0071666a:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
  return;
}



void FUN_00716690(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    FUN_007c2a40();
    FUN_007165b0(*(undefined4 *)(in_ECX + 0x1c));
  }
  return;
}



void FUN_00716760(int *param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  thunk_FUN_0068f970(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0x1c));
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&stack0xfffffff0,4,&stack0x00000000,1);
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar1 = 0;
    if (*(uint *)(in_ECX + 0xc) != 0) {
      piVar3 = *(int **)(in_ECX + 0x10);
      do {
        if (*piVar3 != 0) {
          iVar2 = (*(int **)(in_ECX + 0x10))[uVar1];
          goto joined_r0x007167da;
        }
        uVar1 = uVar1 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar1 < *(uint *)(in_ECX + 0xc));
    }
    iVar2 = 0;
joined_r0x007167da:
    while (iVar2 != 0) {
      FUN_00452600(&stack0x00000000,&uStack_c,auStack_8);
      FUN_00713720(uStack_c);
      (**(code **)(*param_1 + 0x2c))(auStack_8[0]);
    }
  }
  return;
}



void FUN_00716830(char *param_1)

{
  ushort uVar1;
  int iVar2;
  int in_ECX;
  char *pcVar3;
  int *piVar4;
  uint uVar5;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  iVar2 = (int)param_1;
  FUN_0072fd30(param_1);
  param_1 = (char *)FUN_0070f910(DAT_00b3fcb8);
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  param_1 = (char *)FUN_00401f00(0x60);
  pcVar3 = *(char **)(*(int *)(in_ECX + 0x1c) + 8);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "UNKNOWN";
  }
  _sprintf(param_1,"m_pkScene = %s",pcVar3);
  uVar5 = (uint)*(ushort *)(iVar2 + 10);
  if (*(ushort *)(iVar2 + 8) <= uVar5) {
    FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
  }
  FUN_0042bb90(uVar5,&param_1);
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar5 = 0;
    if (*(uint *)(in_ECX + 0xc) != 0) {
      piVar4 = *(int **)(in_ECX + 0x10);
      do {
        if (*piVar4 != 0) {
          param_1 = (char *)(*(int **)(in_ECX + 0x10))[uVar5];
          goto joined_r0x0071690b;
        }
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar5 < *(uint *)(in_ECX + 0xc));
    }
    param_1 = (char *)0x0;
joined_r0x0071690b:
    while (param_1 != (char *)0x0) {
      FUN_00452600(&param_1,&local_8,local_4);
      pcVar3 = (char *)FUN_00401f00(0x60);
      _sprintf(pcVar3,"%s",local_8);
      uVar1 = *(ushort *)(iVar2 + 10);
      uVar5 = (uint)uVar1;
      if (*(ushort *)(iVar2 + 8) <= uVar5) {
        FUN_004e4a10(*(ushort *)(iVar2 + 0xe) + uVar5);
      }
      if (uVar5 < *(ushort *)(iVar2 + 10)) {
        if (pcVar3 == (char *)0x0) {
          if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) != 0) {
            *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar2 + 4) + uVar5 * 4) == 0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      else {
        *(ushort *)(iVar2 + 10) = uVar1 + 1;
        if (pcVar3 != (char *)0x0) {
          *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 1;
        }
      }
      *(char **)(*(int *)(iVar2 + 4) + uVar5 * 4) = pcVar3;
    }
  }
  return;
}



undefined4 FUN_007169c0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x20,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_006c5360(0);
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700770(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_00716a40(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0x20,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_006c5360(0);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00716ac0(int param_1,undefined4 param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *_Dst;
  int in_ECX;
  
  FUN_007214a0(param_1,param_2);
  pcVar3 = *(char **)(in_ECX + 0xc);
  if (pcVar3 != (char *)0x0) {
    pcVar1 = pcVar3 + 1;
    do {
      cVar2 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
    _Dst = (char *)FUN_00401f00(pcVar3 + (1 - (int)pcVar1));
    *(char **)(param_1 + 0xc) = _Dst;
    _strcpy_s(_Dst,(rsize_t)(pcVar3 + (1 - (int)pcVar1)),*(char **)(in_ECX + 0xc));
    return;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



undefined4 * FUN_00716b20(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7ec64;
    puVar2[3] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



bool thunk_FUN_00731e60(undefined4 param_1)

{
  char cVar1;
  
  cVar1 = FUN_00700650(param_1);
  return cVar1 != '\0';
}



void FUN_00716c50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7ec64;
  FUN_00401f20(in_ECX[3]);
  in_ECX[3] = 0;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00716c90(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00721350();
    *puVar2 = &PTR_FUN_00a7ec64;
    puVar2[3] = 0;
  }
  local_4 = 0xffffffff;
  FUN_00716ac0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00716db0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = DAT_00b3f9a8;
  in_ECX[1] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[3] = 0;
  in_ECX[2] = uVar1;
  return;
}



void FUN_00716de0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  uVar1 = param_1[2];
  in_ECX[3] = param_2;
  in_ECX[2] = uVar1;
  return;
}



void FUN_00716e00(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
  return;
}



undefined4 FUN_00716e40(char *param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  float *in_ECX;
  
  pcVar1 = param_1 + 1;
  do {
    cVar2 = *param_1;
    param_1 = param_1 + 1;
  } while (cVar2 != '\0');
  uVar3 = FUN_00401f00();
  FUN_006c5d40(uVar3,param_1 + (0x38 - (int)pcVar1),"(%g,%g,%g), %g",(double)*in_ECX,
               (double)in_ECX[1],(double)in_ECX[2],(double)in_ECX[3]);
  return uVar3;
}



void FUN_00716ea0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00709430(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00716ee0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_007094a0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xc,4,&param_1,1);
  return;
}



void FUN_00716f20(undefined *param_1)

{
  PTR_FUN_00b27164 = param_1;
  return;
}



void FUN_00716f30(undefined *param_1)

{
  PTR_FUN_00b27168 = param_1;
  return;
}



void FUN_00716f40(ushort param_1,float *param_2,float *param_3,float *param_4)

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
  uint uVar13;
  
  for (uVar13 = (uint)param_1; uVar13 != 0; uVar13 = uVar13 - 1) {
    fVar1 = *param_2;
    fVar2 = param_4[3];
    fVar3 = param_2[1];
    fVar4 = param_4[4];
    fVar5 = param_2[2];
    fVar6 = param_4[5];
    *param_3 = param_2[1] * param_4[1] + *param_2 * *param_4 + param_2[2] * param_4[2];
    fVar7 = *param_2;
    fVar8 = param_4[6];
    fVar9 = param_2[1];
    fVar10 = param_4[7];
    fVar11 = param_2[2];
    fVar12 = param_4[8];
    param_3[1] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
    param_2 = param_2 + 3;
    param_3[2] = fVar11 * fVar12 + fVar9 * fVar10 + fVar7 * fVar8;
    param_3 = param_3 + 3;
  }
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00716fc0(uint param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar1 = param_4[9];
  fVar2 = param_4[10];
  fVar3 = param_4[0xb];
  fVar4 = param_4[0xc];
  fVar5 = *param_4;
  fVar6 = param_4[1];
  fVar7 = param_4[2];
  fVar8 = param_4[3];
  fVar9 = param_4[4];
  fVar10 = param_4[5];
  fVar11 = param_4[6];
  fVar12 = param_4[7];
  fVar13 = param_4[8];
  for (param_1 = param_1 & 0xffff; param_1 != 0; param_1 = param_1 - 1) {
    fVar14 = *param_2;
    fVar15 = param_2[1];
    fVar16 = param_2[2];
    fVar17 = *param_2;
    fVar18 = param_2[1];
    fVar19 = param_2[2];
    *param_3 = param_2[1] * fVar6 * fVar4 + *param_2 * fVar4 * fVar5 + param_2[2] * fVar7 * fVar4 +
               fVar1;
    param_3[1] = fVar15 * fVar9 * fVar4 + fVar14 * fVar8 * fVar4 + fVar16 * fVar10 * fVar4 + fVar2;
    param_2 = param_2 + 3;
    param_3[2] = fVar12 * fVar4 * fVar18 + fVar11 * fVar4 * fVar17 + fVar4 * fVar13 * fVar19 + fVar3
    ;
    param_3 = param_3 + 3;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007171b7) */
/* WARNING: Removing unreachable block (ram,0x00717116) */

undefined8 FUN_007170d0(void)

{
  int iVar1;
  uint *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [16];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_14;
  DAT_00b3fccc = 1;
  puVar2 = (uint *)cpuid(0x80000000);
  puVar3 = (undefined1 *)(*puVar2 & 0x80000000);
  if (puVar3 != (undefined1 *)0x0) {
    if (puVar3 == (undefined1 *)0x0) {
      puVar2 = (uint *)cpuid_basic_info(0);
    }
    else if (puVar3 == (undefined1 *)0x1) {
      puVar2 = (uint *)cpuid_Version_info(1);
    }
    else if (puVar3 == (undefined1 *)0x2) {
      puVar2 = (uint *)cpuid_cache_tlb_info(2);
    }
    else if (puVar3 == (undefined1 *)0x3) {
      puVar2 = (uint *)cpuid_serial_info(3);
    }
    else if (puVar3 == (undefined1 *)0x4) {
      puVar2 = (uint *)cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (puVar3 == (undefined1 *)0x5) {
      puVar2 = (uint *)cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (puVar3 == (undefined1 *)0x6) {
      puVar2 = (uint *)cpuid_Thermal_Power_Management_info(6);
    }
    else if (puVar3 == (undefined1 *)0x7) {
      puVar2 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (puVar3 == (undefined1 *)0x9) {
      puVar2 = (uint *)cpuid_Direct_Cache_Access_info(9);
    }
    else if (puVar3 == (undefined1 *)0xa) {
      puVar2 = (uint *)cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (puVar3 == (undefined1 *)0xb) {
      puVar2 = (uint *)cpuid_Extended_Topology_info(0xb);
    }
    else if (puVar3 == (undefined1 *)0xd) {
      puVar2 = (uint *)cpuid_Processor_Extended_States_info(0xd);
    }
    else if (puVar3 == (undefined1 *)0xf) {
      puVar2 = (uint *)cpuid_Quality_of_Service_info(0xf);
    }
    else if (puVar3 == &DAT_80000002) {
      puVar2 = (uint *)cpuid_brand_part1_info(0x80000002);
    }
    else if (puVar3 == (undefined1 *)0x80000003) {
      puVar2 = (uint *)cpuid_brand_part2_info(0x80000003);
    }
    else if (puVar3 == (undefined1 *)0x80000004) {
      puVar2 = (uint *)cpuid_brand_part3_info(0x80000004);
    }
    else {
      puVar2 = (uint *)cpuid(puVar3);
    }
    uVar4 = *puVar2;
    uVar5 = puVar2[2];
    if ((uVar4 & 0x80000000) != 0) {
      DAT_00b3fcc8 = 6;
      DAT_00b3fcd0 = uVar4;
      goto LAB_00717261;
    }
  }
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = *puVar2;
  DAT_00b3fcd0 = puVar2[2];
  uVar5 = DAT_00b3fcd0 & 0x800000;
  if (uVar5 == 0) {
    uVar4 = DAT_00b3fcd0 & 0x8000;
    if (uVar4 == 0) {
      DAT_00b3fcc8 = 1;
    }
    else {
      DAT_00b3fcc8 = 3;
    }
  }
  else if ((DAT_00b3fcd0 & 0x8000) == 0) {
    DAT_00b3fcc8 = 2;
  }
  else {
    DAT_00b3fcc8 = 4;
    uVar5 = DAT_00b3fcd0 & 0x2000000;
    if (uVar5 != 0) {
      DAT_00b3fcc8 = 5;
    }
  }
LAB_00717261:
  *unaff_FS_OFFSET = iVar1;
  return CONCAT44(uVar5,uVar4);
}



void FUN_00717280(ushort param_1,float *param_2,float *param_3,float *param_4)

{
  uint local_c;
  
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *param_3 = (param_2[2] * param_4[2] + param_2[1] * param_4[1] + *param_4 * *param_2) *
               param_4[0xc] + param_4[9];
    param_3[1] = (param_2[2] * param_4[5] + param_2[1] * param_4[4] + param_4[3] * *param_2) *
                 param_4[0xc] + param_4[10];
    param_3[2] = (param_2[2] * param_4[8] + param_2[1] * param_4[7] + param_4[6] * *param_2) *
                 param_4[0xc] + param_4[0xb];
    param_2 = param_2 + 3;
    param_3 = param_3 + 3;
  }
  return;
}



void FUN_00717370(ushort param_1,float *param_2,float *param_3,float *param_4)

{
  uint local_c;
  
  for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
    *param_3 = param_2[2] * param_4[2] + param_2[1] * param_4[1] + *param_4 * *param_2;
    param_3[1] = param_2[2] * param_4[5] + param_2[1] * param_4[4] + param_4[3] * *param_2;
    param_3[2] = param_2[2] * param_4[8] + param_2[1] * param_4[7] + param_4[6] * *param_2;
    param_2 = param_2 + 3;
    param_3 = param_3 + 3;
  }
  return;
}



void FUN_00717440(void)

{
  if (DAT_00b3fccc == '\0') {
    FUN_007170d0();
  }
  FUN_00716f30(FUN_00717280);
  FUN_00716f20(FUN_00717370);
  if ((0 < DAT_00b3fcc8) && (DAT_00b3fcc8 < 7)) {
    FUN_00716f30(FUN_00716fc0);
    FUN_00716f20(FUN_00716f40);
  }
  return;
}



void FUN_007174b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0071fb40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  }
  local_4 = 0xffffffff;
  FUN_00722690(uVar3);
  *in_ECX = &PTR_FUN_00a7ed5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00717570(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00722690(param_1);
  *in_ECX = &PTR_FUN_00a7ed5c;
  return;
}



void FUN_00717590(void)

{
  undefined4 *in_ECX;
  
  FUN_007226c0();
  *in_ECX = &PTR_FUN_00a7ed5c;
  return;
}



void thunk_FUN_00723020(int *param_1)

{
  int in_ECX;
  
  (**(code **)(*param_1 + 0x8c))(*(undefined4 *)(in_ECX + 0xb4));
  FUN_00707e90(param_1,param_1);
  return;
}



undefined4 * FUN_007175c0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007226c0();
    *puVar2 = &PTR_FUN_00a7ed5c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_00723590(void)

{
  thunk_FUN_00723590();
  return;
}



void FUN_00717690(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x160))();
  }
  return;
}



void FUN_007176d0(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x168))();
  }
  return;
}



undefined4 * FUN_00717710(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007226c0();
    *puVar2 = &PTR_FUN_00a7ed5c;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00717790(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00722750(param_1);
  param_1 = FUN_0070f910(DAT_00b3fcd4);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007177e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00732a30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  }
  local_4 = 0xffffffff;
  FUN_007227b0(uVar3);
  *in_ECX = &PTR_FUN_00a7ee0c;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00717890(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00722810();
    *puVar2 = &PTR_FUN_00a7ee0c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_007234b0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  iStack_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&iStack_c;
  FUN_00707f00(param_1);
  FUN_00712a20(uVar2);
  FUN_00712a20();
  if (0x5000014 < *(uint *)(uVar1 + 0xd8)) {
    param_1 = param_1 & 0xffffff00;
    uStack_14 = 1;
    (**(code **)(*(int *)(uVar1 + 0x21c) + 4))(*(int *)(uVar1 + 0x21c),&param_1,1,&uStack_14,1);
    if ((char)param_1 != '\0') {
      iStack_10 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iStack_10 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007385b0();
      }
      uStack_4 = 0xffffffff;
      FUN_0075fa90(uVar3);
      FUN_007386e0(uVar1);
    }
  }
  *unaff_FS_OFFSET = iStack_c;
  return;
}



void thunk_FUN_00723350(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007081b0(param_1);
  puVar2 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0xb4);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xb4) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = (undefined4 *)FUN_007124a0();
  puVar1 = *(undefined4 **)(in_ECX + 0xb8);
  if (puVar1 != puVar2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xb8) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



undefined1 thunk_FUN_00723400(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00707af0(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0xb4) + 0x24))(param_1);
  if (*(int **)(in_ECX + 0xb8) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xb8) + 0x24))(param_1);
  }
  return 1;
}



void thunk_FUN_00723590(int *param_1)

{
  int iVar1;
  uint in_ECX;
  uint uStack_4;
  
  uStack_4 = in_ECX;
  FUN_00708330(param_1);
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0xb4));
  (**(code **)(*param_1 + 0x2c))(*(undefined4 *)(in_ECX + 0xb8));
  uStack_4 = uStack_4 & 0xffffff00;
  if (*(int *)(in_ECX + 0xbc) != 0) {
    iVar1 = FUN_00452a60();
    if (iVar1 != 0) {
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
    }
  }
  (**(code **)(param_1[0x88] + 8))(param_1[0x88],&uStack_4,1,&stack0xfffffff4,1);
  if ((char)uStack_4 != '\0') {
    FUN_00738720(param_1);
  }
  return;
}



void FUN_00717930(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x174))();
  }
  return;
}



undefined4 * FUN_00717970(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00722810();
    *puVar2 = &PTR_FUN_00a7ee0c;
  }
  local_4 = 0xffffffff;
  FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_007179f0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00723620(param_1);
  param_1 = FUN_0070f910(DAT_00b3fcdc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00717a40(float *param_1,float *param_2)

{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *in_ECX;
  float *pfVar3;
  float10 fVar4;
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
  float local_10;
  float local_c;
  float local_8;
  
  local_5c = *param_2;
  local_58 = param_2[3];
  local_70 = param_2[10];
  local_54 = param_2[6];
  local_74 = param_2[9];
  local_44 = param_2[1];
  local_6c = param_2[0xb];
  local_40 = param_2[4];
  local_3c = param_2[7];
  local_50 = param_2[2];
  local_4c = param_2[5];
  local_48 = param_2[8];
  local_30 = param_1[4];
  local_38 = local_30 * local_5c;
  local_34 = local_58 * local_30;
  local_30 = local_30 * local_54;
  local_68 = local_74 + local_38;
  local_64 = local_70 + local_34;
  local_60 = local_6c + local_30;
  puVar1 = (undefined4 *)FUN_00716e00(&local_5c,&local_68);
  *in_ECX = *puVar1;
  in_ECX[1] = puVar1[1];
  in_ECX[2] = puVar1[2];
  in_ECX[3] = puVar1[3];
  local_30 = param_1[5];
  local_38 = local_5c * local_30;
  local_34 = local_58 * local_30;
  local_30 = local_54 * local_30;
  local_68 = local_38 + local_74;
  local_64 = local_34 + local_70;
  local_60 = local_30 + local_6c;
  local_10 = -local_5c;
  local_c = -local_58;
  local_8 = -local_54;
  local_2c = local_68;
  local_28 = local_64;
  local_24 = local_60;
  puVar1 = (undefined4 *)FUN_00716e00(&local_10,&local_68);
  in_ECX[4] = *puVar1;
  in_ECX[5] = puVar1[1];
  in_ECX[6] = puVar1[2];
  in_ECX[7] = puVar1[3];
  if (*(char *)(param_1 + 6) == '\0') {
    fVar4 = (float10)FUN_00982c30();
    local_18 = 1.0 / (float)fVar4;
    local_24 = local_18 * -*param_1;
    local_20 = local_50 * local_18;
    local_1c = local_4c * local_18;
    local_18 = local_18 * local_48;
    local_2c = local_24 * local_5c;
    local_28 = local_58 * local_24;
    local_24 = local_24 * local_54;
    local_38 = local_2c + local_20;
    local_34 = local_28 + local_1c;
    local_30 = local_24 + local_18;
    puVar1 = (undefined4 *)FUN_00716e00(&local_38,&local_74);
    in_ECX[8] = *puVar1;
    in_ECX[9] = puVar1[1];
    in_ECX[10] = puVar1[2];
    in_ECX[0xb] = puVar1[3];
    fVar4 = (float10)FUN_00982c30();
    local_18 = (1.0 / (float)fVar4) * param_1[1];
    local_24 = -(1.0 / (float)fVar4);
    local_2c = local_24 * local_50;
    local_28 = local_4c * local_24;
    local_24 = local_24 * local_48;
    local_20 = local_18 * local_5c;
    local_1c = local_58 * local_18;
    local_18 = local_18 * local_54;
    local_38 = local_20 + local_2c;
    local_34 = local_1c + local_28;
    local_30 = local_18 + local_24;
    local_10 = local_38;
    local_c = local_34;
    local_8 = local_30;
    puVar1 = (undefined4 *)FUN_00716e00(&local_38,&local_74);
    in_ECX[0xc] = *puVar1;
    in_ECX[0xd] = puVar1[1];
    in_ECX[0xe] = puVar1[2];
    in_ECX[0xf] = puVar1[3];
    fVar4 = (float10)FUN_00982c30();
    local_8 = (1.0 / (float)fVar4) * param_1[2];
    local_18 = -(1.0 / (float)fVar4);
    local_20 = local_18 * local_44;
    local_1c = local_40 * local_18;
    local_18 = local_18 * local_3c;
    local_10 = local_8 * local_5c;
    local_c = local_58 * local_8;
    local_8 = local_8 * local_54;
    local_38 = local_10 + local_20;
    local_34 = local_c + local_1c;
    local_30 = local_8 + local_18;
    local_2c = local_38;
    local_28 = local_34;
    local_24 = local_30;
    puVar1 = (undefined4 *)FUN_00716e00(&local_38,&local_74);
    in_ECX[0x10] = *puVar1;
    in_ECX[0x11] = puVar1[1];
    in_ECX[0x12] = puVar1[2];
    in_ECX[0x13] = puVar1[3];
    fVar4 = (float10)FUN_00982c30();
    local_18 = 1.0 / (float)fVar4;
    local_8 = local_18 * -param_1[3];
    local_20 = local_44 * local_18;
    local_1c = local_40 * local_18;
    local_18 = local_18 * local_3c;
    local_10 = local_8 * local_5c;
    local_c = local_58 * local_8;
    local_8 = local_8 * local_54;
    local_38 = local_10 + local_20;
    local_34 = local_c + local_1c;
    pfVar2 = &local_74;
    local_30 = local_8 + local_18;
    pfVar3 = &local_38;
    local_2c = local_38;
    local_28 = local_34;
    local_24 = local_30;
  }
  else {
    local_24 = *param_1;
    local_2c = local_24 * local_50;
    local_28 = local_4c * local_24;
    local_24 = local_24 * local_48;
    local_68 = local_2c + local_74;
    local_64 = local_28 + local_70;
    local_60 = local_24 + local_6c;
    local_38 = local_68;
    local_34 = local_64;
    local_30 = local_60;
    puVar1 = (undefined4 *)FUN_00716e00(&local_50,&local_68);
    in_ECX[8] = *puVar1;
    in_ECX[9] = puVar1[1];
    in_ECX[10] = puVar1[2];
    in_ECX[0xb] = puVar1[3];
    local_24 = param_1[1];
    local_2c = local_50 * local_24;
    local_28 = local_4c * local_24;
    local_24 = local_48 * local_24;
    local_68 = local_2c + local_74;
    local_64 = local_28 + local_70;
    local_60 = local_24 + local_6c;
    local_10 = -local_50;
    local_c = -local_4c;
    local_8 = -local_48;
    local_38 = local_68;
    local_34 = local_64;
    local_30 = local_60;
    puVar1 = (undefined4 *)FUN_00716e00(&local_10,&local_68);
    in_ECX[0xc] = *puVar1;
    in_ECX[0xd] = puVar1[1];
    in_ECX[0xe] = puVar1[2];
    in_ECX[0xf] = puVar1[3];
    local_24 = param_1[2];
    local_2c = local_44 * local_24;
    local_28 = local_40 * local_24;
    local_24 = local_3c * local_24;
    local_68 = local_2c + local_74;
    local_64 = local_28 + local_70;
    local_60 = local_24 + local_6c;
    local_10 = -local_44;
    local_c = -local_40;
    local_8 = -local_3c;
    local_38 = local_68;
    local_34 = local_64;
    local_30 = local_60;
    puVar1 = (undefined4 *)FUN_00716e00(&local_10,&local_68);
    in_ECX[0x10] = *puVar1;
    in_ECX[0x11] = puVar1[1];
    in_ECX[0x12] = puVar1[2];
    in_ECX[0x13] = puVar1[3];
    local_24 = param_1[3];
    local_2c = local_24 * local_44;
    local_28 = local_40 * local_24;
    local_24 = local_24 * local_3c;
    local_68 = local_2c + local_74;
    local_64 = local_28 + local_70;
    pfVar2 = &local_68;
    local_60 = local_24 + local_6c;
    pfVar3 = &local_44;
    local_38 = local_68;
    local_34 = local_64;
    local_30 = local_60;
  }
  puVar1 = (undefined4 *)FUN_00716e00(pfVar3,pfVar2);
  in_ECX[0x14] = *puVar1;
  in_ECX[0x15] = puVar1[1];
  in_ECX[0x16] = puVar1[2];
  in_ECX[0x17] = puVar1[3];
  return;
}



void FUN_00718200(int param_1)

{
  FUN_00717a40(param_1 + 0xec,param_1 + 100);
  return;
}



undefined4 FUN_007182a0(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_ONE",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_ZERO",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_SRCCOLOR",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_INVSRCCOLOR",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_DESTCOLOR",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_INVDESTCOLOR",param_1);
    return uVar3;
  case 6:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_SRCALPHA",param_1);
    return uVar3;
  case 7:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_INVSRCALPHA",param_1);
    return uVar3;
  case 8:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_DESTALPHA",param_1);
    return uVar3;
  case 9:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_INVDESTALPHA",param_1);
    return uVar3;
  case 10:
    FUN_006c5d40(uVar3,pcVar2,"%s = ALPHA_SRCALPHASAT",param_1);
  }
  return uVar3;
}



undefined4 FUN_00718400(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_ALWAYS",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_LESS",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_EQUAL",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_LESSEQUAL",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_GREATER",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_NOTEQUAL",param_1);
    return uVar3;
  case 6:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_GREATEREQUAL",param_1);
    return uVar3;
  case 7:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_NEVER",param_1);
  }
  return uVar3;
}



undefined4 * FUN_007185b0(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x1c,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar2 + 6) = 0xec;
    *(undefined1 *)((int)puVar2 + 0x1a) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00718630(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar3 + 6) = 0xec;
    *(undefined1 *)((int)puVar3 + 0x1a) = 0;
  }
  puVar1 = DAT_00b3fce4;
  local_4 = 0xffffffff;
  if (DAT_00b3fce4 != puVar3) {
    if (DAT_00b3fce4 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b3fce4 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3fce4 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007186f0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3fce4;
  if (DAT_00b3fce4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3fce4 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3fce4 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00718a50(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_0070fd10();
  *(undefined4 *)(in_ECX + 0x24) = DAT_00b3f9a8;
  *(undefined4 *)(in_ECX + 0x28) = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x2c) = uVar1;
  return;
}



void FUN_00718a80(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  undefined4 *puVar7;
  float local_3c;
  float local_38;
  float local_34;
  undefined1 local_30 [12];
  undefined1 local_24 [36];
  
  puVar4 = (undefined4 *)FUN_00710400(local_24);
  puVar7 = param_1;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  param_1[0xc] = 1.0 / *(float *)(in_ECX + 0x30);
  local_3c = -*(float *)(in_ECX + 0x24);
  local_38 = -*(float *)(in_ECX + 0x28);
  local_34 = -*(float *)(in_ECX + 0x2c);
  pfVar5 = (float *)FUN_007101f0(local_30,&local_3c);
  fVar1 = (float)param_1[0xc];
  fVar2 = pfVar5[1];
  fVar3 = pfVar5[2];
  param_1[9] = fVar1 * *pfVar5;
  param_1[10] = fVar2 * fVar1;
  param_1[0xb] = fVar1 * fVar3;
  return;
}



undefined4 FUN_00718b20(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_0070ff20(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_008aa390(param_1 + 0x24);
    if ((cVar1 == '\0') && (*(float *)(param_1 + 0x30) == *(float *)(in_ECX + 0x30))) {
      return 0;
    }
  }
  return 1;
}



void FUN_00718b70(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00711b90(param_1);
  FUN_00709430(iVar1);
  iVar1 = *(int *)(iVar1 + 0x21c);
  param_1 = 4;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x30,4,&param_1,1);
  return;
}



void FUN_00718bb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00711bf0(param_1);
  FUN_007094a0(iVar1);
  iVar1 = *(int *)(iVar1 + 0x220);
  param_1 = 4;
  (**(code **)(iVar1 + 8))(iVar1,in_ECX + 0x30,4,&param_1,1);
  return;
}



undefined4 FUN_00718c30(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_NEVER",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_LESS",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_EQUAL",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_LESSEQUAL",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_GREATER",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_NOTEQUAL",param_1);
    return uVar3;
  case 6:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_GREATEREQUAL",param_1);
    return uVar3;
  case 7:
    FUN_006c5d40(uVar3,pcVar2,"%s = TEST_ALWAYS",param_1);
  }
  return uVar3;
}



undefined4 FUN_00718d40(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_KEEP",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_ZERO",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_REPLACE",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_INCREMENT",param_1);
    return uVar3;
  case 4:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_DECREMENT",param_1);
    return uVar3;
  case 5:
    FUN_006c5d40(uVar3,pcVar2,"%s = ACTION_INVERT",param_1);
  }
  return uVar3;
}



undefined4 FUN_00718e20(char *param_1,undefined4 param_2)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = pcVar2 + (0x16 - (int)(param_1 + 1));
  uVar3 = FUN_00401f00(pcVar2);
  switch(param_2) {
  case 0:
    FUN_006c5d40(uVar3,pcVar2,"%s = DRAW_CCW_OR_BOTH",param_1);
    return uVar3;
  case 1:
    FUN_006c5d40(uVar3,pcVar2,"%s = DRAW_CCW",param_1);
    return uVar3;
  case 2:
    FUN_006c5d40(uVar3,pcVar2,"%s = DRAW_CW",param_1);
    return uVar3;
  case 3:
    FUN_006c5d40(uVar3,pcVar2,"%s = DRAW_BOTH",param_1);
  }
  return uVar3;
}



undefined4 * FUN_00718ed0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a3d744;
    puVar2[7] = 0;
    puVar2[8] = 0xffffffff;
    *(undefined2 *)(puVar2 + 6) = 0x4180;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700300(puVar2,param_1);
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(in_ECX + 0x18);
  puVar2[7] = *(undefined4 *)(in_ECX + 0x1c);
  puVar2[8] = *(undefined4 *)(in_ECX + 0x20);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



undefined4 * FUN_00718f80(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_006ffd30();
    *puVar2 = &PTR_FUN_00a3d744;
    puVar2[7] = 0;
    puVar2[8] = 0xffffffff;
    *(undefined2 *)(puVar2 + 6) = 0x4180;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_00719010(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00401f00(0x24,uVar2);
  local_4 = 0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a3d744;
    puVar3[7] = 0;
    puVar3[8] = 0xffffffff;
    *(undefined2 *)(puVar3 + 6) = 0x4180;
  }
  puVar1 = DAT_00b3fcf8;
  local_4 = 0xffffffff;
  if (DAT_00b3fcf8 != puVar3) {
    if (DAT_00b3fcf8 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(DAT_00b3fcf8 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3fcf8 = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007190d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3fcf8;
  if (DAT_00b3fcf8 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3fcf8 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3fcf8 = (undefined4 *)0x0;
  }
  return;
}



void FUN_00719110(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int local_8;
  int iStack_4;
  
  iVar2 = param_1;
  FUN_00700ac0(param_1);
  iVar1 = *(int *)(iVar2 + 0x21c);
  if (*(uint *)(iVar2 + 0xd8) < 0x14010002) {
    local_8 = 1;
    (**(code **)(iVar1 + 4))(iVar1,&param_1,1,&local_8);
    if ((char)param_1 == '\0') {
      *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfffe;
    }
    else {
      *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) | 1;
    }
    local_8 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&iStack_4,4,&local_8,1);
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfff | (ushort)(iStack_4 << 0xc);
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1c,4,&iStack_4,1);
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x20,4,&iStack_4,1);
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfff1 | (short)local_8 * 2;
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xff8f | (ushort)(local_8 << 4);
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xfc7f | (ushort)(local_8 << 7);
    iStack_4 = 4;
    (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),&local_8,4,&iStack_4,1);
    *(ushort *)(in_ECX + 0x18) = *(ushort *)(in_ECX + 0x18) & 0xf3ff | (ushort)(local_8 << 10);
    return;
  }
  param_1 = 2;
  (**(code **)(iVar1 + 4))(iVar1,in_ECX + 0x18,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar2 + 0x21c) + 4))(*(int *)(iVar2 + 0x21c),in_ECX + 0x20,4,&param_1,1);
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_00719320(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint auStack_10 [3];
  uint uStack_4;
  
  iVar1 = param_1;
  thunk_FUN_00700460(param_1);
  if (*(uint *)(iVar1 + 0xd8) < 0x14010002) {
    param_1 = CONCAT31(param_1._1_3_,*(undefined1 *)(in_ECX + 0x18)) & 0xffffff01;
    auStack_10[1] = 1;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&param_1,1,auStack_10 + 1);
    auStack_10[2] = (uint)(*(ushort *)(in_ECX + 0x18) >> 0xc);
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),auStack_10 + 2,4,auStack_10 + 1,1);
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),in_ECX + 0x1c,4,auStack_10 + 1,1);
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),in_ECX + 0x20,4,auStack_10 + 1,1);
    auStack_10[0] = *(byte *)(in_ECX + 0x18) >> 1 & 7;
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),auStack_10,4,auStack_10 + 1,1);
    auStack_10[0] = *(byte *)(in_ECX + 0x18) >> 4 & 7;
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),auStack_10,4,auStack_10 + 1,1);
    auStack_10[0] = *(ushort *)(in_ECX + 0x18) >> 7 & 7;
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))
              (*(int *)(iVar1 + 0x220),auStack_10,4,auStack_10 + 1,1);
    uStack_4 = *(ushort *)(in_ECX + 0x18) >> 10 & 3;
    auStack_10[1] = 4;
    (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),&uStack_4,4,auStack_10 + 1,1)
    ;
    return;
  }
  param_1 = 2;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x18,2,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x1c,4,&param_1,1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0x20,4,&param_1,1);
  return;
}



void FUN_00719760(void)

{
  undefined4 *in_ECX;
  
  FUN_0071a490();
  *in_ECX = &PTR_FUN_00a7f1dc;
  in_ECX[0x42] = 0x3f800000;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  return;
}



void FUN_007197c0(void)

{
  int in_ECX;
  
  FUN_0070c120();
  *(undefined4 *)(in_ECX + 0x108) = *(undefined4 *)(in_ECX + 100);
  *(undefined4 *)(in_ECX + 0x10c) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x110) = *(undefined4 *)(in_ECX + 0x7c);
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  return;
}



/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFX_THREAD_STATE>::CreateObject(void)
    public: static class CObject * __cdecl CFrameWnd::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0x114,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00719760();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int FUN_00719870(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x114,uVar1);
  iVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    iVar3 = FUN_00719760();
  }
  local_4 = 0xffffffff;
  FUN_0071a5a0(iVar3,param_1);
  *(undefined4 *)(iVar3 + 0x108) = *(undefined4 *)(in_ECX + 0x108);
  *(undefined4 *)(iVar3 + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
  *(undefined4 *)(iVar3 + 0x110) = *(undefined4 *)(in_ECX + 0x110);
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_00719910(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_0071a790(param_1);
  param_1 = FUN_0070f910(DAT_00b3fcfc);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00719960(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00719cb0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                         param_10,param_11);
  }
  local_4 = 0xffffffff;
  FUN_00722690(uVar3);
  *in_ECX = &PTR_FUN_00a7f27c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00719a20(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  FUN_00722690(param_1);
  *in_ECX = &PTR_FUN_00a7f27c;
  return;
}



undefined4 * FUN_00719a40(void)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_007226c0();
    *puVar2 = &PTR_FUN_00a7f27c;
    puVar3 = puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



void thunk_FUN_007234b0(void)

{
  thunk_FUN_007234b0();
  return;
}



void thunk_FUN_00723350(void)

{
  thunk_FUN_00723350();
  return;
}



void thunk_FUN_00723400(void)

{
  thunk_FUN_00723400();
  return;
}



void FUN_00719ad0(byte param_1)

{
  FUN_007226e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00719b60(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x164))();
  }
  return;
}



void FUN_00719ba0(int *param_1)

{
  FUN_00722a10(param_1);
  if (((param_1[0x80] == 1) || (param_1[0x81] == 1)) && ((char)param_1[0x83] == '\x01')) {
    (**(code **)(*param_1 + 0x16c))();
  }
  return;
}



undefined4 * FUN_00719be0(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0xc0,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007226c0();
    *puVar2 = &PTR_FUN_00a7f27c;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00723020(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_00719c60(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00722750(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd04);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_00719cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined2 param_9,undefined4 param_10,undefined4 param_11)

{
  undefined4 *in_ECX;
  
  FUN_00732d70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  in_ECX[0x12] = param_10;
  *in_ECX = &PTR_FUN_00a7f32c;
  *(undefined2 *)(in_ECX + 0x11) = param_9;
  in_ECX[0x13] = param_11;
  return;
}



void FUN_00719d20(void)

{
  undefined4 *in_ECX;
  
  FUN_00732dd0();
  *(undefined2 *)(in_ECX + 0x11) = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *in_ECX = &PTR_FUN_00a7f32c;
  return;
}



undefined4 * FUN_00719e00(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x50,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00732dd0();
    *puVar2 = &PTR_FUN_00a7f32c;
    *(undefined2 *)(puVar2 + 0x11) = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



uint FUN_00719e80(int param_1)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  int iVar5;
  short *psVar4;
  
  uVar3 = FUN_00732e10(param_1);
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  uVar1 = *(ushort *)(in_ECX + 0x44);
  if (uVar1 != *(ushort *)(param_1 + 0x44)) {
    return uVar3 & 0xffffff00;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    psVar4 = *(short **)(in_ECX + 0x48);
    iVar5 = *(int *)(param_1 + 0x48) - (int)psVar4;
    do {
      if (*psVar4 != *(short *)(iVar5 + (int)psVar4)) goto LAB_00719f0c;
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (uVar3 < uVar1);
  }
  uVar2 = (short)((uint)uVar1 * 2) + *(short *)(in_ECX + 0x40);
  psVar4 = (short *)CONCAT22((short)((uint)uVar1 * 2 >> 0x10),uVar2);
  uVar3 = 0;
  if (uVar2 != 0) {
    psVar4 = *(short **)(in_ECX + 0x4c);
    iVar5 = *(int *)(param_1 + 0x4c) - (int)psVar4;
    do {
      if (*psVar4 != *(short *)(iVar5 + (int)psVar4)) {
LAB_00719f0c:
        return (uint)psVar4 & 0xffffff00;
      }
      uVar3 = uVar3 + 1;
      psVar4 = psVar4 + 1;
    } while (uVar3 < uVar2);
  }
  return CONCAT31((int3)((uint)psVar4 >> 8),1);
}



void FUN_00719f40(undefined2 param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x44))();
  if (iVar1 != 0) {
    (**(code **)(*in_ECX + 0x48))(0);
  }
  *(undefined2 *)(in_ECX + 0x11) = param_1;
  in_ECX[0x12] = param_2;
  in_ECX[0x13] = param_3;
  return;
}



void FUN_00719f80(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9ee8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f32c;
  local_4 = 0;
  iVar3 = FUN_00728650(uVar2);
  if (iVar3 == 0) {
    FUN_00401f20(in_ECX[0x12]);
    FUN_00401f20(in_ECX[0x13]);
  }
  else {
    iVar3 = FUN_00728650(uVar2);
    piVar1 = (int *)(iVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00732a20();
      FUN_00401f20(iVar3);
    }
    iVar3 = FUN_00728650(uVar2);
    piVar1 = (int *)(iVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00732a20();
      FUN_00401f20(iVar3);
    }
  }
  local_4 = 0xffffffff;
  FUN_00732df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071a040(ushort param_1,short *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  
  iVar2 = (**(code **)(*in_ECX + 0x44))();
  if (iVar2 == 0) {
    if (param_2 != (short *)in_ECX[0x12]) {
      FUN_00401f20((short *)in_ECX[0x12]);
    }
    if (param_3 != in_ECX[0x13]) {
      FUN_00401f20(in_ECX[0x13]);
    }
  }
  else {
    if (param_2 != (short *)in_ECX[0x12]) {
      iVar2 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar2);
      }
    }
    if (param_3 != in_ECX[0x13]) {
      iVar2 = (**(code **)(*in_ECX + 0x44))();
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_00732a20();
        FUN_00401f20(iVar2);
      }
    }
  }
  *(ushort *)(in_ECX + 0x11) = param_1;
  in_ECX[0x12] = (int)param_2;
  in_ECX[0x13] = param_3;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  if (param_1 != 0) {
    uVar3 = (uint)param_1;
    do {
      *(short *)(in_ECX + 0x10) = (short)in_ECX[0x10] + *param_2 + -2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}



void FUN_0071a110(byte param_1)

{
  FUN_00719f80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0071a130(int param_1)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uVar6;
  undefined4 uStack_4;
  
  iVar3 = param_1;
  FUN_00732e70(param_1);
  puVar1 = (ushort *)(in_ECX + 0x11);
  param_1 = 2;
  (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),puVar1,2,&param_1,1);
  if (*puVar1 != 0) {
    iVar4 = (**(code **)(*in_ECX + 0x44))();
    if (iVar4 == 0) {
      iVar4 = FUN_00401f00((uint)*puVar1 * 2);
      in_ECX[0x12] = iVar4;
    }
    else {
      uVar2 = *puVar1;
      iVar5 = (**(code **)(*in_ECX + 0x44))();
      iVar4 = *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      *(uint *)(iVar5 + 8) = iVar4 + (uint)uVar2 * 2;
      in_ECX[0x12] = iVar4;
    }
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[0x12],(uint)*puVar1 * 2,&uStack_4,1);
    if (*(uint *)(iVar3 + 0xd8) < 0xa000111) {
      param_1 = CONCAT31(param_1._1_3_,1);
    }
    else {
      uStack_4 = 1;
      (**(code **)(*(int *)(iVar3 + 0x21c) + 4))(*(int *)(iVar3 + 0x21c),&param_1,1,&uStack_4,1);
      if ((char)param_1 == '\0') {
        return;
      }
    }
    uVar6 = (uint)(ushort)(*puVar1 * 2 + (short)in_ECX[0x10]);
    iVar4 = (**(code **)(*in_ECX + 0x44))();
    if (iVar4 == 0) {
      iVar4 = FUN_00401f00(uVar6 * 2);
      in_ECX[0x13] = iVar4;
    }
    else {
      iVar5 = (**(code **)(*in_ECX + 0x44))();
      iVar4 = *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + 1;
      *(uint *)(iVar5 + 8) = iVar4 + uVar6 * 2;
      in_ECX[0x13] = iVar4;
    }
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar3 + 0x21c) + 4))
              (*(int *)(iVar3 + 0x21c),in_ECX[0x13],uVar6 * 2,&uStack_4,1);
  }
  return;
}



void FUN_0071a2a0(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int in_ECX;
  undefined4 uStack_4;
  
  iVar2 = param_1;
  FUN_00732eb0(param_1);
  puVar1 = (ushort *)(in_ECX + 0x44);
  param_1 = 2;
  (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),puVar1,2,&param_1,1);
  if (*puVar1 != 0) {
    uStack_4 = 2;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))
              (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0x48),(uint)*puVar1 * 2,&uStack_4,1)
    ;
    param_1 = CONCAT31(param_1._1_3_,*(int *)(in_ECX + 0x4c) != 0);
    uStack_4 = 1;
    (**(code **)(*(int *)(iVar2 + 0x220) + 8))(*(int *)(iVar2 + 0x220),&param_1,1,&uStack_4,1);
    if ((char)param_1 != '\0') {
      uStack_4 = 2;
      (**(code **)(*(int *)(iVar2 + 0x220) + 8))
                (*(int *)(iVar2 + 0x220),*(undefined4 *)(in_ECX + 0x4c),
                 (uint)(ushort)(*puVar1 * 2 + *(short *)(in_ECX + 0x40)) * 2,&uStack_4,1);
    }
  }
  return;
}



void FUN_0071a380(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00732ef0(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd0c);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070faa0("m_usStrips",*(undefined2 *)(in_ECX + 0x44));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pusStripLengths",*(undefined4 *)(in_ECX + 0x48));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fbe0("m_pusStripLists",*(undefined4 *)(in_ECX + 0x4c));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0071a490(void)

{
  undefined4 *in_ECX;
  
  FUN_007090c0();
  *in_ECX = &PTR_FUN_00a7f3dc;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x37] = 0x3f800000;
  in_ECX[0x38] = 0x3f800000;
  in_ECX[0x39] = 0x3f800000;
  in_ECX[0x3a] = 0x3f800000;
  in_ECX[0x3b] = 0x3f800000;
  in_ECX[0x3c] = 0x3f800000;
  in_ECX[0x3d] = 0x3f800000;
  in_ECX[0x3e] = 0x3f800000;
  in_ECX[0x3f] = 0x3f800000;
  in_ECX[0x40] = 0x3f800000;
  return;
}



void FUN_0071a540(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9f18;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f3dc;
  local_4 = 0;
  FUN_00701480();
  local_4 = 0xffffffff;
  FUN_00708da0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071a5a0(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_00708b00(param_1,param_2);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(in_ECX + 0xe0);
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)(in_ECX + 0xe4);
  *(undefined4 *)(param_1 + 0xe8) = *(undefined4 *)(in_ECX + 0xe8);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(in_ECX + 0xf0);
  *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(in_ECX + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = *(undefined4 *)(in_ECX + 0xfc);
  *(undefined4 *)(param_1 + 0x100) = *(undefined4 *)(in_ECX + 0x100);
  return;
}



void thunk_FUN_00708f90(void)

{
  FUN_00708f90();
  return;
}



void thunk_FUN_00707af0(void)

{
  thunk_FUN_00707af0();
  return;
}



undefined4 FUN_0071a650(int param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00708c30(param_1);
  if (cVar1 != '\0') {
    if (*(float *)(param_1 + 0xdc) == *(float *)(in_ECX + 0xdc)) {
      cVar1 = FUN_008aa390(param_1 + 0xe0);
      if (cVar1 == '\0') {
        cVar1 = FUN_008aa390(param_1 + 0xec);
        if (cVar1 == '\0') {
          cVar1 = FUN_008aa390(param_1 + 0xf8);
          if (cVar1 == '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



void FUN_0071a6d0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00708eb0(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x21c) + 4))(*(int *)(iVar1 + 0x21c),in_ECX + 0xdc,4,&param_1,1);
  FUN_00709430(iVar1);
  FUN_00709430(iVar1);
  FUN_00709430(iVar1);
  return;
}



void FUN_0071a730(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = param_1;
  FUN_00709020(param_1);
  param_1 = 4;
  (**(code **)(*(int *)(iVar1 + 0x220) + 8))(*(int *)(iVar1 + 0x220),in_ECX + 0xdc,4,&param_1,1);
  FUN_007094a0(iVar1);
  FUN_007094a0(iVar1);
  FUN_007094a0(iVar1);
  return;
}



void FUN_0071a790(int param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_00709160(param_1);
  param_1 = FUN_0070f910(DAT_00b3fd14);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_0070fb90("m_fDimmer",*(undefined4 *)(in_ECX + 0xdc));
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00709370("m_kAmb");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00709370("m_kDiff");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  param_1 = FUN_00709370("m_kSpec");
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_0071a8e0(void)

{
  undefined4 *in_ECX;
  
  FUN_00733710();
  *in_ECX = &PTR_FUN_00a7f494;
  *(undefined1 *)(in_ECX + 0xd) = 1;
  *(undefined1 *)((int)in_ECX + 0x35) = 0;
  return;
}



void FUN_0071a910(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f494;
  FUN_007334d0();
  return;
}



undefined4 * FUN_0071a920(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00733710();
    *puVar2 = &PTR_FUN_00a7f494;
    *(undefined1 *)(puVar2 + 0xd) = 1;
    *(undefined1 *)((int)puVar2 + 0x35) = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0071a9d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a7f494;
  FUN_007334d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0071aa00(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  undefined4 *puVar9;
  
  if (*(int *)(in_ECX + 0x1c) == 0) {
    *(int *)(in_ECX + 0x1c) = in_ECX + 0xc;
  }
  iVar8 = *(int *)(*(int *)(in_ECX + 0x1c) + 0xc);
  *(int *)(in_ECX + 0x20) = iVar8;
  if (iVar8 != 0) {
    if (*(int *)(in_ECX + 0x24) < iVar8) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
      *(uint *)(in_ECX + 0x24) = *(uint *)(in_ECX + 0x20);
      lVar6 = (ulonglong)*(uint *)(in_ECX + 0x20) * 4;
      uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
      *(undefined4 *)(in_ECX + 0x28) = uVar7;
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
      lVar6 = (ulonglong)*(uint *)(in_ECX + 0x24) * 4;
      uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar6 >> 0x20) != 0) | (uint)lVar6);
      *(undefined4 *)(in_ECX + 0x2c) = uVar7;
    }
    puVar9 = *(undefined4 **)(*(int *)(in_ECX + 0x1c) + 4);
    iVar8 = *(int *)(in_ECX + 8);
    fVar2 = *(float *)(iVar8 + 100);
    fVar3 = *(float *)(iVar8 + 0x70);
    fVar4 = *(float *)(iVar8 + 0x7c);
    if (*(char *)(in_ECX + 0x35) == '\0') {
      iVar8 = 0;
      if (0 < *(int *)(in_ECX + 0x20)) {
        do {
          puVar1 = puVar9 + 2;
          puVar9 = (undefined4 *)*puVar9;
          *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar8 * 4) = *puVar1;
          iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + iVar8 * 4);
          iVar8 = iVar8 + 1;
          *(float *)(*(int *)(in_ECX + 0x2c) + -4 + iVar8 * 4) =
               *(float *)(iVar5 + 0x28) * fVar4 +
               *(float *)(iVar5 + 0x20) * fVar2 + *(float *)(iVar5 + 0x24) * fVar3;
        } while (iVar8 < *(int *)(in_ECX + 0x20));
      }
    }
    else {
      iVar8 = 0;
      if (0 < *(int *)(in_ECX + 0x20)) {
        do {
          puVar1 = puVar9 + 2;
          puVar9 = (undefined4 *)*puVar9;
          *(undefined4 *)(*(int *)(in_ECX + 0x28) + iVar8 * 4) = *puVar1;
          iVar5 = *(int *)(*(int *)(in_ECX + 0x28) + iVar8 * 4);
          iVar8 = iVar8 + 1;
          *(float *)(*(int *)(in_ECX + 0x2c) + -4 + iVar8 * 4) =
               (*(float *)(iVar5 + 0x28) * fVar4 +
               fVar2 * *(float *)(iVar5 + 0x20) + *(float *)(iVar5 + 0x24) * fVar3) -
               *(float *)(iVar5 + 0x2c);
        } while (iVar8 < *(int *)(in_ECX + 0x20));
      }
    }
    FUN_00733380(0,*(int *)(in_ECX + 0x20) + -1);
  }
  return;
}



undefined4 * FUN_0071ab70(undefined4 param_1)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x38,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00733710();
    *puVar2 = &PTR_FUN_00a7f494;
    *(undefined1 *)(puVar2 + 0xd) = 1;
    *(undefined1 *)((int)puVar2 + 0x35) = 0;
  }
  local_4 = 0xffffffff;
  thunk_FUN_00700770(puVar2,param_1);
  *(undefined1 *)(puVar2 + 0xd) = *(undefined1 *)(in_ECX + 0x34);
  *(undefined1 *)((int)puVar2 + 0x35) = *(undefined1 *)(in_ECX + 0x35);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



void FUN_0071ac10(int *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint uVar5;
  
  uVar3 = DAT_00b3f928;
  uVar1 = param_1[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*param_1 + uVar5 * 4);
      if (((*(byte *)(*(int *)(piVar2[0x2b] + 8) + 0x18) & 1) == 0) ||
         (((*(char *)(in_ECX + 0x34) != '\0' &&
           ((*(ushort *)(*(int *)(piVar2[0x2b] + 8) + 0x18) >> 0xd & 1) != 0)) ||
          ((~(*(byte *)(piVar2 + 6) >> 6) & 1) == 0)))) {
        (**(code **)(*piVar2 + 0x84))(uVar3);
      }
      else {
        puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0xc) + 4))();
        puVar4[2] = piVar2;
        *puVar4 = 0;
        puVar4[1] = *(undefined4 *)(in_ECX + 0x14);
        if (*(undefined4 **)(in_ECX + 0x14) == (undefined4 *)0x0) {
          *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
          *(undefined4 **)(in_ECX + 0x10) = puVar4;
          *(undefined4 **)(in_ECX + 0x14) = puVar4;
        }
        else {
          **(undefined4 **)(in_ECX + 0x14) = puVar4;
          *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
          *(undefined4 **)(in_ECX + 0x14) = puVar4;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



uint FUN_0071ad40(char *param_1)

{
  uint uVar1;
  int *piVar2;
  char *in_ECX;
  char *pcVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 4);
  if ((((uVar1 == *(uint *)(in_ECX + 4)) && (*param_1 == *in_ECX)) &&
      (uVar1 = *(uint *)(param_1 + 8), uVar1 == *(uint *)(in_ECX + 8))) && (param_1[1] == in_ECX[1])
     ) {
    uVar1 = *(uint *)(in_ECX + 0xc);
    if (((*(uint *)(param_1 + 0xc) == uVar1) || (uVar1 == 0xffffffff)) ||
       (*(uint *)(param_1 + 0xc) == 0xffffffff)) {
      iVar4 = 0;
      pcVar3 = param_1 + 0x1c;
      piVar2 = (int *)(in_ECX + 0x14);
      while (((*(int *)(((int)param_1 - (int)in_ECX) + (int)piVar2) == *piVar2 &&
              (*(int *)(pcVar3 + -4) == piVar2[1])) &&
             ((*pcVar3 == (char)piVar2[2] && (pcVar3[1] == *(char *)((int)piVar2 + 9)))))) {
        iVar4 = iVar4 + 1;
        pcVar3 = pcVar3 + 0xc;
        piVar2 = piVar2 + 3;
        if (3 < iVar4) {
          return CONCAT31((int3)((uint)piVar2 >> 8),1);
        }
      }
      return (uint)piVar2 & 0xffffff00;
    }
  }
  return uVar1 & 0xffffff00;
}



void FUN_0071add0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7f50c;
  FUN_00733940(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071ae40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f50c;
  local_4 = 0;
  if (DAT_00b3fd24 != 0) {
    FUN_00401f20(DAT_00b3fd24,uVar1);
  }
  DAT_00b3fd24 = 0;
  FUN_007338b0();
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_0071b090(char *param_1)

{
  char cVar1;
  char *_Dst;
  char *pcVar2;
  undefined1 local_408 [771];
  char local_105 [257];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_408;
  _Dst = (char *)FUN_00401f00(0x104);
  if (DAT_00b3fd24 == (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    _strncpy_s(_Dst,0x104,param_1,(rsize_t)(pcVar2 + (1 - (int)(param_1 + 1))));
  }
  else {
    FUN_00748760(param_1);
    _strcpy_s(local_105,0x100,DAT_00b3fd24);
    thunk_FUN_00748670(_Dst,0x104);
  }
  return _Dst;
}



void FUN_0071b140(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x4c);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x4c) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_0071b190(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x680,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = (undefined4 *)FUN_0071add0();
  }
  puVar1 = DAT_00b3fd28;
  local_4 = 0xffffffff;
  if (DAT_00b3fd28 != puVar4) {
    if (DAT_00b3fd28 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(DAT_00b3fd28 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    DAT_00b3fd28 = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071b240(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3fd28;
  if (DAT_00b3fd28 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b3fd28 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3fd28 = (undefined4 *)0x0;
  }
  return;
}



undefined4 FUN_0071b280(void)

{
  return DAT_00b3fd28;
}



void FUN_0071b290(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b3fd28;
  if (DAT_00b3fd28 != param_1) {
    if (((DAT_00b3fd28 != (undefined4 *)0x0) &&
        (LVar2 = InterlockedDecrement(DAT_00b3fd28 + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b3fd28 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_0071b2e0(byte param_1)

{
  FUN_0071ae40();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_0071b300(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9f56;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_0070e260(param_2);
  if (cVar2 == '\0') {
    if (param_3 != 0) {
      if (param_3 == param_1) goto LAB_0071b43c;
      cVar2 = FUN_0071ad40(param_2);
      if ((((cVar2 != '\0') && (**(int **)(param_3 + 0x54) == **(int **)(param_1 + 0x54))) &&
          (**(int **)(param_3 + 0x58) == **(int **)(param_1 + 0x58))) &&
         (uVar1 = *(uint *)(param_3 + 0x60), uVar1 <= *(uint *)(param_1 + 0x60))) {
        uVar6 = 0;
        if (uVar1 != 0) {
          do {
            iVar4 = *(int *)(param_1 + 0x5c);
            _memcpy((void *)(*(int *)(*(int *)(param_3 + 0x5c) + uVar6 * 4) +
                            *(int *)(param_3 + 0x50)),
                    (void *)(*(int *)(param_1 + 0x50) + *(int *)(iVar4 + uVar6 * 4)),
                    *(int *)(iVar4 + 4 + uVar6 * 4) - *(int *)(iVar4 + uVar6 * 4));
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar1);
        }
        if (*(int *)(param_1 + 0x4c) != 0) {
          if (*(int *)(param_3 + 0x4c) == 0) {
            iVar4 = FUN_00401f00(0x24,uVar3);
            local_4 = 0;
            if (iVar4 == 0) {
              uVar5 = 0;
            }
            else {
              uVar5 = FUN_00732690(*(undefined4 *)(param_1 + 0x4c));
            }
            local_4 = 0xffffffff;
            FUN_0071b140(uVar5);
          }
          else {
            FUN_00732480(*(int *)(param_1 + 0x4c));
          }
        }
        goto LAB_0071b43c;
      }
    }
    iVar4 = FUN_00401f00(0x70,uVar3);
    local_4 = 1;
    if (iVar4 != 0) {
      param_3 = FUN_0070e3d0(param_1);
      goto LAB_0071b43c;
    }
  }
  param_3 = 0;
LAB_0071b43c:
  *unaff_FS_OFFSET = local_c;
  return param_3;
}



uint FUN_0071b460(uint param_1)

{
  uint in_EAX;
  
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  return (uint)((param_1 - 1 & param_1) == 0);
}



undefined4 FUN_0071b480(void)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) != 2) && (*(int *)(in_ECX + 4) != 3)) {
    return 0;
  }
  return 1;
}



uint FUN_0071b4a0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x14);
  do {
    if (*piVar2 == param_1) {
      return CONCAT31((int3)(uVar1 * 3 >> 8),*(undefined1 *)(in_ECX + 0x1c + uVar1 * 0xc));
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar1 < 4);
  return uVar1 & 0xffffff00;
}



void FUN_0071b4d0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *piVar6;
  
  uVar3 = FUN_00700b60(0);
  *in_ECX = uVar3;
  uVar1 = FUN_00700c00(0);
  piVar6 = (int *)(param_1 + 0x14);
  *(undefined1 *)(in_ECX + 4) = uVar1;
  uVar4 = 0;
  piVar5 = piVar6;
  do {
    if (*piVar5 == 0) {
      cVar2 = *(char *)(param_1 + 0x1c + uVar4 * 0xc);
      goto LAB_0071b50d;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (uVar4 < 4);
  cVar2 = '\0';
LAB_0071b50d:
  *(char *)(in_ECX + 5) = '\b' - cVar2;
  uVar3 = FUN_00700b60(1);
  in_ECX[1] = uVar3;
  uVar1 = FUN_00700c00(1);
  *(undefined1 *)((int)in_ECX + 0x11) = uVar1;
  uVar4 = 0;
  piVar5 = piVar6;
  do {
    if (*piVar5 == 1) {
      cVar2 = *(char *)(param_1 + 0x1c + uVar4 * 0xc);
      goto LAB_0071b546;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (uVar4 < 4);
  cVar2 = '\0';
LAB_0071b546:
  *(char *)((int)in_ECX + 0x15) = '\b' - cVar2;
  uVar3 = FUN_00700b60(2);
  in_ECX[2] = uVar3;
  uVar1 = FUN_00700c00(2);
  *(undefined1 *)((int)in_ECX + 0x12) = uVar1;
  uVar4 = 0;
  piVar5 = piVar6;
  do {
    if (*piVar5 == 2) {
      cVar2 = *(char *)(param_1 + 0x1c + uVar4 * 0xc);
      goto LAB_0071b582;
    }
    uVar4 = uVar4 + 1;
    piVar5 = piVar5 + 3;
  } while (uVar4 < 4);
  cVar2 = '\0';
LAB_0071b582:
  *(char *)((int)in_ECX + 0x16) = '\b' - cVar2;
  uVar3 = FUN_00700b60(3);
  in_ECX[3] = uVar3;
  uVar1 = FUN_00700c00(3);
  *(undefined1 *)((int)in_ECX + 0x13) = uVar1;
  uVar4 = 0;
  do {
    if (*piVar6 == 3) {
      *(char *)((int)in_ECX + 0x17) = '\b' - *(char *)(param_1 + 0x1c + uVar4 * 0xc);
      return;
    }
    uVar4 = uVar4 + 1;
    piVar6 = piVar6 + 3;
  } while (uVar4 < 4);
  *(undefined1 *)((int)in_ECX + 0x17) = 8;
  return;
}



undefined4 FUN_0071b600(byte *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined4 *puVar5;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = *(int *)(param_2 + 4);
  bVar1 = param_2[1];
  FUN_0071b4d0(param_2);
  cVar3 = FUN_0071ad40(param_2);
  if (cVar3 != '\0') {
    return 1;
  }
  if ((*param_1 & 1) == 0) {
    return 0;
  }
  if ((*param_2 & 1) == 0) {
    return 0;
  }
  if ((3 < *(int *)(param_2 + 4)) && (*(int *)(param_2 + 4) < 7)) {
    return 0;
  }
  if (bVar1 == 0x18) {
    if (local_14 != 0xff00) {
      return 0;
    }
    if ((local_18 != 0xff) && (local_18 != 0xff0000)) {
      return 0;
    }
  }
  cVar3 = FUN_0071ad40(&DAT_00b25ce0);
  if ((cVar3 == '\0') && (cVar3 = FUN_0071ad40(&DAT_00b25d28), cVar3 == '\0')) {
    cVar3 = FUN_0071ad40(&DAT_00b25d70);
    if ((cVar3 == '\0') && (cVar3 = FUN_0071ad40(&DAT_00b25db8), cVar3 == '\0')) {
      cVar3 = FUN_0071ad40(&DAT_00b25e48);
      if (((cVar3 == '\0') && (cVar3 = FUN_0071ad40(&DAT_00b25e00), cVar3 == '\0')) &&
         (cVar3 = FUN_0070e240(), cVar3 == '\0')) {
        cVar3 = FUN_0071ad40(&DAT_00b25f20);
        if ((cVar3 == '\0') && (cVar3 = FUN_0071ad40(&DAT_00b25f68), cVar3 == '\0')) {
          cVar3 = FUN_0071ad40(&DAT_00b25e90);
          if ((cVar3 == '\0') && (cVar3 = FUN_0071ad40(&DAT_00b25ed8), cVar3 == '\0')) {
            return 0;
          }
          if (bVar1 != 0x10) {
            return 0;
          }
          if (local_c != 0x8000) {
            return 0;
          }
          if (local_14 != 0x3e0) {
            return 0;
          }
          if (local_18 == 0x1f) {
            bVar4 = local_10 == 0x7c00;
          }
          else {
            if (local_18 != 0x7c00) {
              return 0;
            }
            bVar4 = local_10 == 0x1f;
          }
          goto LAB_0071b7d0;
        }
      }
      else if ((iVar2 == 0) || (iVar2 == 1)) goto LAB_0071b78f;
      if ((iVar2 != 8) && (iVar2 != 9)) {
        return 0;
      }
    }
    else if ((iVar2 != 0) && (iVar2 != 1)) {
      cVar3 = FUN_0070e260(&DAT_00b25d70);
      if (cVar3 == '\0') {
        return 1;
      }
      puVar5 = &DAT_00b25db8;
      goto LAB_0071b7c7;
    }
LAB_0071b78f:
    if (bVar1 == 0x10) {
      return 1;
    }
    if (bVar1 == 0x18) {
      return 1;
    }
    bVar4 = bVar1 == 0x20;
  }
  else {
    if ((iVar2 == 0) || (iVar2 == 1)) {
      if (bVar1 == 0x18) {
        return 1;
      }
      if (bVar1 == 0x20) {
        return 1;
      }
      return 0;
    }
    cVar3 = FUN_0070e260(&DAT_00b25ce0);
    if (cVar3 == '\0') {
      return 1;
    }
    puVar5 = &DAT_00b25d28;
LAB_0071b7c7:
    cVar3 = FUN_0070e260(puVar5);
    bVar4 = cVar3 == '\0';
  }
LAB_0071b7d0:
  if (bVar4) {
    return 1;
  }
  return 0;
}



undefined1 FUN_0071b850(void)

{
  char cVar1;
  
  cVar1 = FUN_0071ad40(&DAT_00b25d28);
  if (cVar1 == '\0') {
    cVar1 = FUN_0071ad40(&DAT_00b25db8);
    if (cVar1 == '\0') {
      cVar1 = FUN_0071ad40(&DAT_00b25e00);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



undefined1 FUN_0071b890(void)

{
  char cVar1;
  
  cVar1 = FUN_0071ad40(&DAT_00b25ce0);
  if (cVar1 == '\0') {
    cVar1 = FUN_0071ad40(&DAT_00b25d70);
    if (cVar1 == '\0') {
      cVar1 = FUN_0071ad40(&DAT_00b25e48);
      if (cVar1 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



int FUN_0071b8d0(uint param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  int *in_ECX;
  int iVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  byte *pbVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  uint uStack_68;
  int *piStack_5c;
  undefined4 auStack_54 [17];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar12 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c9f8b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff88;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070f2e0(uVar4);
  cVar3 = (**(code **)(*in_ECX + 0x20))(param_1 + 8);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*in_ECX + 0x1c))(param_1 + 8);
    if (cVar3 != '\0') {
      puVar9 = &DAT_00b25e00;
      goto LAB_0071b93c;
    }
  }
  else {
    puVar9 = &DAT_00b25e48;
LAB_0071b93c:
    puVar11 = auStack_54;
    for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    if ((((param_1 == 0) || (cVar3 = FUN_0071ad40(auStack_54), cVar3 == '\0')) ||
        (*(uint *)(param_1 + 0x60) < 2)) ||
       (iVar7 = param_1, *(int *)(param_1 + 0x6c) != *(int *)(param_1 + 0x6c))) {
      iVar7 = FUN_00401f00(0x70);
      puStack_8 = (undefined1 *)0x0;
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0070e560(**(undefined4 **)(param_1 + 0x54),**(undefined4 **)(param_1 + 0x58),
                             auStack_54,0,*(undefined4 *)(param_1 + 0x6c));
      }
      puStack_8 = (undefined1 *)0xffffffff;
    }
    uVar4 = *(uint *)(iVar7 + 0x60);
    if ((param_1 == iVar7) ||
       (cVar3 = (**(code **)(*piStack_5c + 0x2c))(iVar7,param_1,0), cVar3 != '\0')) {
      piVar1 = (int *)(param_1 + 0x6c);
      param_1 = 0;
      if (*piVar1 != 0) {
        do {
          cVar3 = FUN_0071ad40(&DAT_00b25e48);
          if (cVar3 == '\0') {
            cVar3 = FUN_0071ad40(&DAT_00b25e00);
            if ((cVar3 != '\0') && (uStack_68 = 1, iVar12 = unaff_retaddr, 1 < uVar4)) {
              do {
                iVar12 = *(int *)(iVar7 + 0x5c);
                iVar5 = *(int *)(iVar12 + *(int *)(iVar7 + 0x60) * 4) * param_1;
                puVar8 = (undefined1 *)
                         (*(int *)(iVar7 + 0x50) + iVar5 + *(int *)(iVar12 + uStack_68 * 4));
                pbVar10 = (byte *)(*(int *)(iVar12 + -4 + uStack_68 * 4) + *(int *)(iVar7 + 0x50) +
                                  iVar5);
                piVar1 = (int *)(*(int *)(iVar7 + 0x54) + uStack_68 * 4);
                iVar5 = *piVar1;
                iVar2 = piVar1[-1];
                iVar12 = *(int *)(*(int *)(iVar7 + 0x58) + uStack_68 * 4);
                if (iVar2 == 1) {
                  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
                    *puVar8 = (char)((uint)pbVar10[4] + (uint)*pbVar10 >> 1);
                    puVar8[1] = (char)((uint)pbVar10[5] + (uint)pbVar10[1] >> 1);
                    puVar8[2] = (char)((uint)pbVar10[6] + (uint)pbVar10[2] >> 1);
                    puVar8[3] = (char)((uint)pbVar10[7] + (uint)pbVar10[3] >> 1);
                    puVar8 = puVar8 + 4;
                    pbVar10 = pbVar10 + 8;
                  }
                }
                else if (*(int *)(*(int *)(iVar7 + 0x58) + uStack_68 * 4 + -4) == 1) {
                  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar8 = (char)((uint)pbVar10[4] + (uint)*pbVar10 >> 1);
                    puVar8[1] = (char)((uint)pbVar10[5] + (uint)pbVar10[1] >> 1);
                    puVar8[2] = (char)((uint)pbVar10[6] + (uint)pbVar10[2] >> 1);
                    puVar8[3] = (char)((uint)pbVar10[7] + (uint)pbVar10[3] >> 1);
                    puVar8 = puVar8 + 4;
                    pbVar10 = pbVar10 + 8;
                  }
                }
                else {
                  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
                    if (iVar5 != 0) {
                      pbVar6 = pbVar10 + iVar2 * 4;
                      iVar13 = iVar2 * -4;
                      piStack_5c = (int *)iVar5;
                      do {
                        *puVar8 = (char)((uint)pbVar6[iVar13 + 4] + (uint)pbVar6[4] + (uint)*pbVar10
                                         + (uint)*pbVar6 >> 2);
                        puVar8[1] = (char)((uint)pbVar6[iVar13 + 1] + (uint)pbVar6[iVar13 + 5] +
                                           (uint)pbVar6[5] + (uint)pbVar6[1] >> 2);
                        puVar8[2] = (char)((uint)pbVar6[iVar13 + 2] + (uint)pbVar6[iVar13 + 6] +
                                           (uint)pbVar6[6] + (uint)pbVar6[2] >> 2);
                        puVar8[3] = (char)((uint)pbVar6[iVar13 + 3] + (uint)pbVar6[iVar13 + 7] +
                                           (uint)pbVar6[7] + (uint)pbVar6[3] >> 2);
                        puVar8 = puVar8 + 4;
                        pbVar10 = pbVar10 + 8;
                        pbVar6 = pbVar6 + 8;
                        piStack_5c = (int *)((int)piStack_5c + -1);
                      } while (piStack_5c != (int *)0x0);
                    }
                    pbVar10 = pbVar10 + iVar2 * 4;
                  }
                }
                uStack_68 = uStack_68 + 1;
                iVar12 = unaff_retaddr;
              } while (uStack_68 < uVar4);
            }
          }
          else {
            piStack_5c = (int *)0x1;
            iVar12 = unaff_retaddr;
            if (1 < uVar4) {
              do {
                iVar12 = *(int *)(iVar7 + 0x5c);
                iVar5 = *(int *)(iVar12 + *(int *)(iVar7 + 0x60) * 4) * param_1;
                puVar8 = (undefined1 *)
                         (*(int *)(iVar7 + 0x50) + iVar5 + *(int *)(iVar12 + (int)piStack_5c * 4));
                pbVar10 = (byte *)(*(int *)(iVar12 + -4 + (int)piStack_5c * 4) +
                                   *(int *)(iVar7 + 0x50) + iVar5);
                piVar1 = (int *)(*(int *)(iVar7 + 0x54) + (int)piStack_5c * 4);
                iVar5 = *piVar1;
                iVar2 = piVar1[-1];
                iVar12 = *(int *)(*(int *)(iVar7 + 0x58) + (int)piStack_5c * 4);
                if (iVar2 == 1) {
                  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
                    *puVar8 = (char)((uint)pbVar10[3] + (uint)*pbVar10 >> 1);
                    puVar8[1] = (char)((uint)pbVar10[4] + (uint)pbVar10[1] >> 1);
                    puVar8[2] = (char)((uint)pbVar10[5] + (uint)pbVar10[2] >> 1);
                    puVar8 = puVar8 + 3;
                    pbVar10 = pbVar10 + 6;
                  }
                }
                else if (*(int *)(*(int *)(iVar7 + 0x58) + (int)piStack_5c * 4 + -4) == 1) {
                  for (; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *puVar8 = (char)((uint)pbVar10[3] + (uint)*pbVar10 >> 1);
                    puVar8[1] = (char)((uint)pbVar10[4] + (uint)pbVar10[1] >> 1);
                    puVar8[2] = (char)((uint)pbVar10[5] + (uint)pbVar10[2] >> 1);
                    puVar8 = puVar8 + 3;
                    pbVar10 = pbVar10 + 6;
                  }
                }
                else {
                  for (; iVar12 != 0; iVar12 = iVar12 + -1) {
                    if (iVar5 != 0) {
                      pbVar6 = pbVar10 + iVar2 * 3;
                      iVar13 = iVar2 * -3;
                      uStack_68 = iVar5;
                      do {
                        *puVar8 = (char)((uint)pbVar6[iVar13 + 3] + (uint)pbVar6[3] + (uint)*pbVar6
                                         + (uint)*pbVar10 >> 2);
                        puVar8[1] = (char)((uint)pbVar6[iVar13 + 1] + (uint)pbVar6[iVar13 + 4] +
                                           (uint)pbVar6[4] + (uint)pbVar6[1] >> 2);
                        puVar8[2] = (char)((uint)pbVar6[iVar13 + 2] + (uint)pbVar6[iVar13 + 5] +
                                           (uint)pbVar6[5] + (uint)pbVar6[2] >> 2);
                        puVar8 = puVar8 + 3;
                        pbVar10 = pbVar10 + 6;
                        pbVar6 = pbVar6 + 6;
                        uStack_68 = uStack_68 + -1;
                      } while (uStack_68 != 0);
                    }
                    pbVar10 = pbVar10 + iVar2 * 3;
                  }
                }
                piStack_5c = (int *)((int)piStack_5c + 1);
                iVar12 = unaff_retaddr;
              } while (piStack_5c < uVar4);
            }
          }
          param_1 = param_1 + 1;
        } while (param_1 < *(uint *)(iVar12 + 0x6c));
      }
      goto LAB_0071be12;
    }
  }
  iVar7 = 0;
LAB_0071be12:
  *unaff_FS_OFFSET = iStack_10;
  return iVar7;
}



uint FUN_0071be30(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca5ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = param_3 + 8;
  iVar4 = (**(code **)(*in_ECX + 0x38))(param_1,param_2,iVar1,param_4,uVar3);
  if (iVar4 == iVar1) goto LAB_0071befc;
  if (iVar4 != 0) {
    cVar2 = FUN_0071ad40(iVar1);
    if (cVar2 != '\0') goto LAB_0071befc;
    cVar2 = (**(code **)(*in_ECX + 0xc))(iVar1,iVar4);
    if (cVar2 != '\0') {
      iStack_4 = FUN_00401f00(0x70);
      if (iStack_4 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0070e560(**(undefined4 **)(param_3 + 0x54),**(undefined4 **)(param_3 + 0x58),
                             iVar4,*(undefined4 *)(param_3 + 0x60),*(undefined4 *)(param_3 + 0x6c));
      }
      cVar2 = (**(code **)(*in_ECX + 0x2c))(uVar3,param_3,0xffffffff);
      param_3 = -(uint)(cVar2 != '\0') & uVar3;
      goto LAB_0071befc;
    }
  }
  param_3 = 0;
LAB_0071befc:
  *unaff_FS_OFFSET = unaff_EDI;
  return param_3;
}



int FUN_0071c0b0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  int *unaff_FS_OFFSET;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9fd1;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = **(undefined4 **)(param_1 + 0x58);
  uVar3 = *(uint *)(param_1 + 0x60);
  uVar4 = **(undefined4 **)(param_1 + 0x54);
  cVar6 = FUN_0071ad40(&DAT_00b25e00);
  if (cVar6 == '\0') {
    cVar6 = FUN_0071ad40(&DAT_00b25e48);
    if ((cVar6 == '\0') || (cVar6 = FUN_0071ad40(&DAT_00b25f68), cVar6 == '\0')) {
      cVar6 = FUN_0071ad40(&DAT_00b25e48);
      if (cVar6 == '\0') {
        local_20 = 0;
        goto LAB_0071c477;
      }
      iVar8 = FUN_00401f00(0x70,uVar7);
      local_4 = 2;
      if (iVar8 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_0070e560(uVar4,uVar2,&DAT_00b25f20,uVar3,1);
      }
      local_28 = 2;
    }
    else {
      iVar8 = FUN_00401f00(0x70,uVar7);
      local_4 = 1;
      if (iVar8 == 0) {
        local_20 = 0;
      }
      else {
        local_20 = FUN_0070e560(uVar4,uVar2,&DAT_00b25f68,uVar3,1);
      }
      uVar7 = 0;
      if (uVar3 != 0) {
        do {
          iVar5 = *(int *)(*(int *)(param_1 + 0x54) + uVar7 * 4);
          iVar13 = *(int *)(*(int *)(local_20 + 0x5c) + uVar7 * 4) + *(int *)(local_20 + 0x50);
          puVar11 = (undefined1 *)
                    (*(int *)(*(int *)(param_1 + 0x5c) + uVar7 * 4) + *(int *)(param_1 + 0x50));
          for (iVar8 = *(int *)(*(int *)(param_1 + 0x58) + uVar7 * 4); iVar9 = iVar5, iVar8 != 0;
              iVar8 = iVar8 + -1) {
            for (; iVar9 != 0; iVar9 = iVar9 + -1) {
              *(undefined1 *)(iVar13 + 2) = 0xff;
              *(undefined1 *)(iVar13 + 3) = *puVar11;
              puVar11 = puVar11 + 3;
              iVar13 = iVar13 + 4;
            }
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      local_28 = 4;
    }
    iVar8 = 3;
  }
  else {
    iVar8 = FUN_00401f00(0x70,uVar7);
    local_20 = 0;
    local_4 = 0;
    if (iVar8 != 0) {
      local_20 = FUN_0070e560(uVar4,uVar2,&DAT_00b25f68,uVar3,1);
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      do {
        iVar5 = *(int *)(*(int *)(param_1 + 0x54) + uVar7 * 4);
        iVar13 = *(int *)(*(int *)(local_20 + 0x5c) + uVar7 * 4) + *(int *)(local_20 + 0x50);
        puVar11 = (undefined1 *)
                  (*(int *)(*(int *)(param_1 + 0x5c) + uVar7 * 4) + *(int *)(param_1 + 0x50));
        for (iVar8 = *(int *)(*(int *)(param_1 + 0x58) + uVar7 * 4); iVar9 = iVar5, iVar8 != 0;
            iVar8 = iVar8 + -1) {
          for (; iVar9 != 0; iVar9 = iVar9 + -1) {
            *(undefined1 *)(iVar13 + 2) = puVar11[3];
            *(undefined1 *)(iVar13 + 3) = *puVar11;
            puVar11 = puVar11 + 4;
            iVar13 = iVar13 + 4;
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar3);
    }
    iVar8 = 4;
    local_28 = 4;
  }
  local_24 = 0;
  if (uVar3 != 0) {
    do {
      pcVar12 = (char *)(*(int *)(*(int *)(local_20 + 0x5c) + local_24 * 4) +
                        *(int *)(local_20 + 0x50));
      iVar13 = *(int *)(*(int *)(param_1 + 0x54) + local_24 * 4);
      pcVar16 = (char *)(*(int *)(*(int *)(param_1 + 0x5c) + local_24 * 4) +
                        *(int *)(param_1 + 0x50));
      iVar9 = iVar13 + -1;
      pcVar15 = pcVar16 + iVar8 * iVar13;
      local_1c = 0;
      iVar10 = *(int *)(*(int *)(param_1 + 0x58) + local_24 * 4) + -1;
      pcVar14 = pcVar16;
      for (iVar5 = iVar10; pcVar14 = pcVar14 + iVar8, local_18 = iVar9, iVar5 != 0;
          iVar5 = iVar5 + -1) {
        if (iVar9 == 0) {
LAB_0071c3ac:
          *pcVar12 = '\0';
        }
        else {
          do {
            cVar6 = *pcVar16;
            cVar1 = *pcVar15;
            *pcVar12 = *pcVar14 - cVar6;
            pcVar12[1] = cVar1 - cVar6;
            pcVar12 = pcVar12 + local_28;
            pcVar16 = pcVar16 + iVar8;
            pcVar14 = pcVar14 + iVar8;
            pcVar15 = pcVar15 + iVar8;
            local_18 = local_18 + -1;
          } while (local_18 != 0);
          if (iVar9 == 0) goto LAB_0071c3ac;
          *pcVar12 = *pcVar16 - pcVar16[-iVar8];
        }
        cVar6 = *pcVar16;
        pcVar16 = pcVar16 + iVar8;
        pcVar12[1] = *pcVar15 - cVar6;
        pcVar12 = pcVar12 + local_28;
        pcVar15 = pcVar15 + iVar8;
        local_1c = iVar10;
      }
      pcVar15 = pcVar16 + -(iVar13 * iVar8);
      if (iVar9 == 0) {
LAB_0071c443:
        *pcVar12 = '\0';
        if (local_1c == 0) {
LAB_0071c456:
          pcVar12[1] = '\0';
        }
        else {
          pcVar12[1] = *pcVar16 - *pcVar15;
        }
      }
      else {
        do {
          cVar6 = *pcVar16;
          cVar1 = *pcVar15;
          *pcVar12 = *pcVar14 - cVar6;
          pcVar12[1] = cVar6 - cVar1;
          pcVar12 = pcVar12 + local_28;
          pcVar15 = pcVar15 + iVar8;
          pcVar16 = pcVar16 + iVar8;
          pcVar14 = pcVar14 + iVar8;
          local_18 = local_18 + -1;
        } while (local_18 != 0);
        if (iVar9 == 0) goto LAB_0071c443;
        *pcVar12 = *pcVar16 - pcVar16[-iVar8];
        if (local_1c == 0) goto LAB_0071c456;
        pcVar12[1] = *pcVar16 - *pcVar15;
      }
      local_24 = local_24 + 1;
    } while (local_24 < uVar3);
  }
LAB_0071c477:
  *unaff_FS_OFFSET = local_c;
  return local_20;
}



void FUN_0071c5c0(uint param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
                 uint *param_6,int param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  uint local_58;
  undefined1 auStack_40 [7];
  uint local_39 [14];
  
  iVar10 = *(int *)(param_5 + 0x14);
  pbVar12 = (byte *)FUN_00401f00(param_1 * param_2);
  uVar17 = (param_1 >> 1) * param_2;
  uVar14 = 0;
  pbVar13 = pbVar12;
  if (uVar17 != 0) {
    do {
      *pbVar13 = *(byte *)(uVar14 + param_7) >> 4;
      pbVar13[1] = *(byte *)(uVar14 + param_7) & 0xf;
      uVar14 = uVar14 + 1;
      pbVar13 = pbVar13 + 2;
    } while (uVar14 < uVar17);
  }
  bVar2 = *(byte *)((int)param_6 + 0x16);
  uVar14 = *param_6;
  bVar3 = *(byte *)((int)param_6 + 0x12);
  uVar17 = param_6[2];
  bVar4 = *(byte *)((int)param_6 + 0x11);
  bVar5 = *(byte *)((int)param_6 + 0x15);
  bVar6 = (byte)param_6[5];
  bVar7 = (byte)param_6[4];
  uVar11 = param_6[1];
  uVar16 = (0xffU >> (*(byte *)((int)param_6 + 0x17) & 0x1f)) <<
           (*(byte *)((int)param_6 + 0x13) & 0x1f) & param_6[3];
  local_58 = 0;
  pbVar13 = (byte *)(iVar10 + 1);
  do {
    *(uint *)(auStack_40 + local_58 * 4) =
         (uint)(pbVar13[-1] >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar14 |
         (uint)(pbVar13[1] >> (bVar2 & 0x1f)) << (bVar3 & 0x1f) & uVar17 |
         (uint)(*pbVar13 >> (bVar5 & 0x1f)) << (bVar4 & 0x1f) & uVar11 | uVar16;
    bVar8 = pbVar13[8];
    *(uint *)(pbVar13 + (int)(auStack_40 + (3 - iVar10))) =
         (uint)(pbVar13[3] >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar14 |
         (uint)(pbVar13[4] >> (bVar5 & 0x1f)) << (bVar4 & 0x1f) & uVar11 |
         (uint)(pbVar13[5] >> (bVar2 & 0x1f)) << (bVar3 & 0x1f) & uVar17 | uVar16;
    bVar9 = pbVar13[0xc];
    *(uint *)(pbVar13 + ((int)local_39 - iVar10)) =
         (uint)(pbVar13[7] >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar14 |
         (uint)(bVar8 >> (bVar5 & 0x1f)) << (bVar4 & 0x1f) & uVar11 |
         (uint)(pbVar13[9] >> (bVar2 & 0x1f)) << (bVar3 & 0x1f) & uVar17 | uVar16;
    pbVar15 = pbVar13 + 0xb;
    pbVar1 = pbVar13 + 0xd;
    pbVar13 = pbVar13 + 0x10;
    *(uint *)(pbVar13 + (int)local_39 + (-0xc - iVar10)) =
         (uint)(*pbVar15 >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar14 |
         (uint)(bVar9 >> (bVar5 & 0x1f)) << (bVar4 & 0x1f) & uVar11 |
         (uint)(*pbVar1 >> (bVar2 & 0x1f)) << (bVar3 & 0x1f) & uVar17 | uVar16;
    local_58 = local_58 + 4;
    pbVar15 = pbVar12;
  } while (local_58 < 0x10);
  for (; uVar14 = param_1, param_2 != 0; param_2 = param_2 + -1) {
    for (; uVar14 != 0; uVar14 = uVar14 - 1) {
      *param_4 = *(undefined4 *)(auStack_40 + (uint)*pbVar15 * 4);
      param_4 = param_4 + 1;
      pbVar15 = pbVar15 + 1;
    }
  }
  FUN_00401f20(pbVar12);
  return;
}



void FUN_0071c840(uint param_1,int param_2,undefined4 param_3,undefined1 *param_4,int param_5,
                 int *param_6,int param_7)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_5 + 0x14);
  if (param_6[1] == 0xff00) {
    pbVar2 = (byte *)FUN_00401f00(param_1 * param_2);
    uVar5 = (param_1 >> 1) * param_2;
    uVar4 = 0;
    pbVar3 = pbVar2;
    if (uVar5 != 0) {
      do {
        *pbVar3 = *(byte *)(uVar4 + param_7) >> 4;
        pbVar3[1] = *(byte *)(uVar4 + param_7) & 0xf;
        uVar4 = uVar4 + 1;
        pbVar3 = pbVar3 + 2;
      } while (uVar4 < uVar5);
    }
    if (*param_6 == 0xff) {
      pbVar3 = pbVar2;
      uVar4 = param_1;
      if (param_2 != 0) {
        do {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *param_4 = *(undefined1 *)(iVar1 + (uint)*pbVar3 * 4);
            param_4[1] = *(undefined1 *)(iVar1 + 1 + (uint)*pbVar3 * 4);
            param_4[2] = *(undefined1 *)(iVar1 + 2 + (uint)*pbVar3 * 4);
            param_4 = param_4 + 3;
            pbVar3 = pbVar3 + 1;
          }
          param_2 = param_2 + -1;
          uVar4 = param_1;
        } while (param_2 != 0);
        FUN_00401f20(pbVar2);
        return;
      }
    }
    else {
      pbVar3 = pbVar2;
      if (*param_6 == 0xff0000) {
        for (; uVar4 = param_1, param_2 != 0; param_2 = param_2 + -1) {
          for (; uVar4 != 0; uVar4 = uVar4 - 1) {
            *param_4 = *(undefined1 *)(iVar1 + 2 + (uint)*pbVar3 * 4);
            param_4[1] = *(undefined1 *)(iVar1 + 1 + (uint)*pbVar3 * 4);
            param_4[2] = *(undefined1 *)(iVar1 + (uint)*pbVar3 * 4);
            param_4 = param_4 + 3;
            pbVar3 = pbVar3 + 1;
          }
        }
      }
    }
    FUN_00401f20(pbVar2);
  }
  return;
}



void FUN_0071c980(uint param_1,int param_2,undefined4 param_3,undefined4 *param_4,int param_5,
                 uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  uint local_58;
  undefined1 auStack_40 [6];
  uint local_3a [14];
  
  iVar11 = *(int *)(param_5 + 0x14);
  pbVar14 = (byte *)FUN_00401f00(param_1 * param_2);
  uVar18 = (param_1 >> 1) * param_2;
  uVar17 = 0;
  pbVar15 = pbVar14;
  if (uVar18 != 0) {
    do {
      *pbVar15 = *(byte *)(uVar17 + param_7) >> 4;
      pbVar15[1] = *(byte *)(uVar17 + param_7) & 0xf;
      uVar17 = uVar17 + 1;
      pbVar15 = pbVar15 + 2;
    } while (uVar17 < uVar18);
  }
  bVar1 = *(byte *)((int)param_6 + 0x17);
  bVar2 = *(byte *)((int)param_6 + 0x13);
  uVar17 = param_6[3];
  bVar3 = *(byte *)((int)param_6 + 0x16);
  bVar4 = *(byte *)((int)param_6 + 0x12);
  bVar5 = (byte)param_6[4];
  uVar18 = *param_6;
  uVar12 = param_6[2];
  bVar6 = *(byte *)((int)param_6 + 0x15);
  bVar7 = *(byte *)((int)param_6 + 0x11);
  bVar8 = (byte)param_6[5];
  uVar13 = param_6[1];
  local_58 = 0;
  pbVar15 = (byte *)(iVar11 + 2);
  do {
    *(uint *)(auStack_40 + local_58 * 4) =
         (uint)(pbVar15[-2] >> (bVar8 & 0x1f)) << (bVar5 & 0x1f) & uVar18 |
         (uint)(pbVar15[-1] >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar13 |
         (uint)(pbVar15[1] >> (bVar1 & 0x1f)) << (bVar2 & 0x1f) & uVar17 |
         (uint)(*pbVar15 >> (bVar3 & 0x1f)) << (bVar4 & 0x1f) & uVar12;
    bVar9 = pbVar15[7];
    *(uint *)(pbVar15 + (int)(auStack_40 + (2 - iVar11))) =
         (uint)(pbVar15[2] >> (bVar8 & 0x1f)) << (bVar5 & 0x1f) & uVar18 |
         (uint)(pbVar15[3] >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar13 |
         (uint)(pbVar15[4] >> (bVar3 & 0x1f)) << (bVar4 & 0x1f) & uVar12 |
         (uint)(pbVar15[5] >> (bVar1 & 0x1f)) << (bVar2 & 0x1f) & uVar17;
    pbVar16 = pbVar15 + 0x10;
    bVar10 = pbVar15[0xb];
    *(uint *)(pbVar16 + (int)local_3a + (-0x10 - iVar11)) =
         (uint)(pbVar15[6] >> (bVar8 & 0x1f)) << (bVar5 & 0x1f) & uVar18 |
         (uint)(bVar9 >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar13 |
         (uint)(pbVar15[8] >> (bVar3 & 0x1f)) << (bVar4 & 0x1f) & uVar12 |
         (uint)(pbVar15[9] >> (bVar1 & 0x1f)) << (bVar2 & 0x1f) & uVar17;
    *(uint *)(pbVar16 + (int)local_3a + (-0xc - iVar11)) =
         (uint)(pbVar15[10] >> (bVar8 & 0x1f)) << (bVar5 & 0x1f) & uVar18 |
         (uint)(bVar10 >> (bVar6 & 0x1f)) << (bVar7 & 0x1f) & uVar13 |
         (uint)(pbVar15[0xc] >> (bVar3 & 0x1f)) << (bVar4 & 0x1f) & uVar12 |
         (uint)(pbVar15[0xd] >> (bVar1 & 0x1f)) << (bVar2 & 0x1f) & uVar17;
    local_58 = local_58 + 4;
    pbVar15 = pbVar16;
    pbVar16 = pbVar14;
  } while (local_58 < 0x10);
  for (; uVar17 = param_1, param_2 != 0; param_2 = param_2 + -1) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1) {
      *param_4 = *(undefined4 *)(auStack_40 + (uint)*pbVar16 * 4);
      param_4 = param_4 + 1;
      pbVar16 = pbVar16 + 1;
    }
  }
  FUN_00401f20(pbVar14);
  return;
}



void FUN_0071d7f0(int param_1,int param_2,undefined4 param_3,ushort *param_4,undefined4 param_5,
                 ushort *param_6,byte *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort *puVar4;
  int local_4;
  
  if (param_2 != 0) {
    local_4 = param_2;
    do {
      if (param_1 != 0) {
        param_2 = param_1;
        puVar4 = param_4;
        do {
          bVar3 = *param_7;
          pbVar1 = param_7 + 1;
          pbVar2 = param_7 + 2;
          param_7 = param_7 + 3;
          param_4 = puVar4 + 1;
          *puVar4 = (ushort)((0xffU >> (*(byte *)((int)param_6 + 0x17) & 0x1f)) <<
                            (*(byte *)((int)param_6 + 0x13) & 0x1f)) & param_6[6] |
                    (ushort)(bVar3 >> ((byte)param_6[10] & 0x1f)) << ((byte)param_6[8] & 0x1f) &
                    *param_6 |
                    (ushort)(*pbVar2 >> ((byte)param_6[0xb] & 0x1f)) << ((byte)param_6[9] & 0x1f) &
                    param_6[4] |
                    (ushort)(*pbVar1 >> (*(byte *)((int)param_6 + 0x15) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x11) & 0x1f) & param_6[2];
          param_2 = param_2 + -1;
          puVar4 = param_4;
        } while (param_2 != 0);
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}



void FUN_0071d960(int param_1,int param_2,undefined4 param_3,uint *param_4,undefined4 param_5,
                 uint *param_6,byte *param_7)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint *puVar4;
  int local_4;
  
  if (param_2 != 0) {
    local_4 = param_2;
    do {
      if (param_1 != 0) {
        param_2 = param_1;
        puVar4 = param_4;
        do {
          bVar2 = *param_7;
          pbVar1 = param_7 + 1;
          pbVar3 = param_7 + 2;
          param_7 = param_7 + 3;
          param_4 = puVar4 + 1;
          *puVar4 = (uint)(bVar2 >> ((byte)param_6[5] & 0x1f)) << ((byte)param_6[4] & 0x1f) &
                    *param_6 |
                    (uint)(*pbVar1 >> (*(byte *)((int)param_6 + 0x15) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x11) & 0x1f) & param_6[1] |
                    (uint)(*pbVar3 >> (*(byte *)((int)param_6 + 0x16) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x12) & 0x1f) & param_6[2] |
                    (0xffU >> (*(byte *)((int)param_6 + 0x17) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x13) & 0x1f) & param_6[3];
          param_2 = param_2 + -1;
          puVar4 = param_4;
        } while (param_2 != 0);
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}



void FUN_0071da20(int param_1,int param_2,undefined4 param_3,ushort *param_4,undefined4 param_5,
                 ushort *param_6,byte *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  int local_4;
  
  if (param_2 != 0) {
    local_4 = param_2;
    iVar5 = param_1;
    do {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        bVar4 = *param_7;
        pbVar1 = param_7 + 1;
        pbVar2 = param_7 + 2;
        pbVar3 = param_7 + 3;
        param_7 = param_7 + 4;
        *param_4 = (ushort)(*pbVar1 >> (*(byte *)((int)param_6 + 0x15) & 0x1f)) <<
                   (*(byte *)((int)param_6 + 0x11) & 0x1f) & param_6[2] |
                   (ushort)(bVar4 >> ((byte)param_6[10] & 0x1f)) << ((byte)param_6[8] & 0x1f) &
                   *param_6 |
                   (ushort)(*pbVar3 >> (*(byte *)((int)param_6 + 0x17) & 0x1f)) <<
                   (*(byte *)((int)param_6 + 0x13) & 0x1f) & param_6[6] |
                   (ushort)(*pbVar2 >> ((byte)param_6[0xb] & 0x1f)) << ((byte)param_6[9] & 0x1f) &
                   param_6[4];
        param_4 = param_4 + 1;
      }
      local_4 = local_4 + -1;
      iVar5 = param_1;
    } while (local_4 != 0);
  }
  return;
}



void FUN_0071e240(int param_1,int param_2,undefined4 param_3,ushort *param_4,undefined4 param_5,
                 ushort *param_6,byte *param_7)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort *puVar4;
  int local_4;
  
  if (param_2 != 0) {
    local_4 = param_2;
    do {
      if (param_1 != 0) {
        param_2 = param_1;
        puVar4 = param_4;
        do {
          bVar3 = *param_7;
          pbVar1 = param_7 + 1;
          pbVar2 = param_7 + 2;
          param_7 = param_7 + 4;
          param_4 = puVar4 + 1;
          *puVar4 = (ushort)(*pbVar2 >> (*(byte *)((int)param_6 + 0x17) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x13) & 0x1f) & param_6[6] |
                    (ushort)(*pbVar1 >> (*(byte *)((int)param_6 + 0x15) & 0x1f)) <<
                    (*(byte *)((int)param_6 + 0x11) & 0x1f) & param_6[2] |
                    (ushort)(bVar3 >> ((byte)param_6[10] & 0x1f)) << ((byte)param_6[8] & 0x1f) &
                    *param_6;
          param_2 = param_2 + -1;
          puVar4 = param_4;
        } while (param_2 != 0);
      }
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0071e9a7) */
/* WARNING: Removing unreachable block (ram,0x0071e9b1) */
/* WARNING: Removing unreachable block (ram,0x0071ea32) */
/* WARNING: Removing unreachable block (ram,0x0071ea3c) */
/* WARNING: Removing unreachable block (ram,0x0071e9ed) */
/* WARNING: Removing unreachable block (ram,0x0071e9f7) */
/* WARNING: Removing unreachable block (ram,0x0071e889) */
/* WARNING: Removing unreachable block (ram,0x0071e91b) */
/* WARNING: Removing unreachable block (ram,0x0071ea0e) */
/* WARNING: Removing unreachable block (ram,0x0071ea18) */
/* WARNING: Removing unreachable block (ram,0x0071e986) */
/* WARNING: Removing unreachable block (ram,0x0071e990) */
/* WARNING: Removing unreachable block (ram,0x0071e9cb) */
/* WARNING: Removing unreachable block (ram,0x0071e9d5) */

int FUN_0071e790(int param_1,byte *param_2,int param_3,char param_4)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ca013;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (((*(byte *)(param_1 + 8) & 1) != 0) && ((*param_2 & 1) != 0)) {
    if ((3 < *(int *)(param_1 + 0xc)) &&
       ((*(int *)(param_1 + 0xc) < 7 && (*(int *)(param_2 + 4) != *(int *)(param_1 + 0xc))))) {
      uVar4 = FUN_00734460(param_1);
      FUN_0075fa90(uVar4);
      param_1 = 0;
    }
    local_4 = CONCAT31(local_4._1_3_,1);
    if (((((param_4 != '\0') && (*(uint *)(param_1 + 0x60) < 2)) &&
         (uVar1 = **(uint **)(param_1 + 0x54), uVar1 != 0)) &&
        (((uVar1 & uVar1 - 1) == 0 &&
         (cVar2 = FUN_0071b460(**(undefined4 **)(param_1 + 0x58),uVar3), cVar2 != '\0')))) &&
       (((iVar5 = *(int *)(param_2 + 4), iVar5 == 0 || ((iVar5 == 1 || (iVar5 == 8)))) ||
        (iVar5 == 9)))) {
      uVar4 = FUN_0071b8d0(param_1,param_3);
      FUN_0075fa90(uVar4);
    }
    if ((((param_3 != 0) && (cVar2 = FUN_0071ad40(param_2), cVar2 != '\0')) &&
        ((param_4 == '\0' || (1 < *(uint *)(param_3 + 0x60))))) &&
       ((param_3 == param_1 ||
        (cVar2 = (**(code **)(*in_ECX + 0x2c))(param_3,param_1,0xffffffff), cVar2 != '\0')))) {
      local_4 = local_4 & 0xffffff00;
      FUN_007016a0();
      local_4 = 0xffffffff;
      FUN_007016a0();
      goto LAB_0071ea48;
    }
    local_4._0_1_ = 2;
    if ((*(int *)(param_2 + 4) == 8) || (*(int *)(param_2 + 4) == 9)) {
      uVar4 = (**(code **)(*in_ECX + 0x30))(param_1,param_2);
      FUN_0075fa90(uVar4);
    }
    iVar5 = FUN_00401f00(0x70);
    local_4._0_1_ = 3;
    if (iVar5 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_0070e560(**(undefined4 **)(param_1 + 0x54),**(undefined4 **)(param_1 + 0x58),
                             param_2,*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c)
                            );
    }
    local_4._0_1_ = 2;
    cVar2 = (**(code **)(*in_ECX + 0x2c))(param_3,param_1,0xffffffff);
    if (cVar2 != '\0') goto LAB_0071ea48;
  }
  param_3 = 0;
LAB_0071ea48:
  *unaff_FS_OFFSET = local_c;
  return param_3;
}



undefined4 FUN_0071ea60(int param_1,code *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  uint local_48;
  undefined1 local_3c [12];
  int local_30;
  uint local_24;
  int local_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = (int)param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca067;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((**(int **)((int)param_2 + 0x54) == **(int **)(param_1 + 0x54)) &&
      (**(int **)((int)param_2 + 0x58) == **(int **)(param_1 + 0x58))) &&
     (uVar2 = *(uint *)((int)param_2 + 0x6c), uVar2 == *(uint *)(param_1 + 0x6c))) {
    if (param_3 == 0xffffffff) {
      if (*(uint *)(param_1 + 0x60) <= *(uint *)((int)param_2 + 0x60)) {
        local_48 = 0;
        uVar11 = *(uint *)(param_1 + 0x60) - 1;
LAB_0071eafc:
        cVar6 = FUN_0071ad40(param_1 + 8);
        if (cVar6 != '\0') {
          param_2 = (code *)0x0;
          uVar4 = local_48;
          if (uVar2 != 0) {
            do {
              for (; uVar4 <= uVar11; uVar4 = uVar4 + 1) {
                iVar9 = *(int *)(iVar5 + 0x5c);
                _memcpy((void *)(*(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 4) *
                                 (int)param_2 + *(int *)(*(int *)(param_1 + 0x5c) + uVar4 * 4) +
                                *(int *)(param_1 + 0x50)),
                        (void *)(*(int *)(iVar9 + *(int *)(iVar5 + 0x60) * 4) * (int)param_2 +
                                 *(int *)(iVar9 + uVar4 * 4) + *(int *)(iVar5 + 0x50)),
                        *(int *)(iVar9 + 4 + uVar4 * 4) - *(int *)(iVar9 + uVar4 * 4));
              }
              param_2 = (code *)((int)param_2 + 1);
              uVar4 = local_48;
            } while (param_2 < uVar2);
          }
          if (*(int *)(iVar5 + 0x4c) != 0) {
            if (*(int *)(param_1 + 0x4c) == 0) {
              iVar9 = FUN_00401f00(0x24,uVar8);
              local_4 = 0;
              if (iVar9 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = FUN_00732690(*(undefined4 *)(iVar5 + 0x4c));
              }
              local_4 = 0xffffffff;
              FUN_0071b140(uVar10);
              uVar10 = 1;
              goto LAB_0071f486;
            }
            FUN_00732480(*(int *)(iVar5 + 0x4c));
          }
          uVar10 = 1;
          goto LAB_0071f486;
        }
        iVar9 = *(int *)(param_1 + 0xc);
        iVar3 = *(int *)((int)param_2 + 0xc);
        cVar6 = *(char *)(param_1 + 9);
        cVar1 = *(char *)((int)param_2 + 9);
        FUN_0071b4d0(param_1 + 8);
        FUN_0071b4d0((int)param_2 + 8);
        if ((((iVar9 != 4) && (iVar9 != 5)) && (iVar9 != 6)) &&
           ((cVar6 != '\x18' ||
            ((local_20 == 0xff00 && ((local_24 == 0xff || (local_24 == 0xff0000)))))))) {
          cVar7 = FUN_0071ad40(&DAT_00b25ce0);
          if (cVar7 == '\0') {
            cVar7 = FUN_0071ad40(&DAT_00b25d28);
            if (cVar7 == '\0') {
              cVar7 = FUN_0071ad40(&DAT_00b25d70);
              if (cVar7 == '\0') {
                cVar7 = FUN_0071ad40(&DAT_00b25db8);
                if (cVar7 == '\0') {
                  cVar7 = FUN_0071ad40(&DAT_00b25e48);
                  if (cVar7 == '\0') {
                    cVar7 = FUN_0071ad40(&DAT_00b25e00);
                    if (cVar7 == '\0') {
                      cVar7 = FUN_0071ad40(&DAT_00b25f20);
                      if (cVar7 == '\0') {
                        cVar7 = FUN_0071ad40(&DAT_00b25f68);
                        if (cVar7 == '\0') {
                          cVar6 = FUN_0071ad40(&DAT_00b25e90);
                          if ((cVar6 == '\0') ||
                             (cVar6 = FUN_0071ad40(&DAT_00b25ed8), cVar6 == '\0')) {
                            cVar6 = FUN_0071ad40(&DAT_00b25ed8);
                            if ((cVar6 == '\0') ||
                               (cVar6 = FUN_0071ad40(&DAT_00b25e90), cVar6 == '\0')) {
                              if ((iVar3 != 0) && (iVar3 != 1)) goto LAB_0071f484;
                              cVar6 = FUN_0071ad40(&DAT_00b25e00);
                              if (cVar6 == '\0') {
                                cVar6 = FUN_0071ad40(&DAT_00b25e48);
                                if (cVar6 == '\0') goto LAB_0071f484;
                                if (cVar1 == '\x10') {
                                  param_2 = (code *)&LAB_0071dcb0;
                                }
                                else if (cVar1 == '\x18') {
                                  param_2 = (code *)&LAB_0071de80;
                                }
                                else {
                                  if (cVar1 != ' ') goto LAB_0071f484;
                                  param_2 = (code *)&LAB_0071dfe0;
                                }
                              }
                              else if (cVar1 == '\x10') {
                                if (local_30 == 0) {
                                  param_2 = (code *)&LAB_0071ddf0;
                                }
                                else {
                                  param_2 = (code *)&LAB_0071dd40;
                                }
                              }
                              else if (cVar1 == '\x18') {
                                param_2 = (code *)&LAB_0071df10;
                              }
                              else {
                                if (cVar1 != ' ') goto LAB_0071f484;
                                if (local_30 == 0) {
                                  param_2 = (code *)&LAB_0071e110;
                                }
                                else {
                                  param_2 = (code *)&LAB_0071e060;
                                }
                              }
                            }
                            else {
                              param_2 = (code *)&DAT_0071c5b0;
                            }
                          }
                          else {
                            param_2 = (code *)&LAB_0071c490;
                          }
                        }
                        else {
                          if ((iVar9 != 8) && (iVar9 != 9)) goto LAB_0071f484;
                          if (cVar6 == '\x10') {
                            param_2 = FUN_0071e240;
                          }
                          else {
                            if (cVar6 != ' ') goto LAB_0071f484;
                            param_2 = (code *)&LAB_0071e1a0;
                          }
                        }
                      }
                      else {
                        if ((iVar9 != 8) && (iVar9 != 9)) goto LAB_0071f484;
                        if (cVar6 == '\x10') {
                          param_2 = (code *)&LAB_0071e390;
                        }
                        else {
                          if (cVar6 != ' ') goto LAB_0071f484;
                          param_2 = (code *)&LAB_0071e300;
                        }
                      }
                      goto LAB_0071f3f8;
                    }
                    if ((iVar9 == 0) || (iVar9 == 1)) {
                      if (cVar6 == '\x10') {
                        param_2 = FUN_0071da20;
                      }
                      else if (cVar6 == '\x18') {
                        param_2 = (code *)&LAB_0071db00;
                      }
                      else {
                        if (cVar6 != ' ') goto LAB_0071f484;
                        param_2 = (code *)&LAB_0071dbd0;
                      }
                      goto LAB_0071f3f8;
                    }
                  }
                  else if ((iVar9 == 0) || (iVar9 == 1)) {
                    if (cVar6 == '\x10') {
                      param_2 = FUN_0071d7f0;
                    }
                    else if (cVar6 == '\x18') {
                      param_2 = (code *)&LAB_0071d8d0;
                    }
                    else {
                      if (cVar6 != ' ') goto LAB_0071f484;
                      param_2 = FUN_0071d960;
                    }
                    goto LAB_0071f3f8;
                  }
                }
                else if (*(int *)((int)param_2 + 0x4c) != 0) {
                  if ((iVar9 == 0) || (iVar9 == 1)) {
                    if (cVar6 == '\x10') {
                      param_2 = (code *)&LAB_0071d160;
                    }
                    else if (cVar6 == '\x18') {
                      param_2 = (code *)&LAB_0071d4a0;
                    }
                    else {
                      if (cVar6 != ' ') goto LAB_0071f484;
                      param_2 = (code *)&LAB_0071d580;
                    }
                    goto LAB_0071f3f8;
                  }
                  cVar6 = FUN_0071ad40(&DAT_00b25d70);
                  if (cVar6 != '\0') {
                    param_2 = (code *)0x0;
                    uVar8 = local_48;
                    if (uVar2 != 0) {
                      do {
                        for (; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                          iVar9 = *(int *)(iVar5 + 0x5c);
                          _memcpy((void *)(*(int *)(*(int *)(param_1 + 0x5c) +
                                                   *(int *)(param_1 + 0x60) * 4) * (int)param_2 +
                                           *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4) +
                                          *(int *)(param_1 + 0x50)),
                                  (void *)(*(int *)(iVar9 + *(int *)(iVar5 + 0x60) * 4) *
                                           (int)param_2 + *(int *)(iVar9 + uVar8 * 4) +
                                          *(int *)(iVar5 + 0x50)),
                                  *(int *)(iVar9 + 4 + uVar8 * 4) - *(int *)(iVar9 + uVar8 * 4));
                        }
                        param_2 = (code *)((int)param_2 + 1);
                        uVar8 = local_48;
                      } while (param_2 < uVar2);
                    }
                    if (*(int *)(iVar5 + 0x4c) != 0) {
                      iVar9 = FUN_00401f00(0x24);
                      local_4 = 4;
                      if (iVar9 == 0) goto LAB_0071eec5;
                      uVar10 = FUN_00732750(0,0x100,*(undefined4 *)(*(int *)(iVar5 + 0x4c) + 0x14));
                      goto LAB_0071eec7;
                    }
                  }
                }
              }
              else if (*(int *)((int)param_2 + 0x4c) != 0) {
                if ((iVar9 == 0) || (iVar9 == 1)) {
                  if (cVar6 == '\x10') {
                    param_2 = (code *)&LAB_0071cc50;
                  }
                  else if (cVar6 == '\x18') {
                    param_2 = (code *)&LAB_0071d4a0;
                  }
                  else {
                    if (cVar6 != ' ') goto LAB_0071f484;
                    param_2 = (code *)&LAB_0071cf40;
                  }
                  goto LAB_0071f3f8;
                }
                cVar6 = FUN_0071ad40(&DAT_00b25db8);
                if (cVar6 != '\0') {
                  param_2 = (code *)0x0;
                  uVar8 = local_48;
                  if (uVar2 != 0) {
                    do {
                      for (; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                        iVar9 = *(int *)(iVar5 + 0x5c);
                        _memcpy((void *)(*(int *)(*(int *)(param_1 + 0x5c) +
                                                 *(int *)(param_1 + 0x60) * 4) * (int)param_2 +
                                         *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4) +
                                        *(int *)(param_1 + 0x50)),
                                (void *)(*(int *)(iVar9 + *(int *)(iVar5 + 0x60) * 4) * (int)param_2
                                         + *(int *)(iVar9 + uVar8 * 4) + *(int *)(iVar5 + 0x50)),
                                *(int *)(iVar9 + 4 + uVar8 * 4) - *(int *)(iVar9 + uVar8 * 4));
                      }
                      param_2 = (code *)((int)param_2 + 1);
                      uVar8 = local_48;
                    } while (param_2 < uVar2);
                  }
                  iVar9 = *(int *)(iVar5 + 0x4c);
                  if (iVar9 != 0) {
                    if (*(int *)(param_1 + 0x4c) != 0) goto LAB_0071ed7a;
                    iVar9 = FUN_00401f00(0x24);
                    local_4 = 3;
                    goto LAB_0071ed55;
                  }
                }
              }
            }
            else if (*(int *)((int)param_2 + 0x4c) != 0) {
              if ((iVar9 == 0) || (iVar9 == 1)) {
                if (cVar6 == '\x18') {
                  param_2 = FUN_0071c840;
                }
                else {
                  if (cVar6 != ' ') goto LAB_0071f484;
                  param_2 = FUN_0071c980;
                }
                goto LAB_0071f3f8;
              }
              cVar6 = FUN_0071ad40(&DAT_00b25ce0);
              if (cVar6 != '\0') {
                param_2 = (code *)0x0;
                uVar8 = local_48;
                if (uVar2 != 0) {
                  do {
                    for (; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                      iVar9 = *(int *)(iVar5 + 0x5c);
                      _memcpy((void *)(*(int *)(*(int *)(param_1 + 0x5c) +
                                               *(int *)(param_1 + 0x60) * 4) * (int)param_2 +
                                       *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4) +
                                      *(int *)(param_1 + 0x50)),
                              (void *)(*(int *)(iVar9 + *(int *)(iVar5 + 0x60) * 4) * (int)param_2 +
                                       *(int *)(iVar9 + uVar8 * 4) + *(int *)(iVar5 + 0x50)),
                              *(int *)(iVar9 + 4 + uVar8 * 4) - *(int *)(iVar9 + uVar8 * 4));
                    }
                    param_2 = (code *)((int)param_2 + 1);
                    uVar8 = local_48;
                  } while (param_2 < uVar2);
                }
                if (*(int *)(iVar5 + 0x4c) != 0) {
                  iVar9 = FUN_00401f00(0x24);
                  local_4 = 2;
                  if (iVar9 == 0) {
LAB_0071eec5:
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = FUN_00732750(0,0x10,*(undefined4 *)(*(int *)(iVar5 + 0x4c) + 0x14));
                  }
LAB_0071eec7:
                  local_4 = 0xffffffff;
                  FUN_0071b140(uVar10);
                  uVar10 = 1;
                  goto LAB_0071f486;
                }
              }
            }
          }
          else if (*(int *)((int)param_2 + 0x4c) != 0) {
            if ((iVar9 == 0) || (iVar9 == 1)) {
              if (cVar6 == '\x18') {
                param_2 = FUN_0071c840;
              }
              else {
                if (cVar6 != ' ') goto LAB_0071f484;
                param_2 = FUN_0071c5c0;
              }
LAB_0071f3f8:
              param_3 = 0;
              uVar8 = local_48;
              if (uVar2 != 0) {
                do {
                  for (; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                    iVar9 = *(int *)(param_1 + 0x5c);
                    (*param_2)(*(undefined4 *)(*(int *)(param_1 + 0x54) + uVar8 * 4),
                               *(undefined4 *)(*(int *)(param_1 + 0x58) + uVar8 * 4),
                               *(int *)(iVar9 + 4 + uVar8 * 4) - *(int *)(iVar9 + uVar8 * 4),
                               *(int *)(iVar9 + *(int *)(param_1 + 0x60) * 4) * param_3 +
                               *(int *)(iVar9 + uVar8 * 4) + *(int *)(param_1 + 0x50),
                               *(undefined4 *)(iVar5 + 0x4c),&local_24,
                               *(int *)(*(int *)(iVar5 + 0x5c) + *(int *)(iVar5 + 0x60) * 4) *
                               param_3 + *(int *)(*(int *)(iVar5 + 0x5c) + uVar8 * 4) +
                               *(int *)(iVar5 + 0x50),local_3c);
                  }
                  param_3 = param_3 + 1;
                  uVar8 = local_48;
                } while (param_3 < uVar2);
              }
              uVar10 = 1;
              goto LAB_0071f486;
            }
            cVar6 = FUN_0071ad40(&DAT_00b25d28);
            if (cVar6 != '\0') {
              param_2 = (code *)0x0;
              uVar8 = local_48;
              if (uVar2 != 0) {
                do {
                  for (; uVar8 <= uVar11; uVar8 = uVar8 + 1) {
                    iVar9 = *(int *)(iVar5 + 0x5c);
                    _memcpy((void *)(*(int *)(*(int *)(param_1 + 0x5c) +
                                             *(int *)(param_1 + 0x60) * 4) * (int)param_2 +
                                     *(int *)(*(int *)(param_1 + 0x5c) + uVar8 * 4) +
                                    *(int *)(param_1 + 0x50)),
                            (void *)(*(int *)(iVar9 + *(int *)(iVar5 + 0x60) * 4) * (int)param_2 +
                                     *(int *)(iVar9 + uVar8 * 4) + *(int *)(iVar5 + 0x50)),
                            *(int *)(iVar9 + 4 + uVar8 * 4) - *(int *)(iVar9 + uVar8 * 4));
                  }
                  param_2 = (code *)((int)param_2 + 1);
                  uVar8 = local_48;
                } while (param_2 < uVar2);
              }
              iVar9 = *(int *)(iVar5 + 0x4c);
              if (iVar9 != 0) {
                if (*(int *)(param_1 + 0x4c) == 0) {
                  iVar9 = FUN_00401f00(0x24);
                  local_4 = 1;
LAB_0071ed55:
                  if (iVar9 == 0) {
                    uVar10 = 0;
                  }
                  else {
                    uVar10 = FUN_00732690(*(undefined4 *)(iVar5 + 0x4c));
                  }
                  local_4 = 0xffffffff;
                  FUN_0071b140(uVar10);
                }
                else {
LAB_0071ed7a:
                  FUN_00732480(iVar9);
                }
                if (*(int *)(*(int *)(param_1 + 0x4c) + 0xc) != 0) {
                  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x4c) + 0x14) + 3) = 0xff;
                }
                uVar10 = 1;
                goto LAB_0071f486;
              }
            }
          }
        }
      }
    }
    else if ((param_3 < *(uint *)((int)param_2 + 0x60)) && (param_3 < *(uint *)(param_1 + 0x60))) {
      local_48 = param_3;
      uVar11 = param_3;
      goto LAB_0071eafc;
    }
  }
LAB_0071f484:
  uVar10 = 0;
LAB_0071f486:
  *unaff_FS_OFFSET = local_c;
  return uVar10;
}



undefined4 * FUN_0071f4a0(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  size_t _Size;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_65;
  int iStack_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int *local_54;
  undefined1 local_50 [68];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca0a3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff8c;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*param_1 != 0) {
    local_54 = in_ECX;
    FUN_0070f2e0(uVar3);
    cVar2 = (**(code **)(*in_ECX + 4))(*param_1,local_50,&local_65,&local_58,&local_5c,&local_60);
    if ((cVar2 != '\0') && (local_60 == 1)) {
      iStack_64 = FUN_00401f00(0x70);
      uStack_4 = 0;
      if (iStack_64 == 0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        puVar4 = (undefined4 *)FUN_0070e560(local_58,local_5c,local_50,param_2,1);
      }
      uStack_4 = 0xffffffff;
      if (puVar4 != (undefined4 *)0x0) {
        uVar3 = 0;
        if (param_2 != 0) {
          do {
            if (param_1[uVar3] == 0) {
              (**(code **)*puVar4)(1);
              goto LAB_0071f665;
            }
            iStack_64 = 0;
            uStack_4 = 1;
            if ((uVar3 != 0) || (iVar5 = param_3, param_3 == 0)) {
              iVar5 = (**(code **)(*local_54 + 8))(param_1[uVar3],0);
            }
            FUN_0075fa90(iVar5);
            iVar5 = iStack_64;
            if (iStack_64 == 0) {
LAB_0071f67c:
              (**(code **)*puVar4)(1);
              uStack_4 = 0xffffffff;
              FUN_007016a0();
              goto LAB_0071f665;
            }
            _Size = *(int *)(puVar4[0x17] + 4 + uVar3 * 4) - *(int *)(puVar4[0x17] + uVar3 * 4);
            piVar1 = *(int **)(iStack_64 + 0x5c);
            if (_Size != piVar1[1] - *piVar1) goto LAB_0071f67c;
            _memcpy((void *)(*(int *)(puVar4[0x17] + uVar3 * 4) + puVar4[0x14]),
                    (void *)(*(int *)(iStack_64 + 0x50) + *piVar1),_Size);
            if ((uVar3 == 0) && (cVar2 = FUN_0071b480(), cVar2 != '\0')) {
              FUN_0071b140(*(undefined4 *)(iVar5 + 0x4c));
            }
            uStack_4 = 0xffffffff;
            FUN_007016a0();
            uVar3 = uVar3 + 1;
          } while (uVar3 < param_2);
        }
        *unaff_FS_OFFSET = local_c;
        return puVar4;
      }
    }
  }
LAB_0071f665:
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_0071f6a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca0c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f534;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a7f524;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071f710(byte param_1)

{
  FUN_0071f6a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0071f730(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ca114;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f554;
  local_4 = 2;
  if (in_ECX[0x227] != 0) {
    do {
      piVar1 = (int *)in_ECX[0x225];
      iVar2 = *piVar1;
      in_ECX[0x225] = iVar2;
      if (iVar2 == 0) {
        in_ECX[0x226] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      puVar3 = (undefined4 *)piVar1[2];
      (**(code **)(in_ECX[0x224] + 8))(piVar1,uVar4);
      in_ECX[0x227] = in_ECX[0x227] + -1;
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    } while (in_ECX[0x227] != 0);
  }
  local_4._0_1_ = 1;
  FUN_0071f6a0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0060d0a0();
  local_4 = 0xffffffff;
  FUN_0071ae40();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0071f860(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca18b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0071add0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a7f554;
  FUN_00734710();
  piVar5 = in_ECX + 0x224;
  in_ECX[0x227] = 0;
  in_ECX[0x225] = 0;
  in_ECX[0x226] = 0;
  *piVar5 = (int)&PTR_FUN_00a7f544;
  local_4._0_1_ = 2;
  iVar2 = FUN_00401f00(0x180);
  local_4._0_1_ = 3;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00737750();
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
  puVar4[2] = uVar3;
  puVar4[1] = 0;
  *puVar4 = in_ECX[0x225];
  if (in_ECX[0x225] == 0) {
    in_ECX[0x226] = puVar4;
  }
  else {
    *(undefined4 **)(in_ECX[0x225] + 4) = puVar4;
  }
  in_ECX[0x227] = in_ECX[0x227] + 1;
  in_ECX[0x225] = puVar4;
  iVar2 = FUN_00401f00(0x180);
  local_4._0_1_ = 4;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00736360();
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
  puVar4[2] = uVar3;
  puVar4[1] = 0;
  *puVar4 = in_ECX[0x225];
  if (in_ECX[0x225] == 0) {
    in_ECX[0x226] = puVar4;
  }
  else {
    *(undefined4 **)(in_ECX[0x225] + 4) = puVar4;
  }
  in_ECX[0x227] = in_ECX[0x227] + 1;
  in_ECX[0x225] = puVar4;
  iVar2 = FUN_00401f00(0x180);
  local_4._0_1_ = 5;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00735990();
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
  puVar4[2] = uVar3;
  puVar4[1] = 0;
  *puVar4 = in_ECX[0x225];
  if (in_ECX[0x225] == 0) {
    in_ECX[0x226] = puVar4;
  }
  else {
    *(undefined4 **)(in_ECX[0x225] + 4) = puVar4;
  }
  in_ECX[0x227] = in_ECX[0x227] + 1;
  in_ECX[0x225] = puVar4;
  iVar2 = FUN_00401f00(0x180);
  local_4._0_1_ = 6;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00734b00();
  }
  local_4._0_1_ = 2;
  puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
  puVar4[2] = uVar3;
  puVar4[1] = 0;
  *puVar4 = in_ECX[0x225];
  if (in_ECX[0x225] == 0) {
    in_ECX[0x226] = puVar4;
  }
  else {
    *(undefined4 **)(in_ECX[0x225] + 4) = puVar4;
  }
  in_ECX[0x227] = in_ECX[0x227] + 1;
  in_ECX[0x225] = puVar4;
  iVar2 = FUN_00401f00(0x600);
  local_4._0_1_ = 7;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00733940();
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  puVar4 = (undefined4 *)(**(code **)(*piVar5 + 4))();
  puVar4[2] = uVar3;
  puVar4[1] = 0;
  *puVar4 = in_ECX[0x225];
  if (in_ECX[0x225] == 0) {
    in_ECX[0x226] = puVar4;
  }
  else {
    *(undefined4 **)(in_ECX[0x225] + 4) = puVar4;
  }
  in_ECX[0x227] = in_ECX[0x227] + 1;
  in_ECX[0x225] = puVar4;
  *unaff_FS_OFFSET = local_c;
  return in_ECX;
}



void FUN_0071fa90(byte param_1)

{
  FUN_0071f730();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0071fab0(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  return;
}



void FUN_0071fac0(uint param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 2 >> 0x20) != 0) |
                       (uint)((ulonglong)param_1 * 2));
  in_ECX[2] = param_1;
  in_ECX[3] = param_1;
  *in_ECX = uVar1;
  in_ECX[1] = uVar1;
  in_ECX[4] = 0;
  return;
}



void FUN_0071fb00(byte param_1)

{
  undefined4 *in_ECX;
  
  FUN_00401f20(*in_ECX);
  if (in_ECX[4] != 0) {
    FUN_0071fb00(1);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0071fb40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  undefined4 *in_ECX;
  
  FUN_00732d70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  in_ECX[0x12] = param_9;
  in_ECX[0x13] = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  in_ECX[0x15] = 0;
  *in_ECX = &PTR_FUN_00a7f5a4;
  in_ECX[0x11] = (uint)*(ushort *)(in_ECX + 0x10) * 3;
  return;
}



void FUN_0071fbb0(void)

{
  undefined4 *in_ECX;
  
  FUN_00732dd0();
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  in_ECX[0x15] = 0;
  *in_ECX = &PTR_FUN_00a7f5a4;
  return;
}



void FUN_0071fbe0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c9ee8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a7f5a4;
  local_4 = 0;
  if (in_ECX[0x12] != 0) {
    FUN_00401f20(in_ECX[0x12],uVar2);
  }
  puVar1 = (undefined4 *)in_ECX[0x15];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00401f20(*puVar1,uVar2);
    if (puVar1[4] != 0) {
      FUN_0071fb00(1);
    }
    FUN_00401f20(puVar1,uVar2);
  }
  FUN_00401f20(in_ECX[0x13],uVar2);
  local_4 = 0xffffffff;
  FUN_00732df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0071fc80(ushort param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x48);
  if ((param_2 != iVar1) && (iVar1 != 0)) {
    FUN_00401f20(iVar1);
  }
  *(ushort *)(in_ECX + 0x40) = param_1;
  *(int *)(in_ECX + 0x48) = param_2;
  *(uint *)(in_ECX + 0x44) = (uint)param_1 * 3;
  return;
}



undefined4 * FUN_0071fd30(void)

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
  puVar2 = (undefined4 *)FUN_00401f00(0x58,uVar1);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00732dd0();
    *puVar2 = &PTR_FUN_00a7f5a4;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    *(undefined2 *)(puVar2 + 0x14) = 0;
    puVar2[0x15] = 0;
    *unaff_FS_OFFSET = local_c;
    return puVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void thunk_FUN_00728f20(int param_1)

{
  undefined4 uVar1;
  
  FUN_0068f970(param_1);
  if (0xa030006 < *(uint *)(param_1 + 0xd8)) {
    uVar1 = FUN_007124a0();
    FUN_0075fa90(uVar1);
  }
  return;
}



undefined4 thunk_FUN_00728f50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00700650(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((*(int **)(in_ECX + 0x34) != (int *)0x0) &&
     (cVar1 = (**(code **)(**(int **)(in_ECX + 0x34) + 0x24))(param_1), cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



uint FUN_0071fde0(int param_1)

{
  bool bVar1;
  uint uVar2;
  int in_ECX;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  
  uVar2 = FUN_00732e10(param_1);
  if (((char)uVar2 == '\0') ||
     (uVar2 = *(uint *)(in_ECX + 0x44), uVar2 != *(uint *)(param_1 + 0x44))) {
    return uVar2 & 0xffffff00;
  }
  pbVar3 = *(byte **)(param_1 + 0x48);
  pbVar4 = *(byte **)(in_ECX + 0x48);
  for (uVar2 = uVar2 * 2; 3 < uVar2; uVar2 = uVar2 - 4) {
    if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_0071fe28;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  if (uVar2 == 0) {
LAB_0071fe8d:
    bVar1 = false;
  }
  else {
LAB_0071fe28:
    iVar5 = (uint)*pbVar4 - (uint)*pbVar3;
    if (iVar5 == 0) {
      if (uVar2 == 1) goto LAB_0071fe8d;
      iVar5 = (uint)pbVar4[1] - (uint)pbVar3[1];
      if (iVar5 == 0) {
        if (uVar2 == 2) goto LAB_0071fe8d;
        iVar5 = (uint)pbVar4[2] - (uint)pbVar3[2];
        if (iVar5 == 0) {
          if ((uVar2 == 3) || (iVar5 = (uint)pbVar4[3] - (uint)pbVar3[3], iVar5 == 0))
          goto LAB_0071fe8d;
        }
      }
    }
    bVar1 = true;
    if (iVar5 < 1) {
      return 0xffffff00;
    }
  }
  return (uint)!bVar1;
}



void FUN_0071fea0(byte param_1)

{
  FUN_0071fbe0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_0071fec0(int param_1)

{
  uint *puVar1;
  ushort *puVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  ushort auStack_1c [2];
  uint local_18 [2];
  undefined4 *puStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar5 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca1d1;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00732e70(param_1);
  puVar1 = (uint *)(in_ECX + 0x44);
  local_18[0] = 4;
  (**(code **)(*(int *)(iVar5 + 0x21c) + 4))(*(int *)(iVar5 + 0x21c),puVar1,4,local_18,1,uVar6);
  if (*(uint *)(iVar5 + 0xd8) < 0xa000111) {
    param_1 = CONCAT31(param_1._1_3_,1);
  }
  else {
    local_18[0] = 1;
    (**(code **)(*(int *)(iVar5 + 0x21c) + 4))(*(int *)(iVar5 + 0x21c),&param_1,1,local_18,1);
    if ((char)param_1 == '\0') goto LAB_0071ff98;
  }
  if (*puVar1 != 0) {
    lVar4 = (ulonglong)*puVar1 * 2;
    uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
    *(undefined4 *)(in_ECX + 0x48) = uVar7;
    local_18[0] = 2;
    (**(code **)(*(int *)(iVar5 + 0x21c) + 4))(*(int *)(iVar5 + 0x21c),uVar7,*puVar1 * 2,local_18,1)
    ;
  }
LAB_0071ff98:
  local_18[0] = 2;
  (**(code **)(*(int *)(iVar5 + 0x21c) + 4))
            (*(int *)(iVar5 + 0x21c),(ushort *)(in_ECX + 0x50),2,local_18,1);
  uVar3 = *(ushort *)(in_ECX + 0x50);
  if (uVar3 != 0) {
    puVar8 = (undefined4 *)FUN_00401f00((uint)uVar3 * 8);
    uStack_4 = 0;
    puStack_10 = puVar8;
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = (undefined4 *)0x0;
    }
    else {
      _vector_constructor_iterator_(puVar8,8,(uint)uVar3,FUN_0071fab0);
    }
    uStack_4 = 0xffffffff;
    *(undefined4 **)(in_ECX + 0x4c) = puVar8;
    puStack_10 = (undefined4 *)FUN_00401f00(0x14);
    uStack_4 = 1;
    if (puStack_10 == (undefined4 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0071fac0(*(undefined2 *)(in_ECX + 0x50));
    }
    uStack_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x54) = uVar7;
    local_18[0] = 0;
    if (*(short *)(in_ECX + 0x50) != 0) {
      do {
        iVar9 = 0;
        local_18[1] = 2;
        (**(code **)(*(int *)(iVar5 + 0x21c) + 4))
                  (*(int *)(iVar5 + 0x21c),auStack_1c,2,local_18 + 1,1);
        if (auStack_1c[0] != 0) {
          puVar8 = *(undefined4 **)(in_ECX + 0x54);
          if (puVar8 != (undefined4 *)0x0) {
            do {
              if ((uint)auStack_1c[0] <= (uint)puVar8[3]) goto LAB_0072011b;
              puVar8 = (undefined4 *)puVar8[4];
            } while (puVar8 != (undefined4 *)0x0);
          }
          puVar8 = (undefined4 *)FUN_00401f00(0x14);
          uStack_4 = 2;
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            uVar6 = *(int *)(*(int *)(in_ECX + 0x54) + 8) * 2;
            puStack_10 = puVar8;
            uVar7 = FUN_00401f00(-(uint)((int)((ulonglong)uVar6 * 2 >> 0x20) != 0) |
                                 (uint)((ulonglong)uVar6 * 2));
            *puVar8 = uVar7;
            puVar8[1] = uVar7;
            puVar8[2] = uVar6;
            puVar8[3] = uVar6;
            puVar8[4] = 0;
          }
          puVar8[4] = *(undefined4 *)(in_ECX + 0x54);
          uStack_4 = 0xffffffff;
          *(undefined4 **)(in_ECX + 0x54) = puVar8;
LAB_0072011b:
          iVar9 = puVar8[1];
          puVar8[3] = puVar8[3] - (uint)auStack_1c[0];
          puVar8[1] = iVar9 + (uint)auStack_1c[0] * 2;
          puStack_10 = (undefined4 *)0x2;
          (**(code **)(*(int *)(iVar5 + 0x21c) + 4))
                    (*(int *)(iVar5 + 0x21c),iVar9,(uint)auStack_1c[0] * 2,&puStack_10,1);
        }
        puVar2 = (ushort *)(*(int *)(in_ECX + 0x4c) + (local_18[0] & 0xffff) * 8);
        if ((auStack_1c[0] == 0) || (iVar9 == 0)) {
          *puVar2 = 0;
          puVar2[2] = 0;
          puVar2[3] = 0;
        }
        else {
          *puVar2 = auStack_1c[0];
          *(int *)(puVar2 + 2) = iVar9;
        }
        local_18[0] = local_18[0] + 1;
      } while ((ushort)local_18[0] < *(ushort *)(in_ECX + 0x50));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


