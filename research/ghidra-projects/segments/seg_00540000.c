
void FUN_005400e0(float *param_1,byte *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  
  *param_1 = ((float)param_2[0xc] * *(float *)(param_2 + 0x1c) +
             (float)param_2[8] * *(float *)(param_2 + 0x18) +
             (float)param_2[4] * *(float *)(param_2 + 0x14) +
             (float)*param_2 * *(float *)(param_2 + 0x10) + 0.0) * 0.003921569;
  param_1[1] = ((float)param_2[0xd] * *(float *)(param_2 + 0x1c) +
               (float)param_2[9] * *(float *)(param_2 + 0x18) +
               (float)param_2[5] * *(float *)(param_2 + 0x14) +
               (float)param_2[1] * *(float *)(param_2 + 0x10) + 0.0) * 0.003921569;
  fVar1 = ((float)param_2[0xe] * *(float *)(param_2 + 0x1c) +
          (float)param_2[10] * *(float *)(param_2 + 0x18) +
          (float)param_2[6] * *(float *)(param_2 + 0x14) +
          (float)param_2[2] * *(float *)(param_2 + 0x10) + 0.0) * 0.003921569;
  param_1[2] = fVar1;
  if (param_3 <= 1.0) {
    if (param_3 <= 0.0) {
      FUN_00709340();
      return;
    }
  }
  else {
    param_3 = 1.0;
  }
  fVar2 = *param_1 + param_3;
  *param_1 = fVar2;
  param_1[1] = param_1[1] + param_3;
  param_1[2] = fVar1 + param_3;
  if (*(int *)(in_ECX + 0x10) == 0) {
    FUN_00709340();
    return;
  }
  fVar1 = (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x54) * 0.003921569 * 1.0 + 0.0;
  if (fVar2 <= fVar1) {
    if (fVar2 < 0.0) {
      *param_1 = 0.0;
    }
  }
  else {
    *param_1 = fVar1;
  }
  fVar1 = (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x55) * 0.003921569 * 1.0 + 0.0;
  if (param_1[1] <= fVar1) {
    if (param_1[1] < 0.0) {
      param_1[1] = 0.0;
    }
  }
  else {
    param_1[1] = fVar1;
  }
  fVar1 = (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x56) * 0.003921569 * 1.0 + 0.0;
  if (param_1[2] <= fVar1) {
    if (0.0 <= param_1[2]) {
      return;
    }
    param_1[2] = 0.0;
    return;
  }
  param_1[2] = fVar1;
  return;
}



void FUN_00540380(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffff7 | 1;
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0053bbc0();
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0053d6c0();
    return;
  }
  return;
}



void FUN_005403d0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    for (piVar1 = (int *)(param_1 + 0x108);
        (piVar1 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0));
        piVar1 = (int *)piVar1[1]) {
      if ((DAT_00b11de4 != '\0') || (puVar2[1] != 1)) {
        piVar7 = (int *)FUN_006ae0a0(*puVar2,0x21,0);
        if (piVar7 == (int *)0x0) {
          cVar5 = FUN_006aca40(*puVar2);
          if (cVar5 != '\0') {
            iVar8 = FUN_00401f00(4,uVar6);
            local_4 = 0;
            if (iVar8 == 0) {
              piVar7 = (int *)0x0;
            }
            else {
              piVar7 = (int *)FUN_006b7180(*puVar2);
            }
            local_4 = 0xffffffff;
          }
          if (piVar7 == (int *)0x0) goto LAB_005404f0;
        }
        piVar10 = *(int **)(in_ECX + 0xe0);
        bVar4 = false;
        do {
          if ((piVar10 == (int *)0x0) ||
             (puVar9 = (undefined4 *)*piVar10, puVar9 == (undefined4 *)0x0)) {
            if (!bVar4) {
              puVar9 = (undefined4 *)FUN_00401f00(0x10,uVar6);
              if (puVar9 == (undefined4 *)0x0) {
                puVar9 = (undefined4 *)0x0;
              }
              else {
                uVar3 = puVar2[1];
                puVar9[1] = param_1;
                *puVar9 = piVar7;
                puVar9[2] = uVar3;
                puVar9[3] = 0;
              }
              piVar7 = *(int **)(in_ECX + 0xe0);
              if (puVar9 != (undefined4 *)0x0) {
                if (*piVar7 != 0) {
                  piVar10 = (int *)FUN_00401f00(8,uVar6);
                  if (piVar10 == (int *)0x0) {
                    piVar10 = (int *)0x0;
                  }
                  else {
                    *piVar10 = *piVar7;
                    piVar10[1] = 0;
                  }
                  piVar10[1] = piVar7[1];
                  piVar7[1] = (int)piVar10;
                }
                *piVar7 = (int)puVar9;
              }
              if (puVar2[1] == 3) {
                DAT_00b365c0 = DAT_00b365c0 + '\x01';
              }
              goto LAB_005404f0;
            }
            break;
          }
          if (((*(int *)*puVar9 == *piVar7) && (puVar9[1] == param_1)) && (puVar9[2] == puVar2[1]))
          {
            bVar4 = true;
          }
          else {
            bVar4 = false;
          }
          piVar10 = (int *)piVar10[1];
        } while (!bVar4);
        if (piVar7 != (int *)0x0) {
          FUN_006b73e0();
          FUN_00401f20(piVar7);
        }
      }
LAB_005404f0:
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00540590(void)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 0xe0); (piVar1 != (int *)0x0 && (*piVar1 != 0));
      piVar1 = (int *)piVar1[1]) {
    FUN_006b7240();
  }
  return;
}



uint FUN_005405c0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *in_EAX;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xe0);
  while( true ) {
    if ((piVar1 == (int *)0x0) || (in_EAX = (undefined4 *)*piVar1, in_EAX == (undefined4 *)0x0)) {
      return (uint)in_EAX & 0xffffff00;
    }
    if ((*(int *)*in_EAX == param_1) && (in_EAX[1] == param_2)) break;
    piVar1 = (int *)piVar1[1];
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}



void FUN_00540600(float param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  undefined4 uVar5;
  
  cVar2 = FUN_00578f60();
  if (cVar2 != '\0') {
    return;
  }
  cVar2 = FUN_005ad410();
  if (cVar2 != '\0') {
    return;
  }
  if (*in_ECX == 0) {
    return;
  }
  cVar2 = FUN_006b73a0();
  if ((cVar2 == '\0') && (iVar3 = FUN_006ae0a0(*(undefined4 *)*in_ECX,0x21,0), iVar3 != 0)) {
    iVar1 = *in_ECX;
    if (iVar1 != 0) {
      FUN_006b73e0();
      FUN_00401f20(iVar1);
    }
    *in_ECX = iVar3;
  }
  if (*in_ECX == 0) {
    return;
  }
  if (in_ECX[2] == 3) {
    cVar2 = FUN_006b7260();
    if (cVar2 != '\0') goto LAB_005406a6;
    uVar5 = 0;
  }
  else {
    cVar2 = FUN_0053fd20(1000);
    if ((cVar2 == '\0') || (cVar2 = FUN_006b7260(), cVar2 != '\0')) goto LAB_005406a6;
    uVar5 = 1;
  }
  FUN_006b7190(uVar5);
LAB_005406a6:
  fVar4 = (float10)FUN_006b72e0();
  if (ABS((float)(fVar4 - (float10)param_1)) <= 0.01) {
    return;
  }
  FUN_006b7280(param_1);
  return;
}



int FUN_005406f0(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xc;
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    iVar1 = 0x10;
  }
  iVar2 = iVar1 + 0x10;
  if (0x68 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    iVar2 = iVar1 + 0x18;
  }
  return iVar2;
}



void FUN_00540720(void)

{
  int in_ECX;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_10 = 0;
  if (*(int *)(in_ECX + 0x10) != 0) {
    local_10 = *(undefined4 *)(*(int *)(in_ECX + 0x10) + 0xc);
  }
  FUN_0045f7a0(&local_10,4);
  local_c = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    local_c = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0xc);
  }
  FUN_0045f7a0(&local_c,4);
  local_8 = 0;
  if (*(int *)(in_ECX + 0x18) != 0) {
    local_8 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0xc);
  }
  FUN_0045f7a0(&local_8,4);
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    local_4 = 0;
    if (*(int *)(in_ECX + 0x1c) != 0) {
      local_4 = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0xc);
    }
    FUN_0045f7a0(&local_4,4);
  }
  FUN_0045b9a0(in_ECX + 0xd0,4);
  FUN_0045b9a0(in_ECX + 0xd4,4);
  FUN_0045b9a0(in_ECX + 0xd8,4);
  FUN_0045b9a0(in_ECX + 0xdc,4);
  if (0x68 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045b9a0(in_ECX + 0xfc,4);
    FUN_0045b9a0(in_ECX + 0xf4,4);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540850(void)

{
  undefined4 uVar1;
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
  undefined4 uVar17;
  int in_ECX;
  float10 extraout_ST0;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float local_60;
  
  if (DAT_00b43070 != '\0') {
    iVar2 = *(int *)(in_ECX + 0x10);
    if (*(float *)(iVar2 + 0x130) <= 0.0) {
      uVar1 = 0x3f8ccccd;
    }
    else {
      uVar1 = *(undefined4 *)(iVar2 + 0x130);
    }
    uVar17 = FUN_009828c0();
    fVar3 = _DAT_00b06dfc;
    if (extraout_ST0 < (float10)*(float *)(iVar2 + 0x114)) {
      fVar3 = *(float *)(iVar2 + 0x114);
    }
    fVar4 = _DAT_00b06e04;
    if (extraout_ST0 < (float10)*(float *)(iVar2 + 300)) {
      fVar4 = *(float *)(iVar2 + 300);
    }
    fVar5 = _DAT_00b06e0c;
    if (extraout_ST0 < (float10)*(float *)(iVar2 + 0x128)) {
      fVar5 = *(float *)(iVar2 + 0x128);
    }
    fVar6 = _DAT_00b06e3c;
    if (extraout_ST0 < (float10)*(float *)(iVar2 + 0x110)) {
      fVar6 = *(float *)(iVar2 + 0x110);
    }
    fVar7 = _DAT_00b06e44;
    if (extraout_ST0 < (float10)*(float *)(iVar2 + 0x11c)) {
      fVar7 = *(float *)(iVar2 + 0x11c);
    }
    if ((float10)*(float *)(iVar2 + 0x124) <= extraout_ST0) {
      local_60 = _DAT_00b06e5c;
    }
    else {
      local_60 = *(float *)(iVar2 + 0x124);
    }
    fVar13 = local_60;
    fVar18 = (float10)_DAT_00b06e64;
    if ((float10)*(float *)(iVar2 + 0x120) <= extraout_ST0) {
      local_60 = _DAT_00b06e64;
    }
    else {
      local_60 = *(float *)(iVar2 + 0x120);
    }
    fVar14 = local_60;
    fVar19 = (float10)_DAT_00b06e34;
    if ((float10)*(float *)(iVar2 + 0x13c) <= extraout_ST0) {
      local_60 = _DAT_00b06e34;
    }
    else {
      local_60 = *(float *)(iVar2 + 0x13c);
    }
    fVar15 = local_60;
    fVar20 = (float10)_DAT_00b06e4c;
    if ((float10)*(float *)(iVar2 + 0x144) <= extraout_ST0) {
      local_60 = _DAT_00b06e4c;
    }
    else {
      local_60 = *(float *)(iVar2 + 0x144);
    }
    fVar16 = local_60;
    fVar21 = (float10)_DAT_00b06e54;
    if ((float10)*(float *)(iVar2 + 0x140) <= extraout_ST0) {
      local_60 = _DAT_00b06e54;
    }
    else {
      local_60 = *(float *)(iVar2 + 0x140);
    }
    iVar2 = *(int *)(in_ECX + 0x14);
    if ((iVar2 != 0) && (*(float *)(in_ECX + 0xd8) < 1.0)) {
      if ((float10)*(float *)(iVar2 + 0x130) <= extraout_ST0) {
        uVar17 = 0x3f8ccccd;
      }
      else {
        uVar17 = *(undefined4 *)(iVar2 + 0x130);
      }
      fVar22 = (float10)FUN_009828c0();
      fVar8 = _DAT_00b06dfc;
      if (fVar22 < (float10)*(float *)(iVar2 + 0x114)) {
        fVar8 = *(float *)(iVar2 + 0x114);
      }
      fVar9 = _DAT_00b06e04;
      if (fVar22 < (float10)*(float *)(iVar2 + 300)) {
        fVar9 = *(float *)(iVar2 + 300);
      }
      fVar10 = _DAT_00b06e0c;
      if (fVar22 < (float10)*(float *)(iVar2 + 0x128)) {
        fVar10 = *(float *)(iVar2 + 0x128);
      }
      fVar11 = _DAT_00b06e3c;
      if (fVar22 < (float10)*(float *)(iVar2 + 0x110)) {
        fVar11 = *(float *)(iVar2 + 0x110);
      }
      fVar12 = _DAT_00b06e44;
      if (fVar22 < (float10)*(float *)(iVar2 + 0x11c)) {
        fVar12 = *(float *)(iVar2 + 0x11c);
      }
      if (fVar22 < (float10)*(float *)(iVar2 + 0x124)) {
        fVar18 = (float10)*(float *)(iVar2 + 0x124);
      }
      if (fVar22 < (float10)*(float *)(iVar2 + 0x120)) {
        fVar19 = (float10)*(float *)(iVar2 + 0x120);
      }
      if (fVar22 < (float10)*(float *)(iVar2 + 0x13c)) {
        fVar20 = (float10)*(float *)(iVar2 + 0x13c);
      }
      if (fVar22 < (float10)*(float *)(iVar2 + 0x144)) {
        fVar21 = (float10)*(float *)(iVar2 + 0x144);
      }
      fVar23 = extraout_ST1;
      if (fVar22 < (float10)*(float *)(iVar2 + 0x140)) {
        fVar23 = (float10)*(float *)(iVar2 + 0x140);
      }
      _DAT_00b2c73c = uVar17;
      _DAT_00b2c740 = uVar1;
      DAT_00b43220 = FUN_009828c0();
      _DAT_00b431f8 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar3 - (float10)fVar8) + (float10)fVar8);
      _DAT_00b431e8 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar4 - (float10)fVar9) + (float10)fVar9);
      _DAT_00b431f0 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar5 - (float10)fVar10) + (float10)fVar10);
      _DAT_00b43200 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar6 - (float10)fVar11) + (float10)fVar11);
      _DAT_00b43208 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar7 - (float10)fVar12) + (float10)fVar12);
      _DAT_00b43210 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar13 - (float10)(float)fVar18) + (float10)(float)fVar18);
      _DAT_00b43218 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar14 - (float10)(float)fVar19) + (float10)(float)fVar19);
      _DAT_00b42f4c =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar15 - (float10)(float)fVar20) + (float10)(float)fVar20);
      _DAT_00b42ea8 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)fVar16 - (float10)(float)fVar21) + (float10)(float)fVar21);
      _DAT_00b42f44 =
           (float)((((float10)*(float *)(in_ECX + 0xd8) - extraout_ST0_00) / extraout_ST1_00) *
                   ((float10)local_60 - (float10)(float)fVar23) + (float10)(float)fVar23);
      return;
    }
    _DAT_00b2c740 = 0x3f800000;
    _DAT_00b43210 = fVar13;
    _DAT_00b43218 = fVar14;
    _DAT_00b42f4c = fVar15;
    _DAT_00b42ea8 = fVar16;
    _DAT_00b42f44 = local_60;
    _DAT_00b2c73c = uVar1;
    _DAT_00b431e8 = fVar4;
    _DAT_00b431f0 = fVar5;
    _DAT_00b431f8 = fVar3;
    _DAT_00b43200 = fVar6;
    _DAT_00b43208 = fVar7;
    DAT_00b43220 = uVar17;
  }
  return;
}



void FUN_00540f50(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  if ((int *)in_ECX[1] != (int *)0x0) {
    local_4 = in_ECX;
    (**(code **)(*(int *)in_ECX[1] + 0x88))(&local_4,in_ECX[2]);
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540fd0(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ba4a6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a56e14;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  puVar5 = in_ECX + 0xf;
  local_4 = 1;
  iVar6 = 9;
  puVar3 = puVar5;
  do {
    *puVar3 = 0;
    iVar6 = iVar6 + -1;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3 = puVar3 + 3;
  } while (-1 < iVar6);
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  puVar3 = (undefined4 *)in_ECX[1];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[1] = 0;
  }
  puVar3 = (undefined4 *)in_ECX[2];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[0x37] = 4;
  in_ECX[0x34] = 0x41200000;
  in_ECX[3] = 0;
  in_ECX[7] = 0;
  in_ECX[0x35] = 0;
  in_ECX[6] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
  iVar6 = 10;
  do {
    *puVar5 = DAT_00b25ac4;
    puVar5[1] = DAT_00b25ac8;
    puVar5[2] = DAT_00b25acc;
    puVar5 = puVar5 + 3;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  in_ECX[0x2d] = DAT_00b25ac4;
  in_ECX[0x2e] = DAT_00b25ac8;
  uVar1 = DAT_00b25acc;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0x3f800000;
  in_ECX[0x2f] = uVar1;
  in_ECX[0x36] = 0x3f800000;
  in_ECX[0x3d] = 0;
  puVar5 = (undefined4 *)FUN_00401f00(8,uVar2);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  in_ECX[0x38] = puVar5;
  in_ECX[0x39] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = _DAT_00b36658;
  in_ECX[0x3f] = 0x20;
  *(undefined1 *)(in_ECX + 0x40) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005411a0(byte param_1)

{
  FUN_0053fd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_005411c0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x1c);
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005411d0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ba5c3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = in_ECX[1];
  piVar1 = in_ECX + 1;
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x1c) != 0) {
      local_10 = in_ECX;
      (**(code **)(**(int **)(iVar5 + 0x1c) + 0x88))(&local_10,iVar5,uVar3);
      if (local_10 != (undefined4 *)0x0) {
        LVar4 = InterlockedDecrement(local_10 + 1);
        if ((LVar4 == 0) && (local_10 != (undefined4 *)0x0)) {
          (**(code **)*local_10)(1);
        }
      }
    }
    puVar7 = (undefined4 *)*piVar1;
    if (puVar7 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar7 + 1);
      if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
        (**(code **)*puVar7)(1);
      }
      *piVar1 = 0;
    }
  }
  if (param_1 == 0) {
    iVar5 = FUN_00401f00(0xdc);
    iStack_4 = 0;
    if (iVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0070b780(0);
    }
    iStack_4 = 0xffffffff;
    FUN_0075fa90(uVar8);
    FUN_006ff420("Sky Root");
    *(ushort *)(*piVar1 + 0x18) = *(ushort *)(*piVar1 + 0x18) | 2;
  }
  else {
    FUN_0075fa90(param_1);
  }
  iVar5 = *piVar1;
  *(undefined4 *)(iVar5 + 0x54) = DAT_00b3f9a8;
  *(undefined4 *)(iVar5 + 0x58) = DAT_00b3f9ac;
  *(undefined4 *)(iVar5 + 0x5c) = DAT_00b3f9b0;
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1);
  }
  iVar5 = FUN_00401f00(0x1c);
  iStack_4 = 1;
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0053ae60();
  }
  in_ECX[8] = piVar6;
  iStack_4 = 0xffffffff;
  (**(code **)(*piVar6 + 0x10))(*piVar1);
  if ((undefined4 *)in_ECX[9] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[9])(1);
  }
  iStack_4 = FUN_00401f00(0x10);
  local_c = 2;
  if (iStack_4 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_005442a0();
  }
  in_ECX[9] = piVar6;
  local_c = -1;
  (**(code **)(*piVar6 + 8))(*piVar1);
  if ((undefined4 *)in_ECX[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[10])(1);
  }
  puStack_8 = (undefined1 *)FUN_00401f00(0x28);
  local_10 = (undefined4 *)0x3;
  if (puStack_8 == (undefined1 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_00544b50();
  }
  in_ECX[10] = piVar6;
  local_10 = (undefined4 *)0xffffffff;
  (**(code **)(*piVar6 + 8))(*piVar1);
  local_c = FUN_00401f00(0xdc);
  if (local_c == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_0070b780(0);
  }
  puVar2 = (undefined4 *)in_ECX[2];
  if (puVar2 != puVar7) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    in_ECX[2] = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  (**(code **)(*(int *)*piVar1 + 0x84))(in_ECX[2],0);
  FUN_006ff420("Moons Root");
  if ((undefined4 *)in_ECX[0xe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xe])(1);
  }
  if (DAT_00b11de4 == '\0') {
    in_ECX[0xe] = 0;
  }
  else {
    iVar5 = FUN_00401f00(0x18);
    if (iVar5 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_0053d520();
    }
    in_ECX[0xe] = uVar8;
    FUN_0053d8f0();
  }
  if ((undefined4 *)in_ECX[0xb] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xb])(1);
  }
  iVar5 = FUN_00401f00(0x18);
  if (iVar5 == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)FUN_0053bc80();
  }
  in_ECX[0xb] = piVar6;
  (**(code **)(*piVar6 + 8))(*piVar1);
  puVar7 = (undefined4 *)FUN_00401f00(0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar7 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar7 + 6) = 0xec;
    *(undefined1 *)((int)puVar7 + 0x1a) = 0;
  }
  if (puVar7 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar7 + 1);
  }
  *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xfeed | 0xec;
  *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) | 0x2001;
  FUN_00405680(puVar7);
  LVar4 = InterlockedDecrement(puVar7 + 1);
  if (LVar4 == 0) {
    (**(code **)*puVar7)(1);
  }
  puVar7 = (undefined4 *)FUN_00401f00(0x1c);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar7 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar7 + 6) = 8;
  }
  if (puVar7 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar7 + 1);
  }
  *(ushort *)(puVar7 + 6) = *(ushort *)(puVar7 + 6) & 0xffef | 0x20;
  FUN_00405680(puVar7);
  LVar4 = InterlockedDecrement(puVar7 + 1);
  if (LVar4 == 0) {
    (**(code **)*puVar7)(1);
  }
  if (DAT_00b43070 != '\0') {
    _DAT_00b2c73c = 0x3f800000;
    _DAT_00b2c740 = 0x3f800000;
  }
  *unaff_FS_OFFSET = param_2;
  return;
}



void FUN_00541630(int param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  ushort *puVar1;
  ushort uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  
  if (param_1 != 0) {
    uVar9 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_00541775;
      do {
        piVar3 = *(int **)(*(int *)(param_1 + 0xb0) + uVar9 * 4);
        if (piVar3 != (int *)0x0) {
          iVar4 = (**(code **)(*piVar3 + 0x10))();
          if (iVar4 == 0) {
            iVar4 = (**(code **)(*piVar3 + 8))();
            if (iVar4 != 0) {
              FUN_00541630(iVar4,param_2,param_3,param_4,param_5);
            }
          }
          else {
            puVar7 = *(undefined4 **)(piVar3[0x2d] + 0x24);
            uVar2 = *(ushort *)(piVar3[0x2d] + 8);
            if (puVar7 == (undefined4 *)0x0) {
              FUN_007287c0(0);
              puVar7 = *(undefined4 **)(piVar3[0x2d] + 0x24);
              if (uVar2 != 0) {
                uVar8 = (uint)uVar2;
                puVar5 = puVar7;
                do {
                  *puVar5 = DAT_00b25ae0;
                  puVar5[1] = DAT_00b25ae4;
                  puVar5[2] = DAT_00b25ae8;
                  puVar5[3] = DAT_00b25aec;
                  puVar5 = puVar5 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                goto LAB_005416df;
              }
            }
            else {
LAB_005416df:
              if (uVar2 != 0) {
                pfVar6 = (float *)(puVar7 + 2);
                uVar8 = (uint)uVar2;
                do {
                  if ((char)param_5 == '\0') {
                    pfVar6[-2] = param_2;
                    pfVar6[-1] = param_3;
                    *pfVar6 = param_4;
                  }
                  else {
                    pfVar6[-2] = pfVar6[-2] + param_2;
                    pfVar6[-1] = pfVar6[-1] + param_3;
                    *pfVar6 = *pfVar6 + param_4;
                  }
                  pfVar6 = pfVar6 + 4;
                  uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
              }
            }
            if (piVar3[0x2d] != 0) {
              puVar1 = (ushort *)(piVar3[0x2d] + 0x2e);
              *puVar1 = *puVar1 | 4;
            }
          }
        }
LAB_00541775:
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



void FUN_00541790(int param_1,int param_2,undefined4 param_3)

{
  ushort *puVar1;
  float fVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  float *pfVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  float *pfVar11;
  uint local_4;
  
  if (param_1 != 0) {
    local_4 = 0;
    if (*(short *)(param_1 + 0xb6) != 0) {
      pfVar11 = (float *)(param_2 + 8);
      uVar10 = 0;
      if (*(short *)(param_1 + 0xb6) == 0) goto LAB_005418ce;
      do {
        piVar4 = *(int **)(*(int *)(param_1 + 0xb0) + local_4 * 4);
        uVar10 = local_4;
        if (piVar4 != (int *)0x0) {
          iVar5 = (**(code **)(*piVar4 + 0x10))();
          if (iVar5 == 0) {
            iVar5 = (**(code **)(*piVar4 + 8))();
            if (iVar5 != 0) {
              FUN_00541790(iVar5,param_2,param_3);
            }
          }
          else {
            puVar8 = *(undefined4 **)(piVar4[0x2d] + 0x24);
            uVar3 = *(ushort *)(piVar4[0x2d] + 8);
            if (puVar8 == (undefined4 *)0x0) {
              FUN_007287c0(0);
              puVar8 = *(undefined4 **)(piVar4[0x2d] + 0x24);
              if (uVar3 != 0) {
                uVar9 = (uint)uVar3;
                puVar6 = puVar8;
                do {
                  *puVar6 = DAT_00b25ae0;
                  puVar6[1] = DAT_00b25ae4;
                  puVar6[2] = DAT_00b25ae8;
                  puVar6[3] = DAT_00b25aec;
                  puVar6 = puVar6 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
                goto LAB_0054184f;
              }
            }
            else {
LAB_0054184f:
              if (uVar3 != 0) {
                pfVar7 = (float *)(puVar8 + 2);
                uVar9 = (uint)uVar3;
                do {
                  if ((char)param_3 == '\0') {
                    pfVar7[-2] = pfVar11[-2];
                    pfVar7[-1] = pfVar11[-1];
                    fVar2 = *pfVar11;
                  }
                  else {
                    pfVar7[-2] = pfVar7[-2] + pfVar11[-2];
                    pfVar7[-1] = pfVar11[-1] + pfVar7[-1];
                    fVar2 = *pfVar7 + *pfVar11;
                  }
                  *pfVar7 = fVar2;
                  pfVar7 = pfVar7 + 4;
                  uVar9 = uVar9 - 1;
                } while (uVar9 != 0);
              }
            }
            if (piVar4[0x2d] != 0) {
              puVar1 = (ushort *)(piVar4[0x2d] + 0x2e);
              *puVar1 = *puVar1 | 4;
            }
          }
        }
LAB_005418ce:
        local_4 = uVar10 + 1;
        pfVar11 = pfVar11 + 3;
      } while (local_4 < *(ushort *)(param_1 + 0xb6));
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005418f0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float local_3c;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(in_ECX + 0xdc) == 0) {
    *(undefined4 *)(in_ECX + 0x6c) = 0x3f733333;
    *(undefined4 *)(in_ECX + 0x70) = 0x3f59999a;
    *(undefined4 *)(in_ECX + 0x60) = 0x3eb33333;
    *(undefined4 *)(in_ECX + 0x74) = 0x3f59999a;
    *(undefined4 *)(in_ECX + 100) = 0x3eb33333;
    *(undefined4 *)(in_ECX + 0xa8) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0x54) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0x68) = 0x3edc28f6;
    *(undefined4 *)(in_ECX + 0xac) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0x58) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0xb0) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0x5c) = 0x3dcccccd;
    *(undefined4 *)(in_ECX + 0xb4) = DAT_00b3fa90;
    *(undefined4 *)(in_ECX + 0xb8) = DAT_00b3fa94;
    uVar9 = DAT_00b3fa98;
    *(undefined4 *)(in_ECX + 0xbc) = DAT_00b3fa98;
    uVar7 = *(undefined4 *)(in_ECX + 0xb4);
    uVar8 = *(undefined4 *)(in_ECX + 0xb8);
    *(undefined4 *)(in_ECX + 0x9c) = uVar7;
    *(undefined4 *)(in_ECX + 0x78) = uVar7;
    *(undefined4 *)(in_ECX + 0x3c) = uVar7;
    *(undefined4 *)(in_ECX + 0x48) = uVar7;
    *(undefined4 *)(in_ECX + 0x90) = uVar7;
    *(undefined4 *)(in_ECX + 0xa0) = uVar8;
    *(undefined4 *)(in_ECX + 0x7c) = uVar8;
    *(undefined4 *)(in_ECX + 0x40) = uVar8;
    *(undefined4 *)(in_ECX + 0x4c) = uVar8;
    *(undefined4 *)(in_ECX + 0x94) = uVar8;
    *(undefined4 *)(in_ECX + 0xa4) = uVar9;
    *(undefined4 *)(in_ECX + 0x80) = uVar9;
    *(undefined4 *)(in_ECX + 0x44) = uVar9;
    *(undefined4 *)(in_ECX + 0x50) = uVar9;
    *(undefined4 *)(in_ECX + 0x98) = uVar9;
    return;
  }
  if (((*(int *)(in_ECX + 0xdc) == 1) && (DAT_00b333a0 != 0)) &&
     (*(int *)(DAT_00b333a0 + 0x34) != 0)) {
    FUN_004c9920(in_ECX + 0x6c);
    FUN_004c98c0(in_ECX + 0x60);
    FUN_004c99c0((undefined4 *)(in_ECX + 0x48));
    uVar7 = *(undefined4 *)(in_ECX + 0x48);
    uVar8 = *(undefined4 *)(in_ECX + 0x4c);
    uVar9 = *(undefined4 *)(in_ECX + 0x50);
    *(undefined4 *)(in_ECX + 0xb4) = uVar7;
    *(undefined4 *)(in_ECX + 0x9c) = uVar7;
    *(undefined4 *)(in_ECX + 0x78) = uVar7;
    *(undefined4 *)(in_ECX + 0xa8) = uVar7;
    *(undefined4 *)(in_ECX + 0x54) = uVar7;
    *(undefined4 *)(in_ECX + 0x3c) = uVar7;
    *(undefined4 *)(in_ECX + 0x90) = uVar7;
    *(undefined4 *)(in_ECX + 0xb8) = uVar8;
    *(undefined4 *)(in_ECX + 0xa0) = uVar8;
    *(undefined4 *)(in_ECX + 0x7c) = uVar8;
    *(undefined4 *)(in_ECX + 0xac) = uVar8;
    *(undefined4 *)(in_ECX + 0x58) = uVar8;
    *(undefined4 *)(in_ECX + 0x40) = uVar8;
    *(undefined4 *)(in_ECX + 0x94) = uVar8;
    *(undefined4 *)(in_ECX + 0xbc) = uVar9;
    *(undefined4 *)(in_ECX + 0xa4) = uVar9;
    *(undefined4 *)(in_ECX + 0x80) = uVar9;
    *(undefined4 *)(in_ECX + 0xb0) = uVar9;
    *(undefined4 *)(in_ECX + 0x5c) = uVar9;
    *(undefined4 *)(in_ECX + 0x44) = uVar9;
    *(undefined4 *)(in_ECX + 0x98) = uVar9;
    return;
  }
  if (*(int *)(in_ECX + 0x10) == 0) {
    return;
  }
  fVar13 = (float10)FUN_0053fc10();
  fVar3 = (float)fVar13;
  fVar13 = (float10)FUN_00499180();
  fVar4 = (float)fVar13;
  fVar13 = (float10)FUN_004991c0();
  fVar5 = (float)fVar13;
  fVar13 = (float10)FUN_0053fc90();
  fVar6 = (float)fVar13;
  if ((*(float *)(in_ECX + 0xd0) <= fVar3) || (fVar4 <= *(float *)(in_ECX + 0xd0))) {
    if ((fVar4 <= *(float *)(in_ECX + 0xd0)) &&
       (*(float *)(in_ECX + 0xd0) < fVar5 != (*(float *)(in_ECX + 0xd0) == fVar5))) {
      iVar10 = 1;
      local_10 = 1.0;
      iVar11 = 1;
      goto LAB_00541c87;
    }
    if ((*(float *)(in_ECX + 0xd0) <= fVar5) || (fVar6 <= *(float *)(in_ECX + 0xd0))) {
      if ((fVar6 <= *(float *)(in_ECX + 0xd0)) ||
         (*(float *)(in_ECX + 0xd0) < fVar3 != (*(float *)(in_ECX + 0xd0) == fVar3))) {
        iVar10 = 3;
        local_10 = 1.0;
        iVar11 = iVar10;
      }
      else {
        FUN_004a7a60("Data error detected--Transition times stored in climate data are invalid.");
        iVar10 = 1;
        local_10 = 1.0;
        iVar11 = 1;
      }
      goto LAB_00541c87;
    }
    iVar11 = 2;
    fVar4 = (fVar6 - fVar5) * 0.5;
    fVar3 = fVar4 + fVar5;
    if (*(float *)(in_ECX + 0xd0) < fVar3) {
      fVar3 = fVar3 - *(float *)(in_ECX + 0xd0);
      goto LAB_00541b73;
    }
    fVar3 = *(float *)(in_ECX + 0xd0) - fVar3;
  }
  else {
    iVar11 = 0;
    fVar4 = (fVar4 - fVar3) * 0.5;
    fVar3 = fVar4 + fVar3;
    if (fVar3 <= *(float *)(in_ECX + 0xd0)) {
      fVar3 = *(float *)(in_ECX + 0xd0) - fVar3;
LAB_00541b73:
      iVar10 = 1;
      local_10 = 1.0 - fVar3 / fVar4;
      goto LAB_00541c87;
    }
    fVar3 = fVar3 - *(float *)(in_ECX + 0xd0);
  }
  iVar10 = 3;
  local_10 = 1.0 - fVar3 / fVar4;
LAB_00541c87:
  iVar12 = 0;
  local_c = (1.0 - local_10) * *(float *)(in_ECX + 0xd8);
  local_4 = 1.0 - *(float *)(in_ECX + 0xd8);
  local_8 = local_10 * local_4;
  local_4 = (1.0 - local_10) * local_4;
  local_10 = *(float *)(in_ECX + 0xd8) * local_10;
  do {
    iVar1 = (iVar11 + iVar12 * 4) * 4 + 0x68;
    local_20 = *(undefined4 *)(iVar1 + *(int *)(in_ECX + 0x10));
    iVar2 = (iVar10 + iVar12 * 4) * 4 + 0x68;
    local_1c = *(undefined4 *)(iVar2 + *(int *)(in_ECX + 0x10));
    if (1.0 <= *(float *)(in_ECX + 0xd8)) {
      local_14 = 0;
      local_18 = 0;
    }
    else {
      local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + iVar1);
      local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x14) + iVar2);
    }
    local_3c = 0.0;
    if (*(int *)(in_ECX + 0x14) == 0) {
      if (iVar12 == 4) {
        local_3c = *(float *)(in_ECX + 0xe4) * _DAT_00b36648;
      }
      else if (iVar12 == 3) {
        local_3c = *(float *)(in_ECX + 0xe4) * _DAT_00b36650;
      }
      else if (iVar12 == 2) {
        local_3c = *(float *)(in_ECX + 0xe4);
      }
    }
    FUN_005400e0(in_ECX + (iVar12 * 3 + 0xf) * 4,&local_20,local_3c);
    iVar12 = iVar12 + 1;
  } while (iVar12 < 10);
  *(undefined4 *)(in_ECX + 0xb4) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(in_ECX + 0xb8) = *(undefined4 *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0xbc) = *(undefined4 *)(in_ECX + 0x74);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00541dd0(void)

