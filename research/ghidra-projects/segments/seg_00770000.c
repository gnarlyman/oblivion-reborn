
bool FUN_00770120(int *param_1,int *param_2)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x74))();
  *param_1 = iVar1;
  *param_2 = in_ECX[8];
  return *param_1 != 0;
}



undefined4 FUN_00770150(int param_1,undefined2 param_2)

{
  int in_ECX;
  
  *(undefined2 *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x18) * 8) = param_2;
  *(undefined2 *)(*(int *)(in_ECX + 0x2c) + 2 + *(int *)(in_ECX + 0x18) * 8) =
       *(undefined2 *)(param_1 + 4);
  *(undefined *)(*(int *)(in_ECX + 0x2c) + 4 + *(int *)(in_ECX + 0x18) * 8) =
       (&DAT_00b29858)[*(int *)(param_1 + 0xc) * 4];
  *(undefined *)(*(int *)(in_ECX + 0x2c) + 5 + *(int *)(in_ECX + 0x18) * 8) =
       (&DAT_00b2983c)[*(int *)(param_1 + 0x10) * 4];
  *(undefined *)(*(int *)(in_ECX + 0x2c) + 6 + *(int *)(in_ECX + 0x18) * 8) =
       (&DAT_00b298a0)[*(int *)(param_1 + 0x14) * 4];
  *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 7 + *(int *)(in_ECX + 0x18) * 8) =
       *(undefined1 *)(param_1 + 0x18);
  *(int *)(in_ECX + 0x18) = *(int *)(in_ECX + 0x18) + 1;
  if (0x11 < *(int *)(param_1 + 0xc)) {
    return 0;
  }
  return *(undefined4 *)(&DAT_00b42708 + *(int *)(param_1 + 0xc) * 4);
}



int FUN_007701e0(int *param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  size_t _Size;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 *_Dst;
  int iVar8;
  undefined4 *puVar9;
  int local_18;
  uint local_14;
  
  _Dst = (undefined4 *)param_1[9];
  iVar8 = 0;
  local_18 = 0;
  if (param_1[4] == 0) {
    if ((short)param_1[2] != 0) {
      _Size = param_1[7];
      uVar7 = 0;
      do {
        _memset(_Dst,0,_Size);
        _Size = param_1[7];
        _Dst = (undefined4 *)((int)_Dst + param_1[8]);
        uVar7 = uVar7 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar7 < *(ushort *)(param_1 + 2));
      return iVar8;
    }
  }
  else {
    uVar7 = *(ushort *)(param_1 + 1);
    uVar4 = (uint)uVar7;
    uVar1 = (uint)(*param_1 != 6) * 2 + 2;
    uVar2 = (ushort)uVar1;
    if (uVar7 != uVar2 && -1 < (short)(uVar7 - uVar2)) {
      uVar4 = uVar1;
    }
    uVar7 = 0;
    if ((short)param_1[2] != 0) {
      do {
        uVar6 = 0;
        puVar9 = _Dst;
        local_14 = uVar4;
        if ((short)uVar4 != 0) {
          do {
            uVar3 = FUN_009828c0();
            *(undefined2 *)puVar9 = uVar3;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
            local_14 = local_14 - 1;
            uVar6 = uVar4;
          } while (local_14 != 0);
        }
        if ((ushort)uVar6 < uVar2) {
          for (uVar5 = (uVar1 - uVar6 & 0xffff) >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar9 = 0;
            puVar9 = puVar9 + 1;
          }
          for (uVar6 = (uint)((uVar1 - uVar6 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar9 = 0;
            puVar9 = (undefined4 *)((int)puVar9 + 2);
          }
        }
        iVar8 = local_18 + param_1[7];
        _Dst = (undefined4 *)((int)_Dst + param_1[8]);
        uVar7 = uVar7 + 1;
        local_18 = iVar8;
      } while (uVar7 < *(ushort *)(param_1 + 2));
    }
  }
  return iVar8;
}



int FUN_00770420(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  size_t _Size;
  undefined2 *puVar5;
  uint uVar6;
  undefined2 *puVar7;
  undefined4 *_Dst;
  int iVar8;
  ushort uVar9;
  undefined4 *puVar10;
  uint local_10;
  int local_c;
  
  piVar3 = param_1;
  puVar7 = (undefined2 *)param_1[4];
  _Dst = (undefined4 *)param_1[9];
  iVar8 = 0;
  local_c = 0;
  if (puVar7 == (undefined2 *)0x0) {
    uVar9 = 0;
    if ((short)param_1[2] != 0) {
      _Size = param_1[7];
      do {
        _memset(_Dst,0,_Size);
        _Size = param_1[7];
        _Dst = (undefined4 *)((int)_Dst + param_1[8]);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar9 < *(ushort *)(param_1 + 2));
      return iVar8;
    }
  }
  else {
    uVar4 = (short)param_1[1] - 8;
    iVar2 = *param_1;
    param_1 = (int *)(uint)uVar4;
    uVar1 = (uint)(iVar2 != 6) * 2 + 2;
    uVar9 = (ushort)uVar1;
    if (uVar4 != uVar9 && -1 < (short)(uVar4 - uVar9)) {
      param_1 = (int *)uVar1;
    }
    uVar4 = 0;
    if ((short)piVar3[2] != 0) {
      do {
        local_10 = 0;
        puVar10 = _Dst;
        if ((short)param_1 != 0) {
          local_10 = (uint)param_1;
          puVar5 = puVar7;
          uVar6 = (uint)param_1;
          do {
            *(undefined2 *)puVar10 = *puVar5;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
            puVar5 = puVar5 + 2;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if ((ushort)local_10 < uVar9) {
          for (uVar6 = (uVar1 - local_10 & 0xffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = (uint)((uVar1 - local_10 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined2 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 2);
          }
        }
        iVar8 = local_c + piVar3[7];
        puVar7 = (undefined2 *)((int)puVar7 + piVar3[6]);
        _Dst = (undefined4 *)((int)_Dst + piVar3[8]);
        uVar4 = uVar4 + 1;
        local_c = iVar8;
      } while (uVar4 < *(ushort *)(piVar3 + 2));
    }
  }
  return iVar8;
}



int FUN_00770540(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  size_t sVar3;
  uint uVar4;
  void *_Dst;
  ushort uVar5;
  void *_Src;
  undefined4 *puVar6;
  int local_10;
  
  _Src = (void *)param_1[4];
  _Dst = (void *)param_1[9];
  local_10 = 0;
  if (_Src == (void *)0x0) {
    uVar5 = 0;
    if ((short)param_1[2] != 0) {
      sVar3 = param_1[7];
      do {
        _memset(_Dst,0,sVar3);
        sVar3 = param_1[7];
        _Dst = (void *)((int)_Dst + param_1[8]);
        local_10 = local_10 + sVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 2));
      return local_10;
    }
  }
  else {
    uVar1 = (short)param_1[1] - 0xc;
    uVar5 = (ushort)(*param_1 != 6) * 2 + 2;
    if (uVar1 == uVar5 || (short)(uVar1 - uVar5) < 0) {
      sVar3 = param_1[5];
    }
    else {
      sVar3 = param_1[7];
      uVar1 = uVar5;
    }
    uVar2 = 0;
    if ((short)param_1[2] != 0) {
      do {
        _memcpy(_Dst,_Src,sVar3);
        if (uVar1 < uVar5) {
          puVar6 = (undefined4 *)((int)_Dst + 2);
          for (uVar4 = (uint)((ushort)(uVar5 - uVar1) >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = (uint)((uVar5 - uVar1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined2 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 2);
          }
        }
        _Src = (void *)((int)_Src + param_1[6]);
        _Dst = (void *)((int)_Dst + param_1[8]);
        local_10 = local_10 + param_1[7];
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
  }
  return local_10;
}



int FUN_00770640(int *param_1)

{
  ushort uVar1;
  ushort uVar2;
  size_t sVar3;
  uint uVar4;
  void *_Dst;
  ushort uVar5;
  void *_Src;
  undefined4 *puVar6;
  int local_10;
  
  _Src = (void *)param_1[4];
  _Dst = (void *)param_1[9];
  local_10 = 0;
  if (_Src == (void *)0x0) {
    uVar5 = 0;
    if ((short)param_1[2] != 0) {
      sVar3 = param_1[7];
      do {
        _memset(_Dst,0,sVar3);
        sVar3 = param_1[7];
        _Dst = (void *)((int)_Dst + param_1[8]);
        local_10 = local_10 + sVar3;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 2));
      return local_10;
    }
  }
  else {
    uVar1 = (short)param_1[1] - 0x10;
    uVar5 = (ushort)(*param_1 != 6) * 2 + 2;
    if (uVar1 == uVar5 || (short)(uVar1 - uVar5) < 0) {
      sVar3 = param_1[5];
    }
    else {
      sVar3 = param_1[7];
      uVar1 = uVar5;
    }
    uVar2 = 0;
    if ((short)param_1[2] != 0) {
      do {
        _memcpy(_Dst,_Src,sVar3);
        if (uVar1 < uVar5) {
          puVar6 = (undefined4 *)((int)_Dst + 2);
          for (uVar4 = (uint)((ushort)(uVar5 - uVar1) >> 1); uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          for (uVar4 = (uint)((uVar5 - uVar1 & 1) != 0); uVar4 != 0; uVar4 = uVar4 - 1) {
            *(undefined2 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 2);
          }
        }
        _Src = (void *)((int)_Src + param_1[6]);
        _Dst = (void *)((int)_Dst + param_1[8]);
        local_10 = local_10 + param_1[7];
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_1 + 2));
    }
  }
  return local_10;
}



int FUN_00770740(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  size_t _Size;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *_Dst;
  int iVar8;
  ushort uVar9;
  ushort *puVar10;
  uint local_10;
  int local_c;
  
  piVar3 = param_1;
  pbVar7 = (byte *)param_1[4];
  _Dst = (ushort *)param_1[9];
  iVar8 = 0;
  local_c = 0;
  if (pbVar7 == (byte *)0x0) {
    uVar9 = 0;
    if ((short)param_1[2] != 0) {
      _Size = param_1[7];
      do {
        _memset(_Dst,0,_Size);
        _Size = param_1[7];
        _Dst = (ushort *)((int)_Dst + param_1[8]);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar9 < *(ushort *)(param_1 + 2));
      return iVar8;
    }
  }
  else {
    uVar4 = (short)param_1[1] - 0x14;
    iVar2 = *param_1;
    param_1 = (int *)(uint)uVar4;
    uVar1 = (uint)(iVar2 != 6) * 2 + 2;
    uVar9 = (ushort)uVar1;
    if (uVar4 != uVar9 && -1 < (short)(uVar4 - uVar9)) {
      param_1 = (int *)uVar1;
    }
    uVar4 = 0;
    if ((short)piVar3[2] != 0) {
      do {
        local_10 = 0;
        puVar10 = _Dst;
        if ((short)param_1 != 0) {
          local_10 = (uint)param_1;
          pbVar5 = pbVar7;
          uVar6 = (uint)param_1;
          do {
            *puVar10 = (ushort)*pbVar5;
            puVar10 = puVar10 + 1;
            pbVar5 = pbVar5 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if ((ushort)local_10 < uVar9) {
          for (uVar6 = (uVar1 - local_10 & 0xffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar10[0] = 0;
            puVar10[1] = 0;
            puVar10 = puVar10 + 2;
          }
          for (uVar6 = (uint)((uVar1 - local_10 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
        iVar8 = local_c + piVar3[7];
        pbVar7 = pbVar7 + piVar3[6];
        _Dst = (ushort *)((int)_Dst + piVar3[8]);
        uVar4 = uVar4 + 1;
        local_c = iVar8;
      } while (uVar4 < *(ushort *)(piVar3 + 2));
    }
  }
  return iVar8;
}



int FUN_00770860(int *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  ushort uVar4;
  size_t _Size;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  ushort *_Dst;
  int iVar8;
  ushort uVar9;
  ushort *puVar10;
  uint local_10;
  int local_c;
  
  piVar3 = param_1;
  pbVar7 = (byte *)param_1[4];
  _Dst = (ushort *)param_1[9];
  iVar8 = 0;
  local_c = 0;
  if (pbVar7 == (byte *)0x0) {
    uVar9 = 0;
    if ((short)param_1[2] != 0) {
      _Size = param_1[7];
      do {
        _memset(_Dst,0,_Size);
        _Size = param_1[7];
        _Dst = (ushort *)((int)_Dst + param_1[8]);
        uVar9 = uVar9 + 1;
        iVar8 = iVar8 + _Size;
      } while (uVar9 < *(ushort *)(param_1 + 2));
      return iVar8;
    }
  }
  else {
    uVar4 = (short)param_1[1] - 0x18;
    iVar2 = *param_1;
    param_1 = (int *)(uint)uVar4;
    uVar1 = (uint)(iVar2 != 6) * 2 + 2;
    uVar9 = (ushort)uVar1;
    if (uVar4 != uVar9 && -1 < (short)(uVar4 - uVar9)) {
      param_1 = (int *)uVar1;
    }
    uVar4 = 0;
    if ((short)piVar3[2] != 0) {
      do {
        local_10 = 0;
        puVar10 = _Dst;
        if ((short)param_1 != 0) {
          local_10 = (uint)param_1;
          pbVar5 = pbVar7;
          uVar6 = (uint)param_1;
          do {
            *puVar10 = (ushort)*pbVar5;
            puVar10 = puVar10 + 1;
            pbVar5 = pbVar5 + 1;
            uVar6 = uVar6 - 1;
          } while (uVar6 != 0);
        }
        if ((ushort)local_10 < uVar9) {
          for (uVar6 = (uVar1 - local_10 & 0xffff) >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
            puVar10[0] = 0;
            puVar10[1] = 0;
            puVar10 = puVar10 + 2;
          }
          for (uVar6 = (uint)((uVar1 - local_10 & 1) != 0); uVar6 != 0; uVar6 = uVar6 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
        }
        iVar8 = local_c + piVar3[7];
        pbVar7 = pbVar7 + piVar3[6];
        _Dst = (ushort *)((int)_Dst + piVar3[8]);
        uVar4 = uVar4 + 1;
        local_c = iVar8;
      } while (uVar4 < *(ushort *)(piVar3 + 2));
    }
  }
  return iVar8;
}



int FUN_00770980(int param_1)

{
  size_t _Size;
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *_Dst;
  float *pfVar3;
  float *pfVar4;
  ushort uVar5;
  uint uVar6;
  undefined1 *_Dst_00;
  int local_14;
  uint local_10;
  undefined1 local_4;
  
  pfVar4 = *(float **)(param_1 + 0x10);
  uVar5 = 0;
  _Dst_00 = *(undefined1 **)(param_1 + 0x24);
  local_14 = 0;
  if (pfVar4 == (float *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst_00,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_14 = local_14 + _Size;
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 8));
      return local_14;
    }
  }
  else {
    local_10 = (uint)*(ushort *)(param_1 + 4);
    if (0 < (short)(*(ushort *)(param_1 + 4) - 4)) {
      local_10 = 4;
    }
    uVar5 = 0;
    if (*(short *)(param_1 + 8) != 0) {
      do {
        uVar1 = 0;
        puVar2 = _Dst_00;
        _Dst = _Dst_00;
        pfVar3 = pfVar4;
        uVar6 = local_10;
        if ((ushort)local_10 == 0) {
LAB_00770a5e:
          _memset(_Dst,0,4 - uVar1 & 0xffff);
        }
        else {
          do {
            _Dst = puVar2 + 1;
            uVar6 = uVar6 - 1;
            local_4 = (undefined1)(int)ROUND(*pfVar3);
            *puVar2 = local_4;
            puVar2 = _Dst;
            pfVar3 = pfVar3 + 1;
          } while (uVar6 != 0);
          uVar1 = local_10;
          if ((ushort)local_10 < 4) goto LAB_00770a5e;
        }
        pfVar4 = (float *)((int)pfVar4 + *(int *)(param_1 + 0x18));
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_14 = local_14 + *(int *)(param_1 + 0x1c);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(ushort *)(param_1 + 8));
    }
  }
  return local_14;
}



int FUN_00770ab0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *_Dst_00;
  int local_c;
  
  iVar2 = param_1;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  uVar6 = 0;
  _Dst_00 = *(undefined1 **)(param_1 + 0x24);
  local_c = 0;
  if (puVar5 == (undefined1 *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst_00,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_c = local_c + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return local_c;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 4);
    if (0 < (short)(*psVar1 + -8)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        _Dst = _Dst_00;
        puVar3 = puVar5;
        uVar4 = 0;
        uVar7 = param_1;
        if ((ushort)param_1 == 0) {
LAB_00770b69:
          _memset(_Dst,0,4 - uVar4 & 0xffff);
        }
        else {
          do {
            *_Dst = *puVar3;
            _Dst = _Dst + 1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 4;
          } while (uVar7 != 0);
          uVar4 = param_1;
          if ((ushort)param_1 < 4) goto LAB_00770b69;
        }
        local_c = local_c + *(int *)(iVar2 + 0x1c);
        puVar5 = puVar5 + *(int *)(iVar2 + 0x18);
        _Dst_00 = _Dst_00 + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return local_c;
}



int FUN_00770bb0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *_Dst_00;
  int local_c;
  
  iVar2 = param_1;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  uVar6 = 0;
  _Dst_00 = *(undefined1 **)(param_1 + 0x24);
  local_c = 0;
  if (puVar5 == (undefined1 *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst_00,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_c = local_c + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return local_c;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 8);
    if (0 < (short)(*psVar1 + -0xc)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        _Dst = _Dst_00;
        puVar3 = puVar5;
        uVar4 = 0;
        uVar7 = param_1;
        if ((ushort)param_1 == 0) {
LAB_00770c69:
          _memset(_Dst,0,4 - uVar4 & 0xffff);
        }
        else {
          do {
            *_Dst = *puVar3;
            _Dst = _Dst + 1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 4;
          } while (uVar7 != 0);
          uVar4 = param_1;
          if ((ushort)param_1 < 4) goto LAB_00770c69;
        }
        local_c = local_c + *(int *)(iVar2 + 0x1c);
        puVar5 = puVar5 + *(int *)(iVar2 + 0x18);
        _Dst_00 = _Dst_00 + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return local_c;
}



int FUN_00770cb0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *_Dst_00;
  int local_c;
  
  iVar2 = param_1;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  uVar6 = 0;
  _Dst_00 = *(undefined1 **)(param_1 + 0x24);
  local_c = 0;
  if (puVar5 == (undefined1 *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst_00,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_c = local_c + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return local_c;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 0xc);
    if (0 < (short)(*psVar1 + -0x10)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        _Dst = _Dst_00;
        puVar3 = puVar5;
        uVar4 = 0;
        uVar7 = param_1;
        if ((ushort)param_1 == 0) {
LAB_00770d69:
          _memset(_Dst,0,4 - uVar4 & 0xffff);
        }
        else {
          do {
            *_Dst = *puVar3;
            _Dst = _Dst + 1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 2;
          } while (uVar7 != 0);
          uVar4 = param_1;
          if ((ushort)param_1 < 4) goto LAB_00770d69;
        }
        local_c = local_c + *(int *)(iVar2 + 0x1c);
        puVar5 = puVar5 + *(int *)(iVar2 + 0x18);
        _Dst_00 = _Dst_00 + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return local_c;
}



int FUN_00770db0(uint param_1)

{
  short *psVar1;
  int iVar2;
  size_t _Size;
  undefined1 *_Dst;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  ushort uVar6;
  uint uVar7;
  undefined1 *_Dst_00;
  int local_c;
  
  iVar2 = param_1;
  puVar5 = *(undefined1 **)(param_1 + 0x10);
  uVar6 = 0;
  _Dst_00 = *(undefined1 **)(param_1 + 0x24);
  local_c = 0;
  if (puVar5 == (undefined1 *)0x0) {
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst_00,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst_00 = _Dst_00 + *(int *)(param_1 + 0x20);
        local_c = local_c + _Size;
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(param_1 + 8));
      return local_c;
    }
  }
  else {
    psVar1 = (short *)(param_1 + 4);
    param_1 = (uint)(ushort)(*psVar1 - 0x10);
    if (0 < (short)(*psVar1 + -0x14)) {
      param_1 = 4;
    }
    uVar6 = 0;
    if (*(short *)(iVar2 + 8) != 0) {
      do {
        _Dst = _Dst_00;
        puVar3 = puVar5;
        uVar4 = 0;
        uVar7 = param_1;
        if ((ushort)param_1 == 0) {
LAB_00770e69:
          _memset(_Dst,0,4 - uVar4 & 0xffff);
        }
        else {
          do {
            *_Dst = *puVar3;
            _Dst = _Dst + 1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + 2;
          } while (uVar7 != 0);
          uVar4 = param_1;
          if ((ushort)param_1 < 4) goto LAB_00770e69;
        }
        local_c = local_c + *(int *)(iVar2 + 0x1c);
        puVar5 = puVar5 + *(int *)(iVar2 + 0x18);
        _Dst_00 = _Dst_00 + *(int *)(iVar2 + 0x20);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(ushort *)(iVar2 + 8));
    }
  }
  return local_c;
}



int FUN_00770eb0(size_t param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  size_t _Size;
  void *_Src;
  int iVar4;
  void *_Dst;
  
  iVar1 = param_1;
  _Src = *(void **)(param_1 + 0x10);
  iVar4 = 0;
  _Dst = *(void **)(param_1 + 0x24);
  if (_Src == (void *)0x0) {
    uVar2 = 0;
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst = (void *)((int)_Dst + *(int *)(param_1 + 0x20));
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + _Size;
      } while (uVar2 < *(ushort *)(param_1 + 8));
      return iVar4;
    }
  }
  else {
    uVar2 = *(short *)(param_1 + 4) - 0x14;
    if ((short)(*(short *)(param_1 + 4) + -0x18) < 1) {
      param_1 = *(size_t *)(param_1 + 0x14);
    }
    else {
      param_1 = *(size_t *)(param_1 + 0x1c);
      uVar2 = 4;
    }
    uVar3 = 0;
    if (*(short *)(iVar1 + 8) != 0) {
      do {
        _memcpy(_Dst,_Src,param_1);
        if (uVar2 < 4) {
          _memset((void *)((int)_Dst + 1),0,(uint)(ushort)(4 - uVar2));
        }
        _Src = (void *)((int)_Src + *(int *)(iVar1 + 0x18));
        _Dst = (void *)((int)_Dst + *(int *)(iVar1 + 0x20));
        iVar4 = iVar4 + *(int *)(iVar1 + 0x1c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 8));
    }
  }
  return iVar4;
}



int FUN_00770fa0(size_t param_1)

{
  int iVar1;
  ushort uVar2;
  ushort uVar3;
  size_t _Size;
  void *_Src;
  int iVar4;
  void *_Dst;
  
  iVar1 = param_1;
  _Src = *(void **)(param_1 + 0x10);
  iVar4 = 0;
  _Dst = *(void **)(param_1 + 0x24);
  if (_Src == (void *)0x0) {
    uVar2 = 0;
    if (*(short *)(param_1 + 8) != 0) {
      _Size = *(size_t *)(param_1 + 0x1c);
      do {
        _memset(_Dst,0,_Size);
        _Size = *(size_t *)(param_1 + 0x1c);
        _Dst = (void *)((int)_Dst + *(int *)(param_1 + 0x20));
        uVar2 = uVar2 + 1;
        iVar4 = iVar4 + _Size;
      } while (uVar2 < *(ushort *)(param_1 + 8));
      return iVar4;
    }
  }
  else {
    uVar2 = *(short *)(param_1 + 4) - 0x18;
    if ((short)(*(short *)(param_1 + 4) + -0x1c) < 1) {
      param_1 = *(size_t *)(param_1 + 0x14);
    }
    else {
      param_1 = *(size_t *)(param_1 + 0x1c);
      uVar2 = 4;
    }
    uVar3 = 0;
    if (*(short *)(iVar1 + 8) != 0) {
      do {
        _memcpy(_Dst,_Src,param_1);
        if (uVar2 < 4) {
          _memset((void *)(param_1 + (int)_Dst),0,(uint)(ushort)(4 - uVar2));
        }
        _Src = (void *)((int)_Src + *(int *)(iVar1 + 0x18));
        _Dst = (void *)((int)_Dst + *(int *)(iVar1 + 0x20));
        iVar4 = iVar4 + *(int *)(iVar1 + 0x1c);
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(ushort *)(iVar1 + 8));
    }
  }
  return iVar4;
}



undefined4 * FUN_00771090(int param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  undefined4 *puVar2;
  
  if (*(uint *)(param_1 + 0x6dc) < param_3) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)FUN_00401f00(0x38);
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0076e270();
    *puVar2 = &PTR_FUN_00a89c74;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    *(undefined1 *)(puVar2 + 0xd) = 0;
    cVar1 = FUN_0076e320(param_1,param_2,param_3);
    if (cVar1 != '\0') {
      return puVar2;
    }
    (**(code **)*puVar2)(1);
  }
  return (undefined4 *)0x0;
}



void FUN_00771100(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a89c74;
  FUN_00401f20(in_ECX[0xb]);
  piVar1 = (int *)in_ECX[0xc];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    in_ECX[0xc] = 0;
  }
  FUN_0076e2a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_00771150(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int iStack_c;
  int iStack_8;
  uint uStack_4;
  
  piVar1 = *(int **)(in_ECX + 0x30);
  iVar10 = 0;
  uVar9 = 0;
  if (*(char *)(in_ECX + 0x28) == '\0') {
    return piVar1;
  }
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  uVar7 = 0;
  if (*(int *)(in_ECX + 0x20) != 0) {
    do {
      puVar6 = (undefined1 *)(*(int *)(in_ECX + 0x24) + iVar10);
      if (puVar6 != (undefined1 *)0x0) {
        uVar4 = 0;
        *puVar6 = 0;
        if (*(int *)(in_ECX + 0x1c) != 0) {
          piVar1 = (int *)(*(int *)(puVar6 + 8) + 0xc);
          do {
            if ((piVar1[-1] != -1) && (*piVar1 != 0x11)) {
              uVar9 = uVar9 + 1;
              *puVar6 = 1;
            }
            uVar4 = uVar4 + 1;
            piVar1 = piVar1 + 7;
          } while (uVar4 < *(uint *)(in_ECX + 0x1c));
        }
      }
      uVar7 = uVar7 + 1;
      iVar10 = iVar10 + 0x10;
    } while (uVar7 < *(uint *)(in_ECX + 0x20));
    if (uVar9 != 0) {
      uVar9 = uVar9 + 1;
    }
  }
  if (*(uint *)(in_ECX + 0x14) < uVar9) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x2c));
    *(undefined4 *)(in_ECX + 0x2c) = 0;
  }
  if (uVar9 == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  else {
    if (*(int *)(in_ECX + 0x2c) == 0) {
      *(uint *)(in_ECX + 0x14) = uVar9;
      uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)uVar9 * 8 >> 0x20) != 0) |
                           (uint)((ulonglong)uVar9 * 8));
      *(undefined4 *)(in_ECX + 0x2c) = uVar2;
    }
    *(undefined4 *)(in_ECX + 0x18) = 0;
    uStack_4 = 0;
    if (*(int *)(in_ECX + 0x20) != 0) {
      iStack_8 = 0;
      do {
        iVar10 = 0;
        pcVar8 = (char *)(*(int *)(in_ECX + 0x24) + iStack_8);
        if (*pcVar8 != '\0') {
          iVar5 = 0;
          uVar9 = 0;
          iStack_c = 0;
          if (*(int *)(in_ECX + 0x1c) != 0) {
            iVar5 = 0;
            do {
              iVar3 = *(int *)(pcVar8 + 8) + iVar10;
              if ((*(int *)(iVar3 + 8) != -1) && (*(int *)(iVar3 + 0xc) != 0x11)) {
                *(int *)(iVar3 + 4) = iVar5;
                iVar5 = FUN_00770150(iVar3,uStack_4);
                iVar5 = iStack_c + iVar5;
                iStack_c = iVar5;
              }
              uVar9 = uVar9 + 1;
              iVar10 = iVar10 + 0x1c;
            } while (uVar9 < *(uint *)(in_ECX + 0x1c));
          }
          *(int *)(pcVar8 + 0xc) = iVar5;
        }
        iStack_8 = iStack_8 + 0x10;
        uStack_4 = uStack_4 + 1;
      } while (uStack_4 < *(uint *)(in_ECX + 0x20));
    }
    *(undefined2 *)(*(int *)(in_ECX + 0x2c) + *(int *)(in_ECX + 0x18) * 8) = 0xff;
    *(undefined2 *)(*(int *)(in_ECX + 0x2c) + 2 + *(int *)(in_ECX + 0x18) * 8) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 4 + *(int *)(in_ECX + 0x18) * 8) = 0x11;
    *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 5 + *(int *)(in_ECX + 0x18) * 8) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 6 + *(int *)(in_ECX + 0x18) * 8) = 0;
    *(undefined1 *)(*(int *)(in_ECX + 0x2c) + 7 + *(int *)(in_ECX + 0x18) * 8) = 0;
    iVar10 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x158))
                       (*(int **)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x2c),
                        (undefined4 *)(in_ECX + 0x30));
    if (-1 < iVar10) {
      *(undefined1 *)(in_ECX + 0x28) = 0;
      return *(int **)(in_ECX + 0x30);
    }
  }
  return (int *)0x0;
}



void FUN_00771300(code *param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = FUN_006f7070;
    FUN_0042bb90(0,&param_1);
    return;
  }
  if (param_1 < 4) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
      if ((code *)(param_2 - 1U) == param_1) {
        param_1 = (code *)&LAB_0076e610;
      }
      else {
        if (param_2 - 1U < param_1) goto switchD_0077134b_caseD_1d;
        param_1 = (code *)&LAB_0076e430;
      }
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      param_1 = FUN_0076e800;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      param_1 = FUN_0076e910;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      param_1 = FUN_0076ea10;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      param_1 = FUN_0076eb40;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      param_1 = FUN_0076ec60;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      param_1 = FUN_0076ed90;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
switchD_0077134b_caseD_1d:
      param_1 = (code *)&LAB_0076e4b0;
      break;
    default:
      goto switchD_0077134b_default;
    }
  }
  else if (param_1 == (code *)0x4) {
    switch(param_2) {
    case 1:
    case 2:
    case 6:
    case 7:
    case 8:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x11:
    case 0x12:
    case 0x13:
      goto switchD_007713ca_caseD_1;
    case 3:
    case 4:
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      param_1 = FUN_0076eeb0;
      break;
    case 5:
      param_1 = (code *)&LAB_0076f0d0;
      break;
    case 9:
      param_1 = (code *)&LAB_0076f0d0;
      break;
    case 0x10:
      param_1 = FUN_0076f110;
      break;
    case 0x14:
      param_1 = (code *)&LAB_0076f1c0;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      param_1 = FUN_0076f2a0;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      param_1 = FUN_0076f3b0;
      break;
    default:
      goto switchD_0077134b_default;
    }
  }
  else if ((param_1 == (code *)0x6) || (param_1 == (code *)0x7)) {
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
      param_1 = FUN_007701e0;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      param_1 = (code *)&LAB_00770300;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      param_1 = FUN_00770420;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      param_1 = FUN_00770540;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      param_1 = FUN_00770640;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      param_1 = FUN_00770740;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      param_1 = FUN_00770860;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
      goto switchD_007713ca_caseD_1;
    default:
      goto switchD_0077134b_default;
    }
  }
  else {
    if (param_1 != (code *)0x5) {
      return;
    }
    switch(param_2) {
    case 1:
    case 2:
    case 3:
    case 4:
      param_1 = FUN_00770980;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      param_1 = FUN_00770ab0;
      break;
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      param_1 = FUN_00770bb0;
      break;
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
      param_1 = FUN_00770cb0;
      break;
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
      param_1 = FUN_00770db0;
      break;
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
      param_1 = FUN_00770eb0;
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
      param_1 = FUN_00770fa0;
      break;
    case 0x1d:
    case 0x1e:
    case 0x1f:
    case 0x20:
switchD_007713ca_caseD_1:
      param_1 = FUN_006f7070;
      break;
    default:
      goto switchD_0077134b_default;
    }
  }
  if (param_1 != (code *)0x0) {
    FUN_0042bb90(param_2,&param_1);
  }
switchD_0077134b_default:
  return;
}



void FUN_007715e0(int param_1)

{
  FUN_00773100(1,*(undefined4 *)(&DAT_00b42130 + param_1 * 8),0,0);
  FUN_00773100(2,*(undefined4 *)(&DAT_00b42134 + param_1 * 8),0,0);
  return;
}



void FUN_00771640(int param_1)

{
  FUN_00773100(5,*(undefined4 *)(&DAT_00b420ec + param_1 * 0xc),0,0);
  FUN_00773100(6,*(undefined4 *)(&DAT_00b420e8 + param_1 * 0xc),0,0);
  FUN_00773100(7,*(undefined4 *)(&DAT_00b420f0 + param_1 * 0xc),0,0);
  return;
}



void FUN_007716e0(char param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  
  if (((param_1 != '\0') && (uVar1 = (**(code **)(*DAT_00b42754 + 0x54))(), (uVar1 & 8) == 0)) &&
     (uVar1 = (**(code **)(*DAT_00b42754 + 0x54))(), (uVar1 & 4) != 0)) {
    (**(code **)(*DAT_00b42758 + 0xd0))(*in_ECX,1,3,0);
    (**(code **)(*DAT_00b42758 + 0xd0))(*in_ECX,2,3,0);
    iVar2 = 0xc6;
    iVar3 = 8;
    do {
      (**(code **)(*DAT_00b42758 + 100))(iVar2 + -0x46,0,0);
      (**(code **)(*DAT_00b42758 + 100))(iVar2,0,0);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}



void FUN_00771790(uint param_1)

{
  if (param_1 < DAT_00b28cb0) {
    do {
      (**(code **)(*DAT_00b42758 + 0xe0))(param_1,0);
      (**(code **)(*DAT_00b42758 + 200))(param_1,1,1,0);
      (**(code **)(*DAT_00b42758 + 200))(param_1,4,1,0);
      (**(code **)(*DAT_00b42758 + 200))(param_1,0x18,0,0);
      param_1 = param_1 + 1;
    } while (param_1 < DAT_00b28cb0);
  }
  if (param_1 < DAT_00b28cb8) {
    do {
      (**(code **)(*DAT_00b42758 + 0xe0))(param_1,0);
      param_1 = param_1 + 1;
    } while (param_1 < DAT_00b28cb8);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00771830(undefined4 param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  switch(param_1) {
  case 1:
    _DAT_00b42760 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa00) * *param_2 + *(float *)(DAT_00b42754 + 0xa04) * param_2[4]
    ;
    _DAT_00b42770 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa10) + *(float *)(DAT_00b42754 + 0xa14) * param_2[4]
    ;
    _DAT_00b42780 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa20) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa24)
    ;
    _DAT_00b42764 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa08) +
         *(float *)(DAT_00b42754 + 0xa04) * param_2[5] +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[1];
    _DAT_00b42774 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[1] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[5];
    _DAT_00b42784 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa28) +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa24) +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[1];
    _DAT_00b42768 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa04) * param_2[6] +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[2];
    _DAT_00b42778 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[6] +
         param_2[2] * *(float *)(DAT_00b42754 + 0xa10);
    _DAT_00b42788 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[2] +
         *(float *)(DAT_00b42754 + 0xa24) * param_2[6];
    _DAT_00b42790 =
         *(float *)(DAT_00b42754 + 0xa38) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa30) + *(float *)(DAT_00b42754 + 0xa34) * param_2[4]
         + param_2[0xc];
    _DAT_00b42794 =
         *(float *)(DAT_00b42754 + 0xa38) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa30) * param_2[1] +
         *(float *)(DAT_00b42754 + 0xa34) * param_2[5] + param_2[0xd];
    fVar1 = param_2[2] * *(float *)(DAT_00b42754 + 0xa30);
    fVar2 = *(float *)(DAT_00b42754 + 0xa34) * param_2[6];
    goto LAB_007719ff;
  case 2:
    _DAT_00b42760 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa00) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa04)
    ;
    _DAT_00b42770 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa10) + *(float *)(DAT_00b42754 + 0xa14) * param_2[4]
    ;
    _DAT_00b42780 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa20) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa24)
    ;
    _DAT_00b42764 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa08) +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[1] +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa04);
    _DAT_00b42774 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[1] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[5];
    _DAT_00b42784 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa28) +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa24) +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[1];
    _DAT_00b42768 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[10] +
         param_2[6] * *(float *)(DAT_00b42754 + 0xa04) +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[2];
    _DAT_00b42778 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[6] +
         param_2[2] * *(float *)(DAT_00b42754 + 0xa10);
    _DAT_00b42788 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[2] +
         *(float *)(DAT_00b42754 + 0xa24) * param_2[6];
    _DAT_00b42790 =
         *(float *)(DAT_00b42754 + 0xa38) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa30) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa34)
         + param_2[0xc];
    _DAT_00b42794 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa38) +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa34) +
         *(float *)(DAT_00b42754 + 0xa30) * param_2[1] + param_2[0xd];
    fVar1 = *(float *)(DAT_00b42754 + 0xa34) * param_2[6];
    fVar2 = *(float *)(DAT_00b42754 + 0xa30) * param_2[2];
