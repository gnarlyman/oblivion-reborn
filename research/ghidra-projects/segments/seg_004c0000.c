
undefined4 FUN_004c00b0(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int in_ECX;
  
  cVar2 = FUN_004ca010(*(undefined1 *)(param_1 + 4));
  if (cVar2 == '\0') {
    piVar6 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
    uVar7 = (**(code **)(*piVar6 + 0x34))(param_1);
    return uVar7;
  }
  puVar3 = (undefined4 *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b08968,0);
  iVar4 = (**(code **)*puVar3)();
  iVar5 = (*(code *)**(undefined4 **)(in_ECX + 0x18))();
  if (iVar4 == iVar5) {
    bVar1 = *(byte *)(param_1 + 4);
    if (0x30 < bVar1) {
      if (bVar1 < 0x34) {
        iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        if ((iVar4 != 0) && (cVar2 = FUN_004db4a0(), cVar2 == '\0')) {
          return 1;
        }
        return 0;
      }
      if (bVar1 == 0x34) {
        return 1;
      }
    }
    return 0;
  }
  piVar6 = (int *)(*(code *)**(undefined4 **)(in_ECX + 0x18))();
  uVar7 = (**(code **)(*piVar6 + 0x34))(iVar4);
  return uVar7;
}



undefined4 FUN_004c0190(byte param_1,ushort param_2)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  float local_8;
  float local_4;
  
  bVar2 = param_1;
  uVar3 = 0;
  if ((param_1 < 4) && (param_2 < 0x121)) {
    _param_1 = -3.4028235e+38;
    uVar5 = 0;
    uVar4 = 0;
    local_8 = 0.0;
    do {
      local_4 = 0.0;
      if ((((ushort)uVar4 < 8) && (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x40 + (uint)bVar2 * 4) != 0)) {
        local_4 = *(float *)(*(int *)(*(int *)(iVar1 + 0x40 + (uint)bVar2 * 4) + (uint)param_2 * 4)
                            + (uVar4 & 0xffff) * 4);
      }
      if (_param_1 < local_4) {
        _param_1 = local_4;
        uVar5 = uVar4;
      }
      local_8 = local_4 + local_8;
      uVar4 = uVar4 + 1;
    } while (uVar4 < 8);
    if (_param_1 <= 1.0 - local_8) {
      uVar3 = 0;
      if (*(int *)(in_ECX + 0x24) != 0) {
        uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x20 + (uint)bVar2 * 4);
      }
    }
    else {
      uVar3 = 0;
      if ((((ushort)uVar5 < 8) && (iVar1 = *(int *)(in_ECX + 0x24), iVar1 != 0)) &&
         (*(int *)(iVar1 + 0x30 + (uint)bVar2 * 4) != 0)) {
        return *(undefined4 *)(*(int *)(iVar1 + 0x30 + (uint)bVar2 * 4) + (uVar5 & 0xffff) * 4);
      }
    }
  }
  return uVar3;
}



void FUN_004c0290(void)

{
  size_t _Size;
  int iVar1;
  void *_Dst;
  int in_ECX;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float10 fVar8;
  float local_18;
  uint local_14;
  uint local_10;
  int local_8;
  float local_4;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_14 = 0;
    local_8 = 0x30;
    do {
      iVar4 = 0;
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + local_8);
        if ((*(int *)(iVar1 + iVar4 * 4) != 0) &&
           (fVar8 = (float10)FUN_004bf550(local_14,iVar4), (float)(fVar8 / (float10)289.0) < 0.001))
        {
          *(undefined4 *)(iVar1 + iVar4 * 4) = 0;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 8);
      iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + local_8);
      uVar7 = 8;
      uVar5 = 0;
      do {
        iVar1 = *(int *)(iVar4 + uVar5 * 4);
        for (; (iVar1 == 0 && (uVar5 < uVar7)); uVar7 = uVar7 - 1) {
          FUN_004bf2f0(local_14,uVar5);
          iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + local_8);
          iVar1 = *(int *)(iVar4 + uVar5 * 4);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar7);
      _Size = uVar7 * 4 + 4;
      _Dst = (void *)thunk_FUN_00401aa0(_Size,1);
      _memset(_Dst,0,_Size);
      local_10 = 0;
      do {
        uVar5 = 0;
        local_18 = 0.0;
        if (uVar7 == 0) {
LAB_004c0406:
          *(float *)((int)_Dst + uVar7 * 4) = (1.0 - local_18) + *(float *)((int)_Dst + uVar7 * 4);
        }
        else {
          do {
            local_4 = 0.0;
            if (((((byte)local_14 < 4) && ((ushort)local_10 < 0x121)) && ((ushort)uVar5 < 8)) &&
               ((iVar4 = *(int *)(in_ECX + 0x24), iVar4 != 0 &&
                (*(int *)(iVar4 + 0x40 + (local_14 & 0xff) * 4) != 0)))) {
              local_4 = *(float *)(*(int *)(*(int *)(iVar4 + 0x40 + (local_14 & 0xff) * 4) +
                                           (local_10 & 0xffff) * 4) + (uVar5 & 0xffff) * 4);
            }
            uVar5 = uVar5 + 1;
            *(float *)((int)_Dst + uVar5 * 4 + -4) =
                 *(float *)((int)_Dst + uVar5 * 4 + -4) + local_4;
            local_18 = local_4 + local_18;
          } while (uVar5 < uVar7);
          if (local_18 < 1.0) goto LAB_004c0406;
        }
        local_10 = local_10 + 1;
      } while ((int)local_10 < 0x121);
      uVar5 = 0xffffffff;
      uVar2 = 0;
      local_18 = *(float *)((int)_Dst + uVar7 * 4);
      if (3 < (int)uVar7) {
        uVar6 = 2;
        pfVar3 = (float *)((int)_Dst + 8);
        uVar2 = 0;
        do {
          if (local_18 < pfVar3[-2]) {
            local_18 = pfVar3[-2];
            uVar5 = uVar2;
          }
          if (local_18 < pfVar3[-1]) {
            local_18 = pfVar3[-1];
            uVar5 = uVar6 - 1;
          }
          if (local_18 < *pfVar3) {
            local_18 = *pfVar3;
            uVar5 = uVar6;
          }
          if (local_18 < pfVar3[1]) {
            local_18 = pfVar3[1];
            uVar5 = uVar6 + 1;
          }
          uVar2 = uVar2 + 4;
          pfVar3 = pfVar3 + 4;
          uVar6 = uVar6 + 4;
        } while (uVar2 < uVar7 - 3);
      }
      for (; uVar2 < uVar7; uVar2 = uVar2 + 1) {
        if (local_18 < *(float *)((int)_Dst + uVar2 * 4)) {
          local_18 = *(float *)((int)_Dst + uVar2 * 4);
          uVar5 = uVar2;
        }
      }
      if (uVar5 != 0xffffffff) {
        FUN_004bf440(local_14,uVar5);
      }
      FUN_00401e40(_Dst);
      local_14 = local_14 + 1;
      local_8 = local_8 + 4;
    } while (local_8 < 0x40);
  }
  return;
}



float * FUN_004c0530(float *param_1,uint param_2,ushort param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  int in_ECX;
  
  pfVar1 = param_1;
  *param_1 = 4096.0;
  param_1[1] = 4096.0;
  if (param_4 == (int *)0x0) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)FUN_004c9a80();
      }
    }
    else {
      param_1 = *(float **)(*(int *)(in_ECX + 0x24) + 0x98);
    }
  }
  else {
    param_1 = (float *)*param_4;
  }
  *pfVar1 = (float)(int)param_1 * *pfVar1;
  if (param_5 == (int *)0x0) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        param_1 = (float *)0x0;
      }
      else {
        param_1 = (float *)FUN_004c9aa0();
      }
    }
    else {
      param_1 = *(float **)(*(int *)(in_ECX + 0x24) + 0x9c);
    }
  }
  else {
    param_1 = (float *)*param_5;
  }
  *pfVar1 = (float)((param_2 & 1) << 0xb) + *pfVar1 + (float)((uint)param_3 % 0x11 << 7);
  pfVar1[1] = (float)(int)param_1 * pfVar1[1] + (float)((param_2 & 2) << 10) +
              (float)(param_3 / 0x11 << 7);
  pfVar1[2] = 0.0;
  return pfVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_004c0640(void)

{
  int iVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  undefined1 uVar9;
  byte bVar10;
  int *_Dst;
  int *piVar11;
  void *pvVar12;
  undefined4 uVar13;
  float *pfVar14;
  float *pfVar15;
  int in_ECX;
  int iVar16;
  int iVar17;
  int iVar18;
  int *unaff_FS_OFFSET;
  float10 fVar19;
  undefined1 auStackY_100 [160];
  undefined4 uStackY_60;
  int local_34;
  float fStack_2c;
  int local_28;
  int local_20;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b46a6;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar8 = DAT_00b08b5c;
  if (*(int *)(in_ECX + 0x24) == 0) {
    *unaff_FS_OFFSET = local_c;
    return auStackY_100;
  }
  fVar5 = _DAT_00b08b6c;
  if (_DAT_00b08b6c < 0.0) {
    fVar5 = 0.0;
  }
  if (1.0 < fVar5) {
    fVar5 = 0.9;
  }
  DAT_00b35bf0 = DAT_00b08b64;
  if ((((DAT_00b08b64 != 1) && (DAT_00b08b64 != 2)) && (DAT_00b08b64 != 4)) && (DAT_00b08b64 != 8))
  {
    DAT_00b35bf0 = 2;
  }
  local_34 = 0;
  iVar7 = DAT_00b35bf0;
  iVar1 = DAT_00b35bf0;
  do {
    for (; iVar18 = iVar1, iVar7 < 0x10; iVar7 = iVar7 + iVar18 * 2) {
      for (; iVar1 < 0x10; iVar1 = iVar1 + DAT_00b35bf0 * 2) {
        iVar18 = 0;
        _Dst = (int *)FUN_00401f00();
        uStackY_60 = 0x4c0747;
        _memset(_Dst,0,0x40);
        iVar17 = iVar1 * 0x11 + iVar7;
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + local_34 * 4) != 0) {
          piVar11 = (int *)FUN_004c8d00();
          local_28 = 0;
          while (((piVar11 != (int *)0x0 && (iVar18 < 0x10)) && (local_28 <= iVar8))) {
            piVar3 = (int *)*piVar11;
            if (piVar3 != (int *)0x0) {
              local_28 = local_28 + 1;
              pvVar12 = (void *)FUN_00401f00();
              local_4 = 0;
              if (pvVar12 == (void *)0x0) {
                pvVar12 = (void *)0x0;
              }
              else {
                FUN_007c28e0();
              }
              local_4 = 0xffffffff;
              _Dst[iVar18] = (int)pvVar12;
              _memset(pvVar12,0,0x44);
              uVar13 = FUN_004af3f0();
              *(undefined4 *)_Dst[iVar18] = uVar13;
              *(int *)(_Dst[iVar18] + 4) = piVar3[3];
              *(undefined4 *)(_Dst[iVar18] + 0x14) = _DAT_00b080dc;
              fVar19 = (float10)(**(code **)(*piVar3 + 0x168))();
              *(float *)(_Dst[iVar18] + 0x18) = (float)fVar19;
              fVar19 = (float10)(**(code **)(*piVar3 + 0x160))();
              *(float *)(_Dst[iVar18] + 0x10) = (float)fVar19;
              fVar19 = (float10)(**(code **)(*piVar3 + 0x150))();
              *(float *)(_Dst[iVar18] + 8) = (float)fVar19;
              fVar19 = (float10)(**(code **)(*piVar3 + 0x158))();
              *(float *)(_Dst[iVar18] + 0xc) = (float)fVar19;
              uVar9 = (**(code **)(*piVar3 + 0x170))();
              *(undefined1 *)(_Dst[iVar18] + 0x1c) = uVar9;
              uVar9 = (**(code **)(*piVar3 + 0x180))();
              *(undefined1 *)(_Dst[iVar18] + 0x1e) = uVar9;
              uVar9 = (**(code **)(*piVar3 + 0x178))();
              *(undefined1 *)(_Dst[iVar18] + 0x1d) = uVar9;
              bVar10 = (**(code **)(*piVar3 + 0x120))();
              fVar2 = (float)bVar10 / 100.0;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              iVar4 = _Dst[iVar18];
              *(float *)(iVar4 + 0x20) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x24) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x28) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x2c) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x30) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x34) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x38) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              fVar6 = fVar2;
              if (fVar19 <= (float10)fVar5) {
                fVar6 = 0.0;
              }
              *(float *)(iVar4 + 0x3c) = fVar6;
              fVar19 = (float10)FUN_004bf160();
              if (fVar19 <= (float10)fVar5) {
                fVar2 = 0.0;
              }
              *(float *)(iVar4 + 0x40) = fVar2;
              iVar16 = 9;
              fStack_2c = 0.0;
              pfVar14 = (float *)(iVar4 + 0x20);
              do {
                fVar2 = *pfVar14;
                pfVar14 = pfVar14 + 1;
                iVar16 = iVar16 + -1;
                fStack_2c = fVar2 + fStack_2c;
              } while (iVar16 != 0);
              if ((float10)fStack_2c / (float10)9.0 < (float10)fVar5) {
                *(float *)(iVar4 + 0x20) = 0.0;
                *(undefined4 *)(iVar4 + 0x24) = 0;
                *(undefined4 *)(iVar4 + 0x28) = 0;
                *(undefined4 *)(iVar4 + 0x2c) = 0;
                *(undefined4 *)(iVar4 + 0x30) = 0;
                *(undefined4 *)(iVar4 + 0x34) = 0;
                *(undefined4 *)(iVar4 + 0x38) = 0;
                *(undefined4 *)(iVar4 + 0x3c) = 0;
                *(undefined4 *)(iVar4 + 0x40) = 0;
              }
              iVar18 = iVar18 + 1;
            }
            piVar11 = (int *)piVar11[1];
          }
        }
        local_20 = 0;
        do {
          iVar4 = *(int *)(in_ECX + 0x24);
          if (((*(int *)(*(int *)(iVar4 + 0x30 + local_34 * 4) + local_20) != 0) &&
              (*(int *)(iVar4 + 0x40 + local_34 * 4) != 0)) &&
             (((iVar4 = *(int *)(iVar4 + 0x40 + local_34 * 4),
               0.1 < *(float *)(*(int *)(iVar4 + -0x48 + iVar17 * 4) + local_20) ||
               (((0.1 < *(float *)(*(int *)(iVar4 + -0x44 + iVar17 * 4) + local_20) ||
                 (0.1 < *(float *)(*(int *)(iVar4 + -0x40 + iVar17 * 4) + local_20))) ||
                (0.1 < *(float *)(*(int *)(iVar4 + -4 + iVar17 * 4) + local_20))))) ||
              (((0.1 < *(float *)(local_20 + *(int *)(iVar4 + iVar17 * 4)) ||
                (0.1 < *(float *)(*(int *)(iVar4 + 4 + iVar17 * 4) + local_20))) ||
               ((0.1 < *(float *)(*(int *)(iVar4 + 0x40 + iVar17 * 4) + local_20) ||
                ((0.1 < *(float *)(*(int *)(iVar4 + 0x44 + iVar17 * 4) + local_20) ||
                 (0.1 < *(float *)(*(int *)(iVar4 + 0x48 + iVar17 * 4) + local_20))))))))))) {
            local_28 = 0;
            piVar11 = (int *)FUN_004c8d00();
            while (((piVar11 != (int *)0x0 && (iVar18 < 0x10)) && (local_28 <= iVar8))) {
              piVar3 = (int *)*piVar11;
              if (piVar3 != (int *)0x0) {
                pvVar12 = (void *)FUN_00401f00();
                local_4 = 1;
                if (pvVar12 == (void *)0x0) {
                  pvVar12 = (void *)0x0;
                }
                else {
                  FUN_007c28e0();
                }
                local_28 = local_28 + 1;
                local_4 = 0xffffffff;
                _Dst[iVar18] = (int)pvVar12;
                _memset(pvVar12,0,0x44);
                iVar4 = _Dst[iVar18];
                *(undefined4 *)(iVar4 + 0x20) = 0;
                *(undefined4 *)(iVar4 + 0x24) = 0;
                *(undefined4 *)(iVar4 + 0x28) = 0;
                *(undefined4 *)(iVar4 + 0x2c) = 0;
                *(undefined4 *)(iVar4 + 0x30) = 0;
                *(undefined4 *)(iVar4 + 0x34) = 0;
                *(undefined4 *)(iVar4 + 0x38) = 0;
                *(undefined4 *)(iVar4 + 0x3c) = 0;
                *(undefined4 *)(iVar4 + 0x40) = 0;
                uVar13 = FUN_004af3f0();
                *(undefined4 *)_Dst[iVar18] = uVar13;
                *(int *)(_Dst[iVar18] + 4) = piVar3[3];
                *(undefined4 *)(_Dst[iVar18] + 0x14) = _DAT_00b080dc;
                fVar19 = (float10)(**(code **)(*piVar3 + 0x168))();
                *(float *)(_Dst[iVar18] + 0x18) = (float)fVar19;
                fVar19 = (float10)(**(code **)(*piVar3 + 0x160))();
                *(float *)(_Dst[iVar18] + 0x10) = (float)fVar19;
                fVar19 = (float10)(**(code **)(*piVar3 + 0x150))();
                *(float *)(_Dst[iVar18] + 8) = (float)fVar19;
                fVar19 = (float10)(**(code **)(*piVar3 + 0x158))();
                *(float *)(_Dst[iVar18] + 0xc) = (float)fVar19;
                uVar9 = (**(code **)(*piVar3 + 0x170))();
                *(undefined1 *)(_Dst[iVar18] + 0x1c) = uVar9;
                uVar9 = (**(code **)(*piVar3 + 0x180))();
                *(undefined1 *)(_Dst[iVar18] + 0x1e) = uVar9;
                uVar9 = (**(code **)(*piVar3 + 0x178))();
                *(undefined1 *)(_Dst[iVar18] + 0x1d) = uVar9;
                bVar10 = (**(code **)(*piVar3 + 0x120))();
                fVar2 = (float)bVar10 / 100.0;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        -0x40 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                iVar4 = _Dst[iVar18];
                *(float *)(iVar4 + 0x28) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        -0x44 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x24) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        -0x48 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                pfVar14 = (float *)(iVar4 + 0x20);
                *pfVar14 = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) + 4
                                       + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x34) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                       iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x30) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) + -4
                                       + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x2c) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        0x48 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x40) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        0x44 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                *(float *)(iVar4 + 0x3c) = fStack_2c;
                fStack_2c = fVar2;
                if (*(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + local_34 * 4) +
                                        0x40 + iVar17 * 4) + local_20) <= fVar5) {
                  fStack_2c = 0.0;
                }
                iVar16 = 9;
                *(float *)(iVar4 + 0x38) = fStack_2c;
                fStack_2c = 0.0;
                pfVar15 = pfVar14;
                do {
                  iVar16 = iVar16 + -1;
                  fStack_2c = fStack_2c + *pfVar15;
                  pfVar15 = pfVar15 + 1;
                } while (iVar16 != 0);
                if (fStack_2c / 9.0 < fVar5) {
                  *pfVar14 = 0.0;
                  *(undefined4 *)(iVar4 + 0x24) = 0;
                  *(undefined4 *)(iVar4 + 0x28) = 0;
                  *(undefined4 *)(iVar4 + 0x2c) = 0;
                  *(undefined4 *)(iVar4 + 0x30) = 0;
                  *(undefined4 *)(iVar4 + 0x34) = 0;
                  *(undefined4 *)(iVar4 + 0x38) = 0;
                  *(undefined4 *)(iVar4 + 0x3c) = 0;
                  *(undefined4 *)(iVar4 + 0x40) = 0;
                }
                iVar18 = iVar18 + 1;
              }
              piVar11 = (int *)piVar11[1];
            }
          }
          local_20 = local_20 + 4;
        } while (local_20 < 0x20);
        if (*_Dst == 0) {
          FUN_00401f20();
        }
        else {
          FUN_00452570();
        }
        iVar18 = DAT_00b35bf0;
      }
      iVar1 = iVar18;
    }
    local_34 = local_34 + 1;
    iVar7 = iVar1;
  } while (local_34 < 4);
  *unaff_FS_OFFSET = local_c;
  return (undefined1 *)0x1;
}



uint FUN_004c1030(uint param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  
  if ((((*(int *)(in_ECX + 0x24) != 0) && ((int)param_1 < 4)) && (param_2 + 0x12 < 0x121)) &&
     (-1 < param_2 + -0x12)) {
    cVar1 = FUN_0055e000(param_2,&param_1);
    return -(uint)(cVar1 != '\0') & param_1;
  }
  return 0;
}



undefined2 FUN_004c1080(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 != (int *)0x0) {
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = FUN_004c9aa0();
      }
    }
    else {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004c9a80();
      }
    }
    else {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
    }
    fVar1 = *param_2 + (float)(iVar4 << 0xc) + 2048.0;
    fVar2 = param_2[1] + (float)(iVar3 << 0xc) + 2048.0;
    if (((((float)param_1[2] < fVar1) || ((float)param_1[1] < fVar2)) || (fVar1 < (float)*param_1))
       || (fVar2 < (float)param_1[3])) {
      return 0;
    }
  }
  return 1;
}



void FUN_004c1170(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  int in_ECX;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if ((*(byte *)(in_ECX + 0x1c) & 8) != 0) {
    local_2c = 0;
    do {
      iVar5 = 0;
      iVar7 = 0;
      do {
        if ((param_1 == 0) ||
           (cVar2 = FUN_004c1080(param_1,*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + local_2c)
                                         + iVar7), cVar2 != '\0')) {
          iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + local_2c);
          *(undefined4 *)(iVar3 + iVar7) = DAT_00b3f9a8;
          iVar3 = iVar3 + iVar7;
          *(undefined4 *)(iVar3 + 4) = DAT_00b3f9ac;
          *(undefined4 *)(iVar3 + 8) = DAT_00b3f9b0;
          *(undefined1 *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + local_2c) + iVar5) = 0
          ;
        }
        iVar7 = iVar7 + 0xc;
        iVar5 = iVar5 + 1;
      } while (iVar7 < 0xd8c);
      local_28 = 0x200;
      puVar6 = DAT_00b35bc8;
      do {
        iVar5 = *(int *)(local_2c + *(int *)(*(int *)(in_ECX + 0x24) + 4));
        iVar7 = (uint)puVar6[1] * 0xc;
        iVar3 = (uint)*puVar6 * 0xc;
        local_c = *(float *)(iVar5 + iVar7) - *(float *)(iVar5 + iVar3);
        iVar1 = (uint)puVar6[2] * 0xc;
        local_8 = *(float *)(iVar5 + 4 + iVar7) - *(float *)(iVar5 + 4 + iVar3);
        puVar6 = puVar6 + 3;
        local_4 = *(float *)(iVar5 + 8 + iVar7) - *(float *)(iVar5 + 8 + iVar3);
        local_18 = *(float *)(iVar5 + iVar1) - *(float *)(iVar5 + iVar7);
        local_14 = *(float *)(iVar5 + 4 + iVar1) - *(float *)(iVar5 + 4 + iVar7);
        local_10 = *(float *)(iVar5 + 8 + iVar1) - *(float *)(iVar5 + 8 + iVar7);
        local_24 = local_8 * local_10 - local_4 * local_14;
        local_20 = local_18 * local_4 - local_c * local_10;
        local_1c = local_14 * local_c - local_8 * local_18;
        FUN_004bfaa0(&local_24);
        if ((param_1 == 0) ||
           (cVar2 = FUN_004c1080(param_1,*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + local_2c)
                                         + iVar3), cVar2 != '\0')) {
          iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + local_2c);
          pfVar4 = (float *)(iVar5 + iVar3);
          *pfVar4 = *(float *)(iVar5 + iVar3) + local_24;
          pfVar4[1] = local_20 + pfVar4[1];
          pfVar4[2] = pfVar4[2] + local_1c;
        }
        if ((param_1 == 0) ||
           (cVar2 = FUN_004c1080(param_1,*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + local_2c)
                                         + iVar7), cVar2 != '\0')) {
          iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + local_2c);
          pfVar4 = (float *)(iVar5 + iVar7);
          *pfVar4 = *(float *)(iVar5 + iVar7) + local_24;
          pfVar4[1] = pfVar4[1] + local_20;
          pfVar4[2] = local_1c + pfVar4[2];
        }
        if ((param_1 == 0) ||
           (cVar2 = FUN_004c1080(param_1,*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + local_2c)
                                         + iVar1), cVar2 != '\0')) {
          iVar5 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + local_2c);
          pfVar4 = (float *)(iVar5 + iVar1);
          *pfVar4 = *(float *)(iVar5 + iVar1) + local_24;
          pfVar4[1] = pfVar4[1] + local_20;
          pfVar4[2] = local_1c + pfVar4[2];
        }
        local_28 = local_28 + -1;
      } while (local_28 != 0);
      FUN_00725890(*(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + local_2c),0x121,0xc);
      local_2c = local_2c + 4;
    } while (local_2c < 0x10);
  }
  return;
}



void FUN_004c1440(int param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float *pfVar4;
  int *in_ECX;
  
  pfVar4 = (float *)(in_ECX[1] * param_1 + *in_ECX);
  if ((char)in_ECX[2] != '\0') {
    bVar1 = *(byte *)((int)pfVar4 + 1);
    bVar2 = *(byte *)pfVar4;
    bVar3 = *(byte *)((int)pfVar4 + 3);
    *param_2 = (float)*(byte *)((int)pfVar4 + 2) / 255.0;
    param_2[1] = (float)bVar1 / 255.0;
    param_2[2] = (float)bVar2 / 255.0;
    param_2[3] = (float)bVar3 / 255.0;
    return;
  }
  *param_2 = *pfVar4;
  param_2[1] = pfVar4[1];
  param_2[2] = pfVar4[2];
  param_2[3] = pfVar4[3];
  return;
}



void FUN_004c14d0(undefined2 param_1)

{
  ushort uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
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
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
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



void FUN_004c1590(byte param_1)

{
  FUN_00726ae0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c15c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45f1c;
  FUN_00726ae0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c15f0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_00721350();
  in_ECX[4] = param_1;
  *in_ECX = &PTR_FUN_00a45f74;
  in_ECX[3] = param_2;
  return;
}



void FUN_004c1630(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a45f74;
  FUN_00401f20(in_ECX[3]);
  in_ECX[3] = 0;
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_004c1670(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  *param_1 = iVar1;
  if (iVar1 != 0) {
    InterlockedIncrement((LONG *)(iVar1 + 4));
  }
  return param_1;
}



void FUN_004c16e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b46d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45fcc;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a45e78;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c1750(void)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)((int)in_ECX + 6) = 1;
  *in_ECX = &PTR_FUN_00a45fec;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0x80000000;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  return;
}



void FUN_004c1780(void)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b90b8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a45fec;
  local_4 = 0;
  if (-1 < (int)in_ECX[10]) {
    FUN_008a75d0(in_ECX[8],in_ECX[10] & 0x3fffffff,0x14);
  }
  *in_ECX = &PTR_LAB_00a45e5c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c1810(byte param_1)

{
  FUN_004c1780();
  if ((param_1 & 1) != 0) {
    (**(code **)(*DAT_00ba7d98 + 0x14))();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c1840(void)

{
  short sVar1;
  short sVar2;
  undefined4 *puVar3;
  short sVar4;
  uint uVar5;
  LONG LVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  undefined4 *puVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  undefined4 *local_38;
  undefined4 *local_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b473a;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar14 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (float)FUN_00401f00(0x34,uVar5);
  local_4 = 0;
  if (local_30 == 0.0) {
    DAT_00b35be4 = 0;
  }
  else {
    DAT_00b35be4 = FUN_004c93d0();
  }
  local_4 = 0xffffffff;
  FUN_004028d0("Default.DDS",0);
  FUN_004c95b0();
  local_30 = (float)FUN_00401f00(0x10,uVar5);
  bVar18 = local_30 != 0.0;
  local_4 = 1;
  if (bVar18) {
    puVar14 = (undefined4 *)FUN_004c1670(&local_38);
    local_4 = CONCAT31(local_4._1_3_,2);
    local_34 = (undefined4 *)0x1;
    puVar14 = (undefined4 *)FUN_00704130(*puVar14,0,3,5,0);
  }
  local_4 = 0xffffffff;
  if ((((bVar18) && (local_38 != (undefined4 *)0x0)) &&
      (LVar6 = InterlockedDecrement(local_38 + 1), LVar6 == 0)) && (local_38 != (undefined4 *)0x0))
  {
    (**(code **)*local_38)(1);
  }
  local_30 = (float)FUN_00401f00(0x30);
  local_4 = 4;
  if (local_30 == 0.0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)FUN_007043b0();
  }
  puVar3 = DAT_00b35bec;
  local_4 = 0xffffffff;
  if (DAT_00b35bec != puVar7) {
    if (((DAT_00b35bec != (undefined4 *)0x0) &&
        (LVar6 = InterlockedDecrement(DAT_00b35bec + 1), LVar6 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b35bec = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(ushort *)(DAT_00b35bec + 6) = *(ushort *)(DAT_00b35bec + 6) & 0xfff5 | 4;
  puVar7 = *(undefined4 **)DAT_00b35bec[8];
  local_34 = puVar14;
  if (puVar14 != puVar7) {
    if (puVar7 != (undefined4 *)0x0) {
      (**(code **)*puVar7)(1);
    }
    FUN_0042bb90(0,&local_34);
  }
  DAT_00b35bc8 = FUN_00401f00(0xc00);
  iVar11 = 0;
  local_38 = (undefined4 *)0x0;
  do {
    uVar17 = 0;
    uVar5 = (uint)local_38 & 0x80000001;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffffe) + 1;
    }
    sVar1 = (short)local_38 * 0x11;
    do {
      uVar15 = uVar17 & 0x80000001;
      if ((int)uVar15 < 0) {
        uVar15 = (uVar15 - 1 | 0xfffffffe) + 1;
      }
      sVar2 = (short)uVar17;
      if (uVar15 == uVar5) {
        sVar4 = sVar1 + 0x12 + sVar2;
        *(short *)(DAT_00b35bc8 + iVar11 * 2) = sVar4;
        *(short *)(DAT_00b35bc8 + (iVar11 + 1) * 2) = sVar1 + 0x11 + sVar2;
        *(short *)(DAT_00b35bc8 + (iVar11 + 2) * 2) = sVar1 + sVar2;
        *(short *)(DAT_00b35bc8 + 2 + (iVar11 + 2) * 2) = sVar1 + sVar2;
        *(short *)(DAT_00b35bc8 + (iVar11 + 4) * 2) = sVar1 + 1 + sVar2;
        *(short *)(DAT_00b35bc8 + (iVar11 + 5) * 2) = sVar4;
      }
      else {
        sVar13 = sVar1 + 0x11 + sVar2;
        *(short *)(DAT_00b35bc8 + iVar11 * 2) = sVar13;
        *(short *)(DAT_00b35bc8 + (iVar11 + 1) * 2) = sVar1 + sVar2;
        sVar4 = sVar1 + 1 + sVar2;
        *(short *)(DAT_00b35bc8 + (iVar11 + 2) * 2) = sVar4;
        *(short *)(DAT_00b35bc8 + 2 + (iVar11 + 2) * 2) = sVar4;
        *(short *)(DAT_00b35bc8 + (iVar11 + 4) * 2) = sVar1 + 0x12 + sVar2;
        *(short *)(DAT_00b35bc8 + (iVar11 + 5) * 2) = sVar13;
      }
      uVar17 = uVar17 + 1;
      iVar11 = iVar11 + 6;
    } while ((int)uVar17 < 0x10);
    local_38 = (undefined4 *)((int)local_38 + 1);
  } while ((int)local_38 < 0x10);
  local_34 = _DAT_00b08b44;
  if ((float)_DAT_00b08b44 == 0.0) {
    FUN_004a7a60("INI setting fLandTextureTilingMult cannot be 0.");
    local_34 = (undefined4 *)0x41800000;
  }
  local_34 = (undefined4 *)(4.0 / (float)local_34);
  DAT_00b35bcc = FUN_00401f00(0x1210);
  if (DAT_00b35bcc == 0) {
    DAT_00b35bcc = 0;
  }
  else {
    iVar11 = 0x120;
    puVar14 = (undefined4 *)(DAT_00b35bcc + 8);
    do {
      puVar14[-2] = 0;
      iVar11 = iVar11 + -1;
      puVar14[-1] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14 = puVar14 + 4;
    } while (-1 < iVar11);
  }
  DAT_00b35bd0 = FUN_00401f00(0xd8c);
  DAT_00b35bd8 = FUN_00401f00(0x121);
  DAT_00b35bd4 = FUN_00401f00(0x908);
  puVar14 = local_34;
  uStack_1c = 0x3f800000;
  uStack_18 = 0x3f800000;
  iVar11 = 0;
  uStack_14 = 0x3f800000;
  local_38 = (undefined4 *)0x0;
  uStack_10 = 0;
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  do {
    fStack_2c = (float)(int)local_38 / (float)puVar14;
    iVar16 = iVar11 * 0xc;
    local_34 = (undefined4 *)0x0;
    iVar12 = iVar11 << 4;
    do {
      iVar8 = DAT_00b35bcc;
      *(undefined4 *)(DAT_00b35bcc + iVar12) = 0x3f800000;
      local_30 = (float)(int)local_34 / (float)puVar14;
      *(undefined4 *)(iVar8 + 4 + iVar12) = 0x3f800000;
      iVar8 = iVar8 + iVar12;
      *(undefined4 *)(iVar8 + 8) = 0x3f800000;
      *(undefined4 *)(iVar8 + 0xc) = 0;
      iVar8 = DAT_00b35bd0;
      *(undefined4 *)(DAT_00b35bd0 + iVar16) = 0;
      *(undefined4 *)(iVar8 + iVar16 + 4) = 0;
      *(undefined4 *)(iVar8 + iVar16 + 8) = 0x3f800000;
      *(undefined1 *)(DAT_00b35bd8 + iVar11) = 1;
      local_34 = (undefined4 *)((int)local_34 + 1);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + 0x10;
      iVar16 = iVar16 + 0xc;
      *(float *)(DAT_00b35bd4 + -8 + iVar11 * 8) = local_30;
      *(float *)(DAT_00b35bd4 + -4 + iVar11 * 8) = fStack_2c;
    } while ((int)local_34 < 0x11);
    local_38 = (undefined4 *)((int)local_38 + 1);
  } while ((int)local_38 < 0x11);
  uVar5 = 0;
  do {
    uVar17 = uVar5 & 0x80000001;
    if ((int)uVar17 < 0) {
      uVar17 = (uVar17 - 1 | 0xfffffffe) + 1;
    }
    (&DAT_00b35ba8)[uVar5] = (float)(int)(uVar17 * 0x800 + -0x800);
    local_34 = (undefined4 *)(((int)uVar5 / 2) * 0x800 + -0x800);
    uVar5 = uVar5 + 1;
    *(float *)(&DAT_00b35b94 + uVar5 * 4) = (float)(int)local_34;
  } while ((int)uVar5 < 4);
  iVar11 = 0;
  uStack_20 = 0xc5000000;
  do {
    uVar9 = FUN_00401f00(0xd8c);
    *(undefined4 *)((int)&DAT_00b35bb8 + iVar11) = uVar9;
    local_34 = (undefined4 *)0x0;
    iVar16 = 0;
    do {
      local_30 = (float)(int)local_34;
      local_38 = (undefined4 *)0x0;
      iVar12 = iVar16 + 0xcc;
      do {
        fStack_28 = (float)(int)local_38;
        pfVar10 = (float *)(*(int *)((int)&DAT_00b35bb8 + iVar11) + iVar16);
        local_38 = local_38 + 0x20;
        fStack_28 = fStack_28 + *(float *)((int)&DAT_00b35ba8 + iVar11);
        iVar16 = iVar16 + 0xc;
        fStack_24 = *(float *)((int)&DAT_00b35b98 + iVar11);
        *pfVar10 = fStack_28;
        fStack_24 = fStack_24 + local_30;
        pfVar10[1] = fStack_24;
        pfVar10[2] = -2048.0;
      } while ((int)local_38 < 0x880);
      local_34 = local_34 + 0x20;
      iVar16 = iVar12;
    } while ((int)local_34 < 0x880);
    iVar11 = iVar11 + 4;
  } while (iVar11 < 0x10);
  FUN_004c95b0();
  DAT_00b35bdc = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c1dd0(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x24);
  if ((piVar1 != (int *)0x0) && (iVar2 = piVar1[1], iVar2 != 0)) {
    if (*(int *)(iVar2 + param_1 * 4) == 0) {
      if ((*piVar1 == 0) || (*(int *)(*piVar1 + param_1 * 4) == 0)) goto LAB_004c1e4f;
      iVar2 = *(int *)(*piVar1 + param_1 * 4);
      if (*(short *)(iVar2 + 0xb6) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar2 + 0xb0);
      }
      puVar3 = (undefined4 *)(*(int *)(*(int *)(iVar2 + 0xb4) + 0x1c) + param_2 * 0xc);
    }
    else {
      puVar3 = (undefined4 *)(*(int *)(iVar2 + param_1 * 4) + param_2 * 0xc);
    }
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    return;
  }
LAB_004c1e4f:
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0xc5000000;
  return;
}



void FUN_004c1e80(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int local_c;
  int local_8;
  uint local_4;
  
  piVar1 = *(int **)(in_ECX + 0x24);
  if ((piVar1 == (int *)0x0) || (piVar1[1] == 0)) {
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0x3f800000;
    return;
  }
  iVar4 = piVar1[2];
  if ((iVar4 != 0) && (*(int *)(iVar4 + param_1 * 4) != 0)) {
    iVar2 = *(int *)(iVar4 + param_1 * 4);
    iVar4 = iVar2 + param_2 * 0xc;
    *param_3 = *(undefined4 *)(iVar2 + param_2 * 0xc);
    param_3[1] = *(undefined4 *)(iVar4 + 4);
    param_3[2] = *(undefined4 *)(iVar4 + 8);
    return;
  }
  if ((*piVar1 != 0) && (*(int *)(*piVar1 + param_1 * 4) != 0)) {
    iVar4 = *(int *)(*piVar1 + param_1 * 4);
    if (*(short *)(iVar4 + 0xb6) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar4 + 0xb0);
    }
    iVar2 = *(int *)(*(int *)(iVar4 + 0xb4) + 0x20);
    if (iVar2 != 0) {
      iVar4 = iVar2 + param_2 * 0xc;
      *param_3 = *(undefined4 *)(iVar2 + param_2 * 0xc);
      param_3[1] = *(undefined4 *)(iVar4 + 4);
      param_3[2] = *(undefined4 *)(iVar4 + 8);
      return;
    }
    local_c = 0;
    local_8 = 0;
    local_4 = local_4 & 0xffffff00;
    piVar1 = *(int **)(*(int *)(iVar4 + 0xb4) + 0x34);
    if (piVar1 != (int *)0x0) {
      cVar3 = (**(code **)(*piVar1 + 0x4c))();
      if (cVar3 != '\0') {
        cVar3 = FUN_00728ab0(1);
        if (cVar3 != '\0') {
          FUN_00728d00(&local_c);
          puVar5 = (undefined4 *)(local_8 * param_2 + local_c);
          *param_3 = *puVar5;
          param_3[1] = puVar5[1];
          param_3[2] = puVar5[2];
          FUN_00728b20();
          return;
        }
      }
    }
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0x3f800000;
  return;
}



void FUN_004c2000(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined1 local_4;
  
  piVar1 = *(int **)(in_ECX + 0x24);
  if ((piVar1 == (int *)0x0) || (piVar1[1] == 0)) {
    *param_3 = DAT_00b25ae0;
    param_3[1] = DAT_00b25ae4;
    param_3[2] = DAT_00b25ae8;
    param_3[3] = DAT_00b25aec;
    return;
  }
  iVar4 = piVar1[3];
  if ((iVar4 != 0) && (*(int *)(iVar4 + param_1 * 4) != 0)) {
    puVar3 = (undefined4 *)(param_2 * 0x10 + *(int *)(iVar4 + param_1 * 4));
    *param_3 = *puVar3;
    param_3[1] = puVar3[1];
    param_3[2] = puVar3[2];
    param_3[3] = puVar3[3];
    return;
  }
  if ((*piVar1 != 0) && (*(int *)(*piVar1 + param_1 * 4) != 0)) {
    iVar4 = *(int *)(*piVar1 + param_1 * 4);
    if (*(short *)(iVar4 + 0xb6) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = **(int **)(iVar4 + 0xb0);
    }
    iVar4 = *(int *)(iVar4 + 0xb4);
    if (*(int *)(iVar4 + 0x20) != 0) {
      iVar5 = param_2 * 0x10 + *(int *)(iVar4 + 0x24);
      *param_3 = *(undefined4 *)(param_2 * 0x10 + *(int *)(iVar4 + 0x24));
      param_3[1] = *(undefined4 *)(iVar5 + 4);
      param_3[2] = *(undefined4 *)(iVar5 + 8);
      param_3[3] = *(undefined4 *)(iVar5 + 0xc);
      return;
    }
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    if (*(int **)(iVar4 + 0x34) != (int *)0x0) {
      cVar2 = (**(code **)(**(int **)(iVar4 + 0x34) + 0x4c))();
      if (cVar2 != '\0') {
        cVar2 = FUN_00728ab0(1);
        if (cVar2 != '\0') {
          FUN_00728db0(&local_c);
          FUN_004c1440(param_2,param_3);
          FUN_00728b20();
          return;
        }
      }
    }
  }
  *param_3 = DAT_00b25ae0;
  param_3[1] = DAT_00b25ae4;
  param_3[2] = DAT_00b25ae8;
  param_3[3] = DAT_00b25aec;
  return;
}



void FUN_004c2180(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009b4781;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = *(undefined4 **)(in_ECX + 0x94);
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  local_4 = local_4 & 0xffffff00;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x54),0x10,4,FUN_004c16e0);
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
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



undefined4 FUN_004c2230(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  size_t sVar3;
  size_t _Size;
  
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) && (param_3 != (undefined4 *)0x0)) {
    iVar1 = (**(code **)(*DAT_00ba7d98 + 0x10))(0x30,0x25);
    *(undefined2 *)(iVar1 + 4) = 0x30;
    puVar2 = (undefined4 *)FUN_004c1750();
    *param_3 = puVar2;
    if (0x10 < param_2) {
      _Size = param_2 - 0x10;
      puVar2[4] = *param_1;
      puVar2[5] = param_1[1];
      puVar2[6] = param_1[2];
      puVar2[7] = param_1[3];
      if (_Size != 0) {
        if ((int)(puVar2[10] & 0x3fffffff) < (int)_Size) {
          sVar3 = (puVar2[10] & 0x3fffffff) * 2;
          if ((int)sVar3 <= (int)_Size) {
            sVar3 = _Size;
          }
          FUN_008a6e40(puVar2 + 8,sVar3,1);
        }
        puVar2[9] = _Size;
        _memcpy((void *)puVar2[8],param_1 + 4,_Size);
        return 1;
      }
    }
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    *param_3 = 0;
  }
  return 0;
}



