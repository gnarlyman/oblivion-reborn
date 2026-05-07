
void FUN_00450030(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38b8c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00450050(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38b8c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00450080(void)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_4;
  
  iVar4 = *(int *)(in_ECX + 0x10);
  if (iVar4 == 0) {
    return 0;
  }
  piVar1 = (int *)(in_ECX + 0x23c);
  local_4 = 1;
  iVar4 = (**(code **)(iVar4 + 4))(iVar4,piVar1,0x14,&local_4,1);
  if (iVar4 == 0) {
    *piVar1 = 0;
    *(undefined4 *)(in_ECX + 0x240) = 0;
    *(undefined4 *)(in_ECX + 0x244) = 0;
    *(undefined4 *)(in_ECX + 0x248) = 0;
    *(undefined4 *)(in_ECX + 0x24c) = 0;
    return 0;
  }
  if ((*piVar1 != DAT_00b05e20) && (*piVar1 != DAT_00b06138)) {
    iVar4 = 0;
    if (*(int *)(in_ECX + 0x3f4) != 0) {
      iVar4 = FUN_0044fd60(*(byte *)(in_ECX + 0x24b) + 1);
    }
    uVar2 = *(uint *)(in_ECX + 0x248);
    if (iVar4 != 0) {
      *(uint *)(in_ECX + 0x248) = (uint)*(byte *)(iVar4 + 0x400) << 0x18 | uVar2 & 0xffffff;
      return 1;
    }
    if (((uVar2 & 0xff000000) != 0xff000000) &&
       (cVar3 = FUN_0046abd0(uVar2 & 0xffffff), cVar3 != '\0')) {
      *(undefined1 *)(in_ECX + 0x24b) = 0;
      return 1;
    }
    *(uint *)(in_ECX + 0x248) =
         (uint)*(byte *)(in_ECX + 0x400) << 0x18 | *(uint *)(in_ECX + 0x248) & 0xffffff;
  }
  return 1;
}



undefined4 FUN_00450190(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *in_ECX;
  
  uVar2 = param_2;
  iVar1 = param_1;
  if (param_1 != 0) {
    param_1 = 1;
    uVar3 = (**(code **)(in_ECX[4] + 8))(in_ECX[4],iVar1,param_2,&param_1,1);
    if (uVar3 < uVar2) {
      __errno();
      *in_ECX = 10;
      FUN_004a7a60("Write Error in TES file");
      return *in_ECX;
    }
  }
  *in_ECX = 0;
  return 0;
}



void FUN_004501f0(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (param_1 != 0) {
    FUN_0044ff50(param_1);
    if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
      iVar1 = *(int *)(in_ECX + 0x284);
      (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,2);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
      if (iVar2 == -1) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
      }
      *(int *)(iVar1 + 0x14) = iVar2;
      FUN_00450190(iVar1,0x14);
      *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + 1;
    }
  }
  return;
}



void FUN_00450250(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x284);
  if (iVar1 != 0) {
    if (*(int *)(in_ECX + 0x10) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,2);
      iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
      if (iVar2 == -1) {
        iVar2 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
      }
      *(int *)(iVar1 + 4) = iVar2 - *(int *)(iVar1 + 0x14);
      (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(*(int *)(iVar1 + 0x14),0);
      FUN_00450190(iVar1,0x14);
    }
    FUN_0044ffa0();
    return;
  }
  return;
}



void FUN_004502c0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  char cVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if ((param_1 != (int *)0x0) && ((char)param_1[1] != '\x01')) {
    piVar2 = (int *)(in_ECX + 0x284);
    local_18 = 0;
    piVar6 = piVar2;
    if (piVar2 != (int *)0x0) {
      do {
        iVar3 = *piVar6;
        if ((iVar3 != 0) && (cVar5 = (**(code **)(*param_1 + 0xbc))(iVar3,1,1), cVar5 == '\0')) {
          local_18 = iVar3;
        }
        piVar1 = piVar6 + 1;
        piVar6 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      if (local_18 != 0) {
        iVar3 = *piVar2;
        while ((iVar3 != 0 && (FUN_00450250(), iVar3 != local_18))) {
          iVar3 = *piVar2;
        }
      }
    }
    while( true ) {
      iVar3 = *piVar2;
      if ((iVar3 != 0) && (cVar5 = (**(code **)(*param_1 + 0xbc))(iVar3,0,1), cVar5 != '\0')) {
        return;
      }
      (**(code **)(*param_1 + 0xc0))(&iStack_14,iVar3);
      if (iStack_14 != DAT_00b05e20) break;
      piVar6 = (int *)FUN_00401f00(0x18);
      FUN_00446cb0(piVar6);
      *piVar6 = iStack_14;
      piVar6[1] = iStack_10;
      piVar6[2] = iStack_c;
      piVar6[3] = iStack_8;
      piVar6[4] = iStack_4;
      if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
        iVar3 = *piVar2;
        (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,2);
        iVar7 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
        if (iVar7 == -1) {
          iVar7 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
        }
        *(int *)(iVar3 + 0x14) = iVar7;
        FUN_00450190(iVar3,0x14);
        *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + 1;
      }
    }
    puVar4 = (&PTR_DAT_00b05e04)[(uint)*(byte *)(param_1 + 1) * 3];
    uVar8 = (**(code **)(*param_1 + 0xd4))(param_1[3]);
    FUN_004a7a60("Failed to CreateGroupData for %s form \'%s\' (%08X)",puVar4,uVar8);
  }
  return;
}



void FUN_00450430(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  int iVar3;
  int unaff_FS_OFFSET;
  
  iVar3 = *(int *)(in_ECX + 0x284);
  if (iVar3 != 0) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    do {
      if (*(char *)(iVar1 + 0x184) == '\0') {
        if (iVar3 != 0) {
          puVar2 = *(undefined4 **)(in_ECX + 0x288);
          if (puVar2 == (undefined4 *)0x0) {
            *(undefined4 *)(in_ECX + 0x284) = 0;
          }
          else {
            *(undefined4 *)(in_ECX + 0x288) = puVar2[1];
            *(undefined4 *)(in_ECX + 0x284) = *puVar2;
            FUN_00401f20(puVar2);
          }
          FUN_00401f20(iVar3);
        }
      }
      else {
        FUN_00450250();
      }
      iVar3 = *(int *)(in_ECX + 0x284);
    } while (iVar3 != 0);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004504b0(void)

{
  float fVar1;
  int in_ECX;
  undefined1 auStack_10c [3];
  undefined1 local_109;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_10c;
  fVar1 = *(float *)(in_ECX + 0x3d0);
  if (1.0 < fVar1) {
    local_109 = DAT_00b06b18;
    DAT_00b06b18 = 0;
    _sprintf(local_108,"File %s is a higher version than this EXE can load.",in_ECX + 0x1c);
    FUN_004a7a60(local_108);
    DAT_00b06b18 = local_109;
    return 1;
  }
  return CONCAT22((short)(local_4 >> 0x10),
                  (ushort)(1.0 < fVar1) << 8 | (ushort)NAN(fVar1) << 10 |
                  (ushort)(fVar1 == 1.0) << 0xe);
}



void FUN_00450550(void)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  char *pcVar7;
  undefined4 *local_38;
  int local_34;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  
  if ((((*(int *)(in_ECX + 0x240) != 0) && (*(int *)(in_ECX + 0x23c) != DAT_00b05e20)) &&
      ((*(uint *)(in_ECX + 0x244) & 0x40000) != 0)) &&
     ((cVar2 = FUN_0046af70(*(int *)(in_ECX + 0x23c)), cVar2 != '\0' &&
      (puVar3 = (undefined4 *)thunk_FUN_00401aa0(*(int *)(in_ECX + 0x240) + 1,1),
      puVar3 != (undefined4 *)0x0)))) {
    iVar6 = *(int *)(in_ECX + 0x240);
    iVar4 = FUN_0042c8e0(puVar3,iVar6);
    if (iVar4 != iVar6) {
      FUN_004a7a60("TESFile: Failed to read in buffer data for compressed form.");
      FUN_00401e40(puVar3);
      return;
    }
    uVar1 = *puVar3;
    *(undefined1 *)(iVar6 + (int)puVar3) = 0;
    uVar5 = FUN_0040fd70(uVar1);
    *(undefined4 *)(in_ECX + 0x414) = uVar5;
    *(undefined4 *)(in_ECX + 0x418) = uVar1;
    local_18 = &LAB_0042ba60;
    local_14 = &LAB_0042ba80;
    local_10 = 0;
    local_34 = 0;
    local_38 = (undefined4 *)0x0;
    iVar6 = FUN_00742490(&local_38,"1.2.1",0x38);
    if (iVar6 != 0) {
      FUN_00743970(&local_38);
      FUN_004a7a60("TESFile: Error initializing ZLib inflate stream.");
      FUN_0044fb60();
      return;
    }
    local_2c = *(undefined4 *)(in_ECX + 0x414);
    local_34 = *(int *)(in_ECX + 0x240) + -4;
    local_38 = puVar3 + 1;
    local_28 = uVar1;
    iVar6 = FUN_007425a0(&local_38,0);
    if (((iVar6 == -2) || (iVar6 == 2)) || ((iVar6 == -3 || (iVar6 == -4)))) {
      FUN_00743970(&local_38);
      pcVar7 = "TESFile: Error inflating ZLib stream.";
    }
    else {
      if (iVar6 == 1) {
        FUN_00743970(&local_38);
        FUN_00401e40(puVar3);
        return;
      }
      FUN_00743970(&local_38);
      pcVar7 = "TESFile: Error: ZLib stream did not terminate.";
    }
    FUN_004a7a60(pcVar7);
    FUN_0044fb60();
    FUN_00401e40(puVar3);
  }
  return;
}



void FUN_00450710(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a38b8c;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a38d0c;
  return;
}



void FUN_00450760(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae088;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a38d0c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a38b8c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004507d0(void)

{
  undefined1 uVar1;
  char *pcVar2;
  BOOL BVar3;
  int iVar4;
  undefined4 *in_ECX;
  char *pcVar5;
  CHAR aCStack_20c [260];
  CHAR aCStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)aCStack_20c;
  if ((DAT_00b33a98 != 0) && (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) {
    return 1;
  }
  FUN_00450430();
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[4])(1);
    in_ECX[4] = 0;
  }
  if (in_ECX[0x105] != 0) {
    FUN_00401e40(in_ECX[0x105]);
    in_ECX[0x105] = 0;
    in_ECX[0x106] = 0;
  }
  if (in_ECX[3] != 0) {
    lstrcpyA(aCStack_108,(LPCSTR)(in_ECX + 0x48));
    pcVar5 = (char *)(in_ECX + 7);
    lstrcatA(aCStack_108,pcVar5);
    lstrcpyA(aCStack_20c,(LPCSTR)(in_ECX + 0x48));
    pcVar2 = _strchr(pcVar5,0x2e);
    if (pcVar2 == (char *)0x0) {
      lstrcatA(aCStack_20c,pcVar5);
      lstrcatA(aCStack_20c,".tes");
    }
    else {
      *pcVar2 = '\0';
      lstrcatA(aCStack_20c,pcVar5);
      lstrcatA(aCStack_20c,".tes");
      *pcVar2 = '.';
    }
    if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[3])(1);
    }
    in_ECX[3] = 0;
    uVar1 = DAT_00b06b18;
    DAT_00b06b18 = 0;
    BVar3 = DeleteFileA(aCStack_108);
    if (BVar3 == 0) {
      pcVar5 = 
      "Unable to complete operation due to failure removing previous file.\r\nTemp file remains.";
    }
    else {
      iVar4 = FUN_0098544f(aCStack_20c,aCStack_108);
      if (iVar4 == 0) {
        DAT_00b06b18 = uVar1;
        return 1;
      }
      pcVar5 = 
      "Unable to complete operation due to failure renaming temp file.\r\nTemp file remains.";
    }
    *in_ECX = 9;
    FUN_004a7a60(pcVar5);
    DAT_00b06b18 = uVar1;
    return 0;
  }
  return 1;
}



void FUN_00450980(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_004502c0(param_1);
  *(uint *)(in_ECX + 0x270) = *(uint *)(param_1 + 8) & 0x30ee0;
  *(undefined4 *)(in_ECX + 0x268) = (&DAT_00b05e08)[(uint)*(byte *)(param_1 + 4) * 3];
  *(undefined4 *)(in_ECX + 0x274) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x26c) = 0;
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,2);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
  if (iVar1 == -1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
  }
  *(int *)(in_ECX + 0x27c) = iVar1;
  *(undefined4 *)(in_ECX + 0x280) = 0;
  FUN_00450190(in_ECX + 0x268,0x14);
  return;
}



undefined4 FUN_00450a10(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_004502c0(param_1);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,2);
  uVar1 = FUN_00450190(DAT_00b33c14,DAT_00b33c18);
  if ((DAT_00b33c14 != 0) && (DAT_00b33c18 != 0)) {
    *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + 1;
  }
  FUN_0046af30();
  return uVar1;
}



void FUN_00450a80(void)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x3d4) = *(int *)(in_ECX + 0x3d4) + 1;
  *(undefined4 *)(in_ECX + 0x26c) = *(undefined4 *)(in_ECX + 0x280);
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(*(undefined4 *)(in_ECX + 0x27c),0);
  FUN_00450190(in_ECX + 0x268,0x14);
  return;
}



void FUN_00450ac0(byte param_1)

{
  FUN_00450760();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00450ae0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae0cc;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 1;
  FUN_004507d0(uVar3);
  for (piVar1 = (int *)(in_ECX + 0x3e0); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_00401f20(*piVar1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x3e4);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x3e4) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x3e4));
    *(int *)(in_ECX + 0x3e4) = iVar2;
  }
  *(int *)(in_ECX + 0x3e0) = 0;
  for (piVar1 = (int *)(in_ECX + 1000); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      FUN_00401f20(*piVar1);
    }
  }
  iVar2 = *(int *)(in_ECX + 0x3ec);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x3ec) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x3ec));
    *(int *)(in_ECX + 0x3ec) = iVar2;
  }
  *(int *)(in_ECX + 1000) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x224));
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x3f4));
  *(undefined4 *)(in_ECX + 0x3f4) = 0;
  FUN_00451000();
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x40c));
  *(undefined4 *)(in_ECX + 0x40c) = 0;
  *(undefined2 *)(in_ECX + 0x412) = 0;
  *(undefined2 *)(in_ECX + 0x410) = 0;
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x404));
  *(undefined4 *)(in_ECX + 0x404) = 0;
  *(undefined2 *)(in_ECX + 0x40a) = 0;
  *(undefined2 *)(in_ECX + 0x408) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00450c20(void *param_1,uint param_2)

{
  int iVar1;
  DWORD DVar2;
  int in_ECX;
  DWORD DVar3;
  HLOCAL *ppvVar4;
  DWORD DVar5;
  va_list *ppcVar6;
  HLOCAL pvStack_18;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  undefined1 uStack_10;
  undefined1 uStack_c;
  undefined1 uStack_b;
  undefined1 uStack_a;
  undefined1 uStack_9;
  undefined1 uStack_8;
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&pvStack_18;
  if (*(int *)(in_ECX + 0x254) == 0) {
    return 1;
  }
  if (*(int *)(in_ECX + 0x264) != 0) {
    if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0))
    {
      (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))
                (*(int *)(in_ECX + 0x260) + 0x1a + *(int *)(in_ECX + 0x25c),0);
    }
    *(undefined4 *)(in_ECX + 0x264) = 0;
  }
  if ((param_2 == 0) || (*(uint *)(in_ECX + 0x254) <= param_2)) {
    if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0))
    {
      pvStack_18 = (HLOCAL)0x1;
      iVar1 = (**(code **)(*(int *)(in_ECX + 0x10) + 4))
                        (*(int *)(in_ECX + 0x10),param_1,*(undefined4 *)(in_ECX + 0x254),&pvStack_18
                         ,1);
      *(int *)(in_ECX + 0x264) = iVar1;
      if (iVar1 != *(int *)(in_ECX + 0x254)) {
        ppcVar6 = (va_list *)0x0;
        DVar5 = 0;
        ppvVar4 = &pvStack_18;
        DVar3 = 0x400;
        DVar2 = GetLastError();
        FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,DVar3,(LPSTR)ppvVar4,DVar5,ppcVar6);
        FUN_004a7a60("Second ReadFile() in GetChunkData failed with error:\n%s",pvStack_18);
        LocalFree(pvStack_18);
        return 0;
      }
    }
    else {
      iVar1 = *(int *)(in_ECX + 0x260);
      if (*(int *)(in_ECX + 0x414) == 0) {
        FUN_00450550();
      }
      _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x414) + iVar1 + 6),*(size_t *)(in_ECX + 0x254));
      *(undefined4 *)(in_ECX + 0x264) = *(undefined4 *)(in_ECX + 0x254);
    }
  }
  else {
    *(undefined1 *)((param_2 - 1) + (int)param_1) = 0;
    if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0))
    {
      iVar1 = FUN_0042c8e0(param_1,param_2 - 1);
      *(int *)(in_ECX + 0x264) = iVar1;
      if (iVar1 != param_2 - 1) {
        ppcVar6 = (va_list *)0x0;
        DVar5 = 0;
        ppvVar4 = &pvStack_18;
        DVar3 = 0x400;
        DVar2 = GetLastError();
        FormatMessageA(0x1300,(LPCVOID)0x0,DVar2,DVar3,(LPSTR)ppvVar4,DVar5,ppcVar6);
        FUN_004a7a60("First ReadFile() in GetChunkData failed with error:\n%s",pvStack_18);
        LocalFree(pvStack_18);
        return 0;
      }
    }
    else {
      pvStack_18 = (HLOCAL)(*(int *)(in_ECX + 0x260) + 6);
      if (*(int *)(in_ECX + 0x414) == 0) {
        FUN_00450550();
      }
      _memcpy(param_1,(void *)(*(int *)(in_ECX + 0x414) + (int)pvStack_18),param_2 - 1);
      *(uint *)(in_ECX + 0x264) = param_2 - 1;
    }
    uStack_c = *(undefined1 *)(in_ECX + 0x250);
    uStack_9 = *(undefined1 *)(in_ECX + 0x253);
    uStack_a = (undefined1)((uint)*(undefined4 *)(in_ECX + 0x250) >> 0x10);
    uStack_14 = *(undefined1 *)(in_ECX + 0x23c);
    uStack_b = (undefined1)((uint)*(undefined4 *)(in_ECX + 0x250) >> 8);
    uStack_13 = *(undefined1 *)(in_ECX + 0x23d);
    uStack_12 = *(undefined1 *)(in_ECX + 0x23e);
    uStack_11 = *(undefined1 *)(in_ECX + 0x23f);
    uStack_8 = 0;
    uStack_10 = 0;
    FUN_004a7a60("Chunk size %d too big in chunk %s_ID in form %s_ID.\r\nMax size is %d, data truncated to \"%s\".\r\n"
                 ,*(undefined4 *)(in_ECX + 0x254),&uStack_c,&uStack_14,param_2,param_1);
  }
  return 1;
}



undefined4 FUN_00450f10(void)

{
  uint uVar1;
  int iVar2;
  int in_ECX;
  undefined4 local_c;
  int local_8;
  ushort local_4;
  
  local_8 = 0;
  local_4 = 0;
  if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0)) {
    local_c = 1;
    iVar2 = (**(code **)(*(int *)(in_ECX + 0x10) + 4))
                      (*(int *)(in_ECX + 0x10),&local_8,6,&local_c,1);
    if (iVar2 != 0) goto LAB_00450fb7;
  }
  else {
    uVar1 = *(uint *)(in_ECX + 0x260);
    if (*(int *)(in_ECX + 0x414) == 0) {
      FUN_00450550();
    }
    iVar2 = *(int *)(in_ECX + 0x414);
    if ((iVar2 != 0) && (uVar1 < *(uint *)(in_ECX + 0x418))) {
      local_8 = *(int *)(iVar2 + uVar1);
      local_4 = *(ushort *)(iVar2 + uVar1 + 4);
LAB_00450fb7:
      *(int *)(in_ECX + 0x250) = local_8;
      *(uint *)(in_ECX + 0x254) = (uint)local_4;
      if (local_8 == 0x58585858) {
        local_c = 0;
        FUN_00450c20(&local_c,0);
        FUN_0044fea0();
        *(undefined4 *)(in_ECX + 0x254) = local_c;
      }
      return 1;
    }
  }
  *(undefined4 *)(in_ECX + 0x254) = 0;
  *(undefined4 *)(in_ECX + 0x250) = 0;
  return 0;
}



void FUN_00451000(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  iVar1 = *(int *)(in_ECX + 8);
  if (iVar1 != 0) {
    uVar2 = 0;
    if (*(uint *)(iVar1 + 4) != 0) {
      piVar3 = *(int **)(iVar1 + 8);
      do {
        if (*piVar3 != 0) {
          local_8 = (*(int **)(iVar1 + 8))[uVar2];
          goto joined_r0x0045103b;
        }
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (uVar2 < *(uint *)(iVar1 + 4));
    }
    local_8 = 0;
joined_r0x0045103b:
    while (local_8 != 0) {
      local_c = 0;
      FUN_00452600(&local_8,local_4,&local_c);
      iVar1 = local_c;
      if (local_c != 0) {
        FUN_00450ae0();
        FUN_00401f20(iVar1);
      }
    }
    FUN_007c2a40();
    if (*(undefined4 **)(in_ECX + 8) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 8))(1);
    }
    *(undefined4 *)(in_ECX + 8) = 0;
  }
  return;
}



undefined4 FUN_004510b0(void)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x250) == 0) {
    cVar1 = FUN_00450f10();
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return *(undefined4 *)(in_ECX + 0x250);
}



void FUN_004510e0(undefined4 param_1)

{
  FUN_00450c20(param_1,4);
  return;
}



void FUN_004510f0(undefined4 param_1)

{
  FUN_00450c20(param_1,2);
  return;
}



void FUN_00451100(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  
  cVar3 = FUN_0046cb60();
  while (cVar3 == '\0') {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00450ae0();
      FUN_00401f20(iVar1);
    }
    piVar2 = (int *)param_1[1];
    if (piVar2 == (int *)0x0) {
      *param_1 = 0;
    }
    else {
      param_1[1] = piVar2[1];
      *param_1 = *piVar2;
      FUN_00401f20(piVar2);
    }
    cVar3 = FUN_0046cb60();
  }
  return;
}



void FUN_00451160(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x260) = 0;
  *(undefined4 *)(in_ECX + 0x264) = 0;
  if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || ((*(uint *)(in_ECX + 0x244) & 0x40000) == 0)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(*(int *)(in_ECX + 0x25c) + 0x14,0);
  }
  *(undefined4 *)(in_ECX + 0x250) = 0;
  *(undefined4 *)(in_ECX + 0x254) = 0;
  FUN_00450f10();
  return;
}



undefined4 FUN_004511c0(void)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x23c) == 0) {
    cVar1 = FUN_00450080();
    if (cVar1 == '\0') {
      return 0;
    }
    *(undefined4 *)(in_ECX + 0x250) = 0;
    *(undefined4 *)(in_ECX + 0x254) = 0;
    FUN_00450f10();
  }
  uVar2 = FUN_0046af70(*(undefined4 *)(in_ECX + 0x23c));
  return uVar2;
}



void FUN_00451210(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x23c) == 0) {
    cVar1 = FUN_00450080();
    if (cVar1 == '\0') {
      uVar2 = 0;
      goto LAB_0045124d;
    }
    *(undefined4 *)(in_ECX + 0x250) = 0;
    *(undefined4 *)(in_ECX + 0x254) = 0;
    FUN_00450f10();
  }
  uVar2 = FUN_0046af70(*(undefined4 *)(in_ECX + 0x23c));
LAB_0045124d:
  *(undefined1 *)(param_1 + 4) = uVar2;
  if ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 0x244);
  }
  else {
    *(uint *)(param_1 + 8) = *(uint *)(in_ECX + 0x244) | 0x4000;
  }
  FUN_0046c300(*(undefined4 *)(in_ECX + 0x248),1);
  FUN_0046b6c0(in_ECX);
  return;
}



void FUN_004512a0(char param_1)

{
  int in_ECX;
  
  if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,0);
  }
  *(undefined4 *)(in_ECX + 0x25c) = 0;
  *(undefined4 *)(in_ECX + 0x260) = 0;
  *(undefined4 *)(in_ECX + 0x264) = 0;
  *(undefined4 *)(in_ECX + 0x23c) = 0;
  *(undefined4 *)(in_ECX + 0x240) = 0;
  *(undefined4 *)(in_ECX + 0x244) = 0;
  *(undefined4 *)(in_ECX + 0x248) = 0;
  *(undefined4 *)(in_ECX + 0x24c) = 0;
  if (param_1 != '\0') {
    FUN_004511c0();
  }
  return;
}



undefined4 FUN_00451310(void)

{
  int iVar1;
  DWORD dwMessageId;
  int in_ECX;
  HLOCAL unaff_EDI;
  DWORD dwLanguageId;
  LPSTR lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  
  if ((*(int *)(in_ECX + 0x23c) == DAT_00b05e20) || (*(int *)(in_ECX + 0x23c) == DAT_00b06138)) {
    *(int *)(in_ECX + 0x25c) = *(int *)(in_ECX + 0x25c) + 0x14;
  }
  else {
    *(int *)(in_ECX + 0x25c) = *(int *)(in_ECX + 0x25c) + *(int *)(in_ECX + 0x240) + 0x14;
  }
  if (*(uint *)(in_ECX + 0x25c) < *(uint *)(in_ECX + 600)) {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(*(uint *)(in_ECX + 0x25c),0);
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
    if (iVar1 == -1) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
    }
    *(int *)(in_ECX + 0x25c) = iVar1;
    if (iVar1 != -1) {
      *(undefined4 *)(in_ECX + 0x260) = 0;
      *(undefined4 *)(in_ECX + 0x264) = 0;
      *(undefined4 *)(in_ECX + 0x23c) = 0;
      *(undefined4 *)(in_ECX + 0x240) = 0;
      *(undefined4 *)(in_ECX + 0x244) = 0;
      *(undefined4 *)(in_ECX + 0x248) = 0;
      *(undefined4 *)(in_ECX + 0x24c) = 0;
      FUN_004511c0();
      if (*(int *)(in_ECX + 0x23c) != 0) {
        return 1;
      }
      FUN_004a7a60("Trying to load a bad form in TESFile::NextForm.\r\nFile = %s\r\nOffset = %d",
                   in_ECX + 0x1c,*(undefined4 *)(in_ECX + 0x25c));
      return 0;
    }
    Arguments = (va_list *)0x0;
    nSize = 0;
    lpBuffer = &stack0xfffffff4;
    dwLanguageId = 0x400;
    dwMessageId = GetLastError();
    FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
    FUN_004a7a60("SetFilePointer() in NextForm failed with error:\n%s",unaff_EDI);
    LocalFree(unaff_EDI);
    return 0;
  }
  *(undefined4 *)(in_ECX + 0x23c) = 0;
  *(undefined4 *)(in_ECX + 0x240) = 0;
  *(undefined4 *)(in_ECX + 0x244) = 0;
  *(undefined4 *)(in_ECX + 0x248) = 0;
  *(undefined4 *)(in_ECX + 0x24c) = 0;
  return 0;
}



undefined4 FUN_00451460(uint param_1)

{
  int iVar1;
  DWORD dwMessageId;
  int in_ECX;
  HLOCAL unaff_ESI;
  DWORD dwLanguageId;
  LPSTR lpBuffer;
  DWORD nSize;
  va_list *Arguments;
  
  if (*(int *)(in_ECX + 0x414) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x414));
    *(undefined4 *)(in_ECX + 0x414) = 0;
    *(undefined4 *)(in_ECX + 0x418) = 0;
  }
  *(uint *)(in_ECX + 0x25c) = param_1;
  if (*(uint *)(in_ECX + 600) <= param_1) {
    *(undefined4 *)(in_ECX + 0x23c) = 0;
    *(undefined4 *)(in_ECX + 0x240) = 0;
    *(undefined4 *)(in_ECX + 0x244) = 0;
    *(undefined4 *)(in_ECX + 0x248) = 0;
    *(undefined4 *)(in_ECX + 0x24c) = 0;
    return 0;
  }
  (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(param_1,0);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x30);
  if (iVar1 == -1) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x10) + 0x148);
  }
  *(int *)(in_ECX + 0x25c) = iVar1;
  if (iVar1 != -1) {
    *(undefined4 *)(in_ECX + 0x260) = 0;
    *(undefined4 *)(in_ECX + 0x264) = 0;
    *(undefined4 *)(in_ECX + 0x23c) = 0;
    *(undefined4 *)(in_ECX + 0x240) = 0;
    *(undefined4 *)(in_ECX + 0x244) = 0;
    *(undefined4 *)(in_ECX + 0x248) = 0;
    *(undefined4 *)(in_ECX + 0x24c) = 0;
    FUN_004511c0();
    return 1;
  }
  Arguments = (va_list *)0x0;
  nSize = 0;
  lpBuffer = &stack0xfffffffc;
  dwLanguageId = 0x400;
  dwMessageId = GetLastError();
  FormatMessageA(0x1300,(LPCVOID)0x0,dwMessageId,dwLanguageId,lpBuffer,nSize,Arguments);
  FUN_004a7a60("SetFilePointer() in SetOffset failed with error:\n%s",unaff_ESI);
  LocalFree(unaff_ESI);
  return 0;
}



void FUN_00451580(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x23c) == DAT_00b05e20) {
    *(undefined4 *)(in_ECX + 0x23c) = 0;
    *(int *)(in_ECX + 0x240) = *(int *)(in_ECX + 0x240) + -0x14;
    FUN_00451310();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_004515b0(LPCSTR param_1,LPCSTR param_2,int param_3,char param_4)

{
  LPSTR lpString1;
  HANDLE pvVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *in_ECX;
  _WIN32_FIND_DATAA *p_Var7;
  DWORD *pDVar8;
  int iVar9;
  int *unaff_FS_OFFSET;
  LPCSTR local_398;
  _WIN32_FIND_DATAA local_394;
  _WIN32_FIND_DATAA local_254;
  CHAR local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae0fe;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_398;
  *unaff_FS_OFFSET = (int)&local_c;
  local_398 = param_2;
  if ((param_1 != (LPCSTR)0x0) && (param_2 != (LPCSTR)0x0)) {
    if (param_4 != '\0') {
      param_3 = 1;
    }
    lstrcpyA(local_114,param_1);
    lstrcpyA((LPSTR)(in_ECX + 0x48),param_1);
    lstrcatA(local_114,local_398);
    lpString1 = (LPSTR)(in_ECX + 7);
    lstrcpyA(lpString1,local_398);
    piVar5 = (int *)in_ECX[4];
    if (piVar5 != (int *)0x0) {
LAB_00451881:
      uVar6 = (**(code **)(*piVar5 + 0x1c))();
      in_ECX[0x96] = uVar6;
      FUN_004512a0(param_3 == 0);
      uVar6 = 1;
      goto LAB_0045170a;
    }
    pvVar1 = FindFirstFileA(local_114,&local_394);
    if (pvVar1 == (HANDLE)0xffffffff) {
      lstrcpyA(local_114,(LPCSTR)(in_ECX + 0x48));
      pcVar2 = _strchr(lpString1,0x2e);
      if (pcVar2 == (char *)0x0) {
        lstrcatA(local_114,lpString1);
        lstrcatA(local_114,".tes");
      }
      else {
        *pcVar2 = '\0';
        lstrcatA(local_114,lpString1);
        lstrcatA(local_114,".tes");
        *pcVar2 = '.';
      }
      pvVar1 = FindFirstFileA(local_114,&local_254);
      if (pvVar1 != (HANDLE)0xffffffff) {
        *in_ECX = 0xc;
        FindClose(pvVar1);
        goto LAB_00451708;
      }
LAB_00451702:
      *in_ECX = 2;
    }
    else {
      FindClose(pvVar1);
      uVar3 = 0x140;
      p_Var7 = &local_394;
      pDVar8 = in_ECX + 0xa4;
      do {
        if (*pDVar8 != p_Var7->dwFileAttributes) goto LAB_00451778;
        uVar3 = uVar3 - 4;
        p_Var7 = (_WIN32_FIND_DATAA *)&p_Var7->ftCreationTime;
        pDVar8 = pDVar8 + 1;
      } while (3 < uVar3);
      if (uVar3 == 0) {
LAB_004517d5:
        iVar4 = 0;
      }
      else {
LAB_00451778:
        iVar9 = (uint)(byte)*pDVar8 - (uint)(byte)p_Var7->dwFileAttributes;
        if (iVar9 == 0) {
          if (uVar3 == 1) goto LAB_004517d5;
          iVar9 = (uint)*(byte *)((int)pDVar8 + 1) -
                  (uint)*(byte *)((int)&p_Var7->dwFileAttributes + 1);
          if (iVar9 == 0) {
            if (uVar3 == 2) goto LAB_004517d5;
            iVar9 = (uint)*(byte *)((int)pDVar8 + 2) -
                    (uint)*(byte *)((int)&p_Var7->dwFileAttributes + 2);
            if (iVar9 == 0) {
              if ((uVar3 == 3) ||
                 (iVar9 = (uint)*(byte *)((int)pDVar8 + 3) -
                          (uint)*(byte *)((int)&p_Var7->dwFileAttributes + 3), iVar9 == 0))
              goto LAB_004517d5;
            }
          }
        }
        iVar4 = 1;
        if (iVar9 < 1) {
          iVar4 = -1;
        }
      }
      if (iVar4 != 0) {
        in_ECX[0xf7] = in_ECX[0xf7] | 2;
        p_Var7 = &local_394;
        pDVar8 = in_ECX + 0xa4;
        for (iVar9 = 0x50; iVar9 != 0; iVar9 = iVar9 + -1) {
          *pDVar8 = p_Var7->dwFileAttributes;
          p_Var7 = (_WIN32_FIND_DATAA *)&p_Var7->ftCreationTime;
          pDVar8 = pDVar8 + 1;
        }
      }
      local_398 = (LPCSTR)FUN_00401f00(0x154);
      local_4 = 0;
      if (local_398 == (LPCSTR)0x0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)FUN_00430970(local_114,param_3,in_ECX[0x8a],0);
      }
      local_4 = 0xffffffff;
      in_ECX[4] = piVar5;
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 0x18))(1,0);
        piVar5 = (int *)in_ECX[4];
        if ((char)piVar5[9] != '\0') goto LAB_00451881;
        piVar5 = __errno();
        if (*piVar5 == 2) goto LAB_00451702;
        if (*piVar5 == 0xd) {
          *in_ECX = 9;
        }
      }
    }
  }
