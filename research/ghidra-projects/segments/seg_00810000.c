
void FUN_00810950(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c57b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
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
  puVar1 = *(undefined4 **)(in_ECX + 0x94);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x2c)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar3 = *(int *)(in_ECX + 0x2c);
    *(int *)(in_ECX + 0x94) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x98);
  if (puVar1 != *(undefined4 **)(in_ECX + 0x30)) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar3 = *(int *)(in_ECX + 0x30);
    *(int *)(in_ECX + 0x98) = iVar3;
    if (iVar3 != 0) {
      InterlockedIncrement((LONG *)(iVar3 + 4));
    }
  }
  FUN_007f16f0(*(int *)(in_ECX + 0x30),0x25);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00810aa0(void)

{
  int *in_ECX;
  undefined4 *puVar1;
  
  puVar1 = &DAT_00b47790;
  do {
    (**(code **)(*in_ECX + 0x94))(*puVar1);
    puVar1 = puVar1 + 1;
  } while ((int)puVar1 < 0xb47800);
  return;
}



void FUN_00810ad0(undefined4 param_1)

{
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d1040;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_007c88b0(param_1,0,0,0);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a9459c;
  _eh_vector_constructor_iterator_(in_ECX + 0x27,4,0x1c,FUN_007c88a0,FUN_007016a0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_(in_ECX + 0x43,4,10,FUN_007c88a0,FUN_007016a0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00810b70(byte param_1)

{
  FUN_0080f070();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint * FUN_00810b90(void)

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
  puVar5 = (undefined4 *)FUN_00771090(DAT_00b43104,6,1);
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
  (**(code **)(*(int *)*puVar9 + 0x50))(2,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,3,8,0x80000000,2,6,0,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,4,9,0x80000001,2,7,0,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,5,10,&DAT_80000002,3,2,0,0);
  piVar8 = (int *)*puVar9;
  uVar3 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar2 = 1;
        goto LAB_00810cd7;
      }
    }
    bVar2 = 0;
LAB_00810cd7:
    uVar3 = -(uint)bVar2 & (uint)piVar8;
  }
  iVar4 = FUN_00401f00(0x134);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_00810ad0(uVar3);
  }
  (**(code **)(*piVar8 + 0x84))();
  (**(code **)(*piVar8 + 0xa8))();
  (**(code **)(*piVar8 + 0xb4))();
  (**(code **)(*piVar8 + 0xb8))();
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



void FUN_00810db0(void)

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
  
  puStack_8 = &LAB_009d10ae;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a946b4;
  local_4 = 3;
  piVar5 = in_ECX + 0x23;
  iVar4 = 4;
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
  piVar5 = in_ECX + 0x27;
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
  in_ECX[0x2a] = 0;
  FUN_00401f20(in_ECX[0x29],uVar2);
  local_4._0_1_ = 2;
  _eh_vector_destructor_iterator_(in_ECX + 0x27,4,2,FUN_007016a0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_(in_ECX + 0x23,4,4,FUN_007016a0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x1f,4,1,FUN_004027d0);
  local_4 = 0xffffffff;
  FUN_008012e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00810f30(void)

{
  int in_ECX;
  int *piVar1;
  int iVar2;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    piVar1 = (int *)(in_ECX + 0x8c);
    iVar2 = 4;
    do {
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 0x5c))();
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  piVar1 = (int *)(in_ECX + 0x9c);
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



void FUN_00810f90(undefined4 param_1)

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
    (**(code **)(*(int *)*puVar1 + 0x18))("WorldViewProjTranspose",0x20000009,0,0,4,0,0,0,0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Diffuse Light direction",0x10000007,0,4,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xc0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("Diffuse Light color",0x10000007,0,5,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xd0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("ambient color",0x10000007,0,0xd,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xb0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("eye vector",0x10000007,0,0xe,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xf0,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("eye right vector",0x10000007,0,9,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0x100,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("alpha param param",0x10000007,0,0xc,1,&DAT_00a2f7ec,0x10,4,&DAT_00b2c334,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fogparam",0x10000007,0,0xb,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46638,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("fogcolor",0x10000007,0,10,1,&DAT_00a2f7ec,0x10,4,&DAT_00b46648,0);
    (**(code **)(*(int *)*puVar1 + 0x18))
              ("instance data",0x10000009,0,0x14,(uint)*(ushort *)(in_ECX + 0xac),&DAT_00a2f7ec,
               (uint)*(ushort *)(in_ECX + 0xac) << 4,4,*(undefined4 *)(in_ECX + 0xa4),0);
    uVar4 = (**(code **)(*(int *)*puVar1 + 0x38))("instance data");
    *(undefined4 *)(in_ECX + 0xa8) = uVar4;
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
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x18))
              ("alpha test ref",0x10000007,0,3,1,&DAT_00a2f7ec,0x10,4,in_ECX + 0xe0,0);
  }
  FUN_0077aa60(param_1);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_008115c0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int in_ECX;
  short sVar3;
  
  piVar2 = *(int **)(param_1 + 0x9c);
  uVar1 = *(ushort *)(piVar2 + 3);
  _memcpy(*(void **)(in_ECX + 0xa4),(void *)piVar2[4],(uint)uVar1 << 4);
  if ((uint)*(ushort *)((int)piVar2 + 0xe) == (uint)uVar1) {
    sVar3 = (short)(*(int **)(*piVar2 + 0xb4))[0x10];
  }
  else {
    sVar3 = *(short *)(piVar2[1] + 0x32) * *(ushort *)((int)piVar2 + 0xe);
  }
  (**(code **)(**(int **)(*piVar2 + 0xb4) + 0x58))(sVar3);
  if (*(int *)(in_ECX + 0xa8) != 0) {
    *(uint *)(*(int *)(in_ECX + 0xa8) + 0x20) = (uint)*(ushort *)((int)piVar2 + 0xe);
  }
  return;
}



void FUN_00811a30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  LONG LVar5;
  undefined4 uVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d10d8;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = in_ECX;
  FUN_00772630(&local_10,uVar4);
  local_4 = 0;
  FUN_00801110(local_10,0,3,2);
  FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x7c) + 0x14),local_10);
  iVar1 = *(int *)(in_ECX + 0x7c);
  puVar2 = *(undefined4 **)(in_ECX + 0x8c);
  puVar3 = *(undefined4 **)(iVar1 + 0x58);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar3 + 1);
      if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x58) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  iVar1 = *(int *)(in_ECX + 0x7c);
  puVar2 = *(undefined4 **)(in_ECX + 0x9c);
  puVar3 = *(undefined4 **)(iVar1 + 0x44);
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar3 + 1);
      if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar1 + 0x44) = puVar2;
    if (puVar2 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar2 + 1);
    }
  }
  if (1 < DAT_00b42f48) {
    iVar1 = *(int *)(in_ECX + 0x7c);
    if (*(int *)(iVar1 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar1 + 0x30) = uVar6;
    }
    FUN_00772cd0(0x18,10,0);
  }
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
  FUN_00772cd0(0x1b,0,0);
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
  local_4 = 0xffffffff;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0)) {
    FUN_00772560();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00811c20(undefined4 *param_1)

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
  puStack_8 = &LAB_009d10ae;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00802540(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a946b4;
  _eh_vector_constructor_iterator_(in_ECX + 0x1f,4,1,FUN_007c88a0,FUN_004027d0);
  piVar6 = in_ECX + 0x23;
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(piVar6,4,4,FUN_007c88a0,FUN_007016a0);
  piVar7 = in_ECX + 0x27;
  local_4._0_1_ = 2;
  _eh_vector_constructor_iterator_(piVar7,4,2,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x2c] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  local_14 = 4;
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
  in_ECX[0x3a] = 0;
  in_ECX[0x3b] = 0;
  in_ECX[0x3c] = 0;
  in_ECX[0x3d] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  in_ECX[0x41] = 0;
  in_ECX[0x42] = 0;
  in_ECX[0x43] = 0;
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
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  iVar5 = 2;
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
  in_ECX[0x20] = 0;
  in_ECX[0x2c] = DAT_00b25ad0;
  in_ECX[0x2d] = DAT_00b25ad4;
  in_ECX[0x2e] = DAT_00b25ad8;
  in_ECX[0x2f] = DAT_00b25adc;
  if (DAT_00b42f48 < 2) {
    *(undefined2 *)(in_ECX + 0x2b) = 0x50;
  }
  else {
    *(undefined2 *)(in_ECX + 0x2b) = 0xe4;
  }
  uVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 0x2b) * 0x10);
  in_ECX[0x29] = uVar4;
  in_ECX[0x2a] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00811eb0(byte param_1)

