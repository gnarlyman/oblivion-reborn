
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00550010(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 != (char *)0x0) {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(local_20c + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strrchr(local_20c,0x2e);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      _sprintf(local_108,"%s.tri",local_20c);
      FUN_004028d0(local_108,0);
      return *param_1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_005500c0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 != (char *)0x0) {
    iVar2 = -(int)param_2;
    do {
      cVar1 = *param_2;
      param_2[(int)(local_20c + iVar2)] = cVar1;
      param_2 = param_2 + 1;
    } while (cVar1 != '\0');
    pcVar3 = _strrchr(local_20c,0x2e);
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = '\0';
      _sprintf(local_108,"%s.egt",local_20c);
      FUN_004028d0(local_108,0);
      return *param_1;
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_00550170(undefined4 *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_20c;
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2[(int)(local_20c + -(int)param_2)] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _strrchr(local_20c,0x5f);
  if (pcVar2 == (char *)0x0) {
    return param_2;
  }
  *pcVar2 = '\0';
  _sprintf(local_108,"%s.nif",local_20c);
  FUN_004028d0(local_108,0);
  return (char *)*param_1;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00550240(undefined4 param_1)

{
  char local_44 [8];
  char local_3c [16];
  ushort local_2c;
  undefined1 local_2a;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_44;
  _sprintf(local_44,"%08X",param_1);
  builtin_strncpy(local_3c,"ModUpperBodyFema",0x10);
  local_2a = 0;
  local_2c = 0x656c;
  FUN_004a1a10(local_44);
  builtin_strncpy(local_3c,"ModUpperBodyMale",0x10);
  local_2c = local_2c & 0xff00;
  FUN_004a1a10(local_44);
  builtin_strncpy(local_3c,"ModBody",8);
  FUN_004a1a10(local_44);
  return;
}



uint FUN_00550330(int *param_1)

{
  int iVar1;
  bool bVar2;
  uint3 uVar5;
  byte *pbVar3;
  byte *pbVar4;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  
  iVar6 = *in_ECX;
  uVar5 = (uint3)((uint)iVar6 >> 8);
  if ((*param_1 != iVar6) || (iVar1 = in_ECX[1], param_1[1] != iVar1)) {
    return (uint)uVar5 << 8;
  }
  if ((iVar6 == 0) || (iVar1 == 0)) {
    return CONCAT31(uVar5,1);
  }
  pbVar3 = (byte *)FUN_0054f7a0(0);
  pbVar4 = (byte *)FUN_0054f7a0(0);
  for (uVar7 = iVar1 * iVar6 * 4; 3 < uVar7; uVar7 = uVar7 - 4) {
    if (*(int *)pbVar4 != *(int *)pbVar3) goto LAB_00550399;
    pbVar3 = pbVar3 + 4;
    pbVar4 = pbVar4 + 4;
  }
  if (uVar7 == 0) {
LAB_00550403:
    bVar2 = false;
  }
  else {
LAB_00550399:
    iVar6 = (uint)*pbVar4 - (uint)*pbVar3;
    if (iVar6 == 0) {
      if (uVar7 == 1) goto LAB_00550403;
      iVar6 = (uint)pbVar4[1] - (uint)pbVar3[1];
      if (iVar6 == 0) {
        if (uVar7 == 2) goto LAB_00550403;
        iVar6 = (uint)pbVar4[2] - (uint)pbVar3[2];
        if (iVar6 == 0) {
          if ((uVar7 == 3) || (iVar6 = (uint)pbVar4[3] - (uint)pbVar3[3], iVar6 == 0))
          goto LAB_00550403;
        }
      }
    }
    bVar2 = true;
    if (iVar6 < 1) {
      return 0xffffff00;
    }
  }
  return (uint)!bVar2;
}



void FUN_00550430(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0xd4);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar2 = InterlockedDecrement(puVar1 + 1);
      if ((LVar2 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(in_ECX + 0xd4) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005504b2) */
/* WARNING: Removing unreachable block (ram,0x005504c0) */

undefined4 FUN_00550480(void)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 local_4;
  
  local_4 = 0;
  if (*(int *)(in_ECX + 8) == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = (undefined4 *)(*(int *)(in_ECX + 8) + 0x1c);
  }
  return *puVar1;
}



void FUN_005504d0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca338;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00550586) */
/* WARNING: Removing unreachable block (ram,0x00550594) */

undefined4 FUN_00550550(void)

{
  undefined4 *puVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (DAT_00b39b80 == 0) {
    local_4 = 0;
    puVar1 = &local_4;
  }
  else {
    puVar1 = (undefined4 *)(DAT_00b39b80 + 0xdb0);
  }
  return *puVar1;
}



void FUN_005505b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbc28;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a647b8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a646f8;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00550620(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  uint uVar3;
  
  *in_ECX = &PTR_FUN_00a647e0;
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
  FUN_005505b0();
  return;
}



void FUN_00550670(byte param_1)

{
  FUN_005505b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00550690(byte param_1)

{
  FUN_00550620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005506b0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  uVar4 = 0;
  do {
    if (param_1 == 0) {
LAB_0055071b:
      iVar1 = FUN_0054f890(uVar4);
      if (*(uint *)(in_ECX + 0x18 + uVar4 * 4) < (uint)(iVar1 + iVar3)) {
        do {
          FUN_0054fc30(uVar4,param_1);
          iVar2 = FUN_0054f890(uVar4);
          if (iVar2 == iVar1) break;
          iVar1 = iVar2;
        } while (*(uint *)(in_ECX + 0x18 + uVar4 * 4) < (uint)(iVar2 + iVar3));
      }
    }
    else {
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          iVar1 = FUN_00556650();
          if (iVar1 != 0) goto LAB_00550754;
          iVar3 = FUN_00556720();
        }
        else {
          iVar3 = 0;
        }
        goto LAB_0055071b;
      }
      iVar1 = FUN_005564e0();
      if (iVar1 == 0) {
        iVar3 = FUN_005565f0();
        goto LAB_0055071b;
      }
    }
LAB_00550754:
    uVar4 = uVar4 + 1;
    if (1 < uVar4) {
      _DAT_00b39c7c = _DAT_00b39c7c + -1;
      if (_DAT_00b39c7c == 0) {
        _DAT_00b39c78 = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x0055077f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
      return;
    }
  } while( true );
}



int FUN_00550790(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + (uVar2 & 0xffff) * 4);
        if ((iVar1 != 0) && (iVar1 = FUN_00560920(&DAT_00b39d88,iVar1), iVar1 != 0)) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    return 0;
  }
  return 0;
}



undefined4 FUN_005507e0(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)FUN_00550790(param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005507f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*piVar1 + 0x54))();
    return uVar2;
  }
  return 0;
}



undefined4 FUN_00550800(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00550790(param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x54))();
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x54))();
      iVar2 = FUN_00550480();
      if (iVar2 != 0) {
        uVar3 = FUN_00560920(&DAT_00b39da0,iVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



undefined4 FUN_00550850(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  piVar1 = (int *)FUN_00550790(param_1);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0x54))();
    if (iVar2 != 0) {
      (**(code **)(*piVar1 + 0x54))();
      iVar2 = FUN_00550480();
      if (iVar2 != 0) {
        uVar3 = FUN_00560920(&DAT_00b39da8,iVar2);
        return uVar3;
      }
    }
  }
  return 0;
}



int FUN_005508a0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar3 = (uint)*(ushort *)(param_1 + 0x14);
  if (uVar3 != 0) {
    uVar2 = 0;
    if (uVar3 != 0) {
      do {
        iVar1 = *(int *)(*(int *)(param_1 + 0x10) + (uVar2 & 0xffff) * 4);
        if ((iVar1 != 0) && (iVar1 = FUN_00560920(&DAT_00b39d90,iVar1), iVar1 != 0)) {
          return iVar1;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar3);
    }
    return 0;
  }
  return 0;
}



void FUN_005508f0(int param_1,int *param_2)

{
  ushort *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  piVar3 = (int *)FUN_005508a0(param_1);
  if ((piVar3 != (int *)0x0) && (*param_2 != 0)) {
    iVar2 = param_2[1];
    puVar5 = (undefined4 *)*param_2;
    uVar6 = 0;
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x54))();
    if (*(short *)(*(int *)(param_1 + 0xb4) + 8) != 0) {
      do {
        *puVar5 = *puVar4;
        puVar5[1] = puVar4[1];
        puVar5[2] = puVar4[2];
        uVar6 = uVar6 + 1;
        puVar5 = (undefined4 *)((int)puVar5 + iVar2);
        puVar4 = puVar4 + 3;
      } while (uVar6 < *(ushort *)(*(int *)(param_1 + 0xb4) + 8));
    }
    if (*(int *)(*(int *)(param_1 + 0xb4) + 0x1c) != 0) {
      puVar1 = (ushort *)(*(int *)(param_1 + 0xb4) + 0x2e);
      *puVar1 = *puVar1 | 1;
    }
  }
  return;
}



void FUN_00550980(int param_1,float param_2)

{
  char cVar1;
  int *piVar2;
  int local_c [2];
  undefined1 local_4;
  
  if ((((param_1 != 0) && (0.0 <= param_2)) &&
      (piVar2 = (int *)FUN_00550850(param_1), piVar2 != (int *)0x0)) &&
     (cVar1 = FUN_00728ab0(1), cVar1 != '\0')) {
    local_c[0] = 0;
    local_c[1] = 0;
    local_4 = 0;
    FUN_00728b60(local_c);
    FUN_005508f0(param_1,local_c);
    if (local_c[0] != 0) {
      (**(code **)(*piVar2 + 0x18))(local_c,*(undefined2 *)(*(int *)(param_1 + 0xb4) + 8),param_2);
    }
    FUN_00728b20();
  }
  return;
}



