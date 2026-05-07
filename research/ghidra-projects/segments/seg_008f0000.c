
void FUN_008f00e0(float *param_1,float *param_2,float *param_3,float param_4,float *param_5)

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
  
  fVar6 = *param_2;
  fVar7 = param_2[1];
  fVar8 = param_2[2];
  fVar10 = *param_3;
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = ABS(fVar6 * *param_1) + ABS(fVar7 * param_1[4]) + ABS(fVar8 * param_1[8]) + param_4;
  fVar4 = ABS(fVar6 * param_1[1]) + ABS(fVar7 * param_1[5]) + ABS(fVar8 * param_1[9]) + param_4;
  fVar5 = ABS(fVar6 * param_1[2]) + ABS(fVar7 * param_1[6]) + ABS(fVar8 * param_1[10]) + param_4;
  fVar6 = ABS(fVar6 * param_1[3]) + ABS(fVar7 * param_1[7]) + ABS(fVar8 * param_1[0xb]) + param_4;
  fVar7 = *param_1 * fVar10 + param_1[4] * fVar1 + param_1[8] * fVar2 + param_1[0xc];
  fVar8 = param_1[1] * fVar10 + param_1[5] * fVar1 + param_1[9] * fVar2 + param_1[0xd];
  fVar9 = param_1[2] * fVar10 + param_1[6] * fVar1 + param_1[10] * fVar2 + param_1[0xe];
  fVar10 = param_1[3] * fVar10 + param_1[7] * fVar1 + param_1[0xb] * fVar2 + param_1[0xf];
  param_5[4] = fVar3 + fVar7;
  param_5[5] = fVar4 + fVar8;
  param_5[6] = fVar5 + fVar9;
  param_5[7] = fVar6 + fVar10;
  *param_5 = -fVar3 + fVar7;
  param_5[1] = -fVar4 + fVar8;
  param_5[2] = -fVar5 + fVar9;
  param_5[3] = -fVar6 + fVar10;
  return;
}



void FUN_008f01a0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *in_ECX;
  float10 fVar4;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9b0ec;
  in_ECX[3] = param_1[4];
  in_ECX[4] = param_1[5];
  fVar1 = param_1[5];
  fVar2 = param_1[7];
  fVar3 = param_1[6];
  in_ECX[0x14] = (float)(int)param_1[4] - 1.0;
  in_ECX[0x15] = fVar2 - fVar3;
  in_ECX[0x16] = (float)(int)fVar1 - 1.0;
  in_ECX[0x17] = 0;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  in_ECX[0x14] = (float)in_ECX[0x14] * *param_1;
  in_ECX[0x15] = (float)in_ECX[0x15] * fVar1;
  in_ECX[0x16] = (float)in_ECX[0x16] * fVar2;
  in_ECX[0x17] = (float)in_ECX[0x17] * fVar3;
  if (param_1[6] <= param_1[7]) {
    in_ECX[5] = (param_1[6] + param_1[7]) * param_1[1] * 0.5;
  }
  else {
    in_ECX[5] = 0xbf800000;
    in_ECX[0x15] = 0xbf800000;
  }
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  in_ECX[8] = *param_1;
  in_ECX[9] = fVar1;
  in_ECX[10] = fVar2;
  in_ECX[0xb] = fVar3;
  fVar1 = param_1[2];
  fVar2 = param_1[1];
  in_ECX[0xc] = 1.0 / *param_1;
  in_ECX[0xd] = 1.0 / fVar2;
  in_ECX[0xe] = 1.0 / fVar1;
  in_ECX[0xf] = 0;
  fVar4 = (float10)FUN_0092b470();
  fVar1 = (float)fVar4;
  in_ECX[0x10] = fVar1 * (float)in_ECX[8];
  in_ECX[0x11] = 0;
  in_ECX[0x12] = fVar1 * (float)in_ECX[10];
  in_ECX[0x13] = fVar1 * (float)in_ECX[0xb];
  return;
}



void FUN_008f02a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar4 = (float10)(**(code **)(*in_ECX + 0x24))(0,0);
  fStack_40 = (float)fVar4;
  if ((float)in_ECX[0x15] < 0.0) {
    iVar2 = 0;
    fStack_3c = fStack_40;
    if (0 < in_ECX[3]) {
      do {
        iVar3 = 0;
        if (0 < in_ECX[4]) {
          do {
            fVar4 = (float10)(**(code **)(*in_ECX + 0x24))(iVar2,iVar3);
            if (fVar4 <= (float10)fStack_40) {
              fStack_40 = (float)fVar4;
            }
            if ((float10)fStack_3c <= fVar4) {
              fStack_3c = (float)fVar4;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < in_ECX[4]);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < in_ECX[3]);
    }
    fVar1 = fStack_40 * (float)in_ECX[9];
    fStack_3c = fStack_3c * (float)in_ECX[9];
    fStack_40 = fVar1;
    if (fStack_3c <= fVar1) {
      fStack_40 = fStack_3c;
    }
    if (fStack_3c < fVar1) {
      fStack_3c = fVar1;
    }
    in_ECX[5] = (int)((fStack_40 + fStack_3c) * 0.5);
    in_ECX[0x15] = (int)(fStack_3c - fStack_40);
  }
  fStack_38 = (float)in_ECX[0x14] * 0.5;
  fStack_24 = (float)in_ECX[0x15] * 0.5;
  fStack_30 = (float)in_ECX[0x16] * 0.5;
  fStack_2c = (float)in_ECX[0x17] * 0.5;
  iStack_34 = in_ECX[5];
  fStack_28 = fStack_38;
  fStack_20 = fStack_30;
  fStack_1c = fStack_2c;
  FUN_008f00e0(param_1,&fStack_28,&fStack_38,param_2,param_3);
  return;
}



float10 FUN_008f0430(float *param_1)

{
  int *in_ECX;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined1 local_70 [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
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
  
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  local_50 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_28 = 0x3f800000;
  local_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  (**(code **)(*in_ECX + 0xc))(&local_50,0,local_70);
  return (float10)(((float)((uint)((fStack_64 - fStack_74) * 0.5) ^ (uint)param_1[2] & 0x80000000) +
                   (fStack_64 + fStack_74) * 0.5) * param_1[2] +
                  ((float)((uint)((fStack_68 - fStack_78) * 0.5) ^ (uint)param_1[1] & 0x80000000) +
                  (fStack_68 + fStack_78) * 0.5) * param_1[1] +
                  ((float)((uint)((fStack_6c - fStack_7c) * 0.5) ^ (uint)*param_1 & 0x80000000) +
                  (fStack_6c + fStack_7c) * 0.5) * *param_1);
}



void FUN_008f0540(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
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



void FUN_008f0590(int param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a9b120;
  in_ECX[3] = param_1;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  *in_ECX = &PTR_FUN_00a9b148;
  *(undefined1 *)(in_ECX + 4) = param_2;
  return;
}



void FUN_008f05d0(float *param_1,undefined4 param_2)

{
  int *in_ECX;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fStack_14 = param_1[3];
  fStack_24 = -param_1[3];
  local_20 = fStack_14 + *param_1;
  fStack_1c = fStack_14 + param_1[1];
  fStack_18 = fStack_14 + param_1[2];
  fStack_14 = fStack_14 + param_1[3];
  local_30 = fStack_24 + *param_1;
  fStack_2c = fStack_24 + param_1[1];
  fStack_28 = fStack_24 + param_1[2];
  fStack_24 = fStack_24 + param_1[3];
  (**(code **)(*in_ECX + 0x24))(&local_30,param_2);
  return;
}



void FUN_008f0630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  undefined1 local_30 [44];
  
  FUN_008cdf30(param_1,param_2,param_3,local_30);
  (**(code **)(*in_ECX + 0x24))(local_30,param_4);
  return;
}



void FUN_008f0670(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a9b120;
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



void FUN_008f06c0(byte param_1)

{
  FUN_008f0540();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008f06f0(float *param_1,int *param_2)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  int local_78;
  uint local_74;
  uint local_6c;
  uint local_60;
  uint local_5c;
  uint local_58;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  fVar4 = -*(float *)(iVar1 + 0x14);
  fVar2 = *(float *)(iVar1 + 0x14);
  piVar3 = *(int **)(iVar1 + 0x10);
  fVar12 = fVar2 + param_1[5];
  fVar13 = fVar4 + param_1[1];
  local_60 = (uint)((fVar4 + param_1[2] + (float)piVar3[0x12]) * (float)piVar3[0xe] + 196608.0) >> 6
             & 0xffff;
  local_74 = (uint)((fVar4 + *param_1 + (float)piVar3[0x10]) * (float)piVar3[0xc] + 196608.0) >> 6 &
             0xffff;
  local_6c = (uint)((fVar2 + param_1[6] + (float)piVar3[0x12]) * (float)piVar3[0xe] + 196608.0) >> 6
             & 0xffff;
  uVar7 = (uint)((fVar2 + param_1[4] + (float)piVar3[0x10]) * (float)piVar3[0xc] + 196608.0) >> 6 &
          0xffff;
  uVar9 = piVar3[3] - 1;
  if (((local_74 < uVar9) || (uVar7 < uVar9)) &&
     ((uVar10 = piVar3[4] - 1, local_60 < uVar10 || (local_6c < uVar10)))) {
    if (uVar9 <= local_74) {
      local_74 = 0;
    }
    if (uVar10 <= local_60) {
      local_60 = 0;
    }
    if (uVar9 <= uVar7) {
      uVar7 = piVar3[3] - 2;
    }
    if (uVar10 <= local_6c) {
      local_6c = piVar3[4] - 2;
    }
    iVar1 = param_2[1];
    if (*(char *)(in_ECX + 0x10) == '\0') {
      for (; local_74 <= uVar7; local_74 = local_74 + 1) {
        if (local_60 <= local_6c) {
          uVar9 = (local_60 * 0x8000 + local_74) * 2;
          local_78 = (local_6c - local_60) + 1;
          do {
            if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,4);
            }
            *(uint *)(*param_2 + param_2[1] * 4) = uVar9;
            iVar1 = param_2[1];
            param_2[1] = iVar1 + 1U;
            if (iVar1 + 1U == (param_2[2] & 0x3fffffffU)) {
              FUN_008a6ee0(param_2,4);
            }
            *(uint *)(*param_2 + param_2[1] * 4) = uVar9 | 1;
            uVar9 = uVar9 + 0x10000;
            local_78 = local_78 + -1;
            param_2[1] = param_2[1] + 1;
          } while (local_78 != 0);
        }
      }
    }
    else {
      bVar5 = true;
      bVar6 = true;
      local_5c = local_74;
      if (local_74 <= uVar7) {
        do {
          if (local_60 <= local_6c) {
            uVar9 = (local_60 * 0x8000 + local_5c) * 2;
            local_58 = local_60;
            do {
              if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_2,4);
              }
              *(uint *)(*param_2 + param_2[1] * 4) = uVar9;
              iVar8 = param_2[1];
              param_2[1] = iVar8 + 1U;
              if (iVar8 + 1U == (param_2[2] & 0x3fffffffU)) {
                FUN_008a6ee0(param_2,4);
              }
              *(uint *)(*param_2 + param_2[1] * 4) = uVar9 | 1;
              param_2[1] = param_2[1] + 1;
              if ((bVar5) || (bVar6)) {
                fVar11 = (float10)(**(code **)(*piVar3 + 0x24))(local_5c,local_58);
                if ((float10)fVar13 < fVar11 * (float10)(float)piVar3[9]) {
                  bVar5 = false;
                }
                if (fVar11 * (float10)(float)piVar3[9] < (float10)fVar12) {
                  bVar6 = false;
                }
              }
              local_58 = local_58 + 1;
              uVar9 = uVar9 + 0x10000;
            } while (local_58 <= local_6c);
          }
          local_5c = local_5c + 1;
        } while (local_5c <= uVar7);
        if ((!bVar5) && (!bVar6)) {
          return;
        }
      }
      uVar7 = uVar7 + 1;
      if (local_74 <= uVar7) {
        do {
          fVar11 = (float10)(**(code **)(*piVar3 + 0x24))(local_74,local_6c + 1);
          if ((float10)fVar13 < fVar11 * (float10)(float)piVar3[9]) {
            bVar5 = false;
          }
          if (fVar11 * (float10)(float)piVar3[9] < (float10)fVar12) {
            bVar6 = false;
          }
          local_74 = local_74 + 1;
        } while (local_74 <= uVar7);
      }
      for (; local_60 <= local_6c + 1; local_60 = local_60 + 1) {
        fVar11 = (float10)(**(code **)(*piVar3 + 0x24))(uVar7,local_60);
        if ((float10)fVar13 < fVar11 * (float10)(float)piVar3[9]) {
          bVar5 = false;
        }
        if (fVar11 * (float10)(float)piVar3[9] < (float10)fVar12) {
          bVar6 = false;
        }
      }
      if ((bVar5) || (bVar6)) {
        if ((int)(param_2[2] & 0x3fffffffU) < iVar1) {
          iVar8 = (param_2[2] & 0x3fffffffU) * 2;
          if (iVar8 <= iVar1) {
            iVar8 = iVar1;
          }
          FUN_008a6e40(param_2,iVar8,4);
        }
        param_2[1] = iVar1;
        return;
      }
    }
  }
  return;
}



void FUN_008f0ba0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    FUN_009156c0();
    *param_1 = &PTR_FUN_00a9b198;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined ** FUN_008f0bc0(void)

{
  FUN_009156c0();
  return &PTR_FUN_00a9b198;
}



void FUN_008f0c10(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_009156c0();
  *in_ECX = &PTR_FUN_00a9b198;
  in_ECX[4] = param_1;
  in_ECX[5] = param_2;
  if (*(short *)(param_1 + 4) != 0) {
    *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  }
  return;
}



void FUN_008f0c40(byte param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[4];
  *in_ECX = &PTR_FUN_00a9b198;
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



void FUN_008f0c90(uint param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  char *pcVar5;
  int in_ECX;
  uint uVar6;
  float10 fVar7;
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
  undefined4 uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined4 *local_68;
  float fStack_48;
  undefined4 uStack_38;
  
  uVar6 = param_1 >> 1 & 0x7fff;
  uStack_84 = param_1 >> 0x10;
  if (param_2 == (undefined4 *)0x0) {
    local_68 = (undefined4 *)0x0;
  }
  else {
    uVar1 = *(undefined4 *)(in_ECX + 0x14);
    *(undefined2 *)((int)param_2 + 6) = 1;
    param_2[3] = uVar1;
    param_2[2] = 0;
    *param_2 = &PTR_FUN_00a99144;
    local_68 = param_2;
  }
  piVar2 = *(int **)(in_ECX + 0x10);
  uStack_8c = 1.3137125e-38;
  uStack_88 = uVar6;
  (**(code **)(*piVar2 + 0x24))();
  fVar12 = (float)(int)fStack_6c * (float)piVar2[10];
  fVar15 = (float)piVar2[0xb] * 0.0;
  uStack_8c = (float)((int)fStack_6c + 1);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(uVar6);
  fVar3 = fStack_6c + 1.0;
  fVar4 = fStack_70 + 1.0;
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(uVar6 + 1,fStack_74);
  fVar8 = fStack_48 * (float)piVar2[8];
  fVar10 = (float)fVar7 * (float)piVar2[9];
  fVar13 = fStack_74 * (float)piVar2[10];
  fVar16 = (float)piVar2[0xb] * 0.0;
  fVar7 = (float10)(**(code **)(**(int **)(in_ECX + 0x10) + 0x24))(uVar6 + 1,fVar4);
  fVar9 = (float)((int)fStack_6c + 1) * (float)piVar2[8];
  fVar11 = (float)fVar7 * (float)piVar2[9];
  fVar14 = fStack_74 * (float)piVar2[10];
  fVar17 = (float)piVar2[0xb] * 0.0;
  pcVar5 = (char *)(**(code **)(**(int **)(in_ECX + 0x10) + 0x28))((int)&uStack_8c + 3);
  if (*pcVar5 != '\0') {
    *(float *)((int)uStack_8c + 0x10) = fStack_74;
    *(float *)((int)uStack_8c + 0x14) = fVar4;
    *(float *)((int)uStack_8c + 0x18) = fStack_6c;
    *(undefined4 **)((int)uStack_8c + 0x1c) = local_68;
    if ((param_1 & 1) == 0) {
      *(float *)((int)uStack_8c + 0x20) = fVar10;
      *(float *)((int)uStack_8c + 0x24) = fVar13;
      *(float *)((int)uStack_8c + 0x28) = fVar16;
      *(undefined4 *)((int)uStack_8c + 0x2c) = uStack_38;
      *(float *)((int)uStack_8c + 0x30) = fVar3;
      *(float *)((int)uStack_8c + 0x34) = fVar9;
      *(float *)((int)uStack_8c + 0x38) = fVar11;
      *(float *)((int)uStack_8c + 0x3c) = fVar14;
      return;
    }
    *(float *)((int)uStack_8c + 0x20) = fVar3;
    *(float *)((int)uStack_8c + 0x24) = fVar9;
    *(float *)((int)uStack_8c + 0x28) = fVar11;
    *(float *)((int)uStack_8c + 0x2c) = fVar14;
    *(float *)((int)uStack_8c + 0x30) = fVar17;
    *(float *)((int)uStack_8c + 0x34) = fVar12;
    *(float *)((int)uStack_8c + 0x38) = fVar15;
    *(float *)((int)uStack_8c + 0x3c) = fVar8;
    return;
  }
  if ((param_1 & 1) == 0) {
    *(float *)((int)uStack_8c + 0x10) = fStack_74;
    *(float *)((int)uStack_8c + 0x14) = fVar4;
    *(float *)((int)uStack_8c + 0x18) = fStack_6c;
    *(undefined4 **)((int)uStack_8c + 0x1c) = local_68;
    *(float *)((int)uStack_8c + 0x20) = fVar10;
    *(float *)((int)uStack_8c + 0x24) = fVar13;
    *(float *)((int)uStack_8c + 0x28) = fVar16;
    *(undefined4 *)((int)uStack_8c + 0x2c) = uStack_38;
    *(float *)((int)uStack_8c + 0x30) = fVar17;
    *(float *)((int)uStack_8c + 0x34) = fVar12;
    *(float *)((int)uStack_8c + 0x38) = fVar15;
    *(float *)((int)uStack_8c + 0x3c) = fVar8;
    return;
  }
  *(float *)((int)uStack_8c + 0x10) = fVar3;
  *(float *)((int)uStack_8c + 0x14) = fVar9;
  *(float *)((int)uStack_8c + 0x18) = fVar11;
  *(float *)((int)uStack_8c + 0x1c) = fVar14;
  *(float *)((int)uStack_8c + 0x20) = fVar17;
  *(float *)((int)uStack_8c + 0x24) = fVar12;
  *(float *)((int)uStack_8c + 0x28) = fVar15;
  *(float *)((int)uStack_8c + 0x2c) = fVar8;
  *(float *)((int)uStack_8c + 0x30) = fVar10;
  *(float *)((int)uStack_8c + 0x34) = fVar13;
  *(float *)((int)uStack_8c + 0x38) = fVar16;
  *(undefined4 *)((int)uStack_8c + 0x3c) = uStack_38;
  return;
}



int FUN_008f0ed0(int param_1)

{
  int in_ECX;
  
  return param_1 * 0x20 + in_ECX;
}



int FUN_008f0ee0(int param_1)

{
  int in_ECX;
  
  return param_1 * 0x30 + in_ECX;
}



void FUN_008f0ef0(float param_1,int param_2,int *param_3,int param_4)

{
  *(float *)(*param_3 + param_4 * -0x30 + 0xc) = param_1 * *(float *)(param_2 + 4);
  return;
}



void FUN_008f0f20(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_3 + 4);
  puVar1[1] = param_1;
  *puVar1 = 0x20c0f;
  puVar1[2] = param_2;
  *(undefined4 **)(param_3 + 4) = puVar1 + 3;
  return;
}



void FUN_008f0f50(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = 0x20410;
  *(undefined4 **)(param_1 + 4) = puVar1 + 1;
  return;
}



void FUN_008f0f70(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)param_2[1];
  uVar2 = *param_2;
  uVar3 = *(undefined4 *)(param_1 + 0x18);
  puVar1[3] = *(undefined4 *)(param_1 + 0x14);
  puVar1[2] = param_3;
  puVar1[4] = uVar3;
  puVar1[5] = param_4;
  *puVar1 = 0x11801;
  puVar1[1] = uVar2;
  param_2[1] = puVar1 + 6;
  return;
}



void FUN_008f0fb0(float *param_1,float *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_3[1];
  iVar2 = *param_3;
  puVar1[1] = param_1[2] * *param_2;
  puVar1[2] = param_1[3] * *param_2;
  puVar1[3] = param_1[1];
  puVar1[6] = param_1[6];
  puVar1[4] = param_1[4];
  puVar1[5] = param_1[5];
  *puVar1 = 0x41c04;
  *(float *)(iVar2 + 0x1c) = param_2[1] * *param_1;
  *param_3 = iVar2 + 0x20;
  param_3[1] = (int)(puVar1 + 7);
  return;
}



void FUN_008f1010(float *param_1,float *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)param_3[1];
  iVar2 = *param_3;
  puVar1[1] = param_1[2] * *param_2;
  puVar1[2] = param_1[3] * *param_2;
  puVar1[3] = param_1[1];
  puVar1[6] = param_1[6];
  puVar1[4] = param_1[4];
  puVar1[5] = param_1[5];
  *puVar1 = 0x31c05;
  *(float *)(iVar2 + 0xc) = param_2[1] * *param_1;
  *param_3 = iVar2 + 0x30;
  param_3[1] = (int)(puVar1 + 7);
  return;
}



void FUN_008f1070(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
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
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x18);
  fVar3 = *param_1;
  fVar6 = param_1[1];
  fVar9 = param_1[2];
  fVar12 = param_1[3];
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fVar12 = *(float *)(iVar1 + 0x7c) * fVar9;
    fVar13 = *(float *)(iVar1 + 0x68) * fVar6;
    fVar14 = *(float *)(iVar1 + 0x6c) * fVar6;
    fVar5 = *(float *)(iVar1 + 0x54) * fVar3;
    fVar8 = *(float *)(iVar1 + 0x58) * fVar3;
    fVar11 = *(float *)(iVar1 + 0x5c) * fVar3;
    fVar3 = *(float *)(iVar1 + 0x50) * fVar3 + *(float *)(iVar1 + 0x60) * fVar6 +
            *(float *)(iVar1 + 0x70) * fVar9;
    fVar6 = fVar5 + *(float *)(iVar1 + 100) * fVar6 + *(float *)(iVar1 + 0x74) * fVar9;
    fVar9 = fVar8 + fVar13 + *(float *)(iVar1 + 0x78) * fVar9;
    fVar12 = fVar11 + fVar14 + fVar12;
  }
  *param_3 = fVar3;
  param_3[1] = fVar6;
  param_3[2] = fVar9;
  param_3[3] = fVar12;
  if (*(char *)(iVar2 + 0xc) == '\0') {
    fVar3 = *(float *)(iVar2 + 0x74);
    fVar6 = *(float *)(iVar2 + 0x78);
    fVar9 = *(float *)(iVar2 + 0x7c);
    fVar12 = *(float *)(iVar2 + 100);
    fVar5 = *(float *)(iVar2 + 0x68);
    fVar8 = *(float *)(iVar2 + 0x6c);
    fVar4 = -*param_1;
    fVar7 = -param_1[1];
    fVar10 = -param_1[2];
    fVar11 = *(float *)(iVar2 + 0x54);
    fVar13 = *(float *)(iVar2 + 0x58);
    fVar14 = *(float *)(iVar2 + 0x5c);
    param_3[4] = *(float *)(iVar2 + 0x50) * fVar4 + *(float *)(iVar2 + 0x60) * fVar7 +
                 *(float *)(iVar2 + 0x70) * fVar10;
    param_3[5] = fVar11 * fVar4 + fVar12 * fVar7 + fVar3 * fVar10;
    param_3[6] = fVar13 * fVar4 + fVar5 * fVar7 + fVar6 * fVar10;
    param_3[7] = fVar14 * fVar4 + fVar8 * fVar7 + fVar9 * fVar10;
  }
  else {
    fVar3 = param_1[1];
    fVar6 = param_1[2];
    fVar9 = param_1[3];
    param_3[4] = -*param_1;
    param_3[5] = -fVar3;
    param_3[6] = -fVar6;
    param_3[7] = -fVar9;
  }
  fVar3 = 1.0 / (param_3[2] * param_3[2] * *(float *)(iVar1 + 0x38) +
                 param_3[6] * param_3[6] * *(float *)(iVar2 + 0x38) +
                 param_3[1] * param_3[1] * *(float *)(iVar1 + 0x34) +
                 param_3[5] * param_3[5] * *(float *)(iVar2 + 0x34) +
                 *param_3 * *param_3 * *(float *)(iVar1 + 0x30) +
                 param_3[4] * param_3[4] * *(float *)(iVar2 + 0x30) + 1.1920929e-07);
  param_3[3] = fVar3;
  *param_4 = fVar3;
  return;
}



void FUN_008f1190(float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  int iVar1;
  int iVar2;
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
  
  iVar1 = *(int *)(param_3 + 0x14);
  iVar2 = *(int *)(param_3 + 0x18);
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  fVar5 = param_1[3];
  *param_4 = *param_1;
  param_4[1] = fVar3;
  param_4[2] = fVar4;
  param_4[3] = fVar5;
  fVar3 = *param_2 - *(float *)(iVar1 + 0x40);
  fVar5 = param_2[1] - *(float *)(iVar1 + 0x44);
  fVar6 = param_2[2] - *(float *)(iVar1 + 0x48);
  fVar8 = param_2[3] - *(float *)(iVar1 + 0x4c);
  fVar10 = *param_2 - *(float *)(iVar2 + 0x40);
  fVar11 = param_2[1] - *(float *)(iVar2 + 0x44);
  fVar12 = param_2[2] - *(float *)(iVar2 + 0x48);
  fVar13 = param_2[3] - *(float *)(iVar2 + 0x4c);
  fVar4 = fVar5 * param_1[2] - fVar6 * param_1[1];
  fVar6 = fVar6 * *param_1 - fVar3 * param_1[2];
  fVar3 = fVar3 * param_1[1] - fVar5 * *param_1;
  fVar5 = fVar8 * param_1[3] - fVar8 * param_1[3];
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fVar5 = *(float *)(iVar1 + 0x7c) * fVar3;
    fVar14 = *(float *)(iVar1 + 0x68) * fVar6;
    fVar15 = *(float *)(iVar1 + 0x6c) * fVar6;
    fVar8 = *(float *)(iVar1 + 0x54) * fVar4;
    fVar7 = *(float *)(iVar1 + 0x58) * fVar4;
    fVar9 = *(float *)(iVar1 + 0x5c) * fVar4;
    fVar4 = *(float *)(iVar1 + 0x50) * fVar4 + *(float *)(iVar1 + 0x60) * fVar6 +
            *(float *)(iVar1 + 0x70) * fVar3;
    fVar6 = fVar8 + *(float *)(iVar1 + 100) * fVar6 + *(float *)(iVar1 + 0x74) * fVar3;
    fVar3 = fVar7 + fVar14 + *(float *)(iVar1 + 0x78) * fVar3;
    fVar5 = fVar9 + fVar15 + fVar5;
  }
  param_4[4] = fVar4;
  param_4[5] = fVar6;
  param_4[6] = fVar3;
  param_4[7] = fVar5;
  fVar3 = param_1[1] * fVar12 - param_1[2] * fVar11;
  fVar4 = param_1[2] * fVar10 - *param_1 * fVar12;
  fVar5 = *param_1 * fVar11 - param_1[1] * fVar10;
  fVar6 = param_1[3] * fVar13 - param_1[3] * fVar13;
  if (*(char *)(iVar2 + 0xc) == '\0') {
    fVar6 = *(float *)(iVar2 + 0x7c) * fVar5;
    fVar12 = *(float *)(iVar2 + 0x68) * fVar4;
    fVar13 = *(float *)(iVar2 + 0x6c) * fVar4;
    fVar8 = *(float *)(iVar2 + 0x54) * fVar3;
    fVar10 = *(float *)(iVar2 + 0x58) * fVar3;
    fVar11 = *(float *)(iVar2 + 0x5c) * fVar3;
    fVar3 = *(float *)(iVar2 + 0x50) * fVar3 + *(float *)(iVar2 + 0x60) * fVar4 +
            *(float *)(iVar2 + 0x70) * fVar5;
    fVar4 = fVar8 + *(float *)(iVar2 + 100) * fVar4 + *(float *)(iVar2 + 0x74) * fVar5;
    fVar5 = fVar10 + fVar12 + *(float *)(iVar2 + 0x78) * fVar5;
    fVar6 = fVar11 + fVar13 + fVar6;
  }
  param_4[8] = fVar3;
  param_4[9] = fVar4;
  param_4[10] = fVar5;
  param_4[0xb] = fVar6;
  fVar3 = *(float *)(iVar2 + 0x3c) + *(float *)(iVar1 + 0x3c) + 1.1920929e-07 +
          param_4[6] * param_4[6] * *(float *)(iVar1 + 0x38) +
          param_4[10] * param_4[10] * *(float *)(iVar2 + 0x38) +
          param_4[5] * param_4[5] * *(float *)(iVar1 + 0x34) +
          param_4[9] * param_4[9] * *(float *)(iVar2 + 0x34) +
          param_4[4] * param_4[4] * *(float *)(iVar1 + 0x30) +
          param_4[8] * param_4[8] * *(float *)(iVar2 + 0x30);
  param_4[0xb] = fVar3;
  fVar3 = 1.0 / fVar3;
  param_4[7] = fVar3;
  *param_5 = fVar3;
  return;
}



void FUN_008f1310(float *param_1,int param_2,int *param_3)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
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
  
  fVar5 = param_1[4];
  fVar8 = param_1[5];
  fVar11 = param_1[6];
  fVar14 = param_1[7];
  iVar1 = *(int *)(param_2 + 0x14);
  pfVar2 = (float *)*param_3;
  iVar3 = *(int *)(param_2 + 0x18);
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fVar14 = *(float *)(iVar1 + 0x7c) * fVar11;
    fVar15 = *(float *)(iVar1 + 0x68) * fVar8;
    fVar16 = *(float *)(iVar1 + 0x6c) * fVar8;
    fVar7 = *(float *)(iVar1 + 0x54) * fVar5;
    fVar10 = *(float *)(iVar1 + 0x58) * fVar5;
    fVar13 = *(float *)(iVar1 + 0x5c) * fVar5;
    fVar5 = *(float *)(iVar1 + 0x50) * fVar5 + *(float *)(iVar1 + 0x60) * fVar8 +
            *(float *)(iVar1 + 0x70) * fVar11;
    fVar8 = fVar7 + *(float *)(iVar1 + 100) * fVar8 + *(float *)(iVar1 + 0x74) * fVar11;
    fVar11 = fVar10 + fVar15 + *(float *)(iVar1 + 0x78) * fVar11;
    fVar14 = fVar13 + fVar16 + fVar14;
  }
  *pfVar2 = fVar5;
  pfVar2[1] = fVar8;
  pfVar2[2] = fVar11;
  pfVar2[3] = fVar14;
  if (*(char *)(iVar3 + 0xc) == '\0') {
    fVar5 = *(float *)(iVar3 + 0x74);
    fVar8 = *(float *)(iVar3 + 0x78);
    fVar11 = *(float *)(iVar3 + 0x7c);
    fVar14 = *(float *)(iVar3 + 100);
    fVar7 = *(float *)(iVar3 + 0x68);
    fVar10 = *(float *)(iVar3 + 0x6c);
    fVar6 = -param_1[4];
    fVar9 = -param_1[5];
    fVar12 = -param_1[6];
    fVar13 = *(float *)(iVar3 + 0x54);
    fVar15 = *(float *)(iVar3 + 0x58);
    fVar16 = *(float *)(iVar3 + 0x5c);
    pfVar2[4] = *(float *)(iVar3 + 0x50) * fVar6 + *(float *)(iVar3 + 0x60) * fVar9 +
                *(float *)(iVar3 + 0x70) * fVar12;
    pfVar2[5] = fVar13 * fVar6 + fVar14 * fVar9 + fVar5 * fVar12;
    pfVar2[6] = fVar15 * fVar6 + fVar7 * fVar9 + fVar8 * fVar12;
    pfVar2[7] = fVar16 * fVar6 + fVar10 * fVar9 + fVar11 * fVar12;
  }
  else {
    fVar5 = param_1[5];
    fVar8 = param_1[6];
    fVar11 = param_1[7];
    pfVar2[4] = -param_1[4];
    pfVar2[5] = -fVar5;
    pfVar2[6] = -fVar8;
    pfVar2[7] = -fVar11;
  }
  pfVar2[3] = 1.0 / (pfVar2[2] * pfVar2[2] * *(float *)(iVar1 + 0x38) +
                     pfVar2[6] * pfVar2[6] * *(float *)(iVar3 + 0x38) +
                     pfVar2[1] * pfVar2[1] * *(float *)(iVar1 + 0x34) +
                     pfVar2[5] * pfVar2[5] * *(float *)(iVar3 + 0x34) +
                     *pfVar2 * *pfVar2 * *(float *)(iVar1 + 0x30) +
                     pfVar2[4] * pfVar2[4] * *(float *)(iVar3 + 0x30) + 1.1920929e-07);
  fVar5 = param_1[10];
  fVar8 = param_1[2];
  fVar11 = param_1[9];
  fVar14 = param_1[1];
  fVar7 = param_1[8];
  fVar10 = *param_1;
  puVar4 = (undefined4 *)param_3[1];
  *puVar4 = 0x4040c;
  *param_3 = (int)(pfVar2 + 8);
  param_3[1] = (int)(puVar4 + 1);
  pfVar2[7] = -(fVar7 * fVar10 + fVar11 * fVar14 + fVar5 * fVar8) * *(float *)(param_2 + 4);
  return;
}



void FUN_008f1460(undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
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
  float *local_1c;
  int local_18;
  
  pfVar7 = (float *)*param_1;
  local_18 = param_1[3];
  if (-1 < local_18 + -1) {
    pfVar3 = (float *)*param_3;
    puVar5 = (undefined4 *)param_3[1];
    local_1c = (float *)(param_1[1] + 4);
    do {
      fVar1 = param_2[5];
      fVar2 = param_2[6];
      fVar8 = *pfVar7;
      fVar11 = pfVar7[1];
      fVar14 = pfVar7[2];
      fVar17 = pfVar7[3];
      if (*(char *)((int)fVar1 + 0xc) == '\0') {
        fVar17 = *(float *)((int)fVar1 + 0x7c) * fVar14;
        fVar18 = *(float *)((int)fVar1 + 0x68) * fVar11;
        fVar19 = *(float *)((int)fVar1 + 0x6c) * fVar11;
        fVar10 = *(float *)((int)fVar1 + 0x54) * fVar8;
        fVar13 = *(float *)((int)fVar1 + 0x58) * fVar8;
        fVar16 = *(float *)((int)fVar1 + 0x5c) * fVar8;
        fVar8 = *(float *)((int)fVar1 + 0x50) * fVar8 + *(float *)((int)fVar1 + 0x60) * fVar11 +
                *(float *)((int)fVar1 + 0x70) * fVar14;
        fVar11 = fVar10 + *(float *)((int)fVar1 + 100) * fVar11 +
                 *(float *)((int)fVar1 + 0x74) * fVar14;
        fVar14 = fVar13 + fVar18 + *(float *)((int)fVar1 + 0x78) * fVar14;
        fVar17 = fVar16 + fVar19 + fVar17;
      }
      *pfVar3 = fVar8;
      pfVar3[1] = fVar11;
      pfVar3[2] = fVar14;
      pfVar3[3] = fVar17;
      if (*(char *)((int)fVar2 + 0xc) == '\0') {
        fVar8 = *(float *)((int)fVar2 + 0x74);
        fVar11 = *(float *)((int)fVar2 + 0x78);
        fVar14 = *(float *)((int)fVar2 + 0x7c);
        fVar17 = *(float *)((int)fVar2 + 100);
        fVar10 = *(float *)((int)fVar2 + 0x68);
        fVar13 = *(float *)((int)fVar2 + 0x6c);
        fVar9 = -*pfVar7;
        fVar12 = -pfVar7[1];
        fVar15 = -pfVar7[2];
        fVar16 = *(float *)((int)fVar2 + 0x54);
        fVar18 = *(float *)((int)fVar2 + 0x58);
        fVar19 = *(float *)((int)fVar2 + 0x5c);
        pfVar3[4] = *(float *)((int)fVar2 + 0x50) * fVar9 + *(float *)((int)fVar2 + 0x60) * fVar12 +
                    *(float *)((int)fVar2 + 0x70) * fVar15;
        pfVar3[5] = fVar16 * fVar9 + fVar17 * fVar12 + fVar8 * fVar15;
        pfVar3[6] = fVar18 * fVar9 + fVar10 * fVar12 + fVar11 * fVar15;
        pfVar3[7] = fVar19 * fVar9 + fVar13 * fVar12 + fVar14 * fVar15;
      }
      else {
        fVar8 = pfVar7[1];
        fVar11 = pfVar7[2];
        fVar14 = pfVar7[3];
        pfVar3[4] = -*pfVar7;
        pfVar3[5] = -fVar8;
        pfVar3[6] = -fVar11;
        pfVar3[7] = -fVar14;
      }
      puVar6 = puVar5 + 2;
      pfVar7 = pfVar7 + 4;
      pfVar4 = pfVar3 + 8;
      pfVar3[3] = 1.0 / (pfVar3[2] * pfVar3[2] * *(float *)((int)fVar1 + 0x38) +
                         pfVar3[6] * pfVar3[6] * *(float *)((int)fVar2 + 0x38) +
                         pfVar3[1] * pfVar3[1] * *(float *)((int)fVar1 + 0x34) +
                         pfVar3[5] * pfVar3[5] * *(float *)((int)fVar2 + 0x34) +
                         *pfVar3 * *pfVar3 * *(float *)((int)fVar1 + 0x30) +
                         pfVar3[4] * pfVar3[4] * *(float *)((int)fVar2 + 0x30) + 1.1920929e-07);
      fVar1 = (float)param_1[2];
      fVar2 = *param_2;
      *puVar5 = 0x40809;
      puVar5[1] = fVar1 * fVar2;
      local_18 = local_18 + -1;
      pfVar3[7] = *local_1c * param_2[1];
      pfVar3 = pfVar4;
      puVar5 = puVar6;
      local_1c = local_1c + 2;
    } while (local_18 != 0);
    *param_3 = pfVar4;
    param_3[1] = puVar6;
    return;
  }
  *param_3 = (float *)*param_3;
  param_3[1] = (undefined4 *)param_3[1];
  return;
}



void FUN_008f15f0(float *param_1,float *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
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
  
  pfVar1 = (float *)*param_3;
  fVar5 = param_1[5];
  fVar6 = param_1[6];
  fVar7 = param_1[7];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  *pfVar1 = param_1[4];
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar6;
  pfVar1[3] = fVar7;
  fVar5 = *param_1 - *(float *)((int)fVar2 + 0x40);
  fVar7 = param_1[1] - *(float *)((int)fVar2 + 0x44);
  fVar8 = param_1[2] - *(float *)((int)fVar2 + 0x48);
  fVar10 = param_1[3] - *(float *)((int)fVar2 + 0x4c);
  fVar12 = *param_1 - *(float *)((int)fVar3 + 0x40);
  fVar13 = param_1[1] - *(float *)((int)fVar3 + 0x44);
  fVar14 = param_1[2] - *(float *)((int)fVar3 + 0x48);
  fVar15 = param_1[3] - *(float *)((int)fVar3 + 0x4c);
  fVar6 = fVar7 * param_1[6] - fVar8 * param_1[5];
  fVar8 = fVar8 * param_1[4] - fVar5 * param_1[6];
  fVar5 = fVar5 * param_1[5] - fVar7 * param_1[4];
  fVar7 = fVar10 * param_1[7] - fVar10 * param_1[7];
  if (*(char *)((int)fVar2 + 0xc) == '\0') {
    fVar7 = *(float *)((int)fVar2 + 0x7c) * fVar5;
    fVar16 = *(float *)((int)fVar2 + 0x68) * fVar8;
    fVar17 = *(float *)((int)fVar2 + 0x6c) * fVar8;
    fVar10 = *(float *)((int)fVar2 + 0x54) * fVar6;
    fVar9 = *(float *)((int)fVar2 + 0x58) * fVar6;
    fVar11 = *(float *)((int)fVar2 + 0x5c) * fVar6;
    fVar6 = *(float *)((int)fVar2 + 0x50) * fVar6 + *(float *)((int)fVar2 + 0x60) * fVar8 +
            *(float *)((int)fVar2 + 0x70) * fVar5;
    fVar8 = fVar10 + *(float *)((int)fVar2 + 100) * fVar8 + *(float *)((int)fVar2 + 0x74) * fVar5;
    fVar5 = fVar9 + fVar16 + *(float *)((int)fVar2 + 0x78) * fVar5;
    fVar7 = fVar11 + fVar17 + fVar7;
  }
  pfVar1[4] = fVar6;
  pfVar1[5] = fVar8;
  pfVar1[6] = fVar5;
  pfVar1[7] = fVar7;
  fVar5 = param_1[5] * fVar14 - param_1[6] * fVar13;
  fVar6 = param_1[6] * fVar12 - param_1[4] * fVar14;
  fVar7 = param_1[4] * fVar13 - param_1[5] * fVar12;
  fVar8 = param_1[7] * fVar15 - param_1[7] * fVar15;
  if (*(char *)((int)fVar3 + 0xc) == '\0') {
    fVar8 = *(float *)((int)fVar3 + 0x7c) * fVar7;
    fVar14 = *(float *)((int)fVar3 + 0x68) * fVar6;
    fVar15 = *(float *)((int)fVar3 + 0x6c) * fVar6;
    fVar10 = *(float *)((int)fVar3 + 0x54) * fVar5;
    fVar12 = *(float *)((int)fVar3 + 0x58) * fVar5;
    fVar13 = *(float *)((int)fVar3 + 0x5c) * fVar5;
    fVar5 = *(float *)((int)fVar3 + 0x50) * fVar5 + *(float *)((int)fVar3 + 0x60) * fVar6 +
            *(float *)((int)fVar3 + 0x70) * fVar7;
    fVar6 = fVar10 + *(float *)((int)fVar3 + 100) * fVar6 + *(float *)((int)fVar3 + 0x74) * fVar7;
    fVar7 = fVar12 + fVar14 + *(float *)((int)fVar3 + 0x78) * fVar7;
    fVar8 = fVar13 + fVar15 + fVar8;
  }
  pfVar1[8] = fVar5;
  pfVar1[9] = fVar6;
  pfVar1[10] = fVar7;
  pfVar1[0xb] = fVar8;
  fVar2 = *(float *)((int)fVar3 + 0x3c) + *(float *)((int)fVar2 + 0x3c) + 1.1920929e-07 +
          pfVar1[6] * pfVar1[6] * *(float *)((int)fVar2 + 0x38) +
          pfVar1[10] * pfVar1[10] * *(float *)((int)fVar3 + 0x38) +
          pfVar1[5] * pfVar1[5] * *(float *)((int)fVar2 + 0x34) +
          pfVar1[9] * pfVar1[9] * *(float *)((int)fVar3 + 0x34) +
          pfVar1[4] * pfVar1[4] * *(float *)((int)fVar2 + 0x30) +
          pfVar1[8] * pfVar1[8] * *(float *)((int)fVar3 + 0x30);
  pfVar1[0xb] = fVar2;
  pfVar1[7] = 1.0 / fVar2;
  fVar2 = *(float *)((int)param_1[9] + 4);
  puVar4 = (undefined4 *)param_3[1];
  fVar3 = param_1[8];
  fVar5 = *param_2;
  *puVar4 = 0x30806;
  puVar4[1] = fVar3 * fVar5;
  *param_3 = (int)(pfVar1 + 0xc);
  param_3[1] = (int)(puVar4 + 2);
  pfVar1[3] = fVar2 * param_2[1];
  return;
}



void FUN_008f1790(float *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
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
  float fVar16;
  float fVar17;
  
  iVar1 = *(int *)(param_2 + 0x14);
  iVar2 = *(int *)(param_2 + 0x18);
  puVar3 = (undefined4 *)param_3[1];
  pfVar4 = (float *)*param_3;
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  *pfVar4 = param_1[8];
  pfVar4[1] = fVar5;
  pfVar4[2] = fVar6;
  pfVar4[3] = fVar7;
  fVar5 = *param_1 - *(float *)(iVar1 + 0x40);
  fVar7 = param_1[1] - *(float *)(iVar1 + 0x44);
  fVar8 = param_1[2] - *(float *)(iVar1 + 0x48);
  fVar10 = param_1[3] - *(float *)(iVar1 + 0x4c);
  fVar12 = param_1[4] - *(float *)(iVar2 + 0x40);
  fVar13 = param_1[5] - *(float *)(iVar2 + 0x44);
  fVar14 = param_1[6] - *(float *)(iVar2 + 0x48);
  fVar15 = param_1[7] - *(float *)(iVar2 + 0x4c);
  fVar6 = fVar7 * param_1[10] - fVar8 * param_1[9];
  fVar8 = fVar8 * param_1[8] - fVar5 * param_1[10];
  fVar5 = fVar5 * param_1[9] - fVar7 * param_1[8];
  fVar7 = fVar10 * param_1[0xb] - fVar10 * param_1[0xb];
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fVar7 = *(float *)(iVar1 + 0x7c) * fVar5;
    fVar16 = *(float *)(iVar1 + 0x68) * fVar8;
    fVar17 = *(float *)(iVar1 + 0x6c) * fVar8;
    fVar10 = *(float *)(iVar1 + 0x54) * fVar6;
    fVar9 = *(float *)(iVar1 + 0x58) * fVar6;
    fVar11 = *(float *)(iVar1 + 0x5c) * fVar6;
    fVar6 = *(float *)(iVar1 + 0x50) * fVar6 + *(float *)(iVar1 + 0x60) * fVar8 +
            *(float *)(iVar1 + 0x70) * fVar5;
    fVar8 = fVar10 + *(float *)(iVar1 + 100) * fVar8 + *(float *)(iVar1 + 0x74) * fVar5;
    fVar5 = fVar9 + fVar16 + *(float *)(iVar1 + 0x78) * fVar5;
    fVar7 = fVar11 + fVar17 + fVar7;
  }
  pfVar4[4] = fVar6;
  pfVar4[5] = fVar8;
  pfVar4[6] = fVar5;
  pfVar4[7] = fVar7;
  fVar5 = param_1[9] * fVar14 - param_1[10] * fVar13;
  fVar6 = param_1[10] * fVar12 - param_1[8] * fVar14;
  fVar7 = param_1[8] * fVar13 - param_1[9] * fVar12;
  fVar8 = param_1[0xb] * fVar15 - param_1[0xb] * fVar15;
  if (*(char *)(iVar2 + 0xc) == '\0') {
    fVar8 = *(float *)(iVar2 + 0x7c) * fVar7;
    fVar14 = *(float *)(iVar2 + 0x68) * fVar6;
    fVar15 = *(float *)(iVar2 + 0x6c) * fVar6;
    fVar10 = *(float *)(iVar2 + 0x54) * fVar5;
    fVar12 = *(float *)(iVar2 + 0x58) * fVar5;
    fVar13 = *(float *)(iVar2 + 0x5c) * fVar5;
    fVar5 = *(float *)(iVar2 + 0x50) * fVar5 + *(float *)(iVar2 + 0x60) * fVar6 +
            *(float *)(iVar2 + 0x70) * fVar7;
    fVar6 = fVar10 + *(float *)(iVar2 + 100) * fVar6 + *(float *)(iVar2 + 0x74) * fVar7;
    fVar7 = fVar12 + fVar14 + *(float *)(iVar2 + 0x78) * fVar7;
    fVar8 = fVar13 + fVar15 + fVar8;
  }
  pfVar4[8] = fVar5;
  pfVar4[9] = fVar6;
  pfVar4[10] = fVar7;
  pfVar4[0xb] = fVar8;
  fVar5 = *(float *)(iVar2 + 0x3c) + *(float *)(iVar1 + 0x3c) + 1.1920929e-07 +
          pfVar4[6] * pfVar4[6] * *(float *)(iVar1 + 0x38) +
          pfVar4[10] * pfVar4[10] * *(float *)(iVar2 + 0x38) +
          pfVar4[5] * pfVar4[5] * *(float *)(iVar1 + 0x34) +
          pfVar4[9] * pfVar4[9] * *(float *)(iVar2 + 0x34) +
          pfVar4[4] * pfVar4[4] * *(float *)(iVar1 + 0x30) +
          pfVar4[8] * pfVar4[8] * *(float *)(iVar2 + 0x30);
  pfVar4[0xb] = fVar5;
  pfVar4[7] = 1.0 / fVar5;
  pfVar4[3] = ((param_1[6] - param_1[2]) * param_1[10] +
              (param_1[5] - param_1[1]) * param_1[9] + (param_1[4] - *param_1) * param_1[8]) *
              *(float *)(param_2 + 4);
  *puVar3 = 0x3040d;
  *param_3 = (int)(pfVar4 + 0xc);
  param_3[1] = (int)(puVar3 + 1);
  return;
}



void FUN_008f1970(float *param_1,int param_2,int *param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
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
  
  pfVar1 = (float *)*param_3;
  fVar5 = param_1[9];
  fVar6 = param_1[10];
  fVar7 = param_1[0xb];
  iVar2 = *(int *)(param_2 + 0x14);
  iVar3 = *(int *)(param_2 + 0x18);
  *pfVar1 = param_1[8];
  pfVar1[1] = fVar5;
  pfVar1[2] = fVar6;
  pfVar1[3] = fVar7;
  fVar5 = *param_1 - *(float *)(iVar2 + 0x40);
  fVar7 = param_1[1] - *(float *)(iVar2 + 0x44);
  fVar8 = param_1[2] - *(float *)(iVar2 + 0x48);
  fVar10 = param_1[3] - *(float *)(iVar2 + 0x4c);
  fVar12 = param_1[4] - *(float *)(iVar3 + 0x40);
  fVar13 = param_1[5] - *(float *)(iVar3 + 0x44);
  fVar14 = param_1[6] - *(float *)(iVar3 + 0x48);
  fVar15 = param_1[7] - *(float *)(iVar3 + 0x4c);
  fVar6 = fVar7 * param_1[10] - fVar8 * param_1[9];
  fVar8 = fVar8 * param_1[8] - fVar5 * param_1[10];
  fVar5 = fVar5 * param_1[9] - fVar7 * param_1[8];
  fVar7 = fVar10 * param_1[0xb] - fVar10 * param_1[0xb];
  if (*(char *)(iVar2 + 0xc) == '\0') {
    fVar7 = *(float *)(iVar2 + 0x7c) * fVar5;
    fVar16 = *(float *)(iVar2 + 0x68) * fVar8;
    fVar17 = *(float *)(iVar2 + 0x6c) * fVar8;
    fVar10 = *(float *)(iVar2 + 0x54) * fVar6;
    fVar9 = *(float *)(iVar2 + 0x58) * fVar6;
    fVar11 = *(float *)(iVar2 + 0x5c) * fVar6;
    fVar6 = *(float *)(iVar2 + 0x50) * fVar6 + *(float *)(iVar2 + 0x60) * fVar8 +
            *(float *)(iVar2 + 0x70) * fVar5;
    fVar8 = fVar10 + *(float *)(iVar2 + 100) * fVar8 + *(float *)(iVar2 + 0x74) * fVar5;
    fVar5 = fVar9 + fVar16 + *(float *)(iVar2 + 0x78) * fVar5;
    fVar7 = fVar11 + fVar17 + fVar7;
  }
  pfVar1[4] = fVar6;
  pfVar1[5] = fVar8;
  pfVar1[6] = fVar5;
  pfVar1[7] = fVar7;
  fVar5 = param_1[9] * fVar14 - param_1[10] * fVar13;
  fVar6 = param_1[10] * fVar12 - param_1[8] * fVar14;
  fVar7 = param_1[8] * fVar13 - param_1[9] * fVar12;
  fVar8 = param_1[0xb] * fVar15 - param_1[0xb] * fVar15;
  if (*(char *)(iVar3 + 0xc) == '\0') {
    fVar8 = *(float *)(iVar3 + 0x7c) * fVar7;
    fVar14 = *(float *)(iVar3 + 0x68) * fVar6;
    fVar15 = *(float *)(iVar3 + 0x6c) * fVar6;
    fVar10 = *(float *)(iVar3 + 0x54) * fVar5;
    fVar12 = *(float *)(iVar3 + 0x58) * fVar5;
    fVar13 = *(float *)(iVar3 + 0x5c) * fVar5;
    fVar5 = *(float *)(iVar3 + 0x50) * fVar5 + *(float *)(iVar3 + 0x60) * fVar6 +
            *(float *)(iVar3 + 0x70) * fVar7;
    fVar6 = fVar10 + *(float *)(iVar3 + 100) * fVar6 + *(float *)(iVar3 + 0x74) * fVar7;
    fVar7 = fVar12 + fVar14 + *(float *)(iVar3 + 0x78) * fVar7;
    fVar8 = fVar13 + fVar15 + fVar8;
  }
  pfVar1[8] = fVar5;
  pfVar1[9] = fVar6;
  pfVar1[10] = fVar7;
  pfVar1[0xb] = fVar8;
  fVar5 = *(float *)(iVar3 + 0x3c) + *(float *)(iVar2 + 0x3c) + 1.1920929e-07 +
          pfVar1[6] * pfVar1[6] * *(float *)(iVar2 + 0x38) +
          pfVar1[10] * pfVar1[10] * *(float *)(iVar3 + 0x38) +
          pfVar1[5] * pfVar1[5] * *(float *)(iVar2 + 0x34) +
          pfVar1[9] * pfVar1[9] * *(float *)(iVar3 + 0x34) +
          pfVar1[4] * pfVar1[4] * *(float *)(iVar2 + 0x30) +
          pfVar1[8] * pfVar1[8] * *(float *)(iVar3 + 0x30);
  pfVar1[0xb] = fVar5;
  pfVar1[7] = 1.0 / fVar5;
  pfVar1[3] = ((param_1[6] - param_1[2]) * param_1[10] +
              (param_1[5] - param_1[1]) * param_1[9] + (param_1[4] - *param_1) * param_1[8]) *
              *(float *)(param_2 + 4);
  fVar5 = *(float *)(param_2 + 4);
  fVar6 = param_1[0xc];
  fVar7 = param_1[0xd];
  puVar4 = (undefined4 *)param_3[1];
  *puVar4 = 0x30c0b;
  puVar4[1] = -fVar5 * fVar6;
  puVar4[2] = -fVar5 * fVar7;
  *param_3 = (int)(pfVar1 + 0xc);
  param_3[1] = (int)(puVar4 + 3);
  return;
}



void FUN_008f1b60(float *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  undefined4 *puVar4;
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
  
  iVar1 = *(int *)(param_2 + 0x18);
  iVar2 = *(int *)(param_2 + 0x14);
  pfVar3 = (float *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  fVar5 = *param_1;
  fVar8 = param_1[1];
  fVar11 = param_1[2];
  fVar14 = param_1[3];
  if (*(char *)(iVar2 + 0xc) == '\0') {
    fVar14 = *(float *)(iVar2 + 0x7c) * fVar11;
    fVar15 = *(float *)(iVar2 + 0x68) * fVar8;
    fVar16 = *(float *)(iVar2 + 0x6c) * fVar8;
    fVar7 = *(float *)(iVar2 + 0x54) * fVar5;
    fVar10 = *(float *)(iVar2 + 0x58) * fVar5;
    fVar13 = *(float *)(iVar2 + 0x5c) * fVar5;
    fVar5 = *(float *)(iVar2 + 0x50) * fVar5 + *(float *)(iVar2 + 0x60) * fVar8 +
            *(float *)(iVar2 + 0x70) * fVar11;
    fVar8 = fVar7 + *(float *)(iVar2 + 100) * fVar8 + *(float *)(iVar2 + 0x74) * fVar11;
    fVar11 = fVar10 + fVar15 + *(float *)(iVar2 + 0x78) * fVar11;
    fVar14 = fVar13 + fVar16 + fVar14;
  }
  *pfVar3 = fVar5;
  pfVar3[1] = fVar8;
  pfVar3[2] = fVar11;
  pfVar3[3] = fVar14;
  if (*(char *)(iVar1 + 0xc) == '\0') {
    fVar5 = *(float *)(iVar1 + 0x74);
    fVar8 = *(float *)(iVar1 + 0x78);
    fVar11 = *(float *)(iVar1 + 0x7c);
    fVar14 = *(float *)(iVar1 + 100);
    fVar7 = *(float *)(iVar1 + 0x68);
    fVar10 = *(float *)(iVar1 + 0x6c);
    fVar6 = -*param_1;
    fVar9 = -param_1[1];
    fVar12 = -param_1[2];
    fVar13 = *(float *)(iVar1 + 0x54);
    fVar15 = *(float *)(iVar1 + 0x58);
    fVar16 = *(float *)(iVar1 + 0x5c);
    pfVar3[4] = *(float *)(iVar1 + 0x50) * fVar6 + *(float *)(iVar1 + 0x60) * fVar9 +
                *(float *)(iVar1 + 0x70) * fVar12;
    pfVar3[5] = fVar13 * fVar6 + fVar14 * fVar9 + fVar5 * fVar12;
    pfVar3[6] = fVar15 * fVar6 + fVar7 * fVar9 + fVar8 * fVar12;
    pfVar3[7] = fVar16 * fVar6 + fVar10 * fVar9 + fVar11 * fVar12;
  }
  else {
    fVar5 = param_1[1];
    fVar8 = param_1[2];
    fVar11 = param_1[3];
    pfVar3[4] = -*param_1;
    pfVar3[5] = -fVar5;
    pfVar3[6] = -fVar8;
    pfVar3[7] = -fVar11;
  }
  pfVar3[3] = 1.0 / (pfVar3[2] * pfVar3[2] * *(float *)(iVar2 + 0x38) +
                     pfVar3[6] * pfVar3[6] * *(float *)(iVar1 + 0x38) +
                     pfVar3[1] * pfVar3[1] * *(float *)(iVar2 + 0x34) +
                     pfVar3[5] * pfVar3[5] * *(float *)(iVar1 + 0x34) +
                     *pfVar3 * *pfVar3 * *(float *)(iVar2 + 0x30) +
                     pfVar3[4] * pfVar3[4] * *(float *)(iVar1 + 0x30) + 1.1920929e-07);
  fVar8 = -*(float *)(param_2 + 4);
  fVar5 = param_1[5];
  puVar4[1] = fVar8 * param_1[4];
  *puVar4 = 0x4100a;
  puVar4[3] = 0x3f000000;
  puVar4[2] = fVar8 * fVar5;
  param_3[1] = (int)(puVar4 + 4);
  *param_3 = (int)(pfVar3 + 8);
  pfVar3[7] = fVar8 * param_1[6];
  pfVar3[3] = pfVar3[3] * 0.5;
  return;
}



void FUN_008f1cc0(float *param_1,float *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
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
  int local_1c;
  
  iVar1 = *(int *)(param_3 + 0x14);
  iVar2 = *(int *)(param_3 + 0x18);
  local_1c = 3;
  pfVar3 = (float *)*param_4;
  pfVar5 = (float *)&DAT_00b2f090;
  puVar6 = (undefined4 *)param_4[1];
  do {
    fVar8 = pfVar5[1];
    fVar9 = pfVar5[2];
    fVar10 = pfVar5[3];
    *pfVar3 = *pfVar5;
    pfVar3[1] = fVar8;
    pfVar3[2] = fVar9;
    pfVar3[3] = fVar10;
    fVar8 = *param_1 - *(float *)(iVar1 + 0x40);
    fVar10 = param_1[1] - *(float *)(iVar1 + 0x44);
    fVar11 = param_1[2] - *(float *)(iVar1 + 0x48);
    fVar13 = param_1[3] - *(float *)(iVar1 + 0x4c);
    fVar15 = *param_2 - *(float *)(iVar2 + 0x40);
    fVar16 = param_2[1] - *(float *)(iVar2 + 0x44);
    fVar17 = param_2[2] - *(float *)(iVar2 + 0x48);
    fVar18 = param_2[3] - *(float *)(iVar2 + 0x4c);
    fVar9 = fVar10 * pfVar5[2] - fVar11 * pfVar5[1];
    fVar11 = fVar11 * *pfVar5 - fVar8 * pfVar5[2];
    fVar8 = fVar8 * pfVar5[1] - fVar10 * *pfVar5;
    fVar10 = fVar13 * pfVar5[3] - fVar13 * pfVar5[3];
    if (*(char *)(iVar1 + 0xc) == '\0') {
      fVar10 = *(float *)(iVar1 + 0x7c) * fVar8;
      fVar19 = *(float *)(iVar1 + 0x68) * fVar11;
      fVar20 = *(float *)(iVar1 + 0x6c) * fVar11;
      fVar13 = *(float *)(iVar1 + 0x54) * fVar9;
      fVar12 = *(float *)(iVar1 + 0x58) * fVar9;
      fVar14 = *(float *)(iVar1 + 0x5c) * fVar9;
      fVar9 = *(float *)(iVar1 + 0x50) * fVar9 + *(float *)(iVar1 + 0x60) * fVar11 +
              *(float *)(iVar1 + 0x70) * fVar8;
      fVar11 = fVar13 + *(float *)(iVar1 + 100) * fVar11 + *(float *)(iVar1 + 0x74) * fVar8;
      fVar8 = fVar12 + fVar19 + *(float *)(iVar1 + 0x78) * fVar8;
      fVar10 = fVar14 + fVar20 + fVar10;
    }
    pfVar3[4] = fVar9;
    pfVar3[5] = fVar11;
    pfVar3[6] = fVar8;
    pfVar3[7] = fVar10;
    fVar8 = pfVar5[1] * fVar17 - pfVar5[2] * fVar16;
    fVar9 = pfVar5[2] * fVar15 - *pfVar5 * fVar17;
    fVar10 = *pfVar5 * fVar16 - pfVar5[1] * fVar15;
    fVar11 = pfVar5[3] * fVar18 - pfVar5[3] * fVar18;
    if (*(char *)(iVar2 + 0xc) == '\0') {
      fVar11 = *(float *)(iVar2 + 0x7c) * fVar10;
      fVar17 = *(float *)(iVar2 + 0x68) * fVar9;
      fVar18 = *(float *)(iVar2 + 0x6c) * fVar9;
      fVar13 = *(float *)(iVar2 + 0x54) * fVar8;
      fVar15 = *(float *)(iVar2 + 0x58) * fVar8;
      fVar16 = *(float *)(iVar2 + 0x5c) * fVar8;
      fVar8 = *(float *)(iVar2 + 0x50) * fVar8 + *(float *)(iVar2 + 0x60) * fVar9 +
              *(float *)(iVar2 + 0x70) * fVar10;
      fVar9 = fVar13 + *(float *)(iVar2 + 100) * fVar9 + *(float *)(iVar2 + 0x74) * fVar10;
      fVar10 = fVar15 + fVar17 + *(float *)(iVar2 + 0x78) * fVar10;
      fVar11 = fVar16 + fVar18 + fVar11;
    }
    pfVar3[8] = fVar8;
    pfVar3[9] = fVar9;
    pfVar3[10] = fVar10;
    pfVar3[0xb] = fVar11;
    fVar8 = *(float *)(iVar2 + 0x3c) + *(float *)(iVar1 + 0x3c) + 1.1920929e-07 +
            pfVar3[6] * pfVar3[6] * *(float *)(iVar1 + 0x38) +
            pfVar3[10] * pfVar3[10] * *(float *)(iVar2 + 0x38) +
            pfVar3[5] * pfVar3[5] * *(float *)(iVar1 + 0x34) +
            pfVar3[9] * pfVar3[9] * *(float *)(iVar2 + 0x34) +
            pfVar3[4] * pfVar3[4] * *(float *)(iVar1 + 0x30) +
            pfVar3[8] * pfVar3[8] * *(float *)(iVar2 + 0x30);
    puVar7 = puVar6 + 1;
    pfVar3[0xb] = fVar8;
    pfVar4 = pfVar3 + 0xc;
    pfVar3[7] = 1.0 / fVar8;
    local_1c = local_1c + -1;
    pfVar3[3] = ((param_2[2] - param_1[2]) * pfVar5[2] +
                (param_2[1] - param_1[1]) * pfVar5[1] + (*param_2 - *param_1) * *pfVar5) *
                *(float *)(param_3 + 4);
    *puVar6 = 0x3040d;
    pfVar3 = pfVar4;
    pfVar5 = pfVar5 + 4;
    puVar6 = puVar7;
  } while (local_1c != 0);
  param_4[1] = puVar7;
  *param_4 = pfVar4;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

undefined4 thunk_FUN_0092c240(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  int unaff_FS_OFFSET;
  float *pfStack_10a0;
  int iStack_109c;
  uint uStack_1098;
  float *pfStack_1094;
  int iStack_1090;
  int iStack_108c;
  float fStack_1088;
  undefined1 auStack_1084 [4];
  undefined4 uStack_1080;
  undefined4 uStack_107c;
  undefined4 *puStack_1078;
  undefined4 uStack_1070;
  undefined4 uStack_106c;
  undefined4 uStack_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  undefined4 uStack_1048;
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined4 uStack_1028;
  undefined1 *puStack_1020;
  int iStack_101c;
  int iStack_1018;
  undefined1 auStack_1010 [4092];
  undefined4 uStack_14;
  
  iVar11 = _tls_index;
  uStack_14 = 0x92c250;
  iVar14 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar12 = *(int *)(iVar14 + _tls_index * 4);
  if (*(uint *)(iVar12 + 0x1a4) < *(uint *)(iVar12 + 0x1a8)) {
    puVar13 = *(undefined4 **)(iVar12 + 0x1a4);
    *puVar13 = "TtplanesToVerts";
    uVar4 = rdtsc();
    iStack_1090 = (int)uVar4;
    puVar13[1] = iStack_1090;
    *(undefined4 **)(iVar12 + 0x1a4) = puVar13 + 3;
  }
  uVar2 = param_1[1];
  pfStack_10a0 = (float *)0x0;
  iStack_109c = 0;
  iStack_108c = *(int *)(iVar14 + iVar11 * 4);
  piVar3 = *(int **)(iStack_108c + 0x19c);
  iVar14 = uVar2 + 1;
  uStack_1098 = 0x80000000;
  pfStack_1094 = (float *)piVar3[8];
  if ((float *)piVar3[0xb] < pfStack_1094 + iVar14 * 4) {
    pfStack_1094 = (float *)(**(code **)(*piVar3 + 0xc))(iVar14 * 0x10);
  }
  else {
    piVar3[8] = (int)(pfStack_1094 + iVar14 * 4);
  }
  iStack_109c = param_1[1];
  uStack_1098 = uVar2 | 0x80000000;
  iVar14 = 0;
  if (0 < iStack_109c) {
    iVar12 = 0;
    do {
      puVar13 = (undefined4 *)(*param_1 + iVar12);
      uVar5 = puVar13[1];
      uVar6 = puVar13[2];
      uVar7 = puVar13[3];
      puVar1 = (undefined4 *)(iVar12 + (int)pfStack_1094);
      *puVar1 = *puVar13;
      puVar1[1] = uVar5;
      puVar1[2] = uVar6;
      puVar1[3] = uVar7;
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + 0x10;
    } while (iVar14 < iStack_109c);
  }
  pfStack_10a0 = pfStack_1094;
  if (1 < iStack_109c) {
    FUN_0092b640(pfStack_1094,0,iStack_109c + -1,&LAB_0092c9b0);
  }
  iVar14 = FUN_0092bd20(&pfStack_10a0,&fStack_1088,auStack_1084,&uStack_1040,&uStack_1060);
  if (iVar14 == 1) {
    iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
      puVar13 = *(undefined4 **)(iStack_108c + 0x1a4);
      *puVar13 = &DAT_00a9610c;
      uVar4 = rdtsc();
      iStack_1090 = (int)uVar4;
      puVar13[1] = iStack_1090;
      *(undefined4 **)(iStack_108c + 0x1a4) = puVar13 + 3;
    }
    piVar3 = *(int **)(iStack_108c + 0x19c);
    piVar3[8] = (int)pfStack_1094;
    if (pfStack_1094 == (float *)piVar3[10]) {
      (**(code **)(*piVar3 + 0x10))(pfStack_1094);
    }
    if (-1 < (int)uStack_1098) {
      FUN_008a75d0(pfStack_10a0,uStack_1098 << 4,0x14);
    }
    return 1;
  }
  puStack_1020 = auStack_1010;
  iStack_101c = 0;
  iStack_1018 = -0x7fffff80;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_2,0x10);
  }
  puVar13 = (undefined4 *)(param_2[1] * 0x10 + *param_2);
  param_2[1] = param_2[1] + 1;
  *puVar13 = uStack_1060;
  puVar13[1] = uStack_105c;
  puVar13[2] = uStack_1058;
  puVar13[3] = uStack_1054;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_2,0x10);
  }
  puVar13 = (undefined4 *)(param_2[1] * 0x10 + *param_2);
  param_2[1] = param_2[1] + 1;
  *puVar13 = uStack_1040;
  puVar13[1] = uStack_103c;
  puVar13[2] = uStack_1038;
  puVar13[3] = uStack_1034;
  puVar13 = (undefined4 *)(puStack_1020 + iStack_101c * 0x20);
  iStack_101c = iStack_101c + 1;
  *puVar13 = uStack_1050;
  puVar13[1] = uStack_104c;
  puVar13[2] = puStack_1078;
  puVar13[4] = uStack_1070;
  puVar13[5] = uStack_106c;
  puVar13[6] = uStack_1068;
  puVar13[7] = uStack_1064;
  uStack_1080 = uStack_1030;
  uStack_107c = uStack_1028;
  puStack_1078 = &uStack_1040;
  FUN_0092b580(&pfStack_10a0,uStack_1030,uStack_1028,uStack_102c,&uStack_1070);
  FUN_0092c020(&uStack_1080,&pfStack_10a0,&puStack_1020,param_2);
  puStack_1078 = &uStack_1040;
  uStack_1080 = uStack_102c;
  uStack_107c = uStack_1028;
  FUN_0092b580(&pfStack_10a0,uStack_102c,uStack_1028,uStack_1030,&uStack_1070);
  FUN_0092c020(&uStack_1080,&pfStack_10a0,&puStack_1020,param_2);
  puStack_1078 = &uStack_1060;
  uStack_1080 = uStack_1050;
  uStack_107c = uStack_1048;
  FUN_0092b580(&pfStack_10a0,uStack_1050,uStack_1048,uStack_104c,&uStack_1070);
  FUN_0092c020(&uStack_1080,&pfStack_10a0,&puStack_1020,param_2);
  puStack_1078 = &uStack_1060;
  uStack_1080 = uStack_104c;
  uStack_107c = uStack_1048;
  FUN_0092b580(&pfStack_10a0,uStack_104c,uStack_1048,uStack_1050,&uStack_1070);
  FUN_0092c020(&uStack_1080,&pfStack_10a0,&puStack_1020,param_2);
  if (-1 < iStack_1018) {
    FUN_008a75d0(puStack_1020,iStack_1018 << 5,0x14);
  }
  pfVar16 = (float *)*param_2;
  pfVar15 = pfVar16;
  pfVar17 = pfVar16;
  iVar14 = param_2[1];
  if (-1 < param_2[1] + -1) {
    do {
      iStack_1090 = iVar14;
      iVar14 = 0;
      if (0 < iStack_109c) {
        pfVar18 = pfStack_10a0;
        do {
          fStack_1088 = pfVar18[1] * pfVar17[1] + *pfVar18 * *pfVar17 +
                        pfVar18[2] * pfVar17[2] + pfVar18[3];
          pfVar16 = pfVar15;
          if (1e-05 < fStack_1088) goto LAB_0092c69d;
          iVar14 = iVar14 + 1;
          pfVar18 = pfVar18 + 4;
        } while (iVar14 < iStack_109c);
      }
      fVar8 = pfVar17[1];
      fVar9 = pfVar17[2];
      fVar10 = pfVar17[3];
      pfVar16 = pfVar15 + 4;
      *pfVar15 = *pfVar17;
      pfVar15[1] = fVar8;
      pfVar15[2] = fVar9;
      pfVar15[3] = fVar10;
LAB_0092c69d:
      iStack_1090 = iStack_1090 + -1;
      pfVar15 = pfVar16;
      pfVar17 = pfVar17 + 4;
      iVar14 = iStack_1090;
    } while (iStack_1090 != 0);
  }
  iVar14 = (int)pfVar16 - *param_2 >> 4;
  if ((int)(param_2[2] & 0x3fffffffU) < iVar14) {
    iVar12 = (param_2[2] & 0x3fffffffU) * 2;
    if (iVar12 <= iVar14) {
      iVar12 = iVar14;
    }
    FUN_008a6e40(param_2,iVar12,0x10);
  }
  param_2[1] = iVar14;
  if (1 < iVar14) {
    FUN_0092b640(*param_2,0,iVar14 + -1,&LAB_0092c9b0);
  }
  FUN_0092dca0(0x37a7c5ac,param_2,&fStack_1088);
  iVar14 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar14 + 0x1a4) < *(uint *)(iVar14 + 0x1a8)) {
    puVar13 = *(undefined4 **)(iStack_108c + 0x1a4);
    *puVar13 = &DAT_00a9610c;
    uVar4 = rdtsc();
    fStack_1088 = (float)uVar4;
    puVar13[1] = fStack_1088;
    *(undefined4 **)(iStack_108c + 0x1a4) = puVar13 + 3;
  }
  piVar3 = *(int **)(iStack_108c + 0x19c);
  piVar3[8] = (int)pfStack_1094;
  if (pfStack_1094 == (float *)piVar3[10]) {
    (**(code **)(*piVar3 + 0x10))(pfStack_1094);
  }
  if (-1 < (int)uStack_1098) {
    FUN_008a75d0(pfStack_10a0,uStack_1098 << 4,0x14);
  }
  return 0;
}



void FUN_008f1ed0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  uint local_4;
  
  puVar4 = param_1;
  uVar3 = param_1[2];
  if ((uVar3 == 0x10) && ((*param_1 & 0xf) == 0)) {
    FUN_009333b0(*param_1,param_1[1],param_2,param_3,param_4);
    return;
  }
  puVar1 = param_1 + 1;
  local_c = 0;
  local_8 = 0;
  local_4 = 0x80000000;
  param_1 = (uint *)0x0;
  if (0 < (int)*puVar1) {
    iVar6 = 0;
    do {
      iVar7 = local_8;
      iVar2 = local_8 + 1;
      if ((int)(local_4 & 0x3fffffff) < iVar2) {
        iVar5 = (local_4 & 0x3fffffff) * 2;
        if (iVar5 <= iVar2) {
          iVar5 = iVar2;
        }
        FUN_008a6e40(&local_c,iVar5,0x10);
      }
      *(undefined4 *)(iVar7 * 0x10 + local_c) = *(undefined4 *)(iVar6 + *puVar4);
      iVar7 = iVar7 * 0x10 + local_c;
      *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(*puVar4 + 4 + iVar6);
      *(undefined4 *)(iVar7 + 8) = *(undefined4 *)(*puVar4 + 8 + iVar6);
      param_1 = (uint *)((int)param_1 + 1);
      iVar6 = iVar6 + ((int)(uVar3 + ((int)uVar3 >> 0x1f & 3U)) >> 2) * 4;
      local_8 = iVar2;
    } while ((int)param_1 < (int)puVar4[1]);
  }
  FUN_009333b0(local_c,puVar4[1],param_2,param_3,param_4);
  if (-1 < (int)local_4) {
    FUN_008a75d0(local_c,local_4 << 4,0x14);
  }
  return;
}



void FUN_008f2010(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  int unaff_FS_OFFSET;
  undefined1 local_445;
  undefined1 local_444 [2];
  undefined1 local_442;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined1 local_410 [4];
  undefined4 local_40c;
  int local_404;
  
  iVar5 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtCreateConvex";
    puVar3[3] = &DAT_00a9b204;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 4;
  }
  FUN_00933d80();
  FUN_008f1ed0(param_1,local_410,param_2,param_4);
  FUN_00931a30(local_410,param_2);
  iVar2 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "Stplanes";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  local_442 = param_4 == 2;
  local_444[0] = 1;
  local_440 = 0x37a7c5ac;
  local_43c = 0x368637bd;
  local_438 = 0x358637bd;
  local_434 = 0x3727c5ac;
  local_430 = 0x3d4ccccd;
  local_42c = 0x358637bd;
  local_428 = 0x358637bd;
  local_424 = 0x322bcc77;
  local_420 = 0x358637bd;
  local_41c = 0x38d1b717;
  local_418 = 0x3727c5ac;
  local_414 = 0x37a7c5ac;
  FUN_00931af0(&local_445,local_444,local_410,param_2,param_3);
  iVar1 = *(int *)(iVar1 + iVar5 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  if (-1 < local_404) {
    FUN_008a75d0(local_40c,local_404 << 3,0x14);
  }
  return;
}



void FUN_008f21e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_410 [4];
  undefined4 local_40c;
  int local_404;
  
  FUN_00933d80();
  FUN_008f1ed0(param_1,local_410,param_2,param_3);
  FUN_00931a30(local_410,param_2);
  if (-1 < local_404) {
    FUN_008a75d0(local_40c,local_404 << 3,0x14);
  }
  return;
}



float10 FUN_008f2260(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x10);
}



void FUN_008f2290(int *param_1)

{
  (**(code **)*param_1)("Cylinder",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



float10 FUN_008f22b0(void)

{
  undefined4 local_8;
  
  local_8 = 0.0;
  do {
    if ((int)ROUND(local_8) != 0) {
      return (float10)local_8;
    }
    local_8 = local_8 + 0.01;
  } while (local_8 < 1.1);
  return (float10)1.0;
}



void FUN_008f2300(void)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float local_20 [7];
  
  local_20[0] = *(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x20);
  local_20[1] = *(float *)(in_ECX + 0x34) - *(float *)(in_ECX + 0x24);
  local_20[2] = *(float *)(in_ECX + 0x38) - *(float *)(in_ECX + 0x28);
  fVar7 = local_20[1] * local_20[1];
  fVar9 = local_20[2] * local_20[2];
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar7;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar7 + local_20[0] * local_20[0];
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar9 + auVar12._0_4_;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar9;
  auVar13 = rsqrtss(auVar12,auVar13);
  fVar7 = auVar13._0_4_;
  fVar9 = fVar7 * 0.5 * (3.0 - (fVar9 + auVar12._0_4_) * fVar7 * fVar7);
  local_20[0] = fVar9 * local_20[0];
  local_20[1] = fVar9 * local_20[1];
  local_20[2] = fVar9 * local_20[2];
  fVar9 = fVar9 * (*(float *)(in_ECX + 0x3c) - *(float *)(in_ECX + 0x2c));
  bVar1 = ABS(local_20[0]) <= ABS(local_20[1]);
  fVar7 = ABS(local_20[0]);
  if (!bVar1) {
    fVar7 = ABS(local_20[1]);
  }
  uVar5 = (uint)!bVar1;
  uVar6 = 2;
  if (ABS(local_20[2]) < fVar7) {
    uVar5 = 2;
    uVar6 = (uint)!bVar1;
  }
  *(undefined4 *)(in_ECX + 0x40 + uVar5 * 4) = 0;
  fVar7 = local_20[bVar1];
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(float *)((uint)bVar1 * 4 + 0x40 + in_ECX) = local_20[uVar6];
  *(float *)(uVar6 * 4 + 0x40 + in_ECX) = -fVar7;
  fVar7 = *(float *)(in_ECX + 0x40);
  fVar3 = *(float *)(in_ECX + 0x44);
  fVar4 = *(float *)(in_ECX + 0x48);
  fVar8 = fVar3 * fVar3;
  fVar10 = fVar4 * fVar4;
  auVar14._4_4_ = fVar8;
  auVar14._0_4_ = fVar8;
  auVar14._8_4_ = fVar8;
  auVar14._12_4_ = fVar8;
  auVar15._4_12_ = auVar14._4_12_;
  auVar15._0_4_ = fVar8 + fVar7 * fVar7;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar10 + auVar15._0_4_;
  auVar2._8_4_ = fVar10;
  auVar2._12_4_ = fVar10;
  auVar13 = rsqrtss(auVar15,auVar2);
  fVar8 = auVar13._0_4_;
  fVar8 = fVar8 * 0.5 * (3.0 - (fVar10 + auVar15._0_4_) * fVar8 * fVar8);
  *(float *)(in_ECX + 0x40) = fVar8 * fVar7;
  *(float *)(in_ECX + 0x44) = fVar8 * fVar3;
  *(float *)(in_ECX + 0x48) = fVar8 * fVar4;
  *(float *)(in_ECX + 0x4c) = fVar8 * *(float *)(in_ECX + 0x4c);
  *(float *)(in_ECX + 0x50) =
       local_20[1] * *(float *)(in_ECX + 0x48) - local_20[2] * *(float *)(in_ECX + 0x44);
  *(float *)(in_ECX + 0x54) =
       local_20[2] * *(float *)(in_ECX + 0x40) - local_20[0] * *(float *)(in_ECX + 0x48);
  *(float *)(in_ECX + 0x58) =
       local_20[0] * *(float *)(in_ECX + 0x44) - local_20[1] * *(float *)(in_ECX + 0x40);
  *(float *)(in_ECX + 0x5c) = fVar9 * *(float *)(in_ECX + 0x4c) - fVar9 * *(float *)(in_ECX + 0x4c);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f24a0(float *param_1,float *param_2)

{
  float *pfVar1;
  bool bVar2;
  float fVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  int in_ECX;
  int iVar14;
  float fVar15;
  float fVar16;
  float local_18;
  
  fVar5 = *param_1;
  fVar6 = param_1[1];
  fVar7 = param_1[2];
  fVar15 = *(float *)(in_ECX + 0x48) * fVar7 +
           *(float *)(in_ECX + 0x44) * fVar6 + *(float *)(in_ECX + 0x40) * fVar5;
  fVar16 = *(float *)(in_ECX + 0x58) * fVar7 +
           *(float *)(in_ECX + 0x54) * fVar6 + *(float *)(in_ECX + 0x50) * fVar5;
  fVar3 = fVar15 * fVar15 + fVar16 * fVar16;
  if (fVar3 < 1.4210855e-14) {
    iVar14 = 1;
    fVar16 = 0.0;
    fVar15 = 1.0;
  }
  else {
    fVar3 = 1.0 / SQRT(fVar3);
    fVar16 = fVar16 * fVar3;
    fVar15 = fVar15 * fVar3;
    if (fVar16 < 0.0) {
      iVar14 = 0;
    }
    else {
      iVar14 = 1;
    }
  }
  fVar16 = ABS(fVar16);
  fVar3 = ABS(fVar15);
  bVar2 = fVar16 < fVar3 != (fVar16 == fVar3);
  if (bVar2) {
    fVar3 = fVar16;
  }
  fVar16 = (*(float *)(in_ECX + 0x38) - *(float *)(in_ECX + 0x28)) * fVar7 +
           (*(float *)(in_ECX + 0x34) - *(float *)(in_ECX + 0x24)) * fVar6 +
           (*(float *)(in_ECX + 0x30) - *(float *)(in_ECX + 0x20)) * fVar5;
  uVar13 = ((uint)bVar2 +
           ((uint)(0.0 <= fVar15) + (iVar14 + (uint)(fVar16 < 0.0 != (fVar16 == 0.0)) * 2) * 2) * 2)
           * 0x10 + (int)ROUND((_DAT_00b2fdbc * fVar3 - _DAT_00b2fdc4) + 0.05);
  bVar4 = (byte)uVar13;
  fVar3 = ((float)(uVar13 & 0xf) + 0.5) * _DAT_00b2fdc0;
  if ((bVar4 >> 4 & 1) == 0) {
    local_18 = SQRT(1.0 - fVar3 * fVar3);
  }
  else {
    local_18 = fVar3;
    fVar3 = SQRT(1.0 - fVar3 * fVar3);
  }
  if ((bVar4 >> 6 & 1) == 0) {
    local_18 = -local_18;
  }
  if ((bVar4 >> 5 & 1) == 0) {
    fVar3 = -fVar3;
  }
  fVar16 = *(float *)(in_ECX + 0x10);
  fVar5 = *(float *)(in_ECX + 0x54);
  fVar6 = *(float *)(in_ECX + 0x58);
  fVar7 = *(float *)(in_ECX + 0x5c);
  fVar15 = *(float *)(in_ECX + 0x44);
  fVar8 = *(float *)(in_ECX + 0x48);
  fVar9 = *(float *)(in_ECX + 0x4c);
  pfVar1 = (float *)((3 - (uint)((char)bVar4 < '\0')) * 0x10 + in_ECX);
  fVar10 = pfVar1[1];
  fVar11 = pfVar1[2];
  fVar12 = pfVar1[3];
  *param_2 = *pfVar1 + fVar16 * (fVar3 * *(float *)(in_ECX + 0x40) +
                                local_18 * *(float *)(in_ECX + 0x50));
  param_2[1] = fVar10 + fVar16 * (fVar3 * fVar15 + local_18 * fVar5);
  param_2[2] = fVar11 + fVar16 * (fVar3 * fVar8 + local_18 * fVar6);
  param_2[3] = fVar12 + fVar16 * (fVar3 * fVar9 + local_18 * fVar7);
  param_2[3] = (float)(uVar13 | 0x3f000000);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f2720(ushort *param_1,int param_2,float *param_3)

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
  byte bVar13;
  int in_ECX;
  float local_20;
  int local_1c;
  
  if (-1 < param_2 + -1) {
    local_1c = param_2;
    do {
      bVar13 = (byte)*param_1;
      fVar12 = ((float)(bVar13 & 0xf) + 0.5) * _DAT_00b2fdc0;
      if ((bVar13 >> 4 & 1) == 0) {
        local_20 = SQRT(1.0 - fVar12 * fVar12);
      }
      else {
        local_20 = fVar12;
        fVar12 = SQRT(1.0 - fVar12 * fVar12);
      }
      if ((bVar13 >> 6 & 1) == 0) {
        local_20 = -local_20;
      }
      if ((bVar13 >> 5 & 1) == 0) {
        fVar12 = -fVar12;
      }
      fVar2 = *(float *)(in_ECX + 0x10);
      fVar3 = *(float *)(in_ECX + 0x54);
      fVar4 = *(float *)(in_ECX + 0x58);
      fVar5 = *(float *)(in_ECX + 0x5c);
      fVar6 = *(float *)(in_ECX + 0x44);
      fVar7 = *(float *)(in_ECX + 0x48);
      fVar8 = *(float *)(in_ECX + 0x4c);
      pfVar1 = (float *)((3 - (uint)((char)bVar13 < '\0')) * 0x10 + in_ECX);
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      *param_3 = *pfVar1 + fVar2 * (fVar12 * *(float *)(in_ECX + 0x40) +
                                   local_20 * *(float *)(in_ECX + 0x50));
      param_3[1] = fVar9 + fVar2 * (fVar12 * fVar6 + local_20 * fVar3);
      param_3[2] = fVar10 + fVar2 * (fVar12 * fVar7 + local_20 * fVar4);
      param_3[3] = fVar11 + fVar2 * (fVar12 * fVar8 + local_20 * fVar5);
      param_3[3] = (float)(*param_1 | 0x3f000000);
      param_3 = param_3 + 4;
      param_1 = param_1 + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  return;
}



int FUN_008f2870(int param_1)

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
  int in_ECX;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar1 = *(float *)(in_ECX + 0x10);
  fVar17 = *(float *)(in_ECX + 0x10) * 0.70710677;
  fVar6 = *(float *)(in_ECX + 0x40);
  fVar7 = *(float *)(in_ECX + 0x44);
  fVar8 = *(float *)(in_ECX + 0x48);
  fVar9 = *(float *)(in_ECX + 0x50);
  fVar10 = *(float *)(in_ECX + 0x54);
  fVar11 = *(float *)(in_ECX + 0x58);
  fVar18 = fVar17 * (fVar6 + fVar9);
  fVar19 = fVar17 * (fVar7 + fVar10);
  fVar20 = fVar17 * (fVar8 + fVar11);
  fVar15 = fVar17 * (fVar6 - fVar9);
  fVar16 = fVar17 * (fVar7 - fVar10);
  fVar17 = fVar17 * (fVar8 - fVar11);
  pfVar12 = (float *)(param_1 + 0x20);
  pfVar13 = (float *)(in_ECX + 0x20);
  iVar14 = 2;
  do {
    fVar2 = *pfVar13;
    fVar3 = pfVar13[1];
    fVar4 = pfVar13[2];
    fVar5 = *(float *)(in_ECX + 0xc);
    pfVar12[-8] = fVar2 + fVar1 * fVar6;
    pfVar12[-7] = fVar3 + fVar1 * fVar7;
    pfVar12[-6] = fVar4 + fVar1 * fVar8;
    pfVar12[-5] = fVar5 + 0.0;
    pfVar12[-4] = fVar2 + fVar18;
    pfVar12[-3] = fVar3 + fVar19;
    pfVar12[-2] = fVar4 + fVar20;
    pfVar12[-1] = fVar5 + 0.0;
    *pfVar12 = fVar2 + fVar1 * fVar9;
    pfVar12[1] = fVar3 + fVar1 * fVar10;
    pfVar12[2] = fVar4 + fVar1 * fVar11;
    pfVar12[3] = fVar5 + 0.0;
    pfVar12[4] = fVar2 - fVar15;
    pfVar12[5] = fVar3 - fVar16;
    pfVar12[6] = fVar4 - fVar17;
    pfVar12[7] = fVar5 - 0.0;
    pfVar12[8] = fVar2 - fVar1 * fVar6;
    pfVar12[9] = fVar3 - fVar1 * fVar7;
    pfVar12[10] = fVar4 - fVar1 * fVar8;
    pfVar12[0xb] = fVar5 - 0.0;
    pfVar12[0xc] = fVar2 - fVar18;
    pfVar12[0xd] = fVar3 - fVar19;
    pfVar12[0xe] = fVar4 - fVar20;
    pfVar12[0xf] = fVar5 - 0.0;
    pfVar12[0x10] = fVar2 - fVar1 * fVar9;
    pfVar12[0x11] = fVar3 - fVar1 * fVar10;
    pfVar12[0x12] = fVar4 - fVar1 * fVar11;
    pfVar12[0x13] = fVar5 - 0.0;
    pfVar12[0x14] = fVar2 + fVar15;
    pfVar12[0x15] = fVar3 + fVar16;
    pfVar12[0x16] = fVar4 + fVar17;
    pfVar12[0x17] = fVar5 + 0.0;
    pfVar13 = pfVar13 + 4;
    pfVar12 = pfVar12 + 0x20;
    iVar14 = iVar14 + -1;
  } while (iVar14 != 0);
  return param_1;
}



void FUN_008f29a0(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined4 local_110;
  float local_10c;
  float local_fc;
  float local_f8;
  undefined1 local_f4 [4];
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
  float fStack_9c;
  float fStack_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar5 = _tls_index;
  iVar7 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar7 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar6 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar6 = "TtrcCylinder";
    uVar2 = rdtsc();
    puVar6[1] = (int)uVar2;
    *(undefined4 **)(*(int *)(iVar7 + iVar5 * 4) + 0x1a4) = puVar6 + 3;
  }
  fVar11 = *(float *)(in_ECX + 0x10) + *(float *)(in_ECX + 0xc);
  fStack_c4 = *(float *)(in_ECX + 0xc);
  local_d0 = fStack_c4 *
             (*(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x48) -
             *(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x44));
  fStack_cc = fStack_c4 *
              (*(float *)(in_ECX + 0x58) * *(float *)(in_ECX + 0x40) -
              *(float *)(in_ECX + 0x50) * *(float *)(in_ECX + 0x48));
  fStack_c8 = fStack_c4 *
              (*(float *)(in_ECX + 0x50) * *(float *)(in_ECX + 0x44) -
              *(float *)(in_ECX + 0x54) * *(float *)(in_ECX + 0x40));
  fStack_c4 = fStack_c4 *
              (*(float *)(in_ECX + 0x5c) * *(float *)(in_ECX + 0x4c) -
              *(float *)(in_ECX + 0x5c) * *(float *)(in_ECX + 0x4c));
  local_e0 = *(float *)(in_ECX + 0x20) + local_d0;
  fStack_dc = *(float *)(in_ECX + 0x24) + fStack_cc;
  fStack_d8 = *(float *)(in_ECX + 0x28) + fStack_c8;
  fStack_d4 = *(float *)(in_ECX + 0x2c) + fStack_c4;
  local_d0 = *(float *)(in_ECX + 0x30) - local_d0;
  fStack_cc = *(float *)(in_ECX + 0x34) - fStack_cc;
  fStack_c8 = *(float *)(in_ECX + 0x38) - fStack_c8;
  fStack_c4 = *(float *)(in_ECX + 0x3c) - fStack_c4;
  FUN_008f37a0(param_2,&local_e0,&local_d0,&local_a0);
  local_c0 = *param_2;
  fStack_bc = param_2[1];
  fStack_b8 = param_2[2];
  fStack_ec = (fStack_b8 - fStack_98) * (fStack_b8 - fStack_98);
  local_f0 = SQRT(fStack_ec +
                  (fStack_bc - fStack_9c) * (fStack_bc - fStack_9c) +
                  (local_c0 - local_a0) * (local_c0 - local_a0));
  if (local_f0 < fVar11) {
    if ((0.0 < (fStack_c8 - fStack_d8) * (fStack_b8 - fStack_d8) +
               (fStack_cc - fStack_dc) * (fStack_bc - fStack_dc) +
               (local_d0 - local_e0) * (local_c0 - local_e0)) &&
       ((fStack_c8 - fStack_d8) * (fStack_b8 - fStack_c8) +
        (fStack_cc - fStack_dc) * (fStack_bc - fStack_cc) +
        (local_d0 - local_e0) * (local_c0 - local_d0) < 0.0)) goto LAB_008f3135;
  }
  local_c0 = param_2[4] - local_c0;
  fStack_bc = param_2[5] - fStack_bc;
  fStack_b8 = param_2[6] - fStack_b8;
  fStack_b4 = param_2[7] - param_2[3];
  local_b0 = local_d0 - local_e0;
  fStack_ac = fStack_cc - fStack_dc;
  fStack_a8 = fStack_c8 - fStack_d8;
  fStack_a4 = fStack_c4 - fStack_d4;
  local_fc = 3.4028235e+38;
  fStack_e8 = fStack_ec;
  fStack_e4 = fStack_ec;
  FUN_008f35d0(param_2,&local_c0,&local_e0,&local_b0,&local_fc,&local_f8,local_f4,local_90,local_80)
  ;
  fVar11 = fVar11 * fVar11;
  if (fVar11 < local_fc) {
LAB_008f3135:
    iVar7 = *(int *)(iVar7 + iVar5 * 4);
    if (*(uint *)(iVar7 + 0x1a4) < *(uint *)(iVar7 + 0x1a8)) {
      puVar6 = *(undefined4 **)(iVar7 + 0x1a4);
      *puVar6 = &DAT_00a9610c;
      uVar2 = rdtsc();
      puVar6[1] = (int)uVar2;
      *(undefined4 **)(iVar7 + 0x1a4) = puVar6 + 3;
    }
    *param_1 = 0;
    return;
  }
  fVar9 = fStack_ac * fStack_ac;
  fVar12 = fStack_a8 * fStack_a8;
  if (fVar12 + fVar9 + local_b0 * local_b0 <= 1.1920929e-07) goto LAB_008f3135;
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar9;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar9;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fVar9 + local_b0 * local_b0;
  fVar8 = fVar12 + auVar14._0_4_;
  auVar15._4_4_ = fVar12;
  auVar15._0_4_ = fVar8;
  auVar15._8_4_ = fVar12;
  auVar15._12_4_ = fVar12;
  auVar15 = rsqrtss(auVar14,auVar15);
  fVar9 = auVar15._0_4_;
  fStack_14 = fVar9 * 0.5 * (3.0 - fVar8 * fVar9 * fVar9);
  fVar8 = fVar8 * fStack_14;
  local_20 = fStack_14 * local_b0;
  fStack_1c = fStack_14 * fStack_ac;
  fStack_18 = fStack_14 * fStack_a8;
  fStack_14 = fStack_14 * fStack_a4;
  fVar9 = -(fStack_b8 * fStack_18 + fStack_bc * fStack_1c + local_c0 * local_20);
  local_60 = 0.5;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  fVar12 = local_c0 + fVar9 * local_20;
  fVar10 = fStack_bc + fVar9 * fStack_1c;
  fStack_ec = fStack_b8 + fVar9 * fStack_18;
  fVar10 = fVar10 * fVar10;
  fStack_ec = fStack_ec * fStack_ec;
  auVar18._4_4_ = fVar10;
  auVar18._0_4_ = fVar10;
  auVar18._8_4_ = fVar10;
  auVar18._12_4_ = fVar10;
  auVar19._4_12_ = auVar18._4_12_;
  auVar19._0_4_ = fVar10 + fVar12 * fVar12;
  auVar3._4_4_ = fStack_ec;
  auVar3._0_4_ = fStack_ec + auVar19._0_4_;
  auVar3._8_4_ = fStack_ec;
  auVar3._12_4_ = fStack_ec;
  auVar15 = rsqrtss(auVar19,auVar3);
  local_f0 = auVar15._0_4_;
  local_40 = 3.0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  fVar9 = local_f8 -
          SQRT(fVar11 - local_fc) *
          local_f0 * 0.5 * (3.0 - (fStack_ec + auVar19._0_4_) * local_f0 * local_f0);
  if (param_3[5] <= fVar9) goto LAB_008f3135;
  fVar10 = fStack_d8 * fStack_18 + fStack_dc * fStack_1c + local_e0 * local_20;
  local_30 = param_2[4];
  fStack_2c = param_2[5];
  fStack_28 = param_2[6];
  fStack_24 = param_2[7];
  local_70 = *param_2;
  fStack_6c = param_2[1];
  fStack_68 = param_2[2];
  fStack_64 = param_2[3];
  local_50 = (1.0 - fVar9) * local_70 + fVar9 * local_30;
  fStack_4c = (1.0 - fVar9) * fStack_6c + fVar9 * fStack_2c;
  fStack_48 = (1.0 - fVar9) * fStack_68 + fVar9 * fStack_28;
  fStack_44 = (1.0 - fVar9) * fStack_64 + fVar9 * fStack_24;
  fVar12 = (fStack_48 * fStack_18 + fStack_4c * fStack_1c + local_50 * local_20) - fVar10;
  if (((fVar9 < 0.0) || (fVar12 <= 0.0)) || (fVar8 <= fVar12)) {
    fVar9 = fStack_68 * fStack_18 + fStack_6c * fStack_1c + local_70 * local_20;
    if (fVar10 <= fVar9) {
      if (fVar9 <= fVar10 + fVar8) goto LAB_008f3135;
      local_10c = 1.0;
      local_f0 = local_d0;
      fStack_ec = fStack_cc;
      fStack_e8 = fStack_c8;
      fStack_e4 = fStack_c4;
    }
    else {
      local_10c = -1.0;
      local_f0 = local_e0;
      fStack_ec = fStack_dc;
      fStack_e8 = fStack_d8;
      fStack_e4 = fStack_d4;
    }
    fVar9 = ((fStack_e8 - fStack_68) * fStack_18 +
            (fStack_ec - fStack_6c) * fStack_1c + (local_f0 - local_70) * local_20) * local_10c *
            -1.0;
    if ((fVar9 < 0.0) ||
       (fVar12 = (fStack_b8 * fStack_18 + fStack_bc * fStack_1c + local_c0 * local_20) * local_10c *
                 -1.0, fVar8 = fVar12 * param_3[5], fVar8 < fVar9 != (fVar8 == fVar9)))
    goto LAB_008f3135;
    fVar9 = fVar9 / fVar12;
    FUN_00535aa0(fVar9);
    fVar12 = ((1.0 - local_60) * local_70 + local_60 * local_30) - local_f0;
    fVar8 = ((1.0 - local_60) * fStack_6c + local_60 * fStack_2c) - fStack_ec;
    fVar10 = ((1.0 - local_60) * fStack_68 + local_60 * fStack_28) - fStack_e8;
    if (fVar11 < fVar10 * fVar10 + fVar8 * fVar8 + fVar12 * fVar12) goto LAB_008f3135;
    FUN_00535aa0(local_10c);
    param_3[5] = fVar9;
    iVar7 = *(int *)(iVar7 + iVar5 * 4);
    *param_3 = local_70 * local_20;
    param_3[1] = local_70 * fStack_1c;
    param_3[2] = local_70 * fStack_18;
    param_3[3] = local_70 * fStack_14;
    param_3[4] = -NAN;
    if (*(uint *)(iVar7 + 0x1a8) <= *(uint *)(iVar7 + 0x1a4)) goto LAB_008f3124;
    puVar6 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar2 = rdtsc();
    local_110 = (undefined4)uVar2;
  }
  else {
    fStack_e8 = fStack_ec;
    fStack_e4 = fStack_ec;
    FUN_00535aa0(fVar12 / fVar8);
    local_50 = local_50 - ((1.0 - local_f0) * local_e0 + local_f0 * local_d0);
    fStack_4c = fStack_4c - ((1.0 - local_f0) * fStack_dc + local_f0 * fStack_cc);
    fStack_48 = fStack_48 - ((1.0 - local_f0) * fStack_d8 + local_f0 * fStack_c8);
    fVar11 = fStack_4c * fStack_4c;
    fVar12 = fStack_48 * fStack_48;
    auVar16._4_4_ = fVar11;
    auVar16._0_4_ = fVar11;
    auVar16._8_4_ = fVar11;
    auVar16._12_4_ = fVar11;
    auVar17._4_12_ = auVar16._4_12_;
    auVar17._0_4_ = fVar11 + local_50 * local_50;
    auVar4._4_4_ = fVar12;
    auVar4._0_4_ = fVar12 + auVar17._0_4_;
    auVar4._8_4_ = fVar12;
    auVar4._12_4_ = fVar12;
    auVar15 = rsqrtss(auVar17,auVar4);
    fVar11 = auVar15._0_4_;
    fVar11 = local_60 * fVar11 * (local_40 - (fVar12 + auVar17._0_4_) * fVar11 * fVar11);
    param_3[5] = fVar9;
    iVar7 = *(int *)(iVar7 + iVar5 * 4);
    *param_3 = fVar11 * local_50;
    param_3[1] = fVar11 * fStack_4c;
    param_3[2] = fVar11 * fStack_48;
    param_3[3] = fVar11 * (fStack_44 - ((1.0 - local_f0) * fStack_d4 + local_f0 * fStack_c4));
    param_3[4] = -NAN;
    if (*(uint *)(iVar7 + 0x1a8) <= *(uint *)(iVar7 + 0x1a4)) goto LAB_008f3124;
    puVar6 = *(undefined4 **)(iVar7 + 0x1a4);
    *puVar6 = &DAT_00a9610c;
    uVar2 = rdtsc();
    local_110 = (undefined4)uVar2;
  }
  puVar6[1] = local_110;
  *(undefined4 **)(iVar7 + 0x1a4) = puVar6 + 3;
LAB_008f3124:
  *param_1 = 1;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_008f31c0(void)

{
  undefined2 uVar1;
  undefined2 extraout_CX;
  float10 fVar2;
  undefined4 local_84;
  
  uVar1 = 0xb230;
  if (_DAT_00b2fdc4 < 0.0) {
    fVar2 = (float10)FUN_008f22b0();
    _DAT_00b2fdc4 = (float)((float10)1.0 - fVar2);
    uVar1 = extraout_CX;
  }
  local_84 = (uint)CONCAT12(0xa9,uVar1);
  return local_84;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_008f3230(undefined4 *param_1,undefined4 *param_2,float param_3,float param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  undefined4 *extraout_ECX;
  undefined4 extraout_ECX_00;
  float10 fVar4;
  
  in_ECX[3] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9b230;
  if (_DAT_00b2fdc4 < 0.0) {
    fVar4 = (float10)FUN_008f22b0();
    _DAT_00b2fdc4 = (float)((float10)1.0 - fVar4);
    in_ECX = extraout_ECX;
  }
  in_ECX[3] = param_4;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[8] = *param_1;
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[0xc] = *param_2;
  in_ECX[0xd] = uVar1;
  in_ECX[0xe] = uVar2;
  in_ECX[0xf] = uVar3;
  in_ECX[4] = param_3;
  in_ECX[0xb] = param_3 + param_4;
  in_ECX[0xf] = param_3 + (float)in_ECX[3];
  FUN_008f2300();
  return extraout_ECX_00;
}



void FUN_008f32c0(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 local_30 [8];
  float afStack_28 [2];
  undefined1 local_20 [16];
  
  fVar2 = *param_1;
  fVar20 = param_1[1];
  fVar21 = param_1[2];
  fVar22 = param_1[3];
  fVar23 = param_1[4];
  fVar4 = param_1[5];
  fVar5 = param_1[6];
  fVar6 = param_1[7];
  fVar7 = param_1[8];
  fVar8 = param_1[9];
  fVar9 = param_1[10];
  fVar10 = param_1[0xb];
  fVar11 = param_1[0xc];
  fVar12 = param_1[0xd];
  fVar13 = param_1[0xe];
  fVar14 = param_1[0xf];
  pfVar18 = (float *)(in_ECX + 0x20);
  iVar3 = -(int)pfVar18;
  iVar19 = 2;
  do {
    fVar15 = *pfVar18;
    fVar16 = pfVar18[1];
    fVar17 = pfVar18[2];
    pfVar1 = (float *)(local_30 + iVar3 + (int)pfVar18);
    *pfVar1 = fVar2 * fVar15 + fVar23 * fVar16 + fVar7 * fVar17 + fVar11;
    pfVar1[1] = fVar20 * fVar15 + fVar4 * fVar16 + fVar8 * fVar17 + fVar12;
    pfVar1[2] = fVar21 * fVar15 + fVar5 * fVar16 + fVar9 * fVar17 + fVar13;
    pfVar1[3] = fVar22 * fVar15 + fVar6 * fVar16 + fVar10 * fVar17 + fVar14;
    pfVar18 = pfVar18 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  fVar20 = local_20._0_4_ - local_30._0_4_;
  fVar21 = local_20._4_4_ - local_30._4_4_;
  fVar22 = local_20._8_4_ - local_30._8_4_;
  auVar25._8_4_ = fVar22 * fVar22;
  auVar25._4_4_ = auVar25._8_4_;
  auVar25._0_4_ = auVar25._8_4_;
  auVar25._12_4_ = auVar25._8_4_;
  auVar24._4_12_ = auVar25._4_12_;
  auVar24._0_4_ = auVar25._8_4_ + fVar21 * fVar21 + fVar20 * fVar20;
  auVar25 = rsqrtss(auVar24,auVar24);
  fVar23 = auVar25._0_4_;
  fVar2 = *(float *)(in_ECX + 0x10);
  param_2 = param_2 + *(float *)(in_ECX + 0xc);
  fVar20 = param_2 + fVar2 * SQRT(1.01 - fVar20 * fVar23 * fVar20 * fVar23);
  fVar21 = param_2 + fVar2 * SQRT(1.01 - fVar21 * fVar23 * fVar21 * fVar23);
  fVar22 = param_2 + fVar2 * SQRT(1.01 - fVar22 * fVar23 * fVar22 * fVar23);
  param_2 = param_2 + fVar2 * (local_20._12_4_ - local_30._12_4_) * fVar23;
  auVar25 = minps(_local_30,local_20);
  *param_3 = auVar25._0_4_ - fVar20;
  param_3[1] = auVar25._4_4_ - fVar21;
  param_3[2] = auVar25._8_4_ - fVar22;
  param_3[3] = auVar25._12_4_ - param_2;
  auVar25 = maxps(_local_30,local_20);
  *(undefined1 (*) [16])(param_3 + 4) = auVar25;
  param_3[4] = param_3[4] + fVar20;
  param_3[5] = param_3[5] + fVar21;
  param_3[6] = param_3[6] + fVar22;
  param_3[7] = param_3[7] + param_2;
  return;
}



void FUN_008f3450(int *param_1)

{
  (**(code **)*param_1)("CapsuleShape",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008f3490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  in_ECX[3] = param_3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9b2a0;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[4] = *param_1;
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  in_ECX[8] = *param_2;
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  in_ECX[7] = param_3;
  in_ECX[0xb] = param_3;
  return;
}



void FUN_008f34e0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x24);
  fVar2 = *(float *)(in_ECX + 0x28);
  fVar3 = *(float *)(in_ECX + 0x2c);
  fVar4 = *(float *)(in_ECX + 0x14);
  fVar5 = *(float *)(in_ECX + 0x18);
  fVar6 = *(float *)(in_ECX + 0x1c);
  if ((fVar2 - fVar5) * param_1[2] +
      (fVar1 - fVar4) * param_1[1] +
      (*(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x10)) * *param_1 < 0.0) {
    *param_2 = *(float *)(in_ECX + 0x10);
    param_2[1] = fVar4;
    param_2[2] = fVar5;
    param_2[3] = fVar6;
    param_2[3] = 0.5;
    return;
  }
  *param_2 = *(float *)(in_ECX + 0x20);
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  param_2[3] = fVar3;
  param_2[3] = 0.50000095;
  return;
}



void FUN_008f35d0(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9)

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
  
  fVar1 = *param_4;
  fVar2 = param_4[1];
  fVar7 = param_4[2];
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar12 = fVar5 * fVar7 + fVar4 * fVar2 + fVar3 * fVar1;
  fVar11 = fVar7 * (param_3[2] - param_1[2]) +
           fVar2 * (param_3[1] - param_1[1]) + fVar1 * (*param_3 - *param_1);
  fVar7 = fVar7 * fVar7 + fVar2 * fVar2 + fVar1 * fVar1;
  fVar1 = fVar7 * (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3);
  fVar2 = fVar1 - fVar12 * fVar12;
  if (ABS(fVar2) <= (ABS(fVar1) + fVar12 * fVar12) * 9.536743e-07) {
    *param_6 = 0.0;
  }
  else {
    *param_6 = (fVar7 * (fVar5 * (param_3[2] - param_1[2]) +
                        fVar4 * (param_3[1] - param_1[1]) + fVar3 * (*param_3 - *param_1)) -
               fVar11 * fVar12) / fVar2;
  }
  fVar7 = (fVar12 * *param_6 - fVar11) / fVar7;
  *param_7 = fVar7;
  fVar1 = *param_6;
  fVar2 = param_2[3];
  fVar3 = param_1[3];
  fVar11 = *param_1 + fVar1 * *param_2;
  fVar12 = param_1[1] + fVar1 * param_2[1];
  fVar6 = param_1[2] + fVar1 * param_2[2];
  fVar4 = param_4[3];
  fVar5 = param_3[3];
  fVar8 = *param_3 + fVar7 * *param_4;
  fVar9 = param_3[1] + fVar7 * param_4[1];
  fVar10 = param_3[2] + fVar7 * param_4[2];
  *param_8 = fVar11;
  param_8[1] = fVar12;
  param_8[2] = fVar6;
  param_8[3] = fVar3 + fVar1 * fVar2;
  fVar11 = fVar11 - fVar8;
  fVar12 = fVar12 - fVar9;
  fVar6 = fVar6 - fVar10;
  *param_9 = fVar8;
  param_9[1] = fVar9;
  param_9[2] = fVar10;
  param_9[3] = fVar5 + fVar7 * fVar4;
  *param_5 = fVar6 * fVar6 + fVar12 * fVar12 + fVar11 * fVar11;
  return;
}



void FUN_008f37a0(float *param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar5 = param_2[3];
  fVar6 = param_3[1];
  fVar7 = param_3[2];
  fVar8 = param_3[3];
  fVar9 = *param_3 - fVar2;
  fVar10 = fVar6 - fVar3;
  fVar11 = fVar7 - fVar4;
  fVar1 = -(fVar11 * (fVar4 - param_1[2]) +
           fVar10 * (fVar3 - param_1[1]) + fVar9 * (fVar2 - *param_1));
  fVar12 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar1 < 0.0 != (fVar1 == 0.0)) {
    *param_4 = fVar2;
    param_4[1] = fVar3;
    param_4[2] = fVar4;
    param_4[3] = fVar5;
    return;
  }
  if (fVar12 <= fVar1) {
    *param_4 = *param_3;
    param_4[1] = fVar6;
    param_4[2] = fVar7;
    param_4[3] = fVar8;
    return;
  }
  fVar1 = fVar1 / fVar12;
  *param_4 = fVar2 + fVar1 * fVar9;
  param_4[1] = fVar3 + fVar1 * fVar10;
  param_4[2] = fVar4 + fVar1 * fVar11;
  param_4[3] = fVar5 + fVar1 * (fVar8 - fVar5);
  return;
}



undefined8 FUN_008f3880(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  int iVar8;
  float *pfVar9;
  int in_ECX;
  float *extraout_EDX;
  uint uVar10;
  undefined4 extraout_EDX_00;
  int unaff_FS_OFFSET;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar17;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
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
  float local_60 [5];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_20 [28];
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtrcCapsule";
    uVar4 = rdtsc();
    local_c0 = (float)uVar4;
    iVar2 = *(int *)(iVar1 + iVar8 * 4);
    puVar3[1] = local_c0;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008f37a0(param_2,in_ECX + 0x10,in_ECX + 0x20,&local_a0);
  local_60[4] = *param_2;
  fStack_4c = param_2[1];
  fStack_48 = param_2[2];
  fStack_44 = param_2[3];
  local_c0 = SQRT((fStack_48 - fStack_98) * (fStack_48 - fStack_98) +
                  (fStack_4c - fStack_9c) * (fStack_4c - fStack_9c) +
                  (local_60[4] - local_a0) * (local_60[4] - local_a0));
  pfVar9 = &local_c0;
  if (*(float *)(in_ECX + 0xc) <= local_c0) {
    local_90 = *(float *)(in_ECX + 0x10);
    fStack_8c = *(float *)(in_ECX + 0x14);
    fStack_88 = *(float *)(in_ECX + 0x18);
    fStack_84 = *(float *)(in_ECX + 0x1c);
    local_70 = param_2[4];
    fStack_6c = param_2[5];
    fStack_68 = param_2[6];
    fStack_64 = param_2[7];
    local_a0 = *(float *)(in_ECX + 0x20);
    fStack_9c = *(float *)(in_ECX + 0x24);
    fStack_98 = *(float *)(in_ECX + 0x28);
    fStack_94 = *(float *)(in_ECX + 0x2c);
    local_b0 = local_a0 - local_90;
    fStack_ac = fStack_9c - fStack_8c;
    fStack_a8 = fStack_98 - fStack_88;
    fStack_a4 = fStack_94 - fStack_84;
    fVar22 = local_70 - local_60[4];
    fVar23 = fStack_6c - fStack_4c;
    fVar24 = fStack_68 - fStack_48;
    fStack_74 = fStack_64 - fStack_44;
    local_bc = 3.4028235e+38;
    local_80 = fVar22;
    fStack_7c = fVar23;
    fStack_78 = fVar24;
    FUN_008f35d0(param_2,&local_80,in_ECX + 0x10,&local_b0,&local_bc,&local_b4,&local_b8,local_20,
                 local_60);
    pfVar9 = extraout_EDX;
    if (local_bc <= *(float *)(in_ECX + 0xc) * *(float *)(in_ECX + 0xc)) {
      fVar11 = fStack_ac * fStack_ac;
      fVar12 = fStack_a8 * fStack_a8;
      if (fVar12 + fVar11 + local_b0 * local_b0 <= 1.1920929e-07) {
        fVar11 = 0.0;
        fVar13 = 0.0;
        fVar17 = 0.0;
        fVar12 = 0.0;
      }
      else {
        auVar14._4_4_ = fVar11;
        auVar14._0_4_ = fVar11;
        auVar14._8_4_ = fVar11;
        auVar14._12_4_ = fVar11;
        auVar15._4_12_ = auVar14._4_12_;
        auVar15._0_4_ = fVar11 + local_b0 * local_b0;
        fVar11 = fVar12 + auVar15._0_4_;
        auVar16._4_4_ = fVar12;
        auVar16._0_4_ = fVar11;
        auVar16._8_4_ = fVar12;
        auVar16._12_4_ = fVar12;
        auVar16 = rsqrtss(auVar15,auVar16);
        fVar12 = auVar16._0_4_;
        fVar12 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
        fVar11 = fVar11 * fVar12;
        fVar13 = fVar12 * local_b0;
        fVar17 = fVar12 * fStack_ac;
        fVar12 = fVar12 * fStack_a8;
      }
      fVar7 = -(fVar24 * fVar12 + fVar23 * fVar17 + fVar22 * fVar13);
      fVar22 = fVar22 + fVar7 * fVar13;
      fVar23 = fVar23 + fVar7 * fVar17;
      fVar24 = fVar24 + fVar7 * fVar12;
      fVar23 = fVar23 * fVar23;
      fVar24 = fVar24 * fVar24;
      auVar18._4_4_ = fVar23;
      auVar18._0_4_ = fVar23;
      auVar18._8_4_ = fVar23;
      auVar18._12_4_ = fVar23;
      auVar19._4_12_ = auVar18._4_12_;
      auVar19._0_4_ = fVar23 + fVar22 * fVar22;
      auVar5._4_4_ = fVar24;
      auVar5._0_4_ = fVar24 + auVar19._0_4_;
      auVar5._8_4_ = fVar24;
      auVar5._12_4_ = fVar24;
      auVar16 = rsqrtss(auVar19,auVar5);
      fVar23 = auVar16._0_4_;
      local_60[0] = 0.5;
      local_60[1] = 0.0;
      local_60[2] = 0.0;
      local_60[3] = 0.0;
      local_b0 = 3.0;
      fStack_ac = 0.0;
      fStack_a8 = 0.0;
      fStack_a4 = 0.0;
      local_b4 = local_b4 -
                 SQRT(*(float *)(in_ECX + 0xc) * *(float *)(in_ECX + 0xc) - local_bc) *
                 fVar23 * 0.5 * (3.0 - (fVar24 + auVar19._0_4_) * fVar23 * fVar23);
      pfVar9 = param_3;
      if (local_b4 < param_3[5]) {
        local_c0 = fStack_88 * fVar12 + fStack_8c * fVar17 + local_90 * fVar13;
        local_80 = (1.0 - local_b4) * local_60[4] + local_b4 * local_70;
        fStack_7c = (1.0 - local_b4) * fStack_4c + local_b4 * fStack_6c;
        fStack_78 = (1.0 - local_b4) * fStack_48 + local_b4 * fStack_68;
        fStack_74 = (1.0 - local_b4) * fStack_44 + local_b4 * fStack_64;
        local_bc = (fStack_78 * fVar12 + fStack_7c * fVar17 + local_80 * fVar13) - local_c0;
        if (((0.0 <= local_b4) && (0.0 <= local_bc)) && (local_bc < fVar11)) {
          FUN_00535aa0(local_bc / fVar11);
          local_80 = local_80 - ((1.0 - local_70) * local_90 + local_70 * local_a0);
          fStack_7c = fStack_7c - ((1.0 - local_70) * fStack_8c + local_70 * fStack_9c);
          fStack_78 = fStack_78 - ((1.0 - local_70) * fStack_88 + local_70 * fStack_98);
          fVar23 = fStack_7c * fStack_7c;
          fVar24 = fStack_78 * fStack_78;
          auVar20._4_4_ = fVar23;
          auVar20._0_4_ = fVar23;
          auVar20._8_4_ = fVar23;
          auVar20._12_4_ = fVar23;
          auVar21._4_12_ = auVar20._4_12_;
          auVar21._0_4_ = fVar23 + local_80 * local_80;
          auVar6._4_4_ = fVar24;
          auVar6._0_4_ = fVar24 + auVar21._0_4_;
          auVar6._8_4_ = fVar24;
          auVar6._12_4_ = fVar24;
          auVar16 = rsqrtss(auVar21,auVar6);
          fVar23 = auVar16._0_4_;
          fVar23 = local_60[0] * fVar23 * (local_b0 - (fVar24 + auVar21._0_4_) * fVar23 * fVar23);
          param_3[5] = local_b4;
          param_3[4] = -NAN;
          *param_3 = fVar23 * local_80;
          param_3[1] = fVar23 * fStack_7c;
          param_3[2] = fVar23 * fStack_78;
          param_3[3] = fVar23 * (fStack_74 - ((1.0 - local_70) * fStack_84 + local_70 * fStack_94));
          iVar1 = *(int *)(iVar1 + iVar8 * 4);
          uVar10 = *(uint *)(iVar1 + 0x1a4);
          if (uVar10 < *(uint *)(iVar1 + 0x1a8)) {
            puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
            *puVar3 = &DAT_00a9610c;
            uVar4 = rdtsc();
            uVar10 = (uint)((ulonglong)uVar4 >> 0x20);
            puVar3[1] = (int)uVar4;
            *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
          }
          *param_1 = 1;
          return CONCAT44(uVar10,param_1);
        }
        fVar11 = ((fStack_48 * fVar12 + fStack_4c * fVar17 + local_60[4] * fVar13) - local_c0) /
                 fVar11;
        fVar23 = local_60[4] - ((1.0 - fVar11) * local_90 + fVar11 * local_a0);
        fVar24 = fStack_4c - ((1.0 - fVar11) * fStack_8c + fVar11 * fStack_9c);
        fVar22 = fStack_48 - ((1.0 - fVar11) * fStack_88 + fVar11 * fStack_98);
        fVar22 = fVar22 * fVar22;
        local_b8 = SQRT(fVar22 + fVar24 * fVar24 + fVar23 * fVar23);
        if ((local_b8 <= *(float *)(in_ECX + 0xc)) || (pfVar9 = &local_b8, 0.0 <= local_b4)) {
          local_30 = 0;
          local_2c = 0;
          if (local_bc < 0.0 != (local_bc == 0.0)) {
            local_a0 = local_90;
            fStack_9c = fStack_8c;
            fStack_98 = fStack_88;
            fStack_94 = fStack_84;
          }
          fStack_44 = fStack_44 - fStack_94;
          fStack_48 = fStack_48 - fStack_98;
          fStack_4c = fStack_4c - fStack_9c;
          local_60[4] = local_60[4] - local_a0;
          fStack_34 = fStack_64 - fStack_94;
          fStack_38 = fStack_68 - fStack_98;
          fStack_3c = fStack_6c - fStack_9c;
          local_40 = local_70 - local_a0;
          local_a0 = local_b8;
          fStack_9c = fVar22;
          fStack_98 = fVar22;
          fStack_94 = fVar22;
          FUN_008ed410(*(undefined4 *)(in_ECX + 0xc));
          iVar1 = *(int *)(iVar1 + iVar8 * 4);
          if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
            puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
            *puVar3 = &DAT_00a9610c;
            uVar4 = rdtsc();
            local_b8 = (float)uVar4;
            puVar3[1] = local_b8;
            *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
          }
          FUN_008ed4e0(param_1,local_60 + 4,param_3);
          return CONCAT44(extraout_EDX_00,param_1);
        }
      }
    }
  }
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    pfVar9 = (float *)uVar4;
    puVar3[1] = pfVar9;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  *param_1 = 0;
  return CONCAT44(pfVar9,param_1);
}



void FUN_008f3ee0(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
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
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 local_70 [8];
  float afStack_68 [2];
  undefined1 local_60 [16];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  pfVar18 = (float *)(in_ECX + 0x10);
  param_2 = param_2 + *(float *)(in_ECX + 0xc);
  local_20 = param_1[0xc];
  fStack_1c = param_1[0xd];
  fStack_18 = param_1[0xe];
  fStack_14 = param_1[0xf];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar7 = param_1[4];
  fVar8 = param_1[5];
  fVar9 = param_1[6];
  fVar10 = param_1[7];
  fVar11 = param_1[8];
  fVar12 = param_1[9];
  fVar13 = param_1[10];
  fVar14 = param_1[0xb];
  iVar2 = -(int)pfVar18;
  iVar19 = 2;
  do {
    fVar15 = *pfVar18;
    fVar16 = pfVar18[1];
    fVar17 = pfVar18[2];
    fVar22 = fVar12 * fVar17 + fStack_1c;
    fVar23 = fVar13 * fVar17 + fStack_18;
    fVar24 = fVar14 * fVar17 + fStack_14;
    pfVar1 = (float *)(local_70 + iVar2 + (int)pfVar18);
    *pfVar1 = fVar3 * fVar15 + fVar7 * fVar16 + fVar11 * fVar17 + local_20;
    pfVar1[1] = fVar4 * fVar15 + fVar8 * fVar16 + fVar22;
    pfVar1[2] = fVar5 * fVar15 + fVar9 * fVar16 + fVar23;
    pfVar1[3] = fVar6 * fVar15 + fVar10 * fVar16 + fVar24;
    pfVar18 = pfVar18 + 4;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  auVar20 = maxps(_local_70,local_60);
  auVar21 = minps(_local_70,local_60);
  *(undefined1 (*) [16])(param_3 + 4) = auVar20;
  *param_3 = auVar21._0_4_ - param_2;
  param_3[1] = auVar21._4_4_ - param_2;
  param_3[2] = auVar21._8_4_ - param_2;
  param_3[3] = auVar21._12_4_ - param_2;
  param_3[4] = param_3[4] + param_2;
  param_3[5] = param_3[5] + param_2;
  param_3[6] = param_3[6] + param_2;
  param_3[7] = param_3[7] + param_2;
  return;
}



void FUN_008f3fa0(int *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int *in_ECX;
  undefined1 *in_EDX;
  
  iVar3 = *param_1;
  pfVar1 = (float *)(*in_ECX * 0x10 + iVar3);
  fVar4 = *pfVar1;
  fVar5 = pfVar1[1];
  fVar6 = pfVar1[2];
  pfVar1 = (float *)(in_ECX[1] * 0x10 + iVar3);
  pfVar2 = (float *)(in_ECX[2] * 0x10 + iVar3);
  if (0.0 < ((*pfVar1 - fVar4) * (pfVar2[1] - fVar5) - (pfVar1[1] - fVar5) * (*pfVar2 - fVar4)) *
            fVar6 + ((pfVar1[2] - fVar6) * (*pfVar2 - fVar4) -
                    (*pfVar1 - fVar4) * (pfVar2[2] - fVar6)) * fVar5 +
                    ((pfVar1[1] - fVar5) * (pfVar2[2] - fVar6) -
                    (pfVar1[2] - fVar6) * (pfVar2[1] - fVar5)) * fVar4) {
    *in_EDX = 1;
    return;
  }
  *in_EDX = 0;
  return;
}



void FUN_008f4050(byte param_1)

{
  FUN_00933dd0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f4080(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 8;
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
  *in_ECX = &PTR_FUN_00a9b304;
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



void FUN_008f4100(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  float fVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  char *pcVar17;
  int in_ECX;
  undefined4 *puVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  float local_1d4;
  float local_1d0;
  undefined4 *local_1cc;
  uint local_1c8;
  int local_1c4;
  uint local_1c0;
  float local_1bc;
  float local_1b8;
  int local_1b4;
  float local_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int *piStack_1a0;
  float local_198;
  int local_194;
  int local_190;
  float local_188;
  float local_184;
  undefined1 local_180 [4];
  undefined1 auStack_17c [4];
  undefined8 uStack_178;
  float fStack_16c;
  float local_164;
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  int iStack_13c;
  float local_130;
  float fStack_12c;
  float fStack_128;
  undefined4 uStack_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  undefined4 *puStack_c8;
  float fStack_c4;
  undefined1 local_c0 [8];
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
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
  
  local_110 = *(float *)(in_ECX + 0x60);
  fStack_10c = *(float *)(in_ECX + 100);
  fStack_108 = *(float *)(in_ECX + 0x68);
  fStack_104 = *(float *)(in_ECX + 0x6c);
  local_198 = *(float *)(in_ECX + 0x80);
  local_1c8 = *(uint *)(in_ECX + 0x84);
  local_60 = *(float *)(in_ECX + 0x70) - local_110;
  fStack_5c = *(float *)(in_ECX + 0x74) - fStack_10c;
  fStack_58 = *(float *)(in_ECX + 0x78) - fStack_108;
  fVar22 = fStack_5c * fStack_5c;
  fVar23 = fStack_58 * fStack_58;
  auVar8._4_8_ = uStack_178;
  auVar8._0_4_ = fVar23;
  _local_180 = auVar8._0_8_ << 0x20;
  uStack_178._0_4_ = fVar23;
  uStack_178._4_4_ = fVar23;
  auVar27 = _local_180;
  fVar24 = SQRT(fVar23 + fVar22 + local_60 * local_60);
  local_180 = (undefined1  [4])fVar24;
  iVar15 = *(int *)(in_ECX + 0x88);
  iVar20 = (int)local_1c8 >> 1;
  local_1c4 = 0;
  local_1c0 = 0;
  local_1bc = -0.0;
  if (0.0 < fVar24) {
    auVar25._4_4_ = fVar22;
    auVar25._0_4_ = fVar22;
    auVar25._8_4_ = fVar22;
    auVar25._12_4_ = fVar22;
    auVar26._4_12_ = auVar25._4_12_;
    auVar26._0_4_ = fVar22 + local_60 * local_60;
    uStack_178 = auVar27._8_8_;
    auVar9._4_8_ = uStack_178;
    auVar9._0_4_ = fVar23;
    _local_180 = auVar9._0_8_ << 0x20;
    auVar27._4_4_ = fVar23;
    auVar27._0_4_ = fVar23 + auVar26._0_4_;
    auVar27._8_4_ = fVar23;
    auVar27._12_4_ = fVar23;
    auVar27 = rsqrtss(auVar26,auVar27);
    fVar22 = auVar27._0_4_;
    local_180 = (undefined1  [4])fVar22;
    local_130 = 0.5;
    fStack_12c = 0.0;
    fStack_128 = 0.0;
    uStack_124 = 0;
    fStack_54 = fVar22 * 0.5 * (3.0 - (fVar23 + auVar26._0_4_) * fVar22 * fVar22);
    local_60 = fStack_54 * local_60;
    fStack_5c = fStack_54 * fStack_5c;
    fStack_58 = fStack_54 * fStack_58;
    fStack_54 = fStack_54 * (*(float *)(in_ECX + 0x7c) - fStack_104);
    local_150 = 0.0;
    fStack_14c = 0.0;
    fStack_148 = 1.0;
    fStack_144 = 0.0;
    if (ABS(fStack_58 * 1.0 + fStack_5c * 0.0 + local_60 * 0.0) < 0.99999) {
      local_70 = fStack_5c * 1.0 - fStack_58 * 0.0;
      fStack_6c = fStack_58 * 0.0 - local_60 * 1.0;
      fStack_68 = local_60 * 0.0 - fStack_5c * 0.0;
      fVar22 = fStack_6c * fStack_6c;
      auVar28._8_4_ = fStack_68 * fStack_68;
      auVar30._4_4_ = fVar22;
      auVar30._0_4_ = fVar22;
      auVar30._8_4_ = fVar22;
      auVar30._12_4_ = fVar22;
      auVar31._4_12_ = auVar30._4_12_;
      auVar31._0_4_ = fVar22 + local_70 * local_70;
      auVar28._4_4_ = auVar28._8_4_;
      auVar28._0_4_ = auVar28._8_4_;
      auVar28._12_4_ = auVar28._8_4_;
      auVar29._4_12_ = auVar28._4_12_;
      auVar29._0_4_ = auVar28._8_4_ + auVar31._0_4_;
      auVar27 = rsqrtss(auVar31,auVar29);
      local_180 = auVar27._0_4_;
      _auStack_17c = auVar29._4_12_;
      fStack_64 = (float)local_180 * 0.5 *
                  (3.0 - auVar29._0_4_ * (float)local_180 * (float)local_180);
      local_70 = fStack_64 * local_70;
      fStack_6c = fStack_64 * fStack_6c;
      fStack_68 = fStack_64 * fStack_68;
      fStack_64 = fStack_64 * (fStack_54 * 0.0 - fStack_54 * 0.0);
      local_80 = fStack_5c * fStack_68 - fStack_58 * fStack_6c;
      fStack_7c = fStack_58 * local_70 - local_60 * fStack_68;
      fStack_78 = local_60 * fStack_6c - fStack_5c * local_70;
      fStack_74 = fStack_54 * fStack_64 - fStack_54 * fStack_64;
      goto LAB_008f4388;
    }
  }
  fStack_7c = 0.0;
  fStack_78 = 0.0;
  fStack_74 = 0.0;
  local_70 = 0.0;
  fStack_68 = 0.0;
  fStack_64 = 0.0;
  local_60 = 0.0;
  fStack_5c = 0.0;
  fStack_54 = 0.0;
  local_80 = 1.0;
  fStack_6c = 1.0;
  fStack_58 = 1.0;
LAB_008f4388:
  fStack_d8 = fVar24 * -0.5;
  local_1cc = (undefined4 *)(fVar24 * 0.5);
  local_d0 = 0.0;
  fStack_cc = 0.0;
  fStack_c4 = 0.0;
  iVar11 = (iVar15 + -1 + iVar20 * 2) * local_1c8 + 2;
  local_e0 = 0.0;
  fStack_dc = 0.0;
  fStack_d4 = 0.0;
  local_30 = 0.0;
  fStack_2c = 0.0;
  fStack_28 = (float)local_1cc - fStack_d8;
  fStack_24 = 0.0;
  local_50 = (local_110 + *(float *)(in_ECX + 0x70)) * 0.5;
  fStack_4c = (fStack_10c + *(float *)(in_ECX + 0x74)) * 0.5;
  fStack_48 = (fStack_108 + *(float *)(in_ECX + 0x78)) * 0.5;
  fStack_44 = (fStack_104 + *(float *)(in_ECX + 0x7c)) * 0.5;
  local_f0 = 0;
  local_ec = 0;
  local_e8 = 0x3f800000;
  local_e4 = 0;
  local_1b0 = 1.0;
  fStack_1ac = 0.0;
  fStack_1a8 = 0.0;
  fStack_1a4 = 0.0;
  local_b0 = 0;
  local_ac = 0xbf800000;
  local_a8 = 0;
  local_a4 = 0;
  local_1b4 = iVar15;
  local_190 = iVar20;
  puStack_c8 = local_1cc;
  if (0 < iVar11) {
    FUN_008a6e40(&local_1c4,iVar11,0x10);
  }
  local_164 = (float)local_1cc + local_198;
  local_150 = 0.0;
  fStack_14c = 0.0;
  fStack_144 = 0.0;
  local_160 = 0.0;
  fStack_15c = 0.0;
  fStack_154 = 0.0;
  fStack_158 = local_164;
  fStack_148 = local_164;
  FUN_0088fcc0(&local_80,&local_160);
  if (local_1c0 == ((uint)local_1bc & 0x3fffffff)) {
    FUN_008a6ee0(&local_1c4,0x10);
  }
  pfVar12 = (float *)(local_1c0 * 0x10 + local_1c4);
  local_1c0 = local_1c0 + 1;
  local_194 = iVar20 + -1;
  *pfVar12 = local_160;
  pfVar12[1] = fStack_15c;
  pfVar12[2] = fStack_158;
  pfVar12[3] = fStack_154;
  if (-1 < local_194) {
    auVar5._4_4_ = fStack_1ac;
    auVar5._0_4_ = local_1b0;
    auVar5._8_4_ = fStack_1a8;
    fStack_14c = local_1b0;
    fStack_148 = fStack_1ac;
    local_150 = fStack_1a8;
    local_1cc = (undefined4 *)(float)local_190;
    local_c0 = auVar5._4_8_;
    fStack_b8 = local_1b0;
    fStack_b4 = fStack_1a4;
    fStack_144 = fStack_1a4;
    do {
      FUN_008b1b00(&local_b0,((float)local_194 / (float)local_1cc) * 1.5707964);
      uVar14 = local_1c8;
      local_110 = local_120;
      fStack_10c = fStack_11c;
      fStack_108 = fStack_118;
      fStack_104 = 0.0;
      fVar22 = (fStack_114 * fStack_114 + fStack_114 * fStack_114) - 1.0;
      local_188 = fStack_118 * fStack_1a8 + fStack_11c * fStack_1ac + local_120 * local_1b0;
      fVar23 = local_188 + local_188;
      fVar24 = fStack_114 + fStack_114;
      local_20 = fVar22 * local_1b0 + fVar23 * local_120 +
                 fVar24 * (fStack_11c * local_150 - fStack_118 * (float)local_c0._0_4_);
      fStack_1c = fVar22 * fStack_1ac + fVar23 * fStack_11c +
                  fVar24 * (fStack_118 * fStack_14c - local_120 * (float)local_c0._4_4_);
      fStack_18 = fVar22 * fStack_1a8 + fVar23 * fStack_118 +
                  fVar24 * (local_120 * fStack_148 - fStack_11c * fStack_b8);
      fStack_14 = fVar22 * fStack_1a4 + fVar23 * 0.0 + fVar24 * (fStack_144 * 0.0 - fStack_b4 * 0.0)
      ;
      local_1b8 = 0.0;
      if (0 < (int)local_1c8) {
        fVar22 = (float)(int)local_1c8;
        local_184 = local_198;
        local_a0 = local_198;
        fStack_9c = local_198;
        fStack_98 = local_198;
        fStack_94 = local_198;
        local_90 = fStack_18;
        fStack_8c = local_20;
        fStack_88 = fStack_1c;
        fStack_84 = fStack_14;
        local_40 = fStack_1c;
        fStack_3c = fStack_18;
        fStack_38 = local_20;
        fStack_34 = fStack_14;
        do {
          fVar10 = local_1b8;
          FUN_008b1b00(&local_f0,((float)(int)local_1b8 / fVar22) * 6.2831855);
          local_130 = (float)local_180;
          fStack_12c = (float)auStack_17c;
          fStack_128 = (float)uStack_178;
          uStack_124 = 0;
          fVar23 = (uStack_178._4_4_ * uStack_178._4_4_ + uStack_178._4_4_ * uStack_178._4_4_) - 1.0
          ;
          local_1d0 = (float)uStack_178 * fStack_18 +
                      (float)auStack_17c * fStack_1c + (float)local_180 * local_20;
          fVar24 = local_1d0 + local_1d0;
          local_1b8 = uStack_178._4_4_ + uStack_178._4_4_;
          local_160 = local_d0 +
                      local_a0 *
                      (fVar23 * local_20 + fVar24 * (float)local_180 +
                      local_1b8 * ((float)auStack_17c * local_90 - (float)uStack_178 * local_40));
          fStack_15c = fStack_cc +
                       fStack_9c *
                       (fVar23 * fStack_1c + fVar24 * (float)auStack_17c +
                       local_1b8 * ((float)uStack_178 * fStack_8c - (float)local_180 * fStack_3c));
          fStack_158 = (float)puStack_c8 +
                       fStack_98 *
                       (fVar23 * fStack_18 + fVar24 * (float)uStack_178 +
                       local_1b8 * ((float)local_180 * fStack_88 - (float)auStack_17c * fStack_38));
          fStack_154 = fStack_c4 +
                       fStack_94 *
                       (fVar23 * fStack_14 + fVar24 * 0.0 +
                       local_1b8 * (fStack_84 * 0.0 - fStack_34 * 0.0));
          FUN_0088fcc0(&local_80,&local_160);
          if (local_1c0 == ((uint)local_1bc & 0x3fffffff)) {
            FUN_008a6ee0(&local_1c4,0x10);
          }
          pfVar12 = (float *)(local_1c0 * 0x10 + local_1c4);
          local_1c0 = local_1c0 + 1;
          local_1b8 = (float)((int)fVar10 + 1);
          *pfVar12 = local_160;
          pfVar12[1] = fStack_15c;
          pfVar12[2] = fStack_158;
          pfVar12[3] = fStack_154;
        } while ((int)local_1b8 < (int)uVar14);
      }
      local_194 = local_194 + -1;
      iVar15 = local_1b4;
    } while (-1 < local_194);
  }
  while (uVar14 = local_1c8, iVar15 = iVar15 + -1, local_1c8 = uVar14, local_1b8 = (float)iVar15,
        0 < iVar15) {
    local_194 = 0;
    if (0 < (int)uVar14) {
      auVar6._4_4_ = fStack_1ac;
      auVar6._0_4_ = local_1b0;
      auVar6._8_4_ = fStack_1a8;
      fStack_b8 = local_1b0;
      local_c0 = auVar6._4_8_;
      fStack_b4 = fStack_1a4;
      fVar22 = (float)iVar15 / (float)local_1b4;
      local_90 = local_e0 + fVar22 * local_30;
      fStack_8c = fStack_dc + fVar22 * fStack_2c;
      fStack_88 = fStack_d8 + fVar22 * fStack_28;
      fStack_84 = fStack_d4 + fVar22 * fStack_24;
      local_184 = local_198;
      local_150 = fStack_1a8;
      fStack_14c = local_1b0;
      fStack_148 = fStack_1ac;
      fStack_144 = fStack_1a4;
      local_a0 = local_198;
      fStack_9c = local_198;
      fStack_98 = local_198;
      fStack_94 = local_198;
      do {
        iVar20 = local_194;
        FUN_008b1b00(&local_f0,((float)local_194 / (float)(int)uVar14) * 6.2831855);
        local_130 = (float)local_180;
        fStack_12c = (float)auStack_17c;
        fStack_128 = (float)uStack_178;
        uStack_124 = 0;
        fVar22 = (uStack_178._4_4_ * uStack_178._4_4_ + uStack_178._4_4_ * uStack_178._4_4_) - 1.0;
        local_188 = (float)uStack_178 * fStack_1a8 +
                    (float)auStack_17c * fStack_1ac + (float)local_180 * local_1b0;
        fVar23 = local_188 + local_188;
        local_1d0 = uStack_178._4_4_ + uStack_178._4_4_;
        local_160 = local_90 +
                    local_a0 *
                    (fVar22 * local_1b0 + fVar23 * (float)local_180 +
                    local_1d0 *
                    ((float)auStack_17c * local_150 - (float)uStack_178 * (float)local_c0._0_4_));
        fStack_15c = fStack_8c +
                     fStack_9c *
                     (fVar22 * fStack_1ac + fVar23 * (float)auStack_17c +
                     local_1d0 *
                     ((float)uStack_178 * fStack_14c - (float)local_180 * (float)local_c0._4_4_));
        fStack_158 = fStack_88 +
                     fStack_98 *
                     (fVar22 * fStack_1a8 + fVar23 * (float)uStack_178 +
                     local_1d0 * ((float)local_180 * fStack_148 - (float)auStack_17c * fStack_b8));
        fStack_154 = fStack_84 +
                     fStack_94 *
                     (fVar22 * fStack_1a4 + fVar23 * 0.0 +
                     local_1d0 * (fStack_144 * 0.0 - fStack_b4 * 0.0));
        FUN_0088fcc0(&local_80,&local_160);
        if (local_1c0 == ((uint)local_1bc & 0x3fffffff)) {
          FUN_008a6ee0(&local_1c4,0x10);
        }
        pfVar12 = (float *)(local_1c0 * 0x10 + local_1c4);
        local_1c0 = local_1c0 + 1;
        local_194 = iVar20 + 1;
        *pfVar12 = local_160;
        pfVar12[1] = fStack_15c;
        pfVar12[2] = fStack_158;
        pfVar12[3] = fStack_154;
      } while (local_194 < (int)uVar14);
    }
  }
  local_194 = 0;
  if (0 < local_190) {
    auVar7._4_4_ = fStack_1ac;
    auVar7._0_4_ = local_1b0;
    auVar7._8_4_ = fStack_1a8;
    local_1cc = (undefined4 *)(float)local_190;
    local_c0 = auVar7._4_8_;
    fStack_b8 = local_1b0;
    fStack_b4 = fStack_1a4;
    local_150 = fStack_1a8;
    fStack_14c = local_1b0;
    fStack_148 = fStack_1ac;
    fStack_144 = fStack_1a4;
    do {
      iVar15 = local_194;
      FUN_008b1b00(&local_b0,((float)local_194 / (float)local_1cc) * -1.5707964);
      uVar14 = local_1c8;
      local_130 = (float)local_180;
      fStack_12c = (float)auStack_17c;
      fStack_128 = (float)uStack_178;
      uStack_124 = 0;
      fVar22 = (uStack_178._4_4_ * uStack_178._4_4_ + uStack_178._4_4_ * uStack_178._4_4_) - 1.0;
      local_184 = (float)uStack_178 * fStack_1a8 +
                  (float)auStack_17c * fStack_1ac + (float)local_180 * local_1b0;
      fVar23 = local_184 + local_184;
      local_1d0 = uStack_178._4_4_ + uStack_178._4_4_;
      local_30 = fVar22 * local_1b0 + fVar23 * (float)local_180 +
                 local_1d0 *
                 ((float)auStack_17c * local_150 - (float)uStack_178 * (float)local_c0._0_4_);
      fStack_2c = fVar22 * fStack_1ac + fVar23 * (float)auStack_17c +
                  local_1d0 *
                  ((float)uStack_178 * fStack_14c - (float)local_180 * (float)local_c0._4_4_);
      fStack_28 = fVar22 * fStack_1a8 + fVar23 * (float)uStack_178 +
                  local_1d0 * ((float)local_180 * fStack_148 - (float)auStack_17c * fStack_b8);
      fStack_24 = fVar22 * fStack_1a4 + fVar23 * 0.0 +
                  local_1d0 * (fStack_144 * 0.0 - fStack_b4 * 0.0);
      local_1b8 = 0.0;
      if (0 < (int)local_1c8) {
        fVar22 = (float)(int)local_1c8;
        local_188 = local_198;
        local_40 = local_198;
        fStack_3c = local_198;
        fStack_38 = local_198;
        fStack_34 = local_198;
        local_a0 = fStack_2c;
        fStack_9c = fStack_28;
        fStack_98 = local_30;
        fStack_94 = fStack_24;
        local_90 = fStack_28;
        fStack_8c = local_30;
        fStack_88 = fStack_2c;
        fStack_84 = fStack_24;
        do {
          fVar10 = local_1b8;
          FUN_008b1b00(&local_f0,((float)(int)local_1b8 / fVar22) * 6.2831855);
          local_110 = local_120;
          fStack_10c = fStack_11c;
          fStack_108 = fStack_118;
          fStack_104 = 0.0;
          fVar23 = (fStack_114 * fStack_114 + fStack_114 * fStack_114) - 1.0;
          local_f4 = fStack_118 * fStack_28 + fStack_11c * fStack_2c + local_120 * local_30;
          fVar24 = local_f4 + local_f4;
          local_1d0 = fStack_114 + fStack_114;
          local_160 = local_e0 +
                      local_40 *
                      (fVar23 * local_30 + fVar24 * local_120 +
                      local_1d0 * (fStack_11c * local_90 - fStack_118 * local_a0));
          fStack_15c = fStack_dc +
                       fStack_3c *
                       (fVar23 * fStack_2c + fVar24 * fStack_11c +
                       local_1d0 * (fStack_118 * fStack_8c - local_120 * fStack_9c));
          fStack_158 = fStack_d8 +
                       fStack_38 *
                       (fVar23 * fStack_28 + fVar24 * fStack_118 +
                       local_1d0 * (local_120 * fStack_88 - fStack_11c * fStack_98));
          fStack_154 = fStack_d4 +
                       fStack_34 *
                       (fVar23 * fStack_24 + fVar24 * 0.0 +
                       local_1d0 * (fStack_84 * 0.0 - fStack_94 * 0.0));
          FUN_0088fcc0(&local_80,&local_160);
          if (local_1c0 == ((uint)local_1bc & 0x3fffffff)) {
            FUN_008a6ee0(&local_1c4,0x10);
          }
          pfVar12 = (float *)(local_1c0 * 0x10 + local_1c4);
          local_1c0 = local_1c0 + 1;
          local_1b8 = (float)((int)fVar10 + 1);
          *pfVar12 = local_160;
          pfVar12[1] = fStack_15c;
          pfVar12[2] = fStack_158;
          pfVar12[3] = fStack_154;
        } while ((int)local_1b8 < (int)uVar14);
      }
      local_194 = iVar15 + 1;
    } while (local_194 < local_190);
  }
  fStack_158 = -local_164;
  local_160 = 0.0;
  fStack_15c = 0.0;
  fStack_154 = 0.0;
  FUN_0088fcc0(&local_80,&local_160);
  if (local_1c0 == ((uint)local_1bc & 0x3fffffff)) {
    FUN_008a6ee0(&local_1c4,0x10);
  }
  pfVar12 = (float *)(local_1c0 * 0x10 + local_1c4);
  local_1c0 = local_1c0 + 1;
  *pfVar12 = local_160;
  pfVar12[1] = fStack_15c;
  pfVar12[2] = fStack_158;
  pfVar12[3] = fStack_154;
  piVar13 = (int *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x18,0x24);
  piVar21 = (int *)0x0;
  if (piVar13 != (int *)0x0) {
    *piVar13 = 0;
    piVar13[1] = 0;
    piVar13[2] = -0x80000000;
    piVar13[3] = 0;
    piVar13[4] = 0;
    piVar13[5] = -0x80000000;
    piVar21 = piVar13;
  }
  uVar14 = piVar21[2] & 0x3fffffff;
  piStack_1a0 = piVar21;
  if ((int)uVar14 < (int)local_1c8) {
    if (-1 < piVar21[2]) {
      FUN_008a75d0(*piVar21,uVar14 << 4,0x14);
    }
    iVar15 = FUN_008a7560(local_1c8 << 4,0x14);
    *piVar21 = iVar15;
    piVar21[2] = piVar21[2] & 0x40000000U | local_1c8;
  }
  puVar18 = (undefined4 *)*piVar21;
  piVar21[1] = local_1c8;
  puVar16 = local_1cc;
  uVar14 = local_1c8;
  if (0 < (int)local_1c8) {
    do {
      uVar2 = puVar16[1];
      uVar3 = puVar16[2];
      uVar4 = puVar16[3];
      *puVar18 = *puVar16;
      puVar18[1] = uVar2;
      puVar18[2] = uVar3;
      puVar18[3] = uVar4;
      puVar18 = puVar18 + 4;
      uVar14 = uVar14 - 1;
      puVar16 = puVar16 + 4;
    } while (uVar14 != 0);
  }
  iVar15 = 0;
  if (0 < piVar21[1]) {
    fStack_16c = (float)(iStack_13c + 0x10);
    iVar20 = 0;
    do {
      FUN_0088fcc0(fStack_16c,*piVar21 + iVar20);
      iVar15 = iVar15 + 1;
      iVar20 = iVar20 + 0x10;
    } while (iVar15 < piVar21[1]);
  }
  iVar20 = 1;
  iVar15 = 1;
  if (0 < (int)local_1d0) {
    local_1d4 = local_1d0;
    do {
      local_1b8 = 0.0;
      fVar22 = (float)(iVar20 % (int)local_1d0 + 1);
      local_1b4 = iVar20;
      local_1b0 = fVar22;
      pcVar17 = (char *)FUN_008f3fa0(&local_1cc);
      if (*pcVar17 == '\0') {
        local_1b4 = 0;
        local_1b8 = (float)iVar20;
      }
      if (piVar21[4] == (piVar21[5] & 0x3fffffffU)) {
        FUN_008a6ee0(piVar21 + 3,0xc);
      }
      piVar13 = (int *)(piVar21[3] + piVar21[4] * 0xc);
      *piVar13 = (int)local_1b8;
      piVar13[1] = local_1b4;
      piVar13[2] = (int)fVar22;
      iVar20 = iVar20 + 1;
      local_1d4 = (float)((int)local_1d4 + -1);
      piVar21[4] = piVar21[4] + 1;
    } while (local_1d4 != 0.0);
  }
  fVar22 = (float)((int)local_1bc + -2 + (int)local_198 * 2);
  if (0 < (int)fVar22) {
    do {
      local_198 = fVar22;
      piVar21 = piStack_1a0;
      if (0 < (int)local_1d0) {
        piVar13 = piStack_1a0 + 3;
        local_1bc = 1.4013e-45;
        local_1d4 = local_1d0;
        do {
          iVar20 = iVar15 + -1 + (int)local_1bc;
          local_1b4 = iVar20 + (int)local_1d0;
          iVar11 = iVar15 + (int)local_1bc % (int)local_1d0;
          local_1b0 = (float)(iVar11 + (int)local_1d0);
          local_1b8 = (float)iVar20;
          fStack_16c = local_1b0;
          pcVar17 = (char *)FUN_008f3fa0(&local_1cc);
          if (*pcVar17 == '\0') {
            local_1b8 = (float)local_1b4;
            local_1b4 = iVar20;
          }
          if (piVar21[4] == (piVar21[5] & 0x3fffffffU)) {
            FUN_008a6ee0(piVar13,0xc);
          }
          piVar1 = (int *)(*piVar13 + piVar21[4] * 0xc);
          *piVar1 = (int)local_1b8;
          piVar1[1] = local_1b4;
          piVar1[2] = (int)local_1b0;
          piVar21[4] = piVar21[4] + 1;
          local_1b0 = fStack_16c;
          local_1b8 = (float)iVar20;
          local_1b4 = iVar11;
          pcVar17 = (char *)FUN_008f3fa0(&local_1cc);
          iVar19 = iVar11;
          if (*pcVar17 == '\0') {
            iVar19 = iVar20;
            iVar20 = iVar11;
          }
          if (piVar21[4] == (piVar21[5] & 0x3fffffffU)) {
            FUN_008a6ee0(piVar13,0xc);
          }
          piVar1 = (int *)(*piVar13 + piVar21[4] * 0xc);
          *piVar1 = iVar20;
          piVar1[1] = iVar19;
          piVar1[2] = (int)local_1b0;
          local_1bc = (float)((int)local_1bc + 1);
          local_1d4 = (float)((int)local_1d4 + -1);
          piVar21[4] = piVar21[4] + 1;
        } while (local_1d4 != 0.0);
      }
      iVar15 = iVar15 + (int)local_1d0;
      local_198 = (float)((int)local_198 + -1);
      fVar22 = local_198;
    } while (local_198 != 0.0);
  }
  piVar21 = piStack_1a0;
  if (0 < (int)local_1d0) {
    local_1b0 = (float)(iVar15 + (int)local_1d0);
    piVar13 = piStack_1a0 + 3;
    iVar20 = 1;
    local_1bc = local_1d0;
    do {
      local_1b8 = (float)(iVar20 + -1 + iVar15);
      iVar11 = iVar20 % (int)local_1d0 + iVar15;
      local_1b4 = iVar11;
      pcVar17 = (char *)FUN_008f3fa0(&local_1cc);
      fVar22 = (float)iVar11;
      if (*pcVar17 == '\0') {
        fVar22 = local_1b8;
        local_1b8 = (float)iVar11;
      }
      if (piVar21[4] == (piVar21[5] & 0x3fffffffU)) {
        FUN_008a6ee0(piVar13,0xc);
      }
      piVar1 = (int *)(*piVar13 + piVar21[4] * 0xc);
      *piVar1 = (int)local_1b8;
      piVar1[1] = (int)fVar22;
      piVar1[2] = (int)local_1b0;
      iVar20 = iVar20 + 1;
      local_1bc = (float)((int)local_1bc + -1);
      piVar21[4] = piVar21[4] + 1;
    } while (local_1bc != 0.0);
  }
  *(int **)(iStack_13c + 0x50) = piStack_1a0;
  if (-1 < local_1c4) {
    FUN_008a75d0(local_1cc,local_1c4 << 4,0x14);
  }
  return;
}



void FUN_008f52c0(int *param_1)

{
  (**(code **)*param_1)("MultiSphere",1);
  (**(code **)(*param_1 + 0x14))();
  return;
}



void FUN_008f5300(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a9b328;
  iVar5 = param_2;
  puVar1 = in_ECX;
  if (0 < param_2) {
    do {
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      puVar1[4] = *param_1;
      puVar1[5] = uVar2;
      puVar1[6] = uVar3;
      puVar1[7] = uVar4;
      param_1 = param_1 + 4;
      iVar5 = iVar5 + -1;
      puVar1 = puVar1 + 4;
    } while (iVar5 != 0);
  }
  in_ECX[3] = param_2;
  return;
}



void FUN_008f5350(undefined1 *param_1,float *param_2,float *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  int in_ECX;
  int iVar6;
  undefined1 uVar7;
  float *pfVar8;
  float fVar9;
  int unaff_FS_OFFSET;
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
  
  iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtrcMultiSpher";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  uVar7 = 0;
  fVar9 = 0.0;
  if (0 < *(int *)(in_ECX + 0xc)) {
    pfVar8 = (float *)(in_ECX + 0x1c);
    uVar7 = 0;
    do {
      fVar5 = *pfVar8;
      fVar3 = param_2[7];
      fVar10 = param_2[3];
      fVar14 = param_2[4] - pfVar8[-3];
      fVar15 = param_2[5] - pfVar8[-2];
      fVar16 = param_2[6] - pfVar8[-1];
      fVar11 = *param_2 - pfVar8[-3];
      fVar12 = param_2[1] - pfVar8[-2];
      fVar13 = param_2[2] - pfVar8[-1];
      fVar17 = fVar14 - fVar11;
      fVar18 = fVar15 - fVar12;
      fVar19 = fVar16 - fVar13;
      fVar20 = fVar19 * fVar13 + fVar18 * fVar12 + fVar17 * fVar11;
      fVar20 = fVar20 + fVar20;
      if (fVar20 < 0.0) {
        fVar18 = fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17;
        fVar17 = fVar20 * fVar20 -
                 ((fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11) - *pfVar8 * *pfVar8) *
                 fVar18 * 4.0;
        if ((((fVar17 < 0.0 == (fVar17 == 0.0)) &&
             (fVar20 = (-fVar20 - SQRT(fVar17)) * 0.5, fVar20 < fVar18)) && (0.0 <= fVar20)) &&
           (fVar20 = fVar20 / fVar18, fVar20 < param_3[5])) {
          param_3[5] = fVar20;
          uVar7 = 1;
          fVar11 = (1.0 - fVar20) * fVar11 + fVar20 * fVar14;
          fVar12 = (1.0 - fVar20) * fVar12 + fVar20 * fVar15;
          fVar13 = (1.0 - fVar20) * fVar13 + fVar20 * fVar16;
          fVar10 = (1.0 - fVar20) * (fVar10 - fVar5) + fVar20 * (fVar3 - fVar5);
          *param_3 = fVar11;
          param_3[1] = fVar12;
          param_3[2] = fVar13;
          param_3[3] = fVar10;
          fVar3 = 1.0 / *pfVar8;
          param_3[4] = fVar9;
          *param_3 = fVar3 * fVar11;
          param_3[1] = fVar3 * fVar12;
          param_3[2] = fVar3 * fVar13;
          param_3[3] = fVar3 * fVar10;
        }
      }
      fVar9 = (float)((int)fVar9 + 1);
      pfVar8 = pfVar8 + 4;
    } while ((int)fVar9 < *(int *)(in_ECX + 0xc));
    iVar6 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar6 = *(int *)(iVar6 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar2 + 3;
  }
  *param_1 = uVar7;
  return;
}



void FUN_008f55e0(float *param_1,float param_2,float *param_3)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
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
  float *pfVar23;
  float *pfVar24;
  float *pfVar25;
  float *pfVar26;
  int in_ECX;
  int iVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float local_90 [35];
  
  pfVar26 = (float *)(in_ECX + 0x10);
  iVar28 = *(int *)(in_ECX + 0xc);
  fVar4 = *param_1;
  fVar5 = param_1[1];
  fVar6 = param_1[2];
  fVar7 = param_1[3];
  fVar8 = param_1[4];
  fVar9 = param_1[5];
  fVar10 = param_1[6];
  fVar11 = param_1[7];
  fVar12 = param_1[8];
  fVar13 = param_1[9];
  fVar14 = param_1[10];
  fVar15 = param_1[0xb];
  fVar16 = param_1[0xc];
  fVar17 = param_1[0xd];
  fVar18 = param_1[0xe];
  fVar19 = param_1[0xf];
  pfVar25 = pfVar26;
  iVar27 = iVar28;
  do {
    fVar20 = *pfVar25;
    fVar21 = pfVar25[1];
    fVar22 = pfVar25[2];
    pfVar1 = (float *)(((int)local_90 - (int)pfVar26) + (int)pfVar25);
    *pfVar1 = fVar4 * fVar20 + fVar8 * fVar21 + fVar12 * fVar22 + fVar16;
    pfVar1[1] = fVar5 * fVar20 + fVar9 * fVar21 + fVar13 * fVar22 + fVar17;
    pfVar1[2] = fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22 + fVar18;
    pfVar1[3] = fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22 + fVar19;
    pfVar25 = pfVar25 + 4;
    iVar27 = iVar27 + -1;
  } while (0 < iVar27);
  auVar29._8_4_ = 0x7f7fffff;
  auVar29._0_8_ = 0x7f7fffff7f7fffff;
  auVar29._12_4_ = 0x7f7fffff;
  auVar30._8_4_ = 0xff7fffff;
  auVar30._0_8_ = 0xff7fffffff7fffff;
  auVar30._12_4_ = 0xff7fffff;
  if (0 < iVar28) {
    pfVar25 = local_90;
    do {
      fVar4 = *pfVar25;
      pfVar1 = pfVar25 + 1;
      pfVar23 = pfVar25 + 2;
      pfVar24 = pfVar25 + 3;
      fVar5 = pfVar26[3];
      pfVar26 = pfVar26 + 4;
      pfVar25 = pfVar25 + 4;
      iVar28 = iVar28 + -1;
      auVar3._4_4_ = *pfVar1 - fVar5;
      auVar3._0_4_ = fVar4 - fVar5;
      auVar3._8_4_ = *pfVar23 - fVar5;
      auVar3._12_4_ = *pfVar24 - fVar5;
      auVar29 = minps(auVar29,auVar3);
      auVar2._4_4_ = *pfVar1 + fVar5;
      auVar2._0_4_ = fVar4 + fVar5;
      auVar2._8_4_ = *pfVar23 + fVar5;
      auVar2._12_4_ = *pfVar24 + fVar5;
      auVar30 = maxps(auVar30,auVar2);
    } while (iVar28 != 0);
  }
  *param_3 = auVar29._0_4_ - param_2;
  param_3[1] = auVar29._4_4_ - param_2;
  param_3[2] = auVar29._8_4_ - param_2;
  param_3[3] = auVar29._12_4_ - param_2;
  param_3[4] = auVar30._0_4_ + param_2;
  param_3[5] = auVar30._4_4_ + param_2;
  param_3[6] = auVar30._8_4_ + param_2;
  param_3[7] = auVar30._12_4_ + param_2;
  return;
}



void FUN_008f56d0(undefined4 param_1,int param_2,undefined4 *param_3)

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
  float local_30 [5];
  undefined4 local_1c;
  
  local_1c = param_3[1];
  pcVar2 = (char *)(**(code **)(*in_ECX + 0x14))((int)&uStack_34 + 3,param_1,local_30);
  if (*pcVar2 != '\0') {
    pfVar1 = *(float **)(param_2 + 8);
    local_30[0] = pfVar1[0xb] * uStack_34;
    fVar6 = pfVar1[6] * fStack_38;
    fVar7 = pfVar1[7] * fStack_38;
    fVar3 = pfVar1[1] * fStack_3c;
    fVar4 = pfVar1[2] * fStack_3c;
    fVar5 = pfVar1[3] * fStack_3c;
    fStack_3c = *pfVar1 * fStack_3c + pfVar1[4] * fStack_38 + pfVar1[8] * uStack_34;
    fStack_38 = fVar3 + pfVar1[5] * fStack_38 + pfVar1[9] * uStack_34;
    uStack_34 = fVar4 + fVar6 + pfVar1[10] * uStack_34;
    local_30[0] = fVar5 + fVar7 + local_30[0];
    (**(code **)*param_3)(param_2,&fStack_3c);
  }
  return;
}



void FUN_008f5750(int param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  in_ECX[4] = param_2;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  *in_ECX = &PTR_FUN_00a9b370;
  in_ECX[6] = param_1;
  if (param_1 != 0) {
    FUN_008bc720();
  }
  return;
}



void FUN_008f5790(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) != 0) {
    FUN_0089bcc0();
    return;
  }
  return;
}



void FUN_008f57b0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9b370;
  if (in_ECX[6] != 0) {
    FUN_008bc730();
    in_ECX[6] = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008f57e0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9b370;
  if (in_ECX[6] != 0) {
    FUN_008bc730();
    in_ECX[6] = 0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f5830(int *param_1)

{
  int in_ECX;
  
  if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
    FUN_008a6ee0(param_1,4);
  }
  *(undefined4 *)(*param_1 + param_1[1] * 4) = *(undefined4 *)(in_ECX + 0x18);
  param_1[1] = param_1[1] + 1;
  return;
}



void FUN_008f5870(LONG param_1,LONG param_2)

{
  HANDLE pvVar1;
  undefined4 *in_ECX;
  
  pvVar1 = CreateSemaphoreA((LPSECURITY_ATTRIBUTES)0x0,param_1,param_2,(LPCSTR)0x0);
  *in_ECX = pvVar1;
  return;
}



void FUN_008f5890(void)

{
  undefined4 *in_ECX;
  
  CloseHandle((HANDLE)*in_ECX);
  return;
}



void FUN_008f58a0(void)

{
  undefined4 *in_ECX;
  
  WaitForSingleObject((HANDLE)*in_ECX,0xffffffff);
  return;
}



void FUN_008f58b0(LONG param_1)

{
  undefined4 *in_ECX;
  
  ReleaseSemaphore((HANDLE)*in_ECX,param_1,(LPLONG)0x0);
  return;
}



void FUN_008f58d0(void)

{
  int in_ECX;
  int iVar1;
  uint _Size;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar3 = 0;
  if (iVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    return;
  }
  _Size = *(int *)(in_ECX + 0x10) - iVar1;
  if (*(int *)(in_ECX + 0x20) < (int)_Size) {
    *(undefined4 *)(in_ECX + 0x10) = 0;
    *(undefined4 *)(in_ECX + 0x14) = 0;
    *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
    *(undefined4 *)(in_ECX + 0x20) = 0xffffffff;
    return;
  }
  if (0 < iVar1) {
    uVar2 = _Size & 0x800001ff;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffe00) + 1;
    }
    if (uVar2 != 0) {
      iVar3 = 0x200 - uVar2;
    }
    _memmove((void *)(*(int *)(in_ECX + 0xc) + iVar3),(void *)(iVar1 + *(int *)(in_ECX + 0xc)),_Size
            );
    iVar1 = ((uint)(uVar2 != 0) + ((int)(_Size + ((int)_Size >> 0x1f & 0x1ffU)) >> 9)) * 0x200;
    *(int *)(in_ECX + 0x1c) = iVar3;
    *(int *)(in_ECX + 0x10) = iVar1;
    *(int *)(in_ECX + 0x14) = iVar1;
  }
  return;
}



int FUN_008f59e0(int param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  
  iVar1 = in_ECX[4];
  iVar3 = in_ECX[5] - iVar1;
  iVar2 = param_2;
  if (iVar3 < param_2) {
    do {
      FUN_008b1890(param_1,in_ECX[3] + iVar1,iVar3);
      in_ECX[4] = in_ECX[4] + iVar3;
      param_1 = param_1 + iVar3;
      iVar2 = iVar2 - iVar3;
      iVar1 = (**(code **)(*in_ECX + 0x2c))();
      if (iVar1 != 0) {
        return param_2 - iVar2;
      }
      iVar1 = in_ECX[4];
      iVar3 = in_ECX[5] - iVar1;
    } while (iVar3 < iVar2);
  }
  FUN_008b1890(param_1,in_ECX[3] + in_ECX[4],iVar2);
  in_ECX[4] = in_ECX[4] + iVar2;
  return param_2;
}



int FUN_008f5a70(int param_1)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  iVar1 = in_ECX[5] - in_ECX[4];
  iVar2 = param_1;
  if (iVar1 < param_1) {
    do {
      iVar2 = iVar2 - iVar1;
      iVar1 = (**(code **)(*in_ECX + 0x2c))();
      if (iVar1 != 0) {
        return param_1 - iVar2;
      }
      iVar1 = in_ECX[5] - in_ECX[4];
    } while (iVar1 < iVar2);
  }
  in_ECX[4] = in_ECX[4] + iVar2;
  return param_1;
}



int FUN_008f5ba0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x28))();
  if (-1 < iVar1) {
    return (*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0x14)) + iVar1;
  }
  return -1;
}



void FUN_008f5bc0(undefined4 param_1,undefined4 param_2)

{
  short *psVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9b38c;
  in_ECX[2] = param_1;
  uVar2 = (**(code **)(*DAT_00ba7d98 + 8))(0x40,param_2,0x17);
  in_ECX[3] = uVar2;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = param_2;
  in_ECX[7] = 0xffffffff;
  in_ECX[8] = 0xffffffff;
  if (*(short *)(in_ECX[2] + 4) != 0) {
    psVar1 = (short *)(in_ECX[2] + 6);
    *psVar1 = *psVar1 + 1;
  }
  return;
}



void FUN_008f5c20(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  puVar1 = (undefined4 *)in_ECX[2];
  *in_ECX = &PTR_FUN_00a9b38c;
  if ((*(short *)(puVar1 + 1) != 0) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  (**(code **)(*DAT_00ba7d98 + 0xc))(in_ECX[3]);
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((unaff_retaddr & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



int FUN_008f5c80(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 8) == 0) {
    return 0;
  }
  iVar1 = *(int *)(in_ECX + 0x10);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))
                        (*(int *)(in_ECX + 0xc) + iVar3,iVar1 - iVar3);
      iVar3 = iVar3 + iVar2;
      if (iVar2 == 0) {
        return iVar3;
      }
    } while (iVar3 < iVar1);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return iVar3;
}



int FUN_008f5cd0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10);
  iVar3 = param_2;
  if (iVar4 < param_2) {
    do {
      FUN_008b1890(*(int *)(in_ECX + 0x10) + *(int *)(in_ECX + 0xc),param_1,iVar4);
      param_1 = param_1 + iVar4;
      iVar2 = *(int *)(in_ECX + 0x10) + iVar4;
      iVar3 = iVar3 - iVar4;
      iVar4 = 0;
      *(int *)(in_ECX + 0x10) = iVar2;
      if (*(int *)(in_ECX + 8) != 0) {
        if (0 < iVar2) {
          do {
            iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0xc))
                              (*(int *)(in_ECX + 0xc) + iVar4,iVar2 - iVar4);
            iVar4 = iVar4 + iVar1;
            if (iVar1 == 0) goto LAB_008f5d46;
          } while (iVar4 < iVar2);
        }
        *(undefined4 *)(in_ECX + 0x10) = 0;
      }
LAB_008f5d46:
      if (iVar4 != iVar2) {
        return param_2 - iVar3;
      }
      iVar4 = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10);
    } while (iVar4 < iVar3);
  }
  FUN_008b1890(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10),param_1,iVar3);
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + iVar3;
  return param_2;
}



void FUN_008f5d90(void)

{
  int in_ECX;
  
  FUN_008f5c80();
  if (*(int **)(in_ECX + 8) != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x008f5da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    return;
  }
  return;
}



void FUN_008f5e10(void)

{
  int in_ECX;
  
  FUN_008f5c80();
                    /* WARNING: Could not recover jumptable at 0x008f5e1e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(in_ECX + 8) + 0x18))();
  return;
}



int FUN_008f5e30(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  if (-1 < iVar1) {
    return *(int *)(in_ECX + 0x10) + iVar1;
  }
  return -1;
}



void FUN_008f5e50(undefined4 param_1,int param_2,char param_3)

{
  int iVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9b3bc;
  in_ECX[2] = 0;
  in_ECX[3] = param_1;
  in_ECX[4] = 0;
  iVar1 = param_2 + -1;
  if (param_3 == '\0') {
    iVar1 = param_2;
  }
  in_ECX[5] = iVar1;
  *(undefined1 *)(in_ECX + 6) = 0;
  if (param_3 != '\0') {
    FUN_008b18c0(param_1,0,param_2);
  }
  return;
}



void FUN_008f5eb0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9b3bc;
  FUN_008f5c80();
  if ((int *)in_ECX[2] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[2] + 0x10))();
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (((puVar1 != (undefined4 *)0x0) && (*(short *)(puVar1 + 1) != 0)) &&
     (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
     *(short *)((int)puVar1 + 6) == 0)) {
    (**(code **)*puVar1)(1);
  }
  if (*(char *)(in_ECX + 6) != '\0') {
    (**(code **)(*DAT_00ba7d98 + 0xc))(in_ECX[3]);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008f5f10(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = param_1;
  *in_ECX = &PTR_FUN_00a9b3bc;
  *(undefined1 *)(in_ECX + 6) = 1;
  iVar1 = in_ECX[2];
  if ((iVar1 != 0) && (*(short *)(iVar1 + 4) != 0)) {
    *(short *)(iVar1 + 6) = *(short *)(iVar1 + 6) + 1;
  }
  uVar2 = (**(code **)(*DAT_00ba7d98 + 8))(0x40,param_2,0x17);
  in_ECX[5] = param_2;
  in_ECX[3] = uVar2;
  in_ECX[4] = 0;
  return;
}



void FUN_008f5f70(byte param_1)

{
  FUN_008f5eb0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f5fa0(void)

{
  undefined4 *in_ECX;
  
  DAT_00ba81c4 = DAT_00ba81c4 + -1;
  *in_ECX = &PTR_FUN_00a9b3dc;
  if (DAT_00ba81c4 == 0) {
    DAT_00ba81c0 = 0;
    DAT_00ba81bc = 0;
    DAT_00ba81b8 = 0;
    DAT_00ba81b4 = 0;
    _DAT_00ba81b0 = 0;
    _DAT_00ba81ac = 0;
    _DAT_00ba81a8 = 0;
    DAT_00ba81a4 = 0;
    FreeLibrary(DAT_00ba81c8);
    DAT_00ba81c8 = (HMODULE)0x0;
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008f6010(int param_1,int param_2,code *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  HANDLE pvVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  undefined4 unaff_retaddr;
  undefined4 local_1020;
  HANDLE local_101c;
  undefined4 uStack_1018;
  undefined4 uStack_1014;
  undefined4 uStack_1010;
  undefined4 uStack_100c;
  undefined4 uStack_1008;
  undefined4 local_1004;
  undefined4 local_1000;
  undefined4 local_ffc;
  undefined4 local_ff8;
  undefined4 local_ff4;
  char local_ff0 [2012];
  char acStack_814 [2064];
  code *local_4;
  
  local_4 = DAT_00b30aac;
  pvVar2 = GetCurrentProcess();
  iVar4 = 0;
  local_101c = pvVar2;
  if (0 < param_2) {
    do {
      uVar1 = *(undefined4 *)(param_1 + iVar4 * 4);
      local_1000 = 0;
      local_ffc = 0;
      local_ff8 = 0;
      local_ff0[0] = '\0';
      local_ff0[1] = '\0';
      local_ff0[2] = '\0';
      local_ff0[3] = '\0';
      local_1004 = 0x18;
      local_ff4 = 0x7e8;
      local_1020 = 0;
      iVar3 = (*DAT_00ba81b4)(pvVar2,uVar1,&local_1020,&local_1004);
      if (iVar3 == 0) {
        builtin_strncpy(local_ff0,"(unknown)",10);
      }
      else {
        iVar3 = 8;
        bVar7 = true;
        pcVar5 = local_ff0;
        pcVar6 = "WinMain";
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + 1;
          pcVar6 = pcVar6 + 1;
        } while (bVar7);
        pvVar2 = local_101c;
        if (bVar7) break;
      }
      uStack_1014 = 0;
      uStack_1010 = 0;
      uStack_100c = 0;
      uStack_1008 = 0;
      uStack_1018 = 0x14;
      (*DAT_00ba81a4)(pvVar2,uVar1,&local_1020,&uStack_1018);
      __snprintf(acStack_814,0x800,"%s(%i):\'%s\'\n",local_101c,local_1020,&local_1000);
      (*local_4)(acStack_814,unaff_retaddr);
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_2);
  }
  (*param_3)("-------------------------------------------------------------------\n\n",param_4);
  return;
}



undefined4 FUN_008f6190(void)

{
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008f61a0(void)

{
  HANDLE pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar3 = DAT_00ba81c8 == (HMODULE)0x0;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9b3dc;
  if (bVar3) {
    DAT_00ba81c8 = LoadLibraryA("imagehlp.dll");
    DAT_00ba81c4 = 1;
    DAT_00ba81c0 = GetProcAddress(DAT_00ba81c8,"SymInitialize");
    DAT_00ba81bc = GetProcAddress(DAT_00ba81c8,"SymGetOptions");
    DAT_00ba81b8 = GetProcAddress(DAT_00ba81c8,"SymSetOptions");
    DAT_00ba81b4 = GetProcAddress(DAT_00ba81c8,"SymGetSymFromAddr");
    _DAT_00ba81b0 = GetProcAddress(DAT_00ba81c8,"StackWalk");
    _DAT_00ba81ac = GetProcAddress(DAT_00ba81c8,"SymFunctionTableAccess");
    _DAT_00ba81a8 = GetProcAddress(DAT_00ba81c8,"SymGetModuleBase");
    DAT_00ba81a4 = GetProcAddress(DAT_00ba81c8,"SymGetLineFromAddr");
    uVar5 = 1;
    uVar4 = 0;
    pvVar1 = GetCurrentProcess();
    (*DAT_00ba81c0)(pvVar1,uVar4,uVar5);
    uVar2 = (*DAT_00ba81bc)();
    (*DAT_00ba81b8)(uVar2 | 0x10);
    return;
  }
  DAT_00ba81c4 = DAT_00ba81c4 + 1;
  return;
}



void FUN_008f62a0(byte param_1)

{
  FUN_008f5fa0();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f6340(void)

{
  undefined4 *in_ECX;
  
  FUN_00934100(in_ECX + 0xc,in_ECX[3],in_ECX[2]);
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_008f63b0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  local_20 = *(undefined4 *)(*param_2 + 0xc);
  local_24 = param_2;
  local_1c = param_3;
  local_18 = *(undefined4 *)(in_ECX + 8);
  local_28 = param_1;
  FUN_00934da0(in_ECX + 0x30,&local_28);
  return;
}



void FUN_008f6410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009091d0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f6450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00908de0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f6490(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
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
    FUN_00908a40(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00908a40(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_008f6580(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  do {
    uVar1 = *(uint *)(param_1 + (param_2 + param_3 >> 1) * 4);
    iVar4 = param_3;
    iVar5 = param_2;
    do {
      uVar2 = *(uint *)(param_1 + iVar5 * 4);
      while (uVar2 < uVar1) {
        iVar5 = iVar5 + 1;
        uVar2 = *(uint *)(param_1 + iVar5 * 4);
      }
      uVar2 = *(uint *)(param_1 + iVar4 * 4);
      while (uVar1 < uVar2) {
        iVar4 = iVar4 + -1;
        uVar2 = *(uint *)(param_1 + iVar4 * 4);
      }
      if (iVar4 < iVar5) break;
      if (iVar4 != iVar5) {
        uVar3 = *(undefined4 *)(param_1 + iVar4 * 4);
        *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        *(undefined4 *)(param_1 + iVar5 * 4) = uVar3;
      }
      iVar4 = iVar4 + -1;
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar4);
    if (param_2 < iVar4) {
      FUN_008f6580(param_1,param_2,iVar4,param_4);
    }
    param_2 = iVar5;
    if (param_3 <= iVar5) {
      return;
    }
  } while( true );
}



void FUN_008f6660(int *param_1)

{
  int in_ECX;
  
  (**(code **)*param_1)("BvTreeAgt3",8);
  if (-1 < *(int *)(in_ECX + 0x38)) {
    (**(code **)(*param_1 + 4))
              ("SectorPtrs",8,*(undefined4 *)(in_ECX + 0x30),*(int *)(in_ECX + 0x34) << 2,
               *(int *)(in_ECX + 0x38) << 2);
  }
  FUN_00925e30((undefined4 *)(in_ECX + 0x30),param_1);
  return;
}



void FUN_008f66b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9b510;
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f6720(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_4;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9b510;
  in_ECX[0xc] = in_ECX + 0xf;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0x80000001;
  in_ECX[3] = *param_3;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  FUN_00934270(in_ECX + 0xc);
  return;
}



void FUN_008f67c0(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  bool bVar7;
  float *pfVar8;
  int in_ECX;
  float extraout_ECX;
  undefined4 uVar9;
  int iVar10;
  int *extraout_EDX;
  int *piVar11;
  undefined4 uVar12;
  float unaff_EBX;
  int iVar13;
  int unaff_FS_OFFSET;
  float fVar14;
  float fVar15;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar27;
  float fVar28;
  undefined1 auVar26 [16];
  float fVar29;
  float fVar30;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  float fVar36;
  float fStack_314;
  int iStack_310;
  undefined1 local_30c [8];
  float local_304;
  float local_300;
  undefined1 auStack_2fc [8];
  float fStack_2f4;
  float fStack_2f0;
  undefined1 auStack_2ec [8];
  float fStack_2e4;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  undefined4 *local_2d0;
  int *local_2cc;
  int local_2c8;
  undefined4 local_2c4;
  undefined1 local_2c0 [80];
  float local_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  undefined1 local_260 [52];
  undefined4 uStack_22c;
  int iStack_228;
  int iStack_224;
  undefined4 *local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214 [132];
  
  auVar22 = _local_30c;
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  local_304 = (float)in_ECX;
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "LtBvTree3";
    puVar2[3] = "QueryTree";
    uVar4 = rdtsc();
    local_30c._0_4_ = auVar22._0_4_;
    local_30c._4_4_ = (int)uVar4;
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 4;
  }
  local_2c4 = *(undefined4 *)(in_ECX + 8);
  iVar1 = param_1[2];
  iVar10 = param_2[2];
  local_2d0 = param_1;
  local_2cc = param_2;
  local_2c8 = param_3;
  fVar15 = *(float *)(param_3 + 0x18) * *(float *)(iVar1 + 0x5c);
  fVar14 = *(float *)(param_3 + 0x18) * *(float *)(iVar10 + 0x5c);
  local_30c._4_4_ = fVar14;
  local_270 = fVar15 * (*(float *)(iVar1 + 0x40) - *(float *)(iVar1 + 0x50)) +
              fVar14 * (*(float *)(iVar10 + 0x50) - *(float *)(iVar10 + 0x40));
  fStack_26c = fVar15 * (*(float *)(iVar1 + 0x44) - *(float *)(iVar1 + 0x54)) +
               fVar14 * (*(float *)(iVar10 + 0x54) - *(float *)(iVar10 + 0x44));
  fStack_268 = fVar15 * (*(float *)(iVar1 + 0x48) - *(float *)(iVar1 + 0x58)) +
               fVar14 * (*(float *)(iVar10 + 0x58) - *(float *)(iVar10 + 0x48));
  fStack_264 = *(float *)(iVar1 + 0xa0) * *(float *)(iVar1 + 0x9c) * fVar15 +
               *(float *)(iVar10 + 0xa0) * *(float *)(iVar10 + 0x9c) * fVar14;
  FUN_008b1ff0(iVar1,iVar10);
  local_220 = local_214;
  local_218 = 0x80000080;
  local_214[0] = 0xffffffff;
  local_21c = 1;
  FUN_008b1f10(local_2c0);
  auVar22 = _local_30c;
  pfVar8 = (float *)param_2[2];
  iVar1 = param_1[2];
  local_30c._0_4_ = iVar1;
  fStack_2dc = pfVar8[4] * local_270 + pfVar8[5] * fStack_26c + pfVar8[6] * fStack_268;
  fStack_2d8 = pfVar8[8] * local_270 + pfVar8[9] * fStack_26c + pfVar8[10] * fStack_268;
  fStack_2d4 = pfVar8[8] * local_270 + pfVar8[9] * fStack_26c + pfVar8[10] * fStack_268;
  local_2e0 = *pfVar8 * local_270 + pfVar8[1] * fStack_26c + pfVar8[2] * fStack_268;
  if (*(char *)(*(int *)(param_3 + 0x28) + 0x10) == '\0') {
    (**(code **)(*(int *)*param_1 + 0xc))(local_260,*(float *)(param_3 + 8) * 0.5,local_30c + 0xc);
    fVar30 = (float)auStack_2fc._0_4_ - (float)local_30c._0_4_;
    fVar32 = (float)auStack_2fc._4_4_ - (float)local_30c._4_4_;
    fVar33 = fStack_2f4 - local_304;
    fVar34 = fStack_2f0 - local_300;
    fVar14 = extraout_ECX;
    piVar11 = extraout_EDX;
    fVar15 = (float)auStack_2fc._0_4_;
    fVar18 = (float)auStack_2fc._4_4_;
    fVar19 = fStack_2f4;
    fVar20 = fStack_2f0;
    fVar21 = (float)local_30c._0_4_;
    fVar27 = (float)local_30c._4_4_;
    fVar28 = local_304;
    fVar29 = local_300;
  }
  else {
    local_30c._4_4_ = pfVar8[0x28] * pfVar8[0x27] * pfVar8[0x27];
    _local_304 = auVar22._8_8_;
    (**(code **)(*(int *)*param_1 + 0xc))
              (local_260,
               *(float *)(param_3 + 8) * 0.5 +
               (*(float *)(iVar1 + 0x9c) + pfVar8[0x27]) * *(float *)(iVar1 + 0xa0) +
               (float)local_30c._4_4_);
    pfVar3 = (float *)param_2[2];
    fVar36 = *(float *)(param_3 + 8) * 0.5 + fStack_314 + *(float *)((int)unaff_EBX + 0xa0);
    fVar14 = *(float *)((int)unaff_EBX + 0x50) - pfVar3[0xc];
    fVar18 = *(float *)((int)unaff_EBX + 0x54) - pfVar3[0xd];
    fVar20 = *(float *)((int)unaff_EBX + 0x58) - pfVar3[0xe];
    fVar15 = *pfVar3 * fVar14 + pfVar3[1] * fVar18 + pfVar3[2] * fVar20;
    fVar19 = pfVar3[4] * fVar14 + pfVar3[5] * fVar18 + pfVar3[6] * fVar20;
    fVar21 = pfVar3[8] * fVar14 + pfVar3[9] * fVar18 + pfVar3[10] * fVar20;
    fVar14 = pfVar3[8] * fVar14 + pfVar3[9] * fVar18 + pfVar3[10] * fVar20;
    auVar22._4_4_ = fVar19 - fVar36;
    auVar22._0_4_ = fVar15 - fVar36;
    auVar22._8_4_ = fVar21 - fVar36;
    auVar22._12_4_ = fVar14 - fVar36;
    auVar22 = maxps(_local_30c,auVar22);
    auVar24._0_4_ = fVar15 + fVar36;
    auVar24._4_4_ = fVar19 + fVar36;
    auVar24._8_4_ = fVar21 + fVar36;
    auVar24._12_4_ = fVar14 + fVar36;
    auVar24 = minps(_auStack_2fc,auVar24);
    fVar30 = auVar24._0_4_ - auVar22._0_4_;
    fVar32 = auVar24._4_4_ - auVar22._4_4_;
    fVar33 = auVar24._8_4_ - auVar22._8_4_;
    fVar34 = auVar24._12_4_ - auVar22._12_4_;
    if (0.0 < pfVar8[0x27]) {
      fVar36 = pfVar8[0x17] * *(float *)(param_3 + 0x18);
      auStack_2ec._0_4_ =
           (float)auStack_2ec._0_4_ +
           fVar36 * ((fVar19 - pfVar8[0x21]) * pfVar8[0x26] - (fVar21 - pfVar8[0x22]) * pfVar8[0x25]
                    );
      auStack_2ec._4_4_ =
           (float)auStack_2ec._4_4_ +
           fVar36 * ((fVar21 - pfVar8[0x22]) * pfVar8[0x24] - (fVar15 - pfVar8[0x20]) * pfVar8[0x26]
                    );
      fStack_2e4 = fStack_2e4 +
                   fVar36 * ((fVar15 - pfVar8[0x20]) * pfVar8[0x25] -
                            (fVar19 - pfVar8[0x21]) * pfVar8[0x24]);
      local_2e0 = local_2e0 +
                  fVar36 * ((fVar14 - pfVar8[0x23]) * pfVar8[0x27] -
                           (fVar14 - pfVar8[0x23]) * pfVar8[0x27]);
    }
    auVar16._0_12_ = ZEXT812(0);
    auVar16._12_4_ = 0;
    auVar26 = minps(ZEXT816(0),_auStack_2ec);
    local_30c._0_4_ = auVar22._0_4_ + auVar26._0_4_;
    local_30c._4_4_ = auVar22._4_4_ + auVar26._4_4_;
    local_304 = auVar22._8_4_ + auVar26._8_4_;
    local_300 = auVar22._12_4_ + auVar26._12_4_;
    auVar22 = maxps(auVar16,_auStack_2ec);
    auStack_2fc._0_4_ = auVar24._0_4_ + auVar22._0_4_;
    auStack_2fc._4_4_ = auVar24._4_4_ + auVar22._4_4_;
    fStack_2f4 = auVar24._8_4_ + auVar22._8_4_;
    fStack_2f0 = auVar24._12_4_ + auVar22._12_4_;
    fVar14 = unaff_EBX;
    piVar11 = param_2;
    fVar15 = (float)auStack_2fc._0_4_;
    fVar18 = (float)auStack_2fc._4_4_;
    fVar19 = fStack_2f4;
    fVar20 = fStack_2f0;
    fVar21 = (float)local_30c._0_4_;
    fVar27 = (float)local_30c._4_4_;
    fVar28 = local_304;
    fVar29 = local_300;
    unaff_EBX = fVar36;
  }
  pfVar8 = (float *)(iStack_310 + 0x10);
  if (pfVar8 != (float *)0x0) {
    auVar26._4_4_ = -(uint)(*(float *)(iStack_310 + 0x14) <= fVar27);
    auVar26._0_4_ = -(uint)(*pfVar8 <= fVar21);
    auVar26._8_4_ = -(uint)(*(float *)(iStack_310 + 0x18) <= fVar28);
    auVar26._12_4_ = -(uint)(*(float *)(iStack_310 + 0x1c) <= fVar29);
    uVar9 = movmskps(fVar14,auVar26);
    auVar23._4_4_ = -(uint)(fVar18 <= *(float *)(iStack_310 + 0x24));
    auVar23._0_4_ = -(uint)(fVar15 <= *(float *)(iStack_310 + 0x20));
    auVar23._8_4_ = -(uint)(fVar19 <= *(float *)(iStack_310 + 0x28));
    auVar23._12_4_ = -(uint)(fVar20 <= *(float *)(iStack_310 + 0x2c));
    uVar12 = movmskps(piVar11,auVar23);
    if (((byte)uVar9 & (byte)uVar12 & 7) == 7) {
      bVar7 = true;
      goto LAB_008f6c52;
    }
    auVar17._0_12_ = ZEXT812(0);
    auVar17._12_4_ = 0;
    fVar14 = *(float *)(param_3 + 8) * 0.5;
    unaff_EBX = 0.4;
    auVar25._0_4_ = fVar30 * 0.4;
    auVar25._4_4_ = fVar32 * 0.4;
    auVar25._8_4_ = fVar33 * 0.4;
    auVar25._12_4_ = fVar34 * 0.4;
    auVar22 = minps(auVar17,_auStack_2ec);
    auVar24 = maxps(ZEXT816(0),_auStack_2ec);
    auVar35._0_4_ = auVar24._0_4_ * -2.0;
    auVar35._4_4_ = auVar24._4_4_ * -2.0;
    auVar35._8_4_ = auVar24._8_4_ * -2.0;
    auVar35._12_4_ = auVar24._12_4_ * -2.0;
    auVar31._0_4_ = auVar22._0_4_ * -2.0;
    auVar31._4_4_ = auVar22._4_4_ * -2.0;
    auVar31._8_4_ = auVar22._8_4_ * -2.0;
    auVar31._12_4_ = auVar22._12_4_ * -2.0;
    uVar6 = CONCAT44(auVar25._4_4_,auVar25._0_4_);
    auVar5._8_4_ = -auVar25._8_4_;
    auVar5._0_8_ = uVar6 ^ 0x8000000080000000;
    auVar5._12_4_ = -auVar25._12_4_;
    auVar22 = maxps(auVar35,auVar5);
    local_30c._0_4_ = (fVar21 - fVar14) + auVar22._0_4_;
    local_30c._4_4_ = (fVar27 - fVar14) + auVar22._4_4_;
    local_304 = (fVar28 - fVar14) + auVar22._8_4_;
    local_300 = (fVar29 - fVar14) + auVar22._12_4_;
    auVar22 = minps(auVar31,auVar25);
    auStack_2fc._0_4_ = fVar15 + fVar14 + auVar22._0_4_;
    auStack_2fc._4_4_ = fVar18 + fVar14 + auVar22._4_4_;
    fStack_2f4 = fVar19 + fVar14 + auVar22._8_4_;
    fStack_2f0 = fVar20 + fVar14 + auVar22._12_4_;
    *pfVar8 = (float)local_30c._0_4_;
    *(undefined4 *)(iStack_310 + 0x14) = local_30c._4_4_;
    *(float *)(iStack_310 + 0x18) = local_304;
    *(float *)(iStack_310 + 0x1c) = local_300;
    *(undefined4 *)(iStack_310 + 0x20) = auStack_2fc._0_4_;
    *(undefined4 *)(iStack_310 + 0x24) = auStack_2fc._4_4_;
    *(float *)(iStack_310 + 0x28) = fStack_2f4;
    *(float *)(iStack_310 + 0x2c) = fStack_2f0;
  }
  (**(code **)(*(int *)*param_2 + 0x24))(local_30c,&uStack_22c);
  bVar7 = false;
LAB_008f6c52:
  iVar13 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar10 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar10 + 0x1a4) < *(uint *)(iVar10 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar10 + 0x1a4);
    *puVar2 = "StNarrow";
    uVar4 = rdtsc();
    unaff_EBX = (float)uVar4;
    puVar2[1] = unaff_EBX;
    *(undefined4 **)(iVar10 + 0x1a4) = puVar2 + 3;
  }
  if (bVar7) {
    FUN_00934dc0(iStack_310 + 0x30,&fStack_2dc,*(undefined4 *)(*param_2 + 0xc),0,0,param_4);
  }
  else {
    iVar10 = *(int *)(DAT_00ba7d98 + 0x28) + *(int *)(DAT_00ba7d98 + 0x14);
    if (iVar10 < *(int *)(DAT_00ba7d98 + 8)) {
      iVar10 = *(int *)(DAT_00ba7d98 + 8) - iVar10;
    }
    else {
      iVar10 = 0;
    }
    if (iVar10 < ((((int)(iStack_228 + (iStack_228 >> 0x1f & 3U)) >> 2) -
                  *(int *)(iStack_310 + 0x34)) + 1) * 0x200) {
      *(undefined4 *)(DAT_00ba7d98 + 4) = 1;
      if (iStack_224 < 0) {
        return;
      }
      FUN_008a75d0(uStack_22c,iStack_224 << 2,0x14);
      return;
    }
    if (1 < iStack_228) {
      FUN_008f6580(uStack_22c,0,iStack_228 + -1,(uint)unaff_EBX & 0xffffff00);
    }
    FUN_00934dc0(iStack_310 + 0x30,&fStack_2dc,*(undefined4 *)(*param_2 + 0xc),uStack_22c,iStack_228
                 ,param_4);
    iVar13 = _tls_index;
  }
  iVar1 = *(int *)(iVar1 + iVar13 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  if (-1 < iStack_224) {
    FUN_008a75d0(uStack_22c,iStack_224 << 2,0x14);
  }
  return;
}



void FUN_008f6e30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a9b510;
  if (-1 < (int)in_ECX[0xe]) {
    FUN_008a75d0(in_ECX[0xc],in_ECX[0xe] << 2,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008f6e80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_009091d0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f6ec0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_00908de0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f6f00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  local_20 = *(undefined4 *)(*param_1 + 0xc);
  local_24 = param_1;
  local_1c = param_3;
  local_18 = *(undefined4 *)(in_ECX + 8);
  local_28 = param_2;
  FUN_00934da0(in_ECX + 0x30,&local_28);
  return;
}



void FUN_008f6f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008f67c0(param_2,param_1,param_3,param_4);
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



void FUN_008f7000(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  *param_1 = uVar1;
  param_1[1] = uVar1;
  param_1[2] = uVar1;
  param_1[3] = uVar1;
  return;
}



void FUN_008f7020(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
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
    FUN_00908a40(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00908a40(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_008f7110(byte param_1)

{
  FUN_008f6e30();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f7180(void)

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
  local_c = FUN_008f6490;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,3,1);
  local_18 = &LAB_008f6780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00908a40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,1,3);
  return;
}



void FUN_008f7210(void)

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
  local_c = FUN_008f6490;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,3,0xd);
  local_18 = &LAB_008f6780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00908a40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0xd,3);
  return;
}



void FUN_008f72a0(void)

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
  local_c = FUN_008f6490;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,3,0x11);
  local_18 = &LAB_008f6780;
  local_14 = FUN_009091d0;
  local_10 = FUN_00908de0;
  local_c = FUN_00908a40;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x11,3);
  return;
}



void FUN_008f7330(void)

{
  short sVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  
  iVar2 = in_ECX[4];
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      sVar1 = *(short *)(in_ECX[3] + iVar3 * 2);
      if (sVar1 != -1) {
        (**(code **)(*(int *)in_ECX[2] + 0x10))(sVar1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_008f7370(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  int unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_e0;
  char local_d4 [4];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int *local_80;
  undefined4 *local_7c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_5c;
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
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtmultiRay-cvx";
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  piVar3 = (int *)*param_2;
  iVar1 = *param_1;
  FUN_008b1ff0(param_2[2],param_1[2]);
  local_e0 = *(int *)(iVar1 + 0x10);
  pfVar6 = *(float **)(iVar1 + 0xc);
  local_80 = param_1;
  local_7c = param_2;
  local_b0 = 0;
  local_ac = 0;
  if (0 < local_e0) {
    do {
      fVar7 = *pfVar6;
      fVar8 = pfVar6[1];
      fVar9 = pfVar6[2];
      local_d0 = local_50 * fVar7 + local_40 * fVar8 + local_30 * fVar9 + local_20;
      fStack_cc = fStack_4c * fVar7 + fStack_3c * fVar8 + fStack_2c * fVar9 + fStack_1c;
      fStack_c8 = fStack_48 * fVar7 + fStack_38 * fVar8 + fStack_28 * fVar9 + fStack_18;
      fStack_c4 = fStack_44 * fVar7 + fStack_34 * fVar8 + fStack_24 * fVar9 + fStack_14;
      fVar7 = pfVar6[4];
      fVar8 = pfVar6[5];
      fVar9 = pfVar6[6];
      local_c0 = local_50 * fVar7 + local_40 * fVar8 + local_30 * fVar9 + local_20;
      fStack_bc = fStack_4c * fVar7 + fStack_3c * fVar8 + fStack_2c * fVar9 + fStack_1c;
      fStack_b8 = fStack_48 * fVar7 + fStack_38 * fVar8 + fStack_28 * fVar9 + fStack_18;
      fStack_b4 = fStack_44 * fVar7 + fStack_34 * fVar8 + fStack_24 * fVar9 + fStack_14;
      local_5c = 1.0;
      (**(code **)(*piVar3 + 0x14))(local_d4,&local_d0,&local_70);
      if (local_d4[0] != '\0') {
        pfVar4 = (float *)param_2[2];
        fVar7 = (1.0 - local_5c) * local_d0 + local_5c * local_c0;
        fVar8 = (1.0 - local_5c) * fStack_cc + local_5c * fStack_bc;
        fVar9 = (1.0 - local_5c) * fStack_c8 + local_5c * fStack_b8;
        fStack_a0 = *pfVar4 * fVar7 + pfVar4[4] * fVar8 + pfVar4[8] * fVar9 + pfVar4[0xc];
        fStack_9c = pfVar4[1] * fVar7 + pfVar4[5] * fVar8 + pfVar4[9] * fVar9 + pfVar4[0xd];
        fStack_98 = pfVar4[2] * fVar7 + pfVar4[6] * fVar8 + pfVar4[10] * fVar9 + pfVar4[0xe];
        fStack_94 = pfVar4[3] * fVar7 + pfVar4[7] * fVar8 + pfVar4[0xb] * fVar9 + pfVar4[0xf];
        fStack_90 = *pfVar4 * local_70 + pfVar4[4] * fStack_6c + pfVar4[8] * fStack_68;
        fStack_8c = pfVar4[1] * local_70 + pfVar4[5] * fStack_6c + pfVar4[9] * fStack_68;
        fStack_88 = pfVar4[2] * local_70 + pfVar4[6] * fStack_6c + pfVar4[10] * fStack_68;
        fStack_84 = (local_5c - 1.0) * pfVar6[3] + *(float *)(iVar1 + 0x18);
        (**(code **)(*param_4 + 4))(&fStack_a0);
      }
      pfVar6 = pfVar6 + 8;
      local_e0 = local_e0 + -1;
    } while (local_e0 != 0);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008f7610(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float *pfVar4;
  undefined8 uVar5;
  float *pfVar6;
  int unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_e0;
  char local_d4 [4];
  float local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  int *local_80;
  undefined4 *local_7c;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float local_5c;
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
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtmultiRay-cvx";
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  piVar3 = (int *)*param_2;
  iVar1 = *param_1;
  FUN_008b1ff0(param_2[2],param_1[2]);
  local_e0 = *(int *)(iVar1 + 0x10);
  pfVar6 = *(float **)(iVar1 + 0xc);
  local_80 = param_1;
  local_7c = param_2;
  local_b0 = 0;
  local_ac = 0;
  if (0 < local_e0) {
    do {
      fVar7 = *pfVar6;
      fVar8 = pfVar6[1];
      fVar9 = pfVar6[2];
      local_d0 = local_50 * fVar7 + local_40 * fVar8 + local_30 * fVar9 + local_20;
      fStack_cc = fStack_4c * fVar7 + fStack_3c * fVar8 + fStack_2c * fVar9 + fStack_1c;
      fStack_c8 = fStack_48 * fVar7 + fStack_38 * fVar8 + fStack_28 * fVar9 + fStack_18;
      fStack_c4 = fStack_44 * fVar7 + fStack_34 * fVar8 + fStack_24 * fVar9 + fStack_14;
      fVar7 = pfVar6[4];
      fVar8 = pfVar6[5];
      fVar9 = pfVar6[6];
      local_c0 = local_50 * fVar7 + local_40 * fVar8 + local_30 * fVar9 + local_20;
      fStack_bc = fStack_4c * fVar7 + fStack_3c * fVar8 + fStack_2c * fVar9 + fStack_1c;
      fStack_b8 = fStack_48 * fVar7 + fStack_38 * fVar8 + fStack_28 * fVar9 + fStack_18;
      fStack_b4 = fStack_44 * fVar7 + fStack_34 * fVar8 + fStack_24 * fVar9 + fStack_14;
      local_5c = 1.0;
      (**(code **)(*piVar3 + 0x14))(local_d4,&local_d0,&local_70);
      if (local_d4[0] != '\0') {
        pfVar4 = (float *)param_2[2];
        fVar7 = (1.0 - local_5c) * local_d0 + local_5c * local_c0;
        fVar8 = (1.0 - local_5c) * fStack_cc + local_5c * fStack_bc;
        fVar9 = (1.0 - local_5c) * fStack_c8 + local_5c * fStack_b8;
        fStack_a0 = *pfVar4 * fVar7 + pfVar4[4] * fVar8 + pfVar4[8] * fVar9 + pfVar4[0xc];
        fStack_9c = pfVar4[1] * fVar7 + pfVar4[5] * fVar8 + pfVar4[9] * fVar9 + pfVar4[0xd];
        fStack_98 = pfVar4[2] * fVar7 + pfVar4[6] * fVar8 + pfVar4[10] * fVar9 + pfVar4[0xe];
        fStack_94 = pfVar4[3] * fVar7 + pfVar4[7] * fVar8 + pfVar4[0xb] * fVar9 + pfVar4[0xf];
        fStack_90 = *pfVar4 * local_70 + pfVar4[4] * fStack_6c + pfVar4[8] * fStack_68;
        fStack_8c = pfVar4[1] * local_70 + pfVar4[5] * fStack_6c + pfVar4[9] * fStack_68;
        fStack_88 = pfVar4[2] * local_70 + pfVar4[6] * fStack_6c + pfVar4[10] * fStack_68;
        fStack_84 = (local_5c - 1.0) * pfVar6[3] + *(float *)(iVar1 + 0x18);
        (**(code **)(*param_4 + 4))(&fStack_a0);
      }
      pfVar6 = pfVar6 + 8;
      local_e0 = local_e0 + -1;
    } while (local_e0 != 0);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008f78b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f7610(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f78f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  in_ECX[2] = param_4;
  piVar1 = in_ECX + 3;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a9b5cc;
  *piVar1 = (int)(in_ECX + 6);
  in_ECX[4] = 0;
  in_ECX[5] = 0x80000004;
  iVar2 = *(int *)(*param_1 + 0x10);
  if ((int)(in_ECX[5] & 0x3fffffff) < iVar2) {
    iVar3 = (in_ECX[5] & 0x3fffffff) * 2;
    if (iVar3 <= iVar2) {
      iVar3 = iVar2;
    }
    FUN_008a6e40(piVar1,iVar3,2);
  }
  iVar3 = 0;
  in_ECX[4] = iVar2;
  if (0 < iVar2) {
    do {
      *(undefined2 *)(*piVar1 + iVar3 * 2) = 0xffff;
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}



void FUN_008f7970(int *param_1,undefined4 *param_2,undefined4 param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined2 uVar10;
  int in_ECX;
  int iVar11;
  float *pfVar12;
  int unaff_FS_OFFSET;
  char local_c0 [4];
  float fStack_bc;
  int local_b8;
  int *local_b4;
  float local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_80 [20];
  float local_6c;
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
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtmultiRay-cvx";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  local_b4 = (int *)*param_2;
  local_b8 = iVar2;
  FUN_008b1ff0(param_2[2],param_1[2]);
  iVar4 = *(int *)(iVar2 + 0x10);
  iVar11 = 0;
  local_90 = 0;
  local_8c = 0;
  pfVar12 = *(float **)(iVar2 + 0xc);
  if (0 < iVar4) {
    do {
      fVar7 = *pfVar12;
      fVar8 = pfVar12[1];
      fVar9 = pfVar12[2];
      local_b0 = local_60 * fVar7 + local_50 * fVar8 + local_40 * fVar9 + local_30;
      fStack_ac = fStack_5c * fVar7 + fStack_4c * fVar8 + fStack_3c * fVar9 + fStack_2c;
      fStack_a8 = fStack_58 * fVar7 + fStack_48 * fVar8 + fStack_38 * fVar9 + fStack_28;
      fStack_a4 = fStack_54 * fVar7 + fStack_44 * fVar8 + fStack_34 * fVar9 + fStack_24;
      fVar7 = pfVar12[4];
      fVar8 = pfVar12[5];
      fVar9 = pfVar12[6];
      local_a0 = local_60 * fVar7 + local_50 * fVar8 + local_40 * fVar9 + local_30;
      fStack_9c = fStack_5c * fVar7 + fStack_4c * fVar8 + fStack_3c * fVar9 + fStack_2c;
      fStack_98 = fStack_58 * fVar7 + fStack_48 * fVar8 + fStack_38 * fVar9 + fStack_28;
      fStack_94 = fStack_54 * fVar7 + fStack_44 * fVar8 + fStack_34 * fVar9 + fStack_24;
      local_6c = 1.0;
      (**(code **)(*local_b4 + 0x14))(local_c0,&local_b0,local_80);
      if (local_c0[0] == '\0') {
        sVar1 = *(short *)(*(int *)(in_ECX + 0xc) + iVar11 * 2);
        if (sVar1 != -1) {
          (**(code **)(**(int **)(in_ECX + 8) + 0x10))(sVar1);
          *(undefined2 *)(*(int *)(in_ECX + 0xc) + iVar11 * 2) = 0xffff;
        }
      }
      else {
        iVar2 = *param_4;
        fStack_bc = local_6c;
        fStack_20 = (1.0 - local_6c) * local_b0 + local_6c * local_a0;
        fStack_1c = (1.0 - local_6c) * fStack_ac + local_6c * fStack_9c;
        fStack_18 = (1.0 - local_6c) * fStack_a8 + local_6c * fStack_98;
        fStack_14 = (1.0 - local_6c) * fStack_a4 + local_6c * fStack_94;
        FUN_0088fcc0(param_2[2],&fStack_20);
        FUN_0088fe00(param_2[2],local_80);
        *(float *)(iVar2 + 0x1c) = (local_6c - 1.0) * pfVar12[3] + *(float *)(local_b8 + 0x18);
        iVar5 = *(int *)(in_ECX + 0xc);
        if (*(short *)(iVar5 + iVar11 * 2) == -1) {
          uVar10 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,iVar2);
          *(undefined2 *)(iVar5 + iVar11 * 2) = uVar10;
        }
        if (*(short *)(*(int *)(in_ECX + 0xc) + iVar11 * 2) != -1) {
          *param_4 = *param_4 + 0x30;
          *(undefined2 *)(iVar2 + 0x20) = *(undefined2 *)(*(int *)(in_ECX + 0xc) + iVar11 * 2);
        }
      }
      pfVar12 = pfVar12 + 8;
      iVar11 = iVar11 + 1;
    } while (iVar11 < iVar4);
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



void FUN_008f7c70(void)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) << 1,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  return;
}



void FUN_008f7cd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f7370(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f7d10(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008f7970(param_2,param_1,param_3,param_4);
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



void FUN_008f7db0(byte param_1)

{
  undefined4 *in_ECX;
  
  if (-1 < (int)in_ECX[5]) {
    FUN_008a75d0(in_ECX[3],(in_ECX[5] & 0x3fffffff) << 1,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f7e20(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
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
  FUN_00936050(param_2,param_1,local_40,&local_a0,pppuVar8);
  return;
}



void FUN_008f7ef0(byte param_1)

{
  FUN_008f7c70();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



void FUN_008f7f60(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008f7f20;
  local_14 = FUN_00918000;
  local_10 = FUN_008f78b0;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 1;
  FUN_008dadd0(&local_18,1,0x11);
  local_18 = &LAB_008f7c30;
  local_14 = FUN_00918000;
  local_10 = FUN_008f7610;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,0x11,1);
  return;
}



void FUN_008f7ff0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(in_ECX + 7);
  iVar1 = 8;
  do {
    if (*psVar2 != -1) {
      (**(code **)(*(int *)in_ECX[2] + 0x10))(*psVar2);
    }
    psVar2 = psVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (in_ECX != (undefined4 *)0x0) {
    (**(code **)*in_ECX)(1);
  }
  return;
}



void FUN_008f80f0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
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
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  short sVar25;
  int in_ECX;
  float *pfVar26;
  int iVar27;
  int iVar28;
  float *pfVar29;
  short *psVar30;
  int unaff_FS_OFFSET;
  int local_f8;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_c0 [12];
  float local_90 [35];
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtMultiSphereTri";
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *param_2;
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  iVar3 = *param_1;
  pfVar26 = (float *)(iVar1 + 0x10);
  iVar27 = (int)local_c0 - (int)pfVar26;
  iVar28 = 3;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar29 = (float *)(iVar27 + (int)pfVar26);
    *pfVar29 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar29[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar29[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar29[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  pfVar26 = (float *)param_1[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  local_f8 = *(int *)(iVar3 + 0xc);
  pfVar26 = (float *)(iVar3 + 0x10);
  iVar28 = (int)local_90 - (int)pfVar26;
  iVar27 = local_f8;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar29 = (float *)(iVar28 + (int)pfVar26);
    *pfVar29 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar29[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar29[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar29[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (0 < iVar27);
  pfVar26 = local_90;
  if (-1 < local_f8 + -1) {
    pfVar29 = (float *)(iVar3 + 0x1c);
    psVar30 = (short *)(in_ECX + 0x1c + (local_f8 + -1) * 2);
    do {
      fVar6 = *(float *)(iVar1 + 0xc) + *pfVar29;
      FUN_008d20c0(pfVar26,local_c0,in_ECX + 0xc,&local_e0);
      if (fVar6 + *(float *)(param_3 + 8) <= local_d0) {
        if (*psVar30 != -1) {
          (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*psVar30);
          *psVar30 = -1;
        }
      }
      else {
        fVar7 = *(float *)(iVar1 + 0xc) - local_d0;
        pfVar4 = (float *)*param_4;
        fVar8 = pfVar26[1];
        fVar9 = pfVar26[2];
        fVar10 = pfVar26[3];
        *pfVar4 = *pfVar26 + fVar7 * local_e0;
        pfVar4[1] = fVar8 + fVar7 * fStack_dc;
        pfVar4[2] = fVar9 + fVar7 * fStack_d8;
        pfVar4[3] = fVar10 + fVar7 * fStack_d4;
        pfVar4[4] = local_e0;
        pfVar4[5] = fStack_dc;
        pfVar4[6] = fStack_d8;
        pfVar4[7] = fStack_d4;
        pfVar4[7] = local_d0 - fVar6;
        if (*psVar30 == -1) {
          sVar25 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar4);
          *psVar30 = sVar25;
          if (sVar25 == -1) goto LAB_008f8315;
        }
        *param_4 = *param_4 + 0x30;
        *(short *)(pfVar4 + 8) = *psVar30;
      }
LAB_008f8315:
      pfVar29 = pfVar29 + 4;
      pfVar26 = pfVar26 + 4;
      psVar30 = psVar30 + -1;
      local_f8 = local_f8 + -1;
    } while (local_f8 != 0);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008f8380(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
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
  int in_ECX;
  float *pfVar24;
  int iVar25;
  int iVar26;
  float *pfVar27;
  int unaff_FS_OFFSET;
  int local_120;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *local_f0;
  int *local_ec;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_c0 [12];
  float local_90 [35];
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtMultiSphereTriangle";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *param_2;
  pfVar24 = (float *)param_2[2];
  fVar5 = *pfVar24;
  fVar6 = pfVar24[1];
  fVar7 = pfVar24[2];
  fVar8 = pfVar24[3];
  fVar9 = pfVar24[4];
  fVar10 = pfVar24[5];
  fVar11 = pfVar24[6];
  fVar12 = pfVar24[7];
  fVar13 = pfVar24[8];
  fVar14 = pfVar24[9];
  fVar15 = pfVar24[10];
  fVar16 = pfVar24[0xb];
  fVar17 = pfVar24[0xc];
  fVar18 = pfVar24[0xd];
  fVar19 = pfVar24[0xe];
  fVar20 = pfVar24[0xf];
  iVar3 = *param_1;
  pfVar24 = (float *)(iVar1 + 0x10);
  iVar26 = (int)local_c0 - (int)pfVar24;
  iVar25 = 3;
  do {
    fVar21 = *pfVar24;
    fVar22 = pfVar24[1];
    fVar23 = pfVar24[2];
    pfVar27 = (float *)(iVar26 + (int)pfVar24);
    *pfVar27 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar27[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar27[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar27[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar24 = pfVar24 + 4;
    iVar25 = iVar25 + -1;
  } while (iVar25 != 0);
  pfVar24 = (float *)param_1[2];
  fVar5 = *pfVar24;
  fVar6 = pfVar24[1];
  fVar7 = pfVar24[2];
  fVar8 = pfVar24[3];
  fVar9 = pfVar24[4];
  fVar10 = pfVar24[5];
  fVar11 = pfVar24[6];
  fVar12 = pfVar24[7];
  fVar13 = pfVar24[8];
  fVar14 = pfVar24[9];
  fVar15 = pfVar24[10];
  fVar16 = pfVar24[0xb];
  fVar17 = pfVar24[0xc];
  fVar18 = pfVar24[0xd];
  fVar19 = pfVar24[0xe];
  fVar20 = pfVar24[0xf];
  pfVar24 = (float *)(iVar3 + 0x10);
  local_120 = *(int *)(iVar3 + 0xc);
  iVar25 = (int)local_90 - (int)pfVar24;
  iVar26 = local_120;
  do {
    fVar21 = *pfVar24;
    fVar22 = pfVar24[1];
    fVar23 = pfVar24[2];
    pfVar27 = (float *)(iVar25 + (int)pfVar24);
    *pfVar27 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar27[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar27[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar27[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar24 = pfVar24 + 4;
    iVar26 = iVar26 + -1;
  } while (0 < iVar26);
  local_f0 = param_1;
  local_ec = param_2;
  if (0 < local_120) {
    pfVar24 = local_90;
    pfVar27 = (float *)(iVar3 + 0x1c);
    do {
      fVar5 = *pfVar27 + *(float *)(iVar1 + 0xc);
      FUN_008d20c0(pfVar24,local_c0,in_ECX + 0xc,&local_e0);
      if (local_d0 < fVar5 + *(float *)(param_3 + 8)) {
        fVar6 = *(float *)(iVar1 + 0xc) - local_d0;
        fStack_f4 = local_d0 - fVar5;
        local_110 = *pfVar24 + fVar6 * local_e0;
        fStack_10c = pfVar24[1] + fVar6 * fStack_dc;
        fStack_108 = pfVar24[2] + fVar6 * fStack_d8;
        fStack_104 = pfVar24[3] + fVar6 * fStack_d4;
        local_100 = local_e0;
        fStack_fc = fStack_dc;
        fStack_f8 = fStack_d8;
        (**(code **)(*param_4 + 4))(&local_110);
      }
      pfVar24 = pfVar24 + 4;
      pfVar27 = pfVar27 + 4;
      local_120 = local_120 + -1;
    } while (local_120 != 0);
  }
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



void FUN_008f85c0(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  float *pfVar28;
  int unaff_FS_OFFSET;
  int local_130;
  undefined1 local_120 [16];
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  int *local_f0;
  int *local_ec;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float local_d0;
  float local_c0 [12];
  float local_90 [35];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtMultiSphereTriangle";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  iVar4 = *param_2;
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar4 + 0x10);
  iVar27 = 3;
  pfVar28 = pfVar26;
  do {
    fVar22 = *pfVar28;
    fVar23 = pfVar28[1];
    fVar24 = pfVar28[2];
    pfVar1 = (float *)(((int)local_c0 - (int)pfVar26) + (int)pfVar28);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar28 = pfVar28 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  local_130 = *(int *)(iVar2 + 0xc);
  pfVar28 = (float *)(iVar2 + 0x10);
  pfVar1 = (float *)param_1[2];
  fVar6 = *pfVar1;
  fVar7 = pfVar1[1];
  fVar8 = pfVar1[2];
  fVar9 = pfVar1[3];
  fVar10 = pfVar1[4];
  fVar11 = pfVar1[5];
  fVar12 = pfVar1[6];
  fVar13 = pfVar1[7];
  fVar14 = pfVar1[8];
  fVar15 = pfVar1[9];
  fVar16 = pfVar1[10];
  fVar17 = pfVar1[0xb];
  fVar18 = pfVar1[0xc];
  fVar19 = pfVar1[0xd];
  fVar20 = pfVar1[0xe];
  fVar21 = pfVar1[0xf];
  iVar25 = (int)local_90 - (int)pfVar28;
  iVar27 = local_130;
  do {
    fVar22 = *pfVar28;
    fVar23 = pfVar28[1];
    fVar24 = pfVar28[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar28);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar28 = pfVar28 + 4;
    iVar27 = iVar27 + -1;
  } while (0 < iVar27);
  local_f0 = param_1;
  local_ec = param_2;
  FUN_008d1db0(pfVar26,local_120);
  if (0 < local_130) {
    pfVar26 = local_90;
    pfVar28 = (float *)(iVar2 + 0x1c);
    do {
      fVar6 = *pfVar28 + *(float *)(iVar4 + 0xc);
      FUN_008d20c0(pfVar26,local_c0,local_120,&local_e0);
      if (local_d0 < fVar6 + *(float *)(param_3 + 8)) {
        fVar7 = *(float *)(iVar4 + 0xc) - local_d0;
        fStack_f4 = local_d0 - fVar6;
        local_110 = *pfVar26 + fVar7 * local_e0;
        fStack_10c = pfVar26[1] + fVar7 * fStack_dc;
        fStack_108 = pfVar26[2] + fVar7 * fStack_d8;
        fStack_104 = pfVar26[3] + fVar7 * fStack_d4;
        local_100 = local_e0;
        fStack_fc = fStack_dc;
        fStack_f8 = fStack_d8;
        (**(code **)(*param_4 + 4))(&local_110);
      }
      pfVar26 = pfVar26 + 4;
      pfVar28 = pfVar28 + 4;
      local_130 = local_130 + -1;
    } while (local_130 != 0);
  }
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



void FUN_008f8810(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
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
  int iVar23;
  int in_ECX;
  int iVar24;
  float *pfVar25;
  float *pfVar26;
  int local_ec;
  undefined1 local_e0 [16];
  float local_d0;
  float local_c0 [12];
  float local_90 [35];
  
  iVar3 = *param_2;
  pfVar25 = (float *)param_2[2];
  fVar1 = *pfVar25;
  fVar2 = pfVar25[1];
  fVar5 = pfVar25[2];
  fVar6 = pfVar25[3];
  fVar7 = pfVar25[4];
  fVar8 = pfVar25[5];
  fVar9 = pfVar25[6];
  fVar10 = pfVar25[7];
  fVar11 = pfVar25[8];
  fVar12 = pfVar25[9];
  fVar13 = pfVar25[10];
  fVar14 = pfVar25[0xb];
  fVar15 = pfVar25[0xc];
  fVar16 = pfVar25[0xd];
  fVar17 = pfVar25[0xe];
  fVar18 = pfVar25[0xf];
  iVar4 = *param_1;
  pfVar25 = (float *)(iVar3 + 0x10);
  iVar22 = (int)local_c0 - (int)pfVar25;
  iVar24 = 3;
  do {
    fVar19 = *pfVar25;
    fVar20 = pfVar25[1];
    fVar21 = pfVar25[2];
    pfVar26 = (float *)(iVar22 + (int)pfVar25);
    *pfVar26 = fVar1 * fVar19 + fVar7 * fVar20 + fVar11 * fVar21 + fVar15;
    pfVar26[1] = fVar2 * fVar19 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16;
    pfVar26[2] = fVar5 * fVar19 + fVar9 * fVar20 + fVar13 * fVar21 + fVar17;
    pfVar26[3] = fVar6 * fVar19 + fVar10 * fVar20 + fVar14 * fVar21 + fVar18;
    pfVar25 = pfVar25 + 4;
    iVar24 = iVar24 + -1;
  } while (iVar24 != 0);
  pfVar25 = (float *)param_1[2];
  fVar1 = *pfVar25;
  fVar2 = pfVar25[1];
  fVar5 = pfVar25[2];
  fVar6 = pfVar25[3];
  fVar7 = pfVar25[4];
  fVar8 = pfVar25[5];
  fVar9 = pfVar25[6];
  fVar10 = pfVar25[7];
  fVar11 = pfVar25[8];
  fVar12 = pfVar25[9];
  fVar13 = pfVar25[10];
  fVar14 = pfVar25[0xb];
  fVar15 = pfVar25[0xc];
  fVar16 = pfVar25[0xd];
  fVar17 = pfVar25[0xe];
  fVar18 = pfVar25[0xf];
  iVar22 = *(int *)(iVar4 + 0xc);
  pfVar25 = (float *)(iVar4 + 0x10);
  iVar23 = (int)local_90 - (int)pfVar25;
  iVar24 = iVar22;
  do {
    fVar19 = *pfVar25;
    fVar20 = pfVar25[1];
    fVar21 = pfVar25[2];
    pfVar26 = (float *)(iVar23 + (int)pfVar25);
    *pfVar26 = fVar1 * fVar19 + fVar7 * fVar20 + fVar11 * fVar21 + fVar15;
    pfVar26[1] = fVar2 * fVar19 + fVar8 * fVar20 + fVar12 * fVar21 + fVar16;
    pfVar26[2] = fVar5 * fVar19 + fVar9 * fVar20 + fVar13 * fVar21 + fVar17;
    pfVar26[3] = fVar6 * fVar19 + fVar10 * fVar20 + fVar14 * fVar21 + fVar18;
    pfVar25 = pfVar25 + 4;
    iVar24 = iVar24 + -1;
  } while (0 < iVar24);
  local_ec = 0;
  if (0 < iVar22) {
    pfVar26 = local_90;
    pfVar25 = (float *)(iVar4 + 0x1c);
    while( true ) {
      fVar1 = *pfVar25;
      fVar2 = *(float *)(iVar3 + 0xc);
      FUN_008d20c0(pfVar26,local_c0,in_ECX + 0xc,local_e0);
      if (local_d0 < fVar1 + fVar2) break;
      local_ec = local_ec + 1;
      pfVar25 = pfVar25 + 4;
      pfVar26 = pfVar26 + 4;
      if (iVar22 <= local_ec) {
        return;
      }
    }
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  return;
}



void FUN_008f8980(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
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
  int iVar23;
  float *pfVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  float *local_fc;
  undefined1 local_f0 [16];
  undefined1 local_e0 [16];
  float local_d0;
  float local_c0 [12];
  float local_90 [35];
  
  iVar4 = *param_1;
  iVar5 = *param_2;
  pfVar26 = (float *)param_2[2];
  fVar2 = *pfVar26;
  fVar3 = pfVar26[1];
  fVar6 = pfVar26[2];
  fVar7 = pfVar26[3];
  fVar8 = pfVar26[4];
  fVar9 = pfVar26[5];
  fVar10 = pfVar26[6];
  fVar11 = pfVar26[7];
  fVar12 = pfVar26[8];
  fVar13 = pfVar26[9];
  fVar14 = pfVar26[10];
  fVar15 = pfVar26[0xb];
  fVar16 = pfVar26[0xc];
  fVar17 = pfVar26[0xd];
  fVar18 = pfVar26[0xe];
  fVar19 = pfVar26[0xf];
  pfVar26 = (float *)(iVar5 + 0x10);
  iVar27 = 3;
  pfVar24 = pfVar26;
  do {
    fVar20 = *pfVar24;
    fVar21 = pfVar24[1];
    fVar22 = pfVar24[2];
    pfVar1 = (float *)(((int)local_c0 - (int)pfVar26) + (int)pfVar24);
    *pfVar1 = fVar2 * fVar20 + fVar8 * fVar21 + fVar12 * fVar22 + fVar16;
    pfVar1[1] = fVar3 * fVar20 + fVar9 * fVar21 + fVar13 * fVar22 + fVar17;
    pfVar1[2] = fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22 + fVar18;
    pfVar1[3] = fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22 + fVar19;
    pfVar24 = pfVar24 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar24 = (float *)param_1[2];
  fVar2 = *pfVar24;
  fVar3 = pfVar24[1];
  fVar6 = pfVar24[2];
  fVar7 = pfVar24[3];
  fVar8 = pfVar24[4];
  fVar9 = pfVar24[5];
  fVar10 = pfVar24[6];
  fVar11 = pfVar24[7];
  fVar12 = pfVar24[8];
  fVar13 = pfVar24[9];
  fVar14 = pfVar24[10];
  fVar15 = pfVar24[0xb];
  fVar16 = pfVar24[0xc];
  fVar17 = pfVar24[0xd];
  fVar18 = pfVar24[0xe];
  fVar19 = pfVar24[0xf];
  iVar27 = *(int *)(iVar4 + 0xc);
  pfVar24 = (float *)(iVar4 + 0x10);
  iVar23 = (int)local_90 - (int)pfVar24;
  iVar25 = iVar27;
  do {
    fVar20 = *pfVar24;
    fVar21 = pfVar24[1];
    fVar22 = pfVar24[2];
    pfVar1 = (float *)(iVar23 + (int)pfVar24);
    *pfVar1 = fVar2 * fVar20 + fVar8 * fVar21 + fVar12 * fVar22 + fVar16;
    pfVar1[1] = fVar3 * fVar20 + fVar9 * fVar21 + fVar13 * fVar22 + fVar17;
    pfVar1[2] = fVar6 * fVar20 + fVar10 * fVar21 + fVar14 * fVar22 + fVar18;
    pfVar1[3] = fVar7 * fVar20 + fVar11 * fVar21 + fVar15 * fVar22 + fVar19;
    pfVar24 = pfVar24 + 4;
    iVar25 = iVar25 + -1;
  } while (0 < iVar25);
  FUN_008d1db0(pfVar26,local_f0);
  iVar25 = 0;
  if (0 < iVar27) {
    local_fc = local_90;
    pfVar26 = (float *)(iVar4 + 0x1c);
    while( true ) {
      fVar2 = *pfVar26;
      fVar3 = *(float *)(iVar5 + 0xc);
      FUN_008d20c0(local_fc,local_c0,local_f0,local_e0);
      if (local_d0 < fVar2 + fVar3) break;
      iVar25 = iVar25 + 1;
      local_fc = local_fc + 4;
      pfVar26 = pfVar26 + 4;
      if (iVar27 <= iVar25) {
        return;
      }
    }
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  return;
}



void FUN_008f8b30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008f8980(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f8b70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f8380(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f8bb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f85c0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f8bf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008f80f0(param_2,param_1,param_3,param_4);
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



void FUN_008f8c90(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008f8090;
  local_14 = FUN_008f8b30;
  local_10 = FUN_008f8bb0;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,6,0xb);
  local_18 = &LAB_008f8030;
  local_14 = FUN_008f8980;
  local_10 = FUN_008f85c0;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,0xb,6);
  return;
}



int FUN_008f8db0(undefined4 param_1,int param_2,int *param_3)

{
  short sVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    sVar1 = *(short *)(param_2 + iVar2 * 2);
    if (sVar1 != -1) {
      (**(code **)(*param_3 + 0x10))(sVar1);
      *(undefined2 *)(param_2 + iVar2 * 2) = 0xffff;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return param_2 + 0x20;
}



void FUN_008f8e00(int *param_1,int param_2,undefined4 *param_3)

{
  float *pfVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
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
  int iVar24;
  float *pfVar25;
  int iVar26;
  float local_c0 [8];
  undefined1 local_a0 [16];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float fStack_64;
  float local_40 [15];
  
  piVar2 = (int *)param_1[1];
  iVar3 = *piVar2;
  iVar4 = *(int *)*param_1;
  pfVar25 = (float *)((int *)*param_1)[2];
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar4 + 0x10);
  iVar24 = (int)local_c0 - (int)pfVar25;
  iVar26 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  pfVar25 = (float *)piVar2[2];
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar3 + 0x10);
  iVar24 = (int)local_40 - (int)pfVar25;
  iVar26 = 3;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  FUN_008d0ca0(local_c0,*(undefined4 *)(iVar4 + 0xc),local_40,*(undefined4 *)(iVar3 + 0xc),
               param_2 + 8,0x7f7fffff,0,local_a0);
  if (fStack_84 < fStack_64) {
    *param_3 = local_90;
    param_3[1] = uStack_8c;
    param_3[2] = uStack_88;
    param_3[3] = fStack_84;
    return;
  }
  *param_3 = local_70;
  param_3[1] = uStack_6c;
  param_3[2] = uStack_68;
  param_3[3] = fStack_64;
  return;
}



int FUN_008f8f50(int *param_1,int param_2,int param_3,undefined4 *param_4,int *param_5)

{
  float *pfVar1;
  undefined4 *puVar2;
  int *piVar3;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  short sVar25;
  int iVar26;
  float *pfVar27;
  int iVar28;
  char cVar29;
  int iVar30;
  int unaff_FS_OFFSET;
  uint local_cc;
  uint local_c8;
  float local_c0 [8];
  float local_a0 [12];
  float local_70 [12];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  float fStack_34;
  
  iVar28 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar28 + 0x1a4) < *(uint *)(iVar28 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar28 + 0x1a4);
    *puVar2 = "TtCapsTri3";
    uVar5 = rdtsc();
    puVar2[1] = (int)uVar5;
    *(undefined4 **)(iVar28 + 0x1a4) = puVar2 + 3;
  }
  iVar28 = *(int *)*param_1;
  pfVar27 = (float *)((int *)*param_1)[2];
  piVar3 = (int *)param_1[1];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  iVar4 = *piVar3;
  pfVar27 = (float *)(iVar28 + 0x10);
  cVar29 = '\0';
  iVar26 = (int)local_c0 - (int)pfVar27;
  iVar30 = 2;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar30 = iVar30 + -1;
  } while (iVar30 != 0);
  pfVar27 = (float *)piVar3[2];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  pfVar27 = (float *)(iVar4 + 0x10);
  iVar26 = (int)local_a0 - (int)pfVar27;
  iVar30 = 3;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar30 = iVar30 + -1;
  } while (iVar30 != 0);
  FUN_008d0ca0(local_c0,*(undefined4 *)(iVar28 + 0xc),local_a0,*(undefined4 *)(iVar4 + 0xc),
               param_3 + 8,0x7f7fffff,1,local_70);
  if (fStack_34 <= local_70[7]) {
    *param_4 = local_40;
    param_4[1] = uStack_3c;
    param_4[2] = uStack_38;
    param_4[3] = fStack_34;
  }
  else {
    *param_4 = local_70[4];
    param_4[1] = local_70[5];
    param_4[2] = local_70[6];
    param_4[3] = local_70[7];
  }
  local_cc = (uint)(fStack_34 <= local_70[7]);
  local_c8 = 0;
  pfVar27 = local_70;
  do {
    sVar25 = *(short *)(param_3 + local_c8 * 2);
    if (*(float *)(param_1[2] + 8) <= pfVar27[7]) {
      if (sVar25 != -1) {
        (**(code **)(*(int *)param_1[3] + 0x10))(sVar25);
        sVar25 = -1;
      }
      goto LAB_008f91d0;
    }
    if (sVar25 == -1) {
      if (param_5[0xc10] == 0) {
        sVar25 = (**(code **)(*(int *)param_1[3] + 8))(*param_1,param_1[1],param_1[2],pfVar27);
        if (sVar25 != -1) goto LAB_008f9170;
      }
      else {
        iVar28 = (**(code **)(*(int *)param_1[3] + 0xc))(1);
        if (iVar28 == 0) {
          piVar3 = *(int **)param_5[0xc10];
          *(int **)param_5[0xc10] = piVar3 + 3;
          *piVar3 = *param_5;
          piVar3[2] = param_3;
          piVar3[1] = param_2;
          goto LAB_008f9170;
        }
      }
    }
    else {
LAB_008f9170:
      pfVar1 = (float *)*param_5;
      fVar6 = *pfVar27;
      fVar7 = pfVar27[1];
      fVar8 = pfVar27[2];
      fVar9 = pfVar27[3];
      cVar29 = cVar29 + '\x01';
      *param_5 = (int)(pfVar1 + 0xc);
      *pfVar1 = fVar6;
      pfVar1[1] = fVar7;
      pfVar1[2] = fVar8;
      pfVar1[3] = fVar9;
      fVar6 = pfVar27[5];
      fVar7 = pfVar27[6];
      fVar8 = pfVar27[7];
      pfVar1[4] = pfVar27[4];
      pfVar1[5] = fVar6;
      pfVar1[6] = fVar7;
      pfVar1[7] = fVar8;
      *(short *)(pfVar1 + 8) = sVar25;
      if ((local_c8 == local_cc) && (param_5[0xc10] != 0)) {
        **(int **)(param_5[0xc10] + 4) = (int)pfVar1;
        *(int *)(param_5[0xc10] + 4) = *(int *)(param_5[0xc10] + 4) + 4;
      }
    }
LAB_008f91d0:
    *(short *)(param_3 + local_c8 * 2) = sVar25;
    local_c8 = local_c8 + 1;
    pfVar27 = pfVar27 + 8;
    if (2 < (int)local_c8) {
      iVar28 = *(int *)(unaff_FS_OFFSET + 0x2c);
      *(char *)(param_2 + 2) = cVar29;
      iVar28 = *(int *)(iVar28 + _tls_index * 4);
      if (*(uint *)(iVar28 + 0x1a4) < *(uint *)(iVar28 + 0x1a8)) {
        puVar2 = *(undefined4 **)(iVar28 + 0x1a4);
        *puVar2 = &DAT_00a9610c;
        uVar5 = rdtsc();
        puVar2[1] = (int)uVar5;
        *(undefined4 **)(iVar28 + 0x1a4) = puVar2 + 3;
      }
      return param_3 + 0x20;
    }
  } while( true );
}



void FUN_008f9250(void)

{
  undefined1 *local_30;
  undefined1 *local_2c;
  code *local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  code *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *local_c;
  code *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_14 = 0;
  local_10 = 0;
  local_3 = 0;
  local_18 = 0;
  local_4 = 0;
  local_30 = &LAB_008f8d70;
  local_8 = FUN_008f8f50;
  local_c = FUN_008f8e00;
  local_28 = FUN_008f8db0;
  local_24 = &LAB_008f8d20;
  local_20 = &LAB_008f8d50;
  local_1c = FUN_0060d0a0;
  local_2c = &LAB_008f8df0;
  FUN_008daeb0(&local_30,8,6);
  return;
}



void FUN_008f9320(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
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
    FUN_00935cc0(param_2,param_1,local_40,&local_a0,&local_70);
    return;
  }
  FUN_00935cc0(param_2,param_1,local_40,&local_a0,0);
  return;
}



void FUN_008f9470(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  short sVar25;
  int iVar26;
  float *pfVar27;
  int in_ECX;
  int iVar28;
  short *psVar29;
  int unaff_FS_OFFSET;
  int local_c4;
  float local_c0 [8];
  float local_a0 [24];
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsuleTri";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  pfVar27 = (float *)param_1[2];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  iVar4 = *param_2;
  pfVar27 = (float *)(iVar2 + 0x10);
  iVar26 = (int)local_c0 - (int)pfVar27;
  iVar28 = 2;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  pfVar27 = (float *)param_2[2];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  pfVar27 = (float *)(iVar4 + 0x10);
  iVar26 = (int)local_40 - (int)pfVar27;
  iVar28 = 3;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  FUN_008d0ca0(local_c0,*(undefined4 *)(iVar2 + 0xc),local_40,*(undefined4 *)(iVar4 + 0xc),
               in_ECX + 0x14,*(undefined4 *)(param_3 + 8),1,local_a0);
  pfVar27 = local_a0;
  psVar29 = (short *)(in_ECX + 0xc);
  local_c4 = 3;
  do {
    if (*(float *)(param_3 + 8) <= pfVar27[7]) {
      if (*psVar29 != -1) {
        (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*psVar29);
        *psVar29 = -1;
      }
    }
    else {
      if (*psVar29 == -1) {
        sVar25 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar27);
        *psVar29 = sVar25;
        if (sVar25 == -1) goto LAB_008f963c;
      }
      pfVar1 = (float *)*param_4;
      fVar6 = *pfVar27;
      fVar7 = pfVar27[1];
      fVar8 = pfVar27[2];
      fVar9 = pfVar27[3];
      *param_4 = (int)(pfVar1 + 0xc);
      *pfVar1 = fVar6;
      pfVar1[1] = fVar7;
      pfVar1[2] = fVar8;
      pfVar1[3] = fVar9;
      fVar6 = pfVar27[5];
      fVar7 = pfVar27[6];
      fVar8 = pfVar27[7];
      pfVar1[4] = pfVar27[4];
      pfVar1[5] = fVar6;
      pfVar1[6] = fVar7;
      pfVar1[7] = fVar8;
      *(short *)(pfVar1 + 8) = *psVar29;
    }
LAB_008f963c:
    psVar29 = psVar29 + 1;
    pfVar27 = pfVar27 + 8;
    local_c4 = local_c4 + -1;
    if (local_c4 == 0) {
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
  } while( true );
}



void FUN_008f96a0(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int in_ECX;
  int iVar27;
  int unaff_FS_OFFSET;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *local_d0;
  int *local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_84;
  float local_60 [8];
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsTriangle";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  iVar4 = *param_2;
  local_d0 = param_1;
  pfVar26 = (float *)param_1[2];
  local_cc = param_2;
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar2 + 0x10);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar27 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar4 + 0x10);
  iVar25 = (int)local_40 - (int)pfVar26;
  iVar27 = 3;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  FUN_008d0ca0(local_60,*(undefined4 *)(iVar2 + 0xc),local_40,*(undefined4 *)(iVar4 + 0xc),
               in_ECX + 0x14,*(undefined4 *)(param_3 + 8),0,&local_c0);
  if (fStack_84 <= fStack_a4) {
    if (*(float *)(param_3 + 8) <= fStack_84) goto LAB_008f986c;
    local_f0 = local_a0;
    uStack_ec = uStack_9c;
    uStack_e8 = uStack_98;
    uStack_e4 = uStack_94;
  }
  else {
    if (*(float *)(param_3 + 8) <= fStack_a4) goto LAB_008f986c;
    local_f0 = local_c0;
    uStack_ec = uStack_bc;
    uStack_e8 = uStack_b8;
    uStack_e4 = uStack_b4;
  }
  (**(code **)(*param_4 + 4))(&local_f0);
LAB_008f986c:
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



void FUN_008f98c0(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  int unaff_FS_OFFSET;
  undefined1 local_104 [20];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int *local_d0;
  int *local_cc;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float fStack_84;
  float local_60 [8];
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsTriangle";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008d1ef0(*param_2 + 0x10,local_104);
  iVar2 = *param_1;
  iVar4 = *param_2;
  local_d0 = param_1;
  pfVar26 = (float *)param_1[2];
  local_cc = param_2;
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar2 + 0x10);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar27 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar4 + 0x10);
  iVar25 = (int)local_40 - (int)pfVar26;
  iVar27 = 3;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  FUN_008d0ca0(local_60,*(undefined4 *)(iVar2 + 0xc),local_40,*(undefined4 *)(iVar4 + 0xc),local_104
               ,*(undefined4 *)(param_3 + 8),0,&local_c0);
  if (fStack_84 <= fStack_a4) {
    if (*(float *)(param_3 + 8) <= fStack_84) goto LAB_008f9a9c;
    local_f0 = local_a0;
    uStack_ec = uStack_9c;
    uStack_e8 = uStack_98;
    uStack_e4 = uStack_94;
  }
  else {
    if (*(float *)(param_3 + 8) <= fStack_a4) goto LAB_008f9a9c;
    local_f0 = local_c0;
    uStack_ec = uStack_bc;
    uStack_e8 = uStack_b8;
    uStack_e4 = uStack_b4;
  }
  (**(code **)(*param_4 + 4))(&local_f0);
LAB_008f9a9c:
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



void FUN_008f9af0(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int in_ECX;
  int iVar27;
  int unaff_FS_OFFSET;
  undefined1 local_c0 [28];
  float local_a4;
  float local_84;
  float local_60 [8];
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsTriangle";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  pfVar26 = (float *)param_1[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  iVar4 = *param_2;
  pfVar26 = (float *)(iVar2 + 0x10);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar27 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar4 + 0x10);
  iVar25 = (int)local_40 - (int)pfVar26;
  iVar27 = 3;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  FUN_008d0ca0(local_60,*(undefined4 *)(iVar2 + 0xc),local_40,*(undefined4 *)(iVar4 + 0xc),
               in_ECX + 0x14,*(undefined4 *)(param_3 + 8),0,local_c0);
  if ((local_a4 < 0.0) || (local_84 < 0.0)) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
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



void FUN_008f9cc0(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
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
  int iVar24;
  float *pfVar25;
  int iVar26;
  int unaff_FS_OFFSET;
  undefined1 local_d4 [20];
  undefined1 local_c0 [28];
  float local_a4;
  float local_84;
  float local_60 [8];
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsTriangle";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008d1ef0(*param_2 + 0x10,local_d4);
  pfVar25 = (float *)param_1[2];
  iVar2 = *param_1;
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar2 + 0x10);
  iVar24 = (int)local_60 - (int)pfVar25;
  iVar26 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  pfVar25 = (float *)param_2[2];
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(*param_2 + 0x10);
  iVar24 = (int)local_40 - (int)pfVar25;
  iVar26 = 3;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar26 = iVar26 + -1;
  } while (iVar26 != 0);
  FUN_008d0ca0(local_60,*(undefined4 *)(iVar2 + 0xc),local_40,*(undefined4 *)(*param_2 + 0xc),
               local_d4,*(undefined4 *)(param_3 + 8),0,local_c0);
  if ((local_a4 < 0.0) || (local_84 < 0.0)) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008f9ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008f9af0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f9ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008f9cc0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f9f20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f96a0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f9f60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008f98c0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008f9fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008f9470(param_2,param_1,param_3,param_4);
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



void FUN_008fa040(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008f9410;
  local_14 = FUN_008f9ee0;
  local_10 = FUN_008f9f60;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,6,8);
  local_18 = &LAB_008f92c0;
  local_14 = FUN_008f9cc0;
  local_10 = FUN_008f98c0;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,8,6);
  return;
}



void FUN_008fa0d0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  short *psVar2;
  
  psVar2 = (short *)(in_ECX + 3);
  iVar1 = 3;
  do {
    if (*psVar2 != -1) {
      (**(code **)(*(int *)in_ECX[2] + 0x10))(*psVar2);
    }
    psVar2 = psVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (in_ECX != (undefined4 *)0x0) {
    (**(code **)*in_ECX)(1);
  }
  return;
}



void FUN_008fa180(int *param_1,int *param_2,int param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  short sVar25;
  int iVar26;
  float *pfVar27;
  int in_ECX;
  int iVar28;
  short *psVar29;
  int unaff_FS_OFFSET;
  int local_b4;
  float local_b0 [15];
  undefined4 local_74;
  undefined4 local_54;
  float local_50 [8];
  float local_30 [11];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsCaps";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  local_b0[7] = *(float *)(param_3 + 8);
  iVar2 = *param_1;
  pfVar27 = (float *)param_1[2];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  iVar4 = *param_2;
  pfVar27 = (float *)(iVar2 + 0x10);
  iVar26 = (int)local_30 - (int)pfVar27;
  iVar28 = 2;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  pfVar27 = (float *)param_2[2];
  fVar6 = *pfVar27;
  fVar7 = pfVar27[1];
  fVar8 = pfVar27[2];
  fVar9 = pfVar27[3];
  fVar10 = pfVar27[4];
  fVar11 = pfVar27[5];
  fVar12 = pfVar27[6];
  fVar13 = pfVar27[7];
  fVar14 = pfVar27[8];
  fVar15 = pfVar27[9];
  fVar16 = pfVar27[10];
  fVar17 = pfVar27[0xb];
  fVar18 = pfVar27[0xc];
  fVar19 = pfVar27[0xd];
  fVar20 = pfVar27[0xe];
  fVar21 = pfVar27[0xf];
  pfVar27 = (float *)(iVar4 + 0x10);
  iVar26 = (int)local_50 - (int)pfVar27;
  iVar28 = 2;
  do {
    fVar22 = *pfVar27;
    fVar23 = pfVar27[1];
    fVar24 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  local_74 = local_b0[7];
  local_54 = local_b0[7];
  FUN_008d0290(local_30,*(undefined4 *)(iVar2 + 0xc),local_50,*(undefined4 *)(iVar4 + 0xc),local_b0)
  ;
  pfVar27 = local_b0;
  psVar29 = (short *)(in_ECX + 0xc);
  local_b4 = 3;
  do {
    if (*(float *)(param_3 + 8) <= pfVar27[7]) {
      if (*psVar29 != -1) {
        (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*psVar29);
        *psVar29 = -1;
      }
    }
    else {
      if (*psVar29 == -1) {
        sVar25 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar27);
        *psVar29 = sVar25;
        if (sVar25 == -1) goto LAB_008fa34c;
      }
      pfVar1 = (float *)*param_4;
      fVar6 = *pfVar27;
      fVar7 = pfVar27[1];
      fVar8 = pfVar27[2];
      fVar9 = pfVar27[3];
      *param_4 = (int)(pfVar1 + 0xc);
      *pfVar1 = fVar6;
      pfVar1[1] = fVar7;
      pfVar1[2] = fVar8;
      pfVar1[3] = fVar9;
      fVar6 = pfVar27[5];
      fVar7 = pfVar27[6];
      fVar8 = pfVar27[7];
      pfVar1[4] = pfVar27[4];
      pfVar1[5] = fVar6;
      pfVar1[6] = fVar7;
      pfVar1[7] = fVar8;
      *(short *)(pfVar1 + 8) = *psVar29;
    }
LAB_008fa34c:
    psVar29 = psVar29 + 1;
    pfVar27 = pfVar27 + 8;
    local_b4 = local_b4 + -1;
    if (local_b4 == 0) {
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
  } while( true );
}



void FUN_008fa3b0(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
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
  int iVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  int unaff_FS_OFFSET;
  float local_80 [8];
  float local_60 [8];
  undefined1 local_40 [32];
  int *local_20;
  int *local_1c;
  
  iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar26 + 0x1a4) < *(uint *)(iVar26 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar26 + 0x1a4);
    *puVar2 = "TtCapsCaps";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar26 + 0x1a4) = puVar2 + 3;
  }
  iVar26 = *param_1;
  iVar3 = *param_2;
  local_20 = param_1;
  pfVar25 = (float *)param_1[2];
  local_1c = param_2;
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar26 + 0x10);
  iVar24 = (int)local_60 - (int)pfVar25;
  iVar27 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar25 = (float *)param_2[2];
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar3 + 0x10);
  iVar24 = (int)local_80 - (int)pfVar25;
  iVar27 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  iVar26 = FUN_008d0a10(local_60,*(undefined4 *)(iVar26 + 0xc),local_80,*(undefined4 *)(iVar3 + 0xc)
                        ,*(undefined4 *)(param_3 + 8),local_40);
  if (iVar26 == 0) {
    (**(code **)(*param_4 + 4))(local_40);
  }
  iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar26 + 0x1a4) < *(uint *)(iVar26 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar26 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar26 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fa580(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
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
  int iVar24;
  float *pfVar25;
  int iVar26;
  int iVar27;
  int unaff_FS_OFFSET;
  float local_80 [8];
  float local_60 [8];
  undefined1 local_40 [32];
  int *local_20;
  int *local_1c;
  
  iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar26 + 0x1a4) < *(uint *)(iVar26 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar26 + 0x1a4);
    *puVar2 = "TtCapsCaps";
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar26 + 0x1a4) = puVar2 + 3;
  }
  iVar26 = *param_1;
  iVar3 = *param_2;
  local_20 = param_1;
  pfVar25 = (float *)param_1[2];
  local_1c = param_2;
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar26 + 0x10);
  iVar24 = (int)local_60 - (int)pfVar25;
  iVar27 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar25 = (float *)param_2[2];
  fVar5 = *pfVar25;
  fVar6 = pfVar25[1];
  fVar7 = pfVar25[2];
  fVar8 = pfVar25[3];
  fVar9 = pfVar25[4];
  fVar10 = pfVar25[5];
  fVar11 = pfVar25[6];
  fVar12 = pfVar25[7];
  fVar13 = pfVar25[8];
  fVar14 = pfVar25[9];
  fVar15 = pfVar25[10];
  fVar16 = pfVar25[0xb];
  fVar17 = pfVar25[0xc];
  fVar18 = pfVar25[0xd];
  fVar19 = pfVar25[0xe];
  fVar20 = pfVar25[0xf];
  pfVar25 = (float *)(iVar3 + 0x10);
  iVar24 = (int)local_80 - (int)pfVar25;
  iVar27 = 2;
  do {
    fVar21 = *pfVar25;
    fVar22 = pfVar25[1];
    fVar23 = pfVar25[2];
    pfVar1 = (float *)(iVar24 + (int)pfVar25);
    *pfVar1 = fVar5 * fVar21 + fVar9 * fVar22 + fVar13 * fVar23 + fVar17;
    pfVar1[1] = fVar6 * fVar21 + fVar10 * fVar22 + fVar14 * fVar23 + fVar18;
    pfVar1[2] = fVar7 * fVar21 + fVar11 * fVar22 + fVar15 * fVar23 + fVar19;
    pfVar1[3] = fVar8 * fVar21 + fVar12 * fVar22 + fVar16 * fVar23 + fVar20;
    pfVar25 = pfVar25 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  iVar26 = FUN_008d0a10(local_60,*(undefined4 *)(iVar26 + 0xc),local_80,*(undefined4 *)(iVar3 + 0xc)
                        ,*(undefined4 *)(param_3 + 8),local_40);
  if (iVar26 == 0) {
    (**(code **)(*param_4 + 4))(local_40);
  }
  iVar26 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar26 + 0x1a4) < *(uint *)(iVar26 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar26 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar4 = rdtsc();
    puVar2[1] = (int)uVar4;
    *(undefined4 **)(iVar26 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fa750(int *param_1,int *param_2,undefined4 param_3,int *param_4)

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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  int iVar27;
  int unaff_FS_OFFSET;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80 [7];
  float fStack_64;
  float local_60 [7];
  float fStack_44;
  undefined1 local_40 [32];
  float local_20;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtCapsCaps";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  pfVar26 = (float *)param_1[2];
  iVar2 = *param_1;
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  iVar4 = *param_2;
  pfVar26 = (float *)(iVar2 + 0x10);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar27 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  pfVar26 = (float *)param_2[2];
  fVar6 = *pfVar26;
  fVar7 = pfVar26[1];
  fVar8 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar4 + 0x10);
  iVar25 = (int)local_80 - (int)pfVar26;
  iVar27 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar6 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar7 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar8 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  local_90 = local_60[4] - local_60[0];
  fStack_8c = local_60[5] - local_60[1];
  fStack_88 = local_60[6] - local_60[2];
  fStack_84 = fStack_44 - local_60[3];
  local_a0 = local_80[4] - local_80[0];
  fStack_9c = local_80[5] - local_80[1];
  fStack_98 = local_80[6] - local_80[2];
  fStack_94 = fStack_64 - local_80[3];
  FUN_008d1a30(local_60,&local_90,local_80,&local_a0,local_40);
  fVar6 = *(float *)(iVar4 + 0xc) + *(float *)(iVar2 + 0xc);
  if (local_20 < fVar6 * fVar6) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
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



void FUN_008fa950(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_8 = 0;
  local_7 = 0;
  local_18 = &LAB_008fa110;
  local_14 = FUN_008fa750;
  local_10 = FUN_008fa580;
  local_c = FUN_00935cc0;
  FUN_008dadd0(&local_18,8,8);
  return;
}



void FUN_008fa9a0(void)

{
  undefined4 *in_ECX;
  
  if (*(short *)(in_ECX + 3) != -1) {
    (**(code **)(*(int *)in_ECX[2] + 0x10))(*(short *)(in_ECX + 3));
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_008faa30(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined2 uVar17;
  undefined4 uVar18;
  uint uVar19;
  int iVar20;
  int in_ECX;
  int unaff_FS_OFFSET;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float local_20 [7];
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereBox";
    uVar7 = rdtsc();
    puVar2[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = param_1[2];
  pfVar3 = (float *)*param_4;
  uVar18 = FUN_0088fd10(param_2[2],(float *)(iVar1 + 0x30));
  iVar4 = *param_2;
  iVar5 = *param_1;
  fVar23 = ABS(local_20[2]);
  auVar28._0_8_ = CONCAT44(local_20[1],local_20[0]) & 0x7fffffff7fffffff;
  auVar28._8_4_ = fVar23;
  auVar28._12_4_ = ABS(local_20[3]);
  auVar28 = minps(auVar28,*(undefined1 (*) [16])(iVar4 + 0x10));
  auVar29._0_4_ = auVar28._0_4_ - ABS(local_20[0]);
  auVar29._4_4_ = auVar28._4_4_ - ABS(local_20[1]);
  auVar29._8_4_ = auVar28._8_4_ - fVar23;
  auVar29._12_4_ = auVar28._12_4_ - ABS(local_20[3]);
  uVar19 = movmskps(uVar18,auVar29);
  if ((uVar19 & 7) == 0) {
    pfVar6 = (float *)param_2[2];
    fVar9 = ABS(local_20[0]) - *(float *)(iVar4 + 0x10);
    fVar24 = ABS(local_20[1]) - *(float *)(iVar4 + 0x14);
    fVar23 = fVar23 - *(float *)(iVar4 + 0x18);
    if (fVar9 <= fVar24) {
      if (fVar24 <= fVar23) goto LAB_008fac44;
      fVar9 = pfVar6[5];
      fVar10 = pfVar6[6];
      fVar11 = pfVar6[7];
      fVar23 = pfVar3[7];
      pfVar3[4] = pfVar6[4];
      pfVar3[5] = fVar9;
      pfVar3[6] = fVar10;
      pfVar3[7] = fVar11;
      pfVar3[7] = fVar23;
      iVar20 = 1;
    }
    else if (fVar9 <= fVar23) {
LAB_008fac44:
      fVar9 = pfVar6[9];
      fVar10 = pfVar6[10];
      fVar11 = pfVar6[0xb];
      fVar24 = pfVar3[7];
      pfVar3[4] = pfVar6[8];
      pfVar3[5] = fVar9;
      pfVar3[6] = fVar10;
      pfVar3[7] = fVar11;
      pfVar3[7] = fVar24;
      iVar20 = 2;
      fVar24 = fVar23;
    }
    else {
      fVar24 = pfVar6[1];
      fVar10 = pfVar6[2];
      fVar11 = pfVar6[3];
      fVar23 = pfVar3[7];
      pfVar3[4] = *pfVar6;
      pfVar3[5] = fVar24;
      pfVar3[6] = fVar10;
      pfVar3[7] = fVar11;
      pfVar3[7] = fVar23;
      iVar20 = 0;
      fVar24 = fVar9;
    }
    if (local_20[iVar20] < 0.0) {
      pfVar3[4] = -pfVar3[4];
      pfVar3[5] = -pfVar3[5];
      pfVar3[6] = -pfVar3[6];
      pfVar3[7] = -pfVar3[7];
    }
    fVar23 = (fVar24 - *(float *)(iVar4 + 0xc)) - *(float *)(iVar5 + 0xc);
  }
  else {
    fVar23 = auVar29._4_4_ * auVar29._4_4_;
    fVar24 = auVar29._8_4_ * auVar29._8_4_;
    auVar26._4_4_ = fVar23;
    auVar26._0_4_ = fVar23;
    auVar26._8_4_ = fVar23;
    auVar26._12_4_ = fVar23;
    auVar27._4_12_ = auVar26._4_12_;
    auVar27._0_4_ = fVar23 + auVar29._0_4_ * auVar29._0_4_;
    fVar23 = fVar24 + auVar27._0_4_;
    auVar8._4_4_ = fVar24;
    auVar8._0_4_ = fVar23;
    auVar8._8_4_ = fVar24;
    auVar8._12_4_ = fVar24;
    auVar28 = rsqrtss(auVar27,auVar8);
    fVar24 = auVar28._0_4_;
    fVar24 = fVar24 * 0.5 * (3.0 - fVar23 * fVar24 * fVar24);
    fVar23 = fVar23 * fVar24 - (*(float *)(iVar4 + 0xc) + *(float *)(iVar5 + 0xc));
    if (*(float *)(param_3 + 8) < fVar23) {
      if (*(short *)(in_ECX + 0xc) != -1) {
        (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*(short *)(in_ECX + 0xc));
        *(undefined2 *)(in_ECX + 0xc) = 0xffff;
      }
      goto LAB_008fad09;
    }
    pfVar6 = (float *)param_2[2];
    fVar9 = pfVar6[9];
    fVar10 = pfVar6[10];
    fVar11 = pfVar6[0xb];
    fVar12 = pfVar6[5];
    fVar13 = pfVar6[6];
    fVar14 = pfVar6[7];
    fVar21 = -(float)((uint)(fVar24 * auVar29._0_4_) ^ (uint)local_20[0] & 0x80000000);
    fVar22 = -(float)((uint)(fVar24 * auVar29._4_4_) ^ (uint)local_20[1] & 0x80000000);
    fVar25 = -(float)((uint)(fVar24 * auVar29._8_4_) ^ (uint)local_20[2] & 0x80000000);
    fVar24 = pfVar6[1];
    fVar15 = pfVar6[2];
    fVar16 = pfVar6[3];
    pfVar3[4] = *pfVar6 * fVar21 + pfVar6[4] * fVar22 + pfVar6[8] * fVar25;
    pfVar3[5] = fVar24 * fVar21 + fVar12 * fVar22 + fVar9 * fVar25;
    pfVar3[6] = fVar15 * fVar21 + fVar13 * fVar22 + fVar10 * fVar25;
    pfVar3[7] = fVar16 * fVar21 + fVar14 * fVar22 + fVar11 * fVar25;
  }
  fVar24 = -fVar23 - *(float *)(iVar5 + 0xc);
  fVar9 = *(float *)(iVar1 + 0x34);
  fVar10 = *(float *)(iVar1 + 0x38);
  fVar11 = *(float *)(iVar1 + 0x3c);
  *pfVar3 = *(float *)(iVar1 + 0x30) + fVar24 * pfVar3[4];
  pfVar3[1] = fVar9 + fVar24 * pfVar3[5];
  pfVar3[2] = fVar10 + fVar24 * pfVar3[6];
  pfVar3[3] = fVar11 + fVar24 * pfVar3[7];
  pfVar3[7] = fVar23;
  if (*(short *)(in_ECX + 0xc) == -1) {
    uVar17 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar3);
    *(undefined2 *)(in_ECX + 0xc) = uVar17;
  }
  if (*(short *)(in_ECX + 0xc) != -1) {
    *(short *)(pfVar3 + 8) = *(short *)(in_ECX + 0xc);
    *param_4 = *param_4 + 0x30;
  }
LAB_008fad09:
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar2[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fad60(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 extraout_EDX;
  uint uVar9;
  int unaff_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int *local_1c;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereBox";
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = param_1[2];
  local_20 = param_1;
  local_1c = param_2;
  FUN_0088fd10(param_2[2],(float *)(iVar1 + 0x30));
  iVar3 = *param_2;
  iVar4 = *param_1;
  fVar12 = ABS(local_50[2]);
  auVar16._0_8_ = CONCAT44(local_50[1],local_50[0]) & 0x7fffffff7fffffff;
  auVar16._8_4_ = fVar12;
  auVar16._12_4_ = ABS(local_50[3]);
  auVar16 = minps(auVar16,*(undefined1 (*) [16])(iVar3 + 0x10));
  auVar17._0_4_ = auVar16._0_4_ - ABS(local_50[0]);
  auVar17._4_4_ = auVar16._4_4_ - ABS(local_50[1]);
  auVar17._8_4_ = auVar16._8_4_ - fVar12;
  auVar17._12_4_ = auVar16._12_4_ - ABS(local_50[3]);
  uVar9 = movmskps(extraout_EDX,auVar17);
  if ((uVar9 & 7) == 0) {
    pfVar5 = (float *)param_2[2];
    fVar10 = ABS(local_50[0]) - *(float *)(iVar3 + 0x10);
    fVar13 = ABS(local_50[1]) - *(float *)(iVar3 + 0x14);
    fVar12 = fVar12 - *(float *)(iVar3 + 0x18);
    if (fVar10 <= fVar13) {
      if (fVar13 <= fVar12) goto LAB_008faf74;
      local_30 = pfVar5[4];
      fStack_2c = pfVar5[5];
      fStack_28 = pfVar5[6];
      iVar8 = 1;
    }
    else if (fVar10 <= fVar12) {
LAB_008faf74:
      local_30 = pfVar5[8];
      fStack_2c = pfVar5[9];
      fStack_28 = pfVar5[10];
      iVar8 = 2;
      fVar13 = fVar12;
    }
    else {
      local_30 = *pfVar5;
      fStack_2c = pfVar5[1];
      fStack_28 = pfVar5[2];
      iVar8 = 0;
      fVar13 = fVar10;
    }
    if (local_50[iVar8] < 0.0) {
      local_30 = -local_30;
      fStack_2c = -fStack_2c;
      fStack_28 = -fStack_28;
      fStack_24 = -fStack_24;
    }
    fVar12 = (fVar13 - *(float *)(iVar3 + 0xc)) - *(float *)(iVar4 + 0xc);
  }
  else {
    fVar12 = auVar17._4_4_ * auVar17._4_4_;
    fVar13 = auVar17._8_4_ * auVar17._8_4_;
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar12;
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = fVar12 + auVar17._0_4_ * auVar17._0_4_;
    fVar12 = fVar13 + auVar15._0_4_;
    auVar7._4_4_ = fVar13;
    auVar7._0_4_ = fVar12;
    auVar7._8_4_ = fVar13;
    auVar7._12_4_ = fVar13;
    auVar16 = rsqrtss(auVar15,auVar7);
    fVar13 = auVar16._0_4_;
    fVar13 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
    fVar12 = fVar12 * fVar13 - (*(float *)(iVar3 + 0xc) + *(float *)(iVar4 + 0xc));
    if (*(float *)(param_3 + 8) < fVar12) goto LAB_008faff0;
    pfVar5 = (float *)param_2[2];
    fVar10 = -(float)((uint)(fVar13 * auVar17._0_4_) ^ (uint)local_50[0] & 0x80000000);
    fVar11 = -(float)((uint)(fVar13 * auVar17._4_4_) ^ (uint)local_50[1] & 0x80000000);
    fVar13 = -(float)((uint)(fVar13 * auVar17._8_4_) ^ (uint)local_50[2] & 0x80000000);
    local_30 = *pfVar5 * fVar10 + pfVar5[4] * fVar11 + pfVar5[8] * fVar13;
    fStack_2c = pfVar5[1] * fVar10 + pfVar5[5] * fVar11 + pfVar5[9] * fVar13;
    fStack_28 = pfVar5[2] * fVar10 + pfVar5[6] * fVar11 + pfVar5[10] * fVar13;
    fStack_24 = pfVar5[3] * fVar10 + pfVar5[7] * fVar11 + pfVar5[0xb] * fVar13;
  }
  fVar13 = -fVar12 - *(float *)(iVar4 + 0xc);
  local_40 = *(float *)(iVar1 + 0x30) + fVar13 * local_30;
  fStack_3c = *(float *)(iVar1 + 0x34) + fVar13 * fStack_2c;
  fStack_38 = *(float *)(iVar1 + 0x38) + fVar13 * fStack_28;
  fStack_34 = *(float *)(iVar1 + 0x3c) + fVar13 * fStack_24;
  fStack_24 = fVar12;
  (**(code **)(*param_4 + 4))(&local_40);
LAB_008faff0:
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fb040(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined4 extraout_EDX;
  uint uVar9;
  int unaff_FS_OFFSET;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int *local_1c;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereBox";
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = param_1[2];
  local_20 = param_1;
  local_1c = param_2;
  FUN_0088fd10(param_2[2],(float *)(iVar1 + 0x30));
  iVar3 = *param_2;
  iVar4 = *param_1;
  fVar12 = ABS(local_50[2]);
  auVar16._0_8_ = CONCAT44(local_50[1],local_50[0]) & 0x7fffffff7fffffff;
  auVar16._8_4_ = fVar12;
  auVar16._12_4_ = ABS(local_50[3]);
  auVar16 = minps(auVar16,*(undefined1 (*) [16])(iVar3 + 0x10));
  auVar17._0_4_ = auVar16._0_4_ - ABS(local_50[0]);
  auVar17._4_4_ = auVar16._4_4_ - ABS(local_50[1]);
  auVar17._8_4_ = auVar16._8_4_ - fVar12;
  auVar17._12_4_ = auVar16._12_4_ - ABS(local_50[3]);
  uVar9 = movmskps(extraout_EDX,auVar17);
  if ((uVar9 & 7) == 0) {
    pfVar5 = (float *)param_2[2];
    fVar10 = ABS(local_50[0]) - *(float *)(iVar3 + 0x10);
    fVar13 = ABS(local_50[1]) - *(float *)(iVar3 + 0x14);
    fVar12 = fVar12 - *(float *)(iVar3 + 0x18);
    if (fVar10 <= fVar13) {
      if (fVar13 <= fVar12) goto LAB_008fb254;
      local_30 = pfVar5[4];
      fStack_2c = pfVar5[5];
      fStack_28 = pfVar5[6];
      iVar8 = 1;
    }
    else if (fVar10 <= fVar12) {
LAB_008fb254:
      local_30 = pfVar5[8];
      fStack_2c = pfVar5[9];
      fStack_28 = pfVar5[10];
      iVar8 = 2;
      fVar13 = fVar12;
    }
    else {
      local_30 = *pfVar5;
      fStack_2c = pfVar5[1];
      fStack_28 = pfVar5[2];
      iVar8 = 0;
      fVar13 = fVar10;
    }
    if (local_50[iVar8] < 0.0) {
      local_30 = -local_30;
      fStack_2c = -fStack_2c;
      fStack_28 = -fStack_28;
      fStack_24 = -fStack_24;
    }
    fVar12 = (fVar13 - *(float *)(iVar3 + 0xc)) - *(float *)(iVar4 + 0xc);
  }
  else {
    fVar12 = auVar17._4_4_ * auVar17._4_4_;
    fVar13 = auVar17._8_4_ * auVar17._8_4_;
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar12;
    auVar14._8_4_ = fVar12;
    auVar14._12_4_ = fVar12;
    auVar15._4_12_ = auVar14._4_12_;
    auVar15._0_4_ = fVar12 + auVar17._0_4_ * auVar17._0_4_;
    fVar12 = fVar13 + auVar15._0_4_;
    auVar7._4_4_ = fVar13;
    auVar7._0_4_ = fVar12;
    auVar7._8_4_ = fVar13;
    auVar7._12_4_ = fVar13;
    auVar16 = rsqrtss(auVar15,auVar7);
    fVar13 = auVar16._0_4_;
    fVar13 = fVar13 * 0.5 * (3.0 - fVar12 * fVar13 * fVar13);
    fVar12 = fVar12 * fVar13 - (*(float *)(iVar3 + 0xc) + *(float *)(iVar4 + 0xc));
    if (*(float *)(param_3 + 8) < fVar12) goto LAB_008fb2d0;
    pfVar5 = (float *)param_2[2];
    fVar10 = -(float)((uint)(fVar13 * auVar17._0_4_) ^ (uint)local_50[0] & 0x80000000);
    fVar11 = -(float)((uint)(fVar13 * auVar17._4_4_) ^ (uint)local_50[1] & 0x80000000);
    fVar13 = -(float)((uint)(fVar13 * auVar17._8_4_) ^ (uint)local_50[2] & 0x80000000);
    local_30 = *pfVar5 * fVar10 + pfVar5[4] * fVar11 + pfVar5[8] * fVar13;
    fStack_2c = pfVar5[1] * fVar10 + pfVar5[5] * fVar11 + pfVar5[9] * fVar13;
    fStack_28 = pfVar5[2] * fVar10 + pfVar5[6] * fVar11 + pfVar5[10] * fVar13;
    fStack_24 = pfVar5[3] * fVar10 + pfVar5[7] * fVar11 + pfVar5[0xb] * fVar13;
  }
  fVar13 = -fVar12 - *(float *)(iVar4 + 0xc);
  local_40 = *(float *)(iVar1 + 0x30) + fVar13 * local_30;
  fStack_3c = *(float *)(iVar1 + 0x34) + fVar13 * fStack_2c;
  fStack_38 = *(float *)(iVar1 + 0x38) + fVar13 * fStack_28;
  fStack_34 = *(float *)(iVar1 + 0x3c) + fVar13 * fStack_24;
  fStack_24 = fVar12;
  (**(code **)(*param_4 + 4))(&local_40);
LAB_008fb2d0:
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fb320(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  float fVar7;
  int unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar10 [16];
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereBox";
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = param_1[2];
  iVar3 = *param_1;
  iVar4 = *param_2;
  FUN_0088fd10(param_2[2],(float *)(iVar1 + 0x30));
  pfVar5 = (float *)param_2[2];
  fVar7 = *(float *)(iVar4 + 0xc) + *(float *)(iVar3 + 0xc);
  auVar10._0_8_ = CONCAT44(uStack_1c,local_20) & 0x7fffffff7fffffff;
  auVar10._8_4_ = uStack_18 & 0x7fffffff;
  auVar10._12_4_ = uStack_14 & 0x7fffffff;
  auVar10 = minps(auVar10,*(undefined1 (*) [16])(iVar4 + 0x10));
  fVar8 = (float)(auVar10._0_4_ ^ local_20 & 0x80000000);
  fVar11 = (float)(auVar10._4_4_ ^ uStack_1c & 0x80000000);
  fVar13 = (float)(auVar10._8_4_ ^ uStack_18 & 0x80000000);
  fVar9 = (*pfVar5 * fVar8 + pfVar5[4] * fVar11 + pfVar5[8] * fVar13 + pfVar5[0xc]) -
          *(float *)(iVar1 + 0x30);
  fVar12 = (pfVar5[1] * fVar8 + pfVar5[5] * fVar11 + pfVar5[9] * fVar13 + pfVar5[0xd]) -
           *(float *)(iVar1 + 0x34);
  fVar8 = (pfVar5[2] * fVar8 + pfVar5[6] * fVar11 + pfVar5[10] * fVar13 + pfVar5[0xe]) -
          *(float *)(iVar1 + 0x38);
  if (fVar8 * fVar8 + fVar12 * fVar12 + fVar9 * fVar9 < fVar7 * fVar7) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fb4f0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008fb320(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fb530(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fad60(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fb570(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fb040(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fb5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008faa30(param_2,param_1,param_3,param_4);
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



void FUN_008fb650(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008faa00;
  local_14 = FUN_008fb4f0;
  local_10 = FUN_008fb570;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,7,4);
  local_18 = &LAB_008fa9d0;
  local_14 = FUN_008fb320;
  local_10 = FUN_008fb040;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,4,7);
  return;
}



void FUN_008fb790(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined2 uVar27;
  int iVar28;
  int in_ECX;
  float *pfVar29;
  int iVar30;
  int unaff_FS_OFFSET;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereTri";
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  pfVar4 = (float *)*param_4;
  iVar5 = param_1[2];
  pfVar29 = (float *)param_2[2];
  iVar6 = *param_2;
  fVar8 = *pfVar29;
  fVar9 = pfVar29[1];
  fVar10 = pfVar29[2];
  fVar11 = pfVar29[3];
  fVar12 = pfVar29[4];
  fVar13 = pfVar29[5];
  fVar14 = pfVar29[6];
  fVar15 = pfVar29[7];
  fVar16 = pfVar29[8];
  fVar17 = pfVar29[9];
  fVar18 = pfVar29[10];
  fVar19 = pfVar29[0xb];
  fVar20 = pfVar29[0xc];
  fVar21 = pfVar29[0xd];
  fVar22 = pfVar29[0xe];
  fVar23 = pfVar29[0xf];
  pfVar29 = (float *)(iVar6 + 0x10);
  iVar28 = (int)local_40 - (int)pfVar29;
  iVar30 = 3;
  do {
    fVar24 = *pfVar29;
    fVar25 = pfVar29[1];
    fVar26 = pfVar29[2];
    pfVar1 = (float *)(iVar28 + (int)pfVar29);
    *pfVar1 = fVar8 * fVar24 + fVar12 * fVar25 + fVar16 * fVar26 + fVar20;
    pfVar1[1] = fVar9 * fVar24 + fVar13 * fVar25 + fVar17 * fVar26 + fVar21;
    pfVar1[2] = fVar10 * fVar24 + fVar14 * fVar25 + fVar18 * fVar26 + fVar22;
    pfVar1[3] = fVar11 * fVar24 + fVar15 * fVar25 + fVar19 * fVar26 + fVar23;
    pfVar29 = pfVar29 + 4;
    iVar30 = iVar30 + -1;
  } while (iVar30 != 0);
  FUN_008d20c0((float *)(iVar5 + 0x30),local_40,in_ECX + 0x10,&local_60);
  fVar8 = *(float *)(iVar2 + 0xc) + *(float *)(iVar6 + 0xc);
  if (fVar8 + *(float *)(param_3 + 8) <= local_50) {
    if (*(short *)(in_ECX + 0xc) != -1) {
      (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*(short *)(in_ECX + 0xc));
      *(undefined2 *)(in_ECX + 0xc) = 0xffff;
    }
  }
  else {
    fVar9 = *(float *)(iVar6 + 0xc) - local_50;
    fVar10 = *(float *)(iVar5 + 0x34);
    fVar11 = *(float *)(iVar5 + 0x38);
    fVar12 = *(float *)(iVar5 + 0x3c);
    *pfVar4 = *(float *)(iVar5 + 0x30) + fVar9 * local_60;
    pfVar4[1] = fVar10 + fVar9 * fStack_5c;
    pfVar4[2] = fVar11 + fVar9 * fStack_58;
    pfVar4[3] = fVar12 + fVar9 * fStack_54;
    pfVar4[4] = local_60;
    pfVar4[5] = fStack_5c;
    pfVar4[6] = fStack_58;
    pfVar4[7] = fStack_54;
    pfVar4[7] = local_50 - fVar8;
    if (*(short *)(in_ECX + 0xc) == -1) {
      uVar27 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar4);
      *(undefined2 *)(in_ECX + 0xc) = uVar27;
    }
    if (*(short *)(in_ECX + 0xc) != -1) {
      *(short *)(pfVar4 + 8) = *(short *)(in_ECX + 0xc);
      *param_4 = *param_4 + 0x30;
    }
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fb980(int *param_1,int *param_2,int param_3,int *param_4)

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
  int iVar26;
  int in_ECX;
  int iVar27;
  float *pfVar28;
  int unaff_FS_OFFSET;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int *local_70;
  int *local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereTri";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = param_1[2];
  iVar4 = *param_1;
  iVar5 = *param_2;
  local_70 = param_1;
  pfVar28 = (float *)param_2[2];
  local_6c = param_2;
  fVar7 = *pfVar28;
  fVar8 = pfVar28[1];
  fVar9 = pfVar28[2];
  fVar10 = pfVar28[3];
  fVar11 = pfVar28[4];
  fVar12 = pfVar28[5];
  fVar13 = pfVar28[6];
  fVar14 = pfVar28[7];
  fVar15 = pfVar28[8];
  fVar16 = pfVar28[9];
  fVar17 = pfVar28[10];
  fVar18 = pfVar28[0xb];
  fVar19 = pfVar28[0xc];
  fVar20 = pfVar28[0xd];
  fVar21 = pfVar28[0xe];
  fVar22 = pfVar28[0xf];
  pfVar28 = (float *)(iVar5 + 0x10);
  iVar26 = (int)local_40 - (int)pfVar28;
  iVar27 = 3;
  do {
    fVar23 = *pfVar28;
    fVar24 = pfVar28[1];
    fVar25 = pfVar28[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar28);
    *pfVar1 = fVar7 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
    pfVar1[1] = fVar8 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
    pfVar1[2] = fVar9 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
    pfVar1[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
    pfVar28 = pfVar28 + 4;
    iVar27 = iVar27 + -1;
  } while (iVar27 != 0);
  FUN_008d20c0((float *)(iVar2 + 0x30),local_40,in_ECX + 0x10,&local_60);
  fStack_74 = *(float *)(iVar4 + 0xc) + *(float *)(iVar5 + 0xc);
  if (local_50 < fStack_74 + *(float *)(param_3 + 8)) {
    fVar7 = *(float *)(iVar5 + 0xc) - local_50;
    fStack_74 = local_50 - fStack_74;
    local_80 = local_60;
    fStack_7c = fStack_5c;
    fStack_78 = fStack_58;
    local_90 = *(float *)(iVar2 + 0x30) + fVar7 * local_60;
    fStack_8c = *(float *)(iVar2 + 0x34) + fVar7 * fStack_5c;
    fStack_88 = *(float *)(iVar2 + 0x38) + fVar7 * fStack_58;
    fStack_84 = *(float *)(iVar2 + 0x3c) + fVar7 * fStack_54;
    (**(code **)(*param_4 + 4))(&local_90);
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



void FUN_008fbb20(int *param_1,int *param_2,int param_3,int *param_4)

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
  int iVar26;
  float *pfVar27;
  int iVar28;
  int unaff_FS_OFFSET;
  undefined1 local_a4 [16];
  undefined4 local_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  int *local_70;
  int *local_6c;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  float local_40 [15];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereTri";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008d1db0(*param_2 + 0x10,local_a4);
  iVar2 = *param_1;
  iVar4 = param_1[2];
  iVar5 = *param_2;
  local_70 = param_1;
  pfVar27 = (float *)param_2[2];
  local_6c = param_2;
  fVar7 = *pfVar27;
  fVar8 = pfVar27[1];
  fVar9 = pfVar27[2];
  fVar10 = pfVar27[3];
  fVar11 = pfVar27[4];
  fVar12 = pfVar27[5];
  fVar13 = pfVar27[6];
  fVar14 = pfVar27[7];
  fVar15 = pfVar27[8];
  fVar16 = pfVar27[9];
  fVar17 = pfVar27[10];
  fVar18 = pfVar27[0xb];
  fVar19 = pfVar27[0xc];
  fVar20 = pfVar27[0xd];
  fVar21 = pfVar27[0xe];
  fVar22 = pfVar27[0xf];
  pfVar27 = (float *)(iVar5 + 0x10);
  iVar26 = (int)local_40 - (int)pfVar27;
  iVar28 = 3;
  do {
    fVar23 = *pfVar27;
    fVar24 = pfVar27[1];
    fVar25 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar7 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
    pfVar1[1] = fVar8 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
    pfVar1[2] = fVar9 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
    pfVar1[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  local_94 = FUN_008d20c0((float *)(iVar4 + 0x30),local_40,local_a4,&local_60);
  fStack_74 = *(float *)(iVar2 + 0xc) + *(float *)(iVar5 + 0xc);
  if (local_50 < fStack_74 + *(float *)(param_3 + 8)) {
    fVar7 = *(float *)(iVar5 + 0xc) - local_50;
    fStack_74 = local_50 - fStack_74;
    local_80 = local_60;
    fStack_7c = fStack_5c;
    fStack_78 = fStack_58;
    local_90 = *(float *)(iVar4 + 0x30) + fVar7 * local_60;
    fStack_8c = *(float *)(iVar4 + 0x34) + fVar7 * fStack_5c;
    fStack_88 = *(float *)(iVar4 + 0x38) + fVar7 * fStack_58;
    fStack_84 = *(float *)(iVar4 + 0x3c) + fVar7 * fStack_54;
    (**(code **)(*param_4 + 4))(&local_90);
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



void FUN_008fbce0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int in_ECX;
  int unaff_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  float local_20;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereTri";
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar1 = *param_1;
  pfVar3 = (float *)param_2[2];
  iVar4 = *param_2;
  iVar5 = param_1[2];
  fVar7 = *(float *)(iVar5 + 0x30) - pfVar3[0xc];
  fVar8 = *(float *)(iVar5 + 0x34) - pfVar3[0xd];
  fVar9 = *(float *)(iVar5 + 0x38) - pfVar3[0xe];
  local_40 = *pfVar3 * fVar7 + pfVar3[1] * fVar8 + pfVar3[2] * fVar9;
  fStack_3c = pfVar3[4] * fVar7 + pfVar3[5] * fVar8 + pfVar3[6] * fVar9;
  fStack_38 = pfVar3[8] * fVar7 + pfVar3[9] * fVar8 + pfVar3[10] * fVar9;
  fStack_34 = pfVar3[8] * fVar7 + pfVar3[9] * fVar8 + pfVar3[10] * fVar9;
  FUN_008d20c0(&local_40,iVar4 + 0x10,in_ECX + 0x10,local_30);
  if (local_20 < *(float *)(iVar4 + 0xc) + *(float *)(iVar1 + 0xc)) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fbe30(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  undefined8 uVar7;
  int unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_50 [16];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  undefined1 local_30 [16];
  float local_20;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereTri";
    uVar7 = rdtsc();
    puVar2[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  iVar3 = *param_2;
  iVar4 = *param_1;
  iVar1 = iVar3 + 0x10;
  FUN_008d1db0(iVar1,local_50);
  pfVar5 = (float *)param_2[2];
  iVar6 = param_1[2];
  fVar8 = *(float *)(iVar6 + 0x30) - pfVar5[0xc];
  fVar9 = *(float *)(iVar6 + 0x34) - pfVar5[0xd];
  fVar10 = *(float *)(iVar6 + 0x38) - pfVar5[0xe];
  local_40 = *pfVar5 * fVar8 + pfVar5[1] * fVar9 + pfVar5[2] * fVar10;
  fStack_3c = pfVar5[4] * fVar8 + pfVar5[5] * fVar9 + pfVar5[6] * fVar10;
  fStack_38 = pfVar5[8] * fVar8 + pfVar5[9] * fVar9 + pfVar5[10] * fVar10;
  fStack_34 = pfVar5[8] * fVar8 + pfVar5[9] * fVar9 + pfVar5[10] * fVar10;
  FUN_008d20c0(&local_40,iVar1,local_50,local_30);
  if (local_20 < *(float *)(iVar3 + 0xc) + *(float *)(iVar4 + 0xc)) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar2[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fbf90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008fbce0(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fbfd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008fbe30(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fc010(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fb980(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fc050(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fbb20(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fc090(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008fb790(param_2,param_1,param_3,param_4);
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



void FUN_008fc130(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008fb730;
  local_14 = FUN_008fbfd0;
  local_10 = FUN_008fc050;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,6,4);
  local_18 = &LAB_008fb6e0;
  local_14 = FUN_008fbe30;
  local_10 = FUN_008fbb20;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,4,6);
  return;
}



void FUN_008fc220(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  bool bVar9;
  undefined8 uVar10;
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
  undefined2 uVar26;
  int iVar27;
  uint uVar28;
  int in_ECX;
  float *pfVar29;
  uint uVar30;
  int iVar31;
  float *pfVar32;
  int unaff_FS_OFFSET;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  float fVar37;
  float local_50 [4];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [11];
  
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar4 = "TtSphereCapsule";
    uVar10 = rdtsc();
    puVar4[1] = (int)uVar10;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
  }
  iVar3 = *param_1;
  pfVar5 = (float *)*param_4;
  iVar6 = param_1[2];
  pfVar29 = (float *)param_2[2];
  iVar7 = *param_2;
  fVar11 = *pfVar29;
  fVar37 = pfVar29[1];
  fVar2 = pfVar29[2];
  fVar8 = pfVar29[3];
  fVar12 = pfVar29[4];
  fVar33 = pfVar29[5];
  fVar13 = pfVar29[6];
  fVar14 = pfVar29[7];
  fVar15 = pfVar29[8];
  fVar16 = pfVar29[9];
  fVar17 = pfVar29[10];
  fVar18 = pfVar29[0xb];
  fVar19 = pfVar29[0xc];
  fVar20 = pfVar29[0xd];
  fVar21 = pfVar29[0xe];
  fVar22 = pfVar29[0xf];
  pfVar29 = (float *)(iVar7 + 0x10);
  pfVar32 = (float *)(iVar6 + 0x30);
  iVar27 = (int)local_30 - (int)pfVar29;
  iVar31 = 2;
  do {
    fVar23 = *pfVar29;
    fVar24 = pfVar29[1];
    fVar25 = pfVar29[2];
    pfVar1 = (float *)(iVar27 + (int)pfVar29);
    *pfVar1 = fVar11 * fVar23 + fVar12 * fVar24 + fVar15 * fVar25 + fVar19;
    pfVar1[1] = fVar37 * fVar23 + fVar33 * fVar24 + fVar16 * fVar25 + fVar20;
    pfVar1[2] = fVar2 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
    pfVar1[3] = fVar8 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
    pfVar29 = pfVar29 + 4;
    iVar31 = iVar31 + -1;
  } while (iVar31 != 0);
  FUN_008d1cd0(pfVar32,local_30,local_30 + 4,&local_40);
  fVar11 = *(float *)(iVar3 + 0xc) + *(float *)(iVar7 + 0xc);
  fVar8 = *(float *)(iVar6 + 0x3c);
  local_40 = *pfVar32 - local_40;
  fStack_3c = *(float *)(iVar6 + 0x34) - fStack_3c;
  fStack_38 = *(float *)(iVar6 + 0x38) - fStack_38;
  fVar2 = fVar11 + *(float *)(param_3 + 8);
  fVar37 = fStack_38 * fStack_38 + fStack_3c * fStack_3c + local_40 * local_40;
  if (fVar2 * fVar2 <= fVar37) {
    if (*(short *)(in_ECX + 0xc) != -1) {
      (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*(short *)(in_ECX + 0xc));
      *(undefined2 *)(in_ECX + 0xc) = 0xffff;
    }
  }
  else {
    if (fVar37 <= 0.0) {
      local_50[0] = local_30[4] - local_30[0];
      local_50[1] = local_30[5] - local_30[1];
      local_50[2] = local_30[6] - local_30[2];
      fVar2 = ABS(local_30[4] - local_30[0]);
      fVar37 = ABS(local_30[5] - local_30[1]);
      bVar9 = fVar2 <= fVar37;
      if (!bVar9) {
        fVar2 = fVar37;
      }
      fVar37 = 0.0;
      uVar30 = (uint)!bVar9;
      if (fVar2 <= ABS(local_30[6] - local_30[2])) {
        uVar28 = 2;
      }
      else {
        uVar28 = uVar30;
        uVar30 = 2;
      }
      pfVar5[uVar30 + 4] = 0.0;
      fVar2 = local_50[bVar9];
      fVar8 = local_50[uVar28];
      pfVar5[7] = 0.0;
      pfVar5[bVar9 + 4] = fVar8;
      pfVar5[uVar28 + 4] = -fVar2;
    }
    else {
      pfVar5[4] = local_40;
      pfVar5[5] = fStack_3c;
      pfVar5[6] = fStack_38;
      pfVar5[7] = fVar8 - fStack_34;
      fVar37 = SQRT(fVar37);
    }
    fVar2 = pfVar5[4];
    fVar8 = pfVar5[5];
    fVar12 = pfVar5[6];
    fVar33 = fVar8 * fVar8;
    local_50[1] = fVar12 * fVar12;
    auVar34._4_4_ = fVar33;
    auVar34._0_4_ = fVar33;
    auVar34._8_4_ = fVar33;
    auVar34._12_4_ = fVar33;
    auVar35._4_12_ = auVar34._4_12_;
    auVar35._0_4_ = fVar33 + fVar2 * fVar2;
    auVar36._4_4_ = local_50[1];
    auVar36._0_4_ = local_50[1] + auVar35._0_4_;
    auVar36._8_4_ = local_50[1];
    auVar36._12_4_ = local_50[1];
    auVar36 = rsqrtss(auVar35,auVar36);
    local_50[0] = auVar36._0_4_;
    fVar33 = local_50[0] * 0.5 * (3.0 - (local_50[1] + auVar35._0_4_) * local_50[0] * local_50[0]);
    pfVar5[4] = fVar33 * fVar2;
    pfVar5[5] = fVar33 * fVar8;
    pfVar5[6] = fVar33 * fVar12;
    pfVar5[7] = fVar33 * pfVar5[7];
    fVar2 = *(float *)(iVar7 + 0xc) - fVar37;
    fVar8 = *(float *)(iVar6 + 0x34);
    fVar12 = *(float *)(iVar6 + 0x38);
    fVar33 = *(float *)(iVar6 + 0x3c);
    *pfVar5 = *pfVar32 + fVar2 * pfVar5[4];
    pfVar5[1] = fVar8 + fVar2 * pfVar5[5];
    pfVar5[2] = fVar12 + fVar2 * pfVar5[6];
    pfVar5[3] = fVar33 + fVar2 * pfVar5[7];
    pfVar5[7] = fVar37 - fVar11;
    if (*(short *)(in_ECX + 0xc) == -1) {
      local_50[2] = local_50[1];
      local_50[3] = local_50[1];
      uVar26 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar5);
      *(undefined2 *)(in_ECX + 0xc) = uVar26;
    }
    if (*(short *)(in_ECX + 0xc) != -1) {
      *(short *)(pfVar5 + 8) = *(short *)(in_ECX + 0xc);
      *param_4 = *param_4 + 0x30;
    }
  }
  iVar3 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar3 + 0x1a4) < *(uint *)(iVar3 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar3 + 0x1a4);
    *puVar4 = &DAT_00a9610c;
    uVar10 = rdtsc();
    puVar4[1] = (int)uVar10;
    *(undefined4 **)(iVar3 + 0x1a4) = puVar4 + 3;
  }
  return;
}



void FUN_008fc570(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  uint uVar27;
  int iVar28;
  float *pfVar29;
  uint uVar30;
  int unaff_FS_OFFSET;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_80 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [4];
  int *local_20;
  int *local_1c;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereCapsule";
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = param_1[2];
  iVar4 = *param_1;
  iVar5 = *param_2;
  local_20 = param_1;
  pfVar26 = (float *)param_2[2];
  local_1c = param_2;
  fVar8 = *pfVar26;
  fVar32 = pfVar26[1];
  fVar31 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar5 + 0x10);
  pfVar29 = (float *)(iVar2 + 0x30);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar28 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar8 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar32 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar31 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  FUN_008d1cd0(pfVar29,local_60,local_60 + 4,&local_70);
  fVar8 = *(float *)(iVar4 + 0xc) + *(float *)(iVar5 + 0xc);
  local_70 = *pfVar29 - local_70;
  fStack_6c = *(float *)(iVar2 + 0x34) - fStack_6c;
  fStack_68 = *(float *)(iVar2 + 0x38) - fStack_68;
  fStack_64 = *(float *)(iVar2 + 0x3c) - fStack_64;
  fVar32 = fVar8 + *(float *)(param_3 + 8);
  local_30[3] = fStack_68 * fStack_68 + fStack_6c * fStack_6c + local_70 * local_70;
  if (local_30[3] < fVar32 * fVar32) {
    if (local_30[3] <= 0.0) {
      local_80[0] = local_60[4] - local_60[0];
      local_80[1] = local_60[5] - local_60[1];
      local_80[2] = local_60[6] - local_60[2];
      fVar32 = ABS(local_60[4] - local_60[0]);
      fVar31 = ABS(local_60[5] - local_60[1]);
      bVar6 = fVar32 <= fVar31;
      if (!bVar6) {
        fVar32 = fVar31;
      }
      local_30[3] = 0.0;
      uVar27 = (uint)!bVar6;
      uVar30 = 2;
      if (ABS(local_60[6] - local_60[2]) < fVar32) {
        uVar27 = 2;
        uVar30 = (uint)!bVar6;
      }
      fVar32 = local_80[bVar6];
      fVar31 = local_80[uVar30];
      local_30[uVar27] = 0.0;
      local_30[bVar6] = fVar31;
      local_30[uVar30] = -fVar32;
      fStack_64 = 0.0;
    }
    else {
      local_30[3] = SQRT(local_30[3]);
      local_30[0] = local_70;
      local_30[1] = fStack_6c;
      local_30[2] = fStack_68;
    }
    fVar32 = local_30[1] * local_30[1];
    local_80[1] = local_30[2] * local_30[2];
    auVar33._4_4_ = fVar32;
    auVar33._0_4_ = fVar32;
    auVar33._8_4_ = fVar32;
    auVar33._12_4_ = fVar32;
    auVar34._4_12_ = auVar33._4_12_;
    auVar34._0_4_ = fVar32 + local_30[0] * local_30[0];
    auVar35._4_4_ = local_80[1];
    auVar35._0_4_ = local_80[1] + auVar34._0_4_;
    auVar35._8_4_ = local_80[1];
    auVar35._12_4_ = local_80[1];
    auVar35 = rsqrtss(auVar34,auVar35);
    local_80[0] = auVar35._0_4_;
    fVar31 = local_80[0] * 0.5 * (3.0 - (local_80[1] + auVar34._0_4_) * local_80[0] * local_80[0]);
    local_30[0] = fVar31 * local_30[0];
    local_30[1] = fVar31 * local_30[1];
    local_30[2] = fVar31 * local_30[2];
    fVar32 = *(float *)(iVar5 + 0xc) - local_30[3];
    local_30[3] = local_30[3] - fVar8;
    local_40 = *pfVar29 + fVar32 * local_30[0];
    fStack_3c = *(float *)(iVar2 + 0x34) + fVar32 * local_30[1];
    fStack_38 = *(float *)(iVar2 + 0x38) + fVar32 * local_30[2];
    fStack_34 = *(float *)(iVar2 + 0x3c) + fVar32 * fVar31 * fStack_64;
    local_80[2] = local_80[1];
    local_80[3] = local_80[1];
    (**(code **)(*param_4 + 4))(&local_40);
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fc860(int *param_1,int *param_2,int param_3,int *param_4)

{
  float *pfVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int iVar25;
  float *pfVar26;
  uint uVar27;
  int iVar28;
  float *pfVar29;
  uint uVar30;
  int unaff_FS_OFFSET;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  float local_80 [4];
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60 [8];
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30 [4];
  int *local_20;
  int *local_1c;
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereCapsule";
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = param_1[2];
  iVar4 = *param_1;
  iVar5 = *param_2;
  local_20 = param_1;
  pfVar26 = (float *)param_2[2];
  local_1c = param_2;
  fVar8 = *pfVar26;
  fVar32 = pfVar26[1];
  fVar31 = pfVar26[2];
  fVar9 = pfVar26[3];
  fVar10 = pfVar26[4];
  fVar11 = pfVar26[5];
  fVar12 = pfVar26[6];
  fVar13 = pfVar26[7];
  fVar14 = pfVar26[8];
  fVar15 = pfVar26[9];
  fVar16 = pfVar26[10];
  fVar17 = pfVar26[0xb];
  fVar18 = pfVar26[0xc];
  fVar19 = pfVar26[0xd];
  fVar20 = pfVar26[0xe];
  fVar21 = pfVar26[0xf];
  pfVar26 = (float *)(iVar5 + 0x10);
  pfVar29 = (float *)(iVar2 + 0x30);
  iVar25 = (int)local_60 - (int)pfVar26;
  iVar28 = 2;
  do {
    fVar22 = *pfVar26;
    fVar23 = pfVar26[1];
    fVar24 = pfVar26[2];
    pfVar1 = (float *)(iVar25 + (int)pfVar26);
    *pfVar1 = fVar8 * fVar22 + fVar10 * fVar23 + fVar14 * fVar24 + fVar18;
    pfVar1[1] = fVar32 * fVar22 + fVar11 * fVar23 + fVar15 * fVar24 + fVar19;
    pfVar1[2] = fVar31 * fVar22 + fVar12 * fVar23 + fVar16 * fVar24 + fVar20;
    pfVar1[3] = fVar9 * fVar22 + fVar13 * fVar23 + fVar17 * fVar24 + fVar21;
    pfVar26 = pfVar26 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  FUN_008d1cd0(pfVar29,local_60,local_60 + 4,&local_70);
  fVar8 = *(float *)(iVar4 + 0xc) + *(float *)(iVar5 + 0xc);
  local_70 = *pfVar29 - local_70;
  fStack_6c = *(float *)(iVar2 + 0x34) - fStack_6c;
  fStack_68 = *(float *)(iVar2 + 0x38) - fStack_68;
  fStack_64 = *(float *)(iVar2 + 0x3c) - fStack_64;
  fVar32 = fVar8 + *(float *)(param_3 + 8);
  local_30[3] = fStack_68 * fStack_68 + fStack_6c * fStack_6c + local_70 * local_70;
  if (local_30[3] < fVar32 * fVar32) {
    if (local_30[3] <= 0.0) {
      local_80[0] = local_60[4] - local_60[0];
      local_80[1] = local_60[5] - local_60[1];
      local_80[2] = local_60[6] - local_60[2];
      fVar32 = ABS(local_60[4] - local_60[0]);
      fVar31 = ABS(local_60[5] - local_60[1]);
      bVar6 = fVar32 <= fVar31;
      if (!bVar6) {
        fVar32 = fVar31;
      }
      local_30[3] = 0.0;
      uVar27 = (uint)!bVar6;
      uVar30 = 2;
      if (ABS(local_60[6] - local_60[2]) < fVar32) {
        uVar27 = 2;
        uVar30 = (uint)!bVar6;
      }
      fVar32 = local_80[bVar6];
      fVar31 = local_80[uVar30];
      local_30[uVar27] = 0.0;
      local_30[bVar6] = fVar31;
      local_30[uVar30] = -fVar32;
      fStack_64 = 0.0;
    }
    else {
      local_30[3] = SQRT(local_30[3]);
      local_30[0] = local_70;
      local_30[1] = fStack_6c;
      local_30[2] = fStack_68;
    }
    fVar32 = local_30[1] * local_30[1];
    local_80[1] = local_30[2] * local_30[2];
    auVar33._4_4_ = fVar32;
    auVar33._0_4_ = fVar32;
    auVar33._8_4_ = fVar32;
    auVar33._12_4_ = fVar32;
    auVar34._4_12_ = auVar33._4_12_;
    auVar34._0_4_ = fVar32 + local_30[0] * local_30[0];
    auVar35._4_4_ = local_80[1];
    auVar35._0_4_ = local_80[1] + auVar34._0_4_;
    auVar35._8_4_ = local_80[1];
    auVar35._12_4_ = local_80[1];
    auVar35 = rsqrtss(auVar34,auVar35);
    local_80[0] = auVar35._0_4_;
    fVar31 = local_80[0] * 0.5 * (3.0 - (local_80[1] + auVar34._0_4_) * local_80[0] * local_80[0]);
    local_30[0] = fVar31 * local_30[0];
    local_30[1] = fVar31 * local_30[1];
    local_30[2] = fVar31 * local_30[2];
    fVar32 = *(float *)(iVar5 + 0xc) - local_30[3];
    local_30[3] = local_30[3] - fVar8;
    local_40 = *pfVar29 + fVar32 * local_30[0];
    fStack_3c = *(float *)(iVar2 + 0x34) + fVar32 * local_30[1];
    fStack_38 = *(float *)(iVar2 + 0x38) + fVar32 * local_30[2];
    fStack_34 = *(float *)(iVar2 + 0x3c) + fVar32 * fVar31 * fStack_64;
    local_80[2] = local_80[1];
    local_80[3] = local_80[1];
    (**(code **)(*param_4 + 4))(&local_40);
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fcb50(int *param_1,int *param_2,undefined4 param_3,int *param_4)

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
  int iVar26;
  float *pfVar27;
  int iVar28;
  int unaff_FS_OFFSET;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_30 [4];
  undefined1 local_20 [28];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereCapsule";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_2;
  pfVar27 = (float *)param_2[2];
  iVar4 = *param_1;
  fVar7 = *pfVar27;
  fVar8 = pfVar27[1];
  fVar9 = pfVar27[2];
  fVar10 = pfVar27[3];
  fVar11 = pfVar27[4];
  fVar12 = pfVar27[5];
  fVar13 = pfVar27[6];
  fVar14 = pfVar27[7];
  fVar15 = pfVar27[8];
  fVar16 = pfVar27[9];
  fVar17 = pfVar27[10];
  fVar18 = pfVar27[0xb];
  fVar19 = pfVar27[0xc];
  fVar20 = pfVar27[0xd];
  fVar21 = pfVar27[0xe];
  fVar22 = pfVar27[0xf];
  iVar5 = param_1[2];
  pfVar27 = (float *)(iVar2 + 0x10);
  iVar26 = (int)local_30 - (int)pfVar27;
  iVar28 = 2;
  do {
    fVar23 = *pfVar27;
    fVar24 = pfVar27[1];
    fVar25 = pfVar27[2];
    pfVar1 = (float *)(iVar26 + (int)pfVar27);
    *pfVar1 = fVar7 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
    pfVar1[1] = fVar8 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
    pfVar1[2] = fVar9 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
    pfVar1[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
    pfVar27 = pfVar27 + 4;
    iVar28 = iVar28 + -1;
  } while (iVar28 != 0);
  FUN_008d1cd0((float *)(iVar5 + 0x30),local_30,local_20,&local_40);
  fVar7 = *(float *)(iVar2 + 0xc) + *(float *)(iVar4 + 0xc);
  local_40 = local_40 - *(float *)(iVar5 + 0x30);
  fStack_3c = fStack_3c - *(float *)(iVar5 + 0x34);
  fStack_38 = fStack_38 - *(float *)(iVar5 + 0x38);
  if (fStack_38 * fStack_38 + fStack_3c * fStack_3c + local_40 * local_40 < fVar7 * fVar7) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
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



void FUN_008fcd30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined1 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0;
  local_c = &PTR_LAB_00a9b4f0;
  FUN_008fcb50(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fcd70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fc570(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fcdb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined **local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = param_4;
  local_8 = 0x7f7fffff;
  local_c = &PTR_LAB_00a9b4e0;
  FUN_008fc860(param_2,param_1,param_3,&local_c);
  return;
}



void FUN_008fcdf0(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float *pfVar4;
  undefined1 local_20 [28];
  
  fVar1 = (float)param_4[0xc0d];
  pfVar4 = (float *)*param_4;
  FUN_008fc220(param_2,param_1,param_3,param_4);
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



void FUN_008fce90(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008fc1f0;
  local_14 = FUN_008fcd30;
  local_10 = FUN_008fcdb0;
  local_c = FUN_008f9320;
  local_8 = 1;
  local_7 = 0;
  FUN_008dadd0(&local_18,8,4);
  local_18 = &LAB_008fc1c0;
  local_14 = FUN_008fcb50;
  local_10 = FUN_008fc860;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 0;
  FUN_008dadd0(&local_18,4,8);
  return;
}



void FUN_008fcf20(void)

{
  undefined4 *in_ECX;
  
  if (*(short *)(in_ECX + 3) != -1) {
    (**(code **)(*(int *)in_ECX[2] + 0x10))(*(short *)(in_ECX + 3));
    *(undefined2 *)(in_ECX + 3) = 0xffff;
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_008fcf80(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined2 uVar14;
  int in_ECX;
  int iVar15;
  int unaff_FS_OFFSET;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar1 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtSphereSphere";
    uVar8 = rdtsc();
    puVar2[1] = (int)uVar8;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  fVar13 = DAT_00b2f09c;
  fVar12 = DAT_00b2f098;
  fVar11 = DAT_00b2f094;
  iVar1 = *param_2;
  iVar3 = *param_1;
  iVar4 = param_1[2];
  iVar5 = param_2[2];
  fVar7 = *(float *)(iVar4 + 0x3c);
  fVar10 = *(float *)(iVar5 + 0x3c);
  fVar16 = *(float *)(iVar4 + 0x30) - *(float *)(iVar5 + 0x30);
  fVar17 = *(float *)(iVar4 + 0x34) - *(float *)(iVar5 + 0x34);
  fVar18 = *(float *)(iVar4 + 0x38) - *(float *)(iVar5 + 0x38);
  fVar19 = fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16;
  fVar9 = *(float *)(param_3 + 8) + *(float *)(iVar1 + 0xc) + *(float *)(iVar3 + 0xc);
  if (fVar9 * fVar9 <= fVar19) {
    if (*(short *)(in_ECX + 0xc) != -1) {
      (**(code **)(**(int **)(in_ECX + 8) + 0x10))(*(short *)(in_ECX + 0xc));
      *(undefined2 *)(in_ECX + 0xc) = 0xffff;
    }
  }
  else {
    pfVar6 = (float *)*param_4;
    if (fVar19 <= 0.0) {
      pfVar6[4] = DAT_00b2f090;
      pfVar6[5] = fVar11;
      pfVar6[6] = fVar12;
      pfVar6[7] = fVar13;
      fVar9 = -(*(float *)(iVar1 + 0xc) + *(float *)(iVar3 + 0xc));
    }
    else {
      fVar9 = 1.0 / SQRT(fVar19);
      pfVar6[4] = fVar9 * fVar16;
      pfVar6[5] = fVar9 * fVar17;
      pfVar6[6] = fVar9 * fVar18;
      pfVar6[7] = fVar9 * (fVar7 - fVar10);
      fVar9 = fVar9 * fVar19 - (*(float *)(iVar1 + 0xc) + *(float *)(iVar3 + 0xc));
    }
    fVar7 = *(float *)(iVar1 + 0xc);
    fVar10 = *(float *)(iVar5 + 0x34);
    fVar11 = *(float *)(iVar5 + 0x38);
    fVar12 = *(float *)(iVar5 + 0x3c);
    *pfVar6 = *(float *)(iVar5 + 0x30) + fVar7 * pfVar6[4];
    pfVar6[1] = fVar10 + fVar7 * pfVar6[5];
    pfVar6[2] = fVar11 + fVar7 * pfVar6[6];
    pfVar6[3] = fVar12 + fVar7 * pfVar6[7];
    pfVar6[7] = fVar9;
    if (*(short *)(in_ECX + 0xc) == -1) {
      uVar14 = (**(code **)(**(int **)(in_ECX + 8) + 8))(param_1,param_2,param_3,pfVar6);
      *(undefined2 *)(in_ECX + 0xc) = uVar14;
    }
    if (*(short *)(in_ECX + 0xc) != -1) {
      *(short *)(pfVar6 + 8) = *(short *)(in_ECX + 0xc);
      *param_4 = *param_4 + 0x30;
    }
    iVar15 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar1 = *(int *)(iVar15 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar8 = rdtsc();
    puVar2[1] = (int)uVar8;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fd160(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int *local_1c;
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereSphere";
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_2;
  local_20 = param_1;
  iVar4 = param_1[2];
  local_1c = param_2;
  iVar5 = param_2[2];
  fVar9 = *(float *)(iVar4 + 0x30) - *(float *)(iVar5 + 0x30);
  fVar10 = *(float *)(iVar4 + 0x34) - *(float *)(iVar5 + 0x34);
  fVar11 = *(float *)(iVar4 + 0x38) - *(float *)(iVar5 + 0x38);
  fVar12 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar6 = *(float *)(param_3 + 8) + *(float *)(iVar2 + 0xc) + *(float *)(*param_1 + 0xc);
  if (fVar12 < fVar6 * fVar6) {
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      local_30 = DAT_00b2f090;
      fStack_2c = DAT_00b2f094;
      fStack_28 = DAT_00b2f098;
    }
    else {
      fVar6 = 1.0 / SQRT(fVar12);
      fVar12 = fVar6 * fVar12;
      fStack_24 = fVar6 * (*(float *)(iVar4 + 0x3c) - *(float *)(iVar5 + 0x3c));
      local_30 = fVar6 * fVar9;
      fStack_2c = fVar6 * fVar10;
      fStack_28 = fVar6 * fVar11;
    }
    fVar6 = *(float *)(iVar2 + 0xc);
    local_40 = *(float *)(iVar5 + 0x30) + fVar6 * local_30;
    fStack_3c = *(float *)(iVar5 + 0x34) + fVar6 * fStack_2c;
    fStack_38 = *(float *)(iVar5 + 0x38) + fVar6 * fStack_28;
    fStack_34 = *(float *)(iVar5 + 0x3c) + fVar6 * fStack_24;
    fStack_24 = fVar12 - (*(float *)(iVar2 + 0xc) + *(float *)(*param_1 + 0xc));
    (**(code **)(*param_4 + 4))(&local_40);
  }
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fd300(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  int unaff_FS_OFFSET;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int *local_20;
  int *local_1c;
  
  iVar8 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereSphere";
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_2;
  local_20 = param_1;
  iVar4 = param_1[2];
  local_1c = param_2;
  iVar5 = param_2[2];
  fVar9 = *(float *)(iVar4 + 0x30) - *(float *)(iVar5 + 0x30);
  fVar10 = *(float *)(iVar4 + 0x34) - *(float *)(iVar5 + 0x34);
  fVar11 = *(float *)(iVar4 + 0x38) - *(float *)(iVar5 + 0x38);
  fVar12 = fVar11 * fVar11 + fVar10 * fVar10 + fVar9 * fVar9;
  fVar6 = *(float *)(param_3 + 8) + *(float *)(iVar2 + 0xc) + *(float *)(*param_1 + 0xc);
  if (fVar12 < fVar6 * fVar6) {
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
      local_30 = DAT_00b2f090;
      fStack_2c = DAT_00b2f094;
      fStack_28 = DAT_00b2f098;
    }
    else {
      fVar6 = 1.0 / SQRT(fVar12);
      fVar12 = fVar6 * fVar12;
      fStack_24 = fVar6 * (*(float *)(iVar4 + 0x3c) - *(float *)(iVar5 + 0x3c));
      local_30 = fVar6 * fVar9;
      fStack_2c = fVar6 * fVar10;
      fStack_28 = fVar6 * fVar11;
    }
    fVar6 = *(float *)(iVar2 + 0xc);
    local_40 = *(float *)(iVar5 + 0x30) + fVar6 * local_30;
    fStack_3c = *(float *)(iVar5 + 0x34) + fVar6 * fStack_2c;
    fStack_38 = *(float *)(iVar5 + 0x38) + fVar6 * fStack_28;
    fStack_34 = *(float *)(iVar5 + 0x3c) + fVar6 * fStack_24;
    fStack_24 = fVar12 - (*(float *)(iVar2 + 0xc) + *(float *)(*param_1 + 0xc));
    (**(code **)(*param_4 + 4))(&local_40);
  }
  iVar1 = *(int *)(iVar1 + iVar8 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar7 = rdtsc();
    puVar3[1] = (int)uVar7;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fd4a0(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereSphere";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = param_1[2];
  iVar4 = param_2[2];
  fVar8 = *(float *)(iVar4 + 0x30) - *(float *)(iVar2 + 0x30);
  fVar9 = *(float *)(iVar4 + 0x34) - *(float *)(iVar2 + 0x34);
  fVar10 = *(float *)(iVar4 + 0x38) - *(float *)(iVar2 + 0x38);
  fVar6 = *(float *)(*param_1 + 0xc) + *(float *)(*param_2 + 0xc);
  if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 < fVar6 * fVar6) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(iVar1 + iVar7 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fd590(int *param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  float fVar6;
  int iVar7;
  int unaff_FS_OFFSET;
  float fVar8;
  float fVar9;
  float fVar10;
  
  iVar7 = _tls_index;
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtSphereSphere";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = param_1[2];
  iVar4 = param_2[2];
  fVar8 = *(float *)(iVar4 + 0x30) - *(float *)(iVar2 + 0x30);
  fVar9 = *(float *)(iVar4 + 0x34) - *(float *)(iVar2 + 0x34);
  fVar10 = *(float *)(iVar4 + 0x38) - *(float *)(iVar2 + 0x38);
  fVar6 = *(float *)(*param_1 + 0xc) + *(float *)(*param_2 + 0xc);
  if (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8 < fVar6 * fVar6) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(iVar1 + iVar7 * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fd680(void)

{
  undefined1 *local_14;
  code *local_10;
  code *local_c;
  code *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_4 = 0;
  local_3 = 0;
  local_14 = &LAB_008fcf50;
  local_10 = FUN_008fd590;
  local_c = FUN_008fd300;
  local_8 = FUN_00935cc0;
  FUN_008dadd0(&local_14,4,4);
  return;
}



void FUN_008fd710(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_2 + 0x21) != 0) {
    psVar2 = (short *)(param_2 + 2);
    while (*psVar2 != -1) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 2;
      if ((int)(uint)*(byte *)(param_2 + 0x21) <= iVar1) {
        return;
      }
    }
    *(undefined2 *)(param_2 + 2 + iVar1 * 4) = param_3;
  }
  return;
}



int FUN_008fd740(undefined4 param_1,undefined4 param_2,int param_3)

{
  if (param_3 != 0) {
    FUN_00936420();
  }
  return param_3 + 0x50;
}



int FUN_008fd760(int param_1,int param_2,int *param_3)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)(param_2 + 0x21) != '\0') {
    psVar1 = (short *)(param_2 + 2);
    do {
      if (*psVar1 != -1) {
        (**(code **)(*param_3 + 0x10))(*psVar1);
      }
      iVar2 = iVar2 + 1;
      psVar1 = psVar1 + 2;
    } while (iVar2 < (int)(uint)*(byte *)(param_2 + 0x21));
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_2 + 0x50;
}



int FUN_008fd7d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = "TtBoxBox3";
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  FUN_009386c0(param_3);
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 0x21);
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar2[1] = (int)uVar3;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return param_3 + 0x50;
}



void FUN_008fd9c0(void)

{
  code *local_30;
  undefined1 *local_2c;
  code *local_28;
  undefined1 *local_24;
  code *local_20;
  code *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  code *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_14 = 0;
  local_10 = 0;
  local_3 = 0;
  local_c = 0;
  local_18 = 0;
  local_4 = 0;
  local_30 = FUN_008fd740;
  local_8 = FUN_008fd7d0;
  local_28 = FUN_008fd760;
  local_24 = &LAB_008fd6d0;
  local_20 = FUN_008fd710;
  local_1c = FUN_0060d0a0;
  local_2c = &LAB_008fd7c0;
  FUN_008daeb0(&local_30,7,7);
  return;
}



void FUN_008fda30(void)

{
  undefined4 *in_ECX;
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)((int)in_ECX + 0x31) != '\0') {
    puVar1 = (undefined2 *)((int)in_ECX + 0x12);
    do {
      (**(code **)(*(int *)in_ECX[2] + 0x10))(*puVar1);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 2;
    } while (iVar2 < (int)(uint)*(byte *)((int)in_ECX + 0x31));
  }
  (**(code **)*in_ECX)(1);
  return;
}



void FUN_008fdaf0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc0) = *(undefined4 *)(in_ECX + 0x50);
  *(undefined4 *)(in_ECX + 0xc4) = *(undefined4 *)(in_ECX + 0x54);
  *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(in_ECX + 0x58);
  *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(in_ECX + 0x5c);
  fVar1 = *(float *)(in_ECX + 0xc0);
  fVar2 = *(float *)(in_ECX + 0xc4);
  fVar3 = *(float *)(in_ECX + 200);
  *(float *)(in_ECX + 0xd0) =
       *(float *)(in_ECX + 0x20) * fVar1 + *(float *)(in_ECX + 0x24) * fVar2 +
       *(float *)(in_ECX + 0x28) * fVar3;
  *(float *)(in_ECX + 0xd4) =
       *(float *)(in_ECX + 0x30) * fVar1 + *(float *)(in_ECX + 0x34) * fVar2 +
       *(float *)(in_ECX + 0x38) * fVar3;
  *(float *)(in_ECX + 0xd8) =
       *(float *)(in_ECX + 0x40) * fVar1 + *(float *)(in_ECX + 0x44) * fVar2 +
       *(float *)(in_ECX + 0x48) * fVar3;
  *(float *)(in_ECX + 0xdc) =
       *(float *)(in_ECX + 0x40) * fVar1 + *(float *)(in_ECX + 0x44) * fVar2 +
       *(float *)(in_ECX + 0x48) * fVar3;
  return;
}



void FUN_008fdb70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtBoxBox";
    uVar4 = rdtsc();
    puVar3[1] = (int)uVar4;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_008b1ff0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
  FUN_009386c0(in_ECX + 0x10);
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



void FUN_008fdd90(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  int unaff_FS_OFFSET;
  char local_1d4 [4];
  float local_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float local_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  undefined1 local_1b0 [32];
  int *local_190;
  int *local_18c;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  int *local_140;
  int *local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
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
  undefined4 local_8c;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar2 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "TtBoxBox";
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  iVar2 = *param_1;
  fStack_1b4 = *(float *)(iVar2 + 0xc);
  iVar4 = *param_2;
  fStack_1c4 = *(float *)(iVar4 + 0xc);
  local_1c0 = *(float *)(iVar2 + 0x10) + fStack_1b4;
  fStack_1bc = *(float *)(iVar2 + 0x14) + fStack_1b4;
  fStack_1b8 = *(float *)(iVar2 + 0x18) + fStack_1b4;
  fStack_1b4 = *(float *)(iVar2 + 0x1c) + fStack_1b4;
  local_1d0 = *(float *)(iVar4 + 0x10) + fStack_1c4;
  fStack_1cc = *(float *)(iVar4 + 0x14) + fStack_1c4;
  fStack_1c8 = *(float *)(iVar4 + 0x18) + fStack_1c4;
  fStack_1c4 = *(float *)(iVar4 + 0x1c) + fStack_1c4;
  FUN_008b1ff0(param_1[2],param_2[2]);
  local_c0 = *(float *)(param_3 + 8);
  local_128 = param_2[2];
  local_12c = param_1[2];
  local_138 = 0;
  local_134 = 0;
  local_130 = 0;
  local_120 = local_180;
  uStack_11c = uStack_17c;
  uStack_118 = uStack_178;
  uStack_114 = uStack_174;
  local_110 = local_170;
  uStack_10c = uStack_16c;
  uStack_108 = uStack_168;
  uStack_104 = uStack_164;
  local_e0 = local_1c0;
  local_100 = local_160;
  uStack_fc = uStack_15c;
  uStack_f8 = uStack_158;
  uStack_f4 = uStack_154;
  local_dc = fStack_1bc;
  local_d8 = fStack_1b8;
  local_d4 = fStack_1b4;
  local_f0 = local_150;
  uStack_ec = uStack_14c;
  uStack_e8 = uStack_148;
  uStack_e4 = uStack_144;
  local_d0 = local_1d0;
  local_cc = fStack_1cc;
  local_c8 = fStack_1c8;
  local_b0 = local_c0 + local_1c0;
  fStack_ac = local_c0 + fStack_1bc;
  fStack_a8 = local_c0 + fStack_1b8;
  fStack_a4 = local_c0 + fStack_1b4;
  local_c4 = fStack_1c4;
  local_a0 = local_c0 + local_1d0;
  fStack_9c = local_c0 + fStack_1cc;
  fStack_98 = local_c0 + fStack_1c8;
  fStack_94 = local_c0 + fStack_1c4;
  local_140 = param_1;
  local_13c = param_2;
  local_8c = 0x3c23d70a;
  local_190 = param_1;
  local_18c = param_2;
  fStack_bc = local_c0;
  fStack_b8 = local_c0;
  fStack_b4 = local_c0;
  local_90 = local_c0;
  FUN_009385c0(local_1d4,local_1b0);
  if (local_1d4[0] != '\0') {
    (**(code **)(*param_4 + 4))(local_1b0);
  }
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar3 = &DAT_00a9610c;
    uVar5 = rdtsc();
    puVar3[1] = (int)uVar5;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar3 + 3;
  }
  return;
}



void FUN_008fdff0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int iVar15;
  int unaff_FS_OFFSET;
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
  undefined4 local_8c;
  
  iVar1 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar15 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar15 + 0x1a4) < *(uint *)(iVar15 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar15 + 0x1a4);
    *puVar2 = "TtBoxBox";
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar15 + 0x1a4) = puVar2 + 3;
  }
  iVar15 = *param_1;
  fVar3 = *(float *)(iVar15 + 0xc);
  iVar4 = *param_2;
  fVar7 = *(float *)(iVar15 + 0x10);
  fVar8 = *(float *)(iVar15 + 0x14);
  fVar9 = *(float *)(iVar15 + 0x18);
  fVar10 = *(float *)(iVar15 + 0x1c);
  fVar5 = *(float *)(iVar4 + 0xc);
  fVar11 = *(float *)(iVar4 + 0x10);
  fVar12 = *(float *)(iVar4 + 0x14);
  fVar13 = *(float *)(iVar4 + 0x18);
  fVar14 = *(float *)(iVar4 + 0x1c);
  FUN_008b1ff0(param_1[2],param_2[2]);
  local_c0 = *(float *)(param_3 + 8);
  local_b0 = local_c0 + fVar7 + fVar3;
  fStack_ac = local_c0 + fVar8 + fVar3;
  fStack_a8 = local_c0 + fVar9 + fVar3;
  fStack_a4 = local_c0 + fVar10 + fVar3;
  local_a0 = local_c0 + fVar11 + fVar5;
  fStack_9c = local_c0 + fVar12 + fVar5;
  fStack_98 = local_c0 + fVar13 + fVar5;
  fStack_94 = local_c0 + fVar14 + fVar5;
  local_8c = 0x3c23d70a;
  fStack_bc = local_c0;
  fStack_b8 = local_c0;
  fStack_b4 = local_c0;
  local_90 = local_c0;
  FUN_008fdaf0();
  iVar15 = FUN_009377c0(&local_c0);
  if (iVar15 == 0) {
    (**(code **)(*param_4 + 4))(param_1,param_2);
  }
  iVar1 = *(int *)(iVar1 + _tls_index * 4);
  if (*(uint *)(iVar1 + 0x1a4) < *(uint *)(iVar1 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar1 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar6 = rdtsc();
    puVar2[1] = (int)uVar6;
    *(undefined4 **)(iVar1 + 0x1a4) = puVar2 + 3;
  }
  return;
}



void FUN_008fe230(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_8 = 0;
  local_7 = 0;
  local_18 = &LAB_008fda70;
  local_14 = FUN_008fdff0;
  local_10 = FUN_008fdd90;
  local_c = FUN_00935cc0;
  FUN_008dadd0(&local_18,7,7);
  return;
}



void FUN_008fe280(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_2 + 4) = 0;
  iVar1 = (**(code **)(**(int **)*param_1 + 8))();
  if (iVar1 == 5) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 1;
  }
  iVar1 = (**(code **)(**(int **)param_1[1] + 8))();
  if (iVar1 == 5) {
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 2;
  }
  FUN_008ff120(param_1,param_2,param_3);
  return;
}



int FUN_008fe2d0(int *param_1,uint param_2,float *param_3,float *param_4,uint *param_5)

{
  float *pfVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 *puVar4;
  float fVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined8 uVar12;
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
  int iVar30;
  char cVar31;
  short sVar32;
  int iVar33;
  uint uVar34;
  float fVar35;
  undefined2 uVar36;
  float *pfVar37;
  float *pfVar38;
  uint uVar39;
  int *piVar40;
  int iVar41;
  int unaff_FS_OFFSET;
  float10 fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  int iStack_1dc;
  float local_1d8;
  float *local_1d4;
  float *local_1d0;
  float local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  float fStack_1b4;
  int *piStack_1ac;
  int *local_1a8 [2];
  float local_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined4 local_190;
  int local_188 [10];
  float local_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  int *piStack_144;
  float fStack_140;
  float afStack_13c [67];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar11 = _tls_index;
  iVar41 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar33 = *(int *)(iVar41 + _tls_index * 4);
  if (*(uint *)(iVar33 + 0x1a4) < *(uint *)(iVar33 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar33 + 0x1a4);
    *puVar4 = "TtPredGskf3";
    uVar12 = rdtsc();
    puVar4[1] = (int)uVar12;
    *(undefined4 **)(iVar33 + 0x1a4) = puVar4 + 3;
  }
  iVar41 = *(int *)(iVar41 + iVar11 * 4);
  if (*(uint *)(iVar41 + 0x1a4) < *(uint *)(iVar41 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar41 + 0x1a4);
    *puVar4 = "Ltintern";
    puVar4[3] = &DAT_00a96df4;
    uVar12 = rdtsc();
    puVar4[1] = (int)uVar12;
    *(undefined4 **)(iVar41 + 0x1a4) = puVar4 + 4;
  }
  fVar5 = (float)param_1[0x14];
  local_190 = (int *)(CONCAT31(local_190._1_3_,*(undefined1 *)(param_2 + 4)) & 0xffffff01);
  local_1a8[1] = param_1 + 1;
  uVar34 = *(uint *)(param_2 + 4);
  local_190 = (int *)(CONCAT22(local_190._2_2_,CONCAT11((char)(uVar34 >> 1),(undefined1)local_190))
                     & 0xffff01ff);
  local_188[0] = 0;
  local_188[1] = 0;
  pfVar1 = param_3 + 3;
  local_1a8[0] = param_1;
  local_1c8 = (float *)(CONCAT31(CONCAT21(local_1c8._2_2_,(char)(uVar34 >> 3)),(char)(uVar34 >> 2))
                       & 0xffff0101);
  FUN_008ff1c0(param_1,param_3,&local_1a0);
  iVar41 = 0;
  do {
    if (*(char *)((int)&local_190 + iVar41) != '\0') {
      iVar33 = *(int *)*local_1a8[iVar41];
      local_1c0 = *(float *)(iVar33 + 0x30) - *(float *)(iVar33 + 0x20);
      uStack_1bc = *(float *)(iVar33 + 0x34) - *(float *)(iVar33 + 0x24);
      uStack_1b8 = *(float *)(iVar33 + 0x38) - *(float *)(iVar33 + 0x28);
      fVar43 = uStack_1bc * uStack_1bc;
      fStack_15c = uStack_1b8 * uStack_1b8;
      auVar44._4_4_ = fVar43;
      auVar44._0_4_ = fVar43;
      auVar44._8_4_ = fVar43;
      auVar44._12_4_ = fVar43;
      auVar45._4_12_ = auVar44._4_12_;
      auVar45._0_4_ = fVar43 + local_1c0 * local_1c0;
      auVar46._4_4_ = fStack_15c;
      auVar46._0_4_ = fStack_15c + auVar45._0_4_;
      auVar46._8_4_ = fStack_15c;
      auVar46._12_4_ = fStack_15c;
      auVar46 = rsqrtss(auVar45,auVar46);
      local_160 = auVar46._0_4_;
      fStack_1b4 = local_160 * 0.5 * (3.0 - (fStack_15c + auVar45._0_4_) * local_160 * local_160);
      local_1c0 = fStack_1b4 * local_1c0;
      uStack_1bc = fStack_1b4 * uStack_1bc;
      uStack_1b8 = fStack_1b4 * uStack_1b8;
      fStack_1b4 = fStack_1b4 * (*(float *)(iVar33 + 0x3c) - *(float *)(iVar33 + 0x2c));
      fStack_158 = fStack_15c;
      fStack_154 = fStack_15c;
      FUN_0088fe00(*(undefined4 *)(*local_1a8[iVar41] + 8),&local_1c0);
      fVar43 = ABS(uStack_1b8 * fStack_198 + uStack_1bc * fStack_19c + local_1c0 * local_1a0);
      if (*(char *)((int)&local_1c8 + iVar41) == '\0') {
        if (fVar43 < 0.085) {
          uVar34 = *(uint *)(param_2 + 4);
          *(undefined1 *)((int)&local_1c8 + iVar41) = 1;
          *(uint *)(param_2 + 4) = uVar34 | 4 << ((byte)iVar41 & 0x1f);
          FUN_00939b60(pfVar1,param_1[3]);
          *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_3 + 0xe);
          goto LAB_008fe51a;
        }
      }
      else if (0.17 < fVar43) {
        uVar34 = *(uint *)(param_2 + 4);
        *(undefined1 *)((int)&local_1c8 + iVar41) = 0;
        *(uint *)(param_2 + 4) = uVar34 & ~(4 << ((byte)iVar41 & 0x1f));
        FUN_00939b60(pfVar1,param_1[3]);
        *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_3 + 0xe);
LAB_008fe51a:
        *pfVar1 = 0.0;
      }
    }
    iVar41 = iVar41 + 1;
  } while (iVar41 < 2);
  iVar41 = *(int *)(param_1[2] + 0x28);
  if (*(char *)(iVar41 + 0x10) == '\0') {
LAB_008fe757:
    if (*(float *)(iVar41 + 0xc) < fVar5) {
      param_4[3] = fVar5;
      if (*(char *)((int)param_3 + 0xe) != '\0') {
        iVar41 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        if (*(uint *)(iVar41 + 0x1a4) < *(uint *)(iVar41 + 0x1a8)) {
          puVar4 = *(undefined4 **)(iVar41 + 0x1a4);
          *puVar4 = "StgetPoints";
          uVar12 = rdtsc();
          puVar4[1] = (int)uVar12;
          *(undefined4 **)(iVar41 + 0x1a4) = puVar4 + 3;
        }
        local_1d8 = 0.0;
        piVar40 = local_188 + 5;
        do {
          if (*(char *)((int)&local_1c8 + (int)local_1d8) == '\0') {
            local_188[(int)local_1d8] = 0;
          }
          else {
            iVar41 = *(int *)*local_1a8[(int)local_1d8];
            iVar33 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x24);
            *(undefined2 *)(iVar33 + 4) = 0x30;
            fVar5 = *(float *)(iVar41 + 0xc);
            fVar42 = (float10)FUN_008f2260();
            iVar41 = FUN_008f3490(iVar41 + 0x20,iVar41 + 0x30,
                                  (float)(fVar42 + (float10)fVar5 + (float10)0.002));
            if (piVar40 != (int *)0xc) {
              iVar33 = *(int *)(*local_1a8[(int)local_1d8] + 8);
              *piVar40 = *local_1a8[(int)local_1d8];
              piVar40[-1] = iVar33;
            }
            piVar40[-2] = *(int *)(*piVar40 + 4);
            piVar40[-3] = iVar41;
            local_188[(int)local_1d8] = *local_1a8[(int)local_1d8];
            *local_1a8[(int)local_1d8] = (int)(piVar40 + -3);
          }
          local_1d8 = (float)((int)local_1d8 + 1);
          piVar40 = piVar40 + 4;
        } while ((int)local_1d8 < 2);
        piVar40 = (int *)param_1[1];
        piVar6 = (int *)*param_1;
        fStack_18 = *(float *)(param_1[2] + 8);
        piVar7 = (int *)*piVar40;
        piVar8 = (int *)*piVar6;
        fStack_20 = (float)piVar8[3];
        fStack_1c = (float)piVar7[3];
        fStack_30 = *param_4;
        fStack_2c = param_4[1];
        fStack_28 = param_4[2];
        fStack_24 = param_4[3];
        fStack_14 = fStack_1c + fStack_20 + fStack_18;
        fStack_14 = fStack_14 * fStack_14;
        if (*(byte *)((int)param_3 + 0xe) != 0) {
          (**(code **)(*piVar8 + 0x28))
                    (param_3 + (uint)*(byte *)((int)param_3 + 0xe) * 2 + 4,*(byte *)pfVar1,
                     afStack_13c + 3);
          pfVar37 = (float *)piVar6[2];
          uVar39 = (uint)*(byte *)pfVar1;
          fVar5 = *pfVar37;
          fVar43 = pfVar37[1];
          fVar13 = pfVar37[2];
          fVar14 = pfVar37[3];
          fVar15 = pfVar37[4];
          fVar16 = pfVar37[5];
          fVar17 = pfVar37[6];
          fVar18 = pfVar37[7];
          fVar19 = pfVar37[8];
          fVar20 = pfVar37[9];
          fVar21 = pfVar37[10];
          fVar22 = pfVar37[0xb];
          fVar23 = pfVar37[0xc];
          fVar24 = pfVar37[0xd];
          fVar25 = pfVar37[0xe];
          fVar26 = pfVar37[0xf];
          pfVar37 = afStack_13c;
          uVar34 = uVar39;
          do {
            fVar35 = *pfVar37;
            fVar27 = pfVar37[1];
            fVar28 = pfVar37[2];
            *pfVar37 = fVar5 * fVar35 + fVar15 * fVar27 + fVar19 * fVar28 + fVar23;
            pfVar37[1] = fVar43 * fVar35 + fVar16 * fVar27 + fVar20 * fVar28 + fVar24;
            pfVar37[2] = fVar13 * fVar35 + fVar17 * fVar27 + fVar21 * fVar28 + fVar25;
            pfVar37[3] = fVar14 * fVar35 + fVar18 * fVar27 + fVar22 * fVar28 + fVar26;
            pfVar37 = pfVar37 + 4;
            uVar34 = uVar34 - 1;
          } while (0 < (int)uVar34);
          pfVar37 = afStack_13c + uVar39 * 4;
          (**(code **)(*piVar7 + 0x28))
                    (iStack_1dc + uVar39 * 2,*(undefined1 *)((int)param_3 + 0xd),pfVar37);
          pfVar38 = (float *)piVar40[2];
          uVar34 = (uint)*(byte *)((int)param_3 + 0xd);
          fVar5 = *pfVar38;
          fVar43 = pfVar38[1];
          fVar13 = pfVar38[2];
          fVar14 = pfVar38[3];
          fVar15 = pfVar38[4];
          fVar16 = pfVar38[5];
          fVar17 = pfVar38[6];
          fVar18 = pfVar38[7];
          fVar19 = pfVar38[8];
          fVar20 = pfVar38[9];
          fVar21 = pfVar38[10];
          fVar22 = pfVar38[0xb];
          fVar23 = pfVar38[0xc];
          fVar24 = pfVar38[0xd];
          fVar25 = pfVar38[0xe];
          fVar26 = pfVar38[0xf];
          do {
            fVar35 = *pfVar37;
            fVar27 = pfVar37[1];
            fVar28 = pfVar37[2];
            *pfVar37 = fVar5 * fVar35 + fVar15 * fVar27 + fVar19 * fVar28 + fVar23;
            pfVar37[1] = fVar43 * fVar35 + fVar16 * fVar27 + fVar20 * fVar28 + fVar24;
            pfVar37[2] = fVar13 * fVar35 + fVar17 * fVar27 + fVar21 * fVar28 + fVar25;
            pfVar37[3] = fVar14 * fVar35 + fVar18 * fVar27 + fVar22 * fVar28 + fVar26;
            pfVar37 = pfVar37 + 4;
            uVar34 = uVar34 - 1;
          } while (0 < (int)uVar34);
        }
        FUN_00939bb0(pfVar1,afStack_13c + 3,0,param_5,param_1[3]);
        if ((*(byte *)((int)param_3 + 0xe) != 0) && (param_5[0xc10] != 0)) {
          **(int **)(param_5[0xc10] + 4) = *param_5 + (uint)*(byte *)((int)param_3 + 0xe) * -0x30;
          *(int *)(param_5[0xc10] + 4) = *(int *)(param_5[0xc10] + 4) + 4;
        }
      }
      goto LAB_008feee6;
    }
  }
  else {
    iVar33 = *param_1;
    for (iVar11 = *(int *)(*param_1 + 0xc); iVar11 != 0; iVar11 = *(int *)(iVar11 + 0xc)) {
      iVar33 = iVar11;
    }
    iVar11 = param_1[1];
    for (iVar30 = *(int *)(param_1[1] + 0xc); iVar30 != 0; iVar30 = *(int *)(iVar30 + 0xc)) {
      iVar11 = iVar30;
    }
    local_1d8 = *(float *)(iVar11 + 0x20);
    if (*(float *)(iVar33 + 0x20) < local_1d8) {
      local_1d8 = *(float *)(iVar33 + 0x20);
    }
    local_1cc = local_1d8 * *(float *)(iVar41 + 0x18) + param_4[3];
    fVar43 = local_1d8 * *(float *)(iVar41 + 0x14);
    if (fVar43 < local_1cc) {
      local_1cc = fVar43;
    }
    if (local_1cc <= fVar5) goto LAB_008fe757;
    local_1d0 = (float *)(local_1d8 * *(float *)(iVar41 + 0x28) + param_4[3]);
    fVar5 = local_1d8 * *(float *)(iVar41 + 0x24);
    if (fVar5 < (float)local_1d0) {
      local_1d0 = (float *)fVar5;
    }
    iVar41 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (*(uint *)(iVar41 + 0x1a4) < *(uint *)(iVar41 + 0x1a8)) {
      puVar4 = *(undefined4 **)(iVar41 + 0x1a4);
      *puVar4 = "Sttoi";
      uVar12 = rdtsc();
      puVar4[1] = (int)uVar12;
      *(undefined4 **)(iVar41 + 0x1a4) = puVar4 + 3;
    }
    FUN_0093de40(param_1,local_1d8,local_1cc,local_1d0,param_3,param_4,param_5);
  }
  iVar41 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar41 + 0x1a4) < *(uint *)(iVar41 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar41 + 0x1a4);
    *puVar4 = "Stprocess";
    uVar12 = rdtsc();
    puVar4[1] = (int)uVar12;
    *(undefined4 **)(iVar41 + 0x1a4) = puVar4 + 3;
  }
  local_1d8 = 0.0;
  piVar40 = local_188 + 5;
  do {
    if (*(char *)((int)&local_1c8 + (int)local_1d8) == '\0') {
      local_188[(int)local_1d8] = 0;
    }
    else {
      iVar41 = *(int *)*local_1a8[(int)local_1d8];
      iVar33 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x24);
      *(undefined2 *)(iVar33 + 4) = 0x30;
      fVar5 = *(float *)(iVar41 + 0xc);
      fVar42 = (float10)FUN_008f2260();
      iVar41 = FUN_008f3490(iVar41 + 0x20,iVar41 + 0x30,
                            (float)(fVar42 + (float10)fVar5 + (float10)0.002));
      if (piVar40 != (int *)0xc) {
        iVar33 = *(int *)(*local_1a8[(int)local_1d8] + 8);
        *piVar40 = *local_1a8[(int)local_1d8];
        piVar40[-1] = iVar33;
      }
      piVar40[-2] = *(int *)(*piVar40 + 4);
      piVar40[-3] = iVar41;
      local_188[(int)local_1d8] = *local_1a8[(int)local_1d8];
      *local_1a8[(int)local_1d8] = (int)(piVar40 + -3);
    }
    local_1d8 = (float)((int)local_1d8 + 1);
    piVar40 = piVar40 + 4;
  } while ((int)local_1d8 < 2);
  local_1d0 = param_3;
  if (((char)local_1c8 != '\0') || (local_1c8._1_1_ != '\0')) {
    fVar5 = *param_3;
    local_1c0 = fVar5;
    fVar43 = param_3[2];
    local_1d0 = (float *)&local_1c0;
    uStack_1bc = param_3[1];
    uStack_1b8 = fVar43;
    cVar31 = SUB41(fVar43,0);
    if ((char)local_1c8 != '\0') {
      local_1c0._0_1_ = SUB41(fVar5,0);
      local_1c0 = (float)CONCAT22((short)((uint)fVar5 >> 0x10),
                                  (1 - (ushort)((byte)local_1c0 >> 7)) * 0x10);
      if (('\x01' < cVar31) && (local_1c0 = 2.24208e-44, cVar31 == '\x03')) {
        cVar31 = '\x02';
        uStack_1b8 = (float)CONCAT31((int3)((uint)fVar43 >> 8),2);
        uVar36 = (undefined2)((uint)param_3[1] >> 0x10);
        uStack_1bc = (float)CONCAT22(uVar36,uVar36);
      }
    }
    if (local_1c8._1_1_ != '\0') {
      pbVar2 = (byte *)((int)&local_1c0 + cVar31 * 2);
      *(ushort *)pbVar2 = (1 - (ushort)(*pbVar2 >> 7)) * 0x10;
      if ('\x01' < uStack_1b8._1_1_) {
        *(undefined2 *)((int)&local_1c0 + (char)uStack_1b8 * 2) = 0x10;
        *(undefined2 *)((int)&local_1c0 + (char)uStack_1b8 * 2 + 2) = 0;
        if (uStack_1b8._1_1_ == '\x03') {
          uStack_1b8._0_2_ = CONCAT11(2,(char)uStack_1b8);
        }
      }
    }
  }
  afStack_13c[0] = *(float *)*param_1;
  afStack_13c[1] = *(float *)param_1[1];
  piStack_144 = param_1 + 4;
  fStack_140 = ((float *)*param_1)[2];
  afStack_13c[2] = *(float *)(param_1[2] + 8);
  iVar41 = FUN_0093d4a0(&piStack_144,local_1d0,param_4,&local_160);
  if (iVar41 == 1) {
    if (*(char *)((int)param_3 + 0xe) != '\0') {
      FUN_00939b60(pfVar1,param_1[3]);
    }
  }
  else {
    uVar34 = FUN_0093a620(pfVar1,local_1d0);
    local_1d4 = (float *)(uVar34 & 0xff);
    pfVar37 = (float *)*param_5;
    bVar3 = *(byte *)((int)param_3 + 0xe);
    if (local_1d4 < (float *)(uint)bVar3) {
      fStack_18 = *(float *)(param_1[2] + 8);
      piStack_1ac = (int *)*param_1;
      local_190 = (int *)param_1[1];
      piVar40 = (int *)*local_190;
      fStack_20 = (float)((int *)*piStack_1ac)[3];
      fStack_1c = (float)piVar40[3];
      fStack_30 = *param_4;
      fStack_2c = param_4[1];
      fStack_28 = param_4[2];
      fStack_24 = param_4[3];
      fStack_14 = fStack_1c + fStack_20 + fStack_18;
      fStack_14 = fStack_14 * fStack_14;
      if (bVar3 != 0) {
        (**(code **)(*(int *)*piStack_1ac + 0x28))
                  (param_3 + (int)(uint)bVar3 * 2 + 4,*(byte *)pfVar1,afStack_13c + 3);
        pfVar38 = *(float **)((int)uStack_1b8 + 8);
        uStack_1b8 = (float)(uint)*(byte *)pfVar1;
        fVar5 = *pfVar38;
        fVar43 = pfVar38[1];
        fVar13 = pfVar38[2];
        fVar14 = pfVar38[3];
        fVar15 = pfVar38[4];
        fVar16 = pfVar38[5];
        fVar17 = pfVar38[6];
        fVar18 = pfVar38[7];
        fVar19 = pfVar38[8];
        fVar20 = pfVar38[9];
        fVar21 = pfVar38[10];
        fVar22 = pfVar38[0xb];
        fVar23 = pfVar38[0xc];
        fVar24 = pfVar38[0xd];
        fVar25 = pfVar38[0xe];
        fVar26 = pfVar38[0xf];
        pfVar38 = afStack_13c;
        fVar35 = uStack_1b8;
        do {
          fVar27 = *pfVar38;
          fVar28 = pfVar38[1];
          fVar29 = pfVar38[2];
          *pfVar38 = fVar5 * fVar27 + fVar15 * fVar28 + fVar19 * fVar29 + fVar23;
          pfVar38[1] = fVar43 * fVar27 + fVar16 * fVar28 + fVar20 * fVar29 + fVar24;
          pfVar38[2] = fVar13 * fVar27 + fVar17 * fVar28 + fVar21 * fVar29 + fVar25;
          pfVar38[3] = fVar14 * fVar27 + fVar18 * fVar28 + fVar22 * fVar29 + fVar26;
          pfVar38 = pfVar38 + 4;
          fVar35 = (float)((int)fVar35 - 1);
        } while (0 < (int)fVar35);
        local_1d4 = afStack_13c + (int)uStack_1b8 * 4;
        (**(code **)(*piVar40 + 0x28))
                  ((int)pfVar37 + (int)uStack_1b8 * 2,*(undefined1 *)((int)param_3 + 0xd),local_1d4)
        ;
        pfVar38 = (float *)local_190[2];
        uVar34 = (uint)*(byte *)((int)param_3 + 0xd);
        fVar5 = *pfVar38;
        fVar43 = pfVar38[1];
        fVar13 = pfVar38[2];
        fVar14 = pfVar38[3];
        fVar15 = pfVar38[4];
        fVar16 = pfVar38[5];
        fVar17 = pfVar38[6];
        fVar18 = pfVar38[7];
        fVar19 = pfVar38[8];
        fVar20 = pfVar38[9];
        fVar21 = pfVar38[10];
        fVar22 = pfVar38[0xb];
        fVar23 = pfVar38[0xc];
        fVar24 = pfVar38[0xd];
        fVar25 = pfVar38[0xe];
        fVar26 = pfVar38[0xf];
        pfVar38 = local_1c8;
        do {
          fVar35 = *pfVar38;
          fVar27 = pfVar38[1];
          fVar28 = pfVar38[2];
          *pfVar38 = fVar5 * fVar35 + fVar15 * fVar27 + fVar19 * fVar28 + fVar23;
          pfVar38[1] = fVar43 * fVar35 + fVar16 * fVar27 + fVar20 * fVar28 + fVar24;
          pfVar38[2] = fVar13 * fVar35 + fVar17 * fVar27 + fVar21 * fVar28 + fVar25;
          pfVar38[3] = fVar14 * fVar35 + fVar18 * fVar27 + fVar22 * fVar28 + fVar26;
          pfVar38 = pfVar38 + 4;
          uVar34 = uVar34 - 1;
        } while (0 < (int)uVar34);
      }
      FUN_00939bb0(pfVar1,afStack_13c + 3,local_1d4,param_5,param_1[3]);
    }
    pfVar38 = (float *)*param_5;
    *pfVar38 = local_160;
    pfVar38[1] = fStack_15c;
    pfVar38[2] = fStack_158;
    pfVar38[3] = fStack_154;
    fVar5 = param_4[1];
    fVar43 = param_4[2];
    fVar13 = param_4[3];
    pfVar38[4] = *param_4;
    pfVar38[5] = fVar5;
    pfVar38[6] = fVar43;
    pfVar38[7] = fVar13;
    if (local_1d4 == (float *)0x0) {
      iVar41 = *(int *)(param_1[2] + 0x28);
      if ((int)*(char *)((int)local_1d0 + 9) + (int)*(char *)(local_1d0 + 2) == 4) {
        fVar5 = *(float *)(iVar41 + 4);
      }
      else {
        fVar5 = *(float *)(iVar41 + 8);
      }
      if (param_4[3] < fVar5) {
        iVar41 = FUN_0093ab40(pfVar1,*param_1,param_1[1],param_1[2],local_1d0,pfVar38,pfVar37,
                              param_1[3],1);
        if (iVar41 == 4) {
          if (*(short *)(pfVar38 + 8) == -1) {
            if (param_5[0xc10] == 0) {
              sVar32 = (**(code **)(*(int *)param_1[3] + 8))(*param_1,param_1[1],param_1[2],pfVar38)
              ;
              *(short *)(pfVar38 + 8) = sVar32;
              if (sVar32 == -1) goto LAB_008fee72;
              *(short *)((int)param_3 + 0x12) = sVar32;
              *param_5 = *param_5 + 0x30;
            }
            else {
              iVar41 = (**(code **)(*(int *)param_1[3] + 0xc))(1);
              if (iVar41 == 0) {
                puVar9 = *(uint **)param_5[0xc10];
                *(uint **)param_5[0xc10] = puVar9 + 3;
                puVar9[1] = param_2;
                *puVar9 = (uint)pfVar38;
                puVar9[2] = (uint)param_3;
                *param_5 = *param_5 + 0x30;
              }
              else {
LAB_008fee72:
                FUN_00939b00(pfVar1,0);
                pfVar38 = pfVar37;
              }
            }
          }
          else {
            *param_5 = *param_5 + 0x30;
          }
        }
        else {
          pfVar38 = pfVar37;
          if (iVar41 != 5) {
            if (iVar41 == 6) {
              *param_5 = *param_5 - 0x30;
            }
            else {
              pfVar38 = pfVar37 + iVar41 * 0xc;
            }
          }
        }
      }
    }
    else {
      *(undefined2 *)(pfVar38 + 8) = *(undefined2 *)((int)param_3 + 0x12);
      *param_5 = *param_5 + 0x30;
    }
    if ((param_5[0xc10] != 0) && (pfVar38 < (float *)*param_5)) {
      **(uint **)(param_5[0xc10] + 4) = (uint)pfVar38;
      *(int *)(param_5[0xc10] + 4) = *(int *)(param_5[0xc10] + 4) + 4;
    }
  }
  *param_4 = local_1a0;
  param_4[1] = fStack_19c;
  param_4[2] = fStack_198;
  param_4[3] = fStack_194;
LAB_008feee6:
  iVar41 = 0;
  do {
    if (*(int *)((int)local_188 + iVar41) != 0) {
      puVar4 = *(undefined4 **)((int)local_1a8 + iVar41);
      puVar10 = *(undefined4 **)*puVar4;
      if ((*(short *)(puVar10 + 1) != 0) &&
         (*(short *)((int)puVar10 + 6) = *(short *)((int)puVar10 + 6) + -1,
         *(short *)((int)puVar10 + 6) == 0)) {
        (**(code **)*puVar10)(1);
      }
      *puVar4 = *(undefined4 *)((int)local_188 + iVar41);
    }
    iVar33 = _tls_index;
    iVar41 = iVar41 + 4;
  } while (iVar41 < 8);
  iVar41 = *(int *)(unaff_FS_OFFSET + 0x2c);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)((int)param_3 + 0xe);
  iVar11 = *(int *)(iVar41 + iVar33 * 4);
  if (*(uint *)(iVar11 + 0x1a4) < *(uint *)(iVar11 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar11 + 0x1a4);
    *puVar4 = &DAT_00a6a630;
    uVar12 = rdtsc();
    puVar4[1] = (int)uVar12;
    *(undefined4 **)(*(int *)(iVar41 + iVar33 * 4) + 0x1a4) = puVar4 + 3;
  }
  iVar41 = *(int *)(iVar41 + iVar33 * 4);
  if (*(uint *)(iVar41 + 0x1a4) < *(uint *)(iVar41 + 0x1a8)) {
    puVar4 = *(undefined4 **)(iVar41 + 0x1a4);
    *puVar4 = &DAT_00a9610c;
    uVar12 = rdtsc();
    puVar4[1] = (int)uVar12;
    *(undefined4 **)(iVar41 + 0x1a4) = puVar4 + 3;
  }
  return (((uint)*(byte *)((int)param_3 + 0xd) + (uint)*(byte *)((int)param_3 + 0xe) * 4 +
          (uint)*(byte *)pfVar1) * 2 + 0x1f & 0xfffffff0) + (int)param_3;
}



void FUN_008fefd0(void)

{
  code *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  code *local_28;
  code *local_24;
  undefined1 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_34 = FUN_008fe280;
  local_c = FUN_008fe2d0;
  local_10 = FUN_008ff1c0;
  local_2c = &LAB_008ff180;
  local_28 = FUN_008ff060;
  local_24 = FUN_008ff0a0;
  local_20 = &LAB_008ff0d0;
  local_30 = &LAB_008ff100;
  local_8 = 1;
  local_7 = 1;
  FUN_008daeb0(&local_34,5,1);
  FUN_008daeb0(&local_34,1,5);
  return;
}



void FUN_008ff060(undefined4 param_1,int param_2,short param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_2 + 0xe) != 0) {
    psVar2 = (short *)(param_2 + 0x12);
    while (*psVar2 != param_3) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 4;
      if ((int)(uint)*(byte *)(param_2 + 0xe) <= iVar1) {
        return;
      }
    }
    FUN_00939b00(param_2 + 0xc,iVar1);
  }
  return;
}



void FUN_008ff0a0(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  short *psVar2;
  
  iVar1 = 0;
  if (*(byte *)(param_2 + 0xe) != 0) {
    psVar2 = (short *)(param_2 + 0x12);
    while (*psVar2 != -1) {
      iVar1 = iVar1 + 1;
      psVar2 = psVar2 + 4;
      if ((int)(uint)*(byte *)(param_2 + 0xe) <= iVar1) {
        return;
      }
    }
    *(undefined2 *)(param_2 + 0x12 + iVar1 * 8) = param_3;
  }
  return;
}



int FUN_008ff120(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)*param_1;
  piVar2 = *(int **)param_1[1];
  iVar3 = (**(code **)(*piVar2 + 8))();
  if (iVar3 == 6) {
    FUN_0093ef30(uVar1,piVar2,param_1 + 4);
  }
  else {
    FUN_0093ee40(uVar1,piVar2,param_1 + 4);
  }
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined4 *)(param_3 + 0xc) = 0;
  return (((uint)*(byte *)(param_3 + 0xd) + (uint)*(byte *)(param_3 + 0xe) * 4 +
          (uint)*(byte *)(param_3 + 0xc)) * 2 + 0x1f & 0xfffffff0) + param_3;
}



void FUN_008ff1c0(int *param_1,int param_2,float *param_3)

{
  int *piVar1;
  int *piVar2;
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
  float unaff_ESI;
  float unaff_EDI;
  float fStack_1b8;
  undefined1 *puStack_1b4;
  int iStack_19c;
  undefined4 uStack_198;
  int iStack_194;
  undefined1 local_170 [180];
  undefined1 auStack_bc [184];
  
  piVar1 = *(int **)param_1[1];
  fStack_1b8 = (float)(int)*(char *)(param_2 + 8);
  piVar2 = *(int **)*param_1;
  puStack_1b4 = local_170;
  (**(code **)(*piVar2 + 0x28))(param_2);
  (**(code **)(*piVar1 + 0x28))(param_2 + iStack_19c * 2,uStack_198,auStack_bc);
  FUN_0093c690(piVar2,piVar1,param_1 + 4,&fStack_1b8);
  if (iStack_194 != 0) {
    FUN_0093b660(param_2);
  }
  pfVar3 = *(float **)(*param_1 + 8);
  fVar4 = pfVar3[9];
  fVar5 = pfVar3[10];
  fVar6 = pfVar3[0xb];
  fVar7 = pfVar3[5];
  fVar8 = pfVar3[6];
  fVar9 = pfVar3[7];
  fVar10 = pfVar3[1];
  fVar11 = pfVar3[2];
  fVar12 = pfVar3[3];
  *param_3 = *pfVar3 * fStack_1b8 + pfVar3[4] * (float)puStack_1b4 + pfVar3[8] * unaff_EDI;
  param_3[1] = fVar10 * fStack_1b8 + fVar7 * (float)puStack_1b4 + fVar4 * unaff_EDI;
  param_3[2] = fVar11 * fStack_1b8 + fVar8 * (float)puStack_1b4 + fVar5 * unaff_EDI;
  param_3[3] = fVar12 * fStack_1b8 + fVar9 * (float)puStack_1b4 + fVar6 * unaff_EDI;
  param_3[3] = (unaff_ESI - (float)piVar2[3]) - (float)piVar1[3];
  return;
}



int FUN_008ff2c0(int *param_1,uint param_2,uint param_3,undefined4 *param_4,uint *param_5)

{
  byte bVar1;
  undefined4 *puVar2;
  float fVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  uint *puVar8;
  undefined8 uVar9;
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
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  short sVar34;
  int iVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  float *pfVar39;
  uint uVar40;
  int unaff_EBX;
  uint uVar41;
  undefined4 *puVar42;
  byte *pbVar43;
  int unaff_FS_OFFSET;
  int *piStack_174;
  float local_168;
  float local_164;
  float local_160;
  int *local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
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
  
  iVar38 = _tls_index;
  iVar37 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar35 = *(int *)(iVar37 + _tls_index * 4);
  if (*(uint *)(iVar35 + 0x1a4) < *(uint *)(iVar35 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar35 + 0x1a4);
    *puVar2 = "TtPredGskf3";
    uVar9 = rdtsc();
    puVar2[1] = (int)uVar9;
    *(undefined4 **)(iVar35 + 0x1a4) = puVar2 + 3;
  }
  iVar35 = *(int *)(iVar37 + iVar38 * 4);
  if (*(uint *)(iVar35 + 0x1a4) < *(uint *)(iVar35 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar35 + 0x1a4);
    *puVar2 = "Ltintern";
    puVar2[3] = &DAT_00a96df4;
    uVar9 = rdtsc();
    puVar2[1] = (int)uVar9;
    *(undefined4 **)(iVar35 + 0x1a4) = puVar2 + 4;
  }
  fVar3 = (float)param_1[0x14];
  iVar35 = *(int *)(param_1[2] + 0x28);
  pbVar43 = (byte *)(param_3 + 0xc);
  if (*(char *)(iVar35 + 0x10) == '\0') {
LAB_008ff553:
    if (fVar3 <= *(float *)(iVar35 + 0xc)) goto LAB_008ff4a7;
    param_4[3] = fVar3;
    if (*(char *)(param_3 + 0xe) == '\0') goto LAB_008ffa8e;
    iVar37 = *(int *)(iVar37 + iVar38 * 4);
    if (*(uint *)(iVar37 + 0x1a4) < *(uint *)(iVar37 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar37 + 0x1a4);
      *puVar2 = "StgetPoints";
      uVar9 = rdtsc();
      puVar2[1] = (int)uVar9;
      *(undefined4 **)(iVar37 + 0x1a4) = puVar2 + 3;
    }
    local_18 = *(float *)(param_1[2] + 8);
    piVar4 = (int *)param_1[1];
    piVar5 = (int *)*param_1;
    piVar6 = (int *)*piVar5;
    local_20 = (float)piVar6[3];
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    uStack_24 = param_4[3];
    local_1c = *(float *)(*piVar4 + 0xc);
    local_14 = local_20 + local_1c + local_18;
    local_14 = local_14 * local_14;
    if (*(byte *)(param_3 + 0xe) != 0) {
      (**(code **)(*piVar6 + 0x28))
                (param_3 + 0x10 + (uint)*(byte *)(param_3 + 0xe) * 8,*pbVar43,afStack_13c + 3);
      pfVar39 = (float *)piVar5[2];
      uVar41 = (uint)*pbVar43;
      fVar3 = *pfVar39;
      fVar10 = pfVar39[1];
      fVar11 = pfVar39[2];
      fVar12 = pfVar39[3];
      fVar13 = pfVar39[4];
      fVar14 = pfVar39[5];
      fVar15 = pfVar39[6];
      fVar16 = pfVar39[7];
      fVar17 = pfVar39[8];
      fVar18 = pfVar39[9];
      fVar19 = pfVar39[10];
      fVar20 = pfVar39[0xb];
      fVar21 = pfVar39[0xc];
      fVar22 = pfVar39[0xd];
      fVar23 = pfVar39[0xe];
      fVar24 = pfVar39[0xf];
      pfVar39 = afStack_13c;
      uVar36 = uVar41;
      do {
        fVar25 = *pfVar39;
        fVar26 = pfVar39[1];
        fVar27 = pfVar39[2];
        *pfVar39 = fVar3 * fVar25 + fVar13 * fVar26 + fVar17 * fVar27 + fVar21;
        pfVar39[1] = fVar10 * fVar25 + fVar14 * fVar26 + fVar18 * fVar27 + fVar22;
        pfVar39[2] = fVar11 * fVar25 + fVar15 * fVar26 + fVar19 * fVar27 + fVar23;
        pfVar39[3] = fVar12 * fVar25 + fVar16 * fVar26 + fVar20 * fVar27 + fVar24;
        pfVar39 = pfVar39 + 4;
        uVar36 = uVar36 - 1;
      } while (0 < (int)uVar36);
      pfVar39 = afStack_13c + uVar41 * 4;
      (**(code **)(*piStack_174 + 0x28))
                (unaff_EBX + uVar41 * 2,*(undefined1 *)(param_3 + 0xd),pfVar39);
      pfVar7 = (float *)piVar4[2];
      uVar36 = (uint)*(byte *)(param_3 + 0xd);
      fVar3 = *pfVar7;
      fVar10 = pfVar7[1];
      fVar11 = pfVar7[2];
      fVar12 = pfVar7[3];
      fVar13 = pfVar7[4];
      fVar14 = pfVar7[5];
      fVar15 = pfVar7[6];
      fVar16 = pfVar7[7];
      fVar17 = pfVar7[8];
      fVar18 = pfVar7[9];
      fVar19 = pfVar7[10];
      fVar20 = pfVar7[0xb];
      fVar21 = pfVar7[0xc];
      fVar22 = pfVar7[0xd];
      fVar23 = pfVar7[0xe];
      fVar24 = pfVar7[0xf];
      do {
        fVar25 = *pfVar39;
        fVar26 = pfVar39[1];
        fVar27 = pfVar39[2];
        *pfVar39 = fVar3 * fVar25 + fVar13 * fVar26 + fVar17 * fVar27 + fVar21;
        pfVar39[1] = fVar10 * fVar25 + fVar14 * fVar26 + fVar18 * fVar27 + fVar22;
        pfVar39[2] = fVar11 * fVar25 + fVar15 * fVar26 + fVar19 * fVar27 + fVar23;
        pfVar39[3] = fVar12 * fVar25 + fVar16 * fVar26 + fVar20 * fVar27 + fVar24;
        pfVar39 = pfVar39 + 4;
        uVar36 = uVar36 - 1;
      } while (0 < (int)uVar36);
    }
    FUN_00939bb0(pbVar43,afStack_13c + 3,0,param_5,param_1[3]);
    if ((*(byte *)(param_3 + 0xe) != 0) && (param_5[0xc10] != 0)) {
      **(int **)(param_5[0xc10] + 4) = *param_5 + (uint)*(byte *)(param_3 + 0xe) * -0x30;
      *(int *)(param_5[0xc10] + 4) = *(int *)(param_5[0xc10] + 4) + 4;
    }
  }
  else {
    iVar31 = *param_1;
    for (iVar32 = *(int *)(*param_1 + 0xc); iVar32 != 0; iVar32 = *(int *)(iVar32 + 0xc)) {
      iVar31 = iVar32;
    }
    iVar32 = param_1[1];
    for (iVar33 = *(int *)(param_1[1] + 0xc); iVar33 != 0; iVar33 = *(int *)(iVar33 + 0xc)) {
      iVar32 = iVar33;
    }
    local_160 = *(float *)(iVar32 + 0x20);
    if (*(float *)(iVar31 + 0x20) < local_160) {
      local_160 = *(float *)(iVar31 + 0x20);
    }
    local_164 = local_160 * *(float *)(iVar35 + 0x18) + (float)param_4[3];
    fVar10 = local_160 * *(float *)(iVar35 + 0x14);
    if (fVar10 < local_164) {
      local_164 = fVar10;
    }
    if (local_164 <= fVar3) goto LAB_008ff553;
    local_168 = local_160 * *(float *)(iVar35 + 0x28) + (float)param_4[3];
    fVar3 = local_160 * *(float *)(iVar35 + 0x24);
    if (fVar3 < local_168) {
      local_168 = fVar3;
    }
    iVar35 = *(int *)(iVar37 + iVar38 * 4);
    if (*(uint *)(iVar35 + 0x1a4) < *(uint *)(iVar35 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar35 + 0x1a4);
      *puVar2 = "Sttoi";
      uVar9 = rdtsc();
      puVar2[1] = (int)uVar9;
      *(undefined4 **)(iVar35 + 0x1a4) = puVar2 + 3;
    }
    FUN_0093de40(param_1,local_160,local_164,local_168,param_3,param_4,param_5);
    iVar38 = _tls_index;
LAB_008ff4a7:
    iVar35 = *(int *)(iVar37 + iVar38 * 4);
    if (*(uint *)(iVar35 + 0x1a4) < *(uint *)(iVar35 + 0x1a8)) {
      puVar2 = *(undefined4 **)(iVar35 + 0x1a4);
      *puVar2 = "Stprocess";
      uVar9 = rdtsc();
      puVar2[1] = (int)uVar9;
      *(undefined4 **)(iVar35 + 0x1a4) = puVar2 + 3;
    }
    local_14c = *(undefined4 *)*param_1;
    local_148 = *(undefined4 *)param_1[1];
    local_154 = param_1 + 4;
    local_150 = ((undefined4 *)*param_1)[2];
    local_144 = *(undefined4 *)(param_1[2] + 8);
    iVar35 = FUN_0093d4a0(&local_154,param_3,param_4,&local_140);
    if (iVar35 == 1) {
      iVar38 = _tls_index;
      if (*(char *)(param_3 + 0xe) != '\0') {
        FUN_00939b60(pbVar43,param_1[3]);
        iVar38 = _tls_index;
      }
      goto LAB_008ffa8e;
    }
    uVar36 = FUN_0093a620(pbVar43,param_3);
    uVar36 = uVar36 & 0xff;
    puVar2 = (undefined4 *)*param_5;
    bVar1 = *(byte *)(param_3 + 0xe);
    if (uVar36 < bVar1) {
      local_18 = *(float *)(param_1[2] + 8);
      piVar4 = (int *)param_1[1];
      piVar5 = (int *)*param_1;
      piVar6 = (int *)*piVar5;
      local_20 = (float)piVar6[3];
      local_1c = *(float *)(*piVar4 + 0xc);
      local_30 = *param_4;
      uStack_2c = param_4[1];
      uStack_28 = param_4[2];
      uStack_24 = param_4[3];
      local_14 = local_1c + local_20 + local_18;
      local_14 = local_14 * local_14;
      if (bVar1 != 0) {
        (**(code **)(*piVar6 + 0x28))(param_3 + 0x10 + (uint)bVar1 * 8,*pbVar43,afStack_13c + 3);
        pfVar39 = (float *)piVar5[2];
        uVar40 = (uint)*pbVar43;
        fVar3 = *pfVar39;
        fVar10 = pfVar39[1];
        fVar11 = pfVar39[2];
        fVar12 = pfVar39[3];
        fVar13 = pfVar39[4];
        fVar14 = pfVar39[5];
        fVar15 = pfVar39[6];
        fVar16 = pfVar39[7];
        fVar17 = pfVar39[8];
        fVar18 = pfVar39[9];
        fVar19 = pfVar39[10];
        fVar20 = pfVar39[0xb];
        fVar21 = pfVar39[0xc];
        fVar22 = pfVar39[0xd];
        fVar23 = pfVar39[0xe];
        fVar24 = pfVar39[0xf];
        pfVar39 = afStack_13c;
        uVar41 = uVar40;
        do {
          fVar25 = *pfVar39;
          fVar26 = pfVar39[1];
          fVar27 = pfVar39[2];
          *pfVar39 = fVar3 * fVar25 + fVar13 * fVar26 + fVar17 * fVar27 + fVar21;
          pfVar39[1] = fVar10 * fVar25 + fVar14 * fVar26 + fVar18 * fVar27 + fVar22;
          pfVar39[2] = fVar11 * fVar25 + fVar15 * fVar26 + fVar19 * fVar27 + fVar23;
          pfVar39[3] = fVar12 * fVar25 + fVar16 * fVar26 + fVar20 * fVar27 + fVar24;
          pfVar39 = pfVar39 + 4;
          uVar41 = uVar41 - 1;
        } while (0 < (int)uVar41);
        pfVar39 = afStack_13c + uVar40 * 4;
        (**(code **)(*piStack_174 + 0x28))
                  (unaff_EBX + uVar40 * 2,*(undefined1 *)(param_3 + 0xd),pfVar39);
        pfVar7 = (float *)piVar4[2];
        uVar41 = (uint)*(byte *)(param_3 + 0xd);
        fVar3 = *pfVar7;
        fVar10 = pfVar7[1];
        fVar11 = pfVar7[2];
        fVar12 = pfVar7[3];
        fVar13 = pfVar7[4];
        fVar14 = pfVar7[5];
        fVar15 = pfVar7[6];
        fVar16 = pfVar7[7];
        fVar17 = pfVar7[8];
        fVar18 = pfVar7[9];
        fVar19 = pfVar7[10];
        fVar20 = pfVar7[0xb];
        fVar21 = pfVar7[0xc];
        fVar22 = pfVar7[0xd];
        fVar23 = pfVar7[0xe];
        fVar24 = pfVar7[0xf];
        do {
          fVar25 = *pfVar39;
          fVar26 = pfVar39[1];
          fVar27 = pfVar39[2];
          *pfVar39 = fVar3 * fVar25 + fVar13 * fVar26 + fVar17 * fVar27 + fVar21;
          pfVar39[1] = fVar10 * fVar25 + fVar14 * fVar26 + fVar18 * fVar27 + fVar22;
          pfVar39[2] = fVar11 * fVar25 + fVar15 * fVar26 + fVar19 * fVar27 + fVar23;
          pfVar39[3] = fVar12 * fVar25 + fVar16 * fVar26 + fVar20 * fVar27 + fVar24;
          pfVar39 = pfVar39 + 4;
          uVar41 = uVar41 - 1;
        } while (0 < (int)uVar41);
      }
      FUN_00939bb0(pbVar43,afStack_13c + 3,uVar36,param_5,param_1[3]);
    }
    puVar42 = (undefined4 *)*param_5;
    *puVar42 = local_140;
    puVar42[1] = afStack_13c[0];
    puVar42[2] = afStack_13c[1];
    puVar42[3] = afStack_13c[2];
    uVar28 = param_4[1];
    uVar29 = param_4[2];
    uVar30 = param_4[3];
    puVar42[4] = *param_4;
    puVar42[5] = uVar28;
    puVar42[6] = uVar29;
    puVar42[7] = uVar30;
    if (uVar36 == 0) {
      iVar37 = *(int *)(param_1[2] + 0x28);
      if ((int)*(char *)(param_3 + 9) + (int)*(char *)(param_3 + 8) == 4) {
        fVar3 = *(float *)(iVar37 + 4);
      }
      else {
        fVar3 = *(float *)(iVar37 + 8);
      }
      if ((float)param_4[3] < fVar3) {
        iVar37 = FUN_0093ab40(pbVar43,*param_1,param_1[1],param_1[2],param_3,puVar42,puVar2,
                              param_1[3],1);
        if (iVar37 == 4) {
          if (*(short *)(puVar42 + 8) == -1) {
            if ((param_5[0xc10] == 0) || (param_2 == 0)) {
              sVar34 = (**(code **)(*(int *)param_1[3] + 8))(*param_1,param_1[1],param_1[2],puVar42)
              ;
              *(short *)(puVar42 + 8) = sVar34;
              if (sVar34 == -1) goto LAB_008ffa18;
              *(short *)(param_3 + 0x12) = sVar34;
              *param_5 = *param_5 + 0x30;
            }
            else {
              iVar37 = (**(code **)(*(int *)param_1[3] + 0xc))(1);
              if (iVar37 == 0) {
                puVar8 = *(uint **)param_5[0xc10];
                *(uint **)param_5[0xc10] = puVar8 + 3;
                puVar8[1] = param_2;
                *puVar8 = (uint)puVar42;
                puVar8[2] = param_3;
                *param_5 = *param_5 + 0x30;
              }
              else {
LAB_008ffa18:
                FUN_00939b00(pbVar43,0);
                puVar42 = puVar2;
              }
            }
          }
          else {
            *param_5 = *param_5 + 0x30;
          }
        }
        else {
          puVar42 = puVar2;
          if (iVar37 != 5) {
            if (iVar37 == 6) {
              *param_5 = *param_5 - 0x30;
            }
            else {
              puVar42 = puVar2 + iVar37 * 0xc;
            }
          }
        }
      }
    }
    else {
      *(undefined2 *)(puVar42 + 8) = *(undefined2 *)(param_3 + 0x12);
      *param_5 = *param_5 + 0x30;
    }
    if ((param_5[0xc10] != 0) && (puVar42 < (undefined4 *)*param_5)) {
      **(uint **)(param_5[0xc10] + 4) = (uint)puVar42;
      *(int *)(param_5[0xc10] + 4) = *(int *)(param_5[0xc10] + 4) + 4;
    }
  }
  iVar37 = *(int *)(unaff_FS_OFFSET + 0x2c);
  iVar38 = _tls_index;
LAB_008ffa8e:
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 0xe);
  iVar35 = *(int *)(iVar37 + iVar38 * 4);
  if (*(uint *)(iVar35 + 0x1a4) < *(uint *)(iVar35 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar35 + 0x1a4);
    *puVar2 = &DAT_00a6a630;
    uVar9 = rdtsc();
    puVar2[1] = (int)uVar9;
    *(undefined4 **)(*(int *)(iVar37 + iVar38 * 4) + 0x1a4) = puVar2 + 3;
  }
  iVar37 = *(int *)(iVar37 + iVar38 * 4);
  if (*(uint *)(iVar37 + 0x1a4) < *(uint *)(iVar37 + 0x1a8)) {
    puVar2 = *(undefined4 **)(iVar37 + 0x1a4);
    *puVar2 = &DAT_00a9610c;
    uVar9 = rdtsc();
    puVar2[1] = (int)uVar9;
    *(undefined4 **)(iVar37 + 0x1a4) = puVar2 + 3;
  }
  return (((uint)*(byte *)(param_3 + 0xd) + (uint)*(byte *)(param_3 + 0xe) * 4 + (uint)*pbVar43) * 2
          + 0x1f & 0xfffffff0) + param_3;
}



void FUN_008ffb30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  code *local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  code *local_24;
  code *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  code *local_c;
  code *local_8;
  undefined1 local_4;
  undefined1 local_3;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_3 = 0;
  local_30 = FUN_008ff120;
  local_8 = FUN_008ff2c0;
  local_c = FUN_008ff1c0;
  local_28 = &LAB_008ff180;
  local_24 = FUN_008ff060;
  local_20 = FUN_008ff0a0;
  local_1c = &LAB_008ff0d0;
  local_2c = &LAB_008ff100;
  local_4 = 1;
  FUN_008daeb0(&local_30,param_2,param_3);
  return;
}



void FUN_008ffc20(void)

{
  undefined1 *local_18;
  code *local_14;
  code *local_10;
  code *local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  local_18 = &LAB_008ffbb0;
  local_14 = FUN_0093f800;
  local_10 = FUN_0093f250;
  local_c = FUN_00935cc0;
  local_8 = 0;
  local_7 = 1;
  FUN_008dadd0(&local_18,1,1);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_008ffc70(float *param_1,int *param_2,int param_3,undefined4 param_4)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  float fVar4;
  int *piVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float *pfVar9;
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
  uint uVar26;
  int in_ECX;
  int iVar27;
  float *pfVar28;
  uint uVar29;
  int *unaff_EBX;
  int iVar30;
  int unaff_FS_OFFSET;
  int iStack_384;
  float *local_37c;
  float fStack_378;
  float local_370;
  float local_36c;
  undefined1 *local_368;
  float *local_364;
  int local_360;
  int local_35c;
  float **local_358;
  int *local_354;
  float *local_350;
  int *piStack_34c;
  int iStack_348;
  undefined4 uStack_344;
  float fStack_300;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  undefined1 local_2e0 [52];
  float afStack_2ac [4];
  int local_29c;
  int local_298;
  int local_294;
  undefined1 local_290;
  int local_28c;
  undefined1 local_280 [180];
  undefined1 auStack_1cc [44];
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined4 local_14;
  
  iVar27 = _tls_index;
  iVar30 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar2 = *(int *)(iVar30 + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "LtPredGskf";
    puVar3[3] = &DAT_00a96df4;
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(*(int *)(iVar30 + iVar27 * 4) + 0x1a4) = puVar3 + 4;
  }
  if (*(float *)(in_ECX + 0x18) == *(float *)(param_3 + 0x10)) {
LAB_008fff62:
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_3 + 0x14);
    fVar4 = param_1[2];
    fVar8 = *(float *)(param_3 + 0x18) * *(float *)((int)fVar4 + 0x5c);
    iVar2 = param_2[2];
    fVar7 = *(float *)(param_3 + 0x18) * *(float *)(iVar2 + 0x5c);
    pfVar28 = *(float **)(param_3 + 0x28);
    local_370 = fVar8 * (*(float *)((int)fVar4 + 0x40) - *(float *)((int)fVar4 + 0x50)) +
                fVar7 * (*(float *)(iVar2 + 0x50) - *(float *)(iVar2 + 0x40));
    local_36c = fVar8 * (*(float *)((int)fVar4 + 0x44) - *(float *)((int)fVar4 + 0x54)) +
                fVar7 * (*(float *)(iVar2 + 0x54) - *(float *)(iVar2 + 0x44));
    local_368 = (undefined1 *)
                (fVar8 * (*(float *)((int)fVar4 + 0x48) - *(float *)((int)fVar4 + 0x58)) +
                fVar7 * (*(float *)(iVar2 + 0x58) - *(float *)(iVar2 + 0x48)));
    local_364 = (float *)(*(float *)((int)fVar4 + 0xa0) * *(float *)((int)fVar4 + 0x9c) * fVar8 +
                         *(float *)(iVar2 + 0xa0) * *(float *)(iVar2 + 0x9c) * fVar7);
    local_37c = (float *)((float)local_368 * *(float *)(in_ECX + 0x28) +
                         local_36c * *(float *)(in_ECX + 0x24) +
                         local_370 * *(float *)(in_ECX + 0x20));
    fVar4 = (*(float *)(in_ECX + 0x2c) - (float)local_37c) - (float)local_364;
    if ((*pfVar28 < fVar4) && (*(float *)(in_ECX + 0x1c) * 0.5 < fVar4)) {
      iVar2 = *(int *)(iVar30 + iVar27 * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = "Sttim";
        uVar6 = rdtsc();
        puVar3[1] = (int)uVar6;
        *(undefined4 **)(*(int *)(iVar30 + iVar27 * 4) + 0x1a4) = puVar3 + 3;
      }
      *(float *)(in_ECX + 0x2c) = fVar4;
      if (*(char *)(in_ECX + 0x32) != '\0') {
        FUN_00939b60(in_ECX + 0x30,*(undefined4 *)(in_ECX + 8));
        iVar27 = _tls_index;
      }
      goto LAB_008ffd58;
    }
    if (*(char *)(pfVar28 + 4) != '\0') {
      iVar2 = *(int *)(iVar30 + iVar27 * 4);
      if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
        *puVar3 = "Sttoi";
        uVar6 = rdtsc();
        puVar3[1] = (int)uVar6;
        *(undefined4 **)(*(int *)(iVar30 + iVar27 * 4) + 0x1a4) = puVar3 + 3;
      }
      piStack_34c = param_2;
      local_350 = param_1;
      uStack_344 = *(undefined4 *)(in_ECX + 8);
      pfVar28 = *(float **)(param_3 + 0x28);
      iStack_348 = param_3;
      local_37c = (float *)(pfVar28[6] * *(float *)(in_ECX + 0x1c) + *(float *)(in_ECX + 0x2c));
      pfVar9 = (float *)(pfVar28[5] * *(float *)(in_ECX + 0x1c));
      if ((float)pfVar9 < (float)local_37c) {
        local_37c = pfVar9;
      }
      fStack_300 = fVar4;
      fStack_2f0 = local_370;
      fStack_2ec = local_36c;
      fStack_2e8 = (float)local_368;
      fStack_2e4 = (float)local_364;
      if (fVar4 < (float)local_37c) {
        fStack_378 = pfVar28[10] * *(float *)(in_ECX + 0x1c) + *(float *)(in_ECX + 0x2c);
        fVar4 = pfVar28[9] * *(float *)(in_ECX + 0x1c);
        if (fVar4 < fStack_378) {
          fStack_378 = fVar4;
        }
        FUN_0093de40(&local_350,*(undefined4 *)(in_ECX + 0x1c),local_37c,fStack_378,in_ECX + 0xc,
                     in_ECX + 0x20,param_4);
        iVar27 = _tls_index;
        goto LAB_008ffd01;
      }
    }
    if (pfVar28[3] < fVar4) {
      iVar30 = *(int *)(iVar30 + iVar27 * 4);
      if (*(uint *)(iVar30 + 0x1a4) < *(uint *)(iVar30 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar30 + 0x1a4);
        *puVar3 = "StgetPoints";
        uVar6 = rdtsc();
        puVar3[1] = (int)uVar6;
        *(undefined4 **)(iVar30 + 0x1a4) = puVar3 + 3;
      }
      *(float *)(in_ECX + 0x2c) = fVar4;
      fStack_188 = *(float *)(param_3 + 8);
      piVar5 = (int *)*param_2;
      uStack_1a0 = *(undefined4 *)(in_ECX + 0x20);
      uStack_19c = *(undefined4 *)(in_ECX + 0x24);
      uStack_198 = *(undefined4 *)(in_ECX + 0x28);
      uStack_194 = *(undefined4 *)(in_ECX + 0x2c);
      fStack_190 = (float)((int *)*param_1)[3];
      fStack_18c = (float)piVar5[3];
      pbVar1 = (byte *)(in_ECX + 0x30);
      fStack_184 = fStack_18c + fStack_190 + fStack_188;
      fStack_184 = fStack_184 * fStack_184;
      if (*(byte *)(in_ECX + 0x32) != 0) {
        (**(code **)(*(int *)*param_1 + 0x28))
                  (in_ECX + 0x34 + (uint)*(byte *)(in_ECX + 0x32) * 8,*pbVar1,afStack_2ac + 3);
        pfVar28 = (float *)param_1[2];
        uVar29 = (uint)*pbVar1;
        fVar4 = *pfVar28;
        fVar7 = pfVar28[1];
        fVar8 = pfVar28[2];
        fVar10 = pfVar28[3];
        fVar11 = pfVar28[4];
        fVar12 = pfVar28[5];
        fVar13 = pfVar28[6];
        fVar14 = pfVar28[7];
        fVar15 = pfVar28[8];
        fVar16 = pfVar28[9];
        fVar17 = pfVar28[10];
        fVar18 = pfVar28[0xb];
        fVar19 = pfVar28[0xc];
        fVar20 = pfVar28[0xd];
        fVar21 = pfVar28[0xe];
        fVar22 = pfVar28[0xf];
        pfVar28 = afStack_2ac;
        uVar26 = uVar29;
        do {
          fVar23 = *pfVar28;
          fVar24 = pfVar28[1];
          fVar25 = pfVar28[2];
          *pfVar28 = fVar4 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
          pfVar28[1] = fVar7 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
          pfVar28[2] = fVar8 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
          pfVar28[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
          pfVar28 = pfVar28 + 4;
          uVar26 = uVar26 - 1;
        } while (0 < (int)uVar26);
        (**(code **)(*piVar5 + 0x28))
                  (iStack_384 + uVar29 * 2,*(undefined1 *)(in_ECX + 0x31),afStack_2ac + uVar29 * 4);
        pfVar28 = (float *)param_2[2];
        uVar26 = (uint)*(byte *)(in_ECX + 0x31);
        fVar4 = *pfVar28;
        fVar7 = pfVar28[1];
        fVar8 = pfVar28[2];
        fVar10 = pfVar28[3];
        fVar11 = pfVar28[4];
        fVar12 = pfVar28[5];
        fVar13 = pfVar28[6];
        fVar14 = pfVar28[7];
        fVar15 = pfVar28[8];
        fVar16 = pfVar28[9];
        fVar17 = pfVar28[10];
        fVar18 = pfVar28[0xb];
        fVar19 = pfVar28[0xc];
        fVar20 = pfVar28[0xd];
        fVar21 = pfVar28[0xe];
        fVar22 = pfVar28[0xf];
        do {
          fVar23 = *local_37c;
          fVar24 = local_37c[1];
          fVar25 = local_37c[2];
          *local_37c = fVar4 * fVar23 + fVar11 * fVar24 + fVar15 * fVar25 + fVar19;
          local_37c[1] = fVar7 * fVar23 + fVar12 * fVar24 + fVar16 * fVar25 + fVar20;
          local_37c[2] = fVar8 * fVar23 + fVar13 * fVar24 + fVar17 * fVar25 + fVar21;
          local_37c[3] = fVar10 * fVar23 + fVar14 * fVar24 + fVar18 * fVar25 + fVar22;
          local_37c = local_37c + 4;
          uVar26 = uVar26 - 1;
        } while (0 < (int)uVar26);
      }
      FUN_00939bb0(pbVar1,afStack_2ac + 3,0,param_4,*(undefined4 *)(in_ECX + 8));
      iVar30 = *(int *)(unaff_FS_OFFSET + 0x2c);
      iVar27 = _tls_index;
      goto LAB_008ffd58;
    }
  }
  else {
    if (*(char *)(*(int *)(param_3 + 0x28) + 0x10) != '\0') {
      iVar30 = *(int *)(iVar30 + iVar27 * 4);
      if (*(uint *)(iVar30 + 0x1a4) < *(uint *)(iVar30 + 0x1a8)) {
        puVar3 = *(undefined4 **)(iVar30 + 0x1a4);
        *puVar3 = "TtrecalcT0";
        uVar6 = rdtsc();
        puVar3[1] = (int)uVar6;
        *(undefined4 **)(iVar30 + 0x1a4) = puVar3 + 3;
      }
      local_370 = *param_1;
      local_368 = local_2e0;
      local_36c = param_1[1];
      local_360 = *param_2;
      local_358 = &local_350;
      local_35c = param_2[1];
      local_364 = param_1;
      local_354 = param_2;
      FUN_008dd150((int)param_1[2] + 0x40,*(undefined4 *)(param_3 + 0x10),local_2e0);
      FUN_008dd150(param_2[2] + 0x40,*(undefined4 *)(param_3 + 0x10),&local_350);
      afStack_2ac[3] = (float)(int)*(char *)(in_ECX + 0x14);
      iVar30 = in_ECX + 0xc;
      local_29c = (int)*(char *)(in_ECX + 0x15);
      local_294 = (int)*(char *)(in_ECX + 0x17);
      local_298 = (int)*(char *)(in_ECX + 0x16);
      local_290 = 0;
      local_28c = 0;
      (**(code **)(*(int *)*param_1 + 0x28))(iVar30,afStack_2ac[3],local_280);
      (**(code **)(*unaff_EBX + 0x28))(iVar30 + (int)afStack_2ac[0] * 2,afStack_2ac[1],auStack_1cc);
      FUN_0093f1c0(&local_370,&local_360,**(undefined4 **)(param_3 + 0x28),afStack_2ac + 3,
                   in_ECX + 0x20);
      if (local_28c != 0) {
        FUN_0093b660(iVar30);
      }
      iVar30 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if (*(uint *)(iVar30 + 0x1a4) < *(uint *)(iVar30 + 0x1a8)) {
        iVar30 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
        puVar3 = *(undefined4 **)(iVar30 + 0x1a4);
        *puVar3 = &DAT_00a9610c;
        uVar6 = rdtsc();
        puVar3[1] = (int)uVar6;
        *(undefined4 **)(iVar30 + 0x1a4) = puVar3 + 3;
      }
      iVar30 = *(int *)(unaff_FS_OFFSET + 0x2c);
      iVar27 = _tls_index;
      goto LAB_008fff62;
    }
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(param_3 + 0x14);
  }
LAB_008ffd01:
  iVar2 = *(int *)(iVar30 + iVar27 * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar3 = "Stprocess";
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar3 + 3;
  }
  FUN_00939450(param_1,param_2,param_3,param_4);
  iVar27 = _tls_index;
LAB_008ffd58:
  iVar30 = *(int *)(iVar30 + iVar27 * 4);
  if (*(uint *)(iVar30 + 0x1a4) < *(uint *)(iVar30 + 0x1a8)) {
    puVar3 = *(undefined4 **)(iVar30 + 0x1a4);
    *puVar3 = &DAT_00a6a630;
    uVar6 = rdtsc();
    puVar3[1] = (int)uVar6;
    *(undefined4 **)(iVar30 + 0x1a4) = puVar3 + 3;
  }
  return;
}


