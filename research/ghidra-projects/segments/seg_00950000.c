
void FUN_00950b10(undefined1 *param_1,float *param_2,float *param_3,float *param_4,float param_5)

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
  
  fVar10 = *param_3;
  fVar1 = param_3[1];
  fVar8 = param_3[2];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar6 = fVar2 - *param_4;
  fVar7 = fVar3 - param_4[1];
  fVar9 = fVar4 - param_4[2];
  fVar11 = fVar10 - *param_4;
  fVar12 = fVar1 - param_4[1];
  fVar13 = fVar8 - param_4[2];
  fVar5 = (fVar3 - fVar1) * fVar9 - (fVar4 - fVar8) * fVar7;
  fVar9 = (fVar4 - fVar8) * fVar6 - (fVar2 - fVar10) * fVar9;
  fVar6 = (fVar2 - fVar10) * fVar7 - (fVar3 - fVar1) * fVar6;
  fVar7 = (fVar1 - fVar3) * fVar13 - (fVar8 - fVar4) * fVar12;
  fVar8 = (fVar8 - fVar4) * fVar11 - (fVar10 - fVar2) * fVar13;
  fVar10 = (fVar10 - fVar2) * fVar12 - (fVar1 - fVar3) * fVar11;
  if ((param_5 <= fVar6 * fVar6 + fVar9 * fVar9 + fVar5 * fVar5) &&
     (param_5 <= fVar10 * fVar10 + fVar8 * fVar8 + fVar7 * fVar7)) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00950c30(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[2] = 0;
  in_ECX[3] = param_1;
  *in_ECX = &PTR_LAB_00aa333c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00950ca0(ushort *param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int local_22c;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  if (-1 < param_2 + -1) {
    local_22c = param_2;
    do {
      uVar6 = (uint)*param_1;
      iVar5 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x28))
                        (*(undefined4 *)(*(int *)(in_ECX + 0x1c) + (uVar6 / 3) * 4),local_220);
      puVar1 = (undefined4 *)((uVar6 % 3 + 1) * 0x10 + iVar5);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *param_3 = *puVar1;
      param_3[1] = uVar2;
      param_3[2] = uVar3;
      param_3[3] = uVar4;
      param_3[3] = uVar6 | 0x3f000000;
      param_1 = param_1 + 1;
      param_3 = param_3 + 4;
      local_22c = local_22c + -1;
    } while (local_22c != 0);
  }
  return;
}



void FUN_00950d80(float *param_1,float param_2,undefined1 (*param_3) [16])

{
  float *pfVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  
  *(undefined4 *)*param_3 = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 4) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 8) = 0x7f7fffff;
  *(undefined4 *)(*param_3 + 0xc) = 0x7f7fffff;
  *(undefined4 *)param_3[1] = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 4) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 8) = 0xff7fffff;
  *(undefined4 *)(param_3[1] + 0xc) = 0xff7fffff;
  iVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x14)) {
    iVar6 = 0;
    do {
      pfVar1 = (float *)(*(int *)(in_ECX + 0x10) + iVar6);
      fVar10 = *pfVar1;
      fVar3 = pfVar1[1];
      fVar4 = pfVar1[2];
      fVar7 = *param_1 * fVar10 + param_1[4] * fVar3 + param_1[8] * fVar4 + param_1[0xc];
      fVar8 = param_1[1] * fVar10 + param_1[5] * fVar3 + param_1[9] * fVar4 + param_1[0xd];
      fVar9 = param_1[2] * fVar10 + param_1[6] * fVar3 + param_1[10] * fVar4 + param_1[0xe];
      fVar10 = param_1[3] * fVar10 + param_1[7] * fVar3 + param_1[0xb] * fVar4 + param_1[0xf];
      auVar11._4_4_ = fVar8;
      auVar11._0_4_ = fVar7;
      auVar11._8_4_ = fVar9;
      auVar11._12_4_ = fVar10;
      auVar11 = minps(*param_3,auVar11);
      *param_3 = auVar11;
      auVar2._4_4_ = fVar8;
      auVar2._0_4_ = fVar7;
      auVar2._8_4_ = fVar9;
      auVar2._12_4_ = fVar10;
      auVar11 = maxps(param_3[1],auVar2);
      param_3[1] = auVar11;
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar5 < *(int *)(in_ECX + 0x14));
  }
  fVar10 = *(float *)(*param_3 + 4);
  fVar3 = *(float *)(*param_3 + 8);
  fVar4 = *(float *)(*param_3 + 0xc);
  param_2 = param_2 + *(float *)(in_ECX + 0xc);
  *(float *)*param_3 = *(float *)*param_3 - param_2;
  *(float *)(*param_3 + 4) = fVar10 - param_2;
  *(float *)(*param_3 + 8) = fVar3 - param_2;
  *(float *)(*param_3 + 0xc) = fVar4 - param_2;
  fVar10 = *(float *)(param_3[1] + 4);
  fVar3 = *(float *)(param_3[1] + 8);
  fVar4 = *(float *)(param_3[1] + 0xc);
  *(float *)param_3[1] = *(float *)param_3[1] + param_2;
  *(float *)(param_3[1] + 4) = fVar10 + param_2;
  *(float *)(param_3[1] + 8) = fVar3 + param_2;
  *(float *)(param_3[1] + 0xc) = fVar4 + param_2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00950e50(float *param_1,float *param_2)

{
  int *piVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  int local_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined1 local_220 [524];
  undefined4 local_14;
  
  local_14 = DAT_00b30aac;
  iVar2 = 0;
  uVar3 = 0;
  local_238 = -3.4028235e+38;
  if (0 < *(int *)(in_ECX + 0x20)) {
    local_23c = 0;
    do {
      piVar1 = (int *)(**(code **)(**(int **)(in_ECX + 0x18) + 0x28))
                                (*(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar2 * 4),local_220);
      (**(code **)(*piVar1 + 0x24))(param_1,&local_238);
      fStack_234 = fStack_228 * param_1[2] + fStack_22c * param_1[1] + fStack_230 * *param_1;
      if (local_238 < fStack_234) {
        *param_2 = fStack_230;
        param_2[1] = fStack_22c;
        param_2[2] = fStack_228;
        param_2[3] = fStack_224;
        uVar3 = ((int)(((uint)fStack_224 & 0xc0ffffff) + ((int)fStack_224 >> 0x1f & 0xfU)) >> 4) +
                local_23c;
        local_238 = fStack_234;
      }
      iVar2 = iVar2 + 1;
      local_23c = local_23c + 3;
    } while (iVar2 < *(int *)(in_ECX + 0x20));
  }
  param_2[3] = (float)(uVar3 | 0x3f000000);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00950f60(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  undefined4 local_24c;
  int local_248;
  undefined1 local_241;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  float local_22c;
  undefined1 auStack_220 [524];
  undefined4 local_14;
  
  iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  local_14 = DAT_00b30aac;
  iVar6 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar6 + 0x1a4) < *(uint *)(iVar6 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar6 + 0x1a4);
    *puVar1 = "TtrcConvxPiece";
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar6 + 0x1a4) = puVar1 + 3;
  }
  iVar6 = 0;
  local_248 = -1;
  local_22c = 1.0;
  local_24c = 3.4028235e+38;
  if (0 < *(int *)(in_ECX + 0x20)) {
    do {
      if ((*(undefined4 **)(param_2 + 0x24) == (undefined4 *)0x0) ||
         (pcVar3 = (char *)(**(code **)**(undefined4 **)(param_2 + 0x24))
                                     (&local_241,param_2,*(undefined4 *)(in_ECX + 0x18),
                                      *(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar6 * 4)),
         *pcVar3 != '\0')) {
        piVar4 = (int *)(**(code **)(**(int **)(in_ECX + 0x18) + 0x28))
                                  (*(undefined4 *)(*(int *)(in_ECX + 0x1c) + iVar6 * 4),auStack_220)
        ;
        pcVar3 = (char *)(**(code **)(*piVar4 + 0x14))((int)&local_24c + 2,param_2,&local_248);
        if ((*pcVar3 != '\0') && (local_22c < local_24c)) {
          local_24c = local_22c;
          *param_3 = uStack_240;
          param_3[1] = uStack_23c;
          param_3[2] = uStack_238;
          param_3[3] = uStack_234;
          param_3[4] = uStack_230;
          param_3[5] = local_22c;
          local_248 = iVar6;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(in_ECX + 0x20));
    iVar5 = *(int *)(unaff_FS_OFFSET + 0x2c);
  }
  iVar5 = *(int *)(iVar5 + _tls_index * 4);
  if (*(uint *)(iVar5 + 0x1a4) < *(uint *)(iVar5 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar5 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar2 = rdtsc();
    puVar1[1] = (int)uVar2;
    *(undefined4 **)(iVar5 + 0x1a4) = puVar1 + 3;
  }
  *(bool *)param_1 = local_248 != -1;
  return;
}



void FUN_009510e0(undefined1 *param_1,int param_2,int param_3,char *param_4,char *param_5,
                 char *param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  bool bVar7;
  
  sVar1 = **(short **)(param_2 + 0x10);
  sVar2 = **(short **)(param_2 + 0x14);
  sVar3 = **(short **)(param_2 + 0x18);
  sVar4 = **(short **)(param_3 + 0x10);
  sVar5 = **(short **)(param_3 + 0x14);
  sVar6 = **(short **)(param_3 + 0x18);
  bVar7 = true;
  if (sVar1 == sVar4) {
    if ((sVar2 == sVar5) || (sVar2 == sVar6)) {
      bVar7 = *param_4 == '\0';
      *param_4 = '\x01';
    }
    if ((sVar3 == sVar5) || (sVar3 == sVar6)) {
      if (*param_5 != '\0') {
        bVar7 = false;
      }
      *param_5 = '\x01';
    }
  }
  if (sVar1 == sVar5) {
    if (sVar2 == sVar6) {
      if (*param_4 != '\0') {
        bVar7 = false;
      }
      *param_4 = '\x01';
    }
    if (sVar3 == sVar6) {
      if (*param_5 != '\0') {
        bVar7 = false;
      }
      *param_5 = '\x01';
    }
  }
  if (((sVar2 == sVar4) && ((sVar3 == sVar5 || (sVar3 == sVar6)))) ||
     ((sVar2 == sVar5 && (sVar3 == sVar6)))) {
    if (*param_6 != '\0') {
      bVar7 = false;
    }
    *param_6 = '\x01';
  }
  *param_1 = bVar7;
  return;
}



void FUN_009511b0(char *param_1,int *param_2,int *param_3,int *param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_20;
  
  cVar3 = '\x01';
  local_20 = 0;
  iVar6 = 0;
  do {
    if (param_4[1] <= local_20) break;
    iVar5 = 0;
    if (cVar3 != '\0') {
      iVar4 = 0;
      do {
        if (param_2[1] <= iVar5) break;
        pfVar1 = (float *)(*param_4 + iVar6);
        pfVar2 = (float *)(*param_2 + iVar4);
        if ((cVar3 == '\0') ||
           (param_5 <= pfVar1[1] * pfVar2[1] + *pfVar1 * *pfVar2 + pfVar1[2] * pfVar2[2] + pfVar1[3]
           )) {
          cVar3 = '\0';
        }
        else {
          cVar3 = '\x01';
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (cVar3 != '\0');
    }
    iVar5 = 0;
    if (cVar3 != '\0') {
      iVar4 = 0;
      do {
        if (param_3[1] <= iVar5) break;
        if (cVar3 == '\0') {
LAB_009512be:
          cVar3 = '\0';
        }
        else {
          pfVar1 = (float *)(*param_4 + iVar6);
          pfVar2 = (float *)(*param_3 + iVar4);
          if (param_5 <=
              pfVar1[1] * pfVar2[1] + *pfVar1 * *pfVar2 + pfVar1[2] * pfVar2[2] + pfVar1[3])
          goto LAB_009512be;
          cVar3 = '\x01';
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x10;
      } while (cVar3 != '\0');
    }
    local_20 = local_20 + 1;
    iVar6 = iVar6 + 0x10;
  } while (cVar3 != '\0');
  *param_1 = cVar3;
  return;
}



void FUN_009512f0(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int *param_6,undefined4 param_7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 local_15;
  bool local_14;
  char local_10 [4];
  char local_c [4];
  char local_8 [4];
  int local_4;
  
  pcVar2 = (char *)FUN_009511b0(&local_15,param_2,param_4,param_5,param_7);
  iVar1 = param_6[1];
  local_14 = *pcVar2 != '\0';
  local_4 = 0;
  if (0 < iVar1) {
    iVar4 = 0;
    do {
      iVar6 = 0;
      local_10[0] = '\0';
      local_c[0] = '\0';
      local_8[0] = '\0';
      iVar3 = local_4;
      if (0 < iVar1) {
        iVar5 = 0;
        do {
          if (iVar6 != iVar3) {
            FUN_009510e0(&local_15,iVar4 + *param_6,iVar5 + *param_6,local_10,local_c,local_8);
            iVar3 = local_4;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x20;
        } while (iVar6 < iVar1);
      }
      if ((((local_14 == false) || (local_10[0] == '\0')) || (local_c[0] == '\0')) ||
         (local_8[0] == '\0')) {
        local_14 = false;
      }
      else {
        local_14 = true;
      }
      local_4 = iVar3 + 1;
      iVar4 = iVar4 + 0x20;
    } while (local_4 < iVar1);
    *param_1 = local_14;
    return;
  }
  *param_1 = local_14;
  return;
}



void FUN_009513f0(char *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                 int *param_6,undefined4 param_7)

{
  float *pfVar1;
  short sVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_2d;
  int local_2c;
  char local_28 [4];
  char local_24 [4];
  char local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  pcVar4 = (char *)FUN_009511b0(&local_2d,param_2,param_4,param_5,param_7);
  iVar6 = param_6[1];
  bVar10 = *pcVar4 != '\0';
  local_2c = 0;
  if (0 < iVar6) {
    uVar11 = 0x7fffffff;
    uVar12 = 0x7fffffff;
    uVar13 = 0x7fffffff;
    uVar14 = 0x7fffffff;
    local_1c = 0;
    local_14 = iVar6;
    do {
      if (bVar10 == false) {
LAB_0095146a:
        bVar10 = false;
      }
      else {
        iVar7 = *param_6;
        sVar2 = **(short **)(iVar7 + 0x14 + local_1c);
        if ((**(short **)(iVar7 + 0x10 + local_1c) == sVar2) ||
           (sVar2 == **(short **)(iVar7 + local_1c + 0x18))) goto LAB_0095146a;
        bVar10 = true;
      }
      iVar8 = 0;
      local_28[0] = '\0';
      local_24[0] = '\0';
      local_20[0] = '\0';
      iVar7 = local_1c;
      if (0 < iVar6) {
        iVar9 = 0;
        do {
          if (iVar8 != local_2c) {
            if (bVar10) {
              iVar6 = *param_6;
              pfVar1 = (float *)(iVar9 + iVar6);
              pfVar5 = (float *)(iVar6 + iVar7);
              if (((*(short *)pfVar5[4] == **(short **)(iVar9 + 0x10 + iVar6)) &&
                  (*(short *)pfVar5[5] == *(short *)pfVar1[5])) &&
                 (sVar2 = *(short *)pfVar5[6], sVar2 == *(short *)pfVar1[6])) {
                local_18 = 0x3a83126f;
                auVar3._4_4_ = -(uint)(0.001 < (float)((uint)(pfVar5[1] - pfVar1[1]) & uVar12));
                auVar3._0_4_ = -(uint)(0.001 < (float)((uint)(*pfVar5 - *pfVar1) & uVar11));
                auVar3._8_4_ = -(uint)(0.001 < (float)((uint)(pfVar5[2] - pfVar1[2]) & uVar13));
                auVar3._12_4_ = -(uint)(0.001 < (float)((uint)(pfVar5[3] - pfVar1[3]) & uVar14));
                iVar6 = movmskps(CONCAT22((short)((uint)pfVar5[6] >> 0x10),sVar2),auVar3);
                if (iVar6 == 0) goto LAB_00951528;
              }
              pcVar4 = (char *)FUN_009510e0(&local_2d,pfVar5,pfVar1,local_28,local_24,local_20);
              if (*pcVar4 != '\0') {
                bVar10 = true;
                iVar7 = local_1c;
                iVar6 = local_14;
                goto LAB_00951532;
              }
            }
LAB_00951528:
            bVar10 = false;
            iVar7 = local_1c;
            iVar6 = local_14;
          }
LAB_00951532:
          iVar8 = iVar8 + 1;
          iVar9 = iVar9 + 0x20;
        } while (iVar8 < iVar6);
      }
      if (((bVar10) && (local_28[0] != '\0')) && ((local_24[0] != '\0' && (local_20[0] != '\0')))) {
        bVar10 = true;
      }
      else {
        bVar10 = false;
      }
      local_2c = local_2c + 1;
      local_1c = iVar7 + 0x20;
    } while (local_2c < iVar6);
  }
  if (2 < *(int *)(param_4 + 4)) {
    if ((bVar10 != false) && ((iVar6 - *(int *)(param_3 + 8) / 2) + -2 + *(int *)(param_4 + 4) == 0)
       ) {
      *param_1 = '\x01';
      return;
    }
    bVar10 = false;
  }
  *param_1 = bVar10;
  return;
}



undefined1 *
FUN_009515c0(undefined1 *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined1 local_8d;
  char local_8c [4];
  undefined4 local_88;
  int local_84;
  uint local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  local_88 = *(undefined4 *)(param_2 + 0x14);
  local_8c[0] = '\0';
  local_6c = 0;
  local_68 = 0;
  local_64 = -0x80000000;
  local_78 = 0;
  local_74 = 0;
  local_70 = -0x80000000;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  if (0 < param_4) {
    do {
      if (local_80 == (local_7c & 0x3fffffff)) {
        FUN_008a6ee0(&local_84,0x10);
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      puVar6 = (undefined4 *)(local_80 * 0x10 + local_84);
      local_80 = local_80 + 1;
      param_3 = param_3 + 4;
      param_4 = param_4 + -1;
      *puVar6 = uVar2;
      puVar6[1] = uVar3;
      puVar6[2] = uVar4;
      puVar6[3] = uVar5;
    } while (param_4 != 0);
  }
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_0092e860(param_6,local_50,local_60);
    FUN_0092e860(&local_84,local_30,local_40);
  }
  FUN_00930040(&local_8d,param_2,param_5,param_6,local_20,local_8c,&local_78,&local_6c);
  if (local_8c[0] == '\0') {
    puVar7 = (undefined1 *)
             FUN_009513f0(&local_8d,&local_84,param_5,param_6,&local_78,&local_6c,local_88);
  }
  else {
    puVar7 = (undefined1 *)
             FUN_009512f0(&local_8d,&local_84,param_5,param_6,&local_78,&local_6c,local_88);
  }
  uVar1 = *puVar7;
  if (*(char *)(param_2 + 1) != '\0') {
    FUN_0092ea40(param_6,local_50,local_60);
    FUN_0092ea40(&local_84,local_30,local_40);
  }
  *param_1 = uVar1;
  if (-1 < (int)local_7c) {
    FUN_008a75d0(local_84,local_7c << 4,0x14);
  }
  if (-1 < local_70) {
    FUN_008a75d0(local_78,local_70 << 4,0x14);
  }
  if (-1 < local_64) {
    FUN_008a75d0(local_6c,local_64 << 5,0x14);
  }
  return param_1;
}



int FUN_009517d0(void)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar2 = *(float *)(in_ECX + 0xf80);
  iVar5 = in_ECX + 0xf70;
  iVar4 = *(int *)(in_ECX + 0x10) + -2;
  uVar3 = *(int *)(in_ECX + 0x10) - 1;
  iVar6 = iVar5;
  if (3 < (int)uVar3) {
    uVar3 = uVar3 >> 2;
    iVar4 = iVar4 + uVar3 * -4;
    do {
      if (*(float *)(iVar5 + 0x60) < fVar2) {
        iVar6 = iVar5 + 0x50;
        fVar2 = *(float *)(iVar5 + 0x60);
      }
      if (*(float *)(iVar5 + 0xb0) < fVar2) {
        iVar6 = iVar5 + 0xa0;
        fVar2 = *(float *)(iVar5 + 0xb0);
      }
      if (*(float *)(iVar5 + 0x100) < fVar2) {
        iVar6 = iVar5 + 0xf0;
        fVar2 = *(float *)(iVar5 + 0x100);
      }
      if (*(float *)(iVar5 + 0x150) < fVar2) {
        iVar6 = iVar5 + 0x140;
        fVar2 = *(float *)(iVar5 + 0x150);
      }
      iVar5 = iVar5 + 0x140;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (-1 < iVar4) {
    iVar4 = iVar4 + 1;
    do {
      pfVar1 = (float *)(iVar5 + 0x60);
      iVar5 = iVar5 + 0x50;
      if (*pfVar1 < fVar2) {
        iVar6 = iVar5;
        fVar2 = *pfVar1;
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return iVar6;
}



undefined4 FUN_009518b0(int param_1,int param_2,float *param_3,undefined4 *param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  int iVar5;
  int in_ECX;
  undefined4 extraout_ECX;
  uint uVar6;
  int local_58;
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
  
  pfVar1 = *(float **)(param_2 + 0x14);
  pfVar2 = *(float **)(param_2 + 0x34);
  local_20 = *param_3;
  fStack_1c = param_3[1];
  fStack_18 = param_3[2];
  fStack_14 = param_3[3];
  pfVar3 = *(float **)(param_2 + 0x24);
  local_40 = local_20 - *pfVar1;
  fStack_3c = fStack_1c - pfVar1[1];
  fStack_38 = fStack_18 - pfVar1[2];
  fStack_34 = fStack_14 - pfVar1[3];
  local_30 = local_20 - *pfVar3;
  fStack_2c = fStack_1c - pfVar3[1];
  fStack_28 = fStack_18 - pfVar3[2];
  fStack_24 = fStack_14 - pfVar3[3];
  local_20 = local_20 - *pfVar2;
  fStack_1c = fStack_1c - pfVar2[1];
  fStack_18 = fStack_18 - pfVar2[2];
  fStack_14 = fStack_14 - pfVar2[3];
  FUN_0088fd90(&local_40,param_2);
  auVar4._4_4_ = -(uint)(fStack_4c < *(float *)(in_ECX + 0x44));
  auVar4._0_4_ = -(uint)(local_50 < *(float *)(in_ECX + 0x40));
  auVar4._8_4_ = -(uint)(fStack_48 < *(float *)(in_ECX + 0x48));
  auVar4._12_4_ = -(uint)(fStack_44 < *(float *)(in_ECX + 0x4c));
  uVar6 = movmskps(extraout_ECX,auVar4);
  if ((uVar6 & 7) != 0) {
    *param_4 = 0;
    return 1;
  }
  local_58 = 0;
  iVar5 = FUN_00959410(param_2,param_3,&local_58,&local_54);
  if (iVar5 == 0) {
    if ((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10)) + 0x37 < local_58) {
      *param_4 = 2;
      return 1;
    }
    iVar5 = FUN_009595a0(local_58,local_54,param_3);
    if (iVar5 == 0) {
      return 0;
    }
  }
  *param_4 = 3;
  return 1;
}



void FUN_009519c0(undefined4 param_1,uint *param_2,uint *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  int in_ECX;
  int iVar20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar20 = 0;
  do {
    puVar1 = (undefined4 *)param_2[5];
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    puVar2 = *(undefined4 **)(in_ECX + 0x68);
    *puVar2 = *puVar1;
    puVar2[1] = uVar17;
    puVar2[2] = uVar18;
    puVar2[3] = uVar19;
    puVar1 = (undefined4 *)param_2[9];
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    iVar3 = *(int *)(in_ECX + 0x68);
    *(undefined4 *)(iVar3 + 0x10) = *puVar1;
    *(undefined4 *)(iVar3 + 0x14) = uVar17;
    *(undefined4 *)(iVar3 + 0x18) = uVar18;
    *(undefined4 *)(iVar3 + 0x1c) = uVar19;
    puVar1 = (undefined4 *)param_2[0xd];
    iVar3 = *(int *)(in_ECX + 0x68);
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    *(undefined4 *)(iVar3 + 0x20) = *puVar1;
    *(undefined4 *)(iVar3 + 0x24) = uVar17;
    *(undefined4 *)(iVar3 + 0x28) = uVar18;
    *(undefined4 *)(iVar3 + 0x2c) = uVar19;
    iVar3 = *(int *)(in_ECX + 0x68);
    FUN_008d1700(&DAT_00ba7a40,iVar3,iVar3 + 0x10,iVar3 + 0x20,&local_1c);
    if (((0.0 <= local_1c) && (0.0 <= local_18)) && (0.0 <= local_14)) break;
    param_2 = (uint *)FUN_00958f40(param_2);
    iVar20 = iVar20 + 1;
  } while (iVar20 < 10);
  uVar4 = param_2[5];
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  puVar1 = *(undefined4 **)(in_ECX + 0x60);
  *puVar1 = *(undefined4 *)(uVar4 + 0x10);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  puVar1 = *(undefined4 **)(in_ECX + 100);
  *puVar1 = *(undefined4 *)(uVar4 + 0x20);
  puVar1[1] = uVar17;
  puVar1[2] = uVar18;
  puVar1[3] = uVar19;
  uVar4 = param_2[9];
  iVar20 = *(int *)(in_ECX + 0x60);
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  *(undefined4 *)(iVar20 + 0x10) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined4 *)(iVar20 + 0x14) = uVar17;
  *(undefined4 *)(iVar20 + 0x18) = uVar18;
  *(undefined4 *)(iVar20 + 0x1c) = uVar19;
  iVar20 = *(int *)(in_ECX + 100);
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  *(undefined4 *)(iVar20 + 0x10) = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(iVar20 + 0x14) = uVar17;
  *(undefined4 *)(iVar20 + 0x18) = uVar18;
  *(undefined4 *)(iVar20 + 0x1c) = uVar19;
  uVar4 = param_2[0xd];
  iVar20 = *(int *)(in_ECX + 0x60);
  uVar17 = *(undefined4 *)(uVar4 + 0x14);
  uVar18 = *(undefined4 *)(uVar4 + 0x18);
  uVar19 = *(undefined4 *)(uVar4 + 0x1c);
  *(undefined4 *)(iVar20 + 0x20) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined4 *)(iVar20 + 0x24) = uVar17;
  *(undefined4 *)(iVar20 + 0x28) = uVar18;
  *(undefined4 *)(iVar20 + 0x2c) = uVar19;
  iVar20 = *(int *)(in_ECX + 100);
  uVar17 = *(undefined4 *)(uVar4 + 0x24);
  uVar18 = *(undefined4 *)(uVar4 + 0x28);
  uVar19 = *(undefined4 *)(uVar4 + 0x2c);
  *(undefined4 *)(iVar20 + 0x20) = *(undefined4 *)(uVar4 + 0x20);
  *(undefined4 *)(iVar20 + 0x24) = uVar17;
  *(undefined4 *)(iVar20 + 0x28) = uVar18;
  *(undefined4 *)(iVar20 + 0x2c) = uVar19;
  **(undefined4 **)(in_ECX + 0x6c) = 3;
  pfVar5 = *(float **)(in_ECX + 0x60);
  fVar6 = pfVar5[9];
  fVar7 = pfVar5[10];
  fVar8 = pfVar5[0xb];
  fVar9 = pfVar5[5];
  fVar10 = pfVar5[6];
  fVar11 = pfVar5[7];
  fVar12 = pfVar5[1];
  fVar13 = pfVar5[2];
  fVar14 = pfVar5[3];
  param_3[4] = (uint)(local_1c * *pfVar5 + local_18 * pfVar5[4] + local_14 * pfVar5[8]);
  param_3[5] = (uint)(local_1c * fVar12 + local_18 * fVar9 + local_14 * fVar6);
  param_3[6] = (uint)(local_1c * fVar13 + local_18 * fVar10 + local_14 * fVar7);
  param_3[7] = (uint)(local_1c * fVar14 + local_18 * fVar11 + local_14 * fVar8);
  param_3[8] = (uint)-(float)param_2[4];
  uVar4 = param_2[1];
  uVar15 = param_2[2];
  uVar16 = param_2[3];
  *param_3 = *param_2 ^ 0x80000000;
  param_3[1] = uVar4 ^ 0x80000000;
  param_3[2] = uVar15 ^ 0x80000000;
  param_3[3] = uVar16 ^ 0x80000000;
  return;
}



void FUN_00951b40(int param_1,float param_2,float param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  
  param_3 = param_3 - param_2;
  uVar1 = param_1 * -0x3e39b193 + 0x3039U & 0x7fffffff;
  uVar2 = uVar1 * -0x3e39b193 + 0x3039 & 0x7fffffff;
  *param_4 = ((float)uVar1 * 4.656613e-10 + param_2) * param_3;
  param_4[1] = ((float)uVar2 * 4.656613e-10 + param_2) * param_3;
  param_4[2] = ((float)(uVar2 * -0x3e39b193 + 0x3039 & 0x7fffffff) * 4.656613e-10 + param_2) *
               param_3;
  return;
}



void FUN_00951bd0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 4;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)(in_ECX + 0x30) = *param_1;
  *(undefined4 *)(in_ECX + 0x34) = uVar1;
  *(undefined4 *)(in_ECX + 0x38) = uVar2;
  *(undefined4 *)(in_ECX + 0x3c) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(in_ECX + 0x40) = *param_2;
  *(undefined4 *)(in_ECX + 0x44) = uVar1;
  *(undefined4 *)(in_ECX + 0x48) = uVar2;
  *(undefined4 *)(in_ECX + 0x4c) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *(undefined4 *)(in_ECX + 0x20) = *param_3;
  *(undefined4 *)(in_ECX + 0x24) = uVar1;
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  *(undefined4 *)(in_ECX + 0x2c) = uVar3;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_1[7];
  *(undefined4 *)(in_ECX + 0x70) = param_1[4];
  *(undefined4 *)(in_ECX + 0x74) = uVar1;
  *(undefined4 *)(in_ECX + 0x78) = uVar2;
  *(undefined4 *)(in_ECX + 0x7c) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *(undefined4 *)(in_ECX + 0x80) = param_2[4];
  *(undefined4 *)(in_ECX + 0x84) = uVar1;
  *(undefined4 *)(in_ECX + 0x88) = uVar2;
  *(undefined4 *)(in_ECX + 0x8c) = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  *(undefined4 *)(in_ECX + 0x60) = param_3[4];
  *(undefined4 *)(in_ECX + 100) = uVar1;
  *(undefined4 *)(in_ECX + 0x68) = uVar2;
  *(undefined4 *)(in_ECX + 0x6c) = uVar3;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar3 = param_1[0xb];
  *(undefined4 *)(in_ECX + 0xb0) = param_1[8];
  *(undefined4 *)(in_ECX + 0xb4) = uVar1;
  *(undefined4 *)(in_ECX + 0xb8) = uVar2;
  *(undefined4 *)(in_ECX + 0xbc) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *(undefined4 *)(in_ECX + 0xc0) = param_2[8];
  *(undefined4 *)(in_ECX + 0xc4) = uVar1;
  *(undefined4 *)(in_ECX + 200) = uVar2;
  *(undefined4 *)(in_ECX + 0xcc) = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  *(undefined4 *)(in_ECX + 0xa0) = param_3[8];
  *(undefined4 *)(in_ECX + 0xa4) = uVar1;
  *(undefined4 *)(in_ECX + 0xa8) = uVar2;
  *(undefined4 *)(in_ECX + 0xac) = uVar3;
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  uVar1 = param_1[0xd];
  uVar2 = param_1[0xe];
  uVar3 = param_1[0xf];
  *(undefined4 *)(in_ECX + 0xf0) = param_1[0xc];
  *(undefined4 *)(in_ECX + 0xf4) = uVar1;
  *(undefined4 *)(in_ECX + 0xf8) = uVar2;
  *(undefined4 *)(in_ECX + 0xfc) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *(undefined4 *)(in_ECX + 0x100) = param_2[0xc];
  *(undefined4 *)(in_ECX + 0x104) = uVar1;
  *(undefined4 *)(in_ECX + 0x108) = uVar2;
  *(undefined4 *)(in_ECX + 0x10c) = uVar3;
  uVar1 = param_3[0xd];
  uVar2 = param_3[0xe];
  uVar3 = param_3[0xf];
  *(undefined4 *)(in_ECX + 0xe0) = param_3[0xc];
  *(undefined4 *)(in_ECX + 0xe4) = uVar1;
  *(undefined4 *)(in_ECX + 0xe8) = uVar2;
  *(undefined4 *)(in_ECX + 0xec) = uVar3;
  *(undefined4 *)(in_ECX + 0x110) = 0;
  FUN_00959480();
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00951c80(undefined4 param_1,undefined4 param_2,undefined4 *param_3,float param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *in_ECX = *param_3;
  in_ECX[1] = uVar1;
  in_ECX[2] = uVar2;
  in_ECX[3] = uVar3;
  uVar1 = param_3[5];
  uVar2 = param_3[6];
  uVar3 = param_3[7];
  in_ECX[4] = param_3[4];
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar2;
  in_ECX[7] = uVar3;
  uVar1 = param_3[9];
  uVar2 = param_3[10];
  uVar3 = param_3[0xb];
  in_ECX[8] = param_3[8];
  in_ECX[9] = uVar1;
  in_ECX[10] = uVar2;
  in_ECX[0xb] = uVar3;
  uVar1 = param_3[0xc];
  uVar2 = param_3[0xd];
  uVar3 = param_3[0xe];
  uVar4 = param_3[0xf];
  in_ECX[0x14] = param_4 * param_4;
  in_ECX[0x15] = param_1;
  in_ECX[0x16] = param_2;
  in_ECX[0xc] = uVar1;
  in_ECX[0xd] = uVar2;
  in_ECX[0xe] = uVar3;
  in_ECX[0xf] = uVar4;
  in_ECX[0x18] = param_5;
  in_ECX[0x19] = param_6;
  in_ECX[0x10] = param_4;
  in_ECX[0x11] = param_4;
  in_ECX[0x12] = param_4;
  in_ECX[0x13] = param_4;
  in_ECX[0x17] = 0;
  in_ECX[0x1a] = param_7;
  in_ECX[0x1b] = param_8;
  return;
}



void FUN_00951d00(undefined4 param_1,float *param_2)

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
  float *in_ECX;
  
  (**(code **)(*(int *)in_ECX[0x15] + 0x24))(param_1,param_2 + 4);
  (**(code **)(*(int *)in_ECX[0x16] + 0x24))(&stack0xffffffd8,param_2 + 8);
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = in_ECX[0xd];
  fVar5 = in_ECX[0xe];
  fVar6 = in_ECX[0xf];
  fVar7 = in_ECX[9];
  fVar8 = in_ECX[10];
  fVar9 = in_ECX[0xb];
  fVar10 = in_ECX[5];
  fVar11 = in_ECX[6];
  fVar12 = in_ECX[7];
  fVar13 = in_ECX[1];
  fVar14 = in_ECX[2];
  fVar15 = in_ECX[3];
  *param_2 = param_2[4] - (*in_ECX * fVar1 + in_ECX[4] * fVar2 + in_ECX[8] * fVar3 + in_ECX[0xc]);
  param_2[1] = param_2[5] - (fVar13 * fVar1 + fVar10 * fVar2 + fVar7 * fVar3 + fVar4);
  param_2[2] = param_2[6] - (fVar14 * fVar1 + fVar11 * fVar2 + fVar8 * fVar3 + fVar5);
  param_2[3] = param_2[7] - (fVar15 * fVar1 + fVar12 * fVar2 + fVar9 * fVar3 + fVar6);
  return;
}



void FUN_00951df0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
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
  
  local_60 = -*param_1;
  fStack_5c = -param_1[1];
  fStack_58 = -param_1[2];
  fStack_54 = -param_1[3];
  FUN_00951d00(param_1,&local_50);
  FUN_00951d00(&local_60,param_3);
  fVar2 = (fStack_48 - param_2[2]) * param_1[2] +
          (fStack_4c - param_2[1]) * param_1[1] + (local_50 - *param_2) * *param_1;
  fVar1 = (param_3[2] - param_2[2]) * fStack_58 +
          (param_3[1] - param_2[1]) * fStack_5c + (*param_3 - *param_2) * local_60;
  if (fVar1 <= fVar2) {
    *param_3 = local_50;
    param_3[1] = fStack_4c;
    param_3[2] = fStack_48;
    param_3[3] = fStack_44;
    param_3[4] = local_40;
    param_3[5] = fStack_3c;
    param_3[6] = fStack_38;
    param_3[7] = fStack_34;
    param_3[8] = local_30;
    param_3[9] = fStack_2c;
    param_3[10] = fStack_28;
    param_3[0xb] = fStack_24;
    param_3[0xc] = local_20;
    *param_4 = fVar2;
    return;
  }
  *param_4 = fVar1;
  return;
}



void FUN_00951ee0(undefined1 *param_1,uint *param_2)

{
  uint *puVar1;
  float *pfVar2;
  int in_ECX;
  undefined4 *puVar3;
  float fVar4;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fVar4 = *(float *)(in_ECX + 0x38) * *(float *)(in_ECX + 0x38) +
          *(float *)(in_ECX + 0x34) * *(float *)(in_ECX + 0x34) +
          *(float *)(in_ECX + 0x30) * *(float *)(in_ECX + 0x30);
  local_70 = *(uint *)(in_ECX + 0x30) ^ 0x80000000;
  uStack_6c = *(uint *)(in_ECX + 0x34) ^ 0x80000000;
  uStack_68 = *(uint *)(in_ECX + 0x38) ^ 0x80000000;
  uStack_64 = *(uint *)(in_ECX + 0x3c) ^ 0x80000000;
  if (fVar4 < *(float *)(in_ECX + 0x50) != (fVar4 == *(float *)(in_ECX + 0x50))) {
    local_70 = DAT_00b2f0a0;
    uStack_6c = DAT_00b2f0a4;
    uStack_68 = DAT_00b2f0a8;
    uStack_64 = DAT_00b2f0ac;
  }
  FUN_00951d00(&local_70,&local_50);
  puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x68));
  *puVar3 = local_50;
  puVar3[1] = uStack_4c;
  puVar3[2] = uStack_48;
  puVar3[3] = uStack_44;
  puVar1 = (uint *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 100));
  *puVar3 = local_30;
  puVar3[1] = uStack_2c;
  puVar3[2] = uStack_28;
  puVar3[3] = uStack_24;
  **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + 1;
  pfVar2 = *(float **)(in_ECX + 0x68);
  fVar4 = pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2;
  if (fVar4 < *(float *)(in_ECX + 0x50) != (fVar4 == *(float *)(in_ECX + 0x50))) {
    param_2[8] = (uint)SQRT(pfVar2[2] * pfVar2[2] + pfVar2[1] * pfVar2[1] + *pfVar2 * *pfVar2);
    *param_2 = local_70;
    param_2[1] = uStack_6c;
    param_2[2] = uStack_68;
    param_2[3] = uStack_64;
    param_2[4] = local_40;
    param_2[5] = uStack_3c;
    param_2[6] = uStack_38;
    param_2[7] = uStack_34;
    param_2[9] = 0x3f000000;
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00952050(void)

{
  uint *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar1 = *(uint **)(in_ECX + 0x68);
  FUN_00951d00(puVar1,&local_90);
  pfVar2 = *(float **)(in_ECX + 0x68);
  fVar4 = local_90 - *pfVar2;
  fVar5 = fStack_8c - pfVar2[1];
  fVar6 = fStack_88 - pfVar2[2];
  local_a0 = *puVar1 ^ 0x80000000;
  uStack_9c = puVar1[1] ^ 0x80000000;
  uStack_98 = puVar1[2] ^ 0x80000000;
  uStack_94 = puVar1[3] ^ 0x80000000;
  FUN_00951d00(&local_a0,&local_50);
  pfVar2 = *(float **)(in_ECX + 0x68);
  if ((fStack_48 - pfVar2[2]) * (fStack_48 - pfVar2[2]) +
      (fStack_4c - pfVar2[1]) * (fStack_4c - pfVar2[1]) +
      (local_50 - *pfVar2) * (local_50 - *pfVar2) <= fVar6 * fVar6 + fVar5 * fVar5 + fVar4 * fVar4)
  {
    pfVar2 = pfVar2 + **(int **)(in_ECX + 0x6c) * 4;
    *pfVar2 = local_90;
    pfVar2[1] = fStack_8c;
    pfVar2[2] = fStack_88;
    pfVar2[3] = fStack_84;
    puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
    *puVar3 = local_80;
    puVar3[1] = uStack_7c;
    puVar3[2] = uStack_78;
    puVar3[3] = uStack_74;
    puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 100));
    *puVar3 = local_70;
    puVar3[1] = uStack_6c;
    puVar3[2] = uStack_68;
    puVar3[3] = uStack_64;
    **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + 1;
    return;
  }
  pfVar2 = pfVar2 + **(int **)(in_ECX + 0x6c) * 4;
  *pfVar2 = local_50;
  pfVar2[1] = fStack_4c;
  pfVar2[2] = fStack_48;
  pfVar2[3] = fStack_44;
  puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
  *puVar3 = local_40;
  puVar3[1] = uStack_3c;
  puVar3[2] = uStack_38;
  puVar3[3] = uStack_34;
  puVar3 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 100));
  *puVar3 = local_30;
  puVar3[1] = uStack_2c;
  puVar3[2] = uStack_28;
  puVar3[3] = uStack_24;
  **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + 1;
  return;
}



void FUN_00952190(void)

{
  float *pfVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined4 *puVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float local_b8;
  float local_b4;
  float local_b0 [4];
  float local_a0 [4];
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
  
  pfVar1 = *(float **)(in_ECX + 0x68);
  fVar4 = pfVar1[7];
  fVar5 = pfVar1[3];
  local_b0[0] = *pfVar1 - pfVar1[4];
  local_b0[1] = pfVar1[1] - pfVar1[5];
  local_b0[2] = pfVar1[2] - pfVar1[6];
  local_b4 = ABS(local_b0[1]);
  bVar2 = ABS(local_b0[0]) <= local_b4;
  fVar9 = ABS(local_b0[0]);
  if (!bVar2) {
    fVar9 = local_b4;
  }
  uVar7 = (uint)!bVar2;
  uVar8 = 2;
  if (ABS(local_b0[2]) < fVar9) {
    uVar7 = 2;
    uVar8 = (uint)!bVar2;
  }
  fVar9 = local_b0[bVar2];
  fVar10 = local_b0[uVar8];
  local_a0[uVar7] = 0.0;
  local_a0[bVar2] = fVar10;
  local_a0[uVar8] = -fVar9;
  fVar13 = local_b0[1] * local_a0[2] - local_b0[2] * local_a0[1];
  fVar14 = local_b0[2] * local_a0[0] - local_b0[0] * local_a0[2];
  local_b0[2] = local_b0[0] * local_a0[1] - local_b0[1] * local_a0[0];
  fVar9 = local_a0[1] * local_a0[1];
  fVar10 = local_a0[2] * local_a0[2];
  auVar15._4_4_ = fVar9;
  auVar15._0_4_ = fVar9;
  auVar15._8_4_ = fVar9;
  auVar15._12_4_ = fVar9;
  auVar16._4_12_ = auVar15._4_12_;
  auVar16._0_4_ = fVar9 + local_a0[0] * local_a0[0];
  auVar17._4_4_ = fVar10;
  auVar17._0_4_ = fVar10 + auVar16._0_4_;
  auVar17._8_4_ = fVar10;
  auVar17._12_4_ = fVar10;
  auVar17 = rsqrtss(auVar16,auVar17);
  fVar9 = auVar17._0_4_;
  local_b8 = 0.5;
  local_a0[3] = fVar9 * 0.5 * (3.0 - (fVar10 + auVar16._0_4_) * fVar9 * fVar9);
  local_a0[0] = local_a0[3] * local_a0[0];
  local_a0[1] = local_a0[3] * local_a0[1];
  local_a0[2] = local_a0[3] * local_a0[2];
  local_a0[3] = local_a0[3] * 0.0;
  fVar9 = fVar14 * fVar14;
  fVar10 = local_b0[2] * local_b0[2];
  auVar11._4_4_ = fVar9;
  auVar11._0_4_ = fVar9;
  auVar11._8_4_ = fVar9;
  auVar11._12_4_ = fVar9;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar9 + fVar13 * fVar13;
  auVar3._4_4_ = fVar10;
  auVar3._0_4_ = fVar10 + auVar12._0_4_;
  auVar3._8_4_ = fVar10;
  auVar3._12_4_ = fVar10;
  auVar17 = rsqrtss(auVar12,auVar3);
  fVar9 = auVar17._0_4_;
  local_b0[3] = fVar9 * 0.5 * (3.0 - (fVar10 + auVar12._0_4_) * fVar9 * fVar9);
  local_b0[0] = local_b0[3] * fVar13;
  local_b0[1] = local_b0[3] * fVar14;
  local_b0[2] = local_b0[3] * local_b0[2];
  local_b0[3] = local_b0[3] * ((fVar5 - fVar4) * 0.0 - (fVar5 - fVar4) * 0.0);
  FUN_00951df0(local_a0,*(undefined4 *)(in_ECX + 0x68),&local_90,&local_b8);
  FUN_00951df0(local_b0,*(undefined4 *)(in_ECX + 0x68),&local_50,&local_b4);
  if (local_b8 <= local_b4) {
    puVar6 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x68));
    *puVar6 = local_50;
    puVar6[1] = uStack_4c;
    puVar6[2] = uStack_48;
    puVar6[3] = uStack_44;
    puVar6 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
    *puVar6 = local_40;
    puVar6[1] = uStack_3c;
    puVar6[2] = uStack_38;
    puVar6[3] = uStack_34;
    local_70 = local_30;
    uStack_6c = uStack_2c;
    uStack_68 = uStack_28;
    uStack_64 = uStack_24;
  }
  else {
    puVar6 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x68));
    *puVar6 = local_90;
    puVar6[1] = uStack_8c;
    puVar6[2] = uStack_88;
    puVar6[3] = uStack_84;
    puVar6 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
    *puVar6 = local_80;
    puVar6[1] = uStack_7c;
    puVar6[2] = uStack_78;
    puVar6[3] = uStack_74;
  }
  puVar6 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 100));
  *puVar6 = local_70;
  puVar6[1] = uStack_6c;
  puVar6[2] = uStack_68;
  puVar6[3] = uStack_64;
  **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + 1;
  return;
}



undefined4 FUN_009523f0(undefined4 param_1)

{
  int in_ECX;
  undefined4 *puVar1;
  float local_54;
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
  
  FUN_00951df0(param_1,*(undefined4 *)(in_ECX + 0x68),&local_50,&local_54);
  if (local_54 < *(float *)(in_ECX + 0x40)) {
    return 1;
  }
  puVar1 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x68));
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = uStack_44;
  puVar1 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 0x60));
  *puVar1 = local_40;
  puVar1[1] = uStack_3c;
  puVar1[2] = uStack_38;
  puVar1[3] = uStack_34;
  puVar1 = (undefined4 *)(**(int **)(in_ECX + 0x6c) * 0x10 + *(int *)(in_ECX + 100));
  *puVar1 = local_30;
  puVar1[1] = uStack_2c;
  puVar1[2] = uStack_28;
  puVar1[3] = uStack_24;
  **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + 1;
  return 0;
}



undefined4 FUN_00952480(float *param_1,undefined4 *param_2)

{
  float *pfVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  char *pcVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 local_4d;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  float local_30 [4];
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar11 = -1;
  switch(**(undefined4 **)(in_ECX + 0x6c)) {
  case 0:
    break;
  case 1:
    goto switchD_009524a2_caseD_1;
  case 2:
    goto switchD_009524a2_caseD_2;
  case 3:
    goto switchD_009524a2_caseD_3;
  case 4:
    goto switchD_009524a2_caseD_4;
  default:
    *param_2 = 3;
    return 1;
  }
switchD_009524a2_caseD_0:
  pcVar8 = (char *)FUN_00951ee0(&local_4d,param_1);
  if (*pcVar8 != '\0') {
LAB_009527da:
    *param_2 = 0;
    return 1;
  }
  iVar11 = 0;
switchD_009524a2_caseD_1:
  while( true ) {
    pfVar1 = *(float **)(in_ECX + 0x68);
    local_3c = pfVar1[2] * pfVar1[2] + pfVar1[1] * pfVar1[1] + *pfVar1 * *pfVar1;
    if (local_3c < *(float *)(in_ECX + 0x50) != (local_3c == *(float *)(in_ECX + 0x50))) break;
    iVar11 = 1;
    FUN_00952050();
switchD_009524a2_caseD_2:
    while( true ) {
      pfVar1 = *(float **)(in_ECX + 0x68);
      local_40 = (pfVar1[2] - pfVar1[6]) * (pfVar1[2] - pfVar1[6]) +
                 (pfVar1[1] - pfVar1[5]) * (pfVar1[1] - pfVar1[5]) +
                 (*pfVar1 - pfVar1[4]) * (*pfVar1 - pfVar1[4]);
      if (local_40 < *(float *)(in_ECX + 0x50) != (local_40 == *(float *)(in_ECX + 0x50))) break;
      iVar11 = 2;
      FUN_00952190();
switchD_009524a2_caseD_3:
      while( true ) {
        pfVar1 = *(float **)(in_ECX + 0x68);
        local_20 = (pfVar1[1] - pfVar1[5]) * (pfVar1[6] - pfVar1[10]) -
                   (pfVar1[2] - pfVar1[6]) * (pfVar1[5] - pfVar1[9]);
        fStack_1c = (pfVar1[2] - pfVar1[6]) * (pfVar1[4] - pfVar1[8]) -
                    (*pfVar1 - pfVar1[4]) * (pfVar1[6] - pfVar1[10]);
        fStack_18 = (*pfVar1 - pfVar1[4]) * (pfVar1[5] - pfVar1[9]) -
                    (pfVar1[1] - pfVar1[5]) * (pfVar1[4] - pfVar1[8]);
        fStack_14 = (pfVar1[3] - pfVar1[7]) * (pfVar1[7] - pfVar1[0xb]) -
                    (pfVar1[3] - pfVar1[7]) * (pfVar1[7] - pfVar1[0xb]);
        local_44 = fStack_18 * fStack_18 + fStack_1c * fStack_1c + local_20 * local_20;
        if (local_44 == 0.0) break;
        fVar15 = fStack_1c * fStack_1c;
        local_30[1] = fStack_18 * fStack_18;
        auVar18._4_4_ = fVar15;
        auVar18._0_4_ = fVar15;
        auVar18._8_4_ = fVar15;
        auVar18._12_4_ = fVar15;
        auVar19._4_12_ = auVar18._4_12_;
        auVar19._0_4_ = fVar15 + local_20 * local_20;
        auVar3._4_4_ = local_30[1];
        auVar3._0_4_ = local_30[1] + auVar19._0_4_;
        auVar3._8_4_ = local_30[1];
        auVar3._12_4_ = local_30[1];
        auVar22 = rsqrtss(auVar19,auVar3);
        local_30[0] = auVar22._0_4_;
        local_38 = 0x40400000;
        local_34 = 0x3f000000;
        fVar15 = local_30[0] * 0.5 *
                 (3.0 - (local_30[1] + auVar19._0_4_) * local_30[0] * local_30[0]);
        local_20 = fVar15 * local_20;
        fStack_1c = fVar15 * fStack_1c;
        fStack_18 = fVar15 * fStack_18;
        fStack_14 = fVar15 * fStack_14;
        iVar11 = 3;
        local_30[2] = local_30[1];
        local_30[3] = local_30[1];
        iVar9 = FUN_009523f0(&local_20);
        if (iVar9 == 1) {
          param_1[8] = 0.0;
          *param_1 = local_20;
          param_1[1] = fStack_1c;
          param_1[2] = fStack_18;
          param_1[3] = fStack_14;
          iVar11 = *(int *)(in_ECX + 0x68);
          FUN_008d1700(&DAT_00ba7a40,iVar11,iVar11 + 0x10,iVar11 + 0x20,local_30);
          pfVar1 = *(float **)(in_ECX + 0x60);
          fVar15 = pfVar1[9];
          fVar16 = pfVar1[10];
          fVar17 = pfVar1[0xb];
          fVar13 = pfVar1[5];
          fVar14 = pfVar1[6];
          fVar4 = pfVar1[7];
          fVar5 = pfVar1[1];
          fVar6 = pfVar1[2];
          fVar7 = pfVar1[3];
          param_1[4] = local_30[0] * *pfVar1 + local_30[1] * pfVar1[4] + local_30[2] * pfVar1[8];
          param_1[5] = local_30[0] * fVar5 + local_30[1] * fVar13 + local_30[2] * fVar15;
          param_1[6] = local_30[0] * fVar6 + local_30[1] * fVar14 + local_30[2] * fVar16;
          param_1[7] = local_30[0] * fVar7 + local_30[1] * fVar4 + local_30[2] * fVar17;
          param_1[9] = 0.5;
          goto LAB_009527da;
        }
switchD_009524a2_caseD_4:
        pfVar1 = *(float **)(in_ECX + 0x68);
        fVar15 = (pfVar1[1] - pfVar1[5]) * (pfVar1[6] - pfVar1[10]) -
                 (pfVar1[2] - pfVar1[6]) * (pfVar1[5] - pfVar1[9]);
        fVar16 = (pfVar1[2] - pfVar1[6]) * (pfVar1[4] - pfVar1[8]) -
                 (*pfVar1 - pfVar1[4]) * (pfVar1[6] - pfVar1[10]);
        fVar17 = (*pfVar1 - pfVar1[4]) * (pfVar1[5] - pfVar1[9]) -
                 (pfVar1[1] - pfVar1[5]) * (pfVar1[4] - pfVar1[8]);
        local_48 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
        local_4c = (pfVar1[0xe] - pfVar1[2]) * fVar17 +
                   (pfVar1[0xd] - pfVar1[1]) * fVar16 + (pfVar1[0xc] - *pfVar1) * fVar15;
        if (local_48 * *(float *)(in_ECX + 0x50) < local_4c * local_4c) {
          *param_2 = 0;
          return 0;
        }
        if (2 < iVar11) goto LAB_0095299b;
        **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + -1;
      }
      if (1 < iVar11) {
        param_1[8] = 0.0;
        pfVar1 = *(float **)(in_ECX + 0x68);
        local_30[0] = *pfVar1 - pfVar1[4];
        local_30[1] = pfVar1[1] - pfVar1[5];
        local_30[2] = pfVar1[2] - pfVar1[6];
        fVar15 = ABS(*pfVar1 - pfVar1[4]);
        fVar16 = ABS(pfVar1[1] - pfVar1[5]);
        bVar2 = fVar15 <= fVar16;
        if (!bVar2) {
          fVar15 = fVar16;
        }
        uVar10 = (uint)!bVar2;
        uVar12 = 2;
        if (ABS(pfVar1[2] - pfVar1[6]) < fVar15) {
          uVar10 = 2;
          uVar12 = (uint)!bVar2;
        }
        fVar15 = local_30[bVar2];
        param_1[uVar10] = 0.0;
        fVar16 = local_30[uVar12];
        param_1[3] = 0.0;
        param_1[bVar2] = fVar16;
        param_1[uVar12] = -fVar15;
        fVar15 = *param_1;
        fVar16 = param_1[1];
        fVar17 = param_1[2];
        fVar13 = fVar16 * fVar16;
        fVar14 = fVar17 * fVar17;
        auVar20._4_4_ = fVar13;
        auVar20._0_4_ = fVar13;
        auVar20._8_4_ = fVar13;
        auVar20._12_4_ = fVar13;
        auVar21._4_12_ = auVar20._4_12_;
        auVar21._0_4_ = fVar13 + fVar15 * fVar15;
        auVar22._4_4_ = fVar14;
        auVar22._0_4_ = fVar14 + auVar21._0_4_;
        auVar22._8_4_ = fVar14;
        auVar22._12_4_ = fVar14;
        auVar22 = rsqrtss(auVar21,auVar22);
        fVar13 = auVar22._0_4_;
        fVar13 = fVar13 * 0.5 * (3.0 - (fVar14 + auVar21._0_4_) * fVar13 * fVar13);
        *param_1 = fVar13 * fVar15;
        param_1[1] = fVar13 * fVar16;
        param_1[2] = fVar13 * fVar17;
        param_1[3] = fVar13 * param_1[3];
        pfVar1 = *(float **)(in_ECX + 0x68);
        fVar15 = ABS(pfVar1[2]) + ABS(pfVar1[1]) + ABS(*pfVar1);
        pfVar1 = *(float **)(in_ECX + 0x60);
        fVar16 = pfVar1[5];
        fVar17 = pfVar1[6];
        fVar13 = pfVar1[7];
        fVar15 = fVar15 / (fVar15 + fVar15 + 1.1920929e-07);
        fVar14 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar5 = pfVar1[3];
        param_1[4] = (1.0 - fVar15) * *pfVar1 + fVar15 * pfVar1[4];
        param_1[5] = (1.0 - fVar15) * fVar14 + fVar15 * fVar16;
        param_1[6] = (1.0 - fVar15) * fVar4 + fVar15 * fVar17;
        param_1[7] = (1.0 - fVar15) * fVar5 + fVar15 * fVar13;
        param_1[9] = 0.5;
        *param_2 = 0;
        return 1;
      }
      **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + -1;
    }
    if (0 < iVar11) {
      *param_2 = 3;
      return 1;
    }
    **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + -1;
  }
  if (-1 < iVar11) {
LAB_0095299b:
    *param_2 = 3;
    return 1;
  }
  **(int **)(in_ECX + 0x6c) = **(int **)(in_ECX + 0x6c) + -1;
  goto switchD_009524a2_caseD_0;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

int FUN_00952a00(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int local_2ed4;
  float local_2ed0;
  float fStack_2ecc;
  float fStack_2ec8;
  float fStack_2ec4;
  undefined1 local_2ec0 [8];
  int local_2eb8;
  undefined1 auStack_2ea0 [48];
  undefined4 auStack_2e70 [2967];
  undefined4 uStack_14;
  
  uStack_14 = 0x952a10;
  do {
    local_2ed4 = 0;
    iVar1 = FUN_00952480(param_1,&local_2ed4);
    if (iVar1 == 1) {
      if (local_2ed4 != 3) {
        return local_2ed4;
      }
    }
    else {
      FUN_00951bd0(*(undefined4 *)(in_ECX + 0x60),*(undefined4 *)(in_ECX + 100),
                   *(undefined4 *)(in_ECX + 0x68));
      uVar2 = FUN_009517d0();
      iVar1 = local_2eb8 * 0x40;
      auStack_2e70[local_2eb8 * 0x10] = 0;
      local_2eb8 = local_2eb8 + 1;
      FUN_00951d00(uVar2,auStack_2ea0 + iVar1);
      iVar3 = FUN_009518b0(local_2ec0,uVar2,auStack_2ea0 + iVar1,&local_2ed4);
      iVar1 = local_2eb8;
      while (local_2eb8 = iVar1, iVar3 != 1) {
        if (0x36 < iVar1) {
          iVar1 = 2;
          goto LAB_00952b59;
        }
        uVar2 = FUN_009517d0();
        local_2eb8 = local_2eb8 + 1;
        auStack_2e70[iVar1 * 0x10] = 0;
        FUN_00951d00(uVar2,auStack_2ea0 + iVar1 * 0x40);
        iVar3 = FUN_009518b0(local_2ec0,uVar2,auStack_2ea0 + iVar1 * 0x40,&local_2ed4);
        iVar1 = local_2eb8;
      }
      iVar1 = local_2ed4;
      if (local_2ed4 != 3) {
LAB_00952b59:
        FUN_009519c0(local_2ec0,uVar2,param_1);
        return iVar1;
      }
    }
    iVar1 = *(int *)(in_ECX + 0x5c) + 1;
    *(int *)(in_ECX + 0x5c) = iVar1;
    if (iVar1 == 1) {
      **(undefined4 **)(in_ECX + 0x6c) = 1;
    }
    else {
      if (0x13 < iVar1) {
        return 3;
      }
      **(undefined4 **)(in_ECX + 0x6c) = 0;
      FUN_00951b40(*(undefined4 *)(in_ECX + 0x5c),0xb8d1b717,0x38d1b717,&local_2ed0);
      local_2ed0 = local_2ed0 + *(float *)(in_ECX + 0x30);
      fStack_2ecc = fStack_2ecc + *(float *)(in_ECX + 0x34);
      fStack_2ec8 = fStack_2ec8 + *(float *)(in_ECX + 0x38);
      fStack_2ec4 = fStack_2ec4 + *(float *)(in_ECX + 0x3c);
      *(float *)(in_ECX + 0x30) = local_2ed0;
      *(float *)(in_ECX + 0x34) = fStack_2ecc;
      *(float *)(in_ECX + 0x38) = fStack_2ec8;
      *(float *)(in_ECX + 0x3c) = fStack_2ec4;
    }
  } while( true );
}



int FUN_00952b90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
                undefined4 param_9)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int unaff_FS_OFFSET;
  
  iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar4 + 0x1a4) < *(uint *)(iVar4 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar4 + 0x1a4);
    *puVar1 = "TtPenetration";
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar4 + 0x1a4) = puVar1 + 3;
  }
  FUN_00951c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  iVar4 = FUN_00952a00(param_9);
  if (iVar4 == 3) {
    FUN_00959750(param_1,param_2,param_3,param_5,param_6,param_9);
    *param_8 = 1;
    iVar4 = 1;
  }
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(uint *)(iVar2 + 0x1a4) < *(uint *)(iVar2 + 0x1a8)) {
    puVar1 = *(undefined4 **)(iVar2 + 0x1a4);
    *puVar1 = &DAT_00a9610c;
    uVar3 = rdtsc();
    puVar1[1] = (int)uVar3;
    *(undefined4 **)(iVar2 + 0x1a4) = puVar1 + 3;
  }
  return iVar4;
}



undefined4
FUN_00952c90(float *param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
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
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  bool bVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int *piVar29;
  undefined4 *puVar30;
  int unaff_FS_OFFSET;
  int local_98;
  float local_90;
  undefined4 *local_8c;
  int local_88;
  undefined1 local_84 [4];
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
  undefined1 local_40 [16];
  float local_30;
  float fStack_2c;
  float fStack_28;
  
  local_88 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar29 = *(int **)(local_88 + 0x19c);
  iVar26 = param_4 * 0x3000 + 0x10;
  iVar27 = piVar29[8];
  uVar4 = iVar27 + iVar26;
  if ((uint)piVar29[0xb] < uVar4) {
    iVar27 = (**(code **)(*piVar29 + 0xc))(iVar26);
  }
  else {
    piVar29[8] = uVar4;
  }
  local_98 = 0;
  if (0 < param_4) {
    local_90 = (float)(param_6 - (int)param_3);
    local_80 = 0.0001;
    fStack_7c = 0.0001;
    fStack_78 = 0.0001;
    fStack_74 = 0.0001;
    local_8c = param_3;
    puVar30 = (undefined4 *)(iVar27 + 0x138);
    do {
      puVar30[-1] = *local_8c;
      *puVar30 = *(undefined4 *)((int)local_8c + (int)local_90);
      puVar30[-2] = 0;
      uVar7 = *local_8c;
      uVar21 = param_5[1];
      uVar22 = param_5[2];
      uVar23 = param_5[3];
      puVar30[-0x4e] = *param_5;
      puVar30[-0x4d] = uVar21;
      puVar30[-0x4c] = uVar22;
      puVar30[-0x4b] = uVar23;
      uVar21 = param_5[5];
      uVar22 = param_5[6];
      uVar23 = param_5[7];
      puVar30[-0x4a] = param_5[4];
      puVar30[-0x49] = uVar21;
      puVar30[-0x48] = uVar22;
      puVar30[-0x47] = uVar23;
      uVar21 = param_5[9];
      uVar22 = param_5[10];
      uVar23 = param_5[0xb];
      puVar30[-0x46] = param_5[8];
      puVar30[-0x45] = uVar21;
      puVar30[-0x44] = uVar22;
      puVar30[-0x43] = uVar23;
      uVar21 = param_5[0xc];
      uVar22 = param_5[0xd];
      uVar23 = param_5[0xe];
      uVar24 = param_5[0xf];
      puVar30[-0x39] = param_2;
      puVar30[-0x38] = uVar7;
      puVar30[-0x36] = puVar30 + -0x32;
      puVar30[-0x35] = puVar30 + -0x22;
      puVar30[-0x33] = puVar30 + -2;
      puVar30[-0x34] = puVar30 + -0x12;
      puVar30[-0x42] = uVar21;
      puVar30[-0x41] = uVar22;
      puVar30[-0x40] = uVar23;
      puVar30[-0x3f] = uVar24;
      puVar30[-0x3e] = local_80;
      puVar30[-0x3d] = fStack_7c;
      puVar30[-0x3c] = fStack_78;
      puVar30[-0x3b] = fStack_74;
      puVar30[-0x3a] = 0x322bcc76;
      puVar30[-0x37] = 0;
      iVar26 = FUN_00952480(local_40,local_84);
      if (iVar26 == 1) {
        param_4 = param_4 + -1;
      }
      else {
        puVar2 = puVar30 + -0x12;
        puVar3 = puVar30 + -0x22;
        puVar1 = puVar30 + -0x32;
        puVar30 = puVar30 + 0xc00;
        FUN_00951bd0(puVar1,puVar3,puVar2);
      }
      local_98 = local_98 + 1;
      local_8c = local_8c + 1;
    } while (local_98 < param_4);
  }
  if (param_4 < 3) {
    iVar26 = param_4;
    if (param_4 < 2) {
      piVar29 = *(int **)(local_88 + 0x19c);
      piVar29[8] = iVar27;
      if (iVar27 == piVar29[10]) {
        (**(code **)(*piVar29 + 0x10))(iVar27);
      }
      return 1;
    }
  }
  else {
    param_4 = 2;
    iVar26 = 2;
  }
  do {
    FUN_00959090(iVar27 + 0x140,iVar27 + 0x3140,&local_70,iVar27 + 0x2ff0,iVar27 + 0x5ff0);
    bVar25 = false;
    local_98 = 0;
    if (iVar26 < 1) break;
    piVar29 = (int *)(iVar27 + 0x148);
    do {
      iVar28 = *piVar29;
      if (iVar28 < 0x37) {
        piVar5 = piVar29 + -2 + iVar28 * 0x10 + 8;
        *piVar29 = iVar28 + 1;
        piVar5[0xc] = 0;
        FUN_00951d00(piVar29[0xbaa],piVar5);
        iVar28 = FUN_009518b0(piVar29 + -2,piVar29[0xbaa],piVar5,&local_90);
        iVar26 = param_4;
        if (iVar28 == 1) {
          if (local_90 == 4.2039e-45) {
            piVar29 = *(int **)(local_88 + 0x19c);
            piVar29[8] = iVar27;
            if (iVar27 == piVar29[10]) {
              (**(code **)(*piVar29 + 0x10))(iVar27);
            }
            return 1;
          }
        }
        else {
          bVar25 = true;
        }
      }
      local_98 = local_98 + 1;
      piVar29 = piVar29 + 0xc00;
    } while (local_98 < iVar26);
  } while (bVar25);
  local_70 = -local_70;
  fStack_6c = -fStack_6c;
  fStack_68 = -fStack_68;
  if (0 < iVar26) {
    local_90 = -fStack_64 - *(float *)(param_2 + 0xc);
    piVar29 = (int *)(iVar27 + 0x138);
    local_98 = param_4;
    local_80 = fStack_68;
    fStack_7c = fStack_68;
    fStack_78 = fStack_68;
    fStack_74 = fStack_68;
    local_60 = local_70;
    fStack_5c = local_70;
    fStack_58 = local_70;
    fStack_54 = local_70;
    local_50 = fStack_6c;
    fStack_4c = fStack_6c;
    fStack_48 = fStack_6c;
    fStack_44 = fStack_6c;
    do {
      FUN_009519c0(piVar29 + 2,piVar29[0xbae],local_40);
      fVar6 = param_1[5];
      fVar9 = param_1[6];
      fVar10 = param_1[7];
      fVar11 = param_1[1];
      fVar12 = param_1[2];
      fVar13 = param_1[3];
      fVar14 = param_1[9];
      fVar15 = param_1[10];
      fVar16 = param_1[0xb];
      iVar26 = *piVar29;
      *(float *)(iVar26 + 0x10) =
           *param_1 * local_60 + param_1[4] * local_50 + param_1[8] * local_80;
      *(float *)(iVar26 + 0x14) = fVar11 * fStack_5c + fVar6 * fStack_4c + fVar14 * fStack_7c;
      *(float *)(iVar26 + 0x18) = fVar12 * fStack_58 + fVar9 * fStack_48 + fVar15 * fStack_78;
      *(float *)(iVar26 + 0x1c) = fVar13 * fStack_54 + fVar10 * fStack_44 + fVar16 * fStack_74;
      fVar9 = param_1[0xd];
      fVar10 = param_1[0xe];
      fVar11 = param_1[0xf];
      fVar12 = param_1[9];
      fVar13 = param_1[10];
      fVar14 = param_1[0xb];
      fVar6 = *(float *)(piVar29[-1] + 0xc);
      pfVar8 = (float *)*piVar29;
      fVar15 = param_1[5];
      fVar16 = param_1[6];
      fVar17 = param_1[7];
      fVar18 = param_1[1];
      fVar19 = param_1[2];
      fVar20 = param_1[3];
      *pfVar8 = *param_1 * local_30 + param_1[4] * fStack_2c + param_1[8] * fStack_28 + param_1[0xc]
      ;
      pfVar8[1] = fVar18 * local_30 + fVar15 * fStack_2c + fVar12 * fStack_28 + fVar9;
      pfVar8[2] = fVar19 * local_30 + fVar16 * fStack_2c + fVar13 * fStack_28 + fVar10;
      pfVar8[3] = fVar20 * local_30 + fVar17 * fStack_2c + fVar14 * fStack_28 + fVar11;
      *(float *)(*piVar29 + 0x1c) = local_90 - fVar6;
      piVar29 = piVar29 + 0xc00;
      local_98 = local_98 + -1;
    } while (local_98 != 0);
  }
  piVar29 = *(int **)(local_88 + 0x19c);
  piVar29[8] = iVar27;
  if (iVar27 == piVar29[10]) {
    (**(code **)(*piVar29 + 0x10))(iVar27);
  }
  return 0;
}



undefined4 FUN_00953130(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}



void FUN_00953140(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa339c;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



undefined4 FUN_00953160(int param_1,int *param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    piVar2 = *(int **)(in_ECX + 4);
    do {
      if (*piVar2 == param_1) {
        *param_2 = (*(int **)(in_ECX + 4))[iVar1 * 2 + 1];
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *(int *)(in_ECX + 8));
  }
  return 1;
}



int FUN_009531a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 unaff_EBP;
  int iVar7;
  int iVar8;
  int local_84;
  uint local_80;
  uint local_7c;
  char local_75;
  int local_74;
  int local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int iStack_5c;
  int iStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_18;
  
  iVar6 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0x80000000;
  FUN_008bc270(&local_6c);
  local_54 = 0;
  local_50 = 0;
  local_4c = -0x80000000;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x80000000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0x80000000;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x80000000;
  local_24 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0x80000000;
  FUN_008a6ee0(&local_84,8);
  *(undefined4 *)(local_84 + local_80 * 8) = param_1;
  *(undefined4 *)(local_84 + 4 + local_80 * 8) = param_2;
  local_80 = local_80 + 1;
  FUN_008b0e10();
  FUN_0090bba0(&DAT_00b2fde4);
  FUN_0090bba0(&DAT_00b2fde4);
  FUN_00953530(&local_74,&local_70);
  local_70 = 0;
  if (0 < (int)local_80) {
    do {
      iVar4 = local_70;
      FUN_008b0e80(*(undefined4 *)(local_84 + local_70 * 8),local_68);
      iVar8 = local_44;
      uVar1 = *(undefined4 *)(local_84 + 4 + iVar4 * 8);
      FUN_00954620(*(undefined4 *)(local_84 + iVar4 * 8),uVar1,local_18,uVar1,&local_54);
      local_74 = iVar8;
      if (iVar8 < local_44) {
        iVar8 = iVar8 * 0xc;
        do {
          uVar1 = *(undefined4 *)(iVar8 + 4 + local_48);
          uVar2 = *(undefined4 *)(iVar8 + 8 + local_48);
          uVar3 = FUN_008b0f00(uVar1);
          FUN_008b0d80(&local_75,uVar3);
          if (local_75 == '\0') {
            if (local_80 == (local_7c & 0x3fffffff)) {
              FUN_008a6ee0(&local_84,8);
            }
            *(undefined4 *)(local_84 + local_80 * 8) = uVar1;
            *(undefined4 *)(local_84 + 4 + local_80 * 8) = uVar2;
            local_80 = local_80 + 1;
          }
          local_74 = local_74 + 1;
          iVar8 = iVar8 + 0xc;
          iVar4 = local_70;
        } while (local_74 < local_44);
      }
      local_70 = iVar4 + 1;
    } while (local_70 < (int)local_80);
  }
  if (local_68 == 0) {
    FUN_004bfc40();
    FUN_008b0e60();
    if ((local_7c & 0x80000000) == 0) {
      FUN_008a75d0(local_84,local_7c << 3,0x14);
    }
    FUN_00941400();
    FUN_008bc000();
    if ((local_64 & 0x80000000) == 0) {
      FUN_008a75d0(local_6c,local_64 & 0x3fffffff,0x14);
    }
    return 0;
  }
  iVar4 = (**(code **)*DAT_00ba7d98)(local_68,5);
  FUN_008b1890(iVar4,local_74,local_70);
  iVar8 = 0;
  if (0 < iStack_58) {
    do {
      *(int *)(iVar4 + *(int *)(iStack_5c + iVar8 * 8)) =
           *(int *)(iStack_5c + 4 + iVar8 * 8) + iVar4;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iStack_58);
  }
  iVar8 = 0;
  if (0 < local_4c) {
    do {
      iVar7 = *(int *)(iVar6 + 4 + local_50);
      iVar5 = FUN_008b1550(iVar7,0xffffffff);
      if (iVar5 != -1) {
        iVar7 = iVar5 + iVar4;
      }
      *(int *)(iVar4 + *(int *)(iVar6 + local_50)) = iVar7;
      iVar8 = iVar8 + 1;
      iVar6 = iVar6 + 0xc;
    } while (iVar8 < local_4c);
  }
  FUN_004bfc40();
  FUN_008b0e60();
  if (-1 < local_84) {
    FUN_008a75d0(unaff_EBP,local_84 << 3,0x14);
  }
  FUN_00941400();
  FUN_008bc000();
  if (-1 < (int)local_6c) {
    FUN_008a75d0(local_74,local_6c & 0x3fffffff,0x14);
  }
  return iVar4;
}



void FUN_00953530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa33bc;
  in_ECX[2] = *param_1;
  in_ECX[3] = *param_2;
  *(bool *)(in_ECX + 4) = *(char *)((int)in_ECX + 9) != *(char *)((int)in_ECX + 0xd);
  return;
}



undefined4 FUN_00953560(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00940b70();
  if (iVar1 != 0) {
    uVar2 = FUN_00940b70();
    return uVar2;
  }
  return 1;
}



void FUN_009535b0(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  int in_ECX;
  uint in_EDX;
  undefined1 local_200 [512];
  
  switch(in_EAX) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0x18:
    goto switchD_009535c3_caseD_1;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    in_ECX = in_ECX * (in_EDX >> 2);
    in_EDX = 4;
switchD_009535c3_caseD_1:
    FUN_009181d0(param_2,in_EDX,in_ECX);
    return;
  default:
    FUN_008bbfb0(local_200,0x200,1);
    FUN_008bbdb0("Unknown class member found during write of plain data array.");
    (**(code **)(*DAT_00ba7fb0 + 8))(3,0x747e1e03,local_200,".\\copier\\hkObjectCopier.cpp",0xdc);
    FUN_008bc000();
    return;
  }
}



void FUN_00953680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x10) == (*(uint *)(in_ECX + 0x14) & 0x3fffffff)) {
    FUN_008a6ee0((int *)(in_ECX + 0xc),0xc);
  }
  puVar1 = (undefined4 *)(*(int *)(in_ECX + 0xc) + *(int *)(in_ECX + 0x10) * 0xc);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + 1;
  return;
}



void FUN_009536d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint in_EAX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int unaff_FS_OFFSET;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  int iStack_4;
  
  uVar3 = (**(code **)(*param_1 + 0x1c))();
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar2 = *(int **)(iVar1 + 0x19c);
  iStack_10 = 0;
  iStack_c = 0;
  uStack_8 = 0x80000000;
  iStack_4 = piVar2[8];
  uVar4 = in_EAX + 0x10 & 0xfffffff0;
  uVar5 = iStack_4 + uVar4;
  if ((uint)piVar2[0xb] < uVar5) {
    iStack_4 = (**(code **)(*piVar2 + 0xc))(uVar4);
  }
  else {
    piVar2[8] = uVar5;
  }
  iVar6 = iStack_c;
  uStack_8 = in_EAX | 0x80000000;
  iStack_10 = iStack_4;
  if (iStack_c < (int)in_EAX) {
    if ((int)(in_EAX & 0x3fffffff) < (int)in_EAX) {
      uVar5 = (in_EAX & 0x3fffffff) * 2;
      if ((int)uVar5 <= (int)in_EAX) {
        uVar5 = in_EAX;
      }
      FUN_008a6e40(&iStack_10,uVar5,1);
    }
    for (; iVar6 < (int)in_EAX; iVar6 = iVar6 + 1) {
      *(undefined1 *)(iVar6 + iStack_10) = 0;
    }
  }
  uVar3 = in_EAX - 1 & uVar3;
  if (uVar3 != 0) {
    (**(code **)(*param_1 + 0xc))(iStack_10,in_EAX - uVar3);
  }
  piVar2 = *(int **)(iVar1 + 0x19c);
  piVar2[8] = iStack_4;
  if (iStack_4 == piVar2[10]) {
    (**(code **)(*piVar2 + 0x10))(iStack_4);
  }
  if (-1 < (int)uStack_8) {
    FUN_008a75d0(iStack_10,uStack_8 & 0x3fffffff,0x14);
  }
  return;
}



void FUN_009537f0(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  undefined4 unaff_ESI;
  uint uVar7;
  int unaff_FS_OFFSET;
  uint local_21c;
  uint local_218;
  uint local_214;
  uint local_210;
  undefined1 local_200 [512];
  
  cVar1 = *(char *)(param_2 + 0xd);
  uVar7 = 0;
  switch(cVar1) {
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
  case '\x06':
  case '\a':
  case '\b':
  case '\t':
  case '\n':
  case '\v':
  case '\f':
  case '\r':
  case '\x0e':
  case '\x0f':
  case '\x10':
  case '\x11':
  case '\x12':
  case '\x18':
    uVar7 = FUN_00940b80();
    break;
  default:
    FUN_008bbfb0(local_200,0x200,1);
    FUN_008bbdb0("Unknown class member type found!");
    (**(code **)(*DAT_00ba7fb0 + 8))(3,0x5ef4e5a4,local_200,".\\copier\\hkObjectCopier.cpp",0xa3);
    FUN_008bc000();
    break;
  case '\x14':
  case '\x15':
    iVar4 = FUN_00940b70();
    if (iVar4 == 0) {
      uVar7 = (uint)*(byte *)(in_ECX + 0xc);
    }
    else {
      iVar4 = FUN_00940b70();
      uVar7 = (uint)*(byte *)(in_ECX + 0xc) * iVar4;
    }
    break;
  case '\x16':
  case '\x17':
  case '\x1a':
  case '\x1b':
    if (cVar1 == '\x1b') {
      uVar7 = (uint)*(byte *)(in_ECX + 0xc);
    }
    uVar7 = uVar7 + 4 + (uint)*(byte *)(in_ECX + 0xc);
    if (cVar1 == '\x16') {
      uVar7 = uVar7 + 4;
    }
    break;
  case '\x19':
    FUN_0090d1f0();
    iVar4 = FUN_00940b70();
    if (iVar4 == 0) {
      uVar7 = FUN_00953130();
    }
    else {
      iVar4 = FUN_00940b70();
      iVar3 = FUN_00953130();
      uVar7 = iVar3 * iVar4;
    }
    break;
  case '\x1c':
    iVar4 = FUN_00940b70();
    if (iVar4 == 0) {
      uVar7 = (uint)*(byte *)(in_ECX + 0xc) << 1;
    }
    else {
      iVar4 = FUN_00940b70();
      uVar7 = (uint)*(byte *)(in_ECX + 0xc) * iVar4 * 2;
    }
  }
  iVar4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  piVar2 = *(int **)(iVar4 + 0x19c);
  local_21c = 0;
  local_218 = 0;
  local_214 = 0x80000000;
  local_210 = piVar2[8];
  uVar5 = uVar7 + 0x10 & 0xfffffff0;
  uVar6 = local_210 + uVar5;
  if ((uint)piVar2[0xb] < uVar6) {
    local_210 = (**(code **)(*piVar2 + 0xc))(uVar5);
  }
  else {
    piVar2[8] = uVar6;
  }
  uVar6 = local_218;
  local_214 = uVar7 | 0x80000000;
  local_21c = local_210;
  if ((int)local_218 < (int)uVar7) {
    if ((int)(uVar7 & 0x3fffffff) < (int)uVar7) {
      uVar5 = (uVar7 & 0x3fffffff) * 2;
      if ((int)uVar5 <= (int)uVar7) {
        uVar5 = uVar7;
      }
      FUN_008a6e40(&local_21c,uVar5,1);
    }
    for (; (int)uVar6 < (int)uVar7; uVar6 = uVar6 + 1) {
      *(undefined1 *)(uVar6 + local_21c) = 0;
    }
  }
  local_218 = uVar7;
  FUN_00918390(local_21c,uVar7);
  piVar2 = *(int **)(iVar4 + 0x19c);
  piVar2[8] = local_218;
  if (local_218 == piVar2[10]) {
    (**(code **)(*piVar2 + 0x10))(local_218);
  }
  if (-1 < (int)local_21c) {
    FUN_008a75d0(unaff_ESI,local_21c & 0x3fffffff,0x14);
  }
  return;
}



int FUN_00953a70(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int in_ECX;
  uint uVar11;
  int iStack_244;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 auStack_200 [512];
  
  piVar2 = (int *)FUN_00953130();
  iVar3 = (**(code **)(*piVar2 + 0x1c))();
  iStack_244 = 0;
  iVar4 = FUN_0090d240();
  if (0 < iVar4) {
    do {
      puVar5 = (undefined4 *)FUN_0090d260(iStack_244);
      (**(code **)(*piVar2 + 0x18))((uint)*(ushort *)((int)puVar5 + 0x12) + iVar3,0);
      iVar4 = FUN_0090d2e0(*puVar5);
      if (((iVar4 == 0) || (cVar1 = *(char *)(puVar5 + 3), *(char *)(iVar4 + 0xc) != cVar1)) ||
         (*(char *)(iVar4 + 0xd) != *(char *)((int)puVar5 + 0xd))) {
        FUN_0090d3b0(iStack_244,piVar2);
      }
      else {
        iVar4 = (uint)*(ushort *)(iVar4 + 0x12) + param_1;
        switch(cVar1) {
        case '\x01':
        case '\x02':
        case '\x03':
        case '\x04':
        case '\x05':
        case '\x06':
        case '\a':
        case '\b':
        case '\t':
        case '\n':
        case '\v':
        case '\f':
        case '\r':
        case '\x0e':
        case '\x0f':
        case '\x10':
        case '\x11':
        case '\x12':
        case '\x18':
          iVar10 = FUN_00940b70();
          if (iVar10 != 0) {
            FUN_00940b70();
          }
          iVar10 = FUN_00940b70();
          if (iVar10 != 0) {
            FUN_00940b70();
          }
          FUN_00940b80(iVar4);
          FUN_009535b0(param_3);
          break;
        case '\x13':
          FUN_009537f0(param_3,puVar5);
          break;
        case '\x14':
        case '\x15':
          iVar4 = FUN_00953560();
          uStack_224 = 0;
          uStack_220 = 0;
          if (0 < iVar4) {
            do {
              FUN_00918390(&uStack_224,*(undefined1 *)(in_ECX + 0xc));
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          break;
        case '\x16':
        case '\x17':
        case '\x1a':
        case '\x1b':
          if (cVar1 == '\x1b') {
            uStack_234 = 0;
            uStack_230 = 0;
            FUN_009181d0(&uStack_234,*(undefined1 *)(in_ECX + 0xc),1);
            uVar11 = *(uint *)(iVar4 + 8);
          }
          else {
            uVar11 = *(uint *)(iVar4 + 4);
          }
          uStack_22c = 0;
          uStack_228 = 0;
          FUN_009181d0(&uStack_22c,*(undefined1 *)(in_ECX + 0xc),1);
          FUN_00918440(uVar11);
          if (*(char *)(puVar5 + 3) == '\x16') {
            FUN_00918440(uVar11 | 0xc0000000);
          }
          break;
        case '\x19':
          uVar6 = FUN_0090d1f0();
          uVar7 = FUN_0090d1f0();
          iVar10 = FUN_00953560();
          iVar8 = FUN_00953560();
          if (iVar8 < iVar10) {
            iVar10 = iVar8;
          }
          iVar8 = 0;
          if (0 < iVar10) {
            do {
              iVar9 = FUN_00953130();
              FUN_00953a70(iVar9 * iVar8 + iVar4,uVar6,param_3,uVar7);
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar10);
          }
          break;
        case '\x1c':
          uStack_21c = 0;
          uStack_218 = 0;
          uStack_214 = 0;
          uStack_210 = 0;
          iVar10 = FUN_00953560();
          iVar4 = FUN_00953560();
          if (iVar10 <= iVar4) {
            iVar4 = iVar10;
          }
          if (0 < iVar4) {
            do {
              FUN_009181d0(&uStack_21c,*(undefined1 *)(in_ECX + 0xc),2);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          break;
        default:
          FUN_008bbfb0(auStack_200,0x200,1);
          FUN_008bbdb0("Unknown class member found during write of data.");
          (**(code **)(*DAT_00ba7fb0 + 8))
                    (3,0x641e3e03,auStack_200,".\\copier\\hkObjectCopier.cpp",0x162);
          FUN_008bc000();
        }
      }
      iStack_244 = iStack_244 + 1;
      iVar4 = FUN_0090d240();
    } while (iStack_244 < iVar4);
  }
  piVar2 = (int *)FUN_00953130();
  iVar4 = *piVar2;
  iVar10 = FUN_00953130(0);
  (**(code **)(iVar4 + 0x18))(iVar10 + iVar3);
  return iVar3;
}



void FUN_00953e10(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *in_ECX;
  int iVar17;
  int iVar18;
  int *piVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  int local_244;
  int local_240;
  int local_23c;
  int local_238;
  int local_230;
  undefined1 local_229;
  int local_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 local_200 [512];
  
  pcVar4 = (char *)FUN_0090d380(&local_229);
  if (*pcVar4 != '\0') {
    local_220 = FUN_0090d1e0();
    if (*(uint *)(param_6 + 0x1c) == (*(uint *)(param_6 + 0x20) & 0x3fffffff)) {
      FUN_008a6ee0((int *)(param_6 + 0x18),8);
    }
    iVar5 = *(int *)(param_6 + 0x1c);
    iVar10 = *(int *)(param_6 + 0x18);
    *(int *)(iVar10 + iVar5 * 8) = param_5;
    *(undefined4 *)(iVar10 + 4 + iVar5 * 8) = local_220;
    *(int *)(param_6 + 0x1c) = *(int *)(param_6 + 0x1c) + 1;
  }
  local_230 = 0;
  iVar5 = FUN_0090d240();
  if (0 < iVar5) {
    do {
      puVar6 = (undefined4 *)FUN_0090d260(local_230);
      iVar5 = FUN_0090d2e0(*puVar6);
      if (iVar5 != 0) {
        piVar19 = (int *)((uint)*(ushort *)(iVar5 + 0x12) + param_1);
        bVar1 = *(byte *)(puVar6 + 3);
        if ((*(byte *)(iVar5 + 0xc) == bVar1) &&
           (cVar2 = *(char *)((int)puVar6 + 0xd), *(char *)(iVar5 + 0xd) == cVar2)) {
          switch(bVar1) {
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x15:
          case 0x18:
            break;
          case 0x14:
            iVar10 = FUN_00953560();
            local_240 = FUN_00953560();
            if (iVar10 <= local_240) {
              local_240 = iVar10;
            }
            local_238 = 0;
            if (0 < local_240) {
              do {
                iVar10 = *(int *)((uint)*(byte *)(in_ECX + 2) * local_238 + (int)piVar19);
                if (iVar10 != 0) {
                  iVar17 = (uint)*(byte *)(in_ECX + 3) * local_238 +
                           (uint)*(ushort *)((int)puVar6 + 0x12);
                  if (*(char *)((int)puVar6 + 0xd) == '\x02') {
                    piVar11 = (int *)FUN_00953130();
                    uVar7 = (**(code **)(*piVar11 + 0x1c))();
                    FUN_0090d920(iVar17 + param_5,uVar7);
                    iVar17 = FUN_008b1860(iVar10);
                    FUN_00918390(iVar10,iVar17 + 1);
                  }
                  else {
                    if (*(char *)(iVar5 + 0xd) == '\x19') {
                      uVar7 = FUN_0090d1f0();
                    }
                    else {
                      uVar7 = 0;
                    }
                    FUN_00953680(iVar17 + param_5,iVar10,uVar7);
                  }
                }
                local_238 = local_238 + 1;
              } while (local_238 < local_240);
            }
            break;
          case 0x16:
          case 0x17:
          case 0x1a:
            if (piVar19[1] != 0) {
              if (cVar2 == '\x14') {
                piVar11 = (int *)FUN_00953130();
                uVar3 = *(ushort *)((int)puVar6 + 0x12);
                uVar7 = (**(code **)(*piVar11 + 0x1c))();
                FUN_0090d920((uint)uVar3 + param_5,uVar7);
                iVar5 = 0;
                uStack_224 = 0;
                local_220 = 0;
                if (0 < piVar19[1]) {
                  do {
                    uVar8 = FUN_0090d1f0();
                    piVar11 = (int *)FUN_00953130();
                    uVar7 = *(undefined4 *)(*piVar19 + iVar5 * 4);
                    uVar9 = (**(code **)(*piVar11 + 0x1c))(uVar7,uVar8);
                    FUN_00953680(uVar9,uVar7,uVar8);
                    FUN_00918390(&uStack_224,(char)in_ECX[3]);
                    iVar5 = iVar5 + 1;
                  } while (iVar5 < piVar19[1]);
                }
              }
              else if (cVar2 == '\x19') {
                piVar11 = (int *)FUN_00953130();
                iVar10 = (**(code **)(*piVar11 + 0x1c))();
                FUN_0090d920((uint)*(ushort *)((int)puVar6 + 0x12) + param_5,iVar10);
                uVar7 = FUN_0090d1f0();
                uVar8 = FUN_0090d1f0();
                iVar5 = *piVar19;
                iVar17 = 0;
                if (0 < piVar19[1]) {
                  do {
                    uVar9 = uVar7;
                    uVar20 = param_3;
                    uVar21 = uVar8;
                    iVar12 = FUN_00953130(uVar7,param_3,uVar8);
                    FUN_00953a70(iVar12 * iVar17 + iVar5,uVar9,uVar20,uVar21);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < piVar19[1]);
                }
                iVar17 = 0;
                if (0 < piVar19[1]) {
                  do {
                    iVar12 = param_6;
                    iVar18 = FUN_00953130(param_6);
                    iVar18 = iVar18 * iVar17 + iVar10;
                    uVar9 = uVar7;
                    uVar20 = param_3;
                    uVar21 = uVar8;
                    iVar14 = FUN_00953130(uVar7,param_3,uVar8,iVar18);
                    FUN_00953e10(iVar14 * iVar17 + iVar5,uVar9,uVar20,uVar21,iVar18,iVar12);
                    iVar17 = iVar17 + 1;
                  } while (iVar17 < piVar19[1]);
                }
              }
              else if (cVar2 == '\x1c') {
                piVar11 = (int *)FUN_00953130();
                iVar5 = (**(code **)(*piVar11 + 0x1c))();
                FUN_0090d920((uint)*(ushort *)((int)puVar6 + 0x12) + param_5,iVar5);
                iVar10 = 0;
                if (0 < piVar19[1]) {
                  do {
                    uStack_21c = 0;
                    uStack_218 = 0;
                    uStack_214 = 0;
                    uStack_210 = 0;
                    FUN_009181d0(&uStack_21c,(char)in_ECX[3],2);
                    iVar10 = iVar10 + 1;
                  } while (iVar10 < piVar19[1]);
                }
                local_23c = 0;
                if (0 < piVar19[1]) {
                  do {
                    iVar10 = (uint)*(byte *)(in_ECX + 3) * local_23c * 2;
                    FUN_00953680(iVar5 + iVar10,*(undefined4 *)(*piVar19 + local_23c * 8),
                                 *(undefined4 *)(*piVar19 + 4 + local_23c * 8));
                    FUN_00953680((uint)*(byte *)(in_ECX + 3) + iVar10 + iVar5,
                                 *(undefined4 *)(*piVar19 + 4 + local_23c * 8),&DAT_00ba8788);
                    local_23c = local_23c + 1;
                  } while (local_23c < piVar19[1]);
                }
              }
              else {
                piVar11 = (int *)FUN_00953130();
                uVar3 = *(ushort *)((int)puVar6 + 0x12);
                uVar7 = (**(code **)(*piVar11 + 0x1c))();
                FUN_0090d920((uint)uVar3 + param_5,uVar7);
                FUN_00940cf0(*piVar19);
                FUN_009535b0(param_3);
              }
            }
            break;
          case 0x19:
            uVar7 = FUN_0090d1f0();
            uVar8 = FUN_0090d1f0();
            local_228 = (uint)*(ushort *)((int)puVar6 + 0x12) + param_5;
            local_240 = FUN_00953560();
            iVar5 = FUN_00953560();
            if (iVar5 <= local_240) {
              local_240 = iVar5;
            }
            iVar5 = 0;
            if (0 < local_240) {
              do {
                iVar17 = FUN_00953130();
                iVar10 = param_6;
                iVar12 = FUN_00953130(param_6);
                FUN_00953e10((int *)(iVar17 * iVar5 + (int)piVar19),uVar7,param_3,uVar8,
                             iVar12 * iVar5 + local_228,iVar10);
                iVar5 = iVar5 + 1;
              } while (iVar5 < local_240);
            }
            break;
          case 0x1b:
            iVar5 = *piVar19;
            iVar10 = (**(code **)(*in_ECX + 0xc))(iVar5);
            if (iVar10 != 0) {
              FUN_00953680((uint)*(ushort *)((int)puVar6 + 0x12) + param_5,*piVar19,&DAT_00ba8788);
              piVar11 = (int *)FUN_00953130();
              iVar12 = (**(code **)(*piVar11 + 0x1c))();
              FUN_0090d920((uint)*(ushort *)((int)puVar6 + 0x12) +
                           (uint)*(byte *)(in_ECX + 3) + param_5,iVar12);
              iVar17 = piVar19[1];
              iVar18 = 0;
              if (0 < piVar19[2]) {
                do {
                  iVar14 = iVar5;
                  uVar7 = param_3;
                  iVar22 = iVar10;
                  iVar13 = FUN_00953130(iVar5,param_3,iVar10);
                  FUN_00953a70(iVar13 * iVar18 + iVar17,iVar14,uVar7,iVar22);
                  iVar18 = iVar18 + 1;
                } while (iVar18 < piVar19[2]);
              }
              iVar18 = 0;
              if (0 < piVar19[2]) {
                do {
                  iVar13 = param_6;
                  iVar14 = FUN_00953130(param_6);
                  iVar15 = iVar14 * iVar18 + iVar12;
                  iVar14 = iVar5;
                  uVar7 = param_3;
                  iVar22 = iVar10;
                  iVar16 = FUN_00953130(iVar5,param_3,iVar10,iVar15);
                  FUN_00953e10(iVar16 * iVar18 + iVar17,iVar14,uVar7,iVar22,iVar15,iVar13);
                  iVar18 = iVar18 + 1;
                } while (iVar18 < piVar19[2]);
              }
            }
            break;
          case 0x1c:
            local_228 = FUN_00953560();
            iVar5 = FUN_00953560();
            local_240 = local_228;
            if (iVar5 <= local_228) {
              local_240 = iVar5;
            }
            local_244 = 0;
            if (0 < local_240) {
              local_23c = 1;
              do {
                iVar5 = *(int *)((uint)*(byte *)(in_ECX + 2) * local_23c + (int)piVar19);
                iVar10 = *(int *)((int)piVar19 + (uint)*(byte *)(in_ECX + 2) * local_244 * 2);
                if ((iVar10 != 0) && (iVar5 != 0)) {
                  FUN_00953680((uint)*(ushort *)((int)puVar6 + 0x12) + param_5 +
                               (uint)*(byte *)(in_ECX + 3) * local_244 * 2,iVar10,iVar5);
                  FUN_00953680((uint)*(ushort *)((int)puVar6 + 0x12) +
                               (uint)*(byte *)(in_ECX + 3) * local_23c + param_5,iVar5,&DAT_00ba8788
                              );
                }
                local_244 = local_244 + 1;
                local_23c = local_23c + 2;
              } while (local_244 < local_240);
            }
            break;
          default:
            FUN_008bbfb0(local_200,0x200,CONCAT31((int3)(bVar1 - 1 >> 8),1));
            FUN_008bbdb0("Unknown class member found during write of data.");
            (**(code **)(*DAT_00ba7fb0 + 8))
                      (3,0x641e3e05,local_200,".\\copier\\hkObjectCopier.cpp",0x26c);
            FUN_008bc000();
          }
          uVar7 = FUN_00953130();
          FUN_009536d0(uVar7);
        }
      }
      local_230 = local_230 + 1;
      iVar5 = FUN_0090d240();
    } while (local_230 < iVar5);
  }
  return;
}



bool FUN_00954620(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  int in_ECX;
  undefined1 local_10 [16];
  
  uVar3 = param_3;
  FUN_009183a0(param_3,*(undefined1 *)(in_ECX + 0x10));
  uVar4 = param_4;
  uVar2 = param_2;
  param_3 = FUN_00953a70(param_1,param_2,local_10,param_4);
  FUN_009536d0(uVar3);
  FUN_00953e10(param_1,uVar2,local_10,uVar4,param_3,param_5);
  FUN_009536d0(uVar3);
  pcVar5 = (char *)FUN_00918060(&param_1);
  cVar1 = *pcVar5;
  FUN_00918180();
  return cVar1 == '\0';
}



void FUN_009546d0(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  if (*param_1 != 0) {
    param_2 = param_2 - (int)param_1;
    do {
      iVar2 = *(int *)(param_2 + (int)param_1);
      if (iVar2 == 0) {
        return;
      }
      (**(code **)(*in_ECX + 8))(*(undefined4 *)(*param_1 + 8),iVar2);
      piVar1 = param_1 + 1;
      param_1 = param_1 + 1;
    } while (*piVar1 != 0);
  }
  return;
}



void FUN_00954710(int param_1)

{
  int *piVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  *(int *)(in_ECX + 0x38) = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar2 = (int *)(in_ECX + 0x44);
    piVar1 = (int *)(param_1 + 0x30);
    do {
      piVar2[-1] = *piVar1;
      *piVar2 = piVar1[1] - *piVar1;
      iVar3 = iVar3 + 1;
      piVar1 = piVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return;
}



void FUN_00954760(void)

{
  byte bVar1;
  int in_ECX;
  
  bVar1 = (byte)*(undefined4 *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x48) = (*(int *)(in_ECX + 0xc) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  *(int *)(in_ECX + 0x54) = (*(int *)(in_ECX + 0x10) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  bVar1 = (byte)*(undefined4 *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x4c) = (*(int *)(in_ECX + 0x14) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  *(int *)(in_ECX + 0x58) = (*(int *)(in_ECX + 0x18) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  bVar1 = (byte)*(undefined4 *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x50) = (*(int *)(in_ECX + 0x1c) >> (bVar1 & 0x1f)) << (bVar1 & 0x1f);
  *(int *)(in_ECX + 0x5c) = (*(int *)(in_ECX + 0x20) >> (bVar1 & 0x1f)) + 1 << (bVar1 & 0x1f);
  return;
}



void FUN_009547b0(int param_1)

{
  int in_ECX;
  
  if (*(char *)(param_1 + 4) == '\0') {
    (**(code **)(**(int **)(in_ECX + 0xc) + 8))(*(undefined4 *)(param_1 + 0xec));
    (**(code **)(**(int **)(in_ECX + 0xc) + 8))(*(undefined4 *)(param_1 + 0xf0));
    *(undefined4 *)(param_1 + 0xec) = 0;
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  return;
}



void FUN_00954800(undefined4 *param_1)

{
  for (; (param_1 != (undefined4 *)0x0 && (*(char *)((int)param_1 + 0x39) == '\0'));
      param_1 = (undefined4 *)*param_1) {
    *(undefined1 *)((int)param_1 + 0x39) = 1;
  }
  return;
}



void FUN_00954830(undefined1 *param_1,int param_2,int *param_3)

{
  int in_ECX;
  
  if ((0x15 < *(int *)(param_2 + 8)) && (*param_3 <= *(int *)(in_ECX + 0x14))) {
    *param_1 = 0;
    return;
  }
  *param_1 = 1;
  return;
}



void FUN_00954860(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_3 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  uVar1 = *(uint *)(param_3 + 0x38);
  uVar2 = (uVar1 - *(int *)(param_2 + 0x34)) + *(int *)(param_1 + 0x24);
  if (((0x1f < uVar2) && ((2 < uVar1 || (0xff < uVar2)))) &&
     (((uVar1 < 0x20 && (0x1f < *(uint *)(param_2 + 0x38))) ||
      (((uVar1 < 0x100 && (0xff < *(uint *)(param_2 + 0x38))) ||
       ((uVar1 < 0x10000 && (0xffff < *(uint *)(param_2 + 0x38))))))))) {
    *(int *)(param_3 + 0x34) = *(int *)(param_1 + 0x24);
  }
  return;
}



void FUN_009548d0(undefined4 param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_009567c0();
    return;
  }
  if (param_2 < 0x100) {
    FUN_00956580();
    return;
  }
  if (param_2 < 0x10000) {
    FUN_009565e0();
    return;
  }
  FUN_009567c0();
  return;
}



void FUN_00954940(int param_1)

{
  FUN_00956520(*(undefined4 *)(param_1 + 0x10));
  FUN_00956520(*(undefined4 *)(param_1 + 0xc));
  FUN_00956520(*(undefined4 *)(param_1 + 8));
  FUN_00956520(*(undefined4 *)(param_1 + 4));
  return;
}



void FUN_00954980(uint param_1)

{
  if (param_1 < 0x100) {
    FUN_00956580(9,param_1);
    return;
  }
  if (param_1 < 0x10000) {
    FUN_009565e0(10,param_1);
    return;
  }
  FUN_009567c0(0xb,param_1);
  return;
}



void FUN_009549c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  char *pcVar6;
  int local_10;
  
  iVar3 = (int)param_1 + 0x38;
  pcVar6 = (char *)((int)param_1 + 0x40);
  piVar5 = (int *)(param_2 + 0x10);
  local_10 = 3;
  param_1 = (int *)(param_2 + 0x28);
  do {
    if (*pcVar6 == '\x01') {
      iVar1 = *param_1;
      iVar2 = piVar5[-1];
      bVar4 = (byte)*(undefined4 *)(param_2 + 0x24);
      FUN_00956520((*piVar5 - iVar1 >> (bVar4 & 0x1f)) + 1);
      FUN_00956520(iVar2 - iVar1 >> (bVar4 & 0x1f));
      FUN_00956520(pcVar6 + (0x1e - iVar3));
    }
    if (*pcVar6 == '\x02') {
      iVar1 = piVar5[-1];
      FUN_00956730(*piVar5 + 1);
      FUN_00956730(iVar1);
      FUN_00956520(pcVar6 + (0x21 - iVar3));
    }
    param_1 = param_1 + 1;
    pcVar6 = pcVar6 + 1;
    piVar5 = piVar5 + 2;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}



void FUN_00954aa0(int *param_1,int param_2,int param_3)

{
  if (*param_1 == 0) {
    if ((*(int *)(param_3 + 0x44) == 0) && (*(int *)(param_3 + 0x40) != 0)) {
      FUN_009548d0(0,*(int *)(param_3 + 0x40));
    }
  }
  else if ((*(int *)(param_3 + 0x44) == 0) && (*(int *)(param_2 + 0x44) != 0)) {
    FUN_009548d0(0,*(undefined4 *)(param_3 + 0x40));
    return;
  }
  return;
}



int FUN_00954af0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
  uVar2 = **(int **)(param_1 + 0xb8) - *(int *)(param_3 + 0x34);
  if (uVar2 < 0x20) {
    FUN_00956550(0x30,uVar2);
  }
  else if (uVar2 < 0x100) {
    FUN_00956580(0x50,uVar2);
  }
  else if (uVar2 < 0x10000) {
    FUN_009565e0(0x51,uVar2);
  }
  else if (uVar2 < 0x1000000) {
    FUN_00956670(0x52,uVar2);
  }
  else {
    FUN_009567c0(0x53,uVar2);
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar5 = (int *)(param_1 + 0x30);
    piVar3 = (int *)(param_2 + 0x44);
    do {
      if ((*piVar5 != 0) && (*piVar3 != 0)) {
        FUN_009548d0(iVar4,*piVar5);
      }
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x2c));
  }
  return *(int *)(*(int *)(in_ECX + 0x10) + 0xc) - iVar1;
}



void FUN_00954bc0(int param_1)

{
  int in_ECX;
  
  param_1 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc) - param_1;
  if (0 < param_1) {
    if (param_1 < 0xff) {
      FUN_00956580(5,param_1);
      return;
    }
    if (param_1 < 0xffff) {
      FUN_009565e0(6,param_1);
      return;
    }
    if (param_1 < 0xffffff) {
      FUN_00956670(7,param_1);
      return;
    }
    FUN_009567c0(8,param_1);
  }
  return;
}



void FUN_00954c10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  float *pfVar4;
  int iVar5;
  float10 fVar6;
  int local_4;
  
  iVar5 = 0;
  piVar3 = (int *)(in_ECX + 0xc);
  local_4 = 0;
  pfVar4 = (float *)(param_1 + 0x10);
  do {
    fVar6 = (float10)FUN_008eca90((pfVar4[-1] - *(float *)(param_2 + iVar5 * 4)) *
                                  *(float *)(param_2 + 0xc));
    iVar1 = FUN_008ecb30((float)fVar6);
    *piVar3 = iVar1;
    fVar6 = (float10)FUN_008eca90((*pfVar4 - *(float *)(param_2 + iVar5 * 4)) *
                                  *(float *)(param_2 + 0xc));
    iVar2 = FUN_008ecb30((float)fVar6);
    iVar1 = *piVar3;
    *(int *)((in_ECX - param_1) + (int)pfVar4) = iVar2 + 1;
    iVar1 = (iVar2 + 1) - iVar1;
    if (local_4 <= iVar1) {
      local_4 = iVar1;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 2;
    piVar3 = piVar3 + 2;
  } while (iVar5 < 3);
  return;
}



void FUN_00954ca0(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc);
  uVar2 = *(int *)(in_ECX + 0x18) - *(int *)(in_ECX + 0x14);
  if ((int)uVar1 <= (int)uVar2) {
    uVar1 = uVar2;
  }
  uVar2 = *(int *)(in_ECX + 0x20) - *(int *)(in_ECX + 0x1c);
  if ((int)uVar1 <= (int)uVar2) {
    uVar1 = uVar2;
  }
  cVar4 = '\0';
  for (uVar2 = uVar1; uVar2 != 0; uVar2 = uVar2 >> 1) {
    cVar4 = cVar4 + '\x01';
  }
  iVar6 = -1;
  iVar5 = 3;
  do {
    iVar3 = 0;
    for (uVar2 = (1 << (cVar4 - 4U & 0x1f)) + uVar1; uVar2 != 0; uVar2 = uVar2 >> 1) {
      iVar3 = iVar3 + 1;
    }
    if (iVar6 < iVar3) {
      iVar6 = iVar3;
    }
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (iVar6 < 0x19) {
    *(int *)(in_ECX + 8) = iVar6;
    return;
  }
  *(undefined4 *)(in_ECX + 8) = 0x18;
  return;
}



void FUN_00954d20(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar2 = param_1;
  piVar3 = in_ECX;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  FUN_00954710(param_2);
  FUN_00954c10(param_2,param_3);
  *in_ECX = *param_1 + 1;
  *(undefined1 *)(in_ECX + 1) = 0;
  FUN_00954ca0();
  return;
}



void FUN_00954d70(undefined1 *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_4 + 8) + -8;
  if (iVar3 < 1) {
    iVar3 = 0;
  }
  iVar1 = *(int *)(param_3 + 0x24);
  iVar2 = iVar1 - iVar3;
  if (iVar1 < iVar1 - iVar3) {
    iVar2 = iVar1;
  }
  if (2 < iVar2) {
    *param_1 = 1;
    return;
  }
  *param_1 = 0;
  return;
}



void FUN_00954db0(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
  iVar5 = *(int *)(param_2 + 8) + -8;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  iVar1 = *(int *)(param_1 + 0x24);
  local_c = iVar1 - iVar5;
  if (iVar1 < iVar1 - iVar5) {
    local_c = iVar1;
  }
  *param_3 = 0;
  if (0 < local_c) {
    if (3 < local_c) {
      local_c = 4;
    }
    do {
      *(int *)(param_2 + 0x24) = *(int *)(param_1 + 0x24) - local_c;
      local_8 = 0;
      piVar6 = (int *)(param_2 + 0x10);
      piVar3 = (int *)(param_2 + 0x28);
      piVar4 = (int *)(param_3 + 8);
      while( true ) {
        if (2 < local_8) {
          *(int *)(param_3 + 4) = local_c;
          *param_3 = 1;
          return;
        }
        iVar5 = *(int *)((param_1 - param_2) + (int)piVar3);
        bVar2 = (byte)*(undefined4 *)(param_1 + 0x24);
        iVar1 = piVar6[-1] - iVar5 >> (bVar2 & 0x1f);
        *piVar3 = (iVar1 << (bVar2 & 0x1f)) + iVar5;
        *piVar4 = iVar1;
        if (0xfe < *piVar6 - *piVar3 >> ((byte)*(undefined4 *)(param_2 + 0x24) & 0x1f)) break;
        local_8 = local_8 + 1;
        piVar4 = piVar4 + 1;
        piVar3 = piVar3 + 1;
        piVar6 = piVar6 + 2;
      }
      local_c = local_c + -1;
    } while( true );
  }
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return;
}



int FUN_00954ec0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_85;
  float local_84;
  int local_80;
  float *local_7c;
  float local_78;
  int local_74;
  float *local_70;
  int local_6c;
  int local_68;
  undefined1 local_64 [20];
  int local_50;
  undefined1 local_4c;
  int local_48;
  
  local_74 = param_3[2];
  if (*(char *)(param_1 + 4) == '\0') {
    local_70 = (float *)in_ECX;
    if (((*(char *)(param_1 + 0x39) == '\0') && (*param_3 < *(int *)(in_ECX + 0x18))) &&
       (pcVar3 = (char *)FUN_00954d70(&local_85,param_1,param_2,param_3), *pcVar3 != '\0')) {
      *(undefined1 *)(param_1 + 0x3c) = 1;
    }
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      FUN_00954db0(param_2,param_3,local_64);
    }
    iVar6 = *(int *)(param_1 + 0xec);
    local_84 = -NAN;
    local_80 = -1;
    local_68 = *(int *)(param_1 + 0xf0);
    local_7c = (float *)0x7fffffff;
    local_78 = 0.0;
    local_6c = iVar6;
    do {
      iVar1 = *(int *)(local_64 + (int)local_78 + -4);
      if (iVar1 != 0) {
        piVar7 = param_3;
        piVar8 = &local_50;
        for (iVar6 = 0x12; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar8 = *piVar7;
          piVar7 = piVar7 + 1;
          piVar8 = piVar8 + 1;
        }
        FUN_00954710(iVar1);
        FUN_00954c10(iVar1,(int)local_70 + 0x30);
        local_50 = *param_3 + 1;
        local_4c = 0;
        FUN_00954ca0();
        uVar4 = FUN_00954ec0(iVar1,param_3,&local_50);
        iVar6 = local_6c;
        *(undefined4 *)((int)&local_80 + (int)local_78) = uVar4;
        if (local_48 <= (int)local_7c) {
          local_7c = (float *)local_48;
        }
      }
      local_78 = (float)((int)local_78 + -4);
    } while (-5 < (int)local_78);
    fVar5 = (float)((int)local_7c + 2);
    if (local_74 + 2 < (int)local_7c + 2) {
      fVar5 = (float)(local_74 + 2);
    }
    if (iVar6 != 0) {
      iVar1 = local_74;
      if (((*(char *)(param_1 + 0x39) == '\0') ||
          (iVar1 = (int)fVar5, *(char *)(iVar6 + 0x39) == '\0')) && ((int)local_84 < iVar1)) {
        *(undefined1 *)(iVar6 + 0x3c) = 1;
      }
      if ((*(char *)(iVar6 + 0x3c) == '\0') && ((int)local_84 <= (int)fVar5)) {
        fVar5 = local_84;
      }
    }
    if (local_68 != 0) {
      if (((*(char *)(param_1 + 0x39) == '\0') ||
          (local_74 = (int)fVar5, *(char *)(local_68 + 0x39) == '\0')) && (local_80 < local_74)) {
        *(undefined1 *)(local_68 + 0x3c) = 1;
      }
      if ((*(char *)(local_68 + 0x3c) == '\0') && (local_80 <= (int)fVar5)) {
        fVar5 = (float)local_80;
      }
    }
  }
  else {
    local_78 = *(float *)(in_ECX + 0x48);
    local_70 = (float *)(param_1 + 0xc);
    local_7c = (float *)(in_ECX + 0x50);
    iVar6 = 0;
    do {
      if (*(char *)(param_1 + 0x39) == '\0') {
        *(undefined1 *)(iVar6 + 0x40 + param_1) = 1;
      }
      local_84 = *local_7c;
      if ((local_70[1] - *local_70 < local_84) && (local_84 < local_78)) {
        iVar1 = FUN_008ecb30(*(float *)(in_ECX + 0x3c) * local_84);
        if (iVar1 * 0x80 < 1 << ((byte)local_74 & 0x1f)) {
          if (*(char *)(param_1 + 0x39) == '\0') {
            *(undefined1 *)(iVar6 + 0x40 + param_1) = 2;
          }
        }
        else {
          local_78 = local_84;
        }
      }
      local_7c = local_7c + 1;
      iVar6 = iVar6 + 1;
      local_70 = local_70 + 2;
    } while (iVar6 < 3);
    uVar2 = FUN_008ecb30(*(float *)(in_ECX + 0x3c) * 0.9 * local_78);
    iVar6 = 0;
    if (uVar2 != 0) {
      iVar6 = 0;
      do {
        uVar2 = uVar2 >> 1;
        iVar6 = iVar6 + 1;
      } while (uVar2 != 0);
    }
    fVar5 = (float)(iVar6 + 6);
    if (iVar6 + 6 <= local_74) {
      return local_74;
    }
  }
  return (int)fVar5;
}



void FUN_00955150(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  float *pfVar7;
  float *local_18;
  int local_10;
  
  local_18 = (float *)(in_ECX + 0x50);
  piVar6 = (int *)(param_1 + 0x50);
  piVar5 = (int *)(param_2 + 0x10);
  pfVar7 = (float *)(param_1 + 0xc);
  local_10 = 3;
  do {
    fVar3 = (float)(1 << ((byte)*(undefined4 *)(param_2 + 0x24) & 0x1f)) / *(float *)(in_ECX + 0x3c)
    ;
    if (fVar3 <= *(float *)(in_ECX + 0x48)) {
      fVar3 = *(float *)(in_ECX + 0x48);
    }
    fVar1 = *local_18;
    if ((pfVar7[1] - *pfVar7 < fVar1) && (fVar1 <= fVar3)) {
      fVar3 = fVar1;
    }
    iVar4 = FUN_008ecb30(*(float *)(in_ECX + 0x3c) * fVar3);
    iVar2 = *(int *)((param_2 - param_1) + (int)pfVar7);
    *piVar6 = *piVar5 + 1 + iVar4;
    piVar6[-3] = iVar2 - iVar4;
    local_18 = local_18 + 1;
    piVar6 = piVar6 + 1;
    pfVar7 = pfVar7 + 2;
    piVar5 = piVar5 + 2;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  return;
}



void FUN_00955240(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
  uVar3 = iVar1 - param_5;
  if (param_3 < 3) {
    uVar2 = iVar1 - param_4;
    if ((((0 < (int)uVar2) || (0xf8 < (int)uVar3)) && ((int)uVar2 < 0x10000)) &&
       ((int)uVar3 < 0x10000)) {
      FUN_00956520(uVar3 & 0xff);
      FUN_00956520(uVar3 >> 8 & 0xff);
      FUN_00956520(uVar2 & 0xff);
      FUN_00956520(uVar2 >> 8 & 0xff);
      FUN_00956520(param_1);
      FUN_00956520(param_2);
      FUN_00956520(param_3 + 0x23);
      return;
    }
    if (param_2 - param_1 == 1) {
      if (0xfb < (int)uVar3) {
        FUN_00954bc0(param_5);
        param_5 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
      }
      FUN_00954bc0(param_4);
      FUN_00956520(*(int *)(*(int *)(in_ECX + 0x10) + 0xc) - param_5);
      FUN_00956520(param_1);
      FUN_00956520(param_3 + 0x20);
      return;
    }
  }
  if (0xfb < (int)uVar3) {
    FUN_00954bc0(param_5);
    param_5 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
  }
  FUN_00954bc0(param_4);
  FUN_00956520(*(int *)(*(int *)(in_ECX + 0x10) + 0xc) - param_5);
  FUN_00956520(param_1);
  FUN_00956520(param_2);
  FUN_00956520(param_3 + 0x10);
  return;
}



undefined4 FUN_009553b0(float *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 <= 0.1) {
    if (param_1[1] <= 0.1) {
      uVar1 = 2;
    }
    else {
      uVar1 = 1;
      if (0.1 < param_1[2]) {
        return 3;
      }
      if (param_1[2] < -0.1) {
        return 4;
      }
    }
  }
  else {
    uVar1 = 0;
    if (param_1[2] <= 0.1) {
      if (-0.1 <= param_1[2]) {
        if (0.1 < param_1[1]) {
          return 7;
        }
        if (param_1[1] < -0.1) {
          return 8;
        }
      }
      else {
        uVar1 = 6;
        if (0.1 < param_1[1]) {
          return 10;
        }
        if (param_1[1] < -0.1) {
          return 0xc;
        }
      }
    }
    else {
      uVar1 = 5;
      if (0.1 < param_1[1]) {
        return 9;
      }
      if (param_1[1] < -0.1) {
        return 0xb;
      }
    }
  }
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009554e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa352c;
  in_ECX[0x10] = 0x3f000000;
  in_ECX[0x12] = 0x3f800000;
  in_ECX[0x18] = 4;
  in_ECX[0x11] = 0x3e4ccccd;
  in_ECX[0x14] = 0x3e4ccccd;
  in_ECX[0x15] = 0x3e4ccccd;
  in_ECX[0x16] = 0x3d4ccccd;
  in_ECX[0x17] = 0;
  _DAT_00ba9810 = 0x3f800000;
  _DAT_00ba9814 = 0;
  _DAT_00ba9818 = 0;
  _DAT_00ba981c = 0;
  _DAT_00ba9830 = 0;
  _DAT_00ba9834 = 0x3f800000;
  _DAT_00ba9838 = 0;
  _DAT_00ba983c = 0;
  _DAT_00ba9850 = 0;
  _DAT_00ba9854 = 0;
  _DAT_00ba9858 = 0x3f800000;
  _DAT_00ba985c = 0;
  _DAT_00ba9820 = 0;
  _DAT_00ba9840 = 0;
  _DAT_00ba9860 = 0;
  _DAT_00ba9870 = 0;
  _DAT_00ba9874 = 0x3f800000;
  _DAT_00ba9878 = 0x3f800000;
  _DAT_00ba987c = 0;
  _DAT_00ba9890 = 0x3f800000;
  _DAT_00ba9894 = 0;
  _DAT_00ba9898 = 0x3f800000;
  _DAT_00ba989c = 0;
  _DAT_00ba98b0 = 0x3f800000;
  _DAT_00ba98b4 = 0x3f800000;
  _DAT_00ba98b8 = 0;
  _DAT_00ba98bc = 0;
  _DAT_00ba9880 = 0x3e4ccccd;
  _DAT_00ba98a0 = 0x3e4ccccd;
  _DAT_00ba98c0 = 0x3e4ccccd;
  _DAT_00ba98d0 = 0;
  _DAT_00ba98d4 = 0x3f800000;
  _DAT_00ba98d8 = 0xbf800000;
  _DAT_00ba98dc = 0;
  _DAT_00ba98f0 = 0x3f800000;
  _DAT_00ba98f4 = 0;
  _DAT_00ba98f8 = 0xbf800000;
  _DAT_00ba98fc = 0;
  _DAT_00ba9910 = 0x3f800000;
  _DAT_00ba9914 = 0xbf800000;
  _DAT_00ba9918 = 0;
  _DAT_00ba991c = 0;
  _DAT_00ba98e0 = 0x3e800000;
  _DAT_00ba9900 = 0x3e800000;
  _DAT_00ba9920 = 0x3e800000;
  _DAT_00ba9930 = 0x3f800000;
  _DAT_00ba9934 = 0x3f800000;
  _DAT_00ba9938 = 0x3f800000;
  _DAT_00ba993c = 0;
  _DAT_00ba9950 = 0x3f800000;
  _DAT_00ba9954 = 0x3f800000;
  _DAT_00ba9958 = 0xbf800000;
  _DAT_00ba995c = 0;
  _DAT_00ba9970 = 0x3f800000;
  _DAT_00ba9974 = 0xbf800000;
  _DAT_00ba9978 = 0xbf800000;
  _DAT_00ba997c = 0;
  _DAT_00ba9990 = 0x3f800000;
  _DAT_00ba9994 = 0xbf800000;
  _DAT_00ba9998 = 0xbf800000;
  _DAT_00ba999c = 0;
  _DAT_00ba9940 = 0x3e99999a;
  _DAT_00ba9960 = 0x3ea3d70a;
  _DAT_00ba9980 = 0x3ea3d70a;
  _DAT_00ba99a0 = 0x3eae147b;
  fVar8 = 0.0;
  pfVar7 = (float *)&DAT_00ba9810;
  do {
    fVar1 = *pfVar7;
    fVar2 = pfVar7[1];
    fVar3 = pfVar7[2];
    fVar9 = fVar2 * fVar2;
    fVar10 = fVar3 * fVar3;
    auVar11._4_4_ = fVar9;
    auVar11._0_4_ = fVar9;
    auVar11._8_4_ = fVar9;
    auVar11._12_4_ = fVar9;
    auVar12._4_12_ = auVar11._4_12_;
    auVar12._0_4_ = fVar9 + fVar1 * fVar1;
    auVar13._4_4_ = fVar10;
    auVar13._0_4_ = fVar10 + auVar12._0_4_;
    auVar13._8_4_ = fVar10;
    auVar13._12_4_ = fVar10;
    auVar13 = rsqrtss(auVar12,auVar13);
    fVar9 = auVar13._0_4_;
    fVar9 = fVar9 * 0.5 * (3.0 - (fVar10 + auVar12._0_4_) * fVar9 * fVar9);
    *pfVar7 = fVar9 * fVar1;
    pfVar7[1] = fVar9 * fVar2;
    pfVar7[2] = fVar9 * fVar3;
    pfVar7[3] = fVar9 * pfVar7[3];
    pfVar7[5] = fVar8;
    pfVar7 = pfVar7 + 8;
    fVar8 = (float)((int)fVar8 + 1);
  } while ((int)pfVar7 < 0xba99b0);
  in_ECX[0x10] = *param_1;
  in_ECX[0x11] = param_1[1];
  in_ECX[0x12] = param_1[2];
  uVar4 = param_1[5];
  uVar5 = param_1[6];
  uVar6 = param_1[7];
  in_ECX[0x14] = param_1[4];
  in_ECX[0x15] = uVar4;
  in_ECX[0x16] = uVar5;
  in_ECX[0x17] = uVar6;
  in_ECX[0x18] = param_1[8];
  in_ECX[4] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = 0;
  return;
}



void FUN_009558d0(int param_1,int param_2,int *param_3,int *param_4)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_40;
  double local_38;
  double local_30;
  double local_20;
  
  pfVar2 = *(float **)(param_1 + 0xb8);
  iVar8 = 0;
  iVar7 = 0;
  local_40 = 0;
  if ((*pfVar2 != 0.0) && (iVar7 = 1, *pfVar2 < 0.0)) {
    local_40 = 1;
  }
  if (pfVar2[1] != 0.0) {
    iVar7 = iVar7 + 1;
    iVar8 = 1;
    if (pfVar2[1] < 0.0) {
      local_40 = local_40 + 1;
    }
  }
  if (pfVar2[2] != 0.0) {
    iVar7 = iVar7 + 1;
    iVar8 = 2;
    if (pfVar2[2] < 0.0) {
      local_40 = local_40 + 1;
    }
  }
  fVar1 = *(float *)(param_1 + 0xc0);
  if (iVar7 == 1) {
    fVar9 = (float10)FUN_008eca90((float)(((float10)*(float *)(param_1 + 0xbc) -
                                          (float10)*(float *)(in_ECX + 0x30 + iVar8 * 4)) *
                                         (float10)*(float *)(in_ECX + 0x3c)));
    iVar4 = FUN_008ecb30((float)fVar9);
    fVar9 = (float10)FUN_008eca90((fVar1 - *(float *)(in_ECX + 0x30 + iVar8 * 4)) *
                                  *(float *)(in_ECX + 0x3c));
    iVar5 = FUN_008ecb30((float)fVar9);
    iVar7 = *(int *)(param_2 + 0x28 + iVar8 * 4);
    bVar6 = (byte)*(undefined4 *)(param_2 + 0x24);
    iVar8 = iVar4 - iVar7 >> (bVar6 & 0x1f);
    iVar7 = (iVar5 - iVar7 >> (bVar6 & 0x1f)) + 1;
    if (iVar8 < 1) {
      iVar8 = 0;
    }
    else if (0xfe < iVar8) {
      iVar8 = 0xff;
    }
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    else if (0xfe < iVar7) {
      iVar7 = 0xff;
    }
    *param_4 = iVar8;
    *param_3 = iVar7;
    if (*param_4 < 0) {
      *param_4 = 0;
      return;
    }
  }
  else {
    fVar3 = 1.0 / *(float *)(in_ECX + 0x3c);
    fVar9 = (float10)(pfVar2[2] *
                      (*(float *)(in_ECX + 0x38) + fVar3 * (float)*(int *)(param_2 + 0x30)) +
                     pfVar2[1] *
                     (*(float *)(in_ECX + 0x34) + fVar3 * (float)*(int *)(param_2 + 0x2c)) +
                     *pfVar2 * (*(float *)(in_ECX + 0x30) + fVar3 * (float)*(int *)(param_2 + 0x28))
                     );
    fVar10 = (float10)1.0 / (float10)(1 << ((byte)*(undefined4 *)(param_2 + 0x24) & 0x1f));
    fVar11 = (float10)1.0;
    local_20 = 1.0;
    if (iVar7 == 2) {
      fVar11 = (float10)1.4142135381698608;
      local_20 = 0.5;
    }
    else if (iVar7 == 3) {
      fVar11 = (float10)1.7320507764816284;
      local_20 = 0.3333333333333333;
    }
    local_30 = (double)((float10)(double)(((float10)*(float *)(param_1 + 0xbc) - fVar9) *
                                          (float10)*(float *)(in_ECX + 0x3c) * fVar10) * fVar11);
    local_38 = (double)(fVar11 * ((float10)fVar1 - fVar9) * (float10)*(float *)(in_ECX + 0x3c) *
                                 fVar10);
    if (local_40 != 0) {
      local_30 = local_30 + (double)(local_40 * 0xff);
      local_38 = (double)(local_40 * 0xff) + local_38;
    }
    fVar9 = (float10)FUN_008eca90((float)((float10)local_20 * (float10)local_30));
    iVar7 = FUN_008ecb30((float)fVar9);
    fVar9 = (float10)FUN_008eca90((float)((float10)local_20 * (float10)local_38));
    iVar8 = FUN_008ecb30((float)fVar9);
    iVar8 = iVar8 + 1;
    if (iVar7 < 1) {
      iVar7 = 0;
    }
    else if (0xfe < iVar7) {
      iVar7 = 0xff;
    }
    if (iVar8 < 1) {
      *param_4 = iVar7;
      *param_3 = 0;
      return;
    }
    if (0xfe < iVar8) {
      iVar8 = 0xff;
    }
    *param_4 = iVar7;
    *param_3 = iVar8;
  }
  return;
}



void FUN_00955ca0(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int local_94;
  int *local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_7c [3];
  undefined1 local_70;
  int aiStack_64 [10];
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [20];
  
  iVar1 = param_1 + 0x38;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if (*(char *)(param_1 + 4) != '\0') {
      FUN_00954760();
      FUN_00955150(param_1,param_3);
      return;
    }
    local_80 = in_ECX;
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      FUN_00954db0(param_2,param_3,local_14);
    }
    FUN_00954760();
    local_8c = FUN_009553b0(*(undefined4 *)(param_1 + 0xb8));
    FUN_009558d0(param_1,param_3,&local_94,&local_84);
    local_84 = *(int *)(param_1 + 0xf0);
    local_7c[1] = *(undefined4 *)(param_1 + 0xec);
    puVar9 = (undefined4 *)(param_1 + 0x50);
    iVar10 = 3;
    local_7c[0] = local_84;
    do {
      FUN_008ecb30(*(float *)(in_ECX + 0x3c) * *(float *)(in_ECX + 0x44));
      puVar9[-3] = 0;
      *puVar9 = 0x7fffffff;
      puVar9 = puVar9 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    local_94 = 0;
    do {
      iVar10 = local_7c[local_94];
      if (iVar10 != 0) {
        piVar4 = param_3;
        piVar11 = local_7c + 2;
        for (iVar5 = 0x12; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar11 = *piVar4;
          piVar4 = piVar4 + 1;
          piVar11 = piVar11 + 1;
        }
        local_3c = *(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24);
        local_38 = *(undefined4 *)(iVar10 + 0x2c);
        iVar5 = 0;
        if (0 < *(int *)(iVar10 + 0x2c)) {
          piVar4 = (int *)(iVar10 + 0x30);
          do {
            *(int *)((int)aiStack_64 + -iVar10 + (int)piVar4) = *piVar4;
            iVar5 = iVar5 + 1;
            *(int *)((int)aiStack_64 + -iVar10 + 4 + (int)piVar4) = piVar4[1] - *piVar4;
            piVar4 = piVar4 + 1;
          } while (iVar5 < *(int *)(iVar10 + 0x2c));
        }
        FUN_00954c10(iVar10,local_80 + 0x30);
        local_7c[2] = *param_3 + 1;
        local_70 = 0;
        FUN_00954ca0();
        FUN_00955ca0(iVar10,param_3,local_7c + 2);
        if (iVar10 == local_84) {
          if (local_8c < 3) {
            *(undefined4 *)(iVar10 + 0x44 + local_8c * 4) = 0;
          }
        }
        else if (local_8c < 3) {
          *(undefined4 *)(iVar10 + 0x50 + local_8c * 4) = 0x7fffffff;
        }
        local_90 = param_3 + 4;
        local_88 = param_3 + 0x15;
        iVar5 = 0;
        piVar11 = (int *)(param_1 + 0x50);
        piVar4 = (int *)(iVar10 + 0x44);
        iVar8 = iVar1 - (iVar10 + 0x38);
        do {
          cVar2 = *(char *)(iVar10 + 0x40 + iVar5);
          if (cVar2 == '\x01') {
            if ((*piVar4 <= local_88[-3]) && (*local_88 <= piVar4[3])) {
              cVar2 = *(char *)(iVar5 + 8 + iVar1);
              cVar6 = '\x01';
              if ('\0' < cVar2) {
                cVar6 = cVar2;
              }
              *(char *)(iVar5 + 8 + iVar1) = cVar6;
LAB_00955ed7:
              *(undefined1 *)(iVar10 + 0x40 + iVar5) = 0;
            }
          }
          else if (((cVar2 == '\x02') && (*piVar4 <= local_90[-1])) && (*local_90 <= piVar4[3])) {
            *(undefined1 *)(iVar5 + 8 + iVar1) = 2;
            goto LAB_00955ed7;
          }
          if (*(char *)(iVar10 + 0x40 + iVar5) == '\0') {
            iVar3 = *(int *)((int)piVar4 + iVar8);
            iVar7 = *piVar4;
            if (*piVar4 < iVar3) {
              iVar7 = iVar3;
            }
            iVar3 = *piVar11;
            *(int *)((int)piVar4 + iVar8) = iVar7;
            iVar7 = piVar4[3];
            if (iVar3 < piVar4[3]) {
              iVar7 = iVar3;
            }
            *piVar11 = iVar7;
          }
          iVar5 = iVar5 + 1;
          local_88 = local_88 + 1;
          local_90 = local_90 + 2;
          piVar4 = piVar4 + 1;
          piVar11 = piVar11 + 1;
        } while (iVar5 < 3);
      }
      local_94 = local_94 + 1;
    } while (local_94 < 2);
  }
  return;
}



int FUN_00955f50(int param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  int *piVar4;
  int *piVar5;
  undefined1 local_85;
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  char local_64 [20];
  int local_50 [19];
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    return 3;
  }
  if (((*(int *)(in_ECX + 0x14) < *param_3) || ((char)param_3[1] != '\0')) ||
     (*param_3 % *(int *)(in_ECX + 0x60) != 0)) {
    if (*(char *)(param_1 + 4) == '\0') {
      local_64[0] = '\0';
      if (*(char *)(param_1 + 0x3c) == '\x01') {
        FUN_00954db0(param_2,param_3,local_64);
      }
      FUN_00954860(param_1,param_2,param_3);
      local_78 = FUN_009553b0(*(undefined4 *)(param_1 + 0xb8));
      FUN_009558d0(param_1,param_3,&local_74,&local_70);
      local_7c = 0xffffffff;
      local_84 = -1;
      local_80 = *(int *)(param_1 + 0xf0);
      if (local_80 != 0) {
        FUN_00954d20(param_3,local_80,in_ECX + 0x30);
        local_84 = FUN_00955f50(local_80,param_3,local_50);
        if (-1 < local_84) {
          local_7c = *(undefined4 *)(local_80 + 0x5c);
          FUN_009547b0(local_80);
        }
      }
      local_80 = *(int *)(param_1 + 0xec);
      if (local_80 != 0) {
        FUN_00954d20(param_3,local_80,in_ECX + 0x30);
        local_68 = FUN_00955f50(local_80,param_3,local_50);
        iVar2 = local_80;
        if (-1 < local_68) {
          local_80 = *(undefined4 *)(local_80 + 0x5c);
          FUN_009547b0(iVar2);
          if ((-1 < local_84) &&
             (pcVar3 = (char *)FUN_00954830(&local_85,param_1,param_3), *pcVar3 != '\0')) {
            FUN_00954800(param_1);
            *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
            local_6c = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
            FUN_00955240(local_70,local_74,local_78,local_80,local_7c);
            iVar2 = param_3[0xd] - *(int *)(param_2 + 0x34);
            if (iVar2 != 0) {
              FUN_00954980(iVar2);
            }
            FUN_00954aa0(param_1,param_2,param_3);
            FUN_009549c0(param_1,param_3);
            if (local_64[0] != '\0') {
              FUN_00954940(local_64);
            }
            *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc);
            *(undefined1 *)(param_1 + 0x38) = 1;
            return (*(int *)(*(int *)(in_ECX + 0x10) + 0xc) - local_6c) + local_68 + local_84;
          }
        }
      }
    }
    else {
      FUN_00954800(param_1);
      if ((*(int *)(param_1 + 8) < 0x16) || (*(int *)(in_ECX + 0x14) < *param_3)) {
        *(int *)(in_ECX + 0x24) = *(int *)(in_ECX + 0x24) + 1;
        local_7c = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
        FUN_00954af0(param_1,param_2,param_3);
        FUN_009549c0(param_1,param_3);
        *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc);
        iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
        *(undefined1 *)(param_1 + 0x38) = 1;
        return iVar2 - local_7c;
      }
    }
    return -1;
  }
  *(undefined1 *)(param_3 + 1) = 1;
  local_80 = *(undefined4 *)(in_ECX + 0x14);
  iVar2 = -1;
  cVar1 = *(char *)(param_1 + 0x38);
  while (cVar1 == '\0') {
    local_7c = *(int *)(*(int *)(in_ECX + 0x10) + 0xc);
    piVar4 = param_3;
    piVar5 = local_50;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar5 = *piVar4;
      piVar4 = piVar4 + 1;
      piVar5 = piVar5 + 1;
    }
    iVar2 = FUN_00955f50(param_1,param_2,local_50);
    if (*(int *)(in_ECX + 0x20) < *(int *)(in_ECX + 0x24)) break;
    if (local_7c == *(int *)(*(int *)(in_ECX + 0x10) + 0xc)) {
      if (*(int *)(in_ECX + 0x14) < 0) break;
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x60);
    }
    cVar1 = *(char *)(param_1 + 0x38);
  }
  *(int *)(in_ECX + 0x14) = local_80;
  *(undefined1 *)(param_3 + 1) = 0;
  return iVar2;
}



void FUN_00956260(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  int unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uStack_b8;
  undefined1 uStack_b4;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_70;
  undefined1 uStack_6c;
  
  in_ECX[3] = param_2;
  in_ECX[8] = param_3;
  in_ECX[9] = 0;
  (**(code **)(*in_ECX + 0x14))(param_1,in_ECX + 0xc);
  if (param_1 != 0) {
    in_ECX[5] = 0;
    uVar1 = *(uint *)(param_1 + 0x28);
    if (uVar1 != 0) {
      iVar2 = 0;
      do {
        uVar1 = uVar1 >> 1;
        iVar2 = iVar2 + 1;
      } while (uVar1 != 0);
      in_ECX[5] = iVar2;
    }
    in_ECX[6] = in_ECX[5] >> 1;
    in_ECX[5] = (in_ECX[5] / in_ECX[0x18] + 2) * in_ECX[0x18] + -1;
    FUN_00954c10(param_1,in_ECX + 0xc);
    uStack_94 = 0x10;
    uStack_88 = 0;
    uStack_8c = 0;
    uStack_90 = 0;
    uStack_b8 = 0xffffffff;
    uStack_84 = 0;
    uStack_b4 = 0;
    FUN_00954710(param_1);
    FUN_00954ca0();
    puVar3 = &uStack_b8;
    puVar4 = (undefined4 *)&stack0xfffffee8;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00954710(param_1);
    FUN_00954c10(param_1,unaff_ESI + 0x30);
    FUN_00954ca0();
    FUN_00954ec0(param_1,&uStack_b8,&stack0xfffffee8);
    FUN_00954c10(param_1,unaff_ESI + 0x30);
    FUN_00954710(param_1);
    FUN_00954ca0();
    puVar3 = (undefined4 *)&stack0xfffffee8;
    puVar4 = &uStack_70;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00954710(param_1);
    FUN_00954c10(param_1,unaff_ESI + 0x30);
    uStack_70 = 0;
    uStack_6c = 0;
    FUN_00954ca0();
    FUN_00955ca0(param_1,&stack0xfffffee8,&uStack_70);
    puVar3 = &uStack_b8;
    puVar4 = (undefined4 *)&stack0xfffffee8;
    for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_00954710(param_1);
    FUN_00954c10(param_1,unaff_ESI + 0x30);
    FUN_00954ca0();
    FUN_00955f50(param_1,&uStack_b8,&stack0xfffffee8);
  }
  return;
}



void FUN_00956490(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa3558;
  uVar1 = (**(code **)*DAT_00ba7d98)(param_1,0x25);
  in_ECX[2] = param_1;
  in_ECX[4] = uVar1;
  in_ECX[3] = 0;
  return;
}



void FUN_009564d0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)*DAT_00ba7d98)(*(int *)(in_ECX + 8) << 1,0x25);
  FUN_008b1890(*(int *)(in_ECX + 8) + iVar1,*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 8));
  *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) << 1;
  (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX + 0x10));
  *(int *)(in_ECX + 0x10) = iVar1;
  return;
}



void FUN_00956520(undefined1 param_1)

{
  int in_ECX;
  int iVar1;
  
  *(undefined1 *)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 8)) =
       param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_00956550(char param_1,char param_2)

{
  int in_ECX;
  int iVar1;
  
  *(char *)((*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 8)) =
       param_2 + param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_00956580(undefined1 param_1,undefined1 param_2)

{
  int in_ECX;
  int iVar1;
  
  *(undefined1 *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       param_2;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(undefined1 *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_009565e0(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)param_2;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(undefined1 *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_00956670(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)param_2;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 0x10);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(undefined1 *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_00956730(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_1 >> 8);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_1 >> 0x10);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



void FUN_009567c0(undefined1 param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)param_2;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 8);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 0x10);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(char *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       (char)((uint)param_2 >> 0x18);
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  *(undefined1 *)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 0xc)) + -1 + *(int *)(in_ECX + 0x10)) =
       param_1;
  iVar1 = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(in_ECX + 0xc) = iVar1;
  if (*(int *)(in_ECX + 8) <= iVar1) {
    FUN_009564d0();
  }
  return;
}



undefined4 * FUN_009568a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int unaff_ESI;
  undefined4 unaff_EDI;
  
  puVar3 = (undefined4 *)(**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x25);
  puVar1 = puVar3 + 8;
  *(undefined2 *)(puVar3 + 1) = 0x30;
  *(undefined2 *)((int)puVar3 + 6) = 1;
  *puVar3 = &PTR_FUN_00a45fec;
  *puVar1 = 0;
  puVar3[9] = 0;
  puVar3[10] = 0x80000000;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  if ((int)(puVar3[10] & 0x3fffffff) < unaff_ESI) {
    FUN_008a6e40(puVar1,unaff_ESI,1);
  }
  if ((int)(puVar3[10] & 0x3fffffff) < unaff_ESI) {
    iVar2 = (puVar3[10] & 0x3fffffff) * 2;
    iVar4 = unaff_ESI;
    if (unaff_ESI < iVar2) {
      iVar4 = iVar2;
    }
    FUN_008a6e40(puVar1,iVar4,1);
  }
  puVar3[9] = unaff_ESI;
  FUN_008b1890(*puVar1,(*(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc)) + *(int *)(in_ECX + 8),
               unaff_ESI);
  (**(code **)(*DAT_00ba7d98 + 4))(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 8) = unaff_EDI;
  return puVar3;
}



void FUN_00956980(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  return;
}



void FUN_009569f0(int param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  
  fVar1 = *(float *)(param_1 + 0xc);
  iVar4 = *in_ECX + -1;
  if (3 < *in_ECX) {
    do {
      iVar2 = *(int *)(in_ECX[2] + iVar4 * 4);
      if ((iVar2 == 0) || (fVar1 <= *(float *)(iVar2 + 0xc))) goto LAB_00956b0e;
      *(int *)(in_ECX[2] + iVar4 * 4 + 4) = iVar2;
      iVar2 = *(int *)(in_ECX[2] + -4 + iVar4 * 4);
      if ((iVar2 == 0) || (fVar1 <= *(float *)(iVar2 + 0xc))) {
        *(int *)(in_ECX[2] + 4 + (iVar4 + -1) * 4) = param_1;
        *in_ECX = *in_ECX + 1;
        return;
      }
      *(int *)(in_ECX[2] + iVar4 * 4) = iVar2;
      iVar2 = *(int *)(in_ECX[2] + -8 + iVar4 * 4);
      if ((iVar2 == 0) || (fVar1 <= *(float *)(iVar2 + 0xc))) {
        *(int *)(in_ECX[2] + 4 + (iVar4 + -2) * 4) = param_1;
        *in_ECX = *in_ECX + 1;
        return;
      }
      *(int *)(in_ECX[2] + -4 + iVar4 * 4) = iVar2;
      iVar2 = *(int *)(in_ECX[2] + -0xc + iVar4 * 4);
      if ((iVar2 == 0) || (fVar1 <= *(float *)(iVar2 + 0xc))) {
        iVar4 = iVar4 + -3;
        goto LAB_00956b0e;
      }
      *(int *)(in_ECX[2] + -8 + iVar4 * 4) = iVar2;
      iVar4 = iVar4 + -4;
    } while (2 < iVar4);
  }
  if (-1 < iVar4) {
    while( true ) {
      iVar3 = *(int *)(in_ECX[2] + iVar4 * 4);
      iVar2 = iVar4 * 4;
      if ((iVar3 == 0) || (fVar1 <= *(float *)(iVar3 + 0xc))) break;
      iVar4 = iVar4 + -1;
      *(int *)(in_ECX[2] + iVar2 + 4) = iVar3;
      if (iVar4 < 0) {
        *(int *)(in_ECX[2] + 4 + iVar4 * 4) = param_1;
        *in_ECX = *in_ECX + 1;
        return;
      }
    }
  }
LAB_00956b0e:
  *(int *)(in_ECX[2] + 4 + iVar4 * 4) = param_1;
  *in_ECX = *in_ECX + 1;
  return;
}



void FUN_00956b20(float param_1)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = *in_ECX + -1;
  if (3 < *in_ECX) {
    do {
      piVar1 = (int *)(in_ECX[2] + iVar2 * 4);
      if (*piVar1 == 0) {
        return;
      }
      if (param_1 <= *(float *)(*piVar1 + 0xc)) {
        return;
      }
      in_ECX[3] = *piVar1;
      *piVar1 = 0;
      *in_ECX = *in_ECX + -1;
      piVar1 = (int *)(in_ECX[2] + -4 + iVar2 * 4);
      if (*piVar1 == 0) {
        return;
      }
      if (param_1 <= *(float *)(*piVar1 + 0xc)) {
        return;
      }
      in_ECX[3] = *piVar1;
      *piVar1 = 0;
      *in_ECX = *in_ECX + -1;
      piVar1 = (int *)(in_ECX[2] + -8 + iVar2 * 4);
      if (*piVar1 == 0) {
        return;
      }
      if (param_1 <= *(float *)(*piVar1 + 0xc)) {
        return;
      }
      in_ECX[3] = *piVar1;
      *piVar1 = 0;
      *in_ECX = *in_ECX + -1;
      piVar1 = (int *)(in_ECX[2] + -0xc + iVar2 * 4);
      if (*piVar1 == 0) {
        return;
      }
      if (param_1 <= *(float *)(*piVar1 + 0xc)) {
        return;
      }
      in_ECX[3] = *piVar1;
      *piVar1 = 0;
      iVar2 = iVar2 + -4;
      *in_ECX = *in_ECX + -1;
    } while (2 < iVar2);
  }
  while( true ) {
    if (iVar2 < 0) {
      return;
    }
    piVar1 = (int *)(in_ECX[2] + iVar2 * 4);
    if (*piVar1 == 0) break;
    if (param_1 <= *(float *)(*piVar1 + 0xc)) {
      return;
    }
    in_ECX[3] = *piVar1;
    *piVar1 = 0;
    iVar2 = iVar2 + -1;
    *in_ECX = *in_ECX + -1;
  }
  return;
}



void FUN_00956c30(int param_1,int *param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int unaff_EBX;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  int unaff_retaddr;
  float fStack_10;
  int iStack_c;
  
  piVar1 = *(int **)(in_ECX + 0x20);
  iVar4 = *(int *)(*(int *)(in_ECX + 8) + 0xc);
  fVar5 = (float10)(**(code **)(*piVar1 + 8))(param_4);
  iVar3 = **(int **)(unaff_EBX + 0xc);
  iVar4 = iVar4 >> 1;
  fStack_10 = 1e+07;
  param_3 = 0;
  if (iVar3 == 0) {
    iVar3 = (*(int **)(unaff_EBX + 0xc))[3];
    if (iVar3 != 0) {
      param_4[0xe] = *(int *)(iVar3 + 0xc);
      iVar3 = 0;
      while( true ) {
        param_4[0xc] = iVar3;
        param_4[0xd] = (param_4[1] - unaff_retaddr) + iVar3;
        fVar6 = (float10)(**(code **)(*piVar1 + 0xc))(param_4);
        fVar6 = fVar6 + (float10)(float)fVar5;
        if (fVar6 < (float10)fStack_10) {
          fStack_10 = (float)fVar6;
          *param_2 = iVar3;
          if (fVar6 < (float10)*(float *)(param_1 + 0xc4)) {
            *(float *)(param_1 + 0xc4) = (float)fVar6;
            *(int *)(param_1 + 0xb8) = param_4[9];
            *(int *)(param_1 + 0xbc) = param_4[8];
            *(int *)(param_1 + 0xc0) = param_4[0xe];
            iVar2 = iVar3 - iVar4;
            if ((iVar2 < param_3) && (param_3 = iVar2, iVar2 < 0)) {
              param_3 = 0;
            }
            (**(code **)(*piVar1 + 0x14))(param_4,param_1 + 200);
          }
        }
LAB_00956cd6:
        iVar3 = iVar3 + -1;
        if (iVar3 < param_3) break;
        if (**(int **)(unaff_EBX + 0xc) < iVar3) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)((*(int **)(unaff_EBX + 0xc))[2] + iVar3 * 4);
        }
        param_4[0xe] = *(int *)(iVar2 + 0xc);
      }
      *param_2 = *param_2 + -1;
    }
  }
  else if ((float)fVar5 <= *(float *)(param_1 + 0xc4)) {
    if (iStack_c < 1) goto LAB_00956cd6;
    iVar2 = *param_2 + iVar4;
    if (iVar3 < iVar2) {
      iVar2 = iVar3;
    }
    param_3 = *param_2 - iVar4;
    iVar3 = iVar2;
    if (-1 < param_3) goto LAB_00956cd6;
    param_3 = 0;
    goto LAB_00956cd6;
  }
  FUN_009569f0(unaff_retaddr * 0x10 + *param_4);
  return;
}



void FUN_00956dd0(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint local_c;
  uint local_4;
  
  iVar3 = param_2;
  puVar6 = (uint *)*param_1;
  uVar7 = *puVar6;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0xffffffff;
  param_2 = param_1[1];
  local_c = uVar7;
  if (-1 < param_2 + -1) {
    do {
      uVar1 = *puVar6;
      if (local_c < uVar1) {
        local_c = uVar1;
      }
      if (uVar1 < uVar7) {
        uVar7 = uVar1;
      }
      iVar4 = (**(code **)(**(int **)(in_ECX + 0x28) + 0x1c))(puVar6,&local_4);
      if (*(int *)(iVar3 + 0x2c) < iVar4) {
        *(int *)(iVar3 + 0x2c) = iVar4;
      }
      iVar8 = 0;
      if (0 < iVar4) {
        puVar5 = (uint *)(iVar3 + 0x34);
        do {
          uVar1 = (&local_4)[iVar8];
          if (uVar1 < puVar5[-1]) {
            puVar5[-1] = uVar1;
          }
          if (*puVar5 < uVar1) {
            *puVar5 = uVar1;
          }
          iVar8 = iVar8 + 1;
          puVar5 = puVar5 + 1;
        } while (iVar8 < iVar4);
      }
      puVar6 = puVar6 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  uVar2 = param_1[1];
  *(uint *)(iVar3 + 0x24) = uVar7;
  *(undefined4 *)(iVar3 + 8) = uVar2;
  *(uint *)(iVar3 + 0x28) = local_c;
  return;
}



void FUN_00956e90(int param_1,uint *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int in_ECX;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  float local_c [3];
  
  if (param_1 != 0) {
    iVar3 = *(int *)(in_ECX + 0x34);
    local_c[0] = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0xc);
    iVar4 = *(int *)(param_1 + 0xb8);
    if (iVar4 == iVar3) {
      local_c[0] = local_c[0] * 0.66;
    }
    fVar1 = 0.0;
    if (0.0 < local_c[0]) {
      fVar1 = local_c[0];
    }
    local_c[1] = *(float *)(param_1 + 0x18) - *(float *)(param_1 + 0x14);
    if (iVar4 == iVar3 + 0x20) {
      local_c[1] = local_c[1] * 0.66;
    }
    fVar5 = fVar1;
    if (fVar1 < local_c[1]) {
      fVar5 = local_c[1];
    }
    uVar9 = (uint)(fVar1 < local_c[1]);
    local_c[2] = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x1c);
    if (iVar4 == iVar3 + 0x40) {
      local_c[2] = local_c[2] * 0.66;
    }
    if (fVar5 < local_c[2]) {
      uVar9 = 2;
      fVar5 = local_c[2];
    }
    uVar7 = (uVar9 + 1) % 3;
    fVar1 = local_c[uVar7];
    uVar8 = (uVar9 + 2) % 3;
    fVar2 = local_c[uVar8];
    fVar6 = 1.0 / fVar5;
    *param_2 = uVar9;
    *param_3 = 0;
    if (fVar2 <= fVar1) {
      fVar1 = local_c[uVar7];
      param_2[1] = uVar7;
      fVar1 = (fVar5 - fVar1) * fVar6;
      param_3[1] = fVar1 * fVar1 * fVar1 * 16.0 * 0.05;
      param_2[2] = uVar8;
      fVar1 = local_c[uVar8];
    }
    else {
      fVar1 = local_c[uVar8];
      param_2[1] = uVar8;
      fVar1 = (fVar5 - fVar1) * fVar6;
      param_3[1] = fVar1 * fVar1 * fVar1 * 16.0 * 0.05;
      param_2[2] = uVar7;
      fVar1 = local_c[uVar7];
    }
    fVar6 = (fVar5 - fVar1) * fVar6;
    param_3[2] = fVar6 * fVar6 * fVar6 * 16.0 * 0.05;
    return;
  }
  *param_2 = 0;
  param_2[1] = 1;
  param_2[2] = 2;
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  return;
}



void FUN_00957040(undefined4 param_1,undefined4 param_2,int *param_3,float *param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint *puVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  piVar3 = param_3;
  local_38 = *(undefined4 *)(in_ECX + 0x38);
  local_3c = param_5;
  local_30 = param_4[1];
  local_24 = param_3[1];
  local_34 = *param_4;
  local_20 = 1.0 / (float)local_24;
  local_18 = param_2;
  iVar6 = 0;
  local_40 = 0;
  local_14 = *(uint *)*param_3;
  local_10 = *(uint *)*param_3;
  if (0.001 <= param_4[1] - *param_4) {
    local_2c = 1.0 / (param_4[1] - *param_4);
  }
  else {
    local_2c = 1.0;
  }
  iVar1 = *(int *)(*(int *)(in_ECX + 8) + 8);
  iVar5 = param_3[2];
  if (iVar1 < param_3[2]) {
    iVar5 = iVar1;
  }
  if (0 < param_3[1]) {
    param_3 = (int *)0x0;
    do {
      puVar4 = (uint *)(*piVar3 + (int)param_3);
      local_1c = puVar4[2];
      if (*puVar4 <= local_14) {
        local_14 = *puVar4;
      }
      if (local_10 <= *puVar4) {
        local_10 = *puVar4;
      }
      local_28 = iVar6;
      FUN_00956b20(local_1c);
      piVar2 = *(int **)(in_ECX + 0xc);
      iVar1 = *piVar2;
      while (iVar1 = iVar1 + -1, iVar5 < iVar1) {
        piVar2[3] = *(int *)(piVar2[2] + iVar1 * 4);
        *(undefined4 *)(piVar2[2] + iVar1 * 4) = 0;
        *piVar2 = *piVar2 + -1;
      }
      FUN_00956c30(iVar6,param_1,&local_40,&local_3c,piVar3);
      iVar6 = iVar6 + 1;
      param_3 = (int *)((int)param_3 + 0x10);
    } while (iVar6 < piVar3[1]);
  }
  piVar3 = *(int **)(in_ECX + 0xc);
  iVar6 = *piVar3;
  while (iVar6 = iVar6 + -1, 0 < iVar6) {
    *(undefined4 *)(piVar3[2] + iVar6 * 4) = 0;
  }
  piVar3[3] = 0;
  *piVar3 = 0;
  return;
}



void FUN_009571b0(undefined4 param_1,int param_2,float param_3,int *param_4,int *param_5,
                 int *param_6,int *param_7,int *param_8,int *param_9)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int in_ECX;
  float fVar13;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  switch(param_1) {
  case 0:
    *param_8 = *param_8 + -0x10;
    *param_9 = *param_9 + -0x10;
    iVar7 = *param_7;
    *param_7 = iVar7 + -0x10;
    puVar1 = (undefined4 *)*param_8;
    puVar2 = (undefined4 *)*param_6;
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    uVar9 = *(undefined4 *)(iVar7 + -0x10);
    uVar10 = *(undefined4 *)(iVar7 + -0xc);
    uVar11 = *(undefined4 *)(iVar7 + -8);
    uVar12 = *(undefined4 *)(iVar7 + -4);
    puVar2 = (undefined4 *)*param_9;
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    puVar1[2] = puVar2[2];
    puVar1[3] = puVar2[3];
    puVar1 = (undefined4 *)*param_9;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1 = (undefined4 *)*param_6;
    if (puVar1 != (undefined4 *)*param_7) {
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
    }
    break;
  case 1:
    *param_6 = *param_6 + 0x10;
    return;
  case 2:
    *param_8 = *param_8 + -0x10;
    iVar7 = *param_7;
    *param_7 = iVar7 + -0x10;
    puVar1 = (undefined4 *)*param_6;
    puVar2 = (undefined4 *)*param_8;
    if (puVar1 != puVar2) {
      uVar3 = *(undefined4 *)(iVar7 + -0x10);
      uVar4 = *(undefined4 *)(iVar7 + -0xc);
      uVar5 = *(undefined4 *)(iVar7 + -8);
      uVar6 = *(undefined4 *)(iVar7 + -4);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar1 = (undefined4 *)*param_6;
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      return;
    }
    break;
  case 3:
    *param_4 = *param_4 + -1;
    *param_5 = *param_5 + 1;
    iVar7 = *param_8;
    *param_8 = iVar7 + -0x10;
    pfVar8 = *(float **)(param_2 + 0xb8);
    local_34 = (*(float *)(param_2 + 0xc0) + *(float *)(param_2 + 0xbc)) * 0.5;
    fVar13 = param_3;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(*param_6,pfVar8,local_34,param_3,iVar7 + -0x10);
    local_34 = -*pfVar8;
    local_30 = -pfVar8[1];
    local_2c = -pfVar8[2];
    local_28 = -pfVar8[3];
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x18))(*param_6,&local_34,-fVar13,param_3,*param_6);
    *param_6 = *param_6 + 0x10;
    return;
  }
  return;
}



undefined4 * FUN_009573a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x18) = *puVar1;
  *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + -1;
  FUN_00956980();
  *(undefined1 *)(puVar1 + 1) = 1;
  *puVar1 = param_1;
  puVar1[0x2e] = *param_2;
  FUN_00956dd0(param_2,puVar1);
  iVar2 = 0;
  puVar3 = puVar1 + 3;
  do {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x14))
              (*(int *)(in_ECX + 0x34) + iVar2,*param_2,param_2[1],puVar3,puVar3 + 1);
    iVar2 = iVar2 + 0x20;
    puVar3 = puVar3 + 2;
  } while (iVar2 < 0x60);
  return puVar1;
}



void FUN_00957460(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  
  do {
    fVar2 = *(float *)((param_2 + param_3 >> 1) * 0x10 + param_1 + 8);
    iVar9 = param_3;
    iVar10 = param_2;
    do {
      for (pfVar7 = (float *)(iVar10 * 0x10 + 8 + param_1); *pfVar7 < fVar2; pfVar7 = pfVar7 + 4) {
        iVar10 = iVar10 + 1;
      }
      for (pfVar7 = (float *)(iVar9 * 0x10 + 8 + param_1); fVar2 < *pfVar7; pfVar7 = pfVar7 + -4) {
        iVar9 = iVar9 + -1;
      }
      if (iVar9 < iVar10) break;
      if (iVar9 != iVar10) {
        puVar1 = (undefined4 *)(iVar9 * 0x10 + param_1);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        puVar8 = (undefined4 *)(iVar10 * 0x10 + param_1);
        *puVar1 = *puVar8;
        puVar1[1] = puVar8[1];
        puVar1[2] = puVar8[2];
        puVar1[3] = puVar8[3];
        *puVar8 = uVar3;
        puVar8[1] = uVar4;
        puVar8[2] = uVar5;
        puVar8[3] = uVar6;
      }
      iVar9 = iVar9 + -1;
      iVar10 = iVar10 + 1;
    } while (iVar10 <= iVar9);
    if (param_2 < iVar9) {
      FUN_00957460(param_1,param_2,iVar9,param_4);
    }
    param_2 = iVar10;
    if (param_3 <= iVar10) {
      return;
    }
  } while( true );
}



void FUN_00957590(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa3564;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_009575f0(uint *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint *param_5,
                 int *param_6,int param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  int in_ECX;
  int iVar12;
  bool bVar13;
  int iVar14;
  undefined1 local_20 [4];
  undefined1 local_1c [12];
  int *piStack_10;
  int *piStack_c;
  int *piStack_8;
  int *piStack_4;
  
  iVar14 = *(int *)(*(int *)(param_7 + 0xb8) + 0x14);
  iVar12 = 0;
  fVar10 = 0.0;
  if (iVar14 != 0) {
    fVar11 = *(float *)(param_7 + 0x10) - *(float *)(param_7 + 0xc);
    fVar10 = 0.0;
    if (0.0 < fVar11) {
      fVar10 = fVar11;
    }
  }
  if ((iVar14 != 1) &&
     (fVar11 = *(float *)(param_7 + 0x18) - *(float *)(param_7 + 0x14), fVar10 < fVar11)) {
    iVar12 = 1;
    fVar10 = fVar11;
  }
  if ((iVar14 != 2) && (fVar10 < *(float *)(param_7 + 0x20) - *(float *)(param_7 + 0x1c))) {
    iVar12 = 2;
  }
  iVar14 = (int)(*param_6 - *param_5) >> 4;
  (**(code **)(**(int **)(in_ECX + 0x28) + 0x10))
            (iVar12 * 0x20 + *(int *)(in_ECX + 0x34),*param_5,iVar14,local_20,local_1c);
  param_2 = param_2 & 0xffffff00;
  if (1 < iVar14) {
    FUN_00957460(*param_5,0,iVar14 + -1,param_2);
  }
  param_2 = *param_1;
  bVar13 = (int)(*piStack_c - *piStack_10 & 0xfffffff0U) <
           (int)(*piStack_4 - *piStack_8 & 0xfffffff0U);
  if (*param_5 < param_2) {
    do {
      iVar12 = *piStack_c - *piStack_10 >> 4;
      iVar14 = *piStack_4 - *piStack_8 >> 4;
      if (bVar13) {
        iVar14 = iVar14 << 2;
      }
      else {
        iVar12 = iVar12 << 2;
      }
      if (iVar14 <= iVar12) {
        *piStack_4 = *piStack_4 + 0x10;
        *param_5 = *param_5 + 0x10;
      }
      else {
        uVar1 = *(undefined4 *)(param_2 - 0x10);
        uVar2 = *(undefined4 *)(param_2 - 0xc);
        uVar3 = *(undefined4 *)(param_2 - 8);
        uVar4 = *(undefined4 *)(param_2 - 4);
        puVar5 = (undefined4 *)*param_5;
        *(undefined4 *)(param_2 - 0x10) = *puVar5;
        *(undefined4 *)(param_2 - 0xc) = puVar5[1];
        *(undefined4 *)(param_2 - 8) = puVar5[2];
        *(undefined4 *)(param_2 - 4) = puVar5[3];
        puVar5 = (undefined4 *)*piStack_8;
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        uVar8 = puVar5[2];
        uVar9 = puVar5[3];
        puVar5 = (undefined4 *)*piStack_c;
        *puVar5 = uVar1;
        puVar5[1] = uVar2;
        puVar5[2] = uVar3;
        puVar5[3] = uVar4;
        puVar5 = (undefined4 *)*param_5;
        *puVar5 = uVar6;
        puVar5[1] = uVar7;
        puVar5[2] = uVar8;
        puVar5[3] = uVar9;
        *piStack_c = *piStack_c + 0x10;
        *piStack_8 = *piStack_8 + 0x10;
        *param_5 = *param_5 + 0x10;
        *piStack_4 = *piStack_4 + 0x10;
      }
      bVar13 = iVar14 > iVar12;
      param_2 = *param_1;
    } while (*param_5 < param_2);
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */

void FUN_009577f0(uint *param_1,undefined4 *param_2,undefined4 param_3,uint *param_4,
                 undefined4 *param_5)

{
  float fVar1;
  float fVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *local_1c;
  uint local_18;
  undefined4 *local_14;
  uint local_10;
  uint local_c [2];
  undefined4 *local_4;
  
  uVar6 = param_3;
  iVar5 = (int)param_2;
  puVar3 = param_1;
  local_18 = param_1[2];
  local_10 = *param_1;
  local_1c = (undefined4 *)((param_1[1] + local_18) * 0x10 + local_10);
  param_1 = (uint *)(param_1[1] * 0x10 + local_10);
  local_c[1] = 0;
  local_14 = local_1c;
  local_c[0] = local_10;
  local_4 = local_1c;
  if (local_10 < param_1) {
    do {
      uVar10 = 0;
      fVar1 = *(float *)(local_c[0] + 0xc);
      fVar2 = *(float *)(iVar5 + 0xc0);
      if (*(float *)(iVar5 + 0xbc) <= *(float *)(local_c[0] + 8)) {
        if (fVar2 < fVar1) {
          uVar10 = 2;
        }
      }
      else if (fVar1 < fVar2 == (fVar1 == fVar2)) {
        uVar10 = 3;
      }
      else {
        uVar10 = 1;
      }
      FUN_009571b0(uVar10,iVar5,uVar6,&local_18,local_c + 1,local_c,&param_1,&local_14,&local_1c);
    } while (local_c[0] < param_1);
  }
  uVar8 = local_18;
  param_2 = local_1c;
  FUN_009575f0(&local_10,&param_1,&local_14,&param_2,&local_1c,&local_4,iVar5);
  puVar7 = param_4;
  uVar4 = (uint)param_1;
  param_1 = (uint *)((int)((int)param_1 - local_10) >> 4);
  param_4[1] = (uint)param_1;
  uVar9 = FUN_008ecb30(((float)(int)param_1 * (float)(int)local_18) / (float)(int)puVar3[1]);
  puVar7[2] = uVar9;
  param_5[1] = (int)param_2 - (int)local_14 >> 4;
  param_5[2] = uVar8 - puVar7[2];
  *puVar7 = local_10;
  puVar11 = (undefined4 *)(puVar7[2] * 0x10 + uVar4);
  *param_5 = puVar11;
  if (param_5[2] != 0) {
    for (; local_14 < param_2; local_14 = local_14 + 4) {
      *puVar11 = *local_14;
      puVar11[1] = local_14[1];
      puVar11[2] = local_14[2];
      puVar11[3] = local_14[3];
      puVar11 = puVar11 + 4;
    }
  }
  return;
}



int * FUN_00957980(int param_1,undefined4 *param_2,int *param_3,int param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  uint uStack_34;
  int iStack_30;
  undefined1 auStack_2c [8];
  float afStack_24 [3];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  puVar1 = param_2;
  if (param_2[1] == 1) {
    if (*(int *)(in_ECX + 0x1c) == 0) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x10))(*(undefined4 *)(in_ECX + 0x2c));
    }
    piVar2 = (int *)FUN_009573a0(param_1,puVar1);
    return piVar2;
  }
  if (*(int *)(in_ECX + 0x14) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x10))(*(undefined4 *)(in_ECX + 0x2c));
  }
  piVar2 = *(int **)(in_ECX + 0x10);
  *(int *)(in_ECX + 0x10) = *piVar2;
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + -1;
  FUN_00956980();
  *(undefined1 *)(piVar2 + 1) = 0;
  piVar2[0x31] = 0x49742400;
  piVar2[0x2f] = 0x501502f9;
  piVar2[0x3b] = 0;
  piVar2[0x3c] = 0;
  piVar2[0x3d] = puVar1[1];
  *piVar2 = param_1;
  if (param_1 == 0) {
    *(int **)(in_ECX + 0x2c) = piVar2;
  }
  else {
    if (param_3 == (int *)0x0) {
      *(int **)(param_1 + 0xec) = piVar2;
    }
    else {
      *(int **)(param_1 + 0xf0) = piVar2;
    }
    piVar2[3] = *(int *)(param_1 + 0xc);
    piVar2[4] = *(int *)(param_1 + 0x10);
    piVar2[5] = *(int *)(param_1 + 0x14);
    piVar2[6] = *(int *)(param_1 + 0x18);
    piVar2[7] = *(int *)(param_1 + 0x1c);
    piVar2[8] = *(int *)(param_1 + 0x20);
  }
  param_2 = (undefined4 *)0x0;
  FUN_00956e90(param_1,&iStack_30,afStack_24);
  param_1 = 0;
  do {
    iVar3 = (&iStack_30)[param_1] * 0x20;
    iVar4 = iVar3 + *(int *)(in_ECX + 0x34);
    if ((float)piVar2[0x31] <
        afStack_24[param_1] + *(float *)(iVar3 + 0x10 + *(int *)(in_ECX + 0x34)))
    goto joined_r0x00957b24;
    param_3 = piVar2 + (&iStack_30)[param_1] * 2 + 3;
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10))(iVar4,*puVar1,puVar1[1],param_3,param_3 + 1);
    uStack_34 = uStack_34 & 0xffffff00;
    if (1 < (int)puVar1[1]) {
      FUN_00957460(*puVar1,0,puVar1[1] + -1,uStack_34);
    }
    param_2 = (undefined4 *)iVar4;
    FUN_00957040(piVar2,iVar4,puVar1,param_3,param_4);
    param_1 = param_1 + 1;
  } while (param_1 < 3);
LAB_00957b66:
  param_3 = (int *)0x3;
  if (3 < *(int *)(in_ECX + 0x30)) {
    param_1 = 0x60;
    do {
      iVar3 = *(int *)(in_ECX + 0x34) + param_1;
      if ((float)piVar2[0x31] < *(float *)(*(int *)(in_ECX + 0x34) + 0x10 + param_1)) break;
      (**(code **)(**(int **)(in_ECX + 0x28) + 0x10))(iVar3,*puVar1,puVar1[1],&iStack_30,auStack_2c)
      ;
      uStack_34 = uStack_34 & 0xffffff00;
      if (1 < (int)puVar1[1]) {
        FUN_00957460(*puVar1,0,puVar1[1] + -1,uStack_34);
      }
      param_2 = (undefined4 *)iVar3;
      FUN_00957040(piVar2,iVar3,puVar1,&iStack_30,param_4);
      param_3 = (int *)((int)param_3 + 1);
      param_1 = param_1 + 0x20;
    } while ((int)param_3 < *(int *)(in_ECX + 0x30));
  }
  FUN_00956dd0(puVar1,piVar2);
  if (param_2 != (undefined4 *)piVar2[0x2e]) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x10))
              (piVar2[0x2e],*puVar1,puVar1[1],&param_2,&param_1);
  }
  iVar3 = param_4;
  FUN_009577f0(puVar1,piVar2,param_4,auStack_c,auStack_18);
  iVar4 = FUN_00957980(piVar2,auStack_18,1,iVar3 + 1);
  piVar2[0x3c] = iVar4;
  iVar3 = FUN_00957980(piVar2,auStack_c,0,iVar3 + 1);
  piVar2[0x3b] = iVar3;
  return piVar2;
joined_r0x00957b24:
  for (; param_1 < 3; param_1 = param_1 + 1) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0x14))
              ((&iStack_30)[param_1] * 0x20 + *(int *)(in_ECX + 0x34),*puVar1,puVar1[1],
               piVar2 + (&iStack_30)[param_1] * 2 + 3,piVar2 + (&iStack_30)[param_1] * 2 + 3 + 1);
  }
  goto LAB_00957b66;
}



undefined4
FUN_00957c90(int *param_1,undefined4 param_2,int *param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  *(int *)(in_ECX + 8) = param_4;
  *(int **)(in_ECX + 0x28) = param_1;
  *(undefined4 *)(in_ECX + 0x20) = param_2;
  *(int **)(in_ECX + 0x24) = param_3;
  iStack_18 = (**(code **)(*param_1 + 8))();
  iStack_14 = *(undefined4 *)(param_4 + 4);
  uVar1 = *param_5;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  if (iStack_18 != 0) {
    iVar5 = 0;
    iVar2 = iStack_18;
    do {
      iVar2 = iVar2 >> 1;
      iVar5 = iVar5 + 1;
    } while (iVar2 != 0);
    *(int *)(in_ECX + 0x38) = iVar5;
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  puVar3 = (undefined4 *)param_5[1];
  iVar2 = 0x400;
  do {
    *puVar3 = *(undefined4 *)(in_ECX + 0x10);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    puVar3[0x3e] = puVar3;
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    puVar3[0x7c] = puVar3 + 0x3e;
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
    puVar3[0xba] = puVar3 + 0x7c;
    *(undefined4 **)(in_ECX + 0x10) = puVar3 + 0xba;
    puVar3 = puVar3 + 0xf8;
    iVar2 = iVar2 + -1;
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  puVar3 = (undefined4 *)param_5[2];
  iVar2 = 0x400;
  do {
    *puVar3 = *(undefined4 *)(in_ECX + 0x18);
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
    puVar3[0x2f] = puVar3;
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
    puVar3[0x5e] = puVar3 + 0x2f;
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
    puVar3[0x8d] = puVar3 + 0x5e;
    *(undefined4 **)(in_ECX + 0x18) = puVar3 + 0x8d;
    puVar3 = puVar3 + 0xbc;
    iVar2 = iVar2 + -1;
    *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
  } while (iVar2 != 0);
  uVar4 = (**(code **)(*param_3 + 8))();
  *(undefined4 *)(in_ECX + 0x30) = uVar4;
  uVar4 = (**(code **)(*param_3 + 0xc))();
  *(undefined4 *)(in_ECX + 0x34) = uVar4;
  iVar2 = *(int *)(*(int *)(in_ECX + 8) + 8) + 2;
  uStack_10 = (**(code **)*DAT_00ba7d98)(iVar2 * 4,0x25);
  *(int **)(in_ECX + 0xc) = &iStack_18;
  iStack_18 = 0;
  uStack_c = 0;
  iStack_14 = iVar2;
  uVar4 = FUN_00957980(0,&stack0xffffffdc,0,0);
  (**(code **)(*param_3 + 0x10))(uVar4);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  (**(code **)(*DAT_00ba7d98 + 4))(uVar1);
  return uVar4;
}



float10 FUN_00957e30(int *param_1)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = ABS((float10)(param_1[5] - param_1[0xd])) * (float10)(float)param_1[7];
  if (*param_1 < param_1[1]) {
    fVar1 = (fVar1 - (float10)0.75) * (float10)6.0;
    if (fVar1 < (float10)0.0) {
      return (float10)0.0;
    }
  }
  else {
    fVar1 = fVar1 * fVar1;
  }
  return fVar1 * fVar1 * fVar1 * fVar1 * (float10)*(float *)(in_ECX + 0x10);
}



float10 FUN_00957e90(int *param_1)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  if (*param_1 < param_1[1]) {
    fVar1 = (float10)(float)param_1[3] - (float10)(float)param_1[2];
    fVar2 = (float10)*(float *)(in_ECX + 0x1c);
    if (fVar1 <= (float10)*(float *)(in_ECX + 0x1c)) {
      fVar2 = fVar1;
    }
    if (fVar2 + fVar1 <= (float10)0.0) {
      fVar2 = (float10)3.4028235e+37;
    }
    else {
      fVar2 = (float10)1.0 / (fVar2 + fVar1);
    }
  }
  else {
    fVar2 = (float10)(float)param_1[4];
  }
  fVar2 = fVar2 * ((float10)(float)param_1[8] -
                  ((float10)(float)param_1[3] + (float10)(float)param_1[2]) * (float10)0.5);
  if (fVar2 < (float10)0.0) {
    return (float10)0.0;
  }
  fVar2 = fVar2 * fVar2;
  fVar1 = fVar2 * fVar2;
  return (fVar2 * (float10)2.9 + fVar1 * (float10)3.0 + fVar1 * fVar1 * (float10)1500.0) *
         (float10)*(float *)(in_ECX + 0x14);
}



float10 FUN_00957f30(int *param_1)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  if (*param_1 < param_1[1]) {
    fVar1 = (float10)(float)param_1[3] - (float10)(float)param_1[2];
    fVar2 = (float10)*(float *)(in_ECX + 0x1c);
    if (fVar1 <= (float10)*(float *)(in_ECX + 0x1c)) {
      fVar2 = fVar1;
    }
    if (fVar2 + fVar1 <= (float10)0.0) {
      fVar2 = (float10)3.4028235e+37;
    }
    else {
      fVar2 = (float10)1.0 / (fVar2 + fVar1);
    }
  }
  else {
    fVar2 = (float10)(float)param_1[4];
  }
  fVar2 = fVar2 * ((float10)(float)param_1[0xe] -
                  ((float10)(float)param_1[3] + (float10)(float)param_1[2]) * (float10)0.5);
  if ((float10)0.0 < fVar2) {
    return (float10)0.0;
  }
  fVar2 = fVar2 * fVar2;
  fVar1 = fVar2 * fVar2;
  return (fVar2 * (float10)2.9 + fVar1 * (float10)3.0 + fVar1 * fVar1 * (float10)1500.0) *
         (float10)*(float *)(in_ECX + 0x14);
}



void FUN_00957fd0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_LAB_00aa3588;
  FUN_009438e0(0);
  in_ECX[2] = *param_1;
  in_ECX[3] = param_1[1];
  in_ECX[4] = param_1[2];
  in_ECX[5] = param_1[3];
  in_ECX[6] = param_1[4];
  in_ECX[7] = param_1[5];
  return;
}



float10 FUN_00958020(int param_1)

{
  int *in_ECX;
  float10 fVar1;
  float fStack_24;
  
  FUN_00957e90(param_1);
  fVar1 = (float10)(**(code **)(*in_ECX + 0x10))(param_1);
  if (*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28) < 0x10) {
    return (float10)(float)in_ECX[6] * (float10)-0.03 + fVar1 + (float10)fStack_24;
  }
  return (float10)0.0 + fVar1 + (float10)fStack_24;
}



float10 FUN_00958080(int param_1)

{
  int in_ECX;
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00957f30(param_1);
  fVar2 = (float10)FUN_00957e30(param_1);
  return ((float10)*(float *)(param_1 + 0x38) - (float10)*(float *)(param_1 + 0x20)) *
         (float10)*(float *)(param_1 + 0x10) * (float10)*(float *)(in_ECX + 0xc) +
         (float10)*(int *)(param_1 + 0x30) * (float10)*(float *)(param_1 + 0x1c) *
         (float10)*(float *)(in_ECX + 8) * (float10)5.0 + fVar2 + (float10)(float)fVar1;
}



int FUN_00958130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                int param_5)

{
  uint uVar1;
  int *in_EAX;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int *unaff_ESI;
  int iStack_1c;
  
  FUN_009183a0(unaff_ESI);
  FUN_00918460(param_1);
  pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))();
  if (*pcVar2 != '\0') {
    FUN_00918460(param_2,param_3);
    pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))(&stack0xffffffe3);
    if (*pcVar2 != '\0') {
      uVar1 = in_EAX[1];
      FUN_00918440(uVar1);
      uVar3 = 0;
      iStack_1c = 0x14;
      if (uVar1 != 0) {
        do {
          FUN_00918440(*(undefined4 *)(*in_EAX + uVar3 * 8));
          FUN_00918440(*(undefined4 *)(*in_EAX + 4 + uVar3 * 8));
          pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))(&stack0xffffffe3);
          if (*pcVar2 == '\0') goto LAB_0095829b;
          iStack_1c = iStack_1c + 8;
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar1 = in_EAX[4];
      FUN_00918440(uVar1);
      iStack_1c = iStack_1c + 4;
      uVar3 = 0;
      if (uVar1 != 0) {
        iVar4 = 0;
        do {
          FUN_00918440(*(undefined4 *)(iVar4 + in_EAX[3]));
          FUN_00918460(*(undefined4 *)(iVar4 + 4 + in_EAX[3]),0);
          FUN_00918460(*(undefined4 *)(iVar4 + 8 + in_EAX[3]),0);
          pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))(&stack0xffffffe3);
          if (*pcVar2 == '\0') goto LAB_0095829b;
          iStack_1c = iStack_1c + 0x14;
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 0xc;
        } while (uVar3 < uVar1);
      }
      FUN_00918440(param_5);
      pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))(&stack0xffffffe3);
      if (*pcVar2 != '\0') {
        (**(code **)(*unaff_ESI + 0xc))(param_4,param_5);
        pcVar2 = (char *)(**(code **)(*unaff_ESI + 8))(&stack0xffffffdb);
        if (*pcVar2 != '\0') {
          FUN_00918180();
          return iStack_1c + 4 + param_5;
        }
      }
LAB_0095829b:
      FUN_00918180();
      return -1;
    }
  }
  FUN_00918180();
  return -1;
}



undefined4
FUN_009582e0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,int *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  undefined1 local_48 [20];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_00942d70(param_2);
  local_64 = 0;
  local_60 = 0;
  local_5c = 0x80000000;
  FUN_008bc030(&local_64,1);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x80000000;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0x80000000;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0x80000000;
  local_10 = 0;
  local_c = 0;
  local_8 = 0x80000000;
  local_4 = 0;
  FUN_00942d10(local_48,param_5,param_6,&local_34);
  iVar3 = param_7[1] + local_24;
  if ((int)(param_7[2] & 0x3fffffffU) < iVar3) {
    iVar5 = (param_7[2] & 0x3fffffffU) * 2;
    if (iVar3 < iVar5) {
      iVar3 = iVar5;
    }
    FUN_008a6e40(param_7,iVar3,0x18);
  }
  iVar3 = 0;
  if (0 < local_24) {
    iVar5 = 0;
    do {
      if (param_7[1] == (param_7[2] & 0x3fffffffU)) {
        FUN_008a6ee0(param_7,0x18);
      }
      iVar2 = param_7[1];
      param_7[1] = iVar2 + 1;
      puVar1 = (undefined4 *)(*param_7 + iVar2 * 0x18);
      *puVar1 = *(undefined4 *)(iVar5 + local_28);
      puVar1[2] = *(undefined4 *)(iVar5 + 4 + local_28);
      puVar1[3] = 0;
      puVar1[4] = *(undefined4 *)(iVar5 + 8 + local_28);
      puVar1[5] = 0;
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar3 < local_24);
  }
  uVar4 = FUN_00958130(param_3,param_4,param_6,0,local_64,local_60,
                       *(char *)(param_2 + 1) != DAT_00b2fde5);
  FUN_00941400();
  FUN_008bc2e0();
  if ((local_5c & 0x80000000) == 0) {
    FUN_008a75d0(local_64,local_5c & 0x3fffffff,0x14);
  }
  FUN_00942e10();
  return uVar4;
}



void FUN_009584c0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[3] = 0;
  *in_ECX = "Unknown Heading";
  in_ECX[2] = 1;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = 0x3f800000;
  return;
}



void FUN_009584f0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 < param_2) {
    do {
      FUN_008b0e80(*param_1,*param_1);
      switch(*(undefined1 *)*param_1) {
      case 0x45:
      case 0x53:
      case 0x54:
      case 0x6c:
        param_1 = param_1 + 3;
        break;
      default:
        goto switchD_00958522_caseD_46;
      case 0x4c:
        FUN_008b0e80(param_1[3],param_1[3]);
        param_1 = param_1 + 4;
        break;
      case 0x4d:
        param_1 = param_1 + 2;
        break;
      case 0x50:
      case 0x70:
        param_1 = param_1 + 1;
      }
    } while (param_1 < param_2);
switchD_00958522_caseD_46:
  }
  return;
}



void FUN_00958590(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  in_ECX[0x14] = 0;
  *(undefined2 *)((int)in_ECX + 6) = 1;
  in_ECX[0x15] = 1;
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
  *in_ECX = &PTR_FUN_00aa3718;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  in_ECX[0x18] = *param_1;
  in_ECX[0x19] = uVar1;
  in_ECX[0x1a] = uVar2;
  in_ECX[0x1b] = uVar3;
  in_ECX[0x1c] = param_2;
  in_ECX[0x1d] = param_3;
  return;
}



void FUN_009585f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  return;
}



void FUN_00958600(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  return;
}



void FUN_00958610(float *param_1,float *param_2,float param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *in_ECX;
  float *pfStack_90;
  float *pfStack_8c;
  float fStack_88;
  float fStack_84;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
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
  
  local_30 = param_2[4];
  fStack_2c = param_2[5];
  fStack_28 = param_2[6];
  fStack_24 = param_2[7];
  local_40 = -param_3;
  local_20 = param_2[8];
  fStack_1c = param_2[9];
  fStack_18 = param_2[10];
  fStack_14 = param_2[0xb];
  local_50 = param_3;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  local_60 = *param_1 - param_3 * *param_2;
  fStack_5c = param_1[1] - param_3 * param_2[1];
  fStack_58 = param_1[2] - param_3 * param_2[2];
  fStack_54 = param_1[3] - param_3 * param_2[3];
  fStack_84 = (float)param_5;
  fStack_88 = (float)param_4;
  pfStack_8c = &local_70;
  local_70 = *param_1 - local_40 * *param_2;
  fStack_6c = param_1[1] - local_40 * param_2[1];
  fStack_68 = param_1[2] - local_40 * param_2[2];
  fStack_64 = param_1[3] - local_40 * param_2[3];
  pfStack_90 = &local_60;
  fStack_3c = 0.0;
  fStack_38 = 0.0;
  fStack_34 = 0.0;
  (**(code **)(*(int *)*in_ECX + 0x1c))();
  local_70 = *param_1 - local_60 * local_40;
  fStack_6c = param_1[1] - local_60 * fStack_3c;
  fStack_68 = param_1[2] - local_60 * fStack_38;
  fStack_64 = param_1[3] - local_60 * fStack_34;
  (**(code **)(*(int *)*in_ECX + 0x1c))(&local_70,&stack0xffffff80,param_4,param_5);
  pfStack_90 = (float *)(*param_1 - local_60 * local_40);
  pfStack_8c = (float *)(param_1[1] - local_60 * fStack_3c);
  fStack_88 = param_1[2] - local_60 * fStack_38;
  fStack_84 = param_1[3] - local_60 * fStack_34;
  (**(code **)(*(int *)*in_ECX + 0x1c))(&stack0xffffff80,&pfStack_90,param_4,param_5);
  return;
}



void FUN_00958750(float *param_1,float *param_2,undefined4 param_3,float param_4,float param_5,
                 undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *in_ECX;
  float unaff_EBX;
  float unaff_ESI;
  float unaff_EDI;
  float fVar7;
  float *pfStack_a0;
  float *pfStack_9c;
  float fStack_98;
  float fStack_94;
  float local_80;
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
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  fStack_94 = (float)param_6;
  fStack_98 = param_4;
  pfStack_9c = &local_80;
  local_80 = *param_1 + param_5 * *param_2;
  fStack_7c = param_1[1] + param_5 * param_2[1];
  fStack_78 = param_1[2] + param_5 * param_2[2];
  fStack_74 = param_1[3] + param_5 * param_2[3];
  pfStack_a0 = param_1;
  (**(code **)(*(int *)*in_ECX + 0x1c))();
  FUN_008b1b00(param_3,0x3f490fdb);
  FUN_008b1b00(param_3,0xbfc90fdb);
  fVar3 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fStack_50 = local_80;
  fStack_4c = fStack_7c;
  fStack_48 = fStack_78;
  fStack_44 = 0.0;
  fVar1 = (fStack_74 * fStack_74 + fStack_74 * fStack_74) - 1.0;
  fVar7 = fStack_78 * fVar5 + fStack_7c * fVar4 + local_80 * fVar3;
  fVar7 = fVar7 + fVar7;
  fVar2 = fStack_74 + fStack_74;
  fStack_94 = param_5 * -0.333;
  fStack_40 = fVar1 * fVar3 + fVar7 * local_80 + fVar2 * (fStack_7c * fVar5 - fStack_78 * fVar4);
  fStack_3c = fVar1 * fVar4 + fVar7 * fStack_7c + fVar2 * (fStack_78 * fVar3 - local_80 * fVar5);
  fStack_38 = fVar1 * fVar5 + fVar7 * fStack_78 + fVar2 * (local_80 * fVar4 - fStack_7c * fVar3);
  fStack_34 = fVar1 * fVar6 + fVar7 * 0.0 + fVar2 * (fVar6 * 0.0 - fVar6 * 0.0);
  fStack_60 = unaff_EDI + fStack_94 * fStack_40;
  fStack_5c = unaff_ESI + fStack_94 * fStack_3c;
  fStack_58 = unaff_EBX + fStack_94 * fStack_38;
  fStack_54 = param_5 + fStack_94 * fStack_34;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  fStack_30 = fStack_94;
  (**(code **)(*(int *)*in_ECX + 0x1c))(&stack0xffffff70,&fStack_60,param_4,param_6);
  fStack_60 = local_80;
  fStack_5c = fStack_7c;
  fStack_58 = fStack_78;
  fStack_54 = 0.0;
  fVar1 = (fStack_74 * fStack_74 + fStack_74 * fStack_74) - 1.0;
  fVar7 = fStack_78 * fStack_48 + fStack_7c * fStack_4c + local_80 * fStack_50;
  fVar7 = fVar7 + fVar7;
  fVar2 = fStack_74 + fStack_74;
  fStack_70 = (float)pfStack_a0 +
              fStack_40 *
              (fVar1 * fStack_50 + fVar7 * local_80 +
              fVar2 * (fStack_7c * fStack_48 - fStack_78 * fStack_4c));
  fStack_6c = (float)pfStack_9c +
              fStack_40 *
              (fVar1 * fStack_4c + fVar7 * fStack_7c +
              fVar2 * (fStack_78 * fStack_50 - local_80 * fStack_48));
  fStack_68 = fStack_98 +
              fStack_40 *
              (fVar1 * fStack_48 + fVar7 * fStack_78 +
              fVar2 * (local_80 * fStack_4c - fStack_7c * fStack_50));
  fStack_64 = fStack_94 +
              fStack_40 *
              (fVar1 * fStack_44 + fVar7 * 0.0 + fVar2 * (fStack_44 * 0.0 - fStack_44 * 0.0));
  (**(code **)(*(int *)*in_ECX + 0x1c))(&pfStack_a0,&fStack_70,param_4,param_6);
  return;
}



void FUN_009589e0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    puVar2 = (undefined4 *)(in_ECX + 0xfb4);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x14;
    } while (iVar1 < *(int *)(in_ECX + 0x10));
  }
  iVar1 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    puVar2 = (undefined4 *)(in_ECX + 0x50);
    do {
      *puVar2 = 0;
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 0x10;
    } while (iVar1 < *(int *)(in_ECX + 8));
  }
  return;
}



undefined4 FUN_00958a30(float *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  undefined4 uVar2;
  float *in_ECX;
  undefined4 uVar3;
  float fVar4;
  
  pfVar1 = (float *)in_ECX[5];
  fVar4 = in_ECX[2] * (param_1[2] - pfVar1[2]) +
          in_ECX[1] * (param_1[1] - pfVar1[1]) + *in_ECX * (*param_1 - *pfVar1);
  uVar3 = 1;
  if (fVar4 <= *param_2) {
    if (*param_2 < fVar4 + 1e-07) {
      *param_2 = fVar4 + 1e-07;
    }
    uVar3 = 2;
  }
  else if (fVar4 < *param_3) {
    *param_3 = fVar4;
  }
  uVar2 = 4;
  if (*param_2 < *param_3) {
    uVar2 = uVar3;
  }
  return uVar2;
}



int FUN_00958ad0(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int *local_8;
  int local_4;
  
  iVar4 = 0;
  local_8 = (int *)(param_1 + 0x1c);
  local_4 = 0;
  do {
    piVar1 = (int *)*local_8;
    iVar2 = piVar1[3];
    if (*(int *)(iVar2 + 0x44) == 0) {
      iVar3 = FUN_00958a30(param_2,in_ECX,in_ECX + 4);
      *(int *)(iVar2 + 0x44) = iVar3;
      if (iVar3 == 1) {
        iVar4 = FUN_00958ad0(iVar2,param_2,param_3,param_4);
        if (iVar4 == 2) break;
      }
      else if (iVar3 == 4) {
        iVar4 = 2;
        break;
      }
    }
    if (*(int *)(iVar2 + 0x44) == 2) {
      *(int **)(*piVar1 + 0x30) = piVar1;
      *param_3 = *param_3 + 1;
      *param_4 = (int)piVar1;
    }
    local_4 = local_4 + 1;
    local_8 = local_8 + 4;
  } while (local_4 < 3);
  *(undefined4 *)(param_1 + 0x10) = 0x7f7fffff;
  *(int *)(in_ECX + 0xde0 + *(int *)(in_ECX + 0xc) * 4) = param_1;
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  return iVar4;
}



void FUN_00958ba0(int *param_1,undefined4 *param_2)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(in_ECX + 0xc) + -1;
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = (int)param_2;
    param_2 = (undefined4 *)(in_ECX + 0xde0 + iVar1 * 4);
    do {
      if (iVar1 < 0) break;
      *(undefined4 *)(*param_1 + param_1[1] * 4) = *param_2;
      param_1[1] = param_1[1] + 1;
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
      iVar2 = iVar2 + -1;
      param_2 = param_2 + -1;
      iVar1 = iVar1 + -1;
    } while (iVar2 != 0);
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(in_ECX + 0x10);
        *(int *)(in_ECX + 0x10) = iVar1 + 1;
        *(int *)(*param_1 + param_1[1] * 4) = iVar1 * 0x50 + 0xf70 + in_ECX;
        iVar2 = iVar2 + -1;
        param_1[1] = param_1[1] + 1;
      } while (iVar2 != 0);
    }
  }
  return;
}



byte FUN_00958c20(int *param_1,undefined4 param_2,float *param_3,float *param_4)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  undefined4 *puVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int local_3c;
  
  iVar8 = param_1[1];
  iVar7 = 0;
  pfVar10 = param_3;
  if (0 < iVar8) {
    do {
      if (pfVar10 == (float *)0x0) {
        return 2;
      }
      piVar2 = (int *)*param_1;
      pfVar3 = (float *)piVar2[iVar7];
      iVar1 = iVar7 + 1;
      if (iVar1 < iVar8) {
        local_3c = piVar2[iVar7 + 1];
      }
      else {
        local_3c = *piVar2;
      }
      pfVar3[8] = (float)pfVar3;
      pfVar3[0xc] = (float)pfVar3;
      pfVar3[0x10] = (float)pfVar3;
      pfVar6 = pfVar3 + 0xd;
      pfVar3[10] = (float)pfVar6;
      pfVar5 = pfVar3 + 5;
      pfVar3[0xe] = (float)pfVar5;
      pfVar4 = pfVar3 + 9;
      pfVar3[6] = (float)pfVar4;
      *pfVar5 = *(float *)pfVar10[1];
      *pfVar4 = *pfVar10;
      *pfVar6 = *param_4;
      pfVar10[2] = (float)pfVar5;
      pfVar3[7] = (float)pfVar10;
      *(float **)(local_3c + 0x2c) = pfVar6;
      pfVar4 = (float *)*pfVar4;
      pfVar5 = (float *)*pfVar5;
      pfVar6 = (float *)*pfVar6;
      pfVar3[0xf] = (float)(local_3c + 0x24);
      fVar11 = *pfVar5 - *pfVar4;
      fVar12 = pfVar5[1] - pfVar4[1];
      fVar13 = pfVar5[2] - pfVar4[2];
      fVar14 = pfVar5[3] - pfVar4[3];
      fVar15 = *pfVar4 - *pfVar6;
      fVar17 = pfVar4[1] - pfVar6[1];
      fVar18 = pfVar4[2] - pfVar6[2];
      fVar19 = pfVar4[3] - pfVar6[3];
      fVar16 = fVar12 * fVar18 - fVar13 * fVar17;
      fVar13 = fVar13 * fVar15 - fVar11 * fVar18;
      fVar15 = fVar11 * fVar17 - fVar12 * fVar15;
      fVar14 = fVar14 * fVar19 - fVar14 * fVar19;
      fVar11 = fVar13 * fVar13;
      fVar12 = fVar15 * fVar15;
      *pfVar3 = fVar16;
      pfVar3[1] = fVar13;
      pfVar3[2] = fVar15;
      pfVar3[3] = fVar14;
      if (fVar12 + fVar11 + fVar16 * fVar16 == 0.0) {
        return 2;
      }
      auVar20._4_4_ = fVar11;
      auVar20._0_4_ = fVar11;
      auVar20._8_4_ = fVar11;
      auVar20._12_4_ = fVar11;
      auVar21._4_12_ = auVar20._4_12_;
      auVar21._0_4_ = fVar11 + fVar16 * fVar16;
      auVar22._4_4_ = fVar12;
      auVar22._0_4_ = fVar12 + auVar21._0_4_;
      auVar22._8_4_ = fVar12;
      auVar22._12_4_ = fVar12;
      auVar22 = rsqrtss(auVar21,auVar22);
      fVar11 = auVar22._0_4_;
      fVar11 = fVar11 * 0.5 * (3.0 - (fVar12 + auVar21._0_4_) * fVar11 * fVar11);
      *pfVar3 = fVar11 * fVar16;
      pfVar3[1] = fVar11 * fVar13;
      pfVar3[2] = fVar11 * fVar15;
      pfVar3[3] = fVar11 * fVar14;
      pfVar3[4] = fVar11 * fVar15 * pfVar5[2] +
                  fVar11 * fVar13 * pfVar5[1] + fVar11 * fVar16 * *pfVar5;
      pfVar3 = pfVar10 + 1;
      pfVar10 = *(float **)(*(int *)*pfVar3 + 0x30);
      *(undefined4 *)(*(int *)*pfVar3 + 0x30) = 0;
      iVar8 = param_1[1];
      iVar7 = iVar1;
    } while (iVar1 < iVar8);
  }
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    puVar9 = (undefined4 *)(in_ECX + 0xfb4);
    do {
      *puVar9 = 0;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 0x14;
    } while (iVar8 < *(int *)(in_ECX + 0x10));
  }
  iVar8 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    puVar9 = (undefined4 *)(in_ECX + 0x50);
    do {
      *puVar9 = 0;
      iVar8 = iVar8 + 1;
      puVar9 = puVar9 + 0x10;
    } while (iVar8 < *(int *)(in_ECX + 8));
  }
  return (param_3 == pfVar10) - 1U & 2;
}



void FUN_00958e50(void)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  pfVar1 = (float *)in_ECX[9];
  pfVar2 = (float *)in_ECX[5];
  pfVar3 = (float *)in_ECX[0xd];
  fVar4 = *pfVar2 - *pfVar1;
  fVar5 = pfVar2[1] - pfVar1[1];
  fVar6 = pfVar2[2] - pfVar1[2];
  fVar7 = pfVar2[3] - pfVar1[3];
  fVar8 = *pfVar1 - *pfVar3;
  fVar10 = pfVar1[1] - pfVar3[1];
  fVar11 = pfVar1[2] - pfVar3[2];
  fVar12 = pfVar1[3] - pfVar3[3];
  fVar9 = fVar5 * fVar11 - fVar6 * fVar10;
  fVar6 = fVar6 * fVar8 - fVar4 * fVar11;
  fVar8 = fVar4 * fVar10 - fVar5 * fVar8;
  fVar7 = fVar7 * fVar12 - fVar7 * fVar12;
  fVar4 = fVar6 * fVar6;
  fVar5 = fVar8 * fVar8;
  auVar13._4_4_ = fVar4;
  auVar13._0_4_ = fVar4;
  auVar13._8_4_ = fVar4;
  auVar13._12_4_ = fVar4;
  auVar14._4_12_ = auVar13._4_12_;
  auVar14._0_4_ = fVar4 + fVar9 * fVar9;
  auVar15._4_4_ = fVar5;
  auVar15._0_4_ = fVar5 + auVar14._0_4_;
  auVar15._8_4_ = fVar5;
  auVar15._12_4_ = fVar5;
  auVar15 = rsqrtss(auVar14,auVar15);
  fVar4 = auVar15._0_4_;
  fVar4 = fVar4 * 0.5 * (3.0 - (fVar5 + auVar14._0_4_) * fVar4 * fVar4);
  *in_ECX = fVar9;
  in_ECX[1] = fVar6;
  in_ECX[2] = fVar8;
  in_ECX[3] = fVar7;
  *in_ECX = fVar4 * fVar9;
  in_ECX[1] = fVar4 * fVar6;
  in_ECX[2] = fVar4 * fVar8;
  in_ECX[3] = fVar4 * fVar7;
  in_ECX[4] = fVar4 * fVar8 * pfVar2[2] + fVar4 * fVar6 * pfVar2[1] + fVar4 * fVar9 * *pfVar2;
  return;
}



float * FUN_00958f40(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  FUN_009589e0();
  bVar7 = false;
  pfVar4 = (float *)0x0;
  pfVar5 = param_1;
  do {
    if (bVar7) {
      return pfVar5;
    }
    pfVar5[0x11] = 4.2039e-45;
    iVar6 = 0;
    pfVar3 = pfVar5 + 5;
    do {
      if (pfVar3 != pfVar4) {
        pfVar1 = (float *)*pfVar3;
        pfVar2 = *(float **)pfVar3[1];
        fVar8 = *pfVar2 - *pfVar1;
        fVar9 = pfVar2[1] - pfVar1[1];
        fVar10 = pfVar2[2] - pfVar1[2];
        fVar11 = (fVar8 * pfVar5[1] - fVar9 * *pfVar5) * pfVar1[2] +
                 (fVar10 * *pfVar5 - fVar8 * pfVar5[2]) * pfVar1[1] +
                 (fVar9 * pfVar5[2] - fVar10 * pfVar5[1]) * *pfVar1;
        if ((ABS(fVar11) * fVar11 <
             (fVar10 * fVar10 + fVar9 * fVar9 + fVar8 * fVar8) * -9.9999994e-11) &&
           ((pfVar1 = *(float **)((int)pfVar3[2] + 0xc), param_1[4] <= 0.0 ||
            (param_1[4] * 0.9 <= pfVar1[4])))) {
          pfVar4 = (float *)pfVar5[iVar6 * 4 + 7];
          bVar7 = pfVar1[0x11] == 4.2039e-45;
          pfVar5 = pfVar1;
          break;
        }
      }
      iVar6 = iVar6 + 1;
      pfVar3 = pfVar3 + 4;
    } while (iVar6 < 3);
    if (iVar6 == 3) {
      return pfVar5;
    }
  } while( true );
}



void FUN_00959090(int param_1,int param_2,float *param_3,int *param_4,int *param_5)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float local_3c;
  float local_30;
  int local_24;
  float local_20;
  float fStack_1c;
  
  local_24 = *(int *)(param_1 + 0x10);
  local_30 = 3.4028235e+38;
  if (-1 < local_24 + -1) {
    pfVar5 = (float *)((local_24 + -1) * 0x50 + 0xf80 + param_1);
    do {
      if ((*pfVar5 * *pfVar5 <= local_30) && (iVar3 = *(int *)(param_2 + 0x10) + -1, 0 < iVar3)) {
        pfVar4 = (float *)(iVar3 * 0x50 + 0xf70 + param_2);
        do {
          if ((pfVar4[4] * pfVar4[4] <= local_30) &&
             (fVar10 = pfVar5[-2] * pfVar4[2] + pfVar5[-3] * pfVar4[1] + pfVar5[-4] * *pfVar4,
             -0.5 <= fVar10)) {
            fVar7 = *pfVar5;
            fVar8 = pfVar4[4];
            fVar1 = fVar7 - fVar10 * fVar8;
            fVar2 = fVar8 - fVar10 * fVar7;
            if (fVar1 <= 1.1920929e-07) {
              if (fVar7 <= 1.1920929e-07) {
LAB_009592b8:
                local_3c = 0.5;
                fVar1 = 0.5;
                fVar8 = -(fVar10 * fVar10);
              }
              else {
                local_3c = 1.0;
                fVar1 = 0.0;
                fVar8 = fVar8 * fVar8;
              }
            }
            else if (fVar2 <= 1.1920929e-07) {
              if (fVar8 <= 0.0) goto LAB_009592b8;
              local_3c = 0.0;
              fVar1 = 1.0;
              fVar8 = fVar7 * fVar7;
            }
            else {
              if (fVar1 <= fVar2) {
                fVar7 = fVar1 / fVar2;
                local_3c = 1.0 / (fVar10 * fVar7 + 1.0);
                fVar1 = fVar7 * local_3c;
                fVar2 = local_3c * fVar8;
                fVar7 = fVar7 * fVar2;
              }
              else {
                fVar2 = fVar2 / fVar1;
                fVar1 = 1.0 / (fVar10 * fVar2 + 1.0);
                local_3c = fVar2 * fVar1;
                fVar7 = fVar1 * fVar7;
                fVar2 = fVar7 * fVar2;
              }
              fVar7 = fVar10 * fVar2 + fVar7;
              fVar8 = fVar7 * fVar7 + (1.0 - fVar10 * fVar10) * fVar2 * fVar2;
            }
            if (fVar8 < local_30) {
              fStack_1c = local_3c;
              *param_4 = (int)(pfVar5 + -4);
              *param_5 = (int)pfVar4;
              local_30 = fVar8;
              local_20 = fVar1;
            }
          }
          pfVar4 = pfVar4 + -0x14;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      pfVar5 = pfVar5 + -0x14;
      local_24 = local_24 + -1;
    } while (local_24 != 0);
  }
  pfVar5 = (float *)*param_4;
  fVar10 = *pfVar5;
  fVar7 = pfVar5[1];
  fVar8 = pfVar5[2];
  fVar1 = pfVar5[3];
  *param_3 = local_20 * fVar10;
  param_3[1] = local_20 * fVar7;
  param_3[2] = local_20 * fVar8;
  param_3[3] = local_20 * fVar1;
  pfVar5 = (float *)*param_5;
  fVar2 = pfVar5[3];
  fVar10 = local_20 * fVar10 + fStack_1c * *pfVar5;
  fVar6 = local_20 * fVar7 + fStack_1c * pfVar5[1];
  fVar8 = local_20 * fVar8 + fStack_1c * pfVar5[2];
  fVar7 = fVar6 * fVar6;
  fVar9 = fVar8 * fVar8;
  auVar11._4_4_ = fVar7;
  auVar11._0_4_ = fVar7;
  auVar11._8_4_ = fVar7;
  auVar11._12_4_ = fVar7;
  auVar12._4_12_ = auVar11._4_12_;
  auVar12._0_4_ = fVar7 + fVar10 * fVar10;
  auVar13._4_4_ = fVar9;
  auVar13._0_4_ = fVar9 + auVar12._0_4_;
  auVar13._8_4_ = fVar9;
  auVar13._12_4_ = fVar9;
  auVar13 = rsqrtss(auVar12,auVar13);
  fVar7 = auVar13._0_4_;
  fVar7 = fVar7 * 0.5 * (3.0 - (fVar9 + auVar12._0_4_) * fVar7 * fVar7);
  *param_3 = fVar7 * fVar10;
  param_3[1] = fVar7 * fVar6;
  param_3[2] = fVar7 * fVar8;
  param_3[3] = fVar7 * (local_20 * fVar1 + fStack_1c * fVar2);
  if (0.0 <= local_30) {
    param_3[3] = SQRT(local_30);
    return;
  }
  param_3[3] = 0.0;
  return;
}



undefined4 FUN_00959410(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *param_4 = 0;
  *param_3 = 0;
  in_ECX[1] = 0x7f7fffff;
  *in_ECX = 0x33d6bf95;
  iVar1 = FUN_00958a30(param_2,in_ECX,in_ECX + 1);
  *(int *)(param_1 + 0x44) = iVar1;
  if (iVar1 == 1) {
    uVar2 = FUN_00958ad0(param_1,param_2,param_3,param_4);
    return uVar2;
  }
  return 2;
}



void FUN_00959480(void)

{
  float fVar1;
  int *piVar2;
  int in_ECX;
  int iVar3;
  float *extraout_ECX;
  int *piVar4;
  
  iVar3 = in_ECX + 0xf70;
  *(undefined4 *)(in_ECX + 0x10) = 4;
  piVar4 = &DAT_00aa3878;
  if (iVar3 != in_ECX + 0x10b0) {
    do {
      *(int *)(iVar3 + 0x18) = iVar3 + 0x24;
      *(int *)(iVar3 + 0x28) = iVar3 + 0x34;
      piVar2 = (int *)(iVar3 + 0x14);
      *(int *)(iVar3 + 0x44) = 0;
      *(int **)(iVar3 + 0x38) = piVar2;
      for (; piVar2 < (int *)(iVar3 + 0x44); piVar2 = piVar2 + 4) {
        piVar2[3] = iVar3;
        *piVar2 = *piVar4 + 0x20 + in_ECX;
        piVar2[2] = piVar4[2] + piVar4[1] + 0xf84 + in_ECX;
        piVar4 = piVar4 + 3;
      }
      iVar3 = iVar3 + 0x50;
    } while (iVar3 != in_ECX + 0x10b0);
  }
  FUN_00958e50();
  iVar3 = in_ECX + 0x60;
  fVar1 = (float)(in_ECX + 0x20);
  if (0.0 < (*(float *)(in_ECX + 0x28) - *(float *)(in_ECX + 0x68)) * extraout_ECX[2] +
            (*(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 100)) * extraout_ECX[1] +
            (*(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x60)) * *extraout_ECX) {
    *(int *)(in_ECX + 0x1024) = iVar3;
    *(int *)(in_ECX + 0xfd4) = iVar3;
    *(int *)(in_ECX + 0xf84) = iVar3;
    extraout_ECX[5] = fVar1;
    *(float *)(in_ECX + 0xfe4) = fVar1;
    *(float *)(in_ECX + 0xfa4) = fVar1;
  }
  iVar3 = 4;
  do {
    FUN_00958e50();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}



undefined4 FUN_009595a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 *local_19c;
  undefined4 local_198;
  int local_194;
  undefined1 local_190 [400];
  
  local_19c = local_190;
  local_198 = 0;
  local_194 = -0x7fffff9c;
  FUN_00958ba0(&local_19c,param_1);
  uVar1 = FUN_00958c20(&local_19c,param_1,param_2,&stack0x0000000c);
  if (-1 < local_194) {
    FUN_008a75d0(local_19c,local_194 << 2,0x14);
  }
  return uVar1;
}



void FUN_00959630(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *in_ECX;
  float *unaff_ESI;
  float *unaff_EDI;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  unaff_EDI[8] = *param_2;
  unaff_EDI[9] = fVar1;
  unaff_EDI[10] = fVar2;
  unaff_EDI[0xb] = fVar3;
  local_30 = -*param_2;
  fStack_2c = -param_2[1];
  fStack_28 = -param_2[2];
  fStack_24 = -param_2[3];
  (**(code **)(*in_ECX + 0x24))(&local_30);
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fStack_28 = *unaff_ESI * fVar1 + unaff_ESI[1] * fVar2 + unaff_ESI[2] * fVar3;
  fStack_24 = unaff_ESI[4] * fVar1 + unaff_ESI[5] * fVar2 + unaff_ESI[6] * fVar3;
  fStack_20 = unaff_ESI[8] * fVar1 + unaff_ESI[9] * fVar2 + unaff_ESI[10] * fVar3;
  fStack_1c = unaff_ESI[8] * fVar1 + unaff_ESI[9] * fVar2 + unaff_ESI[10] * fVar3;
  (**(code **)(*param_1 + 0x24))(&fStack_28,unaff_EDI + 4);
  fVar1 = unaff_EDI[4];
  fVar2 = unaff_EDI[5];
  fVar3 = unaff_EDI[6];
  unaff_EDI[0xb] =
       (unaff_EDI[2] -
       (unaff_ESI[2] * fVar1 + unaff_ESI[6] * fVar2 + unaff_ESI[10] * fVar3 + unaff_ESI[0xe])) *
       unaff_EDI[10] +
       (unaff_EDI[1] -
       (unaff_ESI[1] * fVar1 + unaff_ESI[5] * fVar2 + unaff_ESI[9] * fVar3 + unaff_ESI[0xd])) *
       unaff_EDI[9] +
       (*unaff_EDI -
       (*unaff_ESI * fVar1 + unaff_ESI[4] * fVar2 + unaff_ESI[8] * fVar3 + unaff_ESI[0xc])) *
       unaff_EDI[8];
  return;
}



void FUN_00959750(undefined4 param_1,undefined4 param_2,undefined4 param_3,float *param_4,
                 undefined4 *param_5,float *param_6)

{
  bool bVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float *local_f8;
  float local_f0 [4];
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  float local_c0 [5];
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  float local_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
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
  
  local_c0[3] = -3.4028235e+38;
  local_f8 = (float *)&DAT_00b2f090;
  do {
    local_f0[0] = *local_f8;
    local_f0[1] = local_f8[1];
    local_f0[2] = local_f8[2];
    local_f0[3] = local_f8[3];
    FUN_00959630(param_2,local_f0);
    if (local_c0[3] < fStack_84) {
      local_e0 = local_c0[4];
      fStack_dc = fStack_ac;
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      local_d0 = local_a0;
      uStack_cc = uStack_9c;
      uStack_c8 = uStack_98;
      uStack_c4 = uStack_94;
      local_c0[0] = local_90;
      local_c0[1] = fStack_8c;
      local_c0[2] = fStack_88;
      local_c0[3] = fStack_84;
    }
    local_f0[0] = -local_f0[0];
    local_f0[1] = -local_f0[1];
    local_f0[2] = -local_f0[2];
    local_f0[3] = -local_f0[3];
    FUN_00959630(param_2,local_f0);
    if (local_c0[3] < fStack_84) {
      local_e0 = local_c0[4];
      fStack_dc = fStack_ac;
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      local_d0 = local_a0;
      uStack_cc = uStack_9c;
      uStack_c8 = uStack_98;
      uStack_c4 = uStack_94;
      local_c0[0] = local_90;
      local_c0[1] = fStack_8c;
      local_c0[2] = fStack_88;
      local_c0[3] = fStack_84;
    }
    local_f8 = local_f8 + 4;
  } while ((int)local_f8 < 0xb2f0c0);
  fVar5 = (float10)1.0;
  local_60 = 3.0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_70 = 0.5;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  do {
    bVar1 = ABS(local_c0[0]) <= ABS(local_c0[1]);
    fVar14 = ABS(local_c0[0]);
    if (!bVar1) {
      fVar14 = ABS(local_c0[1]);
    }
    uVar3 = (uint)!bVar1;
    uVar4 = 2;
    if (ABS(local_c0[2]) < fVar14) {
      uVar3 = 2;
      uVar4 = (uint)!bVar1;
    }
    fVar14 = local_c0[bVar1];
    fVar6 = local_c0[uVar4];
    local_f0[uVar3] = 0.0;
    local_f0[bVar1] = fVar6;
    local_f0[uVar4] = -fVar14;
    fVar14 = (float)(fVar5 * (float10)0.99);
    fVar6 = local_f0[1] * local_f0[1];
    fVar8 = local_f0[2] * local_f0[2];
    auVar10._4_4_ = fVar6;
    auVar10._0_4_ = fVar6;
    auVar10._8_4_ = fVar6;
    auVar10._12_4_ = fVar6;
    auVar11._4_12_ = auVar10._4_12_;
    auVar11._0_4_ = fVar6 + local_f0[0] * local_f0[0];
    auVar12._4_4_ = fVar8;
    auVar12._0_4_ = fVar8 + auVar11._0_4_;
    auVar12._8_4_ = fVar8;
    auVar12._12_4_ = fVar8;
    auVar12 = rsqrtss(auVar11,auVar12);
    fVar6 = auVar12._0_4_;
    fVar6 = local_70 * fVar6 * (local_60 - (fVar8 + auVar11._0_4_) * fVar6 * fVar6);
    fVar8 = fVar6 * local_f0[0];
    fVar7 = fVar6 * local_f0[1];
    fVar9 = fVar6 * local_f0[2];
    fVar6 = fVar6 * 0.0;
    local_f0[0] = fVar14 * fVar8;
    local_f0[1] = fVar14 * fVar7;
    local_f0[2] = fVar14 * fVar9;
    local_f0[3] = fVar14 * fVar6;
    fVar13 = fVar14 * (local_c0[1] * fVar9 - local_c0[2] * fVar7);
    fVar9 = fVar14 * (local_c0[2] * fVar8 - local_c0[0] * fVar9);
    fVar8 = fVar14 * (local_c0[0] * fVar7 - local_c0[1] * fVar8);
    fVar14 = fVar14 * (local_c0[3] * fVar6 - local_c0[3] * fVar6);
    local_40 = local_c0[0] + local_f0[0];
    fStack_3c = local_c0[1] + local_f0[1];
    fStack_38 = local_c0[2] + local_f0[2];
    fVar6 = fStack_3c * fStack_3c;
    fStack_7c = fStack_38 * fStack_38;
    auVar15._4_4_ = fVar6;
    auVar15._0_4_ = fVar6;
    auVar15._8_4_ = fVar6;
    auVar15._12_4_ = fVar6;
    auVar16._4_12_ = auVar15._4_12_;
    auVar16._0_4_ = fVar6 + local_40 * local_40;
    auVar2._4_4_ = fStack_7c;
    auVar2._0_4_ = fStack_7c + auVar16._0_4_;
    auVar2._8_4_ = fStack_7c;
    auVar2._12_4_ = fStack_7c;
    auVar12 = rsqrtss(auVar16,auVar2);
    local_80 = auVar12._0_4_;
    fStack_44 = local_70 * local_80 * (local_60 - (fStack_7c + auVar16._0_4_) * local_80 * local_80)
    ;
    local_40 = fStack_44 * local_40;
    fStack_3c = fStack_44 * fStack_3c;
    fStack_38 = fStack_44 * fStack_38;
    fStack_34 = fStack_44 * (local_c0[3] + local_f0[3]);
    local_20 = fStack_44 * (local_c0[0] - local_f0[0]);
    fStack_1c = fStack_44 * (local_c0[1] - local_f0[1]);
    fStack_18 = fStack_44 * (local_c0[2] - local_f0[2]);
    fStack_14 = fStack_44 * (local_c0[3] - local_f0[3]);
    local_30 = fStack_44 * (local_c0[0] + fVar13);
    fStack_2c = fStack_44 * (local_c0[1] + fVar9);
    fStack_28 = fStack_44 * (local_c0[2] + fVar8);
    fStack_24 = fStack_44 * (local_c0[3] + fVar14);
    local_50 = fStack_44 * (local_c0[0] - fVar13);
    fStack_4c = fStack_44 * (local_c0[1] - fVar9);
    fStack_48 = fStack_44 * (local_c0[2] - fVar8);
    fStack_44 = fStack_44 * (local_c0[3] - fVar14);
    fStack_78 = fStack_7c;
    fStack_74 = fStack_7c;
    fVar5 = (float10)FUN_00959630(param_2,&local_40);
    if ((((local_c0[3] < fStack_84) ||
         (fVar5 = (float10)FUN_00959630(param_2,&local_20), local_c0[3] < fStack_84)) ||
        (fVar5 = (float10)FUN_00959630(param_2,&local_30), local_c0[3] < fStack_84)) ||
       (fVar5 = (float10)FUN_00959630(param_2,&local_50), local_c0[3] < fStack_84)) {
      local_e0 = local_c0[4];
      fStack_dc = fStack_ac;
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      local_d0 = local_a0;
      uStack_cc = uStack_9c;
      uStack_c8 = uStack_98;
      uStack_c4 = uStack_94;
      local_c0[0] = local_90;
      local_c0[1] = fStack_8c;
      local_c0[2] = fStack_88;
      local_c0[3] = fStack_84;
    }
    else {
      fVar5 = fVar5 * (float10)0.5;
    }
  } while ((float10)0.001 < fVar5);
  *param_4 = local_e0;
  param_4[1] = fStack_dc;
  param_4[2] = fStack_d8;
  param_4[3] = fStack_d4;
  *param_5 = local_d0;
  param_5[1] = uStack_cc;
  param_5[2] = uStack_c8;
  param_5[3] = uStack_c4;
  param_6[8] = local_c0[3];
  *param_6 = local_c0[0];
  param_6[1] = local_c0[1];
  param_6[2] = local_c0[2];
  param_6[3] = local_c0[3];
  param_6[4] = local_e0;
  param_6[5] = fStack_dc;
  param_6[6] = fStack_d8;
  param_6[7] = fStack_d4;
  param_6[9] = 0.5;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00aa39d8;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00959bc0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  in_ECX[5] = 0;
  in_ECX[6] = &PTR__scalar_deleting_destructor__00aa39d8;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x26) = 1;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 9) = 0;
  in_ECX[7] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 1;
  in_ECX[3] = 1;
  *(undefined1 *)(in_ECX + 4) = 1;
  *(undefined1 *)((int)in_ECX + 0x11) = 0;
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  *(undefined1 *)(in_ECX + 0xb) = 0;
  *(undefined1 *)((int)in_ECX + 0x2d) = 0;
  *(undefined1 *)((int)in_ECX + 0x2e) = 0;
  *(undefined1 *)((int)in_ECX + 0x2f) = 0;
  in_ECX[10] = 0;
  return;
}



void FUN_00959c40(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00959ca0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  uint uVar4;
  
  if ((*(short *)(in_ECX + 0x22) != 0) && (uVar4 = 0, *(short *)(in_ECX + 0x22) != 0)) {
    do {
      if (uVar4 < *(ushort *)(in_ECX + 0x22)) {
        piVar1 = *(int **)(*(int *)(in_ECX + 0x1c) + uVar4 * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x1c) + uVar4 * 4) = 0;
        if (piVar1 != (int *)0x0) {
          *(short *)(in_ECX + 0x24) = *(short *)(in_ECX + 0x24) + -1;
        }
        if (uVar4 == *(ushort *)(in_ECX + 0x22) - 1) {
          *(ushort *)(in_ECX + 0x22) = *(ushort *)(in_ECX + 0x22) - 1;
        }
        if (piVar1 != (int *)0x0) {
          puVar2 = (undefined4 *)piVar1[1];
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          puVar2 = (undefined4 *)*piVar1;
          if (((puVar2 != (undefined4 *)0x0) &&
              (LVar3 = InterlockedDecrement(puVar2 + 1), LVar3 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
          FUN_00401f20(piVar1);
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x22));
  }
  return;
}



undefined4 FUN_00959d60(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  
  if ((char)param_3 == '\0') {
    FUN_00959ca0();
  }
  cVar3 = FUN_0095d540(param_1,param_2);
  if (cVar3 != '\0') {
    if (*(ushort *)(in_ECX + 9) != 0) {
      uVar7 = 1;
      if (((in_ECX[1] != 1) && (in_ECX[2] != 0)) && (1 < *(ushort *)(in_ECX + 9))) {
        uVar6 = (uint)*(ushort *)((int)in_ECX + 0x22);
        if (*in_ECX == 0) {
          param_2 = 0;
          if (uVar6 != 0) {
            do {
              param_1 = *(int *)(in_ECX[7] + param_2 * 4);
              uVar1 = param_2;
              uVar7 = param_2;
              if (param_1 != 0) {
                while (uVar7 = uVar7 + 1, uVar7 < uVar6) {
                  iVar5 = *(int *)(in_ECX[7] + uVar7 * 4);
                  if (iVar5 != 0) {
                    if (*(float *)(iVar5 + 0x14) < *(float *)(param_1 + 0x14)) {
                      uVar2 = param_2;
                      param_2 = uVar1;
                      param_3 = iVar5;
                      FUN_0042bb90(uVar2,&param_3);
                      FUN_0042bb90(uVar7,&param_1);
                      param_1 = iVar5;
                      uVar1 = param_2;
                    }
                  }
                }
              }
              param_2 = param_2 + 1;
            } while (param_2 < uVar6);
            return 1;
          }
        }
        else {
          iVar5 = *(int *)in_ECX[7];
          param_3 = iVar5;
          if (1 < uVar6) {
            do {
              iVar4 = FUN_00405020(uVar7);
              if ((iVar4 != 0) &&
                 ((*(float *)(iVar5 + 0x14) <= *(float *)(iVar4 + 0x14) ||
                  (bVar8 = iVar5 != 0, iVar5 = iVar4, bVar8)))) {
                FUN_00959c40(1);
              }
              uVar7 = uVar7 + 1;
            } while (uVar7 < uVar6);
          }
          param_3 = iVar5;
          FUN_0042bb90(0,&param_3);
        }
      }
      return 1;
    }
  }
  return 0;
}



void FUN_00959ec0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  FUN_00959ca0();
  *(undefined ***)(in_ECX + 0x18) = &PTR__scalar_deleting_destructor__00aa39d8;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_0095a250(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00ba9a68 + 1;
  bVar2 = DAT_00ba9a68 == 0;
  DAT_00ba9a68 = iVar1;
  if (bVar2) {
    FUN_00747c40(&LAB_00959f00,&LAB_0095a1b0);
  }
  return;
}



void FUN_0095a280(float *param_1,float param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = param_3[1];
  *param_1 = *param_3;
  param_1[1] = fVar1;
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  return;
}



void FUN_0095a2b0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  FUN_0096de20(*(undefined4 *)(in_ECX + 8),param_1);
  return;
}



void FUN_0095a2d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
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
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  return;
}



void FUN_0095a360(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x28) = param_1;
  FUN_004baca0(&param_1);
  return;
}



undefined1 FUN_0095a380(float *param_1,undefined4 param_2,int *param_3,int param_4)

{
  ushort uVar1;
  char cVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ushort uVar10;
  float *pfVar11;
  ushort uVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  char cStack_2d6;
  undefined1 local_2d5;
  float *pfStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float local_2bc;
  int iStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  uint uStack_2a8;
  float fStack_2a4;
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
  int iStack_230;
  int iStack_22c;
  undefined1 uStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  int aiStack_218 [2];
  undefined1 uStack_210;
  float local_20c;
  float fStack_208;
  float fStack_204;
  int iStack_200;
  int iStack_1fc;
  undefined1 uStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  undefined1 uStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  undefined4 uStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  int iStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  local_e8 = *param_1 - *(float *)(param_4 + 0x88);
  local_e4 = param_1[1] - *(float *)(param_4 + 0x8c);
  local_e0 = param_1[2] - *(float *)(param_4 + 0x90);
  fVar14 = 1.0 / *(float *)(param_4 + 0x94);
  pfVar3 = (float *)FUN_00710250(&local_20c,&local_e8,param_4 + 100);
  local_2bc = fVar14 * pfVar3[1];
  local_2c0 = pfVar3[2] * fVar14;
  local_f4 = fVar14 * *pfVar3;
  local_f0 = local_2bc;
  local_ec = local_2c0;
  pfVar3 = (float *)FUN_00710250(&local_20c,param_2,param_4 + 100);
  local_2d5 = 0;
  local_2bc = fVar14 * pfVar3[1];
  local_2c0 = pfVar3[2] * fVar14;
  local_100 = fVar14 * *pfVar3;
  local_fc = local_2bc;
  local_f8 = local_2c0;
  uVar4 = (**(code **)(**(int **)(param_4 + 0xb4) + 0x5c))();
  iVar5 = *(int *)(param_4 + 0xb4);
  local_2bc = (float)(uVar4 & 0xffff);
  iStack_230 = 0;
  iStack_22c = 0;
  uStack_228 = 0;
  fVar14 = *(float *)(iVar5 + 0x1c);
  cStack_2d6 = '\0';
  local_2c0 = fVar14;
  iStack_2b8 = iVar5;
  if (((fVar14 == 0.0) && (*(int **)(iVar5 + 0x34) != (int *)0x0)) &&
     (cVar2 = (**(code **)(**(int **)(iVar5 + 0x34) + 0x4c))(), cVar2 != '\0')) {
    cStack_2d6 = FUN_00728ab0(1);
    FUN_00728b60(&iStack_230);
  }
  iVar5 = *(int *)(iVar5 + 0x4c);
  uStack_2a8 = 0;
  iVar15 = iStack_22c;
  iStack_15c = iVar5;
  if (local_2bc._0_2_ != 0) {
    do {
      uVar4 = uStack_2a8 & 0xffff;
      if ((uStack_2a8 & 1) == 0) {
        uVar12 = *(ushort *)(iVar5 + uVar4 * 2);
        uVar10 = *(ushort *)(iVar5 + 2 + uVar4 * 2);
      }
      else {
        uVar12 = *(ushort *)(iVar5 + 2 + uVar4 * 2);
        uVar10 = *(ushort *)(iVar5 + uVar4 * 2);
      }
      uVar1 = *(ushort *)(iVar5 + 4 + uVar4 * 2);
      pfStack_2cc = (float *)(uint)uVar1;
      if ((uVar12 != uVar10) && (uVar10 != uVar1)) {
        uVar16 = (uint)uVar12;
        uVar4 = (uint)uVar1;
        if (fVar14 == 0.0) {
          pfVar3 = (float *)(iVar15 * uVar16 + iStack_230);
          fStack_23c = *pfVar3;
          fStack_238 = pfVar3[1];
          fStack_234 = pfVar3[2];
          fStack_254 = *(float *)(iVar15 * (uint)uVar10 + iStack_230);
          iVar5 = iVar15 * (uint)uVar10 + iStack_230;
          fStack_250 = *(float *)(iVar5 + 4);
          fStack_24c = *(float *)(iVar5 + 8);
          pfVar3 = (float *)(uVar4 * iVar15 + iStack_230);
        }
        else {
          pfVar3 = (float *)((int)fVar14 + uVar16 * 0xc);
          fStack_23c = *pfVar3;
          fStack_238 = pfVar3[1];
          fStack_234 = pfVar3[2];
          pfVar3 = (float *)((int)local_2c0 + (uint)uVar10 * 0xc);
          fStack_254 = *pfVar3;
          fStack_250 = pfVar3[1];
          fStack_24c = pfVar3[2];
          pfVar3 = (float *)((int)local_2c0 + uVar4 * 0xc);
        }
        uVar13 = (uint)uVar10;
        fStack_248 = *pfVar3;
        fStack_244 = pfVar3[1];
        fStack_240 = pfVar3[2];
        uStack_1c4 = CONCAT31(uStack_1c4._1_3_,(char)param_3[4]);
        cVar2 = FUN_0096e5e0(&local_f4,&local_100,&fStack_23c,&fStack_254,&fStack_248,uStack_1c4,
                             &fStack_224,&fStack_160,&fStack_2c4,&fStack_2c8);
        fVar14 = local_2c0;
        iVar15 = iStack_22c;
        iVar5 = iStack_15c;
        if (cVar2 != '\0') {
          local_2d5 = 1;
          iVar5 = FUN_00401f00(0x44);
          if (iVar5 == 0) {
            pfVar3 = (float *)0x0;
          }
          else {
            pfVar3 = (float *)FUN_0095a2d0(param_4);
          }
          if (param_3[3] == 1) {
            pfVar6 = (float *)FUN_007101f0(auStack_b0,&fStack_224);
            fStack_134 = *(float *)(param_4 + 0x94);
            fStack_1e8 = fStack_134 * *pfVar6;
            fStack_1e4 = pfVar6[1] * fStack_134;
            fStack_1e0 = fStack_134 * pfVar6[2];
            fStack_224 = fStack_1e8 + *(float *)(param_4 + 0x88);
            fStack_220 = *(float *)(param_4 + 0x8c) + fStack_1e4;
            fStack_21c = *(float *)(param_4 + 0x90) + fStack_1e0;
            fStack_1b4 = fStack_224;
            fStack_1b0 = fStack_220;
            fStack_1ac = fStack_21c;
          }
          pfVar3[2] = fStack_224;
          pfVar3[3] = fStack_220;
          pfVar3[4] = fStack_21c;
          *(undefined2 *)(pfVar3 + 6) = (undefined2)uStack_2a8;
          pfVar3[5] = fStack_160;
          *(ushort *)((int)pfVar3 + 0x1a) = uVar12;
          *(ushort *)(pfVar3 + 7) = uVar10;
          *(undefined2 *)((int)pfVar3 + 0x1e) = pfStack_2cc._0_2_;
          fVar14 = 1.0 - (fStack_2c4 + fStack_2c8);
          if ((char)param_3[0xb] == '\0') {
            pfVar3[8] = DAT_00b3fc80;
            fVar7 = DAT_00b3fc84;
LAB_0095aa95:
            pfVar3[9] = fVar7;
          }
          else {
            iStack_1f4 = 0;
            iStack_1f0 = 0;
            uStack_1ec = 0;
            FUN_00728e70(0,&iStack_1f4);
            if (iStack_1f4 != 0) {
              pfStack_2cc = (float *)(iStack_1f0 * uVar13 + iStack_1f4);
              pfVar6 = (float *)(iStack_1f0 * uVar16 + iStack_1f4);
              pfVar11 = (float *)(iStack_1f0 * uVar4 + iStack_1f4);
              fStack_294 = fStack_2c8 * *pfVar11;
              fStack_290 = fStack_2c8 * pfVar11[1];
              fStack_274 = fStack_2c4 * *pfStack_2cc;
              fStack_270 = fStack_2c4 * pfStack_2cc[1];
              fStack_29c = fVar14 * *pfVar6;
              fStack_298 = fVar14 * pfVar6[1];
              fStack_284 = fStack_29c + fStack_274;
              fStack_280 = fStack_298 + fStack_270;
              fStack_264 = fStack_284 + fStack_294;
              pfVar3[8] = fStack_264;
              fStack_260 = fStack_280 + fStack_290;
              fVar7 = fStack_260;
              goto LAB_0095aa95;
            }
            iVar5 = *(int *)(*(int *)(param_4 + 0xb4) + 0x28);
            if (iVar5 == 0) {
              pfVar3[8] = DAT_00b3fc80;
              pfVar3[9] = DAT_00b3fc84;
            }
            else {
              fStack_28c = fStack_2c8 * *(float *)(iVar5 + uVar4 * 8);
              fStack_288 = fStack_2c8 * *(float *)(iVar5 + 4 + uVar4 * 8);
              fStack_27c = fStack_2c4 * *(float *)(iVar5 + uVar13 * 8);
              fStack_278 = fStack_2c4 * *(float *)(iVar5 + 4 + uVar13 * 8);
              fStack_2a4 = fVar14 * *(float *)(iVar5 + uVar16 * 8);
              fStack_2a0 = fVar14 * *(float *)(iVar5 + 4 + uVar16 * 8);
              fStack_26c = fStack_2a4 + fStack_27c;
              fStack_268 = fStack_2a0 + fStack_278;
              fStack_25c = fStack_26c + fStack_28c;
              pfVar3[8] = fStack_25c;
              fStack_258 = fStack_268 + fStack_288;
              pfVar3[9] = fStack_258;
            }
          }
          if (*(char *)((int)param_3 + 0x2d) == '\0') {
            pfVar3[10] = DAT_00b3f9a8;
            pfVar3[0xb] = DAT_00b3f9ac;
            fVar7 = DAT_00b3f9b0;
          }
          else {
            iStack_200 = 0;
            iStack_1fc = 0;
            uStack_1f8 = 0;
            FUN_00728d00(&iStack_200);
            if (iStack_200 == 0) {
              if ((*(char *)((int)param_3 + 0x2e) == '\0') ||
                 (iVar5 = *(int *)(*(int *)(param_4 + 0xb4) + 0x20), iVar5 == 0)) {
                fStack_14c = fStack_254 - fStack_23c;
                fStack_148 = fStack_250 - fStack_238;
                fStack_144 = fStack_24c - fStack_234;
                fStack_178 = fStack_248 - fStack_23c;
                fStack_174 = fStack_244 - fStack_238;
                fStack_170 = fStack_240 - fStack_234;
                fStack_2b4 = fStack_148 * fStack_170 - fStack_144 * fStack_174;
                fStack_2b0 = fStack_178 * fStack_144 - fStack_14c * fStack_170;
                fStack_2ac = fStack_174 * fStack_14c - fStack_148 * fStack_178;
                local_20c = fStack_2b4;
                fStack_208 = fStack_2b0;
                fStack_204 = fStack_2ac;
              }
              else {
                pfStack_2cc = (float *)FUN_0047da10(auStack_8c,fStack_2c4,iVar5 + uVar13 * 0xc);
                pfVar6 = (float *)FUN_0047da10(auStack_a4,fVar14,iVar5 + uVar16 * 0xc);
                fStack_1a8 = *pfVar6 + *pfStack_2cc;
                fStack_1a4 = pfStack_2cc[1] + pfVar6[1];
                fStack_1a0 = pfStack_2cc[2] + pfVar6[2];
                pfVar6 = (float *)FUN_0047da10(auStack_bc,fStack_2c8,iVar5 + uVar4 * 0xc);
                fStack_2b4 = fStack_1a8 + *pfVar6;
                fStack_2b0 = pfVar6[1] + fStack_1a4;
                fStack_2ac = pfVar6[2] + fStack_1a0;
                fStack_190 = fStack_2b4;
                fStack_18c = fStack_2b0;
                fStack_188 = fStack_2ac;
              }
            }
            else {
              pfVar6 = (float *)(iStack_1fc * uVar16 + iStack_200);
              fStack_158 = *pfVar6;
              fStack_154 = pfVar6[1];
              fStack_150 = pfVar6[2];
              pfVar6 = (float *)(iStack_1fc * uVar13 + iStack_200);
              pfVar11 = (float *)(iStack_1fc * uVar4 + iStack_200);
              fStack_19c = *pfVar6;
              fStack_198 = pfVar6[1];
              fStack_194 = pfVar6[2];
              fStack_140 = *pfVar11;
              fStack_13c = pfVar11[1];
              fStack_138 = pfVar11[2];
              fStack_1d0 = fStack_2c8 * fStack_140;
              fStack_1cc = fStack_13c * fStack_2c8;
              fStack_1c8 = fStack_2c8 * fStack_138;
              fStack_16c = fStack_2c4 * fStack_19c;
              fStack_168 = fStack_198 * fStack_2c4;
              fStack_164 = fStack_2c4 * fStack_194;
              fStack_184 = fVar14 * fStack_158;
              fStack_180 = fStack_154 * fVar14;
              fStack_17c = fVar14 * fStack_150;
              fStack_1dc = fStack_184 + fStack_16c;
              fStack_1d8 = fStack_180 + fStack_168;
              fStack_1d4 = fStack_17c + fStack_164;
              fStack_2b4 = fStack_1dc + fStack_1d0;
              fStack_2b0 = fStack_1d8 + fStack_1cc;
              fStack_2ac = fStack_1d4 + fStack_1c8;
              fStack_1c0 = fStack_2b4;
              fStack_1bc = fStack_2b0;
              fStack_1b8 = fStack_2ac;
            }
            FUN_0043f350();
            if (param_3[3] == 1) {
              pfVar6 = (float *)FUN_007101f0(auStack_98,&fStack_2b4);
              fStack_2b4 = *pfVar6;
              fStack_2b0 = pfVar6[1];
              fStack_2ac = pfVar6[2];
            }
            pfVar3[10] = fStack_2b4;
            pfVar3[0xb] = fStack_2b0;
            fVar7 = fStack_2ac;
          }
          pfVar3[0xc] = fVar7;
          if (*(char *)((int)param_3 + 0x2f) == '\0') {
            pfVar3[0xd] = DAT_00b25ae0;
            pfVar3[0xe] = DAT_00b25ae4;
            pfVar3[0xf] = DAT_00b25ae8;
            pfVar3[0x10] = DAT_00b25aec;
          }
          else {
            aiStack_218[0] = 0;
            aiStack_218[1] = 0;
            uStack_210 = 0;
            FUN_00728db0(aiStack_218);
            if (aiStack_218[0] == 0) {
              pfStack_2cc = *(float **)(*(int *)(param_4 + 0xb4) + 0x24);
              if (pfStack_2cc == (float *)0x0) {
                pfVar3[0xd] = DAT_00b25ae0;
                pfVar3[0xe] = DAT_00b25ae4;
                pfVar3[0xf] = DAT_00b25ae8;
                pfVar3[0x10] = DAT_00b25aec;
              }
              else {
                uVar8 = FUN_004bfbd0(auStack_70,fStack_2c8,pfStack_2cc + uVar4 * 4);
                pfVar11 = pfStack_2cc;
                pfVar6 = &fStack_dc;
                uVar9 = FUN_004bfbd0(auStack_50,fStack_2c4,pfStack_2cc + uVar13 * 4,pfVar6,uVar8);
                puVar17 = auStack_30;
                FUN_004bfbd0(auStack_10,fVar14,pfVar11 + uVar16 * 4,puVar17,uVar9);
                FUN_004bfb30(puVar17,uVar9);
                FUN_004bfb30(pfVar6,uVar8);
                pfVar3[0xd] = fStack_dc;
                pfVar3[0xe] = fStack_d8;
                pfVar3[0xf] = fStack_d4;
                pfVar3[0x10] = fStack_d0;
              }
            }
            else {
              uStack_130 = 0;
              uStack_12c = 0;
              uStack_128 = 0;
              uStack_124 = 0;
              uStack_110 = 0;
              uStack_10c = 0;
              uStack_108 = 0;
              uStack_104 = 0;
              uStack_120 = 0;
              uStack_11c = 0;
              uStack_118 = 0;
              uStack_114 = 0;
              FUN_004c1440(uVar16,&uStack_130);
              FUN_004c1440(uVar13,&uStack_110);
              FUN_004c1440(uVar4,&uStack_120);
              uVar8 = FUN_004bfbd0(auStack_80,fStack_2c8,&uStack_120);
              pfVar6 = &fStack_cc;
              uVar9 = FUN_004bfbd0(auStack_60,fStack_2c4,&uStack_110,pfVar6,uVar8);
              puVar17 = auStack_20;
              FUN_004bfbd0(auStack_40,fVar14,&uStack_130,puVar17,uVar9);
              FUN_004bfb30(puVar17,uVar9);
              FUN_004bfb30(pfVar6,uVar8);
              pfVar3[0xd] = fStack_cc;
              pfVar3[0xe] = fStack_c8;
              pfVar3[0xf] = fStack_c4;
              pfVar3[0x10] = fStack_c0;
            }
          }
          param_3[10] = (int)pfVar3;
          pfStack_2cc = pfVar3;
          FUN_004baca0(&pfStack_2cc);
          fVar14 = local_2c0;
          iVar15 = iStack_22c;
          iVar5 = iStack_15c;
          if ((*param_3 == 1) && (param_3[1] == 1)) {
            if (cStack_2d6 != '\0') {
              FUN_00728b20();
            }
            return 1;
          }
        }
      }
      uStack_2a8 = uStack_2a8 + 1;
    } while ((ushort)uStack_2a8 < local_2bc._0_2_);
  }
  if (cStack_2d6 != '\0') {
    FUN_00728b20();
  }
  return local_2d5;
}



undefined1 FUN_0095b240(float *param_1,undefined4 param_2,int *param_3,int param_4)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  char cStack_2d6;
  undefined1 local_2d5;
  float fStack_2c8;
  float fStack_2c4;
  float local_2c0;
  float *pfStack_2bc;
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
  int iStack_1bc;
  int iStack_1b8;
  undefined1 uStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  int aiStack_18c [2];
  undefined1 uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  int iStack_174;
  int iStack_170;
  undefined1 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  int iStack_12c;
  int iStack_128;
  undefined1 uStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  uint uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  int iStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
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
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  local_24 = *param_1 - *(float *)(param_4 + 0x88);
  local_20 = param_1[1] - *(float *)(param_4 + 0x8c);
  local_1c = param_1[2] - *(float *)(param_4 + 0x90);
  fVar11 = 1.0 / *(float *)(param_4 + 0x94);
  pfVar4 = (float *)FUN_00710250(&local_168,&local_24,param_4 + 100);
  local_2c0 = fVar11 * pfVar4[1];
  local_28 = pfVar4[2] * fVar11;
  local_30 = fVar11 * *pfVar4;
  local_2c = local_2c0;
  pfVar4 = (float *)FUN_00710250(&local_168,param_2,param_4 + 100);
  local_2d5 = 0;
  local_2c0 = fVar11 * pfVar4[1];
  local_34 = pfVar4[2] * fVar11;
  local_3c = fVar11 * *pfVar4;
  local_38 = local_2c0;
  uVar2 = (**(code **)(**(int **)(param_4 + 0xb4) + 0x5c))();
  iVar6 = *(int *)(param_4 + 0xb4);
  uStack_dc = (uint)uVar2;
  iStack_1bc = 0;
  iStack_1b8 = 0;
  uStack_1b4 = 0;
  fVar11 = *(float *)(iVar6 + 0x1c);
  cStack_2d6 = '\0';
  local_2c0 = fVar11;
  if (((fVar11 == 0.0) && (*(int **)(iVar6 + 0x34) != (int *)0x0)) &&
     (cVar1 = (**(code **)(**(int **)(iVar6 + 0x34) + 0x4c))(), cVar1 != '\0')) {
    cStack_2d6 = FUN_00728ab0(1);
    FUN_00728b60(&iStack_1bc);
  }
  iStack_ec = *(int *)(iVar6 + 0x48);
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      uVar5 = (uint)uVar3;
      uVar15 = (uint)*(ushort *)(iStack_ec + uVar5 * 6);
      uVar13 = (uint)*(ushort *)(iStack_ec + 2 + uVar5 * 6);
      pfVar4 = (float *)(uint)*(ushort *)(iStack_ec + 4 + uVar5 * 6);
      if (cStack_2d6 == '\0') {
        fStack_198 = *(float *)((int)fVar11 + uVar15 * 0xc);
        iVar6 = (int)fVar11 + uVar15 * 0xc;
        fStack_194 = *(float *)(iVar6 + 4);
        fStack_190 = *(float *)(iVar6 + 8);
        fStack_1a4 = *(float *)((int)fVar11 + uVar13 * 0xc);
        iVar6 = (int)fVar11 + uVar13 * 0xc;
        fStack_1a0 = *(float *)(iVar6 + 4);
        fStack_19c = *(float *)(iVar6 + 8);
        pfVar10 = (float *)((int)local_2c0 + (int)pfVar4 * 0xc);
        fStack_1b0 = *pfVar10;
        fStack_1ac = pfVar10[1];
        fStack_1a8 = pfVar10[2];
      }
      else {
        fStack_198 = *(float *)(iStack_1b8 * uVar15 + iStack_1bc);
        iVar6 = iStack_1b8 * uVar15 + iStack_1bc;
        fStack_194 = *(float *)(iVar6 + 4);
        fStack_190 = *(float *)(iVar6 + 8);
        fStack_1a4 = *(float *)(iStack_1b8 * uVar13 + iStack_1bc);
        iVar6 = iStack_1b8 * uVar13 + iStack_1bc;
        fStack_1a0 = *(float *)(iVar6 + 4);
        fStack_19c = *(float *)(iVar6 + 8);
        pfVar10 = (float *)(iStack_1b8 * (int)pfVar4 + iStack_1bc);
        fStack_1b0 = *pfVar10;
        fStack_1ac = pfVar10[1];
        fStack_1a8 = pfVar10[2];
      }
      uStack_cc = CONCAT31(uStack_cc._1_3_,(char)param_3[4]);
      pfStack_2bc = pfVar4;
      uStack_fc = uVar13;
      uStack_c8 = uVar15;
      cVar1 = FUN_0096e5e0(&local_30,&local_3c,&fStack_198,&fStack_1a4,&fStack_1b0,uStack_cc,
                           &fStack_180,&fStack_c4,&fStack_2c4,&fStack_2c8);
      if (cVar1 != '\0') {
        local_2d5 = 1;
        iVar6 = FUN_00401f00(0x44);
        if (iVar6 == 0) {
          pfVar10 = (float *)0x0;
        }
        else {
          pfVar10 = (float *)FUN_0095a2d0(param_4);
        }
        if (param_3[3] == 1) {
          pfVar7 = (float *)FUN_007101f0(auStack_c,&fStack_180);
          fStack_118 = *(float *)(param_4 + 0x94);
          fStack_120 = fStack_118 * *pfVar7;
          fStack_11c = pfVar7[1] * fStack_118;
          fStack_118 = fStack_118 * pfVar7[2];
          fStack_180 = *(float *)(param_4 + 0x88) + fStack_120;
          fStack_17c = *(float *)(param_4 + 0x8c) + fStack_11c;
          fStack_178 = *(float *)(param_4 + 0x90) + fStack_118;
          fStack_c0 = fStack_180;
          fStack_bc = fStack_17c;
          fStack_b8 = fStack_178;
        }
        pfVar10[2] = fStack_180;
        pfVar10[3] = fStack_17c;
        pfVar10[4] = fStack_178;
        *(ushort *)(pfVar10 + 6) = uVar3;
        pfVar10[5] = fStack_c4;
        *(undefined2 *)((int)pfVar10 + 0x1a) = (undefined2)uStack_c8;
        *(undefined2 *)(pfVar10 + 7) = (undefined2)uStack_fc;
        *(undefined2 *)((int)pfVar10 + 0x1e) = pfStack_2bc._0_2_;
        fVar11 = 1.0 - (fStack_2c4 + fStack_2c8);
        if ((char)param_3[0xb] == '\0') {
          pfVar10[8] = DAT_00b3fc80;
          fVar8 = DAT_00b3fc84;
LAB_0095b9b5:
          pfVar10[9] = fVar8;
        }
        else {
          iStack_12c = 0;
          iStack_128 = 0;
          uStack_124 = 0;
          FUN_00728e70(0,&iStack_12c);
          if (iStack_12c != 0) {
            pfStack_2bc = (float *)(iStack_128 * uVar13 + iStack_12c);
            pfVar7 = (float *)(iStack_128 * uVar15 + iStack_12c);
            pfVar9 = (float *)(iStack_128 * (int)pfVar4 + iStack_12c);
            fStack_284 = fStack_2c8 * *pfVar9;
            fStack_280 = fStack_2c8 * pfVar9[1];
            fStack_23c = fStack_2c4 * *pfStack_2bc;
            fStack_238 = fStack_2c4 * pfStack_2bc[1];
            fStack_2a4 = fVar11 * *pfVar7;
            fStack_2a0 = fVar11 * pfVar7[1];
            fStack_214 = fStack_2a4 + fStack_23c;
            fStack_210 = fStack_2a0 + fStack_238;
            fStack_1cc = fStack_214 + fStack_284;
            pfVar10[8] = fStack_1cc;
            fStack_1c8 = fStack_210 + fStack_280;
            fVar8 = fStack_1c8;
            goto LAB_0095b9b5;
          }
          iVar6 = *(int *)(*(int *)(param_4 + 0xb4) + 0x28);
          if (iVar6 == 0) {
            pfVar10[8] = DAT_00b3fc80;
            pfVar10[9] = DAT_00b3fc84;
          }
          else {
            fStack_254 = fStack_2c8 * *(float *)(iVar6 + (int)pfVar4 * 8);
            fStack_250 = fStack_2c8 * *(float *)(iVar6 + 4 + (int)pfVar4 * 8);
            fStack_28c = fStack_2c4 * *(float *)(iVar6 + uVar13 * 8);
            fStack_288 = fStack_2c4 * *(float *)(iVar6 + 4 + uVar13 * 8);
            fStack_2ac = fVar11 * *(float *)(iVar6 + uVar15 * 8);
            fStack_2a8 = fVar11 * *(float *)(iVar6 + 4 + uVar15 * 8);
            fStack_26c = fStack_2ac + fStack_28c;
            fStack_268 = fStack_2a8 + fStack_288;
            fStack_1c4 = fStack_26c + fStack_254;
            pfVar10[8] = fStack_1c4;
            fStack_1c0 = fStack_268 + fStack_250;
            pfVar10[9] = fStack_1c0;
          }
        }
        if (*(char *)((int)param_3 + 0x2d) == '\0') {
          pfVar10[10] = DAT_00b3f9a8;
          pfVar10[0xb] = DAT_00b3f9ac;
          fVar8 = DAT_00b3f9b0;
        }
        else {
          iStack_174 = 0;
          iStack_170 = 0;
          uStack_16c = 0;
          FUN_00728d00(&iStack_174);
          if (iStack_174 == 0) {
            if ((*(char *)((int)param_3 + 0x2e) == '\0') ||
               (iVar6 = *(int *)(*(int *)(param_4 + 0xb4) + 0x20), iVar6 == 0)) {
              fStack_84 = fStack_1a4 - fStack_198;
              fStack_80 = fStack_1a0 - fStack_194;
              fStack_7c = fStack_19c - fStack_190;
              fStack_d8 = fStack_1b0 - fStack_198;
              fStack_d4 = fStack_1ac - fStack_194;
              fStack_d0 = fStack_1a8 - fStack_190;
              fStack_2b8 = fStack_80 * fStack_d0 - fStack_7c * fStack_d4;
              fStack_2b4 = fStack_d8 * fStack_7c - fStack_84 * fStack_d0;
              fStack_2b0 = fStack_d4 * fStack_84 - fStack_80 * fStack_d8;
              local_168 = fStack_2b8;
              fStack_164 = fStack_2b4;
              fStack_160 = fStack_2b0;
            }
            else {
              iVar12 = iVar6 + (int)pfVar4 * 0xc;
              fStack_e8 = fStack_2c8 * *(float *)(iVar6 + (int)pfVar4 * 0xc);
              fStack_e4 = *(float *)(iVar12 + 4) * fStack_2c8;
              fStack_e0 = fStack_2c8 * *(float *)(iVar12 + 8);
              pfVar7 = (float *)(iVar6 + uVar13 * 0xc);
              fStack_f8 = fStack_2c4 * *pfVar7;
              fStack_f4 = pfVar7[1] * fStack_2c4;
              fStack_f0 = fStack_2c4 * pfVar7[2];
              pfVar7 = (float *)(iVar6 + uVar15 * 0xc);
              fStack_54 = fVar11 * *pfVar7;
              fStack_50 = pfVar7[1] * fVar11;
              fStack_4c = fVar11 * pfVar7[2];
              fStack_9c = fStack_54 + fStack_f8;
              fStack_98 = fStack_50 + fStack_f4;
              fStack_94 = fStack_4c + fStack_f0;
              fStack_2b8 = fStack_9c + fStack_e8;
              fStack_2b4 = fStack_98 + fStack_e4;
              fStack_2b0 = fStack_94 + fStack_e0;
              fStack_6c = fStack_2b8;
              fStack_68 = fStack_2b4;
              fStack_64 = fStack_2b0;
            }
          }
          else {
            pfVar7 = (float *)(iStack_170 * uVar15 + iStack_174);
            fStack_78 = *pfVar7;
            fStack_74 = pfVar7[1];
            fStack_70 = pfVar7[2];
            pfVar7 = (float *)(iStack_170 * uVar13 + iStack_174);
            pfVar9 = (float *)(iStack_170 * (int)pfVar4 + iStack_174);
            fStack_90 = *pfVar7;
            fStack_8c = pfVar7[1];
            fStack_88 = pfVar7[2];
            fStack_a8 = *pfVar9;
            fStack_a4 = pfVar9[1];
            fStack_a0 = pfVar9[2];
            fStack_108 = fStack_2c8 * fStack_a8;
            fStack_104 = fStack_a4 * fStack_2c8;
            fStack_100 = fStack_2c8 * fStack_a0;
            fStack_48 = fStack_2c4 * fStack_90;
            fStack_44 = fStack_8c * fStack_2c4;
            fStack_40 = fStack_2c4 * fStack_88;
            fStack_60 = fVar11 * fStack_78;
            fStack_5c = fStack_74 * fVar11;
            fStack_58 = fVar11 * fStack_70;
            fStack_b4 = fStack_60 + fStack_48;
            fStack_b0 = fStack_5c + fStack_44;
            fStack_ac = fStack_58 + fStack_40;
            fStack_2b8 = fStack_b4 + fStack_108;
            fStack_2b4 = fStack_b0 + fStack_104;
            fStack_2b0 = fStack_ac + fStack_100;
            fStack_114 = fStack_2b8;
            fStack_110 = fStack_2b4;
            fStack_10c = fStack_2b0;
          }
          FUN_0043f350();
          if (param_3[3] == 1) {
            pfVar7 = (float *)FUN_007101f0(auStack_18,&fStack_2b8);
            fStack_2b8 = *pfVar7;
            fStack_2b4 = pfVar7[1];
            fStack_2b0 = pfVar7[2];
          }
          pfVar10[10] = fStack_2b8;
          pfVar10[0xb] = fStack_2b4;
          fVar8 = fStack_2b0;
        }
        pfVar10[0xc] = fVar8;
        if (*(char *)((int)param_3 + 0x2f) == '\0') {
          pfVar10[0xd] = DAT_00b25ae0;
          pfVar10[0xe] = DAT_00b25ae4;
          pfVar10[0xf] = DAT_00b25ae8;
          pfVar10[0x10] = DAT_00b25aec;
        }
        else {
          aiStack_18c[0] = 0;
          aiStack_18c[1] = 0;
          uStack_184 = 0;
          FUN_00728db0(aiStack_18c);
          if (aiStack_18c[0] == 0) {
            iVar6 = *(int *)(*(int *)(param_4 + 0xb4) + 0x24);
            if (iVar6 == 0) {
              pfVar10[0xd] = DAT_00b25ae0;
              pfVar10[0xe] = DAT_00b25ae4;
              pfVar10[0xf] = DAT_00b25ae8;
              pfVar10[0x10] = DAT_00b25aec;
            }
            else {
              iVar12 = (int)pfVar4 * 0x10;
              fStack_224 = fStack_2c8 * *(float *)(iVar12 + iVar6);
              iVar14 = uVar13 * 0x10;
              fStack_220 = *(float *)(iVar12 + 4 + iVar6) * fStack_2c8;
              fStack_21c = *(float *)(iVar12 + iVar6 + 8) * fStack_2c8;
              iVar16 = uVar15 * 0x10;
              fStack_218 = fStack_2c8 * *(float *)(iVar12 + iVar6 + 0xc);
              fStack_24c = fStack_2c4 * *(float *)(iVar14 + iVar6);
              fStack_248 = *(float *)(iVar14 + 4 + iVar6) * fStack_2c4;
              fStack_244 = *(float *)(iVar14 + iVar6 + 8) * fStack_2c4;
              fStack_240 = fStack_2c4 * *(float *)(iVar14 + iVar6 + 0xc);
              fStack_29c = fVar11 * *(float *)(iVar16 + iVar6);
              fStack_298 = *(float *)(iVar16 + iVar6 + 4) * fVar11;
              fStack_294 = *(float *)(iVar16 + 8 + iVar6) * fVar11;
              fStack_290 = fVar11 * *(float *)(iVar16 + iVar6 + 0xc);
              fStack_234 = fStack_29c + fStack_24c;
              fStack_230 = fStack_298 + fStack_248;
              fStack_22c = fStack_294 + fStack_244;
              fStack_228 = fStack_290 + fStack_240;
              fStack_20c = fStack_234 + fStack_224;
              pfVar10[0xd] = fStack_20c;
              fStack_208 = fStack_230 + fStack_220;
              pfVar10[0xe] = fStack_208;
              fStack_204 = fStack_22c + fStack_21c;
              pfVar10[0xf] = fStack_204;
              fStack_200 = fStack_228 + fStack_218;
              pfVar10[0x10] = fStack_200;
            }
          }
          else {
            fStack_15c = 0.0;
            fStack_158 = 0.0;
            fStack_154 = 0.0;
            fStack_150 = 0.0;
            fStack_14c = 0.0;
            fStack_148 = 0.0;
            fStack_144 = 0.0;
            fStack_140 = 0.0;
            fStack_13c = 0.0;
            fStack_138 = 0.0;
            fStack_134 = 0.0;
            fStack_130 = 0.0;
            FUN_004c1440(uVar15,&fStack_15c);
            FUN_004c1440(uVar13,&fStack_14c);
            FUN_004c1440(pfVar4,&fStack_13c);
            fStack_1dc = fStack_2c8 * fStack_13c;
            fStack_1d8 = fStack_138 * fStack_2c8;
            fStack_1d4 = fStack_134 * fStack_2c8;
            fStack_1d0 = fStack_2c8 * fStack_130;
            fStack_1fc = fStack_2c4 * fStack_14c;
            fStack_1f8 = fStack_148 * fStack_2c4;
            fStack_1f4 = fStack_144 * fStack_2c4;
            fStack_1f0 = fStack_2c4 * fStack_140;
            fStack_27c = fVar11 * fStack_15c;
            fStack_278 = fStack_158 * fVar11;
            fStack_274 = fStack_154 * fVar11;
            fStack_270 = fVar11 * fStack_150;
            fStack_264 = fStack_27c + fStack_1fc;
            fStack_260 = fStack_278 + fStack_1f8;
            fStack_25c = fStack_274 + fStack_1f4;
            fStack_258 = fStack_270 + fStack_1f0;
            fStack_1ec = fStack_264 + fStack_1dc;
            pfVar10[0xd] = fStack_1ec;
            fStack_1e8 = fStack_260 + fStack_1d8;
            pfVar10[0xe] = fStack_1e8;
            fStack_1e4 = fStack_25c + fStack_1d4;
            pfVar10[0xf] = fStack_1e4;
            fStack_1e0 = fStack_258 + fStack_1d0;
            pfVar10[0x10] = fStack_1e0;
          }
        }
        param_3[10] = (int)pfVar10;
        pfStack_2bc = pfVar10;
        FUN_004baca0(&pfStack_2bc);
        if ((*param_3 == 1) && (param_3[1] == 1)) {
          if (cStack_2d6 != '\0') {
            FUN_00728b20();
          }
          return 1;
        }
      }
      uVar3 = uVar3 + 1;
      fVar11 = local_2c0;
    } while (uVar3 < (ushort)uStack_dc);
  }
  if (cStack_2d6 != '\0') {
    FUN_00728b20();
  }
  return local_2d5;
}



undefined1 FUN_0095c530(float *param_1,float *param_2,int *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  float10 extraout_ST0;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ushort auStack_2f0 [2];
  ushort auStack_2ec [2];
  ushort auStack_2e8 [3];
  char cStack_2e2;
  undefined1 uStack_2e1;
  float local_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float local_2d4;
  float local_2d0;
  float local_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float local_2a0;
  float local_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float local_28c;
  float local_288;
  float local_284;
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
  int aiStack_244 [2];
  undefined1 uStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
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
  int iStack_1fc;
  int iStack_1f8;
  undefined1 uStack_1f4;
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
  float local_1c0;
  float local_1bc;
  float local_1b8;
  int local_1b4;
  undefined4 uStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  undefined1 uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  int iStack_188;
  int iStack_184;
  undefined1 uStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
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
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [8];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [12];
  undefined1 auStack_c8 [12];
  undefined1 auStack_bc [12];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [12];
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  if ((param_3[2] == 0) || (param_4[0x2e] != 0)) {
    local_1c0 = (float)param_4[8];
    local_1bc = (float)param_4[9];
    local_1b8 = (float)param_4[10];
    local_2d4 = local_1c0 - *param_1;
    local_1b4 = param_4[0xb];
    local_2d0 = local_1bc - param_1[1];
    local_2cc = local_1b8 - param_1[2];
    local_2e0 = local_2cc * param_2[2] + *param_2 * local_2d4 + local_2d0 * param_2[1];
    if (local_2e0 < 0.0) {
      return 0;
    }
    iVar10 = FUN_00401f00(0x44);
    if (iVar10 == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = (float)FUN_0095a2d0(param_4);
    }
    param_3[10] = (int)fVar11;
    local_2e0 = fVar11;
    FUN_004baca0(&local_2e0);
    local_2e0 = local_2cc * local_2cc + local_2d4 * local_2d4 + local_2d0 * local_2d0;
    FUN_00982c30();
    fVar16 = (float)extraout_ST0;
    *(float *)((int)fVar11 + 0x14) = fVar16;
    if (param_3[2] != 1) {
      return 1;
    }
    fVar1 = param_2[1];
    fVar2 = param_2[2];
    fVar3 = param_1[1];
    fVar4 = param_1[2];
    *(float *)((int)fVar11 + 8) = *param_1 + fVar16 * *param_2;
    *(float *)((int)fVar11 + 0xc) = fVar3 + fVar16 * fVar1;
    *(float *)((int)fVar11 + 0x10) = fVar16 * fVar2 + fVar4;
    return 1;
  }
  puVar7 = (undefined4 *)(**(code **)(*param_4 + 4))();
  do {
    if (puVar7 == (undefined4 *)0x0) {
      cVar5 = FUN_00405650(&DAT_00b3fcd4,param_4);
      if (cVar5 != '\0') {
        uVar6 = FUN_0095b240(param_1,param_2,param_3,param_4);
        return uVar6;
      }
LAB_0095c5e7:
      fStack_13c = *param_1 - (float)param_4[0x22];
      fStack_138 = param_1[1] - (float)param_4[0x23];
      fStack_134 = param_1[2] - (float)param_4[0x24];
      fStack_2d8 = 1.0 / (float)param_4[0x25];
      pfVar8 = (float *)FUN_00710250(&fStack_220,&fStack_13c,param_4 + 0x19);
      fStack_2bc = fStack_2d8 * pfVar8[1];
      fStack_2c4 = pfVar8[2] * fStack_2d8;
      fStack_118 = fStack_2d8 * *pfVar8;
      fStack_114 = fStack_2bc;
      fStack_110 = fStack_2c4;
      pfVar8 = (float *)FUN_00710250(&fStack_220,param_2,param_4 + 0x19);
      uStack_2e1 = 0;
      fStack_2bc = fStack_2d8 * pfVar8[1];
      fStack_11c = pfVar8[2] * fStack_2d8;
      fStack_124 = fStack_2d8 * *pfVar8;
      fStack_2d8 = fStack_11c;
      fStack_120 = fStack_2bc;
      uVar9 = (**(code **)(*(int *)param_4[0x2d] + 0x5c))();
      fStack_2c4 = (float)param_4[0x2d];
      fStack_2bc = (float)(uVar9 & 0xffff);
      iStack_1fc = 0;
      iStack_1f8 = 0;
      uStack_1f4 = 0;
      fVar11 = *(float *)((int)fStack_2c4 + 0x1c);
      cStack_2e2 = '\0';
      local_2e0 = fVar11;
      if (((fVar11 == 0.0) && (*(int **)((int)fStack_2c4 + 0x34) != (int *)0x0)) &&
         (cVar5 = (**(code **)(**(int **)((int)fStack_2c4 + 0x34) + 0x4c))(), cVar5 != '\0')) {
        cStack_2e2 = FUN_00728ab0(1);
        FUN_00728b60(&iStack_1fc);
      }
      fStack_2d8 = 0.0;
      if (fStack_2bc._0_2_ != 0) {
        do {
          (**(code **)(*(int *)param_4[0x2d] + 0x60))
                    (fStack_2d8,auStack_2f0,auStack_2e8,auStack_2ec);
          uVar9 = (uint)auStack_2f0[0];
          if (fVar11 == 0.0) {
            fStack_250 = *(float *)(uVar9 * iStack_1f8 + iStack_1fc);
            iVar10 = uVar9 * iStack_1f8 + iStack_1fc;
            fStack_24c = *(float *)(iVar10 + 4);
            fStack_248 = *(float *)(iVar10 + 8);
            fStack_268 = *(float *)((uint)auStack_2e8[0] * iStack_1f8 + iStack_1fc);
            iVar10 = (uint)auStack_2e8[0] * iStack_1f8 + iStack_1fc;
            fStack_264 = *(float *)(iVar10 + 4);
            fStack_260 = *(float *)(iVar10 + 8);
            fStack_25c = *(float *)((uint)auStack_2ec[0] * iStack_1f8 + iStack_1fc);
            iVar10 = (uint)auStack_2ec[0] * iStack_1f8 + iStack_1fc;
            fStack_258 = *(float *)(iVar10 + 4);
            fStack_254 = *(float *)(iVar10 + 8);
          }
          else {
            fStack_250 = *(float *)((int)fVar11 + uVar9 * 0xc);
            iVar10 = (int)fVar11 + uVar9 * 0xc;
            fStack_24c = *(float *)(iVar10 + 4);
            fStack_248 = *(float *)(iVar10 + 8);
            fStack_268 = *(float *)((int)fVar11 + (uint)auStack_2e8[0] * 0xc);
            iVar10 = (int)fVar11 + (uint)auStack_2e8[0] * 0xc;
            fStack_264 = *(float *)(iVar10 + 4);
            fStack_260 = *(float *)(iVar10 + 8);
            fStack_25c = *(float *)((int)fVar11 + (uint)auStack_2ec[0] * 0xc);
            iVar10 = (int)fVar11 + (uint)auStack_2ec[0] * 0xc;
            fStack_258 = *(float *)(iVar10 + 4);
            fStack_254 = *(float *)(iVar10 + 8);
          }
          uStack_170 = CONCAT31(uStack_170._1_3_,(char)param_3[4]);
          cVar5 = FUN_0096e5e0(&fStack_118,&fStack_124,&fStack_250,&fStack_268,&fStack_25c,
                               uStack_170,&fStack_238,&uStack_1b0,&fStack_2c8,&fStack_2c0);
          if (cVar5 != '\0') {
            uStack_2e1 = 1;
            iVar10 = FUN_00401f00(0x44);
            if (iVar10 == 0) {
              fVar11 = 0.0;
            }
            else {
              fVar11 = (float)FUN_0095a2d0(param_4);
            }
            if (param_3[3] == 1) {
              pfVar8 = (float *)FUN_007101f0(auStack_c8,&fStack_238);
              fStack_1d0 = (float)param_4[0x25];
              fStack_1d8 = fStack_1d0 * *pfVar8;
              fStack_1d4 = pfVar8[1] * fStack_1d0;
              fStack_1d0 = fStack_1d0 * pfVar8[2];
              fStack_238 = fStack_1d8 + (float)param_4[0x22];
              fStack_234 = (float)param_4[0x23] + fStack_1d4;
              fStack_230 = (float)param_4[0x24] + fStack_1d0;
              fStack_1e4 = fStack_238;
              fStack_1e0 = fStack_234;
              fStack_1dc = fStack_230;
            }
            *(float *)((int)fVar11 + 8) = fStack_238;
            *(float *)((int)fVar11 + 0xc) = fStack_234;
            *(float *)((int)fVar11 + 0x10) = fStack_230;
            *(undefined4 *)((int)fVar11 + 0x14) = uStack_1b0;
            *(undefined2 *)((int)fVar11 + 0x18) = fStack_2d8._0_2_;
            *(ushort *)((int)fVar11 + 0x1a) = auStack_2f0[0];
            *(ushort *)((int)fVar11 + 0x1c) = auStack_2e8[0];
            *(ushort *)((int)fVar11 + 0x1e) = auStack_2ec[0];
            fStack_2dc = 1.0 - (fStack_2c8 + fStack_2c0);
            if ((char)param_3[0xb] == '\0') {
              *(undefined4 *)((int)fVar11 + 0x20) = DAT_00b3fc80;
              *(undefined4 *)((int)fVar11 + 0x24) = DAT_00b3fc84;
            }
            else {
              iStack_1a0 = 0;
              iStack_19c = 0;
              uStack_198 = 0;
              FUN_00728e70(0,&iStack_1a0);
              if (iStack_1a0 == 0) {
                iVar10 = *(int *)(param_4[0x2d] + 0x28);
                if (iVar10 == 0) {
                  *(undefined4 *)((int)fVar11 + 0x20) = DAT_00b3fc80;
                  *(undefined4 *)((int)fVar11 + 0x24) = DAT_00b3fc84;
                }
                else {
                  pfVar8 = (float *)FUN_0095a280(auStack_e4,fStack_2c8,
                                                 iVar10 + (uint)auStack_2e8[0] * 8);
                  pfVar14 = (float *)FUN_0095a280(auStack_dc,fStack_2dc,
                                                  iVar10 + (uint)auStack_2f0[0] * 8);
                  fStack_2b8 = *pfVar8 + *pfVar14;
                  fStack_2b4 = pfVar8[1] + pfVar14[1];
                  pfVar8 = (float *)FUN_0095a280(auStack_ec,fStack_2c0,
                                                 iVar10 + (uint)auStack_2ec[0] * 8);
                  fStack_270 = fStack_2b8 + *pfVar8;
                  fStack_26c = pfVar8[1] + fStack_2b4;
                  *(float *)((int)fVar11 + 0x20) = fStack_270;
                  *(float *)((int)fVar11 + 0x24) = fStack_26c;
                }
              }
              else {
                pfVar8 = (float *)((uint)auStack_2f0[0] * iStack_19c + iStack_1a0);
                pfVar14 = (float *)((uint)auStack_2e8[0] * iStack_19c + iStack_1a0);
                pfVar15 = (float *)((uint)auStack_2ec[0] * iStack_19c + iStack_1a0);
                fStack_2a8 = fStack_2c0 * *pfVar15;
                fStack_2a4 = fStack_2c0 * pfVar15[1];
                fStack_280 = fStack_2c8 * *pfVar14;
                fStack_27c = fStack_2c8 * pfVar14[1];
                fStack_2b0 = fStack_2dc * *pfVar8;
                fStack_2ac = fStack_2dc * pfVar8[1];
                fStack_294 = fStack_2b0 + fStack_280;
                fStack_290 = fStack_2ac + fStack_27c;
                fStack_278 = fStack_294 + fStack_2a8;
                *(float *)((int)fVar11 + 0x20) = fStack_278;
                fStack_274 = fStack_290 + fStack_2a4;
                *(float *)((int)fVar11 + 0x24) = fStack_274;
              }
            }
            if (*(char *)((int)param_3 + 0x2d) == '\0') {
              *(undefined4 *)((int)fVar11 + 0x28) = DAT_00b3f9a8;
              *(undefined4 *)((int)fVar11 + 0x2c) = DAT_00b3f9ac;
              fVar16 = DAT_00b3f9b0;
            }
            else {
              iStack_188 = 0;
              iStack_184 = 0;
              uStack_180 = 0;
              FUN_00728d00(&iStack_188);
              if (iStack_188 == 0) {
                if ((*(char *)((int)param_3 + 0x2e) == '\0') ||
                   (iVar10 = *(int *)(param_4[0x2d] + 0x20), iVar10 == 0)) {
                  local_2a0 = fStack_268 - fStack_250;
                  local_29c = fStack_264 - fStack_24c;
                  local_298 = fStack_260 - fStack_248;
                  local_28c = fStack_25c - fStack_250;
                  local_288 = fStack_258 - fStack_24c;
                  local_284 = fStack_254 - fStack_248;
                  fStack_220 = local_2a0;
                  fStack_21c = local_29c;
                  fStack_218 = local_298;
                  fStack_130 = local_28c;
                  fStack_12c = local_288;
                  fStack_128 = local_284;
                  pfVar8 = (float *)FUN_00498fe0(auStack_b0,&fStack_130);
                }
                else {
                  uVar12 = FUN_0047da10(auStack_bc,fStack_2c0,iVar10 + (uint)auStack_2ec[0] * 0xc);
                  puVar18 = auStack_a4;
                  uVar13 = FUN_0047da10(auStack_d4,fStack_2c8,iVar10 + (uint)auStack_2e8[0] * 0xc,
                                        puVar18,uVar12);
                  puVar17 = auStack_8c;
                  FUN_0047da10(auStack_98,fStack_2dc,iVar10 + (uint)auStack_2f0[0] * 0xc,puVar17,
                               uVar13);
                  FUN_0047d9b0(puVar17,uVar13);
                  pfVar8 = (float *)FUN_0047d9b0(puVar18,uVar12);
                }
                local_2d4 = *pfVar8;
                local_2d0 = pfVar8[1];
                local_2cc = pfVar8[2];
              }
              else {
                fStack_1ac = *(float *)((uint)auStack_2f0[0] * iStack_184 + iStack_188);
                iVar10 = (uint)auStack_2f0[0] * iStack_184 + iStack_188;
                fStack_1a8 = *(float *)(iVar10 + 4);
                fStack_1a4 = *(float *)(iVar10 + 8);
                pfVar8 = (float *)((uint)auStack_2e8[0] * iStack_184 + iStack_188);
                fStack_194 = *pfVar8;
                fStack_190 = pfVar8[1];
                fStack_18c = pfVar8[2];
                fStack_228 = *(float *)((uint)auStack_2ec[0] * iStack_184 + 4 + iStack_188);
                pfVar8 = (float *)((uint)auStack_2ec[0] * iStack_184 + iStack_188);
                fStack_22c = *pfVar8;
                fStack_224 = pfVar8[2];
                fStack_208 = fStack_2c0 * fStack_22c;
                fStack_204 = fStack_228 * fStack_2c0;
                fStack_200 = fStack_2c0 * fStack_224;
                fStack_1cc = fStack_2c8 * fStack_194;
                fStack_1c8 = fStack_190 * fStack_2c8;
                fStack_1c4 = fStack_2c8 * fStack_18c;
                fStack_17c = fStack_2dc * fStack_1ac;
                fStack_178 = fStack_1a8 * fStack_2dc;
                fStack_174 = fStack_2dc * fStack_1a4;
                fStack_214 = fStack_17c + fStack_1cc;
                fStack_210 = fStack_178 + fStack_1c8;
                fStack_20c = fStack_174 + fStack_1c4;
                local_2d4 = fStack_214 + fStack_208;
                local_2d0 = fStack_210 + fStack_204;
                local_2cc = fStack_20c + fStack_200;
                fStack_1f0 = local_2d4;
                fStack_1ec = local_2d0;
                fStack_1e8 = local_2cc;
              }
              FUN_0043f350();
              if (param_3[3] == 1) {
                pfVar8 = (float *)FUN_007101f0(&local_1c0,&local_2d4);
                local_2d4 = *pfVar8;
                local_2d0 = pfVar8[1];
                local_2cc = pfVar8[2];
              }
              *(float *)((int)fVar11 + 0x28) = local_2d4;
              *(float *)((int)fVar11 + 0x2c) = local_2d0;
              fVar16 = local_2cc;
            }
            *(float *)((int)fVar11 + 0x30) = fVar16;
            if (*(char *)((int)param_3 + 0x2f) == '\0') {
              *(undefined4 *)((int)fVar11 + 0x34) = DAT_00b25ae0;
              *(undefined4 *)((int)fVar11 + 0x38) = DAT_00b25ae4;
              *(undefined4 *)((int)fVar11 + 0x3c) = DAT_00b25ae8;
              *(undefined4 *)((int)fVar11 + 0x40) = DAT_00b25aec;
            }
            else {
              aiStack_244[0] = 0;
              aiStack_244[1] = 0;
              uStack_23c = 0;
              FUN_00728db0(aiStack_244);
              if (aiStack_244[0] == 0) {
                iVar10 = *(int *)(param_4[0x2d] + 0x24);
                if (iVar10 == 0) {
                  *(undefined4 *)((int)fVar11 + 0x34) = DAT_00b25ae0;
                  *(undefined4 *)((int)fVar11 + 0x38) = DAT_00b25ae4;
                  *(undefined4 *)((int)fVar11 + 0x3c) = DAT_00b25ae8;
                  *(undefined4 *)((int)fVar11 + 0x40) = DAT_00b25aec;
                }
                else {
                  uVar12 = FUN_004bfbd0(auStack_70,fStack_2c0,(uint)auStack_2ec[0] * 0x10 + iVar10);
                  puVar7 = &uStack_10c;
                  uVar13 = FUN_004bfbd0(auStack_50,fStack_2c8,(uint)auStack_2e8[0] * 0x10 + iVar10,
                                        puVar7,uVar12);
                  puVar18 = auStack_30;
                  FUN_004bfbd0(auStack_10,fStack_2dc,(uint)auStack_2f0[0] * 0x10 + iVar10,puVar18,
                               uVar13);
                  FUN_004bfb30(puVar18,uVar13);
                  FUN_004bfb30(puVar7,uVar12);
                  *(undefined4 *)((int)fVar11 + 0x34) = uStack_10c;
                  *(undefined4 *)((int)fVar11 + 0x38) = uStack_108;
                  *(undefined4 *)((int)fVar11 + 0x3c) = uStack_104;
                  *(undefined4 *)((int)fVar11 + 0x40) = uStack_100;
                }
              }
              else {
                uStack_16c = 0;
                uStack_168 = 0;
                uStack_164 = 0;
                uStack_160 = 0;
                uStack_14c = 0;
                uStack_148 = 0;
                uStack_144 = 0;
                uStack_140 = 0;
                uStack_15c = 0;
                uStack_158 = 0;
                uStack_154 = 0;
                uStack_150 = 0;
                FUN_004c1440(auStack_2f0[0],&uStack_16c);
                FUN_004c1440(auStack_2e8[0],&uStack_14c);
                FUN_004c1440(auStack_2ec[0],&uStack_15c);
                uVar12 = FUN_004bfbd0(auStack_80,fStack_2c0,&uStack_15c);
                puVar7 = &uStack_fc;
                uVar13 = FUN_004bfbd0(auStack_60,fStack_2c8,&uStack_14c,puVar7,uVar12);
                puVar18 = auStack_20;
                FUN_004bfbd0(auStack_40,fStack_2dc,&uStack_16c,puVar18,uVar13);
                FUN_004bfb30(puVar18,uVar13);
                FUN_004bfb30(puVar7,uVar12);
                *(undefined4 *)((int)fVar11 + 0x34) = uStack_fc;
                *(undefined4 *)((int)fVar11 + 0x38) = uStack_f8;
                *(undefined4 *)((int)fVar11 + 0x3c) = uStack_f4;
                *(undefined4 *)((int)fVar11 + 0x40) = uStack_f0;
              }
            }
            param_3[10] = (int)fVar11;
            fStack_2dc = fVar11;
            FUN_004baca0(&fStack_2dc);
            fVar11 = local_2e0;
            if ((*param_3 == 1) && (param_3[1] == 1)) {
              if (cStack_2e2 == '\0') {
                return 1;
              }
              FUN_00728b20();
              return 1;
            }
          }
          fStack_2d8 = (float)((int)fStack_2d8 + 1);
        } while (SUB42(fStack_2d8,0) < fStack_2bc._0_2_);
      }
      if (cStack_2e2 != '\0') {
        FUN_00728b20();
      }
      return uStack_2e1;
    }
    if (puVar7 == &DAT_00b3fd04) {
      if (*(short *)(param_4[0x2d] + 0x44) == 1) {
        uVar6 = FUN_0095a380(param_1,param_2,param_3,param_4);
        return uVar6;
      }
      goto LAB_0095c5e7;
    }
    puVar7 = (undefined4 *)puVar7[1];
  } while( true );
}



uint FUN_0095d540(undefined4 param_1,undefined4 param_2,uint param_3,int *param_4)

{
  float10 fVar1;
  uint in_EAX;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 extraout_var;
  undefined4 uVar5;
  undefined4 *puVar6;
  float10 fVar7;
  float10 extraout_ST0;
  undefined1 auStack_18 [12];
  undefined1 auStack_c [12];
  
  if ((param_4 == (int *)0x0) ||
     ((*(char *)(param_3 + 0x11) != '\0' && (in_EAX = param_3, (*(byte *)(param_4 + 6) & 1) != 0))))
  {
    return in_EAX & 0xffffff00;
  }
  uVar2 = (**(code **)(*param_4 + 8))();
  if ((uVar2 != 0) && ((*(byte *)(uVar2 + 0x18) >> 6 & 1) != 0)) {
    return uVar2 & 0xffffff00;
  }
  uVar3 = FUN_0096e4c0(param_4,param_1,param_2);
  if ((char)uVar3 != '\0') {
    if (uVar2 != 0) {
      uVar2 = FUN_0095d730(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    iVar4 = (**(code **)(*param_4 + 0x10))();
    if (iVar4 != 0) {
      uVar2 = FUN_0095c530(param_1,param_2,param_3,param_4);
      return uVar2;
    }
    uVar3 = 0;
    if ((DAT_00ba9a6c != '\0') && (uVar3 = FUN_00405650(&DAT_00b4021c,param_4), (char)uVar3 != '\0')
       ) {
      FUN_004121a0(auStack_18,param_1);
      fVar7 = (float10)FUN_0047d9e0(auStack_18);
      fVar1 = (float10)0.0;
      uVar3 = CONCAT22(extraout_var,
                       (ushort)(fVar7 < fVar1) << 8 | (ushort)(NAN(fVar7) || NAN(fVar1)) << 10 |
                       (ushort)(fVar7 == fVar1) << 0xe);
      if (fVar7 >= fVar1) {
        iVar4 = FUN_00401f00(0x44);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_0095a2d0(param_4);
        }
        FUN_0095a360(iVar4);
        uVar3 = FUN_00404c90();
        *(float *)(iVar4 + 0x14) = (float)extraout_ST0;
        if (*(int *)(param_3 + 8) == 1) {
          uVar5 = FUN_004707b0(auStack_18,(float)extraout_ST0);
          puVar6 = (undefined4 *)FUN_0047d9b0(auStack_c,uVar5);
          *(undefined4 *)(iVar4 + 8) = *puVar6;
          *(undefined4 *)(iVar4 + 0xc) = puVar6[1];
          *(undefined4 *)(iVar4 + 0x10) = puVar6[2];
          return (uint)puVar6 & 0xffffff00;
        }
      }
    }
  }
  return uVar3 & 0xffffff00;
}



undefined1 FUN_0095d6c0(undefined4 param_1,undefined4 param_2,int *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  
  iVar1 = *(int *)(param_4 + 0xe0);
  uVar3 = 0;
  if (-1 < iVar1) {
    if (((*param_3 == 1) && (param_3[1] == 1)) && ((short)param_3[9] != 0)) {
      return 1;
    }
    if (((-1 < iVar1) && (iVar1 < (int)(uint)*(ushort *)(param_4 + 0xb6))) &&
       (iVar1 = *(int *)(*(int *)(param_4 + 0xb0) + iVar1 * 4), iVar1 != 0)) {
      cVar2 = FUN_0095d540(param_1,param_2,param_3,iVar1);
      if (cVar2 != '\0') {
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}



uint FUN_0095d730(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  
  piVar2 = param_4;
  piVar1 = param_3;
  if ((param_3[2] == 0) && (*param_3 == 1)) {
    iVar4 = FUN_00401f00(0x44);
    if (iVar4 == 0) {
      param_3 = (int *)0x0;
    }
    else {
      param_3 = (int *)FUN_0095a2d0(param_4);
    }
    piVar1[10] = (int)param_3;
    FUN_004baca0(&param_3);
    return 1;
  }
  if (param_4 != (int *)0x0) {
    for (puVar5 = (undefined4 *)(**(code **)(*param_4 + 4))(); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)puVar5[1]) {
      if (puVar5 == &DAT_00b3fd70) {
        uVar6 = FUN_0095d6c0(param_1,param_2,piVar1,piVar2);
        return uVar6;
      }
    }
  }
  uVar6 = (uint)*(ushort *)((int)piVar2 + 0xb6);
  uVar7 = 0;
  param_3 = (int *)((uint)param_3 & 0xffffff00);
  if (uVar6 != 0) {
    do {
      if (((*piVar1 == 1) && (piVar1[1] == 1)) && ((short)piVar1[9] != 0)) {
        return 1;
      }
      if (((uVar7 < uVar6) && (iVar4 = *(int *)(piVar2[0x2c] + uVar7 * 4), iVar4 != 0)) &&
         (cVar3 = FUN_0095d540(param_1,param_2,piVar1,iVar4), cVar3 != '\0')) {
        param_3 = (int *)CONCAT31(param_3._1_3_,1);
      }
      uVar6 = (uint)*(ushort *)((int)piVar2 + 0xb6);
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  return (uint)param_3 & 0xff;
}



void FUN_0095d920(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 )

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0xc))();
  iVar3 = (**(code **)(*param_4 + 0xc))();
  pcVar1 = *(code **)(DAT_00ba9aa0 + (iVar3 + iVar2 * 6) * 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  iVar2 = (**(code **)(*param_4 + 0xc))();
  iVar3 = (**(code **)(*param_2 + 0xc))();
  (**(code **)(DAT_00ba9aa0 + (iVar3 + iVar2 * 6) * 4))(param_1,param_4,param_5,param_2,param_3);
  return;
}



void FUN_0095d9b0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(code **)(*param_2 + 0xc))();
  iVar3 = (**(code **)(*param_4 + 0xc))();
  pcVar1 = *(code **)(DAT_00ba9aa4 + (iVar3 + iVar2 * 6) * 4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    return;
  }
  iVar2 = (**(code **)(*param_4 + 0xc))();
  iVar3 = (**(code **)(*param_2 + 0xc))();
  (**(code **)(DAT_00ba9aa4 + (iVar3 + iVar2 * 6) * 4))
            (param_1,param_4,param_5,param_2,param_3,param_6,param_7,param_8,param_10,param_9);
  return;
}



void FUN_0095da70(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))();
  (**(code **)(DAT_00ba9aa8 + iVar1 * 4))(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void FUN_0095dab0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))();
  (**(code **)(DAT_00ba9aac + iVar1 * 4))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
             param_11,param_12);
  return;
}



undefined4 FUN_0095db10(undefined4 param_1)

{
  undefined4 uVar1;
  uint local_4;
  
  FUN_006be990(param_1,&local_4);
  if (local_4 < 6) {
    uVar1 = (**(code **)(&DAT_00ba9a88 + local_4 * 4))(param_1);
    return uVar1;
  }
  return 0;
}



void FUN_0095db50(undefined4 param_1)

{
  int *in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = (**(code **)(*in_ECX + 0xc))();
  FUN_006d3660(param_1,&uStack_4);
  return;
}



void FUN_0095db70(undefined4 *param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  float10 fVar5;
  
  uVar2 = param_1[1];
  fVar1 = (float)param_1[3];
  uVar3 = *param_1;
  uVar4 = param_1[2];
  fVar5 = (float10)FUN_0043f350();
  *(undefined4 *)(in_ECX + 4) = uVar3;
  *(undefined4 *)(in_ECX + 8) = uVar2;
  *(undefined4 *)(in_ECX + 0xc) = uVar4;
  *(float *)(in_ECX + 0x10) = (float)((float10)fVar1 / fVar5);
  return;
}



undefined4 FUN_0095dbe0(int *param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = (**(code **)(*param_1 + 0xc))();
  if (iVar2 == 5) {
    cVar1 = FUN_0073b770(in_ECX + 4);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



void FUN_0095dc20(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_007101f0(&local_c,param_1 + 4);
  fVar1 = *(float *)(param_2 + 0x28);
  fVar2 = *(float *)(param_2 + 0x24);
  fVar3 = *(float *)(param_2 + 0x2c);
  fVar4 = *(float *)(param_2 + 0x30);
  fVar5 = *(float *)(param_1 + 0x10);
  *(float *)(in_ECX + 4) = local_c;
  *(float *)(in_ECX + 8) = local_8;
  *(float *)(in_ECX + 0xc) = local_4;
  *(float *)(in_ECX + 0x10) = fVar4 * fVar5 + fVar3 * local_4 + fVar2 * local_c + fVar1 * local_8;
  return;
}



uint FUN_0095dca0(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(param_4 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_4 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_4 + 8) * *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x10);
  fVar2 = -*(float *)(param_4 + 0x10);
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return CONCAT31((uint3)(byte)(fVar2 < fVar1 |
                                  (byte)((ushort)((ushort)(NAN(fVar2) || NAN(fVar1)) << 10) >> 8) |
                                 (byte)((ushort)((ushort)(fVar2 == fVar1) << 0xe) >> 8)),1);
  }
  fVar3 = *(float *)(param_2 + 0xc) * (param_5[2] - param_3[2]) +
          (*param_5 - *param_3) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * (param_5[1] - param_3[1]);
  if (fVar3 < 0.0 != (fVar3 == 0.0)) {
    return (uint)(ushort)((ushort)(fVar3 < 0.0) << 8 | (ushort)NAN(fVar3) << 10 |
                         (ushort)(fVar3 == 0.0) << 0xe);
  }
  fVar1 = fVar3 * param_1 + fVar1;
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return 1;
  }
  return 0;
}



uint FUN_0095dd70(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*(float *)(param_4 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_4 + 4) * *(float *)(param_2 + 4) +
          *(float *)(param_4 + 8) * *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x10);
  fVar2 = -(ABS((*(float *)(param_4 + 0x24) * *(float *)(param_2 + 0xc) +
                *(float *)(param_4 + 0x1c) * *(float *)(param_2 + 4) +
                *(float *)(param_4 + 0x20) * *(float *)(param_2 + 8)) * *(float *)(param_4 + 0x38))
            + ABS((*(float *)(param_4 + 0x18) * *(float *)(param_2 + 0xc) +
                  *(float *)(param_4 + 0x10) * *(float *)(param_2 + 4) +
                  *(float *)(param_4 + 0x14) * *(float *)(param_2 + 8)) * *(float *)(param_4 + 0x34)
                 ) + ABS((*(float *)(param_4 + 0x30) * *(float *)(param_2 + 0xc) +
                         *(float *)(param_4 + 0x28) * *(float *)(param_2 + 4) +
                         *(float *)(param_4 + 0x2c) * *(float *)(param_2 + 8)) *
                         *(float *)(param_4 + 0x3c)));
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return CONCAT31((uint3)(byte)(fVar2 < fVar1 |
                                  (byte)((ushort)((ushort)(NAN(fVar2) || NAN(fVar1)) << 10) >> 8) |
                                 (byte)((ushort)((ushort)(fVar2 == fVar1) << 0xe) >> 8)),1);
  }
  fVar3 = (param_5[2] - param_3[2]) * *(float *)(param_2 + 0xc) +
          (*param_5 - *param_3) * *(float *)(param_2 + 4) +
          *(float *)(param_2 + 8) * (param_5[1] - param_3[1]);
  if (fVar3 < 0.0 != (fVar3 == 0.0)) {
    return (uint)(ushort)((ushort)(fVar3 < 0.0) << 8 | (ushort)NAN(fVar3) << 10 |
                         (ushort)(fVar3 == 0.0) << 0xe);
  }
  fVar1 = fVar3 * param_1 + fVar1;
  if (fVar2 < fVar1 != (fVar2 == fVar1)) {
    return 1;
  }
  return 0;
}



uint FUN_0095dee0(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (*(float *)(param_4 + 0x28) * *(float *)(param_2 + 0xc) +
          *(float *)(param_4 + 0x20) * *(float *)(param_2 + 4) +
          *(float *)(param_4 + 0x24) * *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x10);
  fVar3 = -*(float *)(param_4 + 0x38);
  bVar1 = fVar3 < fVar2;
  if (bVar1 == (fVar3 == fVar2)) {
    fVar4 = *(float *)(param_4 + 0x34) * *(float *)(param_2 + 0xc) +
            *(float *)(param_4 + 0x2c) * *(float *)(param_2 + 4) +
            *(float *)(param_4 + 0x30) * *(float *)(param_2 + 8) + fVar2;
    bVar1 = false;
    if (fVar4 < fVar3) {
      fVar3 = *(float *)(param_2 + 0xc) * (param_5[2] - param_3[2]) +
              (*param_5 - *param_3) * *(float *)(param_2 + 4) +
              *(float *)(param_2 + 8) * (param_5[1] - param_3[1]);
      if (fVar3 < 0.0 != (fVar3 == 0.0)) {
        return (uint)(ushort)((ushort)(fVar3 < 0.0) << 8 | (ushort)NAN(fVar3) << 10 |
                             (ushort)(fVar3 == 0.0) << 0xe);
      }
      fVar3 = -(fVar3 * param_1 + *(float *)(param_4 + 0x38));
      if ((fVar3 < fVar2 == (fVar3 == fVar2)) && (fVar4 < fVar3)) {
        return 0;
      }
      return 1;
    }
  }
  return CONCAT31((uint3)bVar1,1);
}



uint FUN_0095e000(float param_1,int param_2,float *param_3,int param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_4 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_2 + 4) * *(float *)(param_4 + 4) +
          *(float *)(param_4 + 8) * *(float *)(param_2 + 8);
  bVar1 = fVar2 < -0.999999;
  if (fVar2 <= -0.999999) {
    bVar1 = false;
    if (-*(float *)(param_4 + 0x10) < *(float *)(param_2 + 0x10)) {
      fVar2 = *(float *)(param_2 + 0xc) * (param_5[2] - param_3[2]) +
              *(float *)(param_2 + 8) * (param_5[1] - param_3[1]) +
              *(float *)(param_2 + 4) * (*param_5 - *param_3);
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        return (uint)(ushort)((ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == 0.0) << 0xe);
      }
      fVar2 = param_1 * fVar2 - *(float *)(param_4 + 0x10);
      if (*(float *)(param_2 + 0x10) < fVar2 != (*(float *)(param_2 + 0x10) == fVar2)) {
        return 1;
      }
      return 0;
    }
  }
  return CONCAT31((uint3)bVar1,1);
}



uint FUN_0095e0e0(float param_1,int param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = (param_4[2] * *(float *)(param_2 + 0xc) +
          *param_4 * *(float *)(param_2 + 4) + param_4[1] * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  if (fVar1 < 0.0) {
    fVar3 = (param_5[2] * *(float *)(param_2 + 0xc) +
            *param_5 * *(float *)(param_2 + 4) + param_5[1] * *(float *)(param_2 + 8)) -
            *(float *)(param_2 + 0x10);
    if (fVar3 >= 0.0) {
      return CONCAT31((uint3)(fVar3 < 0.0),1);
    }
    fVar4 = (param_6[2] * *(float *)(param_2 + 0xc) +
            *param_6 * *(float *)(param_2 + 4) + param_6[1] * *(float *)(param_2 + 8)) -
            *(float *)(param_2 + 0x10);
    if (fVar4 < 0.0) {
      fVar2 = *(float *)(param_2 + 0xc) * (param_7[2] - param_3[2]) +
              *(float *)(param_2 + 4) * (*param_7 - *param_3) +
              *(float *)(param_2 + 8) * (param_7[1] - param_3[1]);
      if (fVar2 < 0.0 != (fVar2 == 0.0)) {
        return (uint)(ushort)((ushort)(fVar2 < 0.0) << 8 | (ushort)NAN(fVar2) << 10 |
                             (ushort)(fVar2 == 0.0) << 0xe);
      }
      fVar2 = -param_1 * fVar2;
      if (fVar2 < fVar1 != (fVar2 == fVar1)) {
        return 1;
      }
      if ((fVar3 < fVar2) && (fVar2 < fVar4 == (fVar2 == fVar4))) {
        return 0;
      }
      return 1;
    }
  }
  return 1;
}



undefined2
FUN_0095e250(float param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
            float *param_7,char param_8,float *param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar5 = (*(float *)(param_4 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_2 + 4) * *(float *)(param_4 + 4) +
          *(float *)(param_4 + 8) * *(float *)(param_2 + 8)) - *(float *)(param_2 + 0x10);
  fVar1 = -*(float *)(param_4 + 0x10);
  if (fVar1 < fVar5 != (fVar1 == fVar5)) {
    *param_6 = 0.0;
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 0xc);
    fVar3 = *(float *)(param_4 + 8);
    fVar4 = *(float *)(param_4 + 0xc);
    *param_7 = *(float *)(param_4 + 4) - *(float *)(param_2 + 4) * fVar5;
    param_7[1] = fVar3 - fVar1 * fVar5;
    param_7[2] = fVar4 - fVar5 * fVar2;
    if (param_8 != '\0') {
      *param_10 = *(float *)(param_2 + 4);
      param_10[1] = *(float *)(param_2 + 8);
      param_10[2] = *(float *)(param_2 + 0xc);
      fVar5 = param_10[1];
      fVar1 = param_10[2];
      *param_9 = -*param_10;
      param_9[1] = -fVar5;
      param_9[2] = -fVar1;
    }
    return 1;
  }
  fVar2 = *(float *)(param_2 + 0xc) * (param_5[2] - param_3[2]) +
          *(float *)(param_2 + 8) * (param_5[1] - param_3[1]) +
          *(float *)(param_2 + 4) * (*param_5 - *param_3);
  if ((fVar2 < 0.0 == (fVar2 == 0.0)) && (fVar1 <= fVar2 * param_1 + fVar5)) {
    *param_6 = -((*(float *)(param_4 + 0x10) + fVar5) / fVar2);
    if (param_8 != '\0') {
      *param_10 = *(float *)(param_2 + 4);
      param_10[1] = *(float *)(param_2 + 8);
      param_10[2] = *(float *)(param_2 + 0xc);
      fVar5 = param_10[1];
      fVar1 = param_10[2];
      *param_9 = -*param_10;
      param_9[1] = -fVar5;
      param_9[2] = -fVar1;
    }
    fVar5 = *(float *)(param_4 + 0x10);
    fVar1 = param_10[1];
    fVar2 = param_10[2];
    fVar3 = *param_6;
    fVar4 = param_5[1];
    fVar6 = param_5[2];
    fVar7 = *(float *)(param_4 + 8);
    fVar8 = *(float *)(param_4 + 0xc);
    *param_7 = fVar3 * *param_5 + *(float *)(param_4 + 4) + fVar5 * *param_10;
    param_7[1] = fVar7 + fVar3 * fVar4 + fVar1 * fVar5;
    param_7[2] = fVar8 + fVar3 * fVar6 + fVar5 * fVar2;
    return 1;
  }
  return 0;
}



undefined4
FUN_0095e4d0(float param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
            float *param_7,char param_8,float *param_9,float *param_10)

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
  float local_c;
  float local_8;
  
  fVar1 = *(float *)(param_2 + 8);
  fVar2 = *(float *)(param_2 + 4);
  fVar3 = *(float *)(param_2 + 0xc);
  fVar4 = (*(float *)(param_4 + 0x18) * fVar3 +
          *(float *)(param_4 + 0x10) * fVar2 + *(float *)(param_4 + 0x14) * fVar1) *
          *(float *)(param_4 + 0x34);
  fVar8 = (*(float *)(param_4 + 0x24) * fVar3 +
          *(float *)(param_4 + 0x1c) * fVar2 + *(float *)(param_4 + 0x20) * fVar1) *
          *(float *)(param_4 + 0x38);
  fVar1 = (fVar3 * *(float *)(param_4 + 0x30) +
          *(float *)(param_4 + 0x28) * fVar2 + *(float *)(param_4 + 0x2c) * fVar1) *
          *(float *)(param_4 + 0x3c);
  fVar3 = ABS(fVar8);
  fVar9 = ABS(fVar4);
  fVar10 = ABS(fVar1);
  fVar5 = fVar9 + fVar3 + fVar10;
  fVar6 = (*(float *)(param_4 + 0xc) * *(float *)(param_2 + 0xc) +
          *(float *)(param_4 + 4) * fVar2 + *(float *)(param_4 + 8) * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  fVar7 = -fVar5;
  if (fVar7 < fVar6 == (fVar7 == fVar6)) {
    fVar2 = (*param_5 - *param_3) * fVar2 + (param_5[1] - param_3[1]) * *(float *)(param_2 + 8) +
            (param_5[2] - param_3[2]) * *(float *)(param_2 + 0xc);
    if (fVar2 < 0.0 != (fVar2 == 0.0)) {
      return 0;
    }
    if (param_1 * fVar2 + fVar6 < fVar7) {
      return 0;
    }
    fVar11 = -((fVar5 + fVar6) / fVar2);
    *param_6 = fVar11;
    fVar2 = param_5[1];
    fVar5 = param_5[2];
    fVar6 = *(float *)(param_4 + 8);
    fVar7 = *(float *)(param_4 + 0xc);
    *param_7 = *(float *)(param_4 + 4) + *param_5 * fVar11;
    param_7[1] = fVar2 * fVar11 + fVar6;
    param_7[2] = fVar11 * fVar5 + fVar7;
    if (0.001 < fVar9) {
      fVar2 = *(float *)(param_4 + 0x34);
      fVar9 = *(float *)(param_4 + 0x10) * fVar2;
      if (fVar4 <= 0.0) {
        fVar4 = *(float *)(param_4 + 0x14);
        fVar5 = *(float *)(param_4 + 0x18);
        *param_7 = *param_7 - fVar9;
        param_7[1] = param_7[1] - fVar4 * fVar2;
        fVar2 = param_7[2] - fVar2 * fVar5;
      }
      else {
        fVar4 = *(float *)(param_4 + 0x14);
        fVar5 = *(float *)(param_4 + 0x18);
        *param_7 = *param_7 + fVar9;
        param_7[1] = param_7[1] + fVar4 * fVar2;
        fVar2 = fVar2 * fVar5 + param_7[2];
      }
      param_7[2] = fVar2;
    }
    if (0.001 < fVar3) {
      fVar2 = *(float *)(param_4 + 0x38);
      fVar3 = *(float *)(param_4 + 0x1c) * fVar2;
      if (fVar8 <= 0.0) {
        fVar4 = *(float *)(param_4 + 0x20);
        fVar8 = *(float *)(param_4 + 0x24);
        *param_7 = *param_7 - fVar3;
        param_7[1] = param_7[1] - fVar4 * fVar2;
        fVar2 = param_7[2] - fVar2 * fVar8;
      }
      else {
        fVar4 = *(float *)(param_4 + 0x20);
        fVar8 = *(float *)(param_4 + 0x24);
        *param_7 = *param_7 + fVar3;
        param_7[1] = param_7[1] + fVar4 * fVar2;
        fVar2 = fVar2 * fVar8 + param_7[2];
      }
      param_7[2] = fVar2;
    }
    if (0.001 < fVar10) {
      fVar2 = *(float *)(param_4 + 0x3c);
      fVar3 = *(float *)(param_4 + 0x28) * fVar2;
      if (fVar1 <= 0.0) {
        fVar1 = *(float *)(param_4 + 0x2c);
        fVar4 = *(float *)(param_4 + 0x30);
        *param_7 = *param_7 - fVar3;
        param_7[1] = param_7[1] - fVar1 * fVar2;
        param_7[2] = param_7[2] - fVar2 * fVar4;
      }
      else {
        fVar1 = *(float *)(param_4 + 0x2c);
        fVar4 = *(float *)(param_4 + 0x30);
        *param_7 = *param_7 + fVar3;
        param_7[1] = param_7[1] + fVar1 * fVar2;
        param_7[2] = fVar2 * fVar4 + param_7[2];
      }
    }
    if (param_8 == '\0') {
      return 1;
    }
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 0xc);
    *param_9 = -*(float *)(param_2 + 4);
    param_9[1] = -fVar1;
    param_9[2] = -fVar2;
    local_c = *param_7 - *(float *)(param_4 + 4);
    local_8 = param_7[1] - *(float *)(param_4 + 8);
    fVar1 = param_7[2] - *(float *)(param_4 + 0xc);
    param_9 = param_10;
  }
  else {
    *param_6 = 0.0;
    fVar1 = *(float *)(param_2 + 8);
    fVar2 = *(float *)(param_2 + 0xc);
    fVar3 = *(float *)(param_4 + 8);
    fVar4 = *(float *)(param_4 + 0xc);
    *param_7 = *(float *)(param_4 + 4) - *(float *)(param_2 + 4) * fVar6;
    param_7[1] = fVar3 - fVar1 * fVar6;
    param_7[2] = fVar4 - fVar6 * fVar2;
    if (param_8 == '\0') {
      return 1;
    }
    *param_10 = *(float *)(param_2 + 4);
    param_10[1] = *(float *)(param_2 + 8);
    param_10[2] = *(float *)(param_2 + 0xc);
    local_c = -*param_10;
    local_8 = -param_10[1];
    fVar1 = -param_10[2];
  }
  *param_9 = local_c;
  param_9[1] = local_8;
  param_9[2] = fVar1;
  return 1;
}



undefined4
FUN_0095e980(float param_1,int param_2,float *param_3,int param_4,float *param_5,float *param_6,
            float *param_7,undefined4 param_8,float *param_9,float *param_10)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c [3];
  float local_20 [3];
  undefined1 local_14 [4];
  float local_10;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  pfVar8 = (float *)(param_4 + 0x20);
  pfVar9 = (float *)(param_2 + 4);
  pfVar1 = (float *)(param_4 + 0x2c);
  fVar3 = (*(float *)(param_4 + 0x28) * *(float *)(param_2 + 0xc) +
          *pfVar8 * *pfVar9 + *(float *)(param_4 + 0x24) * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  local_44 = *pfVar8 + *pfVar1;
  local_40 = *(float *)(param_4 + 0x30) + *(float *)(param_4 + 0x24);
  local_3c = *(float *)(param_4 + 0x34) + *(float *)(param_4 + 0x28);
  fVar2 = (*(float *)(param_2 + 0xc) * local_3c +
          *(float *)(param_2 + 8) * local_40 + *pfVar9 * local_44) - *(float *)(param_2 + 0x10);
  if (((fVar3 < 0.0) && (0.0 < fVar2)) || ((0.0 < fVar3 && (fVar2 < 0.0)))) {
    *param_6 = 0.0;
    fVar3 = fVar3 / (fVar3 - fVar2);
    fVar2 = *(float *)(param_4 + 0x34);
    local_34 = *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x30) * fVar3;
    local_30 = *(float *)(param_4 + 0x28);
    *param_7 = *pfVar8 + fVar3 * *pfVar1;
    local_30 = local_30 + fVar3 * fVar2;
LAB_0095ee8f:
    param_7[1] = local_34;
    param_7[2] = local_30;
  }
  else {
    fVar4 = -*(float *)(param_4 + 0x38);
    if (fVar4 < fVar3 != (fVar4 == fVar3)) {
      *param_6 = 0.0;
      FUN_0096c420(0x3f800000,&DAT_00b3f9a8);
      local_4 = *(undefined4 *)(param_4 + 0x38);
      if (-*(float *)(param_4 + 0x38) < fVar2 == (-*(float *)(param_4 + 0x38) == fVar2)) {
        local_10 = *pfVar8;
        local_c = *(float *)(param_4 + 0x24);
        local_8 = *(float *)(param_4 + 0x28);
        uVar6 = FUN_0095e250(param_1,param_2,param_3,local_14,param_5,param_6,param_7,param_8,
                             param_9,param_10);
        return uVar6;
      }
      local_10 = *(float *)(param_4 + 4);
      local_c = *(float *)(param_4 + 8);
      local_8 = *(float *)(param_4 + 0xc);
      uVar6 = FUN_0095e250(param_1,param_2,param_3,local_14,param_5,param_6,param_7,param_8,param_9,
                           param_10);
      return uVar6;
    }
    if (fVar4 < fVar2 != (fVar4 == fVar2)) {
      *param_6 = 0.0;
      FUN_0096c420(0x3f800000,&DAT_00b3f9a8);
      local_4 = *(undefined4 *)(param_4 + 0x38);
      local_38 = *pfVar8 + *(float *)(param_4 + 0x2c);
      local_34 = *(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x30);
      local_30 = *(float *)(param_4 + 0x28) + *(float *)(param_4 + 0x34);
      local_10 = local_38;
      local_c = local_34;
      local_8 = local_30;
      uVar6 = FUN_0095e250(param_1,param_2,param_3,local_14,param_5,param_6,param_7,param_8,param_9,
                           param_10);
      return uVar6;
    }
    local_38 = *param_5 - *param_3;
    local_34 = param_5[1] - param_3[1];
    local_30 = param_5[2] - param_3[2];
    fVar4 = *(float *)(param_2 + 0xc) * local_30 +
            *pfVar9 * local_38 + *(float *)(param_2 + 8) * local_34;
    if ((fVar4 < 0.0 != (fVar4 == 0.0)) ||
       ((fVar5 = -(fVar4 * param_1 + *(float *)(param_4 + 0x38)), fVar5 < fVar3 == (fVar5 == fVar3)
        && (fVar5 < fVar2 == (fVar5 == fVar2))))) {
      return 0;
    }
    if (fVar3 <= fVar2 + 1e-06) {
      fVar4 = -((fVar2 + *(float *)(param_4 + 0x38)) / fVar4);
      if (fVar2 <= fVar3 + 1e-06) {
        *param_6 = fVar4;
        local_38 = *pfVar1 * 0.5;
        local_34 = *(float *)(param_4 + 0x30) * 0.5;
        local_30 = *(float *)(param_4 + 0x34) * 0.5;
        local_44 = *pfVar8 + local_38;
        local_40 = *(float *)(param_4 + 0x24) + local_34;
        local_3c = *(float *)(param_4 + 0x28) + local_30;
        pfVar8 = (float *)FUN_0047da10(local_14,fVar4,param_5);
        local_38 = *pfVar8 + local_44;
        local_34 = pfVar8[1] + local_40;
        local_30 = pfVar8[2] + local_3c;
        pfVar8 = (float *)FUN_004707b0(local_20,*(undefined4 *)(param_4 + 0x38));
        local_34 = pfVar8[1] + local_34;
        local_30 = pfVar8[2] + local_30;
        *param_7 = *pfVar8 + local_38;
        goto LAB_0095ee8f;
      }
      *param_6 = fVar4;
      uVar6 = FUN_004707b0(local_20,*(undefined4 *)(param_4 + 0x38));
      pfVar8 = local_2c;
      uVar7 = FUN_0047da10(&local_38,fVar4,param_5,pfVar8,uVar6);
      pfVar10 = &local_44;
      FUN_0047d9b0(local_14,pfVar1);
    }
    else {
      fVar3 = -((fVar3 + *(float *)(param_4 + 0x38)) / fVar4);
      *param_6 = fVar3;
      uVar6 = FUN_004707b0(&local_38,*(undefined4 *)(param_4 + 0x38));
      pfVar8 = &local_44;
      uVar7 = FUN_0047da10(local_2c,fVar3,param_5,pfVar8,uVar6);
      pfVar10 = local_20;
    }
    FUN_0047d9b0(pfVar10,uVar7);
    pfVar8 = (float *)FUN_0047d9b0(pfVar8,uVar6);
    *param_7 = *pfVar8;
    param_7[1] = pfVar8[1];
    param_7[2] = pfVar8[2];
  }
  if ((char)param_8 != '\0') {
    *param_10 = *pfVar9;
    param_10[1] = *(float *)(param_2 + 8);
    param_10[2] = *(float *)(param_2 + 0xc);
    fVar3 = param_10[1];
    fVar2 = param_10[2];
    *param_9 = -*param_10;
    param_9[1] = -fVar3;
    param_9[2] = -fVar2;
  }
  return 1;
}



undefined2
FUN_0095f210(float param_1,int param_2,float *param_3,float *param_4,float *param_5,float *param_6,
            float *param_7,float *param_8,float *param_9,char param_10,float *param_11,
            float *param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float *pfVar7;
  float local_18;
  float local_14;
  float local_10;
  float local_c [3];
  
  fVar1 = (param_4[2] * *(float *)(param_2 + 0xc) +
          *(float *)(param_2 + 4) * *param_4 + param_4[1] * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  if (0.0 <= fVar1) {
    *param_8 = 0.0;
    *param_9 = *param_4;
    param_9[1] = param_4[1];
    param_9[2] = param_4[2];
    if (param_10 != '\0') {
      *param_12 = *(float *)(param_2 + 4);
      param_12[1] = *(float *)(param_2 + 8);
      param_12[2] = *(float *)(param_2 + 0xc);
      fVar1 = param_12[1];
      fVar2 = param_12[2];
      *param_11 = -*param_12;
      param_11[1] = -fVar1;
      param_11[2] = -fVar2;
    }
    return 1;
  }
  fVar2 = (param_5[2] * *(float *)(param_2 + 0xc) +
          *(float *)(param_2 + 4) * *param_5 + param_5[1] * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  if (0.0 <= fVar2) {
    *param_8 = 0.0;
    *param_9 = *param_5;
    param_9[1] = param_5[1];
    param_9[2] = param_5[2];
    if (param_10 != '\0') {
      *param_12 = *(float *)(param_2 + 4);
      param_12[1] = *(float *)(param_2 + 8);
      param_12[2] = *(float *)(param_2 + 0xc);
      fVar1 = param_12[1];
      fVar2 = param_12[2];
      *param_11 = -*param_12;
      param_11[1] = -fVar1;
      param_11[2] = -fVar2;
    }
    return 1;
  }
  fVar4 = (param_6[2] * *(float *)(param_2 + 0xc) +
          *param_6 * *(float *)(param_2 + 4) + param_6[1] * *(float *)(param_2 + 8)) -
          *(float *)(param_2 + 0x10);
  if (0.0 <= fVar4) {
    *param_8 = 0.0;
    *param_9 = *param_6;
    param_9[1] = param_6[1];
    param_9[2] = param_6[2];
    if (param_10 == '\0') {
      return 1;
    }
    *param_12 = *(float *)(param_2 + 4);
    param_12[1] = *(float *)(param_2 + 8);
    param_12[2] = *(float *)(param_2 + 0xc);
    fVar1 = param_12[1];
    fVar2 = param_12[2];
    *param_11 = -*param_12;
    param_11[1] = -fVar1;
    param_11[2] = -fVar2;
    return 1;
  }
  local_18 = *param_7 - *param_3;
  local_14 = param_7[1] - param_3[1];
  local_10 = param_7[2] - param_3[2];
  fVar5 = *(float *)(param_2 + 0xc) * local_10 +
          *(float *)(param_2 + 4) * local_18 + *(float *)(param_2 + 8) * local_14;
  if ((fVar5 < 0.0 != (fVar5 == 0.0)) ||
     (((fVar3 = -param_1 * fVar5, fVar3 < fVar1 == (fVar3 == fVar1) &&
       (fVar3 < fVar2 == (fVar3 == fVar2))) && (fVar3 < fVar4 == (fVar3 == fVar4))))) {
    return 0;
  }
  if (fVar1 < fVar2) {
    if (fVar4 < fVar2 != (fVar4 == fVar2)) {
      *param_8 = -fVar2 / fVar5;
      uVar6 = FUN_0047da10(local_c,param_1,param_7);
      pfVar7 = &local_18;
      goto LAB_0095f545;
    }
  }
  else if (fVar4 < fVar1 != (fVar4 == fVar1)) {
    *param_8 = -fVar1 / fVar5;
    uVar6 = FUN_0047da10(&local_18,param_1,param_7);
    pfVar7 = local_c;
    goto LAB_0095f545;
  }
  *param_8 = -fVar4 / fVar5;
  uVar6 = FUN_0047da10(local_c,param_1,param_7);
  pfVar7 = &local_18;
LAB_0095f545:
  pfVar7 = (float *)FUN_0047d9b0(pfVar7,uVar6);
  *param_9 = *pfVar7;
  param_9[1] = pfVar7[1];
  param_9[2] = pfVar7[2];
  if (param_10 != '\0') {
    *param_12 = *(float *)(param_2 + 4);
    param_12[1] = *(float *)(param_2 + 8);
    param_12[2] = *(float *)(param_2 + 0xc);
    fVar1 = param_12[1];
    fVar2 = param_12[2];
    *param_11 = -*param_12;
    param_11[1] = -fVar1;
    param_11[2] = -fVar2;
  }
  return 1;
}



void FUN_0095f620(float *param_1,float *param_2)

{
  undefined4 *in_ECX;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  *in_ECX = &PTR_LAB_00aa3a24;
  FUN_00716db0();
  in_ECX[5] = *param_1;
  in_ECX[6] = param_1[1];
  in_ECX[7] = param_1[2];
  FUN_00716db0();
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1];
  FUN_0095db70(&local_10);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00aa3a6c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_0095f810(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3a74;
  *(undefined2 *)(in_ECX + 3) = 2;
  in_ECX[1] = &PTR__scalar_deleting_destructor__00aa3a6c;
  *(undefined2 *)((int)in_ECX + 0x12) = 1;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  uVar1 = FUN_00401f00(8);
  in_ECX[2] = uVar1;
  in_ECX[5] = 0;
  return;
}



undefined4 FUN_0095f870(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}



void FUN_0095f880(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  iVar2 = param_1;
  *in_ECX = &PTR_FUN_00aa3a74;
  uVar3 = 0;
  in_ECX[1] = &PTR__scalar_deleting_destructor__00aa3a6c;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 1;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[2] = 0;
  FUN_004e4a10(*(undefined2 *)(param_1 + 0xe));
  if (*(short *)((int)in_ECX + 0xe) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(iVar2 + 8) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        param_1 = (**(code **)(*piVar1 + 0x1c))();
        FUN_0042bb90(uVar3,&param_1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)((int)in_ECX + 0xe));
  }
  return;
}



void FUN_0095f900(void)

{
  int *piVar1;
  ushort uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 8) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0xe));
  }
  uVar2 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      uVar3 = (uint)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 8) + uVar3 * 4) = 0;
    } while (uVar2 < *(ushort *)(in_ECX + 0xe));
  }
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  return;
}



void FUN_0095fa10(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = param_1;
  iVar3 = (**(code **)(*param_1 + 0xc))();
  if (iVar3 == 4) {
    FUN_0095f900();
    FUN_004e4a10(*(undefined2 *)((int)piVar2 + 0xe));
    uVar4 = 0;
    if (*(short *)((int)piVar2 + 0xe) != 0) {
      do {
        piVar1 = *(int **)(piVar2[2] + uVar4 * 4);
        param_1 = (int *)(**(code **)(*piVar1 + 0x18))();
        (**(code **)(*param_1 + 0x20))(piVar1);
        FUN_0042bb90(uVar4,&param_1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ushort *)((int)piVar2 + 0xe));
    }
  }
  return;
}



uint FUN_0095fa90(int *param_1)

{
  ushort uVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar2 = (**(code **)(*param_1 + 0xc))();
  if (uVar2 == 4) {
    uVar1 = *(ushort *)(in_ECX + 0xe);
    uVar2 = (uint)uVar1;
    if (uVar1 == *(ushort *)((int)param_1 + 0xe)) {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar2 = (**(code **)(**(int **)(uVar3 * 4 + *(int *)(in_ECX + 8)) + 0x28))
                            (*(undefined4 *)(param_1[2] + uVar3 * 4));
          if ((char)uVar2 != '\0') {
            return uVar2 & 0xffffff00;
          }
          uVar2 = (uint)*(ushort *)(in_ECX + 0xe);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar2);
      }
      return CONCAT31((int3)(uVar2 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_0095fb00(int param_1,undefined4 param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      (**(code **)(**(int **)(*(int *)(in_ECX + 8) + uVar1 * 4) + 0x14))
                (*(undefined4 *)(*(int *)(param_1 + 8) + uVar1 * 4),param_2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0xe));
  }
  return;
}



undefined4
FUN_0095fb40(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      cVar1 = FUN_0095d920(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + uVar2 * 4),param_3,
                           param_4,param_5);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_2 + 0xe));
  }
  return 0;
}



undefined4
FUN_0095fc20(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      cVar1 = FUN_0095da70(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + uVar2 * 4),param_3,
                           param_4,param_5,param_6,param_7);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_2 + 0xe));
  }
  return 0;
}



undefined4
FUN_0095fc90(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      cVar1 = FUN_0095d9b0(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + uVar2 * 4),param_3,
                           param_4,param_5,param_6,param_7,param_8,param_9,param_10);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_2 + 0xe));
  }
  return 0;
}



uint FUN_0095fd10(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 local_4;
  
  uVar3 = 0;
  local_4 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_2 + 8) + local_4 * 4);
      uVar3 = 0;
      if (*(short *)(param_4 + 0xe) != 0) {
        do {
          cVar2 = FUN_0095d9b0(param_1,uVar1,param_3,
                               *(undefined4 *)(*(int *)(param_4 + 8) + uVar3 * 4),param_5,param_6,
                               param_7,param_8,param_9,param_10);
          if (cVar2 != '\0') {
            *(uint *)(param_2 + 0x14) = local_4;
            *(uint *)(param_4 + 0x14) = uVar3;
            return CONCAT31((int3)(local_4 >> 8),1);
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(ushort *)(param_4 + 0xe));
      }
      uVar3 = local_4 + 1;
      local_4 = uVar3;
    } while (uVar3 < *(ushort *)(param_2 + 0xe));
  }
  return uVar3 & 0xffffff00;
}



undefined4
FUN_0095fdc0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(param_2 + 0xe) != 0) {
    do {
      cVar1 = FUN_0095dab0(param_1,*(undefined4 *)(*(int *)(param_2 + 8) + uVar2 * 4),param_3,
                           param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,
                           param_12);
      if (cVar1 != '\0') {
        *(uint *)(param_2 + 0x14) = uVar2;
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(param_2 + 0xe));
  }
  return 0;
}



void FUN_0095feb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00aa3a74;
  FUN_0095f900();
  in_ECX[1] = &PTR__scalar_deleting_destructor__00aa3a6c;
  FUN_00401f20(in_ECX[2]);
  *in_ECX = &PTR_FUN_00aa39e0;
  return;
}



void FUN_0095fee0(int param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  if (param_1 != 0) {
    uVar1 = 0;
    if (*(ushort *)(in_ECX + 0xe) != 0) {
      piVar2 = *(int **)(in_ECX + 8);
      do {
        if (param_1 == *piVar2) {
          return;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(ushort *)(in_ECX + 0xe));
    }
    FUN_004baca0(&param_1);
  }
  return;
}



void FUN_0095ff20(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar1 = param_1;
  FUN_0068f970(param_1);
  FUN_006be9d0(uVar1,&param_1);
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      uVar2 = FUN_0095db10(uVar1);
      FUN_0095fee0(uVar2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_1);
  }
  return;
}



void FUN_0095ff70(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  uVar2 = param_1;
  FUN_0095db50(param_1);
  param_1 = (uint)*(ushort *)(in_ECX + 0xe);
  FUN_006d3660(uVar2,&param_1);
  uVar3 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 8) + uVar3 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))(uVar2);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(in_ECX + 0xe));
  }
  return;
}



void FUN_0095ffd0(byte param_1)

{
  FUN_0095feb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0095fff0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int in_ECX;
  int *piVar7;
  uint uVar8;
  
  pcVar3 = param_1;
  pcVar1 = param_1 + 1;
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  param_1 = (char *)FUN_00401f00(pcVar5 + (0xc - (int)pcVar1));
  FUN_006c5d40(param_1,pcVar5 + (0xc - (int)pcVar1),"%s = UNION_BV",pcVar3);
  iVar4 = param_2;
  uVar8 = (uint)*(ushort *)(param_2 + 10);
  if (*(ushort *)(param_2 + 8) <= uVar8) {
    FUN_004e4a10(*(ushort *)(param_2 + 0xe) + uVar8);
  }
  FUN_0042bb90(uVar8,&param_1);
  uVar8 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      uVar6 = FUN_00401f00(0xd);
      FUN_006c5d40(uVar6,0xd,"   child %i",uVar8);
      if (uVar8 < *(ushort *)(in_ECX + 0xe)) {
        piVar7 = *(int **)(*(int *)(in_ECX + 8) + uVar8 * 4);
      }
      else {
        piVar7 = (int *)0x0;
      }
      (**(code **)(*piVar7 + 0x2c))(uVar6,iVar4);
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(in_ECX + 0xe));
  }
  return;
}


