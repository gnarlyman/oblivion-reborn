
void FUN_007e0260(void)

{
  FUN_007dfbd0();
  FUN_007dfee0();
  return;
}



void FUN_007e0270(int param_1)

{
  float fVar1;
  float fVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  LONG LVar8;
  float *pfVar9;
  byte bVar10;
  float *pfVar11;
  void *unaff_EBX;
  undefined1 *puVar12;
  int unaff_EBP;
  void *unaff_ESI;
  int iVar13;
  int iVar14;
  undefined4 *unaff_EDI;
  float10 fVar15;
  float fVar16;
  float fStack_48;
  int iStack_44;
  int iStack_30;
  int *piStack_24;
  undefined4 local_20;
  void *pvStack_18;
  float fStack_14;
  
  iVar13 = 0;
  local_20 = 0;
  pvVar3 = (void *)FUN_00401f00();
  iVar4 = FUN_00401f00();
  _memset(pvVar3,0,param_1 * 4);
  iVar5 = FUN_00405a30();
  piVar6 = (int *)(**(code **)(**(int **)(iVar5 + 0x24) + 0x14))();
  iStack_30 = 0;
  if (0 < param_1) {
    do {
      fStack_14 = (float)iStack_30;
      iStack_30 = iStack_30 + 1;
      fStack_14 = fStack_14 + 0.5;
      *(float *)((int)pvVar3 + iStack_30 * 4 + -4) = fStack_14 / (float)param_1;
    } while (iStack_30 < param_1);
  }
  iVar5 = 0;
  if (0 < param_1) {
    fStack_14 = (float)(param_1 >> 1);
    do {
      if (iVar13 < iVar5) {
        pvStack_18 = *(void **)((int)pvVar3 + iVar13 * 4);
        *(undefined4 *)((int)pvVar3 + iVar13 * 4) = *(undefined4 *)((int)pvVar3 + iVar5 * 4);
        *(void **)((int)pvVar3 + iVar5 * 4) = pvStack_18;
      }
      fVar7 = fStack_14;
      if (1 < (int)fStack_14 && (int)fStack_14 <= iVar13) {
        do {
          iVar13 = iVar13 - (int)fVar7;
          fVar7 = (float)((int)fVar7 >> 1);
        } while (1 < (int)fVar7 && (int)fVar7 <= iVar13);
      }
      iVar5 = iVar5 + 1;
      iVar13 = iVar13 + (int)fVar7;
    } while (iVar5 < param_1);
  }
  iVar5 = 0;
  if (0 < param_1) {
    do {
      iVar13 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      fStack_14 = (float)(int)ROUND(*(float *)((int)pvVar3 + iVar13) * 65535.0);
      *(undefined2 *)(iVar4 + -2 + iVar5 * 2) = fStack_14._0_2_;
    } while (iVar5 < param_1);
  }
  piStack_24 = piVar6;
  (**(code **)(*piVar6 + 0x4c))();
  _memcpy(pvStack_18,unaff_ESI,param_1 * 2);
  (**(code **)(*piVar6 + 0x50))();
  puVar12 = &stack0xffffffa0;
  FUN_00401f20();
  FUN_00401f20(unaff_ESI);
  if (*(undefined1 **)(unaff_EBP + 0xe0) == (undefined1 *)0x0) {
    unaff_EDI = (undefined4 *)0x0;
    bVar10 = 1;
  }
  else {
    bVar10 = (byte)unaff_ESI;
    puVar12 = *(undefined1 **)(unaff_EBP + 0xe0);
  }
  iVar4 = *(int *)(puVar12 + 0x20);
  if ((((bVar10 & 1) != 0) && (unaff_EDI != (undefined4 *)0x0)) &&
     (LVar8 = InterlockedDecrement(unaff_EDI + 1), LVar8 == 0)) {
    (**(code **)*unaff_EDI)();
  }
  piVar6 = (int *)(**(code **)(**(int **)(iVar4 + 0x24) + 0x14))();
  pvVar3 = (void *)FUN_00401f00();
  _memset(pvVar3,0,param_1 << 8);
  if (0 < (int)fStack_14) {
    iStack_44 = 0;
    iVar4 = 1;
    fVar7 = fStack_14;
    do {
      fStack_14 = (-6.2831855 / (float)(iVar4 * -2)) * 0.5;
      fVar15 = (float10)FUN_00986300();
      fStack_14 = (float)fVar15;
      fVar16 = fStack_14 * -2.0 * fStack_14;
      fVar15 = (float10)FUN_00986300();
      iVar5 = 0;
      fStack_48 = 1.0;
      fStack_14 = 0.0;
      if (0 < iVar4) {
        do {
          if (iVar5 < param_1) {
            pfVar11 = (float *)((iVar5 + iStack_44) * 0x10 + 8 + (int)pvVar3);
            pfVar9 = (float *)((iVar5 + iStack_44 + iVar4) * 0x10 + 8 + (int)pvVar3);
            iVar13 = iVar5;
            do {
              iVar14 = iVar13 + iVar4 * 2;
              fVar2 = ((float)(iVar4 + iVar13) + 0.5) / (float)(int)pvStack_18;
              pfVar9[-2] = -fVar2;
              fVar1 = ((float)iVar13 + 0.5) / (float)(int)pvStack_18;
              pfVar9[-1] = fVar1;
              pfVar11[-1] = fVar1;
              pfVar11[-2] = fVar2;
              *pfVar9 = fStack_48;
              pfVar9[1] = fStack_14;
              pfVar9 = pfVar9 + iVar4 * 8;
              *pfVar11 = fStack_48;
              pfVar11[1] = fStack_14;
              pfVar11 = pfVar11 + iVar4 * 8;
              iVar13 = iVar14;
            } while (iVar14 < param_1);
          }
          iVar5 = iVar5 + 1;
          fVar1 = fStack_14 * (float)fVar15;
          fStack_14 = (float)fVar15 * fStack_48 + fStack_14 * fVar16 + fStack_14;
          fStack_48 = (fStack_48 * fVar16 - fVar1) + fStack_48;
        } while (iVar5 < iVar4);
      }
      iStack_44 = iStack_44 + param_1;
      fVar7 = (float)((int)fVar7 + -1);
      iVar4 = iVar4 * 2;
    } while (fVar7 != 0.0);
    unaff_EBX = (void *)0x0;
  }
  (**(code **)(*piVar6 + 0x4c))(piVar6,0,&piStack_24,0);
  _memcpy(unaff_EBX,pvVar3,param_1 << 8);
  (**(code **)(*piVar6 + 0x50))(piVar6,0);
  FUN_00401f20(pvVar3);
  return;
}



void FUN_007e06b0(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int in_ECX;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *unaff_EBP;
  int unaff_EDI;
  int iVar10;
  bool bVar11;
  int *local_10;
  undefined1 auStack_8 [8];
  
  iVar10 = 0;
  if (*(char *)param_1 != '\0') {
    iVar4 = FUN_00405a30();
    piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x24) + 0x14))();
    (**(code **)(*piVar5 + 0x4c))(piVar5,0,auStack_8,0,0);
    puVar9 = unaff_EBP;
    iVar4 = DAT_00b45fc8;
    if (0 < DAT_00b45fc8) {
      do {
        iVar8 = 0;
        if (0 < iVar4) {
          puVar7 = *(undefined4 **)(*(int *)(in_ECX + 0xf8) + iVar10 * 4);
          do {
            iVar8 = iVar8 + 1;
            *puVar9 = *puVar7;
            puVar9 = puVar9 + 1;
            puVar7 = puVar7 + 1;
            iVar4 = DAT_00b45fc8;
          } while (iVar8 < DAT_00b45fc8);
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar4);
    }
    (**(code **)(*piVar5 + 0x50))(piVar5,0);
    *(char *)param_1 = '\0';
  }
  bVar11 = *(int *)(in_ECX + 0xdc) == 0;
  if (bVar11) {
    param_1 = (int *)0x0;
    piVar5 = (int *)&param_1;
  }
  else {
    piVar5 = (int *)(*(int *)(in_ECX + 0xdc) + 0x20);
  }
  pcVar3 = (char *)param_1;
  local_10 = (int *)(uint)bVar11;
  iVar10 = *piVar5;
  if (((bVar11) && (param_1 != (int *)0x0)) &&
     (LVar6 = InterlockedDecrement((LONG *)((int)param_1 + 4)), LVar6 == 0)) {
    (*(code *)**(undefined4 **)pcVar3)(1);
  }
  piVar5 = (int *)(**(code **)(**(int **)(iVar10 + 0x24) + 0x14))();
  param_1 = piVar5;
  (**(code **)(*piVar5 + 0x4c))(piVar5,0,auStack_8,0,0);
  if (0 < DAT_00b45fc8) {
    iVar4 = 0;
    iVar10 = DAT_00b45fc8;
    do {
      iVar8 = 0;
      if (0 < iVar10) {
        iVar2 = *(int *)(in_ECX + 0xfc);
        puVar9 = *(undefined4 **)(iVar2 + iVar4 * 4);
        puVar7 = unaff_EBP;
        do {
          *puVar7 = *(undefined4 *)(*(int *)(iVar2 + (iVar10 - iVar4) * 4) + (iVar10 - iVar8) * 4);
          puVar7[1] = *(undefined4 *)
                       (*(int *)(iVar2 + (DAT_00b45fc8 - iVar4) * 4) + (DAT_00b45fc8 - iVar8) * 4);
          iVar8 = iVar8 + 1;
          puVar7[2] = *puVar9;
          unaff_EBP = puVar7 + 4;
          uVar1 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar7[3] = uVar1;
          puVar7 = unaff_EBP;
          iVar10 = DAT_00b45fc8;
          in_ECX = unaff_EDI;
          piVar5 = local_10;
        } while (iVar8 < DAT_00b45fc8);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar10);
  }
  (**(code **)(*piVar5 + 0x50))(piVar5,0);
  return;
}



void FUN_007e0840(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  float10 fVar6;
  undefined1 local_21;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  double local_10;
  
  iVar4 = 0;
  local_21 = 1;
  if (DAT_00b45fc8 != -1 && -1 < DAT_00b45fc8 + 1) {
    do {
      _memset(*(void **)(*(int *)(in_ECX + 0xf8) + iVar4 * 4),0,DAT_00b45fc8 * 4 + 1);
      _memset(*(void **)(*(int *)(in_ECX + 0xfc) + iVar4 * 4),0,DAT_00b45fc8 * 4 + 1);
      if (iVar4 < DAT_00b45fc8) {
        _memset(*(void **)(*(int *)(in_ECX + 0xf8) + iVar4 * 4),0,DAT_00b45fc8 * 4);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00b45fc8 + 1);
  }
  local_1c = 0.0;
  if (DAT_00b45fd0 == '\0') {
    iVar4 = DAT_00b45fc8;
    if (-1 < DAT_00b45fc8) {
      do {
        fVar3 = local_1c;
        local_20 = 0.0;
        local_1c = ((float)(int)local_1c - (float)DAT_00b45fc8 * 0.5) * 0.049087387;
        if (-1 < iVar4) {
          local_10 = (double)(local_1c * local_1c);
          do {
            fVar2 = local_20;
            local_20 = ((float)(int)local_20 - (float)DAT_00b45fc8 * 0.5) * 0.049087387;
            local_14 = local_20 * local_20 + (float)local_10;
            fVar6 = (float10)FUN_00982c30();
            local_14 = (float)fVar6 * 9.81;
            fVar6 = (float10)FUN_00982c30();
            local_14 = (float)fVar6;
            *(float *)(*(int *)(*(int *)(in_ECX + 0xf8) + (int)fVar3 * 4) + (int)fVar2 * 4) =
                 local_14;
            if ((local_1c == 0.0) && (local_20 == 0.0)) {
              local_20 = 0.0;
            }
            else {
              FUN_007df640(local_1c,local_20);
              fVar6 = (float10)FUN_00982c30();
              local_20 = (float)fVar6;
              local_14 = local_20;
            }
            fVar6 = (float10)FUN_007df580(0,0x3f800000);
            local_18 = (float)fVar6;
            iVar4 = _rand();
            local_14 = ((float)iVar4 / 32767.0 + (float)iVar4 / 32767.0) * 3.1415927;
            fVar6 = (float10)FUN_00986300();
            iVar5 = (int)fVar2 + 1;
            local_14 = local_18 * local_20 * (float)fVar6;
            *(float *)(*(int *)(*(int *)(in_ECX + 0xfc) + (int)fVar3 * 4) + -4 + iVar5 * 4) =
                 local_14;
            iVar4 = DAT_00b45fc8;
            local_20 = (float)iVar5;
          } while (iVar5 <= DAT_00b45fc8);
        }
        local_1c = (float)((int)fVar3 + 1);
      } while ((int)local_1c <= iVar4);
    }
  }
  else {
    iVar4 = DAT_00b45fc8;
    if (-1 < DAT_00b45fc8) {
      do {
        fVar3 = local_1c;
        local_20 = 0.0;
        local_1c = ((float)(int)local_1c - (float)DAT_00b45fc8 * 0.5) * 0.049087387;
        if (-1 < iVar4) {
          local_10 = (double)(local_1c * local_1c);
          do {
            fVar2 = local_20;
            local_20 = ((float)(int)local_20 - (float)DAT_00b45fc8 * 0.5) * 0.049087387;
            local_18 = local_20 * local_20 + (float)local_10;
            fVar6 = (float10)FUN_00982c30();
            local_18 = (float)fVar6 * 9.81;
            fVar6 = (float10)FUN_00982c30();
            local_18 = (float)fVar6;
            *(float *)(*(int *)(*(int *)(in_ECX + 0xf8) + (int)fVar3 * 4) + (int)fVar2 * 4) =
                 local_18;
            if ((0x1f < (int)fVar3) || (0x1f < (int)fVar2)) {
              iVar4 = DAT_00b45fc8 + -0x20;
              if ((iVar4 < (int)fVar3) && ((int)fVar2 < 0x20)) {
                *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xfc) + (int)fVar3 * 4) + (int)fVar2 * 4)
                     = *(undefined4 *)
                        (*(int *)(*(int *)(in_ECX + 0xfc) + 0x100 + ((int)fVar3 - DAT_00b45fc8) * 4)
                        + (int)fVar2 * 4);
              }
              else {
                if (((int)fVar3 < 0x20) && (iVar4 < (int)fVar2)) {
                  iVar4 = *(int *)(*(int *)(in_ECX + 0xfc) + (int)fVar3 * 4);
                  fVar1 = *(float *)(iVar4 + 0x100 + ((int)fVar2 - DAT_00b45fc8) * 4);
                }
                else {
                  if ((iVar4 < (int)fVar3) && (iVar4 < (int)fVar2)) {
                    *(undefined4 *)
                     (*(int *)(*(int *)(in_ECX + 0xfc) + (int)fVar3 * 4) + (int)fVar2 * 4) =
                         *(undefined4 *)
                          (*(int *)(*(int *)(in_ECX + 0xfc) +
                                   ((0x40 - DAT_00b45fc8) + (int)fVar3) * 4) +
                          ((0x40 - DAT_00b45fc8) + (int)fVar2) * 4);
                    goto LAB_007e0adf;
                  }
                  if ((local_1c == 0.0) && (local_20 == 0.0)) {
                    local_20 = 0.0;
                  }
                  else {
                    FUN_007df640(local_1c,local_20);
                    fVar6 = (float10)FUN_00982c30();
                    local_20 = (float)fVar6;
                    local_18 = local_20;
                  }
                  fVar6 = (float10)FUN_007df580(0,0x3f800000);
                  local_18 = (float)fVar6;
                  iVar4 = _rand();
                  local_14 = ((float)iVar4 / 32767.0 + (float)iVar4 / 32767.0) * 3.1415927;
                  fVar6 = (float10)FUN_00986300();
                  iVar4 = *(int *)(*(int *)(in_ECX + 0xfc) + (int)fVar3 * 4);
                  fVar1 = local_18 * local_20 * (float)fVar6;
                  local_14 = fVar1;
                }
                *(float *)(iVar4 + (int)fVar2 * 4) = fVar1;
              }
            }
LAB_007e0adf:
            local_20 = (float)((int)fVar2 + 1);
            iVar4 = DAT_00b45fc8;
          } while ((int)local_20 <= DAT_00b45fc8);
        }
        local_1c = (float)((int)fVar3 + 1);
        if (iVar4 < (int)local_1c) {
          FUN_007e06b0(&local_21);
          return;
        }
      } while( true );
    }
  }
  FUN_007e06b0(&local_21);
  return;
}



void FUN_007e0cb0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xe0) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xe0));
  }
  if (*(int *)(in_ECX + 0xe4) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xe4));
  }
  if (*(int *)(in_ECX + 0xe8) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xe8));
  }
  if (*(int *)(in_ECX + 0xd8) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xd8));
  }
  if (*(int *)(in_ECX + 0xdc) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xdc));
  }
  if (*(int *)(in_ECX + 0xf0) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xf0));
  }
  if (*(int *)(in_ECX + 0xf4) != 0) {
    FUN_007c1ee0(*(int *)(in_ECX + 0xf4));
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xe0);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xe0) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xe4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xe4) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xe8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xe8) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xd8);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xd8) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xdc);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xdc) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xf0);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xf0) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xf4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xf4) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xec);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0xec) = 0;
  }
  *(undefined1 *)(in_ECX + 0x108) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e0ed0(void)

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
  puStack_8 = &LAB_009cf49c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar2);
  *in_ECX = &PTR_FUN_00a91b74;
  in_ECX[0x2c] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x2d,4,7,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  DAT_00b45fe0 = in_ECX;
  in_ECX[0x34] = 0;
  _DAT_00b45fc4 = 0x40a00000;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  _DAT_00b45fc0 = 0x42b40000;
  _DAT_00b45fd8 = 0x3f000000;
  _DAT_00b45fd4 = 0x3f800000;
  puVar1 = (undefined4 *)in_ECX[0x36];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x36] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x37];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x37] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x38];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x38] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x39];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x39] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x3b];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x3b] = 0;
  }
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  if (DAT_00b45fd0 == '\0') {
    DAT_00b45fc8 = 0x80;
    DAT_00b45fcc = 7;
  }
  else {
    DAT_00b45fc8 = 0x100;
    DAT_00b45fcc = 8;
  }
  DAT_00b45fd1 = 1;
  _DAT_00b45fe4 = 1.0 / (float)DAT_00b45fc8;
  _DAT_00b45fe8 = _DAT_00b45fe4;
  _DAT_00b45fec = _DAT_00b45fe4;
  _DAT_00b45ff0 = _DAT_00b45fe4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e1100(byte param_1)

{
  FUN_007df7a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007e1120(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  LONG LVar6;
  undefined4 uVar7;
  int *in_ECX;
  int iVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf520;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar5);
  if (DAT_00b42d78 == (code *)0x0) {
    fVar9 = (float10)0;
  }
  else {
    fVar9 = (float10)(*DAT_00b42d78)(0,1);
  }
  piVar2 = in_ECX + 0x35;
  in_ECX[0x40] = (int)(((float)fVar9 / 25.0) * _DAT_00b45fd4);
  iVar8 = **(int **)(in_ECX[0x35] + 0x24);
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  iVar8 = *(int *)(*(int *)(*piVar2 + 0x24) + 4);
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  iVar8 = *(int *)(*(int *)(*piVar2 + 0x24) + 8);
  puVar3 = *(undefined4 **)(iVar8 + 4);
  if (puVar3 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(puVar3 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  switch(in_ECX[0x34]) {
  case 0:
    iVar8 = **(int **)(*piVar2 + 0x24);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
    }
    uStack_4 = 0;
    FUN_008011e0(iVar8,1);
    uVar7 = FUN_00405a30();
    FUN_0076c910(uVar7);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar2 + 0x24) + 4));
    FUN_008011e0(iVar8,1);
    goto LAB_007e1367;
  case 1:
  case 2:
  case 3:
  case 4:
    iVar8 = **(int **)(*piVar2 + 0x24);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
    }
    uStack_4 = 1;
    FUN_008011e0(iVar8,3);
    uVar7 = FUN_00405a30();
    FUN_0076c910(uVar7);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar2 + 0x24) + 4));
    FUN_008011e0(iVar8,3);
    uVar7 = FUN_00405a30();
    FUN_0076c910(uVar7);
    FUN_007aec20(*(undefined4 *)(*(int *)(*piVar2 + 0x24) + 8));
    break;
  case 5:
    iVar8 = **(int **)(*piVar2 + 0x24);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
    }
    uStack_4 = 2;
    break;
  case 6:
    iVar8 = **(int **)(*piVar2 + 0x24);
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
    }
    uStack_4 = 3;
    break;
  default:
    goto switchD_007e1233_default;
  }
  FUN_008011e0(iVar8,1);
LAB_007e1367:
  uVar7 = FUN_00405a30();
  FUN_0076c910(uVar7);
  uStack_4 = 0xffffffff;
  if (iVar8 != 0) {
    piVar1 = (int *)(iVar8 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
switchD_007e1233_default:
  iVar8 = *piVar2;
  puVar3 = (undefined4 *)in_ECX[in_ECX[0x34] + 0x2d];
  puVar4 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar4 + 1), LVar6 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar8 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  FUN_0076ce40(in_ECX[0xe],piVar2);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007e1430(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0x10c);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007e0ed0();
  }
  (**(code **)(*piVar7 + 0x84))();
  FUN_007dfbd0();
  FUN_007dfee0();
  (**(code **)(*piVar7 + 0x88))();
  (**(code **)(*piVar7 + 0x54))(*piVar8);
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



void FUN_007e15c0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  lVar1 = (ulonglong)(DAT_00b45fc8 + 1) * 4;
  uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)(in_ECX + 0xf8) = uVar2;
  lVar1 = (ulonglong)(DAT_00b45fc8 + 1) * 4;
  uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  *(undefined4 *)(in_ECX + 0xfc) = uVar2;
  uVar3 = DAT_00b45fc8 + 1;
  iVar4 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)uVar3 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar3 * 4));
      *(undefined4 *)(*(int *)(in_ECX + 0xf8) + iVar4 * 4) = uVar2;
      lVar1 = (ulonglong)(DAT_00b45fc8 + 1) * 4;
      uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
      *(undefined4 *)(*(int *)(in_ECX + 0xfc) + iVar4 * 4) = uVar2;
      iVar4 = iVar4 + 1;
      uVar3 = DAT_00b45fc8 + 1;
    } while (iVar4 < (int)uVar3);
  }
  FUN_007e0840();
  FUN_007e0270(DAT_00b45fc8,DAT_00b45fcc);
  iVar4 = 0;
  if (DAT_00b45fc8 != -1 && -1 < DAT_00b45fc8 + 1) {
    do {
      FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0xf8) + iVar4 * 4));
      FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0xfc) + iVar4 * 4));
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_00b45fc8 + 1);
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xf8));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0xfc));
  *(undefined4 *)(in_ECX + 0xf8) = 0;
  *(undefined4 *)(in_ECX + 0xfc) = 0;
  *(undefined1 *)(in_ECX + 0x108) = 1;
  return;
}



void FUN_007e1710(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xe4) == 0) {
    uVar1 = FUN_007c23c0(DAT_00b43104,9);
    FUN_0075fa90(uVar1);
  }
  if (*(int *)(in_ECX + 0xe0) == 0) {
    uVar1 = FUN_007c23c0(DAT_00b43104,10);
    FUN_0075fa90(uVar1);
  }
  if (*(int *)(in_ECX + 0xd8) == 0) {
    uVar1 = FUN_007c23c0(DAT_00b43104,0xb);
    FUN_0075fa90(uVar1);
  }
  if (*(int *)(in_ECX + 0xdc) == 0) {
    uVar1 = FUN_007c23c0(DAT_00b43104,0xc);
    FUN_0075fa90(uVar1);
  }
  FUN_007e15c0();
  return;
}



/* WARNING: Removing unreachable block (ram,0x007e1ee9) */
/* WARNING: Removing unreachable block (ram,0x007e1ef7) */
/* WARNING: Removing unreachable block (ram,0x007e2305) */
/* WARNING: Removing unreachable block (ram,0x007e230f) */

