
void FUN_00baf000(void)

{
  return;
}



int FUN_00baf005(short *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  byte local_2e;
  byte local_2d;
  byte *local_2c;
  byte *local_28;
  uint local_24;
  ushort *local_1c;
  int *local_10;
  uint local_c;
  
  if (*param_1 == 0x5a4d) {
    piVar3 = (int *)((int)param_1 + *(int *)(param_1 + 0x1e));
    if (*piVar3 == 0x4550) {
      if (((short)piVar3[1] == 0x14c) && ((short)piVar3[5] == 0xe0)) {
        if (piVar3[0x1f] == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = piVar3[0x1e];
          if ((*(int *)((int)param_1 + iVar2 + 0x18) == 0) ||
             (*(int *)((int)param_1 + iVar2 + 0x14) == 0)) {
            iVar2 = 0;
          }
          else {
            local_10 = (int *)((int)param_1 + *(int *)((int)param_1 + iVar2 + 0x20));
            local_1c = (ushort *)((int)param_1 + *(int *)((int)param_1 + iVar2 + 0x24));
            local_c = 0xffffffff;
            for (local_24 = 0; local_24 < *(uint *)((int)param_1 + iVar2 + 0x18);
                local_24 = local_24 + 1) {
              local_28 = param_2;
              local_2c = (byte *)((int)param_1 + *local_10);
              do {
                do {
                  if ((*local_28 == 0) || (*local_2c == 0)) {
                    if (*local_28 == *local_2c) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    goto LAB_00baf1b9;
                  }
                  local_2d = *local_28;
                  local_28 = local_28 + 1;
                  local_2e = *local_2c;
                  local_2c = local_2c + 1;
                } while (local_2d == local_2e);
                if (('@' < (char)local_2d) && ((char)local_2d < '[')) {
                  local_2d = local_2d | 0x20;
                }
                if (('@' < (char)local_2e) && ((char)local_2e < '[')) {
                  local_2e = local_2e | 0x20;
                }
              } while (local_2d == local_2e);
              bVar1 = true;
LAB_00baf1b9:
              if (!bVar1) {
                local_c = (uint)*local_1c;
                break;
              }
              local_10 = local_10 + 1;
              local_1c = local_1c + 1;
            }
            if (local_c == 0xffffffff) {
              iVar2 = 0;
            }
            else if (*(uint *)((int)param_1 + iVar2 + 0x14) < local_c) {
              iVar2 = 0;
            }
            else {
              iVar2 = (int)param_1 +
                      *(int *)((int)param_1 + *(int *)((int)param_1 + iVar2 + 0x1c) + local_c * 4);
            }
          }
        }
      }
      else {
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



int FUN_00baf201(uint param_1,int param_2)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 1000000000;
  for (local_c = 0; local_c < 10; local_c = local_c + 1) {
    *(char *)(param_2 + local_c) = (char)(param_1 / local_8) + '0';
    param_1 = param_1 - (param_1 / local_8) * local_8;
    local_8 = local_8 / 10;
  }
  *(undefined1 *)(param_2 + 10) = 0;
  return param_2;
}



uint FUN_00baf266(int param_1,int param_2,uint param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  
  for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
    param_3 = (int)*(char *)(param_1 + local_c) << 0x18 ^ param_3;
    for (local_10 = 8; 0 < local_10; local_10 = local_10 + -1) {
      if ((param_3 & 0x80000000) == 0) {
        param_3 = param_3 << 1;
      }
      else {
        param_3 = param_3 << 1 ^ 0x488781ed;
      }
    }
  }
  return param_3;
}



void FUN_00baf2db(void)

{
  entry();
  return;
}



void entry(void)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  int unaff_FS_OFFSET;
  uint local_d68;
  uint local_d60;
  uint local_d58;
  uint local_d50;
  char local_d45;
  char *local_d28;
  char *local_d24;
  char *local_d20;
  char *local_d1c;
  char *local_d18;
  char *local_d14;
  char *local_d10;
  char *local_d0c;
  char *local_d08;
  char *local_d04;
  int local_cfc;
  undefined4 local_cf8;
  char local_cf4 [260];
  code *local_bf0;
  char local_bec [260];
  undefined4 local_ae8;
  char local_ae4 [1024];
  char *local_6e4;
  uint local_6e0;
  code **local_6dc;
  uint local_6d8;
  uint *local_6d4;
  uint local_6d0;
  uint local_6cc;
  uint *local_6c8;
  uint local_6c4;
  uint local_6c0;
  short *local_6bc;
  code *local_6b8;
  uint local_6b4;
  uint local_6b0;
  int local_6ac;
  undefined1 local_6a8 [4];
  int local_6a4;
  uint local_6a0;
  uint local_69c;
  uint local_698;
  uint local_694;
  int local_690;
  int local_68c;
  uint local_688 [8];
  char local_665;
  int local_664;
  int local_660;
  uint *local_65c;
  int local_658;
  int *local_654;
  int *local_650;
  int local_64c;
  int *local_648;
  int *local_644;
  uint local_640;
  int local_63c;
  uint local_638;
  ushort *local_634;
  int local_630;
  int *local_62c;
  int local_628;
  int *local_624;
  uint local_620;
  int local_61c;
  uint local_618;
  int local_614;
  int local_610;
  uint local_60c;
  int local_608;
  uint local_604;
  int local_600;
  int local_5fc;
  int local_5f8;
  int local_5f4;
  uint local_5f0;
  short *local_5ec;
  int local_5e8;
  uint local_5e4;
  undefined1 *local_5e0;
  code *local_5dc;
  int local_5d8;
  int *local_5d4;
  int local_5d0;
  short *local_5cc;
  code *local_5c8;
  int local_5c4;
  undefined1 local_5c0 [4];
  int local_5bc;
  int local_5b8;
  int local_5b4;
  int aiStack_5b0 [32];
  int local_530;
  uint local_52c;
  uint local_528;
  uint local_524;
  uint local_520;
  uint local_51c;
  uint local_518;
  int local_514;
  uint local_510;
  uint local_50c;
  int local_508;
  uint local_504;
  uint local_500;
  int local_4fc;
  undefined4 local_4f8;
  short *local_4f4;
  uint local_4f0;
  uint local_4ec;
  uint local_4e8;
  uint local_4e4;
  uint local_4e0;
  uint local_4dc;
  uint *local_4d8;
  uint local_4d4;
  uint *local_4d0;
  uint local_4cc;
  uint *local_4c8;
  uint *local_4c4;
  char local_4bd;
  undefined4 local_4bc;
  int local_4b8;
  int local_4b4;
  int local_4b0;
  int local_4ac;
  int local_4a8;
  char local_4a1;
  int local_4a0;
  char local_499;
  int *local_498;
  undefined4 local_494;
  int local_490;
  uint local_48c;
  code **local_488;
  uint local_484;
  char *local_480;
  char *local_47c;
  uint local_478;
  undefined1 *local_474;
  undefined1 *local_470;
  uint local_46c;
  uint local_468;
  int local_464;
  uint *local_460;
  code *local_45c;
  char local_455;
  undefined4 local_454;
  int local_450;
  code *local_44c;
  code *local_448;
  undefined4 local_444;
  char local_440 [40];
  uint local_418;
  uint *local_414;
  uint local_410;
  code *local_40c;
  uint local_408;
  undefined4 *local_404;
  undefined4 *local_400;
  undefined4 *local_3fc;
  undefined4 *local_3f8;
  undefined4 *local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  uint local_3e8;
  uint *local_3e4;
  uint local_3e0;
  undefined4 local_3dc;
  int local_3d8;
  char local_3d4;
  char local_3d3 [7];
  int local_3cc;
  uint local_3c8;
  int local_3c4;
  undefined1 local_3c0 [16];
  undefined1 local_3b0 [32];
  undefined1 local_390 [16];
  undefined1 local_380 [80];
  undefined1 local_330 [16];
  undefined1 local_320 [16];
  undefined1 local_310 [24];
  undefined1 local_2f8 [24];
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  undefined1 local_2c0 [24];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  undefined1 local_268 [16];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  undefined1 local_218 [16];
  undefined1 local_208 [24];
  undefined1 local_1f0 [16];
  undefined1 local_1e0 [16];
  undefined1 local_1d0 [16];
  undefined1 local_1c0 [24];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [24];
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined1 local_158 [20];
  undefined1 local_144 [32];
  undefined1 local_124 [32];
  undefined1 local_104 [8];
  char local_fc [16];
  undefined1 local_ec [16];
  char local_dc [40];
  char local_b4 [20];
  undefined4 *local_a0;
  uint *local_9c;
  undefined1 local_98 [16];
  code *local_88 [4];
  int local_78;
  code *local_74;
  code *local_70;
  int local_6c;
  code *local_68;
  int local_64;
  code *local_60;
  code *local_5c;
  code *local_58;
  code *local_54;
  code *local_50;
  code *local_4c;
  code *local_48;
  code *local_44;
  code *local_40;
  code *local_3c;
  code *local_38;
  int local_34;
  code *local_30;
  code *local_2c;
  code *local_28;
  code *local_24;
  short *local_1c;
  
  local_a0 = &DAT_00bb1204;
  puVar10 = &DAT_00bb1204;
  puVar11 = &local_408;
  for (iVar9 = 0xd9; iVar9 != 0; iVar9 = iVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  local_414 = &local_408;
  local_444 = 0x72c99b67;
  local_46c = 0x72c99b67;
  local_460 = local_414;
  for (local_464 = 0xd9; 0 < local_464; local_464 = local_464 + -1) {
    local_468 = *local_460;
    *local_460 = *local_460 ^ local_46c;
    local_460 = local_460 + 1;
    local_46c = local_468;
  }
  local_470 = local_98;
  local_474 = local_ec;
  for (local_478 = 0; local_478 < 0x10; local_478 = local_478 + 1) {
    local_470[local_478] = local_474[local_478];
  }
  local_47c = local_440;
  local_480 = local_dc;
  for (local_484 = 0; local_484 < 0x28; local_484 = local_484 + 1) {
    local_47c[local_484] = local_480[local_484];
  }
  local_418 = 0;
  local_410 = local_3e8;
  local_3e8 = 0;
  local_418 = FUN_00baf266(local_3f0,local_3ec,0);
  local_418 = FUN_00baf266(local_414,0x364,local_418);
  if (local_418 != local_410) {
    local_3d4 = 0x31;
  }
  local_3e8 = local_410;
  local_488 = local_88;
  for (local_48c = 0; local_48c < 0x68; local_48c = local_48c + 1) {
    *(undefined1 *)((int)local_488 + local_48c) = 0;
  }
  if (local_404 == (undefined4 *)0x0) {
    if (local_400 == (undefined4 *)0x0) {
      if (local_3f8 == (undefined4 *)0x0) {
        if (local_3f4 == (undefined4 *)0x0) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_88[0] = (code *)(*(code *)*local_3f4)(local_3b0);
      }
      else {
        local_88[0] = (code *)(*(code *)*local_3f8)(local_3c0);
      }
    }
    else {
      local_88[0] = (code *)(*(code *)*local_400)(local_3b0);
    }
  }
  else {
    local_88[0] = (code *)(*(code *)*local_404)(local_3c0);
  }
  if (local_3fc == (undefined4 *)0x0) {
    local_70 = (code *)FUN_00baf005(local_88[0],local_268);
  }
  else {
    local_70 = (code *)*local_3fc;
  }
  local_44c = (code *)(*local_70)(local_88[0],local_298);
  local_88[1] = (code *)(*local_70)(local_88[0],local_288);
  local_88[2] = (code *)(*local_70)(local_88[0],local_278);
  local_88[3] = (code *)(*local_70)(local_88[0],local_2e0);
  local_78 = (*local_70)(local_88[0],local_2d0);
  local_74 = (code *)(*local_70)(local_88[0],local_330);
  local_6c = (*local_70)(local_88[0],local_2f8);
  local_68 = (code *)(*local_70)(local_88[0],local_310);
  local_64 = (*local_70)(local_88[0],local_2c0);
  local_60 = (code *)(*local_70)(local_88[0],local_2a8);
  local_5c = (code *)(*local_70)(local_88[0],local_258);
  local_58 = (code *)(*local_70)(local_88[0],local_248);
  local_54 = (code *)(*local_70)(local_88[0],local_238);
  local_50 = (code *)(*local_70)(local_88[0],local_228);
  local_4c = (code *)(*local_70)(local_88[0],local_218);
  local_48 = (code *)(*local_70)(local_88[0],local_208);
  local_44 = (code *)(*local_70)(local_88[0],local_1f0);
  local_40 = (code *)(*local_70)(local_88[0],local_1e0);
  local_3c = (code *)(*local_70)(local_88[0],local_1d0);
  local_38 = (code *)(*local_70)(local_88[0],local_1c0);
  local_34 = (*local_70)(local_88[0],local_1a8);
  local_30 = (code *)(*local_70)(local_88[0],local_1a0);
  local_2c = (code *)(*local_70)(local_88[0],local_188);
  local_28 = (code *)(*local_70)(local_88[0],local_168);
  local_24 = (code *)(*local_70)(local_88[0],local_158);
  if (((((((((local_88[1] == (code *)0x0) || (local_88[2] == (code *)0x0)) ||
           (local_88[3] == (code *)0x0)) || ((local_78 == 0 || (local_74 == (code *)0x0)))) ||
         (local_6c == 0)) ||
        (((local_30 == (code *)0x0 || (local_64 == 0)) ||
         ((local_60 == (code *)0x0 ||
          (((local_5c == (code *)0x0 || (local_38 == (code *)0x0)) || (local_58 == (code *)0x0))))))
        )) || ((local_54 == (code *)0x0 || (local_50 == (code *)0x0)))) ||
      ((local_3c == (code *)0x0 ||
       (((local_34 == 0 || (local_4c == (code *)0x0)) ||
        ((local_48 == (code *)0x0 ||
         (((local_44 == (code *)0x0 || (local_40 == (code *)0x0)) || (local_2c == (code *)0x0)))))))
       ))) || (((local_28 == (code *)0x0 || (local_24 == (code *)0x0)) || (local_68 == (code *)0x0))
              )) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    local_494 = (*local_28)();
    local_490 = 0x6d72642d;
    for (local_498 = (int *)(*local_28)(); (char)*local_498 != '\0';
        local_498 = (int *)((int)local_498 + 1)) {
      if (*local_498 == local_490) {
        local_499 = *(char *)((int)local_498 + 5);
        goto LAB_00baf860;
      }
    }
    local_499 = '0';
LAB_00baf860:
    local_3d4 = local_499;
    if (local_499 == '0') {
      local_4a0 = *(int *)(unaff_FS_OFFSET + 0x18);
      if (((local_4a0 == 0) || (*(int *)(local_4a0 + 0x18) != local_4a0)) ||
         ((*(int *)(local_4a0 + 0x30) == 0 || (*(char *)(*(int *)(local_4a0 + 0x30) + 2) != '\0'))))
      {
        local_4a1 = '\x01';
      }
      else {
        local_4a1 = '\0';
      }
      if (local_4a1 == '\0') {
        if (*local_3e4 == local_3e8) {
LAB_00bafb04:
          uVar6 = (*local_58)(0,local_3e0);
          local_4c4 = (uint *)(*local_54)(uVar6);
          local_4d4 = local_3e0;
          local_4d0 = local_3e4;
          local_4c8 = local_3e4;
          for (local_4cc = 0; local_4cc < local_3e0; local_4cc = local_4cc + 1) {
            *(undefined1 *)((int)local_4c4 + local_4cc) =
                 *(undefined1 *)((int)local_3e4 + local_4cc);
          }
          local_4e8 = local_3e8;
          local_4e4 = local_3e0 - 4;
          local_4d8 = local_4c4;
          for (local_4dc = local_4e4 >> 2; local_4d8 = local_4d8 + 1, 0 < (int)local_4dc;
              local_4dc = local_4dc - 1) {
            local_4e0 = *local_4d8;
            *local_4d8 = *local_4d8 ^ local_4e8;
            local_4e8 = local_4e0;
          }
          local_4fc = *(int *)((int)local_4c4 + local_3cc);
          local_4f0 = *(uint *)((int)local_4c4 + local_3c8);
          local_3e4 = local_4c4;
          local_9c = local_4c4;
          uVar6 = (*local_58)(0,local_4f0);
          local_5cc = (short *)(*local_54)(uVar6);
          local_508 = (int)local_3e4 + local_3c4;
          local_4f8 = 0x20;
          local_500 = local_4f0 >> 3;
          local_4ec = 0x55555555;
          local_504 = 0x55555555;
          for (local_50c = 0; local_50c < local_500; local_50c = local_50c + 1) {
            local_514 = local_50c * 2;
            local_520 = *(uint *)(local_4fc + local_50c * 8);
            local_51c = *(uint *)(local_4fc + 4 + local_50c * 8);
            local_518 = 0xc6ef3720;
            local_524 = local_520;
            local_510 = local_51c;
            for (local_528 = 0; local_528 < 0x20; local_528 = local_528 + 1) {
              local_510 = local_510 -
                          ((local_524 << 4 ^ local_524 >> 5) + local_524 ^
                          local_518 + *(int *)(local_508 + (local_518 >> 0xb & 3) * 4));
              local_518 = local_518 + 0x61c88647;
              local_524 = local_524 -
                          ((local_510 * 0x10 ^ local_510 >> 5) + local_510 ^
                          local_518 + *(int *)(local_508 + (local_518 & 3) * 4));
            }
            *(uint *)(local_5cc + local_50c * 4) = local_524 ^ local_4ec;
            *(uint *)(local_5cc + local_50c * 4 + 2) = local_510 ^ local_504;
            local_504 = local_51c;
            local_4ec = local_520;
          }
          local_4f4 = local_5cc;
          local_1c = local_5cc;
          if (*local_5cc == 0x5a4d) {
            local_5d4 = (int *)((int)local_5cc + *(int *)(local_5cc + 0x1e));
            if (*local_5d4 == 0x4550) {
              local_5c4 = (*local_88[1])(local_5d4[0xd],local_5d4[0x14],0x2000,4);
              if (local_5c4 == 0) {
                local_5c4 = (*local_88[1])(0,local_5d4[0x14],0x2000,4);
              }
              if (local_5c4 == 0) {
                local_6b8 = (code *)0x0;
              }
              else {
                local_5e0 = local_5c0;
                for (local_5e4 = 0; local_5e4 < 0x90; local_5e4 = local_5e4 + 1) {
                  local_5e0[local_5e4] = 0;
                }
                local_5bc = local_5c4;
                local_530 = (*local_88[1])(local_5c4,local_5d4[0x14],0x1000,4);
                iVar9 = *(int *)(local_5cc + 0x1e);
                iVar4 = local_5d4[0x15];
                local_52c = iVar9 + iVar4;
                local_5e8 = local_530;
                local_5ec = local_5cc;
                for (local_5f0 = 0; local_5f0 < (uint)(iVar9 + iVar4); local_5f0 = local_5f0 + 1) {
                  *(undefined1 *)(local_530 + local_5f0) =
                       *(undefined1 *)((int)local_5cc + local_5f0);
                }
                local_5b8 = local_530 + *(int *)(local_5cc + 0x1e);
                *(int *)(local_5b8 + 0x34) = local_5c4;
                local_5f8 = local_5bc;
                local_5fc = local_5b8 + 0x18 + (uint)*(ushort *)(local_5b8 + 0x14);
                for (local_600 = 0; local_600 < (int)(uint)*(ushort *)(local_5b8 + 6);
                    local_600 = local_600 + 1) {
                  if (*(int *)(local_5fc + 0x10) == 0) {
                    local_604 = local_5d4[0xe];
                    if (local_604 != 0) {
                      local_5f4 = (*local_88[1])(local_5f8 + *(int *)(local_5fc + 0xc),local_604,
                                                 0x1000,4);
                      *(int *)(local_5fc + 8) = local_5f4;
                      local_608 = local_5f4;
                      for (local_60c = 0; local_60c < local_604; local_60c = local_60c + 1) {
                        *(undefined1 *)(local_5f4 + local_60c) = 0;
                      }
                    }
                  }
                  else {
                    local_5f4 = (*local_88[1])(local_5f8 + *(int *)(local_5fc + 0xc),
                                               *(undefined4 *)(local_5fc + 0x10),0x1000,4);
                    local_620 = *(uint *)(local_5fc + 0x10);
                    local_61c = (int)local_1c + *(int *)(local_5fc + 0x14);
                    local_610 = local_5f4;
                    local_614 = local_61c;
                    for (local_618 = 0; local_618 < local_620; local_618 = local_618 + 1) {
                      *(undefined1 *)(local_5f4 + local_618) =
                           *(undefined1 *)(local_61c + local_618);
                    }
                    *(int *)(local_5fc + 8) = local_5f4;
                  }
                  local_5fc = local_5fc + 0x28;
                }
                local_5d0 = local_5c4 - local_5d4[0xd];
                if (local_5d0 != 0) {
                  local_628 = local_5bc;
                  local_624 = (int *)(local_5b8 + 0xa0);
                  if (*(int *)(local_5b8 + 0xa4) != 0) {
                    for (local_62c = (int *)(local_5bc + *(int *)(local_5b8 + 0xa0));
                        *local_62c != 0; local_62c = (int *)((int)local_62c + local_62c[1])) {
                      iVar9 = *local_62c;
                      local_630 = local_5bc + iVar9;
                      local_634 = (ushort *)(local_62c + 2);
                      for (local_638 = 0; local_638 < local_62c[1] - 8U >> 1;
                          local_638 = local_638 + 1) {
                        local_63c = (int)(uint)*local_634 >> 0xc;
                        local_640 = *local_634 & 0xfff;
                        if ((int)(uint)*local_634 >> 0xc == 3) {
                          local_644 = (int *)(local_5bc + iVar9 + (*local_634 & 0xfff));
                          *local_644 = *local_644 + local_5d0;
                        }
                        local_634 = local_634 + 1;
                      }
                    }
                  }
                }
                local_64c = local_5bc;
                local_648 = (int *)(local_5b8 + 0x80);
                if (*(int *)(local_5b8 + 0x84) != 0) {
                  local_650 = (int *)(local_5bc + *(int *)(local_5b8 + 0x80));
                  while ((iVar9 = (*local_5c)(local_650,0x14), iVar9 == 0 && (local_650[3] != 0))) {
                    local_658 = local_64c + local_650[3];
                    local_660 = (*local_74)(local_658,0,0);
                    if (local_660 == 0) {
                      local_665 = '\0';
                      goto LAB_00bb04fd;
                    }
                    if (0x1f < local_5b4) {
                      local_665 = '\0';
                      goto LAB_00bb04fd;
                    }
                    aiStack_5b0[local_5b4] = local_660;
                    local_5b4 = local_5b4 + 1;
                    if (*local_650 == 0) {
                      iVar9 = local_650[4];
                      iVar4 = local_650[4];
                    }
                    else {
                      iVar9 = *local_650;
                      iVar4 = local_650[4];
                    }
                    local_654 = (int *)(local_64c + iVar4);
                    for (local_65c = (uint *)(local_64c + iVar9); *local_65c != 0;
                        local_65c = local_65c + 1) {
                      if ((*local_65c & 0x80000000) == 0) {
                        local_664 = local_64c + *local_65c;
                        iVar9 = (*local_70)(local_660,local_664 + 2);
                        *local_654 = iVar9;
                      }
                      else {
                        iVar9 = (*local_70)(local_660,*local_65c & 0xffff);
                        *local_654 = iVar9;
                      }
                      if (*local_654 == 0) {
                        local_665 = '\0';
                        goto LAB_00bb04fd;
                      }
                      local_654 = local_654 + 1;
                    }
                    local_650 = local_650 + 5;
                  }
                }
                local_665 = '\x01';
LAB_00bb04fd:
                if (local_665 == '\0') {
                  local_6b8 = (code *)0x0;
                }
                else {
                  local_68c = local_5b8 + 0x18 + (uint)*(ushort *)(local_5b8 + 0x14);
                  local_688[0] = 1;
                  local_688[1] = 8;
                  local_688[2] = 2;
                  local_688[3] = 4;
                  local_688[4] = 0x10;
                  local_688[5] = 0x80;
                  local_688[6] = 0x20;
                  local_688[7] = 0x40;
                  for (local_690 = 0; local_690 < (int)(uint)*(ushort *)(local_5b8 + 6);
                      local_690 = local_690 + 1) {
                    local_698 = (uint)((*(uint *)(local_68c + 0x24) & 0x20000000) != 0);
                    local_6a0 = (uint)((*(uint *)(local_68c + 0x24) & 0x40000000) != 0);
                    local_694 = (uint)((*(uint *)(local_68c + 0x24) & 0x80000000) != 0);
                    if ((*(uint *)(local_68c + 0x24) & 0x2000000) == 0) {
                      local_69c = local_688[local_698 * 4 + local_6a0 * 2 + local_694];
                      if ((*(uint *)(local_68c + 0x24) & 0x4000000) != 0) {
                        local_69c = local_688[local_698 * 4 + local_6a0 * 2 + local_694] | 0x200;
                      }
                      local_6a4 = *(int *)(local_68c + 0x10);
                      if (*(int *)(local_68c + 0x10) == 0) {
                        if ((*(uint *)(local_68c + 0x24) & 0x40) == 0) {
                          if ((*(uint *)(local_68c + 0x24) & 0x80) != 0) {
                            local_6a4 = *(int *)(local_5b8 + 0x24);
                          }
                        }
                        else {
                          local_6a4 = *(int *)(local_5b8 + 0x20);
                        }
                      }
                      if (local_6a4 != 0) {
                        (*local_88[3])(*(undefined4 *)(local_68c + 8),
                                       *(undefined4 *)(local_68c + 0x10),local_69c,local_6a8);
                      }
                    }
                    else {
                      (*local_88[2])(*(undefined4 *)(local_68c + 8),
                                     *(undefined4 *)(local_68c + 0x10),0x4000);
                    }
                    local_68c = local_68c + 0x28;
                  }
                  if (*(int *)(local_5b8 + 0x28) == 0) {
LAB_00bb0766:
                    local_6b8 = (code *)FUN_00baf005(local_5bc,local_104);
                    local_6b4 = *(int *)(local_5cc + 0x1e) + 0xf8;
                    local_6ac = local_530;
                    for (local_6b0 = 0; local_5c8 = local_6b8, local_6b0 < local_6b4;
                        local_6b0 = local_6b0 + 1) {
                      *(undefined1 *)(local_530 + local_6b0) = 0;
                    }
                  }
                  else {
                    local_5dc = (code *)(local_5c4 + *(int *)(local_5b8 + 0x28));
                    if (local_5dc == (code *)0x0) {
                      local_6b8 = (code *)0x0;
                    }
                    else {
                      local_5d8 = (*local_5dc)(local_5c4,1,0);
                      if (local_5d8 != 0) {
                        local_5c0[0] = 1;
                        goto LAB_00bb0766;
                      }
                      local_6b8 = (code *)0x0;
                    }
                  }
                }
              }
            }
            else {
              local_6b8 = (code *)0x0;
            }
          }
          else {
            local_6b8 = (code *)0x0;
          }
          local_40c = local_6b8;
          local_6c4 = local_3c8;
          local_6bc = local_1c;
          for (local_6c0 = 0; local_6c0 < local_3c8; local_6c0 = local_6c0 + 1) {
            *(undefined1 *)((int)local_1c + local_6c0) = 0;
          }
          uVar6 = (*local_58)(0,local_1c);
          (*local_50)(uVar6);
          if (local_40c == (code *)0x0) {
            local_3d4 = 'B';
          }
          else {
            local_448 = (code *)(*local_40c)(local_3e4,local_3e0);
            local_6d0 = local_3e0;
            local_6c8 = local_9c;
            for (local_6cc = 0; local_6cc < local_3e0; local_6cc = local_6cc + 1) {
              *(undefined1 *)((int)local_9c + local_6cc) = 0;
            }
            uVar6 = (*local_58)(0,local_9c);
            (*local_50)(uVar6);
            if ((code *)0xfe < local_448) {
              local_6d4 = &local_408;
              for (local_6d8 = 0; local_6d8 < 0x364; local_6d8 = local_6d8 + 1) {
                *(undefined1 *)((int)local_6d4 + local_6d8) = 0;
              }
              local_6dc = local_88;
              for (local_6e0 = 0; local_6e0 < 0x68; local_6e0 = local_6e0 + 1) {
                *(undefined1 *)((int)local_6dc + local_6e0) = 0;
              }
                    /* WARNING: Could not recover jumptable at 0x00bb097d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*local_448)();
              return;
            }
            local_3d4 = (char)local_448;
          }
        }
        else {
          local_4b4 = (*local_4c)(0x100000,0,local_124);
          local_4a8 = (*local_48)(2,0,local_144);
          if ((local_4b4 == 0) || (local_4a8 == 0)) {
            local_4bd = '5';
          }
          else {
            local_4ac = (*local_30)(local_4b4,5000);
            if (local_4ac == 0) {
              local_4b0 = (*local_44)(local_4a8,2,0,0,0);
              if (local_4b0 == 0) {
                local_4bd = 'H';
              }
              else {
                local_4b8 = local_4b0;
                if (*(int *)(local_4b0 + 0x90) == 2) {
                  if (*(int *)(local_4b0 + 0x94) == 0) {
                    local_4bc = (*local_2c)(0,0,0,0);
                    uVar6 = (*local_38)();
                    *(undefined4 *)(local_4b8 + 0x98) = uVar6;
                    *(undefined4 *)(local_4b8 + 0xa0) = local_3dc;
                    *(uint *)(local_4b8 + 0xa4) = local_3e8;
                    *(uint **)(local_4b8 + 0xac) = local_3e4;
                    *(int *)(local_4b8 + 0xa8) = (int)local_3d4;
                    *(undefined4 *)(local_4b8 + 0x9c) = local_4bc;
                    *(undefined4 *)(local_4b8 + 0x94) = 1;
                    local_4ac = (*local_30)(local_4bc,5000);
                    (*local_40)(local_4b0);
                    (*local_3c)(local_4a8);
                    (*local_3c)(local_4b4);
                    (*local_3c)(local_4bc);
                    if (local_4ac == 0) {
                      local_4bd = '0';
                    }
                    else {
                      local_4bd = 'L';
                    }
                  }
                  else {
                    local_4bd = 'J';
                  }
                }
                else {
                  local_4bd = 'I';
                }
              }
            }
            else {
              local_4bd = 'G';
            }
          }
          local_3d4 = local_4bd;
          if (local_4bd == '0') {
            if (*local_3e4 == local_3e8) goto LAB_00bafb04;
            local_3d4 = 'M';
          }
        }
      }
      else {
        local_3d4 = 'T';
      }
    }
  }
  else {
    local_3d4 = 'E';
  }
  if (local_3d4 != '5') goto LAB_00bb0e79;
  local_cf4[0] = '\0';
  local_bec[0] = '\0';
  iVar9 = (*local_68)(0,local_cf4,0x104);
  if (iVar9 != 0) {
    do {
      if ((&stack0x00000000 == (undefined1 *)0xcf4) || (local_cf4[0] == '\0')) {
        bVar2 = false;
      }
      else {
        for (local_cfc = 0; local_cf4[local_cfc] != '\0'; local_cfc = local_cfc + 1) {
        }
        if (local_cf4[local_cfc + -1] == '\\') {
          local_cfc = local_cfc + -1;
        }
        for (; 0 < local_cfc; local_cfc = local_cfc + -1) {
          if (local_cf4[local_cfc + -1] == '\\') {
            local_cf4[local_cfc] = '\0';
            bVar2 = true;
            goto LAB_00bb0a70;
          }
        }
        bVar2 = false;
      }
LAB_00bb0a70:
      if (!bVar2) goto LAB_00bb0b88;
      local_d08 = local_cf4;
      for (local_d04 = local_bec; *local_d04 != '\0'; local_d04 = local_d04 + 1) {
      }
      for (; *local_d08 != '\0'; local_d08 = local_d08 + 1) {
        *local_d04 = *local_d08;
        local_d04 = local_d04 + 1;
      }
      *local_d04 = '\0';
      local_d10 = local_fc;
      for (local_d0c = local_bec; *local_d0c != '\0'; local_d0c = local_d0c + 1) {
      }
      for (; *local_d10 != '\0'; local_d10 = local_d10 + 1) {
        *local_d0c = *local_d10;
        local_d0c = local_d0c + 1;
      }
      *local_d0c = '\0';
      iVar9 = (*local_24)(local_bec);
      if (iVar9 != -1) goto LAB_00bb0b88;
      local_bec[0] = '\0';
    } while( true );
  }
  bVar2 = false;
LAB_00bb0e67:
  if (bVar2) {
    local_3d4 = '0';
  }
LAB_00bb0e79:
  if ((local_3d4 != '0') && (local_3d4 != 'E')) {
    if (local_3d8 == 0) {
      local_3d8 = (*local_60)();
    }
    iVar9 = (*local_4c)(0x100000,0,local_124);
    iVar4 = (*local_48)(2,0,local_144);
    if ((iVar9 == 0) || (iVar4 == 0)) {
      local_d45 = '5';
    }
    else {
      iVar5 = (*local_30)(iVar9,5000);
      if (iVar5 == 0) {
        iVar5 = (*local_44)(iVar4,2,0,0,0);
        if (iVar5 == 0) {
          local_d45 = 'H';
        }
        else if (*(int *)(iVar5 + 0x90) == 2) {
          if (*(int *)(iVar5 + 0x94) == 0) {
            uVar6 = (*local_2c)(0,0,0,0);
            uVar7 = (*local_38)();
            *(undefined4 *)(iVar5 + 0x98) = uVar7;
            *(undefined4 *)(iVar5 + 0xa0) = local_3dc;
            *(uint *)(iVar5 + 0xa4) = local_3e8;
            *(uint **)(iVar5 + 0xac) = local_3e4;
            *(int *)(iVar5 + 0xa8) = (int)local_3d4;
            *(undefined4 *)(iVar5 + 0x9c) = uVar6;
            *(undefined4 *)(iVar5 + 0x94) = 2;
            iVar8 = (*local_30)(uVar6,5000);
            (*local_40)(iVar5);
            (*local_3c)(iVar4);
            (*local_3c)(iVar9);
            (*local_3c)(uVar6);
            if (iVar8 == 0) {
              local_d45 = '0';
            }
            else {
              local_d45 = 'L';
            }
          }
          else {
            local_d45 = 'J';
          }
        }
        else {
          local_d45 = 'I';
        }
      }
      else {
        local_d45 = 'G';
      }
    }
    if (local_d45 != '0') {
      local_455 = local_3d4;
      local_450 = local_3d8 + 0xff98;
      local_454 = (*local_74)(local_390,0,0);
      local_45c = (code *)(*local_70)(local_454,local_320);
      for (local_d50 = 0; local_d50 < 0x364; local_d50 = local_d50 + 1) {
        *(undefined1 *)((int)&local_408 + local_d50) = 0;
      }
      for (local_d58 = 0; local_d58 < 0x68; local_d58 = local_d58 + 1) {
        *(undefined1 *)((int)local_88 + local_d58) = 0;
      }
      if (local_45c != (code *)0x0) {
        local_440[0x17] = local_455;
        FUN_00baf201(local_450,local_440 + 0x19);
        (*local_45c)(0,local_440,local_98,0x10);
      }
    }
  }
  for (local_d60 = 0; local_d60 < 0x364; local_d60 = local_d60 + 1) {
    *(undefined1 *)((int)&local_408 + local_d60) = 0;
  }
  for (local_d68 = 0; local_d68 < 0x68; local_d68 = local_d68 + 1) {
    *(undefined1 *)((int)local_88 + local_d68) = 0;
  }
  (*local_44c)(0);
  return;
LAB_00bb0b88:
  if (local_bec[0] == '\0') {
    bVar2 = false;
  }
  else {
    local_ae8 = (*local_74)(local_380,0,0);
    local_bf0 = (code *)(*local_70)(local_ae8,local_178);
    if (local_bf0 == (code *)0x0) {
      bVar2 = false;
    }
    else {
      local_ae4[0] = '\0';
      local_d18 = local_b4;
      for (local_d14 = local_ae4; *local_d14 != '\0'; local_d14 = local_d14 + 1) {
      }
      for (; *local_d18 != '\0'; local_d18 = local_d18 + 1) {
        *local_d14 = *local_d18;
        local_d14 = local_d14 + 1;
      }
      *local_d14 = '\0';
      local_d20 = local_3d3;
      for (local_d1c = local_ae4; *local_d1c != '\0'; local_d1c = local_d1c + 1) {
      }
      for (; *local_d20 != '\0'; local_d20 = local_d20 + 1) {
        *local_d1c = *local_d20;
        local_d1c = local_d1c + 1;
      }
      *local_d1c = '\0';
      local_6e4 = (char *)(*local_28)();
      if ((local_6e4 != (char *)0x0) && (*local_6e4 != '\0')) {
        local_cf8 = 0;
        if (*local_6e4 == '\"') {
          for (local_cf8 = 1; (local_6e4[local_cf8] != '\0' && (local_6e4[local_cf8] != '\"'));
              local_cf8 = local_cf8 + 1) {
          }
          if (local_6e4[local_cf8] != '\0') {
            local_cf8 = local_cf8 + 1;
          }
        }
        for (; (local_6e4[local_cf8] != '\0' && (local_6e4[local_cf8] != ' '));
            local_cf8 = local_cf8 + 1) {
        }
        if (local_6e4[local_cf8] == ' ') {
          local_d28 = local_6e4 + local_cf8;
          for (local_d24 = local_ae4; *local_d24 != '\0'; local_d24 = local_d24 + 1) {
          }
          for (; *local_d28 != '\0'; local_d28 = local_d28 + 1) {
            *local_d24 = *local_d28;
            local_d24 = local_d24 + 1;
          }
          *local_d24 = '\0';
        }
      }
      uVar3 = (*local_bf0)(0,0,local_bec,local_ae4,0,1);
      if (uVar3 < 0x21) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
  }
  goto LAB_00bb0e67;
}