{
  FUN_00810db0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00811ed0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int *unaff_FS_OFFSET;
  int in_stack_00000010;
  undefined4 uVar8;
  uint uStack_34;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d1108;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*in_ECX + 0x80))(uVar4);
  piVar2 = *(int **)(in_stack_00000010 + 0x18);
  if (piVar2 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar2 + 0x54))();
    if (iVar5 == 2) {
      if (DAT_00b42e86 != '\0') {
        FUN_007ecae0(0,0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      }
      if (*(int *)(in_stack_00000010 + 8) == 0) {
        in_ECX[0x38] = DAT_00b25ad0;
        in_ECX[0x39] = DAT_00b25ad4;
        in_ECX[0x3a] = DAT_00b25ad8;
        in_ECX[0x3b] = DAT_00b25adc;
      }
      else {
        in_ECX[0x38] = _DAT_00b2e148;
        in_ECX[0x39] = 0;
        in_ECX[0x3a] = 0;
        in_ECX[0x3b] = 0;
      }
      iVar5 = *(int *)(in_stack_00000010 + 0xc);
      if (iVar5 == 0) {
        _DAT_00b46638 = 1e+06;
        _DAT_00b4663c = 0.0;
        _DAT_00b46648 = DAT_00b25ad0;
        _DAT_00b4664c = DAT_00b25ad4;
        _DAT_00b46650 = DAT_00b25ad8;
        _DAT_00b46654 = DAT_00b25adc;
      }
      else {
        _DAT_00b46648 = *(int *)(iVar5 + 0x20);
        _DAT_00b4664c = *(int *)(iVar5 + 0x24);
        _DAT_00b46638 = *(float *)(iVar5 + 0x30);
        _DAT_00b46650 = *(int *)(iVar5 + 0x28);
        _DAT_00b4663c = _DAT_00b46638 - *(float *)(iVar5 + 0x2c);
        _DAT_00b46654 = 0;
      }
      _DAT_00b46644 = 0;
      _DAT_00b46640 = 0;
      iVar5 = piVar2[0x28];
      FUN_008115c0(piVar2);
      iVar7 = 0;
      if (1 < DAT_00b42f48) {
        iVar7 = 2;
      }
      uStack_34 = (uint)(1 < DAT_00b42f48);
      in_stack_00000010 = 0;
      iVar3 = **(int **)(in_ECX[0x1f] + 0x24);
      uStack_4 = 0;
      piVar1 = in_ECX + 0x1f;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x5c) = *(int *)(iVar3 + 0x5c) + 1;
        in_stack_00000010 = iVar3;
      }
      FUN_0076c910(iVar5);
      if ((piVar2[7] & 0x2000U) == 0) {
        iVar5 = in_ECX[iVar7 + 0x23];
      }
      else {
        iVar5 = in_ECX[iVar7 + 0x24];
      }
      FUN_007aecb0(iVar5);
      FUN_007aec60(in_ECX[uStack_34 + 0x27]);
      iVar5 = *piVar1;
      if (DAT_00b42eac == 4) {
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x34,1,0);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x38,8,0);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x37,7,0);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x35,1,0);
        iVar5 = *piVar1;
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        uVar8 = 1;
        uVar6 = 0x36;
      }
      else {
        if (*(int *)(iVar5 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar5 + 0x30) = uVar6;
        }
        uVar8 = 0;
        uVar6 = 0x34;
      }
      FUN_00772cd0(uVar6,uVar8,0);
      FUN_0076ce40(in_ECX[0xe],piVar1);
      in_ECX[0xe] = in_ECX[0xe] + 1;
      uStack_4 = 0xffffffff;
      if (in_stack_00000010 != 0) {
        piVar2 = (int *)(in_stack_00000010 + 0x5c);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_00772560();
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



uint * FUN_008122a0(void)

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
  puVar5 = (undefined4 *)FUN_00771090(DAT_00b43104,4,1);
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
  (**(code **)(*(int *)*puVar9 + 0x50))(1,5,4,3,0);
  (**(code **)(*(int *)*puVar9 + 0x50))(2,7,5,1,0);
  (**(code **)(*(int *)*puVar9 + 0x4c))(0,3,6,0x80000000,0,5,1,0);
  piVar8 = (int *)*puVar9;
  uVar3 = 0;
  if (piVar8 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar8 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00b3f684) {
        bVar2 = 1;
        goto LAB_008123b0;
      }
    }
    bVar2 = 0;
LAB_008123b0:
    uVar3 = -(uint)bVar2 & (uint)piVar8;
  }
  iVar4 = FUN_00401f00(0x110);
  if (iVar4 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_00811c20(uVar3);
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



undefined4 FUN_00812470(void)

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
  local_10 = in_ECX;
  piVar4 = (int *)FUN_007606a0(&local_10,uVar3);
  iVar2 = *(int *)(in_ECX + 0x7c);
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
    *(int *)(in_ECX + 0x7c) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  local_4 = 0xffffffff;
  if ((local_10 != 0) &&
     (*(int *)(local_10 + 0x60) = *(int *)(local_10 + 0x60) + -1, *(int *)(local_10 + 0x60) == 0)) {
    FUN_007604d0();
  }
  FUN_00811a30();
  *unaff_FS_OFFSET = local_c;
  return 1;
}



int FUN_00812510(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  uVar1 = *(ushort *)(in_ECX + 0xe);
  if ((uVar1 != *(ushort *)(in_ECX + 0xc)) && (param_1 != (undefined4 *)0x0)) {
    puVar2 = (undefined4 *)((uint)uVar1 * 0x10 + *(int *)(in_ECX + 0x10));
    *puVar2 = *param_1;
    puVar2[1] = param_1[1];
    puVar2[2] = param_1[2];
    puVar2[3] = param_1[3];
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + (uint)*(ushort *)(in_ECX + 0xe) * 4) = param_2;
    *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + 1;
    return 1;
  }
  return (uint)(byte)(uVar1 >> 8) << 8;
}



undefined2 FUN_00812570(ushort param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined4 *puVar3;
  int in_ECX;
  uint uVar4;
  
  uVar2 = *(ushort *)(in_ECX + 0xe);
  if (param_1 < uVar2) {
    uVar4 = (uint)param_1;
    if (uVar4 != uVar2 - 1) {
      puVar1 = (undefined4 *)((uint)uVar2 * 0x10 + -0x10 + *(int *)(in_ECX + 0x10));
      puVar3 = (undefined4 *)(uVar4 * 0x10 + *(int *)(in_ECX + 0x10));
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      puVar3[2] = puVar1[2];
      puVar3[3] = puVar1[3];
      *(undefined4 *)(*(int *)(in_ECX + 0x14) + uVar4 * 4) =
           *(undefined4 *)(*(int *)(in_ECX + 0x14) + -4 + (uint)*(ushort *)(in_ECX + 0xe) * 4);
    }
    *(undefined4 *)((uint)*(ushort *)(in_ECX + 0xe) * 0x10 + -0x10 + *(int *)(in_ECX + 0x10)) = 0;
    *(undefined4 *)((uint)*(ushort *)(in_ECX + 0xe) * 0x10 + -0xc + *(int *)(in_ECX + 0x10)) = 0;
    *(undefined4 *)((uint)*(ushort *)(in_ECX + 0xe) * 0x10 + -8 + *(int *)(in_ECX + 0x10)) =
         0xc1200000;
    *(undefined4 *)((uint)*(ushort *)(in_ECX + 0xe) * 0x10 + -4 + *(int *)(in_ECX + 0x10)) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x14) + -4 + (uint)*(ushort *)(in_ECX + 0xe) * 4) = 0;
    *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + -1;
    DAT_00b4334c = DAT_00b4334c + -1;
  }
  return *(undefined2 *)(in_ECX + 0xe);
}



undefined2 FUN_00812630(int param_1)

{
  int in_ECX;
  int extraout_ECX;
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(in_ECX + 0xe);
  while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
    if (param_1 == *(int *)(*(int *)(in_ECX + 0x14) + uVar1 * 4)) {
      FUN_00812570(uVar1);
      in_ECX = extraout_ECX;
    }
  }
  return *(undefined2 *)(in_ECX + 0xe);
}



void FUN_00812660(undefined4 *param_1)

{
  char cVar1;
  int in_ECX;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(in_ECX + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_1;
      param_1 = param_1 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  iVar2 = *(int *)(in_ECX + 8);
  if (*(char *)(in_ECX + 0x34) == '\0') {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffffbff;
  }
  else {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x400;
  }
  *(undefined4 *)(iVar2 + 0x24) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  if (*(char *)(in_ECX + 0x35) == '\0') {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xfffff7ff;
  }
  else {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x800;
  }
  *(undefined4 *)(iVar2 + 0x24) = 0;
  iVar2 = *(int *)(in_ECX + 8);
  cVar1 = *(char *)(in_ECX + 0x36);
  *(undefined4 *)(iVar2 + 0x24) = 0;
  if (cVar1 == '\0') {
    *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) & 0xffffefff;
    return;
  }
  *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 0x1000;
  return;
}



void FUN_008126d0(void)

{
  float fVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  int *piVar5;
  uint *in_ECX;
  float *pfVar6;
  int unaff_ESI;
  float10 fVar7;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_30 = 5e+09;
  if (*(ushort *)((int)in_ECX + 0xe) == 0) {
    local_30 = 0.0;
  }
  uVar3 = (uint)*(ushort *)((int)in_ECX + 0xe);
  local_1c = local_30;
  local_18 = local_30;
  local_14 = local_30;
  local_28 = -local_30;
  local_24 = local_28;
  local_20 = local_28;
  if (uVar3 != 0) {
    pfVar6 = (float *)in_ECX[4];
    do {
      if (*pfVar6 <= local_1c) {
        local_1c = *pfVar6;
      }
      if (local_28 <= *pfVar6) {
        local_28 = *pfVar6;
      }
      if (pfVar6[1] <= local_18) {
        local_18 = pfVar6[1];
      }
      if (local_24 <= pfVar6[1]) {
        local_24 = pfVar6[1];
      }
      if (pfVar6[2] <= local_14) {
        local_14 = pfVar6[2];
      }
      if (local_20 <= pfVar6[2]) {
        local_20 = pfVar6[2];
      }
      pfVar6 = pfVar6 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  uVar3 = in_ECX[1];
  if ((uVar3 != 0) && (piVar5 = (int *)*in_ECX, piVar5 != (int *)0x0)) {
    local_1c = (local_28 - local_1c) * 0.5 + local_1c;
    local_18 = (local_24 - local_18) * 0.5 + local_18;
    local_14 = (local_20 - local_14) * 0.5 + local_14;
    fVar7 = (float10)FUN_00982c30();
    fVar1 = (float)fVar7 + *(float *)(uVar3 + 0x28);
    for (puVar4 = (undefined *)(**(code **)(*piVar5 + 4))(); puVar4 != (undefined *)0x0;
        puVar4 = *(undefined **)(puVar4 + 4)) {
      if (puVar4 == &DAT_00b47878) {
        bVar2 = 1;
        goto LAB_008128d8;
      }
    }
    bVar2 = 0;
LAB_008128d8:
    piVar5 = (int *)(-(uint)bVar2 & (uint)piVar5);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x9c))(local_1c,local_18,local_14,fVar1);
      (**(code **)(*piVar5 + 0xa0))(*(undefined2 *)(unaff_ESI + 0xe));
      return;
    }
    piVar5 = (int *)FUN_00560920(&DAT_00b4786c,*in_ECX);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 0x9c))(local_1c,local_18,local_14,fVar1);
      (**(code **)(*piVar5 + 0xa0))(*(undefined2 *)((int)in_ECX + 0xe));
    }
  }
  return;
}



void FUN_00812980(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  _memset(*(void **)(in_ECX + 0x14),0,(uint)*(ushort *)(in_ECX + 0xc) * 4);
  _memset(*(void **)(in_ECX + 0x10),0,(uint)*(ushort *)(in_ECX + 0xc) << 4);
  iVar1 = 0;
  if (*(short *)(in_ECX + 0xc) != 0) {
    iVar2 = 0;
    do {
      *(undefined4 *)(*(int *)(in_ECX + 0x10) + 8 + iVar2) = 0xc1200000;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar1 < (int)(uint)*(ushort *)(in_ECX + 0xc));
  }
  DAT_00b4334c = DAT_00b4334c - (uint)*(ushort *)(in_ECX + 0xe);
  *(undefined2 *)(in_ECX + 0xe) = 0;
  FUN_008126d0();
  return;
}



