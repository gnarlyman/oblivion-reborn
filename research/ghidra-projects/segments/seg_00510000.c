
undefined4
FUN_00510480(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float local_20;
  undefined4 local_1c [4];
  float local_c;
  float local_8;
  
  local_20 = 0.0;
  uVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20);
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  uVar5 = 0;
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar2 = CONCAT22(uVar3,(ushort)(local_20 < 0.0) << 8 | (ushort)NAN(local_20) << 10 |
                         (ushort)(local_20 == 0.0) << 0xe);
  if (local_20 < 0.0 == (local_20 == 0.0)) {
    uVar2 = CONCAT22(uVar3,(ushort)(163840.0 < local_20) << 8 | (ushort)NAN(local_20) << 10 |
                           (ushort)(local_20 == 163840.0) << 0xe);
    if (163840.0 < local_20) {
      local_20 = 163840.0;
    }
  }
  else {
    uVar5 = 1;
    local_20 = 163840.0;
  }
  iVar1 = *(int *)(DAT_00b333cc + 0xdc);
  if (iVar1 != 0) {
    puVar6 = (undefined4 *)(iVar1 + 0xec);
    puVar7 = local_1c;
    for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    uVar2 = CONCAT22((short)((uint)uVar2 >> 0x10),
                     (ushort)(local_8 < local_20) << 8 |
                     (ushort)(NAN(local_8) || NAN(local_20)) << 10 |
                     (ushort)(local_8 == local_20) << 0xe);
    if (local_8 != local_20) {
      *(float *)(iVar1 + 0x10c) = local_20 / local_c;
      local_8 = local_20;
      FUN_0070c190(local_1c);
      iVar1 = *(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 0x20);
      *(undefined1 *)(iVar1 + 0x18) = uVar5;
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



undefined4 FUN_00510580(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (*(int *)(DAT_00b333a0 + 0x34) != 0)) {
    FUN_00440560();
  }
  else {
    FUN_006ecc80();
  }
  iVar1 = *(int *)(DAT_00b333cc + 0xdc);
  FUN_004d3b10(*(undefined4 *)(iVar1 + 0x88),*(undefined4 *)(iVar1 + 0x8c),
               *(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 100),
               *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0x7c),"Effects\\blooddecal.dds"
               ,param_3,0xffffffff,0);
  return 1;
}



undefined1
FUN_005107a0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int unaff_EDI;
  char *pcVar8;
  undefined4 uVar9;
  int local_c;
  float local_8 [2];
  
  local_8[0] = 0.0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_c,local_8);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_3 == (int *)0x0) {
    return 1;
  }
  (**(code **)(*param_3 + 0x40))(0x2000000);
  iVar3 = (**(code **)(*param_3 + 0x164))();
  if ((iVar3 == 0) || (cVar2 = (**(code **)(*param_3 + 400))(), cVar2 == '\0')) {
    if (unaff_EDI != 0xff) {
      piVar5 = (int *)(**(code **)(*param_3 + 0x154))();
      if ((((piVar5 == (int *)0x0) || (iVar3 = (**(code **)(*piVar5 + 8))(), iVar3 == 0)) ||
          (iVar6 = FUN_00405790(0), iVar6 == 0)) ||
         (iVar6 = FUN_00405790(0), *(int *)(iVar6 + 0xc) == 0)) {
        uVar4 = FUN_004da2a0(param_3[3]);
        pcVar8 = "PlayGroup Error: No 3d or controllers found for \'%s\' (%08X).";
      }
      else {
        iVar6 = FUN_00405790(0);
        iVar6 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar6 + 0xc));
        if ((iVar6 != 0) ||
           (iVar6 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(iVar3 + 0xc)), iVar6 != 0)) {
          local_8[0] = (float)FUN_004715a0((&PTR_DAT_00b102e0)[unaff_EDI * 9]);
          if (local_8[0] == 0.0) {
            uVar4 = FUN_004da2a0(param_3[3]);
            FUN_004a7a60("PlayGroup Error: Sequence \'%s\' not found for \'%s\' (%08X).",
                         (&PTR_DAT_00b102e0)[unaff_EDI * 9],uVar4);
          }
          else {
            if (*(short *)(iVar6 + 0x46) != 0) {
              uVar7 = 0;
              do {
                iVar3 = __stricmp(*(char **)(*(int *)(*(int *)(iVar6 + 0x40) + uVar7 * 4) + 8),
                                  PTR_DAT_00b102e0);
                if (iVar3 != 0) {
                  FUN_006c9cb0(0,0);
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < *(ushort *)(iVar6 + 0x46));
            }
            fVar1 = local_8[0];
            if (local_c == 0) {
              FUN_00470b20(local_8[0],0,0,0x3f800000,0,0);
            }
            else {
              local_8[0] = (float)local_c * 0.1;
              FUN_006c5c70(fVar1,0,local_8[0],0,0);
            }
            *(undefined4 *)((int)fVar1 + 0x48) = 0xff7fffff;
            *(ushort *)(iVar6 + 8) = *(ushort *)(iVar6 + 8) | 8;
          }
          goto LAB_00510a6f;
        }
        uVar4 = FUN_004da2a0(param_3[3]);
        pcVar8 = "PlayGroup Error: No NiControllerManager found for \'%s\' (%08X).";
      }
      FUN_004a7a60(pcVar8,uVar4);
    }
  }
  else {
    FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    uVar9 = 0xffffffff;
    uVar4 = FUN_005e5690(unaff_EDI,0,0);
    (**(code **)(*param_3 + 0x164))(uVar4,local_c,uVar9);
    FUN_00477b60(uVar4,local_c,uVar9);
    if (unaff_EDI == 0) {
      iVar3 = FUN_005e0ee0();
      if (iVar3 == 0xc) {
        FUN_005effd0(0xffffffff,0);
      }
    }
    else {
      uVar4 = 0;
      (**(code **)(*param_3 + 0x164))(0);
      uVar4 = FUN_004706e0(uVar4);
      FUN_005effd0(0xc,uVar4);
    }
  }
LAB_00510a6f:
  (**(code **)(*param_3 + 0x90))(1);
  return 1;
}



undefined4 FUN_00510c70(undefined4 param_1,undefined4 param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  LONG LVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int *unaff_FS_OFFSET;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined1 auStack_40 [52];
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b6f8b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_3 != (int *)0x0) && (DAT_00b333c4 != (int *)0x0)) {
    FUN_0067d760(uVar2);
    uVar9 = 0;
    local_4 = 0;
    piVar8 = DAT_00b333c4;
    uVar3 = (**(code **)(*param_3 + 0x174))(DAT_00b333c4,0);
    uVar4 = (**(code **)(*DAT_00b333c4 + 0x174))(uVar3);
    cVar1 = FUN_0067eb60(uVar4,uVar3,piVar8,uVar9);
    FUN_0068c040();
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_0067e3d0(auStack_40,DAT_00b333c4);
    if (DAT_00b36200 != 0) {
      (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x88))(&puStack_48,DAT_00b36200);
      if (puStack_48 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puStack_48 + 1);
        if ((LVar5 == 0) && (puStack_48 != (undefined4 *)0x0)) {
          (**(code **)*puStack_48)(1);
        }
      }
    }
    DAT_00b36200 = FUN_0068c740();
    if (DAT_00b36200 != 0) {
      puVar6 = (undefined4 *)FUN_00401f00(0x1c);
      local_4._0_1_ = 2;
      puStack_44 = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar6 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar6 + 6) = 8;
      }
      *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) & 0xffd7 | 0x10;
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_00405680(puVar6);
      (**(code **)(**(int **)(DAT_00b333a0 + 0xc) + 0x84))(DAT_00b36200,0);
      FUN_00707610();
      FUN_00707370(0,1);
    }
    if (DAT_00b361ac != '\0') {
      pcVar7 = "SUCCESS";
      if (cVar1 == '\0') {
        pcVar7 = "FAILURE";
      }
      FUN_00579b60("High Path Build: %s",pcVar7);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_0068c9b0();
    local_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_00510e60(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,float param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  float *pfVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  char *pcVar13;
  undefined1 auStack_534 [8];
  float local_52c;
  float fStack_528;
  int *piStack_524;
  float fStack_520;
  int **local_51c;
  undefined8 uStack_518;
  float fStack_510;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  undefined4 uStack_4fc;
  int *local_4f8;
  int local_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 uStack_4e8;
  int local_4e4;
  int local_4e0;
  int local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  float fStack_4d0;
  undefined4 local_4cc;
  undefined4 uStack_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  char acStack_4a8 [264];
  char acStack_3a0 [264];
  char acStack_298 [264];
  char acStack_190 [268];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  
  uStack_44 = 0xffffffff;
  puStack_48 = &LAB_009b6fbb;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_534;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffac0;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_52c = param_6;
  local_51c = (int **)param_8;
  local_4dc = 0;
  local_4e0 = 0;
  local_4e4 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_4dc,&local_4e0
                       ,&local_4e4,uVar4);
  uVar3 = 0;
  if (cVar2 != '\0') {
    uVar3 = FUN_0067f0a0();
    local_4cc = CONCAT31(local_4cc._1_3_,uVar3);
    uVar3 = FUN_0067f0e0();
    local_4d8 = CONCAT31(local_4d8._1_3_,uVar3);
    uVar3 = FUN_0067f0c0();
    local_4d4 = CONCAT31(local_4d4._1_3_,uVar3);
    FUN_0067f0b0(local_4dc != 0);
    FUN_0067f0f0(local_4e0 != 0);
    FUN_0067f0d0(local_4e4 != 0);
    if ((param_3 != (int *)0x0) && (DAT_00b333c4 != (int *)0x0)) {
      local_4f8 = (int *)0x0;
      local_4f4 = 0;
      uVar5 = (**(code **)(*param_3 + 0x174))(&local_4f8,DAT_00b333c4);
      uVar5 = FUN_004d8af0(uVar5);
      (**(code **)(*DAT_00b333c4 + 0x174))(uVar5);
      uVar5 = FUN_004d8af0();
      cVar2 = FUN_00680110(uVar5);
      if (cVar2 == '\0') {
        FUN_00579b60("No Path found.");
      }
      else {
        fStack_520 = 0.0;
        uStack_4f0 = DAT_00b3f9a8;
        uStack_4e8 = DAT_00b3f9b0;
        uStack_4ec = DAT_00b3f9ac;
        pfVar6 = (float *)(**(code **)(*DAT_00b333c4 + 0x174))();
        fStack_508 = *pfVar6;
        fStack_504 = pfVar6[1];
        fStack_500 = pfVar6[2];
        piVar7 = (int *)FUN_004d8af0();
        if ((local_4f4 == 0) && (local_4f8 == (int *)0x0)) {
          puVar8 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
          uStack_4f0 = *puVar8;
          uStack_4ec = puVar8[1];
          uStack_4e8 = puVar8[2];
        }
        else {
          puVar8 = (undefined4 *)(**(code **)(*local_4f8 + 0x174))();
          uStack_4f0 = *puVar8;
          uStack_4ec = puVar8[1];
          uStack_4e8 = puVar8[2];
          local_51c = &local_4f8;
          do {
            piVar1 = *local_51c;
            if (piVar1 != (int *)0x0) {
              uStack_4fc = FUN_004d7630();
              FUN_0042b410();
              piStack_524 = (int *)FUN_004d8af0();
              pfVar6 = (float *)(**(code **)(*piVar1 + 0x174))();
              fStack_4d0 = *pfVar6 - fStack_508;
              local_52c = pfVar6[1] - fStack_504;
              fStack_528 = (pfVar6[2] - fStack_500) * (pfVar6[2] - fStack_500) +
                           fStack_4d0 * fStack_4d0 + local_52c * local_52c;
              fVar12 = (float10)FUN_00982c30();
              local_52c = (float)fVar12;
              fStack_520 = local_52c + fStack_520;
              uStack_518 = 0.0;
              uStack_44 = 0;
              fStack_528 = local_52c;
              iVar9 = FUN_004d7740();
              if (iVar9 != 0) {
                FUN_004d7740();
                cVar2 = FUN_00428e70();
                if (cVar2 != '\0') {
                  FUN_00412fa0("-Locked");
                }
              }
              if (((uint)piVar1[2] >> 0xb & 1) == 0) {
                iVar9 = FUN_0042b410();
                if ((*(uint *)(iVar9 + 8) >> 0xb & 1) != 0) goto LAB_00511129;
              }
              else {
LAB_00511129:
                FUN_00412fa0("-Disabled");
              }
              (**(code **)(*piVar1 + 0x170))();
              cVar2 = FUN_004b6d10();
              if (cVar2 == '\0') {
                piVar10 = (int *)FUN_0042b410();
                (**(code **)(*piVar10 + 0x170))();
                cVar2 = FUN_004b6d10();
                if (cVar2 != '\0') goto LAB_0051116e;
              }
              else {
LAB_0051116e:
                FUN_00412fa0("-MinUse");
              }
              if ((char)piVar7[1] == '5') {
                pcVar13 = "worldspace";
              }
              else if ((char)piVar7[1] == '0') {
                pcVar13 = "interior cell";
              }
              else {
                pcVar13 = "UNKNOWN";
              }
              __snprintf(acStack_3a0,0x104,pcVar13);
              uVar5 = (**(code **)(*piVar7 + 0xd4))(piVar7[3]);
              __snprintf(acStack_298,0x104,"%s \'%s\' (%08X)",acStack_3a0,uVar5);
              FUN_00579b60("- Travel %.0f units in %s.",(double)local_52c,acStack_298);
              if ((int)uStack_518 == 0) {
                uVar5 = (**(code **)(*piVar1 + 0xd4))(piVar1[3]);
                FUN_00579b60("- Activate Door \'%s\' (%08X).",uVar5);
              }
              else {
                uVar5 = (**(code **)(*piVar1 + 0xd4))(piVar1[3],(int)uStack_518);
                FUN_00579b60("- Activate Door \'%s\' (%08X). (%s)",uVar5);
              }
              piVar7 = piStack_524;
              pfVar6 = (float *)FUN_006899c0();
              fStack_508 = *pfVar6;
              fStack_504 = pfVar6[1];
              fStack_500 = pfVar6[2];
              uStack_44 = 0xffffffff;
              FUN_00401f20((int)uStack_518);
              uStack_518 = 0.0;
            }
            local_51c = (int **)local_51c[1];
          } while (local_51c != (int **)0x0);
          local_51c = (int **)0x0;
        }
        pfVar6 = (float *)(**(code **)(*param_3 + 0x174))();
        uStack_518 = (double)CONCAT44(pfVar6[1] - fStack_504,*pfVar6 - fStack_508);
        fStack_510 = pfVar6[2] - fStack_500;
        fVar12 = (float10)FUN_00404c90();
        local_52c = (float)fVar12;
        if ((char)piVar7[1] == '5') {
          pcVar13 = "worldspace";
        }
        else if ((char)piVar7[1] == '0') {
          pcVar13 = "interior cell";
        }
        else {
          pcVar13 = "UNKNOWN";
        }
        __snprintf(acStack_4a8,0x104,pcVar13);
        uVar5 = (**(code **)(*piVar7 + 0xd4))(piVar7[3]);
        __snprintf(acStack_190,0x104,"%s \'%s\' (%08X)",acStack_4a8,uVar5);
        FUN_00579b60("- Travel %.0f units in %s.",(double)local_52c,acStack_190);
        pfVar6 = (float *)(**(code **)(*param_3 + 0x174))();
        iVar9 = (**(code **)(*param_3 + 0x174))();
        iVar9 = (**(code **)(*param_3 + 0x174))((double)*(float *)(iVar9 + 8));
        FUN_00579b60("- Walk to coord (%.0f, %.0f, %.0f).",(double)*pfVar6,
                     (double)*(float *)(iVar9 + 4));
        fStack_520 = local_52c + fStack_520;
        iVar9 = FUN_0046b250(0x3a);
        uStack_518 = (double)fStack_520;
        fVar12 = (float10)FUN_005e65b0();
        fStack_528 = (float)((float10)uStack_518 / fVar12) / 3600.0;
        piStack_524 = *(int **)(iVar9 + 0x24);
        FUN_00579b60("--Total distance: %.0f units.",(double)fStack_520);
        piStack_524 = (int *)((float)piStack_524 * fStack_528);
        FUN_00579b60("--Estimated Travel Time: %.2f game hours.",(double)(float)piStack_524);
        uStack_4b8 = 0x3f800000;
        uStack_4b4 = 0;
        uStack_4ac = 0;
        uStack_4c4 = 0;
        uStack_4bc = 0;
        uStack_4b0 = 0x3f800000;
        uStack_4c8 = 0x3f800000;
        uStack_4c0 = 0x3f800000;
        uVar5 = (**(code **)(*DAT_00b333c4 + 0x174))(&uStack_4c8,&uStack_4f0,&uStack_4b8);
        uVar5 = FUN_0047f070(uVar5);
        uVar11 = FUN_004e70b0();
        FUN_00405680(uVar11);
        FUN_00440e60(uVar5,0x41f00000);
      }
      FUN_004526e0();
    }
    FUN_0067f0b0(local_4cc);
    FUN_0067f0f0(local_4d8);
    FUN_0067f0d0(local_4d4);
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_4c;
  return uVar3;
}



undefined1
FUN_00511720(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_8;
  float local_4;
  
  local_8 = -1;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  if (local_8 < 0xa0) {
    if (local_8 == 0) {
      local_8 = 0x4b;
      local_4 = 75.0;
    }
    else if (local_8 < 1) {
      local_4 = 1.0 / (float)-local_8;
    }
    else {
      local_4 = (float)local_8;
    }
  }
  else {
    local_8 = 0xa0;
    local_4 = 160.0;
  }
  FUN_00411160(local_4,0);
  FUN_007b70e0(local_4);
  return 1;
}



void FUN_005117e0(byte param_1)

{
  FUN_0050ebd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined1
FUN_00511800(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,double *param_7,undefined4 param_8)

{
  double *pdVar1;
  char cVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int local_8;
  int local_4;
  
  pdVar1 = param_7;
  *param_7 = 0.0;
  param_7 = (double *)0x0;
  local_8 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&param_7,&local_8);
  if (cVar2 == '\0') {
    return 0;
  }
  if ((param_7 != (double *)0x0) && (local_8 != 0)) {
    local_4 = FUN_0051f0b0();
    *pdVar1 = (double)local_4;
  }
  if (DAT_00b361ac != '\0') {
    puVar3 = *(undefined1 **)(local_8 + 0x1c);
    if (puVar3 == (undefined1 *)0x0) {
      puVar3 = &DAT_00a2f7ec;
    }
    puVar4 = *(undefined1 **)((int)param_7 + 0x1c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_00a2f7ec;
    }
    FUN_00579b60("%.20s reaction to %.20s is %.1f",puVar4,puVar3,*pdVar1);
  }
  return 1;
}



undefined1
FUN_005118d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,double *param_7,undefined4 param_8)

{
  double *pdVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  float10 fVar8;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  undefined1 local_10;
  uint local_c;
  uint local_8;
  undefined4 local_4;
  
  pdVar1 = param_7;
  *param_7 = 0.0;
  param_7 = (double *)0x0;
  local_18 = 0;
  local_20 = 0;
  local_1c = 0;
  local_14 = 0;
  cVar4 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&param_7,&local_18,
                       &local_20,&local_1c,&local_14);
  uVar3 = local_8;
  uVar2 = local_c;
  if (cVar4 == '\0') {
    return 0;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = local_c & 0xffffff00;
  if (local_1c != 0) {
    local_8 = CONCAT31(SUB43(uVar3,1),1);
  }
  local_10 = 0 < local_18;
  if (0 < local_14) {
    local_c = CONCAT31(SUB43(uVar2,1),1);
  }
  iVar5 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  local_4 = DAT_00b36798;
  DAT_00b36798 = 0x7fffffff;
  if ((iVar5 == 0) || (param_7 == (double *)0x0)) {
    if ((param_3 != (int *)0x0) && (local_20 != 0)) {
      piVar7 = (int *)FUN_004db260(0x32,1);
      FUN_006c5420(local_20);
      fVar8 = (float10)(**(code **)(*param_3 + 0xdc))(param_7,piVar7,local_8,local_c,1);
      *pdVar1 = (double)fVar8;
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x10))(1);
      }
    }
  }
  else if (*(int **)(iVar5 + 0x58) != (int *)0x0) {
    uVar6 = (**(code **)(**(int **)(iVar5 + 0x58) + 0x4c8))(2);
    (**(code **)(**(int **)(iVar5 + 0x58) + 0x4a0))();
    (**(code **)(**(int **)(iVar5 + 0x58) + 0x484))(uVar6);
    (**(code **)(**(int **)(iVar5 + 0x58) + 0x1a4))(iVar5,param_5,local_18,0,0);
    piVar7 = (int *)FUN_009832e6(*(undefined4 *)(iVar5 + 0x58),0,&PTR_PTR_00b05908,&PTR_PTR_00b05924
                                 ,0);
    if (piVar7 != (int *)0x0) {
      fVar8 = (float10)(**(code **)(*piVar7 + 0x208))();
      *pdVar1 = (double)fVar8;
      DAT_00b36798 = local_4;
      return 1;
    }
  }
  DAT_00b36798 = local_4;
  return 1;
}



undefined1
FUN_00511ab0(double *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_EBX;
  float10 extraout_ST0;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined1 local_4;
  
  *param_7 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_10,&local_c,
                       &local_8);
  uVar1 = DAT_00b36798;
  if (cVar2 == '\0') {
    return 0;
  }
  if (0 < local_8) {
    local_4 = 1;
  }
  DAT_00b36798 = 0x7fffffff;
  iVar3 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((iVar3 == 0) || (local_10 == 0)) {
    if (param_3 != (int *)0x0) {
      (**(code **)(*param_3 + 0xdc))(local_c,local_10,0,0,1);
    }
  }
  else if (*(int **)(iVar3 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x4a0))();
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x484))(local_10);
    *(undefined4 *)(iVar3 + 0xe4) = unaff_EBX;
    (**(code **)(**(int **)(iVar3 + 0x58) + 0x1a4))(iVar3,local_10,local_8,0,0);
    piVar4 = (int *)FUN_009832e6(*(undefined4 *)(iVar3 + 0x58),0,&PTR_PTR_00b05908,&PTR_PTR_00b05924
                                 ,0);
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x208))();
      *param_1 = (double)extraout_ST0;
      DAT_00b36798 = uVar1;
      return 1;
    }
  }
  DAT_00b36798 = uVar1;
  return 1;
}



undefined4 FUN_00511c10(undefined4 param_1,undefined4 param_2,int *param_3)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  float local_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cde86;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != (int *)0x0) {
    local_24 = 10.0;
    iVar3 = (**(code **)(*param_3 + 0x154))(uVar2);
    if (iVar3 != 0) {
      iVar3 = (**(code **)(*param_3 + 0x154))();
      fVar1 = *(float *)(iVar3 + 0x2c) * 0.5;
      if (fVar1 < 10.0) {
        local_24 = fVar1;
      }
    }
    pfVar4 = (float *)FUN_00401f00(0x48);
    puVar5 = (undefined4 *)FUN_00401f00(0x60);
    uStack_4 = 0;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      _vector_constructor_iterator_(puVar5,0x10,6,FUN_0047ea50);
    }
    uStack_4 = 0xffffffff;
    puVar6 = (undefined1 *)FUN_00401f00(6);
    *puVar6 = 1;
    puVar6[1] = 0;
    puVar6[2] = 1;
    puVar6[3] = 0;
    puVar6[4] = 1;
    puVar6[5] = 0;
    *puVar5 = 0x3f800000;
    puVar5[1] = 0x3f800000;
    puVar5[4] = 0x3f800000;
    puVar5[2] = 0;
    puVar5[3] = 0x3f800000;
    puVar5[5] = 0x3f800000;
    puVar5[6] = 0;
    puVar5[8] = 0x3f800000;
    puVar5[7] = 0x3f800000;
    puVar5[9] = 0x3f800000;
    puVar5[10] = 0;
    puVar5[0xc] = 0x3f800000;
    puVar5[0xb] = 0x3f800000;
    puVar5[0xd] = 0x3f800000;
    puVar5[0xe] = 0;
    puVar5[0x10] = 0x3f800000;
    puVar5[0xf] = 0x3f800000;
    puVar5[0x11] = 0x3f800000;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0x3f800000;
    puVar5[0x14] = 0x3f800000;
    puVar5[0x15] = 0x3f800000;
    puVar5[0x16] = 0;
    fVar1 = -local_24;
    puVar5[0x17] = 0x3f800000;
    *pfVar4 = fVar1;
    pfVar4[1] = 0.0;
    pfVar4[2] = 0.0;
    pfVar4[3] = local_24;
    pfVar4[4] = 0.0;
    pfVar4[5] = 0.0;
    pfVar4[6] = 0.0;
    pfVar4[7] = fVar1;
    pfVar4[8] = 0.0;
    pfVar4[9] = 0.0;
    pfVar4[10] = local_24;
    pfVar4[0xb] = 0.0;
    pfVar4[0xc] = 0.0;
    pfVar4[0xd] = 0.0;
    pfVar4[0xe] = fVar1;
    pfVar4[0xf] = 0.0;
    pfVar4[0x10] = 0.0;
    pfVar4[0x11] = local_24;
    iVar3 = FUN_00401f00(0xc0);
    uStack_4 = 1;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007177e0(6,pfVar4,puVar5,0,1,0,puVar6);
    }
    uStack_4 = 0xffffffff;
    uVar7 = FUN_004e70b0();
    FUN_00405680(uVar7);
    puVar5 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
    *(undefined4 *)(iVar3 + 0x54) = *puVar5;
    *(undefined4 *)(iVar3 + 0x58) = puVar5[1];
    *(undefined4 *)(iVar3 + 0x5c) = puVar5[2];
    FUN_00440e60(iVar3,0x41a00000);
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_005123a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float10 fVar7;
  undefined4 uVar8;
  int local_8;
  float fStack_4;
  
  local_8 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar1 == '\0') {
    return 0;
  }
  piVar2 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((piVar2 != (int *)0x0) && (local_8 != 0)) {
    cVar1 = FUN_005e6b40();
    if ((cVar1 == '\0') && (piVar2[0x16] != 0)) {
      iVar6 = *(int *)(piVar2[0x16] + 8);
      if (iVar6 != 0) {
        FUN_004fbf90(iVar6,piVar2 + 0x11,0x800);
      }
      FUN_004fbf90(local_8,piVar2 + 0x11,0x200);
      if (*(int *)(local_8 + 0x18) == -1) {
        FUN_005672a0();
      }
      iVar6 = piVar2[10];
      uVar3 = (**(code **)(*piVar2 + 0x174))(iVar6);
      uVar4 = FUN_006ecc80(uVar3);
      uVar5 = FUN_004d6670(uVar4);
      FUN_004d7a20(uVar5,uVar4,uVar3,iVar6);
      FUN_005660c0(1);
      FUN_005f1590(local_8,0,0);
      if ((int *)piVar2[0x16] != (int *)0x0) {
        iVar6 = (**(code **)(*(int *)piVar2[0x16] + 8))();
        if (iVar6 != 0) {
          iVar6 = *(int *)piVar2[0x16];
          fVar7 = (float10)FUN_00402bd0();
          fStack_4 = (float)(fVar7 - (float10)1.0);
          (**(code **)(iVar6 + 0x1c))(fStack_4);
          iVar6 = (**(code **)(*(int *)piVar2[0x16] + 8))();
          if (iVar6 == 1) {
            uVar3 = (**(code **)(*(int *)piVar2[0x16] + 8))();
            FUN_00674550(piVar2,uVar3);
            uVar8 = 0;
            uVar5 = 0;
            uVar4 = 0;
            uVar3 = (**(code **)(*(int *)piVar2[0x16] + 8))(0,0,0);
            FUN_00673a90(piVar2,uVar3,uVar4,uVar5,uVar8);
          }
        }
      }
    }
  }
  return 1;
}



void FUN_00512540(int *param_1,int *param_2,float param_3,float param_4,float param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((param_1 == DAT_00b333c4) && (cVar1 = (**(code **)(*DAT_00b333c4 + 0x198))(0), cVar1 != '\0'))
  {
    return;
  }
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  cVar1 = (**(code **)(*param_1 + 400))();
  if (cVar1 != '\0') {
    FUN_00675d50(param_1,0);
  }
  iVar2 = FUN_006ecc80();
  iVar3 = FUN_004d6670();
  iStack_8 = param_2[9];
  iStack_4 = param_2[10];
  iStack_c = param_2[8];
  pfVar4 = (float *)(**(code **)(*param_2 + 0x174))();
  fStack_18 = *pfVar4 + param_3;
  fStack_14 = pfVar4[1] + param_4;
  fStack_10 = pfVar4[2] + param_5;
  if (param_1 == DAT_00b333c4) {
    if (DAT_00b35b90 != 0) {
      thunk_FUN_004be420();
    }
    if (DAT_00b35b8c != 0) {
      thunk_FUN_004bd8c0();
    }
    if (iVar2 != 0) {
LAB_005126aa:
      iVar3 = FUN_00585c10(1);
      if ('\0' < *(char *)(iVar3 + 0x31)) {
        FUN_005859c0();
        uVar8 = 0;
        uVar7 = 3;
        FUN_00582160(0,1,3,0);
        FUN_0057cfe0(uVar7,uVar8);
      }
      iStack_c = 0;
      iStack_8 = 0;
      FUN_0066eaf0(fStack_18,fStack_14,fStack_10,0,0,iStack_4,iVar2,1);
      (**(code **)(*param_1 + 0x178))(0);
      *(undefined1 *)((int)DAT_00b333c4 + 0x117) = 1;
      FUN_00665260(param_1);
      return;
    }
    if (iVar3 != 0) {
      iVar6 = (int)ROUND(fStack_18) >> 0xc;
      iVar5 = (int)ROUND(fStack_14) >> 0xc;
      iVar2 = FUN_004efe80(iVar6,iVar5);
      if ((iVar2 == 0) && (iVar2 = FUN_004f1630(iVar6,iVar5), iVar2 == 0)) {
        iVar2 = FUN_004471d0(0,iVar6,iVar5,iVar3);
      }
      *(undefined1 *)((int)DAT_00b333c4 + 0x117) = 1;
      if (iVar2 != 0) goto LAB_005126aa;
    }
    goto LAB_00512853;
  }
  FUN_004d8a30(fStack_18,fStack_14,fStack_10);
  (**(code **)(*param_1 + 0x178))(0);
  cVar1 = (**(code **)(*param_1 + 0x188))();
  if ((cVar1 != '\0') && (iVar5 = FUN_0065a2c0(), iVar5 != 0)) {
    FUN_00452a10(&fStack_18);
  }
  if ((iVar2 == 0) || (cVar1 = FUN_0043f8c0(iVar2,0), cVar1 == '\0')) {
    if (param_1 != DAT_00b333c4) {
      uVar7 = 0x7f7fffff;
      goto LAB_005127df;
    }
  }
  else {
    FUN_004d8a10(iStack_4);
    uVar7 = 0;
LAB_005127df:
    FUN_004d89d0(uVar7);
  }
  FUN_004dd4b0(param_1,iVar2,iVar3);
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x58) + 0x20))();
      FUN_00601b80();
      (**(code **)(**(int **)(iVar2 + 0x58) + 0xb8))(iVar2);
      FUN_00665260(param_1);
      return;
    }
    FUN_004a7a60("Actor being moved is Disabled he has no process");
  }
LAB_00512853:
  FUN_00665260(param_1);
  return;
}