void FUN_007e17d0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  LONG LVar9;
  int in_ECX;
  int *piVar10;
  undefined4 unaff_ESI;
  int *unaff_EDI;
  int *piVar11;
  int *unaff_FS_OFFSET;
  int *piStack_54;
  int *piStack_50;
  int *piVar12;
  int *piStack_3c;
  float fStack_38;
  uint uStack_34;
  int *piStack_30;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 *puStack_10;
  undefined4 *local_c;
  int *piStack_8;
  int *piStack_4;
  
  piStack_4 = (int *)0xffffffff;
  piStack_8 = (int *)&LAB_009cf558;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  piStack_50 = (int *)(DAT_00b30aac ^ (uint)&stack0xffffffb4);
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(char *)(in_ECX + 0x108) == '\0') {
    FUN_007e1710();
  }
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    iStack_24 = 0;
  }
  else {
    iStack_24 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  piStack_54 = (int *)0x0;
  iVar7 = (**(code **)(*piVar6 + 0x4c))();
  fVar3 = (float)iVar7;
  if (iVar7 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar4 = (float)iStack_24;
  if (iStack_24 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  piStack_30 = (int *)(fVar3 / fVar4);
  piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else {
    piStack_28 = (int *)(**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  iVar7 = (**(code **)(*piVar6 + 0x50))();
  fStack_38 = (float)iVar7;
  if (iVar7 < 0) {
    fStack_38 = fStack_38 + 4.2949673e+09;
  }
  fVar3 = (float)(int)piStack_28;
  if ((int)piStack_28 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fStack_38 = fStack_38 / fVar3;
  iStack_24 = 0;
  uStack_20 = 0x3f800000;
  fStack_1c = 1.0;
  uStack_18 = 0;
  if (DAT_00b42e96 != '\0') {
    uStack_34 = 0x3f800000;
    fStack_38 = 1.0;
  }
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else {
    piStack_28 = (int *)(**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
  }
  fVar3 = (float)(int)piStack_28;
  if ((int)piStack_28 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  piStack_2c = (int *)(0.5 / fVar3);
  if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
    piStack_28 = (int *)0x0;
  }
  else {
    piStack_28 = (int *)(**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
  }
  fVar3 = (float)(int)piStack_28;
  if ((int)piStack_28 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  *(uint *)(in_ECX + 0x90) = uStack_34;
  *(float *)(in_ECX + 0x94) = fStack_38;
  *(float *)(in_ECX + 0x98) = (float)piStack_2c + 0.0;
  *(float *)(in_ECX + 0x9c) = 0.5 / fVar3 + 0.0;
  if ((char)param_2 == '\0') {
    uStack_20 = uStack_34;
  }
  else {
    uStack_20 = 0x3f800000;
    fStack_38 = 1.0;
  }
  piStack_30 = (int *)(in_ECX + 0xe8);
  uStack_34 = DAT_00b45fcc;
  piVar6 = (int *)(-(uint)(DAT_00b43075 != '\0') & 7);
  fStack_1c = fStack_38;
  if (*piStack_30 == 0) {
    uVar8 = FUN_007c23c0(DAT_00b43104,6);
    FUN_0075fa90(uVar8);
  }
  piVar10 = (int *)(in_ECX + 0xf0);
  piStack_28 = piVar10;
  if (*(int *)(in_ECX + 0xf0) == 0) {
    uVar8 = FUN_007c23c0(DAT_00b43104,6);
    FUN_0075fa90(uVar8);
  }
  piVar11 = (int *)(in_ECX + 0xf4);
  piStack_2c = piVar11;
  if (*(int *)(in_ECX + 0xf4) == 0) {
    uVar8 = FUN_007c23c0(DAT_00b43104,6);
    FUN_0075fa90(uVar8);
  }
  if (*piVar10 != 0) {
    InterlockedIncrement((LONG *)(*piVar10 + 4));
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xec);
  local_c = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)*piVar11) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar1 + 1), LVar9 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    iVar7 = *piVar11;
    *(int *)(in_ECX + 0xec) = iVar7;
    if (iVar7 != 0) {
      InterlockedIncrement((LONG *)(iVar7 + 4));
    }
  }
  piVar10 = *(int **)(in_ECX + 0xec);
  if (piVar10 != (int *)0x0) {
    InterlockedIncrement(piVar10 + 1);
  }
  piVar11 = piStack_30;
  piVar12 = (int *)0x0;
  local_c = (undefined4 *)CONCAT31(local_c._1_3_,2);
  *(undefined4 *)(in_ECX + 0xd0) = 0;
  uVar8 = FUN_007d6fe0();
  FUN_007d7280(piVar6,uVar8);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&iStack_24);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  puVar1 = *(undefined4 **)(in_ECX + 0xec);
  if (puVar1 != (undefined4 *)*piVar11) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar1 + 1), LVar9 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    iVar7 = *piVar11;
    *(int *)(in_ECX + 0xec) = iVar7;
    if (iVar7 != 0) {
      InterlockedIncrement((LONG *)(iVar7 + 4));
    }
  }
  *(undefined4 *)(in_ECX + 0xd0) = 3;
  uVar8 = FUN_007d6fe0();
  FUN_007d7280(0,uVar8);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&piStack_28);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  if (piVar10 != (int *)0x0) {
    InterlockedIncrement(piVar10 + 1);
    unaff_EDI = piVar10;
  }
  piVar11 = *(int **)(in_ECX + 0xec);
  if (piVar11 != param_1) {
    if (((piVar11 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar11 + 1), LVar9 == 0)) &&
       (piVar11 != (int *)0x0)) {
      (**(code **)*piVar11)(1);
    }
    *(int **)(in_ECX + 0xec) = param_1;
    if (param_1 != (int *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  if (piVar10 != *(int **)(in_ECX + 0xec)) {
    if ((piVar10 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar10 + 1), LVar9 == 0)) {
      (**(code **)*piVar10)(1);
    }
    piVar10 = *(int **)(in_ECX + 0xec);
    piVar6 = piVar10;
    if (piVar10 != (int *)0x0) {
      InterlockedIncrement(piVar10 + 1);
    }
  }
  if (param_1 != unaff_EDI) {
    if ((param_1 != (int *)0x0) && (LVar9 = InterlockedDecrement(param_1 + 1), LVar9 == 0)) {
      (**(code **)*param_1)(1);
    }
    if (unaff_EDI != (int *)0x0) {
      InterlockedIncrement(unaff_EDI + 1);
    }
  }
  *(undefined4 *)(in_ECX + 0xd0) = 1;
  uVar8 = FUN_007d6fe0();
  FUN_007d7280(unaff_ESI,uVar8);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&piStack_2c);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  iVar7 = 0;
  piVar11 = piStack_4;
  if (0 < (int)piVar6) {
    do {
      *(float *)(in_ECX + 0x104) = (float)iVar7 * 0.0625 + 0.03125;
      uVar8 = FUN_007d6fe0();
      FUN_007d7280(unaff_EDI,uVar8);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(&piStack_30);
      }
      FUN_00709c60(DAT_00b3f928);
      if (piStack_50 != piVar10) {
        if ((piStack_50 != (int *)0x0) && (LVar9 = InterlockedDecrement(piStack_50 + 1), LVar9 == 0)
           ) {
          (**(code **)*piStack_50)(1);
        }
        piStack_50 = piVar10;
        if (piVar10 != (int *)0x0) {
          InterlockedIncrement(piVar10 + 1);
        }
      }
      piVar2 = *(int **)(in_ECX + 0xec);
      if (piVar2 != piVar11) {
        if (((piVar2 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar2 + 1), LVar9 == 0)) &&
           (piVar2 != (int *)0x0)) {
          (**(code **)*piVar2)(1);
        }
        *(int **)(in_ECX + 0xec) = piVar11;
        if (piVar11 != (int *)0x0) {
          InterlockedIncrement(piVar11 + 1);
        }
      }
      if (piVar10 != *(int **)(in_ECX + 0xec)) {
        if ((piVar10 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar10 + 1), LVar9 == 0)) {
          (**(code **)*piVar10)(1);
        }
        piVar10 = *(int **)(in_ECX + 0xec);
        piVar12 = piVar10;
        if (piVar10 != (int *)0x0) {
          InterlockedIncrement(piVar10 + 1);
        }
      }
      if (piVar11 != piStack_50) {
        if ((piVar11 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar11 + 1), LVar9 == 0)) {
          (**(code **)*piVar11)(1);
        }
        piStack_4 = piStack_50;
        piVar11 = piStack_50;
        if (piStack_50 != (int *)0x0) {
          InterlockedIncrement(piStack_50 + 1);
        }
      }
      FUN_007d72d0();
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)piVar6);
  }
  *(undefined4 *)(in_ECX + 0xd0) = 4;
  uVar8 = FUN_007d6fe0();
  FUN_007d7280(unaff_EDI,uVar8);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&piStack_30);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  if ((piVar10 != (int *)0x0) && (piStack_54 = piVar10, piVar10 != (int *)0x0)) {
    InterlockedIncrement(piVar10 + 1);
  }
  piVar11 = *(int **)(in_ECX + 0xec);
  if (piVar11 != piStack_8) {
    if (((piVar11 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar11 + 1), LVar9 == 0)) &&
       (piVar11 != (int *)0x0)) {
      (**(code **)*piVar11)(1);
    }
    *(int **)(in_ECX + 0xec) = piStack_8;
    if (piStack_8 != (int *)0x0) {
      InterlockedIncrement(piStack_8 + 1);
    }
  }
  if (piVar10 != *(int **)(in_ECX + 0xec)) {
    if ((piVar10 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar10 + 1), LVar9 == 0)) {
      (**(code **)*piVar10)(1);
    }
    piVar10 = *(int **)(in_ECX + 0xec);
    if (piVar10 != (int *)0x0) {
      InterlockedIncrement(piVar10 + 1);
    }
  }
  piVar11 = piStack_8;
  if (piStack_8 != piStack_54) {
    if ((piStack_8 != (int *)0x0) && (LVar9 = InterlockedDecrement(piStack_8 + 1), LVar9 == 0)) {
      (**(code **)*piVar11)(1);
    }
    piStack_8 = piStack_54;
    if (piStack_54 != (int *)0x0) {
      InterlockedIncrement(piStack_54 + 1);
    }
  }
  *(undefined4 *)(in_ECX + 0xd0) = 2;
  iVar7 = 0;
  if (0 < (int)piVar12) {
    do {
      *(float *)(in_ECX + 0x104) = (float)iVar7 * 0.0625 + 0.03125;
      if (iVar7 == (int)piVar12 + -1) {
        uVar8 = FUN_007d6fe0();
      }
      else {
        uVar8 = FUN_007d6fe0();
      }
      FUN_007d7280(piStack_50,uVar8);
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_34);
      }
      FUN_00709c60(DAT_00b3f928);
      if (iVar7 == (int)piVar12 + -1) {
        piVar11 = (int *)*puStack_10;
        piVar2 = *(int **)(in_ECX + 0xec);
        if (piVar2 != piVar11) {
          if (((piVar2 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar2 + 1), LVar9 == 0)) &&
             (piVar2 != (int *)0x0)) {
            (**(code **)*piVar2)(1);
          }
          *(int **)(in_ECX + 0xec) = piVar11;
          piVar5 = piStack_8;
joined_r0x007e219c:
          piStack_8 = piVar5;
          if (piVar11 != (int *)0x0) {
            InterlockedIncrement(piVar11 + 1);
          }
        }
      }
      else {
        if (piStack_54 != piVar10) {
          if ((piStack_54 != (int *)0x0) &&
             (LVar9 = InterlockedDecrement(piStack_54 + 1), LVar9 == 0)) {
            (**(code **)*piStack_54)(1);
          }
          piStack_54 = piVar10;
          if (piVar10 != (int *)0x0) {
            InterlockedIncrement(piVar10 + 1);
          }
        }
        piVar2 = piStack_8;
        piVar11 = *(int **)(in_ECX + 0xec);
        if (piVar11 != piStack_8) {
          if (((piVar11 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar11 + 1), LVar9 == 0))
             && (piVar11 != (int *)0x0)) {
            (**(code **)*piVar11)(1);
          }
          *(int **)(in_ECX + 0xec) = piVar2;
          if (piVar2 != (int *)0x0) {
            InterlockedIncrement(piVar2 + 1);
          }
        }
        if (piVar10 != *(int **)(in_ECX + 0xec)) {
          if ((piVar10 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar10 + 1), LVar9 == 0)) {
            (**(code **)*piVar10)(1);
          }
          piVar10 = *(int **)(in_ECX + 0xec);
          if (piVar10 != (int *)0x0) {
            InterlockedIncrement(piVar10 + 1);
          }
        }
        if (piVar2 != piStack_54) {
          piVar5 = piStack_54;
          piVar11 = piStack_54;
          if ((piVar2 != (int *)0x0) &&
             (LVar9 = InterlockedDecrement(piVar2 + 1), piVar5 = piStack_54, LVar9 == 0)) {
            (**(code **)*piVar2)(1);
            piVar5 = piStack_54;
          }
          goto joined_r0x007e219c;
        }
      }
      FUN_007d72d0();
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)piVar12);
  }
  if (DAT_00b45fd1 == '\0') {
    *(undefined4 *)(in_ECX + 0xd0) = 6;
  }
  else {
    *(undefined4 *)(in_ECX + 0xd0) = 5;
  }
  uVar8 = FUN_007d6fe0();
  FUN_007d7280(piStack_50,uVar8);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&uStack_34);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  FUN_007c1ee0(*piVar12);
  FUN_007c1ee0(*piStack_3c);
  FUN_007c1ee0(*piVar6);
  puVar1 = (undefined4 *)*piVar12;
  if (puVar1 != (undefined4 *)0x0) {
    LVar9 = InterlockedDecrement(puVar1 + 1);
    if ((LVar9 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar12 = 0;
  }
  puVar1 = (undefined4 *)*piStack_3c;
  if (puVar1 != (undefined4 *)0x0) {
    LVar9 = InterlockedDecrement(puVar1 + 1);
    if ((LVar9 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *piStack_3c = 0;
  }
  puVar1 = (undefined4 *)*piVar6;
  if (puVar1 != (undefined4 *)0x0) {
    LVar9 = InterlockedDecrement(puVar1 + 1);
    if ((LVar9 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *piVar6 = 0;
  }
  uStack_20 = uStack_20 & 0xffffff00;
  if ((piVar10 != (int *)0x0) && (LVar9 = InterlockedDecrement(piVar10 + 1), LVar9 == 0)) {
    (**(code **)*piVar10)(1);
  }
  puVar1 = local_c;
  uStack_20 = 0xffffffff;
  if ((local_c != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(local_c + 1), LVar9 == 0)) {
    (**(code **)*puVar1)(1);
  }
  *unaff_FS_OFFSET = (int)piStack_28;
  return;
}



undefined4 *
FUN_007e2370(undefined4 *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
            byte param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = param_3;
  *(byte *)(param_1 + 2) = param_5;
  *(undefined1 *)((int)param_1 + 6) = param_4;
  *(undefined1 *)((int)param_1 + 7) = 0;
  param_1[3] = 0;
  if (param_5 == 0) {
    *(undefined1 *)((int)param_1 + 9) = 0;
    return param_1;
  }
  uVar3 = (uint)param_5;
  uVar1 = FUN_00401f00(uVar3 * 4);
  param_1[3] = uVar1;
  iVar2 = 0;
  if (uVar3 != 0) {
    do {
      *(undefined4 *)(param_1[3] + iVar2 * 4) = *(undefined4 *)(&stack0x00000018 + iVar2 * 4);
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar3);
  }
  *(undefined1 *)((int)param_1 + 9) = 0;
  return param_1;
}



void FUN_007e2400(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 4) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xc));
  }
  *(undefined1 *)(in_ECX + 9) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_007e2430(float param_1)

{
  float fVar1;
  int in_ECX;
  
  fVar1 = *(float *)(in_ECX + 0x20);
  if ((!NAN(fVar1) && 1.0 < fVar1 != (fVar1 == 1.0)) && (param_1 < 1.0)) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(float *)(in_ECX + 0x20) = param_1;
    return;
  }
  if ((*(float *)(in_ECX + 0x20) < 1.0) && (!NAN(param_1) && 1.0 < param_1 != (param_1 == 1.0))) {
    *(undefined4 *)(in_ECX + 0x24) = 0;
    *(float *)(in_ECX + 0x20) = param_1;
    return;
  }
  *(float *)(in_ECX + 0x20) = param_1;
  return;
}



void FUN_007e2490(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0073da70(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void FUN_007e24c0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x2c);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x2c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x30) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x28) + 8))(piVar1);
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 4) = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          FUN_00401f20(*(int *)(iVar2 + 0xc));
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined1 *)(iVar2 + 9) = 0;
        FUN_00401f20(iVar2);
      }
    } while (*(int *)(in_ECX + 0x34) != 0);
  }
  if (*(int *)(in_ECX + 0x44) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x3c);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x3c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x40) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x38) + 8))(piVar1);
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + -1;
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 4) = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          FUN_00401f20(*(int *)(iVar2 + 0xc));
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined1 *)(iVar2 + 9) = 0;
        FUN_00401f20(iVar2);
      }
    } while (*(int *)(in_ECX + 0x44) != 0);
  }
  if (*(int *)(in_ECX + 0x54) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x4c);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x4c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x50) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x48) + 8))(piVar1);
      *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + -1;
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 4) = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          FUN_00401f20(*(int *)(iVar2 + 0xc));
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined1 *)(iVar2 + 9) = 0;
        FUN_00401f20(iVar2);
      }
    } while (*(int *)(in_ECX + 0x54) != 0);
  }
  if (*(int *)(in_ECX + 100) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x5c);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x5c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x60) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x58) + 8))(piVar1);
      *(int *)(in_ECX + 100) = *(int *)(in_ECX + 100) + -1;
      if (iVar2 != 0) {
        *(undefined2 *)(iVar2 + 4) = 0;
        if (*(int *)(iVar2 + 0xc) != 0) {
          FUN_00401f20(*(int *)(iVar2 + 0xc));
        }
        *(undefined4 *)(iVar2 + 0xc) = 0;
        *(undefined1 *)(iVar2 + 9) = 0;
        FUN_00401f20(iVar2);
      }
    } while (*(int *)(in_ECX + 100) != 0);
  }
  return;
}



void FUN_007e2650(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf5b4;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91d14;
  local_4 = 4;
  in_ECX[7] = 0;
  FUN_007e24c0(uVar1);
  local_4._0_1_ = 3;
  FUN_007aa660();
  local_4._0_1_ = 2;
  FUN_007aa660();
  local_4._0_1_ = 1;
  FUN_007aa660();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_007aa660();
  local_4 = 0xffffffff;
  FUN_006ffd70();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_007e2700(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7deb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((short)_DAT_00b42eac == 5) {
    *unaff_FS_OFFSET = local_c;
    return in_ECX + 0x38;
  }
  if ((short)_DAT_00b42eac == 6) {
    *unaff_FS_OFFSET = local_c;
    return in_ECX + 0x48;
  }
  if (*(uint *)(in_ECX + 0x24) != param_2) {
    FUN_007e24c0(uVar2);
    param_2 = FUN_00401f00(0x10);
    local_4 = 0;
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = FUN_007e2370(param_2,param_1,0,1,0,0);
    }
    local_4 = 0xffffffff;
    FUN_006aa320(&param_2);
    *(uint *)(in_ECX + 0x24) = (_DAT_00b42eac & 0xffff) << 8 | uVar1;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_007e27f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf604;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_006ffd30(uVar1);
  *(undefined2 *)(in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a91d14;
  in_ECX[0xd] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[10] = &PTR_FUN_00a8cc2c;
  in_ECX[0x11] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xe] = &PTR_FUN_00a8cc2c;
  in_ECX[0x15] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x12] = &PTR_FUN_00a8cc2c;
  in_ECX[0x19] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x16] = &PTR_FUN_00a8cc2c;
  in_ECX[8] = 0x3f800000;
  local_4 = 4;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  FUN_00573880();
  FUN_00573880();
  FUN_00573880();
  FUN_00573880();
  in_ECX[0x1a] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e28c0(byte param_1)

{
  FUN_007e2650();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007e28e0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  
  iVar4 = param_1;
  FUN_0073dca0(param_1);
  param_1 = FUN_0070f910(DAT_00b46000);
  uVar6 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
    param_1 = FUN_0070f950("specular",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(byte *)(in_ECX + 0x1c) & 2) != 0) {
    param_1 = FUN_0070f950("skinned",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(byte *)(in_ECX + 0x1c) & 4) != 0) {
    param_1 = FUN_0070f950("lowdetail",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(byte *)(in_ECX + 0x1c) & 8) != 0) {
    param_1 = FUN_0070f950("multitexture",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(byte *)(in_ECX + 0x1c) & 0x10) != 0) {
    param_1 = FUN_0070f950("multispecular",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(uint *)(in_ECX + 0x1c) & 0x80) != 0) {
    param_1 = FUN_0070f950("envmap reflection",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if (*(float *)(in_ECX + 0x20) < 1.0) {
    param_1 = FUN_0070fb90("fAlpha",*(undefined4 *)(in_ECX + 0x20));
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  if ((*(uint *)(in_ECX + 0x1c) & 0x100) != 0) {
    param_1 = FUN_0070f950("alpha base texture",1);
    uVar6 = (uint)*(ushort *)(iVar4 + 10);
    if (*(ushort *)(iVar4 + 8) <= uVar6) {
      FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
    }
    FUN_0042bb90(uVar6,&param_1);
  }
  param_1 = FUN_0070faf0("Scenegraph",*(uint *)(in_ECX + 0x1c) >> 0x1c);
  uVar6 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  param_1 = FUN_0070faf0("iLastRenderPassState",*(undefined4 *)(in_ECX + 0x24));
  uVar6 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  iVar2 = *(int *)(in_ECX + 0x34);
  param_1 = FUN_0070faf0("number of passes",iVar2);
  uVar6 = (uint)*(ushort *)(iVar4 + 10);
  if (*(ushort *)(iVar4 + 8) <= uVar6) {
    FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
  }
  FUN_0042bb90(uVar6,&param_1);
  if (0 < iVar2) {
    puVar3 = (undefined4 *)**(undefined4 **)(in_ECX + 0x2c);
    iVar2 = (*(undefined4 **)(in_ECX + 0x2c))[2];
    while (iVar2 != 0) {
      if (*(char *)(iVar2 + 6) == '\0') {
        uVar5 = FUN_007b4920(*(undefined2 *)(iVar2 + 4));
        param_1 = FUN_0070fc30("  pass",uVar5);
        uVar6 = (uint)*(ushort *)(iVar4 + 10);
        if (*(ushort *)(iVar4 + 8) <= uVar6) {
          FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
        }
      }
      else {
        uVar5 = FUN_007b4920(*(undefined2 *)(iVar2 + 4));
        param_1 = FUN_0070fc30(" Fpass",uVar5);
        uVar6 = (uint)*(ushort *)(iVar4 + 10);
        if (*(ushort *)(iVar4 + 8) <= uVar6) {
          FUN_004e4a10(*(ushort *)(iVar4 + 0xe) + uVar6);
        }
      }
      FUN_0042bb90(uVar6,&param_1);
      if (puVar3 == (undefined4 *)0x0) {
        return;
      }
      piVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      iVar2 = *piVar1;
    }
  }
  return;
}



int FUN_007e2cb0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
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
  iVar2 = FUN_00401f00(0x6c,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_007e27f0();
  }
  local_4 = 0xffffffff;
  FUN_0073da70(iVar2,param_1);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_007e2d60(void)

{
  if (DAT_00b4600c == 0) {
    DAT_00b4600c = ((DAT_00b42f48 < 2) - 1 & 0x50) + 0x28;
  }
  return;
}



void FUN_007e2d90(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf652;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar3);
  *in_ECX = &PTR_FUN_00a91e4c;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x46] = 0;
  local_4 = 3;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  in_ECX[0x1f] = 0x17e;
  if (in_ECX[0x21] != 0) {
    piVar1 = (int *)(in_ECX[0x21] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x21] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[9];
  if (puVar2 != param_1) {
    if (((puVar2 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar2 + 1), LVar4 == 0)) &&
       (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[9] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  in_ECX[0x2c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
  in_ECX[0x44] = 0;
  in_ECX[0x46] = 0;
  in_ECX[0x45] = 0;
  in_ECX[0x47] = 0;
  in_ECX[0x48] = 0;
  in_ECX[0x4a] = 0;
  in_ECX[0x49] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = 0;
  in_ECX[0x51] = 0;
  if (DAT_00b4600c == 0) {
    DAT_00b4600c = ((DAT_00b42f48 < 2) - 1 & 0x50) + 0x28;
  }
  uVar3 = DAT_00b4600c;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)DAT_00b4600c * 0x20 >> 0x20) != 0) |
                              (uint)((ulonglong)DAT_00b4600c * 0x20));
  in_ECX[0x20] = _Dst;
  _memset(_Dst,0,uVar3 << 5);
  _memset(in_ECX + 0x2d,0,0x40);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e30f0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b46014;
  if (DAT_00b46014 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b46014 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b46014 = (undefined4 *)0x0;
  }
  return;
}



void FUN_007e3130(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x88) + 0x5c))();
    (**(code **)(**(int **)(in_ECX + 0x8c) + 0x44))();
  }
  FUN_0077a4a0();
  return;
}



void FUN_007e3160(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color1",0x10000007,0,8,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x118,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color2",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x128,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Color3",0x10000007,0,10,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x138,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Velocity",0x10000007,0,0xb,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0xf4,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Acceleration",0x10000007,0,0xc,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0x100,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fVars",0x10000009,0,4,4,&DAT_00a2f7ec,0x40,4,in_ECX + 0xb4,0);
    if (DAT_00b4600c == 0) {
      DAT_00b4600c = ((DAT_00b42f48 < 2) - 1 & 0x50) + 0x28;
    }
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("particle data",0x10000009,0,0xf,DAT_00b4600c * 2,&DAT_00a2f7ec,DAT_00b4600c << 5,4,
               *(undefined4 *)(in_ECX + 0x80),0);
  }
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint * FUN_007e33a0(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(8,uVar3);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00771090(DAT_00b43104,5,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar5) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,6,0x80000000,0,10,1,0);
  piVar8 = (int *)*puVar9;
  uVar3 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar2 = 1;
        goto LAB_007e34c2;
      }
    }
    bVar2 = 0;
LAB_007e34c2:
    uVar3 = -(uint)bVar2 & (uint)piVar8;
  }
  iVar4 = FUN_00401f00(0x148);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_007e2d90(uVar3);
  }
  (**(code **)(*piVar8 + 0x84))();
  (**(code **)(*piVar8 + 0xa8))();
  (**(code **)(*piVar8 + 0xac))();
  (**(code **)(*piVar8 + 0x88))();
  piVar1 = (int *)puVar9[1];
  if (piVar1 != piVar8) {
    if (((piVar1 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar1 + 1), LVar6 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    puVar9[1] = (uint)piVar8;
    InterlockedIncrement(piVar8 + 1);
  }
  (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
  *unaff_FS_OFFSET = iVar4;
  return puVar9;
}



void FUN_007e3730(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint3 uVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf688;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  iVar1 = *(int *)(in_ECX + 0x84);
  local_4._1_3_ = 0;
  uVar4 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar9 = 0;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
    iVar9 = iVar1;
  }
  if (*(int *)(iVar9 + 0x18) == 0) {
    piVar6 = (int *)FUN_00772630(&local_10,uVar5);
    iVar1 = *piVar6;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0x5c) = *(int *)(iVar1 + 0x5c) + 1;
      local_18 = iVar1;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar9 + 0x14),local_18);
    uVar4 = local_4._1_3_;
  }
  local_4._1_3_ = uVar4;
  puVar2 = *(undefined4 **)(in_ECX + 0x88);
  puVar3 = *(undefined4 **)(iVar9 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar9 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x8c);
  puVar3 = *(undefined4 **)(iVar9 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar9 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x34,0,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar9 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar9 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar6 = (int *)(local_18 + 0x5c);
    *piVar6 = *piVar6 + -1;
    if (*piVar6 == 0) {
      FUN_00772560();
    }
  }
  piVar6 = (int *)(iVar9 + 0x60);
  *piVar6 = *piVar6 + -1;
  local_4 = 0xffffffff;
  if (*piVar6 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e39a0(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  uint uVar6;
  bool bVar7;
  
  if (((param_1 != (int *)0x0) &&
      (piVar2 = (int *)(**(code **)(*param_1 + 8))(), piVar2 != (int *)0x0)) && (param_2 != 0)) {
    uVar6 = 0;
    if (*(short *)((int)piVar2 + 0xb6) != 0) {
      if (*(short *)((int)piVar2 + 0xb6) == 0) goto LAB_007e39fc;
      do {
        if (*(int *)(piVar2[0x2c] + uVar6 * 4) == 0) {
LAB_007e39fc:
          piVar3 = (int *)0x0;
          bVar7 = false;
        }
        else {
          piVar3 = (int *)FUN_00707530(4);
          if (piVar3 == (int *)0x0) {
            bVar7 = false;
          }
          else {
            iVar4 = (**(code **)(*piVar3 + 0x54))();
            bVar7 = iVar4 == 0xe;
          }
        }
        if ((((-(uint)bVar7 & (uint)piVar3) != 0) && ((-(uint)bVar7 & (uint)piVar3) == param_2)) &&
           (((**(code **)(*piVar2 + 0x8c))(&param_1,uVar6), piVar3 = param_1, param_1 != (int *)0x0
            && ((LVar5 = InterlockedDecrement(param_1 + 1), LVar5 == 0 && (piVar3 != (int *)0x0)))))
           ) {
          (**(code **)*piVar3)(1);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)((int)piVar2 + 0xb6));
    }
    puVar1 = DAT_00b46014;
    DAT_00b46010 = DAT_00b46010 + -1;
    if (DAT_00b46010 < 1) {
      if (DAT_00b46014 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(DAT_00b46014 + 1);
        if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        DAT_00b46014 = (undefined4 *)0x0;
      }
      DAT_00b46010 = 0;
    }
  }
  return;
}



void FUN_007e3ae0(undefined2 param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf6ce;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007005d0(uVar2);
  *in_ECX = &PTR_FUN_00a45ec4;
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a45e70;
  *(undefined2 *)(in_ECX + 9) = 0;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[8] = 0;
  *(undefined2 *)(in_ECX + 3) = param_1;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  in_ECX[2] = 0;
  in_ECX[4] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 0x1c >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 0x1c));
  local_4 = CONCAT31(local_4._1_3_,2);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,0x1c,param_2,FUN_0053d910);
  }
  in_ECX[5] = pvVar3;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[6] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e3bd0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf722;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91e4c;
  puVar2 = DAT_00b46014;
  local_4 = 3;
  if (DAT_00b46014 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b46014 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b46014 = (undefined4 *)0x0;
  }
  FUN_00401f20(in_ECX[0x20],uVar3);
  in_ECX[0x20] = 0;
  if (in_ECX[0x21] != 0) {
    piVar1 = (int *)(in_ECX[0x21] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    in_ECX[0x21] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x22] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[0x23] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[0x23];
  local_4._0_1_ = 2;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x22];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[0x21] != 0) {
    piVar1 = (int *)(in_ECX[0x21] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007e3d50(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d1138;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x84) == 0) {
    local_10 = in_ECX;
    piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
    iVar2 = *(int *)(in_ECX + 0x84);
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *(int *)(in_ECX + 0x84) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0))
    {
      FUN_007604d0();
    }
  }
  FUN_007e3730();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007e3e00(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  bool bVar6;
  
  (**(code **)(*in_ECX + 0x80))();
  piVar1 = *(int **)(param_4 + 0x18);
  if (piVar1 == (int *)0x0) {
    bVar6 = false;
  }
  else {
    iVar3 = (**(code **)(*piVar1 + 0x54))();
    bVar6 = iVar3 == 0xe;
  }
  uVar5 = -(uint)bVar6 & (uint)piVar1;
  if (uVar5 != 0) {
    piVar1 = in_ECX + 0x21;
    FUN_0076c910(*(undefined4 *)(uVar5 + 0x10c));
    FUN_007715e0(3);
    in_ECX[0x2d] = *(int *)(uVar5 + 0xf8);
    in_ECX[0x2e] = *(int *)(uVar5 + 0x84);
    in_ECX[0x2f] = *(int *)(uVar5 + 0x8c);
    in_ECX[0x30] = *(int *)(uVar5 + 0x90);
    in_ECX[0x3d] = *(int *)(uVar5 + 0x94);
    in_ECX[0x3e] = *(int *)(uVar5 + 0x98);
    in_ECX[0x3f] = *(int *)(uVar5 + 0x9c);
    in_ECX[0x40] = *(int *)(uVar5 + 0xa0);
    in_ECX[0x41] = *(int *)(uVar5 + 0xa4);
    in_ECX[0x42] = *(int *)(uVar5 + 0xa8);
    in_ECX[0x46] = *(int *)(uVar5 + 0xb8);
    in_ECX[0x47] = *(int *)(uVar5 + 0xbc);
    in_ECX[0x48] = *(int *)(uVar5 + 0xc0);
    in_ECX[0x49] = *(int *)(uVar5 + 0xc4);
    in_ECX[0x4a] = *(int *)(uVar5 + 200);
    in_ECX[0x4b] = *(int *)(uVar5 + 0xcc);
    in_ECX[0x4c] = *(int *)(uVar5 + 0xd0);
    in_ECX[0x4d] = *(int *)(uVar5 + 0xd4);
    in_ECX[0x4e] = *(int *)(uVar5 + 0xd8);
    in_ECX[0x4f] = *(int *)(uVar5 + 0xdc);
    in_ECX[0x50] = *(int *)(uVar5 + 0xe0);
    in_ECX[0x51] = *(int *)(uVar5 + 0xe4);
    in_ECX[0x31] = *(int *)(uVar5 + 0xac);
    in_ECX[0x32] = *(int *)(uVar5 + 0xb0);
    in_ECX[0x33] = *(int *)(uVar5 + 0xb4);
    in_ECX[0x34] = _DAT_00b2d80c;
    in_ECX[0x35] = *(int *)(uVar5 + 0xe8);
    in_ECX[0x36] = *(int *)(uVar5 + 0xec);
    in_ECX[0x37] = *(int *)(uVar5 + 0xf0);
    in_ECX[0x38] = *(int *)(uVar5 + 0xf4);
    if (*(char *)(uVar5 + 0x78) == '\0') {
      iVar3 = 0;
      in_ECX[0x39] = 0;
      in_ECX[0x3a] = 0;
    }
    else {
      in_ECX[0x39] = *(int *)(param_1 + 0x88);
      in_ECX[0x3a] = *(int *)(param_1 + 0x8c);
      iVar3 = *(int *)(param_1 + 0x90);
    }
    in_ECX[0x3b] = iVar3;
    in_ECX[0x3c] = *(int *)(uVar5 + 0x124);
    if (DAT_00b4600c == 0) {
      DAT_00b4600c = ((DAT_00b42f48 < 2) - 1 & 0x50) + 0x28;
    }
    _memcpy((void *)in_ECX[0x20],*(void **)(uVar5 + 0x6c),DAT_00b4600c << 5);
    iVar3 = *piVar1;
    uVar2 = *(undefined4 *)(uVar5 + 0xfc);
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x13,uVar2,0);
    iVar3 = *piVar1;
    uVar2 = *(undefined4 *)(uVar5 + 0x100);
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x14,uVar2,0);
    iVar3 = *piVar1;
    uVar2 = *(undefined4 *)(uVar5 + 0x104);
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar4;
    }
    FUN_00772cd0(0xab,uVar2,1);
    iVar3 = *piVar1;
    uVar2 = *(undefined4 *)(uVar5 + 0x108);
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar4 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar4;
    }
    FUN_00772cd0(0x17,uVar2,0);
    FUN_0076ce40(in_ECX[0xe],piVar1);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  return 0;
}