void FUN_008129f0(undefined4 *param_1,int param_2,int param_3,char param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009d11aa;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_4 = 2;
  FUN_007c28e0(uVar2);
  *(char *)(in_ECX + 0x10) = param_4;
  *(undefined2 *)(in_ECX + 3) = *(undefined2 *)(param_1 + 0xb);
  puVar6 = (undefined4 *)in_ECX[1];
  if (puVar6 != param_1) {
    if (puVar6 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar6 + 1);
      if ((LVar3 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
    }
    in_ECX[1] = (int)param_1;
    InterlockedIncrement(param_1 + 1);
  }
  in_ECX[0xe] = param_2;
  in_ECX[0xf] = param_3;
  iVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 3) * 4);
  in_ECX[5] = iVar4;
  iVar4 = FUN_00401f00((uint)*(ushort *)(in_ECX + 3) * 0x10);
  in_ECX[4] = iVar4;
  FUN_00812980();
  puVar6 = (undefined4 *)*in_ECX;
  if (puVar6 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar6 + 1);
    if ((LVar3 == 0) && (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *in_ECX = 0;
  }
  uVar5 = param_1[2];
  if (*(char *)(param_1 + 0xc) == '\x01') {
    iVar4 = FUN_00401f00(0xd4);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (iVar4 != 0) {
      uVar5 = FUN_00864430(uVar5);
      goto LAB_00812b45;
    }
  }
  else {
    iVar4 = FUN_00401f00(0xd4);
    local_4 = CONCAT31(local_4._1_3_,4);
    if (iVar4 != 0) {
      uVar5 = FUN_008645d0(uVar5);
      goto LAB_00812b45;
    }
  }
  uVar5 = 0;
LAB_00812b45:
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0075fa90(uVar5);
  if ((DAT_00b42f48 < 2) || (DAT_00b43070 == '\0')) {
    iVar4 = param_1[7];
  }
  else {
    iVar4 = param_1[6];
  }
  if (iVar4 != 0) {
    FUN_00405680(iVar4);
  }
  if (param_1[8] != 0) {
    FUN_00405680(param_1[8]);
  }
  iVar4 = FUN_00401f00(0xb0);
  local_4._0_1_ = 5;
  if (iVar4 == 0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    puVar6 = (undefined4 *)FUN_007c2c30();
  }
  puVar1 = (undefined4 *)puVar6[0x29];
  local_4 = CONCAT31(local_4._1_3_,2);
  if (puVar1 != (undefined4 *)param_1[5]) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar4 = param_1[5];
    puVar6[0x29] = iVar4;
    if (iVar4 != 0) {
      InterlockedIncrement((LONG *)(iVar4 + 4));
    }
  }
  puVar6[0x27] = in_ECX;
  if (param_4 == '\0') {
    puVar6[7] = puVar6[7] & 0xfffffffb;
  }
  else {
    puVar6[7] = puVar6[7] | 4;
  }
  puVar6[9] = 0;
  if (*(char *)((int)param_1 + 0x31) == '\0') {
    puVar6[7] = puVar6[7] & 0xffffdfff;
  }
  else {
    puVar6[7] = puVar6[7] | 0x2000;
  }
  puVar6[9] = 0;
  FUN_00405680(puVar6);
  puVar1 = (undefined4 *)in_ECX[2];
  if (puVar1 != puVar6) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[2] = (int)puVar6;
    InterlockedIncrement(puVar6 + 1);
  }
  iVar7 = FUN_007b4290(2);
  puVar6 = *(undefined4 **)(iVar7 + 4);
  iVar4 = *in_ECX;
  puVar1 = *(undefined4 **)(iVar4 + 0xbc);
  if (puVar1 != puVar6) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(iVar4 + 0xbc) = puVar6;
    if (puVar6 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar6 + 1);
    }
  }
  (**(code **)(**(int **)(iVar7 + 4) + 0x18))(*in_ECX);
  iVar7 = param_1[4] * param_1[0xb];
  iVar4 = FUN_00401f00(0x2c);
  puStack_8._0_1_ = 6;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_007e3ae0(iVar7,1);
  }
  puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
  FUN_007263b0(1);
  FUN_007260b0(0,param_1[3],iVar7 * 4,0);
  FUN_007262a0(0,0,0,1,iVar7,4,4);
  FUN_006c61e0(uVar5);
  *unaff_FS_OFFSET = (int)in_ECX;
  return;
}