LAB_00451708:
  uVar6 = 0;
LAB_0045170a:
  *unaff_FS_OFFSET = local_c;
  return uVar6;
}



void FUN_004518b0(char param_1)

{
  char cVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x414) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x414));
    *(undefined4 *)(in_ECX + 0x414) = 0;
    *(undefined4 *)(in_ECX + 0x418) = 0;
  }
  cVar1 = FUN_00451310();
  while ((((cVar1 != '\0' && (param_1 != '\0')) && (*(int *)(in_ECX + 0x23c) != DAT_00b05e20)) &&
         ((*(int *)(in_ECX + 0x23c) != DAT_00b06138 && ((*(uint *)(in_ECX + 0x244) & 0x1000) != 0)))
         )) {
    cVar1 = FUN_00451310();
  }
  return;
}



undefined1 FUN_00451920(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  undefined1 local_5;
  
  local_5 = 0;
  if ((((param_1 != (int *)0x0) && (*(char *)(in_ECX + 0x28c) != '\0')) &&
      (*(int *)(in_ECX + 0x10) != 0)) && (*(char *)(*(int *)(in_ECX + 0x10) + 0x24) != '\0')) {
    cVar5 = (**(code **)(*param_1 + 0x68))();
    if (cVar5 != '\0') {
      return 1;
    }
    FUN_004512a0(1);
    piVar1 = (int *)(in_ECX + 0x23c);
    if (*(int *)(in_ECX + 0x23c) == DAT_00b05e14) {
      do {
        FUN_004518b0(1);
      } while (*piVar1 == DAT_00b05e14);
    }
    iVar6 = (**(code **)(*param_1 + 0x70))();
    iVar2 = param_1[3];
    iVar6 = (&DAT_00b05e08)[iVar6 * 3];
    iVar3 = *piVar1;
    bVar4 = true;
    while ((iVar3 != 0 && (bVar4))) {
      if (iVar3 == DAT_00b05e20) {
        cVar5 = (**(code **)(*param_1 + 0xbc))(piVar1,1,0);
        if (cVar5 == '\0') {
          FUN_00451580();
        }
        else {
LAB_00451a17:
          FUN_004518b0(1);
        }
      }
      else {
        if ((iVar3 != iVar6) || (*(int *)(in_ECX + 0x248) != iVar2)) goto LAB_00451a17;
        bVar4 = false;
        local_5 = 1;
      }
      iVar3 = *piVar1;
    }
  }
  return local_5;
}



void FUN_00451a40(undefined4 param_1,undefined4 param_2)

{
  int in_ECX;
  
  FUN_004515b0(in_ECX + 0x120,in_ECX + 0x1c,param_1,param_2);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00451a60(void)

{
  byte bVar1;
  uint uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  
  FUN_0044fbc0();
  if (*(int **)(in_ECX + 0x10) == (int *)0x0) {
    cVar3 = FUN_004515b0(in_ECX + 0x120,in_ECX + 0x1c,0,0);
    if (cVar3 == '\0') {
      return 2;
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,0);
    *(undefined4 *)(in_ECX + 0x25c) = 0;
    *(undefined4 *)(in_ECX + 0x260) = 0;
    *(undefined4 *)(in_ECX + 0x264) = 0;
    *(undefined4 *)(in_ECX + 0x23c) = 0;
    *(undefined4 *)(in_ECX + 0x240) = 0;
    *(undefined4 *)(in_ECX + 0x244) = 0;
    *(undefined4 *)(in_ECX + 0x248) = 0;
    *(undefined4 *)(in_ECX + 0x24c) = 0;
    FUN_004511c0();
  }
  uVar5 = (**(code **)(**(int **)(in_ECX + 0x10) + 0x1c))();
  *(undefined4 *)(in_ECX + 600) = uVar5;
  if (*(int *)(in_ECX + 0x23c) != DAT_00b05e14) {
    return 0xb;
  }
  do {
    iVar6 = *(int *)(in_ECX + 0x250);
    if (iVar6 < 0x4d414e54) {
      if (iVar6 == 0x4d414e53) {
        FUN_00450c20(&stack0xfffffff0,0x200);
        FUN_004028d0(&stack0xfffffff0,0);
      }
      else if (iVar6 == 0x41544144) {
        uVar5 = FUN_00401f00(8);
        FUN_00450c20(uVar5,8);
        FUN_0067b1e0(uVar5);
      }
      else if (iVar6 == 0x4d414e43) {
        FUN_00450c20(&stack0xfffffff0,0x200);
        FUN_004028d0(&stack0xfffffff0,0);
      }
    }
    else if (iVar6 == 0x52444548) {
      FUN_00450c20(in_ECX + 0x3d0,0xc);
      if (*(uint *)(in_ECX + 0x3d8) < 0x800) {
        *(undefined4 *)(in_ECX + 0x3d8) = 0x800;
      }
      *(uint *)(in_ECX + 0x3d8) =
           (uint)*(byte *)(in_ECX + 0x400) << 0x18 | *(uint *)(in_ECX + 0x3d8) & 0xffffff;
    }
    else if (iVar6 == 0x5453414d) {
      uVar5 = FUN_00401f00(*(undefined4 *)(in_ECX + 0x254));
      FUN_00450c20(uVar5,0);
      FUN_0067b1e0(uVar5);
      *(int *)(in_ECX + 0x3f0) = *(int *)(in_ECX + 0x3f0) + 1;
    }
    cVar3 = FUN_0044fea0();
  } while (cVar3 != '\0');
  uVar2 = *(uint *)(in_ECX + 0x244);
  if ((uVar2 & 1) == 0) {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) & 0xfffffffe;
  }
  else {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | 1;
  }
  if ((uVar2 & 0x10) == 0) {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) & 0xffffffef;
  }
  else {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | 0x10;
  }
  if ((char)uVar2 < '\0') {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | 0x80;
  }
  else {
    *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) & 0xffffff7f;
  }
  bVar1 = *(byte *)(in_ECX + 0x3df);
  *(undefined1 *)(in_ECX + 0x3df) = 0;
  *(uint *)(in_ECX + 0x3dc) = *(uint *)(in_ECX + 0x3dc) | (uint)bVar1 << 0x18;
  do {
    if (*(int *)(in_ECX + 0x23c) == 0) {
      cVar3 = FUN_00450080();
      if (cVar3 == '\0') {
LAB_00451d14:
        cVar3 = FUN_004511c0();
        if ((cVar3 == '\x02') || (cVar3 == '\0')) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
        *(undefined1 *)(in_ECX + 0x28c) = uVar4;
        if (*(int **)(in_ECX + 0x10) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0x10) + 0xc))(0,0);
        }
        *(undefined4 *)(in_ECX + 0x25c) = 0;
        *(undefined4 *)(in_ECX + 0x260) = 0;
        *(undefined4 *)(in_ECX + 0x264) = 0;
        *(undefined4 *)(in_ECX + 0x23c) = 0;
        *(undefined4 *)(in_ECX + 0x240) = 0;
        *(undefined4 *)(in_ECX + 0x244) = 0;
        *(undefined4 *)(in_ECX + 0x248) = 0;
        *(undefined4 *)(in_ECX + 0x24c) = 0;
        FUN_004511c0();
        return 0;
      }
      *(undefined4 *)(in_ECX + 0x250) = 0;
      *(undefined4 *)(in_ECX + 0x254) = 0;
      FUN_00450f10();
    }
    iVar6 = FUN_0046af70(*(undefined4 *)(in_ECX + 0x23c));
    if (iVar6 != 1) goto LAB_00451d14;
    FUN_004518b0(1);
  } while( true );
}



void FUN_00451da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae14c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[0xa1] = 0;
  in_ECX[0xa2] = 0;
  in_ECX[0xf8] = 0;
  in_ECX[0xf9] = 0;
  in_ECX[0xfa] = 0;
  in_ECX[0xfb] = 0;
  in_ECX[0x101] = 0;
  *(undefined2 *)(in_ECX + 0x102) = 0;
  *(undefined2 *)((int)in_ECX + 0x40a) = 0;
  in_ECX[0x103] = 0;
  *(undefined2 *)(in_ECX + 0x104) = 0;
  *(undefined2 *)((int)in_ECX + 0x412) = 0;
  in_ECX[0x105] = 0;
  in_ECX[0x106] = 0;
  in_ECX[0x8b] = 0;
  in_ECX[0x8c] = 0;
  in_ECX[0x8d] = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[0x96] = 0;
  in_ECX[0x97] = 0;
  in_ECX[0x98] = 0;
  in_ECX[0x99] = 0;
  in_ECX[0xf7] = 0;
  in_ECX[0xfd] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[0xfc] = 0;
  *(undefined1 *)(in_ECX + 0x100) = 0xff;
  in_ECX[0x8e] = 0;
  in_ECX[0x9f] = 0;
  in_ECX[0xa0] = 0;
  in_ECX[0x89] = 0;
  in_ECX[0x8a] = DAT_00b055cc;
  in_ECX[0x8f] = 0;
  in_ECX[0x90] = 0;
  in_ECX[0x91] = 0;
  in_ECX[0x92] = 0;
  local_4 = 1;
  in_ECX[0x93] = 0;
  _memset(in_ECX + 0xa4,0,0x140);
  in_ECX[0xfe] = 0;
  in_ECX[0xff] = 0;
  in_ECX[0x95] = 0;
  in_ECX[0x94] = 0;
  in_ECX[0xf4] = 0;
  in_ECX[0xf5] = 0;
  in_ECX[0xf6] = 0x800;
  cVar1 = FUN_004515b0(param_1,param_2,param_3,0);
  if (cVar1 != '\0') {
    if ((in_ECX[0xab] != 0) || (in_ECX[0xac] != 0)) {
      iVar3 = FUN_00451a60(uVar2);
      if (iVar3 != 0) {
        FUN_004a7a60("File \'%s\' is not a valid TES file.",param_2);
      }
    }
    cVar1 = FUN_004507d0();
    if (cVar1 == '\0') {
      FUN_004a7a60("Could not close file \'%s\'.",param_2);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00451f80(undefined4 param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  local_10 = 0;
  if ((*(int *)(in_ECX + 8) == 0) ||
     (FUN_0055e000(param_1,&local_10), iVar6 = local_10, local_10 == 0)) {
    local_10 = FUN_00401f00(0x41c,uVar5);
    local_4 = 0;
    if (local_10 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_00451da0(in_ECX + 0x120,in_ECX + 0x1c,0);
    }
    local_4 = 0xffffffff;
    if ((*(byte *)(in_ECX + 0x3dc) & 1) == 0) {
      *(uint *)(iVar6 + 0x3dc) = *(uint *)(iVar6 + 0x3dc) & 0xfffffffe;
    }
    else {
      *(uint *)(iVar6 + 0x3dc) = *(uint *)(iVar6 + 0x3dc) | 1;
    }
    bVar1 = *(byte *)(in_ECX + 0x400);
    *(uint *)(iVar6 + 0x3d8) = (uint)bVar1 << 0x18 | *(uint *)(iVar6 + 0x3d8) & 0xffffff;
    *(byte *)(iVar6 + 0x400) = bVar1;
    FUN_0044fc70(DAT_00b33a98 + 0x8c8,0);
    iVar4 = *(int *)(in_ECX + 4);
    iVar3 = in_ECX;
    while (iVar2 = iVar4, iVar2 != 0) {
      iVar3 = iVar2;
      iVar4 = *(int *)(iVar2 + 4);
    }
    *(int *)(iVar6 + 4) = iVar3;
    FUN_004515b0(iVar6 + 0x120,iVar6 + 0x1c,0,0);
    if (*(int *)(in_ECX + 8) == 0) {
      local_10 = FUN_00401f00(0x10);
      local_4 = 1;
      if (local_10 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_00450710(0x25);
      }
      local_4 = 0xffffffff;
      *(undefined4 *)(in_ECX + 8) = uVar7;
    }
    FUN_00452570(param_1,iVar6);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar6;
}



int FUN_004520f0(void)

{
  int *piVar1;
  DWORD DVar2;
  DWORD DVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  
  do {
    do {
      iVar4 = *(int *)(in_ECX + 4);
      iVar5 = iVar4;
      if (iVar4 == 0) {
        DVar3 = *(DWORD *)(DAT_00b33398 + 0x10);
        DVar2 = GetCurrentThreadId();
        if (DVar2 != DVar3) {
          DVar3 = GetCurrentThreadId();
          iVar4 = FUN_00451f80(DVar3);
          return iVar4;
        }
        return in_ECX;
      }
      do {
        piVar1 = (int *)(iVar5 + 4);
        iVar5 = *piVar1;
      } while (*piVar1 != 0);
      in_ECX = iVar4;
    } while (iVar4 == 0);
    do {
      iVar5 = *(int *)(iVar4 + 4);
      in_ECX = iVar4;
      if (iVar5 == 0) break;
      iVar4 = iVar5;
      in_ECX = iVar5;
    } while (iVar5 != 0);
  } while( true );
}



void FUN_00452170(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_1;
  return;
}



uint FUN_00452180(uint param_1)

{
  byte bVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x4c) == 0) || (bVar1 = (byte)(param_1 >> 0x18), bVar1 == 0xff)) {
    return param_1;
  }
  if ((bVar1 < *(byte *)(in_ECX + 0x48)) &&
     (bVar1 = *(byte *)((param_1 >> 0x18) + *(int *)(in_ECX + 0x4c)), bVar1 != 0xff)) {
    return (uint)bVar1 * 0x1000000 + (param_1 & 0xffffff);
  }
  return 0;
}



uint FUN_004521d0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  char cVar2;
  uint uVar3;
  
  if ((*(int *)(in_ECX + 0x4c) == 0) || (cVar2 = (char)(param_1 >> 0x18), cVar2 == -1)) {
    return param_1;
  }
  uVar3 = 0xff;
  uVar1 = 0;
  if (*(byte *)(in_ECX + 0x48) != 0) {
    do {
      if (*(char *)(*(int *)(in_ECX + 0x4c) + uVar1) == cVar2) {
        uVar3 = uVar1 & 0xff;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)(uint)*(byte *)(in_ECX + 0x48));
    if ((char)uVar3 != -1) {
      return uVar3 * 0x1000000 + (param_1 & 0xffffff);
    }
  }
  return 0;
}



void FUN_00452230(undefined4 param_1)

{
  int in_ECX;
  
  FUN_00401e40(param_1);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}



byte FUN_00452250(undefined4 param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (iVar1 == 0) {
    iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_2 & 0x4000000) == 0) {
      return -((param_2 & 0x2000000) != 0) & 6;
    }
  }
  else {
    if ((param_2 & 2) != 0) {
      return 0x24;
    }
    if ((param_2 & 0xc) != 0) {
      return (-((param_2 & 0x80000000) != 0) & 0x10U) + 0x1c;
    }
    if ((param_2 & 0x800000) == 0) {
      return 0;
    }
  }
  return 4;
}



int FUN_004522f0(undefined2 *param_1)

{
  if (param_1 != (undefined2 *)0x0) {
    param_1 = (undefined2 *)CONCAT22(param_1._2_2_,*param_1);
    return (int)param_1 + 2;
  }
  return 0;
}



void FUN_00452310(ushort param_1)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)thunk_FUN_00401aa0(param_1 + 2,1);
  *puVar1 = param_1;
  return;
}



undefined4 FUN_00452330(void)

{
  char cVar1;
  int iVar2;
  
  iVar2 = FUN_005e0dc0();
  if (iVar2 != 2) {
    iVar2 = FUN_005e0dc0();
    if (iVar2 != 1) {
      cVar1 = FUN_0065d140();
      if (cVar1 == '\0') {
        iVar2 = FUN_00578fe0();
        if ((((iVar2 == 0x40f) || (iVar2 == 0)) || (iVar2 == 0x3f5)) || (iVar2 == 3)) {
          iVar2 = FUN_00579060();
          if (((iVar2 == 0x40f) || (iVar2 == 0)) || ((iVar2 == 0x3f5 || (iVar2 == 3)))) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



void FUN_004523a0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  DWORD DVar2;
  
  DVar2 = GetTickCount();
  if (DAT_00b33b08 + 3000U < DVar2) {
    cVar1 = FUN_0057bac0();
    if (cVar1 == '\0') {
      FUN_00440af0(1,0,0);
      return;
    }
    FUN_0057b950(param_1,param_2);
  }
  return;
}



uint FUN_00452400(char *param_1)

{
  char *pcVar1;
  char cVar2;
  
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1 + 1;
    do {
      cVar2 = *param_1;
      param_1 = param_1 + 1;
    } while (cVar2 != '\0');
    return (uint)(param_1 + (1 - (int)pcVar1)) & 0xffff;
  }
  return 1;
}



undefined4 FUN_00452430(float *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00983ffd((double)*param_1);
  if (iVar1 != 0) {
    iVar1 = FUN_00983ffd((double)param_1[1]);
    if (iVar1 != 0) {
      iVar1 = FUN_00983ffd((double)param_1[2]);
      if (iVar1 != 0) {
        iVar1 = __isnan((double)*param_1);
        if (iVar1 == 0) {
          iVar1 = __isnan((double)param_1[1]);
          if (iVar1 == 0) {
            iVar1 = __isnan((double)param_1[2]);
            if (iVar1 == 0) {
              return 0;
            }
          }
        }
      }
    }
  }
  return 1;
}



undefined4 FUN_004524c0(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = (**(code **)(*in_ECX + 4))(param_1);
  puVar1 = *(undefined4 **)(in_ECX[2] + iVar4 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    cVar3 = (**(code **)(*in_ECX + 8))(param_1,puVar1[1]);
    if (cVar3 != '\0') {
      *(undefined4 *)(in_ECX[2] + iVar4 * 4) = *puVar1;
      (**(code **)(*in_ECX + 0x10))(puVar1);
      (**(code **)(*in_ECX + 0x18))(puVar1);
      in_ECX[3] = in_ECX[3] + -1;
      return 1;
    }
    for (puVar2 = (undefined4 *)*puVar1; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2
        ) {
      cVar3 = (**(code **)(*in_ECX + 8))(param_1,puVar2[1]);
      if (cVar3 != '\0') {
        *puVar1 = *puVar2;
        (**(code **)(*in_ECX + 0x10))(puVar2);
        (**(code **)(*in_ECX + 0x18))(puVar2);
        in_ECX[3] = in_ECX[3] + -1;
        return 1;
      }
      puVar1 = puVar2;
    }
  }
  return 0;
}



void FUN_00452570(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,puVar3[1]);
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(*in_ECX + 0x10))(puVar3);
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr);
  return;
}



void FUN_00452600(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_2 = piVar3[1];
  *param_3 = piVar3[2];
  if (*piVar3 != 0) {
    *param_1 = *piVar3;
    return;
  }
  iVar1 = (**(code **)(*in_ECX + 4))(piVar3[1]);
  uVar2 = iVar1 + 1;
  if (uVar2 < (uint)in_ECX[1]) {
    piVar3 = (int *)(in_ECX[2] + uVar2 * 4);
    do {
      if (*piVar3 != 0) {
        *param_1 = *piVar3;
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  *param_1 = 0;
  return;
}



void FUN_00452670(uint param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  in_ECX[5] = param_2;
  *in_ECX = &PTR__scalar_deleting_destructor__00a3903c;
  in_ECX[2] = param_1;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  if (param_1 != 0) {
    uVar1 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 4));
    in_ECX[1] = uVar1;
    return;
  }
  in_ECX[1] = 0;
  return;
}



void FUN_004526e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  iVar1 = in_ECX[1];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[1] + 4);
    FUN_00401f20(in_ECX[1]);
    in_ECX[1] = iVar1;
  }
  *in_ECX = 0;
  return;
}



void FUN_00452710(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 unaff_retaddr;
  
  iVar2 = (**(code **)(*in_ECX + 4))(param_1);
  puVar3 = *(undefined4 **)(in_ECX[2] + iVar2 * 4);
  while( true ) {
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)(*in_ECX + 0x14))();
      (**(code **)(*in_ECX + 0xc))(puVar3,param_1,param_1);
      *puVar3 = *(undefined4 *)(in_ECX[2] + iVar2 * 4);
      *(undefined4 **)(in_ECX[2] + iVar2 * 4) = puVar3;
      in_ECX[3] = in_ECX[3] + 1;
      return;
    }
    cVar1 = (**(code **)(*in_ECX + 8))(param_1,*(undefined1 *)(puVar3 + 1));
    if (cVar1 != '\0') break;
    puVar3 = (undefined4 *)*puVar3;
  }
  (**(code **)(*in_ECX + 0x10))(puVar3);
  (**(code **)(*in_ECX + 0xc))(puVar3,param_1,unaff_retaddr);
  return;
}



uint FUN_004527a0(undefined4 *param_1)

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
    uVar3 = (**(code **)(*in_ECX + 8))(param_1,*(undefined1 *)(puVar1 + 1));
    if ((char)uVar3 != '\0') break;
    puVar1 = (undefined4 *)*puVar1;
  }
  uVar2 = puVar1[2];
  *param_1 = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}