undefined4 * FUN_007e4120(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  LONG LVar11;
  undefined4 *puVar12;
  short *psVar13;
  short sVar14;
  undefined4 uVar15;
  int *unaff_FS_OFFSET;
  undefined4 uVar16;
  uint local_78;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf761;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff78;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b42f48 != 0) {
    puVar12 = DAT_00b46014;
    if (DAT_00b46014 == (undefined4 *)0x0) {
      if (DAT_00b4600c == 0) {
        DAT_00b4600c = ((DAT_00b42f48 < 2) - 1 & 0x50) + 0x28;
      }
      uVar2 = DAT_00b4600c & 0xffff;
      iVar10 = uVar2 * 4;
      iVar3 = FUN_00401f00(uVar2 * 0xc,uVar1);
      iVar4 = FUN_00401f00(uVar2 * 0x30);
      iVar5 = FUN_00401f00(uVar2 << 5);
      if (uVar2 != 0) {
        puVar12 = (undefined4 *)(iVar5 + 0x10);
        sVar14 = 0;
        psVar13 = (short *)(iVar3 + 4);
        puVar6 = (undefined4 *)(iVar4 + 0x18);
        local_78 = uVar2;
        do {
          puVar6[-6] = 0xbf800000;
          puVar6[-5] = 0xbf800000;
          puVar6[-3] = 0x3f800000;
          puVar6[-2] = 0xbf800000;
          puVar6[-1] = 0;
          *puVar6 = 0x3f800000;
          puVar6[1] = 0x3f800000;
          puVar6[2] = 0;
          puVar6[3] = 0xbf800000;
          puVar6[4] = 0x3f800000;
          puVar6[5] = 0;
          puVar6[-4] = 0;
          puVar12[-4] = 0;
          puVar12[-3] = 0;
          puVar12[-2] = 0x3f800000;
          puVar12[-1] = 0;
          *puVar12 = 0x3f800000;
          puVar12[1] = 0x3f800000;
          puVar12[2] = 0;
          puVar12[3] = 0x3f800000;
          psVar13[-1] = sVar14 + 1;
          psVar13[-2] = sVar14;
          psVar13[2] = sVar14;
          *psVar13 = sVar14 + 2;
          psVar13[1] = sVar14 + 3;
          psVar13[3] = sVar14 + 2;
          sVar14 = sVar14 + 4;
          puVar6 = puVar6 + 0xc;
          puVar12 = puVar12 + 8;
          psVar13 = psVar13 + 6;
          local_78 = local_78 - 1;
        } while (local_78 != 0);
      }
      iVar7 = FUN_00401f00(0x58,uVar1);
      uVar15 = 0;
      local_4 = 0;
      if (iVar7 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = FUN_0071fb40(iVar10,iVar4,0,0,iVar5,1,0,uVar2 * 2,iVar3);
      }
      local_4 = 0xffffffff;
      iVar3 = FUN_00401f00(0x2c);
      local_4 = 1;
      if (iVar3 != 0) {
        uVar15 = FUN_007e3ae0(iVar10,1);
      }
      local_4 = 0xffffffff;
      FUN_007263b0(1);
      iVar3 = uVar2 << 4;
      uVar16 = 1;
      uVar9 = FUN_007e48e0(iVar3,1);
      FUN_007260b0(0,uVar9,iVar3,uVar16);
      FUN_007262a0(0,0,0,1,iVar10,4,4);
      FUN_006c61e0(uVar15);
      iVar10 = FUN_00401f00(0xc0);
      local_4 = 2;
      if (iVar10 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar6 = (undefined4 *)FUN_00717570(uVar8);
      }
      iVar10 = puVar6[0x2d];
      *(undefined4 *)(iVar10 + 0xc) = *(undefined4 *)(iVar10 + 0xc);
      *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar10 + 0x10);
      *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar10 + 0x14);
      *(undefined4 *)(iVar10 + 0x18) = 0x44000000;
      puVar12 = DAT_00b46014;
      local_4 = 0xffffffff;
      if (DAT_00b46014 != puVar6) {
        if (((DAT_00b46014 != (undefined4 *)0x0) &&
            (LVar11 = InterlockedDecrement(DAT_00b46014 + 1), LVar11 == 0)) &&
           (puVar12 != (undefined4 *)0x0)) {
          (**(code **)*puVar12)(1);
        }
        DAT_00b46014 = puVar6;
        InterlockedIncrement(puVar6 + 1);
        puVar12 = DAT_00b46014;
      }
    }
    DAT_00b46014 = puVar12;
    *unaff_FS_OFFSET = local_c;
    return puVar12;
  }
  *unaff_FS_OFFSET = local_c;
  return (undefined4 *)0x0;
}



void FUN_007e44c0(byte param_1)

{
  FUN_007e3bd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_007e44e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00707530(4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x54))(uVar4);
    if (iVar6 == 0xe) goto LAB_007e45cd;
    FUN_00708560(&param_1,4);
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  iVar6 = FUN_00401f00(0x128);
  uStack_4 = 0;
  if (iVar6 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007e5460();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar1);
  if (cVar3 == '\0') {
    uVar4 = FUN_004a1220(piVar5);
    *unaff_FS_OFFSET = local_c;
    return uVar4 & 0xffffff00;
  }
LAB_007e45cd:
  uVar4 = FUN_0077aa60(puVar1);
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



uint FUN_007e45f0(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if ((param_1 != (int *)0x0) &&
     (piVar2 = (int *)(**(code **)(*param_1 + 8))(), piVar2 != (int *)0x0)) {
    FUN_007e4120();
    iVar3 = FUN_00700900();
    iVar4 = *(int *)(iVar3 + 0xb4);
    fVar1 = *(float *)(param_2 + 0x2c) + *(float *)(param_2 + 0x2c);
    if (fVar1 < *(float *)(iVar4 + 0x18)) {
      fVar1 = *(float *)(iVar4 + 0x18);
    }
    *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(iVar4 + 0x10);
    *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar4 + 0x14);
    *(float *)(iVar4 + 0x18) = fVar1;
    (**(code **)(*piVar2 + 0x84))(iVar3,1);
    FUN_00707370(0,0);
    FUN_007b8940(iVar3,0x16,0,1);
    piVar2 = (int *)FUN_00707530(4);
    bVar5 = false;
    if (piVar2 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar2 + 0x54))();
      bVar5 = iVar4 == 0xe;
    }
    if ((-(uint)bVar5 & (uint)piVar2) != 0) {
      FUN_007e4120();
      DAT_00b46010 = DAT_00b46010 + 1;
    }
    return -(uint)bVar5 & (uint)piVar2;
  }
  return 0;
}



void FUN_007e4700(float param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  fVar1 = param_1 - *(float *)(in_ECX + 0xf8);
  iVar2 = FUN_007e2d60();
  iVar5 = 0;
  if (3 < iVar2) {
    iVar3 = 0;
    iVar6 = (iVar2 - 4U >> 2) + 1;
    iVar5 = iVar6 * 4;
    do {
      iVar4 = iVar3 + *(int *)(in_ECX + 0x6c);
      if (*(float *)(iVar3 + *(int *)(in_ECX + 0x6c)) != 3.4028235e+38) {
        *(float *)(iVar4 + 0xc) = fVar1 + *(float *)(iVar4 + 0xc);
      }
      iVar4 = *(int *)(in_ECX + 0x6c) + iVar3;
      if (*(float *)(*(int *)(in_ECX + 0x6c) + 0x20 + iVar3) != 3.4028235e+38) {
        *(float *)(iVar4 + 0x2c) = fVar1 + *(float *)(iVar4 + 0x2c);
      }
      iVar4 = *(int *)(in_ECX + 0x6c);
      if (*(float *)(iVar3 + 0x40 + iVar4) != 3.4028235e+38) {
        *(float *)(iVar3 + 0x4c + iVar4) = fVar1 + *(float *)(iVar3 + 0x4c + iVar4);
      }
      iVar4 = *(int *)(in_ECX + 0x6c);
      if (*(float *)(iVar3 + 0x60 + iVar4) != 3.4028235e+38) {
        *(float *)(iVar3 + 0x6c + iVar4) = fVar1 + *(float *)(iVar3 + 0x6c + iVar4);
      }
      iVar3 = iVar3 + 0x80;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (iVar5 < iVar2) {
    iVar3 = iVar5 << 5;
    iVar2 = iVar2 - iVar5;
    do {
      iVar5 = iVar3 + *(int *)(in_ECX + 0x6c);
      if (*(float *)(iVar3 + *(int *)(in_ECX + 0x6c)) != 3.4028235e+38) {
        *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0xc) + fVar1;
      }
      iVar3 = iVar3 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(float *)(in_ECX + 0xf8) = param_1;
  return;
}



void FUN_007e4800(undefined4 param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  
  iVar6 = FUN_007e2d60();
  fVar1 = *(float *)(in_ECX + 0x88);
  fVar2 = *(float *)(in_ECX + 0x84);
  fVar3 = *(float *)(in_ECX + 0x84);
  fVar4 = *(float *)(in_ECX + 0x88);
  fVar5 = *(float *)(in_ECX + 0x84);
  *(undefined4 *)(in_ECX + 0xf8) = param_1;
  if (iVar6 != 0) {
    iVar8 = 0;
    do {
      *(undefined4 *)(iVar8 + *(int *)(in_ECX + 0x6c)) = 0x7f7fffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 4 + iVar8) = 0x7f7fffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 8 + iVar8) = 0x7f7fffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0xc + iVar8) = 0xc61c4000;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x10 + iVar8) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x14 + iVar8) = 0;
      *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x18 + iVar8) = 0;
      iVar7 = _rand();
      iVar8 = iVar8 + 0x20;
      iVar6 = iVar6 + -1;
      *(float *)(*(int *)(in_ECX + 0x6c) + -4 + iVar8) =
           ((float)iVar7 / 32767.0) * ((fVar1 + fVar1) / fVar2) + (fVar3 - fVar4) / fVar5;
    } while (iVar6 != 0);
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  return;
}



int FUN_007e48e0(void)

{
  longlong lVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  
  if (DAT_00b46044 == 0) {
    uVar3 = FUN_007e2d60();
    lVar1 = (ulonglong)(uVar3 * 4) * 4;
    DAT_00b46044 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    uVar5 = 0;
    if (uVar3 != 0) {
      pfVar4 = (float *)(DAT_00b46044 + 8);
      do {
        fVar2 = (float)(int)uVar5;
        if ((int)uVar5 < 0) {
          fVar2 = fVar2 + 4.2949673e+09;
        }
        uVar5 = uVar5 + 1;
        pfVar4[-2] = fVar2;
        pfVar4[-1] = fVar2;
        *pfVar4 = fVar2;
        pfVar4[1] = fVar2;
        pfVar4 = pfVar4 + 4;
      } while (uVar5 < uVar3);
    }
  }
  return DAT_00b46044;
}



void FUN_007e4960(int param_1)

{
  ushort uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int in_ECX;
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
  float local_c [3];
  
  local_48 = DAT_00b3f9a8;
  local_44 = DAT_00b3f9ac;
  local_40 = DAT_00b3f9b0;
  local_3c = DAT_00b3f9a8;
  local_38 = DAT_00b3f9ac;
  local_34 = DAT_00b3f9b0;
  if (*(short *)(in_ECX + 0x11a) == 0) {
    goto LAB_007e4cb2;
  }
  do {
    do {
      uVar3 = _rand();
      iVar6 = *(int *)(*(int *)(in_ECX + 0x114) + (uVar3 % (uint)*(ushort *)(in_ECX + 0x11a)) * 4);
    } while (iVar6 == 0);
  } while (*(int *)(iVar6 + 0xb4) == 0);
  iVar7 = *(int *)(iVar6 + 0xb8);
  if (iVar7 != 0) {
    uVar3 = *(uint *)(*(int *)(iVar7 + 8) + 0x40);
    uVar4 = _rand();
    iVar6 = *(int *)(*(int *)(iVar7 + 0x14) + (uVar4 % uVar3) * 4);
    iVar7 = *(int *)(iVar6 + 0x1c);
    iVar5 = _rand();
    local_28 = (float)iVar5 / 32767.0;
    local_1c = 1.0 - local_28;
    local_24 = local_1c * *(float *)(iVar7 + 0x88);
    local_20 = *(float *)(iVar7 + 0x8c) * local_1c;
    local_1c = local_1c * *(float *)(iVar7 + 0x90);
    local_30 = *(float *)(iVar6 + 0x88) * local_28;
    local_2c = *(float *)(iVar6 + 0x8c) * local_28;
    local_28 = local_28 * *(float *)(iVar6 + 0x90);
    local_48 = local_30 + local_24;
    local_44 = local_2c + local_20;
    local_40 = local_28 + local_1c;
    local_18 = local_48;
    local_14 = local_44;
    local_10 = local_40;
    iVar6 = _rand();
    iVar7 = _rand();
    local_c[0] = ((float)iVar7 + (float)iVar7) / 32767.0 - 1.0;
    local_c[1] = 0.0;
    local_c[2] = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
    FUN_0043f350();
    pfVar8 = (float *)FUN_007101f0(&local_18,local_c);
    local_3c = *pfVar8;
    local_38 = pfVar8[1];
    local_34 = pfVar8[2];
    goto LAB_007e4cb2;
  }
  uVar1 = *(ushort *)(*(int *)(iVar6 + 0xb4) + 8);
  uVar3 = _rand();
  uVar3 = uVar3 % (uint)uVar1;
  iVar6 = *(int *)(iVar6 + 0xb4);
  if (iVar6 == 0) goto LAB_007e4cb2;
  if (*(int **)(iVar6 + 0x34) == (int *)0x0) {
LAB_007e4bf5:
    if (*(int *)(iVar6 + 0x1c) == 0) {
      pfVar8 = &DAT_00b3f9a8;
    }
    else {
      pfVar8 = (float *)(*(int *)(iVar6 + 0x1c) + uVar3 * 0xc);
    }
    local_48 = *pfVar8;
    local_44 = pfVar8[1];
    local_40 = pfVar8[2];
    if (*(int *)(iVar6 + 0x20) == 0) {
      pfVar8 = &DAT_00b3f9a8;
    }
    else {
      pfVar8 = (float *)(*(int *)(iVar6 + 0x20) + uVar3 * 0xc);
    }
    local_3c = *pfVar8;
    local_38 = pfVar8[1];
    local_34 = pfVar8[2];
  }
  else {
    cVar2 = (**(code **)(**(int **)(iVar6 + 0x34) + 0x4c))();
    if (cVar2 == '\0') goto LAB_007e4bf5;
    local_18 = 0.0;
    local_14 = 0.0;
    local_10 = (float)((uint)local_10 & 0xffffff00);
    local_24 = 0.0;
    local_20 = 0.0;
    local_1c = (float)((uint)local_1c & 0xffffff00);
    cVar2 = FUN_00728ab0(1);
    if (cVar2 != '\0') {
      FUN_00728b60(&local_18);
      FUN_00728d00(&local_24);
      pfVar8 = (float *)((int)local_14 * uVar3 + (int)local_18);
      local_48 = *pfVar8;
      local_44 = pfVar8[1];
      local_40 = pfVar8[2];
      pfVar8 = (float *)((int)local_20 * uVar3 + (int)local_24);
      local_3c = *pfVar8;
      local_38 = pfVar8[1];
      local_34 = pfVar8[2];
      FUN_00728b20();
    }
  }
  if (*(char *)(in_ECX + 0x78) != '\0') {
    pfVar8 = (float *)FUN_0053d4b0(local_c,&local_48);
    local_48 = *pfVar8;
    local_44 = pfVar8[1];
    local_40 = pfVar8[2];
    pfVar8 = (float *)FUN_007101f0(local_c,&local_3c);
    local_3c = *pfVar8;
    local_38 = pfVar8[1];
    local_34 = pfVar8[2];
  }
LAB_007e4cb2:
  param_1 = param_1 * 0x20;
  *(float *)(param_1 + *(int *)(in_ECX + 0x6c)) = local_48;
  *(float *)(param_1 + 4 + *(int *)(in_ECX + 0x6c)) = local_44;
  *(float *)(param_1 + 8 + *(int *)(in_ECX + 0x6c)) = local_40;
  *(undefined4 *)(param_1 + 0xc + *(int *)(in_ECX + 0x6c)) = *(undefined4 *)(in_ECX + 0xf8);
  *(float *)(param_1 + 0x10 + *(int *)(in_ECX + 0x6c)) = local_3c;
  *(float *)(param_1 + 0x14 + *(int *)(in_ECX + 0x6c)) = local_38;
  *(float *)(param_1 + 0x18 + *(int *)(in_ECX + 0x6c)) = local_34;
  return;
}



void FUN_007e4d20(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
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
  
  if (*(short *)(in_ECX + 0x11a) == 0) {
    local_24 = DAT_00b3f9a8;
    local_20 = DAT_00b3f9ac;
    local_1c = DAT_00b3f9b0;
    local_30 = DAT_00b3f9a8;
    local_2c = DAT_00b3f9ac;
    local_28 = DAT_00b3f9b0;
  }
  else {
    do {
      uVar4 = _rand();
      iVar6 = *(int *)(*(int *)(in_ECX + 0x114) + (uVar4 % (uint)*(ushort *)(in_ECX + 0x11a)) * 4);
    } while (iVar6 == 0);
    if ((*(short *)(iVar6 + 0xb8) == 0) || (iVar1 = *(int *)(iVar6 + 0x1c), iVar1 == 0)) {
      local_24 = *(float *)(iVar6 + 0x88);
      local_20 = *(float *)(iVar6 + 0x8c);
      local_1c = *(float *)(iVar6 + 0x90);
      iVar6 = _rand();
      fVar2 = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
      iVar6 = _rand();
      fVar3 = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
      iVar6 = _rand();
      local_30 = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
      local_2c = fVar3;
      local_28 = fVar2;
      local_c = local_30;
      local_8 = fVar3;
      local_4 = fVar2;
      FUN_0043f350();
    }
    else {
      iVar5 = _rand();
      local_10 = (float)iVar5 / 32767.0;
      fVar2 = 1.0 - local_10;
      local_18 = *(float *)(iVar6 + 0x88) * local_10;
      local_14 = *(float *)(iVar6 + 0x8c) * local_10;
      local_10 = local_10 * *(float *)(iVar6 + 0x90);
      local_24 = local_18 + fVar2 * *(float *)(iVar1 + 0x88);
      local_20 = local_14 + *(float *)(iVar1 + 0x8c) * fVar2;
      local_1c = fVar2 * *(float *)(iVar1 + 0x90) + local_10;
      local_c = local_24;
      local_8 = local_20;
      local_4 = local_1c;
      iVar6 = _rand();
      fVar2 = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
      iVar6 = _rand();
      local_30 = ((float)iVar6 + (float)iVar6) / 32767.0 - 1.0;
      local_8 = 0.0;
      local_2c = 0.0;
      local_28 = fVar2;
      local_c = local_30;
      local_4 = fVar2;
      FUN_0043f350();
      pfVar7 = (float *)FUN_007101f0(&local_c,&local_30);
      local_30 = *pfVar7;
      local_2c = pfVar7[1];
      local_28 = pfVar7[2];
    }
  }
  param_1 = param_1 * 0x20;
  *(float *)(param_1 + *(int *)(in_ECX + 0x6c)) = local_24;
  *(float *)(param_1 + 4 + *(int *)(in_ECX + 0x6c)) = local_20;
  *(float *)(param_1 + 8 + *(int *)(in_ECX + 0x6c)) = local_1c;
  *(undefined4 *)(param_1 + 0xc + *(int *)(in_ECX + 0x6c)) = *(undefined4 *)(in_ECX + 0xf8);
  *(float *)(param_1 + 0x10 + *(int *)(in_ECX + 0x6c)) = local_30;
  *(float *)(param_1 + 0x14 + *(int *)(in_ECX + 0x6c)) = local_2c;
  *(float *)(param_1 + 0x18 + *(int *)(in_ECX + 0x6c)) = local_28;
  return;
}



void FUN_007e5020(int param_1)

{
  float fVar1;
  int iVar2;
  float *pfVar3;
  int in_ECX;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(short *)(in_ECX + 0x11a) == 0) {
    local_18 = DAT_00b3f9a8;
    local_14 = DAT_00b3f9ac;
    local_10 = DAT_00b3f9b0;
    local_24 = DAT_00b3f9a8;
    local_20 = DAT_00b3f9ac;
    local_1c = DAT_00b3f9b0;
  }
  else if (**(int **)(in_ECX + 0x114) != 0) {
    iVar2 = _rand();
    local_c = 0.0;
    local_14 = *(float *)(in_ECX + 0x74) * ((float)iVar2 / 32767.0);
    local_18 = 0.0;
    local_4 = 0.0;
    local_10 = 0.0;
    local_8 = local_14;
    iVar2 = _rand();
    fVar1 = ((float)iVar2 + (float)iVar2) / 32767.0 - 1.0;
    iVar2 = _rand();
    local_24 = ((float)iVar2 + (float)iVar2) / 32767.0 - 1.0;
    local_8 = 0.0;
    local_20 = 0.0;
    local_1c = fVar1;
    local_c = local_24;
    local_4 = fVar1;
    FUN_0043f350();
    if (*(char *)(in_ECX + 0x78) != '\0') {
      pfVar3 = (float *)FUN_0053d4b0(&local_c,&local_18);
      local_18 = *pfVar3;
      local_14 = pfVar3[1];
      local_10 = pfVar3[2];
      pfVar3 = (float *)FUN_007101f0(&local_c,&local_24);
      local_24 = *pfVar3;
      local_20 = pfVar3[1];
      local_1c = pfVar3[2];
    }
  }
  param_1 = param_1 * 0x20;
  *(float *)(param_1 + *(int *)(in_ECX + 0x6c)) = local_18;
  *(float *)(*(int *)(in_ECX + 0x6c) + 4 + param_1) = local_14;
  *(float *)(*(int *)(in_ECX + 0x6c) + 8 + param_1) = local_10;
  *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0xc + param_1) = *(undefined4 *)(in_ECX + 0xf8);
  *(float *)(*(int *)(in_ECX + 0x6c) + 0x10 + param_1) = local_24;
  *(float *)(*(int *)(in_ECX + 0x6c) + 0x14 + param_1) = local_20;
  *(float *)(*(int *)(in_ECX + 0x6c) + 0x18 + param_1) = local_1c;
  return;
}



void FUN_007e51f0(float param_1,char param_2,char param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  int local_28;
  int local_24;
  float local_18;
  float local_14;
  float local_10;
  
  iVar4 = FUN_007e2d60();
  iVar5 = FUN_009828c0();
  local_28 = iVar4;
  if (iVar5 <= iVar4) {
    local_28 = iVar5;
  }
  local_24 = FUN_009828c0();
  local_18 = DAT_00b3f9a8;
  local_14 = DAT_00b3f9ac;
  local_10 = DAT_00b3f9b0;
  if (param_2 != '\0') {
    for (iVar5 = *(int *)(*(int *)(in_ECX + 0x120) + 0x1c); iVar5 != 0;
        iVar5 = *(int *)(iVar5 + 0x1c)) {
      iVar6 = 6;
      bVar9 = true;
      pcVar7 = *(char **)(iVar5 + 8);
      pcVar8 = "Bip01";
      do {
        if (iVar6 == 0) break;
        iVar6 = iVar6 + -1;
        bVar9 = *pcVar7 == *pcVar8;
        pcVar7 = pcVar7 + 1;
        pcVar8 = pcVar8 + 1;
      } while (bVar9);
      if (bVar9) {
        iVar6 = *(int *)(iVar5 + 0x1c);
        local_18 = *(float *)(iVar5 + 0x88) - *(float *)(iVar6 + 0x88);
        local_14 = *(float *)(iVar5 + 0x8c) - *(float *)(iVar6 + 0x8c);
        local_10 = *(float *)(iVar5 + 0x90) - *(float *)(iVar6 + 0x90);
        break;
      }
    }
  }
  iVar5 = 0;
  if (0 < iVar4) {
    iVar6 = 0;
    do {
      fVar3 = param_1 - *(float *)(iVar6 + 0xc + *(int *)(in_ECX + 0x6c));
      pfVar1 = (float *)(iVar6 + *(int *)(in_ECX + 0x6c));
      if ((fVar3 < 0.0) || (*(float *)(in_ECX + 0x84) < fVar3 * pfVar1[7])) {
        if (*pfVar1 != 3.4028235e+38) {
          *pfVar1 = 3.4028235e+38;
          *(undefined4 *)(iVar6 + 4 + *(int *)(in_ECX + 0x6c)) = 0x7f7fffff;
          *(undefined4 *)(iVar6 + 8 + *(int *)(in_ECX + 0x6c)) = 0x7f7fffff;
          *(undefined4 *)(iVar6 + 0xc + *(int *)(in_ECX + 0x6c)) = 0xc61c4000;
          *(undefined4 *)(iVar6 + 0x10 + *(int *)(in_ECX + 0x6c)) = 0;
          *(undefined4 *)(iVar6 + 0x14 + *(int *)(in_ECX + 0x6c)) = 0;
          *(undefined4 *)(iVar6 + 0x18 + *(int *)(in_ECX + 0x6c)) = 0;
          *(int *)(in_ECX + 0x7c) = *(int *)(in_ECX + 0x7c) + -1;
        }
        if (((param_3 != '\0') && (0 < local_24)) && (*(int *)(in_ECX + 0x7c) < local_28)) {
          iVar2 = *(int *)(in_ECX + 0x70);
          if (iVar2 == 0) {
            FUN_007e4960(iVar5);
          }
          else if (iVar2 == 1) {
            FUN_007e4d20(iVar5);
          }
          else if (iVar2 == 2) {
            FUN_007e5020(iVar5);
          }
          local_24 = local_24 + -1;
          *(int *)(in_ECX + 0x7c) = *(int *)(in_ECX + 0x7c) + 1;
          if (param_2 != '\0') {
            *(float *)(iVar6 + *(int *)(in_ECX + 0x6c)) =
                 *(float *)(iVar6 + *(int *)(in_ECX + 0x6c)) - local_18;
            *(float *)(iVar6 + 4 + *(int *)(in_ECX + 0x6c)) =
                 *(float *)(iVar6 + 4 + *(int *)(in_ECX + 0x6c)) - local_14;
            *(float *)(iVar6 + 8 + *(int *)(in_ECX + 0x6c)) =
                 *(float *)(iVar6 + 8 + *(int *)(in_ECX + 0x6c)) - local_10;
          }
        }
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 0x20;
    } while (iVar5 < iVar4);
  }
  *(float *)(in_ECX + 0xf8) = param_1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e5460(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf7a4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007e27f0(uVar2);
  *in_ECX = &PTR_FUN_00a91fa4;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x43] = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_004b2d30(10,10);
  puVar1 = (undefined4 *)in_ECX[0x43];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x43] = 0;
  }
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0x3f800000;
  in_ECX[0x1c] = 0;
  *(undefined1 *)(in_ECX + 0x1e) = 1;
  in_ECX[0x3e] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  in_ECX[0x32] = 0;
  in_ECX[0x31] = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x49] = 0x3f800000;
  in_ECX[0x36] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  FUN_00477ef0();
  FUN_007e48e0();
  in_ECX[0x48] = 0;
  uVar2 = FUN_007e2d60();
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0x20 >> 0x20) != 0) |
                              (uint)((ulonglong)uVar2 * 0x20));
  in_ECX[0x1b] = _Dst;
  _memset(_Dst,0,uVar2 << 5);
  _DAT_00b46048 = _DAT_00b46048 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e56f0(void)

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
  
  puStack_8 = &LAB_009cf7e4;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a91fa4;
  puVar1 = (undefined4 *)in_ECX[0x43];
  local_4 = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x43] = 0;
  }
  FUN_00477ef0(uVar3);
  FUN_00401f20(in_ECX[0x1b]);
  _DAT_00b46048 = _DAT_00b46048 + -1;
  if (_DAT_00b46048 == 0) {
    FUN_00401f20(DAT_00b46044);
    DAT_00b46044 = 0;
  }
  in_ECX[0x44] = &PTR_FUN_00a43850;
  pvVar2 = (void *)in_ECX[0x45];
  local_4._0_1_ = 1;
  if (pvVar2 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar2,4,*(int *)((int)pvVar2 + -4),FUN_007016a0);
    FUN_00401f20((int)pvVar2 + -4);
  }
  puVar1 = (undefined4 *)in_ECX[0x43];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007e2650();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007e5810(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x128,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007e5460();
  }
  local_4 = 0xffffffff;
  FUN_007e2490(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



int FUN_007e5890(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x34) == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007e2370(iVar2,param_1,0x17e,1,0,0);
    }
    local_4 = 0xffffffff;
    puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
    puVar4[2] = uVar3;
    puVar4[1] = 0;
    *puVar4 = *(undefined4 *)(in_ECX + 0x2c);
    if (*(int *)(in_ECX + 0x2c) == 0) {
      *(undefined4 **)(in_ECX + 0x30) = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar4;
    }
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    *(undefined4 **)(in_ECX + 0x2c) = puVar4;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}



void FUN_007e5950(byte param_1)

{
  FUN_007e56f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007e5970(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1;
  FUN_007e28e0(param_1);
  param_1 = FUN_0070f910(DAT_00b46058);
  uVar2 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar2) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar2);
  }
  FUN_0042bb90(uVar2,&param_1);
  return;
}