undefined4
FUN_00512870(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_10,&local_4,
                       &local_8,&local_c);
  if (cVar1 == '\0') {
    return 0;
  }
  if ((local_10 != 0) &&
     (FUN_00512540(param_3,local_10,local_4,local_8,local_c), param_3 == DAT_00b333c4)) {
    return 0;
  }
  return 1;
}



undefined1
FUN_00512ca0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  char *pcVar19;
  int local_38;
  float fStack_34;
  undefined4 local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7006;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_30 = 0xbf800000;
  local_38 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_38,&local_30,
                       uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 == (int *)0x0) {
    param_3 = DAT_00b333c4;
  }
  uVar3 = FUN_006ecc80();
  cVar1 = FUN_0043f8c0(uVar3,0);
  if (cVar1 == '\0') goto LAB_00512f84;
  iVar4 = (**(code **)(*param_3 + 0x154))();
  if (iVar4 == 0) {
    fStack_20 = (float)param_3[9];
    fStack_24 = (float)param_3[8];
    fStack_1c = (float)param_3[10];
    puVar5 = (undefined4 *)(**(code **)(*param_3 + 0x174))();
    uStack_10 = puVar5[2];
    fStack_34 = -fStack_1c;
    uVar3 = *puVar5;
    uVar9 = puVar5[1];
    fVar10 = (float10)FUN_00986000();
    fStack_2c = (float)fVar10;
    fStack_28 = fStack_2c;
    fVar10 = (float10)FUN_00986300();
    fStack_2c = (float)fVar10;
    fStack_24 = -fStack_2c;
    fStack_20 = fStack_28;
    fStack_1c = 0.0;
    FUN_006ecc80();
    uVar6 = FUN_004c9be0(param_3);
    uVar17 = 3;
    FUN_006ecc80(uVar6,3);
    fStack_28 = (float)FUN_00441800(uVar6,uVar17);
    fStack_2c = (float)FUN_00401f00(0x20);
    uStack_4 = 0;
    if (fStack_2c == 0.0) {
      piVar8 = (int *)0x0;
    }
    else {
      uVar18 = 0;
      uVar16 = 0x3f800000;
      fVar13 = fStack_24;
      fVar14 = fStack_20;
      fVar15 = fStack_1c;
      uVar6 = uStack_10;
      uVar17 = (**(code **)(*(int *)(local_38 + 0x18) + 0x14))
                         (fStack_24,fStack_20,fStack_1c,uVar3,uVar9,uStack_10,0x3f800000,0);
      uVar11 = 0x3f800000;
      fVar12 = fStack_28;
      uVar7 = FUN_006ecc80(0x3f800000,fStack_28,uVar17);
      piVar8 = (int *)FUN_005713f0(uVar7,uVar11,fVar12,uVar17,fVar13,fVar14,fVar15,uVar3,uVar9,uVar6
                                   ,uVar16,uVar18);
    }
    uStack_4 = 0xffffffff;
    FUN_00570c00("SpecialIdle_HitEffect");
LAB_00512e88:
    FUN_00678d30(piVar8);
    if (DAT_00b361ac == '\0') goto LAB_00512f84;
    iVar4 = FUN_004da2a0();
    if (iVar4 != 0) {
      uVar3 = FUN_004da2a0();
      FUN_00579b60("Visual effect has been applied to %s",uVar3);
      goto LAB_00512f84;
    }
    pcVar19 = "Visual effect has been applied to reference";
  }
  else {
    if (local_38 != 0) {
      iVar4 = FUN_00449190();
      if (iVar4 != 0) {
        fStack_28 = (float)FUN_00401f00(0x38);
        uStack_4 = 1;
        if (fStack_28 == 0.0) {
          piVar8 = (int *)0x0;
        }
        else {
          uVar3 = local_30;
          uVar9 = (**(code **)(*(int *)(local_38 + 0x18) + 0x14))(local_30);
          piVar8 = (int *)FUN_0069e4f0(param_3,uVar9,uVar3);
        }
        uStack_4 = 0xffffffff;
        if (piVar8 != (int *)0x0) {
          cVar1 = (**(code **)(*piVar8 + 0x68))();
          if (cVar1 != '\0') goto LAB_00512e88;
          (**(code **)*piVar8)(1);
        }
      }
    }
    if (DAT_00b361ac == '\0') goto LAB_00512f84;
    iVar4 = FUN_004da2a0();
    if (iVar4 != 0) {
      uVar3 = FUN_004da2a0();
      FUN_00579b60("Visual effect initialization failed for %s",uVar3);
      goto LAB_00512f84;
    }
    pcVar19 = "Visual effect initialization failed for reference";
  }
  FUN_00579b60(pcVar19);
LAB_00512f84:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Type propagation algorithm not settling */

undefined1
FUN_00512fa0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int local_8 [2];
  
  local_8[1] = 0xbf800000;
  local_8[0] = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_8,local_8 + 1);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = DAT_00b333c4;
  }
  if (local_8[0] != 0) {
    if (*(ushort *)(local_8[0] + 0x20) == 0xffff) {
      pcVar3 = *(char **)(local_8[0] + 0x1c);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(local_8[0] + 0x20);
    }
    if (uVar4 != 0) {
      uVar5 = (**(code **)(*(int *)(local_8[0] + 0x18) + 0x14))();
      FUN_00678f50(param_3,uVar5);
    }
  }
  if (DAT_00b361ac != '\0') {
    iVar6 = FUN_004da2a0();
    if (iVar6 != 0) {
      uVar5 = FUN_004da2a0();
      FUN_00579b60("Visual effect has been removed from %s",uVar5);
      return 1;
    }
    FUN_00579b60("Visual effect has been removed from reference");
  }
  return 1;
}



undefined1
FUN_00513090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int local_8;
  undefined1 auStack_4 [4];
  
  local_8 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_8);
  if (cVar2 == '\0') {
    return 0;
  }
  if (local_8 != 0) {
    if (*(ushort *)(local_8 + 0x20) == 0xffff) {
      pcVar3 = *(char **)(local_8 + 0x1c);
      pcVar1 = pcVar3 + 1;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      uVar4 = (int)pcVar3 - (int)pcVar1;
    }
    else {
      uVar4 = (uint)*(ushort *)(local_8 + 0x20);
    }
    if (uVar4 != 0) {
      uVar5 = (**(code **)(*(int *)(local_8 + 0x18) + 0x14))();
      iVar6 = ModelLoader_IsModelLoaded(uVar5);
      if (iVar6 == 0) {
        uVar10 = 1;
        uVar7 = 5;
        iVar8 = iVar6;
        iVar9 = iVar6;
        iVar11 = iVar6;
        uVar5 = (**(code **)(*(int *)(local_8 + 0x18) + 0x14))(5,0,0,0,1,0);
        FUN_0043b420(auStack_4,uVar5,uVar7,iVar6,iVar8,iVar9,uVar10,iVar11);
        FUN_004bddc0();
      }
    }
  }
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00513280(undefined4 param_1,int param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,undefined4 param_7,int *param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  int *unaff_FS_OFFSET;
  undefined8 auStackY_402d8 [32735];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_374 [44];
  uint local_348;
  int local_344;
  undefined4 local_340;
  int local_33c;
  undefined4 local_338;
  undefined2 local_334;
  undefined2 local_332;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328 [2];
  undefined4 local_320;
  undefined4 local_318;
  undefined4 local_310;
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8 [4];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [516];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  int local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009b7051;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_374;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffc80;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_344 = param_5;
  local_340 = param_6;
  local_32c = param_1;
  local_33c = param_3;
  local_330 = param_4;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_288,uVar2);
  if (cVar1 == '\0') {
LAB_005135da:
    uVar3 = 0;
  }
  else {
    local_348 = (uint)*(ushort *)(*param_8 + param_2);
    *param_8 = *param_8 + 2;
    _memset(local_2d8,0,0x50);
    sVar4 = 0;
    if (0 < (short)local_348) {
      do {
        uVar7 = CONCAT44(1,local_340);
        uVar6 = CONCAT44(local_344,local_330);
        uVar5 = CONCAT44(local_33c,param_8);
        local_2d8[sVar4] = 0;
        cVar1 = FUN_004fab20(local_2d8 + sVar4,param_2,uVar5,uVar6,uVar7);
        if (cVar1 == '\0') goto LAB_005135da;
        sVar4 = sVar4 + 1;
      } while (sVar4 < (short)local_348);
    }
    local_338 = 0;
    local_334 = 0;
    local_332 = 0;
    local_44 = 0;
    FUN_00402e30(&local_338,local_288,local_2d8[0],local_2d8[1],local_2d8[2],local_2d8[3],local_2b8,
                 local_2b0,local_2a8,local_2a0,local_298,local_290);
    local_348 = (uint)*(ushort *)(*param_8 + param_2);
    *param_8 = *param_8 + 2;
    _eh_vector_constructor_iterator_(local_328,8,10,FUN_00402d60,FUN_00402da0);
    sVar4 = 0;
    local_44._0_1_ = 1;
    if (0 < (short)local_348) {
      do {
        cVar1 = FUN_004fae80(local_32c,param_2,param_8,local_33c,local_330,local_344,local_340);
        if (cVar1 == '\0') {
          local_44 = (uint)local_44._1_3_ << 8;
          _eh_vector_destructor_iterator_(local_328,8,10,FUN_00402da0);
          goto LAB_005135d2;
        }
        FUN_004028d0(local_288,0);
        sVar4 = sVar4 + 1;
      } while (sVar4 < (short)local_348);
    }
    if ((short)local_348 < 1) {
      FUN_004028d0(DAT_00b38d38,0);
    }
    if ((local_33c == 0) || ((*(uint *)(local_33c + 8) >> 0xe & 1) != 0)) {
      if (local_344 == 0) {
        local_44 = (uint)local_44._1_3_ << 8;
        _eh_vector_destructor_iterator_(local_328,8,10,FUN_00402da0);
LAB_005135d2:
        FUN_00401f20();
        goto LAB_005135da;
      }
      _DAT_00b361c8 = *(undefined4 *)(local_344 + 0xc);
    }
    else {
      _DAT_00b361c8 = *(undefined4 *)(local_33c + 0xc);
    }
    DAT_00b09e24 = 0xff;
    FUN_00579c10(local_338,&LAB_005003e0,0,local_328[0],local_320,local_318,local_310,local_308,
                 local_300,local_2f8,local_2f0,local_2e8,local_2e0);
    local_44 = (uint)local_44._1_3_ << 8;
    _eh_vector_destructor_iterator_(local_328,8,10,FUN_00402da0);
    FUN_00401f20();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_4c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00513600(undefined4 param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,int *param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  char *pcVar4;
  short sVar5;
  int *unaff_FS_OFFSET;
  undefined8 auStackY_402d8 [32751];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2f4 [4];
  uint local_2f0;
  char *local_2ec;
  ushort local_2e8;
  undefined2 local_2e6;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8 [4];
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 local_288 [516];
  uint local_84;
  int local_4c;
  undefined1 *puStack_48;
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  puStack_48 = &LAB_009b708b;
  local_4c = *unaff_FS_OFFSET;
  local_84 = DAT_00b30aac ^ (uint)auStack_2f4;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffd00;
  *unaff_FS_OFFSET = (int)&local_4c;
  local_2e4 = param_5;
  local_2e0 = param_6;
  local_2ec = param_3;
  local_2dc = param_4;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_288,uVar2);
  if (cVar1 == '\0') {
LAB_00513685:
    uVar3 = 0;
  }
  else {
    local_2f0 = (uint)*(ushort *)(*param_8 + param_2);
    *param_8 = *param_8 + 2;
    _memset(local_2d8,0,0x50);
    sVar5 = 0;
    if (0 < (short)local_2f0) {
      do {
        uVar8 = CONCAT44(1,local_2e0);
        uVar7 = CONCAT44(local_2e4,local_2dc);
        uVar6 = CONCAT44(local_2ec,param_8);
        local_2d8[sVar5] = 0;
        cVar1 = FUN_004fab20(local_2d8 + sVar5,param_2,uVar6,uVar7,uVar8);
        if (cVar1 == '\0') goto LAB_00513685;
        sVar5 = sVar5 + 1;
      } while (sVar5 < (short)local_2f0);
    }
    local_2ec = (char *)0x0;
    local_2e8 = 0;
    local_2e6 = 0;
    local_44 = 0;
    FUN_00402e30(&local_2ec,local_288,local_2d8[0],local_2d8[1],local_2d8[2],local_2d8[3],local_2b8,
                 local_2b0,local_2a8,local_2a0,local_298,local_290);
    local_2f0 = *(int *)(*param_8 + param_2);
    *param_8 = *param_8 + 4;
    if (local_2f0 == 0) {
      local_2f0 = 10;
    }
    if (local_2e8 == 0xffff) {
      pcVar4 = local_2ec;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      uVar2 = (int)pcVar4 - (int)(local_2ec + 1);
    }
    else {
      uVar2 = (uint)local_2e8;
    }
    if (uVar2 != 0) {
      FUN_0057acc0(local_2ec,0,1,(float)(int)local_2f0);
    }
    FUN_00401f20();
    uVar3 = 1;
  }
  *unaff_FS_OFFSET = local_4c;
  return uVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1
FUN_00513810(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  undefined2 uStack_120;
  undefined2 uStack_11e;
  double local_11c;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b70cb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_12c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffec4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_124 = param_8;
  local_12c = 0;
  local_128 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_12c,&local_128
                       ,uVar3);
  uVar2 = 0;
  if (cVar1 != '\0') {
    if (param_3 != (int *)0x0) {
      iVar4 = FUN_009832e6(local_12c,0,&PTR_PTR_00b03268,&PTR_PTR_00b05da4,0);
      if ((iVar4 != 0) && (iVar5 = FUN_0041e6f0(), iVar5 != 0)) {
        local_12c = FUN_00487760(iVar4);
      }
      piVar6 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
      if (piVar6 == (int *)0x0) {
        (**(code **)(*param_3 + 0x100))(local_12c,0,local_128,0,0,0,0,0,1,0);
      }
      else {
        local_11c = (double)local_128;
        FUN_004f48f0(param_3,local_12c,0,&local_11c);
        if (local_11c < (double)local_128) {
          local_128 = FUN_009828c0();
        }
        iVar4 = 0;
        cVar1 = FUN_004d8880(local_12c);
        if (cVar1 != '\0') {
          iVar5 = FUN_005e02e0(0);
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + 0x44;
          }
          iVar5 = FUN_00485e00(param_3,iVar5);
          if (iVar5 != 0) {
            iVar4 = FUN_00485fa0(local_12c,0);
            if (iVar4 != 0) {
              FUN_0041f370(0);
            }
          }
        }
        if (0 < local_128) {
          cVar1 = FUN_004d8880(local_12c);
          if (cVar1 != '\0') {
            FUN_006a2110(local_12c,1);
          }
          (**(code **)(*piVar6 + 0x100))(local_12c,iVar4,local_128,0,0,0,0,0,1,0);
          if (piVar6 == DAT_00b333c4) {
            local_124 = 0;
            uStack_120 = 0;
            uStack_11e = 0;
            uStack_4 = 0;
            if (local_128 < 2) {
              uVar7 = FUN_00469cd0(local_12c,DAT_00b382b0);
              FUN_00402e30(&local_124,"%s %s",uVar7);
            }
            else {
              uVar7 = FUN_00469cd0(local_12c,DAT_00b38298,DAT_00b382b0);
              FUN_00402e30(&local_124,"%i %s%s %s",local_128,uVar7);
            }
            uVar7 = FUN_004702d0(local_12c,DAT_00b333c4);
            _sprintf(acStack_114,"%s\\%s","Icons",uVar7);
            uVar7 = FUN_005e96e0(local_12c,0,0);
            FUN_0057add0(local_124,0x40000000,acStack_114,uVar7);
            FUN_0057a3b0(0);
            uStack_4 = 0xffffffff;
            FUN_00402da0();
          }
          else if ((cVar1 != '\0') && (piVar6[0x16] != 0)) {
            iVar4 = (**(code **)(*piVar6 + 0x154))();
            if (iVar4 != 0) {
              (**(code **)(*(int *)piVar6[0x16] + 0x80))(piVar6,0);
            }
          }
        }
      }
    }
    uVar2 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00513c90(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  int local_428;
  int local_424;
  float local_420;
  undefined4 local_41c;
  undefined2 local_418;
  undefined2 local_416;
  int local_414;
  char local_410 [1024];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b710b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_428;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffbc8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_420 = (float)param_8;
  local_414 = param_3;
  local_41c = 0;
  local_418 = 0;
  local_416 = 0;
  local_4 = 0;
  local_424 = 0;
  local_428 = 0x32;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_410,&local_424,
                       &local_428,uVar3);
  if (cVar2 != '\0') {
    iVar4 = 0;
    do {
      pcVar1 = local_410 + iVar4;
      iVar4 = iVar4 + 1;
    } while (*pcVar1 != '\0');
    if ((((param_3 != 0) &&
         (iVar4 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0), iVar4 != 0)) &&
        (*(int *)(iVar4 + 0x58) != 0)) && (iVar5 = FUN_00659a00(), iVar5 == 0)) {
      if ((local_424 < 0) || (6 < local_424)) {
        local_424 = 0;
      }
      if (local_428 < 0) {
        local_428 = 0;
      }
      else if (100 < local_428) {
        local_428 = 100;
      }
      FUN_00402e30(&local_41c,&DAT_00a2f864,local_410);
      fVar7 = (float10)FUN_005f7310(local_41c,&local_414,local_424,local_428,0,0,0,0,1);
      local_420 = (float)fVar7;
      (**(code **)(**(int **)(iVar4 + 0x58) + 0x204))(1);
      (**(code **)(**(int **)(iVar4 + 0x58) + 0x20c))(local_424);
      if (DAT_00b361ac != '\0') {
        FUN_00579b60("The NPC will speak the sound now.");
      }
      local_4 = 0xffffffff;
      FUN_00402da0();
      uVar6 = 1;
      goto LAB_00513e67;
    }
  }
  FUN_00401f20(0);
  uVar6 = 0;
LAB_00513e67:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



undefined1
FUN_00513e90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1c,uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if ((local_1c != 0) && (*(byte *)(local_1c + 4) - 0x31 < 3)) {
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_4 = 0;
    uVar3 = FUN_004da2a0(*(undefined4 *)(local_1c + 0xc));
    FUN_00402e30(&local_14,"\"%s\" (%08x)",uVar3);
    uVar3 = local_14;
    uVar10 = 0;
    uVar9 = 0xbf800000;
    uVar8 = 0xffffffff;
    local_18 = DAT_00b02e1c + 0x14;
    fVar6 = (float)local_18;
    uVar7 = 2;
    uVar5 = 0x44200000;
    uVar4 = local_14;
    FUN_00571f90(1,local_14,0x44200000,fVar6,2,0xffffffff,0xbf800000,0);
    FUN_005723e0(uVar4,uVar5,fVar6,uVar7,uVar8,uVar9,uVar10);
    FUN_0057c980(local_1c);
    FUN_00401f20(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_00514660(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *unaff_ESI;
  int unaff_EDI;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_8);
  if (cVar2 == '\0') {
    return 0;
  }
  if (param_3 == 0) {
    return 1;
  }
  piVar4 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar4 == (int *)0x0) {
    return 1;
  }
  iVar11 = 0;
  cVar2 = (**(code **)(*piVar4 + 0x198))();
  if (cVar2 != '\0') {
    return 1;
  }
  if (unaff_ESI == (int *)0x0) {
    return 1;
  }
  cVar2 = (**(code **)(*unaff_ESI + 0x198))(0);
  if (cVar2 != '\0') {
    return 1;
  }
  if (piVar4[0x16] == 0) {
    return 1;
  }
  if (*(int *)(unaff_EDI + 0x58) == 0) {
    return 1;
  }
  cVar2 = FUN_005e6b40();
  if (cVar2 == '\0') {
    if (unaff_EDI == DAT_00b333c4) goto LAB_00514750;
  }
  else {
    if (unaff_EDI != DAT_00b333c4) {
      uVar5 = FUN_004da2a0();
      FUN_004a7a60("  %s is in conversation so will not go into combat. Do not put startcombat in the dialogue results"
                   ,uVar5);
      return 1;
    }
LAB_00514750:
    cVar2 = FUN_0065d550();
    iVar8 = DAT_00b333c4;
    if (cVar2 != '\0') {
      *(undefined4 *)(DAT_00b333c4 + 0x590) = 0;
      *(undefined1 *)(iVar8 + 0x594) = 1;
      FUN_00674e10(piVar4);
    }
  }
  cVar2 = FUN_005e6c60();
  iVar8 = DAT_00b37210;
  iVar6 = (**(code **)(*piVar4 + 0x330))();
  if (iVar6 != 0) {
    iVar6 = (**(code **)(*piVar4 + 0x330))();
    if ((*(int **)(iVar6 + 0x40) != (int *)0x0) && (iVar6 = **(int **)(iVar6 + 0x40), iVar6 != 0)) {
      iVar8 = *(int *)(iVar6 + 4) + 0x14;
    }
  }
  cVar3 = (**(code **)(*piVar4 + 0x334))(1);
  iVar6 = iVar11;
  if (cVar3 != '\0') {
    iVar7 = (**(code **)(*piVar4 + 0x330))();
    iVar6 = iVar11;
    if (iVar7 == 0) goto LAB_00514828;
    (**(code **)(*piVar4 + 0x330))(iVar11);
    cVar3 = FUN_00613670(iVar11);
    if (cVar3 != '\0') goto LAB_00514828;
  }
  if ((int *)piVar4[0x16] != (int *)0x0) {
    (**(code **)(*(int *)piVar4[0x16] + 0x228))(piVar4,iVar6,1,0,0,unaff_EDI,0,1,0,1);
  }
LAB_00514828:
  iVar11 = (**(code **)(*piVar4 + 0x330))();
  if (iVar11 != 0) {
    iVar11 = (**(code **)(*piVar4 + 0x330))();
    piVar9 = *(int **)(iVar11 + 0x40);
    iVar11 = FUN_0052b4a0();
    if (iVar11 == 1) {
      if ((*(int *)*piVar9 == iVar6) && ((char)((int *)*piVar9)[2] == '\0')) {
        FUN_0060d020(iVar8);
        *(undefined1 *)(*piVar9 + 8) = 1;
      }
    }
    else {
      for (; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
        piVar1 = (int *)*piVar9;
        if ((piVar1 != (int *)0x0) && (*piVar1 == iVar6)) {
          if (piVar1[1] != iVar8) {
            FUN_0060d020(iVar8);
            (**(code **)(*piVar4 + 0x330))();
            FUN_005b27a0(&LAB_00614190);
          }
          break;
        }
      }
    }
  }
  if (cVar2 != '\0') {
    if (iVar6 == DAT_00b333c4) {
      *(undefined1 *)(DAT_00b333c4 + 0x738) = 1;
    }
    (**(code **)(*(int *)piVar4[0x16] + 0x22c))(piVar4,iVar6);
  }
  iVar11 = (**(code **)(*piVar4 + 0x330))();
  if (iVar11 != 0) {
    FUN_005e91e0(0x1d,0x4c4d4843,1);
    iVar11 = (**(code **)(*(int *)piVar4[0x16] + 0x50))();
    if (iVar11 == 0) {
      FUN_005e91e0(0x1d,0x49564e49,1);
    }
    iVar11 = (**(code **)(*(int *)piVar4[0x16] + 0x50))();
    if (iVar11 != 0) {
      uVar10 = 0;
      piVar9 = piVar4 + 0x1a;
      uVar5 = (**(code **)(*(int *)piVar4[0x16] + 0x50))(piVar9,0);
      FUN_00699190(uVar5,piVar9,uVar10);
    }
  }
  return 1;
}