void FUN_004c2300(void)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  LONG LVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  float *pfVar8;
  undefined4 uVar9;
  int local_50;
  undefined4 *local_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  float fStack_24;
  float fStack_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar7 = (int *)0x0;
  local_50 = 0;
  iVar3 = FUN_0043f270();
  if (iVar3 != 0) {
    FUN_0043f270();
    iVar3 = FUN_004ef7e0();
    if (iVar3 != 0) {
      local_14 = DAT_00b3f9b0;
      uVar9 = 0;
      local_1c = ((float)*(int *)(*(int *)(in_ECX + 0x24) + 0x98) + 0.5) * 4096.0;
      pfVar8 = &local_1c;
      local_18 = ((float)*(int *)(*(int *)(in_ECX + 0x24) + 0x9c) + 0.5) * 4096.0;
      FUN_0043f270(pfVar8,0);
      FUN_004ef7e0();
      piVar4 = (int *)FUN_004ea670(pfVar8,uVar9);
      if (piVar4 != (int *)0x0) {
        local_50 = *piVar4;
        piVar4 = (int *)FUN_004bfd90(&local_4c);
        puVar2 = local_4c;
        iVar3 = *piVar4;
        if (((local_4c != (undefined4 *)0x0) &&
            (LVar5 = InterlockedDecrement(local_4c + 1), LVar5 == 0)) &&
           (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        if (iVar3 != 0) {
          piVar7 = (int *)FUN_00707530(4);
        }
      }
    }
  }
  iVar3 = 0;
  do {
    piVar4 = *(int **)(in_ECX + 0x24);
    if (((piVar4 != (int *)0x0) && (*piVar4 != 0)) &&
       ((*(int *)(*piVar4 + iVar3 * 4) != 0 &&
        ((iVar6 = *(int *)(*piVar4 + iVar3 * 4), *(short *)(iVar6 + 0xb6) != 0 &&
         (**(int **)(iVar6 + 0xb0) != 0)))))) {
      piVar4 = (int *)FUN_00707530(4);
      if ((piVar4 == (int *)0x0) ||
         ((iVar6 = (**(code **)(*piVar4 + 0x54))(), iVar6 < 5 ||
          (iVar6 = (**(code **)(*piVar4 + 0x54))(), 10 < iVar6)))) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      piVar4 = (int *)(-(uint)bVar1 & (uint)piVar4);
      if ((piVar4 != (int *)0x0) && (piVar7 != (int *)0x0)) {
        iVar6 = *piVar4;
        uVar9 = (**(code **)(*piVar7 + 0x88))(0);
        (**(code **)(iVar6 + 0x80))(9,uVar9);
        iVar6 = *piVar4;
        uVar9 = (**(code **)(*piVar7 + 0x8c))(0);
        (**(code **)(iVar6 + 0x84))(9,uVar9);
        local_4c = DAT_00b3fc80;
        fStack_48 = DAT_00b3fc84;
        switch(iVar3) {
        case 0:
          uStack_44 = 0;
          uStack_40 = 0;
          local_4c = (undefined4 *)0x0;
          fStack_48 = 0.0;
          break;
        case 1:
          uStack_3c = 0x3f000000;
          local_4c = (undefined4 *)0x3f000000;
          uStack_38 = 0;
          fStack_48 = 0.0;
          break;
        case 2:
          uStack_34 = 0;
          uStack_30 = 0x3f000000;
          local_4c = (undefined4 *)0x0;
          fStack_48 = 0.5;
          break;
        case 3:
          uStack_2c = 0x3f000000;
          uStack_28 = 0x3f000000;
          local_4c = (undefined4 *)0x3f000000;
          fStack_48 = 0.5;
        }
        fStack_24 = (((float)*(int *)(*(int *)(in_ECX + 0x24) + 0x98) -
                     *(float *)(local_50 + 0x18) * 0.00024414063) + (float)local_4c) * 0.03125;
        fStack_20 = (fStack_48 +
                    ((float)*(int *)(*(int *)(in_ECX + 0x24) + 0x9c) -
                    *(float *)(local_50 + 0x1c) * 0.00024414063)) * 0.03125;
        piVar4[0x2a] = (int)fStack_24;
        piVar4[0x2b] = (int)fStack_20;
        uStack_8 = 0;
        uStack_4 = 0;
        piVar4[0x2c] = 0;
        piVar4[0x2d] = 0;
        fStack_10 = fStack_24;
        fStack_c = fStack_20;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}



/* WARNING: Removing unreachable block (ram,0x004c2d00) */
/* WARNING: Removing unreachable block (ram,0x004c2d12) */
/* WARNING: Removing unreachable block (ram,0x004c2d1c) */

undefined4 FUN_004c2630(void)

{
  byte bVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int *piVar14;
  LONG LVar15;
  undefined4 uVar16;
  int in_ECX;
  int iVar17;
  int iVar18;
  int iVar19;
  int *unaff_FS_OFFSET;
  uint local_98;
  undefined4 **ppuStack_94;
  undefined4 **ppuStack_90;
  undefined4 **local_8c;
  undefined4 **ppuStack_88;
  undefined4 *puStack_84;
  undefined4 **ppuStack_80;
  undefined4 **ppuStack_7c;
  undefined4 uStack_74;
  int local_70;
  undefined4 **ppuStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 *puStack_54;
  undefined4 **ppuStack_50;
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  undefined4 *puStack_28;
  int local_24;
  undefined4 *puStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4a13;
  local_c = *unaff_FS_OFFSET;
  uVar12 = DAT_00b30aac ^ (uint)&stack0xffffff58;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar14 = *(int **)(in_ECX + 0x24);
  if (((piVar14 == (int *)0x0) || (*piVar14 == 0)) || (*(int *)*piVar14 == 0)) {
    uVar16 = 0;
  }
  else {
    local_1c = 0x3f800000;
    local_18 = 0x3f800000;
    local_14 = 0x3f800000;
    local_10 = 0;
    if ((*(byte *)(in_ECX + 0x1c) & 2) == 0) {
      iVar19 = 0;
      do {
        iVar17 = 0;
        do {
          iVar18 = 0x11;
          do {
            puVar13 = (undefined4 *)
                      (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + iVar19) + iVar17);
            *puVar13 = 0x3f800000;
            puVar13[1] = 0x3f800000;
            iVar17 = iVar17 + 0x10;
            iVar18 = iVar18 + -1;
            puVar13[2] = 0x3f800000;
            puVar13[3] = 0;
          } while (iVar18 != 0);
        } while (iVar17 < 0x1210);
        iVar19 = iVar19 + 4;
      } while (iVar19 < 0x10);
    }
    local_98 = 0;
    bVar2 = false;
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
    local_70 = 0;
    local_24 = in_ECX;
    do {
      iVar19 = local_70;
      if (*(int *)(in_ECX + 0x24) != -0x40) {
        puVar13 = (undefined4 *)FUN_00401f00(0x14,uVar12);
        local_4 = 0;
        if (puVar13 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
        }
        else {
          uVar16 = **(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x40 + iVar19 * 4);
          FUN_00721350();
          *puVar13 = &PTR_FUN_00a45f74;
          puVar13[4] = 0x2420;
          puVar13[3] = uVar16;
        }
        local_4 = 0xffffffff;
        FUN_006ff820("tex %",puVar13);
      }
      FUN_007b8940(*(undefined4 *)(**(int **)(in_ECX + 0x24) + iVar19 * 4),1,1,1);
      piVar14 = (int *)FUN_00707530(4);
      if (((piVar14 == (int *)0x0) || (iVar17 = (**(code **)(*piVar14 + 0x54))(), iVar17 < 5)) ||
         (iVar17 = (**(code **)(*piVar14 + 0x54))(), 10 < iVar17)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if ((-(uint)bVar1 & (uint)piVar14) != 0) {
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + iVar19 * 4) != 0) {
          FUN_004c95b0();
        }
        iVar17 = 0;
        do {
          if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + iVar17) != 0) {
            FUN_004c95b0();
          }
          iVar17 = iVar17 + 4;
        } while (iVar17 < 0x20);
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x1c) == 0) {
          puStack_58 = (undefined4 *)0x0;
          ppuStack_50 = &puStack_58;
          local_98 = local_98 | 2;
        }
        else {
          ppuStack_50 = (undefined4 **)FUN_004c1670(&puStack_2c);
          bVar2 = true;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x18) == 0) {
          puStack_60 = (undefined4 *)0x0;
          ppuStack_6c = &puStack_60;
          local_98 = local_98 | 8;
        }
        else {
          ppuStack_6c = (undefined4 **)FUN_004c1670(&puStack_34);
          local_98 = local_98 | 4;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x14) == 0) {
          puStack_68 = (undefined4 *)0x0;
          ppuStack_7c = &puStack_68;
          local_98 = local_98 | 0x20;
        }
        else {
          ppuStack_7c = (undefined4 **)FUN_004c1670(&puStack_3c);
          local_98 = local_98 | 0x10;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x10) == 0) {
          uStack_74 = 0;
          puStack_84 = &uStack_74;
        }
        else {
          puStack_84 = (undefined4 *)FUN_004c1670(&puStack_40);
          local_98 = local_98 | 0x40;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0xc) == 0) {
          puStack_5c = (undefined4 *)0x0;
          ppuStack_80 = &puStack_5c;
          local_98 = local_98 | 0x200;
        }
        else {
          ppuStack_80 = (undefined4 **)FUN_004c1670(&puStack_30);
          local_98 = local_98 | 0x100;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 8) == 0) {
          puStack_54 = (undefined4 *)0x0;
          ppuStack_88 = &puStack_54;
          local_98 = local_98 | 0x800;
        }
        else {
          ppuStack_88 = (undefined4 **)FUN_004c1670(&puStack_28);
          local_98 = local_98 | 0x400;
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 4) == 0) {
          puStack_64 = (undefined4 *)0x0;
          ppuStack_94 = &puStack_64;
          local_98 = local_98 | 0x2000;
        }
        else {
          ppuStack_94 = (undefined4 **)FUN_004c1670(&puStack_38);
          local_98 = local_98 | 0x1000;
        }
        if (**(int **)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) == 0) {
          puStack_4c = (undefined4 *)0x0;
          ppuStack_90 = &puStack_4c;
          local_98 = local_98 | 0x8000;
        }
        else {
          ppuStack_90 = (undefined4 **)FUN_004c1670(&puStack_20);
          local_98 = local_98 | 0x4000;
        }
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + iVar19 * 4) == 0) {
          puStack_48 = (undefined4 *)0x0;
          local_8c = &puStack_48;
          local_4 = 0x12;
          local_98 = local_98 | 0x20000;
        }
        else {
          local_8c = (undefined4 **)FUN_004c1670(&puStack_44);
          local_4 = 0x11;
          local_98 = local_98 | 0x10000;
        }
        FUN_007d8ba0(*local_8c,*ppuStack_90,*ppuStack_94,*ppuStack_88,*ppuStack_80,*puStack_84,
                     *ppuStack_7c,*ppuStack_6c,*ppuStack_50);
        puVar13 = puStack_48;
        local_4 = 0x11;
        if ((((local_98 & 0x20000) != 0) &&
            (local_98 = local_98 & 0xfffdffff, puStack_48 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_48 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_44;
        local_4 = 0x10;
        if (((((local_98 & 0x10000) != 0) &&
             (local_98 = local_98 & 0xfffeffff, puStack_44 != (undefined4 *)0x0)) &&
            (LVar15 = InterlockedDecrement(puStack_44 + 1), LVar15 == 0)) &&
           (puVar13 != (undefined4 *)0x0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_4c;
        local_4 = 0xf;
        if ((((local_98 & 0x8000) != 0) &&
            (local_98 = local_98 & 0xffff7fff, puStack_4c != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_4c + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_20;
        local_4 = 0xe;
        if ((((local_98 & 0x4000) != 0) &&
            (local_98 = local_98 & 0xffffbfff, puStack_20 != (undefined4 *)0x0)) &&
           ((LVar15 = InterlockedDecrement(puStack_20 + 1), LVar15 == 0 &&
            (puVar13 != (undefined4 *)0x0)))) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_64;
        local_4 = 0xd;
        if ((((local_98 & 0x2000) != 0) &&
            (local_98 = local_98 & 0xffffdfff, puStack_64 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_64 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_38;
        local_4 = 0xc;
        if ((((local_98 & 0x1000) != 0) &&
            (local_98 = local_98 & 0xffffefff, puStack_38 != (undefined4 *)0x0)) &&
           ((LVar15 = InterlockedDecrement(puStack_38 + 1), LVar15 == 0 &&
            (puVar13 != (undefined4 *)0x0)))) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_54;
        local_4 = 0xb;
        if ((((local_98 & 0x800) != 0) &&
            (local_98 = local_98 & 0xfffff7ff, puStack_54 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_54 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_28;
        local_4 = 10;
        if (((((local_98 & 0x400) != 0) &&
             (local_98 = local_98 & 0xfffffbff, puStack_28 != (undefined4 *)0x0)) &&
            (LVar15 = InterlockedDecrement(puStack_28 + 1), LVar15 == 0)) &&
           (puVar13 != (undefined4 *)0x0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_5c;
        local_4 = 9;
        if ((((local_98 & 0x200) != 0) &&
            (local_98 = local_98 & 0xfffffdff, puStack_5c != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_5c + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_30;
        local_4 = 8;
        if ((((local_98 & 0x100) != 0) &&
            (local_98 = local_98 & 0xfffffeff, puStack_30 != (undefined4 *)0x0)) &&
           ((LVar15 = InterlockedDecrement(puStack_30 + 1), LVar15 == 0 &&
            (puVar13 != (undefined4 *)0x0)))) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_40;
        local_4 = 6;
        if (((((local_98 & 0x40) != 0) &&
             (local_98 = local_98 & 0xffffffbf, puStack_40 != (undefined4 *)0x0)) &&
            (LVar15 = InterlockedDecrement(puStack_40 + 1), LVar15 == 0)) &&
           (puVar13 != (undefined4 *)0x0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_68;
        local_4 = 5;
        if ((((local_98 & 0x20) != 0) &&
            (local_98 = local_98 & 0xffffffdf, puStack_68 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_68 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_3c;
        local_4 = 4;
        if ((((local_98 & 0x10) != 0) &&
            (local_98 = local_98 & 0xffffffef, puStack_3c != (undefined4 *)0x0)) &&
           ((LVar15 = InterlockedDecrement(puStack_3c + 1), LVar15 == 0 &&
            (puVar13 != (undefined4 *)0x0)))) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_60;
        local_4 = 3;
        if ((((local_98 & 8) != 0) &&
            (local_98 = local_98 & 0xfffffff7, puStack_60 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_60 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_34;
        local_4 = 2;
        if ((((local_98 & 4) != 0) &&
            (local_98 = local_98 & 0xfffffffb, puStack_34 != (undefined4 *)0x0)) &&
           ((LVar15 = InterlockedDecrement(puStack_34 + 1), LVar15 == 0 &&
            (puVar13 != (undefined4 *)0x0)))) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_58;
        local_4 = 1;
        if ((((local_98 & 2) != 0) &&
            (local_98 = local_98 & 0xfffffffd, puStack_58 != (undefined4 *)0x0)) &&
           (LVar15 = InterlockedDecrement(puStack_58 + 1), LVar15 == 0)) {
          (**(code **)*puVar13)(1);
        }
        puVar13 = puStack_2c;
        local_4 = 0xffffffff;
        if ((((bVar2) && (bVar2 = false, puStack_2c != (undefined4 *)0x0)) &&
            (LVar15 = InterlockedDecrement(puStack_2c + 1), LVar15 == 0)) &&
           (puVar13 != (undefined4 *)0x0)) {
          (**(code **)*puVar13)(1);
        }
        in_ECX = local_24;
        iVar19 = local_70;
        if (*(int *)(*(int *)(*(int *)(local_24 + 0x24) + 0x30 + local_70 * 4) + 0x1c) == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x18) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x14) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0x10) == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 0xc) == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 8) == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) + 4) == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_004c8d20();
        }
        if (**(int **)(*(int *)(in_ECX + 0x24) + 0x30 + iVar19 * 4) == 0) {
          uVar10 = 0;
        }
        else {
          uVar10 = FUN_004c8d20();
        }
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + iVar19 * 4) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = FUN_004c8d20();
        }
        FUN_007d7400(uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,uVar3,0);
      }
      local_70 = iVar19 + 1;
    } while (local_70 < 4);
    FUN_004c2300();
    uVar16 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar16;
}



uint FUN_004c3030(float *param_1,float *param_2,char param_3)

{
  float *pfVar1;
  float fVar2;
  int *piVar3;
  float fVar4;
  undefined2 uVar8;
  float fVar5;
  uint uVar6;
  float fVar7;
  int in_ECX;
  uint uVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  bool bVar14;
  float10 extraout_ST0;
  float10 fVar15;
  float10 extraout_ST1;
  int local_3c;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_c;
  float local_8;
  
  pfVar1 = param_2;
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_004c9a80();
    }
  }
  else {
    local_3c = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  local_30 = (float)local_3c * 4096.0;
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      local_3c = 0;
    }
    else {
      local_3c = FUN_004c9aa0();
    }
  }
  else {
    local_3c = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  piVar3 = *(int **)(in_ECX + 0x24);
  fVar5 = (float)local_3c * 4096.0;
  if ((piVar3 == (int *)0x0) || ((piVar3[1] == 0 && (*piVar3 == 0)))) {
    return (uint)piVar3 & 0xffffff00;
  }
  fVar2 = *param_2;
  uVar8 = (undefined2)((uint)piVar3 >> 0x10);
  if (local_30 >= fVar2 && (local_30 == fVar2) == 0) {
    return CONCAT22(uVar8,(ushort)(local_30 < fVar2) << 8 |
                          (ushort)(NAN(local_30) || NAN(fVar2)) << 10 |
                          (ushort)(local_30 == fVar2) << 0xe);
  }
  fVar2 = *param_2;
  fVar7 = local_30 + 4096.0;
  if (fVar7 < fVar2) {
    return CONCAT22(uVar8,(ushort)(fVar7 < fVar2) << 8 | (ushort)(NAN(fVar7) || NAN(fVar2)) << 10 |
                          (ushort)(fVar7 == fVar2) << 0xe);
  }
  fVar2 = param_2[1];
  if (fVar5 >= fVar2 && (fVar5 == fVar2) == 0) {
    return CONCAT22(uVar8,(ushort)(fVar5 < fVar2) << 8 | (ushort)(NAN(fVar5) || NAN(fVar2)) << 10 |
                          (ushort)(fVar5 == fVar2) << 0xe);
  }
  fVar2 = param_2[1];
  fVar7 = fVar5 + 4096.0;
  if (fVar7 < fVar2) {
    return CONCAT22(uVar8,(ushort)(fVar7 < fVar2) << 8 | (ushort)(NAN(fVar7) || NAN(fVar2)) << 10 |
                          (ushort)(fVar7 == fVar2) << 0xe);
  }
  *param_1 = *param_2 - local_30;
  param_1[1] = param_2[1] - fVar5;
  fVar5 = (float)FUN_009828c0();
  param_1[4] = fVar5;
  uVar6 = FUN_009828c0();
  uVar9 = uVar6 & 0x800007ff;
  bVar14 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xfffff800) == 0xffffffff;
  }
  if ((bVar14) && (uVar6 != 0)) {
    param_1[4] = (float)((int)fVar5 + -1);
  }
  fVar5 = (float)FUN_009828c0();
  param_1[5] = fVar5;
  uVar6 = FUN_009828c0();
  uVar9 = uVar6 & 0x800007ff;
  bVar14 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xfffff800) == 0xffffffff;
  }
  if ((bVar14) && (uVar6 != 0)) {
    param_1[5] = (float)((int)fVar5 + -1);
  }
  param_1[6] = (float)((int)param_1[4] + (int)param_1[5] * 2);
  fVar5 = (float)(extraout_ST0 + (float10)((int)param_1[4] << 0xb));
  fVar2 = (float)(extraout_ST1 + (float10)((int)param_1[5] << 0xb));
  param_1[2] = *param_2 - fVar5;
  param_1[3] = param_2[1] - fVar2;
  fVar15 = (float10)FUN_004bf060();
  local_18 = (float)(fVar15 + (float10)2048.0);
  fVar15 = (float10)FUN_004bf0a0();
  local_14 = (float)(fVar15 + (float10)2048.0);
  fVar7 = (float)FUN_009828c0();
  param_1[9] = fVar7;
  local_24 = (float)FUN_009828c0();
  uVar6 = (uint)local_24 & 0x8000007f;
  bVar14 = uVar6 == 0;
  if ((int)uVar6 < 0) {
    bVar14 = (uVar6 - 1 | 0xffffff80) == 0xffffffff;
  }
  if ((bVar14) && (local_24 != 0.0)) {
    param_1[9] = (float)((int)fVar7 + -1);
  }
  fVar7 = (float)FUN_009828c0();
  param_1[10] = fVar7;
  uVar6 = FUN_009828c0();
  uVar9 = uVar6 & 0x8000007f;
  bVar14 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xffffff80) == 0xffffffff;
  }
  if ((bVar14) && (uVar6 != 0)) {
    param_1[10] = (float)((int)fVar7 + -1);
  }
  fVar7 = param_1[9];
  local_30 = (float)((int)fVar7 << 7);
  fVar4 = param_1[10];
  param_1[7] = *param_2 - ((float)(int)local_30 + fVar5);
  fVar5 = param_2[1];
  param_1[0xb] = param_1[6];
  uVar9 = (int)fVar4 + (int)fVar7 & 0x80000001;
  bVar14 = uVar9 == 0;
  param_1[8] = fVar5 - ((float)((int)fVar4 << 7) + fVar2);
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xfffffffe) == 0xffffffff;
  }
  pfVar12 = param_1 + 0x10;
  if (bVar14) {
    fVar7 = (float)((int)fVar4 * 0x11 + (int)fVar7);
    param_1[0x12] = (float)((int)fVar7 + 0x12);
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x11] = fVar7;
    if (param_1[7] <= param_1[8]) {
      fVar7 = (float)((int)fVar7 + 0x11);
      *(undefined1 *)((int)param_1 + 0x4d) = 1;
    }
    else {
      fVar7 = (float)((int)fVar7 + 1);
LAB_004c3317:
      *(undefined1 *)((int)param_1 + 0x4d) = 0;
    }
  }
  else {
    fVar7 = (float)((int)fVar4 * 0x11 + (int)fVar7);
    param_1[0x11] = (float)((int)fVar7 + 1);
    *(undefined1 *)(param_1 + 0x13) = 1;
    param_1[0x12] = (float)((int)fVar7 + 0x11);
    if (param_1[7] + param_1[8] <= 128.0) goto LAB_004c3317;
    fVar7 = (float)((int)fVar7 + 0x12);
    *(undefined1 *)((int)param_1 + 0x4d) = 1;
  }
  *pfVar12 = fVar7;
  uVar9 = FUN_009828c0();
  uVar9 = uVar9 & 0x8000007f;
  bVar14 = uVar9 == 0;
  if ((int)uVar9 < 0) {
    bVar14 = (uVar9 - 1 | 0xffffff80) == 0xffffffff;
  }
  if (bVar14) {
    uVar9 = FUN_009828c0();
    uVar9 = uVar9 & 0x8000007f;
    bVar14 = uVar9 == 0;
    if ((int)uVar9 < 0) {
      bVar14 = (uVar9 - 1 | 0xffffff80) == 0xffffffff;
    }
    if (bVar14) {
      param_1[0xf] = (float)(int)ROUND((float)(((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x7fU)) >> 7) *
                                               0x11 + ((int)((int)local_24 +
                                                            ((int)local_24 >> 0x1f & 0x7fU)) >> 7)))
      ;
      goto LAB_004c34a8;
    }
  }
  param_2 = (float *)0x0;
  fVar5 = *pfVar1;
  fVar2 = pfVar1[1];
  iVar13 = 0;
  iVar10 = 0;
  do {
    FUN_004c1dd0(param_1[6],*pfVar12,&local_c);
    local_30 = local_18 + local_c;
    local_2c = local_14 + local_8;
    local_24 = local_30 - fVar5;
    local_20 = local_2c - fVar2;
    fVar15 = (float10)FUN_00982c30();
    fVar7 = (float)fVar15;
    iVar11 = iVar13;
    if ((iVar13 != 0) && ((float)param_2 <= fVar7)) {
      iVar11 = iVar10;
      fVar7 = (float)param_2;
    }
    param_2 = (float *)fVar7;
    iVar13 = iVar13 + 1;
    pfVar12 = pfVar12 + 1;
    iVar10 = iVar11;
  } while (iVar13 < 3);
  param_1[0xf] = param_1[iVar11 + 0x10];
LAB_004c34a8:
  FUN_004c1dd0(param_1[6],param_1[0xf],&local_30);
  local_24 = local_30 + local_18;
  pfVar1 = param_1 + 0xc;
  *pfVar1 = local_24;
  local_20 = local_2c + local_14;
  param_1[0xd] = local_20;
  local_1c = local_28 + 0.0;
  param_1[0xe] = local_1c;
  if (param_3 != '\0') {
    uVar6 = FUN_004c3030(param_1,pfVar1,0);
    return uVar6;
  }
  return CONCAT31((int3)((uint)pfVar1 >> 8),1);
}



undefined4 FUN_004c3540(int param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  int in_ECX;
  float fVar11;
  float fVar12;
  float10 fVar13;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  float fStack_10;
  float local_c;
  float local_8;
  float local_4;
  
  FUN_004c0530(&local_c,*(undefined1 *)(param_1 + 0x18),*(undefined2 *)(param_1 + 0x3c),0,0);
  FUN_004c1dd0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3c),&local_30);
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_004c9aa0();
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_004c9a80();
    }
  }
  else {
    iVar9 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  local_18 = (float)(iVar9 << 0xc) + 2048.0;
  local_14 = (float)(iVar8 << 0xc) + 2048.0;
  local_24 = local_18 + local_30;
  local_20 = local_2c + local_14;
  if (((local_c == local_24) && (local_8 == local_20)) && (local_4 == 0.0)) {
    FUN_004c1e80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3c),param_2);
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    return 1;
  }
  fVar13 = (float10)FUN_00982bfa();
  fVar3 = (float)fVar13 * 0.0078125;
  fVar13 = (float10)FUN_00982bfa();
  fVar12 = DAT_00b258ec;
  fVar11 = DAT_00b258e8;
  fVar4 = (float)fVar13 * 0.0078125;
  local_4 = DAT_00b258f0;
  FUN_004c1e80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x40),&local_18);
  FUN_004c1e80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x44),&fStack_54);
  FUN_004c1e80(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x48),&fStack_48);
  fVar7 = fStack_10;
  fVar6 = local_14;
  fVar5 = local_18;
  if (*(char *)(param_1 + 0x4c) == '\0') {
    if (*(char *)(param_1 + 0x4d) == '\0') {
      fStack_34 = 1.0 - fVar3;
      fStack_3c = fStack_54 * fStack_34;
      fStack_38 = fStack_50 * fStack_34;
      fStack_34 = fStack_4c * fStack_34;
      fStack_28 = 1.0 - fVar4;
      local_30 = (fStack_3c + local_18 * fVar3) * fStack_28;
      local_2c = (fStack_38 + local_14 * fVar3) * fStack_28;
      fStack_28 = (fStack_34 + fStack_10 * fVar3) * fStack_28;
      fVar11 = local_30 + fStack_48 * fVar4;
      fVar12 = local_2c + fStack_44 * fVar4;
      fStack_1c = fStack_28 + fStack_40 * fVar4;
      local_24 = fVar11;
      local_20 = fVar12;
      local_18 = fStack_48 * fVar4;
      local_14 = fStack_44 * fVar4;
      fStack_10 = fStack_40 * fVar4;
      local_4 = fStack_1c;
    }
    if (*(char *)(param_1 + 0x4d) != '\0') {
      fStack_34 = 1.0 - fVar4;
      fStack_3c = fStack_34 * fStack_54;
      fStack_38 = fStack_50 * fStack_34;
      fStack_34 = fStack_4c * fStack_34;
      fVar11 = 1.0 - fVar3;
      local_30 = fVar5 * fVar11 + fStack_48 * fVar3;
      local_2c = fVar6 * fVar11 + fStack_44 * fVar3;
      fStack_28 = fVar7 * fVar11 + fStack_40 * fVar3;
      local_18 = local_30 * fVar4;
      local_14 = local_2c * fVar4;
      fStack_10 = fStack_28 * fVar4;
      fVar11 = local_18 + fStack_3c;
      fVar12 = local_14 + fStack_38;
      fStack_1c = fStack_10 + fStack_34;
      local_24 = fVar11;
      local_20 = fVar12;
      local_4 = fStack_1c;
    }
  }
  else {
    if (*(char *)(param_1 + 0x4d) == '\0') {
      fStack_3c = fStack_48 * fVar4;
      fStack_38 = fStack_44 * fVar4;
      fStack_34 = fStack_40 * fVar4;
      fVar11 = 1.0 - fVar3;
      local_30 = fVar11 * local_18 + fStack_54 * fVar3;
      local_2c = local_14 * fVar11 + fStack_50 * fVar3;
      fStack_28 = fStack_10 * fVar11 + fStack_4c * fVar3;
      fStack_10 = 1.0 - fVar4;
      local_18 = local_30 * fStack_10;
      local_14 = local_2c * fStack_10;
      fStack_10 = fStack_28 * fStack_10;
      fVar11 = local_18 + fStack_3c;
      fVar12 = local_14 + fStack_38;
      fStack_1c = fStack_10 + fStack_34;
      local_24 = fVar11;
      local_20 = fVar12;
      local_4 = fStack_1c;
    }
    if ((*(char *)(param_1 + 0x4c) != '\0') && (*(char *)(param_1 + 0x4d) != '\0')) {
      fStack_34 = 1.0 - fVar4;
      fStack_3c = fStack_34 * fStack_54;
      fStack_38 = fStack_50 * fStack_34;
      fStack_34 = fStack_4c * fStack_34;
      fVar11 = 1.0 - fVar3;
      local_30 = fVar11 * fStack_48 + fVar3 * fVar5;
      local_2c = fStack_44 * fVar11 + fVar3 * fVar6;
      fStack_28 = fVar11 * fStack_40 + fVar3 * fVar7;
      local_18 = local_30 * fVar4;
      local_14 = local_2c * fVar4;
      fStack_10 = fVar4 * fStack_28;
      fVar11 = local_18 + fStack_3c;
      fVar12 = local_14 + fStack_38;
      fStack_1c = fStack_10 + fStack_34;
      local_24 = fVar11;
      local_20 = fVar12;
      local_4 = fStack_1c;
    }
  }
  *param_2 = fVar11;
  param_2[1] = fVar12;
  param_2[2] = local_4;
  FUN_0043f350();
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  FUN_004c1dd0(uVar2,uVar1,&fStack_48);
  FUN_004c1dd0(uVar2,*(undefined4 *)(param_1 + 0x44),&local_c);
  fStack_48 = fStack_48 - local_c;
  fStack_44 = fStack_44 - local_8;
  fStack_40 = fStack_40 - local_4;
  FUN_004c1dd0(uVar2,uVar1,&fStack_54);
  FUN_004c1dd0(uVar2,*(undefined4 *)(param_1 + 0x48),&local_c);
  fStack_54 = fStack_54 - local_c;
  fStack_50 = fStack_50 - local_8;
  fStack_4c = fStack_4c - local_4;
  if (*(char *)(param_1 + 0x4c) == '\0') {
LAB_004c3bb5:
    if (*(char *)(param_1 + 0x4d) == '\0') {
LAB_004c3bc6:
      pfVar10 = &fStack_48;
      goto LAB_004c3bcf;
    }
  }
  else if (*(char *)(param_1 + 0x4d) != '\0') {
    if (*(char *)(param_1 + 0x4c) == '\0') goto LAB_004c3bb5;
    goto LAB_004c3bc6;
  }
  pfVar10 = &fStack_54;
LAB_004c3bcf:
  pfVar10 = (float *)FUN_004bf9e0(&local_c,pfVar10);
  *param_3 = *pfVar10;
  param_3[1] = pfVar10[1];
  param_3[2] = pfVar10[2];
  return 1;
}



void FUN_004c3c00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 local_50 [80];
  
  cVar1 = FUN_004c3030(local_50,param_1,0);
  if (cVar1 == '\0') {
    return;
  }
  FUN_004c3540(local_50,param_2,param_3);
  return;
}



undefined1 FUN_004c3c50(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  undefined1 local_50 [24];
  int local_38;
  int local_14;
  
  cVar1 = FUN_004c3030(local_50,param_1,0);
  if (cVar1 == '\0') {
    return 0;
  }
  return *(undefined1 *)
          (local_14 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + local_38 * 4));
}



void FUN_004c3c90(uint param_1,int param_2,float *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  int in_ECX;
  uint uVar12;
  int iVar13;
  float fVar14;
  bool bVar15;
  bool bVar16;
  float10 fVar17;
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
  undefined4 local_4;
  
  if (*(char *)(param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4)) != '\0')
  {
    return;
  }
  if (param_4 == (int *)0x0) {
    return;
  }
  fVar17 = (float10)FUN_004bf060();
  local_c = (float)(fVar17 + (float10)2048.0);
  fVar17 = (float10)FUN_004bf0a0();
  iVar11 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + param_1 * 4);
  local_8 = (float)(fVar17 + (float10)2048.0);
  iVar13 = param_2 * 0xc;
  iVar9 = iVar11 + iVar13;
  local_18 = *(float *)(iVar11 + iVar13) + local_c;
  bVar3 = false;
  bVar5 = false;
  bVar6 = false;
  bVar7 = false;
  bVar16 = false;
  local_14 = *(float *)(iVar9 + 4) + local_8;
  bVar4 = false;
  iVar11 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + param_1 * 4);
  local_10 = *(float *)(iVar9 + 8) + 0.0;
  local_20 = *(float *)(iVar11 + 4 + iVar13);
  pfVar10 = (float *)(iVar11 + iVar13);
  local_24 = *pfVar10;
  local_1c = pfVar10[2];
  local_34 = 1.0;
  if ((int)param_1 < 2) {
    if (param_2 < 0x11) {
      iVar11 = param_4[6];
      if ((iVar11 == 0) || (cVar8 = FUN_004c3c00(&local_18,&local_30,&local_c), cVar8 == '\0')) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 0x3f800000;
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 1.0;
      }
      bVar6 = true;
      bVar7 = false;
      if ((iVar11 != 0) && (cVar8 = FUN_004c3c50(&local_18), cVar8 != '\0')) goto LAB_004c3dd4;
LAB_004c3e75:
      local_24 = local_24 + local_30;
      local_20 = local_2c + local_20;
      local_1c = local_28 + local_1c;
      local_34 = 2.0;
    }
LAB_004c3ea3:
    uVar12 = param_1 & 0x80000001;
    bVar15 = uVar12 == 0;
    if ((int)uVar12 < 0) {
      bVar15 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if ((bVar15) && (param_2 == (param_2 / 0x11) * 0x11)) {
      iVar11 = param_4[3];
      bVar16 = true;
      if ((iVar11 == 0) || (cVar8 = FUN_004c3c00(&local_18,&local_30,&local_c), cVar8 == '\0')) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 0x3f800000;
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 1.0;
      }
      if ((iVar11 != 0) && (cVar8 = FUN_004c3c50(&local_18), cVar8 != '\0')) {
LAB_004c3dd4:
        *param_3 = local_30;
        param_3[1] = local_2c;
        param_3[2] = local_28;
        *(undefined1 *)(param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4))
             = 1;
        return;
      }
      local_24 = local_24 + local_30;
      local_20 = local_2c + local_20;
      local_1c = local_28 + local_1c;
      if (bVar6) {
        iVar11 = param_4[5];
      }
      else {
        fVar14 = local_34 + 1.0;
        if (!bVar7) goto LAB_004c4137;
        iVar11 = *param_4;
      }
