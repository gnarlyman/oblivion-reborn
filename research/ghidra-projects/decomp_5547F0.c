
void FUN_005547f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  LONG LVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_6c;
  undefined4 *local_68;
  undefined4 *puStack_64;
  undefined4 *puStack_60;
  int iStack_5c;
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
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009bc20a;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff84;
  *unaff_FS_OFFSET = (int)&local_c;
  local_58 = 0;
  local_54 = 0;
  local_52 = 0;
  local_48 = 0;
  local_44 = 0;
  local_42 = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_40 = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_34 = 0;
  local_32 = 0;
  local_68 = (undefined4 *)0x0;
  local_6c = (undefined4 *)0x0;
  local_4 = 6;
  uStack_3 = 0;
  FUN_0070fd80(0xbfc90fdb);
  if (param_3[0x2e] != 0) {
    uVar3 = (**(code **)(*(int *)param_3[0x2e] + 0x14))(uVar2);
    FUN_00402e30(&local_58,"Meshes\\%s",uVar3);
    uVar3 = local_58;
    puStack_60 = (undefined4 *)FUN_00550010(&local_50,local_58);
    iVar4 = FUN_0054feb0(&local_48,uVar3);
    puStack_64 = (undefined4 *)0x0;
    local_4 = 7;
    if (iVar4 == 0) {
      local_4 = 6;
    }
    else {
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      if (*(int *)(DAT_00b39b80 + 0xdac) == 0) {
        iStack_5c = FUN_00401f00(0x20);
        local_4 = 8;
        if (iStack_5c == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_00551e80();
        }
        local_4 = 7;
        if (DAT_00b39b80 == 0) {
          FUN_00553550();
        }
        *(undefined4 *)(DAT_00b39b80 + 0xdac) = uVar7;
        *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x18) = DAT_00b120ec;
        FUN_005506b0(0);
        uVar7 = DAT_00b120f4;
        if (DAT_00b39b80 == 0) {
          FUN_00553550();
        }
        *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x1c) = uVar7;
        FUN_005506b0(0);
      }
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      cVar1 = FUN_005515b0(iVar4,&puStack_64);
      puVar10 = puStack_64;
      if (cVar1 == '\0') {
        iStack_5c = FUN_00401f00(0x1c);
        local_4 = 9;
        if (iStack_5c == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = FUN_005564a0();
        }
        _local_4 = CONCAT31(uStack_3,7);
        FUN_0075fa90(uVar7);
        puVar10 = puStack_64;
        cVar1 = FUN_00559b50(iVar4,uVar3,puStack_60,0,0);
        if (cVar1 == '\0') {
          if (puVar10 != (undefined4 *)0x0) {
            LVar6 = InterlockedDecrement(puVar10 + 1);
            if (LVar6 == 0) {
              (**(code **)*puVar10)(1);
            }
            puVar10 = (undefined4 *)0x0;
          }
        }
        else {
          if (DAT_00b39b80 == 0) {
            FUN_00553550();
          }
          FUN_00551450(iVar4,puVar10);
        }
        local_4 = 6;
        if (puVar10 == (undefined4 *)0x0) goto LAB_00554abc;
        LVar6 = InterlockedDecrement(puVar10 + 1);
        if (LVar6 == 0) {
          (**(code **)*puVar10)(1);
        }
      }
      else {
        if (puStack_64[2] == 0) {
          FUN_00559b50(iVar4,uVar3,puStack_60,0,0);
        }
        local_4 = 6;
        LVar6 = InterlockedDecrement(puVar10 + 1);
        if (LVar6 == 0) {
          (**(code **)*puVar10)(1);
        }
      }
      FUN_00559870(param_3,&local_6c);
    }