void FUN_00812d60(void)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009d089e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = *(int **)(*in_ECX + 0x1c);
  local_4 = 2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x88))(local_14,*in_ECX,uVar3);
    if (local_14[0] != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(local_14[0] + 1);
      if ((LVar4 == 0) && (local_14[0] != (undefined4 *)0x0)) {
        (**(code **)*local_14[0])(1);
      }
    }
  }
  puVar2 = (undefined4 *)*in_ECX;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    *in_ECX = 0;
  }
  puVar2 = (undefined4 *)in_ECX[2];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[2] = 0;
  }
  puVar2 = (undefined4 *)in_ECX[1];
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    in_ECX[1] = 0;
  }
  FUN_00812980();
  if (in_ECX[4] != 0) {
    FUN_00401f20(in_ECX[4]);
    in_ECX[4] = 0;
  }
  FUN_00401f20(in_ECX[5]);
  in_ECX[5] = 0;
  puVar2 = (undefined4 *)in_ECX[2];
  local_4._0_1_ = 1;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)in_ECX[1];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  puVar2 = (undefined4 *)*in_ECX;
  local_4 = 0xffffffff;
  if (puVar2 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar2 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00812ef0(undefined4 param_1)

{
  int in_ECX;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
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
  float local_c;
  float local_8;
  float local_4;
  
  switch(param_1) {
  case 0:
    local_78 = -DAT_00b258dc;
    local_74 = -DAT_00b258e0;
    local_70 = -DAT_00b258e4;
    local_18 = *(float *)(in_ECX + 0x88) - DAT_00b258d0;
    local_14 = *(float *)(in_ECX + 0x8c) - DAT_00b258d4;
    local_10 = *(float *)(in_ECX + 0x90) - DAT_00b258d8;
    FUN_0070c340(&local_18,&local_78);
    return;
  case 1:
    local_60 = -DAT_00b258dc;
    local_5c = -DAT_00b258e0;
    local_58 = -DAT_00b258e4;
    local_30 = DAT_00b258d0 + *(float *)(in_ECX + 0x88);
    local_2c = *(float *)(in_ECX + 0x8c) + DAT_00b258d4;
    local_28 = *(float *)(in_ECX + 0x90) + DAT_00b258d8;
    FUN_0070c340(&local_30,&local_60);
    return;
  case 2:
    local_48 = *(float *)(in_ECX + 0x88) - DAT_00b258dc;
    local_44 = *(float *)(in_ECX + 0x8c) - DAT_00b258e0;
    local_40 = *(float *)(in_ECX + 0x90) - DAT_00b258e4;
    FUN_0070c340(&local_48,&DAT_00b258e8);
    return;
  case 3:
    local_84 = -DAT_00b258e8;
    local_80 = -DAT_00b258ec;
    local_7c = -DAT_00b258f0;
    local_6c = *(float *)(in_ECX + 0x88) + DAT_00b258dc;
    local_68 = *(float *)(in_ECX + 0x8c) + DAT_00b258e0;
    local_64 = *(float *)(in_ECX + 0x90) + DAT_00b258e4;
    FUN_0070c340(&local_6c,&local_84);
    return;
  case 4:
    local_54 = -DAT_00b258dc;
    local_50 = -DAT_00b258e0;
    local_4c = -DAT_00b258e4;
    local_3c = *(float *)(in_ECX + 0x88) - DAT_00b258e8;
    local_38 = *(float *)(in_ECX + 0x8c) - DAT_00b258ec;
    local_34 = *(float *)(in_ECX + 0x90) - DAT_00b258f0;
    FUN_0070c340(&local_3c,&local_54);
    return;
  case 5:
    local_24 = -DAT_00b258dc;
    local_20 = -DAT_00b258e0;
    local_1c = -DAT_00b258e4;
    local_c = *(float *)(in_ECX + 0x88) + DAT_00b258e8;
    local_8 = *(float *)(in_ECX + 0x8c) + DAT_00b258ec;
    local_4 = *(float *)(in_ECX + 0x90) + DAT_00b258f0;
    FUN_0070c340(&local_c,&local_24);
  }
  return;
}



void FUN_00813190(void)

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
  
  puStack_8 = &LAB_009d120c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a94854;
  local_4 = 3;
  piVar5 = in_ECX + 0x4a;
  iVar4 = 6;
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
  puVar1 = (undefined4 *)in_ECX[0x50];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x50] = 0;
  }
  iVar4 = in_ECX[0x53];
  if (iVar4 != 0) {
    FUN_00803690(uVar2);
    FUN_00401f20(iVar4);
    in_ECX[0x53] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x52];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x50];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_(in_ECX + 0x4a,4,6,FUN_007016a0);
  local_4 = 0xffffffff;
  FUN_0070c170();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00813300(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  LONG LVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *puStack_a4;
  int *local_a0 [37];
  int local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d1251;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff28;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar2 = DAT_00b43104;
  if (param_1 != 0) {
    local_c8 = *(undefined4 *)(in_ECX + 0x6c);
    local_c4 = *(undefined4 *)(in_ECX + 0x78);
    local_c0 = *(undefined4 *)(in_ECX + 0x84);
    local_bc = *(undefined4 *)(in_ECX + 0x68);
    local_b8 = *(undefined4 *)(in_ECX + 0x74);
    local_b4 = *(undefined4 *)(in_ECX + 0x80);
    local_b0 = *(undefined4 *)(in_ECX + 100);
    local_ac = *(undefined4 *)(in_ECX + 0x70);
    local_a8 = *(undefined4 *)(in_ECX + 0x7c);
    if (((DAT_00b43104[0x80] == 1) || (DAT_00b43104[0x81] == 1)) &&
       ((char)DAT_00b43104[0x83] == '\x01')) {
      (**(code **)(*DAT_00b43104 + 0x140))
                (in_ECX + 0x88,&local_b0,&local_bc,&local_c8,in_ECX + 0xec,in_ECX + 0x110,uVar3);
    }
    piVar4 = (int *)FUN_007b7650();
    local_a0[0] = piVar4;
    if (piVar4 != (int *)0x0) {
      InterlockedIncrement(piVar4 + 1);
    }
    puVar1 = (undefined4 *)piVar2[2];
    iStack_4 = 0;
    puStack_a4 = puVar1;
    if (puVar1 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar1 + 1);
    }
    iStack_4 = CONCAT31(iStack_4._1_3_,1);
    FUN_00405710(piVar4);
    (**(code **)(*piVar4 + 0x4c))();
    *(undefined1 *)(piVar4 + 0x878) = 1;
    FUN_0070df30(0);
    puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
    FUN_00707370(0,1);
    FUN_0070e040(in_ECX + 0xec);
    FUN_007d2070(local_a0);
    *(undefined1 *)((int)piVar4 + 0x21e1) = 1;
    (**(code **)(*piVar4 + 0x50))();
    FUN_00405710(puVar1);
    if ((uint)piVar4[1] < 2) {
      InterlockedIncrement(piVar4 + 1);
    }
    iStack_4._0_1_ = 1;
    FUN_0070dfa0();
    iStack_4 = (uint)iStack_4._1_3_ << 8;
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if (LVar5 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    iStack_4 = 0xffffffff;
    LVar5 = InterlockedDecrement(piVar4 + 1);
    if (LVar5 == 0) {
      (**(code **)*piVar4)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00813510(void)

{
  undefined4 *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 **ppuVar5;
  LONG LVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  int in_ECX;
  uint unaff_EBX;
  code *pcVar11;
  int *unaff_FS_OFFSET;
  int iStack_d4;
  ushort uStack_d0;
  undefined4 *local_cc;
  undefined1 auStack_c8 [4];
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  int *piStack_a8;
  undefined4 *puStack_a4;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d12a1;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff18;
  *unaff_FS_OFFSET = (int)&local_c;
  local_c4 = DAT_00b25ad0;
  local_c0 = DAT_00b25ad4;
  local_bc = DAT_00b25ad8;
  local_b8 = DAT_00b25adc;
  local_cc = (undefined4 *)0x0;
  (**(code **)(*DAT_00b43104 + 0x68))(&local_c4,uVar4);
  if (DAT_00b42eac == 5) {
    uStack_d0 = *(ushort *)(*(int *)(in_ECX + 0x144) + 0x118);
    local_b8 = 0x45800000;
    uStack_b4 = 0x45800000;
    uStack_b0 = 0x45800000;
    uStack_ac = 0x3f800000;
    (**(code **)(*DAT_00b43104 + 0x60))(&local_b8);
  }
  iStack_d4 = 0;
  do {
    FUN_00812ef0(iStack_d4);
    if (*(int *)(in_ECX + 0x140) == 0) {
      unaff_EBX = unaff_EBX | 1;
      local_cc = (undefined4 *)0x0;
      ppuVar5 = &local_cc;
    }
    else {
      ppuVar5 = (undefined4 **)(*(int *)(in_ECX + 0x140) + 0x20);
    }
    puVar9 = local_cc;
    puVar1 = *ppuVar5;
    if ((((unaff_EBX & 1) != 0) && (unaff_EBX = 0, local_cc != (undefined4 *)0x0)) &&
       (LVar6 = InterlockedDecrement(local_cc + 1), LVar6 == 0)) {
      (**(code **)*puVar9)(1);
    }
    puVar1[0x10] = iStack_d4;
    puVar9 = (undefined4 *)puVar1[0xc];
    pcVar11 = InterlockedIncrement_exref;
    if (puVar9 != (undefined4 *)puVar1[iStack_d4 + 0x11]) {
      if (((puVar9 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0))
         && (puVar9 != (undefined4 *)0x0)) {
        (**(code **)*puVar9)(1);
      }
      iVar2 = puVar1[iStack_d4 + 0x11];
      puVar1[0xc] = iVar2;
      pcVar11 = InterlockedIncrement_exref;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
      }
    }
    uVar7 = FUN_007d6fe0();
    FUN_007d7280(7,uVar7);
    uVar3 = 0;
    switch(iStack_d4) {
    case 0:
      uVar3 = 1;
      break;
    case 1:
      uVar3 = 2;
      break;
    case 2:
      uVar3 = 4;
      break;
    case 3:
      uVar3 = 8;
      break;
    case 4:
      uVar3 = 0x10;
      break;
    case 5:
      uVar3 = 0x20;
    }
    if ((uVar3 & uStack_d0) == 0) {
      FUN_00707370(0,1);
      if (DAT_00b42eac == 5) {
        if (*(int *)(in_ECX + 0x144) != 0) {
          FUN_007ee390(0,*(int *)(in_ECX + 0x144),0x3f800000);
          puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x144) + 0x114);
          puVar9 = *(undefined4 **)(in_ECX + 0x140);
          if (puVar9 != puVar1) {
            if (((puVar9 != (undefined4 *)0x0) &&
                (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
               (puVar9 != (undefined4 *)0x0)) {
              (**(code **)*puVar9)(1);
            }
            *(undefined4 **)(in_ECX + 0x140) = puVar1;
            if (puVar1 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar1 + 1);
            }
          }
          FUN_00813300(*(undefined4 *)(in_ECX + 0x144));
        }
      }
      else if (*(int *)(in_ECX + 0x148) != 0) {
        piVar8 = (int *)FUN_007b7650();
        piStack_a8 = piVar8;
        if (piVar8 != (int *)0x0) {
          (*pcVar11)(piVar8 + 1);
        }
        puStack_8 = (undefined1 *)0x0;
        if (piVar8[1] == 1) {
          (*pcVar11)(piVar8 + 1);
        }
        puVar1 = *(undefined4 **)(DAT_00b3f928 + 8);
        puStack_a4 = puVar1;
        if (puVar1 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar1 + 1);
        }
        piVar10 = *(int **)(DAT_00b3f928 + 8);
        puVar9 = (undefined4 *)(DAT_00b3f928 + 8);
        puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
        if (piVar10 != piVar8) {
          if (((piVar10 != (int *)0x0) && (LVar6 = InterlockedDecrement(piVar10 + 1), LVar6 == 0))
             && (piVar10 != (int *)0x0)) {
            (**(code **)*piVar10)(1);
          }
          *puVar9 = piVar8;
          InterlockedIncrement(piVar8 + 1);
        }
        (**(code **)(*piVar8 + 0x4c))();
        *(undefined1 *)(piVar8 + 0x878) = 1;
        FUN_0070df30(0);
        local_c = CONCAT31(local_c._1_3_,2);
        FUN_0070e040(in_ECX + 0xec);
        FUN_0070c0b0();
        *(undefined1 *)((int)piVar8 + 0x21e1) = 1;
        (**(code **)(*piVar8 + 0x50))();
        puVar9 = *(undefined4 **)(DAT_00b3f928 + 8);
        piVar10 = (int *)(DAT_00b3f928 + 8);
        if (puVar9 != puVar1) {
          if (((puVar9 != (undefined4 *)0x0) &&
              (LVar6 = InterlockedDecrement(puVar9 + 1), LVar6 == 0)) &&
             (puVar9 != (undefined4 *)0x0)) {
            (**(code **)*puVar9)(1);
          }
          *piVar10 = (int)puVar1;
          if (puVar1 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar1 + 1);
          }
        }
        puStack_8._0_1_ = 1;
        FUN_0070dfa0();
        puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
        if ((puVar1 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar1 + 1), LVar6 == 0))
        {
          (**(code **)*puVar1)(1);
        }
        puStack_8 = (undefined1 *)0xffffffff;
        LVar6 = InterlockedDecrement(piVar8 + 1);
        if (LVar6 == 0) {
          (**(code **)*piVar8)(1);
        }
      }
    }
    FUN_007d72d0();
    iStack_d4 = iStack_d4 + 1;
  } while (iStack_d4 < 6);
  (**(code **)(*DAT_00b43104 + 0x60))(auStack_c8);
  *unaff_FS_OFFSET = iStack_14;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00813960(void)