{
  float *pfVar1;
  ushort *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  int in_ECX;
  int iVar10;
  float10 fVar11;
  float local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (((*(byte *)(in_ECX + 0xfc) & 4) == 0) || (iVar9 = FUN_004994c0(), iVar9 == 0)) {
    if ((*(int *)(in_ECX + 0x10) == 0) ||
       ((*(int *)(in_ECX + 0xdc) != 3 && (*(int *)(in_ECX + 0xdc) != 2)))) {
      if ((*(int *)(in_ECX + 0xdc) == 1) &&
         ((DAT_00b333a0 != 0 && (*(int *)(DAT_00b333a0 + 0x34) != 0)))) {
        fVar11 = (float10)FUN_004c9a40();
        local_30 = (float)fVar11;
        if ((local_30 < 0.0 != (local_30 == 0.0)) || (163840.0 < local_30)) {
          local_30 = 163840.0;
        }
        fVar11 = (float10)FUN_004c9a20();
        fVar3 = (float)fVar11;
        if ((fVar3 < 0.0 != (fVar3 == 0.0)) || (local_30 < fVar3)) {
          fVar3 = local_30 * 0.17000002;
        }
        *(float *)(in_ECX + 200) = fVar3;
        *(float *)(in_ECX + 0xcc) = local_30;
      }
      else {
        *(undefined4 *)(in_ECX + 200) = 0x48200000;
        *(undefined4 *)(in_ECX + 0xcc) = 0x48200000;
      }
    }
    else {
      fVar11 = (float10)FUN_0053fc10();
      fVar3 = (float)fVar11;
      fVar11 = (float10)FUN_00499180();
      fVar4 = (float)fVar11;
      fVar11 = (float10)FUN_004991c0();
      fVar5 = (float)fVar11;
      fVar11 = (float10)FUN_0053fc90();
      fVar6 = (float)fVar11;
      if ((*(float *)(in_ECX + 0xd0) <= fVar3) || (fVar4 <= *(float *)(in_ECX + 0xd0))) {
        if ((*(float *)(in_ECX + 0xd0) < fVar4) ||
           (*(float *)(in_ECX + 0xd0) < fVar5 == (*(float *)(in_ECX + 0xd0) == fVar5))) {
          if ((*(float *)(in_ECX + 0xd0) <= fVar5) || (fVar6 <= *(float *)(in_ECX + 0xd0))) {
            fVar3 = 0.0;
          }
          else {
            fVar3 = (fVar6 - *(float *)(in_ECX + 0xd0)) / (fVar6 - fVar5);
          }
        }
        else {
          fVar3 = 1.0;
        }
      }
      else {
        fVar3 = (*(float *)(in_ECX + 0xd0) - fVar3) / (fVar4 - fVar3);
      }
      iVar9 = *(int *)(in_ECX + 0x10);
      fVar4 = 1.0 - fVar3;
      *(float *)(in_ECX + 200) = *(float *)(iVar9 + 0x58) * fVar3 + fVar4 * *(float *)(iVar9 + 0x60)
      ;
      iVar10 = *(int *)(in_ECX + 0x14);
      *(float *)(in_ECX + 0xcc) = *(float *)(iVar9 + 0x5c) * fVar3 + *(float *)(iVar9 + 100) * fVar4
      ;
      if (iVar10 != 0) {
        fVar6 = *(float *)(in_ECX + 0xd8) * *(float *)(in_ECX + 200);
        *(float *)(in_ECX + 200) = fVar6;
        fVar5 = 1.0 - *(float *)(in_ECX + 0xd8);
        *(float *)(in_ECX + 200) =
             (*(float *)(iVar10 + 0x58) * fVar3 + *(float *)(iVar10 + 0x60) * fVar4) * fVar5 + fVar6
        ;
        fVar6 = *(float *)(in_ECX + 0xd8) * *(float *)(in_ECX + 0xcc);
        *(float *)(in_ECX + 0xcc) = fVar6;
        *(float *)(in_ECX + 0xcc) =
             (*(float *)(iVar10 + 100) * fVar4 + *(float *)(iVar10 + 0x5c) * fVar3) * fVar5 + fVar6;
      }
    }
    cVar8 = FUN_004e9f40();
    if (cVar8 == '\0') {
      fVar11 = (float10)FUN_00410ee0();
      *(float *)(in_ECX + 200) =
           *(float *)(in_ECX + 200) -
           ((*(float *)(in_ECX + 0xcc) - (float)fVar11) /
           (*(float *)(in_ECX + 0xcc) - _DAT_00b03134)) * (*(float *)(in_ECX + 200) - _DAT_00b03134)
      ;
      *(float *)(in_ECX + 0xcc) = (float)fVar11;
      return;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 200) = *(undefined4 *)(iVar9 + 0x60);
    *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(iVar9 + 100);
    if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = **(int **)(DAT_00b333cc + 0xb0);
    }
    FUN_006ecc80();
    fVar11 = (float10)FUN_004cace0();
    local_30 = (float)((fVar11 - (float10)*(float *)(iVar10 + 0x90)) * (float10)_DAT_00b36670);
    if (1.0 < local_30) {
      local_30 = 1.0;
    }
    local_20 = *(undefined4 *)(iVar9 + 0x68);
    local_1c = *(undefined4 *)(iVar9 + 0x6c);
    local_10 = 1.0 - local_30;
    pfVar1 = (float *)(in_ECX + 0x48);
    local_18 = 0;
    local_14 = 0;
    local_8 = 0;
    local_4 = 0;
    local_c = local_30;
    FUN_005400e0(pfVar1,&local_20,0);
    if ((*(int *)(in_ECX + 0xdc) == 3) || (*(int *)(in_ECX + 0xdc) == 2)) {
      *pfVar1 = *pfVar1 * *(float *)(in_ECX + 0x6c);
      *(float *)(in_ECX + 0x4c) = *(float *)(in_ECX + 0x70) * *(float *)(in_ECX + 0x4c);
      *(float *)(in_ECX + 0x50) = *(float *)(in_ECX + 0x74) * *(float *)(in_ECX + 0x50);
      bVar7 = local_30 <= 0.5;
      iVar9 = *(int *)(*(int *)(in_ECX + 0x2c) + 0xc);
      if (bVar7) {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 | 1;
      }
      iVar9 = *(int *)(*(int *)(in_ECX + 0x2c) + 8);
      if (bVar7) {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 | 1;
      }
      iVar9 = FUN_00452a60();
      if (bVar7) {
        *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar9 + 0x18) = *(ushort *)(iVar9 + 0x18) | 1;
      }
      iVar9 = *(int *)(*(int *)(in_ECX + 0x28) + 8);
      if (bVar7) {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 | 1;
      }
      iVar9 = *(int *)(*(int *)(in_ECX + 0x28) + 0xc);
      if (bVar7) {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 & 0xfffe;
      }
      else {
        puVar2 = (ushort *)(iVar9 + 0x18);
        *puVar2 = *puVar2 | 1;
      }
      if (bVar7) {
        puVar2 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
        *puVar2 = *puVar2 & 0xfffe;
        return;
      }
      puVar2 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
      *puVar2 = *puVar2 | 1;
    }
  }
  return;
}



void FUN_00542260(undefined4 param_1,char param_2)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  if (param_2 == '\0') {
    *(undefined4 *)(in_ECX + 0x18) = param_1;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
  }
  else {
    *(undefined4 *)(in_ECX + 0x1c) = param_1;
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffff7;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0xd8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0xd0);
  *(undefined4 *)(DAT_00b333c4 + 0x6e8) = 0;
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffffe | 2;
  FUN_00540850();
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0053bbc0();
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0053d6c0();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005422f0(void)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  int local_4;
  
  if (*(int *)(in_ECX + 0xc) == 0) {
    return;
  }
  if (((*(byte *)(in_ECX + 0xfc) & 1) == 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    local_4 = 0x18;
    if (*(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd0)) {
      local_4 = 0;
    }
    if (((float)(int)((0xff - (uint)*(byte *)(*(int *)(in_ECX + 0xc) + 0x54)) * 0x16) * 0.003921569
         + 1.0 < ((float)local_4 + *(float *)(in_ECX + 0xd0)) - *(float *)(in_ECX + 0xd4)) &&
       (*(int *)(in_ECX + 0x14) == 0)) goto LAB_00542372;
  }
  else {
LAB_00542372:
    iVar5 = FUN_004eece0();
    *(int *)(in_ECX + 0x18) = iVar5;
    if (iVar5 == 0) {
      uVar6 = FUN_0046b250(0x15e,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
      uVar6 = FUN_009832e6(uVar6);
      *(undefined4 *)(in_ECX + 0x18) = uVar6;
    }
    if (*(int *)(DAT_00b33a98 + 0xbc) != 0) {
      for (piVar1 = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4);
          (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]) {
        FUN_004a2e90();
      }
    }
  }
  iVar5 = *(int *)(in_ECX + 0x1c);
  if ((((*(int *)(in_ECX + 0x10) == 0) || (cVar4 = FUN_0045a500(), cVar4 == '\0')) ||
      ((*(uint *)(DAT_00b33b00 + 0x18) >> 4 & 1) != 0)) && (iVar5 == 0)) {
    iVar5 = *(int *)(in_ECX + 0x18);
    if (((*(int *)(DAT_00b333c4 + 0x6e8) != 0) &&
        (iVar2 = *(int *)(*(int *)(DAT_00b333c4 + 0x6e8) + 0x24), iVar2 != 0)) &&
       (*(int *)(in_ECX + 0xdc) != 2)) {
      iVar5 = iVar2;
    }
  }
  else {
    iVar5 = *(int *)(in_ECX + 0x1c);
  }
  if (((iVar5 == 0) || ((*(int *)(in_ECX + 0x14) != 0 && ((*(byte *)(in_ECX + 0xfc) & 0x10) == 0))))
     || (iVar5 == *(int *)(in_ECX + 0x10))) {
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffffe;
  }
  else {
    if ((*(byte *)(in_ECX + 0xfc) & 0x10) == 0) {
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x10);
    }
    else {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(int *)(in_ECX + 0x38) != 0) {
        FUN_0053d6c0();
      }
    }
    *(int *)(in_ECX + 0x10) = iVar5;
    cVar4 = FUN_0045a500();
    if (cVar4 == '\0') {
      *(undefined4 *)(in_ECX + 0xd4) = *(undefined4 *)(in_ECX + 0xd0);
    }
    FUN_00540850();
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 1;
  }
  if (*(int *)(in_ECX + 0x10) == 0) {
    fVar3 = 0.0;
  }
  else {
    if (*(int *)(in_ECX + 0x14) == 0) {
      *(undefined4 *)(in_ECX + 0xd8) = 0x3f800000;
      goto LAB_00542517;
    }
    local_4 = 0x18;
    if (*(float *)(in_ECX + 0xd4) <= *(float *)(in_ECX + 0xd0)) {
      local_4 = 0;
    }
    fVar3 = (((float)local_4 + *(float *)(in_ECX + 0xd0)) - *(float *)(in_ECX + 0xd4)) /
            (_DAT_00b36630 +
            (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x4b) * 0.003921569 *
            (_DAT_00b36628 - _DAT_00b36630));
  }
  *(float *)(in_ECX + 0xd8) = fVar3;
LAB_00542517:
  if ((*(byte *)(in_ECX + 0xfc) & 8) != 0) {
    *(float *)(in_ECX + 0xd8) =
         (_DAT_00b36638 + 1.0) * (*(float *)(in_ECX + 0xd8) - *(float *)(in_ECX + 0xf4)) +
         *(float *)(in_ECX + 0xf4);
  }
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_00540850();
  }
  if (*(float *)(in_ECX + 0xd8) <= 1.0) {
    return;
  }
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffff7;
  *(undefined4 *)(in_ECX + 0xd8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0xf4) = 0;
  return;
}



void FUN_00542590(void)

{
  byte bVar1;
  float fVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  float *pfVar6;
  int *piVar7;
  DWORD DVar8;
  int iVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int *piVar14;
  float *pfVar15;
  float10 fVar16;
  float10 fVar17;
  float10 extraout_ST0;
  float10 fVar18;
  float10 fVar19;
  int *local_18;
  float local_14;
  float local_10;
  float local_8;
  float *local_4;
  
  piVar14 = *(int **)(in_ECX + 0xe0);
  local_18 = piVar14;
  if (DAT_00b3667c != '\0') {
    local_18 = (int *)FUN_00401f00(8);
    if (local_18 == (int *)0x0) {
      local_18 = (int *)0x0;
    }
    else {
      *local_18 = 0;
      local_18[1] = 0;
    }
    fVar12 = 0.0;
    local_8 = 0.0;
    local_4 = (float *)0x0;
    if (piVar14 != (int *)0x0) {
      do {
        pfVar15 = (float *)*piVar14;
        if (pfVar15 == (float *)0x0) break;
        if (((uint)pfVar15[3] & 0x80000000) == 0) {
          if (*local_18 != 0) {
            piVar7 = (int *)FUN_00401f00(8);
            if (piVar7 == (int *)0x0) {
              piVar7 = (int *)0x0;
            }
            else {
              *piVar7 = *local_18;
              piVar7[1] = 0;
            }
            piVar7[1] = local_18[1];
            local_18[1] = (int)piVar7;
          }
          *local_18 = (int)pfVar15;
        }
        else {
          if (pfVar15[2] == 4.2039e-45) {
            DAT_00b365c0 = DAT_00b365c0 - 1;
          }
          fVar2 = *pfVar15;
          fVar13 = fVar12;
          if ((fVar2 != 0.0) && (fVar13 = fVar2, fVar12 != 0.0)) {
            pfVar6 = (float *)FUN_00401f00(8);
            if (pfVar6 == (float *)0x0) {
              pfVar6 = (float *)0x0;
            }
            else {
              *pfVar6 = fVar12;
              pfVar6[1] = 0.0;
            }
            pfVar6[1] = (float)local_4;
            local_4 = pfVar6;
          }
          FUN_00401f20(pfVar15);
          fVar12 = fVar13;
        }
        piVar14 = (int *)piVar14[1];
      } while (piVar14 != (int *)0x0);
      local_8 = fVar12;
    }
    pfVar15 = &local_8;
    do {
      piVar14 = (int *)*pfVar15;
      if (piVar14 == (int *)0x0) break;
      pfVar15 = (float *)pfVar15[1];
      cVar5 = FUN_006b73a0();
      if (cVar5 != '\0') {
        bVar4 = false;
        piVar7 = local_18;
        do {
          if ((piVar7 == (int *)0x0) || ((undefined4 *)*piVar7 == (undefined4 *)0x0)) {
            if (!bVar4) {
              FUN_006b73c0();
            }
            break;
          }
          if (**(int **)*piVar7 == *piVar14) {
            bVar4 = true;
          }
          piVar7 = (int *)piVar7[1];
        } while (!bVar4);
      }
      FUN_006b73e0();
      FUN_00401f20(piVar14);
    } while (pfVar15 != (float *)0x0);
    FUN_004526e0();
    FUN_004526e0();
    FUN_00401f20(*(undefined4 *)(in_ECX + 0xe0));
    *(int **)(in_ECX + 0xe0) = local_18;
    DAT_00b3667c = '\0';
  }
  if ((*(byte *)(in_ECX + 0xfc) & 3) != 0) {
    FUN_005403d0(*(undefined4 *)(in_ECX + 0x10));
  }
  if (local_18 != (int *)0x0) {
    fVar18 = (float10)0;
    do {
      fVar19 = (float10)1;
      piVar14 = (int *)*local_18;
      if (piVar14 == (int *)0x0) break;
      if ((undefined4 *)*piVar14 != (undefined4 *)0x0) {
        if ((*(int *)(in_ECX + 0xdc) == 3) || (*(int *)(in_ECX + 0xdc) == 2)) {
          iVar9 = piVar14[1];
          iVar11 = *(int *)(in_ECX + 0x10);
          if ((iVar9 != iVar11) && (iVar9 != *(int *)(in_ECX + 0x14))) goto LAB_00542781;
          if (piVar14[2] != 3) {
            if (*(char *)(*(int *)(DAT_00b33398 + 0x24) + 0xa5) == '\0') {
              if (piVar14[2] == 1) {
                local_8 = (float)(((float10)0.9990000128746033 - fVar18) *
                                  (float10)*(byte *)(iVar11 + 0x4e) * (float10)0.003921568859368563
                                 + fVar18);
                if (*(int *)(in_ECX + 0x14) == 0) {
                  fVar12 = 0.0;
                }
                else {
                  fVar12 = (float)((float10)*(byte *)(*(int *)(in_ECX + 0x14) + 0x4f) *
                                   (float10)0.003921568859368563 * (float10)0.9989999999525025 +
                                  (float10)0.0010000000474974513);
                }
                if (iVar9 == iVar11) {
                  fVar16 = (float10)local_8;
                  fVar17 = fVar18;
                  if (fVar16 <= (float10)*(float *)(in_ECX + 0xd8)) {
                    fVar17 = ((float10)*(float *)(in_ECX + 0xd8) - fVar16) / (fVar19 - fVar16);
                  }
                  local_14 = (float)fVar17;
                  if ((float10)fVar12 <= (float10)*(float *)(in_ECX + 0xd8)) {
                    local_10 = (float)fVar18;
                  }
                  else {
                    local_10 = (float)(fVar19 - (float10)*(float *)(in_ECX + 0xd8) / (float10)fVar12
                                      );
                  }
                }
                else {
                  fVar17 = fVar18;
                  if ((float10)*(float *)(in_ECX + 0xd8) < (float10)fVar12) {
                    fVar17 = fVar19 - (float10)*(float *)(in_ECX + 0xd8) / (float10)fVar12;
                  }
                  local_14 = (float)fVar17;
                  fVar17 = (float10)local_8;
                  if (fVar17 <= (float10)*(float *)(in_ECX + 0xd8)) {
                    local_10 = (float)(((float10)*(float *)(in_ECX + 0xd8) - fVar17) /
                                      (fVar19 - fVar17));
                  }
                  else {
                    local_10 = (float)fVar18;
                  }
                }
              }
              else {
                if (iVar9 == iVar11) {
                  local_14 = *(float *)(in_ECX + 0xd8);
                  fVar19 = fVar19 - (float10)*(float *)(in_ECX + 0xd8);
                }
                else {
                  local_14 = (float)(fVar19 - (float10)*(float *)(in_ECX + 0xd8));
                  fVar19 = (float10)*(float *)(in_ECX + 0xd8);
                }
                local_10 = (float)fVar19;
              }
              if (iVar9 == iVar11) {
                iVar11 = *(int *)(in_ECX + 0x14);
              }
              cVar5 = FUN_005405c0(*(undefined4 *)*piVar14,iVar11);
              if ((cVar5 == '\0') ||
                 (fVar18 = extraout_ST0, local_10 < local_14 != (local_10 == local_14))) {
                FUN_00540600(local_14);
                fVar18 = (float10)0;
              }
            }
            goto LAB_00542aed;
          }
          cVar5 = FUN_006b7260();
          if (cVar5 == '\0') {
            DVar8 = GetTickCount();
            uVar3 = piVar14[3];
            uVar10 = uVar3 & 0x7fffffff;
            if (0x80000000 < uVar10) {
              uVar10 = 0x80000000;
            }
            if (uVar10 < DVar8) {
              piVar14[3] = (DVar8 + 0x1e ^ uVar3) & 0x7fffffff ^ uVar3;
              bVar1 = *(byte *)(piVar14[1] + 0x52);
              iVar9 = FUN_0047df80(0);
              if (iVar9 % (int)((uint)bVar1 * (uint)DAT_00b365c0) == 0) {
                if (piVar14[1] == *(int *)(in_ECX + 0x10)) {
                  fVar12 = 0.0;
                  local_8 = (float)*(byte *)(*(int *)(in_ECX + 0x10) + 0x50) * 0.003921569 * 0.999 +
                            0.0;
                  if (local_8 <= *(float *)(in_ECX + 0xd8)) {
                    fVar12 = (*(float *)(in_ECX + 0xd8) - local_8) / (1.0 - local_8);
                  }
                }
                else {
                  local_8 = (float)*(byte *)(*(int *)(in_ECX + 0x14) + 0x51) * 0.003921569 * 0.999 +
                            0.001;
                  if (local_8 <= *(float *)(in_ECX + 0xd8)) {
                    fVar12 = 0.0;
                  }
                  else {
                    fVar12 = 1.0 - *(float *)(in_ECX + 0xd8) / local_8;
                  }
                }
                fVar18 = (float10)0;
                if (fVar12 != 0.0) {
                  if (*(char *)(*(int *)(DAT_00b33398 + 0x24) + 0xa5) == '\0') {
                    FUN_00540600(fVar12);
                  }
                  fVar18 = (float10)0;
                  *(float *)(in_ECX + 0xe4) = fVar12;
                  *(undefined4 *)(in_ECX + 0xe8) = DAT_00b33ea0;
                }
                goto LAB_00542aed;
              }
            }
          }
        }
        else {
LAB_00542781:
          cVar5 = FUN_006b7260();
          if (cVar5 != '\0') {
            iVar9 = *(int *)(in_ECX + 0x10);
            if (piVar14[1] == iVar9) {
              iVar9 = *(int *)(in_ECX + 0x14);
            }
            cVar5 = FUN_005405c0(*(undefined4 *)*piVar14,iVar9);
            if (cVar5 == '\0') {
              FUN_006b7240();
            }
          }
          piVar14[3] = piVar14[3] | 0x80000000;
          DAT_00b3667c = '\x01';
        }
        fVar18 = (float10)0;
      }
LAB_00542aed:
      local_18 = (int *)local_18[1];
    } while (local_18 != (int *)0x0);
  }
  if (*(char *)(*(int *)(DAT_00b33398 + 0x24) + 0xa5) != '\0') {
    for (piVar14 = *(int **)(in_ECX + 0xe0); (piVar14 != (int *)0x0 && (*piVar14 != 0));
        piVar14 = (int *)piVar14[1]) {
      FUN_006b7240();
    }
  }
  return;
}



void FUN_00542b50(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  local_4 = in_ECX;
  FUN_00977c50(3);
  if (in_ECX[0xc] != 0) {
    FUN_00708560(&local_4,6);
    puVar1 = local_4;
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00707610();
    FUN_00708560(&local_4,6);
    puVar1 = local_4;
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00707610();
  }
  if (in_ECX[0xd] != 0) {
    FUN_00708560(&local_4,6);
    puVar1 = local_4;
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00707610();
    FUN_00708560(&local_4,6);
    puVar1 = local_4;
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00707610();
  }
  if (in_ECX[10] != 0) {
    FUN_00708560(&local_4,6);
    puVar1 = local_4;
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00707610();
    FUN_00707530(4);
    FUN_00708560(&local_4,6);
    if (local_4 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(local_4 + 1);
      if ((LVar2 == 0) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
    }
    FUN_00707610();
    FUN_00707530(4);
  }
  if (in_ECX[9] != 0) {
    FUN_00540f50();
  }
  FUN_00977c50(2);
  return;
}



void FUN_00542d30(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c08d8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_2 != (int *)0x0) {
    if (*(ushort *)(param_2 + 2) == 0xffff) {
      pcVar4 = (char *)param_2[1];
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_2 + 2);
    }
    if (uVar5 != 0) {
      uVar6 = (**(code **)(*param_2 + 0x14))(uVar3);
      FUN_004028d0(uVar6,0);
      puVar7 = (undefined1 *)param_2[1];
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00a2f7ec;
      }
      FUN_00412fa0(puVar7);
    }
  }
  FUN_00544160(param_1,0,param_3,param_4);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00542ea0(void)

{
  uint uVar1;
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
  if (DAT_00b365c4 == 0) {
    local_10 = FUN_00401f00(0x104,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b365c4 = FUN_00540fd0();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b365c4 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542f20(undefined4 param_1)

{
  ushort *puVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  float10 fVar8;
  
  cVar3 = FUN_0045a500();
  if ((cVar3 != '\0') && ((*(uint *)(DAT_00b33b00 + 0x18) >> 10 & 1) == 0)) {
    return;
  }
  FUN_00977c50(3);
  fVar8 = (float10)FUN_00402bd0();
  *(float *)(in_ECX + 0xd0) = (float)fVar8;
  if ((DAT_00b333c4 != 0) && (iVar5 = FUN_006ecc80(), iVar5 != 0)) {
    if (*(short *)(DAT_00b333cc + 0xb6) == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = **(int **)(DAT_00b333cc + 0xb0);
    }
    fVar2 = *(float *)(iVar5 + 0x90);
    FUN_006ecc80();
    fVar8 = (float10)FUN_004cace0();
    if ((float10)fVar2 < fVar8) {
      *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 4;
      goto LAB_00542fc8;
    }
  }
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffffb;
LAB_00542fc8:
  if ((*(int *)(in_ECX + 0xdc) == 1) || (*(int *)(in_ECX + 0xdc) == 0)) {
    puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
    *puVar1 = *puVar1 | 1;
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x28) + 0xc) + 0x18);
    *puVar1 = *puVar1 | 1;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
    puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 0x28) + 0xc) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
  }
  FUN_005422f0();
  cVar3 = FUN_0045a500();
  if (cVar3 != '\0') {
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 1;
  }
  FUN_005418f0();
  FUN_00541dd0();
  FUN_0053ff90();
  FUN_00542590();
  if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x20) + 0xc))();
  }
  if (*(int **)(in_ECX + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0xc))();
  }
  if (*(int **)(in_ECX + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0xc))();
  }
  if (*(int **)(in_ECX + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 0xc))();
  }
  if ((((*(byte *)(in_ECX + 0xfc) & 0x20) != 0) &&
      (uVar6 = FUN_00402c00(), *(uint *)(in_ECX + 0xec) < uVar6)) ||
     (cVar3 = FUN_0045a500(), cVar3 != '\0')) {
    cVar3 = FUN_0053c5e0();
    if (((*(int *)(in_ECX + 0x30) != 0) && (cVar3 != '\0')) &&
       (*(int *)(*(int *)(in_ECX + 0x30) + 0x70) == 0)) {
      cVar4 = FUN_0045a500();
      *(uint *)(*(int *)(in_ECX + 0x30) + 0x70) = (cVar4 != '\0') + 1;
    }
    if (((*(int *)(in_ECX + 0x34) != 0) && (cVar3 != '\0')) &&
       (*(int *)(*(int *)(in_ECX + 0x34) + 0x70) == 0)) {
      cVar3 = FUN_0045a500();
      *(uint *)(*(int *)(in_ECX + 0x34) + 0x70) = (cVar3 != '\0') + 1;
    }
    uVar7 = FUN_00402c00();
    *(undefined4 *)(in_ECX + 0xec) = uVar7;
  }
  if (*(int **)(in_ECX + 0x30) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x30) + 0xc))();
  }
  if (*(int **)(in_ECX + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0xc))();
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0053f4c0(param_1);
  }
  if (0.0 < *(float *)(in_ECX + 0xe4)) {
    iVar5 = DAT_00b33ea0 - *(int *)(in_ECX + 0xe8);
    fVar2 = (float)iVar5;
    if (iVar5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    *(float *)(in_ECX + 0xe4) = 1.0 - fVar2 / (_DAT_00b36640 * 1000.0);
  }
  if (*(float *)(in_ECX + 0xe4) < 0.0) {
    *(undefined4 *)(in_ECX + 0xe4) = 0;
  }
  FUN_00498060(in_ECX + 0x48);
  FUN_00977c50(2);
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) & 0xfffffffc;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543200(int param_1,char param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *_Str1;
  int iVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ba5f6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    uVar4 = FUN_0046b250(0x15f,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03d98,0,uVar3);
    param_1 = FUN_009832e6(uVar4);
    if (param_1 == 0) goto LAB_005434f7;
  }
  if ((*(int *)(in_ECX + 0xc) == param_1) && (param_2 == '\0')) goto LAB_005434f7;
  *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) | 0x3f00;
  *(int *)(in_ECX + 0xc) = param_1;
  FUN_00540380();
  if ((*(int *)(in_ECX + 0x24) != 0) &&
     ((*(int *)(in_ECX + 0xdc) == 3 || (*(int *)(in_ECX + 0xdc) == 2)))) {
    uVar4 = (**(code **)(*(int *)(*(int *)(in_ECX + 0xc) + 0x18) + 0x14))();
    FUN_00544780(uVar4);
    uVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 4))(10,0,1);
    FUN_007b8940(uVar4);
  }
  if ((*(int *)(in_ECX + 0x28) != 0) &&
     ((*(int *)(in_ECX + 0xdc) == 3 || (*(int *)(in_ECX + 0xdc) == 2)))) {
    FUN_00542d30(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 8),*(int *)(in_ECX + 0xc) + 0x38,
                 &LAB_00542e40,0);
    iVar7 = *(int *)(in_ECX + 0xc) + 0x44;
    if ((DAT_00b43070 == '\0') && (iVar7 != 0)) {
      _Str1 = *(char **)(*(int *)(in_ECX + 0xc) + 0x48);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar5 = __stricmp(_Str1,"Sky\\SunGlare.dds");
      if (iVar5 == 0) {
        FUN_0053fbe0(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc),
                     "Textures\\Sky\\SunGlareNonHDR.dds",&LAB_00542e70,0);
        goto LAB_00543356;
      }
    }
    FUN_00542d30(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc),iVar7,&LAB_00542e70,0);
  }
