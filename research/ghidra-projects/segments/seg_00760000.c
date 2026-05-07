
undefined4 FUN_00760010(uint *param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  uint *puVar5;
  LONG LVar6;
  int in_ECX;
  
  puVar5 = param_2;
  puVar4 = param_1;
  if (DAT_00b28cb0 <= param_1) {
    if (DAT_00b28cb8 <= param_1) {
      return 1;
    }
    param_1 = param_2;
    if (param_2 != (uint *)0x0) {
      param_2[0x17] = param_2[0x17] + 1;
    }
    FUN_0075fed0(puVar4,&param_1);
    if (puVar5 != (uint *)0x0) {
      puVar1 = puVar5 + 0x17;
      *puVar1 = *puVar1 - 1;
      if (*puVar1 == 0) {
        FUN_00772560();
      }
    }
  }
  iVar2 = *(int *)(*(int *)(in_ECX + 0x24) + (int)puVar4 * 4);
  if (iVar2 != 0) {
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + -1;
    puVar3 = *(undefined4 **)(iVar2 + 4);
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
    param_1 = (uint *)CONCAT31(param_1._1_3_,puVar3 != (undefined4 *)0x0);
    if (puVar3 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar3 + 1);
      if (LVar6 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if ((char)param_1 != '\0') {
      *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + -1;
    }
  }
  param_1 = puVar5;
  if (puVar5 != (uint *)0x0) {
    puVar5[0x17] = puVar5[0x17] + 1;
  }
  FUN_0075fed0(puVar4,&param_1);
  if (puVar5 == (uint *)0x0) {
    iVar2 = *(int *)(in_ECX + 0x14);
    if ((iVar2 == (int)puVar4 + 1U) && (iVar2 != 0)) {
      while (*(int *)(*(int *)(in_ECX + 0x24) + -4 + iVar2 * 4) != 0) {
        if (iVar2 == 0) {
          return 0;
        }
      }
      *(int *)(in_ECX + 0x14) = iVar2 + -1;
    }
  }
  else {
    puVar1 = puVar5 + 0x17;
    *puVar1 = *puVar1 - 1;
    if (*puVar1 == 0) {
      FUN_00772560();
    }
    *puVar5 = (uint)puVar4;
    if ((uint *)*(uint *)(in_ECX + 0x14) == puVar4) {
      *(uint *)(in_ECX + 0x14) = *(uint *)(in_ECX + 0x14) + 1;
    }
    *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
    puVar3 = (undefined4 *)puVar5[1];
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
    if (puVar3 != (undefined4 *)0x0) {
      LVar6 = InterlockedDecrement(puVar3 + 1);
      if (LVar6 == 0) {
        (**(code **)*puVar3)(1);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + 1;
      return 0;
    }
  }
  return 0;
}



void FUN_00760170(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar2 = in_ECX[1];
  *in_ECX = &PTR_FUN_00a882d4;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar4 = iVar2 + iVar3 * 4;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      piVar1 = (int *)(iVar4 + -4);
      iVar4 = iVar4 + -4;
      if (*piVar1 != 0) {
        piVar1 = (int *)(*piVar1 + 0x5c);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_00772560();
        }
      }
    }
    FUN_00401f20(iVar2 + -4);
  }
  return;
}



void FUN_007601c0(byte param_1)

{
  FUN_00760170();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007601e0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a882dc;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  FUN_0075fe30(DAT_00b28cb0,1);
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  *(undefined1 *)((int)in_ECX + 0x5d) = 0;
  in_ECX[0x18] = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  return;
}



void FUN_00760240(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a882dc;
  FUN_00772e30(in_ECX[0xc]);
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  FUN_00401f20(in_ECX[0xe]);
  FUN_00401f20(in_ECX[0xf]);
  FUN_00401f20(in_ECX[0x10]);
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x12] = 0;
  }
  FUN_00401f20(in_ECX[0x13]);
  FUN_00401f20(in_ECX[0x14]);
  FUN_00401f20(in_ECX[0x15]);
  puVar1 = (undefined4 *)in_ECX[0x16];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x16] = 0;
  }
  FUN_0075ff80();
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  puVar1 = (undefined4 *)in_ECX[0x16];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00760170();
  return;
}



void FUN_007603d0(void)

{
  int iVar1;
  
  iVar1 = DAT_00b42044;
  if (DAT_00b42044 != 0) {
    FUN_0075e0a0();
    FUN_00401f20(iVar1);
  }
  DAT_00b42044 = 0;
  return;
}



void FUN_00760400(uint param_1)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar2 = -(uint)((int)((ulonglong)param_1 * 100 >> 0x20) != 0) | (uint)((ulonglong)param_1 * 100)
    ;
    puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar3 = puVar1 + 1;
      *puVar1 = param_1;
      _vector_constructor_iterator_(puVar3,100,param_1,FUN_007601e0);
    }
  }
  *in_ECX = puVar3;
  return;
}



void FUN_007604d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined1 auStack_4 [4];
  
  if (*(char *)((int)in_ECX + 0x5d) == '\0') {
    (**(code **)*in_ECX)(1);
    return;
  }
  puVar1 = (undefined4 *)in_ECX[0xd];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0xd] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x11];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x11] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x12];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x12] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[0x16];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x16] = 0;
  }
  FUN_00772e30(in_ECX[0xc]);
  in_ECX[0xc] = 0;
  FUN_00401f20(in_ECX[0xe]);
  in_ECX[0xe] = 0;
  FUN_00401f20(in_ECX[0xf]);
  in_ECX[0xf] = 0;
  FUN_00401f20(in_ECX[0x10]);
  in_ECX[0x10] = 0;
  FUN_00401f20(in_ECX[0x13]);
  in_ECX[0x13] = 0;
  FUN_00401f20(in_ECX[0x14]);
  in_ECX[0x14] = 0;
  FUN_00401f20(in_ECX[0x15]);
  in_ECX[0x15] = 0;
  FUN_0075ff80();
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  FUN_0073a5e0(auStack_4);
  return;
}



void FUN_00760600(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int *local_4;
  
  iVar1 = FUN_00401f00(0xc);
  iVar4 = 0;
  if (iVar1 == 0) {
    local_4 = (int *)0x0;
  }
  else {
    local_4 = (int *)FUN_00760400(param_1);
  }
  uVar3 = 0;
  if (param_1 != 0) {
    do {
      if (uVar3 < (uint)local_4[1]) {
        iVar1 = *local_4 + iVar4;
      }
      else {
        iVar1 = 0;
      }
      iVar2 = in_ECX[1];
      if (in_ECX[2] == iVar2) {
        if (iVar2 == 0) {
          iVar2 = 1;
        }
        else {
          iVar2 = iVar2 * 2;
        }
        FUN_006e8ca0(iVar2);
      }
      *(int *)(*in_ECX + in_ECX[2] * 4) = iVar1;
      in_ECX[2] = in_ECX[2] + 1;
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 100;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



void FUN_007606a0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_00b42044;
  piVar1 = DAT_00b42044 + 2;
  if (DAT_00b42044[2] == 0) {
    piVar2 = DAT_00b42044 + 3;
    FUN_00760600(DAT_00b42044[3]);
    *piVar2 = *piVar2 * 2;
  }
  piVar3 = (int *)*piVar3;
  iVar4 = *piVar3;
  *piVar1 = *piVar1 + -1;
  *piVar3 = piVar3[*piVar1];
  *param_1 = iVar4;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
  }
  if (*(char *)(iVar4 + 0x5d) == '\0') {
    *(undefined1 *)(iVar4 + 0x5d) = 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00760700(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_8;
  undefined4 local_4;
  
  local_4 = FUN_0076bef0(in_ECX + 0xc);
  uVar2 = **(uint **)(param_1 + 0x54);
  *(uint *)(in_ECX + 0x54) = uVar2;
  uVar6 = **(uint **)(param_1 + 0x58);
  *(uint *)(in_ECX + 0x58) = uVar6;
  if ((((uVar2 == 0) || ((uVar2 & uVar2 - 1) != 0)) || (uVar6 == 0)) || ((uVar6 & uVar6 - 1) != 0))
  {
    uVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x54))();
    if ((uVar2 & 8) == 0) {
      *(undefined4 *)(in_ECX + 0x5c) = 1;
      goto LAB_0076076a;
    }
  }
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x60);
LAB_0076076a:
  uVar2 = *(int *)(in_ECX + 0x5c) - 1;
  uVar6 = DAT_00b42050;
  if (uVar2 < DAT_00b42050) {
    uVar6 = uVar2;
  }
  if (uVar6 != 0) {
    uVar2 = *(uint *)(in_ECX + 0x54);
    uVar3 = *(uint *)(in_ECX + 0x58);
    uVar7 = uVar6;
    do {
      if ((uVar2 & 1) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar2 = uVar2 >> 1;
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 + 1;
      }
      uVar3 = uVar3 >> 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    *(uint *)(in_ECX + 0x54) = uVar2;
    *(uint *)(in_ECX + 0x58) = uVar3;
  }
  iVar8 = 0;
  *(uint *)(in_ECX + 0x70) = uVar6;
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x280);
  uStack_8 = 0;
  iVar4 = (**(code **)(*piVar1 + 0x5c))
                    (piVar1,*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),
                     *(int *)(in_ECX + 0x5c) - uVar6,0,local_4,1,&uStack_8,0);
  if ((-1 < iVar4) && (iVar8 != 0)) {
    *(int *)(in_ECX + 0x50) = iVar8;
    uVar2 = *(int *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 4) *
            *(int *)(param_1 + 0x6c);
    DAT_00b42054 = DAT_00b42054 + uVar2;
    iVar4 = 0;
    *(uint *)(in_ECX + 0x60) = uVar2;
    if ((uVar2 & 0xfffff000) != uVar2) {
      iVar4 = ((uVar2 & 0xfffff000) - uVar2) + 0x1000;
    }
    _DAT_00b42058 = _DAT_00b42058 + iVar4;
    return CONCAT31((int3)(uVar2 >> 8),1);
  }
  uVar5 = FUN_007736f0(iVar4);
  uVar2 = FUN_0060d0a0("NiDX9SourceTextureData::CreateSurf> Failed CreateImageSurface - %s\n",uVar5)
  ;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  return uVar2 & 0xffffff00;
}



void FUN_00760860(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint _Size;
  void *_Src;
  uint uVar4;
  uint uVar5;
  void *_Dst;
  int *piVar6;
  undefined1 local_20 [4];
  uint uStack_1c;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int iStack_8;
  
  piVar6 = param_3;
  iVar1 = (**(code **)(*param_3 + 0x30))(param_3,local_20);
  if (iVar1 < 0) {
    uVar2 = FUN_007736f0(iVar1);
    FUN_0060d0a0("NiDX9SourceTextureData::CopyDataToSurface> Failed GetDesc - %s",uVar2);
    return;
  }
  _Dst = (void *)0x0;
  uVar5 = 0;
  iVar1 = (**(code **)(*param_3 + 0x34))(param_3,&stack0xffffffd0);
  if (-1 < iVar1) {
    iVar1 = *(int *)(*(int *)(iStack_14 + 0x54) + iStack_10 * 4);
    uVar3 = *(uint *)(*(int *)(iStack_14 + 0x58) + iStack_10 * 4);
    uVar4 = *(int *)(iStack_14 + 100) * iVar1;
    if (uStack_1c < uVar3) {
      uVar3 = uStack_1c;
    }
    _Size = uVar5;
    if ((3 < *(int *)(iStack_14 + 0xc)) && (*(int *)(iStack_14 + 0xc) < 7)) {
      _Size = uVar5 >> 2;
      uVar4 = iVar1 + 3;
      if (piVar6 == (int *)0x31545844) {
        uVar4 = uVar4 >> 1 & 0x7fffffe;
      }
      else {
        uVar4 = uVar4 & 0xffffffc;
      }
      uVar3 = uVar3 + 3 & 0xffffffc;
    }
    if (uVar4 == _Size) {
      _memcpy(_Dst,(void *)(*(int *)(*(int *)(iStack_14 + 0x5c) + *(int *)(iStack_14 + 0x60) * 4) *
                            iStack_8 + *(int *)(*(int *)(iStack_14 + 0x5c) + iStack_10 * 4) +
                           *(int *)(iStack_14 + 0x50)),uVar3 * uVar4);
    }
    else {
      if (uVar4 <= _Size) {
        _Size = uVar4;
      }
      _Src = (void *)(*(int *)(*(int *)(iStack_14 + 0x5c) + *(int *)(iStack_14 + 0x60) * 4) *
                      iStack_8 + *(int *)(*(int *)(iStack_14 + 0x5c) + iStack_10 * 4) +
                     *(int *)(iStack_14 + 0x50));
      if (uVar3 != 0) {
        do {
          _memcpy(_Dst,_Src,_Size);
          _Dst = (void *)((int)_Dst + uVar5);
          _Src = (void *)((int)_Src + uVar4);
          uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        (**(code **)(*piStack_c + 0x38))(piStack_c);
        return;
      }
    }
    (**(code **)(*piStack_c + 0x38))(piStack_c);
    return;
  }
  uVar2 = FUN_007736f0(iVar1);
  FUN_0060d0a0("NiDX9SourceTextureData::CopyDataToSurface> Failed GetSurfaceLevel - %s",uVar2);
  return;
}



undefined4 FUN_007609c0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int unaff_EBP;
  uint uVar3;
  undefined4 *puVar4;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int *piStack_4;
  
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1);
  uVar3 = 0;
  *(int *)(in_ECX + 0x5c) = iVar1;
  *(bool *)(in_ECX + 0x65) = iVar1 != 1;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  if (iVar1 == 3) {
    if (*(int *)(in_ECX + 0x5c) != 0) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x44))(param_1,uVar3,&stack0xffffff94);
        if (iVar1 < 0) {
          return 0;
        }
        if (uVar3 == 0) {
          *(int *)(in_ECX + 0x58) = iStack_50;
          *(int *)(in_ECX + 0x54) = iStack_54;
          if (unaff_EBP == 0x28) {
            return 0;
          }
          if (unaff_EBP == 0x29) {
            return 0;
          }
          puVar2 = (undefined4 *)FUN_0070f2e0();
          puVar4 = (undefined4 *)(in_ECX + 0xc);
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar4 = puVar4 + 1;
          }
          FUN_0076c3b0(unaff_EBP,(undefined4 *)(in_ECX + 0xc));
          param_1 = piStack_4;
        }
        *(int *)(in_ECX + 0x68) =
             *(int *)(in_ECX + 0x68) + ((uint)*(byte *)(in_ECX + 0xd) * iStack_50 * iStack_54 >> 3);
        uVar3 = uVar3 + 1;
        if (*(uint *)(in_ECX + 0x5c) <= uVar3) {
          *(int **)(in_ECX + 0x50) = param_1;
          return 1;
        }
      } while( true );
    }
  }
  else {
    if (iVar1 == 5) {
      if (*(int *)(in_ECX + 0x5c) != 0) {
        do {
          iVar1 = (**(code **)(*param_1 + 0x44))(param_1,uVar3,&stack0xffffff94);
          if (iVar1 < 0) {
            return 0;
          }
          if (uVar3 == 0) {
            *(int *)(in_ECX + 0x54) = iStack_54;
            *(int *)(in_ECX + 0x58) = iStack_50;
            if (unaff_EBP == 0x28) {
              return 0;
            }
            if (unaff_EBP == 0x29) {
              return 0;
            }
            puVar2 = (undefined4 *)FUN_0070f2e0();
            puVar4 = (undefined4 *)(in_ECX + 0xc);
            for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
              *puVar4 = *puVar2;
              puVar2 = puVar2 + 1;
              puVar4 = puVar4 + 1;
            }
            FUN_0076c3b0(unaff_EBP,(undefined4 *)(in_ECX + 0xc));
            param_1 = piStack_4;
          }
          *(int *)(in_ECX + 0x68) =
               *(int *)(in_ECX + 0x68) +
               ((uint)*(byte *)(in_ECX + 0xd) * iStack_50 * iStack_54 >> 3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 0x5c));
      }
      *(int **)(in_ECX + 0x50) = param_1;
      *(int *)(in_ECX + 0x68) = *(int *)(in_ECX + 0x68) * 6;
      return 1;
    }
    if ((iVar1 == 4) && (*(int *)(in_ECX + 0x5c) != 0)) {
      do {
        iVar1 = (**(code **)(*param_1 + 0x44))(param_1,uVar3,&stack0xffffff94);
        if (iVar1 < 0) {
          return 0;
        }
        if (uVar3 == 0) {
          *(int *)(in_ECX + 0x58) = iStack_58;
          *(int *)(in_ECX + 0x54) = iStack_5c;
          if (unaff_EBP == 0x28) {
            return 0;
          }
          if (unaff_EBP == 0x29) {
            return 0;
          }
          puVar2 = (undefined4 *)FUN_0070f2e0();
          puVar4 = (undefined4 *)(in_ECX + 0xc);
          for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar4 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar4 = puVar4 + 1;
          }
          FUN_0076c3b0(unaff_EBP,(undefined4 *)(in_ECX + 0xc));
          param_1 = piStack_4;
        }
        *(int *)(in_ECX + 0x68) =
             *(int *)(in_ECX + 0x68) +
             ((uint)*(byte *)(in_ECX + 0xd) * iStack_54 * iStack_58 * iStack_5c >> 3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0x5c));
    }
  }
  *(int **)(in_ECX + 0x50) = param_1;
  return 1;
}



void FUN_00760bf0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_007738e0(param_1,param_2);
  *(undefined1 *)(in_ECX + 0x19) = 0;
  *(undefined1 *)((int)in_ECX + 0x65) = 0;
  in_ECX[0x1a] = 0;
  *in_ECX = &PTR_FUN_00a883c4;
  in_ECX[0x1b] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x18] = 0;
  return;
}



undefined4 FUN_00760c30(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x58);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00760c60(void)

{
  uint uVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  *in_ECX = &PTR_FUN_00a883c4;
  DAT_00b42054 = DAT_00b42054 - in_ECX[0x18];
  uVar1 = in_ECX[0x18];
  iVar4 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar4 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b42058 = _DAT_00b42058 - iVar4;
  puVar2 = (undefined4 *)in_ECX[0x1b];
  if (puVar2 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar2 + 1);
    if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
  }
  FUN_00773920();
  return;
}



void FUN_00760cc0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_EBP;
  uint uVar4;
  int *piStack_c;
  
  piStack_c = *(int **)(in_ECX + 0x50);
  if (((piStack_c != (int *)0x0) && (iVar2 = (**(code **)(*piStack_c + 0x28))(), iVar2 != 5)) &&
     (iVar2 = (**(code **)(**(int **)(in_ECX + 0x50) + 0x28))(*(int **)(in_ECX + 0x50)), iVar2 != 4)
     ) {
    piVar1 = *(int **)(in_ECX + 0x50);
    *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x60);
    uVar4 = 0;
    if (*(int *)(in_ECX + 0x60) != *(int *)(in_ECX + 0x70)) {
      while (iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,uVar4,&piStack_c), -1 < iVar2) {
        FUN_00760860(in_ECX,*(int *)(in_ECX + 0x70) + uVar4,unaff_EBP,0);
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        uVar4 = uVar4 + 1;
        if ((uint)(*(int *)(in_ECX + 0x5c) - *(int *)(in_ECX + 0x70)) <= uVar4) {
          return;
        }
      }
      uVar3 = FUN_007736f0(iVar2);
      FUN_0060d0a0("NiDX9SourceTextureData::CopyDataToSurface> Failed GetSurfaceLevel (%d)- %s",
                   uVar4,uVar3);
    }
  }
  return;
}



bool FUN_00760d70(int param_1)

{
  bool bVar1;
  int in_ECX;
  
  bVar1 = false;
  if (param_1 != 0) {
    bVar1 = *(int *)(in_ECX + 0x78) != *(int *)(param_1 + 0x10);
    *(int *)(in_ECX + 0x78) = *(int *)(param_1 + 0x10);
    if (*(int *)(in_ECX + 0x6c) != param_1) {
      FUN_0075fa90(param_1);
      bVar1 = true;
    }
  }
  return bVar1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00760da0(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *_Src;
  uint uVar5;
  uint uVar6;
  void *_Dst;
  int *piStack_594;
  int *piStack_590;
  undefined4 uStack_58c;
  void *local_588;
  int *piStack_584;
  uint uStack_580;
  uint uStack_57c;
  uint uStack_578;
  int iStack_574;
  int iStack_56c;
  int iStack_568;
  int iStack_564;
  uint uStack_560;
  int *piStack_55c;
  uint local_558;
  undefined1 uStack_554;
  byte bStack_553;
  char local_409 [769];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&piStack_594;
  if ((param_2 == (int *)0x0) || (local_588 = (void *)param_2[0xa0], local_588 == (void *)0x0)) {
    return '\0';
  }
  _strcpy_s(local_108,0x104,param_1);
  FUN_0060d0a0(local_108);
  FUN_00748760();
  iVar2 = __stricmp(local_409,".bmp");
  if (((iVar2 != 0) && (iVar2 = __stricmp(local_409,".tga"), iVar2 != 0)) &&
     (iVar2 = __stricmp(local_409,".dds"), iVar2 != 0)) {
    return '\0';
  }
  piVar3 = (int *)thunk_FUN_00748110(local_108,0,0x8000);
  if (piVar3 == (int *)0x0) {
    return '\0';
  }
  cVar1 = (**(code **)(*piVar3 + 4))();
  if (cVar1 == '\0') {
    (**(code **)*piVar3)(1);
    return '\0';
  }
  piVar4 = (int *)(*(code *)((undefined4 *)*piVar3)[4])();
  piStack_590 = piVar4;
  if (piVar4 == (int *)0x0) {
    (**(code **)*piVar3)(1);
    return '\0';
  }
  _Src = (void *)FUN_00401f00(piVar4);
  FUN_0042c8e0(_Src,piVar4);
  (**(code **)*piVar3)(1);
  iVar2 = D3DXGetImageInfoFromFileInMemory(_Src,piVar4,&uStack_57c);
  if ((iVar2 < 0) ||
     (((((*param_2 == 4 && (iStack_56c != 0x3c)) &&
        ((iStack_56c != 0x3f && ((iStack_56c != 0x40 && (iStack_56c != 0x6e)))))) &&
       (iStack_56c != 0x75)) &&
      (((iStack_56c != 0x3d && (iStack_56c != 0x3e)) && (iStack_56c != 0x43)))))) {
    FUN_00401f20(_Src);
    return '\0';
  }
  uStack_560 = uStack_578;
  piVar3 = (int *)0x0;
  local_558 = uStack_57c;
  if (iStack_568 == 3) {
    piStack_584 = (int *)0x0;
    _Dst = _Src;
    piVar3 = piVar4;
    if ((iStack_564 == 4) && ((*(byte *)((int)_Src + 0x50) & 4) != 0)) {
      iVar2 = *(int *)((int)_Src + 0x54);
      if (iVar2 == 0x31545844) {
        uStack_580 = 2;
      }
      else {
        if (((iVar2 != 0x32545844) && (iVar2 != 0x33545844)) &&
           ((iVar2 != 0x34545844 && (iVar2 != 0x35545844)))) goto LAB_007610c7;
        uStack_580 = 1;
      }
      piStack_590 = *(int **)((int)_Src + 0x1c);
      local_588 = (void *)((int)_Src + 0x80);
      piVar3 = (int *)((int)piStack_590 - (int)DAT_00b4205c);
      if ((int *)((int)piStack_590 - (int)DAT_00b4205c) <= DAT_00b42060) {
        piVar3 = DAT_00b42060;
      }
      if ((piStack_590 <= DAT_00b4205c) && (piVar3 = piStack_590, DAT_00b42060 <= piStack_590)) {
        piVar3 = DAT_00b42060;
      }
      if (piVar3 < piStack_590) {
        iVar2 = (int)piStack_590 - (int)piVar3;
        do {
          uVar6 = 1;
          if (uStack_57c >> 2 != 0) {
            uVar6 = uStack_57c >> 2;
          }
          uVar5 = uStack_578 >> 2;
          if (uVar5 == 0) {
            uVar5 = 1;
          }
          uVar6 = (uVar5 * uVar6 * 0x10) / uStack_580;
          local_588 = (void *)((int)local_588 + uVar6);
          piVar4 = (int *)((int)piVar4 - uVar6);
          uVar6 = uStack_57c >> 1;
          uStack_57c = 1;
          if (uVar6 != 0) {
            uStack_57c = uVar6;
          }
          uVar6 = uStack_578 >> 1;
          uStack_578 = 1;
          if (uVar6 != 0) {
            uStack_578 = uVar6;
          }
          piStack_590 = (int *)((int)piStack_590 - 1);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      piVar3 = piStack_594;
      if (piStack_590 != *(int **)((int)_Src + 0x1c)) {
        _Dst = (void *)FUN_00401f00(piVar4);
        _memcpy(_Dst,_Src,0x80);
        *(uint *)((int)_Dst + 0x10) = uStack_57c;
        *(uint *)((int)_Dst + 0xc) = uStack_578;
        *(int **)((int)_Dst + 0x1c) = piStack_590;
        *(uint *)((int)_Dst + 0x14) = uStack_578 * uStack_57c;
        _memcpy((void *)((int)_Dst + 0x80),local_588,(size_t)(piVar4 + -0x20));
        FUN_00401f20(_Src);
        piVar3 = piStack_594;
      }
    }
LAB_007610c7:
    iVar2 = D3DXCreateTextureFromFileInMemory(uStack_58c,_Dst,piVar3,&piStack_584);
    _Src = _Dst;
    piVar3 = piStack_584;
  }
  else if (iStack_568 == 5) {
    piStack_594 = (int *)0x0;
    iVar2 = D3DXCreateCubeTextureFromFileInMemory(uStack_58c,_Src,piVar4,&piStack_594);
    piVar3 = piStack_594;
  }
  else if (iStack_568 == 4) {
    piVar3 = (int *)0x0;
    iVar2 = D3DXCreateVolumeTextureFromFileInMemory(uStack_58c,_Src,piVar4,&stack0xfffffa68);
  }
  else {
    iVar2 = -0x7789f794;
  }
  FUN_00401f20(_Src);
  if ((iVar2 < 0) || (piVar3 == (int *)0x0)) {
    return '\0';
  }
  cVar1 = (**(code **)(*piStack_55c + 0x24))(piVar3);
  piStack_55c[0x15] = local_558;
  piStack_55c[0x16] = uStack_560;
  if (cVar1 == '\0') {
    (**(code **)(*piVar3 + 8))(piVar3);
    return '\0';
  }
  if (iStack_56c < 0x33545845) {
    if ((iStack_56c == 0x33545844) || ((iStack_56c == 0x31545844 || (iStack_56c == 0x32545844)))) {
LAB_00761190:
      uVar6 = 1;
      goto LAB_00761195;
    }
  }
  else if ((iStack_56c == 0x34545844) || (iStack_56c == 0x35545844)) goto LAB_00761190;
  FUN_0070f2e0();
  FUN_0076c3b0(iStack_56c,&uStack_554);
  uVar6 = (uint)(bStack_553 >> 3);
LAB_00761195:
  uStack_57c = iStack_574 * uVar6 * uStack_578 * uStack_57c;
  DAT_00b42054 = DAT_00b42054 + uStack_57c;
  iVar2 = 0;
  piStack_55c[0x18] = uStack_57c;
  if ((uStack_57c & 0xfffff000) != uStack_57c) {
    iVar2 = ((uStack_57c & 0xfffff000) - uStack_57c) + 0x1000;
  }
  _DAT_00b42058 = _DAT_00b42058 + iVar2;
  return cVar1;
}



void FUN_00761250(byte param_1)

{
  FUN_00760c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00761270(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  LONG LVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 *puVar12;
  int *piVar13;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar7 = param_1;
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00b3fd34) {
        puVar2 = (undefined4 *)FUN_00774550(param_1,param_2);
        return puVar2;
      }
    }
  }
  puVar2 = (undefined4 *)FUN_00401f00(0x7c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_007738e0(param_1,param_2);
    *puVar2 = &PTR_FUN_00a883c4;
    *(undefined1 *)(puVar2 + 0x19) = 0;
    *(undefined1 *)((int)puVar2 + 0x65) = 0;
    puVar2[0x1a] = 0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x1d] = 0;
    puVar2[0x1e] = 0;
    puVar2[0x18] = 0;
  }
  puVar4 = (undefined4 *)param_1[0xf];
  piVar13 = param_1 + 6;
  if (puVar4 == (undefined4 *)0x0) {
    iVar11 = param_1[0xe];
    if (iVar11 == 0) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      return (undefined4 *)0x0;
    }
    if ((((DAT_00b3f709 != '\0') && (*(char *)((int)param_1 + 0x41) != '\0')) &&
        (param_2 != (int *)0x0)) && (cVar1 = FUN_00760da0(iVar11,param_2,piVar13), cVar1 != '\0')) {
      *(undefined4 **)(puVar2[1] + 0x24) = puVar2;
      return puVar2;
    }
    piVar3 = (int *)FUN_0071b280();
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(iVar11,0);
  }
  piVar3 = param_2 + 0x1bd;
  if (puVar4 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_00701400(param_1,0x80000005,1);
    piVar13 = param_1 + 0xe;
    param_1 = (int *)param_2[param_2[0x21d] + 0x1bd];
    FUN_0060d0a0("Failed to find texture %s\n",*piVar13);
  }
  else {
    InterlockedIncrement(puVar4 + 1);
    uVar6 = *(uint *)puVar4[0x15];
    puVar5 = puVar4;
    if ((((uVar6 == 0) || ((uVar6 & uVar6 - 1) != 0)) ||
        ((uVar6 = *(uint *)puVar4[0x16], uVar6 == 0 || ((uVar6 & uVar6 - 1) != 0)))) &&
       (uVar6 = (**(code **)(*param_2 + 0x54))(), (uVar6 & 8) == 0)) {
      uVar6 = (**(code **)(*param_2 + 0x54))();
      if ((uVar6 & 4) == 0) {
        puVar5 = (undefined4 *)FUN_00701400(param_1,0x80000006,1);
        param_1 = (int *)piVar3[param_2[0x21d]];
      }
      else {
        if (*piVar13 == 3) {
          iStack_8 = param_1[7];
          iStack_4 = param_1[8];
          piVar13 = &iStack_c;
          iStack_c = 2;
        }
        puVar8 = (undefined4 *)FUN_00773ba0(puVar4 + 2,piVar13,piVar3);
        if (puVar8 != (undefined4 *)0x0) goto LAB_007614dc;
        puVar5 = (undefined4 *)FUN_00701400(param_1,0x80000004,1);
        param_1 = (int *)piVar3[param_2[0x21d]];
      }
    }
    else {
      puVar8 = (undefined4 *)FUN_00773ba0(puVar4 + 2,piVar13,piVar3);
      if (puVar8 != (undefined4 *)0x0) goto LAB_007614dc;
      puVar5 = (undefined4 *)FUN_00701400(param_1,0x80000004,1);
      param_1 = (int *)piVar3[param_2[0x21d]];
    }
  }
  *(undefined1 *)(puVar2 + 0x19) = 1;
  puVar8 = param_1;
LAB_007614dc:
  param_1 = puVar8;
  puVar2[0x1d] = puVar5[0x1a];
  puVar8 = param_1;
  puVar12 = puVar2 + 3;
  for (iVar11 = 0x11; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar12 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar12 = puVar12 + 1;
  }
  puVar2[0x15] = *(undefined4 *)puVar5[0x15];
  puVar2[0x16] = *(undefined4 *)puVar5[0x16];
  if ((*(char *)(puVar2 + 0x19) == '\0') &&
     ((piVar7[8] == 1 || ((piVar7[8] == 2 && (DAT_00b3f708 != '\0')))))) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  *(undefined1 *)((int)puVar2 + 0x65) = uVar10;
  puVar8 = puVar5;
  if (*(char *)(puVar2 + 0x19) == '\0') {
    piVar7 = (int *)FUN_0071b280();
    puVar8 = (undefined4 *)
             (**(code **)(*piVar7 + 0x10))
                       (puVar5,param_1,puVar5,*(undefined1 *)((int)puVar2 + 0x65));
  }
  if ((puVar2[0x14] != 0) || (FUN_00760700(puVar8), puVar2[0x14] != 0)) {
    FUN_00760cc0(puVar8);
  }
  iVar11 = puVar5[0x13];
  if ((iVar11 != 0) && (puVar2[0x1e] = *(undefined4 *)(iVar11 + 0x10), puVar2[0x1b] != iVar11)) {
    FUN_0075fa90(iVar11);
  }
  puVar2[0x1a] = *(int *)(puVar8[0x17] + puVar8[0x18] * 4) * puVar8[0x1b];
  InterlockedIncrement(puVar8 + 1);
  *(undefined4 **)(puVar2[1] + 0x24) = puVar2;
  LVar9 = InterlockedDecrement(puVar8 + 1);
  if (LVar9 == 0) {
    (**(code **)*puVar8)(1);
  }
  if ((puVar4 != (undefined4 *)0x0) && (LVar9 = InterlockedDecrement(puVar4 + 1), LVar9 == 0)) {
    (**(code **)*puVar4)(1);
  }
  return puVar2;
}



void FUN_007615f0(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  bool bVar6;
  
  if ((*(char *)(in_ECX + 100) == '\0') &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x3c), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0x4c);
    bVar6 = false;
    if (iVar2 != 0) {
      bVar6 = *(int *)(in_ECX + 0x78) != *(int *)(iVar2 + 0x10);
      *(int *)(in_ECX + 0x78) = *(int *)(iVar2 + 0x10);
      if (*(int *)(in_ECX + 0x6c) != iVar2) {
        FUN_0075fa90(iVar2);
        bVar6 = true;
      }
    }
    if ((*(int *)(iVar1 + 0x68) != *(int *)(in_ECX + 0x74)) || (bVar6)) {
      piVar3 = (int *)FUN_0071b280();
      puVar4 = (undefined4 *)
               (**(code **)(*piVar3 + 0x10))
                         (iVar1,in_ECX + 0xc,iVar1,*(undefined1 *)(in_ECX + 0x65));
      *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar1 + 0x68);
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_00760cc0(puVar4);
      }
      if (puVar4 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar4 + 1);
        LVar5 = InterlockedDecrement(puVar4 + 1);
        if (LVar5 == 0) {
          (**(code **)*puVar4)(1);
        }
      }
    }
  }
  return;
}



void FUN_007616a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  FUN_007738e0(param_1,param_2);
  *in_ECX = &PTR_FUN_00a88464;
  in_ECX[0x18] = 0;
  return;
}



void FUN_007616d0(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007616e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a88464;
  DAT_00b42064 = DAT_00b42064 - in_ECX[0x18];
  uVar1 = in_ECX[0x18];
  iVar2 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar2 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b42068 = _DAT_00b42068 - iVar2;
  (**(code **)(*(int *)in_ECX[2] + 0x180))(in_ECX[1]);
  FUN_00773920();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00761730(int *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 unaff_EDI;
  undefined4 *puVar9;
  bool bVar10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar3 = (**(code **)(*param_1 + 0x4c))();
  *(undefined4 *)(in_ECX + 0x54) = uVar3;
  uVar3 = (**(code **)(*piVar1 + 0x50))();
  *(undefined4 *)(in_ECX + 0x58) = uVar3;
  *(undefined4 *)(in_ECX + 0x5c) = 1;
  iStack_c = piVar1[6];
  iStack_8 = piVar1[7];
  iStack_4 = piVar1[8];
  puVar4 = (undefined4 *)FUN_00773960(&iStack_c,*(int *)(in_ECX + 8) + 0x74c);
  puVar8 = puVar4;
  puVar9 = (undefined4 *)(in_ECX + 0xc);
  for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  iVar6 = puVar4[3];
  bVar10 = (char)piVar1[0xf] == '\0';
  uVar7 = (uint)!bVar10;
  if ((char)piVar1[0xd] != '\0') {
    iVar6 = piVar1[0xe];
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x280);
  param_1 = (int *)0x0;
  iVar5 = (**(code **)(*piVar1 + 0x5c))
                    (piVar1,*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),1,uVar7,
                     iVar6,bVar10,&param_1,0);
  if (iVar5 < 0) {
    uVar3 = FUN_007736f0(iVar5);
    FUN_0060d0a0("NiDX9RenderedTextureData::CreateSurf> Failed CreateImageSurface - %s",uVar3);
    *(undefined4 *)(in_ECX + 0x50) = 0;
    return 0;
  }
  iVar5 = *(int *)(in_ECX + 0x58) * *(int *)(in_ECX + 0x54);
  *(undefined4 *)(in_ECX + 0x50) = unaff_EDI;
  *(int *)(in_ECX + 0x60) = iVar5;
  switch(iVar6) {
  case 0x14:
    *(int *)(in_ECX + 0x60) = iVar5 * 3;
    goto switchD_0076183e_caseD_1b;
  case 0x15:
  case 0x16:
  case 0x72:
    *(int *)(in_ECX + 0x60) = iVar5 * 4;
    goto switchD_0076183e_caseD_1b;
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x51:
    iVar5 = iVar5 * 2;
    break;
  default:
    goto switchD_0076183e_caseD_1b;
  case 0x24:
  case 0x71:
    iVar5 = iVar5 * 8;
    break;
  case 0x74:
    iVar5 = iVar5 * 0x10;
  }
  *(int *)(in_ECX + 0x60) = iVar5;
switchD_0076183e_caseD_1b:
  DAT_00b42064 = DAT_00b42064 + *(int *)(in_ECX + 0x60);
  uVar2 = *(uint *)(in_ECX + 0x60);
  iVar6 = 0;
  if ((uVar2 & 0xfffff000) != uVar2) {
    iVar6 = ((uVar2 & 0xfffff000) - uVar2) + 0x1000;
  }
  _DAT_00b42068 = _DAT_00b42068 + iVar6;
  return uVar7;
}