undefined1
FUN_00514950(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *unaff_FS_OFFSET;
  int local_20;
  undefined4 uStack_1c;
  undefined2 uStack_18;
  undefined2 uStack_16;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7180;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20,uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 != 0) {
    piVar3 = (int *)FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x2dc))(local_20);
      if (cVar1 == '\0') {
        puVar6 = *(undefined1 **)(local_20 + 0x1c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00a2f7ec;
        }
        uVar4 = FUN_004da2a0();
        FUN_00579b60("Spell \'%s\' not added to %s",puVar6,uVar4);
      }
      else {
        *param_7 = 0x3ff0000000000000;
        puVar6 = *(undefined1 **)(local_20 + 0x1c);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_00a2f7ec;
        }
        uVar4 = FUN_004da2a0();
        FUN_00579b60("Spell \'%s\' added to %s",puVar6,uVar4);
        if (piVar3 == DAT_00b333c4) {
          uStack_14 = 0;
          uStack_10 = 0;
          uStack_e = 0;
          puVar6 = *(undefined1 **)(local_20 + 0x1c);
          iStack_4 = 0;
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&uStack_14,"%s %s",puVar6,DAT_00b382a8);
          uStack_1c = 0;
          uStack_18 = 0;
          uStack_16 = 0;
          iStack_4._0_1_ = 1;
          iVar5 = FUN_004152c0(3,0);
          puVar6 = *(undefined1 **)(*(int *)(iVar5 + 0x1c) + 0x48);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_00a2f7ec;
          }
          FUN_00402e30(&uStack_1c,"%s\\%s","Icons",puVar6);
          FUN_0057add0(uStack_14,0x40000000,uStack_1c,0);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_00402da0();
          iStack_4 = 0xffffffff;
          FUN_00402da0();
          *unaff_FS_OFFSET = local_c;
          return 1;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00514b50(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,float param_6,undefined8 *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float *pfVar12;
  int *piVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  undefined4 uVar21;
  undefined1 auStack_224 [12];
  int *local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  double local_208;
  undefined8 uStack_200;
  float fStack_1f8;
  double dStack_1f0;
  int local_1e8;
  int local_1e4;
  undefined8 local_1e0;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  int local_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [2];
  int local_1ac;
  double dStack_1a8;
  undefined4 uStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  double dStack_180;
  undefined8 *local_174;
  int local_170;
  int local_16c;
  int local_168;
  float afStack_164 [4];
  float fStack_154;
  float fStack_14c;
  float fStack_148;
  float afStack_140 [28];
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  undefined4 uStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined4 uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  undefined4 uStack_94;
  undefined1 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_6c;
  int iStack_60;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_24;
  int local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_009b71ab;
  local_1c = *unaff_FS_OFFSET;
  local_24 = DAT_00b30aac ^ (uint)auStack_224;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffdd0;
  *unaff_FS_OFFSET = (int)&local_1c;
  local_208 = (double)CONCAT44(local_208._4_4_,param_8);
  local_1e0._0_4_ = param_5;
  local_218 = (int *)param_6;
  *param_7 = 0;
  local_174 = param_7;
  local_1e8 = 0;
  local_1e4 = 1;
  local_1cc = 0;
  local_1ac = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1e8,&local_1e4
                       ,&local_1cc,&local_1ac,uVar2);
  if (cVar1 == '\0') {
LAB_00514c11:
    uVar5 = 0;
  }
  else {
    local_1e0 = (double)((ulonglong)local_1e0._4_4_ << 0x20);
    if (param_3 != (int *)0x0) {
      local_170 = param_3[8];
      local_16c = param_3[9];
      local_168 = param_3[10];
      pfVar3 = (float *)(**(code **)(*param_3 + 0x174))();
      fStack_214 = *pfVar3;
      fStack_210 = pfVar3[1];
      fStack_20c = pfVar3[2];
      if ((local_1cc != 0) && (iVar4 = (**(code **)(*param_3 + 0x154))(), iVar4 != 0)) {
        pfVar3 = (float *)(iVar4 + 0x30);
        pfVar12 = afStack_164;
        for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pfVar12 = *pfVar3;
          pfVar3 = pfVar3 + 1;
          pfVar12 = pfVar12 + 1;
        }
        if ((local_1ac < 2) || (3 < local_1ac)) {
          uStack_200._0_4_ = afStack_164[1];
          uStack_200._4_4_ = fStack_154;
          fStack_14c = fStack_148;
        }
        else {
          uStack_200._0_4_ = afStack_164[0];
          uStack_200._4_4_ = afStack_164[3];
        }
        local_218 = (int *)(float)local_1cc;
        uStack_200._0_4_ = (float)uStack_200 * (float)local_218;
        uStack_200._4_4_ = uStack_200._4_4_ * (float)local_218;
        fStack_1f8 = (float)local_218 * fStack_14c;
        if ((local_1ac < 1) || (2 < local_1ac)) {
          fStack_214 = *(float *)(iVar4 + 0x54) + (float)uStack_200;
          fStack_210 = *(float *)(iVar4 + 0x58) + uStack_200._4_4_;
          fStack_20c = *(float *)(iVar4 + 0x5c) + fStack_1f8;
        }
        else {
          fStack_214 = *(float *)(iVar4 + 0x54) - (float)uStack_200;
          fStack_210 = *(float *)(iVar4 + 0x58) - uStack_200._4_4_;
          fStack_20c = *(float *)(iVar4 + 0x5c) - fStack_1f8;
        }
      }
      afStack_140[0] = fStack_214;
      afStack_140[1] = fStack_210;
      afStack_140[2] = fStack_20c;
      iVar4 = FUN_0047df80(0);
      pfVar3 = afStack_140;
      local_208 = (double)CONCAT44(local_208._4_4_,((float)iVar4 * 0.7853982) / 32767.0);
      dStack_180 = (double)fStack_214;
      uStack_200 = (double)fStack_210;
      local_218 = (int *)0x8;
      fStack_1d0 = fStack_20c + 0.0;
      do {
        pfVar3 = pfVar3 + 3;
        dStack_1a8 = (double)(float)local_208._0_4_;
        fVar14 = (float10)FUN_00986300();
        local_208._0_4_ = (float *)(float)fVar14;
        dStack_1f0._0_4_ = (float)fVar14;
        fVar14 = (float10)FUN_00986000();
        fStack_1bc = (float)fVar14;
        local_218 = (int *)((int)local_218 + -1);
        fStack_1d8 = fStack_1bc * 100.0 + (float)dStack_180;
        fStack_1d4 = dStack_1f0._0_4_ * 100.0 + (float)uStack_200;
        dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,fStack_1d4);
        *pfVar3 = fStack_1d8;
        pfVar3[1] = fStack_1d4;
        pfVar3[2] = fStack_1d0;
        local_208 = (double)CONCAT44(local_208._4_4_,
                                     (float)((float10)dStack_1a8 + (float10)0.7853981852531433));
      } while (local_218 != (int *)0x0);
      if (*(char *)(local_1e8 + 4) == '%') {
        dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,local_1e8);
        FUN_00469690();
        pfVar3 = &fStack_1bc;
        uStack_14 = 0;
        iVar4 = local_1e4;
        uVar5 = FUN_005e1fd0(local_1e4,pfVar3);
        FUN_0046cde0(uVar5,iVar4,pfVar3);
        cVar1 = FUN_006fe080(0);
        if (cVar1 != '\0') {
          FUN_004afa80(&fStack_1bc);
        }
        pfVar3 = afStack_1b4;
        local_208 = (double)CONCAT44(local_208._4_4_,pfVar3);
        do {
          if ((pfVar3[1] == 0.0) && (*pfVar3 == 0.0)) break;
          piVar13 = (int *)*pfVar3;
          local_218 = piVar13;
          if ((piVar13 != (int *)0x0) && ((piVar13[1] != 0 && (0 < *piVar13)))) {
            do {
              uVar21 = 0;
              uVar5 = FUN_004d6670(0);
              uVar6 = FUN_006ecc80(uVar5);
              piVar7 = (int *)FUN_0044a7d0(piVar13[1],&fStack_214,&local_170,uVar6,uVar5,uVar21);
              local_1e0 = (double)CONCAT44(local_1e0._4_4_,piVar7);
              if (piVar7 != (int *)0x0) {
                iVar4 = *piVar7;
                uVar5 = FUN_006ecc80();
                (**(code **)(iVar4 + 300))(uVar5);
                FUN_004d7a90(1);
                piVar13 = local_218;
              }
              *piVar13 = *piVar13 + -1;
            } while (0 < *piVar13);
            pfVar3 = local_208._0_4_;
          }
          pfVar3 = (float *)pfVar3[1];
          local_208 = (double)CONCAT44(local_208._4_4_,pfVar3);
        } while (pfVar3 != (float *)0x0);
        uStack_14 = 0xffffffff;
        FUN_0046a010();
      }
      else {
        iVar4 = 0;
        local_218 = (int *)0x0;
        if (0 < local_1e4) {
          do {
            uStack_6c = 0x3f800000;
            uStack_90 = 0;
            iStack_60 = 0;
            uStack_40 = 0;
            uStack_3c = 0;
            uStack_38 = 0;
            uStack_50 = DAT_00ba7a40;
            uStack_4c = DAT_00ba7a44;
            uStack_48 = DAT_00ba7a48;
            uStack_44 = uRam00ba7a4c;
            uStack_8c = 0x3001b;
            pfVar3 = (float *)(**(code **)(*param_3 + 0x174))();
            fStack_198 = *pfVar3;
            fStack_194 = pfVar3[1];
            fStack_190 = pfVar3[2];
            fStack_190 = pfVar3[2] + 64.0;
            fStack_1c8 = afStack_140[iVar4 * 3];
            fStack_1c4 = afStack_140[iVar4 * 3 + 1];
            fStack_1c0 = afStack_140[iVar4 * 3 + 2] + 64.0;
            fVar14 = (float10)fStack_198;
            uStack_200 = (double)fStack_198;
            fVar15 = (float10)0.1428767293691635;
            fStack_d0 = (float)(fVar14 * fVar15);
            fVar16 = (float10)fStack_194;
            dStack_1f0 = (double)fStack_194;
            fStack_cc = (float)(fVar16 * fVar15);
            fVar17 = (float10)fStack_190;
            dStack_180 = (double)fStack_190;
            fStack_c8 = (float)(fVar17 * fVar15);
            fVar18 = (float10)fStack_1c8;
            uStack_a4 = uStack_c4;
            dStack_1a8 = (double)fStack_1c8;
            uStack_50 = DAT_00ba7a40;
            uStack_4c = DAT_00ba7a44;
            uStack_48 = DAT_00ba7a48;
            uStack_44 = uRam00ba7a4c;
            fStack_c0 = (float)(fVar18 * fVar15);
            fVar19 = (float10)fStack_1c4;
            local_1e0 = (double)fStack_1c4;
            fStack_bc = (float)(fVar19 * fVar15);
            fVar20 = (float10)fStack_1c0;
            local_208 = (double)fStack_1c0;
            fStack_b8 = (float)(fVar20 * fVar15);
            uStack_94 = uStack_b4;
            fStack_b0 = fStack_d0;
            fStack_ac = fStack_cc;
            fStack_a8 = fStack_c8;
            fStack_a0 = fStack_c0;
            fStack_9c = fStack_bc;
            fStack_98 = fStack_b8;
            if (((fVar18 != fVar14) || (fVar19 != fVar16)) || (fVar20 != fVar17)) {
              FUN_00446a10(&fStack_b0);
              fVar14 = (float10)uStack_200;
              fVar20 = (float10)local_208;
              fVar17 = (float10)dStack_180;
              fVar16 = (float10)dStack_1f0;
              fVar18 = (float10)dStack_1a8;
              fVar19 = (float10)local_1e0;
            }
            fVar8 = fStack_1c8;
            fVar10 = fStack_1c4;
            fVar11 = fStack_1c0;
            if (iStack_60 != 0) {
              fStack_1d8 = (float)(fVar18 - fVar14);
              fStack_1d4 = (float)(fVar19 - fVar16);
              fStack_1d0 = (float)(fVar20 - fVar17);
              FUN_0043f350();
              fVar14 = (float10)FUN_0046d5c0(local_1e8);
              fStack_184 = (float)fVar14;
              dStack_1f0 = (double)CONCAT44(dStack_1f0._4_4_,fStack_184);
              fStack_18c = fStack_1d8 * fStack_184;
              fStack_188 = fStack_1d4 * fStack_184;
              fStack_184 = fStack_184 * fStack_1d0;
              fStack_1bc = (float)dStack_1a8 - fStack_18c;
              fStack_1b8 = (float)local_1e0 - fStack_188;
              afStack_1b4[0] = (float)local_208 - fStack_184;
              fVar8 = fStack_1bc;
              fVar10 = fStack_1b8;
              fVar11 = afStack_1b4[0];
            }
            fStack_214 = fVar8;
            fStack_210 = fVar10;
            fStack_20c = fVar11;
            iVar9 = (**(code **)(*param_3 + 0x174))();
            fStack_20c = *(float *)(iVar9 + 8);
            uVar21 = 0;
            uVar5 = FUN_004d6670(0);
            uVar6 = FUN_006ecc80(uVar5);
            iVar9 = FUN_0044a7d0(local_1e8,&fStack_214,&local_170,uVar6,uVar5,uVar21);
            local_1e0 = (double)CONCAT44(local_1e0._4_4_,iVar9);
            if (iVar9 == 0) goto LAB_00514c11;
            iVar4 = iVar4 + 1;
            if (iVar4 == 9) {
              iVar4 = 0;
            }
            local_218 = (int *)((int)local_218 + 1);
          } while ((int)local_218 < local_1e4);
        }
      }
      if ((int)local_1e0 != 0) {
        uStack_19c = *(undefined4 *)((int)local_1e0 + 0xc);
        FUN_004f9fb0(&uStack_19c,local_174);
      }
    }
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = local_1c;
  return uVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_00515330(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  LONG LVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  uint *puVar14;
  int *piVar15;
  undefined4 *puVar16;
  uint *puVar17;
  int *unaff_FS_OFFSET;
  bool bVar18;
  bool bVar19;
  char *pcVar20;
  char *pcVar21;
  double dVar22;
  undefined8 uVar23;
  float local_440;
  undefined1 local_439;
  uint *local_438;
  int *local_434;
  int local_430;
  undefined4 *puStack_42c;
  uint uStack_428;
  undefined **local_424;
  uint *local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 *puStack_414;
  char local_410 [256];
  char local_310 [256];
  char local_210 [512];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7217;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_440;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffbb0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_430 = param_8;
  cVar6 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,local_210,uVar7);
  if (cVar6 == '\0') {
    local_440 = 0.0;
    local_210[0] = '\0';
  }
  else if (local_210[0] == 'c') {
    local_440 = 4.2039e-45;
  }
  else if (local_210[0] == 'f') {
    local_440 = 1.4013e-45;
  }
  else if (local_210[0] == 's') {
    local_440 = 2.8026e-45;
  }
  else {
    local_440 = 0.0;
  }
  local_439 = DAT_00b06b18;
  DAT_00b06b18 = 1;
  FUN_004a7a60();
  puVar14 = (uint *)(DAT_00b3fab8 + DAT_00b42054);
  local_310[0] = '\0';
  if (puVar14 < (uint *)0x100000) {
    if (puVar14 < (uint *)0x400) {
      _sprintf(local_310,"%i b");
    }
    else {
      fVar5 = (float)(int)puVar14;
      if ((int)puVar14 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      local_438 = puVar14;
      _sprintf(local_310,"%.2f Kb",(double)(fVar5 * 0.0009765625));
    }
  }
  else {
    fVar5 = (float)(int)puVar14;
    if ((int)puVar14 < 0) {
      fVar5 = fVar5 + 4.2949673e+09;
    }
    local_438 = puVar14;
    _sprintf(local_310,"%.2f Mb",(double)(fVar5 * 9.536743e-07));
  }
  FUN_004a7a60("Textures in Palette : %d : %s",*(undefined4 *)(*(int *)(DAT_00b35300 + 0xc) + 0xc));
  local_434 = (int *)0x0;
  uVar7 = *(uint *)(*(int *)(DAT_00b35300 + 0xc) + 4);
  uVar8 = 0;
  if (uVar7 != 0) {
    piVar4 = *(int **)(*(int *)(DAT_00b35300 + 0xc) + 8);
    piVar15 = piVar4;
    do {
      if (*piVar15 != 0) {
        local_430 = piVar4[uVar8];
        goto LAB_0051551b;
      }
      uVar8 = uVar8 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar8 < uVar7);
  }
  local_430 = 0;
LAB_0051551b:
  local_418 = 0;
  local_420 = (uint *)0x0;
  local_41c = 0;
  local_424 = &PTR_FUN_00a4d46c;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  fVar5 = local_440;
  while (local_440 = fVar5, local_430 != 0) {
    FUN_007b2600(&local_430,&local_438,&local_434);
    piVar4 = local_434;
    fVar5 = local_440;
    if (((local_434 != (int *)0x0) && (local_434[1] != 0)) && (local_434[1] != 2)) {
      for (puVar9 = (undefined4 *)(**(code **)(*local_434 + 4))(); puVar9 != (undefined4 *)0x0;
          puVar9 = (undefined4 *)puVar9[1]) {
        if (puVar9 == &DAT_00b3f95c) {
          bVar3 = 1;
          goto LAB_005155a8;
        }
      }
      bVar3 = 0;
LAB_005155a8:
      puVar9 = (undefined4 *)(-(uint)bVar3 & (uint)piVar4);
      puStack_42c = puVar9;
      if (puVar9 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar9 + 1);
      }
      uStack_428 = *(uint *)(puVar9[9] + 0x60);
      puVar16 = (undefined4 *)0x0;
      puStack_414 = (undefined4 *)0x0;
      local_4 = CONCAT31(local_4._1_3_,3);
      puVar14 = local_420;
      if ((int)local_440 < 1) {
LAB_005156bd:
        FUN_007c16b0();
      }
      else {
LAB_005155e6:
        do {
          do {
            if (puVar14 == (uint *)0x0) goto LAB_005156bd;
            puVar17 = (uint *)*puVar14;
            local_438 = puVar14;
            if (puVar16 != (undefined4 *)puVar14[2]) {
              if ((puVar16 != (undefined4 *)0x0) &&
                 (LVar10 = InterlockedDecrement(puVar16 + 1), LVar10 == 0)) {
                (**(code **)*puVar16)();
              }
              puVar16 = (undefined4 *)puVar14[2];
              puVar14 = puVar17;
              puStack_414 = puVar16;
              if (puVar16 == (undefined4 *)0x0) goto LAB_005155e6;
              InterlockedIncrement(puVar16 + 1);
            }
            puVar14 = puVar17;
          } while (puVar16 == (undefined4 *)0x0);
          if (local_440 == 1.4013e-45) {
            pbVar13 = (byte *)puVar16[0xe];
            pbVar11 = (byte *)puVar9[0xe];
            do {
              bVar3 = *pbVar11;
              bVar18 = bVar3 < *pbVar13;
              if (bVar3 != *pbVar13) {
LAB_0051566f:
                iVar12 = (1 - (uint)bVar18) - (uint)(bVar18 != 0);
                goto LAB_00515674;
              }
              if (bVar3 == 0) break;
              bVar3 = pbVar11[1];
              bVar18 = bVar3 < pbVar13[1];
              if (bVar3 != pbVar13[1]) goto LAB_0051566f;
              pbVar11 = pbVar11 + 2;
              pbVar13 = pbVar13 + 2;
            } while (bVar3 != 0);
            iVar12 = 0;
LAB_00515674:
            if (iVar12 < 1) break;
            goto LAB_005155e6;
          }
          if (local_440 == 2.8026e-45) {
            bVar18 = uStack_428 < *(uint *)(puVar16[9] + 0x60);
            bVar19 = uStack_428 == *(uint *)(puVar16[9] + 0x60);
          }
          else {
            if (local_440 != 4.2039e-45) goto LAB_005155e6;
            bVar18 = (uint)puVar9[1] < (uint)puVar16[1];
            bVar19 = puVar9[1] == puVar16[1];
          }
        } while (!bVar18 && !bVar19);
        if (local_438 == (uint *)0x0) goto LAB_005156bd;
        FUN_007c6a20(local_438,&puStack_42c);
      }
      local_4._0_1_ = 2;
      if ((puVar16 != (undefined4 *)0x0) &&
         (LVar10 = InterlockedDecrement(puVar16 + 1), LVar10 == 0)) {
        (**(code **)*puVar16)();
      }
      local_4._0_1_ = 1;
      LVar10 = InterlockedDecrement(puVar9 + 1);
      fVar5 = local_440;
      if (LVar10 == 0) {
        (**(code **)*puVar9)();
        fVar5 = local_440;
      }
    }
  }
  puVar17 = (uint *)0x0;
  local_438 = (uint *)0x0;
  local_4._0_1_ = 4;
  local_430 = 0;
  puVar14 = local_420;
joined_r0x00515730:
  if (puVar14 == (uint *)0x0) {
    FUN_00573880();
    FUN_004a7a60();
    DAT_00b06b18 = local_439;
    local_4._0_1_ = 1;
    if ((puVar17 != (uint *)0x0) &&
       (LVar10 = InterlockedDecrement((LONG *)(puVar17 + 1)), LVar10 == 0)) {
      (**(code **)*puVar17)();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_0050ebd0();
    piVar4 = local_434;
    local_4 = 0xffffffff;
    if ((local_434 != (int *)0x0) && (LVar10 = InterlockedDecrement(local_434 + 1), LVar10 == 0)) {
      (**(code **)*piVar4)();
    }
    *unaff_FS_OFFSET = local_c;
    return 1;
  }
  puVar1 = puVar14 + 2;
  puVar2 = puVar14 + 2;
  puVar14 = (uint *)*puVar14;
  if (puVar17 != (uint *)*puVar1) goto code_r0x00515745;
  goto LAB_00515779;
code_r0x00515745:
  if ((puVar17 != (uint *)0x0) &&
     (LVar10 = InterlockedDecrement((LONG *)(puVar17 + 1)), LVar10 == 0)) {
    (**(code **)*puVar17)();
  }
  puVar17 = (uint *)*puVar2;
  local_438 = puVar17;
  if (puVar17 != (uint *)0x0) {
    InterlockedIncrement((LONG *)(puVar17 + 1));
LAB_00515779:
    if (puVar17 != (uint *)0x0) {
      local_410[0] = '\0';
      local_440 = (float)*(int *)(puVar17[9] + 0x60);
      if (*(int *)(puVar17[9] + 0x60) < 0) {
        local_440 = local_440 + 4.2949673e+09;
      }
      if (local_440 < 1024.0) {
        dVar22 = (double)local_440;
        pcVar21 = "%.2f b";
      }
      else {
        local_440 = local_440 * 0.0009765625;
        if (local_440 < 1024.0) {
          dVar22 = (double)local_440;
          pcVar21 = "%.2f Kb";
        }
        else {
          dVar22 = (double)(local_440 * 0.0009765625);
          pcVar21 = "%.2f Mb";
        }
      }
      _sprintf(local_410,pcVar21,dVar22);
      if (fVar5 == 2.8026e-45) {
        uVar23 = CONCAT44(puVar17[0xe],puVar17[1] - 3);
        pcVar21 = local_410;
        pcVar20 = "  s %s : c %i : f %s";
      }
      else if (fVar5 == 4.2039e-45) {
        uVar23 = CONCAT44(puVar17[0xe],local_410);
        pcVar21 = (char *)(puVar17[1] - 3);
        pcVar20 = "  c %i : s %s : f %s";
      }
      else {
        pcVar21 = (char *)puVar17[0xe];
        uVar23 = CONCAT44(local_410,puVar17[1] - 3);
        pcVar20 = "  f %s : c %i : s %s";
      }
      FUN_004a7a60(pcVar20,pcVar21,uVar23);
    }
  }
  goto joined_r0x00515730;
}