LAB_00554abc:
    if (local_6c != (undefined4 *)0x0) {
      FUN_006ff420("FaceGenEyeLeft");
      if (param_3[0x1b] == 0) {
        uVar3 = FUN_00442890(&puStack_60,"Textures\\Characters\\Eyes\\EyeDefault.dds",0,0);
        local_4 = 0xb;
      }
      else {
        puVar5 = *(undefined1 **)(param_3[0x1b] + 0x28);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00a2f7ec;
        }
        FUN_00402e30(&local_58,"Textures\\%s",puVar5);
        uVar3 = FUN_00442890(&puStack_60,local_58,0,0);
        local_4 = 10;
      }
      FUN_0055e2a0(uVar3);
      puVar10 = puStack_60;
      local_4 = 6;
      if (((puStack_60 != (undefined4 *)0x0) &&
          (LVar6 = InterlockedDecrement(puStack_60 + 1), LVar6 == 0)) &&
         (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
      puVar10 = local_68;
      if (local_68 != (undefined4 *)0x0) {
        iStack_5c = FUN_00401f00(0x30);
        local_4 = 0xc;
        if (iStack_5c == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_007043b0();
        }
        local_4 = 6;
        FUN_004057b0(puVar10);
        FUN_00405870(3);
        FUN_00405900(2);
        iVar4 = FUN_00707530(6);
        if (iVar4 != 0) {
          FUN_00708560(&puStack_60,6);
          FUN_007016a0();
        }
        FUN_00405680(uVar3);
      }
      if (local_6c[0x2e] == 0) {
        puVar9 = local_30;
        puVar11 = local_6c + 0xc;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        piVar8 = (int *)*param_1;
LAB_00554c78:
        (**(code **)(*piVar8 + 0x84))(local_6c,0);
      }
      else {
        if (param_4 != '\0') {
          FUN_00478350(0);
          local_6c[0x15] = DAT_00b3f9a8;
          local_6c[0x16] = DAT_00b3f9ac;
          local_6c[0x17] = DAT_00b3f9b0;
          puVar9 = local_30;
          puVar11 = local_6c + 0xc;
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar11 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar11 = puVar11 + 1;
          }
          piVar8 = (int *)*param_1;
          goto LAB_00554c78;
        }
        (**(code **)(*(int *)*param_2 + 0x84))(local_6c,0);
      }
      puVar9 = local_6c;
      if (local_6c != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(local_6c + 1);
        if ((LVar6 == 0) && (puVar9 != (undefined4 *)0x0)) {
          (**(code **)*puVar9)(1);
        }
        local_6c = (undefined4 *)0x0;
      }
      if (puVar10 != (undefined4 *)0x0) {
        LVar6 = InterlockedDecrement(puVar10 + 1);
        if (LVar6 == 0) {
          (**(code **)*puVar10)(1);
        }
        local_68 = (undefined4 *)0x0;
      }
    }
  }
  if (param_3[0x2f] == 0) goto LAB_0055512d;
  uVar3 = (**(code **)(*(int *)param_3[0x2f] + 0x14))();
  FUN_00402e30(&local_58,"Meshes\\%s",uVar3);
  uVar3 = local_58;
  uVar7 = FUN_00550010(&local_50,local_58);
  iVar4 = FUN_0054feb0(&local_48,uVar3);
  puStack_64 = (undefined4 *)0x0;
  local_4 = 0xd;
  if (iVar4 == 0) {
    local_4 = 6;
  }
  else {
    if (DAT_00b39b80 == 0) {
      FUN_00553550();
    }
    if (*(int *)(DAT_00b39b80 + 0xdac) == 0) {
      iStack_5c = FUN_00401f00(0x20);
      local_4 = 0xe;
      if (iStack_5c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00551e80();
      }
      local_4 = 0xd;
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      *(undefined4 *)(DAT_00b39b80 + 0xdac) = uVar3;
      *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x18) = DAT_00b120ec;
      FUN_005506b0(0);
      uVar3 = DAT_00b120f4;
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x1c) = uVar3;
      FUN_005506b0(0);
    }
    if (DAT_00b39b80 == 0) {
      FUN_00553550();
    }
    cVar1 = FUN_005515b0(iVar4,&puStack_64);
    puVar10 = puStack_64;
    if (cVar1 == '\0') {
      iStack_5c = FUN_00401f00(0x1c);
      local_4 = 0xf;
      if (iStack_5c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005564a0();
      }
      _local_4 = CONCAT31(uStack_3,0xd);
      FUN_0075fa90(uVar3);
      puVar10 = puStack_64;
      cVar1 = FUN_00559b50(iVar4,local_58,uVar7,0,0);
      if (cVar1 == '\0') {
        if (puVar10 != (undefined4 *)0x0) {
          LVar6 = InterlockedDecrement(puVar10 + 1);
          if (LVar6 == 0) {
            (**(code **)*puVar10)(1);
          }
          puVar10 = (undefined4 *)0x0;
        }
      }
      else {
        if (DAT_00b39b80 == 0) {
          FUN_00553550();
        }
        FUN_00551450(iVar4,puVar10);
      }
      local_4 = 6;
      if (puVar10 == (undefined4 *)0x0) goto LAB_00554ef0;
    }
    else if (puStack_64[2] == 0) {
      FUN_00559b50(iVar4,local_58,uVar7,0,0);
    }
    local_4 = 6;
    LVar6 = InterlockedDecrement(puVar10 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar10)(1);
    }
    FUN_00559870(param_3,&local_6c);
  }