void FUN_00550a30(float *param_1,int *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  iVar9 = (int)param_3;
  if (0 < (int)param_3) {
    pfVar8 = (float *)*param_2;
    local_18 = *pfVar8;
    local_14 = pfVar8[1];
    local_10 = pfVar8[2];
    local_24 = *pfVar8;
    local_20 = pfVar8[1];
    local_1c = pfVar8[2];
    iVar1 = param_2[1];
    pfVar8 = (float *)*param_2;
    iVar10 = 1;
    if (3 < (int)param_3 + -1) {
      iVar11 = ((int)param_3 - 5U >> 2) + 1;
      iVar10 = iVar11 * 4 + 1;
      do {
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[2];
        if (fVar2 < local_18) {
          local_18 = fVar2;
        }
        if (fVar3 < local_14) {
          local_14 = fVar3;
        }
        if (fVar4 < local_10) {
          local_10 = fVar4;
        }
        if (local_24 < fVar2) {
          local_24 = fVar2;
        }
        if (local_20 < fVar3) {
          local_20 = fVar3;
        }
        if (local_1c < fVar4) {
          local_1c = fVar4;
        }
        fVar2 = *(float *)((int)pfVar8 + iVar1);
        fVar3 = *(float *)((int)pfVar8 + iVar1 + 4);
        fVar4 = *(float *)((int)pfVar8 + iVar1 + 8);
        if (fVar2 < local_18) {
          local_18 = fVar2;
        }
        if (fVar3 < local_14) {
          local_14 = fVar3;
        }
        if (fVar4 < local_10) {
          local_10 = fVar4;
        }
        if (local_24 < fVar2) {
          local_24 = fVar2;
        }
        if (local_20 < fVar3) {
          local_20 = fVar3;
        }
        if (local_1c < fVar4) {
          local_1c = fVar4;
        }
        fVar2 = *(float *)((int)pfVar8 + iVar1 * 2);
        fVar3 = *(float *)((int)pfVar8 + iVar1 * 2 + 4);
        fVar4 = *(float *)((int)pfVar8 + iVar1 * 2 + 8);
        if (fVar2 < local_18) {
          local_18 = fVar2;
        }
        if (fVar3 < local_14) {
          local_14 = fVar3;
        }
        if (fVar4 < local_10) {
          local_10 = fVar4;
        }
        if (local_24 < fVar2) {
          local_24 = fVar2;
        }
        if (local_20 < fVar3) {
          local_20 = fVar3;
        }
        if (local_1c < fVar4) {
          local_1c = fVar4;
        }
        fVar2 = *(float *)((int)pfVar8 + iVar1 * 3);
        fVar3 = *(float *)((int)pfVar8 + iVar1 * 3 + 4);
        fVar4 = *(float *)((int)pfVar8 + iVar1 * 3 + 8);
        if (fVar2 < local_18) {
          local_18 = fVar2;
        }
        if (fVar3 < local_14) {
          local_14 = fVar3;
        }
        if (fVar4 < local_10) {
          local_10 = fVar4;
        }
        if (local_24 < fVar2) {
          local_24 = fVar2;
        }
        if (local_20 < fVar3) {
          local_20 = fVar3;
        }
        if (local_1c < fVar4) {
          local_1c = fVar4;
        }
        pfVar8 = pfVar8 + iVar1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (iVar10 < (int)param_3) {
      iVar10 = (int)param_3 - iVar10;
      do {
        fVar2 = *pfVar8;
        fVar3 = pfVar8[1];
        fVar4 = pfVar8[2];
        if (fVar2 < local_18) {
          local_18 = fVar2;
        }
        if (fVar3 < local_14) {
          local_14 = fVar3;
        }
        if (fVar4 < local_10) {
          local_10 = fVar4;
        }
        if (local_24 < fVar2) {
          local_24 = fVar2;
        }
        if (local_20 < fVar3) {
          local_20 = fVar3;
        }
        if (local_1c < fVar4) {
          local_1c = fVar4;
        }
        pfVar8 = (float *)((int)pfVar8 + iVar1);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    pfVar8 = (float *)*param_2;
    iVar10 = 0;
    fVar2 = (local_24 + local_18) * 0.5;
    fVar3 = (local_20 + local_14) * 0.5;
    fVar4 = (local_1c + local_10) * 0.5;
    param_3 = 0.0;
    if (3 < iVar9) {
      iVar11 = (iVar9 - 4U >> 2) + 1;
      iVar10 = iVar11 * 4;
      do {
        fVar5 = (pfVar8[2] - fVar4) * (pfVar8[2] - fVar4) +
                (*pfVar8 - fVar2) * (*pfVar8 - fVar2) + (pfVar8[1] - fVar3) * (pfVar8[1] - fVar3);
        if (param_3 < fVar5) {
          param_3 = fVar5;
        }
        fVar6 = *(float *)((int)pfVar8 + iVar1) - fVar2;
        fVar7 = *(float *)((int)pfVar8 + iVar1 + 4) - fVar3;
        fVar5 = *(float *)((int)pfVar8 + iVar1 + 8) - fVar4;
        fVar5 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
        if (param_3 < fVar5) {
          param_3 = fVar5;
        }
        fVar6 = *(float *)((int)pfVar8 + iVar1 * 2) - fVar2;
        fVar7 = *(float *)((int)pfVar8 + iVar1 * 2 + 4) - fVar3;
        fVar5 = *(float *)((int)pfVar8 + iVar1 * 2 + 8) - fVar4;
        fVar5 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
        if (param_3 < fVar5) {
          param_3 = fVar5;
        }
        fVar6 = *(float *)((int)pfVar8 + iVar1 * 3) - fVar2;
        fVar7 = *(float *)((int)pfVar8 + iVar1 * 3 + 4) - fVar3;
        fVar5 = *(float *)((int)pfVar8 + iVar1 * 3 + 8) - fVar4;
        fVar5 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
        if (param_3 < fVar5) {
          param_3 = fVar5;
        }
        pfVar8 = pfVar8 + iVar1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if (iVar10 < iVar9) {
      iVar9 = iVar9 - iVar10;
      do {
        fVar5 = (pfVar8[2] - fVar4) * (pfVar8[2] - fVar4) +
                (*pfVar8 - fVar2) * (*pfVar8 - fVar2) + (pfVar8[1] - fVar3) * (pfVar8[1] - fVar3);
        if (param_3 < fVar5) {
          param_3 = fVar5;
        }
        pfVar8 = (float *)((int)pfVar8 + iVar1);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *param_1 = fVar2;
    param_1[1] = fVar3;
    param_1[2] = fVar4;
    fVar12 = (float10)FUN_00982c30();
    param_1[3] = (float)fVar12;
    return;
  }
  *param_1 = DAT_00b3f9a8;
  param_1[1] = DAT_00b3f9ac;
  fVar2 = DAT_00b3f9b0;
  param_1[3] = 0.0;
  param_1[2] = fVar2;
  return;
}



void FUN_00551140(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((DAT_00b39d80 != '\0') && (param_1 != (int *)0x0)) {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    puVar2 = (undefined4 *)FUN_007b4290(param_2);
    if ((puVar2 != (undefined4 *)0x0) &&
       (((iVar1 != 0 && (*(int *)(iVar1 + 0xb4) != 0)) && (*(int *)(iVar1 + 0xb8) == 0)))) {
      *(ushort *)(*(int *)(iVar1 + 0xb4) + 0x2e) =
           *(ushort *)(*(int *)(iVar1 + 0xb4) + 0x2e) & 0xfff | 0x4000;
      *(undefined1 *)(*(int *)(iVar1 + 0xb4) + 0x31) = 0x1f;
      (**(code **)(*DAT_00b3f928 + 0xb0))(iVar1,0,0,*puVar2);
      FUN_00769030();
      return;
    }
  }
  return;
}



float10 FUN_005511d0(void)

{
  float fVar1;
  uint *in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float local_8;
  
  local_8 = 0.0;
  uVar3 = 0;
  if (*in_ECX != 0) {
    do {
      uVar4 = 0;
      if (in_ECX[1] != 0) {
        do {
          if ((in_ECX[3] == 0) || ((int)(in_ECX[4] - in_ECX[3]) >> 2 == 0)) {
            FUN_00984d5e();
          }
          iVar2 = in_ECX[1] * uVar3 + uVar4;
          uVar4 = uVar4 + 1;
          fVar1 = *(float *)(in_ECX[3] + iVar2 * 4);
          local_8 = fVar1 * fVar1 + local_8;
        } while (uVar4 < in_ECX[1]);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *in_ECX);
  }
  return (float10)local_8;
}



undefined4 FUN_00551250(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  bool bVar3;
  undefined4 local_8;
  undefined2 local_4;
  undefined2 local_2;
  
  local_8 = 0;
  puVar2 = *(undefined4 **)(in_ECX + 8);
  bVar3 = puVar2 == (undefined4 *)0x0;
  if (bVar3) {
    FUN_00401f20(0);
    local_8 = 0;
    local_2 = 0;
    local_4 = 0;
    puVar2 = &local_8;
  }
  local_8 = 0;
  uVar1 = *puVar2;
  if (bVar3) {
    FUN_00401f20(0);
  }
  return uVar1;
}



undefined4 FUN_005512a0(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  bool bVar3;
  undefined4 local_8;
  undefined2 local_4;
  undefined2 local_2;
  
  local_8 = 0;
  puVar2 = *(undefined4 **)(in_ECX + 0xc);
  bVar3 = puVar2 == (undefined4 *)0x0;
  if (bVar3) {
    FUN_00401f20(0);
    local_8 = 0;
    local_2 = 0;
    local_4 = 0;
    puVar2 = &local_8;
  }
  local_8 = 0;
  uVar1 = *puVar2;
  if (bVar3) {
    FUN_00401f20(0);
  }
  return uVar1;
}



void FUN_005512f0(byte param_1)

{
  FUN_005504d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00551370(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a64800;
  FUN_00550620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005513a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbc5b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64820;
  local_4 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  FUN_007c2a40(uVar1);
  _DAT_00b39c7c = _DAT_00b39c7c + -1;
  if (_DAT_00b39c7c == 0) {
    _DAT_00b39c78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  local_4 = 0xffffffff;
  in_ECX[1] = &PTR_FUN_00a64800;
  FUN_00550620();
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00551450(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  DWORD DVar2;
  LONG LVar3;
  undefined4 *puVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d7778;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  local_4 = 0;
  if (param_2 == 0) {
    FUN_004524c0();
    _DAT_00b39c7c = _DAT_00b39c7c + -1;
    if (_DAT_00b39c7c == 0) {
      _DAT_00b39c78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  }
  else {
    puVar1 = (undefined4 *)FUN_00401f00();
    puVar4 = (undefined4 *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_00a3fcf8;
      puVar1[1] = 0;
      InterlockedIncrement((LONG *)&DAT_00b3fd64);
      *puVar1 = &PTR_FUN_00a647d8;
      puVar1[2] = 0;
      InterlockedIncrement(puVar1 + 1);
      puVar4 = puVar1;
    }
    FUN_0075fa90();
    DVar2 = GetTickCount();
    puVar4[3] = DVar2;
    InterlockedIncrement(puVar4 + 1);
    FUN_004a1b10(param_1);
    FUN_005506b0();
    _DAT_00b39c7c = _DAT_00b39c7c + -1;
    if (_DAT_00b39c7c == 0) {
      _DAT_00b39c78 = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
    local_4 = 0xffffffff;
    LVar3 = InterlockedDecrement(puVar4 + 1);
    if (LVar3 == 0) {
      (**(code **)*puVar4)();
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_005515b0(undefined4 param_1)

{
  undefined4 *puVar1;
  char cVar2;
  DWORD DVar3;
  LONG LVar4;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  _DAT_00b39c78 = GetCurrentThreadId();
  _DAT_00b39c7c = _DAT_00b39c7c + 1;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  cVar2 = FUN_004a1ab0(param_1,&local_10);
  puVar1 = local_10;
  if (cVar2 != '\0') {
    DVar3 = GetTickCount();
    puVar1[3] = DVar3;
    FUN_0055e2a0(puVar1 + 2);
    FUN_005506b0(puVar1);
    FUN_00559190();
    FUN_00558520();
  }
  _DAT_00b39c7c = _DAT_00b39c7c + -1;
  if (_DAT_00b39c7c == 0) {
    _DAT_00b39c78 = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if (LVar4 == 0) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return cVar2 != '\0';
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005516b0(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  DWORD DVar7;
  LONG LVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 **ppuVar11;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  if ((param_1 != 0) && (iVar4 = FUN_00551250(uVar3), iVar4 != 0)) {
    pcVar5 = (char *)FUN_00551250(uVar3);
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 != pcVar1) {
      uVar9 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
      _DAT_00b39c78 = GetCurrentThreadId();
      _DAT_00b39c7c = _DAT_00b39c7c + 1;
      ppuVar11 = &local_10;
      uVar6 = FUN_00551250(ppuVar11);
      cVar2 = FUN_004a1ab0(uVar6,ppuVar11);
      if (cVar2 == '\0') {
        ppuVar11 = &local_10;
        uVar6 = FUN_005512a0(ppuVar11);
        cVar2 = FUN_004a1ab0(uVar6,ppuVar11);
        puVar10 = local_10;
        if (cVar2 != '\0') goto LAB_00551769;
      }
      else {
LAB_00551769:
        DVar7 = GetTickCount();
        puVar10 = local_10;
        local_10[3] = DVar7;
        FUN_005506b0(local_10);
        FUN_00559190();
        uVar9 = 1;
      }
      _DAT_00b39c7c = _DAT_00b39c7c + -1;
      if (_DAT_00b39c7c == 0) {
        _DAT_00b39c78 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
      local_4 = 0xffffffff;
      if ((puVar10 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar10 + 1), LVar8 == 0))
      {
        (**(code **)*puVar10)(1);
      }
      goto LAB_005517d6;
    }
  }
  uVar9 = 0;
LAB_005517d6:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_005517f0(int param_1)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  DWORD DVar7;
  LONG LVar8;
  undefined1 uVar9;
  undefined4 *puVar10;
  int *unaff_FS_OFFSET;
  undefined4 **ppuVar11;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c7c98;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  if ((param_1 != 0) && (iVar4 = FUN_005512a0(uVar3), iVar4 != 0)) {
    pcVar5 = (char *)FUN_005512a0(uVar3);
    pcVar1 = pcVar5 + 1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (pcVar5 != pcVar1) {
      uVar9 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
      _DAT_00b39c78 = GetCurrentThreadId();
      _DAT_00b39c7c = _DAT_00b39c7c + 1;
      ppuVar11 = &local_10;
      uVar6 = FUN_005512a0(ppuVar11);
      cVar2 = FUN_004a1ab0(uVar6,ppuVar11);
      if (cVar2 == '\0') {
        ppuVar11 = &local_10;
        uVar6 = FUN_00551250(ppuVar11);
        cVar2 = FUN_004a1ab0(uVar6,ppuVar11);
        puVar10 = local_10;
        if (cVar2 != '\0') goto LAB_005518a9;
      }
      else {
LAB_005518a9:
        DVar7 = GetTickCount();
        puVar10 = local_10;
        local_10[3] = DVar7;
        FUN_005506b0(local_10);
        FUN_00558520();
        uVar9 = 1;
      }
      _DAT_00b39c7c = _DAT_00b39c7c + -1;
      if (_DAT_00b39c7c == 0) {
        _DAT_00b39c78 = 0;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00b39c00);
      local_4 = 0xffffffff;
      if ((puVar10 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar10 + 1), LVar8 == 0))
      {
        (**(code **)*puVar10)(1);
      }
      goto LAB_00551916;
    }
  }
  uVar9 = 0;
LAB_00551916:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



uint FUN_00551930(undefined4 param_1)

{
  uint uVar1;
  
  if ((DAT_00b39b80 != 0) && (*(int *)(DAT_00b39b80 + 0xdac) != 0)) {
    uVar1 = FUN_005516b0(param_1);
    return uVar1;
  }
  return DAT_00b39b80 & 0xffffff00;
}



uint FUN_00551960(undefined4 param_1)

{
  uint uVar1;
  
  if ((DAT_00b39b80 != 0) && (*(int *)(DAT_00b39b80 + 0xdac) != 0)) {
    uVar1 = FUN_005517f0(param_1);
    return uVar1;
  }
  return DAT_00b39b80 & 0xffffff00;
}



undefined4 FUN_00551990(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 != 0) {
    iVar2 = 0;
    param_2 = param_2 - param_1;
    do {
      iVar3 = 0;
      iVar4 = param_1;
      do {
        cVar1 = FUN_00550330(param_2 + iVar4);
        if (cVar1 == '\0') {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar3 < 2);
      iVar2 = iVar2 + 1;
      param_1 = param_1 + 0x30;
    } while (iVar2 < 2);
    return 0;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00551a00(undefined4 *param_1,int param_2,byte param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  uVar6 = (uint)param_3;
  uVar5 = 0x4d;
  if (((param_4 != (char *)0x0) && (uVar6 < 0x65)) && (param_2 < 2)) {
    iVar3 = -(int)param_4;
    do {
      cVar1 = *param_4;
      param_4[(int)(local_108 + iVar3)] = cVar1;
      param_4 = param_4 + 1;
    } while (cVar1 != '\0');
    pcVar2 = _strrchr(local_108,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      if (param_2 == 1) {
        uVar5 = 0x46;
      }
      FUN_00402e30(param_1,"Textures\\%s%c%d.dds",local_108,uVar5,uVar6);
      if ((DAT_00b33a04 != (int *)0x0) &&
         (iVar3 = (**(code **)(*DAT_00b33a04 + 4))(*param_1,0,0,0xffffffff), iVar3 != 0)) {
LAB_00551aba:
        return *param_1;
      }
      iVar3 = (uVar6 / 10) * 10;
      do {
        FUN_00402e30(param_1,"Textures\\%s%c%d.dds",local_108,uVar5,iVar3);
        if ((DAT_00b33a04 != (int *)0x0) &&
           (iVar4 = (**(code **)(*DAT_00b33a04 + 4))(*param_1,0,0,0xffffffff), iVar4 != 0))
        goto LAB_00551aba;
        iVar3 = iVar3 + -10;
      } while (-1 < iVar3);
      FUN_004028d0(&DAT_00a2f7ec,0);
    }
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_00551b40(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_220;
  undefined2 local_21c;
  undefined2 local_21a;
  char local_218 [260];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbc8b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_220;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffdd4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_220 = 0;
  local_21c = 0;
  local_21a = 0;
  local_4 = 0;
  if (param_2 == (char *)0x0) {
    FUN_00401f20(0,uVar3);
    param_2 = (char *)0x0;
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(local_218 + -(int)param_2)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = _strchr(local_218,0x5f);
    if (pcVar4 == (char *)0x0) {
      pcVar4 = _strrchr(local_218,0x2e);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
        _sprintf(local_114,"%s_50.NIF",local_218);
        FUN_004028d0(local_114,0);
        FUN_00402e30(&local_220,"Meshes\\%s",*param_1);
        uVar2 = local_220;
        if ((DAT_00b33a04 == (int *)0x0) ||
           (iVar5 = (**(code **)(*DAT_00b33a04 + 4))(local_220,0,0,0xffffffff), iVar5 == 0)) {
          FUN_00401f20(uVar2);
          param_2 = (char *)0x0;
        }
        else {
          param_2 = (char *)*param_1;
          FUN_00401f20(uVar2);
        }
        goto LAB_00551c85;
      }
    }
    else {
      FUN_004028d0(local_218,0);
    }
    FUN_00401f20(0);
  }
LAB_00551c85:
  *unaff_FS_OFFSET = local_c;
  return param_2;
}



void FUN_00551d20(byte param_1)

{
  FUN_005513a0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00551d67) */

void FUN_00551d40(float param_1)

{
  float *pfVar1;
  int in_ECX;
  float *pfVar2;
  
  pfVar2 = *(float **)(in_ECX + 0xc);
  if (*(float **)(in_ECX + 0x10) < pfVar2) {
    FUN_00984d5e();
  }
  while( true ) {
    pfVar1 = *(float **)(in_ECX + 0x10);
    if (pfVar1 < *(float **)(in_ECX + 0xc)) {
      FUN_00984d5e();
    }
    if (pfVar2 == pfVar1) break;
    if (*(float **)(in_ECX + 0x10) <= pfVar2) {
      FUN_00984d5e();
    }
    *pfVar2 = *pfVar2 * param_1;
    if (*(float **)(in_ECX + 0x10) <= pfVar2) {
      FUN_00984d5e();
    }
    pfVar2 = pfVar2 + 1;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00551e05) */
/* WARNING: Removing unreachable block (ram,0x00551e25) */

int * FUN_00551da0(int *param_1)

{
  float *pfVar1;
  int *in_ECX;
  float *pfVar2;
  float *pfVar3;
  
  if ((*in_ECX != *param_1) || (in_ECX[1] != param_1[1])) {
    FUN_006ed6d0("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp",0x249);
  }
  pfVar3 = (float *)in_ECX[3];
  if ((float *)in_ECX[4] < pfVar3) {
    FUN_00984d5e();
  }
  pfVar2 = (float *)param_1[3];
  if ((float *)param_1[4] < pfVar2) {
    FUN_00984d5e();
  }
  while( true ) {
    pfVar1 = (float *)in_ECX[4];
    if (pfVar1 < (float *)in_ECX[3]) {
      FUN_00984d5e();
    }
    if (pfVar3 == pfVar1) break;
    pfVar1 = (float *)param_1[4];
    if (pfVar1 < (float *)param_1[3]) {
      FUN_00984d5e();
    }
    if (pfVar2 == pfVar1) {
      return in_ECX;
    }
    if ((float *)in_ECX[4] <= pfVar3) {
      FUN_00984d5e();
    }
    if ((float *)param_1[4] <= pfVar2) {
      FUN_00984d5e();
    }
    *pfVar3 = *pfVar2 + *pfVar3;
    if ((float *)in_ECX[4] <= pfVar3) {
      FUN_00984d5e();
    }
    pfVar3 = pfVar3 + 1;
    if ((float *)param_1[4] <= pfVar2) {
      FUN_00984d5e();
    }
    pfVar2 = pfVar2 + 1;
  }
  return in_ECX;
}



void FUN_00551e80(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a64820;
  in_ECX[2] = 0x25;
  in_ECX[1] = &PTR_FUN_00a646f8;
  in_ECX[4] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[3] = _Dst;
  _memset(_Dst,0,in_ECX[2] * 4);
  *(undefined1 *)(in_ECX + 5) = 1;
  in_ECX[1] = &PTR_FUN_00a64800;
  in_ECX[6] = 0x10000000;
  in_ECX[7] = 0x10000000;
  return;
}



void FUN_00551ef0(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x30)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 0xc) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0xc));
  }
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}



void FUN_00551f40(void)

{
  uint uVar1;
  void *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbcde;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  _eh_vector_destructor_iterator_((void *)((int)in_ECX + 0x48),0x18,2,FUN_0043ace0);
  if (*(int *)((int)in_ECX + 0x3c) != 0) {
    FUN_00401f20(*(int *)((int)in_ECX + 0x3c),uVar1);
  }
  *(undefined4 *)((int)in_ECX + 0x3c) = 0;
  *(undefined4 *)((int)in_ECX + 0x40) = 0;
  *(undefined4 *)((int)in_ECX + 0x44) = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(in_ECX,0x18,2,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00551fd0(void)

{
  void *in_ECX;
  
  _eh_vector_destructor_iterator_(in_ECX,0x18,2,FUN_0043ace0);
  return;
}



void FUN_00551fe0(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bbe06;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 2;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0xa54),0x18,0x14,FUN_0043ace0);
  local_4._0_1_ = 1;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x4dc),0x38,0x19,FUN_00551fd0);
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x25c),0x20,0x14,FUN_0043ace0);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 4),0x78,5,FUN_00551f40);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005520e0(int *param_1)

{
  int iVar1;
  void *_Src;
  int *in_ECX;
  
  if (in_ECX != param_1) {
    *in_ECX = *param_1;
    iVar1 = param_1[1];
    in_ECX[1] = iVar1;
    FUN_00527160(*in_ECX * iVar1,0);
    if ((param_1[3] == 0) || (param_1[4] - param_1[3] >> 2 == 0)) {
      FUN_00984d5e();
    }
    _Src = (void *)param_1[3];
    if ((in_ECX[3] == 0) || (in_ECX[4] - in_ECX[3] >> 2 == 0)) {
      FUN_00984d5e();
    }
    _memcpy((void *)in_ECX[3],_Src,in_ECX[1] * *in_ECX * 4);
  }
  return;
}



void FUN_00552160(int *param_1)

{
  int iVar1;
  void *_Src;
  uint uVar2;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbd0b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_4 = 0;
  FUN_00527160(*in_ECX * in_ECX[1],0);
  if ((((in_ECX[3] != 0) && (in_ECX[4] - in_ECX[3] >> 2 != 0)) && (iVar1 = param_1[3], iVar1 != 0))
     && (param_1[4] - iVar1 >> 2 != 0)) {
    if ((iVar1 == 0) || (param_1[4] - iVar1 >> 2 == 0)) {
      FUN_00984d5e(uVar2);
    }
    _Src = (void *)param_1[3];
    if ((in_ECX[3] == 0) || (in_ECX[4] - in_ECX[3] >> 2 == 0)) {
      FUN_00984d5e(uVar2);
    }
    _memcpy((void *)in_ECX[3],_Src,*in_ECX * in_ECX[1] * 4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552240(int param_1,int param_2)

{
  int *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbd3b;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  local_4 = 0;
  FUN_00527160(in_ECX[1] * *in_ECX,0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005522b0(int param_1,int param_2)

{
  uint *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 0x30);
    do {
      if (0xf < *puVar1) {
        FUN_00401f20(puVar1[-5]);
      }
      *puVar1 = 0xf;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + -5) = 0;
      if (puVar1[-9] != 0) {
        FUN_00401f20(puVar1[-9]);
      }
      puVar1[-9] = 0;
      puVar1[-8] = 0;
      puVar1[-7] = 0;
      param_1 = param_1 + 0x34;
      puVar1 = puVar1 + 0xd;
    } while (param_1 != param_2);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00552365) */

int FUN_00552310(int param_1,float param_2)

{
  float *pfVar1;
  undefined4 *in_ECX;
  float *pfVar2;
  float *pfVar3;
  
  FUN_00552240(*in_ECX,in_ECX[1]);
  pfVar3 = (float *)in_ECX[3];
  if ((float *)in_ECX[4] < pfVar3) {
    FUN_00984d5e();
  }
  pfVar2 = *(float **)(param_1 + 0xc);
  if (*(float **)(param_1 + 0x10) < pfVar2) {
    FUN_00984d5e();
  }
  while( true ) {
    pfVar1 = (float *)in_ECX[4];
    if (pfVar1 < (float *)in_ECX[3]) {
      FUN_00984d5e();
    }
    if (pfVar3 == pfVar1) break;
    if ((float *)in_ECX[4] <= pfVar3) {
      FUN_00984d5e();
    }
    if (*(float **)(param_1 + 0x10) <= pfVar2) {
      FUN_00984d5e();
    }
    *pfVar2 = *pfVar3 * param_2;
    if ((float *)in_ECX[4] <= pfVar3) {
      FUN_00984d5e();
    }
    pfVar3 = pfVar3 + 1;
    if (*(float **)(param_1 + 0x10) <= pfVar2) {
      FUN_00984d5e();
    }
    pfVar2 = pfVar2 + 1;
  }
  return param_1;
}



int FUN_005523c0(uint param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint *in_ECX;
  uint uVar7;
  
  puVar5 = param_2;
  iVar4 = param_1;
  if (in_ECX[1] != *param_2) {
    FUN_006ed6d0("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp",0x10d);
  }
  FUN_00552240(*in_ECX,param_2[1]);
  param_2 = (uint *)0x0;
  if (*in_ECX != 0) {
    do {
      param_1 = 0;
      if (puVar5[1] != 0) {
        do {
          if ((*(int *)(iVar4 + 0xc) == 0) ||
             (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 == 0)) {
            FUN_00984d5e();
          }
          uVar7 = 0;
          *(undefined4 *)
           (*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 4) * (int)param_2 * 4 + param_1 * 4) = 0;
          if (in_ECX[1] != 0) {
            do {
              if ((*(int *)(iVar4 + 0xc) == 0) ||
                 (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2 == 0)) {
                FUN_00984d5e();
              }
              iVar1 = *(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 4) * (int)param_2 * 4;
              if ((in_ECX[3] == 0) || ((int)(in_ECX[4] - in_ECX[3]) >> 2 == 0)) {
                FUN_00984d5e();
              }
              uVar2 = in_ECX[1];
              uVar3 = in_ECX[3];
              if ((puVar5[3] == 0) || ((int)(puVar5[4] - puVar5[3]) >> 2 == 0)) {
                FUN_00984d5e();
              }
              iVar6 = puVar5[1] * uVar7;
              uVar7 = uVar7 + 1;
              *(float *)(iVar1 + param_1 * 4) =
                   *(float *)(puVar5[3] + iVar6 * 4 + param_1 * 4) *
                   *(float *)(uVar3 + uVar2 * (int)param_2 * 4 + -4 + uVar7 * 4) +
                   *(float *)(iVar1 + param_1 * 4);
            } while (uVar7 < in_ECX[1]);
          }
          param_1 = param_1 + 1;
        } while (param_1 < puVar5[1]);
      }
      param_2 = (uint *)((int)param_2 + 1);
    } while (param_2 < *in_ECX);
  }
  return iVar4;
}



/* WARNING: Removing unreachable block (ram,0x005525b8) */

int FUN_00552530(int param_1,int *param_2)

{
  float *pfVar1;
  int *in_ECX;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  if ((*in_ECX != *param_2) || (in_ECX[1] != param_2[1])) {
    FUN_006ed6d0("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp",0x167);
  }
  FUN_00552240(*in_ECX,in_ECX[1]);
  pfVar3 = *(float **)(param_1 + 0xc);
  if (*(float **)(param_1 + 0x10) < pfVar3) {
    FUN_00984d5e();
  }
  pfVar4 = (float *)in_ECX[3];
  if ((float *)in_ECX[4] < pfVar4) {
    FUN_00984d5e();
  }
  pfVar2 = (float *)param_2[3];
  if ((float *)param_2[4] < pfVar2) {
    FUN_00984d5e();
  }
  while( true ) {
    pfVar1 = (float *)in_ECX[4];
    if (pfVar1 < (float *)in_ECX[3]) {
      FUN_00984d5e();
    }
    if (pfVar4 == pfVar1) break;
    if ((float *)in_ECX[4] <= pfVar4) {
      FUN_00984d5e();
    }
    if ((float *)param_2[4] <= pfVar2) {
      FUN_00984d5e();
    }
    if (*(float **)(param_1 + 0x10) <= pfVar3) {
      FUN_00984d5e();
    }
    *pfVar3 = *pfVar2 + *pfVar4;
    if ((float *)in_ECX[4] <= pfVar4) {
      FUN_00984d5e();
    }
    pfVar4 = pfVar4 + 1;
    if ((float *)param_2[4] <= pfVar2) {
      FUN_00984d5e();
    }
    pfVar2 = pfVar2 + 1;
    if (*(float **)(param_1 + 0x10) <= pfVar3) {
      FUN_00984d5e();
    }
    pfVar3 = pfVar3 + 1;
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x005526b8) */

int FUN_00552630(int param_1,int *param_2)

{
  float *pfVar1;
  int *in_ECX;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  
  if ((*in_ECX != *param_2) || (in_ECX[1] != param_2[1])) {
    FUN_006ed6d0("e:\\networkprojectspc\\oblivionse\\sdk\\facegen\\matrixVT.hpp",0x1c4);
  }
  FUN_00552240(*in_ECX,in_ECX[1]);
  pfVar3 = *(float **)(param_1 + 0xc);
  if (*(float **)(param_1 + 0x10) < pfVar3) {
    FUN_00984d5e();
  }
  pfVar4 = (float *)in_ECX[3];
  if ((float *)in_ECX[4] < pfVar4) {
    FUN_00984d5e();
  }
  pfVar2 = (float *)param_2[3];
  if ((float *)param_2[4] < pfVar2) {
    FUN_00984d5e();
  }
  while( true ) {
    pfVar1 = (float *)in_ECX[4];
    if (pfVar1 < (float *)in_ECX[3]) {
      FUN_00984d5e();
    }
    if (pfVar4 == pfVar1) break;
    if ((float *)in_ECX[4] <= pfVar4) {
      FUN_00984d5e();
    }
    if ((float *)param_2[4] <= pfVar2) {
      FUN_00984d5e();
    }
    if (*(float **)(param_1 + 0x10) <= pfVar3) {
      FUN_00984d5e();
    }
    *pfVar3 = *pfVar4 - *pfVar2;
    if ((float *)in_ECX[4] <= pfVar4) {
      FUN_00984d5e();
    }
    pfVar4 = pfVar4 + 1;
    if ((float *)param_2[4] <= pfVar2) {
      FUN_00984d5e();
    }
    pfVar2 = pfVar2 + 1;
    if (*(float **)(param_1 + 0x10) <= pfVar3) {
      FUN_00984d5e();
    }
    pfVar3 = pfVar3 + 1;
  }
  return param_1;
}



int FUN_00552730(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  FUN_00552240(in_ECX[1],*in_ECX);
  if (*in_ECX != 0) {
    do {
      uVar5 = 0;
      if (in_ECX[1] != 0) {
        do {
          if ((in_ECX[3] == 0) || ((int)(in_ECX[4] - in_ECX[3]) >> 2 == 0)) {
            FUN_00984d5e();
          }
          uVar1 = in_ECX[1];
          uVar2 = in_ECX[3];
          if ((*(int *)(param_1 + 0xc) == 0) ||
             (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 == 0)) {
            FUN_00984d5e();
          }
          iVar3 = *(int *)(param_1 + 4) * uVar5;
          uVar5 = uVar5 + 1;
          *(undefined4 *)(*(int *)(param_1 + 0xc) + iVar3 * 4 + uVar4 * 4) =
               *(undefined4 *)(uVar2 + uVar1 * uVar4 * 4 + -4 + uVar5 * 4);
        } while (uVar5 < in_ECX[1]);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *in_ECX);
  }
  return param_1;
}



void FUN_005527d0(void)

{
  uint uVar1;
  void *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbcde;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_(in_ECX,0x18,2,FUN_0043eb30,FUN_0043ace0);
  local_4 = 0;
  FUN_0043eb30(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_constructor_iterator_((void *)((int)in_ECX + 0x48),0x18,2,FUN_0043eb30,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552850(void)

{
  FUN_0043eb30();
  return;
}



void FUN_00552860(void)

{
  void *in_ECX;
  
  _eh_vector_constructor_iterator_(in_ECX,0x18,2,FUN_0043eb30,FUN_0043ace0);
  return;
}



void FUN_00552880(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = 0x32;
    param_1[1] = 1;
    FUN_00527160(0x32,0);
    param_1[6] = 0x1e;
    param_1[7] = 1;
    FUN_00527160(0x1e,0);
    param_1[0xc] = 0x32;
    param_1[0xd] = 1;
    FUN_00527160(0x32,0);
  }
  return;
}



void FaceGen_FallbackPopulator(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = param_1;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    iVar3 = (int)param_1 - param_2;
    piVar5 = (int *)(param_2 + 4);
    param_1 = (int *)0x2;
    do {
      iVar4 = 2;
      do {
        iVar1 = *piVar6;
        if ((iVar1 == 0) || (iVar2 = *(int *)(iVar3 + (int)piVar5), iVar2 == 0)) {
          piVar5[-1] = 0;
          *piVar5 = 0;
          FUN_00527160(0,0);
        }
        else {
          piVar5[-1] = iVar1;
          *piVar5 = iVar2;
          FUN_00527160(iVar1 * iVar2,0);
          FUN_005520e0(piVar6);
        }
        piVar6 = piVar6 + 6;
        piVar5 = piVar5 + 6;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      param_1 = (int *)((int)param_1 + -1);
    } while (param_1 != (int *)0x0);
  }
  return;
}



void FaceGen_SilentSkipLoop_TESRace_unk12
               (int param_1,int param_2,int param_3,char param_4,float param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  int local_30;
  undefined1 local_24 [12];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbd68;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffbc;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_3 != 0) {
    if (param_1 == 0) {
      param_1 = param_2;
      if (param_2 != 0) {
LAB_005529d7:
        FaceGen_FallbackPopulator(param_1,param_3,uVar3);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
    else {
      if (param_2 == 0) goto LAB_005529d7;
      iVar6 = 0;
      iVar5 = param_1 - param_3;
      do {
        piVar8 = (int *)(iVar6 * 0x30 + param_3);
        iVar7 = param_3 + 0x30;
        local_30 = 2;
        do {
          iVar1 = *(int *)(iVar5 + (int)piVar8);
          if ((iVar1 == 0) || (iVar2 = *(int *)(iVar5 + 4 + (int)piVar8), iVar2 == 0)) {
            *piVar8 = 0;
            piVar8[1] = 0;
            FUN_00527160(0,0);
          }
          else {
            *piVar8 = iVar1;
            piVar8[1] = iVar2;
            FUN_00527160(iVar1 * iVar2,0);
            if ((iVar6 == 1) && (param_4 != '\0')) {
              FUN_005520e0(iVar5 + iVar7);
              if (0.0 < param_5) {
                FUN_005511d0();
                fVar9 = (float10)FUN_00982c30();
                if (param_5 < (float)fVar9) {
                  FUN_00551d40(param_5 / (float)fVar9);
                }
              }
            }
            else {
              uVar4 = FUN_00552530(local_24,(int)piVar8 + (param_2 - param_1) + iVar5);
              local_4 = 0;
              FUN_005520e0(uVar4);
              local_4 = 0xffffffff;
              if (local_18 != 0) {
                FUN_00401f20(local_18);
              }
              local_18 = 0;
              local_14 = 0;
              local_10 = 0;
              if (0.0 < param_5) {
                FUN_005511d0();
                fVar9 = (float10)FUN_00982c30();
                if (param_5 < (float)fVar9) {
                  FUN_00551d40(param_5 / (float)fVar9);
                }
              }
            }
          }
          iVar7 = iVar7 + 0x18;
          piVar8 = piVar8 + 6;
          local_30 = local_30 + -1;
        } while (local_30 != 0);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552c10(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_2c;
  undefined1 local_24 [12];
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbd98;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  if (((param_1 != (int *)0x0) && (param_2 != 0)) && (param_3 != 0)) {
    iVar4 = (int)param_1 - param_3;
    piVar5 = (int *)(param_3 + 4);
    local_2c = 2;
    piVar6 = param_1;
    do {
      param_1 = (int *)0x2;
      do {
        iVar1 = *piVar6;
        if ((iVar1 == 0) || (iVar2 = *(int *)(iVar4 + (int)piVar5), iVar2 == 0)) {
          piVar5[-1] = 0;
          *piVar5 = 0;
          FUN_00527160(0,0);
        }
        else {
          piVar5[-1] = iVar1;
          *piVar5 = iVar2;
          FUN_00527160(iVar1 * iVar2,0);
          uVar3 = FUN_00552630(local_24,piVar6);
          local_4 = 0;
          FUN_005520e0(uVar3);
          local_4 = 0xffffffff;
          if (local_18 != 0) {
            FUN_00401f20(local_18);
          }
          local_18 = 0;
          local_14 = 0;
          local_10 = 0;
        }
        piVar6 = piVar6 + 6;
        piVar5 = piVar5 + 6;
        param_1 = (int *)((int)param_1 + -1);
      } while (param_1 != (int *)0x0);
      local_2c = local_2c + -1;
    } while (local_2c != 0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552d60(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x68) {
    _eh_vector_destructor_iterator_((void *)(param_1 + 8),0x18,4,FUN_0043ace0);
  }
  return;
}



void FUN_00552d90(void)

{
  undefined1 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbe06;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  _eh_vector_constructor_iterator_(in_ECX + 4,0x78,5,FUN_005527d0,FUN_00551f40);
  local_4 = 0;
  _eh_vector_constructor_iterator_(in_ECX + 0x25c,0x20,0x14,FUN_00552850,FUN_0043ace0);
  local_4._0_1_ = 1;
  _eh_vector_constructor_iterator_(in_ECX + 0x4dc,0x38,0x19,FUN_00552860,FUN_00551fd0);
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_constructor_iterator_(in_ECX + 0xa54,0x18,0x14,FUN_0043eb30,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552e50(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_005522b0(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00552e90(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00552d60(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00552ed0(void)

{
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bbe51;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_((void *)(in_ECX + 8),0x18,4,FUN_0043eb30,FUN_0043ace0);
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00552f40(void)

{
  uint uVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bbe86;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x7c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x7c),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    FUN_00552d60(*(int *)(in_ECX + 0x6c),*(undefined4 *)(in_ECX + 0x70));
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x6c),uVar1);
  }
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x70) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 8),0x18,4,FUN_0043ace0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00553000(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bbefe;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 5;
  if ((DAT_00b39b80 != 0) && (*(int *)(DAT_00b39b80 + 0xdac) != 0)) {
    FUN_0054f840(uVar2);
    if (*(undefined4 **)(DAT_00b39b80 + 0xdac) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(DAT_00b39b80 + 0xdac))(1);
    }
    *(undefined4 *)(DAT_00b39b80 + 0xdac) = 0;
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xdb8);
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xdb4);
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xdb0);
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4._0_1_ = 1;
  FUN_00551fe0();
  local_4 = (uint)local_4._1_3_ << 8;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 0x88),0x10,4,FUN_00552e50);
  local_4 = 0xffffffff;
  FUN_00552f40();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00553140(void)

{
  ushort *puVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  LONG LVar7;
  undefined4 *puVar8;
  int in_ECX;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  int local_34;
  int local_30;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bbf9f;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00552ed0(uVar4);
  local_4 = 0;
  _eh_vector_constructor_iterator_((void *)(in_ECX + 0x88),0x10,4,FUN_006ef4a0,FUN_00552e50);
  local_4._0_1_ = 1;
  FUN_00552d90();
  *(undefined4 *)(in_ECX + 0xdb0) = 0;
  *(undefined4 *)(in_ECX + 0xdb4) = 0;
  *(undefined4 *)(in_ECX + 0xdb8) = 0;
  local_4._0_1_ = 5;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  FUN_00414500("FaceGen\\si.ctl",0xe);
  local_4._0_1_ = 6;
  cVar3 = FUN_006ed850(local_28);
  local_4._0_1_ = 5;
  if (0xf < local_10) {
    FUN_00401f20(local_24);
  }
  if (cVar3 == '\0') {
    local_10 = 0xf;
    local_14 = 0;
    local_24 = local_24 & 0xffffff00;
    FUN_00414500("FaceGen\\si.ctl",0xe);
    local_4._0_1_ = 7;
    cVar3 = FUN_006ed850(local_28);
    local_4._0_1_ = 5;
    if (0xf < local_10) {
      FUN_00401f20(local_24);
    }
    if (cVar3 == '\0') {
      FUN_004a7a60("Unable to load CTL file");
    }
  }
  piVar12 = (int *)(in_ECX + 0x8c);
  iVar11 = in_ECX + 0x10;
  local_30 = 2;
  do {
    local_34 = 2;
    do {
      if (*piVar12 == 0) {
LAB_005532ef:
        *(undefined4 *)(iVar11 + -8) = 0;
        *(undefined4 *)(iVar11 + -4) = 0;
        iVar5 = 0;
LAB_005532fc:
        FUN_00527160(iVar5,0);
      }
      else {
        iVar9 = piVar12[1] - *piVar12;
        iVar5 = iVar9 >> 0x1f;
        iVar9 = iVar9 / 0x34 + iVar5;
        if (iVar9 == iVar5) goto LAB_005532ef;
        if (iVar9 == iVar5) {
          FUN_00984d5e();
        }
        piVar2 = (int *)*piVar12;
        if (piVar2 != (int *)0x0) {
          iVar5 = *piVar2;
          iVar9 = piVar2[1];
          *(int *)(iVar11 + -4) = iVar5;
          iVar5 = iVar5 * iVar9;
          *(int *)(iVar11 + -8) = iVar9;
          goto LAB_005532fc;
        }
      }
      piVar12 = piVar12 + 4;
      iVar11 = iVar11 + 0x18;
      local_34 = local_34 + -1;
    } while (local_34 != 0);
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      *(undefined4 *)(in_ECX + 0xdac) = 0;
      puVar6 = (undefined4 *)FUN_00401f00(0x1c);
      local_4._0_1_ = 8;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar6 = &PTR_FUN_00a3d604;
        *(undefined2 *)(puVar6 + 6) = 0xec;
        *(undefined1 *)((int)puVar6 + 0x1a) = 0;
      }
      puVar8 = *(undefined4 **)(in_ECX + 0xdb0);
      local_4._0_1_ = 5;
      if (puVar8 != puVar6) {
        if (puVar8 != (undefined4 *)0x0) {
          LVar7 = InterlockedDecrement(puVar8 + 1);
          if ((LVar7 == 0) && (puVar8 != (undefined4 *)0x0)) {
            (**(code **)*puVar8)(1);
          }
        }
        *(undefined4 **)(in_ECX + 0xdb0) = puVar6;
        if (puVar6 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar6 + 1);
        }
      }
      puVar1 = (ushort *)(*(int *)(in_ECX + 0xdb0) + 0x18);
      *puVar1 = *puVar1 | 0x200;
      *(ushort *)(*(int *)(in_ECX + 0xdb0) + 0x18) =
           *(ushort *)(*(int *)(in_ECX + 0xdb0) + 0x18) & 0xf3ff | 0x1000;
      *(undefined1 *)(*(int *)(in_ECX + 0xdb0) + 0x1a) = 100;
      iVar11 = FUN_00401f00(0x70);
      local_4._0_1_ = 9;
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_0070e560(0x20,0x20,&DAT_00b25e48,1,1);
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      puVar10 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
      iVar5 = 0x20;
      do {
        iVar9 = 0x20;
        do {
          puVar10[-2] = 0x80;
          puVar10[-1] = 0x80;
          *puVar10 = 0x80;
          puVar10 = puVar10 + 3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
      puVar8 = (undefined4 *)FUN_00701fc0(iVar11,&DAT_00b256d0);
      puVar6 = *(undefined4 **)(in_ECX + 0xdb4);
      if (puVar6 != puVar8) {
        if (puVar6 != (undefined4 *)0x0) {
          LVar7 = InterlockedDecrement(puVar6 + 1);
          if ((LVar7 == 0) && (puVar6 != (undefined4 *)0x0)) {
            (**(code **)*puVar6)(1);
          }
        }
        *(undefined4 **)(in_ECX + 0xdb4) = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar8 + 1);
        }
      }
      iVar11 = FUN_00401f00(0x70);
      local_4._0_1_ = 10;
      if (iVar11 == 0) {
        iVar11 = 0;
      }
      else {
        iVar11 = FUN_0070e560(0x20,0x20,&DAT_00b25e48,1,1);
      }
      local_4 = CONCAT31(local_4._1_3_,5);
      puVar10 = (undefined1 *)(**(int **)(iVar11 + 0x5c) + *(int *)(iVar11 + 0x50) + 2);
      iVar5 = 0x20;
      do {
        iVar9 = 0x20;
        do {
          puVar10[-2] = 0x40;
          puVar10[-1] = 0x40;
          *puVar10 = 0x40;
          puVar10 = puVar10 + 3;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      *(int *)(iVar11 + 0x68) = *(int *)(iVar11 + 0x68) + 1;
      puVar8 = (undefined4 *)FUN_00701fc0(iVar11,&DAT_00b256d0);
      puVar6 = *(undefined4 **)(in_ECX + 0xdb8);
      if (puVar6 != puVar8) {
        if (puVar6 != (undefined4 *)0x0) {
          LVar7 = InterlockedDecrement(puVar6 + 1);
          if ((LVar7 == 0) && (puVar6 != (undefined4 *)0x0)) {
            (**(code **)*puVar6)(1);
          }
        }
        *(undefined4 **)(in_ECX + 0xdb8) = puVar8;
        if (puVar8 != (undefined4 *)0x0) {
          InterlockedIncrement(puVar8 + 1);
        }
      }
      *unaff_FS_OFFSET = local_c;
      return;
    }
  } while( true );
}



void FUN_00553550(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b39b80 == 0) {
    local_10 = FUN_00401f00(0xdbc,uVar1);
    local_4 = 0;
    if (local_10 != 0) {
      DAT_00b39b80 = FUN_00553140();
      *unaff_FS_OFFSET = local_c;
      return;
    }
    DAT_00b39b80 = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00553600(void)

{
  if (DAT_00b39b80 == 0) {
    FUN_00553550();
  }
  return DAT_00b39b80;
}



undefined4 *
FUN_00553620(int param_1,undefined4 param_2,undefined4 param_3,int param_4,char param_5,
            undefined4 param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bbfde;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar5 = 0;
  local_10 = (undefined4 *)0x0;
  local_4 = 0;
  if ((param_1 == 0) && (param_4 == 0)) {
    *unaff_FS_OFFSET = local_c;
    return (undefined4 *)0x0;
  }
  if (DAT_00b39b80 == 0) {
    FUN_00553550(uVar2);
  }
  if (*(int *)(DAT_00b39b80 + 0xdac) == 0) {
    iVar3 = FUN_00401f00(0x20);
    local_4._0_1_ = 1;
    if (iVar3 != 0) {
      uVar5 = FUN_00551e80();
    }
    local_4 = (uint)local_4._1_3_ << 8;
    if (DAT_00b39b80 == 0) {
      FUN_00553550();
    }
    *(undefined4 *)(DAT_00b39b80 + 0xdac) = uVar5;
    *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x18) = DAT_00b120ec;
    FUN_005506b0(0);
    uVar5 = DAT_00b120f4;
    if (DAT_00b39b80 == 0) {
      FUN_00553550();
    }
    *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x1c) = uVar5;
    FUN_005506b0(0);
  }
  if (param_1 == 0) {
    puVar6 = (undefined4 *)0x0;
    if (param_4 == 0) {
LAB_005537ed:
      if (param_5 != '\0') {
        iVar3 = FUN_00401f00(0x1c);
        local_4._0_1_ = 2;
        if (iVar3 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_005564a0();
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0075fa90(uVar5);
        puVar6 = local_10;
        cVar1 = FUN_00559b50(param_1,param_2,param_3,param_4,param_6);
        if (cVar1 == '\0') {
          if (puVar6 != (undefined4 *)0x0) {
            LVar4 = InterlockedDecrement(puVar6 + 1);
            if (LVar4 == 0) {
              (**(code **)*puVar6)(1);
            }
            puVar6 = (undefined4 *)0x0;
          }
        }
        else {
          if (param_1 == 0) {
            param_1 = param_4;
          }
          if (DAT_00b39b80 == 0) {
            FUN_00553550();
          }
          FUN_00551450(param_1,puVar6);
        }
      }
      local_4 = 0xffffffff;
      if ((puVar6 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(puVar6 + 1), LVar4 == 0)) {
        (**(code **)*puVar6)(1);
      }
      *unaff_FS_OFFSET = local_c;
      return puVar6;
    }
    if (DAT_00b39b80 == 0) {
      FUN_00553550(uVar2);
    }
    cVar1 = FUN_005515b0(param_4,&local_10);
    puVar6 = local_10;
    if (cVar1 == '\0') goto LAB_005537ed;
    if (local_10[2] != 0) goto LAB_0055376b;
    param_1 = 0;
  }
  else {
    if (DAT_00b39b80 == 0) {
      FUN_00553550(uVar2);
    }
    cVar1 = FUN_005515b0(param_1,&local_10);
    puVar6 = local_10;
    if (cVar1 == '\0') goto LAB_005537ed;
    if (local_10[2] != 0) goto LAB_0055376b;
  }
  puVar6 = local_10;
  FUN_00559b50(param_1,param_2,param_3,param_4,param_6);
LAB_0055376b:
  local_4 = 0xffffffff;
  LVar4 = InterlockedDecrement(puVar6 + 1);
  if (LVar4 == 0) {
    (**(code **)*puVar6)(1);
  }
  *unaff_FS_OFFSET = local_c;
  return puVar6;
}



int FaceGen_DefaultGetter(void)

{
  if (DAT_00b39b80 == 0) {
    FUN_00553550();
  }
  return DAT_00b39b80 + 8;
}



float10 FUN_005538f0(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  float local_1c;
  undefined1 local_18 [12];
  int local_c;
  
  local_1c = 0.0;
  if (param_1 == 0) {
    return (float10)0.0;
  }
  if (DAT_00b39b80 == 0) {
    FUN_00553550();
  }
  param_3 = param_3 + param_2 * 2;
  iVar2 = param_3 * 0x10;
  iVar1 = *(int *)(iVar2 + 0x8c + DAT_00b39b80);
  if (iVar1 != 0) {
    if (param_4 < (uint)((*(int *)(iVar2 + 0x90 + DAT_00b39b80) - iVar1) / 0x34)) {
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      param_1 = param_1 + param_3 * 0x18;
      puVar3 = local_18;
      FUN_0054f6c0(param_4);
      iVar1 = FUN_005523c0(puVar3,param_1);
      if ((*(int *)(iVar1 + 0xc) == 0) || (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc) >> 2 == 0)
         ) {
        FUN_00984d5e();
      }
      local_1c = **(float **)(iVar1 + 0xc);
      if (local_c != 0) {
        FUN_00401f20(local_c);
      }
    }
    return (float10)local_1c;
  }
  return (float10)0.0;
}



void FUN_005539e0(int param_1,int param_2,int param_3,uint param_4,float param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_FS_OFFSET;
  float10 fVar5;
  undefined1 *puVar6;
  undefined1 local_3c [12];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [12];
  int local_18;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc010;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    if (DAT_00b39b80 == 0) {
      FUN_00553550(uVar2);
    }
    iVar4 = (param_3 + param_2 * 2) * 0x10;
    iVar1 = *(int *)(iVar4 + 0x8c + DAT_00b39b80);
    if (iVar1 != 0) {
      if (param_4 < (uint)((*(int *)(iVar4 + 0x90 + DAT_00b39b80) - iVar1) / 0x34)) {
        fVar5 = (float10)FUN_005538f0(param_1,param_2,param_3,param_4);
        if (DAT_00b39b80 == 0) {
          FUN_00553550(uVar2);
        }
        puVar6 = local_24;
        FUN_0054f6c0(param_4);
        FUN_00552730(puVar6);
        local_4 = 0;
        uVar3 = FUN_00552310(local_3c,param_5 - (float)fVar5);
        local_4 = CONCAT31(local_4._1_3_,1);
        FUN_00551da0(uVar3);
        if (local_30 != 0) {
          FUN_00401f20(local_30);
        }
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        if (local_18 != 0) {
          FUN_00401f20(local_18);
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00553b30(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_00b39b80 == 0) {
    FUN_00553550();
  }
  FUN_006edd30(0,param_2,param_3,param_1);
  return;
}



void FUN_00553b70(undefined4 param_1,int param_2,int param_3)

{
  if ((param_3 != 0) && (param_2 != 0)) {
    if (DAT_00b39b80 == 0) {
      FUN_00553550();
    }
    FUN_006ee010(param_1,param_2,param_3);
  }
  return;
}



void FUN_00553bb0(int *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  int *piVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  undefined4 *puStack_dc;
  int iStack_d8;
  undefined2 uStack_d4;
  undefined2 uStack_d2;
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  uint local_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined2 uStack_b2;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  uint local_a8;
  int *local_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined4 uStack_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined4 *puStack_90;
  int aiStack_8c [2];
  undefined1 uStack_84;
  undefined1 auStack_80 [4];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [96];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bc0a3;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffff14;
  *unaff_FS_OFFSET = (int)&local_c;
  local_c8 = 0;
  local_a8 = 0;
  if (*(short *)((int)param_1 + 0xb6) != 0) {
    do {
      if ((local_a8 < *(ushort *)((int)param_1 + 0xb6)) &&
         (local_a4 = *(int **)(param_1[0x2c] + local_a8 * 4), local_a4 != (int *)0x0)) {
        iVar9 = 0xc;
        bVar13 = true;
        pcVar10 = (char *)local_a4[2];
        pcVar11 = "FaceGenFace";
        do {
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          bVar13 = *pcVar10 == *pcVar11;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        } while (bVar13);
        if (bVar13) {
          uVar4 = (**(code **)(*local_a4 + 0x10))(uVar3);
          piVar5 = (int *)FUN_00550790(uVar4);
          if (piVar5 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = (**(code **)(*piVar5 + 0x54))();
          }
          puStack_dc = (undefined4 *)0x0;
          uStack_d0 = 0;
          uStack_cc = 0;
          uStack_ca = 0;
          iStack_d8 = 0;
          uStack_d4 = 0;
          uStack_d2 = 0;
          uStack_b8 = 0;
          uStack_b4 = 0;
          uStack_b2 = 0;
          uStack_b0 = 0;
          uStack_ac = 0;
          uStack_aa = 0;
          uStack_c0 = 0;
          uStack_bc = 0;
          uStack_ba = 0;
          uStack_98 = 0;
          uStack_94 = 0;
          uStack_92 = 0;
          uStack_4._0_1_ = 6;
          uStack_4._1_3_ = 0;
          _eh_vector_constructor_iterator_(auStack_6c,0x18,4,FUN_0043eb30,FUN_0043ace0);
          uStack_4 = CONCAT31(uStack_4._1_3_,7);
          if (DAT_00b39b80 == 0) {
            FUN_00553550();
          }
          FaceGen_FallbackPopulator(DAT_00b39b80 + 8,auStack_6c);
          puVar7 = *(undefined4 **)(iVar9 + 8);
          if (puVar7 == (undefined4 *)0x0) {
            FUN_00401f20(0);
            local_c8 = local_c8 | 1;
            uStack_a0 = 0;
            uStack_9a = 0;
            uStack_9c = 0;
            puVar7 = &uStack_a0;
          }
          uVar4 = *puVar7;
          if ((local_c8 & 1) != 0) {
            local_c8 = local_c8 & 0xfffffffe;
            FUN_00401f20(uStack_a0);
            uStack_a0 = 0;
            uStack_9a = 0;
            uStack_9c = 0;
          }
          FUN_0054ff60(&uStack_d0,uVar4);
          if (param_2 == 0) {
            FUN_00551b40(&iStack_d8,uStack_d0);
LAB_00553da2:
            if (((iStack_d8 == 0) || (DAT_00b33a04 == (int *)0x0)) ||
               (iVar6 = (**(code **)(*DAT_00b33a04 + 4))(iStack_d8,0,0,0xffffffff),
               iVar9 = iStack_d8, iVar6 == 0)) goto LAB_005541c0;
            uVar4 = FUN_005500c0(&uStack_c0,iStack_d8,1,0);
            uVar4 = FUN_00550010(&uStack_b0,iVar9,uVar4);
            uVar4 = FUN_0054feb0(&uStack_b8,iVar9,iVar9,uVar4);
            puVar7 = (undefined4 *)FUN_00553620(uVar4);
            puStack_90 = puVar7;
            if (puVar7 != (undefined4 *)0x0) {
              InterlockedIncrement(puVar7 + 1);
            }
            uStack_4._0_1_ = 8;
            cVar1 = FUN_00559870(auStack_6c,&puStack_dc);
            if ((cVar1 != '\0') && (puStack_dc != (undefined4 *)0x0)) {
              FUN_006ff420("FaceGenFace");
              puVar7 = puStack_dc;
              puStack_dc[0x15] = local_a4[0x15];
              puStack_dc[0x16] = local_a4[0x16];
              puStack_dc[0x17] = local_a4[0x17];
              piVar5 = local_a4 + 0xc;
              piVar12 = puStack_dc + 0xc;
              for (iVar9 = 9; iVar9 != 0; iVar9 = iVar9 + -1) {
                *piVar12 = *piVar5;
                piVar5 = piVar5 + 1;
                piVar12 = piVar12 + 1;
              }
              fStack_c4 = ABS((float)local_a4[0x18]);
              puStack_dc[0x18] = fStack_c4;
              if (DAT_00b42ea5 == '\0') {
                uVar4 = 0xe;
              }
              else {
                uVar4 = 0x1a;
              }
              FUN_007b8940(puStack_dc,uVar4,1,1);
              iVar9 = FUN_00707530(4);
              FUN_00707530(4);
              FUN_00478b90();
              uStack_4 = CONCAT31(uStack_4._1_3_,9);
              uVar4 = FUN_00700610(auStack_7c);
              FUN_00550430(*(undefined4 *)(iVar9 + 0xd4));
              FUN_004a1220(iVar9);
              FUN_00405680(uVar4);
              FUN_004ec910(local_a4[0x2f]);
              uVar2 = (**(code **)(*(int *)puVar7[0x2d] + 0x50))();
              cVar1 = FUN_00728ab0(1);
              if (cVar1 != '\0') {
                aiStack_8c[0] = 0;
                aiStack_8c[1] = 0;
                uStack_84 = 0;
                FUN_00728b60(aiStack_8c);
                if (aiStack_8c[0] != 0) {
                  FUN_00550a30(puVar7[0x2d] + 0xc,aiStack_8c,uVar2);
                }
              }
              iVar9 = FUN_00707530(2);
              if ((iVar9 != 0) && (fStack_c4 = *(float *)(iVar9 + 0x4c), fStack_c4 < 1.0)) {
                *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 1;
                *(undefined4 *)(iVar9 + 0x4c) = 0x40800000;
              }
              (**(code **)(*param_1 + 0x90))(auStack_80,local_a8,puVar7);
              FUN_007016a0();
              FUN_00707610();
              FUN_00707980();
              (**(code **)(*param_1 + 0xc4))(param_1[7],0);
              if (param_2 == 0) {
                *(undefined1 *)(param_1 + 0x44) = 1;
              }
              else if (param_2 == 1) {
                *(undefined1 *)(param_1 + 0x44) = 0;
              }
              uStack_4._0_1_ = 8;
              FUN_004781a0();
              uStack_4._0_1_ = 7;
              FUN_007016a0();
              uStack_4 = CONCAT31(uStack_4._1_3_,6);
              _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
              FUN_00401f20(0);
              uStack_98 = 0;
              uStack_92 = 0;
              uStack_94 = 0;
              FUN_00401f20(uStack_c0);
              uStack_c0 = 0;
              uStack_ba = 0;
              uStack_bc = 0;
              FUN_00401f20(uStack_b0);
              uStack_b0 = 0;
              uStack_aa = 0;
              uStack_ac = 0;
              FUN_00401f20(uStack_b8);
              uStack_b8 = 0;
              uStack_b2 = 0;
              uStack_b4 = 0;
              FUN_00401f20(iStack_d8);
              iStack_d8 = 0;
              uStack_d2 = 0;
              uStack_d4 = 0;
              FUN_00401f20(uStack_d0);
              uStack_d0 = 0;
              uStack_ca = 0;
              uStack_cc = 0;
              uStack_4 = 0xffffffff;
              FUN_007016a0();
              goto LAB_00554109;
            }
            uStack_4._0_1_ = 7;
            if ((puVar7 != (undefined4 *)0x0) &&
               (LVar8 = InterlockedDecrement(puVar7 + 1), LVar8 == 0)) {
              (**(code **)*puVar7)(1);
            }
            uStack_4 = CONCAT31(uStack_4._1_3_,6);
            _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
            FUN_00401f20(0);
            FUN_00401f20(uStack_c0);
            FUN_00401f20(uStack_b0);
            FUN_00401f20(uStack_b8);
            FUN_00401f20(iVar9);
            FUN_00401f20(uStack_d0);
            puVar7 = puStack_dc;
            uStack_4 = 0xffffffff;
            if (puStack_dc == (undefined4 *)0x0) break;
            iVar9 = InterlockedDecrement(puStack_dc + 1);
          }
          else {
            if (param_2 == 1) {
              FUN_00550170(&iStack_d8,uStack_d0);
              goto LAB_00553da2;
            }
LAB_005541c0:
            uStack_4 = CONCAT31(uStack_4._1_3_,6);
            _eh_vector_destructor_iterator_(auStack_6c,0x18,4,FUN_0043ace0);
            FUN_00401f20(0);
            FUN_00401f20(0);
            FUN_00401f20(0);
            FUN_00401f20(0);
            FUN_00401f20(iStack_d8);
            FUN_00401f20(uStack_d0);
            puVar7 = puStack_dc;
            uStack_4 = 0xffffffff;
            if (puStack_dc == (undefined4 *)0x0) break;
            iVar9 = InterlockedDecrement(puStack_dc + 1);
          }
          if ((iVar9 == 0) && (puVar7 != (undefined4 *)0x0)) {
            (**(code **)*puVar7)(1);
          }
          break;
        }
      }
LAB_00554109:
      local_a8 = local_a8 + 1;
    } while (local_a8 < *(ushort *)((int)param_1 + 0xb6));
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00554260(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  LONG LVar7;
  int *piVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *unaff_FS_OFFSET;
  undefined4 *local_68;
  undefined4 *puStack_64;
  undefined4 *local_60;
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
  
  puStack_8 = &LAB_009bc139;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffff88;
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
  local_60 = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  local_4 = 6;
  uStack_3 = 0;
  FUN_0070fd80(0xbfc90fdb);
  puVar10 = param_3;
  if (param_3[0x18] == 0) goto LAB_0055475c;
  uVar3 = (**(code **)(*(int *)(param_3[0x18] + 0x24) + 0x14))(uVar2);
  FUN_00402e30(&local_58,"Meshes\\%s",uVar3);
  uVar3 = local_58;
  uVar4 = FUN_00550010(&local_50,local_58);
  iVar5 = FUN_0054feb0(&local_48,uVar3);
  puStack_64 = (undefined4 *)0x0;
  local_4 = 7;
  if (iVar5 == 0) {
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
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_00551e80();
      }
      local_4 = 7;
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
    cVar1 = FUN_005515b0(iVar5,&puStack_64);
    puVar10 = puStack_64;
    if (cVar1 == '\0') {
      iStack_5c = FUN_00401f00(0x1c);
      local_4 = 9;
      if (iStack_5c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_005564a0();
      }
      _local_4 = CONCAT31(uStack_3,7);
      FUN_0075fa90(uVar3);
      puVar9 = puStack_64;
      cVar1 = FUN_00559b50(iVar5,local_58,uVar4,0,1);
      if (cVar1 == '\0') {
        if (puVar9 != (undefined4 *)0x0) {
          LVar7 = InterlockedDecrement(puVar9 + 1);
          if (LVar7 == 0) {
            (**(code **)*puVar9)(1);
          }
          puVar9 = (undefined4 *)0x0;
        }
      }
      else {
        if (DAT_00b39b80 == 0) {
          FUN_00553550();
        }
        FUN_00551450(iVar5,puVar9);
      }
      local_4 = 6;
      puVar10 = param_3;
      if (puVar9 == (undefined4 *)0x0) goto LAB_00554527;
      LVar7 = InterlockedDecrement(puVar9 + 1);
      if (LVar7 == 0) {
        (**(code **)*puVar9)(1);
      }
    }
    else {
      if (puStack_64[2] == 0) {
        FUN_00559b50(iVar5,local_58,uVar4,0,1);
      }
      local_4 = 6;
      LVar7 = InterlockedDecrement(puVar10 + 1);
      if (LVar7 == 0) {
        (**(code **)*puVar10)(1);
      }
    }
    FUN_00559870(param_3,&local_68);
    puVar10 = param_3;
  }
LAB_00554527:
  if (local_68 == (undefined4 *)0x0) goto LAB_0055475c;
  FUN_006ff420("FaceGenHair");
  FUN_00550980(local_68,puVar10[0x1a]);
  puVar6 = *(undefined1 **)(puVar10[0x18] + 0x40);
  if (puVar6 == (undefined1 *)0x0) {
    puVar6 = &DAT_00a2f7ec;
  }
  FUN_00402e30(&local_58,"Textures\\%s",puVar6);
  uVar3 = FUN_00442890(&param_3,local_58,0,0);
  local_4 = 10;
  FUN_0055e2a0(uVar3);
  puVar10 = param_3;
  local_4 = 6;
  if (((param_3 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(param_3 + 1), LVar7 == 0)) &&
     (puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  puVar10 = local_60;
  if (local_60 != (undefined4 *)0x0) {
    param_3 = (undefined4 *)FUN_00401f00(0x30);
    local_4 = 0xb;
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
    iVar5 = FUN_00707530(6);
    if (iVar5 != 0) {
      FUN_00708560(&param_3,6);
      FUN_007016a0();
    }
    FUN_00405680(uVar3);
  }
  iVar5 = FUN_00707530(0);
  if (iVar5 == 0) {
    uVar3 = FUN_00550550();
    FUN_00405680(uVar3);
  }
  if (local_68[0x2e] == 0) {
    puVar9 = local_30;
    puVar11 = local_68 + 0xc;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar11 = puVar11 + 1;
    }
    piVar8 = (int *)*param_1;
LAB_005546fc:
    (**(code **)(*piVar8 + 0x84))(local_68,0);
  }
  else {
    if (param_4 != '\0') {
      FUN_00478350(0);
      local_68[0x15] = DAT_00b3f9a8;
      local_68[0x16] = DAT_00b3f9ac;
      local_68[0x17] = DAT_00b3f9b0;
      puVar9 = local_30;
      puVar11 = local_68 + 0xc;
      for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar11 = puVar11 + 1;
      }
      piVar8 = (int *)*param_1;
      goto LAB_005546fc;
    }
    (**(code **)(*(int *)*param_2 + 0x84))(local_68,0);
  }
  puVar9 = local_68;
  if (local_68 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(local_68 + 1);
    if ((LVar7 == 0) && (puVar9 != (undefined4 *)0x0)) {
      (**(code **)*puVar9)(1);
    }
    local_68 = (undefined4 *)0x0;
  }
  if (puVar10 != (undefined4 *)0x0) {
    LVar7 = InterlockedDecrement(puVar10 + 1);
    if (LVar7 == 0) {
      (**(code **)*puVar10)(1);
    }
    local_60 = (undefined4 *)0x0;
  }
LAB_0055475c:
  puVar10 = local_68;
  local_4 = 5;
  if (((local_68 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_68 + 1), LVar7 == 0))
     && (puVar10 != (undefined4 *)0x0)) {
    (**(code **)*puVar10)(1);
  }
  puVar10 = local_60;
  _local_4 = CONCAT31(uStack_3,4);
  if ((local_60 != (undefined4 *)0x0) && (LVar7 = InterlockedDecrement(local_60 + 1), LVar7 == 0)) {
    (**(code **)*puVar10)(1);
  }
  FUN_00401f20(0);
  FUN_00401f20(0);
  FUN_00401f20(local_50);
  FUN_00401f20(local_48);
  FUN_00401f20(local_58);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FaceGen_SetEyeRefs_AVSite
               (undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,char param_4)

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



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void BSFaceGen_DoSomething(int *param_1,int param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  LONG LVar11;
  uint uVar12;
  int *unaff_FS_OFFSET;
  bool bVar13;
  float10 fVar14;
  longlong lVar15;
  float fStack_84;
  int local_80;
  int local_7c;
  undefined4 *local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined4 *local_68;
  undefined4 *local_64;
  uint local_60;
  float local_5c;
  int *piStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined2 local_40;
  undefined2 local_3e;
  int *local_3c;
  undefined4 local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc299;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_84;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_6c = 0;
  local_3c = param_1;
  local_80 = param_2;
  local_28 = 0;
  local_24 = 0;
  local_22 = 0;
  local_18 = 0;
  local_14 = 0;
  local_12 = 0;
  local_20 = 0;
  local_1c = 0;
  local_1a = 0;
  local_44 = 0;
  local_40 = 0;
  local_3e = 0;
  local_74 = 0;
  local_70 = 0;
  local_64 = (undefined4 *)0x0;
  local_78 = (undefined4 *)0x0;
  local_68 = (undefined4 *)0x0;
  local_4 = 7;
  local_7c = 0;
  if ((param_1 == (int *)0x0) || (param_2 == 0)) {
    uVar4 = 0;
    FUN_00401f20();
    lVar15 = (ulonglong)uVar4 << 0x20;
  }
  else {
    if (DAT_00b39b80 == 0) {
      FUN_00553550(uVar4);
    }
    fVar14 = (float10)FUN_006edd30(0,0,0,param_2);
    local_5c = (float)fVar14;
    FUN_00985a00((double)local_5c);
    uVar3 = FUN_009828c0();
    local_38 = CONCAT31(local_38._1_3_,uVar3);
    local_60 = 0;
    do {
      uVar4 = local_60;
      FUN_004028d0(&DAT_00a2f7ec,0);
      iVar7 = local_80;
      uVar12 = local_60;
      if (uVar4 == 2) {
        if (*(int *)(param_2 + 0x70) != 0) {
LAB_00555327:
          local_7c = 0xe;
LAB_0055532f:
          iVar8 = uVar4 * 4;
          iVar7 = local_80;
          uVar12 = local_60;
          if ((((*(int *)(iVar8 + *(int *)(param_2 + 0x78)) != 0) &&
               (*(int *)(iVar8 + *(int *)(param_2 + 0x88)) != 0)) &&
              (piStack_58 = (int *)(**(code **)(*local_3c + 0x58))(), iVar7 = local_80,
              uVar12 = local_60, piStack_58 != (int *)0x0)) &&
             ((iVar5 = (**(code **)(*piStack_58 + 0x10))(), iVar7 = local_80, uVar12 = local_60,
              iVar5 != 0 &&
              (iVar5 = FUN_005507e0(), iVar7 = local_80, uVar12 = local_60, iVar5 != 0)))) {
            FUN_007b8940(piStack_58,local_7c,1);
            piVar6 = (int *)FUN_00707530();
            if ((piVar6 == (int *)0x0) ||
               ((iVar7 = (**(code **)(*piVar6 + 0x54))(), iVar7 < 5 ||
                (iVar7 = (**(code **)(*piVar6 + 0x54))(), 10 < iVar7)))) {
              bVar1 = 0;
            }
            else {
              bVar1 = 1;
            }
            piVar6 = (int *)(-(uint)bVar1 & (uint)piVar6);
            iVar7 = local_80;
            uVar12 = local_60;
            if (piVar6 != (int *)0x0) {
              if ((*(short *)(local_80 + 0xae) != 0) && (*(char *)(local_80 + 0xb4) != '\0')) {
                FUN_0055e2a0();
              }
              if (((local_60 == 0) && (-1 < (char)local_38)) &&
                 (iVar5 = FUN_00551a00(&local_44,*(undefined4 *)(local_80 + 0x70),local_38),
                 iVar7 = local_80, iVar5 != 0)) {
                if ((*(short *)(local_80 + 0xae) == 0) || (**(int **)(local_80 + 0xa8) == 0)) {
                  FUN_0043f2e0();
                  FUN_00557e60(iVar7,&local_78,0);
                  FUN_0043f300();
                }
                FUN_00442890(auStack_34,local_44,0,0);
                local_4._0_1_ = 8;
                FUN_0075fa90();
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_007016a0();
                FUN_0046ff20(&local_74);
              }
              else {
                if ((*(short *)(local_80 + 0xae) == 0) ||
                   (*(int *)(iVar8 + *(int *)(local_80 + 0xa8)) == 0)) {
                  FUN_0043f2e0();
                  FUN_00557e60(local_80,&local_78,0);
                  FUN_0043f300();
                }
                (**(code **)(**(int **)(iVar8 + *(int *)(local_80 + 0x88)) + 0x10))();
                iVar7 = local_80;
              }
              if (local_74 != 0) {
                FUN_00442890(auStack_30,local_74,1,0);
                local_4._0_1_ = 9;
                FUN_0055e2a0();
                local_4 = CONCAT31(local_4._1_3_,7);
                FUN_007016a0();
              }
              if (local_64 == (undefined4 *)0x0) {
                iVar8 = (**(code **)(*piVar6 + 0x8c))();
                if (iVar8 == 0) {
                  (**(code **)(*piVar6 + 0x84))(0);
                }
              }
              else {
                (**(code **)(*piVar6 + 0x84))(0);
                iVar8 = FUN_0054f7d0();
                iVar8 = *(int *)(iVar8 + 4);
                if (((iVar8 == 5) || (iVar8 == 6)) ||
                   (local_5c = (float)((uint)local_5c & 0xffffff00), iVar8 == 1)) {
                  local_5c = (float)CONCAT31(local_5c._1_3_,1);
                }
                FUN_00434980(1,local_5c);
              }
              if ((*(char *)(iVar7 + 0xb4) != '\0') && (local_7c == 0xe)) {
                (**(code **)(*piVar6 + 0x80))(1);
                if (local_70 == 0) {
                  uVar9 = FUN_004783a0();
                  piVar10 = (int *)FUN_00405070(uVar9);
                  local_74 = local_74 | 1;
                  local_c = CONCAT31(local_c._1_3_,10);
                }
                else {
                  piVar10 = &local_70;
                }
                (**(code **)(*piVar6 + 0x84))(1,*piVar10);
                local_4 = 7;
                if ((local_6c & 1) != 0) {
                  local_6c = local_6c & 0xfffffffe;
                  FUN_007016a0();
                }
                piVar6[7] = piVar6[7] | 0x400;
                piVar6[9] = 0;
                iVar7 = FUN_00707530();
                if ((iVar7 != 0) && (fStack_84 = *(float *)(iVar7 + 0x4c), fStack_84 < 1.0)) {
                  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
                  *(undefined4 *)(iVar7 + 0x4c) = 0x40800000;
                }
              }
              FUN_0075fa90();
              FUN_0055e2a0();
              FUN_0075fa90();
              FUN_00551140();
              iVar7 = local_80;
              uVar12 = local_60;
            }
          }
        }
      }
      else if (uVar4 == 1) {
        iVar7 = param_2;
        uVar12 = uVar4;
        if (*(int *)(param_2 + 0x70) != 1) goto LAB_00555327;
      }
      else if ((uVar4 != 7) && (uVar4 != 8)) {
        local_7c = 1;
        if (uVar4 == 0) goto LAB_00555327;
        goto LAB_0055532f;
      }
      piVar6 = local_3c;
      local_60 = uVar12 + 1;
      param_2 = iVar7;
    } while (local_60 < 9);
    iVar7 = (**(code **)(*local_3c + 0x58))();
    if (iVar7 != 0) {
      iVar8 = FUN_00707530(6);
      if ((iVar8 != 0) && (DAT_00b120e4 != '\0')) {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfff7 | 6;
      }
      FUN_007b8940(iVar7,1,1,1);
      FUN_00551140(iVar7,local_80);
    }
    iVar7 = (**(code **)(*piVar6 + 0x58))("FaceGenEyeRight");
    if (iVar7 != 0) {
      iVar8 = FUN_00707530(6);
      if ((iVar8 != 0) && (DAT_00b120e4 != '\0')) {
        *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfff7 | 6;
      }
      FUN_007b8940(iVar7,1,1,1);
      FUN_00551140(iVar7,fStack_84);
    }
    iVar7 = (**(code **)(*piVar6 + 0x58))("FaceGenHair");
    if (iVar7 != 0) {
      FUN_007b8940(iVar7,1,1);
      piVar6 = (int *)FUN_00707530();
      if (piVar6 == (int *)0x0) {
        bVar13 = false;
      }
      else {
        iVar7 = (**(code **)(*piVar6 + 0x54))();
        bVar13 = iVar7 == 5;
      }
      uVar4 = -(uint)bVar13 & (uint)piVar6;
      if (uVar4 == 0) {
        if (piVar6 == (int *)0x0) {
          bVar13 = false;
        }
        else {
          iVar7 = (**(code **)(*piVar6 + 0x54))();
          bVar13 = iVar7 == 10;
        }
        uVar4 = -(uint)bVar13 & (uint)piVar6;
        if (uVar4 != 0) {
          uVar12 = *(uint *)(local_80 + 100);
          fStack_54 = (float)(uVar12 & 0xff) / 255.0;
          fStack_84 = (float)(uVar12 >> 0x10 & 0xff);
          *(float *)(uVar4 + 0xf0) = fStack_54;
          fStack_50 = (float)(uVar12 >> 8 & 0xff) / 255.0;
          *(float *)(uVar4 + 0xf4) = fStack_50;
          fStack_4c = (float)(int)fStack_84 / 255.0;
          uStack_48 = 0x3f800000;
          *(float *)(uVar4 + 0xf8) = fStack_4c;
          *(undefined4 *)(uVar4 + 0xfc) = 0x3f800000;
        }
      }
      else {
        uVar12 = *(uint *)(local_80 + 100);
        fStack_54 = (float)(uVar12 & 0xff) / 255.0;
        fStack_84 = (float)(uVar12 >> 0x10 & 0xff);
        *(float *)(uVar4 + 0xa8) = fStack_54;
        fStack_50 = (float)(uVar12 >> 8 & 0xff) / 255.0;
        *(float *)(uVar4 + 0xac) = fStack_50;
        fStack_4c = (float)(int)fStack_84 / 255.0;
        uStack_48 = 0x3f800000;
        *(float *)(uVar4 + 0xb0) = fStack_4c;
        *(undefined4 *)(uVar4 + 0xb4) = 0x3f800000;
      }
    }
    FUN_00707610();
    FUN_00707370(0,0);
    puVar2 = local_68;
    local_4._0_1_ = 6;
    if (((local_68 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(local_68 + 1), LVar11 == 0)) && (puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)();
    }
    puVar2 = local_78;
    local_4._0_1_ = 5;
    if (((local_78 != (undefined4 *)0x0) &&
        (LVar11 = InterlockedDecrement(local_78 + 1), LVar11 == 0)) && (puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)();
    }
    puVar2 = local_64;
    local_4 = CONCAT31(local_4._1_3_,4);
    if ((local_64 != (undefined4 *)0x0) &&
       (LVar11 = InterlockedDecrement(local_64 + 1), LVar11 == 0)) {
      (**(code **)*puVar2)();
    }
    FUN_00401f20();
    lVar15 = CONCAT44(local_74,local_44);
  }
  local_74 = 0;
  local_70 = 0;
  FUN_00401f20(lVar15);
  FUN_00401f20(0);
  FUN_00401f20(0);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00555a00(undefined4 param_1,int param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  float10 fVar2;
  float local_8 [2];
  
  iVar1 = 0;
  do {
    if (iVar1 == param_2) {
      fVar2 = (float10)param_4;
    }
    else {
      if (DAT_00b39b80 == 0) {
        FUN_00553550();
      }
      fVar2 = (float10)FUN_006edd30(0,iVar1,param_3,param_1);
    }
    local_8[iVar1] = (float)fVar2;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (DAT_00b39b80 == 0) {
    FUN_00553550();
  }
  FUN_006ede10(0,param_3,local_8,param_1);
  return;
}



undefined4
FaceGen_HelperToOutStateMachine
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  char *pcVar1;
  ushort uVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  LONG LVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  int *unaff_FS_OFFSET;
  bool bVar16;
  undefined4 *local_88;
  uint local_84;
  undefined4 *local_80;
  undefined4 *local_7c;
  undefined4 *local_78;
  undefined4 *local_74;
  undefined1 auStack_70 [4];
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [4];
  int iStack_64;
  undefined4 local_60;
  undefined2 local_5c;
  undefined2 local_5a;
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
  int local_4;
  
  puStack_8 = &LAB_009bc34f;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  local_80 = (undefined4 *)0x0;
  local_7c = (undefined4 *)0x0;
  local_88 = (undefined4 *)0x0;
  uVar13 = 0;
  local_78 = (undefined4 *)0x0;
  local_74 = (undefined4 *)0x0;
  local_60 = 0;
  local_5c = 0;
  local_5a = 0;
  local_50 = 0;
  local_4c = 0;
  local_4a = 0;
  local_58 = 0;
  local_54 = 0;
  local_52 = 0;
  local_40 = 0;
  local_3c = 0;
  local_3a = 0;
  local_38 = 0;
  local_34 = 0;
  local_32 = 0;
  local_48 = 0;
  local_44 = 0;
  local_42 = 0;
  local_4._0_1_ = 7;
  local_4._1_3_ = 0;
  FUN_0070fd80(0xbfc90fdb);
  local_84 = 0;
  do {
    uVar12 = local_84;
    if (local_84 == 2) {
      bVar16 = *(int *)(param_3 + 0x70) == 0;
LAB_00555b60:
      if (!bVar16) goto LAB_00555b66;
    }
    else {
      if (local_84 == 1) {
        bVar16 = *(int *)(param_3 + 0x70) == 1;
        goto LAB_00555b60;
      }
LAB_00555b66:
      if ((*(short *)(param_3 + 0x7e) != 0) &&
         (*(int *)(*(int *)(param_3 + 0x78) + local_84 * 4) != 0)) {
        piVar3 = *(int **)(*(int *)(param_3 + 0x78) + local_84 * 4);
        if (*(ushort *)(piVar3 + 2) == 0xffff) {
          pcVar6 = (char *)piVar3[1];
          pcVar1 = pcVar6 + 1;
          do {
            cVar4 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar4 != '\0');
          uVar7 = (int)pcVar6 - (int)pcVar1;
        }
        else {
          uVar7 = (uint)*(ushort *)(piVar3 + 2);
        }
        if (((uVar7 != 0) && (*(short *)(param_3 + 0x8e) != 0)) &&
           (*(int *)(*(int *)(param_3 + 0x88) + local_84 * 4) != 0)) {
          iVar8 = *(int *)(*(int *)(param_3 + 0x88) + local_84 * 4);
          uVar2 = *(ushort *)(iVar8 + 8);
          if (uVar2 == 0xffff) {
            pcVar6 = *(char **)(iVar8 + 4);
            pcVar1 = pcVar6 + 1;
            do {
              cVar4 = *pcVar6;
              pcVar6 = pcVar6 + 1;
            } while (cVar4 != '\0');
            uVar7 = (int)pcVar6 - (int)pcVar1;
          }
          else {
            uVar7 = (uint)uVar2;
          }
          if (uVar7 != 0) {
            uVar13 = (**(code **)(*piVar3 + 0x14))(uVar5);
            FUN_00402e30(&local_60,"Meshes\\%s",uVar13);
            uVar13 = local_60;
            if ((*(int *)(param_3 + 0xc0) == 0) && (uVar12 == 0)) {
              FUN_00551b40(&local_48,local_60);
              iVar8 = FUN_0042bde0(local_48,0,0,0xffffffff);
              if (iVar8 != 0) {
                FUN_00551b40(&local_60,uVar13);
                uVar13 = local_60;
              }
switchD_00555c79_switchD:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(uVar12) {
              case 0:
              case 1:
              case 2:
                uVar10 = FUN_005500c0(&local_40,uVar13,1,0);
                uVar10 = FUN_00550010(&local_58,uVar13,uVar10);
                uVar10 = FUN_0054feb0(&local_50,uVar13,uVar13,uVar10);
                puVar14 = (undefined4 *)FUN_00553620(uVar10);
                break;
              default:
                uVar10 = FUN_00550010(&local_58,uVar13);
                iVar8 = FUN_0054feb0(&local_50,uVar13);
                local_80 = (undefined4 *)0x0;
                local_4._0_1_ = 8;
                if (iVar8 == 0) {
                  local_4._0_1_ = 7;
                  local_80 = (undefined4 *)0x0;
                  uVar12 = local_84;
                  goto LAB_00556199;
                }
                if (DAT_00b39b80 == 0) {
                  FUN_00553550();
                }
                if (*(int *)(DAT_00b39b80 + 0xdac) == 0) {
                  iStack_64 = FUN_00401f00(0x20);
                  local_4._0_1_ = 9;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_00551e80();
                  }
                  local_4._0_1_ = 8;
                  if (DAT_00b39b80 == 0) {
                    FUN_00553550();
                  }
                  *(undefined4 *)(DAT_00b39b80 + 0xdac) = uVar13;
                  *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x18) = DAT_00b120ec;
                  FUN_005506b0(0);
                  uVar13 = DAT_00b120f4;
                  if (DAT_00b39b80 == 0) {
                    FUN_00553550();
                  }
                  *(undefined4 *)(*(int *)(DAT_00b39b80 + 0xdac) + 0x1c) = uVar13;
                  FUN_005506b0(0);
                }
                if (DAT_00b39b80 == 0) {
                  FUN_00553550();
                }
                cVar4 = FUN_005515b0(iVar8,&local_80);
                puVar14 = local_80;
                if (cVar4 == '\0') {
                  iStack_64 = FUN_00401f00(0x1c);
                  local_4._0_1_ = 10;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_005564a0();
                  }
                  local_4 = CONCAT31(local_4._1_3_,8);
                  FUN_0075fa90(uVar13);
                  puVar14 = local_80;
                  cVar4 = FUN_00559b50(iVar8,local_60,uVar10,0,0);
                  if (cVar4 == '\0') {
                    if (puVar14 != (undefined4 *)0x0) {
                      LVar11 = InterlockedDecrement(puVar14 + 1);
                      if (LVar11 == 0) {
                        (**(code **)*puVar14)(1);
                      }
                      puVar14 = (undefined4 *)0x0;
                    }
                  }
                  else {
                    if (DAT_00b39b80 == 0) {
                      FUN_00553550();
                    }
                    FUN_00551450(iVar8,puVar14);
                  }
                  local_4._0_1_ = 7;
                  uVar12 = local_84;
                  uVar13 = local_60;
                  if ((puVar14 != (undefined4 *)0x0) &&
                     (LVar11 = InterlockedDecrement(puVar14 + 1), uVar12 = local_84,
                     uVar13 = local_60, LVar11 == 0)) {
                    (**(code **)*puVar14)(1);
                    uVar12 = local_84;
                    uVar13 = local_60;
                  }
                }
                else {
                  if (local_80[2] == 0) {
                    FUN_00559b50(iVar8,local_60,uVar10,0,0);
                  }
                  local_4._0_1_ = 7;
                  LVar11 = InterlockedDecrement(puVar14 + 1);
                  uVar12 = local_84;
                  uVar13 = local_60;
                  if (LVar11 == 0) {
                    (**(code **)*puVar14)(1);
                    uVar12 = local_84;
                    uVar13 = local_60;
                  }
                }
              }
            }
            else {
              puVar14 = local_80;
              if (uVar12 < 7) goto switchD_00555c79_switchD;
            }
            local_80 = puVar14;
            if (((local_80 != (undefined4 *)0x0) &&
                (cVar4 = FUN_00559870(param_3,&local_88), cVar4 != '\0')) &&
               (local_88 != (undefined4 *)0x0)) {
              FUN_006ff420(*(undefined4 *)(*(int *)(param_3 + 0x98) + uVar12 * 4));
              if (uVar12 == 0) {
                local_78 = local_88;
              }
              else if ((uVar12 == 1) || (uVar12 == 2)) {
                local_74 = local_88;
              }
              puVar9 = *(undefined1 **)(*(int *)(*(int *)(param_3 + 0x88) + uVar12 * 4) + 4);
              if (puVar9 == (undefined1 *)0x0) {
                puVar9 = &DAT_00a2f7ec;
              }
              FUN_00402e30(&local_60,"Textures\\%s",puVar9);
              uVar13 = local_60;
              uVar10 = FUN_00442890(auStack_70,local_60,0,0);
              local_4._0_1_ = 0xb;
              FUN_0055e2a0(uVar10);
              local_4._0_1_ = 7;
              FUN_007016a0();
              puVar14 = local_7c;
              if (local_7c != (undefined4 *)0x0) {
                iStack_64 = FUN_00401f00(0x30);
                local_4._0_1_ = 0xc;
                if (iStack_64 == 0) {
                  uVar13 = 0;
                }
                else {
                  uVar13 = FUN_007043b0();
                }
                local_4._0_1_ = 7;
                FUN_004057b0(puVar14);
                iVar8 = FUN_00707530(6);
                if (iVar8 != 0) {
                  FUN_00708560(auStack_6c,6);
                  FUN_007016a0();
                }
                FUN_00405680(uVar13);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              if ((uVar12 == 5) || (uVar12 == 4)) {
                iVar8 = FUN_00707530(0);
                if (iVar8 != 0) {
                  FUN_00708560(auStack_68,0);
                  FUN_007016a0();
                }
                uVar13 = FUN_00550550();
                FUN_00405680(uVar13);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              if (((uVar12 == 0) || (uVar12 == 1)) || (uVar12 == 2)) {
                iVar8 = FUN_00707530(2);
                if (iVar8 == 0) {
                  iStack_64 = FUN_00401f00(0x5c);
                  local_4._0_1_ = 0xd;
                  if (iStack_64 == 0) {
                    uVar13 = 0;
                  }
                  else {
                    uVar13 = FUN_007095a0();
                  }
                  local_4._0_1_ = 7;
                  FUN_006ff420(&DAT_00a3cf5c);
                  FUN_00405680(uVar13);
                  uVar12 = local_84;
                  uVar13 = local_60;
                }
                else {
                  FUN_006ff420(&DAT_00a3cf5c);
                }
              }
              if (local_88[0x2e] == 0) {
                puVar14 = local_30;
                puVar15 = local_88 + 0xc;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                (**(code **)(*(int *)*param_1 + 0x84))(local_88,0);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              else if ((char)param_4 == '\0') {
                (**(code **)(*(int *)*param_2 + 0x84))(local_88);
              }
              else {
                FUN_00478350(0);
                local_88[0x15] = DAT_00b3f9a8;
                local_88[0x16] = DAT_00b3f9ac;
                local_88[0x17] = DAT_00b3f9b0;
                puVar14 = local_30;
                puVar15 = local_88 + 0xc;
                for (iVar8 = 9; iVar8 != 0; iVar8 = iVar8 + -1) {
                  *puVar15 = *puVar14;
                  puVar14 = puVar14 + 1;
                  puVar15 = puVar15 + 1;
                }
                (**(code **)(*(int *)*param_1 + 0x84))(local_88,0);
                uVar12 = local_84;
                uVar13 = local_60;
              }
              local_80 = (undefined4 *)0x0;
              FUN_0075fa90(0);
              FUN_0075fa90(0);
            }
          }
        }
      }
    }
LAB_00556199:
    local_84 = uVar12 + 1;
    if (8 < local_84) {
      if (((DAT_00b120bc != '\0') && (local_78 != (undefined4 *)0x0)) &&
         (local_74 != (undefined4 *)0x0)) {
        FUN_00481920(local_78,local_74,0x3dcccccd,0,0);
      }
      if (*(int *)(param_3 + 0x60) != 0) {
        FUN_00554260(param_1,param_2,param_3,param_4);
      }
      if ((*(int *)(param_3 + 0xb8) != 0) && (*(int *)(param_3 + 0xbc) != 0)) {
        FaceGen_SetEyeRefs_AVSite(param_1,param_2,param_3,param_4);
      }
      FUN_00401f20(local_48);
      FUN_00401f20(0);
      FUN_00401f20(local_40);
      FUN_00401f20(local_58);
      FUN_00401f20(local_50);
      FUN_00401f20(uVar13);
      puVar14 = local_88;
      local_4 = (uint)local_4._1_3_ << 8;
      if (((local_88 != (undefined4 *)0x0) &&
          (LVar11 = InterlockedDecrement(local_88 + 1), LVar11 == 0)) &&
         (puVar14 != (undefined4 *)0x0)) {
        (**(code **)*puVar14)(1);
      }
      puVar14 = local_7c;
      local_4 = 0xffffffff;
      if ((local_7c != (undefined4 *)0x0) &&
         (LVar11 = InterlockedDecrement(local_7c + 1), LVar11 == 0)) {
        (**(code **)*puVar14)(1);
      }
      *unaff_FS_OFFSET = local_c;
      return 1;
    }
  } while( true );
}



int FUN_00556300(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    return 0;
  }
  return *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 6;
}



int FUN_00556320(uint param_1)

{
  int in_ECX;
  
  if ((*(int *)(in_ECX + 4) == 0) ||
     ((uint)(*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 6) <= param_1)) {
    FUN_00984d5e();
  }
  return param_1 * 0x40 + *(int *)(in_ECX + 4);
}



void FUN_00556350(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x40) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 << 6);
  return;
}



void FUN_005563b0(void)

{
  undefined4 *in_ECX;
  
  if (*(char *)(in_ECX + 1) != '\0') {
    InterlockedCompareExchange((LONG *)*in_ECX,0,1);
  }
  return;
}



void FUN_005563e0(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x20) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 << 5);
  return;
}



void FUN_00556440(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((uint)(0xffffffff / ZEXT48(param_1)) < 0x2c) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00((int)pcVar1 * 0x2c);
  return;
}



void FUN_005564a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  *in_ECX = &PTR_FUN_00a64a98;
  return;
}



int FUN_005564e0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)(in_ECX + 8) != 0) && (iVar2 = *(int *)(*(int *)(in_ECX + 8) + 8), iVar2 != 0)) {
    local_8 = 0x24;
    uVar5 = 0;
    do {
      iVar4 = *(int *)(uVar5 + 8 + iVar2);
      iVar1 = 0;
      if (iVar4 != 0) {
        iVar1 = (*(int *)(uVar5 + 0xc + iVar2) - iVar4) / 0x14;
      }
      local_8 = local_8 + iVar1 * 0x10;
      iVar4 = 0;
      uVar3 = 0;
      while( true ) {
        iVar2 = *(int *)(*(int *)(in_ECX + 8) + 8);
        iVar1 = *(int *)(uVar5 + 8 + iVar2);
        if ((iVar1 == 0) || ((uint)((*(int *)(uVar5 + 0xc + iVar2) - iVar1) / 0x14) <= uVar3))
        break;
        iVar1 = *(int *)(uVar5 + 8 + iVar2);
        if ((iVar1 == 0) || ((uint)((*(int *)(uVar5 + 0xc + iVar2) - iVar1) / 0x14) <= uVar3)) {
          FUN_00984d5e();
        }
        iVar2 = *(int *)(uVar5 + 8 + iVar2) + 4 + iVar4;
        iVar1 = *(int *)(iVar2 + 4);
        if (iVar1 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = (*(int *)(iVar2 + 8) - iVar1) / 6;
        }
        local_8 = local_8 + iVar2 * 6;
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x14;
      }
      uVar5 = uVar5 + 0x10;
    } while (uVar5 < 0x20);
  }
  return local_8;
}



undefined4 FUN_005565f0(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  int in_ECX;
  undefined1 local_24 [32];
  undefined4 local_4;
  
  puVar3 = *(undefined4 **)(in_ECX + 8);
  if (puVar3 != (undefined4 *)0x0) {
    if (*(ushort *)(puVar3 + 1) == 0xffff) {
      pcVar4 = (char *)*puVar3;
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(puVar3 + 1);
    }
    if ((uVar5 != 0) &&
       (BVar6 = GetFileAttributesExA((LPCSTR)*puVar3,GetFileExInfoStandard,local_24), BVar6 != 0)) {
      return local_4;
    }
  }
  return 0;
}



int FUN_00556650(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_8;
  
  local_8 = 0;
  if ((*(int *)(in_ECX + 0xc) != 0) && (iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 8), iVar4 != 0)) {
    local_8 = 0x24;
    uVar5 = 0;
    do {
      iVar3 = *(int *)(uVar5 + 8 + iVar4);
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(uVar5 + 0xc + iVar4) - iVar3 >> 6;
      }
      local_8 = local_8 + iVar4 * 0x40;
      uVar2 = 0;
      iVar3 = 0;
      while( true ) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0xc) + 8);
        iVar1 = *(int *)(uVar5 + 8 + iVar4);
        if ((iVar1 == 0) || ((uint)(*(int *)(uVar5 + 0xc + iVar4) - iVar1 >> 6) <= uVar2)) break;
        if ((iVar1 == 0) || ((uint)(*(int *)(uVar5 + 0xc + iVar4) - iVar1 >> 6) <= uVar2)) {
          FUN_00984d5e();
        }
        iVar4 = *(int *)(uVar5 + 8 + iVar4) + 0x10 + iVar3;
        iVar1 = *(int *)(iVar4 + 4);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *(int *)(iVar4 + 8) - iVar1;
        }
        local_8 = local_8 + iVar1 * 3;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x40;
      }
      uVar5 = uVar5 + 0x10;
    } while (uVar5 < 0x20);
  }
  return local_8;
}



undefined4 FUN_00556720(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  int in_ECX;
  undefined1 local_24 [32];
  undefined4 local_4;
  
  puVar3 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar3 != (undefined4 *)0x0) {
    if (*(ushort *)(puVar3 + 1) == 0xffff) {
      pcVar4 = (char *)*puVar3;
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(puVar3 + 1);
    }
    if ((uVar5 != 0) &&
       (BVar6 = GetFileAttributesExA((LPCSTR)*puVar3,GetFileExInfoStandard,local_24), BVar6 != 0)) {
      return local_4;
    }
  }
  return 0;
}



int FUN_00556780(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_2 - (int)param_1;
  if (param_1 != param_2) {
    iVar2 = param_3 - (int)param_1;
    do {
      *(undefined4 *)(iVar2 + (int)param_1) = *param_1;
      *(undefined2 *)(iVar2 + 4 + (int)param_1) = *(undefined2 *)(param_1 + 1);
      param_1 = (undefined4 *)((int)param_1 + 6);
    } while (param_1 != param_2);
  }
  return param_3 + (iVar1 / 6) * 6;
}



void FUN_005567d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined4 *)((int)param_1 + 6)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      *(undefined2 *)(param_3 + 1) = *(undefined2 *)(param_1 + 1);
    }
    param_3 = (undefined4 *)((int)param_3 + 6);
  }
  return;
}



uint FUN_00556800(void)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(in_ECX + 4) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)(in_ECX + 8) - *(int *)(in_ECX + 4)) / 0xc;
  }
  iVar3 = 0;
  for (uVar4 = 0;
      (*(int *)(in_ECX + 0x94) != 0 &&
      (uVar4 < (uint)((*(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94)) / 0x30)));
      uVar4 = uVar4 + 1) {
    if ((*(int *)(in_ECX + 0x94) == 0) ||
       ((uint)((*(int *)(in_ECX + 0x98) - *(int *)(in_ECX + 0x94)) / 0x30) <= uVar4)) {
      FUN_00984d5e();
    }
    iVar1 = *(int *)(in_ECX + 0x94);
    if (*(uint *)(iVar1 + 0x1c + iVar3) < uVar2) {
      if ((iVar1 == 0) || ((uint)((*(int *)(in_ECX + 0x98) - iVar1) / 0x30) <= uVar4)) {
        FUN_00984d5e();
      }
      uVar2 = *(uint *)(*(int *)(in_ECX + 0x94) + 0x1c + iVar3);
    }
    iVar3 = iVar3 + 0x30;
  }
  return uVar2;
}



void FUN_005568e0(byte param_1)

{
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00556900(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc9a4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[2] = 0;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[8] = 0;
  }
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00556a00(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0xc) == 0) && (param_1 != 0)) {
    puVar1 = (undefined4 *)FUN_00401f00(0xc);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      *(undefined2 *)((int)puVar1 + 6) = 0;
      puVar1[2] = 0;
      *(undefined4 **)(in_ECX + 0xc) = puVar1;
      FUN_004028d0(param_1,0);
      return 1;
    }
    *(undefined4 *)(in_ECX + 0xc) = 0;
    FUN_004028d0(param_1,0);
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x00556c10) */
/* WARNING: Removing unreachable block (ram,0x00556c1e) */
/* WARNING: Removing unreachable block (ram,0x00556c34) */
/* WARNING: Removing unreachable block (ram,0x00556c42) */