undefined4 FUN_00515920(undefined4 param_1,int param_2,int *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar4 = param_3;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar7 = DAT_00b333c4;
  if (((param_3 != (int *)0x0) && (cVar1 = (**(code **)(*param_3 + 400))(uVar2), cVar1 != '\0')) &&
     (iVar3 = (**(code **)(*piVar4 + 0x170))(), *(char *)(iVar3 + 4) == '#')) {
    piVar7 = piVar4;
  }
  if ((piVar7 != (int *)0x0) && (cVar1 = FUN_005e32d0(), cVar1 != '\0')) {
    iVar3 = (**(code **)(*piVar7 + 0x170))();
    piVar4 = (int *)(**(code **)(*piVar7 + 0x154))();
    param_3 = (int *)0x0;
    if (piVar4 != (int *)0x0) {
      param_3 = (int *)(**(code **)(*piVar4 + 8))();
    }
    iVar5 = FUN_005e1df0();
    if ((iVar5 == 0) == 1) {
      *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) | 1;
    }
    else {
      *(uint *)(iVar3 + 0x28) = *(uint *)(iVar3 + 0x28) & 0xfffffffe;
    }
    (**(code **)(*(int *)(iVar3 + 0x24) + 0x50))(0x10);
    if (param_2 != 0) {
      iVar3 = (**(code **)(*piVar7 + 0x134))(0);
      if ((iVar3 != 0) && (*(int **)(iVar3 + 0x1c) != (int *)0x0)) {
        (**(code **)(**(int **)(iVar3 + 0x1c) + 0x88))(&param_1,iVar3);
        FUN_007016a0();
      }
      iVar3 = (**(code **)(*piVar7 + 0x130))(0);
      if ((iVar3 != 0) && (*(int **)(iVar3 + 0x1c) != (int *)0x0)) {
        (**(code **)(**(int **)(iVar3 + 0x1c) + 0x88))(&stack0xffffffe8,iVar3);
        FUN_007016a0();
      }
    }
    FUN_00405ce0();
    (**(code **)(*(int *)piVar7[0x16] + 0x5c))();
    (**(code **)(*(int *)piVar7[0x16] + 0x31c))(1);
    (**(code **)(*(int *)piVar7[0x16] + 0x318))(piVar7);
    uStack_14 = 0;
    uStack_10 = 0;
    uStack_e = 0;
    uStack_4 = 0;
    uVar6 = FUN_004da2a0(piVar7[3],(&PTR_DAT_00b10bc4)[iVar5 == 0]);
    FUN_00402e30(&uStack_14,"\"%s\" (%08x) is now %s",uVar6);
    uVar6 = uStack_14;
    FUN_00579b60(uStack_14);
    FUN_00401f20(uVar6);
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4 FUN_00515af0(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int iStack_34;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0130;
  local_14 = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (*(int **)(DAT_00b333c4 + 0x5f4) == (int *)0x0) {
    FUN_00579b60("No active quest",uVar3);
  }
  else {
    uVar4 = (**(code **)(**(int **)(DAT_00b333c4 + 0x5f4) + 0xd4))();
    FUN_00579b60("Active quest: %s",uVar4);
    piVar5 = (int *)FUN_0065d830();
    if (piVar5 == (int *)0x0) {
      FUN_00579b60("No current targets",uVar3);
    }
    else {
      iVar8 = 0;
      piVar6 = piVar5;
      do {
        if (*piVar6 != 0) {
          iVar8 = iVar8 + 1;
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != (int *)0x0);
      FUN_00579b60("%d current targets",iVar8);
    }
    iStack_34 = 1;
    while ((piVar5 != (int *)0x0 && (iVar8 = *piVar5, iVar8 != 0))) {
      piVar5 = (int *)piVar5[1];
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_1a = 0;
      uStack_28 = 0;
      uStack_24 = 0;
      uStack_22 = 0;
      uStack_c = 1;
      FUN_004028d0("Same cell/exterior",0);
      piVar6 = (int *)FUN_0052b440(0);
      piVar7 = (int *)FUN_0052b440(1);
      if ((piVar7 != (int *)0x0) && (piVar6 != (int *)0x0)) {
        if (piVar7 == piVar6) {
          uVar4 = (**(code **)(*piVar6 + 0xd4))();
          FUN_00402e30(&uStack_20,"%s (%08X)",uVar4);
        }
        else {
          iVar1 = piVar7[3];
          uVar4 = (**(code **)(*piVar6 + 0xd4))(piVar6[3]);
          uVar4 = (**(code **)(*piVar7 + 0xd4))(iVar1,uVar4);
          FUN_00402e30(&uStack_20,"%s (%08X) (carrying %s (%08X))",uVar4);
        }
      }
      if (*(int *)(iVar8 + 0x10) != 0) {
        uVar4 = (**(code **)(**(int **)(iVar8 + 0x10) + 0xd4))((*(int **)(iVar8 + 0x10))[3]);
        FUN_00402e30(&uStack_28,"%s (%08X)",uVar4);
      }
      uVar2 = uStack_20;
      uVar4 = uStack_28;
      FUN_00579b60("Target %d:  Reference: %s, load door: %s",iStack_34,uStack_20,uStack_28);
      iStack_34 = iStack_34 + 1;
      FUN_00401f20(uVar4);
      uStack_28 = 0;
      uStack_22 = 0;
      uStack_24 = 0;
      uStack_c = 0xffffffff;
      FUN_00401f20(uVar2);
    }
  }
  *unaff_FS_OFFSET = local_14;
  return 1;
}



undefined4
FUN_00515d20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_24;
  int iStack_20;
  undefined1 auStack_1c [12];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7258;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = 0;
  local_24 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_24,uVar3);
  if (cVar2 == '\0') {
LAB_00515ebe:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  cVar2 = (**(code **)(*DAT_00b333c4 + 0x198))(0);
  if (cVar2 == '\0') {
    iVar4 = FUN_004d8e40();
    if (iVar4 != 0) {
      iVar7 = 0;
      local_24 = iVar4;
      iVar5 = FUN_004d7630();
      if (iVar5 != 0) {
        iVar7 = FUN_0042b470();
        if (iVar7 == 0) {
          iVar5 = FUN_0042b460();
          if (iVar5 != 0) {
            FUN_0042b460();
            cVar2 = FUN_004c97f0();
            if (cVar2 != '\0') {
              iVar6 = FUN_0042b460();
            }
          }
        }
      }
      FUN_004b8420(0x25);
      puStack_8 = (undefined1 *)0x0;
      if (iVar7 == 0) {
        if (iVar6 != 0) {
          FUN_004cc070(&iStack_20);
        }
      }
      else {
        FUN_004f2770();
      }
      FUN_007c2a40();
      (**(code **)(*DAT_00b333c4 + 0x118))();
      if (local_24 == 0) {
        iVar4 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
        uVar1 = *(undefined1 *)(iVar4 + 0x185);
        *(undefined1 *)(iVar4 + 0x185) = 0;
        if (iVar7 == 0) {
          if (iVar6 != 0) {
            FUN_004cbe50(auStack_1c);
          }
        }
        else {
          FUN_004f2630();
        }
        FUN_007c2a40();
        *(undefined1 *)(iVar4 + 0x185) = uVar1;
        iVar4 = iStack_20;
      }
      FUN_004b7db0(iVar4,0);
      DAT_00b333c4[0x1a3] = DAT_00b333c4[0x1a3] + 1;
      uStack_4 = 0xffffffff;
      FUN_004b8470();
      goto LAB_00515ebe;
    }
  }
  *unaff_FS_OFFSET = iStack_10;
  return 1;
}



undefined4
FUN_00515ef0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *unaff_FS_OFFSET;
  int local_20;
  undefined1 auStack_1c [16];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7258;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar6 = 0;
  if (param_3 != (int *)0x0) {
    local_20 = 0;
    cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20,uVar3);
    if (cVar2 == '\0') {
LAB_00515f59:
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
    uVar4 = (**(code **)(*param_3 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
    iVar5 = FUN_009832e6(uVar4);
    if ((iVar5 != 0) && (cVar2 = FUN_004b6cf0(), cVar2 != '\0')) {
      iVar7 = 0;
      iVar5 = FUN_004d7630();
      if ((iVar5 != 0) &&
         ((iVar7 = FUN_0042b470(), iVar7 == 0 && (iVar5 = FUN_0042b460(), iVar5 != 0)))) {
        FUN_0042b460();
        cVar2 = FUN_004c97f0();
        if (cVar2 != '\0') {
          iVar6 = FUN_0042b460();
        }
      }
      cVar2 = '\0';
      FUN_004b8420(0x25);
      uStack_4 = 0;
      if (iVar7 == 0) {
        if (iVar6 != 0) {
          cVar2 = FUN_004cc070(auStack_1c);
        }
      }
      else {
        cVar2 = FUN_004f2770();
      }
      FUN_007c2a40();
      if (local_20 == 0) {
        if (cVar2 != '\0') {
          (**(code **)(*DAT_00b333c4 + 0x118))();
        }
        iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
        uVar1 = *(undefined1 *)(iVar5 + 0x185);
        *(undefined1 *)(iVar5 + 0x185) = 0;
        if (iVar7 == 0) {
          if (iVar6 != 0) {
            FUN_004cbe50(auStack_1c);
          }
        }
        else {
          FUN_004f2630();
        }
        FUN_007c2a40();
        *(undefined1 *)(iVar5 + 0x185) = uVar1;
      }
      FUN_004b7db0(param_3,0);
      uStack_4 = 0xffffffff;
      FUN_004b8470();
      if (cVar2 != '\0') goto LAB_00515f59;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined4
FUN_005160d0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *unaff_FS_OFFSET;
  int local_20;
  undefined1 auStack_1c [16];
  uint local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b7258;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (uint)&local_c;
  iVar6 = 0;
  if (param_3 != (int *)0x0) {
    local_20 = 0;
    cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20,uVar3);
    if (cVar2 == '\0') {
LAB_00516139:
      *unaff_FS_OFFSET = local_c;
      return 0;
    }
    uVar4 = (**(code **)(*param_3 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b05480,0);
    iVar5 = FUN_009832e6(uVar4);
    if ((iVar5 != 0) && (cVar2 = FUN_004b6cf0(), cVar2 != '\0')) {
      iVar7 = 0;
      iVar5 = FUN_004d7630();
      if ((iVar5 != 0) &&
         ((iVar7 = FUN_0042b470(), iVar7 == 0 && (iVar5 = FUN_0042b460(), iVar5 != 0)))) {
        FUN_0042b460();
        cVar2 = FUN_004c97f0();
        if (cVar2 != '\0') {
          iVar6 = FUN_0042b460();
        }
      }
      cVar2 = '\0';
      FUN_004b8420(0x25);
      uStack_4 = 0;
      if (iVar7 == 0) {
        if (iVar6 != 0) {
          cVar2 = FUN_004cc070(auStack_1c);
        }
      }
      else {
        cVar2 = FUN_004f2770();
      }
      FUN_007c2a40();
      if (local_20 == 0) {
        if (cVar2 != '\0') {
          (**(code **)(*DAT_00b333c4 + 0x118))();
        }
        iVar5 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
        uVar1 = *(undefined1 *)(iVar5 + 0x185);
        *(undefined1 *)(iVar5 + 0x185) = 0;
        if (iVar7 == 0) {
          if (iVar6 != 0) {
            FUN_004cbe50(auStack_1c);
          }
        }
        else {
          FUN_004f2630();
        }
        FUN_007c2a40();
        *(undefined1 *)(iVar5 + 0x185) = uVar1;
      }
      FUN_004b7db0(param_3,1);
      uStack_4 = 0xffffffff;
      FUN_004b8470();
      if (cVar2 != '\0') goto LAB_00516139;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_005162b0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int *param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *unaff_FS_OFFSET;
  int local_1c;
  uint local_18;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7288;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_1c = 0;
  local_10 = 0;
  cVar2 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_1c,&local_10,
                       uVar3);
  if (cVar2 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 != 0) {
    iVar4 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    uVar3 = local_18;
    local_18 = local_18 & 0xffffff00;
    if (0 < local_10) {
      local_18 = CONCAT31(SUB43(uVar3,1),1);
    }
    if (local_1c == 0) {
      uVar7 = (**(code **)(*param_5 + 0xd4))();
      FUN_004a7a60("EquipItem in script \'%s\' failed to generate an item.",uVar7);
    }
    else if (iVar4 != 0) {
      iVar5 = FUN_0041e6f0();
      if ((iVar5 != 0) &&
         (puVar6 = (undefined4 *)FUN_00485e80(local_1c,1,0), puVar6 != (undefined4 *)0x0)) {
        for (piVar1 = (int *)*puVar6; (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          cVar2 = FUN_0041df10(0);
          if (cVar2 != '\0') {
            FUN_0041f370(local_18);
            goto LAB_0051649c;
          }
        }
      }
      FUN_005faea0(local_1c,1,0,1,local_18);
      if (iVar4 == DAT_00b333c4) {
        local_18 = 0;
        local_14 = 0;
        local_12 = 0;
        local_4 = 0;
        uVar7 = FUN_00469cd0(local_1c,DAT_00b382b8);
        FUN_00402e30(&local_18,"%s %s.",uVar7);
        FUN_0057acc0(local_18,0,1,0xbf800000);
        FUN_005e7230(local_1c,0);
        FUN_00668cc0();
        (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x42c))(DAT_00b333c4,1,0,0);
        FUN_0057a3b0(0);
        local_4 = 0xffffffff;
        FUN_00402da0();
      }
    }
  }
LAB_0051649c:
  *unaff_FS_OFFSET = local_c;
  return 1;
}



undefined1
FUN_005164c0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint *unaff_FS_OFFSET;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  undefined2 local_10;
  undefined2 local_e;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b72ce;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (uint)&local_c;
  uVar7 = 0;
  local_20 = 0;
  local_18 = 0;
  cVar1 = FUN_004fae80(param_1,param_2,param_8,param_3,param_4,param_5,param_6,&local_20,&local_18,
                       uVar2);
  if (cVar1 == '\0') {
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (param_3 != 0) {
    iVar3 = FUN_009832e6(param_3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    uVar2 = local_1c;
    local_1c = local_1c & 0xffffff00;
    if (0 < local_18) {
      local_1c = CONCAT31(SUB43(uVar2,1),1);
    }
    if (local_20 == 0) {
      iVar3 = FUN_005e02e0(0);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = iVar3 + 0x44;
      }
      iVar3 = FUN_00485e00(param_3,iVar3);
      if (iVar3 != 0) {
        piVar5 = (int *)FUN_00487d20(local_20,0);
        if (piVar5 != (int *)0x0) {
          if ((int *)*piVar5 == (int *)0x0) {
            puVar6 = (undefined4 *)FUN_00401f00(8);
            if (puVar6 == (undefined4 *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              *puVar6 = 0;
              puVar6[1] = 0;
            }
            *piVar5 = (int)puVar6;
            local_14 = FUN_00401f00(0x14);
            local_4 = 2;
            if (local_14 != 0) {
              uVar7 = FUN_00422ee0();
            }
          }
          else {
            if (*(int *)*piVar5 != 0) {
              FUN_0041f370(local_1c);
              *unaff_FS_OFFSET = local_c;
              return 1;
            }
            local_14 = FUN_00401f00(0x14);
            local_4 = 1;
            if (local_14 != 0) {
              uVar7 = FUN_00422ee0();
            }
          }
          local_4 = 0xffffffff;
          FUN_0041f370(local_1c);
          FUN_00446cb0(uVar7);
        }
      }
    }
    else if (iVar3 != 0) {
      iVar4 = FUN_005e02e0(0);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 0x44;
      }
      iVar4 = FUN_00485e00(param_3,iVar4);
      if (iVar4 != 0) {
        iVar4 = FUN_00485fa0(local_20,0);
        if (iVar4 != 0) {
          FUN_0041f370(0);
          FUN_005f2e70(local_20,1,iVar4,0,local_1c,0);
          if (iVar3 == DAT_00b333c4) {
            local_14 = 0;
            local_10 = 0;
            local_e = 0;
            local_4 = 0;
            uVar7 = FUN_00469cd0(local_20,DAT_00b382c0);
            FUN_00402e30(&local_14,"%s %s.",uVar7);
            FUN_0057acc0(local_14,0,1,0xbf800000);
            FUN_005e7230(local_20,0);
            FUN_00668cc0();
            (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0x42c))(DAT_00b333c4,1,0,0);
            FUN_0057a3b0(0);
            local_14 = -1;
            FUN_00402da0();
            *unaff_FS_OFFSET = local_1c;
            return 1;
          }
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005167a0(int param_1,int param_2,char *param_3)

{
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  _vsprintf(local_108,param_3,&stack0x00000010);
  if (DAT_00b361ac == '\0') {
    FUN_004a7a60(local_108);
  }
  else {
    FUN_00579b60(local_108);
  }
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 1;
  return;
}



uint FUN_00516830(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5,char param_6)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int in_ECX;
  bool bVar6;
  
  *param_4 = 0;
  *param_2 = (int)*(short *)(*param_3 + param_1[0xc]);
  *param_3 = *param_3 + 2;
  if (*param_2 == 0x1c) {
    sVar1 = *(short *)(param_1[0xc] + *param_3);
    bVar6 = false;
    *param_3 = *param_3 + 2;
    if (param_6 == '\0') {
      iVar2 = FUN_004fa9c0((int)sVar1,*(undefined4 *)(in_ECX + 8));
      if (iVar2 != 0) {
        bVar6 = *(int *)(iVar2 + 0xc) != 0;
        if (*(int *)(iVar2 + 8) != 0) {
          iVar2 = FUN_009832e6(*(int *)(iVar2 + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
          *param_5 = iVar2;
        }
      }
    }
    *param_2 = (int)*(short *)(*param_3 + param_1[0xc]);
    *param_3 = *param_3 + 2;
    if (((param_6 == '\0') && (*param_5 == 0)) && (!bVar6)) {
      puVar3 = (undefined4 *)FUN_004fca30(*param_2);
      if (puVar3 != (undefined4 *)0x0) {
        uVar4 = (**(code **)(*param_1 + 0xd4))();
        uVar5 = FUN_005167a0(in_ECX,param_1,
                             "Unknown reference object for function \'%s\'.  Execution of script \'%s\' stopped."
                             ,*puVar3,uVar4);
        return uVar5 & 0xffffff00;
      }
      uVar4 = (**(code **)(*param_1 + 0xd4))();
      uVar5 = FUN_005167a0(in_ECX,param_1,
                           "Unknown reference object.  Execution of script \'%s\' stopped.",uVar4);
      return uVar5 & 0xffffff00;
    }
  }
  else {
    *param_5 = 0;
  }
  iVar2 = param_1[0xc];
  *param_4 = (int)*(short *)(*param_3 + iVar2);
  *param_3 = *param_3 + 2;
  return CONCAT31((int3)((uint)iVar2 >> 8),1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_00516970(void)

{
  if ((_DAT_00b3620c & 1) == 0) {
    _DAT_00b3620c = _DAT_00b3620c | 1;
    DAT_00b36208 = 0;
    _atexit(FUN_00a1c100);
  }
  return &DAT_00b36208;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_005169a0(int *param_1,int param_2,int param_3,int *param_4,int param_5,int *param_6,
            undefined4 param_7,undefined4 param_8,char param_9)

{
  short *psVar1;
  ushort *puVar2;
  short sVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *in_ECX;
  int iVar10;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  double dVar12;
  int local_748;
  undefined4 local_744;
  undefined2 local_740;
  undefined2 local_73e;
  int *local_73c;
  char local_735;
  int local_734;
  int *local_730 [2];
  double local_728;
  int local_720;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b731c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_748;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xfffff8a8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar10 = param_1[0xc];
  local_73c = param_4;
  local_744._0_2_ = (short)param_3;
  local_744._2_2_ = (undefined2)((uint)param_3 >> 0x10);
  local_730[0] = param_6;
  local_748 = param_5;
  if (param_2 == 0x10) {
    uVar6 = (uint)*(short *)(iVar10 + param_5);
    if (uVar6 < 0x1f) {
      local_730[0] = *(int **)(iVar10 + param_5 + 2);
      iVar8 = (&DAT_00b0af5c)[uVar6 * 10];
      local_748 = param_5 + 6;
      local_744._0_2_ = (short)iVar8;
      local_744._2_2_ = (undefined2)((uint)iVar8 >> 0x10);
      if ((char)param_8 == '\0') {
        if (((&DAT_00b0af58)[uVar6 * 0x28] != '\0') && (param_3 == 0)) {
          uVar7 = (**(code **)(*param_1 + 0xd4))();
          FUN_004a7a60("Script \'%s\', line %d: Null for a required ref pointer.",uVar7);
          goto LAB_00516acf;
        }
        if (((code *)(&PTR_LAB_00b0af60)[uVar6 * 10] == (code *)0x0) ||
           (cVar5 = (*(code *)(&PTR_LAB_00b0af60)[uVar6 * 10])
                              (iVar8,iVar10,param_3,*in_ECX,param_1,in_ECX[2],&local_744,&local_748)
           , cVar5 == '\0')) {
          uVar7 = (**(code **)(*param_1 + 0xd4))(param_7,local_748);
          FUN_004a7a60("Script \'%s\', line %d: Error Executing line (Offset %d).",uVar7);
LAB_00516b4e:
          uVar7 = 0;
          goto LAB_005172d5;
        }
        if (((double)CONCAT26(local_73e,
                              CONCAT24(local_740,CONCAT22(local_744._2_2_,(short)local_744))) == 0.0
            ) || (param_9 != '\0')) {
          *local_73c = *local_73c + (int)local_730[0];
        }
      }
      else if ((iVar8 != 0) && (*param_4 != 0)) {
        FUN_004fae80(iVar8,iVar10,&local_748,param_3,*in_ECX,param_1,in_ECX[2]);
      }
      goto switchD_00516b76_caseD_10;
    }
LAB_00516acf:
    uVar7 = 0;
    goto LAB_005172d5;
  }
  if (param_9 != '\0') goto switchD_00516b76_caseD_10;
  switch(param_2) {
  case 0x10:
  case 0x11:
  case 0x1c:
  case 0x1d:
    break;
  default:
switchD_00516b76_caseD_12:
    puVar9 = (undefined4 *)FUN_004fca30();
    if (puVar9 == (undefined4 *)0x0) {
      local_744._0_2_ = 0;
      local_744._2_2_ = 0;
      local_740 = 0;
      local_73e = 0;
      local_4 = 2;
      uVar7 = (**(code **)(*param_1 + 0xd4))();
      FUN_00402e30(&local_744,"Unable to find function definition for command %d in script \'%s\'.",
                   param_2,uVar7);
      if (DAT_00b361ac == '\0') {
        FUN_004a7a60();
        FUN_00401f20();
        uVar7 = 0;
      }
      else {
        FUN_00579b60();
        FUN_00401f20();
        uVar7 = 0;
      }
      goto LAB_005172d5;
    }
    iVar8 = puVar9[5];
    local_744._0_2_ = (short)iVar8;
    local_744._2_2_ = (undefined2)((uint)iVar8 >> 0x10);
    if ((*(char *)(puVar9 + 4) == '\0') || (param_3 != 0)) {
      if ((char)param_8 == '\0') {
        pcVar4 = (code *)puVar9[6];
        if (*(char *)((int)puVar9 + 0x25) != '\0') {
          *(undefined1 *)((int)in_ECX + 0xa1) = 1;
        }
        if ((pcVar4 == (code *)0x0) ||
           (cVar5 = (*pcVar4)(iVar8,iVar10,param_3,*in_ECX,param_1,in_ECX[2],local_730,&local_748),
           cVar5 == '\0')) goto LAB_00516acf;
        break;
      }
    }
    else if ((char)param_8 == '\0') {
      local_744._0_2_ = 0;
      local_744._2_2_ = 0;
      local_740 = 0;
      local_73e = 0;
      local_4 = 3;
      uVar7 = (**(code **)(*param_1 + 0xd4))(param_7,*puVar9);
      FUN_00402e30(&local_744,"Script \'%s\', line %d: Function \'%s\' requires a reference.",uVar7)
      ;
      if (DAT_00b361ac == '\0') {
        FUN_004a7a60();
      }
      else {
        FUN_00579b60();
      }
      local_4 = 0xffffffff;
      FUN_00402da0();
      uVar7 = 0;
      goto LAB_005172d5;
    }
    if ((iVar8 != 0) && (*local_73c != 0)) {
      FUN_004fae80(iVar8,iVar10,&local_748,param_3,*in_ECX,param_1,in_ECX[2]);
      if (param_2 == 0x1000) {
        puVar2 = (ushort *)(iVar10 + local_748);
        local_748 = local_748 + 2;
        if (0 < (short)*puVar2) {
          local_73c = (int *)(uint)*puVar2;
          do {
            FUN_004fab20(&local_728,iVar10,&local_748,param_3,*in_ECX,param_1,in_ECX[2],1);
            local_73c = (int *)((int)local_73c - 1);
          } while (local_73c != (int *)0x0);
        }
        puVar2 = (ushort *)(iVar10 + local_748);
        local_73c = (int *)(uint)*puVar2;
        local_748 = local_748 + 2;
        if (0 < (short)*puVar2) {
          do {
            FUN_004fae80(CONCAT22(local_744._2_2_,(short)local_744),iVar10,&local_748,param_3,
                         *in_ECX,param_1,in_ECX[2]);
            local_73c = (int *)((int)local_73c - 1);
          } while (local_73c != (int *)0x0);
        }
      }
      else if (param_2 == 0x1059) {
        puVar2 = (ushort *)(iVar10 + local_748);
        local_748 = local_748 + 2;
        if (0 < (short)*puVar2) {
          local_744 = (float)(uint)*puVar2;
          do {
            FUN_004fab20(&local_728,iVar10,&local_748,param_3,*in_ECX,param_1,in_ECX[2],1);
            local_744 = (float)((int)local_744 - 1);
          } while (local_744 != 0.0);
        }
      }
    }
    break;
  case 0x15:
    cVar5 = *(char *)(iVar10 + param_5);
    local_734 = in_ECX[2];
    local_748 = param_5 + 1;
    local_73c = (int *)0x0;
    local_730[0] = (int *)0x0;
    if ((cVar5 == 'G') || (local_735 = cVar5, cVar5 == 'r')) {
      psVar1 = (short *)(iVar10 + local_748);
      local_748 = param_5 + 3;
      if (cVar5 == 'r') {
        cVar5 = *(char *)(iVar10 + local_748);
        local_748 = param_5 + 4;
      }
      local_735 = cVar5;
      local_730[0] = (int *)FUN_004fa9c0((int)*psVar1,local_734);
      if ((char)param_8 == '\0') {
        if (((cVar5 == 'r') || (local_730[0] == (int *)0x0)) || (local_730[0][2] == 0))
        goto LAB_00516acf;
        iVar8 = FUN_009832e6(local_730[0][2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        if (iVar8 == 0) {
          iVar8 = FUN_009832e6(local_730[0][2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
          if (iVar8 != 0) {
            local_734 = *(int *)(iVar8 + 0x58);
          }
        }
        else {
          local_734 = FUN_004d7250();
        }
        if (local_734 == 0) goto LAB_00516b4e;
      }
    }
    if (cVar5 != 'G') {
      local_73c = (int *)(uint)*(ushort *)(iVar10 + local_748);
      local_748 = local_748 + 2;
    }
    sVar3 = *(short *)(iVar10 + local_748);
    local_748 = local_748 + 2;
    FUN_004f32e0(uVar6);
    local_4 = 0;
    fVar11 = (float10)FUN_004f3620(iVar10 + local_748,CONCAT22(local_744._2_2_,(short)local_744),
                                   *in_ECX,param_1,in_ECX[2],(int)sVar3,param_8);
    local_748 = local_748 + sVar3;
    local_728 = (double)fVar11;
    if (local_720 != 0) {
      uVar7 = (**(code **)(*param_1 + 0xd4))
                        (param_7,(&PTR_s_Expression_Error__NOERROR_00b09dc0)[local_720]);
      FUN_004a7a60("Script \'%s\', line %d: Set expression returned an error: %s.\r\n",uVar7);
      param_1[8] = 0;
      goto LAB_00516d04;
    }
    if ((char)param_8 != '\0') goto LAB_00516e86;
    if (local_735 == 'G') {
      if ((local_730[0] != (int *)0x0) && (local_730[0][2] != 0)) {
        local_744 = (float)fVar11;
        *(float *)(local_730[0][2] + 0x24) = local_744;
        if (DAT_00b361ac != '\0') {
          FUN_00579b60("set global >> %0.2f",(double)local_744);
        }
        goto LAB_00516e86;
      }
    }
    else if (local_734 != 0) {
      if (local_735 == 'f') {
        iVar10 = (int)(short)local_73c;
        FUN_004fb630(iVar10,(double)fVar11);
        if (DAT_00b361ac != '\0') {
          dVar12 = local_728;
          uVar7 = FUN_004fa840(iVar10);
          FUN_00579b60("set %s >> %.2f",uVar7,dVar12);
        }
      }
      else if ((local_735 == 'l') || (local_735 == 's')) {
        local_734 = FUN_009828c0();
        iVar10 = (int)(short)local_73c;
        FUN_004fb630(iVar10,(double)local_734);
        if (DAT_00b361ac != '\0') {
          uVar7 = FUN_004fa840(iVar10);
          FUN_00579b60("set %s >> %i",uVar7);
        }
      }
      if (((local_730[0] != (int *)0x0) && (local_730[0][2] != 0)) ||
         (local_744 = (float)CONCAT22(local_744._2_2_,(short)local_744),
         CONCAT22(local_744._2_2_,(short)local_744) != 0)) {
        if (local_730[0] == (int *)0x0) {
          iVar10 = CONCAT22(local_744._2_2_,(short)local_744);
        }
        else {
          iVar10 = FUN_009832e6(local_730[0][2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
        }
        local_744 = (float)CONCAT22(local_744._2_2_,(short)local_744);
        if ((iVar10 != 0) &&
           (local_744 = (float)CONCAT22(local_744._2_2_,(short)local_744),
           (*(uint *)(iVar10 + 8) >> 0xe & 1) == 0)) {
          iVar10 = FUN_006ecc80();
          if (iVar10 != 0) {
            iVar10 = FUN_006ecc80();
            if (*(char *)(iVar10 + 0x26) == '\x06') goto LAB_00516e86;
          }
          FUN_00441670();
        }
      }
      goto LAB_00516e86;
    }
    goto LAB_00516d04;
  case 0x16:
    if (in_ECX[in_ECX[8] + 9] != 0) {
      in_ECX[8] = in_ECX[8] + 1;
    }
    in_ECX[in_ECX[8] + 9] = 1;
  case 0x18:
    local_73c = (int *)(uint)*(ushort *)(iVar10 + param_5);
    local_744._0_2_ = *(short *)(iVar10 + param_5 + 2);
    local_748 = param_5 + 4;
    local_744._2_2_ = 0;
    FUN_004f32e0(uVar6);
    local_4 = 1;
    if ((char)param_8 == '\0') {
      if (((*(byte *)(in_ECX + in_ECX[8] + 9) & 2) == 0) &&
         (fVar11 = (float10)FUN_004f3620(iVar10 + local_748,param_3,*in_ECX,param_1,in_ECX[2],
                                         (int)(short)local_744,0), fVar11 != (float10)0.0)) {
        in_ECX[in_ECX[8] + 9] = in_ECX[in_ECX[8] + 9] | 2;
      }
      else {
        *local_730[0] = *local_730[0] + (int)(short)local_73c;
      }
    }
    else {
      FUN_004f3620(iVar10 + local_748,param_3,*in_ECX,param_1,in_ECX[2],(int)(short)local_744,
                   param_8);
      in_ECX[in_ECX[8] + 9] = in_ECX[in_ECX[8] + 9] | 2;
    }
    if (local_720 != 0) {
      in_ECX[6] = 6;
      uVar7 = (**(code **)(*param_1 + 0xd4))();
      FUN_004a7a60("Script \'%s\', line %d: failed to evaluate expression.",uVar7);
      param_1[8] = 0;
      in_ECX[7] = local_720;
LAB_00516d04:
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar7 = 0;
      goto LAB_005172d5;
    }
    local_748 = local_748 + (short)local_744;
    local_744 = (float)CONCAT22(local_744._2_2_,(short)local_744);
LAB_00516e86:
    local_4 = 0xffffffff;
    FUN_0060d0a0();
    break;
  case 0x17:
    if ((*(byte *)(in_ECX + in_ECX[8] + 9) & 2) == 0) {
      in_ECX[in_ECX[8] + 9] = in_ECX[in_ECX[8] + 9] | 2;
    }
    else if ((char)param_8 == '\0') {
      *param_6 = *param_6 + (int)*(short *)(iVar10 + param_5);
    }
    break;
  case 0x19:
    in_ECX[in_ECX[8] + 9] = 0;
    if (in_ECX[8] != 0) {
      in_ECX[8] = in_ECX[8] + -1;
    }
    break;
  case 0x1e:
    if ((char)param_8 == '\0') goto switchD_00516b76_caseD_12;
  }
switchD_00516b76_caseD_10:
  uVar7 = 1;
LAB_005172d5:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1
FUN_00517330(int *param_1,int *param_2,int param_3,undefined4 param_4,char param_5,
            undefined1 param_6,undefined1 param_7,undefined4 param_8)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 auStack_758 [2];
  char cStack_756;
  char local_755;
  uint local_754;
  int iStack_750;
  int iStack_74c;
  int *piStack_748;
  int iStack_744;
  int *local_740;
  int iStack_73c;
  int local_738;
  int local_734;
  LARGE_INTEGER local_730;
  LARGE_INTEGER aLStack_728 [227];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b735b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_758;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffff898;
  *unaff_FS_OFFSET = (int)&local_c;
  local_740 = param_2;
  local_755 = FUN_005792e0(uVar5);
  local_730.s.LowPart = 0;
  local_730.s.HighPart = 0;
  if (local_755 != '\0') {
    if (DAT_00b36210 == 0 && _DAT_00b36214 == 0) {
      QueryPerformanceFrequency((LARGE_INTEGER *)&DAT_00b36210);
    }
    QueryPerformanceCounter(&local_730);
  }
  *(undefined1 *)((int)in_ECX + 0xa1) = 0;
  if ((param_1 == (int *)0x0) || (((uint)param_1[2] >> 3 & 1) == 0)) {
    uVar4 = 0;
  }
  else if (in_ECX[5] == 0) {
    in_ECX[5] = param_1;
    FUN_004f32e0();
    local_4 = 0;
    local_738 = 0;
    in_ECX[9] = 0;
    in_ECX[8] = 0;
    local_734 = 0xffff;
    local_754 = 0;
    *in_ECX = param_4;
    if (param_2 == (int *)0x0) {
      in_ECX[1] = 0;
    }
    else {
      uVar6 = (**(code **)(*param_2 + 0x170))();
      in_ECX[1] = uVar6;
    }
    if (param_3 == 0) {
      param_3 = FUN_004fbdc0();
      local_738 = param_3;
    }
    in_ECX[2] = param_3;
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      if (*(int *)(param_3 + 0x10) == 0) {
        uVar6 = FUN_00401f00(8);
        *(undefined4 *)(in_ECX[2] + 0x10) = uVar6;
      }
      **(undefined1 **)(in_ECX[2] + 0x10) = param_6;
      *(undefined1 *)(*(int *)(in_ECX[2] + 0x10) + 1) = param_7;
      *(undefined4 *)(*(int *)(in_ECX[2] + 0x10) + 4) = param_8;
    }
    piStack_748 = (int *)0x0;
    iStack_74c = 0;
    cStack_756 = '\0';
    iStack_744 = 0;
    if (param_1[8] != 0) {
      do {
        iVar2 = iStack_74c;
        iStack_744 = iStack_744 + 1;
        in_ECX[4] = 0;
        iStack_750 = 0;
        cVar3 = FUN_00516830(param_1,&local_734,&local_754,&iStack_750,&piStack_748,iStack_74c != 0)
        ;
        if (cVar3 == '\0') {
          param_1[8] = 0;
          break;
        }
        if (iVar2 == 0) {
          if (local_734 == 0x1e) break;
          if (piStack_748 == (int *)0x0) {
            piStack_748 = local_740;
          }
          cVar3 = FUN_005169a0(param_1,local_734,piStack_748,&iStack_750,local_754,&iStack_74c,
                               iStack_744,0,0);
          if (cVar3 == '\0') {
            cStack_756 = '\x01';
            break;
          }
        }
        else {
          iStack_74c = iVar2 + -1;
        }
        local_754 = local_754 + iStack_750;
      } while (local_754 < (uint)param_1[8]);
    }
    if ((param_5 == '\0') && (cStack_756 == '\0')) {
      FUN_004fa0e0();
    }
    iVar2 = local_738;
    if (local_738 != 0) {
      FUN_004fb4e0();
      FUN_00401f20(iVar2);
    }
    in_ECX[5] = 0;
    if (local_755 != '\0') {
      QueryPerformanceCounter(aLStack_728);
      iStack_73c = (aLStack_728[0].s.HighPart - local_730._4_4_) -
                   (uint)((uint)aLStack_728[0]._0_4_ < local_730.s.LowPart);
      local_740 = (int *)(float)((float10)CONCAT44(iStack_73c,
                                                   aLStack_728[0].s.LowPart - local_730._0_4_) /
                                (float10)CONCAT44(_DAT_00b36214,DAT_00b36210));
      param_1[0xd] = (int)((float)param_1[0xd] + (float)local_740);
    }
    uVar4 = *(undefined1 *)((int)in_ECX + 0xa1);
    local_4 = 0xffffffff;
    FUN_0060d0a0();
  }
  else {
    piVar1 = (int *)in_ECX[5];
    uVar6 = (**(code **)(*param_1 + 0xd4))();
    uVar6 = (**(code **)(*piVar1 + 0xd4))(uVar6);
    FUN_004a7a60("Nested call to ScriptRunner::Run.  Script \'%s\' attempting to execute script \'%s\'."
                 ,uVar6);
    uVar4 = *(undefined1 *)((int)in_ECX + 0xa1);
  }
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00517640(int *param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint *unaff_FS_OFFSET;
  int iStack_73c;
  uint local_738;
  int local_734;
  int *local_730;
  int local_72c;
  undefined4 local_728;
  int *local_724;
  uint local_10;
  uint local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b739b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&iStack_73c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffff8b4;
  *unaff_FS_OFFSET = (uint)&local_c;
  local_724 = param_2;
  if ((param_1 != (int *)0x0) && (((uint)param_1[2] >> 3 & 1) != 0)) {
    if (*(int *)(in_ECX + 0x14) == 0) {
      *(int **)(in_ECX + 0x14) = param_1;
      FUN_004f32e0(uVar4);
      local_4 = 0;
      local_728 = 0xffff;
      local_738 = 0;
      if (param_2 == (int *)0x0) {
        *(undefined4 *)(in_ECX + 4) = 0;
      }
      else {
        uVar5 = (**(code **)(*param_2 + 0x170))();
        *(undefined4 *)(in_ECX + 4) = uVar5;
      }
      *(undefined4 *)(in_ECX + 8) = param_3;
      local_730 = (int *)0x0;
      local_72c = 0;
      local_734 = 0;
      if (param_1[8] != 0) {
        do {
          iVar2 = local_72c;
          local_734 = local_734 + 1;
          *(undefined4 *)(in_ECX + 0x10) = 0;
          iStack_73c = 0;
          cVar3 = FUN_00516830(param_1,&local_728,&local_738,&iStack_73c,&local_730,local_72c != 0);
          uVar4 = local_738;
          if (cVar3 == '\0') {
            param_1[8] = 0;
            break;
          }
          if (iVar2 == 0) {
            if (local_730 == (int *)0x0) {
              local_730 = local_724;
            }
            cVar3 = FUN_005169a0(param_1,local_728,local_730,&iStack_73c,local_738,&local_72c,
                                 local_734,0,1);
            if (cVar3 == '\0') break;
          }
          else {
            local_72c = iVar2 + -1;
          }
          local_738 = uVar4 + iStack_73c;
        } while (local_738 < (uint)param_1[8]);
      }
      *(undefined4 *)(in_ECX + 0x14) = 0;
      local_4 = 0xffffffff;
      FUN_0060d0a0();
      uVar5 = 1;
      goto LAB_005176d0;
    }
    piVar1 = *(int **)(in_ECX + 0x14);
    uVar5 = (**(code **)(*param_1 + 0xd4))();
    uVar5 = (**(code **)(*piVar1 + 0xd4))(uVar5);
    FUN_004a7a60("Nested call to ScriptRunner::Run.  Script \'%s\' attempting to execute script \'%s\'."
                 ,uVar5);
  }
  uVar5 = 0;
LAB_005176d0:
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



undefined1
FUN_00517810(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar2 = (undefined4 *)FUN_00401f00(0xa4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[8] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined1 *)(puVar2 + 0x28) = 0;
    }
    *in_ECX = (int)puVar2;
  }
  if (*(int *)(*in_ECX + 0x14) != 0) {
    puVar2 = (undefined4 *)FUN_00401f00(0xa4);
    if (puVar2 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2[8] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined1 *)(puVar2 + 0x28) = 0;
    }
    uVar1 = FUN_00517330(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_00401f20(puVar2);
    return uVar1;
  }
  uVar1 = FUN_00517330(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}



undefined4 FUN_00517950(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar1 = (undefined4 *)FUN_00401f00(0xa4);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      puVar1[8] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
      puVar1[0xc] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xf] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      puVar1[0x12] = 0;
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)(puVar1 + 0x28) = 0;
    }
    *in_ECX = (int)puVar1;
  }
  if (*(int *)(*in_ECX + 0x14) != 0) {
    puVar2 = (undefined4 *)FUN_00401f00(0xa4);
    puVar1 = (undefined4 *)0x0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar2[8] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x10] = 0;
      puVar2[0x11] = 0;
      puVar2[0x12] = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined1 *)(puVar2 + 0x28) = 0;
      puVar1 = puVar2;
    }
    FUN_00517640(param_1,param_2,param_3);
    FUN_00401f20(puVar1);
    return 1;
  }
  FUN_00517640(param_1,param_2,param_3);
  return 1;
}



void FUN_00517a50(int param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (param_1 != 0) {
    iVar1 = FUN_004510b0();
    if (iVar1 == 0x44534c53) {
      FUN_00450c20(in_ECX,0x18);
    }
  }
  return;
}



void FUN_00517a80(void)

{
  undefined4 *in_ECX;
  
  *(undefined8 *)(in_ECX + 2) = 0;
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  return;
}



void FUN_00517aa0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b73db;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined8 *)(in_ECX + 2) = 0;
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[6] = 0;
  *(undefined2 *)(in_ECX + 7) = 0;
  *(undefined2 *)((int)in_ECX + 0x1e) = 0;
  *in_ECX = *param_1;
  *(undefined8 *)(in_ECX + 2) = *(undefined8 *)(param_1 + 2);
  *(undefined1 *)(in_ECX + 4) = *(undefined1 *)(param_1 + 4);
  local_4 = 0;
  FUN_004028d0(param_1[6],0);
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_00517b20(undefined4 *param_1)

{
  char *_Str2;
  int iVar1;
  undefined4 *in_ECX;
  
  _Str2 = (char *)*param_1;
  if ((_Str2 != (char *)0x0) && ((char *)*in_ECX != (char *)0x0)) {
    iVar1 = __stricmp((char *)*in_ECX,_Str2);
    return iVar1 != 0;
  }
  return (char)((_Str2 == (char *)0x0) * '\x02') != '\x01';
}



bool FUN_00517b60(int *param_1)

{
  char cVar1;
  int *in_ECX;
  
  if (((param_1 != (int *)0x0) && ((char)in_ECX[4] == (char)param_1[4])) && (*in_ECX == *param_1)) {
    if (*(double *)(param_1 + 2) == *(double *)(in_ECX + 2)) {
      cVar1 = FUN_00517b20(param_1 + 6);
      return cVar1 != '\0';
    }
  }
  return true;
}



void FUN_00517c30(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046f100();
  FUN_0046ae40(0x58444e53,in_ECX + 0x38,0xc);
  FUN_0046b9f0();
  return;
}



void FUN_00517c60(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00517cb0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  iVar2 = FUN_004511c0();
  if (iVar2 == 10) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4d414e47) {
        if (iVar2 == 0x4d414e46) {
          FUN_00450c20(&stack0xffffffe8,0);
          (**(code **)(in_ECX[9] + 0x10))(&stack0xffffffe8);
        }
        else if (iVar2 == 0x44444e53) {
          FUN_0046bda0(param_1,&local_10,8);
          *(undefined1 *)(in_ECX + 0xe) = local_10;
          *(undefined1 *)((int)in_ECX + 0x39) = local_f;
          *(undefined1 *)((int)in_ECX + 0x3a) = local_e;
          in_ECX[0xf] = local_c;
        }
        else if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xffffffe8,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
        }
      }
      else if (iVar2 == 0x58444e53) {
        FUN_0046bda0(param_1,in_ECX + 0xe,0xc);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00517dd0(void)

{
  return (float10)_DAT_00b3627c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00517de0(void)

{
  return (float10)_DAT_00b36284;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00517df0(void)

{
  return (float10)_DAT_00b3628c;
}



void FUN_00517e00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b743a;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5219c;
  in_ECX[9] = &PTR_FUN_00a52180;
  local_4 = 2;
  thunk_FUN_0046b170(uVar1);
  FUN_00401f20(in_ECX[0xc]);
  in_ECX[0xc] = 0;
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  FUN_00401f20(in_ECX[10]);
  in_ECX[10] = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00517ed0(char *param_1)

{
  int iVar1;
  char *_Str1;
  int iVar2;
  int *piVar3;
  
  if (param_1 == (char *)0x0) {
    return 0;
  }
  piVar3 = (int *)(DAT_00b33a98 + 0x6c);
  if (piVar3 != (int *)0x0) {
    while( true ) {
      if ((piVar3[1] == 0) && (*piVar3 == 0)) {
        return 0;
      }
      iVar1 = *piVar3;
      _Str1 = *(char **)(iVar1 + 0x28);
      if (_Str1 == (char *)0x0) {
        _Str1 = "";
      }
      iVar2 = __stricmp(_Str1,param_1);
      if (iVar2 == 0) break;
      piVar3 = (int *)piVar3[1];
      if (piVar3 == (int *)0x0) {
        return 0;
      }
    }
    return iVar1;
  }
  return 0;
}



void FUN_00517f40(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b747e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  in_ECX[9] = &PTR_FUN_00a52168;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 0xb) = 0;
  *(undefined2 *)((int)in_ECX + 0x2e) = 0;
  *in_ECX = &PTR_FUN_00a5219c;
  in_ECX[9] = &PTR_FUN_00a52180;
  in_ECX[0xc] = 0;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  local_4 = 2;
  *(undefined1 *)(in_ECX + 1) = 10;
  in_ECX[0xf] = 0;
  *(undefined1 *)((int)in_ECX + 0x39) = 0;
  *(undefined1 *)(in_ECX + 0xe) = 0;
  *(undefined1 *)((int)in_ECX + 0x3a) = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined1 *)((int)in_ECX + 0x3b) = 0;
  *(undefined2 *)((int)in_ECX + 0x42) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00517fe0(byte param_1)

{
  FUN_00517e00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00518000(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b75b3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x212);
  DAT_00b36218 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7,uVar1);
  if (DAT_00b36218 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0;
    if (iVar3 == 0) {
      DAT_00b36218 = (int *)0x0;
    }
    else {
      DAT_00b36218 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x212,1);
    (**(code **)(*DAT_00b36218 + 0xd8))("FootSoundDirt");
    (**(code **)(*DAT_00b36218 + 0x90))(0);
    FUN_00446cb0(DAT_00b36218);
    FUN_00412d30("FootSoundDirt",DAT_00b36218);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x22b);
  DAT_00b36220 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7,uVar1);
  if (DAT_00b36220 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 1;
    if (iVar3 == 0) {
      DAT_00b36220 = (int *)0x0;
    }
    else {
      DAT_00b36220 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x22b,1);
    (**(code **)(*DAT_00b36220 + 0xd8))("FSTMetal");
    (**(code **)(*DAT_00b36220 + 0x90))(0);
    FUN_00446cb0(DAT_00b36220);
    FUN_00412d30("FSTMetal",DAT_00b36220);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x213);
  DAT_00b3621c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3621c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 2;
    if (iVar3 == 0) {
      DAT_00b3621c = (int *)0x0;
    }
    else {
      DAT_00b3621c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x213,1);
    (**(code **)(*DAT_00b3621c + 0xd8))("FootSoundGrass");
    (**(code **)(*DAT_00b3621c + 0x90))(0);
    FUN_00446cb0(DAT_00b3621c);
    FUN_00412d30("FootSoundGrass",DAT_00b3621c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x214);
  DAT_00b36224 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36224 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 3;
    if (iVar3 == 0) {
      DAT_00b36224 = (int *)0x0;
    }
    else {
      DAT_00b36224 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x214,1);
    (**(code **)(*DAT_00b36224 + 0xd8))("FootSoundStone");
    (**(code **)(*DAT_00b36224 + 0x90))(0);
    FUN_00446cb0(DAT_00b36224);
    FUN_00412d30("FootSoundStone",DAT_00b36224);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x215);
  DAT_00b36228 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36228 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 4;
    if (iVar3 == 0) {
      DAT_00b36228 = (int *)0x0;
    }
    else {
      DAT_00b36228 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x215,1);
    (**(code **)(*DAT_00b36228 + 0xd8))("FootSoundWater");
    (**(code **)(*DAT_00b36228 + 0x90))(0);
    FUN_00446cb0(DAT_00b36228);
    FUN_00412d30("FootSoundWater",DAT_00b36228);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x216);
  DAT_00b3622c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3622c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 5;
    if (iVar3 == 0) {
      DAT_00b3622c = (int *)0x0;
    }
    else {
      DAT_00b3622c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x216,1);
    (**(code **)(*DAT_00b3622c + 0xd8))("FootSoundWood");
    (**(code **)(*DAT_00b3622c + 0x90))(0);
    FUN_00446cb0(DAT_00b3622c);
    FUN_00412d30("FootSoundWood",DAT_00b3622c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21f);
  DAT_00b36230 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36230 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 6;
    if (iVar3 == 0) {
      DAT_00b36230 = (int *)0x0;
    }
    else {
      DAT_00b36230 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21f,1);
    (**(code **)(*DAT_00b36230 + 0xd8))("FSTSnow");
    (**(code **)(*DAT_00b36230 + 0x90))(0);
    FUN_00446cb0(DAT_00b36230);
    FUN_00412d30("FSTSnow",DAT_00b36230);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x217);
  DAT_00b36234 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36234 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 7;
    if (iVar3 == 0) {
      DAT_00b36234 = (int *)0x0;
    }
    else {
      DAT_00b36234 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x217,1);
    (**(code **)(*DAT_00b36234 + 0xd8))("FootSoundHeavyArmor");
    (**(code **)(*DAT_00b36234 + 0x90))(0);
    FUN_00446cb0(DAT_00b36234);
    FUN_00412d30("FootSoundHeavyArmor",DAT_00b36234);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x218);
  DAT_00b36238 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36238 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 8;
    if (iVar3 == 0) {
      DAT_00b36238 = (int *)0x0;
    }
    else {
      DAT_00b36238 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x218,1);
    (**(code **)(*DAT_00b36238 + 0xd8))("FootSoundLightArmor");
    (**(code **)(*DAT_00b36238 + 0x90))(0);
    FUN_00446cb0(DAT_00b36238);
    FUN_00412d30("FootSoundLightArmor",DAT_00b36238);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x229);
  DAT_00b36274 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36274 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 9;
    if (iVar3 == 0) {
      DAT_00b36274 = (int *)0x0;
    }
    else {
      DAT_00b36274 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x229,1);
    (**(code **)(*DAT_00b36274 + 0xd8))("FSTArmorHeavySneak");
    (**(code **)(*DAT_00b36274 + 0x90))(0);
    FUN_00446cb0(DAT_00b36274);
    FUN_00412d30("FSTArmorHeavySneak",DAT_00b36274);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x228);
  DAT_00b36278 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36278 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 10;
    if (iVar3 == 0) {
      DAT_00b36278 = (int *)0x0;
    }
    else {
      DAT_00b36278 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x228,1);
    (**(code **)(*DAT_00b36278 + 0xd8))("FSTArmorLightSneak");
    (**(code **)(*DAT_00b36278 + 0x90))(0);
    FUN_00446cb0(DAT_00b36278);
    FUN_00412d30("FSTArmorLightSneak",DAT_00b36278);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x219);
  DAT_00b3623c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3623c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xb;
    if (iVar3 == 0) {
      DAT_00b3623c = (int *)0x0;
    }
    else {
      DAT_00b3623c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x219,1);
    (**(code **)(*DAT_00b3623c + 0xd8))("FootSoundEarthLand");
    (**(code **)(*DAT_00b3623c + 0x90))(0);
    FUN_00446cb0(DAT_00b3623c);
    FUN_00412d30("FootSoundEarthLand",DAT_00b3623c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21a);
  DAT_00b36240 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36240 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xc;
    if (iVar3 == 0) {
      DAT_00b36240 = (int *)0x0;
    }
    else {
      DAT_00b36240 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21a,1);
    (**(code **)(*DAT_00b36240 + 0xd8))("FootSoundGrassLand");
    (**(code **)(*DAT_00b36240 + 0x90))(0);
    FUN_00446cb0(DAT_00b36240);
    FUN_00412d30("FootSoundGrassLand",DAT_00b36240);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21b);
  DAT_00b36244 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36244 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xd;
    if (iVar3 == 0) {
      DAT_00b36244 = (int *)0x0;
    }
    else {
      DAT_00b36244 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21b,1);
    (**(code **)(*DAT_00b36244 + 0xd8))("FootSoundMetalLand");
    (**(code **)(*DAT_00b36244 + 0x90))(0);
    FUN_00446cb0(DAT_00b36244);
    FUN_00412d30("FootSoundMetalLand",DAT_00b36244);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21c);
  DAT_00b36248 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36248 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xe;
    if (iVar3 == 0) {
      DAT_00b36248 = (int *)0x0;
    }
    else {
      DAT_00b36248 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21c,1);
    (**(code **)(*DAT_00b36248 + 0xd8))("FootSoundStoneLand");
    (**(code **)(*DAT_00b36248 + 0x90))(0);
    FUN_00446cb0(DAT_00b36248);
    FUN_00412d30("FootSoundStoneLand",DAT_00b36248);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21d);
  DAT_00b3624c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3624c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xf;
    if (iVar3 == 0) {
      DAT_00b3624c = (int *)0x0;
    }
    else {
      DAT_00b3624c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21d,1);
    (**(code **)(*DAT_00b3624c + 0xd8))("FootSoundWaterLand");
    (**(code **)(*DAT_00b3624c + 0x90))(0);
    FUN_00446cb0(DAT_00b3624c);
    FUN_00412d30("FootSoundWaterLand",DAT_00b3624c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x21e);
  DAT_00b36250 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36250 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x10;
    if (iVar3 == 0) {
      DAT_00b36250 = (int *)0x0;
    }
    else {
      DAT_00b36250 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x21e,1);
    (**(code **)(*DAT_00b36250 + 0xd8))("FootSoundWoodLand");
    (**(code **)(*DAT_00b36250 + 0x90))(0);
    FUN_00446cb0(DAT_00b36250);
    FUN_00412d30("FootSoundWoodLand",DAT_00b36250);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x220);
  DAT_00b36254 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36254 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x11;
    if (iVar3 == 0) {
      DAT_00b36254 = (int *)0x0;
    }
    else {
      DAT_00b36254 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x220,1);
    (**(code **)(*DAT_00b36254 + 0xd8))("FSTSnowLand");
    (**(code **)(*DAT_00b36254 + 0x90))(0);
    FUN_00446cb0(DAT_00b36254);
    FUN_00412d30("FSTSnowLand",DAT_00b36254);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x221);
  DAT_00b36258 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36258 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x12;
    if (iVar3 == 0) {
      DAT_00b36258 = (int *)0x0;
    }
    else {
      DAT_00b36258 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x221,1);
    (**(code **)(*DAT_00b36258 + 0xd8))("FSTEarthSneak");
    (**(code **)(*DAT_00b36258 + 0x90))(0);
    FUN_00446cb0(DAT_00b36258);
    FUN_00412d30("FSTEarthSneak",DAT_00b36258);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x222);
  DAT_00b3625c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3625c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x13;
    if (iVar3 == 0) {
      DAT_00b3625c = (int *)0x0;
    }
    else {
      DAT_00b3625c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x222,1);
    (**(code **)(*DAT_00b3625c + 0xd8))("FSTGrassSneak");
    (**(code **)(*DAT_00b3625c + 0x90))(0);
    FUN_00446cb0(DAT_00b3625c);
    FUN_00412d30("FSTGrassSneak",DAT_00b3625c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x223);
  DAT_00b36260 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36260 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x14;
    if (iVar3 == 0) {
      DAT_00b36260 = (int *)0x0;
    }
    else {
      DAT_00b36260 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x223,1);
    (**(code **)(*DAT_00b36260 + 0xd8))("FSTMetalSneak");
    (**(code **)(*DAT_00b36260 + 0x90))(0);
    FUN_00446cb0(DAT_00b36260);
    FUN_00412d30("FSTMetalSneak",DAT_00b36260);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x225);
  DAT_00b36264 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36264 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x15;
    if (iVar3 == 0) {
      DAT_00b36264 = (int *)0x0;
    }
    else {
      DAT_00b36264 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x225,1);
    (**(code **)(*DAT_00b36264 + 0xd8))("FSTStoneSneak");
    (**(code **)(*DAT_00b36264 + 0x90))(0);
    FUN_00446cb0(DAT_00b36264);
    FUN_00412d30("FSTStoneSneak",DAT_00b36264);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x226);
  DAT_00b36268 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36268 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x16;
    if (iVar3 == 0) {
      DAT_00b36268 = (int *)0x0;
    }
    else {
      DAT_00b36268 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x226,1);
    (**(code **)(*DAT_00b36268 + 0xd8))("FSTWaterSneak");
    (**(code **)(*DAT_00b36268 + 0x90))(0);
    FUN_00446cb0(DAT_00b36268);
    FUN_00412d30("FSTWaterSneak",DAT_00b36268);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x227);
  DAT_00b3626c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3626c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x17;
    if (iVar3 == 0) {
      DAT_00b3626c = (int *)0x0;
    }
    else {
      DAT_00b3626c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x227,1);
    (**(code **)(*DAT_00b3626c + 0xd8))("FSTWoodSneak");
    (**(code **)(*DAT_00b3626c + 0x90))(0);
    FUN_00446cb0(DAT_00b3626c);
    FUN_00412d30("FSTWoodSneak",DAT_00b3626c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x224);
  DAT_00b36270 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b36270 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x18;
    if (iVar3 == 0) {
      DAT_00b36270 = (int *)0x0;
    }
    else {
      DAT_00b36270 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x224,1);
    (**(code **)(*DAT_00b36270 + 0xd8))("FSTSnowSneak");
    (**(code **)(*DAT_00b36270 + 0x90))(0);
    FUN_00446cb0(DAT_00b36270);
    FUN_00412d30("FSTSnowSneak",DAT_00b36270);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00519330(void)