void FUN_007e59c0(int *param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  LONG LVar9;
  int unaff_EBX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009a9f28;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    for (puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))(uVar3); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fd54) {
        piVar8 = (int *)FUN_00707530(4);
        if ((piVar8 != (int *)0x0) &&
           (puVar4 = (undefined4 *)(**(code **)(*piVar8 + 4))(), puVar4 != (undefined4 *)0x0)) {
          while (puVar4 != &DAT_00b4618c) {
            puVar4 = (undefined4 *)puVar4[1];
            if (puVar4 == (undefined4 *)0x0) {
              *unaff_FS_OFFSET = local_c;
              return;
            }
          }
          iVar5 = FUN_00707530(2);
          if ((iVar5 == 0) || (cVar2 = FUN_008aa350(&DAT_00b3fa90), cVar2 == '\0')) {
            param_1 = piVar1;
            InterlockedIncrement(piVar1 + 1);
            uStack_4 = 0;
            FUN_004b3680(&param_1);
            uStack_4 = 0xffffffff;
            LVar9 = InterlockedDecrement(piVar1 + 1);
            if (LVar9 == 0) {
              (**(code **)*piVar1)(1);
              *unaff_FS_OFFSET = unaff_EBX;
              return;
            }
          }
        }
        goto LAB_007e5b38;
      }
    }
    iVar5 = (**(code **)(*piVar1 + 8))();
    if ((iVar5 != 0) && (iVar6 = _strncmp(*(char **)(iVar5 + 8),"Bip",3), iVar6 != 0)) {
      uVar3 = 0;
      if (*(short *)(iVar5 + 0xb6) != 0) {
        if (*(short *)(iVar5 + 0xb6) != 0) goto LAB_007e5b19;
        uVar7 = 0;
        while( true ) {
          FUN_007e59c0(uVar7);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar5 + 0xb6) <= uVar3) break;
LAB_007e5b19:
          uVar7 = *(undefined4 *)(*(int *)(iVar5 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
LAB_007e5b38:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e5b50(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar2 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0x2a];
    iVar4 = (**(code **)(*param_1 + 8))(uVar3);
    if (iVar1 != 0) {
      if (iVar4 == 0) goto LAB_007e5c16;
      param_1 = piVar2;
      InterlockedIncrement(piVar2 + 1);
      uStack_4 = 0;
      FUN_004b3680(&param_1);
      uStack_4 = 0xffffffff;
      LVar5 = InterlockedDecrement(piVar2 + 1);
      if (LVar5 == 0) {
        (**(code **)*piVar2)(1);
      }
    }
    if (iVar4 != 0) {
      uVar3 = 0;
      if (*(short *)(iVar4 + 0xb6) != 0) {
        if (*(short *)(iVar4 + 0xb6) != 0) goto LAB_007e5bf7;
        uVar6 = 0;
        while( true ) {
          FUN_007e5b50(uVar6);
          uVar3 = uVar3 + 1;
          if (*(ushort *)(iVar4 + 0xb6) <= uVar3) break;
LAB_007e5bf7:
          uVar6 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar3 * 4);
        }
      }
    }
  }
LAB_007e5c16:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e5c30(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c9ba8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00477ef0(uVar3);
  puVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x70);
  if (iVar1 == 0) {
    FUN_007e59c0(param_1);
  }
  else if (iVar1 == 1) {
    FUN_007e5b50(param_1);
  }
  else if (iVar1 == 2) {
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
    local_4 = 0;
    FUN_004b3680(&param_1);
    local_4 = 0xffffffff;
    if (puVar2 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar2 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  FUN_004784a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_007e5d00(void)

{
  undefined4 local_8;
  
  local_8 = (undefined4)(longlong)ROUND(DAT_00b44f04);
  return local_8;
}



void FUN_007e5d30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf87e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9202c;
  local_4 = 3;
  piVar5 = in_ECX + 0x25;
  iVar4 = 0x14;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iStack_14 = 2;
  piVar5 = in_ECX + 0x4d;
  do {
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iStack_14 = iStack_14 + -1;
  } while (iStack_14 != 0);
  in_ECX[0x57] = 0;
  FUN_00401f20(in_ECX[0x56],uVar2);
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x4d,4,9,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,0x28,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,3,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e5eb0(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    piVar1 = (int *)(in_ECX + 0x94);
    iVar2 = 0x14;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x5c))();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  piVar1 = (int *)(in_ECX + 0x134);
  iVar2 = 2;
  do {
    if ((int *)*piVar1 != (int *)0x0) {
      (**(code **)(*(int *)*piVar1 + 0x44))();
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0077a4a0();
  return;
}



void FUN_007e5f10(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,9,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("ShadowProjTransform",0x10000007,0,0xd,1,&DAT_00a2f7ec,0x10,4,&DAT_00b44ef8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fogparam",0x10000007,0,0xf,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46638,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fogcolor",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46648,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("grouped constants",0x10000009,0,0,9,&DAT_00a2f7ec,0x90,4,&DAT_00b46070,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("instance data",0x10000009,0,0x14,(uint)*(ushort *)(in_ECX + 0x160),&DAT_00a2f7ec,
               (uint)*(ushort *)(in_ECX + 0x160) << 4,4,*(undefined4 *)(in_ECX + 0x158),0);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x38))("instance data");
    *(undefined4 *)(in_ECX + 0x15c) = uVar4;
  }
  puVar1 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("point light color",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x164,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("point light data",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x174,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("alpha test ref",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x184,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e61c0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  int in_ECX;
  float unaff_retaddr;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  float local_8;
  undefined4 uStack_4;
  
  FUN_007ed2a0();
  piVar3 = (int *)FUN_00405ad0(&param_1);
  puVar2 = param_1;
  iVar1 = *piVar3;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar2 != (undefined4 *)0x0)) {
    (**(code **)*puVar2)(1);
  }
  local_10 = *(undefined4 *)(iVar1 + 0xec);
  local_c = *(undefined4 *)(iVar1 + 0xf0);
  local_8 = *(float *)(iVar1 + 0xf4);
  *(undefined4 *)(in_ECX + 0x164) = local_10;
  uStack_4 = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x168) = local_c;
  *(float *)(in_ECX + 0x16c) = local_8;
  *(undefined4 *)(in_ECX + 0x170) = 0x3f800000;
  uStack_28 = *(undefined4 *)(iVar1 + 0x88);
  uStack_24 = *(undefined4 *)(iVar1 + 0x8c);
  uStack_20 = *(undefined4 *)(iVar1 + 0x90);
  D3DXVec3TransformCoord(auStack_1c,&uStack_28,param_2);
  local_8 = *(float *)(iVar1 + 0xf8);
  if (param_1 != (undefined4 *)0x197) {
    local_8 = local_8 / unaff_retaddr;
  }
  _DAT_00b460a0 = uStack_28;
  _DAT_00b460a4 = uStack_24;
  _DAT_00b460a8 = uStack_20;
  _DAT_00b460ac = local_8;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e6310(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  LONG LVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  undefined4 *puVar11;
  float *pfVar12;
  undefined4 **ppuVar13;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 *apuStack_13c [27];
  float local_d0 [29];
  undefined4 auStack_5c [3];
  undefined1 local_50 [76];
  
  local_d0[0xe] = 0.0;
  local_d0[0xd] = 0.0;
  local_d0[0xc] = 0.0;
  local_d0[0xb] = 0.0;
  local_d0[9] = 0.0;
  local_d0[8] = 0.0;
  local_d0[7] = 0.0;
  local_d0[6] = 0.0;
  local_d0[4] = 0.0;
  local_d0[3] = 0.0;
  local_d0[2] = 0.0;
  local_d0[1] = 0.0;
  local_d0[0xf] = 1.0;
  local_d0[10] = 1.0;
  local_d0[5] = 1.0;
  local_d0[0] = 1.0;
  apuStack_13c[0x12] = (undefined4 *)0x3f800000;
  apuStack_13c[0xd] = (undefined4 *)0x3f800000;
  apuStack_13c[8] = (undefined4 *)0x3f800000;
  apuStack_13c[3] = (undefined4 *)0x3f800000;
  apuStack_13c[0x11] = (undefined4 *)0x0;
  apuStack_13c[0x10] = (undefined4 *)0x0;
  apuStack_13c[0xf] = (undefined4 *)0x0;
  apuStack_13c[0xe] = (undefined4 *)0x0;
  apuStack_13c[0xc] = (undefined4 *)0x0;
  apuStack_13c[0xb] = (undefined4 *)0x0;
  apuStack_13c[10] = (undefined4 *)0x0;
  apuStack_13c[9] = (undefined4 *)0x0;
  apuStack_13c[7] = (undefined4 *)0x0;
  apuStack_13c[6] = (undefined4 *)0x0;
  apuStack_13c[5] = (undefined4 *)0x0;
  apuStack_13c[4] = (undefined4 *)0x0;
  if (param_1 == 0) {
    FUN_00761ae0(local_d0,param_2,param_2 + 0x24,*(undefined4 *)(param_2 + 0x30));
  }
  else {
    pfVar10 = *(float **)(param_1 + 0x28);
    pfVar12 = local_d0;
    for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *pfVar12 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar12 = pfVar12 + 1;
    }
  }
  local_d0[0xc] = DAT_00b3f92c + local_d0[0xc];
  local_d0[0xd] = DAT_00b3f930 + local_d0[0xd];
  local_d0[0xe] = DAT_00b3f934 + local_d0[0xe];
  pfVar10 = (float *)(**(int **)(DAT_00b42eb8 + 0xc) + 0x10);
  pfVar12 = local_d0 + 0x10;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar12 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar12 = pfVar12 + 1;
  }
  D3DXMatrixMultiply(local_50,local_d0,local_d0 + 0x10);
  puVar11 = auStack_5c;
  ppuVar13 = apuStack_13c;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *ppuVar13 = (undefined4 *)*puVar11;
    puVar11 = puVar11 + 1;
    ppuVar13 = ppuVar13 + 1;
  }
  D3DXMatrixTranspose(apuStack_13c,apuStack_13c);
  _DAT_00b46070 = uStack_144;
  _DAT_00b46074 = uStack_140;
  _DAT_00b46078 = apuStack_13c[0];
  _DAT_00b4607c = apuStack_13c[1];
  _DAT_00b46080 = apuStack_13c[2];
  _DAT_00b46084 = apuStack_13c[3];
  _DAT_00b46088 = apuStack_13c[4];
  _DAT_00b4608c = apuStack_13c[5];
  _DAT_00b460a0 = apuStack_13c[6];
  _DAT_00b460a4 = apuStack_13c[7];
  _DAT_00b460a8 = apuStack_13c[8];
  _DAT_00b460ac = apuStack_13c[9];
  _DAT_00b460d0 = apuStack_13c[10];
  _DAT_00b460d4 = apuStack_13c[0xb];
  _DAT_00b460d8 = apuStack_13c[0xc];
  _DAT_00b460dc = apuStack_13c[0xd];
  piVar7 = (int *)FUN_00405ad0(apuStack_13c + 0x12);
  puVar11 = apuStack_13c[0x12];
  iVar9 = *piVar7;
  if (((apuStack_13c[0x12] != (undefined4 *)0x0) &&
      (LVar8 = InterlockedDecrement(apuStack_13c[0x12] + 1), LVar8 == 0)) &&
     (puVar11 != (undefined4 *)0x0)) {
    (**(code **)*puVar11)(1);
  }
  uVar1 = *(undefined4 *)(iVar9 + 0xf0);
  uVar2 = *(undefined4 *)(iVar9 + 0xf4);
  uVar3 = *(undefined4 *)(iVar9 + 0x88);
  uVar4 = *(undefined4 *)(iVar9 + 0x8c);
  uVar5 = *(undefined4 *)(iVar9 + 0x90);
  uVar6 = *(undefined4 *)(iVar9 + 0xf8);
  *(undefined4 *)(in_ECX + 0x164) = *(undefined4 *)(iVar9 + 0xec);
  *(undefined4 *)(in_ECX + 0x168) = uVar1;
  *(undefined4 *)(in_ECX + 0x16c) = uVar2;
  *(undefined4 *)(in_ECX + 0x174) = uVar3;
  *(undefined4 *)(in_ECX + 0x170) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x178) = uVar4;
  *(undefined4 *)(in_ECX + 0x17c) = uVar5;
  *(undefined4 *)(in_ECX + 0x180) = uVar6;
  return;
}



void FUN_007e6a90(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int *piVar2;
  int in_ECX;
  short sVar3;
  
  piVar2 = *(int **)(param_2 + 0x9c);
  uVar1 = *(ushort *)(piVar2 + 3);
  _memcpy(*(void **)(in_ECX + 0x158),(void *)piVar2[4],(uint)uVar1 << 4);
  if ((uint)*(ushort *)((int)piVar2 + 0xe) == (uint)uVar1) {
    sVar3 = (short)(*(int **)(*piVar2 + 0xb4))[0x10];
  }
  else {
    sVar3 = *(short *)(piVar2[1] + 0x34) * *(ushort *)((int)piVar2 + 0xe);
  }
  (**(code **)(**(int **)(*piVar2 + 0xb4) + 0x58))(sVar3);
  if (*(int *)(in_ECX + 0x15c) != 0) {
    *(uint *)(*(int *)(in_ECX + 0x15c) + 0x20) = (uint)*(ushort *)((int)piVar2 + 0xe);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_007e6b10(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  char **ppcVar6;
  int iVar7;
  int *local_11d4;
  char **local_11d0;
  int local_11cc;
  char *local_11c8;
  undefined4 local_11c4;
  undefined1 local_11c0 [68];
  char *local_117c;
  undefined4 local_1178;
  undefined1 local_1174 [68];
  char *local_1130;
  char *local_112c;
  undefined4 local_1128;
  undefined4 local_1124;
  undefined1 local_1120 [60];
  char *local_10e4;
  char *local_10e0;
  undefined4 local_10dc;
  undefined4 local_10d8;
  undefined1 local_10d4 [60];
  char *local_1098;
  char *local_1094;
  undefined4 local_1090;
  char *local_108c;
  undefined1 *local_1088;
  undefined4 local_1084;
  undefined1 local_1080 [52];
  char *local_104c;
  char *local_1048;
  undefined4 local_1044;
  char *local_1040;
  undefined1 *local_103c;
  undefined4 local_1038;
  undefined1 local_1034 [52];
  char *local_1000;
  char *local_ffc;
  undefined4 local_ff8;
  char *local_ff4;
  undefined1 *local_ff0;
  char *local_fec;
  undefined *local_fe8;
  char *local_fe4;
  undefined *local_fe0;
  char *local_fdc;
  undefined *local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined4 local_fc4;
  undefined4 local_fc0;
  undefined4 local_fbc;
  undefined4 local_fb8;
  char *local_fb4;
  char *local_fb0;
  undefined4 local_fac;
  char *local_fa8;
  undefined1 *local_fa4;
  char *local_fa0;
  undefined *local_f9c;
  char *local_f98;
  undefined *local_f94;
  char *local_f90;
  undefined *local_f8c;
  undefined4 local_f88;
  undefined4 local_f84;
  undefined4 local_f80;
  undefined4 local_f7c;
  undefined4 local_f78;
  undefined4 local_f74;
  undefined4 local_f70;
  undefined4 local_f6c;
  char *local_f68;
  char *local_f64;
  undefined4 local_f60;
  char *local_f5c;
  undefined1 *local_f58;
  char *local_f54;
  undefined *local_f50;
  char *local_f4c;
  undefined *local_f48;
  char *local_f44;
  undefined *local_f40;
  undefined4 local_f3c;
  undefined4 local_f38;
  undefined4 local_f34;
  undefined4 local_f30;
  undefined4 local_f2c;
  undefined4 local_f28;
  undefined4 local_f24;
  undefined4 local_f20;
  char *local_f1c;
  undefined4 local_f18;
  undefined1 local_f14 [68];
  char *local_ed0;
  char *local_ecc;
  undefined1 *local_ec8;
  undefined4 local_ec4;
  undefined1 local_ec0 [60];
  char *local_e84;
  char *local_e80;
  undefined1 *local_e7c;
  undefined4 local_e78;
  undefined1 local_e74 [60];
  char *local_e38;
  char *local_e34;
  undefined1 *local_e30;
  char *local_e2c;
  undefined1 *local_e28;
  undefined4 local_e24;
  undefined1 local_e20 [52];
  char *local_dec;
  char *local_de8;
  undefined1 *local_de4;
  undefined4 local_de0;
  undefined1 local_ddc [60];
  char *local_da0;
  char *local_d9c;
  undefined1 *local_d98;
  char *local_d94;
  undefined1 *local_d90;
  undefined4 local_d8c;
  undefined1 local_d88 [52];
  char *local_d54;
  char *local_d50;
  undefined1 *local_d4c;
  char *local_d48;
  undefined1 *local_d44;
  undefined4 local_d40;
  undefined1 local_d3c [52];
  char *local_d08;
  char *local_d04;
  undefined1 *local_d00;
  char *local_cfc;
  undefined1 *local_cf8;
  char *local_cf4;
  undefined1 *local_cf0;
  undefined4 local_cec;
  undefined1 local_ce8 [44];
  char *local_cbc;
  char *local_cb8;
  undefined1 *local_cb4;
  undefined4 local_cb0;
  undefined1 local_cac [60];
  char *local_c70;
  char *local_c6c;
  undefined1 *local_c68;
  char *local_c64;
  undefined1 *local_c60;
  undefined4 local_c5c;
  undefined1 local_c58 [52];
  char *local_c24;
  char *local_c20;
  undefined1 *local_c1c;
  char *local_c18;
  undefined1 *local_c14;
  undefined4 local_c10;
  undefined1 local_c0c [52];
  char *local_bd8;
  char *local_bd4;
  undefined1 *local_bd0;
  char *local_bcc;
  undefined1 *local_bc8;
  char *local_bc4;
  undefined1 *local_bc0;
  undefined4 local_bbc;
  undefined1 local_bb8 [44];
  char *local_b8c;
  char *local_b88;
  undefined1 *local_b84;
  char *local_b80;
  undefined1 *local_b7c;
  undefined4 local_b78;
  undefined1 local_b74 [52];
  char *local_b40;
  char *local_b3c;
  undefined1 *local_b38;
  char *local_b34;
  undefined1 *local_b30;
  char *local_b2c;
  undefined1 *local_b28;
  undefined4 local_b24;
  undefined1 local_b20 [44];
  char *local_af4;
  char *local_af0;
  undefined1 *local_aec;
  char *local_ae8;
  undefined1 *local_ae4;
  char *local_ae0;
  undefined1 *local_adc;
  undefined4 local_ad8;
  undefined1 local_ad4 [44];
  char *local_aa8;
  char *local_aa4;
  undefined1 *local_aa0;
  char *local_a9c;
  undefined1 *local_a98;
  char *local_a94;
  undefined1 *local_a90;
  char *local_a8c;
  undefined1 *local_a88;
  undefined4 local_a84;
  undefined4 local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_a74;
  undefined4 local_a70;
  undefined4 local_a6c;
  undefined4 local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  char *local_a5c;
  char *local_a58;
  undefined1 *local_a54;
  undefined4 local_a50;
  undefined1 local_a4c [60];
  char *local_a10;
  char *local_a0c;
  undefined1 *local_a08;
  char *local_a04;
  undefined1 *local_a00;
  undefined4 local_9fc;
  undefined1 local_9f8 [52];
  char *local_9c4;
  char *local_9c0;
  undefined1 *local_9bc;
  char *local_9b8;
  undefined1 *local_9b4;
  undefined4 local_9b0;
  undefined1 local_9ac [52];
  char *local_978;
  char *local_974;
  undefined1 *local_970;
  char *local_96c;
  undefined1 *local_968;
  char *local_964;
  undefined1 *local_960;
  undefined4 local_95c;
  undefined1 local_958 [44];
  char *local_92c;
  char *local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined1 local_91c [60];
  char *local_8e0;
  char *local_8dc;
  undefined4 local_8d8;
  char *local_8d4;
  undefined1 *local_8d0;
  undefined4 local_8cc;
  undefined1 local_8c8 [52];
  char *local_894;
  char *local_890;
  undefined4 local_88c;
  char *local_888;
  undefined1 *local_884;
  undefined4 local_880;
  undefined1 local_87c [52];
  char *local_848;
  char *local_844;
  undefined4 local_840;
  char *local_83c;
  undefined1 *local_838;
  char *local_834;
  undefined1 *local_830;
  undefined4 local_82c;
  undefined1 local_828 [44];
  char *local_7fc;
  char *local_7f8;
  undefined4 local_7f4;
  char *local_7f0;
  undefined1 *local_7ec;
  undefined4 local_7e8;
  undefined1 local_7e4 [52];
  char *local_7b0;
  char *local_7ac;
  undefined4 local_7a8;
  char *local_7a4;
  undefined1 *local_7a0;
  char *local_79c;
  undefined1 *local_798;
  undefined4 local_794;
  undefined1 local_790 [44];
  char *local_764;
  char *local_760;
  undefined4 local_75c;
  char *local_758;
  undefined1 *local_754;
  char *local_750;
  undefined1 *local_74c;
  undefined4 local_748;
  undefined1 local_744 [44];
  char *local_718;
  char *local_714;
  undefined4 local_710;
  char *local_70c;
  undefined1 *local_708;
  char *local_704;
  undefined1 *local_700;
  char *local_6fc;
  undefined1 *local_6f8;
  undefined4 local_6f4;
  undefined4 local_6f0;
  undefined4 local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  undefined4 local_6dc;
  undefined4 local_6d8;
  undefined4 local_6d4;
  undefined4 local_6d0;
  char *local_6cc;
  char *local_6c8;
  undefined4 local_6c4;
  char *local_6c0;
  undefined1 *local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4 [52];
  char *local_680;
  char *local_67c;
  undefined4 local_678;
  char *local_674;
  undefined1 *local_670;
  char *local_66c;
  undefined1 *local_668;
  undefined4 local_664;
  undefined1 local_660 [44];
  char *local_634;
  char *local_630;
  undefined4 local_62c;
  char *local_628;
  undefined1 *local_624;
  char *local_620;
  undefined1 *local_61c;
  undefined4 local_618;
  undefined1 local_614 [44];
  char *local_5e8;
  char *local_5e4;
  undefined4 local_5e0;
  char *local_5dc;
  undefined1 *local_5d8;
  char *local_5d4;
  undefined1 *local_5d0;
  char *local_5cc;
  undefined1 *local_5c8;
  undefined4 local_5c4;
  undefined4 local_5c0;
  undefined4 local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  undefined4 local_5ac;
  undefined4 local_5a8;
  undefined4 local_5a4;
  undefined4 local_5a0;
  char *local_59c;
  char *local_598;
  undefined4 local_594;
  char *local_590;
  undefined1 *local_58c;
  char *local_588;
  undefined1 *local_584;
  undefined4 local_580;
  undefined1 local_57c [44];
  char *local_550;
  char *local_54c;
  undefined4 local_548;
  char *local_544;
  undefined1 *local_540;
  char *local_53c;
  undefined1 *local_538;
  char *local_534;
  undefined1 *local_530;
  undefined4 local_52c;
  undefined4 local_528;
  undefined4 local_524;
  undefined4 local_520;
  undefined4 local_51c;
  undefined4 local_518;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 local_508;
  char *local_504;
  char *local_500;
  undefined4 local_4fc;
  char *local_4f8;
  undefined1 *local_4f4;
  char *local_4f0;
  undefined1 *local_4ec;
  char *local_4e8;
  undefined1 *local_4e4;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  undefined4 local_4bc;
  char *local_4b8;
  char *local_4b4;
  undefined4 local_4b0;
  char *local_4ac;
  undefined1 *local_4a8;
  char *local_4a4;
  undefined1 *local_4a0;
  char *local_49c;
  undefined1 *local_498;
  char *local_494;
  undefined1 *local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 local_484;
  undefined4 local_480;
  undefined4 local_47c;
  undefined4 local_478;
  undefined4 local_474;
  undefined4 local_470;
  char *local_46c;
  char *local_468;
  undefined4 local_464;
  char *local_460;
  undefined1 *local_45c;
  undefined4 local_458;
  undefined1 local_454 [52];
  char *local_420;
  char *local_41c;
  undefined4 local_418;
  char *local_414;
  undefined1 *local_410;
  char *local_40c;
  undefined1 *local_408;
  undefined4 local_404;
  undefined1 local_400 [44];
  char *local_3d4;
  char *local_3d0;
  undefined4 local_3cc;
  char *local_3c8;
  undefined1 *local_3c4;
  char *local_3c0;
  undefined1 *local_3bc;
  undefined4 local_3b8;
  undefined1 local_3b4 [44];
  char *local_388;
  char *local_384;
  undefined4 local_380;
  char *local_37c;
  undefined1 *local_378;
  char *local_374;
  undefined1 *local_370;
  char *local_36c;
  undefined1 *local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  char *local_33c;
  char *local_338;
  undefined4 local_334;
  char *local_330;
  undefined1 *local_32c;
  undefined4 local_328;
  undefined1 local_324 [52];
  char *local_2f0;
  char *local_2ec;
  undefined4 local_2e8;
  char *local_2e4;
  undefined1 *local_2e0;
  char *local_2dc;
  undefined1 *local_2d8;
  undefined4 local_2d4;
  undefined1 local_2d0 [44];
  char *local_2a4;
  char *local_2a0;
  undefined4 local_29c;
  char *local_298;
  undefined1 *local_294;
  char *local_290;
  undefined1 *local_28c;
  undefined4 local_288;
  undefined1 local_284 [44];
  char *local_258;
  char *local_254;
  undefined4 local_250;
  char *local_24c;
  undefined1 *local_248;
  char *local_244;
  undefined1 *local_240;
  char *local_23c;
  undefined1 *local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_11d4;
  local_f1c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_f18 = 0;
  _memset(local_f14,0,0x44);
  local_ed0 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_ecc = "VERTLIT";
  local_ec8 = &DAT_00a2f7ec;
  local_ec4 = 0;
  _memset(local_ec0,0,0x3c);
  local_e84 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_e80 = "FIT_TO_SLOPE";
  local_e7c = &DAT_00a2f7ec;
  local_e78 = 0;
  _memset(local_e74,0,0x3c);
  local_e38 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_e34 = "VERTLIT";
  local_e30 = &DAT_00a2f7ec;
  local_e2c = "FIT_TO_SLOPE";
  local_e28 = &DAT_00a2f7ec;
  local_e24 = 0;
  _memset(local_e20,0,0x34);
  local_dec = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_de8 = "PTLIGHT";
  local_de4 = &DAT_00a2f7ec;
  local_de0 = 0;
  _memset(local_ddc,0,0x3c);
  local_da0 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_d9c = "PTLIGHT";
  local_d98 = &DAT_00a2f7ec;
  local_d94 = "VERTLIT";
  local_d90 = &DAT_00a2f7ec;
  local_d8c = 0;
  _memset(local_d88,0,0x34);
  local_d54 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_d50 = "PTLIGHT";
  local_d4c = &DAT_00a2f7ec;
  local_d48 = "FIT_TO_SLOPE";
  local_d44 = &DAT_00a2f7ec;
  local_d40 = 0;
  _memset(local_d3c,0,0x34);
  local_d08 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_d04 = "PTLIGHT";
  local_d00 = &DAT_00a2f7ec;
  local_cfc = "VERTLIT";
  local_cf8 = &DAT_00a2f7ec;
  local_cf4 = "FIT_TO_SLOPE";
  local_cf0 = &DAT_00a2f7ec;
  local_cec = 0;
  _memset(local_ce8,0,0x2c);
  local_cbc = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_cb8 = "PROJ_SHADOW";
  local_cb4 = &DAT_00a2f7ec;
  local_cb0 = 0;
  _memset(local_cac,0,0x3c);
  local_c70 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_c6c = "VERTLIT";
  local_c68 = &DAT_00a2f7ec;
  local_c64 = "PROJ_SHADOW";
  local_c60 = &DAT_00a2f7ec;
  local_c5c = 0;
  _memset(local_c58,0,0x34);
  local_c24 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_c20 = "FIT_TO_SLOPE";
  local_c1c = &DAT_00a2f7ec;
  local_c18 = "PROJ_SHADOW";
  local_c14 = &DAT_00a2f7ec;
  local_c10 = 0;
  _memset(local_c0c,0,0x34);
  local_bd8 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_bd4 = "VERTLIT";
  local_bd0 = &DAT_00a2f7ec;
  local_bcc = "FIT_TO_SLOPE";
  local_bc8 = &DAT_00a2f7ec;
  local_bc4 = "PROJ_SHADOW";
  local_bc0 = &DAT_00a2f7ec;
  local_bbc = 0;
  _memset(local_bb8,0,0x2c);
  local_b8c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_b88 = "PTLIGHT";
  local_b84 = &DAT_00a2f7ec;
  local_b80 = "PROJ_SHADOW";
  local_b7c = &DAT_00a2f7ec;
  local_b78 = 0;
  _memset(local_b74,0,0x34);
  local_b40 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_b3c = "PTLIGHT";
  local_b38 = &DAT_00a2f7ec;
  local_b34 = "VERTLIT";
  local_b30 = &DAT_00a2f7ec;
  local_b2c = "PROJ_SHADOW";
  local_b28 = &DAT_00a2f7ec;
  local_b24 = 0;
  _memset(local_b20,0,0x2c);
  local_af4 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_af0 = "PTLIGHT";
  local_aec = &DAT_00a2f7ec;
  local_ae8 = "FIT_TO_SLOPE";
  local_ae4 = &DAT_00a2f7ec;
  local_ae0 = "PROJ_SHADOW";
  local_adc = &DAT_00a2f7ec;
  local_ad8 = 0;
  _memset(local_ad4,0,0x2c);
  local_aa8 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_aa4 = "PTLIGHT";
  local_aa0 = &DAT_00a2f7ec;
  local_a9c = "VERTLIT";
  local_a98 = &DAT_00a2f7ec;
  local_a94 = "FIT_TO_SLOPE";
  local_a90 = &DAT_00a2f7ec;
  local_a8c = "PROJ_SHADOW";
  local_a88 = &DAT_00a2f7ec;
  local_a84 = 0;
  local_a80 = 0;
  local_a7c = 0;
  local_a78 = 0;
  local_a74 = 0;
  local_a70 = 0;
  local_a6c = 0;
  local_a68 = 0;
  local_a64 = 0;
  local_a60 = 0;
  local_a5c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_a58 = "BILLBOARD";
  local_a54 = &DAT_00a2f7ec;
  local_a50 = 0;
  _memset(local_a4c,0,0x3c);
  local_a10 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_a0c = "BILLBOARD";
  local_a08 = &DAT_00a2f7ec;
  local_a04 = "FIT_TO_SLOPE";
  local_a00 = &DAT_00a2f7ec;
  local_9fc = 0;
  _memset(local_9f8,0,0x34);
  local_9c4 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_9c0 = "BILLBOARD";
  local_9bc = &DAT_00a2f7ec;
  local_9b8 = "PTLIGHT";
  local_9b4 = &DAT_00a2f7ec;
  local_9b0 = 0;
  _memset(local_9ac,0,0x34);
  local_978 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_974 = "BILLBOARD";
  local_970 = &DAT_00a2f7ec;
  local_96c = "PTLIGHT";
  local_968 = &DAT_00a2f7ec;
  local_964 = "FIT_TO_SLOPE";
  local_960 = &DAT_00a2f7ec;
  local_95c = 0;
  _memset(local_958,0,0x2c);
  local_92c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_928 = "VS_2_0";
  local_924 = 0;
  local_920 = 0;
  _memset(local_91c,0,0x3c);
  local_8e0 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_8dc = "VS_2_0";
  local_8d8 = 0;
  local_8d4 = "VERTLIT";
  local_8d0 = &DAT_00a2f7ec;
  local_8cc = 0;
  _memset(local_8c8,0,0x34);
  local_894 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_890 = "VS_2_0";
  local_88c = 0;
  local_888 = "FIT_TO_SLOPE";
  local_884 = &DAT_00a2f7ec;
  local_880 = 0;
  _memset(local_87c,0,0x34);
  local_848 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_844 = "VS_2_0";
  local_840 = 0;
  local_83c = "VERTLIT";
  local_838 = &DAT_00a2f7ec;
  local_834 = "FIT_TO_SLOPE";
  local_830 = &DAT_00a2f7ec;
  local_82c = 0;
  _memset(local_828,0,0x2c);
  local_7fc = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_7f8 = "VS_2_0";
  local_7f4 = 0;
  local_7f0 = "PTLIGHT";
  local_7ec = &DAT_00a2f7ec;
  local_7e8 = 0;
  _memset(local_7e4,0,0x34);
  local_7b0 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_7ac = "VS_2_0";
  local_7a8 = 0;
  local_7a4 = "PTLIGHT";
  local_7a0 = &DAT_00a2f7ec;
  local_79c = "VERTLIT";
  local_798 = &DAT_00a2f7ec;
  local_794 = 0;
  _memset(local_790,0,0x2c);
  local_764 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_760 = "VS_2_0";
  local_75c = 0;
  local_758 = "PTLIGHT";
  local_754 = &DAT_00a2f7ec;
  local_750 = "FIT_TO_SLOPE";
  local_74c = &DAT_00a2f7ec;
  local_748 = 0;
  _memset(local_744,0,0x2c);
  local_718 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_714 = "VS_2_0";
  local_710 = 0;
  local_70c = "PTLIGHT";
  local_708 = &DAT_00a2f7ec;
  local_704 = "VERTLIT";
  local_700 = &DAT_00a2f7ec;
  local_6fc = "FIT_TO_SLOPE";
  local_6f8 = &DAT_00a2f7ec;
  local_6f4 = 0;
  local_6f0 = 0;
  local_6ec = 0;
  local_6e8 = 0;
  local_6e4 = 0;
  local_6e0 = 0;
  local_6dc = 0;
  local_6d8 = 0;
  local_6d4 = 0;
  local_6d0 = 0;
  local_6cc = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_6c8 = "VS_2_0";
  local_6c4 = 0;
  local_6c0 = "PROJ_SHADOW";
  local_6bc = &DAT_00a2f7ec;
  local_6b8 = 0;
  _memset(local_6b4,0,0x34);
  local_680 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_67c = "VS_2_0";
  local_678 = 0;
  local_674 = "VERTLIT";
  local_670 = &DAT_00a2f7ec;
  local_66c = "PROJ_SHADOW";
  local_668 = &DAT_00a2f7ec;
  local_664 = 0;
  _memset(local_660,0,0x2c);
  local_634 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_630 = "VS_2_0";
  local_62c = 0;
  local_628 = "FIT_TO_SLOPE";
  local_624 = &DAT_00a2f7ec;
  local_620 = "PROJ_SHADOW";
  local_61c = &DAT_00a2f7ec;
  local_618 = 0;
  _memset(local_614,0,0x2c);
  local_5e8 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_5e4 = "VS_2_0";
  local_5e0 = 0;
  local_5dc = "VERTLIT";
  local_5d8 = &DAT_00a2f7ec;
  local_5d4 = "FIT_TO_SLOPE";
  local_5d0 = &DAT_00a2f7ec;
  local_5cc = "PROJ_SHADOW";
  local_5c8 = &DAT_00a2f7ec;
  local_5c4 = 0;
  local_5c0 = 0;
  local_5bc = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_5b0 = 0;
  local_5ac = 0;
  local_5a8 = 0;
  local_5a4 = 0;
  local_5a0 = 0;
  local_59c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_598 = "VS_2_0";
  local_594 = 0;
  local_590 = "PTLIGHT";
  local_58c = &DAT_00a2f7ec;
  local_588 = "PROJ_SHADOW";
  local_584 = &DAT_00a2f7ec;
  local_580 = 0;
  _memset(local_57c,0,0x2c);
  local_534 = "PROJ_SHADOW";
  local_4e8 = "PROJ_SHADOW";
  local_494 = "PROJ_SHADOW";
  local_550 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_54c = "VS_2_0";
  local_548 = 0;
  local_544 = "PTLIGHT";
  local_540 = &DAT_00a2f7ec;
  local_53c = "VERTLIT";
  local_538 = &DAT_00a2f7ec;
  local_530 = &DAT_00a2f7ec;
  local_52c = 0;
  local_528 = 0;
  local_524 = 0;
  local_520 = 0;
  local_51c = 0;
  local_518 = 0;
  local_514 = 0;
  local_510 = 0;
  local_50c = 0;
  local_508 = 0;
  local_504 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_500 = "VS_2_0";
  local_4fc = 0;
  local_4f8 = "PTLIGHT";
  local_4f4 = &DAT_00a2f7ec;
  local_4f0 = "FIT_TO_SLOPE";
  local_4ec = &DAT_00a2f7ec;
  local_4e4 = &DAT_00a2f7ec;
  local_4e0 = 0;
  local_4dc = 0;
  local_4d8 = 0;
  local_4d4 = 0;
  local_4d0 = 0;
  local_4cc = 0;
  local_4c8 = 0;
  local_4c4 = 0;
  local_4c0 = 0;
  local_4bc = 0;
  local_4b8 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_4b4 = "VS_2_0";
  local_4b0 = 0;
  local_4ac = "PTLIGHT";
  local_4a8 = &DAT_00a2f7ec;
  local_4a4 = "VERTLIT";
  local_4a0 = &DAT_00a2f7ec;
  local_49c = "FIT_TO_SLOPE";
  local_498 = &DAT_00a2f7ec;
  local_490 = &DAT_00a2f7ec;
  local_48c = 0;
  local_488 = 0;
  local_484 = 0;
  local_480 = 0;
  local_47c = 0;
  local_478 = 0;
  local_474 = 0;
  local_470 = 0;
  local_46c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_468 = "VS_2_0";
  local_464 = 0;
  local_460 = "BILLBOARD";
  local_45c = &DAT_00a2f7ec;
  local_458 = 0;
  _memset(local_454,0,0x34);
  local_420 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_41c = "VS_2_0";
  local_418 = 0;
  local_414 = "BILLBOARD";
  local_410 = &DAT_00a2f7ec;
  local_40c = "FIT_TO_SLOPE";
  local_408 = &DAT_00a2f7ec;
  local_404 = 0;
  _memset(local_400,0,0x2c);
  local_3d4 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_3d0 = "VS_2_0";
  local_3cc = 0;
  local_3c8 = "BILLBOARD";
  local_3c4 = &DAT_00a2f7ec;
  local_3c0 = "PTLIGHT";
  local_3bc = &DAT_00a2f7ec;
  local_3b8 = 0;
  _memset(local_3b4,0,0x2c);
  local_388 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_384 = "VS_2_0";
  local_380 = 0;
  local_37c = "BILLBOARD";
  local_378 = &DAT_00a2f7ec;
  local_374 = "PTLIGHT";
  local_370 = &DAT_00a2f7ec;
  local_36c = "FIT_TO_SLOPE";
  local_368 = &DAT_00a2f7ec;
  local_364 = 0;
  local_360 = 0;
  local_35c = 0;
  local_358 = 0;
  local_354 = 0;
  local_350 = 0;
  local_34c = 0;
  local_348 = 0;
  local_344 = 0;
  local_340 = 0;
  local_33c = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_338 = "VS_2_0";
  local_334 = 0;
  local_330 = "SHADOWMAP";
  local_32c = &DAT_00a2f7ec;
  local_328 = 0;
  _memset(local_324,0,0x34);
  local_2f0 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_2ec = "VS_2_0";
  local_2e8 = 0;
  local_2e4 = "SHADOWMAP";
  local_2e0 = &DAT_00a2f7ec;
  local_2dc = "FIT_TO_SLOPE";
  local_2d8 = &DAT_00a2f7ec;
  local_2d4 = 0;
  _memset(local_2d0,0,0x2c);
  local_2a4 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_2a0 = "VS_2_0";
  local_29c = 0;
  local_298 = "SHADOWMAP";
  local_294 = &DAT_00a2f7ec;
  local_290 = "BILLBOARD";
  local_28c = &DAT_00a2f7ec;
  local_288 = 0;
  _memset(local_284,0,0x2c);
  local_258 = "tallgrass\\1x\\v\\lowDetail.v.hlsl";
  local_254 = "VS_2_0";
  local_250 = 0;
  local_24c = "SHADOWMAP";
  local_248 = &DAT_00a2f7ec;
  local_244 = "BILLBOARD";
  local_240 = &DAT_00a2f7ec;
  local_23c = "FIT_TO_SLOPE";
  local_238 = &DAT_00a2f7ec;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_224 = 0;
  local_220 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_11c8 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_11c4 = 0;
  _memset(local_11c0,0,0x44);
  local_117c = "tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  local_1178 = 0;
  _memset(local_1174,0,0x44);
  local_1130 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_112c = "PS_2_0";
  local_1128 = 0;
  local_1124 = 0;
  _memset(local_1120,0,0x3c);
  local_10e4 = "tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  local_10e0 = "PS_2_0";
  local_10dc = 0;
  local_10d8 = 0;
  _memset(local_10d4,0,0x3c);
  local_1098 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_1094 = "PS_2_0";
  local_1090 = 0;
  local_108c = "PROJ_SHADOW";
  local_1088 = &DAT_00a2f7ec;
  local_1084 = 0;
  _memset(local_1080,0,0x34);
  local_104c = "tallgrass\\1x\\p\\highDetail_1pt.p.hlsl";
  local_1048 = "PS_2_0";
  local_1044 = 0;
  local_1040 = "PROJ_SHADOW";
  local_103c = &DAT_00a2f7ec;
  local_1038 = 0;
  _memset(local_1034,0,0x34);
  local_1000 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_ffc = "PS_2_0";
  local_ff8 = 0;
  local_ff4 = "SHADOWMAP";
  local_ff0 = &DAT_00a2f7ec;
  local_fec = "DEPTHBIAS";
  local_fe8 = &DAT_00a92190;
  local_fe4 = "SAMPLE";
  local_fe0 = &DAT_00a61fc8;
  local_fdc = "PASSES";
  local_fd8 = &DAT_00a61fc8;
  local_fd4 = 0;
  local_fd0 = 0;
  local_fcc = 0;
  local_fc8 = 0;
  local_fc4 = 0;
  local_fc0 = 0;
  local_fbc = 0;
  local_fb8 = 0;
  local_fb4 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_fb0 = "PS_2_0";
  local_fac = 0;
  local_fa8 = "SHADOWMAP";
  local_fa4 = &DAT_00a2f7ec;
  local_fa0 = "DEPTHBIAS";
  local_f9c = &DAT_00a92190;
  local_f98 = "SAMPLE";
  local_f94 = &DAT_00a61fa4;
  local_f90 = "PASSES";
  local_f8c = &DAT_00a61fc8;
  local_f88 = 0;
  local_f84 = 0;
  local_f80 = 0;
  local_f7c = 0;
  local_f78 = 0;
  local_f74 = 0;
  local_f70 = 0;
  local_f6c = 0;
  local_f68 = "tallgrass\\1x\\p\\highDetail.p.hlsl";
  local_f64 = "PS_2_0";
  local_f60 = 0;
  local_f5c = "SHADOWMAP";
  local_f58 = &DAT_00a2f7ec;
  local_f54 = "DEPTHBIAS";
  local_f50 = &DAT_00a92190;
  local_f4c = "SAMPLE";
  local_f48 = &DAT_00a61fa4;
  local_f44 = "PASSES";
  local_f40 = &DAT_00a61fbc;
  local_f3c = 0;
  local_f38 = 0;
  local_f34 = 0;
  local_f30 = 0;
  local_f2c = 0;
  local_f28 = 0;
  local_f24 = 0;
  local_f20 = 0;
  if (DAT_00b42f48 == 1) {
    local_11d4 = (int *)(local_11cc + 0x94);
    local_11d0 = (char **)0x0;
    puVar5 = &local_f18;
    do {
      FUN_00801030(puVar5[-1],local_108);
      _sprintf(local_20c,"GRASS1%03i.vso",local_11d0);
      puVar1 = (undefined4 *)FUN_008014e0(local_108,puVar5,"vs_1_1",local_20c,0,0);
      puVar3 = (undefined4 *)*local_11d4;
      if (puVar3 != puVar1) {
        if (((puVar3 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar3 + 1), LVar2 == 0)
            ) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *local_11d4 = (int)puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
      }
      local_11d4 = local_11d4 + 1;
      local_11d0 = (char **)((int)local_11d0 + 1);
      puVar5 = puVar5 + 0x13;
    } while ((int)local_11d0 < 0x14);
    local_11d4 = (int *)(local_11cc + 0x134);
    local_11d0 = (char **)0x0;
    puVar5 = &local_11c4;
    do {
      FUN_00801030(puVar5[-1],local_108);
      _sprintf(local_20c,"GRASS1%03i.pso",local_11d0);
      puVar1 = (undefined4 *)FUN_00801c90(local_108,puVar5,"ps_1_3",local_20c,0,0);
      puVar3 = (undefined4 *)*local_11d4;
      if (puVar3 != puVar1) {
        if (((puVar3 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar3 + 1), LVar2 == 0)
            ) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *local_11d4 = (int)puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
      }
      local_11d4 = local_11d4 + 1;
      local_11d0 = (char **)((int)local_11d0 + 1);
      puVar5 = puVar5 + 0x13;
    } while ((int)local_11d0 < 2);
  }
  else {
    local_11d4 = (int *)(local_11cc + 0xe4);
    local_11d0 = (char **)0x14;
    ppcVar6 = &local_928;
    do {
      FUN_00801030(ppcVar6[-1],local_108);
      _sprintf(local_20c,"GRASS2%03i.vso",local_11d0);
      puVar3 = (undefined4 *)FUN_008014e0(local_108,ppcVar6,"vs_2_0",local_20c,0,0);
      puVar5 = (undefined4 *)*local_11d4;
      if (puVar5 != puVar3) {
        if (((puVar5 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar5 + 1), LVar2 == 0)
            ) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
        *local_11d4 = (int)puVar3;
        if (puVar3 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar3 + 1);
        }
      }
      local_11d4 = local_11d4 + 1;
      local_11d0 = (char **)((int)local_11d0 + 1);
      ppcVar6 = ppcVar6 + 0x13;
    } while ((int)local_11d0 < 0x2c);
    ppcVar6 = &local_112c;
    local_11d4 = (int *)(local_11cc + 0x13c);
    iVar7 = 2;
    do {
      local_11d0 = ppcVar6;
      if ((iVar7 < 6) || (iVar4 = FUN_00404f00(0), 4 < iVar4)) {
        FUN_00801030(ppcVar6[-1],local_108);
        _sprintf(local_20c,"GRASS2%03i.pso",iVar7);
        puVar3 = (undefined4 *)FUN_00801c90(local_108,ppcVar6,"ps_2_0",local_20c,0,0);
        puVar5 = (undefined4 *)*local_11d4;
        if (puVar5 != puVar3) {
          if (((puVar5 != (undefined4 *)0x0) &&
              (LVar2 = InterlockedDecrement(puVar5 + 1), LVar2 == 0)) &&
             (puVar5 != (undefined4 *)0x0)) {
            (**(code **)*puVar5)(1);
          }
          *local_11d4 = (int)puVar3;
          if (puVar3 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar3 + 1);
          }
        }
      }
      local_11d4 = local_11d4 + 1;
      iVar7 = iVar7 + 1;
      ppcVar6 = local_11d0 + 0x13;
    } while (iVar7 < 9);
  }
  return;
}