LAB_007719ff:
    _DAT_00b4276c = 0;
    _DAT_00b4277c = 0;
    _DAT_00b4278c = 0;
    _DAT_00b42798 = *(float *)(DAT_00b42754 + 0xa38) * param_2[10] + fVar2 + fVar1 + param_2[0xe];
    _DAT_00b4279c = 0;
    return 1;
  case 3:
    _DAT_00b42760 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa00) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa04)
    ;
    _DAT_00b42770 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa10) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa14)
    ;
    _DAT_00b42780 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa20) + *(float *)(DAT_00b42754 + 0xa24) * param_2[4]
    ;
    _DAT_00b42764 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[9] +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa04) +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[1];
    _DAT_00b42774 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa18) +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa14) +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[1];
    _DAT_00b42784 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[1] +
         *(float *)(DAT_00b42754 + 0xa24) * param_2[5];
    _DAT_00b42768 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa04) * param_2[6] +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[2];
    _DAT_00b42778 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[2] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[6];
    fVar1 = param_2[2] * *(float *)(DAT_00b42754 + 0xa20);
    fVar2 = *(float *)(DAT_00b42754 + 0xa24) * param_2[6];
    break;
  case 4:
    _memset(&DAT_00b42760,0,0x40);
    _DAT_00b42774 = 0.5;
    _DAT_00b42780 = 0.5;
    _DAT_00b42790 = 0.5;
    _DAT_00b42794 = 0.5;
    return 1;
  case 5:
    _DAT_00b42760 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa00) + *(float *)(DAT_00b42754 + 0xa04) * param_2[4]
    ;
    _DAT_00b42770 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa10) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa14)
    ;
    _DAT_00b42780 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa20) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa24)
    ;
    _DAT_00b42764 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa08) +
         param_2[1] * *(float *)(DAT_00b42754 + 0xa00) +
         *(float *)(DAT_00b42754 + 0xa04) * param_2[5];
    _DAT_00b42774 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa18) +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[1] +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa14);
    _DAT_00b42784 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[1] +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa24);
    _DAT_00b42768 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa04) * param_2[6] +
         param_2[2] * *(float *)(DAT_00b42754 + 0xa00);
    _DAT_00b42778 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[6] +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[2];
    fVar1 = param_2[6] * *(float *)(DAT_00b42754 + 0xa24);
    fVar2 = param_2[2] * *(float *)(DAT_00b42754 + 0xa20);
    break;
  case 6:
    _DAT_00b42760 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa00) + param_2[4] * *(float *)(DAT_00b42754 + 0xa04)
    ;
    _DAT_00b42770 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[8] +
         *param_2 * *(float *)(DAT_00b42754 + 0xa10) + *(float *)(DAT_00b42754 + 0xa14) * param_2[4]
    ;
    _DAT_00b42780 =
         *(float *)(DAT_00b42754 + 0xa28) * param_2[8] +
         *(float *)(DAT_00b42754 + 0xa20) * *param_2 + param_2[4] * *(float *)(DAT_00b42754 + 0xa24)
    ;
    _DAT_00b42764 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa08) +
         *(float *)(DAT_00b42754 + 0xa00) * param_2[1] +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa04);
    _DAT_00b42774 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[9] +
         *(float *)(DAT_00b42754 + 0xa10) * param_2[1] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[5];
    _DAT_00b42784 =
         param_2[9] * *(float *)(DAT_00b42754 + 0xa28) +
         param_2[5] * *(float *)(DAT_00b42754 + 0xa24) +
         *(float *)(DAT_00b42754 + 0xa20) * param_2[1];
    _DAT_00b42768 =
         *(float *)(DAT_00b42754 + 0xa08) * param_2[10] +
         param_2[6] * *(float *)(DAT_00b42754 + 0xa04) +
         param_2[2] * *(float *)(DAT_00b42754 + 0xa00);
    _DAT_00b42778 =
         *(float *)(DAT_00b42754 + 0xa18) * param_2[10] +
         *(float *)(DAT_00b42754 + 0xa14) * param_2[6] +
         param_2[2] * *(float *)(DAT_00b42754 + 0xa10);
    fVar1 = *(float *)(DAT_00b42754 + 0xa24) * param_2[6];
    fVar2 = *(float *)(DAT_00b42754 + 0xa20) * param_2[2];
    break;
  default:
    return 0;
  }
  _DAT_00b42794 = param_2[0xd];
  _DAT_00b42790 = param_2[0xc];
  _DAT_00b42788 = *(float *)(DAT_00b42754 + 0xa28) * param_2[10] + fVar2 + fVar1;
  _DAT_00b42798 = param_2[0xe];
  _DAT_00b4276c = 0;
  _DAT_00b4277c = 0;
  _DAT_00b4278c = 0;
  _DAT_00b4279c = 0;
  return 1;
}



void FUN_00772040(byte param_1)

{
  FUN_007724d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00772060(int param_1)

{
  int *piVar1;
  
  DAT_00b42754 = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    if (DAT_00b42750 != (int *)0x0) {
      (**(code **)(*DAT_00b42750 + 8))(DAT_00b42750);
    }
    DAT_00b42750 = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    DAT_00b42758 = *(undefined4 *)(DAT_00b42754 + 0x8ac);
    return;
  }
  if (DAT_00b42750 != (int *)0x0) {
    (**(code **)(*DAT_00b42750 + 8))(DAT_00b42750);
  }
  DAT_00b42750 = (int *)0x0;
  DAT_00b42758 = 0;
  return;
}



void FUN_007720d0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  *(undefined2 *)(in_ECX + 0x16) = 0;
  *(undefined1 *)((int)in_ECX + 0x5a) = 0;
  *(undefined1 *)((int)in_ECX + 0x5b) = 0;
  in_ECX[0x17] = 0;
  uVar1 = FUN_007735e0();
  in_ECX[3] = uVar1;
  return;
}



void FUN_00772100(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_0077cb50(*(undefined4 *)(*(int *)(in_ECX + 0x14) + 8));
  }
  FUN_00773620(*(undefined4 *)(in_ECX + 0xc));
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_00772150(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  
  if (*(char *)((int)in_ECX + 0x5a) == '\0') {
    (**(code **)(*DAT_00b42758 + 200))(*in_ECX,0x18,0,0);
    return;
  }
  uVar1 = in_ECX[4];
  uVar3 = uVar1 & 0xf0000000;
  if (uVar3 == 0) {
    piVar4 = in_ECX + 6;
  }
  else {
    if (uVar3 == 0x10000000) {
      if ((uVar1 & 0xfffffff) == 0) {
        piVar4 = *(int **)(in_ECX[5] + 0x18);
        goto LAB_007721c7;
      }
      piVar4 = *(int **)(in_ECX[5] + 0x18);
    }
    else {
      if (uVar3 != 0x20000000) {
        return;
      }
      piVar4 = in_ECX + 6;
      if ((uVar1 & 0xfffffff) == 0) goto LAB_007721c7;
    }
    cVar2 = FUN_00771830(uVar1 & 0xfffffff,piVar4);
    if (cVar2 == '\0') {
      return;
    }
    piVar4 = (int *)&DAT_00b42760;
  }
LAB_007721c7:
  (**(code **)(*DAT_00b42750 + 0xb0))(DAT_00b42750,*in_ECX + 0x10,piVar4);
  return;
}



void FUN_007721e0(void)

{
  char cVar1;
  undefined4 *in_ECX;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  cVar1 = FUN_007730a0(0xb);
  if (cVar1 == '\0') {
    local_8 = *in_ECX;
  }
  uVar3 = *in_ECX;
  (**(code **)(*DAT_00b42758 + 200))(uVar3,0xb,local_8);
  cVar1 = (char)((uint)uVar3 >> 0x18);
  iVar2 = 0;
  if (in_ECX[1] != 0) {
    iVar2 = (**(code **)(**(int **)(DAT_00b42754 + 0x8b8) + 8))
                      (in_ECX[1],&stack0xffffffe6,&stack0xffffffe7,&stack0xffffffec);
  }
  (**(code **)(*DAT_00b42758 + 0xe0))(*in_ECX,iVar2);
  if (iVar2 != 0) {
    if (cVar1 == '\0') {
      (**(code **)(*DAT_00b42758 + 0xd0))(*in_ECX,7,0,0);
    }
    FUN_007716e0(local_8);
    FUN_00772150();
  }
  return;
}



int FUN_007722b0(byte param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  if ((param_1 & 2) == 0) {
    FUN_00772100();
    if ((param_1 & 1) != 0) {
      FUN_00401f20();
    }
    return in_ECX;
  }
  iVar3 = *(int *)(in_ECX + -4) + -1;
  if (-1 < iVar3) {
    iVar4 = *(int *)(in_ECX + -4) * 0x60 + in_ECX + 0x14;
    do {
      if (*(int *)(iVar4 + -0x60) != 0) {
        FUN_0077cb50(*(undefined4 *)(*(int *)(iVar4 + -0x60) + 8));
      }
      FUN_00773620(*(undefined4 *)(iVar4 + -0x68));
      puVar1 = *(undefined4 **)(iVar4 + -0x70);
      if (((puVar1 != (undefined4 *)0x0) && (LVar2 = InterlockedDecrement(puVar1 + 1), LVar2 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + -0x60;
    } while (-1 < iVar3);
  }
  if ((param_1 & 1) != 0) {
    FUN_00401f20(in_ECX + -4);
  }
  return in_ECX + -4;
}



void FUN_00772360(uint param_1)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar2 = -(uint)((int)((ulonglong)param_1 * 0x60 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0x60);
    puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar3 = puVar1 + 1;
      *puVar1 = param_1;
      _vector_constructor_iterator_(puVar3,0x60,param_1,FUN_007720d0);
    }
  }
  *in_ECX = puVar3;
  return;
}



void FUN_007723c0(void)

{
  DAT_00b4275c = (undefined4 *)FUN_00401f00(0x18);
  if (DAT_00b4275c != (undefined4 *)0x0) {
    *DAT_00b4275c = 0;
    DAT_00b4275c[1] = 0;
    DAT_00b4275c[2] = 0;
    DAT_00b4275c[3] = 8;
    DAT_00b4275c[4] = 8;
    DAT_00b4275c[5] = 0;
    return;
  }
  DAT_00b4275c = (undefined4 *)0x0;
  return;
}



undefined4 FUN_00772400(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = FUN_00773440(*in_ECX);
  if (iVar1 != 0) {
    return 0;
  }
  FUN_007721e0();
  return 1;
}



void FUN_00772430(uint param_1)

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
    local_4 = (int *)FUN_00772360(param_1);
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
      iVar4 = iVar4 + 0x60;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



void FUN_007724d0(void)

{
  int iVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_007722b0(3);
  }
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_007724d0();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_00772500(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00b4275c;
  if (DAT_00b4275c != (undefined4 *)0x0) {
    piVar1 = (int *)DAT_00b4275c[5];
    DAT_00b4275c[2] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_007722b0(3);
      }
      if (piVar1[2] != 0) {
        FUN_00772040(1);
      }
      FUN_00401f20(piVar1);
    }
    FUN_00401f20(*puVar2);
    FUN_00401f20(puVar2);
  }
  DAT_00b4275c = (undefined4 *)0x0;
  return;
}



void FUN_00772560(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  undefined1 auStack_4 [4];
  
  if (*(char *)((int)in_ECX + 0x5b) == '\0') {
    if (in_ECX[5] != 0) {
      FUN_0077cb50(*(undefined4 *)(in_ECX[5] + 8));
    }
    FUN_00773620(in_ECX[3]);
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    FUN_00401f20();
    return;
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[1] = 0;
  }
  FUN_00773240();
  FUN_00773270();
  if (in_ECX[5] != 0) {
    FUN_0077cb50(*(undefined4 *)(in_ECX[5] + 8));
  }
  in_ECX[5] = 0;
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[4] = 0;
  *(undefined1 *)((int)in_ECX + 0x5a) = 0;
  FUN_0073a5e0(auStack_4);
  return;
}



void FUN_00772630(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = DAT_00b4275c;
  piVar1 = DAT_00b4275c + 2;
  if (DAT_00b4275c[2] == 0) {
    piVar2 = DAT_00b4275c + 3;
    FUN_00772430(DAT_00b4275c[3]);
    *piVar2 = *piVar2 * 2;
  }
  piVar3 = (int *)*piVar3;
  iVar4 = *piVar3;
  *piVar1 = *piVar1 + -1;
  *piVar3 = piVar3[*piVar1];
  *param_1 = iVar4;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 0x5c) = *(int *)(iVar4 + 0x5c) + 1;
    *(undefined1 *)(iVar4 + 0x5b) = 1;
    return;
  }
  uRam0000005b = 1;
  return;
}



void FUN_00772690(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  return;
}



void FUN_007726a0(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



undefined4 FUN_007726c0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  for (puVar1 = *(undefined4 **)(in_ECX + 8); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*DAT_00b427a4 + 100))(*puVar1,puVar1[1],0);
  }
  for (puVar1 = *(undefined4 **)(in_ECX + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*DAT_00b427a4 + 100))(*puVar1,puVar1[1],1);
  }
  return 0;
}



undefined4 FUN_00772720(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  for (puVar1 = *(undefined4 **)(in_ECX + 0x10); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[2]) {
    (**(code **)(*DAT_00b427a4 + 0x5c))(*puVar1);
  }
  return 0;
}



void FUN_00772750(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  if (param_1 == *(int *)(in_ECX + 8)) {
    *(int *)(in_ECX + 8) = iVar1;
  }
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void FUN_00772790(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  if (iVar2 != 0) {
    *(int *)(iVar2 + 8) = iVar1;
  }
  if (param_1 == *(int *)(in_ECX + 0x10)) {
    *(int *)(in_ECX + 0x10) = iVar1;
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



int * FUN_007727d0(int param_1,undefined1 *param_2)

{
  int *piVar1;
  int in_ECX;
  
  for (piVar1 = *(int **)(in_ECX + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    if (*piVar1 == param_1) {
      *param_2 = 0;
      return piVar1;
    }
  }
  piVar1 = *(int **)(in_ECX + 0x10);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  *param_2 = 1;
  return piVar1;
}



void FUN_00772820(byte param_1)

{
  FUN_00772840();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00772840(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  FUN_00401f20(*in_ECX);
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_00772840();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_00772870(uint param_1)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar2 = -(uint)((int)((ulonglong)param_1 * 0x14 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0x14);
    puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar3 = puVar1 + 1;
      *puVar1 = param_1;
      _vector_constructor_iterator_(puVar3,0x14,param_1,FUN_007726a0);
    }
  }
  *in_ECX = puVar3;
  return;
}



void FUN_007728d0(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    *in_ECX = 0;
    return;
  }
  pvVar1 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 0x10));
  if (pvVar1 != (void *)0x0) {
    _vector_constructor_iterator_(pvVar1,0x10,param_1,FUN_00772690);
    *in_ECX = pvVar1;
    return;
  }
  *in_ECX = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00772940(int param_1)

{
  _DAT_00b427a0 = param_1;
  if (param_1 != 0) {
    DAT_00b427a4 = *(undefined4 *)(param_1 + 0x8ac);
    return;
  }
  DAT_00b427a4 = 0;
  return;
}



void FUN_00772970(void)

{
  DAT_00b427a8 = (undefined4 *)FUN_00401f00(0x18);
  if (DAT_00b427a8 == (undefined4 *)0x0) {
    DAT_00b427a8 = (undefined4 *)0x0;
  }
  else {
    *DAT_00b427a8 = 0;
    DAT_00b427a8[1] = 0;
    DAT_00b427a8[2] = 0;
    DAT_00b427a8[3] = 8;
    DAT_00b427a8[4] = 8;
    DAT_00b427a8[5] = 0;
  }
  DAT_00b427ac = (undefined4 *)FUN_00401f00(0x18);
  if (DAT_00b427ac != (undefined4 *)0x0) {
    *DAT_00b427ac = 0;
    DAT_00b427ac[1] = 0;
    DAT_00b427ac[2] = 0;
    DAT_00b427ac[5] = 0;
    DAT_00b427ac[3] = 0x10;
    DAT_00b427ac[4] = 0x10;
    return;
  }
  DAT_00b427ac = (undefined4 *)0x0;
  return;
}



void FUN_007729e0(uint param_1)

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
    local_4 = (int *)FUN_00772870(param_1);
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
      iVar4 = iVar4 + 0x14;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



void FUN_00772a80(uint param_1)

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
    local_4 = (int *)FUN_007728d0(param_1);
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
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



void FUN_00772b20(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = DAT_00b427a8;
  if (DAT_00b427a8 != (undefined4 *)0x0) {
    iVar1 = DAT_00b427a8[5];
    DAT_00b427a8[2] = 0;
    if (iVar1 != 0) {
      FUN_00772ed0();
      FUN_00401f20(iVar1);
    }
    FUN_00401f20(*puVar3);
    FUN_00401f20(puVar3);
  }
  puVar3 = DAT_00b427ac;
  if (DAT_00b427ac != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)DAT_00b427ac[5];
    DAT_00b427ac[2] = 0;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00401f20(*puVar2);
      if (puVar2[2] != 0) {
        FUN_00772820(1);
      }
      FUN_00401f20(puVar2);
    }
    FUN_00401f20(*puVar3);
    FUN_00401f20(puVar3);
  }
  return;
}



void FUN_00772bb0(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int *piVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *(int *)(in_ECX + 8);
  piVar6 = DAT_00b427ac;
joined_r0x00772bc8:
  do {
    iVar3 = iVar8;
    if (iVar3 == 0) {
      iVar8 = *(int *)(in_ECX + 0x10);
      if (iVar8 == 0) {
        *(undefined4 *)(in_ECX + 8) = 0;
        *(undefined4 *)(in_ECX + 0x10) = 0;
        return;
      }
      do {
        iVar3 = *(int *)(iVar8 + 8);
        uVar2 = piVar6[2];
        piVar1 = piVar6 + 2;
        uVar4 = 0;
        if (uVar2 != 0) {
          piVar7 = (int *)*piVar6;
          do {
            if (*piVar7 == iVar8) {
              if (uVar4 != 0xffffffff) goto LAB_00772c97;
              break;
            }
            uVar4 = uVar4 + 1;
            piVar7 = piVar7 + 1;
          } while (uVar4 < uVar2);
        }
        uVar4 = piVar6[1];
        if (uVar2 == uVar4) {
          if (uVar4 == 0) {
            iVar5 = 1;
          }
          else {
            iVar5 = uVar4 * 2;
          }
          FUN_006e8ca0(iVar5);
        }
        *(int *)(*piVar6 + *piVar1 * 4) = iVar8;
        *piVar1 = *piVar1 + 1;
        piVar6 = DAT_00b427ac;
LAB_00772c97:
        iVar8 = iVar3;
        if (iVar3 == 0) {
          *(undefined4 *)(in_ECX + 8) = 0;
          *(undefined4 *)(in_ECX + 0x10) = 0;
          return;
        }
      } while( true );
    }
    iVar8 = *(int *)(iVar3 + 8);
    uVar2 = piVar6[2];
    piVar1 = piVar6 + 2;
    uVar4 = 0;
    if (uVar2 != 0) {
      piVar7 = (int *)*piVar6;
      do {
        if (*piVar7 == iVar3) {
          if (uVar4 != 0xffffffff) goto joined_r0x00772bc8;
          break;
        }
        uVar4 = uVar4 + 1;
        piVar7 = piVar7 + 1;
      } while (uVar4 < uVar2);
    }
    uVar4 = piVar6[1];
    if (uVar2 == uVar4) {
      if (uVar4 == 0) {
        iVar5 = 1;
      }
      else {
        iVar5 = uVar4 * 2;
      }
      FUN_006e8ca0(iVar5);
    }
    *(int *)(*piVar6 + *piVar1 * 4) = iVar3;
    *piVar1 = *piVar1 + 1;
    piVar6 = DAT_00b427ac;
  } while( true );
}



void FUN_00772cd0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint in_ECX;
  undefined4 uStack_4;
  
  uStack_4 = in_ECX & 0xffffff;
  iVar5 = FUN_007727d0(param_1,(int)&uStack_4 + 3);
  piVar3 = DAT_00b427ac;
  if (iVar5 == 0) {
    piVar1 = DAT_00b427ac + 2;
    if (DAT_00b427ac[2] == 0) {
      piVar2 = DAT_00b427ac + 3;
      FUN_00772a80(DAT_00b427ac[3]);
      *piVar2 = *piVar2 * 2;
    }
    piVar3 = (int *)*piVar3;
    puVar4 = (undefined4 *)*piVar3;
    *piVar1 = *piVar1 + -1;
    *piVar3 = piVar3[*piVar1];
    puVar4[2] = 0;
    puVar4[3] = 0;
    *puVar4 = param_1;
    puVar4[1] = param_2;
    if (param_3 != '\0') {
      if (*(int *)(in_ECX + 0x10) != 0) {
        *(undefined4 **)(*(int *)(in_ECX + 0x10) + 0xc) = puVar4;
        puVar4[2] = *(undefined4 *)(in_ECX + 0x10);
      }
      puVar4[3] = 0;
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
      *(undefined4 **)(in_ECX + 0x10) = puVar4;
      return;
    }
    if (*(int *)(in_ECX + 8) != 0) {
      *(undefined4 **)(*(int *)(in_ECX + 8) + 0xc) = puVar4;
      puVar4[2] = *(undefined4 *)(in_ECX + 8);
    }
    puVar4[3] = 0;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(undefined4 **)(in_ECX + 8) = puVar4;
  }
  else {
    *(undefined4 *)(iVar5 + 4) = param_2;
    if (uStack_4._3_1_ != param_3) {
      if (uStack_4._3_1_ != '\0') {
        FUN_00772790(iVar5);
        if (*(int *)(in_ECX + 8) != 0) {
          *(int *)(*(int *)(in_ECX + 8) + 0xc) = iVar5;
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(in_ECX + 8);
        }
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
        *(int *)(in_ECX + 8) = iVar5;
        return;
      }
      FUN_00772750(iVar5);
      if (*(int *)(in_ECX + 0x10) != 0) {
        *(int *)(*(int *)(in_ECX + 0x10) + 0xc) = iVar5;
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(in_ECX + 0x10);
      }
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
      *(int *)(in_ECX + 0x10) = iVar5;
      return;
    }
  }
  return;
}



void FUN_00772df0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar3 = DAT_00b427a8;
  piVar1 = DAT_00b427a8 + 2;
  if (DAT_00b427a8[2] == 0) {
    piVar2 = DAT_00b427a8 + 3;
    FUN_007729e0(DAT_00b427a8[3]);
    *piVar2 = *piVar2 * 2;
  }
  puVar3 = (undefined4 *)*puVar3;
  pcVar4 = (char *)*puVar3;
  *piVar1 = *piVar1 + -1;
  *puVar3 = puVar3[*piVar1];
  if (*pcVar4 == '\0') {
    *pcVar4 = '\x01';
  }
  return;
}



void FUN_00772e30(char *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  if (param_1 != (char *)0x0) {
    if (*param_1 != '\0') {
      param_1 = (char *)*(int *)(param_1 + 8);
      while (param_1 != (char *)0x0) {
        iVar1 = *(int *)((int)param_1 + 8);
        FUN_0073a5e0(&param_1);
        param_1 = (char *)iVar1;
      }
      param_1 = *(char **)(pcVar2 + 0x10);
      pcVar2[8] = '\0';
      pcVar2[9] = '\0';
      pcVar2[10] = '\0';
      pcVar2[0xb] = '\0';
      pcVar2[4] = '\0';
      pcVar2[5] = '\0';
      pcVar2[6] = '\0';
      pcVar2[7] = '\0';
      while (param_1 != (char *)0x0) {
        iVar1 = *(int *)((int)param_1 + 8);
        FUN_0073a5e0(&param_1);
        param_1 = (char *)iVar1;
      }
      pcVar2[0x10] = '\0';
      pcVar2[0x11] = '\0';
      pcVar2[0x12] = '\0';
      pcVar2[0x13] = '\0';
      pcVar2[0xc] = '\0';
      pcVar2[0xd] = '\0';
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
      param_1 = pcVar2;
      FUN_0073a5e0(&param_1);
      return;
    }
    FUN_00772bb0();
    FUN_00401f20(pcVar2);
  }
  return;
}



void FUN_00772ed0(void)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + -4);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      FUN_00772bb0();
    }
    FUN_00401f20(iVar1 + -4);
  }
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_00772ed0();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_00772f30(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x50) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  in_ECX[0x84] = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = 0;
  in_ECX[0xa8] = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  in_ECX[0xb4] = 0;
  return;
}



void FUN_00772ff0(int param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  int in_ECX;
  
  if (*(ushort *)(&DAT_00b427e0 + param_1 * 2) < 8) {
    uVar1 = (uint)*(ushort *)(&DAT_00b427e0 + param_1 * 2);
    if (param_3 != '\0') {
      if (*(char *)(uVar1 + 0x2c + in_ECX) != '\0') {
        *(undefined4 *)(in_ECX + 0xc + uVar1 * 4) = param_2;
        return;
      }
      if (*(char *)(uVar1 + 0x5c + in_ECX) != '\0') {
        *(undefined1 *)(uVar1 + 0x5c + in_ECX) = 0;
        *(undefined1 *)(uVar1 + 0x2c + in_ECX) = 1;
        *(undefined4 *)(in_ECX + 0xc + uVar1 * 4) = param_2;
        *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + -1;
        *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
      }
      *(undefined1 *)(uVar1 + 0x2c + in_ECX) = 1;
      *(undefined4 *)(in_ECX + 0xc + uVar1 * 4) = param_2;
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
      return;
    }
    if (*(char *)(uVar1 + 0x5c + in_ECX) != '\0') {
      *(undefined4 *)(in_ECX + 0x3c + uVar1 * 4) = param_2;
      return;
    }
    if (*(char *)(uVar1 + 0x2c + in_ECX) != '\0') {
      *(undefined1 *)(uVar1 + 0x2c + in_ECX) = 0;
      *(undefined1 *)(uVar1 + 0x5c + in_ECX) = 1;
      *(undefined4 *)(in_ECX + 0x3c + uVar1 * 4) = param_2;
      *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
      *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -1;
    }
    *(undefined1 *)(uVar1 + 0x5c + in_ECX) = 1;
    *(undefined4 *)(in_ECX + 0x3c + uVar1 * 4) = param_2;
    *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  }
  return;
}



undefined4 FUN_007730a0(int param_1,undefined4 *param_2,undefined1 *param_3)

{
  uint uVar1;
  int in_ECX;
  
  if (*(ushort *)(&DAT_00b427e0 + param_1 * 2) < 8) {
    uVar1 = (uint)*(ushort *)(&DAT_00b427e0 + param_1 * 2);
    if (*(char *)(uVar1 + 0x5c + in_ECX) != '\0') {
      *param_2 = *(undefined4 *)(in_ECX + 0x3c + uVar1 * 4);
      *param_3 = 0;
      return 1;
    }
    if (*(char *)(uVar1 + 0x2c + in_ECX) != '\0') {
      *param_2 = *(undefined4 *)(in_ECX + 0xc + uVar1 * 4);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}



void FUN_00773100(int param_1,undefined4 param_2,char param_3,char param_4)

{
  char *pcVar1;
  uint uVar2;
  int in_ECX;
  
  if (*(ushort *)(&DAT_00b427b0 + param_1 * 2) < 5) {
    uVar2 = (uint)*(ushort *)(&DAT_00b427b0 + param_1 * 2);
    if (param_3 == '\0') {
      if (*(char *)(uVar2 + 0xa4 + in_ECX) != '\0') {
        *(undefined4 *)(in_ECX + 0x90 + uVar2 * 4) = param_2;
        goto LAB_00773199;
      }
      if (*(char *)(uVar2 + 0x80 + in_ECX) != '\0') {
        *(undefined1 *)(uVar2 + 0x80 + in_ECX) = 0;
        *(int *)(in_ECX + 100) = *(int *)(in_ECX + 100) + -1;
        if (*(char *)(uVar2 + 0xb0 + in_ECX) != '\0') {
          *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + -1;
        }
        *(undefined1 *)(uVar2 + 0xb0 + in_ECX) = 0;
      }
      *(undefined1 *)(uVar2 + 0xa4 + in_ECX) = 1;
      *(undefined4 *)(in_ECX + 0x90 + uVar2 * 4) = param_2;
      *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
    }
    else {
      if (*(char *)(uVar2 + 0x80 + in_ECX) != '\0') {
        *(undefined4 *)(in_ECX + 0x6c + uVar2 * 4) = param_2;
LAB_00773199:
        pcVar1 = (char *)(uVar2 + 0xb0 + in_ECX);
        if (param_4 == '\0') {
          if (*pcVar1 != '\0') {
            *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + -1;
          }
        }
        else if (*pcVar1 == '\0') {
          *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + 1;
          *pcVar1 = param_4;
          return;
        }
        *pcVar1 = param_4;
        return;
      }
      if (*(char *)(uVar2 + 0xa4 + in_ECX) != '\0') {
        *(undefined1 *)(uVar2 + 0xa4 + in_ECX) = 0;
        *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + -1;
        if (*(char *)(uVar2 + 0xb0 + in_ECX) != '\0') {
          *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + -1;
        }
        *(undefined1 *)(uVar2 + 0xb0 + in_ECX) = 0;
      }
      *(undefined1 *)(uVar2 + 0x80 + in_ECX) = 1;
      *(undefined4 *)(in_ECX + 0x6c + uVar2 * 4) = param_2;
      *(int *)(in_ECX + 100) = *(int *)(in_ECX + 100) + 1;
    }
    if (param_4 != '\0') {
      *(int *)(in_ECX + 0xac) = *(int *)(in_ECX + 0xac) + 1;
    }
    *(char *)(uVar2 + 0xb0 + in_ECX) = param_4;
  }
  return;
}



void FUN_00773240(void)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  
  puVar1 = (undefined1 *)(in_ECX + 0x5c);
  iVar2 = 8;
  do {
    puVar1[-0x30] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  return;
}



void FUN_00773270(void)

{
  undefined1 *puVar1;
  int in_ECX;
  int iVar2;
  
  puVar1 = (undefined1 *)(in_ECX + 0xa4);
  iVar2 = 5;
  do {
    puVar1[-0x24] = 0;
    *puVar1 = 0;
    puVar1[0xc] = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  return;
}



undefined4 FUN_007732b0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0xc);
  do {
    if (*(char *)(iVar1 + 0x5c + in_ECX) == '\0') {
      if (*(char *)(iVar1 + 0x2c + in_ECX) != '\0') {
        (**(code **)(*DAT_00b42834 + 200))(param_1,(&DAT_00b42824)[iVar1],*puVar2,0);
      }
    }
    else {
      (**(code **)(*DAT_00b42834 + 200))(param_1,(&DAT_00b42824)[iVar1],puVar2[0xc],0);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 8);
  return 0;
}



undefined4 FUN_00773330(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  puVar2 = (undefined4 *)(in_ECX + 0x6c);
  do {
    if (*(char *)(iVar1 + 0xa4 + in_ECX) == '\0') {
      if (*(char *)(iVar1 + 0x80 + in_ECX) != '\0') {
        (**(code **)(*DAT_00b42834 + 0xd0))(param_1,(&DAT_00b427cc)[iVar1],*puVar2,0);
      }
    }
    else {
      (**(code **)(*DAT_00b42834 + 0xd0))(param_1,(&DAT_00b427cc)[iVar1],puVar2[9],0);
    }
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 < 5);
  return 0;
}



void FUN_007733b0(byte param_1)

{
  FUN_00773470();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007733d0(uint param_1)

{
  uint *puVar1;
  undefined4 *in_ECX;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)0x0;
  in_ECX[1] = param_1;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    uVar2 = -(uint)((int)((ulonglong)param_1 * 0xb8 >> 0x20) != 0) |
            (uint)((ulonglong)param_1 * 0xb8);
    puVar1 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar2) | uVar2 + 4);
    if (puVar1 != (uint *)0x0) {
      puVar3 = puVar1 + 1;
      *puVar1 = param_1;
      _vector_constructor_iterator_(puVar3,0xb8,param_1,FUN_00772f30);
    }
  }
  *in_ECX = puVar3;
  return;
}



int FUN_00773440(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 < DAT_00b28cb0) {
    iVar2 = FUN_007732b0(param_1);
  }
  iVar1 = FUN_00773330(param_1);
  if (iVar2 != 0) {
    iVar1 = iVar2;
  }
  return iVar1;
}



void FUN_00773470(void)

{
  int iVar1;
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_00401f20(*in_ECX + -4);
  }
  iVar1 = in_ECX[2];
  if (iVar1 != 0) {
    FUN_00773470();
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_007734a0(void)

{
  DAT_00b42838 = (undefined4 *)FUN_00401f00(0x18);
  if (DAT_00b42838 != (undefined4 *)0x0) {
    *DAT_00b42838 = 0;
    DAT_00b42838[1] = 0;
    DAT_00b42838[2] = 0;
    DAT_00b42838[3] = 8;
    DAT_00b42838[4] = 8;
    DAT_00b42838[5] = 0;
    return;
  }
  DAT_00b42838 = (undefined4 *)0x0;
  return;
}



void FUN_007734e0(uint param_1)

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
    local_4 = (int *)FUN_007733d0(param_1);
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
      iVar4 = iVar4 + 0xb8;
    } while (uVar3 < param_1);
  }
  local_4[2] = in_ECX[5];
  in_ECX[5] = (int)local_4;
  return;
}



void FUN_00773580(void)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00b42838;
  if (DAT_00b42838 != (undefined4 *)0x0) {
    piVar1 = (int *)DAT_00b42838[5];
    DAT_00b42838[2] = 0;
    if (piVar1 != (int *)0x0) {
      if (*piVar1 != 0) {
        FUN_00401f20(*piVar1 + -4);
      }
      if (piVar1[2] != 0) {
        FUN_007733b0(1);
      }
      FUN_00401f20(piVar1);
    }
    FUN_00401f20(*puVar2);
    FUN_00401f20(puVar2);
  }
  return;
}



void FUN_007735e0(void)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  
  puVar3 = DAT_00b42838;
  piVar1 = DAT_00b42838 + 2;
  if (DAT_00b42838[2] == 0) {
    piVar2 = DAT_00b42838 + 3;
    FUN_007734e0(DAT_00b42838[3]);
    *piVar2 = *piVar2 * 2;
  }
  puVar3 = (undefined4 *)*puVar3;
  pcVar4 = (char *)*puVar3;
  *piVar1 = *piVar1 + -1;
  *puVar3 = puVar3[*piVar1];
  if (*pcVar4 == '\0') {
    *pcVar4 = '\x01';
  }
  return;
}



void FUN_00773620(char *param_1)

{
  if (*param_1 != '\0') {
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\0';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x30] = '\0';
    param_1[0x31] = '\0';
    param_1[0x32] = '\0';
    param_1[0x33] = '\0';
    param_1[0x3c] = '\0';
    param_1[0x3d] = '\0';
    param_1[0x3e] = '\0';
    param_1[0x3f] = '\0';
    param_1[0x40] = '\0';
    param_1[0x41] = '\0';
    param_1[0x42] = '\0';
    param_1[0x43] = '\0';
    param_1[0x44] = '\0';
    param_1[0x45] = '\0';
    param_1[0x46] = '\0';
    param_1[0x47] = '\0';
    param_1[0x48] = '\0';
    param_1[0x49] = '\0';
    param_1[0x4a] = '\0';
    param_1[0x4b] = '\0';
    param_1[0x4c] = '\0';
    param_1[0x4d] = '\0';
    param_1[0x4e] = '\0';
    param_1[0x4f] = '\0';
    param_1[0x50] = '\0';
    param_1[0x51] = '\0';
    param_1[0x52] = '\0';
    param_1[0x53] = '\0';
    param_1[0x54] = '\0';
    param_1[0x55] = '\0';
    param_1[0x56] = '\0';
    param_1[0x57] = '\0';
    param_1[0x58] = '\0';
    param_1[0x59] = '\0';
    param_1[0x5a] = '\0';
    param_1[0x5b] = '\0';
    param_1[0x5c] = '\0';
    param_1[0x5d] = '\0';
    param_1[0x5e] = '\0';
    param_1[0x5f] = '\0';
    param_1[0x60] = '\0';
    param_1[0x61] = '\0';
    param_1[0x62] = '\0';
    param_1[99] = '\0';
    param_1[0x6c] = '\0';
    param_1[0x6d] = '\0';
    param_1[0x6e] = '\0';
    param_1[0x6f] = '\0';
    param_1[0x70] = '\0';
    param_1[0x71] = '\0';
    param_1[0x72] = '\0';
    param_1[0x73] = '\0';
    param_1[0x74] = '\0';
    param_1[0x75] = '\0';
    param_1[0x76] = '\0';
    param_1[0x77] = '\0';
    param_1[0x78] = '\0';
    param_1[0x79] = '\0';
    param_1[0x7a] = '\0';
    param_1[0x7b] = '\0';
    param_1[0x7c] = '\0';
    param_1[0x7d] = '\0';
    param_1[0x7e] = '\0';
    param_1[0x7f] = '\0';
    param_1[0x80] = '\0';
    param_1[0x81] = '\0';
    param_1[0x82] = '\0';
    param_1[0x83] = '\0';
    param_1[0x84] = '\0';
    param_1[0x90] = '\0';
    param_1[0x91] = '\0';
    param_1[0x92] = '\0';
    param_1[0x93] = '\0';
    param_1[0x94] = '\0';
    param_1[0x95] = '\0';
    param_1[0x96] = '\0';
    param_1[0x97] = '\0';
    param_1[0x98] = '\0';
    param_1[0x99] = '\0';
    param_1[0x9a] = '\0';
    param_1[0x9b] = '\0';
    param_1[0x9c] = '\0';
    param_1[0x9d] = '\0';
    param_1[0x9e] = '\0';
    param_1[0x9f] = '\0';
    param_1[0xa0] = '\0';
    param_1[0xa1] = '\0';
    param_1[0xa2] = '\0';
    param_1[0xa3] = '\0';
    param_1[0xa4] = '\0';
    param_1[0xa5] = '\0';
    param_1[0xa6] = '\0';
    param_1[0xa7] = '\0';
    param_1[0xa8] = '\0';
    param_1[0xb0] = '\0';
    param_1[0xb1] = '\0';
    param_1[0xb2] = '\0';
    param_1[0xb3] = '\0';
    param_1[0xb4] = '\0';
    param_1[0x34] = '\0';
    param_1[0x35] = '\0';
    param_1[0x36] = '\0';
    param_1[0x37] = '\0';
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[0x88] = '\0';
    param_1[0x89] = '\0';
    param_1[0x8a] = '\0';
    param_1[0x8b] = '\0';
    param_1[100] = '\0';
    param_1[0x65] = '\0';
    param_1[0x66] = '\0';
    param_1[0x67] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xae] = '\0';
    param_1[0xaf] = '\0';
    FUN_0073a5e0(&param_1);
  }
  return;
}



char * FUN_007736f0(uint param_1)

{
  if (param_1 < 0x88760819) {
    if (param_1 == 0x88760818) {
      return "D3DERR_WRONGTEXTUREFORMAT";
    }
    if (param_1 < 0x80070058) {
      if (param_1 == 0x80070057) {
        return "E_INVALIDARG";
      }
      if (param_1 == 0x80004005) {
        return "E_FAIL";
      }
      if (param_1 == 0x8007000e) {
        return "E_OUTOFMEMORY";
      }
    }
    else if (param_1 == 0x8876017c) {
      return "D3DERR_OUTOFVIDEOMEMORY";
    }
  }
  else {
    switch(param_1) {
    case 0x88760819:
      return "D3DERR_UNSUPPORTEDCOLOROPERATION";
    case 0x8876081a:
      return "D3DERR_UNSUPPORTEDCOLORARG";
    case 0x8876081b:
      return "D3DERR_UNSUPPORTEDALPHAOPERATION";
    case 0x8876081c:
      return "D3DERR_UNSUPPORTEDALPHAARG";
    case 0x8876081d:
      return "D3DERR_TOOMANYOPERATIONS";
    case 0x8876081e:
      return "D3DERR_CONFLICTINGTEXTUREFILTER";
    case 0x8876081f:
      return "D3DERR_UNSUPPORTEDFACTORVALUE";
    case 0x88760821:
      return "D3DERR_CONFLICTINGRENDERSTATE";
    case 0x88760822:
      return "D3DERR_UNSUPPORTEDTEXTUREFILTER";
    case 0x88760826:
      return "D3DERR_CONFLICTINGTEXTUREPALETTE";
    case 0x88760827:
      return "D3DERR_DRIVERINTERNALERROR";
    case 0x88760866:
      return "D3DERR_NOTFOUND";
    case 0x88760867:
      return "D3DERR_MOREDATA";
    case 0x88760868:
      return "D3DERR_DEVICELOST";
    case 0x88760869:
      return "D3DERR_DEVICENOTRESET";
    case 0x8876086a:
      return "D3DERR_NOTAVAILABLE";
    case 0x8876086b:
      return "D3DERR_INVALIDDEVICE";
    case 0x8876086c:
      return "D3DERR_INVALIDCALL";
    }
  }
  return "UNKNOWN!";
}