LAB_00554ef0:
  if (local_6c != (undefined4 *)0x0) {
    FUN_006ff420("FaceGenEyeRight");
    if (param_3[0x1b] == 0) {
      uVar3 = FUN_00442890(&param_3,"Textures\\Characters\\Eyes\\EyeDefault.dds",0,0);
      local_4 = 0x11;
    }
    else {
      puVar5 = *(undefined1 **)(param_3[0x1b] + 0x28);
      if (puVar5 == (undefined1 *)0x0) {
        puVar5 = &DAT_00a2f7ec;
      }
      FUN_00402e30(&local_58,"Textures\\%s",puVar5);
      uVar3 = FUN_00442890(&param_3,local_58,0,0);
      local_4 = 0x10;
    }
    FUN_0055e2a0(uVar3);
    puVar10 = param_3;
    local_4 = 6;
    if (((param_3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(param_3 + 1), LVar6 == 0))
       && (puVar10 != (undefined4 *)0x0)) {
      (**(code **)*puVar10)(1);
    }
    puVar10 = local_68;
    if (local_68 != (undefined4 *)0x0) {
      param_3 = (undefined4 *)FUN_00401f00(0x30);
      local_4 = 0x12;
      if (param_3 == (undefined4 *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_007043b0();
      }
      local_4 = 6;
      FUN_004057b0(puVar10);
      FUN_00405870(3);
      FUN_00405900(2);
      iVar4 = FUN_00707530(6);
      if (iVar4 != 0) {
        FUN_00708560(&param_3,6);
        FUN_007016a0();
      }
      FUN_00405680(uVar3);
    }
    if (local_6c[0x2e] == 0) {
      puVar10 = local_30;
      puVar9 = local_6c + 0xc;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar9 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar9 = puVar9 + 1;
      }
      piVar8 = (int *)*param_1;
LAB_005550c2:
      (**(code **)(*piVar8 + 0x84))(local_6c,0);
    }
    else {
      if (param_4 != '\0') {
        FUN_00478350(0);
        local_6c[0x15] = DAT_00b3f9a8;
        local_6c[0x16] = DAT_00b3f9ac;
        local_6c[0x17] = DAT_00b3f9b0;
        puVar10 = local_30;
        puVar9 = local_6c + 0xc;
        for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar9 = puVar9 + 1;
        }
        piVar8 = (int *)*param_1;
        goto LAB_005550c2;
      }
      (**(code **)(*(int *)*param_2 + 0x84))(local_6c,0);
    }
    puVar10 = local_6c;
    if (local_6c != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(local_6c + 1);
      if ((LVar6 == 0) && (puVar10 != (undefined4 *)0x0)) {
        (**(code **)*puVar10)(1);
      }
      local_6c = (undefined4 *)0x0;
    }
  }
  puVar10 = local_68;
  if (local_68 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(local_68 + 1);
    if (LVar6 == 0) {
      (**(code **)*puVar10)(1);
    }
    local_68 = (undefined4 *)0x0;
  }
LAB_0055512d:
  puVar9 = local_68;
  puVar10 = local_6c;
  local_4 = 5;
  if (((local_6c != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(local_6c + 1), LVar6 == 0))
     && (puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  _local_4 = CONCAT31(uStack_3,4);
  if ((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) {
    (**(code **)*puVar9)(1);
  }
  FUN_00401f20(0);
  FUN_00401f20(0);
  FUN_00401f20(local_50);
  FUN_00401f20(local_48);
  FUN_00401f20(local_58);
  *unaff_FS_OFFSET = local_c;
  return;
}