int * FUN_00761920(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *unaff_EDI;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)FUN_00401f00(100);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_007738e0(param_1,param_2);
    *piVar1 = (int)&PTR_FUN_00a88464;
    piVar1[0x18] = 0;
  }
  iVar2 = FUN_00761730(param_1);
  if (iVar2 == 0) {
    if (piVar1 != (int *)0x0) {
      (**(code **)*piVar1)(1);
    }
    return (int *)0x0;
  }
  *(int **)(piVar1[1] + 0x24) = piVar1;
  puVar3 = (undefined4 *)(**(code **)(*piVar1 + 0x14))();
  uStack_4 = (**(code **)(*param_1 + 0x54))();
  uStack_8 = 0;
  iVar2 = (**(code **)*puVar3)(puVar3,&DAT_00ab27e8,&uStack_8);
  if (iVar2 < 0) {
    uVar4 = FUN_007736f0(iVar2);
    FUN_0060d0a0("NiDX9RenderedTextureData::Create> Failed QueryInterface IID_IDirect3DTexture9 - %s"
                 ,uVar4);
    (**(code **)*piVar1)(1);
    return (int *)0x0;
  }
  iVar2 = FUN_0076d8c0(unaff_EDI,&stack0xfffffff0);
  (**(code **)(*unaff_EDI + 8))(unaff_EDI);
  if (iVar2 == 0) {
    FUN_0060d0a0("NiDX9RenderedTextureData::Create> Failed NiDX92DBufferData::Create - %s",
                 &DAT_00a2f7ec);
    (**(code **)*piVar1)(1);
    return (int *)0x0;
  }
  return piVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00761a30(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  byte unaff_retaddr;
  
  *in_ECX = &PTR_FUN_00a88464;
  DAT_00b42064 = DAT_00b42064 - in_ECX[0x18];
  uVar1 = in_ECX[0x18];
  iVar2 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar2 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b42068 = _DAT_00b42068 - iVar2;
  (**(code **)(*(int *)in_ECX[2] + 0x180))(in_ECX[1]);
  FUN_00773920();
  if ((unaff_retaddr & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00761a90(char *param_1)

{
  if (param_1 != (char *)0x0) {
    _strncpy_s(&DAT_00b3f828,0x100,param_1,0xff);
    return;
  }
  DAT_00b3f828 = 0;
  return;
}



undefined4 FUN_00761ac0(uint param_1)

{
  int in_ECX;
  
  if (param_1 < *(uint *)(in_ECX + 0x1c)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x24) + param_1 * 4);
  }
  return 0;
}



void FUN_00761ae0(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_1 = param_4 * *param_2;
  param_1[1] = param_2[3] * param_4;
  param_1[2] = param_2[6] * param_4;
  param_1[4] = param_2[1] * param_4;
  param_1[5] = param_2[4] * param_4;
  param_1[6] = param_2[7] * param_4;
  param_1[8] = param_2[2] * param_4;
  param_1[9] = param_2[5] * param_4;
  param_1[10] = param_4 * param_2[8];
  param_1[0xc] = *param_3 - DAT_00b3f92c;
  param_1[0xd] = param_3[1] - DAT_00b3f930;
  param_1[0xe] = param_3[2] - DAT_00b3f934;
  return;
}



void FUN_00761b60(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_1 = param_4 * *param_2;
  param_1[1] = param_2[1] * param_4;
  param_1[2] = param_2[2] * param_4;
  param_1[4] = param_2[3] * param_4;
  param_1[5] = param_2[4] * param_4;
  param_1[6] = param_2[5] * param_4;
  param_1[8] = param_2[6] * param_4;
  param_1[9] = param_2[7] * param_4;
  param_1[10] = param_4 * param_2[8];
  param_1[3] = *param_3 - DAT_00b3f92c;
  param_1[7] = param_3[1] - DAT_00b3f930;
  param_1[0xb] = param_3[2] - DAT_00b3f934;
  return;
}



void FUN_00761be0(float *param_1,float *param_2,float *param_3,float param_4)

{
  *param_1 = param_4 * *param_2;
  param_1[1] = param_2[3] * param_4;
  param_1[2] = param_2[6] * param_4;
  param_1[4] = param_2[1] * param_4;
  param_1[5] = param_2[4] * param_4;
  param_1[6] = param_2[7] * param_4;
  param_1[8] = param_2[2] * param_4;
  param_1[9] = param_2[5] * param_4;
  param_1[10] = param_4 * param_2[8];
  param_1[0xc] = *param_3;
  param_1[0xd] = param_3[1];
  param_1[0xe] = param_3[2];
  return;
}



char * FUN_00761c50(void)

{
  char *_Dst;
  int in_ECX;
  
  _Dst = (char *)(in_ECX + 0x5e4);
  *_Dst = '\0';
  if ((*(byte *)(in_ECX + 0x5c4) & 0x10) != 0) {
    _strcat_s(_Dst,0x20,"PURE");
  }
  if ((*(byte *)(in_ECX + 0x5c4) & 4) != 0) {
    _strcat_s(_Dst,0x20," MT");
  }
  if ((*(byte *)(in_ECX + 0x5c4) & 0x40) != 0) {
    _strcat_s(_Dst,0x20," HWVP");
  }
  if ((*(byte *)(in_ECX + 0x5c4) & 0x80) != 0) {
    _strcat_s(_Dst,0x20," MIXVP");
  }
  if ((*(byte *)(in_ECX + 0x5c4) & 0x20) != 0) {
    _strcat_s(_Dst,0x20," SWVP");
  }
  return _Dst;
}



undefined4 FUN_00761ce0(int param_1)

{
  if (param_1 < 0) {
    return 1;
  }
  switch(param_1) {
  default:
    return 0;
  case 2:
    return 2;
  case 3:
    return 3;
  case 4:
    return 4;
  case 5:
    return 5;
  case 6:
    return 6;
  case 7:
    return 7;
  case 8:
    return 8;
  case 9:
    return 9;
  case 10:
    return 10;
  case 0xb:
    return 0xb;
  case 0xc:
    return 0xc;
  case 0xd:
    return 0xd;
  case 0xe:
    return 0xe;
  case 0xf:
    return 0xf;
  case 0x10:
    return 0x10;
  }
}



undefined4 FUN_00761da0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0x80000000;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 4;
  case 4:
    return 8;
  default:
    return 0;
  }
}



undefined4 FUN_00761df0(void)

{
  if (DAT_00b42154 == 0) {
    if (DAT_00b42158 == (FARPROC)0x0) {
      DAT_00b42150 = LoadLibraryA("D3D9.DLL");
      if (DAT_00b42150 == (HMODULE)0x0) goto LAB_00761e3a;
      DAT_00b42158 = GetProcAddress(DAT_00b42150,"Direct3DCreate9");
      if (DAT_00b42158 == (FARPROC)0x0) goto LAB_00761e3a;
    }
    DAT_00b42154 = (*DAT_00b42158)(0x20);
    if (DAT_00b42154 == 0) {
LAB_00761e3a:
      FUN_0060d0a0("Create D3D9 instance...FAILED\n");
      return 0xffffffff;
    }
    FUN_0060d0a0("Create D3D9 instance...SUCCESSFUL\n");
  }
  return 0;
}



undefined4
FUN_00761e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
            int param_6,int param_7,undefined4 param_8,int param_9,int param_10,undefined4 param_11,
            undefined4 *param_12)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  int unaff_EDI;
  undefined1 *puVar10;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  uVar2 = param_4;
  bVar3 = ~(byte)(param_4 >> 2);
  local_4 = *(undefined4 *)(in_ECX + 0x5d0);
  bVar7 = (byte)param_4;
  uVar8 = param_4 & 0x10;
  param_4 = CONCAT31(param_4._1_3_,bVar3) & 0xffffff01;
  uVar9 = 0x20;
  if (uVar8 != 0) {
    uVar9 = 0x10;
  }
  if (param_6 == 0) {
    param_6 = FUN_007751f0(param_4,uVar9);
    if (param_6 == 0) {
      _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not find desired framebuffer format",
                 0xff);
      FUN_0060d0a0("NiDX9Renderer::Initialize> No matching framebuffer format available\n");
      return 0;
    }
  }
  uVar4 = FUN_004979e0(param_6);
  if (param_7 == 0) {
    param_7 = FUN_00775280(uVar4,uVar4,uVar9,uVar2 & 8);
    if (param_7 == 0) {
      _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not find desired depth/stencil format",
                 0xff);
      FUN_0060d0a0("NiDX9Renderer::Initialize> No matching depth/stencil format available\n");
      return 0;
    }
  }
  _memset(param_12,0,0x38);
  param_12[2] = uVar4;
  *param_12 = param_2;
  param_12[1] = param_3;
  iVar5 = FUN_00761ce0(param_5);
  param_12[4] = iVar5;
  if (iVar5 == 1) {
    param_12[5] = param_5 & 0x7fffffff;
  }
  else {
    param_12[5] = 0;
  }
  param_12[10] = param_7;
  param_12[3] = param_8;
  param_12[9] = (byte)~bVar7 & 1;
  uVar8 = bVar3 & 1;
  param_12[8] = uVar8;
  if (((param_5 == 0) || (param_5 == 1)) && (param_9 != 1)) {
    if (param_9 == 2) {
      uVar9 = 2;
      goto LAB_00761fd7;
    }
    if (param_9 == 3) {
      uVar9 = 3;
      goto LAB_00761fd7;
    }
  }
  uVar9 = 1;
LAB_00761fd7:
  param_12[6] = uVar9;
  piVar1 = param_12 + 0xc;
  *piVar1 = param_10;
  param_12[7] = param_1;
  param_12[0xb] = (uint)(param_5 == 1);
  uVar9 = FUN_00761da0(param_11);
  puVar10 = local_8;
  param_12[0xd] = uVar9;
  iVar5 = (**(code **)(*DAT_00b42154 + 0x2c))
                    (DAT_00b42154,*(undefined4 *)(in_ECX + 0x5bc),*(undefined4 *)(in_ECX + 0x5c0),
                     uVar4,uVar8,iVar5);
  if (iVar5 < 0) {
    FUN_0060d0a0(
                "NiDX9Renderer::Initialize> Could not support requested antialiasing mode - disabling\n"
                );
    param_12[4] = 0;
  }
  else if (puVar10 <= (undefined1 *)param_12[5]) {
    param_12[5] = puVar10 + -1;
  }
  if (param_12[3] == 0) {
    param_12[3] = 1;
  }
  else if (3 < (uint)param_12[3]) {
    param_12[3] = 3;
  }
  iVar5 = *piVar1;
  if (param_12[8] == 0) {
    iVar6 = FUN_00775320(param_12[2],*param_12,param_12[1],piVar1);
    if (iVar6 == 0) {
      FUN_00761a90("Creation failed: Could not match desired fullscreen mode");
      FUN_0060d0a0("NiDX9Renderer::Initialize> Could not find matching fullscreen display mode\n");
      return 0;
    }
    if (iVar5 != *piVar1) {
      FUN_0060d0a0(
                  "NiDX9Renderer::Initialize> Could not match requested fullscreen refresh rate - using closest\n"
                  );
    }
  }
  else {
    *piVar1 = 0;
  }
  if (param_12[8] != 0) {
    param_12[0xd] = 0x80000000;
    return 1;
  }
  if ((param_12[0xd] & *(uint *)(unaff_EDI + 0x18)) == 0) {
    param_12[0xd] = 1;
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00762110(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int unaff_ESI;
  undefined4 uVar5;
  
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x280) + 0x1c))(*(int **)(in_ECX + 0x280),in_ECX + 0x284)
  ;
  if (iVar2 < 0) {
    _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not query device caps",0xff);
    uVar3 = FUN_0060d0a0("NiDX9Renderer::Initialize> Could not query device caps - FAILING\n");
    return uVar3 & 0xffffff00;
  }
  if ((1 < *(uint *)(in_ECX + 0x318)) && (1 < *(uint *)(in_ECX + 0x31c))) {
    uVar3 = *(uint *)(in_ECX + 0x2c0);
    *(undefined4 *)(in_ECX + 0x5e0) = 0;
    if ((uVar3 & 2) == 0) {
      *(undefined4 *)(in_ECX + 0x5e0) = 8;
    }
    else if ((uVar3 & 0x100) != 0) {
      *(undefined4 *)(in_ECX + 0x5e0) = 4;
    }
    *(undefined4 *)(in_ECX + 0x6d8) = *(undefined4 *)(in_ECX + 0x32c);
    if ((*(char *)(in_ECX + 0x5c8) != '\0') && (*(char *)(in_ECX + 0x5c9) == '\0')) {
      *(undefined4 *)(in_ECX + 0x6d8) = 4;
    }
    if (3 < *(uint *)(in_ECX + 0x6d8)) {
      *(uint *)(in_ECX + 0x5e0) = *(uint *)(in_ECX + 0x5e0) | 2;
    }
    uVar5 = *(undefined4 *)(in_ECX + 0x348);
    *(byte *)(in_ECX + 0x6e8) = (byte)(uVar3 >> 0x10) & 1;
    *(undefined4 *)(in_ECX + 0x6dc) = *(undefined4 *)(in_ECX + 0x340);
    uVar1 = *(undefined4 *)(in_ECX + 0x350);
    *(byte *)(in_ECX + 0x6e9) = (byte)((uint)*(undefined4 *)(in_ECX + 0x290) >> 0x1d) & 1;
    *(undefined4 *)(in_ECX + 0x6e0) = uVar1;
    *(undefined4 *)(in_ECX + 0x6e4) = uVar5;
    uVar4 = 1;
    if (*(int *)(unaff_ESI + 0x10) == 0) {
      uVar4 = *(undefined4 *)(in_ECX + 0x374);
    }
    *(undefined4 *)(in_ECX + 0x894) = uVar4;
    *(byte *)(in_ECX + 0x898) = (byte)(*(uint *)(in_ECX + 0x2a4) >> 0x12) & 1;
    *(byte *)(in_ECX + 0x899) = (byte)(*(uint *)(in_ECX + 0x2a4) >> 0x13) & 1;
    *(undefined4 *)(in_ECX + 0x914) = uVar1;
    *(undefined4 *)(in_ECX + 0x918) = 0xffff0000;
    *(undefined4 *)(in_ECX + 0x91c) = uVar1;
    *(undefined4 *)(in_ECX + 0x920) = uVar5;
    *(undefined4 *)(in_ECX + 0x924) = 0xfffe0000;
    *(undefined4 *)(in_ECX + 0x928) = uVar5;
    *(undefined4 *)(in_ECX + 0x92c) = 0xfffe0000;
    *(undefined4 *)(in_ECX + 0x930) = 0xfffe0000;
    *(undefined4 *)(in_ECX + 0x934) = 0xfffe0000;
    *(undefined4 *)(in_ECX + 0x938) = 2;
    FUN_0075fa40(*(uint *)(in_ECX + 0x318));
    FUN_0075fa50(*(undefined4 *)(in_ECX + 0x31c));
    if (*(uint *)(in_ECX + 0x6e0) < 0xffff0200) {
      uVar5 = *(undefined4 *)(in_ECX + 0x318);
    }
    else {
      uVar5 = 0x10;
    }
    FUN_0075fa60(uVar5);
    _DAT_00b42144 = 3;
    _DAT_00b42138 = 3;
    _DAT_00b42130 = 3;
    _DAT_00b42134 = 3;
    _DAT_00b420f0 = 0;
    _DAT_00b420fc = 0;
    _DAT_00b42148 = 1;
    _DAT_00b4214c = 1;
    _DAT_00b42140 = 1;
    _DAT_00b4213c = 1;
    _DAT_00b420ec = 1;
    _DAT_00b420e8 = 1;
    _DAT_00b420f8 = 2;
    _DAT_00b420f4 = 2;
    _DAT_00b42104 = 2;
    _DAT_00b42100 = 2;
    _DAT_00b42108 = 2;
    _DAT_00b42110 = 1;
    _DAT_00b4210c = 1;
    _DAT_00b42114 = 1;
    _DAT_00b4211c = 1;
    _DAT_00b42118 = 1;
    _DAT_00b42120 = 2;
    _DAT_00b42128 = 2;
    _DAT_00b42124 = 2;
    _DAT_00b4212c = 1;
    DAT_00b4215c = (-(uint)((*(uint *)(in_ECX + 0x2c0) & 0x400) != 0) & 0x101) + 2;
    return 1;
  }
  _strncpy_s(&DAT_00b3f828,0x100,
             "Creation failed: Device does not support single-pass multi-texture",0xff);
  uVar3 = FUN_0060d0a0(
                      "NiDX9Renderer::Initialize> Device does not support single-pass multi-texture - FAILING\n"
                      );
  return uVar3 & 0xffffff00;
}



undefined4 FUN_007623d0(undefined4 param_1,undefined4 *param_2,uint *param_3)

{
  *param_3 = *param_3 & 0xffffff0f;
  switch(param_1) {
  case 0:
    *param_2 = 1;
    *param_3 = *param_3 | 0x50;
    return 1;
  case 1:
    *param_2 = 1;
    *param_3 = *param_3 | 0x40;
    return 1;
  case 2:
    *param_2 = 1;
    *param_3 = *param_3 | 0x80;
    return 1;
  case 3:
    *param_2 = 1;
    *param_3 = *param_3 | 0x20;
    return 1;
  case 4:
    *param_2 = 2;
    *param_3 = *param_3 | 0x20;
    return 1;
  case 5:
    *param_2 = 2;
    *param_3 = *param_3 | 0x40;
    return 1;
  case 6:
    *param_2 = 2;
    *param_3 = *param_3 | 0x80;
    return 1;
  default:
    return 0;
  }
}



undefined4 FUN_00762600(void)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x280) + 0xa8))(*(int **)(in_ECX + 0x280));
    if (iVar1 < 0) {
      return 0;
    }
    FUN_00777a40();
  }
  return 1;
}



void FUN_00762640(undefined4 *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  char cVar11;
  int iVar12;
  int in_ECX;
  undefined4 uStack_38;
  int iStack_34;
  
  fVar10 = DAT_00b3f9b0;
  fVar2 = DAT_00b3f9ac;
  fVar1 = DAT_00b3f9a8;
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    DAT_00b3f92c = *param_1;
    DAT_00b3f930 = param_1[1];
    DAT_00b3f934 = param_1[2];
    *(float *)(in_ECX + 0x980) = *param_4;
    iStack_34 = in_ECX + 0x980;
    *(float *)(in_ECX + 0x984) = *param_3;
    *(float *)(in_ECX + 0x988) = *param_2;
    *(undefined4 *)(in_ECX + 0x98c) = 0;
    *(float *)(in_ECX + 0x990) = param_4[1];
    *(float *)(in_ECX + 0x994) = param_3[1];
    *(float *)(in_ECX + 0x998) = param_2[1];
    *(undefined4 *)(in_ECX + 0x99c) = 0;
    *(float *)(in_ECX + 0x9a0) = param_4[2];
    *(float *)(in_ECX + 0x9a4) = param_3[2];
    *(float *)(in_ECX + 0x9a8) = param_2[2];
    *(undefined4 *)(in_ECX + 0x9ac) = 0;
    *(float *)(in_ECX + 0x9b0) = -(fVar10 * param_4[2] + fVar2 * param_4[1] + fVar1 * *param_4);
    *(float *)(in_ECX + 0x9b4) = -(param_3[2] * fVar10 + fVar2 * param_3[1] + *param_3 * fVar1);
    uStack_38 = 2;
    *(float *)(in_ECX + 0x9b8) = -(param_2[2] * fVar10 + param_2[1] * fVar2 + *param_2 * fVar1);
    *(undefined4 *)(in_ECX + 0x9bc) = 0x3f800000;
    *(float *)(in_ECX + 0xa00) = *param_4;
    *(float *)(in_ECX + 0xa04) = param_4[1];
    *(float *)(in_ECX + 0xa08) = param_4[2];
    *(undefined4 *)(in_ECX + 0xa0c) = 0;
    *(float *)(in_ECX + 0xa10) = *param_3;
    *(float *)(in_ECX + 0xa14) = param_3[1];
    *(float *)(in_ECX + 0xa18) = param_3[2];
    *(undefined4 *)(in_ECX + 0xa1c) = 0;
    *(float *)(in_ECX + 0xa20) = *param_2;
    *(float *)(in_ECX + 0xa24) = param_2[1];
    *(float *)(in_ECX + 0xa28) = param_2[2];
    *(undefined4 *)(in_ECX + 0xa2c) = 0;
    *(float *)(in_ECX + 0xa30) = fVar1;
    *(float *)(in_ECX + 0xa34) = fVar2;
    *(float *)(in_ECX + 0xa38) = fVar10;
    *(undefined4 *)(in_ECX + 0xa3c) = 0x3f800000;
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))(*(int **)(in_ECX + 0x280));
    *(float *)(in_ECX + 0x640) = *param_4;
    *(float *)(in_ECX + 0x644) = param_4[1];
    *(float *)(in_ECX + 0x648) = param_4[2];
    *(float *)(in_ECX + 0x628) = *param_4;
    *(float *)(in_ECX + 0x62c) = param_4[1];
    *(float *)(in_ECX + 0x630) = param_4[2];
    *(float *)(in_ECX + 0x64c) = *param_3;
    *(float *)(in_ECX + 0x650) = param_3[1];
    *(float *)(in_ECX + 0x654) = param_3[2];
    *(float *)(in_ECX + 0x634) = *param_3;
    *(float *)(in_ECX + 0x638) = param_3[1];
    *(float *)(in_ECX + 0x63c) = param_3[2];
    *(float *)(in_ECX + 0x678) = param_2[4];
    fVar1 = param_2[5];
    fVar2 = param_2[4];
    *(float *)(in_ECX + 0x67c) = fVar1 - fVar2;
    pfVar6 = (float *)(param_2[1] - *param_2);
    fVar7 = param_2[1] + *param_2;
    fVar8 = param_2[2] - param_2[3];
    fVar3 = param_2[3];
    fVar4 = param_2[2];
    pcVar5 = *(code **)(**(int **)(in_ECX + 0x8ac) + 0x48);
    fVar1 = 1.0 / (fVar1 - fVar2);
    if (*(char *)(param_2 + 6) == '\0') {
      cVar11 = (*pcVar5)();
      if (cVar11 == '\0') {
        *(float *)(in_ECX + 0x9c0) = 2.0 / (float)pfVar6;
        *(undefined4 *)(in_ECX + 0x9d0) = 0;
        fVar7 = -fVar7;
      }
      else {
        *(float *)(in_ECX + 0x9c0) = -2.0 / (float)pfVar6;
        *(undefined4 *)(in_ECX + 0x9d0) = 0;
      }
      *(float *)(in_ECX + 0x9e0) = fVar7 / (float)pfVar6;
      *(undefined4 *)(in_ECX + 0x9f0) = 0;
      *(undefined4 *)(in_ECX + 0x9c4) = 0;
      *(float *)(in_ECX + 0x9d4) = 2.0 / fVar8;
      *(float *)(in_ECX + 0x9e4) = -(fVar3 + fVar4) / fVar8;
      *(undefined4 *)(in_ECX + 0x9f4) = 0;
      *(undefined4 *)(in_ECX + 0x9c8) = 0;
      *(undefined4 *)(in_ECX + 0x9d8) = 0;
      *(float *)(in_ECX + 0x9e8) = fVar1 * param_2[5];
      *(float *)(in_ECX + 0x9f8) = -(param_2[5] * param_2[4] * fVar1);
      *(undefined4 *)(in_ECX + 0x9cc) = 0;
      *(undefined4 *)(in_ECX + 0x9dc) = 0;
      *(undefined4 *)(in_ECX + 0x9ec) = 0x3f800000;
      uVar9 = 0;
    }
    else {
      cVar11 = (*pcVar5)();
      if (cVar11 == '\0') {
        *(float *)(in_ECX + 0x9c0) = 2.0 / (float)pfVar6;
        *(undefined4 *)(in_ECX + 0x9d0) = 0;
        *(undefined4 *)(in_ECX + 0x9e0) = 0;
        fVar7 = -fVar7;
      }
      else {
        *(float *)(in_ECX + 0x9c0) = -2.0 / (float)pfVar6;
        *(undefined4 *)(in_ECX + 0x9d0) = 0;
        *(undefined4 *)(in_ECX + 0x9e0) = 0;
      }
      *(float *)(in_ECX + 0x9f0) = fVar7 / (float)pfVar6;
      *(undefined4 *)(in_ECX + 0x9c4) = 0;
      *(float *)(in_ECX + 0x9d4) = 2.0 / fVar8;
      *(undefined4 *)(in_ECX + 0x9e4) = 0;
      *(float *)(in_ECX + 0x9f4) = -(fVar3 + fVar4) / fVar8;
      *(undefined4 *)(in_ECX + 0x9c8) = 0;
      *(undefined4 *)(in_ECX + 0x9d8) = 0;
      *(float *)(in_ECX + 0x9e8) = fVar1;
      *(float *)(in_ECX + 0x9f8) = -(fVar1 * param_2[4]);
      *(undefined4 *)(in_ECX + 0x9cc) = 0;
      *(undefined4 *)(in_ECX + 0x9dc) = 0;
      *(undefined4 *)(in_ECX + 0x9ec) = 0;
      uVar9 = 0x3f800000;
    }
    *(undefined4 *)(in_ECX + 0x9fc) = uVar9;
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))(*(int **)(in_ECX + 0x280),3,in_ECX + 0x9c0);
    (**(code **)(**(int **)(in_ECX + 0x87c) + 0x4c))(0);
    iVar12 = (**(code **)(**(int **)(in_ECX + 0x87c) + 0x50))(0);
    fVar1 = (float)iVar12;
    if (iVar12 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    uStack_38 = (undefined4)(longlong)ROUND(fVar10 * *pfVar6);
    iStack_34 = (int)(longlong)ROUND(fVar1 * (1.0 - pfVar6[2]));
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xbc))(*(int **)(in_ECX + 0x280),&uStack_38);
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x44))(param_2[4],param_2[5]);
  }
  return;
}



void FUN_00762be0(void)

{
  int in_ECX;
  float unaff_EDI;
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    (**(code **)(**(int **)(in_ECX + 0x87c) + 0x4c))(0);
    (**(code **)(**(int **)(in_ECX + 0x87c) + 0x50))();
    *(undefined4 *)(in_ECX + 0x980) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x984) = 0;
    *(undefined4 *)(in_ECX + 0x988) = 0;
    *(undefined4 *)(in_ECX + 0x98c) = 0;
    *(undefined4 *)(in_ECX + 0x990) = 0;
    *(undefined4 *)(in_ECX + 0x994) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x998) = 0;
    *(undefined4 *)(in_ECX + 0x99c) = 0;
    *(undefined4 *)(in_ECX + 0x9a0) = 0;
    *(undefined4 *)(in_ECX + 0x9a4) = 0;
    *(undefined4 *)(in_ECX + 0x9ac) = 0;
    *(undefined4 *)(in_ECX + 0x9a8) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x9b0) = 0xbf000000;
    *(undefined4 *)(in_ECX + 0x9b4) = 0x3f000000;
    *(undefined4 *)(in_ECX + 0xa30) = 0x3f000000;
    *(undefined4 *)(in_ECX + 0xa34) = 0x3f000000;
    *(undefined4 *)(in_ECX + 0x9b8) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x9bc) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0xa00) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0xa28) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0xa3c) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0xa04) = 0;
    *(undefined4 *)(in_ECX + 0xa08) = 0;
    *(undefined4 *)(in_ECX + 0xa0c) = 0;
    *(undefined4 *)(in_ECX + 0xa10) = 0;
    *(undefined4 *)(in_ECX + 0xa18) = 0;
    *(undefined4 *)(in_ECX + 0xa1c) = 0;
    *(undefined4 *)(in_ECX + 0xa20) = 0;
    *(undefined4 *)(in_ECX + 0xa24) = 0;
    *(undefined4 *)(in_ECX + 0xa2c) = 0;
    *(undefined4 *)(in_ECX + 0xa14) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0xa38) = 0xbf800000;
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))(*(int **)(in_ECX + 0x280),2);
    *(undefined4 *)(in_ECX + 0x640) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x628) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x644) = 0;
    *(undefined4 *)(in_ECX + 0x62c) = 0;
    *(undefined4 *)(in_ECX + 0x64c) = 0;
    *(undefined4 *)(in_ECX + 0x634) = 0;
    *(undefined4 *)(in_ECX + 0x678) = 0x3f800000;
    *(undefined4 *)(in_ECX + 0x648) = 0;
    *(undefined4 *)(in_ECX + 0x630) = 0;
    *(undefined4 *)(in_ECX + 0x67c) = 0x461c3c00;
    *(undefined4 *)(in_ECX + 0x650) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x638) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x654) = 0;
    *(undefined4 *)(in_ECX + 0x63c) = 0;
    *(undefined4 *)(in_ECX + 0x9c0) = 0x40000000;
    *(undefined4 *)(in_ECX + 0x9d0) = 0;
    *(undefined4 *)(in_ECX + 0x9e0) = 0;
    *(undefined4 *)(in_ECX + 0x9f0) = 0xff800000;
    *(undefined4 *)(in_ECX + 0x9c4) = 0;
    *(undefined4 *)(in_ECX + 0x9e4) = 0;
    *(undefined4 *)(in_ECX + 0x9d4) = 0x40000000;
    *(float *)(in_ECX + 0x9f4) = 1.0 / unaff_EDI;
    *(undefined4 *)(in_ECX + 0x9c8) = 0;
    *(undefined4 *)(in_ECX + 0x9d8) = 0;
    *(undefined4 *)(in_ECX + 0x9e8) = 0x38d1bc76;
    *(undefined4 *)(in_ECX + 0x9f8) = 0xb8d1bc76;
    *(undefined4 *)(in_ECX + 0x9cc) = 0;
    *(undefined4 *)(in_ECX + 0x9dc) = 0;
    *(undefined4 *)(in_ECX + 0x9ec) = 0;
    *(undefined4 *)(in_ECX + 0x9fc) = 0x3f800000;
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))
              (*(int **)(in_ECX + 0x280),3,(undefined4 *)(in_ECX + 0x9c0));
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xbc))(*(int **)(in_ECX + 0x280),&stack0xffffffc8);
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x44))(0x3f800000,0x461c4000);
  }
  return;
}



void FUN_00762fd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x614);
  iVar2 = DAT_00b42164;
  while (DAT_00b42164 = iVar1, DAT_00b42164 != 0) {
    iVar1 = *(int *)(DAT_00b42164 + 0xc);
    *(int *)(DAT_00b42164 + 0xc) = iVar2;
    iVar2 = DAT_00b42164;
  }
  DAT_00b42164 = iVar2;
  *(undefined4 *)(in_ECX + 0x618) = 0;
  *(undefined4 *)(in_ECX + 0x614) = 0;
  return;
}



void FUN_00763050(int param_1)

{
  FUN_00401f20(*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_00401f20(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



void FUN_00763090(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8ac) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x88))(0,0);
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x40))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  (**(code **)(*param_1 + 0x44))(0);
  return;
}



void FUN_007630e0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x8ac) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x78))(0,0);
  }
  piVar1 = (int *)(**(code **)(*param_1 + 0x38))();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  (**(code **)(*param_1 + 0x3c))(0);
  return;
}



undefined4
FUN_00763130(uint *param_1,int param_2,undefined4 param_3,uint param_4,int *param_5,uint param_6)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint local_18;
  uint local_14;
  
  iVar5 = param_4;
  if ((param_1 == (uint *)0x0) || (param_2 == 0)) {
    return 0;
  }
  cVar6 = FUN_00777f10();
  if ((((char)param_6 == '\0') && (cVar6 != '\0')) &&
     ((*(ushort *)(param_2 + 0x2e) & 0xf000) == 0x4000)) {
    return 1;
  }
  uVar8 = 0;
  if (*(int *)(param_2 + 0x24) != 0) {
    uVar8 = 0x400000;
  }
  if (*(int *)(param_2 + 0x20) != 0) {
    uVar8 = uVar8 | 0x800000;
  }
  *param_1 = (*(byte *)(param_2 + 0x2c) & 0x3f) << 0x18 | uVar8;
  uVar1 = *(ushort *)(param_4 + 0x1c);
  uVar8 = *(uint *)(param_4 + 0x14);
  uVar2 = *(ushort *)(param_4 + 0x1e);
  uVar3 = *(uint *)(param_4 + 0x18);
  local_14 = (uint)*(ushort *)(param_4 + 0x22);
  if (*(ushort *)(param_4 + 0x22) == 0) {
    local_18 = (uint)uVar2 * 3;
    local_14 = 1;
  }
  else {
    local_18 = (uint)uVar2 + local_14 * 2;
  }
  if (param_5 == (int *)0x0) {
    param_4 = 1;
  }
  else {
    param_4 = param_5[8];
  }
  uVar9 = *(ushort *)(param_2 + 0x2e) & 0xfff;
  if (((*(ushort *)(param_2 + 0x2e) & 0xf000) == 0x8000) || ((char)param_6 != '\0')) {
    uVar9 = 0xfff;
  }
  if (cVar6 == '\0') {
    piVar4 = (int *)param_1[1];
    uVar10 = 0;
    if (param_4 != 0) {
      do {
        (**(code **)(*piVar4 + 0x1c))(param_1,uVar10);
        uVar10 = uVar10 + 1;
      } while (uVar10 < param_4);
    }
    FUN_00777f70(param_4);
    param_1[0xd] = 0;
  }
  else {
    if (param_4 == param_1[7]) goto LAB_0076329a;
    FUN_00777f70(param_4);
  }
  uVar9 = 0xfff;
LAB_0076329a:
  param_1[5] = (uint)uVar1;
  param_1[6] = (uint)uVar1;
  param_1[0x12] = uVar3;
  param_1[0x13] = uVar8;
  param_1[0xf] = (uint)uVar2;
  param_1[0x10] = (uint)uVar2;
  param_1[0x11] = local_14;
  if (((uVar9 & 0xffef) != 0) && (param_6 = 0, param_4 != 0)) {
    do {
      if (param_6 < param_1[7]) {
        uVar11 = *(undefined4 *)(param_1[9] + param_6 * 4);
      }
      else {
        uVar11 = 0;
      }
      if ((param_5 == (int *)0x0) ||
         (iVar7 = (**(code **)(*param_5 + 0x6c))(param_2,param_3,iVar5,uVar9,uVar11,param_6,0),
         iVar7 == 0)) {
        if (param_4 != 1) {
          return 0;
        }
        iVar7 = FUN_007774c0(param_2,param_3,iVar5,uVar9,uVar11,0);
        if (iVar7 == 0) {
          return 0;
        }
      }
      param_6 = param_6 + 1;
    } while (param_6 < param_4);
  }
  if ((uVar9 & 0x30) != 0) {
    param_6 = param_1[0xb];
    uVar3 = param_1[0xc];
    uVar8 = FUN_007781f0(uVar8,local_18,local_18,uVar3,&param_6,1,-((char)param_1[4] != '\0') & 0x10
                        );
    if (uVar8 == 0) {
      return 0;
    }
    if (uVar3 != uVar8) {
      FUN_00777f40();
      param_1[0xc] = uVar8;
      param_1[10] = local_18;
      param_1[0xb] = param_6;
    }
  }
  return 1;
}



undefined4 FUN_007633d0(uint *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  undefined1 local_c [4];
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar2 = param_4;
  iVar1 = param_2;
  local_1c = 0;
  local_14 = 0;
  local_20 = 0;
  local_18 = 0;
  if ((param_4 == (int *)0x0) ||
     (cVar3 = (**(code **)(*param_4 + 0x70))(&local_14,&local_20), cVar3 == '\0')) {
    if ((param_3 != 0) && (4 < *(ushort *)(param_3 + 0x20))) {
      return 0;
    }
    local_20 = 1;
    FUN_00776dd0(iVar1,param_3,&local_1c,&local_18,local_4,local_8,local_c,&param_2,&param_4);
  }
  FUN_00777f70(local_20);
  if (local_1c == 0) {
    FUN_007780d0(local_14);
    if (local_20 != 0) {
      uVar7 = 0;
      do {
        uVar5 = (**(code **)(*piVar2 + 0x60))(uVar7);
        if (uVar7 < param_1[7]) {
          *(undefined4 *)(param_1[8] + uVar7 * 4) = uVar5;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_20);
    }
  }
  else {
    FUN_007780a0(local_1c);
    if (param_1[7] != 0) {
      *(undefined4 *)param_1[8] = local_18;
    }
  }
  uVar7 = 0;
  uVar6 = 0;
  if (*(int *)(iVar1 + 0x24) != 0) {
    uVar6 = 0x400000;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    uVar6 = uVar6 | 0x800000;
  }
  *param_1 = (*(byte *)(iVar1 + 0x2c) & 0x3f) << 0x18 | uVar6;
  if ((piVar2 != (int *)0x0) && (*(char *)(local_10 + 0x5c8) != '\0')) {
    uVar4 = (**(code **)(*piVar2 + 0x68))();
    *(undefined1 *)(param_1 + 4) = uVar4;
  }
  if (local_20 != 0) {
    do {
      cVar3 = FUN_00776c40(param_1,uVar7);
      if (cVar3 == '\0') {
        for (; uVar7 != 0; uVar7 = uVar7 - 1) {
          (**(code **)(*(int *)param_1[1] + 0x1c))(param_1,uVar7);
        }
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < local_20);
  }
  return 1;
}



bool FUN_007635c0(int param_1)

{
  int *piVar1;
  DWORD DVar2;
  int iVar3;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x180));
  DVar2 = GetCurrentThreadId();
  *(int *)(in_ECX + 0x1fc) = *(int *)(in_ECX + 0x1fc) + 1;
  *(DWORD *)(in_ECX + 0x1f8) = DVar2;
  if (*(int *)(param_1 + 0x24) != 0) {
    return true;
  }
  iVar3 = FUN_00774550(param_1);
  piVar1 = (int *)(in_ECX + 0x1fc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x1f8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x180));
  return iVar3 != 0;
}



undefined4 FUN_00763620(int *param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  undefined1 auStack_8 [8];
  
  *param_2 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (cVar1 == '\0') {
      uVar5 = 0;
      if (*(char *)(in_ECX + 0x6e9) == '\0') {
        piVar3 = (int *)(**(code **)(*piVar2 + 0x28))();
      }
      else {
        piVar3 = (int *)(**(code **)(*piVar2 + 0x14))();
        uVar5 = 0x2000;
      }
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar3 + 0x4c))(piVar3,0,auStack_8,0);
        if (-1 < iVar4) {
          *param_2 = uVar5;
          (**(code **)(*piVar2 + 0x30))(1);
          return unaff_EDI;
        }
        uVar5 = FUN_007736f0(iVar4);
        FUN_0060d0a0("NiDX9Renderer::LockDynamicTexture Failed> LockRect - %s",uVar5);
      }
      return 0;
    }
  }
  return 0;
}



undefined4 FUN_007636f0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  code *pcVar6;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
  if (piVar2 != (int *)0x0) {
    cVar1 = (**(code **)(*piVar2 + 0x2c))();
    if (cVar1 != '\0') {
      if (*(char *)(in_ECX + 0x6e9) == '\0') {
        pcVar6 = *(code **)(*piVar2 + 0x28);
      }
      else {
        pcVar6 = *(code **)(*piVar2 + 0x14);
      }
      piVar3 = (int *)(*pcVar6)();
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar3 + 0x50))(piVar3,0);
        if (iVar4 < 0) {
          uVar5 = FUN_007736f0(iVar4);
          FUN_0060d0a0("NiDX9Renderer::UnLockDynamicTexture Failed> UnlockRect - %s",uVar5);
          return 0;
        }
        if (*(char *)(in_ECX + 0x6e9) != '\0') {
LAB_007637b1:
          (**(code **)(*piVar2 + 0x30))(0);
          return 1;
        }
        iVar4 = (**(code **)(*piVar2 + 0x14))();
        if (iVar4 != 0) {
          iVar4 = (**(code **)(**(int **)(in_ECX + 0x280) + 0x7c))
                            (*(int **)(in_ECX + 0x280),piVar3,iVar4);
          if (-1 < iVar4) goto LAB_007637b1;
          uVar5 = FUN_007736f0(iVar4);
          FUN_0060d0a0("NiDX9Renderer::UnLockDynamicTexture Failed> UpdateTexture - %s",uVar5);
        }
      }
      return 0;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00763d12) */
/* WARNING: Removing unreachable block (ram,0x00763d16) */
/* WARNING: Removing unreachable block (ram,0x00763d5b) */
/* WARNING: Removing unreachable block (ram,0x00763d66) */
/* WARNING: Removing unreachable block (ram,0x00763d6a) */
/* WARNING: Removing unreachable block (ram,0x00763d76) */