undefined4 FUN_00556a70(int *param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  piVar1 = param_1;
  puStack_8 = &LAB_009bc5db;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar6 = (undefined4 *)*param_1;
  local_4 = 1;
  uStack_3 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar6 + 1);
    if ((LVar4 == 0) && (puVar6 != (undefined4 *)0x0)) {
      (**(code **)*puVar6)(1);
    }
    *piVar1 = 0;
  }
  if (((*(int *)(in_ECX + 8) == 0) || (iVar7 = *(int *)(*(int *)(in_ECX + 8) + 0x10), iVar7 == 0))
     || (*(int *)(iVar7 + 0xb4) == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00700900(uVar3);
    FUN_0075fa90(uVar5);
    puVar6 = (undefined4 *)FUN_00700790(&param_1);
    local_4 = 2;
    FUN_0075fa90(*puVar6);
    piVar2 = param_1;
    local_4 = 1;
    if (((param_1 != (int *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
       (piVar2 != (int *)0x0)) {
      (**(code **)*piVar2)(1);
    }
    (**(code **)(*(int *)*piVar1 + 0x8c))(0);
    if ((*(int *)(*piVar1 + 0xb8) != 0) && (*(int *)(*(int *)(*piVar1 + 0xb8) + 0xc) != 0)) {
      puVar6 = (undefined4 *)FUN_00700790(&param_1);
      local_4 = 3;
      FUN_0075fa90(*puVar6);
      local_4 = 1;
      FUN_007016a0();
      FUN_00478300(0);
    }
    iVar7 = FUN_00401f00(0x18);
    local_4 = 4;
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = FUN_0055c6e0(*piVar1,*(undefined4 *)(*(int *)(in_ECX + 8) + 0x14),
                           *(undefined4 *)(*(int *)(in_ECX + 8) + 0x18));
    }
    _local_4 = CONCAT31(uStack_3,1);
    if (iVar7 != 0) {
      FUN_006ff8a0(iVar7);
    }
    iVar7 = *(int *)(*(int *)(in_ECX + 8) + 0x20);
    if (iVar7 != 0) {
      FUN_006ff8a0(iVar7);
    }
    uVar5 = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return uVar5;
}



void FUN_00556c70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00556780(param_1,param_2,param_3,param_2,param_2,0);
  return;
}



int FUN_00556ca0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  
  _DstSize = param_2 - (int)param_1;
  if (0 < (int)_DstSize) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return _DstSize + (int)param_3;
}



int FUN_00556cd0(void *param_1,int param_2,void *param_3)

{
  rsize_t _DstSize;
  
  _DstSize = param_2 - (int)param_1;
  if (_DstSize != 0) {
    _memmove_s(param_3,_DstSize,param_1,_DstSize);
  }
  return _DstSize + (int)param_3;
}



void FUN_00556d00(uint *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = param_2;
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    param_2 = param_2 & 0xffffff00;
    uVar2 = FUN_00556780(param_5,*(undefined4 *)(in_ECX + 8),param_3,param_1,param_1,param_2);
    *(undefined4 *)(in_ECX + 8) = uVar2;
  }
  param_1[1] = param_3;
  *param_1 = uVar1;
  return;
}