LAB_004c3f8c:
      local_34 = local_34 + 1.0;
      if ((iVar11 == 0) || (cVar8 = FUN_004c3c00(&local_18,&local_30,&local_c), cVar8 == '\0')) {
        local_c = 0.0;
        local_8 = 0.0;
        local_4 = 0x3f800000;
        local_30 = 0.0;
        local_2c = 0.0;
        local_28 = 1.0;
      }
      if ((iVar11 != 0) && (cVar8 = FUN_004c3c50(&local_18), cVar8 != '\0')) goto LAB_004c3ff0;
      local_24 = local_24 + local_30;
      local_20 = local_2c + local_20;
      local_1c = local_28 + local_1c;
      fVar14 = local_34 + 1.0;
    }
    else {
      uVar12 = param_1 + 1 & 0x80000001;
      bVar15 = uVar12 == 0;
      if ((int)uVar12 < 0) {
        bVar15 = (uVar12 - 1 | 0xfffffffe) == 0xffffffff;
      }
      fVar14 = local_34;
      if ((bVar15) && ((param_2 + 1) % 0x11 == 0)) {
        iVar11 = param_4[4];
        bVar4 = true;
        if ((iVar11 == 0) || (cVar8 = FUN_004c3c00(&local_18,&local_30,&local_c), cVar8 == '\0')) {
          local_c = 0.0;
          local_8 = 0.0;
          local_4 = 0x3f800000;
          local_30 = 0.0;
          local_2c = 0.0;
          local_28 = 1.0;
        }
        if ((iVar11 == 0) || (cVar8 = FUN_004c3c50(&local_18), cVar8 == '\0')) {
          local_24 = local_24 + local_30;
          local_20 = local_2c + local_20;
          local_1c = local_28 + local_1c;
          if (bVar6) {
            iVar11 = param_4[7];
          }
          else {
            fVar14 = local_34 + 1.0;
            if (!bVar7) goto LAB_004c4137;
            iVar11 = param_4[2];
          }
          goto LAB_004c3f8c;
        }
        goto LAB_004c3ff0;
      }
    }
LAB_004c4137:
    local_34 = fVar14;
    if ((0x10 < param_2) || (bVar6)) {
      if ((0x10f < param_2) && (!bVar7)) {
        iVar13 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + 8 + param_1 * 4);
        cVar8 = *(char *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + 8 + param_1 * 4) +
                          -0x110 + param_2);
        bVar5 = true;
        iVar11 = param_2 * 3 + -0x330;
        goto LAB_004c4168;
      }
    }
    else {
      iVar13 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + -8 + param_1 * 4);
      cVar8 = *(char *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + -8 + param_1 * 4) +
                        0x110 + param_2);
      bVar3 = true;
      iVar11 = param_2 * 3 + 0x330;
LAB_004c4168:
      fVar14 = *(float *)(iVar13 + 4 + iVar11 * 4);
      pfVar10 = (float *)(iVar13 + iVar11 * 4);
      fVar1 = *pfVar10;
      fVar2 = pfVar10[2];
      if (cVar8 != '\0') {
        *param_3 = fVar1;
        param_3[1] = fVar14;
        param_3[2] = fVar2;
        goto LAB_004c449c;
      }
      local_24 = local_24 + fVar1;
      local_20 = fVar14 + local_20;
      local_1c = fVar2 + local_1c;
      local_34 = local_34 + 1.0;
    }
    if ((param_2 != (param_2 / 0x11) * 0x11) || (bVar16)) {
      fVar14 = local_34;
      if (((param_2 + 1) % 0x11 == 0) && (!bVar4)) {
        iVar11 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
        iVar13 = *(int *)(*(int *)(in_ECX + 0x24) + 0x10);
        pfVar10 = (float *)(*(int *)(iVar11 + 4 + param_1 * 4) + (param_2 * 3 + -0x30) * 4);
        local_30 = *pfVar10;
        fVar14 = pfVar10[1];
        local_28 = pfVar10[2];
        if (*(char *)(*(int *)(iVar13 + 4 + param_1 * 4) + -0x10 + param_2) != '\0')
        goto LAB_004c433d;
        local_24 = local_24 + local_30;
        local_20 = fVar14 + local_20;
        local_1c = local_28 + local_1c;
        if (bVar3) {
          pfVar10 = (float *)(*(int *)(iVar11 + -4 + param_1 * 4) + 0xcc0);
          bVar16 = *(char *)(*(int *)(iVar13 + -4 + param_1 * 4) + 0x110) == '\0';
          goto LAB_004c42aa;
        }
        fVar14 = local_34 + 1.0;
        if (bVar5) {
          pfVar10 = *(float **)(iVar11 + 0xc + param_1 * 4);
          local_30 = *pfVar10;
          local_2c = pfVar10[1];
          local_28 = pfVar10[2];
          if (**(char **)(iVar13 + 0xc + param_1 * 4) != '\0') {
            *param_3 = local_30;
            param_3[1] = local_2c;
            param_3[2] = local_28;
            *(undefined1 *)
             (param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4)) = 1;
            return;
          }
          goto LAB_004c442a;
        }
      }
    }
    else {
      iVar11 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
      iVar13 = *(int *)(*(int *)(in_ECX + 0x24) + 0x10);
      pfVar10 = (float *)(*(int *)(iVar11 + -4 + param_1 * 4) + (param_2 * 3 + 0x30) * 4);
      local_30 = *pfVar10;
      fVar14 = pfVar10[1];
      local_28 = pfVar10[2];
      if (*(char *)(*(int *)(iVar13 + -4 + param_1 * 4) + 0x10 + param_2) != '\0') {
LAB_004c433d:
        *param_3 = local_30;
        param_3[1] = fVar14;
        param_3[2] = local_28;
        *(undefined1 *)(param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4))
             = 1;
        return;
      }
      local_24 = local_24 + local_30;
      local_20 = fVar14 + local_20;
      local_1c = local_28 + local_1c;
      if (bVar3) {
        pfVar10 = (float *)(*(int *)(iVar11 + -0xc + param_1 * 4) + 0xd80);
        bVar16 = *(char *)(*(int *)(iVar13 + -0xc + param_1 * 4) + 0x120) == '\0';
      }
      else {
        fVar14 = local_34 + 1.0;
        if (!bVar5) goto LAB_004c4458;
        pfVar10 = (float *)(*(int *)(iVar11 + 4 + param_1 * 4) + 0xc0);
        bVar16 = *(char *)(*(int *)(iVar13 + 4 + param_1 * 4) + 0x10) == '\0';
      }
LAB_004c42aa:
      local_30 = *pfVar10;
      local_2c = pfVar10[1];
      local_28 = pfVar10[2];
      if (!bVar16) {
        *param_3 = local_30;
        param_3[1] = local_2c;
        param_3[2] = local_28;
        *(undefined1 *)(param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4))
             = 1;
        return;
      }
LAB_004c442a:
      local_34 = local_34 + 1.0;
      local_24 = local_24 + local_30;
      local_20 = local_2c + local_20;
      local_1c = local_28 + local_1c;
      fVar14 = local_34 + 1.0;
    }
LAB_004c4458:
    local_34 = fVar14;
    local_34 = 1.0 / local_34;
    *param_3 = local_34 * local_24;
    local_2c = local_20 * local_34;
    local_28 = local_34 * local_1c;
  }
  else {
    if (param_2 < 0x110) goto LAB_004c3ea3;
    iVar11 = param_4[1];
    bVar7 = true;
    if ((iVar11 == 0) || (cVar8 = FUN_004c3c00(&local_18,&local_30,&local_c), cVar8 == '\0')) {
      local_c = 0.0;
      local_8 = 0.0;
      local_4 = 0x3f800000;
      local_30 = 0.0;
      local_2c = 0.0;
      local_28 = 1.0;
    }
    bVar6 = false;
    if ((iVar11 == 0) || (cVar8 = FUN_004c3c50(&local_18), cVar8 == '\0')) goto LAB_004c3e75;
LAB_004c3ff0:
    *param_3 = local_30;
  }
  param_3[1] = local_2c;
  param_3[2] = local_28;
LAB_004c449c:
  *(undefined1 *)(param_2 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + param_1 * 4)) = 1;
  return;
}



undefined4 FUN_004c44c0(int param_1,float *param_2)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined1 local_24 [8];
  float local_1c;
  undefined1 local_18 [8];
  float local_10;
  undefined1 local_c [8];
  float local_4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  FUN_004c1dd0(uVar1,*(undefined4 *)(param_1 + 0x40),local_18);
  FUN_004c1dd0(uVar1,*(undefined4 *)(param_1 + 0x44),local_24);
  FUN_004c1dd0(uVar1,*(undefined4 *)(param_1 + 0x48),local_c);
  if (*(char *)(param_1 + 0x4c) != '\0') {
    if (*(char *)(param_1 + 0x4d) != '\0') {
      *param_2 = local_10 -
                 ((local_10 - local_4) * 0.0078125 * (128.0 - *(float *)(param_1 + 0x1c)) +
                 (local_10 - local_1c) * 0.0078125 * (128.0 - *(float *)(param_1 + 0x20)));
      return 1;
    }
    *param_2 = (local_4 - local_10) * 0.0078125 * *(float *)(param_1 + 0x20) +
               (local_1c - local_10) * 0.0078125 * *(float *)(param_1 + 0x1c) + local_10;
    return 1;
  }
  fVar3 = (local_10 - local_1c) * 0.0078125;
  fVar2 = (local_4 - local_10) * 0.0078125;
  if (*(char *)(param_1 + 0x4d) == '\0') {
    *param_2 = *(float *)(param_1 + 0x20) * fVar2 + *(float *)(param_1 + 0x1c) * fVar3 + local_1c;
    return 1;
  }
  *param_2 = *(float *)(param_1 + 0x1c) * fVar2 + *(float *)(param_1 + 0x20) * fVar3 + local_1c;
  return 1;
}



float * FUN_004c4630(float *param_1,int param_2)

{
  int iVar1;
  undefined1 local_c [8];
  float local_4;
  
  *param_1 = 3.4028235e+38;
  param_1[1] = -3.4028235e+38;
  if (param_2 < 0x10) {
    iVar1 = 0;
    do {
      FUN_004c1dd0(param_2,iVar1,local_c);
      if (local_4 < *param_1) {
        *param_1 = local_4;
      }
      if (param_1[1] < local_4) {
        param_1[1] = local_4;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x121);
  }
  return param_1;
}



void FUN_004c46b0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  float local_8;
  float local_4;
  
  iVar2 = *(int *)(in_ECX + 0x24);
  if (iVar2 != 0) {
    if ((*(float *)(iVar2 + 0x18) == 3.4028235e+38) || (*(float *)(iVar2 + 0x1c) == -3.4028235e+38))
    {
      if ((*(byte *)(in_ECX + 0x1c) & 1) == 0) {
        *(undefined4 *)(iVar2 + 0x18) = 0xc5000000;
        *(undefined4 *)(iVar2 + 0x1c) = 0xc5000000;
      }
      else {
        iVar2 = 0;
        do {
          FUN_004c4630(&local_8,iVar2);
          if (local_8 < *(float *)(*(int *)(in_ECX + 0x24) + 0x18)) {
            *(float *)(*(int *)(in_ECX + 0x24) + 0x18) = local_8;
          }
          if (*(float *)(*(int *)(in_ECX + 0x24) + 0x1c) < local_4) {
            *(float *)(*(int *)(in_ECX + 0x24) + 0x1c) = local_4;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 4);
      }
    }
    uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x1c);
    *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x18);
    param_1[1] = uVar1;
    return;
  }
  *param_1 = 0x7f7fffff;
  param_1[1] = 0xff7fffff;
  return;
}



undefined1 FUN_004c4790(undefined4 param_1,undefined4 *param_2)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 auStack_b0 [4];
  undefined4 auStack_a0 [4];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 local_50 [24];
  undefined4 uStack_38;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  char cStack_4;
  char cStack_3;
  
  cVar2 = FUN_004c3030(local_50,param_1,0);
  if (cVar2 == '\0') {
    return 0;
  }
  local_c0 = 0;
  local_bc = 0;
  local_b8 = 0;
  local_b4 = 0;
  local_d0 = 0;
  local_cc = 0;
  local_c8 = 0;
  local_c4 = 0;
  local_e0 = 0;
  local_dc = 0;
  local_d8 = 0;
  local_d4 = 0;
  fVar8 = (float10)FUN_00982bfa();
  fVar1 = (float)fVar8 * 0.0078125;
  fVar8 = (float10)FUN_00982bfa();
  fVar12 = (float)fVar8 * 0.0078125;
  FUN_004c2000(uStack_38,uStack_10,&local_c0);
  FUN_004c2000(uStack_38,uStack_c,&local_d0);
  FUN_004c2000(uStack_38,uStack_8,&local_e0);
  if (cStack_4 != '\0') {
    if (cStack_3 == '\0') {
      uVar3 = FUN_004bfbd0(auStack_80,fVar12,&local_e0);
      fVar12 = 1.0 - fVar12;
      puVar5 = auStack_90;
      puVar6 = auStack_a0;
      uVar4 = FUN_004bfbd0(auStack_b0,fVar1,&local_d0,puVar6,fVar12,puVar5,uVar3);
      puVar9 = auStack_60;
      FUN_004bfbd0(auStack_70,1.0 - fVar1,&local_c0,puVar9,uVar4);
      FUN_004bfb30(puVar9,uVar4);
      FUN_004bfb80(puVar6,fVar12);
      puVar6 = (undefined4 *)FUN_004bfb30(puVar5,uVar3);
      *param_2 = *puVar6;
      param_2[1] = puVar6[1];
      param_2[2] = puVar6[2];
      param_2[3] = puVar6[3];
    }
    else {
      uVar3 = FUN_004bfbd0(auStack_70,1.0 - fVar12,&local_d0);
      puVar5 = auStack_60;
      puVar9 = auStack_80;
      uVar4 = FUN_004bfbd0(auStack_90,fVar1,&local_c0,puVar9,fVar12,puVar5,uVar3);
      puVar6 = auStack_a0;
      FUN_004bfbd0(auStack_b0,1.0 - fVar1,&local_e0,puVar6,uVar4);
      FUN_004bfb30(puVar6,uVar4);
      FUN_004bfb80(puVar9,fVar12);
      puVar6 = (undefined4 *)FUN_004bfb30(puVar5,uVar3);
      *param_2 = *puVar6;
      param_2[1] = puVar6[1];
      param_2[2] = puVar6[2];
      param_2[3] = puVar6[3];
    }
    return 1;
  }
  if (cStack_3 == '\0') {
    uVar3 = FUN_004bfbd0(auStack_b0,fVar12,&local_e0);
    fVar12 = 1.0 - fVar12;
    puVar6 = &local_e0;
    puVar11 = &local_c0;
    uVar4 = FUN_004bfbd0(auStack_a0,fVar1,&local_c0,puVar11,fVar12,puVar6,uVar3);
    puVar7 = &local_d0;
    puVar5 = auStack_90;
  }
  else {
    uVar3 = FUN_004bfbd0(auStack_90,1.0 - fVar12,&local_d0);
    puVar6 = auStack_a0;
    puVar11 = auStack_b0;
    uVar4 = FUN_004bfbd0(&local_d0,fVar1,&local_e0,puVar11,fVar12,puVar6,uVar3);
    puVar7 = &local_c0;
    puVar5 = auStack_80;
  }
  puVar10 = &local_e0;
  FUN_004bfbd0(puVar5,1.0 - fVar1,puVar7,puVar10,uVar4);
  FUN_004bfb30(puVar10,uVar4);
  FUN_004bfb80(puVar11,fVar12);
  puVar6 = (undefined4 *)FUN_004bfb30(puVar6,uVar3);
  *param_2 = *puVar6;
  param_2[1] = puVar6[1];
  param_2[2] = puVar6[2];
  param_2[3] = puVar6[3];
  return 1;
}



undefined4 FUN_004c4b70(int param_1,undefined4 param_2)

{
  FUN_004c2000(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x3c),param_2);
  return 1;
}



void FUN_004c4b90(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a45e78;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a45fcc;
  return;
}



void FUN_004c4be0(byte param_1)

{
  FUN_004c16e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c4c00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4a48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_LAB_00a45e54;
  *in_ECX = &PTR_FUN_00a46064;
  in_ECX[6] = &PTR_FUN_00a4605c;
  local_4 = 0;
  if (DAT_00b35bdc == '\0') {
    FUN_004c1840();
  }
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 1) = 0x36;
  in_ECX[9] = 0;
  _DAT_00b35be0 = _DAT_00b35be0 + 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c4c80(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  float *pfVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int in_ECX;
  uint uVar11;
  int iVar12;
  float fVar13;
  float fStackY_15e0;
  undefined1 auStack_15bc [4];
  float local_15b8;
  float local_15b4;
  float local_15b0;
  char local_15aa;
  char local_15a9;
  int local_15a8;
  int local_15a4;
  undefined4 local_15a0;
  int local_159c;
  undefined4 local_1598;
  int local_1594;
  uint local_1590;
  uint local_158c;
  undefined4 local_1588;
  uint local_1584;
  float local_1580;
  uint local_157c [3];
  float local_1570;
  float local_156c;
  float local_1568;
  undefined4 local_1564;
  undefined4 local_1560;
  undefined4 local_458;
  char local_454 [1096];
  uint local_c;
  
  local_c = DAT_00b30aac ^ (uint)auStack_15bc;
  uVar11 = *(uint *)(in_ECX + 0x1c);
  if ((uVar11 & 8) != 0) {
    return 1;
  }
  local_158c = 0xffffffff;
  local_1590 = 0xffffffff;
  local_15a8 = 0;
  local_1598 = 0;
  if ((uVar11 & 0x400) == 0) {
    if ((uVar11 & 7) == 0) {
      return 1;
    }
    FUN_0046b680(0xffffffff);
    local_15a8 = FUN_004520f0();
    cVar4 = FUN_00451920(in_ECX);
    if ((cVar4 == '\0') || (cVar4 = FUN_004511c0(), cVar4 != '6')) {
      uVar3 = DAT_00b06b18;
      DAT_00b06b18 = 0;
      if (local_15a8 == 0) {
        pcVar6 = "UNKNOWN";
      }
      else {
        pcVar6 = (char *)(local_15a8 + 0x1c);
      }
      uVar9 = *(undefined4 *)(in_ECX + 0xc);
      uVar10 = FUN_004c9aa0(pcVar6);
      uVar10 = FUN_004c9a80(uVar10);
      FUN_004a7a60("Failed to load landscape data for LAND (%08X) in Cell (%i, %i) from file \'%s\'."
                   ,uVar9,uVar10);
      DAT_00b06b18 = uVar3;
      return 0;
    }
    local_1598 = *(undefined4 *)(local_15a8 + 0x25c);
  }
  else {
    if (*(int *)(in_ECX + 0x20) == 0) {
      return 1;
    }
    local_1594 = FUN_004c9cf0();
    if (local_1594 == 0) {
      return 1;
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_004c9aa0();
      }
    }
    else {
      uVar9 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
    }
    if (*(int *)(in_ECX + 0x24) == 0) {
      if (*(int *)(in_ECX + 0x20) == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_004c9a80();
      }
    }
    else {
      uVar10 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
    }
    cVar4 = FUN_004f18b0(uVar10,uVar9,&local_15a8,&local_1598);
    if (cVar4 == '\0') {
      return 1;
    }
  }
  iVar12 = local_15a8;
  local_159c = local_15a8;
  cVar4 = FUN_00451460(local_1598);
  if (cVar4 == '\0') {
    return 0;
  }
  local_15a9 = '\0';
  local_15aa = '\0';
  do {
    iVar5 = FUN_004510b0();
    if (iVar5 < 0x54474857) {
      if (iVar5 == 0x54474856) {
        if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
          FUN_00450c20(&local_458,0x448);
          iVar12 = *(int *)(in_ECX + 0x24);
          local_157c[1] = 0x7f7fffff;
          local_157c[2] = 0xff7fffff;
          *(undefined4 *)(iVar12 + 0x18) = 0x7f7fffff;
          *(undefined4 *)(iVar12 + 0x1c) = 0xff7fffff;
          local_15b8 = local_458;
          iVar12 = 1;
          pfVar8 = (float *)&local_1560;
          do {
            local_15b4 = (float)(int)local_454[iVar12 + -1] + local_15b8;
            *pfVar8 = local_15b4;
            if (iVar12 % 0x21 == 0) {
              local_15b4 = pfVar8[-0x20];
            }
            iVar12 = iVar12 + 1;
            local_15b8 = local_15b4;
            pfVar8 = pfVar8 + 1;
          } while (iVar12 < 0x442);
          uVar11 = 0;
          do {
            uVar7 = uVar11 & 0x80000001;
            if ((int)uVar7 < 0) {
              uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
            }
            local_15b4 = (float)((((int)uVar11 / 2) * 0x21 + uVar7) * 0x10);
            iVar12 = 0;
            local_15b8 = 0.0;
            do {
              local_1594 = (int)ROUND((float)(&local_1560)
                                             [((int)local_15b8 / 0x11) * 0x21 +
                                              (int)local_15b8 % 0x11 + (int)local_15b4]);
              local_1580 = (float)((int)ROUND((float)(&local_1560)
                                                     [((int)local_15b8 / 0x11) * 0x21 +
                                                      (int)local_15b8 % 0x11 + (int)local_15b4]) * 8
                                  );
              *(float *)(iVar12 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4)) =
                   (float)(((int)local_15b8 % 0x11) * 0x80) + (float)(&DAT_00b35ba8)[uVar11];
              local_15b0 = (float)(((int)local_15b8 / 0x11) * 0x80) + (float)(&DAT_00b35b98)[uVar11]
              ;
              *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4) + 4 + iVar12)
                   = local_15b0;
              *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4) + 8 + iVar12)
                   = local_1580;
              iVar5 = *(int *)(in_ECX + 0x24);
              if (*(float *)(iVar5 + 0x18) <= local_1580) {
                if (*(float *)(iVar5 + 0x1c) < local_1580) {
                  *(float *)(iVar5 + 0x1c) = local_1580;
                }
              }
              else {
                *(float *)(iVar5 + 0x18) = local_1580;
              }
              local_15b8 = (float)((int)local_15b8 + 1);
              iVar12 = iVar12 + 0xc;
            } while (iVar12 < 0xd8c);
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 4);
          local_15a9 = '\x01';
          iVar12 = local_159c;
        }
      }
      else if (iVar5 < 0x4c4d4e57) {
        if (iVar5 == 0x4c4d4e56) {
          if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
            FUN_00450c20(&local_1560,0xcc3);
            uVar11 = 0;
            do {
              uVar7 = uVar11 & 0x80000001;
              if ((int)uVar7 < 0) {
                uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
              }
              iVar12 = 0;
              local_15b0 = (float)((((int)uVar11 / 2) * 0x21 + uVar7) * 0x10);
              local_15b8 = 0.0;
              do {
                iVar5 = (((int)local_15b8 / 0x11) * 0x10 + (int)local_15b0 + (int)local_15b8) * 3;
                local_15b4 = (float)(int)*(char *)((int)&local_1560 + iVar5) / 127.0;
                *(float *)(iVar12 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4)) =
                     local_15b4;
                local_15b4 = (float)(int)*(char *)((int)&local_1560 + iVar5 + 1) / 127.0;
                *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4) + 4 + iVar12
                          ) = local_15b4;
                local_15b4 = (float)(int)*(char *)((int)&local_1560 + iVar5 + 2) / 127.0;
                *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4) + 8 + iVar12
                          ) = local_15b4;
                FUN_0043f350();
                local_15b8 = (float)((int)local_15b8 + 1);
                iVar12 = iVar12 + 0xc;
              } while (iVar12 < 0xd8c);
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < 4);
            local_15aa = '\x01';
            iVar12 = local_159c;
          }
        }
        else if (iVar5 == 0x41544144) {
          if ((*(uint *)(in_ECX + 0x1c) & 0x400) != 0) {
            FUN_00450c20(local_157c,4);
            local_157c[0] = local_157c[0] & 7;
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffffff8 | local_157c[0];
          }
        }
        else if (iVar5 == 0x4443504d) {
          uVar9 = *(undefined4 *)(iVar12 + 0x254);
          local_15b8 = (float)FUN_00401f00(uVar9);
          FUN_00450c20(local_15b8,uVar9);
          puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x50);
          if (puVar1 != (undefined4 *)0x0) {
            if ((*(short *)(puVar1 + 1) != 0) &&
               (*(short *)((int)puVar1 + 6) = *(short *)((int)puVar1 + 6) + -1,
               *(short *)((int)puVar1 + 6) == 0)) {
              (**(code **)*puVar1)(1);
            }
            *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x50) = 0;
          }
          FUN_004c2230(local_15b8,uVar9,*(int *)(in_ECX + 0x24) + 0x50);
          iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 0x50);
          if (iVar5 != 0) {
            if (*(short *)(iVar5 + 4) != 0) {
              *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
            }
            *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800;
          }
          FUN_00401f20(local_15b8);
        }
      }
      else if ((iVar5 == 0x524c4356) && ((*(byte *)(in_ECX + 0x1c) & 2) != 0)) {
        FUN_00450c20(&local_1560,0xcc3);
        local_1564 = 0x3f800000;
        local_15b8 = 0.0;
        do {
          uVar11 = (uint)local_15b8 & 0x80000001;
          if ((int)uVar11 < 0) {
            uVar11 = (uVar11 - 1 | 0xfffffffe) + 1;
          }
          iVar12 = 0;
          iVar5 = 0;
          do {
            iVar2 = ((iVar12 / 0x11) * 0x10 + (((int)local_15b8 / 2) * 0x21 + uVar11) * 0x10 +
                    iVar12) * 3;
            local_15b4 = (float)(uint)*(byte *)((int)&local_1560 + iVar2);
            uVar7 = (uint)*(byte *)((int)&local_1560 + iVar2 + 1);
            local_15b4 = (float)uVar7;
            local_15b4 = (float)(uint)*(byte *)((int)&local_1560 + iVar2 + 2);
            local_1570 = (float)*(byte *)((int)&local_1560 + iVar2) / 255.0;
            iVar12 = iVar12 + 1;
            local_156c = (float)uVar7 / 255.0;
            pfVar8 = (float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) +
                                       (int)local_15b8 * 4) + iVar5);
            *pfVar8 = local_1570;
            iVar5 = iVar5 + 0x10;
            pfVar8[1] = local_156c;
            local_1568 = (float)(int)local_15b4 / 255.0;
            pfVar8[2] = local_1568;
            pfVar8[3] = 1.0;
          } while (iVar5 < 0x1210);
          local_15b8 = (float)((int)local_15b8 + 1);
          iVar12 = local_159c;
        } while ((int)local_15b8 < 4);
      }
    }
    else if (iVar5 == 0x54585441) {
      if ((*(byte *)(in_ECX + 0x1c) & 4) != 0) {
        local_15a4 = 0;
        local_15a0 = 0;
        FUN_00450c20(&local_15a4,8);
        if (7 < local_15a0._2_2_) {
          uVar9 = FUN_004bf040(local_15a0._2_2_,local_15a0 & 0xff);
          uVar9 = FUN_004bf020(uVar9);
          FUN_004a7a60("Land (%i, %i) clamping invalid index %i for block %i.",uVar9);
          local_15a0 = CONCAT22(7,(undefined2)local_15a0);
        }
        iVar5 = DAT_00b35be4;
        if (local_15a4 != 0) {
          FUN_0046bb20(&local_15a4,iVar12);
          uVar9 = FUN_0046b250(local_15a4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0);
          iVar5 = FUN_009832e6(uVar9);
          if (iVar5 == 0) {
            uVar9 = FUN_004bf040(local_15a4,local_15a0 & 0xff);
            uVar9 = FUN_004bf020(uVar9);
            FUN_004a7a60("Land (%i, %i) unable to find additional texture ID (%08X) for block %i.",
                         uVar9);
          }
        }
        *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + (local_15a0 & 0xff) * 4) +
                (local_15a0 >> 0x10) * 4) = iVar5;
        if (iVar5 != 0) {
          FUN_004c9530();
        }
        local_158c = local_15a0 & 0xff;
        local_1590 = local_15a0 >> 0x10;
      }
    }
    else if (iVar5 == 0x54585442) {
      if ((*(byte *)(in_ECX + 0x1c) & 4) != 0) {
        local_1588 = 0;
        local_1584 = 0;
        FUN_00450c20(&local_1588,8);
        FUN_0046bb20(&local_1588,iVar12);
        uVar9 = FUN_0046b250(local_1588,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0);
        uVar9 = FUN_009832e6(uVar9);
        *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x20 + (local_1584 & 0xff) * 4) = uVar9;
        if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + (local_1584 & 0xff) * 4) == 0) {
          uVar9 = FUN_004bf040(local_1588,local_1584 & 0xff);
          uVar9 = FUN_004bf020(uVar9);
          FUN_004a7a60("Land (%i, %i) unable to find base texture ID (%08X) for block %i.",uVar9);
        }
        else {
          FUN_004c9530();
        }
      }
    }
    else if ((iVar5 == 0x54585456) && ((*(byte *)(in_ECX + 0x1c) & 4) != 0)) {
      if ((-1 < (int)local_158c) && (-1 < (int)local_1590)) {
        local_15b8 = *(float *)(local_159c + 0x254);
        if (((uint)local_15b8 & 7) == 0) {
          iVar12 = FUN_0040fd70(local_15b8);
          FUN_00450c20(iVar12,local_15b8);
          local_1580 = (float)((uint)local_15b8 >> 3);
          fVar13 = 0.0;
          if (local_1580 != 0.0) {
            do {
              FUN_004bf270(local_158c,*(undefined2 *)(iVar12 + (int)fVar13 * 8),local_1590,
                           *(undefined4 *)(iVar12 + 4 + (int)fVar13 * 8));
              fVar13 = (float)((int)fVar13 + 1);
            } while ((uint)fVar13 < (uint)local_1580);
          }
          FUN_00401e40(iVar12);
          local_1590 = 0xffffffff;
          local_158c = 0xffffffff;
          iVar12 = local_159c;
          goto LAB_004c55b5;
        }
        uVar9 = FUN_004bf040(local_159c + 0x1c);
        uVar9 = FUN_004bf020(uVar9);
        FUN_004a7a60("Land (%i, %i) found unrecognized vertex texture data in file %s.",uVar9);
      }
      local_1590 = 0xffffffff;
      local_158c = 0xffffffff;
      iVar12 = local_159c;
    }
LAB_004c55b5:
    cVar4 = FUN_0044fea0();
    if (cVar4 == '\0') {
      if ((local_15a9 != '\0') && (local_15aa == '\0')) {
        if (*(int *)(in_ECX + 0x24) == 0) {
          if (*(int *)(in_ECX + 0x20) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_004c9aa0();
          }
        }
        else {
          uVar9 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
        }
        if (*(int *)(in_ECX + 0x24) == 0) {
          if (*(int *)(in_ECX + 0x20) == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = FUN_004c9a80();
          }
        }
        else {
          uVar10 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
        }
        FUN_004a7a60("Land for cell (%i, %i) in file \'%s\' does not contain Normal Data.",uVar10,
                     uVar9,iVar12 + 0x1c);
      }
      return 1;
    }
  } while( true );
}



void FUN_004c5640(void)

{
  ushort *puVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  LONG LVar9;
  int in_ECX;
  byte local_18 [4];
  undefined4 *local_14;
  int local_10 [4];
  
  if ((*(int *)(in_ECX + 0x20) != 0) && (iVar6 = FUN_004ca790(), iVar6 != 0)) {
    if (**(int **)(in_ECX + 0x24) == 0) {
      uVar7 = FUN_00401f00(0x10);
      **(undefined4 **)(in_ECX + 0x24) = uVar7;
      local_18[0] = 0;
      local_18[1] = 0;
      local_18[2] = 0;
      local_18[3] = 0;
      local_10[0] = 0;
      local_10[1] = 0;
      local_10[2] = 0;
      local_10[3] = 0;
      iVar6 = 0;
      do {
        uVar7 = 0;
        if ((*(int *)(in_ECX + 0x20) != 0) && (iVar6 < 4)) {
          uVar7 = FUN_00441800(iVar6,0);
        }
        *(undefined4 *)(**(int **)(in_ECX + 0x24) + iVar6 * 4) = uVar7;
        if (*(int *)(**(int **)(in_ECX + 0x24) + iVar6 * 4) != 0) {
          iVar8 = *(int *)(**(int **)(in_ECX + 0x24) + iVar6 * 4);
          bVar2 = *(byte *)(iVar8 + 0x18);
          puVar1 = (ushort *)(iVar8 + 0x18);
          *puVar1 = *puVar1 | 1;
          local_18[iVar6] = bVar2 & 1;
          FUN_00405680(DAT_00b35bec);
          iVar8 = FUN_004bff00(iVar6);
          piVar3 = *(int **)(in_ECX + 0x24);
          local_10[iVar6] = iVar8;
          (**(code **)(**(int **)(*piVar3 + iVar6 * 4) + 0x90))(&local_14,0,iVar8);
          puVar4 = local_14;
          if (((local_14 != (undefined4 *)0x0) &&
              (LVar9 = InterlockedDecrement(local_14 + 1), LVar9 == 0)) &&
             (puVar4 != (undefined4 *)0x0)) {
            (**(code **)*puVar4)(1);
          }
          FUN_0072a0f0(*(undefined2 *)(*(int *)(iVar8 + 0xb4) + 8),
                       *(undefined4 *)(*(int *)(iVar8 + 0xb4) + 0x1c));
          puVar1 = (ushort *)(*(int *)(iVar8 + 0xb4) + 0x2e);
          *puVar1 = *puVar1 | 0xf;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
      FUN_0041f950();
      FUN_00533400();
      FUN_005334f0(local_10,4);
      FUN_004c0640();
      FUN_004bf5c0();
      FUN_004c2630();
      iVar6 = 0;
      do {
        if (local_10[iVar6] != 0) {
          iVar8 = *(int *)(local_10[iVar6] + 0xb4);
          *(ushort *)(iVar8 + 0x2e) = *(ushort *)(iVar8 + 0x2e) & 0xfff | 0x4000;
          *(undefined1 *)(iVar8 + 0x31) = 0x1f;
          *(undefined1 *)(iVar8 + 0x30) = 0x17;
          piVar3 = *(int **)(local_10[iVar6] + 0xbc);
          if (((piVar3 != (int *)0x0) && (iVar8 = (**(code **)(*piVar3 + 0x1c))(), 0 < iVar8)) &&
             (iVar8 = (**(code **)(*piVar3 + 0x1c))(), iVar8 < 6)) {
            (**(code **)(*DAT_00b3f928 + 0xb0))(local_10[iVar6],0,0,piVar3[0x22]);
            FUN_00769030();
          }
        }
        if (*(int *)(**(int **)(in_ECX + 0x24) + iVar6 * 4) != 0) {
          iVar8 = *(int *)(**(int **)(in_ECX + 0x24) + iVar6 * 4);
          if (local_18[iVar6] == 0) {
            puVar1 = (ushort *)(iVar8 + 0x18);
            *puVar1 = *puVar1 & 0xfffe;
          }
          else {
            puVar1 = (ushort *)(iVar8 + 0x18);
            *puVar1 = *puVar1 | 1;
          }
          FUN_00707370(0,0);
          FUN_00707980();
          FUN_00707610();
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < 4);
    }
    if (((**(int **)(in_ECX + 0x24) != 0) && ((*(uint *)(in_ECX + 0x1c) & 0x400) != 0)) &&
       ((iVar6 = *(int *)(in_ECX + 0x20), iVar6 != 0 &&
        (((*(int *)(iVar6 + 0x4c) == 0 && (*(int *)(iVar6 + 0x48) == 0)) ||
         (cVar5 = FUN_004c9890(), cVar5 != '\0')))))) {
      iVar6 = 0;
      do {
        puVar1 = (ushort *)(*(int *)(iVar6 + **(int **)(in_ECX + 0x24)) + 0x18);
        *puVar1 = *puVar1 | 1;
        iVar6 = iVar6 + 4;
      } while (iVar6 < 0x10);
    }
  }
  return;
}



void FUN_004c58d0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  if (in_ECX[9] != 0) {
    local_4 = in_ECX;
    FUN_00977c50(3);
    if (*(int *)in_ECX[9] != 0) {
      if (in_ECX[8] != 0) {
        cVar3 = FUN_004c97f0();
        iVar4 = DAT_00b35c24;
        if (cVar3 != '\0') {
          iVar4 = FUN_00424180();
        }
        if (((iVar4 != 0) && (*(int *)(in_ECX[9] + 0x94) != 0)) &&
           (piVar1 = *(int **)(in_ECX[9] + 0x94), piVar1 != (int *)0x0)) {
          (**(code **)(*piVar1 + 0x60))();
        }
      }
      iVar4 = in_ECX[9];
      puVar2 = *(undefined4 **)(iVar4 + 0x94);
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar4 + 0x94) = 0;
      }
      iVar4 = 0;
      do {
        if (*(int *)(iVar4 + *(int *)in_ECX[9]) != 0) {
          *(undefined4 *)(iVar4 + ((int *)in_ECX[9])[1]) = 0;
          *(undefined4 *)(iVar4 + *(int *)(in_ECX[9] + 8)) = 0;
          *(undefined4 *)(iVar4 + *(int *)(in_ECX[9] + 0xc)) = 0;
          (**(code **)(**(int **)(iVar4 + *(int *)in_ECX[9]) + 0x8c))(&local_4,0);
          puVar2 = local_4;
          if (((local_4 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0)) &&
             (puVar2 != (undefined4 *)0x0)) {
            (**(code **)*puVar2)(1);
          }
        }
        *(undefined4 *)(iVar4 + *(int *)in_ECX[9]) = 0;
        iVar4 = iVar4 + 4;
      } while (iVar4 < 0x10);
      FUN_00401f20(*(undefined4 *)in_ECX[9]);
      *(undefined4 *)in_ECX[9] = 0;
    }
    iVar4 = *(int *)(in_ECX[9] + 0x14);
    if (iVar4 != 0) {
      piVar1 = *(int **)(iVar4 + 0x1c);
      if ((((piVar1 != (int *)0x0) &&
           ((**(code **)(*piVar1 + 0x88))(&local_4,*(undefined4 *)(in_ECX[9] + 0x14)),
           local_4 != (undefined4 *)0x0)) && (LVar5 = InterlockedDecrement(local_4 + 1), LVar5 == 0)
          ) && (local_4 != (undefined4 *)0x0)) {
        (**(code **)*local_4)(1);
      }
      iVar4 = in_ECX[9];
      puVar2 = *(undefined4 **)(iVar4 + 0x14);
      if (puVar2 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar2 + 1);
        if ((LVar5 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 *)(iVar4 + 0x14) = 0;
      }
    }
    FUN_004bfe80();
    FUN_00977c50(2);
  }
  return;
}



undefined4 FUN_004c5aa0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 local_50 [24];
  undefined4 local_38;
  undefined4 local_14;
  
  cVar1 = FUN_004c3030(local_50,param_1,1);
  if (cVar1 != '\0') {
    uVar2 = FUN_004c0190(local_38,local_14);
    return uVar2;
  }
  return 0;
}