LAB_00543356:
  FUN_00977c50(3);
  cVar1 = *(char *)(*(int *)(in_ECX + 0xc) + 0x55);
  if ((cVar1 < '\0') && (*(int *)(in_ECX + 0x30) == 0)) {
    iVar7 = FUN_00401f00(0x7c);
    uStack_4 = 0;
    if (iVar7 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_0053d260("Masser",_DAT_00b365c8,_DAT_00b365d0,_DAT_00b365d8,_DAT_00b365e0,
                                   _DAT_00b365e8,DAT_00b365f0);
    }
    *(int **)(in_ECX + 0x30) = piVar6;
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar6 + 0x10))(*(undefined4 *)(in_ECX + 8),"Masser");
  }
  else if (-1 < cVar1) {
    if (*(undefined4 **)(in_ECX + 0x30) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x30))(1);
    }
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  bVar2 = *(byte *)(*(int *)(in_ECX + 0xc) + 0x55) >> 6 & 1;
  if ((bVar2 == 0) || (*(int *)(in_ECX + 0x34) != 0)) {
    if (bVar2 == 0) {
      if (*(undefined4 **)(in_ECX + 0x34) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x34))(1);
      }
      *(undefined4 *)(in_ECX + 0x34) = 0;
    }
  }
  else {
    iVar7 = FUN_00401f00(0x7c);
    uStack_4 = 1;
    if (iVar7 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = (int *)FUN_0053d260("Secunda",_DAT_00b365f8,_DAT_00b36600,_DAT_00b36608,_DAT_00b36610
                                   ,_DAT_00b36618,DAT_00b36620);
    }
    *(int **)(in_ECX + 0x34) = piVar6;
    uStack_4 = 0xffffffff;
    (**(code **)(*piVar6 + 0x10))(*(undefined4 *)(in_ECX + 8),"Secunda");
  }
  FUN_00977c50(2);
  FUN_00707610();
  FUN_00707980();
  FUN_00707370(0,1);
LAB_005434f7:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00543510(void)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00977c50(3,uVar2);
  if (((*(int *)(in_ECX + 0x2c) != 0) && (*(int *)(in_ECX + 0x10) != 0)) &&
     (cVar1 = FUN_0045a500(), cVar1 == '\0')) {
    uVar2 = 0;
    do {
      iVar8 = (uVar2 * 3 + 6) * 4;
      iVar3 = *(int *)(in_ECX + 0x10) + iVar8;
      if (iVar3 != 0) {
        if (*(ushort *)(iVar3 + 8) == 0xffff) {
          pcVar4 = *(char **)(iVar3 + 4);
          pcVar10 = pcVar4 + 1;
          do {
            cVar1 = *pcVar4;
            pcVar4 = pcVar4 + 1;
          } while (cVar1 != '\0');
          uVar5 = (int)pcVar4 - (int)pcVar10;
        }
        else {
          uVar5 = (uint)*(ushort *)(iVar3 + 8);
        }
        if (uVar5 != 0) {
          local_14 = 0;
          local_10 = 0;
          local_e = 0;
          puVar6 = *(undefined1 **)(iVar8 + 4 + *(int *)(in_ECX + 0x10));
          local_4 = 0;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          uVar7 = (**(code **)(*(int *)(iVar8 + *(int *)(in_ECX + 0x10)) + 0x14))(puVar6);
          FUN_00402e30(&local_14,&DAT_00a2f884,uVar7);
          uVar7 = local_14;
          if (((DAT_00b33a04 != (int *)0x0) &&
              (iVar8 = (**(code **)(*DAT_00b33a04 + 4))(local_14,0,0,0xffffffff), iVar8 != 0)) &&
             (iVar8 = FUN_00707530(6), iVar8 != 0)) {
            uVar9 = FUN_00701e00(uVar7,&DAT_00b256d0,1);
            FUN_00707530(6);
            FUN_004057b0(uVar9);
          }
          local_4 = 0xffffffff;
          FUN_00401f20(uVar7);
          local_14 = 0;
          local_e = 0;
          local_10 = 0;
        }
      }
      uVar2 = (uVar2 + 1) % 3;
    } while (uVar2 < 2);
  }
  if (*(int *)(in_ECX + 0x30) != 0) {
    FUN_00544160(*(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x14),"Textures\\Sky\\MoonShadow.dds",
                 &LAB_00540ef0,0);
    *(undefined4 *)(*(int *)(in_ECX + 0x30) + 0x70) = 2;
  }
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00544160(*(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x14),"Textures\\Sky\\MoonShadow.dds",
                 &LAB_00540f20,0);
    *(undefined4 *)(*(int *)(in_ECX + 0x34) + 0x70) = 2;
  }
  if ((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    FUN_00542d30(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 8),*(int *)(in_ECX + 0xc) + 0x38,
                 &LAB_00542e40,0);
    iVar8 = *(int *)(in_ECX + 0xc) + 0x44;
    if ((DAT_00b43070 == '\0') && (iVar8 != 0)) {
      pcVar10 = *(char **)(*(int *)(in_ECX + 0xc) + 0x48);
      if (pcVar10 == (char *)0x0) {
        pcVar10 = "";
      }
      iVar3 = __stricmp(pcVar10,"Sky\\SunGlare.dds");
      if (iVar3 == 0) {
        FUN_0053fbe0(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc),
                     "Textures\\Sky\\SunGlareNonHDR.dds",&LAB_00542e70,0);
        goto LAB_00543767;
      }
    }
    FUN_00542d30(*(undefined4 *)(*(int *)(in_ECX + 0x28) + 0xc),iVar8,&LAB_00542e70,0);
  }
LAB_00543767:
  if ((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    uVar7 = (**(code **)(*(int *)(*(int *)(in_ECX + 0xc) + 0x18) + 0x14))();
    FUN_00544780(uVar7);
    uVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 4))(10,0,1);
    FUN_007b8940(uVar7);
  }
  FUN_00977c50(2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005437c0(void)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_0053d6c0();
  }
  if (*(int *)(in_ECX + 0x2c) != 0) {
    FUN_0053bbc0();
  }
  FUN_0045ba00(&local_10,4);
  if (local_10 != 0) {
    uVar3 = FUN_0046b250(local_10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
    uVar3 = FUN_009832e6(uVar3);
    *(undefined4 *)(in_ECX + 0x10) = uVar3;
  }
  FUN_0045ba00(&local_c,4);
  if (local_c != 0) {
    uVar3 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
    uVar3 = FUN_009832e6(uVar3);
    *(undefined4 *)(in_ECX + 0x14) = uVar3;
  }
  FUN_0045ba00(&local_8,4);
  if (local_8 != 0) {
    uVar3 = FUN_0046b250(local_8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
    uVar3 = FUN_009832e6(uVar3);
    *(undefined4 *)(in_ECX + 0x18) = uVar3;
  }
  if (0x5c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0045ba00(&local_4,4);
    if (local_4 != 0) {
      uVar3 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05400,0);
      uVar3 = FUN_009832e6(uVar3);
      *(undefined4 *)(in_ECX + 0x1c) = uVar3;
    }
  }
  pfVar1 = (float *)(in_ECX + 0xd0);
  FUN_004534d0(pfVar1,4);
  iVar4 = __isnan((double)*pfVar1);
  if (iVar4 == 0) {
    iVar4 = FUN_00983ffd((double)*pfVar1);
    if (iVar4 == 0) goto LAB_0054391b;
  }
  else {
LAB_0054391b:
    *pfVar1 = 0.0;
  }
  pfVar2 = (float *)(in_ECX + 0xd4);
  FUN_004534d0(pfVar2,4);
  iVar4 = __isnan((double)*pfVar2);
  if (iVar4 == 0) {
    iVar4 = FUN_00983ffd((double)*pfVar2);
    if (iVar4 != 0) goto LAB_00543960;
  }
  *pfVar2 = *pfVar1;
LAB_00543960:
  FUN_004534d0(in_ECX + 0xd8,4);
  FUN_004534d0(in_ECX + 0xdc,4);
  if (0x68 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_004534d0(&local_4,4);
    *(uint *)(in_ECX + 0xfc) = *(uint *)(in_ECX + 0xfc) ^ (*(uint *)(in_ECX + 0xfc) ^ local_4) & 8;
    FUN_004534d0(in_ECX + 0xf4,4);
  }
  *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x400;
  FUN_00542f20(0);
  *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xfffffbff;
  FUN_00540850();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00543a00(float param_1)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  byte bVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  bVar3 = 0;
  if (((*(float *)(in_ECX + 0xf0) < _DAT_00b36658) && (DAT_00b3667d != '\0')) &&
     (*(char *)(in_ECX + 0x100) == '\0')) {
    *(float *)(in_ECX + 0xf0) = param_1 + *(float *)(in_ECX + 0xf0);
    return;
  }
  uVar1 = *(undefined4 *)(in_ECX + 0xdc);
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if ((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x34) != 0)) {
    *(undefined4 *)(in_ECX + 0xdc) = 2;
    FUN_005418f0();
    FUN_00541dd0();
    if (*(int **)(in_ECX + 0x20) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0xc))();
    }
    if (*(int **)(in_ECX + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x2c) + 0xc))();
    }
    iVar2 = *(int *)(in_ECX + 8);
    if (iVar2 != 0) {
      bVar3 = *(byte *)(iVar2 + 0x18) & 1;
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
    }
    local_18 = DAT_00b350dc;
    uStack_c = *(undefined4 *)(in_ECX + 0x9c);
    local_14 = DAT_00b350e0;
    uStack_8 = *(undefined4 *)(in_ECX + 0xa0);
    local_10 = DAT_00b350e4;
    uStack_4 = *(undefined4 *)(in_ECX + 0xa4);
    FUN_00498060(&uStack_c);
  }
  FUN_007b4280(0);
  DAT_00b3667d = FUN_007c6310(*(undefined4 *)(in_ECX + 4),*(undefined4 *)(DAT_00b333cc + 0xdc),
                              *(undefined1 *)(in_ECX + 0x100));
  if (*(char *)(in_ECX + 0x100) != '\0') {
    *(undefined1 *)(in_ECX + 0x100) = 0;
  }
  if ((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x34) != 0)) {
    *(undefined4 *)(in_ECX + 0xdc) = uVar1;
    FUN_00542f20(0);
    iVar2 = *(int *)(in_ECX + 8);
    if (iVar2 != 0) {
      if (bVar3 == 0) {
        *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
      }
      else {
        *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
      }
    }
    FUN_00498060(&local_18);
  }
  return;
}



void FUN_00543bb0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xdc);
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 4)) && ((param_1 == 3 || (param_1 == 2)))) {
    FUN_00543510();
  }
  else if (((iVar1 == 3) || (iVar1 == 2)) && ((param_1 == 0 || (param_1 == 1)))) {
    FUN_00542b50();
    *(int *)(in_ECX + 0xdc) = param_1;
    return;
  }
  *(int *)(in_ECX + 0xdc) = param_1;
  return;
}



void FUN_00543c10(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ba65b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a570c8;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[1] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00543c90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ba68b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a570c8;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00543d30(int *param_1)

{
  ushort *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0xdc,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0070b780(0);
  }
  puVar2 = *(undefined4 **)(in_ECX + 4);
  local_4 = 0xffffffff;
  if (puVar2 != puVar5) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(in_ECX + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
  *puVar1 = *puVar1 | 2;
  puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
  *puVar1 = *puVar1 | 0x20;
  (**(code **)(*param_1 + 0x84))(*(undefined4 *)(in_ECX + 4),1);
  *unaff_FS_OFFSET = unaff_EBX;
  return;
}



void FUN_00543e00(byte param_1)

{
  FUN_00543c90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00543e40(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  ushort *puVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba6ce;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00436fa0(3);
  *in_ECX = &PTR_FUN_00a570e4;
  local_4 = 0;
  in_ECX[10] = param_1;
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
  }
  in_ECX[0xb] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 0xd) = param_4;
  FUN_00434600(param_2);
  FUN_00434cb0(1,0);
  in_ECX[0xc] = param_3;
  if ((in_ECX[10] != 0) && (*(char *)(in_ECX + 0xd) != '\0')) {
    puVar1 = (ushort *)(in_ECX[10] + 0x18);
    *puVar1 = *puVar1 | 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00543ef0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ba703;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x2c);
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x28);
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00436fd0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00543f90(void)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ba73e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = (undefined4 *)0x0;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) != 0) {
      uVar4 = (**(code **)(*DAT_00b35300 + 4))(*(int *)(in_ECX + 0x20),0,uVar1);
      FUN_0075fa90(uVar4);
      puVar2 = (undefined4 *)0x0;
      goto LAB_00544010;
    }
  }
  else {
    puVar2 = (undefined4 *)FUN_004a1ed0(*(int *)(in_ECX + 0x24),0);
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
LAB_00544010:
      puVar6 = puVar2;
      if (puVar2 != (undefined4 *)0x0) {
        iVar3 = FUN_00401f00(0x30);
        local_4._0_1_ = 1;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_007043b0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0075fa90(uVar4);
        FUN_004057b0(puVar2);
        goto LAB_005440aa;
      }
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    FUN_004a7a60("Warning:  Unable to locate texture file: %s",0);
  }
  else {
    iVar3 = FUN_00401f00(0x30);
    local_4._0_1_ = 2;
    if (iVar3 == 0) {
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0075fa90(0);
    }
    else {
      uVar4 = FUN_00704530(*(undefined4 *)(in_ECX + 0x20),0);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0075fa90(uVar4);
    }
  }
LAB_005440aa:
  local_4 = 0xffffffff;
  if (puVar6 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar6 + 1);
    if (LVar5 == 0) {
      (**(code **)*puVar6)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00544160(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  uint *unaff_FS_OFFSET;
  int local_118;
  undefined1 local_114 [260];
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ba76e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_118;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffedc;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar3 = (undefined1 *)0x0;
  if (param_2 != 0) {
    FUN_0047d8f0(param_2,local_114,uVar1);
    puVar3 = local_114;
  }
  local_118 = FUN_00401f00(0x38);
  local_4 = 0;
  if (local_118 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00543e40(param_1,puVar3,param_3,param_4);
  }
  local_4 = 0xffffffff;
  (**(code **)(*g_IOManager_singleton + 0x3c))(uVar2);
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00544240(byte param_1)

{
  FUN_00543ef0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005442a0(void)

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
  puStack_8 = &LAB_009ba7b3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543c10(uVar2);
  *in_ECX = &PTR_FUN_00a57144;
  in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  in_ECX[3] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00544330(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ba7e3;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a57144;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00543c90(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00544400(byte param_1)

{
  FUN_00544330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544420(uint param_1,undefined4 param_2)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  int in_ECX;
  uint uVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar11 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar7 = _DAT_00b3668c & 1;
    fVar2 = *(float *)(param_1 + 0xd0);
    *(undefined4 *)(in_ECX + 0xc) = 0;
    if (uVar7 == 0) {
      _DAT_00b3668c = _DAT_00b3668c | 1;
      _DAT_00b36680 = 0;
      _DAT_00b36684 = 0;
      _DAT_00b36688 = 0;
    }
    FUN_0060cf60(param_1,param_2);
    if ((*(int *)(param_1 + 0xdc) == 3) || (*(int *)(param_1 + 0xdc) == 2)) {
      if ((*(byte *)(*(int *)(in_ECX + 4) + 0x18) >> 5 & 1) == 0) {
        puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
        *puVar1 = *puVar1 | 1;
        return;
      }
      fVar12 = (float10)FUN_004991c0();
      fVar13 = (float10)FUN_0053fc90();
      fVar3 = (float)fVar13;
      fVar13 = (float10)FUN_00499180();
      fVar14 = (float10)FUN_0053fc10();
      fVar4 = (float)fVar14;
      fVar6 = fVar3 - (fVar3 - (float)fVar12) * 0.5;
      fVar5 = (float)fVar13 - ((float)fVar13 - fVar4) * 0.5;
      if ((fVar2 <= fVar4) || (fVar5 <= fVar2)) {
        if ((fVar2 < fVar5) || (fVar6 < fVar2)) {
          if ((fVar2 <= fVar6) || (fVar3 <= fVar2)) {
            fVar2 = 1.0;
          }
          else {
            fVar2 = (fVar2 - fVar6) / (fVar3 - fVar6);
          }
        }
        else {
          fVar2 = 0.0;
        }
      }
      else {
        fVar2 = (fVar5 - fVar2) / (fVar5 - fVar4);
      }
      *(float *)(in_ECX + 0xc) = fVar2;
      if (*(float *)(in_ECX + 0xc) <= 0.0) {
        puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
        *puVar1 = *puVar1 | 1;
      }
      else {
        puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
        *puVar1 = *puVar1 & 0xfffe;
        local_8 = *(undefined4 *)(param_1 + 0x88);
        local_c = *(undefined4 *)(param_1 + 0x84);
        local_4 = *(undefined4 *)(param_1 + 0x8c);
        if (*(int *)(in_ECX + 8) == 0) {
          param_1 = 0;
        }
        else {
          param_1 = (uint)*(ushort *)(*(int *)(in_ECX + 8) + 0xb8);
        }
        if (param_1 != 0) {
          do {
            if ((((uVar11 < *(ushort *)(*(int *)(in_ECX + 8) + 0xb6)) &&
                 (piVar10 = *(int **)(*(int *)(*(int *)(in_ECX + 8) + 0xb0) + uVar11 * 4),
                 piVar10 != (int *)0x0)) && (iVar9 = (**(code **)(*piVar10 + 0xc))(), iVar9 != 0))
               && (iVar9 = FUN_00707530(4), iVar9 != 0)) {
              piVar10 = (int *)FUN_00707530(4);
              iVar9 = (**(code **)(*piVar10 + 0x54))();
              if ((iVar9 == 0xb) && (iVar9 = FUN_00707530(4), iVar9 != 0)) {
                cVar8 = FUN_008aa390(&local_c);
                if (cVar8 != '\0') {
                  *(undefined4 *)(iVar9 + 0x6c) = local_c;
                  *(undefined4 *)(iVar9 + 0x70) = local_8;
                  *(undefined4 *)(iVar9 + 0x74) = local_4;
                }
                *(undefined4 *)(iVar9 + 0x78) = *(undefined4 *)(in_ECX + 0xc);
              }
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < param_1);
        }
        _DAT_00b36684 = local_8;
        _DAT_00b36680 = local_c;
        _DAT_00b36688 = local_4;
        FUN_00402c00();
        local_c = _DAT_00b36698;
        local_8 = _DAT_00b366a0;
        local_4 = _DAT_00b366a8;
        FUN_0043f350();
        if (*(int *)(in_ECX + 8) != 0) {
          uVar15 = local_c;
          uVar16 = local_8;
          uVar17 = local_4;
          fVar12 = (float10)FUN_00982bfa(local_c,local_8,local_4);
          FUN_0070fe20(((float)fVar12 * 6.2831855) / _DAT_00b36690,uVar15,uVar16,uVar17);
          return;
        }
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00544780(char *param_1)

{
  ushort *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_4b8 [4];
  undefined4 local_4b4;
  undefined2 local_4b0;
  undefined2 local_4ae;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined **local_4a0;
  undefined4 *puStack_2a0;
  undefined4 *local_298;
  int local_290;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ba816;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_4b8;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffb38;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
    *puVar1 = *puVar1 & 0xffdf;
  }
  else {
    local_4b4 = 0;
    local_4b0 = 0;
    local_4ae = 0;
    local_4 = 0;
    FUN_00402e30(&local_4b4,"%s%s%s","Meshes",&DAT_00a3207c,param_1,uVar4);
    FUN_00713a30();
    uVar7 = local_4b4;
    local_4a0 = &PTR_FUN_00a3690c;
    local_14 = 0;
    local_18 = 0;
    local_4 = CONCAT31(local_4._1_3_,1);
    cVar3 = FUN_006f9980(local_4b4,0);
    if (((cVar3 == '\0') || (local_290 != 1)) ||
       (cVar3 = FUN_00405650(&DAT_00b3fab0,*local_298), cVar3 == '\0')) {
      FUN_004a7a60("Cannot load the stars.");
      puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
      *puVar1 = *puVar1 & 0xffdf;
      local_4 = local_4 & 0xffffff00;
      FUN_00436420();
      FUN_00401f20(uVar7);
    }
    else {
      puVar1 = (ushort *)(*(int *)(in_ECX + 4) + 0x18);
      *puVar1 = *puVar1 | 0x20;
      piVar2 = (int *)(in_ECX + 8);
      (**(code **)(**(int **)(in_ECX + 4) + 0x88))(local_4b8,*(undefined4 *)(in_ECX + 8));
      FUN_007016a0();
      FUN_0075fa90(*puStack_2a0);
      FUN_006ff420("Stars Meshes");
      *(ushort *)(*piVar2 + 0x18) = *(ushort *)(*piVar2 + 0x18) | 2;
      (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*piVar2,1);
      iVar5 = FUN_00707530(9);
      if (iVar5 != 0) {
        FUN_00708560(local_4b8,9);
        FUN_007016a0();
      }
      iVar5 = FUN_00707530(7);
      if (iVar5 != 0) {
        FUN_00708560(local_4b8,7);
        FUN_007016a0();
      }
      iVar5 = FUN_00405790(0);
      if (iVar5 != 0) {
        FUN_00708560(local_4b8,0);
        FUN_007016a0();
        iVar5 = FUN_00707530(2);
        if (iVar5 != 0) {
          *(undefined4 *)(iVar5 + 0x34) = DAT_00b3fa90;
          *(undefined4 *)(iVar5 + 0x38) = DAT_00b3fa94;
          uVar7 = DAT_00b3fa98;
          *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
          *(undefined4 *)(iVar5 + 0x3c) = uVar7;
          *(undefined4 *)(iVar5 + 0x40) = DAT_00b3fa90;
          *(undefined4 *)(iVar5 + 0x44) = DAT_00b3fa94;
          *(undefined4 *)(iVar5 + 0x48) = DAT_00b3fa98;
          *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
        }
      }
      FUN_007b8940(*(undefined4 *)(in_ECX + 4),10,0,1);
      iVar5 = *piVar2;
      if (iVar5 != 0) {
        uVar4 = 0;
        if (*(short *)(iVar5 + 0xb8) != 0) {
          do {
            if (((uVar4 < *(ushort *)(iVar5 + 0xb6)) &&
                (piVar2 = *(int **)(*(int *)(iVar5 + 0xb0) + uVar4 * 4), piVar2 != (int *)0x0)) &&
               (iVar6 = (**(code **)(*piVar2 + 0xc))(), iVar6 != 0)) {
              uVar7 = FUN_00707530(4);
              iVar6 = FUN_00560920(&DAT_00b4335c,uVar7);
              if (iVar6 != 0) {
                *(undefined4 *)(iVar6 + 0x88) = 5;
              }
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(ushort *)(iVar5 + 0xb8));
        }
        uStack_4ac = 0x3f800000;
        uStack_4a8 = 0;
        uStack_4a4 = 0;
        FUN_00541630(iVar5,0x3f800000,0,0,0);
      }
      local_4 = local_4 & 0xffffff00;
      FUN_00436420();
      FUN_00401f20(local_4b4);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00544ad0(void)

{
  int iVar1;
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x24) = 1;
  iVar1 = FUN_007b7650();
  if (iVar1 != 0) {
    FUN_007aa280();
    return;
  }
  return;
}



void FUN_00544af0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x24) = 0;
  return;
}



float10 FUN_00544b00(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_00707530(4);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00707530(4);
    iVar1 = (**(code **)(*piVar2 + 0x54))();
    if (iVar1 == 0xb) {
      iVar1 = FUN_00707530(4);
      if (iVar1 != 0) {
        return (float10)*(float *)(iVar1 + 0x78);
      }
    }
  }
  return (float10)0;
}



void FUN_00544b50(void)

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
  puStack_8 = &LAB_009ba88f;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543c10(uVar2);
  *in_ECX = &PTR_FUN_00a571dc;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[7] = 0;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  in_ECX[6] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00544ca0(void)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ba88f;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a571dc;
  puVar1 = (undefined4 *)in_ECX[1];
  local_4 = 5;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[2] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[5] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  iVar2 = in_ECX[6];
  if (iVar2 != 0) {
    FUN_00959ec0();
    FUN_00401f20(iVar2);
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_00543c90();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00544ea0(undefined4 param_1)

{
  ushort *puVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  LONG LVar16;
  int in_ECX;
  undefined4 unaff_EBP;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009ba908;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00543d30(param_1);
  FUN_006ff420("Sun Root");
  pfVar6 = (float *)FUN_00401f00(0x30,uVar5);
  fVar3 = _DAT_00b11e2c;
  *pfVar6 = _DAT_00b11e2c * -1.0;
  pfVar6[1] = fVar3;
  pfVar6[2] = 0.0;
  fVar3 = _DAT_00b11e2c * -1.0;
  pfVar6[3] = fVar3;
  pfVar6[4] = fVar3;
  pfVar6[5] = 0.0;
  fVar3 = _DAT_00b11e2c;
  pfVar6[6] = _DAT_00b11e2c;
  pfVar6[7] = fVar3;
  pfVar6[8] = 0.0;
  fVar3 = _DAT_00b11e2c * -1.0;
  pfVar6[9] = _DAT_00b11e2c;
  pfVar6[10] = fVar3;
  pfVar6[0xb] = 0.0;
  puVar7 = (undefined4 *)FUN_00401f00(0x30);
  *puVar7 = DAT_00b3f9a8;
  puVar7[1] = DAT_00b3f9ac;
  puVar7[2] = DAT_00b3f9b0;
  puVar7[3] = DAT_00b3f9a8;
  puVar7[4] = DAT_00b3f9ac;
  puVar7[5] = DAT_00b3f9b0;
  puVar7[6] = DAT_00b3f9a8;
  puVar7[7] = DAT_00b3f9ac;
  puVar7[8] = DAT_00b3f9b0;
  puVar7[9] = DAT_00b3f9a8;
  puVar7[10] = DAT_00b3f9ac;
  puVar7[0xb] = DAT_00b3f9b0;
  pfVar8 = (float *)FUN_00401f00(0x30);
  fVar3 = _DAT_00b11e34;
  *pfVar8 = _DAT_00b11e34 * -1.0;
  pfVar8[1] = fVar3;
  pfVar8[2] = 0.0;
  fVar3 = _DAT_00b11e34 * -1.0;
  pfVar8[3] = fVar3;
  pfVar8[4] = fVar3;
  pfVar8[5] = 0.0;
  fVar3 = _DAT_00b11e34;
  pfVar8[6] = _DAT_00b11e34;
  pfVar8[7] = fVar3;
  pfVar8[8] = 0.0;
  fVar3 = _DAT_00b11e34 * -1.0;
  pfVar8[9] = _DAT_00b11e34;
  pfVar8[10] = fVar3;
  pfVar8[0xb] = 0.0;
  puVar9 = (undefined4 *)FUN_00401f00(0x30);
  *puVar9 = DAT_00b3f9a8;
  puVar9[1] = DAT_00b3f9ac;
  puVar9[2] = DAT_00b3f9b0;
  puVar9[3] = DAT_00b3f9a8;
  puVar9[4] = DAT_00b3f9ac;
  puVar9[5] = DAT_00b3f9b0;
  puVar9[6] = DAT_00b3f9a8;
  puVar9[7] = DAT_00b3f9ac;
  puVar9[8] = DAT_00b3f9b0;
  puVar9[9] = DAT_00b3f9a8;
  puVar9[10] = DAT_00b3f9ac;
  puVar9[0xb] = DAT_00b3f9b0;
  puVar9 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = (undefined4 *)0x0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar9,0x10,4,FUN_0047ea50);
  }
  *puVar9 = 0x3f800000;
  puVar9[4] = 0x3f800000;
  puVar9[8] = 0x3f800000;
  puVar9[0xc] = 0x3f800000;
  puVar9[1] = 0;
  puVar9[5] = 0;
  puVar9[9] = 0;
  puVar9[0xd] = 0;
  puVar9[2] = 0;
  puVar9[6] = 0;
  puVar9[10] = 0;
  puVar9[0xe] = 0;
  local_4 = (undefined4 *)0xffffffff;
  puVar9[3] = 0x3f800000;
  puVar9[7] = 0x3f800000;
  puVar9[0xb] = 0x3f800000;
  puVar9[0xf] = 0x3f800000;
  puVar10 = (undefined4 *)FUN_00401f00(0x40);
  local_4 = (undefined4 *)0x1;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    _vector_constructor_iterator_(puVar10,0x10,4,FUN_0047ea50);
  }
  *puVar10 = 0x3f800000;
  puVar10[4] = 0x3f800000;
  puVar10[8] = 0x3f800000;
  puVar10[0xc] = 0x3f800000;
  puVar10[1] = 0;
  puVar10[5] = 0;
  puVar10[9] = 0;
  puVar10[0xd] = 0;
  puVar10[2] = 0;
  puVar10[6] = 0;
  puVar10[10] = 0;
  puVar10[0xe] = 0;
  local_4 = (undefined4 *)0xffffffff;
  puVar10[3] = 0x3f800000;
  puVar10[7] = 0x3f800000;
  puVar10[0xb] = 0x3f800000;
  puVar10[0xf] = 0x3f800000;
  puVar11 = (undefined4 *)FUN_00401f00(0x20);
  *puVar11 = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0x3f800000;
  puVar11[4] = 0x3f800000;
  puVar11[5] = 0;
  puVar11[6] = 0x3f800000;
  puVar11[7] = 0x3f800000;
  puVar12 = (undefined4 *)FUN_00401f00(0x20);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0x3f800000;
  puVar12[4] = 0x3f800000;
  puVar12[5] = 0;
  puVar12[6] = 0x3f800000;
  puVar12[7] = 0x3f800000;
  puVar13 = (undefined2 *)FUN_00401f00(0xc);
  *puVar13 = 0;
  puVar13[1] = 1;
  puVar13[2] = 2;
  puVar13[3] = 2;
  puVar13[4] = 1;
  puVar13[5] = 3;
  puVar14 = (undefined2 *)FUN_00401f00(0xc);
  *puVar14 = 0;
  puVar14[1] = 1;
  puVar14[2] = 2;
  puVar14[3] = 2;
  puVar14[4] = 1;
  puVar14[5] = 3;
  iVar15 = FUN_00401f00(0xc0);
  local_4 = (undefined4 *)0x2;
  if (iVar15 == 0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    puVar9 = (undefined4 *)FUN_007174b0(4,pfVar6,puVar7,puVar9,puVar11,1,0,2,puVar13);
  }
  puVar11 = *(undefined4 **)(in_ECX + 0x10);
  local_4 = (undefined4 *)0xffffffff;
  if (puVar11 != puVar9) {
    if (((puVar11 != (undefined4 *)0x0) && (LVar16 = InterlockedDecrement(puVar11 + 1), LVar16 == 0)
        ) && (puVar11 != (undefined4 *)0x0)) {
      (**(code **)*puVar11)(1);
    }
    *(undefined4 **)(in_ECX + 0x10) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  FUN_006ff420("Sun Geometry");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x10) + 0x18);
  *puVar1 = *puVar1 | 2;
  puVar9 = (undefined4 *)FUN_00401f00(0xe4);
  local_4 = (undefined4 *)0x3;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    puVar9[0x38] = 0;
    *puVar9 = &PTR_FUN_00a45134;
    *(undefined2 *)(puVar9 + 0x37) = 9;
  }
  puVar11 = *(undefined4 **)(in_ECX + 8);
  local_4 = (undefined4 *)0xffffffff;
  if (puVar11 != puVar9) {
    if (((puVar11 != (undefined4 *)0x0) && (LVar16 = InterlockedDecrement(puVar11 + 1), LVar16 == 0)
        ) && (puVar11 != (undefined4 *)0x0)) {
      (**(code **)*puVar11)(1);
    }
    *(undefined4 **)(in_ECX + 8) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  FUN_006ff420("Sun Billboard Node");
  puVar1 = (ushort *)(*(int *)(in_ECX + 8) + 0x18);
  *puVar1 = *puVar1 | 2;
  *(ushort *)(*(int *)(in_ECX + 8) + 0xdc) = *(ushort *)(*(int *)(in_ECX + 8) + 0xdc) & 0xfffa | 2;
  (**(code **)(**(int **)(in_ECX + 8) + 0x84))(*(undefined4 *)(in_ECX + 0x10),0);
  local_4 = (undefined4 *)FUN_00401f00(0xc0);
  local_c = 4;
  if (local_4 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_007174b0(4,puVar12,pfVar6,puVar10,puVar7,1,0,2,unaff_EBP);
  }
  puVar9 = *(undefined4 **)(in_ECX + 0x14);
  local_c = -1;
  if (puVar9 != puVar7) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar16 = InterlockedDecrement(puVar9 + 1), LVar16 == 0))
       && (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(in_ECX + 0x14) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_006ff420("Sun Glare Geometry");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0x14) + 0x18);
  *puVar1 = *puVar1 | 2;
  puVar7 = (undefined4 *)FUN_00401f00(0xe4);
  local_c = 5;
  local_4 = puVar7;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    FUN_0070b780(0);
    puVar7[0x38] = 0;
    *puVar7 = &PTR_FUN_00a45134;
    *(undefined2 *)(puVar7 + 0x37) = 9;
  }
  puVar9 = *(undefined4 **)(in_ECX + 0xc);
  local_c = -1;
  if (puVar9 != puVar7) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar16 = InterlockedDecrement(puVar9 + 1), LVar16 == 0))
       && (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(in_ECX + 0xc) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_006ff420("Sun Glare Billboard Node");
  puVar1 = (ushort *)(*(int *)(in_ECX + 0xc) + 0x18);
  *puVar1 = *puVar1 | 2;
  *(ushort *)(*(int *)(in_ECX + 0xc) + 0xdc) =
       *(ushort *)(*(int *)(in_ECX + 0xc) + 0xdc) & 0xfffa | 2;
  local_4 = (undefined4 *)ABS(*(float *)(in_ECX + 0x20));
  *(undefined4 **)(*(int *)(in_ECX + 0xc) + 0x60) = local_4;
  (**(code **)(**(int **)(in_ECX + 0xc) + 0x84))(*(undefined4 *)(in_ECX + 0x14),0);
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(undefined4 *)(in_ECX + 8),0);
  iVar15 = FUN_00401f00(0x114);
  if (iVar15 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00719760();
  }
  puVar9 = *(undefined4 **)(in_ECX + 0x1c);
  if (puVar9 != puVar7) {
    if (((puVar9 != (undefined4 *)0x0) && (LVar16 = InterlockedDecrement(puVar9 + 1), LVar16 == 0))
       && (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    *(undefined4 **)(in_ECX + 0x1c) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  FUN_006ff420("Sun Directional Light");
  iVar15 = *(int *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar15 + 0xdc) = 0x3f800000;
  piVar2 = (int *)(iVar15 + 0xb8);
  *piVar2 = *piVar2 + 1;
  iVar15 = *(int *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar15 + 0xe0) = DAT_00b25ac4;
  *(undefined4 *)(iVar15 + 0xe4) = DAT_00b25ac8;
  uVar4 = DAT_00b25acc;
  *(int *)(iVar15 + 0xb8) = *(int *)(iVar15 + 0xb8) + 1;
  *(undefined4 *)(iVar15 + 0xe8) = uVar4;
  iVar15 = *(int *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar15 + 0xec) = DAT_00b25ac4;
  *(undefined4 *)(iVar15 + 0xf0) = DAT_00b25ac8;
  uVar4 = DAT_00b25acc;
  *(int *)(iVar15 + 0xb8) = *(int *)(iVar15 + 0xb8) + 1;
  *(undefined4 *)(iVar15 + 0xf4) = uVar4;
  (**(code **)(**(int **)(in_ECX + 4) + 0x84))(*(undefined4 *)(in_ECX + 0x1c),0);
  iVar15 = FUN_00401f00(0x30);
  if (iVar15 == 0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_00959bc0();
  }
  *(undefined4 **)(in_ECX + 0x18) = puVar7;
  *puVar7 = 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x18) + 8) = 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x18) + 0x10) = 1;
  *(undefined1 *)(*(int *)(in_ECX + 0x18) + 0x11) = 1;
  FUN_007b8940(*(undefined4 *)(in_ECX + 0xc),10,0,1);
  FUN_007b8940(*(undefined4 *)(in_ECX + 8),10,0,1);
  *unaff_FS_OFFSET = (int)pfVar6;
  return;
}