void FUN_00556d60(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x1c)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 8));
  }
  *(undefined4 *)(in_ECX + 0x1c) = 0xf;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined1 *)(in_ECX + 8) = 0;
  return;
}



void FUN_00556d90(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x28)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x28) = 0xf;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)(in_ECX + 0x14) = 0;
  return;
}



void FUN_00556dc0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



void FUN_00556e30(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00556d00(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_00556e70(void)

{
  void *_Src;
  void *_Dst;
  rsize_t _DstSize;
  int in_ECX;
  
  _Src = *(void **)(in_ECX + 8);
  if (_Src < *(void **)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  _Dst = *(void **)(in_ECX + 4);
  if (*(void **)(in_ECX + 8) < _Dst) {
    FUN_00984d5e();
  }
  if (_Dst != _Src) {
    _DstSize = *(int *)(in_ECX + 8) - (int)_Src;
    if (0 < (int)_DstSize) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(rsize_t *)(in_ECX + 8) = _DstSize + (int)_Dst;
  }
  return;
}



void FUN_00556ec0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x20) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x20));
  }
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00557001) */

undefined4 FUN_00556fe0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1 * 0xc);
    *(int *)(in_ECX + 0xc) = param_1 * 0xc + iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    return 1;
  }
  return 0;
}



void FUN_00557030(int param_1,int param_2)

{
  uint *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 0x1c);
    do {
      if (0xf < *puVar1) {
        FUN_00401f20(puVar1[-5]);
      }
      *puVar1 = 0xf;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + -5) = 0;
      param_1 = param_1 + 0x20;
      puVar1 = puVar1 + 8;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_00557080(int param_1,int param_2)

{
  uint *puVar1;
  
  if (param_1 != param_2) {
    puVar1 = (uint *)(param_1 + 0x28);
    do {
      if (0xf < *puVar1) {
        FUN_00401f20(puVar1[-5]);
      }
      *puVar1 = 0xf;
      puVar1[-1] = 0;
      *(undefined1 *)(puVar1 + -5) = 0;
      param_1 = param_1 + 0x2c;
      puVar1 = puVar1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_005570d0(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 0x24);
    do {
      if (*piVar1 != 0) {
        FUN_00401f20(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      if (0xf < (uint)piVar1[-3]) {
        FUN_00401f20(piVar1[-8]);
      }
      piVar1[-3] = 0xf;
      piVar1[-4] = 0;
      *(undefined1 *)(piVar1 + -8) = 0;
      param_1 = param_1 + 0x30;
      piVar1 = piVar1 + 0xc;
    } while (param_1 != param_2);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005571d1) */

undefined4 FUN_005571b0(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1 * 6);
    *(int *)(in_ECX + 0xc) = param_1 * 6 + iVar1;
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    return 1;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x00557223) */

undefined4 FUN_00557200(int param_1)

{
  int iVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (param_1 != 0) {
    iVar1 = FUN_00401f00(param_1);
    *(int *)(in_ECX + 4) = iVar1;
    *(int *)(in_ECX + 8) = iVar1;
    *(int *)(in_ECX + 0xc) = iVar1 + param_1;
    return CONCAT31((int3)((uint)(iVar1 + param_1) >> 8),1);
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x005572b5) */

void FUN_00557250(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_009bc600;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 6;
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (iVar3 != 0) {
    iVar4 = FUN_00401f00(iVar3 * 6);
    *(int *)(in_ECX + 4) = iVar4;
    *(int *)(in_ECX + 8) = iVar4;
    *(int *)(in_ECX + 0xc) = iVar3 * 6 + iVar4;
    uVar1 = *(uint *)(param_1 + 8);
    local_8 = 0;
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    uVar2 = *(uint *)(param_1 + 4);
    if (*(uint *)(param_1 + 8) < uVar2) {
      FUN_00984d5e();
    }
    uVar5 = FUN_005567d0(uVar2,uVar1,*(undefined4 *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 8) = uVar5;
  }
  *unaff_FS_OFFSET = local_10;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0055736d) */

void FUN_00557340(int param_1)

{
  uint uVar1;
  void *_Src;
  void *_Dst;
  int iVar2;
  int in_ECX;
  int iVar3;
  rsize_t _DstSize;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (iVar3 != 0) {
    iVar2 = FUN_00401f00(iVar3);
    *(int *)(in_ECX + 4) = iVar2;
    *(int *)(in_ECX + 8) = iVar2;
    *(int *)(in_ECX + 0xc) = iVar2 + iVar3;
    uVar1 = *(uint *)(param_1 + 8);
    if (uVar1 < *(uint *)(param_1 + 4)) {
      FUN_00984d5e();
    }
    _Src = *(void **)(param_1 + 4);
    if (*(void **)(param_1 + 8) < _Src) {
      FUN_00984d5e();
    }
    _Dst = *(void **)(in_ECX + 4);
    _DstSize = uVar1 - (int)_Src;
    if (_DstSize != 0) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(rsize_t *)(in_ECX + 8) = _DstSize + (int)_Dst;
  }
  return;
}



void FUN_005573d0(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 0x20);
    do {
      if (*piVar1 != 0) {
        FUN_00401f20(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      if (0xf < (uint)piVar1[-2]) {
        FUN_00401f20(piVar1[-7]);
      }
      piVar1[-2] = 0xf;
      piVar1[-3] = 0;
      *(undefined1 *)(piVar1 + -7) = 0;
      param_1 = param_1 + 0x2c;
      piVar1 = piVar1 + 0xb;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_00557430(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_1 != param_2) {
    piVar1 = (int *)(param_1 + 8);
    do {
      if (*piVar1 != 0) {
        FUN_00401f20(*piVar1);
      }
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
      param_1 = param_1 + 0x14;
      piVar1 = piVar1 + 5;
    } while (param_1 != param_2);
  }
  return;
}



void FUN_00557470(uint param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint in_ECX;
  int iVar7;
  uint uVar8;
  
  uVar5 = param_1;
  if (in_ECX == param_1) {
    return;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar7 = *(int *)(param_1 + 8) - iVar1;
    iVar2 = iVar7 >> 0x1f;
    iVar7 = iVar7 / 6 + iVar2;
    uVar8 = iVar7 - iVar2;
    if (iVar7 != iVar2) {
      iVar2 = *(int *)(in_ECX + 4);
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(int *)(in_ECX + 8) - iVar2) / 6;
      }
      if (uVar8 <= uVar4) {
        param_1 = param_1 & 0xffffff00;
        FUN_00556780(iVar1,*(undefined4 *)(uVar5 + 8),iVar2,param_1,param_1,param_1);
        if (*(int *)(uVar5 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + ((*(int *)(uVar5 + 8) - *(int *)(uVar5 + 4)) / 6) * 6;
        return;
      }
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (*(int *)(in_ECX + 0xc) - iVar2) / 6;
      }
      if (uVar5 < uVar8) {
        if (iVar2 != 0) {
          FUN_00401f20(iVar2);
        }
        uVar6 = FUN_0054f700();
        cVar3 = FUN_005571b0(uVar6);
        if (cVar3 == '\0') {
          return;
        }
        uVar6 = *(undefined4 *)(in_ECX + 4);
        iVar7 = *(int *)(param_1 + 4);
      }
      else {
        iVar7 = FUN_0054f700();
        iVar7 = iVar1 + iVar7 * 6;
        FUN_00556c70(iVar1,iVar7,iVar2);
        uVar6 = *(undefined4 *)(in_ECX + 8);
      }
      uVar6 = FUN_006f0130(iVar7,*(undefined4 *)(param_1 + 8),uVar6);
      *(undefined4 *)(in_ECX + 8) = uVar6;
      return;
    }
  }
  FUN_00556e30();
  return;
}



void FUN_005575c0(int param_1)

{
  void *_Src;
  void *pvVar1;
  void *_Dst;
  char cVar2;
  undefined4 uVar3;
  int in_ECX;
  rsize_t _DstSize;
  uint uVar4;
  int iVar5;
  
  if (in_ECX == param_1) {
    return;
  }
  _Src = *(void **)(param_1 + 4);
  if (_Src != (void *)0x0) {
    pvVar1 = *(void **)(param_1 + 8);
    if (pvVar1 != _Src) {
      _Dst = *(void **)(in_ECX + 4);
      if (_Dst == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(in_ECX + 8) - (int)_Dst;
      }
      if ((uint)((int)pvVar1 - (int)_Src) <= uVar4) {
        _DstSize = (int)pvVar1 - (int)_Src;
        if (0 < (int)_DstSize) {
          _memmove_s(_Dst,_DstSize,_Src,_DstSize);
        }
        if (*(int *)(param_1 + 4) == 0) {
          *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(in_ECX + 4);
          return;
        }
        *(int *)(in_ECX + 8) =
             *(int *)(in_ECX + 4) + (*(int *)(param_1 + 8) - *(int *)(param_1 + 4));
        return;
      }
      if (_Dst == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)(in_ECX + 0xc) - (int)_Dst;
      }
      if (uVar4 < (uint)((int)pvVar1 - (int)_Src)) {
        if (_Dst != (void *)0x0) {
          FUN_00401f20(_Dst);
        }
        if (*(int *)(param_1 + 4) == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
        }
        cVar2 = FUN_00557200(iVar5);
        if (cVar2 == '\0') {
          return;
        }
        uVar3 = FUN_00556cd0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                             *(undefined4 *)(in_ECX + 4));
        *(undefined4 *)(in_ECX + 8) = uVar3;
        return;
      }
      if (_Dst == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(in_ECX + 8) - (int)_Dst;
      }
      FUN_00556ca0(_Src,(int)_Src + iVar5,_Dst);
      uVar3 = FUN_00556cd0((int)_Src + iVar5,*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(in_ECX + 8));
      *(undefined4 *)(in_ECX + 8) = uVar3;
      return;
    }
  }
  FUN_00556e70();
  return;
}



void FUN_00557740(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    _eh_vector_destructor_iterator_((void *)(param_1 + 0x10),0x10,3,FUN_00794eb0);
  }
  return;
}



void FUN_00557770(undefined4 *param_1)

{
  undefined4 *in_ECX;
  int iVar1;
  int iVar2;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  iVar1 = (int)param_1 - (int)in_ECX;
  iVar2 = 3;
  do {
    in_ECX = in_ECX + 4;
    FUN_005575c0(iVar1 + (int)in_ECX);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



undefined4 * FUN_005577c0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    iVar1 = param_2 + -0x14;
    param_3 = param_3 + -5;
    *param_3 = *(undefined4 *)(param_2 + -0x14);
    FUN_00557470(param_2 + -0x10);
    param_2 = iVar1;
  } while (iVar1 != param_1);
  return param_3;
}



void FUN_00557800(undefined4 *param_1,undefined4 *param_2)

{
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc631;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    _eh_vector_copy_constructor_iterator_(param_1 + 4,param_2 + 4,0x10,3,FUN_00557340,FUN_00794eb0);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00557880(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_009bc661;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 5) {
    local_8 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00557250(param_1 + 1);
    }
    param_3 = param_3 + 5;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



undefined4 * FUN_00557970(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_00557470(param_1 + 1);
    param_1 = param_1 + 5;
    param_3 = param_3 + 5;
  } while (param_1 != param_2);
  return param_3;
}



int FUN_005579b0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_005577c0(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x14) * -0x14;
}



int FUN_00557a10(int param_1,int param_2,int param_3)

{
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009bc680;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_00557800(param_3,param_1);
    param_3 = param_3 + 0x40;
  }
  *unaff_FS_OFFSET = local_10;
  return param_3;
}



void FUN_00557b30(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00557740(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



void FUN_00557bb0(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc6be;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_((void *)(in_ECX + 4),0x10,2,FUN_006ef4a0,FUN_00557b30);
  local_4 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006efa20(local_28);
  if (0xf < local_10) {
    FUN_00401f20(local_24,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00557c80(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c74db;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&local_10;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = FUN_00401f00(0x24,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00557bb0(param_1);
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



void FUN_00557cf0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x94) != 0) {
    FUN_005570d0(*(int *)(in_ECX + 0x94),*(undefined4 *)(in_ECX + 0x98),in_ECX + 0x90);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x94));
  }
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  if (*(int *)(in_ECX + 0x84) != 0) {
    FUN_005573d0(*(int *)(in_ECX + 0x84),*(undefined4 *)(in_ECX + 0x88),in_ECX + 0x80,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x84));
  }
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  if (*(int *)(in_ECX + 0x74) != 0) {
    FUN_00557080(*(int *)(in_ECX + 0x74),*(undefined4 *)(in_ECX + 0x78),in_ECX + 0x70,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x74));
  }
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  if (*(int *)(in_ECX + 100) != 0) {
    FUN_00557030(*(int *)(in_ECX + 100),*(undefined4 *)(in_ECX + 0x68),in_ECX + 0x60,in_ECX);
    FUN_00401f20(*(undefined4 *)(in_ECX + 100));
  }
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  if (*(int *)(in_ECX + 0x54) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x54));
  }
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  if (*(int *)(in_ECX + 0x44) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x44));
  }
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x34));
  }
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (*(int *)(in_ECX + 0x24) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x24));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  if (*(int *)(in_ECX + 0x14) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x14));
  }
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00557e60(float *param_1,int *param_2,int *param_3)