void FUN_00452800(int *param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  int *piVar3;
  
  piVar3 = (int *)*param_1;
  *param_2 = (char)piVar3[1];
  *param_3 = piVar3[2];
  if (*piVar3 != 0) {
    *param_1 = *piVar3;
    return;
  }
  iVar1 = (**(code **)(*in_ECX + 4))((char)piVar3[1]);
  uVar2 = iVar1 + 1;
  if (uVar2 < (uint)in_ECX[1]) {
    piVar3 = (int *)(in_ECX[2] + uVar2 * 4);
    do {
      if (*piVar3 != 0) {
        *param_1 = *piVar3;
        return;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  *param_1 = 0;
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a3903c;
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
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a39044;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00452910(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  uint uVar3;
  
  if (param_1 != *(uint *)(in_ECX + 8)) {
    uVar3 = param_1;
    if (param_1 < *(uint *)(in_ECX + 0xc)) {
      do {
        if (*(int *)(*(int *)(in_ECX + 4) + uVar3 * 4) != 0) {
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = 0;
          *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) + -1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(in_ECX + 0xc));
      *(uint *)(in_ECX + 0xc) = param_1;
    }
    iVar1 = *(int *)(in_ECX + 4);
    *(uint *)(in_ECX + 8) = param_1;
    if (param_1 == 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    else {
      uVar2 = FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
      *(undefined4 *)(in_ECX + 4) = uVar2;
      uVar3 = 0;
      if (*(int *)(in_ECX + 0xc) != 0) {
        do {
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = *(undefined4 *)(iVar1 + uVar3 * 4);
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 0xc));
      }
      uVar3 = *(uint *)(in_ECX + 0xc);
      if (uVar3 < *(uint *)(in_ECX + 8)) {
        do {
          *(undefined4 *)(*(int *)(in_ECX + 4) + uVar3 * 4) = 0;
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(in_ECX + 8));
        FUN_00401f20(iVar1);
        return;
      }
    }
    FUN_00401f20(iVar1);
  }
  return;
}



void FUN_004529e0(float *param_1,float *param_2)

{
  *param_1 = *param_2 * 0.14287673;
  param_1[1] = param_2[1] * 0.14287673;
  param_1[2] = param_2[2] * 0.14287673;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00452a10(float *param_1)

{
  float local_30;
  float local_2c;
  float local_28;
  uint local_14;
  
  local_14 = DAT_00b30aac ^ (uint)&local_30;
  local_30 = *param_1 * 0.14287673;
  local_2c = param_1[1] * 0.14287673;
  local_28 = param_1[2] * 0.14287673;
  FUN_00891560(&local_30);
  return;
}



undefined4 FUN_00452a60(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 8);
}



void FUN_00452a70(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 2;
    return;
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffd;
  return;
}



void FUN_00452ab0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38fbc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00452ad0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38fdc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00452af0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38ffc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00452b10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3901c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



/* Library Function - Single Match
    public: virtual void * __thiscall _AFX_PROPPAGEFONTINFO::`scalar deleting destructor'(unsigned
   int)
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void * __thiscall
_AFX_PROPPAGEFONTINFO::_scalar_deleting_destructor_(_AFX_PROPPAGEFONTINFO *this,uint param_1)

{
  *(undefined ***)this = &PTR__scalar_deleting_destructor__00a38fb4;
  FUN_00401f20(*(undefined4 *)(this + 4));
  if ((param_1 & 1) != 0) {
    FUN_00401f20(this);
  }
  return this;
}



void FUN_00452b60(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38fbc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00452b90(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38fdc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00452bc0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a38ffc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00452bf0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3901c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



uint * FUN_00452c20(uint *param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  
  uVar1 = param_1[3];
  cVar2 = FUN_0055e000(uVar1,&param_1);
  if (cVar2 == '\0') {
    puVar3 = (uint *)FUN_00401f00(8);
    if (puVar3 == (uint *)0x0) {
      FUN_00452570(uVar1,0);
      param_1 = (uint *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar3[1] = 0;
      FUN_00452570(uVar1,puVar3);
      param_1 = puVar3;
    }
  }
  if (param_1[1] == 0) {
    *param_1 = *param_1 | param_2;
  }
  return param_1;
}



undefined4 * FUN_00452c90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = param_1;
  cVar2 = FUN_0055e000(param_1,&param_1);
  if (cVar2 == '\0') {
    puVar3 = (undefined4 *)FUN_00401f00(8);
    puVar4 = (undefined4 *)0x0;
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar4 = puVar3;
    }
    FUN_00452570(puVar1,puVar4);
    *puVar4 = param_2;
    return puVar4;
  }
  *param_1 = param_2;
  return param_1;
}



void FUN_00452cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00452c90(param_1,param_2);
  *(undefined4 *)(iVar1 + 4) = param_3;
  return;
}



undefined4 FUN_00452d10(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4;
}



undefined4 FUN_00452d30(int param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&local_4);
  return local_4;
}



undefined4 FUN_00452d60(int param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *local_4;
  
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) != 0) {
    return 0;
  }
  local_4 = (uint *)0x0;
  FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&local_4);
  puVar2 = local_4;
  if (local_4 != (uint *)0x0) {
    if (local_4[1] == 0) {
      *local_4 = *local_4 & ~param_2;
    }
    if (*local_4 == 0) {
      FUN_004524c0(*(undefined4 *)(param_1 + 0xc));
      uVar1 = puVar2[1];
      if (uVar1 != 0) {
        FUN_00401e40(uVar1);
      }
      FUN_00401f20(puVar2);
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_00452df0(undefined4 param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int local_4;
  
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) != 0) {
    return 0;
  }
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  iVar2 = local_4;
  if (local_4 != 0) {
    if ((*(int *)(local_4 + 4) == 0) || (param_2 != '\0')) {
      FUN_004524c0(param_1);
      iVar1 = *(int *)(iVar2 + 4);
      if (iVar1 != 0) {
        FUN_00401e40(iVar1);
      }
      FUN_00401f20(iVar2);
    }
    return 1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452e70(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = param_1;
  cVar2 = FUN_0055e000(param_1,&param_1);
  piVar3 = param_1;
  if (cVar2 == '\0') {
    piVar3 = (int *)FUN_00401f00(8);
    if (piVar3 == (int *)0x0) {
      FUN_00452570(piVar4,0);
      piVar3 = (int *)0x0;
    }
    else {
      *piVar3 = 0;
      piVar3[1] = 0;
      FUN_00452570(piVar4,piVar3);
    }
  }
  iVar1 = param_2;
  if (param_2 != 0) {
    if (*piVar3 != 0) {
      piVar4 = (int *)FUN_00401f00(8);
      if (piVar4 != (int *)0x0) {
        *piVar4 = *piVar3;
        piVar4[1] = 0;
        piVar4[1] = piVar3[1];
        *piVar3 = iVar1;
        piVar3[1] = (int)piVar4;
        return;
      }
      _DAT_00000004 = piVar3[1];
      piVar3[1] = 0;
    }
    *piVar3 = iVar1;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452f10(int *param_1,undefined4 param_2,float param_3,float param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = param_1;
  cVar1 = FUN_0055e000(param_1,&param_1);
  piVar2 = param_1;
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00401f00(8);
    if (piVar2 == (int *)0x0) {
      FUN_00452570(piVar4,0);
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = 0;
      piVar2[1] = 0;
      FUN_00452570(piVar4,piVar2);
    }
  }
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  *puVar3 = param_2;
  puVar3[1] = (int)ROUND(param_3) >> 0xc;
  param_1 = (int *)(int)ROUND(param_4);
  puVar3[2] = (int)param_1 >> 0xc;
  if (*piVar2 != 0) {
    piVar4 = (int *)FUN_00401f00(8);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar2;
      piVar4[1] = 0;
      piVar4[1] = piVar2[1];
      *piVar2 = (int)puVar3;
      piVar2[1] = (int)piVar4;
      return;
    }
    _DAT_00000004 = piVar2[1];
    piVar2[1] = 0;
  }
  *piVar2 = (int)puVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00452fe0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  piVar4 = param_1;
  cVar1 = FUN_0055e000(param_1,&param_1);
  piVar2 = param_1;
  if (cVar1 == '\0') {
    piVar2 = (int *)FUN_00401f00(8);
    if (piVar2 == (int *)0x0) {
      FUN_00452570(piVar4,0);
      piVar2 = (int *)0x0;
    }
    else {
      *piVar2 = 0;
      piVar2[1] = 0;
      FUN_00452570(piVar4,piVar2);
    }
  }
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  if (*piVar2 != 0) {
    piVar4 = (int *)FUN_00401f00(8);
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar2;
      piVar4[1] = 0;
      piVar4[1] = piVar2[1];
      *piVar2 = (int)puVar3;
      piVar2[1] = (int)piVar4;
      return;
    }
    _DAT_00000004 = piVar2[1];
    piVar2[1] = 0;
  }
  *piVar2 = (int)puVar3;
  return;
}



void FUN_004530a0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  undefined1 local_9;
  int local_8;
  int *local_4;
  
  uVar1 = *(uint *)(*in_ECX + 4);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar5 = *(int **)(*in_ECX + 8);
    piVar4 = piVar5;
    do {
      if (*piVar4 != 0) {
        local_8 = piVar5[uVar3];
        goto joined_r0x004530db;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar1);
  }
  local_8 = 0;
joined_r0x004530db:
  while (local_8 != 0) {
    FUN_00452800(&local_8,&local_9,&local_4);
    piVar4 = local_4;
    piVar5 = local_4;
    if (local_4 != (int *)0x0) {
      do {
        iVar2 = *piVar5;
        piVar5 = (int *)piVar5[1];
        if (iVar2 != 0) {
          FUN_00401f20(iVar2);
        }
      } while (piVar5 != (int *)0x0);
      iVar2 = piVar4[1];
      while (iVar2 != 0) {
        iVar2 = *(int *)(piVar4[1] + 4);
        FUN_00401f20(piVar4[1]);
        piVar4[1] = iVar2;
      }
      *piVar4 = 0;
      FUN_00401f20(piVar4);
    }
  }
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(1);
  }
  piVar5 = (int *)in_ECX[1];
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        FUN_00401e40(*(undefined4 *)(iVar2 + 4));
        FUN_00401f20(iVar2);
      }
      piVar5 = (int *)piVar5[1];
    } while (piVar5 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(in_ECX[1]);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004531b0(undefined4 param_1,char *param_2)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  int in_ECX;
  
  puVar3 = (undefined4 *)FUN_00401f00(8);
  *puVar3 = param_1;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar4 = (char *)thunk_FUN_00401aa0(pcVar4 + (1 - (int)(param_2 + 1)),1);
  puVar3[1] = pcVar4;
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    param_2 = param_2 + 1;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  piVar2 = *(int **)(in_ECX + 4);
  if (*piVar2 != 0) {
    piVar5 = (int *)FUN_00401f00(8);
    if (piVar5 != (int *)0x0) {
      *piVar5 = *piVar2;
      piVar5[1] = 0;
      piVar5[1] = piVar2[1];
      *piVar2 = (int)puVar3;
      piVar2[1] = (int)piVar5;
      return;
    }
    _DAT_00000004 = piVar2[1];
    piVar2[1] = 0;
  }
  *piVar2 = (int)puVar3;
  return;
}



void FUN_00453250(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *in_ECX;
  uint uVar4;
  
  if ((undefined4 *)*in_ECX != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*in_ECX)(1);
  }
  if ((undefined4 *)in_ECX[2] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[2])(1);
  }
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1);
  }
  if ((undefined4 *)in_ECX[4] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[4])(1);
  }
  if (in_ECX[0x13] != 0) {
    FUN_00401f20(in_ECX[0x13]);
  }
  if ((undefined4 *)in_ECX[0x15] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x15])(1);
  }
  if ((undefined4 *)in_ECX[0x16] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x16])(1);
  }
  if ((undefined4 *)in_ECX[0x17] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x17])(1);
  }
  if ((undefined4 *)in_ECX[0x18] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x18])(1);
  }
  iVar1 = in_ECX[0x1d];
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 4) + uVar4 * 4) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar1 + 0xc));
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if ((undefined4 *)in_ECX[0x1d] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x1d])(1);
    }
  }
  iVar1 = in_ECX[0x1e];
  if (iVar1 != 0) {
    uVar4 = 0;
    if (*(int *)(iVar1 + 0xc) != 0) {
      do {
        *(undefined4 *)(*(int *)(iVar1 + 4) + uVar4 * 4) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(iVar1 + 0xc));
    }
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    if ((undefined4 *)in_ECX[0x1e] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x1e])(1);
    }
  }
  if (in_ECX[0x70] != 0) {
    FUN_00401e40(in_ECX[0x70]);
  }
  if (in_ECX[0x1b] != 0) {
    while ((piVar2 = (int *)in_ECX[0x1b], piVar2[1] != 0 || (*piVar2 != 0))) {
      puVar3 = (undefined4 *)*piVar2;
      FUN_0065c620(puVar3);
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
    }
    FUN_00401f20(piVar2);
  }
  iVar1 = in_ECX[9];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[9] + 4);
    FUN_00401f20(in_ECX[9]);
    in_ECX[9] = iVar1;
  }
  in_ECX[8] = 0;
  iVar1 = in_ECX[0xb];
  while (iVar1 != 0) {
    iVar1 = *(int *)(in_ECX[0xb] + 4);
    FUN_00401f20(in_ECX[0xb]);
    in_ECX[0xb] = iVar1;
  }
  in_ECX[10] = 0;
  return;
}



void FUN_004533d0(int param_1)

{
  if ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0) {
    FUN_00452d60();
    return;
  }
  return;
}



undefined4 FUN_004533f0(int param_1,char param_2)

{
  int in_ECX;
  
  if ((param_2 != '\0') && (*(int *)(in_ECX + 4) != 0)) {
    _param_2 = (undefined4 *)0x0;
    FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&param_2);
    if (_param_2 != (undefined4 *)0x0) goto LAB_00453424;
  }
  _param_2 = (undefined4 *)0x0;
  FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&param_2);
  if (_param_2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00453424:
  return *_param_2;
}



bool FUN_00453450(undefined4 param_1)

{
  int local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4 != 0;
}



void FUN_00453480(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_0045f2e0(param_1,param_2,3);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = param_1;
    }
    DeleteFileA((LPCSTR)(puVar1 + 0xf));
    if (puVar1 != (undefined4 *)0x0) {
      if (*(int *)(in_ECX + 0x6c) != 0) {
        FUN_0065c620(puVar1);
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}



void FUN_004534d0(void *param_1,size_t param_2)

{
  int in_ECX;
  
  _memcpy(param_1,*(void **)(in_ECX + 0x14),param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return;
}



int FUN_00453500(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = thunk_FUN_00401aa0(param_1,1);
  *(int *)(in_ECX + 0x14) = iVar1;
  if (iVar1 == 0) {
    FUN_00404ec0("Could not create save buffer, out of memory.");
    iVar1 = *(int *)(in_ECX + 0x14);
  }
  return iVar1;
}



uint FUN_00453530(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00446b80(*(undefined4 *)(param_1 + 0xc));
  if (cVar1 != '\0') {
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    if (iVar2 != 0) {
      param_2 = param_2 & 0xfffffffb | 2;
    }
    iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
    if (iVar2 != 0) {
      param_2 = param_2 | 6;
    }
    return param_2;
  }
  return param_2;
}



uint FUN_004535a0(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int *piVar10;
  float *pfVar11;
  uint uVar12;
  bool bVar13;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [12];
  
  uVar4 = FUN_00453530(param_1,param_2);
  piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  iVar6 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  if (iVar6 != 0) {
    if (((uVar4 & 0x10000000) != 0) && (iVar6 = FUN_004cced0(), iVar6 == 0)) {
      uVar4 = uVar4 & 0xefffffff;
    }
    if (((uVar4 & 0x1000000) != 0) && (iVar6 = FUN_004af170(), iVar6 == 0)) {
      uVar4 = uVar4 & 0xfeffffff;
    }
    cVar3 = FUN_004c97f0();
    if (cVar3 != '\0') {
      return uVar4;
    }
    iVar6 = FUN_004c9a80();
    iVar7 = FUN_004c9aa0();
    if ((iVar6 + 0x80U < 0x100) && (iVar7 + 0x80U < 0x100)) {
      return uVar4 & 0xf9ffffff | 0x4000000;
    }
    return uVar4 & 0xf9ffffff | 0x2000000;
  }
  if (piVar5 == (int *)0x0) {
    return uVar4;
  }
  uVar12 = uVar4 & 0xfffff7ff;
  if (((uVar4 & 0x8000000) != 0) &&
     ((piVar5 == (int *)0xffffffbc || (iVar6 = FUN_0041e6f0(), iVar6 == 0)))) {
    uVar12 = uVar4 & 0xf7fff7ff;
  }
  piVar8 = (int *)FUN_009832e6(piVar5,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar8 != (int *)0x0) {
    piVar10 = (int *)piVar8[0x16];
    if ((uVar12 & 0x80000) == 0) {
      if ((piVar10 != (int *)0x0) && (iVar6 = (**(code **)(*piVar10 + 0x174))(), iVar6 != 0)) {
        uVar12 = uVar12 | 0x80000;
      }
    }
    else if ((piVar10 == (int *)0x0) || (iVar6 = (**(code **)(*piVar10 + 0x174))(), iVar6 == 0)) {
      uVar12 = uVar12 & 0xfff7ffff;
    }
    uVar12 = uVar12 & 0xfffcffff;
    if ((piVar8[0x16] != 0) && (iVar6 = *(int *)(piVar8[0x16] + 8), iVar6 != 0)) {
      uVar4 = FUN_005e8d90(iVar6);
      uVar12 = uVar12 | uVar4;
    }
    if ((uVar12 & 0x20000) != 0) {
      uVar9 = FUN_005e0380(0,&PTR_PTR_00b03e00,&PTR_PTR_00b058e8,0);
      iVar6 = FUN_009832e6(uVar9);
      if (iVar6 != 0) {
        piVar10 = (int *)FUN_00625d30();
        if (piVar10 == piVar8) {
          uVar12 = uVar12 & 0xfffeffff;
        }
        else {
          uVar12 = uVar12 | 0x10000;
        }
      }
    }
    cVar3 = FUN_005f0310(uVar12);
    if (cVar3 == '\0') {
      cVar3 = (**(code **)(*piVar8 + 0x198))(0);
      if (cVar3 == '\0') {
        uVar12 = uVar12 & 0xfffffff7;
      }
    }
    else {
      uVar12 = uVar12 | 8;
    }
  }
  uVar4 = uVar12 & 0x7fffffff;
  if (((((uVar12 & 2) != 0) || ((uVar12 & 0xc) == 0)) || (cVar3 = FUN_004db4a0(), cVar3 != '\0')) ||
     (piVar5 == DAT_00b333c4)) goto LAB_004538dc;
  cVar3 = (**(code **)(*piVar5 + 400))();
  piVar8 = (int *)0x0;
  if (cVar3 == '\0') {
LAB_004537f4:
    iVar6 = FUN_006ecc80();
    if (iVar6 == 0) goto LAB_004538dc;
    FUN_006ecc80();
    cVar3 = FUN_004c97f0();
    if (cVar3 != '\0') goto LAB_004538dc;
    if (piVar8 != (int *)0x0) {
      FUN_004a7a60("Actor does not have an editor location.  This should never happen.");
    }
    (**(code **)(*piVar5 + 0xf4))(&fStack_18);
    fVar2 = fStack_14;
    fVar1 = fStack_18;
    FUN_004d6670();
LAB_004538bb:
    param_2 = (int)ROUND(fVar2);
    param_1 = (int)ROUND(fVar1);
    iVar6 = FUN_004efe80(param_1 >> 0xc,param_2 >> 0xc);
    iVar7 = FUN_006ecc80();
    bVar13 = iVar6 == iVar7;
LAB_004538d3:
    if (bVar13) goto LAB_004538dc;
  }
  else {
    iVar6 = FUN_005e1f60();
    iVar7 = FUN_005e1f40();
    if ((iVar7 == 0) && (piVar8 = piVar5, iVar6 == 0)) goto LAB_004537f4;
    pfVar11 = (float *)(**(code **)(*piVar5 + 0xf4))(auStack_c);
    fStack_18 = *pfVar11;
    fStack_14 = pfVar11[1];
    fStack_10 = pfVar11[2];
    if (iVar6 != 0) {
      iVar7 = FUN_006ecc80();
      bVar13 = iVar6 == iVar7;
      goto LAB_004538d3;
    }
    if (iVar7 == 0) goto LAB_004538dc;
    iVar6 = FUN_004d6670();
    fVar1 = fStack_18;
    fVar2 = fStack_14;
    if (iVar7 == iVar6) goto LAB_004538bb;
  }
  uVar4 = uVar4 | 0x80000000;
LAB_004538dc:
  uVar4 = uVar4 & 0xff7fffff;
  cVar3 = FUN_004d7f40();
  if ((cVar3 != '\0') && (piVar5 != DAT_00b333c4)) {
    uVar4 = uVar4 | 0x800000;
  }
  return uVar4;
}



void FUN_00453910(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = (int *)(in_ECX + 0x30);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00446cb0();
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



void FUN_00453940(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = (int *)(in_ECX + 0x30);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  FUN_0065c620();
  return;
}



undefined4 FUN_00453970(int param_1,uint *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  
  iVar4 = (int)param_2;
  if (((((*(uint *)(in_ECX + 0x18) >> 0xb & 1) != 0) && (param_2 != (uint *)0x0)) &&
      (iVar2 = FUN_006ecc80(), iVar2 != 0)) && (iVar2 = FUN_006ecc80(), iVar2 != param_1)) {
    param_2 = (uint *)0x0;
    FUN_0055e000(*(undefined4 *)(iVar4 + 0xc),&param_2);
    if (param_2 == (uint *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *param_2;
    }
    if ((uVar3 & 0xc) != 0) {
      FUN_006ecc80(iVar4);
      FUN_004cecd0(iVar4);
    }
  }
  for (piVar1 = (int *)(in_ECX + 0x20); (piVar1 != (int *)0x0 && (*piVar1 != param_3));
      piVar1 = (int *)piVar1[1]) {
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),piVar1 != (int *)0x0);
}



int FUN_00453a00(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int aiStack_18 [6];
  
  iVar4 = 0;
  iVar5 = 0;
  iVar2 = (**(code **)(*param_1 + 0x168))();
  if (iVar2 != 0) {
    aiStack_18[0] = 0;
    aiStack_18[1] = 1;
    aiStack_18[2] = 2;
    aiStack_18[3] = 3;
    aiStack_18[4] = 4;
    aiStack_18[5] = 5;
    do {
      piVar1 = (int *)(aiStack_18[iVar4] * 0x10 + 0x4c + iVar2);
      if ((piVar1 != (int *)0x0) && (iVar3 = *piVar1, iVar3 != 0)) {
        iVar3 = FUN_004521d0(*(undefined4 *)(iVar3 + 0xc));
        iVar5 = iVar5 * 0x1003f + iVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
  }
  return iVar5;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00453a90(undefined1 *param_1,int *param_2,uint param_3,char param_4,char param_5)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 auVar4 [4];
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  uint uVar12;
  char cVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined2 *puVar16;
  undefined4 *puVar17;
  undefined1 *local_154;
  uint local_150;
  int *local_14c;
  int *piStack_148;
  int iStack_144;
  undefined1 auStack_140 [4];
  char acStack_13c [52];
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_154;
  local_154 = param_1;
  local_14c = param_2;
  *param_1 = 0;
  if (param_2 != (int *)0x0) {
    param_3 = FUN_004535a0(param_2,param_3);
  }
  local_150 = 0;
  if ((param_5 == '\0') && (param_2 != (int *)0x0)) {
    local_150 = (**(code **)(*param_2 + 0x4c))(0);
    local_150 = local_150 & 0xffff;
  }
  piStack_148 = (int *)FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  iVar5 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05538,0);
  iStack_144 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
  if (iVar5 == 0) {
    if (((short)local_150 == 0) || (param_5 != '\0')) goto LAB_00453df4;
    _sprintf(acStack_13c,"Base(%i)",local_150 & 0xffff);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else {
    uVar6 = 0xffffffff;
    if (*(int **)(iVar5 + 0x58) != (int *)0x0) {
      uVar6 = (**(code **)(**(int **)(iVar5 + 0x58) + 8))();
    }
    switch(uVar6) {
    case 0:
      if (param_5 != '\0') {
        pcVar7 = "Process Level: High\r\n";
        goto LAB_00453b89;
      }
      _sprintf(acStack_13c,"High(%i)",local_150 & 0xffff);
      break;
    case 1:
      if (param_5 != '\0') {
        pcVar7 = "Process Level: Middle High\r\n";
        goto LAB_00453b89;
      }
      _sprintf(acStack_13c,"Mid High(%i)",local_150 & 0xffff);
      break;
    case 2:
      if (param_5 != '\0') {
        pcVar7 = "Process Level: Middle Low\r\n";
        goto LAB_00453b89;
      }
      _sprintf(acStack_13c,"Mid Low(%i)",local_150 & 0xffff);
      break;
    case 3:
      if (param_5 != '\0') {
        pcVar7 = "Process Level: Low\r\n";
        goto LAB_00453b89;
      }
      _sprintf(acStack_13c,"Low(%i)",local_150 & 0xffff);
      break;
    case 0xffffffff:
      if (param_5 != '\0') {
        pcVar7 = "Process Level: None\r\n";
LAB_00453b89:
        _sprintf(acStack_13c,pcVar7);
        goto switchD_00453b6f_default;
      }
      _sprintf(acStack_13c,"None(%i)",local_150 & 0xffff);
      break;
    default:
switchD_00453b6f_default:
      if (param_5 == '\0') break;
      goto LAB_00453c04;
    }
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
LAB_00453c04:
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  pcVar11 = acStack_13c;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar8 = uVar8 & 3; param_1 = local_154, uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar7 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar7 = pcVar7 + 1;
  }
LAB_00453df4:
  uVar8 = local_150;
  if ((param_3 & 1) != 0) {
    if (param_5 == '\0') {
      if (param_2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar12 = (**(code **)(*param_2 + 0x4c))(1);
        iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
      }
      _sprintf(acStack_13c,"Form Flags(%i)",iVar5);
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      while (uVar8 < 0x19) {
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = acStack_13c;
        *puVar16 = 0x20;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      }
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      *puVar16 = 0x20;
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)acStack_13c;
      pcVar7 = local_154 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
      pcVar11 = acStack_13c;
      for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar7 = pcVar7 + 4;
      }
      for (uVar8 = uVar8 & 3; param_1 = local_154, uVar8 != 0; uVar8 = uVar8 - 1) {
        *pcVar7 = *pcVar11;
        pcVar11 = pcVar11 + 1;
        pcVar7 = pcVar7 + 1;
      }
    }
    else {
      pcVar7 = param_1 + -1;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (pcVar11[1] != '\0');
      builtin_strncpy(pcVar11 + 1,"CHANGE_FORM_FLAGS\r\n",0x14);
    }
  }
  uVar8 = local_150;
  cVar13 = (char)param_3;
  if ((param_4 == '#') || (param_4 == '$')) {
    if ((param_3 & 4) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(4);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Base Health(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_ACTOR_BASE_HEALTH\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 8) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(8);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Base Attributes(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_ACTOR_BASE_ATTRIBUTES\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    puVar2 = local_154;
    if ((param_3 & 0x10) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x10);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Base Data(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_ACTOR_BASE_DATA\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x20);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Spell List(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_ACTOR_BASE_SPELLLIST\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
      }
    }
    if ((param_3 & 0x40) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x40);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Factions(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_ACTOR_BASE_FACTIONS\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    if ((param_3 & 0x10000000) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x10000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Base Modifiers(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_ACTOR_BASE_MODIFIERS\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
      }
    }
    if ((param_3 & 0x100) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x100);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"AI Data(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_ACTOR_BASE_AIDATA\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if (cVar13 < '\0') {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x80);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Full Name(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_ACTOR_BASE_FULLNAME\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    if (param_4 == '#') {
      if ((param_3 & 0x200) != 0) {
        if (param_5 == '\0') {
          if (param_2 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*param_2 + 0x4c))(0x200);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Skills(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7;
            pcVar7 = pcVar11 + 1;
          } while (pcVar11[1] != '\0');
          builtin_strncpy(pcVar11 + 1,"CHANGE_NPC_SKILLS\r\n",0x14);
        }
      }
      if ((param_3 & 0x400) != 0) {
        if (param_5 == '\0') {
          if (param_2 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*param_2 + 0x4c))(0x400);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Combat Style(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_NPC_COMBATSTYLE\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x800) == 0) {
        return;
      }
      if (param_5 != '\0') {
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_NPC_FAME\r\n",0x12);
        return;
      }
      if (param_2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar8 = (**(code **)(*param_2 + 0x4c))(0x800);
        iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
      }
      _sprintf(acStack_13c,"Fame(%i)",iVar5);
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      while (uVar8 < 0x19) {
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = acStack_13c;
        *puVar16 = 0x20;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      }
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      *puVar16 = 0x20;
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)acStack_13c;
      pcVar7 = puVar2 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
    }
    else {
      if (param_4 != '$') {
        return;
      }
      if ((param_3 & 0x200) != 0) {
        if (param_5 == '\0') {
          if (param_2 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*param_2 + 0x4c))(0x200);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Skills(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_CREATURE_SKILLS\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x400) == 0) {
        return;
      }
      if (param_5 != '\0') {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_CREATURE_COMBATSTYLE\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        return;
      }
      if (param_2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar8 = (**(code **)(*param_2 + 0x4c))(0x400);
        iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
      }
      _sprintf(acStack_13c,"Combat Style(%i)",iVar5);
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      while (uVar8 < 0x19) {
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = acStack_13c;
        *puVar16 = 0x20;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      }
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      *puVar16 = 0x20;
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)acStack_13c;
      pcVar7 = puVar2 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
    }
  }
  else if (param_4 == ';') {
    if ((param_3 & 4) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar12 = (**(code **)(*param_2 + 0x4c))(4);
          iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
        }
        _sprintf(acStack_13c,"Quest Flags(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; param_1 = local_154, uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = param_1 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_QUEST_FLAGS\r\n",0x15);
      }
    }
    uVar8 = local_150;
    if ((param_3 & 0x10000000) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar12 = (**(code **)(*param_2 + 0x4c))(0x10000000);
          iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
        }
        _sprintf(acStack_13c,"Quest Stages(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; param_1 = local_154, uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = param_1 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_QUEST_STAGES\r\n",0x16);
      }
    }
    uVar8 = local_150;
    if ((param_3 & 0x8000000) == 0) {
      return;
    }
    if (param_5 != '\0') {
      pcVar7 = param_1 + -1;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (pcVar11[1] != '\0');
      builtin_strncpy(pcVar11 + 1,"CHANGE_QUEST_SCRIPT\r\n",0x16);
      return;
    }
    iVar5 = FUN_009832e6(param_2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
    if ((iVar5 == 0) || (*(int *)(iVar5 + 0x58) != 0)) {
      if (param_2 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar12 = (**(code **)(*param_2 + 0x4c))(0x8000000);
        iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
      }
      _sprintf(acStack_13c,"Quest Script(%i)",iVar5);
    }
    else if (param_2 != (int *)0x0) {
      _sprintf(acStack_13c,"Quest Script(No longer has script locals)");
    }
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else if (param_4 == ':') {
    if ((param_3 & 0x10000000) == 0) {
      return;
    }
    if (param_5 != '\0') {
      pcVar7 = param_1 + -1;
      do {
        pcVar11 = pcVar7;
        pcVar7 = pcVar11 + 1;
      } while (pcVar11[1] != '\0');
      builtin_strncpy(pcVar11 + 1,"CHANGE_TOPIC_SAIDONCE\r\n",0x18);
      return;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar12 = (**(code **)(*param_2 + 0x4c))(0x10000000);
      iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
    }
    _sprintf(acStack_13c,"Topic Said Once(%i)",iVar5);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else if (param_4 == '=') {
    if ((param_3 & 0x10000000) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x10000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Never Run Flag(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_PACKAGE_NEVER_RUN\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 0x8000000) == 0) {
      return;
    }
    if (param_5 != '\0') {
      pcVar7 = local_154 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
      pcVar11 = "CHANGE_PACKAGE_WAITING\r\n";
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
        pcVar11 = pcVar11 + 4;
        pcVar7 = pcVar7 + 4;
      }
      *pcVar7 = *pcVar11;
      return;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x4c))(0x8000000);
      iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
    }
    _sprintf(acStack_13c,"Waiting Flag(%i)",iVar5);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else if (param_4 == '0') {
    if ((param_3 & 8) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar12 = (**(code **)(*param_2 + 0x4c))(8);
          iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
        }
        _sprintf(acStack_13c,"Cell Flags(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; param_1 = local_154, uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = param_1 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_CELL_FLAGS\r\n",0x14);
      }
    }
    if (((param_3 & 2) != 0) && ((param_3 & 4) != 0)) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00452250(param_2,6);
          uVar8 = uVar8 & 0xffff;
        }
        _sprintf(acStack_13c,"Cell Created(%i)",uVar8);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = param_1 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_CELL_CREATED\r\n",0x16);
      }
    }
    if ((param_3 & 0x10000000) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x10000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Seen Data(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_CELL_SEENDATA\r\n";
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 0x8000000) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x8000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Detach Time(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_CELL_DETACHTIME\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    puVar2 = local_154;
    if ((param_3 & 0x20) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x20);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Ownership(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_CELL_OWNERSHIP\r\n",0x18);
      }
    }
    if ((param_3 & 0x10) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x10);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Full Name(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_CELL_FULLNAME\r\n";
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 0x1000000) == 0) {
      return;
    }
    if (param_5 != '\0') {
      puVar17 = (undefined4 *)(puVar2 + -1);
      do {
        pcVar7 = (char *)((int)puVar17 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = "CHANGE_CELL_PATHGRID_MODIFIED\r\n";
      for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar17 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        puVar17 = puVar17 + 1;
      }
      return;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x4c))(0x1000000);
      iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
    }
    _sprintf(acStack_13c,"Pathgrid Modified(%i)",iVar5);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = puVar2 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else if (param_4 == '\x06') {
    if ((param_3 & 4) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(4);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Faction Flags(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_FACTION_FLAGS\r\n";
        for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 8) == 0) {
      return;
    }
    if (param_5 != '\0') {
      puVar17 = (undefined4 *)(local_154 + -1);
      do {
        pcVar7 = (char *)((int)puVar17 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = "CHANGE_FACTION_REACTIONS\r\n";
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar17 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        puVar17 = puVar17 + 1;
      }
      *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
      *(char *)((int)puVar17 + 2) = pcVar7[2];
      return;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_2 + 0x4c))(8);
      iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
    }
    _sprintf(acStack_13c,"Faction Reactions(%i)",iVar5);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else if (param_4 == '\x15') {
    if ((param_3 & 4) == 0) {
      return;
    }
    if (param_5 != '\0') {
      puVar17 = (undefined4 *)(local_154 + -1);
      do {
        pcVar7 = (char *)((int)puVar17 + 1);
        puVar17 = (undefined4 *)((int)puVar17 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = "CHANGE_BOOK_TEACHES_SKILL\r\n";
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar17 = *(undefined4 *)pcVar7;
        pcVar7 = pcVar7 + 4;
        puVar17 = puVar17 + 1;
      }
      return;
    }
    if (param_2 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      uVar12 = (**(code **)(*param_2 + 0x4c))(4);
      iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
    }
    _sprintf(acStack_13c,"Book Skill(%i)",iVar5);
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    while (uVar8 < 0x19) {
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      pcVar7 = acStack_13c;
      *puVar16 = 0x20;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
    }
    puVar16 = (undefined2 *)(auStack_140 + 3);
    do {
      pcVar7 = (char *)((int)puVar16 + 1);
      puVar16 = (undefined2 *)((int)puVar16 + 1);
    } while (*pcVar7 != '\0');
    *puVar16 = 0x20;
    pcVar7 = acStack_13c;
    do {
      cVar13 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar13 != '\0');
    uVar8 = (int)pcVar7 - (int)acStack_13c;
    pcVar7 = local_154 + -1;
    do {
      pcVar11 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
    } while (*pcVar11 != '\0');
  }
  else {
    if (((param_4 != '1') && (param_4 != '2')) && (param_4 != '3')) {
      return;
    }
    if ((param_3 & 2) != 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00452250(param_2,2);
          uVar8 = uVar8 & 0xffff;
        }
        _sprintf(acStack_13c,"Created(%i)",uVar8);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_CREATED_NEW_REFERENCE\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((int)param_3 < 0) {
      if (param_5 == '\0') {
        if (param_2 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*param_2 + 0x4c))(0x80000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Cell Changed(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGEFLAG_REFR_CELL_CHANGED\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 4) != 0) {
      if (param_5 == '\0') {
        if (local_14c == (int *)0x0) {
          uVar8 = 0;
        }
        else {
          uVar8 = FUN_00452250(local_14c,4);
          uVar8 = uVar8 & 0xffff;
        }
        _sprintf(acStack_13c,"Moved(%i)",uVar8);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_REFR_MOVE\r\n",0x13);
      }
    }
    piVar14 = local_14c;
    auStack_140 = (undefined1  [4])(param_3 & 8);
    if (auStack_140 != (undefined1  [4])0x0) {
      if (param_5 == '\0') {
        if ((param_3 & 4) == 0) {
          if (local_14c == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = FUN_00452250(local_14c,8);
            uVar12 = local_150 & 0xffff;
            uVar9 = (**(code **)(*piVar14 + 0x4c))(8);
            iVar5 = (uVar9 & 0xffff) + ((uVar8 & 0xffff) - uVar12);
          }
        }
        else if (local_14c == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*local_14c + 0x4c))(8);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Havok Moved(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_REFR_HAVOK_MOVE\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    if ((param_3 & 0x800) != 0) {
      if (param_5 == '\0') {
        _sprintf(acStack_13c,"Had Havok Move Flag(%i)",0);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGEFLAG_REFR_HAD_HAVOK_MOVE_FLAG\r\n";
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
      }
    }
    piVar14 = local_14c;
    if ((param_3 & 0x800000) != 0) {
      if (param_5 == '\0') {
        if ((param_3 & 0xe) == 0) {
          if (local_14c == (int *)0x0) {
            uVar8 = 0;
          }
          else {
            uVar8 = FUN_00452250(local_14c,0x800000);
            uVar8 = uVar8 & 0xffff;
          }
          _sprintf(acStack_13c,"Oblivion Flag(%i)",uVar8);
        }
        else {
          _sprintf(acStack_13c,"Oblivion Flag(0)");
          piVar14 = local_14c;
        }
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_REFR_OBLIVION_FLAG\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
      }
    }
    if ((param_3 & 0x2000000) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x2000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Animation(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_REFR_ANIMATION\r\n",0x18);
      }
    }
    puVar2 = local_154;
    if ((param_3 & 0x10) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x10);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Scale(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_REFR_SCALE\r\n",0x14);
      }
    }
    if ((param_3 & 0x20) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x20);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"All Extra(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = puVar2 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_REFR_ALL_EXTRA\r\n",0x18);
      }
    }
    piVar3 = piStack_148;
    if ((param_3 & 0x40000000) != 0) {
      if (param_5 == '\0') {
        if (piStack_148 == (int *)0x0) {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40000000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          pcVar7 = "Disabled/Enabled(%i)";
        }
        else if (((uint)piStack_148[2] >> 0xb & 1) == 0) {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
            pcVar7 = "Enabled(%i)";
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40000000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
            pcVar7 = "Enabled(%i)";
          }
        }
        else if (piVar14 == (int *)0x0) {
          iVar5 = 0;
          pcVar7 = "Disabled(%i)";
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          pcVar7 = "Disabled(%i)";
        }
        _sprintf(acStack_13c,pcVar7,iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_REFR_DISABLE_STATE\r\n";
        for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
      }
    }
    if ((param_3 & 0x10000000) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x10000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Leveled Creature(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_REFR_EXTRA_LEVELED_CREATURE\r\n";
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
      }
    }
    if ((param_3 & 0x8000000) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x8000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Inventory(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7;
          pcVar7 = pcVar11 + 1;
        } while (pcVar11[1] != '\0');
        builtin_strncpy(pcVar11 + 1,"CHANGE_REFR_INVENTORY\r\n",0x18);
      }
    }
    if ((param_3 & 0x4000000) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x4000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Script(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_REFR_EXTRA_SCRIPT\r\n";
        for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
      }
    }
    if ((param_3 & 0x1000000) != 0) {
      if (param_5 == '\0') {
        if (piVar14 == (int *)0x0) {
          iVar5 = 0;
        }
        else {
          uVar8 = (**(code **)(*piVar14 + 0x4c))(0x1000000);
          iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
        }
        _sprintf(acStack_13c,"Movement Extra(%i)",iVar5);
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        while (uVar8 < 0x19) {
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = acStack_13c;
          *puVar16 = 0x20;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
        }
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        *puVar16 = 0x20;
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      else {
        puVar17 = (undefined4 *)(local_154 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_REFR_EXTRA_SAVEDMOVEMENTDATA\r\n";
        for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
      }
    }
    if ((param_4 == '2') || (param_4 == '3')) {
      if ((param_3 & 0x20000000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x20000000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Equipment(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_ACTOR_EQUIPMENT\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x400000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x400000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Game Modifiers(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_GAME_MODIFIERS\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        }
      }
      puVar2 = local_154;
      if ((param_3 & 0x200000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x200000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Script Modifiers(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_SCRIPT_MODIFIERS\r\n";
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if ((param_3 & 0x100000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x100000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Magic Modifiers(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(puVar2 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_MAGIC_MODIFIERS\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      iVar5 = iStack_144;
      if ((param_3 & 0x80000) != 0) {
        uVar6 = 0;
        if (((iStack_144 != 0) && (*(int **)(iStack_144 + 0x58) != (int *)0x0)) &&
           (iVar10 = (**(code **)(**(int **)(iStack_144 + 0x58) + 0x174))(), iVar10 != 0)) {
          iVar10 = (**(code **)(**(int **)(iVar5 + 0x58) + 0x174))();
          uVar6 = *(undefined4 *)(iVar10 + 0xc);
        }
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x80000);
            iVar10 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Run Once %08X(%i)",uVar6,iVar10);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
        }
        else {
          _sprintf(acStack_13c,"CHANGE_ACTOR_RUNONCE_PACKAGE %08X\r\n",uVar6);
        }
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      if ((param_3 & 0x40000) != 0) {
        uVar6 = 0;
        if (((iVar5 != 0) && (iVar5 != -0x44)) && (iVar10 = FUN_0041fc70(), iVar10 != 0)) {
          iVar10 = FUN_0041fc70();
          uVar6 = *(undefined4 *)(iVar10 + 0xc);
        }
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar10 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40000);
            iVar10 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Trespass %08X(%i)",uVar6,iVar10);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
        }
        else {
          _sprintf(acStack_13c,"CHANGE_ACTOR_EXTRA_TRESPASS_PACKAGE %08X\r\n",uVar6);
        }
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      if ((param_3 & 0x20000) != 0) {
        uVar6 = 0;
        if (((iVar5 != 0) && (*(int *)(iVar5 + 0x58) != 0)) &&
           (iVar10 = *(int *)(*(int *)(iVar5 + 0x58) + 8), iVar10 != 0)) {
          uVar6 = *(undefined4 *)(iVar10 + 0xc);
        }
        if (param_5 == '\0') {
          uVar15 = 0x20000;
          if ((param_3 & 0x10000) != 0) {
            uVar15 = 0x30000;
          }
          builtin_strncpy(acStack_108,"Interrupt",10);
          if ((iVar5 != 0) && (iVar5 = FUN_005e4080(), iVar5 != 0)) {
            pcVar11 = (char *)FUN_005e4080();
            pcVar7 = acStack_108;
            do {
              cVar1 = *pcVar11;
              *pcVar7 = cVar1;
              pcVar11 = pcVar11 + 1;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
          }
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(uVar15);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"%s %08X(%i)",acStack_108,uVar6,iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
        }
        else {
          _sprintf(acStack_13c,"CHANGE_ACTOR_INTERRUPT_PACKAGE %08X\r\n",uVar6);
        }
        pcVar7 = acStack_13c;
        do {
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        uVar8 = (int)pcVar7 - (int)acStack_13c;
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = acStack_13c;
        for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar7 = *pcVar11;
          pcVar11 = pcVar11 + 1;
          pcVar7 = pcVar7 + 1;
        }
      }
      if ((param_3 & 0x10000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x10000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Non-saved Package(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_NONSAVED_PACKAGE\r\n";
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if ((param_3 & 0x8000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x8000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Disp Modifiers(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_ACTOR_DISPOSITION_MODIFIERS\r\n";
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      puVar2 = local_154;
      if ((param_3 & 0x4000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x4000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Oblivion Entry(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_EXTRA_OBLIVION_ENTRY\r\n";
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if ((param_3 & 0x2000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x2000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Investment Gold(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(puVar2 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_EXTRA_INVESTMENTGOLD\r\n";
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      auVar4 = auStack_140;
      if ((param_3 & 0x40) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(auStack_140);
            uVar12 = (**(code **)(*piVar14 + 0x4c))((int)auVar4 + 0x40);
            iVar5 = (uVar12 & 0xffff) - (uVar8 & 0xffff);
          }
          _sprintf(acStack_13c,"Life State(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_ACTOR_LIFESTATE\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x1000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x1000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Persuasion(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = puVar2 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(puVar2 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_ACTOR_EXTRA_PERSUASION\r\n";
          for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if (param_4 != '2') {
        return;
      }
      if (-1 < cVar13) {
        return;
      }
      if (param_5 != '\0') {
        puVar17 = (undefined4 *)(puVar2 + -1);
        do {
          pcVar7 = (char *)((int)puVar17 + 1);
          puVar17 = (undefined4 *)((int)puVar17 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = "CHANGE_CHARACTER_EXTRA_CRIMEGOLD\r\n";
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar17 = *(undefined4 *)pcVar7;
          pcVar7 = pcVar7 + 4;
          puVar17 = puVar17 + 1;
        }
        *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
        *(char *)((int)puVar17 + 2) = pcVar7[2];
        return;
      }
      if (piVar14 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar8 = (**(code **)(*piVar14 + 0x4c))(0x80);
        iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
      }
      _sprintf(acStack_13c,"Crime Gold(%i)",iVar5);
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      while (uVar8 < 0x19) {
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = acStack_13c;
        *puVar16 = 0x20;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      }
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      *puVar16 = 0x20;
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)acStack_13c;
      pcVar7 = puVar2 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
    }
    else {
      if ((param_3 & 0x400) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x400);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Map Marker Flags(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_MAPMARKER_EXTRA_FLAGS\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      if ((param_3 & 0x400000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x400000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Furniture Markers(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_OBJECT_EXTRA_FURNITURE_MARKER\r\n";
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      if ((param_3 & 0x200000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x200000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Extra Magic(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_OBJECT_EXTRA_MAGIC\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if ((param_3 & 0x40) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Lock(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar1 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar1 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar1 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_OBJECT_EXTRA_LOCK\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      if (cVar13 < '\0') {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x80);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Owner(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_OBJECT_EXTRA_OWNER\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
        }
      }
      if ((param_3 & 0x100) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x100);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Global Owner(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_OBJECT_EXTRA_GLOBAL\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x200) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x200);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Rank Owner(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGE_OBJECT_EXTRA_RANK\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      if ((param_3 & 0x20000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x20000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Dropped Item Flag(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          puVar17 = (undefined4 *)(local_154 + -1);
          do {
            pcVar7 = (char *)((int)puVar17 + 1);
            puVar17 = (undefined4 *)((int)puVar17 + 1);
          } while (*pcVar7 != '\0');
          pcVar7 = "CHANGEFLAG_OBJECT_DROPPED_NON_QUEST_ITEM\r\n";
          for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar17 = *(undefined4 *)pcVar7;
            pcVar7 = pcVar7 + 4;
            puVar17 = puVar17 + 1;
          }
          *(undefined2 *)puVar17 = *(undefined2 *)pcVar7;
          *(char *)((int)puVar17 + 2) = pcVar7[2];
        }
      }
      if ((param_3 & 0x10000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x10000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Empty Flag(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7;
            pcVar7 = pcVar11 + 1;
          } while (pcVar11[1] != '\0');
          builtin_strncpy(pcVar11 + 1,"CHANGE_OBJECT_EMPTY\r\n",0x16);
        }
      }
      if (piVar3 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar3 + 0x170))();
        if (iVar5 == 0) {
          return;
        }
        iVar5 = (**(code **)(*piVar3 + 0x170))();
        if (*(char *)(iVar5 + 4) != '\x18') {
          return;
        }
      }
      if ((param_3 & 0x100000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x100000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Teleport(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_DOOR_EXTRA_TELEPORT\r\n";
          for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      if ((param_3 & 0x80000) != 0) {
        if (param_5 == '\0') {
          if (piVar14 == (int *)0x0) {
            iVar5 = 0;
          }
          else {
            uVar8 = (**(code **)(*piVar14 + 0x4c))(0x80000);
            iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
          }
          _sprintf(acStack_13c,"Door State(%i)",iVar5);
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          while (uVar8 < 0x19) {
            puVar16 = (undefined2 *)(auStack_140 + 3);
            do {
              pcVar7 = (char *)((int)puVar16 + 1);
              puVar16 = (undefined2 *)((int)puVar16 + 1);
            } while (*pcVar7 != '\0');
            pcVar7 = acStack_13c;
            *puVar16 = 0x20;
            do {
              cVar13 = *pcVar7;
              pcVar7 = pcVar7 + 1;
            } while (cVar13 != '\0');
            uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
          }
          puVar16 = (undefined2 *)(auStack_140 + 3);
          do {
            pcVar7 = (char *)((int)puVar16 + 1);
            puVar16 = (undefined2 *)((int)puVar16 + 1);
          } while (*pcVar7 != '\0');
          *puVar16 = 0x20;
          pcVar7 = acStack_13c;
          do {
            cVar13 = *pcVar7;
            pcVar7 = pcVar7 + 1;
          } while (cVar13 != '\0');
          uVar8 = (int)pcVar7 - (int)acStack_13c;
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = acStack_13c;
          for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
            *pcVar7 = *pcVar11;
            pcVar11 = pcVar11 + 1;
            pcVar7 = pcVar7 + 1;
          }
        }
        else {
          pcVar7 = local_154 + -1;
          do {
            pcVar11 = pcVar7 + 1;
            pcVar7 = pcVar7 + 1;
          } while (*pcVar11 != '\0');
          pcVar11 = "CHANGE_DOOR_OPEN_STATE\r\n";
          for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
            pcVar11 = pcVar11 + 4;
            pcVar7 = pcVar7 + 4;
          }
          *pcVar7 = *pcVar11;
        }
      }
      puVar2 = local_154;
      if ((param_3 & 0x40000) == 0) {
        return;
      }
      if (param_5 != '\0') {
        pcVar7 = local_154 + -1;
        do {
          pcVar11 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
        } while (*pcVar11 != '\0');
        pcVar11 = "CHANGE_DOOR_OPEN_DEFAULT_STATE\r\n";
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
          pcVar11 = pcVar11 + 4;
          pcVar7 = pcVar7 + 4;
        }
        *pcVar7 = *pcVar11;
        return;
      }
      if (piVar14 == (int *)0x0) {
        iVar5 = 0;
      }
      else {
        uVar8 = (**(code **)(*piVar14 + 0x4c))(0x40000);
        iVar5 = (uVar8 & 0xffff) - (local_150 & 0xffff);
      }
      _sprintf(acStack_13c,"Door Default State(%i)",iVar5);
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      while (uVar8 < 0x19) {
        puVar16 = (undefined2 *)(auStack_140 + 3);
        do {
          pcVar7 = (char *)((int)puVar16 + 1);
          puVar16 = (undefined2 *)((int)puVar16 + 1);
        } while (*pcVar7 != '\0');
        pcVar7 = acStack_13c;
        *puVar16 = 0x20;
        do {
          cVar13 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar13 != '\0');
        uVar8 = (int)pcVar7 - (int)(acStack_13c + 1);
      }
      puVar16 = (undefined2 *)(auStack_140 + 3);
      do {
        pcVar7 = (char *)((int)puVar16 + 1);
        puVar16 = (undefined2 *)((int)puVar16 + 1);
      } while (*pcVar7 != '\0');
      *puVar16 = 0x20;
      pcVar7 = acStack_13c;
      do {
        cVar13 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar13 != '\0');
      uVar8 = (int)pcVar7 - (int)acStack_13c;
      pcVar7 = puVar2 + -1;
      do {
        pcVar11 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
      } while (*pcVar11 != '\0');
    }
  }
  pcVar11 = acStack_13c;
  for (uVar12 = uVar8 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)pcVar11;
    pcVar11 = pcVar11 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar7 = *pcVar11;
    pcVar11 = pcVar11 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}



void FUN_00458e50(int param_1,ushort param_2)

{
  char cVar1;
  ushort *puVar2;
  int in_ECX;
  uint _Size;
  undefined1 local_4 [4];
  
  param_1 = *(undefined4 *)(param_1 + 0xc);
  cVar1 = FUN_0055e000(param_1,local_4);
  if (cVar1 != '\0') {
    param_1 = 0;
  }
  _Size = (uint)param_2;
  puVar2 = (ushort *)thunk_FUN_00401aa0(_Size + 2,1);
  *puVar2 = param_2;
  _memcpy(puVar2 + 1,*(void **)(in_ECX + 0x14),_Size);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + _Size;
  FUN_00452570(param_1,puVar2);
  return;
}



void FUN_00458ed0(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  int local_c;
  undefined4 local_8;
  
  if (param_1 == DAT_00b333c4) {
    if (param_2 == 0) {
      iVar3 = FUN_0065d750(1);
    }
    else {
      iVar3 = FUN_0065d750(0);
    }
  }
  else {
    iVar3 = (**(code **)(*param_1 + 0x164))();
  }
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
  piVar5 = (int *)0x0;
  local_8 = 0xffffffff;
  local_c = 0;
  if ((iVar4 != 0) && (param_2 != 0)) {
    piVar5 = (int *)FUN_009832e6(*(undefined4 *)(iVar4 + 0x58),0,&PTR_PTR_00b05908,&PTR_PTR_00b05924
                                 ,0);
    if (piVar5 != (int *)0x0) {
      local_8 = (**(code **)(*piVar5 + 0x2d0))();
      local_c = (**(code **)(*piVar5 + 0x2d4))();
    }
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = param_3;
  uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
  *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
  if (iVar3 != 0) {
    FUN_00475590(param_1);
  }
  if (uVar1 + 2 + param_3 != *(int *)(in_ECX + 0x14)) {
    (**(code **)(*DAT_00b34d90 + 0x18))("LoadAnimations() call did not properly empty buffer.");
  }
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  if (piVar5 != (int *)0x0) {
    if (local_c != 0) {
      local_c = FUN_004706e0((int)(char)((char)local_c + -5));
    }
    (**(code **)(*piVar5 + 0x2d8))(local_8,local_c);
  }
  return;
}



void FUN_00459020(int param_1,ushort param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  int in_ECX;
  uint _Size;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  _Size = (uint)param_2;
  puVar2 = (ushort *)thunk_FUN_00401aa0(_Size + 2,1);
  *puVar2 = param_2;
  _memcpy(puVar2 + 1,*(void **)(in_ECX + 0x14),_Size);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + _Size;
  FUN_00452570(uVar1,puVar2);
  return;
}



void FUN_00459080(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = param_2;
  uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
  *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
  FUN_004e2f70(0);
  if (uVar1 + 2 + param_2 != *(int *)(in_ECX + 0x14)) {
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("LoadAttachedAnimations() call did not properly empty buffer.");
  }
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  return;
}



void FUN_004590e0(int param_1,ushort param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  int in_ECX;
  uint _Size;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  _Size = (uint)param_2;
  puVar2 = (ushort *)thunk_FUN_00401aa0(_Size + 2,1);
  *puVar2 = param_2;
  _memcpy(puVar2 + 1,*(void **)(in_ECX + 0x14),_Size);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + _Size;
  FUN_00452570(uVar1,puVar2);
  return;
}



void FUN_00459140(void)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  LONG LVar7;
  int in_ECX;
  int local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 *local_10;
  undefined4 *puStack_c;
  int iStack_8;
  undefined4 local_4;
  
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x5c) + 4);
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar5 = *(int **)(*(int *)(in_ECX + 0x5c) + 8);
    piVar6 = piVar5;
    do {
      if (*piVar6 != 0) {
        local_14 = piVar5[uVar3];
        goto joined_r0x0045917b;
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar3 < uVar2);
  }
  local_14 = 0;
joined_r0x0045917b:
  while (local_14 != 0) {
    FUN_00452600(&local_14,&local_18,&local_1c);
    uVar4 = FUN_0046b250(local_18,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05538,0);
    piVar5 = (int *)FUN_009832e6(uVar4);
    if ((piVar5 != (int *)0x0) &&
       (piVar6 = (int *)FUN_009832e6(piVar5[0x16],0,&PTR_PTR_00b05908,&PTR_PTR_00b05924,0),
       piVar6 != (int *)0x0)) {
      local_4 = *(undefined4 *)(in_ECX + 0x14);
      *(int *)(in_ECX + 0x14) = local_1c;
      uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
      *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
      piVar6 = (int *)(**(code **)(*piVar6 + 0x18c))(&local_10);
      iStack_8 = *piVar6;
      if (local_10 != (undefined4 *)0x0) {
        puStack_c = local_10;
        LVar7 = InterlockedDecrement(local_10 + 1);
        if ((LVar7 == 0) && (puStack_c != (undefined4 *)0x0)) {
          (**(code **)*puStack_c)(1);
        }
      }
      if (iStack_8 == 0) {
        if ((((uint)piVar5[2] >> 5 & 1) == 0) || (((uint)piVar5[2] >> 0xb & 1) == 0)) {
          uVar4 = (**(code **)(*piVar5 + 0xd4))(piVar5[3]);
          FUN_004a7a60("LoadCharControllers(): Mob %s %08X does not have a character controller to load."
                       ,uVar4);
        }
      }
      else {
        FUN_00657340(piVar5);
        if (uVar1 + 2 + local_1c != *(int *)(in_ECX + 0x14)) {
          (**(code **)(*DAT_00b34d90 + 0x18))
                    ("LoadCharControllers() call did not properly empty buffer.");
        }
      }
      *(undefined4 *)(in_ECX + 0x14) = local_4;
    }
    FUN_00401e40(local_1c);
    FUN_004524c0(local_18);
  }
  if (*(int *)(*(int *)(in_ECX + 0x5c) + 0xc) != 0) {
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("LoadCharControllers() call finished, but still has elements in the map.");
  }
  return;
}



void FUN_00459310(int param_1,ushort param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  int in_ECX;
  uint _Size;
  
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  _Size = (uint)param_2;
  puVar2 = (ushort *)thunk_FUN_00401aa0(_Size + 2,1);
  *puVar2 = param_2;
  _memcpy(puVar2 + 1,*(void **)(in_ECX + 0x14),_Size);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + _Size;
  FUN_00452570(uVar1,puVar2);
  return;
}



void FUN_00459370(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  *(int *)(in_ECX + 0x14) = param_2;
  uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
  *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
  FUN_004e31e0(uVar1);
  if (uVar1 + 2 + param_2 != *(int *)(in_ECX + 0x14)) {
    (**(code **)(*DAT_00b34d90 + 0x18))("LoadHavokData() call did not properly empty buffer.");
  }
  *(undefined4 *)(in_ECX + 0x14) = uVar2;
  return;
}



void FUN_004593d0(int param_1)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = (int *)(in_ECX + 100);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      FUN_00446cb0();
      return;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[1];
  }
  return;
}



void FUN_00459400(void)

{
  int in_ECX;
  int *piVar1;
  
  piVar1 = *(int **)(in_ECX + 0x6c);
  if (piVar1 != (int *)0x0) {
    do {
      if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar1)(1);
      }
      piVar1 = (int *)piVar1[1];
    } while (piVar1 != (int *)0x0);
    FUN_004526e0();
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x6c));
    *(undefined4 *)(in_ECX + 0x6c) = 0;
  }
  FUN_005ae430();
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00459570(int param_1,long *param_2,char *param_3,char *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  uint uVar7;
  char *_Str;
  char *pcVar8;
  undefined4 local_214;
  char *local_210;
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_214;
  local_210 = param_3;
  pcVar2 = _strrchr((char *)(param_1 + 0x3c),0x5c);
  _Str = pcVar2 + 1;
  local_214 = _strstr(_Str,"Playing Time");
  pcVar3 = _strstr(_Str,"-");
  if (((local_214 != (char *)0x0) && (pcVar3 != (char *)0x0)) &&
     (iVar4 = _strncmp(_Str,"Save ",5), iVar4 == 0)) {
    if (param_2 != (long *)0x0) {
      _strncpy(local_20c,pcVar2 + 6,(size_t)(pcVar3 + (-5 - (int)_Str)));
      *(char *)((int)&local_214 + (int)(pcVar3 + (-5 - (int)_Str) + 8)) = '\0';
      lVar5 = _atol(local_20c);
      *param_2 = lVar5;
    }
    if ((local_210 == (char *)0x0) && (param_4 == (char *)0x0)) {
      return 1;
    }
    pcVar3 = _strstr(pcVar2 + 2,",");
    pcVar6 = (char *)0x0;
    if (pcVar3 != (char *)0x0) {
      do {
        pcVar8 = pcVar6;
        pcVar6 = pcVar3;
        pcVar3 = _strstr(pcVar6 + 1,",");
      } while (pcVar3 != (char *)0x0);
      if ((pcVar8 != (char *)0x0) && (pcVar6 != (char *)0x0)) {
        if (local_210 != (char *)0x0) {
          pcVar8 = pcVar8 + 2;
          pcVar3 = _Str;
          do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 1;
          } while (cVar1 != '\0');
          if (*pcVar8 != ' ') {
            do {
              if (_Str + ((int)pcVar3 - (int)(pcVar2 + 2)) <= pcVar8) break;
              pcVar8 = pcVar8 + 1;
            } while (*pcVar8 != ' ');
          }
          _strncpy(local_108,pcVar8,(int)pcVar6 - (int)pcVar8);
          local_108[(int)pcVar6 - (int)pcVar8] = '\0';
          _sprintf(local_210,"%s%s",DAT_00b38720,local_108);
        }
        if (param_4 == (char *)0x0) {
          return 1;
        }
        pcVar2 = local_214 + 0xd;
        iVar4 = (int)param_4 - (int)pcVar2;
        do {
          cVar1 = *pcVar2;
          pcVar2[iVar4] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        pcVar2 = _strstr(param_4,".ess");
        if (pcVar2 != (char *)0x0) {
          *pcVar2 = '\0';
        }
        uVar7 = 0;
        pcVar2 = param_4;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if (pcVar2 == param_4 + 1) {
          return 1;
        }
        do {
          if (param_4[uVar7] == '.') {
            param_4[uVar7] = ':';
          }
          uVar7 = uVar7 + 1;
          pcVar2 = param_4;
          do {
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + 1;
          } while (cVar1 != '\0');
        } while (uVar7 < (uint)((int)pcVar2 - (int)(param_4 + 1)));
        return 1;
      }
    }
  }
  return 0;
}



undefined4 FUN_00459790(int *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  char cVar4;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x10) != 0) &&
     (cVar4 = FUN_0055e000(param_1,&param_1), piVar3 = param_1, cVar4 != '\0')) {
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return 0;
      }
      puVar1 = (undefined4 *)*piVar3;
      if (((puVar1 != (undefined4 *)0x0) && (param_2 == puVar1[1])) && (param_3 == puVar1[2]))
      break;
      piVar3 = (int *)piVar3[1];
    }
    uVar2 = *puVar1;
    FUN_0065c620(puVar1);
    FUN_00401f20(puVar1);
    return uVar2;
  }
  return 0;
}



void FUN_00459800(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  
  if (param_1 == 0) {
    FUN_004a7a60("Attempting to add null object to created base objects list.");
    return;
  }
  cVar2 = FUN_00446b80(*(undefined4 *)(param_1 + 0xc));
  if (cVar2 != '\0') {
    piVar1 = (int *)(in_ECX + 0x28);
    while( true ) {
      if (piVar1 == (int *)0x0) {
        FUN_00446cb0(*(int *)(param_1 + 0xc));
        return;
      }
      if (*piVar1 == *(int *)(param_1 + 0xc)) break;
      piVar1 = (int *)piVar1[1];
    }
    return;
  }
  FUN_004a7a60("Attempting to add non-created form %08X to created base objects list.",
               *(undefined4 *)(param_1 + 0xc));
  return;
}



void FUN_00459870(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 0x30);
  piVar4 = piVar1;
joined_r0x0045987a:
  do {
    if (piVar4 == (int *)0x0) {
      if (piVar1 != (int *)0x0) {
        while (cVar5 = FUN_0046cb60(), cVar5 == '\0') {
          piVar4 = *(int **)(in_ECX + 0x34);
          piVar2 = (int *)*piVar1;
          if (piVar4 == (int *)0x0) {
            *piVar1 = 0;
          }
          else {
            *(int *)(in_ECX + 0x34) = piVar4[1];
            *piVar1 = *piVar4;
            FUN_00401f20(piVar4);
          }
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x10))(1);
          }
        }
      }
      return;
    }
    piVar2 = (int *)*piVar4;
    if (piVar2 != (int *)0x0) {
      iVar6 = FUN_009832e6(piVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
      iVar7 = FUN_009832e6(piVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
      if ((iVar6 == 0) && (iVar7 == 0)) {
        piVar3 = (int *)piVar4[1];
        if (piVar3 == (int *)0x0) {
          *piVar4 = 0;
          (**(code **)(*piVar2 + 0x10))(1);
        }
        else {
          piVar4[1] = piVar3[1];
          *piVar4 = *piVar3;
          FUN_00401f20(piVar3);
          (**(code **)(*piVar2 + 0x10))(1);
        }
        goto joined_r0x0045987a;
      }
    }
    piVar4 = (int *)piVar4[1];
  } while( true );
}



uint FUN_00459950(uint param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_00446b80(param_1);
  if (cVar1 != '\0') {
    return param_1;
  }
  if (*(uint *)(*(int *)(in_ECX + 0x74) + 0xc) < param_1) {
    return 0;
  }
  return *(uint *)(*(int *)(*(int *)(in_ECX + 0x74) + 4) + param_1 * 4);
}



undefined4 FUN_00459990(ushort param_1)

{
  int in_ECX;
  
  if (*(uint *)(*(int *)(in_ECX + 0x78) + 0xc) <= (uint)param_1) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x78) + 4) + (uint)param_1 * 4);
}



void FUN_004599b0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_00664700(0);
  FUN_0057afb0();
  if (*(int *)(DAT_00b33398 + 0x24) != 0) {
    FUN_006ac210();
    FUN_006ac330(0xffffffff);
  }
  cVar1 = FUN_0057ab70();
  if (cVar1 != '\0') {
    uVar4 = 1;
    uVar3 = 0;
    uVar2 = FUN_0057ac20(0,1);
    FUN_0066c6f0(uVar2,uVar3,uVar4);
  }
  return;
}



void FUN_00459a10(void)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  
  FUN_004599b0();
  iVar2 = FUN_00578fe0();
  if (iVar2 == 3) {
    iVar2 = FUN_00579060();
    if (iVar2 == 3) goto LAB_00459a33;
  }
  FUN_006b94e0();
  FUN_00579770();
LAB_00459a33:
  FUN_005791a0();
  FUN_005791e0();
  FUN_00579220();
  DAT_00b33b08 = GetTickCount();
  DVar3 = GetTickCount();
  if (DAT_00b33b08 + 3000 < DVar3) {
    cVar1 = FUN_0057bac0();
    if (cVar1 == '\0') {
      FUN_00440af0(1,0,0);
      return;
    }
    FUN_0057b950(0,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00459a90(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00589b70(0x3ef);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00578f20();
      FUN_0057b950(3,0x42c80000);
    }
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x2000;
  FUN_005732d0(2,_DAT_00b33a48);
  return;
}



int FUN_00459af0(uint param_1,char param_2)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  int *in_ECX;
  int *piVar12;
  bool bVar13;
  int local_90;
  int local_8c;
  int *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [4];
  uint local_6c [7];
  undefined1 local_50 [8];
  uint local_48;
  undefined1 local_2c [16];
  uint local_1c;
  
  local_90 = 0;
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0) {
    local_8c = 0;
    FUN_0055e000(param_1,&local_8c);
    iVar8 = local_8c;
    if (local_8c != 0) {
      if (*(int *)(local_8c + 4) == 0) {
        FUN_004524c0(param_1);
        iVar2 = *(int *)(iVar8 + 4);
        if (iVar2 != 0) {
          FUN_00401e40(iVar2);
        }
        FUN_00401f20(iVar8);
      }
      local_90 = 1;
    }
  }
  uVar11 = *(uint *)(*in_ECX + 4);
  uVar10 = 0;
  if (uVar11 != 0) {
    piVar3 = *(int **)(*in_ECX + 8);
    piVar12 = piVar3;
    do {
      if (*piVar12 != 0) {
        local_78 = piVar3[uVar10];
        goto joined_r0x00459b9a;
      }
      uVar10 = uVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar10 < uVar11);
  }
  local_78 = 0;
joined_r0x00459b9a:
  do {
    do {
      if (local_78 == 0) {
        if (param_2 == '\0') {
          cVar9 = FUN_0055e000(param_1,&local_88);
          if (cVar9 == '\0') {
            return local_90;
          }
          if (local_88[1] != 0) {
            return local_90;
          }
          if (*local_88 != 0) {
            return local_90;
          }
          FUN_004524c0(param_1);
        }
        else {
          cVar9 = FUN_0055e000(param_1,&local_88);
          if (cVar9 == '\0') {
            return local_90;
          }
          if (local_88[1] != 0) {
            return local_90;
          }
          if (*local_88 != 0) {
            return local_90;
          }
          FUN_004524c0(param_1);
        }
        FUN_00401f20(local_88);
        return local_90;
      }
      local_84 = (uint *)0x0;
      local_8c = 0;
      FUN_00452600(&local_78,&local_8c,&local_84);
      uVar11 = *local_84;
      uVar10 = local_84[1];
      in_ECX[5] = uVar10;
    } while (uVar10 == 0);
    puVar4 = (uint *)**(undefined4 **)(DAT_00b33b00 + 0x14);
    *(undefined4 **)(DAT_00b33b00 + 0x14) = *(undefined4 **)(DAT_00b33b00 + 0x14) + 1;
    iVar8 = DAT_00b33b00;
    local_84._2_1_ = (char)((uint)puVar4 >> 0x10);
    local_84 = puVar4;
    if ((param_2 == '\0') && (local_84._2_1_ == '0')) {
      local_84._3_1_ = (byte)((uint)puVar4 >> 0x18);
      if (local_84._3_1_ < 0x5b) {
        if (((uVar11 & 2) == 0) || ((uVar11 & 4) == 0)) {
          uVar1 = **(undefined2 **)(DAT_00b33b00 + 0x14);
          *(undefined2 **)(DAT_00b33b00 + 0x14) = *(undefined2 **)(DAT_00b33b00 + 0x14) + 1;
          local_74 = CONCAT22(local_74._2_2_,uVar1);
          uVar11 = FUN_00459990(local_74);
        }
        else {
          puVar5 = *(undefined4 **)(DAT_00b33b00 + 0x14);
          local_80 = puVar5[1];
          uVar6 = *puVar5;
          local_7c = puVar5[2];
          *(undefined4 **)(DAT_00b33b00 + 0x14) = puVar5 + 3;
          uVar11 = FUN_00459950(uVar6);
        }
        if (uVar11 == param_1) {
          FUN_00452df0(local_8c,1);
        }
      }
      else if ((uVar11 & 0x4000000) == 0) {
        if ((uVar11 & 0x2000000) != 0) {
          puVar5 = *(undefined4 **)(DAT_00b33b00 + 0x14);
          uVar6 = *puVar5;
          uVar1 = *(undefined2 *)(puVar5 + 1);
          *(int *)(DAT_00b33b00 + 0x14) = (int)puVar5 + 6;
          local_80 = CONCAT22(local_80._2_2_,uVar1);
          uVar11 = FUN_00459990(uVar6);
          if (uVar11 == param_1) {
            FUN_00452df0(local_8c,1);
          }
        }
      }
      else {
        uVar6 = **(undefined4 **)(DAT_00b33b00 + 0x14);
        *(undefined4 **)(DAT_00b33b00 + 0x14) = *(undefined4 **)(DAT_00b33b00 + 0x14) + 1;
        uVar11 = FUN_00459990(uVar6);
        if (uVar11 == param_1) {
          FUN_00452df0(local_8c,1);
        }
      }
    }
    else if ((local_84._2_1_ == '1') ||
            ((local_84._2_1_ == '2' || (bVar13 = local_84._2_1_ == '3', bVar13)))) {
      uVar10 = 0;
      if ((uVar11 & 2) == 0) {
        if ((uVar11 & 0xc) == 0) {
          if ((uVar11 & 0x800000) != 0) {
            uVar10 = **(uint **)(DAT_00b33b00 + 0x14);
            *(uint **)(DAT_00b33b00 + 0x14) = *(uint **)(DAT_00b33b00 + 0x14) + 1;
          }
        }
        else {
          pvVar7 = *(void **)(DAT_00b33b00 + 0x14);
          if ((int)uVar11 < 0) {
            _memcpy(local_2c,pvVar7,0x2c);
            *(int *)(iVar8 + 0x14) = (int)pvVar7 + 0x2c;
            uVar10 = local_1c;
          }
          else {
            _memcpy(local_6c,pvVar7,0x1c);
            *(int *)(iVar8 + 0x14) = (int)pvVar7 + 0x1c;
            uVar10 = local_6c[0];
          }
        }
      }
      else {
        pvVar7 = *(void **)(DAT_00b33b00 + 0x14);
        _memcpy(local_50,pvVar7,0x24);
        *(int *)(iVar8 + 0x14) = (int)pvVar7 + 0x24;
        uVar10 = local_48;
      }
      cVar9 = FUN_00446b80(uVar10);
      iVar8 = local_8c;
      if (cVar9 == '\0') {
        if (*(uint *)(in_ECX[0x1d] + 0xc) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = *(uint *)(*(int *)(in_ECX[0x1d] + 4) + uVar10 * 4);
        }
      }
      if (uVar10 == param_1) {
        if ((*(uint *)(DAT_00b33b00 + 0x18) >> 0xc & 1) == 0) {
          local_84 = (uint *)0x0;
          FUN_0055e000(local_8c,&local_84);
          puVar4 = local_84;
          if (local_84 != (uint *)0x0) {
            FUN_004524c0(iVar8);
            uVar11 = puVar4[1];
            if (uVar11 != 0) {
              FUN_00401e40(uVar11);
            }
            FUN_00401f20(puVar4);
          }
        }
        if (param_2 == '\0') {
          cVar9 = FUN_0055e000(param_1,&local_88);
          piVar3 = local_88;
          if (cVar9 != '\0') {
            for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
              piVar12 = (int *)*piVar3;
              if ((piVar12 != (int *)0x0) && (*piVar12 == iVar8)) {
                FUN_0065c620(piVar12);
                break;
              }
            }
          }
        }
        else {
          cVar9 = FUN_0055e000(param_1,local_70);
          if (cVar9 != '\0') {
            FUN_0065c620(iVar8);
          }
        }
        local_90 = local_90 + 1;
      }
    }
    in_ECX[5] = 0;
  } while( true );
}



undefined4 FUN_00459f30(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    cVar1 = FUN_004c97f0();
    if (cVar1 != '\0') {
      uVar2 = FUN_00459af0(*(undefined4 *)(param_1 + 0xc),1);
      return uVar2;
    }
    FUN_004a7a60("PurgeSavedDataForCell() can only be called on interiors, but it was just called on exterior cell %08X."
                 ,*(undefined4 *)(param_1 + 0xc));
  }
  return 0;
}



undefined4 FUN_00459f80(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = FUN_00459af0(*(undefined4 *)(param_1 + 0xc),0);
    return uVar1;
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00459fa0(int param_1)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float10 fVar4;
  undefined4 uVar5;
  
  if (param_1 != 0) {
    piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05940,0);
    if ((piVar2 != (int *)0x0) && (piVar2[0x16] != 0)) {
      uVar5 = 0x504d4156;
      (**(code **)(*piVar2 + 0x124))(0x504d4156);
      fVar4 = (float10)FUN_006a1f30(uVar5);
      fVar1 = (float)fVar4;
      if (fVar1 != 0.0) {
        pfVar3 = (float *)FUN_00401f00(4);
        if (pfVar3 != (float *)0x0) {
          *pfVar3 = 0.0;
          *pfVar3 = fVar1;
          return pfVar3;
        }
        _DAT_00000000 = fVar1;
        return (float *)0x0;
      }
    }
  }
  return (float *)0x0;
}



void FUN_0045a020(int param_1,float *param_2)

{
  int *piVar1;
  int *piVar2;
  float10 fVar3;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  if ((param_1 != 0) && (param_2 != (float *)0x0)) {
    piVar1 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05940,0);
    if ((piVar1 != (int *)0x0) && (piVar1[0x16] != 0)) {
      uVar7 = 0x504d4156;
      (**(code **)(*piVar1 + 0x124))(0x504d4156);
      fVar3 = (float10)FUN_006a1f30(uVar7);
      if ((*param_2 != 0.0) && ((float)fVar3 == 0.0)) {
        uVar8 = 0;
        ppuVar6 = &PTR_PTR_00b02fb4;
        ppuVar5 = &PTR_PTR_00b03de4;
        uVar4 = 0;
        uVar7 = FUN_005e02e0(0);
        piVar2 = (int *)FUN_009832e6(uVar7,uVar4,ppuVar5,ppuVar6,uVar8);
        (**(code **)(*piVar2 + 0x134))(0x45,0);
        FUN_0060e2e0(0);
        (**(code **)(*(int *)piVar1[0x16] + 0x5c))();
        if ((int *)piVar1[0x16] != (int *)0x0) {
          (**(code **)(*(int *)piVar1[0x16] + 0x31c))(1);
          DAT_00b33d80 = 1;
          (**(code **)(*(int *)piVar1[0x16] + 0x318))(piVar1);
          DAT_00b33d80 = 0;
          FUN_00401f20(param_2);
          return;
        }
      }
    }
    FUN_00401f20(param_2);
  }
  return;
}



void FUN_0045a140(byte param_1)

{
  int in_ECX;
  
  if (param_1 < 0x13) {
    FUN_004a7a60("Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i.  Errors may occur."
                 ,param_1,0x13);
  }
  *(byte *)(in_ECX + 0x7c) = param_1;
  return;
}



int FUN_0045a170(void)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)DAT_00b33b00 >> 8);
  if ((0x1e < *(byte *)(DAT_00b33b00 + 0x7c)) && (*(byte *)(DAT_00b33b00 + 0x7c) < 0x5a)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045a190(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int in_ECX;
  char *pcVar4;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  if (*(int *)(in_ECX + 0x1c0) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x1c0));
    *(undefined4 *)(in_ECX + 0x1c0) = 0;
  }
  if ((param_1 != 0) && (*(char *)(param_1 + 0x24) != '\0')) {
    pcVar4 = (char *)(param_1 + 0x3c);
    pcVar3 = _strstr(pcVar4,"\\");
    while (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3 + 1;
      pcVar3 = _strstr(pcVar4,"\\");
    }
    iVar2 = -(int)pcVar4;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(local_108 + iVar2)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = local_108;
    do {
      pcVar3 = pcVar4;
      pcVar4 = pcVar3 + 1;
    } while (*pcVar3 != '\0');
    pcVar3[-4] = '\0';
    pcVar4 = local_108;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar3 = (char *)thunk_FUN_00401aa0(pcVar4 + (1 - (int)(local_108 + 1)),1);
    *(char **)(in_ECX + 0x1c0) = pcVar3;
    pcVar4 = local_108;
    do {
      cVar1 = *pcVar4;
      *pcVar3 = cVar1;
      pcVar4 = pcVar4 + 1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  return;
}



void * FUN_0045a290(void *param_1)

{
  byte bVar1;
  int in_ECX;
  int *piVar2;
  
  bVar1 = **(byte **)(in_ECX + 0x14);
  *(byte **)(in_ECX + 0x14) = *(byte **)(in_ECX + 0x14) + 1;
  if (bVar1 != 0) {
    if (param_1 == (void *)0x0) {
      param_1 = (void *)FUN_00401f00(bVar1 + 1);
      _memset(param_1,0,bVar1 + 1);
    }
    else {
      _memset(param_1,0,0x104);
    }
  }
  piVar2 = (int *)(DAT_00b33b00 + 0x14);
  _memcpy(param_1,*(void **)(DAT_00b33b00 + 0x14),(uint)bVar1);
  *piVar2 = *piVar2 + (uint)bVar1;
  return param_1;
}



void FUN_0045a300(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int *piVar5;
  uint uVar6;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 != 0) {
    uVar6 = *(uint *)(iVar1 + 0xc);
    uVar4 = 0;
    if (uVar6 != 0) {
      piVar5 = *(int **)(iVar1 + 4);
      while ((piVar2 = (int *)*piVar5, piVar2 == (int *)0x0 || (*piVar2 != param_1))) {
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 1;
        if (uVar6 <= uVar4) {
          return;
        }
      }
      if (uVar4 < uVar6) {
        iVar3 = *(int *)(*(int *)(iVar1 + 4) + uVar4 * 4);
        *(undefined4 *)(*(int *)(iVar1 + 4) + uVar4 * 4) = 0;
        if (iVar3 != 0) {
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
        }
        uVar6 = *(int *)(iVar1 + 0xc) - 1;
        if (uVar4 == uVar6) {
          *(uint *)(iVar1 + 0xc) = uVar6;
        }
      }
      FUN_00401f20(piVar2);
    }
  }
  return;
}



uint FUN_0045a380(void)

{
  float fVar1;
  char cVar2;
  uint in_EAX;
  int iVar3;
  int iVar4;
  char *_Str1;
  uint uVar5;
  DWORD DVar6;
  int in_ECX;
  uint uVar7;
  undefined1 uVar8;
  float10 fVar9;
  int in_stack_00000010;
  int in_stack_00000014;
  char *_Str2;
  
  uVar8 = 0;
  if (*(char *)(in_ECX + 0xa9) == '\0') {
    if (in_stack_00000014 != 0) {
      iVar3 = FUN_009828c0();
      iVar3 = iVar3 >> 0xc;
      iVar4 = FUN_009828c0(iVar3);
      in_stack_00000010 = FUN_004efe80(iVar4 >> 0xc,iVar3);
    }
    if ((in_stack_00000010 == 0) || (cVar2 = FUN_0043f8c0(in_stack_00000010,0), cVar2 == '\0')) {
      uVar8 = 1;
    }
    _Str2 = (char *)(in_ECX + 0xb0);
    _Str1 = (char *)FUN_004da2a0();
    iVar3 = __stricmp(_Str1,_Str2);
    if (iVar3 != 0) {
      uVar8 = 1;
    }
    uVar5 = FUN_005e1fd0();
    iVar3 = DAT_00b333c4;
    uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(in_ECX + 0x1b4);
    uVar7 = (int)uVar5 >> 0x1f;
    if (2 < (int)((uVar5 ^ uVar7) - uVar7)) {
      uVar8 = 1;
    }
    DVar6 = GetTickCount();
    *(int *)(iVar3 + 0x714) = *(int *)(iVar3 + 0x714) + (DVar6 - *(int *)(iVar3 + 0x710));
    DVar6 = GetTickCount();
    *(DWORD *)(iVar3 + 0x710) = DVar6;
    uVar5 = *(int *)(iVar3 + 0x714) - *(int *)(in_ECX + 0x1bc);
    uVar7 = (int)uVar5 >> 0x1f;
    if (3600000 < (int)((uVar5 ^ uVar7) - uVar7)) {
      uVar8 = 1;
    }
    fVar9 = (float10)FUN_00402bd0();
    iVar3 = FUN_00402c00();
    fVar1 = (float)iVar3;
    if (iVar3 < 0) {
      fVar1 = fVar1 + 4.2949673e+09;
    }
    fVar1 = ABS((fVar1 + (float)(fVar9 / (float10)24.0)) - *(float *)(in_ECX + 0x1b8));
    if (fVar1 < 2.0 == 0 && (fVar1 == 2.0) == 0) {
      uVar8 = 1;
    }
    return CONCAT31((int3)(CONCAT22((short)((uint)iVar3 >> 0x10),
                                    (ushort)(fVar1 < 2.0) << 8 | (ushort)NAN(fVar1) << 10 |
                                    (ushort)(fVar1 == 2.0) << 0xe) >> 8),uVar8);
  }
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  return in_EAX & 0xffffff00;
}



void FUN_0045a4e0(void)

{
  FUN_00579c10(DAT_00b38740,0,0,&DAT_00a2f7ec,0);
  return;
}



uint FUN_0045a500(void)

{
  DWORD DVar1;
  DWORD DVar2;
  int in_ECX;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar2 = GetCurrentThreadId();
  if (DVar2 == DVar1) {
    return CONCAT31((int3)(DVar2 >> 8),*(undefined1 *)(in_ECX + 0x18)) & 0xffffff01;
  }
  return *(uint *)(in_ECX + 0x18) >> 0x12 & 0xffffff01;
}



void FUN_0045a530(char param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  int in_ECX;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar2 = GetCurrentThreadId();
  if (DVar2 != DVar1) {
    if (param_1 != '\0') {
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x40000;
      return;
    }
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
    return;
  }
  if (param_1 != '\0') {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 1;
    return;
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
  return;
}



void FUN_0045a580(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3904c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0045a5a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3906c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_0045a5c0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3904c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a5f0(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a3906c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a620(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae178;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a26c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a38fbc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045a690(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae1a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a28c;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a38fdc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045a700(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae1d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a2ac;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a38ffc;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045a770(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae208;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a2cc;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3901c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045a7e0(byte param_1)

{
  FUN_0045a620();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a800(byte param_1)

{
  FUN_0045a690();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a820(byte param_1)

{
  FUN_0045a700();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a840(byte param_1)

{
  FUN_0045a770();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045a860(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x13af;
  *in_ECX = &PTR_FUN_00a38fbc;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x4ebc);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FID_conflict__scalar_deleting_destructor__00a3a2ec;
  return;
}



void FUN_0045a8b0(void)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  int *piVar3;
  int local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar2 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar3 = *(int **)(in_ECX + 8);
    do {
      if (*piVar3 != 0) {
        local_8 = (*(int **)(in_ECX + 8))[uVar2];
        goto joined_r0x0045a8dc;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < *(uint *)(in_ECX + 4));
  }
  local_8 = 0;
joined_r0x0045a8dc:
  while (local_8 != 0) {
    local_c = 0;
    FUN_00452600(&local_8,local_4,&local_c);
    iVar1 = local_c;
    if (local_c != 0) {
      if (*(int *)(local_c + 4) != 0) {
        FUN_00401e40(*(int *)(local_c + 4));
      }
      FUN_00401f20(iVar1);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_0045a940(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a38fdc;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3a310;
  return;
}



void FUN_0045a990(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  undefined4 *local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae238;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a310;
  uVar4 = 0;
  local_4 = 0;
  if (in_ECX[1] != 0) {
    piVar5 = (int *)in_ECX[2];
    do {
      if (*piVar5 != 0) {
        local_18[0] = ((int *)in_ECX[2])[uVar4];
        goto joined_r0x0045a9f2;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  local_18[0] = 0;
joined_r0x0045a9f2:
  while (local_18[0] != 0) {
    local_1c = (undefined4 *)0x0;
    FUN_00452600(local_18,local_10,&local_1c);
    puVar2 = local_1c;
    if (local_1c != (undefined4 *)0x0) {
      iVar1 = local_1c[1];
      while (iVar1 != 0) {
        iVar1 = *(int *)(puVar2[1] + 4);
        FUN_00401f20(puVar2[1]);
        puVar2[1] = iVar1;
      }
      *puVar2 = 0;
      FUN_00401f20(puVar2);
    }
  }
  FUN_007c2a40(uVar3);
  local_4 = 0xffffffff;
  FUN_0045a690();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045aa80(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a38ffc;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3a330;
  return;
}



void FUN_0045aad0(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int *local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae268;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a330;
  uVar4 = 0;
  local_4 = 0;
  if (in_ECX[1] != 0) {
    piVar5 = (int *)in_ECX[2];
    do {
      if (*piVar5 != 0) {
        local_18[0] = ((int *)in_ECX[2])[uVar4];
        goto joined_r0x0045ab32;
      }
      uVar4 = uVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar4 < (uint)in_ECX[1]);
  }
  local_18[0] = 0;
joined_r0x0045ab32:
  while (local_18[0] != 0) {
    local_1c = (int *)0x0;
    FUN_00452600(local_18,local_10,&local_1c);
    piVar5 = local_1c;
    piVar6 = local_1c;
    if (local_1c != (int *)0x0) {
      do {
        if (*piVar6 != 0) {
          FUN_00401f20(*piVar6);
        }
        piVar1 = piVar6 + 1;
        piVar6 = (int *)*piVar1;
      } while ((int *)*piVar1 != (int *)0x0);
      iVar2 = piVar5[1];
      while (iVar2 != 0) {
        iVar2 = *(int *)(piVar5[1] + 4);
        FUN_00401f20(piVar5[1]);
        piVar5[1] = iVar2;
      }
      *piVar5 = 0;
      FUN_00401f20(piVar5);
    }
  }
  FUN_007c2a40(uVar3);
  local_4 = 0xffffffff;
  FUN_0045a700();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045abe0(void)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a3901c;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3a350;
  return;
}



void FUN_0045ac30(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *piVar3;
  int *unaff_FS_OFFSET;
  int local_1c;
  int local_18 [2];
  undefined1 local_10 [4];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae298;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3a350;
  uVar2 = 0;
  local_4 = 0;
  if (in_ECX[1] != 0) {
    piVar3 = (int *)in_ECX[2];
    do {
      if (*piVar3 != 0) {
        local_18[0] = ((int *)in_ECX[2])[uVar2];
        goto joined_r0x0045ac8c;
      }
      uVar2 = uVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (uVar2 < (uint)in_ECX[1]);
  }
  local_18[0] = 0;
joined_r0x0045ac8c:
  while (local_18[0] != 0) {
    local_1c = 0;
    FUN_00452600(local_18,local_10,&local_1c);
    if (local_1c != 0) {
      FUN_00401e40(local_1c);
    }
  }
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  FUN_0045a770();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045ad00(undefined4 *param_1)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (undefined4 *)FUN_00401f00(0xc);
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  puVar3[2] = param_1[2];
  param_1 = (undefined4 *)CONCAT31(param_1._1_3_,*(undefined1 *)(puVar3 + 1));
  uVar1 = param_1;
  cVar2 = FUN_004527a0(param_1,&param_1);
  if (cVar2 != '\0') {
    FUN_00416650(puVar3,&LAB_00452150);
    return;
  }
  puVar4 = (undefined4 *)FUN_00401f00(8);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[1] = 0;
    FUN_00452710(uVar1,puVar4);
    FUN_00416650(puVar3,&LAB_00452150);
    return;
  }
  FUN_00452710(uVar1,0);
  FUN_00416650(puVar3,&LAB_00452150);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045adc0(LPCSTR param_1)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  HANDLE hFile;
  char *pcVar6;
  uint uVar7;
  int *piVar8;
  DWORD DVar9;
  undefined4 uVar10;
  int *in_ECX;
  int iVar11;
  ushort uVar12;
  int *piVar13;
  ushort uVar14;
  char *pcVar15;
  bool bVar16;
  undefined8 uVar17;
  undefined1 auStack_554 [3];
  char cStack_551;
  char *pcStack_550;
  int iStack_54c;
  int iStack_548;
  ushort uStack_544;
  ushort uStack_542;
  int iStack_540;
  int iStack_53c;
  ushort uStack_538;
  ushort uStack_536;
  int *piStack_534;
  DWORD DStack_530;
  int *local_52c;
  int iStack_528;
  HANDLE pvStack_524;
  DWORD DStack_520;
  int *piStack_51c;
  DWORD DStack_518;
  DWORD DStack_514;
  char acStack_510 [12];
  char acStack_504 [520];
  CHAR local_2fc [260];
  undefined1 auStack_1f8 [500];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_554;
  local_52c = in_ECX;
  lstrcpyA(local_2fc,param_1);
  lstrcatA(local_2fc,".txt");
  iVar11 = 0;
  if ((DAT_00b33a04 != (int *)0x0) &&
     (iVar5 = (**(code **)(*DAT_00b33a04 + 4))(local_2fc,0,0,0xffffffff), iVar5 != 0)) {
    DeleteFileA(local_2fc);
  }
  hFile = CreateFileA(local_2fc,0xc0000000,0,(LPSECURITY_ATTRIBUTES)0x0,4,0x80,(HANDLE)0x0);
  if (hFile != (HANDLE)0xffffffff) {
    uStack_542 = 0;
    iStack_548 = 0;
    iStack_54c = 0;
    uStack_544 = 0xffff;
    pvStack_524 = hFile;
    _sprintf(acStack_504,"  %-8s %-5s %-8s %02s %-40s  %s\r\n\r\n","Form ID",&DAT_00a363b8,"Flags",
             &DAT_00a3a4c8,&DAT_00a363d4,"Changes");
    pcVar6 = acStack_504;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_520,(LPOVERLAPPED)0x0);
    uVar3 = *(uint *)(*in_ECX + 4);
    uVar7 = 0;
    if (uVar3 != 0) {
      piVar8 = *(int **)(*in_ECX + 8);
      piVar13 = piVar8;
      do {
        if (*piVar13 != 0) {
          iStack_528 = piVar8[uVar7];
          goto joined_r0x0045aef6;
        }
        uVar7 = uVar7 + 1;
        piVar13 = piVar13 + 1;
      } while (uVar7 < uVar3);
    }
    iStack_528 = 0;
joined_r0x0045aef6:
    while (iStack_528 != 0) {
      FUN_00452800(&iStack_528,&cStack_551,&piStack_51c);
      piVar8 = piStack_51c;
      piStack_534 = piStack_51c;
      if (cStack_551 == '\0') {
        _sprintf(acStack_510,"Form");
      }
      else if (cStack_551 == 'E') {
        _sprintf(acStack_510,"Buffer");
      }
      else {
        _sprintf(acStack_510,"%s");
      }
      _sprintf(acStack_504,"%ss:\r\n\r\n");
      pcVar6 = acStack_504;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      uVar12 = 0;
      WriteFile(hFile,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_518,(LPOVERLAPPED)0x0
               );
      uVar14 = 0xffff;
      uStack_536 = 0;
      iStack_53c = 0;
      iStack_540 = 0;
      uStack_538 = 0xffff;
      while (piVar8 != (int *)0x0) {
        puVar4 = (undefined4 *)*piStack_534;
        if (puVar4 != (undefined4 *)0x0) {
          piVar8 = (int *)FUN_0046b250();
          uVar2 = *(ushort *)((int)puVar4 + 10);
          if (uVar12 < uVar2) {
            uStack_536 = uVar2;
          }
          if (uVar2 < uVar14) {
            uStack_538 = uVar2;
          }
          iStack_540 = iStack_540 + 1;
          iStack_53c = iStack_53c + (uint)uVar2;
          FUN_00453a90(auStack_1f8,piVar8,*(undefined4 *)((int)puVar4 + 5),
                       *(undefined1 *)(puVar4 + 1));
          pcVar6 = (char *)0x0;
          pcStack_550 = (char *)0x0;
          DVar9 = FUN_009832e6(piVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03298);
          DStack_520 = DVar9;
          iVar11 = FUN_009832e6(piVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
          if (piVar8 == (int *)0x0) {
            uVar17 = CONCAT44(auStack_1f8,"NOT LOADED");
          }
          else {
            if (iVar11 != 0) {
              pcVar6 = (char *)FUN_004da2a0();
              pcStack_550 = pcVar6;
            }
            if (DVar9 != 0) {
              if (pcVar6 != (char *)0x0) {
                iVar11 = 1;
                bVar16 = true;
                pcVar15 = "";
                do {
                  if (iVar11 == 0) break;
                  iVar11 = iVar11 + -1;
                  bVar16 = *pcVar6 == *pcVar15;
                  pcVar6 = pcVar6 + 1;
                  pcVar15 = pcVar15 + 1;
                } while (bVar16);
                pcVar6 = pcStack_550;
                DVar9 = DStack_520;
                if (!bVar16) goto LAB_0045b0aa;
              }
              pcVar6 = *(char **)(DVar9 + 4);
              pcStack_550 = pcVar6;
              if (pcVar6 == (char *)0x0) {
                pcVar6 = "";
                pcStack_550 = pcVar6;
              }
            }
LAB_0045b0aa:
            if (pcVar6 != (char *)0x0) {
              iVar11 = 1;
              bVar16 = true;
              pcVar15 = "";
              do {
                if (iVar11 == 0) break;
                iVar11 = iVar11 + -1;
                bVar16 = *pcVar6 == *pcVar15;
                pcVar6 = pcVar6 + 1;
                pcVar15 = pcVar15 + 1;
              } while (bVar16);
              if (!bVar16) {
                uVar17 = CONCAT44(auStack_1f8,pcStack_550);
                goto LAB_0045b0f2;
              }
            }
            uVar10 = (**(code **)(*piVar8 + 0xd4))();
            uVar17 = CONCAT44(auStack_1f8,uVar10);
          }
LAB_0045b0f2:
          _sprintf(acStack_504,"  %08X %5i %08X %2i %-40s- %s\r\n",*puVar4,
                   (uint)*(ushort *)((int)puVar4 + 10),*(undefined4 *)((int)puVar4 + 5),
                   (uint)*(byte *)((int)puVar4 + 9),uVar17);
          pcVar6 = acStack_504;
          do {
            cVar1 = *pcVar6;
            pcVar6 = pcVar6 + 1;
          } while (cVar1 != '\0');
          WriteFile(pvStack_524,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_514,
                    (LPOVERLAPPED)0x0);
          hFile = pvStack_524;
          uVar14 = uStack_538;
          uVar12 = uStack_536;
        }
        piStack_534 = (int *)piStack_534[1];
        piVar8 = piStack_534;
      }
      _sprintf(acStack_504,
               "\r\nTotal %s Num: %i  Total %s Size: %i  Min %s Size: %i  Max %s Size: %i  Average %s Size: %.2f\r\n\r\n"
               ,acStack_510,iStack_540,acStack_510,iStack_53c,acStack_510,(uint)uVar14,acStack_510,
               (uint)uVar12,acStack_510,(double)iStack_53c / (double)iStack_540);
      pcVar6 = acStack_504;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_530,(LPOVERLAPPED)0x0
               );
      if (uStack_542 < uVar12) {
        uStack_542 = uVar12;
      }
      if (uVar14 < uStack_544) {
        uStack_544 = uVar14;
      }
      iVar11 = iStack_548 + iStack_53c;
      iStack_54c = iStack_54c + iStack_540;
      in_ECX = local_52c;
      iStack_548 = iVar11;
    }
    WriteFile(hFile,"Extra Stats:\r\n\r\n",0x10,&DStack_530,(LPOVERLAPPED)0x0);
    iVar5 = iStack_548;
    for (piVar8 = (int *)in_ECX[1]; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
      piVar13 = (int *)*piVar8;
      if (piVar13 != (int *)0x0) {
        _sprintf(acStack_504,"  %8i      %s\r\n",*piVar13);
        pcVar6 = acStack_504;
        do {
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 != '\0');
        WriteFile(hFile,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_530,
                  (LPOVERLAPPED)0x0);
        iVar11 = iVar11 + *piVar13;
      }
      iVar5 = iVar11;
    }
    iStack_548 = iVar5;
    _sprintf(acStack_504,
             "\r\n\r\nTotal Num: %i  Total Size: %i  Min Size: %i  Max Size: %i  Average Size: %.2f\r\n"
             ,iStack_54c,iVar11,(uint)uStack_544,(uint)uStack_542,(double)iVar5 / (double)iStack_54c
            );
    pcVar6 = acStack_504;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    WriteFile(hFile,acStack_504,(int)pcVar6 - (int)(acStack_504 + 1),&DStack_530,(LPOVERLAPPED)0x0);
    CloseHandle(hFile);
  }
  return;
}



void FUN_0045b300(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae32e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(unaff_FS_OFFSET[0xb] + _tls_index * 4);
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  *(undefined1 *)((int)in_ECX + 0x7d) = 1;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = 0;
  in_ECX[0x29] = 0;
  *(undefined1 *)(in_ECX + 0x2a) = 0;
  *(undefined1 *)((int)in_ECX + 0xa9) = 0;
  *(undefined1 *)((int)in_ECX + 0xaa) = 0;
  *(undefined1 *)((int)in_ECX + 0xab) = 0;
  in_ECX[0x2b] = 0;
  in_ECX[0x70] = 0;
  DAT_00b33b00 = in_ECX;
  *(undefined1 *)(iVar1 + 0x185) = 0;
  local_10 = (undefined4 *)FUN_00401f00(0x10,uVar2);
  local_4 = 0;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045a860();
  }
  local_4 = 0xffffffff;
  *in_ECX = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10,uVar2);
  local_4 = 1;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045a940();
  }
  local_4 = 0xffffffff;
  in_ECX[2] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10,uVar2);
  local_4 = 2;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045aa80();
  }
  local_4 = 0xffffffff;
  in_ECX[3] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10);
  local_4 = 3;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045aa80();
  }
  local_4 = 0xffffffff;
  in_ECX[4] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10);
  local_4 = 4;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045abe0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x15] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10);
  local_4 = 5;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045abe0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x16] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10);
  local_4 = 6;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045abe0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x17] = uVar3;
  local_10 = (undefined4 *)FUN_00401f00(0x10);
  local_4 = 7;
  if (local_10 == (undefined4 *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045abe0();
  }
  local_4 = 0xffffffff;
  in_ECX[0x18] = uVar3;
  puVar4 = (undefined4 *)FUN_00401f00(0x18);
  local_4 = 8;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = 100;
    *puVar4 = &PTR__scalar_deleting_destructor__00a39044;
    puVar4[5] = 0x32;
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_10 = puVar4;
    uVar3 = FUN_00401f00(400);
    puVar4[1] = uVar3;
  }
  in_ECX[0x1d] = puVar4;
  local_4 = 0xffffffff;
  local_10 = (undefined4 *)0x0;
  if (puVar4[2] == 0) {
    FUN_00452910(puVar4[5]);
  }
  FUN_00446c50(0,&local_10);
  puVar4 = (undefined4 *)FUN_00401f00(0x18);
  local_4 = 9;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4[2] = 5;
    *puVar4 = &PTR__scalar_deleting_destructor__00a39044;
    puVar4[5] = 1;
    puVar4[3] = 0;
    puVar4[4] = 0;
    local_10 = puVar4;
    uVar3 = FUN_00401f00(0x14);
    puVar4[1] = uVar3;
  }
  in_ECX[0x1e] = puVar4;
  local_4 = 0xffffffff;
  local_10 = (undefined4 *)0x0;
  if (puVar4[2] == 0) {
    FUN_00452910(puVar4[5]);
  }
  FUN_00446c50(0,&local_10);
  in_ECX[0x25] = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 0x7d;
  *(undefined1 *)(in_ECX + 0x1f) = 0x7d;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045b670(int param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  int unaff_FS_OFFSET;
  
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if ((((*(char *)(iVar1 + 0x185) != '\0') && (*(char *)(iVar1 + 0x184) == '\0')) &&
      (*(char *)(DAT_00b33a98 + 0xcd4) == '\0')) && ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0)) {
    cVar2 = FUN_0045a500();
    if (cVar2 == '\0') {
      FUN_00452c20(param_1,param_2);
    }
    else if (((*(uint *)(in_ECX + 0x18) >> 3 & 1) != 0) && (*(int *)(in_ECX + 4) != 0)) {
      FUN_00452c20(param_1,param_2);
      return;
    }
  }
  return;
}



void FUN_0045b700(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  byte bVar2;
  DWORD DVar3;
  int in_ECX;
  
  if ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0) {
    DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
    DVar3 = GetCurrentThreadId();
    if (DVar3 == DVar1) {
      bVar2 = *(byte *)(in_ECX + 0x18);
    }
    else {
      bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
    }
    if ((bVar2 & 1) != 0) {
      if (*(int *)(in_ECX + 4) != 0) {
        FUN_00452c20(param_1,param_2);
        return;
      }
      FUN_00452c20(param_1,param_2);
      return;
    }
    FUN_00452c20(param_1,param_2);
  }
  return;
}



void FUN_0045b780(int param_1)

{
  if ((*(uint *)(param_1 + 8) >> 0xe & 1) == 0) {
    FUN_00452df0();
    return;
  }
  return;
}



void FUN_0045b7a0(undefined4 param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  
  piVar3 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  piVar4 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05468,0);
  if (piVar3 == (int *)0x0) {
    if (piVar4 == (int *)0x0) {
      return;
    }
    if (piVar4[0x16] == 0) {
      return;
    }
    (**(code **)(*piVar4 + 0x48))(0x8000000);
    return;
  }
  piVar4 = (int *)piVar3[0xf];
  iVar7 = 0;
  if (piVar4 != (int *)0x0) {
    iVar7 = (**(code **)(*piVar4 + 8))();
  }
  piVar5 = (int *)FUN_009832e6(piVar3,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if ((param_2 & 0x2000000) != 0) {
    if (piVar5 == (int *)0x0) {
      if (((iVar7 == 0) || (iVar7 = FUN_00405790(0), iVar7 == 0)) ||
         (iVar7 = FUN_00405790(0), *(int *)(iVar7 + 0xc) == 0)) goto LAB_0045b867;
      iVar7 = *piVar3;
    }
    else {
      iVar7 = (**(code **)(*piVar5 + 0x164))();
      if (iVar7 == 0) goto LAB_0045b867;
      iVar7 = *piVar5;
    }
    (**(code **)(iVar7 + 0x48))(0x2000000);
  }
LAB_0045b867:
  if (((param_2 & 8) != 0) && (piVar5 == (int *)0x0)) {
    FUN_004d8f20(piVar4);
  }
  if ((((param_2 & 0x20000000) != 0) && (piVar5 != (int *)0x0)) &&
     ((piVar4 != (int *)0x0 && (puVar6 = (undefined4 *)FUN_0041e6f0(), puVar6 != (undefined4 *)0x0))
     )) {
    piVar3 = (int *)*puVar6;
    bVar1 = false;
    do {
      if (piVar3 == (int *)0x0) {
        if (!bVar1) {
          return;
        }
        break;
      }
      puVar6 = (undefined4 *)*piVar3;
      if ((((puVar6 != (undefined4 *)0x0) && (cVar2 = FUN_00484e80(0), cVar2 != '\0')) &&
          (iVar7 = puVar6[2], iVar7 != 0)) &&
         ((*(char *)(iVar7 + 4) == '\x16' || (*(char *)(iVar7 + 4) == '\x14')))) {
        FUN_004691b0(iVar7);
        cVar2 = FUN_00468ff0(7,0);
        if (((cVar2 == '\0') &&
            ((cVar2 = FUN_00468ff0(6,0), cVar2 == '\0' && (cVar2 = FUN_00468ff0(8,0), cVar2 == '\0')
             ))) && (cVar2 = FUN_00468ff0(0xd,0), cVar2 == '\0')) {
          for (piVar4 = (int *)*puVar6; (!bVar1 && (piVar4 != (int *)0x0));
              piVar4 = (int *)piVar4[1]) {
            if ((*piVar4 != 0) && (iVar7 = FUN_0041e850(), iVar7 != 0)) {
              bVar1 = true;
            }
          }
        }
      }
      piVar3 = (int *)piVar3[1];
    } while (!bVar1);
    (**(code **)(*piVar5 + 0x48))(0x20000000);
  }
  return;
}



void FUN_0045b9a0(void *param_1,size_t param_2)

{
  DWORD DVar1;
  byte bVar2;
  DWORD DVar3;
  int in_ECX;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar3 = GetCurrentThreadId();
  if (DVar3 == DVar1) {
    bVar2 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  }
  _memcpy(*(void **)(in_ECX + 0x14),param_1,param_2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return;
}



undefined1 FUN_0045ba00(void *param_1,uint param_2)

{
  undefined1 uVar1;
  char cVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  
  uVar1 = 0;
  _memcpy(param_1,*(void **)(in_ECX + 0x14),param_2);
  if (*(char *)(in_ECX + 0x7d) == '\0') {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
    return 0;
  }
  uVar3 = 0;
  if (param_2 >> 2 == 0) {
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
    return 0;
  }
  do {
    uVar4 = *(uint *)((int)param_1 + uVar3 * 4);
    cVar2 = FUN_00446b80(uVar4);
    if (cVar2 == '\0') {
      if (*(uint *)(*(int *)(in_ECX + 0x74) + 0xc) < uVar4) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(*(int *)(*(int *)(in_ECX + 0x74) + 4) + uVar4 * 4);
      }
    }
    if ((*(int *)((int)param_1 + uVar3 * 4) != 0) && (uVar4 == 0)) {
      uVar1 = 1;
    }
    *(uint *)((int)param_1 + uVar3 * 4) = uVar4;
    uVar3 = uVar3 + 1;
  } while (uVar3 < param_2 >> 2);
  *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + param_2;
  return uVar1;
}



void FUN_0045bab0(int param_1,undefined4 param_2,int param_3)

{
  int in_ECX;
  undefined4 local_4;
  
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) != 0) {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + param_3;
    return;
  }
  local_4 = 1;
  (**(code **)(param_1 + 8))(param_1,param_2,param_3,&local_4,1);
  return;
}



void FUN_0045bb00(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_4;
  
  local_4 = 1;
  (**(code **)(param_1 + 4))(param_1,param_2,param_3,&local_4,1);
  return;
}



bool FUN_0045bb30(int *param_1,char param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int in_ECX;
  undefined4 *puVar10;
  int unaff_FS_OFFSET;
  bool local_46;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [36];
  
  iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar1 = *(undefined1 *)(iVar2 + 0x185);
  *(undefined1 *)(iVar2 + 0x185) = 0;
  local_46 = false;
  cVar5 = (**(code **)(*param_1 + 400))();
  if (cVar5 == '\0') {
LAB_0045bc26:
    if (param_1 == (int *)0xffffffbc) goto LAB_0045bdb6;
    iVar6 = FUN_0041e210(0x14);
    local_46 = iVar6 != 0;
    if (local_46) {
      (**(code **)(*param_1 + 0xf4))(&uStack_3c);
      (**(code **)(*param_1 + 0xf0))(&uStack_34);
      FUN_004d8a30(uStack_3c,uStack_38,uStack_34);
      FUN_004d89a0(uStack_30,uStack_2c,uStack_28);
    }
    iVar6 = FUN_0041f7f0();
    if (iVar6 != 0) {
      iVar7 = FUN_009832e6(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
      iVar6 = FUN_009832e6(iVar6,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
      if ((iVar7 != 0) || (iVar6 != 0)) {
        FUN_004dd4b0(param_1,iVar7,iVar6);
        local_46 = true;
        goto LAB_0045bd04;
      }
    }
    if (!local_46) goto LAB_0045bdb6;
  }
  else {
    cVar5 = FUN_005e0260();
    if (cVar5 == '\0') goto LAB_0045bc26;
    iVar6 = FUN_005e1f60();
    iVar7 = FUN_005e1f40();
    if ((iVar6 == 0) && (iVar7 == 0)) goto LAB_0045bdb6;
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0xf4))(&uStack_30);
    FUN_004d8a30(*puVar8,puVar8[1],puVar8[2]);
    iVar9 = (**(code **)(*param_1 + 0xf0))(&uStack_34);
    FUN_004d8a10(*(undefined4 *)(iVar9 + 8));
    if (param_2 != '\0') {
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x20;
    }
    FUN_004dd4b0(param_1,iVar6,iVar7);
    if (param_2 != '\0') {
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffffdf;
    }
    local_46 = true;
  }
LAB_0045bd04:
  iVar6 = param_1[0xf];
  if (iVar6 != 0) {
    puVar8 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uVar3 = *puVar8;
    uVar4 = puVar8[1];
    uStack_34 = puVar8[2];
    uStack_3c = uVar3;
    uStack_38 = uVar4;
    iVar7 = FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b05538,0);
    if (iVar7 != 0) {
      iVar7 = FUN_0065a2c0();
      if (iVar7 != 0) {
        iVar7 = FUN_0088d370();
        if (iVar7 != 4) {
          FUN_00452a10(&uStack_3c);
        }
      }
    }
    *(undefined4 *)(iVar6 + 0x54) = uVar3;
    *(undefined4 *)(iVar6 + 0x58) = uVar4;
    *(undefined4 *)(iVar6 + 0x5c) = uStack_34;
    puVar8 = (undefined4 *)FUN_004d7af0(auStack_24);
    puVar10 = (undefined4 *)(iVar6 + 0x30);
    for (iVar7 = 9; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    }
    FUN_00897a20(iVar6,1);
    FUN_00707370(0,0);
  }
LAB_0045bdb6:
  *(undefined1 *)(iVar2 + 0x185) = uVar1;
  return local_46;
}



int FUN_0045bde0(int param_1,uint param_2,byte param_3)

{
  undefined1 uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  int in_ECX;
  int iVar9;
  int unaff_FS_OFFSET;
  
  iVar9 = 0;
  for (piVar5 = (int *)(param_1 + 0x10); piVar5 != (int *)0x0; piVar5 = (int *)piVar5[1]) {
    if (*piVar5 != 0) {
      iVar9 = iVar9 + 1;
    }
  }
  piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (((piVar5 != (int *)0x0) && (iVar9 != 0)) &&
     (cVar3 = FUN_0045bb30(piVar5,(param_3 & 0xc) != 0), cVar3 != '\0')) {
    param_2 = param_2 & 0x7ffffff3;
  }
  iVar6 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
  if (iVar6 != 0) {
    FUN_005eae70();
    FUN_005e9690();
  }
  if ((piVar5 != (int *)0x0) && (iVar6 = (**(code **)piVar5[6])(), iVar6 == 0)) {
    iVar6 = piVar5[3];
    uVar7 = (**(code **)(*piVar5 + 0xd4))();
    FUN_004a7a60("Trying to reset object %08X %s, but the reference has no save parent cell.",iVar6,
                 uVar7);
    return iVar9;
  }
  if (((param_2 != 0) && (iVar9 != 0)) &&
     ((cVar3 = *(char *)(param_1 + 4), *(char *)(in_ECX + 0xa8) == '\0' ||
      ((((piVar5 != (int *)0x0 && (cVar4 = FUN_004db4a0(), cVar4 == '\0')) || (cVar3 == '(')) ||
       (cVar3 == '\x19')))))) {
    piVar8 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0);
    if (((piVar8 != (int *)0x0) && (iVar6 = (**(code **)(*piVar8 + 0x380))(), iVar6 != 0)) &&
       ((piVar8[0xf] != 0 && (*(int *)(iVar6 + 0x3c) != 0)))) {
      FUN_005f0410();
    }
    iVar6 = FUN_0046b680(0xffffffff);
    if (((iVar6 != 0) && (iVar6 = FUN_004520f0(), iVar6 != 0)) &&
       (cVar3 = FUN_00451920(param_1), cVar3 != '\0')) {
      DAT_00b33a9c = 0;
      if (((*(byte *)(param_1 + 4) - 0x31 < 3) && (piVar5 != (int *)0x0)) &&
         ((piVar8 == (int *)0x0 || (DAT_00b33a9c = FUN_005e1f60(), DAT_00b33a9c == 0)))) {
        DAT_00b33a9c = (**(code **)piVar5[6])();
      }
      iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      uVar1 = *(undefined1 *)(iVar2 + 0x184);
      *(undefined1 *)(iVar2 + 0x184) = 1;
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 4;
      FUN_0044dcf0(iVar6,0);
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffb;
      *(undefined1 *)(iVar2 + 0x184) = uVar1;
      DAT_00b33a9c = 0;
      return iVar9;
    }
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("Form could not be found in file during ResetObject() call.\n");
  }
  return iVar9;
}



undefined1 FUN_0045c020(undefined4 param_1,byte param_2,char param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  undefined4 uVar11;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar12;
  undefined4 uVar13;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae35b;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar6 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0,uVar5);
  piVar7 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05538,0);
  if ((piVar7 != (int *)0x0) && (piVar7[0x16] == 0)) {
    iVar8 = FUN_00401f00(0x90);
    local_4 = 0;
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = FUN_006438f0();
    }
    piVar7[0x16] = iVar8;
    local_4 = 0xffffffff;
    cVar3 = (**(code **)(*piVar7 + 0x1c4))();
    uVar4 = 0;
    if (cVar3 == '\0') goto LAB_0045c260;
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 8;
  if (piVar6 != (int *)0x0) {
    iVar8 = FUN_004d6d40();
    if (iVar8 != 0) {
      (**(code **)(*piVar6 + 0x184))(0);
    }
    iVar8 = FUN_006ecc80();
    cVar3 = FUN_004db4a0();
    if (((cVar3 == '\0') || (piVar6 == DAT_00b333c4)) ||
       ((iVar8 != 0 && (cVar3 = FUN_004d7030(), cVar3 == '\0')))) {
      if ((((uint)piVar6[2] >> 0xb & 1) == 0) && (((uint)piVar6[2] >> 5 & 1) == 0)) {
        if (piVar6[0xf] == 0) {
          uVar13 = 0;
          uVar11 = FUN_006ecc80(0);
          cVar3 = FUN_0043f8c0(uVar11,uVar13);
          if ((cVar3 != '\0') && (cVar3 = FUN_004354f0(piVar6), cVar3 == '\0')) {
            if (param_3 == '\0') {
              *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 2;
            }
            uVar13 = 0;
            uVar11 = FUN_006ecc80(0);
            uVar11 = FUN_00440c80(uVar11,uVar13);
            ModelLoader_QueueReference(piVar6,uVar11);
            if (param_3 == '\0') {
              *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffd;
            }
          }
        }
      }
      else {
        (**(code **)(*piVar6 + 0x150))(0);
      }
    }
    else {
      cVar3 = (**(code **)(*piVar6 + 400))();
      if (cVar3 == '\0') {
        iVar8 = 0;
      }
      else {
        iVar9 = FUN_005e1f60();
        iVar8 = FUN_005e1f40();
        if (iVar9 != 0) {
          FUN_004d35d0(piVar6);
          goto LAB_0045c1d0;
        }
      }
      pfVar10 = (float *)(**(code **)(*piVar6 + 0x174))();
      fVar1 = *pfVar10;
      fVar2 = pfVar10[1];
      if (iVar8 == 0) {
        iVar8 = FUN_004d6670();
        if (iVar8 == 0) goto LAB_0045c1d0;
      }
      iVar8 = FUN_004efe80((int)ROUND(fVar1) >> 0xc,(int)ROUND(fVar2) >> 0xc);
      if (iVar8 != 0) {
        FUN_004d35d0(piVar6);
      }
    }
LAB_0045c1d0:
    if (((param_2 & 0x10) != 0) && (piVar6[0xf] != 0)) {
      FUN_004db520(piVar6[0xe]);
    }
  }
  if (piVar7 != (int *)0x0) {
    iVar8 = FUN_009832e6(piVar7,0,&PTR_PTR_00b05538,&PTR_PTR_00b03070,0,uVar5);
    if (iVar8 != 0) {
      fVar12 = (float10)FUN_004d7570();
      if ((float10)0.0 < fVar12) {
        FUN_005e6680(0);
        if (*(int *)(iVar8 + 0x3c) != 0) {
          FUN_005f87f0();
        }
        if (((param_3 == '\0') && ((*(uint *)(iVar8 + 8) >> 0xb & 1) == 0)) &&
           ((*(uint *)(iVar8 + 8) >> 5 & 1) == 0)) {
          FUN_00446cb0(iVar8);
        }
      }
    }
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffff7;
  uVar4 = 1;
LAB_0045c260:
  *unaff_FS_OFFSET = local_c;
  return uVar4;
}



void FUN_0045c320(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_c [12];
  
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 8;
  if (in_ECX != -0x38) {
    while( true ) {
      cVar1 = FUN_0046cb60();
      if (cVar1 != '\0') break;
      piVar2 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x38),0,&PTR_PTR_00b02f9c,
                                   &PTR_PTR_00b03070,0);
      if (piVar2 != (int *)0x0) {
        FUN_00601b80();
        FUN_005ed860();
        if ((int *)piVar2[0x16] != (int *)0x0) {
          iVar3 = (**(code **)(*(int *)piVar2[0x16] + 8))();
          if ((iVar3 == 0) && ((float)piVar2[8] == 3.4028235e+38)) {
            puVar4 = (undefined4 *)(**(code **)(*piVar2 + 0x174))();
            uVar8 = *puVar4;
            uVar6 = puVar4[1];
            uVar7 = puVar4[2];
            iVar3 = FUN_006ecc80();
            if (iVar3 != 0) {
              uVar11 = 0;
              uVar10 = 0;
              uVar9 = 1;
              uVar5 = FUN_006ecc80(1,0,0);
              puVar4 = (undefined4 *)
                       FUN_005e2e20(auStack_c,uVar8,uVar6,uVar7,uVar5,uVar9,uVar10,uVar11);
              uVar8 = *puVar4;
              uVar6 = puVar4[1];
              uVar7 = puVar4[2];
            }
            FUN_004d8a30(uVar8,uVar6,uVar7);
            FUN_004d89d0(0);
          }
          (**(code **)(*(int *)piVar2[0x16] + 0x18))(piVar2,1);
        }
      }
      puVar4 = *(undefined4 **)(in_ECX + 0x3c);
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 0x38) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x3c) = puVar4[1];
        *(undefined4 *)(in_ECX + 0x38) = *puVar4;
        FUN_00401f20(puVar4);
      }
    }
  }
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffff7;
  return;
}



void FUN_0045c470(int *param_1)

{
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    if (*param_1 != 0) {
      FUN_0045bde0(*param_1,1,0);
    }
  }
  return;
}



void FUN_0045c4a0(int param_1,undefined4 param_2,int param_3)

{
  int in_ECX;
  undefined4 local_4;
  
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) != 0) {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + param_3;
    return;
  }
  local_4 = 1;
  (**(code **)(param_1 + 8))(param_1,param_2,param_3,&local_4,1);
  return;
}



int * FUN_0045c4f0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int local_20;
  undefined1 auStack_c [12];
  
  iVar7 = *param_2;
  piVar12 = (int *)0x0;
  if (iVar7 == 0) {
    iVar7 = param_2[4];
  }
  uVar3 = FUN_0046b250(iVar7);
  iVar4 = FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  iVar5 = FUN_009832e6(uVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
  iVar11 = 0;
  local_20 = 0;
  if (iVar4 == 0) {
    if (iVar5 == 0) {
      FUN_004a7a60("Reference to be loaded does not have a cell or worldspace.");
      goto LAB_0045c5e1;
    }
    iVar9 = 0;
    for (piVar1 = (int *)(iVar5 + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 != 0) {
        iVar9 = iVar9 + 1;
      }
    }
    iVar11 = (int)ROUND((float)param_2[1]) >> 0xc;
    local_20 = (int)ROUND((float)param_2[2]) >> 0xc;
    iVar10 = 0;
    if (iVar9 < 1) goto LAB_0045c5e1;
    do {
      FUN_0046b680(iVar10);
      uVar3 = FUN_004520f0();
      cVar2 = FUN_004ef520(uVar3,iVar11,local_20);
      if ((cVar2 != '\0') && (cVar2 = FUN_004cc850(uVar3,param_1), cVar2 != '\0')) {
        uVar6 = FUN_004511c0();
        piVar12 = (int *)FUN_004db260(uVar6,1);
        FUN_00447050(piVar12,uVar3);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  else {
    iVar9 = 0;
    for (piVar1 = (int *)(iVar4 + 0x10); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 != 0) {
        iVar9 = iVar9 + 1;
      }
    }
    iVar10 = 0;
    if (iVar9 < 1) goto LAB_0045c5e1;
    do {
      FUN_0046b680(iVar10);
      uVar3 = FUN_004520f0();
      cVar2 = FUN_00451920(iVar4);
      if ((cVar2 != '\0') && (cVar2 = FUN_004cc850(uVar3,param_1), cVar2 != '\0')) {
        uVar6 = FUN_004511c0();
        piVar12 = (int *)FUN_004db260(uVar6,1);
        FUN_00447050(piVar12,uVar3);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar9);
  }
  if (piVar12 != (int *)0x0) {
    (**(code **)(*piVar12 + 0x6c))();
    iVar7 = FUN_009832e6(piVar12,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    if (iVar7 != 0) {
      iVar7 = piVar12[10];
      uVar3 = (**(code **)(*piVar12 + 0x174))(iVar7);
      FUN_005e0200(iVar5,iVar4,uVar3,iVar7);
      return piVar12;
    }
    puVar8 = (undefined4 *)(**(code **)(*piVar12 + 0x174))();
    FUN_0041f7b0(auStack_c,piVar12,*puVar8,puVar8[1],puVar8[2]);
    FUN_0041f770(auStack_c,piVar12,piVar12[8],piVar12[9],piVar12[10]);
    return piVar12;
  }
LAB_0045c5e1:
  FUN_004a7a60("Reference %08X could not be loaded into location %08X at coordinates %i, %i",param_1
               ,iVar7,iVar11,local_20);
  return (int *)0x0;
}



void FUN_0045c7a0(int *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  byte bVar3;
  DWORD DVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  undefined4 uVar7;
  
  DVar2 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar4 = GetCurrentThreadId();
  if (DVar4 == DVar2) {
    bVar3 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar3 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar3 & 1) == 0) {
    FUN_004a7a60("DeleteForm() was called, but the game is not being loaded.");
  }
  FUN_00452df0(param_1[3],1);
  iVar5 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
  if ((((uint)param_1[2] >> 0xe & 1) == 0) && (iVar5 == 0)) {
    FUN_0046c300(0,1);
    FUN_0046b2c0();
    (**(code **)(*param_1 + 0xd8))(&DAT_00a2f7ec);
    puVar1 = (undefined4 *)(in_ECX + 0x30);
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        FUN_00446cb0(param_1);
        return;
      }
      if ((int *)*puVar1 == param_1) break;
      puVar1 = (undefined4 *)puVar1[1];
    }
  }
  else {
    uVar7 = 1;
    uVar6 = FUN_00448d40(1);
    FUN_0046c300(uVar6,uVar7);
  }
  return;
}



void FUN_0045c870(uint param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  int in_ECX;
  byte local_a;
  byte local_9;
  int local_8;
  undefined4 local_4;
  
  local_a = FUN_00446b10();
  uVar3 = param_1;
  local_8 = 0;
  if ((*(int *)(in_ECX + 0x40) != 0) && (local_8 = *(int *)(param_1 + 0x30), local_8 == -1)) {
    local_8 = *(int *)(param_1 + 0x148);
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 1;
    (*(code *)*puVar1)(uVar3,&local_a,1,&param_1,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  }
  param_1 = param_1 & 0xffffff00;
  if (local_a != 0) {
    do {
      iVar5 = FUN_00446b20(param_1 & 0xff);
      pcVar6 = (char *)(iVar5 + 0x1c);
      do {
        cVar2 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      local_9 = (char)pcVar6 - ((char)iVar5 + '\x1d');
      if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
        local_4 = 1;
        (**(code **)(uVar3 + 8))(uVar3,&local_9,1,&local_4,1);
      }
      else {
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
      }
      if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
        local_4 = 1;
        (**(code **)(uVar3 + 8))(uVar3,(char *)(iVar5 + 0x1c),(uint)local_9,&local_4,1);
      }
      else {
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + (uint)local_9;
      }
      bVar4 = (char)param_1 + 1;
      param_1 = CONCAT31(param_1._1_3_,bVar4);
    } while (bVar4 < local_a);
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar5 = *(int *)(uVar3 + 0x30);
    if (iVar5 == -1) {
      iVar5 = *(int *)(uVar3 + 0x148);
    }
    FUN_004531b0(iVar5 - local_8,"Plugin List");
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0045c9c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  byte bVar5;
  char *pcVar6;
  undefined1 auStack_11c [3];
  byte bStack_119;
  byte local_118;
  char local_117;
  char local_116;
  undefined1 uStack_115;
  undefined4 local_114;
  int local_110;
  int local_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_11c;
  local_117 = '\0';
  local_116 = '\0';
  local_110 = in_ECX;
  local_118 = FUN_00446b10();
  local_10c = *(int *)(param_1 + 0x30);
  if (local_10c == -1) {
    local_10c = *(int *)(param_1 + 0x148);
  }
  pcVar6 = (char *)(in_ECX + 0x48);
  local_114 = 1;
  (**(code **)(param_1 + 4))(param_1,pcVar6,1,&local_114,1);
  if (*(int *)(in_ECX + 0x4c) != 0) {
    FUN_00401f20(*(int *)(in_ECX + 0x4c));
  }
  uVar2 = FUN_00401f00(*pcVar6);
  *(undefined4 *)(in_ECX + 0x4c) = uVar2;
  bStack_119 = 0;
  if (*pcVar6 != '\0') {
    do {
      local_114 = 1;
      (**(code **)(param_1 + 4))(param_1,&uStack_115,1,&local_114,1);
      _memset(acStack_108,0,0x104);
      local_114 = 1;
      (**(code **)(param_1 + 4))(param_1,acStack_108,uStack_115,&local_114,1);
      bVar5 = 0;
      if (local_118 != 0) {
        do {
          iVar3 = FUN_00446b20(bVar5);
          iVar4 = __stricmp(acStack_108,(char *)(iVar3 + 0x1c));
          if (iVar4 == 0) {
LAB_0045cb7c:
            cVar1 = FUN_0044faa0();
            if (cVar1 != '\0') {
              local_117 = '\x01';
            }
            *(byte *)((uint)bStack_119 + *(int *)(local_110 + 0x4c)) = bVar5;
            in_ECX = local_110;
            goto LAB_0045cb51;
          }
          iVar4 = __stricmp(acStack_108,"Oblivion.esm");
          if (iVar4 == 0) {
            pcVar6 = "OblivionSE.esm";
LAB_0045cb15:
            iVar3 = __stricmp(pcVar6,(char *)(iVar3 + 0x1c));
            if (iVar3 == 0) goto LAB_0045cb7c;
          }
          else {
            iVar4 = __stricmp(acStack_108,"OblivionSE.esm");
            if (iVar4 == 0) {
              pcVar6 = "Oblivion.esm";
              goto LAB_0045cb15;
            }
          }
          bVar5 = bVar5 + 1;
          in_ECX = local_110;
        } while (bVar5 < local_118);
      }
      local_116 = '\x01';
      *(undefined1 *)((uint)bStack_119 + *(int *)(in_ECX + 0x4c)) = 0xff;
      FUN_004a7a60("Cannot find file %s referenced in the save game.  Errors may result.",
                   acStack_108);
LAB_0045cb51:
      bStack_119 = bStack_119 + 1;
    } while (bStack_119 < *(byte *)(in_ECX + 0x48));
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 == -1) {
      iVar3 = *(int *)(param_1 + 0x148);
    }
    FUN_004531b0(iVar3 - local_10c,"Plugin List");
  }
  if (local_117 == '\0') {
    FUN_00579c10(DAT_00b38738,0,0,&DAT_00a2f7ec,0);
LAB_0045cbd5:
    uVar2 = 0;
  }
  else {
    if ((((local_116 != '\0') && (DAT_00b05bbc != '\0')) && (iVar3 = FUN_00578fe0(), iVar3 != 3)) &&
       ((iVar3 = FUN_00579060(), iVar3 != 3 && (*(char *)(in_ECX + 0xab) == '\0')))) {
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x10000;
      cVar1 = FUN_00579cf0(DAT_00b386c0,1,DAT_00b38cf8,DAT_00b38d00,0);
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xfffeffff;
      if (cVar1 == '\x02') goto LAB_0045cbd5;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045cc60(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int local_204;
  undefined4 local_200;
  undefined4 *local_1fc;
  char local_1f8 [500];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_204;
  local_200 = *param_4;
  iVar3 = *param_3;
  local_204 = iVar3;
  FUN_0057b8e0("SAVEGAME INFO",(float)DAT_00b02e24,(float)iVar3,1,0xffffffff);
  iVar3 = iVar3 + param_2;
  local_204 = iVar3;
  uVar1 = FUN_004da2a0((float)DAT_00b02e24,(float)iVar3,1,0xffffffff);
  FUN_0057b8e0(uVar1);
  iVar3 = iVar3 + param_2;
  local_1fc = (undefined4 *)0x0;
  local_204 = iVar3;
  FUN_0055e000(*(undefined4 *)(param_1 + 0xc),&local_1fc);
  if (local_1fc == (undefined4 *)0x0) {
    pcVar4 = "Current reference has no changes.";
  }
  else {
    iVar2 = FUN_004535a0(param_1,*local_1fc);
    if (iVar2 == 0) {
      FUN_0057b8e0("References changes were nullified by CheckFlags().",(float)DAT_00b02e24,
                   (float)local_204,1,0xffffffff);
      *param_3 = iVar3 + param_2;
      *param_4 = local_200;
      return;
    }
    FUN_00453a90(local_1f8,param_1,iVar2,*(undefined1 *)(param_1 + 4),1);
    pcVar4 = local_1f8;
  }
  FUN_0057b8e0(pcVar4,(float)DAT_00b02e24,(float)local_204,1,0xffffffff);
  *param_3 = iVar3 + param_2;
  *param_4 = local_200;
  return;
}



void FUN_0045ce00(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *piVar7;
  undefined4 local_c;
  int local_8;
  int local_4;
  
  uVar1 = *(uint *)(*(int *)(in_ECX + 0x54) + 4);
  uVar4 = 0;
  if (uVar1 != 0) {
    piVar2 = *(int **)(*(int *)(in_ECX + 0x54) + 8);
    piVar7 = piVar2;
    do {
      if (*piVar7 != 0) {
        local_8 = piVar2[uVar4];
        goto joined_r0x0045ce2f;
      }
      uVar4 = uVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (uVar4 < uVar1);
  }
  local_8 = 0;
joined_r0x0045ce2f:
  while (local_8 != 0) {
    FUN_00452600(&local_8,&local_4,&local_c);
    iVar3 = local_4;
    iVar6 = DAT_00b333c4;
    if (local_4 != 0) {
      uVar5 = FUN_0046b250(local_4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar6 = FUN_009832e6(uVar5);
    }
    uVar5 = local_c;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 0x3c) != 0)) {
      FUN_00458ed0(iVar6,iVar3,local_c);
    }
    FUN_00401e40(uVar5);
    FUN_004524c0(iVar3);
  }
  if (*(int *)(*(int *)(in_ECX + 0x54) + 0xc) != 0) {
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("LoadAnimations() call finished, but still has elements in the map.");
  }
  return;
}



void FUN_0045cee0(void)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  undefined4 uVar9;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x58) + 4);
  uVar5 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x58) + 8);
    piVar8 = piVar3;
    do {
      if (*piVar8 != 0) {
        local_8 = piVar3[uVar5];
        goto joined_r0x0045cf1b;
      }
      uVar5 = uVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar5 < uVar2);
  }
  local_8 = 0;
joined_r0x0045cf1b:
  do {
    if (local_8 == 0) {
      if (*(int *)(*(int *)(in_ECX + 0x58) + 0xc) != 0) {
        (**(code **)(*DAT_00b34d90 + 0x18))
                  ("LoadAttachedAnimations() call finished, but still has elements in the map.");
      }
      return;
    }
    FUN_00452600(&local_8,&local_c,&local_10);
    uVar9 = local_c;
    uVar6 = FUN_0046b250(local_c,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar7 = FUN_009832e6(uVar6);
    iVar4 = local_10;
    if (iVar7 == 0) {
LAB_0045cfe5:
      FUN_00401e40(iVar4);
    }
    else {
      if (*(int *)(iVar7 + 0x3c) != 0) {
        local_4 = *(undefined4 *)(in_ECX + 0x14);
        *(int *)(in_ECX + 0x14) = local_10;
        uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
        *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
        FUN_004e2f70(0);
        if (uVar1 + 2 + iVar4 != *(int *)(in_ECX + 0x14)) {
          (**(code **)(*DAT_00b34d90 + 0x18))
                    ("LoadAttachedAnimations() call did not properly empty buffer.");
        }
        *(undefined4 *)(in_ECX + 0x14) = local_4;
        uVar9 = local_c;
        goto LAB_0045cfe5;
      }
      FUN_004210e0(local_10);
      FUN_00452c20(iVar7,0x1000000);
    }
    FUN_004524c0(uVar9);
  } while( true );
}



void FUN_0045d030(void)

{
  ushort uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int *piVar8;
  undefined4 uVar9;
  int local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar2 = *(uint *)(*(int *)(in_ECX + 0x60) + 4);
  uVar5 = 0;
  if (uVar2 != 0) {
    piVar3 = *(int **)(*(int *)(in_ECX + 0x60) + 8);
    piVar8 = piVar3;
    do {
      if (*piVar8 != 0) {
        local_c = piVar3[uVar5];
        goto joined_r0x0045d06b;
      }
      uVar5 = uVar5 + 1;
      piVar8 = piVar8 + 1;
    } while (uVar5 < uVar2);
  }
  local_c = 0;
joined_r0x0045d06b:
  do {
    if (local_c == 0) {
      if (*(int *)(*(int *)(in_ECX + 0x60) + 0xc) != 0) {
        (**(code **)(*DAT_00b34d90 + 0x18))
                  ("LoadHavokData() call finished, but still has elements in the map.");
      }
      return;
    }
    FUN_00452600(&local_c,&local_10,&local_14);
    uVar9 = local_10;
    uVar6 = FUN_0046b250(local_10,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
    iVar7 = FUN_009832e6(uVar6);
    iVar4 = local_14;
    if (iVar7 == 0) {
LAB_0045d141:
      FUN_00401e40(iVar4);
    }
    else {
      if (*(int *)(iVar7 + 0x3c) != 0) {
        local_4 = *(undefined4 *)(in_ECX + 0x14);
        *(int *)(in_ECX + 0x14) = local_14;
        uVar1 = **(ushort **)(DAT_00b33b00 + 0x14);
        local_8 = CONCAT22(local_8._2_2_,uVar1);
        *(ushort **)(DAT_00b33b00 + 0x14) = *(ushort **)(DAT_00b33b00 + 0x14) + 1;
        FUN_004e31e0(local_8);
        if (uVar1 + 2 + iVar4 != *(int *)(in_ECX + 0x14)) {
          (**(code **)(*DAT_00b34d90 + 0x18))("LoadHavokData() call did not properly empty buffer.")
          ;
        }
        *(undefined4 *)(in_ECX + 0x14) = local_4;
        uVar9 = local_10;
        goto LAB_0045d141;
      }
      FUN_004211e0(local_14);
      FUN_00452c20(iVar7,0x1000000);
    }
    FUN_004524c0(uVar9);
  } while( true );
}



void FUN_0045d190(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  
  for (piVar1 = (int *)(in_ECX + 100); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if ((*piVar1 != 0) &&
       (iVar2 = FUN_009832e6(*piVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b05ad0,0), iVar2 != 0)) {
      if ((*(int *)(iVar2 + 0x5c) != 0) &&
         ((iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28), iVar2 != 0 &&
          (*(int *)(iVar2 + 0x3c) != 0)))) {
        FUN_00707370(0,0);
      }
      FUN_0060be90();
    }
  }
  iVar2 = *(int *)(in_ECX + 0x68);
  while (iVar2 != 0) {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x68) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0x68));
    *(int *)(in_ECX + 0x68) = iVar2;
  }
  *(int *)(in_ECX + 100) = 0;
  return;
}



void FUN_0045d220(uint *param_1)

{
  DWORD DVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  ushort uVar5;
  DWORD DVar6;
  int *piVar7;
  uint uVar8;
  ushort *puVar9;
  int in_ECX;
  undefined1 local_14 [2];
  short local_12;
  short sStack_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar6 = GetCurrentThreadId();
  piVar2 = (int *)param_1;
  if (DVar6 == DVar1) {
    bVar3 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar3 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar3 & 1) != 0) {
    return;
  }
  piVar7 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
  if (piVar7 != (int *)0x0) {
    param_1 = (uint *)0x0;
    FUN_0055e000(piVar2[3],&param_1);
    if (param_1 == (uint *)0x0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *param_1;
    }
    cVar4 = FUN_005f0310(uVar8);
    if (cVar4 != '\0') goto LAB_0045d2c9;
  }
  param_1 = (uint *)0x0;
  FUN_0055e000(piVar2[3],&param_1);
  if (param_1 == (uint *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *param_1;
  }
  if ((uVar8 & 8) == 0) {
    return;
  }
LAB_0045d2c9:
  local_14[0] = 0;
  local_12 = 0;
  sStack_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  uVar5 = FUN_004e0970(local_14);
  if (((piVar7 != (int *)0x0) || ((short)(sStack_10 + local_12) != 1)) && (uVar5 != 0)) {
    FUN_00401020("TESSaveLoadGame::SaveQueuedHavokData");
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 0x40))(8);
    }
    puVar9 = (ushort *)thunk_FUN_00401aa0(uVar5 + 2,1);
    *puVar9 = uVar5;
    *(ushort **)(in_ECX + 0x14) = puVar9 + 1;
    FUN_004e0a40(&stack0xffffffe8);
    *(undefined4 *)(in_ECX + 0x14) = 0;
    FUN_004211e0(puVar9);
    (**(code **)(*piVar2 + 0x40))(0x1000000);
    FUN_00401040();
  }
  return;
}



void FUN_0045d390(int *param_1)

{
  DWORD DVar1;
  byte bVar2;
  short sVar3;
  DWORD DVar4;
  int iVar5;
  int in_ECX;
  uint *local_4;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar4 = GetCurrentThreadId();
  if (DVar4 == DVar1) {
    bVar2 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar2 & 1) == 0) {
    local_4 = (uint *)0x0;
    FUN_0055e000(param_1[3],&local_4);
    if ((local_4 != (uint *)0x0) && ((*local_4 & 0x2000000) != 0)) {
      sVar3 = FUN_004e0840();
      if (sVar3 != 0) {
        FUN_00401020("TESSaveLoadGame::SaveQueuedAttachedAnimation");
        iVar5 = FUN_00452310(sVar3);
        *(int *)(in_ECX + 0x14) = iVar5 + 2;
        FUN_004e08d0();
        *(undefined4 *)(in_ECX + 0x14) = 0;
        FUN_004210e0(iVar5);
        (**(code **)(*param_1 + 0x40))(0x1000000);
        FUN_00401040();
      }
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045d450(void)

{
  uint uVar1;
  undefined4 *puVar2;
  HANDLE hFindFile;
  BOOL BVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_35c;
  _WIN32_FIND_DATAA _Stack_358;
  CHAR aCStack_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae38e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&puStack_35c;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffc94;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x6c) != 0) {
    FUN_00459400(uVar1);
  }
  puVar2 = (undefined4 *)FUN_00401f00(8);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
  }
  *(undefined4 **)(in_ECX + 0x6c) = puVar2;
  lstrcpyA(aCStack_218,&DAT_00b3f280);
  lstrcatA(aCStack_218,PTR_DAT_00b05564);
  lstrcatA(aCStack_218,"*.ess");
  hFindFile = FindFirstFileA(aCStack_218,&_Stack_358);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if ((_Stack_358.nFileSizeHigh != 0) || (_Stack_358.nFileSizeLow != 0)) {
        _sprintf(acStack_114,"%s%s%s",&DAT_00b3f280,PTR_DAT_00b05564,_Stack_358.cFileName);
        puVar2 = (undefined4 *)FUN_00401f00(0x160);
        uStack_4 = 0;
        puStack_35c = puVar2;
        if (puVar2 == (undefined4 *)0x0) {
          puVar2 = (undefined4 *)0x0;
        }
        else {
          FUN_00430970(acStack_114,0,0x20000,0);
          *puVar2 = &PTR_FUN_00a39094;
          *(undefined1 *)(puVar2 + 0x55) = 0;
        }
        uStack_4 = 0xffffffff;
        FUN_00416650(puVar2,&LAB_00459450);
      }
      BVar3 = FindNextFileA(hFindFile,&_Stack_358);
    } while (BVar3 != 0);
    FindClose(hFindFile);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0045d5f0(int param_1,int param_2,undefined4 *param_3,void *param_4,undefined2 *param_5,
                char *param_6,int *param_7,undefined4 *param_8,undefined4 *param_9,int *param_10)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  size_t _Size;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined2 uVar10;
  int in_ECX;
  char *pcVar11;
  undefined4 uVar12;
  char *pcVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  int *unaff_FS_OFFSET;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [68];
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uVar12 = param_2;
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae3cb;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffff80;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar6 = thunk_FUN_00401aa0(param_2,1);
  *(int *)(in_ECX + 0x14) = iVar6;
  if (iVar6 == 0) {
    FUN_00404ec0("Could not create save buffer, out of memory.",uVar5);
  }
  uVar3 = *(undefined4 *)(in_ECX + 0x14);
  param_2 = 1;
  (**(code **)(param_1 + 4))(param_1,uVar3,uVar12,&param_2,1);
  if (0x37 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar12 = **(undefined4 **)(in_ECX + 0x14);
    *(undefined4 **)(in_ECX + 0x14) = *(undefined4 **)(in_ECX + 0x14) + 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = uVar12;
    }
  }
  if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x38) && (param_3 != (undefined4 *)0x0)) {
    *param_3 = 0;
  }
  bVar1 = **(byte **)(in_ECX + 0x14);
  pbVar7 = *(byte **)(in_ECX + 0x14) + 1;
  *(byte **)(in_ECX + 0x14) = pbVar7;
  if (param_4 == (void *)0x0) {
    *(byte **)(in_ECX + 0x14) = pbVar7 + bVar1;
  }
  else {
    _memcpy(param_4,pbVar7,(uint)bVar1);
    *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + (uint)bVar1;
  }
  param_2 = 0;
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x34) {
    param_2._0_2_ = 0;
    uVar10 = (undefined2)param_2;
  }
  else {
    uVar10 = **(undefined2 **)(in_ECX + 0x14);
    *(undefined2 **)(in_ECX + 0x14) = *(undefined2 **)(in_ECX + 0x14) + 1;
  }
  if (param_5 != (undefined2 *)0x0) {
    *param_5 = uVar10;
  }
  bVar1 = **(byte **)(in_ECX + 0x14);
  pbVar7 = *(byte **)(in_ECX + 0x14) + 1;
  *(byte **)(in_ECX + 0x14) = pbVar7;
  if (param_6 == (char *)0x0) {
    if (bVar1 != 0) {
      *(byte **)(in_ECX + 0x14) = pbVar7 + bVar1;
    }
  }
  else {
    pcVar11 = DAT_00b38728;
    pcVar13 = param_6;
    if (bVar1 == 0) {
      do {
        cVar2 = *pcVar11;
        *pcVar13 = cVar2;
        pcVar11 = pcVar11 + 1;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
    }
    else {
      _memcpy(param_6,pbVar7,(uint)bVar1);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + (uint)bVar1;
    }
  }
  param_2 = **(int **)(in_ECX + 0x14);
  *(int **)(in_ECX + 0x14) = *(int **)(in_ECX + 0x14) + 1;
  if (param_7 != (int *)0x0) {
    *param_7 = param_2;
  }
  uVar12 = 0;
  if (0x1c < *(byte *)(DAT_00b33b00 + 0x7c)) {
    uVar12 = **(undefined4 **)(in_ECX + 0x14);
    *(undefined4 **)(in_ECX + 0x14) = *(undefined4 **)(in_ECX + 0x14) + 1;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = uVar12;
  }
  uVar12 = 0;
  uVar14 = 0;
  uVar17 = 0;
  uVar15 = 0;
  if (0x37 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    puVar8 = *(undefined4 **)(in_ECX + 0x14);
    uVar12 = *puVar8;
    uVar14 = puVar8[1];
    uVar17 = puVar8[2];
    uVar15 = puVar8[3];
    *(undefined4 **)(in_ECX + 0x14) = puVar8 + 4;
  }
  if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x38) {
    puVar8 = (undefined4 *)FUN_004301a0(auStack_60);
    uVar12 = *puVar8;
    uVar14 = puVar8[1];
    uVar17 = puVar8[2];
    uVar15 = puVar8[3];
  }
  if (param_8 != (undefined4 *)0x0) {
    *param_8 = uVar12;
    param_8[1] = uVar14;
    param_8[2] = uVar17;
    param_8[3] = uVar15;
  }
  piVar4 = *(int **)(in_ECX + 0x14);
  iVar6 = *piVar4;
  piVar9 = piVar4 + 1;
  iVar18 = 0;
  *(int **)(in_ECX + 0x14) = piVar9;
  if (iVar6 != 0) {
    if (param_10 == (int *)0x0) {
      *(int *)(in_ECX + 0x14) = (int)piVar9 + iVar6;
    }
    else {
      iVar6 = *piVar9;
      *(int **)(in_ECX + 0x14) = piVar4 + 2;
      iVar18 = piVar4[2];
      *(int **)(in_ECX + 0x14) = piVar4 + 3;
      *param_10 = iVar18;
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x2e) {
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 0x24;
      }
      FUN_0070f010(&DAT_00b25e48);
      param_2 = FUN_00401f00(0x70);
      iVar16 = 0;
      uStack_4 = 0;
      if (param_2 != 0) {
        iVar16 = FUN_0070e560(iVar6,iVar6,auStack_50,1,1);
      }
      _Size = iVar18 * iVar6 * 3;
      uStack_4 = 0xffffffff;
      _memcpy((void *)(**(int **)(iVar16 + 0x5c) + *(int *)(iVar16 + 0x50)),
              *(void **)(in_ECX + 0x14),_Size);
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + _Size;
      uStack_6c = 2;
      uStack_64 = 0;
      uStack_68 = 0;
      iVar18 = FUN_00701fc0(iVar16,&uStack_6c);
      InterlockedIncrement((LONG *)(iVar18 + 4));
    }
  }
  FUN_00401e40(uVar3);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *unaff_FS_OFFSET = local_c;
  return iVar18;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045d920(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  DWORD DVar6;
  char *pcVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int *unaff_FS_OFFSET;
  int local_23c;
  undefined1 *local_238;
  undefined1 *local_234;
  undefined2 local_230;
  undefined2 local_22e;
  int local_22c;
  undefined4 local_228;
  int local_224;
  char local_220 [8];
  char acStack_218 [260];
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae3fb;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_23c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffdb4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_22c = param_1;
  if (param_1 != 0) {
    local_234 = (undefined1 *)0x0;
    local_230 = 0;
    local_22e = 0;
    iVar8 = 0;
    local_4 = 0;
    local_23c = 0;
    local_224 = in_ECX;
    local_228 = FUN_004da2a0(uVar3);
    FUN_004de8d0(&local_234);
    local_238 = local_234;
    if (local_234 == (undefined1 *)0x0) {
      iVar4 = FUN_006ecc80();
      if (iVar4 == 0) {
        local_238 = &DAT_00a2f7ec;
      }
      else {
        piVar5 = (int *)FUN_006ecc80();
        local_238 = (undefined1 *)(**(code **)(*piVar5 + 0xd4))();
      }
    }
    do {
      if (iVar8 == 0) {
        local_220[0] = '\0';
      }
      else {
        _sprintf(local_220," #%d",iVar8 + 1);
      }
      iVar8 = DAT_00b333c4;
      DVar6 = GetTickCount();
      *(int *)(iVar8 + 0x714) = *(int *)(iVar8 + 0x714) + (DVar6 - *(int *)(iVar8 + 0x710));
      DVar6 = GetTickCount();
      *(DWORD *)(iVar8 + 0x710) = DVar6;
      uVar3 = *(uint *)(iVar8 + 0x714);
      uVar9 = uVar3 % 3600000;
      if (*(int *)(in_ECX + 0x88) == 0) {
        FUN_00464320();
      }
      uVar2 = *(undefined4 *)(in_ECX + 0x88);
      uVar3 = FUN_005e1fd0(uVar3 / 3600000,uVar9 / 60000,(uVar9 % 60000) / 1000,local_220);
      _sprintf(acStack_218,"Save %i - %s - %s, Level %i, Playing Time %02i.%02i.%02i",uVar2,
               local_228,local_238,uVar3 & 0xffff);
      for (pcVar7 = _strpbrk(acStack_218,"\\/:*<>?|\""); pcVar7 != (char *)0x0;
          pcVar7 = _strpbrk(pcVar7 + 1,"\\/:*<>?|\"")) {
        *pcVar7 = ((*pcVar7 != '\"') - 1U & 7) + 0x20;
      }
      _sprintf(acStack_114,"%s%s%s.ess",&DAT_00b3f280,PTR_DAT_00b05564,acStack_218);
      if (DAT_00b33a04 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (**(code **)(*DAT_00b33a04 + 4))(acStack_114,0,0,0xffffffff);
      }
      iVar8 = local_23c + 1;
      in_ECX = local_224;
      local_23c = iVar8;
    } while (iVar4 != 0);
    pcVar7 = acStack_218;
    iVar8 = local_22c - (int)pcVar7;
    do {
      cVar1 = *pcVar7;
      pcVar7[iVar8] = cVar1;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    FUN_00401f20(local_234);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_0045dbc0(int *param_1,char param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  undefined4 local_318;
  undefined4 uStack_314;
  char local_310 [260];
  char acStack_20c [520];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_318;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  local_318 = 1;
  iVar4 = (*(code *)param_1[1])(param_1,local_310,0xc,&local_318,1);
  if (iVar4 == 0) {
LAB_0045dc7c:
    uStack_314 = 0;
  }
  else {
    if (local_310[0] == '\0') {
      (**(code **)(*param_1 + 0xc))(0,0);
    }
    else {
      iVar4 = _strncmp(local_310,"CON ",4);
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0xc))(0xd000,0);
        *(undefined4 *)(in_ECX + 0x8c) = 0xd000;
        (*(code *)param_1[1])(param_1,&local_318,0xc,&stack0xfffffce0,1);
      }
      iVar4 = _strncmp(local_310,"TES4SAVEGAME",0xc);
      if (iVar4 != 0) goto LAB_0045dc7c;
    }
    local_318 = 1;
    (*(code *)param_1[1])(param_1,(byte *)(in_ECX + 0x70),1,&local_318,1);
    local_318 = 1;
    pbVar1 = (byte *)(in_ECX + 0x71);
    (*(code *)param_1[1])(param_1,pbVar1,1,&local_318,1);
    *(byte *)(in_ECX + 0x7c) = *pbVar1;
    if (0x51 < *(byte *)(DAT_00b33b00 + 0x7c)) {
      if (param_2 == '\0') {
        (**(code **)(*param_1 + 0xc))(0x14,1);
      }
      else {
        local_318 = 1;
        (*(code *)param_1[1])(param_1,in_ECX + 0x94,0x10,&local_318,1);
        local_318 = 1;
        (*(code *)param_1[1])(param_1,in_ECX + 0xa4,4,&local_318,1);
      }
    }
    if ((*(byte *)(DAT_00b33b00 + 0x7c) < 0x52) && (param_2 != '\0')) {
      *(undefined4 *)(in_ECX + 0x94) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x98) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0x9c) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0xa0) = 0xffffffff;
      *(undefined4 *)(in_ECX + 0xa4) = 0xffffffff;
    }
    local_318 = 1;
    (*(code *)param_1[1])(param_1,&uStack_314,4,&local_318,1);
    bVar2 = *(byte *)(in_ECX + 0x70);
    if ((bVar2 != 0) || (((param_2 != '\0' && (*pbVar1 != 0x7d)) && (*pbVar1 < 0x13)))) {
      _sprintf(acStack_20c,
               "Save game version is %i.%02i and current version is %i.%02i, so errors may occur.  Continue trying to load?"
               ,(uint)bVar2,(uint)*pbVar1,0,0x7d);
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) | 0x10000;
      cVar3 = FUN_00579cf0(acStack_20c,1,DAT_00b38cf8,DAT_00b38d00,0);
      *(uint *)(DAT_00b33b00 + 0x18) = *(uint *)(DAT_00b33b00 + 0x18) & 0xfffeffff;
      if (cVar3 == '\x02') {
        uStack_314 = 0xffffffff;
      }
    }
  }
  return uStack_314;
}



void FUN_0045de30(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_ECX;
  undefined4 uVar8;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int iStack_18;
  undefined1 uStack_14;
  undefined4 uStack_13;
  undefined2 uStack_e;
  undefined4 uStack_c;
  undefined1 uStack_8;
  undefined4 uStack_7;
  undefined2 uStack_2;
  
  local_24 = 0;
  local_20 = in_ECX;
  for (puVar1 = in_ECX + 10; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[1]) {
    iVar4 = FUN_0046b250(*puVar1);
    if (iVar4 != 0) {
      iVar5 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
      iVar6 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
      iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
      if (iVar4 != 0) {
        in_ECX = local_20;
        if (*(int *)(iVar4 + 4) == 0) goto LAB_0045ded8;
        cVar3 = FUN_00446b80(*(undefined4 *)(*(int *)(iVar4 + 4) + 0xc));
        if (cVar3 != '\0') {
          local_24 = local_24 + 1;
        }
      }
      in_ECX = local_20;
      if ((iVar5 != 0) || (iVar6 != 0)) {
        local_24 = local_24 + 1;
      }
    }
LAB_0045ded8:
  }
  if (((uint)in_ECX[6] >> 9 & 1) == 0) {
    local_20 = (undefined4 *)0x1;
    (**(code **)(param_1 + 8))(param_1,&local_24,4,&local_20,1);
  }
  else {
    in_ECX[0x24] = in_ECX[0x24] + 4;
  }
  if (local_24 == 0) {
    return;
  }
  local_20 = in_ECX + 10;
  do {
    while( true ) {
      if (local_20 == (undefined4 *)0x0) {
        return;
      }
      uVar8 = *local_20;
      local_1c = uVar8;
      piVar7 = (int *)FUN_0046b250(uVar8);
      if (piVar7 != (int *)0x0) break;
LAB_0045e0af:
      local_20 = (undefined4 *)local_20[1];
    }
    iVar4 = FUN_009832e6(piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03248,0);
    iVar5 = FUN_009832e6(piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03800,0);
    if ((iVar4 == 0) && (iVar5 == 0)) goto LAB_0045e0af;
    iVar4 = FUN_009832e6(piVar7,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03718,0);
    if (iVar4 == 0) {
LAB_0045e03a:
      (**(code **)(*piVar7 + 0x24))();
      iVar4 = DAT_00b33c18;
      if (((uint)in_ECX[6] >> 9 & 1) == 0) {
        local_1c = 1;
        (**(code **)(param_1 + 8))(param_1,DAT_00b33c14,DAT_00b33c18,&local_1c,1);
      }
      else {
        in_ECX[0x24] = in_ECX[0x24] + DAT_00b33c18;
      }
      if (in_ECX[0x10] != 0) {
        uStack_8 = (undefined1)piVar7[1];
        uStack_2 = (undefined2)iVar4;
        uStack_7 = 0;
        uStack_c = uVar8;
        FUN_0045ad00(&uStack_c);
      }
      FUN_0046af30();
      goto LAB_0045e0af;
    }
    piVar2 = *(int **)(iVar4 + 4);
    if (piVar2 != (int *)0x0) {
      cVar3 = FUN_00446b80(piVar2[3]);
      if (cVar3 != '\0') {
        (**(code **)(*piVar2 + 0x24))();
        iVar4 = DAT_00b33c18;
        FUN_0045bab0(param_1,DAT_00b33c14,DAT_00b33c18);
        if (in_ECX[0x10] != 0) {
          uStack_14 = (undefined1)piVar2[1];
          iStack_18 = piVar2[3];
          uStack_e = (undefined2)iVar4;
          uStack_13 = 0;
          FUN_0045ad00(&iStack_18);
        }
        FUN_0046af30();
        uVar8 = local_1c;
      }
      goto LAB_0045e03a;
    }
    FUN_004a7a60("Enchantable item %08X with no enchantment exists in the created base objects list."
                 ,uVar8);
    local_20 = (undefined4 *)local_20[1];
  } while( true );
}



uint FUN_0045e0d0(uint param_1)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  int in_ECX;
  uint *puVar5;
  
  cVar3 = FUN_00446b80(param_1);
  if (cVar3 != '\0') {
    return param_1;
  }
  iVar1 = *(int *)(in_ECX + 0x74);
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar4 = 0;
  if (uVar2 != 0) {
    puVar5 = *(uint **)(iVar1 + 4);
    do {
      if (*puVar5 == param_1) {
        return uVar4;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < uVar2);
  }
  if (*(uint *)(iVar1 + 8) <= uVar2) {
    FUN_00452910(*(int *)(iVar1 + 0x14) + uVar2);
  }
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    if (param_1 == 0) {
      if (*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) != 0) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) == 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *(uint *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
      return uVar2;
    }
  }
  else {
    *(uint *)(iVar1 + 0xc) = uVar2 + 1;
    if (param_1 != 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *(uint *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
      return uVar2;
    }
  }
  *(uint *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
  return uVar2;
}



uint FUN_0045e180(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  
  iVar1 = *(int *)(in_ECX + 0x78);
  uVar2 = *(uint *)(iVar1 + 0xc);
  uVar3 = 0;
  if (uVar2 != 0) {
    piVar4 = *(int **)(iVar1 + 4);
    do {
      if (*piVar4 == param_1) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
      piVar4 = piVar4 + 1;
    } while (uVar3 < uVar2);
  }
  if (*(uint *)(iVar1 + 8) <= uVar2) {
    FUN_00452910(*(int *)(iVar1 + 0x14) + uVar2);
  }
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    if (param_1 == 0) {
      if (*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) != 0) {
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
      }
    }
    else if (*(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) == 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
      return uVar2 & 0xffff;
    }
  }
  else {
    *(uint *)(iVar1 + 0xc) = uVar2 + 1;
    if (param_1 != 0) {
      *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
      *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
      return uVar2 & 0xffff;
    }
  }
  *(int *)(*(int *)(iVar1 + 4) + uVar2 * 4) = param_1;
  return uVar2 & 0xffff;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0045e220(int param_1)

{
  int in_ECX;
  uint uVar1;
  undefined4 local_118;
  uint local_114;
  undefined4 local_110;
  uint local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_118;
  local_114 = *(uint *)(*(int *)(in_ECX + 0x74) + 0xc);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_118 = 1;
    (**(code **)(param_1 + 8))(param_1,&local_114,4,&local_118,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  uVar1 = 0;
  if (local_114 != 0) {
    do {
      local_110 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x74) + 4) + uVar1 * 4);
      if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
        local_118 = 1;
        (**(code **)(param_1 + 8))(param_1,&local_110,4,&local_118,1);
      }
      else {
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_114);
  }
  local_10c = *(uint *)(*(int *)(in_ECX + 0x78) + 0xc);
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_110 = 1;
    (**(code **)(param_1 + 8))(param_1,&local_10c,4,&local_110,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  uVar1 = 0;
  if (local_10c != 0) {
    do {
      local_118 = *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x78) + 4) + uVar1 * 4);
      if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
        local_110 = 1;
        (**(code **)(param_1 + 8))(param_1,&local_118,4,&local_110,1);
      }
      else {
        *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_10c);
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    _sprintf(local_108,"Numeric ID Array(%i)",local_114);
    FUN_004531b0(local_114 * 4 + 4,local_108);
    _sprintf(local_108,"WorldSpace ID Array(%i)",local_10c);
    FUN_004531b0(local_10c * 4 + 4,local_108);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_0045e3d0(int param_1)

{
  int iVar1;
  byte bVar2;
  int in_ECX;
  uint uVar3;
  uint local_118 [3];
  uint local_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_118;
  iVar1 = *(int *)(in_ECX + 0x74);
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar3 = 0;
    do {
      *(undefined4 *)(*(int *)(iVar1 + 4) + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 0xc));
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  iVar1 = *(int *)(in_ECX + 0x78);
  uVar3 = 0;
  if (*(int *)(iVar1 + 0xc) != 0) {
    do {
      *(undefined4 *)(*(int *)(iVar1 + 4) + uVar3 * 4) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)(iVar1 + 0xc));
  }
  uVar3 = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  local_118[0] = 1;
  (**(code **)(param_1 + 4))(param_1,&local_10c,4,local_118,1);
  if (local_10c != 0) {
    do {
      local_118[1] = 1;
      (**(code **)(param_1 + 4))(param_1,local_118,4,local_118 + 1,1);
      if ((*(int *)(in_ECX + 0x4c) != 0) && (bVar2 = (byte)(local_118[0] >> 0x18), bVar2 != 0xff)) {
        if ((bVar2 < *(byte *)(in_ECX + 0x48)) &&
           (bVar2 = *(byte *)((local_118[0] >> 0x18) + *(int *)(in_ECX + 0x4c)), bVar2 != 0xff)) {
          local_118[0] = (uint)bVar2 * 0x1000000 + (local_118[0] & 0xffffff);
        }
        else {
          local_118[0] = 0;
        }
      }
      iVar1 = *(int *)(in_ECX + 0x74);
      if (*(uint *)(iVar1 + 8) <= uVar3) {
        FUN_00452910(*(int *)(iVar1 + 0x14) + uVar3);
      }
      if (uVar3 < *(uint *)(iVar1 + 0xc)) {
        if (local_118[0] == 0) {
          if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) != 0) {
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) == 0) {
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        }
      }
      else {
        *(uint *)(iVar1 + 0xc) = uVar3 + 1;
        if (local_118[0] != 0) {
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        }
      }
      *(uint *)(*(int *)(iVar1 + 4) + uVar3 * 4) = local_118[0];
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_10c);
  }
  local_118[1] = 1;
  (**(code **)(param_1 + 4))(param_1,local_118 + 2,4,local_118 + 1,1);
  uVar3 = 0;
  if (local_118[2] != 0) {
    do {
      local_118[1] = 1;
      (**(code **)(param_1 + 4))(param_1,local_118,4,local_118 + 1,1);
      if ((*(int *)(in_ECX + 0x4c) != 0) && (bVar2 = (byte)(local_118[0] >> 0x18), bVar2 != 0xff)) {
        if ((bVar2 < *(byte *)(in_ECX + 0x48)) &&
           (bVar2 = *(byte *)((local_118[0] >> 0x18) + *(int *)(in_ECX + 0x4c)), bVar2 != 0xff)) {
          local_118[0] = (uint)bVar2 * 0x1000000 + (local_118[0] & 0xffffff);
        }
        else {
          local_118[0] = 0;
        }
      }
      iVar1 = *(int *)(in_ECX + 0x78);
      if (*(uint *)(iVar1 + 8) <= uVar3) {
        FUN_00452910(*(int *)(iVar1 + 0x14) + uVar3);
      }
      if (uVar3 < *(uint *)(iVar1 + 0xc)) {
        if (local_118[0] == 0) {
          if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) != 0) {
            *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
          }
        }
        else if (*(int *)(*(int *)(iVar1 + 4) + uVar3 * 4) == 0) {
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        }
      }
      else {
        *(uint *)(iVar1 + 0xc) = uVar3 + 1;
        if (local_118[0] != 0) {
          *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
        }
      }
      *(uint *)(*(int *)(iVar1 + 4) + uVar3 * 4) = local_118[0];
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_118[2]);
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    _sprintf(acStack_108,"Numeric ID Array(%i)",local_10c);
    FUN_004531b0(local_10c * 4 + 4,acStack_108);
    _sprintf(acStack_108,"WorldSpace ID Array(%i)",local_118[2]);
    FUN_004531b0(local_118[2] * 4 + 4,acStack_108);
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_0045e6a0(void)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  HANDLE hFindFile;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  BOOL BVar9;
  undefined4 *puVar10;
  undefined4 *unaff_ESI;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined1 uStack_aa471;
  undefined4 *puStack_aa470;
  int iStack_aa46c;
  HANDLE pvStack_aa464;
  _WIN32_FIND_DATAA _Stack_aa45c;
  char acStack_aa31c [260];
  CHAR aCStack_aa218 [252];
  char acStack_aa11c [252];
  undefined1 auStack_aa020 [696340];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ae44c;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfff55b7c;
  *unaff_FS_OFFSET = (int)&local_c;
  uStack_aa471 = 0;
  lstrcpyA(aCStack_aa218,"XBoxSaves\\*.*");
  hFindFile = FindFirstFileA(aCStack_aa218,&_Stack_aa45c);
  pvStack_aa464 = hFindFile;
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      if ((_Stack_aa45c.nFileSizeHigh != 0) || (_Stack_aa45c.nFileSizeLow != 0)) {
        _sprintf(acStack_aa31c,"XBoxSaves\\%s",_Stack_aa45c.cFileName,uVar3);
        iStack_aa46c = FUN_00401f00(0x154);
        local_4 = 0;
        if (iStack_aa46c == 0) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = (int *)FUN_00430970(acStack_aa31c,0,0x20000,0);
        }
        local_4 = 0xffffffff;
        (**(code **)(*piVar4 + 0x18))(0,0);
        _sprintf(acStack_aa11c,"%s%s%s.ess",&DAT_00b3f280,PTR_DAT_00b05564,&_Stack_aa45c.dwReserved0
                );
        iVar5 = FUN_00401f00(0x154);
        local_c = 1;
        if (iVar5 == 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = (undefined4 *)FUN_00430970(acStack_aa11c,1,0x20000,0);
        }
        local_c = -1;
        puVar10 = (undefined4 *)(_Stack_aa45c.ftLastWriteTime.dwHighDateTime - 0xd000);
        puStack_aa470 = puVar10;
        (**(code **)(*piVar4 + 0xc))(0xd000,0);
        bVar1 = true;
        puVar2 = puVar6;
        while (0 < (int)puVar10) {
          uVar7 = 0xaa000;
          if (bVar1) {
            uVar7 = 0xa9000;
          }
          iVar8 = (*(code *)piVar4[1])(piVar4,auStack_aa020,uVar7,&stack0xfff55b84,1);
          if (iVar8 != 0) {
            puStack_aa470 = (undefined4 *)0x1;
            (*(code *)puVar2[2])(puVar2,auStack_aa020,iVar8,&puStack_aa470,1);
          }
          iVar11 = 0x2000;
          if (bVar1) {
            iVar11 = 0x4000;
          }
          (**(code **)(*piVar4 + 0xc))(iVar11,1);
          bVar1 = false;
          puVar6 = (undefined4 *)((int)puVar6 - (iVar11 + iVar8));
          puVar2 = unaff_ESI;
          puVar10 = puVar6;
        }
        if (puVar2 != (undefined4 *)0x0) {
          (**(code **)*puVar2)(1);
        }
        (**(code **)*piVar4)(1);
        DeleteFileA(acStack_aa31c);
        uStack_aa471 = (undefined1)((uint)iVar5 >> 0x18);
        hFindFile = pvStack_aa464;
      }
      BVar9 = FindNextFileA(hFindFile,&_Stack_aa45c);
    } while (BVar9 != 0);
    FindClose(hFindFile);
  }
  *unaff_FS_OFFSET = local_c;
  return uStack_aa471;
}



void FUN_0045e940(char *param_1)

{
  char cVar1;
  char *pcVar2;
  char local_1;
  
  local_1 = '\0';
  if (param_1 != (char *)0x0) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_1 = (char)pcVar2 - ((char)param_1 + '\x01');
  }
  FUN_0045b9a0(&local_1,1);
  if (local_1 != '\0') {
    FUN_0045b9a0(param_1,local_1);
  }
  return;
}



void FUN_0045e990(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  float fStack_10;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  if (param_1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x174))();
    uStack_24 = *puVar2;
    uStack_20 = puVar2[1];
    uStack_1c = puVar2[2];
    iStack_c = param_1[8];
    iStack_8 = param_1[9];
    iStack_4 = param_1[10];
    cVar1 = FUN_00452430(&uStack_24);
    if (cVar1 != '\0') {
      FUN_004a7a60("Corrupt location found loading reference %08X, fixing it.",param_1[3]);
      cVar1 = (**(code **)(*param_1 + 400))();
      if ((cVar1 == '\0') || (cVar1 = FUN_005e0260(), cVar1 == '\0')) {
        iVar3 = FUN_0041e210(0x14);
        if (iVar3 == 0) {
          iVar3 = FUN_006ecc80();
          uVar6 = DAT_00b3f9a8;
          uVar7 = DAT_00b3f9ac;
          fVar8 = DAT_00b3f9b0;
          if (iVar3 != 0) {
            FUN_006ecc80();
            iVar3 = FUN_004af170();
            uVar6 = DAT_00b3f9a8;
            uVar7 = DAT_00b3f9ac;
            fVar8 = DAT_00b3f9b0;
            if (iVar3 != 0) {
              FUN_006ecc80();
              FUN_004af170();
              iVar3 = FUN_004e5a10();
              uVar6 = DAT_00b3f9a8;
              uVar7 = DAT_00b3f9ac;
              fVar8 = DAT_00b3f9b0;
              if (iVar3 != 0) {
                puVar2 = (undefined4 *)FUN_004bef40();
                fStack_10 = (float)puVar2[2] + 30.0;
                uVar6 = *puVar2;
                uVar7 = puVar2[1];
                fVar8 = fStack_10;
              }
            }
          }
          FUN_004d8a30(uVar6,uVar7,fVar8);
        }
        else {
          (**(code **)(*param_1 + 0xf4))(&uStack_24);
          (**(code **)(*param_1 + 0xf0))(&uStack_1c);
          FUN_004d8a30(uStack_24,uStack_20,uStack_1c);
          FUN_004d89a0(uStack_18,uStack_14,fStack_10);
          iVar3 = FUN_0041f7f0();
          if (iVar3 != 0) {
            iVar4 = FUN_009832e6(iVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
            iVar3 = FUN_009832e6(iVar3,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0301c,0);
            if ((iVar4 != 0) || (iVar3 != 0)) {
              FUN_004dd4b0(param_1,iVar4,iVar3);
            }
          }
        }
      }
      else {
        iVar3 = FUN_005e1f60();
        iVar4 = FUN_005e1f40();
        if ((iVar3 != 0) || (iVar4 != 0)) {
          puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xf4))(&uStack_18);
          FUN_004d8a30(*puVar2,puVar2[1],puVar2[2]);
          iVar5 = (**(code **)(*param_1 + 0xf0))(&uStack_1c);
          FUN_004d8a10(*(undefined4 *)(iVar5 + 8));
          FUN_004dd4b0(param_1,iVar3,iVar4);
        }
      }
    }
    cVar1 = FUN_00452430(&iStack_c);
    if (cVar1 != '\0') {
      FUN_004a7a60("Corrupt angle found loading reference %08X, setting to (0, 0, 0).",param_1[3]);
      FUN_004d89a0(DAT_00b3f9a8,DAT_00b3f9ac,DAT_00b3f9b0);
    }
  }
  return;
}



void FUN_0045ec50(void)

{
  undefined1 uVar1;
  DWORD DVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  DWORD DVar8;
  int in_ECX;
  byte bVar9;
  uint uVar10;
  int unaff_FS_OFFSET;
  undefined4 uVar11;
  undefined4 local_8;
  int local_4;
  
  cVar4 = FUN_0057bac0();
  if (cVar4 == '\0') {
    FUN_00440af0(1,0,0);
    DAT_00b33b08 = 0;
  }
  FUN_00446c20();
  local_4 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  uVar1 = *(undefined1 *)(local_4 + 0x184);
  *(undefined1 *)(local_4 + 0x184) = 1;
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x1004;
  FUN_004415c0();
  uVar10 = 0;
  iVar5 = FUN_00446b10();
  if (iVar5 != 0) {
    do {
      uVar11 = 0;
      uVar6 = FUN_00446b20(uVar10);
      FUN_0044f0c0(uVar6,uVar11);
      uVar10 = uVar10 + 1;
      uVar7 = FUN_00446b10();
    } while (uVar10 < uVar7);
  }
  DVar2 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar8 = GetCurrentThreadId();
  if (DVar8 == DVar2) {
    bVar9 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar9 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  DVar2 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar8 = GetCurrentThreadId();
  if (DVar8 == DVar2) {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
  }
  else {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
  }
  uVar10 = 0;
  if (*(int *)(*(int *)(in_ECX + 0xac) + 0xc) != 0) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0xac) + 4) + uVar10 * 4);
      if (((((piVar3 != (int *)0x0) && (cVar4 = (char)piVar3[1], cVar4 != '0')) && (cVar4 != '1'))
          && ((cVar4 != '3' && (cVar4 != '2')))) && (cVar4 != '5')) {
        if (((uint)piVar3[2] >> 3 & 1) == 0) {
          (**(code **)(*piVar3 + 0x6c))();
        }
        local_8 = 0;
        FUN_00446c50(uVar10,&local_8);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(*(int *)(in_ECX + 0xac) + 0xc));
  }
  uVar10 = 0;
  if (*(int *)(*(int *)(in_ECX + 0xac) + 0xc) != 0) {
    do {
      piVar3 = *(int **)(*(int *)(*(int *)(in_ECX + 0xac) + 4) + uVar10 * 4);
      if ((piVar3 != (int *)0x0) && (((uint)piVar3[2] >> 3 & 1) == 0)) {
        (**(code **)(*piVar3 + 0x6c))();
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(*(int *)(in_ECX + 0xac) + 0xc));
  }
  DVar2 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar8 = GetCurrentThreadId();
  if (DVar8 == DVar2) {
    if ((bVar9 & 1) == 0) {
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
    }
    else {
      *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 1;
    }
  }
  else if ((bVar9 & 1) == 0) {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
  }
  else {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 0x40000;
  }
  iVar5 = *(int *)(in_ECX + 0xac);
  uVar10 = 0;
  if (*(int *)(iVar5 + 0xc) != 0) {
    do {
      *(undefined4 *)(*(int *)(iVar5 + 4) + uVar10 * 4) = 0;
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(iVar5 + 0xc));
  }
  *(undefined4 *)(iVar5 + 0xc) = 0;
  *(undefined4 *)(iVar5 + 0x10) = 0;
  if (*(undefined4 **)(in_ECX + 0xac) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)(in_ECX + 0xac))(1);
  }
  *(undefined4 *)(in_ECX + 0xac) = 0;
  if (*(int *)(DAT_00b33a98 + 0xbc) != 0) {
    for (piVar3 = (int *)(*(int *)(DAT_00b33a98 + 0xbc) + 4);
        (piVar3 != (int *)0x0 && (iVar5 = *piVar3, iVar5 != 0)); piVar3 = (int *)piVar3[1]) {
      if (((*(uint *)(iVar5 + 8) >> 6 & 1) != 0) && (*(int *)(iVar5 + 0x20) != 0)) {
        FUN_004ef170(1);
      }
    }
  }
  uVar6 = FUN_006ecc80();
  FUN_004d8aa0(0);
  FUN_00447ca0();
  FUN_004d8aa0(uVar6);
  *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xffffeffb;
  *(undefined1 *)(local_4 + 0x184) = uVar1;
  *(undefined1 *)(in_ECX + 0xa8) = 1;
  return;
}



void FUN_0045ef00(uint param_1)

{
  void *_Dst;
  undefined4 *in_ECX;
  
  in_ECX[1] = param_1;
  *in_ECX = &PTR_FUN_00a3904c;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                              (uint)((ulonglong)param_1 * 4));
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  *in_ECX = &PTR_FUN_00a3aa98;
  return;
}



void FUN_0045ef50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae488;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3aa98;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3904c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045efc0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae4b8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3aab8;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a3906c;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual __thiscall CButton::~CButton(void)
    public: virtual __thiscall CComboBox::~CComboBox(void)
    public: virtual __thiscall CDateTimeCtrl::~CDateTimeCtrl(void)
    public: virtual __thiscall CDialogBar::~CDialogBar(void)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__CProgressCtrl(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ae4e8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FID_conflict__scalar_deleting_destructor__00a3a2ec;
  local_4 = 0;
  FUN_0045a8b0(uVar1);
  local_4 = 0xffffffff;
  FUN_0045a620();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045f090(byte param_1)

{
  FUN_0045a990();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045f0b0(byte param_1)

{
  FUN_0045aad0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045f0d0(byte param_1)

{
  FUN_0045ac30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0045f0f0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0045ef00(0x25);
  }
  local_4 = 0xffffffff;
  *in_ECX = uVar3;
  puVar4 = (undefined4 *)FUN_00401f00(8,uVar1);
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *puVar4 = 0;
    puVar4[1] = 0;
  }
  in_ECX[1] = puVar4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0045f180(int *param_1,uint *param_2)

{
  DWORD DVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  DWORD DVar7;
  int in_ECX;
  uint uVar8;
  undefined4 uVar9;
  
  uVar5 = *param_2;
  uVar8 = uVar5 & 0xfff;
  iVar4 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
  if (iVar4 != 0) {
    uVar8 = uVar5 & 0x7ff;
  }
  if ((uVar8 != 0) && (cVar2 = FUN_00446b80(param_1[3]), cVar2 != '\0')) goto LAB_0045f1d0;
  uVar5 = FUN_004535a0(param_1,uVar5);
  *(undefined4 *)(in_ECX + 0x44) = 0x1ffff000;
  (**(code **)(*param_1 + 0x60))(uVar5 & 0x1ffff080);
  if (uVar8 != 0) {
    FUN_0045bde0(param_1,uVar8,0);
    if ((int)uVar5 < 0) {
      FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03054,0);
      iVar4 = FUN_006ecc80();
      if (iVar4 == 0) {
LAB_0045f1d0:
        FUN_0045c7a0(param_1);
        return;
      }
      uVar9 = 0;
      uVar6 = FUN_006ecc80(0);
      cVar2 = FUN_0043f8c0(uVar6,uVar9);
      if (cVar2 == '\0') goto LAB_0045f1d0;
    }
    uVar3 = FUN_0045a500();
    if ((char)param_1[1] == '0') {
      DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
      DVar7 = GetCurrentThreadId();
      if (DVar7 == DVar1) {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffe;
      }
      else {
        *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffbffff;
      }
    }
    (**(code **)(*param_1 + 0x6c))();
    FUN_0045a530(uVar3);
    cVar2 = FUN_0045c020(param_1,uVar8,0);
    if (cVar2 == '\0') {
      return;
    }
  }
  *(undefined4 *)(in_ECX + 0x44) = 0x60000000;
  (**(code **)(*param_1 + 0x60))(uVar5 & 0x60000000);
  FUN_0045b7a0(param_1,uVar5);
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_0045f2e0(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  int *unaff_FS_OFFSET;
  int local_634 [2];
  undefined1 local_62c [4];
  char local_628 [4];
  undefined1 local_624 [516];
  char local_420 [259];
  undefined4 uStack_31d;
  undefined1 auStack_318 [256];
  char local_218 [259];
  undefined4 uStack_115;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009ae52c;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_634;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffff9bc;
  *unaff_FS_OFFSET = (int)&local_c;
  local_62c = (undefined1  [4])param_1;
  if (param_1 == 0) {
    if (param_2 == (char *)0x0) {
      FUN_0045d920(local_218);
    }
    else {
      iVar4 = -(int)param_2;
      do {
        cVar1 = *param_2;
        param_2[(int)(local_218 + iVar4)] = cVar1;
        param_2 = param_2 + 1;
      } while (cVar1 != '\0');
    }
    _sprintf(local_420,"%s%s%s.ess",&DAT_00b3f280,PTR_DAT_00b05564,local_218,uVar2);
    if (param_3 == 0) {
      iVar4 = 0;
      do {
        cVar1 = (&DAT_00b3f280)[iVar4];
        *(char *)((int)&uStack_115 + iVar4 + 1) = cVar1;
        iVar4 = iVar4 + 1;
        pcVar3 = PTR_DAT_00b05564;
      } while (cVar1 != '\0');
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      uVar2 = (int)pcVar3 - (int)PTR_DAT_00b05564;
      puVar9 = &uStack_115;
      do {
        pcVar3 = (char *)((int)puVar9 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      } while (*pcVar3 != '\0');
      puVar7 = (undefined4 *)PTR_DAT_00b05564;
      for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar9 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar9 = puVar9 + 1;
      }
      for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)puVar9 = *(undefined1 *)puVar7;
        puVar7 = (undefined4 *)((int)puVar7 + 1);
        puVar9 = (undefined4 *)((int)puVar9 + 1);
      }
      CreateDirectoryA((LPCSTR)((int)&uStack_115 + 1),(LPSECURITY_ATTRIBUTES)0x0);
      local_634[0] = DAT_00b05bc4;
      if (10 < DAT_00b05bc4) {
        local_634[0] = 10;
      }
      while (local_634[0] = local_634[0] + -1, -1 < local_634[0]) {
        iVar4 = 0;
        do {
          cVar1 = (&DAT_00b3f280)[iVar4];
          local_628[iVar4] = cVar1;
          iVar4 = iVar4 + 1;
          pcVar3 = PTR_DAT_00b05564;
        } while (cVar1 != '\0');
        do {
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + 1;
        } while (cVar1 != '\0');
        uVar2 = (int)pcVar3 - (int)PTR_DAT_00b05564;
        pcVar3 = local_62c + 3;
        do {
          pcVar8 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = PTR_DAT_00b05564;
        for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar2 = uVar2 & 3; pcVar5 = local_218, uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar3 = pcVar3 + 1;
        }
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        uVar2 = (int)pcVar5 - (int)local_218;
        pcVar3 = local_62c + 3;
        do {
          pcVar8 = pcVar3 + 1;
          pcVar3 = pcVar3 + 1;
        } while (*pcVar8 != '\0');
        pcVar8 = local_218;
        for (uVar6 = uVar2 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pcVar3 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar3 = pcVar3 + 4;
        }
        for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
          *pcVar3 = *pcVar8;
          pcVar8 = pcVar8 + 1;
          pcVar3 = pcVar3 + 1;
        }
        iVar4 = local_634[0];
        if (0 < local_634[0]) {
          do {
            puVar9 = (undefined4 *)(local_62c + 3);
            do {
              puVar7 = puVar9;
              puVar9 = (undefined4 *)((int)puVar7 + 1);
            } while (*(char *)((int)puVar7 + 1) != '\0');
            iVar4 = iVar4 + -1;
            *(undefined4 *)((int)puVar7 + 1) = 0x6b61622e;
            *(undefined1 *)((int)puVar7 + 5) = 0;
          } while (iVar4 != 0);
        }
        iVar4 = 0;
        do {
          cVar1 = local_628[iVar4];
          *(char *)((int)&uStack_31d + iVar4 + 1) = cVar1;
          iVar4 = iVar4 + 1;
        } while (cVar1 != '\0');
        puVar9 = &uStack_31d;
        do {
          puVar7 = puVar9;
          puVar9 = (undefined4 *)((int)puVar7 + 1);
        } while (*(char *)((int)puVar7 + 1) != '\0');
        *(undefined4 *)((int)puVar7 + 1) = 0x6b61622e;
        *(undefined1 *)((int)puVar7 + 5) = 0;
        if (local_634[0] == 0) {
          iVar4 = 0;
          do {
            pcVar3 = local_420 + iVar4;
            local_628[iVar4] = *pcVar3;
            iVar4 = iVar4 + 1;
          } while (*pcVar3 != '\0');
        }
        if ((DAT_00b33a04 != (int *)0x0) &&
           (iVar4 = (**(code **)(*DAT_00b33a04 + 4))(local_628,0,0,0xffffffff), iVar4 != 0)) {
          if ((DAT_00b33a04 != (int *)0x0) &&
             (iVar4 = (**(code **)(*DAT_00b33a04 + 4))((int)&uStack_31d + 1,0,0,0xffffffff),
             iVar4 != 0)) {
            DeleteFileA((LPCSTR)((int)&uStack_31d + 1));
          }
          FUN_0098544f(local_628,(int)&uStack_31d + 1);
        }
      }
      goto LAB_0045f356;
    }
  }
  else {
    pcVar3 = (char *)(param_1 + 0x3c);
    iVar4 = -(int)pcVar3;
    do {
      cVar1 = *pcVar3;
      pcVar3[(int)(local_420 + iVar4)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  if (3 < param_3) {
    *unaff_FS_OFFSET = local_c;
    return param_1;
  }
LAB_0045f356:
                    /* WARNING: Could not recover jumptable at 0x0045f356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (*(code *)(&PTR_LAB_0045f790)[param_3])();
  return iVar4;
}



void FUN_0045f7a0(int param_1,uint param_2)

{
  DWORD DVar1;
  byte bVar2;
  DWORD DVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar3 = GetCurrentThreadId();
  if (DVar3 == DVar1) {
    bVar2 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar2 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)(*DAT_00b34d90 + 0x18))
              ("Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
  }
  uVar5 = 0;
  if (param_2 >> 2 != 0) {
    do {
      if (*(char *)(in_ECX + 0x7d) == '\0') {
        uVar4 = *(undefined4 *)(param_1 + uVar5 * 4);
      }
      else {
        uVar4 = FUN_0045e0d0(*(undefined4 *)(param_1 + uVar5 * 4));
      }
      **(undefined4 **)(in_ECX + 0x14) = uVar4;
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_2 >> 2);
  }
  return;
}



void FUN_0045f820(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  DWORD DVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  DWORD DVar7;
  int in_ECX;
  int *piVar8;
  uint uVar9;
  uint local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  uVar5 = 0;
  piVar8 = (int *)(DAT_00b33a98 + 0x74);
  for (piVar1 = piVar8; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      uVar5 = uVar5 + 1;
    }
  }
  local_c = (uint)uVar5;
  uVar9 = (uint)(ushort)(uVar5 * 8 + 2);
  iVar6 = thunk_FUN_00401aa0(uVar9,1);
  *(int *)(in_ECX + 0x14) = iVar6;
  if (iVar6 == 0) {
    FUN_00404ec0("Could not create save buffer, out of memory.");
  }
  uVar2 = *(undefined4 *)(in_ECX + 0x14);
  local_4 = uVar2;
  FUN_0045b9a0(&local_c,2);
  for (; piVar8 != (int *)0x0; piVar8 = (int *)piVar8[1]) {
    iVar6 = *piVar8;
    if (iVar6 != 0) {
      local_c = *(uint *)(iVar6 + 0xc);
      local_8 = *(undefined4 *)(iVar6 + 0x24);
      FUN_0045f7a0(&local_c,4);
      DVar3 = *(DWORD *)(DAT_00b33398 + 0x10);
      DVar7 = GetCurrentThreadId();
      if (DVar7 == DVar3) {
        bVar4 = *(byte *)(in_ECX + 0x18);
      }
      else {
        bVar4 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
      }
      if ((bVar4 & 1) != 0) {
        (**(code **)(*DAT_00b34d90 + 0x18))
                  ("Error: TESSaveLoadGame::SaveGameData() was called while loading.\n");
      }
      **(undefined4 **)(in_ECX + 0x14) = local_8;
      *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + 4;
    }
    uVar2 = local_4;
  }
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    local_4 = 1;
    (**(code **)(param_1 + 8))(param_1,uVar2,uVar9,&local_4,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + uVar9;
  }
  FUN_00401e40(uVar2);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_004531b0(uVar9,"Global Variables");
  }
  return;
}



void FUN_0045f970(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  int *piVar6;
  bool bVar7;
  float fStack_58;
  uint local_54;
  uint local_50;
  undefined4 uStack_4c;
  int local_48;
  int *local_44;
  
  iVar2 = 0;
  local_48 = 0;
  local_44 = (int *)0x0;
  for (piVar6 = (int *)(DAT_00b33a98 + 0x74); piVar6 != (int *)0x0; piVar6 = (int *)piVar6[1]) {
    iVar4 = *piVar6;
    iVar1 = local_48;
    if ((iVar4 != 0) && (bVar7 = iVar2 != 0, iVar2 = iVar4, iVar1 = iVar4, bVar7)) {
      piVar3 = (int *)FUN_00401f00();
      if (piVar3 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      else {
        *piVar3 = local_48;
        piVar3[1] = 0;
      }
      piVar3[1] = (int)local_44;
      local_44 = piVar3;
    }
    local_48 = iVar1;
  }
  local_50 = 1;
  (**(code **)(param_1 + 4))(param_1,&local_54,2,&local_50,1);
  local_50 = local_54 * 8 & 0xffff;
  iVar2 = thunk_FUN_00401aa0(local_50,1);
  *(int *)(in_ECX + 0x14) = iVar2;
  if (iVar2 == 0) {
    FUN_00404ec0();
  }
  fStack_58 = 1.4013e-45;
  (**(code **)(param_1 + 4))(param_1,*(undefined4 *)(in_ECX + 0x14),local_50,&fStack_58,1);
  iVar2 = 0;
  if ((short)local_54 != 0) {
    do {
      FUN_0045ba00(&uStack_4c,4);
      fStack_58 = **(float **)(in_ECX + 0x14);
      *(float **)(in_ECX + 0x14) = *(float **)(in_ECX + 0x14) + 1;
      iVar4 = FUN_00983ffd((double)fStack_58);
      if ((iVar4 == 0) || (iVar4 = __isnan((double)fStack_58), iVar4 != 0)) {
        fStack_58 = 0.0;
      }
      uVar5 = FUN_0046b250(uStack_4c,0,&PTR_PTR_00b02f9c);
      iVar4 = FUN_009832e6(uVar5);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x24) = fStack_58;
        FUN_0065c620();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)(local_54 & 0xffff));
  }
  FUN_00401e40();
  *(undefined4 *)(in_ECX + 0x14) = 0;
  piVar6 = &local_48;
  do {
    if (*piVar6 != 0) {
      FUN_0045bde0(*piVar6,1,0);
    }
    piVar6 = (int *)piVar6[1];
  } while (piVar6 != (int *)0x0);
  if (*(int *)(in_ECX + 0x40) != 0) {
    FUN_004531b0(local_50,"Global Variables");
  }
  return;
}



void FUN_0045fb50(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_4;
  
  local_4 = FUN_00679480();
  iVar2 = param_1;
  if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    param_1 = 1;
    (*(code *)*puVar1)(iVar2,&local_4,4,&param_1,1);
  }
  else {
    *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 4;
  }
  if (local_4 != 0) {
    if (*(int *)(in_ECX + 0x40) != 0) {
      FUN_004531b0(local_4,"Temp Effects List");
    }
    iVar3 = thunk_FUN_00401aa0(local_4,1);
    *(int *)(in_ECX + 0x14) = iVar3;
    if (iVar3 == 0) {
      FUN_00404ec0("Could not create save buffer, out of memory.");
    }
    iVar3 = *(int *)(in_ECX + 0x14);
    FUN_00679630();
    if (iVar3 + local_4 != *(int *)(in_ECX + 0x14)) {
      (**(code **)(*DAT_00b34d90 + 0x18))
                (
                "SaveTempEffectsList() call did not properly fill buffer.  See Warnings.txt for more info."
                );
    }
    if ((*(uint *)(in_ECX + 0x18) >> 9 & 1) == 0) {
      param_1 = 1;
      (**(code **)(iVar2 + 8))(iVar2,iVar3,local_4,&param_1,1);
    }
    else {
      *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + local_4;
    }
    FUN_00401e40(iVar3);
    *(undefined4 *)(in_ECX + 0x14) = 0;
  }
  return;
}



void FUN_0045fc60(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_4;
  
  iVar2 = param_1;
  local_4 = 0;
  if (0x24 < *(byte *)(DAT_00b33b00 + 0x7c)) {
    if (0x26 < *(byte *)(DAT_00b33b00 + 0x7c)) {
      puVar1 = (undefined4 *)(param_1 + 4);
      param_1 = 1;
      (*(code *)*puVar1)(iVar2,&local_4,4,&param_1,1);
    }
    if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x27) {
      local_4 = 0;
      param_1 = 1;
      (**(code **)(iVar2 + 4))(iVar2,&local_4,2,&param_1,1);
    }
    if (local_4 != 0) {
      if (*(int *)(in_ECX + 0x40) != 0) {
        FUN_004531b0(local_4,"Temp Effects List");
      }
      iVar3 = thunk_FUN_00401aa0(local_4,1);
      *(int *)(in_ECX + 0x14) = iVar3;
      if (iVar3 == 0) {
        FUN_00404ec0("Could not create save buffer, out of memory.");
      }
      iVar3 = *(int *)(in_ECX + 0x14);
      if (0x5d < *(byte *)(DAT_00b33b00 + 0x7c)) {
        param_1 = 1;
        (**(code **)(iVar2 + 4))(iVar2,iVar3,local_4,&param_1,1);
        FUN_00679850();
      }
      if (*(byte *)(DAT_00b33b00 + 0x7c) < 0x5e) {
        *(int *)(in_ECX + 0x14) = *(int *)(in_ECX + 0x14) + local_4;
      }
      if (local_4 + iVar3 != *(int *)(in_ECX + 0x14)) {
        (**(code **)(*DAT_00b34d90 + 0x18))
                  (
                  "LoadTempEffectsList() call did not properly empty buffer.  See Warnings.txt for more info."
                  );
      }
      FUN_00401e40(iVar3);
      *(undefined4 *)(in_ECX + 0x14) = 0;
    }
  }
  return;
}



void FUN_0045fda0(int param_1,int param_2,char param_3)

{
  DWORD DVar1;
  undefined4 *puVar2;
  byte bVar3;
  char cVar4;
  DWORD DVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  undefined4 uVar10;
  int *piVar11;
  int in_ECX;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  bool local_31;
  int *piStack_2c;
  uint *local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  int iStack_8;
  undefined4 uStack_4;
  
  DVar1 = *(DWORD *)(DAT_00b33398 + 0x10);
  DVar5 = GetCurrentThreadId();
  if (DVar5 == DVar1) {
    bVar3 = *(byte *)(in_ECX + 0x18);
  }
  else {
    bVar3 = (byte)(*(uint *)(in_ECX + 0x18) >> 0x12);
  }
  puVar13 = (uint *)0x0;
  if ((bVar3 & 1) != 0) {
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) | 2;
    if (param_3 != '\0') {
      *(undefined4 *)(g_IOManager_singleton + 0x38) = 5;
    }
    local_31 = param_1 == 0;
    if (local_31) {
      param_1 = *(int *)(in_ECX + 0x1c);
    }
    local_31 = !local_31;
    if (param_2 != 0) {
      (**(code **)(*DAT_00b333c4 + 0x58))(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
      ;
    }
    local_24 = 0;
    local_20 = 0;
    if ((param_1 != 0) &&
       (puVar8 = *(uint **)(param_1 + 0xc), local_28 = puVar8, puVar8 != (uint *)0x0)) {
      do {
        puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + (int)puVar13 * 4);
        if ((puVar2 != (undefined4 *)0x0) && ((int *)*puVar2 != DAT_00b333c4)) {
          bVar3 = *(byte *)(puVar2 + 3);
          if (bVar3 < 0x13) {
            FUN_004a7a60("Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i.  Errors may occur."
                         ,bVar3,0x13);
          }
          *(byte *)(in_ECX + 0x7c) = bVar3;
          (**(code **)(*(int *)*puVar2 + 0x58))(puVar2[1],puVar2[2]);
          if ((((local_31) &&
               (iVar6 = FUN_009832e6(*puVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03070,0), iVar6 != 0))
              && (iVar7 = FUN_006ecc80(), iVar7 == 0)) && (iVar7 = FUN_004d6670(), iVar7 == 0)) {
            FUN_00446cb0(iVar6);
          }
          *(undefined1 *)(in_ECX + 0x7c) = *(undefined1 *)(in_ECX + 0x71);
          puVar8 = local_28;
        }
        puVar13 = (uint *)((int)puVar13 + 1);
      } while (puVar13 < puVar8);
    }
    if (local_31) {
      piStack_2c = &local_24;
      do {
        if ((piStack_2c[1] == 0) && (iVar6 = local_20, *piStack_2c == 0)) break;
        iVar6 = *piStack_2c;
        FUN_005ed860();
        uVar10 = *(undefined4 *)(iVar6 + 0xc);
        cVar4 = FUN_0055e000(uVar10,&local_28);
        puVar13 = local_28;
        if (cVar4 == '\0') {
          puVar13 = (uint *)FUN_00401f00(8);
          if (puVar13 == (uint *)0x0) {
            local_28 = (uint *)0x0;
            FUN_00452570(uVar10,0);
            puVar13 = (uint *)0x0;
          }
          else {
            *puVar13 = 0;
            puVar13[1] = 0;
            local_28 = puVar13;
            FUN_00452570(uVar10,puVar13);
          }
        }
        if (puVar13[1] == 0) {
          *puVar13 = *puVar13 | 4;
        }
        iVar7 = FUN_006ecc80();
        if ((iVar7 == 0) && (iVar7 = FUN_004d6670(), iVar7 == 0)) {
          lVar9 = _strtol(PTR_s_2AEEA_00b05bb4,(char **)0x0,0x10);
          uVar10 = FUN_0046b250(lVar9,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03038,0);
          iVar7 = FUN_009832e6(uVar10);
          if (iVar7 == 0) {
            FUN_0046aba0(1);
          }
          else {
            iStack_18 = DAT_00b3f9a8;
            iStack_c = DAT_00b3f9a8;
            iStack_14 = DAT_00b3f9ac;
            iStack_8 = DAT_00b3f9ac;
            uStack_10 = DAT_00b3f9b0;
            uStack_4 = DAT_00b3f9b0;
            FUN_004d5d70(&iStack_18,&iStack_c);
            FUN_004d8a30(iStack_18,iStack_14,uStack_10);
            FUN_004d89a0(iStack_c,iStack_8,uStack_4);
            FUN_004dd4b0(iVar6,iVar7,0);
          }
        }
        piStack_2c = (int *)piStack_2c[1];
        iVar6 = local_20;
      } while (piStack_2c != (int *)0x0);
      while (iVar6 != 0) {
        iVar7 = *(int *)(iVar6 + 4);
        FUN_00401f20(iVar6);
        iVar6 = iVar7;
      }
      FUN_00677240();
      FUN_0067c230();
    }
    if (param_3 != '\0') {
      if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
        iVar6 = 0;
      }
      else {
        cVar4 = FUN_004c97f0();
        iVar6 = DAT_00b35c24;
        if (cVar4 != '\0') {
          iVar6 = FUN_00424180();
        }
        if (iVar6 != 0) {
          FUN_00889e00();
        }
      }
      if (DAT_00b35c24 != 0) {
        FUN_00889e00();
      }
      FUN_004416f0();
      iVar7 = FUN_00660110(0);
      if (iVar7 == 0) {
        ModelLoader_QueueReference(DAT_00b333c4,0);
      }
      FUN_00434020(5);
      *(undefined4 *)(g_IOManager_singleton + 0x38) = 5;
      if (iVar6 != 0) {
        FUN_0088d1d0(0);
      }
      if (DAT_00b35c24 != 0) {
        FUN_0088d1d0(0);
      }
      if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
        FUN_00482310();
        piVar11 = (int *)(**(code **)(*DAT_00b333c4 + 0x174))();
        local_24 = *piVar11;
        local_20 = piVar11[1];
        iStack_1c = piVar11[2];
        uStack_4 = 0;
        iStack_c = local_24;
        iStack_8 = local_20;
        FUN_00440590(&local_24,&uStack_4);
        DAT_00b2cbc0 = 0;
        FUN_004ebda0(iStack_c,iStack_8,uStack_4,DAT_00b258dc,DAT_00b258e0,DAT_00b258e4,0x3f800000);
        FUN_004ea6e0(local_24,local_20,iStack_1c,0);
        DAT_00b2cbc0 = 1;
      }
    }
    if (param_2 != 0) {
      iVar6 = FUN_006ecc80();
      if (iVar6 != 0) {
        FUN_006637c0();
      }
      (**(code **)(*DAT_00b333c4 + 0x5c))(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
      ;
    }
    if (param_1 != 0) {
      uVar12 = *(uint *)(param_1 + 0xc);
      uVar14 = 0;
      if (uVar12 != 0) {
        do {
          puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + uVar14 * 4);
          if (puVar2 != (undefined4 *)0x0) {
            bVar3 = *(byte *)(puVar2 + 3);
            if (bVar3 < 0x13) {
              FUN_004a7a60("Savegame loading error: Attempting to set the current version to %i.  The oldest compatible version is %i.  Errors may occur."
                           ,bVar3,0x13);
            }
            *(byte *)(in_ECX + 0x7c) = bVar3;
            (**(code **)(*(int *)*puVar2 + 0x5c))(puVar2[1],puVar2[2]);
            *(undefined1 *)(in_ECX + 0x7c) = *(undefined1 *)(in_ECX + 0x71);
            FUN_00401f20(puVar2);
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar12);
      }
    }
    iVar6 = *(int *)(in_ECX + 0x1c);
    if (iVar6 != 0) {
      uVar12 = 0;
      if (*(int *)(iVar6 + 0xc) != 0) {
        do {
          *(undefined4 *)(*(int *)(iVar6 + 4) + uVar12 * 4) = 0;
          uVar12 = uVar12 + 1;
        } while (uVar12 < *(uint *)(iVar6 + 0xc));
      }
      *(undefined4 *)(iVar6 + 0xc) = 0;
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (*(undefined4 **)(in_ECX + 0x1c) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(in_ECX + 0x1c))(1);
      }
      *(undefined4 *)(in_ECX + 0x1c) = 0;
    }
    if (param_3 != '\0') {
      if (*(int *)(DAT_00b333a0 + 0x34) == 0) {
        iVar6 = 0;
      }
      else {
        cVar4 = FUN_004c97f0();
        iVar6 = DAT_00b35c24;
        if (cVar4 != '\0') {
          iVar6 = FUN_00424180();
        }
        if (iVar6 != 0) {
          FUN_00889e00();
        }
      }
      if (DAT_00b35c24 != 0) {
        FUN_00889e00();
      }
      FUN_00434020(5);
      if (iVar6 != 0) {
        FUN_0088d1d0(0);
      }
      if (DAT_00b35c24 != 0) {
        FUN_0088d1d0(0);
      }
    }
    *(uint *)(in_ECX + 0x18) = *(uint *)(in_ECX + 0x18) & 0xfffffffd;
  }
  return;
}