undefined4 FUN_004c5af0(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  undefined1 local_50 [24];
  int local_38;
  
  cVar3 = FUN_004c3030(local_50,param_1,0);
  if ((((cVar3 != '\0') && (piVar1 = *(int **)(in_ECX + 0x24), piVar1 != (int *)0x0)) &&
      (*piVar1 != 0)) &&
     ((*(int *)(*piVar1 + local_38 * 4) != 0 &&
      (iVar2 = *(int *)(*piVar1 + local_38 * 4), *(short *)(iVar2 + 0xb6) != 0)))) {
    return **(undefined4 **)(iVar2 + 0xb0);
  }
  return 0;
}



void FUN_004c5b50(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 local_50 [80];
  
  cVar1 = FUN_004c3030(local_50,param_1,0);
  if (cVar1 == '\0') {
    *param_2 = 0xc5000000;
    return;
  }
  FUN_004c44c0(local_50,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c5ba0(char param_1)

{
  float fVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  LONG LVar7;
  float *pfVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  uint uVar11;
  float fVar12;
  uint uVar13;
  int *unaff_FS_OFFSET;
  bool bVar14;
  float10 fVar15;
  undefined4 *puStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 *puStack_cc;
  undefined4 *local_c8;
  int iStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b8;
  float fStack_b4;
  int *local_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  undefined4 *puStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  float fStack_64;
  undefined1 auStack_5c [80];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b4aa8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff14;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar13 = 0;
  if (((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(*(int *)(in_ECX + 0x24) + 4) != 0)) &&
     (local_b0 = (int *)FUN_004ca790(uVar6), local_b0 != (int *)0x0)) {
    iVar10 = *(int *)(*(int *)(in_ECX + 0x24) + 0x14);
    if (iVar10 != 0) {
      (**(code **)(*local_b0 + 0x88))(&local_c8,iVar10);
      if (((local_c8 != (undefined4 *)0x0) &&
          (LVar7 = InterlockedDecrement(local_c8 + 1), LVar7 == 0)) &&
         (local_c8 != (undefined4 *)0x0)) {
        (**(code **)*local_c8)(1);
      }
      iVar10 = *(int *)(in_ECX + 0x24);
      puVar9 = *(undefined4 **)(iVar10 + 0x14);
      if (puVar9 != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(puVar9 + 1);
        if ((LVar7 == 0) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)(1);
        }
        *(undefined4 *)(iVar10 + 0x14) = 0;
      }
    }
    if (param_1 != '\0') {
      local_c8 = (undefined4 *)FUN_00401f00(0x600);
      puStack_cc = (undefined4 *)FUN_00401f00(0x800);
      uStack_4 = 0;
      puStack_dc = puStack_cc;
      if (puStack_cc == (undefined4 *)0x0) {
        puStack_cc = (undefined4 *)0x0;
      }
      else {
        _vector_constructor_iterator_(puStack_cc,0x10,0x80,FUN_0047ea50);
      }
      uStack_4 = 0xffffffff;
      iStack_c4 = FUN_00401f00(0x80);
      fVar15 = (float10)FUN_004bf060();
      fStack_b4 = (float)fVar15;
      fVar15 = (float10)FUN_004bf0a0();
      fVar1 = (float)fVar15;
      uStack_bc = 0;
      fStack_ac = fStack_b4;
      uStack_a4 = 0;
      fVar3 = fStack_b4;
      fStack_c0 = fVar1;
      fStack_a8 = fVar1;
      do {
        uVar6 = uStack_bc;
        fStack_d8 = 0.0;
        uVar11 = uVar13;
        do {
          fVar4 = fStack_d8;
          if (uVar6 == 0) {
LAB_004c5d3b:
            uVar13 = uVar6;
            if (fStack_d8 != 0.0) {
              if (uVar6 == 0x20) {
                uVar13 = (int)fStack_d8 + 0x20;
              }
              else if (fStack_d8 == 4.48416e-44) {
                uVar13 = 0x60 - uVar6;
              }
              else {
                uVar13 = uVar11;
                if (uVar6 == 0) {
                  uVar13 = 0x80 - (int)fStack_d8;
                }
              }
            }
LAB_004c5d66:
            uVar11 = uVar13 & 0x80000001;
            bVar14 = uVar11 == 0;
            if ((int)uVar11 < 0) {
              bVar14 = (uVar11 - 1 | 0xfffffffe) == 0xffffffff;
            }
            if (bVar14) {
              pfVar8 = (float *)(puStack_cc + uVar13 * 4);
              fStack_a0 = (float)_DAT_00b08b8c / 255.0;
              fStack_d0 = (float)_DAT_00b08b94 / 255.0;
              fVar12 = (float)_DAT_00b08b9c / 255.0;
              *pfVar8 = fStack_a0;
              pfVar8[1] = fStack_d0;
              uStack_94 = 0x3f800000;
              fStack_9c = fStack_d0;
              fStack_98 = fVar12;
            }
            else {
              pfVar8 = (float *)(puStack_cc + uVar13 * 4);
              fStack_78 = (float)_DAT_00b08b74 / 255.0;
              fStack_d0 = (float)_DAT_00b08b7c / 255.0;
              fVar12 = (float)_DAT_00b08b84 / 255.0;
              *pfVar8 = fStack_78;
              pfVar8[1] = fStack_d0;
              uStack_6c = 0x3f800000;
              fStack_74 = fStack_d0;
              fStack_70 = fVar12;
            }
            pfVar8[2] = fVar12;
            pfVar8[3] = 1.0;
            fStack_68 = (float)(int)uStack_bc * 128.0;
            fStack_64 = (float)(int)fStack_d8 * 128.0;
            *(undefined1 *)(iStack_c4 + uVar13) = 1;
            fStack_d4 = fStack_68 + fVar3;
            fStack_d8 = fVar1 + fStack_64;
            puStack_dc = (undefined4 *)0x0;
            fStack_88 = 0.0;
            fStack_90 = fStack_d4;
            fStack_8c = fStack_d8;
            cVar5 = FUN_004c3030(auStack_5c,&fStack_90,0);
            if (cVar5 == '\0') {
              fStack_b8 = -2048.0;
            }
            else {
              FUN_004c44c0(auStack_5c,&fStack_b8);
            }
            fStack_88 = fStack_b8 + 5.0;
            pfVar8 = (float *)(local_c8 + uVar13 * 3);
            puStack_dc = (undefined4 *)(fStack_d4 - fStack_b4);
            fStack_d0 = fStack_d8 - fStack_c0;
            fStack_7c = fStack_88 - 0.0;
            *pfVar8 = (float)puStack_dc;
            pfVar8[1] = fStack_d0;
            pfVar8[2] = fStack_7c;
            fVar3 = fStack_b4;
            fVar1 = fStack_c0;
            puStack_84 = puStack_dc;
            fStack_80 = fStack_d0;
          }
          else {
            uVar13 = uVar6;
            if (fStack_d8 == 0.0) goto LAB_004c5d66;
            if ((uVar6 == 0x20) || (uVar13 = uVar11, fStack_d8 == 4.48416e-44)) goto LAB_004c5d3b;
          }
          fStack_d8 = (float)((int)fVar4 + 1);
          uVar11 = uVar13;
        } while ((int)fStack_d8 < 0x21);
        uStack_bc = uVar6 + 1;
      } while ((int)uStack_bc < 0x21);
      puStack_dc = (undefined4 *)FUN_00401f00(0xc0);
      uStack_4 = 1;
      if (puStack_dc == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)FUN_007177e0(0x80,local_c8,puStack_cc,0,0,0,iStack_c4);
      }
      iVar10 = *(int *)(in_ECX + 0x24);
      puVar2 = *(undefined4 **)(iVar10 + 0x14);
      uStack_4 = 0xffffffff;
      if (puVar2 != puVar9) {
        if (((puVar2 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)
            ) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        *(undefined4 **)(iVar10 + 0x14) = puVar9;
        if (puVar9 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar9 + 1);
        }
      }
      iVar10 = *(int *)(*(int *)(in_ECX + 0x24) + 0x14);
      *(float *)(iVar10 + 0x54) = fStack_ac;
      *(float *)(iVar10 + 0x58) = fStack_a8;
      *(undefined4 *)(iVar10 + 0x5c) = uStack_a4;
      puStack_dc = (undefined4 *)FUN_00401f00(0x30);
      uStack_4 = 2;
      if (puStack_dc == (undefined4 *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = FUN_007043b0();
      }
      uStack_4 = 0xffffffff;
      puStack_dc = (undefined4 *)0x0;
      if ((undefined4 *)**(int **)(iVar10 + 0x20) != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)**(int **)(iVar10 + 0x20))(1);
        FUN_0042bb90(0,&puStack_dc);
      }
      FUN_00703dc0(0,0);
      FUN_00405680(iVar10);
      puVar9 = (undefined4 *)FUN_00401f00(0x1c);
      uStack_4 = 3;
      puStack_dc = puVar9;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar9 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar9 + 6) = 8;
      }
      *(ushort *)(puVar9 + 6) = *(ushort *)(puVar9 + 6) & 0xffd7 | 0x10;
      uStack_4 = 0xffffffff;
      FUN_00405680(puVar9);
      (**(code **)(*local_b0 + 0x84))(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x14),1);
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,0);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c6170(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4aff;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[5] = 0;
  local_4 = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x15,0x10,4,FUN_004c4b90,FUN_004c16e0);
  in_ECX[0x25] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  puVar1 = (undefined4 *)in_ECX[5];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[5] = 0;
  }
  in_ECX[6] = 0x7f7fffff;
  in_ECX[7] = 0xff7fffff;
  in_ECX[8] = DAT_00b35be4;
  in_ECX[9] = DAT_00b35be4;
  in_ECX[10] = DAT_00b35be4;
  in_ECX[0xb] = DAT_00b35be4;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_004c6280(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  uint uVar5;
  int in_ECX;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffffff7;
  FUN_004c58d0();
  iVar7 = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    local_10 = 0;
    local_8 = 0;
    do {
      iVar8 = local_8;
      if (*(int *)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7) != 0) {
        FUN_00401f20(**(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7));
        FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7));
        *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7) = 0;
      }
      if (*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar7) != 0) {
        FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar7));
        *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar7) = 0;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 4);
      if (iVar1 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar1 + iVar7));
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar7) = 0;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 8);
      if (iVar1 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar1 + iVar7));
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar7) = 0;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0xc);
      if (iVar1 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar1 + iVar7));
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + iVar7) = 0;
      }
      iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 0x10);
      if (iVar1 != 0) {
        FUN_00401f20(*(undefined4 *)(iVar1 + iVar7));
        *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + iVar7) = 0;
      }
      iVar1 = *(int *)(in_ECX + 0x24);
      if (*(int *)(iVar8 + 0x60 + iVar1) != 0) {
        uVar2 = *(uint *)(iVar8 + 0x58 + iVar1);
        uVar5 = 0;
        if (uVar2 != 0) {
          piVar3 = *(int **)(iVar8 + 0x5c + iVar1);
          piVar6 = piVar3;
          do {
            if (*piVar6 != 0) {
              local_c = piVar3[uVar5];
              goto joined_r0x004c63cc;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar5 < uVar2);
        }
        local_c = 0;
joined_r0x004c63cc:
        while (local_c != 0) {
          FUN_00452600(&local_c,local_4,&local_10);
          iVar1 = local_10;
          if (local_10 != 0) {
            iVar8 = 0;
            do {
              if (*(int *)(iVar1 + iVar8 * 4) != 0) {
                **(undefined4 **)(iVar1 + iVar8 * 4) = 0;
                FUN_00401f20(*(undefined4 *)(iVar1 + iVar8 * 4));
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < 0x10);
            FUN_00401f20(iVar1);
            iVar8 = local_8;
          }
        }
      }
      FUN_007c2a40();
      iVar7 = iVar7 + 4;
      local_8 = iVar8 + 0x10;
    } while (iVar7 < 0x10);
    FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x10));
    FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 4));
    FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 0xc));
    FUN_00401f20(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 8));
    puVar4 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x50);
    if (puVar4 != (undefined4 *)0x0) {
      if ((*(short *)(puVar4 + 1) != 0) &&
         (*(short *)((int)puVar4 + 6) = *(short *)((int)puVar4 + 6) + -1,
         *(short *)((int)puVar4 + 6) == 0)) {
        (**(code **)*puVar4)(1);
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x50) = 0;
    }
  }
  iVar7 = *(int *)(in_ECX + 0x24);
  if (iVar7 != 0) {
    FUN_004c2180();
    FUN_00401f20(iVar7);
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return 1;
}



uint FUN_004c64e0(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  void *_Dst;
  int in_ECX;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 0x24);
  iVar7 = 0;
  if ((uVar1 != 0) && (*(int *)(uVar1 + 4) != 0)) {
    *unaff_FS_OFFSET = local_c;
    return uVar1 & 0xffffff00;
  }
  iVar3 = FUN_00401f00(0xa0,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_004c6170();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x24) = uVar4;
  uVar4 = FUN_004c9a80();
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98) = uVar4;
  uVar4 = FUN_004c9aa0();
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c) = uVar4;
  uVar4 = FUN_00401f00(0x10,uVar2);
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 4) = uVar4;
  uVar4 = FUN_00401f00(0x10);
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0xc) = uVar4;
  uVar4 = FUN_00401f00(0x10);
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 8) = uVar4;
  uVar4 = FUN_00401f00(0x10);
  *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x10) = uVar4;
  do {
    uVar4 = FUN_00401f00(0xd8c);
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar7) = uVar4;
    puVar5 = *(undefined4 **)((int)&DAT_00b35bb8 + iVar7);
    puVar8 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar7);
    for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    iVar3 = FUN_00401f00(0x1210);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar6 = 0x120;
      puVar5 = (undefined4 *)(iVar3 + 8);
      do {
        puVar5[-2] = 0;
        iVar6 = iVar6 + -1;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 4;
      } while (-1 < iVar6);
    }
    *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + iVar7) = iVar3;
    _memcpy(*(void **)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + iVar7),DAT_00b35bcc,0x1210);
    uVar4 = FUN_00401f00(0xd8c);
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar7) = uVar4;
    puVar5 = DAT_00b35bd0;
    puVar8 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar7);
    for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    uVar4 = FUN_00401f00(0x121);
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + iVar7) = uVar4;
    puVar5 = DAT_00b35bd8;
    puVar8 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + iVar7);
    for (iVar3 = 0x48; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar8 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar8 = puVar8 + 1;
    }
    *(undefined1 *)puVar8 = *(undefined1 *)puVar5;
    uVar4 = FUN_00401f00(0x484);
    *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7) = uVar4;
    _Dst = (void *)FUN_00401f00(0x2420);
    _memset(_Dst,0,0x2420);
    iVar3 = 0;
    do {
      *(void **)(iVar3 + *(int *)(*(int *)(in_ECX + 0x24) + 0x40 + iVar7)) = _Dst;
      iVar3 = iVar3 + 4;
      _Dst = (void *)((int)_Dst + 0x20);
    } while (iVar3 < 0x484);
    uVar4 = FUN_00401f00(0x20);
    *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x30 + iVar7) = uVar4;
    puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x30 + iVar7);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    iVar7 = iVar7 + 4;
    puVar5[6] = 0;
    puVar5[7] = 0;
  } while (iVar7 < 0x10);
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x004c6c91) */

void FUN_004c6730(char param_1)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int in_ECX;
  int *unaff_FS_OFFSET;
  uint local_84;
  int local_7c;
  undefined4 *puStack_70;
  undefined4 *puStack_6c;
  undefined4 *puStack_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  undefined4 *puStack_5c;
  undefined4 *puStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b4d85;
  local_c = *unaff_FS_OFFSET;
  uVar13 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_84 = 0;
  bVar3 = false;
  if (**(int **)(in_ECX + 0x24) == 0) {
    FUN_004c64e0(uVar13);
    FUN_004c5640();
  }
  else {
    local_7c = 0;
    do {
      if ((*(int *)(in_ECX + 0x20) != 0) && (local_7c < 4)) {
        iVar14 = FUN_004ca790();
        if ((iVar14 == 0) ||
           ((((uint)*(ushort *)(iVar14 + 0xb6) <= local_7c + 2U ||
             (iVar14 = *(int *)(*(int *)(iVar14 + 0xb0) + (local_7c + 2U) * 4), iVar14 == 0)) ||
            (*(short *)(iVar14 + 0xb6) == 0)))) {
          iVar14 = 0;
        }
        else {
          iVar14 = **(int **)(iVar14 + 0xb0);
        }
        if (iVar14 != 0) {
          if (((param_1 != '\0') && (*(short *)(iVar14 + 0xb6) != 0)) &&
             (((int *)**(int **)(iVar14 + 0xb0) != (int *)0x0 &&
              (iVar14 = (**(code **)(*(int *)**(int **)(iVar14 + 0xb0) + 0xc))(), iVar14 != 0)))) {
            FUN_0072a0f0(*(undefined2 *)(*(int *)(iVar14 + 0xb4) + 8),
                         *(undefined4 *)(*(int *)(iVar14 + 0xb4) + 0x1c));
            puVar1 = (ushort *)(*(int *)(iVar14 + 0xb4) + 0x2e);
            *puVar1 = *puVar1 | 0xf;
            piVar15 = (int *)FUN_00707530(4);
            if (((piVar15 == (int *)0x0) || (iVar14 = (**(code **)(*piVar15 + 0x54))(), iVar14 < 5))
               || (iVar14 = (**(code **)(*piVar15 + 0x54))(), 10 < iVar14)) {
              bVar2 = 0;
            }
            else {
              bVar2 = 1;
            }
            if ((-(uint)bVar2 & (uint)piVar15) != 0) {
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x1c) == 0) {
                uStack_34 = 0;
                puStack_70 = &uStack_34;
                local_84 = local_84 | 2;
              }
              else {
                puStack_70 = (undefined4 *)FUN_004c1670(auStack_10);
                bVar3 = true;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x18) == 0) {
                uStack_38 = 0;
                puStack_6c = &uStack_38;
                local_84 = local_84 | 8;
              }
              else {
                puStack_6c = (undefined4 *)FUN_004c1670(auStack_14);
                local_84 = local_84 | 4;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x14) == 0) {
                uStack_3c = 0;
                puStack_68 = &uStack_3c;
                local_84 = local_84 | 0x20;
              }
              else {
                puStack_68 = (undefined4 *)FUN_004c1670(auStack_18);
                local_84 = local_84 | 0x10;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x10) == 0) {
                uStack_40 = 0;
                puVar16 = &uStack_40;
              }
              else {
                puVar16 = (undefined4 *)FUN_004c1670(auStack_1c);
                local_84 = local_84 | 0x40;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0xc) == 0) {
                uStack_44 = 0;
                puStack_64 = &uStack_44;
                local_84 = local_84 | 0x200;
              }
              else {
                puStack_64 = (undefined4 *)FUN_004c1670(auStack_20);
                local_84 = local_84 | 0x100;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 8) == 0) {
                uStack_48 = 0;
                puVar17 = &uStack_48;
                local_84 = local_84 | 0x800;
              }
              else {
                puVar17 = (undefined4 *)FUN_004c1670(auStack_24);
                local_84 = local_84 | 0x400;
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 4) == 0) {
                uStack_4c = 0;
                puStack_60 = &uStack_4c;
                local_84 = local_84 | 0x2000;
              }
              else {
                puStack_60 = (undefined4 *)FUN_004c1670(auStack_28);
                local_84 = local_84 | 0x1000;
              }
              if (**(int **)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) == 0) {
                uStack_50 = 0;
                puStack_5c = &uStack_50;
                local_84 = local_84 | 0x8000;
              }
              else {
                puStack_5c = (undefined4 *)FUN_004c1670(auStack_2c);
                local_84 = local_84 | 0x4000;
              }
              if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + local_7c * 4) == 0) {
                uStack_54 = 0;
                puStack_58 = &uStack_54;
                uStack_4 = 0x11;
                local_84 = local_84 | 0x20000;
              }
              else {
                puStack_58 = (undefined4 *)FUN_004c1670(auStack_30);
                uStack_4 = 0x10;
                local_84 = local_84 | 0x10000;
              }
              FUN_007d8ba0(*puStack_58,*puStack_5c,*puStack_60,*puVar17,*puStack_64,*puVar16,
                           *puStack_68,*puStack_6c,*puStack_70);
              uStack_4 = 0x10;
              if ((local_84 & 0x20000) != 0) {
                local_84 = local_84 & 0xfffdffff;
                FUN_007016a0();
              }
              uStack_4 = 0xf;
              if ((local_84 & 0x10000) != 0) {
                local_84 = local_84 & 0xfffeffff;
                FUN_007016a0();
              }
              uStack_4 = 0xe;
              if ((local_84 & 0x8000) != 0) {
                local_84 = local_84 & 0xffff7fff;
                FUN_007016a0();
              }
              uStack_4 = 0xd;
              if ((local_84 & 0x4000) != 0) {
                local_84 = local_84 & 0xffffbfff;
                FUN_007016a0();
              }
              uStack_4 = 0xc;
              if ((local_84 & 0x2000) != 0) {
                local_84 = local_84 & 0xffffdfff;
                FUN_007016a0();
              }
              uStack_4 = 0xb;
              if ((local_84 & 0x1000) != 0) {
                local_84 = local_84 & 0xffffefff;
                FUN_007016a0();
              }
              uStack_4 = 10;
              if ((local_84 & 0x800) != 0) {
                local_84 = local_84 & 0xfffff7ff;
                FUN_007016a0();
              }
              uStack_4 = 9;
              if ((local_84 & 0x400) != 0) {
                local_84 = local_84 & 0xfffffbff;
                FUN_007016a0();
              }
              uStack_4 = 8;
              if ((local_84 & 0x200) != 0) {
                local_84 = local_84 & 0xfffffdff;
                FUN_007016a0();
              }
              uStack_4 = 7;
              if ((local_84 & 0x100) != 0) {
                local_84 = local_84 & 0xfffffeff;
                FUN_007016a0();
              }
              uStack_4 = 5;
              if ((local_84 & 0x40) != 0) {
                local_84 = local_84 & 0xffffffbf;
                FUN_007016a0();
              }
              uStack_4 = 4;
              if ((local_84 & 0x20) != 0) {
                local_84 = local_84 & 0xffffffdf;
                FUN_007016a0();
              }
              uStack_4 = 3;
              if ((local_84 & 0x10) != 0) {
                local_84 = local_84 & 0xffffffef;
                FUN_007016a0();
              }
              uStack_4 = 2;
              if ((local_84 & 8) != 0) {
                local_84 = local_84 & 0xfffffff7;
                FUN_007016a0();
              }
              uStack_4 = 1;
              if ((local_84 & 4) != 0) {
                local_84 = local_84 & 0xfffffffb;
                FUN_007016a0();
              }
              uVar9 = 0;
              uStack_4 = 0;
              if ((local_84 & 2) != 0) {
                local_84 = local_84 & 0xfffffffd;
                FUN_007016a0();
              }
              uStack_4 = 0xffffffff;
              if (bVar3) {
                bVar3 = false;
                FUN_007016a0();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x1c) == 0) {
                uVar4 = 0;
              }
              else {
                uVar4 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x18) == 0) {
                uVar5 = 0;
              }
              else {
                uVar5 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x14) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0x10) == 0) {
                uVar7 = 0;
              }
              else {
                uVar7 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 0xc) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 8) != 0) {
                uVar9 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) + 4) == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = FUN_004c8d20();
              }
              if (**(int **)(*(int *)(in_ECX + 0x24) + 0x30 + local_7c * 4) == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_004c8d20();
              }
              if (*(int *)(*(int *)(in_ECX + 0x24) + 0x20 + local_7c * 4) == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = FUN_004c8d20();
              }
              FUN_007d7400(uVar12,uVar11,uVar10,uVar9,uVar8,uVar7,uVar6,uVar5,uVar4,0);
              FUN_007e24c0();
            }
          }
          FUN_00707370(0,0);
          if (param_1 != '\0') {
            FUN_00707980();
            FUN_00707610();
          }
        }
      }
      local_7c = local_7c + 1;
    } while (local_7c < 4);
    if (param_1 != '\0') {
      FUN_004c5ba0(*(undefined1 *)(DAT_00b333a0 + 0x53));
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6f70(void)

{
  uint uVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b4db8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a46064;
  in_ECX[6] = &PTR_FUN_00a4605c;
  local_4 = 0;
  FUN_004c6280(uVar1);
  _DAT_00b35be0 = _DAT_00b35be0 + -1;
  if (_DAT_00b35be0 == 0) {
    FUN_00401f20(DAT_00b35bc8);
    FUN_00401f20(DAT_00b35bcc);
    FUN_00401f20(DAT_00b35bd0);
    FUN_00401f20(DAT_00b35bd4);
    FUN_00401f20(DAT_00b35bd8);
    puVar3 = &DAT_00b35bb8;
    do {
      FUN_00401f20(*puVar3);
      puVar3 = puVar3 + 1;
    } while ((int)puVar3 < 0xb35bc8);
    DAT_00b35bdc = 0;
    if (DAT_00b35be4 != (int *)0x0) {
      (**(code **)(*DAT_00b35be4 + 0x10))(1);
    }
    puVar3 = DAT_00b35bec;
    DAT_00b35be4 = (int *)0x0;
    if (DAT_00b35bec != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(DAT_00b35bec + 1);
      if ((LVar2 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      DAT_00b35bec = (undefined4 *)0x0;
    }
  }
  thunk_FUN_0046b170();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c7090(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  float *pfVar7;
  undefined4 uVar8;
  int in_ECX;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  float afStackY_15d0 [5];
  undefined1 auStack_1598 [3];
  char local_1595;
  float local_1594;
  float local_1590;
  int local_158c;
  undefined4 local_1588;
  int local_1584;
  uint local_1580;
  uint local_157c;
  undefined4 local_1578;
  uint local_1574;
  int local_1570;
  float local_156c;
  float local_1568;
  float local_1564;
  float local_1560;
  undefined4 local_155c;
  undefined4 local_1558;
  undefined4 local_1554;
  undefined4 local_1550;
  undefined4 local_44c;
  char local_448 [1092];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_1598;
  local_1584 = param_1;
  cVar4 = FUN_004511c0();
  if (cVar4 == '6') {
    iVar5 = *(int *)(in_ECX + 0xc);
    FUN_00451210(in_ECX);
    if ((iVar5 != 0) && (iVar5 != *(int *)(in_ECX + 0xc))) {
      FUN_004a7a60("Potentially duplicate Land (%08x) encountered in file %s.",
                   *(int *)(in_ECX + 0xc),param_1 + 0x1c);
    }
    local_1580 = 0xffffffff;
    local_157c = 0xffffffff;
    local_1595 = '\0';
    cVar4 = FUN_0044faf0();
    if (((cVar4 != '\0') || (cVar4 = FUN_004c9ff0(), cVar4 != '\0')) &&
       ((*(uint *)(in_ECX + 0x1c) & 0x400) == 0)) {
      local_1595 = '\x01';
      FUN_004c64e0();
    }
    do {
      iVar5 = FUN_004510b0();
      if (iVar5 < 0x54474857) {
        if (iVar5 == 0x54474856) {
          if ((local_1595 != '\0') && ((*(byte *)(in_ECX + 0x1c) & 1) != 0)) {
            FUN_00450c20(&local_44c,0);
            iVar5 = *(int *)(in_ECX + 0x24);
            local_1558 = 0x7f7fffff;
            local_1554 = 0xff7fffff;
            *(undefined4 *)(iVar5 + 0x18) = 0x7f7fffff;
            *(undefined4 *)(iVar5 + 0x1c) = 0xff7fffff;
            local_1590 = local_44c;
            iVar5 = 1;
            pfVar7 = (float *)&local_1550;
            do {
              local_1594 = (float)(int)local_448[iVar5 + -1] + local_1590;
              *pfVar7 = local_1594;
              if (iVar5 % 0x21 == 0) {
                local_1594 = pfVar7[-0x20];
              }
              iVar5 = iVar5 + 1;
              local_1590 = local_1594;
              pfVar7 = pfVar7 + 1;
            } while (iVar5 < 0x442);
            uVar11 = 0;
            do {
              uVar9 = uVar11 & 0x80000001;
              if ((int)uVar9 < 0) {
                uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
              }
              local_1594 = (float)((((int)uVar11 / 2) * 0x21 + uVar9) * 0x10);
              iVar5 = 0;
              iVar12 = 0;
              do {
                local_1570 = (int)ROUND((float)(&local_1550)
                                               [(iVar5 / 0x11) * 0x21 + iVar5 % 0x11 +
                                                (int)local_1594]);
                local_156c = (float)((int)ROUND((float)(&local_1550)
                                                       [(iVar5 / 0x11) * 0x21 + iVar5 % 0x11 +
                                                        (int)local_1594]) * 8);
                *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4) + iVar12) =
                     (float)((iVar5 % 0x11) * 0x80) + (float)(&DAT_00b35ba8)[uVar11];
                local_1590 = (float)((iVar5 / 0x11) * 0x80) + (float)(&DAT_00b35b98)[uVar11];
                *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4) + 4 + iVar12
                          ) = local_1590;
                *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + uVar11 * 4) + 8 + iVar12
                          ) = local_156c;
                iVar3 = *(int *)(in_ECX + 0x24);
                if (*(float *)(iVar3 + 0x18) <= local_156c) {
                  if (*(float *)(iVar3 + 0x1c) < local_156c) {
                    *(float *)(iVar3 + 0x1c) = local_156c;
                  }
                }
                else {
                  *(float *)(iVar3 + 0x18) = local_156c;
                }
                iVar12 = iVar12 + 0xc;
                iVar5 = iVar5 + 1;
              } while (iVar12 < 0xd8c);
              uVar11 = uVar11 + 1;
              param_1 = local_1584;
            } while ((int)uVar11 < 4);
          }
        }
        else if (iVar5 < 0x4c4d4e57) {
          if (iVar5 == 0x4c4d4e56) {
            if ((local_1595 != '\0') && ((*(byte *)(in_ECX + 0x1c) & 1) != 0)) {
              FUN_00450c20(&local_1550,0);
              uVar11 = 0;
              do {
                uVar9 = uVar11 & 0x80000001;
                if ((int)uVar9 < 0) {
                  uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
                }
                iVar5 = 0;
                local_1590 = (float)((((int)uVar11 / 2) * 0x21 + uVar9) * 0x10);
                iVar12 = 0;
                do {
                  iVar3 = ((iVar5 / 0x11) * 0x10 + (int)local_1590 + iVar5) * 3;
                  local_1594 = (float)(int)*(char *)((int)&local_1550 + iVar3) / 127.0;
                  *(float *)(iVar12 + *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4))
                       = local_1594;
                  local_1594 = (float)(int)*(char *)((int)&local_1550 + iVar3 + 1) / 127.0;
                  *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4) + 4 +
                            iVar12) = local_1594;
                  local_1594 = (float)(int)*(char *)((int)&local_1550 + iVar3 + 2) / 127.0;
                  *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + uVar11 * 4) + 8 +
                            iVar12) = local_1594;
                  FUN_0043f350();
                  iVar12 = iVar12 + 0xc;
                  iVar5 = iVar5 + 1;
                } while (iVar12 < 0xd8c);
                uVar11 = uVar11 + 1;
                param_1 = local_1584;
              } while ((int)uVar11 < 4);
            }
          }
          else if (iVar5 == 0x41544144) {
            uVar11 = *(uint *)(in_ECX + 0x1c);
            puVar1 = (uint *)(in_ECX + 0x1c);
            FUN_00450c20(puVar1,4);
            *puVar1 = *puVar1 & 0xfffffff7;
            if ((uVar11 >> 10 & 1) == 0) {
              *puVar1 = *puVar1 & 0xfffffbff;
            }
            else {
              *puVar1 = *puVar1 | 0x400;
            }
          }
          else if ((iVar5 == 0x4443504d) && (local_1595 != '\0')) {
            uVar8 = *(undefined4 *)(param_1 + 0x254);
            uVar6 = FUN_00401f00(uVar8);
            FUN_00450c20(uVar6,uVar8);
            puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x50);
            if (puVar2 != (undefined4 *)0x0) {
              if ((*(short *)(puVar2 + 1) != 0) &&
                 (*(short *)((int)puVar2 + 6) = *(short *)((int)puVar2 + 6) + -1,
                 *(short *)((int)puVar2 + 6) == 0)) {
                (**(code **)*puVar2)(1);
              }
              *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x50) = 0;
            }
            FUN_004c2230(uVar6,uVar8,*(int *)(in_ECX + 0x24) + 0x50);
            iVar5 = *(int *)(*(int *)(in_ECX + 0x24) + 0x50);
            if (iVar5 != 0) {
              if (*(short *)(iVar5 + 4) != 0) {
                *(short *)(iVar5 + 6) = *(short *)(iVar5 + 6) + 1;
              }
              *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x800;
            }
            FUN_00401f20(uVar6);
          }
        }
        else if (((iVar5 == 0x524c4356) && (local_1595 != '\0')) &&
                ((*(byte *)(in_ECX + 0x1c) & 2) != 0)) {
          FUN_00450c20(&local_1550,0);
          local_155c = 0x3f800000;
          uVar11 = 0;
          do {
            uVar9 = uVar11 & 0x80000001;
            if ((int)uVar9 < 0) {
              uVar9 = (uVar9 - 1 | 0xfffffffe) + 1;
            }
            iVar5 = 0;
            iVar12 = 0;
            do {
              iVar3 = ((iVar5 / 0x11) * 0x10 + (((int)uVar11 / 2) * 0x21 + uVar9) * 0x10 + iVar5) *
                      3;
              local_1594 = (float)(uint)*(byte *)((int)&local_1550 + iVar3);
              uVar10 = (uint)*(byte *)((int)&local_1550 + iVar3 + 1);
              local_1594 = (float)uVar10;
              local_1594 = (float)(uint)*(byte *)((int)&local_1550 + iVar3 + 2);
              local_1568 = (float)*(byte *)((int)&local_1550 + iVar3) / 255.0;
              iVar5 = iVar5 + 1;
              local_1564 = (float)uVar10 / 255.0;
              pfVar7 = (float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + uVar11 * 4) +
                                iVar12);
              *pfVar7 = local_1568;
              iVar12 = iVar12 + 0x10;
              pfVar7[1] = local_1564;
              local_1560 = (float)(int)local_1594 / 255.0;
              pfVar7[2] = local_1560;
              pfVar7[3] = 1.0;
            } while (iVar12 < 0x1210);
            uVar11 = uVar11 + 1;
            param_1 = local_1584;
          } while ((int)uVar11 < 4);
        }
      }
      else if (iVar5 == 0x54585441) {
        if (local_1595 != '\0') {
          local_158c = 0;
          local_1588 = 0;
          FUN_00450c20(&local_158c,8);
          if (7 < local_1588._2_2_) {
            if (*(int *)(in_ECX + 0x24) == 0) {
              if (*(int *)(in_ECX + 0x20) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_004c9aa0();
              }
            }
            else {
              uVar8 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
            }
            if (*(int *)(in_ECX + 0x24) == 0) {
              if (*(int *)(in_ECX + 0x20) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_004c9a80();
              }
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
            }
            FUN_004a7a60("Land (%i, %i) clamping invalid index %i for block %i.",uVar6,uVar8,
                         local_1588 >> 0x10,local_1588 & 0xff);
            local_1588 = CONCAT22(7,(undefined2)local_1588);
          }
          iVar5 = DAT_00b35be4;
          if (local_158c != 0) {
            FUN_0046bb20(&local_158c,param_1);
            uVar8 = FUN_0046b250(local_158c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0);
            iVar5 = FUN_009832e6(uVar8);
            if (iVar5 == 0) {
              if (*(int *)(in_ECX + 0x24) == 0) {
                if (*(int *)(in_ECX + 0x20) == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = FUN_004c9aa0();
                }
              }
              else {
                uVar8 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
              }
              if (*(int *)(in_ECX + 0x24) == 0) {
                if (*(int *)(in_ECX + 0x20) == 0) {
                  uVar6 = 0;
                }
                else {
                  uVar6 = FUN_004c9a80();
                }
              }
              else {
                uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
              }
              FUN_004a7a60("Land (%i, %i) unable to find additional texture ID (%08X) for block %i."
                           ,uVar6,uVar8,local_158c,local_1588 & 0xff);
            }
          }
          *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 0x30 + (local_1588 & 0xff) * 4) +
                  (local_1588 >> 0x10) * 4) = iVar5;
          if (iVar5 != 0) {
            FUN_004c9530();
          }
          local_1580 = local_1588 >> 0x10;
          local_157c = local_1588 & 0xff;
        }
      }
      else if (iVar5 == 0x54585442) {
        if (local_1595 != '\0') {
          local_1578 = 0;
          local_1574 = 0;
          FUN_00450c20(&local_1578,8);
          FUN_0046bb20(&local_1578,param_1);
          uVar8 = FUN_0046b250(local_1578,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0530c,0);
          uVar8 = FUN_009832e6(uVar8);
          *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x20 + (local_1574 & 0xff) * 4) = uVar8;
          iVar5 = *(int *)(in_ECX + 0x24);
          if (*(int *)(iVar5 + 0x20 + (local_1574 & 0xff) * 4) == 0) {
            if (iVar5 == 0) {
              if (*(int *)(in_ECX + 0x20) == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_004c9aa0();
              }
            }
            else {
              uVar8 = *(undefined4 *)(iVar5 + 0x9c);
            }
            if (*(int *)(in_ECX + 0x24) == 0) {
              if (*(int *)(in_ECX + 0x20) == 0) {
                uVar6 = 0;
              }
              else {
                uVar6 = FUN_004c9a80();
              }
            }
            else {
              uVar6 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
            }
            FUN_004a7a60("Land (%i, %i) unable to find base texture ID (%08X) for block %i.",uVar6,
                         uVar8,local_1578,local_1574 & 0xff);
          }
          else {
            FUN_004c9530();
          }
        }
      }
      else if ((iVar5 == 0x54585456) && (local_1595 != '\0')) {
        if ((-1 < (int)local_157c) && (-1 < (int)local_1580)) {
          uVar11 = *(uint *)(local_1584 + 0x254);
          if ((uVar11 & 7) == 0) {
            iVar5 = thunk_FUN_00401aa0(uVar11,1);
            FUN_00450c20(iVar5,uVar11);
            uVar11 = uVar11 >> 3;
            if (uVar11 != 0) {
              pfVar7 = (float *)(iVar5 + 4);
              do {
                if (1.0 < *pfVar7) {
                  *pfVar7 = *pfVar7 / 100.0;
                }
                FUN_004bf270(local_157c,*(undefined2 *)(pfVar7 + -1),local_1580,*pfVar7);
                pfVar7 = pfVar7 + 2;
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            FUN_00401e40(iVar5);
            local_157c = 0xffffffff;
            local_1580 = 0xffffffff;
            param_1 = local_1584;
            goto LAB_004c795f;
          }
          uVar8 = FUN_004bf040(local_1584 + 0x1c);
          uVar8 = FUN_004bf020(uVar8);
          FUN_004a7a60("Land (%i, %i) found unrecognized vertex texture data in file %s.",uVar8);
        }
        local_157c = 0xffffffff;
        local_1580 = 0xffffffff;
        param_1 = local_1584;
      }
LAB_004c795f:
      cVar4 = FUN_0044fea0();
    } while (cVar4 != '\0');
    if (local_1595 == '\0') {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) & 0xfffffff7;
    }
    else {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
    }
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