void FUN_00546120(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(char *)(in_ECX + 0x24) != '\0')) {
    iVar1 = FUN_007b7650();
    if (iVar1 != 0) {
      iVar1 = *(int *)(in_ECX + 0x10);
      *(float *)(iVar1 + 0x94) = *(float *)(iVar1 + 0x94) / 25.0;
      FUN_007aa130(iVar1,param_1);
      *(float *)(iVar1 + 0x94) = *(float *)(iVar1 + 0x94) * 25.0;
    }
  }
  return;
}



void FUN_00546170(byte param_1)

{
  FUN_00544ca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00546190(int param_1,int param_2,int param_3,undefined4 param_4,char param_5,
                undefined4 param_6,char param_7,int param_8)

{
  int iVar1;
  float fVar2;
  
  if (param_3 < 1) {
    return 0;
  }
  fVar2 = 0.0;
  if ((((param_7 == '\0') || ((float)param_8 * _DAT_00b36a58 < (float)param_2)) && (param_5 != '\0')
      ) && (param_1 < param_2)) {
    fVar2 = (float)param_2 * _DAT_00b36878 + _DAT_00b36870;
  }
  iVar1 = FUN_009828c0(fVar2,(float)param_3 * _DAT_00b36858 + _DAT_00b36850,
                       (float)param_1 * _DAT_00b36848 + _DAT_00b36840);
  if (100 < iVar1) {
    iVar1 = 100;
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00546260(void)

{
  char in_stack_00000034;
  
  FUN_009828c0();
  if (in_stack_00000034 == '\0') {
    FUN_009828c0();
    FUN_009828c0();
  }
  FUN_009828c0();
  FUN_009828c0();
  FUN_009828c0();
  FUN_009828c0();
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_005463f0(int param_1,int param_2,int param_3,float param_4,int param_5,int param_6,int param_7,
            int param_8,char param_9,char param_10,char param_11,char param_12,char param_13,
            char param_14,char param_15,char param_16)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = _DAT_00b36708;
  if (param_16 != '\0') {
    local_10 = _DAT_00b36748 * _DAT_00b36708;
  }
  if ((local_10 < param_4) && (param_11 == '\0')) {
    return 0;
  }
  fVar1 = (local_10 - param_4) / local_10;
  param_4 = 0.0;
  if (param_9 != '\0') {
    param_4 = (float)param_8 * _DAT_00b366f8 + _DAT_00b366f0;
  }
  local_10 = 0.0;
  if (param_12 != '\0') {
    local_10 = _DAT_00b366e8;
  }
  _param_16 = 1.0;
  if (param_13 != '\0') {
    _param_16 = _DAT_00b36720;
  }
  if (param_3 == 0) {
    local_c = _DAT_00b36718;
  }
  else {
    local_c = 1.0;
  }
  local_8 = 0.0;
  if (param_3 != 0) {
    local_8 = 1.0;
  }
  param_4 = _DAT_00b36740 * local_c * fVar1 * (_param_16 * param_4 + local_10);
  if (param_4 < 0.0) {
    param_4 = 0.0;
  }
  _param_16 = ((local_8 * fVar1 * ((float)param_6 + _DAT_00b36cb8) * (100.0 - (float)param_5)) /
              100.0) * ((100.0 - (float)param_7) / 100.0) * _DAT_00b36738;
  if (_param_16 < 0.0) {
    _param_16 = 0.0;
  }
  local_8 = 0.0;
  if (param_10 != '\0') {
    local_8 = 1.0;
  }
  if (100 < param_1) {
    param_1 = 100;
  }
  if (100 < param_2) {
    param_2 = 100;
  }
  fVar2 = (float)param_2 * local_8;
  local_8 = 0.0;
  if (param_11 != '\0') {
    local_8 = _DAT_00b366e0;
  }
  if (param_14 != '\0') {
    param_4 = 0.0;
    _param_16 = _DAT_00b36730 * _param_16;
  }
  if (param_15 != '\0') {
    _param_16 = _DAT_00b36728;
  }
  fVar1 = _DAT_00b36700 + param_4 + _param_16 + local_8 +
          _DAT_00b36710 * ((float)param_1 * fVar1 - fVar2);
  if ((fVar1 < 1.0) && (0.0 < fVar1)) {
    return 1;
  }
  uVar3 = FUN_009828c0();
  return uVar3;
}



void FUN_00546600(void)

{
  FUN_009828c0();
  return;
}



void FUN_00546620(void)

{
  FUN_009828c0();
  return;
}



void FUN_00546640(void)

{
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00546660(undefined4 param_1,undefined4 param_2,float param_3)

{
  int iVar1;
  
  param_2 = _DAT_00b36978 * param_3 + _DAT_00b36970;
  iVar1 = FUN_009828c0();
  param_2 = (float)iVar1;
  if (param_2 < _DAT_00b369a0) {
    iVar1 = FUN_009828c0();
    return iVar1;
  }
  if (_DAT_00b369a8 < param_2) {
    iVar1 = FUN_009828c0();
    return iVar1;
  }
  return iVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

short FUN_00546700(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  
  fVar2 = (float)param_1;
  fVar1 = (float)param_2 * _DAT_00b36a58;
  bVar3 = fVar1 < fVar2 | (byte)((ushort)((ushort)(NAN(fVar1) || NAN(fVar2)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == fVar2) << 0xe) >> 8);
  if (fVar1 >= fVar2 && (fVar1 == fVar2) == 0) {
    return CONCAT11(bVar3,1);
  }
  return (ushort)bVar3 << 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546720(int param_1,undefined4 param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = (float)param_1 * _DAT_00b36988 + _DAT_00b36980;
  fVar2 = (float10)FUN_00547f00(param_2);
  return (float10)((_DAT_00b36990 - (float)(fVar2 * (float10)fVar1)) * 0.5);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546770(int param_1)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar2 = (float10)0;
  fVar3 = (float10)ABS((100.0 - ((float)param_1 * _DAT_00b36988 + _DAT_00b36980 + _DAT_00b36998)) /
                       100.0);
  if (fVar3 < fVar2 != (fVar3 == fVar2)) {
    return fVar2;
  }
  fVar1 = (float)((float10)60.0 - fVar3 * (float10)40.0);
  if ((float10)fVar1 < fVar2) {
    return (float10)(float)fVar2;
  }
  return (float10)fVar1;
}



float10 FUN_00546800(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5,
                    char param_6,char param_7,char param_8)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  
  fVar3 = (float10)FUN_00547b90(param_2,param_3);
  if (param_6 == '\0') {
    fVar4 = (float10)0;
  }
  else {
    fVar4 = (float10)(**(code **)(*param_1 + 0x110))();
  }
  if (param_7 == '\0') {
    fVar5 = (float10)0;
  }
  else {
    fVar5 = (float10)(**(code **)(*param_1 + 0x114))();
  }
  if (param_5 == '\0') {
    fVar6 = (float10)0;
  }
  else {
    fVar6 = (float10)(**(code **)(*param_1 + 0x118))();
  }
  fVar7 = (float10)FUN_004aa030();
  fVar8 = (float10)FUN_004aa070();
  cVar2 = (**(code **)(*param_1 + 0x10c))();
  if (param_4 == '\0') {
    fVar9 = (float10)FUN_004aa130();
  }
  else {
    fVar9 = (float10)FUN_004aa0b0();
  }
  fVar1 = (float)fVar9 *
          ((float)(int)cVar2 + (float)fVar4 + (float)fVar5 + (float)fVar6 +
          (float)(fVar8 + (float10)(double)(fVar7 * (float10)(float)(fVar3 / (float10)100.0))));
  if (param_8 != '\0') {
    fVar3 = (float10)FUN_004aa0f0();
    return (float10)((float)fVar3 * fVar1);
  }
  return (float10)(fVar1 * 1.0);
}



uint FUN_00546930(int *param_1,float param_2,char param_3,char param_4,char param_5)

{
  float fVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  undefined4 uStack_14;
  
  if (param_5 != '\0') {
    return in_EAX & 0xffffff00;
  }
  cVar2 = (**(code **)(*param_1 + 0x11c))();
  fVar1 = (float)(int)cVar2;
  if (fVar1 == 0.0) {
    return CONCAT22(cVar2 >> 7,
                    (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                    (ushort)(fVar1 == 0.0) << 0xe);
  }
  if (fVar1 < 100.0 == 0) {
    return CONCAT31((int3)(CONCAT22(cVar2 >> 7,
                                    (ushort)(fVar1 < 100.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 100.0) << 0xe) >> 8),1);
  }
  if (param_3 == '\0') {
    uStack_14 = 0.0;
  }
  else {
    fVar4 = (float10)(**(code **)(*param_1 + 0x120))();
    uStack_14 = (float)fVar4;
  }
  fVar4 = (float10)0;
  if (param_4 != '\0') {
    fVar4 = (float10)(**(code **)(*param_1 + 0x124))();
  }
  fVar5 = (float10)FUN_004aa1b0();
  fVar6 = (float10)FUN_004aa170();
  iVar3 = FUN_0047df80(0);
  if ((float)(iVar3 % 100) <=
      (float)fVar4 + uStack_14 +
      (float)(fVar6 + (float10)(double)(((float10)1 - (float10)param_2) * fVar5)) + fVar1) {
    return 1;
  }
  return 0;
}



float10 FUN_00546a40(int *param_1,int param_2,float param_3,char param_4)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar3 = (float10)FUN_004a9d70();
  fVar4 = (float10)FUN_004a9d30();
  fVar5 = (float10)FUN_004a9cb0();
  fVar6 = (float10)FUN_004a9cf0();
  cVar2 = (**(code **)(*param_1 + 0xdc))();
  fVar1 = (float)(int)cVar2 + (float)(fVar4 + (float10)(double)(fVar3 * (float10)param_2)) +
          (float)(fVar6 + (float10)(double)(((float10)1 - (float10)param_3) * fVar5));
  if (param_4 != '\0') {
    fVar3 = (float10)FUN_004a9db0();
    return (float10)((float)fVar3 * fVar1);
  }
  fVar3 = (float10)FUN_004a9df0();
  return (float10)((float)fVar3 * fVar1);
}



float10 FUN_00546b00(undefined4 param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00547f00(param_1);
  return (float10)(float)(fVar1 * (float10)param_2);
}



float10 FUN_00546b20(float param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  
  fVar1 = param_1;
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  if (param_2 < fVar1) {
    param_2 = fVar1;
  }
  fVar3 = (float10)param_1;
  if (0.0 < (float)((float10)param_2 - fVar3)) {
    iVar2 = FUN_0047df80(0);
    fVar3 = (float10)(((float)iVar2 / 32767.0) * (float)((float10)param_2 - fVar3) + param_1);
  }
  return fVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546ba0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  float local_4;
  
  local_4 = _DAT_00b36e20;
  iVar1 = FUN_0056a300(param_1);
  if (iVar1 != 0) {
    switch(param_2) {
    case 0x16:
      if (0 < iVar1) {
        pfVar2 = (float *)FUN_00403c00();
        return (float10)*pfVar2;
      }
      break;
    case 0x17:
      if (3 < iVar1) {
        pfVar2 = (float *)FUN_00403c00();
        return (float10)*pfVar2;
      }
      break;
    case 0x18:
      if (2 < iVar1) {
        pfVar2 = (float *)FUN_00403c00();
        return (float10)*pfVar2;
      }
      break;
    case 0x19:
    case 0x1a:
      if (1 < iVar1) {
        pfVar2 = (float *)FUN_00403c00();
        return (float10)*pfVar2;
      }
      break;
    default:
      local_4 = 1.0;
    }
  }
  return (float10)local_4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546c60(float param_1,undefined4 param_2,char param_3)

{
  if (param_3 != '\0') {
    return (float10)(_DAT_00b36d10 * param_1);
  }
  return (float10)(_DAT_00b36d00 * param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546ca0(float param_1)

{
  return (float10)(_DAT_00b36d20 * param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546cc0(float param_1,float param_2,int param_3)

{
  if (param_2 == 0.0) {
    param_1 = 0.0;
  }
  else {
    param_1 = param_1 / param_2;
  }
  return (float10)((1.0 - param_1) * _DAT_00b36d30 + (float)param_3 * _DAT_00b36d40 + _DAT_00b36d38)
  ;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546d10(float param_1,int param_2,int param_3)

{
  return (float10)(_DAT_00b36d58 + param_1 + (float)(param_3 - param_2) * _DAT_00b36d60);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00546d40(int *param_1,undefined4 param_2,undefined4 param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar4 = (float10)FUN_00547b90(param_2,param_3);
  cVar3 = (**(code **)(*param_1 + 0x108))();
  fVar5 = (float10)FUN_004a9f70();
  fVar6 = (float10)FUN_004a9f30();
  if (param_5 == '\0') {
    fVar7 = (float10)FUN_004a9ff0();
  }
  else {
    fVar7 = (float10)FUN_004a9fb0();
  }
  fVar1 = (float)fVar7 *
          (float)(fVar6 * (float10)(float)(fVar4 / (float10)100.0) +
                 (float10)(double)(fVar5 + (float10)(int)cVar3));
  if (param_4 != '\0') {
    return (float10)fVar1;
  }
  if (param_5 == '\0') {
    fVar2 = 0.25;
  }
  else {
    fVar2 = 1.0;
  }
  return (float10)(_DAT_00b36f10 * fVar1 * fVar2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00546e10(int *param_1,char param_2,char param_3,float param_4,float param_5,char param_6,
                 char param_7,uint param_8)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  float10 fVar6;
  
  if (param_3 == '\0') {
    fVar6 = (float10)FUN_004a9e70();
  }
  else {
    fVar6 = (float10)FUN_004a9e30();
  }
  iVar2 = FUN_0047df80(0);
  _param_3 = (float)fVar6 * _DAT_00b36d88 * (float)(iVar2 % 5 + 1);
  if (param_2 == '\0') {
    fVar6 = (float10)FUN_004a9ef0();
  }
  else {
    fVar6 = (float10)FUN_004a9eb0();
  }
  iVar2 = FUN_0047df80(0);
  bVar5 = param_2 != '\0';
  _param_2 = (float)fVar6 * _DAT_00b36d88 * (float)(iVar2 % 5 + 1);
  if ((bVar5) && (param_7 != '\0')) {
    _param_3 = _DAT_00b36d98 * _param_3;
    _param_2 = _DAT_00b36d98 * _param_2;
  }
  if ((param_8 & 2) != 0) {
    _param_3 = 0.0;
  }
  if ((param_8 & 1) != 0) {
    _param_2 = 0.0;
  }
  fVar1 = _DAT_00b36d80;
  if (param_6 == '\0') {
    fVar1 = 1.0;
  }
  iVar2 = FUN_0047df80(0);
  fVar1 = fVar1 * _DAT_00b36d88 * (float)(iVar2 % 5 + 1);
  if ((_param_2 < _param_3 != (_param_2 == _param_3)) && (fVar1 < _param_3)) {
    return 2;
  }
  if (param_4 < param_5 * 0.5) {
    return 2;
  }
  if (((_param_3 < _param_2) && (fVar1 < _param_2)) && (param_5 * 1.5 < param_4)) {
    return 1;
  }
  iVar2 = FUN_0047df80(0);
  uVar3 = (**(code **)(*param_1 + 0xe4))();
  bVar5 = (double)(int)(char)uVar3 < (double)(iVar2 % 100);
  uVar4 = (uint)CONCAT21((short)((uint)uVar3 >> 0x10),bVar5) << 8;
  if (!bVar5) {
    iVar2 = FUN_0047df80(0);
    uVar4 = iVar2 / 100 & 0xffff0000;
    if (49.0 <= (float)(iVar2 % 100)) {
      if ((param_8 & 8) == 0) {
        return 8;
      }
    }
    else if ((param_8 & 4) == 0) {
      return 4;
    }
  }
  return uVar4 & 0xffff0000;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547070(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                    int param_5,float param_6,float param_7,char param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar5 = (float10)FUN_00547b90(param_1,param_2);
  fVar1 = (float)param_5 * _DAT_00b36dd8;
  param_5 = param_3;
  fVar2 = _DAT_00b36df8 * param_6 + _DAT_00b36df0;
  fVar3 = _DAT_00b36de0 + _DAT_00b36de8 * (float)fVar5 * 0.01;
  if (99 < param_3) {
    param_5 = 100;
  }
  fVar4 = (float)param_5 * 0.01 * _DAT_00b36e08 + _DAT_00b36e00;
  if (param_8 == '\0') {
    fVar5 = (float10)FUN_00547f00(param_4);
  }
  else {
    fVar5 = (float10)1;
  }
  return (float10)(fVar2 * fVar1 * fVar3 * fVar4 * (float)fVar5 * param_7);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547140(float param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float10 fVar5;
  float local_8;
  
  fVar4 = (float10)0;
  local_8 = (float)fVar4;
  if (param_1 != 0.0) {
    iVar2 = FUN_0046ca20(param_1);
    if (iVar2 != 0) {
      uVar3 = (**(code **)(*(int *)((int)param_1 + 0x88) + 0x10))();
      uVar3 = uVar3 & 0xffff;
      if (param_8 != -1.0) {
        uVar3 = FUN_009828c0();
      }
      fVar4 = (float10)FUN_00547070(param_4,param_5,param_6,param_7,uVar3,param_3,0x3f800000,0);
      param_1 = 0.0;
      if (param_2 != 0) {
        cVar1 = FUN_004149f0();
        if (cVar1 != '\0') {
          fVar5 = (float10)(*(code *)**(undefined4 **)(param_2 + 0xc))(0);
          param_1 = _DAT_00b36d20 * (float)fVar5;
        }
      }
      local_8 = _DAT_00b36d00 * (float)fVar4 + param_1;
    }
    fVar4 = (float10)local_8;
  }
  return fVar4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547240(float param_1)

{
  return (float10)(_DAT_00b36e10 * param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547260(float param_1,float param_2)

{
  return (float10)(param_1 * param_2 * _DAT_00b36e18);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547280(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char param_5,
                 float *param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00547b90(param_1,param_2);
  fVar1 = _DAT_00b36e50 + _DAT_00b36e58 * (float)fVar3 * 0.01;
  if (99 < param_3) {
    param_3 = 100;
  }
  fVar2 = (float)param_3 * 0.01 * _DAT_00b36e68 + _DAT_00b36e60;
  fVar3 = (float10)FUN_00547f00(param_4);
  fVar1 = (float)((float10)fVar2 * (float10)fVar1 * fVar3);
  *param_6 = fVar1;
  if (1.0 <= fVar1) {
    fVar1 = 1.0;
  }
  fVar1 = _DAT_00b36e70 + fVar1 * (_DAT_00b36e78 - _DAT_00b36e70);
  *param_6 = fVar1;
  if (param_5 == '\0') {
    *param_7 = fVar1 * _DAT_00b36e80 + _DAT_00b36e88;
    return;
  }
  *param_7 = 0.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547370(void)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  float10 extraout_ST0;
  float10 fVar4;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float10 fVar5;
  float in_stack_00000010;
  
  uVar2 = FUN_009828c0();
  uVar2 = FUN_009828c0(uVar2);
  FUN_00547b90(uVar2);
  iVar3 = FUN_009828c0();
  fVar4 = (float10)iVar3;
  fVar5 = (float10)0;
  if (fVar5 < extraout_ST0 - fVar4 == (fVar5 == extraout_ST0 - fVar4)) {
    fVar4 = fVar4 - (float10)1;
  }
  if ((float)fVar4 <= 1.0) {
    fVar1 = 1.0;
  }
  else {
    iVar3 = FUN_009828c0();
    fVar1 = (float)iVar3;
    if (extraout_ST0_00 - (float10)iVar3 < extraout_ST1) {
      fVar1 = (float)((float10)iVar3 - fVar5);
    }
  }
  return (float10)((_DAT_00b36eb0 * in_stack_00000010 + _DAT_00b36ea8) * fVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005474a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4,
                    char param_5)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)FUN_00547b90(param_1,param_2);
  fVar1 = (float)fVar3 * 0.01 * _DAT_00b36ef0 + _DAT_00b36ee8;
  fVar2 = _DAT_00b36f00;
  if ((param_4 == '\0') && (fVar2 = _DAT_00b36f08, param_5 == '\0')) {
    fVar2 = 1.0;
  }
  fVar3 = (float10)FUN_00547f00(param_3);
  fVar1 = (float)(fVar3 * (float10)fVar1 * (float10)fVar2);
  if (_DAT_00b36ef8 <= fVar1) {
    return (float10)_DAT_00b36ef8;
  }
  return (float10)fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547540(float param_1)

{
  return (float10)(_DAT_00b36f20 * param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547560(float param_1,char param_2)

{
  param_1 = _DAT_00b36fe0 * param_1 + _DAT_00b36fd8;
  if (param_2 != '\0') {
    param_1 = _DAT_00b36fe8 * param_1;
  }
  return (float10)param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547590(int param_1,undefined4 param_2,float param_3)

{
  return (float10)((float)param_1 * _DAT_00b37008 + _DAT_00b37000 +
                  _DAT_00b36ff8 * param_3 + _DAT_00b36ff0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005475d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  float fVar1;
  int iVar2;
  uint3 uVar3;
  float10 fVar4;
  float10 fVar5;
  
  fVar4 = (float10)FUN_00547b90(param_1,param_2);
  fVar5 = (float10)FUN_00547f00(param_3);
  param_4 = ((float)(int)param_4 * _DAT_00b36f98 + _DAT_00b36f90) /
            (_DAT_00b36f88 * (float)(fVar5 * (float10)(double)fVar4) + _DAT_00b36f80);
  if (_DAT_00b36fa0 < param_4 != (_DAT_00b36fa0 == param_4)) {
    param_4 = _DAT_00b36fa0;
  }
  iVar2 = FUN_0047df80(0);
  fVar1 = (float)(iVar2 % 100) / 100.0;
  uVar3 = (uint3)(CONCAT22((short)((uint)(iVar2 / 100) >> 0x10),
                           (ushort)(fVar1 < param_4) << 8 |
                           (ushort)(NAN(fVar1) || NAN(param_4)) << 10 |
                           (ushort)(fVar1 == param_4) << 0xe) >> 8);
  iVar2 = CONCAT31(uVar3,1);
  if (fVar1 < param_4 == (fVar1 == param_4)) {
    iVar2 = (uint)uVar3 << 8;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547690(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)FUN_00547b90(param_1,param_2);
  fVar2 = (float10)FUN_00547f00(param_3);
  return (float10)(((float)param_4 * _DAT_00b36fc0 + _DAT_00b36fb8) *
                  (_DAT_00b36fb0 * (float)((float10)(double)fVar1 / fVar2) + _DAT_00b36fa8));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547700(float param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  float10 fVar2;
  
  uVar1 = FUN_009828c0(param_3);
  fVar2 = (float10)FUN_00547b90(uVar1);
  fVar2 = (float10)((1.0 - param_1) * _DAT_00b37098 +
                   param_1 * (_DAT_00b37068 - _DAT_00b37070 * (float)fVar2));
  if (fVar2 < (float10)0) {
    return (float10)(float)(float10)0;
  }
  return fVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547770(float param_1)

{
  float fVar1;
  
  fVar1 = (ABS(param_1) - _DAT_00b371f0) / (_DAT_00b371f8 - _DAT_00b371f0);
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (1.0 < fVar1) {
    fVar1 = 1.0;
  }
  return (float10)(_DAT_00b371e0 + fVar1 * (_DAT_00b371e8 - _DAT_00b371e0));
}



float10 FUN_005477f0(undefined4 param_1,int param_2)

{
  bool bVar1;
  float *pfVar2;
  float local_4;
  
  local_4 = (float)(float10)1;
  if (((param_2 == -1) || (param_2 == 0)) || (param_2 == 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (param_2 != 5) {
      return (float10)1;
    }
  }
  switch(param_1) {
  case 0:
    break;
  case 1:
    if (!bVar1) {
      pfVar2 = (float *)FUN_00403c00();
      return (float10)*pfVar2;
    }
    pfVar2 = (float *)FUN_00403c00();
    return (float10)*pfVar2;
  case 2:
    if (!bVar1) {
      pfVar2 = (float *)FUN_00403c00();
      return (float10)*pfVar2;
    }
    pfVar2 = (float *)FUN_00403c00();
    return (float10)*pfVar2;
  case 3:
    if (!bVar1) {
      pfVar2 = (float *)FUN_00403c00();
      return (float10)*pfVar2;
    }
    pfVar2 = (float *)FUN_00403c00();
    return (float10)*pfVar2;
  case 4:
    pfVar2 = (float *)FUN_00403c00();
    local_4 = *pfVar2;
  default:
    return (float10)local_4;
  }
  if (!bVar1) {
    pfVar2 = (float *)FUN_00403c00();
    return (float10)*pfVar2;
  }
  pfVar2 = (float *)FUN_00403c00();
  return (float10)*pfVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547910(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = (param_1 - param_2) * _DAT_00b37308;
  fVar2 = (param_4 / param_3) * _DAT_00b37310;
  fVar3 = (float10)FUN_00985b70();
  return (float10)((fVar2 + fVar1) * (float)fVar3);
}



float10 FUN_005479a0(ushort param_1)

{
  return (float10)param_1;
}



float10 FUN_005479b0(int param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)param_1;
  if (param_1 < 0) {
    fVar1 = fVar1 + (float10)4.2949673e+09;
  }
  return fVar1;
}



int FUN_005479d0(int param_1,int param_2,int param_3,int param_4)

{
  return param_2 + param_1 + param_3 + param_4;
}



void FUN_005479f0(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10 [4];
  
  local_10[0] = -1;
  local_10[1] = 0xffffffff;
  local_10[2] = 0xffffffff;
  local_10[3] = 0xffffffff;
  uVar2 = FUN_0047df80(0);
  iVar4 = 4;
  do {
    iVar3 = FUN_0047df80(param_1 << ((byte)iVar4 & 0x1f));
    iVar3 = iVar3 % iVar4;
    iVar1 = local_10[iVar3];
    while (iVar1 != -1) {
      if (iVar3 < 3) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = local_10[iVar3];
    }
    local_10[iVar3] = iVar4;
    iVar4 = iVar4 + -1;
  } while (0 < iVar4);
  FUN_0047df80(uVar2);
  *param_2 = local_10[0];
  *param_3 = local_10[1];
  *param_4 = local_10[2];
  *param_5 = local_10[3];
  return;
}



int FUN_00547a90(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  FUN_00985b70();
  iVar1 = FUN_009828c0();
  if (100 - param_1 < iVar1) {
    iVar1 = 100 - param_1;
  }
  return iVar1;
}



int FUN_00547b00(void)

{
  int iVar1;
  int in_stack_00000014;
  
  FUN_00985b70();
  iVar1 = FUN_009828c0();
  if (in_stack_00000014 < iVar1) {
    iVar1 = in_stack_00000014;
  }
  return iVar1;
}



uint FUN_00547b40(void)

{
  uint uVar1;
  
  FUN_00985b70();
  uVar1 = FUN_009828c0();
  return uVar1 & ((int)uVar1 < 1) - 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547b90(int param_1,int param_2)

{
  float fVar1;
  
  fVar1 = (float)param_1 + (float)param_2 * _DAT_00b37390 + (float)_DAT_00b37388;
  if ((100.0 <= fVar1) || (0.0 < fVar1)) {
    if (100.0 <= fVar1) {
      return (float10)100.0;
    }
  }
  else {
    fVar1 = 0.0;
  }
  return (float10)fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547c00(float param_1,float param_2,char param_3,char param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (param_5 == '\0') {
    fVar1 = (_DAT_00b37410 + param_2) / (_DAT_00b37418 - _DAT_00b37410);
    fVar2 = _DAT_00b37408;
    fVar3 = _DAT_00b37400;
  }
  else {
    if (_DAT_00b37418 < param_2) {
      param_2 = _DAT_00b37418;
    }
    fVar1 = (_DAT_00b37410 + param_2) / (_DAT_00b37418 - _DAT_00b37410);
    fVar2 = _DAT_00b373f8;
    fVar3 = _DAT_00b373f0;
    if (param_4 != '\0') {
      _param_5 = (_DAT_00b373f0 + param_1 * 0.01 * (_DAT_00b373f8 - _DAT_00b373f0)) *
                 (1.0 - fVar1 * _DAT_00b373d8) * _DAT_00b37420;
      goto LAB_00547cd1;
    }
  }
  _param_5 = (fVar3 + param_1 * 0.01 * (fVar2 - fVar3)) * (1.0 - fVar1 * _DAT_00b373d0);
LAB_00547cd1:
  if (param_3 != '\0') {
    _param_5 = _DAT_00b37428 * _param_5;
  }
  if (0.0 <= _param_5) {
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547d00(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,
                    undefined4 param_5,undefined4 param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00547c00(param_1,param_2,param_6,param_3,param_5);
  return (float10)((_DAT_00b373e0 * param_4 * 0.01 + _DAT_00b373e8) * (float)(fVar1 + (float10)0.0))
  ;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    float param_5,float param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00547c00(param_1,param_2,0,param_3,param_4);
  return (float10)((_DAT_00b37438 * param_5 * 0.01 + _DAT_00b37430) *
                  (float)(((float10)param_6 / (float10)100.0 + (float10)1.0) * fVar1));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    float param_5,float param_6)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00547c00(param_1,param_2,0,param_3,param_4);
  return (float10)((_DAT_00b37440 + _DAT_00b37448 * param_5 * 0.01) *
                  (param_6 / 100.0 + 1.0) *
                  (float)(fVar1 + (float10)0.0) * (_DAT_00b373e8 + param_5 * _DAT_00b373e0 * 0.01));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547e70(float param_1,float param_2)

{
  if ((1.0 - _DAT_00b373d0 * param_2) *
      (_DAT_00b37450 + param_1 * 0.01 * (_DAT_00b37458 - _DAT_00b37450)) < 0.0) {
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547ed0(float param_1)

{
  if ((float10)(_DAT_00b37570 * param_1) < (float10)0) {
    return (float10)(float)(float10)0;
  }
  return (float10)(_DAT_00b37570 * param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547f00(float param_1)

{
  return (float10)(_DAT_00b37530 - (1.0 - param_1) * _DAT_00b37538);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547f20(int param_1)

{
  return (float10)((float)param_1 * _DAT_00b37548 + _DAT_00b37540);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547f40(float param_1)

{
  return (float10)(_DAT_00b37558 * param_1 + _DAT_00b37550);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00547f60(float param_1)

{
  return (float10)(_DAT_00b37568 * param_1 + _DAT_00b37560);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00547f80(void)

{
  FUN_009828c0();
  FUN_009828c0();
  return;
}



void FUN_00548020(void)

{
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548030(undefined4 param_1,char param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar1 = _DAT_00b37670;
  if (param_2 == '\0') {
    fVar1 = 1.0;
  }
  fVar2 = _DAT_00b37680;
  if (param_3 != '\0') {
    fVar2 = _DAT_00b37678;
  }
  fVar3 = (float10)FUN_00985b70();
  return (float10)((float)fVar3 * fVar1 * fVar2);
}



undefined4 FUN_005480a0(int param_1)

{
  undefined4 *puVar1;
  undefined *apuStack_2c [4];
  undefined *local_1c;
  undefined *local_18;
  undefined *local_14;
  undefined *local_10;
  undefined *local_c;
  undefined *local_8;
  undefined4 *local_4;
  
  apuStack_2c[1] = &DAT_00b37620;
  apuStack_2c[2] = &DAT_00b37628;
  apuStack_2c[3] = &DAT_00b37630;
  local_1c = &DAT_00b37638;
  local_18 = &DAT_00b37640;
  local_14 = &DAT_00b37648;
  local_10 = &DAT_00b37650;
  local_c = &DAT_00b37658;
  local_8 = &DAT_00b37660;
  local_4 = &DAT_00b37668;
  if (param_1 < 10) {
    if (param_1 < 1) {
      return 1;
    }
  }
  else {
    param_1 = 10;
  }
  puVar1 = (undefined4 *)apuStack_2c[param_1];
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = &DAT_00b35464;
    DAT_00b35464 = 0;
  }
  return *puVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00548130(int param_1,int param_2,int param_3,float param_4)

{
  float fVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  float10 fVar3;
  
  uVar2 = CONCAT22((short)((uint)in_EAX >> 0x10),
                   (ushort)(0.0 < param_4) << 8 | (ushort)NAN(param_4) << 10 |
                   (ushort)(param_4 == 0.0) << 0xe);
  if (param_4 != 0.0) {
    fVar3 = (float10)FUN_00985b70((param_2 - param_1) + 100);
    fVar1 = (float)((float10)((param_3 + -10) / 10) * (float10)_DAT_00b37598 +
                   (fVar3 - (float10)_DAT_00b375c0 * (float10)param_4));
    uVar2 = CONCAT22((short)((ulonglong)((longlong)(param_3 + -10) * 0x66666667) >> 0x10),
                     (ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                     (ushort)(fVar1 == 0.0) << 0xe);
    if (fVar1 < 0.0) {
      return uVar2;
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005481c0(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  
  fVar1 = _DAT_00b375a0;
  fVar2 = (float10)FUN_00982c30();
  return (float10)((float)(((float10)fVar1 - fVar2 * (float10)_DAT_00b375b0) -
                          (float10)((param_2 + -0x32) / 10) * (float10)_DAT_00b37590) * 0.01);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548240(undefined4 param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30();
  return (float10)((float)((float10)((param_2 + -0x32) / 10) * (float10)_DAT_00b37590 +
                          fVar1 * (float10)_DAT_00b375b8 + (float10)_DAT_00b375a8) * 0.01);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005482b0(undefined4 param_1,char param_2)

{
  if (param_2 != '\0') {
    FUN_009828c0();
    return;
  }
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005482f0(undefined4 param_1,int param_2)

{
  param_1 = (float)param_2 * _DAT_00b379a8;
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00548330(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int extraout_ECX;
  float10 fVar3;
  undefined4 local_8;
  
  uVar1 = FUN_0056a300(param_1);
  if (3 < (int)uVar1) {
    return uVar1 & 0xffffff00;
  }
  fVar3 = (float10)FUN_00547b90(param_1,param_2);
  local_8 = (float)(fVar3 * (float10)_DAT_00b379c0 + (float10)_DAT_00b379b8);
  if (0 < extraout_ECX) {
    local_8 = _DAT_00b379c8 * local_8;
  }
  iVar2 = FUN_0047df80(0);
  if ((float)(iVar2 % 100) < local_8) {
    return 1;
  }
  return 0;
}



void FUN_005483c0(void)

{
  FUN_009828c0();
  return;
}



void FUN_005483e0(void)

{
  FUN_009828c0();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548400(float param_1,float param_2)

{
  return (float10)(_DAT_00b379d8 * param_1 + param_2);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00548420(float *param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6,float param_7,float param_8,float param_9,
                 char param_10)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  
  param_4 = 1.0 / (_DAT_00b38270 + 1.0);
  fVar4 = (float10)FUN_00985b70();
  param_4 = (float)fVar4;
  *param_1 = param_4;
  *param_2 = (param_4 / _DAT_00b379e0) / _DAT_00b37dd8;
  switch(param_5) {
  case 1:
    if (param_6 == '\0') {
      if (param_10 != '\0') {
        return;
      }
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *pfVar3 * param_7 * *param_1 + *param_1;
      pfVar3 = (float *)FUN_00403c00();
      *param_2 = *pfVar3 * param_7 * *param_2 + *param_2;
      return;
    }
    break;
  case 2:
    if (param_6 == '\0') {
      return;
    }
    break;
  case 4:
    if ((param_6 == '\0') && (param_10 == '\0')) {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_1;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *param_2 * param_9 * *pfVar3 + fVar2 * param_7 * fVar1 + *param_1;
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_2;
      pfVar3 = (float *)FUN_00403c00();
      *param_2 = *param_2 * param_9 * *pfVar3 + fVar2 * param_7 * fVar1 + *param_2;
      return;
    }
    *param_1 = *param_1 + *param_1 * param_9 * _DAT_00b379f8;
    *param_2 = param_9 * _DAT_00b379f8 * *param_2 + *param_2;
    return;
  case 5:
    if ((param_6 == '\0') || (param_10 != '\0')) {
      *param_1 = _DAT_00b379f8 * param_9 * *param_1 + *param_1;
      *param_2 = _DAT_00b379f8 * param_9 * *param_2 + *param_2;
    }
    else {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_1;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *pfVar3 * param_8 * *param_1 + fVar1 * param_9 * fVar2 + *param_1;
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_2;
      pfVar3 = (float *)FUN_00403c00();
      *param_2 = *pfVar3 * param_8 * *param_2 + fVar1 * param_9 * fVar2 + *param_2;
    }
  case 3:
    *param_1 = _DAT_00b379f8 * param_9 * *param_1 + *param_1;
    *param_2 = param_9 * _DAT_00b379f8 * *param_2 + *param_2;
    return;
  default:
    goto switchD_00548490_default;
  }
  if (param_10 == '\0') {
    *param_1 = *param_1 + *param_1 * param_8 * _DAT_00b37a08;
    *param_2 = param_8 * _DAT_00b37a10 * *param_2 + *param_2;
    return;
  }
switchD_00548490_default:
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005486a0(float *param_1,float param_2,float param_3,undefined4 param_4,char param_5,
                 float param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  fVar1 = (param_3 / param_2) / _DAT_00b37dd8;
  *param_1 = fVar1;
  switch(param_4) {
  case 1:
    if (param_5 == '\0') {
      if (param_9 != '\0') {
        return;
      }
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *param_1 * param_6 * *pfVar3 + *param_1;
      return;
    }
    goto LAB_00548711;
  case 2:
    if (param_5 == '\0') {
      return;
    }
LAB_00548711:
    if (param_9 == '\0') {
      *param_1 = fVar1 * param_7 * _DAT_00b37a28 + fVar1;
      return;
    }
switchD_005486d0_default:
    return;
  case 3:
    break;
  case 4:
    if ((param_5 == '\0') && (param_9 == '\0')) {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_1;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *param_1 * param_8 * *pfVar3 + fVar2 * param_6 * fVar1 + *param_1;
      return;
    }
    break;
  case 5:
    if ((param_5 != '\0') && (param_9 == '\0')) {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *pfVar3;
      fVar2 = *param_1;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *param_1 * param_8 * *pfVar3 + fVar2 * param_7 * fVar1 + *param_1;
      return;
    }
    break;
  default:
    goto switchD_005486d0_default;
  }
  *param_1 = fVar1 * param_8 * _DAT_00b37a20 + fVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005487f0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 char param_5,float param_6,float param_7,float param_8,char param_9)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  float10 fVar4;
  
  param_3 = 1.0 / _DAT_00b38270;
  fVar4 = (float10)FUN_00985b70();
  param_3 = (float)fVar4;
  *param_1 = param_3;
  switch(param_4) {
  case 1:
    if (param_5 == '\0') {
      if (param_9 != '\0') {
        return;
      }
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *param_1 * param_6 * *pfVar3 + *param_1;
      return;
    }
    goto LAB_00548888;
  case 2:
    if (param_5 == '\0') {
      return;
    }
LAB_00548888:
    if (param_9 == '\0') {
      *param_1 = param_3 * param_7 * _DAT_00b37a40 + param_3;
      return;
    }
switchD_00548847_default:
    return;
  case 3:
    break;
  case 4:
    if ((param_5 == '\0') && (param_9 == '\0')) {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *param_1;
      fVar2 = *pfVar3;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *pfVar3 * fVar1 * param_6 * fVar2 * param_8 + *param_1;
      return;
    }
    break;
  case 5:
    if ((param_5 != '\0') && (param_9 == '\0')) {
      pfVar3 = (float *)FUN_00403c00();
      fVar1 = *param_1;
      fVar2 = *pfVar3;
      pfVar3 = (float *)FUN_00403c00();
      *param_1 = *pfVar3 * fVar1 * param_7 * fVar2 * param_8 + *param_1;
      return;
    }
    break;
  default:
    goto switchD_00548847_default;
  }
  *param_1 = param_3 * param_8 * _DAT_00b37a38 + param_3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548960(int param_1)

{
  return (float10)((float)param_1 * _DAT_00b37580 + _DAT_00b37578);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548980(int param_1)

{
  return (float10)((float)param_1 * _DAT_00b37588);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005489a0(float param_1,float param_2,float param_3)

{
  if (param_1 != 0.0) {
    return (float10)(_DAT_00b37a68 * param_3 + _DAT_00b37a60 * param_2 + param_1);
  }
  return (float10)0.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005489e0(int param_1)

{
  float fVar1;
  
  fVar1 = (float)param_1 * _DAT_00b375d8;
  if (fVar1 <= 0.0) {
    fVar1 = (float)_DAT_00b375e0;
  }
  return (float10)fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548a10(float param_1)

{
  if (_DAT_00b37da0 < param_1) {
    return (float10)0;
  }
  return (float10)((_DAT_00b37db0 - _DAT_00b37da8) * (1.0 - param_1 / _DAT_00b37da0) + _DAT_00b37da8
                  );
}



float10 FUN_00548a60(float param_1,float param_2,float param_3,int param_4,uint param_5)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  
  if (100 < param_4) {
    param_4 = 100;
  }
  fVar1 = ((float)param_4 * param_2 + param_1) / 100.0;
  uVar3 = param_5;
  if ((int)param_5 < 0) {
    uVar3 = -param_5;
  }
  fVar2 = 1.0;
  while( true ) {
    if ((uVar3 & 1) != 0) {
      fVar2 = fVar2 * fVar1;
    }
    uVar3 = uVar3 >> 1;
    if (uVar3 == 0) break;
    fVar1 = fVar1 * fVar1;
  }
  if ((int)param_5 < 0) {
    return (float10)((1.0 / fVar2) * 100.0 + param_3);
  }
  return (float10)(fVar2 * 100.0 + param_3);
}



float10 FUN_00548ad0(void)

{
  float in_stack_00000010;
  float in_stack_00000014;
  
  if ((NAN(in_stack_00000010) || 100.0 < in_stack_00000010 == (in_stack_00000010 == 100.0)) &&
     (in_stack_00000014 < 100.0)) {
    return (float10)(1.0 - (in_stack_00000010 / 100.0 +
                           (1.0 - in_stack_00000010 / 100.0) * (in_stack_00000014 / 100.0)));
  }
  return (float10)0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548b30(float param_1)

{
  return (float10)(_DAT_00b37dc8 * param_1 + _DAT_00b37dc0);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548b50(float param_1,int param_2,float param_3,int param_4,char param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar1 = 1.0;
  if (1.0 < (float)param_2 * _DAT_00b37dd0) {
    fVar1 = (float)param_2 * _DAT_00b37dd0;
  }
  if (param_3 == 0.0) {
    param_3 = 1.0;
  }
  else {
    param_3 = (float)(int)param_3;
  }
  fVar2 = _DAT_00b37dd8 * param_1 * param_3;
  if (param_4 == 0) {
    param_3 = 1.0;
  }
  else {
    fVar4 = (float10)FUN_00985b70();
    param_3 = (float)fVar4;
  }
  fVar3 = 1.0;
  if (param_5 != '\0') {
    fVar3 = _DAT_00b37de0;
  }
  return (float10)(fVar3 * fVar2 * fVar1 * param_3);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548c00(float param_1,undefined4 param_2,undefined4 param_3)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00547b90(param_2,param_3);
  return (float10)(((1.0 - (float)(fVar1 / (float10)100.0)) * _DAT_00b37df0 + _DAT_00b37de8) *
                  param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00548c50(float param_1)

{
  float fVar1;
  undefined4 uVar2;
  
  fVar1 = _DAT_00b37e00 * param_1 + _DAT_00b37df8;
  if (fVar1 < _DAT_00b37e08) {
    return 0;
  }
  if (fVar1 < _DAT_00b37e10) {
    return 1;
  }
  if (fVar1 < _DAT_00b37e18) {
    return 2;
  }
  uVar2 = 3;
  if (_DAT_00b37e20 <= fVar1) {
    uVar2 = 4;
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548cd0(int param_1,int param_2,float param_3,undefined4 param_4,undefined4 param_5,
                    undefined4 param_6)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  
  if (param_2 < 1) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = 1.0 - (param_3 / (float)param_2) * (param_3 / (float)param_2);
  }
  fVar1 = _DAT_00b37ea8 * fVar1 * (float)param_1 + _DAT_00b37ea0;
  fVar2 = (float10)FUN_00547b90(param_4,param_5);
  fVar3 = (float10)FUN_00547f00(param_6);
  return (float10)(fVar1 - _DAT_00b37eb0 * (float)(fVar3 * (float10)(double)fVar2));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548d60(int param_1,int param_2,float param_3)

{
  if (0 < param_2) {
    return (float10)0.0;
  }
  return (float10)((param_3 / 100.0) * ((float)param_1 * _DAT_00b37f38 + _DAT_00b37f30));
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548da0(float param_1)

{
  return (float10)(_DAT_00b37f48 * param_1 + _DAT_00b37f40);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548dc0(int param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = (float)(param_2 + param_4) / 100.0;
  if (fVar1 < 0.0 == (fVar1 == 0.0)) {
    iVar3 = FUN_0056a360(2);
    fVar2 = 0.0;
    fVar1 = fVar2;
    if (param_1 < iVar3) {
      if (99 < param_1) {
        param_1 = 100;
      }
      fVar1 = (float)((0x32 - param_1) * 2) * ((float)param_2 / 100.0);
    }
    if (param_3 < iVar3) {
      if (99 < param_3) {
        param_3 = 100;
      }
      fVar2 = ((float)param_4 / 100.0) * (float)((0x32 - param_3) * 2);
    }
    return (float10)((1.0 - ((fVar2 + fVar1) * (_DAT_00b37f58 - _DAT_00b37f50)) / 100.0) -
                    _DAT_00b37f50);
  }
  return (float10)1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548ea0(float param_1)

{
  return (float10)(_DAT_00b37f80 * param_1 * _DAT_00b37f88);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548ec0(float param_1,float param_2,float param_3,float param_4,char param_5,
                    float param_6,char param_7)

{
  float fVar1;
  float10 fVar2;
  float local_8;
  
  if ((param_3 <= param_2) && (param_2 <= param_4)) {
    fVar2 = (float10)FUN_00985b70();
    local_8 = 1.0;
    if (param_5 == '\0') {
      local_8 = _DAT_00b37fa8;
    }
    fVar1 = 1.0;
    if (param_7 != '\0') {
      fVar1 = _DAT_00b37fa0;
    }
    return (float10)(_DAT_00b37f98 * param_1 * (1.0 - (float)fVar2) *
                     (_DAT_00b37fb0 + param_6 * (1.0 - _DAT_00b37fb0)) * fVar1 * local_8);
  }
  return (float10)0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00548fb0(float param_1)

{
  return (float10)(_DAT_00b37e40 * param_1 + _DAT_00b37e38);
}



undefined4 FUN_00548fd0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0056a300(param_1);
  switch(uVar1) {
  case 1:
    return DAT_00b380b0;
  case 2:
    return DAT_00b380b8;
  case 3:
    return DAT_00b380c0;
  case 4:
    return DAT_00b380c8;
  default:
    return DAT_00b380a8;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00549020(int param_1,float param_2)

{
  float fVar1;
  undefined4 in_EAX;
  
  param_2 = _DAT_00b380d0 * param_2;
  fVar1 = (float)_DAT_00b38288;
  if (fVar1 < param_2 != (fVar1 == param_2)) {
    return CONCAT31((int3)(CONCAT22((short)((uint)in_EAX >> 0x10),
                                    (ushort)(fVar1 < param_2) << 8 |
                                    (ushort)(NAN(fVar1) || NAN(param_2)) << 10 |
                                    (ushort)(fVar1 == param_2) << 0xe) >> 8),1);
  }
  if ((float)param_1 < param_2 != ((float)param_1 == param_2)) {
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00549060(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  iVar1 = FUN_009828c0();
  fVar2 = (float10)iVar1;
  if (extraout_ST0 - fVar2 < (float10)0.0) {
    fVar2 = fVar2 - (float10)1.0;
  }
  return (float10)(float)fVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_005490c0(int param_1)

{
  if (99 < param_1) {
    param_1 = 100;
  }
  return (float10)((float)(100 - param_1) * _DAT_00b380f0 + _DAT_00b380e8);
}



void FUN_00549640(int param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb578;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)(in_ECX + 0x1da) != '\0') goto LAB_00549738;
  if (param_1 == 0) {
    FUN_0054ea00(0,0x10);
    local_4 = 0;
    FUN_0054e580(param_2);
    iVar2 = in_ECX + 0xb8;
LAB_0054971d:
    FUN_0054f350(iVar2);
  }
  else {
    if (param_1 == 2) {
      FUN_0054ea00(2,0x11);
      local_4 = 1;
      FUN_0054e580(param_2);
      iVar2 = in_ECX + 0x5c;
      goto LAB_0054971d;
    }
    if (param_1 != 3) goto LAB_00549738;
    FUN_0054ea00(3,1);
    local_4 = 2;
    FUN_0054e580(param_2);
    FUN_0054f350(in_ECX + 0x114);
  }
  local_4 = 0xffffffff;
  FUN_0054eba0(uVar1);
LAB_00549738:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00549750(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb5c0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)(in_ECX + 0x1da) == '\0') {
    switch(param_1) {
    case 0:
      FUN_0054ea00(0,0x10);
      local_4 = 2;
      FUN_0054e580(param_2);
      FUN_0054f350(in_ECX + 0xdc);
      break;
    case 1:
      FUN_0054ea00(1,0xd);
      local_4 = 0;
      FUN_0054e580(param_2);
      FUN_0054f350(in_ECX + 0x24);
      break;
    case 2:
      FUN_0054ea00(2,0x11);
      local_4 = 1;
      FUN_0054e580(param_2);
      FUN_0054f350(in_ECX + 0x80);
      break;
    case 3:
      FUN_0054ea00(3,1);
      local_4 = 3;
      FUN_0054e580(param_2);
      FUN_0054f350(in_ECX + 0x138);
      break;
    default:
      goto switchD_00549790_default;
    }
    local_4 = 0xffffffff;
    FUN_0054eba0(uVar1);
  }
switchD_00549790_default:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005498c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *in_ECX;
  undefined4 unaff_ESI;
  
  (**(code **)(*in_ECX + 0xb4))(param_1,param_2,param_3,param_4);
  (**(code **)(*in_ECX + 0xb8))(unaff_ESI,param_2,param_3,param_4);
  return;
}



void FUN_00549910(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(char *)((int)in_ECX + 0x1da) == '\0') && (uVar4 = 0, param_1 != 0)) {
    if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[3])(1,uVar2);
    }
    iVar3 = FUN_00401f00(0x14);
    uStack_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0054ea00(1,0xd);
    }
    uStack_4 = 0xffffffff;
    in_ECX[3] = iVar3;
    do {
      (**(code **)(*(int *)in_ECX[3] + 0x4c))(uVar4,*(undefined4 *)(param_1 + uVar4 * 4));
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0xd);
    cVar1 = (**(code **)(in_ECX[4] + 0x2c))(in_ECX[3]);
    if (cVar1 != '\0') goto LAB_005499c0;
  }
  (**(code **)(*in_ECX + 0xd4))();
LAB_005499c0:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005499e0(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 + 1U < 0xf) && (0.0 <= param_2)) && (param_2 <= 1.0)) {
    if ((int *)in_ECX[3] == (int *)0x0) {
      iVar3 = FUN_00401f00(0x14,uVar2);
      local_4 = 0;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0054ea00(1,0xd);
      }
      in_ECX[3] = (int)piVar4;
      local_4 = 0xffffffff;
      (**(code **)(*piVar4 + 0x38))();
    }
    else {
      (**(code **)(*(int *)in_ECX[3] + 0x20))(1);
    }
    if ((param_1 != -1) && (param_2 != 0.0)) {
      (**(code **)(*(int *)in_ECX[3] + 0x4c))(param_1,param_2);
      cVar1 = (**(code **)(in_ECX[4] + 0x2c))(in_ECX[3]);
      if (cVar1 == '\0') {
        (**(code **)(*in_ECX + 0xd4))();
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00549b00(float param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  float local_4;
  
  local_4 = -NAN;
  puStack_8 = &LAB_009bb5eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)((int)in_ECX + 0x1db) == '\0') {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    if (100.0 < param_1) {
      param_1 = 100.0;
    }
    if ((int *)in_ECX[3] == (int *)0x0) {
      iVar3 = FUN_00401f00(0x14,uVar2);
      local_4 = 0.0;
      if (iVar3 == 0) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)FUN_0054ea00(1,0xd);
      }
      in_ECX[3] = (int)piVar4;
      local_4 = -NAN;
      (**(code **)(*piVar4 + 0x38))();
    }
    else {
      (**(code **)(*(int *)in_ECX[3] + 0x20))(1);
    }
    if (*(char *)((int)in_ECX + 0x1da) == '\0') {
      if (param_2 == '\0') {
        if (param_1 == 0.0) {
          (**(code **)(*(int *)in_ECX[3] + 0x4c))(8,0x3f800000);
        }
        else if (12.5 <= param_1) {
          if (param_1 == 12.5) {
            (**(code **)(*(int *)in_ECX[3] + 0x4c))(7,0x3f800000);
          }
          else if (25.0 <= param_1) {
            if (param_1 == 25.0) {
              (**(code **)(*(int *)in_ECX[3] + 0x4c))(6,0x3f800000);
            }
            else if (37.5 <= param_1) {
              if (param_1 == 37.5) {
                (**(code **)(*(int *)in_ECX[3] + 0x4c))(5,0x3f800000);
              }
              else if (50.0 <= param_1) {
                if (param_1 == 50.0) {
                  (**(code **)(*(int *)in_ECX[3] + 0x20))(1);
                }
                else if (62.5 <= param_1) {
                  if (param_1 == 62.5) {
                    (**(code **)(*(int *)in_ECX[3] + 0x4c))(9,0x3f800000);
                  }
                  else if (75.0 <= param_1) {
                    if (param_1 == 75.0) {
                      (**(code **)(*(int *)in_ECX[3] + 0x4c))(10,0x3f800000);
                    }
                    else if (87.5 <= param_1) {
                      if (param_1 == 87.5) {
                        (**(code **)(*(int *)in_ECX[3] + 0x4c))(0xb,0x3f800000);
                      }
                      else if (100.0 <= param_1) {
                        if (param_1 == 100.0) {
                          (**(code **)(*(int *)in_ECX[3] + 0x4c))(0xc,0x3f800000);
                        }
                      }
                      else {
                        (**(code **)(*(int *)in_ECX[3] + 0x4c))(0xb,(param_1 - 87.5) * -0.08 + 1.0);
                        (**(code **)(*(int *)in_ECX[3] + 0x4c))
                                  (0xc,(float)((float10)(double)CONCAT44(unaff_ESI,uVar2) *
                                              (float10)0.07999999821186066));
                      }
                    }
                    else {
                      (**(code **)(*(int *)in_ECX[3] + 0x4c))(10,(param_1 - 75.5) * -0.08 + 1.0);
                      (**(code **)(*(int *)in_ECX[3] + 0x4c))
                                (0xb,(float)((float10)(double)CONCAT44(unaff_ESI,uVar2) *
                                            (float10)0.07999999821186066));
                    }
                  }
                  else {
                    (**(code **)(*(int *)in_ECX[3] + 0x4c))(9,(param_1 - 62.5) * -0.08 + 1.0);
                    (**(code **)(*(int *)in_ECX[3] + 0x4c))
                              (10,(float)((float10)(double)CONCAT44(unaff_ESI,uVar2) *
                                         (float10)0.07999999821186066));
                  }
                }
                else {
                  (**(code **)(*(int *)in_ECX[3] + 0x4c))(9,(param_1 - 50.0) * 0.08);
                }
              }
              else {
                (**(code **)(*(int *)in_ECX[3] + 0x4c))(5,(param_1 - 37.5) * -0.08 + 1.0);
              }
            }
            else {
              (**(code **)(*(int *)in_ECX[3] + 0x4c))(6,(param_1 - 25.0) * -0.08 + 1.0);
              (**(code **)(*(int *)in_ECX[3] + 0x4c))
                        (5,(float)((float10)(double)CONCAT44(unaff_ESI,uVar2) *
                                  (float10)0.07999999821186066));
            }
          }
          else {
            (**(code **)(*(int *)in_ECX[3] + 0x4c))(7,(param_1 - 12.5) * -0.08 + 1.0);
            (**(code **)(*(int *)in_ECX[3] + 0x4c))
                      (6,(float)((float10)(double)CONCAT44(unaff_ESI,uVar2) *
                                (float10)0.07999999821186066));
          }
        }
        else {
          (**(code **)(*(int *)in_ECX[3] + 0x4c))(8,param_1 * -0.08 + 1.0);
          (**(code **)(*(int *)in_ECX[3] + 0x4c))(7,local_4 * 0.08);
        }
      }
      else if (50.0 <= param_1) {
        if (50.0 < param_1) {
          (**(code **)(*(int *)in_ECX[3] + 0x4c))(2,(param_1 - 50.0) / 50.0);
        }
      }
      else {
        (**(code **)(*(int *)in_ECX[3] + 0x4c))(0,(param_1 * -1.0) / 50.0 + 1.0);
      }
      cVar1 = (**(code **)(in_ECX[4] + 0x2c))(in_ECX[3]);
      if (cVar1 == '\0') {
        (**(code **)(*in_ECX + 0xd4))();
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054a080(void)

{
  int in_ECX;
  
  if (*(undefined4 **)(in_ECX + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xc))(1);
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_0054a0a0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x198) = param_1;
  return;
}



int FUN_0054a0b0(void)

{
  float fVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float local_8;
  
  local_8 = 0.0;
  iVar2 = -1;
  iVar3 = -1;
  do {
    fVar4 = (float10)(**(code **)(*in_ECX + 0x54))(iVar3);
    fVar1 = (float)fVar4;
    if (((0.0 < fVar1) && (fVar1 <= 1.0)) && (local_8 < fVar1)) {
      iVar2 = iVar3;
      local_8 = fVar1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  return iVar2;
}



void FUN_0054a120(undefined4 param_1,float *param_2,float *param_3,float param_4)

{
  undefined4 uVar1;
  char cVar2;
  int in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  param_4 = *(float *)(in_ECX + 0x1c8) - param_4;
  *(float *)(in_ECX + 0x1c8) = param_4;
  if (0.0 < param_4) goto switchD_0054a161_default;
  switch(param_1) {
  case 1:
    fVar3 = (float10)FUN_0047e060(0x3f000000,0x3fc00000);
    *(float *)(in_ECX + 0x1c8) = (float)fVar3;
    *(undefined4 *)(in_ECX + 0x1d0) = 0;
    cVar2 = FUN_0047fb70(0x3f000000);
    if (cVar2 != '\0') {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      goto switchD_0054a161_default;
    }
    uVar4 = 0x3f000000;
    uVar1 = 0xbf000000;
    break;
  case 2:
  case 4:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    cVar2 = FUN_0047fb70(0x3e99999a);
    if (cVar2 != '\0') {
      uVar4 = 0x40800000;
      uVar1 = 0x40400000;
      goto LAB_0054a191;
    }
    fVar3 = (float10)FUN_0047e060(0x3f000000,0x3fc00000);
    *(float *)(in_ECX + 0x1c8) = (float)fVar3;
    fVar3 = (float10)FUN_0047e060(0xbd4ccccd,0x3e19999a);
    *(float *)(in_ECX + 0x1d0) = (float)fVar3;
    uVar4 = 0x3e4ccccd;
    uVar1 = 0xbe4ccccd;
    break;
  case 3:
    fVar3 = (float10)FUN_0047e060(0x40000000,0x40400000);
    *(float *)(in_ECX + 0x1c8) = (float)fVar3;
    cVar2 = FUN_0047fb70(0x3e99999a);
    if (cVar2 != '\0') {
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
      goto switchD_0054a161_default;
    }
    fVar3 = (float10)FUN_0047e060(0xbe19999a,0xbd4ccccd);
    *(float *)(in_ECX + 0x1d0) = (float)fVar3;
    uVar4 = 0x3ecccccd;
    uVar1 = 0xbecccccd;
    break;
  case 0xffffffff:
  case 0:
  case 5:
  case 6:
  case 7:
  case 8:
    cVar2 = FUN_0047fb70(0x3e99999a);
    if (cVar2 != '\0') {
      uVar4 = 0x40400000;
      uVar1 = 0x40000000;
LAB_0054a191:
      fVar3 = (float10)FUN_0047e060(uVar1,uVar4);
      *(float *)(in_ECX + 0x1c8) = (float)fVar3;
      *(undefined4 *)(in_ECX + 0x1cc) = 0;
      *(undefined4 *)(in_ECX + 0x1d0) = 0;
      goto switchD_0054a161_default;
    }
    fVar3 = (float10)FUN_0047e060(0x3f000000,0x3fc00000);
    *(float *)(in_ECX + 0x1c8) = (float)fVar3;
    fVar3 = (float10)FUN_0047e060(0xbd4ccccd,0x3e19999a);
    *(float *)(in_ECX + 0x1d0) = (float)fVar3;
    uVar4 = 0x3dcccccd;
    uVar1 = 0xbdcccccd;
    break;
  default:
    goto switchD_0054a161_default;
  }
  fVar3 = (float10)FUN_0047e060(uVar1,uVar4);
  *(float *)(in_ECX + 0x1cc) = (float)fVar3;
switchD_0054a161_default:
  *param_2 = *(float *)(in_ECX + 0x1cc) + *param_2;
  *param_3 = *(float *)(in_ECX + 0x1d0) + *param_3;
  return;
}



int FUN_0054a3b0(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[1];
  iVar2 = *piVar1;
  in_ECX[1] = iVar2;
  if (iVar2 == 0) {
    in_ECX[2] = 0;
  }
  else {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  iVar2 = piVar1[2];
  (**(code **)(*in_ECX + 8))(piVar1);
  in_ECX[3] = in_ECX[3] + -1;
  return iVar2;
}



uint FUN_0054a3e0(uint param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0x10)) {
    fVar2 = *(float *)(*(int *)(in_ECX + 0xc) + param_1 * 4);
    iVar1 = param_1 * 4;
    param_1 = CONCAT22((short)(param_1 >> 0x10),
                       (ushort)(param_2 < fVar2) << 8 | (ushort)(NAN(param_2) || NAN(fVar2)) << 10 |
                       (ushort)(param_2 == fVar2) << 0xe);
    if (param_2 != fVar2) {
      *(float *)(*(int *)(in_ECX + 0xc) + iVar1) = param_2;
      return CONCAT31((int3)(param_1 >> 8),1);
    }
  }
  return param_1 & 0xffffff00;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a450(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = _DAT_00b39af8 * 0.017453292;
  *param_2 = fVar1;
  if (fVar1 < 0.0) {
    *param_2 = 0.0;
  }
  if (1.5707964 < *param_2) {
    *param_2 = 1.5707964;
  }
  *param_1 = *param_2 * -1.0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a4b0(float *param_1,float *param_2)

{
  float fVar1;
  
  fVar1 = _DAT_00b39b00 * 0.017453292;
  *param_1 = fVar1;
  if (0.0 < fVar1) {
    *param_1 = 0.0;
  }
  if (*param_1 < -1.5707964) {
    *param_1 = -1.5707964;
  }
  fVar1 = _DAT_00b39b08 * 0.017453292;
  *param_2 = fVar1;
  if (fVar1 < 0.0) {
    *param_2 = 0.0;
  }
  if (1.5707964 < *param_2) {
    *param_2 = 1.5707964;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0054a5e3) */
/* WARNING: Removing unreachable block (ram,0x0054a607) */
/* WARNING: Removing unreachable block (ram,0x0054a60d) */

bool FUN_0054a540(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int in_ECX;
  float10 fVar4;
  float fVar5;
  
  (**(code **)(*(int *)(in_ECX + 0xa4) + 0x48))(0x10);
  fVar4 = (float10)(**(code **)(*(int *)(in_ECX + 0xa4) + 0x48))();
  fVar5 = (float)fVar4;
  fVar4 = (float10)(**(code **)(*(int *)(in_ECX + 0xa4) + 0x48))(0xe);
  fVar1 = (float)fVar4;
  if (fVar5 == 3.4028235e+38) {
    fVar5 = 0.0;
  }
  if (fVar5 <= -1.5707964) {
    fVar2 = -1.5707964;
LAB_0054a5cc:
    fVar5 = fVar2;
  }
  else {
    fVar2 = 1.5707964;
    if (1.5707964 <= fVar5) goto LAB_0054a5cc;
  }
  fVar2 = 1.5707964;
  if (fVar1 == 3.4028235e+38) {
    fVar1 = 0.0;
  }
  if (fVar1 <= -1.5707964) {
    fVar1 = -1.5707964;
  }
  else if (1.5707964 <= fVar1) goto LAB_0054a652;
  fVar2 = fVar1;
LAB_0054a652:
  FUN_00711580(fVar5,0xf,fVar2);
  cVar3 = FUN_0070ff20(&DAT_00b26dc4);
  return cVar3 == '\0';
}



void FUN_0054a6a0(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb618;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0054ea00(0,0x10);
  local_4 = 0;
  if (((*(char *)(in_ECX + 0x1da) == '\0') && (param_1 != 0)) && (0.0 <= param_2)) {
    uVar4 = 0;
    do {
      if ((*(float *)(param_1 + uVar4 * 4) < 0.0) || (1.0 < *(float *)(param_1 + uVar4 * 4)))
      goto LAB_0054a7a8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x10);
    FUN_0054e580(param_2);
    iVar6 = 8;
    pfVar5 = (float *)(param_1 + 8);
    iVar2 = -param_1;
    uVar4 = 2;
    do {
      if ((uVar4 - 2 < local_10) && (pfVar5[-2] != *(float *)((int)pfVar5 + local_14 + iVar2 + -8)))
      {
        *(float *)((int)pfVar5 + local_14 + iVar2 + -8) = pfVar5[-2];
      }
      if ((uVar4 - 1 < local_10) && (pfVar5[-1] != *(float *)((int)pfVar5 + local_14 + iVar2 + -4)))
      {
        *(float *)((int)pfVar5 + local_14 + iVar2 + -4) = pfVar5[-1];
      }
      if ((uVar4 < local_10) && (*pfVar5 != *(float *)(local_14 + iVar6))) {
        *(float *)(local_14 + iVar6) = *pfVar5;
      }
      if ((uVar4 + 1 < local_10) &&
         (pfVar5[1] != *(float *)((int)pfVar5 + local_14 + (4 - param_1)))) {
        *(float *)((int)pfVar5 + local_14 + (4 - param_1)) = pfVar5[1];
      }
      uVar1 = uVar4 + 2;
      iVar6 = iVar6 + 0x10;
      pfVar5 = pfVar5 + 4;
      uVar4 = uVar4 + 4;
    } while (uVar1 < 0x10);
    FUN_0054f350(in_ECX + 0xb8);
  }
LAB_0054a7a8:
  local_4 = 0xffffffff;
  FUN_0054eba0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054a8a0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_FS_OFFSET;
  int local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb648;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0054ea00(2,0x11);
  uVar5 = 0;
  local_4 = 0;
  if (((*(char *)(in_ECX + 0x1da) == '\0') && (param_1 != 0)) && (0.0 <= param_2)) {
    FUN_0054e580(param_2);
    iVar2 = -param_1;
    uVar6 = 2;
    param_2 = 1.12104e-44;
    pfVar4 = (float *)(param_1 + 8);
    do {
      if ((uVar5 < local_10) && (pfVar4[-2] != *(float *)((int)pfVar4 + local_14 + iVar2 + -8))) {
        *(float *)((int)pfVar4 + local_14 + iVar2 + -8) = pfVar4[-2];
      }
      if ((uVar6 - 1 < local_10) && (pfVar4[-1] != *(float *)((int)pfVar4 + local_14 + iVar2 + -4)))
      {
        *(float *)((int)pfVar4 + local_14 + iVar2 + -4) = pfVar4[-1];
      }
      if ((uVar6 < local_10) && (*pfVar4 != *(float *)((int)param_2 + local_14))) {
        *(float *)((int)param_2 + local_14) = *pfVar4;
      }
      if ((uVar6 + 1 < local_10) &&
         (pfVar4[1] != *(float *)((int)pfVar4 + local_14 + (4 - param_1)))) {
        *(float *)((int)pfVar4 + local_14 + (4 - param_1)) = pfVar4[1];
      }
      if ((uVar6 + 2 < local_10) &&
         (pfVar4[2] != *(float *)((int)pfVar4 + local_14 + (8 - param_1)))) {
        *(float *)((int)pfVar4 + local_14 + (8 - param_1)) = pfVar4[2];
      }
      if ((uVar6 + 3 < local_10) &&
         (pfVar4[3] != *(float *)((int)pfVar4 + local_14 + (0xc - param_1)))) {
        *(float *)((int)pfVar4 + local_14 + (0xc - param_1)) = pfVar4[3];
      }
      if ((uVar6 + 4 < local_10) &&
         (pfVar4[4] != *(float *)((int)pfVar4 + local_14 + (0x10 - param_1)))) {
        *(float *)((int)pfVar4 + local_14 + (0x10 - param_1)) = pfVar4[4];
      }
      if ((uVar6 + 5 < local_10) &&
         (pfVar4[5] != *(float *)((int)pfVar4 + local_14 + (0x14 - param_1)))) {
        *(float *)((int)pfVar4 + local_14 + (0x14 - param_1)) = pfVar4[5];
      }
      param_2 = (float)((int)param_2 + 0x20);
      uVar5 = uVar5 + 8;
      pfVar4 = pfVar4 + 8;
      uVar6 = uVar6 + 8;
    } while ((uint)param_2 < 0x30);
    for (; uVar5 < 0x11; uVar5 = uVar5 + 1) {
      fVar1 = *(float *)(param_1 + uVar5 * 4);
      if ((uVar5 < local_10) && (fVar1 != *(float *)(local_14 + uVar5 * 4))) {
        *(float *)(local_14 + uVar5 * 4) = fVar1;
      }
    }
    FUN_0054f350(in_ECX + 0x5c);
  }
  local_4 = 0xffffffff;
  FUN_0054eba0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054abc0(float *param_1,float param_2)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb678;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0054ea00(3,1);
  local_4 = 0;
  if (((*(char *)(in_ECX + 0x1da) == '\0') && (param_1 != (float *)0x0)) && (0.0 <= param_2)) {
    FUN_0054e580(param_2);
    if ((local_10 == 0) || (*param_1 == *local_14)) {
      FUN_0054f350(in_ECX + 0x114);
    }
    else {
      *local_14 = *param_1;
      FUN_0054f350(in_ECX + 0x114);
    }
  }
  local_4 = 0xffffffff;
  FUN_0054eba0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054aca0(char param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  
  if (param_1 != '\0') {
    (**(code **)(*in_ECX + 0xd4))();
  }
  if (((param_3 != '\0') && (in_ECX[0x1a] != 0)) &&
     (puVar3 = *(undefined4 **)(in_ECX[0x18] + 8), puVar3 != (undefined4 *)0x0)) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = (int *)in_ECX[0x18];
      iVar2 = *piVar1;
      in_ECX[0x18] = iVar2;
      if (iVar2 == 0) {
        in_ECX[0x19] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(in_ECX[0x17] + 8))(piVar1);
      in_ECX[0x1a] = in_ECX[0x1a] + -1;
    } while ((in_ECX[0x1a] != 0) &&
            (puVar3 = *(undefined4 **)(in_ECX[0x18] + 8), puVar3 != (undefined4 *)0x0));
  }
  if ((param_2 != '\0') &&
     ((in_ECX[0x31] != 0 &&
      (puVar3 = *(undefined4 **)(in_ECX[0x2f] + 8), puVar3 != (undefined4 *)0x0)))) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = (int *)in_ECX[0x2f];
      iVar2 = *piVar1;
      in_ECX[0x2f] = iVar2;
      if (iVar2 == 0) {
        in_ECX[0x30] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(in_ECX[0x2e] + 8))(piVar1);
      in_ECX[0x31] = in_ECX[0x31] + -1;
    } while ((in_ECX[0x31] != 0) &&
            (puVar3 = *(undefined4 **)(in_ECX[0x2f] + 8), puVar3 != (undefined4 *)0x0));
  }
  if ((param_4 != '\0') &&
     ((in_ECX[0x48] != 0 &&
      (puVar3 = *(undefined4 **)(in_ECX[0x46] + 8), puVar3 != (undefined4 *)0x0)))) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = (int *)in_ECX[0x46];
      iVar2 = *piVar1;
      in_ECX[0x46] = iVar2;
      if (iVar2 == 0) {
        in_ECX[0x47] = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(in_ECX[0x45] + 8))(piVar1);
      in_ECX[0x48] = in_ECX[0x48] + -1;
    } while ((in_ECX[0x48] != 0) &&
            (puVar3 = *(undefined4 **)(in_ECX[0x46] + 8), puVar3 != (undefined4 *)0x0));
  }
  return;
}



void FUN_0054ade0(char param_1,char param_2,char param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  if (((param_1 != '\0') && (*(int *)(in_ECX + 0x30) != 0)) &&
     (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 8), puVar3 != (undefined4 *)0x0)) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = *(int **)(in_ECX + 0x28);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x28) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x2c) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0x24) + 8))(piVar1);
      *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -1;
    } while ((*(int *)(in_ECX + 0x30) != 0) &&
            (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 8), puVar3 != (undefined4 *)0x0));
  }
  if ((param_3 != '\0') &&
     ((*(int *)(in_ECX + 0x8c) != 0 &&
      (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x84) + 8), puVar3 != (undefined4 *)0x0)))) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = *(int **)(in_ECX + 0x84);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x84) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x88) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0x80) + 8))(piVar1);
      *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + -1;
    } while ((*(int *)(in_ECX + 0x8c) != 0) &&
            (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x84) + 8), puVar3 != (undefined4 *)0x0));
  }
  if ((param_2 != '\0') &&
     ((*(int *)(in_ECX + 0xe8) != 0 &&
      (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0xe0) + 8), puVar3 != (undefined4 *)0x0)))) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = *(int **)(in_ECX + 0xe0);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0xe0) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0xe4) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0xdc) + 8))(piVar1);
      *(int *)(in_ECX + 0xe8) = *(int *)(in_ECX + 0xe8) + -1;
    } while ((*(int *)(in_ECX + 0xe8) != 0) &&
            (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0xe0) + 8), puVar3 != (undefined4 *)0x0));
  }
  if ((param_4 != '\0') &&
     ((*(int *)(in_ECX + 0x144) != 0 &&
      (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x13c) + 8), puVar3 != (undefined4 *)0x0)))) {
    do {
      (**(code **)*puVar3)(1);
      piVar1 = *(int **)(in_ECX + 0x13c);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x13c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x140) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      (**(code **)(*(int *)(in_ECX + 0x138) + 8))(piVar1);
      *(int *)(in_ECX + 0x144) = *(int *)(in_ECX + 0x144) + -1;
    } while ((*(int *)(in_ECX + 0x144) != 0) &&
            (puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x13c) + 8), puVar3 != (undefined4 *)0x0));
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0054b010(undefined4 param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined8 *puVar16;
  float *pfVar17;
  float local_138;
  undefined8 local_134;
  float fStack_12c;
  float local_128;
  float local_124;
  undefined1 local_120 [36];
  undefined1 local_fc [36];
  undefined1 local_d8 [36];
  undefined1 local_b4 [36];
  undefined1 local_90 [36];
  undefined1 local_6c [36];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  if (*(char *)(in_ECX + 0x1da) != '\0') {
    return 0;
  }
  local_128 = 0.0;
  local_124 = 0.0;
  if (*(char *)(in_ECX + 0x1d5) == '\0') {
LAB_0054b13e:
    FUN_00711580(0x3fc6b721,0x3e0a86c3,0x3fc8e2cc);
    iVar6 = *(int *)(*(int *)(param_2 + 0x1c) + 0x1c);
    iVar7 = *(int *)(iVar6 + 0x1c);
    iVar9 = *(int *)(iVar7 + 0x1c);
    iVar1 = *(int *)(iVar9 + 0x1c);
    local_138 = *(float *)(iVar1 + 0x1c);
    iVar8 = param_2 + 0x30;
    iVar6 = iVar6 + 0x30;
    puVar15 = local_fc;
    puVar14 = local_24;
    iVar4 = *(int *)(param_2 + 0x1c) + 0x30;
    puVar13 = local_90;
    iVar7 = iVar7 + 0x30;
    puVar12 = local_48;
    iVar9 = iVar9 + 0x30;
    puVar11 = local_6c;
    FUN_007100a0(local_b4,iVar1 + 0x30);
    FUN_007100a0(puVar11,iVar9);
    FUN_007100a0(puVar12,iVar7);
    FUN_007100a0(puVar13,iVar4);
    FUN_007100a0(puVar14,iVar6);
    FUN_007100a0(puVar15,iVar8);
    uVar5 = FUN_007103c0(local_b4);
    FUN_007100a0(local_d8,uVar5);
    FUN_00711440(&local_128,&local_134,&local_124);
  }
  else {
    pfVar17 = (float *)(in_ECX + 0x170);
    local_138 = *(float *)(in_ECX + 0x178) * *(float *)(in_ECX + 0x178) +
                *pfVar17 * *pfVar17 + *(float *)(in_ECX + 0x174) * *(float *)(in_ECX + 0x174);
    fVar10 = (float10)FUN_00982c30();
    local_138 = (float)fVar10;
    if (local_138 <= 0.0) goto LAB_0054b13e;
    FUN_00711580(0,0,0xbfb6e28b);
    puVar16 = &local_134;
    puVar15 = local_120;
    puVar14 = local_d8;
    FUN_007103c0(local_fc);
    FUN_007100a0(puVar14,puVar15);
    FUN_007101f0(puVar16,pfVar17);
    fVar10 = (float10)FUN_0098598a();
    local_128 = (float)fVar10;
    local_138 = local_134._4_4_ * local_134._4_4_ + (float)local_134 * (float)local_134;
    local_134 = (double)fStack_12c;
    fVar10 = (float10)FUN_00982c30();
    local_138 = (float)fVar10;
    fVar10 = (float10)FUN_0098598a();
    local_124 = (float)fVar10;
  }
  *(float *)(in_ECX + 0x19c) = local_128;
  *(float *)(in_ECX + 0x1a0) = local_124;
  fVar2 = ABS(*(float *)(in_ECX + 0x184) - local_128);
  local_138 = ABS(*(float *)(in_ECX + 0x188) - local_124);
  if (fVar2 <= local_138) {
    *(float *)(in_ECX + 0x1a8) = _DAT_00b39af0;
    fVar3 = local_138 / *(float *)(in_ECX + 0x1a8);
    *(float *)(in_ECX + 0x1a4) = fVar2 / fVar3;
  }
  else {
    *(float *)(in_ECX + 0x1a4) = _DAT_00b39af0;
    fVar3 = fVar2 / *(float *)(in_ECX + 0x1a4);
    *(float *)(in_ECX + 0x1a8) = local_138 / fVar3;
  }
  local_134 = (double)CONCAT44(local_134._4_4_,fVar3);
  FUN_0054a450(&local_138,&local_134);
  *(float *)(in_ECX + 0x1ac) =
       ((1.0 - ((float)local_134 - ABS(*(float *)(in_ECX + 0x184))) / (float)local_134) * 0.7 + 0.3)
       * _DAT_00b39af0;
  if (*(char *)(in_ECX + 0x198) != '\0') {
    if (0.7853982 < ABS(local_128)) {
      *(float *)(in_ECX + 0x1b0) = local_128 * 0.75;
      goto LAB_0054b367;
    }
  }
  *(undefined4 *)(in_ECX + 0x1b0) = 0;
LAB_0054b367:
  *(undefined4 *)(in_ECX + 0x1b4) = 0;
  *(float *)(in_ECX + 0x1b8) = local_128;
  *(float *)(in_ECX + 0x1bc) = local_124;
  if (*(char *)(in_ECX + 0x1d4) == '\0') {
    return 1;
  }
  *(undefined1 *)(in_ECX + 0x1d4) = 0;
  *(float *)(in_ECX + 0x184) = local_128;
  *(float *)(in_ECX + 0x188) = local_124;
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(in_ECX + 0x1b0);
  *(undefined4 *)(in_ECX + 0x180) = 0;
  *(float *)(in_ECX + 0x18c) = local_128;
  *(float *)(in_ECX + 400) = local_124;
  return 1;
}



undefined4 FUN_0054b3e0(float param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int in_ECX;
  float local_8;
  float local_4;
  
  if (*(char *)(in_ECX + 0x1da) != '\0') {
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  }
  fVar1 = *(float *)(in_ECX + 0x1b0) - *(float *)(in_ECX + 0x17c);
  fVar2 = *(float *)(in_ECX + 0x1b4) - *(float *)(in_ECX + 0x180);
  local_4 = *(float *)(in_ECX + 0x1ac) * param_1 * 0.5;
  fVar3 = -local_4;
  local_8 = local_4;
  if ((fVar1 <= local_4) && (local_8 = fVar1, fVar1 < fVar3)) {
    local_8 = fVar3;
  }
  if ((fVar2 <= local_4) && (local_4 = fVar2, fVar2 < fVar3)) {
    local_4 = fVar3;
  }
  *(float *)(in_ECX + 0x17c) = *(float *)(in_ECX + 0x17c) + local_8;
  *(float *)(in_ECX + 0x180) = local_4 + *(float *)(in_ECX + 0x180);
  if (*(float *)(in_ECX + 0x17c) <= 0.7853982) {
    if (*(float *)(in_ECX + 0x17c) < -0.7853982) {
      uVar4 = 0xbf490fdb;
      goto LAB_0054b4fd;
    }
  }
  else {
    uVar4 = 0x3f490fdb;
LAB_0054b4fd:
    *(undefined4 *)(in_ECX + 0x17c) = uVar4;
  }
  if (*(float *)(in_ECX + 0x180) <= 0.3926991) {
    if (-0.3926991 <= *(float *)(in_ECX + 0x180)) goto LAB_0054b53d;
    uVar4 = 0xbec90fdb;
  }
  else {
    uVar4 = 0x3ec90fdb;
  }
  *(undefined4 *)(in_ECX + 0x180) = uVar4;
LAB_0054b53d:
  *param_3 = *(undefined4 *)(in_ECX + 0x17c);
  *param_4 = *(undefined4 *)(in_ECX + 0x180);
  return 1;
}



int FUN_0054b560(int param_1)

{
  int iVar1;
  
  while ((param_1 != 0 && (iVar1 = __stricmp(*(char **)(param_1 + 8),"Bip01 NonAccum"), iVar1 != 0))
        ) {
    param_1 = *(int *)(param_1 + 0x1c);
  }
  return param_1;
}



void FUN_0054b5a0(undefined4 *param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  undefined1 local_d8 [36];
  undefined1 local_b4 [72];
  undefined4 local_6c [9];
  undefined1 local_48 [36];
  undefined1 local_24 [36];
  
  if (*(char *)(in_ECX + 0x1da) == '\0') {
    fVar1 = *(float *)(in_ECX + 0x1b8) - *(float *)(in_ECX + 0x184);
    fVar2 = *(float *)(in_ECX + 0x1bc) - *(float *)(in_ECX + 0x188);
    if (3.1415927 < fVar1) {
      fVar1 = fVar1 - 6.2831855;
    }
    if (fVar1 < -3.1415927) {
      fVar1 = fVar1 + 6.2831855;
    }
    if (3.1415927 < fVar2) {
      fVar2 = fVar2 - 6.2831855;
    }
    if (fVar2 < -3.1415927) {
      fVar2 = fVar2 + 6.2831855;
    }
    local_ec = param_2 * *(float *)(in_ECX + 0x1a4);
    local_e8 = param_2 * *(float *)(in_ECX + 0x1a8);
    fVar3 = -local_ec;
    if ((fVar1 <= local_ec) && (local_ec = fVar1, fVar1 < fVar3)) {
      local_ec = fVar3;
    }
    fVar1 = -local_e8;
    if ((fVar2 <= local_e8) && (local_e8 = fVar2, fVar2 < fVar1)) {
      local_e8 = fVar1;
    }
    *(float *)(in_ECX + 0x184) = *(float *)(in_ECX + 0x184) + local_ec;
    *(float *)(in_ECX + 0x188) = *(float *)(in_ECX + 0x188) + local_e8;
    FUN_0054a450(&local_ec,&local_e8);
    FUN_0054a4b0(&local_e0,&local_e4);
    local_dc = *(float *)(in_ECX + 0x17c) + local_ec * 0.75;
    local_ec = local_e8 * 0.75 + *(float *)(in_ECX + 0x17c);
    if (*(float *)(in_ECX + 0x184) <= local_ec) {
      if (*(float *)(in_ECX + 0x184) < local_dc) {
        *(float *)(in_ECX + 0x184) = local_dc;
      }
    }
    else {
      *(float *)(in_ECX + 0x184) = local_ec;
    }
    local_e0 = *(float *)(in_ECX + 0x180) + local_e0 * 0.5;
    local_e4 = local_e4 * 0.5 + *(float *)(in_ECX + 0x180);
    fVar1 = local_e4;
    if ((local_e4 < *(float *)(in_ECX + 0x188)) ||
       (fVar1 = local_e0, *(float *)(in_ECX + 0x188) < local_e0)) {
      *(float *)(in_ECX + 0x188) = fVar1;
    }
    FUN_00711580(0x3fc6b721,0x3e0a86c3,0x3fc8e2cc);
    FUN_007117c0(*(undefined4 *)(in_ECX + 0x184),0,*(undefined4 *)(in_ECX + 0x188));
    FUN_007100a0(local_48,local_d8);
    FUN_0054b560(param_3);
    param_3 = param_3 + 100;
    puVar6 = local_b4;
    FUN_007103c0(local_24);
    FUN_007100a0(puVar6,param_3);
    puVar6 = local_48;
    puVar5 = local_6c;
    FUN_007103c0(local_24);
    FUN_007100a0(puVar5,puVar6);
    puVar5 = local_6c;
  }
  else {
    puVar5 = &DAT_00b26dc4;
  }
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *param_1 = *puVar5;
    puVar5 = puVar5 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054b8c0(float param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int in_ECX;
  float unaff_ESI;
  float fVar5;
  
  fVar5 = _DAT_00b39b10 * 0.017453292;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (1.5707964 < fVar5) {
    fVar5 = 1.5707964;
  }
  fVar3 = fVar5 * -1.0;
  fVar2 = _DAT_00b39b18 * 0.017453292;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (1.5707964 < fVar2) {
    fVar2 = 1.5707964;
  }
  fVar4 = fVar5;
  if ((param_1 <= fVar5) && (fVar4 = param_1, param_1 < fVar3)) {
    fVar4 = fVar3;
  }
  piVar1 = (int *)(in_ECX + 0xa4);
  if (fVar4 < 0.0) {
    (**(code **)(*piVar1 + 0x4c))(10,0);
    fVar5 = (fVar2 * -1.0) / unaff_ESI;
  }
  else {
    (**(code **)(*piVar1 + 0x4c))(10,fVar4 / fVar5);
    fVar5 = 0.0;
  }
  (**(code **)(*piVar1 + 0x4c))(9,fVar5);
  if (fVar3 < 0.0) {
    (**(code **)(*piVar1 + 0x4c))(0xb,0);
    fVar5 = unaff_ESI / fVar5;
  }
  else {
    (**(code **)(*piVar1 + 0x4c))(0xb,fVar3 / fVar5);
    fVar5 = 0.0;
  }
  (**(code **)(*piVar1 + 0x4c))(8,fVar5);
  return;
}



uint FUN_0054ba90(float param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint unaff_ESI;
  float10 fVar7;
  float10 fVar8;
  byte bVar9;
  double dVar10;
  
  if ((param_3 != (uint *)0x0) && (param_2 != (int *)0x0)) {
    if (param_2[3] != 0) {
      if (*(int *)(param_2[1] + 8) != 0) {
        piVar1 = *(int **)(param_2[1] + 8);
        iVar5 = (**(code **)(*param_3 + 4))();
        iVar6 = (**(code **)(*piVar1 + 4))();
        if (iVar6 != iVar5) {
          return 0;
        }
      }
      if (param_2[3] != 0) {
        uVar2 = *param_3;
        fVar7 = (float10)(**(code **)(uVar2 + 0xc))();
        (**(code **)(uVar2 + 0x10))((float)(fVar7 + (float10)param_1));
        piVar1 = *(int **)(param_2[1] + 8);
        while (piVar1 != (int *)0x0) {
          fVar7 = (float10)(**(code **)(*param_3 + 0xc))();
          fVar8 = (float10)(**(code **)(*piVar1 + 0xc))();
          if (fVar8 < (float10)(double)fVar7 == (fVar8 == (float10)(double)fVar7)) {
            uVar2 = *param_3;
            fVar7 = (float10)(**(code **)(uVar2 + 0xc))();
            fVar8 = (float10)(**(code **)(*piVar1 + 0xc))(1);
            bVar9 = (byte)((uint)param_4 >> 0x18);
            bVar4 = (**(code **)(uVar2 + 0x1c))(piVar1,(float)((float10)(double)fVar7 / fVar8));
            return (uint)(bVar9 | bVar4);
          }
          (**(code **)(*param_3 + 0x1c))(piVar1,0x3f800000,1,param_4);
          unaff_ESI = *param_3;
          fVar7 = (float10)(**(code **)(unaff_ESI + 0xc))();
          dVar10 = (double)fVar7;
          fVar7 = (float10)(**(code **)(*piVar1 + 0xc))();
          (**(code **)(unaff_ESI + 0x10))((float)((float10)dVar10 - fVar7));
          piVar3 = (int *)param_2[1];
          iVar5 = *piVar3;
          param_2[1] = iVar5;
          if (iVar5 == 0) {
            param_2[2] = 0;
          }
          else {
            *(undefined4 *)(iVar5 + 4) = 0;
          }
          (**(code **)(*param_2 + 8))(piVar3);
          param_2[3] = param_2[3] + -1;
          (**(code **)*piVar1)(1);
          if (param_2[3] == 0) break;
          piVar1 = *(int **)(param_2[1] + 8);
        }
        (**(code **)(*param_3 + 0x10))(0);
        return unaff_ESI >> 0x18;
      }
    }
    (**(code **)(*param_3 + 0x10))(0);
  }
  return 0;
}



void FUN_0054bc50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bb6a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a641d4;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a641c4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054bcc0(byte param_1)

{
  FUN_0054bc50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0054bce0(void)

{
  uint uVar1;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int iVar2;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bb7d0;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = (int)&PTR_FUN_00a6424c;
  local_4 = 0x13;
  FUN_0054aca0(1,1,1,1);
  iVar2 = 1;
  (**(code **)(*in_ECX + 0xb8))(1,1,1,1,uVar1);
  FUN_0054eba0();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_0054eba0();
  FUN_0054bc50();
  FUN_0054eba0();
  FUN_00721410();
  *unaff_FS_OFFSET = iVar2;
  return;
}



void FUN_0054c5d0(float param_1,float param_2,float param_3)

{
  char cVar1;
  int in_ECX;
  
  if (((DAT_00b3f9a8 == *(float *)(in_ECX + 0x170)) && (DAT_00b3f9ac == *(float *)(in_ECX + 0x174)))
     && (DAT_00b3f9b0 == *(float *)(in_ECX + 0x178))) {
    cVar1 = FUN_008aa390(&DAT_00b3f9a8);
    if (cVar1 != '\0') {
      *(undefined4 *)(in_ECX + 0x1c0) = 1;
      *(undefined4 *)(in_ECX + 0x1c4) = 0;
    }
  }
  if (((DAT_00b3f9a8 == param_1) && (DAT_00b3f9ac == param_2)) && (DAT_00b3f9b0 == param_3)) {
    *(undefined4 *)(in_ECX + 0x1c0) = 0;
  }
  *(float *)(in_ECX + 0x170) = param_1;
  *(float *)(in_ECX + 0x174) = param_2;
  *(float *)(in_ECX + 0x178) = param_3;
  *(undefined1 *)(in_ECX + 0x1d5) = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0054c6b0(float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int in_ECX;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(char *)(in_ECX + 0x1da) == '\0') {
    iVar3 = FUN_0054a0b0();
    local_8 = *(float *)(in_ECX + 0x19c);
    local_4 = *(float *)(in_ECX + 0x1a0);
    if (iVar3 < 0xd) {
      FUN_0054a120(iVar3,&local_8,&local_4,param_1);
    }
    fVar1 = local_8 - *(float *)(in_ECX + 0x18c);
    local_8 = local_4 - *(float *)(in_ECX + 400);
    param_1 = _DAT_00b39af0 * param_1;
    fVar2 = -param_1;
    local_c = param_1;
    if ((fVar1 <= param_1) && (local_c = fVar1, fVar1 < fVar2)) {
      local_c = fVar2;
    }
    if ((param_1 < local_8) || (param_1 = fVar2, local_8 < fVar2)) {
      local_8 = param_1;
    }
    local_c = local_c + *(float *)(in_ECX + 0x18c);
    *(float *)(in_ECX + 0x18c) = local_c;
    fVar1 = *(float *)(in_ECX + 400) + local_8;
    *(float *)(in_ECX + 400) = fVar1;
    FUN_0054b8c0(local_c - *(float *)(in_ECX + 0x184),fVar1 - *(float *)(in_ECX + 0x188));
    return 1;
  }
  return 0;
}



void FUN_0054c810(float param_1,int *param_2,int param_3,int *param_4,char param_5)

{
  float fVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  float10 fVar7;
  float10 fVar8;
  float fStack_10;
  undefined8 local_8;
  
  piVar6 = param_4;
  iVar4 = param_3;
  if (((param_2 != (int *)0x0) && (param_3 != 0)) && (param_4 != (int *)0x0)) {
    local_8 = (double)param_1;
    fVar7 = (float10)(**(code **)(*param_2 + 0xc))();
    if (fVar7 <= (float10)local_8) {
      local_8 = (double)((ulonglong)local_8 & 0xffffffff00000000);
      fVar7 = (float10)(**(code **)(*param_2 + 0xc))();
      fVar1 = (float)fVar7;
      piVar5 = (int *)0x0;
      fStack_10 = fVar1;
      for (puVar2 = *(undefined4 **)(iVar4 + 4); puVar2 != (undefined4 *)0x0;
          puVar2 = (undefined4 *)*puVar2) {
        piVar3 = (int *)puVar2[2];
        if (piVar3 != (int *)0x0) {
          local_8._4_4_ = (float)((ulonglong)local_8 >> 0x20);
          local_8 = (double)CONCAT44(local_8._4_4_,fVar1);
          fVar7 = (float10)(**(code **)(*piVar3 + 0xc))();
          fVar1 = (float)(fVar7 + (float10)fStack_10);
          fStack_10 = fVar1;
        }
        if (param_1 < fVar1 != (param_1 == fVar1)) {
          if (piVar3 != (int *)0x0) {
            if (piVar5 != (int *)0x0) {
              param_2 = piVar5;
            }
            param_1 = param_1 - (float)local_8;
            iVar4 = *piVar6;
            fVar7 = (float10)(**(code **)(*piVar3 + 0xc))();
            fVar1 = (float)((float10)param_1 / fVar7);
            local_8 = (double)CONCAT44(local_8._4_4_,fVar1);
            (**(code **)(iVar4 + 0x18))(param_2,piVar3,fVar1);
            if ((char)param_2 != '\0') {
              return;
            }
            local_8._4_4_ = (float)(double)CONCAT44(unaff_EDI,unaff_EBP);
            (**(code **)(*piVar6 + 0x10))((float)(double)CONCAT44(unaff_EDI,unaff_EBP));
            iVar4 = *piVar3;
            fVar7 = (float10)(**(code **)(iVar4 + 0xc))();
            fVar8 = (float10)(**(code **)(*piVar6 + 0xc))();
            local_8 = (double)CONCAT44(local_8._4_4_,(float)((float10)(double)fVar7 - fVar8));
            (**(code **)(iVar4 + 0x10))((float)((float10)(double)fVar7 - fVar8));
            FUN_00589640(puVar2,(int)&local_8 + 4);
            return;
          }
          break;
        }
        piVar5 = piVar3;
      }
      if (param_5 == '\0') {
        (**(code **)(*piVar6 + 0x10))(param_1 - fVar1);
        FUN_005b1e20(&param_3);
        return;
      }
    }
  }
  return;
}



undefined4 FUN_0054c9c0(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 unaff_EBX;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float unaff_retaddr;
  float fStack_4;
  
  if ((((param_1 != (int *)0x0) && (param_2 != 0)) && (*(int *)(param_2 + 0xc) != 0)) &&
     (param_3 != 0)) {
    fVar4 = (float10)(**(code **)(*param_1 + 0xc))();
    (**(code **)(*param_1 + 0x10))(0);
    for (puVar1 = *(undefined4 **)(param_3 + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)*puVar1) {
      piVar2 = (int *)puVar1[2];
      if (piVar2 != (int *)0x0) {
        fVar5 = (float10)(**(code **)(*piVar2 + 0xc))();
        unaff_retaddr = (float)(fVar5 + (float10)unaff_retaddr);
        FUN_0054c810(unaff_retaddr,param_1,param_2,piVar2,1);
      }
    }
    (**(code **)(*param_1 + 0x10))(unaff_EBX);
    puVar1 = *(undefined4 **)(param_2 + 4);
    (**(code **)(*param_1 + 0xc))();
    fStack_4 = (float)extraout_ST0;
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      piVar2 = (int *)puVar1[2];
      if ((piVar2 != (int *)0x0) &&
         (piVar3 = (int *)(**(code **)(*piVar2 + 0x24))(), piVar3 != (int *)0x0)) {
        fVar5 = (float10)(**(code **)(*piVar2 + 0xc))();
        fStack_4 = (float)(fVar5 + (float10)fStack_4);
        FUN_0054c810(fStack_4,param_1,0.0 - (float)fVar4,piVar3,0);
        (**(code **)(*piVar3 + 0x1c))(piVar2,0x3f800000,1,0);
      }
    }
    return 1;
  }
  return 0;
}



void FaceGen_Struct1E0_ctor(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb8e2;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6424c;
  FUN_0054ea00(1,0xd);
  in_ECX[0xc] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[9] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 2;
  FUN_0054ea00(1,0xd);
  local_4._0_1_ = 3;
  FUN_0054ea00(1,0xd);
  in_ECX[0x1a] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x17] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 5;
  FUN_0054ea00(2,0x11);
  in_ECX[0x23] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x20] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 7;
  FUN_0054ea00(2,0x11);
  local_4._0_1_ = 8;
  FUN_0054ea00(2,0x11);
  in_ECX[0x31] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x2e] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 10;
  FUN_0054ea00(0,0x10);
  in_ECX[0x3a] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x37] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 0xc;
  FUN_0054ea00(0,0x10);
  local_4._0_1_ = 0xd;
  FUN_0054ea00(0,0x10);
  in_ECX[0x48] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x45] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 0xf;
  FUN_0054ea00(3,1);
  in_ECX[0x51] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x4e] = &PTR_FUN_00a6423c;
  local_4._0_1_ = 0x11;
  FUN_0054ea00(3,1);
  local_4 = CONCAT31(local_4._1_3_,0x12);
  FUN_0054ea00(3,1);
  in_ECX[3] = 0;
  in_ECX[0x5c] = DAT_00b3f9a8;
  in_ECX[0x5d] = DAT_00b3f9ac;
  uVar1 = DAT_00b3f9b0;
  in_ECX[0x77] = 0;
  in_ECX[0x71] = 0;
  in_ECX[0x5e] = uVar1;
  in_ECX[0x72] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d7) = 0;
  in_ECX[99] = 0;
  *(undefined1 *)(in_ECX + 0x75) = 0;
  in_ECX[100] = 0;
  *(undefined1 *)(in_ECX + 0x76) = 0;
  in_ECX[0x61] = 0;
  *(undefined1 *)((int)in_ECX + 0x1da) = 0;
  in_ECX[0x62] = 0;
  *(undefined1 *)((int)in_ECX + 0x1db) = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x70] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x65] = 0;
  in_ECX[0x67] = 0;
  *(undefined1 *)(in_ECX + 0x66) = 1;
  in_ECX[0x68] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d5) = 1;
  in_ECX[0x69] = 0;
  *(undefined1 *)((int)in_ECX + 0x1d9) = 0;
  in_ECX[0x6a] = 0;
  in_ECX[0x6b] = 0;
  in_ECX[0x6c] = 0;
  in_ECX[0x6d] = 0;
  in_ECX[0x6e] = 0;
  in_ECX[0x6f] = 0;
  in_ECX[0x5c] = DAT_00b3f9a8;
  in_ECX[0x5d] = DAT_00b3f9ac;
  in_ECX[0x5e] = DAT_00b3f9b0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054cdb0(byte param_1)

{
  FUN_0054bce0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0054cdd0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *in_ECX;
  char *pcVar6;
  int *unaff_FS_OFFSET;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_148;
  int *local_144;
  int *local_140;
  float local_128;
  undefined4 local_124;
  float local_120;
  float local_11c;
  int local_118;
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb90b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_148;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffea8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0054ea00(0xffffffff,0);
  local_4 = 0;
  if (param_1 != (char *)0x0) {
    iVar4 = -(int)param_1;
    do {
      cVar1 = *param_1;
      param_1[(int)(local_114 + iVar4)] = cVar1;
      param_1 = param_1 + 1;
    } while (cVar1 != '\0');
    pcVar6 = local_114;
    while (local_114[0] == ' ') {
      pcVar6 = pcVar6 + 1;
      local_114[0] = *pcVar6;
    }
    pcVar3 = _strchr(pcVar6,0x20);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      iVar4 = __stricmp(pcVar6,"Clear");
      if (iVar4 == 0) {
        pcVar6 = pcVar3 + 1;
        cVar1 = pcVar3[1];
        while (cVar1 == ' ') {
          pcVar6 = pcVar6 + 1;
          cVar1 = *pcVar6;
        }
        pcVar3 = _strchr(pcVar6,0x20);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
          local_124 = FUN_0054f440(pcVar6);
          pcVar3 = pcVar3 + 1;
          cVar1 = *pcVar3;
          while (cVar1 == ' ') {
            pcVar3 = pcVar3 + 1;
            cVar1 = *pcVar3;
          }
          pcVar6 = _strchr(pcVar3,0x20);
          if (pcVar6 == (char *)0x0) {
            local_148 = 0.5;
          }
          else {
            dVar7 = _atof(pcVar3);
            local_148 = (float)dVar7;
            if (local_148 < 0.0) {
              local_148 = 0.0;
            }
          }
          switch(local_124) {
          case 0:
            iVar4 = *in_ECX;
            uVar11 = 0;
            uVar10 = 1;
            uVar9 = 0;
            uVar8 = 0;
            break;
          case 1:
            iVar4 = *in_ECX;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 1;
            break;
          case 2:
            iVar4 = *in_ECX;
            uVar11 = 0;
            uVar10 = 0;
            uVar9 = 1;
            uVar8 = 0;
            break;
          case 3:
            iVar4 = *in_ECX;
            uVar11 = 1;
            uVar10 = 0;
            uVar9 = 0;
            uVar8 = 0;
            break;
          default:
            goto switchD_0054cf2a_default;
          }
          (**(code **)(iVar4 + 0x80))(local_148,uVar8,uVar9,uVar10,uVar11);
        }
      }
      else {
        local_118 = FUN_0054f490(pcVar6,&local_124);
        if (-1 < local_118) {
          switch(local_124) {
          case 0:
            local_144 = in_ECX + 0x37;
            local_140 = in_ECX + 0x3b;
            uVar8 = 0x10;
            break;
          case 1:
            local_144 = in_ECX + 9;
            local_140 = in_ECX + 0xd;
            uVar8 = 0xd;
            break;
          case 2:
            local_144 = in_ECX + 0x20;
            local_140 = in_ECX + 0x24;
            uVar8 = 0x11;
            break;
          case 3:
            local_144 = in_ECX + 0x4e;
            local_140 = in_ECX + 0x52;
            uVar8 = 1;
            break;
          default:
            goto switchD_0054cf2a_default;
          }
          if ((local_144 != (int *)0x0) && (local_140 != (int *)0x0)) {
            pcVar6 = pcVar3 + 1;
            cVar1 = pcVar3[1];
            while (cVar1 == ' ') {
              pcVar6 = pcVar6 + 1;
              cVar1 = *pcVar6;
            }
            pcVar3 = _strchr(pcVar6,0x20);
            if (pcVar3 != (char *)0x0) {
              *pcVar3 = '\0';
              dVar7 = _atof(pcVar6);
              local_128 = (float)dVar7;
              if (0.0 <= local_128) {
                if (1.0 < local_128) {
                  local_128 = 1.0;
                }
                pcVar6 = pcVar3 + 1;
                cVar1 = pcVar3[1];
                while (cVar1 == ' ') {
                  pcVar6 = pcVar6 + 1;
                  cVar1 = *pcVar6;
                }
                pcVar3 = _strchr(pcVar6,0x20);
                if (pcVar3 != (char *)0x0) {
                  *pcVar3 = '\0';
                  dVar7 = _atof(pcVar6);
                  local_11c = (float)dVar7;
                  if (0.0 <= local_11c) {
                    pcVar6 = _strchr(pcVar3 + 1,0x20);
                    if (pcVar6 != (char *)0x0) {
                      *pcVar6 = '\0';
                      dVar7 = _atof(pcVar3 + 1);
                      local_148 = (float)dVar7;
                      if (0.0 <= local_148) {
                        pcVar6 = pcVar6 + 1;
                        cVar1 = *pcVar6;
                        while (cVar1 == ' ') {
                          pcVar6 = pcVar6 + 1;
                          cVar1 = *pcVar6;
                        }
                        pcVar3 = _strchr(pcVar6,0x20);
                        if (pcVar3 != (char *)0x0) {
                          *pcVar3 = '\0';
                        }
                        dVar7 = _atof(pcVar6);
                        local_120 = (float)dVar7;
                        if (0.0 <= local_120) {
                          puVar5 = (undefined4 *)FUN_00401f00(0x10);
                          if (puVar5 == (undefined4 *)0x0) {
                            puVar5 = (undefined4 *)0x0;
                          }
                          else {
                            puVar5[3] = 0;
                            puVar5[1] = 0;
                            puVar5[2] = 0;
                            *puVar5 = &PTR_FUN_00a6423c;
                          }
                          FUN_0054e560(local_124);
                          FUN_0054e860(uVar8,0);
                          FUN_0054e580(local_11c);
                          iVar4 = local_118;
                          FUN_0054a3e0(local_118,local_128);
                          FUN_0054f350(puVar5);
                          FUN_0054e860(uVar8,0);
                          FUN_0054e580(local_148);
                          FUN_0054a3e0(iVar4,local_128);
                          FUN_0054f350(puVar5);
                          if (0.0 < local_120) {
                            FUN_0054e860(uVar8,0);
                            FUN_0054e580(local_120);
                            FUN_0054a3e0(iVar4,0);
                            FUN_0054f350(puVar5);
                          }
                          FUN_0054c9c0(local_140,puVar5,local_144);
                          iVar4 = puVar5[1];
                          while (iVar4 != 0) {
                            if (*(undefined4 **)(iVar4 + 8) != (undefined4 *)0x0) {
                              (**(code **)**(undefined4 **)(iVar4 + 8))(1);
                            }
                            FUN_0054a3b0();
                            iVar4 = puVar5[1];
                          }
                          (**(code **)*puVar5)(1);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
switchD_0054cf2a_default:
  local_4 = 0xffffffff;
  FUN_0054eba0(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0054d2c0(void)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int in_ECX;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bb9a3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(0x1e0,uVar3);
  local_4 = 0;
  if (iVar4 == 0) {
    local_14 = 0;
  }
  else {
    local_14 = FaceGen_Struct1E0_ctor();
  }
  local_4 = 0xffffffff;
  FUN_0054e8e0(in_ECX + 0x10);
  FUN_0054e8e0(in_ECX + 0x34);
  FUN_0054e8e0(in_ECX + 0x48);
  FUN_0054e8e0(in_ECX + 0x6c);
  FUN_0054e8e0(in_ECX + 0x90);
  FUN_0054e8e0(in_ECX + 0xa4);
  FUN_0054e8e0(in_ECX + 200);
  FUN_0054e8e0(in_ECX + 0xec);
  FUN_0054e8e0(in_ECX + 0x100);
  FUN_0054e8e0(in_ECX + 0x124);
  FUN_0054e8e0(in_ECX + 0x148);
  FUN_0054e8e0(in_ECX + 0x15c);
  *(undefined4 *)(local_14 + 0x170) = *(undefined4 *)(in_ECX + 0x170);
  *(undefined4 *)(local_14 + 0x174) = *(undefined4 *)(in_ECX + 0x174);
  *(undefined4 *)(local_14 + 0x178) = *(undefined4 *)(in_ECX + 0x178);
  *(undefined1 *)(local_14 + 0x1d7) = *(undefined1 *)(in_ECX + 0x1d7);
  *(undefined1 *)(local_14 + 0x1d4) = *(undefined1 *)(in_ECX + 0x1d4);
  *(undefined1 *)(local_14 + 0x1d8) = *(undefined1 *)(in_ECX + 0x1d8);
  if (*(int *)(in_ECX + 0xc) == 0) {
    *(undefined4 *)(local_14 + 0xc) = 0;
  }
  else {
    iVar4 = FUN_00401f00(0x14);
    local_4 = 1;
    if (iVar4 == 0) {
      local_4 = 0xffffffff;
      *(undefined4 *)(local_14 + 0xc) = 0;
    }
    else {
      uVar5 = FUN_0054eaa0(*(undefined4 *)(in_ECX + 0xc));
      local_4 = 0xffffffff;
      *(undefined4 *)(local_14 + 0xc) = uVar5;
    }
  }
  piVar7 = *(int **)(in_ECX + 0x28);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 2;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0x24) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0x2c);
      if (*(undefined4 **)(local_14 + 0x2c) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0x28) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0x2c) = puVar6;
      }
      *(int *)(local_14 + 0x30) = *(int *)(local_14 + 0x30) + 1;
      *(undefined4 **)(local_14 + 0x2c) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0x60);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 3;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0x5c) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 100);
      if (*(undefined4 **)(local_14 + 100) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0x60) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 100) = puVar6;
      }
      *(int *)(local_14 + 0x68) = *(int *)(local_14 + 0x68) + 1;
      *(undefined4 **)(local_14 + 100) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0x84);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 4;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0x80) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0x88);
      if (*(undefined4 **)(local_14 + 0x88) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0x84) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0x88) = puVar6;
      }
      *(int *)(local_14 + 0x8c) = *(int *)(local_14 + 0x8c) + 1;
      *(undefined4 **)(local_14 + 0x88) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0xbc);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 5;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0xb8) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0xc0);
      if (*(undefined4 **)(local_14 + 0xc0) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0xbc) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0xc0) = puVar6;
      }
      *(int *)(local_14 + 0xc4) = *(int *)(local_14 + 0xc4) + 1;
      *(undefined4 **)(local_14 + 0xc0) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0xe0);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 6;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0xdc) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0xe4);
      if (*(undefined4 **)(local_14 + 0xe4) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0xe0) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0xe4) = puVar6;
      }
      *(int *)(local_14 + 0xe8) = *(int *)(local_14 + 0xe8) + 1;
      *(undefined4 **)(local_14 + 0xe4) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0x118);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 7;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0x114) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0x11c);
      if (*(undefined4 **)(local_14 + 0x11c) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0x118) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0x11c) = puVar6;
      }
      *(int *)(local_14 + 0x120) = *(int *)(local_14 + 0x120) + 1;
      *(undefined4 **)(local_14 + 0x11c) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  piVar7 = *(int **)(in_ECX + 0x13c);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar7[2];
      cVar2 = (**(code **)(*piVar1 + 0x40))();
      uVar3 = -(uint)(cVar2 != '\0') & (uint)piVar1;
      if (uVar3 == 0) {
        uVar5 = 0;
      }
      else {
        iVar4 = FUN_00401f00(0x14);
        local_4 = 8;
        if (iVar4 == 0) {
          local_4 = 0xffffffff;
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_0054eaa0(uVar3);
          local_4 = 0xffffffff;
        }
      }
      puVar6 = (undefined4 *)(**(code **)(*(int *)(local_14 + 0x138) + 4))();
      puVar6[2] = uVar5;
      *puVar6 = 0;
      puVar6[1] = *(undefined4 *)(local_14 + 0x140);
      if (*(undefined4 **)(local_14 + 0x140) == (undefined4 *)0x0) {
        *(undefined4 **)(local_14 + 0x13c) = puVar6;
      }
      else {
        **(undefined4 **)(local_14 + 0x140) = puVar6;
      }
      *(int *)(local_14 + 0x144) = *(int *)(local_14 + 0x144) + 1;
      *(undefined4 **)(local_14 + 0x140) = puVar6;
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)0x0);
  }
  *unaff_FS_OFFSET = local_c;
  return local_14;
}