{
  float fVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 **ppuVar6;
  LONG LVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int in_ECX;
  code *pcVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  int unaff_retaddr;
  int iVar13;
  uint uStack_140;
  float local_13c;
  float fStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 *puStack_12c;
  uint uStack_128;
  float local_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  float fStack_114;
  float fStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  float fStack_d4;
  float fStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 auStack_b4 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009d12f1;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffeac;
  *unaff_FS_OFFSET = (int)&local_c;
  local_b0 = DAT_00b25ad0;
  local_ac = DAT_00b25ad4;
  local_a8 = DAT_00b25ad8;
  local_a4 = DAT_00b25adc;
  local_13c = 0.0;
  local_124 = 0.0;
  (**(code **)(*DAT_00b43104 + 0x68))(&local_b0,uVar5);
  if (DAT_00b42eac == 5) {
    uStack_128 = (uint)*(ushort *)(*(int *)(in_ECX + 0x144) + 0x118);
    local_13c = 4096.0;
    fStack_138 = 4096.0;
    uStack_134 = 0x45800000;
    uStack_130 = 0x3f800000;
    (**(code **)(*DAT_00b43104 + 0x60))(&local_13c);
  }
  iVar13 = 0;
  do {
    if ((unaff_retaddr == -1) || (iVar13 == unaff_retaddr)) {
      FUN_00812ef0(iVar13);
      if (*(int *)(in_ECX + 0x140) == 0) {
        uStack_140 = uStack_140 | 1;
        puStack_12c = (undefined4 *)0x0;
        ppuVar6 = &puStack_12c;
      }
      else {
        ppuVar6 = (undefined4 **)(*(int *)(in_ECX + 0x140) + 0x20);
      }
      puVar3 = puStack_12c;
      puVar2 = *ppuVar6;
      if ((((uStack_140 & 1) != 0) && (uStack_140 = 0, puStack_12c != (undefined4 *)0x0)) &&
         (LVar7 = InterlockedDecrement(puStack_12c + 1), LVar7 == 0)) {
        (**(code **)*puVar3)(1);
      }
      puVar2[0x10] = iVar13;
      puVar3 = (undefined4 *)puVar2[0xc];
      pcVar11 = InterlockedIncrement_exref;
      if (puVar3 != (undefined4 *)puVar2[iVar13 + 0x11]) {
        if (((puVar3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar3 + 1), LVar7 == 0)
            ) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        iVar10 = puVar2[iVar13 + 0x11];
        puVar2[0xc] = iVar10;
        pcVar11 = InterlockedIncrement_exref;
        if (iVar10 != 0) {
          InterlockedIncrement((LONG *)(iVar10 + 4));
        }
      }
      uVar8 = FUN_007d6fe0();
      FUN_007d7280(7,uVar8);
      uVar4 = 0;
      switch(iVar13) {
      case 0:
        FUN_0075fa90(DAT_00b43100);
        uVar4 = 1;
        break;
      case 1:
        FUN_0075fa90(DAT_00b43100);
        uVar4 = 2;
        break;
      case 2:
        FUN_0075fa90(DAT_00b43100);
        uVar4 = 4;
        break;
      case 3:
        FUN_0075fa90(DAT_00b43100);
        uVar4 = 8;
        break;
      case 4:
        uVar4 = 0x20;
        break;
      case 5:
        FUN_0075fa90(DAT_00b430e4);
        uVar4 = 0x10;
      }
      if ((uVar4 & (ushort)uStack_128) == 0) {
        FUN_00707370(0,1);
        if (DAT_00b42eac == 5) {
          if (*(int *)(in_ECX + 0x144) != 0) {
            FUN_007ee390(0,*(int *)(in_ECX + 0x144),0x3f800000);
            FUN_0075fa90(*(undefined4 *)(*(int *)(in_ECX + 0x144) + 0x114));
            FUN_00813300(*(undefined4 *)(in_ECX + 0x144));
          }
        }
        else if (*(int *)(in_ECX + 0x148) != 0) {
          piVar9 = (int *)FUN_007b7650();
          if (piVar9 != (int *)0x0) {
            (*pcVar11)(piVar9 + 1);
          }
          puStack_8 = (undefined1 *)0x0;
          if (piVar9[1] == 1) {
            (*pcVar11)(piVar9 + 1);
          }
          puVar2 = *(undefined4 **)(DAT_00b3f928 + 8);
          local_a4 = puVar2;
          if (puVar2 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar2 + 1);
          }
          puStack_8._0_1_ = 1;
          FUN_00405710(piVar9);
          (**(code **)(*piVar9 + 0x4c))();
          *(undefined1 *)(piVar9 + 0x878) = 1;
          FUN_0070df30(0);
          local_c = CONCAT31(local_c._1_3_,2);
          FUN_0070e040(in_ECX + 0xec);
          FUN_0070c0b0();
          *(undefined1 *)((int)piVar9 + 0x21e1) = 1;
          (**(code **)(*piVar9 + 0x50))();
          FUN_00405710(puVar2);
          puStack_8._0_1_ = 1;
          FUN_0070dfa0();
          puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
          if ((puVar2 != (undefined4 *)0x0) &&
             (LVar7 = InterlockedDecrement(puVar2 + 1), LVar7 == 0)) {
            (**(code **)*puVar2)(1);
          }
          puStack_8 = (undefined1 *)0xffffffff;
          LVar7 = InterlockedDecrement(piVar9 + 1);
          if (LVar7 == 0) {
            (**(code **)*piVar9)(1);
          }
        }
      }
      thunk_FUN_00573880();
      iVar10 = FUN_007b4290(0xc);
      if ((iVar10 != 0) && (*(int *)(iVar10 + 4) != 0)) {
        FUN_00803790(*(int *)(iVar10 + 4));
      }
      switch(iVar13) {
      case 0:
        fVar12 = (float10)FUN_00986000();
        fVar1 = (float)fVar12;
        fStack_c4 = fVar1;
        fVar12 = (float10)FUN_00986300();
        _DAT_00b474d0 = (float)fVar12;
        _DAT_00b474cc = fStack_c4;
        uStack_bc = 0;
        uStack_b8 = 0;
        _DAT_00b474dc = -_DAT_00b474d0;
        _DAT_00b474d4 = 0;
        _DAT_00b474d8 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        _DAT_00b474e4 = 0;
        _DAT_00b474e8 = 0;
        uVar8 = *(undefined4 *)(in_ECX + 0x140);
        _DAT_00b474e0 = fVar1;
        local_124 = _DAT_00b474dc;
        fStack_120 = fVar1;
        fStack_c0 = _DAT_00b474d0;
        break;
      case 1:
        fVar12 = (float10)FUN_00986000();
        fVar1 = (float)fVar12;
        fStack_f4 = fVar1;
        fVar12 = (float10)FUN_00986300();
        _DAT_00b474d0 = (float)fVar12;
        _DAT_00b474cc = fStack_f4;
        uStack_ec = 0;
        uStack_e8 = 0;
        _DAT_00b474dc = -_DAT_00b474d0;
        _DAT_00b474d4 = 0;
        _DAT_00b474d8 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        _DAT_00b474e4 = 0;
        _DAT_00b474e8 = 0;
        uVar8 = *(undefined4 *)(in_ECX + 0x140);
        _DAT_00b474e0 = fVar1;
        fStack_f0 = _DAT_00b474d0;
        fStack_e4 = _DAT_00b474dc;
        fStack_e0 = fVar1;
        break;
      case 2:
        fVar12 = (float10)FUN_00986000();
        fVar1 = (float)fVar12;
        fStack_104 = fVar1;
        fVar12 = (float10)FUN_00986300();
        _DAT_00b474d0 = (float)fVar12;
        _DAT_00b474cc = fStack_104;
        uStack_fc = 0;
        uStack_f8 = 0;
        _DAT_00b474dc = -_DAT_00b474d0;
        _DAT_00b474d4 = 0;
        _DAT_00b474d8 = 0;
        uStack_10c = 0;
        uStack_108 = 0;
        _DAT_00b474e4 = 0;
        _DAT_00b474e8 = 0;
        uVar8 = *(undefined4 *)(in_ECX + 0x140);
        _DAT_00b474e0 = fVar1;
        fStack_114 = _DAT_00b474dc;
        fStack_110 = fVar1;
        fStack_100 = _DAT_00b474d0;
        break;
      case 3:
        fVar12 = (float10)FUN_00986000();
        fVar1 = (float)fVar12;
        fStack_d4 = fVar1;
        fVar12 = (float10)FUN_00986300();
        _DAT_00b474d0 = (float)fVar12;
        _DAT_00b474cc = fStack_d4;
        uStack_cc = 0;
        uStack_c8 = 0;
        _DAT_00b474dc = -_DAT_00b474d0;
        _DAT_00b474d4 = 0;
        _DAT_00b474d8 = 0;
        uStack_134 = 0;
        uStack_130 = 0;
        _DAT_00b474e4 = 0;
        _DAT_00b474e8 = 0;
        uVar8 = *(undefined4 *)(in_ECX + 0x140);
        _DAT_00b474e0 = fVar1;
        local_13c = _DAT_00b474dc;
        fStack_138 = fVar1;
        fStack_d0 = _DAT_00b474d0;
        break;
      default:
        goto switchD_00813d1e_caseD_4;
      case 5:
        uVar8 = *(undefined4 *)(in_ECX + 0x140);
      }
      FUN_008037d0(DAT_00b43104,uVar8,uVar8);
switchD_00813d1e_caseD_4:
      FUN_007d72d0();
    }
    iVar13 = iVar13 + 1;
    if (5 < iVar13) {
      (**(code **)(*DAT_00b43104 + 0x60))(auStack_b4);
      puVar2 = DAT_00b474ec;
      if (DAT_00b474ec != (undefined4 *)0x0) {
        LVar7 = InterlockedDecrement(DAT_00b474ec + 1);
        if ((LVar7 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
        DAT_00b474ec = (undefined4 *)0x0;
      }
      *unaff_FS_OFFSET = iStack_14;
      return;
    }
  } while( true );
}



void FUN_00814160(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  float afStack_28 [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d1367;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070d590(uVar2);
  piVar7 = in_ECX + 0x4a;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a94854;
  _eh_vector_constructor_iterator_(piVar7,4,6,FUN_007c88a0,FUN_007016a0);
  in_ECX[0x50] = 0;
  in_ECX[0x52] = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x49] = param_1;
  iVar5 = 6;
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
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  puVar1 = (undefined4 *)in_ECX[0x50];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x50] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x52];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x52] = 0;
  }
  FUN_0070de60(0);
  uStack_10 = 0;
  fVar9 = (float10)FUN_00983af0();
  afStack_28[1] = (float)fVar9;
  afStack_28[0] = -afStack_28[1];
  afStack_28[3] = -afStack_28[1];
  afStack_28[2] = afStack_28[1];
  uStack_18 = 0x3f800000;
  uStack_14 = 0x45000000;
  pfVar6 = afStack_28;
  pfVar8 = (float *)(in_ECX + 0x3b);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar8 = pfVar8 + 1;
  }
  iVar5 = FUN_00401f00(0x1c);
  local_4._0_1_ = 4;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00803a30();
  }
  local_4 = CONCAT31(local_4._1_3_,3);
  in_ECX[0x53] = uVar4;
  thunk_FUN_00573880();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00814320(byte param_1)