undefined1 FUN_004c79a0(char param_1)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int in_ECX;
  
  cVar2 = FUN_0057bac0();
  if (cVar2 != '\0') {
    param_1 = '\0';
  }
  uVar1 = *(uint *)(in_ECX + 0x1c);
  if ((uVar1 & 8) == 0) {
    if (((uVar1 & 0x400) != 0) ||
       (((uVar1 & 7) != 0 && (iVar4 = FUN_0046b680(0xffffffff), iVar4 != 0)))) {
      FUN_004c64e0();
      uVar3 = FUN_004c4c80();
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
      if (param_1 != '\0') {
        FUN_004c5640();
      }
      return uVar3;
    }
    FUN_004c64e0();
  }
  else if (**(int **)(in_ECX + 0x24) != 0) {
    return 1;
  }
  if (param_1 != '\0') {
    FUN_004c5640();
  }
  return 1;
}



void FUN_004c7a30(undefined4 *param_1,char param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004c9a80();
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar4 + -1,iVar2 + 1,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7b0c:
    *param_1 = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7b0c;
      uVar1 = FUN_004ce3c0();
      *param_1 = uVar1;
      FUN_004c79a0(0);
      *param_3 = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      *param_1 = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004c9a80();
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(uVar3,iVar2 + 1,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7bdc:
    param_1[1] = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7bdc;
      uVar1 = FUN_004ce3c0();
      param_1[1] = uVar1;
      FUN_004c79a0(0);
      param_3[1] = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      param_1[1] = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004c9a80();
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar4 + 1,iVar2 + 1,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7cb0:
    param_1[2] = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7cb0;
      uVar1 = FUN_004ce3c0();
      param_1[2] = uVar1;
      FUN_004c79a0(0);
      param_3[2] = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      param_1[2] = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004c9aa0();
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9a80();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar2 + -1,uVar3,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7d81:
    param_1[3] = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7d81;
      uVar1 = FUN_004ce3c0();
      param_1[3] = uVar1;
      FUN_004c79a0(0);
      param_3[3] = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      param_1[3] = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004c9aa0();
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9a80();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar2 + 1,uVar3,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7e52:
    param_1[4] = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7e52;
      uVar1 = FUN_004ce3c0();
      param_1[4] = uVar1;
      FUN_004c79a0(0);
      param_3[4] = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      param_1[4] = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004c9a80();
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar4 + -1,iVar2 + -1,uVar1,0);
  if (iVar2 == 0) {
LAB_004c7f26:
    param_1[5] = 0;
  }
  else {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) {
      iVar2 = FUN_004ce3c0();
      if (((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) ||
         ((param_2 == '\0' || (param_3 == (undefined1 *)0x0)))) goto LAB_004c7f26;
      uVar1 = FUN_004ce3c0();
      param_1[5] = uVar1;
      FUN_004c79a0(0);
      param_3[5] = 1;
    }
    else {
      uVar1 = FUN_004ce3c0();
      param_1[5] = uVar1;
    }
  }
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_004c9a80();
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(uVar3,iVar2 + -1,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) {
      uVar1 = FUN_004ce3c0();
      param_1[6] = uVar1;
      goto LAB_004c7ffe;
    }
    iVar2 = FUN_004ce3c0();
    if (((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) &&
       ((param_2 != '\0' && (param_3 != (undefined1 *)0x0)))) {
      uVar1 = FUN_004ce3c0();
      param_1[6] = uVar1;
      FUN_004c79a0(0);
      param_3[6] = 1;
      goto LAB_004c7ffe;
    }
  }
  param_1[6] = 0;
LAB_004c7ffe:
  if (*(int *)(in_ECX + 0x20) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_004c9cf0();
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_004c9aa0();
    }
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + 0x9c);
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    if (*(int *)(in_ECX + 0x20) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004c9a80();
    }
  }
  else {
    iVar4 = *(int *)(*(int *)(in_ECX + 0x24) + 0x98);
  }
  iVar2 = FUN_00447740(iVar4 + 1,iVar2 + -1,uVar1,0);
  if (iVar2 != 0) {
    iVar2 = FUN_004ce3c0();
    if ((*(int *)(iVar2 + 0x24) != 0) && (*(int *)(*(int *)(iVar2 + 0x24) + 4) != 0)) {
      uVar1 = FUN_004ce3c0();
      param_1[7] = uVar1;
      return;
    }
    iVar2 = FUN_004ce3c0();
    if ((((*(int *)(iVar2 + 0x24) == 0) || (*(int *)(*(int *)(iVar2 + 0x24) + 4) == 0)) &&
        (param_2 != '\0')) && (param_3 != (undefined1 *)0x0)) {
      uVar1 = FUN_004ce3c0();
      param_1[7] = uVar1;
      FUN_004c79a0(0);
      param_3[7] = 1;
      return;
    }
  }
  param_1[7] = 0;
  return;
}



void FUN_004c80f0(int *param_1,int param_2)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_20 [8];
  
  if ((*(byte *)(in_ECX + 0x1c) & 8) != 0) {
    if (param_1 == (int *)0x0) {
      param_1 = local_20;
      FUN_004c7a30(param_1,0,0);
    }
    iVar2 = 0;
    do {
      iVar4 = 0;
      iVar3 = 0;
      do {
        if (((0xff < iVar3 - 0x11U) || (iVar3 == (iVar3 / 0x11) * 0x11)) ||
           ((iVar3 + 1) % 0x11 == 0)) {
          if (param_2 != 0) {
            cVar1 = FUN_004c1080(param_2,*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar2 * 4)
                                         + iVar4);
            if (cVar1 == '\0') goto LAB_004c81a8;
          }
          FUN_004c3c90(iVar2,iVar3,
                       *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar2 * 4) + iVar4,param_1);
        }
LAB_004c81a8:
        iVar4 = iVar4 + 0xc;
        iVar3 = iVar3 + 1;
      } while (iVar4 < 0xd8c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (((((param_1[2] != 0) && (param_1[1] != 0)) &&
         ((*param_1 != 0 && ((param_1[7] != 0 && (param_1[6] != 0)))))) && (param_1[5] != 0)) &&
       ((param_1[4] != 0 && (param_1[3] != 0)))) {
      *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 0x10;
    }
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c8210(void)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  float10 extraout_ST0;
  float fStack_1b1b4;
  char cStack_1b1ae;
  char cStack_1b1ad;
  int aiStack_1b1ac [875];
  undefined4 auStack_1a400 [26877];
  char local_c [8];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&fStack_1b1b4;
  if (((*(uint *)(in_ECX + 0x1c) & 8) != 0) && ((*(uint *)(in_ECX + 0x1c) & 0x400) == 0)) {
    local_c[0] = '\0';
    local_c[1] = '\0';
    local_c[2] = '\0';
    local_c[3] = '\0';
    local_c[4] = '\0';
    local_c[5] = '\0';
    local_c[6] = '\0';
    local_c[7] = '\0';
    FUN_004c7a30(aiStack_1b1ac,1,local_c);
    fStack_1b1b4 = 0.0;
    puVar6 = auStack_1a400;
    do {
      iVar8 = aiStack_1b1ac[(int)fStack_1b1b4];
      if (iVar8 != 0) {
        if (*(int *)(iVar8 + 0x24) == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = *(undefined4 **)(*(int *)(iVar8 + 0x24) + 8);
        }
        puVar5 = (undefined4 *)*puVar5;
        puVar7 = puVar6 + -0x363;
        for (iVar2 = 0x363; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (*(int *)(iVar8 + 0x24) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar8 + 0x24) + 8);
        }
        puVar5 = *(undefined4 **)(iVar2 + 4);
        puVar7 = puVar6;
        for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (*(int *)(iVar8 + 0x24) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar8 + 0x24) + 8);
        }
        puVar5 = *(undefined4 **)(iVar2 + 8);
        puVar7 = puVar6 + 0x363;
        for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (*(int *)(iVar8 + 0x24) == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(iVar8 + 0x24) + 8);
        }
        puVar5 = *(undefined4 **)(iVar8 + 0xc);
        puVar7 = puVar6 + 0x6c6;
        for (iVar2 = 0x363; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        FUN_004c1170(0);
      }
      fStack_1b1b4 = (float)((int)fStack_1b1b4 + 1);
      puVar6 = puVar6 + 0xd8c;
    } while ((int)fStack_1b1b4 < 8);
    FUN_004c1170(0);
    FUN_004c80f0(aiStack_1b1ac,0);
    iVar8 = 0;
    do {
      iVar2 = 0;
      do {
        FUN_0043f350();
        iVar3 = *(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar8);
        cStack_1b1ae = FUN_009828c0();
        cStack_1b1ad = FUN_009828c0();
        cVar1 = FUN_009828c0();
        *(float *)(iVar3 + iVar2) = (float)((float10)(int)cVar1 / extraout_ST0);
        *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar8) + 4 + iVar2) =
             (float)((float10)(int)cStack_1b1ae / extraout_ST0);
        fStack_1b1b4 = (float)((float10)(int)cStack_1b1ad / extraout_ST0);
        *(float *)(*(int *)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar8) + 8 + iVar2) =
             fStack_1b1b4;
        FUN_0043f350();
        iVar2 = iVar2 + 0xc;
      } while (iVar2 < 0xd8c);
      iVar8 = iVar8 + 4;
    } while (iVar8 < 0x10);
    iVar8 = 0;
    puVar6 = auStack_1a400;
    do {
      iVar2 = aiStack_1b1ac[iVar8];
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x24) == 0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = *(undefined4 **)(*(int *)(iVar2 + 0x24) + 8);
        }
        puVar7 = puVar6 + -0x363;
        puVar5 = (undefined4 *)*puVar5;
        for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar5 = puVar5 + 1;
        }
        if (*(int *)(iVar2 + 0x24) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar2 + 0x24) + 8);
        }
        puVar5 = puVar6;
        puVar7 = *(undefined4 **)(iVar3 + 4);
        for (iVar4 = 0x363; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (*(int *)(iVar2 + 0x24) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(iVar2 + 0x24) + 8);
        }
        puVar5 = puVar6 + 0x363;
        puVar7 = *(undefined4 **)(iVar3 + 8);
        for (iVar4 = 0x363; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (*(int *)(iVar2 + 0x24) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar2 + 0x24) + 8);
        }
        cVar1 = local_c[iVar8];
        puVar5 = puVar6 + 0x6c6;
        puVar7 = *(undefined4 **)(iVar2 + 0xc);
        for (iVar3 = 0x363; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar7 = puVar7 + 1;
        }
        if (cVar1 != '\0') {
          FUN_004c6280();
        }
      }
      iVar8 = iVar8 + 1;
      puVar6 = puVar6 + 0xd8c;
    } while (iVar8 < 8);
    return 1;
  }
  return 0;
}



void FUN_004c8500(byte param_1)

{
  FUN_004c6f70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c8520(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b08984,0);
  if (iVar1 != 0) {
    bVar6 = (*(byte *)(iVar1 + 0x1c) & 8) == 0;
    if (bVar6) {
      FUN_004c79a0(0);
    }
    *(undefined4 *)(in_ECX + 0x20) = *(undefined4 *)(iVar1 + 0x20);
    FUN_004c64e0();
    iVar3 = 0;
    do {
      puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x24) + 4) + iVar3);
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 4) + iVar3);
      for (iVar2 = 0x363; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x24) + 8) + iVar3);
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 8) + iVar3);
      for (iVar2 = 0x363; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      _memcpy(*(void **)(*(int *)(*(int *)(in_ECX + 0x24) + 0xc) + iVar3),
              *(void **)(*(int *)(*(int *)(iVar1 + 0x24) + 0xc) + iVar3),0x1210);
      puVar4 = *(undefined4 **)(*(int *)(*(int *)(iVar1 + 0x24) + 0x10) + iVar3);
      puVar5 = *(undefined4 **)(*(int *)(*(int *)(in_ECX + 0x24) + 0x10) + iVar3);
      for (iVar2 = 0x48; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined1 *)puVar5 = *(undefined1 *)puVar4;
      _memcpy((void *)**(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x40 + iVar3),
              (void *)**(undefined4 **)(*(int *)(iVar1 + 0x24) + 0x40 + iVar3),0x2420);
      puVar4 = *(undefined4 **)(*(int *)(iVar1 + 0x24) + 0x30 + iVar3);
      puVar5 = *(undefined4 **)(*(int *)(in_ECX + 0x24) + 0x30 + iVar3);
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      }
      *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x20 + iVar3) =
           *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x20 + iVar3);
      iVar3 = iVar3 + 4;
    } while (iVar3 < 0x10);
    *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    iVar1 = *(int *)(iVar1 + 0x24);
    iVar3 = *(int *)(in_ECX + 0x24);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar1 + 0x18);
    *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
    if (bVar6) {
      FUN_004c6280();
    }
    *(uint *)(in_ECX + 0x1c) = *(uint *)(in_ECX + 0x1c) | 8;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004c8680(void)

{
  int iVar1;
  float fVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  bool bVar11;
  ushort in_FPUControlWord;
  undefined1 auStack_2254 [4];
  uint local_2250;
  float local_224c;
  float local_2248;
  int local_2244;
  uint local_2240;
  uint local_223c;
  int local_2238;
  undefined1 local_2234;
  undefined2 local_2232;
  undefined4 local_2230;
  undefined1 local_222c;
  undefined2 local_222a;
  undefined2 local_2228;
  undefined1 auStack_2226 [2];
  float afStack_2224 [785];
  int aiStack_15e0 [32];
  int local_1560 [1090];
  float local_458;
  char local_454 [1096];
  uint local_c;
  
  local_c = DAT_00b30aac ^ (uint)auStack_2254;
  uVar7 = *(uint *)(in_ECX + 0x1c);
  if (((uVar7 & 7) != 0) &&
     (((uVar7 & 8) != 0 ||
      ((((iVar10 = *(int *)(in_ECX + 0x24), iVar10 != 0 && (*(int *)(iVar10 + 4) != 0)) &&
        (*(int *)(iVar10 + 8) != 0)) && (*(int *)(iVar10 + 0xc) != 0)))))) {
    local_2244 = in_ECX;
    if ((uVar7 & 0x10) == 0) {
      FUN_004c8210();
    }
    FUN_0046b990();
    FUN_0046ae40(0x41544144,(byte *)(in_ECX + 0x1c),4);
    if ((*(byte *)(in_ECX + 0x1c) & 1) != 0) {
      uVar7 = 0;
      do {
        local_2240 = (int)uVar7 / 2;
        local_223c = uVar7 & 0x80000001;
        if ((int)local_223c < 0) {
          local_223c = (local_223c - 1 | 0xfffffffe) + 1;
        }
        local_2248 = (float)((local_2240 * 0x21 + local_223c) * 0x10);
        iVar10 = 0;
        local_2250 = 0;
        do {
          iVar8 = (local_2250 / 0x11) * 0x10 + local_2250 + (int)local_2248;
          local_224c = 0.0;
          if ((local_2250 / 0x11 == 0x10) && (local_224c = 1.4013e-45, local_2240 == 1)) {
            local_224c = 0.0;
          }
          if (local_2250 % 0x11 == 0x10) {
            bVar11 = local_223c == 1;
          }
          else {
            bVar11 = local_224c == 0.0;
          }
          if (bVar11) {
            local_224c = *(float *)(*(int *)(*(int *)(*(int *)(local_2244 + 0x24) + 4) + uVar7 * 4)
                                    + 8 + iVar10);
            local_2238 = (int)ROUND(local_224c);
            local_1560[iVar8] = local_2238 >> 3;
            FUN_0043f350();
            uVar6 = iVar8 * 3;
            local_224c = (float)uVar6;
            uVar3 = FUN_009828c0();
            auStack_2226[uVar6 - 2] = uVar3;
            uVar3 = FUN_009828c0();
            auStack_2226[(int)local_224c - 1] = uVar3;
            uVar3 = FUN_009828c0();
            auStack_2226[(int)local_224c] = uVar3;
          }
          local_2250 = local_2250 + 1;
          iVar10 = iVar10 + 0xc;
        } while (iVar10 < 0xd8c);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < 4);
      FUN_0046ae40(0x4c4d4e56,&local_2228,0xcc3);
      local_458 = (float)local_1560[0];
      local_2250 = local_2250 & 0xffffff00;
      iVar10 = 0;
      do {
        uVar7 = local_1560[iVar10] - local_1560[0];
        uVar6 = (int)uVar7 >> 0x1f;
        if ((int)((uVar7 ^ uVar6) - uVar6) < 0x80) {
          pcVar9 = local_454 + iVar10;
          *pcVar9 = (char)local_1560[iVar10] - (char)local_1560[0];
        }
        else {
          local_2250 = CONCAT31(local_2250._1_3_,1);
          pcVar9 = local_454 + iVar10;
          if (local_1560[0] < local_1560[iVar10]) {
            *pcVar9 = '\x7f';
          }
          else {
            *pcVar9 = -0x7f;
          }
        }
        local_2238 = iVar10 + 1;
        if (local_2238 % 0x21 == 0) {
          local_1560[0] = aiStack_15e0[iVar10];
        }
        else if ((byte)local_2250 == '\0') {
          local_1560[0] = local_1560[iVar10];
        }
        else {
          local_1560[0] = local_1560[0] + *pcVar9;
        }
        iVar10 = local_2238;
      } while (local_2238 < 0x441);
      FUN_0046ae40(0x54474856,&local_458,0x448);
      iVar10 = local_2244;
      if ((byte)local_2250 != '\0') {
        if (*(int *)(local_2244 + 0x24) == 0) {
          if (*(int *)(local_2244 + 0x20) == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_004c9aa0();
          }
        }
        else {
          uVar4 = *(undefined4 *)(*(int *)(local_2244 + 0x24) + 0x9c);
        }
        iVar8 = *(int *)(iVar10 + 0x24);
        if (iVar8 == 0) {
          if (*(int *)(iVar10 + 0x20) == 0) {
            uVar5 = 0;
          }
          else {
            uVar5 = FUN_004c9a80();
          }
        }
        else {
          uVar5 = *(undefined4 *)(iVar8 + 0x98);
        }
        FUN_004a7a60("Error saving land height Data for cell (%i, %i). Error correction attempted.\r\n"
                     ,uVar5,uVar4);
      }
    }
    if ((*(byte *)(local_2244 + 0x1c) & 2) != 0) {
      local_224c = 0.0;
      do {
        local_2240 = (int)local_224c / 2;
        local_223c = (uint)local_224c & 0x80000001;
        if ((int)local_223c < 0) {
          local_223c = (local_223c - 1 | 0xfffffffe) + 1;
        }
        local_2238 = (local_2240 * 0x21 + local_223c) * 0x10;
        uVar7 = 0;
        iVar10 = 0;
        do {
          local_2250 = 0;
          if ((uVar7 / 0x11 == 0x10) && (local_2250 = 1, local_2240 == 1)) {
            local_2250 = 0;
          }
          if (uVar7 % 0x11 == 0x10) {
            bVar11 = local_223c == 1;
          }
          else {
            bVar11 = local_2250 == 0;
          }
          if (bVar11) {
            iVar8 = *(int *)(local_2244 + 0x24);
            iVar1 = ((uVar7 / 0x11) * 0x10 + uVar7 + local_2238) * 3;
            local_2248._0_1_ =
                 (undefined1)
                 (int)ROUND(*(float *)(*(int *)(*(int *)(iVar8 + 0xc) + (int)local_224c * 4) +
                                      iVar10) * 255.0);
            auStack_2226[iVar1 + -2] = local_2248._0_1_;
            local_2248._0_1_ =
                 (undefined1)
                 (int)ROUND(*(float *)(*(int *)(*(int *)(iVar8 + 0xc) + (int)local_224c * 4) + 4 +
                                      iVar10) * 255.0);
            auStack_2226[iVar1 + -1] = local_2248._0_1_;
            local_2250 = (uint)in_FPUControlWord;
            local_2248 = (float)(int)ROUND(*(float *)(*(int *)(*(int *)(iVar8 + 0xc) +
                                                              (int)local_224c * 4) + 8 + iVar10) *
                                           255.0);
            auStack_2226[iVar1] = local_2248._0_1_;
          }
          iVar10 = iVar10 + 0x10;
          uVar7 = uVar7 + 1;
        } while (iVar10 < 0x1210);
        local_224c = (float)((int)local_224c + 1);
      } while ((int)local_224c < 4);
      FUN_0046ae40(0x524c4356,&local_2228,0xcc3);
    }
    if ((*(byte *)(local_2244 + 0x1c) & 4) != 0) {
      FUN_004c0290();
      local_2250 = 0;
      local_224c = 4.48416e-44;
      do {
        iVar8 = local_2244;
        fVar2 = local_224c;
        iVar10 = *(int *)(*(int *)(local_2244 + 0x24) + (int)local_224c);
        if ((iVar10 != 0) && (iVar10 != DAT_00b35be4)) {
          local_2234 = (byte)local_2250;
          local_2232 = 0xffff;
          local_2238 = *(int *)(*(int *)(*(int *)(local_2244 + 0x24) + (int)local_224c) + 0xc);
          FUN_0046ae40(0x54585442,&local_2238,8);
        }
        if (*(int *)((int)fVar2 + 0x10U + *(int *)(iVar8 + 0x24)) != 0) {
          local_2240 = 0;
          do {
            uVar7 = local_2240;
            iVar10 = *(int *)(*(int *)((int)local_224c + 0x10U + *(int *)(local_2244 + 0x24)) +
                             local_2240 * 4);
            if (iVar10 != 0) {
              local_222c = (byte)local_2250;
              local_222a = (undefined2)local_2240;
              if (iVar10 == DAT_00b35be4) {
                local_2230 = 0;
              }
              else {
                local_2230 = *(undefined4 *)(iVar10 + 0xc);
              }
              FUN_0046ae40(0x54585441,&local_2230,8);
              iVar10 = *(int *)(local_2244 + 0x24);
              iVar8 = 0;
              local_223c = 0;
              do {
                if (((((*(int *)(iVar10 + 0x20 + (int)local_224c) != 0) && ((byte)local_2250 < 4))
                     && ((ushort)local_223c < 0x121)) && (((ushort)uVar7 < 8 && (iVar10 != 0)))) &&
                   ((*(int *)(iVar10 + 0x40 + (local_2250 & 0xff) * 4) != 0 &&
                    (local_2248 = *(float *)(*(int *)(*(int *)(iVar10 + 0x40 +
                                                              (local_2250 & 0xff) * 4) +
                                                     (local_223c & 0xffff) * 4) +
                                            (uVar7 & 0xffff) * 4), uVar7 = local_2240,
                    0.0 < local_2248)))) {
                  afStack_2224[iVar8 * 2] = local_2248;
                  *(ushort *)(auStack_2226 + iVar8 * 8 + -2) = (ushort)local_223c;
                  iVar8 = iVar8 + 1;
                }
                local_223c = local_223c + 1;
              } while ((int)local_223c < 0x121);
              if (iVar8 != 0) {
                FUN_0046ae40(0x54585456,&local_2228,iVar8 * 8);
              }
            }
            local_2240 = uVar7 + 1;
          } while ((int)local_2240 < 8);
        }
        local_2250 = local_2250 + 1;
        local_224c = (float)((int)local_224c + 4);
      } while ((int)local_224c < 0x30);
    }
    FUN_0046b9f0();
    FUN_0046b370();
  }
  return;
}



int FUN_004c8d00(void)

{
  int in_ECX;
  
  return in_ECX + 0x2c;
}



undefined1 FUN_004c8d10(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x28);
}



undefined1 FUN_004c8d20(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x2b);
}



void FUN_004c8d30(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a464d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_004c8d50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a464d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c8d80(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  *(undefined1 *)(in_ECX + 0x28) = 2;
  *(undefined1 *)(in_ECX + 0x29) = 0x1e;
  *(undefined1 *)(in_ECX + 0x2a) = 0x1e;
  *(undefined1 *)(in_ECX + 0x2b) = 0x1e;
  thunk_FUN_0046b090();
  return;
}



void FUN_004c8dd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  iVar2 = *(int *)(in_ECX + 0x30);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x30) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x30));
    *(int *)(in_ECX + 0x30) = iVar2;
  }
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  thunk_FUN_0046b170();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004c90a0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  int *piVar3;
  undefined4 uVar4;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '\x0e') {
    FUN_00451210(in_ECX);
    do {
      iVar2 = FUN_004510b0();
      if (iVar2 < 0x4d414e49) {
        if (iVar2 == 0x4d414e48) {
          uVar4 = 3;
          piVar3 = in_ECX + 10;
LAB_004c9185:
          FUN_00450c20(piVar3,uVar4);
        }
        else if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffec,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
        }
        else {
          if (iVar2 == 0x4c444f4d) goto LAB_004c915e;
          if (iVar2 == 0x4d414e47) {
            local_c = 0;
            FUN_004510e0(&local_c);
            if (local_c != 0) {
              FUN_0067b1e0(local_c);
            }
          }
        }
      }
      else {
        if (iVar2 == 0x4d414e53) {
          uVar4 = 1;
          piVar3 = (int *)((int)in_ECX + 0x2b);
          goto LAB_004c9185;
        }
        if (iVar2 == 0x4e4f4349) {
LAB_004c915e:
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 6,param_1);
          }
        }
      }
      cVar1 = FUN_0044fea0();
    } while (cVar1 != '\0');
    FUN_0046ab80(0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_004c91c0(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_0046b990();
  FUN_00470070(0x4e4f4349);
  FUN_0046ae40(0x4d414e48,in_ECX + 0x28,3);
  FUN_0046ae40(0x4d414e53,in_ECX + 0x2b,1);
  for (piVar1 = (int *)(in_ECX + 0x2c);
      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1]) {
    FUN_0046ba80(0x4d414e47,*(undefined4 *)(*piVar1 + 0xc));
  }
  FUN_0046b9f0();
  return;
}



undefined4 FUN_004c9230(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  int in_ECX;
  int local_4;
  
  if (*(int *)(in_ECX + 0x24) == 0) {
    return 0;
  }
  local_4 = 0;
  FUN_0055e000(*(int *)(in_ECX + 0x24),&local_4);
  iVar1 = *(int *)(in_ECX + 0x24);
  if (DAT_00b35300 == 0) {
    if (*(int *)(iVar1 + 4) != local_4) {
      return 0;
    }
    if (local_4 + -1 == 0) {
      FUN_004524c0(iVar1);
    }
    else {
      FUN_00452570(iVar1,local_4 + -1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x24);
  }
  else {
    if (*(int *)(iVar1 + 4) != local_4 + 1) {
      return 0;
    }
    if (local_4 + -1 == 0) {
      FUN_004524c0(iVar1);
    }
    else {
      FUN_00452570(iVar1,local_4 + -1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x24);
  }
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *(undefined4 *)(in_ECX + 0x24) = 0;
  }
  return 1;
}



undefined1 FUN_004c9300(void)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  
  uVar2 = 0;
  for (piVar3 = (int *)(DAT_00b33a98 + 0x4c);
      (piVar3 != (int *)0x0 && ((piVar3[1] != 0 || (*piVar3 != 0)))); piVar3 = (int *)piVar3[1]) {
    cVar1 = FUN_004c9230();
    if (cVar1 != '\0') {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void FUN_004c9340(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5028;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a46530;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a464d4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c93b0(byte param_1)

{
  FUN_004c9340();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c93d0(void)

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
  puStack_8 = &LAB_009b506e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar2);
  local_4 = 0;
  FUN_0046ffd0();
  *in_ECX = &PTR_FUN_00a4656c;
  in_ECX[6] = &PTR_FUN_00a46550;
  in_ECX[9] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  *(undefined1 *)(in_ECX + 1) = 0xe;
  FUN_0046ab80(1);
  puVar1 = (undefined4 *)in_ECX[9];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[9] = 0;
  }
  *(undefined1 *)(in_ECX + 10) = 2;
  *(undefined1 *)((int)in_ECX + 0x29) = 0x1e;
  *(undefined1 *)((int)in_ECX + 0x2a) = 0x1e;
  *(undefined1 *)((int)in_ECX + 0x2b) = 0x1e;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004c9490(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b50ca;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4656c;
  in_ECX[6] = &PTR_FUN_00a46550;
  local_4 = 2;
  FUN_004c8dd0(uVar2);
  puVar1 = (undefined4 *)in_ECX[9];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00470040();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004c9530(void)

{
  undefined1 *puVar1;
  int in_ECX;
  char local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  puVar1 = *(undefined1 **)(in_ECX + 0x1c);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  _sprintf(local_20c,"%s\\Landscape\\%s","Textures",puVar1);
  FUN_0047d8f0(local_20c,local_108);
  FUN_0043b0d0(local_108,5,0);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004c95b0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  LONG LVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char *pcVar9;
  int iStack_220;
  undefined4 *local_21c;
  char local_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  puStack_8 = &LAB_009b50fb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_220;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffdd4;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar2 = DAT_00b35300;
  local_21c = *(undefined4 **)(in_ECX + 0x24);
  puVar1 = (undefined4 *)(in_ECX + 0x24);
  if ((local_21c == (undefined4 *)0x0) && (DAT_00b35300 != (int *)0x0)) {
    puVar5 = *(undefined1 **)(in_ECX + 0x1c);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_00a2f7ec;
    }
    local_4 = local_21c;
    _sprintf(local_218,"%s\\Landscape\\%s","Textures",puVar5,uVar4);
    uVar6 = (**(code **)(*piVar2 + 4))(local_218,0);
    FUN_0075fa90(uVar6);
    puVar3 = local_21c;
    if (local_21c == (undefined4 *)0x0) {
      if (DAT_00b33a04 == (int *)0x0) {
LAB_004c968f:
        pcVar9 = local_218;
      }
      else {
        iVar7 = (**(code **)(*DAT_00b33a04 + 4))(local_218,acStack_114,0,0xffffffff);
        if (iVar7 == 0) goto LAB_004c968f;
        pcVar9 = acStack_114;
      }
      uVar6 = FUN_00701e00(pcVar9,&DAT_00b256d0,1);
      FUN_0075fa90(uVar6);
      (**(code **)(*piVar2 + 8))(local_218,*puVar1);
      FUN_00452570(*puVar1,1);
      uVar6 = 1;
      goto LAB_004c9739;
    }
    uVar6 = FUN_00560920(&DAT_00b3f95c,local_21c);
    FUN_0075fa90(uVar6);
    iStack_220 = 0;
    FUN_0055e000(*puVar1,&iStack_220);
    FUN_00452570(*puVar1,iStack_220 + 1);
    local_4 = (undefined4 *)0xffffffff;
    LVar8 = InterlockedDecrement(puVar3 + 1);
    if (LVar8 == 0) {
      (**(code **)*puVar3)(1);
    }
  }
  uVar6 = 0;
LAB_004c9739:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_004c9760(byte param_1)

{
  FUN_004c9490();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004c9780(void)

{
  int in_ECX;
  
  FUN_0041e450();
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x3c));
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  return;
}



void FUN_004c97a0(void)

{
  FUN_004ef1d0();
  return;
}



void FUN_004c97c0(void)

{
  FUN_004ef1d0();
  return;
}



void FUN_004c97e0(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x24) = param_1;
  return;
}



byte FUN_004c97f0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x24) & 1;
}



void FUN_004c9800(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x24) = *(byte *)(in_ECX + 0x24) | 1;
    return;
  }
  *(byte *)(in_ECX + 0x24) = *(byte *)(in_ECX + 0x24) & 0xfe;
  return;
}



byte FUN_004c9820(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x24) >> 7;
}



byte FUN_004c9830(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x24) >> 5 & 1;
}