void FUN_0054d910(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_3 = param_3 + 4;
  }
  return;
}



int FUN_0054d950(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar2 = param_3 - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      *(undefined4 *)(iVar2 + 4 + (int)param_1) = param_1[1];
      *(undefined4 *)(iVar2 + 8 + (int)param_1) = param_1[2];
      *(undefined4 *)(iVar2 + 0xc + (int)param_1) = param_1[3];
      param_1 = param_1 + 4;
    } while (param_1 != param_2);
  }
  return (iVar1 >> 4) * 0x10 + param_3;
}



void FUN_0054d9a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 4) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
    param_1[3] = param_3[3];
  }
  return;
}



void FUN_0054d9d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
      param_1[3] = param_3[3];
    }
    param_1 = param_1 + 4;
  }
  return;
}



int * FUN_0054da10(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 4);
  uVar1 = *(uint *)(in_ECX + 8);
  *param_1 = 0;
  if (uVar1 < uVar2) {
    FUN_00984d5e();
  }
  *param_1 = in_ECX;
  param_1[1] = uVar2;
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0054da40(float param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  LONG LVar6;
  int iVar7;
  int in_ECX;
  float *pfVar8;
  undefined1 *puVar9;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar10;
  undefined1 auStack_af4 [80];
  float local_aa4;
  int local_aa0;
  undefined4 *local_a9c;
  undefined4 *local_a98;
  int local_a94;
  int *local_a90;
  int local_a8c;
  undefined1 local_a88 [2436];
  uint local_104;
  int local_8c;
  undefined1 *puStack_88;
  uint local_84;
  
  local_84 = 0xffffffff;
  puStack_88 = &LAB_009bb9e4;
  local_8c = *unaff_FS_OFFSET;
  local_104 = DAT_00b30aac ^ (uint)auStack_af4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffff500;
  *unaff_FS_OFFSET = (int)&local_8c;
  local_a90 = (int *)(in_ECX + 8);
  local_a8c = param_4;
  iVar7 = *local_a90;
  if (iVar7 == 0) {
    if ((((*(int *)(in_ECX + 0x10) == 0) ||
         (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4 == 0)) ||
        (*(int *)(in_ECX + 0x1c) == 0)) || ((*(int *)(in_ECX + 0x20) == 0 || (param_2 <= param_1))))
    {
      iVar7 = *local_a90;
    }
    else {
      FUN_0071f860(uVar2);
      local_a98 = (undefined4 *)0x0;
      local_84._0_1_ = 1;
      local_84._1_3_ = 0;
      piVar3 = (int *)FUN_0054da10(local_a88);
      iVar7 = *piVar3;
      pfVar8 = (float *)piVar3[1];
      local_a94 = *(int *)(in_ECX + 0x20) * *(int *)(in_ECX + 0x1c);
      local_aa0 = FUN_00401f00(0x70);
      local_84._0_1_ = 2;
      if (local_aa0 == 0) {
        local_a9c = (undefined4 *)0x0;
      }
      else {
        local_a9c = (undefined4 *)
                    FUN_0070e560(*(undefined4 *)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20),
                                 &DAT_00b25e00,1,1);
      }
      puVar9 = (undefined1 *)(*(int *)local_a9c[0x17] + local_a9c[0x14]);
      local_84 = CONCAT31(local_84._1_3_,1);
      if (local_a94 != 0) {
        do {
          if (iVar7 == 0) {
            FUN_00984d5e();
          }
          if (*(float **)(iVar7 + 8) <= pfVar8) {
            FUN_00984d5e();
          }
          fVar1 = *pfVar8;
          local_aa4 = param_1;
          if ((param_1 < fVar1 != (param_1 == fVar1)) && (local_aa4 = param_2, fVar1 <= param_2)) {
            local_aa4 = fVar1;
          }
          fVar10 = (float10)FUN_00404f70(local_aa4);
          local_aa4 = (float)CONCAT22(local_aa4._2_2_,in_FPUControlWord);
          local_aa0 = (int)ROUND((float10)param_3 * (fVar10 - (float10)param_1));
          *puVar9 = (undefined1)local_aa0;
          if (*(float **)(iVar7 + 8) <= pfVar8) {
            FUN_00984d5e();
          }
          fVar1 = pfVar8[1];
          local_aa4 = param_1;
          if ((param_1 <= fVar1) && (local_aa4 = fVar1, param_2 < fVar1)) {
            local_aa4 = param_2;
          }
          fVar10 = (float10)FUN_00404f70(local_aa4);
          local_aa4 = (float)CONCAT22(local_aa4._2_2_,in_FPUControlWord);
          local_aa0 = (int)ROUND((float10)param_3 * (fVar10 - (float10)param_1));
          puVar9[1] = (undefined1)local_aa0;
          if (*(float **)(iVar7 + 8) <= pfVar8) {
            FUN_00984d5e();
          }
          fVar1 = pfVar8[2];
          local_aa4 = param_1;
          if ((param_1 <= fVar1) && (local_aa4 = fVar1, param_2 < fVar1)) {
            local_aa4 = param_2;
          }
          fVar10 = (float10)FUN_00404f70(local_aa4);
          local_aa4 = (float)CONCAT22(local_aa4._2_2_,in_FPUControlWord);
          local_aa0 = (int)ROUND((float10)param_3 * (fVar10 - (float10)param_1));
          puVar9[2] = (undefined1)local_aa0;
          if (*(float **)(iVar7 + 8) <= pfVar8) {
            FUN_00984d5e();
          }
          fVar1 = pfVar8[3];
          local_aa4 = param_1;
          if ((param_1 <= fVar1) && (local_aa4 = fVar1, param_2 < fVar1)) {
            local_aa4 = param_2;
          }
          fVar10 = (float10)FUN_00404f70(local_aa4);
          local_aa4 = (float)CONCAT22(local_aa4._2_2_,in_FPUControlWord);
          local_aa0 = (int)ROUND((fVar10 - (float10)param_1) * (float10)param_3);
          puVar9[3] = (undefined1)local_aa0;
          if (*(float **)(iVar7 + 8) <= pfVar8) {
            FUN_00984d5e();
          }
          pfVar8 = pfVar8 + 4;
          local_a94 = local_a94 + -1;
          puVar9 = puVar9 + 4;
        } while (local_a94 != 0);
        local_a94 = 0;
      }
      if (DAT_00b11f8c == '\0') {
        puVar4 = local_a9c;
        if (DAT_00b05244 != '\0') {
          FUN_0047f590(local_a9c);
          puVar4 = local_a9c;
        }
      }
      else {
        puVar4 = (undefined4 *)FUN_0071b8d0(local_a9c,0);
        (**(code **)*local_a9c)(1);
        if (DAT_00b05244 != '\0') {
          FUN_0047f590(puVar4);
        }
      }
      uVar5 = FUN_00701fc0(puVar4,&DAT_00b256d0);
      FUN_0075fa90(uVar5);
      piVar3 = local_a90;
      puVar4 = local_a98;
      if (*(int *)(local_a8c + 4) == 1) {
        FUN_0055e2a0(&local_a98);
      }
      else {
        uVar5 = FUN_00480000(local_a98,local_a8c);
        FUN_0075fa90(uVar5);
        piVar3 = local_a90;
      }
      if (*piVar3 == 0) {
        FUN_0055e2a0(&local_a98);
      }
      local_84 = local_84 & 0xffffff00;
      if ((puVar4 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar4 + 1), LVar6 == 0)) {
        (**(code **)*puVar4)(1);
      }
      local_84 = 0xffffffff;
      FUN_0071f730();
      iVar7 = *piVar3;
    }
  }
  *unaff_FS_OFFSET = local_8c;
  return iVar7;
}