bool FUN_00773870(int param_1,int *param_2,undefined4 *param_3,undefined1 *param_4,
                 undefined1 *param_5)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = in_ECX + param_1 * 0xc;
  *param_5 = *(undefined1 *)(iVar1 + 0x1d);
  *param_4 = *(undefined1 *)(iVar1 + 0x1c);
  *param_3 = *(undefined4 *)(in_ECX + (param_1 * 3 + 6) * 4);
  iVar1 = *(int *)(iVar1 + 0x14);
  *param_2 = iVar1;
  return iVar1 != 0x13;
}



uint FUN_007738c0(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(in_ECX + 0x14);
  do {
    if (*piVar2 == 0x13) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 3;
  } while (uVar1 < 4);
  return 4;
}



void FUN_007738e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = param_2;
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a89f54;
  FUN_0070f2e0();
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  return;
}



void FUN_00773920(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a89f54;
  if (in_ECX[0x14] != 0) {
    (**(code **)(**(int **)(in_ECX[2] + 0x8ac) + 0xe8))(in_ECX[0x14]);
    (**(code **)(*(int *)in_ECX[0x14] + 8))((int *)in_ECX[0x14]);
    in_ECX[0x14] = 0;
  }
  *in_ECX = &PTR_LAB_00a89f40;
  return;
}



int FUN_00773960(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  if (iVar1 == 6) {
    iVar1 = 2;
  }
  if (iVar2 == 3) {
    iVar2 = 0;
  }
  if (((iVar1 == 0) || (iVar1 == 5)) && (iVar2 == 0)) {
    if (param_2[6] != 0) {
      return param_2[6];
    }
  }
  else if ((((iVar1 == 0) || (iVar1 == 5)) && ((iVar2 == 1 || (iVar2 == 2)))) && (param_2[7] != 0))
  {
    return param_2[7];
  }
  switch(iVar1) {
  case 0:
  case 3:
  case 5:
    if (-1 < iVar2) {
      if (iVar2 < 2) {
        if (param_2[8] != 0) {
          return param_2[8];
        }
      }
      else if ((iVar2 == 2) && (param_2[9] != 0)) {
        return param_2[9];
      }
    }
switchD_007739bc_caseD_1:
    if (iVar2 == 0) {
LAB_00773a8e:
      if (param_2[1] != 0) {
        return param_2[1];
      }
      if (*param_2 != 0) {
        return *param_2;
      }
      if (param_2[2] != 0) {
        return param_2[2];
      }
LAB_00773aae:
      iVar1 = param_2[5];
LAB_00773ab1:
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = param_2[3];
LAB_00773abc:
      if (iVar1 != 0) {
        return iVar1;
      }
      iVar1 = param_2[4];
    }
    else {
      if (iVar2 == 1) {
LAB_00773ad4:
        if (param_2[3] != 0) {
          return param_2[3];
        }
      }
      else if (iVar2 != 2) {
        return 0;
      }
      if (param_2[4] != 0) {
        return param_2[4];
      }
      iVar1 = param_2[5];
    }
    if (iVar1 != 0) {
      return iVar1;
    }
LAB_00773b63:
    return 0;
  case 1:
    goto switchD_007739bc_caseD_1;
  case 2:
    goto switchD_007739bc_caseD_2;
  case 4:
    if (param_2[0xd] != 0) {
      return param_2[0xd];
    }
    if (iVar2 == 0) {
      if (param_2[0xb] != 0) {
        return param_2[0xb];
      }
      if (param_2[0xc] != 0) {
        return param_2[0xc];
      }
    }
    else {
      if (param_2[0xc] != 0) {
        return param_2[0xc];
      }
      if (param_2[0xb] != 0) {
        return param_2[0xb];
      }
    }
switchD_007739bc_caseD_2:
    if (iVar2 == 0) {
      if (param_2[2] != 0) {
        return param_2[2];
      }
      if (param_2[5] != 0) {
        return param_2[5];
      }
      if (param_2[1] != 0) {
        return param_2[1];
      }
      iVar1 = *param_2;
      goto LAB_00773ab1;
    }
    if (iVar2 == 1) goto LAB_00773aae;
    if (iVar2 != 2) {
      return 0;
    }
    iVar1 = param_2[5];
    goto LAB_00773abc;
  default:
    goto LAB_00773b63;
  case 7:
    if (iVar2 == 0) {
      if (param_2[0xe] != 0) {
        return param_2[0xe];
      }
      goto LAB_00773a8e;
    }
    if (param_2[0xf] != 0) {
      return param_2[0xf];
    }
    goto LAB_00773ad4;
  case 8:
    if (param_2[0x10] != 0) {
      return param_2[0x10];
    }
    if (param_2[0x13] != 0) {
      return param_2[0x13];
    }
  case 10:
    if (param_2[0x11] != 0) {
      return param_2[0x11];
    }
    if (param_2[0x14] != 0) {
      return param_2[0x14];
    }
switchD_007739bc_caseD_c:
    if (param_2[0x12] != 0) {
      return param_2[0x12];
    }
    if (param_2[0x15] == 0) {
      return 0;
    }
    return param_2[0x15];
  case 9:
    if (param_2[0x13] != 0) {
      return param_2[0x13];
    }
    if (param_2[0x14] != 0) {
      return param_2[0x14];
    }
    if (param_2[0x15] != 0) {
      return param_2[0x15];
    }
    iVar1 = param_2[0x10];
    goto LAB_00773b33;
  case 0xb:
    if (param_2[0x14] != 0) {
      return param_2[0x14];
    }
    iVar1 = param_2[0x15];
LAB_00773b33:
    if (iVar1 != 0) {
      return iVar1;
    }
    if (param_2[0x11] == 0) {
      if (param_2[0x12] == 0) {
        return 0;
      }
      return param_2[0x12];
    }
    return param_2[0x11];
  case 0xc:
    goto switchD_007739bc_caseD_c;
  case 0xd:
    if (param_2[0x15] != 0) {
      return param_2[0x15];
    }
    if (param_2[0x12] == 0) {
      return 0;
    }
    return param_2[0x12];
  }
}



int FUN_00773ba0(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int local_8;
  undefined4 local_4;
  
  uVar2 = param_1;
  iVar6 = *(int *)(param_1 + 4);
  piVar5 = (int *)FUN_0071b280();
  piVar3 = param_3;
  if (*(int *)(uVar2 + 8) != 0) {
    return 0;
  }
  iVar1 = *param_2;
  if (iVar1 == 4) {
    if ((iVar6 == 9) || (iVar6 == 1)) {
      iVar6 = param_3[0xd];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[0xc];
LAB_00773c40:
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[0xb];
    }
    else {
LAB_00773be3:
      iVar6 = param_3[0xb];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[0xd];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[0xc];
    }
LAB_00774177:
    if (iVar6 == 0) {
      return 0;
    }
    cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6);
  }
  else {
    switch(iVar6) {
    case 0:
    case 2:
      if (iVar1 == 3) {
        iVar6 = param_3[8];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[9];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[10];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
      if (*param_2 == 1) {
        iVar6 = piVar3[1];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = *piVar3;
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[2];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[5];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
      else {
        iVar6 = piVar3[2];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[5];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[1];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = *piVar3;
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
      iVar6 = piVar3[3];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[4];
      goto LAB_00774177;
    case 1:
    case 3:
    case 0xc:
    case 0xd:
    case 0xe:
      break;
    case 4:
      if ((iVar1 != 1) && (iVar1 != 2)) {
        iVar6 = param_3[8];
LAB_00773e43:
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
      break;
    case 5:
      if ((iVar1 != 1) && (iVar1 != 2)) {
        iVar6 = param_3[9];
        goto LAB_00773e43;
      }
      break;
    case 6:
      if ((iVar1 != 1) && (iVar1 != 2)) {
        iVar6 = param_3[10];
        goto LAB_00773e43;
      }
      break;
    default:
      goto switchD_00773c73_caseD_7;
    case 8:
      goto LAB_00773be3;
    case 9:
      iVar6 = param_3[0xc];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[0xd];
      goto LAB_00773c40;
    case 0xb:
      if (param_2[1] == 2) {
        iVar6 = param_3[0xf];
        goto LAB_00773e43;
      }
      iVar6 = param_3[0xe];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
    }
    local_4 = 0x13;
    local_8 = 5;
    param_3 = (int *)((uint)param_3 & 0xffffff00);
    cVar4 = FUN_00773870(0,&local_4,&local_8,&param_3,&param_1);
    if ((cVar4 != '\0') && ((local_8 == 2 || (local_8 == 1)))) {
      param_1 = FUN_007738c0();
      if ((char)param_3 == '\x10') {
        if (param_1 < 2) {
          iVar6 = piVar3[0x10];
          if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
            return iVar6;
          }
          iVar6 = piVar3[0x13];
          if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
            return iVar6;
          }
        }
        if (param_1 < 3) {
          iVar6 = piVar3[0x11];
          if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
            return iVar6;
          }
          iVar6 = piVar3[0x14];
          if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
            return iVar6;
          }
        }
        iVar6 = piVar3[0x12];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[0x15];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
      else if ((char)param_3 == ' ') {
        if (((param_1 < 2) && (iVar6 = piVar3[0x13], iVar6 != 0)) &&
           (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        if (((param_1 < 3) && (iVar6 = piVar3[0x14], iVar6 != 0)) &&
           (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[0x15];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        if (((param_1 < 2) && (iVar6 = piVar3[0x10], iVar6 != 0)) &&
           (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        if (((param_1 < 3) && (iVar6 = piVar3[0x11], iVar6 != 0)) &&
           (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[0x12];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
      }
    }
    if (*param_2 == 3) {
      if (param_2[1] == 1) {
        iVar6 = piVar3[8];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[9];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[10];
        if (iVar6 != 0) {
          cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6);
joined_r0x007740f6:
          if (cVar4 != '\0') {
            return iVar6;
          }
        }
      }
      else {
        iVar6 = piVar3[9];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[10];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[8];
        if (iVar6 != 0) {
          cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6);
          goto joined_r0x007740f6;
        }
      }
    }
    if (*param_2 == 1) {
      if (param_2[1] == 1) {
        iVar6 = piVar3[3];
        if (((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) ||
           ((iVar6 = piVar3[4], iVar6 != 0 &&
            (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')))) {
          return iVar6;
        }
        iVar6 = piVar3[5];
      }
      else {
        iVar6 = piVar3[4];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[5];
        if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
          return iVar6;
        }
        iVar6 = piVar3[3];
      }
      goto LAB_00774177;
    }
    iVar6 = piVar3[5];
    if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
      return iVar6;
    }
    if (param_2[1] == 1) {
      iVar6 = piVar3[3];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[4];
    }
    else {
      iVar6 = piVar3[4];
      if ((iVar6 != 0) && (cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6), cVar4 != '\0')) {
        return iVar6;
      }
      iVar6 = piVar3[3];
    }
    if (iVar6 == 0) {
      return 0;
    }
    cVar4 = (**(code **)(*piVar5 + 0xc))(uVar2,iVar6);
  }
  if (cVar4 != '\0') {
    return iVar6;
  }
switchD_00773c73_caseD_7:
  return 0;
}



void FUN_00774250(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  for (iVar2 = DAT_00b3f700; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x2c)) {
    puVar1 = *(undefined4 **)(iVar2 + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined4 *)(iVar2 + 0x24) = 0;
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_00774370(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a89f54;
  if (in_ECX[0x14] != 0) {
    (**(code **)(**(int **)(in_ECX[2] + 0x8ac) + 0xe8))(in_ECX[0x14]);
    (**(code **)(*(int *)in_ECX[0x14] + 8))((int *)in_ECX[0x14]);
    in_ECX[0x14] = 0;
  }
  *in_ECX = &PTR_LAB_00a89f40;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007743d0(byte param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  *in_ECX = &PTR_FUN_00a89f80;
  _DAT_00b4283c = _DAT_00b4283c - in_ECX[0x18];
  uVar1 = in_ECX[0x18];
  iVar2 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar2 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b42840 = _DAT_00b42840 - iVar2;
  FUN_00760c60();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00774420(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  undefined4 local_4;
  
  uVar3 = *(undefined4 *)(in_ECX + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = 0;
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x280);
  local_4 = 0;
  iVar2 = (**(code **)(*piVar1 + 100))
                    (piVar1,*(undefined4 *)(in_ECX + 0x54),uVar3,0,*(undefined4 *)(in_ECX + 0x18),1,
                     &local_4,0);
  if (iVar2 < 0) {
    uVar3 = FUN_007736f0(iVar2);
    uVar4 = FUN_0060d0a0("NiDX9SourceCubeMapData::CreateCubeMap> Failed CreateCubeTexture - %s\n",
                         uVar3);
    return uVar4 & 0xffffff00;
  }
  *(undefined4 *)(in_ECX + 0x50) = uVar3;
  iVar2 = (uint)(*(byte *)(in_ECX + 0xd) >> 3) * *(int *)(in_ECX + 0x5c) * *(int *)(in_ECX + 0x54) *
          *(int *)(in_ECX + 0x54);
  uVar4 = iVar2 * 6;
  _DAT_00b4283c = _DAT_00b4283c + uVar4;
  iVar5 = 0;
  *(uint *)(in_ECX + 0x60) = uVar4;
  if ((uVar4 & 0xfffff000) != uVar4) {
    iVar5 = (uVar4 & 0xfffff000) + iVar2 * -6 + 0x1000;
  }
  _DAT_00b42840 = _DAT_00b42840 + iVar5;
  return CONCAT31((int3)(uVar4 >> 8),1);
}



void FUN_007744d0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_EBP;
  undefined4 unaff_ESI;
  uint uVar4;
  
  uVar3 = param_2;
  piVar1 = *(int **)(in_ECX + 0x50);
  uVar4 = 0;
  if (*(int *)(in_ECX + 0x5c) != 0) {
    while (iVar2 = (**(code **)(*piVar1 + 0x48))(piVar1,uVar3,uVar4,&param_2), -1 < iVar2) {
      FUN_00760860(unaff_ESI,uVar4,unaff_EBP,uVar3);
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      uVar4 = uVar4 + 1;
      if (*(uint *)(in_ECX + 0x5c) <= uVar4) {
        return;
      }
    }
    uVar3 = FUN_007736f0(iVar2);
    FUN_0060d0a0("NiDX9SourceCubeMapData::CopyDataToSurface> Failed GetSurfaceLevel (%d)- %s",uVar4,
                 uVar3);
  }
  return;
}



undefined4 * FUN_00774550(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *local_4;
  
  uVar3 = 0;
  do {
    if (*(int *)(param_2 + 0x7a4 + uVar3 * 4) != 0) break;
    if (*(int *)(param_2 + 0x7a8 + uVar3 * 4) != 0) {
      uVar3 = uVar3 + 1;
      break;
    }
    uVar3 = uVar3 + 2;
  } while (uVar3 < 0x16);
  if (uVar3 == 0x16) {
    FUN_0060d0a0("NiDX9SourceCubeMapData::Create> No Cube Map texture formats supported\n");
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_00401f00(0x80);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_00760bf0(param_1,param_2);
    *puVar4 = &PTR_FUN_00a89f80;
    puVar4[0x1f] = 0;
    puVar4[0x18] = 0;
  }
  puVar8 = *(undefined4 **)(param_1 + 0x3c);
  if (puVar8 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar8 + 1);
  }
  bVar1 = false;
  puVar11 = puVar8;
  if (puVar8 == (undefined4 *)0x0) {
    iVar10 = *(int *)(param_1 + 0x38);
    if (iVar10 == 0) {
      puVar6 = (undefined4 *)FUN_00701400(param_1,0x80000008,1);
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
        puVar11 = puVar6;
      }
      bVar1 = true;
    }
    else {
      piVar5 = (int *)FUN_0071b280();
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(iVar10,0);
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
        puVar11 = puVar6;
      }
    }
  }
  uVar3 = *(uint *)puVar11[0x15];
  if (((uVar3 != *(uint *)puVar11[0x16]) || (uVar3 == 0)) || ((uVar3 & uVar3 - 1) != 0)) {
    if ((!bVar1) && (puVar6 = (undefined4 *)FUN_00701400(param_1,0x80000009,1), puVar11 != puVar6))
    {
      LVar7 = InterlockedDecrement(puVar11 + 1);
      if (LVar7 == 0) {
        (**(code **)*puVar11)(1);
      }
      puVar11 = puVar6;
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
      }
    }
    bVar1 = true;
  }
  if (((bVar1) ||
      (local_4 = (undefined4 *)FUN_00773ba0(puVar8 + 2,param_1 + 0x18,param_2 + 0x7a4),
      local_4 == (undefined4 *)0x0)) || ((puVar8[3] == 2 || (puVar8[3] == 3)))) {
    bVar1 = true;
    puVar8 = (undefined4 *)FUN_00701400(param_1,0x80000007,1);
    if (puVar11 != puVar8) {
      if ((puVar11 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(puVar11 + 1), LVar7 == 0))
      {
        (**(code **)*puVar11)(1);
      }
      puVar11 = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar8 + 1);
      }
    }
    local_4 = *(undefined4 **)(param_2 + 0x6f4 + *(int *)(param_2 + 0x874) * 4);
LAB_00774740:
    if (((*(int *)(param_1 + 0x20) != 2) || (DAT_00b3f708 == '\0')) ||
       (*(char *)(param_2 + 0x6e8) == '\0')) {
      *(undefined1 *)((int)puVar4 + 0x65) = 0;
      goto LAB_00774762;
    }
  }
  else {
    bVar1 = false;
    if (*(int *)(param_1 + 0x20) != 1) goto LAB_00774740;
  }
  *(undefined1 *)((int)puVar4 + 0x65) = 1;
LAB_00774762:
  puVar8 = local_4;
  puVar6 = puVar4 + 3;
  for (iVar10 = 0x11; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar6 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar9 = *(undefined4 *)puVar11[0x15];
  puVar4[0x16] = uVar9;
  puVar4[0x15] = uVar9;
  if (bVar1) {
    InterlockedIncrement(puVar11 + 1);
    puVar8 = puVar11;
  }
  else {
    piVar5 = (int *)FUN_0071b280();
    puVar8 = (undefined4 *)
             (**(code **)(*piVar5 + 0x10))
                       (puVar11,local_4,puVar11,*(undefined1 *)((int)puVar4 + 0x65));
    if (puVar8 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)FUN_00701400(param_1,0x80000007,1);
      puVar8 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar6 + 1);
        puVar8 = puVar6;
      }
      bVar1 = true;
    }
    else {
      InterlockedIncrement(puVar8 + 1);
    }
    puVar4[0x1a] = *(int *)(puVar8[0x17] + puVar8[0x18] * 4) * puVar8[0x1b];
  }
  if (bVar1) {
    uVar9 = *(undefined4 *)puVar8[0x15];
    puVar4[0x16] = uVar9;
    puVar4[0x15] = uVar9;
    puVar4[0x1a] = *(int *)(puVar8[0x17] + puVar8[0x18] * 4) * puVar8[0x1b];
    *(undefined1 *)(puVar4 + 0x19) = 1;
  }
  if (*(char *)(param_2 + 0x6e8) == '\0') {
    uVar9 = 1;
  }
  else {
    uVar9 = puVar8[0x18];
  }
  puVar4[0x17] = uVar9;
  puVar4[0x1f] = puVar8[0x1a];
  cVar2 = FUN_00774420();
  if ((cVar2 != '\0') && (puVar4[0x14] != 0)) {
    uVar3 = 0;
    do {
      FUN_007744d0(puVar8,uVar3);
      uVar3 = uVar3 + 1;
    } while (uVar3 < 6);
    FUN_00760d70(puVar8[0x13]);
    *(undefined4 **)(puVar4[1] + 0x24) = puVar4;
    LVar7 = InterlockedDecrement(puVar8 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar8)(1);
    }
    LVar7 = InterlockedDecrement(puVar11 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar11)(1);
    }
    return puVar4;
  }
  (**(code **)*puVar4)(1);
  LVar7 = InterlockedDecrement(puVar8 + 1);
  if (LVar7 == 0) {
    (**(code **)*puVar8)(1);
  }
  LVar7 = InterlockedDecrement(puVar11 + 1);
  if (LVar7 == 0) {
    (**(code **)*puVar11)(1);
  }
  return (undefined4 *)0x0;
}



void FUN_007748f0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int in_ECX;
  uint uVar6;
  
  if ((*(char *)(in_ECX + 100) == '\0') &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x3c), iVar1 != 0)) {
    cVar2 = FUN_00760d70(*(undefined4 *)(iVar1 + 0x4c));
    if ((*(int *)(iVar1 + 0x68) != *(int *)(in_ECX + 0x7c)) || (cVar2 != '\0')) {
      piVar3 = (int *)FUN_0071b280();
      puVar4 = (undefined4 *)
               (**(code **)(*piVar3 + 0x10))
                         (iVar1,in_ECX + 0xc,iVar1,*(undefined1 *)(in_ECX + 0x65));
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar1 + 0x68);
      if ((*(int *)(in_ECX + 0x50) != 0) && (uVar6 = 0, puVar4[0x1b] != 0)) {
        do {
          FUN_007744d0(puVar4,uVar6);
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)puVar4[0x1b]);
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



undefined4 FUN_00774990(undefined4 param_1)

{
  switch(param_1) {
  default:
    return 0;
  case 0x14:
    return 1;
  case 0x15:
    return 2;
  case 0x16:
    return 3;
  case 0x17:
    return 4;
  case 0x18:
    return 5;
  case 0x19:
    return 6;
  case 0x1a:
    return 7;
  case 0x1b:
    return 8;
  case 0x1c:
    return 9;
  case 0x1d:
    return 10;
  case 0x1e:
    return 0xb;
  case 0x6f:
    return 0xc;
  case 0x70:
    return 0xd;
  case 0x71:
    return 0xe;
  case 0x72:
    return 0xf;
  case 0x73:
    return 0x10;
  case 0x74:
    return 0x11;
  }
}



void FUN_00774ae0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  switch(param_1) {
  case 0x46:
    *param_2 = 0x10;
    *param_3 = 0;
    return;
  case 0x47:
    *param_2 = 0x20;
    *param_3 = 0;
    return;
  default:
    *param_2 = 0;
    *param_3 = 0;
    return;
  case 0x49:
    *param_2 = 0xf;
    *param_3 = 1;
    return;
  case 0x4b:
    *param_2 = 0x18;
    *param_3 = 8;
    return;
  case 0x4d:
    *param_2 = 0x18;
    *param_3 = 0;
    return;
  case 0x4f:
    *param_2 = 0x18;
    *param_3 = 4;
    return;
  case 0x50:
    *param_2 = 0x10;
    *param_3 = 0;
    return;
  }
}



char * FUN_00774bd0(int param_1)

{
  if (param_1 < 0x3154454e) {
    if (param_1 == 0x3154454d) {
      return "D3DFMT_MULTI2_ARGB8";
    }
    switch(param_1) {
    case 0x14:
      return "D3DFMT_R8G8B8";
    case 0x15:
      return "D3DFMT_A8R8G8B8";
    case 0x16:
      return "D3DFMT_X8R8G8B8";
    case 0x17:
      return "D3DFMT_R5G6B5";
    case 0x18:
      return "D3DFMT_X1R5G5B5";
    case 0x19:
      return "D3DFMT_A1R5G5B5";
    case 0x1a:
      return "D3DFMT_A4R4G4B4";
    case 0x1b:
      return "D3DFMT_R3G3B2";
    case 0x1c:
      return "D3DFMT_A8";
    case 0x1d:
      return "D3DFMT_A8R3G3B2";
    case 0x1e:
      return "D3DFMT_X4R4G4B4";
    case 0x1f:
      return "D3DFMT_A2B10G10R10";
    case 0x20:
      return "D3DFMT_A8B8G8R8";
    case 0x21:
      return "D3DFMT_X8B8G8R8";
    case 0x22:
      return "D3DFMT_G16R16";
    case 0x23:
      return "D3DFMT_A2R10G10B10";
    case 0x24:
      return "D3DFMT_A16B16G16R16";
    case 0x28:
      return "D3DFMT_A8P8";
    case 0x29:
      return "D3DFMT_P8";
    case 0x32:
      return "D3DFMT_L8";
    case 0x33:
      return "D3DFMT_A8L8";
    case 0x34:
      return "D3DFMT_A4L4";
    case 0x3c:
      return "D3DFMT_V8U8";
    case 0x3d:
      return "D3DFMT_L6V5U5";
    case 0x3e:
      return "D3DFMT_X8L8V8U8";
    case 0x3f:
      return "D3DFMT_Q8W8V8U8";
    case 0x40:
      return "D3DFMT_V16U16";
    case 0x43:
      return "D3DFMT_A2W10V10U10";
    case 0x46:
      return "D3DFMT_D16_LOCKABLE";
    case 0x47:
      return "D3DFMT_D32";
    case 0x49:
      return "D3DFMT_D15S1";
    case 0x4b:
      return "D3DFMT_D24S8";
    case 0x4d:
      return "D3DFMT_D24X8";
    case 0x4f:
      return "D3DFMT_D24X4S4";
    case 0x50:
      return "D3DFMT_D16";
    case 0x51:
      return "D3DFMT_L16";
    case 0x52:
      return "D3DFMT_D32F_LOCKABLE";
    case 0x53:
      return "D3DFMT_D24FS8";
    case 100:
      return "D3DFMT_VERTEXDATA";
    case 0x65:
      return "D3DFMT_INDEX16";
    case 0x66:
      return "D3DFMT_INDEX32";
    case 0x6e:
      return "D3DFMT_Q16W16V16U16";
    case 0x6f:
      return "D3DFMT_R16F";
    case 0x70:
      return "D3DFMT_G16R16F";
    case 0x71:
      return "D3DFMT_A16B16G16R16F";
    case 0x72:
      return "D3DFMT_R32F";
    case 0x73:
      return "D3DFMT_G32R32F";
    case 0x74:
      return "D3DFMT_A32B32G32R32F";
    case 0x75:
      return "D3DFMT_CxV8U8";
    }
  }
  else if (param_1 < 0x34545845) {
    if (param_1 == 0x34545844) {
      return "D3DFMT_DXT4";
    }
    if (param_1 < 0x3259555a) {
      if (param_1 == 0x32595559) {
        return "D3DFMT_YUY2";
      }
      if (param_1 == 0x31545844) {
        return "D3DFMT_DXT1";
      }
      if (param_1 == 0x32545844) {
        return "D3DFMT_DXT2";
      }
    }
    else if (param_1 == 0x33545844) {
      return "D3DFMT_DXT3";
    }
  }
  else if (param_1 < 0x47424753) {
    if (param_1 == 0x47424752) {
      return "D3DFMT_R8G8_B8G8";
    }
    if (param_1 == 0x35545844) {
      return "D3DFMT_DXT5";
    }
    if (param_1 == 0x42475247) {
      return "D3DFMT_G8R8_G8B8";
    }
  }
  else if (param_1 == 0x59565955) {
    return "D3DFMT_UYVY";
  }
  return "UNKNOWN";
}



undefined4 FUN_00774ee0(int param_1)

{
  bool bVar1;
  
  if (param_1 < 0x3154454e) {
    if (param_1 != 0x3154454d) {
      switch(param_1) {
      case 0:
      case 100:
        break;
      default:
        goto switchD_00774efd_caseD_1;
      case 0x14:
        return 0x18;
      case 0x15:
      case 0x16:
      case 0x1f:
      case 0x20:
      case 0x21:
      case 0x23:
      case 0x3e:
      case 0x3f:
      case 0x40:
      case 0x43:
      case 0x47:
      case 0x4b:
      case 0x4d:
      case 0x4f:
      case 0x52:
      case 0x53:
      case 0x66:
      case 0x70:
      case 0x72:
        return 0x20;
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x1a:
      case 0x1d:
      case 0x1e:
      case 0x22:
      case 0x28:
      case 0x33:
      case 0x3c:
      case 0x3d:
      case 0x46:
      case 0x49:
      case 0x50:
      case 0x51:
      case 0x65:
      case 0x6f:
      case 0x75:
        return 0x10;
      case 0x1b:
      case 0x1c:
      case 0x29:
      case 0x32:
      case 0x34:
        return 8;
      case 0x24:
      case 0x6e:
      case 0x71:
      case 0x73:
        return 0x40;
      case 0x74:
        return 0x80;
      }
    }
  }
  else {
    if (param_1 < 0x34545845) {
      if (param_1 == 0x34545844) {
        return 0;
      }
      if (param_1 < 0x3259555a) {
        if (param_1 == 0x32595559) {
          return 0;
        }
        if (param_1 == 0x31545844) {
          return 0;
        }
        bVar1 = param_1 == 0x32545844;
      }
      else {
        bVar1 = param_1 == 0x33545844;
      }
    }
    else if (param_1 < 0x47424753) {
      if (param_1 == 0x47424752) {
        return 0;
      }
      if (param_1 == 0x35545844) {
        return 0;
      }
      bVar1 = param_1 == 0x42475247;
    }
    else {
      bVar1 = param_1 == 0x59565955;
    }
    if (!bVar1) {
switchD_00774efd_caseD_1:
      return 0xffffffff;
    }
  }
  return 0;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a8a468;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a8a470;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



int FUN_00775090(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  
  if (param_1 != 0) {
    puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x14);
    uVar4 = (*(undefined4 **)(in_ECX + 0x14))[2] - param_1;
    uVar5 = (int)uVar4 >> 0x1f;
    uVar4 = (uVar4 ^ uVar5) - uVar5;
    iVar3 = 0;
    while (puVar2 != (undefined4 *)0x0) {
      piVar1 = puVar2 + 2;
      puVar2 = (undefined4 *)*puVar2;
      uVar5 = *piVar1 - param_1;
      uVar6 = (int)uVar5 >> 0x1f;
      uVar6 = (uVar5 ^ uVar6) - uVar6;
      if (uVar6 < uVar4) {
        uVar4 = uVar6;
        iVar3 = *piVar1;
      }
    }
    return iVar3;
  }
  return 0;
}



undefined4 FUN_007750f0(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  char *local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_10 = (char *)0x0;
  cVar2 = FUN_0055e000(param_1,&local_10);
  if (cVar2 == '\0') {
    return 0;
  }
  local_10 = local_10 + 0x24;
  iVar5 = 0;
  local_4 = 0;
  local_8 = 0;
  uVar6 = 0;
  do {
    if (*local_10 != '\0') {
      uVar1 = *(undefined4 *)((int)&DAT_00b29944 + uVar6);
      local_c = 0;
      param_1 = 0;
      FUN_00774ae0(uVar1,&local_c,&param_1);
      uVar3 = local_c - param_2 >> 0x1f;
      uVar4 = iVar5 - param_2 >> 0x1f;
      if (((int)((local_c - param_2 ^ uVar3) - uVar3) <= (int)((iVar5 - param_2 ^ uVar4) - uVar4))
         && (uVar3 = param_1 - param_3 >> 0x1f, uVar4 = local_8 - param_3 >> 0x1f,
            (int)((param_1 - param_3 ^ uVar3) - uVar3) <= (int)((local_8 - param_3 ^ uVar4) - uVar4)
            )) {
        local_8 = param_1;
        iVar5 = local_c;
        local_4 = uVar1;
      }
    }
    local_10 = local_10 + 4;
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x24);
  return local_4;
}



undefined4 FUN_007751f0(char param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *extraout_ECX;
  undefined4 *puVar3;
  undefined8 uVar4;
  
  if (param_1 == '\0') {
    puVar3 = *(undefined4 **)(in_ECX + 0x138);
    if (puVar3 != (undefined4 *)0x0) {
      do {
        puVar1 = (undefined4 *)puVar3[2];
        puVar3 = (undefined4 *)*puVar3;
        if ((puVar1 != (undefined4 *)0x0) && (*(char *)((int)puVar1 + 5) != '\0')) {
          uVar4 = FUN_00774ee0(*puVar1);
          puVar3 = extraout_ECX;
          if ((int)uVar4 == param_2) {
            uVar2 = FUN_00774990(*(undefined4 *)((ulonglong)uVar4 >> 0x20));
            return uVar2;
          }
        }
      } while (puVar3 != (undefined4 *)0x0);
      return 0;
    }
  }
  else {
    puVar3 = *(undefined4 **)(in_ECX + 0x138);
    while (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar3[2];
      puVar3 = (undefined4 *)*puVar3;
      if ((puVar1 != (undefined4 *)0x0) && (*(char *)(puVar1 + 1) != '\0')) {
        uVar2 = FUN_00774990(*puVar1);
        return uVar2;
      }
    }
  }
  return 0;
}



undefined4 FUN_00775280(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  
  puVar2 = *(undefined4 **)(in_ECX + 0x138);
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
  } while (((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 != param_1));
  if (param_4 != 0) {
    if (param_3 < 0x11) {
      if (param_4 == 1) {
        uVar3 = FUN_007750f0(param_2,0xf,1);
        return uVar3;
      }
      uVar3 = FUN_007750f0(param_2,0x18,8);
      return uVar3;
    }
    param_3 = 0x18;
    if (param_4 != 1) {
      uVar3 = FUN_007750f0(param_2,0x18,8);
      return uVar3;
    }
  }
  uVar3 = FUN_007750f0(param_2,param_3,param_4);
  return uVar3;
}



int * FUN_00775320(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  piVar3 = (int *)0x0;
  if (*(short *)(in_ECX + 0x45a) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(in_ECX + 0x454) + uVar4 * 4);
      if ((((piVar1 != (int *)0x0) && (piVar1[3] == param_1)) && (*piVar1 == param_2)) &&
         (piVar1[1] == param_3)) {
        uVar2 = FUN_00775090(*param_4);
        *param_4 = uVar2;
        piVar3 = piVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(in_ECX + 0x45a));
  }
  return piVar3;
}



void FUN_00775390(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a438;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007753c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a478;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a8a458;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 *
FUN_007753f0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,char param_5,
            char param_6)

{
  undefined4 uVar1;
  bool bVar2;
  void *_Dst;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint uVar9;
  char *pcStack_34;
  uint uStack_30;
  uint local_28;
  int iStack_1c;
  int iStack_18;
  undefined1 auStack_10 [4];
  int iStack_c;
  char acStack_8 [4];
  char acStack_4 [4];
  
  in_ECX[3] = 0x25;
  in_ECX[2] = &PTR_FUN_00a8a438;
  in_ECX[5] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[4] = _Dst;
  _memset(_Dst,0,in_ECX[3] * 4);
  in_ECX[2] = &PTR_FUN_00a8a498;
  *in_ECX = param_4;
  *(char *)((int)in_ECX + 5) = param_5;
  *(char *)(in_ECX + 1) = param_6;
  local_28 = 0;
  do {
    if (local_28 != 0) {
      uVar3 = FUN_004979e0(local_28);
      iVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,1,1,uVar3);
      if (-1 < iVar4) {
        pcStack_34 = (char *)FUN_00401f00(0x48);
        if (pcStack_34 == (char *)0x0) {
          pcStack_34 = (char *)0x0;
        }
        else {
          pcStack_34[0] = '\0';
          pcStack_34[1] = '\0';
          pcStack_34[2] = '\0';
          pcStack_34[3] = '\0';
          pcStack_34[4] = '\0';
          pcStack_34[5] = '\0';
          pcStack_34[6] = '\0';
          pcStack_34[7] = '\0';
          pcStack_34[8] = '\0';
          pcStack_34[9] = '\0';
          pcStack_34[10] = '\0';
          pcStack_34[0xb] = '\0';
          pcStack_34[0xc] = '\0';
          pcStack_34[0xd] = '\0';
          pcStack_34[0xe] = '\0';
          pcStack_34[0xf] = '\0';
          pcStack_34[0x10] = '\0';
          pcStack_34[0x11] = '\0';
          pcStack_34[0x12] = '\0';
          pcStack_34[0x13] = '\0';
          pcStack_34[0x14] = '\0';
          pcStack_34[0x15] = '\0';
          pcStack_34[0x16] = '\0';
          pcStack_34[0x17] = '\0';
          pcStack_34[0x18] = '\0';
          pcStack_34[0x19] = '\0';
          pcStack_34[0x1a] = '\0';
          pcStack_34[0x1b] = '\0';
          pcStack_34[0x1c] = '\0';
          pcStack_34[0x1d] = '\0';
          pcStack_34[0x1e] = '\0';
          pcStack_34[0x1f] = '\0';
          pcStack_34[0x20] = '\0';
          pcStack_34[0x21] = '\0';
          pcStack_34[0x22] = '\0';
          pcStack_34[0x23] = '\0';
          pcStack_34[0x24] = '\0';
          pcStack_34[0x25] = '\0';
          pcStack_34[0x26] = '\0';
          pcStack_34[0x27] = '\0';
          pcStack_34[0x28] = '\0';
          pcStack_34[0x29] = '\0';
          pcStack_34[0x2a] = '\0';
          pcStack_34[0x2b] = '\0';
          pcStack_34[0x2c] = '\0';
          pcStack_34[0x2d] = '\0';
          pcStack_34[0x2e] = '\0';
          pcStack_34[0x2f] = '\0';
          pcStack_34[0x30] = '\0';
          pcStack_34[0x31] = '\0';
          pcStack_34[0x32] = '\0';
          pcStack_34[0x33] = '\0';
          pcStack_34[0x34] = '\0';
          pcStack_34[0x35] = '\0';
          pcStack_34[0x36] = '\0';
          pcStack_34[0x37] = '\0';
          pcStack_34[0x38] = '\0';
          pcStack_34[0x39] = '\0';
          pcStack_34[0x3a] = '\0';
          pcStack_34[0x3b] = '\0';
          pcStack_34[0x3c] = '\0';
          pcStack_34[0x3d] = '\0';
          pcStack_34[0x3e] = '\0';
          pcStack_34[0x3f] = '\0';
          pcStack_34[0x40] = '\0';
          pcStack_34[0x41] = '\0';
          pcStack_34[0x42] = '\0';
          pcStack_34[0x43] = '\0';
          pcStack_34[0x44] = '\0';
          pcStack_34[0x45] = '\0';
          pcStack_34[0x46] = '\0';
          pcStack_34[0x47] = '\0';
        }
        uVar6 = 0;
        uStack_30 = 0;
        uVar9 = 0;
        do {
          if ((param_6 != '\0') &&
             (iVar4 = (**(code **)(*param_1 + 0x2c))
                                (param_1,param_2,param_3,param_4,1,uVar9 + 1,auStack_10), -1 < iVar4
             )) {
            uStack_30 = uStack_30 | 1 << ((byte)uVar9 & 0x1f);
          }
          if ((param_5 != '\0') &&
             (iVar4 = (**(code **)(*param_1 + 0x2c))
                                (param_1,param_2,param_3,param_4,0,uVar9 + 1,auStack_10), -1 < iVar4
             )) {
            uVar6 = uVar6 | 1 << ((byte)uVar9 & 0x1f);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < 0x10);
        iStack_c = (int)&DAT_00b29944 - (int)pcStack_34;
        bVar2 = false;
        iStack_18 = 9;
        pcVar7 = pcStack_34;
        do {
          uVar1 = *(undefined4 *)(pcVar7 + iStack_c);
          iVar4 = (**(code **)(*param_1 + 0x28))(param_1,param_2,param_3,param_4,2,1,uVar1);
          if ((-1 < iVar4) &&
             (iVar4 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3,param_4,uVar3,uVar1),
             -1 < iVar4)) {
            *pcVar7 = param_6;
            bVar2 = true;
            pcVar7[0x24] = param_5;
            iVar4 = 1;
            iStack_1c = 0x10;
            do {
              iVar8 = 1 << ((char)iVar4 - 1U & 0x1f);
              if ((iVar8 != 0 || uStack_30 != 0) &&
                 (iVar5 = (**(code **)(*param_1 + 0x2c))
                                    (param_1,param_2,param_3,uVar1,1,iVar4,acStack_8), -1 < iVar5))
              {
                if (iVar4 == 1) {
                  pcVar7[1] = acStack_8[0];
                }
                *(ushort *)(pcVar7 + 2) = *(ushort *)(pcVar7 + 2) | (ushort)iVar8;
              }
              if ((iVar8 != 0 || uVar6 != 0) &&
                 (iVar5 = (**(code **)(*param_1 + 0x2c))
                                    (param_1,param_2,param_3,uVar1,0,iVar4,acStack_4), -1 < iVar5))
              {
                if (iVar4 == 1) {
                  pcVar7[0x25] = acStack_4[0];
                }
                *(ushort *)(pcVar7 + 0x26) = *(ushort *)(pcVar7 + 0x26) | (ushort)iVar8;
              }
              iVar4 = iVar4 + 1;
              iStack_1c = iStack_1c + -1;
            } while (iStack_1c != 0);
          }
          pcVar7 = pcVar7 + 4;
          iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
        if (bVar2) {
          FUN_00452570(uVar3,pcStack_34);
        }
        else {
          FUN_00401f20(pcStack_34);
        }
      }
    }
    local_28 = local_28 + 1;
  } while (local_28 < 0x12);
  return in_ECX;
}