{
  FUN_00813190();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00814430(void)

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
  
  puStack_8 = &LAB_009d1418;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b455ac;
  iVar10 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar11 = 0;
  if ((DAT_00b455ac != 0) && (iVar11 = iVar2, DAT_00b455ac != 0)) {
    *(int *)(DAT_00b455ac + 0x60) = *(int *)(DAT_00b455ac + 0x60) + 1;
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
  puVar4 = DAT_00b45290;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b45290) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45088;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45088) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,2,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x16,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b2c = 0x4000a;
  _DAT_00b441bc = 4;
  if (iVar11 != DAT_00b455e0) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455e0;
    if (DAT_00b455e0 != 0) {
      *(int *)(DAT_00b455e0 + 0x60) = *(int *)(DAT_00b455e0 + 0x60) + 1;
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
  puVar4 = DAT_00b45290;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b45290) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45088;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45088) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43b60 = 2;
  DAT_00b441f0 = 4;
  if (iVar11 != DAT_00b455e4) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455e4;
    if (DAT_00b455e4 != 0) {
      *(int *)(DAT_00b455e4 + 0x60) = *(int *)(DAT_00b455e4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
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
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b452f0;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b452f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45118;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45118) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b64 = 2;
  _DAT_00b441f4 = 0x84;
  _DAT_00b44884 = 4;
  if (iVar11 != DAT_00b455e8) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455e8;
    if (DAT_00b455e8 != 0) {
      *(int *)(DAT_00b455e8 + 0x60) = *(int *)(DAT_00b455e8 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b45290;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b45290) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45088;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45088) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b68 = 2;
  _DAT_00b441f8 = 4;
  if (iVar11 != DAT_00b455ec) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455ec;
    if (DAT_00b455ec != 0) {
      *(int *)(DAT_00b455ec + 0x60) = *(int *)(DAT_00b455ec + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 2) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
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
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b452f0;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b452f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45118;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45118) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b6c = 2;
  _DAT_00b441fc = 0x84;
  _DAT_00b4488c = 4;
  if (iVar11 != DAT_00b455f0) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455f0;
    if (DAT_00b455f0 != 0) {
      *(int *)(DAT_00b455f0 + 0x60) = *(int *)(DAT_00b455f0 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4530c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4530c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45088;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45088) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b70 = 0x40008;
  _DAT_00b44200 = 4;
  if (iVar11 != DAT_00b455f4) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455f4;
    if (DAT_00b455f4 != 0) {
      *(int *)(DAT_00b455f4 + 0x60) = *(int *)(DAT_00b455f4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
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
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4535c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4535c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45118;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45118) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b74 = 0x40008;
  _DAT_00b44204 = 0x84;
  _DAT_00b44894 = 4;
  if (iVar11 != DAT_00b455f8) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455f8;
    if (DAT_00b455f8 != 0) {
      *(int *)(DAT_00b455f8 + 0x60) = *(int *)(DAT_00b455f8 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4530c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4530c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45088;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45088) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b78 = 0x40008;
  _DAT_00b44208 = 4;
  if (iVar11 != DAT_00b455fc) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455fc;
    if (DAT_00b455fc != 0) {
      *(int *)(DAT_00b455fc + 0x60) = *(int *)(DAT_00b455fc + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 2) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
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
    FUN_00801110(iVar10,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4535c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4535c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45118;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45118) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43b7c = 0x40008;
  _DAT_00b4420c = 0x84;
  _DAT_00b4489c = 4;
  if (iVar11 != DAT_00b45c18) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b45c18;
    if (DAT_00b45c18 != 0) {
      *(int *)(DAT_00b45c18 + 0x60) = *(int *)(DAT_00b45c18 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b452f0;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b452f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b4511c;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b4511c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
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
  _DAT_00b44198 = 2;
  _DAT_00b44828 = 0x84;
  _DAT_00b44eb8 = 4;
  if (iVar11 != DAT_00b45c1c) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b45c1c;
    if (DAT_00b45c1c != 0) {
      *(int *)(DAT_00b45c1c + 0x60) = *(int *)(DAT_00b45c1c + 0x60) + 1;
    }
  }
  if (*(int *)(iVar11 + 0x18) == 0) {
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
    FUN_00801110(iVar10,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4535c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4535c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b4511c;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b4511c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
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
  _DAT_00b4419c = 0x40008;
  _DAT_00b4482c = 0x84;
  _DAT_00b44ebc = 4;
  if (iVar11 != DAT_00b455c8) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455c8;
    if (DAT_00b455c8 != 0) {
      *(int *)(DAT_00b455c8 + 0x60) = *(int *)(DAT_00b455c8 + 0x60) + 1;
    }
  }
  puVar4 = DAT_00b452f0;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b452f0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45120;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45120) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
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
  _DAT_00b43b48 = 2;
  _DAT_00b441d8 = 0x84;
  _DAT_00b44868 = 4;
  if (iVar11 != DAT_00b455cc) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b455cc;
    if (DAT_00b455cc != 0) {
      *(int *)(DAT_00b455cc + 0x60) = *(int *)(DAT_00b455cc + 0x60) + 1;
    }
  }
  puVar4 = DAT_00b4535c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4535c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b45120;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b45120) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(7,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x17,4,0);
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
  _DAT_00b43b4c = 0x40008;
  _DAT_00b441dc = 0x84;
  _DAT_00b4486c = 4;
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

void FUN_00815db0(void)

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
  
  puStack_8 = &LAB_009d1748;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = 0;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if ((DAT_00b45604 != 0) && (local_14 = DAT_00b45604, DAT_00b45604 != 0)) {
    *(int *)(DAT_00b45604 + 0x60) = *(int *)(DAT_00b45604 + 0x60) + 1;
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452b8;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452b8) {
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
  puVar4 = DAT_00b450ac;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450ac) {
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
  DAT_00b43b84 = 0x82;
  DAT_00b44214 = 0xc;
  if (local_14 != DAT_00b45608) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45608;
    if (DAT_00b45608 != 0) {
      *(int *)(DAT_00b45608 + 0x60) = *(int *)(DAT_00b45608 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452c0;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452c0) {
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
  puVar4 = DAT_00b450bc;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450bc) {
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
  _DAT_00b43b88 = 0x82;
  _DAT_00b44218 = 0xc;
  if (local_14 != DAT_00b45670) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45670;
    if (DAT_00b45670 != 0) {
      *(int *)(DAT_00b45670 + 0x60) = *(int *)(DAT_00b45670 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452bc;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452bc) {
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
  puVar4 = DAT_00b450b0;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450b0) {
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
  DAT_00b43bf0 = 0x18082;
  DAT_00b44280 = 0xc;
  DAT_00b43560 = 0x18000;
  if (local_14 != DAT_00b45674) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45674;
    if (DAT_00b45674 != 0) {
      *(int *)(DAT_00b45674 + 0x60) = *(int *)(DAT_00b45674 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452c4;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452c4) {
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
  puVar4 = DAT_00b450c0;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450c0) {
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
  _DAT_00b43bf4 = 0x18082;
  _DAT_00b44284 = 0xc;
  _DAT_00b43564 = 0x18000;
  if (local_14 != DAT_00b4560c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4560c;
    if (DAT_00b4560c != 0) {
      *(int *)(DAT_00b4560c + 0x60) = *(int *)(DAT_00b4560c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452b8;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452b8) {
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
  puVar4 = DAT_00b450dc;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450dc) {
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
  _DAT_00b43b8c = 0x82;
  _DAT_00b4421c = 0x8c;
  _DAT_00b448ac = 4;
  if (local_14 != DAT_00b45610) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45610;
    if (DAT_00b45610 != 0) {
      *(int *)(DAT_00b45610 + 0x60) = *(int *)(DAT_00b45610 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452c0;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452c0) {
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
  puVar4 = DAT_00b450ec;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450ec) {
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
  _DAT_00b43b90 = 0x82;
  _DAT_00b44220 = 0x8c;
  _DAT_00b448b0 = 4;
  if (local_14 != DAT_00b45678) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45678;
    if (DAT_00b45678 != 0) {
      *(int *)(DAT_00b45678 + 0x60) = *(int *)(DAT_00b45678 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  puVar4 = DAT_00b452bc;
  puVar3 = *(undefined4 **)(local_14 + 0x58);
  if (puVar3 != DAT_00b452bc) {
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
  puVar4 = DAT_00b450e0;
  puVar3 = *(undefined4 **)(local_14 + 0x44);
  if (puVar3 != DAT_00b450e0) {
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
  _DAT_00b43bf8 = 0x18082;
  _DAT_00b44288 = 0xc;
  _DAT_00b43568 = 0x18000;
  if (local_14 != DAT_00b4567c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4567c;
    if (DAT_00b4567c != 0) {
      *(int *)(DAT_00b4567c + 0x60) = *(int *)(DAT_00b4567c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c4);
  FUN_007aec60(DAT_00b450f0);
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
  _DAT_00b43bfc = 0x18082;
  _DAT_00b4428c = 0xc;
  _DAT_00b4356c = 0x18000;
  if (local_14 != DAT_00b45614) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45614;
    if (DAT_00b45614 != 0) {
      *(int *)(DAT_00b45614 + 0x60) = *(int *)(DAT_00b45614 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x16;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x17;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x18;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x19;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c8);
  FUN_007aec60(DAT_00b450cc);
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
  _DAT_00b43b94 = 0x82;
  _DAT_00b44224 = 0xc;
  if (local_14 != DAT_00b45618) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45618;
    if (DAT_00b45618 != 0) {
      *(int *)(DAT_00b45618 + 0x60) = *(int *)(DAT_00b45618 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452b8);
  FUN_007aec60(DAT_00b450b4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43b98 = 0x82;
  _DAT_00b44228 = 0xc;
  if (local_14 != DAT_00b4561c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4561c;
    if (DAT_00b4561c != 0) {
      *(int *)(DAT_00b4561c + 0x60) = *(int *)(DAT_00b4561c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c0);
  FUN_007aec60(DAT_00b450c4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43b9c = 0x82;
  _DAT_00b4422c = 0xc;
  if (local_14 != DAT_00b45680) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45680;
    if (DAT_00b45680 != 0) {
      *(int *)(DAT_00b45680 + 0x60) = *(int *)(DAT_00b45680 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x1f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452bc);
  FUN_007aec60(DAT_00b450b8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c00 = 0x18082;
  _DAT_00b44290 = 0xc;
  _DAT_00b43570 = 0x18000;
  if (local_14 != DAT_00b45684) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45684;
    if (DAT_00b45684 != 0) {
      *(int *)(DAT_00b45684 + 0x60) = *(int *)(DAT_00b45684 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c4);
  FUN_007aec60(DAT_00b450c8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c04 = 0x18082;
  _DAT_00b44294 = 0xc;
  _DAT_00b43574 = 0x18000;
  if (local_14 != DAT_00b45620) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45620;
    if (DAT_00b45620 != 0) {
      *(int *)(DAT_00b45620 + 0x60) = *(int *)(DAT_00b45620 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452b8);
  FUN_007aec60(DAT_00b450e4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43ba0 = 0x82;
  _DAT_00b44230 = 0x8c;
  _DAT_00b448c0 = 4;
  if (local_14 != DAT_00b45624) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45624;
    if (DAT_00b45624 != 0) {
      *(int *)(DAT_00b45624 + 0x60) = *(int *)(DAT_00b45624 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x25;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x26;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x27;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c0);
  FUN_007aec60(DAT_00b450f4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43ba4 = 0x82;
  _DAT_00b44234 = 0x8c;
  _DAT_00b448c4 = 4;
  if (local_14 != DAT_00b45688) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45688;
    if (DAT_00b45688 != 0) {
      *(int *)(DAT_00b45688 + 0x60) = *(int *)(DAT_00b45688 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x28;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x29;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452cc);
  FUN_007aec60(DAT_00b450d0);
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
  _DAT_00b43c08 = 0x18082;
  _DAT_00b44298 = 0xc;
  _DAT_00b43578 = 0x18000;
  if (local_14 != DAT_00b45628) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45628;
    if (DAT_00b45628 != 0) {
      *(int *)(DAT_00b45628 + 0x60) = *(int *)(DAT_00b45628 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x2d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b452c8);
  FUN_007aec60(DAT_00b450d4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
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
  _DAT_00b43ba8 = 0x82;
  _DAT_00b44238 = 0xc;
  if (DAT_00b4562c != 0) {
    piVar7 = (int *)(DAT_00b4562c + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    DAT_00b4562c = 0;
  }
  if (DAT_00b45694 != 0) {
    piVar7 = (int *)(DAT_00b45694 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    DAT_00b45694 = 0;
  }
  if (local_14 != DAT_00b45630) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45630;
    if (DAT_00b45630 != 0) {
      *(int *)(DAT_00b45630 + 0x60) = *(int *)(DAT_00b45630 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x30;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x31;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45334);
  FUN_007aec60(DAT_00b450ac);
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
  _DAT_00b43bb0 = 0x40088;
  _DAT_00b44240 = 0xc;
  if (local_14 != DAT_00b45634) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45634;
    if (DAT_00b45634 != 0) {
      *(int *)(DAT_00b45634 + 0x60) = *(int *)(DAT_00b45634 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45338);
  FUN_007aec60(DAT_00b450bc);
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
  _DAT_00b43bb4 = 0x40088;
  _DAT_00b44244 = 0xc;
  if (local_14 != DAT_00b45698) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b45698;
    if (DAT_00b45698 != 0) {
      *(int *)(DAT_00b45698 + 0x60) = *(int *)(DAT_00b45698 + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x34;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x35;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4533c);
  FUN_007aec60(DAT_00b450b0);
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
  _DAT_00b43c18 = 0x58088;
  _DAT_00b442a8 = 0xc;
  _DAT_00b43588 = 0x18000;
  if (local_14 != DAT_00b4569c) {
    piVar7 = (int *)(local_14 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    local_14 = DAT_00b4569c;
    if (DAT_00b4569c != 0) {
      *(int *)(DAT_00b4569c + 0x60) = *(int *)(DAT_00b4569c + 0x60) + 1;
    }
  }
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x36;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x37;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45340);
  FUN_007aec60(DAT_00b450c0);
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
  _DAT_00b43c1c = 0x58088;
  _DAT_00b442ac = 0xc;
  _DAT_00b4358c = 0x18000;
  FUN_0076c890(&DAT_00b45638);
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45334);
  FUN_007aec60(DAT_00b450dc);
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
  _DAT_00b43bb8 = 0x40088;
  _DAT_00b44248 = 0x8c;
  _DAT_00b448d8 = 4;
  FUN_0076c890(&DAT_00b456a0);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x3d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4533c);
  FUN_007aec60(DAT_00b450e0);
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
  _DAT_00b43c20 = 0x58088;
  _DAT_00b442b0 = 0x8c;
  _DAT_00b43590 = 0x18000;
  _DAT_00b44940 = 4;
  FUN_0076c890(&DAT_00b456a4);
  if (*(uint *)(local_14 + 0x18) < 3) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45340);
  FUN_007aec60(DAT_00b450f0);
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
  _DAT_00b43c20 = 0x58088;
  _DAT_00b442b0 = 0x8c;
  _DAT_00b43590 = 0x18000;
  _DAT_00b44940 = 4;
  FUN_0076c890(&DAT_00b45640);
  if (*(uint *)(local_14 + 0x18) < 4) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45344);
  FUN_007aec60(DAT_00b450cc);
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
  _DAT_00b43bc0 = 0x40088;
  _DAT_00b44250 = 0xc;
  FUN_0076c890(&DAT_00b456b0);
  if (*(uint *)(local_14 + 0x18) < 4) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x45;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x46;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x47;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x48;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45348);
  FUN_007aec60(DAT_00b450d0);
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
  _DAT_00b43c30 = 0x58088;
  _DAT_00b442c0 = 0xc;
  _DAT_00b435a0 = 0x18000;
  FUN_0076c890(&DAT_00b45644);
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x49;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45334);
  FUN_007aec60(DAT_00b450b4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43bc4 = 0x40088;
  _DAT_00b44254 = 0xc;
  FUN_0076c890(&DAT_00b45648);
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45338);
  FUN_007aec60(DAT_00b450c4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43bc8 = 0x40088;
  _DAT_00b44258 = 0xc;
  FUN_0076c890(&DAT_00b456a8);
  if (*(uint *)(local_14 + 0x18) < 2) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x4e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4533c);
  FUN_007aec60(DAT_00b450b8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c28 = 0x58088;
  _DAT_00b442b8 = 0xc;
  _DAT_00b43598 = 0x18000;
  FUN_0076c890(&DAT_00b456ac);
  if (*(uint *)(local_14 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
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
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45340);
  FUN_007aec60(DAT_00b450c8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c2c = 0x58088;
  _DAT_00b442bc = 0xc;
  _DAT_00b4359c = 0x18000;
  FUN_0076c890(&DAT_00b4564c);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x51;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x52;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x53;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45334);
  FUN_007aec60(DAT_00b450e4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43bcc = 0x40088;
  _DAT_00b4425c = 0x8c;
  _DAT_00b448ec = 4;
  FUN_0076c890(&DAT_00b45650);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x54;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x55;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x56;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45338);
  FUN_007aec60(DAT_00b450f4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43bd0 = 0x40088;
  _DAT_00b44260 = 0x8c;
  _DAT_00b448f0 = 4;
  FUN_0076c890(&DAT_00b45654);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x57;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x58;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x59;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5a;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,3,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45344);
  FUN_007aec60(DAT_00b450d4);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43bd4 = 0x40088;
  _DAT_00b44264 = 0xc;
  _DAT_00b448f4 = 4;
  FUN_0076c890(&DAT_00b456b4);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5b;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5c;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5d;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b4533c);
  FUN_007aec60(DAT_00b450e8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c34 = 0x58088;
  _DAT_00b442c4 = 0x8c;
  _DAT_00b435a4 = 0x18000;
  _DAT_00b44954 = 4;
  FUN_0076c890(&DAT_00b456b8);
  if (*(uint *)(local_14 + 0x18) < 3) {
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5e;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x5f;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,1,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
    uVar9 = FUN_00772630(&local_10);
    local_4._0_1_ = 0x60;
    FUN_0075fae0(uVar9);
    local_4._0_1_ = 1;
    if ((local_10 != 0) &&
       (*(int *)(local_10 + 0x5c) = *(int *)(local_10 + 0x5c) + -1, *(int *)(local_10 + 0x5c) == 0))
    {
      FUN_00772560();
    }
    FUN_00801110(local_18,2,1,2);
    FUN_00760010(*(undefined4 *)(local_14 + 0x14),local_18);
  }
  FUN_007aecb0(DAT_00b45340);
  FUN_007aec60(DAT_00b450f8);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,1,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x13,5,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x14,6,0);
  if (*(int *)(local_14 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(local_14 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xf,1,0);
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
  _DAT_00b43c38 = 0x58088;
  _DAT_00b442c8 = 0x8c;
  _DAT_00b435a8 = 0x18000;
  _DAT_00b44958 = 4;
  if (DAT_00b45658 != 0) {
    piVar7 = (int *)(DAT_00b45658 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    DAT_00b45658 = 0;
  }
  if (DAT_00b456bc != 0) {
    piVar7 = (int *)(DAT_00b456bc + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    DAT_00b456bc = 0;
  }
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

void FUN_0081aa00(void)

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
  iVar2 = DAT_00b45664;
  iVar10 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar11 = 0;
  if ((DAT_00b45664 != 0) && (iVar11 = iVar2, DAT_00b45664 != 0)) {
    *(int *)(DAT_00b45664 + 0x60) = *(int *)(DAT_00b45664 + 0x60) + 1;
  }
  if (*(uint *)(iVar11 + 0x18) < 4) {
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
    FUN_00801110(iVar10,1,3,2);
    FUN_0076c910(DAT_00b43110);
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
    FUN_00801110(iVar10,2,3,2);
    FUN_0076c910(DAT_00b430d4);
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
    FUN_00801110(iVar10,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452d0;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b452d0) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b450fc;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b450fc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  DAT_00b43be4 = 0x1082;
  DAT_00b44274 = 0x1c;
  if (iVar11 != DAT_00b45668) {
    piVar7 = (int *)(iVar11 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar11 = DAT_00b45668;
    if (DAT_00b45668 != 0) {
      *(int *)(DAT_00b45668 + 0x60) = *(int *)(DAT_00b45668 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar11 + 0x18) < 4) {
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
    FUN_00801110(iVar10,0,1,2);
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
    FUN_00801110(iVar10,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
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
    FUN_00801110(iVar10,2,3,2);
    FUN_0076c910(DAT_00b430d4);
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
    FUN_00801110(iVar10,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar11 + 0x14),iVar10);
  }
  puVar4 = DAT_00b4534c;
  puVar3 = *(undefined4 **)(iVar11 + 0x58);
  if (puVar3 != DAT_00b4534c) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x58) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  puVar4 = DAT_00b450fc;
  puVar3 = *(undefined4 **)(iVar11 + 0x44);
  if (puVar3 != DAT_00b450fc) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(iVar11 + 0x44) = puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x1b,0,0);
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
  FUN_00772cd0(0x17,4,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar11 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar11 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43be8 = 0x41088;
  _DAT_00b44278 = 0x1c;
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

void FUN_0081b120(void)

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
  
  puStack_8 = &LAB_009d18e0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45928;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45928 != 0) && (iVar10 = iVar2, DAT_00b45928 != 0)) {
    *(int *)(DAT_00b45928 + 0x60) = *(int *)(DAT_00b45928 + 0x60) + 1;
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452a0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452a0) {
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
  puVar4 = DAT_00b45090;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45090) {
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
  DAT_00b43ea8 = 0x82;
  DAT_00b44538 = 8;
  DAT_00b44bc8 = 8;
  if (iVar10 != DAT_00b45930) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45930;
    if (DAT_00b45930 != 0) {
      *(int *)(DAT_00b45930 + 0x60) = *(int *)(DAT_00b45930 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b4531c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4531c) {
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
  puVar4 = DAT_00b45090;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45090) {
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
  _DAT_00b43eb0 = 0x40808;
  _DAT_00b44540 = 8;
  _DAT_00b44bd0 = 8;
  if (iVar10 != DAT_00b4592c) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b4592c;
    if (DAT_00b4592c != 0) {
      *(int *)(DAT_00b4592c + 0x60) = *(int *)(DAT_00b4592c + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
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
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b4529c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4529c) {
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
  puVar4 = DAT_00b4508c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4508c) {
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
  DAT_00b43eac = 0x802;
  DAT_00b4453c = 8;
  DAT_00b44bcc = 8;
  if (iVar10 != DAT_00b45934) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45934;
    if (DAT_00b45934 != 0) {
      *(int *)(DAT_00b45934 + 0x60) = *(int *)(DAT_00b45934 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
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
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45318;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45318) {
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
  puVar4 = DAT_00b4508c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4508c) {
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
  _DAT_00b43eb4 = 0x40808;
  _DAT_00b44544 = 8;
  _DAT_00b44bd4 = 8;
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

void FUN_0081bce0(void)

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
  
  puStack_8 = &LAB_009d1860;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b459b0;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b459b0 != 0) && (iVar10 = iVar2, DAT_00b459b0 != 0)) {
    *(int *)(DAT_00b459b0 + 0x60) = *(int *)(DAT_00b459b0 + 0x60) + 1;
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452a4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452a4) {
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
  puVar4 = DAT_00b45094;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45094) {
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
  FUN_00772cd0(0x14,1,0);
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
  DAT_00b43f30 = 2;
  DAT_00b445c0 = 0;
  if (iVar10 != DAT_00b459b4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459b4;
    if (DAT_00b459b4 != 0) {
      *(int *)(DAT_00b459b4 + 0x60) = *(int *)(DAT_00b459b4 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 3) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,1,1,2);
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
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b452ac;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452ac) {
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
  puVar4 = DAT_00b4509c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4509c) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f34 = 2;
  _DAT_00b445c4 = 0;
  if (iVar10 != DAT_00b459b8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459b8;
    if (DAT_00b459b8 != 0) {
      *(int *)(DAT_00b459b8 + 0x60) = *(int *)(DAT_00b459b8 + 0x60) + 1;
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
  puVar4 = DAT_00b452a8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452a8) {
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
  puVar4 = DAT_00b450a0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a0) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f38 = 2;
  _DAT_00b445c8 = 0x80;
  if (iVar10 != DAT_00b459bc) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459bc;
    if (DAT_00b459bc != 0) {
      *(int *)(DAT_00b459bc + 0x60) = *(int *)(DAT_00b459bc + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
  }
  puVar4 = DAT_00b45320;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45320) {
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
  puVar4 = DAT_00b45094;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45094) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f3c = 0x40008;
  _DAT_00b445cc = 0;
  if (iVar10 != DAT_00b459c0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459c0;
    if (DAT_00b459c0 != 0) {
      *(int *)(DAT_00b459c0 + 0x60) = *(int *)(DAT_00b459c0 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b452a8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452a8) {
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
  puVar4 = DAT_00b45098;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45098) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f40 = 2;
  _DAT_00b445d0 = 0;
  if (iVar10 != DAT_00b459c4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459c4;
    if (DAT_00b459c4 != 0) {
      *(int *)(DAT_00b459c4 + 0x60) = *(int *)(DAT_00b459c4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45324;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45324) {
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
  puVar4 = DAT_00b45098;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45098) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f44 = 0x40008;
  _DAT_00b445d4 = 0;
  if (iVar10 != DAT_00b459c8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459c8;
    if (DAT_00b459c8 != 0) {
      *(int *)(DAT_00b459c8 + 0x60) = *(int *)(DAT_00b459c8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 3) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,2,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45328;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45328) {
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
  puVar4 = DAT_00b4509c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4509c) {
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
  FUN_00772cd0(0x14,1,0);
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
  _DAT_00b43f48 = 0x40008;
  _DAT_00b445d8 = 0;
  if (iVar10 != DAT_00b459d0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459d0;
    if (DAT_00b459d0 != 0) {
      *(int *)(DAT_00b459d0 + 0x60) = *(int *)(DAT_00b459d0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 2) {
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45324;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45324) {
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
  puVar4 = DAT_00b450a0;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a0) {
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
  FUN_00772cd0(0x14,1,0);
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
  FUN_00772cd0(0xe,1,0);
  if (*(int *)(iVar10 + 0x30) == 0) {
    uVar9 = FUN_00772df0();
    *(undefined4 *)(iVar10 + 0x30) = uVar9;
  }
  FUN_00772cd0(0x34,0,0);
  _DAT_00b43f50 = 0x40008;
  _DAT_00b445e0 = 0x80;
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

void FUN_0081d090(void)

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
  
  puStack_8 = &LAB_009d18e0;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b459dc;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b459dc != 0) && (iVar10 = iVar2, DAT_00b459dc != 0)) {
    *(int *)(DAT_00b459dc + 0x60) = *(int *)(DAT_00b459dc + 0x60) + 1;
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452b4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452b4) {
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
  puVar4 = DAT_00b450a8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a8) {
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
  DAT_00b43f5c = 0x20082;
  DAT_00b445ec = 8;
  if (iVar10 != DAT_00b459e0) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459e0;
    if (DAT_00b459e0 != 0) {
      *(int *)(DAT_00b459e0 + 0x60) = *(int *)(DAT_00b459e0 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
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
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b452b0;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452b0) {
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
  puVar4 = DAT_00b450a4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a4) {
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
  DAT_00b43f60 = 0x20802;
  DAT_00b445f0 = 8;
  if (iVar10 != DAT_00b459e4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459e4;
    if (DAT_00b459e4 != 0) {
      *(int *)(DAT_00b459e4 + 0x60) = *(int *)(DAT_00b459e4 + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45330;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45330) {
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
  puVar4 = DAT_00b450a8;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a8) {
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
  _DAT_00b43f64 = 0x60088;
  _DAT_00b445f4 = 8;
  if (iVar10 != DAT_00b459e8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b459e8;
    if (DAT_00b459e8 != 0) {
      *(int *)(DAT_00b459e8 + 0x60) = *(int *)(DAT_00b459e8 + 0x60) + 1;
    }
  }
  if (*(uint *)(iVar10 + 0x18) < 4) {
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
    FUN_00801110(iVar11,1,3,2);
    FUN_0076c910(DAT_00b43110);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,2,3,2);
    FUN_0076c910(DAT_00b430d4);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_0076c910(DAT_00b430ec);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b4532c;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b4532c) {
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
  puVar4 = DAT_00b450a4;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b450a4) {
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
  _DAT_00b43f68 = 0x60808;
  _DAT_00b445f8 = 8;
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

void FUN_0081dc40(void)

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
  iVar2 = DAT_00b45ba0;
  iVar11 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45ba0 != 0) && (iVar10 = iVar2, DAT_00b45ba0 != 0)) {
    *(int *)(DAT_00b45ba0 + 0x60) = *(int *)(DAT_00b45ba0 + 0x60) + 1;
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
    FUN_00801110(iVar11,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
    uVar5 = local_4._1_3_;
  }
  local_4._1_3_ = uVar5;
  puVar4 = DAT_00b452dc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452dc) {
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
  puVar4 = DAT_00b45108;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45108) {
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
  _DAT_00b44120 = 0x20006;
  _DAT_00b447b0 = 4;
  _DAT_00b44e40 = 4;
  if (iVar10 != DAT_00b45ba4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45ba4;
    if (DAT_00b45ba4 != 0) {
      *(int *)(DAT_00b45ba4 + 0x60) = *(int *)(DAT_00b45ba4 + 0x60) + 1;
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
    FUN_00801110(iVar11,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b452dc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452dc) {
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
  puVar4 = DAT_00b4510c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4510c) {
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
  _DAT_00b44124 = 0x20006;
  _DAT_00b447b4 = 4;
  _DAT_00b44e44 = 4;
  if (iVar10 != DAT_00b45ba8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45ba8;
    if (DAT_00b45ba8 != 0) {
      *(int *)(DAT_00b45ba8 + 0x60) = *(int *)(DAT_00b45ba8 + 0x60) + 1;
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45350;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45350) {
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
  puVar4 = DAT_00b45108;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45108) {
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
  _DAT_00b44128 = 0x6000c;
  _DAT_00b447b8 = 4;
  _DAT_00b44e48 = 4;
  if (iVar10 != DAT_00b45bac) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bac;
    if (DAT_00b45bac != 0) {
      *(int *)(DAT_00b45bac + 0x60) = *(int *)(DAT_00b45bac + 0x60) + 1;
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,3,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45350;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45350) {
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
  puVar4 = DAT_00b4510c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4510c) {
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
  _DAT_00b4412c = 0x6000c;
  _DAT_00b447bc = 4;
  _DAT_00b44e4c = 4;
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

void FUN_0081ea70(void)

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
  
  puStack_8 = &LAB_009d1a70;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b45be0;
  local_18 = 0;
  local_4._1_3_ = 0;
  uVar5 = local_4._1_3_;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  iVar10 = 0;
  if ((DAT_00b45be0 != 0) && (iVar10 = iVar2, DAT_00b45be0 != 0)) {
    *(int *)(DAT_00b45be0 + 0x60) = *(int *)(DAT_00b45be0 + 0x60) + 1;
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
  puVar4 = DAT_00b452d4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452d4) {
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
  puVar4 = DAT_00b45100;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45100) {
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
  DAT_00b44160 = 0x18002;
  DAT_00b447f0 = 0;
  DAT_00b43ad0 = 0x18000;
  if (iVar10 != DAT_00b45be4) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45be4;
    if (DAT_00b45be4 != 0) {
      *(int *)(DAT_00b45be4 + 0x60) = *(int *)(DAT_00b45be4 + 0x60) + 1;
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
  puVar4 = DAT_00b452d8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452d8) {
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
  puVar4 = DAT_00b45104;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45104) {
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
  _DAT_00b44164 = 0x18002;
  _DAT_00b447f4 = 0;
  _DAT_00b43ad4 = 0x18000;
  if (iVar10 != DAT_00b45be8) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45be8;
    if (DAT_00b45be8 != 0) {
      *(int *)(DAT_00b45be8 + 0x60) = *(int *)(DAT_00b45be8 + 0x60) + 1;
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
  puVar4 = DAT_00b45310;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45310) {
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
  puVar4 = DAT_00b45100;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45100) {
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
  _DAT_00b44168 = 0x58008;
  _DAT_00b447f8 = 0;
  _DAT_00b43ad8 = 0x18000;
  if (iVar10 != DAT_00b45bec) {
    piVar7 = (int *)(iVar10 + 0x60);
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
      FUN_007604d0();
    }
    iVar10 = DAT_00b45bec;
    if (DAT_00b45bec != 0) {
      *(int *)(DAT_00b45bec + 0x60) = *(int *)(DAT_00b45bec + 0x60) + 1;
    }
  }
  if (*(int *)(iVar10 + 0x18) == 0) {
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
    FUN_00801110(local_18,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),local_18);
  }
  puVar4 = DAT_00b45314;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45314) {
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
  puVar4 = DAT_00b45104;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45104) {
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
  _DAT_00b4416c = 0x58008;
  _DAT_00b447fc = 0;
  _DAT_00b43adc = 0x18000;
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

void FUN_0081f330(void)

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
  
  puStack_8 = &LAB_009d1a20;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b456c0;
  iVar11 = 0;
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
  puVar4 = DAT_00b452f4;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452f4) {
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
  puVar4 = DAT_00b45128;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45128) {
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
  puVar4 = DAT_00b452f8;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452f8) {
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
  puVar4 = DAT_00b4512c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4512c) {
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
  puVar4 = DAT_00b452fc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452fc) {
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
  puVar4 = DAT_00b45130;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45130) {
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
  puVar4 = DAT_00b452fc;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b452fc) {
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
  puVar4 = DAT_00b45134;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45134) {
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45300;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45300) {
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
  puVar4 = DAT_00b45138;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b45138) {
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
    FUN_00801110(iVar11,0,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
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
    FUN_00801110(iVar11,1,1,2);
    FUN_00760010(*(undefined4 *)(iVar10 + 0x14),iVar11);
  }
  puVar4 = DAT_00b45304;
  puVar3 = *(undefined4 **)(iVar10 + 0x58);
  if (puVar3 != DAT_00b45304) {
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
  puVar4 = DAT_00b4513c;
  puVar3 = *(undefined4 **)(iVar10 + 0x44);
  if (puVar3 != DAT_00b4513c) {
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
  _DAT_00b440e4 = 0x802;
  _DAT_00b44774 = 0x38;
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