void FUN_0054deb0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bba3e;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64488;
  uVar1 = in_ECX[5];
  local_4 = 2;
  if (uVar1 < (uint)in_ECX[4]) {
    FUN_00984d5e(uVar4);
  }
  uVar2 = in_ECX[4];
  if ((uint)in_ECX[5] < uVar2) {
    FUN_00984d5e(uVar4);
  }
  FUN_006f14d0(local_14,in_ECX + 3,uVar2,in_ECX + 3,uVar1);
  puVar3 = (undefined4 *)in_ECX[2];
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    in_ECX[2] = 0;
  }
  if (in_ECX[4] != 0) {
    FUN_00401f20(in_ECX[4]);
  }
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  puVar3 = (undefined4 *)in_ECX[2];
  local_4 = local_4 & 0xffffff00;
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054dfb0(byte param_1)

{
  FUN_0054deb0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0054dfd0(undefined4 param_1,int param_2,uint param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  int extraout_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  uint uStack_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined1 *local_14;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009bba60;
  local_10 = *unaff_FS_OFFSET;
  uStack_38 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  *unaff_FS_OFFSET = (int)&local_10;
  local_28 = *param_4;
  local_24 = param_4[1];
  local_20 = param_4[2];
  iVar3 = *(int *)(in_ECX + 4);
  local_1c = param_4[3];
  if (iVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)(in_ECX + 0xc) - iVar3 >> 4;
  }
  if (param_3 != 0) {
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
    }
    puVar1 = &uStack_38;
    if (-iVar6 - 1U < param_3) {
      uVar2 = FUN_00790b90();
      iVar3 = extraout_ECX;
      puVar1 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar1;
    if (iVar3 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
    }
    if (uVar2 < iVar6 + param_3) {
      if (-(uVar2 >> 1) - 1 < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(in_ECX + 8) - iVar3 >> 4;
      }
      if (uVar2 < iVar6 + param_3) {
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(in_ECX + 8) - iVar3 >> 4;
        }
        uVar2 = iVar3 + param_3;
      }
      iVar6 = FUN_00401f00(uVar2 * 0x10);
      local_8 = 0;
      local_18 = iVar6;
      uVar4 = FUN_0054d910(*(undefined4 *)(in_ECX + 4),param_2,iVar6);
      uVar4 = FUN_006f13c0(uVar4,param_3,&local_28);
      FUN_0054d910(param_2,*(undefined4 *)(in_ECX + 8),uVar4);
      iVar3 = *(int *)(in_ECX + 4);
      if (iVar3 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - iVar3 >> 4;
      }
      if (iVar3 != 0) {
        FUN_00401f20(iVar3);
      }
      *(uint *)(in_ECX + 0xc) = uVar2 * 0x10 + iVar6;
      *(uint *)(in_ECX + 8) = (param_3 + iVar5) * 0x10 + iVar6;
      *(int *)(in_ECX + 4) = iVar6;
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar3 = *(int *)(in_ECX + 8);
    if ((uint)(iVar3 - param_2 >> 4) < param_3) {
      FUN_006f15d0(param_2,iVar3,param_3 * 0x10 + param_2);
      local_8 = 2;
      FUN_006f13c0(*(int *)(in_ECX + 8),param_3 - (*(int *)(in_ECX + 8) - param_2 >> 4),&local_28);
      *(int *)(in_ECX + 8) = *(int *)(in_ECX + 8) + param_3 * 0x10;
      FUN_0054d9a0(param_2,*(int *)(in_ECX + 8) + param_3 * -0x10,&local_28);
      *unaff_FS_OFFSET = local_10;
      return;
    }
    iVar6 = iVar3 + param_3 * -0x10;
    uVar4 = FUN_006f15d0(iVar6,iVar3,iVar3);
    *(undefined4 *)(in_ECX + 8) = uVar4;
    FUN_006f1440(param_2,iVar6,iVar3);
    FUN_0054d9a0(param_2,param_3 * 0x10 + param_2,&local_28);
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_0054e230(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = param_2[1];
  local_10 = *param_2;
  uVar1 = *(uint *)(in_ECX + 8);
  local_8 = param_2[2];
  local_4 = param_2[3];
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_006f14d0(local_18,in_ECX,uVar2,in_ECX,uVar1);
  uVar1 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar1) {
    FUN_00984d5e();
  }
  FUN_0054dfd0(in_ECX,uVar1,param_1,&local_10);
  return;
}



void FUN_0054e2b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bba9e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a64488;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 2;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[2] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if ((int *)in_ECX[2] == (int *)0x0) {
    in_ECX[8] = 0;
    in_ECX[7] = 0;
  }
  else {
    uVar4 = (**(code **)(*(int *)in_ECX[2] + 0x4c))();
    in_ECX[7] = uVar4;
    uVar4 = (**(code **)(*(int *)in_ECX[2] + 0x50))();
    in_ECX[8] = uVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0054e390(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  int in_ECX;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbac8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(int *)(in_ECX + 0x10) == 0) ||
      (*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4 == 0)) && (*(int *)(in_ECX + 8) != 0))
  {
    puVar5 = (undefined4 *)FUN_00480000(*(int *)(in_ECX + 8),&DAT_00b25e00,uVar4);
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
    local_4 = 0;
    if (puVar5 != (undefined4 *)0x0) {
      iVar8 = puVar5[0xf];
      local_10 = 0;
      iVar2 = **(int **)(iVar8 + 0x5c);
      local_14 = 0;
      local_18 = 0;
      iVar3 = *(int *)(iVar8 + 0x50);
      local_1c = 0;
      uVar4 = **(int **)(iVar8 + 0x54) * **(int **)(iVar8 + 0x58);
      FUN_0054e230(uVar4,&local_1c);
      uVar9 = 0;
      if (uVar4 != 0) {
        iVar8 = 0;
        pbVar7 = (byte *)(iVar2 + iVar3 + 2);
        do {
          if ((*(int *)(in_ECX + 0x10) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4) <= uVar9)) {
            FUN_00984d5e();
          }
          *(float *)(*(int *)(in_ECX + 0x10) + iVar8) = (float)pbVar7[-2];
          if ((*(int *)(in_ECX + 0x10) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4) <= uVar9)) {
            FUN_00984d5e();
          }
          *(float *)(*(int *)(in_ECX + 0x10) + 4 + iVar8) = (float)pbVar7[-1];
          if ((*(int *)(in_ECX + 0x10) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4) <= uVar9)) {
            FUN_00984d5e();
          }
          *(float *)(*(int *)(in_ECX + 0x10) + 8 + iVar8) = (float)*pbVar7;
          if ((*(int *)(in_ECX + 0x10) == 0) ||
             ((uint)(*(int *)(in_ECX + 0x14) - *(int *)(in_ECX + 0x10) >> 4) <= uVar9)) {
            FUN_00984d5e();
          }
          pbVar1 = pbVar7 + 1;
          uVar9 = uVar9 + 1;
          pbVar7 = pbVar7 + 4;
          iVar8 = iVar8 + 0x10;
          *(float *)(*(int *)(in_ECX + 0x10) + -4 + iVar8) = (float)*pbVar1;
        } while (uVar9 < uVar4);
      }
      local_4 = 0xffffffff;
      LVar6 = InterlockedDecrement(puVar5 + 1);
      if (LVar6 == 0) {
        (**(code **)*puVar5)(1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0xc;
}



undefined4 FUN_0054e560(int param_1)

{
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 4)) {
    *(int *)(in_ECX + 4) = param_1;
    return 1;
  }
  return 0;
}