void FUN_007756f0(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int local_c;
  undefined4 local_8;
  undefined1 local_4 [4];
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 0xc) != 0) {
    piVar2 = *(int **)(in_ECX + 0x10);
    do {
      if (*piVar2 != 0) {
        local_c = (*(int **)(in_ECX + 0x10))[uVar1];
        goto joined_r0x0077571d;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 0xc));
  }
  local_c = 0;
joined_r0x0077571d:
  while (local_c != 0) {
    FUN_00452600(&local_c,local_4,&local_8);
    FUN_00401f20(local_8);
  }
  *(undefined4 *)(in_ECX + 8) = &PTR_FUN_00a8a498;
  FUN_007c2a40();
  *(undefined4 *)(in_ECX + 8) = &PTR_FUN_00a8a438;
  FUN_007c2a40();
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  return;
}



undefined4 * FUN_00775780(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *in_ECX;
  undefined4 *unaff_EDI;
  int unaff_retaddr;
  undefined4 local_20 [3];
  int iStack_14;
  undefined1 uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  uint uStack_4;
  
  piVar2 = param_1;
  *in_ECX = param_3;
  in_ECX[0x50] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x4d] = &PTR_FUN_00a8a488;
  iVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_2,*in_ECX,in_ECX + 1);
  if (iVar4 < 0) {
    in_ECX[1] = 0;
  }
  else {
    puVar3 = (undefined4 *)param_1[1];
    while (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        uVar5 = (**(code **)(*piVar2 + 0x18))(piVar2,param_2,iVar4);
        uStack_c = 0;
        if (uVar5 != 0) {
          do {
            puVar9 = local_20;
            uStack_4 = uStack_4 & 0xffffff00;
            param_1 = (int *)((uint)param_1 & 0xffffff00);
            iVar6 = (**(code **)(*piVar2 + 0x1c))(piVar2,param_2,iVar4,uStack_c);
            if (-1 < iVar6) {
              (**(code **)(*piVar2 + 0x24))(piVar2,param_2,*puVar9,iVar4,iVar4,0);
              uStack_10 = 1;
            }
            iVar7 = (**(code **)(*piVar2 + 0x24))(piVar2,param_2,*puVar9,iStack_14,iVar4,1);
            if (-1 < iVar7) {
              uStack_4 = CONCAT31(uStack_4._1_3_,1);
            }
            if ((-1 < iVar6) || ((char)uStack_4 != '\0')) {
              puVar9 = (undefined4 *)unaff_EDI[0x4e];
              do {
                if (puVar9 == (undefined4 *)0x0) {
                  iVar6 = FUN_00401f00(0x18);
                  if (iVar6 == 0) {
                    uVar8 = 0;
                  }
                  else {
                    uVar8 = FUN_007753f0(piVar2,param_2,*unaff_EDI,iStack_14,param_1,uStack_4);
                  }
                  puVar9 = (undefined4 *)(**(code **)(in_ECX[0x4d] + 4))();
                  puVar9[2] = uVar8;
                  *puVar9 = 0;
                  puVar9[1] = in_ECX[0x4f];
                  if ((undefined4 *)in_ECX[0x4f] == (undefined4 *)0x0) {
                    in_ECX[0x4e] = puVar9;
                  }
                  else {
                    *(undefined4 *)in_ECX[0x4f] = puVar9;
                  }
                  in_ECX[0x50] = in_ECX[0x50] + 1;
                  in_ECX[0x4f] = puVar9;
                  param_2 = uStack_8;
                  break;
                }
                piVar1 = puVar9 + 2;
                puVar9 = (undefined4 *)*puVar9;
              } while (((int *)*piVar1 == (int *)0x0) || (*(int *)*piVar1 != iStack_14));
            }
            uStack_c = uStack_c + 1;
          } while (uStack_c < uVar5);
        }
      }
    }
  }
  puVar3 = (undefined4 *)unaff_EDI[0x4e];
  do {
    if (puVar3 == (undefined4 *)0x0) goto LAB_00775973;
    piVar2 = puVar3 + 2;
    puVar3 = (undefined4 *)*puVar3;
  } while (*(int *)*piVar2 != unaff_retaddr);
  if ((char)((int *)*piVar2)[1] != '\0') {
    *(undefined1 *)(unaff_EDI + 0x51) = 1;
    return unaff_EDI;
  }
LAB_00775973:
  *(undefined1 *)(unaff_EDI + 0x51) = 0;
  return unaff_EDI;
}



void FUN_007759a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[3] = param_1[3];
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = &PTR_FUN_00a7c694;
  puVar1 = (undefined4 *)(**(code **)(in_ECX[4] + 4))();
  puVar1[2] = param_1[2];
  puVar1[1] = 0;
  *puVar1 = in_ECX[5];
  if (in_ECX[5] == 0) {
    in_ECX[6] = puVar1;
  }
  else {
    *(undefined4 **)(in_ECX[5] + 4) = puVar1;
  }
  in_ECX[7] = in_ECX[7] + 1;
  in_ECX[5] = puVar1;
  uVar2 = FUN_00774ee0(param_1[3]);
  in_ECX[2] = uVar2;
  return;
}



void FUN_00775a20(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *in_ECX;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_20 [4];
  undefined4 uStack_10;
  int *piStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  *in_ECX = param_2;
  *(undefined2 *)(in_ECX + 0x116) = 0x20;
  *(undefined2 *)((int)in_ECX + 0x45a) = 0;
  *(undefined2 *)(in_ECX + 0x117) = 0;
  in_ECX[0x114] = &PTR__scalar_deleting_destructor__00a8a468;
  *(undefined2 *)((int)in_ECX + 0x45e) = 0x10;
  uVar4 = FUN_00401f00(0x80);
  in_ECX[0x115] = uVar4;
  (**(code **)(*param_1 + 0x14))(param_1,*in_ECX,0,in_ECX + 1);
  puVar2 = *(undefined4 **)(iStack_4 + 4);
  do {
    do {
      do {
        if (puVar2 == (undefined4 *)0x0) {
          (**(code **)(*param_1 + 0x20))(param_1,*in_ECX,auStack_20);
          iVar8 = FUN_00401f00(0x148);
          if (iVar8 == 0) {
            uVar4 = 0;
          }
          else {
            uVar4 = FUN_00775780(param_1,param_2,1,auStack_20[0],uStack_10);
          }
          in_ECX[0x118] = uVar4;
          iVar8 = FUN_00401f00(0x148);
          if (iVar8 == 0) {
            in_ECX[0x119] = 0;
            return;
          }
          uVar4 = FUN_00775780(param_1,param_2,2,auStack_20[0],uStack_10);
          in_ECX[0x119] = uVar4;
          return;
        }
        iVar8 = puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
        param_2 = uStack_8;
      } while (iVar8 == 0);
      uVar5 = (**(code **)(*param_1 + 0x18))(param_1,*in_ECX,iVar8);
      uVar11 = 0;
      param_2 = uStack_8;
    } while (uVar5 == 0);
    do {
      iVar6 = (**(code **)(*param_1 + 0x1c))(param_1,*in_ECX,iVar8,uVar11,&iStack_30);
      if (-1 < iVar6) {
        uVar9 = 0;
        piVar10 = (int *)0x0;
        if (*(short *)((int)in_ECX + 0x45a) != 0) {
          do {
            piVar3 = *(int **)(in_ECX[0x115] + uVar9 * 4);
            if ((((piVar3 != (int *)0x0) && (piVar3[3] == iVar8)) && (*piVar3 == iStack_30)) &&
               (piVar3[1] == iStack_2c)) {
              puVar7 = (undefined4 *)(**(code **)(piVar3[4] + 4))();
              puVar7[2] = uStack_28;
              *puVar7 = 0;
              puVar7[1] = piVar3[6];
              if ((undefined4 *)piVar3[6] == (undefined4 *)0x0) {
                piVar3[5] = (int)puVar7;
              }
              else {
                *(undefined4 *)piVar3[6] = puVar7;
              }
              piVar3[7] = piVar3[7] + 1;
              piVar3[6] = (int)puVar7;
              param_1 = piStack_c;
              piVar10 = piVar3;
            }
            uVar9 = uVar9 + 1;
          } while (uVar9 < *(ushort *)((int)in_ECX + 0x45a));
          if (piVar10 != (int *)0x0) goto LAB_00775c03;
        }
        iVar6 = FUN_00401f00(0x20);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_007759a0(&iStack_30);
        }
        uVar1 = *(ushort *)((int)in_ECX + 0x45a);
        uVar9 = (uint)uVar1;
        if (*(ushort *)(in_ECX + 0x116) <= uVar9) {
          FUN_004e4a10(*(ushort *)((int)in_ECX + 0x45e) + uVar9);
        }
        if (uVar9 < *(ushort *)((int)in_ECX + 0x45a)) {
          if (iVar6 == 0) {
            if (*(int *)(in_ECX[0x115] + uVar9 * 4) != 0) {
              *(short *)(in_ECX + 0x117) = *(short *)(in_ECX + 0x117) + -1;
            }
          }
          else if (*(int *)(in_ECX[0x115] + uVar9 * 4) == 0) {
            *(short *)(in_ECX + 0x117) = *(short *)(in_ECX + 0x117) + 1;
          }
        }
        else {
          *(ushort *)((int)in_ECX + 0x45a) = uVar1 + 1;
          if (iVar6 != 0) {
            *(short *)(in_ECX + 0x117) = *(short *)(in_ECX + 0x117) + 1;
          }
        }
        *(int *)(in_ECX[0x115] + uVar9 * 4) = iVar6;
        param_1 = piStack_c;
      }
LAB_00775c03:
      uVar11 = uVar11 + 1;
      param_2 = uStack_8;
    } while (uVar11 < uVar5);
  } while( true );
}



void FUN_00775cc0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *in_ECX;
  
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1);
  *in_ECX = uVar1;
  FUN_004e4a10(uVar1);
  uVar1 = 0;
  if (*in_ECX != 0) {
    do {
      iVar2 = FUN_00401f00(0x468);
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_00775a20(param_1,uVar1,param_1);
      }
      if (uVar1 < *(ushort *)((int)in_ECX + 0xe)) {
        if (iVar2 == 0) {
          if (*(int *)(in_ECX[2] + uVar1 * 4) != 0) {
            *(short *)(in_ECX + 4) = (short)in_ECX[4] + -1;
          }
        }
        else if (*(int *)(in_ECX[2] + uVar1 * 4) == 0) {
          *(short *)(in_ECX + 4) = (short)in_ECX[4] + 1;
        }
      }
      else {
        *(short *)((int)in_ECX + 0xe) = (short)uVar1 + 1;
        if (iVar2 != 0) {
          *(short *)(in_ECX + 4) = (short)in_ECX[4] + 1;
        }
      }
      *(int *)(in_ECX[2] + uVar1 * 4) = iVar2;
      uVar1 = uVar1 + 1;
    } while (uVar1 < *in_ECX);
  }
  return;
}



void FUN_00775d60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a498;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8a438;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00775da0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x138);
  while (puVar1 != (undefined4 *)0x0) {
    iVar2 = puVar1[2];
    puVar1 = (undefined4 *)*puVar1;
    if (iVar2 != 0) {
      FUN_007756f0();
      FUN_00401f20(iVar2);
    }
  }
  *(undefined4 *)(in_ECX + 0x134) = &PTR_FUN_00a8a478;
  FUN_00573880();
  *(undefined4 *)(in_ECX + 0x134) = &PTR_LAB_00a8a458;
  return;
}



void FUN_00775df0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *(undefined2 *)(in_ECX + 3) = 0;
  *(undefined2 *)((int)in_ECX + 0xe) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  in_ECX[2] = 0;
  in_ECX[1] = &PTR__scalar_deleting_destructor__00a8a470;
  *(undefined2 *)((int)in_ECX + 0x12) = 1;
  *in_ECX = 0;
  FUN_00775cc0(param_1,param_2);
  return;
}



void FUN_00775e30(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  uint local_4;
  
  local_4 = 0;
  if (*(short *)(in_ECX + 0x45a) != 0) {
    do {
      iVar2 = *(int *)(*(int *)(in_ECX + 0x454) + local_4 * 4);
      if (iVar2 != 0) {
        piVar1 = (int *)(iVar2 + 0x10);
        *piVar1 = (int)&PTR_FUN_00a7c684;
        puVar4 = *(undefined4 **)(iVar2 + 0x14);
        while (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)*puVar4;
          (**(code **)(*piVar1 + 8))(puVar4);
          puVar4 = puVar3;
        }
        *(undefined4 *)(iVar2 + 0x1c) = 0;
        *(undefined4 *)(iVar2 + 0x14) = 0;
        *(undefined4 *)(iVar2 + 0x18) = 0;
        *piVar1 = (int)&PTR_LAB_00a7c674;
        FUN_00401f20(iVar2);
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(ushort *)(in_ECX + 0x45a));
  }
  iVar2 = *(int *)(in_ECX + 0x460);
  if (iVar2 != 0) {
    FUN_00775da0();
    FUN_00401f20(iVar2);
  }
  iVar2 = *(int *)(in_ECX + 0x464);
  if (iVar2 != 0) {
    FUN_00775da0();
    FUN_00401f20(iVar2);
  }
  *(undefined ***)(in_ECX + 0x450) = &PTR__scalar_deleting_destructor__00a8a468;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x454));
  return;
}



void FUN_00775f10(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (*(short *)(in_ECX + 0xe) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 8) + uVar2 * 4);
      if (iVar1 != 0) {
        FUN_00775e30();
        FUN_00401f20(iVar1);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0xe));
  }
  *(undefined ***)(in_ECX + 4) = &PTR__scalar_deleting_destructor__00a8a470;
  FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  return;
}



void FUN_00775f60(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  *param_1 = *in_ECX;
  fVar1 = in_ECX[2];
  param_1[1] = in_ECX[1];
  param_1[2] = fVar1;
  *param_1 = param_2 * *param_1;
  param_1[1] = param_2 * param_1[1];
  param_1[2] = param_2 * param_1[2];
  return;
}



undefined4 FUN_00775fa0(void)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x3c);
  bVar3 = false;
  do {
    uVar5 = 1 << ((byte)*(uint *)(in_ECX + 0x3c) & 0x1f);
    uVar4 = *(uint *)(in_ECX + 0x3c) >> 5;
    uVar2 = *(uint *)(in_ECX + 0x40 + uVar4 * 4);
    if ((uVar5 & uVar2) == 0) {
      *(uint *)(in_ECX + 0x40 + uVar4 * 4) = uVar2 | uVar5;
      bVar3 = true;
    }
    *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
    if (*(int *)(in_ECX + 0x3c) == 0x1000) {
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
  } while (!bVar3);
  return uVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00775ff0(int *param_1)

{
  float fVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  undefined4 *in_ECX;
  
  uVar2 = param_1[0x2e];
  if (in_ECX[0x1a] == uVar2) {
    return uVar2 & 0xffffff00;
  }
  in_ECX[0x1a] = uVar2;
  _memset(in_ECX,0,0x68);
  iVar11 = (**(code **)(*param_1 + 0x84))();
  if (iVar11 == 1) {
    *in_ECX = 3;
    in_ECX[0x10] = param_1[0x42];
    in_ECX[0x11] = param_1[0x43];
    in_ECX[0x12] = param_1[0x44];
  }
  else {
    if (iVar11 == 2) {
      *in_ECX = 1;
      in_ECX[0xd] = param_1[0x22];
      in_ECX[0xe] = param_1[0x23];
      in_ECX[0xf] = param_1[0x24];
    }
    else {
      if (iVar11 != 3) goto LAB_007760c4;
      *in_ECX = 2;
      in_ECX[0xd] = param_1[0x22];
      in_ECX[0xe] = param_1[0x23];
      in_ECX[0xf] = param_1[0x24];
      in_ECX[0x10] = param_1[0x45];
      in_ECX[0x11] = param_1[0x46];
      in_ECX[0x12] = param_1[0x47];
      in_ECX[0x18] = 0;
      in_ECX[0x19] = ((float)param_1[0x48] * _DAT_00b3f9a4) / 90.0;
      in_ECX[0x14] = param_1[0x49];
    }
    in_ECX[0x15] = param_1[0x42];
    in_ECX[0x16] = param_1[0x43];
    in_ECX[0x17] = param_1[0x44];
    in_ECX[0x13] = _DAT_00b42844;
  }
LAB_007760c4:
  fVar1 = (float)param_1[0x37];
  fVar3 = (float)param_1[0x39];
  fVar4 = (float)param_1[0x3a];
  fVar5 = (float)param_1[0x3b];
  fVar6 = (float)param_1[0x3c];
  fVar7 = (float)param_1[0x3d];
  fVar8 = (float)param_1[0x3e];
  fVar9 = (float)param_1[0x3f];
  fVar10 = (float)param_1[0x40];
  in_ECX[9] = fVar1 * (float)param_1[0x38];
  in_ECX[10] = fVar3 * fVar1;
  in_ECX[0xb] = fVar4 * fVar1;
  in_ECX[0xc] = 0x3f800000;
  in_ECX[1] = fVar5 * fVar1;
  in_ECX[2] = fVar6 * fVar1;
  in_ECX[3] = fVar7 * fVar1;
  in_ECX[4] = 0x3f800000;
  in_ECX[5] = fVar8 * fVar1;
  in_ECX[6] = fVar9 * fVar1;
  in_ECX[7] = fVar1 * fVar10;
  in_ECX[8] = 0x3f800000;
  return CONCAT31((int3)((uint)fVar8 >> 8),1);
}



void FUN_00776240(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x8b,0,0);
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x89,0,0);
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined1 *)(in_ECX + 0x31) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x94,0,0);
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x93,0,0);
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x91,0,0);
  *(undefined1 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
  return;
}



void FUN_007762d0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x1c) != 0) {
    do {
      piVar1 = *(int **)(in_ECX + 0x14);
      iVar2 = *piVar1;
      *(int *)(in_ECX + 0x14) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(in_ECX + 0x18) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      iVar2 = piVar1[2];
      (**(code **)(*(int *)(in_ECX + 0x10) + 8))(piVar1);
      *(int *)(in_ECX + 0x1c) = *(int *)(in_ECX + 0x1c) + -1;
      iVar2 = *(int *)(iVar2 + 0x104);
      (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))
                (*(int **)(in_ECX + 0x20),*(undefined4 *)(iVar2 + 0x6c),0);
      *(undefined1 *)(iVar2 + 0x71) = 0;
    } while (*(int *)(in_ECX + 0x1c) != 0);
    *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
    return;
  }
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(in_ECX + 0x28);
  return;
}



void FUN_00776340(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a4b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00776370(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a4e8;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a8a4d8;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007763a0(undefined4 *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined2 in_FPUControlWord;
  undefined4 *local_1c;
  undefined8 local_18;
  float local_10;
  float local_c;
  float local_8;
  
  local_10 = 0.0;
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  local_c = 0.0;
  local_8 = 0.0;
  while (puVar2 != (undefined4 *)0x0) {
    piVar10 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    *(undefined1 *)(*(int *)(*piVar10 + 0x104) + 0x70) = 1;
  }
  if (*(char *)(in_ECX + 0x31) != '\0') {
    local_1c = (undefined4 *)0x0;
    if (param_1 != (undefined4 *)0x0) {
      local_1c = *(undefined4 **)((int)param_1 + 0xc);
    }
    param_1 = (undefined4 *)0x0;
    puVar2 = local_1c;
    while ((puVar2 != (undefined4 *)0x0 && (param_1 < 8))) {
      if (puVar2 == (undefined4 *)0x0) {
        piVar10 = (int *)0x0;
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9 = (undefined4 *)*puVar2;
        piVar10 = (int *)puVar2[1];
        local_1c = puVar9;
      }
      local_18._4_4_ = (undefined4)((ulonglong)local_18 >> 0x20);
      local_18 = CONCAT44(local_18._4_4_,piVar10);
      puVar2 = puVar9;
      if (((char)piVar10[0x2b] != '\0') && (0.01 <= (float)piVar10[0x37])) {
        iVar5 = (**(code **)(*piVar10 + 0x84))();
        if (iVar5 == 0) {
          fVar1 = (float)piVar10[0x37];
          local_18 = CONCAT44(local_18._4_4_,fVar1);
          local_10 = local_10 + fVar1 * (float)piVar10[0x38];
          local_c = (float)piVar10[0x39] * fVar1 + local_c;
          local_8 = fVar1 * (float)piVar10[0x3a] + local_8;
        }
        else {
          iVar5 = piVar10[0x41];
          if (iVar5 == 0) {
            uVar7 = FUN_00775fa0();
            iVar5 = FUN_00401f00(0x74);
            if (iVar5 == 0) {
              iVar5 = 0;
            }
            else {
              *(undefined4 *)(iVar5 + 0x68) = 0;
              *(undefined4 *)(iVar5 + 0x6c) = uVar7;
              *(undefined1 *)(iVar5 + 0x70) = 0;
              *(undefined1 *)(iVar5 + 0x71) = 0;
              FUN_00775ff0(piVar10);
            }
            FUN_00452570(piVar10,iVar5);
            piVar10[0x41] = iVar5;
            puVar9 = local_1c;
LAB_007764c5:
            (**(code **)(**(int **)(in_ECX + 0x20) + 0xcc))
                      (*(int **)(in_ECX + 0x20),*(undefined4 *)(iVar5 + 0x6c),iVar5);
          }
          else {
            cVar4 = FUN_00775ff0(piVar10);
            if (cVar4 != '\0') goto LAB_007764c5;
          }
          if (*(char *)(iVar5 + 0x71) == '\0') {
            (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))
                      (*(int **)(in_ECX + 0x20),*(undefined4 *)(iVar5 + 0x6c),1);
            *(undefined1 *)(iVar5 + 0x71) = 1;
            FUN_006aa320(&local_18);
          }
          param_1 = (undefined4 *)((int)param_1 + 1);
          *(undefined1 *)(iVar5 + 0x70) = 0;
          puVar2 = puVar9;
        }
      }
    }
  }
  puVar2 = *(undefined4 **)(in_ECX + 0x14);
  uVar3 = param_1._2_2_;
  while (param_1 = puVar2, param_1 != (undefined4 *)0x0) {
    iVar5 = *(int *)(param_1[2] + 0x104);
    puVar2 = (undefined4 *)*param_1;
    if (*(char *)(iVar5 + 0x70) != '\0') {
      (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))
                (*(int **)(in_ECX + 0x20),*(undefined4 *)(iVar5 + 0x6c),0);
      *(undefined1 *)(iVar5 + 0x71) = 0;
      FUN_007aa860(&param_1);
    }
    uVar3 = param_1._2_2_;
  }
  local_18._0_4_ = (uint)(longlong)ROUND(local_10 * 255.0);
  local_1c = (undefined4 *)(uint)local_18;
  if (0xff < (uint)local_18) {
    local_1c = (undefined4 *)0xff;
  }
  local_18._0_4_ = (uint)(longlong)ROUND(local_c * 255.0);
  uVar8 = (uint)local_18;
  if (0xff < (uint)local_18) {
    uVar8 = 0xff;
  }
  param_1 = (undefined4 *)CONCAT22(uVar3,in_FPUControlWord);
  local_18._0_4_ = (uint)(longlong)ROUND(local_8 * 255.0);
  if (0xff < (uint)local_18) {
    local_18._0_4_ = 0xff;
  }
  uVar6 = (uint)local_18 & 0xff;
  local_18 = (longlong)ROUND(local_8 * 255.0);
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))
            (0x8b,(((uint)local_1c & 0xff | 0xffffff00) << 8 | uVar8 & 0xff) << 8 | uVar6,0);
  return;
}