{
  LONG *Destination;
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  LONG LVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *piVar17;
  int in_ECX;
  int *piVar18;
  float *pfVar19;
  uint *puVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *unaff_FS_OFFSET;
  uint uStack_50;
  uint uStack_48;
  int *piStack_44;
  int iStack_40;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc6fb;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff94;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  puVar7 = (undefined4 *)FUN_00523d80(uVar6);
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 != puVar7) {
    if (((puVar1 != (undefined4 *)0x0) && (LVar8 = InterlockedDecrement(puVar1 + 1), LVar8 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    *param_2 = (int)puVar7;
    if (puVar7 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar7 + 1);
    }
  }
  if ((*(int *)(in_ECX + 0xc) != 0) &&
     ((iVar9 = (int)param_1, param_1 != (float *)0x0 ||
      (iVar9 = FaceGen_DefaultGetter(), iVar9 != 0)))) {
    cVar5 = FUN_00551960();
    if (cVar5 == '\0') {
      puVar1 = *(undefined4 **)(in_ECX + 0xc);
      if (puVar1[2] == 0) {
        iVar10 = FUN_00404fd0();
        if (iVar10 != 0) {
          uVar11 = FUN_00557c80(*puVar1);
          *(undefined4 *)(*(int *)(in_ECX + 0xc) + 8) = uVar11;
          goto LAB_00557f2f;
        }
      }
      else {
LAB_00557f2f:
        if (*(int *)(*(int *)(in_ECX + 0xc) + 8) != 0) goto LAB_00557f3c;
      }
    }
    else {
LAB_00557f3c:
      Destination = (LONG *)(in_ECX + 0x18);
      LVar8 = InterlockedCompareExchange(Destination,1,0);
      local_4._0_1_ = 1;
      if (LVar8 == 0) {
        if (*(int *)(*(int *)(in_ECX + 0xc) + 8) == 0) {
          InterlockedCompareExchange(Destination,0,1);
        }
        else {
          iVar10 = FUN_00556320(0);
          uVar6 = *(uint *)(iVar10 + 4);
          iVar10 = FUN_00556320(0);
          iVar10 = *(int *)(iVar10 + 8);
          if ((uVar6 != 0) && (iVar10 != 0)) {
            puVar20 = (uint *)(iVar9 + 0x30);
            uVar21 = 0;
            piVar12 = (int *)(*(int *)(*(int *)(in_ECX + 0xc) + 8) + 8);
            do {
              if ((*piVar12 != 0) && (*puVar20 < (uint)(piVar12[1] - *piVar12 >> 6))) {
                FUN_004a7a60(
                            "FaceGen - Tried to apply a coordinate that did not match the EGT basis."
                            );
                goto LAB_00558023;
              }
              uVar21 = uVar21 + 1;
              puVar20 = puVar20 + 6;
              piVar12 = piVar12 + 4;
            } while (uVar21 < 2);
            uStack_10 = 0;
            uStack_14 = 0;
            uStack_18 = 0;
            uStack_1c = 0;
            iVar13 = FUN_00401f00(0x24);
            local_4._0_1_ = 2;
            if (iVar13 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = FUN_0054e2b0(0);
            }
            local_4 = CONCAT31(local_4._1_3_,1);
            FUN_0075fa90(uVar11);
            uRam0000001c = uVar6;
            iRam00000020 = iVar10;
            iVar13 = FUN_0054e390();
            iVar22 = iVar10 * uVar6;
            FUN_0054e230(iVar22,&uStack_1c);
            lVar4 = (ulonglong)(uint)(iVar22 * 3) * 4;
            piVar12 = (int *)FUN_00401f00(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) |
                                          (uint)lVar4);
            _memset(piVar12,0,iVar22 * 0xc);
            if (param_3 == (int *)0x0) {
              uStack_50 = FUN_00556300();
              if (0x1e < uStack_50) {
                uStack_50 = 0x1e;
              }
            }
            else {
              uStack_50 = (uint)param_3;
              uVar21 = FUN_00556300();
              if (uVar21 < param_3) {
                uStack_50 = FUN_00556300();
              }
            }
            param_1 = (float *)0x0;
            if (uStack_50 != 0) {
              param_3 = (int *)0x0;
              do {
                iVar22 = *(int *)(*(int *)(in_ECX + 0xc) + 8);
                if ((*(int *)(iVar22 + 8) == 0) ||
                   ((uint)(*(int *)(iVar22 + 0xc) - *(int *)(iVar22 + 8) >> 6) <= param_1)) {
                  FUN_00984d5e();
                }
                if (*(uint *)(*(int *)(iVar22 + 8) + 4 + (int)param_3) != uVar6) {
                  FUN_006ed6d0("..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp",0x462);
                }
                iVar22 = *(int *)(*(int *)(in_ECX + 0xc) + 8);
                if ((*(int *)(iVar22 + 8) == 0) ||
                   ((uint)(*(int *)(iVar22 + 0xc) - *(int *)(iVar22 + 8) >> 6) <= param_1)) {
                  FUN_00984d5e();
                }
                if (*(int *)(*(int *)(iVar22 + 8) + 8 + (int)param_3) != iVar10) {
                  FUN_006ed6d0("..\\TES Shared\\FaceGen\\BSFaceGenModel.cpp",0x463);
                }
                if ((*(int *)(iVar9 + 0x3c) == 0) ||
                   (*(int *)(iVar9 + 0x40) - *(int *)(iVar9 + 0x3c) >> 2 == 0)) {
                  FUN_00984d5e();
                }
                iVar22 = FUN_009828c0();
                if (iVar22 != 0) {
                  iVar14 = FUN_00556320(param_1);
                  iVar14 = *(int *)(iVar14 + 0xc);
                  iVar15 = FUN_00556320(param_1);
                  iVar15 = *(int *)(iVar15 + 4);
                  uStack_48 = 0;
                  piStack_44 = piVar12;
                  do {
                    iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 8);
                    iVar16 = *(int *)(iVar2 + 8);
                    if ((iVar16 == 0) || ((uint)(*(int *)(iVar2 + 0xc) - iVar16 >> 6) <= param_1)) {
                      FUN_00984d5e();
                    }
                    iVar16 = FUN_009828c0();
                    iVar2 = *(int *)(*(int *)(in_ECX + 0xc) + 8);
                    if ((*(int *)(iVar2 + 8) == 0) ||
                       ((uint)(*(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 8) >> 6) <= param_1)) {
                      FUN_00984d5e();
                    }
                    iVar23 = *(int *)(iVar2 + 8) + (int)param_3;
                    iVar2 = *(int *)(uStack_48 + 0x14 + iVar23);
                    if ((iVar2 == 0) || (*(int *)(uStack_48 + 0x18 + iVar23) == iVar2)) {
                      FUN_00984d5e();
                    }
                    iVar23 = *(int *)(uStack_48 + 0x14 + iVar23);
                    piVar17 = piStack_44;
                    for (iVar2 = iVar10; iVar2 != 0; iVar2 = iVar2 + -1) {
                      uVar21 = 0;
                      piVar18 = piVar17;
                      if (uVar6 != 0) {
                        do {
                          *piVar18 = *piVar18 + (int)*(char *)(uVar21 + iVar23) * iVar16 * iVar22;
                          uVar21 = uVar21 + 1;
                          piVar18 = piVar18 + 3;
                        } while (uVar21 < uVar6);
                      }
                      iVar23 = iVar23 + iVar15 + iVar14;
                      piVar17 = piVar17 + uVar6 * 3;
                    }
                    piStack_44 = piStack_44 + 1;
                    uStack_48 = uStack_48 + 0x10;
                  } while (uStack_48 < 0x30);
                }
                param_3 = (int *)((int)param_3 + 0x40);
                param_1 = (float *)((int)param_1 + 1);
              } while (param_1 < uStack_50);
            }
            iVar9 = 0;
            do {
              uVar3 = *(uint *)(iVar13 + 4);
              uVar21 = *(uint *)(iVar13 + 8);
              if (uVar21 < uVar3) {
                FUN_00984d5e();
                uVar21 = *(uint *)(iVar13 + 8);
              }
              if (uVar21 <= uVar3) {
                FUN_00984d5e();
              }
              if (iVar10 != 0) {
                iVar22 = 0;
                param_3 = piVar12 + iVar9;
                param_1 = (float *)(uVar3 + iVar9 * 4);
                iStack_40 = iVar10;
                do {
                  uVar21 = 0;
                  if (3 < (int)uVar6) {
                    iVar14 = (uVar6 - 4 >> 2) + 1;
                    uVar21 = iVar14 * 4;
                    piVar17 = param_3;
                    pfVar19 = param_1;
                    do {
                      iVar14 = iVar14 + -1;
                      *pfVar19 = (float)*piVar17 * 1.5258789e-05;
                      pfVar19[4] = (float)piVar17[3] * 1.5258789e-05;
                      pfVar19[8] = (float)piVar17[6] * 1.5258789e-05;
                      pfVar19[0xc] = (float)piVar17[9] * 1.5258789e-05;
                      piVar17 = piVar17 + 0xc;
                      pfVar19 = pfVar19 + 0x10;
                    } while (iVar14 != 0);
                  }
                  if (uVar21 < uVar6) {
                    piVar17 = piVar12 + (uVar21 + iVar22) * 3 + iVar9;
                    iVar14 = uVar6 - uVar21;
                    pfVar19 = (float *)(uVar3 + (iVar9 + (uVar21 + iVar22) * 4) * 4);
                    do {
                      iVar15 = *piVar17;
                      piVar17 = piVar17 + 3;
                      iVar14 = iVar14 + -1;
                      *pfVar19 = (float)iVar15 * 1.5258789e-05;
                      pfVar19 = pfVar19 + 4;
                    } while (iVar14 != 0);
                  }
                  param_1 = param_1 + uVar6 * 4;
                  param_3 = param_3 + uVar6 * 3;
                  iVar22 = iVar22 + uVar6;
                  iStack_40 = iStack_40 + -1;
                } while (iStack_40 != 0);
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < 3);
            FUN_00401f20(piVar12);
            puVar7 = (undefined4 *)FUN_0054da40(0xc37f0000,0x437f0000,0x3f000000,&DAT_00b26040);
            puVar1 = (undefined4 *)*param_2;
            if (puVar1 != puVar7) {
              if (((puVar1 != (undefined4 *)0x0) &&
                  (LVar8 = InterlockedDecrement(puVar1 + 1), LVar8 == 0)) &&
                 (puVar1 != (undefined4 *)0x0)) {
                (**(code **)*puVar1)(1);
              }
              *param_2 = (int)puVar7;
              if (puVar7 != (undefined4 *)0x0) {
                InterlockedIncrement(puVar7 + 1);
              }
            }
            InterlockedCompareExchange(Destination,0,1);
            local_4 = 0xffffffff;
            LVar8 = InterlockedDecrement((LONG *)&DAT_00000004);
            if (LVar8 == 0) {
              (*(code *)*_DAT_00000000)(1);
            }
            uVar11 = 1;
            goto LAB_0055803f;
          }
LAB_00558023:
          FUN_005563b0();
        }
      }
    }
    local_4 = 0xffffffff;
    FUN_007016a0();
  }
  uVar11 = 0;
LAB_0055803f:
  *unaff_FS_OFFSET = local_c;
  return uVar11;
}



undefined4 FUN_00558520(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int in_ECX;
  
  puVar3 = *(undefined4 **)(in_ECX + 0xc);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (puVar3[2] == 0) {
    if (*(ushort *)(puVar3 + 1) == 0xffff) {
      pcVar4 = (char *)*puVar3;
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(puVar3 + 1);
    }
    if (uVar5 == 0) {
      return 0;
    }
    uVar6 = FUN_00557c80(*puVar3);
    *(undefined4 *)(*(int *)(in_ECX + 0xc) + 8) = uVar6;
  }
  return 1;
}



void FUN_00558570(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00557430(*(int *)(in_ECX + 4),*(undefined4 *)(in_ECX + 8));
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  return;
}



int FUN_005585b0(int param_1,int param_2,int param_3)

{
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = local_4 & 0xffffff00;
  local_8 = local_8 & 0xffffff00;
  FUN_00557970(param_1,param_2,param_3,param_3,local_4,local_8);
  return param_3 + ((param_2 - param_1) / 0x14) * 0x14;
}



int FUN_00558610(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  for (; param_1 != param_2; param_1 = param_1 + 0x40) {
    FUN_00557770(param_1);
  }
  return (iVar1 >> 6) * 0x40 + param_3;
}



void FUN_00558650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_005579b0(param_1,param_2,param_3,param_3,param_3,0);
  return;
}



int FUN_00558680(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = param_2 - param_1;
  while (param_1 != param_2) {
    param_2 = param_2 + -0x40;
    FUN_00557770(param_2);
  }
  return param_3 + (iVar1 >> 6) * -0x40;
}



void FUN_005586c0(void)

