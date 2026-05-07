
undefined4
FaceGen_HelperToOutStateMachine
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  LONG LVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  undefined4 *local_88;
  uint local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined2 local_44;
  undefined2 local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined2 local_34;
  undefined2 local_32;
  undefined4 local_30 [9];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bc34f;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  local_80 = (undefined4 *)0x0;
  local_7c = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  uVar13 = 0;
  local_78 = (undefined4 *)0x0;
  local_74 = (undefined4 *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_5a = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_58 = 0;
  local_54 = 0;
  local_52 = 0;
  local_40 = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_34 = 0;
  local_32 = 0;
  local_48 = 0;
  local_44 = 0;
  local_42 = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  FUN_0070fd80(0xbfc90fdb);
  local_84 = 0;
  do {
    uVar12 = local_84;
    if (local_84 == 2) {
      bVar16 = *(int *)(param_3 + 0x70) == 0;
LAB_00555b60:
      if (!bVar16) goto LAB_00555b66;
    }
    else {
      if (local_84 == 1) {
        bVar16 = *(int *)(param_3 + 0x70) == 1;
        goto LAB_00555b60;
      }
LAB_00555b66:
      if ((*(short *)(param_3 + 0x7e) != 0) &&
         (*(int *)(*(int *)(param_3 + 0x78) + local_84 * 4) != 0)) {
        piVar3 = *(int **)(*(int *)(param_3 + 0x78) + local_84 * 4);
        if (*(ushort *)(piVar3 + 2) == 0xffff) {
          pcVar6 = (char *)piVar3[1];
          pcVar1 = pcVar6 + 1;
          do {
            cVar4 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
          uVar7 = (int)pcVar6 - (int)pcVar1;
        }
        else {
          uVar7 = (uint)*(ushort *)(piVar3 + 2);
        }
        if (((uVar7 != 0) && (*(short *)(param_3 + 0x8e) != 0)) &&
           (*(int *)(*(int *)(param_3 + 0x88) + local_84 * 4) != 0)) {
          iVar8 = *(int *)(*(int *)(param_3 + 0x88) + local_84 * 4);
          uVar2 = *(ushort *)(iVar8 + 8);
          if (uVar2 == 0xffff) {
            pcVar6 = *(char **)(iVar8 + 4);
            pcVar1 = pcVar6 + 1;
            do {
              cVar4 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            uVar7 = (int)pcVar6 - (int)pcVar1;
          }
          else {
            uVar7 = (uint)uVar2;
          }
          if (uVar7 != 0) {
            uVar13 = (**(code **)(*piVar3 + 0x14))(uVar5);
            FUN_00402e30(&local_60,"Meshes\\%s",uVar13);
            uVar13 = local_60;
            if ((*(int *)(param_3 + 0xc0) == 0) && (uVar12 == 0)) {
              FUN_00551b40(&local_48,local_60);
              iVar8 = FUN_0042bde0(local_48,0,0,0xffffffff);
              if (iVar8 != 0) {
                FUN_00551b40(&local_60,uVar13);
                uVar13 = local_60;
              }
switchD_00555c79_switchD:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(uVar12) {
              case 0:
              case 1:
              case 2:
                uVar10 = FUN_005500c0(&local_40,uVar13,1,0);
                uVar10 = FUN_00550010(&local_58,uVar13,uVar10);
                uVar10 = FUN_0054feb0(&local_50,uVar13,uVar13,uVar10);
                puVar14 = (undefined4 *)FUN_00553620(uVar10);
                break;
              default:
                uVar10 = FUN_00550010(&local_58,uVar13);
                iVar8 = FUN_0054feb0(&local_50,uVar13);
                local_80 = (undefined4 *)0x0;
                local_4._0_1_ = 8;
                if (iVar8 == 0) {
                  local_4._0_1_ = 7;
                  local_80 = (undefined4 *)0x0;
                  uVar12 = local_84;
                  goto LAB_00556199;
                }
                if (DAT_00b39b80 == 0) {
                  FUN_00553550();
                }
                if (*(int *)(DAT_00b39b80 + 0xdac) == 0) {
                  iStack_64 = FUN_00401f00(0x20);
                  local_4._0_1_ = 9;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_00551e80();
                  }
                  local_4._0_1_ = 8;
                  if (DAT_00b39b80 == 0) {
                    FUN_00553550();
                  }
                  *(undefined4 *)(DAT_00b39b80 + 0xdac) = uVar13;
                  *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x18) = DAT_00b120ec;
                  FUN_005506b0(0);
                  uVar13 = DAT_00b120f4;
                  if (DAT_00b39b80 == 0) {
                    FUN_00553550();
                  }
                  *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x1c) = uVar13;
                  FUN_005506b0(0);
                }
                if (DAT_00b39b80 == 0) {
                  FUN_00553550();
                }
                cVar4 = FUN_005515b0(iVar8,&local_80);
                puVar14 = local_80;
                if (cVar4 == '\0') {
                  iStack_64 = FUN_00401f00(0x1c);
                  local_4._0_1_ = 10;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_005564a0();
                  }
                  local_4 = CONCAT31(local_4._1_3_,8);
                  FUN_0075fa90(uVar13);
                  puVar14 = local_80;
                  cVar4 = FUN_00559b50(iVar8,local_60,uVar10,0,0);
                  if (cVar4 == '\0') {
                    if (puVar14 != (undefined4 *)0x0) {
                      LVar11 = InterlockedDecrement(puVar14 + 1);
                      if (LVar11 == 0) {
                        (**(code **)*puVar14)(1);
                      }
                      puVar14 = (undefined4 *)0x0;
                    }
                  }
                  else {
                    if (DAT_00b39b80 == 0) {
                      FUN_00553550();
                    }
                    FUN_00551450(iVar8,puVar14);
                  }
                  local_4._0_1_ = 7;
                  uVar12 = local_84;
                  uVar13 = local_60;
                  if ((puVar14 != (undefined4 *)0x0) &&
                     (LVar11 = InterlockedDecrement(puVar14 + 1), uVar12 = local_84,
                     uVar13 = local_60, LVar11 == 0)) {
                    (**(code **)*puVar14)(1);
                    uVar12 = local_84;
                    uVar13 = local_60;
                  }
                }
                else {
                  if (local_80[2] == 0) {
                    FUN_00559b50(iVar8,local_60,uVar10,0,0);
                  }
                  local_4._0_1_ = 7;
                  LVar11 = InterlockedDecrement(puVar14 + 1);
                  uVar12 = local_84;
                  uVar13 = local_60;
                  if (LVar11 == 0) {
                    (**(code **)*puVar14)(1);
                    uVar12 = local_84;
                    uVar13 = local_60;
                  }
                }
              }
            }
            else {
              puVar14 = local_80;
              if (uVar12 < 7) goto switchD_00555c79_switchD;
            }
            local_80 = puVar14;
            if (((local_80 != (undefined4 *)0x0) &&
                (cVar4 = FUN_00559870(param_3,&local_88), cVar4 != '\0')) &&
               (local_88 != (undefined4 *)0x0)) {
              FUN_006ff420(*(undefined4 *)(*(int *)(param_3 + 0x98) + uVar12 * 4));
              if (uVar12 == 0) {
                local_78 = local_88;
              }
              else if ((uVar12 == 1) || (uVar12 == 2)) {
                local_74 = local_88;
              }
              puVar9 = *(undefined1 **)(*(int *)(*(int *)(param_3 + 0x88) + uVar12 * 4) + 4);
              if (puVar9 == (undefined1 *)0x0) {
                puVar9 = &DAT_00a2f7ec;
              }
              FUN_00402e30(&local_60,"Textures\\%s",puVar9);
              uVar13 = local_60;
              uVar10 = FUN_00442890(auStack_70,local_60,0,0);
              local_4._0_1_ = 0xb;
              FUN_0055e2a0(uVar10);
              local_4._0_1_ = 7;
              FUN_007016a0();
              puVar14 = local_7c;
              if (local_7c != (undefined4 *)0x0) {
                iStack_64 = FUN_00401f00(0x30);
                local_4._0_1_ = 0xc;
                if (iStack_64 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = FUN_007043b0();
                }
                local_4._0_1_ = 7;
                FUN_004057b0(puVar14);
                iVar8 = FUN_00707530(6);
                if (iVar8 != 0) {
                  FUN_00708560(auStack_6c,6);
                  FUN_007016a0();
                }
                FUN_00405680(uVar13);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              if ((uVar12 == 5) || (uVar12 == 4)) {
                iVar8 = FUN_00707530(0);
                if (iVar8 != 0) {
                  FUN_00708560(auStack_68,0);
                  FUN_007016a0();
                }
                uVar13 = FUN_00550550();
                FUN_00405680(uVar13);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              if (((uVar12 == 0) || (uVar12 == 1)) || (uVar12 == 2)) {
                iVar8 = FUN_00707530(2);
                if (iVar8 == 0) {
                  iStack_64 = FUN_00401f00(0x5c);
                  local_4._0_1_ = 0xd;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_007095a0();
                  }
                  local_4._0_1_ = 7;
                  FUN_006ff420(&DAT_00a3cf5c);
                  FUN_00405680(uVar13);
                  uVar12 = local_84;
                  uVar13 = local_60;
                }
                else {
                  FUN_006ff420(&DAT_00a3cf5c);
                }
              }
              if (local_88[0x2e] == 0) {
                puVar14 = local_30;
                puVar15 = local_88 + 0xc;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                (**(code **)(*(int *)*param_1 + 0x84))(local_88,0);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              else if ((char)param_4 == '\0') {
                (**(code **)(*(int *)*param_2 + 0x84))(local_88);
              }
              else {
                FUN_00478350(0);
                local_88[0x15] = DAT_00b3f9a8;
                local_88[0x16] = DAT_00b3f9ac;
                local_88[0x17] = DAT_00b3f9b0;
                puVar14 = local_30;
                puVar15 = local_88 + 0xc;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                (**(code **)(*(int *)*param_1 + 0x84))(local_88,0);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              local_80 = (undefined4 *)0x0;
              FUN_0075fa90(0);
              FUN_0075fa90(0);
            }
          }
        }
      }
    }
LAB_00556199:
    local_84 = uVar12 + 1;
    if (8 < local_84) {
      if (((DAT_00b120bc != '\0') && (local_78 != (undefined4 *)0x0)) &&
         (local_74 != (undefined4 *)0x0)) {
        FUN_00481920(local_78,local_74,0x3dcccccd,0,0);
      }
      if (*(int *)(param_3 + 0x60) != 0) {
        FUN_00554260(param_1,param_2,param_3,param_4);
      }
      if ((*(int *)(param_3 + 0xb8) != 0) && (*(int *)(param_3 + 0xbc) != 0)) {
        FaceGen_SetEyeRefs_AVSite(param_1,param_2,param_3,param_4);
      }
      FUN_00401f20(local_48);
      FUN_00401f20(0);
      FUN_00401f20(local_40);
      FUN_00401f20(local_58);
      FUN_00401f20(local_50);
      FUN_00401f20(uVar13);
      puVar14 = local_88;
      local_4 = (uint)local_4._1_3_ << 8;
      if (((local_88 != (undefined4 *)0x0) &&
          (LVar11 = InterlockedDecrement(local_88 + 1), LVar11 == 0)) &&
         (puVar14 != (undefined4 *)0x0)) {
        (**(code **)*puVar14)(1);
      }
      puVar14 = local_7c;
      local_4 = 0xffffffff;
      if ((local_7c != (undefined4 *)0x0) &&
         (LVar11 = InterlockedDecrement(local_7c + 1), LVar11 == 0)) {
        (**(code **)*puVar14)(1);
      }
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  } while( true );
}