int FUN_00776690(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int **)(in_ECX + 4) != (int *)0x0) {
    piVar3 = *(int **)(in_ECX + 4);
    do {
      piVar1 = (int *)*piVar3;
      if (*param_1 == piVar3[2]) goto LAB_007766b2;
      piVar3 = piVar1;
    } while (piVar1 != (int *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_007766b2:
  if (piVar3 != (int *)0x0) {
    param_1 = piVar3;
    iVar2 = FUN_007aa860(&param_1);
    return iVar2;
  }
  return *param_1;
}



void FUN_007766e0(undefined4 param_1,int *param_2)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a8a4b8;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a8a508;
  in_ECX[7] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[4] = &PTR_FUN_00a8a4f8;
  in_ECX[9] = param_1;
  in_ECX[10] = 0xffffffff;
  in_ECX[8] = param_2;
  (**(code **)(*param_2 + 4))(param_2);
  in_ECX[0xf] = 0;
  _memset(in_ECX + 0x10,0,0x200);
  FUN_00776240();
  return;
}



void FUN_00776780(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  iVar1 = in_ECX[3];
  while (iVar1 != 0) {
    local_c = FUN_006a9030();
    FUN_00452600(&local_c,&local_8,&local_4);
    iVar1 = local_8;
    FUN_004524c0(local_8);
    *(undefined4 *)(iVar1 + 0x104) = 0;
    in_ECX[(*(uint *)(local_4 + 0x6c) >> 5) + 0x10] =
         in_ECX[(*(uint *)(local_4 + 0x6c) >> 5) + 0x10] &
         ~(1 << ((byte)*(uint *)(local_4 + 0x6c) & 0x1f));
    FUN_00401f20(local_4);
    iVar1 = in_ECX[3];
  }
  if (in_ECX[7] != 0) {
    do {
      piVar2 = (int *)in_ECX[5];
      iVar1 = *piVar2;
      in_ECX[5] = iVar1;
      if (iVar1 == 0) {
        in_ECX[6] = 0;
      }
      else {
        *(undefined4 *)(iVar1 + 4) = 0;
      }
      (**(code **)(in_ECX[4] + 8))(piVar2);
      in_ECX[7] = in_ECX[7] + -1;
    } while (in_ECX[7] != 0);
  }
  piVar2 = (int *)in_ECX[8];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    in_ECX[8] = 0;
  }
  in_ECX[4] = &PTR_FUN_00a8a4e8;
  FUN_00573880();
  in_ECX[4] = &PTR_LAB_00a8a4d8;
  *in_ECX = &PTR_FUN_00a8a508;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8a4b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00776880(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  int in_ECX;
  int unaff_EDI;
  uint uVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_2 + 0x18) >> 1;
  *(uint *)(in_ECX + 0x34) = bVar1 & 7;
  if (((**(int **)(param_2 + 0x20) != 0) && (*(int *)(**(int **)(param_2 + 0x20) + 8) != 0)) &&
     ((bVar1 & 7) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x007768bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x24) + 100))();
    return;
  }
  uVar2 = *(ushort *)(param_3 + 0x18) >> 4;
  uVar3 = uVar2 & 3;
  if ((*(ushort *)(param_3 + 0x18) & 8) == 0) {
    if (((uVar2 & 3) != 0) && ((uVar3 == 1 || (uVar3 != 2)))) {
                    /* WARNING: Could not recover jumptable at 0x00776a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))();
      return;
    }
    *(undefined1 *)(in_ECX + 0x31) = 0;
    if (*(int *)(in_ECX + 0x38) == 1) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x94,0,0);
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x93,0,0);
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x91,0,0);
      *(undefined4 *)(in_ECX + 0x38) = 0;
    }
    goto LAB_007769ca;
  }
  if (uVar3 != *(uint *)(in_ECX + 0x38)) {
    if ((uVar2 & 3) == 0) {
      uVar4 = 0;
LAB_0077698e:
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x94,uVar4,0);
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x93,0,0);
      uVar4 = 0;
LAB_007769b4:
      (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x91,uVar4,0);
    }
    else {
      if (uVar3 == 1) {
        uVar4 = 1;
        goto LAB_0077698e;
      }
      if (uVar3 == 2) {
        (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x94,0,0);
        (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x93,1,0);
        uVar4 = 1;
        goto LAB_007769b4;
      }
    }
    *(uint *)(in_ECX + 0x38) = uVar3;
  }
  *(undefined1 *)(in_ECX + 0x31) = 1;
LAB_007769ca:
  (**(code **)(**(int **)(in_ECX + 0x24) + 100))(0x89,1,0);
  if (((*(int *)(in_ECX + 0x2c) == *(int *)(in_ECX + 0x28)) ||
      (unaff_EDI != *(int *)(in_ECX + 0x2c))) ||
     (*(char *)(in_ECX + 0x31) != *(char *)(in_ECX + 0x30))) {
    FUN_007763a0(unaff_EDI);
    *(int *)(in_ECX + 0x2c) = unaff_EDI;
    *(undefined1 *)(in_ECX + 0x30) = *(undefined1 *)(in_ECX + 0x31);
  }
  return;
}



void FUN_00776a30(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int in_ECX;
  int local_4;
  
  iVar3 = param_1;
  iVar2 = *(int *)(param_1 + 0x104);
  param_1 = iVar2;
  if (iVar2 != 0) {
    FUN_0055e000(iVar3,&param_1);
    (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))
              (*(int **)(in_ECX + 0x20),*(undefined4 *)(iVar2 + 0x6c),0);
    *(undefined1 *)(iVar2 + 0x71) = 0;
    FUN_004524c0(iVar3);
    FUN_00776690(&stack0xfffffff8);
    *(undefined4 *)(iVar3 + 0x104) = 0;
    puVar1 = (uint *)(in_ECX + 0x40 + (*(uint *)(iVar2 + 0x6c) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)*(uint *)(iVar2 + 0x6c) & 0x1f));
    FUN_00401f20(iVar2);
    return;
  }
  cVar4 = FUN_0055e000(iVar3,&param_1);
  if (cVar4 != '\0') {
    FUN_004524c0(iVar3);
    local_4 = iVar3;
    FUN_00776690(&local_4);
    *(undefined4 *)(iVar3 + 0x104) = 0;
    puVar1 = (uint *)(in_ECX + 0x40 + (*(uint *)(param_1 + 0x6c) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)*(uint *)(param_1 + 0x6c) & 0x1f));
  }
  return;
}



void FUN_00776b10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *local_c;
  int local_8;
  int local_4;
  
  uVar4 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar5 = *(int **)(in_ECX + 8);
    do {
      if (*piVar5 != 0) {
        local_8 = (*(int **)(in_ECX + 8))[uVar4];
        goto joined_r0x00776b40;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < *(uint *)(in_ECX + 4));
  }
  local_8 = 0;
joined_r0x00776b40:
  do {
    do {
      if (local_8 == 0) {
        return;
      }
      local_c = (undefined4 *)0x0;
      FUN_00452600(&local_8,&local_4,&local_c);
      puVar1 = local_c;
    } while (local_c == (undefined4 *)0x0);
    (**(code **)(**(int **)(in_ECX + 0x20) + 0xd4))(*(int **)(in_ECX + 0x20),local_c[0x1b],0);
    iVar2 = local_4;
    *(undefined1 *)((int)puVar1 + 0x71) = 0;
    FUN_004524c0(local_4);
    puVar3 = *(undefined4 **)(in_ECX + 0x14);
    do {
      local_c = puVar3;
      if (local_c == (undefined4 *)0x0) {
        local_c = (undefined4 *)0x0;
        break;
      }
      puVar3 = (undefined4 *)*local_c;
    } while (iVar2 != local_c[2]);
    if (local_c != (undefined4 *)0x0) {
      FUN_007aa860(&local_c);
    }
    *(undefined4 *)(iVar2 + 0x104) = 0;
    FUN_00401f20(puVar1);
  } while( true );
}



void FUN_00776c00(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a508;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8a4b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00776c40(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 4);
  (**(code **)(*piVar1 + 0x1c))(param_1,param_2);
  iVar2 = (**(code **)(*piVar1 + 0x18))(param_1,param_2);
  if (iVar2 != 0) {
    if (param_2 < *(uint *)(param_1 + 0x1c)) {
      *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4) = iVar2;
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00776c90(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *_Src;
  undefined4 local_4;
  
  _Src = &local_4;
  local_4 = 0;
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1,param_2,param_3,_Src,param_4);
  if (iVar1 < 0) {
    return 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x80));
  DVar2 = GetCurrentThreadId();
  *(int *)(in_ECX + 0xfc) = *(int *)(in_ECX + 0xfc) + 1;
  *(DWORD *)(in_ECX + 0xf8) = DVar2;
  *(undefined4 **)(in_ECX + 0x48) = _Src;
  *(uint *)(in_ECX + 0x4c) = param_3;
  if (*(uint *)(in_ECX + 0x44) < param_3) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x40));
    uVar3 = FUN_00401f00(param_3);
    *(undefined4 *)(in_ECX + 0x40) = uVar3;
    *(uint *)(in_ECX + 0x44) = param_3;
  }
  if ((param_4 & 0x3000) == 0) {
    _memcpy(*(void **)(in_ECX + 0x40),_Src,param_3);
  }
  return *(undefined4 *)(in_ECX + 0x40);
}



void FUN_00776d40(void *param_1,void *param_2,int param_3,size_t param_4,int param_5)

{
  for (; param_5 != 0; param_5 = param_5 + -1) {
    _memcpy(param_1,param_2,param_4);
    param_1 = (void *)((int)param_1 + param_3);
    param_2 = (void *)((int)param_2 + param_4);
  }
  return;
}



bool FUN_00776d80(int *param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  _memcpy(*(void **)(in_ECX + 0x48),*(void **)(in_ECX + 0x40),*(size_t *)(in_ECX + 0x4c));
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  piVar1 = (int *)(in_ECX + 0xfc);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(in_ECX + 0xf8) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x80));
  iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  return -1 < iVar2;
}



void FUN_00776dd0(int param_1,int param_2,uint *param_3,int *param_4,undefined4 *param_5,
                 int *param_6,int *param_7,int *param_8,int *param_9)

{
  short sVar1;
  uint uVar2;
  
  sVar1 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (param_2 != 0) {
    sVar1 = *(short *)(param_2 + 0x20);
  }
  *param_5 = 0;
  *param_4 = *param_4 + 0xc;
  *param_6 = *param_4;
  if (sVar1 == 0) {
    *param_3 = *param_3 | 2;
  }
  else {
    *param_3 = 10;
    *param_4 = *param_4 + 0xc;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    *param_3 = *param_3 | 0x10;
    *param_7 = *param_4;
    *param_4 = *param_4 + 0xc;
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    *param_3 = *param_3 | 0x40;
    *param_8 = *param_4;
    *param_4 = *param_4 + 4;
  }
  uVar2 = *(byte *)(param_1 + 0x2c) & 0x3f;
  if ((*(byte *)(param_1 + 0x2c) & 0x3f) == 0) {
    uVar2 = 1;
  }
  else {
    if (DAT_00b28cb0 < uVar2) {
      uVar2 = DAT_00b28cb0;
    }
    if (uVar2 == 0) {
      return;
    }
  }
  *param_3 = *param_3 | uVar2 << 8;
  *param_9 = *param_4;
  *param_4 = *param_4 + uVar2 * 8;
  return;
}



int FUN_00776e90(int *param_1,int param_2,uint param_3,int param_4,int param_5)

{
  float *pfVar1;
  float *pfVar2;
  int *piVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  char cVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int in_ECX;
  uint *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  uint uVar17;
  int iStack_44;
  int iStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  uint uStack_28;
  float fStack_24;
  int iStack_20;
  undefined1 auStack_1c [4];
  int aiStack_18 [4];
  uint uStack_8;
  int iStack_4;
  
  uVar8 = (**(code **)(*param_1 + 0x50))();
  uStack_3c = (uint)uVar8;
  if (uVar8 == 0) {
    return param_4;
  }
  iStack_34 = param_1[7];
  iStack_2c = param_1[8];
  uStack_38 = *(byte *)(param_1 + 0xb) & 0x3f;
  pfVar16 = (float *)param_1[9];
  if (8 < uStack_38) {
    uStack_38 = 8;
  }
  iStack_40 = 0;
  iStack_44 = 0;
  FUN_00776dd0(param_1,0,&iStack_40,&iStack_44,&iStack_30,auStack_1c,&uStack_28,&fStack_24,
               &iStack_20);
  iVar9 = param_1[0xe];
  FUN_007780a0(iStack_40);
  if (*(int *)(iVar9 + 0x1c) != 0) {
    **(int **)(iVar9 + 0x20) = iStack_44;
  }
  bVar6 = true;
  if (param_5 == 0) {
    if (((((param_4 == 0) || (piVar3 = *(int **)(param_4 + 8), piVar3 == (int *)0x0)) ||
         ((*(ushort *)((int)param_1 + 0x2e) & 0xf000) == 0x8000)) ||
        (((**(code **)(*piVar3 + 0x34))(piVar3,aiStack_18), aiStack_18[0] != 100 ||
         (iStack_4 != iStack_40)))) || (uStack_8 < (uStack_3c & 0xffff) * iStack_44)) {
      cVar7 = FUN_00776c40(iVar9,0);
      if (cVar7 == '\0') {
        return 0;
      }
      if (*(int *)(iVar9 + 0x1c) == 0) {
        iStack_40 = 0;
      }
      else {
        iStack_40 = **(int **)(iVar9 + 0x24);
      }
      param_3 = 0xfff;
    }
    else {
      iStack_40 = param_4;
    }
    param_5 = FUN_00776c90(*(undefined4 *)(iStack_40 + 8),*(undefined4 *)(iStack_40 + 0xc),
                           *(undefined4 *)(iStack_40 + 0x14),*(undefined4 *)(iStack_40 + 0x10));
  }
  else {
    iStack_40 = param_4;
    bVar6 = false;
  }
  if (param_2 == 0) {
    if ((iStack_34 != 0) && ((param_3 & 1) != 0)) {
      FUN_00776d40(iStack_30 + param_5,iStack_34,iStack_44,0xc,uStack_3c & 0xffff);
    }
    if ((iStack_2c != 0) && ((param_3 & 2) != 0)) {
      FUN_00776d40(uStack_28 + param_5,iStack_2c,iStack_44,0xc,uStack_3c & 0xffff);
    }
  }
  else if ((iStack_34 != 0) && ((param_3 & 1) != 0)) {
    if (iStack_2c == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = uStack_28 + param_5;
    }
    FUN_0056cd20(param_1,iStack_30 + param_5,iVar9,0,0,iStack_44);
  }
  if ((pfVar16 != (float *)0x0) && ((param_3 & 4) != 0)) {
    puVar12 = (uint *)((int)fStack_24 + param_5);
    for (uVar10 = uStack_3c & 0xffff; uVar10 != 0; uVar10 = uVar10 - 1) {
      pfVar1 = pfVar16 + 3;
      fVar4 = *pfVar16;
      pfVar2 = pfVar16 + 1;
      fStack_24 = pfVar16[2] * 255.0;
      uStack_28 = (uint)ROUND(fStack_24);
      pfVar16 = pfVar16 + 4;
      *puVar12 = (((int)ROUND(*pfVar1 * 255.0) << 8 | (int)ROUND(fVar4 * 255.0)) << 8 |
                 (int)ROUND(*pfVar2 * 255.0)) << 8 | uStack_28;
      puVar12 = (uint *)((int)puVar12 + iStack_44);
    }
  }
  if (((param_3 & 8) != 0) && (uVar10 = 0, uStack_38 != 0)) {
    uVar17 = uStack_3c & 0xffff;
    puVar15 = (undefined4 *)(param_5 + iStack_20);
    do {
      puVar11 = (undefined4 *)FUN_007282f0(uVar10);
      puVar13 = puVar15;
      for (uVar14 = uVar17; uVar14 != 0; uVar14 = uVar14 - 1) {
        *puVar13 = *puVar11;
        puVar13[1] = puVar11[1];
        puVar13 = (undefined4 *)((int)puVar13 + iStack_44);
        puVar11 = puVar11 + 2;
      }
      uVar10 = uVar10 + 1;
      puVar15 = puVar15 + 2;
    } while (uVar10 < uStack_38);
  }
  if (bVar6) {
    piVar5 = *(int **)(iStack_40 + 8);
    _memcpy(*(void **)(in_ECX + 0x48),*(void **)(in_ECX + 0x40),*(size_t *)(in_ECX + 0x4c));
    *(undefined4 *)(in_ECX + 0x48) = 0;
    *(undefined4 *)(in_ECX + 0x4c) = 0;
    piVar3 = (int *)(in_ECX + 0xfc);
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      *(undefined4 *)(in_ECX + 0xf8) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x80));
    iVar9 = (**(code **)(*piVar5 + 0x30))(piVar5);
    if (iVar9 < 0) {
      return 0;
    }
  }
  return iStack_40;
}



int FUN_00777240(int param_1,ushort param_2,undefined4 *param_3,float *param_4,undefined4 *param_5,
                byte param_6,int param_7,int param_8)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  int *piVar5;
  bool bVar6;
  char cVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int local_24;
  int local_1c;
  int local_18 [4];
  uint uStack_8;
  uint uStack_4;
  
  if ((param_2 == 0) || (param_3 == (undefined4 *)0x0)) {
    return param_7;
  }
  uVar12 = 4;
  iVar10 = 0x10;
  if (param_4 != (float *)0x0) {
    local_24 = 0x10;
    uVar12 = 0x44;
    iVar10 = 0x14;
  }
  iVar11 = iVar10;
  if (param_5 != (undefined4 *)0x0) {
    uVar12 = uVar12 | 0x100;
    iVar11 = iVar10 + 8;
    local_1c = iVar10;
  }
  FUN_007780a0(uVar12);
  if (*(int *)(param_1 + 0x1c) != 0) {
    **(int **)(param_1 + 0x20) = iVar11;
  }
  bVar6 = true;
  if (param_8 == 0) {
    if ((((param_7 == 0) || (piVar5 = *(int **)(param_7 + 8), piVar5 == (int *)0x0)) ||
        ((**(code **)(*piVar5 + 0x34))(piVar5,local_18), local_18[0] != 100)) ||
       ((uStack_4 != uVar12 || (uStack_8 < (uint)param_2 * iVar11)))) {
      cVar7 = FUN_00776c40(param_1,0);
      if (cVar7 == '\0') {
        return 0;
      }
      param_7 = FUN_00761ac0(0);
    }
    param_8 = FUN_00776c90(*(undefined4 *)(param_7 + 8),*(undefined4 *)(param_7 + 0xc),
                           *(undefined4 *)(param_7 + 0x14),*(undefined4 *)(param_7 + 0x10));
    param_1 = param_7;
  }
  else {
    param_1 = param_7;
    bVar6 = false;
  }
  if (((param_6 & 1) != 0) && (param_2 != 0)) {
    puVar8 = (undefined4 *)(param_8 + 0xc);
    uVar12 = (uint)param_2;
    do {
      puVar8[-3] = *param_3;
      puVar8[-2] = param_3[1];
      puVar8[-1] = 0;
      param_3 = param_3 + 2;
      *puVar8 = 0x3f800000;
      puVar8 = (undefined4 *)((int)puVar8 + iVar11);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (((param_4 != (float *)0x0) && ((param_6 & 4) != 0)) &&
     (puVar9 = (uint *)(param_8 + local_24), param_2 != 0)) {
    uVar12 = (uint)param_2;
    do {
      pfVar1 = param_4 + 3;
      fVar4 = *param_4;
      pfVar2 = param_4 + 1;
      pfVar3 = param_4 + 2;
      param_4 = param_4 + 4;
      *puVar9 = (((int)ROUND(*pfVar1 * 255.0) << 8 | (int)ROUND(fVar4 * 255.0)) << 8 |
                (int)ROUND(*pfVar2 * 255.0)) << 8 | (int)ROUND(*pfVar3 * 255.0);
      puVar9 = (uint *)((int)puVar9 + iVar11);
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (((param_5 != (undefined4 *)0x0) && ((param_6 & 2) != 0)) &&
     (puVar8 = (undefined4 *)(local_1c + param_8), param_2 != 0)) {
    uVar12 = (uint)param_2;
    do {
      *puVar8 = *param_5;
      puVar8[1] = param_5[1];
      puVar8 = (undefined4 *)((int)puVar8 + iVar11);
      param_5 = param_5 + 2;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if ((bVar6) && (cVar7 = FUN_00776d80(*(undefined4 *)(param_1 + 8)), cVar7 == '\0')) {
    return 0;
  }
  return param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_007774c0(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  undefined4 *puVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float local_168;
  uint local_164;
  uint local_160;
  char local_159;
  int local_158;
  float local_154;
  float local_150;
  int local_14c;
  undefined4 *local_148;
  int local_144;
  uint local_140;
  uint local_13c;
  int local_138;
  int local_134;
  uint local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  uint uStack_10c;
  uint uStack_108;
  undefined1 local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_168;
  local_158 = param_5;
  local_164 = *(uint *)(param_1 + 0x1c);
  local_144 = param_6;
  local_120 = *(int *)(param_1 + 0x20);
  local_130 = *(byte *)(param_1 + 0x2c) & 0x3f;
  local_134 = *(int *)(param_1 + 0x24);
  local_128 = param_1;
  if (8 < local_130) {
    local_130 = 8;
  }
  local_148 = (undefined4 *)(uint)*(ushort *)(param_3 + 0x20);
  local_140 = (uint)*(ushort *)(param_3 + 0x1c);
  uVar11 = *(uint *)(param_3 + 0xc);
  local_160 = 0;
  local_14c = 0;
  local_13c = uVar11;
  FUN_00776dd0(param_1,param_3,&local_160,&local_14c,&local_168,&local_150,&local_124,&local_154,
               &local_12c);
  iVar13 = *(int *)(param_3 + 0x28);
  FUN_007780a0();
  if (*(int *)(iVar13 + 0x1c) != 0) {
    **(int **)(iVar13 + 0x20) = local_14c;
  }
  local_159 = '\x01';
  if (local_144 == 0) {
    if (((((local_158 == 0) || (piVar1 = *(int **)(local_158 + 8), piVar1 == (int *)0x0)) ||
         ((*(ushort *)(param_1 + 0x2e) & 0xf000) == 0x8000)) ||
        (((**(code **)(*piVar1 + 0x34))(piVar1), local_11c != 100 || (uStack_108 != local_160)))) ||
       (uStack_10c < (local_140 & 0xffff) * local_14c)) {
      cVar3 = FUN_00776c40(iVar13,0);
      if (cVar3 == '\0') {
        return 0;
      }
      if (*(int *)(iVar13 + 0x1c) == 0) {
        local_158 = 0;
      }
      else {
        local_158 = **(int **)(iVar13 + 0x24);
      }
      param_4 = 0xfff;
    }
    local_144 = FUN_00776c90(*(undefined4 *)(local_158 + 8),*(undefined4 *)(local_158 + 0xc),
                             *(undefined4 *)(local_158 + 0x14),*(undefined4 *)(local_158 + 0x10));
  }
  else {
    local_159 = '\0';
  }
  puVar4 = (undefined4 *)(local_144 + (int)local_168);
  if ((local_164 != 0) && ((param_4 & 1) != 0)) {
    uVar6 = local_140 & 0xffff;
    uVar9 = 0;
    if (uVar6 != 0) {
      do {
        uVar7 = (uint)*(ushort *)(uVar11 + uVar9 * 2);
        iVar13 = local_164 + uVar7 * 0xc;
        *puVar4 = *(undefined4 *)(local_164 + uVar7 * 0xc);
        puVar4[1] = *(undefined4 *)(iVar13 + 4);
        puVar4[2] = *(undefined4 *)(iVar13 + 8);
        puVar4 = (undefined4 *)((int)puVar4 + local_14c);
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar6);
    }
    iVar12 = *(int *)(param_3 + 8);
    iVar13 = local_144 + (int)local_150;
    local_160 = 0;
    local_164 = uVar6;
    if (uVar6 != 0) {
      uVar6 = (uint)local_148 & 0xffff;
      do {
        uVar9 = 0;
        local_168 = 1.0;
        if (3 < uVar6) {
          iVar8 = (uVar6 - 4 >> 2) + 1;
          uVar9 = iVar8 * 4;
          pfVar5 = (float *)(iVar12 + 8);
          do {
            iVar8 = iVar8 + -1;
            local_168 = (((local_168 - pfVar5[-2]) - pfVar5[-1]) - *pfVar5) - pfVar5[1];
            pfVar5 = pfVar5 + 4;
          } while (iVar8 != 0);
        }
        while (uVar9 < uVar6) {
          uVar9 = uVar9 + 1;
          local_168 = local_168 - *(float *)(iVar12 + -4 + uVar9 * 4);
        }
        local_150 = ABS(local_168);
        if (1e-05 < local_150) {
          FUN_006c5d40(local_104,0x100,"ILLEGAL WEIGHTS! Vertex %4d - Weight Sum %8.5f  (%8.5f)\n",
                       local_160,(double)(1.0 - local_168),(double)local_168);
        }
        uVar9 = 0;
        if (0 < (int)(uVar6 - 1)) {
          uVar7 = 0;
          do {
            uVar9 = uVar9 + 1;
            *(undefined4 *)(iVar13 + uVar7 * 4) = *(undefined4 *)(iVar12 + uVar7 * 4);
            uVar7 = uVar9 & 0xffff;
          } while ((int)uVar7 < (int)(uVar6 - 1));
        }
        if (((short)local_148 == 3) || ((short)local_148 == 1)) {
          iVar8 = (uVar9 & 0xffff) * 4;
          *(undefined4 *)(iVar8 + iVar13) = *(undefined4 *)(iVar8 + iVar12);
        }
        iVar13 = iVar13 + local_14c;
        iVar12 = iVar12 + uVar6 * 4;
        local_160 = local_160 + 1;
      } while (local_160 < local_164);
    }
  }
  if ((local_120 != 0) && ((param_4 & 2) != 0)) {
    puVar4 = (undefined4 *)(local_124 + local_144);
    uVar6 = 0;
    if ((local_140 & 0xffff) != 0) {
      do {
        uVar9 = (uint)*(ushort *)(uVar11 + uVar6 * 2);
        iVar13 = local_120 + uVar9 * 0xc;
        *puVar4 = *(undefined4 *)(local_120 + uVar9 * 0xc);
        puVar4[1] = *(undefined4 *)(iVar13 + 4);
        puVar4[2] = *(undefined4 *)(iVar13 + 8);
        puVar4 = (undefined4 *)((int)puVar4 + local_14c);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (local_140 & 0xffff));
    }
  }
  if ((local_134 != 0) && ((param_4 & 4) != 0)) {
    puVar10 = (uint *)((int)local_154 + local_144);
    uVar6 = 0;
    if ((short)local_140 != 0) {
      do {
        local_164 = (uint)ROUND(*(float *)((uint)*(ushort *)(uVar11 + uVar6 * 2) * 0x10 + 0xc +
                                          local_134) * 255.0);
        local_168 = (float)(int)ROUND(*(float *)((uint)*(ushort *)(uVar11 + uVar6 * 2) * 0x10 +
                                                local_134) * 255.0);
        local_160 = (uint)ROUND(*(float *)((uint)*(ushort *)(uVar11 + uVar6 * 2) * 0x10 + 4 +
                                          local_134) * 255.0);
        local_154 = *(float *)((uint)*(ushort *)(uVar11 + uVar6 * 2) * 0x10 + 8 + local_134) * 255.0
        ;
        local_148 = (undefined4 *)(int)ROUND(local_154);
        uVar6 = uVar6 + 1;
        *puVar10 = ((local_164 << 8 | (uint)local_168) << 8 | local_160) << 8 | (uint)local_148;
        puVar10 = (uint *)((int)puVar10 + local_14c);
        uVar11 = local_13c;
      } while (uVar6 < (local_140 & 0xffff));
    }
  }
  if (((param_4 & 8) != 0) && (local_13c = 0, local_130 != 0)) {
    uVar6 = local_140 & 0xffff;
    puVar4 = (undefined4 *)(local_144 + local_12c);
    do {
      uVar9 = local_13c;
      local_148 = puVar4;
      iVar13 = FUN_007282f0();
      uVar7 = 0;
      if (uVar6 != 0) {
        do {
          uVar9 = (uint)*(ushort *)(uVar11 + uVar7 * 2);
          *puVar4 = *(undefined4 *)(iVar13 + uVar9 * 8);
          puVar4[1] = *(undefined4 *)(iVar13 + uVar9 * 8 + 4);
          puVar4 = (undefined4 *)((int)puVar4 + local_14c);
          uVar7 = uVar7 + 1;
          uVar9 = local_13c;
        } while (uVar7 < uVar6);
      }
      local_13c = uVar9 + 1;
      puVar4 = local_148 + 2;
      local_148 = puVar4;
    } while (local_13c < local_130);
  }
  if (local_159 != '\0') {
    piVar2 = *(int **)(local_158 + 8);
    _memcpy(*(void **)(local_138 + 0x48),*(void **)(local_138 + 0x40),*(size_t *)(local_138 + 0x4c))
    ;
    *(undefined4 *)(local_138 + 0x48) = 0;
    *(undefined4 *)(local_138 + 0x4c) = 0;
    piVar1 = (int *)(local_138 + 0xfc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      *(undefined4 *)(local_138 + 0xf8) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_138 + 0x80));
    iVar13 = (**(code **)(*piVar2 + 0x30))();
    if (iVar13 < 0) {
      return 0;
    }
    return local_158;
  }
  return local_158;
}



void FUN_00777a40(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x3c) = *(int *)(in_ECX + 0x3c) + 1;
  return;
}



void FUN_00777a50(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  local_8 = in_ECX + 0xc;
  uVar3 = 0;
  if (*(uint *)(in_ECX + 0x10) != 0) {
    piVar4 = *(int **)(in_ECX + 0x14);
    do {
      if (*piVar4 != 0) {
        local_10 = (*(int **)(in_ECX + 0x14))[uVar3];
        goto joined_r0x00777a8b;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x10));
  }
  local_10 = 0;
joined_r0x00777a8b:
  while (local_10 != 0) {
    FUN_00452600(&local_10,local_4,&local_c);
    iVar2 = local_c;
    if (local_c != 0) {
      piVar4 = (int *)(local_c + 8);
      iVar5 = 5;
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x20) != 0) {
            (**(code **)(**(int **)(iVar1 + 0x20) + 8))(*(int **)(iVar1 + 0x20));
          }
          FUN_0077d1d0();
          FUN_00401f20(iVar1);
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_00401f20(iVar2);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_00777b10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a564;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00777b40(int *param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8a5a4;
  in_ECX[4] = 0x25;
  in_ECX[3] = &PTR_FUN_00a8a564;
  in_ECX[6] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[5] = pvVar1;
  _memset(pvVar1,0,in_ECX[4] * 4);
  in_ECX[3] = &PTR_FUN_00a8a584;
  in_ECX[8] = 0x25;
  in_ECX[7] = &PTR_FUN_00a8a564;
  in_ECX[10] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[9] = pvVar1;
  _memset(pvVar1,0,in_ECX[8] * 4);
  in_ECX[7] = &PTR_FUN_00a8a584;
  in_ECX[0xc] = 0x25;
  in_ECX[0xb] = &PTR_FUN_00a8a564;
  in_ECX[0xe] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0xd] = pvVar1;
  _memset(pvVar1,0,in_ECX[0xc] * 4);
  in_ECX[0xb] = &PTR_FUN_00a8a584;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
  in_ECX[2] = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  FUN_007c2a40();
  FUN_007c2a40();
  FUN_007c2a40();
  in_ECX[0xf] = 0;
  return;
}



void FUN_00777c90(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *local_10;
  uint local_c;
  
  *in_ECX = &PTR_FUN_00a8a5a4;
  local_c = 0;
  do {
    if (local_c == 0) {
      local_10 = in_ECX + 3;
    }
    else if (local_c == 1) {
      local_10 = in_ECX + 7;
    }
    else if (local_c == 2) {
      local_10 = in_ECX + 0xb;
    }
    uVar3 = 0;
    if (local_10[1] != 0) {
      piVar4 = (int *)local_10[2];
      do {
        if (*piVar4 != 0) {
          piVar4 = (int *)((int *)local_10[2])[uVar3];
          goto joined_r0x00777d05;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < (uint)local_10[1]);
    }
    piVar4 = (int *)0x0;
joined_r0x00777d05:
    while (piVar4 != (int *)0x0) {
      piVar7 = (int *)*piVar4;
      iVar1 = piVar4[2];
      if (piVar7 == (int *)0x0) {
        iVar6 = (**(code **)(*local_10 + 4))(piVar4[1]);
        uVar3 = iVar6 + 1;
        if (uVar3 < (uint)local_10[1]) {
          puVar5 = (undefined4 *)(local_10[2] + uVar3 * 4);
          do {
            piVar7 = (int *)*puVar5;
            if (piVar7 != (int *)0x0) goto LAB_00777d5d;
            uVar3 = uVar3 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar3 < (uint)local_10[1]);
        }
        piVar7 = (int *)0x0;
      }
LAB_00777d5d:
      piVar4 = piVar7;
      if (iVar1 != 0) {
        piVar7 = (int *)(iVar1 + 8);
        iVar6 = 5;
        do {
          iVar2 = *piVar7;
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 0x20) != 0) {
              (**(code **)(**(int **)(iVar2 + 0x20) + 8))(*(int **)(iVar2 + 0x20));
            }
            FUN_0077d1d0();
            FUN_00401f20(iVar2);
          }
          piVar7 = piVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        FUN_00401f20(iVar1);
      }
    }
    local_c = local_c + 1;
    if (2 < local_c) {
      FUN_007c2a40();
      FUN_007c2a40();
      FUN_007c2a40();
      (**(code **)(*(int *)in_ECX[2] + 8))((int *)in_ECX[2]);
      in_ECX[2] = 0;
      FUN_00401f20(in_ECX[0x10]);
      DeleteCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x20));
      in_ECX[0xb] = &PTR_FUN_00a8a584;
      FUN_007c2a40();
      in_ECX[0xb] = &PTR_FUN_00a8a564;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[0xd]);
      in_ECX[7] = &PTR_FUN_00a8a584;
      FUN_007c2a40();
      in_ECX[7] = &PTR_FUN_00a8a564;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[9]);
      in_ECX[3] = &PTR_FUN_00a8a584;
      FUN_007c2a40();
      in_ECX[3] = &PTR_FUN_00a8a564;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[5]);
      *in_ECX = &PTR_FUN_00a3fcf8;
      InterlockedDecrement((LONG *)&DAT_00b3fd64);
      return;
    }
  } while( true );
}



void FUN_00777eb0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a584;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8a564;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00777ef0(byte param_1)

{
  FUN_00777c90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00777f10(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x1c);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar2 == 0) {
        return 0;
      }
      if (*(int *)(*piVar2 + 8) == 0) {
        return 0;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar3 < uVar1);
  }
  return 1;
}



void FUN_00777f40(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x30);
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  return;
}



void FUN_00777f70(uint param_1)

{
  void *_Dst;
  void *_Dst_00;
  int in_ECX;
  uint uVar1;
  
  if (param_1 != *(uint *)(in_ECX + 0x1c)) {
    _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_1 * 4));
    _Dst_00 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                                   (uint)((ulonglong)param_1 * 4));
    if (param_1 < *(uint *)(in_ECX + 0x1c)) {
      _memcpy(_Dst,*(void **)(in_ECX + 0x24),param_1 * 4);
      _memcpy(_Dst_00,*(void **)(in_ECX + 0x20),param_1 * 4);
      if ((*(int *)(in_ECX + 4) != 0) && (uVar1 = param_1, param_1 < *(uint *)(in_ECX + 0x1c))) {
        do {
          (**(code **)(**(int **)(in_ECX + 4) + 0x1c))();
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(uint *)(in_ECX + 0x1c));
      }
    }
    else {
      _memcpy(_Dst,*(void **)(in_ECX + 0x24),*(uint *)(in_ECX + 0x1c) * 4);
      _memcpy(_Dst_00,*(void **)(in_ECX + 0x20),*(int *)(in_ECX + 0x1c) * 4);
      _memset((void *)((int)_Dst + *(int *)(in_ECX + 0x1c) * 4),0,
              (param_1 - *(int *)(in_ECX + 0x1c)) * 4);
      _memset((void *)((int)_Dst_00 + *(int *)(in_ECX + 0x1c) * 4),0,
              (param_1 - *(int *)(in_ECX + 0x1c)) * 4);
    }
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
    *(void **)(in_ECX + 0x24) = _Dst;
    *(void **)(in_ECX + 0x20) = _Dst_00;
    *(uint *)(in_ECX + 0x1c) = param_1;
  }
  return;
}



void FUN_007780a0(undefined4 param_1)

{
  int *piVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = param_1;
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  return;
}



void FUN_007780d0(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  if (param_1 != piVar1) {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    *(int **)(in_ECX + 0xc) = param_1;
    if (param_1 != (int *)0x0) {
      (**(code **)(*param_1 + 4))(param_1);
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  return;
}



void FUN_00778110(void)

{
  int *piVar1;
  int in_ECX;
  uint uVar2;
  
  if ((*(int *)(in_ECX + 4) != 0) && (uVar2 = 0, *(int *)(in_ECX + 0x1c) != 0)) {
    do {
      (**(code **)(**(int **)(in_ECX + 4) + 0x1c))();
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x1c));
  }
  piVar1 = *(int **)(in_ECX + 0x30);
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x24));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
  piVar1 = *(int **)(in_ECX + 0xc);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x007781be) */

int * FUN_00778180(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  undefined4 local_4;
  
  piVar2 = *(int **)(in_ECX + 8);
  local_4 = 0;
  iVar1 = (**(code **)(*piVar2 + 0x6c))(piVar2,param_1,param_2,param_3,param_4,&local_4);
  if (iVar1 < 0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::CreateIndexBuffer FAILED");
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



int * FUN_007781f0(void *param_1,int param_2,int *param_3,int *param_4,uint *param_5,int param_6,
                  int param_7)

{
  uint uVar1;
  size_t _Size;
  int iVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int local_14;
  void *local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  iVar3 = param_7;
  piVar4 = param_4;
  if ((*(int *)(in_ECX + 8) == 0) || (param_1 == (void *)0x0)) {
    return (int *)0x0;
  }
  uVar1 = (int)param_3 * 2;
  _Size = param_2 * 2;
  if (param_4 != (int *)0x0) {
    local_14 = 0;
    local_10 = (void *)0x0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    iVar2 = (**(code **)(*param_4 + 0x34))(param_4,&local_14);
    if ((((-1 < iVar2) && (local_14 == 0x65)) && (local_10 == (void *)0x7)) &&
       (((local_c == iVar3 && (local_8 == param_6)) && (uVar1 <= local_4)))) goto LAB_007782d9;
  }
  param_3 = (int *)0x0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))
                    (*(int **)(in_ECX + 8),uVar1,iVar3,0x65,param_6,&param_3,0);
  if (iVar3 < 0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::CreateIndexBuffer FAILED");
    param_3 = (int *)0x0;
  }
  if (param_3 == (int *)0x0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::PackBuffer> Failed to create index buffer\n");
    return (int *)0x0;
  }
  *param_5 = uVar1;
  piVar4 = param_3;
LAB_007782d9:
  if (_Size != 0) {
    param_6 = 0;
    iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,0,_Size,&param_6,0);
    if (-1 < iVar3) {
      _memcpy(param_1,local_10,_Size);
      (**(code **)(*piVar4 + 0x30))(piVar4);
      return piVar4;
    }
    FUN_0060d0a0("NiDX9IndexBufferManager::PackBuffer> Failed to lock index buffer\n");
    (**(code **)(*piVar4 + 0x30))(piVar4);
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  return piVar4;
}



int * FUN_00778350(int param_1,int *param_2,int param_3,int param_4)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  int in_ECX;
  short sVar4;
  int *piVar5;
  undefined4 *puVar6;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  short *local_4;
  
  if (*(int *)(in_ECX + 8) == 0) {
    return (int *)0x0;
  }
  if (param_1 == 0) {
    return (int *)0x0;
  }
  piVar5 = *(int **)(in_ECX + 0xc);
  psVar1 = (short *)(param_1 * 0xc);
  if (piVar5 != (int *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = (short *)0x0;
    iVar3 = (**(code **)(*piVar5 + 0x34))(piVar5,&local_14);
    if (-1 < iVar3) {
      if ((((local_14 == 0x65) && (local_10 == 7)) && (local_c == param_3)) &&
         ((local_8 == param_4 && (psVar1 <= local_4)))) {
        if ((char)param_2 == '\0') {
          return piVar5;
        }
        goto LAB_00778459;
      }
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  param_2 = (int *)0x0;
  iVar3 = (**(code **)(**(int **)(in_ECX + 8) + 0x6c))
                    (*(int **)(in_ECX + 8),psVar1,param_3,0x65,param_4,&param_2,0);
  if (iVar3 < 0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::CreateIndexBuffer FAILED");
    param_2 = (int *)0x0;
  }
  piVar5 = param_2;
  if (param_2 == (int *)0x0) {
    FUN_0060d0a0(
                "NiDX9IndexBufferManager::ResizeTempPointConnectivity> Failed to create index buffer\n"
                );
    return (int *)0x0;
  }
LAB_00778459:
  sVar4 = 0;
  puVar6 = &param_4;
  param_4 = 0;
  iVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,0,psVar1,puVar6,0);
  psVar2 = local_4;
  if (iVar3 < 0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::PackBuffer> Failed to lock index buffer\n");
    (**(code **)(*piVar5 + 0x30))(piVar5);
    (**(code **)(*piVar5 + 8))(piVar5);
    piVar5 = (int *)0x0;
  }
  else {
    for (; param_1 != 0; param_1 = param_1 + -1) {
      *psVar2 = sVar4;
      psVar2[1] = sVar4 + 1;
      psVar2[2] = sVar4 + 2;
      psVar2[3] = sVar4;
      psVar2[4] = sVar4 + 2;
      psVar2[5] = sVar4 + 3;
      sVar4 = sVar4 + 4;
      psVar2 = psVar2 + 6;
    }
    (**(code **)(*piVar5 + 0x30))(piVar5);
  }
  puVar6[4] = psVar1;
  puVar6[3] = piVar5;
  return piVar5;
}



int * FUN_00778500(int param_1,int param_2,int *param_3,char *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *piVar5;
  short *unaff_retaddr;
  undefined4 *puVar6;
  int local_14;
  int local_10;
  char *local_c;
  int local_8;
  uint local_4;
  
  iVar3 = param_5;
  if (*(int *)(in_ECX + 8) == 0) {
    return (int *)0x0;
  }
  if ((param_1 == 0) || (param_2 == 0)) {
    return (int *)0x0;
  }
  piVar5 = *(int **)(in_ECX + 0x14);
  uVar1 = param_1 * 4 + 4;
  if (piVar5 != (int *)0x0) {
    local_14 = 0;
    local_10 = 0;
    local_c = (char *)0x0;
    local_8 = 0;
    local_4 = 0;
    iVar2 = (**(code **)(*piVar5 + 0x34))(piVar5,&local_14);
    if (-1 < iVar2) {
      if ((((local_14 == 0x65) && (local_10 == 7)) && (local_c == param_4)) &&
         ((local_8 == iVar3 && (uVar1 <= local_4)))) goto LAB_007785b3;
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  piVar5 = (int *)FUN_00778180(uVar1,param_4,0x65,iVar3,0);
  if (piVar5 == (int *)0x0) {
    FUN_0060d0a0(
                "NiDX9IndexBufferManager::ResizeTempLineConnectivity> Failed to create index buffer\n"
                );
    return (int *)0x0;
  }
LAB_007785b3:
  puVar6 = &param_5;
  *param_3 = 0;
  param_5 = 0;
  iVar3 = (**(code **)(*piVar5 + 0x2c))(piVar5,0,uVar1,puVar6,0);
  if (iVar3 < 0) {
    FUN_0060d0a0("NiDX9IndexBufferManager::PackBuffer> Failed to lock index buffer\n");
    (**(code **)(*piVar5 + 0x30))(piVar5);
    (**(code **)(*piVar5 + 8))(piVar5);
    piVar5 = (int *)0x0;
  }
  else {
    uVar1 = param_1 - 1;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        if (*local_c != '\0') {
          *unaff_retaddr = (short)uVar4;
          unaff_retaddr[1] = (short)uVar4 + 1;
          unaff_retaddr = unaff_retaddr + 2;
          *param_3 = *param_3 + 2;
        }
        local_c = local_c + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    if (*local_c != '\0') {
      *unaff_retaddr = (short)uVar1;
      unaff_retaddr[1] = 0;
      *param_3 = *param_3 + 2;
    }
    (**(code **)(*piVar5 + 0x30))(piVar5);
  }
  puVar6[5] = piVar5;
  puVar6[6] = local_14;
  return piVar5;
}



void FUN_007786c0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int local_10;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar3 = 0;
  local_8 = in_ECX;
  if (*(uint *)(in_ECX + 0x20) != 0) {
    piVar4 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar4 != 0) {
        local_10 = (*(int **)(in_ECX + 0x24))[uVar3];
        goto joined_r0x007786fb;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x20));
  }
  local_10 = 0;
joined_r0x007786fb:
  while (local_10 != 0) {
    FUN_00452600(&local_10,local_4,&local_c);
    iVar2 = local_c;
    if (local_c != 0) {
      piVar4 = (int *)(local_c + 8);
      iVar5 = 5;
      do {
        iVar1 = *piVar4;
        if (iVar1 != 0) {
          if (*(int *)(iVar1 + 0x20) != 0) {
            (**(code **)(**(int **)(iVar1 + 0x20) + 8))(*(int **)(iVar1 + 0x20));
          }
          FUN_0077d1d0();
          FUN_00401f20(iVar1);
        }
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      FUN_00401f20(iVar2);
      in_ECX = local_8;
    }
  }
  FUN_007c2a40();
  piVar4 = *(int **)(in_ECX + 0xc);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)(in_ECX + 0xc) = 0;
  }
  piVar4 = *(int **)(in_ECX + 0x14);
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}



void FUN_007787b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a5f0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_007787e0(int *param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8a770;
  in_ECX[8] = 0x25;
  in_ECX[7] = &PTR_FUN_00a8a5f0;
  in_ECX[10] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[9] = pvVar1;
  _memset(pvVar1,0,in_ECX[8] * 4);
  in_ECX[7] = &PTR_FUN_00a8a750;
  in_ECX[0xc] = 0x25;
  in_ECX[0xb] = &PTR_FUN_00a8a5f0;
  in_ECX[0xe] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0xd] = pvVar1;
  _memset(pvVar1,0,in_ECX[0xc] * 4);
  in_ECX[0xb] = &PTR_FUN_00a8a750;
  in_ECX[0x10] = 0x25;
  in_ECX[0xf] = &PTR_FUN_00a8a5f0;
  in_ECX[0x12] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0x11] = pvVar1;
  _memset(pvVar1,0,in_ECX[0x10] * 4);
  in_ECX[0xf] = &PTR_FUN_00a8a750;
  in_ECX[2] = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  FUN_007c2a40();
  FUN_007c2a40();
  FUN_007c2a40();
  return;
}



void FUN_00778910(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *local_10;
  uint local_c;
  
  *in_ECX = &PTR_FUN_00a8a770;
  local_c = 0;
  do {
    if (local_c == 0) {
      local_10 = in_ECX + 7;
    }
    else if (local_c == 1) {
      local_10 = in_ECX + 0xb;
    }
    else if (local_c == 2) {
      local_10 = in_ECX + 0xf;
    }
    uVar3 = 0;
    if (local_10[1] != 0) {
      piVar4 = (int *)local_10[2];
      do {
        if (*piVar4 != 0) {
          piVar4 = (int *)((int *)local_10[2])[uVar3];
          goto joined_r0x00778985;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < (uint)local_10[1]);
    }
    piVar4 = (int *)0x0;
joined_r0x00778985:
    while (piVar4 != (int *)0x0) {
      piVar7 = (int *)*piVar4;
      iVar1 = piVar4[2];
      if (piVar7 == (int *)0x0) {
        iVar6 = (**(code **)(*local_10 + 4))(piVar4[1]);
        uVar3 = iVar6 + 1;
        if (uVar3 < (uint)local_10[1]) {
          puVar5 = (undefined4 *)(local_10[2] + uVar3 * 4);
          do {
            piVar7 = (int *)*puVar5;
            if (piVar7 != (int *)0x0) goto LAB_007789dd;
            uVar3 = uVar3 + 1;
            puVar5 = puVar5 + 1;
          } while (uVar3 < (uint)local_10[1]);
        }
        piVar7 = (int *)0x0;
      }
LAB_007789dd:
      piVar4 = piVar7;
      if (iVar1 != 0) {
        piVar7 = (int *)(iVar1 + 8);
        iVar6 = 5;
        do {
          iVar2 = *piVar7;
          if (iVar2 != 0) {
            if (*(int *)(iVar2 + 0x20) != 0) {
              (**(code **)(**(int **)(iVar2 + 0x20) + 8))(*(int **)(iVar2 + 0x20));
            }
            FUN_0077d1d0();
            FUN_00401f20(iVar2);
          }
          piVar7 = piVar7 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        FUN_00401f20(iVar1);
      }
    }
    local_c = local_c + 1;
    if (2 < local_c) {
      FUN_007c2a40();
      FUN_007c2a40();
      FUN_007c2a40();
      (**(code **)(*(int *)in_ECX[2] + 0x1a0))((int *)in_ECX[2],0);
      piVar4 = (int *)in_ECX[3];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar4 = (int *)in_ECX[5];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      piVar4 = (int *)in_ECX[2];
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        in_ECX[2] = 0;
      }
      in_ECX[0xf] = &PTR_FUN_00a8a750;
      FUN_007c2a40();
      in_ECX[0xf] = &PTR_FUN_00a8a5f0;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[0x11]);
      in_ECX[0xb] = &PTR_FUN_00a8a750;
      FUN_007c2a40();
      in_ECX[0xb] = &PTR_FUN_00a8a5f0;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[0xd]);
      in_ECX[7] = &PTR_FUN_00a8a750;
      FUN_007c2a40();
      in_ECX[7] = &PTR_FUN_00a8a5f0;
      FUN_007c2a40();
      FUN_00401f20(in_ECX[9]);
      *in_ECX = &PTR_FUN_00a3fcf8;
      InterlockedDecrement((LONG *)&DAT_00b3fd64);
      return;
    }
  } while( true );
}



void FUN_00778b50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a750;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8a5f0;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00778b90(byte param_1)

{
  FUN_00778910();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



char FUN_00778c20(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  puVar1 = *(undefined4 **)(*(int *)(iVar3 + 0x28) + 4);
  cVar2 = '\0';
  if (iVar4 != 0) {
    do {
      if (*(int *)(iVar3 + 0x28) != 0) {
        (**(code **)(**(int **)(*(int *)(iVar3 + 0x28) + 4) + 0x10))(iVar3);
        cVar2 = '\x01';
      }
      iVar3 = iVar3 + 0x2c;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if ((cVar2 != '\0') && (puVar1[1] == 0)) {
      (**(code **)*puVar1)();
    }
  }
  return cVar2;
}



void FUN_00778c80(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x18) = param_1;
  return;
}



void FUN_00778c90(void)

{
  uint uVar1;
  int *piVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  uVar1 = in_ECX[3];
  uVar3 = 0;
  *in_ECX = &PTR_FUN_00a8a778;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(in_ECX[1] + uVar3 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x24))(1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  FUN_0077d450();
  piVar2 = (int *)in_ECX[4];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  FUN_00401f20(in_ECX[1]);
  FUN_00725d80();
  return;
}



undefined4 * FUN_00778cf0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00725d70();
    *puVar1 = &PTR_FUN_00a8a778;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    *(undefined1 *)(puVar1 + 6) = 0;
  }
  puVar1[4] = param_1;
  (**(code **)(*param_1 + 4))(param_1);
  puVar1[5] = param_1;
  return puVar1;
}



undefined4 FUN_00778db0(int *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_3 != 0) && (param_4 != '\0')) && (iVar1 = *(int *)(param_3 + 0xc), iVar1 != 0)) {
    iVar2 = *(int *)(iVar1 + 0xc);
    if (*(int *)(iVar2 + 0x28) != 0) {
      return 0;
    }
    for (iVar1 = *(int *)(iVar1 + 8); iVar1 != 0; iVar1 = iVar1 + -1) {
      (**(code **)(*param_1 + 8))(param_2,param_3,iVar2);
      iVar2 = iVar2 + 0x2c;
    }
    return 1;
  }
  if (*(int *)(param_2 + 0x38) != 0) {
    return 0;
  }
  (**(code **)(*param_1 + 8))(param_2,param_3,0);
  return 1;
}



void FUN_00778e80(byte param_1)

