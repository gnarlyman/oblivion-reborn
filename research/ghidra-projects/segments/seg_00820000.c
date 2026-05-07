
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008203d0(void)

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
  iVar2 = DAT_00b45bd0;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45bd0 != 0) && (iVar10 = iVar2, DAT_00b45bd0 != 0)) {
    *(int *)(DAT_00b45bd0 + 0x60) = *(int *)(DAT_00b45bd0 + 0x60) + 1;
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
  puVar4 = DAT_00b45308;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45308) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45140;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45140) {
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
  _DAT_00b44150 = 0;
  _DAT_00b447e0 = 0;
  if (iVar10 != DAT_00b45bd4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bd4;
    if (DAT_00b45bd4 != 0) {
      *(int *)(DAT_00b45bd4 + 0x60) = *(int *)(DAT_00b45bd4 + 0x60) + 1;
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
  puVar4 = DAT_00b45360;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45360) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar3 + 1), LVar8 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45140;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45140) {
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
  _DAT_00b44154 = 0;
  _DAT_00b447e4 = 0;
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

void FUN_00820910(void)

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
  iVar4 = DAT_00b455a0;
  local_4 = 1;
  iVar8 = 0;
  if ((DAT_00b455a0 != 0) && (iVar8 = iVar4, DAT_00b455a0 != 0)) {
    *(int *)(DAT_00b455a0 + 0x60) = *(int *)(DAT_00b455a0 + 0x60) + 1;
  }
  puVar3 = DAT_00b45290;
  puVar2 = *(undefined4 **)(iVar8 + 0x58);
  if (puVar2 != DAT_00b45290) {
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
  puVar3 = DAT_00b45088;
  puVar2 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar2 != DAT_00b45088) {
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
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b20 = 2;
  _DAT_00b441b0 = 0;
  if (iVar8 != DAT_00b455a8) {
    piVar1 = (int *)(iVar8 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
    iVar8 = DAT_00b455a8;
    if (DAT_00b455a8 != 0) {
      *(int *)(DAT_00b455a8 + 0x60) = *(int *)(DAT_00b455a8 + 0x60) + 1;
    }
  }
  puVar3 = DAT_00b4530c;
  puVar2 = *(undefined4 **)(iVar8 + 0x58);
  if (puVar2 != DAT_00b4530c) {
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
  puVar3 = DAT_00b45088;
  puVar2 = *(undefined4 **)(iVar8 + 0x44);
  if (puVar2 != DAT_00b45088) {
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
  if (*(int *)(iVar8 + 0x30) == 0) {
    uVar7 = FUN_00772df0();
    *(undefined4 *)(iVar8 + 0x30) = uVar7;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b28 = 0x40008;
  _DAT_00b441b8 = 0;
  piVar1 = (int *)(iVar8 + 0x60);
  *piVar1 = *piVar1 + -1;
  local_4 = 0xffffffff;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}


/*
Unable to decompile 'FUN_00820c00'
Cause: Exception while decompiling 00820c00: process: timeout

*/


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00828280(void)

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
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d2940;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((DAT_00b45850 != 0) && (local_14 = DAT_00b45850, DAT_00b45850 != 0)) {
    *(int *)(DAT_00b45850 + 0x60) = *(int *)(DAT_00b45850 + 0x60) + 1;
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
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
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,3,1,2);
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
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
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
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b45390;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b45390) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45180;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b45180) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43dd0 = 0x38082;
  DAT_00b44460 = 0x10c;
  DAT_00b43740 = 0x18000;
  DAT_00b44af0 = 8;
  if (local_14 != DAT_00b45854) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45854;
    if (DAT_00b45854 != 0) {
      *(int *)(DAT_00b45854 + 0x60) = *(int *)(DAT_00b45854 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
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
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  puVar4 = DAT_00b45390;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b45390) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45184;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b45184) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dd4 = 0x38082;
  _DAT_00b44464 = 0x18c;
  _DAT_00b43744 = 0x18000;
  _DAT_00b44af4 = 0xc;
  if (local_14 != DAT_00b45858) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45858;
    if (DAT_00b45858 != 0) {
      *(int *)(DAT_00b45858 + 0x60) = *(int *)(DAT_00b45858 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,1,2);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
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
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  puVar4 = DAT_00b45390;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b45390) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45188;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b45188) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_14 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dd8 = 0x38082;
  _DAT_00b44468 = 0x18c;
  _DAT_00b43748 = 0x18000;
  _DAT_00b44af8 = 0xc;
  if (local_14 != DAT_00b45868) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45868;
    if (DAT_00b45868 != 0) {
      *(int *)(DAT_00b45868 + 0x60) = *(int *)(DAT_00b45868 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
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
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,3,1,2);
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
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45394);
  FUN_007aec60(DAT_00b45180);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43de8 = 0x78088;
  _DAT_00b44478 = 0x10c;
  _DAT_00b43758 = 0x18000;
  _DAT_00b44b08 = 8;
  if (local_14 != DAT_00b4586c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4586c;
    if (DAT_00b4586c != 0) {
      *(int *)(DAT_00b4586c + 0x60) = *(int *)(DAT_00b4586c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
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
    local_4._0_1_ = 0x24;
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
    local_4._0_1_ = 0x25;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
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
    local_4._0_1_ = 0x27;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45394);
  FUN_007aec60(DAT_00b45184);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dec = 0x78088;
  _DAT_00b4447c = 0x18c;
  _DAT_00b4375c = 0x18000;
  _DAT_00b44b0c = 0xc;
  if (local_14 != DAT_00b45870) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45870;
    if (DAT_00b45870 != 0) {
      *(int *)(DAT_00b45870 + 0x60) = *(int *)(DAT_00b45870 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
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
    local_4._0_1_ = 0x2c;
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
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
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
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45394);
  FUN_007aec60(DAT_00b45188);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43df0 = 0x78088;
  _DAT_00b44480 = 0x18c;
  _DAT_00b43760 = 0x18000;
  _DAT_00b44b10 = 0xc;
  if (local_14 != DAT_00b45884) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45884;
    if (DAT_00b45884 != 0) {
      *(int *)(DAT_00b45884 + 0x60) = *(int *)(DAT_00b45884 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
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
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,3,1,2);
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
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45398);
  FUN_007aec60(DAT_00b4518c);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43e04 = 0x380f2;
  DAT_00b44494 = 0x10c;
  DAT_00b43774 = 0x18060;
  DAT_00b44b24 = 8;
  if (local_14 != DAT_00b45888) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45888;
    if (DAT_00b45888 != 0) {
      *(int *)(DAT_00b45888 + 0x60) = *(int *)(DAT_00b45888 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
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
    local_4._0_1_ = 0x3c;
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
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
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
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45398);
  FUN_007aec60(DAT_00b45190);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e08 = 0x380f2;
  _DAT_00b44498 = 0x18c;
  _DAT_00b43778 = 0x18060;
  _DAT_00b44b28 = 0xc;
  if (local_14 != DAT_00b4588c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4588c;
    if (DAT_00b4588c != 0) {
      *(int *)(DAT_00b4588c + 0x60) = *(int *)(DAT_00b4588c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
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
    local_4._0_1_ = 0x44;
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
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
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
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45398);
  FUN_007aec60(DAT_00b45194);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e0c = 0x380f2;
  _DAT_00b4449c = 0x18c;
  _DAT_00b4377c = 0x18060;
  _DAT_00b44b2c = 0xc;
  if (local_14 != DAT_00b4589c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4589c;
    if (DAT_00b4589c != 0) {
      *(int *)(DAT_00b4589c + 0x60) = *(int *)(DAT_00b4589c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
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
    local_4._0_1_ = 0x4c;
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
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
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
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b4539c);
  FUN_007aec60(DAT_00b4518c);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e1c = 0x780f8;
  _DAT_00b444ac = 0x10c;
  _DAT_00b4378c = 0x18060;
  _DAT_00b44b3c = 8;
  if (local_14 != DAT_00b458a0) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b458a0;
    if (DAT_00b458a0 != 0) {
      *(int *)(DAT_00b458a0 + 0x60) = *(int *)(DAT_00b458a0 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
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
    local_4._0_1_ = 0x54;
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
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
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
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b4539c);
  FUN_007aec60(DAT_00b45190);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e20 = 0x780f8;
  _DAT_00b444b0 = 0x18c;
  _DAT_00b43790 = 0x18060;
  _DAT_00b44b40 = 0xc;
  if (local_14 != DAT_00b458a4) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b458a4;
    if (DAT_00b458a4 != 0) {
      *(int *)(DAT_00b458a4 + 0x60) = *(int *)(DAT_00b458a4 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
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
    local_4._0_1_ = 0x5c;
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
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
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
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b4539c);
  FUN_007aec60(DAT_00b45194);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e24 = 0x780f8;
  _DAT_00b444b4 = 0x18c;
  _DAT_00b43794 = 0x18060;
  _DAT_00b44b44 = 0xc;
  if (local_14 != DAT_00b458b8) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b458b8;
    if (DAT_00b458b8 != 0) {
      *(int *)(DAT_00b458b8 + 0x60) = *(int *)(DAT_00b458b8 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
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
    local_4._0_1_ = 100;
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
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
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
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a0);
  FUN_007aec60(DAT_00b45198);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43e38 = 0x39082;
  DAT_00b444c8 = 0x11c;
  DAT_00b437a8 = 0x18000;
  DAT_00b44b58 = 8;
  FUN_0076c890(&DAT_00b458bc);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
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
    local_4._0_1_ = 0x6c;
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
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
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
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a0);
  FUN_007aec60(DAT_00b4519c);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e3c = 0x39082;
  _DAT_00b444cc = 0x19c;
  _DAT_00b437ac = 0x18000;
  _DAT_00b44b5c = 0xc;
  FUN_0076c890(&DAT_00b458c0);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x72;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x73;
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
    local_4._0_1_ = 0x74;
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
    local_4._0_1_ = 0x75;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x76;
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
    local_4._0_1_ = 0x77;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x78;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x79;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a0);
  FUN_007aec60(DAT_00b451a0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e40 = 0x39082;
  _DAT_00b444d0 = 0x19c;
  _DAT_00b437b0 = 0x18000;
  _DAT_00b44b60 = 0xc;
  FUN_0076c890(&DAT_00b458d0);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7b;
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
    local_4._0_1_ = 0x7c;
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
    local_4._0_1_ = 0x7d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7e;
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
    local_4._0_1_ = 0x7f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x80;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x81;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a4);
  FUN_007aec60(DAT_00b45198);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b444e0 = 0x11c;
  _DAT_00b43e50 = 0x79088;
  _DAT_00b437c0 = 0x18000;
  _DAT_00b44b70 = 8;
  FUN_0076c890(&DAT_00b458d4);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x82;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x83;
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
    local_4._0_1_ = 0x84;
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
    local_4._0_1_ = 0x85;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x86;
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
    local_4._0_1_ = 0x87;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x88;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x89;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a4);
  FUN_007aec60(DAT_00b4519c);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e54 = 0x79088;
  _DAT_00b444e4 = 0x19c;
  _DAT_00b437c4 = 0x18000;
  _DAT_00b44b74 = 0xc;
  FUN_0076c890(&DAT_00b458d8);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x8a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x8b;
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
    local_4._0_1_ = 0x8c;
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
    local_4._0_1_ = 0x8d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x8e;
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
    local_4._0_1_ = 0x8f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x90;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x91;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b453a4);
  FUN_007aec60(DAT_00b451a0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43e58 = 0x79088;
  _DAT_00b444e8 = 0x19c;
  _DAT_00b437c8 = 0x18000;
  _DAT_00b44b78 = 0xc;
  FUN_0076c890(&DAT_00b45b7c);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x92;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x93;
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
    local_4._0_1_ = 0x94;
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
    local_4._0_1_ = 0x95;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x96;
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
    local_4._0_1_ = 0x97;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x98;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45488);
  FUN_007aec60(DAT_00b45274);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x98,0x3f,1);
  DAT_00b440fc = 0x8806;
  DAT_00b4478c = 8;
  DAT_00b43a6c = 0x8000;
  FUN_0076c890(&DAT_00b45b80);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x9a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x9b;
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
    local_4._0_1_ = 0x9c;
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
    local_4._0_1_ = 0x9d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x9e;
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
    local_4._0_1_ = 0x9f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa0;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa1;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b4548c);
  FUN_007aec60(DAT_00b45274);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x98,0x3f,1);
  _DAT_00b44100 = 0x4880c;
  _DAT_00b44790 = 8;
  _DAT_00b43a70 = 0x8000;
  FUN_0076c890(&DAT_00b45b84);
  if (*(uint *)(local_14 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa2;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa3;
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
    local_4._0_1_ = 0xa4;
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
    local_4._0_1_ = 0xa5;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa6;
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
    local_4._0_1_ = 0xa7;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa8;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,1,2);
    FUN_00760010(6,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0xa9;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,7,3,0);
    FUN_00760010(7,local_18);
  }
  FUN_007aecb0(DAT_00b45490);
  FUN_007aec60(DAT_00b45274);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x98,0x3f,1);
  _DAT_00b44104 = 0x8806;
  _DAT_00b44794 = 8;
  _DAT_00b43a74 = 0x8000;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_18 != 0) {
    piVar7 = (int *)(local_18 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(local_14 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0082d990(void)

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
  
  puStack_8 = &LAB_009d2cf0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b456c8;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b456c8 != 0) && (iVar10 = iVar2, DAT_00b456c8 != 0)) {
    *(int *)(DAT_00b456c8 + 0x60) = *(int *)(DAT_00b456c8 + 0x60) + 1;
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,3,1,2);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b453b0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453b0) {
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
  puVar4 = DAT_00b451b0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451b0) {
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
  DAT_00b43c48 = 0x21082;
  DAT_00b442d8 = 0x1c;
  DAT_00b44968 = 8;
  if (iVar10 != DAT_00b456cc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456cc;
    if (DAT_00b456cc != 0) {
      *(int *)(DAT_00b456cc + 0x60) = *(int *)(DAT_00b456cc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00760010(0,local_18);
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
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  puVar4 = DAT_00b453b0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453b0) {
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
  puVar4 = DAT_00b451b4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451b4) {
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
  _DAT_00b43c4c = 0x21082;
  _DAT_00b442dc = 0x9c;
  _DAT_00b4496c = 0xc;
  if (iVar10 != DAT_00b456dc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456dc;
    if (DAT_00b456dc != 0) {
      *(int *)(DAT_00b456dc + 0x60) = *(int *)(DAT_00b456dc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  puVar4 = DAT_00b453b4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453b4) {
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
  puVar4 = DAT_00b451b0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451b0) {
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
  _DAT_00b43c5c = 0x61088;
  _DAT_00b442ec = 0x1c;
  _DAT_00b4497c = 8;
  if (iVar10 != DAT_00b456e4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456e4;
    if (DAT_00b456e4 != 0) {
      *(int *)(DAT_00b456e4 + 0x60) = *(int *)(DAT_00b456e4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  puVar4 = DAT_00b453b4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453b4) {
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
  puVar4 = DAT_00b451b4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451b4) {
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
  _DAT_00b43c64 = 0x61088;
  _DAT_00b442f4 = 0x9c;
  _DAT_00b44984 = 0xc;
  if (iVar10 != DAT_00b456f4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456f4;
    if (DAT_00b456f4 != 0) {
      *(int *)(DAT_00b456f4 + 0x60) = *(int *)(DAT_00b456f4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  puVar4 = DAT_00b453b8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b453b8) {
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
  puVar4 = DAT_00b451b8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b451b8) {
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
  DAT_00b43c74 = 0x210f2;
  DAT_00b44304 = 0x1c;
  DAT_00b435e4 = 0x60;
  DAT_00b44994 = 8;
  if (iVar10 != DAT_00b456f8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b456f8;
    if (DAT_00b456f8 != 0) {
      *(int *)(DAT_00b456f8 + 0x60) = *(int *)(DAT_00b456f8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(1,local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(2,local_18);
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
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
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
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
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
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
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
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453b8);
  FUN_007aec60(DAT_00b451bc);
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
  _DAT_00b43c78 = 0x210f2;
  _DAT_00b44308 = 0x9c;
  _DAT_00b435e8 = 0x60;
  _DAT_00b44998 = 0xc;
  if (iVar10 != DAT_00b45708) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45708;
    if (DAT_00b45708 != 0) {
      *(int *)(DAT_00b45708 + 0x60) = *(int *)(DAT_00b45708 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00760010(0,local_18);
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
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
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
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453bc);
  FUN_007aec60(DAT_00b451b8);
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
  _DAT_00b43c88 = 0x610f8;
  _DAT_00b44308 = 0x1c;
  _DAT_00b435e8 = 0x60;
  _DAT_00b44998 = 8;
  if (iVar10 != DAT_00b45710) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45710;
    if (DAT_00b45710 != 0) {
      *(int *)(DAT_00b45710 + 0x60) = *(int *)(DAT_00b45710 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
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
    FUN_00760010(0,local_18);
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
    FUN_00760010(1,local_18);
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
    FUN_00760010(2,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453bc);
  FUN_007aec60(DAT_00b451bc);
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
  _DAT_00b43c90 = 0x610f8;
  _DAT_00b44320 = 0x9c;
  _DAT_00b43600 = 0x60;
  _DAT_00b449b0 = 0xc;
  if (iVar10 != DAT_00b45720) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45720;
    if (DAT_00b45720 != 0) {
      *(int *)(DAT_00b45720 + 0x60) = *(int *)(DAT_00b45720 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
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
    local_4._0_1_ = 0x3c;
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
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c0);
  FUN_007aec60(DAT_00b451c0);
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
  DAT_00b43ca0 = 0x23082;
  DAT_00b44330 = 0x3c;
  DAT_00b449c0 = 8;
  if (iVar10 != DAT_00b45724) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45724;
    if (DAT_00b45724 != 0) {
      *(int *)(DAT_00b45724 + 0x60) = *(int *)(DAT_00b45724 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
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
    local_4._0_1_ = 0x43;
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
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c0);
  FUN_007aec60(DAT_00b451c4);
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
  _DAT_00b43ca4 = 0x23082;
  _DAT_00b44334 = 0xbc;
  _DAT_00b449c4 = 0xc;
  if (iVar10 != DAT_00b45734) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45734;
    if (DAT_00b45734 != 0) {
      *(int *)(DAT_00b45734 + 0x60) = *(int *)(DAT_00b45734 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
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
    local_4._0_1_ = 0x4a;
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
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c4);
  FUN_007aec60(DAT_00b451c0);
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
  _DAT_00b43cb4 = 0x63088;
  _DAT_00b44344 = 0x3c;
  _DAT_00b449d4 = 8;
  if (iVar10 != DAT_00b4573c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4573c;
    if (DAT_00b4573c != 0) {
      *(int *)(DAT_00b4573c + 0x60) = *(int *)(DAT_00b4573c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
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
    local_4._0_1_ = 0x51;
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
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c4);
  FUN_007aec60(DAT_00b451c4);
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
  _DAT_00b43cbc = 0x63088;
  _DAT_00b4434c = 0xbc;
  _DAT_00b449dc = 0xc;
  if (iVar10 != DAT_00b4574c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4574c;
    if (DAT_00b4574c != 0) {
      *(int *)(DAT_00b4574c + 0x60) = *(int *)(DAT_00b4574c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
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
    local_4._0_1_ = 0x58;
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
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c8);
  FUN_007aec60(DAT_00b451c8);
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
  DAT_00b43ccc = 0x230f2;
  DAT_00b4435c = 0x3c;
  DAT_00b4363c = 0x60;
  DAT_00b449ec = 8;
  if (iVar10 != DAT_00b45750) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45750;
    if (DAT_00b45750 != 0) {
      *(int *)(DAT_00b45750 + 0x60) = *(int *)(DAT_00b45750 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
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
    local_4._0_1_ = 0x5f;
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
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453c8);
  FUN_007aec60(DAT_00b451cc);
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
  _DAT_00b43cd0 = 0x230f2;
  _DAT_00b44360 = 0xbc;
  _DAT_00b43640 = 0x60;
  _DAT_00b449f0 = 0xc;
  if (iVar10 != DAT_00b45760) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45760;
    if (DAT_00b45760 != 0) {
      *(int *)(DAT_00b45760 + 0x60) = *(int *)(DAT_00b45760 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
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
    local_4._0_1_ = 0x66;
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
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453cc);
  FUN_007aec60(DAT_00b451c8);
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
  _DAT_00b43ce0 = 0x630f8;
  _DAT_00b44370 = 0x3c;
  _DAT_00b43650 = 0x60;
  _DAT_00b44a00 = 8;
  if (iVar10 != DAT_00b45768) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45768;
    if (DAT_00b45768 != 0) {
      *(int *)(DAT_00b45768 + 0x60) = *(int *)(DAT_00b45768 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(0,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
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
    local_4._0_1_ = 0x6d;
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
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(3,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,5,1,2);
    FUN_00760010(5,local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,6,3,0);
    FUN_00760010(6,local_18);
  }
  FUN_007aecb0(DAT_00b453cc);
  FUN_007aec60(DAT_00b451cc);
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
  _DAT_00b43658 = 0x60;
  _DAT_00b43ce8 = 0x630f8;
  _DAT_00b44378 = 0xbc;
  _DAT_00b44a08 = 0xc;
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