{
  FUN_0046b990();
  FUN_0046c730();
  FUN_00470070(0x4e4f4349);
  FUN_0046a700();
  FUN_0046f4b0();
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005193e0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  FUN_00451210(in_ECX);
  do {
    iVar2 = FUN_004510b0();
    if (iVar2 < 0x4c4c5547) {
      if (iVar2 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          FUN_0046c7a0(0,param_1);
        }
        else {
          FUN_0046c7a0(in_ECX + 6,param_1);
        }
      }
      else if (iVar2 == 0x43534544) {
        if (in_ECX == (int *)0x0) {
          FUN_0046a390(0,param_1);
        }
        else {
          FUN_0046a390(in_ECX + 0xc,param_1);
        }
      }
      else if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xffffffec,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffec);
      }
    }
    else if (iVar2 == 0x4e4f4349) {
      if (in_ECX == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        piVar3 = in_ECX + 9;
      }
      FUN_004700e0(piVar3,param_1);
    }
    else if (iVar2 == 0x4f4c5053) {
      local_c = 0;
      FUN_004510e0(&local_c);
      FUN_0046f420(local_c);
    }
    cVar1 = FUN_0044fea0();
  } while (cVar1 != '\0');
  FUN_0046ab80(0);
  return 1;
}



void FUN_00519500(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046fc10(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



void FUN_00519530(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b764d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a52524;
  in_ECX[6] = &PTR_FUN_00a5250c;
  in_ECX[9] = &PTR_FUN_00a524f0;
  in_ECX[0xc] = &PTR_LAB_00a524d8;
  in_ECX[0xe] = &PTR_FUN_00a524b8;
  local_4 = 3;
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 2;
  FUN_0046f2b0();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00470040();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005195f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7699;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046ffd0();
  local_4._0_1_ = 2;
  FUN_0046a400();
  FUN_0046f2c0();
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_00a52524;
  in_ECX[6] = &PTR_FUN_00a5250c;
  in_ECX[9] = &PTR_FUN_00a524f0;
  in_ECX[0xc] = &PTR_LAB_00a524d8;
  in_ECX[0xe] = &PTR_FUN_00a524b8;
  *(undefined1 *)(in_ECX + 1) = 0x11;
  FUN_0046ab80(1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005196b0(byte param_1)

{
  FUN_00519530();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005196d0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  return;
}



void FUN_00519700(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  do {
    piVar5 = (int *)0x0;
    if (uVar4 < 10) {
      piVar5 = *(int **)(in_ECX + uVar4 * 4);
    }
    if ((piVar5 != (int *)0x0) && ((piVar5[1] != 0 || (*piVar5 != 0)))) {
      FUN_0046ba80(0x54445343,uVar4);
      do {
        if ((piVar5[1] == 0) && (*piVar5 == 0)) break;
        piVar1 = (int *)*piVar5;
        iVar2 = *piVar1;
        uVar3 = 0;
        if (iVar2 != 0) {
          uVar3 = *(undefined4 *)(iVar2 + 0xc);
        }
        FUN_0046ba80(0x49445343,uVar3);
        FUN_0046ae40(0x43445343,piVar1 + 1,1);
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != (int *)0x0);
    }
    uVar4 = uVar4 + 1;
    if (9 < (int)uVar4) {
      return;
    }
  } while( true );
}



undefined4 FUN_00519780(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int in_ECX;
  uint uVar6;
  
  if (param_1 == 0) {
    return 1;
  }
  cVar5 = '\0';
  do {
    uVar6 = (uint)cVar5;
    piVar4 = (int *)0x0;
    if (uVar6 < 10) {
      piVar4 = *(int **)(in_ECX + uVar6 * 4);
    }
    piVar3 = (int *)0x0;
    if (uVar6 < 10) {
      piVar3 = *(int **)(param_1 + uVar6 * 4);
    }
    while (piVar4 != (int *)0x0) {
      if (((int *)piVar4[1] == (int *)0x0) && (*piVar4 == 0)) {
        return 1;
      }
      if (piVar3 == (int *)0x0) {
        return 1;
      }
      if (((int *)piVar3[1] == (int *)0x0) && (*piVar3 == 0)) {
        return 1;
      }
      piVar1 = (int *)*piVar4;
      piVar2 = (int *)*piVar3;
      if ((char)piVar1[1] != (char)piVar2[1]) {
        return 1;
      }
      piVar4 = (int *)piVar4[1];
      piVar3 = (int *)piVar3[1];
      if (*piVar1 != *piVar2) {
        return 1;
      }
    }
    if (piVar3 != (int *)0x0) {
      return 1;
    }
    cVar5 = cVar5 + '\x01';
    if ('\t' < cVar5) {
      return 0;
    }
  } while( true );
}



void FUN_00519810(uint param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  
  if ((param_1 < 10) &&
     (puVar1 = *(undefined4 **)(in_ECX + param_1 * 4), puVar1 != (undefined4 *)0x0)) {
    while (cVar3 = FUN_0046cb60(), cVar3 == '\0') {
      FUN_00401f20(*puVar1);
      puVar2 = (undefined4 *)puVar1[1];
      if (puVar2 == (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      else {
        puVar1[1] = puVar2[1];
        *puVar1 = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + param_1 * 4));
  *(undefined4 *)(in_ECX + param_1 * 4) = 0;
  return;
}



void FUN_00519880(int param_1,uint param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  
  if ((param_1 != 0) && (param_2 < 10)) {
    if (*(int *)(in_ECX + param_2 * 4) == 0) {
      puVar2 = (undefined4 *)FUN_00401f00(8);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)0x0;
      }
      else {
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      *(undefined4 **)(in_ECX + param_2 * 4) = puVar2;
    }
    piVar1 = *(int **)(in_ECX + param_2 * 4);
    if (piVar1 != (int *)0x0) {
      do {
        piVar3 = piVar1;
        piVar1 = (int *)piVar3[1];
        if (((piVar1 == (int *)0x0) && (*piVar3 == 0)) ||
           (*(byte *)(param_1 + 4) < *(byte *)(*piVar3 + 4))) {
          FUN_00446cb0(param_1);
          return;
        }
      } while (piVar1 != (int *)0x0);
      if (piVar3 != (int *)0x0) {
        FUN_0067b1e0(param_1);
      }
    }
  }
  return;
}



int FUN_00519900(uint param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  
  iVar3 = 0;
  piVar4 = (int *)0x0;
  if (param_1 < 10) {
    piVar4 = *(int **)(in_ECX + param_1 * 4);
  }
  while ((piVar4 != (int *)0x0 && (((piVar4[1] != 0 || (*piVar4 != 0)) && (iVar3 == 0))))) {
    piVar1 = (int *)*piVar4;
    if ((*piVar1 != 0) && (iVar2 = FUN_0047df80(0), iVar2 % 100 < (int)(uint)*(byte *)(piVar1 + 1)))
    {
      iVar3 = *piVar1;
    }
    piVar4 = (int *)piVar4[1];
  }
  return iVar3;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00519960(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int local_10c;
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_004510b0();
  if (iVar1 == 0x49445343) {
    local_10c = 0;
    FUN_004510e0(&local_10c);
    piVar2 = (int *)FUN_00401f00(8);
    if (local_10c == 0) {
      *piVar2 = 0;
    }
    else {
      FUN_0046bb20(&local_10c,param_1);
      uVar3 = FUN_0046b250(local_10c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
      iVar1 = FUN_009832e6(uVar3);
      *piVar2 = iVar1;
      if (iVar1 == 0) {
        uVar3 = (**(code **)(*param_3 + 0xd4))(param_3[3]);
        FUN_004a7a60("Unable to find CreatureSound ID (%08X) for creature \'%s\' (%08X).",local_10c,
                     uVar3);
      }
    }
  }
  else {
    iVar1 = FUN_004510b0();
    if (iVar1 != 0x46445343) {
      return 0;
    }
    FUN_00450c20(local_108,0x104);
    piVar2 = (int *)FUN_00401f00(8);
    iVar1 = FUN_00517ed0(local_108);
    *piVar2 = iVar1;
  }
  FUN_0044fea0();
  iVar1 = FUN_004510b0();
  if (iVar1 != 0x43445343) {
    FUN_00401f20(piVar2);
    return 0;
  }
  FUN_00450c20(piVar2 + 1,1);
  FUN_00519880(piVar2,param_2);
  return 1;
}



undefined1 * FUN_00519ad0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)0x0;
  piVar2 = (int *)0x0;
  if (param_1 < 10) {
    piVar2 = *(int **)(in_ECX + param_1 * 4);
  }
  while ((piVar2 != (int *)0x0 &&
         (((piVar2[1] != 0 || (*piVar2 != 0)) && (puVar4 == (undefined1 *)0x0))))) {
    piVar1 = (int *)*piVar2;
    if (((*piVar1 != 0) && (iVar3 = FUN_0047df80(0), iVar3 % 100 < (int)(uint)*(byte *)(piVar1 + 1))
        ) && (puVar4 = *(undefined1 **)(*piVar1 + 0x28), puVar4 == (undefined1 *)0x0)) {
      puVar4 = &DAT_00a2f7ec;
    }
    piVar2 = (int *)piVar2[1];
  }
  return puVar4;
}



void FUN_00519b40(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 10;
  do {
    FUN_00519810(iVar1);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_00519b70(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_4;
  
  iVar4 = 0;
  iVar6 = 10;
  do {
    FUN_00519810(iVar4);
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  if (param_1 != (undefined4 *)0x0) {
    uVar3 = 0;
    local_4 = 10;
    do {
      piVar5 = (int *)0x0;
      if (uVar3 < 10) {
        piVar5 = (int *)*param_1;
      }
      for (; (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))));
          piVar5 = (int *)piVar5[1]) {
        puVar1 = (undefined4 *)*piVar5;
        puVar2 = (undefined4 *)FUN_00401f00(8);
        if ((puVar2 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
          *puVar2 = *puVar1;
          *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar1 + 1);
        }
        FUN_00519880(puVar2,uVar3);
      }
      param_1 = param_1 + 1;
      uVar3 = uVar3 + 1;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  return;
}



void FUN_00519c10(void)

{
  int in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00519c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(in_ECX + 0x80) + 0x10))();
  return;
}



void FUN_00519c30(uint param_1)

{
  if ((param_1 & 0x10000000) != 0) {
    FUN_0065cc90();
  }
  return;
}



void FUN_00519c50(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x84) = param_1;
  FUN_0046abf0();
  return;
}



undefined1 FUN_00519c70(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 1;
  if (((*(char *)(in_ECX + 4) == '$') && ((*(uint *)(in_ECX + 0x28) >> 4 & 1) == 0)) &&
     ((*(byte *)(in_ECX + 0x28) & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



uint FUN_00519c90(void)

{
  undefined4 in_EAX;
  uint uVar1;
  int in_ECX;
  
  uVar1 = CONCAT31((int3)((uint)in_EAX >> 8),*(char *)(in_ECX + 4));
  if ((*(char *)(in_ECX + 4) == '$') &&
     ((((*(uint *)(in_ECX + 0x28) >> 4 & 1) == 0 && ((*(byte *)(in_ECX + 0x28) & 1) == 0)) ||
      (uVar1 = *(uint *)(in_ECX + 0x28) >> 0x12, (uVar1 & 1) != 0)))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}



undefined1 FUN_00519cc0(void)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 1;
  if (((*(char *)(in_ECX + 4) == '$') && ((*(uint *)(in_ECX + 0x28) >> 6 & 1) == 0)) &&
     ((*(byte *)(in_ECX + 0x28) & 1) == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}



uint FUN_00519ce0(void)

{
  uint in_EAX;
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) == '$') {
    return *(uint *)(in_ECX + 0x28) >> 5 & 0xffffff01;
  }
  return in_EAX & 0xffffff00;
}



uint FUN_00519d00(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) == '$') {
    return *(uint *)(in_ECX + 0x28) >> 2 & 0xffffff01;
  }
  return 1;
}



uint FUN_00519d20(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 4) == '#') {
    return *(byte *)(in_ECX + 0x28) & 1;
  }
  return 0xffffffff;
}



uint FUN_00519d90(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    uVar1 = FUN_00468ad0(0);
    return uVar1 & 0xff;
  case 1:
    uVar1 = FUN_00468ad0(1);
    return uVar1 & 0xff;
  case 2:
    uVar1 = FUN_00468ad0(2);
    return uVar1 & 0xff;
  case 3:
    uVar1 = FUN_00468ad0(3);
    return uVar1 & 0xff;
  case 4:
    uVar1 = FUN_00468ad0(4);
    return uVar1 & 0xff;
  case 5:
    uVar1 = FUN_00468ad0(5);
    return uVar1 & 0xff;
  case 6:
    uVar1 = FUN_00468ad0(6);
    return uVar1 & 0xff;
  case 7:
    uVar1 = FUN_00468ad0(7);
    return uVar1 & 0xff;
  case 8:
    uVar1 = FUN_00519c10();
    return uVar1;
  case 9:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x24) + 0x48))();
    return uVar1 & 0xffff;
  case 10:
    uVar1 = (**(code **)(*(int *)(in_ECX + 0x24) + 0x4c))();
    return uVar1 & 0xffff;
  case 0xb:
    FUN_004698b0();
    uVar1 = FUN_009828c0();
    return uVar1;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x25:
  case 0x26:
  case 0x27:
    break;
  case 0x21:
    uVar1 = FUN_00538910();
    return uVar1 & 0xff;
  case 0x22:
    uVar1 = FUN_004681a0();
    return uVar1 & 0xff;
  case 0x23:
    uVar1 = FUN_004681d0();
    return uVar1 & 0xff;
  case 0x24:
    uVar1 = FUN_00468200();
    return uVar1 & 0xff;
  default:
    FUN_0065cb80(param_1);
    uVar1 = FUN_009828c0();
  }
  return uVar1;
}



void FUN_00519f50(undefined4 param_1,int param_2)

{
  switch(param_1) {
  case 0:
    FUN_00468af0(0,param_2);
    return;
  case 1:
    FUN_00468af0(1,param_2);
    return;
  case 2:
    FUN_00468af0(2,param_2);
    return;
  case 3:
    FUN_00468af0(3,param_2);
    return;
  case 4:
    FUN_00468af0(4,param_2);
    return;
  case 5:
    FUN_00468af0(5,param_2);
    return;
  case 6:
    FUN_00468af0(6,param_2);
    return;
  case 7:
    FUN_00468af0(7,param_2);
    return;
  case 8:
    FUN_00519c50(param_2);
    return;
  case 9:
    FUN_00467290(param_2);
    return;
  case 10:
    FUN_004672b0(param_2);
    return;
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x25:
  case 0x26:
  case 0x27:
    break;
  case 0x21:
    FUN_00468180(param_2);
    return;
  case 0x22:
    FUN_004681b0(param_2);
    return;
  case 0x23:
    FUN_004681e0(param_2);
    return;
  case 0x24:
    FUN_00468210(param_2);
    return;
  default:
    FUN_0065cb00(param_1,(float)param_2);
    FUN_0046abf0(0x10000000);
  }
  return;
}



float10 FUN_0051a120(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *in_ECX;
  float10 fVar5;
  float local_c;
  
  local_c = 0.0;
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0x14:
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
      if ((iVar2 != 0) && (iVar2 = FUN_0046ca20(iVar2), iVar2 != 0)) {
        fVar5 = (float10)(**(code **)(*in_ECX + 300))(7,0x3f800000);
        iVar2 = *in_ECX;
        uVar3 = FUN_004b4c80((float)fVar5);
        fVar5 = (float10)(**(code **)(iVar2 + 300))(uVar3);
        fVar5 = (float10)FUN_004887f0((float)fVar5);
        fVar5 = (float10)FUN_00547370((int)ROUND(fVar5) & 0xffff);
        return (float10)(float)fVar5;
      }
      break;
    case 0x16:
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05de0,0);
      if (iVar2 != 0) {
        fVar5 = (float10)FUN_005479b0(*(undefined4 *)(iVar2 + 0x50));
        return (float10)(float)fVar5;
      }
      break;
    case 0x1a:
      local_c = 100.0;
      break;
    case 0x21:
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
      if ((iVar2 != 0) && (iVar4 = FUN_0046ca20(iVar2), iVar4 != 0)) {
        iVar4 = *in_ECX;
        uVar3 = FUN_004bb060();
        (**(code **)(iVar4 + 300))(uVar3);
        (**(code **)(*in_ECX + 300))(7);
        (**(code **)(*in_ECX + 0x128))(0);
        fVar5 = (float10)(**(code **)(*in_ECX + 300))(10);
        uVar1 = (**(code **)(*(int *)(iVar2 + 0x88) + 0x10))();
        uVar3 = FUN_009828c0((float)fVar5,uVar1,0x3f800000,0x3f800000,0);
        uVar3 = FUN_009828c0(uVar3);
        uVar3 = FUN_009828c0(uVar3);
        fVar5 = (float10)FUN_00547070(uVar3);
        return (float10)(float)fVar5;
      }
      break;
    case 0x22:
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05dc8,0);
      if (iVar2 != 0) {
        uVar3 = (**(code **)(*(int *)(iVar2 + 0x74) + 0x10))();
        fVar5 = (float10)FUN_005479a0(uVar3);
        return (float10)(float)fVar5;
      }
    }
  }
  return (float10)local_c;
}



short FUN_0051a3b0(uint param_1)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 uVar9;
  int in_ECX;
  short local_4;
  
  local_4 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    local_4 = 6;
  }
  if (0x6c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    sVar3 = FUN_0046ac50(param_1);
    local_4 = local_4 + sVar3;
  }
  sVar3 = FUN_00468b40(param_1);
  sVar4 = FUN_00467a20(param_1);
  sVar5 = FUN_0046f620(param_1);
  sVar6 = FUN_004683c0(param_1);
  local_4 = local_4 + sVar3 + sVar4 + sVar5 + sVar6;
  if ((param_1 & 4) != 0) {
    local_4 = local_4 + 4;
  }
  if ((param_1 & 0x10000000) != 0) {
    sVar3 = FUN_0065c520();
    local_4 = local_4 + sVar3;
  }
  if ((char)param_1 < '\0') {
    pcVar7 = *(char **)(in_ECX + 0xa4);
    if (pcVar7 == (char *)0x0) {
      pcVar7 = "";
    }
    sVar3 = (short)pcVar7;
    do {
      cVar2 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    local_4 = local_4 + 1 + ((short)pcVar7 - (sVar3 + 1));
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar8 = (int *)FUN_0046b250(*puVar1);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x207,"..\\TES Shared\\TESActorBase.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,local_4,*puVar1,uVar9);
      return local_4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",local_4,0x207,
                 "..\\TES Shared\\TESActorBase.cpp");
  }
  return local_4;
}