{
  FUN_00778c90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_00778ea0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  if (param_1 == 0) {
    iVar2 = FUN_0077dd20();
  }
  else if (param_1 == 1) {
    iVar2 = FUN_0077de00();
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    iVar2 = FUN_0077ea10();
  }
  if (iVar2 != 0) {
    uVar1 = *(uint *)(in_ECX + 0xc);
    uVar3 = 0;
    if (uVar1 != 0) {
      piVar5 = *(int **)(in_ECX + 4);
      do {
        if (*piVar5 == iVar2) {
          if (-1 < (int)uVar3) {
            return iVar2;
          }
          break;
        }
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar3 < uVar1);
    }
    uVar3 = *(uint *)(in_ECX + 8);
    if (uVar1 == uVar3) {
      if (uVar3 == 0) {
        iVar4 = 1;
      }
      else {
        iVar4 = uVar3 * 2;
      }
      FUN_006e8ca0(iVar4);
    }
    *(int *)(*(int *)(in_ECX + 4) + *(int *)(in_ECX + 0xc) * 4) = iVar2;
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
    piVar5 = *(int **)(in_ECX + 0x10);
    *(int **)(iVar2 + 8) = piVar5;
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  return iVar2;
}



undefined4 FUN_00778f60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x8ac);
  FUN_0075fb30(param_1);
  FUN_00772060(param_1);
  DAT_00b42834 = piVar1;
  FUN_0077ebb0(param_1);
  FUN_0077f7e0(param_1);
  FUN_00772940(param_1);
  (**(code **)(*piVar1 + 0x104))();
  piVar1 = (int *)FUN_0077c0f0();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x6c))(param_1);
  }
  if (DAT_00b428a8 == 0) {
    iVar2 = FUN_00401f00(0x20);
    if (iVar2 == 0) {
      DAT_00b428a8 = 0;
      FUN_0060d0a0("Failed to create shader program factory!");
      return 0;
    }
    DAT_00b428a8 = FUN_0077f500();
    if (DAT_00b428a8 == 0) {
      FUN_0060d0a0("Failed to create shader program factory!");
    }
  }
  return 0;
}



undefined4 FUN_00779010(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0077c0f0();
  if (piVar1 != (int *)0x0) {
    FUN_00738440();
    (**(code **)(*piVar1 + 0x6c))(0);
  }
  FUN_0075fb30(0);
  FUN_00772060(0);
  DAT_00b42834 = 0;
  FUN_0077eaf0();
  FUN_0077ebb0(0);
  FUN_0077f7e0(0);
  FUN_00772940(0);
  return 0;
}



void FUN_00779070(void)

{
  undefined4 *in_ECX;
  
  FUN_007385b0();
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  *in_ECX = &PTR_FUN_00a8a7cc;
  return;
}



undefined4 FUN_007790e0(void)

{
  return 0;
}



void FUN_007790f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(int *)(in_ECX + 0x14) = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    piVar2 = *(int **)(in_ECX + 0x10);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(int **)(in_ECX + 0x10) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    *(undefined4 *)(in_ECX + 0x18) = *(undefined4 *)(*(int *)(in_ECX + 0x14) + 0x8ac);
    return;
  }
  piVar1 = *(int **)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 0x18) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}



void FUN_00779160(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[4];
  *in_ECX = &PTR_FUN_00a8a7cc;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  in_ECX[4] = 0;
  FUN_00738600();
  return;
}



void FUN_007791a0(undefined4 param_1)

{
  int in_ECX;
  
  FUN_007790f0(param_1);
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  return;
}



void FUN_007791c0(byte param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  piVar1 = (int *)in_ECX[4];
  *in_ECX = &PTR_FUN_00a8a7cc;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  in_ECX[4] = 0;
  FUN_00738600();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int FUN_00779210(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  *(undefined4 *)(in_ECX + 0x58) = uVar2;
  *(undefined4 *)(in_ECX + 0x54) = uVar2;
  *(undefined4 *)(in_ECX + 0x5c) = 1;
  iStack_c = piVar1[6];
  iStack_8 = piVar1[7];
  iStack_4 = piVar1[8];
  iVar3 = FUN_00773960(&iStack_c,*(int *)(in_ECX + 8) + 0x7fc);
  iVar4 = *(int *)(iVar3 + 0xc);
  if ((char)piVar1[0xd] != '\0') {
    iVar4 = piVar1[0xe];
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x280);
  uVar2 = 0;
  param_1 = (int *)0x0;
  iVar4 = (**(code **)(*piVar1 + 100))(piVar1,*(undefined4 *)(in_ECX + 0x54),1,1,iVar4,0,&param_1);
  if (iVar4 < 0) {
    uVar2 = FUN_007736f0(iVar4);
    FUN_0060d0a0("NiDX9RenderedCubeMapData::CreateSurf> Failed CreateImageSurface - %s",uVar2);
    *(undefined4 *)(in_ECX + 0x50) = 0;
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x50) = uVar2;
  return iVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_007792e0(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_8;
  int local_4;
  
  piVar1 = (int *)FUN_00401f00(100);
  uVar6 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    FUN_007616a0(param_1,param_2);
    *piVar1 = (int)&PTR_FUN_00a8a868;
    piVar1[0x18] = 0;
  }
  piVar1[0x18] = 0;
  local_4 = FUN_00779210(param_1);
  if (local_4 == 0) {
    (**(code **)*piVar1)(1);
    return (int *)0x0;
  }
  iVar5 = 0;
  *(int **)(piVar1[1] + 0x24) = piVar1;
  puVar4 = (undefined4 *)(param_1 + 0x44);
  do {
    (**(code **)(*piVar1 + 0x14))();
    local_8 = *puVar4;
    uVar2 = (**(code **)(*piVar1 + 0x14))(uVar6,iVar5,*(undefined4 *)(param_2 + 0x280),&local_8);
    iVar3 = FUN_0076d9b0(uVar2);
    if (iVar3 == 0) {
      FUN_0060d0a0("NiDX9RenderedCubeMapData::Create> NiDX9TextureBufferData::CreateCubeFace - %s",
                   &DAT_00a2f7ec);
      (**(code **)*piVar1)(1);
      return (int *)0x0;
    }
    if (iVar5 == 0) {
      iVar5 = iVar3;
    }
    uVar6 = uVar6 + 1;
    puVar4 = puVar4 + 1;
  } while (uVar6 < 6);
  iVar5 = (**(code **)(*piVar1 + 8))();
  iVar3 = (**(code **)(*piVar1 + 4))();
  iVar5 = (uint)(*(byte *)(local_4 + 1) >> 3) * iVar5 * iVar3;
  uVar6 = iVar5 * 6;
  _DAT_00b42860 = _DAT_00b42860 + uVar6;
  piVar1[0x18] = piVar1[0x18] + uVar6;
  iVar3 = 0;
  if ((uVar6 & 0xfffff000) != uVar6) {
    iVar3 = (uVar6 & 0xfffff000) + iVar5 * -6 + 0x1000;
  }
  _DAT_00b42864 = _DAT_00b42864 + iVar3;
  return piVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00779420(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int iVar2;
  byte unaff_retaddr;
  
  *in_ECX = &PTR_FUN_00a8a868;
  _DAT_00b42860 = _DAT_00b42860 - in_ECX[0x18];
  uVar1 = in_ECX[0x18];
  iVar2 = 0;
  if ((uVar1 & 0xfffff000) != uVar1) {
    iVar2 = ((uVar1 & 0xfffff000) - uVar1) + 0x1000;
  }
  _DAT_00b42864 = _DAT_00b42864 - iVar2;
  (**(code **)(*(int *)in_ECX[2] + 0x17c))(in_ECX[1]);
  FUN_007616e0();
  if ((unaff_retaddr & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00779480(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x60);
}



undefined4 * FUN_007794b0(int *param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iStack_20;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  piVar1 = param_1;
  if (param_1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  iStack_20 = 0x7794d4;
  uVar2 = (**(code **)(*param_1 + 0x4c))();
  *(undefined4 *)(in_ECX + 0x54) = uVar2;
  iStack_20 = 0x7794e0;
  uVar2 = (**(code **)(*piVar1 + 0x50))();
  *(undefined4 *)(in_ECX + 0x58) = uVar2;
  *(undefined4 *)(in_ECX + 0x5c) = 1;
  iStack_c = piVar1[6];
  iStack_8 = piVar1[7];
  iStack_4 = piVar1[8];
  iStack_20 = *(int *)(in_ECX + 8) + 0x6f4;
  puVar3 = (undefined4 *)FUN_00773960(&iStack_c);
  puVar5 = puVar3;
  puVar6 = (undefined4 *)(in_ECX + 0xc);
  for (iVar4 = 0x11; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  uVar2 = puVar3[3];
  piVar1 = *(int **)(*(int *)(in_ECX + 8) + 0x280);
  param_1 = (int *)0x0;
  iStack_20 = 0;
  if (param_2 == '\0') {
    iVar4 = (**(code **)(*piVar1 + 0x5c))
                      (piVar1,*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),1,0,
                       uVar2,0,&param_1);
    if (-1 < iVar4) {
      uVar7 = 0;
      *(int *)(in_ECX + 0x50) = iStack_20;
      iStack_20 = 0;
      iVar4 = (**(code **)(*piVar1 + 0x5c))
                        (piVar1,*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),1,0,
                         uVar2,2,&iStack_20);
      if (iVar4 < 0) {
        uVar2 = FUN_007736f0(iVar4);
        FUN_0060d0a0("NiDX9DynamicTextureData::CreateSurf> Failed CreateImageSurface - %s",uVar2);
        *(undefined4 *)(in_ECX + 0x60) = 0;
        return (undefined4 *)0x0;
      }
      *(undefined4 *)(in_ECX + 0x60) = uVar7;
      return puVar3;
    }
  }
  else {
    iVar4 = (**(code **)(*piVar1 + 0x5c))
                      (piVar1,*(undefined4 *)(in_ECX + 0x54),*(undefined4 *)(in_ECX + 0x58),1,0x200,
                       uVar2,0,&param_1);
    if (-1 < iVar4) {
      *(int *)(in_ECX + 0x50) = iStack_20;
      return puVar3;
    }
  }
  uVar2 = FUN_007736f0(iVar4);
  FUN_0060d0a0("NiDX9DynamicTextureData::CreateSurf> Failed CreateImageSurface - %s",uVar2);
  *(undefined4 *)(in_ECX + 0x50) = 0;
  return (undefined4 *)0x0;
}



undefined4 * FUN_00779630(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00b3f928;
  puVar1 = (undefined4 *)FUN_00401f00(0x68);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_007738e0(param_1,iVar2);
    *puVar1 = &PTR_FUN_00a8a92c;
    puVar1[0x18] = 0;
    *(undefined1 *)(puVar1 + 0x19) = 0;
  }
  iVar2 = FUN_007794b0(param_1,*(undefined1 *)(iVar2 + 0x6e9));
  if (iVar2 == 0) {
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    return (undefined4 *)0x0;
  }
  *(undefined4 **)(puVar1[1] + 0x24) = puVar1;
  return puVar1;
}



void FUN_007796b0(void)

{
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  *in_ECX = &PTR_FUN_00a8a92c;
  (**(code **)(*(int *)in_ECX[2] + 0x184))(in_ECX[1]);
  FUN_00773920();
  if ((unaff_retaddr & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_007796f0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  FUN_007791a0(param_1);
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  return 1;
}



undefined4
FUN_00779710(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  
  if (param_3 != 0) {
    if (*(int *)(in_ECX + 0x34) == 0) {
      FUN_007655f0(param_2,param_7,0,4,0);
    }
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x30))(*(undefined2 *)(param_3 + 0x24));
    FUN_00765560(param_2,param_3,param_7);
    return 0;
  }
  if (*(int *)(in_ECX + 0x34) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x18) + 0x30))(0);
    FUN_00765480(param_6,1);
  }
  return 0;
}



undefined4 FUN_00779790(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_00772720();
  }
  return 0;
}



void FUN_007797b0(void)

{
  FUN_0075ffd0();
  FUN_007723c0();
  return;
}



void FUN_007797c0(void)

{
  FUN_007603d0();
  FUN_00772500();
  return;
}



void FUN_007797d0(float *param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  FUN_00772ff0(0xb,0x20000,param_4);
  *(undefined1 *)(param_3 + 0x5a) = 1;
  FUN_00772ff0(0x18,2,param_4);
  *(float *)(param_3 + 0x18) =
       *(float *)(param_5 + 0xa08) * param_1[2] +
       *(float *)(param_5 + 0xa00) * *param_1 + param_1[1] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x28) =
       param_1[2] * *(float *)(param_5 + 0xa18) +
       param_1[1] * *(float *)(param_5 + 0xa14) + *param_1 * *(float *)(param_5 + 0xa10);
  *(float *)(param_3 + 0x38) =
       param_1[2] * *(float *)(param_5 + 0xa28) +
       param_1[1] * *(float *)(param_5 + 0xa24) + *param_1 * *(float *)(param_5 + 0xa20);
  *(float *)(param_3 + 0x1c) =
       *(float *)(param_5 + 0xa08) * param_1[5] +
       *(float *)(param_5 + 0xa00) * param_1[3] + param_1[4] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x2c) =
       *(float *)(param_5 + 0xa18) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa10) + param_1[4] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x3c) =
       *(float *)(param_5 + 0xa28) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa20) + param_1[4] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x20) =
       param_1[8] * *(float *)(param_5 + 0xa08) +
       param_1[7] * *(float *)(param_5 + 0xa04) + *(float *)(param_5 + 0xa00) * param_1[6];
  *(float *)(param_3 + 0x30) =
       param_1[8] * *(float *)(param_5 + 0xa18) +
       param_1[6] * *(float *)(param_5 + 0xa10) + *(float *)(param_5 + 0xa14) * param_1[7];
  *(float *)(param_3 + 0x40) =
       param_1[8] * *(float *)(param_5 + 0xa28) +
       param_1[6] * *(float *)(param_5 + 0xa20) + *(float *)(param_5 + 0xa24) * param_1[7];
  *(float *)(param_3 + 0x48) =
       param_1[2] * *(float *)(param_5 + 0xa38) +
       param_1[1] * *(float *)(param_5 + 0xa34) + *param_1 * *(float *)(param_5 + 0xa30) + *param_2;
  *(float *)(param_3 + 0x4c) =
       param_1[5] * *(float *)(param_5 + 0xa38) +
       *(float *)(param_5 + 0xa30) * param_1[3] + param_1[4] * *(float *)(param_5 + 0xa34) +
       param_2[1];
  *(float *)(param_3 + 0x50) =
       param_1[8] * *(float *)(param_5 + 0xa38) +
       param_1[7] * *(float *)(param_5 + 0xa34) + *(float *)(param_5 + 0xa30) * param_1[6] +
       param_2[2];
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  return;
}



void FUN_007799c0(float *param_1,float *param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  FUN_00772ff0(0xb,0x20000,param_4);
  iVar1 = DAT_00b4215c;
  if ((DAT_00b4215c == 0) || (DAT_00b4215c == 0x100)) {
    *(undefined1 *)(param_3 + 0x5a) = 0;
  }
  else {
    *(undefined1 *)(param_3 + 0x5a) = 1;
  }
  FUN_00772ff0(0x18,iVar1,param_4);
  *(float *)(param_3 + 0x18) =
       *(float *)(param_5 + 0xa08) * param_1[2] +
       *(float *)(param_5 + 0xa04) * param_1[1] + *(float *)(param_5 + 0xa00) * *param_1;
  *(float *)(param_3 + 0x28) =
       param_1[2] * *(float *)(param_5 + 0xa18) +
       *param_1 * *(float *)(param_5 + 0xa10) + param_1[1] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x38) =
       param_1[2] * *(float *)(param_5 + 0xa28) +
       *param_1 * *(float *)(param_5 + 0xa20) + param_1[1] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x1c) =
       param_1[5] * *(float *)(param_5 + 0xa08) +
       *(float *)(param_5 + 0xa04) * param_1[4] + *(float *)(param_5 + 0xa00) * param_1[3];
  *(float *)(param_3 + 0x2c) =
       param_1[5] * *(float *)(param_5 + 0xa18) +
       param_1[3] * *(float *)(param_5 + 0xa10) + param_1[4] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x3c) =
       param_1[5] * *(float *)(param_5 + 0xa28) +
       param_1[3] * *(float *)(param_5 + 0xa20) + param_1[4] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x20) =
       param_1[8] * *(float *)(param_5 + 0xa08) +
       *(float *)(param_5 + 0xa04) * param_1[7] + *(float *)(param_5 + 0xa00) * param_1[6];
  *(float *)(param_3 + 0x30) =
       param_1[8] * *(float *)(param_5 + 0xa18) +
       *(float *)(param_5 + 0xa14) * param_1[7] + param_1[6] * *(float *)(param_5 + 0xa10);
  *(float *)(param_3 + 0x40) =
       param_1[8] * *(float *)(param_5 + 0xa28) +
       *(float *)(param_5 + 0xa24) * param_1[7] + param_1[6] * *(float *)(param_5 + 0xa20);
  *(float *)(param_3 + 0x48) =
       *(float *)(param_5 + 0xa38) * param_1[2] +
       *(float *)(param_5 + 0xa34) * param_1[1] + *param_1 * *(float *)(param_5 + 0xa30) + *param_2;
  *(float *)(param_3 + 0x4c) =
       param_1[5] * *(float *)(param_5 + 0xa38) +
       *(float *)(param_5 + 0xa34) * param_1[4] + param_1[3] * *(float *)(param_5 + 0xa30) +
       param_2[1];
  *(float *)(param_3 + 0x50) =
       *(float *)(param_5 + 0xa38) * param_1[8] +
       param_1[6] * *(float *)(param_5 + 0xa30) + *(float *)(param_5 + 0xa34) * param_1[7] +
       param_2[2];
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  return;
}



void FUN_00779bc0(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  FUN_00772ff0(0xb,0x30000,param_4);
  *(undefined1 *)(param_3 + 0x5a) = 1;
  FUN_00772ff0(0x18,2,param_4);
  *(float *)(param_3 + 0x18) =
       *(float *)(param_5 + 0xa08) * param_1[2] +
       *(float *)(param_5 + 0xa00) * *param_1 + param_1[1] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x28) =
       param_1[2] * *(float *)(param_5 + 0xa18) +
       param_1[1] * *(float *)(param_5 + 0xa14) + *param_1 * *(float *)(param_5 + 0xa10);
  *(float *)(param_3 + 0x38) =
       param_1[2] * *(float *)(param_5 + 0xa28) +
       param_1[1] * *(float *)(param_5 + 0xa24) + *param_1 * *(float *)(param_5 + 0xa20);
  *(float *)(param_3 + 0x1c) =
       *(float *)(param_5 + 0xa08) * param_1[5] +
       *(float *)(param_5 + 0xa00) * param_1[3] + param_1[4] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x2c) =
       *(float *)(param_5 + 0xa18) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa10) + param_1[4] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x3c) =
       *(float *)(param_5 + 0xa28) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa20) + param_1[4] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x20) =
       param_1[8] * *(float *)(param_5 + 0xa08) +
       param_1[7] * *(float *)(param_5 + 0xa04) + *(float *)(param_5 + 0xa00) * param_1[6];
  *(float *)(param_3 + 0x30) =
       param_1[8] * *(float *)(param_5 + 0xa18) +
       param_1[6] * *(float *)(param_5 + 0xa10) + *(float *)(param_5 + 0xa14) * param_1[7];
  *(float *)(param_3 + 0x40) =
       param_1[8] * *(float *)(param_5 + 0xa28) +
       param_1[6] * *(float *)(param_5 + 0xa20) + *(float *)(param_5 + 0xa24) * param_1[7];
  *(undefined4 *)(param_3 + 0x48) = *param_2;
  *(undefined4 *)(param_3 + 0x4c) = param_2[1];
  *(undefined4 *)(param_3 + 0x50) = param_2[2];
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  return;
}



void FUN_00779d50(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  FUN_00772ff0(0xb,0x30000,param_4);
  *(undefined1 *)(param_3 + 0x5a) = 1;
  FUN_00772ff0(0x18,3,param_4);
  *(float *)(param_3 + 0x18) =
       *(float *)(param_5 + 0xa08) * param_1[2] +
       *(float *)(param_5 + 0xa00) * *param_1 + param_1[1] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x28) =
       param_1[2] * *(float *)(param_5 + 0xa18) +
       param_1[1] * *(float *)(param_5 + 0xa14) + *param_1 * *(float *)(param_5 + 0xa10);
  *(float *)(param_3 + 0x38) =
       param_1[2] * *(float *)(param_5 + 0xa28) +
       param_1[1] * *(float *)(param_5 + 0xa24) + *param_1 * *(float *)(param_5 + 0xa20);
  *(float *)(param_3 + 0x1c) =
       *(float *)(param_5 + 0xa08) * param_1[5] +
       *(float *)(param_5 + 0xa00) * param_1[3] + param_1[4] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x2c) =
       *(float *)(param_5 + 0xa18) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa10) + param_1[4] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x3c) =
       *(float *)(param_5 + 0xa28) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa20) + param_1[4] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x20) =
       param_1[8] * *(float *)(param_5 + 0xa08) +
       param_1[7] * *(float *)(param_5 + 0xa04) + *(float *)(param_5 + 0xa00) * param_1[6];
  *(float *)(param_3 + 0x30) =
       param_1[8] * *(float *)(param_5 + 0xa18) +
       param_1[6] * *(float *)(param_5 + 0xa10) + *(float *)(param_5 + 0xa14) * param_1[7];
  *(float *)(param_3 + 0x40) =
       param_1[8] * *(float *)(param_5 + 0xa28) +
       param_1[6] * *(float *)(param_5 + 0xa20) + *(float *)(param_5 + 0xa24) * param_1[7];
  *(undefined4 *)(param_3 + 0x48) = *param_2;
  *(undefined4 *)(param_3 + 0x4c) = param_2[1];
  *(undefined4 *)(param_3 + 0x50) = param_2[2];
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  return;
}



void FUN_00779ee0(float *param_1,undefined4 *param_2,int param_3,undefined4 param_4,int param_5)

{
  FUN_00772ff0(0xb,0x10000,param_4);
  *(undefined1 *)(param_3 + 0x5a) = 1;
  FUN_00772ff0(0x18,3,param_4);
  *(float *)(param_3 + 0x18) =
       *(float *)(param_5 + 0xa08) * param_1[2] +
       *(float *)(param_5 + 0xa00) * *param_1 + param_1[1] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x28) =
       param_1[2] * *(float *)(param_5 + 0xa18) +
       param_1[1] * *(float *)(param_5 + 0xa14) + *param_1 * *(float *)(param_5 + 0xa10);
  *(float *)(param_3 + 0x38) =
       param_1[2] * *(float *)(param_5 + 0xa28) +
       param_1[1] * *(float *)(param_5 + 0xa24) + *param_1 * *(float *)(param_5 + 0xa20);
  *(float *)(param_3 + 0x1c) =
       *(float *)(param_5 + 0xa08) * param_1[5] +
       *(float *)(param_5 + 0xa00) * param_1[3] + param_1[4] * *(float *)(param_5 + 0xa04);
  *(float *)(param_3 + 0x2c) =
       *(float *)(param_5 + 0xa18) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa10) + param_1[4] * *(float *)(param_5 + 0xa14);
  *(float *)(param_3 + 0x3c) =
       *(float *)(param_5 + 0xa28) * param_1[5] +
       param_1[3] * *(float *)(param_5 + 0xa20) + param_1[4] * *(float *)(param_5 + 0xa24);
  *(float *)(param_3 + 0x20) =
       param_1[8] * *(float *)(param_5 + 0xa08) +
       param_1[7] * *(float *)(param_5 + 0xa04) + *(float *)(param_5 + 0xa00) * param_1[6];
  *(float *)(param_3 + 0x30) =
       param_1[8] * *(float *)(param_5 + 0xa18) +
       param_1[6] * *(float *)(param_5 + 0xa10) + *(float *)(param_5 + 0xa14) * param_1[7];
  *(float *)(param_3 + 0x40) =
       param_1[8] * *(float *)(param_5 + 0xa28) +
       param_1[6] * *(float *)(param_5 + 0xa20) + *(float *)(param_5 + 0xa24) * param_1[7];
  *(undefined4 *)(param_3 + 0x48) = *param_2;
  *(undefined4 *)(param_3 + 0x4c) = param_2[1];
  *(undefined4 *)(param_3 + 0x50) = param_2[2];
  *(undefined4 *)(param_3 + 0x54) = 0;
  *(undefined4 *)(param_3 + 0x44) = 0;
  *(undefined4 *)(param_3 + 0x34) = 0;
  *(undefined4 *)(param_3 + 0x24) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077a070(void)

{
  _DAT_00b42870 = FUN_007797d0;
  _DAT_00b42874 = FUN_007799c0;
  _DAT_00b42878 = FUN_00779bc0;
  _DAT_00b4287c = FUN_00779d50;
  _DAT_00b42880 = FUN_00779ee0;
  return;
}



undefined4 FUN_0077a0b0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x34) = 0;
  iVar2 = *(int *)(in_ECX + 0x3c);
  piVar3 = *(int **)(in_ECX + 0x44);
  if (iVar2 != *piVar3) {
    if (iVar2 != 0) {
      piVar1 = (int *)(iVar2 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar2 = *piVar3;
    *(int *)(in_ECX + 0x3c) = iVar2;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x60) = *(int *)(iVar2 + 0x60) + 1;
    }
  }
  return *(undefined4 *)(in_ECX + 0x38);
}



int FUN_0077a0f0(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x3c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x3c) + 0xc))(*(undefined4 *)(in_ECX + 0x34));
  }
  *(int *)(in_ECX + 0x34) = *(int *)(in_ECX + 0x34) + 1;
  if (*(int *)(in_ECX + 0x34) == *(int *)(in_ECX + 0x38)) {
    return 0;
  }
  piVar2 = (int *)(*(int *)(in_ECX + 0x44) + *(int *)(in_ECX + 0x34) * 4);
  iVar3 = *(int *)(in_ECX + 0x3c);
  if (iVar3 != *piVar2) {
    if (iVar3 != 0) {
      piVar1 = (int *)(iVar3 + 0x60);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_007604d0();
      }
    }
    iVar3 = *piVar2;
    *(int *)(in_ECX + 0x3c) = iVar3;
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x60) = *(int *)(iVar3 + 0x60) + 1;
    }
  }
  return *(int *)(in_ECX + 0x38) - *(int *)(in_ECX + 0x34);
}



undefined4 FUN_0077a150(void)

{
  int in_ECX;
  int in_stack_00000010;
  undefined4 in_stack_00000014;
  
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    return 0xffffffff;
  }
  if (*(char *)(in_ECX + 0x20) != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x18) + 4))(in_stack_00000010);
  }
  if ((*(char *)(in_ECX + 0x21) != '\0') && (*(int *)(*(int *)(in_ECX + 0x14) + 0x8bc) != 0)) {
    FUN_00776880(in_stack_00000014,*(undefined4 *)(in_stack_00000010 + 0x20),
                 *(undefined4 *)(in_stack_00000010 + 0x24));
  }
  if (*(int *)(in_ECX + 0x28) != 0) {
    FUN_007726c0();
  }
  return 0;
}



void FUN_0077a1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x3c) + 8))
            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,0);
  return;
}



undefined4
FUN_0077a1f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    iVar1 = FUN_006ff9c0(PTR_s___NDL_SCMData_00b29f84);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x14) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
    }
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x34);
  uVar4 = param_7;
  uVar5 = param_8;
  uVar2 = (**(code **)(**(int **)(in_ECX + 0x3c) + 4))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,uVar3);
  if ((*(int **)(in_ECX + 0x2c) != (int *)0x0) &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x44), iVar1 != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x2c) + 0x40))
              (iVar1,param_1,uVar4,uVar5,uVar3,unaff_EDI,unaff_ESI,param_7,param_8,
               *(undefined4 *)(in_ECX + 0x34),1);
  }
  if ((*(int **)(in_ECX + 0x30) != (int *)0x0) &&
     (iVar1 = *(int *)(*(int *)(in_ECX + 0x3c) + 0x58), iVar1 != 0)) {
    (**(code **)(**(int **)(in_ECX + 0x30) + 0x40))
              (iVar1,param_1,uVar4,uVar5,uVar3,unaff_EDI,unaff_ESI,param_7,param_8,
               *(undefined4 *)(in_ECX + 0x34),1);
  }
  if ((*(int *)(in_ECX + 0x34) == 0) && (*(int **)(in_ECX + 0x24) != (int *)0x0)) {
    iVar1 = **(int **)(in_ECX + 0x18);
    uVar3 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x74))(0);
    (**(code **)(iVar1 + 0xa8))(uVar3);
  }
  return uVar2;
}



void FUN_0077a4a0(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (*(int *)(in_ECX + 0x14) != 0) {
    uVar2 = 0;
    if (*(int *)(in_ECX + 0x38) != 0) {
      do {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x44) + uVar2 * 4);
        if (iVar1 != 0) {
          if (*(int **)(iVar1 + 0x44) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x44) + 0x44))();
          }
          if (*(int **)(iVar1 + 0x58) != (int *)0x0) {
            (**(code **)(**(int **)(iVar1 + 0x58) + 0x5c))();
          }
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(in_ECX + 0x38));
    }
    *(undefined1 *)(in_ECX + 0x1c) = 1;
  }
  return;
}



void FUN_0077a5b0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int local_14;
  uint local_10;
  int local_c;
  uint uStack_8;
  
  FUN_006ffac0(PTR_s___NDL_SCMData_00b29f84);
  uVar7 = 0;
  iVar6 = 0;
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x30) + 0x18);
    if (uVar8 != 0) {
      do {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))(uVar7);
        if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x14) & 0xf0000000) == 0x30000000)) {
          iVar6 = iVar6 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    local_c = (uint)*(ushort *)(param_1 + 0x4a) * iVar6;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar8 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 0x18);
    uVar7 = 0;
    if (uVar8 != 0) {
      do {
        iVar6 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(uVar7);
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x14) & 0xf0000000) == 0x30000000)) {
          local_14 = local_14 + 1;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < uVar8);
    }
    local_14 = (uint)*(ushort *)(param_1 + 0x4a) * local_14;
  }
  uVar7 = (uint)*(ushort *)(param_1 + 0x4a);
  uStack_8 = 0;
  if (uVar7 != 0) {
    do {
      iVar6 = *(int *)(*(int *)(param_1 + 0x44) + uStack_8 * 4);
      if (iVar6 != 0) {
        piVar2 = *(int **)(iVar6 + 0x34);
        if (piVar2 != (int *)0x0) {
          uVar1 = *(ushort *)(piVar2 + 6);
          uVar8 = 0;
          if (uVar1 != 0) {
            do {
              iVar3 = (**(code **)(*piVar2 + 0x3c))(uVar8);
              if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x14) & 0xf0000000) == 0x30000000)) {
                local_14 = local_14 + 1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar1);
          }
        }
        piVar2 = *(int **)(iVar6 + 0x48);
        if (piVar2 != (int *)0x0) {
          uVar1 = *(ushort *)(piVar2 + 6);
          uVar8 = 0;
          if (uVar1 != 0) {
            do {
              iVar6 = (**(code **)(*piVar2 + 0x3c))(uVar8);
              if ((iVar6 != 0) && ((*(uint *)(iVar6 + 0x14) & 0xf0000000) == 0x30000000)) {
                local_c = local_c + 1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar1);
          }
        }
      }
      uStack_8 = uStack_8 + 1;
    } while (uStack_8 < uVar7);
  }
  if ((local_c != 0) || (local_14 != 0)) {
    iVar6 = FUN_00401f00(0x24);
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_009a22e0(PTR_s___NDL_SCMData_00b29f84,local_c,local_14);
    }
    uStack_8 = 0;
    if (uVar7 != 0) {
      do {
        iVar3 = *(int *)(*(int *)(param_1 + 0x44) + uStack_8 * 4);
        if (iVar3 != 0) {
          if (*(int *)(param_1 + 0x2c) != 0) {
            local_10 = (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + 0x18);
          }
          uVar8 = 0;
          if (local_10 != 0) {
            do {
              iVar4 = (**(code **)(**(int **)(param_1 + 0x2c) + 0x3c))(uVar8);
              if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x14) & 0xf0000000) == 0x30000000)) &&
                 (iVar5 = FUN_006ff9c0(*(undefined4 *)(iVar4 + 0xc)), iVar5 != 0)) {
                *(uint *)(*(int *)(iVar6 + 0x20) + *(int *)(iVar6 + 0x18) * 8) =
                     *(uint *)(iVar4 + 0x1c) | 0xff0000;
                *(int *)(*(int *)(iVar6 + 0x20) + 4 + *(int *)(iVar6 + 0x18) * 8) = iVar5;
                *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_10);
          }
          local_10 = 0;
          if (*(int *)(param_1 + 0x30) != 0) {
            local_10 = (uint)*(ushort *)(*(int *)(param_1 + 0x30) + 0x18);
          }
          uVar8 = 0;
          if (local_10 != 0) {
            do {
              iVar4 = (**(code **)(**(int **)(param_1 + 0x30) + 0x3c))(uVar8);
              if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x14) & 0xf0000000) == 0x30000000)) &&
                 (iVar5 = FUN_006ff9c0(*(undefined4 *)(iVar4 + 0xc)), iVar5 != 0)) {
                *(uint *)(*(int *)(iVar6 + 0x1c) + *(int *)(iVar6 + 0x14) * 8) =
                     *(uint *)(iVar4 + 0x1c) | 0xff0000;
                *(int *)(*(int *)(iVar6 + 0x1c) + 4 + *(int *)(iVar6 + 0x14) * 8) = iVar5;
                *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < local_10);
          }
          piVar2 = *(int **)(iVar3 + 0x34);
          if (piVar2 != (int *)0x0) {
            local_10 = (uint)*(ushort *)(piVar2 + 6);
            uVar8 = 0;
            if (local_10 != 0) {
              do {
                iVar4 = (**(code **)(*piVar2 + 0x3c))(uVar8);
                if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x14) & 0xf0000000) == 0x30000000)) &&
                   (iVar5 = FUN_006ff9c0(*(undefined4 *)(iVar4 + 0xc)), iVar5 != 0)) {
                  *(undefined4 *)(*(int *)(iVar6 + 0x20) + *(int *)(iVar6 + 0x18) * 8) =
                       *(undefined4 *)(iVar4 + 0x1c);
                  *(int *)(*(int *)(iVar6 + 0x20) + 4 + *(int *)(iVar6 + 0x18) * 8) = iVar5;
                  *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < local_10);
            }
          }
          piVar2 = *(int **)(iVar3 + 0x48);
          if (piVar2 != (int *)0x0) {
            uVar1 = *(ushort *)(piVar2 + 6);
            uVar8 = 0;
            if (uVar1 != 0) {
              do {
                iVar3 = (**(code **)(*piVar2 + 0x3c))(uVar8);
                if (((iVar3 != 0) && ((*(uint *)(iVar3 + 0x14) & 0xf0000000) == 0x30000000)) &&
                   (iVar4 = FUN_006ff9c0(*(undefined4 *)(iVar3 + 0xc)), iVar4 != 0)) {
                  *(undefined4 *)(*(int *)(iVar6 + 0x1c) + *(int *)(iVar6 + 0x14) * 8) =
                       *(undefined4 *)(iVar3 + 0x1c);
                  *(int *)(*(int *)(iVar6 + 0x1c) + 4 + *(int *)(iVar6 + 0x14) * 8) = iVar4;
                  *(int *)(iVar6 + 0x14) = *(int *)(iVar6 + 0x14) + 1;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar1);
            }
          }
        }
        uStack_8 = uStack_8 + 1;
      } while (uStack_8 < uVar7);
    }
    FUN_006ff8a0(iVar6);
  }
  return;
}



void FUN_0077a9b0(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(in_ECX + 0x38) != 0) {
    do {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x44) + uVar3 * 4);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x60) = *(int *)(iVar1 + 0x60) + 1;
        piVar2 = (int *)FUN_0075f9d0();
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x98))(param_1,0);
        }
        piVar2 = (int *)(iVar1 + 0x60);
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
          FUN_007604d0();
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(in_ECX + 0x38));
  }
  return;
}



undefined4 FUN_0077aa60(void)

{
  FUN_0077a5b0();
  return 1;
}



void FUN_0077aa80(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  char *pcVar8;
  bool bVar9;
  undefined4 *puStack_4;
  
  *in_ECX = &PTR_FUN_00a8977c;
  puStack_4 = in_ECX;
  if ((char *)in_ECX[2] != (char *)0x0) {
    iVar5 = 1;
    bVar9 = true;
    pcVar6 = (char *)in_ECX[2];
    pcVar8 = "";
    do {
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      bVar9 = *pcVar6 == *pcVar8;
      pcVar6 = pcVar6 + 1;
      pcVar8 = pcVar8 + 1;
    } while (bVar9);
    if (!bVar9) {
      piVar1 = (int *)FUN_0077c0f0();
      iVar5 = *piVar1;
      uVar2 = FUN_00943410();
      puVar3 = (undefined4 *)(**(code **)(iVar5 + 8))(in_ECX[2],uVar2);
      if (in_ECX == puVar3) {
        iVar5 = *piVar1;
        uVar2 = FUN_00943410();
        (**(code **)(iVar5 + 0x1c))(in_ECX[2],uVar2);
      }
      if (*(char *)((int)in_ECX + 0x1d) != '\0') {
        puVar3 = (undefined4 *)(**(code **)(*piVar1 + 8))(in_ECX[2],0xffffffff);
        if (in_ECX == puVar3) {
          (**(code **)(*piVar1 + 0x1c))(in_ECX[2],0xffffffff);
        }
      }
    }
  }
  if (in_ECX[5] != 0) {
    FUN_0076b320(in_ECX);
  }
  *(undefined1 *)(in_ECX + 7) = 0;
  FUN_00772e30(in_ECX[10]);
  uVar7 = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  if (*(short *)((int)in_ECX + 0x4a) != 0) {
    puStack_4 = (undefined4 *)0x0;
    do {
      FUN_0076ce40(uVar7,&puStack_4);
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(ushort *)((int)in_ECX + 0x4a));
  }
  FUN_0076c8c0();
  FUN_0076cfa0();
  if (in_ECX[0xf] != 0) {
    piVar1 = (int *)(in_ECX[0xf] + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_007604d0();
    }
  }
  puVar3 = (undefined4 *)in_ECX[0xc];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[0xb];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  puVar3 = (undefined4 *)in_ECX[9];
  if (puVar3 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar3 + 1);
    if ((LVar4 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
  }
  FUN_00779160();
  return;
}



void FUN_0077abf0(int param_1)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8a9dc;
  in_ECX[3] = param_1;
  piVar1 = *(int **)(param_1 + 0x280);
  in_ECX[2] = piVar1;
  (**(code **)(*piVar1 + 4))(piVar1);
  return;
}



void FUN_0077ac40(void)

