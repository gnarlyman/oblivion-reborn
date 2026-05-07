
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void BSFaceGen_DoSomething(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  LONG LVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  float10 fVar14;
  longlong lVar15;
  float fStack_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  uint local_60;
  float local_5c;
  int *piStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  int *local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc299;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_84;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_6c = 0;
  local_3c = param_1;
  local_80 = param_2;
  local_28 = 0;
  local_24 = 0;
  local_22 = 0;
  local_18 = 0;
  local_14 = 0;
  local_12 = 0;
  local_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_44 = 0;
  local_40 = 0;
  local_3e = 0;
  local_74 = 0;
  local_70 = 0;
  local_64 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  local_4 = 7;
  local_7c = 0;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    uVar4 = 0;
    FUN_00401f20();
    lVar15 = (ulonglong)uVar4 << 0x20;
  }
  else {
    if (DAT_00b39b80 == 0) {
      FUN_00553550(uVar4);
    }
    fVar14 = (float10)FUN_006edd30(0,0,0,param_2);
    local_5c = (float)fVar14;
    FUN_00985a00((double)local_5c);
    uVar3 = FUN_009828c0();
    local_38 = CONCAT31(local_38._1_3_,uVar3);
    local_60 = 0;
    do {
      uVar4 = local_60;
      FUN_004028d0(&DAT_00a2f7ec,0);
      iVar7 = local_80;
      uVar12 = local_60;
      if (uVar4 == 2) {
        if (*(int *)(param_2 + 0x70) != 0) {
LAB_00555327:
          local_7c = 0xe;
LAB_0055532f:
          iVar8 = uVar4 * 4;
          iVar7 = local_80;
          uVar12 = local_60;
          if ((((*(int *)(iVar8 + *(int *)(param_2 + 0x78)) != 0) &&
               (*(int *)(iVar8 + *(int *)(param_2 + 0x88)) != 0)) &&
              (piStack_58 = (int *)(**(code **)(*local_3c + 0x58))(), iVar7 = local_80,
              uVar12 = local_60, piStack_58 != (int *)0x0)) &&
             ((iVar5 = (**(code **)(*piStack_58 + 0x10))(), iVar7 = local_80, uVar12 = local_60,
              iVar5 != 0 &&
              (iVar5 = FUN_005507e0(), iVar7 = local_80, uVar12 = local_60, iVar5 != 0)))) {
            FUN_007b8940(piStack_58,local_7c,1);
            piVar6 = (int *)FUN_00707530();
            if ((piVar6 == (int *)0x0) ||
               ((iVar7 = (**(code **)(*piVar6 + 0x54))(), iVar7 < 5 ||
                (iVar7 = (**(code **)(*piVar6 + 0x54))(), 10 < iVar7)))) {
              bVar1 = 0;
            }
            else {
              bVar1 = 1;
            }
            piVar6 = (int *)(-(uint)bVar1 & (uint)piVar6);
            iVar7 = local_80;
            uVar12 = local_60;
            if (piVar6 != (int *)0x0) {
              if ((*(short *)(local_80 + 0xae) != 0) && (*(char *)(local_80 + 0xb4) != '\0')) {
                FUN_0055e2a0();
              }
              if (((local_60 == 0) && (-1 < (char)local_38)) &&
                 (iVar5 = FUN_00551a00(&local_44,*(undefined4 *)(local_80 + 0x70),local_38),
                 iVar7 = local_80, iVar5 != 0)) {
                if ((*(short *)(local_80 + 0xae) == 0) || (**(int **)(local_80 + 0xa8) == 0)) {
                  FUN_0043f2e0();
                  FUN_00557e60(iVar7,&local_78,0);
                  FUN_0043f300();
                }
                FUN_00442890(auStack_34,local_44,0,0);
                local_4._0_1_ = 8;
                FUN_0075fa90();
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_007016a0();
                FUN_0046ff20(&local_74);
              }
              else {
                if ((*(short *)(local_80 + 0xae) == 0) ||
                   (*(int *)(iVar8 + *(int *)(local_80 + 0xa8)) == 0)) {
                  FUN_0043f2e0();
                  FUN_00557e60(local_80,&local_78,0);
                  FUN_0043f300();
                }
                (**(code **)(**(int **)(iVar8 + *(int *)(local_80 + 0x88)) + 0x10))();
                iVar7 = local_80;
              }
              if (local_74 != 0) {
                FUN_00442890(auStack_30,local_74,1,0);
                local_4._0_1_ = 9;
                FUN_0055e2a0();
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_007016a0();
              }
              if (local_64 == (undefined4 *)0x0) {
                iVar8 = (**(code **)(*piVar6 + 0x8c))();
                if (iVar8 == 0) {
                  (**(code **)(*piVar6 + 0x84))(0);
                }
              }
              else {
                (**(code **)(*piVar6 + 0x84))(0);
                iVar8 = FUN_0054f7d0();
                iVar8 = *(int *)(iVar8 + 4);
                if (((iVar8 == 5) || (iVar8 == 6)) ||
                   (local_5c = (float)((uint)local_5c & 0xffffff00), iVar8 == 1)) {
                  local_5c = (float)CONCAT31(local_5c._1_3_,1);
                }
                FUN_00434980(1,local_5c);
              }
              if ((*(char *)(iVar7 + 0xb4) != '\0') && (local_7c == 0xe)) {
                (**(code **)(*piVar6 + 0x80))(1);
                if (local_70 == 0) {
                  uVar9 = FUN_004783a0();
                  piVar10 = (int *)FUN_00405070(uVar9);
                  local_74 = local_74 | 1;
                  local_c = CONCAT31(local_c._1_3_,10);
                }
                else {
                  piVar10 = &local_70;
                }
                (**(code **)(*piVar6 + 0x84))(1,*piVar10);
                local_4 = 7;
                if ((local_6c & 1) != 0) {
                  local_6c = local_6c & 0xfffffffe;
                  FUN_007016a0();
                }
                piVar6[7] = piVar6[7] | 0x400;
                piVar6[9] = 0;
                iVar7 = FUN_00707530();
                if ((iVar7 != 0) && (fStack_84 = *(float *)(iVar7 + 0x4c), fStack_84 < 1.0)) {
                  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
                  *(undefined4 *)(iVar7 + 0x4c) = 0x40800000;
                }
              }
              FUN_0075fa90();
              FUN_0055e2a0();
              FUN_0075fa90();
              FUN_00551140();
              iVar7 = local_80;
              uVar12 = local_60;
            }
          }
        }
      }
      else if (uVar4 == 1) {
        iVar7 = param_2;
        uVar12 = uVar4;
        if (*(int *)(param_2 + 0x70) != 1) goto LAB_00555327;
      }
      else if ((uVar4 != 7) && (uVar4 != 8)) {
        local_7c = 1;
        if (uVar4 == 0) goto LAB_00555327;
        goto LAB_0055532f;
      }
      piVar6 = local_3c;
      local_60 = uVar12 + 1;
      param_2 = iVar7;
    } while (local_60 < 9);
    iVar7 = (**(code **)(*local_3c + 0x58))();
    if (iVar7 != 0) {
      iVar8 = FUN_00707530(6);
      if ((iVar8 != 0) && (DAT_00b120e4 != '\0')) {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfff7 | 6;
      }
      FUN_007b8940(iVar7,1,1,1);
      FUN_00551140(iVar7,local_80);
    }
    iVar7 = (**(code **)(*piVar6 + 0x58))("FaceGenEyeRight");
    if (iVar7 != 0) {
      iVar8 = FUN_00707530(6);
      if ((iVar8 != 0) && (DAT_00b120e4 != '\0')) {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfff7 | 6;
      }
      FUN_007b8940(iVar7,1,1,1);
      FUN_00551140(iVar7,fStack_84);
    }
    iVar7 = (**(code **)(*piVar6 + 0x58))("FaceGenHair");
    if (iVar7 != 0) {
      FUN_007b8940(iVar7,1,1);
      piVar6 = (int *)FUN_00707530();
      if (piVar6 == (int *)0x0) {
        bVar13 = false;
      }
      else {
        iVar7 = (**(code **)(*piVar6 + 0x54))();
        bVar13 = iVar7 == 5;
      }
      uVar4 = -(uint)bVar13 & (uint)piVar6;
      if (uVar4 == 0) {
        if (piVar6 == (int *)0x0) {
          bVar13 = false;
        }
        else {
          iVar7 = (**(code **)(*piVar6 + 0x54))();
          bVar13 = iVar7 == 10;
        }
        uVar4 = -(uint)bVar13 & (uint)piVar6;
        if (uVar4 != 0) {
          uVar12 = *(uint *)(local_80 + 100);
          fStack_54 = (float)(uVar12 & 0xff) / 255.0;
          fStack_84 = (float)(uVar12 >> 0x10 & 0xff);
          *(float *)(uVar4 + 0xf0) = fStack_54;
          fStack_50 = (float)(uVar12 >> 8 & 0xff) / 255.0;
          *(float *)(uVar4 + 0xf4) = fStack_50;
          fStack_4c = (float)(int)fStack_84 / 255.0;
          uStack_48 = 0x3f800000;
          *(float *)(uVar4 + 0xf8) = fStack_4c;
          *(undefined4 *)(uVar4 + 0xfc) = 0x3f800000;
        }
      }
      else {
        uVar12 = *(uint *)(local_80 + 100);
        fStack_54 = (float)(uVar12 & 0xff) / 255.0;
        fStack_84 = (float)(uVar12 >> 0x10 & 0xff);
        *(float *)(uVar4 + 0xa8) = fStack_54;
        fStack_50 = (float)(uVar12 >> 8 & 0xff) / 255.0;
        *(float *)(uVar4 + 0xac) = fStack_50;
        fStack_4c = (float)(int)fStack_84 / 255.0;
        uStack_48 = 0x3f800000;
        *(float *)(uVar4 + 0xb0) = fStack_4c;
        *(undefined4 *)(uVar4 + 0xb4) = 0x3f800000;
      }
    }
    FUN_00707610();
    FUN_00707370(0,0);
    puVar2 = local_68;
    local_4._0_1_ = 6;
    if (((local_68 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(local_68 + 1), LVar11 == 0)) && (puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)();
    }
    puVar2 = local_78;
    local_4._0_1_ = 5;
    if (((local_78 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(local_78 + 1), LVar11 == 0)) && (puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)();
    }
    puVar2 = local_64;
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((local_64 != (undefined4 *)0x0) &&
       (LVar11 = InterlockedDecrement(local_64 + 1), LVar11 == 0)) {
      (**(code **)*puVar2)();
    }
    FUN_00401f20();
    lVar15 = CONCAT44(local_74,local_44);
  }
  local_74 = 0;
  local_70 = 0;
  FUN_00401f20(lVar15);
  FUN_00401f20(0);
  FUN_00401f20(0);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return;
}