{
  int iVar1;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x48) = 0;
  *(undefined4 *)(in_ECX + 0x4c) = 0;
  *(undefined4 *)(in_ECX + 0x54) = 0;
  *(undefined4 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x68) = 0;
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  *(undefined4 *)(in_ECX + 0x74) = 0;
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_00558770(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_28 [4];
  uint local_24;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc7be;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  _eh_vector_constructor_iterator_((void *)(in_ECX + 4),0x10,2,FUN_006ef4a0,FUN_00558570);
  local_4 = 0;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = local_24 & 0xffffff00;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(param_1,(int)pcVar3 - (int)(param_1 + 1));
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_006f0a00(local_28);
  if (0xf < local_10) {
    FUN_00401f20(local_24,uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00558840(uint *param_1,int param_2,float param_3,float *param_4)

{
  LONG *Destination;
  ushort *puVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  LONG LVar10;
  uint uVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int in_ECX;
  int iVar15;
  int iVar16;
  uint uVar17;
  short *psVar18;
  int *unaff_FS_OFFSET;
  uint uStack_74;
  uint *puStack_70;
  uint local_6c;
  float *local_64;
  uint uStack_58;
  uint uStack_50;
  int local_30;
  int local_2c;
  undefined1 local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bc7f3;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff7c;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar7 = (int *)FUN_005508a0(param_2,uVar6);
  if ((*(int *)(in_ECX + 8) != 0) &&
     ((param_1 != (uint *)0x0 || (param_1 = (uint *)FaceGen_DefaultGetter(), param_1 != (uint *)0x0)
      ))) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    if ((param_2 != 0) &&
       ((*(int *)(param_2 + 0xb4) != 0 && (cVar5 = FUN_00728ab0(1), cVar5 != '\0')))) {
      FUN_00728b60(&local_30);
    }
    if ((piVar7 == (int *)0x0) || (iVar8 = (**(code **)(*piVar7 + 0x54))(), iVar8 == 0)) {
      if (local_30 == 0) goto LAB_00558afb;
      local_6c = (uint)*(ushort *)(*(int *)(param_2 + 0xb4) + 8);
      local_64 = (float *)0x0;
      DAT_00b39d84 = 1;
    }
    else {
      local_64 = (float *)(**(code **)(*piVar7 + 0x54))();
      local_6c = (**(code **)(*piVar7 + 0x58))(0);
    }
    cVar5 = FUN_00551930();
    if (cVar5 == '\0') {
      if (*(int *)(*(int *)(in_ECX + 8) + 8) == 0) {
        iVar8 = FUN_00404fd0();
        if (iVar8 == 0) goto LAB_00558afb;
        iVar8 = FUN_00401f00(0x24);
        uStack_4 = 0;
        if (iVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = FUN_00558770(**(undefined4 **)(in_ECX + 8));
        }
        uStack_4 = 0xffffffff;
        *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = uVar9;
      }
      if (*(int *)(*(int *)(in_ECX + 8) + 8) == 0) goto LAB_00558afb;
    }
    Destination = (LONG *)(in_ECX + 0x14);
    LVar10 = InterlockedCompareExchange(Destination,1,0);
    uStack_4 = 1;
    if (LVar10 == 0) {
      uStack_74 = 0;
      puStack_70 = param_1;
      do {
        iVar8 = *(int *)(*(int *)(in_ECX + 8) + 8);
        iVar16 = *(int *)(iVar8 + 8 + uStack_74);
        if (iVar16 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (*(int *)(iVar8 + uStack_74 + 0xc) - iVar16) / 0x14;
          if (*puStack_70 < uVar6) {
            FUN_004a7a60("FaceGen - Tried to apply a coordinate that did not match the EGM basis.");
LAB_00558af5:
            InterlockedCompareExchange(Destination,0,1);
            goto LAB_00558afb;
          }
        }
        uVar17 = 0;
        if (uVar6 != 0) {
          iVar8 = 0;
          do {
            iVar16 = *(int *)(*(int *)(in_ECX + 8) + 8);
            iVar15 = *(int *)(iVar16 + 8 + uStack_74);
            iVar16 = iVar16 + 4 + uStack_74;
            if ((iVar15 == 0) || ((uint)((*(int *)(iVar16 + 8) - iVar15) / 0x14) <= uVar17)) {
              FUN_00984d5e();
            }
            iVar16 = *(int *)(iVar16 + 4);
            iVar15 = *(int *)(iVar8 + 8 + iVar16);
            if (iVar15 == 0) {
              uVar11 = 0;
            }
            else {
              uVar11 = (*(int *)(iVar8 + iVar16 + 0xc) - iVar15) / 6;
            }
            if (uVar11 < local_6c) {
              FUN_004a7a60("FaceGen - EGM basis did not match the provided model data.");
              goto LAB_00558af5;
            }
            uVar17 = uVar17 + 1;
            iVar8 = iVar8 + 0x14;
          } while (uVar17 < uVar6);
        }
        puStack_70 = puStack_70 + 6;
        uStack_74 = uStack_74 + 0x10;
      } while (uStack_74 < 0x20);
      uStack_50 = 0;
      do {
        iVar8 = *(int *)(*(int *)(in_ECX + 8) + 8);
        iVar15 = uStack_50 * 0x10;
        iVar16 = *(int *)(iVar8 + 8 + iVar15);
        if (iVar16 == 0) {
          uVar6 = 0;
        }
        else {
          uVar6 = (*(int *)(iVar8 + iVar15 + 0xc) - iVar16) / 0x14;
        }
        uStack_58 = 0;
        if (uVar6 != 0) {
          do {
            if ((param_1[uStack_50 * 6 + 3] == 0) ||
               ((int)(param_1[uStack_50 * 6 + 4] - param_1[uStack_50 * 6 + 3]) >> 2 == 0)) {
              FUN_00984d5e();
            }
            uVar17 = param_1[uStack_50 * 6 + 1];
            uVar11 = param_1[uStack_50 * 6 + 3];
            iVar8 = *(int *)(*(int *)(in_ECX + 8) + 8) + 4 + iVar15;
            if ((*(int *)(iVar8 + 4) == 0) ||
               ((uint)((*(int *)(iVar8 + 8) - *(int *)(iVar8 + 4)) / 0x14) <= uStack_58)) {
              FUN_00984d5e();
            }
            iVar16 = uStack_58 * 0x14;
            fVar4 = *(float *)(uVar11 + uVar17 * uStack_58 * 4) * param_3 *
                    *(float *)(*(int *)(iVar8 + 4) + iVar16);
            if (fVar4 != 0.0) {
              iVar8 = *(int *)(*(int *)(in_ECX + 8) + 8);
              iVar3 = *(int *)(iVar8 + 8 + iVar15);
              iVar8 = iVar8 + 4 + iVar15;
              if ((iVar3 == 0) || ((uint)((*(int *)(iVar8 + 8) - iVar3) / 0x14) <= uStack_58)) {
                FUN_00984d5e();
              }
              iVar3 = *(int *)(iVar8 + 4);
              psVar18 = *(short **)(iVar3 + 8 + iVar16);
              iVar8 = iVar3 + 4 + iVar16;
              if (*(short **)(iVar3 + 0xc + iVar16) < psVar18) {
                FUN_00984d5e();
              }
              uVar17 = (uint)*(ushort *)(*(int *)(param_2 + 0xb4) + 8);
              if (param_4 == (float *)0x0) {
                if (local_64 == (float *)0x0) {
                  uVar17 = 0;
                  if (local_6c != 0) {
                    do {
                      pfVar14 = (float *)(local_2c * uVar17 + local_30);
                      fStack_24 = *pfVar14;
                      fStack_20 = pfVar14[1];
                      fStack_1c = pfVar14[2];
                      if (iVar8 == 0) {
                        FUN_00984d5e();
                      }
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      fStack_24 = (float)(int)*psVar18 * fVar4 + fStack_24;
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      fStack_20 = (float)(int)psVar18[1] * fVar4 + fStack_20;
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      sVar2 = psVar18[2];
                      pfVar14 = (float *)(local_2c * uVar17 + local_30);
                      *pfVar14 = fStack_24;
                      pfVar14[1] = fStack_20;
                      fStack_1c = (float)(int)sVar2 * fVar4 + fStack_1c;
                      pfVar14[2] = fStack_1c;
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      uVar17 = uVar17 + 1;
                      psVar18 = psVar18 + 3;
                    } while (uVar17 < local_6c);
                  }
                }
                else {
                  puStack_70 = (uint *)0x0;
                  pfVar14 = local_64;
                  pfVar12 = local_64;
                  pfVar13 = local_64;
                  if (uVar17 != 0) {
                    do {
                      if (iVar8 == 0) {
                        FUN_00984d5e();
                      }
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      *pfVar12 = (float)(int)*psVar18 * fVar4 + *pfVar12;
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      pfVar12[1] = (float)(int)psVar18[1] * fVar4 + pfVar12[1];
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      pfVar13 = pfVar12 + 3;
                      pfVar12[2] = (float)(int)psVar18[2] * fVar4 + pfVar12[2];
                      pfVar12 = (float *)(local_2c * (int)puStack_70 + local_30);
                      *pfVar12 = *pfVar14;
                      pfVar12[1] = pfVar14[1];
                      pfVar12[2] = pfVar14[2];
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      puStack_70 = (uint *)((int)puStack_70 + 1);
                      psVar18 = psVar18 + 3;
                      pfVar14 = pfVar14 + 3;
                      pfVar12 = pfVar13;
                    } while (puStack_70 < uVar17);
                  }
                  if (puStack_70 < local_6c) {
                    iVar16 = local_6c - (int)puStack_70;
                    do {
                      if (iVar8 == 0) {
                        FUN_00984d5e();
                      }
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      *pfVar13 = (float)(int)*psVar18 * fVar4 + *pfVar13;
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      pfVar13[1] = (float)(int)psVar18[1] * fVar4 + pfVar13[1];
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      pfVar13[2] = (float)(int)psVar18[2] * fVar4 + pfVar13[2];
                      if (*(short **)(iVar8 + 8) <= psVar18) {
                        FUN_00984d5e();
                      }
                      psVar18 = psVar18 + 3;
                      iVar16 = iVar16 + -1;
                      pfVar13 = pfVar13 + 3;
                    } while (iVar16 != 0);
                  }
                }
              }
              else if (local_64 == (float *)0x0) {
                uVar17 = 0;
                if (local_6c != 0) {
                  pfVar14 = param_4 + 2;
                  do {
                    if (iVar8 == 0) {
                      FUN_00984d5e();
                    }
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    fStack_18 = (float)(int)*psVar18 * fVar4 + pfVar14[-2];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    fStack_14 = (float)(int)psVar18[1] * fVar4 + pfVar14[-1];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    fStack_10 = (float)(int)psVar18[2] * fVar4 + *pfVar14;
                    pfVar13 = (float *)(local_2c * uVar17 + local_30);
                    *pfVar13 = fStack_18;
                    pfVar13[1] = fStack_14;
                    pfVar13[2] = fStack_10;
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    uVar17 = uVar17 + 1;
                    psVar18 = psVar18 + 3;
                    pfVar14 = pfVar14 + 3;
                  } while (uVar17 < local_6c);
                }
              }
              else {
                puStack_70 = (uint *)0x0;
                pfVar14 = local_64;
                pfVar13 = local_64;
                pfVar12 = local_64;
                if (uVar17 != 0) {
                  do {
                    if (iVar8 == 0) {
                      FUN_00984d5e();
                    }
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    *pfVar12 = (float)(int)*psVar18 * fVar4 + *param_4;
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    pfVar12[1] = (float)(int)psVar18[1] * fVar4 + param_4[1];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    pfVar13 = pfVar12 + 3;
                    pfVar12[2] = (float)(int)psVar18[2] * fVar4 + param_4[2];
                    pfVar12 = (float *)(local_2c * (int)puStack_70 + local_30);
                    *pfVar12 = *pfVar14;
                    pfVar12[1] = pfVar14[1];
                    pfVar12[2] = pfVar14[2];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    puStack_70 = (uint *)((int)puStack_70 + 1);
                    psVar18 = psVar18 + 3;
                    pfVar14 = pfVar14 + 3;
                    pfVar12 = pfVar13;
                  } while (puStack_70 < uVar17);
                }
                if (puStack_70 < local_6c) {
                  iVar16 = local_6c - (int)puStack_70;
                  do {
                    if (iVar8 == 0) {
                      FUN_00984d5e();
                    }
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    *pfVar13 = (float)(int)*psVar18 * fVar4 + *param_4;
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    pfVar13[1] = (float)(int)psVar18[1] * fVar4 + param_4[1];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    pfVar13[2] = (float)(int)psVar18[2] * fVar4 + param_4[2];
                    if (*(short **)(iVar8 + 8) <= psVar18) {
                      FUN_00984d5e();
                    }
                    psVar18 = psVar18 + 3;
                    iVar16 = iVar16 + -1;
                    pfVar13 = pfVar13 + 3;
                  } while (iVar16 != 0);
                }
              }
            }
            uStack_58 = uStack_58 + 1;
          } while (uStack_58 < uVar6);
        }
        uStack_50 = uStack_50 + 1;
      } while (uStack_50 < 2);
      if (*(int *)(*(int *)(param_2 + 0xb4) + 0x1c) != 0) {
        puVar1 = (ushort *)(*(int *)(param_2 + 0xb4) + 0x2e);
        *puVar1 = *puVar1 | 1;
      }
      FUN_00728b20();
      InterlockedCompareExchange(Destination,0,1);
      uVar9 = 1;
      goto LAB_00558afd;
    }
  }
LAB_00558afb:
  uVar9 = 0;
LAB_00558afd:
  *unaff_FS_OFFSET = local_c;
  return uVar9;
}



undefined4 FUN_00559190(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar3 = *(undefined4 **)(in_ECX + 8);
  if (puVar3 == (undefined4 *)0x0) {
LAB_005591bb:
    *unaff_FS_OFFSET = local_c;
    return 0;
  }
  if (puVar3[2] == 0) {
    if (*(ushort *)(puVar3 + 1) == 0xffff) {
      pcVar5 = (char *)*puVar3;
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(puVar3 + 1);
    }
    if (uVar6 == 0) goto LAB_005591bb;
    iVar7 = FUN_00401f00(0x24,uVar4);
    local_4 = 0;
    if (iVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00558770(**(undefined4 **)(in_ECX + 8));
    }
    *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = uVar8;
  }
  *unaff_FS_OFFSET = local_c;
  return 1;
}



void FUN_00559240(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_005585b0(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00557430(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_005592a0(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int in_ECX;
  
  if ((param_2 == 0) || (param_2 != param_4)) {
    FUN_00984d5e();
  }
  if (param_3 != param_5) {
    uVar1 = FUN_00558610(param_5,*(undefined4 *)(in_ECX + 8),param_3);
    FUN_00557740(uVar1,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar1;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



void FUN_00559300(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00557880(param_1,param_2,param_3);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00559330(int param_1,int param_2,int param_3,char param_4)

{
  ushort *puVar1;
  ushort uVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  uint uVar13;
  int *unaff_FS_OFFSET;
  undefined4 *local_4d0;
  int local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 uStack_4c0;
  undefined1 auStack_4bc [28];
  undefined **local_4a0;
  undefined4 *local_298;
  int local_290;
  undefined4 local_18;
  undefined4 local_14;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc88e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_4d0;
  uVar7 = DAT_00b30aac ^ (uint)&stack0xfffffb20;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4d0 = (undefined4 *)0x0;
  local_4cc = param_3;
  if ((*(int *)(in_ECX + 8) == 0) && (param_1 != 0)) {
    local_4d0 = (undefined4 *)FUN_00401f00(0x24,uVar7);
    local_4 = 0;
    if (local_4d0 == (undefined4 *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00556900();
    }
    local_4 = 0xffffffff;
    *(undefined4 *)(in_ECX + 8) = uVar8;
    puVar9 = (undefined4 *)FUN_00401f00(0x10,uVar7);
    local_4 = 1;
    local_4d0 = puVar9;
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      FUN_00721350();
      *puVar9 = &PTR_FUN_00a64a3c;
      puVar9[3] = in_ECX;
    }
    local_4 = 0xffffffff;
    FUN_0075fa90(puVar9);
    uVar7 = 0;
    FUN_004028d0(param_1,0);
    if (param_2 != 0) {
      local_4c8 = 0;
      local_4c4 = 0;
      local_4 = 2;
      FUN_00713a30();
      local_4a0 = &PTR_FUN_00a3690c;
      local_14 = 0;
      local_18 = 0;
      local_4._0_1_ = 3;
      cVar6 = FUN_006f9980(param_2,0);
      if (cVar6 == '\0') {
        FUN_004a7a60("Failed to load \'%s\' in BSFaceGenModel::LoadModelMesh.",param_2);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00436420();
        FUN_00401f20(0);
        uVar8 = 0;
        goto LAB_0055983b;
      }
      if (local_290 != 1) {
        FUN_004a7a60("Bad object count in \'%s\' in BSFaceGenModel::LoadModelMesh.",param_2);
        local_4 = CONCAT31(local_4._1_3_,2);
        FUN_00436420();
        local_4 = 0xffffffff;
        FUN_00402da0();
        uVar8 = 0;
        goto LAB_0055983b;
      }
      FUN_0075fa90(*local_298);
      iVar12 = *(int *)(in_ECX + 8);
      if (*(int *)(iVar12 + 0xc) != 0) {
        uVar13 = (uint)*(ushort *)(*(int *)(iVar12 + 0xc) + 0xb6);
        if (uVar13 != 0) {
          do {
            if ((uVar7 < *(ushort *)(*(int *)(iVar12 + 0xc) + 0xb6)) &&
               (piVar3 = *(int **)(*(int *)(*(int *)(iVar12 + 0xc) + 0xb0) + uVar7 * 4),
               piVar3 != (int *)0x0)) {
              uVar8 = (**(code **)(*piVar3 + 0x10))();
            }
            else {
              uVar8 = 0;
            }
            FUN_0075fa90(uVar8);
            iVar12 = *(int *)(in_ECX + 8);
          } while ((*(int *)(iVar12 + 0x10) == 0) && (uVar7 = uVar7 + 1, uVar7 < uVar13));
        }
        if (*(int *)(*(int *)(in_ECX + 8) + 0x10) != 0) {
          FUN_00708560(&local_4d0,6);
          FUN_007016a0();
          FUN_006fffd0();
          FUN_006ffc60();
          iVar12 = *(int *)(*(int *)(in_ECX + 8) + 0x10);
          if (*(int *)(iVar12 + 0xb8) != 0) {
            *(int *)(*(int *)(iVar12 + 0xb8) + 0x10) = iVar12;
          }
          puVar1 = (ushort *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + 0x18);
          *puVar1 = *puVar1 | 2;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,2);
      FUN_00436420();
      local_4 = 0xffffffff;
      FUN_00401f20(0);
    }
    iVar12 = local_4cc;
    iVar10 = 0;
    if (local_4cc != 0) {
      local_4cc = FUN_00401f00(0xa0);
      local_4 = 4;
      if (local_4cc != 0) {
        iVar10 = FUN_005586c0();
      }
      local_4 = 0xffffffff;
      FUN_00414750(iVar12);
      local_4 = 5;
      local_4d0 = (undefined4 *)0x1;
      cVar6 = FUN_006f4b50(auStack_4bc,iVar10);
      if (cVar6 == '\0') {
LAB_0055967c:
        bVar5 = false;
      }
      else {
        uVar2 = *(ushort *)(*(int *)(*(int *)(*(int *)(in_ECX + 8) + 0x10) + 0xb4) + 8);
        uVar7 = FUN_00556800();
        if (uVar2 != uVar7) goto LAB_0055967c;
        bVar5 = true;
      }
      local_4 = 0xffffffff;
      FUN_0079ab00();
      if (bVar5) {
        if (param_4 == '\0') {
          local_4cc = FUN_00401f00(0x18);
          local_4 = 7;
          if (local_4cc == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_0055b000(iVar10);
          }
          local_4 = 0xffffffff;
          FUN_0075fa90(uVar8);
          iVar12 = *(int *)(in_ECX + 8);
          uVar13 = (uint)*(ushort *)(*(int *)(*(int *)(iVar12 + 0x10) + 0xb4) + 8);
          uVar7 = FUN_006f1080();
          if (uVar13 < uVar7) {
            iVar11 = FUN_006f1080();
            *(uint *)(iVar12 + 0x18) = iVar11 - uVar13;
            lVar4 = (ulonglong)*(uint *)(*(int *)(in_ECX + 8) + 0x18) * 0xc;
            uVar8 = FUN_00401f00(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
            *(undefined4 *)(*(int *)(in_ECX + 8) + 0x14) = uVar8;
            uVar7 = 0;
            if (*(int *)(*(int *)(in_ECX + 8) + 0x18) != 0) {
              iVar12 = 0;
              do {
                iVar11 = FUN_00556800();
                puVar9 = (undefined4 *)FUN_006f10a0(iVar11 + uVar7);
                local_4c8 = *puVar9;
                iVar11 = FUN_00556800();
                iVar11 = FUN_006f10a0(iVar11 + uVar7);
                local_4c4 = *(undefined4 *)(iVar11 + 4);
                iVar11 = FUN_00556800();
                iVar11 = FUN_006f10a0(iVar11 + uVar7);
                uStack_4c0 = *(undefined4 *)(iVar11 + 8);
                puVar9 = (undefined4 *)(*(int *)(*(int *)(in_ECX + 8) + 0x14) + iVar12);
                *puVar9 = local_4c8;
                puVar9[1] = local_4c4;
                puVar9[2] = uStack_4c0;
                uVar7 = uVar7 + 1;
                iVar12 = iVar12 + 0xc;
              } while (uVar7 < *(uint *)(*(int *)(in_ECX + 8) + 0x18));
            }
          }
        }
        else {
          local_4cc = FUN_00401f00(0xc);
          local_4 = 6;
          if (local_4cc == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_0055c3f0(iVar10);
          }
          local_4 = 0xffffffff;
          FUN_0075fa90(uVar8);
        }
      }
      if (iVar10 != 0) {
        FUN_00557cf0();
        FUN_00401f20(iVar10);
      }
    }
    iVar12 = *(int *)(in_ECX + 8);
    if ((iVar12 != 0) && (*(int *)(iVar12 + 0x10) != 0)) {
      iVar10 = *(int *)(*(int *)(iVar12 + 0x10) + 0xb4);
      if (*(int *)(iVar12 + 0x1c) == 0) {
        *(ushort *)(iVar10 + 0x2e) = *(ushort *)(iVar10 + 0x2e) & 0xfff;
      }
      else {
        *(ushort *)(iVar10 + 0x2e) = *(ushort *)(iVar10 + 0x2e) & 0xfff | 0x8000;
      }
    }
  }
  uVar8 = 1;
LAB_0055983b:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



undefined4 FUN_00559870(int param_1,int *param_2)

{
  undefined4 *puVar1;
  char cVar2;
  LONG LVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  cVar2 = FUN_00556a70(param_2);
  if (cVar2 != '\0') {
    cVar2 = FUN_00558840(param_1,*param_2,0x3f800000,0);
    if (cVar2 != '\0') {
      return 1;
    }
    puVar1 = (undefined4 *)*param_2;
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *param_2 = 0;
    }
  }
  return 0;
}



void FUN_005598f0(void)

{
  uint uVar1;
  uint uVar2;
  int in_ECX;
  undefined1 local_8 [8];
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  FUN_00559240(local_8,in_ECX,uVar2,in_ECX,uVar1);
  return;
}



void FUN_00559930(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = *(uint *)(in_ECX + 8);
  if (uVar1 < *(uint *)(in_ECX + 4)) {
    FUN_00984d5e();
  }
  uVar2 = *(uint *)(in_ECX + 4);
  if (*(uint *)(in_ECX + 8) < uVar2) {
    FUN_00984d5e();
  }
  if (uVar2 != uVar1) {
    uVar3 = FUN_00558610(uVar1,*(undefined4 *)(in_ECX + 8),uVar2);
    FUN_00557740(uVar3,*(undefined4 *)(in_ECX + 8));
    *(undefined4 *)(in_ECX + 8) = uVar3;
  }
  return;
}



void FUN_00559980(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00557a10(param_1,param_2,param_3);
  return;
}



void FUN_005599b0(void)

{
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_14 [8];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc8d6;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar2 = *(uint *)(in_ECX + 0xc);
  pvVar1 = (void *)(in_ECX + 4);
  local_4 = 0;
  if (uVar2 < *(uint *)(in_ECX + 8)) {
    FUN_00984d5e(uVar4);
  }
  uVar3 = *(uint *)(in_ECX + 8);
  if (*(uint *)(in_ECX + 0xc) < uVar3) {
    FUN_00984d5e(uVar4);
  }
  FUN_00559240(local_14,pvVar1,uVar3,pvVar1,uVar2);
  uVar2 = *(uint *)(in_ECX + 0x1c);
  if (uVar2 < *(uint *)(in_ECX + 0x18)) {
    FUN_00984d5e(uVar4);
  }
  uVar3 = *(uint *)(in_ECX + 0x18);
  if (*(uint *)(in_ECX + 0x1c) < uVar3) {
    FUN_00984d5e(uVar4);
  }
  FUN_00559240(local_14,in_ECX + 0x14,uVar3,in_ECX + 0x14,uVar2);
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_(pvVar1,0x10,2,FUN_00558570);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559a70(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc916;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(uint *)(in_ECX + 0xc);
  local_4 = 0;
  if (uVar1 < *(uint *)(in_ECX + 8)) {
    FUN_00984d5e(uVar3);
  }
  uVar2 = *(uint *)(in_ECX + 8);
  if (*(uint *)(in_ECX + 0xc) < uVar2) {
    FUN_00984d5e(uVar3);
  }
  if (uVar2 != uVar1) {
    uVar4 = FUN_00558610(uVar1,*(undefined4 *)(in_ECX + 0xc),uVar2);
    FUN_00557740(uVar4,*(undefined4 *)(in_ECX + 0xc));
    *(undefined4 *)(in_ECX + 0xc) = uVar4;
  }
  uVar1 = *(uint *)(in_ECX + 0x1c);
  if (uVar1 < *(uint *)(in_ECX + 0x18)) {
    FUN_00984d5e(uVar3);
  }
  uVar2 = *(uint *)(in_ECX + 0x18);
  if (*(uint *)(in_ECX + 0x1c) < uVar2) {
    FUN_00984d5e(uVar3);
  }
  if (uVar2 != uVar1) {
    uVar4 = FUN_00558610(uVar1,*(undefined4 *)(in_ECX + 0x1c),uVar2);
    FUN_00557740(uVar4,*(undefined4 *)(in_ECX + 0x1c));
    *(undefined4 *)(in_ECX + 0x1c) = uVar4;
  }
  local_4 = 0xffffffff;
  _eh_vector_destructor_iterator_((void *)(in_ECX + 4),0x10,2,FUN_00557b30);
  *unaff_FS_OFFSET = local_c;
  return;
}



byte FUN_00559b50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  
  if (DAT_00b120b4 == '\0') {
    return 0;
  }
  bVar1 = FUN_00559330(param_1,param_2,param_3,param_5);
  bVar2 = FUN_00556a00(param_4);
  return bVar2 | bVar1;
}



void FUN_00559ba0(void)

{
  int iVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc948;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  LVar3 = InterlockedCompareExchange((LONG *)(in_ECX + 0x14),1,0);
  local_4 = 0;
  if (LVar3 == 0) {
    if ((*(int *)(in_ECX + 8) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 8) + 8), iVar1 != 0)) {
      FUN_005599b0(uVar2);
      FUN_00401f20(iVar1);
      *(undefined4 *)(*(int *)(in_ECX + 8) + 8) = 0;
    }
    InterlockedCompareExchange((LONG *)(in_ECX + 0x14),0,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559c40(void)

{
  int iVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bc948;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  LVar3 = InterlockedCompareExchange((LONG *)(in_ECX + 0x18),1,0);
  local_4 = 0;
  if (LVar3 == 0) {
    if ((*(int *)(in_ECX + 0xc) != 0) && (iVar1 = *(int *)(*(int *)(in_ECX + 0xc) + 8), iVar1 != 0))
    {
      FUN_00559a70(uVar2);
      FUN_00401f20(iVar1);
      *(undefined4 *)(*(int *)(in_ECX + 0xc) + 8) = 0;
    }
    InterlockedCompareExchange((LONG *)(in_ECX + 0x18),0,1);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559ce0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  LONG LVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bc9a4;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[7];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[7] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[8];
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[8] = 0;
  }
  if (in_ECX[5] != 0) {
    FUN_00401f20(in_ECX[5],uVar3);
  }
  iVar2 = in_ECX[2];
  if (iVar2 != 0) {
    FUN_005599b0();
    FUN_00401f20(iVar2);
  }
  puVar1 = (undefined4 *)in_ECX[8];
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[7];
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar4 = InterlockedDecrement(puVar1 + 1);
    if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559e90(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009be328;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = in_ECX[2];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00559a70(uVar2);
    FUN_00401f20(iVar1);
  }
  FUN_00401f20(*in_ECX);
  *in_ECX = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559f10(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 8);
  if (((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) && (*(int *)(*(int *)(iVar1 + 0x20) + 4) == 1)
     ) {
    FUN_00559ce0();
    FUN_00401f20(iVar1);
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}



void FUN_00559f50(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64a98;
  iVar1 = in_ECX[2];
  local_4 = 0;
  if (iVar1 != 0) {
    FUN_00559ce0(uVar2);
    FUN_00401f20(iVar1);
  }
  iVar1 = in_ECX[3];
  if (iVar1 != 0) {
    FUN_00559e90();
    FUN_00401f20(iVar1);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00559fe0(byte param_1)

{
  FUN_00559f50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055a010(uint param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc9c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a64c58;
  in_ECX[2] = param_1;
  in_ECX[3] = param_2;
  if (param_1 != 0) {
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 4),uVar1);
    in_ECX[1] = uVar2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[1] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055a0c0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bc9c8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a64c48;
  in_ECX[2] = param_1;
  if (param_1 != 0) {
    uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 0xc >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 0xc),uVar1);
    in_ECX[1] = uVar2;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[1] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055a150(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a64c48;
  if (in_ECX[1] != 0) {
    FUN_00401f20(in_ECX[1]);
  }
  *in_ECX = &PTR_LAB_00a64c38;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055a6b0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a64c58;
  if (in_ECX[1] != 0) {
    FUN_00401f20(in_ECX[1]);
  }
  *in_ECX = &PTR_LAB_00a64c38;
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055a6f0(int param_1,int param_2,int *param_3,float param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  int iVar9;
  uint uVar10;
  
  if ((((param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) &&
     (((iVar8 = (**(code **)(*param_3 + 0x54))(), iVar8 != 0 && (param_4 < 0.0 == (param_4 == 0.0)))
      && ((param_4 <= 1.0 && (*(int *)(in_ECX + 4) != 0)))))) {
    iVar8 = (**(code **)(*param_3 + 0x54))();
    uVar10 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar9 = *(int *)(in_ECX + 0xc) + uVar10;
        iVar7 = *(int *)(*(int *)(in_ECX + 4) + uVar10 * 4) * 0xc;
        iVar1 = iVar8 + iVar9 * 0xc;
        uVar10 = uVar10 + 1;
        fVar3 = *(float *)(iVar1 + 4);
        fVar4 = *(float *)(iVar7 + 4 + iVar8);
        fVar5 = *(float *)(iVar1 + 8);
        fVar6 = *(float *)(iVar7 + 8 + iVar8);
        *(float *)(iVar7 + param_1) =
             *(float *)(iVar7 + param_1) +
             (*(float *)(iVar8 + iVar9 * 0xc) - *(float *)(iVar7 + iVar8)) * param_4;
        *(float *)(iVar7 + 4 + param_1) =
             *(float *)(iVar7 + 4 + param_1) + (fVar3 - fVar4) * param_4;
        pfVar2 = (float *)(iVar7 + 8 + param_1);
        *pfVar2 = *pfVar2 + (fVar5 - fVar6) * param_4;
      } while (uVar10 < *(uint *)(in_ECX + 8));
    }
  }
  return;
}



void FUN_0055a800(int *param_1,int param_2,int *param_3,float param_4)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  float *pfVar9;
  uint uVar10;
  
  if ((((*param_1 != 0) && (param_2 != 0)) && (param_3 != (int *)0x0)) &&
     (((param_4 < 0.0 == (param_4 == 0.0) && (param_4 <= 1.0)) &&
      ((*(int *)(in_ECX + 4) != 0 && (iVar8 = (**(code **)(*param_3 + 0x54))(), iVar8 != 0)))))) {
    uVar10 = 0;
    if (*(int *)(in_ECX + 8) != 0) {
      do {
        iVar7 = *(int *)(*(int *)(in_ECX + 4) + uVar10 * 4);
        pfVar9 = (float *)(param_1[1] * iVar7 + *param_1);
        pfVar1 = (float *)(iVar8 + iVar7 * 0xc);
        pfVar2 = (float *)(iVar8 + (*(int *)(in_ECX + 0xc) + uVar10) * 0xc);
        uVar10 = uVar10 + 1;
        fVar3 = pfVar2[1];
        fVar4 = pfVar1[1];
        fVar5 = pfVar2[2];
        fVar6 = pfVar1[2];
        *pfVar9 = (*pfVar2 - *pfVar1) * param_4 + *pfVar9;
        pfVar9[1] = pfVar9[1] + (fVar3 - fVar4) * param_4;
        pfVar9[2] = pfVar9[2] + (fVar5 - fVar6) * param_4;
      } while (uVar10 < *(uint *)(in_ECX + 8));
    }
    return;
  }
  return;
}



void FUN_0055ace0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  return;
}



void FUN_0055ad30(void)

{
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_ECX;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ca4b8;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64ccc;
  local_4 = 0;
  if (in_ECX[2] != 0) {
    uVar4 = 0;
    do {
      if ((*(int *)(in_ECX[2] + uVar4) != 0) &&
         (puVar1 = *(undefined4 **)(in_ECX[2] + uVar4), puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar3);
      }
      uVar4 = uVar4 + 4;
    } while (uVar4 < 0x34);
    FUN_00401f20(in_ECX[2]);
  }
  if (in_ECX[3] != 0) {
    uVar3 = 0;
    do {
      if ((*(int *)(uVar3 + in_ECX[3]) != 0) &&
         (puVar1 = *(undefined4 **)(uVar3 + in_ECX[3]), puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x44);
    FUN_00401f20(in_ECX[3]);
  }
  if (in_ECX[4] != 0) {
    uVar3 = 0;
    do {
      if ((*(int *)(in_ECX[4] + uVar3) != 0) &&
         (puVar1 = *(undefined4 **)(in_ECX[4] + uVar3), puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      uVar3 = uVar3 + 4;
    } while (uVar3 < 0x40);
    FUN_00401f20(in_ECX[4]);
  }
  piVar2 = (int *)in_ECX[5];
  if (piVar2 != (int *)0x0) {
    if ((*piVar2 != 0) && ((undefined4 *)*piVar2 != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
    FUN_00401f20(in_ECX[5]);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055aef0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cfdd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64d20;
  local_4 = 0;
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1,uVar1);
  }
  *in_ECX = &PTR_FUN_00a3fcf8;
  InterlockedDecrement((LONG *)&DAT_00b3fd64);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055afc0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a64c6c;
  if (in_ECX[3] != 0) {
    FUN_00401f20(in_ECX[3]);
  }
  FUN_00721410();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_0055b000(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *in_ECX;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int *unaff_FS_OFFSET;
  uint local_54;
  uint local_48;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar3 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bca50;
  local_c = *unaff_FS_OFFSET;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffff98;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a64ccc;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  if (param_1 == 0) {
LAB_0055c3b8:
    *unaff_FS_OFFSET = local_c;
    return in_ECX;
  }
  uVar13 = 0;
LAB_0055b069:
  for (; (*(int *)(param_1 + 0x84) != 0 &&
         (uVar13 < (uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c)));
      uVar13 = uVar13 + 1) {
    iVar10 = 0;
    iVar12 = uVar13 * 0x2c;
    while( true ) {
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e(uVar4);
      }
      iVar5 = *(int *)(param_1 + 0x84) + iVar12;
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        pcVar7 = (char *)(iVar5 + 4);
      }
      else {
        pcVar7 = *(char **)(iVar5 + 4);
      }
      iVar5 = __stricmp((&PTR_s_Anger_00b11ff0)[iVar10],pcVar7);
      if (iVar5 == 0) break;
      iVar10 = iVar10 + 1;
      if (0xc < iVar10) goto code_r0x0055b106;
    }
    if (in_ECX[2] == 0) {
      pvVar6 = (void *)FUN_00401f00(0x34);
      in_ECX[2] = pvVar6;
      _memset(pvVar6,0,0x34);
    }
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(param_1 + 0x84) + 0x1c + iVar12;
    iVar15 = *(int *)(iVar5 + 4);
    if (iVar15 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = (*(int *)(iVar5 + 8) - iVar15) / 0xc;
    }
    iVar5 = FUN_00401f00(0xc);
    local_4._0_1_ = 1;
    if (iVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_0055a0c0(uVar14);
    }
    *(undefined4 *)(in_ECX[2] + iVar10 * 4) = uVar9;
    iVar10 = *(int *)(*(int *)(in_ECX[2] + iVar10 * 4) + 4);
    uVar11 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (uVar14 == 0) goto LAB_0055bc08;
    iVar5 = 0;
    do {
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar15 = *(int *)(param_1 + 0x84) + iVar12;
      if ((*(int *)(iVar15 + 0x20) == 0) ||
         ((uint)((*(int *)(iVar15 + 0x24) - *(int *)(iVar15 + 0x20)) / 0xc) <= uVar11)) {
        FUN_00984d5e();
      }
      iVar15 = *(int *)(iVar15 + 0x20);
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar16 = *(int *)(param_1 + 0x84) + iVar12;
      if ((*(int *)(iVar16 + 0x20) == 0) ||
         ((uint)((*(int *)(iVar16 + 0x24) - *(int *)(iVar16 + 0x20)) / 0xc) <= uVar11)) {
        FUN_00984d5e();
      }
      iVar16 = *(int *)(iVar16 + 0x20);
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar17 = *(int *)(param_1 + 0x84) + iVar12;
      if ((*(int *)(iVar17 + 0x20) == 0) ||
         ((uint)((*(int *)(iVar17 + 0x24) - *(int *)(iVar17 + 0x20)) / 0xc) <= uVar11)) {
        FUN_00984d5e();
      }
      puVar8 = (undefined4 *)(*(int *)(iVar17 + 0x20) + iVar5);
      uVar9 = *(undefined4 *)(iVar16 + iVar5 + 4);
      uVar11 = uVar11 + 1;
      uVar1 = *(undefined4 *)(iVar15 + iVar5 + 8);
      iVar5 = iVar5 + 0xc;
      *(undefined4 *)(iVar10 + -0xc + iVar5) = *puVar8;
      *(undefined4 *)(iVar10 + -8 + iVar5) = uVar9;
      *(undefined4 *)(iVar10 + -4 + iVar5) = uVar1;
    } while (uVar11 < uVar14);
  }
  param_1 = 0;
LAB_0055bc20:
  for (; (*(int *)(iVar3 + 0x94) != 0 &&
         (param_1 < (uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30)));
      param_1 = param_1 + 1) {
    iVar12 = 0;
    iVar10 = param_1 * 0x30;
    while( true ) {
      if ((*(int *)(iVar3 + 0x94) == 0) ||
         ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
        FUN_00984d5e(uVar4);
      }
      iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        pcVar7 = (char *)(iVar5 + 4);
      }
      else {
        pcVar7 = *(char **)(iVar5 + 4);
      }
      iVar5 = __stricmp((&PTR_s_Anger_00b11ff0)[iVar12],pcVar7);
      if (iVar5 == 0) break;
      iVar12 = iVar12 + 1;
      if (0xc < iVar12) goto code_r0x0055bcba;
    }
    if (in_ECX[2] == 0) {
      pvVar6 = (void *)FUN_00401f00(0x34);
      in_ECX[2] = pvVar6;
      _memset(pvVar6,0,0x34);
    }
    if (*(int *)(in_ECX[2] + iVar12 * 4) != 0) {
      if ((*(int *)(iVar3 + 0x94) == 0) ||
         ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
        FUN_00984d5e();
      }
      iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
      if (*(uint *)(iVar5 + 0x18) < 0x10) {
        iVar5 = iVar5 + 4;
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
      FUN_004a7a60("Statistical and Differential FaceGen morphs found for expression \"%s\".  Only statistical will be used."
                   ,iVar5);
      puVar8 = *(undefined4 **)(in_ECX[2] + iVar12 * 4);
      if (puVar8 != (undefined4 *)0x0) {
        (**(code **)*puVar8)(1);
      }
    }
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar10 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(int *)(iVar10 + 0x24) == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = *(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2;
    }
    iVar5 = FUN_00401f00(0x10);
    local_4._0_1_ = 5;
    if (iVar5 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = FUN_0055a010(uVar13,*(undefined4 *)(iVar10 + 0x1c));
    }
    *(undefined4 *)(in_ECX[2] + iVar12 * 4) = uVar9;
    iVar12 = *(int *)(*(int *)(in_ECX[2] + iVar12 * 4) + 4);
    uVar14 = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (uVar13 == 0) goto LAB_0055c3a6;
    do {
      if ((*(int *)(iVar10 + 0x24) == 0) ||
         ((uint)(*(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2) <= uVar14)) {
        FUN_00984d5e();
      }
      *(undefined4 *)(iVar12 + uVar14 * 4) = *(undefined4 *)(*(int *)(iVar10 + 0x24) + uVar14 * 4);
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
  goto LAB_0055c3b8;
code_r0x0055bcba:
  iVar12 = 0;
  while( true ) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_s_BlinkLeft_00b12028)[iVar12],pcVar7);
    if (iVar5 == 0) break;
    iVar12 = iVar12 + 1;
    if (0x10 < iVar12) goto code_r0x0055be92;
  }
  if (in_ECX[3] == 0) {
    pvVar6 = (void *)FUN_00401f00(0x44);
    in_ECX[3] = pvVar6;
    _memset(pvVar6,0,0x44);
  }
  if (*(int *)(in_ECX[3] + iVar12 * 4) != 0) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar5 = iVar5 + 4;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    FUN_004a7a60("Statistical and Differential FaceGen morphs found for modifier \"%s\".  Only statistical will be used."
                 ,iVar5);
    puVar8 = *(undefined4 **)(in_ECX[3] + iVar12 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  if ((*(int *)(iVar3 + 0x94) == 0) ||
     ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
    FUN_00984d5e();
  }
  iVar10 = *(int *)(iVar3 + 0x94) + iVar10;
  if (*(int *)(iVar10 + 0x24) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2;
  }
  iVar5 = FUN_00401f00(0x10);
  local_4._0_1_ = 6;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a010(uVar13,*(undefined4 *)(iVar10 + 0x1c));
  }
  *(undefined4 *)(in_ECX[3] + iVar12 * 4) = uVar9;
  iVar12 = *(int *)(*(int *)(in_ECX[3] + iVar12 * 4) + 4);
  uVar14 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar13 == 0) goto LAB_0055c3a6;
  do {
    if ((*(int *)(iVar10 + 0x24) == 0) ||
       ((uint)(*(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2) <= uVar14)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(iVar12 + uVar14 * 4) = *(undefined4 *)(*(int *)(iVar10 + 0x24) + uVar14 * 4);
    uVar14 = uVar14 + 1;
  } while (uVar14 < uVar13);
  param_1 = param_1 + 1;
  goto LAB_0055bc20;
code_r0x0055be92:
  iVar12 = 0;
  while( true ) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_DAT_00b12070)[iVar12],pcVar7);
    if (iVar5 == 0) break;
    iVar12 = iVar12 + 1;
    if (0xf < iVar12) goto code_r0x0055c06a;
  }
  if (in_ECX[4] == 0) {
    pvVar6 = (void *)FUN_00401f00(0x40);
    in_ECX[4] = pvVar6;
    _memset(pvVar6,0,0x40);
  }
  if (*(int *)(in_ECX[4] + iVar12 * 4) != 0) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar5 = iVar5 + 4;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    FUN_004a7a60("Statistical and Differential FaceGen morphs found for phoneme \"%s\".  Only statistical will be used."
                 ,iVar5);
    puVar8 = *(undefined4 **)(in_ECX[4] + iVar12 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  if ((*(int *)(iVar3 + 0x94) == 0) ||
     ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
    FUN_00984d5e();
  }
  iVar10 = *(int *)(iVar3 + 0x94) + iVar10;
  if (*(int *)(iVar10 + 0x24) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2;
  }
  iVar5 = FUN_00401f00(0x10);
  local_4._0_1_ = 7;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a010(uVar13,*(undefined4 *)(iVar10 + 0x1c));
  }
  *(undefined4 *)(in_ECX[4] + iVar12 * 4) = uVar9;
  iVar12 = *(int *)(*(int *)(in_ECX[4] + iVar12 * 4) + 4);
  uVar14 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar13 == 0) goto LAB_0055c3a6;
  do {
    if ((*(int *)(iVar10 + 0x24) == 0) ||
       ((uint)(*(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2) <= uVar14)) {
      FUN_00984d5e();
    }
    *(undefined4 *)(iVar12 + uVar14 * 4) = *(undefined4 *)(*(int *)(iVar10 + 0x24) + uVar14 * 4);
    uVar14 = uVar14 + 1;
  } while (uVar14 < uVar13);
  param_1 = param_1 + 1;
  goto LAB_0055bc20;
code_r0x0055c06a:
  iVar12 = 0;
  while( true ) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_s_VampireMorph_00b12024)[iVar12],pcVar7);
    if (iVar5 == 0) break;
    iVar12 = iVar12 + 1;
    if (0 < iVar12) goto code_r0x0055c242;
  }
  if (in_ECX[5] == 0) {
    puVar8 = (undefined4 *)FUN_00401f00(4);
    in_ECX[5] = puVar8;
    *puVar8 = 0;
  }
  if (*(int *)(in_ECX[5] + iVar12 * 4) != 0) {
    if ((*(int *)(iVar3 + 0x94) == 0) ||
       ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(iVar3 + 0x94) + iVar10;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      iVar5 = iVar5 + 4;
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
    FUN_004a7a60("Statistical and Differential FaceGen morphs found for Custom Morph \"%s\".  Only statistical will be used."
                 ,iVar5);
    puVar8 = *(undefined4 **)(in_ECX[5] + iVar12 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  if ((*(int *)(iVar3 + 0x94) == 0) ||
     ((uint)((*(int *)(iVar3 + 0x98) - *(int *)(iVar3 + 0x94)) / 0x30) <= param_1)) {
    FUN_00984d5e();
  }
  iVar10 = *(int *)(iVar3 + 0x94) + iVar10;
  if (*(int *)(iVar10 + 0x24) == 0) {
    uVar13 = 0;
  }
  else {
    uVar13 = *(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2;
  }
  iVar5 = FUN_00401f00(0x10);
  local_4._0_1_ = 8;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a010(uVar13,*(undefined4 *)(iVar10 + 0x1c));
  }
  *(undefined4 *)(in_ECX[5] + iVar12 * 4) = uVar9;
  iVar12 = *(int *)(*(int *)(in_ECX[5] + iVar12 * 4) + 4);
  uVar14 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar13 != 0) {
    do {
      if ((*(int *)(iVar10 + 0x24) == 0) ||
         ((uint)(*(int *)(iVar10 + 0x28) - *(int *)(iVar10 + 0x24) >> 2) <= uVar14)) {
        FUN_00984d5e();
      }
      *(undefined4 *)(iVar12 + uVar14 * 4) = *(undefined4 *)(*(int *)(iVar10 + 0x24) + uVar14 * 4);
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar13);
  }
LAB_0055c3a6:
  param_1 = param_1 + 1;
  goto LAB_0055bc20;
code_r0x0055c242:
  param_1 = param_1 + 1;
  goto LAB_0055bc20;
code_r0x0055b106:
  iVar10 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(param_1 + 0x84) + iVar12;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_s_BlinkLeft_00b12028)[iVar10],pcVar7);
    if (iVar5 == 0) break;
    iVar10 = iVar10 + 1;
    if (0x10 < iVar10) goto code_r0x0055b3e7;
  }
  if (in_ECX[3] == 0) {
    pvVar6 = (void *)FUN_00401f00(0x44);
    in_ECX[3] = pvVar6;
    _memset(pvVar6,0,0x44);
  }
  if ((*(int *)(param_1 + 0x84) == 0) ||
     ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
    FUN_00984d5e();
  }
  iVar5 = *(int *)(param_1 + 0x84) + 0x1c + iVar12;
  iVar15 = *(int *)(iVar5 + 4);
  if (iVar15 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (*(int *)(iVar5 + 8) - iVar15) / 0xc;
  }
  iVar5 = FUN_00401f00(0xc);
  local_4._0_1_ = 2;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a0c0(uVar14);
  }
  *(undefined4 *)(in_ECX[3] + iVar10 * 4) = uVar9;
  iVar10 = *(int *)(*(int *)(in_ECX[3] + iVar10 * 4) + 4);
  uVar11 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar14 == 0) goto LAB_0055bc08;
  iVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar15 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar15 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar15 + 0x24) - *(int *)(iVar15 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    iVar15 = *(int *)(iVar15 + 0x20);
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar16 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar16 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar16 + 0x24) - *(int *)(iVar16 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    iVar16 = *(int *)(iVar16 + 0x20);
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar17 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar17 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar17 + 0x24) - *(int *)(iVar17 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    puVar8 = (undefined4 *)(*(int *)(iVar17 + 0x20) + iVar5);
    uVar9 = *(undefined4 *)(iVar16 + iVar5 + 4);
    uVar11 = uVar11 + 1;
    uVar1 = *(undefined4 *)(iVar15 + iVar5 + 8);
    iVar5 = iVar5 + 0xc;
    *(undefined4 *)(iVar10 + -0xc + iVar5) = *puVar8;
    *(undefined4 *)(iVar10 + -8 + iVar5) = uVar9;
    *(undefined4 *)(iVar10 + -4 + iVar5) = uVar1;
  } while (uVar11 < uVar14);
  uVar13 = uVar13 + 1;
  goto LAB_0055b069;
code_r0x0055b3e7:
  iVar10 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(param_1 + 0x84) + iVar12;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_DAT_00b12070)[iVar10],pcVar7);
    if (iVar5 == 0) break;
    iVar10 = iVar10 + 1;
    if (0xf < iVar10) goto code_r0x0055b6c0;
  }
  if (in_ECX[4] == 0) {
    pvVar6 = (void *)FUN_00401f00(0x40);
    in_ECX[4] = pvVar6;
    _memset(pvVar6,0,0x40);
  }
  if ((*(int *)(param_1 + 0x84) == 0) ||
     ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
    FUN_00984d5e();
  }
  iVar5 = *(int *)(param_1 + 0x84) + 0x1c + iVar12;
  iVar15 = *(int *)(iVar5 + 4);
  if (iVar15 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (*(int *)(iVar5 + 8) - iVar15) / 0xc;
  }
  iVar5 = FUN_00401f00(0xc);
  local_4._0_1_ = 3;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a0c0(uVar14);
  }
  *(undefined4 *)(in_ECX[4] + iVar10 * 4) = uVar9;
  iVar10 = *(int *)(*(int *)(in_ECX[4] + iVar10 * 4) + 4);
  uVar11 = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  if (uVar14 == 0) goto LAB_0055bc08;
  iVar5 = 0;
  do {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar15 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar15 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar15 + 0x24) - *(int *)(iVar15 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    iVar15 = *(int *)(iVar15 + 0x20);
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar16 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar16 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar16 + 0x24) - *(int *)(iVar16 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    iVar16 = *(int *)(iVar16 + 0x20);
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar17 = *(int *)(param_1 + 0x84) + iVar12;
    if ((*(int *)(iVar17 + 0x20) == 0) ||
       ((uint)((*(int *)(iVar17 + 0x24) - *(int *)(iVar17 + 0x20)) / 0xc) <= uVar11)) {
      FUN_00984d5e();
    }
    puVar8 = (undefined4 *)(*(int *)(iVar17 + 0x20) + iVar5);
    uVar9 = *(undefined4 *)(iVar16 + iVar5 + 4);
    uVar11 = uVar11 + 1;
    uVar1 = *(undefined4 *)(iVar15 + iVar5 + 8);
    iVar5 = iVar5 + 0xc;
    *(undefined4 *)(iVar10 + -0xc + iVar5) = *puVar8;
    *(undefined4 *)(iVar10 + -8 + iVar5) = uVar9;
    *(undefined4 *)(iVar10 + -4 + iVar5) = uVar1;
  } while (uVar11 < uVar14);
  uVar13 = uVar13 + 1;
  goto LAB_0055b069;
code_r0x0055b6c0:
  iVar10 = 0;
  while( true ) {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
      FUN_00984d5e();
    }
    iVar5 = *(int *)(param_1 + 0x84) + iVar12;
    if (*(uint *)(iVar5 + 0x18) < 0x10) {
      pcVar7 = (char *)(iVar5 + 4);
    }
    else {
      pcVar7 = *(char **)(iVar5 + 4);
    }
    iVar5 = __stricmp((&PTR_s_VampireMorph_00b12024)[iVar10],pcVar7);
    if (iVar5 == 0) break;
    iVar10 = iVar10 + 1;
    if (0 < iVar10) goto code_r0x0055b999;
  }
  if (in_ECX[5] == 0) {
    puVar8 = (undefined4 *)FUN_00401f00(4);
    in_ECX[5] = puVar8;
    *puVar8 = 0;
  }
  if ((*(int *)(param_1 + 0x84) == 0) ||
     ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
    FUN_00984d5e();
  }
  iVar5 = *(int *)(param_1 + 0x84) + 0x1c + iVar12;
  iVar15 = *(int *)(iVar5 + 4);
  if (iVar15 == 0) {
    local_54 = 0;
  }
  else {
    local_54 = (*(int *)(iVar5 + 8) - iVar15) / 0xc;
  }
  iVar5 = FUN_00401f00(0xc);
  local_4._0_1_ = 4;
  if (iVar5 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_0055a0c0(local_54);
  }
  *(undefined4 *)(in_ECX[5] + iVar10 * 4) = uVar9;
  iVar10 = *(int *)(*(int *)(in_ECX[5] + iVar10 * 4) + 4);
  local_4 = (uint)local_4._1_3_ << 8;
  local_48 = 0;
  if (local_54 != 0) {
    iVar5 = 0;
    do {
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar15 = iVar12 + 0x1c + *(int *)(param_1 + 0x84);
      if ((*(int *)(iVar15 + 4) == 0) ||
         ((uint)((*(int *)(iVar15 + 8) - *(int *)(iVar15 + 4)) / 0xc) <= local_48)) {
        FUN_00984d5e();
      }
      iVar15 = *(int *)(iVar15 + 4);
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar16 = iVar12 + 0x1c + *(int *)(param_1 + 0x84);
      if ((*(int *)(iVar16 + 4) == 0) ||
         ((uint)((*(int *)(iVar16 + 8) - *(int *)(iVar16 + 4)) / 0xc) <= local_48)) {
        FUN_00984d5e();
      }
      iVar16 = *(int *)(iVar16 + 4);
      if ((*(int *)(param_1 + 0x84) == 0) ||
         ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) / 0x2c) <= uVar13)) {
        FUN_00984d5e();
      }
      iVar2 = *(int *)(iVar12 + 0x20 + *(int *)(param_1 + 0x84));
      iVar17 = iVar12 + 0x1c + *(int *)(param_1 + 0x84);
      if ((iVar2 == 0) || ((uint)((*(int *)(iVar17 + 8) - iVar2) / 0xc) <= local_48)) {
        FUN_00984d5e();
      }
      uVar9 = *(undefined4 *)(iVar16 + iVar5 + 4);
      uVar1 = *(undefined4 *)(iVar15 + iVar5 + 8);
      *(undefined4 *)(iVar5 + iVar10) = *(undefined4 *)(iVar5 + *(int *)(iVar17 + 4));
      *(undefined4 *)(iVar5 + 4 + iVar10) = uVar9;
      *(undefined4 *)(iVar5 + 8 + iVar10) = uVar1;
      local_48 = local_48 + 1;
      iVar5 = iVar5 + 0xc;
    } while (local_48 < local_54);
  }
LAB_0055bc08:
  uVar13 = uVar13 + 1;
  goto LAB_0055b069;
code_r0x0055b999:
  uVar13 = uVar13 + 1;
  goto LAB_0055b069;
}



void FUN_0055c3d0(byte param_1)

{
  FUN_0055ad30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055c3f0(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *_Str2;
  int iVar6;
  undefined4 *in_ECX;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar4 = param_1;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bca83;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar11 = 0;
  *in_ECX = &PTR_FUN_00a3fcf8;
  in_ECX[1] = 0;
  InterlockedIncrement((LONG *)&DAT_00b3fd64);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a64d20;
  in_ECX[2] = 0;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x84) == 0) ||
       (iVar7 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84), iVar6 = iVar7 >> 0x1f,
       iVar7 / 0x2c + iVar6 == iVar6)) {
      FUN_00984d5e(uVar5);
    }
    iVar6 = *(int *)(param_1 + 0x84);
    if (*(uint *)(iVar6 + 0x18) < 0x10) {
      _Str2 = (char *)(iVar6 + 4);
    }
    else {
      _Str2 = *(char **)(iVar6 + 4);
    }
    iVar6 = __stricmp("HairMorph",_Str2);
    if (iVar6 == 0) {
      if ((*(int *)(param_1 + 0x84) == 0) ||
         (iVar7 = *(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84), iVar6 = iVar7 >> 0x1f,
         iVar7 / 0x2c + iVar6 == iVar6)) {
        FUN_00984d5e(uVar5);
      }
      iVar6 = *(int *)(*(int *)(param_1 + 0x84) + 0x20);
      if (iVar6 == 0) {
        param_1 = 0;
      }
      else {
        param_1 = (*(int *)(*(int *)(param_1 + 0x84) + 0x24) - iVar6) / 0xc;
      }
      iVar6 = FUN_00401f00(0xc);
      local_4 = CONCAT31(local_4._1_3_,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = FUN_0055a0c0(param_1);
      }
      in_ECX[2] = iVar6;
      iVar6 = *(int *)(iVar6 + 4);
      if (param_1 != 0) {
        iVar7 = 0;
        do {
          if ((*(int *)(iVar4 + 0x84) == 0) ||
             (iVar8 = *(int *)(iVar4 + 0x88) - *(int *)(iVar4 + 0x84), iVar3 = iVar8 >> 0x1f,
             iVar8 / 0x2c + iVar3 == iVar3)) {
            FUN_00984d5e();
          }
          iVar3 = *(int *)(iVar4 + 0x84);
          if ((*(int *)(iVar3 + 0x20) == 0) ||
             ((uint)((*(int *)(iVar3 + 0x24) - *(int *)(iVar3 + 0x20)) / 0xc) <= uVar11)) {
            FUN_00984d5e();
          }
          iVar3 = *(int *)(iVar3 + 0x20);
          if ((*(int *)(iVar4 + 0x84) == 0) ||
             (iVar9 = *(int *)(iVar4 + 0x88) - *(int *)(iVar4 + 0x84), iVar8 = iVar9 >> 0x1f,
             iVar9 / 0x2c + iVar8 == iVar8)) {
            FUN_00984d5e();
          }
          iVar8 = *(int *)(iVar4 + 0x84);
          if ((*(int *)(iVar8 + 0x20) == 0) ||
             ((uint)((*(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x20)) / 0xc) <= uVar11)) {
            FUN_00984d5e();
          }
          iVar8 = *(int *)(iVar8 + 0x20);
          if ((*(int *)(iVar4 + 0x84) == 0) ||
             (iVar10 = *(int *)(iVar4 + 0x88) - *(int *)(iVar4 + 0x84), iVar9 = iVar10 >> 0x1f,
             iVar10 / 0x2c + iVar9 == iVar9)) {
            FUN_00984d5e();
          }
          iVar9 = *(int *)(iVar4 + 0x84);
          if ((*(int *)(iVar9 + 0x20) == 0) ||
             ((uint)((*(int *)(iVar9 + 0x24) - *(int *)(iVar9 + 0x20)) / 0xc) <= uVar11)) {
            FUN_00984d5e();
          }
          uVar1 = *(undefined4 *)(iVar8 + iVar7 + 4);
          uVar2 = *(undefined4 *)(iVar3 + iVar7 + 8);
          *(undefined4 *)(iVar7 + iVar6) = *(undefined4 *)(iVar7 + *(int *)(iVar9 + 0x20));
          *(undefined4 *)(iVar7 + 4 + iVar6) = uVar1;
          *(undefined4 *)(iVar7 + 8 + iVar6) = uVar2;
          uVar11 = uVar11 + 1;
          iVar7 = iVar7 + 0xc;
        } while (uVar11 < param_1);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055c6c0(byte param_1)

{
  FUN_0055aef0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055c6e0(int param_1,void *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_18;
  int local_14;
  undefined1 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bcaa8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar2);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a64c6c;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  if ((param_1 != 0) && (*(int *)(param_1 + 0xb4) != 0)) {
    cVar1 = FUN_00728ab0(1);
    if (cVar1 != '\0') {
      FUN_00728b60(&local_18);
    }
    if (local_18 != 0) {
      uVar2 = (uint)*(ushort *)(*(int *)(param_1 + 0xb4) + 8);
      in_ECX[5] = uVar2;
      in_ECX[4] = uVar2;
      if ((param_2 != (void *)0x0) && (param_3 != 0)) {
        in_ECX[4] = uVar2 + param_3;
      }
      puVar3 = (undefined4 *)
               FUN_00401f00(-(uint)((int)((ulonglong)(uint)in_ECX[4] * 0xc >> 0x20) != 0) |
                            (uint)((ulonglong)(uint)in_ECX[4] * 0xc));
      uVar2 = 0;
      in_ECX[3] = puVar3;
      if (in_ECX[5] != 0) {
        do {
          puVar4 = (undefined4 *)(local_14 * uVar2 + local_18);
          uVar2 = uVar2 + 1;
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          puVar3 = puVar3 + 3;
        } while (uVar2 < (uint)in_ECX[5]);
      }
      if ((param_2 != (void *)0x0) && (param_3 != 0)) {
        _memcpy((void *)(in_ECX[3] + in_ECX[5] * 0xc),param_2,param_3 * 0xc);
      }
      FUN_00728b20();
      goto LAB_0055c82a;
    }
  }
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[4] = 0;
LAB_0055c82a:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055c850(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  float10 fVar4;
  undefined4 unaff_retaddr;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    fVar4 = (float10)(**(code **)(*piVar1 + 0x54))(iVar3);
    if (((0.0 < (float)fVar4) && ((float)fVar4 <= 1.0)) &&
       (iVar2 = (**(code **)(*(int *)param_1[4] + 0x18))(iVar3), iVar2 != 0)) {
      if (*(char *)(param_1 + 7) == '\0') {
        FUN_005508f0(*param_1,param_1 + 1);
        *(undefined1 *)(param_1 + 7) = 1;
      }
      piVar1 = (int *)(**(code **)(*(int *)param_1[4] + 0x18))(iVar3);
      (**(code **)(*piVar1 + 4))(param_1 + 1,param_1[6],param_1[5],unaff_retaddr);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xd);
  return;
}



void FUN_0055c900(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined4 unaff_EBX;
  int iVar4;
  float10 fVar5;
  float fStack_8;
  float fStack_4;
  
  iVar4 = 0;
  do {
    switch(iVar4) {
    case 8:
    case 0xb:
      piVar2 = (int *)(**(code **)(*in_ECX + 0x9c))();
      piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
      fVar5 = (float10)(**(code **)(*piVar2 + 0x5c))(0xb,&fStack_8,&fStack_4);
      fVar5 = (float10)(**(code **)(*piVar1 + 0x5c))(8,(float)fVar5);
      FUN_0054f5e0((float)fVar5);
      if (iVar4 == 8) {
        fVar5 = (float10)fStack_8;
      }
      else {
LAB_0055c982:
        fVar5 = (float10)fStack_4;
      }
      break;
    case 9:
    case 10:
      piVar2 = (int *)(**(code **)(*in_ECX + 0x9c))();
      piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
      fVar5 = (float10)(**(code **)(*piVar2 + 0x5c))(10,&fStack_8,&fStack_4);
      fVar5 = (float10)(**(code **)(*piVar1 + 0x5c))(9,(float)fVar5);
      FUN_0054f5e0((float)fVar5);
      if (iVar4 != 9) goto LAB_0055c982;
      fVar5 = (float10)fStack_8;
      break;
    default:
      piVar2 = (int *)(**(code **)(*in_ECX + 0x9c))();
      fVar5 = (float10)(**(code **)(*piVar2 + 0x5c))(iVar4);
      break;
    case 0xe:
    case 0xf:
    case 0x10:
      goto switchD_0055c923_caseD_e;
    }
    if (((0.0 < (float)fVar5) && ((float)fVar5 <= 1.0)) &&
       (iVar3 = (**(code **)(*(int *)param_1[4] + 0x1c))(iVar4), iVar3 != 0)) {
      if (*(char *)(param_1 + 7) == '\0') {
        FUN_005508f0(*param_1,param_1 + 1);
        *(undefined1 *)(param_1 + 7) = 1;
      }
      piVar2 = (int *)(**(code **)(*(int *)param_1[4] + 0x1c))(iVar4);
      (**(code **)(*piVar2 + 4))(param_1 + 1,param_1[6],param_1[5],unaff_EBX);
    }
switchD_0055c923_caseD_e:
    iVar4 = iVar4 + 1;
    if (0x10 < iVar4) {
      return;
    }
  } while( true );
}



void FUN_0055caa0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  float10 fVar4;
  undefined4 unaff_retaddr;
  
  iVar3 = 0;
  do {
    piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
    fVar4 = (float10)(**(code **)(*piVar1 + 0x68))(iVar3);
    if (((0.0 < (float)fVar4) && ((float)fVar4 <= 1.0)) &&
       (iVar2 = (**(code **)(*(int *)param_1[4] + 0x20))(iVar3), iVar2 != 0)) {
      if (*(char *)(param_1 + 7) == '\0') {
        FUN_005508f0(*param_1,param_1 + 1);
        *(undefined1 *)(param_1 + 7) = 1;
      }
      piVar1 = (int *)(**(code **)(*(int *)param_1[4] + 0x20))(iVar3);
      (**(code **)(*piVar1 + 4))(param_1 + 1,param_1[6],param_1[5],unaff_retaddr);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}



void FUN_0055cb50(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 *unaff_retaddr;
  undefined4 uVar4;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 0x9c))();
  fVar3 = (float10)(**(code **)(*piVar1 + 0x70))(0);
  if ((0.0 < (float)fVar3) && ((float)fVar3 <= 1.0)) {
    uVar4 = 0;
    iVar2 = (**(code **)(*(int *)unaff_retaddr[4] + 0x24))(0);
    if (iVar2 != 0) {
      if (*(char *)(unaff_retaddr + 7) == '\0') {
        FUN_005508f0(*unaff_retaddr,unaff_retaddr + 1);
        *(undefined1 *)(unaff_retaddr + 7) = 1;
      }
      piVar1 = (int *)(**(code **)(*(int *)unaff_retaddr[4] + 0x24))(0);
      (**(code **)(*piVar1 + 4))(unaff_retaddr + 1,unaff_retaddr[6],unaff_retaddr[5],uVar4);
    }
    return;
  }
  return;
}



undefined4 * FUN_0055cbf0(void)

{
  if (DAT_00b39b84 != 0) {
    return (undefined4 *)(DAT_00b39b84 + 0x88);
  }
  return &DAT_00b3f9a8;
}



void FUN_0055cc10(int *param_1)

{
  code *pcVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  int *piVar4;
  undefined1 local_24 [36];
  
  pcVar1 = *(code **)(*in_ECX + 0xa4);
  piVar2 = in_ECX + 0x38;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar2 = *param_1;
    param_1 = param_1 + 1;
    piVar2 = piVar2 + 1;
  }
  *(undefined1 *)((int)in_ECX + 0x107) = 1;
  piVar2 = (int *)(*pcVar1)(local_24);
  piVar4 = in_ECX + 0xc;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar4 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar4 = piVar4 + 1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055cc60(int param_1)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_00982c30();
  if ((((float)fVar1 <= _DAT_00b120cc + 10.0) || (*(char *)(in_ECX + 0x110) != '\0')) &&
     (param_1 != 0)) {
    if ((((float)fVar1 < _DAT_00b120cc - 10.0) && (*(char *)(in_ECX + 0x110) != '\0')) ||
       (param_1 == 1)) {
      FUN_00553bb0();
    }
    return;
  }
  FUN_00553bb0();
  return;
}



void FaceGen_Struct118_ctor(void)

{
  uint uVar1;
  LONG LVar2;
  undefined4 *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bcae6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0070b780(0);
  *in_ECX = &PTR_FUN_00a64f5c;
  in_ECX[0x37] = 0;
  in_ECX[0x43] = 0xbf800000;
  *(undefined1 *)((int)in_ECX + 0x105) = 0;
  *(undefined1 *)(in_ECX + 0x41) = 0;
  *(undefined1 *)((int)in_ECX + 0x106) = 1;
  *(undefined1 *)((int)in_ECX + 0x107) = 1;
  *(undefined1 *)(in_ECX + 0x42) = 0;
  *(undefined1 *)(in_ECX + 0x44) = 0;
  *(undefined1 *)((int)in_ECX + 0x111) = 0;
  puVar4 = (undefined4 *)in_ECX[0x37];
  local_4 = 1;
  if (puVar4 != (undefined4 *)0x0) {
    LVar2 = InterlockedDecrement(puVar4 + 1);
    if ((LVar2 == 0) && (puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1,uVar1);
    }
    in_ECX[0x37] = 0;
  }
  puVar4 = &DAT_00b26dc4;
  puVar5 = in_ECX + 0x38;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  *(undefined1 *)((int)in_ECX + 0x112) = 0;
  in_ECX[0x45] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055cf50(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcb18;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a64f5c;
  in_ECX[0x45] = 0;
  puVar1 = (undefined4 *)in_ECX[0x37];
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0070b810(uVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055cfe0(int param_1,undefined4 param_2)

{
  int in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != 0) {
    FUN_0070ac60(param_1,param_2);
    FUN_0055e2a0(in_ECX + 0xdc);
    puVar2 = (undefined4 *)(in_ECX + 0xe0);
    puVar3 = (undefined4 *)(param_1 + 0xe0);
    for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined1 *)(param_1 + 0x104) = *(undefined1 *)(in_ECX + 0x104);
    *(undefined1 *)(param_1 + 0x105) = *(undefined1 *)(in_ECX + 0x105);
    *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(in_ECX + 0x106);
    *(undefined1 *)(param_1 + 0x107) = *(undefined1 *)(in_ECX + 0x107);
    *(undefined4 *)(param_1 + 0x10c) = *(undefined4 *)(in_ECX + 0x10c);
    *(undefined1 *)(param_1 + 0x110) = *(undefined1 *)(in_ECX + 0x110);
    *(undefined1 *)(param_1 + 0x111) = *(undefined1 *)(in_ECX + 0x111);
  }
  return;
}



void FUN_0055d090(int *param_1,char param_2)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  uint uVar7;
  uint local_8;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(ushort *)(in_ECX + 0xb6);
    local_8 = 0;
    if (uVar1 != 0) {
      do {
        if ((((local_8 < *(ushort *)(in_ECX + 0xb6)) &&
             (piVar2 = *(int **)(*(int *)(in_ECX + 0xb0) + local_8 * 4), piVar2 != (int *)0x0)) &&
            (iVar5 = (**(code **)(*piVar2 + 0x10))(), iVar5 != 0)) &&
           ((iVar5 = *(int *)(iVar5 + 0xb8), iVar5 != 0 && (*(int *)(iVar5 + 8) != 0)))) {
          iVar3 = *(int *)(iVar5 + 0x14);
          uVar4 = *(uint *)(*(int *)(iVar5 + 8) + 0x40);
          if ((iVar3 != 0) && (uVar4 != 0)) {
            uVar7 = 0;
            if (uVar4 != 0) {
              do {
                iVar6 = (**(code **)(*param_1 + 0x58))
                                  (*(undefined4 *)(*(int *)(iVar3 + uVar7 * 4) + 8));
                if (iVar6 == 0) {
                  if (param_2 != '\0') {
                    FUN_004a7a60("Could not find bone \"%s\" for the head node.",
                                 *(undefined4 *)(*(int *)(iVar3 + uVar7 * 4) + 8));
                  }
                }
                else {
                  *(int *)(*(int *)(iVar5 + 0x14) + uVar7 * 4) = iVar6;
                }
                uVar7 = uVar7 + 1;
              } while (uVar7 < uVar4);
            }
            *(int *)(iVar5 + 0x10) = in_ECX;
          }
        }
        local_8 = local_8 + 1;
      } while (local_8 < uVar1);
    }
  }
  return;
}