void FUN_004c9840(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) & 0xdf;
  }
  else {
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) | 0x20;
  }
                    /* WARNING: Could not recover jumptable at 0x004c985e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



void FUN_004c9860(char param_1)

{
  int *in_ECX;
  
  if (param_1 == '\0') {
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) & 0xbf;
  }
  else {
    *(byte *)(in_ECX + 9) = *(byte *)(in_ECX + 9) | 0x40;
  }
                    /* WARNING: Could not recover jumptable at 0x004c987e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x40))();
  return;
}



byte FUN_004c9880(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 0x20) != 0) {
    return 1;
  }
  return *(byte *)(in_ECX + 0x24) >> 6 & 1;
}



byte FUN_004c9890(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    return *(byte *)(in_ECX + 0x24) >> 3 & 1;
  }
  return 0;
}



undefined4 FUN_004c98a0(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0x3c);
}



undefined4 FUN_004c98b0(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0x3c);
}



void FUN_004c98c0(float *param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) || (*(uint **)(in_ECX + 0x3c) == (uint *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(uint **)(in_ECX + 0x3c);
  }
  *param_1 = (float)(uVar1 & 0xff) / 255.0;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) / 255.0;
  param_1[2] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  return;
}



void FUN_004c9920(float *param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) || (*(int *)(in_ECX + 0x3c) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x3c) + 4);
  }
  *param_1 = (float)(uVar1 & 0xff) / 255.0;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) / 255.0;
  param_1[2] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  return;
}



undefined4 FUN_004c9980(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x14);
  }
  return 0;
}



undefined4 FUN_004c99a0(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x18);
  }
  return 0;
}



void FUN_004c99c0(float *param_1)

{
  uint uVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) || (*(int *)(in_ECX + 0x3c) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(*(int *)(in_ECX + 0x3c) + 8);
  }
  *param_1 = (float)(uVar1 & 0xff) / 255.0;
  param_1[1] = (float)(uVar1 >> 8 & 0xff) / 255.0;
  param_1[2] = (float)(uVar1 >> 0x10 & 0xff) / 255.0;
  return;
}



float10 FUN_004c9a20(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x3c) + 0xc);
  }
  return (float10)0;
}



float10 FUN_004c9a40(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x3c) + 0x10);
  }
  return (float10)0;
}



float10 FUN_004c9a60(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return (float10)*(float *)(*(int *)(in_ECX + 0x3c) + 0x20);
  }
  return (float10)0;
}



undefined4 FUN_004c9a80(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) &&
     (*(undefined4 **)(in_ECX + 0x3c) != (undefined4 *)0x0)) {
    return **(undefined4 **)(in_ECX + 0x3c);
  }
  return 0;
}



undefined4 FUN_004c9aa0(void)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 4);
  }
  return 0;
}



void FUN_004c9ac0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) &&
     (puVar1 = *(undefined4 **)(in_ECX + 0x3c), puVar1 != (undefined4 *)0x0)) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
  return;
}



void FUN_004c9ae0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) &&
     (piVar1 = *(int **)(in_ECX + 0x40), piVar1 != param_1)) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
    *(int **)(in_ECX + 0x40) = param_1;
  }
  return;
}



void FUN_004c9b10(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x44);
  if (piVar1 != param_1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(1);
    }
    *(int **)(in_ECX + 0x44) = param_1;
  }
  return;
}



int FUN_004c9b40(char param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  iVar2 = FUN_0041f9b0(uVar1);
  if ((iVar2 == 0) && (param_1 != '\0')) {
    iVar3 = FUN_00401f00(0x10);
    if (iVar3 == 0) {
      iVar2 = 0;
    }
    else {
      local_4 = iVar2;
      iVar2 = FUN_004a62d0(0);
    }
    local_4 = 0xffffffff;
    FUN_004241e0(iVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



char FUN_004c9be0(int *param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  
  cVar3 = '\0';
  if (((param_1 != (int *)0x0) && (iVar1 = FUN_006ecc80(), iVar1 != 0)) &&
     (iVar1 = FUN_006ecc80(), (*(byte *)(iVar1 + 0x24) & 1) == 0)) {
    (**(code **)(*param_1 + 0x174))();
    FUN_00982bfa();
    uVar2 = FUN_009828c0();
    cVar3 = 0x800 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f));
    (**(code **)(*param_1 + 0x174))();
    FUN_00982bfa();
    uVar2 = FUN_009828c0();
    if (0x800 < (int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f))) {
      cVar3 = cVar3 + '\x02';
    }
  }
  return cVar3;
}



char FUN_004c9c80(void)

{
  uint uVar1;
  int in_ECX;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    FUN_00982bfa();
    uVar1 = FUN_009828c0();
    cVar2 = 0x800 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f));
    FUN_00982bfa();
    uVar1 = FUN_009828c0();
    if (0x800 < (int)((uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f))) {
      cVar2 = cVar2 + '\x02';
    }
  }
  return cVar2;
}



undefined4 FUN_004c9cf0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x50);
  }
  return uVar1;
}



void FUN_004c9d00(undefined4 param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    *(undefined4 *)(in_ECX + 0x50) = param_1;
  }
  return;
}



undefined4 FUN_004c9d10(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    uVar1 = *(undefined4 *)(in_ECX + 0x50);
  }
  return uVar1;
}



void FUN_004c9d20(undefined4 param_1)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    *(undefined4 *)(in_ECX + 0x50) = param_1;
  }
  return;
}



void FUN_004c9d30(undefined4 param_1)

{
  int in_ECX;
  
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    *(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x24) = param_1;
  }
  return;
}



float10 FUN_004c9d50(void)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30();
  return (float10)(float)fVar1;
}



float10 FUN_004c9da0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  byte bVar7;
  float10 fVar8;
  
  bVar7 = *(byte *)(in_ECX + 0x24) & 1;
  if ((bVar7 == 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
    iVar6 = **(int **)(in_ECX + 0x3c);
  }
  else {
    iVar6 = 0;
  }
  if ((bVar7 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
  }
  else {
    iVar5 = 0;
  }
  fVar1 = (float)(iVar6 << 0xc);
  fVar2 = fVar1 + 4096.0;
  fVar4 = (float)(iVar5 << 0xc);
  fVar3 = fVar4 + 4096.0;
  if (*param_1 < fVar1) {
    if ((param_1[1] <= fVar3) && (fVar3 = fVar4, fVar4 <= param_1[1])) {
      return (float10)(fVar1 - *param_1);
    }
    fVar8 = (float10)FUN_004c9d50(*param_1,param_1[1],fVar1,fVar3);
    return fVar8;
  }
  if (*param_1 <= fVar2) {
    if (fVar3 < param_1[1]) {
      return (float10)(param_1[1] - fVar3);
    }
    if (fVar4 <= param_1[1]) {
      return (float10)0;
    }
    return (float10)(fVar4 - param_1[1]);
  }
  if (fVar3 < param_1[1]) {
    fVar8 = (float10)FUN_004c9d50(*param_1,param_1[1],fVar2,fVar3);
    return fVar8;
  }
  if (fVar4 <= param_1[1]) {
    return (float10)(fVar1 - *param_1);
  }
  fVar8 = (float10)FUN_004c9d50(*param_1,param_1[1],fVar2,fVar4);
  return fVar8;
}



bool FUN_004c9f60(void)

{
  char cVar1;
  
  cVar1 = FUN_006fe080(0);
  return cVar1 != '\0';
}



byte FUN_004c9f80(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x24) >> 4 & 1;
}



void FUN_004c9f90(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x24) = *(byte *)(in_ECX + 0x24) | 0x10;
    return;
  }
  *(byte *)(in_ECX + 0x24) = *(byte *)(in_ECX + 0x24) & 0xef;
  return;
}



bool FUN_004c9fb0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0xd);
  return iVar1 != 0;
}



undefined4 FUN_004c9ff0(void)

{
  int unaff_FS_OFFSET;
  
  return CONCAT31((int3)((uint)_tls_index >> 8),
                  *(undefined1 *)
                   (*(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4) + 0x186));
}



undefined1 FUN_004ca010(byte param_1)

{
  if ((0x30 < param_1) && ((param_1 < 0x35 || (param_1 == 0x36)))) {
    return 1;
  }
  return 0;
}



void FUN_004ca030(void)

{
  undefined4 in_ECX;
  
  FUN_00496fd0(in_ECX);
  return;
}



void FUN_004ca040(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  ushort uVar4;
  
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar4 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar3 = param_1 & 0xffff;
      if (uVar4 < *(ushort *)(in_ECX + 10)) {
        do {
          if (*(float *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 4) != 0.0) {
            *(undefined4 *)(*(int *)(in_ECX + 4) + (uVar3 & 0xffff) * 4) = 0;
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar3 = uVar3 + 1;
        } while ((ushort)uVar3 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar4;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar4;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar2 = FUN_00401f00((param_1 & 0xffff) * 4);
      uVar4 = 0;
      *(undefined4 *)(in_ECX + 4) = uVar2;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(uVar3 * 4 + *(int *)(in_ECX + 4)) = *(undefined4 *)(uVar3 * 4 + iVar1);
        } while (uVar4 < *(ushort *)(in_ECX + 10));
      }
      uVar4 = *(ushort *)(in_ECX + 10);
      if (uVar4 < *(ushort *)(in_ECX + 8)) {
        do {
          uVar3 = (uint)uVar4;
          uVar4 = uVar4 + 1;
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = 0;
        } while (uVar4 < *(ushort *)(in_ECX + 8));
        FUN_00401f20(iVar1);
        return;
      }
    }
    FUN_00401f20(iVar1);
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a4664c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_004ca210(uint param_1,float *param_2)

{
  bool bVar1;
  int in_ECX;
  
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    bVar1 = *(float *)(*(int *)(in_ECX + 4) + param_1 * 4) == 0.0;
    if (*param_2 == 0.0) {
      if (!bVar1) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (bVar1) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      *(float *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != 0.0) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
      *(float *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
      return;
    }
  }
  *(float *)(*(int *)(in_ECX + 4) + param_1 * 4) = *param_2;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004ca2f0(float *param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  FUN_008a7d50(&local_30);
  return;
}



void FUN_004ca340(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc0);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xc0) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_004ca390(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b35c24;
  if (DAT_00b35c24 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(DAT_00b35c24 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b35c24 = (undefined4 *)0x0;
  }
  DAT_00b3659c = 0;
  return;
}



void FUN_004ca3d0(void)

{
  int iVar1;
  int in_ECX;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_0046b990();
  FUN_0046c730();
  thunk_FUN_0046ae40(0x41544144,(byte *)(in_ECX + 0x24),1);
  iVar1 = *(int *)(in_ECX + 0x3c);
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    if (iVar1 == 0) goto LAB_004ca41e;
    uVar3 = 8;
    uVar2 = 0x434c4358;
  }
  else {
    if (iVar1 == 0) goto LAB_004ca41e;
    uVar3 = 0x28;
    uVar2 = 0x4c4c4358;
  }
  FUN_0046ae40(uVar2,iVar1,uVar3);
LAB_004ca41e:
  FUN_00422f10();
  FUN_0046b9f0();
  return;
}



uint FUN_004ca5f0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    return (*(uint *)(in_ECX + 0xc) & 0xffffff) % 10;
  }
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = piVar1[1];
    iVar2 = *piVar1;
  }
  uVar3 = FUN_004ef1d0(iVar2 >> 5,iVar4 >> 5);
  return uVar3;
}



undefined4 FUN_004ca640(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    return (int)(((ulonglong)(*(uint *)(in_ECX + 0xc) & 0xffffff) % 100) / 10);
  }
  piVar1 = *(int **)(in_ECX + 0x3c);
  if (piVar1 == (int *)0x0) {
    iVar4 = 0;
    iVar2 = 0;
  }
  else {
    iVar4 = piVar1[1];
    iVar2 = *piVar1;
  }
  uVar3 = FUN_004ef1d0(iVar2 >> 3,iVar4 >> 3);
  return uVar3;
}



uint FUN_004ca690(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 8) >> 0x11 & 0xffffff01;
}



undefined1 FUN_004ca6a0(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    if (*(int *)(in_ECX + 0x50) != 0) {
      uVar1 = FUN_004d7000();
      return uVar1;
    }
  }
  else if ((*(uint *)(in_ECX + 8) & 0x80000) != 0) {
    return 1;
  }
  return 0;
}



undefined1 FUN_004ca6c0(void)

{
  byte bVar1;
  undefined1 uVar2;
  int in_ECX;
  bool bVar3;
  
  bVar3 = (*(byte *)(in_ECX + 0x24) & 4) != 0;
  bVar1 = *(byte *)(in_ECX + 0x24) & 1;
  if (bVar1 != 0) {
    bVar3 = !bVar3;
  }
  if (bVar3) {
    return 1;
  }
  if ((bVar1 == 0) && (*(int *)(in_ECX + 0x50) != 0)) {
    uVar2 = FUN_004ef140();
    return uVar2;
  }
  return 0;
}



byte FUN_004ca6f0(void)

{
  byte bVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    return *(byte *)(in_ECX + 0x24) >> 3 & 1;
  }
  if (*(int *)(in_ECX + 0x50) != 0) {
    bVar1 = FUN_004ef150();
    return bVar1;
  }
  return 0;
}



void FUN_004ca710(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x3c));
    *(undefined4 *)(in_ECX + 0x3c) = 0;
  }
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined4 **)(in_ECX + 0x3c) = puVar1;
      return;
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_00401f00(0x28);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      puVar1[3] = 0;
      puVar1[1] = 0;
      puVar1[4] = 0;
      puVar1[2] = 0;
      puVar1[5] = 0;
      puVar1[7] = 0x3f800000;
      puVar1[6] = 0;
      puVar1[9] = 0;
      puVar1[8] = 0;
      *(undefined4 **)(in_ECX + 0x3c) = puVar1;
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  return;
}



undefined4 FUN_004ca790(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x54);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_004ca7a0(void)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  int iVar5;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5167;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xdc,uVar1);
  iVar4 = 0;
  local_4 = 0;
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  iVar2 = FUN_00401f00(0xdc,uVar1);
  local_4 = 1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0070b780(0);
  }
  local_4 = 0xffffffff;
  if ((_DAT_00b35c00 >> 2 & 1) == 0) {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
  }
  else {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
  }
  iVar5 = 0;
  (**(code **)(*piVar3 + 0x84))(iVar2);
  iVar2 = FUN_00401f00(0xdc);
  local_c = 2;
  if (iVar2 != 0) {
    iVar4 = FUN_0070b780(0);
  }
  local_c = -1;
  if ((_DAT_00b35c00 >> 3 & 1) == 0) {
    *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) & 0xfffe;
  }
  else {
    *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 1;
  }
  (**(code **)(*piVar3 + 0x84))(iVar4,0);
  *(ushort *)(iVar4 + 0x18) = *(ushort *)(iVar4 + 0x18) | 0x40;
  iVar2 = FUN_00401f00(0xdc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0070b780(0);
  }
  if ((_DAT_00b35c00 >> 4 & 1) == 0) {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
  }
  else {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
  }
  (**(code **)(*piVar3 + 0x84))(iVar2,0);
  iVar2 = FUN_00401f00(0xdc);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0070b780(0);
  }
  if ((_DAT_00b35c00 >> 5 & 1) == 0) {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) & 0xfffe;
  }
  else {
    *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
  }
  (**(code **)(*piVar3 + 0x84))(iVar2,0);
  *unaff_FS_OFFSET = iVar5;
  return piVar3;
}



void FUN_004ca970(void)

{
  FUN_0041e7b0();
  return;
}



void FUN_004ca980(void)

{
  FUN_0041e7d0();
  return;
}



uint FUN_004ca990(void)

{
  uint uVar1;
  
  uVar1 = FUN_0041e7f0();
  return -(uint)(uVar1 != 0xffffffff) & uVar1;
}



void FUN_004ca9b0(void)

{
  FUN_00420a70();
  return;
}



void FUN_004ca9c0(int param_1)

{
  char cVar1;
  int *in_ECX;
  
  cVar1 = FUN_0045a500();
  if ((cVar1 == '\0') || (param_1 == 0)) {
    FUN_00420a90(param_1);
    if (param_1 == 0) {
      (**(code **)(*in_ECX + 0x44))(0xe000000);
      return;
    }
  }
  (**(code **)(*in_ECX + 0x40))(0x8000000);
  return;
}



void FUN_004caa10(undefined4 param_1)

{
  int *in_ECX;
  
  FUN_00423660(param_1);
  (**(code **)(*in_ECX + 0x40))(0x20);
  return;
}



void FUN_004caa30(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 local_8;
  
  iVar2 = FUN_00402c00();
  fVar3 = (float10)FUN_00402bd0();
  local_8 = (int)(longlong)ROUND(fVar3);
  local_8 = iVar2 * 0x18 + local_8;
  cVar1 = FUN_0045a500();
  if ((cVar1 == '\0') || (local_8 == 0)) {
    FUN_00420a90(local_8);
    if (local_8 == 0) {
      (**(code **)(*in_ECX + 0x44))(0xe000000);
      return;
    }
  }
  (**(code **)(*in_ECX + 0x40))(0x8000000);
  return;
}



undefined1 FUN_004caac0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 local_5;
  
  local_5 = 0;
  iVar2 = FUN_0041e7b0();
  if (iVar2 != 0) {
    cVar1 = FUN_004d7f80();
    if (cVar1 == '\0') {
      return 0;
    }
    iVar3 = FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
    iVar2 = FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
    if (iVar3 == 0) {
      if (iVar2 != 0) {
        uVar4 = FUN_0041e7f0();
        uVar5 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
        FUN_009832e6(uVar5);
        iVar2 = FUN_00467510(iVar2,param_1 == DAT_00b333c4);
        if ((int)(-(uint)(uVar4 != 0xffffffff) & uVar4) <= iVar2) {
          local_5 = 1;
        }
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 0x170))();
      if (iVar3 == iVar2) {
        return 1;
      }
    }
  }
  return local_5;
}



undefined1 FUN_004cabc0(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  
  cVar1 = FUN_005e6c60();
  if (cVar1 != '\0') {
    return 0;
  }
  iVar2 = FUN_0041e7b0();
  if (((iVar2 == 0) || ((*(byte *)(in_ECX + 0x24) & 0x20) != 0)) ||
     ((*(byte *)(in_ECX + 0x24) >> 6 & 1) != 0)) {
    return 0;
  }
  iVar3 = FUN_0041e7d0();
  if ((iVar3 != 0) || (cVar1 = FUN_004d7f80(), cVar1 == '\0')) {
    return 0;
  }
  iVar3 = FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
  iVar2 = FUN_009832e6(iVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
  if (iVar3 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x170))();
    if (iVar3 == iVar2) {
      return 0;
    }
    return 1;
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_004ca990();
  uVar4 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
  FUN_009832e6(uVar4);
  iVar2 = FUN_00467510(iVar2,param_1 == DAT_00b333c4);
  if (iVar3 <= iVar2) {
    return 0;
  }
  return 1;
}



float10 FUN_004cace0(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(byte *)(in_ECX + 0x24) >> 1 & 1) == 0) {
    return (float10)-3.4028235e+38;
  }
  fVar1 = (float10)FUN_0041f870();
  return fVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004cad00(float *param_1)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  byte bVar7;
  
  FUN_00496ea0(in_ECX);
  if ((_DAT_00b35e10 & 1) == 0) {
    _DAT_00b35e10 = _DAT_00b35e10 | 1;
    _DAT_00b35e04 = DAT_00b3f9a8;
    _DAT_00b35e08 = DAT_00b3f9ac;
    _DAT_00b35e0c = DAT_00b3f9b0;
  }
  iVar3 = FUN_0041f9c0();
  if ((iVar3 != 0) || ((*(byte *)(in_ECX + 0x24) & 1) != 0)) {
LAB_004cad81:
    FUN_00496f50(in_ECX);
    return iVar3;
  }
  iVar4 = FUN_0041f9b0();
  if (iVar4 == 0) {
    if (((*(byte *)(in_ECX + 0x24) & 1) == 0) && (*(int *)(in_ECX + 0x50) != 0)) {
      iVar3 = FUN_004ef0f0();
    }
    goto LAB_004cad81;
  }
  if (param_1 != (float *)0x0) {
    bVar7 = *(byte *)(in_ECX + 0x24) & 1;
    if ((bVar7 == 0) && (*(int **)(in_ECX + 0x3c) != (int *)0x0)) {
      iVar3 = **(int **)(in_ECX + 0x3c);
    }
    else {
      iVar3 = 0;
    }
    if ((bVar7 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
      iVar4 = *(int *)(*(int *)(in_ECX + 0x3c) + 4);
    }
    else {
      iVar4 = 0;
    }
    fVar1 = (float)(iVar3 * 0x1000);
    if ((((fVar1 < *param_1 != (fVar1 == *param_1)) &&
         (*param_1 <= (float)(iVar3 * 0x1000 + 0x1000))) &&
        (fVar1 = (float)(iVar4 * 0x1000), fVar1 < param_1[1] != (fVar1 == param_1[1]))) &&
       (param_1[1] <= (float)(iVar4 * 0x1000 + 0x1000))) {
      cVar2 = FUN_008aa350(&DAT_00b35e04);
      if ((cVar2 != '\0') && (DAT_00b09554 != 3)) {
        FUN_00496f50(in_ECX);
        return DAT_00b09554;
      }
      uVar5 = 0;
      if (bVar7 == 0) {
        uVar5 = *(undefined4 *)(in_ECX + 0x50);
      }
      iVar3 = **(int **)(DAT_00b33a98 + 0xcd8);
      uVar5 = FUN_004a67b0(7,*param_1,param_1[1],param_1[2],uVar5);
      piVar6 = (int *)(**(code **)(iVar3 + 0x1c))(uVar5);
      if (piVar6 == (int *)0x0) {
        DAT_00b09554 = 0;
      }
      else {
        DAT_00b09554 = (**(code **)(*piVar6 + 0x24))();
      }
      _DAT_00b35e04 = *param_1;
      _DAT_00b35e08 = param_1[1];
      _DAT_00b35e0c = param_1[2];
      DAT_00b35e00 = 0;
      goto LAB_004caf50;
    }
  }
  if ((DAT_00b35e00 == 0) || (DAT_00b35e00 != in_ECX)) {
    uVar5 = 0;
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      uVar5 = *(undefined4 *)(in_ECX + 0x50);
    }
    iVar3 = **(int **)(DAT_00b33a98 + 0xcd8);
    uVar5 = FUN_004a6460(7,0,uVar5);
    piVar6 = (int *)(**(code **)(iVar3 + 0x1c))(uVar5);
    if (piVar6 == (int *)0x0) {
      DAT_00b09554 = 0;
      DAT_00b35e00 = in_ECX;
    }
    else {
      DAT_00b09554 = (**(code **)(*piVar6 + 0x24))();
      DAT_00b35e00 = in_ECX;
    }
  }
LAB_004caf50:
  if (((DAT_00b09554 == 0) && ((*(byte *)(in_ECX + 0x24) & 1) == 0)) &&
     (*(int *)(in_ECX + 0x50) != 0)) {
    DAT_00b09554 = FUN_004ef0f0();
  }
  iVar3 = DAT_00b09554;
  FUN_00496f50(in_ECX);
  return iVar3;
}



undefined4 FUN_004caf90(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    uVar1 = FUN_004ef7a0();
    return uVar1;
  }
  if (-1 < (char)*(byte *)(in_ECX + 0x24)) {
    return 0;
  }
  uVar1 = FUN_0041f9e0();
  return uVar1;
}



int FUN_004cafc0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = FUN_004204c0();
  if ((((iVar1 == 0) && (iVar1 = DAT_00b360ac, (*(byte *)(in_ECX + 0x24) & 1) == 0)) &&
      (*(int *)(in_ECX + 0x50) != 0)) && (iVar2 = FUN_004ef7c0(), iVar1 = DAT_00b360ac, iVar2 != 0))
  {
    return iVar2;
  }
  return iVar1;
}



undefined4 FUN_004caff0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    return 0;
  }
  uVar1 = FUN_0041f9f0();
  return uVar1;
}



void FUN_004cb010(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  FUN_006786a0(in_ECX + 0x48,param_1);
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cb040(void)

{
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  FUN_006745d0(in_ECX + 0x48);
  FUN_00496f50(in_ECX);
  return;
}



int FUN_004cb070(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int local_14;
  int local_10;
  int local_8;
  undefined4 local_4;
  
  iVar6 = param_1;
  local_14 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 0;
  }
  if (param_1 == param_2) {
    return 0;
  }
  local_10 = 0;
  local_8 = 0;
  local_4 = 0;
  piVar9 = (int *)0x0;
  iVar8 = 0;
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  param_1 = 0;
  iVar10 = iVar4;
  iVar5 = iVar4;
  if (iVar4 == 0) {
    iVar8 = FUN_009832e6(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
    if ((iVar8 == 0) || (iVar6 = FUN_004ef1e0(), iVar6 == 0)) goto LAB_004cb11c;
    iVar5 = FUN_004ef1e0();
    iVar10 = FUN_004ef1e0();
  }
  piVar9 = (int *)(iVar5 + 0x48);
  param_1 = iVar10;
LAB_004cb11c:
  FUN_00496ea0(param_1);
  for (; (piVar9 != (int *)0x0 && ((piVar9[1] != 0 || (*piVar9 != 0)))); piVar9 = (int *)piVar9[1])
  {
    piVar1 = (int *)*piVar9;
    iVar6 = (**(code **)(*piVar1 + 0x170))();
    if ((*(char *)(iVar6 + 4) == '\x18') &&
       (((uVar2 = piVar1[2], (uVar2 >> 5 & 1) == 0 && ((uVar2 >> 0xb & 1) == 0)) &&
        ((uVar2 >> 0xd & 1) == 0)))) {
      uVar7 = (**(code **)(*piVar1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
      iVar6 = FUN_009832e6(uVar7);
      if (((iVar6 != 0) && (cVar3 = FUN_004b78e0(), cVar3 != '\0')) &&
         (cVar3 = FUN_004b80a0(param_2), cVar3 != '\0')) {
        iVar6 = FUN_004d7630();
        if (iVar6 == 0) {
          FUN_00446cb0(piVar1);
          local_10 = local_10 + 1;
        }
        else if ((*param_3 == 0) &&
                (((iVar4 != 0 && (cVar3 = FUN_004ca6f0(), cVar3 != '\0')) ||
                 ((iVar8 != 0 && (cVar3 = FUN_004ef150(), cVar3 != '\0')))))) {
          *param_3 = (int)piVar1;
        }
      }
    }
  }
  FUN_00496f50(param_1);
  if ((local_10 == 0) || (cVar3 = FUN_0046cb60(), cVar3 != '\0')) {
    return 0;
  }
  iVar6 = FUN_0047e020(local_10);
  iVar10 = 0;
  piVar9 = &local_8;
  while ((piVar1 = (int *)piVar9[1], piVar1 != (int *)0x0 || (*piVar9 != 0))) {
    if (iVar10 == iVar6) {
      local_14 = *piVar9;
      break;
    }
    iVar10 = iVar10 + 1;
    piVar9 = piVar1;
    if (piVar1 == (int *)0x0) {
      FUN_004526e0();
      return 0;
    }
  }
  FUN_004526e0();
  return local_14;
}



void FUN_004cb2b0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  int in_ECX;
  undefined4 uVar11;
  int *unaff_FS_OFFSET;
  undefined4 uVar12;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b51a6;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_2 != 0) && (param_1 != 0)) {
    piVar6 = (int *)FUN_00420680(uVar5);
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48);
        (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
        piVar1 = (int *)piVar1[1]) {
      if ((((uint)piVar2[2] >> 0xb & 1) == 0) &&
         (((((uint)piVar2[2] >> 5 & 1) == 0 && (cVar3 = FUN_004de770(param_1,0), cVar3 != '\0')) &&
          (piVar2 != piVar6)))) {
        iVar7 = (**(code **)(*piVar2 + 0x170))();
        switch(*(undefined1 *)(iVar7 + 4)) {
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x21:
        case 0x22:
        case 0x26:
        case 0x27:
        case 0x28:
          iVar7 = FUN_00401f00(0xc);
          uVar11 = 0;
          uStack_4 = 0;
          if (iVar7 == 0) {
            piVar9 = (int *)0x0;
          }
          else {
            uVar12 = 0;
            uVar8 = (**(code **)(*piVar2 + 0x170))(0);
            piVar9 = (int *)FUN_00484420(uVar8,uVar12);
          }
          uStack_4 = 0xffffffff;
          if (*piVar9 == 0) {
            puVar10 = (undefined4 *)FUN_00401f00(8);
            if (puVar10 == (undefined4 *)0x0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              *puVar10 = 0;
              puVar10[1] = 0;
            }
            *piVar9 = (int)puVar10;
          }
          iVar7 = FUN_00401f00(0x14);
          uStack_4 = 1;
          if (iVar7 != 0) {
            uVar11 = FUN_00422ee0();
          }
          uStack_4 = 0xffffffff;
          FUN_00428a60(piVar2 + 0x11);
          FUN_0041e710(piVar2);
          FUN_0041f600();
          FUN_00446cb0(uVar11);
          sVar4 = FUN_0041e860();
          FUN_0060d020((int)sVar4);
          FUN_0048ae30(piVar9,1);
          break;
        case 0x17:
          FUN_0041e6f0();
          FUN_0048e9a0(param_2,piVar2,0);
        }
      }
    }
    FUN_00496f50(in_ECX);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004cb4d0(void)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[1];
    if ((piVar2 != (int *)0x0) && (piVar2 != DAT_00b333c4)) {
      (**(code **)(*piVar2 + 0x150))(0);
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cb520(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if (((piVar2 != (int *)0x0) &&
          (iVar3 = (**(code **)(*piVar2 + 0x170))(), iVar3 == DAT_00b35ea8)) &&
         (iVar3 = FUN_004d7730(), iVar3 != 0)) {
        FUN_00446cb0(piVar2);
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004cb590(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    piVar1 = (int *)(in_ECX + 0x48);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[1];
      if ((((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 0x170))(), iVar3 != 0)) &&
          (iVar3 = (**(code **)(*piVar2 + 0x170))(), (*(uint *)(iVar3 + 8) >> 0xb & 1) == 0)) &&
         (((iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\n' ||
           (iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x1a')) ||
          ((iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x12' ||
           ((iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x18' &&
            ((*(uint *)(in_ECX + 8) >> 0xd & 1) == 0)))))))) {
        FUN_004d9310(param_1);
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004cb670(char param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  while (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    piVar1 = (int *)piVar1[1];
    if (iVar2 != 0) {
      if (param_1 == '\0') {
        FUN_004d8150(0);
      }
      else {
        FUN_004d80c0(0);
      }
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cb6c0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  while (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[1];
    if (((piVar2 != (int *)0x0) &&
        (iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x1a')) &&
       (iVar3 = FUN_0041e650(), iVar3 != 0)) {
      uVar4 = 0;
      (**(code **)(*piVar2 + 0x170))(iVar3,0);
      FUN_004b22e0(iVar3,uVar4);
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cb790(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  FUN_006786a0(piVar1,0);
  FUN_00496f50(in_ECX);
  FUN_00496ea0(in_ECX);
  for (; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_004dc100();
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cb7f0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  
  *param_1 = DAT_00b3f9a8;
  param_1[1] = DAT_00b3f9ac;
  param_1[2] = DAT_00b3f9b0;
  FUN_00496ea0(in_ECX);
  piVar5 = (int *)(in_ECX + 0x48);
  iVar4 = 0;
  if (piVar5 != (int *)0x0) {
    do {
      if ((int *)*piVar5 != (int *)0x0) {
        pfVar3 = (float *)(**(code **)(*(int *)*piVar5 + 0x174))();
        iVar4 = iVar4 + 1;
        fVar1 = pfVar3[1];
        fVar2 = pfVar3[2];
        *param_1 = *param_1 + *pfVar3;
        param_1[1] = fVar1 + param_1[1];
        param_1[2] = fVar2 + param_1[2];
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
    if (0 < iVar4) {
      fVar1 = 1.0 / (float)iVar4;
      *param_1 = fVar1 * *param_1;
      param_1[1] = param_1[1] * fVar1;
      param_1[2] = fVar1 * param_1[2];
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



undefined1 FUN_004cb8c0(char param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  undefined1 local_5;
  
  local_5 = 0;
  FUN_00496ea0(in_ECX);
  iVar4 = FUN_006ecc80();
  piVar1 = (int *)(in_ECX + 0x48);
  do {
    if (piVar1 == (int *)0x0) goto LAB_004cb95e;
    piVar2 = (int *)*piVar1;
    piVar1 = (int *)piVar1[1];
  } while ((((piVar2 == (int *)0x0) ||
            (((param_1 == '\0' && (iVar5 = (**(code **)(*piVar2 + 0x154))(), iVar5 == 0)) &&
             (((uint)piVar2[2] >> 0xb & 1) == 0)))) ||
           ((cVar3 = (**(code **)(*piVar2 + 400))(), cVar3 != '\0' && (param_2 != '\0')))) ||
          (((cVar3 = FUN_004d7190(), cVar3 == '\0' || (param_1 != '\0')) &&
           (iVar5 = FUN_006ecc80(), iVar4 == iVar5))));
  local_5 = 1;
LAB_004cb95e:
  FUN_00496f50(in_ECX);
  return local_5;
}



void FUN_004cb980(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if ((piVar2 != (int *)0x0) &&
         (iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == ')')) {
        FUN_004f1ac0(piVar2);
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004cb9e0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      iVar2 = *piVar1;
      if ((((iVar2 != 0) && (cVar3 = FUN_004d74b0(), cVar3 != '\0')) &&
          ((*(uint *)(iVar2 + 8) >> 5 & 1) == 0)) && ((*(uint *)(iVar2 + 8) >> 0xb & 1) == 0)) {
        FUN_00446cb0(iVar2);
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



undefined4 FUN_004cba50(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  uVar1 = *(undefined4 *)(in_ECX + 0x48);
  FUN_00496f50(in_ECX);
  return uVar1;
}



int * FUN_004cba80(int param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 == 0) {
    return (int *)0x0;
  }
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00496f50(in_ECX);
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar2 + 0x170))();
    piVar1 = (int *)piVar1[1];
  } while ((iVar3 == 0) ||
          (((param_2 != '\0' && (((uint)piVar2[2] >> 5 & 1) != 0)) || (iVar3 != param_1))));
  FUN_00496f50(in_ECX);
  return piVar2;
}



int * FUN_004cba90(undefined4 param_1,int param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int unaff_EBP;
  
  FUN_00496ea0(unaff_EBP);
  piVar1 = (int *)(unaff_EBP + 0x48);
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00496f50(unaff_EBP);
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar2 + 0x170))();
    piVar1 = (int *)piVar1[1];
  } while ((iVar3 == 0) ||
          (((param_3 != '\0' && (((uint)piVar2[2] >> 5 & 1) != 0)) || (iVar3 != param_2))));
  FUN_00496f50(unaff_EBP);
  return piVar2;
}



int * FUN_004cbb20(char param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00496f50(in_ECX);
      return (int *)0x0;
    }
    piVar2 = (int *)*piVar1;
    iVar3 = (**(code **)(*piVar2 + 0x170))();
    piVar1 = (int *)piVar1[1];
  } while ((iVar3 == 0) ||
          (((param_2 != '\0' && (((uint)piVar2[2] >> 5 & 1) != 0)) ||
           (*(char *)(iVar3 + 4) != param_1))));
  FUN_00496f50(in_ECX);
  return piVar2;
}



undefined4 FUN_004cbbb0(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  uVar1 = FUN_004bc4a0(param_1,in_ECX + 0x48);
  FUN_00496f50(in_ECX);
  return uVar1;
}



void FUN_004cbbf0(void)

{
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  FUN_004bc920(in_ECX + 0x48);
  FUN_00496f50(in_ECX);
  return;
}



undefined4
FUN_004cbc20(undefined4 param_1,float param_2,undefined4 param_3,float param_4,code *param_5,
            undefined4 param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  
  if (param_5 == (code *)0x0) {
    return 0;
  }
  FUN_00496ea0(in_ECX);
  piVar3 = (int *)(in_ECX + 0x48);
joined_r0x004cbc43:
  do {
    if ((piVar3 == (int *)0x0) ||
       ((piVar1 = (int *)piVar3[1], piVar1 == (int *)0x0 && (*piVar3 == 0)))) {
      FUN_00496f50(in_ECX);
      return 1;
    }
    piVar2 = (int *)*piVar3;
    piVar3 = piVar1;
    if (param_2 != 3.4028235e+38) {
      uVar5 = (**(code **)(*piVar2 + 0x174))(param_1,param_2);
      iVar6 = FUN_00480520(uVar5);
      if (-1 < iVar6) goto joined_r0x004cbc43;
    }
    if ((param_4 != 3.4028235e+38) &&
       ((param_4 != param_2 || (cVar4 = FUN_008aa350(param_3), cVar4 == '\0')))) {
      uVar5 = (**(code **)(*piVar2 + 0x174))(param_3,param_4);
      iVar6 = FUN_00480520(uVar5);
      if (-1 < iVar6) goto joined_r0x004cbc43;
    }
    cVar4 = (*param_5)(piVar2,param_6);
    if (cVar4 != '\0') {
      FUN_00496f50(in_ECX);
      return 0;
    }
  } while( true );
}



void FUN_004cbd30(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if ((((piVar2 != (int *)0x0) && (((uint)piVar2[2] >> 0xb & 1) == 0)) &&
          (((uint)piVar2[2] >> 5 & 1) == 0)) &&
         (((iVar3 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar3 + 4) == '\x18' &&
           (iVar3 != DAT_00b35ebc)) && (iVar3 = FUN_004d7630(), iVar3 != 0)))) {
        FUN_00446cb0(piVar2);
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004cbdb0(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_00496ea0(in_ECX);
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if ((((piVar2 != (int *)0x0) && (((uint)piVar2[2] >> 0xb & 1) == 0)) &&
          (((uint)piVar2[2] >> 5 & 1) == 0)) &&
         ((iVar4 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar4 + 4) == '\x18' &&
          (iVar4 != DAT_00b35ebc)))) {
        (**(code **)(*piVar2 + 0x170))();
        iVar4 = FUN_004d7630();
        if ((iVar4 != 0) || (cVar3 = FUN_004b78e0(), cVar3 != '\0')) {
          FUN_00446cb0(piVar2);
        }
      }
    }
    FUN_00496f50(in_ECX);
  }
  return;
}



void FUN_004cbe50(int param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int in_ECX;
  undefined4 *puVar6;
  int *piVar7;
  int *piVar8;
  char cStack_d;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (param_1 != 0) {
    local_c = in_ECX;
    FUN_00452570(in_ECX,1);
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      if (*(int *)(in_ECX + 0x50) == 0) {
        return;
      }
      cVar2 = FUN_004ef150();
      if (cVar2 == '\0') {
        return;
      }
    }
    else if ((*(byte *)(in_ECX + 0x24) & 8) == 0) {
      return;
    }
    if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
      cVar2 = FUN_0043f8c0(in_ECX,0);
      if (cVar2 != '\0') {
        FUN_00440120(in_ECX);
      }
      if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
        FUN_00459f30(in_ECX);
      }
    }
    FUN_00496ea0(in_ECX);
    local_8 = 0;
    local_4 = 0;
    piVar7 = (int *)0x0;
    puVar6 = (undefined4 *)0x0;
    for (piVar8 = (int *)(in_ECX + 0x48);
        (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0)))); piVar8 = (int *)piVar8[1]) {
      piVar1 = (int *)*piVar8;
      iVar3 = (**(code **)(*piVar1 + 0x170))();
      if ((*(char *)(iVar3 + 4) == '\x18') && (iVar3 = FUN_004d7630(), iVar3 != 0)) {
        iVar3 = FUN_0042b460();
        if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x24) & 1) != 0)) {
          FUN_00446cb0(iVar3);
        }
        uVar4 = (**(code **)(*piVar1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
        iVar3 = FUN_009832e6(uVar4);
        if ((iVar3 != 0) && (cVar2 = FUN_004b78e0(), cVar2 != '\0')) {
          FUN_004b6d50(piVar1);
        }
      }
      puVar5 = puVar6;
      if (piVar7 != (int *)0x0) {
        puVar5 = (undefined4 *)FUN_00401f00(8);
        if (puVar5 == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          *puVar5 = piVar7;
          puVar5[1] = 0;
        }
        puVar5[1] = puVar6;
      }
      piVar7 = piVar1;
      puVar6 = puVar5;
      in_ECX = local_c;
    }
    FUN_00496f50(in_ECX);
    while ((puVar6 != (undefined4 *)0x0 || (piVar7 != (int *)0x0))) {
      FUN_0045bde0(piVar7,0xffffffff,0);
      (**(code **)(*piVar7 + 0x6c))();
      FUN_0045c020(piVar7,0xffffffff,0);
      FUN_0045b780(piVar7,1);
      if (puVar6 == (undefined4 *)0x0) {
        piVar7 = (int *)0x0;
      }
      else {
        puVar5 = (undefined4 *)puVar6[1];
        piVar7 = (int *)*puVar6;
        FUN_00401f20(puVar6);
        puVar6 = puVar5;
      }
    }
    piVar8 = &local_8;
    do {
      if ((piVar8[1] == 0) && (*piVar8 == 0)) break;
      cStack_d = '\0';
      cVar2 = FUN_004d6760(*piVar8,&cStack_d);
      if ((cVar2 == '\0') || (cStack_d == '\0')) {
        FUN_004cbe50(param_1);
      }
      piVar8 = (int *)piVar8[1];
    } while (piVar8 != (int *)0x0);
    FUN_004526e0();
  }
  return;
}



undefined1 FUN_004cc070(int param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  undefined1 local_a;
  char cStack_9;
  int local_8;
  undefined4 local_4;
  
  local_a = 0;
  if (param_1 == 0) {
    return 0;
  }
  FUN_00452570(in_ECX,1);
  FUN_00496ea0(in_ECX);
  local_8 = 0;
  local_4 = 0;
  piVar5 = (int *)0x0;
  piVar2 = (int *)(in_ECX + 0x48);
  while ((piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))))) {
    piVar1 = (int *)*piVar2;
    if (piVar1 == DAT_00b333c4) {
      local_a = 1;
LAB_004cc12a:
      piVar5 = piVar2;
      piVar2 = (int *)piVar2[1];
    }
    else {
      iVar4 = (**(code **)(*piVar1 + 0x170))();
      if ((((*(char *)(iVar4 + 4) == '\x18') && (iVar4 = FUN_004d7630(), iVar4 != 0)) &&
          (iVar4 = FUN_0042b460(), iVar4 != 0)) && ((*(byte *)(iVar4 + 0x24) & 1) != 0)) {
        FUN_00446cb0(iVar4);
      }
      iVar4 = FUN_004d8e40();
      if (iVar4 == 0) goto LAB_004cc12a;
      (**(code **)(*piVar1 + 0x118))();
      if (piVar5 == (int *)0x0) {
        piVar2 = (int *)(in_ECX + 0x48);
      }
      else {
        piVar2 = (int *)piVar5[1];
      }
    }
  }
  FUN_00496f50(in_ECX);
  piVar5 = &local_8;
  do {
    if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
    cStack_9 = '\0';
    cVar3 = FUN_004d6760(*piVar5,&cStack_9);
    if (((cVar3 == '\0') || (cStack_9 == '\0')) && (cVar3 = FUN_004cc070(param_1), cVar3 != '\0')) {
      local_a = 1;
    }
    piVar5 = (int *)piVar5[1];
  } while (piVar5 != (int *)0x0);
  FUN_004526e0();
  return local_a;
}



float10 FUN_004cc1a0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int in_ECX;
  int *piVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *local_10;
  float local_c;
  float local_8;
  uint local_4;
  
  piVar2 = param_3;
  iVar4 = FUN_004c9b40(1);
  if (iVar4 == 0) {
    local_10 = (int *)0x0;
  }
  else {
    local_10 = (int *)(iVar4 + 4);
  }
  if (((*(byte *)(in_ECX + 0x24) & 1) != 0) || (local_10 == (int *)0x0)) {
    return (float10)0;
  }
  local_8 = 3.4028235e+38;
  local_4 = 0xffffffff;
  do {
    if (*local_10 == 0) break;
    if ((*(uint *)(*local_10 + 8) >> 5 & 1) != 0) {
      local_10 = (int *)local_10[1];
      goto LAB_004cc315;
    }
    local_c = 0.0;
    piVar5 = (int *)FUN_004a4460(param_2);
    if ((piVar5 == (int *)0x0) || (cVar3 = (**(code **)(*piVar5 + 0x1c))(), cVar3 == '\0')) {
LAB_004cc30e:
      local_10 = (int *)local_10[1];
    }
    else {
      if ((char)piVar5[1] == '\0') {
        if (-1 < (int)local_4) goto LAB_004cc30e;
      }
      else if ((int)(uint)*(byte *)((int)piVar5 + 6) <= (int)local_4) {
        local_10 = (int *)local_10[1];
        goto LAB_004cc315;
      }
      piVar7 = *(int **)(*local_10 + 0x1c);
      if (piVar7 == (int *)0x0) goto LAB_004cc30e;
      do {
        if (*piVar7 == 0) break;
        if (0.0 < local_c) goto LAB_004cc347;
        iVar4 = FUN_004b2360();
        fVar1 = (float)iVar4;
        if (iVar4 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar8 = (float10)FUN_004a74e0(param_1,fVar1);
        param_3 = (int *)(float)fVar8;
        if (1.0 < (float)param_3) {
          param_3 = (int *)0x3f800000;
        }
        if (local_c <= (float)param_3) {
          local_c = (float)param_3;
        }
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
      if (local_c <= 0.0) goto LAB_004cc30e;
LAB_004cc347:
      if ((char)piVar5[1] != '\0') {
        local_4 = (uint)*(byte *)((int)piVar5 + 6);
        local_8 = 3.4028235e+38;
      }
      iVar4 = (**(code **)(*piVar5 + 0xc))();
      if ((((iVar4 == 2) && (piVar2 != (int *)0x0)) &&
          (iVar4 = (**(code **)(*piVar2 + 4))(), iVar4 != 0)) &&
         (iVar4 = (**(code **)*piVar2)(), iVar4 == 0)) {
        piVar6 = (int *)(**(code **)(**(int **)(DAT_00b33a98 + 0xcd8) + 8))(piVar5);
        uVar10 = 0;
        uVar9 = 1;
        (**(code **)(*piVar6 + 0x28))(piVar2,1,0);
        cVar3 = FUN_004a6860(uVar9,uVar10,piVar5);
        if (cVar3 != '\0') goto joined_r0x004cc46d;
        local_10 = (int *)local_10[1];
      }
      else {
        iVar4 = (**(code **)(*piVar5 + 0xc))();
        if (((iVar4 == 6) && (piVar2 != (int *)0x0)) &&
           ((iVar4 = (**(code **)(*piVar2 + 4))(), iVar4 != 0 &&
            (iVar4 = (**(code **)*piVar2)(), iVar4 == 1)))) {
          piVar6 = (int *)(**(code **)(**(int **)(DAT_00b33a98 + 0xcd8) + 0x18))(piVar5);
          iVar4 = (**(code **)(*piVar2 + 0xc))();
          if (iVar4 == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            iVar4 = (**(code **)(*piVar2 + 0xc))();
            uVar9 = *(undefined4 *)(iVar4 + 0xc);
          }
          iVar4 = (**(code **)(*piVar2 + 4))();
          (**(code **)(*piVar6 + 0x24))(*(undefined4 *)(iVar4 + 0xc),uVar9);
          iVar4 = FUN_004a6070(uVar9,piVar5);
          if (iVar4 == 0) {
            local_10 = (int *)local_10[1];
            goto LAB_004cc315;
          }
        }
joined_r0x004cc46d:
        for (; (piVar7 != (int *)0x0 && (*piVar7 != 0)); piVar7 = (int *)piVar7[1]) {
          iVar4 = FUN_004b2360();
          fVar1 = (float)iVar4;
          if (iVar4 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          fVar8 = (float10)FUN_004a74e0(param_1,fVar1);
          param_3 = (int *)(float)fVar8;
          if (1.0 < (float)param_3) {
            param_3 = (int *)0x3f800000;
          }
          if (local_c <= (float)param_3) {
            local_c = (float)param_3;
          }
        }
        if (local_8 < local_c) {
          local_10 = (int *)local_10[1];
        }
        else {
          local_10 = (int *)local_10[1];
          local_8 = local_c;
        }
      }
    }
LAB_004cc315:
  } while (local_10 != (int *)0x0);
  if ((0.0 <= local_8) && (local_8 <= 1.0)) {
    return (float10)local_8;
  }
  return (float10)0.0;
}



uint FUN_004cc540(float *param_1)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  byte bVar3;
  int3 iVar2;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    bVar3 = *(byte *)(in_ECX + 0x24) & 1;
    if ((bVar3 == 0) && (*(uint **)(in_ECX + 0x3c) != (uint *)0x0)) {
      in_EAX = **(uint **)(in_ECX + 0x3c);
    }
    else {
      in_EAX = 0;
    }
    if ((int)ROUND(*param_1) >> 0xc == in_EAX) {
      iVar1 = (int)ROUND(param_1[1]) >> 0xc;
      iVar2 = (int3)((int)ROUND(param_1[1]) >> 0x14);
      if ((bVar3 == 0) && (*(int *)(in_ECX + 0x3c) != 0)) {
        return CONCAT31(iVar2,iVar1 == *(int *)(*(int *)(in_ECX + 0x3c) + 4));
      }
      return CONCAT31(iVar2,iVar1 == 0);
    }
  }
  return in_EAX & 0xffffff00;
}



void FUN_004cc660(void)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  int in_ECX;
  int *piVar9;
  
  FUN_00496ea0(in_ECX);
  piVar2 = (int *)(in_ECX + 0x48);
  piVar5 = (int *)0x0;
joined_r0x004cc67c:
  do {
    piVar9 = piVar2;
    if ((piVar9 == (int *)0x0) || ((piVar9[1] == 0 && (*piVar9 == 0)))) {
      FUN_00496f50(in_ECX);
      return;
    }
    piVar2 = (int *)*piVar9;
    iVar7 = (**(code **)(*piVar2 + 0x170))();
    bVar1 = *(byte *)(iVar7 + 4);
    if (0x22 < bVar1) {
      if (bVar1 < 0x25) {
        cVar6 = FUN_004d7a50();
        if (cVar6 != '\0') {
          (**(code **)(*piVar2 + 0x150))(0);
          FUN_004d7a90(0);
          if (piVar5 == (int *)0x0) {
            piVar3 = (int *)piVar9[1];
            if (piVar3 == (int *)0x0) {
              *piVar9 = 0;
            }
            else {
              piVar9[1] = piVar3[1];
              *piVar9 = *piVar3;
              FUN_00401f20(piVar3);
            }
          }
          else {
            FUN_0065c620(piVar2);
            piVar9 = (int *)piVar5[1];
          }
          (**(code **)(*piVar2 + 0x194))(0);
          puVar8 = (undefined4 *)FUN_00420480();
          if (puVar8 != (undefined4 *)0x0) {
            while (cVar6 = FUN_0046cb60(), cVar6 == '\0') {
              FUN_004203e0(0);
              FUN_004d6640();
              puVar4 = (undefined4 *)puVar8[1];
              if (puVar4 == (undefined4 *)0x0) {
                *puVar8 = 0;
              }
              else {
                puVar8[1] = puVar4[1];
                *puVar8 = *puVar4;
                FUN_00401f20(puVar4);
              }
            }
          }
          (**(code **)(*piVar2 + 0x10))(1);
          piVar2 = piVar9;
          goto joined_r0x004cc67c;
        }
      }
      else if ((bVar1 == 0x25) && (cVar6 = FUN_004d7a50(), cVar6 != '\0')) {
        (**(code **)(*piVar2 + 0x150))(0);
        FUN_004d7a90(0);
      }
    }
    piVar2 = (int *)piVar9[1];
    piVar5 = piVar9;
  } while( true );
}



void FUN_004cc7c0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *in_ECX = &PTR__scalar_deleting_destructor__00a45af0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 1;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  in_ECX[1] = 0;
  in_ECX[4] = &PTR__scalar_deleting_destructor__00a45af0;
  *(undefined2 *)(in_ECX + 6) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 1;
  *(undefined2 *)((int)in_ECX + 0x1a) = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  in_ECX[5] = 0;
  in_ECX[8] = &PTR__scalar_deleting_destructor__00a45af0;
  *(undefined2 *)(in_ECX + 10) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 1;
  *(undefined2 *)((int)in_ECX + 0x2a) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  in_ECX[9] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



uint FUN_004cc850(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  uVar4 = *(uint *)(param_1 + 0x23c);
  piVar1 = (int *)(param_1 + 0x23c);
  if (uVar4 == DAT_00b06048) {
    uVar4 = FUN_004518b0(1);
    if (((char)uVar4 != '\0') && (*piVar1 == DAT_00b05e20)) {
      iVar2 = *(int *)(param_1 + 0x240);
      uVar4 = FUN_004518b0(1);
      if ((char)uVar4 == '\0') {
        return uVar4;
      }
      param_1._0_1_ = 0;
      uVar4 = 0;
      do {
        if (iVar2 - 0x14U <= uVar4) {
LAB_004cc8fb:
          return CONCAT31((int3)((uint)piVar1 >> 8),(undefined1)param_1);
        }
        if (*piVar1 == DAT_00b05e20) {
          uVar4 = uVar4 + 0x14;
        }
        else {
          if ((*(uint *)(iVar3 + 0x248) & 0xffffff) == (param_2 & 0xffffff)) {
            param_1._0_1_ = 1;
            goto LAB_004cc8fb;
          }
          uVar4 = uVar4 + 0x14 + *(int *)(iVar3 + 0x240);
        }
        uVar5 = FUN_004518b0(1);
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
      } while( true );
    }
  }
  return uVar4 & 0xffffff00;
}



int * FUN_004cc910(void)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  
  piVar2 = (int *)0x0;
  FUN_00496ea0(in_ECX);
  piVar3 = (int *)(in_ECX + 0x48);
  if (piVar3 != (int *)0x0) {
    while ((piVar2 = (int *)*piVar3, piVar2 == (int *)0x0 ||
           (iVar1 = (**(code **)(*piVar2 + 0x170))(), iVar1 != DAT_00b33aa8))) {
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        FUN_00496f50(in_ECX);
        return (int *)0x0;
      }
    }
  }
  FUN_00496f50(in_ECX);
  return piVar2;
}



undefined1 FUN_004cc980(int *param_1)

{
  int *piVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  int in_ECX;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = 0;
  if ((param_1 != (int *)0x0) && (iVar5 = (**(code **)(*param_1 + 0x170))(), iVar5 == DAT_00b33aa8))
  {
    FUN_00496ea0(in_ECX);
    uVar6 = 0;
    for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      piVar2 = (int *)*piVar1;
      if (((piVar2 != (int *)0x0) && (((uint)piVar2[2] >> 5 & 1) == 0)) &&
         (((uint)piVar2[2] >> 0xb & 1) == 0)) {
        iVar5 = (**(code **)(*piVar2 + 0x170))();
        if (*(char *)(iVar5 + 4) == '\x1a') {
          iVar5 = (**(code **)(*piVar2 + 0x170))();
          bVar3 = (byte)(*(uint *)(iVar5 + 0x7c) >> 1) & 1;
        }
        else {
          bVar3 = FUN_00469520(*(char *)(iVar5 + 4));
        }
        if (bVar3 != 0) {
          uVar8 = 0;
          uVar7 = 0;
          sVar4 = FUN_0041e860(0,0);
          FUN_004ddc40(piVar2,(int)sVar4,uVar7,uVar8);
          FUN_004d7d80();
          uVar6 = 1;
        }
      }
    }
    FUN_00496f50(in_ECX);
  }
  return uVar6;
}



void FUN_004cca60(char param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b520b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(0xd);
  if (iVar3 == 0) {
    if (param_1 == '\0') goto LAB_004ccb7f;
    iVar4 = FUN_00401f00(0x10,uVar2);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_0041d9c0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
    FUN_00496ea0(in_ECX);
    piVar1 = (int *)(in_ECX + 0x48);
    while ((piVar1 != (int *)0x0 && (*piVar1 != 0))) {
      piVar5 = (int *)FUN_009832e6(*piVar1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
      piVar1 = (int *)piVar1[1];
      if ((piVar5 != (int *)0x0) &&
         (((((uint)piVar5[2] >> 0xb & 1) == 0 && (piVar5[0x16] != 0)) &&
          (iVar4 = FUN_00659a00(), iVar4 == 3)))) {
        (**(code **)(*piVar5 + 0x1ac))();
      }
    }
    FUN_00496f50(in_ECX);
    if (iVar3 == 0) goto LAB_004ccb7f;
  }
  if (param_1 == '\0') {
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + -1;
  }
  else {
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  if (*(int *)(iVar3 + 0xc) == 0) {
    FUN_00422e20(iVar3,1);
  }
LAB_004ccb7f:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004ccba0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 0x400;
    return;
  }
  *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffbff;
  return;
}



undefined1 * FUN_004ccbc0(void)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  
  iVar1 = FUN_0041fa30();
  if (iVar1 != 0) {
    puVar2 = (undefined1 *)FUN_0041fa30();
    return puVar2;
  }
  puVar2 = DAT_00b35c0c;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    puVar2 = &DAT_00a2f7ec;
  }
  return puVar2;
}



void FUN_004ccc50(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  if (*(char *)(in_ECX + 0x26) == '\x06') {
    piVar1 = (int *)(in_ECX + 0x48);
    while (piVar1 != (int *)0x0) {
      piVar2 = (int *)*piVar1;
      piVar1 = (int *)piVar1[1];
      if ((piVar2 != (int *)0x0) &&
         (((cVar3 = (**(code **)(*piVar2 + 400))(), cVar3 == '\0' || ((char)piVar2[0x1e] != '\0'))
          || (cVar3 = FUN_0045a500(), cVar3 != '\0')))) {
        (**(code **)(*piVar2 + 0x160))();
      }
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cccc0(undefined4 param_1)

{
  FUN_004ca2f0(param_1);
  return;
}



void FUN_004ccce0(void)

{
  if (DAT_00b35c24 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004cccf2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_00b35c24 + 0x80))();
    return;
  }
  return;
}



undefined1 FUN_004ccd00(int *param_1)

{
  byte bVar1;
  
  if (param_1 != (int *)0x0) {
    if (*param_1 == DAT_00b05e20) {
      if ((param_1[3] == 6) || (param_1[3] - 8U < 3)) {
        return 1;
      }
    }
    else {
      bVar1 = FUN_0046af70(*param_1);
      if (0x30 < bVar1) {
        if (bVar1 < 0x35) {
          return 1;
        }
        if (bVar1 == 0x36) {
          return 1;
        }
      }
    }
  }
  return 0;
}



void FUN_004ccda0(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  for (piVar1 = (int *)(in_ECX + 0x48);
      (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if ((piVar2 != DAT_00b333c4) && (cVar3 = FUN_004db4a0(), cVar3 != '\0')) {
      (**(code **)(*piVar2 + 0x150))(0);
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



float10 FUN_004cce00(void)

{
  int in_ECX;
  float10 fVar1;
  undefined4 local_4;
  
  local_4 = 0.0;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    fVar1 = (float10)FUN_00420c40();
    local_4 = (float)fVar1;
  }
  return (float10)local_4;
}



void FUN_004cce20(undefined4 *param_1,undefined4 *param_2,char param_3)

{
  float fVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_34;
  undefined1 local_30 [12];
  undefined4 local_24 [9];
  
  if (param_3 == '\0') {
    fVar1 = 1.0;
  }
  else {
    fVar1 = -1.0;
  }
  local_34 = 0.0;
  if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
    fVar5 = (float10)FUN_00420c40();
    local_34 = (float)fVar5;
  }
  if (fVar1 * local_34 != 0.0) {
    puVar3 = &DAT_00b26dc4;
    puVar4 = local_24;
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_0070fdd0(fVar1 * local_34);
    param_1 = (undefined4 *)FUN_00710250(local_30,param_1,local_24);
  }
  *param_2 = *param_1;
  param_2[1] = param_1[1];
  param_2[2] = param_1[2];
  return;
}



void FUN_004cced0(void)

{
  FUN_00420b50();
  return;
}



int FUN_004ccee0(int param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afc36;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = 0;
  if ((*(byte *)(in_ECX + 9) & 1) != 0) {
    uVar4 = FUN_00420b50(uVar2);
    iVar1 = 0;
    for (iVar3 = FUN_009832e6(uVar4,0,&PTR_PTR_00b03184,&PTR_PTR_00b0319c,0); iVar3 != 0;
        iVar3 = *(int *)(iVar3 + 0x28)) {
      if ((*(char *)(iVar3 + 0x24) == param_1) && (*(char *)(iVar3 + 0x25) == param_2))
      goto LAB_004ccfdc;
      iVar1 = iVar3;
    }
    if (param_3 != '\0') {
      iVar3 = FUN_00401f00(0x2c);
      if (iVar1 == 0) {
        local_4 = 1;
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = FUN_00411f60(param_1,param_2);
        }
        local_4 = 0xffffffff;
        FUN_00420b70(iVar3);
        (**(code **)(*in_ECX + 0x48))(0x10000000);
      }
      else {
        local_4 = 0;
        if (iVar3 == 0) {
          iVar3 = 0;
          *(undefined4 *)(iVar1 + 0x28) = 0;
        }
        else {
          iVar3 = FUN_00411f60(param_1,param_2);
          *(int *)(iVar1 + 0x28) = iVar3;
        }
      }
    }
  }
LAB_004ccfdc:
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



void FUN_004cd000(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar4 = (int *)*piVar1;
    if ((((piVar4 != (int *)0x0) && (cVar2 = FUN_004d7000(), cVar2 == '\0')) &&
        (iVar3 = (**(code **)(*piVar4 + 0x170))(), *(char *)(iVar3 + 4) == '\x1e')) &&
       (iVar3 = (**(code **)(*piVar4 + 0x154))(), iVar3 != 0)) {
      piVar4 = (int *)(**(code **)(*piVar4 + 0x154))();
      piVar5 = (int *)(**(code **)(*piVar4 + 0x9c))();
      (**(code **)(*piVar5 + 4))(piVar4);
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cd090(void)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  
  FUN_00496ea0(in_ECX);
  for (piVar1 = (int *)(in_ECX + 0x48); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar2 + 0x154))();
      if ((iVar4 == 0) || (cVar3 = FUN_004d7000(), cVar3 != '\0')) {
        if ((((uint)piVar2[2] >> 0xb & 1) == 0) && (((uint)piVar2[2] >> 5 & 1) == 0)) {
          uVar5 = FUN_00440c80(in_ECX,0);
          ModelLoader_QueueReference(piVar2,uVar5);
        }
      }
      else if ((((uint)piVar2[2] >> 0xb & 1) != 0) || (((uint)piVar2[2] >> 5 & 1) != 0)) {
        (**(code **)(*piVar2 + 0x150))(0);
      }
    }
  }
  FUN_00496f50(in_ECX);
  return;
}



void FUN_004cd140(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5238;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a4669c;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a46654;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004cd1a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5268;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a466ac;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a46664;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004cd200(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b5298;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a466bc;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a46674;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004cd260(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b52c8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *in_ECX = &PTR_LAB_00a46684;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004cd2d0(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_00899ca0(param_1);
    }
  }
  if (in_ECX[0x19] == (in_ECX[0x1a] & 0x3fffffffU)) {
    FUN_008a6ee0(in_ECX + 0x18,4);
  }
  *(undefined4 *)(in_ECX[0x18] + in_ECX[0x19] * 4) = param_1;
  in_ECX[0x19] = in_ECX[0x19] + 1;
  return;
}



void FUN_004cd320(int param_1)

{
  int iVar1;
  int *in_ECX;
  
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      FUN_00899ca0(param_1);
    }
  }
  if (in_ECX[0x19] == (in_ECX[0x1a] & 0x3fffffffU)) {
    FUN_008a6ee0(in_ECX + 0x18,4);
  }
  *(int *)(in_ECX[0x18] + in_ECX[0x19] * 4) = param_1;
  in_ECX[0x19] = in_ECX[0x19] + 1;
  if (in_ECX != (int *)0x0) {
    iVar1 = (**(code **)(*in_ECX + 0x58))();
    if (iVar1 != 0) {
      if (param_1 != 0) {
        FUN_00899ce0(param_1 + 0x14);
        in_ECX[9] = param_1;
        return;
      }
      FUN_00899ce0(0);
    }
  }
  in_ECX[9] = param_1;
  return;
}



void FUN_004cd3b0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int in_ECX;
  uint uVar8;
  int *piVar9;
  int *unaff_FS_OFFSET;
  bool bVar10;
  int *local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined **local_1c;
  int *local_18;
  undefined2 local_14;
  ushort local_12;
  ushort local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b52f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = &PTR__scalar_deleting_destructor__00a4664c;
  local_14 = 0;
  local_e = 1;
  local_12 = 0;
  local_10 = 0;
  local_18 = (int *)0x0;
  local_4 = 0;
  FUN_004e4a10(0x32);
  local_e = 0x32;
  FUN_00496ea0(in_ECX);
  puVar3 = (uint *)(in_ECX + 0x48);
  while ((puVar3 != (uint *)0x0 &&
         ((puVar1 = (uint *)puVar3[1], puVar1 != (uint *)0x0 || (*puVar3 != 0))))) {
    uVar8 = *puVar3;
    bVar10 = (*(uint *)(uVar8 + 8) >> 0xe & 1) == 0;
    local_24 = uVar8;
    if (((*(uint *)(uVar8 + 8) >> 5 & 1) != 0) &&
       ((iVar7 = FUN_0046b680(0), iVar7 != 0 && (cVar5 = FUN_0044faa0(uVar6), cVar5 == '\0')))) {
      bVar10 = false;
    }
    iVar7 = FUN_0046b680(0xffffffff);
    if ((param_1 != iVar7) && ((*(uint *)(uVar8 + 8) >> 1 & 1) == 0)) {
      bVar10 = false;
    }
    puVar3 = puVar1;
    if (((((*(byte *)(in_ECX + 0x24) & 1) != 0) || (cVar5 = FUN_004db4a0(), cVar5 == '\0')) ||
        ((*(uint *)(in_ECX + 8) & 0x400) != 0)) && (bVar10)) {
      FUN_004baca0(&local_24);
    }
  }
  FUN_00496f50(in_ECX);
  FUN_00521be0();
  piVar4 = local_18;
  uVar6 = (uint)local_10;
  local_28 = 0;
  local_24 = uVar6;
  if (uVar6 != 0) {
    local_2c = local_18;
    do {
      piVar9 = (int *)*local_2c;
      uVar8 = local_28 + 1;
      local_20 = uVar8;
      if ((int)uVar8 < (int)uVar6) {
        do {
          piVar2 = (int *)piVar4[uVar8];
          cVar5 = (**(code **)(*piVar2 + 0x34))(piVar9);
          if (cVar5 != '\0') {
            if (local_28 < local_12) {
              if (*local_2c == 0) goto LAB_004cd545;
            }
            else {
              local_12 = (short)local_28 + 1;
LAB_004cd545:
              local_10 = local_10 + 1;
            }
            *local_2c = (int)piVar2;
            if (uVar8 < local_12) {
              if (piVar9 == (int *)0x0) {
                if (piVar4[uVar8] != 0) {
                  local_10 = local_10 - 1;
                }
              }
              else if (piVar4[uVar8] == 0) {
                local_10 = local_10 + 1;
              }
            }
            else {
              local_12 = (short)uVar8 + 1;
              if (piVar9 != (int *)0x0) {
                local_10 = local_10 + 1;
              }
            }
            piVar4[uVar8] = (int)piVar9;
            piVar9 = piVar2;
          }
          uVar8 = uVar8 + 1;
          uVar6 = local_24;
        } while ((int)uVar8 < (int)local_24);
      }
      local_2c = local_2c + 1;
      local_28 = local_20;
    } while ((int)local_20 < (int)uVar6);
  }
  iVar7 = 0;
  if (0 < (int)uVar6) {
    do {
      if (piVar4[iVar7] != 0) {
        FUN_0046b340(param_1);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)uVar6);
  }
  FUN_00401f20(piVar4);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_004cd600(int param_1)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *in_ECX;
  int local_c;
  
  cVar3 = FUN_004511c0();
  if (cVar3 == '0') {
    local_c = 0;
    cVar3 = FUN_0044faa0();
    if (cVar3 != '\0') {
      local_c = *(int *)(param_1 + 0x25c);
    }
    FUN_00451210(in_ECX);
    do {
      iVar5 = FUN_004510b0();
      if (0x4c4c5546 < iVar5) {
        if (iVar5 < 0x50534559) {
          if (iVar5 != 0x50534558) {
            if (0x4d495458 < iVar5) {
              if (iVar5 < 0x4e535059) {
                if (((iVar5 == 0x4e535058) || (iVar5 == 0x4d4c4358)) || (iVar5 == 0x4d545258))
                goto LAB_004cd923;
              }
              else if (iVar5 == 0x4e574f58) goto LAB_004cd923;
              goto LAB_004cd92d;
            }
            if (iVar5 != 0x4d495458) {
              if (iVar5 < 0x4d434359) {
                if (((iVar5 == 0x4d434358) || (iVar5 == 0x4c4f5358)) || (iVar5 == 0x4c535058))
                goto LAB_004cd923;
              }
              else if (iVar5 == 0x4d434c58) goto LAB_004cd923;
              goto LAB_004cd92d;
            }
          }
        }
        else if (iVar5 < 0x544d4359) {
          if (iVar5 != 0x544d4358) {
            if (iVar5 < 0x54434159) {
              if (((iVar5 == 0x54434158) || (iVar5 == 0x524c4358)) || (iVar5 == 0x53524858))
              goto LAB_004cd923;
            }
            else if (iVar5 == 0x544c4858) goto LAB_004cd923;
            goto LAB_004cd92d;
          }
        }
        else if (((iVar5 != 0x544e4358) && (iVar5 != 0x54574358)) && (iVar5 != 0x574c4358))
        goto LAB_004cd92d;
        goto LAB_004cd923;
      }
      if (iVar5 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          FUN_0046c7a0(0,param_1);
        }
        else {
          FUN_0046c7a0(in_ECX + 6,param_1);
        }
        goto LAB_004cd92d;
      }
      if (iVar5 < 0x45535559) {
        if (iVar5 == 0x45535558) goto LAB_004cd923;
        if (iVar5 < 0x43524d59) {
          if (iVar5 == 0x43524d58) goto LAB_004cd923;
          if (iVar5 < 0x434c4359) {
            if (iVar5 == 0x434c4358) {
              iVar5 = FUN_004c98a0();
              if (iVar5 != 0) {
                FUN_00450c20(iVar5,8);
              }
            }
            else if (iVar5 == 0x41544144) {
              pbVar1 = (byte *)(in_ECX + 9);
              FUN_00450c20(pbVar1,1);
              bVar2 = *pbVar1;
              if ((char)bVar2 < 0x100) {
                if ((bVar2 & 1) == 0) {
                  *pbVar1 = bVar2 | 2;
                }
                if (((*pbVar1 & 1) != 0) && ((char)*pbVar1 < '\0')) {
                  FUN_00423ff0(0);
                }
                if (*(char *)(DAT_00b33a98 + 0xcd1) == '\0') {
                  *pbVar1 = *pbVar1 & 0xbf;
                }
              }
              else {
                *pbVar1 = bVar2 | 1;
                puVar6 = (undefined1 *)in_ECX[7];
                if (puVar6 == (undefined1 *)0x0) {
                  puVar6 = &DAT_00a2f7ec;
                }
                FUN_004a7a60("File \'%s\' contains corrupt data for cell \'%s\' (%08X).",
                             param_1 + 0x1c,puVar6,in_ECX[3]);
              }
              FUN_004ca710();
              if (((*pbVar1 & 1) != 0) && (local_c != 0)) {
                FUN_004c9d30(local_c);
              }
            }
            else if (iVar5 == 0x424c4758) goto LAB_004cd923;
          }
          else if (iVar5 == 0x434f4c58) goto LAB_004cd923;
        }
        else if (iVar5 < 0x44494446) {
          if (iVar5 == 0x44494445) {
            FUN_00450c20(&stack0xffffffec,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
          }
          else if ((iVar5 == 0x44455358) || (iVar5 == 0x44475258)) goto LAB_004cd923;
        }
        else if (iVar5 == 0x444f4c58) goto LAB_004cd923;
      }
      else {
        if (iVar5 < 0x4b524d59) {
          if (iVar5 != 0x4b524d58) {
            if (iVar5 < 0x49435059) {
              if (((iVar5 == 0x49435058) || (iVar5 == 0x47484358)) || (iVar5 == 0x47525458))
              goto LAB_004cd923;
            }
            else if (iVar5 == 0x4b4e5258) goto LAB_004cd923;
            goto LAB_004cd92d;
          }
        }
        else if ((iVar5 != 0x4c444558) && (iVar5 != 0x4c455458)) {
          if ((iVar5 == 0x4c4c4358) && (iVar5 = FUN_004c98b0(), iVar5 != 0)) {
            FUN_00450c20(iVar5,0x28);
          }
          goto LAB_004cd92d;
        }
LAB_004cd923:
        FUN_004259e0(param_1,in_ECX);
      }
LAB_004cd92d:
      cVar3 = FUN_0044fea0();
    } while (cVar3 != '\0');
    FUN_0046ab80(0);
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



void FUN_004cd960(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *in_ECX;
  undefined4 uVar11;
  bool bVar12;
  int iStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar8 = in_ECX + 0x12;
  piVar2 = (int *)0x0;
  while ((piVar4 = piVar8, piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))))) {
    piVar8 = (int *)*piVar4;
    if (((uint)piVar8[2] >> 3 & 1) == 0) {
      (**(code **)(*piVar8 + 0x6c))();
      FUN_004637c0(piVar8);
    }
    if (((*(byte *)(in_ECX + 9) & 1) != 0) &&
       (iVar7 = (**(code **)(*piVar8 + 0x170))(), iVar7 == DAT_00b35eb8)) {
      FUN_00420c60((float)piVar8[10] * -1.0);
    }
    if (((in_ECX[2] & 0x400U) == 0) && (piVar8 = (int *)FUN_006ecc80(), piVar8 != in_ECX)) {
      if (piVar2 == (int *)0x0) {
        piVar8 = in_ECX + 0x12;
      }
      else {
        piVar8 = (int *)piVar2[1];
      }
    }
    else {
      piVar8 = (int *)piVar4[1];
      piVar2 = piVar4;
    }
  }
  cVar6 = FUN_0045a500();
  if (cVar6 != '\0') {
    FUN_00464910(in_ECX);
    uVar1 = *(uint *)(DAT_00b33b00 + 0x18);
    if (((uVar1 >> 8 & 1) == 0) && (*(int *)(DAT_00b33b00 + 0x1c) != 0)) {
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x80;
      FUN_0045fda0(0,0,0);
      FUN_00461030(0);
      if ((uVar1 >> 7 & 1) == 0) {
        *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xffffff7f;
      }
      else {
        *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x80;
      }
    }
  }
  uVar10 = DAT_00b34d88;
  uVar5 = DAT_00b06b18;
  DAT_00b06b18 = uVar5;
  DAT_00b34d88 = uVar10;
  if (((uint)in_ECX[2] >> 3 & 1) == 0) {
    uVar11 = 0;
    DAT_00b06b18 = 1;
    DAT_00b34d88 = 0;
    FUN_00426270(in_ECX);
    if ((*(byte *)(in_ECX + 9) & 1) == 0) {
      iVar7 = FUN_0041e7b0();
      if (iVar7 != 0) {
        if (((*(byte *)(in_ECX + 9) & 1) == 0) &&
           (piVar2 = (int *)in_ECX[0x14], piVar2 != (int *)0x0)) {
          iStack_10 = piVar2[3];
          puStack_c = (undefined1 *)(**(code **)(*piVar2 + 0xd4))();
        }
        else {
          iStack_10 = 0;
          puStack_c = &DAT_00a3bc88;
        }
        if (((*(byte *)(in_ECX + 9) & 1) == 0) && (in_ECX[0xf] != 0)) {
          uStack_8 = *(undefined4 *)(in_ECX[0xf] + 4);
        }
        else {
          uStack_8 = 0;
        }
        if (((*(byte *)(in_ECX + 9) & 1) == 0) && ((undefined4 *)in_ECX[0xf] != (undefined4 *)0x0))
        {
          uVar11 = *(undefined4 *)in_ECX[0xf];
        }
        iVar7 = in_ECX[3];
        uVar9 = (**(code **)(*in_ECX + 0xd4))();
        FUN_004a7a60("Removing ownership data on exterior cell \'%s\' (%08X) at ( %i, %i ) in worldspace \'%s\' (%08X)."
                     ,uVar9,iVar7,uVar11,uStack_8,puStack_c,iStack_10);
        FUN_00423660(0);
        FUN_004237e0(0xffffffff);
        FUN_00423720(0);
      }
      if ((*(byte *)(in_ECX + 9) & 1) == 0) {
        FUN_00401f20(in_ECX[7]);
        in_ECX[7] = 0;
        *(undefined2 *)((int)in_ECX + 0x22) = 0;
        *(undefined2 *)(in_ECX + 8) = 0;
      }
    }
    uVar11 = 0;
    FUN_0046ab80(1);
    bVar12 = DAT_00b34d88 != 0;
    DAT_00b06b18 = uVar5;
    DAT_00b34d88 = uVar10;
    if (bVar12) {
      if ((*(byte *)(in_ECX + 9) & 1) == 0) {
        piVar2 = (int *)in_ECX[0x14];
        puVar3 = (undefined4 *)in_ECX[0xf];
        if (piVar2 == (int *)0x0) {
          if (puVar3 == (undefined4 *)0x0) {
            uVar11 = 0;
            uVar9 = 0;
          }
          else {
            uVar11 = puVar3[1];
            uVar9 = *puVar3;
          }
          uVar10 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3],uVar9,uVar11);
          FUN_004a7a60("Errors were encountered during InitItem for exterior cell:\n\nCell \'%s\' (%08X) at (%i, %i) in UNKNOWN world\n\nCheck Warnings for details."
                       ,uVar10);
          return;
        }
        if (puVar3 == (undefined4 *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar11 = puVar3[1];
          uVar9 = *puVar3;
        }
        iVar7 = in_ECX[3];
        uVar10 = (**(code **)(*piVar2 + 0xd4))(piVar2[3]);
        uVar10 = (**(code **)(*in_ECX + 0xd4))(iVar7,uVar9,uVar11,uVar10);
        FUN_004a7a60("Errors were encountered during InitItem for exterior cell:\n\nCell \'%s\' (%08X) at (%i, %i) in world %s (%08X)\n\nCheck Warnings for details."
                     ,uVar10);
        return;
      }
      uVar10 = (**(code **)(*in_ECX + 0xd4))(in_ECX[3]);
      FUN_004a7a60("Errors were encountered during InitItem for interior cell:\n\nCell \'%s\' (%08X)\n\nCheck Warnings for details."
                   ,uVar10);
    }
  }
  return;
}



undefined1 FUN_004cdec0(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  
  uVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != DAT_00b05e20) {
    return 0;
  }
  switch(param_1[3]) {
  case 0:
    uVar1 = FUN_0046b510(param_1);
    return uVar1;
  case 1:
    if ((*(byte *)(in_ECX + 9) & 1) == 0) {
      uVar2 = FUN_0046b250(param_1[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      iVar3 = FUN_009832e6(uVar2);
      if (iVar3 == 0) {
        return 0;
      }
      uVar1 = (**(code **)(*in_ECX + 0x34))(iVar3);
      return uVar1;
    }
    break;
  case 2:
    if ((*(byte *)(in_ECX + 9) & 1) == 0) {
      return 0;
    }
LAB_004cdefc:
    uVar4 = FUN_004ca5f0();
    goto LAB_004cdf01;
  case 3:
    if ((*(byte *)(in_ECX + 9) & 1) == 0) {
      return 0;
    }
    uVar4 = FUN_004ca640();
LAB_004cdf01:
    if ((uint)param_1[2] <= uVar4) {
      return 0;
    }
    break;
  case 4:
    if (((*(byte *)(in_ECX + 9) & 1) == 0) && ((in_ECX[2] & 0x400U) == 0)) goto LAB_004cdefc;
    break;
  case 5:
    if (((*(byte *)(in_ECX + 9) & 1) == 0) && ((in_ECX[2] & 0x400U) == 0)) {
      uVar4 = FUN_004ca640();
      goto LAB_004cdf01;
    }
    break;
  case 6:
  case 8:
  case 9:
  case 10:
    uVar2 = FUN_0046b250(param_1[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    iVar3 = FUN_009832e6(uVar2);
    if (iVar3 != 0) {
      uVar1 = (**(code **)(*in_ECX + 0x34))(iVar3);
      return uVar1;
    }
    goto switchD_004cdee1_default;
  case 7:
    break;
  default:
    goto switchD_004cdee1_default;
  }
  uVar1 = 1;
switchD_004cdee1_default:
  return uVar1;
}



undefined1 FUN_004ce0a0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  uVar2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != DAT_00b05e20) {
    return 0;
  }
  piVar5 = (int *)0x0;
  bVar1 = *(byte *)(in_ECX + 0x24) & 1;
  if (bVar1 == 0) {
    piVar5 = *(int **)(in_ECX + 0x50);
  }
  switch(param_1[3]) {
  case 0:
    if ((char)param_2 == '\0') {
      return 0;
    }
    if ((*(byte *)(in_ECX + 0x24) & 1) != 0) {
      uVar2 = FUN_0046b910(param_1,param_2,param_3);
      return uVar2;
    }
    uVar2 = (**(code **)(*piVar5 + 0xbc))(param_1,param_2,param_3);
    return uVar2;
  case 1:
    if (bVar1 != 0) {
      return 0;
    }
    cVar3 = FUN_0046af50(param_1[2]);
    if (cVar3 == '\0') {
      return 0;
    }
    if ((char)param_2 == '\0') {
      if ((*(uint *)(in_ECX + 8) & 0x400) == 0) {
        return 0;
      }
      return 1;
    }
    goto LAB_004ce178;
  case 2:
  case 4:
    if ((*(uint *)(in_ECX + 8) & 0x400) != 0) {
      return 0;
    }
    if ((char)param_2 == '\0') {
      return 0;
    }
    iVar4 = FUN_004ca5f0();
    break;
  case 3:
  case 5:
    if ((*(uint *)(in_ECX + 8) & 0x400) != 0) {
      return 0;
    }
    iVar4 = FUN_004ca640();
    break;
  default:
    goto switchD_004ce0d9_default;
  }
  if (param_1[2] == iVar4) {
LAB_004ce178:
    uVar2 = 1;
  }
switchD_004ce0d9_default:
  return uVar2;
}



void FUN_004ce320(void)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  undefined4 *local_4;
  
  iVar1 = in_ECX[0x15];
  *(undefined1 *)((int)in_ECX + 0x26) = 1;
  if (iVar1 != 0) {
    if ((((*(int **)(iVar1 + 0x1c) != (int *)0x0) &&
         (local_4 = in_ECX, (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&local_4,iVar1),
         local_4 != (undefined4 *)0x0)) && (LVar3 = InterlockedDecrement(local_4 + 1), LVar3 == 0))
       && (local_4 != (undefined4 *)0x0)) {
      (**(code **)*local_4)(1);
    }
    FUN_00477ef0();
    puVar2 = (undefined4 *)in_ECX[0x15];
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      in_ECX[0x15] = 0;
    }
    FUN_004240c0(0);
  }
  *(undefined1 *)((int)in_ECX + 0x26) = 0;
  return;
}



undefined4 FUN_004ce3c0(void)

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
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(byte *)(in_ECX + 0x24) & 1) == 0) && ((*(uint *)(in_ECX + 8) & 0x400) == 0)) {
    if (*(int *)(in_ECX + 0x40) == 0) {
      iVar2 = FUN_00401f00(0x28,uVar1);
      local_4 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004c4c00();
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x40) = uVar3;
      FUN_004bfdc0(in_ECX);
    }
    uVar3 = *(undefined4 *)(in_ECX + 0x40);
    *unaff_FS_OFFSET = local_c;
    return uVar3;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_004ce460(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  
  *param_2 = 0;
  if (((param_1 != 0) && ((*(byte *)(param_1 + 0x24) & 1) == 0)) && (DAT_00b350d8 != 0)) {
    DAT_00b3ff00 = 1;
    DAT_00b2752c = 0x32;
    DAT_00b27530 = 0;
    iVar1 = FUN_0072a9b0(0x40,0x40,DAT_00b3f928,&DAT_00b27534);
    *param_2 = iVar1;
    DAT_00b3ff00 = 0;
    DAT_00b27530 = 1;
    FUN_00424440(1,*param_2,param_3);
    FUN_00977c50(3);
    piVar2 = (int *)(**(code **)(**(int **)(*param_2 + 0x24) + 0x14))();
    (**(code **)(*piVar2 + 0x4c))(piVar2,0,*param_3,0,0);
    param_3 = (int *)*param_3;
    iVar1 = (**(code **)(*(int *)*param_2 + 0x50))();
    _memset((void *)param_3[1],0,iVar1 * *param_3);
    FUN_00977c50(2);
    return 1;
  }
  return 0;
}



void FUN_004ce540(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int local_4;
  
  iVar2 = *param_3;
  local_4 = 0;
  if (iVar2 == 0) {
    uVar1 = 0;
    if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
      uVar1 = *(undefined4 *)(in_ECX + 0x50);
    }
    iVar2 = FUN_00447740(param_1,param_2,uVar1,0);
    if (iVar2 == 0) {
      return;
    }
    FUN_0041f9f0(&local_4,param_3);
    if (local_4 == 0) {
      FUN_004ce460(iVar2,&local_4,param_3);
    }
    iVar2 = *param_3;
    if (iVar2 == 0) {
      return;
    }
  }
  if (*(int *)(iVar2 + 4) == 0) {
    FUN_00977c50(3);
    piVar3 = (int *)(**(code **)(**(int **)(local_4 + 0x24) + 0x14))();
    (**(code **)(*piVar3 + 0x4c))(piVar3,0,*param_3,0,0);
    FUN_00977c50(2);
  }
  iVar2 = *(int *)(*param_3 + 4);
  if (*(char *)(iVar2 + param_4) == '\0') {
    *(undefined1 *)(iVar2 + param_4) = param_5;
    return;
  }
  *(undefined1 *)(iVar2 + param_4) = 0xff;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004ce76d) */