void FUN_007637d0(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x878) + 0x5c))(0);
                    /* WARNING: Could not recover jumptable at 0x00763803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)&LAB_0076380a)();
  return;
}



int FUN_00763de0(void)

{
  int *piVar1;
  int iVar2;
  
  if ((DAT_00b42160 == 0) &&
     (((DAT_00b42158 != (FARPROC)0x0 ||
       ((DAT_00b42150 = LoadLibraryA("D3D9.DLL"), DAT_00b42150 != (HMODULE)0x0 &&
        (DAT_00b42158 = GetProcAddress(DAT_00b42150,"Direct3DCreate9"), DAT_00b42158 != (FARPROC)0x0
        )))) && (piVar1 = (int *)(*DAT_00b42158)(0x20), piVar1 != (int *)0x0)))) {
    iVar2 = FUN_00401f00(0x14);
    if (iVar2 != 0) {
      DAT_00b42160 = FUN_00775df0(piVar1,&PTR_PTR_00b28e00);
      (**(code **)(*piVar1 + 8))(piVar1);
      return DAT_00b42160;
    }
    DAT_00b42160 = 0;
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return DAT_00b42160;
}



bool FUN_00763e80(int param_1,int param_2)

{
  return param_1 == param_2;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a88afc;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a88b04;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a88b0c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00763f60(void)

{
  DWORD DVar1;
  int *in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  DVar1 = GetCurrentThreadId();
  in_ECX[0x3e] = DVar1;
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  if (in_ECX[0x3f] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00763f96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*in_ECX + 0x128))();
    return;
  }
  return;
}



void FUN_00763fa0(void)

{
  int *piVar1;
  int *in_ECX;
  
  if (in_ECX[0x3f] == 1) {
    (**(code **)(*in_ECX + 300))();
  }
  piVar1 = in_ECX + 0x3f;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_ECX[0x3e] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  return;
}



void FUN_00763fe0(void)

{
  DWORD DVar1;
  int *in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  DVar1 = GetCurrentThreadId();
  in_ECX[0x3e] = DVar1;
  in_ECX[0x3f] = in_ECX[0x3f] + 1;
  if (in_ECX[0x3f] == 1) {
    (**(code **)(*in_ECX + 0x128))();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
  DVar1 = GetCurrentThreadId();
  in_ECX[0x5f] = in_ECX[0x5f] + 1;
  in_ECX[0x5e] = DVar1;
  return;
}



void FUN_00764040(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = in_ECX + 0x5f;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_ECX[0x5e] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
  if (in_ECX[0x3f] == 1) {
    (**(code **)(*in_ECX + 300))();
  }
  piVar1 = in_ECX + 0x3f;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    in_ECX[0x3e] = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  return;
}



void FUN_007640a0(undefined4 param_1,int param_2)

{
  FUN_00761ae0(param_1,param_2,param_2 + 0x24,*(undefined4 *)(param_2 + 0x30));
  return;
}



void FUN_007640c0(void)

{
  ushort uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xaa2) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0xa9c) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)(in_ECX + 0xaa2));
  }
  *(undefined2 *)(in_ECX + 0xaa2) = 0;
  *(undefined2 *)(in_ECX + 0xaa4) = 0;
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xab2) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0xaac) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)(in_ECX + 0xab2));
  }
  *(undefined2 *)(in_ECX + 0xab4) = 0;
  *(undefined2 *)(in_ECX + 0xab2) = 0;
  return;
}



void FUN_00764130(void)

{
  ushort uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xac2) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0xabc) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)(in_ECX + 0xac2));
  }
  *(undefined2 *)(in_ECX + 0xac2) = 0;
  *(undefined2 *)(in_ECX + 0xac4) = 0;
  uVar1 = 0;
  if (*(short *)(in_ECX + 0xad2) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(*(int *)(in_ECX + 0xacc) + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)(in_ECX + 0xad2));
  }
  *(undefined2 *)(in_ECX + 0xad4) = 0;
  *(undefined2 *)(in_ECX + 0xad2) = 0;
  return;
}



void FUN_007641a0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int local_8;
  
  *(undefined4 *)(in_ECX + 0x280) = 0;
  _memset((void *)(in_ECX + 0x284),0,0x130);
  *(undefined4 *)(in_ECX + 0x5d8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x3b4) = 0;
  *(undefined1 *)(in_ECX + 0x3bc) = 0;
  *(undefined4 *)(in_ECX + 0x5bc) = 0;
  *(undefined4 *)(in_ECX + 0x3b8) = 0;
  *(undefined4 *)(in_ECX + 0x5c4) = 0;
  *(undefined1 *)(in_ECX + 0x5c8) = 0;
  *(undefined1 *)(in_ECX + 0x5c9) = 0;
  *(undefined4 *)(in_ECX + 0x6d8) = 0;
  *(undefined4 *)(in_ECX + 0x6dc) = 0;
  *(undefined4 *)(in_ECX + 0x6e0) = 0;
  *(undefined4 *)(in_ECX + 0x6e4) = 0;
  *(undefined1 *)(in_ECX + 0x6e8) = 0;
  *(undefined1 *)(in_ECX + 0x6e9) = 0;
  *(undefined4 *)(in_ECX + 0x894) = 0;
  *(undefined1 *)(in_ECX + 0x898) = 0;
  *(undefined1 *)(in_ECX + 0x899) = 0;
  *(undefined4 *)(in_ECX + 0x6ec) = 0;
  *(undefined1 *)(in_ECX + 0x6f0) = 0;
  *(undefined4 *)(in_ECX + 0x5d4) = 0xff808080;
  *(undefined4 *)(in_ECX + 0x5dc) = 0;
  *(undefined4 *)(in_ECX + 0x5e0) = 0;
  *(undefined1 *)(in_ECX + 0x5e4) = 0;
  *(undefined4 *)(in_ECX + 0x5c0) = 1;
  *(undefined4 *)(in_ECX + 0x628) = DAT_00b258d0;
  *(undefined4 *)(in_ECX + 0x62c) = DAT_00b258d4;
  *(undefined4 *)(in_ECX + 0x630) = DAT_00b258d8;
  *(undefined4 *)(in_ECX + 0x634) = DAT_00b258dc;
  *(undefined4 *)(in_ECX + 0x638) = DAT_00b258e0;
  *(undefined4 *)(in_ECX + 0x63c) = DAT_00b258e4;
  *(undefined4 *)(in_ECX + 0x640) = DAT_00b258d0;
  *(undefined4 *)(in_ECX + 0x644) = DAT_00b258d4;
  *(undefined4 *)(in_ECX + 0x648) = DAT_00b258d8;
  *(undefined4 *)(in_ECX + 0x64c) = DAT_00b258dc;
  *(undefined4 *)(in_ECX + 0x650) = DAT_00b258e0;
  uVar2 = DAT_00b258e4;
  *(undefined4 *)(in_ECX + 0x678) = 0x3dcccccd;
  *(undefined4 *)(in_ECX + 0x67c) = 0x42c80000;
  *(undefined4 *)(in_ECX + 0x654) = uVar2;
  _memset((undefined4 *)(in_ECX + 0x680),0,0x40);
  *(undefined4 *)(in_ECX + 0x6bc) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x6a8) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x614) = 0;
  *(undefined4 *)(in_ECX + 0x694) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x618) = 0;
  *(undefined4 *)(in_ECX + 0x680) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x6c0) = 0;
  *(undefined4 *)(in_ECX + 0x6c8) = 1;
  *(undefined4 *)(in_ECX + 0x6d0) = 0;
  *(undefined4 *)(in_ECX + 0x6cc) = 1;
  *(undefined4 *)(in_ECX + 0x6c4) = 0;
  *(undefined4 *)(in_ECX + 0x6d4) = 0x3f800000;
  piVar4 = (int *)(in_ECX + 0x864);
  puVar5 = (undefined4 *)(in_ECX + 0x6f4);
  local_8 = 4;
  do {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
    puVar5[0x11] = 0;
    puVar5[0x12] = 0;
    puVar5[0x13] = 0;
    puVar5[0x14] = 0;
    puVar5[0x15] = 0;
    piVar4[-4] = 0;
    puVar1 = (undefined4 *)*piVar4;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar4 = 0;
    }
    piVar4 = piVar4 + 1;
    puVar5 = puVar5 + 0x16;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)(in_ECX + 0x94c) = 0;
  *(undefined4 *)(in_ECX + 0x95c) = 0;
  *(undefined4 *)(in_ECX + 0x96c) = 0;
  *(undefined4 *)(in_ECX + 0x874) = 0x16;
  *(undefined4 *)(in_ECX + 0x87c) = 0;
  *(undefined4 *)(in_ECX + 0x97c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x880) = 0;
  *(undefined4 *)(in_ECX + 0x8b0) = 0;
  *(undefined4 *)(in_ECX + 0x8b4) = 0;
  *(undefined4 *)(in_ECX + 0x8b8) = 0;
  *(undefined4 *)(in_ECX + 0x8ac) = 0;
  *(undefined4 *)(in_ECX + 0x8bc) = 0;
  *(undefined4 *)(in_ECX + 0x8a0) = 0;
  *(undefined4 *)(in_ECX + 0x8a4) = 0;
  *(undefined4 *)(in_ECX + 0x8a8) = 0;
  *(undefined4 *)(in_ECX + 0xa40) = 0;
  *(undefined4 *)(in_ECX + 0xa44) = 0;
  *(undefined4 *)(in_ECX + 0xa48) = 0;
  *(undefined4 *)(in_ECX + 0xa50) = 0;
  *(undefined2 *)(in_ECX + 0xa4c) = 0;
  *(undefined4 *)(in_ECX + 0xa54) = 0;
  _memset(&DAT_00b42070,0,0x76);
  DAT_00b42084 = 0x18;
  DAT_00b42085 = 0x20;
  DAT_00b42086 = 0x20;
  DAT_00b42087 = 0x10;
  DAT_00b42088 = 0x10;
  DAT_00b42089 = 0x10;
  DAT_00b4208a = 0x10;
  DAT_00b4208b = 8;
  DAT_00b4208c = 8;
  DAT_00b4208d = 0x10;
  DAT_00b4208e = 0x10;
  DAT_00b4208f = 0x20;
  DAT_00b42090 = 0x20;
  DAT_00b42091 = 0x20;
  DAT_00b42092 = 0x20;
  DAT_00b42093 = 0x20;
  DAT_00b42094 = 0x40;
  DAT_00b42098 = 0x10;
  DAT_00b42099 = 8;
  DAT_00b420a2 = 8;
  DAT_00b420a3 = 0x10;
  DAT_00b420a4 = 8;
  DAT_00b420ac = 0x10;
  DAT_00b420ad = 0x10;
  DAT_00b420ae = 0x20;
  DAT_00b420af = 0x20;
  DAT_00b420b0 = 0x20;
  DAT_00b420b3 = 0x20;
  DAT_00b420b6 = 0x10;
  DAT_00b420b7 = 0x20;
  DAT_00b420b9 = 0x10;
  DAT_00b420bb = 0x20;
  DAT_00b420bd = 0x20;
  DAT_00b420bf = 0x20;
  DAT_00b420c0 = 0x10;
  DAT_00b420c2 = 0x20;
  DAT_00b420c3 = 0x20;
  DAT_00b420c1 = 0x10;
  DAT_00b420d5 = 0x10;
  DAT_00b420d6 = 0x20;
  DAT_00b420de = 0x40;
  DAT_00b420df = 0x10;
  DAT_00b420e0 = 0x20;
  DAT_00b420e1 = 0x40;
  DAT_00b420e2 = 0x20;
  DAT_00b420e3 = 0x40;
  DAT_00b420e4 = 0x80;
  DAT_00b420e5 = 0x10;
  return;
}



void FUN_007645c0(void)

{
  int iVar1;
  
  if (DAT_00b42154 != (int *)0x0) {
    (**(code **)(*DAT_00b42154 + 8))(DAT_00b42154);
    DAT_00b42154 = (int *)0x0;
  }
  iVar1 = DAT_00b42160;
  if (DAT_00b42160 != 0) {
    FUN_00775f10();
    FUN_00401f20(iVar1);
  }
  DAT_00b42160 = 0;
  if (DAT_00b42150 != (HMODULE)0x0) {
    FreeLibrary(DAT_00b42150);
  }
  DAT_00b42158 = 0;
  FUN_00573880();
  return;
}



undefined4 FUN_00764630(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  LONG LVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_18 [6];
  
  uVar7 = 0;
  local_18[0] = 1;
  local_18[1] = 0;
  local_18[2] = 2;
  local_18[3] = 4;
  local_18[4] = 3;
  local_18[5] = 5;
  piVar6 = (int *)(in_ECX + 0x864);
  do {
    puVar8 = (undefined4 *)0x0;
    piVar6[-4] = 0;
    uVar3 = 0;
    do {
      if (*(int *)(in_ECX + (local_18[uVar3] + 0x1bd + uVar7) * 4) != 0) {
        piVar6[-4] = *(int *)(in_ECX + 0x6f4 + (local_18[uVar3] + uVar7) * 4);
        break;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    if (piVar6[-4] != 0) {
      iVar4 = FUN_00401f00(0x70);
      if (iVar4 != 0) {
        puVar8 = (undefined4 *)FUN_0070e560(4,4,piVar6[-4],1,1);
      }
      puVar1 = (undefined4 *)*piVar6;
      if (puVar1 != puVar8) {
        if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)
            ) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *piVar6 = (int)puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar8 + 1);
        }
      }
      iVar4 = *piVar6;
      _memset((void *)(**(int **)(iVar4 + 0x5c) + *(int *)(iVar4 + 0x50)),0xff,
              *(int *)(iVar4 + 100) << 4);
    }
    uVar7 = uVar7 + 0x16;
    piVar6 = piVar6 + 1;
    if (0x57 < uVar7) {
      if (*(int *)(in_ECX + 0x854) != 0) {
        FUN_007013a0(*(int *)(in_ECX + 0x854));
        uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x854) + 0x10);
        *(undefined4 *)(in_ECX + 0x874) = uVar2;
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      return 0;
    }
  } while( true );
}



undefined4 FUN_00764770(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    uVar1 = (**(code **)(**(int **)(in_ECX + 0x878) + 0x80))(0);
    iVar2 = FUN_00497dd0(&DAT_00b4265c,uVar1);
    uVar1 = FUN_0076bef0(param_1);
    iVar2 = FUN_00775280(*(undefined4 *)(iVar2 + 0x1c),uVar1,param_1,param_2);
    if (iVar2 != 0) {
      uVar1 = FUN_0076c6d0(iVar2);
      return uVar1;
    }
  }
  return 0;
}



void FUN_00764c70(undefined4 param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int aiStack_54 [3];
  int *piStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_20 [28];
  float fStack_4;
  
  if (param_2 == 0) {
    return;
  }
  if (*(char *)(in_ECX + 0x6f0) != '\0') {
    return;
  }
  uStack_3c = 0;
  uStack_40 = 0x764ca1;
  (**(code **)(**(int **)(in_ECX + 0x87c) + 0x4c))();
  uStack_40 = 0;
  puStack_44 = (undefined1 *)0x764cb2;
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x87c) + 0x50))();
  if (fStack_4 != 0.0) {
    fStack_4 = (float)iVar2;
    if (iVar2 < 0) {
      fStack_4 = fStack_4 + 4.2949673e+09;
    }
    puStack_44 = (undefined1 *)0x764cf9;
    FUN_009828c0();
    puStack_44 = (undefined1 *)0x764d15;
    FUN_009828c0();
    puStack_44 = (undefined1 *)0x764d25;
    FUN_009828c0();
    puStack_44 = (undefined1 *)0x764d35;
    FUN_009828c0();
  }
  uVar6 = param_2 & 1;
  puStack_44 = (undefined1 *)0x764d5c;
  puStack_44 = (undefined1 *)(**(code **)(**(int **)(in_ECX + 0x87c) + 0x84))();
  piStack_48 = (int *)&DAT_00b4263c;
  aiStack_54[2] = 0x764d67;
  iVar2 = FUN_00497dd0();
  if (iVar2 == 0) goto LAB_00764da6;
  if ((param_2 & 4) == 0) {
LAB_00764d87:
    uVar3 = 0;
  }
  else {
    puStack_44 = (undefined1 *)0x764d7c;
    cVar1 = FUN_0076d4f0();
    if (cVar1 == '\0') goto LAB_00764d87;
    uVar3 = 2;
  }
  if ((param_2 & 2) == 0) {
LAB_00764da2:
    uVar4 = 0;
  }
  else {
    puStack_44 = (undefined1 *)0x764d97;
    cVar1 = FUN_0076d510();
    if (cVar1 == '\0') goto LAB_00764da2;
    uVar4 = 4;
  }
  uVar6 = uVar6 | uVar3 | uVar4;
LAB_00764da6:
  piStack_48 = *(int **)(in_ECX + 0x280);
  puStack_44 = auStack_20;
  aiStack_54[2] = 0x764dbc;
  (**(code **)(*piStack_48 + 0xc0))();
  aiStack_54[2] = 0;
  aiStack_54[1] = 0x764dcb;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x87c) + 0x4c))();
  *(undefined4 *)(in_ECX + 0x6c8) = uVar5;
  aiStack_54[1] = 0;
  aiStack_54[0] = 0x764de0;
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x87c) + 0x50))();
  *(undefined4 *)(in_ECX + 0x6cc) = uVar5;
  aiStack_54[0] = in_ECX + 0x6c0;
  (**(code **)(**(int **)(in_ECX + 0x280) + 0xbc))(*(int **)(in_ECX + 0x280));
  (**(code **)(**(int **)(in_ECX + 0x280) + 0xac))
            (*(int **)(in_ECX + 0x280),1,&piStack_48,uVar6,*(undefined4 *)(in_ECX + 0x5d4),
             *(undefined4 *)(in_ECX + 0x5d8),*(undefined4 *)(in_ECX + 0x5dc));
  (**(code **)(**(int **)(in_ECX + 0x280) + 0xbc))(*(int **)(in_ECX + 0x280),aiStack_54);
  return;
}



undefined4 FUN_00764fe0(int param_1,int param_2,undefined4 *param_3,int param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int in_ECX;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (*(char *)(in_ECX + 0x6f0) != '\0') {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 0x10);
  piVar2 = *(int **)(param_2 + 0x10);
  if ((piVar1 == (int *)0x0) || (piVar2 == (int *)0x0)) {
    pcVar8 = "No RendererData found";
  }
  else {
    uVar4 = (**(code **)(*piVar2 + 0xc))();
    (**(code **)(*piVar1 + 0xc))(uVar4);
    cVar3 = FUN_0070e260(uVar4);
    if (cVar3 == '\0') {
      if ((piVar1[3] != 0) && (piVar2[3] != 0)) {
        if (param_3 != (undefined4 *)0x0) {
          uStack_20 = *param_3;
          iStack_18 = param_3[1];
          uStack_1c = param_3[2];
          iStack_14 = param_3[3];
        }
        iStack_8 = iStack_18 + param_4;
        iStack_10 = param_4;
        iStack_4 = iStack_14 + param_5;
        iStack_c = param_5;
        if (param_3 == (undefined4 *)0x0) {
          piVar7 = (int *)0x0;
          puVar6 = (undefined4 *)0x0;
        }
        else {
          piVar7 = &iStack_10;
          puVar6 = &uStack_20;
        }
        iVar5 = (**(code **)(**(int **)(in_ECX + 0x280) + 0x88))
                          (*(int **)(in_ECX + 0x280),piVar1[3],puVar6,piVar2[3],piVar7,0);
        if (iVar5 < 0) {
          uVar4 = FUN_007736f0(iVar5);
          FUN_0060d0a0("NiDX9Renderer::FastCopy> Failed StretchRect - %s",uVar4);
          return 0;
        }
        return 1;
      }
      pcVar8 = "NULL Surface found";
    }
    else {
      pcVar8 = "Pixel formats do not match";
    }
  }
  FUN_0060d0a0("NiDX9Renderer::FastCopy> Failed - %s",pcVar8);
  return 0;
}



undefined4 FUN_00765120(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (*(char *)(in_ECX + 0x6f0) != '\0') {
    return 0;
  }
  if ((*(int *)(param_1 + 0x10) == 0) || (*(int *)(param_2 + 0x10) == 0)) {
    FUN_0060d0a0("NiDX9Renderer::Copy> Failed - %s","No RendererData found");
    return 0;
  }
  iVar2 = *(int *)(*(int *)(param_1 + 0x10) + 0xc);
  iVar1 = *(int *)(*(int *)(param_2 + 0x10) + 0xc);
  if ((iVar2 == 0) || (iVar1 == 0)) {
    FUN_0060d0a0("NiDX9Renderer::Copy> Failed - %s","NULL Surface found");
    return 0;
  }
  if (param_3 == (undefined4 *)0x0) {
    local_8 = *(undefined4 *)(param_1 + 8);
    local_4 = *(undefined4 *)(param_1 + 0xc);
    local_10 = 0;
    local_c = 0;
  }
  else {
    local_10 = *param_3;
    local_8 = param_3[1];
    local_c = param_3[2];
    local_4 = param_3[3];
  }
  if (param_4 == (undefined4 *)0x0) {
    local_18 = *(undefined4 *)(param_2 + 8);
    local_14 = *(undefined4 *)(param_2 + 0xc);
    local_20 = 0;
    local_1c = 0;
  }
  else {
    local_20 = *param_4;
    local_18 = param_4[1];
    local_1c = param_4[2];
    local_14 = param_4[3];
  }
  if (param_5 == 1) {
    uVar3 = 1;
  }
  else if (param_5 == 2) {
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  iVar2 = (**(code **)(**(int **)(in_ECX + 0x280) + 0x88))
                    (*(int **)(in_ECX + 0x280),iVar2,&local_10,iVar1,&local_20,uVar3);
  if (iVar2 < 0) {
    uVar3 = FUN_007736f0(iVar2);
    FUN_0060d0a0("NiDX9Renderer::Copy> Failed StretchRect - %s",uVar3);
    return 0;
  }
  return 1;
}



void FUN_00765370(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if ((param_1 != 0) && ((*(ushort *)(param_1 + 0x2e) & 0xf000) == 0x4000)) {
    bVar1 = *(byte *)(param_1 + 0x30);
    if (bVar1 == 0) {
      FUN_00728890(*(undefined2 *)(param_1 + 8),0,0,0,0,0,*(ushort *)(param_1 + 0x2c) & 0xf000);
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      uVar3 = 0;
      bVar4 = 0;
      if ((bVar1 & 1) != 0) {
        uVar5 = *(undefined4 *)(param_1 + 0x1c);
      }
      if ((bVar1 & 2) != 0) {
        uVar6 = *(undefined4 *)(param_1 + 0x20);
      }
      if ((bVar1 & 4) != 0) {
        uVar7 = *(undefined4 *)(param_1 + 0x24);
      }
      if ((bVar1 & 8) != 0) {
        uVar3 = *(undefined4 *)(param_1 + 0x28);
        bVar4 = *(byte *)(param_1 + 0x2c) & 0x3f;
      }
      FUN_00728890(*(undefined2 *)(param_1 + 8),uVar5,uVar6,uVar7,uVar3,bVar4,
                   *(ushort *)(param_1 + 0x2c) & 0xf000);
    }
    if (param_3 == 0) {
      if ((bVar1 & 0x10) == 0) {
        cVar2 = FUN_00405650(&DAT_00b3fd2c,param_1);
        if (cVar2 != '\0') {
          FUN_0071fc80(*(undefined2 *)(param_1 + 0x40),0);
          return;
        }
        cVar2 = FUN_00405650(&DAT_00b3fd0c,param_1);
        if (cVar2 != '\0') {
          FUN_0071a040(*(undefined2 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),0);
        }
      }
    }
    else if ((bVar1 & 0x20) == 0) {
      FUN_0072efb0();
      return;
    }
  }
  return;
}



void FUN_00765480(int param_1,char param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 auStack_28 [40];
  
  FUN_00761ae0(in_ECX + 0x940,param_1,param_1 + 0x24,*(undefined4 *)(param_1 + 0x30));
  if (param_2 != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))(*(int **)(in_ECX + 0x280),0x100,in_ECX + 0x940)
    ;
  }
  (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x34))(param_1);
  FUN_00710190(auStack_28,*(undefined4 *)(param_1 + 0x30));
  puVar1 = (undefined4 *)FUN_00710250(&stack0xffffffcc,in_ECX + 0x628,auStack_28);
  *(undefined4 *)(in_ECX + 0x640) = *puVar1;
  *(undefined4 *)(in_ECX + 0x644) = puVar1[1];
  *(undefined4 *)(in_ECX + 0x648) = puVar1[2];
  puVar1 = (undefined4 *)FUN_00710250(&stack0xffffffcc,in_ECX + 0x634,auStack_28);
  *(undefined4 *)(in_ECX + 0x64c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x650) = puVar1[1];
  *(undefined4 *)(in_ECX + 0x654) = puVar1[2];
  return;
}



void FUN_00765560(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int unaff_retaddr;
  
  (**(code **)(**(int **)(in_ECX + 0x8ac) + 0x34))(param_3);
  FUN_00761ae0(in_ECX + 0x940,param_3,param_3 + 0x24,*(undefined4 *)(param_3 + 0x30));
  if (*(ushort *)(param_1 + 0x20) < 5) {
    iVar1 = *(int *)(unaff_retaddr + 0x20);
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(in_ECX + 0x280) + 0xb0))
                (*(int **)(in_ECX + 0x280),iVar2 + 0x100,
                 (uint)*(ushort *)(*(int *)(param_1 + 4) + iVar2 * 2) * 0x40 + iVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
  }
  return;
}



void FUN_007655f0(int param_1,undefined4 param_2,char param_3,int param_4,char param_5)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  int in_ECX;
  uint uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  int iVar12;
  int local_e8;
  undefined4 local_e0;
  float local_d0 [4];
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 local_9c [9];
  undefined1 local_78 [12];
  undefined4 local_6c;
  undefined4 local_68 [12];
  float local_38;
  undefined1 local_34 [52];
  
  iVar8 = *(int *)(param_1 + 0x18);
  iVar3 = FUN_00422de0();
  if (iVar8 != iVar3) {
    uVar4 = FUN_00422de0();
    local_e8 = *(int *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    iVar8 = *(int *)(param_1 + 8);
    uVar1 = *(uint *)(iVar8 + 0x40);
    if (param_4 == 3) {
      param_3 = '\x01';
    }
    if ((*(uint *)(param_1 + 0x1c) < uVar1) || (param_4 != *(int *)(param_1 + 0x24))) {
      FUN_00401f20(local_e8);
      if (param_4 == 4) {
        local_e8 = FUN_00401f00(-(uint)((int)((ulonglong)uVar1 * 0x40 >> 0x20) != 0) |
                                (uint)((ulonglong)uVar1 * 0x40));
        if (uVar1 != 0) {
          puVar5 = (undefined4 *)(local_e8 + 0x34);
          uVar7 = uVar1;
          do {
            if (param_3 == '\0') {
              puVar5[-2] = 0;
              puVar5[-6] = 0;
              puVar5[-10] = 0;
            }
            else {
              puVar5[1] = 0;
              *puVar5 = 0;
              puVar5[-1] = 0;
            }
            uVar7 = uVar7 - 1;
            puVar5[2] = 0x3f800000;
            puVar5 = puVar5 + 0x10;
          } while (uVar7 != 0);
        }
      }
      else {
        lVar2 = (ulonglong)(uVar1 * 0xc) * 4;
        local_e8 = FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
      }
      *(uint *)(param_1 + 0x1c) = uVar1;
      *(int *)(param_1 + 0x24) = param_4;
      *(int *)(param_1 + 0x20) = local_e8;
    }
    FUN_00718a80(local_d0);
    puVar5 = (undefined4 *)FUN_0053d7a0(local_34,local_d0);
    puVar10 = local_68;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    puVar5 = (undefined4 *)FUN_0053d7a0(local_34,local_68);
    puVar10 = local_9c;
    for (iVar3 = 0xd; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    local_e0 = 0;
    if ((local_38 < 0.99) && (1.01 < local_38)) {
      local_e0 = 1;
    }
    if (param_5 != '\0') {
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        iVar3 = FUN_00401f00(0x40);
        *(int *)(param_1 + 0x28) = iVar3;
        *(undefined4 *)(iVar3 + 0xc) = 0;
        *(undefined4 *)(iVar3 + 0x1c) = 0;
        *(undefined4 *)(iVar3 + 0x2c) = 0;
        *(undefined4 *)(iVar3 + 0x3c) = 0x3f800000;
      }
      FUN_00761be0(iVar3,local_9c,local_78,local_6c);
    }
    iVar3 = *(int *)(param_1 + 0x14);
    uVar7 = 0;
    if (uVar1 != 0) {
      pfVar9 = (float *)(local_e8 + 0x20);
      iVar12 = local_e8;
      local_e8 = *(int *)(iVar8 + 0x44);
      do {
        FUN_0053d7a0(local_d0,local_e8);
        iVar8 = *(int *)(iVar3 + uVar7 * 4);
        if ((*(float *)(iVar8 + 0x94) < 0.99) && (1.01 < *(float *)(iVar8 + 0x94))) {
          local_e0 = 1;
        }
        if (param_5 == '\0') {
          pfVar6 = (float *)FUN_0053d7a0(local_34,local_d0);
          pfVar11 = local_d0;
          for (iVar8 = 0xd; iVar8 != 0; iVar8 = iVar8 + -1) {
            *pfVar11 = *pfVar6;
            pfVar6 = pfVar6 + 1;
            pfVar11 = pfVar11 + 1;
          }
        }
        if (param_4 == 4) {
          if (param_3 == '\0') {
            FUN_00761ae0(iVar12,local_d0,&local_ac,local_a0);
          }
          else {
            FUN_00761b60(iVar12,local_d0,&local_ac);
          }
        }
        else {
          pfVar9[-8] = local_a0 * local_d0[0];
          pfVar9[-4] = local_d0[3] * local_a0;
          *pfVar9 = local_b8 * local_a0;
          pfVar9[-7] = local_d0[1] * local_a0;
          pfVar9[-3] = local_c0 * local_a0;
          pfVar9[1] = local_b4 * local_a0;
          pfVar9[-6] = local_d0[2] * local_a0;
          pfVar9[-2] = local_bc * local_a0;
          pfVar9[2] = local_a0 * local_b0;
          pfVar9[-5] = local_ac - DAT_00b3f92c;
          pfVar9[-1] = local_a8 - DAT_00b3f930;
          pfVar9[3] = local_a4 - DAT_00b3f934;
        }
        local_e8 = local_e8 + 0x4c;
        uVar7 = uVar7 + 1;
        iVar12 = iVar12 + 0x40;
        pfVar9 = pfVar9 + 0xc;
      } while (uVar7 < uVar1);
    }
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0xfc))(local_e0);
  }
  return;
}



void FUN_00766880(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int **ppiStack_fc;
  uint *puStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  uint uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 **ppuStack_e0;
  uint *puStack_dc;
  int *piStack_d8;
  undefined4 uStack_d4;
  int *piStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  uint *puStack_a8;
  int *piStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  int iStack_94;
  int *piStack_90;
  undefined4 *puStack_8c;
  undefined4 *puStack_88;
  int local_74;
  undefined4 *local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  float local_54;
  uint local_50;
  float local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34 [13];
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    uVar6 = *(uint *)(param_1 + 0xb4);
    local_58 = (uint)*(ushort *)(uVar6 + 8);
    if (*(ushort *)(uVar6 + 8) != 0) {
      local_40 = *(undefined4 *)(param_1 + 0x24);
      puStack_88 = (undefined4 *)0x0;
      puStack_8c = (undefined4 *)0x0;
      puVar9 = (undefined4 *)(param_1 + 100);
      puVar3 = local_34;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar3 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar3 = puVar3 + 1;
      }
      local_44 = *(undefined4 *)(param_1 + 0x20);
      piStack_90 = (int *)0x0;
      local_3c = *(undefined4 *)(param_1 + 0x28);
      iStack_94 = 0;
      local_38 = *(undefined4 *)(param_1 + 0x2c);
      uStack_9c = *(undefined4 *)(in_ECX + 0x8a8);
      uStack_a0 = 0x7668fa;
      uStack_98 = uVar6;
      local_5c = uVar6;
      FUN_00778db0();
      *(undefined4 *)(in_ECX + 0x658) = local_44;
      *(undefined4 *)(in_ECX + 0x65c) = local_40;
      puStack_88 = (undefined4 *)0x1;
      *(undefined4 *)(in_ECX + 0x660) = local_3c;
      *(undefined4 *)(in_ECX + 0x664) = local_38;
      iStack_94 = *(undefined4 *)(uVar6 + 0x40);
      uStack_98 = local_58 & 0xffff;
      puVar9 = *(undefined4 **)(uVar6 + 0x1c);
      puVar3 = *(undefined4 **)(uVar6 + 0x28);
      pfVar7 = *(float **)(uVar6 + 0x24);
      puStack_8c = (undefined4 *)0x0;
      piStack_90 = &local_74;
      local_74 = 0;
      uStack_9c = 0x766955;
      local_6c = uStack_98;
      local_48 = FUN_00778500();
      if ((local_48 != 0) && (local_74 != 0)) {
        local_70 = (undefined4 *)0x2;
        local_68 = 0xc;
        if (puVar3 != (undefined4 *)0x0) {
          local_70 = (undefined4 *)0x102;
          local_68 = 0x14;
        }
        if (pfVar7 != (float *)0x0) {
          local_70 = (undefined4 *)((uint)local_70 | 0x40);
          local_68 = local_68 + 4;
        }
        local_64 = *(uint *)(local_5c + 0x38);
        puStack_88 = (undefined4 *)0x1;
        puStack_8c = (undefined4 *)0x7669b0;
        FUN_00777f70();
        puStack_88 = local_70;
        *(uint *)(local_64 + 0x14) = local_6c;
        *(uint *)(local_64 + 0x18) = local_6c;
        puStack_8c = (undefined4 *)0x7669c8;
        FUN_007780a0();
        if (*(int *)(local_64 + 0x1c) != 0) {
          **(uint **)(local_64 + 0x20) = local_68;
        }
        puStack_88 = (undefined4 *)0x0;
        puStack_8c = (undefined4 *)local_64;
        piStack_90 = (int *)0x7669e9;
        FUN_00776c40();
        if (*(int *)(local_64 + 0x1c) == 0) {
          local_60 = 0;
        }
        else {
          local_60 = **(int **)(local_64 + 0x24);
        }
        iStack_94 = *(int *)(local_60 + 8);
        if (iStack_94 != 0) {
          puStack_88 = *(undefined4 **)(local_60 + 0x10);
          puStack_8c = *(undefined4 **)(local_60 + 0x14);
          piStack_90 = *(int **)(local_60 + 0xc);
          uStack_98 = 0x766a2d;
          puVar1 = (undefined4 *)FUN_00776c90();
          iVar5 = local_60;
          if (puVar3 == (undefined4 *)0x0) {
            if (pfVar7 == (float *)0x0) {
              if (puVar1 == (undefined4 *)0x0) {
                return;
              }
              uVar6 = 0;
              if (3 < (int)local_6c) {
                iVar4 = (local_6c - 4 >> 2) + 1;
                uVar6 = iVar4 * 4;
                puVar3 = puVar1;
                puVar2 = puVar9;
                do {
                  puVar9 = puVar2 + 0xc;
                  *puVar3 = *puVar2;
                  puVar1 = puVar3 + 0xc;
                  iVar4 = iVar4 + -1;
                  puVar3[1] = puVar2[1];
                  puVar3[2] = puVar2[2];
                  puVar3[3] = puVar2[3];
                  puVar3[4] = puVar2[4];
                  puVar3[5] = puVar2[5];
                  puVar3[6] = puVar2[6];
                  puVar3[7] = puVar2[7];
                  puVar3[8] = puVar2[8];
                  puVar3[9] = puVar2[9];
                  puVar3[10] = puVar2[10];
                  puVar3[0xb] = puVar2[0xb];
                  puVar3 = puVar1;
                  puVar2 = puVar9;
                } while (iVar4 != 0);
              }
              if (uVar6 < local_6c) {
                iVar4 = local_6c - uVar6;
                do {
                  *puVar1 = *puVar9;
                  iVar4 = iVar4 + -1;
                  puVar1[1] = puVar9[1];
                  puVar1[2] = puVar9[2];
                  puVar1 = puVar1 + 3;
                  puVar9 = puVar9 + 3;
                } while (iVar4 != 0);
              }
            }
            else {
              if (puVar1 == (undefined4 *)0x0) {
                return;
              }
              if (local_6c != 0) {
                local_5c = local_6c;
                do {
                  *puVar1 = *puVar9;
                  puVar1[1] = puVar9[1];
                  puVar1[2] = puVar9[2];
                  local_70 = (undefined4 *)(int)ROUND(pfVar7[3] * 255.0);
                  local_6c = (uint)ROUND(*pfVar7 * 255.0);
                  local_68 = (uint)ROUND(pfVar7[1] * 255.0);
                  local_4c = pfVar7[2] * 255.0;
                  local_58 = (uint)ROUND(local_4c);
                  puVar1[3] = (((int)local_70 << 8 | local_6c) << 8 | local_68) << 8 | local_58;
                  puVar9 = puVar9 + 3;
                  pfVar7 = pfVar7 + 4;
                  local_5c = local_5c - 1;
                  puVar1 = puVar1 + 4;
                } while (local_5c != 0);
                local_5c = 0;
              }
            }
          }
          else if (pfVar7 == (float *)0x0) {
            if (puVar1 == (undefined4 *)0x0) {
              return;
            }
            uVar6 = 0;
            if (3 < (int)local_6c) {
              iVar4 = (local_6c - 4 >> 2) + 1;
              uVar6 = iVar4 * 4;
              puVar2 = puVar1;
              puVar8 = puVar9;
              puVar10 = puVar3;
              do {
                puVar9 = puVar8 + 0xc;
                *puVar2 = *puVar8;
                puVar3 = puVar10 + 8;
                puVar1 = puVar2 + 0x14;
                iVar4 = iVar4 + -1;
                puVar2[1] = puVar8[1];
                puVar2[2] = puVar8[2];
                puVar2[3] = *puVar10;
                puVar2[4] = puVar10[1];
                puVar2[5] = puVar8[3];
                puVar2[6] = puVar8[4];
                puVar2[7] = puVar8[5];
                puVar2[8] = puVar10[2];
                puVar2[9] = puVar10[3];
                puVar2[10] = puVar8[6];
                puVar2[0xb] = puVar8[7];
                puVar2[0xc] = puVar8[8];
                puVar2[0xd] = puVar10[4];
                puVar2[0xe] = puVar10[5];
                puVar2[0xf] = puVar8[9];
                puVar2[0x10] = puVar8[10];
                puVar2[0x11] = puVar8[0xb];
                puVar2[0x12] = puVar10[6];
                puVar2[0x13] = puVar10[7];
                puVar2 = puVar1;
                puVar8 = puVar9;
                puVar10 = puVar3;
              } while (iVar4 != 0);
            }
            if (uVar6 < local_6c) {
              iVar4 = local_6c - uVar6;
              do {
                *puVar1 = *puVar9;
                iVar4 = iVar4 + -1;
                puVar1[1] = puVar9[1];
                puVar1[2] = puVar9[2];
                puVar1[3] = *puVar3;
                puVar1[4] = puVar3[1];
                puVar1 = puVar1 + 5;
                puVar9 = puVar9 + 3;
                puVar3 = puVar3 + 2;
              } while (iVar4 != 0);
            }
          }
          else {
            if (puVar1 == (undefined4 *)0x0) {
              return;
            }
            if (local_6c != 0) {
              local_58 = local_6c;
              do {
                *puVar1 = *puVar9;
                puVar1[1] = puVar9[1];
                puVar1[2] = puVar9[2];
                local_70 = (undefined4 *)(int)ROUND(pfVar7[3] * 255.0);
                local_6c = (uint)ROUND(*pfVar7 * 255.0);
                local_68 = (uint)ROUND(pfVar7[1] * 255.0);
                local_54 = pfVar7[2] * 255.0;
                local_5c = (uint)ROUND(local_54);
                puVar9 = puVar9 + 3;
                puVar1[3] = (((int)local_70 << 8 | local_6c) << 8 | local_68) << 8 | local_5c;
                puVar1[4] = *puVar3;
                pfVar7 = pfVar7 + 4;
                puVar2 = puVar3 + 1;
                puVar3 = puVar3 + 2;
                local_58 = local_58 - 1;
                puVar1[5] = *puVar2;
                puVar1 = puVar1 + 6;
              } while (local_58 != 0);
              local_58 = 0;
              local_50 = local_6c;
            }
          }
          puStack_88 = *(undefined4 **)(local_60 + 8);
          puStack_8c = (undefined4 *)0x766d5e;
          FUN_00776d80();
          uVar6 = local_64;
          puStack_88 = &local_44;
          puStack_8c = local_34;
          piStack_90 = *(int **)(in_ECX + 0x10);
          iStack_94 = *(undefined4 *)(in_ECX + 0xc);
          uStack_98 = local_64;
          uStack_9c = 0;
          uStack_a0 = 0;
          piStack_a4 = (int *)0x766d86;
          iVar4 = (**(code **)(**(int **)(in_ECX + 0xa94) + 0x28))();
          if (iVar4 == 0) {
            piStack_a4 = &local_60;
            puStack_a8 = &local_50;
            uStack_ac = *(undefined4 *)(in_ECX + 0x10);
            uStack_b0 = *(undefined4 *)(in_ECX + 0xc);
            uStack_b4 = uVar6;
            uStack_b8 = 0;
            uStack_bc = 0;
            uStack_c0 = 0x766db2;
            (**(code **)(**(int **)(in_ECX + 0xa94) + 0x2c))();
            uStack_c0 = 0x766dbf;
            iVar4 = (**(code **)(**(int **)(in_ECX + 0xa94) + 0x48))();
            if (*(int *)(uVar6 + 0x1c) == 0) {
              uStack_c0 = 0;
            }
            else {
              uStack_c0 = **(undefined4 **)(uVar6 + 0x20);
            }
            piStack_d0 = *(int **)(in_ECX + 0x280);
            uStack_c8 = *(undefined4 *)(iVar5 + 8);
            uStack_c4 = 0;
            uStack_cc = 0;
            uStack_d4 = 0x766dea;
            (**(code **)(*piStack_d0 + 400))();
            piStack_d8 = *(int **)(in_ECX + 0x280);
            uStack_d4 = iStack_94;
            puStack_dc = (uint *)0x766e00;
            (**(code **)(*piStack_d8 + 0x1a0))();
            while (iVar4 != 0) {
              puStack_dc = &uStack_98;
              ppuStack_e0 = &puStack_88;
              uStack_e4 = *(undefined4 *)(in_ECX + 0x10);
              uStack_e8 = *(undefined4 *)(in_ECX + 0xc);
              uStack_ec = uVar6;
              uStack_f0 = 0;
              uStack_f4 = 0;
              puStack_f8 = (uint *)0x766e34;
              (**(code **)(**(int **)(in_ECX + 0xa94) + 0x30))();
              puStack_f8 = &uStack_b4;
              ppiStack_fc = &piStack_a4;
              uStack_100 = *(undefined4 *)(in_ECX + 0x10);
              uStack_104 = *(undefined4 *)(in_ECX + 0xc);
              uStack_108 = uVar6;
              uStack_10c = 0;
              uStack_110 = 0;
              (**(code **)(**(int **)(in_ECX + 0xa94) + 0x34))(0);
              uVar11 = *(uint *)(in_ECX + 0xc);
              (**(code **)(**(int **)(in_ECX + 0xa94) + 0x38))
                        (0,0,0,uVar6,uVar11,*(undefined4 *)(in_ECX + 0x10),&uStack_c4,&uStack_d4);
              (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
              (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                        (*(int **)(in_ECX + 0x280),2,*(undefined4 *)(uVar6 + 0x34),0,
                         *(undefined4 *)(uVar6 + 0x14),0,uVar11 >> 1);
              (**(code **)(**(int **)(in_ECX + 0xa94) + 0x40))
                        (0,0,0,uVar6,*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
                         &uStack_100,&uStack_110);
              iVar4 = (**(code **)(**(int **)(in_ECX + 0xa94) + 0x4c))();
            }
            puStack_dc = &uStack_98;
            ppuStack_e0 = &puStack_88;
            uStack_e4 = *(undefined4 *)(in_ECX + 0x10);
            uStack_e8 = *(undefined4 *)(in_ECX + 0xc);
            uStack_ec = uVar6;
            uStack_f0 = 0;
            uStack_f4 = 0;
            puStack_f8 = (uint *)0x766f18;
            (**(code **)(**(int **)(in_ECX + 0xa94) + 0x44))();
          }
        }
      }
    }
  }
  return;
}



void FUN_00766f30(void)

{
  ushort *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  LONG LVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  
  piVar8 = *(int **)(in_ECX + 0x614);
  if ((piVar8 != (int *)0x0) && (*(char *)(in_ECX + 0x6f0) == '\0')) {
    iVar7 = piVar8[2];
    iVar2 = *piVar8;
    iVar9 = *(int *)(iVar2 + 0xb8);
    iVar4 = (**(code **)(**(int **)(in_ECX + 0x624) + 0x28))
                      (iVar2,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),
                       *(undefined4 *)(in_ECX + 0x620),iVar2 + 100,iVar2 + 0x20);
    if (iVar4 != 0) {
      puVar3 = *(undefined4 **)(in_ECX + 0x624);
      if (puVar3 != (undefined4 *)0x0) {
        LVar5 = InterlockedDecrement(puVar3 + 1);
        if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        *(undefined4 *)(in_ECX + 0x624) = 0;
      }
      *(undefined4 *)(in_ECX + 0x61c) = 0;
      *(undefined4 *)(in_ECX + 0x620) = 0;
      FUN_00762fd0();
      return;
    }
    iVar4 = iVar2 + 100;
    iVar15 = iVar2;
    iVar16 = iVar9;
    (**(code **)(**(int **)(in_ECX + 0x624) + 0x2c))
              (iVar2,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),*(undefined4 *)(in_ECX + 0x620),
               iVar4,iVar2 + 0x20);
    iVar6 = (**(code **)(**(int **)(in_ECX + 0x624) + 0x48))();
    while (iVar6 != 0) {
      piVar8 = *(int **)(in_ECX + 0x614);
      iVar7 = *piVar8;
      piVar14 = *(int **)(in_ECX + 0x620);
      (**(code **)(**(int **)(in_ECX + 0x624) + 0x30))
                (iVar7,*(undefined4 *)(iVar7 + 0xb8),piVar8[2],*(undefined4 *)(in_ECX + 0x61c),
                 piVar14,iVar7 + 100,iVar7 + 0x20);
      do {
        iVar2 = *piVar8;
        uVar13 = *(undefined4 *)(iVar2 + 0xb8);
        iVar7 = piVar8[2];
        iVar9 = piVar8[1];
        if (((*(int **)(in_ECX + 0x624) == *(int **)(in_ECX + 0xa94)) && (iVar9 != 0)) &&
           (*(uint *)(in_ECX + 0x6d8) < (uint)*(ushort *)(iVar9 + 0x20))) {
          FUN_0060d0a0("EndBatch> Cannot render partition with %d bones without a shader!\n",
                       (uint)*(ushort *)(iVar9 + 0x20));
          piVar8 = piVar14;
          iVar16 = iVar9;
        }
        else {
          iVar16 = iVar9;
          (**(code **)(**(int **)(in_ECX + 0x624) + 0x34))
                    (iVar2,uVar13,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),
                     *(undefined4 *)(in_ECX + 0x620),iVar2 + 100,iVar2 + 0x20);
          iVar6 = iVar2;
          iVar7 = (**(code **)(**(int **)(in_ECX + 0x624) + 0x3c))
                            (iVar2,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c));
          uVar10 = *(undefined4 *)(in_ECX + 0x620);
          (**(code **)(**(int **)(in_ECX + 0x624) + 0x38))
                    (iVar2,uVar13,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),uVar10,iVar2 + 100,
                     iVar2 + 0x20);
          (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
          if (*(int *)(iVar7 + 0x30) == 0) {
            (**(code **)(**(int **)(in_ECX + 0x280) + 0x144))
                      (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar7 + 0x38),
                       *(undefined4 *)(iVar7 + 0x34),*(undefined4 *)(iVar7 + 0x3c));
          }
          else {
            iVar11 = 0;
            uVar12 = 0;
            if (*(int *)(iVar7 + 0x44) != 0) {
              do {
                iVar9 = iVar6;
                if (*(int *)(iVar7 + 0x48) == 0) {
                  iVar6 = *(int *)(iVar7 + 0x3c);
                }
                else {
                  iVar6 = *(ushort *)(*(int *)(iVar7 + 0x48) + uVar12 * 2) - 2;
                }
                (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                          (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar7 + 0x38),
                           *(undefined4 *)(iVar7 + 0x34),0,*(undefined4 *)(iVar7 + 0x14),iVar11,
                           iVar6);
                iVar11 = iVar11 + 2 + iVar6;
                uVar12 = uVar12 + 1;
                iVar6 = iVar9;
              } while (uVar12 < *(uint *)(iVar7 + 0x44));
            }
          }
          (**(code **)(**(int **)(in_ECX + 0x624) + 0x40))
                    (iVar2,uVar10,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),
                     *(undefined4 *)(in_ECX + 0x620),iVar2 + 100,iVar2 + 0x20);
          piVar8 = (int *)piVar14[3];
        }
        piVar14 = piVar8;
      } while (piVar8 != (int *)0x0);
      iVar6 = (**(code **)(**(int **)(in_ECX + 0x624) + 0x4c))();
      iVar9 = iVar4;
    }
    for (piVar8 = *(int **)(in_ECX + 0x614); piVar8 != (int *)0x0; piVar8 = (int *)piVar8[3]) {
      puVar1 = (ushort *)(*(int *)(*piVar8 + 0xb4) + 0x2e);
      *puVar1 = *puVar1 & 0xf000;
    }
    (**(code **)(**(int **)(in_ECX + 0x624) + 0x44))
              (iVar2,iVar9,iVar7,*(undefined4 *)(in_ECX + 0x61c),*(undefined4 *)(in_ECX + 0x620),
               iVar2 + 100,iVar2 + 0x20,iVar15,iVar16);
    puVar3 = *(undefined4 **)(in_ECX + 0x624);
    if (puVar3 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar3 + 1);
      if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
      *(undefined4 *)(in_ECX + 0x624) = 0;
    }
    *(undefined4 *)(in_ECX + 0x61c) = 0;
    *(undefined4 *)(in_ECX + 0x620) = 0;
    FUN_00762fd0();
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0xfc))(0);
    return;
  }
  puVar3 = *(undefined4 **)(in_ECX + 0x624);
  if (puVar3 != (undefined4 *)0x0) {
    LVar5 = InterlockedDecrement(puVar3 + 1);
    if ((LVar5 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    *(undefined4 *)(in_ECX + 0x624) = 0;
  }
  *(undefined4 *)(in_ECX + 0x61c) = 0;
  *(undefined4 *)(in_ECX + 0x620) = 0;
  FUN_00762fd0();
  return;
}



void FUN_007672f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  
  if ((param_1 == 0) ||
     (piVar1 = (int *)FUN_00560920(&DAT_00b42858,*(undefined4 *)(param_1 + 0xbc)),
     piVar1 == (int *)0x0)) {
    piVar1 = *(int **)(in_ECX + 0xa94);
  }
  uVar12 = *(undefined4 *)(in_ECX + 0xc);
  iVar11 = param_6;
  iVar2 = (**(code **)(*piVar1 + 0x28))
                    (param_1,param_3,param_6,uVar12,*(undefined4 *)(in_ECX + 0x10),param_4,param_5);
  if (iVar2 == 0) {
    uVar10 = *(undefined4 *)(in_ECX + 0xc);
    iVar2 = param_6;
    (**(code **)(*piVar1 + 0x2c))
              (param_1,unaff_ESI,param_6,uVar10,*(undefined4 *)(in_ECX + 0x10),unaff_EBP,unaff_EBX);
    iVar3 = (**(code **)(*piVar1 + 0x48))();
    while (iVar3 != 0) {
      (**(code **)(*piVar1 + 0x30))
                (param_1,param_3,param_6,*(undefined4 *)(in_ECX + 0xc),
                 *(undefined4 *)(in_ECX + 0x10),iVar11,uVar12);
      iVar3 = *(int *)(in_ECX + 0x10);
      uVar8 = *(undefined4 *)(in_ECX + 0xc);
      iVar9 = iVar2;
      (**(code **)(*piVar1 + 0x34))(param_1,unaff_ESI,0,param_6,uVar8,iVar3,iVar2,uVar10);
      uVar7 = 0;
      iVar6 = param_1;
      iVar4 = (**(code **)(*piVar1 + 0x3c))(param_1,0,param_6,*(undefined4 *)(in_ECX + 0xc));
      (**(code **)(*piVar1 + 0x38))
                (param_1,uVar8,0,iVar4,*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
                 iVar3,iVar2);
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
      if (*(int *)(iVar4 + 0x30) == 0) {
        (**(code **)(**(int **)(in_ECX + 0x280) + 0x144))
                  (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar4 + 0x38),
                   *(undefined4 *)(iVar4 + 0x34),*(undefined4 *)(iVar4 + 0x3c));
      }
      else {
        iVar2 = 0;
        uVar5 = 0;
        if (*(int *)(iVar4 + 0x44) != 0) {
          do {
            param_1 = iVar3;
            if (*(int *)(iVar4 + 0x48) == 0) {
              iVar3 = *(int *)(iVar4 + 0x3c);
            }
            else {
              iVar3 = *(ushort *)(*(int *)(iVar4 + 0x48) + uVar5 * 2) - 2;
            }
            (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                      (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar4 + 0x38),
                       *(undefined4 *)(iVar4 + 0x34),0,*(undefined4 *)(iVar4 + 0x14),iVar2,iVar3);
            iVar2 = iVar2 + 2 + iVar3;
            uVar5 = uVar5 + 1;
            iVar3 = param_1;
          } while (uVar5 < *(uint *)(iVar4 + 0x44));
        }
      }
      (**(code **)(*piVar1 + 0x40))
                (param_1,iVar6,0,iVar4,*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
                 uVar7,param_6);
      iVar3 = (**(code **)(*piVar1 + 0x4c))();
      iVar2 = iVar9;
      param_6 = iVar4;
    }
    (**(code **)(*piVar1 + 0x44))
              (param_1,param_3,param_6,*(undefined4 *)(in_ECX + 0xc),*(undefined4 *)(in_ECX + 0x10),
               iVar11,uVar12);
    (**(code **)(**(int **)(in_ECX + 0x8ac) + 0xfc))(0);
  }
  return;
}



void FUN_00767520(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 unaff_EBP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 unaff_EDI;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  int iVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uStack_18;
  uint uStack_10;
  
  if (param_3 != 0) {
    iVar9 = *(int *)(param_3 + 0xc);
    iVar2 = *(int *)(iVar9 + 0xc);
    if ((param_1 == 0) ||
       (piVar1 = (int *)FUN_00560920(&DAT_00b42858,*(undefined4 *)(param_1 + 0xbc)),
       piVar1 == (int *)0x0)) {
      piVar1 = *(int **)(in_ECX + 0xa94);
    }
    puVar3 = *(undefined4 **)(iVar2 + 0x28);
    puVar10 = puVar3;
    iVar2 = (**(code **)(*piVar1 + 0x28))
                      (param_1,param_3,puVar3,*(undefined4 *)(in_ECX + 0xc),
                       *(undefined4 *)(in_ECX + 0x10),param_4,param_5);
    if (iVar2 == 0) {
      puVar5 = puVar3;
      (**(code **)(*piVar1 + 0x2c))
                (uStack_18,uStack_10,puVar3,*(undefined4 *)(in_ECX + 0xc),
                 *(undefined4 *)(in_ECX + 0x10),iVar9);
      uVar19 = *(undefined4 *)(param_3 + 8);
      iVar2 = (**(code **)(*piVar1 + 0x48))();
      puVar6 = param_5;
      while (iVar2 != 0) {
        uVar15 = *(undefined4 *)(in_ECX + 0x10);
        uVar14 = *(undefined4 *)(in_ECX + 0xc);
        puVar13 = puVar3;
        uVar20 = param_4;
        (**(code **)(*piVar1 + 0x30))(param_4,unaff_EBP,puVar3,uVar14,uVar15,unaff_EDI,puVar6);
        *(undefined4 *)(in_ECX + 0x658) = *puVar6;
        *(undefined4 *)(in_ECX + 0x65c) = puVar6[1];
        *(undefined4 *)(in_ECX + 0x660) = puVar6[2];
        *(undefined4 *)(in_ECX + 0x664) = puVar6[3];
        uVar16 = 0;
        puVar17 = puVar5;
        iVar18 = iVar9;
        if (uStack_10 != 0) {
          do {
            puVar6 = puVar10;
            if ((piVar1 == *(int **)(in_ECX + 0xa94)) &&
               (*(uint *)(in_ECX + 0x6d8) < (uint)*(ushort *)(puVar5 + 8))) {
              FUN_0060d0a0("DrawSkinnedPrimitive> Cannot render partition with %d bones without a shader!\n"
                           ,(uint)*(ushort *)(puVar5 + 8));
              iVar18 = iVar9;
            }
            else {
              uVar8 = puVar5[10];
              uVar12 = *(undefined4 *)(in_ECX + 0xc);
              puVar10 = puVar5;
              uVar11 = uVar8;
              iVar18 = iVar9;
              (**(code **)(*piVar1 + 0x34))
                        (iVar9,param_1,puVar5,uVar8,uVar12,*(undefined4 *)(in_ECX + 0x10),uVar19,
                         puVar6);
              puVar3 = (undefined4 *)
                       (**(code **)(*piVar1 + 0x3c))
                                 (uVar15,puVar5,uVar8,*(undefined4 *)(in_ECX + 0xc));
              if (puVar3 == (undefined4 *)0x0) {
                return;
              }
              (**(code **)(*piVar1 + 0x38))
                        (param_4,puVar13,puVar5,puVar3,*(undefined4 *)(in_ECX + 0xc),
                         *(undefined4 *)(in_ECX + 0x10),uVar14,uVar15);
              (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
              iVar2 = 0;
              uVar7 = 0;
              if (puVar3[0x11] != 0) {
                do {
                  if (puVar3[0x12] == 0) {
                    iVar4 = puVar3[0xf];
                  }
                  else {
                    iVar4 = *(ushort *)(puVar3[0x12] + uVar7 * 2) - 2;
                  }
                  (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                            (*(int **)(in_ECX + 0x280),uVar8,puVar3[0xd],0,
                             *(undefined2 *)(puVar5 + 7),iVar2,iVar4);
                  iVar2 = iVar2 + 2 + iVar4;
                  uVar7 = uVar7 + 1;
                } while (uVar7 < (uint)puVar3[0x11]);
              }
              (**(code **)(*piVar1 + 0x40))
                        (iVar9,puVar10,puVar5,puVar3,*(undefined4 *)(in_ECX + 0xc),
                         *(undefined4 *)(in_ECX + 0x10),uVar11,uVar12);
            }
            uVar16 = uVar16 + 1;
            puVar5 = puVar5 + 0xb;
            iVar9 = iVar18;
            puVar10 = puVar6;
          } while (uVar16 < uStack_10);
        }
        *(ushort *)((int)param_5 + 0x2e) = *(ushort *)((int)param_5 + 0x2e) & 0xf000;
        iVar2 = (**(code **)(*piVar1 + 0x4c))();
        puVar5 = puVar17;
        iVar9 = iVar18;
        param_4 = uVar20;
      }
      (**(code **)(*piVar1 + 0x44))
                (param_4,unaff_EBP,puVar3,*(undefined4 *)(in_ECX + 0xc),
                 *(undefined4 *)(in_ECX + 0x10),unaff_EDI,puVar6);
      (**(code **)(**(int **)(in_ECX + 0x8ac) + 0xfc))(0);
    }
  }
  return;
}



void FUN_00767810(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  
  if (param_1 != (int *)0x0) {
    for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
        puVar2 = (undefined4 *)puVar2[1]) {
      if (puVar2 == &DAT_00b3fd14) {
        bVar1 = 1;
        goto LAB_00767840;
      }
    }
    bVar1 = 0;
LAB_00767840:
    if ((-(uint)bVar1 & (uint)param_1) != 0) {
      FUN_00776a30(-(uint)bVar1 & (uint)param_1);
    }
  }
  return;
}



void FUN_00767860(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *local_c;
  int local_8;
  uint local_4;
  
  if ((param_1 != 0) && (iVar6 = *(int *)(param_1 + 0x38), iVar6 != 0)) {
    local_8 = iVar6;
    if ((*(int *)(iVar6 + 0x1c) != 0) && (**(int **)(iVar6 + 0x24) != 0)) {
      FUN_00763fe0();
      local_4 = 0;
      if (*(int *)(iVar6 + 0x1c) != 0) {
        if (*(int *)(iVar6 + 0x1c) == 0) {
          iVar5 = 0;
          goto LAB_007678c2;
        }
        do {
          iVar5 = *(int *)(*(int *)(iVar6 + 0x24) + local_4 * 4);
LAB_007678c2:
          uVar8 = local_4;
          uVar1 = *(undefined4 *)(iVar5 + 4);
          local_c = (int *)0x0;
          cVar4 = FUN_0055e000(uVar1,&local_c);
          if (cVar4 != '\0') {
            piVar2 = (int *)0x0;
            piVar3 = local_c;
            iVar6 = local_8;
            while (local_8 = iVar6, piVar3 != (int *)0x0) {
              if (*piVar3 == param_1) {
                piVar7 = (int *)0x0;
                if (piVar2 == (int *)0x0) {
                  if (piVar3[8] == 0) {
                    FUN_004524c0(uVar1);
                  }
                  else {
                    FUN_00452570(uVar1,piVar3[8]);
                    piVar7 = (int *)piVar3[8];
                  }
                }
                else {
                  piVar2[8] = piVar3[8];
                  piVar7 = (int *)piVar3[8];
                }
                piVar3[8] = 0;
                FUN_00401f20(piVar3);
                piVar3 = piVar7;
                iVar6 = local_8;
                uVar8 = local_4;
              }
              else {
                piVar2 = piVar3;
                piVar3 = (int *)piVar3[8];
              }
            }
          }
          local_4 = uVar8 + 1;
        } while (local_4 < *(uint *)(iVar6 + 0x1c));
      }
      FUN_00764040();
    }
    (**(code **)(**(int **)(in_ECX + 0x8a0) + 0x1c))(param_1,0);
  }
  return;
}



void FUN_00767990(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  uint uVar8;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  if (((param_1 != 0) && (iVar6 = *(int *)(param_1 + 0xc), iVar6 != 0)) &&
     (*(int *)(iVar6 + 0x28) != 0)) {
    iVar7 = *(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) != 0) {
      do {
        local_4 = iVar7;
        iVar7 = *(int *)(iVar6 + 0x28);
        local_c = iVar7;
        if ((*(int *)(iVar7 + 0x1c) != 0) && (**(int **)(iVar7 + 0x24) != 0)) {
          FUN_00763fe0();
          local_8 = 0;
          if (*(int *)(iVar7 + 0x1c) != 0) {
            if (*(int *)(iVar7 + 0x1c) == 0) {
              iVar5 = 0;
              goto LAB_00767a14;
            }
            do {
              iVar5 = *(int *)(*(int *)(iVar7 + 0x24) + local_8 * 4);
LAB_00767a14:
              uVar8 = local_8;
              uVar2 = *(undefined4 *)(iVar5 + 4);
              local_10 = 0;
              cVar4 = FUN_0055e000(uVar2,&local_10);
              if (cVar4 != '\0') {
                iVar5 = 0;
                iVar3 = local_10;
                iVar7 = local_c;
                while (local_c = iVar7, iVar3 != 0) {
                  if (*(int *)(iVar3 + 8) == iVar6) {
                    iVar7 = 0;
                    if (iVar5 == 0) {
                      if (*(int *)(iVar3 + 0x20) == 0) {
                        FUN_004524c0(uVar2);
                      }
                      else {
                        FUN_00452570(uVar2,*(undefined4 *)(iVar3 + 0x20));
                        iVar7 = *(int *)(iVar3 + 0x20);
                      }
                    }
                    else {
                      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar3 + 0x20);
                      iVar7 = *(int *)(iVar3 + 0x20);
                    }
                    *(undefined4 *)(iVar3 + 0x20) = 0;
                    FUN_00401f20(iVar3);
                    iVar3 = iVar7;
                    iVar7 = local_c;
                    uVar8 = local_8;
                  }
                  else {
                    iVar5 = iVar3;
                    iVar3 = *(int *)(iVar3 + 0x20);
                  }
                }
              }
              local_8 = uVar8 + 1;
            } while (local_8 < *(uint *)(iVar7 + 0x1c));
          }
          piVar1 = in_ECX + 0x5f;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            in_ECX[0x5e] = 0;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x40));
          if (in_ECX[0x3f] == 1) {
            (**(code **)(*in_ECX + 300))();
          }
          piVar1 = in_ECX + 0x3f;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            in_ECX[0x3e] = 0;
          }
          LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
        }
        iVar6 = iVar6 + 0x2c;
        iVar7 = local_4 + -1;
      } while (local_4 + -1 != 0);
      local_4 = 0;
    }
    FUN_00778c20(param_1);
  }
  return;
}



undefined4 FUN_00767b40(uint *param_1,int *param_2,int param_3,int *param_4,uint param_5)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  ushort uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uStack_28;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  piVar3 = param_2;
  if ((param_1 == (uint *)0x0) || (param_2 == (int *)0x0)) {
    return 0;
  }
  cVar4 = FUN_00777f10();
  if ((((char)param_5 == '\0') && (cVar4 != '\0')) &&
     ((*(ushort *)((int)param_2 + 0x2e) & 0xf000) == 0x4000)) {
    return 1;
  }
  uVar12 = 0;
  if (param_2[9] != 0) {
    uVar12 = 0x400000;
  }
  if (param_2[8] != 0) {
    uVar12 = uVar12 | 0x800000;
  }
  *param_1 = (*(byte *)(param_2 + 0xb) & 0x3f) << 0x18 | uVar12;
  uVar12 = (**(code **)(*param_2 + 0x50))();
  uVar1 = *(ushort *)(param_2 + 2);
  uStack_28 = 0;
  uStack_20 = 0;
  for (puVar7 = (undefined4 *)(**(code **)(*param_2 + 4))(); puVar7 != (undefined4 *)0x0;
      puVar7 = (undefined4 *)puVar7[1]) {
    if (puVar7 == &DAT_00b3fd2c) {
      uVar8 = (**(code **)(*param_2 + 0x5c))();
      uStack_28 = param_2[0x12];
      uStack_18 = uVar8 & 0xffff;
      uStack_14 = (uint)*(ushort *)(param_2 + 0x10);
      uStack_1c = uStack_14 * 3;
      uStack_20 = 0;
      uStack_10 = 1;
      goto LAB_00767c4b;
    }
  }
  cVar5 = FUN_00405650(&DAT_00b3fd0c,param_2);
  if (cVar5 != '\0') {
    uVar8 = (**(code **)(*param_2 + 0x5c))();
    uStack_14 = (uint)*(ushort *)(param_2 + 0x10);
    uStack_28 = param_2[0x13];
    uStack_18 = uVar8 & 0xffff;
    uStack_20 = param_2[0x12];
    uStack_10 = (uint)*(ushort *)(param_2 + 0x11);
    uStack_1c = uStack_14 + uStack_10 * 2;
  }
LAB_00767c4b:
  if (param_4 == (int *)0x0) {
    param_2 = (int *)0x1;
  }
  else {
    param_2 = (int *)param_4[8];
  }
  uVar6 = *(ushort *)((int)piVar3 + 0x2e) & 0xfff;
  if ((param_3 != 0) && (iVar11 = *(int *)(param_3 + 0x18), iVar9 = FUN_00422de0(), iVar11 != iVar9)
     ) {
    uVar6 = uVar6 | 3;
    uVar10 = FUN_00422de0();
    *(undefined4 *)(param_3 + 0x18) = uVar10;
  }
  if (((*(ushort *)((int)piVar3 + 0x2e) & 0xf000) == 0x8000) || ((char)param_5 != '\0')) {
    uVar6 = 0xfff;
  }
  if (cVar4 == '\0') {
    piVar2 = (int *)param_1[1];
    uVar8 = 0;
    if (param_2 != (int *)0x0) {
      do {
        (**(code **)(*piVar2 + 0x1c))(param_1,uVar8);
        uVar8 = uVar8 + 1;
      } while (uVar8 < param_2);
    }
    FUN_00777f70(param_2);
    param_1[0xd] = 0;
  }
  else {
    if (param_2 == (int *)param_1[7]) goto LAB_00767d4e;
    FUN_00777f70(param_2);
  }
  uVar6 = 0xfff;
LAB_00767d4e:
  param_1[5] = uVar12 & 0xffff;
  param_1[6] = (uint)uVar1;
  param_1[0x13] = uStack_28;
  param_1[0x10] = uStack_14 & 0xffff;
  param_1[0xf] = uStack_18 & 0xffff;
  param_1[0x12] = uStack_20;
  param_1[0x11] = uStack_10 & 0xffff;
  if (((uVar6 & 0xffef) != 0) && (param_5 = 0, param_2 != (int *)0x0)) {
    do {
      if (param_5 < param_1[7]) {
        uVar10 = *(undefined4 *)(param_1[9] + param_5 * 4);
      }
      else {
        uVar10 = 0;
      }
      if ((param_4 == (int *)0x0) ||
         (iVar11 = (**(code **)(*param_4 + 0x6c))(piVar3,param_3,0,uVar6,uVar10,param_5,0),
         iVar11 == 0)) {
        if (param_2 != (int *)0x1) {
          return 0;
        }
        iVar11 = FUN_00776e90(piVar3,param_3,uVar6,uVar10,0);
        if (iVar11 == 0) {
          return 0;
        }
      }
      param_5 = param_5 + 1;
    } while (param_5 < param_2);
  }
  if ((uStack_28 != 0) && ((uVar6 & 0x30) != 0)) {
    uVar12 = param_1[0xc];
    param_5 = param_1[0xb];
    uVar8 = FUN_007781f0(uStack_28,uStack_1c,uStack_1c,uVar12,&param_5,1,
                         -((char)param_1[4] != '\0') & 0x10);
    if (uVar8 == 0) {
      return 0;
    }
    if (uVar12 != uVar8) {
      FUN_00777f40();
      param_1[0xc] = uVar8;
      param_1[10] = uStack_1c;
      param_1[0xb] = param_5;
    }
  }
  *(ushort *)((int)piVar3 + 0x2e) = *(ushort *)((int)piVar3 + 0x2e) & 0xf000;
  return 1;
}



void FUN_00767ea0(int param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  void *pvVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int in_ECX;
  int *piVar20;
  ushort *puVar21;
  byte bVar22;
  short sVar23;
  uint uVar24;
  uint uVar25;
  ushort uVar26;
  uint uVar27;
  int iStack_3c;
  ushort local_34;
  int iStack_30;
  float fStack_28;
  float fStack_24;
  uint local_20;
  int iStack_4;
  
  uVar1 = *(ushort *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x1c);
  uVar24 = (uint)uVar1 * 4;
  uVar13 = uVar24 & 0xffff;
  iVar14 = (uint)uVar1 * 2;
  *(int *)(iVar5 + 0x3c) = iVar14;
  *(int *)(iVar5 + 0x40) = iVar14;
  iVar14 = 0;
  uVar25 = (uVar13 * 3) / 2;
  bVar22 = (byte)param_2 >> 3 & 1;
  *(uint *)(iVar5 + 0x14) = uVar13;
  *(uint *)(iVar5 + 0x18) = uVar13;
  *(undefined4 *)(iVar5 + 0x4c) = 0;
  *(undefined4 *)(iVar5 + 0x48) = 0;
  *(undefined4 *)(iVar5 + 0x44) = 1;
  if (*(int *)(iVar5 + 0x1c) != 0) {
    iVar14 = **(int **)(iVar5 + 0x24);
  }
  if (bVar22 != 0) {
    local_34 = (ushort)uVar24;
    if (*(ushort *)(in_ECX + 0xa4c) < local_34) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0xa40));
      FUN_00401f20(*(undefined4 *)(in_ECX + 0xa44));
      FUN_00401f20(*(undefined4 *)(in_ECX + 0xa48));
      uVar15 = FUN_00401f00(uVar13 * 8);
      *(undefined4 *)(in_ECX + 0xa40) = uVar15;
      pvVar16 = (void *)FUN_00401f00(uVar13 * 0x10);
      if (pvVar16 == (void *)0x0) {
        pvVar16 = (void *)0x0;
      }
      else {
        _vector_constructor_iterator_(pvVar16,0x10,uVar13,FUN_0047ea50);
      }
      *(void **)(in_ECX + 0xa44) = pvVar16;
      uVar15 = FUN_00401f00(uVar13 * 8);
      *(undefined4 *)(in_ECX + 0xa48) = uVar15;
      *(ushort *)(in_ECX + 0xa4c) = local_34;
    }
    if (iVar14 != 0) {
      if (*(int *)(iVar5 + 0x1c) == 0) {
        uVar24 = 0;
      }
      else {
        uVar24 = **(uint **)(iVar5 + 0x20);
      }
      if (*(uint *)(iVar14 + 0x14) / uVar24 < uVar13) {
        param_2 = 0xf;
      }
    }
  }
  if ((param_2 & 0xffff | 0xfffffff7) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x87c) + 0x4c))(0);
    uVar15 = (**(code **)(**(int **)(in_ECX + 0x87c) + 0x50))(0);
    iVar19 = **(int **)(*(int *)(iStack_4 + 0x14) + 0x20);
    if (iVar19 == 0) {
      piVar20 = (int *)0x0;
    }
    else {
      piVar20 = *(int **)(iVar19 + 8);
    }
    uVar9 = (**(code **)(*piVar20 + 0x4c))();
    iVar19 = **(int **)(*(int *)(iStack_4 + 0x14) + 0x20);
    if (iVar19 == 0) {
      piVar20 = (int *)0x0;
    }
    else {
      piVar20 = *(int **)(iVar19 + 8);
    }
    fVar6 = 1.0 / (float)uVar9;
    uVar10 = (**(code **)(*piVar20 + 0x50))();
    uVar9 = 0;
    if (uVar1 != 0) {
      iStack_3c = 0;
      do {
        puVar21 = (ushort *)(*(int *)(param_1 + 8) + iStack_3c);
        uVar11 = puVar21[1];
        uVar24 = (uint)uVar11;
        while ((short)uVar11 < 0) {
          uVar24 = uVar24 + iStack_30;
          uVar11 = (ushort)uVar24;
        }
        sVar23 = (short)uVar24;
        while (iStack_30 <= sVar23) {
          uVar24 = uVar24 - iStack_30;
          sVar23 = (short)uVar24;
        }
        uVar11 = *puVar21;
        uVar24 = (uint)uVar11;
        while ((short)uVar11 < 0) {
          uVar24 = uVar24 + (int)fVar6;
          uVar11 = (ushort)uVar24;
        }
        sVar12 = (short)uVar24;
        while ((int)fVar6 <= (int)sVar12) {
          uVar24 = uVar24 - (int)fVar6;
          sVar12 = (short)uVar24;
        }
        uVar2 = puVar21[2];
        uVar3 = puVar21[3];
        uVar4 = puVar21[5];
        uVar26 = 0;
        uVar11 = uVar9 * 4;
        fVar7 = (float)puVar21[4] * (1.0 / (float)uVar10);
        local_20 = 0;
        do {
          fStack_28 = ((float)(int)sVar23 - 0.5) + (float)uVar2;
          if (uVar26 >> 1 == 0) {
            fStack_28 = (float)(int)sVar23 - 0.5;
          }
          uVar27 = local_20 & 0x80000001;
          uVar24 = (uint)uVar11;
          *(float *)(*(int *)(in_ECX + 0xa40) + uVar24 * 8) = fStack_28;
          if ((int)uVar27 < 0) {
            uVar27 = (uVar27 - 1 | 0xfffffffe) + 1;
          }
          fVar8 = ((float)(int)sVar12 - 0.5) + (float)uVar3;
          if (uVar27 == 0) {
            fVar8 = (float)(int)sVar12 - 0.5;
          }
          *(float *)(*(int *)(in_ECX + 0xa40) + 4 + uVar24 * 8) = fVar8;
          puVar17 = (undefined4 *)(uVar24 * 0x10 + *(int *)(in_ECX + 0xa44));
          *puVar17 = *(undefined4 *)(puVar21 + 6);
          puVar17[1] = *(undefined4 *)(puVar21 + 8);
          puVar17[2] = *(undefined4 *)(puVar21 + 10);
          puVar17[3] = *(undefined4 *)(puVar21 + 0xc);
          fStack_28 = (float)uVar4 * fStack_24 + fStack_24 * (float)uVar2;
          if (uVar26 >> 1 == 0) {
            fStack_28 = (float)uVar4 * fStack_24;
          }
          *(float *)(*(int *)(in_ECX + 0xa48) + uVar24 * 8) = fStack_28;
          fStack_28 = fVar7 + (float)uVar3 * (1.0 / (float)uVar10);
          if (uVar27 == 0) {
            fStack_28 = fVar7;
          }
          uVar11 = uVar11 + 1;
          *(float *)(*(int *)(in_ECX + 0xa48) + 4 + uVar24 * 8) = fStack_28;
          uVar26 = uVar26 + 1;
          local_20 = local_20 + 1;
        } while (uVar26 < 4);
        iStack_3c = iStack_3c + 0x1c;
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    iVar14 = FUN_00777240(iVar5,uVar15,*(undefined4 *)(in_ECX + 0xa40),
                          *(undefined4 *)(in_ECX + 0xa44),*(undefined4 *)(in_ECX + 0xa48),param_2,
                          iVar14,0);
    if (iVar14 == 0) {
      return;
    }
  }
  if (bVar22 != 0) {
    if (*(uint *)(in_ECX + 0xa54) < uVar25) {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0xa50));
      uVar15 = FUN_00401f00(uVar25 * 2);
      *(undefined4 *)(in_ECX + 0xa50) = uVar15;
      uVar24 = 0;
      uVar27 = 0;
      *(uint *)(in_ECX + 0xa54) = uVar25;
      if (uVar13 != 0) {
        do {
          sVar23 = (short)uVar27;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar24 & 0xffff) * 2) = sVar23;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar24 + 1 & 0xffff) * 2) = sVar23 + 1;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar24 + 2 & 0xffff) * 2) = sVar23 + 2;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar24 + 3 & 0xffff) * 2) = sVar23 + 2;
          uVar18 = uVar24 + 5;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar24 + 4 & 0xffff) * 2) = sVar23 + 1;
          uVar27 = uVar27 + 4;
          uVar24 = uVar24 + 6;
          *(short *)(*(int *)(in_ECX + 0xa50) + (uVar18 & 0xffff) * 2) = sVar23 + 3;
        } while (uVar27 < uVar13);
      }
    }
    param_1 = *(undefined4 *)(iVar5 + 0x2c);
    iVar14 = *(int *)(iVar5 + 0x30);
    iVar19 = FUN_007781f0(*(undefined4 *)(in_ECX + 0xa50),uVar25,uVar25,iVar14,&param_1,1,
                          -(*(char *)(iVar5 + 0x10) != '\0') & 0x10);
    if (iVar14 != iVar19) {
      FUN_00777f40();
      *(int *)(iVar5 + 0x30) = iVar19;
      *(uint *)(iVar5 + 0x28) = uVar25;
      *(int *)(iVar5 + 0x2c) = param_1;
    }
  }
  return;
}



char FUN_00768470(undefined4 param_1,int *param_2,ushort param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,uint param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  iVar1 = param_2[0xe];
  cVar3 = FUN_00777f10();
  if (cVar3 != '\0') {
    return '\x01';
  }
  uVar5 = (**(code **)(*param_2 + 0x50))();
  *(uint *)(iVar1 + 0x18) = (uint)*(ushort *)(param_2 + 2);
  *(uint *)(iVar1 + 0x14) = uVar5 & 0xffff;
  *(undefined4 *)(iVar1 + 0x4c) = param_5;
  *(uint *)(iVar1 + 0x40) = param_4 & 0xffff;
  *(uint *)(iVar1 + 0x3c) = (uint)param_3;
  *(undefined4 *)(iVar1 + 0x48) = param_6;
  *(uint *)(iVar1 + 0x44) = param_7 & 0xffff;
  cVar3 = FUN_007633d0(iVar1,param_2,0,param_8);
  if (cVar3 != '\0') {
    uVar5 = *(uint *)(iVar1 + 0x1c);
    uVar8 = 0;
    if (uVar5 != 0) {
      do {
        if (uVar8 < *(uint *)(iVar1 + 0x1c)) {
          iVar6 = *(int *)(*(int *)(iVar1 + 0x24) + uVar8 * 4);
        }
        else {
          iVar6 = 0;
        }
        uVar2 = *(undefined4 *)(iVar6 + 4);
        puVar7 = (undefined4 *)FUN_00401f00(0x24);
        *puVar7 = param_2;
        puVar7[3] = param_8;
        puVar7[1] = 0;
        puVar7[2] = 0;
        puVar7[4] = 0;
        puVar7[5] = 0;
        puVar7[6] = iVar1;
        puVar7[7] = uVar8;
        cVar4 = FUN_0055e000(uVar2,&param_7);
        puVar7[8] = -(uint)(cVar4 != '\0') & param_7;
        FUN_00452570(uVar2,puVar7);
        uVar8 = uVar8 + 1;
      } while (uVar8 < uVar5);
    }
  }
  return cVar3;
}



undefined1
FUN_00768580(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  undefined1 local_15;
  int local_c;
  uint local_8;
  uint local_4;
  
  local_c = *(int *)(*(int *)(param_3 + 0xc) + 8);
  local_15 = 1;
  if (local_c == 0) {
    return 1;
  }
  puVar11 = (ushort *)(*(int *)(*(int *)(param_3 + 0xc) + 0xc) + 0x1c);
  do {
    iVar4 = *(int *)(puVar11 + 6);
    cVar7 = FUN_00777f10();
    if (cVar7 == '\0') {
      uVar1 = *puVar11;
      uVar2 = puVar11[3];
      uVar3 = puVar11[1];
      uVar5 = *(undefined4 *)(puVar11 + -4);
      uVar6 = *(undefined4 *)(puVar11 + -2);
      *(uint *)(iVar4 + 0x14) = (uint)uVar1;
      *(uint *)(iVar4 + 0x18) = (uint)uVar1;
      if (uVar2 == 0) {
        uVar10 = 1;
      }
      else {
        uVar10 = (uint)uVar2;
      }
      *(uint *)(iVar4 + 0x44) = uVar10;
      *(uint *)(iVar4 + 0x3c) = (uint)uVar3;
      *(uint *)(iVar4 + 0x40) = (uint)uVar3;
      *(undefined4 *)(iVar4 + 0x4c) = uVar5;
      *(undefined4 *)(iVar4 + 0x48) = uVar6;
      cVar7 = FUN_007633d0(iVar4,param_2,puVar11 + -0xe,param_4);
      if (cVar7 == '\0') {
        local_15 = 0;
      }
      else {
        local_4 = *(uint *)(iVar4 + 0x1c);
        uVar10 = 0;
        if (local_4 != 0) {
          do {
            if (uVar10 < *(uint *)(iVar4 + 0x1c)) {
              iVar8 = *(int *)(*(int *)(iVar4 + 0x24) + uVar10 * 4);
            }
            else {
              iVar8 = 0;
            }
            uVar5 = *(undefined4 *)(iVar8 + 4);
            puVar9 = (undefined4 *)FUN_00401f00(0x24);
            puVar9[2] = puVar11 + -0xe;
            *puVar9 = param_2;
            puVar9[3] = param_4;
            puVar9[4] = param_5;
            puVar9[1] = param_3;
            puVar9[5] = param_6;
            puVar9[8] = 0;
            puVar9[6] = iVar4;
            puVar9[7] = uVar10;
            cVar7 = FUN_0055e000(uVar5,&local_8);
            puVar9[8] = -(uint)(cVar7 != '\0') & local_8;
            FUN_00452570(uVar5,puVar9);
            uVar10 = uVar10 + 1;
          } while (uVar10 < local_4);
        }
      }
    }
    puVar11 = puVar11 + 0x16;
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_15;
}



undefined4 FUN_00768780(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0x24) != (int *)0x0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 0x20))(), iVar1 != 0)) {
    return 1;
  }
  iVar1 = FUN_00779630(param_1);
  if (iVar1 != 0) {
    FUN_00452570(param_1,iVar1);
    return 1;
  }
  return 0;
}



undefined4 FUN_00768890(int param_1,int *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  
  if (((*(int *)(*(int *)(param_1 + 0xb4) + 0x38) != 0) || (*(int *)(param_1 + 0xb8) == 0)) ||
     (iVar3 = *(int *)(*(int *)(param_1 + 0xb8) + 0xc), iVar3 == 0)) {
    return 0;
  }
  if (*(int *)(*(int *)(iVar3 + 0xc) + 0x28) != 0) {
    return 1;
  }
  uVar2 = (**(code **)(*in_ECX + 0x54))();
  if ((uVar2 & 2) == 0) {
    if (param_2 == (int *)0x0) {
      param_2 = (int *)FUN_00560920(&DAT_00b42858,*(undefined4 *)(param_1 + 0xbc));
    }
    if (((0xfffe0000 < (uint)in_ECX[0x1b9]) && (param_2 != (int *)0x0)) &&
       (cVar1 = (**(code **)(*param_2 + 0x68))(), cVar1 != '\0')) {
      return 1;
    }
    if (((*(char *)((int)in_ECX + 0x5c9) != '\0') && (param_2 != (int *)0x0)) &&
       (iVar3 = (**(code **)(*param_2 + 0x50))(), iVar3 != 0)) {
      piVar4 = (int *)(**(code **)(*param_2 + 0x50))();
      cVar1 = (**(code **)(*piVar4 + 0x68))();
      if (cVar1 != '\0') {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



void FUN_00768960(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa94) != 0) {
    FUN_0077a9b0();
    return;
  }
  return;
}



void FUN_00768980(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int *in_ECX;
  undefined4 unaff_EBX;
  undefined4 *unaff_retaddr;
  undefined4 *puVar5;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar5 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  do {
    if (puVar5 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      puVar5 = param_1;
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar3,unaff_retaddr,puVar5);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
LAB_007689fb:
      if ((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0))
      {
        (**(code **)*param_1)(1);
      }
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,puVar5[1]);
    if (cVar1 != '\0') {
      (**(code **)(*in_ECX + 0x10))(puVar5);
      puVar3 = unaff_retaddr;
      if (unaff_retaddr != (undefined4 *)0x0) {
        InterlockedIncrement(unaff_retaddr + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar5,unaff_EBX,puVar3);
      param_1 = unaff_retaddr;
      goto LAB_007689fb;
    }
    puVar5 = (undefined4 *)*puVar5;
  } while( true );
}



void FUN_00768ac0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88a3c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768af0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88a5c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768b20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88a7c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768b50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88a9c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768b80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768bb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88b14;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a88adc;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00768be0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88b24;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a88aec;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00768c10(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int in_ECX;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_007637d0(in_ECX + 0x6f4,0,3);
  FUN_007637d0(in_ECX + 0x74c,1,3);
  FUN_007637d0(in_ECX + 0x7a4,0,5);
  FUN_007637d0(in_ECX + 0x7fc,1,5);
  FUN_00764630();
  iVar2 = *(int *)(in_ECX + 0x854);
  iVar4 = FUN_00401f00(0x70);
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0070e560(2,1,iVar2,1,1);
    if (puVar5 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar5 + 1);
    }
  }
  cVar1 = *(char *)(iVar2 + 1);
  puVar6 = (undefined1 *)(*(int *)puVar5[0x17] + puVar5[0x14]);
  if (cVar1 == '\x10') {
    puVar6[3] = 0xff;
    puVar6[2] = 0xff;
  }
  else {
    if (cVar1 != ' ') goto LAB_00768cd6;
    puVar6[3] = 0;
    puVar6[2] = 0;
    puVar6[7] = 0xff;
    puVar6[6] = 0xff;
    puVar6[5] = 0xff;
    puVar6[4] = 0xff;
  }
  *puVar6 = 0;
  puVar6[1] = 0;
LAB_00768cd6:
  local_c = 6;
  local_4 = 0;
  local_8 = 0;
  puVar7 = (undefined4 *)FUN_00701fc0(puVar5,&local_c);
  puVar3 = *(undefined4 **)(in_ECX + 0x8f0);
  if (puVar3 != puVar7) {
    if (puVar3 != (undefined4 *)0x0) {
      LVar8 = InterlockedDecrement(puVar3 + 1);
      if ((LVar8 == 0) && (puVar3 != (undefined4 *)0x0)) {
        (**(code **)*puVar3)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0x8f0) = puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  LVar8 = InterlockedDecrement(puVar5 + 1);
  if (LVar8 == 0) {
    (**(code **)*puVar5)(1);
  }
  return 1;
}



undefined4 FUN_00768d60(void)

{
  LONG *lpAddend;
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined *puVar6;
  int *piVar7;
  LONG LVar8;
  uint uVar9;
  int in_ECX;
  undefined4 *puVar10;
  uint unaff_EBP;
  uint uVar11;
  int *local_8 [2];
  
  uVar11 = 0;
  local_8[0] = (int *)0x0;
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x87c) + 100))();
  if (iVar4 != 0) {
    do {
      piVar5 = (int *)(**(code **)(**(int **)(in_ECX + 0x87c) + 0x80))(uVar11);
      piVar7 = (int *)0x0;
      if (piVar5 != (int *)0x0) {
        for (puVar6 = (undefined *)(**(code **)(*piVar5 + 0x10))(); puVar6 != (undefined *)0x0;
            puVar6 = *(undefined **)(puVar6 + 4)) {
          if (puVar6 == &DAT_00b42654) {
            bVar1 = 1;
            goto LAB_00768dc8;
          }
        }
        bVar1 = 0;
LAB_00768dc8:
        piVar7 = (int *)(-(uint)bVar1 & (uint)piVar5);
      }
      cVar3 = (**(code **)(*piVar7 + 0x24))();
      if (cVar3 != '\0') {
        lpAddend = piVar7 + 1;
        InterlockedIncrement(lpAddend);
        puVar2 = *(undefined4 **)(in_ECX + 0x8f8);
        do {
          puVar10 = puVar2;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = (undefined4 *)0x0;
            break;
          }
          puVar2 = (undefined4 *)*puVar10;
        } while (piVar7 != (int *)puVar10[2]);
        LVar8 = InterlockedDecrement(lpAddend);
        if (LVar8 == 0) {
          (**(code **)*piVar7)(1);
        }
        if (puVar10 == (undefined4 *)0x0) {
          local_8[0] = piVar7;
          InterlockedIncrement(lpAddend);
          FUN_007c16b0(local_8);
          LVar8 = InterlockedDecrement(lpAddend);
          if (LVar8 == 0) {
            (**(code **)*piVar7)(1);
          }
        }
      }
      uVar11 = unaff_EBP + 1;
      uVar9 = (**(code **)(**(int **)(in_ECX + 0x87c) + 100))();
      unaff_EBP = uVar11;
    } while (uVar11 < uVar9);
  }
  return 1;
}



undefined1 FUN_00768e90(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  int *piVar7;
  int in_ECX;
  int iVar8;
  int iVar9;
  undefined2 uVar10;
  
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    for (puVar6 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar6 != (undefined4 *)0x0;
        puVar6 = (undefined4 *)puVar6[1]) {
      if (puVar6 == &DAT_00b3fd54) {
        iVar8 = param_1[0x2e];
        piVar1 = (int *)param_1[0x2d];
        cVar3 = FUN_00768890(param_1,0);
        if ((iVar8 != 0) && (cVar3 == '\0')) {
          *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xfff | 0x8000;
        }
        if ((*(ushort *)((int)piVar1 + 0x2e) & 0xf000) == 0x8000) {
          return 1;
        }
        FUN_00763fe0();
        param_1 = (int *)param_4;
        if ((param_4 == 0) &&
           (piVar7 = (int *)FUN_00560920(&DAT_00b42858,piVar2[0x2f]), piVar7 != (int *)0x0)) {
          param_1 = (int *)(**(code **)(*piVar7 + 0x50))();
        }
        FUN_00778db0(*(undefined4 *)(in_ECX + 0x8a4),piVar1,iVar8,cVar3,param_2,param_3);
        uVar4 = 0;
        if (cVar3 != '\0') {
          uVar4 = FUN_00768580(piVar2,piVar1,iVar8,param_1,param_2,param_3);
          FUN_00764040();
          return uVar4;
        }
        cVar3 = FUN_00405650(&DAT_00b3fcd4,piVar2);
        if (cVar3 == '\0') {
          cVar3 = FUN_00405650(&DAT_00b3fd04,piVar2);
          if (cVar3 == '\0') goto LAB_0076901b;
          uVar5 = (**(code **)(*piVar1 + 0x5c))();
          iVar8 = piVar1[0x13];
          uVar10 = (undefined2)piVar1[0x11];
          iVar9 = piVar1[0x12];
        }
        else {
          uVar5 = (**(code **)(*piVar1 + 0x5c))();
          iVar8 = piVar1[0x12];
          uVar10 = 1;
          iVar9 = 0;
        }
        uVar4 = FUN_00768470(piVar2,piVar1,uVar5,(short)piVar1[0x10],iVar8,iVar9,uVar10,param_1);
LAB_0076901b:
        FUN_00764040();
        return uVar4;
      }
    }
  }
  return 0;
}



void FUN_00769030(void)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *local_20;
  undefined4 uStack_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  int *local_4;
  
  FUN_00763fe0();
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x608) != 0) {
    piVar4 = *(int **)(in_ECX + 0x60c);
    do {
      if (*piVar4 != 0) {
        local_14 = (*(int **)(in_ECX + 0x60c))[uVar3];
        goto LAB_00769067;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x608));
  }
  local_14 = 0;
LAB_00769067:
  local_20 = (int *)0x0;
  piVar4 = (int *)0x0;
  while (local_14 != 0) {
    FUN_00452600(&local_14,&local_c,&local_10);
    piVar2 = local_10;
    if (local_10 != (int *)0x0) {
      if (local_c == 0) {
        do {
          local_20 = piVar2;
          piVar2 = (int *)local_20[8];
          if (local_20[7] == 0) {
            if (local_20[2] == 0) {
              FUN_00767b40(local_20[6],*local_20,local_20[1],local_20[3],1);
            }
            else {
              FUN_00763130(local_20[6],*local_20,local_20[1],local_20[2],local_20[3],1);
            }
          }
          local_20[8] = (int)piVar4;
          piVar4 = local_20;
        } while (piVar2 != (int *)0x0);
      }
      else {
        uVar10 = 0xffffffff;
        uVar3 = 0;
        piVar4 = local_10;
        do {
          piVar1 = piVar4 + 8;
          if ((uint)piVar4[7] < *(uint *)(piVar4[6] + 0x1c)) {
            iVar9 = *(int *)(*(int *)(piVar4[6] + 0x24) + piVar4[7] * 4);
          }
          else {
            iVar9 = 0;
          }
          uVar5 = *(uint *)(iVar9 + 0xc);
          if (uVar5 < uVar10) {
            uVar10 = uVar5;
          }
          uVar5 = uVar5 + *(int *)(iVar9 + 0x14);
          if (uVar3 < uVar5) {
            uVar3 = uVar5;
          }
          piVar4 = (int *)*piVar1;
        } while ((int *)*piVar1 != (int *)0x0);
        piVar4 = local_20;
        if (uVar10 < uVar3) {
          local_8 = FUN_00776c90(*(undefined4 *)(iVar9 + 8),uVar10,uVar3 - uVar10,
                                 *(undefined4 *)(iVar9 + 0x10));
          do {
            piVar4 = piVar2;
            iVar9 = piVar4[6];
            uVar3 = piVar4[7];
            local_4 = (int *)piVar4[8];
            if (uVar3 < *(uint *)(iVar9 + 0x1c)) {
              iVar12 = *(int *)(*(int *)(iVar9 + 0x24) + uVar3 * 4);
            }
            else {
              iVar12 = 0;
            }
            iVar11 = *(int *)(iVar12 + 0xc) + local_8;
            if (((int *)piVar4[3] == (int *)0x0) ||
               (iVar6 = (**(code **)(*(int *)piVar4[3] + 0x6c))
                                  (*piVar4,piVar4[1],piVar4[2],0xfff,iVar12,uVar3,iVar11),
               iVar6 == 0)) {
              if (piVar4[2] == 0) {
                FUN_00776e90(*piVar4,piVar4[1],0xfff,iVar12,iVar11);
              }
              else {
                FUN_007774c0(*piVar4,piVar4[1],piVar4[2],0xfff,iVar12,iVar11);
              }
            }
            if ((piVar4[7] == 0) && (*(int *)(iVar9 + 0x4c) != 0)) {
              iVar11 = 0;
              if (*(int *)(iVar9 + 0x48) == 0) {
                if (*(int *)(iVar9 + 0x38) == 4) {
                  iVar11 = *(int *)(iVar9 + 0x40) * 3;
                  iVar6 = *(int *)(iVar9 + 0x3c) * 3;
                }
                else {
                  iVar6 = 0;
                  if (*(int *)(iVar9 + 0x38) == 5) {
                    iVar11 = *(int *)(iVar9 + 0x40) + 2;
                    iVar6 = *(int *)(iVar9 + 0x3c) + 2;
                  }
                }
              }
              else {
                iVar11 = 0;
                for (iVar7 = *(int *)(iVar9 + 0x44); iVar6 = iVar11, iVar7 != 0; iVar7 = iVar7 + -1)
                {
                  iVar11 = iVar11 + (uint)*(ushort *)(*(int *)(iVar9 + 0x48) + -2 + iVar7 * 2);
                }
              }
              uStack_18 = *(undefined4 *)(iVar9 + 0x2c);
              uVar8 = FUN_007781f0(*(undefined4 *)(iVar9 + 0x4c),iVar6,iVar11,
                                   *(undefined4 *)(iVar9 + 0x30),&uStack_18,1,
                                   -(*(char *)(iVar9 + 0x10) != '\0') & 0x10);
              *(undefined4 *)(iVar9 + 0x30) = uVar8;
              *(int *)(iVar9 + 0x28) = iVar6;
              *(undefined4 *)(iVar9 + 0x2c) = uStack_18;
            }
            piVar4[8] = (int)local_20;
            piVar2 = local_4;
            local_20 = piVar4;
          } while (local_4 != (int *)0x0);
          FUN_00776d80(*(undefined4 *)(iVar12 + 8));
        }
      }
    }
  }
  FUN_007c2a40();
  while (piVar4 != (int *)0x0) {
    iVar9 = *piVar4;
    piVar2 = (int *)piVar4[8];
    if (((*(ushort *)(iVar9 + 0x2e) & 0xf000) == 0x4000) && (piVar4[7] == 0)) {
      *(ushort *)(iVar9 + 0x2e) = *(ushort *)(iVar9 + 0x2e) & 0xf000;
      FUN_00765370(iVar9,piVar4[1],piVar4[2]);
    }
    FUN_00401f20(piVar4);
    piVar4 = piVar2;
  }
  FUN_00764040();
  return;
}



void FUN_007693e0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int in_ECX;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 auStack_34 [13];
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    piVar1 = *(int **)(param_1 + 0xb4);
    sVar4 = (**(code **)(*piVar1 + 0x50))();
    if (sVar4 != 0) {
      iVar2 = *(int *)(param_1 + 0xb8);
      uStack_40 = *(undefined4 *)(param_1 + 0x24);
      puVar6 = (undefined4 *)(param_1 + 100);
      puVar7 = auStack_34;
      for (iVar5 = 0xd; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
      uStack_44 = *(undefined4 *)(param_1 + 0x20);
      uStack_38 = *(undefined4 *)(param_1 + 0x2c);
      uStack_3c = *(undefined4 *)(param_1 + 0x28);
      cVar3 = FUN_00768890(param_1,0);
      if (((*(ushort *)((int)piVar1 + 0x2e) & 0xf000) == 0x8000) ||
         ((iVar2 != 0 && (cVar3 == '\0')))) {
        uVar8 = *(undefined4 *)(in_ECX + 0x8a8);
      }
      else {
        uVar8 = *(undefined4 *)(in_ECX + 0x8a4);
      }
      FUN_00778db0(uVar8,piVar1,iVar2,cVar3,0,0);
      if (cVar3 != '\0') {
        FUN_00767520(param_1,piVar1,iVar2,auStack_34,&uStack_44);
        return;
      }
      FUN_007672f0(param_1,piVar1,iVar2,auStack_34,&uStack_44,piVar1[0xe]);
    }
  }
  return;
}



void FUN_007694f0(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  int in_ECX;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iStack_10;
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    piVar1 = *(int **)(param_1 + 0xb4);
    sVar4 = (**(code **)(*piVar1 + 0x50))();
    if (sVar4 != 0) {
      iVar9 = *(int *)(param_1 + 0xb8);
      cVar3 = FUN_00768890(param_1,0);
      iVar2 = *(int *)(*(int *)(param_1 + 0xb4) + 0x38);
      piVar5 = (int *)FUN_00560920(&DAT_00b42858,*(undefined4 *)(param_1 + 0xbc));
      (**(code **)(*piVar5 + 0x48))();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
      if (cVar3 == '\0') {
        if (*(int *)(iVar2 + 0x30) == 0) {
          (**(code **)(**(int **)(in_ECX + 0x280) + 0x144))
                    (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar2 + 0x38),
                     *(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x3c));
        }
        else {
          uVar6 = 0;
          iVar9 = 0;
          if (*(int *)(iVar2 + 0x44) != 0) {
            do {
              if (*(int *)(iVar2 + 0x48) == 0) {
                iVar8 = *(int *)(iVar2 + 0x3c);
              }
              else {
                iVar8 = *(ushort *)(*(int *)(iVar2 + 0x48) + uVar6 * 2) - 2;
              }
              (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                        (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar2 + 0x38),
                         *(undefined4 *)(iVar2 + 0x34),0,*(undefined4 *)(iVar2 + 0x14),iVar9,iVar8);
              uVar6 = uVar6 + 1;
              iVar9 = iVar8 + 2 + iVar9;
            } while (uVar6 < *(uint *)(iVar2 + 0x44));
            *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
            return;
          }
        }
      }
      else {
        iVar9 = *(int *)(iVar9 + 0xc);
        iStack_10 = *(int *)(iVar9 + 8);
        iVar9 = *(int *)(iVar9 + 0xc);
        sVar4 = *(short *)(iVar9 + 0x22);
        if (iStack_10 != 0) {
          puVar7 = (ushort *)(iVar9 + 0x20);
          do {
            if ((piVar5 == *(int **)(in_ECX + 0xa94)) && (*(uint *)(in_ECX + 0x6d8) < (uint)*puVar7)
               ) {
              FUN_0060d0a0("DrawSkinnedPrimitive> Cannot render partition with %d bones without a shader!\n"
                           ,(uint)*puVar7);
            }
            else {
              iVar2 = *(int *)(puVar7 + 4);
              uVar6 = 0;
              iVar9 = 0;
              if (*(int *)(iVar2 + 0x44) != 0) {
                do {
                  if (*(int *)(iVar2 + 0x48) == 0) {
                    iVar8 = *(int *)(iVar2 + 0x3c);
                  }
                  else {
                    iVar8 = *(ushort *)(*(int *)(iVar2 + 0x48) + uVar6 * 2) - 2;
                  }
                  (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                            (*(int **)(in_ECX + 0x280),(sVar4 != 0) + '\x04',
                             *(undefined4 *)(iVar2 + 0x34),0,puVar7[-2],iVar9,iVar8);
                  uVar6 = uVar6 + 1;
                  iVar9 = iVar9 + 2 + iVar8;
                } while (uVar6 < *(uint *)(iVar2 + 0x44));
              }
            }
            puVar7 = puVar7 + 0x16;
            iStack_10 = iStack_10 + -1;
          } while (iStack_10 != 0);
          *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
          return;
        }
      }
      *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
    }
  }
  return;
}



void FUN_00769700(uint param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  short sVar8;
  int *piVar9;
  int in_ECX;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iStack_20;
  
  if (*(char *)(in_ECX + 0x6f0) == '\0') {
    piVar1 = *(int **)(param_1 + 0xb4);
    sVar8 = (**(code **)(*piVar1 + 0x50))();
    if (sVar8 != 0) {
      iVar12 = *(int *)(param_1 + 0xb8);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 0x28);
      uVar4 = *(undefined4 *)(param_1 + 0x20);
      uVar5 = *(undefined4 *)(param_1 + 0x2c);
      cVar7 = FUN_00768890(param_1,0);
      iVar6 = *(int *)(*(int *)(param_1 + 0xb4) + 0x38);
      piVar9 = (int *)FUN_00560920(&DAT_00b42858,*(undefined4 *)(param_1 + 0xbc));
      (**(code **)(*piVar9 + 0x48))();
      *(undefined4 *)(in_ECX + 0x658) = uVar4;
      *(undefined4 *)(in_ECX + 0x65c) = uVar2;
      *(undefined4 *)(in_ECX + 0x660) = uVar3;
      *(undefined4 *)(in_ECX + 0x664) = uVar5;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x8ac) + 0xff0) + 4))();
      if (cVar7 == '\0') {
        if (*(int *)(iVar6 + 0x30) == 0) {
          (**(code **)(**(int **)(in_ECX + 0x280) + 0x144))
                    (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar6 + 0x38),
                     *(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x3c));
        }
        else {
          iVar12 = 0;
          param_1 = 0;
          if (*(int *)(iVar6 + 0x44) != 0) {
            do {
              if (*(int *)(iVar6 + 0x48) == 0) {
                iVar11 = *(int *)(iVar6 + 0x3c);
              }
              else {
                iVar11 = *(ushort *)(*(int *)(iVar6 + 0x48) + param_1 * 2) - 2;
              }
              (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                        (*(int **)(in_ECX + 0x280),*(undefined4 *)(iVar6 + 0x38),
                         *(undefined4 *)(iVar6 + 0x34),0,*(undefined4 *)(iVar6 + 0x14),iVar12,iVar11
                        );
              param_1 = param_1 + 1;
              iVar12 = iVar12 + 2 + iVar11;
            } while (param_1 < *(uint *)(iVar6 + 0x44));
            *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
            return;
          }
        }
      }
      else {
        iVar12 = *(int *)(iVar12 + 0xc);
        iStack_20 = *(int *)(iVar12 + 8);
        iVar12 = *(int *)(iVar12 + 0xc);
        sVar8 = *(short *)(iVar12 + 0x22);
        if (iStack_20 != 0) {
          puVar10 = (ushort *)(iVar12 + 0x20);
          do {
            if ((piVar9 == *(int **)(in_ECX + 0xa94)) &&
               (*(uint *)(in_ECX + 0x6d8) < (uint)*puVar10)) {
              FUN_0060d0a0("DrawSkinnedPrimitive> Cannot render partition with %d bones without a shader!\n"
                           ,(uint)*puVar10);
            }
            else {
              iVar6 = *(int *)(puVar10 + 4);
              iVar12 = 0;
              param_1 = 0;
              if (*(int *)(iVar6 + 0x44) != 0) {
                do {
                  if (*(int *)(iVar6 + 0x48) == 0) {
                    iVar11 = *(int *)(iVar6 + 0x3c);
                  }
                  else {
                    iVar11 = *(ushort *)(*(int *)(iVar6 + 0x48) + param_1 * 2) - 2;
                  }
                  (**(code **)(**(int **)(in_ECX + 0x280) + 0x148))
                            (*(int **)(in_ECX + 0x280),(sVar8 != 0) + '\x04',
                             *(undefined4 *)(iVar6 + 0x34),0,puVar10[-2],iVar12,iVar11);
                  param_1 = param_1 + 1;
                  iVar12 = iVar12 + 2 + iVar11;
                } while (param_1 < *(uint *)(iVar6 + 0x44));
              }
            }
            puVar10 = puVar10 + 0x16;
            iStack_20 = iStack_20 + -1;
          } while (iStack_20 != 0);
          *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
          return;
        }
      }
      *(ushort *)((int)piVar1 + 0x2e) = *(ushort *)((int)piVar1 + 0x2e) & 0xf000;
    }
  }
  return;
}



void FUN_00769b10(undefined4 param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x904) + 4))();
  puVar1[2] = param_1;
  puVar1[1] = 0;
  *puVar1 = *(undefined4 *)(in_ECX + 0x908);
  if (*(int *)(in_ECX + 0x908) != 0) {
    *(undefined4 **)(*(int *)(in_ECX + 0x908) + 4) = puVar1;
    *(int *)(in_ECX + 0x910) = *(int *)(in_ECX + 0x910) + 1;
    *(undefined4 **)(in_ECX + 0x908) = puVar1;
    return;
  }
  *(int *)(in_ECX + 0x910) = *(int *)(in_ECX + 0x910) + 1;
  *(undefined4 **)(in_ECX + 0x90c) = puVar1;
  *(undefined4 **)(in_ECX + 0x908) = puVar1;
  return;
}



void FUN_00769b60(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  
  if (param_1 == 0) {
    return;
  }
  puVar1 = *(undefined4 **)(param_1 + 0x1c);
  cVar2 = FUN_00777f10();
  *puVar1 = 0x1400000;
  FUN_00777f70(1);
  sVar3 = *(short *)(param_1 + 0x18);
  if (cVar2 == '\0') {
    (**(code **)(*(int *)puVar1[1] + 0x1c))(puVar1,0);
    puVar1[0xd] = 0;
LAB_00769ba8:
    sVar3 = 0xf;
  }
  else {
    cVar2 = (**(code **)(*(int *)puVar1[1] + 0x20))();
    if (cVar2 != '\0') goto LAB_00769ba8;
    if (sVar3 == 0) goto LAB_00769bc8;
  }
  FUN_00767ea0(param_1,sVar3);
LAB_00769bc8:
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}



void FUN_00769be0(void)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  FUN_00701700();
  *in_ECX = &PTR_FUN_00a88ea4;
  in_ECX[0x181] = &PTR_FUN_00a88a3c;
  in_ECX[0x182] = 0x25;
  in_ECX[0x184] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x183] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x182] * 4);
  in_ECX[0x181] = &PTR_FUN_00a88e04;
  in_ECX[0x189] = 0;
  in_ECX[0x219] = 0;
  in_ECX[0x21a] = 0;
  in_ECX[0x21b] = 0;
  in_ECX[0x21c] = 0;
  in_ECX[0x221] = &PTR_FUN_00a88a5c;
  in_ECX[0x222] = 0x25;
  in_ECX[0x224] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x223] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x222] * 4);
  in_ECX[0x221] = &PTR_FUN_00a88e24;
  in_ECX[0x227] = 0;
  in_ECX[0x230] = &PTR_FUN_00a88a7c;
  in_ECX[0x231] = 0x25;
  in_ECX[0x233] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x232] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x231] * 4);
  in_ECX[0x230] = &PTR_FUN_00a88e44;
  in_ECX[0x234] = &PTR_FUN_00a88a9c;
  in_ECX[0x235] = 0x25;
  in_ECX[0x237] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x236] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x235] * 4);
  in_ECX[0x234] = &PTR_FUN_00a88e64;
  in_ECX[0x238] = &PTR_FUN_00a88abc;
  in_ECX[0x239] = 0x25;
  in_ECX[0x23b] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x23a] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x239] * 4);
  in_ECX[0x238] = &PTR_FUN_00a88e84;
  in_ECX[0x23c] = 0;
  in_ECX[0x240] = 0;
  in_ECX[0x23e] = 0;
  in_ECX[0x23f] = 0;
  in_ECX[0x23d] = &PTR_FUN_00a88de4;
  in_ECX[0x244] = 0;
  in_ECX[0x242] = 0;
  in_ECX[0x243] = 0;
  in_ECX[0x241] = &PTR_FUN_00a88df4;
  in_ECX[0x245] = 0;
  in_ECX[0x246] = 0;
  in_ECX[0x247] = 0;
  in_ECX[0x248] = 0;
  in_ECX[0x249] = 0;
  in_ECX[0x24a] = 0;
  in_ECX[0x24b] = 0;
  in_ECX[0x24c] = 0;
  in_ECX[0x24d] = 0;
  in_ECX[0x24e] = 0;
  in_ECX[0x2a5] = 0;
  in_ECX[0x2a6] = &PTR__scalar_deleting_destructor__00a88afc;
  *(undefined2 *)(in_ECX + 0x2a8) = 0;
  *(undefined2 *)((int)in_ECX + 0xaa2) = 0;
  *(undefined2 *)(in_ECX + 0x2a9) = 0;
  in_ECX[0x2a7] = 0;
  *(undefined2 *)((int)in_ECX + 0xaa6) = 1;
  *(undefined2 *)(in_ECX + 0x2ac) = 0;
  *(undefined2 *)((int)in_ECX + 0xab6) = 1;
  *(undefined2 *)((int)in_ECX + 0xab2) = 0;
  *(undefined2 *)(in_ECX + 0x2ad) = 0;
  in_ECX[0x2ab] = 0;
  in_ECX[0x2aa] = &PTR__scalar_deleting_destructor__00a88b04;
  in_ECX[0x2ae] = &PTR__scalar_deleting_destructor__00a88b0c;
  *(undefined2 *)(in_ECX + 0x2b0) = 0;
  *(undefined2 *)((int)in_ECX + 0xac6) = 1;
  *(undefined2 *)((int)in_ECX + 0xac2) = 0;
  *(undefined2 *)(in_ECX + 0x2b1) = 0;
  in_ECX[0x2af] = 0;
  in_ECX[0x2b2] = &PTR__scalar_deleting_destructor__00a88b04;
  *(undefined2 *)(in_ECX + 0x2b4) = 0;
  *(undefined2 *)((int)in_ECX + 0xad6) = 1;
  *(undefined2 *)((int)in_ECX + 0xad2) = 0;
  *(undefined2 *)(in_ECX + 0x2b5) = 0;
  in_ECX[0x2b3] = 0;
  FUN_007641a0();
  return;
}



void FUN_00769f90(float *param_1)

{
  int in_ECX;
  
  *(uint *)(in_ECX + 0x5d4) =
       (((int)ROUND(*param_1 * 255.0) & 0xffU | 0xffffff00) << 8 |
       (int)ROUND(param_1[1] * 255.0) & 0xffU) << 8 | (int)ROUND(param_1[2] * 255.0) & 0xffU;
  return;
}



void FUN_0076a040(float *param_1)

{
  undefined2 uVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  int in_ECX;
  undefined1 local_4;
  
  local_4 = (undefined1)(int)ROUND(param_1[3] * 255.0);
  uVar3 = local_4;
  local_4 = (undefined1)(int)ROUND(*param_1 * 255.0);
  uVar1 = CONCAT11(uVar3,local_4);
  local_4 = (undefined1)(int)ROUND(param_1[1] * 255.0);
  uVar2 = CONCAT21(uVar1,local_4);
  local_4 = (undefined1)(int)ROUND(param_1[2] * 255.0);
  *(uint *)(in_ECX + 0x5d4) = CONCAT31(uVar2,local_4);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_0076a1c0(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11,int param_12,int param_13,int param_14
            )

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int *in_ECX;
  undefined4 unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  int local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined1 auStack_48c [4];
  int local_488;
  int iStack_484;
  int local_47c;
  undefined1 auStack_454 [512];
  char acStack_254 [592];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&uStack_4c0;
  in_ECX[0x296] = param_1;
  in_ECX[0x297] = param_2;
  in_ECX[0x298] = param_3;
  in_ECX[0x29c] = param_7;
  in_ECX[0x29d] = param_8;
  in_ECX[0x29e] = param_9;
  in_ECX[0x29f] = param_10;
  in_ECX[0x2a0] = param_11;
  local_4b8 = param_4;
  in_ECX[0x299] = param_4;
  in_ECX[0x29a] = param_5;
  in_ECX[0x29b] = param_6;
  in_ECX[0x2a1] = param_12;
  in_ECX[0x2a2] = param_13;
  in_ECX[0x2a3] = param_14;
  FUN_00763de0();
  in_ECX[0x16f] = param_6;
  in_ECX[0xee] = param_5;
  puVar1 = (uint *)(in_ECX + 0x171);
  in_ECX[0xed] = param_4;
  cVar2 = FUN_007623d0(param_7,in_ECX + 0x170,puVar1);
  if (cVar2 != '\0') {
    if ((param_3 & 0x40) != 0) {
      *puVar1 = *puVar1 | 2;
    }
    if ((param_3 & 0x20) != 0) {
      *puVar1 = *puVar1 | 4;
    }
    if ((uint)in_ECX[0x16f] < (uint)*(ushort *)(DAT_00b42160 + 0xe)) {
      iVar6 = *(int *)(*(int *)(DAT_00b42160 + 8) + in_ECX[0x16f] * 4);
    }
    else {
      iVar6 = 0;
    }
    in_ECX[0x173] = iVar6;
    if (iVar6 == 0) {
      _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Invalid Adapter",0xff);
      FUN_0060d0a0("NiDX9Renderer::Initialize> Invalid Adapter specified - FAILING\n");
      return 0;
    }
    if (in_ECX[0x170] == 1) {
      uVar3 = *(uint *)(iVar6 + 0x460);
    }
    else {
      uVar3 = *(uint *)(iVar6 + 0x464);
    }
    uVar3 = -(uint)(*(int *)(uVar3 + 4) != 0) & uVar3;
    in_ECX[0x174] = uVar3;
    if (uVar3 != 0) {
      _memset(&local_488,0,0x38);
      do {
        FUN_0060d0a0("NiDX9Renderer::Initialize> Attempting to create rendering device\n");
        if ((uint)in_ECX[0x16f] < (uint)*(ushort *)(DAT_00b42160 + 0xe)) {
          iVar6 = *(int *)(*(int *)(DAT_00b42160 + 8) + in_ECX[0x16f] * 4);
        }
        else {
          iVar6 = 0;
        }
        if (in_ECX[0x170] == 1) {
          iVar6 = *(int *)(iVar6 + 0x460);
        }
        else {
          iVar6 = *(int *)(iVar6 + 0x464);
        }
        if ((*(int *)(iVar6 + 4) == 0) || (iVar6 == 0)) {
          _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Requested device not valid",0xff);
          FUN_0060d0a0("NiDX9Renderer::Initialize> No device of specified type \n");
        }
        else {
          cVar2 = FUN_00761e60(in_ECX[0xed],param_1,param_2,param_3,param_12,param_8,param_9,
                               param_13,param_11,param_14,param_10,&local_488);
          iVar6 = local_47c;
          if (cVar2 != '\0') {
            DAT_00b420e6 = 0;
            param_13 = local_47c;
            uVar3 = 0;
            iVar4 = (**(code **)(*DAT_00b42154 + 0x10))(DAT_00b42154);
            if (iVar4 != 0) {
              do {
                (**(code **)(*DAT_00b42154 + 0x14))(DAT_00b42154,uVar3,0,auStack_454);
                iVar4 = 0x11;
                bVar11 = true;
                pcVar9 = acStack_254;
                pcVar10 = "NVIDIA NVPerfHUD";
                do {
                  if (iVar4 == 0) break;
                  iVar4 = iVar4 + -1;
                  bVar11 = *pcVar9 == *pcVar10;
                  pcVar9 = pcVar9 + 1;
                  pcVar10 = pcVar10 + 1;
                } while (bVar11);
                if (bVar11) {
                  in_ECX[0x16f] = uVar3;
                  in_ECX[0x170] = 2;
                  DAT_00b420e6 = 1;
                  break;
                }
                uVar3 = uVar3 + 1;
                uVar5 = (**(code **)(*DAT_00b42154 + 0x10))(DAT_00b42154);
              } while (uVar3 < uVar5);
            }
            iVar4 = (**(code **)(*DAT_00b42154 + 0x40))
                              (DAT_00b42154,in_ECX[0x16f],in_ECX[0x170],in_ECX[0xee],in_ECX[0x171],
                               auStack_48c,in_ECX + 0xa0);
            *(bool *)(in_ECX + 0x2a4) = (uint)(iStack_484 * 100) / (uint)(local_488 * 100) != 0x4b;
            if (-1 < iVar4) {
LAB_0076a632:
              if (in_ECX[0xa0] == 0) {
                _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not create hardware device",
                           0xff);
                FUN_0060d0a0(
                            "NiDX9Renderer::Initialize> Could not create device of any type - FAILING\n"
                            );
                return 0;
              }
              cVar2 = FUN_00762110(&local_488);
              if (cVar2 == '\0') {
                return 0;
              }
              uVar3 = in_ECX[0x171];
              *(byte *)((int)in_ECX + 0x5c9) = (byte)(uVar3 >> 7) & 1;
              *(byte *)(in_ECX + 0x172) = ~(byte)(uVar3 >> 6) & 1;
              uStack_4bc = 0;
              uStack_4c0 = 0;
              iVar4 = FUN_0076df70(in_ECX[0xa0],&local_488,&uStack_4bc);
              FUN_0076e0b0(in_ECX[0xa0],&uStack_4c0);
              piVar7 = (int *)FUN_009a2130(1);
              in_ECX[0x21e] = (int)piVar7;
              (**(code **)(*piVar7 + 0x68))(uStack_4bc,0);
              (**(code **)(*(int *)in_ECX[0x21e] + 0x6c))(unaff_EBP);
              iVar6 = in_ECX[0x21e];
              if (iVar6 != 0) {
                InterlockedIncrement((LONG *)(iVar6 + 4));
              }
              FUN_00768980(local_4b8,iVar6);
              in_ECX[0x21f] = in_ECX[0x21e];
              in_ECX[0x220] = in_ECX[0x21e];
              cVar2 = FUN_00768c10();
              if (cVar2 == '\0') {
                FUN_0060d0a0(
                            "NiDX9Renderer::Initialize> Could not initialize texture defaults - FAILING\n"
                            );
                return 0;
              }
              iVar6 = FUN_0077bb00();
              in_ECX[0x22b] = iVar6;
              FUN_00778f60();
              iVar6 = FUN_00401f00(0x70);
              if (iVar6 == 0) {
                uVar8 = 0;
              }
              else {
                uVar8 = FUN_0076d040();
              }
              FUN_0075fa90(uVar8);
              (**(code **)(*(int *)in_ECX[0x2a5] + 0x24))();
              iVar6 = FUN_00401f00(0x100);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_00777b40(in_ECX[0xa0]);
              }
              in_ECX[0x22c] = iVar6;
              iVar6 = FUN_00401f00(0x4c);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_007787e0(in_ECX[0xa0]);
              }
              in_ECX[0x22d] = iVar6;
              iVar6 = FUN_00401f00(0x10);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_0077abf0(in_ECX);
              }
              in_ECX[0x22e] = iVar6;
              iVar6 = FUN_00778cf0(in_ECX[0xa0],in_ECX[0x22c]);
              in_ECX[0x228] = iVar6;
              uVar3 = (**(code **)(*in_ECX + 0x54))();
              FUN_00778c80(uVar3 >> 1 & 0xffffff01);
              iVar6 = (**(code **)(*(int *)in_ECX[0x228] + 4))(1);
              in_ECX[0x229] = iVar6;
              iVar6 = (**(code **)(*(int *)in_ECX[0x228] + 4))(2);
              in_ECX[0x22a] = iVar6;
              iVar6 = FUN_00401f00(0x240);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
              else {
                iVar6 = FUN_007766e0(in_ECX[0x22b],in_ECX[0xa0]);
              }
              in_ECX[0x22f] = iVar6;
              if (*(int *)(iVar4 + 0x24) != 0) {
                (**(code **)(*(int *)in_ECX[0x22b] + 0x38))(1);
              }
              FUN_0070de60(0);
              uStack_4a4 = 0xbf800000;
              uStack_4b0 = 0xbf800000;
              uStack_4a8 = 0x3f800000;
              uStack_4ac = 0x3f800000;
              uStack_4a0 = 0x3dcccccd;
              uStack_49c = 0x3f800000;
              uStack_4c0 = 0;
              uStack_4b4 = 0;
              uStack_4bc = 0x3f800000;
              local_4b8 = 0x3f800000;
              (**(code **)(*in_ECX + 0x140))
                        (&DAT_00b3f9a8,&DAT_00b258d0,&DAT_00b258dc,&DAT_00b258e8,&uStack_4b0,
                         &uStack_4c0);
              return 1;
            }
            if (iVar6 != local_47c) {
              FUN_0060d0a0(
                          "NiDX9Renderer::Initialize> Specified number of backbuffers was invalid - trying fewer backbuffers\n"
                          );
              iVar6 = (**(code **)(*DAT_00b42154 + 0x40))
                                (DAT_00b42154,in_ECX[0x16f],in_ECX[0x170],in_ECX[0xee],in_ECX[0x171]
                                 ,&local_488,in_ECX + 0xa0);
              if (-1 < iVar6) goto LAB_0076a632;
            }
          }
        }
        if (param_7 == 4) {
          _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not create reference device",0xff);
          FUN_0060d0a0(
                      "NiDX9Renderer::Initialize> Could not create requested reference device - FAILING\n"
                      );
          return 0;
        }
        param_7 = param_7 + 1;
        if (param_7 == 4) {
          FUN_0060d0a0(
                      "NiDX9Renderer::Initialize> Could not create hardware device of any type - FAILING\n"
                      );
          return 0;
        }
        FUN_0060d0a0(
                    "NiDX9Renderer::Initialize> Could not create device of desired type - trying next-lower device type\n"
                    );
        cVar2 = FUN_007623d0(param_7,in_ECX + 0x170,in_ECX + 0x171);
        if (cVar2 == '\0') {
          FUN_00761a90("Creation failed: Invalid 3D device type");
          FUN_0060d0a0("NiDX9Renderer::Initialize> Invalid device ID specified - FAILING\n");
          return 0;
        }
      } while( true );
    }
  }
  _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Invalid 3D device type",0xff);
  FUN_0060d0a0("NiDX9Renderer::Initialize> Invalid device ID specified - FAILING\n");
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0076a970(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  code *pcVar3;
  byte bVar4;
  int *piVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  undefined *puVar10;
  LONG LVar11;
  int iVar12;
  int *in_ECX;
  undefined4 unaff_EBX;
  uint uVar13;
  uint local_10;
  int *local_c;
  undefined4 *local_8;
  uint local_4;
  
  FUN_00776b10();
  FUN_007786c0();
  FUN_00777a50();
  FUN_0076d430(in_ECX[0xa0],1);
  FUN_0076d430(in_ECX[0xa0],2);
  FUN_0076d430(in_ECX[0xa0],3);
  uVar7 = 0;
  if (in_ECX[0x222] != 0) {
    piVar9 = (int *)in_ECX[0x223];
    do {
      if (*piVar9 != 0) {
        local_10 = ((int *)in_ECX[0x223])[uVar7];
        goto joined_r0x0076a9f6;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x222]);
  }
  local_10 = 0;
joined_r0x0076a9f6:
  while (local_10 != 0) {
    local_c = (int *)0x0;
    FUN_007b2600(&local_10,&local_4,&local_c);
    piVar5 = local_c;
    iVar8 = (**(code **)(*local_c + 0x70))(0);
    piVar9 = *(int **)(iVar8 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      for (puVar10 = (undefined *)(**(code **)(*piVar9 + 0x10))(); puVar10 != (undefined *)0x0;
          puVar10 = *(undefined **)(puVar10 + 4)) {
        if (puVar10 == &DAT_00b4265c) {
          bVar4 = 1;
          goto LAB_0076aa64;
        }
      }
      bVar4 = 0;
LAB_0076aa64:
      piVar9 = (int *)(-(uint)bVar4 & (uint)piVar9);
    }
    (**(code **)(*piVar9 + 0x2c))();
    iVar8 = (**(code **)(*piVar5 + 0x74))();
    if ((iVar8 != 0) && (piVar9 = *(int **)(iVar8 + 0x10), piVar9 != (int *)0x0)) {
      for (puVar10 = (undefined *)(**(code **)(*piVar9 + 0x10))(); puVar10 != (undefined *)0x0;
          puVar10 = *(undefined **)(puVar10 + 4)) {
        if (puVar10 == &DAT_00b4263c) {
          bVar4 = 1;
          goto LAB_0076aaa8;
        }
      }
      bVar4 = 0;
LAB_0076aaa8:
      if ((int *)(-(uint)bVar4 & (uint)piVar9) != (int *)0x0) {
        (**(code **)(*(int *)(-(uint)bVar4 & (uint)piVar9) + 0x2c))();
      }
    }
    LVar11 = InterlockedDecrement(piVar5 + 1);
    if (LVar11 == 0) {
      (**(code **)*piVar5)(1);
    }
  }
  uVar7 = 0;
  if (in_ECX[0x231] != 0) {
    piVar9 = (int *)in_ECX[0x232];
    do {
      if (*piVar9 != 0) {
        local_10 = ((int *)in_ECX[0x232])[uVar7];
        goto joined_r0x0076ab0a;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x231]);
  }
  local_10 = 0;
joined_r0x0076ab0a:
  while (local_10 != 0) {
    FUN_00452600(&local_10,&local_c,&local_4);
    piVar9 = local_c;
    (**(code **)(*in_ECX + 0xcc))(local_c);
    FUN_00452570(piVar9,0);
  }
  uVar7 = 0;
  if (in_ECX[0x235] != 0) {
    piVar9 = (int *)in_ECX[0x236];
    do {
      if (*piVar9 != 0) {
        local_10 = ((int *)in_ECX[0x236])[uVar7];
        goto joined_r0x0076ab7b;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x235]);
  }
  local_10 = 0;
joined_r0x0076ab7b:
  while (local_10 != 0) {
    FUN_00452600(&local_10,&local_c,&local_4);
    piVar9 = local_c;
    (**(code **)(*in_ECX + 0xcc))(local_c);
    FUN_00452570(piVar9,0);
  }
  uVar7 = 0;
  if (in_ECX[0x239] != 0) {
    piVar9 = (int *)in_ECX[0x23a];
    do {
      if (*piVar9 != 0) {
        local_10 = ((int *)in_ECX[0x23a])[uVar7];
        goto joined_r0x0076abeb;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x239]);
  }
  local_10 = 0;
joined_r0x0076abeb:
  while (local_10 != 0) {
    FUN_00452600(&local_10,&local_c,&local_8);
    piVar9 = local_c;
    local_c[9] = 0;
    if (local_8 != (undefined4 *)0x0) {
      (**(code **)*local_8)(1);
    }
    FUN_00452570(piVar9,0);
  }
  FUN_0076db00();
  puVar2 = (undefined4 *)in_ECX[0x242];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x58))();
  }
  (*(code *)**(undefined4 **)in_ECX[0x22a])();
  uVar13 = (uint)*(ushort *)((int)in_ECX + 0xaa2);
  uVar7 = 0;
  local_4 = uVar13;
  if (uVar13 != 0) {
    do {
      pcVar3 = *(code **)(in_ECX[0x2a7] + uVar7 * 4);
      if ((pcVar3 != (code *)0x0) &&
         (cVar6 = (*pcVar3)(1,*(undefined4 *)(in_ECX[0x2ab] + uVar7 * 4)), cVar6 == '\0')) {
        FUN_0060d0a0(
                    "NiDX9Renderer::Recreate> Reset notification function failed before device reset - FAILING\n"
                    );
        return 0;
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar13);
  }
  iVar8 = (**(code **)(*(int *)in_ECX[0x21e] + 0x70))(0);
  piVar9 = *(int **)(iVar8 + 0x10);
  if (piVar9 == (int *)0x0) {
    uVar7 = 0;
  }
  else {
    for (puVar10 = (undefined *)(**(code **)(*piVar9 + 0x10))(); puVar10 != (undefined *)0x0;
        puVar10 = *(undefined **)(puVar10 + 4)) {
      if (puVar10 == &DAT_00b4265c) {
        bVar4 = 1;
        goto LAB_0076ad14;
      }
    }
    bVar4 = 0;
LAB_0076ad14:
    uVar7 = -(uint)bVar4 & (uint)piVar9;
  }
  iVar8 = (**(code **)(*(int *)in_ECX[0xa0] + 0x40))((int *)in_ECX[0xa0],uVar7 + 0x14);
  if (iVar8 < 0) {
    return 0;
  }
  in_ECX[0x1bb] = in_ECX[0x1bb] + 1;
  uVar7 = 0;
  if (in_ECX[0x222] != 0) {
    piVar9 = (int *)in_ECX[0x223];
    do {
      if (*piVar9 != 0) {
        iVar8 = ((int *)in_ECX[0x223])[uVar7];
        goto joined_r0x0076ad66;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x222]);
  }
  iVar8 = 0;
joined_r0x0076ad66:
  while (iVar8 != 0) {
    FUN_007b2600(&stack0xffffffe4,&stack0xffffffec,&stack0xffffffe8);
    iVar12 = (*(code *)_DAT_00000000[0x1c])(0);
    piVar9 = *(int **)(iVar12 + 0x10);
    if (piVar9 == (int *)0x0) {
      piVar9 = (int *)0x0;
    }
    else {
      for (puVar10 = (undefined *)(**(code **)(*piVar9 + 0x10))(); puVar10 != (undefined *)0x0;
          puVar10 = *(undefined **)(puVar10 + 4)) {
        if (puVar10 == &DAT_00b4265c) {
          bVar4 = 1;
          goto LAB_0076add4;
        }
      }
      bVar4 = 0;
LAB_0076add4:
      piVar9 = (int *)(-(uint)bVar4 & (uint)piVar9);
    }
    (**(code **)(*piVar9 + 0x30))(in_ECX[0xa0]);
    piVar9 = (int *)(*(code *)_DAT_00000000[0x21])();
    if (piVar9 != (int *)0x0) {
      for (puVar10 = (undefined *)(**(code **)(*piVar9 + 0x10))(); puVar10 != (undefined *)0x0;
          puVar10 = *(undefined **)(puVar10 + 4)) {
        if (puVar10 == &DAT_00b4263c) {
          bVar4 = 1;
          goto LAB_0076ae20;
        }
      }
      bVar4 = 0;
LAB_0076ae20:
      if ((int *)(-(uint)bVar4 & (uint)piVar9) != (int *)0x0) {
        (**(code **)(*(int *)(-(uint)bVar4 & (uint)piVar9) + 0x30))(in_ECX[0xa0]);
      }
    }
    LVar11 = InterlockedDecrement((LONG *)&DAT_00000004);
    if (LVar11 == 0) {
      (*(code *)*_DAT_00000000)(1);
    }
  }
  in_ECX[0x21f] = in_ECX[0x220];
  cVar6 = FUN_00768c10();
  if (cVar6 == '\0') {
    FUN_0060d0a0("NiDX9Renderer::Recreate> Could not initialize texture defaults - FAILING\n");
    return 0;
  }
  uVar7 = 0;
  if (in_ECX[0x231] != 0) {
    piVar9 = (int *)in_ECX[0x232];
    do {
      if (*piVar9 != 0) {
        iVar8 = ((int *)in_ECX[0x232])[uVar7];
        goto joined_r0x0076aec1;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x231]);
  }
  iVar8 = 0;
joined_r0x0076aec1:
  while (iVar8 != 0) {
    FUN_00452600(&stack0xffffffe4,&stack0xffffffec,&stack0xffffffe8);
    (**(code **)(*in_ECX + 0x108))(unaff_EBX);
  }
  uVar7 = 0;
  if (in_ECX[0x235] != 0) {
    piVar9 = (int *)in_ECX[0x236];
    do {
      if (*piVar9 != 0) {
        iVar8 = ((int *)in_ECX[0x236])[uVar7];
        goto joined_r0x0076af2a;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x235]);
  }
  iVar8 = 0;
joined_r0x0076af2a:
  while (iVar8 != 0) {
    FUN_00452600(&stack0xffffffe4,&stack0xffffffec,&stack0xffffffe8);
    (**(code **)(*in_ECX + 0x110))(unaff_EBX);
  }
  uVar7 = 0;
  if (in_ECX[0x239] != 0) {
    piVar9 = (int *)in_ECX[0x23a];
    do {
      if (*piVar9 != 0) {
        iVar8 = ((int *)in_ECX[0x23a])[uVar7];
        goto joined_r0x0076af90;
      }
      uVar7 = uVar7 + 1;
      piVar9 = piVar9 + 1;
    } while (uVar7 < (uint)in_ECX[0x239]);
  }
  iVar8 = 0;
joined_r0x0076af90:
  while (iVar8 != 0) {
    FUN_00452600(&stack0xffffffe4,&stack0xffffffec,&stack0xffffffe8);
    (**(code **)(*in_ECX + 0x114))(unaff_EBX);
  }
  FUN_0076db60(in_ECX[0xa0]);
  puVar2 = (undefined4 *)in_ECX[0x242];
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x5c))();
  }
  (**(code **)(*(int *)in_ECX[0x22b] + 0x104))();
  FUN_00776240();
  uVar7 = local_10;
  uVar13 = 0;
  if (local_10 != 0) {
    do {
      pcVar3 = *(code **)(in_ECX[0x2a7] + uVar13 * 4);
      if ((pcVar3 != (code *)0x0) &&
         (cVar6 = (*pcVar3)(0,*(undefined4 *)(in_ECX[0x2ab] + uVar13 * 4)), cVar6 == '\0')) {
        FUN_0060d0a0(
                    "NiDX9Renderer::Recreate> Reset notification function failed after device reset - FAILING\n"
                    );
        return 0;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar7);
  }
  return 1;
}



undefined4 FUN_0076b090(undefined4 param_1)

{
  undefined4 *_Src;
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x878) + 0x70))(0);
  piVar1 = *(int **)(iVar4 + 0x10);
  if (piVar1 == (int *)0x0) {
    uVar5 = 0;
  }
  else {
    for (puVar6 = (undefined *)(**(code **)(*piVar1 + 0x10))(); puVar6 != (undefined *)0x0;
        puVar6 = *(undefined **)(puVar6 + 4)) {
      if (puVar6 == &DAT_00b4265c) {
        bVar2 = 1;
        goto LAB_0076b0d0;
      }
    }
    bVar2 = 0;
LAB_0076b0d0:
    uVar5 = -(uint)bVar2 & (uint)piVar1;
  }
  _Src = (undefined4 *)(uVar5 + 0x14);
  _memcpy(&stack0xffffffc4,_Src,0x38);
  *_Src = unaff_retaddr;
  *(undefined4 *)(uVar5 + 0x18) = param_1;
  cVar3 = FUN_0076a970();
  if (cVar3 != '\0') {
    return 2;
  }
  FUN_0060d0a0(
              "NiDX9Renderer::Recreate> Could not reset device to desired parameters - trying to recover original values\n"
              );
  _memcpy(_Src,&stack0xffffffc4,0x38);
  cVar3 = FUN_0076a970();
  if (cVar3 == '\0') {
    FUN_0060d0a0("NiDX9Renderer::Recreate> Could not recover original presentation parameters\n");
    return 0;
  }
  return 1;
}



void FUN_0076b160(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 auStack_3c [9];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  int iStack_4;
  
  if (((*(char *)(in_ECX + 0x6f0) == '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0x10) != 0)) {
    local_4c = *(undefined4 *)(in_ECX + 0xc);
    local_48 = *(undefined4 *)(in_ECX + 0x10);
    if (*(int *)(in_ECX + 0x89c) == 0) {
      iVar1 = FUN_00401f00(0x30);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = FUN_007319e0();
      }
      FUN_0075fa90(uVar2);
      iVar1 = FUN_00401f00(0x1c);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00405990();
      }
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xffd7 | 0x10;
      FUN_00707470(iVar1);
      iVar1 = FUN_00401f00(0x1c);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0047f920();
      }
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfeed | 0xed;
      FUN_00707470(iVar1);
      iVar1 = FUN_00401f00(0x1c);
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_00405a00();
      }
      *(ushort *)(iVar1 + 0x18) = *(ushort *)(iVar1 + 0x18) & 0xfffc;
      FUN_00707470(iVar1);
    }
    FUN_00707470(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(in_ECX + 0x89c);
    *(undefined4 *)(in_ECX + 0x10) = 0;
    (**(code **)(**(int **)(in_ECX + 0x8a0) + 0x10))(*(undefined4 *)(in_ECX + 0x8a4),param_1);
    FUN_00769b60(param_1);
    puVar3 = &DAT_00b26dc4;
    puVar4 = auStack_3c;
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    uStack_c = 0x3f800000;
    uStack_18 = DAT_00b3f9a8;
    uStack_14 = DAT_00b3f9ac;
    uStack_10 = DAT_00b3f9b0;
    FUN_007672f0(0,0,0,auStack_3c,&local_4c,*(undefined4 *)(iStack_4 + 0x1c));
    FUN_00707470(DAT_00b3f974);
    *(undefined4 *)(in_ECX + 0xc) = unaff_ESI;
    *(undefined4 *)(in_ECX + 0x10) = unaff_EBX;
  }
  return;
}



void FUN_0076b320(void)

{
  FUN_007790f0(0);
  FUN_00776690(&stack0x00000004);
  return;
}



void FUN_0076b350(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  FUN_007790f0(0);
  FUN_00776690(&param_1);
  return;
}



void FUN_0076b380(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 *puStack_4;
  
  iVar1 = in_ECX[0x244];
  puStack_4 = in_ECX;
  do {
    if (iVar1 == 0) {
      return;
    }
    piVar2 = *(int **)(in_ECX[0x242] + 8);
    (**(code **)(*piVar2 + 0x60))();
    FUN_007790f0(0);
    puVar3 = (undefined4 *)in_ECX[0x242];
    do {
      puStack_4 = puVar3;
      if (puStack_4 == (undefined4 *)0x0) {
        puStack_4 = (undefined4 *)0x0;
        break;
      }
      puVar3 = (undefined4 *)*puStack_4;
    } while (piVar2 != (int *)puStack_4[2]);
    if (puStack_4 != (undefined4 *)0x0) {
      FUN_007aa860(&puStack_4);
    }
    iVar1 = in_ECX[0x244];
  } while( true );
}



char FUN_0076b3f0(void)

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  iVar4 = (**(code **)(**(int **)(in_ECX + 0x280) + 0xc))(*(int **)(in_ECX + 0x280));
  if (iVar4 == -0x7789f797) {
    cVar3 = FUN_0076a970();
    *(bool *)(in_ECX + 0x6f0) = cVar3 == '\0';
    return cVar3;
  }
  if (iVar4 == -0x7789f798) {
    if (*(char *)(in_ECX + 0x6f0) == '\0') {
      uVar1 = *(ushort *)(in_ECX + 0xac2);
      uVar5 = 0;
      *(undefined1 *)(in_ECX + 0x6f0) = 1;
      if (uVar1 != 0) {
        while( true ) {
          pcVar2 = *(code **)(*(int *)(in_ECX + 0xabc) + uVar5 * 4);
          if ((pcVar2 != (code *)0x0) &&
             (cVar3 = (*pcVar2)(*(undefined4 *)(*(int *)(in_ECX + 0xacc) + uVar5 * 4)),
             cVar3 == '\0')) break;
          uVar5 = uVar5 + 1;
          if (uVar1 <= uVar5) {
            return '\0';
          }
        }
        FUN_0060d0a0("NiDX9Renderer::LostDeviceRestore> Lost device notification function failed\n")
        ;
        return '\0';
      }
    }
    return '\0';
  }
  return '\x01';
}



void FUN_0076b490(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88e04;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a88a3c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076b4d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88e24;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a88a5c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076b510(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88e44;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a88a7c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076b550(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88e64;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a88a9c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076b590(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a88e84;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a88abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076b5d0(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *in_ECX;
  undefined4 *puVar6;
  int *piVar7;
  uint unaff_EBX;
  int iVar8;
  uint uVar9;
  int *local_c;
  int iStack_8;
  undefined1 auStack_4 [4];
  
  *in_ECX = &PTR_FUN_00a88ea4;
  if (in_ECX[0xa0] != 0) {
    if ((in_ECX[0x22b] != 0) && (uVar9 = 0, DAT_00b28cb0 != 0)) {
      do {
        (**(code **)(*(int *)in_ECX[0x22b] + 0xe0))(uVar9,0);
        uVar9 = uVar9 + 1;
      } while (uVar9 < DAT_00b28cb0);
    }
    uVar9 = 0;
    if (in_ECX[0x1b7] != 0) {
      do {
        (**(code **)(*(int *)in_ECX[0xa0] + 400))((int *)in_ECX[0xa0],uVar9,0,0,0);
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)in_ECX[0x1b7]);
    }
    (**(code **)(*(int *)in_ECX[0xa0] + 0x1a0))((int *)in_ECX[0xa0],0);
  }
  piVar3 = in_ECX + 0x219;
  puVar6 = in_ECX + 0x1bd;
  local_c = (int *)0x4;
  do {
    iVar8 = 0x16;
    do {
      FUN_00401f20(*puVar6);
      puVar6 = puVar6 + 1;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *piVar3 = 0;
    }
    piVar3 = piVar3 + 1;
    local_c = (int *)((int)local_c + -1);
  } while (local_c != (int *)0x0);
  iVar8 = in_ECX[0x185];
  iVar4 = DAT_00b42164;
  while (DAT_00b42164 = iVar8, DAT_00b42164 != 0) {
    iVar8 = *(int *)(DAT_00b42164 + 0xc);
    *(int *)(DAT_00b42164 + 0xc) = iVar4;
    iVar4 = DAT_00b42164;
  }
  DAT_00b42164 = iVar4;
  in_ECX[0x185] = 0;
  in_ECX[0x186] = 0;
  local_c = (int *)0x0;
  iVar8 = DAT_00b42164;
  while (iVar8 != 0) {
    iVar4 = *(int *)(iVar8 + 0xc);
    FUN_00401f20(iVar8);
    iVar8 = iVar4;
  }
  DAT_00b42164 = 0;
  uVar9 = 0;
  if (in_ECX[0x182] != 0) {
    piVar3 = (int *)in_ECX[0x183];
    do {
      if (*piVar3 != 0) {
        piVar3 = (int *)((int *)in_ECX[0x183])[uVar9];
        goto joined_r0x0076b744;
      }
      uVar9 = uVar9 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar9 < (uint)in_ECX[0x182]);
  }
  piVar3 = (int *)0x0;
joined_r0x0076b744:
  while (piVar3 != (int *)0x0) {
    iVar8 = piVar3[2];
    piVar7 = (int *)*piVar3;
    if ((int *)*piVar3 == (int *)0x0) {
      iVar4 = (**(code **)(in_ECX[0x181] + 4))(piVar3[1]);
      uVar9 = iVar4 + 1;
      if (uVar9 < (uint)in_ECX[0x182]) {
        puVar6 = (undefined4 *)(in_ECX[0x183] + uVar9 * 4);
        do {
          piVar7 = (int *)*puVar6;
          if ((int *)*puVar6 != (int *)0x0) goto joined_r0x0076b794;
          uVar9 = uVar9 + 1;
          puVar6 = puVar6 + 1;
        } while (uVar9 < (uint)in_ECX[0x182]);
      }
      piVar7 = (int *)0x0;
    }
joined_r0x0076b794:
    while (piVar3 = piVar7, iVar8 != 0) {
      iVar4 = *(int *)(iVar8 + 0x20);
      FUN_00401f20(iVar8);
      iVar8 = iVar4;
      piVar7 = piVar3;
    }
  }
  FUN_0076b380();
  FUN_00779010();
  FUN_0076db00();
  FUN_007c2a40();
  FUN_007c2a40();
  FUN_007c2a40();
  FUN_00774250();
  uVar9 = 0;
  piVar3 = local_c;
  if (in_ECX[0x222] != 0) {
    piVar7 = (int *)in_ECX[0x223];
    do {
      if (*piVar7 != 0) {
        iStack_8 = ((int *)in_ECX[0x223])[uVar9];
        goto joined_r0x0076b81b;
      }
      uVar9 = uVar9 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar9 < (uint)in_ECX[0x222]);
  }
  iStack_8 = 0;
joined_r0x0076b81b:
  while (local_c = piVar3, iStack_8 != 0) {
    local_c = (int *)0x0;
    FUN_007b2600(&iStack_8,auStack_4,&local_c);
    piVar7 = local_c;
    piVar3 = (int *)0x0;
    if (local_c != (int *)0x0) {
      iVar8 = *local_c;
      uVar9 = 0;
      local_c = (int *)0x0;
      iVar8 = (**(code **)(iVar8 + 100))();
      if (iVar8 != 0) {
        do {
          iVar8 = (**(code **)(*piVar7 + 0x70))(uVar9);
          if ((iVar8 != 0) && (puVar6 = *(undefined4 **)(iVar8 + 0x10), puVar6 != (undefined4 *)0x0)
             ) {
            LVar2 = InterlockedDecrement(puVar6 + 1);
            if ((LVar2 == 0) && (puVar6 != (undefined4 *)0x0)) {
              (**(code **)*puVar6)(1);
            }
            *(undefined4 *)(iVar8 + 0x10) = 0;
          }
          uVar9 = unaff_EBX + 1;
          uVar5 = (**(code **)(*piVar7 + 100))();
          unaff_EBX = uVar9;
        } while (uVar9 < uVar5);
      }
      iVar8 = (**(code **)(*piVar7 + 0x74))();
      if ((iVar8 != 0) && (puVar6 = *(undefined4 **)(iVar8 + 0x10), puVar6 != (undefined4 *)0x0)) {
        LVar2 = InterlockedDecrement(puVar6 + 1);
        if ((LVar2 == 0) && (puVar6 != (undefined4 *)0x0)) {
          (**(code **)*puVar6)(1);
        }
        *(undefined4 *)(iVar8 + 0x10) = 0;
      }
      LVar2 = InterlockedDecrement(piVar7 + 1);
      piVar3 = local_c;
      if (LVar2 == 0) {
        (**(code **)*piVar7)(1);
        piVar3 = local_c;
      }
    }
  }
  FUN_007c2a40();
  puVar6 = (undefined4 *)in_ECX[0x227];
  if (puVar6 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar6 + 1);
    if ((LVar2 == 0) && (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    in_ECX[0x227] = 0;
  }
  if ((undefined4 *)in_ECX[0x22c] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x22c])(1);
  }
  in_ECX[0x22c] = 0;
  if ((undefined4 *)in_ECX[0x22d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x22d])(1);
    in_ECX[0x22d] = 0;
  }
  if ((int *)in_ECX[0x228] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x228] + 8))(in_ECX[0x229]);
    (**(code **)(*(int *)in_ECX[0x228] + 8))(in_ECX[0x22a]);
    if ((undefined4 *)in_ECX[0x228] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x228])(1);
    }
    in_ECX[0x228] = 0;
  }
  if ((undefined4 *)in_ECX[0x22b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x22b])(1);
  }
  in_ECX[0x22b] = 0;
  if ((undefined4 *)in_ECX[0x22e] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x22e])(1);
  }
  iVar8 = in_ECX[0x22f];
  in_ECX[0x22e] = 0;
  if (iVar8 != 0) {
    FUN_00776780();
    FUN_00401f20(iVar8);
  }
  in_ECX[0x22f] = 0;
  uVar9 = 0;
  do {
    puVar6 = *(undefined4 **)((int)&DAT_00b42170 + uVar9);
    if (puVar6 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar6 + 1);
      if ((LVar2 == 0) && (puVar6 != (undefined4 *)0x0)) {
        (**(code **)*puVar6)(1);
      }
      *(undefined4 *)((int)&DAT_00b42170 + uVar9) = 0;
    }
    uVar9 = uVar9 + 4;
  } while (uVar9 < 0x400);
  piVar3 = (int *)in_ECX[0xa0];
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
    in_ECX[0xa0] = 0;
  }
  FUN_00401f20(in_ECX[0x290]);
  FUN_00401f20(in_ECX[0x291]);
  FUN_00401f20(in_ECX[0x292]);
  FUN_00401f20(in_ECX[0x294]);
  FUN_007640c0();
  FUN_00764130();
  in_ECX[0x2b2] = &PTR__scalar_deleting_destructor__00a88b04;
  FUN_00401f20(in_ECX[0x2b3]);
  in_ECX[0x2ae] = &PTR__scalar_deleting_destructor__00a88b0c;
  FUN_00401f20(in_ECX[0x2af]);
  in_ECX[0x2aa] = &PTR__scalar_deleting_destructor__00a88b04;
  FUN_00401f20(in_ECX[0x2ab]);
  in_ECX[0x2a6] = &PTR__scalar_deleting_destructor__00a88afc;
  FUN_00401f20(in_ECX[0x2a7]);
  puVar6 = (undefined4 *)in_ECX[0x2a5];
  if (((puVar6 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar6 + 1), LVar2 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  piVar3 = in_ECX + 0x241;
  *piVar3 = (int)&PTR_FUN_00a88b24;
  puVar6 = (undefined4 *)in_ECX[0x242];
  while (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar6;
    (**(code **)(*piVar3 + 8))(puVar6);
    puVar6 = puVar1;
  }
  in_ECX[0x244] = 0;
  in_ECX[0x242] = 0;
  in_ECX[0x243] = 0;
  *piVar3 = (int)&PTR_LAB_00a88aec;
  piVar3 = in_ECX + 0x23d;
  *piVar3 = (int)&PTR_FUN_00a88b14;
  puVar6 = (undefined4 *)in_ECX[0x23e];
  while (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar6;
    (**(code **)(*piVar3 + 8))(puVar6);
    puVar6 = puVar1;
  }
  in_ECX[0x240] = 0;
  in_ECX[0x23e] = 0;
  in_ECX[0x23f] = 0;
  *piVar3 = (int)&PTR_LAB_00a88adc;
  puVar6 = (undefined4 *)in_ECX[0x23c];
  if (((puVar6 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar6 + 1), LVar2 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  in_ECX[0x238] = &PTR_FUN_00a88e84;
  FUN_007c2a40();
  in_ECX[0x238] = &PTR_FUN_00a88abc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[0x23a]);
  in_ECX[0x234] = &PTR_FUN_00a88e64;
  FUN_007c2a40();
  in_ECX[0x234] = &PTR_FUN_00a88a9c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[0x236]);
  in_ECX[0x230] = &PTR_FUN_00a88e44;
  FUN_007c2a40();
  in_ECX[0x230] = &PTR_FUN_00a88a7c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[0x232]);
  puVar6 = (undefined4 *)in_ECX[0x227];
  if (((puVar6 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar6 + 1), LVar2 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  in_ECX[0x221] = &PTR_FUN_00a88e24;
  FUN_007c2a40();
  in_ECX[0x221] = &PTR_FUN_00a88a5c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[0x223]);
  puVar6 = in_ECX + 0x21d;
  iStack_8 = 3;
  do {
    puVar1 = (undefined4 *)puVar6[-1];
    puVar6 = puVar6 + -1;
    if (((puVar1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    iStack_8 = iStack_8 + -1;
  } while (-1 < iStack_8);
  puVar6 = (undefined4 *)in_ECX[0x189];
  if (((puVar6 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar6 + 1), LVar2 == 0)) &&
     (puVar6 != (undefined4 *)0x0)) {
    (**(code **)*puVar6)(1);
  }
  in_ECX[0x181] = &PTR_FUN_00a88e04;
  FUN_007c2a40();
  in_ECX[0x181] = &PTR_FUN_00a88a3c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[0x183]);
  FUN_00701790();
  return;
}



undefined4 *
FUN_0076bd40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
            undefined4 param_13,undefined4 param_14)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00761df0();
  if (iVar2 == -1) {
    _strncpy_s(&DAT_00b3f828,0x100,"Creation failed: Could not initialize DirectX9",0xff);
    FUN_0060d0a0("NiDX9Renderer::Create> Invalid device ID specified - FAILING\n");
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_00401f00(0xb00);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_00769be0();
  }
  cVar1 = FUN_0076a1c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       param_10,param_11,param_12,param_13,param_14);
  if (cVar1 == '\0') {
    if (puVar3 != (undefined4 *)0x0) {
      (**(code **)*puVar3)(1);
    }
    puVar3 = (undefined4 *)0x0;
  }
  return puVar3;
}



void FUN_0076bed0(byte param_1)

{
  FUN_0076b5d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_0076bef0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  cVar1 = *(char *)(param_1 + 1);
  if (iVar3 == -1) {
    iVar3 = 0;
    switch(*(undefined4 *)(param_1 + 4)) {
    case 0:
      switch(cVar1) {
      case '\b':
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xe0) {
          iVar3 = 0x1b;
        }
        else {
          iVar2 = FUN_00700b60(0);
          if (iVar2 == 0) {
            return 0x32;
          }
        }
        break;
      default:
        goto switchD_0076bf0b_caseD_3;
      case '\x10':
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xf800) {
          return 0x17;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0x7c00) {
          return 0x18;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xf00) {
          return 0x1e;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0) {
          return 0x51;
        }
        break;
      case '\x18':
        return 0x14;
      case ' ':
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xff0000) {
          return 0x16;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xff) {
          return 0x21;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == -0x10000) {
          return 0x22;
        }
      }
      break;
    case 1:
      switch(cVar1) {
      case '\b':
        iVar2 = FUN_00700b60(9);
        if (iVar2 == 0) {
          return 0x1c;
        }
        iVar2 = FUN_00700b60(9);
        if (iVar2 == 0xf) {
          return 0x34;
        }
        break;
      default:
        goto switchD_0076bf0b_caseD_3;
      case '\x10':
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0x7c00) {
          return 0x19;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xf00) {
          return 0x1a;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xe0) {
          return 0x1d;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0) {
          return 0x33;
        }
        break;
      case ' ':
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xff0000) {
          return 0x15;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0x3ff) {
          return 0x1f;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0xff) {
          return 0x20;
        }
        iVar2 = FUN_00700b60(0);
        if (iVar2 == 0x3ff00000) {
          return 0x23;
        }
        break;
      case '@':
        return 0x71;
      case -0x80:
        return 0x74;
      }
      break;
    case 2:
      return 0x29;
    case 3:
    case 10:
    case 0xd:
switchD_0076bf0b_caseD_3:
      return 0;
    case 4:
      return 0x31545844;
    case 5:
      return 0x33545844;
    case 6:
      return 0x35545844;
    case 8:
      return 0x3c;
    case 9:
      if (cVar1 == '\x10') {
        return 0x3d;
      }
      if (cVar1 == ' ') {
        return 0x3e;
      }
      break;
    case 0xb:
      if (cVar1 == '\b') {
        iVar3 = FUN_00700b60(3);
        return (-(uint)(iVar3 != 0) & 0xffffffea) + 0x32;
      }
      if (cVar1 == '\x10') {
        return 0x6f;
      }
      if (cVar1 == ' ') {
        return 0x72;
      }
      break;
    case 0xc:
      if (cVar1 == '\x10') {
        return 0x33;
      }
      if (cVar1 == ' ') {
        return 0x70;
      }
      if (cVar1 == '@') {
        return 0x73;
      }
      break;
    case 0xe:
      if (cVar1 == ' ') {
        return 0x15;
      }
      if (cVar1 == '@') {
        return 0x71;
      }
      if (cVar1 == -0x80) {
        return 0x74;
      }
      break;
    case 0xf:
      if (cVar1 == '\x10') {
        cVar1 = FUN_0071b4a0(0x12);
        return (-(uint)(cVar1 != '\x01') & 7) + 0x49;
      }
      if (cVar1 == ' ') {
        cVar1 = FUN_0071b4a0(0x12);
        if (cVar1 == '\x04') {
          return 0x4f;
        }
        if (cVar1 == '\b') {
          return 0x4b;
        }
        cVar1 = FUN_0071b4a0(0x11);
        return (-(uint)(cVar1 != '\x18') & 0xfffffffa) + 0x4d;
      }
    }
  }
  return iVar3;
}



void FUN_0076c3b0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 < 0x31545845) {
    if (param_1 == 0x31545844) {
      puVar2 = &DAT_00b25fb0;
      goto LAB_0076c593;
    }
    switch(param_1) {
    case 0x14:
      puVar2 = &DAT_00b26598;
      break;
    case 0x15:
      puVar2 = &DAT_00b265e0;
      break;
    case 0x16:
      puVar2 = &DAT_00b26628;
      break;
    case 0x17:
      puVar2 = &DAT_00b263e8;
      break;
    case 0x18:
      puVar2 = &DAT_00b264c0;
      break;
    case 0x19:
      puVar2 = &DAT_00b26478;
      break;
    case 0x1a:
      puVar2 = &DAT_00b26508;
      break;
    case 0x1b:
      puVar2 = &DAT_00b262c8;
      break;
    case 0x1c:
      puVar2 = &DAT_00b26280;
      break;
    case 0x1d:
      puVar2 = &DAT_00b26310;
      break;
    case 0x1e:
      puVar2 = &DAT_00b26550;
      break;
    case 0x1f:
      puVar2 = &DAT_00b266b8;
      break;
    case 0x20:
      puVar2 = &DAT_00b25e00;
      break;
    case 0x21:
      puVar2 = &DAT_00b26670;
      break;
    case 0x22:
      puVar2 = &DAT_00b26748;
      break;
    case 0x23:
      puVar2 = &DAT_00b26700;
      break;
    case 0x24:
    case 0x71:
      puVar2 = &DAT_00b260d0;
      break;
    default:
      goto switchD_0076c3db_caseD_25;
    case 0x28:
      puVar2 = &DAT_00b267d8;
      break;
    case 0x29:
      puVar2 = &DAT_00b25d70;
      break;
    case 0x32:
      puVar2 = &DAT_00b26820;
      break;
    case 0x33:
      puVar2 = &DAT_00b268b0;
      break;
    case 0x34:
      puVar2 = &DAT_00b268f8;
      break;
    case 0x3c:
      puVar2 = &DAT_00b25f20;
      break;
    case 0x3d:
      puVar2 = &DAT_00b26790;
      break;
    case 0x3e:
      puVar2 = &DAT_00b26a18;
      break;
    case 0x3f:
      puVar2 = &DAT_00b26940;
      break;
    case 0x40:
      puVar2 = &DAT_00b26988;
      break;
    case 0x43:
      puVar2 = &DAT_00b269d0;
      break;
    case 0x46:
    case 0x50:
      puVar2 = &DAT_00b26bc8;
      break;
    case 0x47:
      puVar2 = &DAT_00b26c10;
      break;
    case 0x49:
      puVar2 = &DAT_00b26c58;
      break;
    case 0x4b:
      puVar2 = &DAT_00b26ca0;
      break;
    case 0x4d:
      puVar2 = &DAT_00b26d30;
      break;
    case 0x4f:
      puVar2 = &DAT_00b26d78;
      break;
    case 0x51:
      puVar2 = &DAT_00b26868;
      break;
    case 0x52:
    case 0x53:
      puVar2 = &DAT_00b26b38;
      break;
    case 0x6e:
      puVar2 = &DAT_00b26b80;
      break;
    case 0x6f:
      puVar2 = &DAT_00b261f0;
      break;
    case 0x70:
      puVar2 = &DAT_00b26160;
      break;
    case 0x72:
      puVar2 = &DAT_00b26118;
      break;
    case 0x73:
      puVar2 = &DAT_00b261a8;
      break;
    case 0x74:
      puVar2 = &DAT_00b26088;
      break;
    case 0x75:
      puVar2 = &DAT_00b26af0;
    }
  }
  else {
    if (param_1 == 0x33545844) {
      puVar2 = &DAT_00b25ff8;
      goto LAB_0076c593;
    }
    if (param_1 == 0x35545844) {
      puVar2 = &DAT_00b26040;
      goto LAB_0076c593;
    }
switchD_0076c3db_caseD_25:
    puVar2 = &DAT_00b26aa8;
  }
LAB_0076c593:
  puVar3 = param_2;
  for (iVar1 = 0x11; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_2[3] = param_1;
  param_2[4] = 0;
  return;
}



undefined4 FUN_0076c6d0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401f00(0x44);
  if (iVar1 != 0) {
    uVar2 = FUN_0070f2e0();
    FUN_0076c3b0(param_1,uVar2);
    return uVar2;
  }
  FUN_0076c3b0(param_1,0);
  return 0;
}



int FUN_0076c710(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x1c) != '\0') {
    FUN_0072fdf0();
  }
  return in_ECX + 0x20;
}



void FUN_0076c730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x30) == 0) {
    uVar1 = FUN_00772df0();
    *(undefined4 *)(in_ECX + 0x30) = uVar1;
  }
  FUN_00772cd0(param_1,param_2,param_3);
  return;
}



void FUN_0076c760(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a896ec;
  FUN_00401f20(in_ECX[0x19]);
  FUN_0077aa80();
  return;
}



void FUN_0076c7d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_retaddr;
  undefined4 uVar1;
  
  uVar1 = 0;
  (**(code **)(**(int **)(in_ECX + 0x18) + 100))(0x89,*(undefined4 *)(in_ECX + 0x60),0);
  FUN_00779790(uVar1,unaff_ESI,unaff_retaddr,param_1,param_2,param_3,param_4);
  return;
}



void FUN_0076c820(undefined4 *param_1,int param_2)

{
  *(undefined1 *)(param_2 + 0x5a) = 1;
  FUN_00772ff0(0x18,2,0);
  *(undefined4 *)(param_2 + 0x18) = *param_1;
  *(undefined4 *)(param_2 + 0x28) = param_1[1];
  *(undefined4 *)(param_2 + 0x38) = param_1[2];
  *(undefined4 *)(param_2 + 0x48) = 0;
  *(undefined4 *)(param_2 + 0x1c) = param_1[3];
  *(undefined4 *)(param_2 + 0x2c) = param_1[4];
  *(undefined4 *)(param_2 + 0x3c) = param_1[5];
  *(undefined4 *)(param_2 + 0x4c) = 0;
  *(undefined4 *)(param_2 + 0x50) = 0;
  *(undefined4 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  *(undefined4 *)(param_2 + 0x20) = 0;
  *(undefined4 *)(param_2 + 0x54) = 0;
  *(undefined4 *)(param_2 + 0x44) = 0;
  *(undefined4 *)(param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 0x24) = 0;
  return;
}



void FUN_0076c890(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  if (iVar2 != *param_1) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *param_1;
    *in_ECX = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  return;
}



void FUN_0076c8c0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  ushort uVar4;
  
  uVar4 = 0;
  if (*(short *)(in_ECX + 10) != 0) {
    do {
      piVar2 = (int *)(*(int *)(in_ECX + 4) + (uint)uVar4 * 4);
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        piVar1 = (int *)(iVar3 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
        *piVar2 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 10));
  }
  *(undefined2 *)(in_ECX + 0xc) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  return;
}



void FUN_0076c910(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_0076c960(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a896ec;
  FUN_00401f20(in_ECX[0x19]);
  FUN_0077aa80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_0076c9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5
            ,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  (**(code **)(**(int **)(in_ECX + 0x18) + 4))(param_4);
  FUN_00776880(param_4,*(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24));
  uVar1 = FUN_0077a150(unaff_retaddr,param_1,param_2,param_4,param_4,param_5,param_6);
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x18) + 0x68))(0x89);
  *(undefined4 *)(in_ECX + 0x60) = uVar2;
  return uVar1;
}



int FUN_0076ca10(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  
  iVar4 = param_1;
  if (*(int *)(in_ECX + 0x3c) != 0) {
    cVar2 = FUN_0075fa00(1,param_1 != 0);
    if (cVar2 != '\0') {
      FUN_00772630(&param_1);
      iVar1 = param_1;
      FUN_00772ff0(0x1c,1,0);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
        FUN_00772ff0(1,2,0);
        FUN_00772ff0(2,0,0);
        FUN_00772ff0(3,1,0);
        if (*(char *)(in_ECX + 0x51) == '\0') {
          FUN_00772ff0(4,3,0);
        }
        else {
          FUN_00772ff0(4,2,0);
          *(undefined1 *)(in_ECX + 0x51) = 0;
        }
        FUN_00772ff0(5,0,0);
        FUN_00772ff0(6,1,0);
        if (*(int *)(in_ECX + 0x5c) != 0) {
          *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + -1;
        }
      }
      else {
        FUN_0076c910(*(int *)(iVar4 + 8));
        FUN_00772ff0(0xb,param_2,0);
        FUN_00772ff0(1,2,0);
        FUN_00772ff0(2,2,0);
        FUN_00772ff0(3,1,0);
        FUN_00772ff0(4,3,0);
        FUN_00772ff0(5,2,0);
        if (*(char *)(in_ECX + 0x51) == '\0') {
          FUN_00772ff0(6,1,0);
        }
        else {
          FUN_00772ff0(6,0,0);
          *(undefined1 *)(in_ECX + 0x51) = 0;
        }
        FUN_00771640(*(byte *)(iVar4 + 5) & 0xf);
        FUN_007715e0(*(ushort *)(iVar4 + 4) >> 0xc & 3);
        if (*(int *)(iVar4 + 0xc) == 0) {
          *(undefined1 *)(iVar1 + 0x5a) = 0;
          FUN_00772ff0(0x18,0,0);
          *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + -1;
        }
        else {
          iVar4 = iVar1;
          uVar3 = FUN_0076c710(iVar1);
          FUN_0076c820(uVar3,iVar4);
          *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + -1;
        }
      }
      *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + -1;
      FUN_00760010(*(undefined4 *)(*(int *)(in_ECX + 0x3c) + 0x14),iVar1);
      if ((param_1 != 0) &&
         (*(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1, *(int *)(param_1 + 0x5c) == 0))
      {
        FUN_00772560();
      }
      return iVar1;
    }
  }
  return 0;
}



void FUN_0076cc00(ushort param_1,undefined2 param_2)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a89774;
  *(ushort *)(in_ECX + 2) = param_1;
  *(undefined2 *)((int)in_ECX + 0xe) = param_2;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 3) = 0;
  if (param_1 == 0) {
    in_ECX[1] = 0;
    return;
  }
  uVar2 = (uint)param_1;
  puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2 * 4) | uVar2 * 4 + 4);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    _vector_constructor_iterator_(puVar1 + 1,4,uVar2,FUN_007c88a0);
    in_ECX[1] = puVar1 + 1;
    return;
  }
  in_ECX[1] = 0;
  return;
}



void FUN_0076cca0(uint param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int in_ECX;
  uint uVar7;
  ushort uVar8;
  uint *puVar9;
  int iVar10;
  
  if (param_1 != *(ushort *)(in_ECX + 8)) {
    uVar8 = (ushort)param_1;
    if (param_1 < *(ushort *)(in_ECX + 10)) {
      uVar7 = param_1 & 0xffff;
      if (uVar8 < *(ushort *)(in_ECX + 10)) {
        do {
          piVar2 = (int *)(*(int *)(in_ECX + 4) + (uVar7 & 0xffff) * 4);
          if (*(int *)(*(int *)(in_ECX + 4) + (uVar7 & 0xffff) * 4) != 0) {
            iVar3 = *piVar2;
            if (iVar3 != 0) {
              piVar1 = (int *)(iVar3 + 0x60);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                FUN_007604d0();
              }
              *piVar2 = 0;
            }
            *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
          }
          uVar7 = uVar7 + 1;
        } while ((ushort)uVar7 < *(ushort *)(in_ECX + 10));
      }
      *(ushort *)(in_ECX + 10) = uVar8;
    }
    iVar3 = *(int *)(in_ECX + 4);
    *(ushort *)(in_ECX + 8) = uVar8;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      param_1 = param_1 & 0xffff;
      puVar6 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < param_1 * 4) | param_1 * 4 + 4);
      if (puVar6 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = puVar6 + 1;
        *puVar6 = param_1;
        _vector_constructor_iterator_(puVar9,4,param_1,FUN_007c88a0);
      }
      *(uint **)(in_ECX + 4) = puVar9;
      uVar8 = 0;
      if (*(short *)(in_ECX + 10) != 0) {
        do {
          iVar10 = *(int *)(in_ECX + 4);
          iVar5 = (uint)uVar8 * 4;
          iVar4 = *(int *)(iVar10 + iVar5);
          if (iVar4 != *(int *)(iVar5 + iVar3)) {
            if (iVar4 != 0) {
              piVar2 = (int *)(iVar4 + 0x60);
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FUN_007604d0();
              }
            }
            iVar4 = *(int *)(iVar5 + iVar3);
            *(int *)(iVar10 + iVar5) = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(in_ECX + 10));
      }
      uVar8 = *(ushort *)(in_ECX + 10);
      if (uVar8 < *(ushort *)(in_ECX + 8)) {
        do {
          piVar2 = (int *)(*(int *)(in_ECX + 4) + (uint)uVar8 * 4);
          iVar10 = *piVar2;
          if (iVar10 != 0) {
            piVar1 = (int *)(iVar10 + 0x60);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_007604d0();
            }
            *piVar2 = 0;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ushort *)(in_ECX + 8));
      }
    }
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + -4);
      iVar10 = iVar3 + iVar4 * 4;
      while (iVar4 = iVar4 + -1, -1 < iVar4) {
        piVar2 = (int *)(iVar10 + -4);
        iVar10 = iVar10 + -4;
        if (*piVar2 != 0) {
          piVar2 = (int *)(*piVar2 + 0x60);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_007604d0();
          }
        }
      }
      FUN_00401f20(iVar3 + -4);
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076ce40(uint param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if ((_DAT_00b42578 & 1) == 0) {
    _DAT_00b42578 = _DAT_00b42578 | 1;
    DAT_00b42574 = 0;
    _atexit(FUN_00a26dc0);
  }
  if (param_1 < *(ushort *)(in_ECX + 10)) {
    if (*param_2 == DAT_00b42574) {
      if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) != DAT_00b42574) {
        *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + -1;
      }
    }
    else if (*(int *)(*(int *)(in_ECX + 4) + param_1 * 4) == DAT_00b42574) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  else {
    *(short *)(in_ECX + 10) = (short)param_1 + 1;
    if (*param_2 != DAT_00b42574) {
      *(short *)(in_ECX + 0xc) = *(short *)(in_ECX + 0xc) + 1;
    }
  }
  piVar2 = (int *)(*(int *)(in_ECX + 4) + param_1 * 4);
  iVar3 = *piVar2;
  if (iVar3 != *param_2) {
    if (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar3 = *param_2;
    *piVar2 = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
    }
  }
  return;
}



void FUN_0076cef0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(in_ECX + 0x3c) != 0) {
    if ((*(char *)(in_ECX + 0x50) != '\0') && (param_1 != 0)) {
      uVar2 = (uint)*(byte *)(param_1 + 4);
      if (*(uint *)(in_ECX + 0x54) < uVar2) {
        uVar2 = (uint)*(ushort *)(in_ECX + 0x54);
      }
      iVar3 = FUN_0076ca10(param_1,uVar2);
      if (iVar3 != 0) {
        FUN_00772ff0(1,3,0);
        if (*(char *)(in_ECX + 0x50) == '\0') {
          uVar5 = 2;
          uVar4 = 4;
        }
        else {
          FUN_00772ff0(4,4,0);
          uVar5 = 0;
          uVar4 = 6;
        }
        FUN_00772ff0(uVar4,uVar5,0);
      }
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      piVar1 = (int *)(*(int *)(in_ECX + 0x3c) + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
    *(int *)(in_ECX + 0x38) = *(int *)(in_ECX + 0x38) + 1;
    *(undefined4 *)(in_ECX + 0x58) = 0;
    *(undefined4 *)(in_ECX + 0x5c) = 0;
  }
  return;
}



void FUN_0076cfa0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar2 = in_ECX[1];
  *in_ECX = &PTR_FUN_00a89774;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4);
    iVar4 = iVar2 + iVar3 * 4;
    while (iVar3 = iVar3 + -1, -1 < iVar3) {
      piVar1 = (int *)(iVar4 + -4);
      iVar4 = iVar4 + -4;
      if (*piVar1 != 0) {
        piVar1 = (int *)(*piVar1 + 0x60);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_007604d0();
        }
      }
    }
    FUN_00401f20(iVar2 + -4);
  }
  return;
}



void FUN_0076cff0(byte param_1)

{
  FUN_0076cfa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076d020(byte param_1)

{
  FUN_0077aa80();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076d040(void)

{
  undefined4 *in_ECX;
  
  FUN_00779070();
  *in_ECX = &PTR_FUN_00a8977c;
  *(undefined1 *)(in_ECX + 8) = 0;
  *(undefined1 *)((int)in_ECX + 0x21) = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  FUN_0076cc00(2,2);
  FUN_0076c8c0();
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *in_ECX = &PTR_FUN_00a896ec;
  return;
}



void FUN_0076d0a0(int param_1,int param_2,char param_3,undefined1 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  int in_ECX;
  int local_4;
  
  piVar1 = (int *)(in_ECX + 0x3c);
  if (*(int *)(in_ECX + 0x3c) == 0) {
    local_4 = in_ECX;
    piVar5 = (int *)FUN_007606a0(&local_4);
    iVar3 = *piVar1;
    if (iVar3 != *piVar5) {
      if (iVar3 != 0) {
        piVar2 = (int *)(iVar3 + 0x60);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_007604d0();
        }
      }
      iVar3 = *piVar5;
      *piVar1 = iVar3;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
      }
    }
    if ((local_4 != 0) &&
       (*(int *)(local_4 + 0x60) = *(int *)(local_4 + 0x60) + -1, *(int *)(local_4 + 0x60) == 0)) {
      FUN_007604d0();
    }
    iVar3 = *piVar1;
    if (*(int *)(iVar3 + 0x30) == 0) {
      uVar6 = FUN_00772df0();
      *(undefined4 *)(iVar3 + 0x30) = uVar6;
    }
    FUN_00772cd0(0xa8,7,1);
    uVar4 = *(uint *)(in_ECX + 0x38);
    if (*(ushort *)(in_ECX + 0x48) <= uVar4) {
      FUN_0076cca0(*(ushort *)(in_ECX + 0x4e) + uVar4);
    }
    FUN_0076ce40(uVar4,piVar1);
    if (*(int *)(in_ECX + 0x38) != 0) {
      if ((param_1 == 2) && (param_2 == 1)) {
        FUN_0076c730(0x1b,0,1);
      }
      else {
        iVar3 = *piVar1;
        if (*(int *)(iVar3 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar3 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x13,param_1,0);
        iVar3 = *piVar1;
        if (*(int *)(iVar3 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar3 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x14,param_2,0);
        iVar3 = *piVar1;
        if (*(int *)(iVar3 + 0x30) == 0) {
          uVar6 = FUN_00772df0();
          *(undefined4 *)(iVar3 + 0x30) = uVar6;
        }
        FUN_00772cd0(0x1b,1,1);
      }
    }
    *(char *)(in_ECX + 0x50) = param_3;
    *(undefined1 *)(in_ECX + 0x51) = param_4;
    *(undefined4 *)(in_ECX + 0x58) = DAT_00b28cb0;
    *(undefined4 *)(in_ECX + 0x5c) = DAT_00b28cb4;
    if (param_3 != '\0') {
      *(int *)(in_ECX + 0x58) = *(int *)(in_ECX + 0x58) + -1;
      *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + -1;
    }
  }
  return;
}



undefined4 FUN_0076d200(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if (param_1 == 0) {
    if (param_3 == 0) {
      return 0xffffffff;
    }
    cVar3 = FUN_00777f10();
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
    if (param_4 == 0) {
      return 0xffffffff;
    }
  }
  else if (param_3 == 0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_4 + 0x20);
  iVar5 = 0;
  if (param_3 == 0) {
    param_3 = *(int *)(*(int *)(param_1 + 0xb4) + 0x38);
  }
  if ((param_1 == 0) || ((*(ushort *)(*(int *)(param_1 + 0xb4) + 0x2e) & 0xf000) == 0x4000)) {
    uVar4 = (uint)*(byte *)(param_3 + 3);
  }
  else {
    uVar4 = *(byte *)(*(int *)(param_1 + 0xb4) + 0x2c) & 0x3f;
  }
  *(undefined4 *)(in_ECX + 0x54) = 0;
  if ((short)uVar4 == 0) {
LAB_0076d2a5:
    bVar2 = false;
  }
  else {
    iVar5 = **(int **)(iVar1 + 0x20);
    *(uint *)(in_ECX + 0x54) = uVar4 - 1;
    if ((iVar5 == 0) || (*(int *)(iVar5 + 8) == 0)) goto LAB_0076d2a5;
    bVar2 = true;
  }
  bVar6 = (*(byte *)(iVar1 + 0x18) >> 1 & 7) == 0;
  if ((bVar6) && (!bVar2)) {
    return 0;
  }
  FUN_0076d0a0(1,3,0,0);
  if (bVar2) {
    uVar4 = (uint)*(byte *)(iVar5 + 4);
    if (*(uint *)(in_ECX + 0x54) < uVar4) {
      uVar4 = (uint)*(ushort *)(in_ECX + 0x54);
    }
    FUN_0076ca10(iVar5,uVar4);
    if (!bVar6) {
      FUN_00772ff0(1,4,0);
      FUN_00772ff0(3,0,0);
      FUN_00772ff0(4,4,0);
      uVar8 = 0;
      uVar7 = 6;
      goto LAB_0076d347;
    }
  }
  else {
    FUN_0076ca10(0,0);
  }
  FUN_00772ff0(1,2,0);
  uVar8 = 2;
  uVar7 = 4;
LAB_0076d347:
  FUN_00772ff0(uVar7,uVar8,0);
  FUN_0076cef0(iVar5);
  return 0;
}



void FUN_0076d360(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
  FUN_0076d200(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void FUN_0076d430(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(int *)(&DAT_00b42600 + param_2 * 4) != 0)) {
    (**(code **)(*param_1 + 0x94))(param_1,param_2,0);
    *(undefined4 *)(&DAT_00b42600 + param_2 * 4) = 0;
  }
  return;
}



undefined4 FUN_0076d480(int *param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != DAT_00b42610) {
    iVar1 = (**(code **)(*param_1 + 0x9c))(param_1,iVar1);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_00b42610 = *(int *)(in_ECX + 0xc);
  }
  return 1;
}



undefined4 FUN_0076d4c0(int *param_1)

{
  int iVar1;
  
  if (DAT_00b42610 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x9c))(param_1,0);
    if (iVar1 < 0) {
      return 0;
    }
    DAT_00b42610 = 0;
  }
  return 1;
}



bool FUN_0076d4f0(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    cVar1 = FUN_0071b4a0(0x11);
    return cVar1 != '\0';
  }
  return false;
}



bool FUN_0076d510(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) && (*(int *)(in_ECX + 0xc) != 0)) {
    cVar1 = FUN_0071b4a0(0x12);
    return cVar1 != '\0';
  }
  return false;
}



undefined4 FUN_0076d5c0(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  int *piStack_1c;
  
  if (in_ECX[3] != 0) {
    (**(code **)(*in_ECX + 0x2c))();
  }
  piVar1 = DAT_00b3f928;
  if (in_ECX[5] == 0) {
    return 0;
  }
  uStack_34 = 0x76d5f4;
  piVar3 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  piVar2 = DAT_00b42154;
  uStack_34 = 0;
  iStack_38 = 0x76d605;
  iVar4 = (**(code **)(*piVar3 + 0x5c))();
  iStack_38 = in_ECX[5];
  iVar6 = piVar1[0x170];
  uStack_3c = 1;
  uStack_40 = 2;
  iVar4 = (**(code **)(*piVar2 + 0x28))(piVar2,piVar1[0x16f],iVar6,*(undefined4 *)(iVar4 + 0xc));
  if (-1 < iVar4) {
    piVar1 = in_ECX + 3;
    iVar4 = (**(code **)(*piStack_1c + 0x74))
                      (piStack_1c,*(undefined4 *)(in_ECX[2] + 8),*(undefined4 *)(in_ECX[2] + 0xc),
                       in_ECX[5],0,0,in_ECX[6],piVar1,0);
    if (-1 < iVar4) {
      iVar4 = (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,&uStack_40);
      if (iVar4 < 0) {
        (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
        *piVar1 = 0;
        return 0;
      }
      iVar6 = FUN_0076c6d0(iVar6);
      in_ECX[4] = iVar6;
      return 1;
    }
  }
  uVar5 = FUN_007736f0(iVar4);
  FUN_0060d0a0("NiDX9AdditionalDepthStencilBufferData::Recreate> FAILED %s",uVar5);
  return 0;
}



undefined4 FUN_0076d5e2(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int unaff_EDI;
  int iVar7;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  piVar2 = DAT_00b3f928;
  uStack_10 = 0x76d5f4;
  piVar4 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  piVar3 = DAT_00b42154;
  uStack_10 = 0;
  uStack_14 = 0x76d605;
  iVar5 = (**(code **)(*piVar4 + 0x5c))();
  uStack_14 = *(undefined4 *)(unaff_EDI + 0x14);
  iVar7 = piVar2[0x170];
  uStack_18 = 1;
  uStack_1c = 2;
  iVar5 = (**(code **)(*piVar3 + 0x28))(piVar3,piVar2[0x16f],iVar7,*(undefined4 *)(iVar5 + 0xc));
  if (-1 < iVar5) {
    puVar1 = (undefined4 *)(unaff_EDI + 0xc);
    iVar5 = (**(code **)(*param_2 + 0x74))
                      (param_2,*(undefined4 *)(*(int *)(unaff_EDI + 8) + 8),
                       *(undefined4 *)(*(int *)(unaff_EDI + 8) + 0xc),
                       *(undefined4 *)(unaff_EDI + 0x14),0,0,*(undefined4 *)(unaff_EDI + 0x18),
                       puVar1,0);
    if (-1 < iVar5) {
      iVar5 = (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,&uStack_1c);
      if (iVar5 < 0) {
        (**(code **)(*(int *)*puVar1 + 8))((int *)*puVar1);
        *puVar1 = 0;
        return 0;
      }
      uVar6 = FUN_0076c6d0(iVar7);
      *(undefined4 *)(unaff_EDI + 0x10) = uVar6;
      return 1;
    }
  }
  uVar6 = FUN_007736f0(iVar5);
  FUN_0060d0a0("NiDX9AdditionalDepthStencilBufferData::Recreate> FAILED %s",uVar6);
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0076d6f0(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  int *piStack_30;
  int *piStack_2c;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piVar1 = in_ECX + 3;
  if (in_ECX[3] != 0) {
    piStack_2c = (int *)0x76d707;
    (**(code **)(*in_ECX + 0x2c))();
  }
  _DAT_00b42600 = 0;
  DAT_00b42610 = 0;
  piStack_2c = (int *)in_ECX[0x13];
  if (piStack_2c != (int *)0x0) {
    piStack_30 = (int *)0x76d72a;
    (**(code **)(*piStack_2c + 8))();
    in_ECX[0x13] = 0;
  }
  in_ECX[0x13] = (int)param_1;
  piStack_2c = param_1;
  piStack_30 = (int *)0x76d740;
  (**(code **)(*param_1 + 4))();
  piVar4 = (int *)in_ECX[0x13];
  piStack_30 = piVar1;
  iVar2 = (**(code **)(*piVar4 + 0x98))(piVar4,0);
  if (-1 < iVar2) {
    iVar2 = (**(code **)(*(int *)*piVar1 + 0x30))((int *)*piVar1,&piStack_30);
    if (-1 < iVar2) {
      FUN_00731e40(uStack_20,uStack_1c);
      iVar2 = FUN_0076c6d0(piVar4);
      in_ECX[4] = iVar2;
      uVar3 = FUN_00774bd0(piVar4);
      FUN_0060d0a0("NiDX9Renderer::Recreate> Using %s backbuffer format\n",uVar3);
      return 1;
    }
    (**(code **)(*(int *)*piVar1 + 8))((int *)*piVar1);
    *piVar1 = 0;
  }
  return 0;
}



void FUN_0076d7f0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_0076d820(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[5];
  *in_ECX = &PTR_FUN_00a898e4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[5] = 0;
  }
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a8981c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_0076d8a0(byte param_1)

{
  FUN_0076d820();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0076d8c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EDI;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_8;
  
  puVar2 = (undefined4 *)FUN_00401f00(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00a3fcf8;
    puVar2[1] = 0;
    InterlockedIncrement((LONG *)&DAT_00b3fd64);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_00a898e4;
    puVar2[5] = 0;
  }
  puVar2[5] = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x48))(param_1,0,puVar2 + 3);
  if (iVar3 < 0) {
    uVar4 = FUN_007736f0(iVar3);
    FUN_0060d0a0("NiDX9TextureBufferData::Create> FAILED- GetSurfaceLevel - %s",uVar4);
  }
  else {
    piVar1 = (int *)puVar2[3];
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,&stack0xffffffd0);
    if (-1 < iVar3) {
      uVar4 = FUN_0076c6d0(unaff_EDI);
      puVar2[4] = uVar4;
      if (*piStack_8 == 0) {
        iVar3 = FUN_007320d0(uStack_18,uStack_14);
        *piStack_8 = iVar3;
        puVar2[2] = iVar3;
        return puVar2;
      }
      FUN_0070bd60(puVar2);
      puVar2[2] = *piStack_8;
      return puVar2;
    }
  }
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}



undefined4 * FUN_0076d9b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_retaddr;
  undefined4 *puStack_34;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  puStack_34 = (undefined4 *)0x76d9bd;
  puVar2 = (undefined4 *)FUN_00401f00();
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00a3fcf8;
    puVar2[1] = 0;
    puStack_34 = (undefined4 *)0x76d9dc;
    InterlockedIncrement((LONG *)&DAT_00b3fd64);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_00a898e4;
    puVar2[5] = 0;
  }
  puVar2[5] = param_1;
  puStack_34 = (undefined4 *)0x76da01;
  (**(code **)(*param_1 + 4))();
  puVar1 = puVar2 + 3;
  puStack_34 = puVar1;
  iVar3 = (**(code **)(*(int *)puVar2[5] + 0x48))((int *)puVar2[5],param_1,0);
  if (iVar3 < 0) {
    uVar4 = FUN_007736f0(iVar3);
    FUN_0060d0a0("NiDX9TextureBufferData::Create> FAILED- GetSurfaceLevel - %s",uVar4);
    *puVar1 = 0;
  }
  else {
    iVar3 = (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,&puStack_34);
    if (-1 < iVar3) {
      uVar4 = FUN_0076c6d0(puStack_34);
      puVar2[4] = uVar4;
      if (*unaff_retaddr == 0) {
        iVar3 = FUN_007320d0(uStack_1c,uStack_18);
        *unaff_retaddr = iVar3;
        puVar2[2] = iVar3;
        return puVar2;
      }
      FUN_0070bd60(puVar2);
      puVar2[2] = *unaff_retaddr;
      return puVar2;
    }
  }
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}



void FUN_0076dab0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  piVar1 = *(int **)(in_ECX + 0x14);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076db00(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  _DAT_00b426f8 = GetCurrentThreadId();
  _DAT_00b426fc = _DAT_00b426fc + 1;
  puVar2 = DAT_00b294f4;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x2c))();
  }
  _DAT_00b426fc = _DAT_00b426fc + -1;
  if (_DAT_00b426fc == 0) {
    _DAT_00b426f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076db60(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  _DAT_00b426f8 = GetCurrentThreadId();
  _DAT_00b426fc = _DAT_00b426fc + 1;
  puVar2 = DAT_00b294f4;
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    (**(code **)(*(int *)*puVar1 + 0x30))(param_1);
  }
  _DAT_00b426fc = _DAT_00b426fc + -1;
  if (_DAT_00b426fc == 0) {
    _DAT_00b426f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  return;
}



void FUN_0076dbd0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[0x13];
  *in_ECX = &PTR_FUN_00a8997c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0x13] = 0;
  }
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a8981c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_0076dc50(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  piVar1 = *(int **)(in_ECX + 0x4c);
  *(undefined4 *)(in_ECX + 0x10) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  return;
}



void FUN_0076dcb0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a8981c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076dd10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a89968;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a898d4;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076dd40(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a89a4c;
  in_ECX[5] = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  _DAT_00b426f8 = GetCurrentThreadId();
  _DAT_00b426fc = _DAT_00b426fc + 1;
  piVar2 = (int *)(**(code **)(PTR_PTR_00b294f0 + 4))();
  piVar2[2] = (int)in_ECX;
  piVar2[1] = 0;
  *piVar2 = (int)DAT_00b294f4;
  piVar1 = piVar2;
  if (DAT_00b294f4 != (int *)0x0) {
    *(int **)((int)DAT_00b294f4 + 4) = piVar2;
    piVar1 = _DAT_00b294f8;
  }
  _DAT_00b294f8 = piVar1;
  _DAT_00b294fc = _DAT_00b294fc + 1;
  _DAT_00b426fc = _DAT_00b426fc + -1;
  if (_DAT_00b426fc == 0) {
    _DAT_00b426f8 = 0;
  }
  DAT_00b294f4 = piVar2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0076de00(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *pcStack_58;
  undefined4 uStack_54;
  int *piStack_1c;
  int *piStack_18;
  
  if (param_3 == 0) {
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_0076bef0();
  if (iVar2 == 0) {
    return (undefined4 *)0x0;
  }
  piVar3 = (int *)(**(code **)(*DAT_00b3f928 + 0x7c))();
  piVar1 = DAT_00b42154;
  (**(code **)(*piVar3 + 0x5c))();
  iVar4 = (**(code **)(*piVar1 + 0x28))();
  if (iVar4 < 0) {
    uStack_54 = 0x76de6f;
    uStack_54 = FUN_007736f0();
    pcStack_58 = "NiDX9AdditionalDepthStencilBufferData::Create> FAILED %s";
    uStack_5c = 0x76de7a;
    FUN_0060d0a0();
    return (undefined4 *)0x0;
  }
  uStack_54 = 0x76de8d;
  iVar4 = FUN_00401f00();
  if (iVar4 == 0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    puVar5 = (undefined4 *)FUN_0076dd40();
  }
  uStack_54 = 0;
  puVar5[6] = DAT_00b294ec;
  uStack_5c = puVar5[6];
  uStack_60 = 0;
  uStack_64 = 0;
  pcStack_58 = (char *)(puVar5 + 3);
  iVar4 = (**(code **)(*piStack_1c + 0x74))
                    (piStack_1c,*(undefined4 *)(*piStack_18 + 8),*(undefined4 *)(*piStack_18 + 0xc),
                     iVar2);
  if (iVar4 < 0) {
    uVar6 = FUN_007736f0(iVar4);
    FUN_0060d0a0("NiDX9AdditionalDepthStencilBufferData::Create> FAILED %s",uVar6);
  }
  else {
    piVar1 = (int *)puVar5[3];
    iVar4 = (**(code **)(*piVar1 + 0x30))(piVar1,&uStack_64);
    if (-1 < iVar4) {
      uVar6 = FUN_0076c6d0(uStack_64);
      puVar5[4] = uVar6;
      puVar5[5] = iVar2;
      FUN_0070bd60(puVar5);
      puVar5[2] = _DAT_00000002;
      return puVar5;
    }
  }
  (**(code **)*puVar5)(1);
  return (undefined4 *)0x0;
}



void FUN_0076df50(byte param_1)

{
  FUN_0076dbd0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0076df70(int *param_1,void *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_EDI;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_4;
  
  puVar2 = (undefined4 *)FUN_00401f00(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00a3fcf8;
    puVar2[1] = 0;
    InterlockedIncrement((LONG *)&DAT_00b3fd64);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_00a8997c;
    puVar2[0x13] = 0;
  }
  _memcpy(puVar2 + 5,param_2,0x38);
  puVar2[0x13] = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  iVar3 = (**(code **)(*param_1 + 0x98))(param_1,0,puVar2 + 3);
  if (-1 < iVar3) {
    piVar1 = (int *)puVar2[3];
    iVar3 = (**(code **)(*piVar1 + 0x30))(piVar1,&stack0xffffffd0);
    if (-1 < iVar3) {
      uVar4 = FUN_0076c6d0(unaff_EDI);
      puVar2[4] = uVar4;
      uVar4 = FUN_00774bd0(unaff_EDI);
      FUN_0060d0a0("NiDX9Renderer::Create> Using %s backbuffer format\n",uVar4);
      piVar1 = DAT_00b3f928;
      if (DAT_00b42614 == 0) {
        DAT_00b42614 = (**(code **)(*DAT_00b3f928 + 0x9c))();
        DAT_00b42618 = (**(code **)(*piVar1 + 0xa0))();
      }
      if (*piStack_4 == 0) {
        iVar3 = FUN_007320d0(uStack_18,uStack_14);
        *piStack_4 = iVar3;
        puVar2[2] = iVar3;
        return puVar2;
      }
      FUN_0070bd60(puVar2);
      puVar2[2] = *piStack_4;
      return puVar2;
    }
  }
  (**(code **)*puVar2)(1);
  return (undefined4 *)0x0;
}



undefined4 * FUN_0076e0b0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int *piStack_8;
  
  puVar2 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &PTR_FUN_00a3fcf8;
    puVar2[1] = 0;
    InterlockedIncrement((LONG *)&DAT_00b3fd64);
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    *puVar2 = &PTR_FUN_00a899f4;
  }
  puVar1 = puVar2 + 3;
  puVar5 = puVar1;
  iVar3 = (**(code **)(*param_1 + 0xa0))(param_1,puVar1);
  if (iVar3 < 0) {
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
    return (undefined4 *)0x0;
  }
  iVar3 = (**(code **)(*(int *)*puVar1 + 0x30))((int *)*puVar1,&stack0xffffffd8);
  if (iVar3 < 0) {
    (**(code **)*puVar2)(1);
    return (undefined4 *)0x0;
  }
  uVar4 = FUN_0076c6d0(puVar5);
  puVar2[4] = uVar4;
  if (*piStack_8 == 0) {
    iVar3 = FUN_0070be70(uStack_18,uStack_14);
    *piStack_8 = iVar3;
  }
  else {
    FUN_0070bd60(puVar2);
  }
  puVar2[2] = *piStack_8;
  DAT_00b42610 = *puVar1;
  return puVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0076e1a0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  undefined1 local_4 [4];
  
  *in_ECX = &PTR_FUN_00a89a4c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  _DAT_00b426f8 = GetCurrentThreadId();
  _DAT_00b426fc = _DAT_00b426fc + 1;
  FUN_00776690(local_4);
  _DAT_00b426fc = _DAT_00b426fc + -1;
  if (_DAT_00b426fc == 0) {
    _DAT_00b426f8 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b42680);
  piVar1 = (int *)in_ECX[3];
  *in_ECX = &PTR_FUN_00a8981c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[3] = 0;
  }
  FUN_00401f20(in_ECX[4]);
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_0076e240(byte param_1)

{
  FUN_0076e1a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0076e260(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_0076e270(void)

{
  undefined4 *in_ECX;
  
  FUN_007005d0();
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *in_ECX = &PTR_FUN_00a89bd4;
  return;
}



void FUN_0076e2a0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  uint uVar2;
  
  *in_ECX = &PTR_FUN_00a89bd4;
  if (in_ECX[9] != 0) {
    uVar2 = 0;
    if (in_ECX[8] != 0) {
      iVar1 = 0;
      do {
        if (in_ECX[9] + iVar1 != 0) {
          FUN_00401f20(*(undefined4 *)(in_ECX[9] + iVar1 + 8));
        }
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (uVar2 < (uint)in_ECX[8]);
    }
    FUN_00401f20(in_ECX[9]);
  }
  in_ECX[9] = 0;
  in_ECX[2] = 0;
  (**(code **)(*(int *)in_ECX[4] + 8))((int *)in_ECX[4]);
  in_ECX[4] = 0;
  FUN_0055ace0();
  return;
}



undefined4 FUN_0076e320(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  *(int *)(in_ECX + 8) = param_1;
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0x8b0);
  piVar1 = *(int **)(param_1 + 0x280);
  *(int **)(in_ECX + 0x10) = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  *(int *)(in_ECX + 0x1c) = param_1;
  *(uint *)(in_ECX + 0x20) = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 0x10 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 0x10));
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,0x10,param_2,FUN_0076e260);
  }
  *(void **)(in_ECX + 0x24) = pvVar3;
  uVar5 = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    param_1 = 0;
    do {
      uVar2 = *(uint *)(in_ECX + 0x1c);
      iVar4 = FUN_00401f00(-(uint)((int)((ulonglong)uVar2 * 0x1c >> 0x20) != 0) |
                           (uint)((ulonglong)uVar2 * 0x1c));
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
          FUN_0076fb00();
        }
      }
      *(int *)(param_1 + 8 + *(int *)(in_ECX + 0x24)) = iVar4;
      uVar5 = uVar5 + 1;
      param_1 = param_1 + 0x10;
    } while (uVar5 < *(uint *)(in_ECX + 0x20));
  }
  return 1;
}



int FUN_0076e800(short *param_1)

{
  short sVar1;
  short *psVar2;
  size_t _Size;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  float *_Dst;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int local_c;
  
  psVar2 = param_1;
  iVar7 = *(int *)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  uVar5 = 0;
  local_c = 0;
  if (iVar7 == 0) {
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        local_c = local_c + _Size;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ushort)param_1[4]);
      return local_c;
    }
  }
  else {
    sVar1 = *param_1;
    param_1._0_2_ = param_1[2] - 4;
    uVar5 = sVar1 + 1;
    if (0 < (short)((ushort)param_1 - uVar5)) {
      param_1._0_2_ = uVar5;
    }
    uVar4 = 0;
    if (psVar2[4] != 0) {
      do {
        uVar6 = 0;
        pfVar9 = _Dst;
        if ((ushort)param_1 != 0) {
          uVar6 = (uint)(ushort)param_1;
          uVar3 = uVar6;
          pfVar8 = _Dst;
          do {
            pfVar9 = pfVar8 + 1;
            uVar3 = uVar3 - 1;
            *pfVar8 = (float)*(int *)((iVar7 - (int)_Dst) + (int)pfVar8) * 4.656613e-10 - 1.0;
            pfVar8 = pfVar9;
          } while (uVar3 != 0);
        }
        if ((ushort)uVar6 < uVar5) {
          for (uVar6 = uVar5 - uVar6 & 0xffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar9 = 0.0;
            pfVar9 = pfVar9 + 1;
          }
        }
        local_c = local_c + *(int *)(psVar2 + 0xe);
        iVar7 = iVar7 + *(int *)(psVar2 + 0xc);
        _Dst = (float *)((int)_Dst + *(int *)(psVar2 + 0x10));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ushort)psVar2[4]);
    }
  }
  return local_c;
}



int FUN_0076e910(short *param_1)

{
  short sVar1;
  short *psVar2;
  size_t _Size;
  uint uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  float *_Dst;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  int local_c;
  
  psVar2 = param_1;
  iVar7 = *(int *)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  uVar5 = 0;
  local_c = 0;
  if (iVar7 == 0) {
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        local_c = local_c + _Size;
        uVar5 = uVar5 + 1;
      } while (uVar5 < (ushort)param_1[4]);
      return local_c;
    }
  }
  else {
    sVar1 = *param_1;
    param_1._0_2_ = param_1[2] - 8;
    uVar5 = sVar1 + 1;
    if (0 < (short)((ushort)param_1 - uVar5)) {
      param_1._0_2_ = uVar5;
    }
    uVar4 = 0;
    if (psVar2[4] != 0) {
      do {
        uVar6 = 0;
        pfVar9 = _Dst;
        if ((ushort)param_1 != 0) {
          uVar6 = (uint)(ushort)param_1;
          uVar3 = uVar6;
          pfVar8 = _Dst;
          do {
            pfVar9 = pfVar8 + 1;
            uVar3 = uVar3 - 1;
            *pfVar8 = (float)*(int *)((iVar7 - (int)_Dst) + (int)pfVar8) * 2.3283064e-10;
            pfVar8 = pfVar9;
          } while (uVar3 != 0);
        }
        if ((ushort)uVar6 < uVar5) {
          for (uVar6 = uVar5 - uVar6 & 0xffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar9 = 0.0;
            pfVar9 = pfVar9 + 1;
          }
        }
        local_c = local_c + *(int *)(psVar2 + 0xe);
        iVar7 = iVar7 + *(int *)(psVar2 + 0xc);
        _Dst = (float *)((int)_Dst + *(int *)(psVar2 + 0x10));
        uVar4 = uVar4 + 1;
      } while (uVar4 < (ushort)psVar2[4]);
    }
  }
  return local_c;
}



int FUN_0076ea10(short *param_1)

{
  short sVar1;
  short *psVar2;
  ushort uVar3;
  size_t _Size;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  short *psVar7;
  float *_Dst;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint local_14;
  int local_10;
  
  psVar2 = param_1;
  psVar7 = *(short **)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  iVar8 = 0;
  local_10 = 0;
  if (psVar7 == (short *)0x0) {
    uVar5 = 0;
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar5 < (ushort)param_1[4]);
      return iVar8;
    }
  }
  else {
    psVar4 = param_1 + 2;
    uVar5 = *param_1 + 1;
    param_1 = (short *)(uint)(ushort)(*psVar4 - 0xcU);
    if (0 < (short)((*psVar4 - 0xcU) - uVar5)) {
      param_1 = (short *)(uint)uVar5;
    }
    uVar3 = 0;
    if (psVar2[4] != 0) {
      do {
        local_14 = 0;
        pfVar10 = _Dst;
        if ((short)param_1 != 0) {
          local_14 = (uint)param_1;
          psVar4 = psVar7;
          uVar6 = (uint)param_1;
          pfVar9 = _Dst;
          do {
            sVar1 = *psVar4;
            pfVar10 = pfVar9 + 1;
            psVar4 = psVar4 + 1;
            uVar6 = uVar6 - 1;
            *pfVar9 = (float)(int)sVar1 / 32767.0 - 1.0;
            pfVar9 = pfVar10;
          } while (uVar6 != 0);
        }
        if ((ushort)local_14 < uVar5) {
          for (uVar6 = uVar5 - local_14 & 0xffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar10 = 0.0;
            pfVar10 = pfVar10 + 1;
          }
        }
        iVar8 = local_10 + *(int *)(psVar2 + 0xe);
        psVar7 = (short *)((int)psVar7 + *(int *)(psVar2 + 0xc));
        _Dst = (float *)((int)_Dst + *(int *)(psVar2 + 0x10));
        uVar3 = uVar3 + 1;
        local_10 = iVar8;
      } while (uVar3 < (ushort)psVar2[4]);
    }
  }
  return iVar8;
}



int FUN_0076eb40(short *param_1)

{
  short sVar1;
  short *psVar2;
  ushort uVar3;
  size_t _Size;
  short *psVar4;
  ushort uVar5;
  uint uVar6;
  short *psVar7;
  float *_Dst;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  uint local_14;
  int local_10;
  
  psVar2 = param_1;
  psVar7 = *(short **)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  iVar8 = 0;
  local_10 = 0;
  if (psVar7 == (short *)0x0) {
    uVar5 = 0;
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        uVar5 = uVar5 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar5 < (ushort)param_1[4]);
      return iVar8;
    }
  }
  else {
    psVar4 = param_1 + 2;
    uVar5 = *param_1 + 1;
    param_1 = (short *)(uint)(ushort)(*psVar4 - 0x10U);
    if (0 < (short)((*psVar4 - 0x10U) - uVar5)) {
      param_1 = (short *)(uint)uVar5;
    }
    uVar3 = 0;
    if (psVar2[4] != 0) {
      do {
        local_14 = 0;
        pfVar10 = _Dst;
        if ((short)param_1 != 0) {
          local_14 = (uint)param_1;
          psVar4 = psVar7;
          uVar6 = (uint)param_1;
          pfVar9 = _Dst;
          do {
            sVar1 = *psVar4;
            pfVar10 = pfVar9 + 1;
            psVar4 = psVar4 + 1;
            uVar6 = uVar6 - 1;
            *pfVar9 = (float)(int)sVar1 / 65535.0;
            pfVar9 = pfVar10;
          } while (uVar6 != 0);
        }
        if ((ushort)local_14 < uVar5) {
          for (uVar6 = uVar5 - local_14 & 0xffff; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pfVar10 = 0.0;
            pfVar10 = pfVar10 + 1;
          }
        }
        iVar8 = local_10 + *(int *)(psVar2 + 0xe);
        psVar7 = (short *)((int)psVar7 + *(int *)(psVar2 + 0xc));
        _Dst = (float *)((int)_Dst + *(int *)(psVar2 + 0x10));
        uVar3 = uVar3 + 1;
        local_10 = iVar8;
      } while (uVar3 < (ushort)psVar2[4]);
    }
  }
  return iVar8;
}



int FUN_0076ec60(short *param_1)

{
  short *psVar1;
  byte bVar2;
  short *psVar3;
  ushort uVar4;
  size_t _Size;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  float *_Dst;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint local_14;
  int local_10;
  
  psVar3 = param_1;
  pbVar8 = *(byte **)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  iVar9 = 0;
  local_10 = 0;
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0;
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + _Size;
      } while (uVar6 < (ushort)param_1[4]);
      return iVar9;
    }
  }
  else {
    psVar1 = param_1 + 2;
    uVar6 = *param_1 + 1;
    param_1 = (short *)(uint)(ushort)(*psVar1 - 0x14U);
    if (0 < (short)((*psVar1 - 0x14U) - uVar6)) {
      param_1 = (short *)(uint)uVar6;
    }
    uVar4 = 0;
    if (psVar3[4] != 0) {
      do {
        local_14 = 0;
        pfVar11 = _Dst;
        if ((short)param_1 != 0) {
          local_14 = (uint)param_1;
          pbVar5 = pbVar8;
          uVar7 = (uint)param_1;
          pfVar10 = _Dst;
          do {
            bVar2 = *pbVar5;
            pfVar11 = pfVar10 + 1;
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 - 1;
            *pfVar10 = (float)bVar2 / 127.0 - 1.0;
            pfVar10 = pfVar11;
          } while (uVar7 != 0);
        }
        if ((ushort)local_14 < uVar6) {
          for (uVar7 = uVar6 - local_14 & 0xffff; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pfVar11 = 0.0;
            pfVar11 = pfVar11 + 1;
          }
        }
        iVar9 = local_10 + *(int *)(psVar3 + 0xe);
        pbVar8 = pbVar8 + *(int *)(psVar3 + 0xc);
        _Dst = (float *)((int)_Dst + *(int *)(psVar3 + 0x10));
        uVar4 = uVar4 + 1;
        local_10 = iVar9;
      } while (uVar4 < (ushort)psVar3[4]);
    }
  }
  return iVar9;
}



int FUN_0076ed90(short *param_1)

{
  short *psVar1;
  byte bVar2;
  short *psVar3;
  ushort uVar4;
  size_t _Size;
  byte *pbVar5;
  ushort uVar6;
  uint uVar7;
  byte *pbVar8;
  float *_Dst;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  uint local_14;
  int local_10;
  
  psVar3 = param_1;
  pbVar8 = *(byte **)(param_1 + 8);
  _Dst = *(float **)(param_1 + 0x12);
  iVar9 = 0;
  local_10 = 0;
  if (pbVar8 == (byte *)0x0) {
    uVar6 = 0;
    if (param_1[4] != 0) {
      _Size = *(size_t *)(param_1 + 0xe);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0xe);
        _Dst = (float *)((int)_Dst + *(int *)(param_1 + 0x10));
        uVar6 = uVar6 + 1;
        iVar9 = iVar9 + _Size;
      } while (uVar6 < (ushort)param_1[4]);
      return iVar9;
    }
  }
  else {
    psVar1 = param_1 + 2;
    uVar6 = *param_1 + 1;
    param_1 = (short *)(uint)(ushort)(*psVar1 - 0x18U);
    if (0 < (short)((*psVar1 - 0x18U) - uVar6)) {
      param_1 = (short *)(uint)uVar6;
    }
    uVar4 = 0;
    if (psVar3[4] != 0) {
      do {
        local_14 = 0;
        pfVar11 = _Dst;
        if ((short)param_1 != 0) {
          local_14 = (uint)param_1;
          pbVar5 = pbVar8;
          uVar7 = (uint)param_1;
          pfVar10 = _Dst;
          do {
            bVar2 = *pbVar5;
            pfVar11 = pfVar10 + 1;
            pbVar5 = pbVar5 + 1;
            uVar7 = uVar7 - 1;
            *pfVar10 = (float)bVar2 / 255.0;
            pfVar10 = pfVar11;
          } while (uVar7 != 0);
        }
        if ((ushort)local_14 < uVar6) {
          for (uVar7 = uVar6 - local_14 & 0xffff; uVar7 != 0; uVar7 = uVar7 - 1) {
            *pfVar11 = 0.0;
            pfVar11 = pfVar11 + 1;
          }
        }
        iVar9 = local_10 + *(int *)(psVar3 + 0xe);
        pbVar8 = pbVar8 + *(int *)(psVar3 + 0xc);
        _Dst = (float *)((int)_Dst + *(int *)(psVar3 + 0x10));
        uVar4 = uVar4 + 1;
        local_10 = iVar9;
      } while (uVar4 < (ushort)psVar3[4]);
    }
  }
  return iVar9;
}



int FUN_0076eeb0(int param_1)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  float *pfVar5;
  uint *puVar6;
  
  sVar1 = *(short *)(param_1 + 4);
  pfVar5 = *(float **)(param_1 + 0x10);
  puVar6 = *(uint **)(param_1 + 0x24);
  iVar2 = 0;
  uVar3 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    do {
      if (sVar1 == 3) {
        if (pfVar5 == (float *)0x0) {
          *puVar6 = 0xffffffff;
        }
        else {
          uVar4 = (((int)ROUND(*pfVar5 * 255.0) | 0xff00U) << 8 | (int)ROUND(pfVar5[1] * 255.0)) <<
                  8 | (int)ROUND(pfVar5[2] * 255.0);
LAB_0076ef61:
          *puVar6 = uVar4;
          pfVar5 = (float *)((int)pfVar5 + *(int *)(param_1 + 0x18));
        }
      }
      else {
        if (pfVar5 != (float *)0x0) {
          uVar4 = (((int)ROUND(pfVar5[3] * 255.0) << 8 | (int)ROUND(*pfVar5 * 255.0)) << 8 |
                  (int)ROUND(pfVar5[1] * 255.0)) << 8 | (int)ROUND(pfVar5[2] * 255.0);
          goto LAB_0076ef61;
        }
        *puVar6 = 0xffffffff;
      }
      puVar6 = (uint *)((int)puVar6 + *(int *)(param_1 + 0x20));
      iVar2 = iVar2 + *(int *)(param_1 + 0x1c);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(ushort *)(param_1 + 8));
  }
  return iVar2;
}



int FUN_0076f110(int param_1)

{
  short sVar1;
  int iVar2;
  ushort *puVar3;
  uint *puVar4;
  uint uVar5;
  ushort uVar6;
  
  puVar3 = *(ushort **)(param_1 + 0x10);
  puVar4 = *(uint **)(param_1 + 0x24);
  sVar1 = *(short *)(param_1 + 4);
  iVar2 = 0;
  uVar6 = 0;
  if (*(short *)(param_1 + 8) != 0) {
    do {
      if (sVar1 == 0xf) {
        if (puVar3 == (ushort *)0x0) goto LAB_0076f154;
        uVar5 = (int)(short)*puVar3 & 0xffffff00U | 0xffff0000;
LAB_0076f178:
        *puVar4 = (uVar5 << 8 | puVar3[1] & 0xff00) << 4 | (int)(uint)puVar3[2] >> 4 & 0xff0U;
        puVar3 = (ushort *)((int)puVar3 + *(int *)(param_1 + 0x18));
      }
      else {
        if (puVar3 != (ushort *)0x0) {
          uVar5 = ((int)(short)puVar3[3] & 0xffffff00U) << 8 | *puVar3 & 0xff00;
          goto LAB_0076f178;
        }
LAB_0076f154:
        *puVar4 = 0xfffffff0;
      }
      puVar4 = (uint *)((int)puVar4 + *(int *)(param_1 + 0x20));
      iVar2 = iVar2 + *(int *)(param_1 + 0x1c);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(param_1 + 8));
  }
  return iVar2;
}



int FUN_0076f2a0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *_Dst;
  int local_c;
  
  iVar2 = param_1;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  _Dst = *(undefined1 **)(param_1 + 0x24);
  uVar6 = 0;
  iVar7 = 0;
  local_c = 0;
  if (puVar5 == (undefined1 *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst,0xff,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst = _Dst + *(int *)(param_1 + 0x20);
        uVar6 = uVar6 + 1;
        iVar7 = iVar7 + _Size;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return iVar7;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 0x14);
    if (0 < (short)(*psVar1 + -0x18)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        puVar3 = puVar5;
        uVar4 = param_1;
        uVar8 = 0;
        if ((ushort)param_1 == 0) {
LAB_0076f358:
          uVar4 = 4 - uVar8 & 0xffff;
          _memset(_Dst,0,uVar4);
          _Dst = _Dst + uVar4;
        }
        else {
          do {
            *_Dst = *puVar3;
            _Dst = _Dst + 1;
            uVar4 = uVar4 - 1;
            puVar3 = puVar3 + 1;
          } while (uVar4 != 0);
          uVar8 = param_1;
          if ((ushort)param_1 < 4) goto LAB_0076f358;
        }
        iVar7 = local_c + *(int *)(iVar2 + 0x1c);
        puVar5 = puVar5 + *(int *)(iVar2 + 0x18);
        _Dst = _Dst + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
        local_c = iVar7;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return iVar7;
}



int FUN_0076f3b0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *_Dst;
  int local_8;
  
  iVar2 = param_1;
  iVar7 = *(int *)(param_1 + 0x10);
  _Dst = *(undefined1 **)(param_1 + 0x24);
  iVar5 = 0;
  local_8 = 0;
  if (iVar7 == 0) {
    uVar6 = 0;
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst,0xff,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst = _Dst + *(int *)(param_1 + 0x20);
        uVar6 = uVar6 + 1;
        iVar5 = iVar5 + _Size;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return iVar5;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 0x18);
    if (0 < (short)(*psVar1 + -0x1c)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        uVar4 = 0;
        if ((ushort)param_1 == 0) {
LAB_0076f470:
          _memset(_Dst + uVar4,0,4 - uVar4 & 0xffff);
        }
        else {
          puVar3 = _Dst;
          uVar4 = param_1;
          do {
            *puVar3 = puVar3[iVar7 - (int)_Dst];
            puVar3 = puVar3 + 1;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          uVar4 = param_1;
          if ((ushort)param_1 < 4) goto LAB_0076f470;
        }
        iVar7 = iVar7 + *(int *)(iVar2 + 0x18);
        iVar5 = local_8 + *(int *)(iVar2 + 0x1c);
        _Dst = _Dst + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
        local_8 = iVar5;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return iVar5;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a89c64;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a89c6c;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_0076f520(void)

{
  ushort uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  in_ECX[1] = &PTR__scalar_deleting_destructor__00a89c64;
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0x12) = 1;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[2] = 0;
  *in_ECX = 0x11;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0xe) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[2] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0xe));
  }
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  return;
}



void FUN_0076f570(byte param_1)

{
  FUN_0076e2a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4
FUN_0076f590(undefined2 param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 local_28;
  int local_24;
  undefined2 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar5 = param_5;
  iVar4 = param_4;
  local_20 = param_1;
  iVar1 = *(int *)(param_5 + 0xc);
  local_8 = param_6;
  local_4 = param_7;
  if (iVar1 == 0x11) {
    return 0;
  }
  local_c = *(undefined4 *)(&DAT_00b42708 + iVar1 * 4);
  iVar1 = *(int *)(*(int *)(DAT_00b42700 + 4) + iVar1 * 4);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = *(uint *)(param_5 + 8);
  switch(uVar2) {
  case 0:
    local_18 = *(int *)(param_2 + 0x1c);
    local_14 = 0xc;
    param_6 = 3;
    local_10 = local_14;
    break;
  case 1:
    if (param_4 == 0) {
      return 0;
    }
    switch(*(undefined2 *)(param_4 + 0x24)) {
    case 1:
      local_18 = *(int *)(param_4 + 8);
      param_6 = 1;
      local_14 = 4;
      local_10 = 4;
      break;
    case 2:
      local_18 = *(int *)(param_4 + 8);
      param_6 = 2;
      local_14 = 8;
      local_10 = 8;
      break;
    case 3:
      local_18 = *(int *)(param_4 + 8);
      local_14 = 0xc;
      local_10 = 0xc;
      param_6 = 3;
      break;
    case 4:
      local_14 = 0xc;
      local_10 = 0x10;
      param_6 = 3;
    default:
      local_18 = *(int *)(param_4 + 8);
    }
    break;
  case 2:
    if (param_4 == 0) {
      return 0;
    }
    local_18 = *(int *)(param_4 + 0x10);
    if (local_18 == 0) {
      return 0;
    }
    switch(*(undefined2 *)(param_4 + 0x24)) {
    case 1:
      param_6 = 0x19;
      local_14 = 1;
      local_10 = 1;
      break;
    case 2:
      param_6 = 0x1a;
      local_14 = 2;
      local_10 = 2;
      break;
    case 3:
      param_6 = 0x1b;
      local_14 = 3;
      local_10 = 3;
      break;
    case 4:
      param_6 = 0x1c;
      local_14 = 4;
      local_10 = 4;
    }
    break;
  case 3:
    local_18 = *(int *)(param_2 + 0x20);
    local_14 = 0xc;
    param_6 = 3;
    local_10 = local_14;
    break;
  case 4:
    local_18 = *(int *)(param_2 + 0x24);
    local_14 = 0x10;
    param_6 = 4;
    local_10 = local_14;
    break;
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    local_18 = FUN_007282f0((short)uVar2 + -5);
    local_14 = 8;
    param_6 = 2;
    local_10 = local_14;
    break;
  case 0xd:
    local_18 = *(int *)(param_2 + 0x20) + (uint)*(ushort *)(param_2 + 8) * 0x18;
    goto LAB_0076f7c4;
  case 0xe:
    local_18 = *(int *)(param_2 + 0x20) + (uint)*(ushort *)(param_2 + 8) * 0xc;
LAB_0076f7c4:
    local_14 = 0xc;
    param_6 = 3;
    local_10 = local_14;
    break;
  case 0xffffffff:
    goto switchD_0076f600_caseD_ffffffff;
  default:
    if ((int)uVar2 < 0) {
      cVar6 = FUN_00726320(uVar2 & 0x7fffffff,&param_7,&param_6,&param_1,&param_5,&local_14,
                           &local_10);
      if (cVar6 == '\0') {
        local_14 = 0;
        local_18 = 0;
        param_6 = 0;
        local_10 = local_14;
      }
      else {
        local_18 = param_7;
      }
    }
  }
  pcVar3 = *(code **)(*(int *)(iVar1 + 8) + param_6 * 4);
  if (pcVar3 != (code *)0x0) {
    local_1c = 0;
    if (((iVar4 != 0) && (iVar1 = *(int *)(iVar5 + 8), iVar1 != 1)) && (iVar1 != 2)) {
      local_1c = *(undefined4 *)(iVar4 + 0xc);
    }
    local_28 = *(undefined4 *)(iVar5 + 0xc);
    local_24 = param_6;
    if (local_18 != 0) {
      uVar7 = (*pcVar3)(&local_28);
      return uVar7;
    }
  }
switchD_0076f600_caseD_ffffffff:
  return 0;
}



void FUN_0076f900(void)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  uVar6 = 0;
  puVar5 = DAT_00b42700;
  if (*(short *)((int)DAT_00b42700 + 10) != 0) {
    do {
      iVar2 = *(int *)(puVar5[1] + uVar6 * 4);
      if (iVar2 != 0) {
        uVar3 = 0;
        if (*(short *)(iVar2 + 0xe) != 0) {
          do {
            uVar4 = (uint)uVar3;
            uVar3 = uVar3 + 1;
            *(undefined4 *)(*(int *)(iVar2 + 8) + uVar4 * 4) = 0;
          } while (uVar3 < *(ushort *)(iVar2 + 0xe));
        }
        *(undefined2 *)(iVar2 + 0xe) = 0;
        *(undefined2 *)(iVar2 + 0x10) = 0;
        *(undefined ***)(iVar2 + 4) = &PTR__scalar_deleting_destructor__00a89c64;
        FUN_00401f20(*(undefined4 *)(iVar2 + 8));
        FUN_00401f20(iVar2);
        puVar5 = DAT_00b42700;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)((int)puVar5 + 10));
  }
  puVar1 = (ushort *)((int)puVar5 + 10);
  uVar3 = 0;
  if (*puVar1 != 0) {
    do {
      uVar6 = (uint)uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(puVar5[1] + uVar6 * 4) = 0;
    } while (uVar3 < *puVar1);
  }
  *(undefined2 *)(puVar5 + 3) = 0;
  *puVar1 = 0;
  if (DAT_00b42700 != (undefined4 *)0x0) {
    (**(code **)*DAT_00b42700)(1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0076f9b0(void)

{
  int iVar1;
  uint *in_ECX;
  uint uVar2;
  uint uVar3;
  uint *local_4;
  
  if (*(short *)(DAT_00b42700 + 10) != 0x12) {
    _DAT_00b42708 = 4;
    _DAT_00b4270c = 8;
    _DAT_00b42710 = 0xc;
    _DAT_00b42714 = 0x10;
    _DAT_00b42718 = 4;
    _DAT_00b4271c = 4;
    _DAT_00b42720 = 4;
    _DAT_00b42724 = 8;
    _DAT_00b42728 = 4;
    _DAT_00b4272c = 4;
    _DAT_00b42730 = 8;
    _DAT_00b42734 = 4;
    _DAT_00b42738 = 8;
    _DAT_00b4273c = 4;
    _DAT_00b42740 = 4;
    _DAT_00b42744 = 4;
    _DAT_00b42748 = 8;
    uVar2 = 0;
    local_4 = in_ECX;
    do {
      iVar1 = FUN_00401f00(0x14);
      if (iVar1 == 0) {
        local_4 = (uint *)0x0;
      }
      else {
        local_4 = (uint *)FUN_0076f520();
      }
      *local_4 = uVar2;
      FUN_004e4a10(0x26);
      if (*(ushort *)(DAT_00b42700 + 8) <= uVar2) {
        FUN_004e4a10(*(ushort *)(DAT_00b42700 + 0xe) + uVar2);
      }
      FUN_0042bb90(uVar2,&local_4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x12);
    uVar2 = 0;
    do {
      uVar3 = 0;
      do {
        FUN_00771300(uVar2,uVar3);
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x21);
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x12);
  }
  return 1;
}



void FUN_0076fac0(void)

{
  DAT_00b42700 = (undefined4 *)FUN_00401f00(0x10);
  if (DAT_00b42700 != (undefined4 *)0x0) {
    *DAT_00b42700 = &PTR__scalar_deleting_destructor__00a89c6c;
    *(undefined2 *)(DAT_00b42700 + 2) = 0;
    *(undefined2 *)((int)DAT_00b42700 + 0xe) = 1;
    *(undefined2 *)((int)DAT_00b42700 + 10) = 0;
    *(undefined2 *)(DAT_00b42700 + 3) = 0;
    DAT_00b42700[1] = 0;
    FUN_0076f9b0();
    return;
  }
  DAT_00b42700 = (undefined4 *)0x0;
  FUN_0076f9b0();
  return;
}



void FUN_0076fb00(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0xffffffff;
  in_ECX[3] = 0x11;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  return;
}



uint FUN_0076fb30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  int *in_ECX;
  undefined4 uVar3;
  
  uVar3 = 0;
  switch(param_3) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = 1;
    break;
  case 2:
    uVar1 = 2;
    break;
  case 3:
    uVar1 = 3;
    break;
  case 4:
    uVar1 = 10;
    break;
  case 5:
    uVar1 = 5;
    break;
  case 6:
    uVar1 = 5;
    uVar3 = 1;
    break;
  case 7:
    uVar1 = 5;
    uVar3 = 2;
    break;
  case 8:
    uVar1 = 5;
    uVar3 = 3;
    break;
  case 9:
    uVar1 = 5;
    uVar3 = 4;
    break;
  case 10:
    uVar1 = 5;
    uVar3 = 5;
    break;
  case 0xb:
    uVar1 = 5;
    uVar3 = 6;
    break;
  case 0xc:
    uVar1 = 5;
    uVar3 = 7;
    break;
  case 0xd:
    uVar1 = 6;
    break;
  case 0xe:
    uVar1 = 7;
    break;
  default:
    return in_EAX & 0xffffff00;
  }
  uVar2 = (**(code **)(*in_ECX + 0x4c))(param_5,param_1,param_2,param_3,param_4,uVar1,uVar3,0);
  return uVar2;
}



undefined4
FUN_0076fc40(uint param_1,uint param_2,undefined4 param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  if ((param_2 < *(uint *)(in_ECX + 0x1c)) && (param_1 < *(uint *)(in_ECX + 0x20))) {
    iVar2 = *(int *)(param_1 * 0x10 + 8 + *(int *)(in_ECX + 0x24));
    iVar1 = iVar2 + param_2 * 0x1c;
    if (((*(int *)(iVar2 + 8 + param_2 * 0x1c) != param_4) ||
        (((*(int *)(iVar1 + 0xc) != param_5 || (*(int *)(iVar1 + 0x14) != param_6)) ||
         (*(int *)(iVar1 + 0x18) != param_7)))) || (*(int *)(iVar1 + 0x10) != param_8)) {
      *(int *)(iVar1 + 8) = param_4;
      *(int *)(iVar1 + 0xc) = param_5;
      *(int *)(iVar1 + 0x14) = param_6;
      *(int *)(iVar1 + 0x18) = param_7;
      *(int *)(iVar1 + 0x10) = param_8;
      if ((param_4 == 1) && (param_5 != 0x10)) {
        *(undefined4 *)(iVar1 + 0xc) = 2;
      }
      piVar3 = *(int **)(in_ECX + 0x30);
      *(undefined1 *)(in_ECX + 0x28) = 1;
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
        *(undefined4 *)(in_ECX + 0x30) = 0;
      }
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_0076fcf0(uint param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if ((param_1 < *(uint *)(in_ECX + 0x1c)) && (param_2 < *(uint *)(in_ECX + 0x20))) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x24) + 8 + param_2 * 0x10) + param_1 * 0x1c;
    *(undefined4 *)(iVar1 + 8) = 0xffffffff;
    *(undefined4 *)(iVar1 + 0xc) = 0x11;
    piVar2 = *(int **)(in_ECX + 0x30);
    *(undefined1 *)(in_ECX + 0x28) = 1;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
      *(undefined4 *)(in_ECX + 0x30) = 0;
    }
    return 1;
  }
  return 0;
}



/* WARNING: Type propagation algorithm not settling */