void FUN_0055d190(byte param_1)

{
  FUN_0055cf50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055d1b0(char param_1)

{
  float fVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  int *piVar7;
  int *in_ECX;
  uint uVar8;
  float10 fVar9;
  float fStack_48;
  float fStack_44;
  int aiStack_20 [3];
  undefined1 local_14;
  int iStack_10;
  int iStack_c;
  uint uStack_8;
  undefined1 local_4;
  
  uVar2 = *(ushort *)((int)in_ECX + 0xb6);
  uVar8 = 0;
  aiStack_20[1] = 0;
  aiStack_20[2] = 0;
  local_14 = 0;
  if (uVar2 != 0) {
    do {
      local_4 = 0;
      if ((uVar8 < *(ushort *)((int)in_ECX + 0xb6)) &&
         (piVar7 = *(int **)(in_ECX[0x2c] + uVar8 * 4), piVar7 != (int *)0x0)) {
        aiStack_20[0] = (**(code **)(*piVar7 + 0x10))();
        if ((aiStack_20[0] != 0) && (*(int *)(aiStack_20[0] + 0xb4) != 0)) {
          iStack_10 = FUN_00550800(aiStack_20[0]);
          if (iStack_10 != 0) {
            iStack_c = FUN_005508a0(aiStack_20[0]);
            if (iStack_c != 0) {
              cVar6 = FUN_00728ab0(1);
              if (cVar6 != '\0') {
                FUN_00728b60(aiStack_20 + 1);
                uStack_8 = (uint)*(ushort *)(*(int *)(aiStack_20[0] + 0xb4) + 8);
                if ((param_1 != '\0') || ((char)in_ECX[0x41] != '\0')) {
                  FUN_005508f0(aiStack_20[0],aiStack_20 + 1);
                  local_4 = 1;
                  *(undefined1 *)(in_ECX + 0x41) = 0;
                }
                bVar5 = false;
                bVar3 = false;
                FUN_0055cbf0();
                fVar9 = (float10)FUN_00404c90();
                fVar1 = (float)fVar9;
                fStack_44 = _DAT_00b120cc;
                fStack_48 = _DAT_00b120d4;
                if (DAT_00b333b8 != '\0') {
                  fStack_44 = _DAT_00b120cc * 0.25;
                  fStack_48 = _DAT_00b120d4 * 0.25;
                }
                bVar4 = false;
                if ((fVar1 <= fStack_48 + 10.0) || (*(char *)((int)in_ECX + 0x112) != '\0')) {
LAB_0055d379:
                  if ((fVar1 <= fStack_44 + 10.0) || (*(char *)((int)in_ECX + 0x112) != '\0')) {
LAB_0055d3a2:
                    bVar4 = true;
                  }
                  else {
                    cVar6 = FUN_00578f60();
                    if (cVar6 != '\0') goto LAB_0055d3a2;
                  }
                  FUN_0055caa0(aiStack_20);
                  bVar3 = true;
                  if (bVar4) {
                    FUN_0055c850(aiStack_20);
                    FUN_0055c900(aiStack_20);
                    FUN_0055cb50(aiStack_20);
                    bVar5 = true;
                  }
                }
                else {
                  cVar6 = FUN_00578f60();
                  if (cVar6 != '\0') goto LAB_0055d379;
                }
                piVar7 = (int *)(**(code **)(*in_ECX + 0x9c))();
                cVar6 = (**(code **)(*piVar7 + 0x98))();
                if (cVar6 == '\0') {
                  if ((!bVar3) && (_DAT_00b120cc - 10.0 < fVar1)) {
                    piVar7 = (int *)(**(code **)(*in_ECX + 0x9c))();
                    (**(code **)(*piVar7 + 0x78))(0,1,1,1,1,0);
                  }
                }
                else if (!bVar5) {
                  piVar7 = (int *)(**(code **)(*in_ECX + 0x9c))();
                  fVar9 = (float10)(**(code **)(*piVar7 + 0x5c))(0);
                  if ((float10)0.0 < fVar9) {
                    cVar6 = (**(code **)(*(int *)in_ECX[7] + 0x98))();
                    if (cVar6 != '\0') {
                      FUN_0055c900(aiStack_20);
                    }
                  }
                }
                FUN_00728b20();
              }
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  return;
}



undefined4 FUN_0055d8c0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x118,uVar1);
  uVar3 = 0;
  local_4 = 0;
  if (iVar2 != 0) {
    uVar3 = FaceGen_Struct118_ctor();
  }
  local_4 = 0xffffffff;
  FUN_0055cfe0(uVar3,param_1);
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



void FUN_0055df70(undefined4 param_1,undefined4 *param_2)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x24) + 0xc))(param_1,param_2,0);
  if ((cVar1 == '\0') && (param_2 != (undefined4 *)0x0)) {
    (**(code **)*param_2)(1);
  }
  return;
}



void FUN_0055dfa0(void)

{
  char cVar1;
  int in_ECX;
  undefined4 unaff_retaddr;
  
  FUN_00401020();
  cVar1 = (**(code **)(**(int **)(in_ECX + 0x24) + 4))(unaff_retaddr,&stack0xfffffff8);
  if (cVar1 != '\0') {
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x10))(unaff_retaddr);
    (*pcRam0000616e)(1);
  }
  FUN_00401040();
  return;
}



uint FUN_0055e000(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int *in_ECX;
  
  uVar3 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + uVar3 * 4);
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return uVar3 & 0xffffff00;
    }
    uVar3 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if ((char)uVar3 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  uVar2 = puVar1[2];
  *param_1 = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055e060(void)

{
  float fVar1;
  float fVar2;
  int in_ECX;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float local_14;
  
  if ((_DAT_00b39f14 & 1) == 0) {
    _DAT_00b39f10 = *(float *)(in_ECX + 0x1c);
    _DAT_00b39f14 = _DAT_00b39f14 | 1;
  }
  iVar3 = 0;
  fVar1 = *(float *)(in_ECX + 0x1c) * 0.61;
  local_14 = 0.0;
  do {
    fVar2 = (float)(&DAT_00b39f00)[iVar3] + _DAT_00b33e9c;
    (&DAT_00b39f00)[iVar3] = fVar2;
    if (*(float *)(in_ECX + 0x1c) != 0.0) {
      (&DAT_00b39f00)[iVar3] = (fVar2 * _DAT_00b39f10) / *(float *)(in_ECX + 0x1c);
    }
    fVar4 = (float10)FUN_00986300();
    fVar5 = (float10)FUN_00986000();
    if (iVar3 == 2) {
      local_14 = ABS((float)fVar4) + local_14 + ABS((float)fVar5);
    }
    FUN_007f1760(iVar3,fVar1 * (float)fVar4,fVar1 * (float)fVar5);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_007f0210(((1.0 - _DAT_00b39e48) + _DAT_00b39e48 * local_14 * 0.5) * *(float *)(in_ECX + 0x1c),
               (_DAT_00b39e50 * local_14 * 0.5 + (1.0 - _DAT_00b39e50)) * *(float *)(in_ECX + 0x1c),
               _DAT_00b39e28 * _DAT_00b33e9c *
               (_DAT_00b39e38 * local_14 * 0.5 + (1.0 - _DAT_00b39e38)),
               _DAT_00b33e9c * _DAT_00b39e30 *
               (local_14 * _DAT_00b39e40 * 0.5 + (1.0 - _DAT_00b39e40)));
  _DAT_00b39f10 = (float)*(undefined4 *)(in_ECX + 0x1c);
  return;
}



void FUN_0055e2a0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  LONG LVar3;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 != (undefined4 *)*param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = *param_1;
    *in_ECX = iVar2;
    if (iVar2 != 0) {
      InterlockedIncrement((LONG *)(iVar2 + 4));
    }
  }
  return;
}



void FUN_0055e2f0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a65178;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0055e310(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a65178;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0055e340(undefined4 *param_1)

{
  undefined4 *puVar1;
  LONG LVar2;
  
  puVar1 = DAT_00b43108;
  if (DAT_00b43108 != param_1) {
    if (((DAT_00b43108 != (undefined4 *)0x0) &&
        (LVar2 = InterlockedDecrement(DAT_00b43108 + 1), LVar2 == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43108 = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  return;
}



void FUN_0055e390(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  LONG LVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  char unaff_retaddr;
  int *piStack_c;
  void *apvStack_8 [2];
  
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750();
  }
  if (*DAT_00b39e04 == 0) {
    return;
  }
  FUN_00401020(&DAT_00a2f830);
  if (unaff_retaddr != '\0') {
    if (DAT_00b39e04 == (int *)0x0) {
      FUN_0055f750(0);
    }
    piVar8 = DAT_00b39e04;
    iVar3 = FUN_006a9030();
joined_r0x0055e3f5:
    do {
      if (iVar3 == 0) goto LAB_0055e512;
      if (piVar8 == (int *)0x0) {
        FUN_0055f750(0);
      }
      FUN_00452600(&stack0xfffffff0,apvStack_8,&piStack_c);
      piVar2 = piStack_c;
      piVar8 = DAT_00b39e04;
      if (piStack_c != (int *)0x0) {
        puVar7 = (undefined4 *)*piStack_c;
        if (puVar7 != (undefined4 *)0x0) {
          if (1 < (uint)puVar7[1]) goto joined_r0x0055e3f5;
          if (puVar7 != (undefined4 *)0x0) {
            LVar4 = InterlockedDecrement(puVar7 + 1);
            if ((LVar4 == 0) && (puVar7 != (undefined4 *)0x0)) {
              (**(code **)*puVar7)(1);
            }
            *piVar2 = 0;
          }
        }
        _eh_vector_destructor_iterator_(piVar2,4,piVar2[-1],FUN_007016a0);
        FUN_00401f20(piVar2 + -1);
        piStack_c = (int *)0x0;
        if (DAT_00b39e04 == (int *)0x0) {
          FUN_0055f750(0);
        }
        FUN_004524c0(apvStack_8[0]);
        if (DAT_00b39e04 == (int *)0x0) {
          FUN_0055f750(0);
        }
        uVar1 = *(uint *)(*DAT_00b39e04 + 4);
        uVar5 = 0;
        piVar8 = DAT_00b39e04;
        if (uVar1 != 0) {
          piVar2 = *(int **)(*DAT_00b39e04 + 8);
          piVar6 = piVar2;
          do {
            if (*piVar6 != 0) {
              iVar3 = piVar2[uVar5];
              goto joined_r0x0055e3f5;
            }
            uVar5 = uVar5 + 1;
            piVar6 = piVar6 + 1;
          } while (uVar5 < uVar1);
        }
        iVar3 = 0;
      }
    } while( true );
  }
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0);
  }
  piStack_c = (int *)FUN_006a9030();
  while (piStack_c != (int *)0x0) {
    if (DAT_00b39e04 == (int *)0x0) {
      FUN_0055f750(0);
    }
    FUN_00452600(&piStack_c,&stack0xfffffff0,apvStack_8);
    if (apvStack_8[0] != (void *)0x0) {
      iVar3 = (int)apvStack_8[0] + -4;
      _eh_vector_destructor_iterator_
                (apvStack_8[0],4,*(int *)((int)apvStack_8[0] + -4),FUN_007016a0);
      FUN_00401f20(iVar3);
    }
  }
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0);
  }
  FUN_007c2a40();
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0);
  }
  puVar7 = (undefined4 *)*DAT_00b39e04;