void FUN_004ce610(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  uint uVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0_00;
  float10 fVar11;
  float10 fVar12;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 fVar13;
  uint in_stack_00000010;
  undefined4 *puVar14;
  float *pfVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  int *local_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  uint uStack_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  uint uStack_88;
  int iStack_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  float local_50;
  float local_4c;
  
  if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
    FUN_0055fdf0();
    local_bc = (int *)0x0;
    local_b0 = 0;
    local_74 = 0;
    local_78 = 0;
    local_90 = 0;
    local_8c = 0;
    local_94 = 0;
    local_6c = 0;
    local_80 = 0;
    local_70 = 0;
    FUN_0041f9f0(&local_bc,&local_b0);
    if ((in_stack_00000010 == 0) || (uVar8 = in_stack_00000010, 0x400 < in_stack_00000010)) {
      uVar8 = 300;
    }
    if (local_bc == (int *)0x0) {
      FUN_004ce460();
    }
    iVar2 = FUN_004ce3c0();
    if (iVar2 != 0) {
      uVar17 = 0;
      puVar16 = &stack0x00000004;
      pfVar15 = &local_50;
      FUN_004ce3c0(pfVar15,puVar16,0);
      cVar1 = FUN_004c3030(pfVar15,puVar16,uVar17);
      if (cVar1 != '\0') {
        local_a4 = local_50 * 0.015625;
        local_a0 = local_4c * 0.015625;
        if (local_bc != (int *)0x0) {
          if (*(int *)(local_b0 + 4) == 0) {
            FUN_00977c50(3);
            piVar3 = (int *)(**(code **)(*(int *)local_bc[9] + 0x14))();
            (**(code **)(*piVar3 + 0x4c))(piVar3,0,local_b0,0,0);
            FUN_00977c50(2);
          }
          local_7c = *(int *)(local_b0 + 4);
          iVar2 = (**(code **)(*local_bc + 0x50))();
          fStack_9c = (float)(uVar8 >> 6);
          uStack_a8 = uVar8 >> 6;
          iStack_84 = iVar2;
          iVar4 = FUN_009828c0();
          fVar9 = (float10)iVar4;
          fVar10 = extraout_ST0 + extraout_ST1;
          dStack_60 = (double)fVar10;
          if (fVar9 < fVar10) {
            fVar12 = extraout_ST1;
            fVar13 = extraout_ST0;
            iStack_b4 = iVar4;
            uStack_88 = FUN_009828c0();
            fVar9 = extraout_ST0_00 + fVar9;
            dStack_58 = (double)fVar9;
            iStack_b8 = (iVar4 + 0x40) * iVar2 + -0x40;
            iVar7 = iVar4 * iVar2 + 0x40;
            iStack_ac = (iVar4 + -0x40) * iVar2 + -0x40;
            fVar11 = extraout_ST1_00;
            do {
              if ((float10)(int)uStack_88 < fVar9) {
                uStack_98 = uStack_88;
                dStack_68 = (double)((fVar10 - fVar12) * (fVar10 - fVar12));
                uVar8 = uStack_88;
                do {
                  fVar10 = (float10)FUN_00982c30();
                  if ((float)fVar10 <= fStack_9c) {
                    iVar2 = iVar7 + -0x40 + uVar8;
                    fVar9 = (float10)FUN_0047e0b0(0x425c0000);
                    uStack_a8 = (uint)ROUND(((float10)255.0 - fVar9) -
                                            ((float10)(float)fVar10 / (float10)fStack_9c) *
                                            (float10)60.0);
                    if (iStack_b4 < 0x40) {
                      if (iStack_b4 < 0) {
LAB_004ce931:
                        if ((int)uVar8 < 0) {
                          uVar6 = uStack_a8 & 0xff;
                          iVar2 = iStack_b8 + 0x80 + uVar8;
                          puVar14 = &local_70;
                          iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                          iVar4 = iVar4 + -1;
                          goto LAB_004cea14;
                        }
                        if (0x3f < (int)uVar8) {
                          uVar6 = uStack_a8 & 0xff;
                          iVar2 = iStack_b8 + uVar8;
                          puVar14 = &local_80;
                          iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                          iVar4 = iVar4 + -1;
                          iVar5 = FUN_004c9a80(iVar4);
                          iVar5 = iVar5 + 1;
                          goto LAB_004cea1d;
                        }
                      }
                      else {
                        if (uStack_98 < 0x40) {
                          if (*(char *)(local_7c + iVar2) == '\0') {
                            *(undefined1 *)(local_7c + iVar2) = (undefined1)uStack_a8;
                          }
                          else {
                            *(undefined1 *)(local_7c + iVar2) = 0xff;
                          }
                          goto LAB_004cea23;
                        }
LAB_004ce92d:
                        if (iStack_b4 < 0) goto LAB_004ce931;
                      }
                      if (iStack_b4 < 0x40) {
                        if (iStack_b4 < 0) {
                          uVar6 = uStack_a8 & 0xff;
                          iVar2 = iStack_b8 + 0x40 + uVar8;
                          puVar14 = &local_78;
                          iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                          iVar4 = iVar4 + -1;
                          iVar5 = FUN_004c9a80(iVar4);
                        }
                        else {
                          if ((int)uVar8 < 0x40) {
                            if ((int)uVar8 < 0) {
                              uVar6 = uStack_a8 & 0xff;
                              iVar2 = iVar7 + uVar8;
                              puVar14 = &local_8c;
                              iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                              goto LAB_004cea14;
                            }
                            goto LAB_004cea23;
                          }
                          uVar6 = uStack_a8 & 0xff;
                          iVar2 = iVar7 + -0x80 + uVar8;
                          puVar14 = &local_90;
                          iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                          iVar5 = FUN_004c9a80(iVar4);
                          iVar5 = iVar5 + 1;
                        }
                      }
                      else {
                        uVar6 = uStack_a8 & 0xff;
                        iVar2 = iStack_ac + 0x40 + uVar8;
                        puVar14 = &local_74;
                        iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                        iVar4 = iVar4 + 1;
                        iVar5 = FUN_004c9a80(iVar4);
                      }
                    }
                    else if ((int)uVar8 < 0) {
                      uVar6 = uStack_a8 & 0xff;
                      iVar2 = iStack_ac + 0x80 + uVar8;
                      puVar14 = &local_6c;
                      iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                      iVar4 = iVar4 + 1;
LAB_004cea14:
                      iVar5 = FUN_004c9a80(iVar4);
                      iVar5 = iVar5 + -1;
                    }
                    else {
                      if ((int)uVar8 < 0x40) goto LAB_004ce92d;
                      uVar6 = uStack_a8 & 0xff;
                      iVar2 = iStack_ac + uVar8;
                      puVar14 = &local_94;
                      iVar4 = FUN_004c9aa0(puVar14,iVar2,uVar6);
                      iVar4 = iVar4 + 1;
                      iVar5 = FUN_004c9a80(iVar4);
                      iVar5 = iVar5 + 1;
                    }
LAB_004cea1d:
                    FUN_004ce540(iVar5,iVar4,puVar14,iVar2,uVar6);
                  }
LAB_004cea23:
                  uStack_98 = uStack_98 + 1;
                  uVar8 = uVar8 + 1;
                  fVar9 = (float10)dStack_58;
                } while ((float10)(int)uVar8 < fVar9);
                fVar11 = (float10)dStack_60;
                iVar2 = iStack_84;
                fVar13 = (float10)local_a0;
              }
              fVar10 = fVar13;
              iStack_b4 = iStack_b4 + 1;
              fVar12 = (float10)iStack_b4;
              iStack_ac = iStack_ac + iVar2;
              iStack_b8 = iStack_b8 + iVar2;
              iVar7 = iVar7 + iVar2;
              fVar13 = fVar10;
              if (fVar11 <= fVar12) {
                return;
              }
            } while( true );
          }
        }
      }
    }
  }
  return;
}



