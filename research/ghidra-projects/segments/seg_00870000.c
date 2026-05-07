
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00870970(void)

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
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5110;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b476e0;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b476e0 != 0) && (iVar10 = iVar2, DAT_00b476e0 != 0)) {
    *(int *)(DAT_00b476e0 + 0x60) = *(int *)(DAT_00b476e0 + 0x60) + 1;
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
  puVar3 = *(undefined4 **)(in_ECX + 0xfc);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x17c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
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
  _DAT_00b43ec8 = 0x21802;
  _DAT_00b44558 = 0x18;
  if (iVar10 != DAT_00b476e4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476e4;
    if (DAT_00b476e4 != 0) {
      *(int *)(DAT_00b476e4 + 0x60) = *(int *)(DAT_00b476e4 + 0x60) + 1;
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
  puVar3 = *(undefined4 **)(in_ECX + 0x100);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x17c);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
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
  _DAT_00b43ed4 = 0x61808;
  _DAT_00b44564 = 0x18;
  if (iVar10 != DAT_00b476e8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476e8;
    if (DAT_00b476e8 != 0) {
      *(int *)(DAT_00b476e8 + 0x60) = *(int *)(DAT_00b476e8 + 0x60) + 1;
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
  puVar3 = *(undefined4 **)(in_ECX + 0x104);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x180);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
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
  _DAT_00b43f00 = 0x23802;
  _DAT_00b44590 = 0x38;
  if (iVar10 != DAT_00b476ec) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b476ec;
    if (DAT_00b476ec != 0) {
      *(int *)(DAT_00b476ec + 0x60) = *(int *)(DAT_00b476ec + 0x60) + 1;
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
  puVar3 = *(undefined4 **)(in_ECX + 0x108);
  puVar4 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x180);
  puVar4 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar10 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
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
  _DAT_00b43f0c = 0x63808;
  _DAT_00b4459c = 0x38;
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

void FUN_008717b0(void)

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
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5150;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b476f0;
  iVar10 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar11 = 0;
  if ((DAT_00b476f0 != 0) && (iVar11 = iVar2, DAT_00b476f0 != 0)) {
    *(int *)(DAT_00b476f0 + 0x60) = *(int *)(DAT_00b476f0 + 0x60) + 1;
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar10 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0x10c);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x184);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f54 = 0x20002;
  _DAT_00b445e4 = 0x100;
  if (iVar11 != DAT_00b476f4) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b476f4;
    if (DAT_00b476f4 != 0) {
      *(int *)(DAT_00b476f4 + 0x60) = *(int *)(DAT_00b476f4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x110);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x184);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,9,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f58 = 0x60008;
  _DAT_00b445e8 = 0x100;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar10 != 0) {
    piVar7 = (int *)(iVar10 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar11 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00871c30(void)

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
  int in_ECX;
  int iVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d52a0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b476f8;
  iVar10 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar11 = 0;
  if ((DAT_00b476f8 != 0) && (iVar11 = iVar2, DAT_00b476f8 != 0)) {
    *(int *)(DAT_00b476f8 + 0x60) = *(int *)(DAT_00b476f8 + 0x60) + 1;
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      iVar10 = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0x114);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x188);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f7c = 0x20082;
  _DAT_00b4460c = 0x108;
  if (iVar11 != DAT_00b476fc) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b476fc;
    if (DAT_00b476fc != 0) {
      *(int *)(DAT_00b476fc + 0x60) = *(int *)(DAT_00b476fc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x118);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x188);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f88 = 0x60088;
  _DAT_00b44618 = 0x108;
  if (iVar11 != DAT_00b47700) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b47700;
    if (DAT_00b47700 != 0) {
      *(int *)(DAT_00b47700 + 0x60) = *(int *)(DAT_00b47700 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x11c);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x18c);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f98 = 0x200f2;
  _DAT_00b44628 = 0x108;
  if (iVar11 != DAT_00b47704) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b47704;
    if (DAT_00b47704 != 0) {
      *(int *)(DAT_00b47704 + 0x60) = *(int *)(DAT_00b47704 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x120);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x18c);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fa4 = 0x600f8;
  _DAT_00b44634 = 0x108;
  if (iVar11 != DAT_00b47708) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b47708;
    if (DAT_00b47708 != 0) {
      *(int *)(DAT_00b47708 + 0x60) = *(int *)(DAT_00b47708 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x124);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 400);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fb4 = 0x20802;
  _DAT_00b44644 = 0x108;
  if (iVar11 != DAT_00b4770c) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b4770c;
    if (DAT_00b4770c != 0) {
      *(int *)(DAT_00b4770c + 0x60) = *(int *)(DAT_00b4770c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 6) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(iVar10,3,3,0);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,4,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    if (iVar10 != *piVar7) {
      if (iVar10 != 0) {
        piVar1 = (int *)(iVar10 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      iVar10 = *piVar7;
      if (iVar10 != 0) {
        *(int *)(iVar10 + 0x5c) = *(int *)(iVar10 + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(iVar10,5,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x128);
  puVar4 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 400);
  puVar4 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43fc0 = 0x60808;
  _DAT_00b44650 = 0x108;
  local_4 = (uint)local_4._1_3_ << 8;
  if (iVar10 != 0) {
    piVar7 = (int *)(iVar10 + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(iVar11 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008736f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47620;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008738a0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47624;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00873aa0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47628;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00873c50(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4762c;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00873e50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47630;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00874090(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b47634;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00874310(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47638;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00874550(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4763c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008747d0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47640;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00874980(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47644;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00874b80(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47648;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00874d30(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4764c;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0xc);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00874f30(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47650;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00875170(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b47654;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008753f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47658;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00875630(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4765c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0xc);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008758b0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47660;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar9 = InterlockedDecrement(puVar4 + 1);
      if ((LVar9 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar9 = InterlockedDecrement(puVar4 + 1);
      if ((LVar9 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00875a10(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47664;
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
  iStack_4 = *(undefined4 *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(puStack_8 + 4);
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



void FUN_00875bd0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47668;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar9 = InterlockedDecrement(puVar4 + 1);
      if ((LVar9 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar9 = InterlockedDecrement(puVar4 + 1);
      if ((LVar9 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00875d30(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4766c;
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
  iStack_4 = *(undefined4 *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(puStack_8 + 4);
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



void FUN_00875ef0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47670;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008760f0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47674;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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



void FUN_00876340(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47678;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00876540(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4767c;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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



void FUN_00876790(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47680;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00876940(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b47684;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00876b40(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47688;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00876cf0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b4768c;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00876ef0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47690;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00877130(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b47694;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008773b0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47698;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008775f0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b4769c;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0);
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00877870(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476a0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00877a20(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b476a4;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00877c30(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476a8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00877de0(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b476ac;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00877ff0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476b0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00878240(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b476b4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008784c0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476b8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00878710(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b476bc;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00878990(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476c0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00878b40(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b476c4;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00878d50(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476c8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00878f00(int *param_1,undefined4 param_2,int param_3)

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
  puVar5 = DAT_00b476cc;
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
  iStack_4 = *(undefined4 *)(puVar5[9] + 0x10);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = (undefined4 *)puStack_8[1];
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
  iVar3 = *(int *)(puVar5[9] + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  puStack_8 = DAT_00b43110;
  if (puVar4 != DAT_00b43110) {
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



void FUN_00879110(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476d0;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879360(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b476d4;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_008795e0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b476d8;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10),uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879830(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d33f8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = DAT_00b476dc;
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,*(undefined4 *)(param_3 + 0x10));
  iVar3 = **(int **)(puVar5 + 0x24);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 4);
  iStack_4 = iVar3;
  puVar7 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x10);
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x90))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar7) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  puVar7 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(puVar5 + 0x24) + 0x1c);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(iVar3 + 4) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  *(int *)(puVar5 + 0x60) = *(int *)(puVar5 + 0x60) + 1;
  puStack_8 = puVar5;
  FUN_0076ce40(*(undefined4 *)(uVar6 + 0x38),&puStack_8);
  piVar1 = (int *)(puVar5 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  piVar1 = (int *)(uVar6 + 0x38);
  *piVar1 = *piVar1 + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879ab0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476e0;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)((int)puStack_8 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879c40(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476e4;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)((int)puStack_8 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879dd0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476e8;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)((int)puStack_8 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_00879f60(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476ec;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)((int)puStack_8 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a0f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d52c8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476f0;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  local_c = iVar4;
  FUN_0076ce40(in_ECX[0xe],&local_c);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a1e0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d52c8;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476f4;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,0,uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puStack_8 = (undefined1 *)iVar2;
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(local_c + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  local_c = iVar4;
  FUN_0076ce40(in_ECX[0xe],&local_c);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a2d0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476f8;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a420(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b476fc;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar7 = InterlockedDecrement(puVar3 + 1);
      if ((LVar7 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a570(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b47700;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43108;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b4310c;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a750(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b47704;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43108;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x10);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43108) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b4310c;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0x14);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b4310c) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087a930(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b47708;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087aac0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  LONG LVar7;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = DAT_00b4770c;
  (**(code **)(*in_ECX + 0xbc))(param_1,0,*(undefined4 *)(param_3 + 0x10),uVar5);
  iVar2 = **(int **)(iVar4 + 0x24);
  puVar6 = (undefined4 *)FUN_00848fd0(param_1,0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 4);
  puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != puVar6) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  puVar6 = DAT_00b43110;
  iVar2 = *(int *)(*(int *)(iVar4 + 0x24) + 0xc);
  puVar3 = *(undefined4 **)(iVar2 + 4);
  if (puVar3 != DAT_00b43110) {
    if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)) &&
       (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 **)(iVar2 + 4) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar4 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



undefined4 FUN_0087ac50(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_14;
  int *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d5858;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  local_10 = in_ECX;
  do {
    piVar4 = (int *)FUN_007606a0(&local_14,uVar3);
    iVar2 = *(int *)((int)&DAT_00b47718 + uVar5);
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
      *(int *)((int)&DAT_00b47718 + uVar5) = iVar2;
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
      }
    }
    local_4 = 0xffffffff;
    if ((local_14 != 0) &&
       (*(int *)(local_14 + 0x60) = *(int *)(local_14 + 0x60) + -1, *(int *)(local_14 + 0x60) == 0))
    {
      FUN_007604d0();
    }
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x50);
  (**(code **)(*local_10 + 0xc0))();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0087ad10(void)

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
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d5740;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = 0;
  local_1c = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((DAT_00b47718 != 0) && (local_18 = DAT_00b47718, DAT_00b47718 != 0)) {
    *(int *)(DAT_00b47718 + 0x60) = *(int *)(DAT_00b47718 + 0x60) + 1;
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10,uVar6);
    iVar2 = *piVar7;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x5c) = *(int *)(iVar2 + 0x5c) + 1;
      local_1c = iVar2;
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 3;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 4;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 5;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 6;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 7;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 8;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar3 = *(undefined4 **)(in_ECX + 0xbc);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xfc);
  puVar4 = *(undefined4 **)(local_18 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c58 = 0x21082;
  _DAT_00b442e8 = 0x1c;
  if (local_18 != DAT_00b4771c) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b4771c;
    if (DAT_00b4771c != 0) {
      *(int *)(DAT_00b4771c + 0x60) = *(int *)(DAT_00b4771c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 9;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xb;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xc;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xd;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xe;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0xf;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc0);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xfc);
  puVar4 = *(undefined4 **)(local_18 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c6c = 0x61088;
  _DAT_00b442fc = 0x1c;
  if (local_18 != DAT_00b47720) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47720;
    if (DAT_00b47720 != 0) {
      *(int *)(DAT_00b47720 + 0x60) = *(int *)(DAT_00b47720 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x10;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x11;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x12;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x13;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x14;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x15;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 0xc4);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x100);
  puVar4 = *(undefined4 **)(local_18 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c84 = 0x210f2;
  _DAT_00b44314 = 0x1c;
  if (local_18 != DAT_00b47724) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47724;
    if (DAT_00b47724 != 0) {
      *(int *)(DAT_00b47724 + 0x60) = *(int *)(DAT_00b47724 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  puVar3 = *(undefined4 **)(in_ECX + 200);
  puVar4 = *(undefined4 **)(local_18 + 0x58);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x58) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x100);
  puVar4 = *(undefined4 **)(local_18 + 0x44);
  if (puVar4 != puVar3) {
    if (puVar4 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar4 + 1);
      if ((LVar8 == 0) && (puVar4 != (undefined4 *)0x0)) {
        (**(code **)*puVar4)(1);
      }
    }
    *(undefined4 **)(local_18 + 0x44) = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43c98 = 0x610f8;
  _DAT_00b44328 = 0x1c;
  if (local_18 != DAT_00b47728) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47728;
    if (DAT_00b47728 != 0) {
      *(int *)(DAT_00b47728 + 0x60) = *(int *)(DAT_00b47728 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x20;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x21;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x22;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x23;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    piVar7 = (int *)FUN_00772630(&local_10);
    local_4._0_1_ = 0x24;
    if (local_1c != *piVar7) {
      if (local_1c != 0) {
        piVar1 = (int *)(local_1c + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
      local_1c = *piVar7;
      if (local_1c != 0) {
        *(int *)(local_1c + 0x5c) = *(int *)(local_1c + 0x5c) + 1;
      }
    }
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xcc));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x104));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cb0 = 0x23082;
  _DAT_00b44340 = 0x3c;
  if (local_18 != DAT_00b4772c) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b4772c;
    if (DAT_00b4772c != 0) {
      *(int *)(DAT_00b4772c + 0x60) = *(int *)(DAT_00b4772c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x104));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cc4 = 0x63088;
  _DAT_00b44354 = 0x3c;
  if (local_18 != DAT_00b47730) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47730;
    if (DAT_00b47730 != 0) {
      *(int *)(DAT_00b47730 + 0x60) = *(int *)(DAT_00b47730 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x32;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x108));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cdc = 0x230f2;
  _DAT_00b4436c = 0x3c;
  if (local_18 != DAT_00b47734) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47734;
    if (DAT_00b47734 != 0) {
      *(int *)(DAT_00b47734 + 0x60) = *(int *)(DAT_00b47734 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 7) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x33;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x38;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,1,2);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x39;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,3,0);
    FUN_00760010(6,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xd8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x108));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43cf0 = 0x630f8;
  _DAT_00b44380 = 0x3c;
  if (local_18 != DAT_00b47738) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47738;
    if (DAT_00b47738 != 0) {
      *(int *)(DAT_00b47738 + 0x60) = *(int *)(DAT_00b47738 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x40;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x41;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0x9c));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xec));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d04 = 0x38082;
  _DAT_00b44394 = 0x10c;
  if (local_18 != DAT_00b4773c) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b4773c;
    if (DAT_00b4773c != 0) {
      *(int *)(DAT_00b4773c + 0x60) = *(int *)(DAT_00b4773c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x42;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x43;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x44;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xec));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d1c = 0x78088;
  _DAT_00b443ac = 0x10c;
  if (local_18 != DAT_00b47740) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47740;
    if (DAT_00b47740 != 0) {
      *(int *)(DAT_00b47740 + 0x60) = *(int *)(DAT_00b47740 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x50;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf0));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d3c = 0x380f2;
  _DAT_00b443cc = 0x10c;
  if (local_18 != DAT_00b47744) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47744;
    if (DAT_00b47744 != 0) {
      *(int *)(DAT_00b47744 + 0x60) = *(int *)(DAT_00b47744 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xa8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf0));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d54 = 0x780f8;
  _DAT_00b443e4 = 0x10c;
  if (local_18 != DAT_00b47748) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b47748;
    if (DAT_00b47748 != 0) {
      *(int *)(DAT_00b47748 + 0x60) = *(int *)(DAT_00b47748 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x61;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xac));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf4));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d70 = 0x39082;
  _DAT_00b44400 = 0x11c;
  if (local_18 != DAT_00b4774c) {
    piVar7 = (int *)(local_18 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_18 = DAT_00b4774c;
    if (DAT_00b4774c != 0) {
      *(int *)(DAT_00b4774c + 0x60) = *(int *)(DAT_00b4774c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x62;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 99;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 100;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x65;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x66;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x67;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x68;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x69;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf4));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43d88 = 0x79088;
  _DAT_00b44418 = 0x11c;
  FUN_0076c890(&DAT_00b47750);
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x6f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x70;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x71;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf8));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43da4 = 0x390f2;
  _DAT_00b44434 = 0x11c;
  FUN_0076c890(&DAT_00b47754);
  if (*(uint *)(local_18 + 0x18) < 8) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x72;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x73;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x74;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x75;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,3,1,2);
    FUN_00760010(3,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x76;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,4,1,2);
    FUN_00760010(4,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x77;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,5,3,0);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(5,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x78;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,6,1,2);
    FUN_00760010(6,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x79;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,7,3,0);
    FUN_00760010(7,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xb8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0xf8));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43dbc = 0x790f8;
  _DAT_00b4444c = 0x11c;
  FUN_0076c890(&DAT_00b47758);
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,0);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xdc));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x10c));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ec4 = 0x39802;
  _DAT_00b44554 = 0x1c;
  FUN_0076c890(&DAT_00b4775c);
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x7f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x80;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x81;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,0);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe0));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x10c));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43ed0 = 0x79808;
  _DAT_00b44560 = 0x1c;
  FUN_0076c890(&DAT_00b47760);
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x82;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x83;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x84;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x85;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,0);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe4));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x110));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43efc = 0x3b802;
  _DAT_00b4458c = 0x3c;
  FUN_0076c890(&DAT_00b47764);
  if (*(uint *)(local_18 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x86;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,0,1,2);
    FUN_00760010(0,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x87;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,1,1,2);
    FUN_00760010(1,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x88;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_1c,2,1,2);
    FUN_00760010(2,local_1c);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x89;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_0076c910(DAT_00b43110);
    FUN_00801110(local_1c,3,3,0);
    FUN_00760010(3,local_1c);
  }
  FUN_007aecb0(*(undefined4 *)(in_ECX + 0xe8));
  FUN_007aec60(*(undefined4 *)(in_ECX + 0x110));
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xa8,0xf,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,2,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,3,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(local_18 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_18 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f08 = 0x7b808;
  _DAT_00b44598 = 0x3c;
  local_4 = (uint)local_4._1_3_ << 8;
  if (local_1c != 0) {
    piVar7 = (int *)(local_1c + 0x5c);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_00772560();
    }
  }
  piVar7 = (int *)(local_18 + 0x60);
  *piVar7 = *piVar7 + -1;
  local_4 = 0xffffffff;
  if (*piVar7 == 0) {
    FUN_007604d0();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0087fa20(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47718;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087fbd0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b4771c;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087fd80(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47720;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}



void FUN_0087ffc0(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  LONG LVar9;
  int *in_ECX;
  int unaff_EDI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = -1;
  puStack_8 = &LAB_009d3398;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = DAT_00b47724;
  FUN_00848c40(*(undefined4 *)(param_3 + 0x10));
  uVar2 = *(undefined4 *)(param_3 + 0xc);
  FUN_00848e50(uVar2);
  (**(code **)(*in_ECX + 0xbc))(param_1,uVar2,0,uVar7);
  iVar3 = **(int **)(iVar6 + 0x24);
  puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x88))(0);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + 4);
  iStack_4 = iVar5;
  puVar8 = (undefined4 *)FUN_00848fd0(iVar3,0);
  puVar4 = *(undefined4 **)(iVar5 + 4);
  if (puVar4 != puVar8) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iStack_4 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43110;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x10);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43110) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b43108;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x14);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b43108) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  puVar8 = DAT_00b4310c;
  iVar3 = *(int *)(*(int *)(iVar6 + 0x24) + 0x18);
  puVar4 = *(undefined4 **)(iVar3 + 4);
  if (puVar4 != DAT_00b4310c) {
    if (((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) &&
       (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    *(undefined4 **)(iVar3 + 4) = puVar8;
    if (puVar8 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar8 + 1);
    }
  }
  *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
  FUN_0076ce40(in_ECX[0xe],&stack0x00000000);
  piVar1 = (int *)(iVar6 + 0x60);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_007604d0();
  }
  in_ECX[0xe] = in_ECX[0xe] + 1;
  *unaff_FS_OFFSET = unaff_EDI;
  return;
}