{
  undefined4 *in_ECX;
  byte unaff_retaddr;
  
  *in_ECX = &PTR_FUN_00a8a9dc;
  (**(code **)(*(int *)in_ECX[2] + 8))((int *)in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((unaff_retaddr & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



bool FUN_0077ae10(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  DWORD DVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  
  iVar5 = DAT_00b3f928;
  if (param_1 == 0) {
    return false;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00b3f928 + 0x180);
  EnterCriticalSection(lpCriticalSection);
  DVar1 = GetCurrentThreadId();
  *(int *)(iVar5 + 0x1fc) = *(int *)(iVar5 + 0x1fc) + 1;
  *(DWORD *)(iVar5 + 0x1f8) = DVar1;
  piVar3 = *(int **)(param_1 + 0x24);
  if (piVar3 == (int *)0x0) {
    iVar2 = FUN_00560920(&DAT_00b3f95c,param_1);
    if (iVar2 == 0) {
      piVar3 = (int *)(iVar5 + 0x1fc);
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        *(undefined4 *)(iVar5 + 0x1f8) = 0;
      }
      LeaveCriticalSection(lpCriticalSection);
      return false;
    }
    piVar3 = (int *)FUN_00761270(iVar2,*(undefined4 *)(in_ECX + 0xc));
  }
  piVar4 = (int *)(iVar5 + 0x1fc);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *(undefined4 *)(iVar5 + 0x1f8) = 0;
  }
  LeaveCriticalSection(lpCriticalSection);
  piVar4 = (int *)(**(code **)(*piVar3 + 0x18))();
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)(**(code **)(*piVar3 + 0x20))();
    if (piVar4 == (int *)0x0) {
      return true;
    }
  }
  iVar5 = (**(code **)(*piVar4 + 0x14))();
  return iVar5 != 0;
}



undefined4 FUN_0077aee0(int param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
    return *(undefined4 *)(iVar2 + 0x10);
  }
  iVar2 = FUN_00560920(&DAT_00b3f95c,param_1);
  if (iVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(in_ECX + 0xc) + 0x104))(iVar2);
    if ((cVar1 != '\0') && (*(int **)(param_1 + 0x24) != (int *)0x0)) {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x24) + 0xc))();
      return *(undefined4 *)(iVar2 + 0x10);
    }
  }
  return 0x16;
}



void FUN_0077b000(int param_1,int param_2,char param_3)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x120 + param_1 * 8) != param_2) {
    (**(code **)(**(int **)(in_ECX + 0xff8) + 0xe4))(*(int **)(in_ECX + 0xff8),param_1,param_2);
  }
  if (param_3 != '\0') {
    *(undefined4 *)(in_ECX + 0x124 + param_1 * 8) = *(undefined4 *)(in_ECX + 0x120 + param_1 * 8);
  }
  *(int *)(in_ECX + 0x120 + param_1 * 8) = param_2;
  return;
}