void FUN_004cead0(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined4 uVar5;
  undefined *puVar6;
  
  if ((param_1 != (int *)0x0) && (param_1[0xf] != 0)) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 == '\0') {
      if (((int *)param_1[7] == (int *)0x0) ||
         (cVar1 = (**(code **)(*(int *)param_1[7] + 0xf4))(), cVar1 == '\0')) {
        uVar3 = 0;
        if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
          uVar3 = FUN_004c9be0(param_1);
        }
        puVar6 = &DAT_00a7d0ec;
        (**(code **)(*param_1 + 0x154))(&DAT_00a7d0ec);
        iVar2 = FUN_006ff9c0(puVar6);
        if (((iVar2 == 0) || ((*(byte *)(iVar2 + 0xc) & 1) == 0)) &&
           ((iVar2 = (**(code **)(*param_1 + 0x170))(), iVar2 == 0 ||
            (iVar2 = (**(code **)(*param_1 + 0x170))(), *(char *)(iVar2 + 4) != '\x1e')))) {
          uVar5 = 2;
        }
        else {
          uVar5 = 3;
        }
        piVar4 = (int *)FUN_00441800(uVar3,uVar5);
      }
      else {
        piVar4 = (int *)FUN_004417d0(1);
      }
    }
    else {
      iVar2 = *(int *)(in_ECX + 0x54);
      if ((iVar2 == 0) || (*(short *)(iVar2 + 0xb6) == 0)) {
        piVar4 = (int *)0x0;
      }
      else {
        piVar4 = (int *)**(undefined4 **)(iVar2 + 0xb0);
      }
      iVar2 = (**(code **)(*param_1 + 0x380))();
      if ((iVar2 != 0) && (iVar2 = (**(code **)(*param_1 + 0x18c))(), iVar2 != 0)) {
        return;
      }
      iVar2 = param_1[0xf];
      if (iVar2 != 0) {
        cVar1 = FUN_008aa350(&DAT_00b3f9a8);
        if (cVar1 != '\0') {
          *(undefined4 *)(iVar2 + 0x54) = *(undefined4 *)(iVar2 + 0x88);
          *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x8c);
          *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x90);
        }
      }
    }
    if (piVar4 != (int *)0x0) {
      if (param_1 == DAT_00b333c4) {
        iVar2 = *piVar4;
        uVar3 = FUN_00660110(0);
        (**(code **)(iVar2 + 0x84))(uVar3);
        FUN_00660110(0);
        FUN_00707610();
        FUN_00660110(0);
        FUN_00707980();
        iVar2 = *piVar4;
        uVar5 = 1;
        uVar3 = FUN_00660110(1);
        (**(code **)(iVar2 + 0x84))(uVar3,uVar5);
        FUN_00660110(1);
        FUN_00707610();
        FUN_00660110(1);
        FUN_00707980();
        return;
      }
      (**(code **)(*piVar4 + 0x84))(param_1[0xf],1);
      FUN_00707610();
      FUN_00707980();
    }
  }
  return;
}



void FUN_004cecd0(int *param_1)

{
  char cVar1;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    FUN_00496ea0(in_ECX);
    FUN_0065c620(param_1);
    FUN_00496f50(in_ECX);
    if ((in_ECX[2] & 0x400U) == 0) {
      (**(code **)(*param_1 + 0x194))(0);
      if (((uint)param_1[2] >> 0xe & 1) == 0) {
        cVar1 = FUN_004db4a0();
        if ((cVar1 == '\0') && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
          (**(code **)(*in_ECX + 0x90))(1);
        }
      }
    }
    else {
      FUN_004247b0(0);
      if (((*(byte *)(in_ECX + 9) & 1) == 0) && (in_ECX[0x14] != 0)) {
        FUN_004f01f0(param_1);
        return;
      }
    }
  }
  return;
}



void FUN_004ced70(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int in_ECX;
  code *pcVar6;
  undefined4 uVar7;
  
  FUN_00496ea0(in_ECX);
  piVar1 = (int *)(in_ECX + 0x48);
  do {
    while( true ) {
      if ((piVar1 == (int *)0x0) || ((*(int *)(in_ECX + 0x4c) == 0 && (*piVar1 == 0)))) {
        FUN_00496f50(in_ECX);
        return;
      }
      piVar2 = (int *)*piVar1;
      if (piVar2 != DAT_00b333c4) break;
      piVar3 = *(int **)(in_ECX + 0x4c);
      if (piVar3 == (int *)0x0) {
        *piVar1 = 0;
      }
      else {
        *(int *)(in_ECX + 0x4c) = piVar3[1];
        *piVar1 = *piVar3;
        FUN_00401f20(piVar3);
      }
      (**(code **)(*piVar2 + 0x194))(0);
    }
    bVar4 = false;
    if ((((*(uint *)(in_ECX + 8) & 0x400) != 0) && (DAT_00b33a98 != 0)) &&
       (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
      bVar4 = true;
    }
    cVar5 = FUN_004db4a0();
    if (((cVar5 == '\0') || ((*(byte *)(in_ECX + 0x24) & 1) != 0)) || (bVar4)) {
      (**(code **)(*piVar2 + 0x194))(0);
LAB_004cee09:
      pcVar6 = *(code **)(*piVar2 + 0x10);
      uVar7 = 1;
LAB_004cee10:
      (*pcVar6)(uVar7);
    }
    else {
      if ((*(uint *)(in_ECX + 8) & 0x400) == 0) {
        pcVar6 = *(code **)(*piVar2 + 0x194);
        uVar7 = 0;
        goto LAB_004cee10;
      }
      if (piVar2 != (int *)0x0) goto LAB_004cee09;
    }
    piVar2 = *(int **)(in_ECX + 0x4c);
    if (piVar2 == (int *)0x0) {
      *piVar1 = 0;
    }
    else {
      *(int *)(in_ECX + 0x4c) = piVar2[1];
      *piVar1 = *piVar2;
      FUN_00401f20(piVar2);
    }
  } while( true );
}



void FUN_004cee90(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int in_ECX;
  float10 fVar9;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  FUN_00496ea0(in_ECX);
  local_1c = (int *)0x0;
  piVar1 = (int *)(in_ECX + 0x48);
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = (int *)0x0;
  bVar3 = false;
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      FUN_00496f50(in_ECX);
      if (((local_1c != (int *)0x0) || (local_1c = local_18, local_18 != (int *)0x0)) ||
         ((!bVar3 &&
          ((local_1c = local_14, local_14 != (int *)0x0 ||
           (local_1c = local_10, local_10 != (int *)0x0)))))) {
        puVar7 = (undefined4 *)(**(code **)(*local_1c + 0x174))();
        *param_1 = *puVar7;
        param_1[1] = puVar7[1];
        param_1[2] = puVar7[2];
        *param_2 = local_1c[8];
        param_2[1] = local_1c[9];
        param_2[2] = local_1c[10];
      }
      if (((*(byte *)(in_ECX + 0x24) & 1) == 0) && (iVar5 = FUN_004ce3c0(), iVar5 != 0)) {
        param_2 = (int *)0x0;
        FUN_004c5b50(param_1,&param_2);
        if ((*(byte *)(in_ECX + 0x24) >> 1 & 1) == 0) {
          fVar9 = (float10)-3.4028235e+38;
        }
        else {
          fVar9 = (float10)FUN_0041f870();
        }
        if ((float)param_2 < (float)fVar9) {
          param_2 = (int *)(float)fVar9;
        }
        if ((float)param_1[2] < (float)param_2) {
          param_1[2] = param_2;
          return;
        }
      }
      return;
    }
    piVar2 = (int *)*piVar1;
    if (((uint)piVar2[2] >> 5 & 1) == 0) {
      if ((local_18 == (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar2 + 0x170))(), iVar5 == DAT_00b35eac)) {
        if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
          uVar6 = (**(code **)(*piVar2 + 0x174))();
          cVar4 = FUN_004cc540(uVar6);
          if (cVar4 == '\0') goto LAB_004cef30;
        }
        local_18 = piVar2;
      }
LAB_004cef30:
      if ((local_1c == (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar2 + 0x170))(), iVar5 == DAT_00b35eb0)) {
        if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
          uVar6 = (**(code **)(*piVar2 + 0x174))();
          cVar4 = FUN_004cc540(uVar6);
          if (cVar4 == '\0') goto LAB_004cef6d;
        }
        local_1c = piVar2;
      }
LAB_004cef6d:
      if (((!bVar3) && (iVar5 = FUN_004d7630(), iVar5 != 0)) && (iVar5 = FUN_0042b410(), iVar5 != 0)
         ) {
        FUN_0042b410();
        iVar5 = FUN_004d7630();
        if (iVar5 != 0) {
          puVar7 = (undefined4 *)FUN_006899c0();
          uStack_c = *puVar7;
          uStack_8 = puVar7[1];
          uStack_4 = puVar7[2];
          if (((*(byte *)(in_ECX + 0x24) & 1) != 0) ||
             (cVar4 = FUN_004cc540(&uStack_c), cVar4 != '\0')) {
            *param_1 = uStack_c;
            param_1[1] = uStack_8;
            param_1[2] = uStack_4;
            piVar8 = (int *)FUN_0042b430();
            *param_2 = *piVar8;
            param_2[1] = piVar8[1];
            param_2[2] = piVar8[2];
            bVar3 = true;
          }
        }
      }
      if ((local_14 == (int *)0x0) &&
         (iVar5 = (**(code **)(*piVar2 + 0x170))(), *(char *)(iVar5 + 4) == '\x1c')) {
        if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
          uVar6 = (**(code **)(*piVar2 + 0x174))();
          cVar4 = FUN_004cc540(uVar6);
          if (cVar4 == '\0') goto LAB_004cf04c;
        }
        local_14 = piVar2;
      }
LAB_004cf04c:
      if ((*(byte *)(in_ECX + 0x24) & 1) == 0) {
        uVar6 = (**(code **)(*piVar2 + 0x174))();
        cVar4 = FUN_004cc540(uVar6);
        if (cVar4 == '\0') goto LAB_004cf06e;
      }
      local_10 = piVar2;
    }
LAB_004cf06e:
    piVar1 = (int *)piVar1[1];
  } while( true );
}



void FUN_004cf180(byte param_1)

{
  FUN_004cd140();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004cf1a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,int *param_7,int *param_8,int *param_9,int param_10,undefined4 param_11,
            undefined4 param_12)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  LONG LVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined2 *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puStack_144;
  int *local_140;
  int local_13c;
  int local_138;
  uint uStack_134;
  undefined4 local_130;
  int *local_12c;
  int *local_128;
  int iStack_124;
  int *piStack_120;
  undefined4 *puStack_11c;
  undefined1 auStack_118 [3];
  undefined1 uStack_115;
  undefined4 local_114;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5384;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_144;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffeac;
  *unaff_FS_OFFSET = (int)&local_c;
  local_128 = param_9;
  local_140 = param_7;
  local_12c = param_8;
  local_13c = param_10;
  if ((0.0 < _DAT_00b097c8) && (DAT_00b35c04 <= DAT_00b097d0)) {
    if ((param_8 != (int *)0x0) && (iVar6 = (**(code **)(*param_8 + 0x10))(uVar5), iVar6 != 0)) {
      DAT_00b35c04 = DAT_00b35c04 + 1;
    }
    local_138 = 0;
    local_4 = 0;
    if (param_7 != (int *)0x0) {
      local_114._0_1_ = 'T';
      local_114._1_1_ = 'e';
      local_114._2_1_ = 'x';
      local_114._3_1_ = 't';
      builtin_strncpy(local_110,"ures",5);
      puVar13 = (undefined2 *)(auStack_118 + 3);
      do {
        pcVar1 = (char *)((int)puVar13 + 1);
        puVar13 = (undefined2 *)((int)puVar13 + 1);
      } while (*pcVar1 != '\0');
      *puVar13 = 0x5c;
      piVar7 = param_7;
      do {
        iVar6 = *piVar7;
        piVar7 = (int *)((int)piVar7 + 1);
      } while ((char)iVar6 != '\0');
      piVar14 = (int *)(auStack_118 + 3);
      do {
        pcVar1 = (char *)((int)piVar14 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      } while (*pcVar1 != '\0');
      piVar12 = param_7;
      for (uVar5 = (uint)((int)piVar7 - (int)param_7) >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *piVar14 = *piVar12;
        piVar12 = piVar12 + 1;
        piVar14 = piVar14 + 1;
      }
      for (uVar5 = (int)piVar7 - (int)param_7 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(char *)piVar14 = (char)*piVar12;
        piVar12 = (int *)((int)piVar12 + 1);
        piVar14 = (int *)((int)piVar14 + 1);
      }
      uVar8 = FUN_00442890(&puStack_144,&local_114,0,0);
      local_4._0_1_ = 1;
      FUN_0055e2a0(uVar8);
      puVar10 = puStack_144;
      local_4 = (uint)local_4._1_3_ << 8;
      if (((puStack_144 != (undefined4 *)0x0) &&
          (LVar9 = InterlockedDecrement(puStack_144 + 1), LVar9 == 0)) &&
         (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
      if (local_138 != 0) {
        if ((param_8 != (int *)0x0) &&
           ((pcVar1 = (char *)param_8[2], pcVar1 == (char *)0x0 ||
            (((iVar6 = _strncmp(pcVar1,"Decal",5), iVar6 != 0 &&
              (iVar6 = _strncmp(pcVar1,"FaceGen",6), iVar6 != 0)) &&
             (iVar6 = _strncmp(pcVar1,"Bip01",5), iVar6 != 0)))))) {
          iVar6 = (**(code **)(*param_8 + 0x10))();
          piVar7 = local_128;
          if (iVar6 == 0) {
            iVar6 = (**(code **)(*param_8 + 8))();
            if (iVar6 != 0) {
              uVar5 = (uint)*(ushort *)((int)param_8 + 0xb6);
              uStack_134 = 0;
              if (uVar5 != 0) {
                do {
                  if (((uStack_134 < uVar5) &&
                      (iVar6 = *(int *)(param_8[0x2c] + uStack_134 * 4), iVar6 != 0)) &&
                     (cVar4 = FUN_004cf1a0(param_1,param_2,param_3,param_4,param_5,param_6,local_140
                                           ,iVar6,local_128,local_13c,param_11,param_12),
                     cVar4 == '\0')) {
                    local_4 = 0xffffffff;
                    FUN_007016a0();
                    uVar8 = 0;
                    goto LAB_004cf98b;
                  }
                  uVar5 = (uint)*(ushort *)((int)param_8 + 0xb6);
                  uStack_134 = uStack_134 + 1;
                } while (uStack_134 < uVar5);
              }
            }
          }
          else if (*local_128 < 1) {
            piVar14 = (int *)FUN_00707530(4);
            if ((piVar14 != (int *)0x0) && (param_8[0x2f] != 0)) {
              iVar6 = (**(code **)(*piVar14 + 0x54))();
              if ((iVar6 < 1) || (iVar6 = (**(code **)(*piVar14 + 0x54))(), 10 < iVar6)) {
                bVar2 = 0;
              }
              else {
                bVar2 = 1;
              }
              if ((-(uint)bVar2 & (uint)piVar14) != 0) {
                puVar10 = (undefined4 *)FUN_00401f00(0x4c);
                if (puVar10 == (undefined4 *)0x0) {
                  puVar10 = (undefined4 *)0x0;
                }
                else {
                  *puVar10 = 0;
                  puVar10[0x12] = 0;
                }
                puVar10[0x10] = 0;
                *(undefined1 *)(puVar10 + 0x11) = 0;
                puVar10[1] = 0;
                FUN_0075fa90(-(uint)bVar2 & (uint)piVar14);
                FUN_0055e2a0(&local_138);
                iVar6 = FUN_004dc270(param_8);
                if (iVar6 == 0) {
                  uVar8 = 0;
                }
                else {
                  uVar8 = *(undefined4 *)(iVar6 + 0xc);
                }
                puVar10[0xf] = uVar8;
                uStack_134 = 0;
                local_4._0_1_ = 2;
                if (param_8[0x2e] == 0) {
                  puStack_144 = (undefined4 *)FUN_00401f00(0x1c);
                  local_4._0_1_ = 4;
                  if (puStack_144 == (undefined4 *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar22 = 0x41700000;
                    puVar15 = puVar10;
                    uVar8 = param_1;
                    uVar17 = param_2;
                    uVar18 = param_3;
                    fVar19 = param_4;
                    fVar20 = param_5;
                    fVar21 = param_6;
                    uVar23 = param_11;
                    fVar16 = (float10)FUN_00404e30(puVar10,param_8,param_1,param_2,param_3,param_4,
                                                   param_5,param_6,0x41700000,param_11);
                    uVar8 = FUN_0056be50(local_130,(float)fVar16,puVar15,param_8,uVar8,uVar17,uVar18
                                         ,fVar19,fVar20,fVar21,uVar22,uVar23);
                  }
                  local_4._0_1_ = 2;
                  FUN_0075fa90(uVar8);
LAB_004cf5ce:
                  if (uStack_134 != 0) {
                    FUN_00678d30(uStack_134);
                  }
                }
                else if (DAT_00b06f5c == '\x01') {
                  puStack_144 = (undefined4 *)FUN_00401f00(0x54);
                  local_4._0_1_ = 3;
                  if (puStack_144 == (undefined4 *)0x0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar22 = 0x41700000;
                    puVar15 = puVar10;
                    uVar8 = param_1;
                    uVar17 = param_2;
                    uVar18 = param_3;
                    fVar19 = param_4;
                    fVar20 = param_5;
                    fVar21 = param_6;
                    uVar23 = param_11;
                    fVar16 = (float10)FUN_00404e30(puVar10,param_8,param_1,param_2,param_3,param_4,
                                                   param_5,param_6,0x41700000,param_11);
                    uVar8 = FUN_0056ce90(local_130,(float)fVar16,puVar15,param_8,uVar8,uVar17,uVar18
                                         ,fVar19,fVar20,fVar21,uVar22,uVar23);
                  }
                  local_4._0_1_ = 2;
                  FUN_0075fa90(uVar8);
                  FUN_0056cd60();
                  goto LAB_004cf5ce;
                }
                if (local_13c != 0) {
                  local_140 = (int *)0x0;
                  puStack_144 = (undefined4 *)0x0;
                  if (*(short *)(local_13c + 0xb6) != 0) {
                    do {
                      if (local_140 != (int *)0x0) goto LAB_004cf6bc;
                      piVar14 = (int *)FUN_00405790(puStack_144);
                      piVar7 = local_140;
                      if ((((piVar14 != (int *)0x0) &&
                           (iVar6 = (**(code **)(*piVar14 + 0x10))(), piVar7 = piVar14, iVar6 == 0))
                          && (iVar6 = (**(code **)(*piVar14 + 8))(), piVar7 = local_140, iVar6 != 0)
                          ) && (uVar5 = 0, *(short *)((int)piVar14 + 0xb6) != 0)) {
                        do {
                          piVar7 = local_140;
                          if (local_140 != (int *)0x0) break;
                          piVar7 = (int *)FUN_00405790(uVar5);
                          if ((piVar7 != (int *)0x0) &&
                             (iVar6 = (**(code **)(*piVar7 + 0x10))(), iVar6 != 0)) {
                            local_140 = piVar7;
                          }
                          uVar5 = uVar5 + 1;
                          piVar7 = local_140;
                        } while (uVar5 < *(ushort *)((int)piVar14 + 0xb6));
                      }
                      local_140 = piVar7;
                      puStack_144 = (undefined4 *)((int)puStack_144 + 1);
                    } while (puStack_144 < (undefined4 *)(uint)*(ushort *)(local_13c + 0xb6));
                    if (local_140 != (int *)0x0) {
LAB_004cf6bc:
                      piVar7 = local_140;
                      piVar14 = (int *)FUN_00707530(4);
                      if ((piVar14 != (int *)0x0) && (piVar7[0x2f] != 0)) {
                        iVar6 = (**(code **)(*piVar14 + 0x54))();
                        if ((iVar6 < 1) || (iVar6 = (**(code **)(*piVar14 + 0x54))(), 10 < iVar6)) {
                          bVar2 = 0;
                        }
                        else {
                          bVar2 = 1;
                        }
                        if ((-(uint)bVar2 & (uint)piVar14) != 0) {
                          puVar11 = (undefined4 *)FUN_00401f00(0x4c);
                          puVar15 = (undefined4 *)0x0;
                          if (puVar11 != (undefined4 *)0x0) {
                            *puVar11 = 0;
                            puVar11[0x12] = 0;
                            puVar15 = puVar11;
                          }
                          *(undefined1 *)(puVar15 + 0x11) = *(undefined1 *)(puVar10 + 0x11);
                          puVar15[0x10] = puVar10[0x10];
                          puVar15[1] = puVar10[1];
                          FUN_0075fa90(-(uint)bVar2 & (uint)piVar14);
                          FUN_0055e2a0(puVar10);
                          puVar15[0xf] = puVar10[0xf];
                          local_13c = 0;
                          local_4._0_1_ = 5;
                          uVar3 = (undefined1)local_4;
                          local_4._0_1_ = 5;
                          if (local_12c[0x2e] == 0) {
                            local_4._0_1_ = uVar3;
                            iStack_124 = FUN_00401f00(0x1c);
                            local_4._0_1_ = 7;
                            if (iStack_124 == 0) {
                              uVar8 = 0;
                            }
                            else {
                              uVar8 = 0x3f800000;
                              puVar11 = puVar15;
                              fVar16 = (float10)FUN_00404e30(puVar15,piVar7,param_1,param_2,param_3,
                                                             param_4,param_5,param_6,0x3f800000,
                                                             param_11);
                              uVar8 = FUN_0056be50(local_130,(float)fVar16,puVar11,piVar7,param_1,
                                                   param_2,param_3,param_4,param_5,param_6,uVar8,
                                                   param_11);
                            }
                            local_4._0_1_ = 5;
                            FUN_0075fa90(uVar8);
                            puVar10 = puVar10 + 2;
                            puVar15 = puVar15 + 2;
                            for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
                              *puVar15 = *puVar10;
                              puVar10 = puVar10 + 1;
                              puVar15 = puVar15 + 1;
                            }
LAB_004cf919:
                            if (local_13c != 0) {
                              FUN_00678d30(local_13c);
                            }
                          }
                          else if (DAT_00b06f5c == '\x01') {
                            iStack_124 = FUN_00401f00(0x54);
                            local_4._0_1_ = 6;
                            if (iStack_124 == 0) {
                              uVar8 = 0;
                            }
                            else {
                              piVar14 = (int *)-param_4;
                              puVar10 = (undefined4 *)-param_5;
                              piVar12 = (int *)-param_6;
                              uVar8 = 0x3f800000;
                              puStack_144 = puVar10;
                              local_140 = piVar12;
                              local_12c = piVar14;
                              piStack_120 = piVar14;
                              puStack_11c = puVar10;
                              _auStack_118 = piVar12;
                              fVar16 = (float10)FUN_00404e30(puVar15,piVar7,param_1,param_2,param_3,
                                                             piVar14,puVar10,piVar12,0x3f800000,
                                                             param_11);
                              uVar8 = FUN_0056ce90(local_130,(float)fVar16,puVar15,piVar7,param_1,
                                                   param_2,param_3,piVar14,puVar10,piVar12,uVar8,
                                                   param_11);
                            }
                            local_4._0_1_ = 5;
                            FUN_0075fa90(uVar8);
                            FUN_0056cd60();
                            goto LAB_004cf919;
                          }
                          local_4._0_1_ = 2;
                          FUN_007016a0();
                        }
                      }
                    }
                  }
                }
                local_4 = (uint)local_4._1_3_ << 8;
                FUN_007016a0();
                piVar7 = local_128;
              }
            }
            local_4 = 0xffffffff;
            if (-1 < *piVar7) {
              FUN_007016a0();
              goto LAB_004cf96c;
            }
          }
          else {
            *local_128 = *local_128 + -1;
          }
        }
        local_4 = 0xffffffff;
        FUN_007016a0();
        uVar8 = 1;
        goto LAB_004cf98b;
      }
    }
  }
LAB_004cf96c:
  uVar8 = 0;
LAB_004cf98b:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



void FUN_004cfab0(byte param_1)

{
  FUN_004cd1a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004cfad0(byte param_1)

{
  FUN_004cd200();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004cfaf0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  int *in_ECX;
  int *unaff_EBX;
  undefined2 in_FPUControlWord;
  float10 fVar11;
  undefined8 uVar12;
  undefined1 auStack_24 [3];
  char local_21;
  int *local_20;
  int *local_1c;
  undefined8 local_18;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xb & 1) != 0) {
    return;
  }
  local_1c = in_ECX;
  iVar4 = FUN_00420a70();
  if (iVar4 == 0) {
    return;
  }
  local_21 = '\0';
  if (iVar4 == -1) {
    local_21 = '\x01';
  }
  else {
    iVar5 = FUN_00402c00();
    fVar11 = (float10)FUN_00402bd0();
    local_20 = (int *)CONCAT22(local_20._2_2_,in_FPUControlWord);
    local_18 = (longlong)ROUND(fVar11);
    if ((uint)((iVar5 * 0x18 + (int)local_18) - iVar4) <= DAT_00b35c1c) goto LAB_004cfe35;
  }
  FUN_004cc660();
  FUN_00496ea0(in_ECX);
  piVar8 = in_ECX + 0x12;
  while ((local_20 = piVar8, piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))))) {
    piVar1 = (int *)*piVar8;
    if ((local_21 == '\0') || (cVar3 = FUN_00446b80(piVar1[3]), cVar3 == '\0')) {
      piVar6 = (int *)FUN_009832e6(piVar1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      if (piVar6 == (int *)0x0) {
        iVar4 = (**(code **)(*piVar1 + 0x170))();
        cVar3 = *(char *)(iVar4 + 4);
        if (cVar3 == '\x17') {
          cVar3 = FUN_004dc070();
          if (cVar3 != '\0') {
            (**(code **)(*piVar1 + 0x184))(0);
            iVar4 = FUN_0041e6f0();
            if (iVar4 != 0) {
              FUN_0041e6f0();
              cVar3 = FUN_004491b0();
              if (cVar3 == '\0') {
                FUN_004dbe40();
              }
            }
          }
        }
        else if (cVar3 == '\x19') {
          if (((((uint)piVar1[2] >> 5 & 1) != 0) && (cVar3 = FUN_004d7030(), cVar3 == '\0')) &&
             (cVar3 = (**(code **)(*piVar1 + 0x78))(), cVar3 == '\0')) {
            uVar9 = (**(code **)(*piVar1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0373c,0);
            iVar4 = FUN_009832e6(uVar9);
            if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x7c) & 2) != 0)) {
              (**(code **)(*piVar1 + 0x8c))(0);
            }
          }
        }
        else if (cVar3 == '\x1f') {
          FUN_0046aa00(0);
        }
        uVar10 = FUN_004533f0(piVar1,0);
        if (((uVar10 & 8) != 0) && ((uVar10 & 6) == 0)) {
          FUN_004533d0(piVar1,0x80000008);
          FUN_0045bb30(piVar1,0);
        }
      }
      else {
        cVar3 = FUN_005e1d70();
        if (cVar3 == '\0') {
          cVar3 = (**(code **)(*piVar6 + 0x198))(0);
          if (cVar3 != '\0') {
            cVar3 = (**(code **)(*piVar6 + 0x78))();
            if ((cVar3 == '\0') && (cVar3 = FUN_004d9040(), cVar3 == '\0')) {
              FUN_004d6640();
            }
            puVar7 = (undefined4 *)FUN_00420480();
            in_ECX = local_1c;
            piVar8 = local_20;
            if (puVar7 != (undefined4 *)0x0) {
              while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
                piVar8 = (int *)*puVar7;
                FUN_004203e0(0);
                cVar3 = (**(code **)(*piVar8 + 0x78))();
                if (cVar3 == '\0') {
                  FUN_004d6640();
                }
                puVar2 = (undefined4 *)puVar7[1];
                if (puVar2 == (undefined4 *)0x0) {
                  *puVar7 = 0;
                }
                else {
                  puVar7[1] = puVar2[1];
                  *puVar7 = *puVar2;
                  FUN_00401f20(puVar2);
                }
              }
              FUN_004204a0();
              in_ECX = local_1c;
              piVar8 = local_20;
            }
          }
        }
        else {
          (**(code **)(*piVar6 + 0x20c))(1,0);
          puVar7 = (undefined4 *)FUN_00420480();
          if (puVar7 != (undefined4 *)0x0) {
            while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
              piVar8 = (int *)*puVar7;
              FUN_004203e0(0);
              cVar3 = (**(code **)(*piVar8 + 0x78))();
              if (cVar3 == '\0') {
                FUN_004d6640();
              }
              puVar2 = (undefined4 *)puVar7[1];
              in_ECX = unaff_EBX;
              if (puVar2 == (undefined4 *)0x0) {
                *puVar7 = 0;
              }
              else {
                puVar7[1] = puVar2[1];
                *puVar7 = *puVar2;
                FUN_00401f20(puVar2);
              }
            }
            FUN_004204a0();
          }
          (**(code **)(*piVar6 + 0xf4))(auStack_24);
          piVar8 = (int *)FUN_005e1f60();
          if (piVar8 != in_ECX) {
            FUN_005e1f40();
            uVar12 = FUN_004c9cf0();
            piVar8 = local_20;
            if (((int)((ulonglong)uVar12 >> 0x20) != (int)uVar12) ||
               (cVar3 = FUN_004cc540(&local_18), piVar8 = local_20, cVar3 == '\0'))
            goto LAB_004cfdff;
          }
          FUN_004d8a30((int)local_18,local_18._4_4_,uStack_10);
          puVar7 = (undefined4 *)(**(code **)(*piVar6 + 0xf0))(auStack_c);
          FUN_004d89a0(*puVar7,puVar7[1],puVar7[2]);
          piVar8 = local_20;
        }
      }
LAB_004cfdff:
      FUN_004f9ec0(piVar1,piVar1 + 0x11);
      FUN_004fbf90(piVar1,piVar1 + 0x11,0x80000000);
      piVar8 = (int *)piVar8[1];
    }
    else {
      cVar3 = (**(code **)(*piVar1 + 0x78))();
      if ((cVar3 == '\0') && (cVar3 = FUN_004d9040(), cVar3 == '\0')) {
        (**(code **)(*piVar1 + 0x8c))(1);
      }
      piVar8 = (int *)piVar8[1];
    }
  }
  FUN_00496f50(in_ECX);
LAB_004cfe35:
  FUN_0045a500();
  FUN_00420a90(0);
  (**(code **)(*in_ECX + 0x44))(0xe000000);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_004cff80(void)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  undefined2 *puVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  iVar2 = FUN_0046b680(0);
  if (iVar2 == 0) {
    __snprintf(local_108,0x104,".\\Data\\Textures\\Maps\\");
  }
  else {
    __snprintf(local_108,0x104,"%s%s",".\\Data\\Textures\\Maps\\",iVar2 + 0x1c);
    pcVar1 = local_108;
    do {
      pcVar3 = pcVar1;
      pcVar1 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-4] = '\0';
    puVar4 = (undefined2 *)&stack0xfffffef7;
    do {
      pcVar1 = (char *)((int)puVar4 + 1);
      puVar4 = (undefined2 *)((int)puVar4 + 1);
    } while (*pcVar1 != '\0');
    *puVar4 = 0x5c;
  }
  FUN_004028d0(local_108,0);
  return;
}