void FUN_0051a520(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  int in_ECX;
  char *pcVar9;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  uVar4 = param_1;
  if (0x6c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046b5e0(param_1);
  }
  FUN_00468b60(uVar4);
  FUN_00467af0(uVar4);
  FUN_0046f710(uVar4);
  FUN_004683e0(uVar4);
  if ((uVar4 & 4) != 0) {
    param_1 = *(uint *)(in_ECX + 0x84);
    FUN_0046ac70(&param_1,4);
  }
  if ((uVar4 & 0x10000000) != 0) {
    FUN_0065c270();
  }
  if ((char)uVar4 < '\0') {
    pcVar9 = *(char **)(in_ECX + 0xa4);
    if (pcVar9 == (char *)0x0) {
      pcVar9 = "";
    }
    pcVar6 = pcVar9;
    do {
      cVar5 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar5 != '\0');
    param_1 = CONCAT31(param_1._1_3_,(char)pcVar6 - ((char)pcVar9 + '\x01'));
    FUN_0046ac70(&param_1,1);
    if ((char)param_1 != '\0') {
      FUN_0046ac70(pcVar9,param_1 & 0xff);
    }
  }
  if (DAT_00b05bac != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar3 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar3 - iVar1,0x231,
                   "..\\TES Shared\\TESActorBase.cpp");
    }
    else {
      piVar7 = (int *)FUN_0046b250(*puVar2);
      uVar8 = (**(code **)(*piVar7 + 0xd4))
                        (*(undefined4 *)((int)puVar2 + 5),0x231,"..\\TES Shared\\TESActorBase.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar3 - iVar1,*puVar2,uVar8);
    }
  }
  cVar5 = FUN_0045a170();
  if (cVar5 != '\0') {
    uVar4 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar4) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\TESActorBase.cpp",0x231);
    }
    *local_c = (short)uVar4 - (short)local_c;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0051a6f0(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  int in_ECX;
  int iVar8;
  char *pcVar9;
  undefined1 auStack_118 [3];
  char cStack_115;
  uint local_114;
  int local_110;
  undefined4 uStack_10c;
  undefined1 auStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_118;
  iVar8 = 0;
  local_114 = 0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    FUN_004534d0(&local_110,4);
    if (local_110 != 0x4b4f4c42) {
      puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar2 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\TESActorBase.cpp",0x23a,*(undefined1 *)(DAT_00b33b00 + 0x7c))
        ;
      }
      else {
        piVar5 = (int *)FUN_0046b250(*puVar2);
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\TESActorBase.cpp",0x23a,*puVar2,uVar6);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_114,2);
  }
  if (0x6c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    FUN_0046b600(param_1,param_2);
  }
  FUN_00468b80(param_1,param_2);
  FUN_00467ca0(param_1,param_2);
  FUN_0046f8e0(param_1,param_2);
  FUN_00468440(param_1,param_2);
  if ((param_1 & 4) != 0) {
    FUN_0046ac80(&uStack_10c,4);
    *(undefined4 *)(in_ECX + 0x84) = uStack_10c;
  }
  if ((param_1 & 0x10000000) != 0) {
    FUN_0065cbb0();
  }
  if ((char)param_1 < '\0') {
    _memset(auStack_108,0,0x104);
    FUN_0046ac80(&cStack_115,1);
    if (cStack_115 != '\0') {
      FUN_0046ac80(auStack_108,cStack_115);
    }
    FUN_004028d0(auStack_108,0);
  }
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar2 == (undefined4 *)0x0) {
      uVar7 = local_114 & 0xffff;
      if (uVar7 + iVar8 < uVar3) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar3 - uVar7) - iVar8;
        pcVar9 = "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
        ;
      }
      else {
        if (uVar7 + iVar8 <= uVar3) {
          return;
        }
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar7 - uVar3) + iVar8;
        pcVar9 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar9,iVar8,"..\\TES Shared\\TESActorBase.cpp",0x25e,uVar1);
    }
    else {
      piVar5 = (int *)FUN_0046b250(*puVar2);
      uVar7 = (local_114 & 0xffff) + iVar8;
      if (uVar7 < uVar3) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_114 & 0xffff)) - iVar8,"..\\TES Shared\\TESActorBase.cpp",
                     0x25e,*puVar2,uVar6);
      }
      else if (uVar3 < uVar7) {
        uVar6 = (**(code **)(*piVar5 + 0xd4))
                          (*(undefined1 *)((int)puVar2 + 9),*(undefined4 *)((int)puVar2 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_114 & 0xffff) - uVar3) + iVar8,"..\\TES Shared\\TESActorBase.cpp",
                     0x25e,*puVar2,uVar6);
      }
    }
  }
  return;
}



int FUN_0051a9b0(int param_1,int param_2,int param_3)

{
  return (param_1 * 0x10 + param_2) * 0x100 + param_3;
}



ushort FUN_0051a9d0(ushort param_1)

{
  return param_1 >> 0xc;
}



uint FUN_0051a9e0(uint param_1)

{
  return param_1 >> 8 & 0xf;
}



undefined2 FUN_0051a9f0(void)

{
  int in_ECX;
  
  return *(undefined2 *)(in_ECX + 8);
}



undefined1 FUN_0051aa00(undefined1 param_1)

{
  return param_1;
}



void FUN_0051aa10(uint param_1)

{
  longlong lVar1;
  int iVar2;
  void *_Dst;
  int in_ECX;
  undefined **ppuVar3;
  
  *(short *)(in_ECX + 8) = (short)param_1;
  iVar2 = 0;
  ppuVar3 = &PTR_s_Start_00b10900 + (&DAT_00b102ec)[(param_1 & 0xff) * 9];
  do {
    if (**ppuVar3 == '\0') break;
    iVar2 = iVar2 + 1;
    ppuVar3 = ppuVar3 + 8;
  } while (iVar2 < 5);
  *(int *)(in_ECX + 0xc) = iVar2;
  if (*(int *)(in_ECX + 0x10) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x10));
  }
  if (*(uint *)(in_ECX + 0xc) != 0) {
    lVar1 = (ulonglong)*(uint *)(in_ECX + 0xc) * 4;
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(void **)(in_ECX + 0x10) = _Dst;
    _memset(_Dst,0,*(int *)(in_ECX + 0xc) * 4);
    return;
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



undefined4 FUN_0051aaa0(void)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = *(byte *)(in_ECX + 8) - 0x16;
  return CONCAT31((int3)(uVar1 >> 8),uVar1 < 5);
}



void FUN_0051aab0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x14);
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  param_1[1] = *(undefined4 *)(in_ECX + 0x18);
  param_1[2] = uVar1;
  return;
}



undefined1 FUN_0051aad0(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 0x20);
}



undefined4 FUN_0051aae0(undefined1 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 0x1b:
  case 0x21:
    return 1;
  default:
    return 0;
  }
}



void FUN_0051ab30(undefined4 param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a529cc;
  in_ECX[4] = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  *(undefined1 *)((int)in_ECX + 0x21) = 0;
  in_ECX[5] = DAT_00b3f9a8;
  in_ECX[6] = DAT_00b3f9ac;
  local_4 = 0;
  in_ECX[7] = DAT_00b3f9b0;
  FUN_0051aa10(param_1);
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051abd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a529cc;
  local_4 = 0;
  FUN_00401f20(in_ECX[4],uVar1);
  in_ECX[4] = 0;
  FUN_00401e40(in_ECX[10]);
  in_ECX[10] = 0;
  in_ECX[9] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



ushort FUN_0051ac50(void)

{
  int in_ECX;
  
  return *(ushort *)(in_ECX + 8) >> 0xc;
}



ushort FUN_0051ac60(void)

{
  int in_ECX;
  
  return *(ushort *)(in_ECX + 8) >> 8 & 0xf;
}



undefined1 FUN_0051ac70(void)

{
  int in_ECX;
  
  return *(undefined1 *)(in_ECX + 8);
}



uint FUN_0051ac80(uint param_1)

{
  int iVar1;
  
  if ((short)param_1 == 0xff) {
    return param_1 & 0xffffff00;
  }
  iVar1 = (&DAT_00b102ec)[(param_1 & 0xff) * 9];
  if ((((iVar1 != 5) && (iVar1 != 4)) && (iVar1 != 7)) && (iVar1 != 6)) {
    return 0;
  }
  return 1;
}



uint FUN_0051acc0(uint param_1)

{
  if ((short)param_1 == 0xff) {
    return param_1 & 0xffffff00;
  }
  return CONCAT31((int3)((param_1 & 0xff) * 9 >> 8),(&DAT_00b102ec)[(param_1 & 0xff) * 9] == 5);
}



void FUN_0051acf0(int param_1)

{
  void *_Dst;
  void *_Dst_00;
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  size_t _Size;
  
  uVar4 = *(uint *)(in_ECX + 0x24);
  *(int *)(in_ECX + 0x24) = param_1;
  if (param_1 == 0) {
    FUN_00401e40(*(undefined4 *)(in_ECX + 0x28));
    *(undefined4 *)(in_ECX + 0x28) = 0;
    return;
  }
  if (uVar4 == 0) {
    uVar1 = thunk_FUN_00401aa0(param_1 << 4,1);
    uVar4 = 0;
    *(undefined4 *)(in_ECX + 0x28) = uVar1;
    if (*(int *)(in_ECX + 0x24) != 0) {
      iVar2 = 0;
      do {
        *(undefined4 *)(iVar2 + 0xc + *(int *)(in_ECX + 0x28)) = 0;
        *(undefined4 *)(iVar2 + *(int *)(in_ECX + 0x28)) = 0;
        *(undefined1 *)(iVar2 + 4 + *(int *)(in_ECX + 0x28)) = 0xfa;
        *(undefined4 *)(iVar2 + 8 + *(int *)(in_ECX + 0x28)) = 0x3f800000;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x10;
      } while (uVar4 < *(uint *)(in_ECX + 0x24));
    }
  }
  else {
    _Size = uVar4 << 4;
    _Dst = (void *)thunk_FUN_00401aa0(_Size,1);
    _memcpy(_Dst,*(void **)(in_ECX + 0x28),_Size);
    _Dst_00 = (void *)FUN_00401e60(*(undefined4 *)(in_ECX + 0x28),*(int *)(in_ECX + 0x24) << 4);
    *(void **)(in_ECX + 0x28) = _Dst_00;
    uVar3 = uVar4;
    if (*(uint *)(in_ECX + 0x24) < uVar4) {
      uVar3 = *(uint *)(in_ECX + 0x24);
    }
    _memcpy(_Dst_00,_Dst,uVar3 << 4);
    FUN_00401e40(_Dst);
    if (uVar4 < *(uint *)(in_ECX + 0x24)) {
      do {
        *(undefined4 *)(_Size + 0xc + *(int *)(in_ECX + 0x28)) = 0;
        *(undefined4 *)(_Size + *(int *)(in_ECX + 0x28)) = 0;
        *(undefined1 *)(_Size + 4 + *(int *)(in_ECX + 0x28)) = 0xfa;
        *(undefined4 *)(_Size + 8 + *(int *)(in_ECX + 0x28)) = 0x3f800000;
        uVar4 = uVar4 + 1;
        _Size = _Size + 0x10;
      } while (uVar4 < *(uint *)(in_ECX + 0x24));
      return;
    }
  }
  return;
}



float10 FUN_0051ae20(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  if ((int)param_1 < 0) {
    FUN_004a7a60("Invalid anim group action (action %d too small) in %s (%04X).",param_1,
                 (&PTR_DAT_00b102e0)[(*(ushort *)(in_ECX + 8) & 0xff) * 9],
                 (uint)*(ushort *)(in_ECX + 8));
  }
  else {
    if (*(uint *)(in_ECX + 0xc) <= param_1) {
      FUN_004a7a60("Invalid anim group action (action %d too big %d max) in %s (%04x).",param_1,
                   *(uint *)(in_ECX + 0xc),(&PTR_DAT_00b102e0)[(*(ushort *)(in_ECX + 8) & 0xff) * 9]
                   ,(uint)*(ushort *)(in_ECX + 8));
      return (float10)0;
    }
    if (*(int *)(in_ECX + 0x10) != 0) {
      iVar1 = __isnan((double)*(float *)(*(int *)(in_ECX + 0x10) + param_1 * 4));
      if (iVar1 != 0) {
        FUN_004a7a60("Time %d in group %04X is QNAN",param_1,*(undefined2 *)(in_ECX + 8));
        return (float10)0;
      }
      return (float10)*(float *)(*(int *)(in_ECX + 0x10) + param_1 * 4);
    }
  }
  return (float10)0;
}



float10 FUN_0051aed0(void)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30(*(float *)(in_ECX + 0x1c) * *(float *)(in_ECX + 0x1c) +
                                *(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 0x14) +
                                *(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x18));
  return (float10)(float)fVar1;
}



undefined4 FUN_0051af00(void)

{
  int in_ECX;
  
  switch(*(undefined1 *)(in_ECX + 8)) {
  case 0:
  case 1:
  case 0x1b:
  case 0x21:
    return 1;
  default:
    return 0;
  }
}



void FUN_0051af50(byte param_1)

{
  FUN_0051abd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0051af70(int *param_1,float param_2,float param_3,int param_4)

{
  float fVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int in_ECX;
  float *pfVar11;
  double dVar12;
  char *pcVar13;
  int local_30;
  uint local_2c;
  
  piVar2 = param_1;
  uVar4 = *(uint *)(in_ECX + 0x24);
  local_2c = 0;
  if (uVar4 == 0) {
    return;
  }
  local_30 = 0;
  do {
    if (local_2c < uVar4) {
      pfVar11 = (float *)(*(int *)(in_ECX + 0x28) + local_30);
    }
    else {
      pfVar11 = (float *)0x0;
    }
    fVar1 = *pfVar11;
    if (((param_3 < param_2) && ((param_2 < fVar1 || (fVar1 < param_3 != (fVar1 == param_3))))) ||
       ((param_2 < fVar1 &&
        ((!NAN(fVar1) && !NAN(param_3)) && fVar1 < param_3 != (fVar1 == param_3))))) {
      fVar1 = pfVar11[3];
      if (fVar1 == 0.0) {
        switch(*(undefined1 *)(pfVar11 + 1)) {
        case 0:
        case 1:
        case 2:
        case 3:
          FUN_006b1210(piVar2,*(undefined1 *)(pfVar11 + 1));
          break;
        case 4:
        case 5:
        case 6:
          cVar3 = (**(code **)(*piVar2 + 400))();
          if (((cVar3 != '\0') &&
              (iVar8 = FUN_009832e6(piVar2,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0), iVar8 != 0)) &&
             (cVar3 = FUN_005e3270(), cVar3 != '\0')) {
            uVar9 = (**(code **)(*piVar2 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
            FUN_009832e6(uVar9);
            iVar8 = *(int *)(DAT_00b33398 + 0x24);
            iVar10 = FUN_0051cec0(*(undefined1 *)(pfVar11 + 1));
            if (((iVar10 != 0) && (iVar8 != 0)) &&
               (puVar5 = (undefined4 *)FUN_006ae0a0(*(undefined4 *)(iVar10 + 0xc),0x102,1),
               puVar5 != (undefined4 *)0x0)) {
              puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x174))();
              FUN_006b7360(*puVar6,puVar6[1],puVar6[2]);
              FUN_006ac3e0(*puVar5,piVar2);
              FUN_006b7280(0x3f7ae148);
              FUN_006b7310(0x3f800000);
              FUN_006b71c0(0);
              goto LAB_0051b1f2;
            }
          }
          break;
        case 9:
          FUN_006b07f0(piVar2,9);
          break;
        case 10:
          FUN_006b07f0(piVar2,10);
          break;
        case 0xb:
          if (param_4 != 0) {
            if ((piVar2 == (int *)0x0) || (piVar2 != DAT_00b333c4)) {
              iVar8 = 0;
            }
            else {
              iVar8 = DAT_00b333c4[0x176];
            }
            piVar7 = (int *)(**(code **)(*piVar2 + 0x13c))(iVar8);
            if ((piVar7 != (int *)0x0) && (*(int *)(*(int *)(param_4 + 0x20) + 0xc) != 0)) {
              (**(code **)(*piVar7 + 0xd8))
                        (*(int *)(*(int *)(*(int *)(param_4 + 0x20) + 0x10) + 4 +
                                 ((uint)pfVar11[2] & 0xff) * 8) + 0xb + ((uint)pfVar11[2] >> 8));
            }
          }
          break;
        case 0xc:
          param_1 = (int *)0x3f800000;
          if (*(int *)(*(int *)(param_4 + 0x20) + 0xc) != 0) {
            dVar12 = _atof((char *)(*(int *)(*(int *)(*(int *)(param_4 + 0x20) + 0x10) + 4 +
                                            ((uint)pfVar11[2] & 0xff) * 8) + 0x11 +
                                   ((uint)pfVar11[2] >> 8)));
            param_1 = (int *)(float)dVar12;
          }
          FUN_006ac420(piVar2,param_1);
          break;
        case 0xd:
          FUN_0065dc50(piVar2);
          break;
        case 0xe:
          cVar3 = (**(code **)(*piVar2 + 400))();
          if (((cVar3 != '\0') &&
              (piVar7 = (int *)FUN_009832e6(piVar2,0,&PTR_PTR_00b03054,&PTR_PTR_00b10a1c,0),
              piVar7 != (int *)0x0)) && (iVar8 = (**(code **)(*piVar7 + 0x388))(), iVar8 != 0)) {
            pcVar13 = "FSTHorseSoft";
LAB_0051b1e1:
            puVar5 = (undefined4 *)FUN_0065a970(pcVar13,0,0x102,1);
            if (puVar5 != (undefined4 *)0x0) goto LAB_0051b1f2;
          }
          break;
        case 0xf:
          cVar3 = (**(code **)(*piVar2 + 400))();
          if (((cVar3 != '\0') &&
              (piVar7 = (int *)FUN_009832e6(piVar2,0,&PTR_PTR_00b03054,&PTR_PTR_00b10a1c,0),
              piVar7 != (int *)0x0)) && (iVar8 = (**(code **)(*piVar7 + 0x388))(), iVar8 != 0)) {
            pcVar13 = "FSTHorseRide";
            goto LAB_0051b1e1;
          }
        }
      }
      else if ((*(int *)(DAT_00b33398 + 0x24) != 0) &&
              (puVar5 = (undefined4 *)
                        FUN_006ae0a0(*(undefined4 *)((int)fVar1 + 0xc),
                                     2 - ((*(uint *)((int)fVar1 + 0x3c) >> 6 & 1) != 0) | 0x100,1),
              puVar5 != (undefined4 *)0x0)) {
        puVar6 = (undefined4 *)(**(code **)(*piVar2 + 0x174))();
        FUN_006b7360(*puVar6,puVar6[1],puVar6[2]);
        FUN_006b7280((float)*(byte *)(pfVar11 + 1) / 255.0);
        FUN_006b7310(pfVar11[2]);
        FUN_006ac3e0(*puVar5,piVar2);
        FUN_006b7190(*(uint *)((int)pfVar11[3] + 0x3c) >> 4 & 0xffffff01);
LAB_0051b1f2:
        FUN_006b73e0();
        FUN_00401f20(puVar5);
      }
    }
    uVar4 = *(uint *)(in_ECX + 0x24);
    local_30 = local_30 + 0x10;
    local_2c = local_2c + 1;
    if (uVar4 <= local_2c) {
      return;
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0051b490(int param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  undefined1 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  undefined2 in_FPUControlWord;
  float10 fVar17;
  double dVar18;
  undefined1 auStack_1ac [3];
  char local_1a9;
  char *local_1a8;
  int local_1a4;
  int local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  char *local_190;
  undefined1 local_189;
  float local_188;
  int local_184;
  undefined4 local_180;
  double local_17c;
  int local_174;
  char *local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  char *local_15c;
  int local_158;
  char local_154 [64];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b76dc;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_1ac;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar15 = 0;
  local_1a0 = param_1;
  local_190 = param_2;
  local_189 = DAT_00b06b18;
  local_1a9 = '\0';
  local_1a4 = 0;
  local_174 = 0xff;
  local_184 = 0;
  local_160 = 0;
  local_16c = 0;
  local_1a8 = _strrchr(param_2,0x5c);
  DAT_00b06b18 = 1;
  pcVar10 = *(char **)(param_1 + 0x5c);
  uVar14 = 0xffffffff;
  _sprintf(local_154,"%s NonAccum");
  uVar12 = 0xffffffff;
  if (*(int *)(local_1a0 + 0xc) != 0) {
    do {
      FUN_006c66b0(uVar15,&local_198);
      iVar4 = __stricmp(pcVar10,local_198);
      uVar13 = uVar15;
      if ((iVar4 != 0) && (iVar4 = __stricmp(local_154,local_198), uVar13 = uVar12, iVar4 == 0)) {
        uVar14 = uVar15;
      }
      FUN_00401f20(local_198);
      if ((uVar13 != 0xffffffff) && (uVar14 != 0xffffffff)) {
        if (uVar13 < *(uint *)(local_1a0 + 0xc)) {
          uVar3 = *(undefined1 *)(*(int *)(local_1a0 + 0x14) + 0xd + uVar13 * 0x10);
        }
        else {
          uVar3 = 0xff;
        }
        if (uVar14 < *(uint *)(local_1a0 + 0xc)) {
          *(undefined1 *)(*(int *)(local_1a0 + 0x14) + 0xd + uVar14 * 0x10) = uVar3;
        }
        break;
      }
      uVar15 = uVar15 + 1;
      uVar12 = uVar13;
    } while (uVar15 < *(uint *)(local_1a0 + 0xc));
  }
  iVar4 = local_16c;
  if (local_1a8 == (char *)0x0) {
LAB_0051b688:
    local_16c = iVar4;
    iVar4 = *(int *)(local_1a0 + 0x20);
    if (iVar4 != 0) {
      local_170 = *(char **)(iVar4 + 0xc);
      local_158 = *(int *)(iVar4 + 0x10);
      local_198 = (char *)0x0;
      if (local_170 != (char *)0x0) {
        do {
          pcVar10 = *(char **)(local_158 + 4 + (int)local_198 * 8);
          local_1a8 = *(char **)(local_158 + (int)local_198 * 8);
          local_15c = pcVar10;
          if (pcVar10 == (char *)0x0) {
            local_19c = pcVar10;
            FUN_004a7a60("AnimGroup empty note key at time %.2f in sequence \'%s\' in model \'%s\'."
                         ,(double)(float)local_1a8,*(undefined4 *)(local_1a0 + 8),local_190);
LAB_0051ba36:
            local_1a9 = '\x01';
          }
          else {
            while( true ) {
              pcVar8 = pcVar10;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              local_19c = pcVar10;
              if (pcVar8 == pcVar10 + 1) break;
              if (*pcVar10 == '\r') {
                local_19c = _strchr(pcVar10,10);
                while( true ) {
                  if ((local_19c == (char *)0x0) || (cVar1 = *local_19c, cVar1 == '\0'))
                  goto LAB_0051b745;
                  if ((cVar1 != '\r') && (cVar1 != '\n')) break;
                  local_19c = local_19c + 1;
                }
                if (*local_19c != '\0') goto LAB_0051b74b;
LAB_0051b745:
                local_19c = (char *)0x0;
              }
LAB_0051b74b:
              pcVar10 = local_19c;
              pcVar8 = PTR_DAT_00b241c4;
              do {
                cVar1 = *pcVar8;
                pcVar8 = pcVar8 + 1;
              } while (cVar1 != '\0');
              iVar4 = __strnicmp(local_19c,PTR_DAT_00b241c4,
                                 (int)pcVar8 - (int)(PTR_DAT_00b241c4 + 1));
              if (iVar4 == 0) {
                if (*(char *)(local_1a4 + 0x20) == '\0') {
                  *(char *)(local_1a4 + 0x20) = local_19c[2];
                }
              }
              else {
                iVar4 = __strnicmp(pcVar10,"Blend:",6);
                if (iVar4 == 0) {
                  if (pcVar10[6] == ' ') {
                    lVar9 = _atol(pcVar10 + 7);
                    *(char *)(local_1a4 + 0x21) = (char)lVar9;
                  }
                  else {
                    lVar9 = _atol(pcVar10 + 6);
                    *(char *)(local_1a4 + 0x21) = (char)lVar9;
                  }
                }
                else {
                  iVar4 = __strnicmp(pcVar10,"Sound:",6);
                  if ((iVar4 != 0) &&
                     (iVar6 = __strnicmp(pcVar10,"Enum:",5), iVar4 = local_174, iVar6 != 0)) {
                    iVar6 = 0;
LAB_0051b816:
                    if (iVar4 != 0xff) {
                      iVar6 = iVar4;
                    }
                    iVar7 = __stricmp(*(char **)(local_1a0 + 8),(&PTR_DAT_00b102e0)[iVar6 * 9]);
                    if (iVar7 != 0) goto code_r0x0051b83f;
                    iVar4 = local_184 + iVar6 * 9;
                    local_194 = *(char **)(&DAT_00b102f0 + iVar4 * 4);
                    local_174 = iVar6;
                    if (local_194 != (char *)0xffffffff) {
                      pcVar8 = (&PTR_s_Start_00b10900)
                               [(&DAT_00b102ec)[iVar6 * 9] + (int)local_194 * 8];
                      pcVar5 = pcVar8;
                      do {
                        cVar1 = *pcVar5;
                        pcVar5 = pcVar5 + 1;
                      } while (cVar1 != '\0');
                      iVar7 = __strnicmp(pcVar10,pcVar8,(int)pcVar5 - (int)(pcVar8 + 1));
                      if (iVar7 == 0) {
                        if (local_1a4 == 0) {
                          iVar4 = FUN_00401f00(0x2c);
                          local_17c = (double)CONCAT44(local_17c._4_4_,iVar4);
                          if (iVar6 == 2) {
                            local_4 = 0;
                            if (iVar4 == 0) {
LAB_0051b91b:
                              local_1a4 = 0;
                            }
                            else {
                              local_1a4 = FUN_0051ab30(2);
                            }
                          }
                          else {
                            local_4 = 1;
                            if (iVar4 == 0) goto LAB_0051b91b;
                            local_1a4 = FUN_0051ab30((local_160 * 0x10 + local_16c) * 0x100 + iVar6)
                            ;
                          }
                          local_4 = 0xffffffff;
                        }
                        if (((-1.0 < (float)local_1a8) && (*(int *)(local_1a4 + 0x10) != 0)) &&
                           (local_194 < *(char **)(local_1a4 + 0xc))) {
                          *(char **)(*(int *)(local_1a4 + 0x10) + (int)local_194 * 4) = local_1a8;
                        }
                        if (iVar6 != 2) {
                          if ((&DAT_00b102ec)[iVar6 * 9] == 1) {
                            if (*(int *)(local_1a0 + 0x24) != 0) {
                              pcVar10 = "\'%s\' should be a looping animation.";
LAB_0051b99d:
                              FUN_004a7a60(pcVar10,local_190);
                              local_1a9 = '\x01';
                            }
                          }
                          else if (*(int *)(local_1a0 + 0x24) == 0) {
                            pcVar10 = "\'%s\' should NOT be a looping animation.";
                            goto LAB_0051b99d;
                          }
                        }
                        local_184 = local_184 + 1;
                      }
                      else if ((local_184 == 5) || (*(int *)(&DAT_00b102f0 + iVar4 * 4) == -1)) {
                        pcVar8 = _strchr(pcVar10,0xd);
                        if (pcVar8 != (char *)0x0) {
                          *pcVar8 = '\0';
                        }
                        local_194 = (char *)((float)local_1a8 * 30.0);
                        local_168 = (int)ROUND((float)local_194);
                        FUN_004a7a60("Bad note string \"%s\" frame %d in \"%s\".",pcVar10,local_168,
                                     local_190);
                        if (pcVar8 != (char *)0x0) {
                          *pcVar8 = '\r';
                        }
                        local_1a9 = '\x01';
                      }
                    }
LAB_0051ba0b:
                    if (iVar6 != 0x2b) goto LAB_0051bbda;
                    FUN_004a7a60();
                    local_198 = local_170;
                    goto LAB_0051ba36;
                  }
                  iVar6 = __strnicmp(pcVar10,"Enum:",5);
                  pcVar10 = local_19c;
                  iVar4 = local_1a4;
                  if (local_1a4 != 0) {
                    pcVar8 = _strchr(local_19c,0xd);
                    local_17c = (double)CONCAT44(local_17c._4_4_,pcVar8);
                    if (pcVar8 != (char *)0x0) {
                      *pcVar8 = '\0';
                    }
                    pcVar8 = pcVar10 + 6;
                    if (iVar6 != 0) {
                      pcVar8 = pcVar10 + 7;
                    }
                    iVar7 = -(int)pcVar8;
                    do {
                      cVar1 = *pcVar8;
                      pcVar8[(int)(local_114 + iVar7)] = cVar1;
                      pcVar8 = pcVar8 + 1;
                    } while (cVar1 != '\0');
                    pcVar10 = (char *)0x0;
                    local_194 = (char *)0x0;
                    pcVar8 = _strchr(local_114,0x2c);
                    if ((pcVar8 != (char *)0x0) ||
                       (pcVar8 = _strchr(local_114,0x20), pcVar8 != (char *)0x0)) {
                      pcVar10 = pcVar8 + 1;
                      *pcVar8 = '\0';
                      if (pcVar10 != (char *)0x0) {
                        cVar1 = *pcVar10;
                        while (cVar1 == ' ') {
                          pcVar8 = pcVar10 + 1;
                          pcVar10 = pcVar10 + 1;
                          cVar1 = *pcVar8;
                        }
                        pcVar8 = _strchr(pcVar10,0x2c);
                        if ((pcVar8 != (char *)0x0) ||
                           (pcVar8 = _strchr(pcVar10,0x20), pcVar8 != (char *)0x0)) {
                          local_194 = pcVar8 + 1;
                          *pcVar8 = '\0';
                        }
                      }
                    }
                    if (iVar6 != 0) {
                      iVar6 = FUN_00447490(local_114);
                      if (iVar6 == 0) goto LAB_0051bb98;
                      uVar12 = *(uint *)(iVar4 + 0x24);
                      FUN_0051acf0(uVar12 + 1);
                      if (uVar12 < *(uint *)(iVar4 + 0x24)) {
                        if (*(int *)(iVar4 + 0x28) != 0) {
                          *(char **)(uVar12 * 0x10 + *(int *)(iVar4 + 0x28)) = local_1a8;
                        }
                        if ((uVar12 < *(uint *)(iVar4 + 0x24)) && (*(int *)(iVar4 + 0x28) != 0)) {
                          *(int *)(uVar12 * 0x10 + 0xc + *(int *)(iVar4 + 0x28)) = iVar6;
                        }
                      }
                      if (pcVar10 != (char *)0x0) {
                        dVar18 = _atof(pcVar10);
                        local_180 = (float)dVar18;
                        if ((uVar12 < *(uint *)(iVar4 + 0x24)) && (*(int *)(iVar4 + 0x28) != 0)) {
                          fVar2 = local_180 * 250.0;
                          uVar14 = (uint)local_180 >> 0x10;
                          local_180 = (float)CONCAT22((short)uVar14,in_FPUControlWord);
                          local_188 = (float)(int)ROUND(fVar2);
                          *(undefined1 *)(uVar12 * 0x10 + 4 + *(int *)(iVar4 + 0x28)) =
                               local_188._0_1_;
                        }
                      }
                      if (local_194 != (char *)0x0) {
                        dVar18 = _atof(local_194);
                        local_188 = (float)dVar18;
                        if ((uVar12 < *(uint *)(iVar4 + 0x24)) && (*(int *)(iVar4 + 0x28) != 0)) {
                          *(float *)(uVar12 * 0x10 + 8 + *(int *)(iVar4 + 0x28)) = local_188;
                        }
                      }
                    }
                    else {
                      iVar6 = 0;
                      do {
                        iVar7 = __stricmp((&PTR_DAT_00b109c0)[iVar6],local_114);
                        if (iVar7 == 0) {
                          if (iVar6 < 0x10) {
                            uVar14 = *(uint *)(iVar4 + 0x24);
                            uVar15 = ((int)local_19c - (int)local_15c) * 0x100 | (uint)local_198;
                            FUN_0051acf0(uVar14 + 1);
                            uVar12 = *(uint *)(iVar4 + 0x24);
                            bVar16 = false;
                            if (uVar14 < uVar12) {
                              if (*(int *)(iVar4 + 0x28) != 0) {
                                *(char **)(uVar14 * 0x10 + *(int *)(iVar4 + 0x28)) = local_1a8;
                              }
                              uVar12 = *(uint *)(iVar4 + 0x24);
                              bVar16 = uVar14 < uVar12;
                            }
                            if ((bVar16 || uVar14 == uVar12) && (*(int *)(iVar4 + 0x28) != 0)) {
                              *(char *)(uVar14 * 0x10 + 4 + *(int *)(iVar4 + 0x28)) = (char)iVar6;
                              *(uint *)(uVar14 * 0x10 + 8 + *(int *)(iVar4 + 0x28)) = uVar15;
                            }
                            goto LAB_0051bbcf;
                          }
                          break;
                        }
                        iVar6 = iVar6 + 1;
                      } while (iVar6 < 0x10);
LAB_0051bb98:
                      local_188 = (float)local_1a8 * 30.0;
                      local_164 = (int)ROUND(local_188);
                      FUN_004a7a60("Bad note string \"%s\" frame %d in \"%s\".",local_19c,local_164,
                                   local_190);
                      local_1a9 = '\x01';
                    }
LAB_0051bbcf:
                    if (local_17c._0_4_ != (undefined1 *)0x0) {
                      *local_17c._0_4_ = 0xd;
                    }
                  }
                }
              }
LAB_0051bbda:
              if (local_19c == (char *)0x0) break;
              pcVar10 = _strchr(local_19c,10);
              while( true ) {
                if ((pcVar10 == (char *)0x0) || (cVar1 = *pcVar10, cVar1 == '\0'))
                goto LAB_0051ba3b;
                if ((cVar1 != '\r') && (cVar1 != '\n')) break;
                pcVar10 = pcVar10 + 1;
              }
              if (*pcVar10 == '\0') break;
            }
          }
LAB_0051ba3b:
          local_198 = local_198 + 1;
        } while (local_198 < local_170);
        if (local_1a4 != 0) {
          uVar11 = 1;
          switch((&DAT_00b102ec)[(uint)*(byte *)(local_1a4 + 8) * 9]) {
          case 2:
          case 3:
          case 5:
            uVar11 = 2;
            break;
          case 4:
            uVar11 = 3;
            break;
          case 7:
            uVar11 = 4;
          }
          fVar17 = (float10)FUN_0051ae20(uVar11);
          local_17c = (double)fVar17;
          fVar17 = (float10)FUN_0051ae20(0);
          if ((float10)local_17c <= fVar17) {
            FUN_004a7a60();
            local_1a9 = '\x01';
          }
        }
      }
    }
    DAT_00b06b18 = local_189;
    if (local_1a9 != '\0') {
      uVar11 = FUN_00494480();
      FUN_004a7a60("Animation group note problem. See %s file.",uVar11);
    }
    *unaff_FS_OFFSET = local_c;
    return local_1a4;
  }
  iVar4 = 1;
  local_1a8 = local_1a8 + 1;
  while( true ) {
    pcVar8 = local_1a8;
    pcVar10 = (&PTR_DAT_00b102b8)[iVar4];
    pcVar5 = pcVar10;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar6 = __strnicmp(local_1a8,pcVar10,(int)pcVar5 - (int)(pcVar10 + 1));
    if (iVar6 == 0) break;
    iVar4 = iVar4 + 1;
    if (3 < iVar4) goto LAB_0051b643;
  }
  pcVar5 = (&PTR_DAT_00b102b8)[iVar4];
  pcVar10 = pcVar5 + 1;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar8 = pcVar8 + ((int)pcVar5 - (int)pcVar10);
  local_160 = iVar4;
LAB_0051b643:
  iVar6 = 1;
  do {
    pcVar10 = (&PTR_DAT_00b102c8)[iVar6];
    pcVar5 = pcVar10;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar7 = __strnicmp(pcVar8,pcVar10,(int)pcVar5 - (int)(pcVar10 + 1));
    iVar4 = iVar6;
  } while ((iVar7 != 0) && (iVar6 = iVar6 + 1, iVar4 = local_16c, iVar6 < 6));
  goto LAB_0051b688;
code_r0x0051b83f:
  if ((iVar6 == iVar4) || (iVar6 = iVar6 + 1, 0x2a < iVar6)) goto LAB_0051ba0b;
  goto LAB_0051b816;
}



undefined4 FUN_0051be50(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 8) {
    uVar1 = FUN_00565cc0();
    return uVar1;
  }
  return 0;
}



void FUN_0051be70(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046a700();
  FUN_00470070(0x4e4f4349);
  FUN_0046bbb0(in_ECX + 0x38,0x34);
  FUN_0046b9f0();
  return;
}



int FUN_0051beb0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x68) + 0xc;
}



byte FUN_0051bec0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x60) & 1;
}



