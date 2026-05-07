
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00831910(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d1990;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45940;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45940 != 0) && (iVar10 = iVar2, DAT_00b45940 != 0)) {
    *(int *)(DAT_00b45940 + 0x60) = *(int *)(DAT_00b45940 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(0,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(1,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(2,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar11,3,3,0);
    FUN_00760010(3,iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b453d0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453d0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43ec0 = 0x1802;
  DAT_00b44550 = 0x18;
  if (iVar10 != DAT_00b4594c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4594c;
    if (DAT_00b4594c != 0) {
      *(int *)(DAT_00b4594c + 0x60) = *(int *)(DAT_00b4594c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(0,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(1,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(2,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar11,3,3,0);
    FUN_00760010(3,iVar11);
  }
  puVar4 = DAT_00b453d4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453d4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ecc = 0x41808;
  _DAT_00b4455c = 0x18;
  if (iVar10 != DAT_00b45978) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45978;
    if (DAT_00b45978 != 0) {
      *(int *)(DAT_00b45978 + 0x60) = *(int *)(DAT_00b45978 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(0,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(1,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(2,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar11,3,3,0);
    FUN_00760010(3,iVar11);
  }
  puVar4 = DAT_00b453d8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453d8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43ef8 = 0x3802;
  DAT_00b44588 = 0x38;
  if (iVar10 != DAT_00b45984) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45984;
    if (DAT_00b45984 != 0) {
      *(int *)(DAT_00b45984 + 0x60) = *(int *)(DAT_00b45984 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(0,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(1,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(2,iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar11,3,3,0);
    FUN_00760010(3,iVar11);
  }
  puVar4 = DAT_00b453dc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453dc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f04 = 0x43808;
  _DAT_00b44594 = 0x38;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00832740(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d2f60;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b459f4;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b459f4 != 0) && (iVar10 = iVar2, DAT_00b459f4 != 0)) {
    *(int *)(DAT_00b459f4 + 0x60) = *(int *)(DAT_00b459f4 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_18 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b453e0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43f74 = 0x20082;
  DAT_00b44604 = 0x108;
  if (iVar10 != DAT_00b459f8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459f8;
    if (DAT_00b459f8 != 0) {
      *(int *)(DAT_00b459f8 + 0x60) = *(int *)(DAT_00b459f8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453e0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451dc;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451dc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f78 = 0x20082;
  _DAT_00b44608 = 0x108;
  if (iVar10 != DAT_00b45a00) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a00;
    if (DAT_00b45a00 != 0) {
      *(int *)(DAT_00b45a00 + 0x60) = *(int *)(DAT_00b45a00 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453e4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451d8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451d8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f80 = 0x60088;
  _DAT_00b44610 = 0x108;
  if (iVar10 != DAT_00b45a04) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a04;
    if (DAT_00b45a04 != 0) {
      *(int *)(DAT_00b45a04 + 0x60) = *(int *)(DAT_00b45a04 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453e4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451dc;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451dc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f84 = 0x60088;
  _DAT_00b44614 = 0x108;
  if (iVar10 != DAT_00b45a10) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a10;
    if (DAT_00b45a10 != 0) {
      *(int *)(DAT_00b45a10 + 0x60) = *(int *)(DAT_00b45a10 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453e8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451e0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451e0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43f90 = 0x200f2;
  DAT_00b44620 = 0x108;
  DAT_00b43900 = 0x60;
  if (iVar10 != DAT_00b45a14) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a14;
    if (DAT_00b45a14 != 0) {
      *(int *)(DAT_00b45a14 + 0x60) = *(int *)(DAT_00b45a14 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453e8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453e8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451e4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451e4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f94 = 0x200f2;
  _DAT_00b44624 = 0x108;
  DAT_00b43900 = 0x60;
  if (iVar10 != DAT_00b45a1c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a1c;
    if (DAT_00b45a1c != 0) {
      *(int *)(DAT_00b45a1c + 0x60) = *(int *)(DAT_00b45a1c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  puVar4 = DAT_00b453ec;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453ec) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451e0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451e0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f9c = 0x600f8;
  _DAT_00b4462c = 0x108;
  _DAT_00b4390c = 0x60;
  if (iVar10 != DAT_00b45a20) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a20;
    if (DAT_00b45a20 != 0) {
      *(int *)(DAT_00b45a20 + 0x60) = *(int *)(DAT_00b45a20 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_00760010(5,local_18);
  }
  FUN_007aecb0(DAT_00b453ec);
  FUN_007aec60(DAT_00b451e4);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fa0 = 0x600f8;
  _DAT_00b44630 = 0x108;
  _DAT_00b4390c = 0x60;
  if (iVar10 != DAT_00b45a2c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a2c;
    if (DAT_00b45a2c != 0) {
      *(int *)(DAT_00b45a2c + 0x60) = *(int *)(DAT_00b45a2c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
  }
  FUN_007aecb0(DAT_00b453f0);
  FUN_007aec60(DAT_00b451e8);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43fac = 0x20802;
  DAT_00b4463c = 0x108;
  if (iVar10 != DAT_00b45a30) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a30;
    if (DAT_00b45a30 != 0) {
      *(int *)(DAT_00b45a30 + 0x60) = *(int *)(DAT_00b45a30 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
  }
  FUN_007aecb0(DAT_00b453f0);
  FUN_007aec60(DAT_00b451ec);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fb0 = 0x20802;
  _DAT_00b44640 = 0x108;
  if (iVar10 != DAT_00b45a38) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a38;
    if (DAT_00b45a38 != 0) {
      *(int *)(DAT_00b45a38 + 0x60) = *(int *)(DAT_00b45a38 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
  }
  FUN_007aecb0(DAT_00b453f4);
  FUN_007aec60(DAT_00b451e8);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fb8 = 0x60808;
  _DAT_00b44648 = 0x108;
  if (iVar10 != DAT_00b45a3c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45a3c;
    if (DAT_00b45a3c != 0) {
      *(int *)(DAT_00b45a3c + 0x60) = *(int *)(DAT_00b45a3c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 6) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
  }
  FUN_007aecb0(DAT_00b453f4);
  FUN_007aec60(DAT_00b451ec);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fbc = 0x60808;
  _DAT_00b4464c = 0x108;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar7 = (int *)(local_18 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008357b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d17c0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45bb0;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45bb0 != 0) && (iVar10 = iVar2, DAT_00b45bb0 != 0)) {
    *(int *)(DAT_00b45bb0 + 0x60) = *(int *)(DAT_00b45bb0 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b453f8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453f8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451f0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44130 = 0x20006;
  _DAT_00b447c0 = 0x104;
  if (iVar10 != DAT_00b45bb4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bb4;
    if (DAT_00b45bb4 != 0) {
      *(int *)(DAT_00b45bb4 + 0x60) = *(int *)(DAT_00b45bb4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b453fc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453fc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451f0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44134 = 0x260008;
  _DAT_00b447c4 = 0x104;
  if (iVar10 != DAT_00b45bb8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bb8;
    if (DAT_00b45bb8 != 0) {
      *(int *)(DAT_00b45bb8 + 0x60) = *(int *)(DAT_00b45bb8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b453f8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453f8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451f4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451f4) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44138 = 0x20006;
  _DAT_00b447c8 = 0x104;
  if (iVar10 != DAT_00b45bbc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bbc;
    if (DAT_00b45bbc != 0) {
      *(int *)(DAT_00b45bbc + 0x60) = *(int *)(DAT_00b45bbc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45400;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45400) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451f8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451f8) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b4413c = 0x4020006;
  _DAT_00b447cc = 0x10c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00836230(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d1a70;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45bc8;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45bc8 != 0) && (iVar10 = iVar2, DAT_00b45bc8 != 0)) {
    *(int *)(DAT_00b45bc8 + 0x60) = *(int *)(DAT_00b45bc8 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b45404;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45404) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b451fc;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451fc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44148 = 2;
  _DAT_00b447d8 = 0;
  if (iVar10 != DAT_00b45bcc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bcc;
    if (DAT_00b45bcc != 0) {
      *(int *)(DAT_00b45bcc + 0x60) = *(int *)(DAT_00b45bcc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,3,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45408;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45408) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45200;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45200) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b4414c = 2;
  _DAT_00b447dc = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00836810(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d3138;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b456c0;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b456c0 != 0) && (iVar10 = iVar2, DAT_00b456c0 != 0)) {
    *(int *)(DAT_00b456c0 + 0x60) = *(int *)(DAT_00b456c0 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_18 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b4545c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4545c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b4524c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4524c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c40 = 0x82;
  _DAT_00b442d0 = 0x3c;
  _DAT_00b435b0 = 0x80;
  _DAT_00b44960 = 0xc;
  if (iVar10 != DAT_00b45b58) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b58;
    if (DAT_00b45b58 != 0) {
      *(int *)(DAT_00b45b58 + 0x60) = *(int *)(DAT_00b45b58 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45460;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45460) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45250;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45250) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440d8 = 0x82;
  _DAT_00b44768 = 0x3c;
  _DAT_00b43a48 = 0x80;
  _DAT_00b44df8 = 0xc;
  if (iVar10 != DAT_00b45b78) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b78;
    if (DAT_00b45b78 != 0) {
      *(int *)(DAT_00b45b78 + 0x60) = *(int *)(DAT_00b45b78 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45464;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45464) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45254;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45254) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440f8 = 0x18082;
  _DAT_00b44788 = 0xc;
  _DAT_00b43a68 = 0x80;
  _DAT_00b44e18 = 0xc;
  if (iVar10 != DAT_00b45b54) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b54;
    if (DAT_00b45b54 != 0) {
      *(int *)(DAT_00b45b54 + 0x60) = *(int *)(DAT_00b45b54 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45468;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45468) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45258;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45258) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440d4 = 2;
  _DAT_00b44764 = 0x30;
  if (iVar10 != DAT_00b45b60) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b60;
    if (DAT_00b45b60 != 0) {
      *(int *)(DAT_00b45b60 + 0x60) = *(int *)(DAT_00b45b60 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45468;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45468) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b4525c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4525c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440e0 = 2;
  _DAT_00b44770 = 0x30;
  if (iVar10 != DAT_00b45b40) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b40;
    if (DAT_00b45b40 != 0) {
      *(int *)(DAT_00b45b40 + 0x60) = *(int *)(DAT_00b45b40 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b4546c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4546c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45260;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45260) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440c0 = 0x802;
  _DAT_00b44750 = 8;
  _DAT_00b44de0 = 0;
  if (iVar10 != DAT_00b45b64) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b64;
    if (DAT_00b45b64 != 0) {
      *(int *)(DAT_00b45b64 + 0x60) = *(int *)(DAT_00b45b64 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45470;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45470) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45264;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45264) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440e4 = 0x3802;
  _DAT_00b44774 = 0xbc;
  _DAT_00b44e04 = 0;
  if (iVar10 != DAT_00b456c4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456c4;
    if (DAT_00b456c4 != 0) {
      *(int *)(DAT_00b456c4 + 0x60) = *(int *)(DAT_00b456c4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b4540c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4540c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45204;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45204) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c44 = 0xf2;
  _DAT_00b442d4 = 0x3c;
  _DAT_00b435b4 = 0xe0;
  _DAT_00b44964 = 0xc;
  if (iVar10 != DAT_00b45b5c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b5c;
    if (DAT_00b45b5c != 0) {
      *(int *)(DAT_00b45b5c + 0x60) = *(int *)(DAT_00b45b5c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45410;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45410) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45208;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45208) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440dc = 0xf2;
  _DAT_00b4476c = 0x3c;
  _DAT_00b43a4c = 0xe0;
  _DAT_00b44dfc = 0xc;
  if (iVar10 != DAT_00b45b44) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b44;
    if (DAT_00b45b44 != 0) {
      *(int *)(DAT_00b45b44 + 0x60) = *(int *)(DAT_00b45b44 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 3) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45414;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45414) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b4520c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4520c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440c4 = 0x3802;
  _DAT_00b44754 = 0x3c;
  _DAT_00b44de4 = 4;
  if (iVar10 != DAT_00b45b48) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b48;
    if (DAT_00b45b48 != 0) {
      *(int *)(DAT_00b45b48 + 0x60) = *(int *)(DAT_00b45b48 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45418);
  FUN_007aec60(DAT_00b45210);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440c8 = 0x20082;
  _DAT_00b44758 = 0x108;
  _DAT_00b43a38 = 0x80;
  _DAT_00b44de8 = 8;
  if (iVar10 != DAT_00b45b50) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b50;
    if (DAT_00b45b50 != 0) {
      *(int *)(DAT_00b45b50 + 0x60) = *(int *)(DAT_00b45b50 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4541c);
  FUN_007aec60(DAT_00b45214);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440d0 = 0x20802;
  _DAT_00b44760 = 0x108;
  if (iVar10 != DAT_00b45b68) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b68;
    if (DAT_00b45b68 != 0) {
      *(int *)(DAT_00b45b68 + 0x60) = *(int *)(DAT_00b45b68 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45420);
  FUN_007aec60(DAT_00b45218);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440e8 = 0x3802;
  _DAT_00b44778 = 0xbc;
  _DAT_00b44e08 = 0;
  if (iVar10 != DAT_00b45b6c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b6c;
    if (DAT_00b45b6c != 0) {
      *(int *)(DAT_00b45b6c + 0x60) = *(int *)(DAT_00b45b6c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45424);
  FUN_007aec60(DAT_00b4521c);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440ec = 0x20082;
  _DAT_00b4477c = 0x138;
  _DAT_00b43a5c = 0x80;
  _DAT_00b44e0c = 8;
  if (iVar10 != DAT_00b45b70) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b70;
    if (DAT_00b45b70 != 0) {
      *(int *)(DAT_00b45b70 + 0x60) = *(int *)(DAT_00b45b70 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45428);
  FUN_007aec60(DAT_00b45220);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440f0 = 0x20802;
  _DAT_00b44780 = 0x138;
  if (iVar10 != DAT_00b45b4c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b4c;
    if (DAT_00b45b4c != 0) {
      *(int *)(DAT_00b45b4c + 0x60) = *(int *)(DAT_00b45b4c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4542c);
  FUN_007aec60(DAT_00b45224);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440cc = 0x200f2;
  _DAT_00b4475c = 0x138;
  _DAT_00b43a3c = 0xe0;
  _DAT_00b44dec = 8;
  if (iVar10 != DAT_00b45b74) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b74;
    if (DAT_00b45b74 != 0) {
      *(int *)(DAT_00b45b74 + 0x60) = *(int *)(DAT_00b45b74 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45430);
  FUN_007aec60(DAT_00b45228);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x19,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x18,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440f4 = 0x200f2;
  _DAT_00b44784 = 0x138;
  _DAT_00b43a64 = 0xe0;
  _DAT_00b44e14 = 8;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar7 = (int *)(local_18 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00839a50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d1a70;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45bd8;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45bd8 != 0) && (iVar10 = iVar2, DAT_00b45bd8 != 0)) {
    *(int *)(DAT_00b45bd8 + 0x60) = *(int *)(DAT_00b45bd8 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar11 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b45480;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45480) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45270;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45270) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b44158 = 0;
  _DAT_00b447e8 = 0;
  if (iVar10 != DAT_00b45bdc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bdc;
    if (DAT_00b45bdc != 0) {
      *(int *)(DAT_00b45bdc + 0x60) = *(int *)(DAT_00b45bdc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar11 != *piVar7) {
      if (iVar11 != 0) {
        piVar1 = (int *)(iVar11 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar11 = *piVar7;
      if (iVar11 != 0) {
        *(int *)(iVar11 + 0x5c) = *(int *)(iVar11 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45484;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45484) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45270;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45270) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b4415c = 0;
  _DAT_00b447ec = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar11 != 0) {
    piVar7 = (int *)(iVar11 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00839f90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint3 uVar5;
  uint uVar6;
  int *piVar7;
  LONG LVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d3188;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45b20;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45b20 != 0) && (iVar10 = iVar2, DAT_00b45b20 != 0)) {
    *(int *)(DAT_00b45b20 + 0x60) = *(int *)(DAT_00b45b20 + 0x60) + 1;
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_18 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b45448;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45448) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45240;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45240) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440a0 = 0x400002;
  _DAT_00b44730 = 0x20000;
  if (iVar10 != DAT_00b45b24) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b24;
    if (DAT_00b45b24 != 0) {
      *(int *)(DAT_00b45b24 + 0x60) = *(int *)(DAT_00b45b24 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b4544c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4544c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45240;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45240) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440a4 = 0x840008;
  _DAT_00b44734 = 0x20000;
  if (iVar10 != DAT_00b45b28) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b28;
    if (DAT_00b45b28 != 0) {
      *(int *)(DAT_00b45b28 + 0x60) = *(int *)(DAT_00b45b28 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_18 != *piVar7) {
      if (local_18 != 0) {
        piVar1 = (int *)(local_18 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_18 = *piVar7;
      if (local_18 != 0) {
        *(int *)(local_18 + 0x5c) = *(int *)(local_18 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45450;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45450) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45244;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45244) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440a8 = 0x1420002;
  _DAT_00b44738 = 0x20000;
  if (iVar10 != DAT_00b45b2c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b2c;
    if (DAT_00b45b2c != 0) {
      *(int *)(DAT_00b45b2c + 0x60) = *(int *)(DAT_00b45b2c + 0x60) + 1;
    }
  }
  puVar4 = DAT_00b45454;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45454) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45248;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45248) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440ac = 2;
  _DAT_00b4473c = 0;
  if (iVar10 != DAT_00b45b30) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45b30;
    if (DAT_00b45b30 != 0) {
      *(int *)(DAT_00b45b30 + 0x60) = *(int *)(DAT_00b45b30 + 0x60) + 1;
    }
  }
  puVar4 = DAT_00b45458;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45458) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45248;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45248) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b440b0 = 0x40008;
  _DAT_00b44740 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar7 = (int *)(local_18 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar10 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083a7e0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  LONG LVar6;
  undefined4 uVar7;
  int iVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d31c0;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b45b34;
  local_4 = 1;
  iVar8 = 0;
  if ((DAT_00b45b34 != 0) && (iVar8 = iVar4, DAT_00b45b34 != 0)) {
    *(int *)(DAT_00b45b34 + 0x60) = *(int *)(DAT_00b45b34 + 0x60) + 1;
  }
  puVar3 = DAT_00b45474;
  puVar2 = *(undefined4 **)(iVar8 + 0x58);
  if (puVar2 != DAT_00b45474) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = DAT_00b45268;
  puVar2 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar2 != DAT_00b45268) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0(uVar5);
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0(uVar5);
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xe,1,0);
  _DAT_00b440b4 = 0x400002;
  _DAT_00b44744 = 0;
  if (iVar8 != DAT_00b45b38) {
    piVar1 = (int *)(iVar8 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    iVar8 = DAT_00b45b38;
    if (DAT_00b45b38 != 0) {
      *(int *)(DAT_00b45b38 + 0x60) = *(int *)(DAT_00b45b38 + 0x60) + 1;
    }
  }
  puVar3 = DAT_00b45478;
  puVar2 = *(undefined4 **)(iVar8 + 0x58);
  if (puVar2 != DAT_00b45478) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = DAT_00b45268;
  puVar2 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar2 != DAT_00b45268) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xe,1,0);
  _DAT_00b440b8 = 0x840008;
  _DAT_00b44748 = 0;
  if (iVar8 != DAT_00b45b3c) {
    piVar1 = (int *)(iVar8 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    iVar8 = DAT_00b45b3c;
    if (DAT_00b45b3c != 0) {
      *(int *)(DAT_00b45b3c + 0x60) = *(int *)(DAT_00b45b3c + 0x60) + 1;
    }
  }
  puVar3 = DAT_00b4547c;
  puVar2 = *(undefined4 **)(iVar8 + 0x58);
  if (puVar2 != DAT_00b4547c) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = DAT_00b4526c;
  puVar2 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar2 != DAT_00b4526c) {
    if (puVar2 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar2 + 1);
      if ((LVar6 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
    }
    *(undefined4 **)(iVar8 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x17,8,0);
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0xe,1,0);
  _DAT_00b440bc = 2;
  _DAT_00b4474c = 0;
  piVar1 = (int *)(iVar8 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0083abe0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = DAT_00b25ad0;
  if (*(int *)(*(int *)(param_1 + 0xb4) + 0x24) != 0) {
    uVar3 = 0x3f800000;
  }
  uVar2 = DAT_00b25ad4;
  if (param_2 != 0) {
    uVar2 = 0x3f800000;
  }
  if (param_3 == 0) {
    uVar1 = 0x41f00000;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + 0x4c);
  }
  FUN_007ecae0(0x1f,uVar3,uVar2,uVar1,DAT_00b25adc);
  return;
}



void FUN_0083ac70(undefined4 param_1)

{
  short sVar1;
  
  FUN_00849020(param_1);
  sVar1 = (short)param_1;
  if ((ushort)(sVar1 - 0x18aU) < 2) {
    if (1 < DAT_00b42f48) {
      *(undefined1 *)(DAT_00b44f8c + 8) = 1;
      *(undefined1 *)(DAT_00b45084 + 8) = 1;
      *(undefined1 *)(DAT_00b44f88 + 8) = 1;
    }
    *(undefined1 *)(DAT_00b45060 + 8) = 1;
    *(undefined1 *)(DAT_00b45550 + 8) = 1;
  }
  else if (1 < DAT_00b42f48) {
    *(undefined1 *)(DAT_00b44f8c + 8) = 0;
    *(undefined1 *)(DAT_00b45084 + 8) = 0;
    *(undefined1 *)(DAT_00b44f88 + 8) = 0;
    *(undefined1 *)(DAT_00b45060 + 8) = 0;
    *(undefined1 *)(DAT_00b45550 + 8) = 0;
  }
  if ((sVar1 == 0xe0) || (sVar1 == 0xe1)) {
    *(undefined1 *)(DAT_00b45554 + 8) = 1;
  }
  else {
    *(undefined1 *)(DAT_00b45554 + 8) = 0;
  }
  if (DAT_00b45538 != 0) {
    *(undefined1 *)(DAT_00b45538 + 8) = 0;
  }
  return;
}



void FUN_0083ad30(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45778;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083aeb0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  float *unaff_FS_OFFSET;
  undefined4 unaff_retaddr;
  float fStack_1c;
  float local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d31e8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (float)&local_c;
  iVar5 = DAT_00b4577c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  puStack_4 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puStack_4) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  FUN_00848fa0(iVar3,unaff_retaddr);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  puStack_4 = (undefined4 *)iVar3;
  puVar8 = (undefined4 *)FUN_00848fd0(unaff_retaddr,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)((int)puStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b430e8;
  if (puVar4 != DAT_00b430e8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  FUN_00848fa0(iVar3,unaff_retaddr);
  _DAT_00b4617c = 0.0 - *(float *)((int)local_c + 0x88);
  local_c = 0.0 - *(float *)((int)local_c + 0x8c);
  _DAT_00b46184 = 0x46400000;
  _DAT_00b46188 = 0x46400000;
  _DAT_00b46180 = local_c;
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = fStack_1c;
  return;
}



void FUN_0083b0f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45780;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083b2e0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45790;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083b4f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45794;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083b670(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45798;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083b860(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457ac;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083ba70(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45b8c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083bbf0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b457b0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083be10(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b457b4;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b430e8;
  if (puVar4 != DAT_00b430e8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083bfe0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457b8;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083c270(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457c8;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083c520(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b457cc;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083c740(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457d0;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083c9d0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457e4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083cc80(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b457e8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083ce00(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457ec;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083cff0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b457fc;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083d200(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45800;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083d380(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45804;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083d570(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45818;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083d780(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4581c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083d9a0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45820;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083dc30(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45830;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083dee0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b45834;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083e100(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45838;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083e390(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b4584c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083e640(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45850;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083e7c0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45854;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083e9b0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45858;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083ebc0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b45868;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = **(int **)(iVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(iVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  *(int *)(iVar5 + 0x60) = *(int *)(iVar5 + 0x60) + 1;
  iStack_4 = iVar5;
  FUN_0076ce40(in_ECX[0xe],&iStack_4);
  piVar1 = (int *)(iVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083ed40(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b4586c;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083ef30(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45870;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = **(int **)(puVar5 + 0x24);
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(puStack_8 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083f140(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b45884;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083f360(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b45888;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083f5f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b4588c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



void FUN_0083f8a0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined1 *puStack_8;
  undefined4 *puStack_4;
  
  puStack_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4589c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar6);
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  puVar4 = *(undefined4 **)(puVar5[9] + 4);
  puStack_4 = puVar4;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = (undefined4 *)puVar4[1];
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_4[1] = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(puStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_4 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_4;
    if (puStack_4 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_4 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_4 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_4);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0083fac0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458a0;
  FUN_00848da0(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0083fd50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int *in_ECX;
  uint *unaff_FS_OFFSET;
  undefined4 *local_c;
  undefined4 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = (undefined4 *)&LAB_009d3218;
  local_c = (undefined4 *)*unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (uint)&local_c;
  puVar5 = DAT_00b458a4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  _DAT_00b46628 = param_1[0x2a];
  _DAT_00b4662c = param_1[0x2b];
  _DAT_00b46630 = param_1[0x2c];
  _DAT_00b46634 = param_1[0x2d];
  iVar3 = *(int *)puVar5[9];
  local_c = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 4);
  iStack_4 = iVar3;
  local_c = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != local_c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = local_c;
    if (local_c != (undefined4 *)0x0) {
      InterlockedIncrement(local_c + 1);
    }
  }
  FUN_00848fa0(iStack_4,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x10);
  iStack_4 = iVar3;
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(1);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    puStack_8[1] = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  FUN_00848fa0(puStack_8,param_1);
  iVar3 = *(int *)(puVar5[9] + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43108;
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  iVar3 = *(int *)(puVar5[9] + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b4310c;
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar4 + 1), LVar7 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puStack_8;
    if (puStack_8 != (undefined4 *)0x0) {
      InterlockedIncrement(puStack_8 + 1);
    }
  }
  puVar5[0x18] = puVar5[0x18] + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(in_ECX[0xe],&puStack_8);
  piVar1 = puVar5 + 0x18;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = uVar6;
  return;
}