int FUN_0076fe20(int *param_1,int param_2,int param_3,byte param_4,int param_5,uint param_6,
                int param_7)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  undefined1 uVar15;
  int *in_ECX;
  int iVar16;
  int iVar17;
  int iVar18;
  uint local_38;
  undefined4 local_34;
  uint uStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 local_1c;
  int aiStack_18 [4];
  uint uStack_8;
  
  if (param_3 == 0) {
    local_38 = (**(code **)(*param_1 + 0x50))();
    local_38 = local_38 & 0xffff;
  }
  else {
    local_38 = (uint)*(ushort *)(param_3 + 0x1c);
  }
  if ((short)local_38 == 0) {
    return param_5;
  }
  local_34 = 0;
  local_1c = 0;
  cVar14 = (**(code **)(*in_ECX + 0x70))(&local_34,&local_1c);
  if (cVar14 != '\0') {
    if (param_3 == 0) {
      iVar17 = param_1[0xe];
    }
    else {
      iVar17 = *(int *)(param_3 + 0x28);
    }
    FUN_007780d0(local_34);
    if (param_6 < *(uint *)(iVar17 + 0x1c)) {
      *(undefined4 *)(*(int *)(iVar17 + 0x20) + param_6 * 4) =
           *(undefined4 *)(param_6 * 0x10 + 0xc + in_ECX[9]);
    }
    if (*(char *)(in_ECX[2] + 0x5c8) != '\0') {
      uVar15 = (**(code **)(*in_ECX + 0x68))();
      *(undefined1 *)(iVar17 + 0x10) = uVar15;
    }
    bVar4 = true;
    if (param_7 == 0) {
      if ((((param_5 == 0) || (piVar1 = *(int **)(param_5 + 8), piVar1 == (int *)0x0)) ||
          ((*(ushort *)((int)param_1 + 0x2e) & 0xf000) == 0x8000)) ||
         (((**(code **)(*piVar1 + 0x34))(piVar1,aiStack_18), aiStack_18[0] != 100 ||
          (iVar18 = (**(code **)(*in_ECX + 0x60))(param_6), uStack_8 < iVar18 * local_38)))) {
        cVar14 = FUN_00776c40(iVar17,param_6);
        if (cVar14 == '\0') {
          return 0;
        }
        param_5 = FUN_00761ac0(param_6);
        param_4 = 0xff;
      }
      param_7 = FUN_00776c90(*(undefined4 *)(param_5 + 8),*(undefined4 *)(param_5 + 0xc),
                             *(undefined4 *)(param_5 + 0x14),*(undefined4 *)(param_5 + 0x10));
    }
    else {
      bVar4 = false;
    }
    if ((param_2 == 0) || (bVar5 = true, param_3 != 0)) {
      bVar5 = false;
    }
    iVar17 = param_6 * 0x10 + in_ECX[9];
    iStack_20 = 0;
    iStack_24 = 0;
    iStack_28 = 0;
    iStack_2c = 0;
    if ((iVar17 != 0) && (uStack_30 = 0, in_ECX[7] != 0)) {
      iVar18 = 0;
      do {
        iVar2 = *(int *)(iVar17 + 8);
        iVar16 = *(int *)(iVar2 + 4 + iVar18) + param_7;
        iVar10 = iStack_2c;
        iVar11 = iStack_28;
        iVar12 = iStack_24;
        iVar13 = iStack_20;
        iVar6 = iStack_28;
        iVar7 = iStack_2c;
        iVar8 = iStack_24;
        iVar9 = iStack_20;
        switch(*(undefined4 *)(iVar2 + 8 + iVar18)) {
        case 0:
          bVar3 = param_4 & 1;
          iVar9 = iVar16;
          break;
        default:
          goto switchD_0076fff0_caseD_1;
        case 3:
          bVar3 = param_4 & 2;
          iVar8 = iVar16;
          break;
        case 4:
          bVar3 = param_4 & 4;
          goto LAB_00770053;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          bVar3 = param_4 & 8;
LAB_00770053:
          if (bVar3 != 0) goto switchD_0076fff0_caseD_1;
          goto LAB_00770072;
        case 0xd:
          iVar7 = iVar16;
          goto joined_r0x00770024;
        case 0xe:
          iVar6 = iVar16;
joined_r0x00770024:
          bVar3 = param_4 & 2;
        }
        if ((bVar3 != 0) && (iVar10 = iVar7, iVar11 = iVar6, iVar12 = iVar8, iVar13 = iVar9, !bVar5)
           ) {
switchD_0076fff0_caseD_1:
          FUN_0076f590(local_38,param_1,param_2,param_3,iVar2 + iVar18,*(undefined4 *)(iVar17 + 0xc)
                       ,iVar16);
          iVar10 = iStack_2c;
          iVar11 = iStack_28;
          iVar12 = iStack_24;
          iVar13 = iStack_20;
        }
LAB_00770072:
        iStack_20 = iVar13;
        iStack_24 = iVar12;
        iStack_28 = iVar11;
        iStack_2c = iVar10;
        uStack_30 = uStack_30 + 1;
        iVar18 = iVar18 + 0x1c;
      } while (uStack_30 < (uint)in_ECX[7]);
    }
    if (bVar5) {
      FUN_0072af20(param_1[7],param_1[8],(short)param_1[2],iStack_20,iStack_24,iStack_28,iStack_2c,
                   *(undefined4 *)(iVar17 + 0xc));
    }
    if (!bVar4) {
      return param_5;
    }
    cVar14 = FUN_00776d80(*(undefined4 *)(param_5 + 8));
    if (cVar14 != '\0') {
      return param_5;
    }
  }
  return 0;
}