void FUN_0051bed0(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(byte *)(in_ECX + 0x60) = *(byte *)(in_ECX + 0x60) | 1;
    return;
  }
  *(byte *)(in_ECX + 0x60) = *(byte *)(in_ECX + 0x60) & 0xfe;
  return;
}



byte FUN_0051bef0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x60) >> 1 & 1;
}



undefined4 FUN_0051bf00(int param_1)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x44 + param_1 * 4);
}



void FUN_0051bfe0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0535c,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    puVar3 = (undefined4 *)(iVar1 + 0x38);
    puVar4 = (undefined4 *)(in_ECX + 0x38);
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}



void FUN_0051c030(void)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  bVar6 = *(uint *)(in_ECX + 0x38) != *(uint *)(in_ECX + 0x3c);
  if ((7 < *(uint *)(in_ECX + 0x38)) || (7 < *(uint *)(in_ECX + 0x3c))) {
    bVar6 = false;
  }
  piVar5 = (int *)(in_ECX + 0x44);
  iVar4 = 1;
  do {
    iVar2 = iVar4;
    piVar3 = piVar5;
    if (!bVar6) {
      return;
    }
    while ((iVar2 < 7 && (bVar6))) {
      if (piVar3[1] == *piVar5) {
        bVar6 = false;
      }
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    }
    piVar5 = piVar5 + 1;
    bVar1 = iVar4 < 7;
    iVar4 = iVar4 + 1;
  } while (bVar1);
  return;
}



void FUN_0051c090(int param_1)

{
  bool bVar1;
  int in_ECX;
  int *piVar2;
  int iVar3;
  
  bVar1 = false;
  if (*(int *)(in_ECX + 0xc) == DAT_00b37d00) {
    return;
  }
  iVar3 = 0;
  piVar2 = (int *)(in_ECX + 0x44);
  do {
    if (bVar1) {
      return;
    }
    if (*piVar2 == param_1) {
      bVar1 = true;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 7);
  return;
}



void FUN_0051c0d0(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 8) {
    *(uint *)(in_ECX + 0x38) = param_1;
  }
  return;
}



void FUN_0051c0e0(uint param_1)

{
  int in_ECX;
  
  if (param_1 < 8) {
    *(uint *)(in_ECX + 0x3c) = param_1;
  }
  return;
}



void FUN_0051c0f0(int param_1,int param_2)

{
  int in_ECX;
  
  if (param_2 - 0xcU < 0x15) {
    *(int *)(in_ECX + 0x44 + param_1 * 4) = param_2;
  }
  return;
}



void FUN_0051c110(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7766;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a52c6c;
  in_ECX[6] = &PTR_FUN_00a52c54;
  in_ECX[9] = &PTR_LAB_00a52c3c;
  in_ECX[0xb] = &PTR_FUN_00a52c20;
  local_4 = 2;
  thunk_FUN_0046b170(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00470040();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051c1b0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  
  _memset((undefined4 *)(in_ECX + 0x38),0,0x34);
  iVar2 = 0;
  piVar3 = (int *)(in_ECX + 0x44);
  do {
    iVar1 = FUN_00565be0(2,iVar2);
    if (iVar1 - 0xcU < 0x15) {
      *piVar3 = iVar1;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < 7);
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 1;
  thunk_FUN_0046b090();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0051c210(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  iVar2 = FUN_004511c0();
  if (iVar2 == 5) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x44494446) {
        if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xfffffff0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
        }
        else if (iVar2 == 0x41544144) {
          FUN_0046bda0(param_1,in_ECX + 0xe,0x34);
        }
        else if (iVar2 == 0x43534544) {
          if (in_ECX == (int *)0x0) {
            FUN_0046a390(0,param_1);
          }
          else {
            FUN_0046a390(in_ECX + 9,param_1);
          }
        }
      }
      else if (iVar2 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          piVar3 = (int *)0x0;
        }
        else {
          piVar3 = in_ECX + 6;
        }
        FUN_0046c7a0(piVar3,param_1);
      }
      else if (iVar2 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          FUN_004700e0(0,param_1);
        }
        else {
          FUN_004700e0(in_ECX + 0xb,param_1);
        }
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    cVar1 = FUN_0051c030();
    if (cVar1 == '\0') {
      uVar4 = (**(code **)(*in_ECX + 0xd4))();
      FUN_004a7a60("Class %s contains invalid data. Make sure all attributes and skills are unique."
                   ,uVar4);
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



char * FUN_0051c360(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  int in_ECX;
  char *pcVar5;
  
  pcVar4 = *(char **)(in_ECX + 0x1c);
  if (pcVar4 == (char *)0x0) {
    pcVar4 = "";
  }
  pcVar1 = pcVar4 + 1;
  do {
    cVar3 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar3 != '\0');
  pcVar5 = *(char **)(in_ECX + 0x30);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "";
  }
  pcVar2 = pcVar5 + 1;
  do {
    cVar3 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar3 != '\0');
  return pcVar5 + ((((uint)(pcVar4 + (0x35 - (int)pcVar1)) & 0xffff) + 1) - (int)pcVar2);
}



void FUN_0051c3b0(void)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined1 *puVar4;
  int in_ECX;
  char local_5 [5];
  
  FUN_0045b9a0(in_ECX + 0x38,0x34);
  pcVar3 = *(char **)(in_ECX + 0x1c);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  cVar2 = (char)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_5[0] = (char)pcVar3 - (cVar2 + '\x01');
  FUN_0045b9a0(local_5,1);
  if (local_5[0] != '\0') {
    puVar4 = *(undefined1 **)(in_ECX + 0x1c);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_00a2f7ec;
    }
    FUN_0045b9a0(puVar4,local_5[0]);
  }
  pcVar3 = *(char **)(in_ECX + 0x30);
  if (pcVar3 == (char *)0x0) {
    pcVar3 = "";
  }
  cVar2 = (char)pcVar3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  local_5[0] = (char)pcVar3 - (cVar2 + '\x01');
  FUN_0045b9a0(local_5,1);
  if (local_5[0] != '\0') {
    puVar4 = *(undefined1 **)(in_ECX + 0x30);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_00a2f7ec;
    }
    FUN_0045b9a0(puVar4,local_5[0]);
  }
  return;
}



void FUN_0051c580(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b77ae;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046a400();
  FUN_0046ffd0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *in_ECX = &PTR_FUN_00a52c6c;
  in_ECX[6] = &PTR_FUN_00a52c54;
  in_ECX[9] = &PTR_LAB_00a52c3c;
  in_ECX[0xb] = &PTR_FUN_00a52c20;
  *(undefined1 *)(in_ECX + 1) = 5;
  FUN_0051c1b0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051c620(byte param_1)

{
  FUN_0051c110();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



char * FUN_0051c650(void)

{
  char cVar1;
  char *pcVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x28))();
  if (cVar1 == '\0') {
    pcVar2 = (char *)(**(code **)(in_ECX[0x3e] + 0x14))();
    if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
      pcVar2 = (char *)FUN_004677e0();
      return pcVar2;
    }
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



uint FUN_0051c6e0(uint param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0051a3b0(param_1);
  uVar1 = uVar1 & 0xffff;
  if ((param_1 & 0x200) != 0) {
    uVar1 = uVar1 + 3;
  }
  if ((param_1 & 0x400) != 0) {
    uVar1 = uVar1 + 4;
  }
  return uVar1;
}



void FUN_0051c710(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  FUN_0051a6f0(param_1,param_2);
  if ((param_1 & 0x200) != 0) {
    FUN_0046ac80(in_ECX + 0x105,1);
    FUN_0046ac80(in_ECX + 0x106,1);
    FUN_0046ac80(in_ECX + 0x107,1);
  }
  if ((param_1 & 0x400) != 0) {
    FUN_0046aca0(&param_2,4);
    uVar1 = FUN_0046b250(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b053e0,0);
    iVar2 = FUN_009832e6(uVar1);
    if (iVar2 != 0) {
      *(int *)(in_ECX + 0x118) = iVar2;
    }
  }
  return;
}



void FUN_0051c7b0(void)

{
  code *pcVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x10c) = 0;
  *(undefined4 *)(in_ECX + 0x110) = 0x40400000;
  *(undefined1 *)(in_ECX + 0x104) = 0;
  *(undefined4 *)(in_ECX + 0x100) = 0;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  *(undefined4 *)(in_ECX + 0x114) = 0x3f800000;
  pcVar1 = (code *)**(undefined4 **)(in_ECX + 0x11c);
  *(undefined2 *)(in_ECX + 0x108) = 3;
  *(undefined1 *)(in_ECX + 0x105) = 0x32;
  *(undefined1 *)(in_ECX + 0x106) = 0x32;
  *(undefined1 *)(in_ECX + 0x107) = 0x32;
  *(undefined1 *)(in_ECX + 0x10a) = 0x20;
  (*pcVar1)();
  (*(code *)**(undefined4 **)(in_ECX + 0x134))();
  thunk_FUN_0046b090();
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x24) + 0x50);
  *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x40;
  (*pcVar1)(0x10);
  pcVar1 = *(code **)(*(int *)(in_ECX + 0x24) + 0x50);
  *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x200;
  (*pcVar1)(0x10);
  *(undefined4 *)(in_ECX + 0x84) = 0x32;
  return;
}



void FUN_0051c860(void)

{
  int iVar1;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
    iVar1 = *(int *)(in_ECX + 0x100);
    if (iVar1 != 0) {
      FUN_00519b40();
      FUN_00401f20(iVar1);
    }
    *(undefined4 *)(in_ECX + 0x100) = 0;
  }
  (**(code **)(*(int *)(in_ECX + 0x11c) + 4))();
  (**(code **)(*(int *)(in_ECX + 0x134) + 4))();
  thunk_FUN_0046b170();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051c980(void)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + -0xbc) >> 7 & 1) != 0) {
    sVar1 = FUN_004677f0();
    if (sVar1 < 1) {
      sVar1 = 1;
    }
    uVar2 = FUN_00468a40();
    return (int)ROUND((float)uVar2 + (float)(int)sVar1 * _DAT_00b3629c) & 0xffff;
  }
  uVar3 = FUN_00468a40();
  return uVar3 & 0xffff;
}



short FUN_0051ca10(void)

{
  short sVar1;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + -0x58) >> 7 & 1) != 0) {
    sVar1 = FUN_004677f0();
    if (sVar1 < 1) {
      sVar1 = 1;
    }
    return *(short *)(in_ECX + 4) * sVar1;
  }
  return *(short *)(in_ECX + 4);
}



short FUN_0051ca50(void)

{
  short sVar1;
  int in_ECX;
  
  sVar1 = *(short *)(in_ECX + 0x108);
  if ((*(uint *)(in_ECX + 0x28) >> 7 & 1) != 0) {
    sVar1 = FUN_004677f0();
    if (sVar1 < 2) {
      return 1;
    }
    if (sVar1 < 7) {
      return 2;
    }
    if (sVar1 < 0xd) {
      return 3;
    }
    sVar1 = (0x11 < sVar1) + 4;
  }
  return sVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051cb00(void)

{
  byte bVar1;
  short sVar2;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined1 uVar3;
  undefined1 local_4;
  
  uVar3 = (undefined1)((ushort)in_FPUControlWord >> 8);
  bVar1 = *(byte *)(in_ECX + 0x107);
  if ((*(uint *)(in_ECX + 0x28) >> 7 & 1) != 0) {
    sVar2 = FUN_004677f0();
    if (sVar2 < 1) {
      sVar2 = 1;
    }
    local_4 = (undefined1)(int)ROUND((float)bVar1 + (float)(int)sVar2 * _DAT_00b362b4);
    return CONCAT11(uVar3,local_4) | 0xc00;
  }
  return CONCAT31((uint3)(*(uint *)(in_ECX + 0x28) >> 0xf),bVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051cb80(void)

{
  byte bVar1;
  short sVar2;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined1 uVar3;
  undefined1 local_4;
  
  uVar3 = (undefined1)((ushort)in_FPUControlWord >> 8);
  bVar1 = *(byte *)(in_ECX + 0x106);
  if ((*(uint *)(in_ECX + 0x28) >> 7 & 1) != 0) {
    sVar2 = FUN_004677f0();
    if (sVar2 < 1) {
      sVar2 = 1;
    }
    local_4 = (undefined1)(int)ROUND((float)bVar1 + (float)(int)sVar2 * _DAT_00b362ac);
    return CONCAT11(uVar3,local_4) | 0xc00;
  }
  return CONCAT31((uint3)(*(uint *)(in_ECX + 0x28) >> 0xf),bVar1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0051cc00(void)

{
  byte bVar1;
  short sVar2;
  int in_ECX;
  undefined2 in_FPUControlWord;
  undefined1 uVar3;
  undefined1 local_4;
  
  uVar3 = (undefined1)((ushort)in_FPUControlWord >> 8);
  bVar1 = *(byte *)(in_ECX + 0x105);
  if ((*(uint *)(in_ECX + 0x28) >> 7 & 1) != 0) {
    sVar2 = FUN_004677f0();
    if (sVar2 < 1) {
      sVar2 = 1;
    }
    local_4 = (undefined1)(int)ROUND((float)bVar1 + (float)(int)sVar2 * _DAT_00b362a4);
    return CONCAT11(uVar3,local_4) | 0xc00;
  }
  return CONCAT31((uint3)(*(uint *)(in_ECX + 0x28) >> 0xf),bVar1);
}



undefined4 FUN_0051cd40(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0x100);
}



void FUN_0051cd60(int param_1)

{
  int iVar1;
  code *pcVar2;
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
    if (param_1 != 0) {
      iVar1 = *(int *)(in_ECX + 0x100);
      if (iVar1 != 0) {
        FUN_00519b40();
        FUN_00401f20(iVar1);
      }
      pcVar2 = *(code **)(*(int *)(in_ECX + 0x24) + 0x50);
      *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) & 0xfffffeff;
      (*pcVar2)(0x10);
      *(int *)(in_ECX + 0x100) = param_1;
    }
    return;
  }
  *(int *)(in_ECX + 0x100) = param_1;
  return;
}



undefined4 FUN_0051cdc0(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
    return *(undefined4 *)(in_ECX + 0x100);
  }
  return 0;
}



undefined4 FUN_0051cde0(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((*(uint *)(in_ECX + 0x28) >> 8 & 1) == 0) || (*(int *)(in_ECX + 0x100) == 0)) {
    pcVar1 = *(code **)(*(int *)(in_ECX + 0x24) + 0x50);
    *(uint *)(in_ECX + 0x28) = *(uint *)(in_ECX + 0x28) | 0x100;
    (*pcVar1)(0x10,uVar2);
    iVar3 = FUN_00401f00(0x28);
    uStack_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_005196d0();
    }
    *(undefined4 *)(in_ECX + 0x100) = uVar4;
  }
  uVar4 = *(undefined4 *)(in_ECX + 0x100);
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



undefined4 FUN_0051ce70(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x28);
  while( true ) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) && (*(int *)(in_ECX + 0x100) != 0)) {
        uVar2 = FUN_00519ad0();
        return uVar2;
      }
      return 0;
    }
    if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
      return 0;
    }
    in_ECX = *(int *)(in_ECX + 0x100);
    if (in_ECX == 0) break;
    uVar1 = *(uint *)(in_ECX + 0x28);
  }
  return 0;
}



undefined4 FUN_0051cec0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 0x28);
  while( true ) {
    if ((uVar1 >> 8 & 1) != 0) {
      if (((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) && (*(int *)(in_ECX + 0x100) != 0)) {
        uVar2 = FUN_00519900();
        return uVar2;
      }
      return 0;
    }
    if ((*(uint *)(in_ECX + 0x28) >> 8 & 1) != 0) {
      return 0;
    }
    in_ECX = *(int *)(in_ECX + 0x100);
    if (in_ECX == 0) break;
    uVar1 = *(uint *)(in_ECX + 0x28);
  }
  return 0;
}



void FUN_0051d0d0(undefined4 param_1)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0375c,0);
  if (piVar2 != (int *)0x0) {
    if ((((uint)in_ECX[10] >> 8 & 1) != 0) && (iVar3 = in_ECX[0x40], iVar3 != 0)) {
      FUN_00519b40();
      FUN_00401f20(iVar3);
    }
    in_ECX[0x40] = 0;
    FUN_0046f520(param_1);
    FUN_004673f0(param_1);
    FUN_0046ca60(param_1);
    FUN_00468bd0(param_1);
    FUN_0046c840(param_1);
    FUN_0046d570(param_1);
    FUN_0046ddc0(param_1);
    in_ECX[0x41] = piVar2[0x41];
    *(short *)(in_ECX + 0x42) = (short)piVar2[0x42];
    pcVar1 = *(code **)(in_ECX[0x47] + 8);
    in_ECX[10] = piVar2[10];
    *(undefined1 *)((int)in_ECX + 0x10a) = *(undefined1 *)((int)piVar2 + 0x10a);
    in_ECX[0x43] = piVar2[0x43];
    in_ECX[0x45] = piVar2[0x45];
    in_ECX[0x44] = piVar2[0x44];
    (*pcVar1)(piVar2 + 0x47);
    (**(code **)(in_ECX[0x4d] + 8))(piVar2 + 0x4d);
    if (((piVar2[10] & 0x100U) == 0) || (piVar2[0x40] == 0)) {
      if ((piVar2[10] & 0x100U) == 0) {
        iVar3 = piVar2[0x40];
      }
      else {
        iVar3 = 0;
      }
      FUN_0051cd60(iVar3);
    }
    else {
      FUN_0051cde0();
      if (((uint)piVar2[10] >> 8 & 1) == 0) {
        FUN_00519b70(0);
      }
      else {
        FUN_00519b70(piVar2[0x40]);
      }
    }
    iVar3 = *in_ECX;
    uVar4 = (**(code **)(*piVar2 + 0x120))();
    (**(code **)(iVar3 + 0x124))(uVar4);
  }
  return;
}



void FUN_0051d460(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x58) != 0)) {
    piVar2 = (int *)FUN_009832e6(*(int *)(iVar1 + 0x58),0,&PTR_PTR_00b05908,&PTR_PTR_00b09dfc,0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x3ec))(iVar1);
    }
  }
  return;
}



undefined4 FUN_0051d4c0(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00519d00();
  if (cVar1 != '\0') {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0x14:
      iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
      if ((iVar2 != 0) && (cVar1 = FUN_00468ff0(0xd,0), cVar1 != '\0')) {
        return 1;
      }
      break;
    case 0x1a:
    case 0x21:
    case 0x22:
      return 1;
    }
  }
  return 0;
}



void FUN_0051da50(uint param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = param_1;
  FUN_0051a520(param_1);
  if ((uVar1 & 0x200) != 0) {
    FUN_0046ac70(in_ECX + 0x105,1);
    FUN_0046ac70(in_ECX + 0x106,1);
    FUN_0046ac70(in_ECX + 0x107,1);
  }
  if ((uVar1 & 0x400) != 0) {
    param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x118) + 0xc);
    FUN_0046ac90(&param_1,4);
  }
  return;
}



