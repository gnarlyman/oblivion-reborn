
undefined4 FUN_00480000(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *unaff_EBX;
  void *unaff_ESI;
  int *piVar7;
  int unaff_EDI;
  int iVar8;
  int *unaff_FS_OFFSET;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  undefined1 auStack_70 [4];
  int local_6c;
  int *piStack_68;
  int iStack_64;
  int *piStack_60;
  int iStack_5c;
  undefined1 local_50 [64];
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar7 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af5db;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = DAT_00b3f928;
  FUN_0070f010(param_2);
  if ((param_1 != (int *)0x0) && (iVar5 != 0)) {
    local_6c = FUN_0076bef0(local_50,uVar2);
    if (local_6c < 0x31545845) {
      if ((local_6c != 0x31545844) && (local_6c != 0x15)) {
        if (local_6c != 0x20) goto LAB_004802c9;
        local_6c = 0x15;
      }
    }
    else if ((local_6c != 0x33545844) && (local_6c != 0x35545844)) goto LAB_004802c9;
    piVar12 = *(int **)(iVar5 + 0x280);
    uVar3 = (**(code **)(*param_1 + 0x4c))();
    uVar4 = (**(code **)(*param_1 + 0x50))();
    if (param_1[0xf] == 0) {
      param_1 = (int *)0x1;
    }
    else {
      param_1 = *(int **)(param_1[0xf] + 0x60);
    }
    piStack_60 = (int *)(**(code **)(*(int *)piVar7[9] + 0x14))();
    iVar5 = (**(code **)(*piVar12 + 0x5c))(piVar12,uVar3,uVar4,param_1,0,local_6c,2,&piStack_68,0);
    iVar8 = 0;
    if ((iVar5 == 0) && (piStack_68 != (int *)0x0)) {
      iStack_5c = FUN_00401f00(0x70);
      uStack_4 = 0;
      if (iStack_5c != 0) {
        iVar8 = FUN_0070e560(uVar3,uVar4,local_50,param_1,1);
      }
      piVar7 = (int *)0x0;
      uStack_4 = 0xffffffff;
      if (param_1 != (int *)0x0) {
        do {
          piVar12 = &iStack_64;
          (**(code **)(*piStack_60 + 0x48))(piStack_60,piVar7);
          piVar11 = (int *)&stack0xffffff84;
          piVar9 = unaff_EBX;
          piVar10 = piVar7;
          (**(code **)(*unaff_EBX + 0x48))();
          D3DXLoadSurfaceFromSurface(piVar12,0,0,unaff_ESI,0,0,0xffffffff,0);
          (**(code **)(*piVar12 + 0x34))(piVar12,auStack_70,0,0);
          if (piVar11 == (int *)0x15) {
            _memcpy((void *)(*(int *)(*(int *)(iVar8 + 0x5c) + (int)piVar7 * 4) +
                            *(int *)(iVar8 + 0x50)),unaff_ESI,
                    *(int *)(*(int *)(iVar8 + 0x58) + (int)piVar7 * 4) * unaff_EDI);
            iVar5 = *(int *)(*(int *)(iVar8 + 0x54) + (int)piVar7 * 4) *
                    *(int *)(*(int *)(iVar8 + 0x58) + (int)piVar7 * 4) * 4;
            if (iVar5 != 0) {
              puVar6 = (undefined1 *)
                       (*(int *)(*(int *)(iVar8 + 0x5c) + (int)piVar7 * 4) + *(int *)(iVar8 + 0x50)
                       + 2);
              iVar5 = (iVar5 - 1U >> 2) + 1;
              do {
                uVar1 = puVar6[-2];
                puVar6[-2] = *puVar6;
                *puVar6 = uVar1;
                puVar6 = puVar6 + 4;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
          }
          else if (((piVar11 == (int *)0x31545844) || (piVar11 == (int *)0x33545844)) ||
                  (piVar11 == (int *)0x35545844)) {
            uVar2 = *(uint *)(*(int *)(iVar8 + 0x58) + (int)piVar7 * 4);
            if (uVar2 < 4) {
              uVar2 = 4;
            }
            _memcpy((void *)(*(int *)(*(int *)(iVar8 + 0x5c) + (int)piVar7 * 4) +
                            *(int *)(iVar8 + 0x50)),unaff_ESI,uVar2 * unaff_EDI >> 2);
          }
          (**(code **)(*piVar10 + 0x38))(piVar10);
          (**(code **)(*piVar9 + 8))(piVar9);
          (**(code **)(*piVar11 + 8))(piVar11);
          piVar7 = (int *)((int)piVar7 + 1);
        } while (piVar7 < param_1);
      }
      (**(code **)(*piStack_68 + 8))(piStack_68);
      uVar3 = FUN_00701fc0(iVar8,&DAT_00b256d0);
      DAT_00b256cd = (int *)0x1 < param_1;
      *unaff_FS_OFFSET = iStack_10;
      return uVar3;
    }
  }
LAB_004802c9:
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 FUN_004802e0(int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if ((param_1 != 0) && (uVar1 = *(ushort *)(*(int *)(param_1 + 0xb4) + 8), uVar1 != 0)) {
    uVar2 = FUN_00401f00((uint)uVar1 * 0xc);
    (*(code *)PTR_FUN_00b27168)
              (*(undefined2 *)(*(int *)(param_1 + 0xb4) + 8),
               *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x1c),uVar2,param_1 + 100);
    return uVar2;
  }
  return 0;
}



int FUN_00480340(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  iVar2 = 0;
  if ((param_1 != (int *)0x0) && (iVar2 = FUN_0047fac0(param_1), iVar2 == 0)) {
    iVar3 = (**(code **)(*param_1 + 8))();
    if (iVar3 == 0) {
      return 0;
    }
    uVar1 = *(ushort *)(iVar3 + 0xb6);
    uVar5 = 0;
    if (uVar1 == 0) {
      return 0;
    }
    do {
      if (uVar5 < *(ushort *)(iVar3 + 0xb6)) {
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0xb0) + uVar5 * 4);
      }
      else {
        uVar4 = 0;
      }
      iVar2 = FUN_00480340(uVar4);
    } while ((iVar2 == 0) && (uVar5 = uVar5 + 1, uVar5 < uVar1));
  }
  return iVar2;
}



int FUN_004803c0(int *param_1)

{
  ushort uVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  float10 fVar9;
  float10 fVar10;
  int local_c;
  
  uVar8 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  local_c = 0;
  iVar4 = (**(code **)(*param_1 + 8))();
  if ((iVar4 != 0) && (uVar1 = *(ushort *)(iVar4 + 0xb6), uVar1 != 0)) {
    do {
      if (uVar8 < *(ushort *)(iVar4 + 0xb6)) {
        uVar5 = *(undefined4 *)(*(int *)(iVar4 + 0xb0) + uVar8 * 4);
      }
      else {
        uVar5 = 0;
      }
      iVar6 = FUN_004803c0(uVar5);
      if (iVar6 != 0) {
        if (local_c != 0) {
          if (*(int *)(local_c + 8) == 0) {
            fVar9 = (float10)0;
          }
          else {
            fVar9 = (float10)FUN_0089da90();
          }
          if (*(int *)(iVar6 + 8) == 0) {
            fVar10 = (float10)0;
          }
          else {
            fVar10 = (float10)FUN_0089da90();
          }
          if ((float)fVar10 <= (float)fVar9) goto LAB_00480472;
        }
        local_c = iVar6;
      }
LAB_00480472:
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar1);
  }
  piVar2 = (int *)param_1[0x2a];
  if (piVar2 != (int *)0x0) {
    for (puVar7 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar7 != (undefined4 *)0x0;
        puVar7 = (undefined4 *)puVar7[1]) {
      if (puVar7 == &DAT_00ba7d24) {
        bVar3 = 1;
        goto LAB_004804a6;
      }
    }
    bVar3 = 0;
LAB_004804a6:
    if ((-(uint)bVar3 & (uint)piVar2) != 0) {
      iVar4 = *(int *)((-(uint)bVar3 & (uint)piVar2) + 0x10);
      goto LAB_004804b9;
    }
  }
  iVar4 = 0;
LAB_004804b9:
  if (local_c == 0) {
    return iVar4;
  }
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 8) == 0) {
      fVar9 = (float10)0;
    }
    else {
      fVar9 = (float10)FUN_0089da90();
    }
    if (*(int *)(local_c + 8) == 0) {
      fVar10 = (float10)0;
    }
    else {
      fVar10 = (float10)FUN_0089da90();
    }
    if ((float)fVar10 <= (float)fVar9) {
      return iVar4;
    }
  }
  return local_c;
}



void FUN_00480520(float *param_1,float *param_2,undefined4 param_3)

{
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_1 - *param_2;
  local_8 = param_1[1] - param_2[1];
  local_4 = param_1[2] - param_2[2];
  FUN_0047f6f0(&local_c,param_3);
  return;
}



uint FUN_00480560(int param_1)

{
  ushort uVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  uVar1 = *(ushort *)(param_1 + 0xb6);
  local_4 = 0;
  if (uVar1 == 0) {
    return 0;
  }
  uVar6 = 0;
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      if (local_4 != 0) {
        return local_4;
      }
      if ((uVar6 < *(ushort *)(param_1 + 0xb6)) &&
         (piVar4 = *(int **)(*(int *)(param_1 + 0xb0) + uVar6 * 4), piVar4 != (int *)0x0)) {
        iVar3 = (**(code **)(*piVar4 + 8))();
        if (iVar3 == 0) {
          iVar3 = (**(code **)(*piVar4 + 0xc))();
          if ((iVar3 != 0) && (piVar4 = (int *)FUN_00707530(4), piVar4 != (int *)0x0)) {
            iVar3 = (**(code **)(*piVar4 + 0x54))();
            if ((iVar3 < 5) || (iVar3 = (**(code **)(*piVar4 + 0x54))(), 10 < iVar3)) {
              bVar2 = 0;
            }
            else {
              bVar2 = 1;
            }
            if ((-(uint)bVar2 & (uint)piVar4) != 0) {
              return -(uint)bVar2 & (uint)piVar4;
            }
          }
        }
        else {
          local_4 = FUN_00480560(piVar4);
        }
      }
      uVar6 = uVar6 + 1;
      uVar5 = local_4;
    } while (uVar6 < uVar1);
  }
  return uVar5;
}



uint FUN_00480630(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0xb6);
  if (*(ushort *)(param_1 + 0xb6) == 0) {
    return 0;
  }
  do {
    uVar2 = uVar2 - 1;
    if (((((uVar2 < *(ushort *)(param_1 + 0xb6)) &&
          (piVar4 = *(int **)(*(int *)(param_1 + 0xb0) + uVar2 * 4), piVar4 != (int *)0x0)) &&
         (iVar3 = (**(code **)(*piVar4 + 8))(), iVar3 != 0)) &&
        ((*(short *)(iVar3 + 0xb6) != 0 && (**(int **)(iVar3 + 0xb0) != 0)))) &&
       (piVar4 = (int *)FUN_00707530(4), piVar4 != (int *)0x0)) {
      iVar3 = (**(code **)(*piVar4 + 0x54))();
      if ((iVar3 < 5) || (iVar3 = (**(code **)(*piVar4 + 0x54))(), 10 < iVar3)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if ((-(uint)bVar1 & (uint)piVar4) != 0) {
        return -(uint)bVar1 & (uint)piVar4;
      }
    }
    if (uVar2 == 0) {
      uVar2 = FUN_00480560(param_1);
      return uVar2;
    }
  } while( true );
}



int FUN_004806e0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x10) + param_1;
    if (iVar1 == 0) goto LAB_004806fd;
  }
  else {
    iVar1 = 0;
LAB_004806fd:
    if (*(char *)(param_1 + 0x18) == '\x02') {
      param_1 = *(int *)(param_1 + 0x10) + param_1;
      goto LAB_0048070f;
    }
  }
  param_1 = 0;
LAB_0048070f:
  if (iVar1 == 0) {
    iVar1 = FUN_0047fb10(param_1);
    if ((iVar1 != 0) && (iVar1 = FUN_00452a60(), iVar1 != 0)) {
      return iVar1;
    }
    if (param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc);
    }
    if (iVar1 != 0) {
      iVar1 = FUN_0089f6b0(0);
      return iVar1;
    }
  }
  else {
    iVar1 = FUN_0047fa60(iVar1);
    if (iVar1 != 0) {
      iVar1 = FUN_00452a60();
      return iVar1;
    }
  }
  return 0;
}



undefined4 FUN_00480770(int *param_1)

{
  int *piVar1;
  char *_Str1;
  int iVar2;
  int *piVar3;
  LONG LVar4;
  undefined4 *unaff_EBX;
  uint uVar5;
  
  piVar3 = param_1;
joined_r0x0048077a:
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar5 = 0;
  do {
    if (*(ushort *)((int)piVar3 + 0xb6) <= uVar5) {
      return 0;
    }
    piVar1 = *(int **)(piVar3[0x2c] + uVar5 * 4);
    if ((piVar1 != (int *)0x0) && (_Str1 = (char *)piVar1[2], _Str1 != (char *)0x0)) {
      iVar2 = __stricmp(_Str1,"Scb");
      if (iVar2 == 0) {
        (**(code **)(*piVar3 + 0x8c))(&param_1,uVar5);
        if (((unaff_EBX != (undefined4 *)0x0) &&
            (LVar4 = InterlockedDecrement(unaff_EBX + 1), LVar4 == 0)) &&
           (unaff_EBX != (undefined4 *)0x0)) {
          (**(code **)*unaff_EBX)(1);
        }
        return 1;
      }
      iVar2 = __strnicmp(_Str1,"FadeNode ",9);
      if (iVar2 == 0) break;
    }
    uVar5 = uVar5 + 1;
  } while( true );
  piVar3 = (int *)(**(code **)(*piVar1 + 8))();
  goto joined_r0x0048077a;
}



undefined4 FUN_00480820(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar2 = FUN_00700010(&DAT_00b3ce30);
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    uVar4 = 0;
    if (*(short *)(iVar2 + 0xb6) != 0) {
      if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_00480866;
      uVar3 = 0;
      while( true ) {
        cVar1 = FUN_00480820(uVar3);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar4 = uVar4 + 1;
        if (*(ushort *)(iVar2 + 0xb6) <= uVar4) break;
LAB_00480866:
        uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar4 * 4);
      }
    }
  }
  return 0;
}



undefined4 FUN_004808a0(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  for (puVar2 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    if (puVar2 == &DAT_00b40864) {
      return 0xb40801;
    }
  }
  iVar3 = (**(code **)(*param_1 + 8))();
  if (iVar3 != 0) {
    uVar5 = 0;
    if (*(short *)(iVar3 + 0xb6) != 0) {
      if (*(short *)(iVar3 + 0xb6) != 0) goto LAB_004808f7;
      uVar4 = 0;
      while( true ) {
        cVar1 = FUN_004808a0(uVar4);
        if (cVar1 != '\0') {
          return 1;
        }
        uVar5 = uVar5 + 1;
        if (*(ushort *)(iVar3 + 0xb6) <= uVar5) break;
LAB_004808f7:
        uVar4 = *(undefined4 *)(*(int *)(iVar3 + 0xb0) + uVar5 * 4);
      }
    }
  }
  return 0;
}



void FUN_00480930(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 != (int *)0x0) {
    for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0xd]) {
      (**(code **)(*piVar1 + 0x68))();
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 != 0) {
      uVar4 = 0;
      if (*(short *)(iVar2 + 0xb6) != 0) {
        if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_00480975;
        uVar3 = 0;
        while( true ) {
          FUN_00480930(uVar3);
          uVar4 = uVar4 + 1;
          if (*(ushort *)(iVar2 + 0xb6) <= uVar4) break;
LAB_00480975:
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar4 * 4);
        }
      }
    }
  }
  return;
}



char FUN_004809a0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char local_1;
  
  iVar2 = param_1;
  local_1 = '\0';
  if (param_1 == 0) {
    return '\0';
  }
  if (DAT_00b34404 == 0) {
    iVar3 = FUN_006ff9c0(&DAT_00a7d0ec);
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0xc) >> 5 & 1) != 0)) {
      DAT_00b34404 = iVar2;
      iVar3 = FUN_00700010(&DAT_00b3cac0);
      if (iVar3 != 0) {
        DAT_00b34400 = *(int **)(iVar3 + 0x7c);
      }
    }
    if (DAT_00b34404 == 0) {
      return '\0';
    }
  }
  if ((*(char **)(iVar2 + 8) != (char *)0x0) &&
     (iVar3 = __stricmp(*(char **)(iVar2 + 8),"EditorMarker"), iVar3 == 0)) {
    if (DAT_00b34390 != '\0') {
      *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
      return '\x01';
    }
    if (DAT_00b34400 != (int *)0x0) {
      (**(code **)(*DAT_00b34400 + 0x50))("EditorMarker",0);
      (**(code **)(*DAT_00b34400 + 0x50))("EditorMarker:0",0);
    }
    (**(code **)(**(int **)(iVar2 + 0x1c) + 0x88))(&param_1,iVar2);
    FUN_007016a0();
    if (DAT_00b34404 == iVar2) {
      DAT_00b34404 = 0;
      DAT_00b34400 = (int *)0x0;
    }
    return '\x01';
  }
  uVar4 = 0;
  if (*(short *)(iVar2 + 0xb6) != 0) {
    do {
      if ((((uVar4 < *(ushort *)(iVar2 + 0xb6)) &&
           (piVar1 = *(int **)(*(int *)(iVar2 + 0xb0) + uVar4 * 4), piVar1 != (int *)0x0)) &&
          (iVar3 = (**(code **)(*piVar1 + 8))(), iVar3 != 0)) &&
         (local_1 = FUN_004809a0(iVar3), local_1 != '\0')) break;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(ushort *)(iVar2 + 0xb6));
  }
  if (DAT_00b34404 == iVar2) {
    DAT_00b34404 = 0;
    DAT_00b34400 = (int *)0x0;
  }
  return local_1;
}



float10 FUN_00480b00(int param_1,undefined4 param_2,char *param_3)

{
  int *piVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if (param_1 == 0) {
    return (float10)0;
  }
  iVar5 = FUN_00560920(&DAT_00b3cac0,*(undefined4 *)(param_1 + 0xc));
  if (iVar5 != 0) {
    cVar4 = FUN_0055e000(param_2,&param_1);
    if ((cVar4 != '\0') && (param_1 != 0)) {
      piVar1 = (int *)(param_1 + 0x20);
      param_1 = *(int *)(*piVar1 + 0x10);
      uVar3 = *(uint *)(*piVar1 + 0xc);
      pcVar2 = param_3 + 1;
      pcVar6 = param_3;
      do {
        cVar4 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar4 != '\0');
      if (((int)pcVar6 - (int)pcVar2 != 0) && (uVar7 = 0, uVar3 != 0)) {
        puVar8 = (undefined4 *)(param_1 + 4);
        do {
          if ((char *)*puVar8 != (char *)0x0) {
            iVar5 = __strnicmp((char *)*puVar8,param_3,(int)pcVar6 - (int)pcVar2);
            if (iVar5 == 0) {
              return (float10)*(float *)(param_1 + uVar7 * 8);
            }
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar8 + 2;
        } while (uVar7 < uVar3);
      }
    }
  }
  return (float10)0;
}



void FUN_00480bb0(int *param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if (((*(byte *)(param_2 + 0x18) & 1) != 0) && (param_1 != (int *)0x0)) {
    for (puVar1 = (undefined *)(**(code **)(*param_1 + 4))(); puVar1 != (undefined *)0x0;
        puVar1 = *(undefined **)(puVar1 + 4)) {
      if (puVar1 == &DAT_00b365ac) {
        return;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x18) & 2) != 0) {
    piVar2 = (int *)FUN_00452a60();
    if (piVar2 != (int *)0x0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b35288) {
          return;
        }
      }
    }
    if ((((*(byte *)(param_2 + 0x18) & 2) != 0) && (iVar4 = FUN_00452a60(), iVar4 != 0)) &&
       (iVar4 = FUN_00452a60(), *(int *)(iVar4 + 8) != 0)) {
      iVar4 = FUN_00452a60();
      iVar5 = 6;
      bVar8 = true;
      pcVar6 = *(char **)(iVar4 + 8);
      pcVar7 = "Arrow";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        return;
      }
    }
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return;
}



undefined4 FUN_00480c50(undefined4 param_1,char param_2,char param_3,char param_4)

{
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  uint local_4;
  
  local_14 = 0xf;
  local_18 = 1;
  local_10 = 0;
  local_4 = (uint)(param_2 != '\0');
  if (param_3 != '\0') {
    local_4 = local_4 | 2;
  }
  if (param_4 != '\0') {
    local_4 = local_4 | 4;
  }
  FUN_0088a7d0(param_1,local_1c,FUN_00480bb0);
  return local_10;
}



void FUN_00480cb0(int *param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if (((*(byte *)(param_2 + 0x18) & 1) != 0) && (param_1 != (int *)0x0)) {
    for (puVar1 = (undefined *)(**(code **)(*param_1 + 4))(); puVar1 != (undefined *)0x0;
        puVar1 = *(undefined **)(puVar1 + 4)) {
      if (puVar1 == &DAT_00b365ac) {
        return;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x18) & 2) != 0) {
    piVar2 = (int *)FUN_00452a60();
    if (piVar2 != (int *)0x0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b35288) {
          return;
        }
      }
    }
    if ((((*(byte *)(param_2 + 0x18) & 2) != 0) && (iVar4 = FUN_00452a60(), iVar4 != 0)) &&
       (iVar4 = FUN_00452a60(), *(int *)(iVar4 + 8) != 0)) {
      iVar4 = FUN_00452a60();
      iVar5 = 6;
      bVar8 = true;
      pcVar6 = *(char **)(iVar4 + 8);
      pcVar7 = "Arrow";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        return;
      }
    }
  }
  if (param_1 == *(int **)(param_2 + 0x10)) {
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0xc);
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return;
}



undefined4
FUN_00480d60(undefined4 param_1,undefined4 param_2,char param_3,char param_4,char param_5)

{
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_14 = 0xf;
  local_18 = 1;
  local_10 = 0;
  local_c = param_2;
  local_8 = 0xffffffff;
  local_4 = (uint)(param_3 != '\0');
  if (param_4 != '\0') {
    local_4 = local_4 | 2;
  }
  if (param_5 != '\0') {
    local_4 = local_4 | 4;
  }
  FUN_0088a7d0(param_1,local_1c,FUN_00480cb0);
  return local_8;
}



void FUN_00480de0(int *param_1,int param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  bool bVar8;
  
  if (((*(byte *)(param_2 + 0x18) & 1) != 0) && (param_1 != (int *)0x0)) {
    for (puVar1 = (undefined *)(**(code **)(*param_1 + 4))(); puVar1 != (undefined *)0x0;
        puVar1 = *(undefined **)(puVar1 + 4)) {
      if (puVar1 == &DAT_00b365ac) {
        return;
      }
    }
  }
  if ((*(byte *)(param_2 + 0x18) & 2) != 0) {
    piVar2 = (int *)FUN_00452a60();
    if (piVar2 != (int *)0x0) {
      for (puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))(); puVar3 != (undefined4 *)0x0;
          puVar3 = (undefined4 *)puVar3[1]) {
        if (puVar3 == &DAT_00b35288) {
          return;
        }
      }
    }
    if ((((*(byte *)(param_2 + 0x18) & 2) != 0) && (iVar4 = FUN_00452a60(), iVar4 != 0)) &&
       (iVar4 = FUN_00452a60(), *(int *)(iVar4 + 8) != 0)) {
      iVar4 = FUN_00452a60();
      iVar5 = 6;
      bVar8 = true;
      pcVar6 = *(char **)(iVar4 + 8);
      pcVar7 = "Arrow";
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar8 = *pcVar6 == *pcVar7;
        pcVar6 = pcVar6 + 1;
        pcVar7 = pcVar7 + 1;
      } while (bVar8);
      if (bVar8) {
        return;
      }
    }
  }
  if (*(int *)(param_2 + 0xc) == *(int *)(param_2 + 0x14)) {
    *(int **)(param_2 + 0x10) = param_1;
  }
  *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + 1;
  return;
}



undefined4
FUN_00480e90(undefined4 param_1,undefined4 param_2,char param_3,char param_4,char param_5)

{
  undefined1 local_1c [4];
  undefined1 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_14 = 0xf;
  local_18 = 1;
  local_10 = 0;
  local_c = 0;
  local_8 = param_2;
  local_4 = (uint)(param_3 != '\0');
  if (param_4 != '\0') {
    local_4 = local_4 | 2;
  }
  if (param_5 != '\0') {
    local_4 = local_4 | 4;
  }
  FUN_0088a7d0(param_1,local_1c,FUN_00480de0);
  return local_c;
}



int FUN_00480f00(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*param_1 + 8))();
    if (iVar1 != 0) {
      uVar5 = 0;
      if (*(short *)(iVar1 + 0xb6) != 0) {
        if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_00480f95;
        uVar2 = 0;
        while( true ) {
          iVar3 = FUN_00480f00(uVar2,param_2,param_3);
          iVar4 = iVar4 + iVar3;
          uVar5 = uVar5 + 1;
          if (*(ushort *)(iVar1 + 0xb6) <= uVar5) break;
LAB_00480f95:
          uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar5 * 4);
        }
        return iVar4;
      }
    }
    return 0;
  }
  if ((char)param_2 != '\0') {
    if ((char *)param_1[2] == (char *)0x0) {
      return 0;
    }
    iVar4 = _strncmp((char *)param_1[2],"Decal",5);
    if (iVar4 == 0) {
      return 0;
    }
  }
  if (((char)param_3 != '\0') && (iVar4 = _strncmp((char *)param_1[2],"Block (",7), iVar4 != 0)) {
    return 0;
  }
  return 1;
}



char FUN_00480fd0(int *param_1,int *param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return '\x01';
  }
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x10))();
    if (((iVar2 != 0) &&
        (((char)param_4 == '\0' ||
         (((char *)param_1[2] != (char *)0x0 &&
          (iVar2 = _strncmp((char *)param_1[2],"Decal",5), iVar2 != 0)))))) &&
       (((char)param_5 == '\0' || (iVar2 = _strncmp((char *)param_1[2],"Block (",7), iVar2 == 0))))
    {
      *param_3 = *param_3 + 1;
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 != 0) {
      uVar4 = 0;
      if (*(short *)(iVar2 + 0xb6) != 0) {
        if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_00481064;
        uVar3 = 0;
        while( true ) {
          cVar1 = FUN_00480fd0(uVar3,param_2,param_3,param_4,param_5);
          if (cVar1 != '\0') {
            return cVar1;
          }
          uVar4 = uVar4 + 1;
          if (*(ushort *)(iVar2 + 0xb6) <= uVar4) break;
LAB_00481064:
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar4 * 4);
        }
      }
    }
    return '\0';
  }
  return '\0';
}



undefined4 FUN_004810a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_00480fd0(param_1,param_2,&local_4,param_3,param_4);
  if (cVar1 != '\0') {
    return local_4;
  }
  return 0xffffffff;
}



char FUN_004810e0(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return '\0';
  }
  iVar2 = (**(code **)(*param_1 + 0x10))();
  if (iVar2 == 0) goto LAB_004811a1;
  iVar2 = FUN_00707530(4);
  if (iVar2 == 0) {
LAB_00481151:
    iVar2 = 0;
  }
  else {
    piVar3 = (int *)FUN_00707530(4);
    iVar2 = (**(code **)(*piVar3 + 0x54))();
    if (iVar2 < 1) goto LAB_00481151;
    piVar3 = (int *)FUN_00707530(4);
    iVar2 = (**(code **)(*piVar3 + 0x54))();
    if (10 < iVar2) goto LAB_00481151;
    iVar2 = FUN_00707530(4);
  }
  if (iVar2 == param_2) {
    return '\x01';
  }
  if ((((char)param_4 == '\0') ||
      (((char *)param_1[2] != (char *)0x0 &&
       (iVar2 = _strncmp((char *)param_1[2],"Decal",5), iVar2 != 0)))) &&
     (((char)param_5 == '\0' || (iVar2 = _strncmp((char *)param_1[2],"Block (",7), iVar2 == 0)))) {
    *param_3 = *param_3 + 1;
  }
LAB_004811a1:
  iVar2 = (**(code **)(*param_1 + 8))();
  if (iVar2 != 0) {
    uVar5 = 0;
    if (*(short *)(iVar2 + 0xb6) != 0) {
      if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_004811c5;
      uVar4 = 0;
      while( true ) {
        cVar1 = FUN_004810e0(uVar4,param_2,param_3,param_4,param_5);
        if (cVar1 != '\0') {
          return cVar1;
        }
        uVar5 = uVar5 + 1;
        if (*(ushort *)(iVar2 + 0xb6) <= uVar5) break;
LAB_004811c5:
        uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
      }
    }
  }
  return '\0';
}



undefined4 FUN_00481210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 local_4;
  
  local_4 = 0;
  cVar1 = FUN_004810e0(param_1,param_2,&local_4,param_3,param_4);
  if (cVar1 != '\0') {
    return local_4;
  }
  return 0xffffffff;
}



int * FUN_00481250(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return (int *)0x0;
  }
  iVar1 = (**(code **)(*param_1 + 0x10))();
  if (((iVar1 != 0) &&
      (((char)param_3 == '\0' ||
       (((char *)param_1[2] != (char *)0x0 &&
        (iVar1 = _strncmp((char *)param_1[2],"Decal",5), iVar1 != 0)))))) &&
     (((char)param_4 == '\0' || (iVar1 = _strncmp((char *)param_1[2],"Block (",7), iVar1 == 0)))) {
    if (*param_2 == 0) {
      return param_1;
    }
    *param_2 = *param_2 + -1;
  }
  iVar1 = (**(code **)(*param_1 + 8))();
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(short *)(iVar1 + 0xb6) != 0) {
      if (*(short *)(iVar1 + 0xb6) != 0) goto LAB_004812e9;
      uVar2 = 0;
      while( true ) {
        piVar3 = (int *)FUN_00481250(uVar2,param_2,param_3,param_4);
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
        uVar4 = uVar4 + 1;
        if (*(ushort *)(iVar1 + 0xb6) <= uVar4) break;
LAB_004812e9:
        uVar2 = *(undefined4 *)(*(int *)(iVar1 + 0xb0) + uVar4 * 4);
      }
    }
  }
  return (int *)0x0;
}



undefined4 FUN_00481320(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_2 == -1) {
    return 0;
  }
  uVar1 = FUN_00481250(param_1,&param_2,param_3,param_4);
  return uVar1;
}



void FUN_00481350(int *param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x10))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar5 = 0;
        if (*(short *)(iVar2 + 0xb6) != 0) {
          if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_004813e6;
          uVar4 = 0;
          while( true ) {
            FUN_00481350(uVar4);
            uVar5 = uVar5 + 1;
            if (*(ushort *)(iVar2 + 0xb6) <= uVar5) break;
LAB_004813e6:
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
          }
        }
      }
    }
    else {
      piVar3 = (int *)FUN_00707530(4);
      if (piVar3 != (int *)0x0) {
        iVar2 = (**(code **)(*piVar3 + 0x54))();
        if ((iVar2 < 1) || (iVar2 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar2)) {
          bVar1 = 0;
        }
        else {
          bVar1 = 1;
        }
        if ((-(uint)bVar1 & (uint)piVar3) != 0) {
          (**(code **)(*piVar3 + 0x54))();
          FUN_0067ab40(-(uint)bVar1 & (uint)piVar3);
          return;
        }
      }
    }
  }
  return;
}



void FUN_00481410(int *param_1,undefined4 param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))();
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar5 = 0;
        if (*(short *)(iVar2 + 0xb6) != 0) {
          if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_0048149a;
          uVar4 = 0;
          while( true ) {
            FUN_00481410(uVar4,param_2);
            uVar5 = uVar5 + 1;
            if (*(ushort *)(iVar2 + 0xb6) <= uVar5) break;
LAB_0048149a:
            uVar4 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar5 * 4);
          }
        }
      }
    }
    else {
      piVar3 = (int *)FUN_00707530(4);
      if (((piVar3 == (int *)0x0) || (iVar2 = (**(code **)(*piVar3 + 0x54))(), iVar2 < 1)) ||
         (iVar2 = (**(code **)(*piVar3 + 0x54))(), 10 < iVar2)) {
        bVar1 = 0;
      }
      else {
        bVar1 = 1;
      }
      if ((-(uint)bVar1 & (uint)piVar3) != 0) {
        *(undefined4 *)((-(uint)bVar1 & (uint)piVar3) + 0x98) = param_2;
        return;
      }
    }
  }
  return;
}



void FUN_004814c0(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_007b7650();
  if (((((iVar1 != 0) && (*(int *)(iVar1 + 0x2228) == 0)) && (g_ModelLoader_singleton != 0)) &&
      ((DAT_00b33a04 != (int *)0x0 &&
       (iVar1 = (**(code **)(*DAT_00b33a04 + 4))("Meshes\\TestSphere.NIF",0,0,0xffffffff),
       iVar1 != 0)))) && (iVar1 = FUN_00439eb0("Meshes\\TestSphere.NIF",0,0,1), iVar1 != 0)) {
    piVar2 = (int *)FUN_00405790(0);
    while (piVar2 != (int *)0x0) {
      iVar1 = (**(code **)(*piVar2 + 8))();
      if ((iVar1 == 0) || (*(short *)(iVar1 + 0xb6) == 0)) {
        piVar2 = (int *)0x0;
      }
      else {
        piVar2 = (int *)**(undefined4 **)(iVar1 + 0xb0);
      }
    }
    FUN_00707610();
    return;
  }
  return;
}



void FUN_00481570(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0xc))(uVar1);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 != 0) {
        uVar1 = 0;
        if (*(short *)(iVar2 + 0xb6) != 0) {
          if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_0048162a;
          uVar3 = 0;
          while( true ) {
            FUN_00481570(uVar3);
            uVar1 = uVar1 + 1;
            if (*(ushort *)(iVar2 + 0xb6) <= uVar1) break;
LAB_0048162a:
            uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar1 * 4);
          }
        }
      }
    }
    else {
      iVar2 = FUN_00707530(0);
      if (iVar2 == 0) {
        iVar2 = FUN_00401f00(0x1c);
        uStack_4 = 0;
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_0047f920();
        }
        *(ushort *)(iVar2 + 0x18) = *(ushort *)(iVar2 + 0x18) | 1;
        uStack_4 = 0xffffffff;
        FUN_00405680(iVar2);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00481660(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  if (param_1 != (int *)0x0) {
    for (puVar1 = (undefined4 *)(**(code **)(*param_1 + 4))(); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      if (puVar1 == &DAT_00b40864) {
        *(undefined1 *)(param_1 + 0x3b) = 1;
        return;
      }
    }
    iVar2 = (**(code **)(*param_1 + 8))();
    if (iVar2 != 0) {
      uVar4 = 0;
      if (*(short *)(iVar2 + 0xb6) != 0) {
        if (*(short *)(iVar2 + 0xb6) != 0) goto LAB_004816b2;
        uVar3 = 0;
        while( true ) {
          FUN_00481660(uVar3);
          uVar4 = uVar4 + 1;
          if (*(ushort *)(iVar2 + 0xb6) <= uVar4) break;
LAB_004816b2:
          uVar3 = *(undefined4 *)(*(int *)(iVar2 + 0xb0) + uVar4 * 4);
        }
      }
    }
  }
  return;
}



bool FUN_004816e0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int unaff_ESI;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_EDI;
  int iVar7;
  int iStack_c;
  int *local_8 [2];
  
  iVar7 = -1;
  iVar2 = FUN_0047f340(param_1,DAT_00b350d8,0);
  if ((((iVar2 != 0) && (iVar2 = *(int *)(iVar2 + 0x3c), iVar2 != 0)) &&
      (iVar4 = **(int **)(iVar2 + 0x5c) + *(int *)(iVar2 + 0x50), iVar4 != 0)) &&
     ((param_3 != (int *)0x0 &&
      (iVar3 = (**(code **)(*param_3 + 0x4c))(param_3,0,local_8,0,0), -1 < iVar3)))) {
    iVar2 = *(int *)(iVar2 + 100);
    iVar7 = 0;
    if (0 < iStack_c) {
      puVar6 = (undefined1 *)(iVar4 + 2);
      do {
        iVar4 = 0;
        puVar5 = puVar6;
        do {
          iVar3 = iVar4 * 4;
          *(undefined1 *)(unaff_ESI * iVar7 + iVar3 + unaff_EDI) = puVar5[-2];
          *(undefined1 *)(unaff_ESI * iVar7 + iVar3 + 1 + unaff_EDI) = puVar5[-1];
          uVar1 = *puVar5;
          puVar5 = puVar5 + iVar2;
          *(undefined1 *)(unaff_ESI * iVar7 + iVar3 + 2 + unaff_EDI) = uVar1;
          iVar4 = iVar4 + 1;
          *(undefined1 *)(unaff_ESI * iVar7 + iVar3 + 3 + unaff_EDI) = 0;
        } while (iVar4 < iStack_c);
        puVar6 = puVar6 + iVar2 * iStack_c;
        iVar7 = iVar7 + 1;
        param_3 = local_8[0];
      } while (iVar7 < iStack_c);
    }
    (**(code **)(*param_3 + 0x50))(param_3,0);
    iVar7 = D3DXSaveTextureToFileA(iStack_c,4,param_3,0);
  }
  return -1 < iVar7;
}



void FUN_00481820(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af608;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d6c8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3d36c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4
FUN_00481890(int param_1,undefined4 param_2,undefined4 param_3,float param_4,int param_5,
            char param_6)

{
  undefined4 *puVar1;
  LONG LVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_5 != 0) {
    if (param_4 != 0.0) {
      if (param_6 != '\0') {
        puVar1 = *(undefined4 **)(param_1 + 0x14);
        if (puVar1 != (undefined4 *)0x0) {
          LVar2 = InterlockedDecrement(puVar1 + 1);
          if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *(undefined4 *)(param_1 + 0x14) = 0;
        }
        FUN_00959d60(&DAT_00b3f9a8,&DAT_00b3f9a8,0);
      }
      uVar3 = FUN_0047fbd0(param_1,param_2,param_3,param_4,param_5);
      return uVar3;
    }
  }
  return 0;
}



undefined1 FUN_00481920(int param_1,int param_2,float param_3,undefined4 param_4,char param_5)

{
  ushort *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined1 *puVar13;
  undefined1 local_11d;
  float local_118;
  float local_114;
  uint local_110;
  undefined **local_10c;
  int local_108;
  void *local_104;
  undefined4 local_100;
  float local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  float local_dc;
  int local_d8;
  int local_d4;
  uint local_d0 [2];
  float local_c8;
  undefined1 local_c4 [12];
  undefined1 local_b8 [12];
  undefined4 local_ac [9];
  undefined1 local_88 [36];
  undefined1 local_64 [36];
  undefined1 local_40 [52];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af63b;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_108 = 0x25;
  uVar9 = 0;
  local_10c = &PTR_FUN_00a3d36c;
  local_100 = 0;
  local_104 = (void *)FUN_00401f00(0x94,uVar4);
  _memset(local_104,0,local_108 * 4);
  local_10c = &PTR_FUN_00a3d6c8;
  local_4 = 0;
  local_11d = 0;
  if (((param_1 != 0) && (param_2 != 0)) && (param_1 != param_2)) {
    iVar5 = *(int *)(param_1 + 0xb4);
    local_d4 = *(int *)(iVar5 + 0x1c);
    local_e8 = *(int *)(iVar5 + 0x20);
    local_110 = (uint)*(ushort *)(iVar5 + 8);
    if (((local_d4 != 0) && (local_e8 != 0)) && (local_110 != 0)) {
      iVar5 = *(int *)(param_2 + 0xb4);
      local_d8 = *(int *)(iVar5 + 0x1c);
      local_ec = *(int *)(iVar5 + 0x20);
      uVar4 = (uint)*(ushort *)(iVar5 + 8);
      if (((local_d8 != 0) && (local_ec != 0)) &&
         ((uVar4 != 0 && (iVar5 = FUN_004802e0(param_1), local_f0 = iVar5, iVar5 != 0)))) {
        local_f4 = FUN_004802e0(param_2);
        if (local_f4 != 0) {
          FUN_00718a80(local_40);
          iVar5 = param_1 + 100;
          puVar13 = local_64;
          FUN_007103c0(local_88);
          puVar6 = (undefined4 *)FUN_007100a0(puVar13,iVar5);
          local_114 = 3.4028235e+38;
          puVar7 = local_ac;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          if (uVar4 != 0) {
            local_f8 = local_f4;
            do {
              local_118 = param_3;
              if (NAN(param_3) || 0.0 < param_3 == (param_3 == 0.0)) {
                local_118 = 3.4028235e+38;
              }
              uVar11 = 0;
              uVar10 = local_110;
              iVar5 = local_f0;
              if (local_110 != 0) {
                do {
                  FUN_004121a0(local_c4,iVar5);
                  fVar12 = (float10)FUN_00404c90();
                  local_fc = (float)fVar12;
                  if (local_fc < local_118) {
                    uVar10 = uVar11;
                    local_118 = local_fc;
                  }
                  if (local_fc < local_114) {
                    local_114 = local_fc;
                  }
                  uVar11 = uVar11 + 1;
                  iVar5 = iVar5 + 0xc;
                } while (uVar11 < local_110);
                if (uVar10 < local_110) {
                  local_dc = local_118;
                  cVar3 = FUN_0047db90(uVar10,local_d0);
                  uVar11 = uVar4;
                  if (((cVar3 == '\0') ||
                      (cVar3 = FUN_0047df40(local_118,local_c8,0x3a83126f), uVar11 = local_d0[0],
                      cVar3 != '\0')) || (uVar11 = uVar4, local_118 < local_c8)) {
                    FUN_0047dad0(uVar10,uVar9,uVar11,local_dc);
                  }
                }
              }
              local_f8 = local_f8 + 0xc;
              uVar9 = uVar9 + 1;
            } while (uVar9 < uVar4);
          }
          local_114 = (float)FUN_006a9030();
          if (local_114 != 0.0) {
            local_11d = 1;
            do {
              FUN_0047dbf0(&local_114,&local_fc,&local_e4);
              iVar5 = (int)local_fc * 0xc;
              puVar7 = (undefined4 *)FUN_007101f0(local_c4,local_e8 + iVar5);
              iVar2 = local_e4 * 0xc;
              puVar6 = (undefined4 *)(iVar2 + local_ec);
              *puVar6 = *puVar7;
              puVar6[1] = puVar7[1];
              puVar6[2] = puVar7[2];
              FUN_0043f350();
              uVar9 = local_e0;
              if (local_e0 < uVar4) {
                puVar7 = (undefined4 *)(local_ec + local_e0 * 0xc);
                *puVar7 = *puVar6;
                puVar7[1] = puVar6[1];
                puVar7[2] = puVar6[2];
              }
              if (param_5 != '\0') {
                if (DAT_00b34408 != param_1) {
                  uVar8 = FUN_0047da10(local_d0,0x41200000,local_e8 + iVar5);
                  FUN_004121d0(uVar8);
                }
                iVar5 = local_d8;
                puVar7 = (undefined4 *)(iVar2 + local_d8);
                uVar8 = FUN_0047da10(local_b8,0x41200000,puVar6);
                FUN_004121d0(uVar8);
                if (uVar9 < uVar4) {
                  puVar6 = (undefined4 *)(iVar5 + uVar9 * 0xc);
                  *puVar6 = *puVar7;
                  puVar6[1] = puVar7[1];
                  puVar6[2] = puVar7[2];
                }
              }
            } while (local_114 != 0.0);
            if (param_5 != '\0') {
              puVar1 = (ushort *)(*(int *)(param_1 + 0xb4) + 0x2e);
              *puVar1 = *puVar1 | 3;
            }
            puVar1 = (ushort *)(*(int *)(param_2 + 0xb4) + 0x2e);
            *puVar1 = *puVar1 | 3;
          }
          FUN_00401f20(local_f0);
          FUN_00401f20(local_f4);
          local_4 = 0xffffffff;
          DAT_00b34408 = param_1;
          FUN_00481820();
          goto LAB_00481a66;
        }
        FUN_00401f20(iVar5);
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00481820();
  local_11d = 0;
LAB_00481a66:
  *unaff_FS_OFFSET = local_c;
  return local_11d;
}



void FUN_00481dc0(byte param_1)

{
  FUN_00481820();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00481de0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3d718;
  return;
}



void FUN_00481df0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3d718;
  return;
}



void FUN_00481e00(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0xffffd8f0;
  *(undefined4 *)(in_ECX + 4) = 0xffffd8f0;
  return;
}



void FUN_00481e10(void)

{
  int *in_ECX;
  
                    /* WARNING: Could not recover jumptable at 0x00481e15. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*in_ECX + 8))();
  return;
}



void FUN_00481e20(void)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_ECX[3];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          (**(code **)(*in_ECX + 0x18))(uVar2,uVar3);
          uVar3 = uVar3 + 1;
        } while (uVar3 < (uint)in_ECX[3]);
      }
      uVar1 = in_ECX[3];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



void FUN_00481e60(uint param_1,uint param_2)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  in_ECX[1] = in_ECX[1] + param_1;
  in_ECX[2] = in_ECX[2] + param_2;
  if (((param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f) < (uint)in_ECX[3]) &&
     ((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f) < (uint)in_ECX[3])) {
    while (param_1 != 0) {
      uVar2 = 0;
      if ((int)param_1 < 0) {
        if (in_ECX[3] != 0) {
          do {
            iVar1 = in_ECX[3];
            (**(code **)(*in_ECX + 0x18))(iVar1 + -1,uVar2);
            iVar1 = iVar1 + -1;
            while (iVar1 != 0) {
              (**(code **)(*in_ECX + 0x20))(iVar1 + -1,uVar2,iVar1,uVar2);
              iVar1 = iVar1 + -1;
            }
            (**(code **)(*in_ECX + 0x1c))(0,uVar2);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)in_ECX[3]);
        }
        param_1 = param_1 + 1;
      }
      else {
        if (in_ECX[3] != 0) {
          do {
            uVar3 = 0;
            (**(code **)(*in_ECX + 0x18))(0,uVar2);
            uVar4 = uVar3;
            if (in_ECX[3] != 1) {
              do {
                uVar3 = uVar4 + 1;
                (**(code **)(*in_ECX + 0x20))(uVar3,uVar2,uVar4,uVar2);
                uVar4 = uVar3;
              } while (uVar3 < in_ECX[3] - 1U);
            }
            (**(code **)(*in_ECX + 0x1c))(uVar3,uVar2);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)in_ECX[3]);
        }
        param_1 = param_1 - 1;
      }
    }
    while (param_2 != 0) {
      if ((int)param_2 < 0) {
        uVar2 = 0;
        if (in_ECX[3] != 0) {
          do {
            iVar1 = in_ECX[3];
            (**(code **)(*in_ECX + 0x18))(uVar2,iVar1 + -1);
            iVar1 = iVar1 + -1;
            while (iVar1 != 0) {
              (**(code **)(*in_ECX + 0x20))(uVar2,iVar1 + -1,uVar2,iVar1);
              iVar1 = iVar1 + -1;
            }
            (**(code **)(*in_ECX + 0x1c))(uVar2,0);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)in_ECX[3]);
        }
        param_2 = param_2 + 1;
      }
      else {
        uVar2 = 0;
        if (in_ECX[3] != 0) {
          do {
            uVar3 = 0;
            (**(code **)(*in_ECX + 0x18))(uVar2,0);
            uVar4 = uVar3;
            if (in_ECX[3] != 1) {
              do {
                uVar3 = uVar4 + 1;
                (**(code **)(*in_ECX + 0x20))(uVar2,uVar3,uVar2,uVar4);
                uVar4 = uVar3;
              } while (uVar3 < in_ECX[3] - 1U);
            }
            (**(code **)(*in_ECX + 0x1c))(uVar2,uVar3);
            uVar2 = uVar2 + 1;
          } while (uVar2 < (uint)in_ECX[3]);
        }
        param_2 = param_2 - 1;
      }
    }
    return;
  }
  (**(code **)(*in_ECX + 8))();
  return;
}



undefined4 FUN_00482050(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = in_ECX[1];
  iVar2 = in_ECX[2];
  (**(code **)(*in_ECX + 0x14))(param_1 - iVar1,param_2 - iVar2);
  if ((param_1 - iVar1 == 0) && (param_2 - iVar2 == 0)) {
    return 0;
  }
  return 1;
}



void FUN_004820f0(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xe0) = *param_1;
  *(undefined4 *)(in_ECX + 0xe4) = param_1[1];
  uVar1 = param_1[2];
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  *(undefined4 *)(in_ECX + 0xe8) = uVar1;
  return;
}



void FUN_00482120(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xec) = *param_1;
  *(undefined4 *)(in_ECX + 0xf0) = param_1[1];
  uVar1 = param_1[2];
  *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + 1;
  *(undefined4 *)(in_ECX + 0xf4) = uVar1;
  return;
}



int FUN_00482150(int param_1,int param_2)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0xc) * param_1 + param_2) * 8;
}



void FUN_00482170(int param_1,int param_2,int param_3)

{
  int *in_ECX;
  
  if (param_3 != 0) {
    *(int *)(in_ECX[4] + (in_ECX[3] * param_1 + param_2) * 8) = param_3;
    FUN_0049a000(param_3);
    return;
  }
  (**(code **)(*in_ECX + 0x1c))(param_1,param_2);
  return;
}



undefined4 FUN_004821b0(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0xc) * param_1 + param_2) * 8);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(char *)(iVar1 + 0x26) == '\x06');
  }
  return 0;
}



void FUN_00482200(int param_1,int param_2)

{
  int *in_ECX;
  
  if (*(int *)(in_ECX[4] + (in_ECX[3] * param_1 + param_2) * 8) != 0) {
    FUN_004d6450();
    (**(code **)(*in_ECX + 0x1c))(param_1,param_2);
  }
  return;
}



void FUN_00482310(void)

{
  int *piVar1;
  uint uVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  if (*(char *)(in_ECX + 0x20) == '\0') {
    uVar2 = *(uint *)(in_ECX + 0xc);
    uVar3 = 0;
    if (uVar2 != 0) {
      do {
        uVar4 = 0;
        do {
          piVar1 = (int *)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0xc) * uVar3 + uVar4) * 8);
          if ((piVar1 != (int *)0x0) && (*piVar1 != 0)) {
            FUN_004ce3c0();
            FUN_004c5640();
            FUN_004d4d00();
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
    }
    FUN_0049a200();
    *(undefined1 *)(in_ECX + 0x20) = 1;
  }
  return;
}



void FUN_00482390(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int in_ECX;
  
  piVar1 = (int *)(*(int *)(in_ECX + 0x10) + (*(int *)(in_ECX + 0xc) * param_2 + param_3) * 8);
  if (*piVar1 != 0) {
    FUN_004d63a0(param_1);
    FUN_0049a000(*piVar1);
  }
  return;
}



uint FUN_004823d0(undefined4 param_1)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar2 = FUN_004ccce0(param_1);
  uVar1 = *(uint *)(in_ECX + 0xc);
  DAT_00b3440c = DAT_00b3440c == '\0';
  uVar5 = 0;
  if (uVar1 != 0) {
    do {
      uVar4 = 0;
      do {
        if ((((uVar5 == 0) || (uVar4 == 0)) || (uVar5 == uVar1 - 1)) || (uVar4 == uVar1 - 1)) {
          bVar6 = ((uVar4 ^ uVar5) & 1) == 0;
          if (DAT_00b3440c != '\0') {
            bVar6 = !bVar6;
          }
          uVar2 = (uint)bVar6;
          if (bVar6 != false) goto LAB_00482434;
        }
        else {
LAB_00482434:
          iVar3 = *(int *)(in_ECX + 0xc) * uVar5 + uVar4;
          uVar2 = *(int *)(in_ECX + 0x10) + iVar3 * 8;
          if (*(int *)(*(int *)(in_ECX + 0x10) + iVar3 * 8) != 0) {
            uVar2 = FUN_004d4970(param_1);
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return uVar2;
}



void FUN_00482530(int param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar1 = in_ECX[3];
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          if (*(int *)(in_ECX[4] + (uVar1 * uVar2 + uVar3) * 8) == param_1) {
            (**(code **)(*in_ECX + 0x1c))(uVar2,uVar3);
          }
          uVar1 = in_ECX[3];
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar1 = in_ECX[3];
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return;
}



void FUN_00482590(void)

{
  undefined4 *in_ECX;
  
  FUN_006ffd30();
  *in_ECX = &PTR_FUN_00a3d744;
  in_ECX[7] = 0;
  in_ECX[8] = 0xffffffff;
  *(undefined2 *)(in_ECX + 6) = 0x4180;
  return;
}



void FUN_004825d0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3d744;
  FUN_006ffd70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00482670(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = DAT_00b4310c;
  if (*(int *)(in_ECX + 0x24) != 0) {
    if (DAT_00b4310c != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(DAT_00b4310c + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      DAT_00b4310c = (undefined4 *)0x0;
    }
    FUN_007c1ee0(*(undefined4 *)(in_ECX + 0x24));
    puVar1 = *(undefined4 **)(in_ECX + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 *)(in_ECX + 0x24) = 0;
    }
    DAT_00b06a28 = 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00483224) */
/* WARNING: Removing unreachable block (ram,0x0048322e) */
/* WARNING: Removing unreachable block (ram,0x00482cdb) */
/* WARNING: Removing unreachable block (ram,0x00482ce5) */
/* WARNING: Removing unreachable block (ram,0x00482d6e) */
/* WARNING: Removing unreachable block (ram,0x00482d78) */
/* WARNING: Removing unreachable block (ram,0x00483289) */
/* WARNING: Removing unreachable block (ram,0x00483293) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004826f0(void)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  LONG LVar17;
  int *piVar18;
  int iVar19;
  int in_ECX;
  int *piVar20;
  code *pcVar21;
  int *unaff_FS_OFFSET;
  undefined4 uStack_114;
  undefined4 *local_108;
  uint local_104;
  float local_100;
  float local_fc;
  int *local_f4;
  uint local_e8;
  int local_e4;
  int local_e0;
  int *local_dc;
  undefined4 *local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  int *local_c0;
  uint local_bc;
  uint local_b8;
  int *piStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined1 uStack_a8;
  undefined1 uStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af804;
  local_c = *unaff_FS_OFFSET;
  uVar9 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_108 = (undefined4 *)0x0;
  local_dc = (int *)0x0;
  local_f4 = (int *)0x0;
  local_d8 = (undefined4 *)0x0;
  local_4._0_1_ = 5;
  local_4._1_3_ = 0;
  local_cc = in_ECX;
  FUN_0070de60(0);
  puVar12 = DAT_00b4310c;
  uVar7 = DAT_00b42f40;
  local_d4 = 0;
  local_c8 = 0;
  local_d0 = *(uint *)(in_ECX + 0xc);
  local_c4 = 0;
  local_c0 = (int *)0x0;
  local_4._0_1_ = 6;
  uVar8 = (undefined1)local_4;
  local_4._0_1_ = 6;
  local_bc = 0;
  uStack_114 = CONCAT13(1,(undefined3)uStack_114);
  bVar4 = true;
  DAT_00b06a28 = 0;
  if (DAT_00b06cbc == '\0') goto LAB_00483301;
  iVar10 = *(int *)(in_ECX + 0xc) << 0xc;
  DAT_00b44ef4 = (float)iVar10;
  if (iVar10 < 0) {
    DAT_00b44ef4 = DAT_00b44ef4 + 4.2949673e+09;
  }
  fVar3 = 2048.0 - DAT_00b44ef4 * 0.5;
  DAT_00b44ee8 = fVar3 + *(float *)(in_ECX + 0x14);
  DAT_00b44eec = fVar3 + *(float *)(in_ECX + 0x18);
  DAT_00b42f40 = DAT_00b42f40 | 0x20;
  if ((local_d0 == 0) || (DAT_00b350d8 == (int *)0x0)) {
    DAT_00b42f40 = uVar7 & 0xffffffdf;
    if (DAT_00b4310c != (undefined4 *)0x0) {
      local_4._0_1_ = uVar8;
      LVar17 = InterlockedDecrement(DAT_00b4310c + 1);
      if ((LVar17 == 0) && (puVar12 != (undefined4 *)0x0)) {
        (**(code **)*puVar12)(1,uVar9);
      }
      DAT_00b4310c = (undefined4 *)0x0;
    }
    goto LAB_00483301;
  }
  fVar3 = (float)(int)local_d0;
  if ((int)local_d0 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  fVar3 = fVar3 * 0.5 * -1.0;
  iVar10 = FUN_00401f00(0xdc);
  local_4._0_1_ = 7;
  if (iVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_0070b780(0);
  }
  local_4._0_1_ = 6;
  FUN_0075fa90(uVar11);
  puVar12 = (undefined4 *)FUN_00401f00(0x30);
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = 0;
  puVar12[3] = 0x3f800000;
  puVar12[4] = 0;
  puVar12[5] = 0;
  puVar12[6] = 0x3f800000;
  puVar12[7] = 0x3f800000;
  puVar12[8] = 0;
  puVar12[9] = 0;
  puVar12[10] = 0x3f800000;
  puVar12[0xb] = 0;
  puVar13 = (undefined4 *)FUN_00401f00(0x30);
  puVar13[9] = DAT_00b258e8;
  puVar13[10] = DAT_00b258ec;
  uVar5 = DAT_00b258f0;
  puVar13[0xb] = DAT_00b258f0;
  uVar11 = puVar13[9];
  uVar1 = puVar13[10];
  puVar13[6] = uVar11;
  puVar13[3] = uVar11;
  *puVar13 = uVar11;
  puVar13[7] = uVar1;
  puVar13[4] = uVar1;
  puVar13[1] = uVar1;
  puVar13[8] = uVar5;
  puVar13[5] = uVar5;
  puVar13[2] = uVar5;
  puVar14 = (undefined4 *)FUN_00401f00(0x20);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14[2] = 0x3f800000;
  puVar14[3] = 0;
  puVar14[4] = 0x3f800000;
  puVar14[5] = 0x3f800000;
  puVar14[6] = 0;
  puVar14[7] = 0x3f800000;
  puVar15 = (undefined2 *)FUN_00401f00(8);
  *puVar15 = 1;
  puVar15[1] = 0;
  puVar15[2] = 2;
  puVar15[3] = 3;
  puVar16 = (undefined2 *)FUN_00401f00(2);
  *puVar16 = 4;
  iVar10 = FUN_00401f00(0x50);
  local_4._0_1_ = 8;
  if (iVar10 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_00719cb0(4,puVar12,puVar13,0,puVar14,1,0,2,1,puVar16,puVar15);
  }
  local_4 = CONCAT31(local_4._1_3_,6);
  FUN_0075fa90(uVar11);
  local_104 = 0;
  local_100 = fVar3;
  if (local_d0 == 0) {
LAB_00482ca7:
    iVar10 = FUN_004a41e0();
    if (**(int **)(iVar10 + 0x20) == 0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined4 *)(**(int **)(iVar10 + 0x20) + 8);
    }
    FUN_00441850(uVar11);
    pcVar21 = InterlockedDecrement_exref;
    local_4._0_1_ = 2;
    if ((local_f4 != (int *)0x0) && (LVar17 = InterlockedDecrement(local_f4 + 1), LVar17 == 0)) {
      puVar12 = (undefined4 *)*local_f4;
LAB_00483273:
      (*(code *)*puVar12)(1);
    }
  }
  else {
    do {
      local_e8 = 0;
      piVar20 = local_f4;
      puVar12 = local_108;
      local_fc = fVar3;
      do {
        if (puVar12 != (undefined4 *)0x0) {
          LVar17 = InterlockedDecrement(puVar12 + 1);
          if (LVar17 == 0) {
            (**(code **)*puVar12)(1);
          }
          puVar12 = (undefined4 *)0x0;
          local_108 = (undefined4 *)0x0;
        }
        if (*(int *)(*(int *)(local_cc + 0x10) +
                    (*(int *)(local_cc + 0xc) * local_104 + local_e8) * 8) != 0) {
          iVar10 = FUN_004caff0(&local_e4,&local_e0);
          if (((local_e4 != 0) && (local_e0 != 0)) && (*(int *)(local_e0 + 4) != 0)) {
            piVar18 = (int *)(**(code **)(**(int **)(local_e4 + 0x24) + 0x14))();
            (**(code **)(*piVar18 + 0x50))(piVar18,0);
            *(undefined4 *)(local_e0 + 4) = 0;
          }
          if (iVar10 == 1) {
            if (local_e4 != 0) {
              iVar10 = FUN_00401f00(0x30);
              local_4._0_1_ = 9;
              if (iVar10 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_007043b0();
              }
              local_4 = CONCAT31(local_4._1_3_,6);
              FUN_0075fa90(uVar11);
              FUN_004057b0(local_e4);
              FUN_00405870(0);
              uStack_114 = uStack_114 & 0xffffff;
              puVar12 = local_108;
LAB_00482bab:
              bVar4 = false;
            }
          }
          else if (iVar10 == 2) {
            puVar13 = (undefined4 *)FUN_004a41e0();
            if (puVar12 != puVar13) {
              if ((puVar12 != (undefined4 *)0x0) &&
                 (LVar17 = InterlockedDecrement(puVar12 + 1), LVar17 == 0)) {
                (**(code **)*puVar12)(1);
              }
              puVar12 = puVar13;
              local_108 = puVar13;
              if (puVar13 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar13 + 1);
              }
            }
            goto LAB_00482bab;
          }
        }
        if (puVar12 == (undefined4 *)0x0) {
          uStack_114 = uStack_114 & 0xffffff;
        }
        else {
          iVar10 = FUN_00401f00(0xc0);
          local_4._0_1_ = 10;
          if (iVar10 == 0) {
            piVar18 = (int *)0x0;
          }
          else {
            piVar18 = (int *)FUN_00719a20(0);
          }
          local_4 = CONCAT31(local_4._1_3_,6);
          if (piVar20 != piVar18) {
            if ((piVar20 != (int *)0x0) && (LVar17 = InterlockedDecrement(piVar20 + 1), LVar17 == 0)
               ) {
              (**(code **)*piVar20)(1);
            }
            piVar20 = piVar18;
            local_f4 = piVar18;
            if (piVar18 != (int *)0x0) {
              InterlockedIncrement(piVar18 + 1);
            }
          }
          piVar20[0x15] = (int)local_100;
          piVar20[0x16] = (int)local_fc;
          piVar20[0x17] = 0;
          FUN_00405680(puVar12);
          (**(code **)(_DAT_00000000 + 0x84))(piVar20,1);
        }
        puVar13 = DAT_00b4310c;
        pcVar21 = InterlockedDecrement_exref;
        local_fc = local_fc + 1.0;
        local_e8 = local_e8 + 1;
      } while (local_e8 < local_d0);
      local_100 = local_100 + 1.0;
      local_104 = local_104 + 1;
    } while (local_104 < local_d0);
    if (uStack_114._3_1_ != '\0') goto LAB_00482ca7;
    if (!bVar4) {
      iVar10 = FUN_00401f00(0xdc);
      local_4._0_1_ = 0xb;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0070b780(0);
      }
      local_4._0_1_ = 6;
      FUN_0075fa90(uVar11);
      iVar10 = FUN_00401f00(0x124);
      local_4._0_1_ = 0xc;
      if (iVar10 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_0070d590();
      }
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0075fa90(uVar11);
      puVar12 = local_d8;
      piVar20 = local_dc;
      (**(code **)(*local_dc + 0x84))(local_d8,1);
      local_108 = (undefined4 *)0x0;
      piVar20[0x15] = 0;
      piVar20[0x16] = 0;
      piVar20[0x17] = 0x3f800000;
      FUN_00707370(0,1);
      FUN_0070c340(&DAT_00b3f9a8,&DAT_00b258dc);
      FUN_00707370(0,1);
      FUN_00707370(0,1);
      local_c0 = local_f4;
      piStack_b4 = local_f4;
      uStack_a8 = 1;
      local_bc = uStack_114;
      local_b8 = uStack_114;
      uStack_b0 = 0x3f800000;
      uStack_ac = 0x40000000;
      FUN_0070c190(&local_c0);
      iVar19 = FUN_00401f00(0x114);
      local_c._0_1_ = 0xd;
      if (iVar19 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_00719760();
      }
      local_c._0_1_ = 6;
      FUN_0075fa90(uVar11);
      piVar18 = local_dc;
      local_dc[0x38] = DAT_00b25ac4;
      local_dc[0x39] = DAT_00b25ac8;
      iVar19 = DAT_00b25acc;
      local_dc[0x2e] = local_dc[0x2e] + 1;
      local_dc[0x3a] = iVar19;
      local_dc[0x3b] = DAT_00b25ac4;
      local_dc[0x3c] = DAT_00b25ac8;
      iVar19 = DAT_00b25acc;
      local_dc[0x2e] = local_dc[0x2e] + 1;
      local_dc[0x3d] = iVar19;
      FUN_00708e40(0);
      iVar19 = FUN_00401f00(0x5c);
      local_c._0_1_ = 0xe;
      if (iVar19 == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = FUN_007095a0();
      }
      *(int *)(iVar19 + 0x1c) = DAT_00b25ac4;
      *(int *)(iVar19 + 0x20) = DAT_00b25ac8;
      iVar6 = DAT_00b25acc;
      *(int *)(iVar19 + 0x54) = *(int *)(iVar19 + 0x54) + 1;
      iVar2 = *(int *)(iVar19 + 0x54);
      *(int *)(iVar19 + 0x24) = iVar6;
      *(int *)(iVar19 + 0x28) = DAT_00b25ac4;
      *(int *)(iVar19 + 0x2c) = DAT_00b25ac8;
      iVar6 = DAT_00b25acc;
      *(int *)(iVar19 + 0x54) = iVar2 + 1;
      *(int *)(iVar19 + 0x30) = iVar6;
      *(int *)(iVar19 + 0x40) = DAT_00b25ac4;
      *(int *)(iVar19 + 0x44) = DAT_00b25ac8;
      iVar6 = DAT_00b25acc;
      *(int *)(iVar19 + 0x54) = iVar2 + 2;
      local_c._0_1_ = 6;
      *(int *)(iVar19 + 0x48) = iVar6;
      FUN_00405680(iVar19);
      puVar13 = (undefined4 *)FUN_00401f00(0x1c);
      local_c._0_1_ = 0xf;
      if (puVar13 == (undefined4 *)0x0) {
        puVar13 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar13 = &PTR_FUN_00a2fd04;
        *(undefined2 *)(puVar13 + 6) = 8;
      }
      *(ushort *)(puVar13 + 6) = *(ushort *)(puVar13 + 6) & 0xffc7;
      local_c._0_1_ = 6;
      FUN_00405680(puVar13);
      iVar19 = FUN_00401f00(0x24);
      local_c._0_1_ = 0x10;
      if (iVar19 == 0) {
        iVar19 = 0;
      }
      else {
        iVar19 = FUN_00482590();
      }
      *(ushort *)(iVar19 + 0x18) = *(ushort *)(iVar19 + 0x18) | 0xc00;
      local_c = CONCAT31(local_c._1_3_,6);
      FUN_00405680(iVar19);
      if (*(int *)(local_d4 + 0x24) == 0) {
        uVar11 = FUN_007c23c0(DAT_00b3f928,0xe);
        FUN_0075fa90(uVar11);
      }
      (**(code **)(*DAT_00b350d8 + 0x68))(&local_d0);
      (**(code **)(*DAT_00b350d8 + 0x60))(&DAT_00b25ad0);
      FUN_00707980();
      FUN_00707610();
      FUN_00707370(0,1);
      FUN_00707370(0,1);
      FUN_00707370(0,1);
      iVar19 = FUN_007b7650();
      *(undefined1 *)(iVar19 + 0x21e0) = 0;
      FUN_0070df30(0);
      uStack_14 = 0x11;
      uVar11 = FUN_007d6fe0();
      FUN_007d7280(7,uVar11);
      FUN_0070c0b0(puVar12,iVar10,&uStack_ac,0);
      FUN_007d72d0();
      uVar11 = FUN_00405a30();
      FUN_00441850(uVar11);
      iVar10 = FUN_007b7650();
      *(undefined1 *)(iVar10 + 0x21e0) = 1;
      (**(code **)(*DAT_00b350d8 + 0x60))(&local_d8);
      local_4._0_1_ = 6;
      FUN_0070dfa0();
      local_4 = CONCAT31(local_4._1_3_,5);
      LVar17 = InterlockedDecrement(piVar18 + 1);
      if (LVar17 == 0) {
        (**(code **)*piVar18)(1);
      }
      pcVar21 = InterlockedDecrement_exref;
      local_4._0_1_ = 4;
      if ((puVar12 != (undefined4 *)0x0) &&
         (LVar17 = InterlockedDecrement(puVar12 + 1), LVar17 == 0)) {
        (**(code **)*puVar12)(1);
      }
      local_4._0_1_ = 2;
      if ((local_f4 != (int *)0x0) && (LVar17 = InterlockedDecrement(local_f4 + 1), LVar17 == 0)) {
        (**(code **)*local_f4)(1);
      }
      local_4._0_1_ = 1;
      LVar17 = InterlockedDecrement(piVar20 + 1);
      if (LVar17 != 0) goto LAB_00483279;
      puVar12 = (undefined4 *)*piVar20;
      goto LAB_00483273;
    }
    DAT_00b42f40 = DAT_00b42f40 & 0xffffffdf;
    if (DAT_00b4310c != (undefined4 *)0x0) {
      LVar17 = InterlockedDecrement(DAT_00b4310c + 1);
      if ((LVar17 == 0) && (puVar13 != (undefined4 *)0x0)) {
        (**(code **)*puVar13)(1);
      }
      DAT_00b4310c = (undefined4 *)0x0;
    }
    local_4._0_1_ = 2;
    if ((local_f4 != (int *)0x0) && (LVar17 = InterlockedDecrement(local_f4 + 1), LVar17 == 0)) {
      puVar12 = (undefined4 *)*local_f4;
      goto LAB_00483273;
    }
  }
LAB_00483279:
  local_4 = 0xffffffff;
  if ((local_108 != (undefined4 *)0x0) && (iVar10 = (*pcVar21)(local_108 + 1), iVar10 == 0)) {
    (**(code **)*local_108)(1);
  }
LAB_00483301:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483320(void)

{
  if (DAT_00b06a2c < 5) {
    DAT_00b06a2c = 5;
    return;
  }
  if ((DAT_00b06a2c & 1) == 0) {
    DAT_00b06a2c = DAT_00b06a2c + 1;
  }
  return;
}



void FUN_00483350(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  void *_Dst;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af843;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00481de0(uVar3);
  *in_ECX = &PTR_FUN_00a3d79c;
  in_ECX[9] = 0;
  local_4 = 1;
  if (DAT_00b06a2c < 5) {
    DAT_00b06a2c = 5;
  }
  else if ((DAT_00b06a2c & 1) == 0) {
    DAT_00b06a2c = DAT_00b06a2c + 1;
  }
  uVar3 = DAT_00b06a2c;
  in_ECX[3] = DAT_00b06a2c;
  lVar2 = (ulonglong)(uVar3 * uVar3) * 8;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)lVar2 >> 0x20) != 0) | (uint)lVar2);
  in_ECX[4] = _Dst;
  _memset(_Dst,0,in_ECX[3] * in_ECX[3] * 8);
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  DAT_00b06a28 = 1;
  puVar1 = (undefined4 *)in_ECX[9];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[9] = 0;
  }
  *(undefined1 *)(in_ECX + 8) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483460(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  uint uStack_14;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009af873;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d79c;
  local_4 = 1;
  FUN_00481e10(uVar4);
  if (*(char *)(DAT_00b33a98 + 0xcd4) != '\0') {
    FUN_004ca390();
  }
  FUN_00482670();
  uStack_14 = 0;
  if (in_ECX[3] != 0) {
    do {
      uVar4 = 0;
      if (in_ECX[3] != 0) {
        do {
          iVar1 = in_ECX[4];
          iVar5 = in_ECX[3] * uStack_14 + uVar4;
          iVar2 = *(int *)(iVar1 + 4 + iVar5 * 8);
          if (iVar2 != 0) {
            FUN_0049e500();
            FUN_00401f20(iVar2);
          }
          uVar4 = uVar4 + 1;
          *(undefined4 *)(iVar1 + iVar5 * 8 + 4) = 0;
        } while (uVar4 < (uint)in_ECX[3]);
      }
      uStack_14 = uStack_14 + 1;
    } while (uStack_14 < (uint)in_ECX[3]);
  }
  FUN_00401f20(in_ECX[4]);
  puVar3 = (undefined4 *)in_ECX[9];
  local_4 = local_4 & 0xffffff00;
  if (((puVar3 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar3 + 1), LVar6 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  local_4 = 0xffffffff;
  FUN_00481df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483570(byte param_1)

{
  FUN_00483460();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483590(int param_1)

{
  if (param_1 != 0) {
    FUN_004a01b0(6);
    FUN_004a02a0(_DAT_00b34410,_DAT_00b34414);
  }
  return;
}



void FUN_004835d0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = FUN_004ef1a0();
    if (iVar1 != 0) {
      DAT_00b34420 = 1;
    }
    iVar1 = FUN_004ef1a0();
    if (iVar1 == 0) {
      DAT_00b34420 = 0;
    }
  }
  return;
}



void FUN_00483600(void)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  if (puVar1 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar1 + 1);
    if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_00483630(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  iVar1 = (in_ECX[3] * param_1 + param_2) * 0x10 + in_ECX[4];
  uVar2 = FUN_004ef1d0(*(undefined2 *)(iVar1 + 8),*(undefined2 *)(iVar1 + 0xc));
  FUN_007b3a40(uVar2);
  (**(code **)(*in_ECX + 0x1c))(param_1,param_2);
  return;
}



void FUN_00483680(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  LONG LVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)
           ((*(int *)(in_ECX + 0xc) * (int)param_1 + param_2) * 0x10 + *(int *)(in_ECX + 0x10));
  iVar1 = *(int *)(puVar5 + 4);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 0x88))(&param_1,iVar1);
      puVar2 = param_1;
      if (param_1 != (undefined4 *)0x0) {
        LVar3 = InterlockedDecrement(param_1 + 1);
        if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
          (**(code **)*puVar2)(1);
        }
      }
    }
    puVar2 = *(undefined4 **)(puVar5 + 4);
    if (puVar2 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar2 + 1);
      if ((LVar3 == 0) && (puVar2 != (undefined4 *)0x0)) {
        (**(code **)*puVar2)(1);
      }
      *(undefined4 *)(puVar5 + 4) = 0;
    }
    uVar4 = FUN_004ef1d0(*(undefined2 *)(puVar5 + 8),*(undefined2 *)(puVar5 + 0xc));
    FUN_004b27f0(uVar4);
  }
  if (DAT_00b35b8c != 0) {
    FUN_004bd380(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 0xc));
  }
  *puVar5 = 0;
  *(undefined4 *)(puVar5 + 8) = 0;
  *(undefined4 *)(puVar5 + 0xc) = 0;
  puVar5[1] = 0;
  return;
}



void FUN_00483750(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = *(uint *)(in_ECX + 0xc);
  uVar4 = uVar1 >> 1;
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar6 = -uVar4;
    do {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          iVar2 = (uVar1 * uVar5 + uVar3) * 0x10 + *(int *)(in_ECX + 0x10);
          if ((*(int *)(iVar2 + 8) == 0) && (*(int *)(iVar2 + 0xc) == 0)) {
            *(int *)(iVar2 + 8) = *(int *)(in_ECX + 4) + iVar6;
            *(uint *)(iVar2 + 0xc) = (*(int *)(in_ECX + 8) - uVar4) + uVar3;
          }
          uVar1 = *(uint *)(in_ECX + 0xc);
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar1 = *(uint *)(in_ECX + 0xc);
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004837c0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int iVar7;
  
  iVar3 = (DAT_00b06a2c >> 1) + _DAT_00b3441c;
  iVar7 = (*(int *)(in_ECX + 0xc) * param_1 + param_2) * 0x10 + *(int *)(in_ECX + 0x10);
  fVar1 = (float)iVar3;
  if (iVar3 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  uVar4 = *(int *)(iVar7 + 8) - *(int *)(in_ECX + 4);
  uVar6 = (int)uVar4 >> 0x1f;
  iVar3 = (uVar4 ^ uVar6) - uVar6;
  fVar2 = (float)iVar3;
  uVar5 = CONCAT22((short)((uint)iVar3 >> 0x10),
                   (ushort)(fVar1 < fVar2) << 8 | (ushort)(NAN(fVar1) || NAN(fVar2)) << 10 |
                   (ushort)(fVar1 == fVar2) << 0xe);
  if (fVar1 >= fVar2) {
    uVar4 = *(int *)(iVar7 + 0xc) - *(int *)(in_ECX + 8);
    uVar6 = (int)uVar4 >> 0x1f;
    iVar3 = (uVar4 ^ uVar6) - uVar6;
    fVar2 = (float)iVar3;
    uVar5 = CONCAT22((short)((uint)iVar3 >> 0x10),
                     (ushort)(fVar2 < fVar1) << 8 | (ushort)(NAN(fVar2) || NAN(fVar1)) << 10 |
                     (ushort)(fVar2 == fVar1) << 0xe);
    if (fVar2 < fVar1 || (fVar2 == fVar1) != 0) {
      return CONCAT31((int3)((uint)uVar5 >> 8),1);
    }
  }
  return uVar5;
}



undefined4 FUN_00483850(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00b06aa0;
  if (DAT_00b34420 == '\0') {
    uVar1 = DAT_00b06a90;
  }
  return uVar1;
}



void FUN_00483870(int param_1,int param_2,undefined1 *param_3)

{
  int iVar1;
  int *in_ECX;
  
  if (param_3 != (undefined1 *)0x0) {
    iVar1 = (in_ECX[3] * param_1 + param_2) * 0x10;
    *(undefined1 *)(iVar1 + in_ECX[4]) = *param_3;
    *(undefined4 *)(in_ECX[4] + 8 + iVar1) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(in_ECX[4] + 0xc + iVar1) = *(undefined4 *)(param_3 + 0xc);
    FUN_0055e2a0(param_3 + 4);
    *(undefined1 *)(in_ECX[4] + 1 + iVar1) = param_3[1];
    return;
  }
  (**(code **)(*in_ECX + 0x1c))(param_1,param_2);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004838f0(void)

{
  int iVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  LONG LVar6;
  undefined4 *in_ECX;
  uint *puVar7;
  uint uVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009af8d3;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00481de0(uVar4);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a3d7e0;
  FUN_00483320();
  iVar1 = DAT_00b06a2c + DAT_00b06a90 * 2;
  DAT_00b34418 = DAT_00b06a90;
  _DAT_00b3441c = DAT_00b06a98;
  in_ECX[3] = iVar1;
  uVar8 = iVar1 * iVar1;
  uVar4 = -(uint)((int)((ulonglong)uVar8 * 0x10 >> 0x20) != 0) | (uint)((ulonglong)uVar8 * 0x10);
  puVar5 = (uint *)FUN_00401f00(-(uint)(0xfffffffb < uVar4) | uVar4 + 4);
  local_4._0_1_ = 1;
  if (puVar5 == (uint *)0x0) {
    puVar7 = (uint *)0x0;
  }
  else {
    puVar7 = puVar5 + 1;
    *puVar5 = uVar8;
    _eh_vector_constructor_iterator_(puVar7,0x10,uVar8,FUN_006d73e0,FUN_00483600);
  }
  in_ECX[4] = puVar7;
  uVar4 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (in_ECX[3] != 0) {
    do {
      uVar8 = 0;
      if (in_ECX[3] != 0) {
        do {
          FUN_00483680(uVar4,uVar8);
          uVar8 = uVar8 + 1;
        } while (uVar8 < (uint)in_ECX[3]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)in_ECX[3]);
  }
  puVar3 = DAT_00b34424;
  if (DAT_00b34424 != (undefined4 *)0x0) {
    LVar6 = InterlockedDecrement(DAT_00b34424 + 1);
    if ((LVar6 == 0) && (puVar3 != (undefined4 *)0x0)) {
      (**(code **)*puVar3)(1);
    }
    DAT_00b34424 = (undefined4 *)0x0;
  }
  fVar2 = (float)(DAT_00b06a2c << 0xc);
  if (DAT_00b06a2c << 0xc < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  _DAT_00b34414 = (float)(DAT_00b34418 << 0xc);
  if (DAT_00b34418 << 0xc < 0) {
    _DAT_00b34414 = _DAT_00b34414 + 4.2949673e+09;
  }
  _DAT_00b34414 = _DAT_00b34414 + fVar2 * 0.5;
  _DAT_00b2c334 = _DAT_00b34414 - _DAT_00b06ab0;
  _DAT_00b2c338 = _DAT_00b06ab0;
  _DAT_00b34410 = _DAT_00b2c334;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483aa0(void)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af8f8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3d7e0;
  local_4 = 0;
  FUN_00481e10(uVar3);
  pvVar1 = (void *)in_ECX[4];
  if (pvVar1 != (void *)0x0) {
    _eh_vector_destructor_iterator_(pvVar1,0x10,*(int *)((int)pvVar1 + -4),FUN_00483600);
    FUN_00401f20((int)pvVar1 + -4);
  }
  puVar2 = DAT_00b34424;
  if (DAT_00b34424 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(DAT_00b34424 + 1);
    if ((LVar4 == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)(1);
    }
    DAT_00b34424 = (undefined4 *)0x0;
  }
  local_4 = 0xffffffff;
  FUN_00481df0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483bf0(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  LONG LVar4;
  int in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [4];
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009af928;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_18 = (undefined4 *)0x0;
  local_4 = 0;
  puVar3 = (undefined1 *)
           ((*(int *)(in_ECX + 0xc) * param_1 + param_2) * 0x10 + *(int *)(in_ECX + 0x10));
  local_1c[0] = *puVar3;
  local_14 = *(undefined4 *)(puVar3 + 8);
  local_10 = *(undefined4 *)(puVar3 + 0xc);
  puVar1 = *(undefined4 **)(puVar3 + 4);
  puVar5 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_18 = puVar1;
    InterlockedIncrement(puVar1 + 1);
    puVar5 = puVar1;
  }
  FUN_00483870(param_1,param_2,
               (*(int *)(in_ECX + 0xc) * param_3 + param_4) * 0x10 + *(int *)(in_ECX + 0x10));
  FUN_00483870(param_3,param_4,local_1c);
  local_4 = 0xffffffff;
  if (puVar5 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar5 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar5)(1,uVar2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00483cd0(char param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar2 = DAT_00b06a90;
  uVar1 = DAT_00b06a2c + DAT_00b06a90;
  uVar4 = DAT_00b06a90;
  for (uVar6 = DAT_00b06a90; uVar5 = uVar2, uVar6 < uVar1; uVar6 = uVar6 + 1) {
    do {
      iVar3 = (*(int *)(in_ECX + 0xc) * uVar6 + uVar5) * 0x10 + *(int *)(in_ECX + 0x10);
      if ((((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 4), iVar3 != 0)) && (uVar4 <= uVar6)) &&
         (((uVar6 < DAT_00b06a2c + uVar4 && (uVar4 <= uVar5)) && (uVar5 < DAT_00b06a2c + uVar4)))) {
        if (param_1 == '\0') {
          *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) & 0xfffe;
          uVar4 = DAT_00b06a90;
        }
        else {
          *(ushort *)(iVar3 + 0x18) = *(ushort *)(iVar3 + 0x18) | 1;
          uVar4 = DAT_00b06a90;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00483d60(int param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  int *in_ECX;
  uint uVar13;
  uint uVar14;
  int *unaff_FS_OFFSET;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009af95b;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b34420 == '\0') {
    _DAT_00b3441c = DAT_00b06a98;
    DAT_00b34418 = DAT_00b06a90;
  }
  else {
    _DAT_00b3441c = DAT_00b06aa8;
    DAT_00b34418 = DAT_00b06aa0;
  }
  if ((((DAT_00b43077 != '\0') && (DAT_00b34418 != 0)) &&
      ((DAT_00b09ae8 != '\0' || (DAT_00b09af0 != '\0')))) && (param_1 != 0)) {
    (**(code **)(*in_ECX + 0x10))
              (*(undefined4 *)(DAT_00b333a0 + 0x20),*(undefined4 *)(DAT_00b333a0 + 0x24),uVar6);
    FUN_00483750();
    if (DAT_00b34424 == 0) {
      piVar7 = (int *)FUN_00405790(1);
      if (piVar7 == (int *)0x0) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)(*piVar7 + 8))();
      }
      FUN_0075fa90(uVar8);
    }
    uVar9 = DAT_00b06a2c >> 1;
    uVar13 = DAT_00b34418 + uVar9;
    uVar6 = in_ECX[3];
    uStack_18 = 0;
    uStack_24 = uVar13;
    if (uVar6 != 0) {
      do {
        uStack_2c = 0;
        uStack_28 = uVar13;
        if (uVar6 != 0) {
          do {
            pcVar10 = (char *)((uVar6 * uStack_18 + uStack_2c) * 0x10 + in_ECX[4]);
            if ((((uStack_18 < DAT_00b06a90) || (DAT_00b06a2c + DAT_00b06a90 <= uStack_18)) ||
                (uStack_2c < DAT_00b06a90)) ||
               ((DAT_00b06a2c + DAT_00b06a90 <= uStack_2c || (*pcVar10 == '\0')))) {
              piVar7 = (int *)(pcVar10 + 4);
              if (*(int *)(pcVar10 + 4) != 0) {
                puVar1 = (ushort *)(*(int *)(pcVar10 + 4) + 0x18);
                *puVar1 = *puVar1 & 0xfffe;
              }
              cVar4 = FUN_004837c0(uStack_18,uStack_2c);
              if (*piVar7 == 0) {
                if (cVar4 == '\0') {
                  if (pcVar10[1] != '\0') {
                    uVar8 = FUN_004ef1d0(*(undefined2 *)(pcVar10 + 8),*(undefined2 *)(pcVar10 + 0xc)
                                        );
                    FUN_007b3a40(uVar8);
                    pcVar10[1] = '\0';
                  }
                  iVar12 = 2;
                }
                else {
LAB_00483f26:
                  iVar12 = (-(uint)(*piVar7 != 0) & 0xfffffffd) + 4;
                  pcVar10[1] = '\x01';
                }
                cVar4 = FUN_004ef2d0(1);
                if (((cVar4 != '\0') || (cVar4 = FUN_004ef2d0(2), cVar4 != '\0')) &&
                   (((cVar4 = FUN_004ef2d0(1), cVar4 != '\0' || (iVar12 != 1)) &&
                    ((cVar4 = FUN_004ef2d0(2), cVar4 != '\0' || (iVar12 != 2)))))) {
                  cVar4 = FUN_004ef2d0(1);
                  if ((cVar4 == '\0') && (iVar12 == 4)) {
                    iVar12 = 2;
                  }
                  cVar5 = FUN_004ef2d0(2);
                  cVar4 = DAT_00b09af0;
                  if ((cVar5 == '\0') && (iVar12 == 4)) {
                    iVar12 = 1;
joined_r0x0048404a:
                    if (cVar4 == '\0') goto LAB_004841b4;
                  }
                  else {
                    if (iVar12 == 2) {
                      cVar5 = FUN_004f0da0(*(undefined2 *)(pcVar10 + 8),
                                           *(undefined2 *)(pcVar10 + 0xc));
                      cVar4 = DAT_00b09ae8;
                      if (cVar5 == '\0') goto LAB_004841b4;
                      goto joined_r0x0048404a;
                    }
                    if (iVar12 == 1) goto joined_r0x0048404a;
                    if (iVar12 == 4) {
                      if (DAT_00b09ae8 == '\0') {
                        iVar12 = 1;
                      }
                      else if (DAT_00b09af0 == '\0') {
                        iVar12 = 2;
                      }
                    }
                  }
                  if ((((uStack_18 < DAT_00b06a90) || (DAT_00b06a2c + DAT_00b06a90 <= uStack_18)) ||
                      (uStack_2c < DAT_00b06a90)) ||
                     ((DAT_00b06a2c + DAT_00b06a90 <= uStack_2c || (iVar12 != 1)))) {
                    if (*piVar7 == 0) {
                      iVar11 = FUN_00401f00(0xdc);
                      uStack_4 = 0;
                      if (iVar11 == 0) {
                        uVar8 = 0;
                      }
                      else {
                        uVar8 = FUN_0070b780(0);
                      }
                      uStack_4 = 0xffffffff;
                      FUN_0075fa90(uVar8);
                    }
                    else {
                      puVar1 = (ushort *)(*piVar7 + 0x18);
                      *puVar1 = *puVar1 & 0xfffe;
                    }
                    if (((DAT_00b06a90 <= uStack_18) && (uStack_18 < DAT_00b06a2c + DAT_00b06a90))
                       && ((DAT_00b06a90 <= uStack_2c && (uStack_2c < DAT_00b06a2c + DAT_00b06a90)))
                       ) {
                      *(ushort *)(*piVar7 + 0x18) = *(ushort *)(*piVar7 + 0x18) | 1;
                      iVar12 = 2;
                    }
                    uVar14 = (uStack_24 ^ (int)uStack_24 >> 0x1f) - ((int)uStack_24 >> 0x1f);
                    uVar6 = (uStack_28 ^ (int)uStack_28 >> 0x1f) - ((int)uStack_28 >> 0x1f);
                    if (uVar6 < uVar14) {
                      uVar6 = uVar14;
                    }
                    if (uVar9 + 2 < uVar6) {
                      cVar4 = (uVar9 + 4 < uVar6) + '\x01';
                    }
                    else {
                      cVar4 = '\0';
                    }
                    if ((iVar12 == 2) ||
                       ((iVar12 == 4 &&
                        (cVar5 = FUN_004f0da0(*(undefined2 *)(pcVar10 + 8),
                                              *(undefined2 *)(pcVar10 + 0xc)), cVar5 != '\0')))) {
                      cVar4 = '\0';
                    }
                    FUN_004bd430(param_1,*(undefined4 *)(pcVar10 + 8),*(undefined4 *)(pcVar10 + 0xc)
                                 ,DAT_00b34424,*piVar7,cVar4,iVar12);
                    *pcVar10 = '\x01';
                  }
                }
              }
              else {
                if (pcVar10[1] == '\0') {
                  if (cVar4 != '\0') goto LAB_00483f26;
                }
                else if (cVar4 != '\0') goto LAB_004841b4;
                if (pcVar10[1] != '\0') {
                  uVar2 = *(undefined2 *)(pcVar10 + 0xc);
                  uVar3 = *(undefined2 *)(pcVar10 + 8);
                  goto LAB_00483fd9;
                }
              }
            }
            else {
              if (*(int *)(pcVar10 + 4) != 0) {
                puVar1 = (ushort *)(*(int *)(pcVar10 + 4) + 0x18);
                *puVar1 = *puVar1 | 1;
              }
              uVar2 = *(undefined2 *)(pcVar10 + 0xc);
              uVar3 = *(undefined2 *)(pcVar10 + 8);
LAB_00483fd9:
              uVar8 = FUN_004ef1d0(uVar3,uVar2);
              FUN_007b3a40(uVar8);
              pcVar10[1] = '\0';
            }
LAB_004841b4:
            uVar6 = in_ECX[3];
            uStack_2c = uStack_2c + 1;
            uStack_28 = uStack_28 - 1;
          } while (uStack_2c < uVar6);
        }
        uVar6 = in_ECX[3];
        uStack_18 = uStack_18 + 1;
        uStack_24 = uStack_24 - 1;
      } while (uStack_18 < uVar6);
    }
    FUN_00707370(0,1);
    FUN_00707610();
    uVar8 = FUN_00707530(1);
    iVar12 = FUN_00560920(&DAT_00b43484,uVar8);
    if (iVar12 != 0) {
      _DAT_00b2c338 = *(float *)(iVar12 + 0x30);
      _DAT_00b2c334 = (_DAT_00b2c338 - *(float *)(iVar12 + 0x2c)) * 0.5 + *(float *)(iVar12 + 0x2c);
      if (_DAT_00b34410 < _DAT_00b2c334) {
        _DAT_00b2c334 = _DAT_00b34410;
      }
      if (_DAT_00b34414 < _DAT_00b2c338) {
        _DAT_00b2c338 = _DAT_00b34414;
      }
      _DAT_00b2c338 = _DAT_00b2c338 - _DAT_00b2c334;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004842b0(byte param_1)

{
  FUN_00483aa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004842d0(void)

{
  undefined4 *in_ECX;
  
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}



void FUN_004842e0(void)

{
  int in_ECX;
  
  FUN_00470520(*(undefined4 *)(in_ECX + 8));
  return;
}



float10 FUN_004842f0(float param_1)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_00985a00((double)param_1);
  return (float10)(float)fVar1;
}



void FUN_00484310(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0xbf800000;
  *(undefined4 *)(in_ECX + 0xc) = 0xbf800000;
  return;
}



undefined4 FUN_00484320(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x7c) & 2) != 0) {
    cVar1 = FUN_00414eb0();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



undefined2 FUN_00484340(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if (iVar1 != 0) {
    return *(undefined2 *)(iVar1 + 8);
  }
  return 0;
}



float10 FUN_00484370(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 fVar2;
  
  iVar1 = FUN_009828c0();
  fVar2 = (float10)iVar1;
  if (fVar2 - extraout_ST0 < (float10)0.0) {
    fVar2 = fVar2 + (float10)1.0;
  }
  return (float10)(float)fVar2;
}



float10 FUN_004843b0(void)

{
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  iVar1 = FUN_009828c0();
  if (extraout_ST0 - (float10)iVar1 < (float10)0.5) {
    return (float10)(float)(extraout_ST1 * (float10)iVar1);
  }
  return (float10)(float)(extraout_ST1 * (float10)(iVar1 + 1));
}



void FUN_00484420(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  in_ECX[2] = param_1;
  puVar1 = (undefined4 *)FUN_00401f00(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    *in_ECX = puVar1;
    in_ECX[1] = param_2;
    return;
  }
  *in_ECX = 0;
  in_ECX[1] = param_2;
  return;
}



void FUN_00484470(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    FUN_004526e0();
  }
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  return;
}



int * FUN_004844a0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = param_1[2];
  puVar5 = (undefined4 *)FUN_00401f00(8,uVar4);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)0x0;
  }
  else {
    *puVar5 = 0;
    puVar5[1] = 0;
  }
  *in_ECX = (int)puVar5;
  for (piVar1 = (int *)*param_1; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1]
      ) {
    iVar6 = FUN_00401f00(0x14,uVar4);
    local_4 = 0;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_00422ee0();
    }
    local_4 = 0xffffffff;
    FUN_00428a60(*piVar1);
    if (iVar6 != 0) {
      piVar2 = (int *)*in_ECX;
      iVar3 = piVar2[1];
      while (iVar3 != 0) {
        piVar2 = (int *)piVar2[1];
        iVar3 = piVar2[1];
      }
      if (*piVar2 == 0) {
        *piVar2 = iVar6;
      }
      else {
        piVar7 = (int *)FUN_00401f00(8);
        if (piVar7 == (int *)0x0) {
          piVar2[1] = 0;
        }
        else {
          *piVar7 = iVar6;
          piVar7[1] = 0;
          piVar2[1] = (int)piVar7;
        }
      }
    }
  }
  in_ECX[1] = param_1[1];
  *unaff_FS_OFFSET = local_c;
  return in_ECX;
}



void FUN_004845a0(void)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  while ((piVar1 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0))) {
    piVar1 = (int *)piVar1[1];
    FUN_0041dff0(1);
    if (puVar2 != (undefined4 *)0x0) {
      (**(code **)*puVar2)(1);
    }
  }
  return;
}



int FUN_004845d0(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041fd70(0);
    if ((cVar2 == '\0') && (cVar2 = FUN_0041df10(0), cVar2 == '\0')) {
      sVar3 = FUN_0041e860();
      iVar4 = iVar4 + sVar3;
    }
  }
  return iVar4;
}



int FUN_00484620(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041fd70(0);
    if (cVar2 != '\0') {
      sVar3 = FUN_0041e860();
      iVar4 = iVar4 + sVar3;
    }
  }
  return iVar4;
}



int FUN_00484660(void)

{
  int *piVar1;
  undefined4 *puVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  undefined4 *in_ECX;
  int iVar6;
  
  piVar1 = (int *)*in_ECX;
  iVar6 = 0;
  while ((piVar1 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0))) {
    cVar3 = FUN_0041fd70(0);
    if (cVar3 == '\0') {
      iVar6 = iVar6 + 1;
    }
    piVar1 = (int *)piVar1[1];
    iVar5 = FUN_0041e060();
    if ((iVar5 == 1) && (sVar4 = FUN_0041e860(), 1 < sVar4)) {
      FUN_0041f620();
      FUN_0065c620(puVar2);
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(1);
      }
      piVar1 = (int *)*in_ECX;
      iVar6 = 0;
    }
  }
  return iVar6;
}



undefined1 FUN_004846d0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041def0();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00484700(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  while( true ) {
    if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
      return 0;
    }
    iVar3 = FUN_0041e7b0();
    if ((iVar3 != 0) && (cVar2 = FUN_0041df10(0), cVar2 != '\0')) break;
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}



int FUN_00484740(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041def0();
    if (cVar2 != '\0') {
      sVar3 = FUN_0041e860();
      iVar4 = iVar4 + sVar3;
    }
  }
  return iVar4;
}



int FUN_00484780(void)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  iVar4 = 0;
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041fcb0();
    if (cVar2 != '\0') {
      sVar3 = FUN_0041e860();
      iVar4 = iVar4 + sVar3;
    }
  }
  return iVar4;
}



undefined1 FUN_004847c0(void)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041fcb0();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_004847f0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  int *piVar4;
  
  uVar3 = 0;
  for (piVar4 = (int *)*in_ECX; (piVar4 != (int *)0x0 && (iVar1 = *piVar4, iVar1 != 0));
      piVar4 = (int *)piVar4[1]) {
    iVar2 = FUN_0041e850();
    if (iVar2 != 0) {
      uVar3 = FUN_0041e850();
      FUN_00422e20(uVar3,0);
      if (*(int *)(iVar1 + 4) == 0) {
        FUN_0065c620(iVar1);
      }
      piVar4 = (int *)*in_ECX;
    }
  }
  return uVar3;
}



float10 FUN_00484850(char param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  float10 fVar4;
  
  piVar2 = (int *)FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
  if (piVar2 == (int *)0x0) {
    fVar4 = (float10)-1.0;
  }
  else if (((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) {
    if (param_1 != '\0') {
LAB_00484924:
      return (float10)100.0;
    }
    iVar3 = (**(code **)(*piVar2 + 0x10))();
    fVar4 = (float10)iVar3;
    if (iVar3 < 0) {
      return fVar4 + (float10)4.2949673e+09;
    }
  }
  else {
    fVar4 = (float10)FUN_0041e810();
    if (fVar4 == (float10)-1.0) {
      if (param_1 != '\0') goto LAB_00484924;
      iVar3 = (**(code **)(*piVar2 + 0x10))();
      fVar4 = (float10)iVar3;
      if (iVar3 < 0) {
        return fVar4 + (float10)4.2949673e+09;
      }
    }
    else {
      fVar4 = (float10)FUN_0041e810();
      if (param_1 != '\0') {
        iVar3 = (**(code **)(*piVar2 + 0x10))();
        fVar1 = (float)iVar3;
        if (iVar3 < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        fVar4 = (float10)FUN_004842f0(((float)fVar4 / fVar1) * 100.0);
        return fVar4;
      }
    }
  }
  return fVar4;
}



uint FUN_00484970(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  
  iVar2 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05c40,0);
  if (iVar2 != 0) {
    if (((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) {
      return (uint)*(byte *)(iVar2 + 4);
    }
    cVar1 = FUN_0041e830();
    if (cVar1 != '\0') {
      uVar3 = FUN_0041e830();
      return uVar3 & 0xff;
    }
  }
  return 0xffffffff;
}



float10 FUN_004849c0(void)

{
  int iVar1;
  int *in_ECX;
  float10 fVar2;
  
  iVar1 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
  if (iVar1 == 0) {
    return (float10)-1.0;
  }
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    fVar2 = (float10)FUN_0041e8a0();
    if (fVar2 != (float10)-1.0) {
      fVar2 = (float10)FUN_0041e8a0();
      return fVar2;
    }
    return (float10)*(ushort *)(iVar1 + 8);
  }
  return (float10)*(ushort *)(iVar1 + 8);
}



void FUN_00484a40(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 0) {
    if (((int *)*in_ECX != (int *)0x0) &&
       (puVar4 = *(undefined4 **)*in_ECX, puVar4 != (undefined4 *)0x0)) {
      FUN_0065c620(puVar4);
      (**(code **)*puVar4)(1);
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    FUN_00423660(param_1);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00422ee0();
  }
  local_4 = 0xffffffff;
  FUN_00423660(param_1);
  if (*in_ECX == 0) {
    puVar4 = (undefined4 *)FUN_00401f00(8);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
      puVar4[1] = 0;
      *in_ECX = (int)puVar4;
      FUN_00446cb0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    *in_ECX = 0;
  }
  FUN_00446cb0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00484b70(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    iVar1 = FUN_0041e7b0();
    if (iVar1 != 0) {
      uVar2 = FUN_0041e7b0();
      return uVar2;
    }
  }
  return 0;
}



int FUN_00484ba0(void)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = -1;
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    cVar1 = FUN_00422c40();
    iVar2 = (int)cVar1;
  }
  return iVar2;
}



void FUN_00484bc0(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (cVar1 = FUN_00422c40(), cVar1 != -1)) {
    FUN_00422ba0(param_1);
  }
  return;
}



uint FUN_00484bf0(void)

{
  int iVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) {
    iVar1 = FUN_0041e8c0();
    if (iVar1 != 0) {
      uVar2 = FUN_0041e8c0();
      return uVar2;
    }
  }
  iVar1 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0);
  if ((iVar1 != 0) && (*(byte *)(iVar1 + 0x70) != 0)) {
    uVar2 = (uint)*(byte *)(iVar1 + 0x70);
  }
  return uVar2;
}



void FUN_00484c50(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca42b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0,uVar2);
  if ((iVar3 == 0) || (*(char *)(iVar3 + 0x70) == '\0')) {
    if (*in_ECX == 0) {
      puVar4 = (undefined4 *)FUN_00401f00(8);
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
      }
      *in_ECX = (int)puVar4;
    }
    for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0));
        piVar1 = (int *)piVar1[1]) {
      iVar3 = FUN_0041e8c0();
      if (iVar3 == 0) {
        FUN_0041ef30(param_1);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
    iVar3 = FUN_00401f00(0x14);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00422ee0();
    }
    local_4 = 0xffffffff;
    FUN_0041ef30(param_1);
    FUN_00446cb0(uVar5);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00484d70(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = -1;
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (iVar1 = FUN_0041e8c0(), iVar1 != 0)) {
    uVar2 = FUN_0041e8c0();
    iVar3 = FUN_004bc070(uVar2);
    if (iVar3 != -1) {
      return iVar3;
    }
  }
  iVar1 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 0x70) != '\0')) {
    iVar3 = FUN_004bc070(*(char *)(iVar1 + 0x70));
    return iVar3;
  }
  return iVar3;
}



undefined4 FUN_00484df0(void)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (iVar1 = FUN_0041e8e0(), iVar1 != 0)) {
    uVar2 = FUN_0041e8e0();
    return uVar2;
  }
  return 0;
}



void FUN_00484e20(undefined4 param_1)

{
  int iVar1;
  int *in_ECX;
  
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (iVar1 = FUN_0041e8e0(), iVar1 == 0)) {
    FUN_0041efd0(param_1);
    FUN_0057b230();
  }
  return;
}



void FUN_00484e50(void)

{
  int iVar1;
  int *in_ECX;
  
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (iVar1 = FUN_0041e8e0(), iVar1 != 0)) {
    FUN_0041f660();
    FUN_0057b230();
    return;
  }
  return;
}



undefined1 FUN_00484e80(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    cVar2 = FUN_0041df10(param_1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



undefined4 FUN_00484ec0(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (*piVar1 == 0) break;
    cVar2 = FUN_0041df10(param_1);
    if (cVar2 != '\0') {
      cVar2 = FUN_0041fd70(0);
      if ((cVar2 != '\0') && (iVar3 = FUN_0041e7b0(), iVar3 == 0)) {
        return 1;
      }
      return 0;
    }
    piVar1 = (int *)piVar1[1];
  }
  return 1;
}



undefined4 FUN_00484f20(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    iVar2 = FUN_0041e900();
    if (iVar2 != 0) {
      uVar3 = FUN_0041e900();
      return uVar3;
    }
  }
  return 0;
}



undefined4 FUN_00484f50(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = (int *)piVar1[1])
  {
    iVar2 = FUN_0041e920();
    if (iVar2 != 0) {
      uVar3 = FUN_0041e920();
      return uVar3;
    }
  }
  return 0;
}



float10 FUN_00484f80(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  float fVar3;
  undefined2 uVar4;
  int iVar5;
  int in_ECX;
  float unaff_EBX;
  float10 fVar6;
  float10 fVar7;
  undefined4 uVar8;
  
  iVar5 = *(int *)(in_ECX + 8);
  cVar1 = *(char *)(iVar5 + 4);
  if (cVar1 == '!') {
    fVar6 = (float10)(**(code **)(*param_1 + 0x288))(7);
    FUN_005f4880();
    iVar5 = *(int *)(in_ECX + 8);
    if (*(char *)(iVar5 + 0x90) == '\x05') {
      uVar8 = 3;
    }
    else {
      uVar8 = 0;
    }
    (**(code **)(*param_1 + 0x288))(uVar8);
    iVar2 = *param_1;
    uVar8 = FUN_004bb060();
    (**(code **)(iVar2 + 0x288))(uVar8);
    uVar4 = (**(code **)(*(int *)(iVar5 + 0x88) + 0x10))();
    fVar7 = (float10)FUN_00484850(0);
    iVar5 = FUN_0046ca20(iVar5);
    fVar3 = (float)iVar5;
    if (iVar5 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    uVar8 = FUN_009828c0((float)fVar6,uVar4,(float)fVar7 / fVar3,param_2,0);
    uVar8 = FUN_009828c0(uVar8);
    uVar8 = FUN_009828c0(uVar8);
    FUN_00547070(uVar8);
  }
  else if (cVar1 == '\"') {
    (**(code **)(*param_1 + 0x288))(7);
    (**(code **)(*param_1 + 0x288))(3);
    FUN_005f4880();
    (**(code **)(*param_1 + 0x288))(0x1c);
    uVar4 = (**(code **)(*(int *)(iVar5 + 0x74) + 0x10))();
    uVar8 = FUN_009828c0(param_1,uVar4,0x3f800000,param_2,0);
    uVar8 = FUN_009828c0(uVar8);
    uVar8 = FUN_009828c0(uVar8);
    FUN_00547070(uVar8);
  }
  iVar5 = (**(code **)(*param_1 + 0x284))(0x2a);
  return (float10)((float)iVar5 + unaff_EBX);
}



undefined4 FUN_00485150(void)

{
  int in_ECX;
  
  switch(*(undefined1 *)(*(int *)(in_ECX + 8) + 4)) {
  case 0x13:
  case 0x19:
  case 0x28:
    return 4;
  case 0x14:
  case 0x16:
    return 2;
  default:
    return 8;
  case 0x21:
  case 0x22:
    return 1;
  }
}



char * FUN_004851b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *in_ECX;
  
  if (((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) {
LAB_004851d7:
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0041e7b0();
    if (iVar1 == 0) goto LAB_004851d7;
    iVar1 = FUN_0041e7b0();
  }
  iVar2 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
  if ((iVar1 != 0) && (iVar2 != 0)) {
    iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
    if (iVar1 != 0) {
      uVar3 = FUN_00519d20();
      pcVar4 = (char *)FUN_00469380(uVar3);
      if ((pcVar4 != (char *)0x0) && (*pcVar4 != '\0')) goto LAB_00485241;
    }
  }
  pcVar4 = (char *)FUN_004702d0(in_ECX[2],param_1);
LAB_00485241:
  if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) {
    pcVar4 = (char *)0x0;
  }
  return pcVar4;
}



float10 FUN_00485260(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  float local_4;
  
  local_4 = -1.0;
  iVar2 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b0333c,0);
  if (iVar2 != 0) {
    local_4 = *(float *)(iVar2 + 4);
    cVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x78))();
    if (cVar1 != '\0') {
      local_4 = 0.0;
    }
  }
  return (float10)local_4;
}



float10 FUN_004852b0(char param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  
  fVar1 = -1.0;
  piVar2 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
  iVar3 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05c40,0);
  iVar4 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b06ac0,0);
  if (piVar2 != (int *)0x0) {
    fVar5 = (float10)FUN_00484850(0);
    iVar3 = (**(code **)(*piVar2 + 0x10))();
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    return (float10)(((float)fVar5 / fVar1) * 100.0);
  }
  if ((iVar3 != 0) && (iVar4 == 0)) {
    if (param_1 == '\0') {
      fVar1 = (float)*(byte *)(iVar3 + 4);
    }
    else {
      iVar3 = FUN_00484970();
      if (iVar3 != 0) {
        iVar3 = FUN_00484970();
        return (float10)iVar3;
      }
    }
  }
  return (float10)fVar1;
}



void FUN_004853b0(char param_1,undefined4 param_2,char param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != '\0') {
    iVar3 = FUN_00401f00(0x14,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00422ee0();
    }
    local_4 = 0xffffffff;
    FUN_0041f200(1,param_2);
    if (*in_ECX == 0) {
      puVar5 = (undefined4 *)FUN_00401f00(8,uVar2);
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        *in_ECX = (int)puVar5;
        FUN_00446cb0(uVar4);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      *in_ECX = 0;
    }
    FUN_00446cb0(uVar4);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  cVar1 = FUN_00484e80(param_2);
  if ((cVar1 != '\0') && (piVar6 = (int *)*in_ECX, piVar6 != (int *)0x0)) {
    while (puVar5 = (undefined4 *)*piVar6, puVar5 != (undefined4 *)0x0) {
      cVar1 = FUN_0041df10(param_2);
      if (cVar1 != '\0') {
        FUN_0065c620(puVar5);
        if (param_3 != '\0') {
          (**(code **)*puVar5)(1);
        }
        break;
      }
      piVar6 = (int *)piVar6[1];
      if (piVar6 == (int *)0x0) {
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_004854f0(int *param_1,char param_2,undefined4 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  bool bVar4;
  
  iVar2 = FUN_004691b0(in_ECX[2]);
  if ((iVar2 != 0) && (cVar1 = FUN_00469080(), cVar1 == '\0')) {
    return false;
  }
  if (((in_ECX[2] == 0) || (cVar1 = (**(code **)(*(int *)in_ECX[2] + 0x78))(), cVar1 == '\0')) ||
     ((char)DAT_00b333c4[0x80] == '\0')) {
    if (param_1 == DAT_00b333c4) goto LAB_0048556d;
  }
  else if (param_1 == DAT_00b333c4) {
    return false;
  }
  if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
     (cVar1 = FUN_0041df50(), cVar1 != '\0')) {
    return false;
  }
LAB_0048556d:
  if (param_4 != '\0') {
    return true;
  }
  if (param_2 != '\0') {
    if ((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
       ((iVar2 = FUN_0041e7b0(), iVar2 != 0 && (iVar2 = FUN_0041e7b0(), iVar2 != 0)))) {
      iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
      iVar3 = FUN_00484b70();
      if ((iVar3 != iVar2) && (iVar2 = (**(code **)(*param_1 + 0x284))(0x24), DAT_00b36c30 < iVar2))
      {
        return false;
      }
    }
    iVar2 = in_ECX[2];
    FUN_005e02e0(0);
    cVar1 = FUN_004685b0(iVar2);
    iVar2 = FUN_005f23b0(0x1d);
    bVar4 = 1 < iVar2 || cVar1 != '\0';
    if ((int *)*in_ECX == (int *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)*in_ECX;
    }
    cVar1 = FUN_00484e80(0);
    if (((cVar1 != '\0') && (iVar2 != 0)) && (cVar1 = FUN_0041df40(), cVar1 != '\0')) {
      bVar4 = false;
    }
    return bVar4;
  }
  cVar1 = FUN_00484e80(0);
  return cVar1 == '\0';
}



short FUN_00485660(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  short local_4;
  
  local_4 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    local_4 = 6;
  }
  local_4 = local_4 + 0xc;
  for (piVar4 = (int *)*in_ECX; (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
      piVar4 = (int *)piVar4[1]) {
    sVar3 = FUN_00421340(0x20,0);
    local_4 = local_4 + sVar3;
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x58c,
                         "..\\TES Shared\\InventoryChanges.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,local_4,*puVar1,uVar5);
      return local_4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",local_4,0x58c,
                 "..\\TES Shared\\InventoryChanges.cpp");
  }
  return local_4;
}



void FUN_00485730(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int local_14;
  short *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_10 = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_c = 0x4b4f4c42;
    FUN_0045b9a0(&local_c,4);
    local_10 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_8,2);
  }
  local_4 = *(undefined4 *)(in_ECX[2] + 0xc);
  FUN_0045f7a0(&local_4,4);
  FUN_0045b9a0(in_ECX + 1,4);
  local_14 = 0;
  piVar8 = *(int **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_14,4);
  for (piVar2 = (int *)*in_ECX; (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
      piVar2 = (int *)piVar2[1]) {
    FUN_00421a00(0x20,0);
    local_14 = local_14 + 1;
  }
  *piVar8 = local_14;
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar4 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x5ab,
                   "..\\TES Shared\\InventoryChanges.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar3);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x5ab,
                         "..\\TES Shared\\InventoryChanges.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar4 - iVar1,*puVar3,uVar9);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_10;
  if (cVar7 != '\0') {
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_10 + 0xffffU < uVar5) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\InventoryChanges.cpp",0x5ab);
    }
    *psVar6 = (short)uVar5 - (short)psVar6;
  }
  return;
}



void FUN_004858d0(void)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *in_ECX;
  int iVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  char *pcVar10;
  uint local_20;
  int iStack_1c;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009c6fcb;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = 0;
  iVar8 = 0;
  cVar2 = FUN_0045a170(uVar3);
  if (cVar2 != '\0') {
    FUN_004534d0(&local_18,4);
    if (local_18 != 0x4b4f4c42) {
      puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar6 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\InventoryChanges.cpp",0x5b1,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar6);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\InventoryChanges.cpp",0x5b1,*puVar6,uVar5);
      }
    }
    iVar8 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_20,2);
  }
  FUN_0045ba00(&local_14,4);
  FUN_004534d0(in_ECX + 1,4);
  uVar5 = FUN_0046b250(local_14,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
  uVar5 = FUN_009832e6(uVar5);
  in_ECX[2] = uVar5;
  *in_ECX = 0;
  FUN_004534d0(&iStack_1c,4);
  if (iStack_1c != 0) {
    puVar6 = (undefined4 *)FUN_00401f00(8);
    if (puVar6 == (undefined4 *)0x0) {
      puVar6 = (undefined4 *)0x0;
    }
    else {
      *puVar6 = 0;
      puVar6[1] = 0;
    }
    *in_ECX = puVar6;
    if (0 < iStack_1c) {
      iVar9 = 0;
      do {
        iStack_10 = FUN_00401f00(0x14);
        uVar5 = 0;
        uStack_4 = 0;
        if (iStack_10 != 0) {
          uVar5 = FUN_00422ee0();
        }
        uStack_4 = 0xffffffff;
        FUN_00426a90(0x20,0,0);
        FUN_0067b1e0(uVar5);
        iVar9 = iVar9 + 1;
      } while (iVar9 < iStack_1c);
    }
  }
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    puVar6 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar3 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar6 == (undefined4 *)0x0) {
      uVar7 = local_20 & 0xffff;
      if (uVar7 + iVar8 < uVar3) {
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar3 - uVar7) - iVar8;
        pcVar10 = 
        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      else {
        if (uVar7 + iVar8 <= uVar3) goto LAB_00485ba1;
        uVar1 = *(undefined1 *)(DAT_00b33b00 + 0x7c);
        iVar8 = (uVar7 - uVar3) + iVar8;
        pcVar10 = 
        "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i";
      }
      FUN_004a7a60(pcVar10,iVar8,"..\\TES Shared\\InventoryChanges.cpp",0x5d5,uVar1);
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar6);
      uVar7 = (local_20 & 0xffff) + iVar8;
      if (uVar7 < uVar3) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar3 - (local_20 & 0xffff)) - iVar8,"..\\TES Shared\\InventoryChanges.cpp",
                     0x5d5,*puVar6,uVar5);
        *unaff_FS_OFFSET = local_c;
        return;
      }
      if (uVar3 < uVar7) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar6 + 9),*(undefined4 *)((int)puVar6 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_20 & 0xffff) - uVar3) + iVar8,"..\\TES Shared\\InventoryChanges.cpp",
                     0x5d5,*puVar6,uVar5);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
LAB_00485ba1:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00485bc0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_00425040(0x20,0,0,in_ECX[2]);
    }
  }
  return;
}



uint FUN_00485c00(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  uint uVar4;
  float10 fVar5;
  
  uVar4 = 0;
  if (((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
      (iVar1 = FUN_0041e7b0(), iVar1 != 0)) && (iVar1 = FUN_0041e7b0(), iVar1 != 0)) {
    if ((((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) ||
       (iVar1 = FUN_0041e7b0(), iVar1 == 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_0041e7b0();
    }
    iVar2 = (**(code **)(*DAT_00b333c4 + 0x170))();
    if (iVar1 != iVar2) {
      uVar4 = 1;
    }
  }
  iVar1 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
    uVar4 = uVar4 | 2;
  }
  if (((((int *)*in_ECX != (int *)0x0) && (*(int *)*in_ECX != 0)) &&
      (iVar1 = FUN_0041e8e0(), iVar1 != 0)) && (iVar1 = FUN_0041e8e0(), iVar1 != 0)) {
    uVar4 = uVar4 | 4;
  }
  piVar3 = (int *)FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
  if (piVar3 == (int *)0x0) {
    return uVar4;
  }
  if (((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) {
    iVar1 = (**(code **)(*piVar3 + 0x10))();
  }
  else {
    fVar5 = (float10)FUN_0041e810();
    if (fVar5 != (float10)-1.0) {
      fVar5 = (float10)FUN_0041e810();
      goto LAB_00485d2b;
    }
    iVar1 = (**(code **)(*piVar3 + 0x10))();
  }
  fVar5 = (float10)iVar1;
  if (iVar1 < 0) {
    fVar5 = fVar5 + (float10)4.2949673e+09;
  }
LAB_00485d2b:
  if ((float)fVar5 == 0.0) {
    uVar4 = uVar4 | 8;
  }
  return uVar4;
}



void FUN_00485d50(undefined4 param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_1;
  puVar2 = (undefined4 *)FUN_00401f00(8,uVar1);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *in_ECX = puVar2;
  if (DAT_00b34428 == 0) {
    iVar3 = FUN_00401f00(0x58,uVar1);
    local_4 = 0;
    if (iVar3 == 0) {
      DAT_00b34428 = 0;
    }
    else {
      DAT_00b34428 = FUN_004d9a70();
    }
    local_4 = 0xffffffff;
    FUN_0046b590();
  }
  in_ECX[2] = 0xbf800000;
  in_ECX[3] = 0xbf800000;
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00485e00(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e6f0(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00485d50(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041ec10(iVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



undefined4 * FUN_00485e80(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  bVar3 = true;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (undefined4 *)0x0;
    }
    if (!bVar3) break;
    if ((*piVar1 == 0) || (*(int *)(*piVar1 + 8) != param_1)) {
      piVar1 = (int *)piVar1[1];
    }
    else {
      bVar3 = false;
    }
  }
  if (piVar1 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)*piVar1;
  if ((puVar2 != (undefined4 *)0x0) && (param_3 != 0)) {
    piVar1 = (int *)*puVar2;
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return (undefined4 *)0x0;
      }
      if (((*piVar1 != 0) && (iVar4 = FUN_0041fb00(), iVar4 != 0)) &&
         (iVar4 = FUN_0041fb00(), *(int *)(iVar4 + 0xc) == param_3)) break;
      piVar1 = (int *)piVar1[1];
    }
    return puVar2;
  }
  return puVar2;
}



undefined4 * FUN_00485f10(char param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 uVar6;
  
  piVar1 = (int *)*in_ECX;
  do {
    if ((piVar1 == (int *)0x0) || (puVar2 = (undefined4 *)*piVar1, puVar2 == (undefined4 *)0x0)) {
      return (undefined4 *)0x0;
    }
    iVar5 = FUN_004691b0(puVar2[2]);
    if ((iVar5 != 0) &&
       ((cVar4 = FUN_00468ff0(7,0), cVar4 != '\0' || (cVar4 = FUN_00468ff0(6,0), cVar4 != '\0')))) {
      for (piVar3 = (int *)*puVar2; (piVar3 != (int *)0x0 && (*piVar3 != 0));
          piVar3 = (int *)piVar3[1]) {
        if (param_1 == '\0') {
          uVar6 = 0x1b;
        }
        else {
          uVar6 = 0x1c;
        }
        iVar5 = FUN_0041e210(uVar6);
        if (iVar5 != 0) {
          return puVar2;
        }
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



int FUN_00485fa0(int param_1,char param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 *in_ECX;
  int *piVar4;
  
  piVar4 = (int *)*in_ECX;
  bVar2 = true;
  while( true ) {
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    if (!bVar2) break;
    if ((*piVar4 == 0) || (*(int *)(*piVar4 + 8) != param_1)) {
      piVar4 = (int *)piVar4[1];
    }
    else {
      bVar2 = false;
    }
  }
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  if ((int *)*piVar4 == (int *)0x0) {
    return 0;
  }
  piVar4 = *(int **)*piVar4;
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  while( true ) {
    iVar1 = *piVar4;
    if (iVar1 == 0) {
      return 0;
    }
    cVar3 = FUN_0041df10(0);
    if (cVar3 != '\0') break;
    cVar3 = FUN_0041df40();
    if ((cVar3 != '\0') && (param_2 != '\0')) {
      FUN_0041f200(1,0);
      return iVar1;
    }
    piVar4 = (int *)piVar4[1];
    if (piVar4 == (int *)0x0) {
      return 0;
    }
  }
  return iVar1;
}



void FUN_00486030(char param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  char cVar6;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
joined_r0x00486035:
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    piVar2 = (int *)*puVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = (int *)*piVar2;
joined_r0x0048604f:
      if (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)*piVar3;
        if (((puVar4 != (undefined4 *)0x0) && (cVar6 = FUN_0041df10(0), cVar6 != '\0')) &&
           ((param_1 == '\0' || (cVar6 = FUN_0041df40(), cVar6 == '\0')))) {
          FUN_0041f6a0(0);
          FUN_004238a0(0);
          if (puVar4[1] == 0) {
            piVar5 = (int *)piVar3[1];
            if (piVar5 == (int *)0x0) {
              *piVar3 = 0;
              (**(code **)*puVar4)(1);
            }
            else {
              piVar3[1] = piVar5[1];
              *piVar3 = *piVar5;
              FUN_00401f20(piVar5);
              (**(code **)*puVar4)(1);
            }
            goto joined_r0x0048604f;
          }
        }
        piVar3 = (int *)piVar3[1];
        goto joined_r0x0048604f;
      }
      piVar3 = (int *)*piVar2;
      if ((((piVar3 != (int *)0x0) && (piVar3[1] == 0)) && (*piVar3 == 0)) && (piVar2[1] == 0)) {
        puVar4 = (undefined4 *)puVar1[1];
        if (puVar4 == (undefined4 *)0x0) {
          *puVar1 = 0;
        }
        else {
          puVar1[1] = puVar4[1];
          *puVar1 = *puVar4;
          FUN_00401f20(puVar4);
        }
        FUN_004845a0();
        if (*piVar2 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar2);
        *piVar2 = 0;
        FUN_00401f20(piVar2);
        goto joined_r0x00486035;
      }
    }
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}



int FUN_00486150(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  piVar1 = (int *)(iVar5 + 8);
  iVar5 = 0;
  do {
    if ((piVar1 == (int *)0x0) || (iVar5 != 0)) {
      piVar1 = (int *)*in_ECX;
      while ((piVar1 != (int *)0x0 && (iVar5 == 0))) {
        iVar5 = *(int *)(*piVar1 + 8);
        if ((iVar5 == 0) || (iVar6 = FUN_00568240(iVar5), iVar6 != param_1)) {
          iVar5 = 0;
        }
        else {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar4 = FUN_00469920(iVar5);
          if ((cVar4 == '\0') && (0 < *(int *)(*piVar1 + 4))) {
            *param_2 = *(int *)(*piVar1 + 4);
          }
        }
        piVar1 = (int *)piVar1[1];
      }
      return iVar5;
    }
    iVar5 = *(int *)(*piVar1 + 4);
    if ((iVar5 == 0) || (iVar6 = FUN_00568240(iVar5), iVar6 != param_1)) {
      iVar5 = 0;
    }
    else {
      piVar2 = (int *)*in_ECX;
      bVar3 = true;
      while (piVar2 != (int *)0x0) {
        if (!bVar3) {
          if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
            iVar6 = *(int *)*piVar1 + *(int *)(*piVar2 + 4);
            if (iVar6 != 0) {
              *param_2 = iVar6;
            }
            goto LAB_004861d6;
          }
          break;
        }
        if ((*piVar2 == 0) || (*(int *)(*piVar2 + 8) != iVar5)) {
          piVar2 = (int *)piVar2[1];
        }
        else {
          bVar3 = false;
        }
      }
      *param_2 = *(int *)*piVar1;
    }
LAB_004861d6:
    piVar1 = (int *)piVar1[1];
  } while( true );
}



int FUN_00486240(uint param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 *in_ECX;
  
  if (in_ECX[1] == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_004d6d40();
  }
  puVar1 = (undefined4 *)(iVar7 + 8);
  iVar7 = 0;
  do {
    if (((puVar1 == (undefined4 *)0x0) || (iVar7 != 0)) ||
       (piVar3 = (int *)*puVar1, piVar3 == (int *)0x0)) {
      for (piVar3 = (int *)*in_ECX; ((piVar3 != (int *)0x0 && (iVar7 == 0)) && (*piVar3 != 0));
          piVar3 = (int *)piVar3[1]) {
        iVar7 = *(int *)(*piVar3 + 8);
        if ((iVar7 == 0) || (*(byte *)(iVar7 + 4) != param_1)) {
          iVar7 = 0;
        }
        else {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar6 = FUN_00469920(iVar7);
          if ((cVar6 == '\0') && (0 < *(int *)(*piVar3 + 4))) {
            *param_2 = *(int *)(*piVar3 + 4);
          }
        }
      }
      return iVar7;
    }
    iVar7 = piVar3[1];
    if ((iVar7 == 0) || (*(byte *)(iVar7 + 4) != param_1)) {
      iVar7 = 0;
    }
    else {
      piVar4 = (int *)*in_ECX;
      bVar5 = true;
      while (piVar4 != (int *)0x0) {
        if (!bVar5) {
          if ((piVar4 != (int *)0x0) && (*piVar4 != 0)) {
            iVar2 = *(int *)(*piVar4 + 4) + *piVar3;
            if (iVar2 != 0) {
              *param_2 = iVar2;
            }
            goto LAB_004862c8;
          }
          break;
        }
        if ((*piVar4 == 0) || (*(int *)(*piVar4 + 8) != iVar7)) {
          piVar4 = (int *)piVar4[1];
        }
        else {
          bVar5 = false;
        }
      }
      *param_2 = *piVar3;
    }
LAB_004862c8:
    puVar1 = (undefined4 *)puVar1[1];
  } while( true );
}



undefined4 * FUN_00486330(uint param_1)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *in_ECX;
  undefined4 *puVar10;
  int *piVar11;
  int local_14;
  float local_c;
  int local_8;
  
  local_c = -3.4028235e+38;
  local_14 = 0;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004d6d40();
  }
  for (piVar11 = (int *)(iVar6 + 8); piVar11 != (int *)0x0; piVar11 = (int *)piVar11[1]) {
    if ((*piVar11 != 0) &&
       (iVar6 = FUN_009832e6(*(undefined4 *)(*piVar11 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b06adc,0),
       iVar6 != 0)) {
      piVar1 = (int *)*in_ECX;
      bVar2 = true;
      while (piVar1 != (int *)0x0) {
        if (!bVar2) {
          if (piVar1 != (int *)0x0) {
            iVar7 = *piVar1;
            goto LAB_004863c4;
          }
          break;
        }
        if ((*piVar1 == 0) || (*(int *)(*piVar1 + 8) != iVar6)) {
          piVar1 = (int *)piVar1[1];
        }
        else {
          bVar2 = false;
        }
      }
      iVar7 = 0;
LAB_004863c4:
      if ((*(byte *)(iVar6 + 0x78) == param_1) &&
         (((iVar7 == 0 || (0 < *(int *)(iVar7 + 4) + *(int *)*piVar11)) || (*(int *)*piVar11 < 0))))
      {
        bVar3 = FUN_0046e3f0(iVar6);
        if (local_c < (float)bVar3) {
          local_14 = iVar6;
          local_c = (float)bVar3;
        }
      }
    }
  }
  piVar11 = (int *)*in_ECX;
  if (piVar11 != (int *)0x0) {
    do {
      iVar6 = *piVar11;
      if (((iVar6 != 0) &&
          (iVar7 = FUN_009832e6(*(undefined4 *)(iVar6 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b06adc,0),
          iVar7 != 0)) && ((*(byte *)(iVar7 + 0x78) == param_1 && (*(int *)(iVar6 + 4) != 0)))) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(iVar7);
        if (cVar4 == '\0') {
          bVar3 = FUN_0046e3f0(iVar7);
          if (local_c < (float)bVar3) {
            local_c = (float)bVar3;
            local_8 = iVar7;
          }
        }
      }
      piVar11 = (int *)piVar11[1];
    } while (piVar11 != (int *)0x0);
    if ((local_8 != 0) && (local_8 != local_14)) {
      if (local_14 != 0) {
        bVar3 = FUN_0046e3f0(local_8);
        bVar5 = FUN_0046e3f0(local_14);
        if (bVar3 <= bVar5) goto LAB_0048650f;
      }
      local_14 = local_8;
    }
  }
LAB_0048650f:
  piVar11 = (int *)*in_ECX;
  bVar2 = true;
  do {
    if (piVar11 == (int *)0x0) {
LAB_0048653a:
      piVar11 = (int *)0x0;
LAB_0048653c:
      puVar10 = (undefined4 *)0x0;
      if (local_14 != 0) {
        puVar10 = (undefined4 *)FUN_00401f00(0xc);
        if (puVar10 == (undefined4 *)0x0) {
          puVar10 = (undefined4 *)0x0;
        }
        else {
          puVar10[2] = 0;
          *puVar10 = 0;
          puVar10[1] = 0;
        }
      }
      if (piVar11 == (int *)0x0) {
        if (local_14 != 0) {
          puVar10[2] = local_14;
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          uVar9 = FUN_00469ca0(local_14);
          puVar10[1] = uVar9;
        }
      }
      else {
        puVar10[2] = piVar11[2];
        if (((int *)*piVar11 != (int *)0x0) && (*(int *)*piVar11 != 0)) {
          puVar8 = (undefined4 *)FUN_00401f00(8);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          *puVar10 = puVar8;
          FUN_00446cb0(*(undefined4 *)*piVar11);
          puVar10[1] = piVar11[1];
          return puVar10;
        }
      }
      return puVar10;
    }
    if (!bVar2) {
      if (piVar11 != (int *)0x0) {
        piVar11 = (int *)*piVar11;
        goto LAB_0048653c;
      }
      goto LAB_0048653a;
    }
    if ((*piVar11 == 0) || (*(int *)(*piVar11 + 8) != local_14)) {
      piVar11 = (int *)piVar11[1];
    }
    else {
      bVar2 = false;
    }
  } while( true );
}



int FUN_004865f0(int param_1)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  int local_4;
  
  local_4 = 0;
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  piVar7 = (int *)(iVar5 + 8);
  while ((piVar7 != (int *)0x0 && (((piVar7[1] != 0 || (*piVar7 != 0)) && (local_4 == 0))))) {
    iVar5 = FUN_009832e6(*(undefined4 *)(*piVar7 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
    piVar1 = (int *)*in_ECX;
    bVar3 = true;
    while (iVar2 = local_4, piVar1 != (int *)0x0) {
      if (!bVar3) {
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
          if (((iVar6 == 0) || (0 < *(int *)(iVar6 + 4) + *(int *)*piVar7)) || (*(int *)*piVar7 < 0)
             ) goto LAB_0048668b;
          goto LAB_004866c4;
        }
        break;
      }
      if ((*piVar1 == 0) || (*(int *)(*piVar1 + 8) != iVar5)) {
        piVar1 = (int *)piVar1[1];
      }
      else {
        bVar3 = false;
      }
    }
    iVar6 = 0;
LAB_0048668b:
    if ((iVar5 != 0) && (iVar5 = iVar5 + 0x30, iVar5 != 0)) {
      while ((*(int *)(iVar5 + 8) != 0 || (iVar2 = local_4, *(int *)(iVar5 + 4) != 0))) {
        iVar2 = iVar6;
        if (((*(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x1c) + 0x98) == param_1) ||
            (iVar2 = local_4, *(int *)(iVar5 + 8) == 0)) ||
           (iVar5 = *(int *)(iVar5 + 8) + -4, iVar5 == 0)) break;
      }
    }
LAB_004866c4:
    local_4 = iVar2;
    piVar7 = (int *)piVar7[1];
  }
  piVar7 = (int *)*in_ECX;
  if (piVar7 != (int *)0x0) {
    while (((piVar7[1] != 0 || (*piVar7 != 0)) && (local_4 == 0))) {
      iVar5 = FUN_009832e6(*(undefined4 *)(*piVar7 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
      iVar2 = *piVar7;
      iVar6 = local_4;
      if ((iVar5 != 0) && (*(int *)(iVar2 + 4) != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(iVar5);
        if ((cVar4 == '\0') && (iVar5 = iVar5 + 0x30, iVar5 != 0)) {
          while ((*(int *)(iVar5 + 8) != 0 || (iVar6 = local_4, *(int *)(iVar5 + 4) != 0))) {
            iVar6 = iVar2;
            if (((*(int *)(*(int *)(*(int *)(iVar5 + 4) + 0x1c) + 0x98) == param_1) ||
                (iVar6 = local_4, *(int *)(iVar5 + 8) == 0)) ||
               (iVar5 = *(int *)(iVar5 + 8) + -4, iVar5 == 0)) break;
          }
        }
      }
      local_4 = iVar6;
      piVar7 = (int *)piVar7[1];
      if (piVar7 == (int *)0x0) {
        return local_4;
      }
    }
  }
  return local_4;
}



int * FUN_00486790(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *in_ECX;
  int *piVar9;
  int *local_c;
  int local_8;
  
  piVar7 = (int *)*in_ECX;
  do {
    if (piVar7 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar1 = (int *)*piVar7;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    local_c = (int *)*piVar1;
    bVar3 = false;
    local_8 = 0;
    piVar9 = local_c;
    if (local_c != (int *)0x0) {
      while (*piVar9 != 0) {
        cVar4 = FUN_0041def0();
        if (cVar4 != '\0') {
          if (piVar1[1] < 0) {
            FUN_004853b0(0,0,1);
          }
          break;
        }
        piVar9 = (int *)piVar9[1];
        if (piVar9 == (int *)0x0) break;
      }
    }
    if (local_c != (int *)0x0) {
      do {
        iVar2 = *local_c;
        if (iVar2 == 0) break;
        if (bVar3) goto LAB_00486921;
        cVar4 = FUN_0041df10(0);
        if (cVar4 != '\0') {
          switch(param_1) {
          case 6:
          case 7:
            iVar6 = FUN_004691b0(piVar1[2]);
            if ((iVar6 != 0) &&
               ((cVar4 = FUN_00468ff0(7,0), cVar4 != '\0' ||
                (cVar4 = FUN_00468ff0(6,0), cVar4 != '\0')))) {
              if (param_1 == 7) {
                cVar4 = FUN_0041df10(1);
                goto joined_r0x004868e7;
              }
              if ((param_1 == 6) && (cVar4 = FUN_0041df10(1), cVar4 == '\0')) goto LAB_004868e9;
            }
            break;
          default:
            iVar6 = FUN_004691b0(piVar1[2]);
            if (iVar6 != 0) {
              cVar4 = FUN_00468ff0(param_1,0);
joined_r0x004868e7:
              if (cVar4 != '\0') goto LAB_004868e9;
            }
            break;
          case 9:
            if (*(char *)(piVar1[2] + 4) == '!') {
LAB_004868e9:
              bVar3 = true;
            }
            break;
          case 10:
          case 0xb:
            break;
          case 0xc:
            if (*(char *)(piVar1[2] + 4) == '\"') goto LAB_004868e9;
            break;
          case 0xe:
            if (*(char *)(piVar1[2] + 4) == '\x1a') goto LAB_004868e9;
          }
        }
        local_c = (int *)local_c[1];
        local_8 = iVar2;
      } while (local_c != (int *)0x0);
      if (bVar3) {
LAB_00486921:
        if ((param_2 != '\0') && (*(char *)(piVar1[2] + 4) != '\x14')) {
          return (int *)0x0;
        }
        piVar7 = (int *)FUN_00401f00(0xc);
        if (piVar7 == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7[2] = 0;
          *piVar7 = 0;
          piVar7[1] = 0;
        }
        piVar7[2] = piVar1[2];
        if (*piVar7 == 0) {
          puVar8 = (undefined4 *)FUN_00401f00(8);
          if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            *puVar8 = 0;
            puVar8[1] = 0;
          }
          *piVar7 = (int)puVar8;
        }
        FUN_00446cb0(local_8);
        sVar5 = FUN_0041e860();
        piVar7[1] = (int)sVar5;
        return piVar7;
      }
    }
    piVar7 = (int *)piVar7[1];
  } while( true );
}



int FUN_004869c0(int param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  
  if (in_ECX[1] != 0) {
    FUN_004d6d40();
  }
  iVar3 = FUN_00469ca0(param_1);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  piVar4 = (int *)*in_ECX;
  bVar2 = true;
  if (piVar4 != (int *)0x0) {
    while (bVar2) {
      if ((*piVar4 == 0) || (*(int *)(*piVar4 + 8) != param_1)) {
        piVar4 = (int *)piVar4[1];
      }
      else {
        bVar2 = false;
      }
      if (piVar4 == (int *)0x0) {
        return iVar3;
      }
    }
    if ((piVar4 != (int *)0x0) && (iVar1 = *piVar4, iVar1 != 0)) {
      if ((iVar3 == 0) && (*(int *)(iVar1 + 4) == 0)) {
        return 1;
      }
      iVar3 = iVar3 + *(int *)(iVar1 + 4);
    }
  }
  return iVar3;
}



int * FUN_00486a40(int param_1)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *in_ECX;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  undefined4 uVar13;
  int local_24;
  int *local_20;
  int local_18;
  undefined4 *local_14;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb2c;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_14 = (undefined4 *)0x0;
  if ((in_ECX[1] != 0) && (iVar7 = FUN_004d6d40(uVar6), iVar7 != 0)) {
    if (in_ECX[1] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_004d6d40();
    }
    local_14 = (undefined4 *)(iVar7 + 8);
  }
  local_24 = 0;
  local_20 = (int *)0x0;
  if (local_14 != (undefined4 *)0x0) {
    do {
      piVar1 = (int *)*local_14;
      if (piVar1 == (int *)0x0) break;
      if (local_20 != (int *)0x0) goto LAB_0048732d;
      iVar7 = piVar1[1];
      if ((*(char *)(iVar7 + 4) != '+') || (iVar7 == 0)) {
        piVar11 = (int *)*in_ECX;
        bVar3 = true;
        while (piVar11 != (int *)0x0) {
          if (!bVar3) {
            if (piVar11 != (int *)0x0) {
              piVar11 = (int *)*piVar11;
              goto LAB_00486afd;
            }
            break;
          }
          if ((*piVar11 == 0) || (*(int *)(*piVar11 + 8) != iVar7)) {
            piVar11 = (int *)piVar11[1];
          }
          else {
            bVar3 = false;
          }
        }
        piVar11 = (int *)0x0;
LAB_00486afd:
        iVar7 = *piVar1;
        iVar10 = iVar7;
        if (iVar7 < 0) {
          iVar10 = -iVar7;
        }
        if ((piVar11 == (int *)0x0) || (0 < iVar10)) {
          if (iVar7 < 0) {
            if (piVar11 != (int *)0x0) {
LAB_00486b90:
              local_20 = (int *)0x0;
              goto LAB_00486e3c;
            }
          }
          else if ((piVar11 != (int *)0x0) &&
                  ((iVar7 + piVar11[1] < 1 ||
                   ((((int *)*piVar11 != (int *)0x0 && (*(int *)*piVar11 != 0)) &&
                    (cVar4 = FUN_0041def0(), cVar4 != '\0')))))) goto LAB_00486b90;
          if ((local_24 == param_1) &&
             ((piVar11 == (int *)0x0 || (iVar7 = FUN_00484660(), iVar7 == 0)))) {
            local_20 = (int *)FUN_00401f00(0xc);
            if (local_20 == (int *)0x0) {
              local_20 = (int *)0x0;
            }
            else {
              local_20[2] = 0;
              *local_20 = 0;
              local_20[1] = 0;
            }
            if (piVar11 == (int *)0x0) {
              iVar7 = *piVar1;
              if (iVar7 < 0) {
                iVar7 = -iVar7;
              }
              local_20[1] = iVar7;
            }
            else if (*piVar1 < 0) {
              local_20[1] = piVar11[1] + iVar10;
            }
            else {
              iVar7 = FUN_00484660();
              local_20[1] = (piVar11[1] + *piVar1) - iVar7;
            }
            local_20[2] = piVar1[1];
            if ((((piVar11 != (int *)0x0) && (iVar7 = FUN_00484f20(), iVar7 != 0)) &&
                (*piVar11 != 0)) && (iVar7 = FUN_0052b4a0(), iVar7 != 0)) {
              if (*local_20 == 0) {
                puVar8 = (undefined4 *)FUN_00401f00(8);
                if (puVar8 == (undefined4 *)0x0) {
                  puVar8 = (undefined4 *)0x0;
                }
                else {
                  *puVar8 = 0;
                  puVar8[1] = 0;
                }
                *local_20 = (int)puVar8;
              }
              for (piVar11 = (int *)*piVar11; (piVar11 != (int *)0x0 && (*piVar11 != 0));
                  piVar11 = (int *)piVar11[1]) {
                FUN_00446cb0(*piVar11);
              }
            }
          }
          else if (piVar11 == (int *)0x0) {
LAB_00486e37:
            local_24 = local_24 + 1;
          }
          else {
            iVar7 = 0;
            if (*piVar11 != 0) {
              iVar7 = FUN_00484660();
            }
            if (param_1 < iVar7 + local_24) {
              piVar1 = (int *)*piVar11;
              while (((piVar1 != (int *)0x0 && (iVar7 = *piVar1, iVar7 != 0)) &&
                     (local_20 == (int *)0x0))) {
                if (local_24 == param_1) {
                  cVar4 = FUN_0041fd70(0);
                  if (cVar4 == '\0') {
                    sVar5 = FUN_0041e860();
                    iVar12 = (int)sVar5;
                    if (piVar11[1] + iVar10 < iVar12) {
                      iVar12 = piVar11[1] + iVar10;
                    }
                    iVar9 = FUN_00401f00(0xc);
                    local_4 = 0;
                    if (iVar9 == 0) {
                      local_20 = (int *)0x0;
                    }
                    else {
                      local_20 = (int *)FUN_00484420(piVar11[2],iVar12);
                    }
                    local_4 = 0xffffffff;
                    FUN_00446cb0(iVar7);
                  }
                  else {
                    local_24 = local_24 + -1;
                  }
                }
                piVar1 = (int *)piVar1[1];
                local_24 = local_24 + 1;
              }
            }
            else {
              iVar7 = FUN_00484660();
              local_24 = local_24 + iVar7;
              iVar7 = FUN_004845d0();
              if (((((iVar7 != 0) || (cVar4 = FUN_00484e80(0), cVar4 == '\0')) ||
                   ((0 < piVar11[1] && (*(char *)(piVar11[2] + 4) != '\"')))) &&
                  (iVar7 = FUN_004845d0(), iVar7 < piVar11[1] + *piVar1)) &&
                 ((cVar4 = FUN_004846d0(), cVar4 == '\0' || (piVar11[1] <= *piVar1)))) {
                if (local_24 != param_1) goto LAB_00486e37;
                local_20 = (int *)FUN_00401f00(0xc);
                if (local_20 == (int *)0x0) {
                  local_20 = (int *)0x0;
                }
                else {
                  local_20[2] = 0;
                  *local_20 = 0;
                  local_20[1] = 0;
                }
                iVar7 = FUN_00484660();
                local_20[1] = (piVar11[1] + *piVar1) - iVar7;
                local_20[2] = piVar1[1];
                iVar7 = FUN_00484f20();
                if (((iVar7 != 0) && (*piVar11 != 0)) && (iVar7 = FUN_0052b4a0(), iVar7 != 0)) {
                  if (*local_20 == 0) {
                    puVar8 = (undefined4 *)FUN_00401f00(8);
                    if (puVar8 == (undefined4 *)0x0) {
                      puVar8 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar8 = 0;
                      puVar8[1] = 0;
                    }
                    *local_20 = (int)puVar8;
                  }
                  for (piVar11 = (int *)*piVar11; (piVar11 != (int *)0x0 && (*piVar11 != 0));
                      piVar11 = (int *)piVar11[1]) {
                    FUN_00446cb0(*piVar11);
                  }
                }
              }
            }
          }
        }
        else {
          local_20 = (int *)0x0;
        }
      }
LAB_00486e3c:
      local_14 = (undefined4 *)local_14[1];
    } while (local_14 != (undefined4 *)0x0);
    if (local_20 != (int *)0x0) goto LAB_0048732d;
  }
  piVar1 = (int *)*in_ECX;
  while (((piVar1 != (int *)0x0 && (piVar11 = (int *)*piVar1, piVar11 != (int *)0x0)) &&
         (local_20 == (int *)0x0))) {
    local_10 = 0;
    if ((in_ECX[1] == 0) || (iVar7 = FUN_004d6d40(uVar6), iVar7 == 0)) {
LAB_00486f0a:
      if ((piVar11 != (int *)0x0) && ((0 < piVar11[1] || (local_10 < 0)))) {
        if ((((int *)*piVar11 == (int *)0x0) ||
            ((*(int *)*piVar11 == 0 || (cVar4 = FUN_0041def0(), cVar4 == '\0')))) &&
           ((-1 < local_10 && ((in_ECX[1] != 0 && (iVar7 = FUN_004d6d40(), iVar7 != 0)))))) {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar4 = FUN_00469920(piVar11[2]);
          if (cVar4 != '\0') goto LAB_00487316;
        }
        if ((((int *)*piVar11 == (int *)0x0) || (*(int *)*piVar11 == 0)) ||
           (iVar7 = FUN_00484660(), iVar7 + local_24 <= param_1)) {
          iVar7 = piVar11[1];
          iVar10 = FUN_00484660();
          if (iVar10 < iVar7) {
            piVar2 = (int *)*piVar11;
            local_18 = 0;
joined_r0x00487066:
            if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
              cVar4 = FUN_0041fcb0();
              if (cVar4 == '\0') goto code_r0x00487077;
              cVar4 = FUN_00484e80(0);
              if ((cVar4 != '\0') && (cVar4 = FUN_00484700(), cVar4 == '\0')) {
                local_24 = local_24 + 1;
              }
              if (local_24 == param_1) {
                iVar7 = FUN_00401f00(0xc);
                local_4 = 2;
                if (iVar7 == 0) {
                  local_20 = (int *)0x0;
                }
                else {
                  local_20 = (int *)FUN_00484420(piVar11[2],0);
                }
                local_4 = 0xffffffff;
                iVar7 = FUN_00484780();
                local_20[1] = iVar7;
                for (piVar2 = (int *)*piVar11;
                    (piVar2 != (int *)0x0 && (iVar7 = *piVar2, iVar7 != 0));
                    piVar2 = (int *)piVar2[1]) {
                  cVar4 = FUN_0041fcb0();
                  if (cVar4 != '\0') {
                    FUN_0067b1e0(iVar7);
                  }
                }
              }
              iVar7 = FUN_00484780();
              if (iVar7 < piVar11[1] + local_10) {
                local_18 = FUN_00484780();
                cVar4 = FUN_00484700();
                if (cVar4 == '\0') {
                  cVar4 = FUN_00484e80(0);
                  if (cVar4 == '\0') {
                    local_24 = local_24 + 1;
                  }
                }
                else {
                  local_24 = local_24 + 1;
                }
              }
              goto LAB_004871e1;
            }
            iVar7 = piVar11[1];
            iVar10 = FUN_00484660();
            if ((iVar10 < iVar7) && (iVar7 = FUN_00484660(), 0 < iVar7)) {
              local_18 = 0;
              for (piVar2 = (int *)*piVar11; (piVar2 != (int *)0x0 && (*piVar2 != 0));
                  piVar2 = (int *)piVar2[1]) {
                cVar4 = FUN_0041fd70(0);
                if (cVar4 == '\0') {
                  sVar5 = FUN_0041e860();
                  local_18 = local_18 + sVar5;
                }
              }
              iVar7 = FUN_00484660();
              local_24 = local_24 + iVar7;
              cVar4 = FUN_00484e80(0);
              if (cVar4 == '\0') {
                cVar4 = FUN_00484e80(1);
                if (cVar4 == '\0') goto LAB_004871e1;
                uVar13 = 1;
              }
              else {
                uVar13 = 0;
              }
              cVar4 = FUN_00484ec0(uVar13);
              if (cVar4 == '\0') {
                local_24 = local_24 + -1;
              }
            }
LAB_004871e1:
            cVar4 = FUN_00484e80(0);
            if ((((cVar4 != '\0') && (1 < piVar11[1])) && (local_18 != piVar11[1])) &&
               (cVar4 = FUN_004847c0(), cVar4 == '\0')) {
              local_24 = local_24 + 1;
            }
            if (((local_24 == param_1) && (local_20 == (int *)0x0)) &&
               (piVar11[1] != local_18 && -1 < piVar11[1] - local_18)) {
              iVar7 = FUN_00401f00(0xc);
              local_4 = 3;
              if (iVar7 == 0) {
                local_20 = (int *)0x0;
              }
              else {
                local_20 = (int *)FUN_00484420(piVar11[2],0);
              }
              local_20[1] = piVar11[1] - local_18;
              local_4 = 0xffffffff;
              if (*piVar11 != 0) {
                cVar4 = FUN_004847c0();
                piVar11 = (int *)*piVar11;
                if (cVar4 == '\0') {
                  for (; (piVar11 != (int *)0x0 && (iVar7 = *piVar11, iVar7 != 0));
                      piVar11 = (int *)piVar11[1]) {
                    cVar4 = FUN_0041df10(0);
                    if ((cVar4 == '\0') && (cVar4 = FUN_0041fd70(1), cVar4 != '\0')) {
                      FUN_0067b1e0(iVar7);
                    }
                  }
                }
                else {
                  for (; (piVar11 != (int *)0x0 && (iVar7 = *piVar11, iVar7 != 0));
                      piVar11 = (int *)piVar11[1]) {
                    cVar4 = FUN_0041df10(0);
                    if ((cVar4 == '\0') &&
                       ((cVar4 = FUN_0041fd70(1), cVar4 != '\0' &&
                        (cVar4 = FUN_0041fcb0(), cVar4 == '\0')))) {
                      FUN_0067b1e0(iVar7);
                    }
                  }
                }
              }
            }
            else {
              local_24 = local_24 + 1;
            }
          }
          else {
            iVar7 = FUN_00484660();
            local_24 = local_24 + iVar7;
          }
        }
        else {
          piVar2 = (int *)*piVar11;
          while (((piVar2 != (int *)0x0 && (iVar7 = *piVar2, iVar7 != 0)) &&
                 (local_20 == (int *)0x0))) {
            cVar4 = FUN_0041fd70(0);
            if (local_24 == param_1) {
              if ((cVar4 == '\0') && (sVar5 = FUN_0041e860(), 0 < sVar5)) {
                iVar10 = FUN_00401f00(0xc);
                local_4 = 1;
                if (iVar10 == 0) {
                  local_20 = (int *)0x0;
                }
                else {
                  sVar5 = FUN_0041e860();
                  local_20 = (int *)FUN_00484420(piVar11[2],(int)sVar5);
                }
                local_4 = 0xffffffff;
                FUN_00446cb0(iVar7);
              }
            }
            else if (cVar4 == '\0') {
              local_24 = local_24 + 1;
            }
            piVar2 = (int *)piVar2[1];
          }
        }
      }
    }
    else if (piVar11 != (int *)0x0) {
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      local_10 = FUN_00469ca0(piVar11[2]);
      if (local_10 < 0) {
        piVar2 = (int *)*piVar11;
        while( true ) {
          if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_00486f0a;
          cVar4 = FUN_0041df10(0);
          if (cVar4 != '\0') break;
          piVar2 = (int *)piVar2[1];
        }
        FUN_004238a0(-local_10);
      }
      goto LAB_00486f0a;
    }
LAB_00487316:
    piVar1 = (int *)piVar1[1];
  }
LAB_0048732d:
  *unaff_FS_OFFSET = local_c;
  return local_20;
code_r0x00487077:
  piVar2 = (int *)piVar2[1];
  goto joined_r0x00487066;
}



void FUN_00487350(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *in_ECX;
  
  piVar2 = (int *)*in_ECX;
  bVar1 = true;
  if (piVar2 != (int *)0x0) {
    while (bVar1) {
      if ((*piVar2 == 0) || (*(int *)(*piVar2 + 8) != param_1)) {
        piVar2 = (int *)piVar2[1];
      }
      else {
        bVar1 = false;
      }
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
      piVar2 = (int *)(*piVar2 + 4);
      *piVar2 = *piVar2 + param_2;
    }
  }
  return;
}



int FUN_004873a0(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *in_ECX;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d6d40(uVar3);
  }
  iVar7 = 0;
  for (piVar8 = (int *)(iVar4 + 8); (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    iVar5 = FUN_009832e6(*(undefined4 *)(*piVar8 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b0373c,0);
    iVar4 = iVar5;
    if (iVar5 == 0) {
      iVar7 = FUN_009832e6(*(undefined4 *)(*piVar8 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
      iVar4 = iVar7;
    }
    if ((((iVar7 != 0) && ((*(byte *)(iVar7 + 0x7c) & 2) != 0)) &&
        (cVar2 = FUN_00414eb0(), cVar2 == '\0')) ||
       ((iVar5 != 0 && ((*(byte *)(iVar5 + 0x7c) & 2) != 0)))) {
      piVar6 = (int *)*in_ECX;
      bVar1 = true;
      if (piVar6 != (int *)0x0) {
        while (bVar1) {
          if ((*piVar6 == 0) || (*(int *)(*piVar6 + 8) != iVar4)) {
            piVar6 = (int *)piVar6[1];
          }
          else {
            bVar1 = false;
          }
          if (piVar6 == (int *)0x0) goto LAB_0048748a;
        }
        if ((piVar6 != (int *)0x0) && (iVar5 = *piVar6, iVar5 != 0)) {
          if (*(int *)*piVar8 + *(int *)(iVar5 + 4) == 0) goto LAB_004874df;
          goto LAB_00487595;
        }
      }
LAB_0048748a:
      iVar7 = FUN_00401f00(0xc);
      local_4 = 0;
      if (iVar7 != 0) {
        iVar4 = FUN_00484420(iVar4,0);
        *unaff_FS_OFFSET = local_c;
        return iVar4;
      }
      goto LAB_00487593;
    }
LAB_004874df:
  }
  piVar8 = (int *)*in_ECX;
  do {
    if ((piVar8 == (int *)0x0) || ((piVar8[1] == 0 && (*piVar8 == 0)))) {
LAB_00487593:
      iVar5 = 0;
LAB_00487595:
      *unaff_FS_OFFSET = local_c;
      return iVar5;
    }
    iVar4 = FUN_009832e6(*(undefined4 *)(*piVar8 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b0373c,0);
    if (iVar4 == 0) {
      iVar4 = FUN_009832e6(*(undefined4 *)(*piVar8 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b0320c,0);
      iVar7 = iVar4;
LAB_0048754e:
      if (((iVar7 != 0) && ((*(byte *)(iVar7 + 0x7c) & 2) != 0)) &&
         (cVar2 = FUN_00414eb0(), cVar2 == '\0')) goto LAB_00487564;
    }
    else {
      if ((*(byte *)(iVar4 + 0x7c) & 2) == 0) goto LAB_0048754e;
LAB_00487564:
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      cVar2 = FUN_00469920(iVar4);
      if ((cVar2 == '\0') && (iVar4 = *piVar8, 0 < *(int *)(iVar4 + 4))) {
        *unaff_FS_OFFSET = local_c;
        return iVar4;
      }
    }
    piVar8 = (int *)piVar8[1];
  } while( true );
}



int FUN_004875c0(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  
  iVar7 = 0;
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  for (piVar1 = (int *)(iVar5 + 8); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    iVar5 = *(int *)(*piVar1 + 4);
    if ((iVar5 != 0) && (cVar4 = FUN_00469980(iVar5), cVar4 != '\0')) {
      piVar2 = (int *)*in_ECX;
      bVar3 = true;
      while (piVar2 != (int *)0x0) {
        if (!bVar3) {
          if ((piVar2 != (int *)0x0) && (*piVar2 != 0)) {
            iVar7 = iVar7 + *(int *)(*piVar2 + 4) + *(int *)*piVar1;
            goto LAB_00487632;
          }
          break;
        }
        if ((*piVar2 == 0) || (*(int *)(*piVar2 + 8) != iVar5)) {
          piVar2 = (int *)piVar2[1];
        }
        else {
          bVar3 = false;
        }
      }
      iVar7 = iVar7 + *(int *)*piVar1;
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
    }
LAB_00487632:
  }
  piVar1 = (int *)*in_ECX;
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      return iVar7;
    }
    iVar5 = *(int *)(*piVar1 + 8);
    if ((iVar5 != 0) && (cVar4 = FUN_00469980(iVar5), cVar4 != '\0')) {
      if ((in_ECX[1] != 0) && (iVar6 = FUN_004d6d40(), iVar6 != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(iVar5);
        if ((cVar4 != '\0') || (*(int *)(*piVar1 + 4) < 1)) goto LAB_004876af;
      }
      iVar7 = iVar7 + *(int *)(*piVar1 + 4);
    }
LAB_004876af:
    piVar1 = (int *)piVar1[1];
  } while( true );
}



void FUN_004876c0(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  undefined4 *in_ECX;
  
  piVar1 = (int *)*in_ECX;
joined_r0x004876cc:
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      return;
    }
    puVar2 = (undefined4 *)*piVar1;
    if ((puVar2 != (undefined4 *)0x0) && (0 < (int)puVar2[1])) {
      uVar4 = puVar2[2];
      for (piVar3 = (int *)*puVar2; (piVar3 != (int *)0x0 && (iVar5 = *piVar3, iVar5 != 0));
          piVar3 = (int *)piVar3[1]) {
        cVar6 = FUN_0041df50();
        if (cVar6 != '\0') {
          FUN_0041f370(0);
          (**(code **)(*param_1 + 0x100))(uVar4,iVar5,puVar2[1],0,0,0,0,0,1,0);
          piVar1 = (int *)*in_ECX;
          goto joined_r0x004876cc;
        }
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



undefined4 FUN_00487760(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (in_ECX[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d6d40();
  }
  piVar1 = (int *)(iVar4 + 8);
  iVar4 = 0;
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) goto LAB_004877cb;
    iVar5 = FUN_009832e6(*(undefined4 *)(*piVar1 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
    if (iVar5 != 0) {
      if (iVar5 == param_1) {
LAB_004877cb:
        piVar1 = (int *)*in_ECX;
        do {
          if (piVar1 == (int *)0x0) {
            return local_4;
          }
          puVar2 = (undefined4 *)*piVar1;
          if (puVar2 == (undefined4 *)0x0) {
            return local_4;
          }
          piVar3 = (int *)*puVar2;
          while( true ) {
            if ((piVar3 == (int *)0x0) || (*piVar3 == 0)) goto LAB_004877ff;
            iVar5 = FUN_0041ff60();
            if (iVar5 == iVar4) break;
            piVar3 = (int *)piVar3[1];
          }
          local_4 = puVar2[2];
LAB_004877ff:
          piVar1 = (int *)piVar1[1];
        } while( true );
      }
      iVar4 = iVar4 + 1;
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



undefined4 FUN_00487820(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  bool bVar5;
  int iVar6;
  undefined4 *in_ECX;
  int local_4;
  
  local_4 = 0;
  if (in_ECX[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004d6d40();
  }
  piVar4 = (int *)(iVar6 + 8);
  do {
    do {
      if ((piVar4 == (int *)0x0) ||
         ((piVar1 = (int *)piVar4[1], piVar1 == (int *)0x0 && (*piVar4 == 0)))) {
        piVar4 = (int *)*in_ECX;
        do {
          if ((piVar4 == (int *)0x0) || ((piVar4[1] == 0 && (*piVar4 == 0)))) {
            return 0;
          }
          for (piVar1 = *(int **)*piVar4; (piVar1 != (int *)0x0 && (*piVar1 != 0));
              piVar1 = (int *)piVar1[1]) {
            iVar6 = FUN_0041fb00();
            if ((iVar6 != 0) && (iVar6 = FUN_0041fb00(), *(int *)(iVar6 + 0xc) == param_1)) {
              return 1;
            }
          }
          piVar4 = (int *)piVar4[1];
        } while( true );
      }
      piVar2 = (int *)*piVar4;
      iVar6 = piVar2[1];
      piVar4 = piVar1;
    } while ((iVar6 == 0) || (*(int *)(iVar6 + 0xc) != param_1));
    piVar1 = (int *)*in_ECX;
    bVar5 = true;
    while (piVar1 != (int *)0x0) {
      if (!bVar5) {
        if (piVar1 != (int *)0x0) {
          iVar6 = *piVar1;
          goto LAB_0048788c;
        }
        break;
      }
      if ((*piVar1 == 0) || (*(int *)(*piVar1 + 8) != iVar6)) {
        piVar1 = (int *)piVar1[1];
      }
      else {
        bVar5 = false;
      }
    }
    iVar6 = 0;
LAB_0048788c:
    iVar3 = *piVar2;
    if (iVar3 < 0) {
      return 1;
    }
    if ((iVar6 != 0) && (iVar6 = *(int *)(iVar6 + 4) + iVar3, iVar6 != 0)) {
      iVar3 = iVar6;
    }
    local_4 = local_4 + iVar3;
    if (0 < local_4) {
      return 1;
    }
  } while( true );
}



undefined4
FUN_00487930(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5,int param_6)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_ECX;
  int local_4;
  
  local_4 = 0;
  if (param_5 != 0) {
    uVar3 = FUN_00487820(param_5);
    return uVar3;
  }
  param_5 = 0;
  if (param_6 != 0) {
    param_5 = FUN_009832e6(param_6,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  }
  if (in_ECX[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d6d40();
  }
  piVar1 = (int *)(iVar4 + 8);
  do {
    if ((piVar1 == (int *)0x0) || ((piVar1[1] == 0 && (*piVar1 == 0)))) {
      if (param_3 <= local_4) {
        return 1;
      }
      if (param_1 == 0) {
        for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          iVar4 = *(int *)(*piVar1 + 8);
          if ((iVar4 != 0) &&
             (((param_2 != 0 && (cVar2 = FUN_00568370(iVar4,param_2), cVar2 != '\0')) &&
              (param_3 <= *(int *)(*piVar1 + 4))))) {
            if ((param_5 != 0) && (*(int **)(param_5 + 0x58) != (int *)0x0)) {
              (**(code **)(**(int **)(param_5 + 0x58) + 0x154))(*(undefined4 *)(*piVar1 + 8));
            }
            uVar3 = FUN_00568240(*(undefined4 *)(*piVar1 + 8));
            *param_4 = uVar3;
            return 1;
          }
        }
      }
      else {
        iVar4 = FUN_00485e80(param_1,1,0);
        if ((iVar4 != 0) && (param_3 <= *(int *)(iVar4 + 4))) {
          if ((param_5 != 0) && (*(int **)(param_5 + 0x58) != (int *)0x0)) {
            (**(code **)(**(int **)(param_5 + 0x58) + 0x154))(*(undefined4 *)(iVar4 + 8));
          }
          uVar3 = FUN_00568240(*(undefined4 *)(iVar4 + 8));
          *param_4 = uVar3;
          return 1;
        }
      }
      return 0;
    }
    iVar4 = *(int *)(*piVar1 + 4);
    if (iVar4 != 0) {
      if (param_1 == 0) {
        if ((param_2 != 0) && (cVar2 = FUN_00568370(iVar4,param_2), cVar2 != '\0'))
        goto LAB_004879d4;
      }
      else if (iVar4 == param_1) {
LAB_004879d4:
        iVar5 = FUN_00485e80(iVar4,1,0);
        if (iVar5 == 0) {
          if ((param_5 != 0) && (*(int **)(param_5 + 0x58) != (int *)0x0)) {
            (**(code **)(**(int **)(param_5 + 0x58) + 0x154))(iVar4);
          }
          uVar3 = FUN_00568240(iVar4);
          *param_4 = uVar3;
          return 1;
        }
        if (*(int *)*piVar1 < 0) {
          return 1;
        }
        local_4 = local_4 + *(int *)(iVar5 + 4) + *(int *)*piVar1;
        if ((param_5 != 0) && (*(int **)(param_5 + 0x58) != (int *)0x0)) {
          (**(code **)(**(int **)(param_5 + 0x58) + 0x154))(*(undefined4 *)(iVar5 + 8));
        }
        uVar3 = FUN_00568240(*(undefined4 *)(iVar5 + 8));
        *param_4 = uVar3;
      }
    }
    piVar1 = (int *)piVar1[1];
  } while( true );
}



char FUN_00487b60(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 *in_ECX;
  char cVar6;
  int *piVar7;
  
  cVar6 = '\0';
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  piVar7 = (int *)(iVar5 + 8);
  if (piVar7 != (int *)0x0) {
    do {
      piVar1 = (int *)*piVar7;
      if (piVar1 == (int *)0x0) break;
      if (cVar6 != '\0') {
        return cVar6;
      }
      cVar4 = (**(code **)(*(int *)piVar1[1] + 0x78))();
      if (cVar4 != '\0') {
        piVar2 = (int *)*in_ECX;
        cVar6 = '\x01';
        bVar3 = true;
        while (piVar2 != (int *)0x0) {
          if (!bVar3) {
            if (((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (*(int *)(*piVar2 + 4) + *piVar1 == 0)
               ) {
              cVar6 = '\0';
            }
            break;
          }
          if ((*piVar2 == 0) || (*(int *)(*piVar2 + 8) != piVar1[1])) {
            piVar2 = (int *)piVar2[1];
          }
          else {
            bVar3 = false;
          }
        }
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
    if (cVar6 != '\0') {
      return cVar6;
    }
  }
  cVar6 = '\0';
  piVar7 = (int *)*in_ECX;
  while (((piVar7 != (int *)0x0 && ((piVar7[1] != 0 || (*piVar7 != 0)))) && (cVar6 == '\0'))) {
    iVar5 = *piVar7;
    if (((iVar5 != 0) && (cVar4 = (**(code **)(**(int **)(iVar5 + 8) + 0x78))(), cVar4 != '\0')) &&
       (0 < *(int *)(iVar5 + 4))) {
      cVar6 = '\x01';
    }
    piVar7 = (int *)piVar7[1];
  }
  return cVar6;
}



undefined4 * FUN_00487c30(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb5b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = (undefined4 *)FUN_00485e80(param_1,1,param_2);
  if ((puVar3 == (undefined4 *)0x0) && (param_2 == 0)) {
    if (*(int *)(in_ECX + 4) == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = FUN_004d6d40(uVar2);
    }
    for (piVar1 = (int *)(iVar4 + 8); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))))
        ; piVar1 = (int *)piVar1[1]) {
      if (*(int *)(*piVar1 + 4) == param_1) {
        puVar3 = (undefined4 *)FUN_00401f00(0xc);
        local_4 = 0;
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          puVar3[2] = param_1;
          puVar5 = (undefined4 *)FUN_00401f00(8);
          if (puVar5 == (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
          }
          else {
            *puVar5 = 0;
            puVar5[1] = 0;
            *puVar3 = puVar5;
            puVar3[1] = 0;
          }
        }
        local_4 = 0xffffffff;
        puVar3[1] = *(undefined4 *)*piVar1;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return puVar3;
}



int * FUN_00487d20(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afb8b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar8 = (int *)0x0;
  piVar4 = (int *)FUN_00487c30(param_1,param_2);
  if (piVar4 != (int *)0x0) {
    iVar5 = FUN_00401f00(0xc,uVar3);
    local_4 = 0;
    if (iVar5 == 0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = (int *)FUN_00484420(param_1,piVar4[1]);
    }
    piVar6 = (int *)*piVar4;
    local_4 = 0xffffffff;
    if (piVar6 != (int *)0x0) {
      iVar5 = 0;
      do {
        if (*piVar6 != 0) {
          iVar5 = iVar5 + 1;
        }
        piVar6 = (int *)piVar6[1];
      } while (piVar6 != (int *)0x0);
      if (iVar5 != 0) {
        if (*piVar8 == 0) {
          puVar7 = (undefined4 *)FUN_00401f00(8,uVar3);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)0x0;
          }
          else {
            *puVar7 = 0;
            puVar7[1] = 0;
          }
          *piVar8 = (int)puVar7;
        }
        uVar1 = *(undefined4 *)*piVar4;
        cVar2 = FUN_0041fd70(0);
        if (cVar2 == '\0') {
          FUN_00446cb0(uVar1);
        }
        else {
          for (piVar4 = (int *)*piVar4; (piVar4 != (int *)0x0 && (*piVar4 != 0));
              piVar4 = (int *)piVar4[1]) {
            FUN_0067b1e0(*piVar4);
          }
        }
        goto LAB_00487e1b;
      }
    }
    if (*piVar8 != 0) {
      FUN_00401f20(*piVar8);
      *piVar8 = 0;
    }
  }
LAB_00487e1b:
  *unaff_FS_OFFSET = local_c;
  return piVar8;
}



float10 FUN_00487e40(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int *in_ECX;
  float10 fVar11;
  float fStack_14;
  float fStack_10;
  int local_c;
  float fStack_8;
  
  local_c = 0;
  cVar6 = (**(code **)(*(int *)in_ECX[1] + 400))();
  if (cVar6 != '\0') {
    local_c = in_ECX[1];
  }
  if ((float)in_ECX[2] == -1.0) {
    fStack_10 = 0.0;
    if (in_ECX[1] == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_004d6d40();
    }
    for (piVar1 = (int *)(iVar7 + 8); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))))
        ; piVar1 = (int *)piVar1[1]) {
      piVar4 = *(int **)(*piVar1 + 4);
      cVar6 = (**(code **)(*piVar4 + 0x78))();
      if (cVar6 == '\0') {
        fVar11 = (float10)FUN_00470620(piVar4);
        fStack_14 = (float)fVar11;
        if (fStack_14 == -1.0) {
          fStack_14 = 0.0;
        }
        piVar8 = (int *)*in_ECX;
        bVar5 = true;
        if (piVar8 == (int *)0x0) {
LAB_00487f30:
          fStack_10 = fStack_14 * (float)*(int *)*piVar1 + fStack_10;
        }
        else {
          do {
            if (!bVar5) {
              if ((piVar8 == (int *)0x0) || (*piVar8 == 0)) goto LAB_00487f30;
              iVar7 = *(int *)(*piVar8 + 4) + *(int *)*piVar1;
              if (iVar7 != 0) {
                fStack_10 = fStack_14 * (float)iVar7 + fStack_10;
              }
              goto LAB_00487f5d;
            }
            if ((*piVar8 == 0) || (*(int **)(*piVar8 + 8) != piVar4)) {
              piVar8 = (int *)piVar8[1];
            }
            else {
              bVar5 = false;
            }
          } while (piVar8 != (int *)0x0);
          fStack_10 = fStack_14 * (float)*(int *)*piVar1 + fStack_10;
        }
      }
LAB_00487f5d:
    }
    for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && (iVar7 = *piVar1, iVar7 != 0));
        piVar1 = (int *)piVar1[1]) {
      piVar4 = *(int **)(iVar7 + 8);
      if (piVar4 != (int *)0x0) {
        if ((in_ECX[1] != 0) && (iVar9 = FUN_004d6d40(), iVar9 != 0)) {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar6 = FUN_00469920(piVar4);
          if (cVar6 != '\0') goto LAB_004880b5;
        }
        cVar6 = (**(code **)(*piVar4 + 0x78))();
        if (cVar6 == '\0') {
          fVar11 = (float10)FUN_00470620(piVar4);
          fVar2 = (float)fVar11;
          piVar8 = (int *)0x0;
          if ((char)piVar4[1] == '\x14') {
            piVar8 = piVar4;
          }
          iVar7 = *(int *)(iVar7 + 4);
          fStack_8 = (float)iVar7;
          if (((local_c != 0) && (piVar8 != (int *)0x0)) && (cVar6 = FUN_00484e80(0), cVar6 != '\0')
             ) {
            cVar6 = FUN_004b4c70();
            fStack_8 = fVar2;
            if (cVar6 == '\x01') {
              iVar9 = FUN_005f23b0(0x12);
              if (iVar9 == 3) {
LAB_00488077:
                pfVar10 = (float *)FUN_00403c00();
                fVar3 = *pfVar10;
              }
              else {
                iVar9 = FUN_005f23b0(0x12);
                if (iVar9 != 4) goto LAB_00488086;
                pfVar10 = (float *)FUN_00403c00();
                fVar3 = *pfVar10;
              }
              fStack_8 = fVar2 * fVar3;
            }
            else {
              cVar6 = FUN_004b4c70();
              if ((cVar6 == '\0') && (iVar9 = FUN_005f23b0(0x1b), 2 < iVar9)) goto LAB_00488077;
            }
LAB_00488086:
            if (iVar7 < 1) goto LAB_004880b5;
            fStack_10 = fStack_8 + fStack_10;
            fStack_8 = (float)(iVar7 + -1);
          }
          if (0 < (int)fStack_8) {
            fStack_10 = (float)(int)fStack_8 * fVar2 + fStack_10;
          }
        }
      }
LAB_004880b5:
    }
    in_ECX[2] = (int)fStack_10;
    cVar6 = (**(code **)(*(int *)in_ECX[1] + 400))();
    if (((cVar6 != '\0') && (in_ECX[1] != 0)) &&
       (piVar1 = *(int **)(in_ECX[1] + 0x58), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x290))();
    }
  }
  return (float10)(float)in_ECX[2];
}



int FUN_00488100(char param_1,char param_2)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *in_ECX;
  int *piVar7;
  int local_4;
  
  local_4 = 0;
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  for (piVar1 = (int *)(iVar5 + 8); (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    piVar2 = *(int **)(*piVar1 + 4);
    if (((param_1 != '\0') || (cVar4 = (**(code **)(*piVar2 + 0x78))(), cVar4 == '\0')) &&
       ((((param_2 != '\0' || (piVar2[3] != 0xf)) && (iVar5 = FUN_00470520(piVar2), iVar5 != -1)) &&
        (iVar5 != 0)))) {
      piVar7 = (int *)*in_ECX;
      bVar3 = true;
      if (piVar7 == (int *)0x0) {
LAB_004881b2:
        local_4 = local_4 + *(int *)*piVar1 * iVar5;
      }
      else {
        do {
          if (!bVar3) {
            if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) goto LAB_004881b2;
            iVar6 = *(int *)(*piVar7 + 4) + *(int *)*piVar1;
            if (iVar6 != 0) {
              local_4 = local_4 + iVar6 * iVar5;
            }
            goto LAB_004881d1;
          }
          if ((*piVar7 == 0) || (*(int **)(*piVar7 + 8) != piVar2)) {
            piVar7 = (int *)piVar7[1];
          }
          else {
            bVar3 = false;
          }
        } while (piVar7 != (int *)0x0);
        local_4 = local_4 + *(int *)*piVar1 * iVar5;
      }
    }
LAB_004881d1:
  }
  piVar1 = (int *)*in_ECX;
  do {
    if ((piVar1 == (int *)0x0) || (iVar5 = *piVar1, iVar5 == 0)) {
      return local_4;
    }
    piVar2 = *(int **)(iVar5 + 8);
    if (piVar2 != (int *)0x0) {
      if ((in_ECX[1] != 0) && (iVar6 = FUN_004d6d40(), iVar6 != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(piVar2);
        if (cVar4 != '\0') goto LAB_00488261;
      }
      if ((((param_1 != '\0') || (cVar4 = (**(code **)(*piVar2 + 0x78))(), cVar4 == '\0')) &&
          ((param_2 != '\0' || (piVar2[3] != 0xf)))) &&
         (((iVar6 = FUN_00470520(piVar2), iVar6 != -1 && (iVar6 != 0)) && (*(int *)(iVar5 + 4) != 0)
          ))) {
        local_4 = local_4 + *(int *)(iVar5 + 4) * iVar6;
      }
    }
LAB_00488261:
    piVar1 = (int *)piVar1[1];
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00488280(void)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *piVar6;
  float10 fVar7;
  float local_c;
  float local_8;
  
  if ((float)in_ECX[3] == -1.0) {
    piVar1 = (int *)*in_ECX;
    local_8 = 0.0;
    for (; (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
        piVar1 = (int *)piVar1[1]) {
      piVar6 = (int *)*piVar2;
      iVar5 = piVar2[2];
      if (piVar6 != (int *)0x0) {
        while (*piVar6 != 0) {
          cVar4 = FUN_0041df10(0);
          if (cVar4 != '\0') {
            if (*(char *)(iVar5 + 4) != '\"') {
              fVar7 = (float10)FUN_00470620(iVar5);
              local_c = (float)fVar7;
              if ((*(char *)(iVar5 + 4) == '\x14') &&
                 (iVar5 = FUN_009832e6(iVar5,0,&PTR_PTR_00b03268,&PTR_PTR_00b03778,0), iVar5 != 0))
              {
                cVar4 = FUN_004b4c70();
                if (cVar4 == '\x01') {
                  iVar5 = FUN_005f23b0(0x12);
                  fVar3 = _DAT_00b374d8;
                  if ((iVar5 == 3) ||
                     (iVar5 = FUN_005f23b0(0x12), fVar3 = _DAT_00b374e0, iVar5 == 4)) {
LAB_0048838b:
                    local_c = fVar3 * local_c;
                  }
                }
                else {
                  cVar4 = FUN_004b4c70();
                  if ((cVar4 == '\0') &&
                     (iVar5 = FUN_005f23b0(0x1b), fVar3 = _DAT_00b374e8, 2 < iVar5))
                  goto LAB_0048838b;
                }
              }
              local_8 = (float)piVar2[1] * local_c + local_8;
            }
            break;
          }
          piVar6 = (int *)piVar6[1];
          if (piVar6 == (int *)0x0) break;
        }
      }
    }
    in_ECX[3] = local_8;
  }
  return (float10)(float)in_ECX[3];
}



char FUN_004883d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_ECX;
  char cVar4;
  
  piVar1 = (int *)*in_ECX;
  cVar4 = '\0';
  while (((piVar1 != (int *)0x0 && ((undefined4 *)*piVar1 != (undefined4 *)0x0)) && (cVar4 == '\0'))
        ) {
    for (piVar2 = *(int **)*piVar1; (piVar2 != (int *)0x0 && (*piVar2 != 0));
        piVar2 = (int *)piVar2[1]) {
      iVar3 = FUN_0041ff60();
      if (iVar3 == param_1) {
        cVar4 = '\x01';
      }
    }
    piVar1 = (int *)piVar1[1];
  }
  return cVar4;
}



void FUN_00488420(void)

{
  int *piVar1;
  uint *puVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_1c [16];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afbb8;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 4) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_004d6d40(uVar6);
  }
  piVar1 = (int *)(iVar7 + 8);
  iVar7 = 0;
  uVar8 = FUN_0046b250(7);
  FUN_009832e6(uVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
  sVar4 = FUN_004677f0();
  if (*(int *)(in_ECX + 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004d6d40(uVar6);
  }
  iVar9 = FUN_009832e6(uVar8,0,&PTR_PTR_00b05d10,&PTR_PTR_00b03de4,0);
  if ((iVar9 != 0) && (sVar5 = FUN_004677f0(), sVar5 < sVar4)) {
    sVar4 = FUN_004677f0();
  }
  for (; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
  {
    puVar2 = (uint *)*piVar1;
    if ((puVar2[1] != 0) && ((*(char *)(puVar2[1] + 4) == '+' && (puVar2[1] != 0)))) {
      cVar3 = FUN_004883d0(iVar7);
      if (cVar3 == '\0') {
        FUN_00469690();
        uVar6 = (int)*puVar2 >> 0x1f;
        local_4 = 0;
        FUN_0046cde0(sVar4,(*puVar2 ^ uVar6) - uVar6,local_1c);
        FUN_004699c0(iVar7,in_ECX);
        local_4 = 0xffffffff;
        FUN_0046a010();
      }
      iVar7 = iVar7 + 1;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



short FUN_00488580(void)

{
  undefined4 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *in_ECX;
  short local_4;
  
  local_4 = 0;
  cVar2 = FUN_0045a170();
  if (cVar2 != '\0') {
    local_4 = 6;
  }
  local_4 = local_4 + 2;
  for (piVar4 = (int *)*in_ECX; (piVar4 != (int *)0x0 && ((piVar4[1] != 0 || (*piVar4 != 0))));
      piVar4 = (int *)piVar4[1]) {
    if (*piVar4 != 0) {
      sVar3 = FUN_00485660();
      local_4 = local_4 + sVar3;
    }
  }
  if (DAT_00b05bac != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    if (puVar1 != (undefined4 *)0x0) {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar5 = (**(code **)(*piVar4 + 0xd4))
                        (*(undefined4 *)((int)puVar1 + 5),0x2131,
                         "..\\TES Shared\\InventoryChanges.cpp");
      FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                   ,local_4,*puVar1,uVar5);
      return local_4;
    }
    FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",local_4,0x2131,
                 "..\\TES Shared\\InventoryChanges.cpp");
  }
  return local_4;
}



void FUN_00488650(void)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  char cVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int local_10;
  short *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = *(int *)(DAT_00b33b00 + 0x14);
  local_c = (short *)0x0;
  cVar7 = FUN_0045a170();
  if (cVar7 != '\0') {
    local_8 = 0x4b4f4c42;
    FUN_0045b9a0(&local_8,4);
    local_c = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  local_10 = 0;
  puVar2 = *(undefined2 **)(DAT_00b33b00 + 0x14);
  FUN_0045b9a0(&local_10,2);
  for (piVar8 = (int *)*in_ECX; (piVar8 != (int *)0x0 && ((piVar8[1] != 0 || (*piVar8 != 0))));
      piVar8 = (int *)piVar8[1]) {
    if (*piVar8 != 0) {
      FUN_00485730();
      local_10 = local_10 + 1;
    }
  }
  *puVar2 = (undefined2)local_10;
  if (DAT_00b05bac != '\0') {
    puVar3 = *(undefined4 **)(DAT_00b33b00 + 0x84);
    iVar4 = *(int *)(DAT_00b33b00 + 0x14);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar4 - iVar1,0x214d,
                   "..\\TES Shared\\InventoryChanges.cpp");
    }
    else {
      piVar8 = (int *)FUN_0046b250(*puVar3);
      uVar9 = (**(code **)(*piVar8 + 0xd4))
                        (*(undefined4 *)((int)puVar3 + 5),0x214d,
                         "..\\TES Shared\\InventoryChanges.cpp");
      FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
                   iVar4 - iVar1,*puVar3,uVar9);
    }
  }
  cVar7 = FUN_0045a170();
  psVar6 = local_c;
  if (cVar7 != '\0') {
    uVar5 = *(uint *)(DAT_00b33b00 + 0x14);
    if ((int)local_c + 0xffffU < uVar5) {
      FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                   "..\\TES Shared\\InventoryChanges.cpp",0x214d);
    }
    *psVar6 = (short)uVar5 - (short)psVar6;
  }
  return;
}



void FUN_004887c0(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  
  for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
      piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_00485bc0();
    }
  }
  return;
}



float10 FUN_004887f0(void)

{
  int in_ECX;
  
  return (float10)((float)*(ushort *)(in_ECX + 0xe4) / 100.0);
}



void FUN_00488810(undefined4 param_1)

{
  FUN_004028d0(param_1,0);
  return;
}



void FUN_00488830(float param_1,int param_2,undefined4 *param_3,char param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *in_ECX;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afbf6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0,uVar1);
  iVar3 = FUN_0046ca20(in_ECX[2]);
  piVar4 = (int *)FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05cf4,0);
  if (piVar4 != (int *)0x0) {
    if (((int *)*in_ECX == (int *)0x0) || (*(int *)*in_ECX == 0)) {
      (**(code **)(*piVar4 + 0x10))();
    }
    else {
      fVar9 = (float10)FUN_0041e810();
      if (fVar9 == (float10)-1.0) {
        (**(code **)(*piVar4 + 0x10))();
      }
      else {
        FUN_0041e810();
      }
    }
  }
  iVar5 = FUN_009828c0();
  if (*(int **)(param_2 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_2 + 4) + 0x40))(0x8000000);
  }
  if (iVar2 != 0) {
    if ((param_1 < (float)iVar3) || (iVar3 < iVar5)) {
      puVar7 = (undefined4 *)*in_ECX;
      if (puVar7 == (undefined4 *)0x0) {
        iVar2 = FUN_00401f00(0x14);
        uVar8 = 0;
        uStack_4 = 0;
        if (iVar2 != 0) {
          uVar8 = FUN_00422ee0();
        }
        uStack_4 = 0xffffffff;
        puVar6 = (undefined4 *)FUN_00401f00(8);
        puVar7 = (undefined4 *)0x0;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = 0;
          puVar6[1] = 0;
          puVar7 = puVar6;
        }
        FUN_0041ee90(param_1);
        FUN_00446cb0(uVar8);
        *in_ECX = (int)puVar7;
      }
      else {
        do {
          if ((undefined4 *)*puVar7 == (undefined4 *)0x0) break;
          if ((undefined4 *)*puVar7 == param_3) {
            FUN_0041ecb0(param_1);
            goto LAB_00488a87;
          }
          puVar7 = (undefined4 *)puVar7[1];
        } while (puVar7 != (undefined4 *)0x0);
        iVar2 = FUN_00401f00(0x14);
        uStack_4 = 1;
        if (iVar2 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00422ee0();
        }
        uStack_4 = 0xffffffff;
        FUN_0041ecb0(param_1);
        FUN_00446cb0(uVar8);
      }
    }
    else {
      piVar4 = (int *)*in_ECX;
      if (piVar4 != (int *)0x0) {
        while (puVar7 = (undefined4 *)*piVar4, puVar7 != (undefined4 *)0x0) {
          if (puVar7 == param_3) {
            FUN_0041f610();
            if ((puVar7[1] == 0) && (param_4 != '\0')) {
              FUN_00485e80(in_ECX[2],1,0);
              FUN_0065c620(puVar7);
              (**(code **)*puVar7)(1);
            }
            break;
          }
          piVar4 = (int *)piVar4[1];
          if (piVar4 == (int *)0x0) break;
        }
      }
    }
  }
LAB_00488a87:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00488aa0(float param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afc36;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_009832e6(in_ECX[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0,uVar1);
  if (iVar2 != 0) {
    piVar5 = (int *)*in_ECX;
    if (param_1 <= (float)*(ushort *)(iVar2 + 8)) {
      if (piVar5 == (int *)0x0) {
        iVar2 = FUN_00401f00(0x14);
        local_4 = 0;
        if (iVar2 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_00422ee0();
        }
        local_4 = 0xffffffff;
        puVar4 = (undefined4 *)FUN_00401f00(8);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)0x0;
        }
        else {
          *puVar4 = 0;
          puVar4[1] = 0;
        }
        FUN_0041ee90(param_1);
        FUN_00446cb0(uVar3);
        *in_ECX = (int)puVar4;
        *unaff_FS_OFFSET = local_c;
        return;
      }
      do {
        if ((undefined4 *)*piVar5 == (undefined4 *)0x0) break;
        if ((undefined4 *)*piVar5 == param_3) {
          FUN_0041ee90(param_1);
          *unaff_FS_OFFSET = local_c;
          return;
        }
        piVar5 = (int *)piVar5[1];
      } while (piVar5 != (int *)0x0);
      iVar2 = FUN_00401f00(0x14);
      local_4 = 1;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00422ee0();
      }
      local_4 = 0xffffffff;
      FUN_0041ee90(param_1);
      FUN_00446cb0(uVar3);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (piVar5 != (int *)0x0) {
      while (puVar4 = (undefined4 *)*piVar5, puVar4 != (undefined4 *)0x0) {
        if (puVar4 == param_3) {
          FUN_0041f640();
          if (puVar4[1] == 0) {
            FUN_00485e80(in_ECX[2],1,0);
            FUN_0065c620(puVar4);
            (**(code **)*puVar4)(1);
          }
          break;
        }
        piVar5 = (int *)piVar5[1];
        if (piVar5 == (int *)0x0) {
          *unaff_FS_OFFSET = local_c;
          return;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00488cb0(int *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  
  if (*(char *)(*(int *)(in_ECX + 8) + 4) == '\x14') {
    (**(code **)(*param_1 + 0x288))(7);
    iVar4 = *(int *)(in_ECX + 8);
    iVar3 = *param_1;
    uVar2 = FUN_004b4c80();
    fVar5 = (float10)(**(code **)(iVar3 + 0x288))(uVar2);
    iVar3 = FUN_0046ca20(iVar4);
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    if (fVar1 == 0.0) {
      fVar6 = (float10)0;
    }
    else {
      fVar6 = (float10)FUN_00484850(0);
      fVar6 = fVar6 / (float10)fVar1;
    }
    FUN_00547370((int)ROUND((float)*(ushort *)(iVar4 + 0xe4) / 100.0) & 0xffff,(float)fVar5,
                 0xbf800000,(float)fVar6);
  }
  iVar4 = FUN_009828c0();
  fVar5 = (float10)iVar4;
  if (fVar5 - extraout_ST0 < (float10)0.0) {
    fVar5 = fVar5 + (float10)1.0;
  }
  return (float10)(float)fVar5;
}



undefined1 * FUN_00488df0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  char *pcVar5;
  uint uVar6;
  
  iVar3 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03298,0);
  puVar4 = DAT_00b38d30;
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 8) == 0xffff) {
      pcVar5 = *(char **)(iVar3 + 4);
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar3 + 8);
    }
    if ((uVar6 != 0) &&
       (puVar4 = *(undefined1 **)(iVar3 + 4), *(undefined1 **)(iVar3 + 4) == (undefined1 *)0x0)) {
      return &DAT_00a2f7ec;
    }
  }
  return puVar4;
}



float10 FUN_00488e50(char param_1,undefined4 param_2,char param_3)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int in_ECX;
  float10 fVar8;
  float local_c;
  
  local_c = -1.0;
  iVar3 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05c24,0);
  iVar4 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03280,0);
  iVar5 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
  iVar6 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(iVar6 + 4);
  }
  if (iVar3 == 0) {
    fVar1 = local_c;
    if (iVar4 == 0) goto LAB_00488f8f;
    fVar8 = (float10)(*(code *)**(undefined4 **)(iVar4 + 0xc))(0);
LAB_00488ef0:
    local_c = (float)fVar8;
  }
  else {
    if ((iVar5 == 0) || (iVar6 == 0)) {
      fVar8 = (float10)*(int *)(iVar3 + 4);
      goto LAB_00488ef0;
    }
    if (*(int *)(iVar6 + 0x34) != 3) {
      uVar2 = FUN_00484340(*(undefined4 *)(in_ECX + 8));
      fVar8 = (float10)(*(code *)**(undefined4 **)(iVar6 + 0x24))(0);
      if (*(char *)(*(int *)(in_ECX + 8) + 4) == '\x15') {
        pfVar7 = (float *)FUN_00403c00();
        fVar8 = (float10)*(int *)(iVar3 + 4) + (float10)(*pfVar7 * (float)fVar8);
      }
      else {
        fVar8 = (float10)FUN_005489a0((float)*(int *)(iVar3 + 4),(float)uVar2,(float)fVar8);
      }
      goto LAB_00488ef0;
    }
    local_c = (float)*(int *)(iVar3 + 4);
    if ((local_c != 0.0) && (iVar6 = iVar6 + 0x24, iVar6 != 0)) {
      while (*(int *)(iVar6 + 4) != 0) {
        iVar3 = *(int *)(*(int *)(iVar6 + 4) + 0x1c);
        if ((*(uint *)(iVar3 + 0x58) >> 8 & 1) == 0) {
          iVar4 = FUN_00413320();
        }
        else {
          FUN_00403c00();
          iVar4 = FUN_009828c0();
        }
        local_c = *(float *)(iVar3 + 0x94) * (float)iVar4 + local_c;
        if ((*(int *)(iVar6 + 8) == 0) || (iVar6 = *(int *)(iVar6 + 8) + -4, iVar6 == 0)) break;
      }
    }
  }
  fVar1 = local_c;
  if (param_1 != '\0') {
    if (param_3 == '\0') {
      fVar8 = (float10)FUN_005e11a0(param_2);
      local_c = ((float)*(int *)(DAT_00b333c4 + 0x11c) * 0.01 + (float)fVar8) * local_c;
      iVar3 = FUN_005f23b0(0x1d);
      if (iVar3 < 1) {
        fVar8 = (float10)FUN_00484850(1);
        if (0.0 <= (float)fVar8) {
          local_c = (float)fVar8 * 0.01 * local_c;
        }
      }
      fVar8 = (float10)FUN_00484370(local_c);
      if ((fVar1 < (float)fVar8) || (iVar3 = FUN_005f23b0(0x1d), local_c = (float)fVar8, 3 < iVar3))
      {
        local_c = fVar1;
      }
      iVar3 = FUN_005faa70();
      fVar1 = (float)iVar3;
      if (iVar3 < 0) {
        fVar1 = fVar1 + 4.2949673e+09;
      }
      if ((float10)local_c <= (float10)fVar1) {
        return (float10)local_c;
      }
      return (float10)fVar1;
    }
    fVar8 = (float10)FUN_005e1200(param_2);
    fVar8 = (float10)FUN_00484370(((float)fVar8 - (float)*(int *)(DAT_00b333c4 + 0x11c) * 0.01) *
                                  local_c);
    if (((float)fVar8 < local_c) || (iVar3 = FUN_005f23b0(0x1d), fVar1 = (float)fVar8, 3 < iVar3)) {
      fVar1 = local_c;
    }
  }
LAB_00488f8f:
  return (float10)fVar1;
}



float10 FUN_004891c0(void)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  float unaff_EBX;
  undefined4 unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  double dVar8;
  
  iVar2 = FUN_00485150();
  iVar3 = FUN_009832e6(*(undefined4 *)(in_ECX + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05c94,0);
  if (iVar3 != 0) {
    return (float10)((int)ROUND(*(float *)(iVar3 + 4)) & 0xff);
  }
  (**(code **)(*DAT_00b333c4 + 0x288))(7);
  (**(code **)(*DAT_00b333c4 + 0x284))(0);
  (**(code **)(*DAT_00b333c4 + 0x284))(3);
  fVar5 = (float10)FUN_005f4880();
  iVar3 = *(int *)(in_ECX + 8);
  if (iVar2 != 1) {
    if (*(char *)(iVar3 + 4) == '\x14') {
      iVar2 = *DAT_00b333c4;
      uVar4 = FUN_004b4c80();
      fVar5 = (float10)(**(code **)(iVar2 + 0x288))(uVar4);
      fVar6 = (float10)FUN_00484850(0);
      iVar2 = FUN_0046ca20(iVar3);
      fVar7 = (float)iVar2;
      if (iVar2 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      fVar5 = (float10)FUN_00547370((int)ROUND((float)*(ushort *)(iVar3 + 0xe4) / 100.0) & 0xffff,
                                    (float)fVar5,unaff_EDI,(float)fVar6 / fVar7);
      fVar5 = (float10)FUN_00484370((float)fVar5);
      return (float10)(float)fVar5;
    }
    goto LAB_004893a5;
  }
  if (*(char *)(iVar3 + 4) == '!') {
    if (*(char *)(iVar3 + 0x90) != '\x04') {
      iVar2 = *DAT_00b333c4;
      uVar4 = FUN_004bb060();
      (**(code **)(iVar2 + 0x288))(uVar4);
      uVar1 = (**(code **)(*(int *)(iVar3 + 0x88) + 0x10))();
      fVar6 = (float10)FUN_00484850(0);
      dVar8 = (double)fVar6;
      iVar2 = FUN_0046ca20(iVar3);
      fVar7 = (float)iVar2;
      if (iVar2 < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      fVar7 = (float)dVar8 / fVar7;
      goto LAB_00489363;
    }
    fVar5 = (float10)-1.0;
  }
  else {
    (**(code **)(*DAT_00b333c4 + 0x288))(0x1c);
    uVar1 = (**(code **)(*(int *)(iVar3 + 0x74) + 0x10))();
    fVar7 = 1.0;
LAB_00489363:
    uVar4 = FUN_009828c0((float)fVar5,uVar1,fVar7,0x3f800000,1);
    uVar4 = FUN_009828c0(uVar4);
    uVar4 = FUN_009828c0(uVar4);
    fVar5 = (float10)FUN_00547070(uVar4);
  }
  fVar5 = (float10)FUN_004843b0((float)fVar5,0x3f800000);
  unaff_EBX = (float)fVar5;
LAB_004893a5:
  return (float10)unaff_EBX;
}



void FUN_004894d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  while ((puVar1 != (undefined4 *)0x0 &&
         (puVar2 = (undefined4 *)*puVar1, puVar2 != (undefined4 *)0x0))) {
    piVar3 = (int *)*puVar2;
    puVar1 = (undefined4 *)puVar1[1];
    while ((piVar3 != (int *)0x0 && (puVar4 = (undefined4 *)*piVar3, puVar4 != (undefined4 *)0x0)))
    {
      piVar3 = (int *)piVar3[1];
      FUN_0041dff0(1);
      if (puVar4 != (undefined4 *)0x0) {
        (**(code **)*puVar4)(1);
      }
    }
    puVar4 = (undefined4 *)*puVar2;
    if (puVar4 != (undefined4 *)0x0) {
      iVar5 = puVar4[1];
      while (iVar5 != 0) {
        iVar5 = *(int *)(puVar4[1] + 4);
        FUN_00401f20(puVar4[1]);
        puVar4[1] = iVar5;
      }
      *puVar4 = 0;
    }
    FUN_00401f20(*puVar2);
    *puVar2 = 0;
    FUN_00401f20(puVar2);
  }
  puVar1 = (undefined4 *)*in_ECX;
  iVar5 = puVar1[1];
  while (iVar5 != 0) {
    iVar5 = *(int *)(puVar1[1] + 4);
    FUN_00401f20(puVar1[1]);
    puVar1[1] = iVar5;
  }
  *puVar1 = 0;
  if (in_ECX[1] != 0) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))(0x8000000);
  }
  FUN_00401f20(*in_ECX);
  return;
}



void FUN_004895b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  short sVar5;
  int *piVar6;
  int iVar7;
  undefined4 *in_ECX;
  
  piVar6 = (int *)*in_ECX;
  bVar3 = true;
  if (piVar6 != (int *)0x0) {
    while (bVar3) {
      if ((*piVar6 == 0) || (*(int *)(*piVar6 + 8) != param_1)) {
        piVar6 = (int *)piVar6[1];
      }
      else {
        bVar3 = false;
      }
      if (piVar6 == (int *)0x0) {
        return;
      }
    }
    if ((piVar6 != (int *)0x0) && (piVar6 = (int *)*piVar6, piVar6 != (int *)0x0)) {
      for (piVar1 = (int *)*piVar6; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        iVar2 = *piVar1;
        cVar4 = FUN_00422c40();
        if ((cVar4 == param_2) &&
           ((FUN_00422c60(), *(int *)(iVar2 + 4) == 0 ||
            ((sVar5 = FUN_0041e860(), 1 < sVar5 && (iVar7 = FUN_0041e060(), iVar7 == 1)))))) {
          FUN_0065c620(iVar2);
          break;
        }
      }
      piVar1 = (int *)*piVar6;
      if ((piVar1[1] == 0) && (*piVar1 == 0)) {
        FUN_00401f20(piVar1);
        *piVar6 = 0;
        if (piVar6[1] == 0) {
          FUN_0065c620(piVar6);
          if (*piVar6 != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*piVar6);
          *piVar6 = 0;
          FUN_00401f20(piVar6);
        }
      }
    }
  }
  return;
}



int * FUN_004896b0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afaab;
  local_c = *unaff_FS_OFFSET;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar10 = (int *)*in_ECX;
  bVar4 = true;
  do {
    if (piVar10 == (int *)0x0) {
LAB_00489703:
      puVar8 = (undefined4 *)0x0;
LAB_00489705:
      piVar10 = (int *)0x0;
      if (puVar8 != (undefined4 *)0x0) {
        piVar1 = (int *)*puVar8;
        while ((piVar1 != (int *)0x0 && (piVar10 == (int *)0x0))) {
          iVar2 = *piVar1;
          if ((iVar2 != 0) && (cVar5 = FUN_00422c40(uVar7), cVar5 == param_2)) {
            piVar10 = (int *)FUN_00401f00(0xc);
            local_4 = 0;
            if (piVar10 == (int *)0x0) {
              piVar10 = (int *)0x0;
            }
            else {
              sVar6 = FUN_0041e860();
              piVar10[2] = param_1;
              puVar8 = (undefined4 *)FUN_00401f00(8);
              if (puVar8 == (undefined4 *)0x0) {
                *piVar10 = 0;
                piVar10[1] = (int)sVar6;
              }
              else {
                *puVar8 = 0;
                puVar8[1] = 0;
                *piVar10 = (int)puVar8;
                piVar10[1] = (int)sVar6;
              }
            }
            local_4 = 0xffffffff;
            if (*piVar10 == 0) {
              puVar8 = (undefined4 *)FUN_00401f00(8);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = (undefined4 *)0x0;
              }
              else {
                *puVar8 = 0;
                puVar8[1] = 0;
              }
              *piVar10 = (int)puVar8;
            }
            piVar3 = (int *)*piVar10;
            if (*piVar3 != 0) {
              piVar9 = (int *)FUN_00401f00(8);
              if (piVar9 == (int *)0x0) {
                piVar9 = (int *)0x0;
              }
              else {
                *piVar9 = *piVar3;
                piVar9[1] = 0;
              }
              piVar9[1] = piVar3[1];
              piVar3[1] = (int)piVar9;
            }
            *piVar3 = iVar2;
          }
          piVar1 = (int *)piVar1[1];
        }
      }
      *unaff_FS_OFFSET = local_c;
      return piVar10;
    }
    if (!bVar4) {
      if (piVar10 != (int *)0x0) {
        puVar8 = (undefined4 *)*piVar10;
        goto LAB_00489705;
      }
      goto LAB_00489703;
    }
    if ((*piVar10 == 0) || (*(int *)(*piVar10 + 8) != param_1)) {
      piVar10 = (int *)piVar10[1];
    }
    else {
      bVar4 = false;
    }
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00489820(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  undefined4 *in_ECX;
  undefined4 *puVar9;
  int *piVar10;
  int *unaff_FS_OFFSET;
  int local_11c;
  int local_118;
  char local_114;
  undefined1 local_113 [259];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afc8a;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_11c;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffed4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_11c = param_2;
  piVar10 = (int *)*in_ECX;
  bVar2 = true;
  while (piVar10 != (int *)0x0) {
    if (!bVar2) {
      if (piVar10 != (int *)0x0) {
        piVar10 = (int *)*piVar10;
        goto LAB_004898a0;
      }
      break;
    }
    if ((*piVar10 == 0) || (*(int *)(*piVar10 + 8) != param_1)) {
      piVar10 = (int *)piVar10[1];
    }
    else {
      bVar2 = false;
    }
  }
  piVar10 = (int *)0x0;
LAB_004898a0:
  if (in_ECX[1] != 0) {
    FUN_004d6d40(uVar5);
  }
  puVar9 = (undefined4 *)0x0;
  if ((local_11c == 0) || (cVar3 = FUN_0041df40(), cVar3 == '\0')) {
    if ((in_ECX[1] != 0) && (iVar6 = FUN_004d6d40(uVar5), iVar6 != 0)) {
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      puVar9 = (undefined4 *)FUN_00469950(param_1);
    }
    if (piVar10 == (int *)0x0) {
      local_11c = FUN_00401f00(0xc);
      local_4 = 1;
      if (local_11c == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00484420(param_1,0);
      }
      local_4 = 0xffffffff;
      local_11c = FUN_00401f00(0x14);
      local_4 = 2;
      if (local_11c == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00422ee0();
      }
      local_4 = 0xffffffff;
      FUN_00422ba0(param_3);
      FUN_004238a0(*(undefined2 *)puVar9);
      if (*piVar10 == 0) {
        puVar9 = (undefined4 *)FUN_00401f00(8);
        if (puVar9 == (undefined4 *)0x0) {
          puVar9 = (undefined4 *)0x0;
        }
        else {
          *puVar9 = 0;
          puVar9[1] = 0;
        }
        *piVar10 = (int)puVar9;
      }
      FUN_00446cb0(uVar7);
      FUN_00446cb0(piVar10);
    }
    else {
      piVar1 = (int *)*piVar10;
      while ((piVar1 != (int *)0x0 && (local_11c != 0))) {
        if (*piVar1 == local_11c) {
          FUN_00422ba0(param_3);
          cVar3 = FUN_0041df10(0);
          if (cVar3 == '\0') goto switchD_004899cc_caseD_15;
          switch(*(undefined1 *)(piVar10[2] + 4)) {
          case 0x14:
            iVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf8))(1);
            if (iVar6 == 0) goto switchD_004899cc_caseD_15;
            pcVar8 = *(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf8);
            break;
          default:
            goto switchD_004899cc_caseD_15;
          case 0x1a:
            iVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf0))(1);
            if (iVar6 == 0) goto switchD_004899cc_caseD_15;
            pcVar8 = *(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf0);
            break;
          case 0x21:
            iVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xec))(1);
            if (iVar6 == 0) goto switchD_004899cc_caseD_15;
            pcVar8 = *(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xec);
            break;
          case 0x22:
            iVar6 = (**(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf4))(1);
            if (iVar6 == 0) goto switchD_004899cc_caseD_15;
            pcVar8 = *(code **)(**(int **)(DAT_00b333c4 + 0x58) + 0xf4);
          }
          iVar6 = (*pcVar8)(1);
          if (piVar10[2] == *(int *)(iVar6 + 8)) {
            FUN_00422ba0(param_3);
          }
          goto switchD_004899cc_caseD_15;
        }
        piVar1 = (int *)piVar1[1];
      }
      local_118 = FUN_00401f00(0x14);
      local_4 = 0;
      if (local_118 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00422ee0();
      }
      local_4 = 0xffffffff;
      FUN_00422ba0(param_3);
      sVar4 = 0;
      if (puVar9 != (undefined4 *)0x0) {
        sVar4 = (short)*puVar9;
      }
      FUN_004238a0((short)piVar10[1] + sVar4);
      if (*piVar10 == 0) {
        puVar9 = (undefined4 *)FUN_00401f00(8);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          *piVar10 = (int)puVar9;
          FUN_00446cb0(uVar7);
          goto switchD_004899cc_caseD_15;
        }
        *piVar10 = 0;
      }
      FUN_00446cb0(uVar7);
    }
  }
  else {
    local_114 = '\0';
    _memset(local_113,0,0x103);
    _sprintf(&local_114,"%s",DAT_00b38bb8);
    FUN_0057add0(&local_114,0x40000000,0,0);
  }
switchD_004899cc_caseD_15:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00489c30(int param_1,int param_2,int *param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  bool bVar2;
  int *piVar3;
  char cVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int *piVar10;
  int iVar11;
  int iVar12;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int iStack_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afd0d;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0xbf800000;
  in_ECX[3] = 0xbf800000;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x40))(0x8000000,uVar6);
    if ((*(char *)(param_1 + 4) == '\x16') || (*(char *)(param_1 + 4) == '\x14')) {
      FUN_004691b0(param_1);
      cVar4 = FUN_00468ff0(7,0);
      if ((cVar4 == '\0') &&
         (((cVar4 = FUN_00468ff0(6,0), cVar4 == '\0' && (cVar4 = FUN_00468ff0(8,0), cVar4 == '\0'))
          && (cVar4 = FUN_00468ff0(0xd,0), cVar4 == '\0')))) {
        if ((param_4 == 0) || (cVar4 = FUN_0041def0(), cVar4 == '\0')) {
          (**(code **)(*(int *)in_ECX[1] + 0x40))(0x20000000);
        }
        else {
          (**(code **)(*(int *)in_ECX[1] + 0x48))(0x20000000);
        }
      }
    }
  }
  piVar10 = (int *)*in_ECX;
  bVar2 = true;
  while (piVar10 != (int *)0x0) {
    if (!bVar2) {
      if (piVar10 != (int *)0x0) {
        piVar10 = (int *)*piVar10;
        goto LAB_00489d31;
      }
      break;
    }
    if ((*piVar10 == 0) || (*(int *)(*piVar10 + 8) != param_1)) {
      piVar10 = (int *)piVar10[1];
    }
    else {
      bVar2 = false;
    }
  }
  piVar10 = (int *)0x0;
LAB_00489d31:
  if (in_ECX[1] != 0) {
    FUN_004d6d40();
  }
  iStack_14 = FUN_00469ca0(param_1);
  iVar11 = iStack_14;
  if (iStack_14 < 0) {
    iVar11 = -iStack_14;
  }
  if (piVar10 != (int *)0x0) {
    iStack_14 = iStack_14 + piVar10[1];
  }
  iVar12 = 0;
  if ((piVar10 != (int *)0x0) && (*piVar10 != 0)) {
    iVar12 = FUN_004845d0();
    iVar7 = FUN_00484620();
    iVar12 = iVar12 + iVar7;
  }
  iStack_14 = iStack_14 - iVar12;
  iVar7 = param_4;
  if ((piVar10 != (int *)0x0) && ((int *)*piVar10 != (int *)0x0)) {
    if ((*(int *)*piVar10 != 0) && (cVar4 = FUN_0041def0(), cVar4 != '\0')) {
      iStack_14 = iVar11 - iVar12;
    }
    if (param_4 != 0) {
      piVar1 = (int *)*piVar10;
      cVar4 = FUN_00446c30(param_4);
      if (cVar4 == '\0') {
        for (; (piVar1 != (int *)0x0 && (iVar7 = *piVar1, iVar7 != 0)); piVar1 = (int *)piVar1[1]) {
          cVar4 = FUN_0041e550(param_4);
          if (cVar4 == '\0') goto LAB_00489de8;
        }
        param_4 = 0;
        iVar7 = param_4;
      }
    }
  }
LAB_00489de8:
  param_4 = iVar7;
  iVar11 = 0;
  bVar2 = true;
  if ((param_4 == 0) && (0 < iStack_14)) {
    if (piVar10 == (int *)0x0) {
LAB_00489ea3:
      iVar11 = FUN_00401f00(0xc);
      uStack_4 = 0;
      if (iVar11 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00484420(param_1,0);
      }
      uStack_4 = 0xffffffff;
      FUN_0067b1e0(piVar10);
    }
LAB_00489fe0:
    iVar11 = FUN_00401f00(0x14);
    uStack_4 = 2;
    if (iVar11 == 0) {
      param_4 = 0;
    }
    else {
      param_4 = FUN_00422ee0();
    }
    uStack_4 = 0xffffffff;
    FUN_0041f200(1,param_5);
    if (1 < param_2) {
      FUN_004238a0(param_2);
    }
    if (*piVar10 == 0) {
      puVar8 = (undefined4 *)FUN_00401f00(8);
      if (puVar8 == (undefined4 *)0x0) {
        puVar8 = (undefined4 *)0x0;
      }
      else {
        *puVar8 = 0;
        puVar8[1] = 0;
      }
      *piVar10 = (int)puVar8;
    }
    for (piVar10 = (int *)*piVar10; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
      if (*piVar10 == param_4) goto LAB_0048a071;
    }
    FUN_00446cb0(param_4);
  }
  else {
    if (piVar10 == (int *)0x0) goto LAB_00489ea3;
    cVar4 = FUN_00484e80(0);
    if (cVar4 != '\0') goto LAB_0048a4f5;
    piVar1 = (int *)*piVar10;
    piVar3 = (int *)*piVar10;
    while ((piVar1 != (int *)0x0 && (bVar2))) {
      iVar11 = *piVar1;
      if ((param_4 == 0) || (param_4 != iVar11)) {
        if ((iVar11 == 0) || (param_4 != 0)) {
          piVar1 = (int *)piVar1[1];
          piVar3 = piVar1;
        }
        else {
          bVar2 = false;
          param_4 = iVar11;
        }
      }
      else {
        sVar5 = FUN_0041e860();
        piVar1 = piVar3;
        if ((sVar5 < 2) || (*(char *)(param_1 + 4) == '\"')) {
          FUN_0041f200(1,param_5);
          FUN_004238a0(piVar10[1]);
          bVar2 = false;
        }
        else {
          iVar12 = FUN_00401f00(0x14);
          uStack_4 = 1;
          if (iVar12 == 0) {
            param_4 = 0;
          }
          else {
            param_4 = FUN_00422ee0();
          }
          uStack_4 = 0xffffffff;
          FUN_00428920(iVar11);
          FUN_004238a0(1);
          sVar5 = FUN_0041e860();
          FUN_004238a0(sVar5 + -1);
          bVar2 = false;
        }
      }
    }
    if ((param_4 == 0) || (cVar4 = FUN_0041df40(), cVar4 != '\0')) {
      param_4 = iVar11;
      if (bVar2) goto LAB_00489fe0;
    }
    else {
      FUN_0041f200(1,param_5);
      FUN_004238a0(param_2);
      if (*piVar10 == 0) {
        puVar8 = (undefined4 *)FUN_00401f00(8);
        if (puVar8 == (undefined4 *)0x0) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          *puVar8 = 0;
          puVar8[1] = 0;
        }
        *piVar10 = (int)puVar8;
      }
      for (piVar10 = (int *)*piVar10; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
        if (*piVar10 == param_4) goto LAB_0048a071;
      }
      FUN_00446cb0(param_4);
    }
  }
LAB_0048a071:
  if (param_4 != 0) {
    FUN_0041f370(param_6);
  }
  if (param_3[0x16] == 0) goto LAB_0048a4f5;
  FUN_004691b0(param_1);
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x14:
    cVar4 = FUN_00468ff0(0xd,0);
    iVar11 = *(int *)param_3[0x16];
    if (cVar4 == '\0') {
LAB_0048a10d:
      (**(code **)(iVar11 + 0x31c))(1);
    }
    else {
      iVar11 = (**(code **)(iVar11 + 0xf8))();
      if (iVar11 == 0) {
        iVar11 = FUN_00401f00(0xc);
        puStack_8 = (undefined1 *)0x5;
        if (iVar11 == 0) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_00484420(param_1,param_1);
        }
        puStack_8 = (undefined1 *)0xffffffff;
        FUN_00446cb0(param_4);
        cVar4 = (**(code **)(*(int *)param_3[0x16] + 0x110))(piVar10);
        if (cVar4 == '\0') {
          if (*piVar10 != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*piVar10);
          *piVar10 = 0;
          FUN_00401f20(piVar10);
        }
      }
      else {
        FUN_004526e0();
        FUN_00446cb0(param_4);
        *(int *)(iVar11 + 8) = param_1;
      }
      iVar11 = (**(code **)(*(int *)param_3[0x16] + 0xf8))(1);
      cVar4 = (**(code **)(*(int *)param_3[0x16] + 800))();
      if ((cVar4 == '\0') && (iVar11 != 0)) {
        FUN_004e1b40(*(undefined4 *)(iVar11 + 8));
      }
    }
    break;
  case 0x16:
    cVar4 = FUN_00468ff0(7,0);
    if ((cVar4 == '\0') && (cVar4 = FUN_00468ff0(6,0), cVar4 == '\0')) {
      cVar4 = FUN_00468ff0(8,0);
      iVar11 = *(int *)param_3[0x16];
      if (cVar4 == '\0') goto LAB_0048a10d;
      cVar4 = (**(code **)(iVar11 + 800))();
      if (cVar4 == '\0') {
        FUN_004dcf90(param_1);
      }
    }
    else {
      cVar4 = (**(code **)(*(int *)param_3[0x16] + 800))();
      if (cVar4 == '\0') {
        FUN_004dce60(param_1,param_5);
      }
    }
    break;
  case 0x1a:
    piVar10 = (int *)(**(code **)(*(int *)param_3[0x16] + 0xf0))(1);
    if (piVar10 == (int *)0x0) {
      iVar11 = FUN_00401f00(0xc);
      puStack_8 = (undefined1 *)0x4;
      if (iVar11 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00484420(param_1,param_1);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00446cb0(param_4);
      cVar4 = (**(code **)(*(int *)param_3[0x16] + 0x108))(piVar10);
      if (cVar4 == '\0') {
        if (*piVar10 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar10);
        *piVar10 = 0;
        FUN_00401f20(piVar10);
        piVar10 = (int *)0x0;
      }
    }
    else {
      FUN_004526e0();
      FUN_00446cb0(param_4);
      piVar10[2] = param_1;
    }
    cVar4 = (**(code **)(*(int *)param_3[0x16] + 800))();
    if ((cVar4 == '\0') && (piVar10 != (int *)0x0)) {
      FUN_004e1c70(piVar10[2]);
    }
    break;
  case 0x21:
    piVar10 = (int *)(**(code **)(*(int *)param_3[0x16] + 0xec))(1);
    if (piVar10 == (int *)0x0) {
      iVar11 = FUN_00401f00(0xc);
      puStack_8 = (undefined1 *)0x3;
      if (iVar11 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00484420(param_1,param_1);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00446cb0(param_4);
      iVar11 = *(int *)param_3[0x16];
      uVar9 = (**(code **)(*param_3 + 0x154))();
      cVar4 = (**(code **)(iVar11 + 0x104))(piVar10,uVar9);
      if (cVar4 == '\0') {
        if (*piVar10 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar10);
        *piVar10 = 0;
        FUN_00401f20(piVar10);
        piVar10 = (int *)0x0;
      }
      else {
        iVar11 = FUN_004d8370();
        if (iVar11 != 0) {
          *(undefined4 *)(iVar11 + 0xc0) = *(undefined4 *)(piVar10[2] + 0x94);
        }
      }
    }
    else {
      cVar4 = (**(code **)(*(int *)param_3[0x16] + 0x138))();
      FUN_004526e0();
      FUN_00446cb0(param_4);
      piVar10[2] = unaff_retaddr;
      if (cVar4 != '\0') {
        FUN_005e13d0(0);
      }
    }
    cVar4 = (**(code **)(*(int *)param_3[0x16] + 800))();
    if ((cVar4 == '\0') && (piVar10 != (int *)0x0)) {
      FUN_004e1900(piVar10[2]);
    }
    break;
  case 0x22:
    piVar10 = (int *)(**(code **)(*(int *)param_3[0x16] + 0xf4))(1);
    if (piVar10 == (int *)0x0) {
      iVar11 = FUN_00401f00(0xc);
      puStack_8 = (undefined1 *)0x6;
      if (iVar11 == 0) {
        piVar10 = (int *)0x0;
      }
      else {
        piVar10 = (int *)FUN_00484420(param_1,0);
      }
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_00446cb0(param_4);
      piVar10[1] = param_1;
      cVar4 = (**(code **)(*(int *)param_3[0x16] + 0x10c))(piVar10);
      if (cVar4 == '\0') {
        if (*piVar10 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar10);
        *piVar10 = 0;
        FUN_00401f20(piVar10);
        piVar10 = (int *)0x0;
      }
    }
    else {
      FUN_004526e0();
      FUN_00446cb0(param_4);
      piVar10[2] = param_1;
    }
    cVar4 = (**(code **)(*(int *)param_3[0x16] + 800))();
    if ((cVar4 == '\0') && (piVar10 != (int *)0x0)) {
      FUN_004e1df0(piVar10[2]);
    }
  }
  FUN_005ea1a0(param_3[0xf]);
LAB_0048a4f5:
  *unaff_FS_OFFSET = local_c;
  return;
}



bool FUN_0048a540(undefined1 *param_1,int param_2,short param_3,int *param_4,undefined4 *param_5,
                 undefined4 param_6)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  undefined4 *puVar5;
  code *pcVar6;
  uint uVar7;
  int iVar8;
  undefined4 *in_ECX;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  
  piVar4 = (int *)*in_ECX;
  in_ECX[2] = 0xbf800000;
  in_ECX[3] = 0xbf800000;
  bVar1 = true;
  if (piVar4 != (int *)0x0) {
    while (bVar1) {
      if ((*piVar4 == 0) || (*(int *)(*piVar4 + 8) != param_2)) {
        piVar4 = (int *)piVar4[1];
      }
      else {
        bVar1 = false;
      }
      if (piVar4 == (int *)0x0) {
        return true;
      }
    }
    if ((piVar4 != (int *)0x0) && (piVar4 = (int *)*piVar4, piVar4 != (int *)0x0)) {
      *param_1 = 1;
      piVar9 = (int *)*piVar4;
      bVar1 = true;
      if (piVar9 != (int *)0x0) {
        while (puVar10 = (undefined4 *)*piVar9, puVar10 != (undefined4 *)0x0) {
          cVar2 = FUN_0041df40();
          if ((cVar2 != '\0') && (cVar2 = (**(code **)(*param_4 + 0x198))(0), cVar2 == '\0')) {
            *param_1 = 0;
            return true;
          }
          cVar2 = FUN_0041df10(param_6);
          if ((cVar2 != '\0') && ((param_5 == (undefined4 *)0x0 || (param_5 == puVar10)))) {
            FUN_004691b0(param_2);
            piVar9 = (int *)param_4[0x16];
            if (piVar9 != (int *)0x0) {
              switch(*(undefined1 *)(param_2 + 4)) {
              case 0x14:
                cVar2 = FUN_00468ff0(0xd,0);
                iVar8 = *(int *)param_4[0x16];
                if (cVar2 == '\0') {
LAB_0048a73b:
                  pcVar6 = *(code **)(iVar8 + 0x31c);
                  uVar11 = 1;
LAB_0048a83f:
                  (*pcVar6)(uVar11);
                }
                else {
                  iVar8 = (**(code **)(iVar8 + 0xf8))(0);
                  if (iVar8 != 0) {
                    (**(code **)(*(int *)param_4[0x16] + 0x110))(0);
                    FUN_004dc8f0(1);
                  }
                }
                break;
              case 0x16:
                cVar2 = FUN_00468ff0(7,0);
                if ((cVar2 == '\0') && (cVar2 = FUN_00468ff0(6,0), cVar2 == '\0')) {
                  cVar2 = FUN_00468ff0(8,0);
                  iVar8 = *(int *)param_4[0x16];
                  if (cVar2 == '\0') goto LAB_0048a73b;
                  cVar2 = (**(code **)(iVar8 + 800))();
                  if (cVar2 == '\0') {
                    FUN_004dd000();
                  }
                }
                else {
                  cVar2 = (**(code **)(*(int *)param_4[0x16] + 800))();
                  if (cVar2 == '\0') {
                    FUN_004dcf10(param_6);
                  }
                }
                break;
              case 0x1a:
                iVar8 = (**(code **)(*piVar9 + 0xf0))(0);
                if (iVar8 != 0) {
                  FUN_004dcab0();
                  pcVar6 = *(code **)(*(int *)param_4[0x16] + 0x108);
LAB_0048a83d:
                  uVar11 = 0;
                  goto LAB_0048a83f;
                }
                break;
              case 0x21:
                puVar5 = (undefined4 *)(**(code **)(*piVar9 + 0xec))(1);
                if ((puVar5 != (undefined4 *)0x0) &&
                   ((*(undefined4 **)*puVar5 == puVar10 || (param_5 == (undefined4 *)0x0)))) {
                  FUN_004dc5b0();
                  (**(code **)(*(int *)param_4[0x16] + 0x104))(0,0);
                }
                break;
              case 0x22:
                puVar5 = (undefined4 *)(**(code **)(*piVar9 + 0xf4))(1);
                if ((puVar5 != (undefined4 *)0x0) && (*(undefined4 **)*puVar5 == puVar10)) {
                  FUN_004dccf0();
                  pcVar6 = *(code **)(*(int *)param_4[0x16] + 0x10c);
                  goto LAB_0048a83d;
                }
              }
            }
            FUN_0041f200(0,param_6);
            uVar7 = FUN_0041e060();
            if (uVar7 < 2) {
              FUN_004238a0(0);
            }
            if (puVar10[1] == 0) {
              FUN_0065c620(puVar10);
              (**(code **)*puVar10)(1);
              bVar1 = false;
            }
            else {
              piVar9 = (int *)*piVar4;
              if (piVar9 != (int *)0x0) goto LAB_0048a880;
            }
            break;
          }
          piVar9 = (int *)piVar9[1];
          if (piVar9 == (int *)0x0) break;
        }
      }
      goto LAB_0048a618;
    }
  }
  return true;
  while( true ) {
    if ((puVar10 == (undefined4 *)0x0) ||
       ((cVar2 = FUN_0041e4d0(puVar5), cVar2 != '\0' || (puVar10 == puVar5)))) {
      piVar9 = (int *)piVar9[1];
    }
    else {
      sVar3 = FUN_0041e860();
      FUN_004238a0(sVar3 + param_3);
      if (puVar5[1] == 0) {
        FUN_0065c620(puVar5);
        (**(code **)*puVar5)(1);
      }
      else {
        FUN_0065c620(puVar10);
      }
      (**(code **)*puVar10)(1);
      puVar10 = (undefined4 *)0x0;
      bVar1 = false;
    }
    if (piVar9 == (int *)0x0) break;
LAB_0048a880:
    puVar5 = (undefined4 *)*piVar9;
    if ((puVar5 == (undefined4 *)0x0) || (!bVar1)) break;
  }
LAB_0048a618:
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x40))(0x8000000);
    if ((*(char *)(param_2 + 4) == '\x16') || (*(char *)(param_2 + 4) == '\x14')) {
      FUN_004691b0(param_2);
      cVar2 = FUN_00468ff0(7,0);
      if ((cVar2 == '\0') &&
         (((cVar2 = FUN_00468ff0(6,0), cVar2 == '\0' && (cVar2 = FUN_00468ff0(8,0), cVar2 == '\0'))
          && (cVar2 = FUN_00468ff0(0xd,0), cVar2 == '\0')))) {
        (**(code **)(*(int *)in_ECX[1] + 0x40))(0x20000000);
      }
    }
  }
  if (in_ECX[1] != 0) {
    FUN_004d6d40();
  }
  iVar8 = FUN_00469ca0(param_2);
  piVar9 = (int *)*piVar4;
  if (((piVar9 != (int *)0x0) && (piVar9[1] == 0)) &&
     ((*piVar9 == 0 && ((piVar4[1] == 0 || (iVar8 == piVar4[1])))))) {
    FUN_0065c620(piVar4);
    if (*piVar4 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar4);
    *piVar4 = 0;
    FUN_00401f20(piVar4);
    return false;
  }
  if ((piVar4[1] < 0) && (piVar9 != (int *)0x0)) {
    FUN_004526e0();
  }
  FUN_005ea1a0(param_4[0xf]);
  return bVar1;
}



void FUN_0048aa10(int *param_1,int param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *in_ECX;
  int *piVar10;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  piVar10 = param_1;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afd46;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puStack_18 = (undefined4 *)0x0;
  in_ECX[2] = 0xbf800000;
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x40))(0x8000000,uVar4);
  }
  iVar5 = (**(code **)(*param_1 + 0x170))();
  param_1 = (int *)*in_ECX;
  bVar1 = true;
  while (param_1 != (int *)0x0) {
    if (!bVar1) {
      if (param_1 != (int *)0x0) {
        param_1 = (int *)*param_1;
        goto LAB_0048aa99;
      }
      break;
    }
    if ((*param_1 == 0) || (*(int *)(*param_1 + 8) != iVar5)) {
      param_1 = (int *)param_1[1];
    }
    else {
      bVar1 = false;
    }
  }
  param_1 = (int *)0x0;
LAB_0048aa99:
  FUN_0041f620();
  iVar5 = FUN_00401f00(0x14);
  uStack_4 = 0;
  if (iVar5 != 0) {
    puStack_18 = (undefined4 *)FUN_00422ee0();
  }
  uStack_4 = 0xffffffff;
  if (piVar10[0x12] != 0) {
    FUN_00428970(piVar10 + 0x11,0);
    FUN_00423a30(piVar10[0xe]);
    iVar5 = FUN_0041e7b0();
    if ((iVar5 == DAT_00b333c4) && (in_ECX[1] == DAT_00b333c4)) {
      FUN_0041f600();
    }
  }
  cVar2 = (**(code **)(*(int *)in_ECX[1] + 400))();
  if (((((cVar2 != '\0') && (in_ECX[1] != 0)) &&
       (piVar9 = *(int **)(in_ECX[1] + 0x58), piVar9 != (int *)0x0)) &&
      ((iVar5 = (**(code **)(*piVar9 + 0xf4))(0), iVar5 != 0 &&
       (iVar5 = *(int *)(iVar5 + 8), iVar6 = (**(code **)(*piVar10 + 0x170))(), iVar5 == iVar6))))
     || (param_4 != '\0')) {
    FUN_0041f200(1,0);
  }
  if (param_1 == (int *)0x0) {
    iVar5 = FUN_00401f00(0xc);
    uStack_4 = 1;
    if (iVar5 == 0) {
      piVar9 = (int *)0x0;
    }
    else {
      iVar5 = param_2;
      uVar8 = (**(code **)(*piVar10 + 0x170))(param_2);
      piVar9 = (int *)FUN_00484420(uVar8,iVar5);
    }
    uStack_4 = 0xffffffff;
    if (1 < param_2) {
      FUN_004238a0(param_2);
    }
    cVar2 = FUN_004db4a0();
    if (cVar2 == '\0') {
      if (puStack_18 != (undefined4 *)0x0) {
        if (puStack_18[1] != 0) {
          if (*piVar9 == 0) {
            puVar7 = (undefined4 *)FUN_00401f00(8);
            if (puVar7 == (undefined4 *)0x0) goto LAB_0048ade5;
            *puVar7 = 0;
            puVar7[1] = 0;
            goto LAB_0048ade7;
          }
          goto LAB_0048adea;
        }
        (**(code **)*puStack_18)(1);
        puStack_18 = (undefined4 *)0x0;
      }
    }
    else {
      FUN_0041fa40(piVar10);
      if (*piVar9 == 0) {
        puVar7 = (undefined4 *)FUN_00401f00(8);
        if (puVar7 == (undefined4 *)0x0) {
LAB_0048ade5:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          *puVar7 = 0;
          puVar7[1] = 0;
        }
LAB_0048ade7:
        *piVar9 = (int)puVar7;
      }
LAB_0048adea:
      FUN_00446cb0(puStack_18);
    }
    FUN_0067b1e0(piVar9);
  }
  else {
    param_1[1] = param_1[1] + param_2;
    cVar2 = FUN_004db4a0();
    if (cVar2 == '\0') {
      piVar10 = (int *)*param_1;
      bVar1 = true;
      if (piVar10 == (int *)0x0) {
LAB_0048ac5e:
        if ((puStack_18 == (undefined4 *)0x0) || (puStack_18[1] != 0)) {
          if (*param_1 == 0) {
            puVar7 = (undefined4 *)FUN_00401f00(8);
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = 0;
              puVar7[1] = 0;
              *param_1 = (int)puVar7;
              FUN_00446cb0(puStack_18);
              goto LAB_0048acc0;
            }
            *param_1 = 0;
          }
          FUN_00446cb0(puStack_18);
          goto LAB_0048acc0;
        }
LAB_0048acaa:
        (**(code **)*puStack_18)(1);
      }
      else {
        do {
          puVar7 = (undefined4 *)*piVar10;
          if (puVar7 == (undefined4 *)0x0) break;
          if (!bVar1) goto LAB_0048aca6;
          if ((puStack_18 == (undefined4 *)0x0) || (cVar2 = FUN_0041e4d0(puVar7), cVar2 != '\0')) {
            piVar10 = (int *)piVar10[1];
          }
          else {
            sVar3 = FUN_0041e860();
            FUN_004238a0(sVar3 + (short)param_2);
            if (puVar7[1] == 0) {
              FUN_0065c620(puVar7);
              (**(code **)*puVar7)(1);
            }
            bVar1 = false;
          }
        } while (piVar10 != (int *)0x0);
        if (bVar1) goto LAB_0048ac5e;
LAB_0048aca6:
        if (puStack_18 != (undefined4 *)0x0) goto LAB_0048acaa;
      }
      puStack_18 = (undefined4 *)0x0;
    }
    else {
      FUN_0041fa40(piVar10);
      if (1 < param_2) {
        FUN_004238a0(param_2);
      }
      if (*param_1 == 0) {
        puVar7 = (undefined4 *)FUN_00401f00(8);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          *param_1 = (int)puVar7;
          FUN_00446cb0(puStack_18);
          goto LAB_0048acc0;
        }
        *param_1 = 0;
      }
      FUN_00446cb0(puStack_18);
    }
LAB_0048acc0:
    piVar10 = (int *)*param_1;
    if ((((piVar10 != (int *)0x0) && (piVar10[1] == 0)) && (*piVar10 == 0)) && (param_1[1] == 0)) {
      FUN_0065c620(param_1);
      if (puStack_18 != (undefined4 *)0x0) {
        (**(code **)*puStack_18)(1);
      }
      if (*param_1 != 0) {
        FUN_004526e0();
      }
      FUN_00401f20(*param_1);
      *param_1 = 0;
      FUN_00401f20(param_1);
      goto LAB_0048ae15;
    }
  }
  if ((puStack_18 != (undefined4 *)0x0) && (puStack_18[1] == 0)) {
    (**(code **)*puStack_18)(1);
  }
LAB_0048ae15:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0048ae30(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  int in_ECX;
  int *piStack_14;
  
  *(undefined4 *)(in_ECX + 8) = 0xbf800000;
  if (param_1 != (int *)0x0) {
    if (*(int **)(in_ECX + 4) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 4) + 0x40))(0x8000000);
    }
    piVar8 = (int *)FUN_00485e80(param_1[2],1,0);
    iVar1 = param_1[2];
    piVar12 = (int *)*param_1;
    if (((piVar12 != (int *)0x0) && (piVar12[1] == 0)) && (*piVar12 == 0)) {
      FUN_00401f20(piVar12);
      *param_1 = 0;
    }
    if (piVar8 == (int *)0x0) {
      FUN_0067b1e0(param_1);
    }
    else {
      piVar8[1] = piVar8[1] + param_1[1];
      piVar12 = (int *)*param_1;
      if (((piVar12 == (int *)0x0) || (piVar12[1] != 0)) || (*piVar12 != 0)) {
        piStack_14 = (int *)*piVar8;
        for (; (piVar12 != (int *)0x0 && (iVar2 = *piVar12, iVar2 != 0));
            piVar12 = (int *)piVar12[1]) {
          bVar4 = true;
          iVar9 = FUN_0041fb00();
          if (iVar9 != 0) {
            FUN_0041fa40(*(undefined4 *)(in_ECX + 4));
          }
          if (piStack_14 == (int *)0x0) {
LAB_0048af60:
            if (*piVar8 == 0) {
              puVar10 = (undefined4 *)FUN_00401f00(8);
              if (puVar10 == (undefined4 *)0x0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                *puVar10 = 0;
                puVar10[1] = 0;
              }
              *piVar8 = (int)puVar10;
            }
            piVar3 = (int *)*piVar8;
            if (iVar2 != 0) {
              if (*piVar3 != 0) {
                piVar11 = (int *)FUN_00401f00(8);
                if (piVar11 == (int *)0x0) {
                  piVar11 = (int *)0x0;
                }
                else {
                  *piVar11 = *piVar3;
                  piVar11[1] = 0;
                }
                piVar11[1] = piVar3[1];
                piVar3[1] = (int)piVar11;
              }
              *piVar3 = iVar2;
            }
          }
          else {
            do {
              if (*piStack_14 == 0) break;
              if (!bVar4) goto LAB_0048afab;
              if ((iVar2 == 0) || (cVar5 = FUN_0041e4d0(*piStack_14), cVar5 != '\0')) {
                piStack_14 = (int *)piStack_14[1];
              }
              else {
                sVar6 = FUN_0041e860();
                sVar7 = FUN_0041e860();
                FUN_004238a0(sVar6 + sVar7);
                bVar4 = false;
              }
            } while (piStack_14 != (int *)0x0);
            if (bVar4) goto LAB_0048af60;
          }
LAB_0048afab:
        }
        if (param_2 != '\0') {
          if (*param_1 != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*param_1);
          *param_1 = 0;
          FUN_00401f20(param_1);
          param_1 = (int *)0x0;
        }
      }
      piVar12 = (int *)FUN_00485e80(iVar1,1,0);
      if ((piVar12 != (int *)0x0) &&
         (((piVar8 = (int *)*piVar12, piVar8 == (int *)0x0 || ((piVar8[1] == 0 && (*piVar8 == 0))))
          && (piVar12[1] == 0)))) {
        FUN_0065c620(piVar12);
        if (*piVar12 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar12);
        *piVar12 = 0;
        FUN_00401f20(piVar12);
        if (param_1 != (int *)0x0) {
          if (*param_1 != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*param_1);
          *param_1 = 0;
          FUN_00401f20(param_1);
          return;
        }
      }
    }
  }
  return;
}



int * FUN_0048b080(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
                  int *param_6)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  float local_54;
  float local_50;
  float local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_5 == (float *)0x0) {
    pfVar1 = (float *)(**(code **)(*param_1 + 0x174))();
    local_54 = *pfVar1;
    local_50 = pfVar1[1];
    iStack_48 = param_1[8];
    local_4c = pfVar1[2];
    iStack_44 = param_1[9];
    iStack_40 = param_1[10];
    FUN_00711580(iStack_48,iStack_44,iStack_40);
    uStack_3c = 0;
    uStack_38 = 0x42480000;
    uStack_34 = 0x41f00000;
    pfVar1 = (float *)FUN_007101f0(&iStack_48,&uStack_3c);
    local_54 = *pfVar1 + local_54;
    local_50 = pfVar1[1] + local_50;
    local_4c = pfVar1[2] + local_4c;
  }
  else {
    local_54 = *param_5;
    local_50 = param_5[1];
    local_4c = param_5[2];
  }
  if ((param_6 == (int *)0x0) && (param_6 = param_1 + 8, param_1 == (int *)0x0)) {
    param_6 = &DAT_00b3f9a8;
  }
  local_30 = *param_6;
  local_2c = param_6[1];
  local_28 = param_6[2];
  uVar2 = FUN_004d6670(param_4);
  uVar3 = FUN_006ecc80(uVar2);
  piVar4 = (int *)FUN_0044a7d0(param_2,&local_54,&local_30,uVar3,uVar2,param_4);
  if (1 < param_3) {
    FUN_004238a0(param_3);
  }
  (**(code **)(*piVar4 + 0x40))(0x20);
  return piVar4;
}



undefined4 FUN_0048b1d0(int *param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  bool bVar5;
  float fVar6;
  char cVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *in_ECX;
  undefined4 *puVar14;
  int iVar15;
  int *piStack_20;
  int iStack_18;
  undefined4 uStack_14;
  
  uVar9 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b0375c,0);
  iVar10 = FUN_009832e6(uVar9);
  uVar9 = (**(code **)(*param_1 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b02fb4,0);
  iVar11 = FUN_009832e6(uVar9);
  if (iVar10 == 0) {
    uStack_14 = 5;
    iVar10 = FUN_004bc070(5);
  }
  else {
    uStack_14 = FUN_0051ca50();
    iVar10 = FUN_004bc070(uStack_14);
  }
  fVar4 = (float)iVar10;
  param_1 = (int *)0x0;
  iStack_18 = 0;
  if (in_ECX[1] == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_004d6d40();
  }
  for (piVar12 = (int *)(iVar10 + 8); piVar12 != (int *)0x0; piVar12 = (int *)piVar12[1]) {
    piVar2 = (int *)*piVar12;
    if ((piVar2 != (int *)0x0) &&
       (iVar10 = FUN_009832e6(piVar2[1],0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0), iVar10 != 0)) {
      piVar3 = (int *)*in_ECX;
      bVar5 = true;
      while (piVar3 != (int *)0x0) {
        if (!bVar5) {
          if (piVar3 != (int *)0x0) {
            puVar14 = (undefined4 *)*piVar3;
            goto LAB_0048b2f0;
          }
          break;
        }
        if ((*piVar3 == 0) || (*(int *)(*piVar3 + 8) != iVar10)) {
          piVar3 = (int *)piVar3[1];
        }
        else {
          bVar5 = false;
        }
      }
      puVar14 = (undefined4 *)0x0;
LAB_0048b2f0:
      iVar15 = *piVar2;
      if (puVar14 != (undefined4 *)0x0) {
        iVar15 = iVar15 + puVar14[1];
      }
      if (*(char *)(iVar10 + 0x70) == '\0') {
        if (puVar14 != (undefined4 *)0x0) {
          if (-1 < *(int *)*piVar12) goto LAB_0048b3a7;
          piVar2 = (int *)*puVar14;
          iVar15 = puVar14[1];
          while (piVar2 != (int *)0x0) {
            if (*piVar2 != 0) {
              iVar13 = FUN_0041e8c0();
              if (iVar13 == 0) break;
              piVar2 = (int *)piVar2[1];
              iVar15 = iVar15 + -1;
            }
          }
        }
        if ((0 < iVar15) && ((iVar11 == 0 || (puVar14[2] == DAT_00b35ee0)))) {
          iVar15 = FUN_004bc070(*(undefined1 *)(iVar10 + 0x71));
          fVar6 = (float)iVar15;
          if ((fVar4 < fVar6 != (fVar4 == fVar6)) &&
             ((param_1 == (int *)0x0 ||
              (iVar15 = FUN_004bc070(*(undefined1 *)((int)param_1 + 0x71)), fVar6 < (float)iVar15)))
             ) {
            param_1 = (int *)iVar10;
          }
        }
      }
    }
LAB_0048b3a7:
  }
  piStack_20 = (int *)*in_ECX;
  if (piStack_20 != (int *)0x0) {
    do {
      puVar14 = (undefined4 *)*piStack_20;
      if ((((puVar14 != (undefined4 *)0x0) &&
           (iVar10 = FUN_009832e6(puVar14[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b0549c,0), iVar10 != 0))
          && (*(char *)(iVar10 + 0x70) == '\0')) && (puVar14[1] != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar7 = FUN_00469920(iVar10);
        if (cVar7 == '\0') {
          piVar12 = (int *)*puVar14;
          iVar15 = puVar14[1];
          while (((piVar12 != (int *)0x0 && (*piVar12 != 0)) &&
                 (iVar13 = FUN_0041e8c0(), iVar13 != 0))) {
            sVar8 = FUN_0041e860();
            piVar12 = (int *)piVar12[1];
            iVar15 = iVar15 - sVar8;
          }
          if ((0 < iVar15) && ((iVar11 == 0 || (puVar14[2] == DAT_00b35ee0)))) {
            iVar15 = FUN_004bc070(*(undefined1 *)(iVar10 + 0x71));
            fVar6 = (float)iVar15;
            if ((fVar4 < fVar6 != (fVar4 == fVar6)) &&
               ((iStack_18 == 0 ||
                (iVar15 = FUN_004bc070(*(undefined1 *)(iStack_18 + 0x71)), fVar6 < (float)iVar15))))
            {
              iStack_18 = iVar10;
            }
          }
        }
      }
      piStack_20 = (int *)piStack_20[1];
    } while (piStack_20 != (int *)0x0);
    if ((iStack_18 != 0) && ((int *)iStack_18 != param_1)) {
      if (param_1 != (int *)0x0) {
        uVar1 = *(undefined1 *)((int)param_1 + 0x71);
        iVar10 = FUN_004bc070(*(undefined1 *)(iStack_18 + 0x71));
        iVar11 = FUN_004bc070(uVar1);
        if ((double)iVar11 <= (double)iVar10) goto LAB_0048b54d;
      }
      param_1 = (int *)iStack_18;
    }
  }
LAB_0048b54d:
  piVar12 = (int *)*in_ECX;
  bVar5 = true;
  do {
    if (piVar12 == (int *)0x0) {
LAB_0048b57a:
      iVar10 = 0;
LAB_0048b57c:
      puVar14 = (undefined4 *)0x0;
      if (param_1 != (int *)0x0) {
        puVar14 = (undefined4 *)FUN_00401f00(0xc);
        if (puVar14 == (undefined4 *)0x0) {
          puVar14 = (undefined4 *)0x0;
        }
        else {
          puVar14[2] = 0;
          *puVar14 = 0;
          puVar14[1] = 0;
        }
      }
      if (iVar10 != 0) {
        FUN_00484c50(uStack_14);
        return 1;
      }
      if (param_1 != (int *)0x0) {
        puVar14[2] = param_1;
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        uVar9 = FUN_00469ca0(param_1);
        puVar14[1] = uVar9;
        FUN_00484c50(uStack_14);
        FUN_0048ae30(puVar14,1);
        return 1;
      }
      cVar7 = (**(code **)(*(int *)in_ECX[1] + 400))();
      if ((cVar7 != '\0') && (in_ECX[1] == DAT_00b333c4)) {
        FUN_0057acc0(DAT_00b38c28,0,1,0xbf800000);
      }
      return 0;
    }
    if (!bVar5) {
      if (piVar12 != (int *)0x0) {
        iVar10 = *piVar12;
        goto LAB_0048b57c;
      }
      goto LAB_0048b57a;
    }
    if ((*piVar12 == 0) || ((int *)*(int *)(*piVar12 + 8) != param_1)) {
      piVar12 = (int *)piVar12[1];
    }
    else {
      bVar5 = false;
    }
  } while( true );
}



int * FUN_0048b660(int param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *in_ECX;
  int *piVar8;
  float10 fVar9;
  float10 fVar10;
  int local_10;
  float local_c;
  
  local_c = -3.4028235e+38;
  local_10 = 0;
  iVar7 = 0;
  if ((param_2 != '\0') && (piVar3 = (int *)FUN_00486790(0xe,0), piVar3 != (int *)0x0)) {
    cVar2 = FUN_0041df40();
    if (cVar2 != '\0') {
      return piVar3;
    }
    if (*piVar3 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar3);
    *piVar3 = 0;
    FUN_00401f20(piVar3);
  }
  if (in_ECX[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d6d40();
  }
  for (piVar3 = (int *)(iVar4 + 8); piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if ((*piVar3 != 0) &&
       (iVar4 = FUN_009832e6(*(undefined4 *)(*piVar3 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b03518,0),
       iVar4 != 0)) {
      piVar8 = (int *)*in_ECX;
      bVar1 = true;
      while (piVar8 != (int *)0x0) {
        if (!bVar1) {
          if ((piVar8 != (int *)0x0) && (piVar8 = (int *)*piVar8, piVar8 != (int *)0x0)) {
            if (((int *)*piVar8 != (int *)0x0) &&
               (((*(int *)*piVar8 != 0 && (iVar5 = FUN_0041e7b0(), iVar5 != 0)) &&
                (iVar5 = FUN_0041e7b0(), iVar5 != 0)))) {
              if ((((int *)*piVar8 == (int *)0x0) || (*(int *)*piVar8 == 0)) ||
                 (iVar5 = FUN_0041e7b0(), iVar5 == 0)) {
                iVar5 = 0;
              }
              else {
                iVar5 = FUN_0041e7b0();
              }
              if (iVar5 != param_1) goto LAB_0048b7dd;
            }
            if ((piVar8[1] + *(int *)*piVar3 < 1) && (-1 < *(int *)*piVar3)) goto LAB_0048b7dd;
          }
          break;
        }
        if ((*piVar8 == 0) || (*(int *)(*piVar8 + 8) != iVar4)) {
          piVar8 = (int *)piVar8[1];
        }
        else {
          bVar1 = false;
        }
      }
      fVar9 = (float10)FUN_0051a120(iVar4);
      if (local_c < (float)fVar9) {
        local_10 = iVar4;
        local_c = (float)fVar9;
      }
    }
LAB_0048b7dd:
  }
  piVar3 = (int *)*in_ECX;
  if (piVar3 != (int *)0x0) {
    do {
      piVar8 = (int *)*piVar3;
      if ((piVar8 != (int *)0x0) &&
         (iVar4 = FUN_009832e6(piVar8[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b03518,0), iVar4 != 0)) {
        if (((int *)*piVar8 != (int *)0x0) &&
           (((*(int *)*piVar8 != 0 && (iVar5 = FUN_0041e7b0(), iVar5 != 0)) &&
            (iVar5 = FUN_0041e7b0(), iVar5 != 0)))) {
          if ((((int *)*piVar8 == (int *)0x0) || (*(int *)*piVar8 == 0)) ||
             (iVar5 = FUN_0041e7b0(), iVar5 == 0)) {
            iVar5 = 0;
          }
          else {
            iVar5 = FUN_0041e7b0();
          }
          if (iVar5 != param_1) goto LAB_0048b8bf;
        }
        if (piVar8[1] != 0) {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar2 = FUN_00469920(iVar4);
          if (cVar2 == '\0') {
            fVar9 = (float10)FUN_0051a120(iVar4);
            if (local_c < (float)fVar9) {
              local_c = (float)fVar9;
              iVar7 = iVar4;
            }
          }
        }
      }
LAB_0048b8bf:
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if ((iVar7 != 0) && (iVar7 != local_10)) {
      fVar9 = (float10)FUN_0051a120(iVar7);
      fVar10 = (float10)FUN_0051a120(local_10);
      if (fVar10 < (float10)(double)fVar9) {
        local_10 = iVar7;
      }
    }
  }
  piVar3 = (int *)FUN_00485e80(local_10,1,0);
  piVar8 = (int *)0x0;
  if (local_10 != 0) {
    piVar8 = (int *)FUN_00401f00(0xc);
    if (piVar8 == (int *)0x0) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8[2] = 0;
      *piVar8 = 0;
      piVar8[1] = 0;
    }
  }
  if (piVar3 == (int *)0x0) {
    if (local_10 != 0) {
      piVar8[2] = local_10;
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      iVar7 = FUN_00469ca0(local_10);
      piVar8[1] = iVar7;
    }
  }
  else {
    piVar8[2] = piVar3[2];
    if (((int *)*piVar3 != (int *)0x0) && (*(int *)*piVar3 != 0)) {
      puVar6 = (undefined4 *)FUN_00401f00(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      *piVar8 = (int)puVar6;
      FUN_00446cb0(*(undefined4 *)*piVar3);
      piVar8[1] = piVar3[1];
      return piVar8;
    }
  }
  return piVar8;
}



int * FUN_0048b9c0(int param_1,char param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  int *piVar10;
  float10 fVar11;
  float10 fVar12;
  float local_18;
  int local_14;
  
  local_18 = -3.4028235e+38;
  local_14 = 0;
  iVar8 = 0;
  if ((param_2 != '\0') && (piVar4 = (int *)FUN_00486790(0xc,0), piVar4 != (int *)0x0)) {
    cVar3 = FUN_0041df40();
    if (cVar3 != '\0') {
      return piVar4;
    }
    if (*piVar4 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar4);
    *piVar4 = 0;
    FUN_00401f20(piVar4);
  }
  if (in_ECX[1] == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_004d6d40();
  }
  for (piVar4 = (int *)(iVar5 + 8); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[1]) {
    if ((*piVar4 != 0) &&
       (iVar5 = FUN_009832e6(*(undefined4 *)(*piVar4 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0),
       iVar5 != 0)) {
      piVar10 = (int *)*in_ECX;
      bVar2 = true;
      while (piVar10 != (int *)0x0) {
        if (!bVar2) {
          if (piVar10 != (int *)0x0) {
            piVar10 = (int *)*piVar10;
            goto LAB_0048baa3;
          }
          break;
        }
        if ((*piVar10 == 0) || (*(int *)(*piVar10 + 8) != iVar5)) {
          piVar10 = (int *)piVar10[1];
        }
        else {
          bVar2 = false;
        }
      }
      piVar10 = (int *)0x0;
LAB_0048baa3:
      iVar9 = 0;
      if (piVar10 != (int *)0x0) {
        if ((((int *)*piVar10 == (int *)0x0) || (*(int *)*piVar10 == 0)) ||
           (iVar6 = FUN_0041e7b0(), iVar6 == 0)) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_0041e7b0();
        }
        if ((iVar6 != param_1) && (0 < piVar10[1])) {
          for (piVar1 = (int *)*piVar10; (piVar1 != (int *)0x0 && (*piVar1 != 0));
              piVar1 = (int *)piVar1[1]) {
            iVar6 = FUN_0041e7b0();
            if (iVar6 != 0) {
              iVar9 = iVar9 + 1;
            }
          }
        }
        if ((((((int *)*piVar10 != (int *)0x0) && (*(int *)*piVar10 != 0)) &&
             (iVar6 = FUN_0041e7b0(), iVar6 != 0)) &&
            ((iVar6 = FUN_0041e7b0(), iVar6 != 0 && (piVar10[1] + *(int *)*piVar4 <= iVar9)))) ||
           ((piVar10[1] + *(int *)*piVar4 < 1 && (-1 < *(int *)*piVar4)))) goto LAB_0048bb76;
      }
      fVar11 = (float10)FUN_0051a120(iVar5);
      if (local_18 < (float)fVar11) {
        local_18 = (float)fVar11;
        local_14 = iVar5;
      }
    }
LAB_0048bb76:
  }
  piVar4 = (int *)*in_ECX;
  if (piVar4 != (int *)0x0) {
    do {
      piVar10 = (int *)*piVar4;
      if ((piVar10 != (int *)0x0) &&
         (iVar5 = FUN_009832e6(piVar10[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0), iVar5 != 0)) {
        piVar1 = (int *)*piVar10;
        while( true ) {
          if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) goto LAB_0048bbf6;
          cVar3 = FUN_0041def0();
          if (cVar3 != '\0') break;
          piVar1 = (int *)piVar1[1];
        }
        if (piVar10[1] < 0) goto LAB_0048bc91;
LAB_0048bbf6:
        if (((((int *)*piVar10 != (int *)0x0) && (*(int *)*piVar10 != 0)) &&
            (iVar9 = FUN_0041e7b0(), iVar9 != 0)) && (iVar9 = FUN_0041e7b0(), iVar9 != 0)) {
          if ((((int *)*piVar10 == (int *)0x0) || (*(int *)*piVar10 == 0)) ||
             (iVar9 = FUN_0041e7b0(), iVar9 == 0)) {
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_0041e7b0();
          }
          if (iVar9 != param_1) goto LAB_0048bc91;
        }
        if (piVar10[1] != 0) {
          if (in_ECX[1] != 0) {
            FUN_004d6d40();
          }
          cVar3 = FUN_00469920(iVar5);
          if (cVar3 == '\0') {
            fVar11 = (float10)FUN_0051a120(iVar5);
            if (local_18 < (float)fVar11) {
              local_18 = (float)fVar11;
              iVar8 = iVar5;
            }
          }
        }
      }
LAB_0048bc91:
      piVar4 = (int *)piVar4[1];
    } while (piVar4 != (int *)0x0);
    if ((iVar8 != 0) && (iVar8 != local_14)) {
      fVar11 = (float10)FUN_0051a120(iVar8);
      fVar12 = (float10)FUN_0051a120(local_14);
      if (fVar12 < (float10)(double)fVar11) {
        local_14 = iVar8;
      }
    }
  }
  piVar4 = (int *)FUN_00485e80(local_14,1,0);
  piVar10 = (int *)0x0;
  if (local_14 != 0) {
    piVar10 = (int *)FUN_00401f00(0xc);
    if (piVar10 == (int *)0x0) {
      piVar10 = (int *)0x0;
    }
    else {
      piVar10[2] = 0;
      *piVar10 = 0;
      piVar10[1] = 0;
    }
  }
  if (piVar4 == (int *)0x0) {
    if (local_14 != 0) {
      piVar10[2] = local_14;
      if (in_ECX[1] != 0) {
        FUN_004d6d40();
      }
      iVar8 = FUN_00469ca0(local_14);
      if (iVar8 < 0) {
        iVar8 = -iVar8;
      }
      piVar10[1] = iVar8;
    }
  }
  else {
    piVar10[2] = piVar4[2];
    if (((int *)*piVar4 != (int *)0x0) && (*(int *)*piVar4 != 0)) {
      puVar7 = (undefined4 *)FUN_00401f00(8);
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
      }
      *piVar10 = (int)puVar7;
      FUN_00446cb0(*(undefined4 *)*piVar4);
      piVar10[1] = piVar4[1];
      return piVar10;
    }
  }
  return piVar10;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0048bda0(int *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  uint3 uVar4;
  char cVar5;
  undefined1 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  undefined4 *puVar16;
  int in_ECX;
  undefined4 unaff_EBX;
  int iVar17;
  float10 fVar18;
  float10 fVar19;
  float10 fVar20;
  undefined4 uStack_58;
  int *piStack_54;
  uint local_50;
  int *piStack_30;
  int *piStack_14;
  
  uVar4 = (uint3)uStack_58;
  if (*(int *)(in_ECX + 4) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_004d6d40();
  }
  iVar9 = FUN_009832e6(uVar8,0,&PTR_PTR_00b05d10,&PTR_PTR_00b03070,0);
  if (((char)param_4 != '\0') && (piVar10 = (int *)FUN_00486790(9,0), piVar10 != (int *)0x0)) {
    cVar5 = FUN_0041df40();
    if (cVar5 != '\0') {
      return piVar10;
    }
    if (*piVar10 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar10);
    *piVar10 = 0;
    FUN_00401f20(piVar10);
  }
  uStack_58 = (float)(uint)(uint3)uStack_58;
  piVar10 = (int *)(**(code **)(*param_1 + 0x120))();
  if ((piVar10 != (int *)0x0) || (piVar10 = (int *)FUN_004a98c0(), piVar10 != (int *)0x0)) {
    uVar6 = (**(code **)(*piVar10 + 0x16c))(0x40);
    uStack_58 = (float)CONCAT13(uVar6,uVar4);
  }
  if (*(int *)(in_ECX + 4) == 0) {
    iVar11 = 0;
  }
  else {
    iVar11 = FUN_004d6d40();
  }
  piVar10 = (int *)(iVar11 + 8);
  (**(code **)(*param_1 + 300))(7);
  (**(code **)(*param_1 + 0x128))(0);
  if (iVar9 == 0) {
    fVar18 = (float10)1;
  }
  else {
    fVar18 = (float10)FUN_005f4880();
  }
  fVar3 = 1.0;
  cVar5 = (char)((uint)unaff_EBX >> 0x18);
  while (piVar12 = _DAT_00000000, piVar10 != (int *)0x0) {
    if ((*piVar10 != 0) &&
       (iVar9 = FUN_009832e6(*(undefined4 *)(*piVar10 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0),
       iVar9 != 0)) {
      if (*(char *)(iVar9 + 0x90) == '\x04') {
        if (iVar9 == -0x60) {
          iVar11 = 0;
        }
        else {
          iVar11 = *(int *)(iVar9 + 100);
        }
        if ((iVar11 != 0) && (cVar7 = FUN_004149f0(), cVar7 == '\0')) goto LAB_0048c40b;
      }
      bVar2 = true;
      piVar10 = _DAT_00000000;
      while (piVar10 != (int *)0x0) {
        if (!bVar2) {
          if (piVar10 != (int *)0x0) {
            piVar10 = (int *)*piVar10;
            goto LAB_0048bf6c;
          }
          break;
        }
        if ((*piVar10 == 0) || (*(int *)(*piVar10 + 8) != iVar9)) {
          piVar10 = (int *)piVar10[1];
        }
        else {
          bVar2 = false;
        }
      }
      piVar10 = (int *)0x0;
LAB_0048bf6c:
      iVar11 = 0;
      piVar12 = (int *)FUN_0048b9c0(param_1,param_4);
      if (piVar12 != (int *)0x0) {
        iVar11 = FUN_009832e6(piVar12[2],0,&PTR_PTR_00b03248,&PTR_PTR_00b05dc8,0);
      }
      iVar17 = 0;
      if (piVar10 == (int *)0x0) {
LAB_0048c055:
        if ((param_3 == -1) || (param_3 == *(char *)(iVar9 + 0x90))) {
          if ((*(char *)(iVar9 + 0x90) == '\x05') && (piVar12 == (int *)0x0)) goto LAB_0048c40b;
          local_50 = (**(code **)(*(int *)(iVar9 + 0x88) + 0x10))();
          local_50 = local_50 & 0xffff;
          if ((iVar11 != 0) && (*(char *)(iVar9 + 0x90) == '\x05')) {
            uVar15 = (**(code **)(*(int *)(iVar11 + 0x74) + 0x10))();
            local_50 = local_50 + (uVar15 & 0xffff);
          }
          if ((cVar5 != '\0') &&
             ((*(char *)(iVar9 + 0x90) == '\x05' || (*(char *)(iVar9 + 0x90) == '\x04')))) {
            local_50 = FUN_009828c0();
          }
          if (iVar9 == -0x60) {
            iVar11 = 0;
          }
          else {
            iVar11 = *(int *)(iVar9 + 100);
          }
          iVar17 = *param_1;
          uVar8 = FUN_004bb060();
          (**(code **)(iVar17 + 300))(uVar8);
          if (((piVar10 == (int *)0x0) || ((int *)*piVar10 == (int *)0x0)) ||
             (*(int *)*piVar10 == 0)) {
            if (iVar11 == 0) {
              iVar11 = 0;
            }
            else {
              iVar11 = iVar11 + 0x18;
            }
            uVar8 = FUN_009828c0((float)fVar18,(float)(int)local_50);
            uVar8 = FUN_009828c0(uVar8);
            uVar8 = FUN_009828c0(uVar8);
            fVar19 = (float10)FUN_00547140(iVar9,iVar11,fVar3,uVar8);
            fVar1 = (float)fVar19;
            if (uStack_58 < fVar1) {
              if (piStack_54 != (int *)0x0) {
                if (*piStack_54 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*piStack_54);
                *piStack_54 = 0;
                FUN_00401f20(piStack_54);
              }
              piStack_54 = (int *)FUN_00401f00(0xc);
              uStack_58 = fVar1;
              if (piStack_54 == (int *)0x0) {
                piStack_54 = (int *)0x0;
                iRam00000008 = iVar9;
              }
              else {
                piStack_54[2] = 0;
                *piStack_54 = 0;
                piStack_54[1] = 0;
                piStack_54[2] = iVar9;
              }
            }
          }
          else {
            if (iVar11 != 0) {
              fVar19 = (float10)FUN_004849c0();
              fVar20 = (float10)(*(code *)**(undefined4 **)(iVar11 + 0x24))(0);
              if ((float10)(double)fVar19 < fVar20) {
                iVar11 = 0;
              }
            }
            for (piVar10 = (int *)*piVar10; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[1]) {
              iVar17 = *piVar10;
              if (iVar17 != 0) {
                iVar13 = FUN_0041e210(0x2b);
                if (iVar13 == 0) {
                  iVar13 = FUN_0046ca20(iVar9);
                  fVar19 = (float10)iVar13;
                  if (iVar13 < 0) {
                    fVar19 = fVar19 + (float10)4.2949673e+09;
                  }
                }
                else {
                  fVar19 = (float10)FUN_0041e810();
                }
                if (0.0 < (float)fVar19) {
                  iVar13 = FUN_0046ca20(iVar9);
                  fVar3 = (float)iVar13;
                  if (iVar13 < 0) {
                    fVar3 = fVar3 + 4.2949673e+09;
                  }
                  fVar3 = (float)fVar19 / fVar3;
                  if (iVar11 == 0) {
                    iVar13 = 0;
                  }
                  else {
                    iVar13 = iVar11 + 0x18;
                  }
                  uVar8 = FUN_009828c0((float)fVar18,(float)(int)local_50);
                  uVar8 = FUN_009828c0(uVar8);
                  uVar8 = FUN_009828c0(uVar8);
                  fVar19 = (float10)FUN_00547140(iVar9,iVar13,fVar3,uVar8);
                  fVar1 = (float)fVar19;
                  if (uStack_58 < fVar1) {
                    if (piStack_54 != (int *)0x0) {
                      if (*piStack_54 != 0) {
                        FUN_004526e0();
                      }
                      FUN_00401f20(*piStack_54);
                      *piStack_54 = 0;
                      FUN_00401f20(piStack_54);
                    }
                    piStack_54 = (int *)FUN_00401f00(0xc);
                    if (piStack_54 == (int *)0x0) {
                      piStack_54 = (int *)0x0;
                    }
                    else {
                      piStack_54[2] = 0;
                      *piStack_54 = 0;
                      piStack_54[1] = 0;
                    }
                    piStack_54[2] = iVar9;
                    puVar16 = (undefined4 *)FUN_00401f00(8);
                    uStack_58 = fVar1;
                    if (puVar16 == (undefined4 *)0x0) {
                      *piStack_54 = 0;
                      FUN_00446cb0(iVar17);
                    }
                    else {
                      *puVar16 = 0;
                      puVar16[1] = 0;
                      *piStack_54 = (int)puVar16;
                      FUN_00446cb0(iVar17);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        if ((((int *)*piVar10 == (int *)0x0) || (*(int *)*piVar10 == 0)) ||
           (iVar13 = FUN_0041e7b0(), iVar13 == 0)) {
          piVar14 = (int *)0x0;
        }
        else {
          piVar14 = (int *)FUN_0041e7b0();
        }
        if ((piVar14 != param_1) && (0 < piVar10[1])) {
          for (piVar14 = (int *)*piVar10; (piVar14 != (int *)0x0 && (*piVar14 != 0));
              piVar14 = (int *)piVar14[1]) {
            iVar13 = FUN_0041e7b0();
            if (iVar13 != 0) {
              iVar17 = iVar17 + 1;
            }
          }
        }
        if ((((((int *)*piVar10 == (int *)0x0) || (*(int *)*piVar10 == 0)) ||
             (iVar13 = FUN_0041e7b0(), iVar13 == 0)) ||
            ((iVar13 = FUN_0041e7b0(), iVar13 == 0 || (iVar17 < piVar10[1] + *(int *)*piStack_30))))
           && ((0 < piVar10[1] + *(int *)*piStack_30 || (*(int *)*piStack_30 < 0))))
        goto LAB_0048c055;
      }
      if (piVar12 != (int *)0x0) {
        if (*piVar12 != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piVar12);
        *piVar12 = 0;
        FUN_00401f20(piVar12);
      }
    }
LAB_0048c40b:
    piVar10 = (int *)piStack_30[1];
    piStack_30 = piVar10;
  }
  do {
    if ((piVar12 == (int *)0x0) || ((piVar12[1] == 0 && (*piVar12 == 0)))) {
      fVar18 = (float10)FUN_00546c60(uStack_58,0,0);
      *param_2 = (float)fVar18;
      return piStack_54;
    }
    iVar9 = FUN_009832e6(*(undefined4 *)(*piVar12 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b036fc,0);
    piStack_14 = (int *)*piVar12;
    if ((iVar9 != 0) && ((param_3 == -1 || (param_3 == *(char *)(iVar9 + 0x90))))) {
      if (((int *)*piStack_14 != (int *)0x0) &&
         (((*(int *)*piStack_14 != 0 && (iVar11 = FUN_0041e7b0(), iVar11 != 0)) &&
          (iVar11 = FUN_0041e7b0(), iVar11 != 0)))) {
        if ((((int *)*piStack_14 == (int *)0x0) || (*(int *)*piStack_14 == 0)) ||
           (iVar11 = FUN_0041e7b0(), iVar11 == 0)) {
          piVar10 = (int *)0x0;
        }
        else {
          piVar10 = (int *)FUN_0041e7b0();
        }
        if (piVar10 != param_1) goto LAB_0048c830;
      }
      if (piStack_14[1] != 0) {
        if (_DAT_00000004 != 0) {
          FUN_004d6d40();
        }
        cVar7 = FUN_00469920(iVar9);
        if (cVar7 == '\0') {
          piVar10 = (int *)*piStack_14;
          while( true ) {
            if ((piVar10 == (int *)0x0) || (*piVar10 == 0)) goto LAB_0048c532;
            cVar7 = FUN_0041def0();
            if (cVar7 != '\0') break;
            piVar10 = (int *)piVar10[1];
          }
          if (piStack_14[1] < 0) goto LAB_0048c830;
LAB_0048c532:
          if (*(char *)(iVar9 + 0x90) == '\x05') {
            piVar10 = (int *)FUN_0048b9c0(param_1,param_4);
            if (piVar10 == (int *)0x0) goto LAB_0048c830;
            if (*piVar10 != 0) {
              FUN_004526e0();
            }
            FUN_00401f20(*piVar10);
            *piVar10 = 0;
            FUN_00401f20(piVar10);
          }
          iVar11 = *param_1;
          uVar8 = FUN_004bb060();
          fVar18 = (float10)(**(code **)(iVar11 + 300))(uVar8);
          uVar15 = (**(code **)(*(int *)(iVar9 + 0x88) + 0x10))();
          uVar15 = uVar15 & 0xffff;
          if ((cVar5 != '\0') &&
             ((*(char *)(iVar9 + 0x90) == '\x05' || (*(char *)(iVar9 + 0x90) == '\x04')))) {
            uVar15 = FUN_009828c0();
          }
          piStack_14 = (int *)*piStack_14;
          if ((piStack_14 == (int *)0x0) || (*piStack_14 == 0)) {
            uVar8 = FUN_009828c0((float)fVar18,uVar15,fVar3,0x3f800000,0);
            uVar8 = FUN_009828c0(uVar8);
            uVar8 = FUN_009828c0(uVar8);
            fVar18 = (float10)FUN_00547070(uVar8);
            fVar1 = (float)fVar18;
            if (uStack_58 < fVar1) {
              if (piStack_54 != (int *)0x0) {
                if (*piStack_54 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*piStack_54);
                *piStack_54 = 0;
                FUN_00401f20(piStack_54);
              }
              piStack_54 = (int *)FUN_00401f00(0xc);
              uStack_58 = fVar1;
              if (piStack_54 == (int *)0x0) {
                piStack_54 = (int *)0x0;
                iRam00000008 = iVar9;
              }
              else {
                piStack_54[2] = 0;
                *piStack_54 = 0;
                piStack_54[1] = 0;
                piStack_54[2] = iVar9;
              }
            }
          }
          else {
            do {
              iVar11 = *piStack_14;
              if (iVar11 == 0) break;
              iVar17 = FUN_0041e210(0x2b);
              if (iVar17 == 0) {
                iVar17 = FUN_0046ca20(iVar9);
                fVar19 = (float10)iVar17;
                if (iVar17 < 0) {
                  fVar19 = fVar19 + (float10)4.2949673e+09;
                }
              }
              else {
                fVar19 = (float10)FUN_0041e810();
              }
              if (0.0 < (float)fVar19) {
                if (iVar9 == -0x60) {
                  iVar17 = 0;
                }
                else {
                  iVar17 = *(int *)(iVar9 + 100);
                }
                iVar13 = FUN_0046ca20(iVar9);
                fVar3 = (float)iVar13;
                if (iVar13 < 0) {
                  fVar3 = fVar3 + 4.2949673e+09;
                }
                fVar3 = (float)fVar19 / fVar3;
                if (iVar17 == 0) {
                  iVar17 = 0;
                }
                else {
                  iVar17 = iVar17 + 0x18;
                }
                uVar8 = FUN_009828c0((float)fVar18,0xbf800000);
                uVar8 = FUN_009828c0(uVar8);
                uVar8 = FUN_009828c0(uVar8);
                fVar19 = (float10)FUN_00547140(iVar9,iVar17,fVar3,uVar8);
                fVar1 = (float)fVar19;
                if (uStack_58 < fVar1) {
                  if (piStack_54 != (int *)0x0) {
                    if (*piStack_54 != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*piStack_54);
                    *piStack_54 = 0;
                    FUN_00401f20(piStack_54);
                  }
                  piStack_54 = (int *)FUN_00401f00(0xc);
                  if (piStack_54 == (int *)0x0) {
                    piStack_54 = (int *)0x0;
                  }
                  else {
                    piStack_54[2] = 0;
                    *piStack_54 = 0;
                    piStack_54[1] = 0;
                  }
                  piStack_54[2] = iVar9;
                  puVar16 = (undefined4 *)FUN_00401f00(8);
                  uStack_58 = fVar1;
                  if (puVar16 == (undefined4 *)0x0) {
                    *piStack_54 = 0;
                    FUN_00446cb0(iVar11);
                  }
                  else {
                    *puVar16 = 0;
                    puVar16[1] = 0;
                    *piStack_54 = (int)puVar16;
                    FUN_00446cb0(iVar11);
                  }
                }
              }
              piStack_14 = (int *)piStack_14[1];
            } while (piStack_14 != (int *)0x0);
          }
        }
      }
    }
LAB_0048c830:
    piVar12 = (int *)piVar12[1];
  } while( true );
}



int * FUN_0048c870(int *param_1,int param_2,char param_3)

{
  float fVar1;
  ushort uVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *in_ECX;
  int iVar11;
  int *piVar12;
  float10 fVar13;
  int *local_18;
  float local_14;
  
  local_14 = -3.4028235e+38;
  local_18 = (int *)0x0;
  if ((param_3 != '\0') && (piVar5 = (int *)FUN_00486790(param_2,0), piVar5 != (int *)0x0)) {
    cVar4 = FUN_0041df40();
    if (cVar4 != '\0') {
      return piVar5;
    }
    if (*piVar5 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar5);
    *piVar5 = 0;
    FUN_00401f20(piVar5);
  }
  if (in_ECX[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004d6d40();
  }
  for (piVar5 = (int *)(iVar6 + 8); (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))));
      piVar5 = (int *)piVar5[1]) {
    iVar6 = FUN_009832e6(*(undefined4 *)(*piVar5 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0);
    piVar12 = (int *)*in_ECX;
    bVar3 = true;
    while (piVar12 != (int *)0x0) {
      if (!bVar3) {
        if (piVar12 != (int *)0x0) {
          piVar12 = (int *)*piVar12;
          goto LAB_0048c95c;
        }
        break;
      }
      if ((*piVar12 == 0) || (*(int *)(*piVar12 + 8) != iVar6)) {
        piVar12 = (int *)piVar12[1];
      }
      else {
        bVar3 = false;
      }
    }
    piVar12 = (int *)0x0;
LAB_0048c95c:
    iVar11 = 0;
    if (piVar12 == (int *)0x0) {
LAB_0048ca09:
      if (((iVar6 != 0) && (param_2 != -1)) && (cVar4 = FUN_00468ff0(param_2,0), cVar4 != '\0')) {
        if (((piVar12 == (int *)0x0) || (piVar12 = (int *)*piVar12, piVar12 == (int *)0x0)) ||
           (*piVar12 == 0)) {
          iVar11 = FUN_0046ca20(iVar6);
          fVar1 = (float)iVar11;
          if (iVar11 < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          uVar2 = *(ushort *)(iVar6 + 0xe4);
          iVar11 = *param_1;
          fVar13 = (float10)(**(code **)(*param_1 + 300))(7,fVar1);
          uVar9 = FUN_004b4c80((float)fVar13);
          fVar13 = (float10)(**(code **)(iVar11 + 300))(uVar9);
          fVar13 = (float10)FUN_00547370((int)ROUND((float)uVar2 / 100.0) & 0xffff,(float)fVar13);
          fVar1 = (float)fVar13;
          if (local_14 < fVar1) {
            if (local_18 != (int *)0x0) {
              if (*local_18 != 0) {
                FUN_004526e0();
              }
              FUN_00401f20(*local_18);
              *local_18 = 0;
              FUN_00401f20(local_18);
            }
            local_18 = (int *)FUN_00401f00(0xc);
            local_14 = fVar1;
            if (local_18 == (int *)0x0) {
              local_18 = (int *)0x0;
              iRam00000008 = iVar6;
            }
            else {
              local_18[2] = 0;
              *local_18 = 0;
              local_18[1] = 0;
              local_18[2] = iVar6;
            }
          }
        }
        else {
          do {
            iVar11 = *piVar12;
            if (iVar11 == 0) break;
            iVar7 = FUN_0041e7b0();
            if ((iVar7 == 0) || (piVar8 = (int *)FUN_0041e7b0(), piVar8 == param_1)) {
              iVar7 = FUN_0041e210(0x2b);
              if (iVar7 == 0) {
                iVar7 = FUN_0046ca20(iVar6);
                fVar13 = (float10)iVar7;
                if (iVar7 < 0) {
                  fVar13 = fVar13 + (float10)4.2949673e+09;
                }
              }
              else {
                fVar13 = (float10)FUN_0041e810();
              }
              if (0.0 < (float)fVar13) {
                uVar2 = *(ushort *)(iVar6 + 0xe4);
                iVar7 = *param_1;
                fVar13 = (float10)(**(code **)(*param_1 + 300))(7,(float)fVar13);
                uVar9 = FUN_004b4c80((float)fVar13);
                fVar13 = (float10)(**(code **)(iVar7 + 300))(uVar9);
                fVar13 = (float10)FUN_00547370((int)ROUND((float)uVar2 / 100.0) & 0xffff,
                                               (float)fVar13);
                fVar1 = (float)fVar13;
                if (local_14 < fVar1) {
                  if (local_18 != (int *)0x0) {
                    if (*local_18 != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*local_18);
                    *local_18 = 0;
                    FUN_00401f20(local_18);
                  }
                  local_18 = (int *)FUN_00401f00(0xc);
                  if (local_18 == (int *)0x0) {
                    local_18 = (int *)0x0;
                  }
                  else {
                    local_18[2] = 0;
                    *local_18 = 0;
                    local_18[1] = 0;
                  }
                  local_18[2] = iVar6;
                  puVar10 = (undefined4 *)FUN_00401f00(8);
                  local_14 = fVar1;
                  if (puVar10 == (undefined4 *)0x0) {
                    *local_18 = 0;
                    FUN_00446cb0(iVar11);
                  }
                  else {
                    *puVar10 = 0;
                    puVar10[1] = 0;
                    *local_18 = (int)puVar10;
                    FUN_00446cb0(iVar11);
                  }
                }
              }
            }
            piVar12 = (int *)piVar12[1];
          } while (piVar12 != (int *)0x0);
        }
      }
    }
    else {
      if ((((int *)*piVar12 == (int *)0x0) || (*(int *)*piVar12 == 0)) ||
         (iVar7 = FUN_0041e7b0(), iVar7 == 0)) {
        piVar8 = (int *)0x0;
      }
      else {
        piVar8 = (int *)FUN_0041e7b0();
      }
      if ((piVar8 != param_1) && (0 < piVar12[1])) {
        for (piVar8 = (int *)*piVar12; (piVar8 != (int *)0x0 && (*piVar8 != 0));
            piVar8 = (int *)piVar8[1]) {
          iVar7 = FUN_0041e7b0();
          if (iVar7 != 0) {
            iVar11 = iVar11 + 1;
          }
        }
      }
      if ((((((int *)*piVar12 == (int *)0x0) || (*(int *)*piVar12 == 0)) ||
           (iVar7 = FUN_0041e7b0(), iVar7 == 0)) ||
          ((iVar7 = FUN_0041e7b0(), iVar7 == 0 || (iVar11 < piVar12[1] + *(int *)*piVar5)))) &&
         ((0 < piVar12[1] + *(int *)*piVar5 || (*(int *)*piVar5 < 0)))) goto LAB_0048ca09;
    }
  }
  piVar5 = (int *)*in_ECX;
  do {
    if ((piVar5 == (int *)0x0) || ((piVar5[1] == 0 && (*piVar5 == 0)))) {
      return local_18;
    }
    iVar6 = FUN_009832e6(*(undefined4 *)(*piVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03778,0);
    piVar12 = (int *)*piVar5;
    if (iVar6 != 0) {
      if (((((int *)*piVar12 != (int *)0x0) && (*(int *)*piVar12 != 0)) &&
          (iVar11 = FUN_0041e7b0(), iVar11 != 0)) && (iVar11 = FUN_0041e7b0(), iVar11 != 0)) {
        if ((((int *)*piVar12 == (int *)0x0) || (*(int *)*piVar12 == 0)) ||
           (iVar11 = FUN_0041e7b0(), iVar11 == 0)) {
          piVar8 = (int *)0x0;
        }
        else {
          piVar8 = (int *)FUN_0041e7b0();
        }
        if (piVar8 != param_1) goto LAB_0048d0ea;
      }
      if (piVar12[1] != 0) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(iVar6);
        if (((cVar4 == '\0') && (param_2 != -1)) &&
           ((cVar4 = FUN_00468ff0(param_2,0), cVar4 != '\0' && (-1 < piVar12[1])))) {
          piVar12 = (int *)*piVar12;
          if ((piVar12 == (int *)0x0) || (*piVar12 == 0)) {
            iVar11 = FUN_0046ca20(iVar6);
            fVar1 = (float)iVar11;
            if (iVar11 < 0) {
              fVar1 = fVar1 + 4.2949673e+09;
            }
            uVar2 = *(ushort *)(iVar6 + 0xe4);
            iVar11 = *param_1;
            fVar13 = (float10)(**(code **)(*param_1 + 300))(7,fVar1);
            uVar9 = FUN_004b4c80((float)fVar13);
            fVar13 = (float10)(**(code **)(iVar11 + 300))(uVar9);
            fVar13 = (float10)FUN_00547370((int)ROUND((float)uVar2 / 100.0) & 0xffff,(float)fVar13);
            fVar1 = (float)fVar13;
            if (local_14 < fVar1) {
              if (local_18 != (int *)0x0) {
                if (*local_18 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*local_18);
                *local_18 = 0;
                FUN_00401f20(local_18);
              }
              local_18 = (int *)FUN_00401f00(0xc);
              local_14 = fVar1;
              if (local_18 == (int *)0x0) {
                local_18 = (int *)0x0;
                iRam00000008 = iVar6;
              }
              else {
                local_18[2] = 0;
                *local_18 = 0;
                local_18[1] = 0;
                local_18[2] = iVar6;
              }
            }
          }
          else {
            do {
              iVar11 = *piVar12;
              if (iVar11 == 0) break;
              iVar7 = FUN_0041e7b0();
              if ((iVar7 == 0) || (piVar8 = (int *)FUN_0041e7b0(), piVar8 == param_1)) {
                iVar7 = FUN_0041e210(0x2b);
                if (iVar7 == 0) {
                  iVar7 = FUN_0046ca20(iVar6);
                  fVar13 = (float10)iVar7;
                  if (iVar7 < 0) {
                    fVar13 = fVar13 + (float10)4.2949673e+09;
                  }
                }
                else {
                  fVar13 = (float10)FUN_0041e810();
                }
                if (0.0 < (float)fVar13) {
                  uVar2 = *(ushort *)(iVar6 + 0xe4);
                  iVar7 = *param_1;
                  fVar13 = (float10)(**(code **)(*param_1 + 300))(7,(float)fVar13);
                  uVar9 = FUN_004b4c80((float)fVar13);
                  fVar13 = (float10)(**(code **)(iVar7 + 300))(uVar9);
                  fVar13 = (float10)FUN_00547370((int)ROUND((float)uVar2 / 100.0) & 0xffff,
                                                 (float)fVar13);
                  fVar1 = (float)fVar13;
                  if (local_14 < fVar1) {
                    if (local_18 != (int *)0x0) {
                      if (*local_18 != 0) {
                        FUN_004526e0();
                      }
                      FUN_00401f20(*local_18);
                      *local_18 = 0;
                      FUN_00401f20(local_18);
                    }
                    local_18 = (int *)FUN_00401f00(0xc);
                    if (local_18 == (int *)0x0) {
                      local_18 = (int *)0x0;
                    }
                    else {
                      local_18[2] = 0;
                      *local_18 = 0;
                      local_18[1] = 0;
                    }
                    local_18[2] = iVar6;
                    puVar10 = (undefined4 *)FUN_00401f00(8);
                    local_14 = fVar1;
                    if (puVar10 == (undefined4 *)0x0) {
                      *local_18 = 0;
                      FUN_00446cb0(iVar11);
                    }
                    else {
                      *puVar10 = 0;
                      puVar10[1] = 0;
                      *local_18 = (int)puVar10;
                      FUN_00446cb0(iVar11);
                    }
                  }
                }
              }
              piVar12 = (int *)piVar12[1];
            } while (piVar12 != (int *)0x0);
          }
        }
      }
    }
LAB_0048d0ea:
    piVar5 = (int *)piVar5[1];
  } while( true );
}



int * FUN_0048d110(int param_1,int param_2,char param_3)

{
  float fVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *in_ECX;
  int iVar10;
  int *piVar11;
  float10 fVar12;
  int *local_14;
  float local_10;
  
  local_10 = -3.4028235e+38;
  local_14 = (int *)0x0;
  if ((param_3 != '\0') && (piVar5 = (int *)FUN_00486790(param_2,0), piVar5 != (int *)0x0)) {
    cVar4 = FUN_0041df40();
    if (cVar4 != '\0') {
      return piVar5;
    }
    if (*piVar5 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar5);
    *piVar5 = 0;
    FUN_00401f20(piVar5);
  }
  if (in_ECX[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004d6d40();
  }
  for (piVar5 = (int *)(iVar6 + 8); (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))));
      piVar5 = (int *)piVar5[1]) {
    iVar6 = FUN_009832e6(*(undefined4 *)(*piVar5 + 4),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0);
    piVar11 = (int *)*in_ECX;
    bVar3 = true;
    while (piVar11 != (int *)0x0) {
      if (!bVar3) {
        if (piVar11 != (int *)0x0) {
          piVar11 = (int *)*piVar11;
          goto LAB_0048d1fc;
        }
        break;
      }
      if ((*piVar11 == 0) || (*(int *)(*piVar11 + 8) != iVar6)) {
        piVar11 = (int *)piVar11[1];
      }
      else {
        bVar3 = false;
      }
    }
    piVar11 = (int *)0x0;
LAB_0048d1fc:
    iVar10 = 0;
    if (piVar11 == (int *)0x0) {
LAB_0048d2a8:
      if (((iVar6 != 0) && (param_2 != -1)) && (cVar4 = FUN_00468ff0(param_2,0), cVar4 != '\0')) {
        if (((piVar11 == (int *)0x0) || (piVar11 = (int *)*piVar11, piVar11 == (int *)0x0)) ||
           (*piVar11 == 0)) {
          uVar8 = FUN_00470520(iVar6);
          fVar12 = (float10)FUN_005479b0(uVar8);
          fVar1 = (float)fVar12;
          if (local_10 < fVar1) {
            if (local_14 != (int *)0x0) {
              if (*local_14 != 0) {
                FUN_004526e0();
              }
              FUN_00401f20(*local_14);
              *local_14 = 0;
              FUN_00401f20(local_14);
            }
            local_14 = (int *)FUN_00401f00(0xc);
            local_10 = fVar1;
            if (local_14 == (int *)0x0) {
              local_14 = (int *)0x0;
              iRam00000008 = iVar6;
            }
            else {
              local_14[2] = 0;
              *local_14 = 0;
              local_14[1] = 0;
              local_14[2] = iVar6;
            }
          }
        }
        else {
          do {
            iVar10 = *piVar11;
            if (iVar10 == 0) break;
            uVar8 = FUN_00470520(iVar6);
            fVar12 = (float10)FUN_005479b0(uVar8);
            fVar1 = (float)fVar12;
            if (local_10 < fVar1) {
              if (local_14 != (int *)0x0) {
                if (*local_14 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*local_14);
                *local_14 = 0;
                FUN_00401f20(local_14);
              }
              local_14 = (int *)FUN_00401f00(0xc);
              if (local_14 == (int *)0x0) {
                local_14 = (int *)0x0;
              }
              else {
                local_14[2] = 0;
                *local_14 = 0;
                local_14[1] = 0;
              }
              local_14[2] = iVar6;
              puVar9 = (undefined4 *)FUN_00401f00(8);
              local_10 = fVar1;
              if (puVar9 == (undefined4 *)0x0) {
                *local_14 = 0;
                FUN_00446cb0(iVar10);
              }
              else {
                *puVar9 = 0;
                puVar9[1] = 0;
                *local_14 = (int)puVar9;
                FUN_00446cb0(iVar10);
              }
            }
            piVar11 = (int *)piVar11[1];
          } while (piVar11 != (int *)0x0);
        }
      }
    }
    else {
      if ((((int *)*piVar11 == (int *)0x0) || (*(int *)*piVar11 == 0)) ||
         (iVar7 = FUN_0041e7b0(), iVar7 == 0)) {
        iVar7 = 0;
      }
      else {
        iVar7 = FUN_0041e7b0();
      }
      if ((iVar7 != param_1) && (0 < piVar11[1])) {
        for (piVar2 = (int *)*piVar11; (piVar2 != (int *)0x0 && (*piVar2 != 0));
            piVar2 = (int *)piVar2[1]) {
          iVar7 = FUN_0041e7b0();
          if (iVar7 != 0) {
            iVar10 = iVar10 + 1;
          }
        }
      }
      if ((((((int *)*piVar11 == (int *)0x0) || (*(int *)*piVar11 == 0)) ||
           (iVar7 = FUN_0041e7b0(), iVar7 == 0)) ||
          ((iVar7 = FUN_0041e7b0(), iVar7 == 0 || (iVar10 < piVar11[1] + *(int *)*piVar5)))) &&
         ((0 < piVar11[1] + *(int *)*piVar5 || (*(int *)*piVar5 < 0)))) goto LAB_0048d2a8;
    }
  }
  piVar5 = (int *)*in_ECX;
  do {
    if ((piVar5 == (int *)0x0) || ((piVar5[1] == 0 && (*piVar5 == 0)))) {
      return local_14;
    }
    iVar6 = FUN_009832e6(*(undefined4 *)(*piVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b05de0,0);
    piVar11 = (int *)*piVar5;
    if (iVar6 != 0) {
      if ((((int *)*piVar11 != (int *)0x0) && (*(int *)*piVar11 != 0)) &&
         ((iVar10 = FUN_0041e7b0(), iVar10 != 0 && (iVar10 = FUN_0041e7b0(), iVar10 != 0)))) {
        if ((((int *)*piVar11 == (int *)0x0) || (*(int *)*piVar11 == 0)) ||
           (iVar10 = FUN_0041e7b0(), iVar10 == 0)) {
          iVar10 = 0;
        }
        else {
          iVar10 = FUN_0041e7b0();
        }
        if (iVar10 != param_1) goto LAB_0048d69a;
      }
      if (piVar11[1] != 0) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(iVar6);
        if (((cVar4 == '\0') && (param_2 != -1)) &&
           ((cVar4 = FUN_00468ff0(param_2,0), cVar4 != '\0' &&
            ((cVar4 = FUN_004846d0(), cVar4 == '\0' || (-1 < piVar11[1])))))) {
          piVar11 = (int *)*piVar11;
          if ((piVar11 == (int *)0x0) || (*piVar11 == 0)) {
            uVar8 = FUN_00470520(iVar6);
            fVar12 = (float10)FUN_005479b0(uVar8);
            fVar1 = (float)fVar12;
            if (local_10 < fVar1) {
              if (local_14 != (int *)0x0) {
                if (*local_14 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*local_14);
                *local_14 = 0;
                FUN_00401f20(local_14);
              }
              local_14 = (int *)FUN_00401f00(0xc);
              local_10 = fVar1;
              if (local_14 == (int *)0x0) {
                local_14 = (int *)0x0;
                iRam00000008 = iVar6;
              }
              else {
                local_14[2] = 0;
                *local_14 = 0;
                local_14[1] = 0;
                local_14[2] = iVar6;
              }
            }
          }
          else {
            do {
              iVar10 = *piVar11;
              if (iVar10 == 0) break;
              uVar8 = FUN_00470520(iVar6);
              fVar12 = (float10)FUN_005479b0(uVar8);
              fVar1 = (float)fVar12;
              if (local_10 < fVar1) {
                if (local_14 != (int *)0x0) {
                  if (*local_14 != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*local_14);
                  *local_14 = 0;
                  FUN_00401f20(local_14);
                }
                local_14 = (int *)FUN_00401f00(0xc);
                if (local_14 == (int *)0x0) {
                  local_14 = (int *)0x0;
                }
                else {
                  local_14[2] = 0;
                  *local_14 = 0;
                  local_14[1] = 0;
                }
                local_14[2] = iVar6;
                puVar9 = (undefined4 *)FUN_00401f00(8);
                local_10 = fVar1;
                if (puVar9 == (undefined4 *)0x0) {
                  *local_14 = 0;
                  FUN_00446cb0(iVar10);
                }
                else {
                  *puVar9 = 0;
                  puVar9[1] = 0;
                  *local_14 = (int)puVar9;
                  FUN_00446cb0(iVar10);
                }
              }
              piVar11 = (int *)piVar11[1];
            } while (piVar11 != (int *)0x0);
          }
        }
      }
    }
LAB_0048d69a:
    piVar5 = (int *)piVar5[1];
  } while( true );
}



int FUN_0048d6c0(void)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *in_ECX;
  undefined4 *puVar8;
  int *piVar9;
  int local_8;
  
  local_8 = 0;
  if ((in_ECX[1] != 0) && (iVar5 = FUN_004d6d40(), iVar5 != 0)) {
    if (in_ECX[1] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_004d6d40();
    }
    for (piVar1 = (int *)(iVar5 + 8);
        (piVar1 != (int *)0x0 && (piVar2 = (int *)*piVar1, piVar2 != (int *)0x0));
        piVar1 = (int *)piVar1[1]) {
      iVar5 = FUN_009832e6(piVar2[1],0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
      if (iVar5 == 0) {
        piVar9 = (int *)*in_ECX;
        bVar3 = true;
        while (piVar9 != (int *)0x0) {
          if (!bVar3) {
            if (piVar9 != (int *)0x0) {
              piVar9 = (int *)*piVar9;
              goto LAB_0048d761;
            }
            break;
          }
          if ((*piVar9 == 0) || (*(int *)(*piVar9 + 8) != piVar2[1])) {
            piVar9 = (int *)piVar9[1];
          }
          else {
            bVar3 = false;
          }
        }
        piVar9 = (int *)0x0;
LAB_0048d761:
        iVar5 = *piVar2;
        iVar6 = iVar5;
        if (iVar5 < 0) {
          iVar6 = -iVar5;
        }
        if (piVar9 != (int *)0x0) {
          if ((iVar6 + piVar9[1] < 1) || ((iVar5 < 0 && (piVar9[1] <= iVar5)))) goto LAB_0048d7c7;
          if (((int *)*piVar9 != (int *)0x0) && (*(int *)*piVar9 != 0)) {
            iVar5 = FUN_00484660();
            local_8 = local_8 + iVar5;
            cVar4 = FUN_004847c0();
            if (cVar4 != '\0') {
              local_8 = local_8 + 1;
            }
            iVar5 = FUN_004845d0();
            if ((piVar9[1] + *piVar2 <= iVar5) || (cVar4 = FUN_00484e80(0), cVar4 != '\0'))
            goto LAB_0048d7c7;
          }
        }
        local_8 = local_8 + 1;
      }
LAB_0048d7c7:
    }
  }
  iVar5 = local_8;
  puVar8 = (undefined4 *)*in_ECX;
  if (puVar8 == (undefined4 *)0x0) {
    return local_8 + 1;
  }
  do {
    piVar1 = (int *)*puVar8;
    if (piVar1 == (int *)0x0) break;
    if (piVar1[1] < 1) {
LAB_0048d8dc:
      puVar8 = (undefined4 *)puVar8[1];
    }
    else {
      if ((in_ECX[1] != 0) && (iVar6 = FUN_004d6d40(), iVar6 != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar4 = FUN_00469920(piVar1[2]);
        if (cVar4 != '\0') goto LAB_0048d8dc;
      }
      iVar6 = FUN_00484660();
      piVar2 = (int *)*piVar1;
      local_8 = local_8 + iVar6;
      while( true ) {
        if ((piVar2 == (int *)0x0) || (*piVar2 == 0)) goto LAB_0048d86d;
        cVar4 = FUN_0041fcb0();
        if (cVar4 != '\0') break;
        piVar2 = (int *)piVar2[1];
      }
      local_8 = local_8 + 1;
LAB_0048d86d:
      iVar6 = piVar1[1];
      iVar7 = FUN_004845d0();
      if (iVar7 < iVar6) {
        local_8 = local_8 + 1;
      }
      if ((-1 < iVar6) ||
         ((((int *)*piVar1 != (int *)0x0 && (*(int *)*piVar1 != 0)) &&
          (cVar4 = FUN_0041def0(), cVar4 != '\0')))) goto LAB_0048d8dc;
      FUN_0065c620(piVar1);
      FUN_004845a0();
      if (*piVar1 != 0) {
        FUN_004526e0();
      }
      FUN_00401f20(*piVar1);
      *piVar1 = 0;
      FUN_00401f20(piVar1);
      puVar8 = (undefined4 *)*in_ECX;
      local_8 = iVar5;
    }
  } while (puVar8 != (undefined4 *)0x0);
  return local_8 + 1;
}



undefined1 FUN_0048d910(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  float10 fVar5;
  undefined1 local_5;
  
  puVar1 = (undefined4 *)*in_ECX;
  local_5 = 0;
  do {
    if ((puVar1 == (undefined4 *)0x0) || (piVar2 = (int *)*puVar1, piVar2 == (int *)0x0)) {
      return local_5;
    }
    piVar3 = (int *)*piVar2;
    while ((piVar3 != (int *)0x0 && (puVar4 = (undefined4 *)*piVar3, puVar4 != (undefined4 *)0x0)))
    {
      fVar5 = (float10)FUN_0041e8a0();
      if (fVar5 == (float10)-1.0) {
LAB_0048d98c:
        piVar3 = (int *)piVar3[1];
      }
      else {
        local_5 = 1;
        FUN_0041f640();
        FUN_004238a0(0);
        if (puVar4[1] != 0) goto LAB_0048d98c;
        FUN_0065c620(puVar4);
        (**(code **)*puVar4)(1);
        piVar3 = (int *)*piVar2;
      }
    }
    piVar3 = (int *)*piVar2;
    if ((((piVar3 == (int *)0x0) || (piVar3[1] != 0)) || (*piVar3 != 0)) || (piVar2[1] != 0)) {
      puVar1 = (undefined4 *)puVar1[1];
    }
    else {
      FUN_0065c620(piVar2);
      FUN_004845a0();
      if (*piVar2 != 0) {
        FUN_004526e0();
      }
      FUN_00401f20(*piVar2);
      *piVar2 = 0;
      FUN_00401f20(piVar2);
      puVar1 = (undefined4 *)*in_ECX;
    }
  } while( true );
}



void FUN_0048da00(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afdc8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((param_2 != 0) && (param_1 != 0)) {
    uVar3 = FUN_004d6d40(uVar2);
    iVar4 = FUN_00485e00(param_2,uVar3);
    if (iVar4 != 0) {
      if (in_ECX[1] == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004d6d40(uVar2);
      }
      for (piVar1 = (int *)(iVar4 + 8);
          (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0)))); piVar1 = (int *)piVar1[1])
      {
        iVar4 = *(int *)(*piVar1 + 4);
        FUN_009832e6(iVar4,0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
        if (iVar4 != 0) {
          piVar5 = (int *)FUN_00485e80(iVar4,1,0);
          iVar6 = *(int *)*piVar1;
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (piVar5 != (int *)0x0) {
            iVar6 = piVar5[1] + iVar6;
          }
          if (0 < iVar6) {
            iVar7 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
            if ((iVar7 == 0) || (*(int *)(iVar7 + 4) == 0)) {
              iVar7 = FUN_00401f00(0xc);
              local_4 = 2;
              if (iVar7 == 0) {
                param_2 = 0;
              }
              else {
                param_2 = FUN_00484420(iVar4,iVar6);
              }
              local_4 = 0xffffffff;
              if ((((piVar5 != (int *)0x0) && (piVar5 = (int *)*piVar5, piVar5 != (int *)0x0)) &&
                  (iVar4 = FUN_0052b4a0(), iVar4 != 0)) && (piVar5 != (int *)0x0)) {
                piVar8 = (int *)*piVar5;
                while ((piVar8 != (int *)0x0 && (*piVar5 != 0))) {
                  iVar4 = FUN_00401f00(0x14);
                  local_4 = 3;
                  if (iVar4 == 0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = FUN_00422ee0();
                  }
                  local_4 = 0xffffffff;
                  FUN_00428970(*piVar5,1);
                  FUN_0067b1e0(uVar3);
                  piVar5 = (int *)piVar5[1];
                  piVar8 = piVar5;
                }
              }
            }
            else {
              piVar8 = (int *)FUN_00447df0(*(undefined1 *)(iVar4 + 4));
              (**(code **)(*piVar8 + 0xb4))(iVar4);
              iVar4 = FUN_009832e6(piVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
              if (iVar4 != 0) {
                *(undefined4 *)(iVar4 + 4) = 0;
              }
              FUN_0044d950(piVar8);
              FUN_00459800(piVar8);
              iVar4 = *(int *)*piVar1;
              if (piVar5 != (int *)0x0) {
                iVar4 = iVar4 + piVar5[1];
              }
              iVar6 = FUN_00401f00(0xc);
              local_4 = 0;
              if (iVar6 == 0) {
                param_2 = 0;
              }
              else {
                param_2 = FUN_00484420(piVar8,iVar4);
              }
              local_4 = 0xffffffff;
              if (((piVar5 != (int *)0x0) && (piVar5 = (int *)*piVar5, piVar5 != (int *)0x0)) &&
                 ((iVar4 = FUN_0052b4a0(), iVar4 != 0 && (piVar5 != (int *)0x0)))) {
                piVar8 = (int *)*piVar5;
                while ((piVar8 != (int *)0x0 && (*piVar5 != 0))) {
                  iVar4 = FUN_00401f00(0x14);
                  local_4 = 1;
                  if (iVar4 == 0) {
                    uVar3 = 0;
                  }
                  else {
                    uVar3 = FUN_00422ee0();
                  }
                  local_4 = 0xffffffff;
                  iVar4 = FUN_0041e210(0x12);
                  if (iVar4 != 0) {
                    FUN_00422e20(iVar4,0);
                  }
                  FUN_00428970(*piVar5,1);
                  FUN_0067b1e0(uVar3);
                  if (iVar4 != 0) {
                    FUN_0041e0a0(iVar4);
                  }
                  piVar5 = (int *)piVar5[1];
                  piVar8 = piVar5;
                }
              }
            }
            FUN_0048ae30(param_2,1);
          }
        }
      }
      for (piVar1 = (int *)*in_ECX; (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
          piVar1 = (int *)piVar1[1]) {
        piVar5 = (int *)*piVar1;
        if ((piVar5 != (int *)0x0) && (0 < piVar5[1])) {
          FUN_004847f0();
          iVar4 = FUN_00484f20();
          if (iVar4 == 0) {
            iVar4 = FUN_00401f00(0xc);
            local_4 = 6;
            if (iVar4 == 0) {
              param_2 = 0;
            }
            else {
              param_2 = FUN_00484420(piVar5[2],piVar5[1]);
            }
            piVar5 = (int *)*piVar5;
            local_4 = 0xffffffff;
            if (((piVar5 != (int *)0x0) && (iVar4 = FUN_0052b4a0(), iVar4 != 0)) &&
               (piVar5 != (int *)0x0)) {
              piVar8 = (int *)*piVar5;
              while ((piVar8 != (int *)0x0 && (*piVar5 != 0))) {
                iVar4 = FUN_00401f00(0x14);
                local_4 = 7;
                if (iVar4 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = FUN_00422ee0();
                }
                local_4 = 0xffffffff;
                FUN_00428970(*piVar5,1);
                FUN_0067b1e0(uVar3);
                piVar5 = (int *)piVar5[1];
                piVar8 = piVar5;
              }
            }
          }
          else {
            piVar8 = (int *)FUN_00447df0(*(undefined1 *)(piVar5[2] + 4));
            (**(code **)(*piVar8 + 0xb4))(piVar5[2]);
            iVar4 = FUN_009832e6(piVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
            if (iVar4 != 0) {
              *(undefined4 *)(iVar4 + 4) = 0;
            }
            FUN_0044d950(piVar8);
            FUN_00459800(piVar8);
            iVar4 = FUN_00401f00(0xc);
            local_4 = 4;
            if (iVar4 == 0) {
              param_2 = 0;
            }
            else {
              param_2 = FUN_00484420(piVar8,piVar5[1]);
            }
            piVar5 = (int *)*piVar5;
            local_4 = 0xffffffff;
            if (((piVar5 != (int *)0x0) && (iVar4 = FUN_0052b4a0(), iVar4 != 0)) &&
               (piVar5 != (int *)0x0)) {
              piVar8 = (int *)*piVar5;
              while ((piVar8 != (int *)0x0 && (*piVar5 != 0))) {
                iVar4 = FUN_00401f00(0x14);
                local_4 = 5;
                if (iVar4 == 0) {
                  uVar3 = 0;
                }
                else {
                  uVar3 = FUN_00422ee0();
                }
                local_4 = 0xffffffff;
                iVar4 = FUN_0041e210(0x12);
                if (iVar4 != 0) {
                  FUN_00422e20(iVar4,0);
                }
                FUN_00428970(*piVar5,1);
                FUN_0067b1e0(uVar3);
                if (iVar4 != 0) {
                  FUN_0041e0a0(iVar4);
                }
                piVar5 = (int *)piVar5[1];
                piVar8 = piVar5;
              }
            }
          }
          FUN_0048ae30(param_2,1);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0048df80(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *in_ECX;
  undefined4 *unaff_EBP;
  
  (**(code **)(*(int *)in_ECX[1] + 0x40))(0x8000000);
  puVar1 = (undefined4 *)*in_ECX;
  while ((puVar1 != (undefined4 *)0x0 && (piVar2 = (int *)*puVar1, piVar2 != (int *)0x0))) {
    piVar3 = (int *)*piVar2;
    while ((piVar3 != (int *)0x0 &&
           (puVar4 = (undefined4 *)*piVar3, in_ECX = unaff_EBP, puVar4 != (undefined4 *)0x0))) {
      iVar5 = FUN_0041e850();
      if (iVar5 == 0) {
        piVar3 = (int *)piVar3[1];
      }
      else {
        FUN_00424790();
        FUN_004238a0(0);
        piVar2[1] = piVar2[1] + -1;
        FUN_0065c620(puVar4);
        (**(code **)*puVar4)(1);
        piVar3 = (int *)*piVar2;
      }
    }
    piVar3 = (int *)*piVar2;
    if ((((piVar3 == (int *)0x0) || (piVar3[1] != 0)) || (*piVar3 != 0)) || (piVar2[1] != 0)) {
      puVar1 = (undefined4 *)puVar1[1];
    }
    else {
      FUN_0065c620(piVar2);
      if (*piVar2 != 0) {
        FUN_004526e0();
      }
      FUN_00401f20(*piVar2);
      *piVar2 = 0;
      FUN_00401f20(piVar2);
      puVar1 = (undefined4 *)*in_ECX;
    }
  }
  return;
}



void FUN_0048e060(void)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  undefined4 *puVar12;
  undefined4 *in_ECX;
  int iVar13;
  int *unaff_FS_OFFSET;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afe53;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[1] == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_004d6d40(uVar3);
  }
  for (piVar5 = (int *)(iVar4 + 8); (piVar5 != (int *)0x0 && ((piVar5[1] != 0 || (*piVar5 != 0))));
      piVar5 = (int *)piVar5[1]) {
    puVar1 = (uint *)*piVar5;
    iVar4 = FUN_009832e6(puVar1[1],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
    if (iVar4 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar4 + 4);
    }
    uVar3 = (int)*puVar1 >> 0x1f;
    iVar13 = (*puVar1 ^ uVar3) - uVar3;
    if ((iVar4 != 0) && (0 < iVar13)) {
      piVar6 = (int *)FUN_00485e80(puVar1[1],1,0);
      if ((piVar6 == (int *)0x0) || (iVar7 = FUN_00484f20(), iVar7 == 0)) {
        bVar2 = false;
        if (piVar6 == (int *)0x0) {
          bVar2 = true;
          iVar7 = FUN_00401f00(0xc);
          local_4 = 0;
          if (iVar7 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_00484420(puVar1[1],0);
          }
          local_4 = 0xffffffff;
        }
        piVar8 = (int *)*piVar6;
        if (piVar8 == (int *)0x0) {
          puVar10 = (undefined4 *)FUN_00401f00(8);
          if (puVar10 == (undefined4 *)0x0) {
            *piVar6 = 0;
          }
          else {
            *puVar10 = 0;
            puVar10[1] = 0;
            *piVar6 = (int)puVar10;
          }
        }
        else {
          do {
            if (*piVar8 == 0) break;
            iVar7 = FUN_0041e900();
            if (iVar7 == 0) {
              FUN_0041f090(iVar4);
              FUN_0041e900();
              uVar9 = FUN_004fbdc0();
              FUN_0041f130(uVar9);
              iVar7 = FUN_00401f00(0x58);
              local_4 = 1;
              if (iVar7 == 0) {
                piVar11 = (int *)0x0;
              }
              else {
                piVar11 = (int *)FUN_004d9a70();
              }
              local_4 = 0xffffffff;
              FUN_0046b590();
              uVar15 = 0;
              uVar14 = 0;
              uVar9 = FUN_0041e920(0,0);
              FUN_004fbe00(piVar11,uVar9,uVar14,uVar15);
              if (piVar11 != (int *)0x0) {
                (**(code **)(*piVar11 + 0x10))(1);
              }
              iVar13 = iVar13 + -1;
            }
            piVar8 = (int *)piVar8[1];
          } while (piVar8 != (int *)0x0);
        }
        for (; iVar13 != 0; iVar13 = iVar13 + -1) {
          iVar7 = FUN_00401f00(0x14);
          local_4 = 2;
          if (iVar7 == 0) {
            iVar7 = 0;
          }
          else {
            iVar7 = FUN_00422ee0();
          }
          piVar8 = (int *)*piVar6;
          local_4 = 0xffffffff;
          if (iVar7 != 0) {
            if (*piVar8 != 0) {
              piVar11 = (int *)FUN_00401f00(8);
              if (piVar11 == (int *)0x0) {
                piVar11 = (int *)0x0;
              }
              else {
                *piVar11 = *piVar8;
                piVar11[1] = 0;
              }
              piVar11[1] = piVar8[1];
              piVar8[1] = (int)piVar11;
            }
            *piVar8 = iVar7;
          }
          FUN_004238a0(1);
          if ((iVar7 != 0) && (iVar7 = FUN_0041e900(), iVar7 == 0)) {
            FUN_0041f090(iVar4);
            FUN_0041e900();
            uVar9 = FUN_004fbdc0();
            FUN_0041f130(uVar9);
            iVar7 = FUN_00401f00(0x58);
            local_4 = 3;
            if (iVar7 == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)FUN_004d9a70();
            }
            local_4 = 0xffffffff;
            FUN_0046b590();
            uVar15 = 0;
            uVar14 = 0;
            uVar9 = FUN_0041e920(0,0);
            FUN_004fbe00(piVar8,uVar9,uVar14,uVar15);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x10))(1);
            }
          }
        }
        if (bVar2) {
          FUN_0048ae30(piVar6,1);
        }
      }
      else {
        for (piVar6 = (int *)*piVar6; (piVar6 != (int *)0x0 && (*piVar6 != 0));
            piVar6 = (int *)piVar6[1]) {
          iVar4 = FUN_00401f00(0x58);
          local_4 = 4;
          if (iVar4 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_004d9a70();
          }
          local_4 = 0xffffffff;
          FUN_0046b590();
          uVar15 = 0;
          uVar14 = 0;
          uVar9 = FUN_0041e920(0,0);
          FUN_004fbe00(piVar8,uVar9,uVar14,uVar15);
          if (piVar8 != (int *)0x0) {
            (**(code **)(*piVar8 + 0x10))(1);
          }
        }
      }
    }
  }
  puVar10 = (undefined4 *)*in_ECX;
  do {
    if ((puVar10 == (undefined4 *)0x0) || (piVar5 = (int *)*puVar10, piVar5 == (int *)0x0)) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar4 = FUN_009832e6(piVar5[2],0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0331c,0);
    if (iVar4 == 0) {
      local_24 = 0;
    }
    else {
      local_24 = *(int *)(iVar4 + 4);
    }
    uVar3 = piVar5[1] >> 0x1f;
    iVar4 = (piVar5[1] ^ uVar3) - uVar3;
    if ((local_24 != 0) && (0 < iVar4)) {
      piVar6 = (int *)*piVar5;
joined_r0x0048e47b:
      if ((piVar6 != (int *)0x0) && (*piVar6 != 0)) {
        iVar13 = FUN_0041e900();
        if (iVar13 == 0) break;
        iVar13 = FUN_0041e900();
        if (iVar13 != 0) {
          for (piVar5 = (int *)*piVar5; (piVar5 != (int *)0x0 && (*piVar5 != 0));
              piVar5 = (int *)piVar5[1]) {
            iVar4 = FUN_00401f00(0x58);
            local_4 = 8;
            if (iVar4 == 0) {
              piVar6 = (int *)0x0;
            }
            else {
              piVar6 = (int *)FUN_004d9a70();
            }
            local_4 = 0xffffffff;
            FUN_0046b590();
            uVar15 = 0;
            uVar14 = 0;
            uVar9 = FUN_0041e920(0,0);
            FUN_004fbe00(piVar6,uVar9,uVar14,uVar15);
            if (piVar6 != (int *)0x0) {
              (**(code **)(*piVar6 + 0x10))(1);
            }
          }
          goto LAB_0048e717;
        }
      }
      piVar6 = (int *)*piVar5;
      if (piVar6 == (int *)0x0) {
        puVar12 = (undefined4 *)FUN_00401f00(8);
        if (puVar12 == (undefined4 *)0x0) {
          *piVar5 = 0;
        }
        else {
          *puVar12 = 0;
          puVar12[1] = 0;
          *piVar5 = (int)puVar12;
        }
      }
      else {
        do {
          if (*piVar6 == 0) break;
          iVar13 = FUN_0041e900();
          if (iVar13 == 0) {
            FUN_0041f090(local_24);
            FUN_0041e900();
            uVar9 = FUN_004fbdc0();
            FUN_0041f130(uVar9);
            iVar13 = FUN_00401f00(0x58);
            local_4 = 5;
            if (iVar13 == 0) {
              piVar8 = (int *)0x0;
            }
            else {
              piVar8 = (int *)FUN_004d9a70();
            }
            local_4 = 0xffffffff;
            FUN_0046b590();
            uVar15 = 0;
            uVar14 = 0;
            uVar9 = FUN_0041e920(0,0);
            FUN_004fbe00(piVar8,uVar9,uVar14,uVar15);
            if (piVar8 != (int *)0x0) {
              (**(code **)(*piVar8 + 0x10))(1);
            }
            iVar4 = iVar4 + -1;
          }
          piVar6 = (int *)piVar6[1];
        } while (piVar6 != (int *)0x0);
      }
      for (; iVar4 != 0; iVar4 = iVar4 + -1) {
        iVar13 = FUN_00401f00(0x14);
        local_4 = 6;
        if (iVar13 == 0) {
          iVar13 = 0;
        }
        else {
          iVar13 = FUN_00422ee0();
        }
        piVar6 = (int *)*piVar5;
        local_4 = 0xffffffff;
        if (iVar13 != 0) {
          if (*piVar6 != 0) {
            piVar8 = (int *)FUN_00401f00(8);
            if (piVar8 == (int *)0x0) {
              piVar8 = (int *)0x0;
            }
            else {
              *piVar8 = *piVar6;
              piVar8[1] = 0;
            }
            piVar8[1] = piVar6[1];
            piVar6[1] = (int)piVar8;
          }
          *piVar6 = iVar13;
        }
        FUN_004238a0(1);
        if ((iVar13 != 0) && (iVar13 = FUN_0041e900(), iVar13 == 0)) {
          FUN_0041f090(local_24);
          FUN_0041e900();
          uVar9 = FUN_004fbdc0();
          FUN_0041f130(uVar9);
          iVar13 = FUN_00401f00(0x58);
          local_4 = 7;
          if (iVar13 == 0) {
            piVar6 = (int *)0x0;
          }
          else {
            piVar6 = (int *)FUN_004d9a70();
          }
          local_4 = 0xffffffff;
          FUN_0046b590();
          uVar15 = 0;
          uVar14 = 0;
          uVar9 = FUN_0041e920(0,0);
          FUN_004fbe00(piVar6,uVar9,uVar14,uVar15);
          if (piVar6 != (int *)0x0) {
            (**(code **)(*piVar6 + 0x10))(1);
          }
        }
      }
    }
LAB_0048e717:
    puVar10 = (undefined4 *)puVar10[1];
  } while( true );
  piVar6 = (int *)piVar6[1];
  goto joined_r0x0048e47b;
}



uint FUN_0048e740(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *in_ECX;
  int iVar8;
  uint unaff_EBP;
  undefined4 unaff_retaddr;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uStack_1c;
  uint local_18;
  int *local_14;
  undefined4 *puStack_8;
  
  if (param_1 != 0) {
    iVar5 = FUN_006ecc80();
    local_18 = 0;
    piVar1 = (int *)*in_ECX;
    for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        local_18 = local_18 + 1;
      }
    }
    local_14 = (int *)0x0;
    for (piVar2 = piVar1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        local_14 = (int *)((int)local_14 + 1);
      }
    }
    if (iVar5 != 0) {
      uStack_1c = (uint)(uint3)uStack_1c;
      (**(code **)(*DAT_00b34428 + 0x194))(iVar5);
      FUN_004d8a30(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                   *(undefined4 *)(param_1 + 0x34));
joined_r0x0048e7e4:
      if ((piVar1 == (int *)0x0) || (puVar3 = (undefined4 *)*local_14, puVar3 == (undefined4 *)0x0))
      {
        (**(code **)(*DAT_00b34428 + 0x194))(0);
        FUN_006c5420(0);
        return unaff_EBP >> 0x18;
      }
      iVar5 = 0;
      piVar2 = (int *)*puVar3;
      for (piVar1 = piVar2; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
        if (*piVar1 != 0) {
          iVar5 = iVar5 + 1;
        }
      }
      iVar8 = 0;
      do {
        if ((piVar2 == (int *)0x0) || (iVar4 = *piVar2, iVar4 == 0)) goto LAB_0048e92b;
        iVar6 = FUN_0041e900();
        if ((iVar6 != 0) && ((*(uint *)(iVar6 + 8) >> 3 & 1) != 0)) {
          if (*(char *)(iVar6 + 4) == '\r') {
            FUN_004d7620(iVar4);
            FUN_006c5420(puVar3[2]);
            uVar10 = 0;
            uVar9 = unaff_retaddr;
            uVar7 = FUN_0041e920(unaff_retaddr,0);
            FUN_004fbe00(DAT_00b34428,uVar7,uVar9,uVar10);
            local_18 = 0;
            for (piVar1 = (int *)*puStack_8; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
              if (*piVar1 != 0) {
                local_18 = local_18 + 1;
              }
            }
            if (uStack_1c == local_18) {
              iVar8 = 0;
              for (piVar1 = (int *)*puVar3; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
                if (*piVar1 != 0) {
                  iVar8 = iVar8 + 1;
                }
              }
            }
            FUN_0041f130(0);
            FUN_0041e3d0(1);
          }
          if (iVar8 != iVar5) goto LAB_0048e92b;
          if (uStack_1c != local_18) goto LAB_0048e935;
        }
        piVar2 = (int *)piVar2[1];
      } while( true );
    }
  }
  return 0;
LAB_0048e92b:
  if (uStack_1c != local_18) {
LAB_0048e935:
    uStack_1c = 0;
    local_14 = (int *)*puStack_8;
    for (piVar2 = local_14; local_18 = uStack_1c, piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (*piVar2 != 0) {
        uStack_1c = uStack_1c + 1;
      }
    }
  }
  local_14 = (int *)local_14[1];
  piVar1 = local_14;
  goto joined_r0x0048e7e4;
}



void FUN_0048e9a0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *in_ECX;
  int *piVar14;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afeb2;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (in_ECX[1] == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_004d6d40(uVar5);
  }
  for (piVar7 = (int *)(iVar6 + 8); piVar7 != (int *)0x0; piVar7 = (int *)piVar7[1]) {
    piVar11 = (int *)*piVar7;
    if (piVar11 == (int *)0x0) break;
    iVar6 = FUN_009832e6(piVar11[1],0,&PTR_PTR_00b03248,&PTR_PTR_00b05da4,0);
    piVar8 = (int *)FUN_00401f00(0xc);
    piVar14 = (int *)0x0;
    if (piVar8 != (int *)0x0) {
      piVar8[2] = 0;
      *piVar8 = 0;
      piVar8[1] = 0;
      piVar14 = piVar8;
    }
    if (*piVar14 == 0) {
      puVar9 = (undefined4 *)FUN_00401f00(8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      *piVar14 = (int)puVar9;
    }
    if (iVar6 == 0) {
      piVar8 = (int *)*in_ECX;
      bVar2 = true;
joined_r0x0048ea6b:
      if (piVar8 != (int *)0x0) {
        if (bVar2) goto code_r0x0048ea71;
        if (piVar8 != (int *)0x0) {
          piVar8 = (int *)*piVar8;
          if (piVar8 != (int *)0x0) {
            for (piVar1 = (int *)*piVar8; (piVar1 != (int *)0x0 && (*piVar1 != 0));
                piVar1 = (int *)piVar1[1]) {
              iVar6 = FUN_0041e790();
              if (iVar6 != 0) {
                FUN_004234b0();
              }
            }
            piVar1 = (int *)*piVar8;
            do {
              if ((piVar1 == (int *)0x0) || (*piVar1 == 0)) {
LAB_0048eaed:
                if (piVar8[1] + *piVar11 != 0) goto LAB_0048eafe;
LAB_0048eb20:
                if (*piVar14 != 0) {
                  FUN_004526e0();
                }
                goto LAB_0048ed0c;
              }
              cVar3 = FUN_0041def0();
              if (cVar3 != '\0') {
                iVar6 = FUN_00484740();
                if (iVar6 < 1) goto LAB_0048eaed;
LAB_0048eafe:
                cVar3 = (**(code **)(*(int *)piVar8[2] + 0x78))();
                if (((cVar3 != '\0') && (param_3 != '\0')) ||
                   (cVar3 = FUN_00484e80(0), cVar3 != '\0')) goto LAB_0048eb20;
                iVar6 = FUN_004845d0();
                if (iVar6 == 0) break;
                if (*piVar8 != 0) {
                  FUN_004845d0();
                }
                iVar6 = FUN_004845d0();
                if (iVar6 < *piVar11 + piVar8[1]) {
                  if (*piVar14 == 0) {
                    puVar9 = (undefined4 *)FUN_00401f00(8);
                    if (puVar9 == (undefined4 *)0x0) {
                      puVar9 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar9 = 0;
                      puVar9[1] = 0;
                    }
                    *piVar14 = (int)puVar9;
                  }
                  iVar6 = FUN_004845d0();
                  piVar14[1] = (*piVar11 + piVar8[1]) - iVar6;
                  piVar14[2] = piVar11[1];
                  cVar3 = FUN_00484e80(0);
                  if (cVar3 != '\0') goto LAB_0048eb20;
                  iVar6 = FUN_00401f00(0x14);
                  local_4 = 1;
                  if (iVar6 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_00422ee0();
                  }
                  goto LAB_0048ecae;
                }
                goto LAB_0048ed23;
              }
              piVar1 = (int *)piVar1[1];
            } while( true );
          }
          goto LAB_0048eb43;
        }
      }
      piVar8 = (int *)0x0;
LAB_0048eb43:
      iVar6 = *piVar11;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (piVar8 == (int *)0x0) {
        piVar14[1] = iVar6;
      }
      else {
        iVar10 = FUN_004845d0();
        piVar14[1] = (piVar8[1] + iVar6) - iVar10;
      }
      piVar14[2] = piVar11[1];
      if ((piVar8 == (int *)0x0) || (iVar6 = FUN_00484f20(), iVar6 == 0)) {
        uVar13 = 0;
        cVar3 = FUN_00484e80(0);
        if (cVar3 != '\0') {
          if (*piVar14 != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*piVar14);
          *piVar14 = 0;
          goto LAB_0048ed1a;
        }
        iVar6 = FUN_00401f00(0x14);
        local_4 = 0;
        if (iVar6 != 0) {
          uVar13 = FUN_00422ee0();
        }
LAB_0048ecae:
        local_4 = 0xffffffff;
        FUN_0041e710(param_2);
        FUN_004238a0(piVar14[1]);
        FUN_00446cb0(uVar13);
      }
      else {
        piVar8 = (int *)*piVar8;
        if (piVar8 != (int *)0x0) {
          do {
            if (*piVar8 == 0) goto LAB_0048ecd0;
            FUN_0041e710(param_2);
            FUN_0067b1e0(*piVar8);
            piVar8 = (int *)piVar8[1];
          } while (piVar8 != (int *)0x0);
          FUN_0048ae30(piVar14,1);
          goto LAB_0048ed23;
        }
      }
LAB_0048ecd0:
      FUN_0048ae30(piVar14,1);
    }
    else {
      puVar9 = (undefined4 *)*piVar14;
      if (puVar9 != (undefined4 *)0x0) {
        iVar6 = puVar9[1];
        while (iVar6 != 0) {
          iVar6 = *(int *)(puVar9[1] + 4);
          FUN_00401f20(puVar9[1]);
          puVar9[1] = iVar6;
        }
        *puVar9 = 0;
      }
LAB_0048ed0c:
      FUN_00401f20(*piVar14);
      *piVar14 = 0;
LAB_0048ed1a:
      FUN_00401f20(piVar14);
    }
LAB_0048ed23:
  }
  piVar7 = (int *)*in_ECX;
  do {
    if ((piVar7 == (int *)0x0) || (*piVar7 == 0)) {
      *unaff_FS_OFFSET = local_c;
      return;
    }
    piVar11 = (int *)FUN_00401f00(0xc);
    if (piVar11 == (int *)0x0) {
      piVar11 = (int *)0x0;
    }
    else {
      piVar11[2] = 0;
      *piVar11 = 0;
      piVar11[1] = 0;
    }
    if (*piVar11 == 0) {
      puVar9 = (undefined4 *)FUN_00401f00(8);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        *puVar9 = 0;
        puVar9[1] = 0;
      }
      *piVar11 = (int)puVar9;
    }
    piVar14 = (int *)*piVar7;
    if ((piVar14 == (int *)0x0) || (piVar14[1] < 1)) {
LAB_0048f10e:
      puVar9 = (undefined4 *)*piVar11;
      if (puVar9 != (undefined4 *)0x0) {
        iVar6 = puVar9[1];
        while (iVar6 != 0) {
          iVar6 = *(int *)(puVar9[1] + 4);
          FUN_00401f20(puVar9[1]);
          puVar9[1] = iVar6;
        }
        *puVar9 = 0;
      }
LAB_0048f13c:
      iVar6 = *piVar11;
LAB_0048f13f:
      FUN_00401f20(iVar6);
      *piVar11 = 0;
      FUN_00401f20(piVar11);
    }
    else {
      if ((in_ECX[1] != 0) && (iVar6 = FUN_004d6d40(), iVar6 != 0)) {
        if (in_ECX[1] != 0) {
          FUN_004d6d40();
        }
        cVar3 = FUN_00469920(piVar14[2]);
        if (cVar3 != '\0') goto LAB_0048f10e;
      }
      iVar6 = FUN_004845d0();
      if (iVar6 == 0) {
        piVar8 = (int *)*piVar14;
        if (piVar8 == (int *)0x0) {
          piVar11[2] = piVar14[2];
          piVar11[1] = piVar14[1];
          iVar6 = FUN_00401f00(0x14);
          local_4 = 5;
          if (iVar6 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_00422ee0();
          }
          local_4 = 0xffffffff;
          FUN_0041e710(param_2);
          FUN_004238a0((short)piVar11[1]);
          FUN_00446cb0(uVar13);
          FUN_0048ae30(piVar11,1);
          goto LAB_0048f153;
        }
        _param_3 = 0;
        iVar6 = 0;
        do {
          iVar10 = *piVar8;
          if (iVar10 == 0) break;
          if (iVar6 != 0) goto LAB_0048ef6a;
          sVar4 = FUN_0041e860();
          _param_3 = _param_3 + sVar4;
          cVar3 = FUN_0041fd70(0);
          if (cVar3 == '\0') {
            iVar10 = 0;
          }
          piVar8 = (int *)piVar8[1];
          iVar6 = iVar10;
        } while (piVar8 != (int *)0x0);
        if (iVar6 == 0) {
          iVar6 = FUN_00401f00(0x14);
          local_4 = 4;
          if (iVar6 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_00422ee0();
          }
          local_4 = 0xffffffff;
          FUN_0041e710(param_2);
          _param_3 = (short)piVar11[1];
LAB_0048f045:
          FUN_004238a0(_param_3);
          FUN_00446cb0(uVar13);
        }
        else {
LAB_0048ef6a:
          if (*piVar11 == 0) {
            puVar9 = (undefined4 *)FUN_00401f00(8);
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              *puVar9 = 0;
              puVar9[1] = 0;
            }
            *piVar11 = (int)puVar9;
          }
          FUN_0041e710(param_2);
          FUN_00446cb0(iVar6);
          cVar3 = FUN_00484e80(0);
          if ((cVar3 == '\0') && (_param_3 < piVar14[1])) {
            iVar6 = FUN_00401f00(0x14);
            local_4 = 3;
            if (iVar6 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = FUN_00422ee0();
            }
            local_4 = 0xffffffff;
            FUN_0041e710(param_2);
            _param_3 = (short)piVar14[1] - _param_3;
            goto LAB_0048f045;
          }
        }
        piVar11[2] = piVar14[2];
        piVar11[1] = piVar14[1];
        cVar3 = FUN_00484e80(0);
        if (cVar3 != '\0') {
          if (*(int *)*piVar11 != 0) {
            FUN_004234b0();
          }
          if (*piVar11 != 0) {
            FUN_004526e0();
          }
          goto LAB_0048f13c;
        }
        piVar11[1] = piVar14[1];
        FUN_0048ae30(piVar11,1);
      }
      else {
        piVar8 = (int *)*piVar14;
        _param_3 = 0;
        while ((piVar8 != (int *)0x0 && (iVar6 = *piVar8, iVar6 != 0))) {
          FUN_0041e710(param_2);
          piVar1 = (int *)*piVar11;
          if (iVar6 != 0) {
            if (*piVar1 != 0) {
              piVar12 = (int *)FUN_00401f00(8);
              if (piVar12 == (int *)0x0) {
                piVar12 = (int *)0x0;
              }
              else {
                *piVar12 = *piVar1;
                piVar12[1] = 0;
              }
              piVar12[1] = piVar1[1];
              piVar1[1] = (int)piVar12;
            }
            *piVar1 = iVar6;
          }
          piVar8 = (int *)piVar8[1];
          sVar4 = FUN_0041e860();
          _param_3 = _param_3 + sVar4;
        }
        piVar11[2] = piVar14[2];
        piVar11[1] = piVar14[1];
        cVar3 = FUN_00484e80(0);
        if ((cVar3 == '\0') && (_param_3 < piVar14[1])) {
          iVar6 = FUN_00401f00(0x14);
          local_4 = 2;
          if (iVar6 == 0) {
            uVar13 = 0;
          }
          else {
            uVar13 = FUN_00422ee0();
          }
          local_4 = 0xffffffff;
          FUN_0041e710(param_2);
          FUN_004238a0((short)piVar14[1] - _param_3);
          FUN_00446cb0(uVar13);
        }
        cVar3 = FUN_00484e80(0);
        if (cVar3 != '\0') {
          if (*(int *)*piVar11 != 0) {
            FUN_004234b0();
          }
          if (*piVar11 != 0) {
            FUN_004526e0();
          }
          iVar6 = *piVar11;
          goto LAB_0048f13f;
        }
        FUN_0048ae30(piVar11,1);
      }
    }
LAB_0048f153:
    piVar7 = (int *)piVar7[1];
  } while( true );
code_r0x0048ea71:
  if ((*piVar8 == 0) || (*(int *)(*piVar8 + 8) != piVar11[1])) {
    piVar8 = (int *)piVar8[1];
  }
  else {
    bVar2 = false;
  }
  goto joined_r0x0048ea6b;
}



void FUN_0048f180(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  while( true ) {
    if ((puVar1 == (undefined4 *)0x0) ||
       (puVar2 = (undefined4 *)*puVar1, puVar2 == (undefined4 *)0x0)) {
      return;
    }
    piVar8 = (int *)*puVar2;
    if (piVar8 != (int *)0x0) break;
LAB_0048f32c:
    FUN_0065c620(puVar2);
    puVar3 = (undefined4 *)*puVar2;
    if (puVar3 != (undefined4 *)0x0) {
      iVar9 = puVar3[1];
      while (iVar9 != 0) {
        iVar9 = *(int *)(puVar3[1] + 4);
        FUN_00401f20(puVar3[1]);
        puVar3[1] = iVar9;
      }
      *puVar3 = 0;
    }
    FUN_00401f20(*puVar2);
    *puVar2 = 0;
    FUN_00401f20(puVar2);
  }
LAB_0048f1b0:
  puVar3 = (undefined4 *)*piVar8;
  if (puVar3 != (undefined4 *)0x0) {
    piVar4 = (int *)piVar8[1];
    if (piVar4 == (int *)0x0) {
      *piVar8 = 0;
    }
    else {
      piVar8[1] = piVar4[1];
      *piVar8 = *piVar4;
      FUN_00401f20(piVar4);
    }
    if ((puVar3 != (undefined4 *)0x0) && (iVar9 = FUN_0041e790(), iVar9 != 0)) {
      iVar9 = FUN_004d6d40();
      if (iVar9 != 0) {
        FUN_004234b0();
        uVar10 = FUN_0041e060();
        if ((uVar10 < 2) && (sVar7 = FUN_0041e860(), sVar7 != 0)) {
          FUN_0041f620();
        }
        FUN_0065c620(puVar3);
        puVar11 = (undefined4 *)FUN_0041e6f0();
        bVar6 = true;
        if (puVar11 != (undefined4 *)0x0) {
          piVar8 = (int *)*puVar11;
          bVar5 = true;
          while (piVar8 != (int *)0x0) {
            if (!bVar5) {
              if (((piVar8 != (int *)0x0) && ((int *)*piVar8 != (int *)0x0)) &&
                 (piVar8 = *(int **)*piVar8, piVar8 != (int *)0x0)) goto LAB_0048f280;
              break;
            }
            if ((*piVar8 == 0) || (*(int *)(*piVar8 + 8) != puVar2[2])) {
              piVar8 = (int *)piVar8[1];
            }
            else {
              bVar5 = false;
            }
          }
        }
        goto LAB_0048f299;
      }
      FUN_004234b0();
      iVar9 = FUN_0041e900();
      if (iVar9 != 0) goto LAB_0048f31d;
      goto LAB_0048f313;
    }
    goto LAB_0048f31d;
  }
  goto LAB_0048f32c;
  while( true ) {
    if ((undefined4 *)*piVar8 == puVar3) {
      bVar6 = false;
    }
    else {
      piVar8 = (int *)piVar8[1];
    }
    if (piVar8 == (int *)0x0) break;
LAB_0048f280:
    if (((undefined4 *)*piVar8 == (undefined4 *)0x0) || (!bVar6)) break;
  }
LAB_0048f299:
  puVar11 = (undefined4 *)FUN_0041e6f0();
  if (puVar11 != (undefined4 *)0x0) {
    piVar8 = (int *)*puVar11;
    bVar5 = true;
    while (piVar8 != (int *)0x0) {
      if (!bVar5) {
        if (((piVar8 != (int *)0x0) && ((int *)*piVar8 != (int *)0x0)) &&
           (piVar8 = *(int **)*piVar8, piVar8 != (int *)0x0)) goto LAB_0048f2e4;
        break;
      }
      if ((*piVar8 == 0) || (*(int *)(*piVar8 + 8) != puVar2[2])) {
        piVar8 = (int *)piVar8[1];
      }
      else {
        bVar5 = false;
      }
    }
  }
LAB_0048f2fd:
  if (bVar6) {
LAB_0048f313:
    (**(code **)*puVar3)(1);
  }
LAB_0048f31d:
  piVar8 = (int *)*puVar2;
  if (piVar8 == (int *)0x0) goto LAB_0048f32c;
  goto LAB_0048f1b0;
  while( true ) {
    if (!bVar6) goto LAB_0048f31d;
    if ((undefined4 *)*piVar8 == puVar3) {
      bVar6 = false;
    }
    else {
      piVar8 = (int *)piVar8[1];
    }
    if (piVar8 == (int *)0x0) break;
LAB_0048f2e4:
    if ((undefined4 *)*piVar8 == (undefined4 *)0x0) break;
  }
  goto LAB_0048f2fd;
}



void FUN_0048f390(void)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_ECX;
  undefined4 *puVar9;
  undefined4 uVar10;
  
  for (piVar1 = (int *)*in_ECX;
      (piVar1 != (int *)0x0 && (puVar2 = (undefined4 *)*piVar1, puVar2 != (undefined4 *)0x0));
      piVar1 = (int *)piVar1[1]) {
    if ((*(char *)(puVar2[2] + 4) == '\x14') || (*(char *)(puVar2[2] + 4) == '!')) {
      piVar3 = (int *)*puVar2;
      while (piVar3 != (int *)0x0) {
        puVar4 = (undefined4 *)*piVar3;
        uVar5 = puVar2[2];
        uVar10 = 0;
        puVar9 = puVar4;
        uVar7 = FUN_0041e6f0(puVar4,0);
        iVar8 = FUN_0046ca20(uVar5,uVar7);
        fVar6 = (float)iVar8;
        if (iVar8 < 0) {
          fVar6 = fVar6 + 4.2949673e+09;
        }
        FUN_00488830(fVar6,uVar7,puVar9,uVar10);
        if ((puVar4 == (undefined4 *)0x0) || (puVar4[1] != 0)) {
          piVar3 = (int *)piVar3[1];
        }
        else {
          FUN_0065c620(puVar4);
          (**(code **)*puVar4)(1);
          piVar3 = (int *)*puVar2;
        }
      }
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0048f450(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  float10 fVar4;
  
  if ((_DAT_00b34434 & 1) == 0) {
    _DAT_00b34434 = _DAT_00b34434 | 1;
    DAT_00b3442c = 0;
    _DAT_00b34430 = 0;
    _DAT_00b34432 = 0;
    _atexit(FUN_00a18920);
  }
  FUN_00401f20();
  DAT_00b3442c = 0;
  _DAT_00b34432 = 0;
  _DAT_00b34430 = 0;
  if (param_1 == 0) {
    iVar2 = *(int *)(in_ECX + 4);
    if (999999 < iVar2) {
      FUN_00402e30(&DAT_00b3442c,&DAT_00a3d904,iVar2 / 1000000);
      return DAT_00b3442c;
    }
    if (999 < iVar2) {
      FUN_00402e30(&DAT_00b3442c,&DAT_00a3d900,iVar2 / 1000);
      return DAT_00b3442c;
    }
    if (1 < iVar2) {
      FUN_00402e30(&DAT_00b3442c,&DAT_00a300d4,iVar2);
      return DAT_00b3442c;
    }
    FUN_00402e30(&DAT_00b3442c,&DAT_00a36430);
    return DAT_00b3442c;
  }
  if (param_1 == 1) {
    fVar4 = (float10)FUN_00488e50(param_3,param_4,param_5);
  }
  else if (param_1 == 2) {
    fVar4 = (float10)FUN_00485260(param_3,param_4,param_5);
  }
  else if (param_1 == 3) {
    fVar4 = (float10)FUN_004891c0(param_3,param_4,param_5);
  }
  else {
    if (param_1 != 4) {
      DAT_00b3442c = 0;
      _DAT_00b34430 = 0;
      _DAT_00b34432 = 0;
      return 0;
    }
    fVar4 = (float10)FUN_004852b0(param_2,param_3,param_4,param_5);
  }
  fVar1 = (float)fVar4;
  if (fVar1 < 0.0) {
    return DAT_00b3442c;
  }
  if ((0.0 < fVar1) && (fVar1 < 1.0)) {
    fVar4 = (float10)FUN_004843b0(fVar1,0x3dcccccd);
    fVar1 = (float)fVar4;
  }
  if ((0.0 < fVar1) && (fVar1 < 1.0)) {
    FUN_00402e30(&DAT_00b3442c,&DAT_00a3d8f8,(double)fVar1);
    return DAT_00b3442c;
  }
  uVar3 = FUN_009828c0();
  FUN_00402e30(&DAT_00b3442c,&DAT_00a2f860,uVar3);
  return DAT_00b3442c;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0048f6a0(int param_1)

{
  undefined4 uVar1;
  
  if ((_DAT_00b34440 & 1) == 0) {
    _DAT_00b34440 = _DAT_00b34440 | 1;
    DAT_00b34438 = 0;
    _DAT_00b3443c = 0;
    _DAT_00b3443e = 0;
    _atexit(FUN_00a18950);
  }
  FUN_00401f20(DAT_00b34438);
  DAT_00b34438 = 0;
  _DAT_00b3443e = 0;
  _DAT_00b3443c = 0;
  if (param_1 == 1) {
    FUN_00402e30(&DAT_00b34438,"%s\\icon_small_item_pickup.dds","Icons");
    return DAT_00b34438;
  }
  if (param_1 == 2) {
    FUN_00402e30(&DAT_00b34438,"%s\\icon_enchanted_item.dds","Icons");
    return DAT_00b34438;
  }
  if (param_1 == 4) {
    FUN_00402e30(&DAT_00b34438,"%s\\icon_poisoned_weapon.dds","Icons");
    return DAT_00b34438;
  }
  if (param_1 == 8) {
    FUN_00402e30(&DAT_00b34438,"%s\\icon_broken_item.dds","Icons");
    return DAT_00b34438;
  }
  uVar1 = 0;
  if (0 < param_1) {
    FUN_00402e30(&DAT_00b34438,"%s\\icon_image_set_%d.dds","Icons",param_1);
    uVar1 = DAT_00b34438;
  }
  DAT_00b34438 = uVar1;
  return uVar1;
}



void FUN_0048f7c0(int param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009afedb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[2] = 0xbf800000;
  if ((param_2 != (undefined4 *)0x0) && (iVar5 = FUN_0041e060(uVar4), iVar5 == 0)) {
    (**(code **)*param_2)(1);
    param_2 = (undefined4 *)0x0;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  piVar7 = (int *)*in_ECX;
  bVar1 = true;
  while (piVar7 != (int *)0x0) {
    if (!bVar1) {
      if (piVar7 != (int *)0x0) {
        piVar7 = (int *)*piVar7;
        goto LAB_0048f858;
      }
      break;
    }
    if ((*piVar7 == 0) || (*(int *)(*piVar7 + 8) != param_1)) {
      piVar7 = (int *)piVar7[1];
    }
    else {
      bVar1 = false;
    }
  }
  piVar7 = (int *)0x0;
LAB_0048f858:
  if (((param_2 != (undefined4 *)0x0) && (iVar5 = FUN_0041e7b0(), iVar5 == DAT_00b333c4)) &&
     (in_ECX[1] == DAT_00b333c4)) {
    FUN_0041f600();
  }
  cVar2 = (**(code **)(*(int *)in_ECX[1] + 400))();
  if (((((cVar2 != '\0') && (iVar5 = in_ECX[1], iVar5 != 0)) &&
       ((*(int *)(iVar5 + 0x58) != 0 &&
        ((cVar2 = FUN_0045a500(), cVar2 == '\0' &&
         ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0)))))) &&
      (iVar5 = (**(code **)(**(int **)(iVar5 + 0x58) + 0xf4))(0), iVar5 != 0)) &&
     (*(int *)(iVar5 + 8) == param_1)) {
    sVar3 = FUN_0041e860();
    FUN_004238a0(sVar3 + (short)param_3);
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + param_3;
  }
  piVar8 = (int *)0x0;
  if (((param_2 != (undefined4 *)0x0) && (iVar5 = FUN_0041fb00(), iVar5 != 0)) &&
     (iVar5 = FUN_0041fb00(), iVar5 != 0)) {
    FUN_0041fa40(in_ECX[1]);
  }
  if (piVar7 == (int *)0x0) {
    iVar5 = FUN_00401f00(0xc);
    uStack_4 = 0;
    if (iVar5 != 0) {
      piVar8 = (int *)FUN_00484420(param_1,param_3);
    }
    uStack_4 = 0xffffffff;
    if (*piVar8 == 0) {
      puVar6 = (undefined4 *)FUN_00401f00(8);
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        *puVar6 = 0;
        puVar6[1] = 0;
      }
      *piVar8 = (int)puVar6;
    }
    FUN_00446cb0(param_2);
    FUN_0048ae30(piVar8,1);
    goto LAB_0048fb9f;
  }
  if (piVar7[1] < 0) {
    if (param_2 != (undefined4 *)0x0) {
      iVar5 = FUN_0041e7b0();
      if (((iVar5 != 0) || (*piVar7 == 0)) ||
         ((iVar5 = FUN_0052b4a0(), iVar5 == 0 || (cVar2 = FUN_0041def0(), cVar2 == '\0'))))
      goto LAB_0048f9e9;
      (**(code **)*param_2)(1);
    }
  }
  else {
LAB_0048f9e9:
    if (param_2 != (undefined4 *)0x0) {
      piVar8 = (int *)*piVar7;
      if (piVar8 == (int *)0x0) {
        puVar6 = (undefined4 *)FUN_00401f00(8);
        if (puVar6 == (undefined4 *)0x0) {
          *piVar7 = 0;
          FUN_00446cb0(param_2);
        }
        else {
          *puVar6 = 0;
          puVar6[1] = 0;
          *piVar7 = (int)puVar6;
          FUN_00446cb0(param_2);
        }
      }
      else {
        bVar1 = true;
        do {
          puVar6 = (undefined4 *)*piVar8;
          if (puVar6 == (undefined4 *)0x0) break;
          if (!bVar1) goto LAB_0048fac3;
          cVar2 = FUN_0041e4d0(puVar6);
          if (cVar2 == '\0') {
            sVar3 = FUN_0041e860();
            FUN_004238a0(sVar3 + (short)param_3);
            if (puVar6[1] == 0) {
              FUN_0065c620(puVar6);
              (**(code **)*puVar6)(1);
            }
            bVar1 = false;
          }
          else {
            piVar8 = (int *)piVar8[1];
          }
        } while (piVar8 != (int *)0x0);
        if (bVar1) {
          if (param_2[1] == 0) {
            param_2 = (undefined4 *)*param_2;
LAB_0048fa68:
            (*(code *)*param_2)(1);
          }
          else {
            if (*piVar7 == 0) {
              puVar6 = (undefined4 *)FUN_00401f00(8);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                puVar6[1] = 0;
                *piVar7 = (int)puVar6;
                FUN_00446cb0(param_2);
                goto LAB_0048fa70;
              }
              *piVar7 = 0;
            }
            FUN_00446cb0(param_2);
          }
        }
        else {
LAB_0048fac3:
          iVar5 = FUN_00589b70(0x3f0);
          if (((iVar5 == 0) || (iVar5 = FUN_005898f0(), iVar5 == 0)) ||
             (*(char *)(iVar5 + 0x61) == '\0')) {
            param_2 = (undefined4 *)*param_2;
            goto LAB_0048fa68;
          }
        }
      }
    }
  }
LAB_0048fa70:
  if (in_ECX[1] != 0) {
    FUN_004d6d40();
  }
  iVar5 = FUN_00469ca0(param_1);
  if ((piVar7[1] < 0) && (iVar5 < 1)) {
    piVar7[1] = param_3;
  }
  else {
    piVar7[1] = piVar7[1] + param_3;
  }
  piVar8 = (int *)*piVar7;
  if ((((piVar8 != (int *)0x0) && (piVar8[1] == 0)) && (*piVar8 == 0)) && (piVar7[1] == 0)) {
    FUN_0065c620(piVar7);
    if (*piVar7 != 0) {
      FUN_004526e0();
    }
    FUN_00401f20(*piVar7);
    *piVar7 = 0;
    FUN_00401f20(piVar7);
  }
LAB_0048fb9f:
  *unaff_FS_OFFSET = local_c;
  return;
}



int * FUN_0048fbc0(int *param_1,int param_2,undefined4 param_3,int param_4,int *param_5,
                  undefined4 param_6,int *param_7,undefined4 param_8,undefined4 param_9,
                  char param_10,char param_11)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *in_ECX;
  int *piVar14;
  int *piVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  float10 fVar17;
  int *unaff_retaddr;
  undefined4 uVar18;
  undefined4 uStack_40;
  int *piStack_3c;
  int *local_38;
  int *piStack_34;
  int iStack_2c;
  undefined4 *puStack_28;
  int *piStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  int iStack_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aff58;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb0;
  *unaff_FS_OFFSET = (int)&local_c;
  piStack_34 = (int *)0x0;
  in_ECX[2] = 0xbf800000;
  local_38 = (int *)0x0;
  bVar1 = uStack_40._3_1_;
  uStack_40 = (int *)((uint)uStack_40._3_1_ << 0x18);
  if ((int *)in_ECX[1] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[1] + 0x40))(0x8000000,uVar4);
  }
  if (param_7 != (int *)0x0) {
    (**(code **)(*param_7 + 0x40))(0x8000000);
  }
  piVar13 = (int *)*in_ECX;
  bVar16 = true;
  while (piVar13 != (int *)0x0) {
    if (!bVar16) {
      if (piVar13 != (int *)0x0) {
        piStack_34 = (int *)*piVar13;
      }
      break;
    }
    if ((*piVar13 == 0) || (*(int *)(*piVar13 + 8) != param_2)) {
      piVar13 = (int *)piVar13[1];
    }
    else {
      bVar16 = false;
    }
  }
  piStack_3c = (int *)0x0;
  if ((param_5 != (int *)0x0) && (iVar5 = FUN_0041e060(), iVar5 == 0)) {
    if ((piStack_34 != (int *)0x0) && (*piStack_34 != 0)) {
      FUN_0065c620(param_5);
    }
    (**(code **)*param_5)(1);
    param_5 = (int *)0x0;
  }
  iStack_2c = 0;
  if (param_1 != (int *)0x0) {
    if (in_ECX[1] != 0) {
      FUN_004d6d40();
    }
    iStack_2c = FUN_00469ca0(param_2);
    if ((piStack_34 != (int *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 == '\0')) {
      iVar5 = FUN_004845d0();
      iVar6 = FUN_00484620();
      if ((iVar5 + iVar6 < piStack_34[1] + iStack_2c) && (iVar5 = FUN_00484f20(), iVar5 != 0)) {
        iStack_2c = 0;
      }
    }
  }
  iStack_18 = 0;
  if (iStack_2c < 0) {
    cVar2 = (**(code **)(*(int *)in_ECX[1] + 400))();
    iVar5 = iStack_2c;
    if ((cVar2 != '\0') &&
       (cVar2 = (**(code **)(*(int *)in_ECX[1] + 0x198))(0), iVar5 = iStack_2c, cVar2 != '\0')) {
      if (piStack_34 != (int *)0x0) {
        iStack_2c = 0;
        uStack_40 = (int *)CONCAT13(bVar1,0x10000);
        goto LAB_0048fd3c;
      }
      iVar5 = -iStack_2c;
    }
    iStack_18 = iVar5;
    iStack_2c = -iStack_2c;
    if ((-1 < iStack_2c) || (param_7 == DAT_00b333c4)) goto LAB_0048fd3c;
  }
  else {
LAB_0048fd3c:
    iVar5 = iStack_2c;
    if (piStack_34 != (int *)0x0) {
      if (piStack_34[1] == 0) goto LAB_0048fd78;
      iVar5 = piStack_34[1] + iStack_2c;
    }
    if (iVar5 != 0) {
LAB_0048fd78:
      iStack_1c = 0;
      uStack_40 = (int *)((uint)uStack_40._2_2_ << 0x10);
      iVar5 = param_4;
      do {
        param_4 = iVar5;
        if (((piStack_34 == (int *)0x0) || (iVar5 < 1)) || (piStack_34[1] + iStack_2c < 1))
        goto LAB_00491019;
        if (piStack_3c != (int *)0x0) {
          if (*piStack_3c != 0) {
            FUN_004526e0();
          }
          FUN_00401f20(*piStack_3c);
          *piStack_3c = 0;
          FUN_00401f20(piStack_3c);
        }
        piStack_3c = (int *)FUN_00401f00(0xc);
        if (piStack_3c == (int *)0x0) {
          piStack_3c = (int *)0x0;
        }
        else {
          piStack_3c[2] = 0;
          *piStack_3c = 0;
          piStack_3c[1] = 0;
        }
        piStack_3c[2] = piStack_34[2];
        piStack_24 = (int *)*piStack_34;
        uVar4 = (uint)uStack_40 >> 8;
        uStack_40 = (int *)CONCAT31((int3)uVar4,1);
        if ((((param_5 == (int *)0x0) || (iVar6 = FUN_0041e060(), iVar6 == 0)) && (param_11 == '\0')
            ) || ((piStack_24 == (int *)0x0 || (*piStack_24 == 0)))) {
          iVar6 = iStack_2c;
          if (iStack_2c < 0) {
            iVar6 = -iStack_2c;
          }
          iVar6 = piStack_34[1] + iVar6;
          if ((iVar6 < 0) && (-1 < iStack_2c)) goto LAB_0049166c;
          if ((*piStack_34 != 0) && (iVar7 = FUN_00484620(), 0 < iVar7)) {
            iVar6 = iVar6 - iVar7;
          }
          if (iVar6 < 0) {
            iVar6 = 0;
          }
          if (0 < iVar6) {
            if (iVar6 < iVar5) {
              if (in_ECX[1] != 0) {
                FUN_004d6d40();
              }
              iVar7 = FUN_00469ca0(param_2);
              if (0 < iVar7) {
                piStack_34[1] = piStack_34[1] - iVar6;
              }
              param_4 = iVar5 - iVar6;
            }
            else {
              if (iStack_18 == 0) {
                piStack_34[1] = piStack_34[1] - iVar5;
              }
              param_4 = 0;
              iVar6 = iVar5;
            }
            if (piStack_34[1] + iStack_2c < 0) {
              if (iStack_2c == 0) {
                piStack_34[1] = 0;
              }
              else {
                piStack_34[1] = -iStack_2c;
              }
            }
            if ((char)param_6 == '\0') {
              if (param_7 != (int *)0x0) {
                cVar2 = (**(code **)(*param_1 + 400))();
                if (cVar2 == '\0') {
                  uVar12 = FUN_004db6b0();
                }
                else {
                  uVar12 = (**(code **)(*param_1 + 0x170))();
                }
                if (((((char)param_3 != '\0') && (cVar2 = FUN_00469980(param_2), cVar2 == '\0')) &&
                    (cVar2 = FUN_004de880(uVar12), cVar2 == '\0')) &&
                   (*(char *)(param_2 + 4) != '\"')) {
                  if (param_5 == (int *)0x0) {
                    iVar5 = FUN_00401f00(0x14);
                    uStack_4 = 3;
                    if (iVar5 == 0) {
                      param_5 = (int *)0x0;
                    }
                    else {
                      param_5 = (int *)FUN_00422ee0();
                    }
                    uStack_4 = 0xffffffff;
                  }
                  FUN_00423660(uVar12);
                  FUN_004238a0(iVar6);
                }
                (**(code **)(*param_7 + 0x114))(param_2,param_5,iVar6);
              }
              if (*piStack_3c != 0) {
                FUN_004526e0();
              }
              FUN_00401f20(*piStack_3c);
              *piStack_3c = 0;
              FUN_00401f20(piStack_3c);
            }
            else {
              local_38 = (int *)FUN_0048b080(param_1,param_2,iVar6,0,param_8,param_9);
              iVar5 = FUN_006ecc80();
              iVar6 = FUN_004d72b0();
              if (((iVar6 == 0) && (iVar5 != 0)) &&
                 ((iVar5 = FUN_004ca970(), iVar5 != 0 &&
                  (cVar2 = FUN_004caac0(param_1), cVar2 == '\0')))) {
LAB_00490809:
                uVar12 = (**(code **)(*param_1 + 0x170))();
                FUN_004db890(uVar12);
              }
              else {
                iVar5 = (**(code **)(*param_1 + 0x170))();
                if (*(char *)(iVar5 + 4) == '#') {
                  (**(code **)(*param_1 + 0x170))();
                  iVar5 = FUN_00519d20();
                  if (iVar5 == 1) {
                    uVar12 = (**(code **)(*local_38 + 0x170))
                                       (0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
                    iVar5 = FUN_009832e6(uVar12);
                    if (iVar5 != 0) {
                      iVar5 = FUN_00469240(1);
                      iVar6 = FUN_00469240(0);
                      if (iVar5 != iVar6) goto LAB_00490809;
                    }
                  }
                }
              }
              if (*piStack_3c != 0) {
                FUN_004526e0();
              }
              FUN_00401f20(*piStack_3c);
              *piStack_3c = 0;
              FUN_00401f20(piStack_3c);
            }
            piStack_3c = (int *)0x0;
          }
          puStack_28 = (undefined4 *)0x0;
          if ((0 < param_4) && (piStack_24 = (int *)*piStack_34, piStack_24 != (int *)0x0)) {
            if (piStack_24[1] != 0) goto LAB_0049096a;
            piVar13 = (int *)*piStack_24;
            while (piVar13 != (int *)0x0) {
LAB_0049096a:
              puVar8 = (undefined4 *)*piStack_24;
              if ((puVar8 == (undefined4 *)0x0) || (param_4 < 1)) break;
              if (piStack_3c != (int *)0x0) {
                if (*piStack_3c != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*piStack_3c);
                *piStack_3c = 0;
                FUN_00401f20(piStack_3c);
              }
              piVar13 = (int *)FUN_00401f00(0xc);
              if (piVar13 == (int *)0x0) {
                piVar13 = (int *)0x0;
              }
              else {
                piVar13[2] = 0;
                *piVar13 = 0;
                piVar13[1] = 0;
              }
              piVar13[2] = piStack_34[2];
              sVar3 = FUN_0041e860();
              if (sVar3 < 0) {
                piStack_24 = (int *)piStack_24[1];
                if (*piVar13 != 0) {
                  FUN_004526e0();
                }
                FUN_00401f20(*piVar13);
                *piVar13 = 0;
                FUN_00401f20(piVar13);
                if (puStack_28 != (undefined4 *)0x0) {
                  (**(code **)*puStack_28)(1);
                }
                puStack_28 = (undefined4 *)0x0;
              }
              else {
                cVar2 = FUN_0041df10(0);
                if (cVar2 != '\0') {
                  uVar4 = FUN_0041e060();
                  if ((uVar4 < 2) ||
                     ((iVar5 = FUN_0041e060(), iVar5 == 2 && (sVar3 = FUN_0041e860(), sVar3 != 0))))
                  {
                    param_5 = (int *)0x0;
                  }
                  iVar5 = piStack_34[2];
                  iVar6 = *param_1;
                  sVar3 = FUN_0041e860(puVar8);
                  cVar2 = (**(code **)(iVar6 + 0x10c))(iVar5,(int)sVar3);
                  if (cVar2 == '\0') {
                    FUN_0057acc0(DAT_00b38560,0,1,0xbf800000);
                  }
                  else {
                    local_38 = (int *)FUN_0048fbc0(param_1,param_2,param_3,param_4,param_5,param_6,
                                                   param_7,param_8,param_9,1,0);
                  }
                  if (*piVar13 != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piVar13);
                  *piVar13 = 0;
                  FUN_00401f20(piVar13);
                  goto LAB_0049166c;
                }
                sVar3 = FUN_0041e860();
                iVar5 = (int)sVar3;
                if ((param_4 < iVar5) || (iVar6 = FUN_0041e850(), iVar6 != 0)) {
                  iStack_1c = FUN_0041e850();
                  if ((iStack_1c == 0) || ((param_4 != iVar5 && (param_4 <= iVar5)))) {
                    iVar6 = iVar5 - param_4;
                    piStack_34[1] = piStack_34[1] - param_4;
                  }
                  else {
                    piStack_34[1] = piStack_34[1] - iVar5;
                    iVar6 = -iVar5;
                  }
                  FUN_004238a0(iVar6);
                  iVar6 = FUN_00401f00(0x14);
                  uStack_4 = 4;
                  if (iVar6 == 0) {
                    puStack_28 = (undefined4 *)0x0;
                  }
                  else {
                    puStack_28 = (undefined4 *)FUN_00422ee0();
                  }
                  uStack_4 = 0xffffffff;
                  FUN_00428b10(puVar8,0);
                  FUN_00424790();
                  iVar6 = param_4;
                  if (iVar5 < param_4) {
                    iVar6 = iVar5;
                  }
                  FUN_004238a0(iVar6);
                  if (param_4 < iVar5) {
                    iVar5 = param_4;
                  }
                  param_4 = param_4 - iVar5;
                  puStack_20 = puVar8;
                }
                else {
                  piStack_34[1] = piStack_34[1] - iVar5;
                  param_4 = param_4 - iVar5;
                  piVar13[1] = piVar13[1] + iVar5;
                  FUN_0065c620(puVar8);
                  puStack_20 = (undefined4 *)0x0;
                  if (puVar8[1] == 0) {
                    (**(code **)*puVar8)(1);
                    puStack_28 = (undefined4 *)0x0;
                  }
                  else {
                    puStack_28 = puVar8;
                    if (*piVar13 == 0) {
                      puVar11 = (undefined4 *)FUN_00401f00(8);
                      if (puVar11 != (undefined4 *)0x0) {
                        *puVar11 = 0;
                        puVar11[1] = 0;
                        *piVar13 = (int)puVar11;
                        FUN_00446cb0(puVar8);
                        goto LAB_00490bc0;
                      }
                      *piVar13 = 0;
                    }
                    FUN_00446cb0(puVar8);
                  }
                }
LAB_00490bc0:
                if ((char)param_6 == '\0') {
                  if (param_7 == (int *)0x0) {
                    if (param_10 != '\0') {
                      FUN_004845a0();
                    }
                  }
                  else {
                    if ((undefined4 *)*piVar13 == (undefined4 *)0x0) {
                      iVar6 = FUN_00401f00(0x14);
                      uStack_4 = 5;
                      if (iVar6 == 0) {
                        uVar12 = 0;
                      }
                      else {
                        uVar12 = FUN_00422ee0();
                      }
                      uStack_4 = 0xffffffff;
                      puVar8 = (undefined4 *)FUN_00401f00(8);
                      if (puVar8 == (undefined4 *)0x0) {
                        puVar8 = (undefined4 *)0x0;
                      }
                      else {
                        *puVar8 = 0;
                        puVar8[1] = 0;
                      }
                      *piVar13 = (int)puVar8;
                      FUN_00446cb0(uVar12);
                    }
                    else {
                      uVar12 = *(undefined4 *)*piVar13;
                    }
                    cVar2 = (**(code **)(*param_1 + 400))();
                    if (cVar2 == '\0') {
                      uVar10 = FUN_004db6b0();
                    }
                    else {
                      uVar10 = (**(code **)(*param_1 + 0x170))();
                    }
                    if (((((char)param_3 == '\0') ||
                         (cVar2 = FUN_00469980(piVar13[2]), cVar2 != '\0')) ||
                        (cVar2 = FUN_004de880(uVar10), cVar2 != '\0')) ||
                       (*(char *)(piVar13[2] + 4) == '\"')) {
                      FUN_0041f600();
                    }
                    else {
                      FUN_00423660(uVar10);
                      FUN_004238a0(iVar5);
                    }
                    (**(code **)(*param_7 + 0x114))(piVar13[2],uVar12,iVar5);
                  }
LAB_00490fb5:
                  if (*piVar13 != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piVar13);
                  *piVar13 = 0;
                  FUN_00401f20(piVar13);
                }
                else if ((puStack_28 == (undefined4 *)0x0) || (iVar6 = FUN_0041fb00(), iVar6 == 0))
                {
                  local_38 = (int *)FUN_0048b080(param_1,piStack_34[2],iVar5,0,param_8,param_9);
                  iVar5 = FUN_006ecc80();
                  iVar6 = FUN_004d72b0();
                  if (((iVar6 == 0) && ((iVar5 != 0 && (iVar5 = FUN_004ca970(), iVar5 != 0)))) &&
                     (cVar2 = FUN_004caac0(param_1), cVar2 == '\0')) {
LAB_00490e60:
                    uVar12 = (**(code **)(*param_1 + 0x170))();
                    FUN_004db890(uVar12);
                  }
                  else {
                    iVar5 = (**(code **)(*param_1 + 0x170))();
                    if (*(char *)(iVar5 + 4) == '#') {
                      (**(code **)(*param_1 + 0x170))();
                      iVar5 = FUN_00519d20();
                      if (iVar5 == 1) {
                        uVar12 = (**(code **)(*local_38 + 0x170))
                                           (0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
                        iVar5 = FUN_009832e6(uVar12);
                        if (iVar5 != 0) {
                          iVar5 = FUN_00469240(1);
                          iVar6 = FUN_00469240(0);
                          if (iVar5 != iVar6) goto LAB_00490e60;
                        }
                      }
                    }
                  }
                  if (*piVar13 != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piVar13);
                  *piVar13 = 0;
                  FUN_00401f20(piVar13);
                  if (puStack_28 != (undefined4 *)0x0) {
                    (**(code **)*puStack_28)(1);
                  }
                  puStack_28 = (undefined4 *)0x0;
                }
                else {
                  local_38 = (int *)FUN_0041fb00();
                  if (local_38 == (int *)0x0) goto LAB_00490fb5;
                  (**(code **)(*local_38 + 0x8c))(0);
                  FUN_004246b0();
                  fVar17 = (float10)FUN_0041e940();
                  FUN_004db520((float)fVar17);
                  FUN_00428b10(puStack_28,piStack_24 == (int *)0x0);
                  FUN_0041f690();
                  FUN_004246b0();
                  iVar6 = FUN_0041f7f0();
                  if (iVar6 == 0) {
                    FUN_00423d30(piStack_3c);
                    (**(code **)(*piStack_3c + 0x40))(0x20);
                  }
                  piVar14 = (int *)FUN_0048b080(unaff_retaddr,local_38[2],iVar5,piStack_3c,param_7,
                                                param_8);
                  if (*piVar13 != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piVar13);
                  *piVar13 = 0;
                  FUN_00401f20(piVar13);
                  (**(code **)*puStack_28)(1);
                  puStack_28 = (undefined4 *)0x0;
                  iVar5 = FUN_006ecc80();
                  iVar6 = FUN_004d72b0();
                  if ((((iVar6 == 0) && (iVar5 != 0)) && (iVar5 = FUN_004ca970(), iVar5 != 0)) &&
                     (cVar2 = FUN_004caac0(unaff_retaddr), cVar2 == '\0')) {
LAB_00490d7e:
                    uVar12 = (**(code **)(*unaff_retaddr + 0x170))();
                    FUN_004db890(uVar12);
                  }
                  else {
                    iVar5 = (**(code **)(*unaff_retaddr + 0x170))();
                    if (*(char *)(iVar5 + 4) == '#') {
                      (**(code **)(*unaff_retaddr + 0x170))();
                      iVar5 = FUN_00519d20();
                      if (iVar5 == 1) {
                        uVar12 = (**(code **)(*piVar14 + 0x170))
                                           (0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
                        iVar5 = FUN_009832e6(uVar12);
                        if (iVar5 != 0) {
                          iVar5 = FUN_00469240(1);
                          iVar6 = FUN_00469240(0);
                          if (iVar5 != iVar6) goto LAB_00490d7e;
                        }
                      }
                    }
                  }
                }
                if (puStack_20 != (undefined4 *)0x0) {
                  piStack_24 = (int *)piStack_24[1];
                }
                if (param_4 != 0) {
                  uStack_40 = (int *)CONCAT22(uStack_40._2_2_,0x100);
                }
              }
              piStack_3c = (int *)0x0;
              piVar13 = piStack_24;
            }
          }
        }
        else {
LAB_0048fe34:
          do {
            iVar5 = param_4;
            piVar13 = (int *)*piStack_24;
            if ((piVar13 == (int *)0x0) || ((char)uStack_40 == '\0')) break;
            if ((param_5 == piVar13) ||
               (((param_5 == (int *)0x0 && (param_11 != '\0')) &&
                (iVar6 = FUN_0041e7b0(), iVar6 != 0)))) {
              param_5 = (int *)0x0;
              uVar4 = (uint)uStack_40 >> 8;
              uStack_40 = (int *)(uVar4 << 8);
              sVar3 = FUN_0041e860();
              iVar6 = (int)sVar3;
              cVar2 = FUN_0041df10(0);
              if (cVar2 != '\0') {
                bVar16 = false;
                uVar4 = FUN_0041e060();
                if (((uVar4 < 2) ||
                    ((iVar5 = FUN_0041e060(), iVar5 == 2 && (sVar3 = FUN_0041e860(), 1 < sVar3))))
                   || ((cVar2 = FUN_0041def0(), cVar2 != '\0' &&
                       (iVar5 = FUN_0041e060(), iVar5 == 2)))) {
                  bVar16 = true;
                }
                cVar2 = (**(code **)(*param_1 + 400))();
                if ((cVar2 == '\0') || (((uint)param_1[2] >> 0xb & 1) != 0)) {
                  iVar5 = piStack_34[2];
                  iVar6 = *param_1;
                  sVar3 = FUN_0041e860(piVar13);
                  cVar2 = (**(code **)(iVar6 + 0x10c))(iVar5,(int)sVar3);
LAB_0049115c:
                  if ((cVar2 == '\0') || (bVar16)) goto LAB_0049116a;
                }
                else {
                  iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
                  if (*(int *)(iVar5 + 0x58) != 0) {
                    iVar5 = piStack_34[2];
                    uVar18 = 0;
                    uVar10 = 0;
                    uVar12 = 1;
                    piVar14 = piVar13;
                    sVar3 = FUN_0041e860(piVar13,1,0,0);
                    cVar2 = FUN_005f2e70(iVar5,(int)sVar3,piVar14,uVar12,uVar10,uVar18);
                    goto LAB_0049115c;
                  }
LAB_0049116a:
                  piVar13 = (int *)0x0;
                }
                iVar5 = FUN_00485e80(param_2,1,0);
                if ((iVar5 == 0) || (cVar2 = FUN_00484e80(0), cVar2 == '\0')) {
                  local_38 = (int *)FUN_0048fbc0(param_1,param_2,param_3,param_4,piVar13,param_6,
                                                 param_7,param_8,param_9,1,0);
                }
                if (piStack_3c != (int *)0x0) {
                  if (*piStack_3c != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piStack_3c);
                  *piStack_3c = 0;
                  FUN_00401f20(piStack_3c);
                }
                goto LAB_0049166c;
              }
              piVar14 = piVar13;
              if ((param_4 < iVar6) || (iVar7 = FUN_0041e850(), iVar7 != 0)) {
                iStack_1c = FUN_0041e850();
                iVar7 = FUN_0041e850();
                if ((iVar7 == 0) || (iVar7 = FUN_0041e900(), iVar7 == 0)) {
                  cVar2 = FUN_0041def0();
                  if ((cVar2 == '\0') || (param_4 != iVar6)) {
                    piStack_34[1] = piStack_34[1] - param_4;
                    iVar6 = iVar6 - param_4;
                  }
                  else {
                    piStack_34[1] = piStack_34[1] - iVar6;
                    iVar6 = -iVar6;
                  }
                  FUN_004238a0(iVar6);
                  iVar6 = FUN_00401f00(0x14);
                  uStack_4 = 1;
                  if (iVar6 == 0) {
                    piVar14 = (int *)0x0;
                  }
                  else {
                    piVar14 = (int *)FUN_00422ee0();
                  }
                  uStack_4 = 0xffffffff;
                  FUN_00428b10(piVar13,0);
                  FUN_00424790();
                  FUN_004238a0(param_4);
                  iVar6 = FUN_0041e060();
                  if (((iVar6 == 1) && (sVar3 = FUN_0041e860(), 1 < sVar3)) ||
                     (iVar6 = FUN_0041e060(), iVar6 == 0)) {
                    if (piVar14 != (int *)0x0) {
                      (**(code **)*piVar14)(1);
                    }
                    piVar14 = (int *)0x0;
                  }
                }
                else {
                  FUN_0065c620(piVar13);
                  iVar6 = FUN_00401f00(0x14);
                  uVar12 = 0;
                  uStack_4 = 0;
                  if (iVar6 != 0) {
                    uVar12 = FUN_00422ee0();
                  }
                  uStack_4 = 0xffffffff;
                  iVar6 = FUN_0041e850();
                  FUN_0041fe90(*(undefined4 *)(iVar6 + 0xc));
                  FUN_00446cb0(uVar12);
                  FUN_00424790();
                  sVar3 = FUN_0041e860();
                  piStack_34[1] = -(int)sVar3;
                }
                FUN_004fbf90(param_1,piVar14,4);
                param_4 = 0;
                piVar15 = piVar13;
LAB_00490052:
                if ((piVar14 != (int *)0x0) && (iVar6 = FUN_0041e060(), iVar6 != 0)) {
                  if (*piStack_3c == 0) {
                    puVar8 = (undefined4 *)FUN_00401f00(8);
                    if (puVar8 == (undefined4 *)0x0) {
                      puVar8 = (undefined4 *)0x0;
                    }
                    else {
                      *puVar8 = 0;
                      puVar8[1] = 0;
                    }
                    *piStack_3c = (int)puVar8;
                  }
                  piVar13 = (int *)*piStack_3c;
                  if (*piVar13 != 0) {
                    piVar9 = (int *)FUN_00401f00(8);
                    if (piVar9 == (int *)0x0) {
                      piVar9 = (int *)0x0;
                    }
                    else {
                      *piVar9 = *piVar13;
                      piVar9[1] = 0;
                    }
                    piVar9[1] = piVar13[1];
                    piVar13[1] = (int)piVar9;
                  }
                  *piVar13 = (int)piVar14;
                }
              }
              else {
                piStack_34[1] = piStack_34[1] - iVar6;
                piStack_3c[1] = piStack_3c[1] + iVar6;
                param_4 = param_4 - iVar6;
                FUN_0065c620(piVar13);
                piVar15 = (int *)0x0;
                FUN_004fbf90(param_1,piVar13,4);
                iVar5 = iVar6;
                if (piVar13[1] != 0) goto LAB_00490052;
                (**(code **)*piVar13)(1);
                piVar14 = (int *)0x0;
              }
              if ((char)param_6 == '\0') {
                if (param_7 == (int *)0x0) {
                  iVar5 = FUN_00589b70(0x3f0);
                  if (((iVar5 == 0) || (iVar5 = FUN_005898f0(), iVar5 == 0)) ||
                     (*(char *)(iVar5 + 0x61) == '\0')) {
                    FUN_004845a0();
                  }
                  if (piStack_3c != (int *)0x0) {
                    if (*piStack_3c != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*piStack_3c);
                    *piStack_3c = 0;
                    FUN_00401f20(piStack_3c);
                  }
                }
                else {
                  piVar13 = (int *)*piStack_3c;
                  uVar12 = 0;
                  if (piVar13 == (int *)0x0) {
                    cVar2 = (**(code **)(*param_1 + 400))();
                    if (cVar2 == '\0') {
                      uVar10 = FUN_004db6b0();
                    }
                    else {
                      uVar10 = (**(code **)(*param_1 + 0x170))();
                    }
                    if (((((char)param_3 != '\0') &&
                         (cVar2 = FUN_00469980(piStack_3c[2]), cVar2 == '\0')) &&
                        (cVar2 = FUN_004de880(uVar10), cVar2 == '\0')) &&
                       (*(char *)(piStack_3c[2] + 4) != '\"')) {
                      iVar6 = FUN_00401f00(0x14);
                      uStack_4 = 2;
                      if (iVar6 == 0) {
                        uVar12 = 0;
                      }
                      else {
                        uVar12 = FUN_00422ee0();
                      }
                      uStack_4 = 0xffffffff;
                      FUN_00423660(uVar10);
                      FUN_004238a0(param_4);
                    }
                    (**(code **)(*param_7 + 0x114))(piStack_3c[2],uVar12,iVar5);
                    if (*piStack_3c != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*piStack_3c);
                    *piStack_3c = 0;
                    FUN_00401f20(piStack_3c);
                  }
                  else {
                    do {
                      iVar6 = *piVar13;
                      if (iVar6 == 0) break;
                      iVar7 = FUN_0041e7b0();
                      if (iVar7 == 0) {
                        cVar2 = (**(code **)(*param_1 + 400))();
                        if (cVar2 == '\0') {
                          uVar12 = FUN_004db6b0();
                        }
                        else {
                          uVar12 = (**(code **)(*param_1 + 0x170))();
                        }
                        if ((((char)param_3 != '\0') &&
                            (cVar2 = FUN_00469980(piStack_3c[2]), cVar2 == '\0')) &&
                           ((cVar2 = FUN_004de880(uVar12), cVar2 == '\0' &&
                            (*(char *)(piStack_3c[2] + 4) != '\"')))) {
                          FUN_00423660(uVar12);
                        }
                      }
                      (**(code **)(*param_7 + 0x114))(piStack_3c[2],iVar6,iVar5);
                      piVar13 = (int *)piVar13[1];
                    } while (piVar13 != (int *)0x0);
                    if (*piStack_3c != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*piStack_3c);
                    *piStack_3c = 0;
                    FUN_00401f20(piStack_3c);
                  }
                }
                uStack_40 = (int *)(uVar4 << 8);
                piStack_3c = (int *)0x0;
              }
              else if ((piVar14 == (int *)0x0) || (iVar6 = FUN_0041fb00(), iVar6 == 0)) {
                local_38 = (int *)FUN_0048b080(param_1,piStack_34[2],iVar5,0,param_8,param_9);
                (**(code **)(*local_38 + 0x40))(0x20);
                if ((piVar14 != (int *)0x0) && (iVar5 = FUN_0041e060(), iVar5 != 0)) {
                  fVar17 = (float10)FUN_0041e940();
                  FUN_004db520((float)fVar17);
                  FUN_00428b10(piVar14,1);
                  FUN_0041f690();
                }
                uStack_40 = (int *)((uint)uStack_40 & 0xffffff);
                iVar5 = FUN_006ecc80();
                iVar6 = FUN_004d72b0();
                if (((iVar6 == 0) && (iVar5 != 0)) && (iVar5 = FUN_004ca970(), iVar5 != 0)) {
                  cVar2 = FUN_004caac0(param_1);
                  bVar16 = true;
                  if (cVar2 != '\0') goto LAB_00490332;
                }
                else {
LAB_00490332:
                  bVar16 = false;
                }
                iVar5 = FUN_004db6b0();
                if (iVar5 == 0) {
                  if (bVar16) goto LAB_004903bc;
                  iVar5 = (**(code **)(*param_1 + 0x170))();
                  if (*(char *)(iVar5 + 4) == '#') {
                    (**(code **)(*param_1 + 0x170))();
                    iVar5 = FUN_00519d20();
                    if (iVar5 == 1) {
                      uVar12 = (**(code **)(*local_38 + 0x170))
                                         (0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
                      iVar5 = FUN_009832e6(uVar12);
                      if (iVar5 != 0) {
                        iVar5 = FUN_00469240(1);
                        iVar6 = FUN_00469240(0);
                        bVar16 = iVar5 == iVar6;
                        goto LAB_004903ba;
                      }
                    }
                  }
                }
                else {
                  bVar16 = !bVar16;
LAB_004903ba:
                  if (!bVar16) {
LAB_004903bc:
                    uVar12 = (**(code **)(*param_1 + 0x170))();
                    FUN_004db890(uVar12);
                  }
                }
                if (piStack_3c != (int *)0x0) {
                  if (*piStack_3c != 0) {
                    FUN_004526e0();
                  }
                  FUN_00401f20(*piStack_3c);
                  *piStack_3c = 0;
                  FUN_00401f20(piStack_3c);
                }
                piStack_3c = (int *)0x0;
                if (piVar14 != (int *)0x0) {
                  (**(code **)*piVar14)(1);
                }
              }
              else {
                local_38 = (int *)FUN_0041fb00();
                if (local_38 != (int *)0x0) {
                  (**(code **)(*local_38 + 0x8c))(0);
                  FUN_004246b0();
                  iStack_18 = CONCAT31(iStack_18._1_3_,1);
                  if (piVar15 != (int *)0x0) {
                    iStack_18 = (uint)iStack_18._1_3_ << 8;
                  }
                  fVar17 = (float10)FUN_0041e940();
                  FUN_004db520((float)fVar17);
                  FUN_00428b10(piVar14,iStack_18);
                  FUN_0041f690();
                  FUN_004246b0();
                  iVar6 = FUN_0041f7f0();
                  if (iVar6 == 0) {
                    FUN_00423d30(local_38);
                    (**(code **)(*local_38 + 0x40))(0x20);
                  }
                  FUN_0048b080(unaff_retaddr,local_38[2],iVar5,local_38,param_7,param_8);
                  if (uVar4 != 0) {
                    if (*uStack_40 != 0) {
                      FUN_004526e0();
                    }
                    FUN_00401f20(*uStack_40);
                    *uStack_40 = 0;
                    FUN_00401f20(uStack_40);
                  }
                  uStack_40 = (int *)0x0;
                  (**(code **)*piVar14)(1);
                  iVar5 = FUN_006ecc80();
                  iVar6 = FUN_004d72b0();
                  if (((iVar6 == 0) && (iVar5 != 0)) &&
                     ((iVar5 = FUN_004ca970(), iVar5 != 0 &&
                      (cVar2 = FUN_004caac0(unaff_retaddr), cVar2 == '\0')))) {
LAB_00490279:
                    uVar12 = (**(code **)(*unaff_retaddr + 0x170))();
                    FUN_004db890(uVar12);
                  }
                  else {
                    iVar5 = (**(code **)(*unaff_retaddr + 0x170))();
                    if (*(char *)(iVar5 + 4) == '#') {
                      (**(code **)(*unaff_retaddr + 0x170))();
                      iVar5 = FUN_00519d20();
                      if (iVar5 == 1) {
                        uVar12 = (**(code **)(*local_38 + 0x170))
                                           (0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
                        iVar5 = FUN_009832e6(uVar12);
                        if (iVar5 != 0) {
                          iVar5 = FUN_00469240(1);
                          iVar6 = FUN_00469240(0);
                          if (iVar5 != iVar6) goto LAB_00490279;
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              piStack_24 = (int *)piStack_24[1];
            }
            if ((0 < param_4) && (param_11 != '\0')) {
              local_38 = (int *)FUN_0048fbc0(param_1,param_2,param_3,param_4,0,param_6,param_7,
                                             param_8,param_9,1,0);
              goto LAB_0049166c;
            }
            if (0 < param_4) {
              if (local_38 != (int *)0x0) goto LAB_0049166c;
              if (piStack_24 == (int *)0x0) {
                param_5 = local_38;
                break;
              }
              goto LAB_0048fe34;
            }
          } while (piStack_24 != (int *)0x0);
        }
        piStack_34 = (int *)*in_ECX;
        bVar16 = true;
        while( true ) {
          if (piStack_34 == (int *)0x0) goto LAB_00491011;
          if (!bVar16) break;
          if ((*piStack_34 == 0) || (*(int *)(*piStack_34 + 8) != param_2)) {
            piStack_34 = (int *)piStack_34[1];
            bVar16 = true;
          }
          else {
            bVar16 = false;
          }
        }
        if (piStack_34 == (int *)0x0) goto LAB_00491011;
        piStack_34 = (int *)*piStack_34;
        iVar5 = param_4;
      } while( true );
    }
  }
  local_38 = (int *)0x0;
LAB_0049166c:
  *unaff_FS_OFFSET = local_c;
  return local_38;
LAB_00491011:
  piStack_34 = (int *)0x0;
LAB_00491019:
  if ((param_11 != '\0') && (0 < param_4)) {
    local_38 = (int *)FUN_0048fbc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                                   param_9,1,0);
    goto LAB_0049166c;
  }
  if (((piStack_34 == (int *)0x0) || (uStack_40._1_1_ != '\0')) && (iStack_2c != 0)) {
    if (piStack_34 != (int *)0x0) {
      iStack_2c = iStack_2c + piStack_34[1];
    }
    if (iStack_2c != 0) {
      if ((char)param_6 == '\0') {
        if (param_7 != (int *)0x0) {
          cVar2 = (**(code **)(*param_1 + 400))();
          if (cVar2 == '\0') {
            uVar12 = FUN_004db6b0();
          }
          else {
            uVar12 = (**(code **)(*param_1 + 0x170))();
          }
          if ((((char)param_3 == '\0') || (cVar2 = FUN_00469980(param_2), cVar2 != '\0')) ||
             ((cVar2 = FUN_004de880(uVar12), cVar2 != '\0' || (*(char *)(param_2 + 4) == '\"')))) {
            if (param_5 != (int *)0x0) {
              FUN_0041f600();
            }
          }
          else {
            if (param_5 == (int *)0x0) {
              iVar5 = FUN_00401f00(0x14);
              uStack_4 = 6;
              if (iVar5 == 0) {
                param_5 = (int *)0x0;
              }
              else {
                param_5 = (int *)FUN_00422ee0();
              }
              uStack_4 = 0xffffffff;
            }
            FUN_00423660(uVar12);
            FUN_004238a0(param_4);
          }
          if (0 < param_4) {
            (**(code **)(*param_7 + 0x114))(param_2,param_5,param_4);
          }
        }
      }
      else {
        local_38 = (int *)FUN_0048b080(param_1,param_2,param_4,0,param_8,param_9);
        iVar5 = FUN_006ecc80();
        iVar6 = FUN_004d72b0();
        if (((iVar6 == 0) && (iVar5 != 0)) &&
           ((iVar5 = FUN_004ca970(), iVar5 != 0 && (cVar2 = FUN_004caac0(param_1), cVar2 == '\0'))))
        {
LAB_0049142c:
          uVar12 = (**(code **)(*param_1 + 0x170))();
          FUN_004db890(uVar12);
        }
        else {
          iVar5 = (**(code **)(*param_1 + 0x170))();
          if (*(char *)(iVar5 + 4) == '#') {
            (**(code **)(*param_1 + 0x170))();
            iVar5 = FUN_00519d20();
            if (iVar5 == 1) {
              uVar12 = (**(code **)(*local_38 + 0x170))(0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
              iVar5 = FUN_009832e6(uVar12);
              if (iVar5 != 0) {
                iVar5 = FUN_00469240(1);
                iVar6 = FUN_00469240(0);
                if (iVar5 != iVar6) goto LAB_0049142c;
              }
            }
          }
        }
      }
      if (piStack_3c != (int *)0x0) {
        if (*piStack_3c != 0) {
          FUN_004526e0();
        }
        FUN_00401f20(*piStack_3c);
        *piStack_3c = 0;
        FUN_00401f20(piStack_3c);
      }
      if (piStack_34 == (int *)0x0) {
        iVar5 = FUN_00401f00(0xc);
        uStack_4 = 7;
        if (iVar5 == 0) {
          uVar12 = 0;
        }
        else {
          uVar12 = FUN_00484420(param_2,-param_4);
        }
        uStack_4 = 0xffffffff;
        FUN_0067b1e0(uVar12);
      }
      else {
        piStack_34[1] = piStack_34[1] - param_4;
      }
      goto LAB_00491597;
    }
  }
  else {
LAB_00491597:
    piVar13 = (int *)FUN_00485e80(param_2,1,0);
    if (piVar13 == (int *)0x0) goto LAB_0049166c;
    if (((uStack_40._2_1_ == '\0') && (iStack_1c == 0)) &&
       (((iVar5 = piVar13[1], iVar5 == 0 && (iStack_2c == 0)) ||
        (((*piVar13 != 0 && (cVar2 = FUN_0046cb60(), cVar2 != '\0')) && (iVar5 == 0)))))) {
      iVar5 = FUN_00589b70(0x3f0);
      if (((iVar5 == 0) || (iVar5 = FUN_005898f0(), iVar5 == 0)) ||
         (*(char *)(iVar5 + 0x61) == '\0')) {
        FUN_004845a0();
      }
      FUN_0065c620(piVar13);
      if (*piVar13 != 0) {
        FUN_004526e0();
      }
      FUN_00401f20(*piVar13);
      *piVar13 = 0;
      FUN_00401f20(piVar13);
      goto LAB_0049166c;
    }
    if (((-1 < piVar13[1] + iStack_2c) || (cVar2 = FUN_00484e80(0), cVar2 != '\0')) ||
       ((*piVar13 == 0 || (iStack_1c != 0)))) goto LAB_0049166c;
  }
  FUN_004526e0();
  goto LAB_0049166c;
}