LAB_0055e614:
  if (puVar7 != (undefined4 *)0x0) {
    (**(code **)*puVar7)(1);
  }
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0);
  }
  *DAT_00b39e04 = 0;
LAB_0055e63f:
  FUN_00401040();
  return;
LAB_0055e512:
  if (piVar8 == (int *)0x0) {
    FUN_0055f750(0);
    piVar8 = DAT_00b39e04;
  }
  if (*(int *)(*piVar8 + 0xc) != 0) goto LAB_0055e63f;
  FUN_007c2a40();
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0);
  }
  puVar7 = (undefined4 *)*DAT_00b39e04;
  goto LAB_0055e614;
}



void FUN_0055e660(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a65178;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a651a4;
  return;
}



void FUN_0055e6b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcb48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a651a4;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a65178;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055e720(int param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b44b6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_LAB_00a651c4;
  in_ECX[6] = 0;
  in_ECX[2] = param_2;
  pvVar3 = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_2 * 4 >> 0x20) != 0) |
                                (uint)((ulonglong)param_2 * 4),uVar2);
  local_4 = 0;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    _vector_constructor_iterator_(pvVar3,4,param_2,FUN_004bddb0);
  }
  in_ECX[3] = pvVar3;
  lVar1 = (ulonglong)(uint)(param_1 * 3) * 4;
  local_4 = 0xffffffff;
  uVar4 = FUN_00401f00(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1,uVar2);
  in_ECX[1] = uVar4;
  in_ECX[4] = param_3;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 1;
  if (iVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ThreadSpecificInterfaceManager_ctor(param_1);
  }
  in_ECX[5] = uVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0055e810(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  uint uVar2;
  
  uVar2 = 0;
  if (in_ECX[2] != 0) {
    do {
      cVar1 = (**(code **)(*in_ECX + 0x14))(uVar2,param_1);
      if (cVar1 != '\0') {
        return 1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)in_ECX[2]);
  }
  return 0;
}



void FUN_0055e850(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_009bcbf4;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  *in_ECX = 0;
  *(undefined1 *)((int)in_ECX + 0x21) = 1;
  *(undefined1 *)(in_ECX + 8) = 1;
  *(undefined1 *)((int)in_ECX + 0x22) = 0;
  local_4 = 5;
  uStack_3 = 0;
  *(undefined1 *)((int)in_ECX + 0x23) = DAT_00b125f0;
  puVar3 = (undefined4 *)FUN_00401f00(0x1c,uVar2);
  local_4 = 6;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a2fdb4;
    *(undefined2 *)(puVar3 + 6) = 0xf;
  }
  puVar1 = (undefined4 *)in_ECX[2];
  local_4 = 5;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[2] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *(ushort *)(in_ECX[2] + 0x18) = *(ushort *)(in_ECX[2] + 0x18) | 1;
  *(ushort *)(in_ECX[2] + 0x18) = *(ushort *)(in_ECX[2] + 0x18) | 2;
  *(ushort *)(in_ECX[2] + 0x18) = *(ushort *)(in_ECX[2] + 0x18) & 0xffcf | 0xc;
  iVar5 = FUN_00401f00(0x5c,uVar2);
  local_4 = 7;
  if (iVar5 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_007095a0();
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 5;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[3] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  iVar5 = in_ECX[3];
  *(undefined4 *)(iVar5 + 0x28) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x2c) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x30) = 0x3f800000;
  *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
  iVar5 = in_ECX[3];
  *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
  *(undefined4 *)(iVar5 + 0x1c) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x20) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x24) = 0x3f800000;
  iVar5 = in_ECX[3];
  *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
  *(undefined4 *)(iVar5 + 0x40) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x44) = 0x3f800000;
  *(undefined4 *)(iVar5 + 0x48) = 0x3f800000;
  puVar3 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = 8;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a2fd04;
    *(undefined2 *)(puVar3 + 6) = 8;
  }
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 5;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[4] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *(ushort *)(in_ECX[4] + 0x18) = *(ushort *)(in_ECX[4] + 0x18) & 0xffcf;
  *(ushort *)(in_ECX[4] + 0x18) = *(ushort *)(in_ECX[4] + 0x18) | 8;
  puVar3 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = 9;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar3 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar3 + 6) = 0xec;
    *(undefined1 *)((int)puVar3 + 0x1a) = 0;
  }
  puVar1 = (undefined4 *)in_ECX[5];
  local_4 = 5;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[5] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  *(ushort *)(in_ECX[5] + 0x18) = *(ushort *)(in_ECX[5] + 0x18) | 0x200;
  *(ushort *)(in_ECX[5] + 0x18) = *(ushort *)(in_ECX[5] + 0x18) & 0xf3ff | 0x1000;
  *(undefined1 *)(in_ECX[5] + 0x1a) = 0x54;
  *(ushort *)(in_ECX[5] + 0x18) = *(ushort *)(in_ECX[5] + 0x18) & 0xfffe;
  iVar5 = FUN_00401f00(0x10);
  local_4 = 10;
  if (iVar5 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)FUN_006fa890(3);
  }
  puVar1 = (undefined4 *)in_ECX[6];
  local_4 = 5;
  if (puVar1 != puVar3) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar4 = InterlockedDecrement(puVar1 + 1);
      if ((LVar4 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    in_ECX[6] = puVar3;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
    }
  }
  FUN_0078bd80(4);
  FUN_007871c0(1);
  FUN_00787690(1);
  DAT_00b44f04 = (float)DAT_00b12630;
  if (DAT_00b12630 < 0) {
    DAT_00b44f04 = DAT_00b44f04 + 4.2949673e+09;
  }
  iVar5 = FUN_00401f00(0x1c);
  _local_4 = CONCAT31(uStack_3,0xb);
  if (iVar5 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_0055e720(2,0x25,0xc);
  }
  in_ECX[9] = uVar6;
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0055ec20(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009a9ef6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar5 = (undefined4 *)0x0;
  local_10 = (undefined4 *)0x0;
  if (param_1 == 0) {
    *unaff_FS_OFFSET = local_c;
    return (undefined4 *)0x0;
  }
  if (*in_ECX == 0) {
    iVar3 = FUN_00401f00(0x10,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_0055e660(0x25);
    }
    *in_ECX = iVar3;
  }
  local_4 = 0xffffffff;
  cVar1 = FUN_0055e000(param_1,&local_10);
  if (cVar1 != '\0') {
    *unaff_FS_OFFSET = local_c;
    return local_10;
  }
  puVar4 = (undefined4 *)FUN_00401f00(8,uVar2);
  local_4 = 1;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = puVar4 + 1;
    *puVar4 = 1;
    _eh_vector_constructor_iterator_(puVar5,4,1,FUN_007c88a0,FUN_007016a0);
  }
  local_4 = 0xffffffff;
  FUN_00452570(param_1,puVar5);
  *unaff_FS_OFFSET = local_c;
  return puVar5;
}



/* WARNING: Removing unreachable block (ram,0x0055ee01) */
/* WARNING: Removing unreachable block (ram,0x0055ee0f) */
/* WARNING: Removing unreachable block (ram,0x0055ee13) */

int * FUN_0055ed30(int param_1,int param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  LONG LVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  int *unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bcc34;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_00401020(&DAT_00a2f830,uVar2);
  *unaff_retaddr = 0;
  puStack_8 = (undefined1 *)0x0;
  if (param_1 != 0) {
    piVar3 = (int *)FUN_0055ec20(param_1);
    param_1 = -1;
    iVar4 = 0;
    do {
      puVar6 = (undefined4 *)piVar3[iVar4];
      if (puVar6 == (undefined4 *)0x0) {
        if (param_1 == -1) {
          param_1 = iVar4;
        }
      }
      else if (puVar6[0x12] == param_2) {
        puVar1 = (undefined4 *)*unaff_retaddr;
        if (puVar1 != puVar6) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *unaff_retaddr = (int)puVar6;
          InterlockedIncrement(puVar6 + 1);
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 1);
    if (*unaff_retaddr == 0) {
      if (param_1 < 0) {
        if (*piVar3 == 0) goto LAB_0055eee1;
        iVar4 = *piVar3;
        *unaff_retaddr = iVar4;
      }
      else {
        iVar4 = FUN_00401f00(0x58);
        puStack_8 = (undefined1 *)0x1;
        if (iVar4 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_00560960();
        }
        puVar1 = (undefined4 *)*unaff_retaddr;
        puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
        if (puVar1 != puVar6) {
          if (((puVar1 != (undefined4 *)0x0) &&
              (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0)) &&
             (puVar1 != (undefined4 *)0x0)) {
            (**(code **)*puVar1)(1);
          }
          *unaff_retaddr = (int)puVar6;
          if (puVar6 != (undefined4 *)0x0) {
            InterlockedIncrement(puVar6 + 1);
          }
        }
        puVar6 = (undefined4 *)piVar3[param_1];
        if (puVar6 == (undefined4 *)*unaff_retaddr) goto LAB_0055eee1;
        if (((puVar6 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar6 + 1), LVar5 == 0)
            ) && (puVar6 != (undefined4 *)0x0)) {
          (**(code **)*puVar6)(1);
        }
        iVar4 = *unaff_retaddr;
        piVar3[param_1] = iVar4;
      }
      if (iVar4 != 0) {
        InterlockedIncrement((LONG *)(iVar4 + 4));
      }
    }
  }
LAB_0055eee1:
  FUN_00401040();
  *unaff_FS_OFFSET = 0;
  return unaff_retaddr;
}



void FUN_0055ef10(byte param_1)

{
  FUN_0055e6b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint FUN_0055ef30(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *in_ECX;
  
  piVar1 = (int *)(*(int *)(*in_ECX + 0xc) + param_1 * 4);
  do {
    do {
      in_ECX[4] = (int)piVar1;
      in_ECX[5] = *piVar1;
      *(uint *)in_ECX[2] = in_ECX[5] & 0xfffffffe;
      uVar2 = *(uint *)in_ECX[4];
    } while (uVar2 != (in_ECX[5] & 0xfffffffeU));
    while( true ) {
      if ((in_ECX[5] & 0xfffffffeU) == 0) {
        return uVar2 & 0xffffff00;
      }
      in_ECX[6] = *(int *)((in_ECX[5] & 0xfffffffeU) + 8);
      *(uint *)in_ECX[1] = in_ECX[6] & 0xfffffffe;
      if (in_ECX[6] != *(int *)((in_ECX[5] & 0xfffffffeU) + 8)) break;
      uVar2 = in_ECX[5] & 0xfffffffe;
      if (*(uint *)in_ECX[4] != uVar2) break;
      if ((in_ECX[6] & 1U) == 0) {
        if (*(int *)((in_ECX[5] & 0xfffffffeU) + 4) == *param_2) {
          return CONCAT31((int3)((uint)in_ECX[6] >> 8),1);
        }
        in_ECX[4] = (in_ECX[5] & 0xfffffffeU) + 8;
        *(uint *)in_ECX[3] = in_ECX[5] & 0xfffffffe;
      }
      else {
        uVar3 = InterlockedCompareExchange((LONG *)in_ECX[4],in_ECX[6] & 0xfffffffe,uVar2);
        if (uVar3 != uVar2) break;
        uVar2 = in_ECX[5] & 0xfffffffe;
        *(undefined4 *)(uVar2 + 4) = 0;
        *(int *)(uVar2 + 4) = in_ECX[7];
        in_ECX[8] = in_ECX[8] + 1;
        in_ECX[7] = uVar2;
        if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
          FUN_00435fe0();
        }
      }
      uVar2 = in_ECX[6];
      in_ECX[5] = uVar2;
      *(uint *)in_ECX[2] = in_ECX[6] & 0xfffffffe;
    }
  } while( true );
}



void FUN_0055f0b0(void)

{
  int iVar1;
  int iVar2;
  uint *in_ECX;
  uint uVar3;
  
  uVar3 = 0;
  if (*in_ECX != 0) {
    do {
      iVar1 = *(int *)(in_ECX[2] + 4 + uVar3 * 8);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x20);
        while (iVar2 != 0) {
          FUN_00435fe0();
          iVar2 = *(int *)(iVar1 + 0x20);
        }
        FUN_00401f20(iVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < *in_ECX);
  }
  FUN_00401f20(in_ECX[2]);
  TlsFree(in_ECX[1]);
  return;
}



undefined4 FUN_0055f120(undefined4 param_1,undefined4 param_2,undefined4 *param_3,char param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint Comperand;
  uint uVar5;
  undefined4 *in_ECX;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  undefined1 local_15;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009b8ceb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_15 = 1;
  puVar6 = (undefined4 *)0x0;
  cVar1 = FUN_0043a260(param_1,param_2);
  do {
    if (cVar1 != '\0') {
      FUN_00401f20(puVar6);
      if (param_4 == '\0') {
        local_15 = 0;
      }
      else {
        *(undefined4 *)((in_ECX[5] & 0xfffffffe) + 4) = *param_3;
      }
LAB_0055f232:
      *(undefined4 *)in_ECX[1] = 0;
      *(undefined4 *)in_ECX[2] = 0;
      puVar6 = (undefined4 *)in_ECX[3];
      *puVar6 = 0;
      *unaff_FS_OFFSET = local_c;
      return CONCAT31((int3)((uint)puVar6 >> 8),local_15);
    }
    if (puVar6 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)FUN_00401f00(0xc,uVar2);
      if (puVar3 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        local_4 = puVar6;
        uVar4 = (**(code **)(*(int *)*in_ECX + 0x24))(param_2);
        puVar3[2] = 0;
        *puVar3 = uVar4;
        puVar3[1] = *param_3;
        puVar6 = puVar3;
      }
      local_4 = (undefined4 *)0xffffffff;
    }
    Comperand = in_ECX[5] & 0xfffffffe;
    puVar6[2] = Comperand;
    uVar5 = InterlockedCompareExchange((LONG *)in_ECX[4],(uint)puVar6 & 0xfffffffe,Comperand);
    if (uVar5 == Comperand) {
      (**(code **)(*(int *)*in_ECX + 0x30))();
      goto LAB_0055f232;
    }
    cVar1 = FUN_0043a260(param_1,param_2);
  } while( true );
}



undefined4 FUN_0055f270(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *in_ECX;
  
  do {
    cVar1 = FUN_0043a260(param_1,param_2);
    if (cVar1 == '\0') {
      uVar4 = 0;
      goto LAB_0055f35b;
    }
    uVar2 = in_ECX[6] & 0xfffffffe;
    uVar3 = InterlockedCompareExchange
                      ((LONG *)((in_ECX[5] & 0xfffffffeU) + 8),in_ECX[6] & 0xfffffffeU | 1,uVar2);
  } while (uVar3 != uVar2);
  *(undefined4 *)((in_ECX[5] & 0xfffffffeU) + 4) = 0;
  uVar3 = in_ECX[5];
  uVar2 = InterlockedCompareExchange((LONG *)in_ECX[4],uVar2,uVar3 & 0xfffffffe);
  if (uVar2 == (uVar3 & 0xfffffffe)) {
    uVar2 = in_ECX[5] & 0xfffffffe;
    *(undefined4 *)(uVar2 + 4) = 0;
    *(int *)(uVar2 + 4) = in_ECX[7];
    in_ECX[8] = in_ECX[8] + 1;
    in_ECX[7] = uVar2;
    if (in_ECX[8] == *(int *)(*in_ECX + 0x10)) {
      FUN_00435fe0();
    }
  }
  else {
    FUN_0043a260(param_1,param_2);
  }
  (**(code **)(*(int *)*in_ECX + 0x34))();
  uVar4 = 1;
LAB_0055f35b:
  *(undefined4 *)in_ECX[1] = 0;
  *(undefined4 *)in_ECX[2] = 0;
  *(undefined4 *)in_ECX[3] = 0;
  return uVar4;
}



void FUN_0055f380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  LPVOID pvVar1;
  int in_ECX;
  
  pvVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (pvVar1 == (LPVOID)0x0) {
    ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  FUN_0055f120(param_1,param_2,&param_3,param_4);
  return;
}



void FUN_0055f3c0(char param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar1 = (undefined4 *)in_ECX[5];
  uVar5 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = *puVar1;
    FUN_0055f0b0(uVar3);
    FUN_00401f20(puVar1);
    in_ECX[5] = 0;
    in_ECX[6] = 0;
    if (in_ECX[2] != 0) {
      do {
        uVar3 = *(uint *)(in_ECX[3] + uVar5 * 4);
        *(undefined4 *)(in_ECX[3] + uVar5 * 4) = 0;
        while (puVar1 = (undefined4 *)(uVar3 & 0xfffffffe), puVar1 != (undefined4 *)0x0) {
          uVar3 = puVar1[2];
          puVar1[2] = 0;
          puVar1[1] = 0;
          (**(code **)(*in_ECX + 0x20))(*puVar1);
          FUN_00401f20(puVar1);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < (uint)in_ECX[2]);
    }
    if (param_1 == '\0') {
      iVar4 = FUN_00401f00(0x10);
      uStack_4 = 0;
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = ThreadSpecificInterfaceManager_ctor(uVar2);
      }
      in_ECX[5] = iVar4;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055f4c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  puVar4 = (undefined1 *)&param_2;
  uVar3 = param_1;
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_1,puVar4,param_3);
  FUN_0055f120(uVar2,param_1,uVar3,puVar4);
  return;
}



void FUN_0055f510(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  
  puVar1 = TlsGetValue(*(DWORD *)(*(int *)(in_ECX + 0x14) + 4));
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)ThreadSpecificInterfaceManager_AddInterface(in_ECX);
  }
  uVar2 = (**(code **)(*(int *)*puVar1 + 0x1c))(param_1,param_1);
  FUN_0055f270(uVar2,param_1);
  return;
}



void FUN_0055f550(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bcc92;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 5;
  FUN_0055e390(0,uVar2);
  puVar1 = DAT_00b43108;
  if (DAT_00b43108 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_00b43108 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b43108 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b4310c;
  if (DAT_00b4310c != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(DAT_00b4310c + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    DAT_00b4310c = (undefined4 *)0x0;
  }
  DAT_00b06a28 = 1;
  FUN_004a3c60();
  puVar1 = *(undefined4 **)(in_ECX + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_00a651c4;
    FUN_0055f3c0(1);
    FUN_00401f20(puVar1[3]);
    FUN_00401f20(puVar1[1]);
    FUN_00401f20(puVar1);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x18);
  local_4._0_1_ = 4;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x14);
  local_4._0_1_ = 3;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  local_4._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 0xc);
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = *(undefined4 **)(in_ECX + 4);
  local_4 = 0xffffffff;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0055f750(char param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = DAT_00b39e04;
  if (DAT_00b39e04 != 0) {
    if (param_1 == '\0') goto LAB_0055f7c7;
    FUN_0055f550(uVar1);
    FUN_00401f20(iVar2);
    DAT_00b39e04 = 0;
  }
  iVar2 = FUN_00401f00(0x28);
  local_4 = 0;
  if (iVar2 == 0) {
    DAT_00b39e04 = 0;
  }
  else {
    DAT_00b39e04 = FUN_0055e850();
  }
LAB_0055f7c7:
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0055f7e0(char param_1)

{
  if ((DAT_00b39e04 == 0) && (param_1 != '\0')) {
    FUN_0055f750(0);
  }
  return DAT_00b39e04;
}



/* WARNING: Removing unreachable block (ram,0x0055f964) */
/* WARNING: Removing unreachable block (ram,0x0055f9d8) */
/* WARNING: Removing unreachable block (ram,0x0055f9e5) */
/* WARNING: Removing unreachable block (ram,0x0055f96c) */
/* WARNING: Removing unreachable block (ram,0x0055f98e) */
/* WARNING: Removing unreachable block (ram,0x0055f983) */
/* WARNING: Removing unreachable block (ram,0x0055f990) */
/* WARNING: Removing unreachable block (ram,0x0055f9e7) */
/* WARNING: Removing unreachable block (ram,0x0055f9f1) */
/* WARNING: Removing unreachable block (ram,0x0055fa02) */
/* WARNING: Removing unreachable block (ram,0x0055fa19) */
/* WARNING: Removing unreachable block (ram,0x0055fa2c) */
/* WARNING: Removing unreachable block (ram,0x0055f9a1) */
/* WARNING: Removing unreachable block (ram,0x0055f9a5) */

undefined4 FUN_0055f800(int *param_1,int param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  int in_ECX;
  undefined4 uVar8;
  int *unaff_FS_OFFSET;
  undefined1 auStack_14 [4];
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar3 = param_2;
  puStack_8 = &LAB_009bcccb;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if ((DAT_00b125e8 != '\0') && (param_2 != 0)) {
    local_10 = param_2 + 0x24;
    iVar6 = (**(code **)(*(int *)(param_2 + 0x24) + 0x14))(uVar5);
    piVar2 = param_1;
    if (iVar6 != 0) {
      if (*(ushort *)(iVar3 + 0x2c) == 0xffff) {
        pcVar7 = *(char **)(iVar3 + 0x28);
        pcVar1 = pcVar7 + 1;
        do {
          cVar4 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar4 != '\0');
        uVar5 = (int)pcVar7 - (int)pcVar1;
      }
      else {
        uVar5 = (uint)*(ushort *)(iVar3 + 0x2c);
      }
      if ((uVar5 != 0) &&
         ((param_1 == (int *)0x0 || (iVar6 = (**(code **)(*param_1 + 0x170))(), iVar6 == iVar3)))) {
        param_2 = 0;
        FUN_00401020(&DAT_00a2f830);
        cVar4 = (**(code **)(**(int **)(in_ECX + 0x24) + 4))(piVar2,&param_1);
        if (cVar4 != '\0') {
          (**(code **)(**(int **)(in_ECX + 0x24) + 0x10))(piVar2);
          FUN_00401040();
          uVar8 = param_2;
          local_4 = 0xffffffff;
          FUN_007016a0();
          goto LAB_0055f9c2;
        }
        FUN_00401040();
        uVar8 = 1;
        if (piVar2 != (int *)0x0) {
          uVar8 = FUN_004d7820();
        }
        if (DAT_00b39e04 == 0) {
          FUN_0055f750(0);
        }
        uVar8 = FUN_0055ed30(auStack_14,iVar3,uVar8);
        local_4._0_1_ = 1;
        FUN_0055e2a0(uVar8);
        local_4._0_1_ = 0;
        FUN_007016a0();
        local_4 = 0xffffffff;
        FUN_007016a0();
      }
    }
  }
  uVar8 = 0;
LAB_0055f9c2:
  *unaff_FS_OFFSET = local_c;
  return uVar8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fa50(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  float local_18;
  float local_14;
  float local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_2 == '\0') {
    _DAT_00b39f18 = _DAT_00b33e9c + _DAT_00b39f18;
    FUN_0078d3f0(_DAT_00b39f18);
  }
  if (param_1 != 0) {
    local_c = *(undefined4 *)(param_1 + 0x88);
    local_8 = *(undefined4 *)(param_1 + 0x8c);
    local_4 = *(undefined4 *)(param_1 + 0x90);
    local_18 = *(float *)(param_1 + 100) * -1.0;
    local_14 = *(float *)(param_1 + 0x70) * -1.0;
    local_10 = *(float *)(param_1 + 0x7c) * -1.0;
    FUN_0078d140(&local_c,&local_18);
  }
  if (param_2 == '\0') {
    if ((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x5c) != 0)) {
      if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
        uVar1 = *(undefined4 *)(*(int *)(DAT_00b333a0 + 0x5c) + 0xc0);
        if (DAT_00b39e04 == 0) {
          FUN_0055f750(0);
        }
        *(undefined4 *)(DAT_00b39e04 + 0x1c) = uVar1;
      }
      else {
        if (DAT_00b39e04 == 0) {
          FUN_0055f750(0);
        }
        *(undefined4 *)(DAT_00b39e04 + 0x1c) = 0;
      }
      if (*(int *)(DAT_00b39e04 + 0xc) != 0) {
        iVar4 = FUN_0053fb50();
        if (iVar4 != 0) {
          iVar4 = FUN_0053fb50();
          uVar1 = *(undefined4 *)(iVar4 + 0x20);
          uVar2 = *(undefined4 *)(iVar4 + 0x24);
          uVar3 = *(undefined4 *)(iVar4 + 0x28);
          if (DAT_00b39e04 == 0) {
            FUN_0055f750(0);
          }
          iVar4 = *(int *)(DAT_00b39e04 + 0xc);
          *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
          *(undefined4 *)(iVar4 + 0x1c) = uVar1;
          *(undefined4 *)(iVar4 + 0x20) = uVar2;
          *(undefined4 *)(iVar4 + 0x24) = uVar3;
          if (DAT_00b39e04 == 0) {
            FUN_0055f750(0);
          }
          iVar4 = *(int *)(DAT_00b39e04 + 0xc);
          *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
          *(undefined4 *)(iVar4 + 0x28) = uVar1;
          *(undefined4 *)(iVar4 + 0x2c) = uVar2;
          *(undefined4 *)(iVar4 + 0x30) = uVar3;
          if (DAT_00b39e04 == 0) {
            FUN_0055f750(0);
          }
          iVar4 = *(int *)(DAT_00b39e04 + 0xc);
          *(int *)(iVar4 + 0x54) = *(int *)(iVar4 + 0x54) + 1;
          *(undefined4 *)(iVar4 + 0x40) = uVar1;
          *(undefined4 *)(iVar4 + 0x44) = uVar2;
          *(undefined4 *)(iVar4 + 0x48) = uVar3;
        }
      }
    }
    if (DAT_00b39e04 == 0) {
      FUN_0055f750(0);
    }
    FUN_0055e060();
  }
  DAT_00b44f04 = (float)DAT_00b12630;
  if (DAT_00b12630 < 0) {
    DAT_00b44f04 = DAT_00b44f04 + 4.2949673e+09;
  }
  _DAT_00b2d860 = 0.0;
  if ((0.0 <= _DAT_00b12638) && (_DAT_00b2d860 = _DAT_00b12638, 1.0 < _DAT_00b12638)) {
    _DAT_00b2d860 = 1.0;
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055fcb0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_18;
  int *local_14;
  float local_10;
  int local_c;
  undefined1 *puStack_8;
  int *local_4;
  
  local_4 = (int *)0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b39e04 == (int *)0x0) {
    FUN_0055f750(0,uVar3);
  }
  iVar1 = *DAT_00b39e04;
  if (iVar1 != 0) {
    uVar3 = 0;
    piVar2 = DAT_00b39e04;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar4 = *(int **)(iVar1 + 8);
      do {
        if (*piVar4 != 0) {
          local_18 = (*(int **)(iVar1 + 8))[uVar3];
          goto joined_r0x0055fd1d;
        }
        uVar3 = uVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (uVar3 < *(uint *)(iVar1 + 4));
    }
    local_18 = 0;
joined_r0x0055fd1d:
    while (DAT_00b39e04 = piVar2, local_18 != 0) {
      if (piVar2 == (int *)0x0) {
        local_10 = (float)FUN_00401f00(0x28);
        if (local_10 == 0.0) {
          DAT_00b39e04 = (int *)0x0;
        }
        else {
          local_4 = piVar2;
          DAT_00b39e04 = (int *)FUN_0055e850();
        }
        local_4 = (int *)0xffffffff;
      }
      FUN_00452600(&local_18,&local_10,&local_14);
      piVar2 = DAT_00b39e04;
      if (((local_14 != (int *)0x0) && (*local_14 != 0)) && (*(int *)(*local_14 + 0xc) != 0)) {
        local_10 = _DAT_00b0760c * _DAT_00b39e08;
        FUN_007871d0(local_10,_DAT_00b0760c * _DAT_00b39e10);
        piVar2 = DAT_00b39e04;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0055fdf0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 **ppuVar4;
  LONG LVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int *unaff_FS_OFFSET;
  bool bVar11;
  undefined4 *local_14;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bcd4e;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b39e04 == 0) {
    FUN_0055f750(0,uVar3);
  }
  if (*(int *)(DAT_00b39e04 + 4) == 0) {
    bVar11 = DAT_00b333a0 == 0;
    if (bVar11) {
      local_14 = (undefined4 *)0x0;
      ppuVar4 = &local_14;
      local_4 = 1;
    }
    else {
      ppuVar4 = (undefined4 **)FUN_00442890(&local_10,"Data\\Textures\\Trees\\CanopyShadow.dds",1,0)
      ;
      local_4 = 0;
    }
    puVar8 = local_14;
    local_4 = (uint)bVar11;
    puVar1 = *ppuVar4;
    if (DAT_00b39e04 == 0) {
      FUN_0055f750(0,uVar3);
    }
    FUN_0075fa90(puVar1);
    local_4 = 0;
    if (((bVar11) && (puVar8 != (undefined4 *)0x0)) &&
       (LVar5 = InterlockedDecrement(puVar8 + 1), LVar5 == 0)) {
      (**(code **)*puVar8)(1);
    }
    local_4 = 0xffffffff;
    if (((!bVar11) && (local_10 != (undefined4 *)0x0)) &&
       ((LVar5 = InterlockedDecrement(local_10 + 1), LVar5 == 0 && (local_10 != (undefined4 *)0x0)))
       ) {
      (**(code **)*local_10)(1);
    }
    if (DAT_00b39e04 == 0) {
      FUN_0055f750(0);
    }
    FUN_0055e340(*(undefined4 *)(DAT_00b39e04 + 4));
  }
  if (DAT_00b39e04 == 0) {
    FUN_0055f750(0,uVar3);
  }
  if (*(int *)(DAT_00b39e04 + 4) == 0) {
    local_14 = (undefined4 *)FUN_00401f00(0x70);
    local_4 = 2;
    if (local_14 == (undefined4 *)0x0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_0070e560(0x10,0x10,&DAT_00b25e48,1,1);
    }
    local_4 = 0xffffffff;
    puVar7 = (undefined1 *)(**(int **)(iVar6 + 0x5c) + *(int *)(iVar6 + 0x50) + 2);
    iVar10 = 0x10;
    do {
      iVar9 = 0x10;
      do {
        puVar7[-2] = 0xff;
        puVar7[-1] = 0xff;
        *puVar7 = 0xff;
        puVar7 = puVar7 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    *(int *)(iVar6 + 0x68) = *(int *)(iVar6 + 0x68) + 1;
    if (DAT_00b39e04 == 0) {
      local_14 = (undefined4 *)FUN_00401f00(0x28);
      local_4 = 3;
      if (local_14 == (undefined4 *)0x0) {
        DAT_00b39e04 = 0;
      }
      else {
        DAT_00b39e04 = FUN_0055e850();
      }
    }
    iVar10 = DAT_00b39e04;
    local_4 = 0xffffffff;
    puVar8 = (undefined4 *)FUN_00701fc0(iVar6,&DAT_00b256d0);
    puVar1 = *(undefined4 **)(iVar10 + 4);
    if (puVar1 != puVar8) {
      if (((puVar1 != (undefined4 *)0x0) && (LVar5 = InterlockedDecrement(puVar1 + 1), LVar5 == 0))
         && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      *(undefined4 **)(iVar10 + 4) = puVar8;
      if (puVar8 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar8 + 1);
      }
    }
    if (DAT_00b39e04 == 0) {
      local_14 = (undefined4 *)FUN_00401f00(0x28);
      local_4 = 4;
      if (local_14 == (undefined4 *)0x0) {
        DAT_00b39e04 = 0;
      }
      else {
        DAT_00b39e04 = FUN_0055e850();
      }
      local_4 = 0xffffffff;
    }
    puVar8 = DAT_00b43108;
    puVar1 = *(undefined4 **)(DAT_00b39e04 + 4);
    if (DAT_00b43108 != puVar1) {
      if (((DAT_00b43108 != (undefined4 *)0x0) &&
          (LVar5 = InterlockedDecrement(DAT_00b43108 + 1), LVar5 == 0)) &&
         (puVar8 != (undefined4 *)0x0)) {
        (**(code **)*puVar8)(1);
      }
      DAT_00b43108 = puVar1;
      if (puVar1 != (undefined4 *)0x0) {
        InterlockedIncrement(puVar1 + 1);
      }
    }
  }
  if (DAT_00b39e04 == 0) {
    local_10 = (undefined4 *)FUN_00401f00(0x28);
    local_4 = 5;
    if (local_10 == (undefined4 *)0x0) {
      DAT_00b39e04 = 0;
    }
    else {
      DAT_00b39e04 = FUN_0055e850();
    }
  }
  uVar2 = *(undefined4 *)(DAT_00b39e04 + 4);
  *unaff_FS_OFFSET = local_c;
  return uVar2;
}