void FUN_007e7f70(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf8f8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00772630(&local_14,uVar4);
  local_4 = 0;
  FUN_00801110(local_14,0,3,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x14),local_14);
  piVar5 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 1;
  if (local_14 != *piVar5) {
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    local_14 = *piVar5;
    if (local_14 != 0) {
      *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(local_14,1,1,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x14),local_14);
  piVar5 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 2;
  if (local_14 != *piVar5) {
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    local_14 = *piVar5;
    if (local_14 != 0) {
      *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(local_14,2,1,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x14),local_14);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (DAT_00b42f48 < 2) {
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    uVar8 = 0;
    uVar6 = 0xf;
LAB_007e81d9:
    FUN_00772cd0(uVar6,uVar8,0);
  }
  else {
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xf,1,0);
    iVar1 = *(int *)(in_ECX + 0x7c);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x19,5,0);
    iVar1 = *(int *)(in_ECX + 0x7c);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x18,10,0);
    if (DAT_00b43070 != '\0') {
      iVar1 = *(int *)(in_ECX + 0x7c);
      if (*(int *)(iVar1 + 0x30) == 0) {
        uVar6 = FUN_00772df0();
        *(undefined4 *)(iVar1 + 0x30) = uVar6;
      }
      FUN_00772cd0(0x1b,1,0);
      iVar1 = *(int *)(in_ECX + 0x7c);
      if (*(int *)(iVar1 + 0x30) == 0) {
        uVar6 = FUN_00772df0();
        *(undefined4 *)(iVar1 + 0x30) = uVar6;
      }
      FUN_00772cd0(0x13,5,0);
      iVar1 = *(int *)(in_ECX + 0x7c);
      if (*(int *)(iVar1 + 0x30) == 0) {
        uVar6 = FUN_00772df0();
        *(undefined4 *)(iVar1 + 0x30) = uVar6;
      }
      uVar8 = 6;
      uVar6 = 0x14;
      goto LAB_007e81d9;
    }
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(7,1,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x17,4,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0xe,1,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0xa8,7,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x1c,0,0);
  iVar1 = *(int *)(in_ECX + 0x7c);
  puVar2 = *(undefined4 **)(in_ECX + 0x94);
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  puVar2 = *(undefined4 **)(in_ECX + 0x134);
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  piVar5 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 3;
  if (local_14 != *piVar5) {
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    local_14 = *piVar5;
    if (local_14 != 0) {
      *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(local_14,0,3,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),local_14);
  if (DAT_00b42f48 < 2) {
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_14,1,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),local_14);
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    uVar8 = 3;
    uVar6 = 2;
  }
  else {
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_14,1,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),local_14);
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_14,2,1,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),local_14);
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    uVar8 = 1;
    uVar6 = 3;
  }
  FUN_00801110(local_14,uVar6,uVar8,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x80) + 0x14),local_14);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (DAT_00b42f48 < 2) {
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    uVar8 = 0;
    uVar6 = 0xf;
  }
  else {
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xf,1,0);
    iVar1 = *(int *)(in_ECX + 0x80);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x19,5,0);
    iVar1 = *(int *)(in_ECX + 0x80);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x18,10,0);
    if (DAT_00b43070 == '\0') goto LAB_007e8746;
    iVar1 = *(int *)(in_ECX + 0x80);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar1 = *(int *)(in_ECX + 0x80);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x13,5,0);
    iVar1 = *(int *)(in_ECX + 0x80);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    uVar8 = 6;
    uVar6 = 0x14;
  }
  FUN_00772cd0(uVar6,uVar8,0);
LAB_007e8746:
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(7,1,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x17,4,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0xe,1,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0xa8,7,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (*(int *)(iVar1 + 0x30) == 0) {
    uVar6 = FUN_00772df0();
    *(undefined4 *)(iVar1 + 0x30) = uVar6;
  }
  FUN_00772cd0(0x1c,0,0);
  iVar1 = *(int *)(in_ECX + 0x80);
  puVar2 = *(undefined4 **)(in_ECX + 0xa4);
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x80);
  puVar2 = *(undefined4 **)(in_ECX + 0x138);
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (1 < DAT_00b42f48) {
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 0;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_14,0,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x84) + 0x14),local_14);
    piVar5 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_14 != *piVar5) {
      if ((local_14 != 0) &&
         (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0
         )) {
        FUN_00772560();
      }
      local_14 = *piVar5;
      if (local_14 != 0) {
        *(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + 1;
      }
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_14,1,3,2);
    FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x84) + 0x14),local_14);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xf,1,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x19,5,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x18,10,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x13,9,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x14,1,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(7,1,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x17,4,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xe,0,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xa8,7,0);
    iVar1 = *(int *)(in_ECX + 0x84);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x1c,0,0);
    FUN_007aecb0(*(undefined4 *)(in_ECX + 0x134));
    FUN_007aec60(*(undefined4 *)(in_ECX + 0x14c));
  }
  local_4 = 0xffffffff;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e8b80(void)

{
  int *in_ECX;
  int iVar1;
  int *piVar2;
  
  piVar2 = in_ECX + 0x1f;
  iVar1 = 3;
  do {
    (**(code **)(*in_ECX + 0x94))(*piVar2);
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e8bb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf87e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9202c;
  _eh_vector_constructor_iterator_(in_ECX + 0x1f,4,3,FUN_007c88a0,FUN_004027d0);
  piVar7 = in_ECX + 0x25;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar7,4,0x28,FUN_007c88a0,FUN_007016a0);
  piVar6 = in_ECX + 0x4d;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(piVar6,4,9,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x59] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x5a] = 0;
  local_14 = 0x28;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 0;
  in_ECX[0x5e] = 0;
  in_ECX[0x5f] = 0;
  in_ECX[0x60] = 0;
  in_ECX[0x61] = 0;
  in_ECX[0x62] = 0;
  in_ECX[99] = 0;
  in_ECX[100] = 0;
  do {
    puVar1 = (undefined4 *)*piVar7;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar7 = 0;
    }
    piVar7 = piVar7 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar5 = 2;
  do {
    puVar1 = (undefined4 *)*piVar6;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar6 = 0;
    }
    piVar6 = piVar6 + 1;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar1 = (undefined4 *)in_ECX[9];
  if (puVar1 != param_1) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(puVar1 + 1), LVar3 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[9] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  in_ECX[0x22] = 0;
  _DAT_00b460d0 = DAT_00b25ad0;
  _DAT_00b460d4 = DAT_00b25ad4;
  _DAT_00b460d8 = DAT_00b25ad8;
  _DAT_00b460dc = DAT_00b25adc;
  if (DAT_00b42f48 < 2) {
    *(undefined2 *)(in_ECX + 0x58) = 0x50;
  }
  else {
    *(undefined2 *)(in_ECX + 0x58) = 0xe4;
  }
  uVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 0x58) * 0x10);
  in_ECX[0x56] = uVar4;
  in_ECX[0x57] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e8df0(byte param_1)

{
  FUN_007e5d30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007e8e10(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  short sVar5;
  uint uVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  float10 fVar14;
  undefined4 uVar15;
  int iStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  float fStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cf930;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar6);
  piVar8 = *(int **)(param_4 + 0x18);
  if (piVar8 == (int *)0x0) {
    bVar11 = false;
  }
  else {
    iVar9 = (**(code **)(*piVar8 + 0x54))();
    bVar11 = iVar9 == 4;
  }
  piVar8 = (int *)(-(uint)bVar11 & (uint)piVar8);
  if (piVar8 == (int *)0x0) goto LAB_007e9826;
  if (DAT_00b42e86 != '\0') {
    fStack_1c = 1.0;
    iStack_18 = 0x3f800000;
    iStack_14 = 0x3f800000;
    uStack_10 = 0x3f800000;
    FUN_007ecae0(0,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  _DAT_00b460c0 = DAT_00b43330;
  _DAT_00b460c4 = DAT_00b43334;
  _DAT_00b460c8 = DAT_00b43338;
  _DAT_00b460cc = DAT_00b4333c;
  if (*(int *)(param_4 + 8) == 0) {
    in_ECX[0x61] = (int)DAT_00b25ad0;
    in_ECX[0x62] = DAT_00b25ad4;
    in_ECX[99] = DAT_00b25ad8;
    in_ECX[100] = DAT_00b25adc;
  }
  else {
    fStack_2c = (float)*(byte *)(*(int *)(param_4 + 8) + 0x1a);
    in_ECX[0x61] = (int)(fStack_2c / 255.0);
    uStack_10 = 0;
    in_ECX[0x62] = 0;
    in_ECX[99] = 0;
    in_ECX[100] = 0;
  }
  iVar9 = *(int *)(param_4 + 0xc);
  if (iVar9 == 0) {
    fStack_1c = 1e+06;
    _DAT_00b46638 = 1e+06;
    iStack_18 = 0;
    iStack_14 = 0;
    _DAT_00b4663c = 0.0;
    uStack_10 = 0;
    _DAT_00b46648 = DAT_00b25ad0;
    _DAT_00b4664c = DAT_00b25ad4;
    _DAT_00b46650 = DAT_00b25ad8;
    _DAT_00b46654 = DAT_00b25adc;
  }
  else {
    _DAT_00b46648 = *(float *)(iVar9 + 0x20);
    _DAT_00b4664c = *(int *)(iVar9 + 0x24);
    _DAT_00b46638 = *(float *)(iVar9 + 0x30);
    _DAT_00b46650 = *(int *)(iVar9 + 0x28);
    _DAT_00b4663c = _DAT_00b46638 - *(float *)(iVar9 + 0x2c);
    uStack_3c = CONCAT44(_DAT_00b4663c,_DAT_00b46638);
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_20 = 0;
    _DAT_00b46654 = 0;
    fStack_2c = _DAT_00b46648;
    iStack_28 = _DAT_00b4664c;
    iStack_24 = _DAT_00b46650;
    fStack_1c = _DAT_00b46648;
    iStack_18 = _DAT_00b4664c;
    iStack_14 = _DAT_00b46650;
  }
  _DAT_00b46644 = 0;
  _DAT_00b46640 = 0;
  iVar9 = piVar8[0x27];
  if (DAT_00b42d78 == (code *)0x0) {
    fStack_2c = 0.0;
  }
  else {
    fVar14 = (float10)(*DAT_00b42d78)(0,1);
    fStack_2c = (float)fVar14;
  }
  fStack_2c = *(float *)(iVar9 + 0x30) * (fStack_2c / 3600.0) * 6.28318;
  in_ECX[0x22] = (int)fStack_2c;
  if (6.28318 <= fStack_2c) {
    fVar14 = (float10)FUN_00982bfa();
    in_ECX[0x22] = (int)(float)fVar14;
  }
  _DAT_00b460bc = in_ECX[0x22];
  if ((piVar8[7] & 0x800U) == 0) {
    _DAT_00b46090 = 0;
    _DAT_00b46094 = 0;
  }
  else {
    _DAT_00b46090 = 0x3f800000;
    _DAT_00b46094 = 0x3f800000;
  }
  _DAT_00b46098 = 0x3f800000;
  fStack_2c = (float)piVar8[0x29];
  (**(code **)(*piVar8 + 0x68))();
  uVar6 = piVar8[7];
  bVar11 = (uVar6 & 0x400) != 0;
  bVar12 = (uVar6 & 0x1000) == 0;
  bVar13 = (uVar6 & 0x2000) == 0;
  if ((((DAT_00b43074 == '\0') && (DAT_00b43108 != 0)) && (((byte)DAT_00b42f40 & 0x20) != 0)) &&
     (1 < DAT_00b42f48)) {
    uStack_3c = (ulonglong)ROUND(DAT_00b44f04);
    bVar3 = true;
    if ((int)uStack_3c == 0) goto LAB_007e91eb;
  }
  else {
LAB_007e91eb:
    bVar3 = false;
  }
  FUN_007e6a90(param_1,piVar8);
  uVar4 = uStack_3c;
  if (DAT_00b43070 != '\0') {
    _DAT_00b460e0 = _DAT_00b42f44;
  }
  iVar9 = 0;
  uStack_3c = uStack_3c & 0xffffffff00000000;
  if (1 < DAT_00b42f48) {
    iVar9 = 0x14;
    uStack_3c = CONCAT44(SUB84(uVar4,4),2);
  }
  iStack_40 = 0;
  param_1 = 0;
  uStack_4 = 1;
  if ((*(int **)(DAT_00b42eb8 + 0xc) == (int *)0x0) ||
     (*(char *)(**(int **)(DAT_00b42eb8 + 0xc) + 0xf4) != '\x01')) {
    iVar10 = 0;
    if ((DAT_00b43344 == '\0') || (sVar5 = FUN_007ed600(), sVar5 == 0)) {
      iVar2 = in_ECX[0x1f];
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
        iVar10 = iVar2;
        iStack_40 = iVar2;
      }
      iVar2 = **(int **)(iVar10 + 0x24);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
        param_1 = iVar2;
      }
      FUN_0076c910(fStack_2c);
      if (bVar3) {
        FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 4));
        FUN_0076c910(DAT_00b43108);
        FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 8));
        FUN_0076c910(DAT_00b4310c);
      }
      if (bVar11) {
        if (bVar12) {
          if (!bVar3) {
            iVar9 = in_ECX[iVar9 + 0x26];
            goto LAB_007e93e3;
          }
          iVar9 = in_ECX[iVar9 + 0x2e];
          goto LAB_007e9491;
        }
        if (bVar3) {
          iVar9 = in_ECX[iVar9 + 0x30];
          goto LAB_007e9491;
        }
        iVar9 = in_ECX[iVar9 + 0x28];
LAB_007e93e3:
        FUN_007aecb0(iVar9);
      }
      else {
        if (bVar12) {
          if (bVar13) {
            if (!bVar3) {
              iVar9 = in_ECX[iVar9 + 0x25];
              goto LAB_007e93e3;
            }
            iVar9 = in_ECX[iVar9 + 0x2d];
          }
          else {
            iVar9 = in_ECX[iVar9 + 0x35];
          }
        }
        else if (bVar13) {
          if (!bVar3) {
            iVar9 = in_ECX[iVar9 + 0x27];
            goto LAB_007e93e3;
          }
          iVar9 = in_ECX[iVar9 + 0x2f];
        }
        else {
          iVar9 = in_ECX[iVar9 + 0x36];
        }
LAB_007e9491:
        FUN_007aecb0(iVar9);
        if ((bVar3) && ((ushort)uStack_3c != 0)) {
          iVar9 = in_ECX[0x51];
          goto LAB_007e9746;
        }
      }
      iVar9 = in_ECX[(ushort)uStack_3c + 0x4d];
LAB_007e95ed:
      FUN_007aec60(iVar9);
    }
    else {
      iVar2 = in_ECX[0x20];
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
        iVar10 = iVar2;
        iStack_40 = iVar2;
      }
      iVar2 = **(int **)(iVar10 + 0x24);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
        param_1 = iVar2;
      }
      FUN_0076c910(fStack_2c);
      uVar7 = *(undefined4 *)(*(int *)(iVar10 + 0x24) + 4);
      if (DAT_00b42f48 < 2) {
        FUN_007aec20(uVar7);
        FUN_0076c910(DAT_00b43110);
        FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 8));
        FUN_0076c910(DAT_00b430d4);
      }
      else {
        FUN_007aec20(uVar7);
        FUN_0076c910(DAT_00b43110);
        if (bVar3) {
          FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 8));
          FUN_0076c910(DAT_00b43108);
          FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 0xc));
          FUN_0076c910(DAT_00b4310c);
        }
      }
      if (bVar11) {
        if (bVar12) {
          if (bVar3) {
            iVar9 = in_ECX[iVar9 + 0x32];
            goto LAB_007e9726;
          }
          iVar9 = in_ECX[iVar9 + 0x2a];
        }
        else {
          if (bVar3) {
            iVar9 = in_ECX[iVar9 + 0x34];
            goto LAB_007e9726;
          }
          iVar9 = in_ECX[iVar9 + 0x2c];
        }
LAB_007e95db:
        FUN_007aecb0(iVar9);
LAB_007e95e1:
        iVar9 = in_ECX[(ushort)uStack_3c + 0x4e];
        goto LAB_007e95ed;
      }
      if (bVar12) {
        if (bVar13) {
          if (!bVar3) {
            iVar9 = in_ECX[iVar9 + 0x29];
            goto LAB_007e95db;
          }
          iVar9 = in_ECX[iVar9 + 0x31];
        }
        else {
          iVar9 = in_ECX[iVar9 + 0x37];
        }
      }
      else if (bVar13) {
        if (!bVar3) {
          iVar9 = in_ECX[iVar9 + 0x2b];
          goto LAB_007e95db;
        }
        iVar9 = in_ECX[iVar9 + 0x33];
      }
      else {
        iVar9 = in_ECX[iVar9 + 0x38];
      }
LAB_007e9726:
      FUN_007aecb0(iVar9);
      if ((!bVar3) || ((ushort)uStack_3c == 0)) goto LAB_007e95e1;
      iVar9 = in_ECX[0x52];