void FUN_0077b140(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  
  if (*(ushort *)(&DAT_00b427e0 + param_2 * 2) < 8) {
    iVar1 = (uint)*(ushort *)(&DAT_00b427e0 + param_2 * 2) + param_1 * 8;
    piVar2 = (int *)(in_ECX + 0x920 + iVar1 * 8);
    if (*(int *)(in_ECX + 0x920 + iVar1 * 8) != param_3) {
      (**(code **)(**(int **)(in_ECX + 0xff8) + 0x10c))
                (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
    }
    if (param_4 != '\0') {
      piVar2[1] = *piVar2;
    }
    *piVar2 = param_3;
  }
  return;
}



void FUN_0077b610(int param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  int in_ECX;
  
  if ((*(ushort *)(&DAT_00b427b0 + param_2 * 2) < 5) &&
     (piVar1 = (int *)(in_ECX + (param_1 * 5 + 0x1a4 +
                                (uint)*(ushort *)(&DAT_00b427b0 + param_2 * 2)) * 8),
     *piVar1 != param_3)) {
    if (param_4 != '\0') {
      piVar1[1] = *piVar1;
    }
    *piVar1 = param_3;
    (**(code **)(**(int **)(in_ECX + 0xff8) + 0x114))
              (*(int **)(in_ECX + 0xff8),param_1,param_2,param_3);
  }
  return;
}



void FUN_0077b6a0(int param_1,int param_2)

{
  int *in_ECX;
  
  if (*(ushort *)(&DAT_00b427b0 + param_2 * 2) < 5) {
    (**(code **)(*in_ECX + 0xd0))
              (param_1,param_2,
               in_ECX[(param_1 * 5 + (uint)*(ushort *)(&DAT_00b427b0 + param_2 * 2)) * 2 + 0x349],0)
    ;
  }
  return;
}



void FUN_0077b730(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0xa0))();
                    /* WARNING: Could not recover jumptable at 0x0077b748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0xb0))();
  return;
}



void FUN_0077b750(char param_1)

{
  int *in_ECX;
  
  if ((param_1 != (char)in_ECX[0x405]) && (*(char *)(in_ECX[0x3ff] + 0x5c9) != '\0')) {
    *(char *)(in_ECX + 0x405) = param_1;
    (**(code **)(*(int *)in_ECX[0x3fe] + 0x134))((int *)in_ECX[0x3fe],param_1);
    (**(code **)(*in_ECX + 0x94))(in_ECX[0x3f8]);
  }
  return;
}



void FUN_0077b7b0(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x54))();
  (**(code **)(*in_ECX + 0x6c))();
  (**(code **)(*in_ECX + 0xb8))();
  (**(code **)(*in_ECX + 0xdc))();
  FUN_00780a20();
  (**(code **)(*in_ECX + 100))(0x16,2,0);
  (**(code **)(*in_ECX + 100))(8,3,0);
  (**(code **)(*in_ECX + 100))(9,2,0);
  (**(code **)(*in_ECX + 100))(0x1b,0,0);
  (**(code **)(*in_ECX + 100))(0x13,in_ECX[0xe],0);
  (**(code **)(*in_ECX + 100))(0x14,in_ECX[0xf],0);
  (**(code **)(*in_ECX + 100))(0xf,0,0);
  (**(code **)(*in_ECX + 100))(0x19,8,0);
  (**(code **)(*in_ECX + 100))(0x18,0,0);
  (**(code **)(*in_ECX + 100))(0x17,8,0);
  (**(code **)(*in_ECX + 100))(0xe,0,0);
  (**(code **)(*in_ECX + 100))(0x1a,0,0);
  (**(code **)(*in_ECX + 100))(0x1d,0,0);
  (**(code **)(*in_ECX + 100))(0x1c,0,0);
  (**(code **)(*in_ECX + 100))(0x23,-((*(byte *)(in_ECX + 2) & 1) != 0) & 3,0);
  (**(code **)(*in_ECX + 100))(0x8c,3,0);
  (**(code **)(*in_ECX + 100))(0x30,0,0);
  (**(code **)(*in_ECX + 100))(0x22,0,0);
  (**(code **)(*in_ECX + 100))(0x8f,1,0);
  (**(code **)(*in_ECX + 100))(7,1,0);
  (**(code **)(*in_ECX + 100))(0x8d,1,0);
  in_ECX[0x23] = DAT_00b3fa90;
  in_ECX[0x24] = DAT_00b3fa94;
  in_ECX[0x25] = DAT_00b3fa98;
  in_ECX[0x26] = (((int)ROUND((float)in_ECX[0x23] * 255.0) & 0xffU | 0xffffff00) << 8 |
                 (int)ROUND((float)in_ECX[0x24] * 255.0) & 0xffU) << 8 |
                 (int)ROUND((float)in_ECX[0x25] * 255.0) & 0xffU;
  return;
}



void FUN_0077ba10(void)

{
  int in_ECX;
  uint uVar1;
  uint *puVar2;
  
  if (((*(uint *)(in_ECX + 0x103c) & 0x100) == 0) || ((*(uint *)(in_ECX + 0x103c) & 0x100000) == 0))
  {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffffe;
  }
  else {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 1;
  }
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  uVar1 = 0;
  puVar2 = (uint *)(in_ECX + 0x20);
  do {
    if ((*puVar2 & *(uint *)(in_ECX + 0x1044)) != 0) {
      *(uint *)(in_ECX + 0x6c) = *(uint *)(in_ECX + 0x6c) | 1 << ((byte)uVar1 & 0x1f);
    }
    if ((*puVar2 & *(uint *)(in_ECX + 0x1048)) != 0) {
      *(uint *)(in_ECX + 0x70) = *(uint *)(in_ECX + 0x70) | 1 << ((byte)uVar1 & 0x1f);
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (uVar1 < 0xb);
  if ((*(byte *)(in_ECX + 0x1064) & 0x10) == 0) {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) & 0xfffffffb;
  }
  else {
    *(uint *)(in_ECX + 8) = *(uint *)(in_ECX + 8) | 4;
  }
  if ((*(char *)(*(int *)(in_ECX + 0xffc) + 0x5c8) != '\0') &&
     (*(char *)(*(int *)(in_ECX + 0xffc) + 0x5c9) == '\0')) {
    *(undefined1 *)(in_ECX + 0x1014) = 1;
    return;
  }
  *(undefined1 *)(in_ECX + 0x1014) = 0;
  return;
}



void FUN_0077bad0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8a9f4;
  FUN_00780780();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_0077bb00(undefined4 param_1,void *param_2,char param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  LONG LVar5;
  
  piVar2 = (int *)FUN_00401f00(0x1148);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    FUN_007802d0(param_1);
    *piVar2 = (int)&PTR_FUN_00a8a9f4;
    *(undefined1 *)(piVar2 + 0x405) = 0;
    _memcpy(piVar2 + 0x406,param_2,0x130);
  }
  (**(code **)(*piVar2 + 0x108))();
  uVar3 = 0;
  do {
    if (*(int *)((int)&DAT_00b29fb8 + uVar3) == -1) break;
    if (*(int *)((int)&DAT_00b29fb8 + uVar3) == 7) {
      *(uint *)((int)&DAT_00b29fbc + uVar3) = (uint)(param_3 != '\0');
    }
    if (*(int *)((int)&DAT_00b29fc0 + uVar3) == -1) break;
    if (*(int *)((int)&DAT_00b29fc0 + uVar3) == 7) {
      *(uint *)((int)&DAT_00b29fc4 + uVar3) = (uint)(param_3 != '\0');
    }
    if (*(int *)((int)&DAT_00b29fc8 + uVar3) == -1) break;
    if (*(int *)((int)&DAT_00b29fc8 + uVar3) == 7) {
      *(uint *)(uVar3 + 0xb29fcc) = (uint)(param_3 != '\0');
    }
    if (*(int *)((int)&DAT_00b29fd0 + uVar3) == -1) break;
    if (*(int *)((int)&DAT_00b29fd0 + uVar3) == 7) {
      *(uint *)(uVar3 + 0xb29fd4) = (uint)(param_3 != '\0');
    }
    uVar3 = uVar3 + 0x20;
  } while (uVar3 < 0x800);
  if (param_3 != '\0') {
    piVar2[2] = piVar2[2] | 2;
  }
  puVar4 = (undefined4 *)FUN_00780b30(param_1,param_2);
  puVar1 = (undefined4 *)piVar2[0x3fc];
  if (puVar1 != puVar4) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    piVar2[0x3fc] = (int)puVar4;
    if (puVar4 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar4 + 1);
    }
  }
  return piVar2;
}



void FUN_0077bc40(void)

{
  DAT_00b428c8 = (undefined4 *)FUN_00401f00(8);
  if (DAT_00b428c8 != (undefined4 *)0x0) {
    *DAT_00b428c8 = &PTR_LAB_00a8ab2c;
    DAT_00b428c8[1] = 0;
    FUN_0077f720(&DAT_00a8ab50,DAT_00b428c8);
    return;
  }
  DAT_00b428c8 = (undefined4 *)0x0;
  FUN_0077f720(&DAT_00a8ab50,0);
  return;
}



void FUN_0077bc90(void)

{
  DAT_00b428cc = (undefined4 *)FUN_00401f00(0x10);
  if (DAT_00b428cc == (undefined4 *)0x0) {
    DAT_00b428cc = (undefined4 *)0x0;
  }
  else {
    *DAT_00b428cc = &PTR_FUN_00a8ab5c;
    DAT_00b428cc[1] = 0;
    DAT_00b428cc[2] = 0;
    DAT_00b428cc[3] = 0;
  }
  FUN_0077f720(&DAT_00a8ab88,DAT_00b428cc);
  FUN_0077f720(&DAT_00a4d1ec,DAT_00b428cc);
  return;
}



void FUN_0077bce0(void)

{
  DAT_00b428d0 = (undefined4 *)FUN_00401f00(0x10);
  if (DAT_00b428d0 == (undefined4 *)0x0) {
    DAT_00b428d0 = (undefined4 *)0x0;
  }
  else {
    DAT_00b428d0[1] = 0;
    DAT_00b428d0[2] = 0;
    DAT_00b428d0[3] = 0;
    *DAT_00b428d0 = &PTR_FUN_00a8ab90;
  }
  FUN_0077f720(&PTR_LAB_00a8abc0,DAT_00b428d0);
  FUN_0077f720(&PTR_LAB_00a8abbc,DAT_00b428d0);
  return;
}



void FUN_0077bd50(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ab5c;
  FUN_00401f20(in_ECX[2]);
  *in_ECX = &PTR_LAB_00a8ab04;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077be60(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_00b28e04;
  do {
    puVar1 = puVar2;
    if (puVar1 == (undefined4 *)0x0) goto LAB_0077be86;
    puVar2 = (undefined4 *)*puVar1;
  } while (param_1 != puVar1[2]);
  if (puVar1 == (undefined4 *)0x0) {
LAB_0077be86:
    puVar2 = (undefined4 *)(**(code **)(PTR_PTR_00b28e00 + 4))();
    puVar2[2] = param_1;
    *puVar2 = 0;
    puVar2[1] = DAT_00b28e08;
    if (DAT_00b28e08 != (undefined4 *)0x0) {
      *DAT_00b28e08 = puVar2;
      _DAT_00b28e0c = _DAT_00b28e0c + 1;
      DAT_00b28e08 = puVar2;
      return;
    }
    _DAT_00b28e0c = _DAT_00b28e0c + 1;
    DAT_00b28e04 = puVar2;
    DAT_00b28e08 = puVar2;
  }
  return;
}



void FUN_0077bf40(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = DAT_00b42890 + 1;
  bVar2 = DAT_00b42890 == 0;
  DAT_00b42890 = iVar1;
  if (bVar2) {
    FUN_00747c40(&LAB_0077bee0,&LAB_0077bd90);
  }
  return;
}



int FUN_0077bfb0(char *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  
  if (in_ECX[5] == 0) {
    OutputDebugStringA("Attempting to RetrieveShader w/out a valid renderer!\n");
    return 0;
  }
  if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
    FUN_00738460(1,0,"Attempting to RetrieveShader w/out a valid name!\n");
    return 0;
  }
  iVar1 = (**(code **)(*in_ECX + 8))(param_1,param_2);
  if (iVar1 == 0) {
    piVar2 = (int *)(**(code **)(*in_ECX + 0x34))();
    while (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 4))(in_ECX[5],param_1,param_2);
      if (iVar1 != 0) {
        (**(code **)(*in_ECX + 0x18))(iVar1,param_2);
        FUN_00769b10(iVar1);
        FUN_007790f0(in_ECX[5]);
        break;
      }
      piVar2 = (int *)(**(code **)(*in_ECX + 0x38))();
    }
  }
  if (((char)param_1 != '\0') && (iVar1 == 0)) {
    FUN_00738460(1,0,"Failed to find shader %s, Implementation %d\n",param_1,param_2);
  }
  return iVar1;
}



undefined4 FUN_0077c0f0(void)

{
  return DAT_00b42898;
}



void FUN_0077c1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8acc8;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = FUN_007825f0(in_ECX + 2,0,param_1);
  in_ECX[3] = uVar1;
  in_ECX[4] = param_2;
  FUN_00782680(param_3,param_4);
  return;
}



void FUN_0077c220(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8acc8;
  FUN_00401f20(in_ECX[2]);
  FUN_00401f20(in_ECX[6]);
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077c270(void)

{
  if (DAT_00b42898 != (undefined4 *)0x0) {
    if (DAT_00b40120 == DAT_00b42898) {
      DAT_00b40120 = (undefined4 *)0x0;
    }
    (**(code **)*DAT_00b42898)(1);
    DAT_00b42898 = (undefined4 *)0x0;
  }
  return;
}



undefined4 FUN_0077c2a0(undefined4 param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  if (param_2 != (int *)0x0) {
    InterlockedIncrement(param_2 + 1);
  }
  cVar1 = (**(code **)(*param_2 + 0x24))(*(undefined4 *)(in_ECX + 0x14));
  if (cVar1 == '\0') {
    uVar2 = FUN_00452a60();
    FUN_00738460(1,0,"Initialize on %s failed\n",uVar2);
    LVar3 = InterlockedDecrement(param_2 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_2)(1);
    }
  }
  else {
    cVar1 = (**(code **)(*param_2 + 0x18))(unaff_retaddr);
    if (cVar1 != '\0') {
      FUN_004ec910(param_2);
      LVar3 = InterlockedDecrement(param_2 + 1);
      if (LVar3 == 0) {
        (**(code **)*param_2)(1);
      }
      return 1;
    }
    uVar2 = FUN_00452a60();
    FUN_00738460(1,0,"SetupGeometry on %s failed\n",uVar2);
    LVar3 = InterlockedDecrement(param_2 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_2)(1);
      return 0;
    }
  }
  return 0;
}



undefined4 FUN_0077c370(int param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xbc) != 0) {
      FUN_00452a60();
      puVar1 = *(undefined4 **)(param_1 + 0xbc);
      if (puVar1 != (undefined4 *)0x0) {
        LVar2 = InterlockedDecrement(puVar1 + 1);
        if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
          (**(code **)*puVar1)(1);
        }
        *(undefined4 *)(param_1 + 0xbc) = 0;
      }
    }
    return 1;
  }
  return 0;
}



void FUN_0077c550(void)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  if ((*(int *)(in_ECX + 0x14) != 0) && (*(int *)(in_ECX + 0x18) != 0)) {
    local_c = (int *)0x0;
    local_8 = FUN_006a9030();
    while (local_8 != 0) {
      FUN_00452600(&local_8,local_4,&local_c);
      piVar1 = local_c;
      if ((local_c != (int *)0x0) && (cVar2 = (**(code **)(*local_c + 0x20))(), cVar2 == '\0')) {
        FUN_007790f0(*(undefined4 *)(in_ECX + 0x14));
        (**(code **)(*piVar1 + 100))();
        FUN_00769b10(piVar1);
      }
    }
  }
  return;
}



void FUN_0077c5e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  LONG LVar5;
  int *in_ECX;
  undefined4 unaff_retaddr;
  undefined4 *puVar6;
  
  puVar6 = param_1;
  iVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      puVar1 = param_1;
      puVar6 = param_1;
      if (param_1 != (undefined4 *)0x0) {
        InterlockedIncrement(param_1 + 1);
      }
      (**(code **)(*in_ECX + 0xc))(puVar4,unaff_retaddr,puVar6);
      *puVar4 = *(undefined4 *)(in_ECX[2] + iVar3 * 4);
      *(undefined4 **)(in_ECX[2] + iVar3 * 4) = puVar4;
      in_ECX[3] = in_ECX[3] + 1;
      if ((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) {
        (**(code **)*puVar1)(1);
      }
      return;
    }
    cVar2 = (**(code **)(*in_ECX + 8))(puVar6,puVar1[1]);
    if (cVar2 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if ((char)in_ECX[4] == '\0') {
    puVar1[1] = puVar6;
  }
  FUN_0055e2a0(&param_1);
  puVar1 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  LVar5 = InterlockedDecrement(param_1 + 1);
  if (LVar5 != 0) {
    return;
  }
  (**(code **)*puVar1)(1);
  return;
}



void FUN_0077c6c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ac68;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077c6f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ac88;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077c720(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8aca8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0077c750(undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int *in_ECX;
  undefined4 unaff_EBP;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))(param_2,param_3,1);
  if (piVar1 == (int *)0x0) {
    uVar2 = FUN_00738460(0x100,0,"Cannot find shader %s, Implementation %d\n",param_2,param_3);
    return uVar2 & 0xffffff00;
  }
  if (param_3 == -1) {
    (**(code **)(*piVar1 + 0x7c))(1);
  }
  uVar2 = FUN_0077c2a0(unaff_EBP,piVar1);
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_0077c7c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int *in_ECX;
  undefined4 unaff_ESI;
  undefined4 local_28;
  undefined1 local_24 [32];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_28;
  local_28 = param_1;
  iVar3 = FUN_00452a60();
  iVar1 = DAT_00b42894;
  if (iVar3 == 0) {
    DAT_00b42894 = DAT_00b42894 + 1;
    FUN_006c5d40(local_24,0x20,"NiD3DShader%d",iVar1);
    FUN_00738630(local_24);
    iVar3 = FUN_00452a60();
  }
  uVar4 = FUN_00943410();
  piVar5 = (int *)(**(code **)(*in_ECX + 4))(iVar3,uVar4,0);
  if (piVar5 == (int *)0x0) {
    FUN_00769b10(param_2);
    cVar2 = (**(code **)(*param_2 + 0x78))();
    if (cVar2 != '\0') {
      uVar4 = 0xffffffff;
    }
    (**(code **)(*in_ECX + 0x18))(param_2,uVar4);
  }
  else if (piVar5 != param_2) {
    return (uint)piVar5 & 0xffffff00;
  }
  uVar6 = FUN_0077c2a0(unaff_ESI,param_2);
  return uVar6;
}



void FUN_0077c8b0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    InterlockedIncrement((LONG *)(param_1 + 4));
    uVar1 = FUN_00452a60(param_1);
    FUN_0077c5e0(uVar1,param_1);
  }
  return;
}



undefined4 * FUN_0077c8e0(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  LONG LVar3;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0x0;
  cVar2 = FUN_004a1ab0(param_1,&local_4);
  puVar1 = local_4;
  if (cVar2 != '\0') {
    if (local_4 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(local_4 + 1);
      if (LVar3 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    return puVar1;
  }
  if (local_4 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(local_4 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  return (undefined4 *)0x0;
}



undefined4 * FUN_0077c9c0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  int in_ECX;
  int *piVar5;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  iVar3 = *(int *)(in_ECX + 0x20);
  uVar2 = 0;
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 4) != 0) {
      piVar5 = *(int **)(iVar3 + 8);
      do {
        if (*piVar5 != 0) {
          iVar3 = (*(int **)(iVar3 + 8))[uVar2];
          goto LAB_0077c9f1;
        }
        uVar2 = uVar2 + 1;
        piVar5 = piVar5 + 1;
      } while (uVar2 < *(uint *)(iVar3 + 4));
    }
    iVar3 = 0;
LAB_0077c9f1:
    *(int *)(in_ECX + 0x1c) = iVar3;
    if (iVar3 != 0) {
      local_8 = (undefined4 *)0x0;
      FUN_007b2600((int *)(in_ECX + 0x1c),local_4,&local_8);
      puVar1 = local_8;
      if ((local_8 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(local_8 + 1), LVar4 == 0))
      {
        (**(code **)*puVar1)(1);
      }
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}



undefined4 FUN_0077cab0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int local_4;
  
  if (DAT_00b42898 == 0) {
    return 0;
  }
  cVar1 = FUN_0055e000(param_1,&local_4);
  if ((cVar1 == '\0') || (local_4 == 0)) {
    iVar2 = FUN_00401f00(0x1c);
    if (iVar2 != 0) {
      iVar2 = FUN_0077c1b0(param_1,param_2,param_3,param_4);
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
        FUN_00412d30(*(undefined4 *)(iVar2 + 8),iVar2);
        return 1;
      }
    }
  }
  else if (*(int *)(local_4 + 0x10) == param_2) {
    InterlockedIncrement((LONG *)(local_4 + 4));
    return 1;
  }
  return 0;
}



undefined4 FUN_0077cb50(undefined4 param_1)

{
  char cVar1;
  LONG LVar2;
  undefined4 *local_4;
  
  if (DAT_00b42898 == 0) {
    return 0;
  }
  cVar1 = FUN_0055e000(param_1,&local_4);
  if ((cVar1 != '\0') && (local_4 != (undefined4 *)0x0)) {
    if (local_4[1] == 1) {
      FUN_004524c0(param_1);
    }
    LVar2 = InterlockedDecrement(local_4 + 1);
    if (LVar2 == 0) {
      (**(code **)*local_4)(1);
    }
    return 1;
  }
  return 0;
}



void FUN_0077cbc0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8adac;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8ad10;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8ac68;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077cc30(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8adcc;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8ad30;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8ac88;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077cca0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8adec;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8ad50;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8aca8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077cdc0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ad10;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8ac68;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ce00(byte param_1)

{
  FUN_0077cbc0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ce20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ad30;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8ac88;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ce60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8ad50;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8aca8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077cea0(byte param_1)

{
  FUN_0077cca0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077cec0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  LONG LVar3;
  int in_ECX;
  undefined4 *local_8;
  undefined1 local_4 [4];
  
  puVar1 = (undefined4 *)FUN_0077c9c0();
  while (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_00452a60();
    FUN_004524c0(uVar2);
    if ((*(int *)(in_ECX + 0x20) == 0) || (*(int *)(in_ECX + 0x1c) == 0)) break;
    local_8 = (undefined4 *)0x0;
    FUN_007b2600(in_ECX + 0x1c,local_4,&local_8);
    puVar1 = local_8;
    if ((local_8 != (undefined4 *)0x0) && (LVar3 = InterlockedDecrement(local_8 + 1), LVar3 == 0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_0077cf40(byte param_1)

{
  FUN_0077cc30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077cf60(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  FUN_007383c0();
  *in_ECX = &PTR_FUN_00a8ae6c;
  in_ECX[5] = 0;
  in_ECX[9] = &PTR_FUN_00a8ac68;
  in_ECX[10] = 0x25;
  in_ECX[0xc] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[0xb] = pvVar1;
  _memset(pvVar1,0,in_ECX[10] * 4);
  *(undefined1 *)(in_ECX + 0xd) = 1;
  in_ECX[9] = &PTR_FUN_00a8ae4c;
  puVar2 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2[1] = 0x3b;
    *puVar2 = &PTR_FUN_00a8ac88;
    puVar2[3] = 0;
    pvVar1 = (void *)FUN_00401f00(0xec);
    puVar2[2] = pvVar1;
    _memset(pvVar1,0,puVar2[1] * 4);
    *(undefined1 *)(puVar2 + 4) = 1;
    *puVar2 = &PTR_FUN_00a8ae0c;
  }
  in_ECX[6] = puVar2;
  puVar2 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &PTR_FUN_00a8aca8;
    puVar2[1] = 0x25;
    puVar2[3] = 0;
    pvVar1 = (void *)FUN_00401f00(0x94);
    puVar2[2] = pvVar1;
    _memset(pvVar1,0,puVar2[1] * 4);
    *(undefined1 *)(puVar2 + 4) = 0;
    *puVar2 = &PTR_FUN_00a8ae2c;
    in_ECX[8] = puVar2;
    return;
  }
  in_ECX[8] = 0;
  return;
}



void FUN_0077d090(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *piVar2;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  *in_ECX = &PTR_FUN_00a8ae6c;
  FUN_007c2a40();
  FUN_0077cec0();
  if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[6])(1);
  }
  if ((undefined4 *)in_ECX[8] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[8])(1);
  }
  uVar1 = 0;
  if (in_ECX[10] != 0) {
    piVar2 = (int *)in_ECX[0xb];
    do {
      if (*piVar2 != 0) {
        iStack_8 = ((int *)in_ECX[0xb])[uVar1];
        goto joined_r0x0077d0f8;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < (uint)in_ECX[10]);
  }
  iStack_8 = 0;
joined_r0x0077d0f8:
  while (iStack_8 != 0) {
    iStack_c = 0;
    FUN_00452600(&iStack_8,&uStack_4,&iStack_c);
    if (iStack_c != 0) {
      FUN_0077cb50(uStack_4);
    }
  }
  in_ECX[5] = 0;
  FUN_0077cbc0();
  FUN_00738510();
  return;
}



void FUN_0077d160(byte param_1)

{
  FUN_0077d090();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077d180(void)

{
  int iVar1;
  
  if (DAT_00b42898 == 0) {
    iVar1 = FUN_00401f00(0x38);
    if (iVar1 == 0) {
      DAT_00b40120 = 0;
      DAT_00b42898 = DAT_00b40120;
    }
    else {
      DAT_00b40120 = FUN_0077cf60();
      DAT_00b42898 = DAT_00b40120;
    }
  }
  if (DAT_00b40120 == 0) {
    FUN_0060d0a0("Failed to create shader factory!");
  }
  return;
}



void FUN_0077d1d0(void)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x10);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(in_ECX + 0x10) = 0;
  }
  return;
}



void FUN_0077d1f0(int param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 8;
  *(undefined4 *)(param_1 + 0x18) = 1;
  if ((*(uint *)(param_1 + 8) & 0x80000000) != 0) {
    *(undefined4 *)(param_1 + 0x14) = 0x18;
  }
  return;
}



int FUN_0077d220(uint param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (param_1 <= *(uint *)(iVar1 + 0x24)) break;
    iVar1 = *(int *)(iVar1 + 0x3c);
  }
  if (*(int *)(iVar1 + 0x3c) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x40) = *(undefined4 *)(iVar1 + 0x40);
  }
  if (*(int *)(iVar1 + 0x40) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  }
  if (iVar1 != *(int *)(in_ECX + 0x2c)) {
    return iVar1;
  }
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar1 + 0x3c);
  return iVar1;
}



void FUN_0077d270(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if (*(int *)(in_ECX + 0x2c) == 0) {
    *(int *)(in_ECX + 0x2c) = param_1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(*(int *)(in_ECX + 0x2c) + 0x40) = 0;
    return;
  }
  iVar1 = *(int *)(in_ECX + 0x2c);
  iVar3 = 0;
  while (iVar2 = iVar1, *(uint *)(iVar2 + 0x24) <= *(uint *)(param_1 + 0x24)) {
    iVar1 = *(int *)(iVar2 + 0x3c);
    iVar3 = iVar2;
    if (*(int *)(iVar2 + 0x3c) == 0) {
      *(int *)(iVar2 + 0x3c) = param_1;
      *(int *)(param_1 + 0x40) = iVar2;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return;
    }
  }
  if (iVar3 != 0) {
    *(int *)(iVar3 + 0x3c) = param_1;
  }
  *(int *)(iVar2 + 0x40) = param_1;
  *(int *)(param_1 + 0x3c) = iVar2;
  *(int *)(param_1 + 0x40) = iVar3;
  if (iVar2 != *(int *)(in_ECX + 0x2c)) {
    return;
  }
  *(int *)(in_ECX + 0x2c) = param_1;
  return;
}



void FUN_0077d2e0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x2c);
  if (iVar1 != 0) {
    while (iVar1 != param_1) {
      iVar1 = *(int *)(iVar1 + 0x3c);
      if (iVar1 == 0) {
        return;
      }
    }
    if (*(int *)(iVar1 + 0x3c) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x3c) + 0x40) = *(undefined4 *)(iVar1 + 0x40);
    }
    if (*(int *)(iVar1 + 0x40) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x40) + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    }
    if (iVar1 == *(int *)(in_ECX + 0x2c)) {
      *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(iVar1 + 0x3c);
    }
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a8af0c;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a8af14;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_0077d390(void)

{
  ushort uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  *in_ECX = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[1] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x36) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[0xc] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x36));
  }
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  return;
}



void FUN_0077d3f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 8);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 8) = 0;
    }
    FUN_0077d390();
    iVar2 = *(int *)(param_1 + 0x3c);
    iVar3 = *(int *)(param_1 + 0x40);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x40) = iVar3;
    }
    if (iVar3 != 0) {
      *(int *)(iVar3 + 0x3c) = iVar2;
    }
    if (DAT_00b4289c != 0) {
      *(int *)(DAT_00b4289c + 0x40) = param_1;
    }
    *(int *)(param_1 + 0x3c) = DAT_00b4289c;
    *(undefined4 *)(param_1 + 0x40) = 0;
    DAT_00b4289c = param_1;
  }
  return;
}



void FUN_0077d450(void)

{
  int iVar1;
  int iVar2;
  
  FUN_00782810();
  iVar2 = DAT_00b4289c;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x3c);
    FUN_007826e0();
    FUN_00401f20(iVar2);
    iVar2 = iVar1;
  }
  DAT_00b4289c = 0;
  return;
}



void FUN_0077d490(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  uint uVar5;
  
  uVar5 = 0;
  if (*(short *)(in_ECX + 0x26) != 0) {
    do {
      if (uVar5 < *(ushort *)(in_ECX + 0x26)) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x20) + uVar5 * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x20) + uVar5 * 4) = 0;
        if (iVar1 != 0) {
          *(short *)(in_ECX + 0x28) = *(short *)(in_ECX + 0x28) + -1;
        }
        if (uVar5 == *(ushort *)(in_ECX + 0x26) - 1) {
          *(ushort *)(in_ECX + 0x26) = *(ushort *)(in_ECX + 0x26) - 1;
        }
        if (iVar1 != 0) {
          piVar2 = *(int **)(iVar1 + 8);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 8))(piVar2);
            *(undefined4 *)(iVar1 + 8) = 0;
          }
          FUN_0077d390();
          iVar3 = *(int *)(iVar1 + 0x3c);
          iVar4 = *(int *)(iVar1 + 0x40);
          if (iVar3 != 0) {
            *(int *)(iVar3 + 0x40) = iVar4;
          }
          if (iVar4 != 0) {
            *(int *)(iVar4 + 0x3c) = iVar3;
          }
          if (DAT_00b4289c != 0) {
            *(int *)(DAT_00b4289c + 0x40) = iVar1;
          }
          *(int *)(iVar1 + 0x3c) = DAT_00b4289c;
          *(undefined4 *)(iVar1 + 0x40) = 0;
          DAT_00b4289c = iVar1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(in_ECX + 0x26));
  }
  piVar2 = *(int **)(in_ECX + 0x10);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined ***)(in_ECX + 0x1c) = &PTR__scalar_deleting_destructor__00a8af14;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x20));
  return;
}



void FUN_0077d560(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x20) + param_1 * 4);
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x24);
    FUN_00782700(param_2);
    if (iVar2 != *(int *)(iVar1 + 0x24)) {
      FUN_0077d2e0(iVar1);
      if (*(int *)(iVar1 + 0x28) == *(int *)(iVar1 + 0xc)) {
        FUN_00405020(param_1);
        FUN_0077d3f0(iVar1);
        return;
      }
      FUN_0077d270(iVar1);
    }
  }
  return;
}



void FUN_0077d5c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  if (DAT_00b2ad48 != 0) {
    do {
      iVar3 = FUN_00401f00(0x44);
      if (iVar3 == 0) {
        iVar3 = 0;
      }
      else {
        *(undefined ***)(iVar3 + 0x2c) = &PTR__scalar_deleting_destructor__00a8af0c;
        *(undefined2 *)(iVar3 + 0x34) = 0;
        *(undefined2 *)(iVar3 + 0x3a) = 1;
        *(undefined2 *)(iVar3 + 0x36) = 0;
        *(undefined2 *)(iVar3 + 0x38) = 0;
        *(undefined4 *)(iVar3 + 0x30) = 0;
        FUN_0077d390();
      }
      iVar1 = *(int *)(iVar3 + 0x3c);
      iVar2 = *(int *)(iVar3 + 0x40);
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x40) = iVar2;
      }
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0x3c) = iVar1;
      }
      if (DAT_00b4289c != 0) {
        *(int *)(DAT_00b4289c + 0x40) = iVar3;
      }
      *(int *)(iVar3 + 0x3c) = DAT_00b4289c;
      *(undefined4 *)(iVar3 + 0x40) = 0;
      uVar4 = uVar4 + 1;
      DAT_00b4289c = iVar3;
    } while (uVar4 < DAT_00b2ad48);
  }
  return;
}



int * FUN_0077d650(uint param_1)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int *piVar3;
  int *piStack_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  
  uVar2 = param_1;
  if (((*(uint *)(in_ECX + 8) & 0x10000000) == 0) && (param_1 <= *(uint *)(in_ECX + 0xc))) {
    uVar2 = *(uint *)(in_ECX + 0xc);
  }
  uStack_10 = 0;
  puStack_14 = &param_1;
  iStack_18 = *(int *)(in_ECX + 0x18);
  uStack_1c = *(undefined4 *)(in_ECX + 4);
  piStack_20 = *(int **)(in_ECX + 0x14);
  param_1 = 0;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x68))(*(int **)(in_ECX + 0x10),uVar2);
  if (iVar1 < 0) {
    return (int *)0x0;
  }
  piVar3 = DAT_00b4289c;
  if (DAT_00b4289c == (int *)0x0) {
    FUN_0077d5c0();
    piVar3 = DAT_00b4289c;
  }
  DAT_00b4289c = (int *)piVar3[0xf];
  if (DAT_00b4289c != (int *)0x0) {
    *(undefined4 *)((int)DAT_00b4289c + 0x40) = 0;
  }
  piVar3[0xf] = 0;
  piVar3[0x10] = 0;
  *piVar3 = in_ECX;
  piVar3[2] = iStack_18;
  piVar3[3] = uVar2;
  piVar3[9] = uVar2;
  piVar3[10] = uVar2;
  piVar3[4] = *(int *)(in_ECX + 4);
  piVar3[5] = *(int *)(in_ECX + 8);
  piVar3[7] = *(int *)(in_ECX + 0x18);
  piVar3[6] = *(int *)(in_ECX + 0x14);
  piStack_20 = piVar3;
  iVar1 = FUN_004baca0(&piStack_20);
  piVar3[1] = iVar1;
  return piVar3;
}



undefined4 FUN_0077d720(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (param_2 == '\0') {
    iVar1 = FUN_0077d220(param_1);
    if (iVar1 != 0) goto LAB_0077d74d;
  }
  iVar1 = FUN_0077d650(param_1);
  if (iVar1 == 0) {
    return 0;
  }
LAB_0077d74d:
  uVar2 = FUN_00782840(param_1);
  if (*(uint *)(in_ECX + 0x30) < *(uint *)(iVar1 + 0x24)) {
    FUN_0077d270(iVar1);
  }
  return uVar2;
}



void FUN_0077d780(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  return;
}



void FUN_0077d840(int param_1,uint param_2)

{
  undefined4 *puVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x1c)) &&
     (puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x24) + param_2 * 4), puVar1 != (undefined4 *)0x0
     )) {
    if (puVar1[2] != 0) {
      FUN_0077d560(*(undefined4 *)(puVar1[1] + 4),*puVar1);
    }
    if (param_2 < *(uint *)(param_1 + 0x1c)) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4) = 0;
    }
  }
  return;
}



void FUN_0077d890(void)

{
  ushort uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  in_ECX[7] = &PTR__scalar_deleting_destructor__00a8af14;
  *(undefined2 *)(in_ECX + 9) = 0;
  *(undefined2 *)((int)in_ECX + 0x2a) = 1;
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[8] = 0;
  in_ECX[3] = DAT_00b2ad4c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar1 = 0;
  if (*(short *)((int)in_ECX + 0x26) != 0) {
    do {
      uVar2 = (uint)uVar1;
      uVar1 = uVar1 + 1;
      *(undefined4 *)(in_ECX[8] + uVar2 * 4) = 0;
    } while (uVar1 < *(ushort *)((int)in_ECX + 0x26));
  }
  *(undefined2 *)((int)in_ECX + 0x26) = 0;
  *(undefined2 *)(in_ECX + 10) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = DAT_00b2ad50;
  return;
}



undefined4 *
FUN_0077d900(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = FUN_00401f00(0x34);
  if (iVar2 != 0) {
    puVar3 = (undefined4 *)FUN_0077d890();
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[3] = param_1;
      if (param_2 == (int *)0x0) {
        piVar1 = (int *)puVar3[4];
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        puVar3[4] = 0;
      }
      else {
        puVar3[4] = param_2;
        (**(code **)(*param_2 + 4))(param_2);
      }
      puVar3[1] = param_3;
      puVar3[2] = param_4;
      *puVar3 = param_5;
      FUN_0077d1f0(puVar3);
    }
    return puVar3;
  }
  return (undefined4 *)0x0;
}



void FUN_0077d980(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x10) != 0) {
    piVar3 = *(int **)(in_ECX + 0x14);
    do {
      if (*piVar3 != 0) {
        local_c = (*(int **)(in_ECX + 0x14))[uVar2];
        goto joined_r0x0077d9ad;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x10));
  }
  local_c = 0;
joined_r0x0077d9ad:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_8,&local_4);
    FUN_004524c0(local_8);
    iVar1 = local_4;
    if (local_4 != 0) {
      FUN_0077d490();
      FUN_00401f20(iVar1);
    }
  }
  return;
}



void FUN_0077da00(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    if (param_1[0xe] != 0) {
      return;
    }
    iVar2 = FUN_00401f00(0x50);
    if (iVar2 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)FUN_0077d780();
    }
    for (puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fd2c) {
        puVar3[0xe] = 4;
        goto LAB_0077daa7;
      }
    }
    cVar1 = FUN_00405650(&DAT_00b3fd0c,param_1);
    if (cVar1 != '\0') {
      puVar3[0xe] = 5;
    }
LAB_0077daa7:
    param_1[0xe] = (int)puVar3;
  }
  else {
    if (*(int *)(param_3 + 0x28) != 0) {
      return;
    }
    iVar2 = FUN_00401f00(0x50);
    if (iVar2 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)FUN_0077d780();
    }
    puVar3[0xe] = (*(short *)(param_3 + 0x22) != 0) + 4;
    *(uint **)(param_3 + 0x28) = puVar3;
  }
  uVar5 = 0;
  if (param_1[9] != 0) {
    uVar5 = 0x400000;
  }
  if (param_1[8] != 0) {
    uVar5 = uVar5 | 0x800000;
  }
  *puVar3 = (*(byte *)(param_1 + 0xb) & 0x3f) << 0x18 | uVar5;
  FUN_00782910(puVar3);
  return;
}



void FUN_0077dbf0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8af1c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077dc20(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8af5c;
  FUN_0077d980();
  in_ECX[3] = &PTR_FUN_00a8af3c;
  FUN_007c2a40();
  in_ECX[3] = &PTR_FUN_00a8af1c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[5]);
  FUN_007828f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077dc80(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  FUN_007828d0();
  *in_ECX = &PTR_FUN_00a8af5c;
  in_ECX[4] = 0x25;
  in_ECX[3] = &PTR_FUN_00a8af1c;
  in_ECX[6] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[5] = _Dst;
  _memset(_Dst,0,in_ECX[4] * 4);
  in_ECX[3] = &PTR_FUN_00a8af3c;
  return;
}



void FUN_0077dce0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8af3c;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8af1c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0077dd20(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00401f00(0x1c);
  if (iVar1 != 0) {
    uVar2 = FUN_0077dc80();
    return uVar2;
  }
  return 0;
}



void FUN_0077ddc0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8af88;
  if (in_ECX == DAT_00b428a0) {
    DAT_00b428a0 = (undefined4 *)0x0;
  }
  FUN_007828f0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077de00(void)

{
  undefined4 *puVar1;
  
  if (DAT_00b428a0 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_00401f00(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_007828d0();
      *puVar1 = &PTR_FUN_00a8af88;
      DAT_00b428a0 = puVar1;
      return;
    }
    DAT_00b428a0 = (undefined4 *)0x0;
  }
  return;
}



void FUN_0077dee0(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if ((param_2 < *(uint *)(param_1 + 0x1c)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4), iVar1 != 0)) {
    piVar2 = *(int **)(iVar1 + 8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (param_2 < *(uint *)(param_1 + 0x1c)) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4) = 0;
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_0077df80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_00401f00(0x50);
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar2 = (undefined4 *)FUN_0077d780();
    }
    puVar2[0xe] = 4;
    *(undefined4 **)(param_1 + 0x1c) = puVar2;
    *puVar2 = 0x1400000;
    FUN_00782910(puVar2);
    *(undefined2 *)(param_1 + 0x18) = 0xffff;
  }
  return;
}



void FUN_0077e020(int param_1,uint param_2)

{
  int iVar1;
  
  if ((param_2 < *(uint *)(param_1 + 0x1c)) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x24) + param_2 * 4), iVar1 != 0)) {
    if (*(int *)(iVar1 + 8) != 0) {
      FUN_0068f970(*(int *)(iVar1 + 8));
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    if (param_2 < *(uint *)(param_1 + 0x1c)) {
      *(undefined4 *)(*(int *)(param_1 + 0x24) + param_2 * 4) = 0;
    }
  }
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a8aff4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



undefined4 * FUN_0077e0a0(uint param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00401f00(0x18);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  if ((param_1 & 0xf) != 0) {
    param_1 = (param_1 & 0xfffffff0) + 0x20;
  }
  puVar2[2] = param_1;
  piVar1 = (int *)puVar2[3];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (param_2 != (int *)0x0) {
    puVar2[3] = param_2;
    (**(code **)(*param_2 + 4))(param_2);
    puVar2[1] = param_2;
    *puVar2 = param_3;
    return puVar2;
  }
  puVar2[3] = 0;
  puVar2[1] = param_3;
  *puVar2 = param_4;
  return puVar2;
}



void FUN_0077e130(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x10) != 0) {
    piVar3 = *(int **)(in_ECX + 0x14);
    do {
      if (*piVar3 != 0) {
        local_c = (*(int **)(in_ECX + 0x14))[uVar2];
        goto joined_r0x0077e16b;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x10));
  }
  local_c = 0;
joined_r0x0077e16b:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_8,&local_4);
    FUN_004524c0(local_8);
    iVar1 = local_4;
    if (local_4 != 0) {
      piVar3 = *(int **)(local_4 + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar3 = *(int **)(iVar1 + 0xc);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      FUN_00401f20(iVar1);
    }
  }
  uVar2 = 0;
  if (*(uint *)(in_ECX + 0x20) != 0) {
    piVar3 = *(int **)(in_ECX + 0x24);
    do {
      if (*piVar3 != 0) {
        local_c = (*(int **)(in_ECX + 0x24))[uVar2];
        goto joined_r0x0077e1fb;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 0x20));
  }
  local_c = 0;
joined_r0x0077e1fb:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_8,&local_4);
    *(undefined4 *)(local_4 + 8) = 0;
  }
  uVar2 = 0;
  local_c = 0;
  if (*(short *)(in_ECX + 0x34) != 0) {
    do {
      if (uVar2 < *(ushort *)(in_ECX + 0x36)) {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x30) + uVar2 * 4);
        *(undefined4 *)(*(int *)(in_ECX + 0x30) + uVar2 * 4) = 0;
        if (iVar1 != 0) {
          *(short *)(in_ECX + 0x38) = *(short *)(in_ECX + 0x38) + -1;
        }
        if (uVar2 == *(ushort *)(in_ECX + 0x36) - 1) {
          *(ushort *)(in_ECX + 0x36) = *(ushort *)(in_ECX + 0x36) - 1;
        }
        if (iVar1 != 0) {
          piVar3 = *(int **)(iVar1 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          piVar3 = *(int **)(iVar1 + 0xc);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          FUN_00401f20(iVar1);
        }
      }
      *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x40) + uVar2 * 4) + 8) = 0;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(ushort *)(in_ECX + 0x34));
  }
  return;
}



void FUN_0077e2d0(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  *(ushort *)((int)param_1 + 0x2e) = *(ushort *)((int)param_1 + 0x2e) & 0xfff | 0x8000;
  if (param_3 == 0) {
    if (param_1[0xe] != 0) {
      return;
    }
    iVar2 = FUN_00401f00(0x50);
    if (iVar2 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)FUN_0077d780();
    }
    for (puVar4 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar4 != (undefined4 *)0x0;
        puVar4 = (undefined4 *)puVar4[1]) {
      if (puVar4 == &DAT_00b3fd2c) {
        puVar3[0xe] = 4;
        goto LAB_0077e387;
      }
    }
    cVar1 = FUN_00405650(&DAT_00b3fd0c,param_1);
    if (cVar1 != '\0') {
      puVar3[0xe] = 5;
    }
LAB_0077e387:
    param_1[0xe] = (int)puVar3;
  }
  else {
    if (*(int *)(param_3 + 0x28) != 0) {
      return;
    }
    iVar2 = FUN_00401f00(0x50);
    if (iVar2 == 0) {
      puVar3 = (uint *)0x0;
    }
    else {
      puVar3 = (uint *)FUN_0077d780();
    }
    puVar3[0xe] = (*(short *)(param_3 + 0x22) != 0) + 4;
    *(uint **)(param_3 + 0x28) = puVar3;
  }
  uVar5 = 0;
  if (param_1[9] != 0) {
    uVar5 = 0x400000;
  }
  if (param_1[8] != 0) {
    uVar5 = uVar5 | 0x800000;
  }
  *puVar3 = (*(byte *)(param_1 + 0xb) & 0x3f) << 0x18 | uVar5;
  FUN_00782910(puVar3);
  *(ushort *)((int)param_1 + 0x2e) = *(ushort *)((int)param_1 + 0x2e) | 0xfff;
  return;
}



int FUN_0077e430(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  uint uVar6;
  int local_14;
  int local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar4 = param_1;
  uVar6 = *(uint *)(param_1 + 0x1c);
  local_4 = *(uint *)(param_1 + 8);
  local_10 = 0;
  if (param_2 < uVar6) {
    local_8 = *(uint *)(*(int *)(param_1 + 0x20) + param_2 * 4);
  }
  else {
    local_8 = 0;
  }
  iVar5 = *(int *)(param_1 + 0x18) * local_8;
  param_2 = 0;
  local_c = 0;
  if (uVar6 < 2) {
    local_14 = 0;
    uVar6 = local_4;
    if (local_4 == 0) {
      uVar6 = local_8 | 0x80000000;
    }
    cVar1 = FUN_0055e000(uVar6,&local_14);
    if ((cVar1 == '\0') || (local_14 == 0)) {
      local_14 = FUN_0077e0a0(0x800,*(undefined4 *)(in_ECX + 8),local_4,0);
      FUN_00452570(uVar6,local_14);
    }
    local_4 = CONCAT31(local_4._1_3_,*(undefined1 *)(iVar4 + 0x10));
    local_4 = FUN_007829a0(iVar5,&param_2,&local_c,0,local_4);
    FUN_0055e000(uVar6,&local_10);
    if (local_10 == 0) {
      iVar4 = FUN_004bfd40(0,local_4,param_2,iVar5,0);
      FUN_00452570(uVar6,iVar4);
      local_10 = iVar4;
    }
    else {
      *(uint *)(local_10 + 8) = local_4;
      *(uint *)(local_10 + 0xc) = param_2;
      *(int *)(local_10 + 0x14) = iVar5;
    }
    *(int *)(local_10 + 4) = local_14;
    *(undefined4 *)(local_10 + 0x10) = local_c;
    *(uint *)(param_1 + 0x34) = param_2 / local_8;
    return local_10;
  }
  if (*(ushort *)(in_ECX + 0x34) < uVar6) {
    FUN_004e4a10(uVar6);
    FUN_004e4a10(uVar6);
  }
  if ((uint)*(ushort *)(in_ECX + 0x34) <= *(uint *)(in_ECX + 0x4c)) {
    *(undefined4 *)(in_ECX + 0x4c) = 0;
  }
  param_1 = *(int *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x4c) * 4);
  if (param_1 == 0) {
    param_1 = FUN_0077e0a0(0x800,*(undefined4 *)(in_ECX + 8),0,0);
    FUN_0042bb90(*(undefined4 *)(in_ECX + 0x4c),&param_1);
  }
  local_4 = CONCAT31(local_4._1_3_,*(undefined1 *)(iVar4 + 0x10));
  uVar2 = FUN_007829a0(iVar5,&param_2,&local_c,1,local_4);
  iVar3 = *(int *)(*(int *)(in_ECX + 0x40) + *(int *)(in_ECX + 0x4c) * 4);
  if (iVar3 == 0) {
    iVar3 = FUN_004bfd40(0,uVar2,param_2,iVar5,0);
    local_10 = iVar3;
    FUN_0042bb90(*(undefined4 *)(in_ECX + 0x4c),&local_10);
  }
  else {
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(uint *)(iVar3 + 0xc) = param_2;
    *(int *)(iVar3 + 0x14) = iVar5;
  }
  *(int *)(iVar3 + 4) = param_1;
  *(undefined4 *)(iVar3 + 0x10) = local_c;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + 1;
  return iVar3;
}



void FUN_0077e660(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8afb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077e690(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8afd4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077e6c0(void)

{
  void *pvVar1;
  undefined4 *in_ECX;
  
  FUN_007828d0();
  *in_ECX = &PTR_FUN_00a8b03c;
  in_ECX[3] = &PTR_FUN_00a8afb4;
  in_ECX[4] = 0x25;
  in_ECX[6] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[5] = pvVar1;
  _memset(pvVar1,0,in_ECX[4] * 4);
  in_ECX[3] = &PTR_FUN_00a8affc;
  in_ECX[7] = &PTR_FUN_00a8afd4;
  in_ECX[8] = 0x25;
  in_ECX[10] = 0;
  pvVar1 = (void *)FUN_00401f00(0x94);
  in_ECX[9] = pvVar1;
  _memset(pvVar1,0,in_ECX[8] * 4);
  in_ECX[7] = &PTR_FUN_00a8b01c;
  *(undefined2 *)(in_ECX + 0xd) = 0;
  *(undefined2 *)((int)in_ECX + 0x36) = 0;
  *(undefined2 *)(in_ECX + 0xe) = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xb] = &PTR__scalar_deleting_destructor__00a8aff4;
  *(undefined2 *)((int)in_ECX + 0x3a) = 1;
  *(undefined2 *)(in_ECX + 0x11) = 0;
  *(undefined2 *)((int)in_ECX + 0x4a) = 1;
  *(undefined2 *)((int)in_ECX + 0x46) = 0;
  *(undefined2 *)(in_ECX + 0x12) = 0;
  in_ECX[0x10] = 0;
  in_ECX[0xf] = &PTR__scalar_deleting_destructor__00a8af0c;
  in_ECX[0x13] = 0;
  return;
}



void FUN_0077e7a0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int local_c;
  int local_8;
  int local_4;
  
  *in_ECX = &PTR_FUN_00a8b03c;
  uVar1 = 0;
  if (in_ECX[4] != 0) {
    piVar3 = (int *)in_ECX[5];
    do {
      if (*piVar3 != 0) {
        local_c = ((int *)in_ECX[5])[uVar1];
        goto joined_r0x0077e7da;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar1 < (uint)in_ECX[4]);
  }
  local_c = 0;
joined_r0x0077e7da:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_8,&local_4);
    FUN_004524c0(local_8);
    iVar2 = local_4;
    if (local_4 != 0) {
      piVar3 = *(int **)(local_4 + 0x10);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar3 = *(int **)(iVar2 + 0xc);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      FUN_00401f20(iVar2);
    }
  }
  uVar1 = 0;
  if (in_ECX[8] != 0) {
    piVar3 = (int *)in_ECX[9];
    do {
      if (*piVar3 != 0) {
        local_c = ((int *)in_ECX[9])[uVar1];
        goto joined_r0x0077e86a;
      }
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar1 < (uint)in_ECX[8]);
  }
  local_c = 0;
joined_r0x0077e86a:
  while (local_c != 0) {
    FUN_00452600(&local_c,&local_4,&local_8);
    FUN_004524c0(local_4);
    *(undefined4 *)(local_8 + 8) = 0;
    FUN_00401f20(local_8);
  }
  uVar1 = 0;
  local_c = 0;
  if (*(short *)(in_ECX + 0xd) != 0) {
    do {
      if (uVar1 < *(ushort *)((int)in_ECX + 0x36)) {
        iVar2 = *(int *)(in_ECX[0xc] + uVar1 * 4);
        *(undefined4 *)(in_ECX[0xc] + uVar1 * 4) = 0;
        if (iVar2 != 0) {
          *(short *)(in_ECX + 0xe) = *(short *)(in_ECX + 0xe) + -1;
        }
        if (uVar1 == *(ushort *)((int)in_ECX + 0x36) - 1) {
          *(ushort *)((int)in_ECX + 0x36) = *(ushort *)((int)in_ECX + 0x36) - 1;
        }
        if (iVar2 != 0) {
          piVar3 = *(int **)(iVar2 + 0x10);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          piVar3 = *(int **)(iVar2 + 0xc);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          FUN_00401f20(iVar2);
        }
      }
      if (uVar1 < *(ushort *)((int)in_ECX + 0x46)) {
        iVar2 = *(int *)(in_ECX[0x10] + uVar1 * 4);
        *(undefined4 *)(in_ECX[0x10] + uVar1 * 4) = 0;
        if (iVar2 != 0) {
          *(short *)(in_ECX + 0x12) = *(short *)(in_ECX + 0x12) + -1;
        }
        if (uVar1 == *(ushort *)((int)in_ECX + 0x46) - 1) {
          *(ushort *)((int)in_ECX + 0x46) = *(ushort *)((int)in_ECX + 0x46) - 1;
        }
      }
      else {
        iVar2 = 0;
      }
      *(undefined4 *)(iVar2 + 8) = 0;
      FUN_00401f20(iVar2);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(ushort *)(in_ECX + 0xd));
  }
  if (in_ECX == DAT_00b428a4) {
    DAT_00b428a4 = (undefined4 *)0x0;
  }
  in_ECX[0xf] = &PTR__scalar_deleting_destructor__00a8af0c;
  FUN_00401f20(in_ECX[0x10]);
  in_ECX[0xb] = &PTR__scalar_deleting_destructor__00a8aff4;
  FUN_00401f20(in_ECX[0xc]);
  in_ECX[7] = &PTR_FUN_00a8b01c;
  FUN_007c2a40();
  in_ECX[7] = &PTR_FUN_00a8afd4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[9]);
  in_ECX[3] = &PTR_FUN_00a8affc;
  FUN_007c2a40();
  in_ECX[3] = &PTR_FUN_00a8afb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[5]);
  FUN_007828f0();
  return;
}



void FUN_0077ea10(void)

{
  int iVar1;
  
  if (DAT_00b428a4 == 0) {
    iVar1 = FUN_00401f00(0x50);
    if (iVar1 != 0) {
      DAT_00b428a4 = FUN_0077e6c0();
      return;
    }
    DAT_00b428a4 = 0;
  }
  return;
}



void FUN_0077ea40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8affc;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8afb4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ea80(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b01c;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8afd4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077eac0(byte param_1)

{
  FUN_0077e7a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0077eae0(void)

{
  return DAT_00b428a8;
}



void FUN_0077eaf0(void)

{
  if (DAT_00b428a8 != (undefined4 *)0x0) {
    (**(code **)*DAT_00b428a8)(1);
  }
  DAT_00b428a8 = (undefined4 *)0x0;
  return;
}



undefined4 FUN_0077eb10(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((DAT_00b428a8 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x40))();
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0x1c))(param_1);
      return uVar3;
    }
  }
  return 0;
}



undefined4 FUN_0077eb50(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((DAT_00b428a8 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x38))();
    if (iVar1 != 0) {
      return 1;
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x20))();
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0x20))(param_1);
      return uVar3;
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0077ebb0(int param_1)

{
  int *piVar1;
  
  DAT_00b428b4 = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    if (DAT_00b428b0 != (int *)0x0) {
      (**(code **)(*DAT_00b428b0 + 8))(DAT_00b428b0);
    }
    DAT_00b428b0 = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    _DAT_00b428b8 = *(undefined4 *)(DAT_00b428b4 + 0x8ac);
    return;
  }
  _DAT_00b428b8 = 0;
  if (DAT_00b428b0 != (int *)0x0) {
    (**(code **)(*DAT_00b428b0 + 8))(DAT_00b428b0);
  }
  DAT_00b428b0 = (int *)0x0;
  return;
}



int FUN_0077ec20(int *param_1)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0xc);
  *param_1 = (int)piVar1;
  if (piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    return piVar1[2];
  }
  return 0;
}



undefined4 FUN_0077ec40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    *param_1 = *piVar1;
    return piVar1[2];
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0077ec60(char *param_1,char *param_2,rsize_t param_3)

{
  undefined4 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char cVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_314;
  undefined1 local_310 [4];
  undefined1 local_30c [256];
  undefined1 local_20c [260];
  undefined1 local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_314;
  local_314 = param_1;
  cVar4 = thunk_FUN_00748170(param_1,0);
  if (cVar4 != '\0') {
    _strcpy_s(param_2,param_3,param_1);
    return 1;
  }
  if (DAT_00b428a8 == 0) {
    FUN_00738460(1,0,"No valid shader program factory\n");
    return 0;
  }
  FUN_007825b0(param_1,local_310,local_108,local_20c,local_30c);
  puVar1 = *(undefined4 **)(DAT_00b428a8 + 0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar1;
    pcVar2 = (char *)puVar1[2];
    while (pcVar2 != (char *)0x0) {
      pcVar6 = pcVar2;
      if (*pcVar2 == '\0') {
        FUN_00738460(1,0,"Invalid or no shader program directory\n");
      }
      else {
        do {
          pcVar5 = pcVar6;
          pcVar6 = pcVar5 + 1;
        } while (*pcVar5 != '\0');
        pcVar6 = pcVar2;
        if (pcVar5[-1] == '/') {
LAB_0077edf4:
          pcVar6 = "%s%s%s";
        }
        else {
          do {
            pcVar5 = pcVar6;
            pcVar6 = pcVar5 + 1;
          } while (*pcVar5 != '\0');
          if (pcVar5[-1] == '\\') goto LAB_0077edf4;
          pcVar6 = "%s\\%s%s";
        }
        FUN_006c5d40(param_2,param_3,pcVar6,pcVar2,local_20c,local_30c);
        cVar4 = thunk_FUN_00748170(param_2,0);
        if (cVar4 != '\0') {
          return 1;
        }
        FUN_00738460(1,1,"Shader program file not found %s in directory %s\n",local_314,pcVar2);
      }
      if (puVar3 == (undefined4 *)0x0) {
        return 0;
      }
      puVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      pcVar2 = (char *)*puVar1;
    }
  }
  return 0;
}



void FUN_0077ee20(int param_1)

{
  uint uVar1;
  int *piVar2;
  int local_c;
  undefined4 local_8;
  int local_4;
  
  if (DAT_00b428ac != 0) {
    uVar1 = 0;
    if (*(uint *)(DAT_00b428ac + 4) != 0) {
      piVar2 = *(int **)(DAT_00b428ac + 8);
      do {
        if (*piVar2 != 0) {
          local_4 = (*(int **)(DAT_00b428ac + 8))[uVar1];
          goto joined_r0x0077ee56;
        }
        uVar1 = uVar1 + 1;
        piVar2 = piVar2 + 1;
      } while (uVar1 < *(uint *)(DAT_00b428ac + 4));
    }
    local_4 = 0;
joined_r0x0077ee56:
    while (local_4 != 0) {
      local_8 = 0;
      local_c = 0;
      FUN_00452600(&local_4,&local_8,&local_c);
      if (param_1 == local_c) {
        FUN_004524c0(local_8);
      }
    }
  }
  return;
}



void FUN_0077eeb0(void)

{
  FUN_007c2a40();
  if (DAT_00b428ac != (undefined4 *)0x0) {
    (**(code **)*DAT_00b428ac)(1);
  }
  DAT_00b428ac = (undefined4 *)0x0;
  return;
}



void FUN_0077eee0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b078;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ef10(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b098;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ef40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b0b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077ef70(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b0d8;
  FUN_00573880();
  *in_ECX = &PTR_LAB_00a8b068;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077efa0(int *param_1)

{
  int iVar1;
  
  if ((DAT_00b428a8 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 4))();
    if ((iVar1 != 0) && (*(int *)(DAT_00b428a8 + 0x18) != 0)) {
      FUN_004524c0(iVar1);
    }
  }
  return;
}



void FUN_0077efd0(int *param_1)

{
  int iVar1;
  
  if ((DAT_00b428a8 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 4))();
    if ((iVar1 != 0) && (*(int *)(DAT_00b428a8 + 0x1c) != 0)) {
      FUN_004524c0(iVar1);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0077f000(char *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 *puVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_10c [4];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_10c;
  if (param_1 != (char *)0x0) {
    iVar6 = 1;
    bVar8 = true;
    pcVar3 = param_1;
    pcVar4 = "";
    do {
      if (iVar6 == 0) break;
      iVar6 = iVar6 + -1;
      bVar8 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar8);
    if (!bVar8) {
      _strcpy_s(local_108,0x104,param_1);
      pcVar3 = local_108;
      uVar7 = 0;
      do {
        cVar2 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar2 != '\0');
      if (pcVar3 != local_108 + 1) {
        do {
          if (local_108[uVar7] == '/') {
            local_108[uVar7] = '\\';
          }
          pcVar3 = local_108;
          uVar7 = uVar7 + 1;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
        } while (uVar7 < (uint)((int)pcVar3 - (int)(local_108 + 1)));
      }
      puVar5 = *(undefined4 **)(in_ECX + 0xc);
      do {
        if (puVar5 == (undefined4 *)0x0) {
          pcVar3 = local_108;
          do {
            cVar2 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          pcVar4 = (char *)FUN_00401f00(pcVar3 + (1 - (int)(local_108 + 1)));
          _strcpy_s(pcVar4,(rsize_t)(pcVar3 + (1 - (int)(local_108 + 1))),local_108);
          puVar5 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 8) + 4))();
          puVar5[2] = pcVar4;
          puVar5[1] = 0;
          *puVar5 = *(undefined4 *)(in_ECX + 0xc);
          if (*(int *)(in_ECX + 0xc) == 0) {
            *(undefined4 **)(in_ECX + 0x10) = puVar5;
          }
          else {
            *(undefined4 **)(*(int *)(in_ECX + 0xc) + 4) = puVar5;
          }
          *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 1;
          *(undefined4 **)(in_ECX + 0xc) = puVar5;
          return;
        }
        puVar1 = puVar5 + 2;
        puVar5 = (undefined4 *)*puVar5;
      } while (((char *)*puVar1 == (char *)0x0) ||
              (iVar6 = __stricmp((char *)*puVar1,local_108), iVar6 != 0));
    }
  }
  return;
}



void FUN_0077f140(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8b1e0;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8b170;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b078;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077f1b0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8b200;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8b190;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b098;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077f220(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a8b220;
  if ((*(char *)(in_ECX + 4) != '\0') && (uVar3 = 0, in_ECX[1] != 0)) {
    do {
      puVar2 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
      while (puVar2 != (undefined4 *)0x0) {
        puVar1 = puVar2 + 1;
        puVar2 = (undefined4 *)*puVar2;
        FUN_00401f20(*puVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)in_ECX[1]);
  }
  *in_ECX = &PTR_FUN_00a8b1b0;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b0b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0077f290(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b170;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b078;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077f2d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b190;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b098;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077f310(byte param_1)

{
  FUN_0077f1b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077f330(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b1b0;
  FUN_007c2a40();
  *in_ECX = &PTR_FUN_00a8b0b8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0077f370(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;
  char *local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  if (param_1 != (char *)0x0) {
    iVar4 = 1;
    bVar7 = true;
    pcVar3 = param_1;
    pcVar6 = "";
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pcVar3 == *pcVar6;
      pcVar3 = pcVar3 + 1;
      pcVar6 = pcVar6 + 1;
    } while (bVar7);
    if (!bVar7) {
      _strcpy_s(local_108,0x104,param_1);
      pcVar3 = local_108;
      uVar5 = 0;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      if (pcVar3 != local_108 + 1) {
        do {
          if (local_108[uVar5] == '/') {
            local_108[uVar5] = '\\';
          }
          pcVar3 = local_108;
          uVar5 = uVar5 + 1;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
        } while (uVar5 < (uint)((int)pcVar3 - (int)(local_108 + 1)));
      }
      puVar2 = *(undefined4 **)(in_ECX + 0xc);
      do {
        if (puVar2 == (undefined4 *)0x0) {
          return;
        }
        local_10c = (char *)puVar2[2];
        puVar2 = (undefined4 *)*puVar2;
      } while ((local_10c == (char *)0x0) || (iVar4 = __stricmp(local_10c,local_108), iVar4 != 0));
      FUN_00776690(&local_10c);
    }
  }
  return;
}



void FUN_0077f460(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *local_4;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  do {
    do {
      if (puVar1 == (undefined4 *)0x0) {
        return;
      }
      iVar2 = puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
    } while (iVar2 == 0);
    puVar3 = *(undefined4 **)(in_ECX + 0xc);
    do {
      local_4 = puVar3;
      if (local_4 == (undefined4 *)0x0) {
        local_4 = (undefined4 *)0x0;
        break;
      }
      puVar3 = (undefined4 *)*local_4;
    } while (iVar2 != local_4[2]);
    if (local_4 != (undefined4 *)0x0) {
      FUN_007aa860(&local_4);
    }
    FUN_00401f20(iVar2);
  } while( true );
}



void FUN_0077f4c0(byte param_1)

{
  FUN_0077f140();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077f4e0(byte param_1)

{
  FUN_0077f220();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0077f500(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  *in_ECX = &PTR_FUN_00a8b2a0;
  in_ECX[5] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[2] = &PTR_FUN_00a8b1d0;
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &PTR_FUN_00a8b078;
    puVar1[1] = 0x3b;
    puVar1[3] = 0;
    pvVar2 = (void *)FUN_00401f00(0xec);
    puVar1[2] = pvVar2;
    _memset(pvVar2,0,puVar1[1] * 4);
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_FUN_00a8b240;
  }
  in_ECX[6] = puVar1;
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00a8b098;
    puVar1[1] = 0x3b;
    puVar1[3] = 0;
    pvVar2 = (void *)FUN_00401f00(0xec);
    puVar1[2] = pvVar2;
    _memset(pvVar2,0,puVar1[1] * 4);
    *(undefined1 *)(puVar1 + 4) = 0;
    *puVar1 = &PTR_FUN_00a8b260;
    in_ECX[7] = puVar1;
    return;
  }
  in_ECX[7] = 0;
  return;
}



void FUN_0077f600(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a8b2a0;
  if (in_ECX[6] != 0) {
    FUN_007c2a40();
  }
  if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[6])(1);
  }
  if (in_ECX[7] != 0) {
    FUN_007c2a40();
  }
  if ((undefined4 *)in_ECX[7] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[7])(1);
  }
  FUN_0077f460();
  in_ECX[2] = &PTR_FUN_00a8b0d8;
  FUN_00573880();
  in_ECX[2] = &PTR_LAB_00a8b068;
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_0077f680(void)

{
  undefined4 *puVar1;
  void *_Dst;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0x25;
    *puVar1 = &PTR_FUN_00a8b0b8;
    puVar1[3] = 0;
    _Dst = (void *)FUN_00401f00(0x94);
    puVar1[2] = _Dst;
    _memset(_Dst,0,puVar1[1] * 4);
    *(undefined1 *)(puVar1 + 4) = 1;
    *puVar1 = &PTR_FUN_00a8b280;
    DAT_00b428ac = puVar1;
    return;
  }
  DAT_00b428ac = (undefined4 *)0x0;
  return;
}



void FUN_0077f6f0(void)

{
  if (DAT_00b428ac == 0) {
    FUN_0077f680();
    return;
  }
  return;
}



void FUN_0077f700(byte param_1)

{
  FUN_0077f600();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0077f720(char *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_104;
  if (param_1 != (char *)0x0) {
    pcVar3 = _strchr(param_1,0x2e);
    if (pcVar3 == (char *)0x0) {
      uVar5 = 0;
      iVar2 = -(int)param_1;
      do {
        iVar4 = _tolower((int)*param_1);
        cVar1 = *param_1;
        param_1[(int)(local_104 + iVar2)] = (char)iVar4;
        if (cVar1 == '\0') break;
        uVar5 = uVar5 + 1;
        param_1 = param_1 + 1;
      } while (uVar5 < 0x100);
      if (DAT_00b428ac == 0) {
        FUN_0077f680();
      }
      FUN_00412d30(local_104,param_2);
      return 1;
    }
  }
  return 0;
}



void FUN_0077f7e0(int param_1)

{
  int *piVar1;
  
  DAT_00b428c4 = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    if (DAT_00b428c0 != (int *)0x0) {
      (**(code **)(*DAT_00b428c0 + 8))(DAT_00b428c0);
    }
    DAT_00b428c0 = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    return;
  }
  if (DAT_00b428c0 != (int *)0x0) {
    (**(code **)(*DAT_00b428c0 + 8))(DAT_00b428c0);
  }
  DAT_00b428c0 = (int *)0x0;
  return;
}



void FUN_0077f840(int param_1)

{
  int *piVar1;
  int *piVar2;
  int in_ECX;
  
  *(int *)(in_ECX + 0xffc) = param_1;
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 0x280);
    piVar2 = *(int **)(in_ECX + 0xff8);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    *(int **)(in_ECX + 0xff8) = piVar1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))(piVar1);
    }
    return;
  }
  piVar1 = *(int **)(in_ECX + 0xff8);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  *(undefined4 *)(in_ECX + 0xff8) = 0;
  return;
}



void FUN_0077f990(int param_1)

{
  float fVar1;
  byte bVar2;
  int *in_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if ((*(byte *)(param_1 + 0x18) & 1) != 0) {
    uVar6 = 1;
    uVar5 = 0x1c;
    (**(code **)(*in_ECX + 100))(0x1c,1,0);
    fVar1 = (float)in_ECX[0x20] * *(float *)(param_1 + 0x1c);
    uVar4 = 0;
    uVar3 = 0x26;
    (**(code **)(*in_ECX + 100))
              (0x26,1.0 / fVar1,0,uVar5,uVar6,(float)in_ECX[0x1f] - fVar1,
               (float)in_ECX[0x21] * fVar1 + (float)in_ECX[0x1f]);
    (**(code **)(*in_ECX + 100))(0x24,uVar4,0);
    (**(code **)(*in_ECX + 100))(0x25,uVar3,0);
    bVar2 = *(byte *)(param_1 + 0x18) >> 1;
    if ((bVar2 & 3) == 0) {
      if ((*(byte *)(in_ECX + 2) & 1) != 0) {
        (**(code **)(*in_ECX + 100))(0x23,3,0);
        (**(code **)(*in_ECX + 100))(0x8c,0,0);
      }
      uVar4 = 0;
      uVar3 = 0x30;
    }
    else if ((bVar2 & 3) == 1) {
      if ((*(byte *)(in_ECX + 2) & 1) != 0) {
        (**(code **)(*in_ECX + 100))(0x23,0,0);
        (**(code **)(*in_ECX + 100))(0x8c,3,0);
      }
      uVar4 = 1;
      uVar3 = 0x30;
    }
    else {
      uVar4 = 0;
      uVar3 = 0x1c;
    }
    (**(code **)(*in_ECX + 100))(uVar3,uVar4,0);
    if ((((float)in_ECX[0x23] != *(float *)(param_1 + 0x20)) ||
        ((float)in_ECX[0x24] != *(float *)(param_1 + 0x24))) ||
       ((float)in_ECX[0x25] != *(float *)(param_1 + 0x28))) {
      in_ECX[0x26] = (((int)ROUND(*(float *)(param_1 + 0x20) * 255.0) & 0xffU | 0xffffff00) << 8 |
                     (int)ROUND(*(float *)(param_1 + 0x24) * 255.0) & 0xffU) << 8 |
                     (int)ROUND(*(float *)(param_1 + 0x28) * 255.0) & 0xffU;
      in_ECX[0x23] = *(int *)(param_1 + 0x20);
      in_ECX[0x24] = *(int *)(param_1 + 0x24);
      in_ECX[0x25] = *(int *)(param_1 + 0x28);
    }
    (**(code **)(*in_ECX + 100))(0x22,in_ECX[0x26],0);
    return;
  }
  (**(code **)(*in_ECX + 100))(0x1c,0,0);
  return;
}



void FUN_0077fec0(void)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = 0;
  do {
    (**(code **)(*in_ECX + 0x5c))(uVar1);
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x100);
  return;
}



void FUN_0077fee0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xfe0) = 0;
  *(undefined4 *)(in_ECX + 0xfe4) = 1;
  *(undefined4 *)(in_ECX + 0xfe8) = 0;
  *(undefined4 *)(in_ECX + 0xfec) = 1;
  return;
}



void FUN_0077ff20(void)

{
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x80))();
                    /* WARNING: Could not recover jumptable at 0x0077ff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 0x90))();
  return;
}



void FUN_0077ff40(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  if (DAT_00b28cb0 != 0) {
    local_c = 0x1a4;
    do {
      if (DAT_00b2a7c0 != -1) {
        puVar4 = &DAT_00b2a7c0;
        iVar3 = DAT_00b2a7c0;
        do {
          if (iVar3 == 0xb) {
            puVar4[1] = local_8;
          }
          else if (((iVar3 == 1) || (iVar3 == 4)) && (local_c != 0x1a4)) {
            puVar4[1] = 1;
          }
          uVar1 = *(ushort *)(&DAT_00b427e0 + iVar3 * 2);
          iVar2 = puVar4[1];
          in_ECX[((uint)uVar1 + local_8 * 8) * 2 + 0x248] = iVar2;
          (in_ECX + ((uint)uVar1 + local_8 * 8) * 2 + 0x248)[1] = iVar2;
          (**(code **)(*(int *)in_ECX[0x3fe] + 0x10c))((int *)in_ECX[0x3fe],local_8,iVar3,puVar4[1])
          ;
          iVar3 = puVar4[2];
          puVar4 = puVar4 + 2;
        } while (iVar3 != -1);
      }
      if (DAT_00b2a808 != -1) {
        puVar4 = &DAT_00b2a808;
        iVar3 = DAT_00b2a808;
        do {
          uVar1 = *(ushort *)(&DAT_00b427b0 + iVar3 * 2);
          iVar2 = puVar4[1];
          in_ECX[((uint)uVar1 + local_c) * 2] = iVar2 + 1;
          (in_ECX + ((uint)uVar1 + local_c) * 2)[1] = iVar2 + 1;
          (**(code **)(*in_ECX + 0xd0))(local_8,iVar3,puVar4[1],0);
          iVar3 = puVar4[2];
          puVar4 = puVar4 + 2;
        } while (iVar3 != -1);
      }
      local_c = local_c + 5;
      local_8 = local_8 + 1;
    } while (local_8 < DAT_00b28cb0);
  }
  return;
}