short FUN_0054e580(float param_1)

{
  float fVar1;
  byte bVar2;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 8);
  bVar2 = fVar1 < param_1 | (byte)((ushort)((ushort)(NAN(fVar1) || NAN(param_1)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar1 == param_1) << 0xe) >> 8);
  if (fVar1 != param_1) {
    *(float *)(in_ECX + 8) = param_1;
    return CONCAT11(bVar2,1);
  }
  return (ushort)bVar2 << 8;
}



bool FUN_0054e5b0(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  bool bVar5;
  uint uVar6;
  float10 fVar7;
  undefined4 unaff_retaddr;
  
  fVar7 = (float10)(**(code **)(*in_ECX + 0xc))();
  bVar5 = (float10)0 != fVar7;
  (**(code **)(*in_ECX + 0x10))((float)(float10)0);
  uVar6 = 0;
  iVar2 = (**(code **)(*in_ECX + 0x50))();
  if (iVar2 != 0) {
    do {
      cVar1 = (**(code **)(*in_ECX + 0x54))(uVar6);
      if (cVar1 != '\0') {
        bVar5 = true;
        break;
      }
      uVar6 = uVar6 + 1;
      uVar3 = (**(code **)(*in_ECX + 0x50))();
    } while (uVar6 < uVar3);
  }
  iVar2 = *in_ECX;
  uVar4 = (**(code **)(iVar2 + 0x50))(unaff_retaddr);
  (**(code **)(iVar2 + 0x58))(uVar4);
  return bVar5;
}