LAB_007e9746:
      FUN_007aec60(iVar9);
      fStack_2c = (float)DAT_00b44ee8;
      iStack_28 = DAT_00b44eec;
      _DAT_00b460f0 = DAT_00b44ee8;
      _DAT_00b460f4 = DAT_00b44eec;
      _DAT_00b460f8 = _DAT_00b2d860;
      _DAT_00b460fc = DAT_00b44ef4;
    }
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x98,0,0);
  }
  else {
    FUN_0076c890(in_ECX + 0x21);
    iVar10 = iStack_40;
    if (bVar12) {
      if (bVar13) {
        iVar9 = in_ECX[0x4d];
      }
      else {
        iVar9 = in_ECX[0x4f];
      }
    }
    else if (bVar13) {
      iVar9 = in_ECX[0x4e];
    }
    else {
      iVar9 = in_ECX[0x50];
    }
    FUN_007aecb0(iVar9);
    FUN_007aec60(in_ECX[DAT_00b430b0 + 0x53]);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x98,0x3f,1);
    FUN_007aec20(**(undefined4 **)(iVar10 + 0x24));
    FUN_0076c910(fStack_2c);
    FUN_007aec20(*(undefined4 *)(*(int *)(iVar10 + 0x24) + 4));
    uVar7 = FUN_00405a30();
    param_1 = 0;
    FUN_0076c910(uVar7);
  }
  if (DAT_00b42eac == 4) {
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x34,1,0);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x38,8,0);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x37,7,0);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x35,1,0);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    uVar15 = 1;
    uVar7 = 0x36;
  }
  else {
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    uVar15 = 0;
    uVar7 = 0x34;
  }
  FUN_00772cd0(uVar7,uVar15,0);
  if ((DAT_00b42f48 < 2) || (DAT_00b43070 == '\0')) {
    uVar1 = *(undefined1 *)(*(int *)(param_4 + 8) + 0x1a);
    if (*(int *)(iVar10 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar10 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x18,uVar1,0);
  }
  FUN_0076ce40(in_ECX[0xe],&iStack_40);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  uStack_4 = uStack_4 & 0xffffff00;
  if (param_1 != 0) {
    piVar8 = (int *)(param_1 + 0x5c);
    *piVar8 = *piVar8 + -1;
    if (*piVar8 == 0) {
      FUN_00772560();
    }
  }
  piVar8 = (int *)(iVar10 + 0x60);
  *piVar8 = *piVar8 + -1;
  uStack_4 = 0xffffffff;
  if (*piVar8 == 0) {
    FUN_007604d0();
  }
LAB_007e9826:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_007e9840(void)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int *piVar8;
  uint *puVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00401f00(8,uVar3);
  puVar9 = (uint *)0x0;
  local_4 = 0;
  if (iVar4 != 0) {
    puVar9 = (uint *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00771090(DAT_00b43104,5,1);
  puVar7 = (undefined4 *)*puVar9;
  if (puVar7 != puVar5) {
    if (((puVar7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar7 + 1), LVar6 == 0)) &&
       (puVar7 != (undefined4 *)0x0)) {
      (**(code **)*puVar7)(1);
    }
    *puVar9 = (uint)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  (**(code **)(*(int *)*puVar9 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(1,3,3,2,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(3,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,6,0x80000000,0,5,1,0);
  piVar8 = (int *)*puVar9;
  uVar3 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar2 = 1;
        goto LAB_007e9962;
      }
    }
    bVar2 = 0;
LAB_007e9962:
    uVar3 = -(uint)bVar2 & (uint)piVar8;
  }
  iVar4 = FUN_00401f00(0x194);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_007e8bb0(uVar3);
  }
  (**(code **)(*piVar8 + 0x84))();
  (**(code **)(*piVar8 + 0xa8))();
  (**(code **)(*piVar8 + 0xac))();
  piVar1 = (int *)puVar9[1];
  if (piVar1 != piVar8) {
    if (((piVar1 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar1 + 1), LVar6 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    puVar9[1] = (uint)piVar8;
    InterlockedIncrement(piVar8 + 1);
  }
  (**(code **)(*(int *)puVar9[1] + 0x54))(*puVar9);
  *unaff_FS_OFFSET = iVar4;
  return puVar9;
}



undefined4 FUN_007e9a20(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0ac8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)(in_ECX + 0x7c);
  local_18 = 3;
  do {
    piVar4 = (int *)FUN_007606a0(local_14,uVar3);
    iVar2 = *piVar5;
    local_4 = 0;
    if (iVar2 != *piVar4) {
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
      iVar2 = *piVar4;
      *piVar5 = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14[0] != 0) &&
       (*(int *)(local_14[0] + 0x60) = *(int *)(local_14[0] + 0x60) + -1,
       *(int *)(local_14[0] + 0x60) == 0)) {
      FUN_007604d0();
    }
    piVar5 = piVar5 + 1;
    local_18 = local_18 + -1;
  } while (local_18 != 0);
  FUN_007e7f70();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007e9af0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cf988;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9224c;
  local_4 = 2;
  piVar4 = in_ECX + 0x2a;
  local_14 = 5;
  do {
    puVar1 = (undefined4 *)piVar4[-5];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
      piVar4[-5] = 0;
    }
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x2a,4,5,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,5,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007e9c10(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)(in_ECX + 0x2c);
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("blendW",0x10000007,0,0,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d888,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("blurParams",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d8b8,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("alphaAdd",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xc0,0);
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d898,0);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d8a8,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007e9db0(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int *piVar6;
  int iVar7;
  LONG LVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  int iVar12;
  undefined4 *puVar13;
  bool bVar14;
  undefined4 local_34;
  uint local_2c;
  float fStack_28;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar12 = 0;
  fVar5 = (float)FUN_007c23c0(DAT_00b43104,0x10);
  local_10 = 0.0;
  fVar2 = 1.0;
  bVar14 = DAT_00b43075 != '\0';
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  local_4 = 0;
  if (DAT_00b42e96 == '\0') {
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    piVar11 = param_2;
    if (*(int **)(*param_2 + 0x20) != (int *)0x0) {
      iVar12 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
    }
    iVar7 = (**(code **)(*piVar6 + 0x4c))(0);
    fVar5 = (float)iVar7;
    if (iVar7 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    fVar2 = (float)iVar12;
    if (iVar12 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar5 = fVar5 / fVar2;
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(*piVar11 + 0x20) == (int *)0x0) {
      local_14 = 0.0;
    }
    else {
      local_14 = (float)(**(code **)(**(int **)(*piVar11 + 0x20) + 0x50))();
    }
    iVar12 = (**(code **)(*piVar6 + 0x50))(0);
    fVar2 = (float)iVar12;
    if (iVar12 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar3 = (float)(int)local_14;
    if ((int)local_14 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar2 = fVar2 / fVar3;
  }
  else {
    local_34 = 0x3f800000;
    piVar11 = param_2;
  }
  if (*(int **)(*piVar11 + 0x20) == (int *)0x0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)(**(code **)(**(int **)(*piVar11 + 0x20) + 0x4c))();
  }
  fVar3 = (float)(int)local_14;
  if ((int)local_14 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  if (*(int **)(*piVar11 + 0x20) == (int *)0x0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)(**(code **)(**(int **)(*piVar11 + 0x20) + 0x50))();
  }
  fStack_28 = (float)(int)local_14;
  if ((int)local_14 < 0) {
    fStack_28 = fStack_28 + 4.2949673e+09;
  }
  fStack_28 = 0.5 / fStack_28;
  if (*(int **)((int)fVar5 + 0x20) == (int *)0x0) {
    local_14 = 0.0;
  }
  else {
    local_14 = (float)(**(code **)(**(int **)((int)fVar5 + 0x20) + 0x4c))();
  }
  fVar4 = (float)(int)local_14;
  if ((int)local_14 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  if (*(int **)((int)fVar5 + 0x20) == (int *)0x0) {
    iVar12 = 0;
  }
  else {
    iVar12 = (**(code **)(**(int **)((int)fVar5 + 0x20) + 0x50))();
  }
  local_14 = (float)iVar12;
  if (iVar12 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_14 = 0.5 / local_14;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined4 *)(in_ECX + 0xc0) = 0;
  *(undefined4 *)(in_ECX + 0xc4) = _DAT_00b2c2b0;
  *(undefined4 *)(in_ECX + 200) = _DAT_00b2c2b4;
  iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x24) + 4);
  puVar1 = *(undefined4 **)(iVar12 + 4);
  puVar13 = (undefined4 *)(iVar12 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar8 = InterlockedDecrement(puVar1 + 1);
    if ((LVar8 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
      *puVar13 = 0;
    }
    else {
      *puVar13 = 0;
    }
  }
  if (DAT_00b4610c != '\0') {
    uVar9 = FUN_007c2420(DAT_00b43104,0,6,0,0);
    _DAT_00b2d898 = local_34;
    _DAT_00b2d8a0 = 0.5 / fVar3 + 0.0;
    _DAT_00b2d8a4 = fStack_28 + 0.0;
    _DAT_00b2d89c = fVar2;
    *(undefined4 *)(in_ECX + 0xbc) = 0;
    *(undefined4 *)(in_ECX + 0x90) = 4;
    FUN_00802890(*param_2);
    uVar10 = FUN_007d6fe0();
    FUN_007d7280(1,uVar10);
    if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
       ((char)DAT_00b3f928[0x83] == '\x01')) {
      (**(code **)(*DAT_00b3f928 + 0x144))(0);
    }
    FUN_00709c60(DAT_00b3f928);
    FUN_007d72d0();
    uVar10 = FUN_00405a30();
    FUN_007b4290(9);
    FUN_007fa470(uVar10);
    FUN_007c1ee0(uVar9);
  }
  _DAT_00b2d898 = local_34;
  _DAT_00b2d8a0 = 0.5 / fVar3 + 0.0;
  fVar3 = fStack_28 + 0.0;
  _DAT_00b2d89c = fVar2;
  _DAT_00b2d8a4 = fVar3;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  FUN_00802890(*param_2);
  uVar9 = FUN_007d6fe0();
  FUN_007d7280(1,uVar9);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(0);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  uVar9 = FUN_007c23c0(DAT_00b43104,0x10);
  _DAT_00b2d898 = 0x3f800000;
  _DAT_00b2d89c = 1.0;
  local_2c = 0;
  _DAT_00b2d8a0 = 0.0;
  _DAT_00b2d8a4 = 0.0;
  if (DAT_00b2c1e8 != 0) {
    do {
      _DAT_00b2d8b8 = 0.0;
      _DAT_00b2d8bc = _DAT_00b2c1ec + _DAT_00b2c1ec;
      uVar10 = FUN_007d6fe0();
      FUN_007d7280(fVar3,uVar10);
      FUN_00802890(unaff_EBX);
      *(undefined4 *)(in_ECX + 0xbc) = 1;
      *(undefined4 *)(in_ECX + 0x90) = 2;
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(0);
      }
      FUN_00709c60(DAT_00b3f928);
      FUN_00802890(uVar9);
      FUN_007d72d0();
      uVar10 = FUN_007d6fe0();
      FUN_007d7280(fVar3,uVar10);
      _DAT_00b2d8b8 = _DAT_00b2c1ec + _DAT_00b2c1ec;
      _DAT_00b2d8bc = 0.0;
      *(undefined4 *)(in_ECX + 0xbc) = 2;
      if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
         ((char)DAT_00b3f928[0x83] == '\x01')) {
        (**(code **)(*DAT_00b3f928 + 0x144))(0);
      }
      FUN_00709c60(DAT_00b3f928);
      FUN_007d72d0();
      local_2c = local_2c + 1;
    } while (local_2c < DAT_00b2c1e8);
  }
  FUN_007c1ee0(uVar9);
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 3;
  FUN_00802890(unaff_EBX);
  if (*param_1 == 0) {
    param_1 = (int *)0x0;
    piVar11 = (int *)&param_1;
    fStack_28 = 1.4013e-45;
  }
  else {
    piVar11 = (int *)(*param_1 + 0x20);
  }
  piVar6 = param_1;
  puVar1 = (undefined4 *)*piVar11;
  if (((((uint)fStack_28 & 1) != 0) && (param_1 != (int *)0x0)) &&
     (LVar8 = InterlockedDecrement(param_1 + 1), LVar8 == 0)) {
    (**(code **)*piVar6)(1);
  }
  iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x24) + 4);
  puVar13 = *(undefined4 **)(iVar12 + 4);
  if (puVar13 != puVar1) {
    if (((puVar13 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar13 + 1), LVar8 == 0))
       && (puVar13 != (undefined4 *)0x0)) {
      (**(code **)*puVar13)(1);
    }
    *(undefined4 **)(iVar12 + 4) = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
  }
  piVar11 = param_2;
  local_c = 0x3f800000;
  _DAT_00b2d898 = 0x3f800000;
  _DAT_00b2d89c = 1.0;
  _DAT_00b2d8a0 = (float)(-(uint)bVar14 & 7) + 0.0;
  _DAT_00b2d8a4 = 0.5 / fVar4 + 0.0;
  _DAT_00b2d8ac = local_34;
  _DAT_00b2d8b4 = 0;
  if (DAT_00b2c1e4 == 0) {
    _DAT_00b2d888 = 0;
  }
  else {
    _DAT_00b2d888 = 0x3f800000;
    if (DAT_00b2c1e4 == 1) {
      _DAT_00b2d88c = 0;
      goto LAB_007ea43a;
    }
  }
  _DAT_00b2d88c = 0x3f800000;