void FUN_0051dac0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int *in_ECX;
  undefined1 *puVar7;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_0046f4b0();
  FUN_0046dbe0(0x5a46494e,0x5446494e);
  FUN_004673c0();
  FUN_0046bbb0(in_ECX + 0x41,6);
  FUN_0046ae40(0x4d414e52,(int)in_ECX + 0x10a,1);
  iVar3 = (**(code **)(*in_ECX + 0x120))();
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*in_ECX + 0x120))();
    FUN_0046ba80(0x4d414e5a,*(undefined4 *)(iVar3 + 0xc));
  }
  FUN_0046ba80(0x4d414e54,in_ECX[0x43]);
  FUN_0046ba80(0x4d414e42,in_ECX[0x45]);
  FUN_0046ba80(0x4d414e57,in_ECX[0x44]);
  cVar2 = (**(code **)(in_ECX[9] + 0x28))();
  if (cVar2 == '\0') {
    if (*(ushort *)(in_ECX + 0x49) == 0xffff) {
      pcVar4 = (char *)in_ECX[0x48];
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(in_ECX + 0x49);
    }
    if (uVar5 != 0) {
      if (*(ushort *)(in_ECX + 0x49) == 0xffff) {
        pcVar4 = (char *)in_ECX[0x48];
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)pcVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(in_ECX + 0x49);
      }
      uVar6 = (**(code **)(in_ECX[0x47] + 0x14))(uVar5 + 1);
      FUN_0046ae40(0x304d414e,uVar6);
    }
  }
  cVar2 = (**(code **)(in_ECX[9] + 0x30))();
  if (cVar2 == '\0') {
    if (*(ushort *)(in_ECX + 0x4f) == 0xffff) {
      pcVar4 = (char *)in_ECX[0x4e];
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(in_ECX + 0x4f);
    }
    if (uVar5 != 0) {
      if (*(ushort *)(in_ECX + 0x4f) == 0xffff) {
        pcVar4 = (char *)in_ECX[0x4e];
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)pcVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(in_ECX + 0x4f);
      }
      puVar7 = (undefined1 *)in_ECX[0x4e];
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00a2f7ec;
      }
      FUN_0046ae40(0x314d414e,puVar7,uVar5 + 1);
    }
  }
  if (((uint)in_ECX[10] >> 8 & 1) == 0) {
    if (in_ECX[0x40] != 0) {
      FUN_0046ba80(0x52435343,*(undefined4 *)(in_ECX[0x40] + 0xc));
    }
  }
  else if (in_ECX[0x40] != 0) {
    FUN_00519700();
    FUN_0046b9f0();
    return;
  }
  FUN_0046b9f0();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0051dd00(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  cVar1 = FUN_004511c0();
  if (cVar1 == '$') {
    FUN_00451210(in_ECX);
    FUN_0046ab80(0);
    local_10 = 0xffffffff;
    iVar3 = FUN_004510b0();
    while (iVar3 != 0) {
      if (iVar3 < 0x4d414e53) {
        if (iVar3 == 0x4d414e52) {
          FUN_00450c20((int)in_ECX + 0x10a,1);
          goto switchD_0051dfa5_caseD_4d414e55;
        }
        if (0x46445343 < iVar3) {
          if (iVar3 < 0x4c4c5547) {
            if (iVar3 == 0x4c4c5546) {
              if (in_ECX == (int *)0x0) {
                FUN_0046c7a0(0,param_1);
              }
              else {
                FUN_0046c7a0(in_ECX + 0x28,param_1);
              }
            }
            else {
              if (iVar3 == 0x49445343) goto LAB_0051deea;
              if (iVar3 == 0x49524353) {
                local_c = 0;
                FUN_004510e0(&local_c);
                in_ECX[0x32] = local_c;
                FUN_0046f020(in_ECX);
              }
              else if (iVar3 == 0x4c444f4d) goto LAB_0051dea5;
            }
          }
          else if (iVar3 == 0x4d414e42) {
            FUN_004510e0(in_ECX + 0x45);
          }
          else if (iVar3 == 0x4d414e49) {
            local_c = 0;
            FUN_004510e0(&local_c);
            in_ECX[0xe] = local_c;
          }
          goto switchD_0051dfa5_caseD_4d414e55;
        }
        if (iVar3 != 0x46445343) {
          if (iVar3 < 0x42444f4e) {
            if (iVar3 == 0x42444f4d) goto LAB_0051dea5;
            if (iVar3 == 0x304d414e) {
              if (*(int *)(param_1 + 0x254) != 0) {
                FUN_00450c20(&stack0xffffffc4);
                (**(code **)(in_ECX[0x47] + 0x18))();
              }
            }
            else if (iVar3 == 0x314d414e) {
              if (*(int *)(param_1 + 0x254) != 0) {
                FUN_00450c20(&stack0xffffffc0,0);
                FUN_004028d0(&stack0xffffffc0,0);
              }
            }
            else if (iVar3 == 0x41544144) {
              FUN_0046bda0(param_1,in_ECX + 0x41,6);
            }
          }
          else if (iVar3 == 0x44494445) {
            FUN_00450c20(&stack0xffffffc4);
            (**(code **)(*in_ECX + 0xd8))();
          }
          else if (iVar3 == 0x44494b50) {
            local_c = 0;
            FUN_004510e0(&local_c);
            FUN_00468380(local_c);
          }
          goto switchD_0051dfa5_caseD_4d414e55;
        }
LAB_0051deea:
        FUN_0051cde0();
        cVar1 = FUN_00519960(param_1,local_10,in_ECX);
        if (cVar1 != '\0') goto switchD_0051dfa5_caseD_4d414e55;
      }
      else {
        if (iVar3 < 0x4f4c5054) {
          if (iVar3 == 0x4f4c5053) {
            local_c = 0;
            FUN_004510e0(&local_c);
            FUN_0046f420(local_c);
          }
          else {
            switch(iVar3) {
            case 0x4d414e53:
              local_18 = 0;
              local_14 = 0;
              FUN_00450c20(&local_18,8);
              FUN_004675e0(local_18,local_14);
              break;
            case 0x4d414e54:
              FUN_004510e0(in_ECX + 0x43);
              break;
            case 0x4d414e57:
              FUN_004510e0(in_ECX + 0x44);
              break;
            case 0x4d414e5a:
              FUN_004510e0(&local_28);
              (**(code **)(*in_ECX + 0x124))(local_28);
            }
          }
        }
        else if (iVar3 < 0x54444f4e) {
          if (iVar3 == 0x54444f4d) {
LAB_0051dea5:
            if (in_ECX == (int *)0x0) {
              FUN_0046db00(0,param_1);
            }
            else {
              FUN_0046db00(in_ECX + 0x2b,param_1);
            }
          }
          else if (iVar3 < 0x53424342) {
            if (iVar3 == 0x53424341) {
              FUN_00450c20(in_ECX + 10,0x10);
            }
            else if (iVar3 == 0x4f544e43) {
              local_24 = 0;
              local_20 = 0;
              FUN_00450c20(&local_24,8);
              FUN_00469500(0);
              FUN_00469750(&local_24);
            }
            else if (iVar3 == 0x52435343) {
              local_c = 0;
              FUN_004510e0(&local_c);
              FUN_0051cd60(local_c);
            }
          }
          else if (iVar3 == 0x54444941) {
            local_34 = 0;
            local_30 = 0;
            local_2c = 0;
            FUN_00450c20(&local_34,0xc);
            FUN_00468280(&local_34);
          }
        }
        else if (iVar3 < 0x5a46464c) {
          if (iVar3 == 0x5a46464b) {
            if (in_ECX == (int *)0x0) {
              FUN_004688d0(0,param_1);
            }
            else {
              FUN_004688d0(in_ECX + 0x25,param_1);
            }
          }
          else if (iVar3 == 0x54445343) {
            FUN_004510e0(&local_1c);
            local_10 = local_1c;
          }
          else if (iVar3 == 0x5446494e) goto LAB_0051e169;
        }
        else if (iVar3 == 0x5a46494e) {
LAB_0051e169:
          if (in_ECX == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = in_ECX + 0x3b;
          }
          FUN_0046dfe0(piVar4,param_1);
        }
switchD_0051dfa5_caseD_4d414e55:
        cVar1 = FUN_0044fea0();
        if (cVar1 == '\0') break;
      }
      iVar3 = FUN_004510b0();
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



char * FUN_0051e1e0(void)

{
  char cVar1;
  char *pcVar2;
  int *in_ECX;
  
  cVar1 = (**(code **)(*in_ECX + 0x30))();
  if (cVar1 == '\0') {
    pcVar2 = (char *)in_ECX[0x45];
    if (pcVar2 == (char *)0x0) {
      pcVar2 = "";
    }
    if (*pcVar2 == '\0') {
      pcVar2 = (char *)FUN_004677d0();
      return pcVar2;
    }
  }
  else {
    pcVar2 = (char *)0x0;
  }
  return pcVar2;
}



void FUN_0051e240(int *param_1,char param_2,char param_3,char param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int unaff_FS_OFFSET;
  int *piStack_10;
  undefined4 uStack_8;
  int local_4;
  
  piVar3 = param_1;
  local_4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar1 = *(undefined1 *)(local_4 + 0x185);
  if (param_4 == '\0') {
    *(undefined1 *)(local_4 + 0x185) = 0;
  }
  if ((((param_3 == '\0') && (cVar4 = (**(code **)(*param_1 + 400))(), cVar4 != '\0')) &&
      ((int *)param_1[0x16] != (int *)0x0)) &&
     (cVar4 = (**(code **)(*(int *)param_1[0x16] + 0x138))(), cVar4 != '\0')) {
    FUN_004dc5b0();
  }
  if (in_ECX == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = in_ECX + 0x44;
  }
  FUN_00485e00(param_1,iVar6);
  FUN_00486030(1);
  piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((piVar5 != (int *)0x0) && ((int *)piVar5[0x16] != (int *)0x0)) {
    (**(code **)(*(int *)piVar5[0x16] + 0x10c))(0);
    (**(code **)(*(int *)piVar5[0x16] + 0x110))(0);
    (**(code **)(*(int *)piVar5[0x16] + 0x108))(0);
    (**(code **)(*(int *)piVar5[0x16] + 0x104))(0,0);
  }
  _param_4 = 0;
  param_1 = (int *)0x0;
  piStack_10 = (int *)0x0;
  if (param_2 != '\0') {
    _param_4 = FUN_0048c870(in_ECX,0xd,1);
  }
  uStack_8 = 0;
  if (((param_3 != '\0') &&
      (param_1 = (int *)FUN_0048bda0(in_ECX,&uStack_8,0xffffffff,1), param_1 != (int *)0x0)) &&
     ((*(int *)((int)param_1 + 8) != 0 &&
      ((iVar6 = FUN_009832e6(*(int *)((int)param_1 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar6 != 0 && (*(char *)(iVar6 + 0x90) == '\x05')))))) {
    piStack_10 = (int *)FUN_0048b9c0(in_ECX,1);
  }
  if (((_param_4 != 0) && (cVar4 = FUN_0051d4c0(*(undefined4 *)(_param_4 + 8)), cVar4 != '\0')) &&
     (cVar4 = FUN_004d8880(*(undefined4 *)(_param_4 + 8)), cVar4 == '\0')) {
    (**(code **)(*piVar3 + 0x108))(*(undefined4 *)(_param_4 + 8),1,0,0);
  }
  if (((param_1 != (int *)0x0) &&
      (cVar4 = FUN_0051d4c0(*(undefined4 *)((int)param_1 + 8)), cVar4 != '\0')) &&
     (cVar4 = FUN_004d8880(*(undefined4 *)((int)param_1 + 8)), cVar4 == '\0')) {
    (**(code **)(*piVar3 + 0x108))(*(undefined4 *)((int)param_1 + 8),1,0,0);
    if ((piStack_10 != (int *)0x0) && (cVar4 = FUN_004d8880(piStack_10[2]), cVar4 == '\0')) {
      uVar7 = 0;
      if ((undefined4 *)*piStack_10 != (undefined4 *)0x0) {
        uVar7 = *(undefined4 *)*piStack_10;
      }
      iVar6 = piStack_10[2];
      iVar2 = *piVar3;
      uVar7 = FUN_004b2460(uVar7,0);
      (**(code **)(iVar2 + 0x108))(iVar6,uVar7);
    }
    if ((((piVar5 != (int *)0x0) && ((int *)piVar5[0x16] != (int *)0x0)) &&
        (iVar6 = (**(code **)(*(int *)piVar5[0x16] + 0x124))(0), iVar6 == 0)) &&
       (iVar6 = (**(code **)(*piVar5 + 0x27c))(), iVar6 == 0)) {
      (**(code **)(*(int *)piVar5[0x16] + 0x300))(1);
      cVar4 = (**(code **)(*piVar5 + 0x198))(0);
      if (cVar4 != '\0') {
        (**(code **)(*(int *)piVar5[0x16] + 0x308))(1);
      }
    }
  }
  if (_param_4 != 0) {
    FUN_00484470();
    FUN_00401f20(_param_4);
  }
  if (param_1 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(param_1);
  }
  if (piStack_10 != (int *)0x0) {
    FUN_00484470();
    FUN_00401f20(piStack_10);
  }
  *(undefined1 *)(local_4 + 0x185) = uVar1;
  if ((piVar5 != (int *)0x0) && (piVar5[0x16] != 0)) {
    FUN_005eda20(1);
  }
  return;
}



void FUN_0051e560(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b783c;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b31d0(uVar1);
  local_4 = 0;
  FUN_00467320();
  local_4._0_1_ = 1;
  FUN_00469690();
  local_4._0_1_ = 2;
  FUN_0046f2c0();
  local_4._0_1_ = 3;
  FUN_004684a0();
  local_4._0_1_ = 4;
  FUN_0046ca50();
  local_4._0_1_ = 5;
  FUN_00468bb0();
  local_4._0_1_ = 6;
  FUN_00468720();
  in_ECX[0x28] = &PTR_FUN_00a322a0;
  in_ECX[0x29] = 0;
  *(undefined2 *)(in_ECX + 0x2a) = 0;
  *(undefined2 *)((int)in_ECX + 0xaa) = 0;
  local_4._0_1_ = 7;
  FUN_0046d7e0();
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_0046ef60();
  *in_ECX = &PTR_FUN_00a52f84;
  in_ECX[9] = &PTR_LAB_00a52f1c;
  in_ECX[0x11] = &PTR_LAB_00a52f04;
  in_ECX[0x15] = &PTR_FUN_00a52ee4;
  in_ECX[0x1a] = &PTR_LAB_00a52ec0;
  in_ECX[0x20] = &PTR_LAB_00a52ea8;
  in_ECX[0x22] = &PTR_LAB_00a52e88;
  in_ECX[0x25] = &PTR_FUN_00a52e74;
  in_ECX[0x28] = &PTR_FUN_00a52e60;
  in_ECX[0x2b] = &PTR_FUN_00a52e40;
  in_ECX[0x31] = &PTR_LAB_00a52e2c;
  FUN_0065be10();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051e7e0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = (**(code **)(iVar1 + 0x128))(param_1);
  (**(code **)(iVar1 + 0x134))(param_1,iVar2 + param_1);
  return;
}



void FUN_0051e810(float param_1)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  
  iVar1 = *in_ECX;
  fVar2 = (float10)(**(code **)(iVar1 + 300))(param_1);
  (**(code **)(iVar1 + 0x130))(param_1,(float)(fVar2 + (float10)param_1));
  return;
}



void FUN_0051e850(void)

{
  uint uVar1;
  int in_ECX;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b79a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 8;
  FUN_0065ccc0(uVar1);
  local_4._0_1_ = 7;
  FUN_0046d850();
  if (in_ECX == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = in_ECX + 0xa0;
  }
  FUN_00401f20(*(undefined4 *)(iVar2 + 4));
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined2 *)(iVar2 + 10) = 0;
  *(undefined2 *)(iVar2 + 8) = 0;
  local_4._0_1_ = 5;
  FUN_00468ab0();
  local_4._0_1_ = 4;
  FUN_0046c9b0();
  local_4._0_1_ = 3;
  FUN_00468150();
  local_4._0_1_ = 2;
  FUN_0046f2b0();
  local_4._0_1_ = 1;
  FUN_0046a010();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00468140();
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051e980(byte param_1)

{
  FUN_0051e850();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0051e9a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009b7a1d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a5324c;
  in_ECX[9] = &PTR_LAB_00a531e4;
  in_ECX[0x11] = &PTR_LAB_00a531cc;
  in_ECX[0x15] = &PTR_FUN_00a531ac;
  in_ECX[0x1a] = &PTR_LAB_00a53188;
  in_ECX[0x20] = &PTR_LAB_00a53170;
  in_ECX[0x22] = &PTR_LAB_00a53150;
  in_ECX[0x25] = &PTR_FUN_00a5313c;
  in_ECX[0x28] = &PTR_FUN_00a53128;
  in_ECX[0x2b] = &PTR_FUN_00a53108;
  in_ECX[0x31] = &PTR_LAB_00a530f4;
  in_ECX[0x39] = &PTR_LAB_00a530dc;
  in_ECX[0x3b] = &PTR_FUN_00a530c8;
  local_4 = 3;
  FUN_0051c860(uVar1);
  local_4._0_1_ = 2;
  FUN_00470040();
  local_4._0_1_ = 1;
  FUN_0046d850();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_004689a0();
  local_4 = 0xffffffff;
  FUN_0051e850();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051eb80(void)

{
  code *pcVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7a72;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0051e560(uVar2);
  local_4 = 0;
  FUN_00468a60();
  local_4._0_1_ = 1;
  FUN_0046dbc0();
  *in_ECX = &PTR_FUN_00a5324c;
  in_ECX[9] = &PTR_LAB_00a531e4;
  in_ECX[0x11] = &PTR_LAB_00a531cc;
  in_ECX[0x15] = &PTR_FUN_00a531ac;
  in_ECX[0x1a] = &PTR_LAB_00a53188;
  in_ECX[0x20] = &PTR_LAB_00a53170;
  in_ECX[0x22] = &PTR_LAB_00a53150;
  in_ECX[0x25] = &PTR_FUN_00a5313c;
  in_ECX[0x28] = &PTR_FUN_00a53128;
  in_ECX[0x2b] = &PTR_FUN_00a53108;
  in_ECX[0x31] = &PTR_LAB_00a530f4;
  in_ECX[0x39] = &PTR_LAB_00a530dc;
  in_ECX[0x3b] = &PTR_FUN_00a530c8;
  FUN_0046d7e0();
  local_4._0_1_ = 2;
  FUN_0046ffd0();
  local_4 = CONCAT31(local_4._1_3_,3);
  *(undefined1 *)(in_ECX + 1) = 0x24;
  FUN_0051c7b0();
  FUN_00468210(0x32);
  FUN_00468180(0x46);
  FUN_004681b0(0x32);
  FUN_004681e0(0x32);
  FUN_00468af0(6,0x32);
  pcVar1 = *(code **)(in_ECX[9] + 0x50);
  in_ECX[10] = in_ECX[10] | 0x4000;
  (*pcVar1)(0x10);
  if (*(char *)(*(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4) + 0x184) == '\0') {
    FUN_004675e0(DAT_00b36298,0);
  }
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0051ed00(byte param_1)

{
  FUN_0051e9a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0051ed40(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_00470070(0x4e4f4349);
  FUN_0046bbb0(in_ECX + 0x30,1);
  FUN_0046b9f0();
  return;
}



byte FUN_0051ed80(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x30) & 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0051ed90(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = FUN_004511c0();
  if (iVar2 == 8) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4c4c5547) {
        if (iVar2 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            FUN_0046c7a0(0,param_1);
          }
          else {
            FUN_0046c7a0(in_ECX + 6,param_1);
          }
        }
        else if (iVar2 == 0x41544144) {
          FUN_0046bda0(param_1,in_ECX + 0xc,1);
        }
        else if (iVar2 == 0x44494445) {
          FUN_00450c20(&stack0xfffffff0,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
        }
      }
      else if (iVar2 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 9;
        }
        FUN_004700e0(piVar4,param_1);
      }
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0051ee90(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0541c,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    if ((*(byte *)(iVar1 + 0x30) & 1) != 0) {
      *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) | 1;
      return;
    }
    *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) & 0xfe;
  }
  return;
}



void FUN_0051ef30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7ae6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a53414;
  in_ECX[6] = &PTR_FUN_00a53400;
  in_ECX[9] = &PTR_FUN_00a533e4;
  local_4 = 2;
  thunk_FUN_0046b170(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00470040();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051efd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7b2e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046ffd0();
  local_4 = CONCAT31(local_4._1_3_,2);
  *in_ECX = &PTR_FUN_00a53414;
  in_ECX[6] = &PTR_FUN_00a53400;
  in_ECX[9] = &PTR_FUN_00a533e4;
  *(undefined1 *)(in_ECX + 1) = 8;
  *(undefined1 *)(in_ECX + 0xc) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051f070(byte param_1)

{
  FUN_0051ef30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



float10 FUN_0051f0a0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x38);
}



void FUN_0051f0b0(void)

{
  FUN_0046e8d0();
  return;
}



void FUN_0051f0c0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  FUN_0046e900(param_1,param_2);
  (**(code **)(*in_ECX + 0x40))(8);
  return;
}



void FUN_0051f0f0(undefined4 param_1,undefined4 param_2)

{
  int *in_ECX;
  
  FUN_0046e980(param_1,param_2);
  (**(code **)(*in_ECX + 0x40))(8);
  return;
}



short FUN_0051f120(uint param_1)

{
  short sVar1;
  short sVar2;
  
  sVar1 = FUN_0046ac50(param_1);
  sVar2 = FUN_0046e9f0(param_1);
  sVar1 = sVar1 + sVar2;
  if ((param_1 & 4) != 0) {
    sVar1 = sVar1 + 1;
  }
  return sVar1;
}



void FUN_0051f160(uint param_1)

{
  int in_ECX;
  
  FUN_0046b5e0(param_1);
  FUN_0046eac0(param_1);
  if ((param_1 & 4) != 0) {
    FUN_0046ac70(in_ECX + 0x34,1);
  }
  return;
}



void FUN_0051f190(uint param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_0046b600(param_1,param_2);
  FUN_0046ec70(param_1,param_2);
  if ((param_1 & 4) != 0) {
    FUN_0046ac80(in_ECX + 0x34,1);
  }
  return;
}



void FUN_0051f1d0(int param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  piVar1 = (int *)(in_ECX + 0x3c);
  while ((piVar1 != (int *)0x0 &&
         ((((int *)piVar1[1] != (int *)0x0 || (*piVar1 != 0)) && (iVar2 == 0))))) {
    iVar2 = 0;
    if (iVar3 == param_1) {
      iVar2 = *piVar1;
    }
    iVar3 = iVar3 + 1;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



char * FUN_0051f210(int param_1,undefined4 *param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar3 = "DUMMY";
  if (param_2 != (undefined4 *)0x0) {
    if (param_1 != 0) {
      if (param_1 != 1) {
        return pcVar3;
      }
      if (*(ushort *)(param_2 + 3) == 0xffff) {
        pcVar4 = (char *)param_2[2];
        pcVar1 = pcVar4 + 1;
        do {
          cVar2 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar2 != '\0');
        uVar5 = (int)pcVar4 - (int)pcVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(param_2 + 3);
      }
      if (uVar5 != 0) {
        return (char *)param_2[2];
      }
    }
    if (*(ushort *)(param_2 + 1) == 0xffff) {
      pcVar4 = (char *)*param_2;
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(param_2 + 1);
    }
    if (uVar5 != 0) {
      pcVar3 = (char *)*param_2;
    }
  }
  return pcVar3;
}



void FUN_0051f290(void)

{
  int in_ECX;
  
  if ((*(uint *)(in_ECX + 8) >> 3 & 1) == 0) {
    FUN_0046e6b0(in_ECX);
    FUN_0046ab80(1);
  }
  return;
}



void FUN_0051f2d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7b63;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_00470040(uVar1);
  FUN_00401f20(in_ECX[2]);
  in_ECX[2] = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051f350(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0051f1d0(param_1);
  FUN_0051f210(param_2,uVar1);
  return;
}



undefined1 * FUN_0051f370(undefined4 param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  
  iVar3 = FUN_0051f1d0(param_1);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 0x18) == 0xffff) {
      pcVar4 = *(char **)(iVar3 + 0x14);
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar3 + 0x18);
    }
    if (uVar5 != 0) {
      if (*(undefined1 **)(iVar3 + 0x14) != (undefined1 *)0x0) {
        return *(undefined1 **)(iVar3 + 0x14);
      }
      return &DAT_00a2f7ec;
    }
  }
  return (undefined1 *)0x0;
}



void FUN_0051f570(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7b93;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[2] = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  local_4 = 1;
  FUN_0046ffd0(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0051f5e0(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0);
  if ((iVar3 != 0) && (cVar2 = FUN_0046ad70(iVar3), cVar2 == '\0')) {
    if ((uint)*(byte *)(in_ECX + 0x34) == (uint)*(byte *)(iVar3 + 0x34)) {
      iVar5 = 0;
    }
    else {
      iVar5 = 1;
      if ((int)((uint)*(byte *)(in_ECX + 0x34) - (uint)*(byte *)(iVar3 + 0x34)) < 1) {
        iVar5 = -1;
      }
    }
    if ((iVar5 == 0) && (*(float *)(iVar3 + 0x38) == *(float *)(in_ECX + 0x38))) {
      piVar6 = (int *)(in_ECX + 0x3c);
      piVar7 = (int *)(iVar3 + 0x3c);
      while( true ) {
        if ((piVar6 == (int *)0x0) || (cVar2 = FUN_0046cb60(), cVar2 != '\0')) {
          if ((piVar7 != (int *)0x0) && (cVar2 = FUN_0046cb60(), cVar2 == '\0')) {
            return 1;
          }
          return 0;
        }
        if (piVar7 == (int *)0x0) {
          return 1;
        }
        puVar1 = (undefined4 *)*piVar7;
        if (puVar1 == (undefined4 *)0x0) break;
        iVar3 = *piVar6;
        iVar5 = FUN_00404fd0();
        if ((iVar5 != 0) || (iVar5 = FUN_00404fd0(), iVar5 != 0)) {
          iVar5 = FUN_00404fd0();
          iVar4 = FUN_00404fd0();
          if (iVar4 != iVar5) {
            return 1;
          }
          iVar5 = FUN_00412f40(*puVar1,0);
          if (iVar5 != 0) {
            return 1;
          }
        }
        iVar5 = FUN_00404fd0();
        if ((iVar5 != 0) || (iVar5 = FUN_00404fd0(), iVar5 != 0)) {
          iVar5 = FUN_00404fd0();
          iVar4 = FUN_00404fd0();
          if (iVar4 != iVar5) {
            return 1;
          }
          iVar5 = FUN_00412f40(puVar1[2],0);
          if (iVar5 != 0) {
            return 1;
          }
        }
        cVar2 = (**(code **)(*(int *)(iVar3 + 0x10) + 0xc))(puVar1 + 4);
        if (cVar2 != '\0') {
          return 1;
        }
        piVar6 = (int *)piVar6[1];
        piVar7 = (int *)piVar7[1];
      }
      return 1;
    }
  }
  return 1;
}



int FUN_0051f760(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar7 = 0;
  iVar3 = FUN_00401f00(0x1c,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0051f570();
  }
  piVar6 = (int *)(in_ECX + 0x3c);
  piVar5 = (int *)0x0;
  local_4 = 0xffffffff;
  if (piVar6 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar6[1];
      if ((piVar1 == (int *)0x0) && (*piVar6 == 0)) break;
      iVar7 = iVar7 + 1;
      piVar5 = piVar6;
      piVar6 = piVar1;
    } while (piVar1 != (int *)0x0);
    if (piVar5 != (int *)0x0) {
      FUN_0067b1e0(uVar4);
      *unaff_FS_OFFSET = local_c;
      return iVar7;
    }
  }
  FUN_00446cb0(uVar4);
  *unaff_FS_OFFSET = local_c;
  return iVar7;
}



void FUN_0051f820(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7bce;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  in_ECX[6] = &PTR_FUN_00a322a0;
  in_ECX[7] = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  FUN_0046e5e0();
  *in_ECX = &PTR_FUN_00a53524;
  in_ECX[6] = &PTR_FUN_00a53510;
  in_ECX[9] = &PTR_LAB_00a534fc;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  *(undefined1 *)(in_ECX + 0xd) = 0;
  in_ECX[0xe] = 0x3f800000;
  local_4 = CONCAT31(local_4._1_3_,2);
  thunk_FUN_0046b090();
  *(undefined1 *)(in_ECX + 1) = 6;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_0051f8c0(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined1 *puVar4;
  int *unaff_FS_OFFSET;
  int *piStack_34;
  int *piStack_30;
  int *piStack_2c;
  undefined1 *local_28;
  int *local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009b7bfb;
  local_10 = *unaff_FS_OFFSET;
  local_28 = (undefined1 *)(DAT_00b30aac ^ (uint)&stack0xfffffffc);
  *unaff_FS_OFFSET = (int)&local_10;
  local_18 = (int *)0x0;
  piStack_30 = (int *)0x51f8fd;
  FUN_00451210();
  do {
    piStack_2c = (int *)0x51f90a;
    iVar2 = FUN_004510b0();
    if (iVar2 < 0x4d414e47) {
      if (iVar2 == 0x4d414e46) {
        if (local_18 != (int *)0x0) {
          piStack_2c = (int *)0x51f9ca;
          iVar2 = -param_1[0x95];
          puVar4 = (undefined1 *)((int)&local_28 + iVar2);
          *(undefined4 *)((int)&piStack_2c + iVar2) = 0;
          *(int *)((int)&piStack_30 + iVar2) = (int)&local_28 + iVar2;
          *(undefined4 *)((int)&piStack_34 + iVar2) = 0x51f9d6;
          FUN_00450c20();
          goto LAB_0051fa9a;
        }
      }
      else if (iVar2 < 0x4c4c5547) {
        if (iVar2 == 0x4c4c5546) {
          if (in_ECX == (int *)0x0) {
            piStack_2c = param_1;
            piStack_30 = (int *)0x0;
            piStack_34 = (int *)0x51f994;
            FUN_0046c7a0();
          }
          else {
            piStack_30 = in_ECX + 6;
            piStack_2c = param_1;
            piStack_34 = (int *)0x51f983;
            FUN_0046c7a0();
          }
        }
        else if (iVar2 == 0x41544144) {
          piStack_2c = (int *)0x1;
          piStack_30 = in_ECX + 0xd;
          piStack_34 = param_1;
          FUN_0046bda0();
        }
        else if (iVar2 == 0x44494445) {
          piStack_2c = (int *)&stack0xffffffdc;
          local_28 = (undefined1 *)0x200;
          piStack_30 = (int *)0x51f950;
          FUN_00450c20();
          piStack_2c = (int *)0x51f95d;
          local_28 = &stack0xffffffdc;
          (**(code **)(*in_ECX + 0xd8))();
        }
      }
      else if (iVar2 == 0x4d414e43) {
        piStack_2c = in_ECX + 0xe;
        piStack_30 = (int *)0x51f9b2;
        FUN_004510e0();
      }
    }
    else {
      switch(iVar2) {
      case 0x4d414e49:
        if (local_18 != (int *)0x0) {
          piStack_2c = (int *)0x51fa88;
          iVar2 = -param_1[0x95];
          puVar4 = (undefined1 *)((int)&local_28 + iVar2);
          *(undefined4 *)((int)&piStack_2c + iVar2) = 0;
          *(int *)((int)&piStack_30 + iVar2) = (int)&local_28 + iVar2;
          *(undefined4 *)((int)&piStack_34 + iVar2) = 0x51fa94;
          FUN_00450c20();
LAB_0051fa9a:
          *(undefined4 *)(puVar4 + -4) = 0;
          *(undefined1 **)(puVar4 + -8) = puVar4;
          *(undefined4 *)(puVar4 + -0xc) = 0x51faa2;
          FUN_004028d0();
        }
        break;
      case 0x4d414e4d:
        if (local_18 != (int *)0x0) {
          piStack_2c = (int *)0x51fa68;
          iVar2 = -param_1[0x95];
          puVar4 = (undefined1 *)((int)&local_28 + iVar2);
          *(undefined4 *)((int)&piStack_2c + iVar2) = 0;
          *(int *)((int)&piStack_30 + iVar2) = (int)&local_28 + iVar2;
          *(undefined4 *)((int)&piStack_34 + iVar2) = 0x51fa74;
          FUN_00450c20();
          goto LAB_0051fa9a;
        }
        break;
      case 0x4d414e52:
        piStack_2c = (int *)0x1c;
        piStack_30 = (int *)0x51fa28;
        iVar2 = FUN_00401f00();
        local_8 = 0;
        if (iVar2 == 0) {
          local_18 = (int *)0x0;
        }
        else {
          piStack_2c = (int *)0x51fa40;
          local_18 = (int *)FUN_0051f570();
        }
        local_8 = 0xffffffff;
        piStack_30 = (int *)0x51fa57;
        piStack_2c = local_18;
        FUN_0067b1e0();
        break;
      case 0x4d414e58:
        piStack_2c = (int *)0x8;
        piStack_30 = (int *)0x51fa04;
        piVar3 = (int *)FUN_00401f00();
        piStack_2c = (int *)0x8;
        piStack_34 = (int *)0x51fa13;
        piStack_30 = piVar3;
        FUN_00450c20();
        piStack_30 = (int *)0x51fa1c;
        piStack_2c = piVar3;
        FUN_0067b1e0();
      }
    }
    piStack_2c = (int *)0x51faa9;
    cVar1 = FUN_0044fea0();
    if (cVar1 == '\0') {
      *unaff_FS_OFFSET = local_10;
      return 1;
    }
  } while( true );
}



void FUN_0051fb00(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  while ((*(int *)(in_ECX + 0x40) != 0 || (*(int *)(in_ECX + 0x3c) != 0))) {
    iVar1 = *(int *)(in_ECX + 0x3c);
    if (iVar1 != 0) {
      FUN_0051f2d0();
      FUN_00401f20(iVar1);
    }
    puVar2 = *(undefined4 **)(in_ECX + 0x40);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
    else {
      *(undefined4 *)(in_ECX + 0x40) = puVar2[1];
      *(undefined4 *)(in_ECX + 0x3c) = *puVar2;
      FUN_00401f20(puVar2);
    }
  }
  return;
}



void FUN_0051fb50(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05374,0,uVar3);
  if (iVar4 != 0) {
    FUN_0046acb0(param_1);
    *(undefined1 *)(in_ECX + 0x34) = *(undefined1 *)(iVar4 + 0x34);
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(iVar4 + 0x38);
    FUN_0051fb00();
    param_1 = (int *)(in_ECX + 0x3c);
    for (piVar6 = (int *)(iVar4 + 0x3c);
        (piVar6 != (int *)0x0 && ((piVar6[1] != 0 || (*piVar6 != 0)))); piVar6 = (int *)piVar6[1]) {
      iVar4 = FUN_00401f00(0x1c);
      local_4 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_0051f570();
      }
      local_4 = 0xffffffff;
      FUN_004028d0(*(undefined4 *)*piVar6,0);
      FUN_004028d0(*(undefined4 *)(*piVar6 + 8),0);
      (**(code **)(*(int *)(iVar4 + 0x10) + 8))(*piVar6 + 0x10);
      iVar1 = param_1[1];
      piVar5 = param_1 + 1;
      piVar2 = param_1;
      while (iVar1 != 0) {
        piVar2 = (int *)*piVar5;
        piVar5 = piVar2 + 1;
        iVar1 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = iVar4;
      }
      else {
        piVar5 = (int *)FUN_00401f00(8);
        if (piVar5 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar5 = iVar4;
          piVar5[1] = 0;
          piVar2[1] = (int)piVar5;
        }
      }
      piVar5 = (int *)param_1[1];
      if (piVar5 != (int *)0x0) {
        param_1 = piVar5;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051fcc0(void)

{
  FUN_0051fb00();
  thunk_FUN_0046b170();
  return;
}



void FUN_0051fcd0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b7c76;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a53524;
  in_ECX[6] = &PTR_FUN_00a53510;
  in_ECX[9] = &PTR_LAB_00a534fc;
  local_4 = 2;
  FUN_0051fb00(uVar1);
  thunk_FUN_0046b170();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_0046e5c0();
  FUN_00401f20(in_ECX[7]);
  in_ECX[7] = 0;
  *(undefined2 *)((int)in_ECX + 0x22) = 0;
  *(undefined2 *)(in_ECX + 8) = 0;
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0051fd70(byte param_1)

{
  FUN_0051fcd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0051fda0(void)

{
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  FUN_00470070(0x4e4f4349);
  FUN_0046bbb0(in_ECX + 0x48,1);
  FUN_0046b9f0();
  return;
}



void FUN_0051fdf0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05434,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined1 *)(in_ECX + 0x48) = *(undefined1 *)(iVar1 + 0x48);
  }
  return;
}



byte FUN_0051fe80(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x48) & 1;
}



byte FUN_0051fe90(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x48) >> 3 & 1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0051fea0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  
  iVar2 = FUN_004511c0();
  if (iVar2 == 7) {
    FUN_00451210(in_ECX);
    iVar2 = FUN_004510b0();
    while (iVar2 != 0) {
      if (iVar2 < 0x4c444f4e) {
        if (iVar2 == 0x4c444f4d) {
LAB_0051ff50:
          if (in_ECX == (int *)0x0) {
            FUN_0046db00(0,param_1);
          }
          else {
            FUN_0046db00(in_ECX + 9,param_1);
          }
        }
        else if (iVar2 == 0x41544144) {
          FUN_0046bda0(param_1,in_ECX + 0x12,1);
        }
        else {
          if (iVar2 == 0x42444f4d) goto LAB_0051ff50;
          if (iVar2 == 0x44494445) {
            FUN_00450c20(&stack0xfffffff0,0x200);
            (**(code **)(*in_ECX + 0xd8))(&stack0xfffffff0);
          }
        }
      }
      else if (iVar2 == 0x4c4c5546) {
        if (in_ECX == (int *)0x0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = in_ECX + 6;
        }
        FUN_0046c7a0(piVar4,param_1);
      }
      else if (iVar2 == 0x4e4f4349) {
        if (in_ECX == (int *)0x0) {
          FUN_004700e0(0,param_1);
        }
        else {
          FUN_004700e0(in_ECX + 0xf,param_1);
        }
      }
      else if (iVar2 == 0x54444f4d) goto LAB_0051ff50;
      cVar1 = FUN_0044fea0();
      if (cVar1 == '\0') break;
      iVar2 = FUN_004510b0();
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



undefined1 FUN_0051ffd0(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  undefined1 uVar4;
  
  uVar4 = 0;
  if (((param_1 != 0) && (*(int *)(param_1 + 0xe8) != 0)) &&
     (piVar2 = (int *)(*(int *)(param_1 + 0xe8) + 0x8c), piVar2 != (int *)0x0)) {
    while (*piVar2 != in_ECX) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return 0;
      }
    }
    iVar3 = FUN_00519d20();
    if (iVar3 == 0) {
      bVar1 = *(byte *)(in_ECX + 0x48) & 2;
    }
    else {
      if (iVar3 != 1) {
        return 0;
      }
      bVar1 = *(byte *)(in_ECX + 0x48) & 4;
    }
    if (bVar1 == 0) {
      uVar4 = 1;
    }
  }
  return uVar4;
}