undefined4 FUN_0054e6c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint uVar5;
  float10 fVar6;
  undefined4 uStack_14;
  
  if ((param_1 != (int *)0x0) && (cVar1 = (**(code **)(*param_1 + 0x40))(), cVar1 != '\0')) {
    iVar2 = (**(code **)(*param_1 + 4))();
    iVar3 = (**(code **)(*in_ECX + 4))();
    if (iVar2 == iVar3) {
      iVar2 = (**(code **)(*param_1 + 0x50))();
      iVar3 = (**(code **)(*in_ECX + 0x50))();
      if (iVar2 == iVar3) {
        uVar5 = 0;
        iVar2 = (**(code **)(*in_ECX + 0x50))();
        if (iVar2 != 0) {
          do {
            fVar6 = (float10)(**(code **)(*param_1 + 0x48))(uVar5);
            uStack_14 = SUB84((double)fVar6,0);
            fVar6 = (float10)(**(code **)(*in_ECX + 0x48))(uVar5);
            if (fVar6 != (float10)(double)CONCAT44(uStack_14,unaff_EBX)) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            uVar4 = (**(code **)(*in_ECX + 0x50))();
          } while (uVar5 < uVar4);
        }
        return 0;
      }
    }
  }
  return 1;
}



undefined4 FUN_0054e7c0(void)

{
  char cVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (in_ECX[4] != 0) {
    do {
      cVar1 = (**(code **)(*in_ECX + 0x54))(uVar2);
      if ((cVar1 != '\0') && (0.0 < *(float *)(in_ECX[3] + uVar2 * 4))) {
        return 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)in_ECX[4]);
  }
  return 1;
}



void FUN_0054e860(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 != *(uint *)(in_ECX + 0x10)) {
    if (*(int *)(in_ECX + 0xc) != 0) {
      FUN_00401f20(*(int *)(in_ECX + 0xc));
      *(undefined4 *)(in_ECX + 0xc) = 0;
    }
    *(uint *)(in_ECX + 0x10) = param_1;
    if (param_1 != 0) {
      uVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
      *(undefined4 *)(in_ECX + 0xc) = uVar1;
      FUN_0054f630(uVar1,*(undefined4 *)(in_ECX + 0x10),param_2);
    }
  }
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_0054f630(*(undefined4 *)(in_ECX + 0xc),*(int *)(in_ECX + 0x10),param_2);
  }
  return;
}



void FUN_0054e8e0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  uint uVar4;
  float10 fVar5;
  
  iVar1 = (**(code **)(*param_1 + 4))();
  iVar2 = (**(code **)(*in_ECX + 4))();
  if (iVar2 == iVar1) {
    iVar1 = *in_ECX;
    fVar5 = (float10)(**(code **)(*param_1 + 0xc))();
    (**(code **)(iVar1 + 0x10))((float)fVar5);
    iVar1 = *in_ECX;
    uVar3 = (**(code **)(*param_1 + 0x50))(1);
    (**(code **)(iVar1 + 0x58))(uVar3);
    uVar4 = 0;
    if (in_ECX[4] != 0) {
      do {
        iVar1 = *in_ECX;
        fVar5 = (float10)(**(code **)(*param_1 + 0x48))(uVar4);
        (**(code **)(iVar1 + 0x4c))(uVar4,(float)fVar5);
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)in_ECX[4]);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0054e980(void)

{
  if (0.0 < _DAT_00b39ab8) {
    return (float10)_DAT_00b39ab8;
  }
  return (float10)0.0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0054e9b0(void)

{
  if (0.0 < _DAT_00b39ac0) {
    return (float10)_DAT_00b39ac0;
  }
  return (float10)0.0;
}



void FUN_0054ea00(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbb28;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0;
  in_ECX[1] = param_1;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a644fc;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  FUN_0054e860(param_2,1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054eaa0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined4 uVar6;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbb58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0xffffffff;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a644fc;
  uVar4 = 0;
  local_4 = 0;
  iVar2 = (**(code **)(*param_1 + 4))(uVar1);
  if (iVar2 != in_ECX[1]) {
    in_ECX[1] = iVar2;
  }
  fVar5 = (float10)(**(code **)(*param_1 + 0xc))();
  if ((float)in_ECX[2] != (float)fVar5) {
    in_ECX[2] = (float)fVar5;
  }
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  uVar6 = 1;
  uVar3 = (**(code **)(*param_1 + 0x50))(1);
  FUN_0054e860(uVar3,uVar6);
  if (in_ECX[4] != 0) {
    do {
      fVar5 = (float10)(**(code **)(*param_1 + 0x48))(uVar4);
      if ((uVar4 < (uint)in_ECX[4]) && ((float)fVar5 != *(float *)(in_ECX[3] + uVar4 * 4))) {
        *(float *)(in_ECX[3] + uVar4 * 4) = (float)fVar5;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[4]);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054eba0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbb28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a644fc;
  local_4 = 0;
  if (in_ECX[4] != 0) {
    if (in_ECX[3] != 0) {
      FUN_00401f20(in_ECX[3],uVar1);
      in_ECX[3] = 0;
    }
    in_ECX[4] = 0;
  }
  if (in_ECX[4] != 0) {
    FUN_0054f630(in_ECX[3],in_ECX[4],1);
  }
  *in_ECX = &PTR_LAB_00a644ac;
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_0054ec30(int *param_1,float param_2,char param_3,char param_4)

{
  double dVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int *in_ECX;
  uint uVar7;
  float10 fVar8;
  undefined4 uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_1 == (int *)0x0) || (cVar2 = (**(code **)(*param_1 + 0x40))(), cVar2 == '\0')) {
    param_1 = (int *)0x0;
  }
  uStack_20 = (float)(uint)(uint3)uStack_20;
  if ((param_1 != (int *)0x0) && (param_1 != in_ECX)) {
    iVar4 = (**(code **)(*param_1 + 4))();
    iVar5 = (**(code **)(*in_ECX + 4))();
    if (iVar5 == iVar4) {
      iVar4 = (**(code **)(*param_1 + 0x50))();
      iVar5 = (**(code **)(*in_ECX + 0x50))();
      if (iVar5 == iVar4) {
        uVar7 = 0;
        if (in_ECX[4] == 0) {
          return 0;
        }
        do {
          if (param_3 == '\0') {
            fVar8 = (float10)(**(code **)(*param_1 + 0x48))(uVar7,0,0x3a83126f);
            cVar2 = FUN_0047df40((float)fVar8);
            if (cVar2 == '\0') goto LAB_0054ed1e;
          }
          else {
LAB_0054ed1e:
            fVar8 = (float10)(**(code **)(*param_1 + 0x48))(uVar7);
            if (fVar8 < (float10)0.0) {
LAB_0054ede5:
              if (param_4 == '\0') goto LAB_0054ee03;
              iVar4 = *in_ECX;
              fVar8 = (float10)3.4028235e+38;
LAB_0054edf3:
              pcVar6 = *(code **)(iVar4 + 0x4c);
            }
            else {
              fVar8 = (float10)(**(code **)(*param_1 + 0x48))(uVar7);
              if ((float10)1 < fVar8) goto LAB_0054ede5;
              if ((((float10)param_2 < (float10)1) &&
                  (fVar8 = (float10)(**(code **)(*in_ECX + 0x48))(uVar7), (float10)0.0 <= fVar8)) &&
                 (fVar8 = (float10)(**(code **)(*in_ECX + 0x48))(uVar7),
                 fVar8 < (float10)1.0 != (fVar8 == (float10)1.0))) {
                iVar4 = *in_ECX;
                fVar8 = (float10)(**(code **)(iVar4 + 0x48))(uVar7);
                dVar1 = (double)(((float10)1 - (float10)uStack_20) * fVar8);
                fStack_1c = SUB84(dVar1,0);
                uStack_18 = (undefined4)((ulonglong)dVar1 >> 0x20);
                fVar8 = (float10)(**(code **)(*param_1 + 0x48))(uVar7);
                fVar8 = (float10)(float)(fVar8 * (float10)fStack_1c +
                                        (float10)(double)CONCAT44(uStack_14,uStack_18));
                goto LAB_0054edf3;
              }
              iVar4 = *in_ECX;
              fVar8 = (float10)(**(code **)(*param_1 + 0x48))(uVar7);
              pcVar6 = *(code **)(iVar4 + 0x4c);
            }
            bVar3 = (*pcVar6)(uVar7,(float)fVar8);
            uStack_20 = (float)CONCAT13(uStack_20._3_1_ | bVar3,(uint3)uStack_20);
          }
LAB_0054ee03:
          uVar7 = uVar7 + 1;
          if ((uint)in_ECX[4] <= uVar7) {
            return (uint)uStack_20 >> 0x18;
          }
        } while( true );
      }
    }
  }
  return 0;
}



uint FUN_0054ee30(int *param_1,int *param_2,float param_3)

{
  float fVar1;
  uint3 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *in_ECX;
  undefined4 *puVar10;
  undefined4 *unaff_EBX;
  int *piVar11;
  int *piVar12;
  uint *unaff_FS_OFFSET;
  float10 fVar13;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  uVar2 = (uint3)uStack_1c;
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009bbb96;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (uint)&local_c;
  if ((param_1 == (int *)0x0) ||
     (cVar3 = (**(code **)(*param_1 + 0x40))(uVar5), piVar12 = param_1, cVar3 == '\0')) {
    piVar12 = (int *)0x0;
  }
  if ((param_2 == (int *)0x0) ||
     (cVar3 = (**(code **)(*param_2 + 0x40))(), piVar11 = param_2, cVar3 == '\0')) {
    piVar11 = (int *)0x0;
  }
  param_2 = (int *)((uint)param_2 & 0xffffff00);
  uStack_1c = (uint)(uint3)uStack_1c;
  param_1 = (int *)((uint)param_1 & 0xffffff00);
  if (((piVar12 != (int *)0x0) && (piVar11 != (int *)0x0)) && (piVar12 != piVar11)) {
    iVar6 = (**(code **)(*piVar11 + 4))();
    iVar7 = (**(code **)(*piVar12 + 4))();
    if (iVar7 == iVar6) {
      if (piVar12 == in_ECX) {
        iVar6 = FUN_00401f00(0x14);
        puStack_4 = (undefined4 *)0x0;
        if (iVar6 == 0) {
          piVar12 = (int *)0x0;
          param_2 = (int *)0x1;
        }
        else {
          piVar12 = (int *)FUN_0054eaa0(in_ECX);
          param_2 = (int *)CONCAT31((int3)((uint)iVar6 >> 8),1);
        }
LAB_0054ef35:
        puStack_4 = (undefined4 *)0xffffffff;
      }
      else if (piVar11 == in_ECX) {
        iVar6 = FUN_00401f00(0x14);
        puStack_4 = (undefined4 *)0x1;
        if (iVar6 == 0) {
          piVar11 = (int *)0x0;
        }
        else {
          piVar11 = (int *)FUN_0054eaa0(in_ECX);
        }
        uStack_1c = CONCAT13(1,uVar2);
        goto LAB_0054ef35;
      }
      fVar1 = 0.0;
      if ((0.0 <= param_3) && (fVar1 = param_3, 1.0 < param_3)) {
        fVar1 = 1.0;
      }
      uVar5 = (**(code **)(*piVar11 + 0x50))();
      uVar8 = (**(code **)(*piVar12 + 0x50))();
      if (uVar8 < uVar5) {
        iVar6 = *piVar11;
      }
      else {
        iVar6 = *piVar12;
      }
      (**(code **)(iVar6 + 0x50))();
      iVar6 = *in_ECX;
      uVar9 = (**(code **)(*piVar12 + 4))();
      (**(code **)(iVar6 + 8))(uVar9);
      uVar5 = 0;
      if (in_ECX[4] != 0) {
        do {
          if ((fVar1 == 0.0) || (cVar3 = (**(code **)(*piVar11 + 0x54))(uVar5), cVar3 == '\0')) {
            cVar3 = (**(code **)(*piVar12 + 0x54))(uVar5);
            if (cVar3 != '\0') {
              param_1 = (int *)(*in_ECX + 0x4c);
              fVar13 = (float10)(**(code **)(*piVar12 + 0x48))(uVar5);
              puVar10 = puStack_4;
              goto LAB_0054f0a3;
            }
          }
          else if ((fVar1 == 1.0) || (cVar3 = (**(code **)(*piVar12 + 0x54))(uVar5), cVar3 == '\0'))
          {
            cVar3 = (**(code **)(*piVar11 + 0x54))(uVar5);
            if (cVar3 != '\0') {
              param_1 = (int *)(*in_ECX + 0x4c);
              fVar13 = (float10)(**(code **)(*piVar11 + 0x48))(uVar5);
              puVar10 = puStack_4;
              goto LAB_0054f0a3;
            }
          }
          else {
            cVar3 = (**(code **)(*piVar12 + 0x54))(uVar5);
            if ((cVar3 != '\0') && (cVar3 = (**(code **)(*piVar11 + 0x54))(uVar5), cVar3 != '\0')) {
              fVar13 = (float10)(**(code **)(*piVar12 + 0x48))(uVar5);
              uStack_18 = SUB84((double)(((float10)1 - (float10)(float)param_2) * fVar13),0);
              fVar13 = (float10)(**(code **)(*piVar11 + 0x48))(uVar5);
              puStack_4 = (undefined4 *)
                          (float)(fVar13 * (float10)(float)param_1 +
                                 (float10)(double)CONCAT44(uStack_18,uStack_1c));
              fVar13 = (float10)(float)puStack_4;
              puVar10 = unaff_EBX;
LAB_0054f0a3:
              uVar4 = (*(code *)*puVar10)(uVar5,(float)fVar13);
              param_1 = (int *)CONCAT31(param_1._1_3_,uVar4);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < (uint)in_ECX[4]);
      }
      if ((char)param_2 != '\0') {
        (**(code **)*piVar12)(1);
      }
      if (uStack_1c._3_1_ != '\0') {
        (**(code **)*piVar11)(1);
      }
      uVar5 = (uint)param_1 & 0xff;
      goto LAB_0054f0e8;
    }
  }
  uVar5 = 0;
LAB_0054f0e8:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



undefined4 FUN_0054f100(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_0054eaa0(in_ECX);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_0054f170(float param_1,int *param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int *in_ECX;
  int *unaff_EBX;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((param_2 == (int *)0x0) ||
     (cVar2 = (**(code **)(*param_2 + 0x40))(), piVar7 = param_2, cVar2 == '\0')) {
    piVar7 = (int *)0x0;
  }
  if ((0.0 < param_1) && (piVar7 != (int *)0x0)) {
    iVar3 = (**(code **)(*piVar7 + 4))();
    iVar4 = (**(code **)(*in_ECX + 4))();
    if (iVar3 == iVar4) {
      iVar3 = (**(code **)(*piVar7 + 0x50))();
      iVar4 = (**(code **)(*in_ECX + 0x50))();
      if ((iVar3 == iVar4) && (cVar2 = (**(code **)(*in_ECX + 0x2c))(piVar7), cVar2 != '\0')) {
        fVar9 = (float10)(**(code **)(*param_2 + 0x30))();
        fVar10 = (float10)FUN_0054e9b0();
        FUN_0054e980();
        uVar8 = 0;
        iVar3 = (**(code **)(*in_ECX + 0x50))();
        if (iVar3 != 0) {
          do {
            uStack_14 = SUB84((double)(fVar10 * (float10)(float)fVar9),0);
            cVar2 = (**(code **)(*in_ECX + 0x54))(uVar8);
            if (cVar2 != '\0') {
              fVar11 = (float10)(**(code **)(*piVar7 + 0x48))(uVar8);
              fStack_1c = SUB84((double)fVar11,0);
              local_18 = (undefined4)((ulonglong)(double)fVar11 >> 0x20);
              fVar11 = (float10)(**(code **)(*in_ECX + 0x48))(uVar8);
              fVar1 = (float)((float10)(double)CONCAT44(uStack_14,local_18) - fVar11);
              if (fStack_1c <= ABS(fVar1)) {
                if (0.0 <= fVar1) {
                  if (fVar1 <= 0.0) goto LAB_0054f300;
                  iVar3 = *in_ECX;
                  fVar11 = (float10)(**(code **)(iVar3 + 0x48))(uVar8);
                  fVar11 = fVar11 + (float10)(float)unaff_EBX;
                }
                else {
                  iVar3 = *in_ECX;
                  fVar11 = (float10)(**(code **)(iVar3 + 0x48))(uVar8);
                  fVar11 = fVar11 - (float10)(float)unaff_EBX;
                }
                fStack_1c = (float)fVar11;
                fVar11 = (float10)fStack_1c;
                pcVar5 = *(code **)(iVar3 + 0x4c);
              }
              else {
                iVar3 = *in_ECX;
                fVar11 = (float10)(**(code **)(*unaff_EBX + 0x48))(uVar8);
                pcVar5 = *(code **)(iVar3 + 0x4c);
              }
              (*pcVar5)(uVar8,(float)fVar11);
              piVar7 = unaff_EBX;
            }
LAB_0054f300:
            uVar8 = uVar8 + 1;
            uVar6 = (**(code **)(*in_ECX + 0x50))();
          } while (uVar8 < uVar6);
        }
        return 1;
      }
    }
  }
  return 0;
}



void FUN_0054f330(byte param_1)

{
  FUN_0054eba0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0054f350(int param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  float10 fVar6;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  iVar4 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (uint)&local_c;
  if (param_1 != 0) {
    fVar6 = (float10)(**(code **)(*in_ECX + 0xc))(uVar3);
    if ((float10)0.0 <= fVar6) {
      if (*(int *)(iVar4 + 0xc) == 0) {
LAB_0054f3dd:
        param_1 = FUN_00401f00(0x14);
        uStack_4 = 0;
        if (param_1 == 0) {
          param_1 = 0;
        }
        else {
          param_1 = FUN_0054eaa0(in_ECX);
        }
        uStack_4 = 0xffffffff;
        FUN_005b1e20(&param_1);
        *unaff_FS_OFFSET = local_c;
        return 1;
      }
      piVar1 = *(int **)(*(int *)(iVar4 + 8) + 8);
      if (piVar1 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar1 + 0x40))();
        if (cVar2 != '\0') {
          iVar4 = (**(code **)(*piVar1 + 4))();
          iVar5 = (**(code **)(*in_ECX + 4))();
          if (iVar4 == iVar5) goto LAB_0054f3dd;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int FUN_0054f440(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  iVar2 = 0;
  do {
    if ((&PTR_s_Phoneme_00b11fe0)[iVar2] != (char *)0x0) {
      iVar1 = __stricmp((&PTR_s_Phoneme_00b11fe0)[iVar2],param_1);
      if (iVar1 != 0) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return -1;
}



int FUN_0054f490(char *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_2 = 0xffffffff;
  if (param_1 == (char *)0x0) {
    return -1;
  }
  iVar2 = 0;
  do {
    if ((&PTR_s_Anger_00b11ff0)[iVar2] != (char *)0x0) {
      iVar1 = __stricmp((&PTR_s_Anger_00b11ff0)[iVar2],param_1);
      if (iVar1 == 0) {
        *param_2 = 1;
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xd);
  iVar2 = 0;
  do {
    if ((&PTR_s_BlinkLeft_00b12028)[iVar2] != (char *)0x0) {
      iVar1 = __stricmp((&PTR_s_BlinkLeft_00b12028)[iVar2],param_1);
      if (iVar1 == 0) {
        *param_2 = 2;
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x11);
  iVar2 = 0;
  do {
    if ((&PTR_DAT_00b12070)[iVar2] != (char *)0x0) {
      iVar1 = __stricmp((&PTR_DAT_00b12070)[iVar2],param_1);
      if (iVar1 == 0) {
        *param_2 = 0;
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  iVar2 = 0;
  do {
    if ((&PTR_s_VampireMorph_00b12024)[iVar2] != (char *)0x0) {
      iVar1 = __stricmp((&PTR_s_VampireMorph_00b12024)[iVar2],param_1);
      if (iVar1 == 0) {
        *param_2 = 3;
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 1);
  return -1;
}



undefined4 FUN_0054f590(undefined4 param_1)

{
  switch(param_1) {
  case 1:
  case 2:
    return 0;
  case 3:
    return 1;
  case 4:
    return 3;
  case 5:
    return 2;
  case 6:
    return 4;
  default:
    return 0xffffffff;
  }
}



void FUN_0054f5e0(float param_1,float param_2,float *param_3,float *param_4)

{
  param_2 = param_2 + param_1 * -1.0;
  if (0.0 <= param_2) {
    *param_3 = 0.0;
    *param_4 = param_2;
    return;
  }
  *param_3 = param_2 * -1.0;
  *param_4 = 0.0;
  return;
}



void FUN_0054f630(undefined4 *param_1,int param_2,char param_3)

{
  if ((param_1 != (undefined4 *)0x0) && (param_2 != 0)) {
    if (param_3 != '\0') {
      _memset(param_1,0,param_2 * 4);
      return;
    }
    if (param_2 != 0) {
      for (; param_2 != 0; param_2 = param_2 + -1) {
        *param_1 = 0x7f7fffff;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}



void FUN_0054f670(void *param_1,int param_2)

{
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    _memset(param_1,0,param_2 * 4);
  }
  return;
}



int FUN_0054f6a0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x34;
}



int FUN_0054f6c0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)((*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x34) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x34 + *(int *)(in_ECX + 4);
}



int FUN_0054f700(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 6;
}



int FUN_0054f720(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0x14;
}



void FUN_0054f740(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x34) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x34);
  return;
}



int FUN_0054f7a0(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2) <= param_1)) {
    FUN_00984d5e();
  }
  return *(int *)(in_ECX + 4) + param_1 * 4;
}



undefined4 FUN_0054f7d0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0054f7de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x24) + 0xc))();
    return uVar1;
  }
  return 0;
}



void FUN_0054f7f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a646f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0054f810(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a646f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054f840(void)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  FUN_007c2a40();
  _DAT_00b39c7c = _DAT_00b39c7c + -1;
  if (_DAT_00b39c7c == 0) {
    _DAT_00b39c78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0054f890(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d7778;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar8 = (undefined4 *)0x0;
  iVar7 = 0;
  local_14 = (undefined4 *)0x0;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  iVar1 = param_1;
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  uVar3 = 0;
  if (*(uint *)(in_ECX + 8) != 0) {
    piVar6 = *(int **)(in_ECX + 0xc);
    do {
      if (*piVar6 != 0) {
        local_10 = (*(int **)(in_ECX + 0xc))[uVar3];
        goto joined_r0x0054f90a;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 8));
  }
  local_10 = 0;
joined_r0x0054f90a:
  if (local_10 == 0) {
    _DAT_00b39c7c = _DAT_00b39c7c + -1;
    if (_DAT_00b39c7c == 0) {
      _DAT_00b39c78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    local_4 = 0xffffffff;
    if ((puVar8 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) {
      (**(code **)*puVar8)(1);
    }
    *unaff_FS_OFFSET = local_c;
    return iVar7;
  }
  FUN_007b2600(&local_10,&param_1,&local_14);
  puVar8 = local_14;
  if (iVar1 != 0) goto code_r0x0054f931;
  iVar4 = FUN_005564e0(uVar2);
  goto LAB_0054f94e;
code_r0x0054f931:
  if (iVar1 == 1) {
    iVar4 = FUN_00556650();
LAB_0054f94e:
    iVar7 = iVar7 + iVar4;
  }
  goto joined_r0x0054f90a;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054f9c0(void)

{
  char cVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbbc8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_4 = 0;
  cVar1 = FUN_00401030("BSFaceGenModelMap::UnloadAllEGMAndEGTData()");
  if (cVar1 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    _DAT_00b39c78 = GetCurrentThreadId();
    _DAT_00b39c7c = _DAT_00b39c7c + 1;
    uVar2 = 0;
    if (*(uint *)(in_ECX + 8) != 0) {
      piVar4 = *(int **)(in_ECX + 0xc);
      do {
        if (*piVar4 != 0) {
          local_14 = (*(int **)(in_ECX + 0xc))[uVar2];
          goto joined_r0x0054fa52;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 8));
    }
    local_14 = 0;
joined_r0x0054fa52:
    while (local_14 != 0) {
      FUN_007b2600(&local_14,local_10,&local_18);
      puVar5 = local_18;
      if ((local_18 != (undefined4 *)0x0) && (local_18[2] != 0)) {
        FUN_00559ba0();
        FUN_00559c40();
      }
    }
    _DAT_00b39c7c = _DAT_00b39c7c + -1;
    if (_DAT_00b39c7c == 0) {
      _DAT_00b39c78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    FUN_00401040();
    local_4 = 0xffffffff;
    if ((puVar5 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar5 + 1), LVar3 == 0)) {
      (**(code **)*puVar5)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054fb00(void)

{
  char cVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_18;
  int local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbbc8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)0x0;
  local_18 = (undefined4 *)0x0;
  local_4 = 0;
  cVar1 = FUN_00401030("BSFaceGenModelMap::UnloadAllEGMAndEGTData()");
  if (cVar1 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    _DAT_00b39c78 = GetCurrentThreadId();
    _DAT_00b39c7c = _DAT_00b39c7c + 1;
    uVar2 = 0;
    if (*(uint *)(in_ECX + 8) != 0) {
      piVar4 = *(int **)(in_ECX + 0xc);
      do {
        if (*piVar4 != 0) {
          local_14 = (*(int **)(in_ECX + 0xc))[uVar2];
          goto joined_r0x0054fb92;
        }
        uVar2 = uVar2 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 8));
    }
    local_14 = 0;
joined_r0x0054fb92:
    while (local_14 != 0) {
      FUN_007b2600(&local_14,local_10,&local_18);
      puVar5 = local_18;
      if ((local_18 != (undefined4 *)0x0) && (local_18[2] != 0)) {
        FUN_00559f10();
      }
    }
    _DAT_00b39c7c = _DAT_00b39c7c + -1;
    if (_DAT_00b39c7c == 0) {
      _DAT_00b39c78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    FUN_00401040();
    local_4 = 0xffffffff;
    if ((puVar5 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar5 + 1), LVar3 == 0)) {
      (**(code **)*puVar5)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054fc30(int param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *unaff_FS_OFFSET;
  undefined4 *local_20;
  undefined4 *local_1c;
  int local_18;
  DWORD local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009bbc00;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = (undefined4 *)0x0;
  puVar7 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  local_1c = (undefined4 *)0x0;
  local_4 = 1;
  local_14 = GetTickCount();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  uVar2 = 0;
  if (*(uint *)(in_ECX + 8) != 0) {
    piVar5 = *(int **)(in_ECX + 0xc);
    do {
      if (*piVar5 != 0) {
        local_18 = (*(int **)(in_ECX + 0xc))[uVar2];
        goto LAB_0054fcb7;
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 8));
  }
  local_18 = 0;
LAB_0054fcb7:
  if (local_18 != 0) {
    do {
      FUN_007b2600(&local_18,local_10,&local_20);
      puVar6 = local_20;
      if (local_20 != param_2) {
        if (param_1 == 0) {
          iVar3 = FUN_005564e0();
        }
        else {
          if (param_1 != 1) goto LAB_0054fd56;
          iVar3 = FUN_00556650();
        }
        if (iVar3 != 0) {
          if (puVar7 != (undefined4 *)0x0) {
            if ((local_14 - puVar6[3] <= local_14 - puVar7[3]) || (puVar7 == puVar6))
            goto LAB_0054fd56;
            LVar4 = InterlockedDecrement(puVar7 + 1);
            if (LVar4 == 0) {
              (**(code **)*puVar7)(1);
            }
          }
          local_1c = puVar6;
          InterlockedIncrement(puVar6 + 1);
          puVar7 = puVar6;
        }
      }
LAB_0054fd56:
    } while (local_18 != 0);
    if ((puVar7 != (undefined4 *)0x0) &&
       (cVar1 = FUN_00401030("BSFaceGenModelMap::FreeLRUData()"), cVar1 != '\0')) {
      if (param_1 == 0) {
        FUN_00559ba0();
      }
      else if (param_1 == 1) {
        FUN_00559c40();
      }
      FUN_00401040();
    }
  }
  _DAT_00b39c7c = _DAT_00b39c7c + -1;
  if (_DAT_00b39c7c == 0) {
    _DAT_00b39c78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  local_4 = local_4 & 0xffffff00;
  if ((puVar7 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar7 + 1), LVar4 == 0)) {
    (**(code **)*puVar7)(1);
  }
  local_4 = 0xffffffff;
  if ((puVar6 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar6 + 1), LVar4 == 0)) {
    (**(code **)*puVar6)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0054fe20(void)

{
  if ((DAT_00b39b80 != 0) && (*(int *)(DAT_00b39b80 + 0xdac) != 0)) {
    FUN_0054f840();
    if (*(undefined4 **)(DAT_00b39b80 + 0xdac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(DAT_00b39b80 + 0xdac))(1);
    }
    *(undefined4 *)(DAT_00b39b80 + 0xdac) = 0;
  }
  return;
}



void FUN_0054fe70(void)

{
  if ((DAT_00b39b80 != 0) && (*(int *)(DAT_00b39b80 + 0xdac) != 0)) {
    FUN_0054f9c0();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0054feb0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 != (char *)0x0) {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(local_20c + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strrchr(local_20c,0x2e);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      _sprintf(local_108,"%s.egm",local_20c);
      FUN_004028d0(local_108,0);
      return *param_1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0054ff60(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 != (char *)0x0) {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(local_20c + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strrchr(local_20c,0x2e);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      _sprintf(local_108,"%s.nif",local_20c);
      FUN_004028d0(local_108,0);
      return *param_1;
    }
  }
  return 0;
}