LAB_007ea43a:
  _DAT_00b2d8a8 = fVar5;
  _DAT_00b2d8b0 = fVar2;
  if (*param_2 == 0) {
    local_10 = 1.0;
    FUN_007d71c0(1,0);
  }
  else {
    local_10 = fVar5;
    local_c = local_34;
    uVar9 = FUN_007d6fe0();
    FUN_007d7280(1,uVar9);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&local_14);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*piVar11 != 0) {
    FUN_007d72d0();
  }
  iVar12 = *(int *)(*(int *)(*(int *)(in_ECX + 0x70) + 0x24) + 4);
  puVar1 = *(undefined4 **)(iVar12 + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar8 = InterlockedDecrement(puVar1 + 1);
    if ((LVar8 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(iVar12 + 4) = 0;
  }
  FUN_007c1ee0(unaff_EBP);
  return;
}



undefined4 FUN_007ea890(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf2c8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)FUN_007606a0(&local_14,uVar5);
  iVar2 = *(int *)(in_ECX + 0x70);
  local_4 = 0;
  if (iVar2 != *piVar6) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar6;
    *(int *)(in_ECX + 0x70) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  FUN_00772630(&local_18);
  local_4 = 1;
  FUN_00801110(local_18,0,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
  piVar6 = (int *)FUN_00772630(&local_10);
  local_4._0_1_ = 2;
  if (local_18 != (int *)*piVar6) {
    if ((local_18 != (int *)0x0) && (local_18[0x17] = local_18[0x17] + -1, local_18[0x17] == 0)) {
      FUN_00772560();
    }
    local_18 = (int *)*piVar6;
    if (local_18 != (int *)0x0) {
      local_18[0x17] = local_18[0x17] + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00771640(0);
  FUN_00801110(local_18,1,3,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0x94 + *(int *)(in_ECX + 0x90) * 4);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0xa8 + *(int *)(in_ECX + 0x90) * 4);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,7,0);
  local_4 = 0xffffffff;
  if (local_18 != (int *)0x0) {
    local_18[0x17] = local_18[0x17] + -1;
    if (local_18[0x17] == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007eab50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cf9e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9224c;
  _eh_vector_constructor_iterator_(in_ECX + 0x25,4,5,FUN_007c88a0,FUN_007016a0);
  piVar4 = in_ECX + 0x2a;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar4,4,5,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,2);
  in_ECX[0x2f] = 0;
  in_ECX[0x24] = 0;
  local_14 = 5;
  do {
    puVar1 = (undefined4 *)piVar4[-5];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar4[-5] = 0;
    }
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007eac60(byte param_1)

{
  FUN_007e9af0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007eac80(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 uVar8;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cfa18;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  iStack_14 = 0;
  iVar2 = **(int **)(in_ECX[0x1c] + 0x24);
  piVar1 = in_ECX + 0x1c;
  uStack_4 = 0;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
    iStack_14 = iVar2;
  }
  puVar5 = (undefined4 *)FUN_00405a30();
  puVar3 = *(undefined4 **)(iStack_14 + 4);
  if (puVar3 != puVar5) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar3 + 1);
      if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iStack_14 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)in_ECX[in_ECX[0x24] + 0x25];
  puVar5 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar5 != puVar3) {
    if (puVar5 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar5 + 1);
      if ((LVar6 == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *piVar1;
  puVar3 = (undefined4 *)in_ECX[in_ECX[0x24] + 0x2a];
  puVar5 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar5 != puVar3) {
    if (puVar5 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar5 + 1);
      if ((LVar6 == 0) && (puVar5 != (undefined4 *)0x0)) {
        (**(code **)*puVar5)(1);
      }
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *piVar1;
  if (in_ECX[0x2f] == 3) {
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x1b,1,0);
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    FUN_00772cd0(0x13,2,0);
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    uVar8 = 2;
    uVar7 = 0x14;
  }
  else {
    if (*(int *)(iVar2 + 0x30) == 0) {
      uVar7 = FUN_00772df0();
      *(undefined4 *)(iVar2 + 0x30) = uVar7;
    }
    uVar8 = 0;
    uVar7 = 0x1b;
  }
  FUN_00772cd0(uVar7,uVar8,0);
  FUN_0076ce40(in_ECX[0xe],piVar1);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  uStack_4 = 0xffffffff;
  if (iStack_14 != 0) {
    piVar1 = (int *)(iStack_14 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007eae80(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0xd0);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007eab50();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xb0))();
  (**(code **)(*piVar7 + 0xb4))();
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  (**(code **)(*(int *)piVar8[1] + 0x54))(*piVar8);
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007eb010(char param_1)

{
  undefined4 local_8;
  
  if (DAT_00b2d91c != '\0') {
    if (param_1 == '\0') {
      local_8 = _DAT_00b46128;
      _DAT_00b46120 = 0x3f800000;
    }
    else {
      local_8 = _DAT_00b4612c;
      _DAT_00b46120 = 0x3e99999a;
    }
    if (_DAT_00b46124 <= local_8) {
      _DAT_00b46124 = local_8;
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007eb080(float param_1)

{
  float fVar1;
  
  fVar1 = _DAT_00b46124;
  if (DAT_00b2d91c != '\0') {
    _DAT_00b2d918 = (param_1 - 1.0) * 0.1 + 1.0;
    _DAT_00b46120 = _DAT_00b2d918;
    fVar1 = param_1 * _DAT_00b46128;
    if (param_1 * _DAT_00b46128 < _DAT_00b46124) {
      fVar1 = _DAT_00b46124;
    }
  }
  _DAT_00b46124 = fVar1;
  return;
}



void FUN_007eb110(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cfa94;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92394;
  local_4 = 4;
  piVar5 = in_ECX + 0x28;
  iVar4 = 3;
  do {
    puVar1 = (undefined4 *)piVar5[-3];
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar5[-3] = 0;
    }
    puVar1 = (undefined4 *)*piVar5;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_4._0_1_ = 3;
  if (in_ECX[0x2c] != 0) {
    piVar5 = (int *)(in_ECX[0x2c] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
  }
  local_4._0_1_ = 2;
  if (in_ECX[0x2b] != 0) {
    piVar5 = (int *)(in_ECX[0x2b] + 0x60);
    *piVar5 = *piVar5 + -1;
    if (*piVar5 == 0) {
      FUN_007604d0(uVar2);
    }
  }
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x28,4,3,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x25,4,3,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_00802760();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007eb250(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009a4750(DAT_00b43104);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("fDoubleVis",0x10000007,0,2,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d90c,0);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("fBlurParams",0x10000007,0,1,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46114,0);
  }
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar2 = FUN_00401f00(0x34,uVar1);
    local_4 = 1;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_009a8490(DAT_00b43104);
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar3);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio0",0x10000007,0,6,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d8ec,0);
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x18))
              ("texRatio1",0x10000007,0,7,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2d8fc,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x007eba71) */
/* WARNING: Removing unreachable block (ram,0x007eba92) */
/* WARNING: Removing unreachable block (ram,0x007ebaa0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe0 : 0x007eba8a */
/* WARNING: Removing unreachable block (ram,0x007ebae7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007eb3d0(char param_1,int *param_2)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  LONG LVar10;
  undefined4 uVar11;
  undefined4 **ppuVar12;
  int in_ECX;
  uint unaff_EBX;
  uint unaff_EBP;
  uint unaff_ESI;
  float10 fVar13;
  int *unaff_retaddr;
  float local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_20;
  uint local_1c;
  float fStack_18;
  float local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar4 = param_2;
  puVar5 = (undefined4 *)FUN_007c23c0();
  local_20 = (undefined4 *)FUN_007c23c0();
  local_10 = 0;
  local_2c = (undefined4 *)0x3f800000;
  local_c = 0x3f800000;
  local_8 = 0x3f800000;
  local_4 = 0;
  local_1c = -(uint)(DAT_00b43075 != '\0') & 7;
  if (DAT_00b42e96 == '\0') {
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = (**(code **)(**(int **)(*param_2 + 0x20) + 0x4c))();
    }
    iVar7 = (**(code **)(*piVar6 + 0x4c))();
    fVar3 = (float)iVar7;
    if (iVar7 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar2 = (float)iVar8;
    if (iVar8 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    param_1 = SUB41(fVar3 / fVar2,0);
    piVar6 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
    if (*(int **)(*param_2 + 0x20) == (int *)0x0) {
      local_14 = 0.0;
    }
    else {
      local_14 = (float)(**(code **)(**(int **)(*param_2 + 0x20) + 0x50))();
    }
    iVar8 = (**(code **)(*piVar6 + 0x50))();
    fVar3 = (float)iVar8;
    if (iVar8 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar2 = (float)(int)local_14;
    if ((int)local_14 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    local_2c = (undefined4 *)(fVar3 / fVar2);
  }
  else {
    param_2 = (int *)0x3f800000;
  }
  if (*(int **)(*piVar4 + 0x20) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (**(code **)(**(int **)(*piVar4 + 0x20) + 0x4c))();
  }
  local_14 = (float)iVar8;
  if (iVar8 < 0) {
    local_14 = local_14 + 4.2949673e+09;
  }
  local_14 = 0.5 / local_14;
  if (*(int **)(*piVar4 + 0x20) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = (**(code **)(**(int **)(*piVar4 + 0x20) + 0x50))();
  }
  fVar3 = (float)iVar8;
  if (iVar8 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = 0.5 / fVar3;
  _DAT_00b2d8ec = param_2;
  fStack_18 = local_14 + 0.0;
  local_14 = fVar3 + 0.0;
  _DAT_00b2d8f0 = local_2c;
  _DAT_00b2d8f4 = fStack_18;
  _DAT_00b2d8f8 = (undefined4 *)local_14;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  iVar8 = **(int **)(*(int *)(in_ECX + 0xb0) + 0x24);
  puVar9 = (undefined4 *)FUN_00405a30();
  puVar1 = *(undefined4 **)(iVar8 + 4);
  if (puVar1 != puVar9) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar1 + 1), LVar10 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    *(undefined4 **)(iVar8 + 4) = puVar9;
    if (puVar9 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar9 + 1);
    }
  }
  FUN_007d6fe0();
  FUN_007d7280();
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))();
  }
  FUN_00709c60();
  FUN_007d72d0();
  _DAT_00b2d8ec = (int *)0x3f800000;
  _DAT_00b2d8f0 = (undefined4 *)0x3f800000;
  _DAT_00b2d8f4 = 0.0;
  _DAT_00b2d8f8 = (undefined4 *)0x0;
  uRam00000090 = 1;
  _DAT_00b46114 = 0;
  _DAT_00b46118 = 0x3ca3d70a;
  FUN_007d6fe0();
  FUN_007d7280(local_20);
  local_28 = puVar5;
  if (puVar5 == (undefined4 *)0x0) {
    local_28 = (undefined4 *)0x0;
    unaff_EBX = 1;
    puVar5 = (undefined4 *)&stack0xffffffb8;
  }
  puVar5 = (undefined4 *)puVar5[8];
  if ((((unaff_EBX & 1) != 0) && (unaff_EBX = unaff_EBX & 0xfffffffe, local_28 != (undefined4 *)0x0)
      ) && (LVar10 = InterlockedDecrement(local_28 + 1), LVar10 == 0)) {
    (**(code **)*local_28)();
  }
  iVar8 = **(int **)(iRam000000ac + 0x24);
  puVar1 = *(undefined4 **)(iVar8 + 4);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar1 + 1), LVar10 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    *(undefined4 **)(iVar8 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))();
  }
  FUN_00709c60();
  FUN_007d72d0();
  _DAT_00b46114 = 0x3ca3d70a;
  _DAT_00b46118 = 0;
  if (local_28 == (undefined4 *)0x0) {
    unaff_EBP = unaff_EBP | 2;
    local_2c = (undefined4 *)0x0;
    local_28 = (undefined4 *)&stack0xffffffb4;
  }
  puVar5 = (undefined4 *)local_28[8];
  if ((((unaff_EBP & 2) != 0) && (unaff_EBP = unaff_EBP & 0xfffffffd, local_2c != (undefined4 *)0x0)
      ) && (LVar10 = InterlockedDecrement(local_2c + 1), LVar10 == 0)) {
    (**(code **)*local_2c)(1);
  }
  iVar8 = **(int **)(*(int *)(unaff_EBX + 0xac) + 0x24);
  puVar1 = *(undefined4 **)(iVar8 + 4);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar1 + 1), LVar10 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  uVar11 = FUN_007d6fe0();
  FUN_007d7280(fVar3,uVar11);
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(0);
  }
  FUN_00709c60(DAT_00b3f928);
  FUN_007d72d0();
  _DAT_00b2d8ec = (int *)local_4;
  _DAT_00b2d8f8 = local_20;
  _DAT_00b2d8fc = 0x3f800000;
  _DAT_00b2d900 = 0x3f800000;
  _DAT_00b2d904 = 0;
  _DAT_00b2d908 = 0;
  _DAT_00b2d8f0 = (undefined4 *)unaff_EBX;
  _DAT_00b2d8f4 = fVar3;
  if (DAT_00b42d78 == (code *)0x0) {
    local_20 = (undefined4 *)0x0;
  }
  else {
    fVar13 = (float10)(*DAT_00b42d78)(0,1);
    local_20 = (undefined4 *)(float)fVar13;
  }
  local_20 = (undefined4 *)(((float)local_20 / 3600.0) * 6.28318);
  if (DAT_00b42d78 == (code *)0x0) {
    local_30 = 0.0;
  }
  else {
    fVar13 = (float10)(*DAT_00b42d78)(1,1);
    local_30 = (float)fVar13;
  }
  _DAT_00b46124 = _DAT_00b46124 - local_30 * 0.02;
  if (_DAT_00b46124 <= 0.0) {
    _DAT_00b46124 = 0.0;
  }
  fVar13 = (float10)FUN_00986300();
  _DAT_00b2d90c = (float)fVar13 * _DAT_00b46124;
  fVar13 = (float10)FUN_00986000();
  local_20 = (undefined4 *)(float)fVar13;
  _DAT_00b2d910 = (float)fVar13 * _DAT_00b46124;
  _DAT_00b2d914 = local_4;
  fVar3 = _DAT_00b46120 - local_30 * 0.5;
  _DAT_00b46120 = 0.0;
  if (0.0 < fVar3) {
    _DAT_00b46120 = fVar3;
  }
  _DAT_00b4611c = _DAT_00b46130 * _DAT_00b46120;
  _DAT_00b2d918 = unaff_EBX;
  *(undefined4 *)(unaff_EBP + 0x90) = 2;
  if (*piVar4 == 0) {
    local_20 = (undefined4 *)0x0;
    ppuVar12 = &local_20;
    unaff_ESI = unaff_ESI | 4;
  }
  else {
    ppuVar12 = (undefined4 **)(*piVar4 + 0x20);
  }
  puVar1 = local_20;
  puVar5 = *ppuVar12;
  if ((((unaff_ESI & 4) != 0) && (local_20 != (undefined4 *)0x0)) &&
     (LVar10 = InterlockedDecrement(local_20 + 1), LVar10 == 0)) {
    (**(code **)*puVar1)(1);
  }
  iVar8 = **(int **)(*(int *)(unaff_EBP + 0x70) + 0x24);
  puVar1 = *(undefined4 **)(iVar8 + 4);
  if (puVar1 != puVar5) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar1 + 1), LVar10 == 0))
       && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 **)(iVar8 + 4) = puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  local_20 = (undefined4 *)0x0;
  local_20 = (undefined4 *)0x0;
  iVar8 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0x70) + 0x24) + 4);
  puVar5 = *(undefined4 **)(iVar8 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    if (((puVar5 != (undefined4 *)0x0) && (LVar10 = InterlockedDecrement(puVar5 + 1), LVar10 == 0))
       && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  if (param_1 == '\0') {
    fStack_18 = (float)local_4;
    local_14 = (float)unaff_EBX;
  }
  else {
    fStack_18 = 1.0;
    local_14 = (float)0x3f800000;
  }
  if (*unaff_retaddr == 0) {
    FUN_007d71c0(1,0);
  }
  else {
    uVar11 = FUN_007d6fe0();
    FUN_007d7280(1,uVar11);
  }
  if (((DAT_00b3f928[0x80] == 1) || (DAT_00b3f928[0x81] == 1)) &&
     ((char)DAT_00b3f928[0x83] == '\x01')) {
    (**(code **)(*DAT_00b3f928 + 0x144))(&local_1c);
  }
  FUN_00709c60(DAT_00b3f928);
  if (*unaff_retaddr != 0) {
    FUN_007d72d0();
  }
  iVar8 = **(int **)(*(int *)(unaff_EBP + 0x70) + 0x24);
  puVar5 = *(undefined4 **)(iVar8 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar5 + 1);
    if ((LVar10 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  iVar8 = *(int *)(*(int *)(*(int *)(unaff_EBP + 0x70) + 0x24) + 4);
  puVar5 = *(undefined4 **)(iVar8 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar5 + 1);
    if ((LVar10 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  iVar8 = **(int **)(*(int *)(unaff_EBP + 0xac) + 0x24);
  puVar5 = *(undefined4 **)(iVar8 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar5 + 1);
    if ((LVar10 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  iVar8 = **(int **)(*(int *)(unaff_EBP + 0xb0) + 0x24);
  puVar5 = *(undefined4 **)(iVar8 + 4);
  if (puVar5 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(puVar5 + 1);
    if ((LVar10 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
    *(undefined4 *)(iVar8 + 4) = 0;
  }
  FUN_007c1ee0(unaff_EBX);
  FUN_007c1ee0(local_30);
  return;
}



undefined4 FUN_007ebee0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  LONG LVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int *local_18;
  int local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfae8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)FUN_007606a0(&local_14,uVar5);
  iVar2 = *(int *)(in_ECX + 0x70);
  local_4 = 0;
  if (iVar2 != *piVar6) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar6;
    *(int *)(in_ECX + 0x70) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  FUN_00772630(&local_18);
  local_4 = 1;
  FUN_00801110(local_18,0,3,2);
  FUN_00771640(0);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
  piVar6 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 2;
  if (local_18 != (int *)*piVar6) {
    if ((local_18 != (int *)0x0) && (local_18[0x17] = local_18[0x17] + -1, local_18[0x17] == 0)) {
      FUN_00772560();
    }
    local_18 = (int *)*piVar6;
    if (local_18 != (int *)0x0) {
      local_18[0x17] = local_18[0x17] + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(local_18,1,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 0x14),local_18);
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0x9c);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  puVar3 = *(undefined4 **)(in_ECX + 0xa8);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0x70);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,7,0);
  piVar6 = (int *)FUN_007606a0(&local_14);
  iVar2 = *(int *)(in_ECX + 0xac);
  local_4._0_1_ = 3;
  if (iVar2 != *piVar6) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar6;
    *(int *)(in_ECX + 0xac) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 1;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar6 = (int *)FUN_00772630(&local_14);
  local_4._0_1_ = 4;
  if (local_18 != (int *)*piVar6) {
    if ((local_18 != (int *)0x0) && (local_18[0x17] = local_18[0x17] + -1, local_18[0x17] == 0)) {
      FUN_00772560();
    }
    local_18 = (int *)*piVar6;
    if (local_18 != (int *)0x0) {
      local_18[0x17] = local_18[0x17] + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(local_18,0,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xac) + 0x14),local_18);
  iVar2 = *(int *)(in_ECX + 0xac);
  puVar3 = *(undefined4 **)(in_ECX + 0x98);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xac);
  puVar3 = *(undefined4 **)(in_ECX + 0xa4);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xac);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0xac);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0xac);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0xac);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0xac);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,7,0);
  piVar6 = (int *)FUN_007606a0(&local_14);
  iVar2 = *(int *)(in_ECX + 0xb0);
  local_4._0_1_ = 5;
  if (iVar2 != *piVar6) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar6;
    *(int *)(in_ECX + 0xb0) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 1;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar6 = (int *)FUN_00772630(&iStack_10);
  local_4._0_1_ = 6;
  if (local_18 != (int *)*piVar6) {
    if ((local_18 != (int *)0x0) && (local_18[0x17] = local_18[0x17] + -1, local_18[0x17] == 0)) {
      FUN_00772560();
    }
    local_18 = (int *)*piVar6;
    if (local_18 != (int *)0x0) {
      local_18[0x17] = local_18[0x17] + 1;
    }
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  if ((iStack_10 != 0) &&
     (*(int *)(iStack_10 + 0x5c) = *(int *)(iStack_10 + 0x5c) + -1, *(int *)(iStack_10 + 0x5c) == 0)
     ) {
    FUN_00772560();
  }
  FUN_00801110(local_18,0,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0xb0) + 0x14),local_18);
  iVar2 = *(int *)(in_ECX + 0xb0);
  puVar3 = *(undefined4 **)(in_ECX + 0x94);
  puVar4 = *(undefined4 **)(iVar2 + 0x58);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xb0);
  puVar3 = *(undefined4 **)(in_ECX + 0xa0);
  puVar4 = *(undefined4 **)(iVar2 + 0x44);
  if (puVar4 != puVar3) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar2 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(7,0,0);
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xe,0,0);
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0x1b,0,0);
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xf,0,0);
  iVar2 = *(int *)(in_ECX + 0xb0);
  if (*(int *)(iVar2 + 0x30) == 0) {
    uVar8 = FUN_00772df0();
    *(undefined4 *)(iVar2 + 0x30) = uVar8;
  }
  FUN_00772cd0(0xa8,7,0);
  local_4 = 0xffffffff;
  if (local_18 != (int *)0x0) {
    local_18[0x17] = local_18[0x17] + -1;
    if (local_18[0x17] == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007ec5e0(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xb0))();
  iVar1 = in_ECX[0x1c];
  puVar2 = (undefined4 *)in_ECX[0x27];
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = in_ECX[0x1c];
  puVar2 = (undefined4 *)in_ECX[0x2a];
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = in_ECX[0x2b];
  puVar2 = (undefined4 *)in_ECX[0x26];
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = in_ECX[0x2b];
  puVar2 = (undefined4 *)in_ECX[0x29];
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = in_ECX[0x2c];
  puVar2 = (undefined4 *)in_ECX[0x25];
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[0x28];
  iVar1 = in_ECX[0x2c];
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar3 + 1);
      if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  return;
}



void FUN_007ec7a0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2b]);
  (**(code **)(*in_ECX + 0x94))(in_ECX[0x2c]);
  return;
}



void FUN_007ec7d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfb30;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_008026c0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a92394;
  _eh_vector_constructor_iterator_(in_ECX + 0x25,4,3,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0x28,4,3,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x24] = 0;
  *(undefined1 *)(in_ECX + 8) = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ec870(byte param_1)

{
  FUN_007eb110();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007ec890(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d34e8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar2);
  iStack_10 = 0;
  iVar3 = in_ECX[0x24];
  uStack_4 = 0;
  if (iVar3 == 0) {
    iVar3 = in_ECX[0x2c];
  }
  else if (iVar3 == 1) {
    iVar3 = in_ECX[0x2b];
  }
  else {
    if (iVar3 != 2) goto LAB_007ec901;
    iVar3 = in_ECX[0x1c];
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
    iStack_10 = iVar3;
  }
LAB_007ec901:
  iVar3 = iStack_10;
  FUN_0076ce40(in_ECX[0xe],&iStack_10);
  in_ECX[0xe] = in_ECX[0xe] + 1;
  uStack_4 = 0xffffffff;
  if (iVar3 != 0) {
    piVar1 = (int *)(iVar3 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



int * FUN_007ec950(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,2,1);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0xb4);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007ec7d0();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xb0))();
  (**(code **)(*piVar7 + 0xb4))();
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  (**(code **)(*(int *)piVar8[1] + 0x54))(*piVar8);
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



void FUN_007ecae0(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  (&DAT_00b46498)[uVar1 * 4] = param_2;
  (&DAT_00b4649c)[uVar1 * 4] = param_3;
  (&DAT_00b464a0)[uVar1 * 4] = param_4;
  (&DAT_00b464a4)[uVar1 * 4] = param_5;
  return;
}



void thunk_FUN_007e2490(int param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0073da70(param_1,param_2);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(in_ECX + 0x1c);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(in_ECX + 0x20);
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ecb20(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  if ((_DAT_00b466d8 & 1) == 0) {
    _DAT_00b466d8 = _DAT_00b466d8 | 1;
    DAT_00b466c8 = 0x3a83126f;
    DAT_00b466cc = 0;
    DAT_00b466d0 = 0;
    DAT_00b466d4 = 0;
  }
  uVar4 = DAT_00b466d4;
  uVar3 = DAT_00b466d0;
  uVar2 = DAT_00b466cc;
  uVar1 = DAT_00b466c8;
  uVar6 = 0;
  _DAT_00b46138 = 0;
  _DAT_00b4613c = 0;
  _DAT_00b46140 = 0;
  _DAT_00b46144 = 0;
  _DAT_00b46148 = 0;
  _DAT_00b4614c = 0;
  _DAT_00b46150 = 0;
  _DAT_00b46154 = 0;
  do {
    uVar5 = (uVar6 & 0xffff) + 0x11 & 0xffff;
    (&DAT_00b46498)[uVar5 * 4] = uVar1;
    (&DAT_00b4649c)[uVar5 * 4] = uVar2;
    (&DAT_00b464a0)[uVar5 * 4] = uVar3;
    (&DAT_00b464a4)[uVar5 * 4] = uVar4;
    uVar5 = (uVar6 & 0xffff) + 1 & 0xffff;
    (&DAT_00b46498)[uVar5 * 4] = DAT_00b25ad0;
    (&DAT_00b4649c)[uVar5 * 4] = DAT_00b25ad4;
    (&DAT_00b464a0)[uVar5 * 4] = DAT_00b25ad8;
    uVar6 = uVar6 + 1;
    (&DAT_00b464a4)[uVar5 * 4] = DAT_00b25adc;
  } while ((int)uVar6 < 8);
  return;
}



undefined4 FUN_007ecc60(int param_1,float *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  undefined4 *local_20;
  undefined4 *local_1c;
  float local_18;
  undefined4 *puStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  *param_3 = 0;
  if (*(int *)(in_ECX + 0x78) == 0) {
    return 0;
  }
  local_20 = *(undefined4 **)(in_ECX + 0x70);
  puVar1 = (undefined4 *)*local_20;
  iVar7 = local_20[2];
  piVar4 = (int *)FUN_00405ad0(&local_1c);
  puVar6 = local_1c;
  local_18 = *(float *)(*piVar4 + 0xf8);
  if (((local_1c != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_1c + 1), LVar5 == 0))
     && (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  if (iVar7 == 0) {
    return 0;
  }
  piVar4 = (int *)FUN_00405ad0(&local_1c);
  pfVar3 = param_2;
  iVar2 = *piVar4;
  fStack_c = *(float *)(iVar2 + 0x88) - *param_2;
  fStack_8 = *(float *)(iVar2 + 0x8c) - param_2[1];
  fStack_4 = *(float *)(iVar2 + 0x90) - param_2[2];
  param_2 = (float *)(fStack_4 * fStack_4 + fStack_c * fStack_c + fStack_8 * fStack_8);
  fVar8 = (float10)FUN_00982c30();
  puVar6 = local_1c;
  param_2 = (float *)(float)fVar8;
  fStack_10 = ((float)param_2 - pfVar3[3]) / local_18;
  if (((local_1c != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_1c + 1), LVar5 == 0))
     && (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  do {
    puVar6 = puVar1;
    if (iVar7 == param_1) {
      return 1;
    }
    if (*param_3 == 0) {
      piVar4 = (int *)FUN_00405ad0(&param_2);
      puVar1 = param_2;
      local_1c = *(undefined4 **)(*piVar4 + 0xf8);
      if (((param_2 != (float *)0x0) &&
          (LVar5 = InterlockedDecrement((LONG *)(param_2 + 1)), LVar5 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      piVar4 = (int *)FUN_00405ad0(&puStack_14);
      iVar7 = *piVar4;
      fStack_c = *(float *)(iVar7 + 0x88) - *pfVar3;
      fStack_8 = *(float *)(iVar7 + 0x8c) - pfVar3[1];
      fStack_4 = *(float *)(iVar7 + 0x90) - pfVar3[2];
      local_18 = fStack_4 * fStack_4 + fStack_c * fStack_c + fStack_8 * fStack_8;
      fVar8 = (float10)FUN_00982c30();
      puVar1 = puStack_14;
      local_18 = ((float)fVar8 - pfVar3[3]) / (float)local_1c;
      if (((puStack_14 != (undefined4 *)0x0) &&
          (LVar5 = InterlockedDecrement(puStack_14 + 1), LVar5 == 0)) &&
         (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      if (fStack_10 < local_18) {
        *param_3 = (int)local_20;
        return 0;
      }
    }
    if (puVar6 == (undefined4 *)0x0) {
      return 0;
    }
    iVar7 = puVar6[2];
    puVar1 = (undefined4 *)*puVar6;
    local_20 = puVar6;
  } while (iVar7 != 0);
  return 0;
}



void FUN_007ecec0(float *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  int *piVar8;
  float10 fVar9;
  undefined4 *local_38;
  float fStack_34;
  float local_30;
  undefined4 *local_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  float fStack_20;
  int *piStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  bVar5 = false;
  piVar8 = *(int **)(in_ECX + 0x70);
  if (*(int **)(in_ECX + 0x70) != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar8;
      piVar2 = *(int **)(in_ECX + 0x70);
      piVar6 = (int *)FUN_00405ad0(&local_38);
      puVar4 = local_38;
      local_30 = *(float *)(*piVar6 + 0xf8);
      if (((local_38 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(local_38 + 1), LVar7 == 0)) && (puVar4 != (undefined4 *)0x0)
         ) {
        (**(code **)*puVar4)(1);
      }
      piVar6 = (int *)FUN_00405ad0(&local_2c);
      iVar3 = *piVar6;
      fStack_18 = *(float *)(iVar3 + 0x88) - *param_1;
      fStack_14 = *(float *)(iVar3 + 0x8c) - param_1[1];
      fStack_10 = *(float *)(iVar3 + 0x90) - param_1[2];
      fStack_34 = fStack_10 * fStack_10 + fStack_18 * fStack_18 + fStack_14 * fStack_14;
      fVar9 = (float10)FUN_00982c30();
      puVar4 = local_2c;
      fStack_34 = (float)fVar9;
      fStack_20 = (fStack_34 - param_1[3]) / local_30;
      piVar6 = piStack_1c;
      if (((local_2c != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(local_2c + 1), piVar6 = piStack_1c, LVar7 == 0)) &&
         (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
        piVar6 = piStack_1c;
      }
      while ((piStack_1c = piVar2, piStack_1c != piVar8 && (piStack_1c != (int *)0x0))) {
        piVar2 = (int *)*piStack_1c;
        piVar6 = (int *)FUN_00405ad0(&puStack_28);
        puVar4 = puStack_28;
        fStack_34 = *(float *)(*piVar6 + 0xf8);
        if ((puStack_28 != (undefined4 *)0x0) &&
           ((LVar7 = InterlockedDecrement(puStack_28 + 1), LVar7 == 0 &&
            (puVar4 != (undefined4 *)0x0)))) {
          (**(code **)*puVar4)(1);
        }
        piVar6 = (int *)FUN_00405ad0(&puStack_24);
        iVar3 = *piVar6;
        fStack_c = *(float *)(iVar3 + 0x88) - *param_1;
        fStack_8 = *(float *)(iVar3 + 0x8c) - param_1[1];
        fStack_4 = *(float *)(iVar3 + 0x90) - param_1[2];
        local_30 = fStack_4 * fStack_4 + fStack_c * fStack_c + fStack_8 * fStack_8;
        fVar9 = (float10)FUN_00982c30();
        puVar4 = puStack_24;
        local_30 = ((float)fVar9 - param_1[3]) / fStack_34;
        if (((puStack_24 != (undefined4 *)0x0) &&
            (LVar7 = InterlockedDecrement(puStack_24 + 1), LVar7 == 0)) &&
           (puVar4 != (undefined4 *)0x0)) {
          (**(code **)*puVar4)(1);
        }
        piVar6 = piStack_1c;
        if (fStack_20 < local_30) {
          if (piVar8 != piStack_1c) {
            if (*(int **)(in_ECX + 0x70) == piVar8) {
              *(int *)(in_ECX + 0x70) = *piVar8;
            }
            if (*(int **)(in_ECX + 0x70) == piStack_1c) {
              *(int **)(in_ECX + 0x70) = piVar8;
            }
            if (*(int **)(in_ECX + 0x74) == piVar8) {
              *(int *)(in_ECX + 0x74) = piVar8[1];
            }
            if (*piVar8 != 0) {
              *(int *)(*piVar8 + 4) = piVar8[1];
            }
            if ((int *)piVar8[1] != (int *)0x0) {
              *(int *)piVar8[1] = *piVar8;
            }
            puVar4 = (undefined4 *)piStack_1c[1];
            piVar8[1] = (int)puVar4;
            *piVar8 = (int)piStack_1c;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = piVar8;
            }
            piStack_1c[1] = (int)piVar8;
          }
          bVar5 = true;
          piVar2 = (int *)0x0;
        }
      }
      piVar8 = piVar1;
      piStack_1c = piVar6;
    } while (piVar1 != (int *)0x0);
    if (bVar5) {
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
  }
  return;
}



undefined4 FUN_007ed160(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x70);
  *(undefined4 **)(in_ECX + 0x7c) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x7c) = *puVar1;
  return puVar1[2];
}



undefined4 FUN_007ed180(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x7c) != 0) {
    puVar1 = *(undefined4 **)(in_ECX + 0x7c);
    *(undefined4 *)(in_ECX + 0x7c) = *puVar1;
    return puVar1[2];
  }
  return 0;
}



uint FUN_007ed1a0(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  LONG LVar9;
  int in_ECX;
  undefined4 *puStack_4;
  
  piVar8 = *(int **)(in_ECX + 0x70);
  bVar5 = false;
  *(int **)(in_ECX + 0x7c) = piVar8;
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = *piVar8;
    *(int *)(in_ECX + 0x7c) = iVar1;
    uVar2 = piVar8[2];
    if ((iVar1 == 0) || (uVar2 == 0)) {
LAB_007ed1f8:
      bVar3 = false;
    }
    else {
      if (*(short *)(uVar2 + 0x118) != 0xff) {
        piVar8 = (int *)FUN_00405ad0(&puStack_4);
        bVar5 = true;
        if ((*(byte *)(*piVar8 + 0x18) & 1) == 0) goto LAB_007ed1f8;
      }
      bVar3 = true;
    }
    puVar7 = puStack_4;
    if ((((bVar5) && (bVar5 = false, puStack_4 != (undefined4 *)0x0)) &&
        (LVar9 = InterlockedDecrement(puStack_4 + 1), LVar9 == 0)) && (puVar7 != (undefined4 *)0x0))
    {
      (**(code **)*puVar7)(1);
    }
    bVar6 = false;
    if (!bVar3) break;
    piVar8 = *(int **)(in_ECX + 0x7c);
  } while( true );
  if (uVar2 == 0) {
LAB_007ed25f:
    bVar4 = 0;
  }
  else {
    if (*(short *)(uVar2 + 0x118) != 0xff) {
      piVar8 = (int *)FUN_00405ad0(&puStack_4);
      bVar6 = true;
      if ((*(byte *)(*piVar8 + 0x18) & 1) == 0) goto LAB_007ed25f;
    }
    bVar4 = 1;
  }
  if (((bVar6) && (puStack_4 != (undefined4 *)0x0)) &&
     ((LVar9 = InterlockedDecrement(puStack_4 + 1), LVar9 == 0 && (puStack_4 != (undefined4 *)0x0)))
     ) {
    (**(code **)*puStack_4)(1);
  }
  return ~-(uint)bVar4 & uVar2;
}



uint FUN_007ed1bd(uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *in_EAX;
  int *piVar6;
  LONG LVar7;
  int unaff_EBP;
  
  do {
    iVar1 = *in_EAX;
    *(int *)(unaff_EBP + 0x7c) = iVar1;
    uVar2 = in_EAX[2];
    if ((iVar1 == 0) || (uVar2 == 0)) {
LAB_007ed1f8:
      bVar3 = false;
    }
    else {
      if (*(short *)(uVar2 + 0x118) != 0xff) {
        piVar6 = (int *)FUN_00405ad0(&param_2);
        param_1 = param_1 | 1;
        if ((*(byte *)(*piVar6 + 0x18) & 1) == 0) goto LAB_007ed1f8;
      }
      bVar3 = true;
    }
    puVar5 = param_2;
    if ((param_1 & 1) != 0) {
      param_1 = param_1 & 0xfffffffe;
      if (param_2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(param_2 + 1);
        if ((LVar7 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
    }
    if (!bVar3) break;
    in_EAX = *(int **)(unaff_EBP + 0x7c);
  } while( true );
  if (uVar2 == 0) {
LAB_007ed25f:
    bVar4 = 0;
  }
  else {
    if (*(short *)(uVar2 + 0x118) != 0xff) {
      piVar6 = (int *)FUN_00405ad0(&param_2);
      param_1 = param_1 | 2;
      if ((*(byte *)(*piVar6 + 0x18) & 1) == 0) goto LAB_007ed25f;
    }
    bVar4 = 1;
  }
  puVar5 = param_2;
  if (((param_1 & 2) != 0) && (param_2 != (undefined4 *)0x0)) {
    LVar7 = InterlockedDecrement(param_2 + 1);
    if ((LVar7 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
  }
  return ~-(uint)bVar4 & uVar2;
}



uint FUN_007ed2a0(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  undefined4 *puVar7;
  int *piVar8;
  LONG LVar9;
  int in_ECX;
  undefined4 *puStack_4;
  
  piVar8 = *(int **)(in_ECX + 0x70);
  bVar5 = false;
  *(int **)(in_ECX + 0x7c) = piVar8;
  if (piVar8 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = *piVar8;
    *(int *)(in_ECX + 0x7c) = iVar1;
    uVar2 = piVar8[2];
    if ((iVar1 == 0) || (uVar2 == 0)) {
LAB_007ed301:
      bVar3 = false;
    }
    else {
      if (*(short *)(uVar2 + 0x118) != 0xff) {
        piVar8 = (int *)FUN_00405ad0(&puStack_4);
        bVar5 = true;
        if (((*(byte *)(*piVar8 + 0x18) & 1) == 0) && (*(char *)(uVar2 + 0xf4) != '\x01'))
        goto LAB_007ed301;
      }
      bVar3 = true;
    }
    puVar7 = puStack_4;
    if ((((bVar5) && (bVar5 = false, puStack_4 != (undefined4 *)0x0)) &&
        (LVar9 = InterlockedDecrement(puStack_4 + 1), LVar9 == 0)) && (puVar7 != (undefined4 *)0x0))
    {
      (**(code **)*puVar7)(1);
    }
    bVar6 = false;
    if (!bVar3) break;
    piVar8 = *(int **)(in_ECX + 0x7c);
  } while( true );
  if (uVar2 == 0) {
LAB_007ed371:
    bVar4 = 0;
  }
  else {
    if (*(short *)(uVar2 + 0x118) != 0xff) {
      piVar8 = (int *)FUN_00405ad0(&puStack_4);
      bVar6 = true;
      if (((*(byte *)(*piVar8 + 0x18) & 1) == 0) && (*(char *)(uVar2 + 0xf4) != '\x01'))
      goto LAB_007ed371;
    }
    bVar4 = 1;
  }
  if (((bVar6) && (puStack_4 != (undefined4 *)0x0)) &&
     ((LVar9 = InterlockedDecrement(puStack_4 + 1), LVar9 == 0 && (puStack_4 != (undefined4 *)0x0)))
     ) {
    (**(code **)*puStack_4)(1);
  }
  return ~-(uint)bVar4 & uVar2;
}



uint FUN_007ed2bd(uint param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 *puVar5;
  int *in_EAX;
  int *piVar6;
  LONG LVar7;
  int unaff_EBP;
  
  do {
    iVar1 = *in_EAX;
    *(int *)(unaff_EBP + 0x7c) = iVar1;
    uVar2 = in_EAX[2];
    if ((iVar1 == 0) || (uVar2 == 0)) {
LAB_007ed301:
      bVar3 = false;
    }
    else {
      if (*(short *)(uVar2 + 0x118) != 0xff) {
        piVar6 = (int *)FUN_00405ad0(&param_2);
        param_1 = param_1 | 1;
        if (((*(byte *)(*piVar6 + 0x18) & 1) == 0) && (*(char *)(uVar2 + 0xf4) != '\x01'))
        goto LAB_007ed301;
      }
      bVar3 = true;
    }
    puVar5 = param_2;
    if ((param_1 & 1) != 0) {
      param_1 = param_1 & 0xfffffffe;
      if (param_2 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(param_2 + 1);
        if ((LVar7 == 0) && (puVar5 != (undefined4 *)0x0)) {
          (**(code **)*puVar5)(1);
        }
      }
    }
    if (!bVar3) break;
    in_EAX = *(int **)(unaff_EBP + 0x7c);
  } while( true );
  if (uVar2 == 0) {
LAB_007ed371:
    bVar4 = 0;
  }
  else {
    if (*(short *)(uVar2 + 0x118) != 0xff) {
      piVar6 = (int *)FUN_00405ad0(&param_2);
      param_1 = param_1 | 2;
      if (((*(byte *)(*piVar6 + 0x18) & 1) == 0) && (*(char *)(uVar2 + 0xf4) != '\x01'))
      goto LAB_007ed371;
    }
    bVar4 = 1;
  }
  puVar5 = param_2;
  if (((param_1 & 2) != 0) && (param_2 != (undefined4 *)0x0)) {
    LVar7 = InterlockedDecrement(param_2 + 1);
    if ((LVar7 == 0) && (puVar5 != (undefined4 *)0x0)) {
      (**(code **)*puVar5)(1);
    }
  }
  return ~-(uint)bVar4 & uVar2;
}



uint FUN_007ed3b0(void)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *piVar7;
  LONG LVar8;
  int in_ECX;
  uint uVar9;
  undefined4 *local_4;
  
  uVar9 = 0;
  bVar5 = false;
  bVar4 = false;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    do {
      piVar7 = *(int **)(in_ECX + 0x7c);
      iVar1 = *piVar7;
      *(int *)(in_ECX + 0x7c) = iVar1;
      uVar9 = piVar7[2];
      if ((uVar9 == 0) || (iVar1 == 0)) {
LAB_007ed403:
        bVar2 = false;
      }
      else {
        if (*(short *)(uVar9 + 0x118) != 0xff) {
          piVar7 = (int *)FUN_00405ad0(&local_4);
          bVar4 = true;
          if ((*(byte *)(*piVar7 + 0x18) & 1) == 0) goto LAB_007ed403;
        }
        bVar2 = true;
      }
      puVar6 = local_4;
      if (bVar4) {
        bVar4 = false;
        if (local_4 != (undefined4 *)0x0) {
          LVar8 = InterlockedDecrement(local_4 + 1);
          if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
            (**(code **)*puVar6)(1);
          }
        }
      }
      bVar5 = false;
    } while (bVar2);
    if (uVar9 != 0) {
      if (*(short *)(uVar9 + 0x118) != 0xff) {
        piVar7 = (int *)FUN_00405ad0(&local_4);
        bVar5 = true;
        if ((*(byte *)(*piVar7 + 0x18) & 1) == 0) goto LAB_007ed465;
      }
      bVar3 = 1;
      goto LAB_007ed467;
    }
  }
LAB_007ed465:
  bVar3 = 0;
LAB_007ed467:
  if ((bVar5) && (local_4 != (undefined4 *)0x0)) {
    LVar8 = InterlockedDecrement(local_4 + 1);
    if ((LVar8 == 0) && (local_4 != (undefined4 *)0x0)) {
      (**(code **)*local_4)(1);
    }
  }
  return ~-(uint)bVar3 & uVar9;
}



uint FUN_007ed4b0(void)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  undefined4 *puVar6;
  int *piVar7;
  LONG LVar8;
  int in_ECX;
  uint uVar9;
  undefined4 *local_4;
  
  uVar9 = 0;
  bVar5 = false;
  bVar4 = false;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    do {
      piVar7 = *(int **)(in_ECX + 0x7c);
      iVar1 = *piVar7;
      *(int *)(in_ECX + 0x7c) = iVar1;
      uVar9 = piVar7[2];
      if ((uVar9 == 0) || (iVar1 == 0)) {
LAB_007ed50c:
        bVar2 = false;
      }
      else {
        if (*(short *)(uVar9 + 0x118) != 0xff) {
          piVar7 = (int *)FUN_00405ad0(&local_4);
          bVar4 = true;
          if (((*(byte *)(*piVar7 + 0x18) & 1) == 0) && (*(char *)(uVar9 + 0xf4) != '\x01'))
          goto LAB_007ed50c;
        }
        bVar2 = true;
      }
      puVar6 = local_4;
      if (bVar4) {
        bVar4 = false;
        if (local_4 != (undefined4 *)0x0) {
          LVar8 = InterlockedDecrement(local_4 + 1);
          if ((LVar8 == 0) && (puVar6 != (undefined4 *)0x0)) {
            (**(code **)*puVar6)(1);
          }
        }
      }
      bVar5 = false;
    } while (bVar2);
    if (uVar9 != 0) {
      if (*(short *)(uVar9 + 0x118) != 0xff) {
        piVar7 = (int *)FUN_00405ad0(&local_4);
        bVar5 = true;
        if (((*(byte *)(*piVar7 + 0x18) & 1) == 0) && (*(char *)(uVar9 + 0xf4) != '\x01'))
        goto LAB_007ed577;
      }
      bVar3 = 1;
      goto LAB_007ed579;
    }
  }
LAB_007ed577:
  bVar3 = 0;
LAB_007ed579:
  if ((bVar5) && (local_4 != (undefined4 *)0x0)) {
    LVar8 = InterlockedDecrement(local_4 + 1);
    if ((LVar8 == 0) && (local_4 != (undefined4 *)0x0)) {
      (**(code **)*local_4)(1);
    }
  }
  return ~-(uint)bVar3 & uVar9;
}



undefined2 FUN_007ed5c0(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 0x78);
}



int FUN_007ed5d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x70);
  iVar3 = 0;
  while (puVar2 != (undefined4 *)0x0) {
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    if ((*piVar1 != 0) && (*(short *)(*piVar1 + 0x118) != 0xff)) {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



int FUN_007ed600(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x70);
  iVar3 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (((iVar2 != 0) && (*(short *)(iVar2 + 0x118) != 0xff)) && (*(char *)(iVar2 + 0xf4) == '\0'))
    {
      iVar3 = iVar3 + 1;
    }
  }
  return iVar3;
}



undefined4 FUN_007ed640(undefined4 param_1)

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
  iVar2 = FUN_00401f00(0x6c,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FUN_007e27f0();
  }
  local_4 = 0xffffffff;
  FUN_007e2490(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007ed6c0(int param_1,int param_2,float param_3)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int *piVar8;
  LONG LVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  undefined4 *local_28;
  undefined4 uStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  float local_10;
  float local_c;
  float local_8;
  float fStack_4;
  
  uVar4 = DAT_00b25ad4;
  if (7 < param_1) {
    return;
  }
  if (param_2 == 0) {
    uVar7 = param_1 + 1U & 0xffff;
    (&DAT_00b46498)[uVar7 * 4] = (float)DAT_00b25ad0;
    uVar5 = DAT_00b25ad8;
    (&DAT_00b4649c)[uVar7 * 4] = (float)uVar4;
    uVar4 = DAT_00b25adc;
    (&DAT_00b464a0)[uVar7 * 4] = (float)uVar5;
    (&DAT_00b464a4)[uVar7 * 4] = (float)uVar4;
    return;
  }
  piVar8 = (int *)FUN_00405ad0(&local_28);
  iVar3 = *piVar8;
  if (((local_28 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(local_28 + 1), LVar9 == 0))
     && (local_28 != (undefined4 *)0x0)) {
    (**(code **)*local_28)(1);
  }
  cVar2 = *(char *)(param_2 + 0xfc);
  if (cVar2 == '\0') {
    if (iVar3 != 0) {
      local_10 = *(float *)(iVar3 + 0x108);
      local_c = *(float *)(iVar3 + 0x10c);
      local_8 = *(float *)(iVar3 + 0x110);
      FUN_0043f350();
      fStack_20 = local_10;
      fStack_1c = local_c;
      fStack_18 = local_8;
      uStack_14 = 0x3f800000;
      FUN_007ecae0(param_1 + 0x11,local_10,local_c,local_8,0x3f800000);
    }
    if ((DAT_00b42ea7 == '\0') || (cVar6 = FUN_00405650(&DAT_00b40224,iVar3), cVar6 != '\0')) {
      fVar11 = (float10)param_3;
      fStack_18 = *(float *)(iVar3 + 0xdc);
      if ((DAT_00b43070 == '\0') && (1.0 < fStack_18)) {
        fStack_18 = 1.0;
      }
      fStack_20 = *(float *)(iVar3 + 0xe0) * fStack_18;
      fStack_1c = *(float *)(iVar3 + 0xe4) * fStack_18;
      fStack_18 = fStack_18 * *(float *)(iVar3 + 0xe8);
      if (0.0 < _DAT_00b46924) {
        fVar1 = fStack_18 + fStack_1c * 0.34 + fStack_20 * 0.33 + 0.33;
        if (fVar1 < 0.0 == (fVar1 == 0.0)) {
          if (fVar1 <= _DAT_00b46924) {
            fVar1 = _DAT_00b46924 / fVar1;
          }
          else {
            fVar1 = 1.0;
          }
          local_10 = fVar1 * (fStack_20 + 0.1);
          local_c = fVar1 * (fStack_1c + 0.1);
          fStack_18 = (fStack_18 + 0.1) * fVar1;
        }
        else {
          local_10 = _DAT_00b46924;
          local_c = _DAT_00b46924;
          fStack_18 = _DAT_00b46924;
        }
        fStack_20 = local_10;
        fStack_1c = local_c;
      }
      DAT_00b46498 = (float)((float10)fStack_20 * fVar11);
      DAT_00b4649c = (float)((float10)fStack_1c * fVar11);
      DAT_00b464a0 = (float)((float10)fStack_18 * fVar11);
      fVar12 = (float10)1;
      DAT_00b464a4 = (float)fVar12;
      fStack_4 = DAT_00b464a4;
      goto LAB_007eda22;
    }
  }
  else if (iVar3 != 0) {
    fStack_20 = *(float *)(iVar3 + 0x88);
    fStack_1c = *(float *)(iVar3 + 0x8c);
    fStack_18 = *(float *)(iVar3 + 0x90);
    uStack_14 = 0x3f800000;
    local_10 = fStack_20;
    local_c = fStack_1c;
    local_8 = fStack_18;
    fVar12 = (float10)FUN_007ecae0(param_1 + 9,fStack_20,fStack_1c,fStack_18,0x3f800000);
    fVar11 = extraout_ST1;
    goto LAB_007eda22;
  }
  fVar11 = (float10)param_3;
  fVar12 = (float10)1;
LAB_007eda22:
  local_8 = *(float *)(iVar3 + 0xdc);
  if ((DAT_00b43070 == '\0') && (1.0 < local_8)) {
    local_8 = (float)fVar12;
  }
  local_10 = *(float *)(iVar3 + 0xec) * local_8;
  local_c = *(float *)(iVar3 + 0xf0) * local_8;
  local_8 = local_8 * *(float *)(iVar3 + 0xf4);
  fStack_18 = *(float *)(param_2 + 0xd4);
  fStack_20 = fStack_18 * (float)((float10)local_10 * fVar11);
  fStack_1c = fStack_18 * (float)((float10)local_c * fVar11);
  fStack_18 = fStack_18 * (float)((float10)local_8 * fVar11);
  if (cVar2 == '\0') {
    if ((DAT_00b43070 != '\0') && (DAT_00b43074 == '\0')) {
      FUN_0069dd70(_DAT_00b42f4c);
    }
  }
  else if (fVar11 < fVar12) {
    fStack_20 = DAT_00b3fa90;
    fStack_1c = DAT_00b3fa94;
    fStack_18 = DAT_00b3fa98;
  }
  uStack_24 = *(undefined4 *)(param_2 + 0xd8);
  if (((((0x10e < (ushort)DAT_00b42e90) && ((ushort)DAT_00b42e90 < 0x12a)) ||
       ((ushort)DAT_00b42e90 == 0x16a)) ||
      (((ushort)DAT_00b42e90 == 0x16c || ((ushort)((ushort)DAT_00b42e90 - 0x173) < 3)))) &&
     (iVar10 = FUN_00707530(4), iVar10 != 0)) {
    piVar8 = (int *)FUN_00707530(4);
    iVar10 = (**(code **)(*piVar8 + 0x54))();
    if (4 < iVar10) {
      piVar8 = (int *)FUN_00707530(4);
      iVar10 = (**(code **)(*piVar8 + 0x54))();
      if ((iVar10 < 0xb) && (iVar10 = FUN_00707530(4), iVar10 != 0)) {
        fVar1 = *(float *)(iVar10 + 0x9c);
        fStack_20 = fVar1 * fStack_20;
        fStack_1c = fVar1 * fStack_1c;
        fStack_18 = fVar1 * fStack_18;
      }
    }
  }
  uVar7 = param_1 + 1U & 0xffff;
  (&DAT_00b46498)[uVar7 * 4] = fStack_20;
  (&DAT_00b4649c)[uVar7 * 4] = fStack_1c;
  (&DAT_00b464a0)[uVar7 * 4] = fStack_18;
  (&DAT_00b464a4)[uVar7 * 4] = (float)uStack_24;
  if (cVar2 != '\0') {
    uVar7 = param_1 + 0x11U & 0xffff;
    (&DAT_00b46498)[uVar7 * 4] = (float)*(undefined4 *)(iVar3 + 0xf8);
    (&DAT_00b4649c)[uVar7 * 4] = 0.0;
    (&DAT_00b464a0)[uVar7 * 4] = 0.0;
    (&DAT_00b464a4)[uVar7 * 4] = 1.0;
  }
  DAT_00b42f3d = cVar2;
  *(uint *)(&DAT_00b46138 + param_1 * 4) = (cVar2 != '\0') + 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007edcd0(int param_1,int param_2,float param_3)

{
  char cVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  LONG LVar5;
  undefined4 *local_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  float local_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  undefined4 uStack_4;
  
  if (param_1 < 0x14) {
    if (param_2 == 0) {
      FUN_007fab00(param_1,DAT_00b25ad0,DAT_00b25ad4,DAT_00b25ad8,DAT_00b25adc);
      return;
    }
    piVar4 = (int *)FUN_00405ad0(&local_34);
    iVar2 = *piVar4;
    if (((local_34 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(local_34 + 1), LVar5 == 0)
        ) && (local_34 != (undefined4 *)0x0)) {
      (**(code **)*local_34)(1);
    }
    cVar1 = *(char *)(param_2 + 0xfc);
    if (cVar1 == '\0') {
      if (iVar2 != 0) {
        local_1c = *(float *)(iVar2 + 0x108);
        local_18 = *(float *)(iVar2 + 0x10c);
        local_14 = *(float *)(iVar2 + 0x110);
        FUN_0043f350();
        fStack_2c = local_1c;
        fStack_28 = local_18;
        fStack_24 = local_14;
        uStack_20 = 0x3f800000;
        FUN_007faad0(param_1,local_1c,local_18,local_14,0x3f800000);
      }
      if ((DAT_00b42ea7 == '\0') || (cVar3 = FUN_00405650(&DAT_00b40224,iVar2), cVar3 != '\0')) {
        fStack_30 = _DAT_00b46924;
        fStack_24 = *(float *)(iVar2 + 0xdc);
        if ((DAT_00b43070 == '\0') && (1.0 < fStack_24)) {
          fStack_24 = 1.0;
        }
        fStack_2c = *(float *)(iVar2 + 0xe0) * fStack_24;
        fStack_28 = *(float *)(iVar2 + 0xe4) * fStack_24;
        fStack_24 = fStack_24 * *(float *)(iVar2 + 0xe8);
        if (0.0 < _DAT_00b46924) {
          fStack_30 = fStack_24 + fStack_28 * 0.34 + fStack_2c * 0.33 + 0.33;
          if (fStack_30 < 0.0 == (fStack_30 == 0.0)) {
            if (fStack_30 <= _DAT_00b46924) {
              fStack_30 = _DAT_00b46924 / fStack_30;
            }
            else {
              fStack_30 = 1.0;
            }
            local_1c = fStack_30 * (fStack_2c + 0.1);
            local_18 = fStack_30 * (fStack_28 + 0.1);
            fStack_24 = (fStack_24 + 0.1) * fStack_30;
          }
          else {
            local_1c = _DAT_00b46924;
            local_18 = _DAT_00b46924;
            fStack_24 = _DAT_00b46924;
          }
          fStack_2c = local_1c;
          fStack_28 = local_18;
          local_14 = fStack_24;
        }
        fStack_2c = fStack_2c * param_3;
        fStack_28 = fStack_28 * param_3;
        fStack_24 = param_3 * fStack_24;
        uStack_4 = 0x3f800000;
        fStack_10 = fStack_2c;
        fStack_c = fStack_28;
        fStack_8 = fStack_24;
        FUN_007fab30(fStack_2c,fStack_28,fStack_24,0x3f800000);
      }
    }
    else if (iVar2 != 0) {
      local_1c = *(float *)(iVar2 + 0x88);
      local_18 = *(float *)(iVar2 + 0x8c);
      local_14 = *(float *)(iVar2 + 0x90);
      fStack_2c = *(float *)(iVar2 + 0xf8);
      fStack_28 = *(float *)(iVar2 + 0xfc);
      fStack_24 = *(float *)(iVar2 + 0x100);
      fStack_10 = local_1c;
      fStack_c = local_18;
      fStack_8 = local_14;
      uStack_4 = fStack_2c;
      FUN_007faad0(param_1,local_1c,local_18,local_14,fStack_2c);
    }
    local_14 = *(float *)(iVar2 + 0xdc);
    if ((DAT_00b43070 == '\0') && (1.0 < local_14)) {
      local_14 = 1.0;
    }
    local_1c = *(float *)(iVar2 + 0xec) * local_14;
    local_18 = *(float *)(iVar2 + 0xf0) * local_14;
    local_14 = local_14 * *(float *)(iVar2 + 0xf4);
    fStack_30 = *(float *)(param_2 + 0xd4);
    fStack_2c = fStack_30 * local_1c * param_3;
    fStack_28 = fStack_30 * local_18 * param_3;
    fStack_24 = fStack_30 * local_14 * param_3;
    if (cVar1 == '\0') {
      if ((DAT_00b43070 != '\0') && (DAT_00b43074 == '\0')) {
        FUN_0069dd70(_DAT_00b42f4c);
      }
    }
    else if (param_3 < 1.0) {
      fStack_2c = DAT_00b3fa90;
      fStack_28 = DAT_00b3fa94;
      fStack_24 = DAT_00b3fa98;
    }
    fStack_10 = fStack_2c;
    fStack_c = fStack_28;
    fStack_8 = fStack_24;
    uStack_4 = *(undefined4 *)(param_2 + 0xd8);
    FUN_007fab00(param_1,fStack_2c,fStack_28,fStack_24,uStack_4);
  }
  return;
}



undefined4 FUN_007ee1d0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x84);
  *(undefined4 **)(in_ECX + 0x90) = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x90) = *puVar1;
  return puVar1[2];
}



undefined4 FUN_007ee1f0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x90) != 0) {
    puVar1 = *(undefined4 **)(in_ECX + 0x90);
    *(undefined4 *)(in_ECX + 0x90) = *puVar1;
    return puVar1[2];
  }
  return 0;
}



void FUN_007ee210(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfb58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a924d0;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a924b0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ee270(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfb88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a924e0;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a924c0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ee2f0(byte param_1)

{
  FUN_007ee210();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007ee310(byte param_1)

{
  FUN_007ee270();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007ee330(undefined4 param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_007ecc60(param_1,param_2,&param_2);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      FUN_00589640(param_2,&param_1);
      *(undefined4 *)(in_ECX + 0x24) = 0;
      return;
    }
    FUN_005b1e20(&param_1);
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_007ee390(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(*DAT_00b42eb8 + 0xbc) + 0x1c))();
  if (iVar1 == 0x1b) {
    FUN_007edcd0(param_1,param_2);
    return;
  }
  FUN_007ed6c0(param_1,param_2,param_3);
  return;
}



void FUN_007ee3e0(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x80) + 4))();
  puVar1[2] = param_1;
  *puVar1 = 0;
  puVar1[1] = *(undefined4 *)(in_ECX + 0x88);
  if (*(undefined4 **)(in_ECX + 0x88) != (undefined4 *)0x0) {
    **(undefined4 **)(in_ECX + 0x88) = puVar1;
    *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
    *(undefined4 **)(in_ECX + 0x88) = puVar1;
    *(undefined4 *)(in_ECX + 0x24) = 0;
    return;
  }
  *(int *)(in_ECX + 0x8c) = *(int *)(in_ECX + 0x8c) + 1;
  *(undefined4 **)(in_ECX + 0x84) = puVar1;
  *(undefined4 **)(in_ECX + 0x88) = puVar1;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_007ee440(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cfbd1;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007e27f0(uVar1);
  *in_ECX = &PTR_FUN_00a92524;
  in_ECX[0x1e] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1b] = &PTR_FUN_00a92504;
  in_ECX[0x23] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x20] = &PTR_FUN_00a92514;
  local_4 = 2;
  FUN_00573880();
  in_ECX[0x1f] = 0;
  FUN_00573880();
  in_ECX[0x25] = 0x3f800000;
  in_ECX[0x24] = 0;
  in_ECX[0x26] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ee4f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cfc11;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a92524;
  local_4 = 2;
  FUN_00573880(uVar4);
  in_ECX[0x1f] = 0;
  if (in_ECX[0x23] != 0) {
    do {
      piVar1 = (int *)in_ECX[0x21];
      iVar2 = *(int *)(in_ECX[0x21] + 8);
      iVar3 = *piVar1;
      in_ECX[0x21] = iVar3;
      if (iVar3 == 0) {
        in_ECX[0x22] = 0;
      }
      else {
        *(undefined4 *)(iVar3 + 4) = 0;
      }
      (**(code **)(in_ECX[0x20] + 8))(piVar1);
      in_ECX[0x23] = in_ECX[0x23] + -1;
      if (iVar2 != 0) {
        FUN_0056c0f0();
        FUN_00401f20(iVar2);
      }
    } while (in_ECX[0x23] != 0);
  }
  in_ECX[0x24] = 0;
  local_4._0_1_ = 1;
  FUN_007ee270();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_007ee210();
  local_4 = 0xffffffff;
  FUN_007e2650();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ee5d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  iVar1 = param_1;
  FUN_007e28e0(param_1);
  param_1 = FUN_0070f910(DAT_00b4618c);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  param_1 = FUN_0070faa0("number of lights",*(undefined4 *)(in_ECX + 0x78));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  uVar2 = FUN_007ed5d0();
  param_1 = FUN_0070faa0("active lights",uVar2);
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  if (*(int *)(in_ECX + 0x8c) != 0) {
    param_1 = FUN_0070fb40("number of decals",*(int *)(in_ECX + 0x8c));
    uVar3 = (uint)*(ushort *)(iVar1 + 10);
    if (*(ushort *)(iVar1 + 8) <= uVar3) {
      FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
    }
    FUN_0042bb90(uVar3,&param_1);
  }
  param_1 = FUN_0070fb40("Reference ID",*(undefined4 *)(in_ECX + 0x98));
  uVar3 = (uint)*(ushort *)(iVar1 + 10);
  if (*(ushort *)(iVar1 + 8) <= uVar3) {
    FUN_004e4a10(*(ushort *)(iVar1 + 0xe) + uVar3);
  }
  FUN_0042bb90(uVar3,&param_1);
  return;
}



void FUN_007ee720(void)

{
  int in_ECX;
  
  FUN_00776690(&stack0x00000004);
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}



void FUN_007ee740(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  int local_4;
  
  if (*(int *)(in_ECX + 0x8c) != 0) {
    puVar1 = *(undefined4 **)(in_ECX + 0x84);
    *(undefined4 **)(in_ECX + 0x90) = puVar1;
    local_4 = 0;
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x90) = *puVar1;
      local_4 = puVar1[2];
    }
    if (local_4 != 0) {
      while (local_4 != param_1) {
        if (*(int *)(in_ECX + 0x90) == 0) {
          return;
        }
        puVar1 = *(undefined4 **)(in_ECX + 0x90);
        *(undefined4 *)(in_ECX + 0x90) = *puVar1;
        local_4 = puVar1[2];
        if (local_4 == 0) {
          return;
        }
      }
      FUN_00776690(&local_4);
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
  }
  return;
}



void FUN_007ee7c0(byte param_1)

{
  FUN_007ee4f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007ee7e0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa8))();
                    /* WARNING: Could not recover jumptable at 0x007ee7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xb4))();
  return;
}



void FUN_007ee800(void)

{
  undefined4 *in_ECX;
  
  FUN_00802540();
  *in_ECX = &PTR_FUN_00a925f4;
  in_ECX[0x2b] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x2c] = DAT_00b25ac4;
  in_ECX[0x2d] = DAT_00b25ac8;
  in_ECX[0x2e] = DAT_00b25acc;
  *(undefined1 *)(in_ECX + 8) = 1;
  return;
}



void FUN_007ee8a0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cfc46;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a925f4;
  local_4 = 1;
  piVar4 = &DAT_00b466e0;
  do {
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb466f0);
  piVar4 = &DAT_00b46708;
  do {
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
  } while ((int)piVar4 < 0xb46710);
  if (DAT_00b46704 != 0) {
    piVar4 = (int *)(DAT_00b46704 + 0x60);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_007604d0(uVar2);
    }
    DAT_00b46704 = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x2b];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007ee9c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x2c) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a4750(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("ambient color",0x10000006,0,0,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0xb0,0);
  }
  puVar1 = (undefined4 *)(in_ECX + 0x30);
  if (*(int *)(in_ECX + 0x30) == 0) {
    iVar3 = FUN_00401f00(0x34,uVar2);
    local_4 = 1;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_009a8490(*(undefined4 *)(in_ECX + 0x14));
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(uVar4);
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("eye pos",0x10000006,0,8,1,&DAT_00a2f7ec,0xc,4,&DAT_00b46710,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("velocity",0x10000006,0,9,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0x7c,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              (&DAT_00a6a624,0x10000006,0,10,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0x88,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              (&DAT_00a6a628,0x10000006,0,0xb,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0x94,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("params",0x10000006,0,0xc,1,&DAT_00a2f7ec,0xc,4,in_ECX + 0xa0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("cam up",0x10000006,0,0xd,1,&DAT_00a2f7ec,0xc,4,&DAT_00b466f8,0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_007eee40(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d0cb6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(8,uVar2);
  piVar8 = (int *)0x0;
  local_4 = 0;
  if (iVar3 != 0) {
    piVar8 = (int *)FUN_007aed00();
  }
  local_4 = 0xffffffff;
  puVar4 = (undefined4 *)FUN_00771090(DAT_00b43104,3,2);
  puVar6 = (undefined4 *)*piVar8;
  if (puVar6 != puVar4) {
    if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)) &&
       (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar8 = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  (**(code **)(*(int *)*piVar8 + 0x50))(0,0,0,2,0);
  (**(code **)(*(int *)*piVar8 + 0x50))(1,7,5,1,0);
  (**(code **)(*(int *)*piVar8 + 0x4c))(1,0,6,0x80000000,2,5,1,0);
  if ((int *)*piVar8 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*(int *)*piVar8 + 4))();
        (puVar6 != (undefined4 *)0x0 && (puVar6 != &DAT_00b3f684)); puVar6 = (undefined4 *)puVar6[1]
        ) {
    }
  }
  iVar3 = FUN_00401f00(0xbc);
  if (iVar3 == 0) {
    piVar7 = (int *)0x0;
  }
  else {
    piVar7 = (int *)FUN_007ee800();
  }
  (**(code **)(*piVar7 + 0x84))();
  (**(code **)(*piVar7 + 0xa8))();
  (**(code **)(*piVar7 + 0xb4))();
  (**(code **)(*piVar7 + 0x88))();
  (**(code **)(*piVar7 + 0x54))(*piVar8);
  piVar1 = (int *)piVar8[1];
  if (piVar1 != piVar7) {
    if (((piVar1 != (int *)0x0) && (LVar5 = InterlockedDecrement(piVar1 + 1), LVar5 == 0)) &&
       (piVar1 != (int *)0x0)) {
      (**(code **)*piVar1)(1);
    }
    piVar8[1] = (int)piVar7;
    InterlockedIncrement(piVar7 + 1);
  }
  *unaff_FS_OFFSET = iVar3;
  return piVar8;
}



undefined4 FUN_007ef2f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009cfc88;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  local_4 = 0;
  piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
  iVar6 = DAT_00b46704;
  local_4._0_1_ = 1;
  if (DAT_00b46704 != *piVar4) {
    if ((DAT_00b46704 != 0) &&
       (*(int *)(DAT_00b46704 + 0x60) = *(int *)(DAT_00b46704 + 0x60) + -1,
       *(int *)(iVar6 + 0x60) == 0)) {
      FUN_007604d0();
    }
    DAT_00b46704 = *piVar4;
    if (DAT_00b46704 != 0) {
      *(int *)(DAT_00b46704 + 0x60) = *(int *)(DAT_00b46704 + 0x60) + 1;
    }
  }
  local_4._0_1_ = 0;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0)) {
    FUN_007604d0();
  }
  piVar4 = (int *)FUN_00772630(&local_14);
  iVar6 = *piVar4;
  iVar7 = 0;
  if (iVar6 != 0) {
    *(int *)(iVar6 + 0x5c) = *(int *)(iVar6 + 0x5c) + 1;
    iVar7 = iVar6;
    local_10 = iVar6;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  if ((local_14 != 0) &&
     (*(int *)(local_14 + 0x5c) = *(int *)(local_14 + 0x5c) + -1, *(int *)(local_14 + 0x5c) == 0)) {
    FUN_00772560();
  }
  FUN_00801110(iVar7,0,3,2);
  FUN_00771640(1);
  FUN_00760010(*(undefined4 *)(DAT_00b46704 + 0x14),iVar7);
  puVar2 = DAT_00b466e0;
  puVar1 = *(undefined4 **)(DAT_00b46704 + 0x58);
  puVar8 = (undefined4 *)(DAT_00b46704 + 0x58);
  if (puVar1 != DAT_00b466e0) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *puVar8 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  puVar2 = DAT_00b46708;
  puVar1 = *(undefined4 **)(DAT_00b46704 + 0x44);
  puVar8 = (undefined4 *)(DAT_00b46704 + 0x44);
  if (puVar1 != DAT_00b46708) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *puVar8 = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(7,1,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0xe,0,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0x17,4,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0x1b,1,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0x13,5,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0x14,6,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0xf,0,0);
  piVar4 = (int *)(DAT_00b46704 + 0x30);
  if (*piVar4 == 0) {
    iVar6 = FUN_00772df0();
    *piVar4 = iVar6;
  }
  FUN_00772cd0(0xa8,7,0);
  local_4 = 0xffffffff;
  if (iVar7 != 0) {
    piVar4 = (int *)(iVar7 + 0x5c);
    *piVar4 = *piVar4 + -1;
    if (*piVar4 == 0) {
      FUN_00772560();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_007ef690(byte param_1)

{
  FUN_007ee8a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_007ef6b0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int in_stack_00000010;
  int iStack_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d31c0;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  iVar3 = DAT_00b46704;
  iVar6 = 0;
  iStack_14 = 0;
  iStack_10 = 0;
  iStack_4._0_1_ = 1;
  iStack_4._1_3_ = 0;
  iVar7 = 0;
  if (((DAT_00b42e90 == 0x19b) && (DAT_00b46704 != 0)) &&
     (iStack_14 = DAT_00b46704, iVar7 = iVar3, DAT_00b46704 != 0)) {
    *(int *)(DAT_00b46704 + 0x60) = *(int *)(DAT_00b46704 + 0x60) + 1;
    piVar1 = *(int **)(in_stack_00000010 + 0x18);
    iVar2 = piVar1[0x2a];
    iVar3 = **(int **)(iVar3 + 0x24);
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
      iStack_10 = iVar3;
    }
    iVar6 = iStack_10;
    FUN_0076c910(piVar1[0x27]);
    uVar5 = (**(code **)(*piVar1 + 0x68))();
    FUN_008011e0(iVar6,uVar5);
    if (iVar2 == 1) {
      if (piVar1[0x29] == 1) {
        FUN_007aecb0(DAT_00b466e8);
        uVar5 = DAT_00b4670c;
      }
      else {
        FUN_007aecb0(DAT_00b466ec);
        uVar5 = DAT_00b4670c;
      }
    }
    else {
      uVar5 = DAT_00b466e4;
      if (piVar1[0x29] == 1) {
        uVar5 = DAT_00b466e0;
      }
      FUN_007aecb0(uVar5);
      uVar5 = DAT_00b46708;
    }
    FUN_007aec60(uVar5);
    in_ECX[0x28] = _DAT_00b2daec;
    FUN_007ef980(in_ECX + 0x1f,in_ECX + 0x22,in_ECX + 0x25,in_ECX + 0x2a);
    FUN_0076ce40(in_ECX[0xe],&iStack_14);
    in_ECX[0xe] = in_ECX[0xe] + 1;
  }
  iStack_4 = (uint)iStack_4._1_3_ << 8;
  if (iVar6 != 0) {
    piVar1 = (int *)(iVar6 + 0x5c);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_00772560();
    }
  }
  iStack_4 = 0xffffffff;
  if (iVar7 != 0) {
    piVar1 = (int *)(iVar7 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_007ef870(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  LONG LVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  puVar1 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar5 = (int *)FUN_00707530(4);
  if (piVar5 != (int *)0x0) {
    iVar6 = (**(code **)(*piVar5 + 0x54))(uVar4);
    if (iVar6 == 0xf) {
      (**(code **)(*piVar5 + 0x58))(puVar1);
      iStack_10 = in_ECX;
      goto LAB_007ef963;
    }
    FUN_00708560(&param_1,4);
    puVar2 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(param_1 + 1);
      if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  iStack_10 = FUN_00401f00(0xac);
  uStack_4 = 0;
  if (iStack_10 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_007efa10();
  }
  uStack_4 = 0xffffffff;
  FUN_00405680(piVar5);
  cVar3 = (**(code **)(*piVar5 + 0x58))(puVar1);
  if (cVar3 == '\0') {
    FUN_004a1220(piVar5);
    *unaff_FS_OFFSET = iStack_10;
    return 0;
  }
LAB_007ef963:
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



void FUN_007ef980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x90);
  param_1[1] = *(undefined4 *)(in_ECX + 0x94);
  param_1[2] = *(undefined4 *)(in_ECX + 0x98);
  *param_2 = *(undefined4 *)(in_ECX + 0x78);
  param_2[1] = *(undefined4 *)(in_ECX + 0x7c);
  param_2[2] = *(undefined4 *)(in_ECX + 0x80);
  *param_3 = *(undefined4 *)(in_ECX + 0x84);
  param_3[1] = *(undefined4 *)(in_ECX + 0x88);
  param_3[2] = *(undefined4 *)(in_ECX + 0x8c);
  *param_4 = *(undefined4 *)(in_ECX + 0x74);
  return;
}



void FUN_007efa10(void)

{
  undefined4 *in_ECX;
  
  FUN_007e27f0();
  in_ECX[0x1d] = 0;
  in_ECX[0x1b] = 0;
  *in_ECX = &PTR_FUN_00a9277c;
  in_ECX[0x27] = 0;
  in_ECX[0x2a] = 0;
  in_ECX[0x29] = 1;
  return;
}



void FUN_007efa80(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 param_6,int param_7)

{
  undefined4 *in_ECX;
  
  FUN_007e27f0();
  in_ECX[0x1d] = param_2;
  in_ECX[0x1b] = param_1;
  *in_ECX = &PTR_FUN_00a9277c;
  in_ECX[0x1e] = *param_4;
  in_ECX[0x1f] = param_4[1];
  in_ECX[0x20] = param_4[2];
  in_ECX[0x21] = *param_5;
  in_ECX[0x22] = param_5[1];
  in_ECX[0x23] = param_5[2];
  in_ECX[0x24] = *param_3;
  in_ECX[0x25] = param_3[1];
  in_ECX[0x26] = param_3[2];
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 3;
  in_ECX[0x2a] = param_6;
  in_ECX[0x29] = (uint)(param_7 != 0);
  return;
}



void FUN_007efb30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009cfcc6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a9277c;
  in_ECX[0x1b] = 0;
  puVar1 = (undefined4 *)in_ECX[0x27];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x27] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x27];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_007e2650(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_007efbf0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  FUN_007e2490(param_1,param_2);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(in_ECX + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(in_ECX + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(in_ECX + 0x80);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(in_ECX + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(in_ECX + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(in_ECX + 0x8c);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(in_ECX + 0x90);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(in_ECX + 0x94);
  *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(in_ECX + 0x98);
  puVar1 = *(undefined4 **)(param_1 + 0x9c);
  if (puVar1 == *(undefined4 **)(in_ECX + 0x9c)) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(in_ECX + 0xa0);
    return;
  }
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x9c);
  *(int *)(param_1 + 0x9c) = iVar2;
  if (iVar2 != 0) {
    InterlockedIncrement((LONG *)(iVar2 + 4));
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(in_ECX + 0xa0);
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(in_ECX + 0xa0);
  return;
}



void FUN_007efcf0(byte param_1)

{
  FUN_007efb30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_007efd10(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0xac,uVar1);
  local_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007e27f0();
    puVar2[0x1d] = 0;
    *puVar2 = &PTR_FUN_00a9277c;
    puVar2[0x1b] = 0;
    puVar2[0x27] = 0;
    puVar2[0x29] = 1;
    puVar2[0x2a] = 0;
  }
  local_4 = 0xffffffff;
  FUN_007efbf0(puVar2,param_1);
  *unaff_FS_OFFSET = local_c;
  return puVar2;
}



int FUN_007efdb0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(uint *)(in_ECX + 0x24) != param_2) {
    FUN_007e24c0(uVar1);
    iVar2 = FUN_00401f00(0x10);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_007e2370(iVar2,param_1,0x19b,1,0,0);
    }
    local_4 = 0xffffffff;
    puVar4 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x28) + 4))();
    puVar4[2] = uVar3;
    puVar4[1] = 0;
    *puVar4 = *(undefined4 *)(in_ECX + 0x2c);
    if (*(int *)(in_ECX + 0x2c) == 0) {
      *(undefined4 **)(in_ECX + 0x30) = puVar4;
    }
    else {
      *(undefined4 **)(*(int *)(in_ECX + 0x2c) + 4) = puVar4;
    }
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
    *(undefined4 **)(in_ECX + 0x2c) = puVar4;
    *(uint *)(in_ECX + 0x24) = (uint)DAT_00b42eac << 8 | param_2;
  }
  *unaff_FS_OFFSET = local_c;
  return in_ECX + 0x28;
}


