
/* Library Function - Multiple Matches With Same Base Name
    public: static class CNoTrackObject * __cdecl CProcessLocal<class
   CControlSiteFactoryMgr>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   AFX_MODULE_THREAD_STATE>::CreateObject(void)
    public: static class CNoTrackObject * __cdecl CThreadLocal<class
   _AFXCTL_AMBIENT_CACHE>::CreateObject(void)
   
   Library: Visual Studio 2005 Release */

undefined4 CreateObject(void)

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
  local_10 = FUN_00401f00(0x4c,uVar1);
  local_4 = 0;
  if (local_10 != 0) {
    uVar2 = FUN_00581810();
    *unaff_FS_OFFSET = local_c;
    return uVar2;
  }
  *unaff_FS_OFFSET = local_c;
  return 0;
}



undefined4 * FUN_00590070(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x44);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[5] = &PTR_FUN_00a6909c;
    puVar1[0xf] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xc] = &PTR_FUN_00a690ac;
    puVar1[9] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *puVar1 = &PTR_FUN_00a69138;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



void FUN_005900f0(byte param_1)

{
  FUN_00591b70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_00590130(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x48);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[5] = &PTR_FUN_00a6909c;
    puVar1[0xf] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xc] = &PTR_FUN_00a690ac;
    puVar1[9] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *puVar1 = &PTR_FUN_00a6af14;
    puVar1[0x11] = 0;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



void FUN_005901b0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfa38;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6af3c;
  local_4 = 0;
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70(uVar1);
  }
  local_4 = 0xffffffff;
  FUN_0058fab0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00590220(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00401f00(0x40);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *(undefined2 *)(puVar1 + 3) = 0;
    *(undefined2 *)((int)puVar1 + 0xe) = 0;
    puVar1[8] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[5] = &PTR_FUN_00a6909c;
    puVar1[0xf] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xc] = &PTR_FUN_00a690ac;
    puVar1[9] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *puVar1 = &PTR_FUN_00a6af3c;
    return puVar1;
  }
  return (undefined4 *)0x0;
}



void FUN_00590280(byte param_1)

{
  FUN_005901b0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 * FUN_005902a0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  switch(param_2) {
  case 0x385:
    puVar1 = (undefined4 *)FUN_00590070(param_1);
    return puVar1;
  case 0x386:
    puVar1 = (undefined4 *)CreateObject(param_1);
    return puVar1;
  case 0x387:
    puVar1 = (undefined4 *)FUN_0058fec0(param_1);
    return puVar1;
  case 0x388:
    puVar1 = (undefined4 *)FUN_00401f00(0x5c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = 0;
      *(undefined2 *)(puVar1 + 3) = 0;
      *(undefined2 *)((int)puVar1 + 0xe) = 0;
      puVar1[8] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[5] = &PTR_FUN_00a6909c;
      puVar1[0xf] = 0;
      puVar1[0xd] = 0;
      puVar1[0xe] = 0;
      puVar1[0xc] = &PTR_FUN_00a690ac;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      *(undefined1 *)((int)puVar1 + 6) = 0;
      *puVar1 = &PTR_FUN_00a6aeec;
      puVar1[0x12] = 0;
      *(undefined2 *)(puVar1 + 0x13) = 0;
      *(undefined2 *)((int)puVar1 + 0x4e) = 0;
      puVar1[0x14] = 0;
      *(undefined2 *)(puVar1 + 0x15) = 0;
      *(undefined2 *)((int)puVar1 + 0x56) = 0;
      puVar1[0x16] = 0xbf800000;
      puVar1[9] = 0;
      puVar1[0x10] = 0;
      puVar1[0x11] = 0;
      return puVar1;
    }
    break;
  case 0x389:
    puVar1 = (undefined4 *)FUN_00590130(param_1);
    return puVar1;
  case 0x38b:
    puVar1 = (undefined4 *)FUN_00590220(param_1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}



int * FUN_00590330(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int *in_ECX;
  int *local_4;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  local_4 = (int *)0x0;
  while( true ) {
    while( true ) {
      if (puVar1 == (undefined4 *)0x0) {
        return local_4;
      }
      piVar2 = (int *)puVar1[2];
      puVar1 = (undefined4 *)*puVar1;
      if (*piVar2 == 0x28) break;
      if (*piVar2 == 0x2d) {
        in_ECX = (int *)in_ECX[4];
      }
    }
    uVar3 = FUN_009828c0();
    piVar4 = (int *)FUN_005902a0(in_ECX,uVar3);
    if (piVar4 == (int *)0x0) break;
    (**(code **)(*piVar4 + 4))(in_ECX,0,0);
    FUN_004028d0(piVar2[2],0);
    if (local_4 == (int *)0x0) {
      local_4 = piVar4;
    }
    piVar2[4] = (int)piVar4;
    in_ECX = piVar4;
  }
  FUN_004a7a60("Unable to create tile. Aborting menu creation.");
  return (int *)0x0;
}



void FUN_005903e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  if (*(int *)(iVar1 + 0x68) != 0) {
    FUN_0058fba0(0);
  }
  if (*(char *)(iVar1 + 0xb8) != '\0') {
    *(undefined1 *)(iVar1 + 0xb8) = 0;
    FUN_004a25f0();
    return;
  }
  return;
}



undefined4 FUN_00590420(int param_1)

{
  int *piVar1;
  undefined1 uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  iVar7 = DAT_00b34d88;
  uVar2 = DAT_00b06b18;
  DAT_00b3b0a0 = '\0';
  DAT_00b06b18 = 1;
  piVar3 = (int *)FUN_0058dbd0(param_1,0,0);
  if (DAT_00b3b0a0 != '\0') {
    return 0;
  }
  iVar5 = piVar3[3];
  if (iVar5 == 0) {
    iVar5 = *piVar3;
  }
  uVar4 = FUN_00590330(iVar5);
  if (DAT_00b3b0a0 == '\0') {
    iVar5 = piVar3[3];
    if (iVar5 == 0) {
      iVar5 = *piVar3;
    }
    FUN_0058cf40(iVar5);
    if (DAT_00b3b0a0 == '\0') {
      if (DAT_00b3b0a1 != '\0') {
        FUN_004a7a60("A tile descriptor was not terminated... Check XML file.");
        DAT_00b3b0a1 = '\0';
      }
      iVar5 = FUN_005898f0();
      if (iVar5 != 0) {
        for (piVar1 = piVar3 + 1; (piVar1 != (int *)0x0 && (*piVar1 != 0));
            piVar1 = (int *)piVar1[1]) {
          FUN_00584960(*piVar1);
          *(undefined1 *)(iVar5 + 0x1c) = 1;
          *(undefined1 *)(piVar3 + 4) = 0;
          if (DAT_00b3b0a0 != '\0') {
            return 0;
          }
          DAT_00b3b0a0 = '\0';
        }
      }
      FUN_0058cdb0();
      FUN_00401f20(piVar3);
      FUN_0058fba0(0);
      DAT_00b06b18 = uVar2;
      if (DAT_00b34d88 != iVar7) {
        if (param_1 == 0) {
          iVar7 = 0;
          pcVar6 = "Warnings were encountered in Tile::ReadFile for file NULL.";
        }
        else {
          pcVar6 = "Warnings were encountered in Tile::ReadFile for file \'%s\'.";
          iVar7 = param_1;
        }
        FUN_004a7a60(pcVar6,iVar7);
      }
      FUN_00584670(param_1,0);
      DAT_00b3b0a0 = 0;
      return uVar4;
    }
  }
  return 0;
}



void FUN_00590580(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bddf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00721350(uVar1);
  in_ECX[4] = param_2;
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a6a164;
  in_ECX[3] = param_1;
  FUN_00721440("Tileptr");
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00590670(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfa7e;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6aeec;
  local_4 = 2;
  FUN_004384e0(in_ECX[0x14],1,1);
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70(uVar1);
  }
  FUN_00401f20(in_ECX[0x14]);
  in_ECX[0x14] = 0;
  *(undefined2 *)((int)in_ECX + 0x56) = 0;
  *(undefined2 *)(in_ECX + 0x15) = 0;
  FUN_00401f20(in_ECX[0x12]);
  in_ECX[0x12] = 0;
  *(undefined2 *)((int)in_ECX + 0x4e) = 0;
  *(undefined2 *)(in_ECX + 0x13) = 0;
  local_4 = 0xffffffff;
  FUN_0058fab0();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_00590740(int param_1)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  uint in_EAX;
  uint uVar4;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x24) == 0) || (in_EAX = *(uint *)(in_ECX + 0x40), in_EAX == 0)) ||
     (param_1 == 0)) {
    return in_EAX & 0xffffff00;
  }
  uVar4 = FUN_0055e000(param_1,&param_1);
  iVar3 = param_1;
  if (((char)uVar4 != '\0') && (param_1 != 0)) {
    if (*(int *)(in_ECX + 0x44) != 0) {
      if (*(int *)(*(int *)(in_ECX + 0x44) + 0x44) == 1) {
        FUN_00590d20(0x47c34f80);
      }
      FUN_006c9cb0(0,0);
    }
    if (*(int *)(iVar3 + 0x44) != 0) {
      FUN_006c9cb0(0,0);
    }
    uVar4 = FUN_00470b20(iVar3,0,1,0x3f800000,0,0);
    if ((char)uVar4 != '\0') {
      iVar2 = *(int *)(in_ECX + 0x40);
      puVar1 = (ushort *)(iVar2 + 8);
      *puVar1 = *puVar1 | 8;
      *(int *)(in_ECX + 0x44) = iVar3;
      return CONCAT31((int3)((uint)iVar2 >> 8),1);
    }
  }
  return uVar4 & 0xffffff00;
}



void FUN_00590810(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  LONG LVar4;
  int iVar5;
  uint uVar6;
  undefined4 *apuStack_8 [2];
  
  puVar2 = param_1;
  FUN_00708560(&param_1,2);
  puVar3 = param_1;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  FUN_00708560(&param_1,0);
  puVar3 = param_1;
  if (((param_1 != (undefined4 *)0x0) && (LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0)) &&
     (puVar3 != (undefined4 *)0x0)) {
    (**(code **)*puVar3)(1);
  }
  FUN_004784a0();
  FUN_00477f90();
  uVar6 = 0;
  if (*(short *)(puVar2 + 0x2e) != 0) {
    do {
      if ((uVar6 < *(ushort *)((int)puVar2 + 0xb6)) &&
         (piVar1 = *(int **)(puVar2[0x2c] + uVar6 * 4), piVar1 != (int *)0x0)) {
        FUN_00708560(&param_1,2);
        puVar3 = param_1;
        if ((param_1 != (undefined4 *)0x0) &&
           ((LVar4 = InterlockedDecrement(param_1 + 1), LVar4 == 0 && (puVar3 != (undefined4 *)0x0))
           )) {
          (**(code **)*puVar3)(1);
        }
        FUN_00708560(apuStack_8,0);
        puVar3 = apuStack_8[0];
        if (((apuStack_8[0] != (undefined4 *)0x0) &&
            (LVar4 = InterlockedDecrement(apuStack_8[0] + 1), LVar4 == 0)) &&
           (puVar3 != (undefined4 *)0x0)) {
          (**(code **)*puVar3)(1);
        }
        iVar5 = (**(code **)(*piVar1 + 8))();
        if (iVar5 != 0) {
          FUN_00590810(iVar5);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(ushort *)(puVar2 + 0x2e));
  }
  return;
}



void FUN_00590970(void)

{
  ushort *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  LONG LVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 *puStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfab3;
  local_c = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  pcVar6 = (char *)FUN_00588c10(0xfe6);
  pcVar6 = _strstr(pcVar6,"\\Data");
  if (pcVar6 == (char *)0x0) {
    uVar7 = FUN_00588c10(0xfe6);
    FUN_00402e30(in_ECX + 0x50,"%s\\Menus\\%s","Meshes",uVar7,uVar5);
  }
  else {
    uVar7 = FUN_00588c10(0xfe6);
    FUN_00402e30(in_ECX + 0x50,&DAT_00a2f864,uVar7);
  }
  iVar8 = FUN_00439eb0(*(undefined4 *)(in_ECX + 0x50),1,0,0);
  if (iVar8 == 0) {
    FUN_004a7a60("Missing NIF for animated menu object: %s",*(undefined4 *)(in_ECX + 0x50));
  }
  else {
    if (*(int *)(iVar8 + 0x1c) != 0) {
      FUN_00478b90();
      local_10 = 0x3f800000;
      local_14 = 0x3f800000;
      local_18 = 0x3f800000;
      local_4 = 0;
      cVar4 = FUN_00480820(iVar8);
      if (cVar4 == '\0') {
        iVar8 = FUN_00700610(&local_28);
      }
      else {
        iVar8 = FUN_004430c0(iVar8,&local_28);
      }
      local_4 = 0xffffffff;
      if (local_28 != (undefined4 *)0x0) {
        (**(code **)*local_28)(1);
      }
      if (local_24 != (undefined4 *)0x0) {
        (**(code **)*local_24)(1);
      }
    }
    iVar9 = FUN_00700010(&DAT_00b3cac0);
    if (iVar9 != 0) {
      *(int *)(in_ECX + 0x40) = iVar9;
    }
    while ((piVar2 = *(int **)(in_ECX + 0x24), *(short *)((int)piVar2 + 0xb6) != 0 &&
           (*(int *)piVar2[0x2c] != 0))) {
      (**(code **)(*piVar2 + 0x8c))(&puStack_3c,0);
      puVar3 = puStack_3c;
      if ((puStack_3c != (undefined4 *)0x0) &&
         ((LVar10 = InterlockedDecrement(puStack_3c + 1), LVar10 == 0 &&
          (puVar3 != (undefined4 *)0x0)))) {
        (**(code **)*puVar3)(1);
      }
    }
    FUN_00590810(iVar8);
    iStack_38 = FUN_00401f00(0x5c);
    local_4 = 1;
    if (iStack_38 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = FUN_007095a0();
    }
    *(int *)(iVar9 + 0x54) = *(int *)(iVar9 + 0x54) + 2;
    *(undefined4 *)(iVar9 + 0x50) = 0;
    local_4 = 0xffffffff;
    uStack_34 = 0x3f800000;
    uStack_30 = 0x3f800000;
    uStack_2c = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x44) = 0x3f800000;
    *(undefined4 *)(iVar9 + 0x48) = 0x3f800000;
    FUN_00405680(iVar9);
    iVar9 = FUN_00582160(0,1);
    FUN_00405680(*(undefined4 *)(iVar9 + 0x78));
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x84))(iVar8,1);
    FUN_0058ceb0(0xfa6,0x40000000);
    fVar11 = (float10)FUN_00588bd0(0xfa1);
    if (fVar11 == (float10)1.0) {
      puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
      *puVar1 = *puVar1 | 1;
    }
    else {
      puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
      *puVar1 = *puVar1 & 0xfffe;
    }
    FUN_00707980();
    FUN_00707610();
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) ^ 0x40 | 9;
    iVar8 = FUN_00582160(0,1);
    *(undefined1 *)(iVar8 + 0x7c) = 1;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00590c20(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int in_ECX;
  int unaff_ESI;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bfae6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0x24) != 0) {
    *(undefined4 *)(*(int *)(in_ECX + 0x24) + 0x1c) = 0;
    if (*(undefined4 **)(in_ECX + 0x24) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(in_ECX + 0x24))(1,uVar1);
    }
  }
  iVar2 = FUN_00401f00(0xdc);
  uStack_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0070b780(0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x24) = uVar3;
  piVar4 = (int *)FUN_005894d0();
  if (piVar4 == (int *)0x0) {
    iVar2 = FUN_00582160(0,1);
    piVar4 = *(int **)(iVar2 + 0x54);
  }
  (**(code **)(*piVar4 + 0x84))(*(undefined4 *)(in_ECX + 0x24),1);
  FUN_00590970();
  iVar2 = FUN_00401f00(0x14);
  local_c = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00590580(in_ECX,*(undefined4 *)(in_ECX + 0x24));
  }
  local_c = -1;
  FUN_006ff8a0(uVar3);
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  *unaff_FS_OFFSET = unaff_ESI;
  return uVar3;
}



/* WARNING: Removing unreachable block (ram,0x00590d86) */
/* WARNING: Removing unreachable block (ram,0x00590d8c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00590d20(float param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  ushort *puVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c2a48;
  local_c = *unaff_FS_OFFSET;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffffd8;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = FUN_00588c10(0xfec);
  FUN_004028d0(uVar7,0);
  puVar1 = (undefined4 *)(in_ECX + 0x48);
  local_4 = 0;
  if (*(int *)(in_ECX + 0x48) != 0) {
    local_4 = 0;
    FUN_004028d0(0,0);
    if (*(ushort *)(in_ECX + 0x4c) == 0xffff) {
      pcVar8 = (char *)*puVar1;
      pcVar2 = pcVar8 + 1;
      do {
        cVar5 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar5 != '\0');
      uVar9 = (int)pcVar8 - (int)pcVar2;
    }
    else {
      uVar9 = (uint)*(ushort *)(in_ECX + 0x4c);
    }
    if ((uVar9 != 0) && (cVar5 = FUN_00590740(*puVar1), cVar5 == '\0')) {
      FUN_00401f20(*puVar1);
      *puVar1 = 0;
      *(undefined2 *)(in_ECX + 0x4e) = 0;
      *(undefined2 *)(in_ECX + 0x4c) = 0;
    }
  }
  if (((*(int *)(in_ECX + 0x24) != 0) && (*(int *)(in_ECX + 0x40) != 0)) &&
     (fVar10 = (float10)FUN_00588bd0(0xfa1), fVar10 != (float10)1.0)) {
    fVar10 = (float10)FUN_00588bd0(0xfa1);
    if (fVar10 == (float10)1.0) {
      puVar3 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
      *puVar3 = *puVar3 | 1;
    }
    iVar4 = *(int *)(in_ECX + 0x44);
    if (iVar4 != 0) {
      if (*(float *)(iVar4 + 0x48) == -3.4028235e+38) {
        param_1 = 0.0;
LAB_00590e70:
        FUN_00707370(param_1,1);
      }
      else {
        if (param_1 != -1.0) goto LAB_00590e70;
        FUN_00707370(*(float *)(iVar4 + 0x34) + _DAT_00b33e9c,1);
        cVar5 = FUN_0049f950(*(undefined4 *)(in_ECX + 0x44),0);
        if (cVar5 != '\0') {
          FUN_006c9cb0(0,0);
          *(undefined4 *)(in_ECX + 0x44) = 0;
          puVar3 = (ushort *)(*(int *)(in_ECX + 0x40) + 8);
          *puVar3 = *puVar3 & 0xfff7;
          FUN_00401f20(0);
          uVar7 = 1;
          goto LAB_00590f10;
        }
      }
      FUN_00401f20(0);
      uVar7 = 1;
      goto LAB_00590f10;
    }
  }
  FUN_00401f20(0,uVar6);
  uVar7 = 0;
LAB_00590f10:
  *unaff_FS_OFFSET = local_c;
  return uVar7;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00591030(char *param_1,undefined4 *param_2,float param_3,int param_4)

{
  float fVar1;
  char cVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  float10 fVar6;
  double local_418;
  char local_410 [256];
  char local_310 [260];
  char local_20c [260];
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_418;
  if (param_1 == (char *)0x0) {
    return;
  }
  if (*param_1 == '\0') {
    return;
  }
  if (*param_1 == ' ') {
    return;
  }
  local_410[0] = '\0';
  _memset(local_410 + 1,0,0xff);
  _strncpy(local_310,param_1,0x103);
  pcVar4 = _strstr(local_310,"Data");
  if (pcVar4 == local_310) {
    pcVar4 = "%s";
  }
  else {
    pcVar4 = _strstr(local_310,"\\Textures");
    if (pcVar4 == local_310) {
      pcVar4 = "Data%s";
    }
    else {
      pcVar4 = _strstr(local_310,"Textures");
      if (pcVar4 == local_310) {
        pcVar4 = "Data\\%s";
      }
      else {
        pcVar4 = _strstr(local_310,"\\Menus");
        if (pcVar4 == local_310) {
          pcVar4 = "Data\\Textures%s";
        }
        else {
          pcVar4 = _strstr(local_310,"Menus");
          if (pcVar4 == local_310) {
            pcVar4 = "Data\\Textures\\%s";
          }
          else {
            pcVar4 = _strstr(local_310,"\\");
            if (pcVar4 == local_310) {
              pcVar4 = "Data\\Textures\\Menus%s";
            }
            else {
              pcVar4 = "Data\\Textures\\Menus\\%s";
            }
          }
        }
      }
    }
  }
  _sprintf(local_410,pcVar4,param_1);
  pcVar4 = _strstr(local_410,"\\Menus\\");
  if ((pcVar4 == (char *)0x0) || (pcVar4 = pcVar4 + 7, pcVar4 == (char *)0x0)) {
    iVar5 = 0;
    do {
      pcVar4 = local_410 + iVar5;
      local_108[iVar5] = *pcVar4;
      iVar5 = iVar5 + 1;
    } while (*pcVar4 != '\0');
    iVar5 = 0;
    do {
      pcVar4 = local_410 + iVar5;
      local_20c[iVar5] = *pcVar4;
      iVar5 = iVar5 + 1;
    } while (*pcVar4 != '\0');
  }
  else {
    _sprintf(local_108,"Data\\Textures\\Menus80\\%s",pcVar4);
    _sprintf(local_20c,"Data\\Textures\\Menus50\\%s",pcVar4);
  }
  local_418 = (double)DAT_00b06c50;
  fVar6 = (float10)FUN_0057d7f0();
  pcVar4 = local_410;
  fVar1 = (float)((float10)local_418 / fVar6);
  local_418 = (double)CONCAT44(local_418._4_4_,fVar1);
  *param_2 = 0x3f800000;
  if (fVar1 < 0.5 == (fVar1 == 0.5)) {
    if ((fVar1 < 0.8 == (fVar1 == 0.8)) || (NAN(param_3) || 0.0 < param_3 == (param_3 == 0.0)))
    goto LAB_005912b5;
    uVar3 = 0x3f4ccccd;
    pcVar4 = local_108;
  }
  else {
    uVar3 = 0x3f000000;
    pcVar4 = local_20c;
  }
  *param_2 = uVar3;
LAB_005912b5:
  iVar5 = (**(code **)(*DAT_00b33a04 + 4))(pcVar4,0,0,0xffffffff);
  if (iVar5 == 0) {
    if ((pcVar4 != local_410) &&
       (iVar5 = (**(code **)(*DAT_00b33a04 + 4))(local_410,0,0,0xffffffff), iVar5 != 0)) {
      pcVar4 = local_410;
      *param_2 = 0x3f800000;
      param_4 = param_4 - (int)pcVar4;
      do {
        cVar2 = *pcVar4;
        pcVar4[param_4] = cVar2;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
    }
    return;
  }
  param_4 = param_4 - (int)pcVar4;
  do {
    cVar2 = *pcVar4;
    pcVar4[param_4] = cVar2;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '\0');
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_00591360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uchar *puVar5;
  LONG LVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *unaff_FS_OFFSET;
  undefined4 *local_120;
  undefined4 *local_11c;
  undefined4 local_118;
  uchar local_114;
  undefined1 local_113 [259];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009bfb4d;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_120;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar1 = DAT_00b35300;
  local_11c = param_1;
  local_118 = 0;
  local_120 = (undefined4 *)0x0;
  local_4 = 3;
  if (param_7 == (undefined4 *)0x0) {
    local_114 = '\0';
    _memset(local_113,0,0x103);
    FUN_00591030(param_2,param_5,param_6,&local_114,uVar2);
    puVar8 = (undefined4 *)0x0;
    if (local_114 != '\0') {
      if (piVar1 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar1 + 4))(&local_114,0);
        FUN_0075fa90(uVar3);
        puVar8 = local_120;
        if (local_120 != (undefined4 *)0x0) goto LAB_00591558;
      }
      iVar4 = (**(code **)(*DAT_00b33a04 + 4))(&local_114,0,0,0xffffffff);
      if (iVar4 != 0) {
        uVar3 = FUN_00701e00(&local_114,&DAT_00b256d0,1);
        FUN_0075fa90(uVar3);
        puVar8 = local_120;
        if (local_120 == (undefined4 *)0x0) {
          FUN_00404ec0("*** ERROR: Could not create ptexture \'%s\'!",&local_114);
          puVar7 = local_11c;
          *local_11c = 0;
          local_118 = 1;
          local_4._0_1_ = 2;
          FUN_007016a0();
        }
        else {
          if ((piVar1 != (int *)0x0) &&
             (puVar5 = __mbsstr(&local_114,(uchar *)"oading\\load_"), puVar5 == (uchar *)0x0)) {
            (**(code **)(*piVar1 + 8))(&local_114,puVar8);
          }
          puVar7 = local_11c;
          FUN_004a19f0(&local_120);
          local_118 = 1;
          local_4._0_1_ = 2;
          FUN_007016a0();
        }
        local_4._0_1_ = 1;
        FUN_00402da0();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_007016a0();
        goto LAB_005915d3;
      }
    }
  }
  else {
    InterlockedIncrement(param_7 + 1);
    puVar8 = param_7;
  }
LAB_00591558:
  puVar7 = local_11c;
  *local_11c = puVar8;
  if (puVar8 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar8 + 1);
  }
  local_118 = 1;
  local_4._0_1_ = 2;
  if ((puVar8 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(puVar8 + 1), LVar6 == 0)) {
    (**(code **)*puVar8)(1);
  }
  FUN_00401f20(param_3);
  local_4 = (uint)local_4._1_3_ << 8;
  if ((param_7 != (undefined4 *)0x0) && (LVar6 = InterlockedDecrement(param_7 + 1), LVar6 == 0)) {
    (**(code **)*param_7)(1);
  }
LAB_005915d3:
  *unaff_FS_OFFSET = local_c;
  return puVar7;
}



undefined4 FUN_00591600(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  LONG LVar10;
  int in_ECX;
  int *unaff_EBX;
  int *unaff_FS_OFFSET;
  float10 fVar11;
  undefined4 *local_20;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfbca;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_005894d0(uVar1);
  local_20 = (undefined4 *)0x0;
  local_4 = 0;
  puVar3 = (undefined4 *)FUN_00401f00(0x30);
  puVar4 = (undefined4 *)FUN_00401f00(0x20);
  puVar5 = (undefined2 *)FUN_00401f00(0xc);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0x3f800000;
  puVar3[5] = 0xbf800000;
  puVar3[7] = 0;
  puVar3[9] = 0x3f800000;
  puVar3[8] = 0;
  puVar3[10] = 0;
  puVar3[0xb] = 0xbf800000;
  puVar5[2] = 2;
  puVar5[3] = 2;
  puVar5[1] = 1;
  puVar5[4] = 1;
  *puVar5 = 0;
  puVar5[5] = 3;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0x3f800000;
  puVar4[4] = 0x3f800000;
  puVar4[7] = 0x3f800000;
  puVar4[5] = 0;
  puVar4[6] = 0x3f800000;
  fVar11 = (float10)FUN_00588bd0(0xfc8);
  if (fVar11 == (float10)2.0) {
    iVar6 = FUN_00401f00(0xd0);
    local_4._0_1_ = 1;
    if (iVar6 == 0) {
      local_20 = (undefined4 *)0x0;
    }
    else {
      FUN_0057d7f0();
      uVar7 = FUN_009828c0();
      FUN_0057d7a0(uVar7);
      uVar8 = FUN_009828c0();
      local_20 = (undefined4 *)FUN_004a1780(4,puVar3,0,0,puVar4,1,0,2,puVar5,0,0,uVar8,uVar7);
    }
    local_4._0_1_ = 0;
    if (local_20 == (undefined4 *)0x0) {
      local_20 = (undefined4 *)0x0;
      *(undefined1 *)(in_ECX + 0x48) = 1;
    }
    else {
      InterlockedIncrement(local_20 + 1);
      *(undefined1 *)(in_ECX + 0x48) = 1;
    }
  }
  else {
    iVar6 = FUN_00401f00(0xc0);
    local_4._0_1_ = 2;
    if (iVar6 == 0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)FUN_007174b0(4,puVar3,0,0,puVar4,1,0,2,puVar5);
    }
    local_4._0_1_ = 0;
    if (puVar3 != (undefined4 *)0x0) {
      InterlockedIncrement(puVar3 + 1);
      local_20 = puVar3;
    }
    *(undefined1 *)(in_ECX + 0x48) = 0;
  }
  iVar6 = FUN_00401f00(0x30);
  local_4._0_1_ = 3;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_007043b0();
  }
  local_4._0_1_ = 0;
  FUN_004057b0(0);
  fVar11 = (float10)FUN_00588bd0(0xfcf);
  if (fVar11 == (float10)2.0) {
    uVar7 = 3;
  }
  else {
    uVar7 = 0;
  }
  FUN_00405870(uVar7);
  *(ushort *)(iVar6 + 0x18) = *(ushort *)(iVar6 + 0x18) & 0xfff5 | 4;
  FUN_00405680(iVar6);
  iVar6 = FUN_00401f00(0x5c);
  local_4._0_1_ = 4;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_007095a0();
  }
  *(int *)(iVar6 + 0x54) = *(int *)(iVar6 + 0x54) + 2;
  *(undefined4 *)(iVar6 + 0x50) = 0;
  local_4._0_1_ = 0;
  *(undefined4 *)(iVar6 + 0x40) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x44) = 0x3f800000;
  *(undefined4 *)(iVar6 + 0x48) = 0x3f800000;
  FUN_00405680(iVar6);
  iVar6 = FUN_00401f00(0xdc);
  local_4._0_1_ = 5;
  if (iVar6 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_0070b780(0);
  }
  *(int **)(in_ECX + 0x24) = piVar9;
  local_4 = (uint)local_4._1_3_ << 8;
  (**(code **)(*piVar9 + 0x84))(local_20,1);
  if (unaff_EBX == (int *)0x0) {
    iVar6 = FUN_00582160(0,1);
    unaff_EBX = *(int **)(iVar6 + 0x54);
  }
  (**(code **)(*unaff_EBX + 0x84))(*(undefined4 *)(in_ECX + 0x24),1);
  FUN_006ff420(*(undefined4 *)(in_ECX + 8));
  iVar6 = FUN_00582160(0,1);
  FUN_00405680(*(undefined4 *)(iVar6 + 0x78));
  FUN_00707980();
  FUN_00707610();
  iVar6 = FUN_00582160(0,1);
  *(undefined1 *)(iVar6 + 0x7c) = 1;
  iVar6 = FUN_00401f00(0x14);
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00590580(in_ECX,*(undefined4 *)(in_ECX + 0x24));
  }
  FUN_006ff8a0(uVar7);
  uVar7 = 0;
  fVar11 = (float10)FUN_00588bd0(0xfab);
  FUN_0058b2f0(0xfab,(float)fVar11,uVar7);
  fVar11 = (float10)FUN_00588bd0(0xfc8);
  if (fVar11 == (float10)2.0) {
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x200;
  }
  *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x3d;
  uVar7 = *(undefined4 *)(in_ECX + 0x24);
  if (local_20 != (undefined4 *)0x0) {
    LVar10 = InterlockedDecrement(local_20 + 1);
    if (LVar10 == 0) {
      (**(code **)*local_20)(1);
    }
  }
  *unaff_FS_OFFSET = iVar2;
  return uVar7;
}



void FUN_00591a80(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009cf808;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0058ced0(0xfe6,&DAT_00a2f7ec);
  puVar1 = *(undefined4 **)(in_ECX + 0x44);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    *(undefined4 **)(in_ECX + 0x44) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x30;
  local_4 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(param_1 + 1);
    if (LVar3 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00591b40(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x34))();
  if (iVar1 != 0x3ec) {
    iVar1 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x34))();
    if (iVar1 != 0x3ef) {
      FUN_00589d60();
      return;
    }
  }
  return;
}



void FUN_00591b70(void)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfbf8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6af14;
  local_4 = 0;
  if ((int *)in_ECX[0x11] != (int *)0x0) {
    local_14[0] = 0;
    iVar2 = (**(code **)(*(int *)in_ECX[0x11] + 0x34))(uVar1);
    FUN_0042bb90(iVar2 + -0x3e9,local_14);
    FUN_00584880(0);
    if ((undefined4 *)in_ECX[0x11] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)in_ECX[0x11])(1);
    }
  }
  if (*(char *)(in_ECX + 1) == '\0') {
    FUN_0058da70();
  }
  local_4 = 0xffffffff;
  FUN_005819a0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00591d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0058da00(param_1,param_2,param_3);
  FUN_0058ceb0(0xfcc,0x437f0000);
  FUN_0058ceb0(0xfcd,0x437f0000);
  FUN_0058ceb0(0xfce,0x437f0000);
  FUN_0058ceb0(0xfa7,0);
  return;
}



undefined4 FUN_00591dc0(void)

{
  ushort *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_ECX;
  int *unaff_EBP;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfc57;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_005894d0(uVar2);
  fVar10 = (float10)FUN_00588bd0(0xfad);
  fVar11 = (float10)FUN_00588bd0(0xfac);
  fVar12 = (float10)FUN_00588bd0(0xfcb);
  fVar13 = (float10)FUN_00588bd0(0xfca);
  fVar14 = (float10)FUN_00588bd0(0xfcc);
  fVar15 = (float10)FUN_00588bd0(0xfcd);
  fVar16 = (float10)FUN_00588bd0(0xfce);
  fVar17 = (float10)FUN_00588bd0(0xfa7);
  puVar3 = (undefined4 *)FUN_00401f00(0x30);
  puVar4 = (undefined2 *)FUN_00401f00(0xc);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = -(float)fVar13;
  puVar3[6] = (float)fVar12;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = (float)fVar12;
  puVar3[10] = 0;
  puVar3[0xb] = -(float)fVar13;
  *puVar4 = 0;
  puVar4[1] = 1;
  puVar4[2] = 2;
  puVar4[3] = 2;
  puVar4[4] = 1;
  puVar4[5] = 3;
  fVar12 = (float10)FUN_00588bd0(0xfc8);
  if (fVar12 == (float10)2.0) {
    iVar5 = FUN_00401f00(0xd0);
    iVar6 = 0;
    local_4 = 0;
    if (iVar5 != 0) {
      FUN_0057d7f0();
      uVar7 = FUN_009828c0();
      FUN_0057d7a0(uVar7);
      uVar8 = FUN_009828c0();
      iVar6 = FUN_004a1780(4,puVar3,0,0,0,0,0,2,puVar4,0,0,uVar8,uVar7);
    }
    *(undefined1 *)(in_ECX + 0x40) = 1;
  }
  else {
    iVar6 = FUN_00401f00(0xc0);
    local_4 = 1;
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = FUN_007174b0(4,puVar3,0,0,0,0,0,2,puVar4);
    }
    *(undefined1 *)(in_ECX + 0x40) = 0;
  }
  local_4 = 0xffffffff;
  iVar5 = FUN_00401f00(0x5c);
  local_4 = 2;
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = FUN_007095a0();
  }
  *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 3;
  *(float *)(iVar5 + 0x50) = (float)(fVar17 * (float10)0.0078125);
  *(float *)(iVar5 + 0x1c) = (float)(fVar14 * (float10)0.0078125);
  *(float *)(iVar5 + 0x28) = (float)(fVar14 * (float10)0.0078125);
  *(float *)(iVar5 + 0x20) = (float)(fVar15 * (float10)0.0078125);
  *(float *)(iVar5 + 0x2c) = (float)(fVar15 * (float10)0.0078125);
  *(float *)(iVar5 + 0x24) = (float)(fVar16 * (float10)0.0078125);
  *(float *)(iVar5 + 0x30) = (float)(fVar16 * (float10)0.0078125);
  *(undefined4 *)(iVar5 + 0x34) = DAT_00b25ac4;
  *(undefined4 *)(iVar5 + 0x38) = DAT_00b25ac8;
  uVar7 = DAT_00b25acc;
  *(int *)(iVar5 + 0x54) = *(int *)(iVar5 + 0x54) + 1;
  local_4 = 0xffffffff;
  *(undefined4 *)(iVar5 + 0x3c) = uVar7;
  FUN_00405680(iVar5);
  fVar12 = (float10)FUN_00588bd0(0xfab);
  *(float *)(iVar6 + 0x54) = (float)fVar10;
  *(float *)(iVar6 + 0x58) = (float)(fVar12 * (float10)-0.00800000037997961);
  *(float *)(iVar6 + 0x5c) = (float)-fVar11;
  iVar5 = FUN_00401f00(0xdc);
  local_4 = 3;
  if (iVar5 == 0) {
    piVar9 = (int *)0x0;
  }
  else {
    piVar9 = (int *)FUN_0070b780(0);
  }
  *(int **)(in_ECX + 0x24) = piVar9;
  local_4 = 0xffffffff;
  (**(code **)(*piVar9 + 0x84))(iVar6,1);
  if (unaff_EBP == (int *)0x0) {
    iVar6 = FUN_00582160(0,1);
    unaff_EBP = *(int **)(iVar6 + 0x54);
  }
  (**(code **)(*unaff_EBP + 0x84))(*(undefined4 *)(in_ECX + 0x24),1);
  FUN_006ff420(*(undefined4 *)(in_ECX + 8));
  fVar10 = (float10)FUN_00588bd0(0xfa1);
  if (fVar10 == (float10)1.0) {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
  }
  FUN_00707980();
  FUN_00707610();
  iVar6 = FUN_00582160(0,1);
  *(undefined1 *)(iVar6 + 0x7c) = 1;
  iVar6 = FUN_00401f00(0x14);
  if (iVar6 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_00590580(in_ECX,*(undefined4 *)(in_ECX + 0x24));
  }
  FUN_006ff8a0(uVar7);
  uVar7 = 0;
  fVar10 = (float10)FUN_00588bd0(0xfad);
  FUN_0058b2f0(0xfad,(float)fVar10,uVar7);
  uVar7 = 0;
  fVar10 = (float10)FUN_00588bd0(0xfac);
  FUN_0058b2f0(0xfac,(float)fVar10,uVar7);
  uVar7 = *(undefined4 *)(in_ECX + 0x24);
  *unaff_FS_OFFSET = iVar5;
  return uVar7;
}



void FUN_00592370(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x38));
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined2 *)(in_ECX + 0x3e) = 0;
  *(undefined2 *)(in_ECX + 0x3c) = 0;
  return;
}



undefined4 FUN_00592390(void)

{
  ushort *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  float10 fVar9;
  undefined4 *local_c8;
  undefined *local_c4;
  undefined8 local_c0;
  uint uStack_b8;
  int local_9c;
  undefined4 local_98;
  undefined2 local_94;
  undefined2 local_92;
  int local_90;
  int local_8c;
  undefined1 *local_88;
  undefined4 *local_84;
  int *local_80;
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
  undefined4 *local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined1 local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfcc5;
  local_c = *unaff_FS_OFFSET;
  uStack_b8 = DAT_00b30aac ^ (uint)&stack0xffffff4c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_c0 = (double)CONCAT44(0x5923c4,(undefined4)local_c0);
  local_80 = (int *)FUN_005894d0();
  local_c0 = 8.51557199541388e-311;
  fVar8 = (float10)FUN_00588bd0();
  local_5c = (float)fVar8;
  local_c0 = 8.51344999963082e-311;
  fVar8 = (float10)FUN_00588bd0();
  local_70 = (float)-fVar8;
  local_c0 = 8.59832983127832e-311;
  FUN_00588bd0();
  local_c0 = (double)CONCAT44(0x5923fb,(undefined4)local_c0);
  local_9c = FUN_009828c0();
  local_c0 = 8.60045182707966e-311;
  FUN_00588bd0();
  local_c0 = (double)CONCAT44(0x592410,(undefined4)local_c0);
  local_8c = FUN_009828c0();
  local_c0 = 8.602573822881e-311;
  FUN_00588bd0();
  local_c0 = (double)CONCAT44(0x592425,(undefined4)local_c0);
  local_90 = FUN_009828c0();
  local_c0 = 8.59196384393655e-311;
  FUN_00588bd0();
  local_c0 = (double)CONCAT44(0x59243a,(undefined4)local_c0);
  local_84 = (undefined4 *)FUN_009828c0();
  local_c0 = 8.59620783552886e-311;
  fVar8 = (float10)FUN_00588bd0();
  if ((float10)1 < fVar8) {
    local_c0 = 8.5962078355422e-311;
    FUN_00588bd0();
  }
  local_c0 = (double)CONCAT44(0x592478,(undefined4)local_c0);
  uVar3 = FUN_009828c0();
  local_c0 = (double)CONCAT44(0x59247f,(undefined4)local_c0);
  FUN_00576a30();
  local_c0 = 8.60469581872631e-311;
  FUN_00588bd0();
  local_c0 = (double)CONCAT44(0x592493,(undefined4)local_c0);
  local_88 = (undefined1 *)FUN_009828c0();
  local_c0 = 8.60681781452765e-311;
  fVar8 = (float10)FUN_00588bd0();
  local_c0 = 8.58135386505386e-311;
  cVar2 = FUN_00588b80();
  if (cVar2 == '\0') {
    fVar9 = (float10)0;
  }
  else {
    local_c0 = 8.58135386506176e-311;
    fVar9 = (float10)FUN_00588bd0();
  }
  local_7c = (float)fVar9;
  local_c0 = 8.58347586086261e-311;
  cVar2 = FUN_00588b80();
  if (cVar2 == '\0') {
    fVar9 = (float10)0;
  }
  else {
    local_c0 = 8.58347586087051e-311;
    fVar9 = (float10)FUN_00588bd0();
  }
  local_78 = (float)fVar9;
  local_c0 = 8.58559785667136e-311;
  cVar2 = FUN_00588b80();
  if (cVar2 == '\0') {
    fVar9 = (float10)0;
  }
  else {
    local_c0 = 8.58559785667927e-311;
    fVar9 = (float10)FUN_00588bd0();
  }
  local_74 = (float)fVar9;
  local_c0 = 8.5028400208415e-311;
  cVar2 = FUN_00588b80();
  if (cVar2 == '\0') {
    local_60 = 1.0;
  }
  else {
    local_c0 = 8.50284002085534e-311;
    fVar9 = (float10)FUN_00588bd0();
    if ((float)fVar9 == 0.0) {
      local_60 = 0.0;
    }
    else {
      local_60 = (float)fVar9 / 255.0;
    }
  }
  local_68 = 0.0;
  if (local_74 == 0.0) {
    local_64 = 0.0;
  }
  else {
    local_64 = local_74 / 255.0;
  }
  if (local_78 != 0.0) {
    local_68 = local_78 / 255.0;
  }
  if (local_7c == 0.0) {
    local_6c = 0.0;
  }
  else {
    local_6c = local_7c / 255.0;
  }
  local_c0 = 5.2904628407184e-317;
  local_98 = 0;
  local_94 = 0;
  local_92 = 0;
  local_c4 = (undefined *)0x59261c;
  FUN_004028d0();
  local_4 = 0;
  local_c0 = 8.6195497894691e-311;
  iVar4 = FUN_00588c10();
  if (iVar4 == 0) {
LAB_0059265c:
    local_c0 = 8.61954978949726e-311;
    fVar9 = (float10)FUN_00588bd0();
    local_c0 = (double)fVar9;
    local_c8 = &local_98;
    local_c4 = &DAT_00a6b1a4;
    FUN_00402e30();
  }
  else {
    local_c0 = 8.619549789477e-311;
    pcVar5 = (char *)FUN_00588c10();
    if (*pcVar5 == '\0') goto LAB_0059265c;
    local_c0 = 8.61954978948491e-311;
    uVar6 = FUN_00588c10();
    local_c0 = (double)(ulonglong)uVar6;
    local_c4 = (undefined *)0x59265a;
    FUN_004028d0();
  }
  if (local_9c < 1) {
    local_c0 = (double)CONCAT44(0x59268c,(undefined4)local_c0);
    FUN_0057d7a0();
    local_c0 = (double)CONCAT44(0x592691,(undefined4)local_c0);
    local_9c = FUN_009828c0();
  }
  if (local_90 < 1) {
    local_90 = 0x7fffffff;
  }
  if ((float10)0.0 < fVar8) {
LAB_00592784:
    local_c0 = 4.66841960753937e-312;
    local_70 = (float)FUN_00401f00();
    local_4._0_1_ = 1;
    if (local_70 == 0.0) {
      uVar7 = 0;
    }
    else {
      local_c0 = 2.88675491726305e-317;
      uVar7 = FUN_0070b780();
    }
    *(undefined4 *)(in_ECX + 0x24) = uVar7;
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    local_34 = 10;
    local_20 = 0;
    local_1c = 0;
    local_4._0_1_ = 2;
    local_30 = local_9c;
    if (local_9c == 0) {
      local_30 = 0x7fffffff;
    }
    local_48 = local_84;
    local_40 = local_68;
    local_38 = local_60;
    local_44 = local_6c;
    local_3c = local_64;
    local_2c = local_8c;
    if (local_8c == 0) {
      local_2c = 0x7fffffff;
    }
    local_28 = local_88;
    local_c0 = (double)CONCAT44(uVar7,&local_4c);
    local_88 = (undefined1 *)&local_c8;
    local_24 = local_90;
    local_c8 = (undefined4 *)0x0;
    local_c4 = (undefined *)0x0;
    local_4c = uVar3;
    local_18 = (float10)0.0 < fVar8;
    FUN_004028d0(local_98,0);
    local_4._0_1_ = 3;
    FUN_00576a30();
    local_4._0_1_ = 2;
    cVar2 = FUN_00578c10();
    if (cVar2 == '\0') {
      local_c0._4_4_ = local_14;
      local_c0._0_4_ = 0x5928ba;
      FUN_00401f20();
      local_c0 = (double)CONCAT44(local_c0._4_4_,local_98);
      local_14 = 0;
      local_e = 0;
      local_10 = 0;
      local_c4 = (undefined *)0x5928db;
      FUN_00401f20();
      uVar3 = 0;
      goto LAB_00592a46;
    }
    local_c0 = (double)CONCAT44((float)local_20,0xfef);
    local_9c = local_30;
    local_8c = local_2c;
    local_c4 = (undefined *)0x592912;
    FUN_0058ceb0();
    *(undefined1 *)(in_ECX + 0x50) = local_18;
    local_4 = (uint)local_4._1_3_ << 8;
    local_c0 = (double)CONCAT44(local_14,0x592930);
    FUN_00401f20();
  }
  else {
    local_c0 = (double)CONCAT44(0x5926b3,(undefined4)local_c0);
    iVar4 = FUN_00576a30();
    if (*(char *)(iVar4 + 0x14) != '\0') goto LAB_00592784;
    local_c0 = 4.66841960655124e-312;
    local_88 = (undefined1 *)FUN_00401f00();
    local_4._0_1_ = 4;
    if (local_88 == (undefined1 *)0x0) {
      uVar3 = 0;
    }
    else {
      local_c0 = 2.88665610413388e-317;
      uVar3 = FUN_0070b780();
    }
    local_c0 = (double)CONCAT44(1,&local_6c);
    local_c4 = (undefined *)0xa;
    local_c8 = local_84;
    *(undefined4 *)(in_ECX + 0x24) = uVar3;
    local_4 = (uint)local_4._1_3_ << 8;
    uVar6 = FUN_00576670(&local_98,&local_9c,&local_8c,0,local_90);
    *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(uVar6 + 0x54);
    *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(uVar6 + 0x58);
    *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(uVar6 + 0x5c);
    local_c0 = 8.51132800426129e-311;
    fVar8 = (float10)FUN_00588bd0();
    local_c0 = (double)(ulonglong)uVar6;
    local_84 = (undefined4 *)(float)(fVar8 * (float10)-0.00800000037997961);
    local_58 = local_5c;
    *(float *)(uVar6 + 0x54) = local_5c;
    *(undefined4 **)(uVar6 + 0x58) = local_84;
    local_50 = local_70;
    *(float *)(uVar6 + 0x5c) = local_70;
    local_c4 = (undefined *)0x59277f;
    local_54 = local_84;
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x84))();
  }
  local_c0 = (double)CONCAT44((float)local_9c,0xfcb);
  local_c4 = (undefined *)0x592947;
  FUN_0058ceb0();
  local_c0 = (double)CONCAT44((float)local_8c,0xfca);
  local_c4 = (undefined *)0x59295b;
  FUN_0058ceb0();
  *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 1;
  local_c0 = 8.57286588247892e-311;
  fVar8 = (float10)FUN_00588bd0();
  if (fVar8 == (float10)2.0) {
    *(uint *)(in_ECX + 0x2c) = *(uint *)(in_ECX + 0x2c) | 0x200;
  }
  if (local_80 == (int *)0x0) {
    local_c0 = 2.12199579096527e-314;
    local_c4 = (undefined *)0x592992;
    iVar4 = FUN_00582160();
    local_80 = *(int **)(iVar4 + 0x54);
  }
  local_c0 = (double)CONCAT44(1,*(undefined4 *)(in_ECX + 0x24));
  local_c4 = (undefined *)0x5929ad;
  (**(code **)(*local_80 + 0x84))();
  local_c0 = 8.49010804666784e-311;
  fVar8 = (float10)FUN_00588bd0();
  if (fVar8 == (float10)1.0) {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
  }
  local_c0 = (double)CONCAT44(0x5929e7,(undefined4)local_c0);
  FUN_00707980();
  local_c0 = (double)CONCAT44(0x5929ef,(undefined4)local_c0);
  FUN_00707610();
  local_c0 = 2.12199579096527e-314;
  local_c4 = (undefined *)0x5929f6;
  iVar4 = FUN_00582160();
  local_c4 = (undefined *)0x14;
  *(undefined1 *)(iVar4 + 0x7c) = 1;
  local_c8 = (undefined4 *)0x592a01;
  local_88 = (undefined1 *)FUN_00401f00();
  local_4._0_1_ = 5;
  if (local_88 == (undefined1 *)0x0) {
    uVar3 = 0;
  }
  else {
    local_c0 = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x24),in_ECX);
    local_c4 = (undefined *)0x592a20;
    uVar3 = FUN_00590580();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  local_c0 = (double)CONCAT44(uVar3,0x592a34);
  FUN_006ff8a0();
  uVar3 = *(undefined4 *)(in_ECX + 0x24);
  local_c0 = (double)CONCAT44(local_98,0x592a41);
  FUN_00401f20();
LAB_00592a46:
  *unaff_FS_OFFSET = local_c;
  return uVar3;
}



undefined4 FUN_00592a70(void)

{
  ushort *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfd1c;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar3 = (int *)FUN_005894d0(uVar2);
  fVar10 = (float10)FUN_00588bd0(0xfad);
  fVar11 = (float10)FUN_00588bd0(0xfac);
  fVar12 = (float10)FUN_00588bd0(0xfcb);
  fVar13 = (float10)FUN_00588bd0(0xfca);
  fVar14 = (float10)FUN_00588bd0(0xfcc);
  fVar15 = (float10)FUN_00588bd0(0xfcd);
  fVar16 = (float10)FUN_00588bd0(0xfce);
  fVar17 = (float10)FUN_00588bd0(0xfa7);
  puVar4 = (undefined4 *)FUN_00401f00(0x30);
  puVar5 = (undefined2 *)FUN_00401f00(0xc);
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar4[5] = -(float)fVar13;
  puVar4[6] = (float)fVar12;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = (float)fVar12;
  puVar4[10] = 0;
  puVar4[0xb] = -(float)fVar13;
  *puVar5 = 0;
  puVar5[1] = 1;
  puVar5[2] = 2;
  puVar5[3] = 2;
  puVar5[4] = 1;
  puVar5[5] = 3;
  iVar6 = FUN_00401f00(0xc0);
  local_4 = 0;
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = FUN_007174b0(4,puVar4,0,0,0,0,0,2,puVar5);
  }
  local_4 = 0xffffffff;
  iVar7 = FUN_00401f00(0x5c);
  local_4 = 1;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_007095a0();
  }
  local_4 = 0xffffffff;
  *(float *)(iVar7 + 0x50) = (float)(fVar17 * (float10)0.0078125);
  *(float *)(iVar7 + 0x1c) = (float)(fVar14 * (float10)0.0078125);
  *(float *)(iVar7 + 0x28) = (float)(fVar14 * (float10)0.0078125);
  *(float *)(iVar7 + 0x20) = (float)(fVar15 * (float10)0.0078125);
  *(float *)(iVar7 + 0x2c) = (float)(fVar15 * (float10)0.0078125);
  *(float *)(iVar7 + 0x24) = (float)(fVar16 * (float10)0.0078125);
  *(float *)(iVar7 + 0x30) = (float)(fVar16 * (float10)0.0078125);
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 3;
  *(undefined4 *)(iVar7 + 0x34) = DAT_00b25ac4;
  *(undefined4 *)(iVar7 + 0x38) = DAT_00b25ac8;
  uVar9 = DAT_00b25acc;
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + 1;
  *(undefined4 *)(iVar7 + 0x3c) = uVar9;
  FUN_00405680(iVar7);
  fVar12 = (float10)FUN_00588bd0(0xfab);
  *(float *)(iVar6 + 0x54) = (float)fVar10;
  *(float *)(iVar6 + 0x58) = (float)(fVar12 * (float10)-0.00800000037997961);
  *(float *)(iVar6 + 0x5c) = (float)-fVar11;
  iVar7 = FUN_00401f00(0xec);
  local_4 = 2;
  if (iVar7 == 0) {
    piVar8 = (int *)0x0;
  }
  else {
    piVar8 = (int *)FUN_004a15f0();
  }
  *(int **)(in_ECX + 0x24) = piVar8;
  local_4 = 0xffffffff;
  (**(code **)(*piVar8 + 0x84))(iVar6,1);
  if (piVar3 == (int *)0x0) {
    iVar6 = FUN_00582160(0,1);
    piVar3 = *(int **)(iVar6 + 0x54);
  }
  (**(code **)(*piVar3 + 0x84))(*(undefined4 *)(in_ECX + 0x24),1);
  FUN_006ff420(*(undefined4 *)(in_ECX + 8));
  fVar10 = (float10)FUN_00588bd0(0xfa1);
  if (fVar10 == (float10)1.0) {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 | 1;
  }
  else {
    puVar1 = (ushort *)(*(int *)(in_ECX + 0x24) + 0x18);
    *puVar1 = *puVar1 & 0xfffe;
  }
  FUN_00707980();
  FUN_00707610();
  iVar6 = FUN_00582160(0,1);
  *(undefined1 *)(iVar6 + 0x7c) = 1;
  iVar6 = FUN_00401f00(0x14);
  if (iVar6 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = FUN_00590580(in_ECX,*(undefined4 *)(in_ECX + 0x24));
  }
  FUN_006ff8a0(uVar9);
  uVar9 = 0;
  fVar10 = (float10)FUN_00588bd0(0xfad);
  FUN_0058b2f0(0xfad,(float)fVar10,uVar9);
  uVar9 = 0;
  fVar10 = (float10)FUN_00588bd0(0xfac);
  FUN_0058b2f0(0xfac,(float)fVar10,uVar9);
  uVar9 = *(undefined4 *)(in_ECX + 0x24);
  *unaff_FS_OFFSET = iVar7;
  return uVar9;
}



void FUN_00592fb0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xa4) == '\0') {
    FUN_0058ced0(0xfde,&DAT_00a2f7ec);
  }
  FUN_00588bd0(0xfd3);
  uVar1 = FUN_009828c0();
  FUN_0057d2d0(uVar1);
  FUN_00588bd0(0xfd4);
  uVar1 = FUN_009828c0();
  FUN_00583dd0(uVar1);
  FUN_0057dd90(1);
  return;
}



void FUN_00593020(void)

{
  FUN_0057d7f0();
  FUN_0057d7f0();
  FUN_009828c0();
  return;
}



void FUN_00593050(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c01ce;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6b1b4;
  in_ECX[0x2a] = 0;
  in_ECX[0x2b] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x2c] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x1b] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x23] = 0;
  local_4 = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x24] = 0;
  *(undefined1 *)((int)in_ECX + 0xa6) = 0xff;
  iVar2 = FUN_00401f00(0x80);
  local_4._0_1_ = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00412be0();
  }
  in_ECX[0x22] = 0;
  local_4._0_1_ = 0;
  in_ECX[0x26] = 0;
  in_ECX[0x25] = uVar3;
  in_ECX[0x27] = 0;
  *(undefined1 *)(in_ECX + 0x29) = 0;
  iVar2 = FUN_00401f00(0x28);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (iVar2 != 0) {
    uVar3 = FUN_0057fe70();
    in_ECX[0x28] = uVar3;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  in_ECX[0x28] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005931c0(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int iVar3;
  int *piVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0628;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b1b4;
  local_4 = 0;
  if ((int *)in_ECX[0x25] != (int *)0x0) {
    (**(code **)(*(int *)in_ECX[0x25] + 0x10))(1,uVar2);
  }
  iVar3 = in_ECX[0x28];
  if (iVar3 != 0) {
    FUN_0057feb0();
    FUN_00401f20(iVar3);
  }
  piVar4 = in_ECX + 0x2c;
  iVar3 = 4;
  do {
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
    piVar4 = piVar4 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  iVar3 = in_ECX[0x2b];
  while (iVar3 != 0) {
    iVar3 = *(int *)(in_ECX[0x2b] + 4);
    FUN_00401f20(in_ECX[0x2b]);
    in_ECX[0x2b] = iVar3;
  }
  in_ECX[0x2a] = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005932b0(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00589b70(0x410);
  if ((iVar2 != 0) && (iVar2 = FUN_005898f0(), iVar2 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    iVar1 = *(int *)(iVar2 + 0x78);
    if (iVar1 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
    iVar1 = *(int *)(iVar2 + 0x80);
    if (iVar1 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
    iVar1 = *(int *)(iVar2 + 0x7c);
    if (iVar1 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar1);
    }
    iVar2 = *(int *)(iVar2 + 0x84);
    if (iVar2 != 0) {
      FUN_00484470();
      FUN_00401f20(iVar2);
    }
    FUN_00584740();
    iVar2 = FUN_00578fe0();
    if (iVar2 == 1) {
      FUN_0057cac0();
      return;
    }
  }
  return;
}



void FUN_00593370(int param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  if (param_2 != 0) {
    if (((param_1 < 8) || (0xb < param_1)) && (param_1 != 2)) {
      if (*(int *)(in_ECX + 0x54) != 0) {
        FUN_0058ceb0(0xfa1,0x3f800000);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0x90) = 0;
      if (*(int *)(in_ECX + 0x54) != 0) {
        FUN_00588bd0(0xfe0);
        iVar1 = FUN_009828c0();
        fVar2 = (float10)FUN_00588d90();
        fVar3 = (float10)FUN_00588bd0(0xfbd);
        FUN_0058ceb0(0xfab,(float)((float10)(double)fVar2 - fVar3));
        fVar2 = (float10)FUN_00588bd0(0xfcb);
        FUN_0058ceb0(0xfcb,(float)fVar2);
        fVar2 = (float10)FUN_00588bd0(0xfca);
        FUN_0058ceb0(0xfca,(float)fVar2);
        fVar2 = (float10)FUN_00588c50();
        FUN_0058ceb0(0xfad,(float)(fVar2 + (float10)iVar1));
        fVar2 = (float10)FUN_00588cf0();
        FUN_0058ceb0(0xfac,(float)(fVar2 + (float10)iVar1));
        FUN_0058ceb0(0xfa1,0x40000000);
        *(int *)(in_ECX + 0x90) = param_2;
        return;
      }
    }
  }
  return;
}



void FUN_005934f0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



void FUN_005935c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  if (in_ECX[0x18] != 0) {
    FUN_00588bd0(0xfb5);
    iVar1 = FUN_009828c0();
    FUN_00582160(0,1);
    iVar2 = FUN_009828c0();
    iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
    FUN_0058ceb0(0xfb7,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
    FUN_0058ceb0(0xfb7,0);
    fVar3 = (float10)FUN_00588bd0(0xfb5);
    if ((float10)iVar1 != fVar3) {
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      uVar4 = 0;
      FUN_00582160(0,1,0);
      FUN_0057d730(uVar4);
    }
  }
  return;
}



undefined4 FUN_00593690(int param_1)

{
  int in_ECX;
  
  if ((param_1 != 0) &&
     (((((*(int *)(in_ECX + 0xb0) != 0 &&
         (*(int *)(*(int *)(in_ECX + 0xb0) + 8) == *(int *)(param_1 + 8))) ||
        ((*(int *)(in_ECX + 0xb4) != 0 &&
         (*(int *)(*(int *)(in_ECX + 0xb4) + 8) == *(int *)(param_1 + 8))))) ||
       ((*(int *)(in_ECX + 0xb8) != 0 &&
        (*(int *)(*(int *)(in_ECX + 0xb8) + 8) == *(int *)(param_1 + 8))))) ||
      ((*(int *)(in_ECX + 0xbc) != 0 &&
       (*(int *)(*(int *)(in_ECX + 0xbc) + 8) == *(int *)(param_1 + 8))))))) {
    return 1;
  }
  return 0;
}



void FUN_005936f0(byte param_1)

{
  FUN_005931c0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00593710(void)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined1 *puVar7;
  int in_ECX;
  
  uVar3 = FUN_00580120();
  FUN_0058ced0(0xfde,uVar3);
  cVar2 = FUN_0057d2f0();
  if ((cVar2 == '\0') && (*(char *)(in_ECX + 0xa4) != '\0')) {
    iVar4 = FUN_00438db0();
    if (iVar4 != 0) {
      uVar3 = FUN_00438db0();
      FUN_004028d0(uVar3,0);
      return;
    }
    iVar4 = *(int *)(in_ECX + 0x94);
    if (*(ushort *)(iVar4 + 0x2c) == 0xffff) {
      pcVar5 = *(char **)(iVar4 + 0x28);
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar4 + 0x2c);
    }
    if (uVar6 != 0) {
      puVar7 = *(undefined1 **)(iVar4 + 0x28);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00a2f7ec;
      }
      FUN_0057ff20(puVar7);
      puVar7 = *(undefined1 **)(*(int *)(in_ECX + 0x94) + 0x28);
      if (puVar7 == (undefined1 *)0x0) {
        puVar7 = &DAT_00a2f7ec;
      }
      FUN_0058ced0(0xfde,puVar7);
      return;
    }
    FUN_0057ff20(DAT_00b38900);
    FUN_0058ced0(0xfde,DAT_00b38900);
    *(undefined1 *)(in_ECX + 0xa4) = 0;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_00593810(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  float10 fVar5;
  undefined4 uStack_118;
  int local_114;
  int local_110;
  float fStack_10c;
  char acStack_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&uStack_118;
  local_110 = param_3;
  local_114 = param_4;
  puVar1 = (undefined4 *)FUN_00589b70(0x410);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  fVar5 = (float10)thunk_FUN_00584980();
  fStack_10c = (float)fVar5;
  uVar2 = FUN_00590420("Data\\Menus\\dialog\\Alchemy.xml");
  uStack_118 = uVar2;
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 == 0x410) {
      uVar2 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar2);
      iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e28,0);
      if (iVar4 != 0) {
        fVar5 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar5 == (float10)6006.0) ||
           (fVar5 = (float10)FUN_00588bd0(0xfa5), fVar5 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,fStack_10c);
        }
        *(int *)(iVar4 + 0x78) = param_1;
        *(int *)(iVar4 + 0x7c) = param_2;
        *(int *)(iVar4 + 0x80) = local_110;
        *(int *)(iVar4 + 0x84) = local_114;
        DAT_00b3b718 = 0;
        if (param_1 != 0) {
          uVar2 = FUN_004851b0(DAT_00b333c4);
          _sprintf(acStack_108,"%s\\%s","Icons",uVar2);
          FUN_0058ced0(0xfe6,acStack_108);
        }
        if (param_2 != 0) {
          uVar2 = FUN_004851b0(DAT_00b333c4);
          _sprintf(acStack_108,"%s\\%s","Icons",uVar2);
          FUN_0058ced0(0xfe6,acStack_108);
          FUN_0058ceb0(0xfa1,0x40000000);
        }
        if (local_110 != 0) {
          uVar2 = FUN_004851b0(DAT_00b333c4);
          _sprintf(acStack_108,"%s\\%s","Icons",uVar2);
          FUN_0058ced0(0xfe6,acStack_108);
          FUN_0058ceb0(0xfa1,0x40000000);
        }
        if (local_114 != 0) {
          uVar2 = FUN_004851b0(DAT_00b333c4);
          _sprintf(acStack_108,"%s\\%s","Icons",uVar2);
          FUN_0058ced0(0xfe6,acStack_108);
          FUN_0058ceb0(0xfa1,0x40000000);
        }
        FUN_0057ff20(DAT_00b38900);
        FUN_00593710();
        FUN_00585190(0);
        return uStack_118;
      }
    }
    else if (piVar3[1] != 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return 0;
}



void FUN_00593af0(void)

{
  char cVar1;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057dde0();
    FUN_00593710();
    return;
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00593b20(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  char *pcStack_140;
  char *local_13c;
  uint uStack_138;
  char *local_124;
  undefined2 local_120;
  undefined2 local_11e;
  undefined1 *local_11c [2];
  char local_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfd56;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_124;
  uStack_138 = DAT_00b30aac ^ (uint)&stack0xfffffecc;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar1 = *(undefined4 *)(in_ECX + 0x50);
  local_13c = (char *)0x0;
  pcStack_140 = "effect_template";
  local_124 = (char *)0x0;
  local_120 = 0;
  local_11e = 0;
  FUN_004028d0();
  local_13c = (char *)0x0;
  pcStack_140 = local_124;
  local_4 = 0;
  iVar2 = FUN_00585410(uVar1);
  if (iVar2 != 0) {
    local_13c = (char *)(float)param_2;
    pcStack_140 = (char *)0xfae;
    FUN_0058ceb0();
    if (*(int *)(in_ECX + 0x94) == 0) {
      pcStack_140 = (char *)0x0;
    }
    else {
      pcStack_140 = (char *)(*(int *)(in_ECX + 0x94) + 0x24);
    }
    local_13c = (char *)0x3f800000;
    puVar3 = (undefined4 *)FUN_004145d0(local_11c);
    local_13c = (char *)*puVar3;
    pcStack_140 = (char *)0xfb1;
    local_4._0_1_ = 1;
    FUN_0058ced0();
    local_13c = local_11c[0];
    local_4 = (uint)local_4._1_3_ << 8;
    pcStack_140 = (char *)0x593c08;
    FUN_00401f20();
    local_11c[0] = (undefined1 *)&pcStack_140;
    FUN_004139f0(&pcStack_140);
    FUN_0058a020();
    local_13c = *(char **)(*(int *)(param_1 + 0x1c) + 0x48);
    if (local_13c == (undefined1 *)0x0) {
      local_13c = &DAT_00a2f7ec;
    }
    pcStack_140 = "Icons";
    _sprintf(local_114,"%s\\%s");
    local_13c = local_114;
    pcStack_140 = (char *)0xfaf;
    FUN_0058ced0();
  }
  local_13c = local_124;
  pcStack_140 = (char *)0x593c60;
  FUN_00401f20();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00593c90(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 != '\0') {
    FUN_0057ff50(param_1);
    FUN_00593710();
    *(undefined1 *)(in_ECX + 0xa4) = 2;
    return 1;
  }
  return 0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00593cd0(void)

{
  byte *pbVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint in_ECX;
  float fVar15;
  int *unaff_FS_OFFSET;
  float10 fVar16;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST1;
  float fStack_88;
  float fStack_84;
  int iStack_80;
  uint local_7c;
  float fStack_78;
  float fStack_74;
  int *piStack_70;
  float fStack_6c;
  int local_68 [4];
  float fStack_58;
  float fStack_54;
  undefined1 auStack_50 [64];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bfe0f;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&fStack_88;
  uVar6 = DAT_00b30aac ^ (uint)&stack0xffffff68;
  *unaff_FS_OFFSET = (int)&local_c;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  local_7c = in_ECX;
  FUN_00414c70(uVar6);
  puVar10 = *(undefined4 **)(*(int *)(in_ECX + 0x50) + 0x34);
  while (puVar10 != (undefined4 *)0x0) {
    piVar2 = puVar10 + 2;
    puVar10 = (undefined4 *)*puVar10;
    if ((undefined4 *)*piVar2 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar2)(1);
    }
  }
  iVar8 = *(int *)(in_ECX + 0xac);
  piVar2 = (int *)(in_ECX + 0xa8);
  while (iVar8 != 0) {
    iVar8 = *(int *)(*(int *)(in_ECX + 0xac) + 4);
    FUN_00401f20(*(int *)(in_ECX + 0xac));
    *(int *)(in_ECX + 0xac) = iVar8;
  }
  *piVar2 = 0;
  iVar8 = *(int *)(in_ECX + 0x50);
  puVar10 = *(undefined4 **)(iVar8 + 0x34);
  while (puVar10 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)*puVar10;
    (**(code **)(*(int *)(iVar8 + 0x30) + 8))(puVar10);
    puVar10 = puVar3;
  }
  *(undefined4 *)(iVar8 + 0x3c) = 0;
  *(undefined4 *)(iVar8 + 0x34) = 0;
  *(undefined4 *)(iVar8 + 0x38) = 0;
  FUN_0058e870();
  fStack_58 = 0.0;
  uVar7 = FUN_005f1910(0x13);
  fStack_74 = (float)FUN_0041ba00(uVar7);
  piStack_70 = (int *)(in_ECX + 0xb0);
  fStack_78 = 0.0;
  do {
    if (*piStack_70 != 0) {
      iVar8 = FUN_009832e6(*(undefined4 *)(*piStack_70 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03280,0)
      ;
      fStack_58 = (float)((int)fStack_58 + 1);
      local_68[(int)fStack_78] = iVar8;
      fVar15 = 0.0;
      if (*(int *)(*piStack_70 + 8) != 0) {
        fStack_88 = 0.0;
        for (piVar9 = (int *)(*(int *)(*piStack_70 + 8) + 0x34); piVar9 != (int *)0x0;
            piVar9 = (int *)piVar9[1]) {
          if (*piVar9 != 0) {
            fStack_88 = (float)((int)fStack_88 + 1);
          }
        }
        if (fStack_88 != 0.0) {
          do {
            if ((int)fStack_74 <= (int)fVar15) break;
            iVar8 = FUN_00414b10(fVar15);
            for (piVar9 = piVar2; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[1]) {
              if (*piVar9 == iVar8) goto LAB_00593eaf;
            }
            iVar8 = FUN_00414b10(fVar15);
            if (iVar8 != 0) {
              if (*piVar2 != 0) {
                piVar9 = (int *)FUN_00401f00(8);
                if (piVar9 == (int *)0x0) {
                  piVar9 = (int *)0x0;
                }
                else {
                  *piVar9 = *piVar2;
                  piVar9[1] = 0;
                }
                piVar9[1] = *(int *)(in_ECX + 0xac);
                *(int **)(in_ECX + 0xac) = piVar9;
              }
              *piVar2 = iVar8;
            }
LAB_00593eaf:
            fVar15 = (float)((int)fVar15 + 1);
          } while ((uint)fVar15 < (uint)fStack_88);
        }
      }
    }
    piStack_70 = piStack_70 + 1;
    fStack_78 = (float)((int)fStack_78 + 1);
  } while ((int)fStack_78 < 4);
  uVar7 = FUN_005f1910(0x13);
  fStack_84 = (float)FUN_0041ba00(uVar7);
  iStack_80 = 0;
  iVar8 = FUN_005f23b0(0x13);
  if ((3 < iVar8) && (fStack_58 == 1.4013e-45)) {
    iVar8 = 0;
    do {
      if (local_68[iVar8] != 0) break;
      iVar8 = iVar8 + 1;
    } while (iVar8 < 4);
    iVar8 = FUN_00414b10(0);
    if (iVar8 != 0) {
      fStack_88 = (float)FUN_00401f00(0x24);
      uStack_4 = 0;
      if (fStack_88 == 0.0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_004149a0(iVar8);
      }
      uStack_4 = 0xffffffff;
      FUN_00414b90(uVar7);
      iStack_80 = 1;
    }
    goto LAB_0059485e;
  }
  if (local_68[0] != 0) {
    if (local_68[1] != 0) {
      fStack_88 = 0.0;
      if (0 < (int)fStack_84) {
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 1;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
      if ((local_68[2] != 0) && (fStack_88 = 0.0, 0 < (int)fStack_84)) {
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 2;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
      if ((local_68[3] != 0) && (fStack_88 = 0.0, 0 < (int)fStack_84)) {
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 3;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
    }
    if (local_68[2] != 0) {
      fStack_88 = 0.0;
      if (0 < (int)fStack_84) {
        fStack_78 = (float)(local_68[0] + 0xc);
        fStack_6c = (float)(local_68[2] + 0xc);
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 4;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
      if (local_68[3] == 0) goto LAB_005944d2;
      fStack_88 = 0.0;
      if (0 < (int)fStack_84) {
        fStack_6c = (float)(local_68[2] + 0xc);
        piStack_70 = (int *)(local_68[3] + 0xc);
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 5;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
    }
    if ((local_68[3] != 0) && (fStack_88 = 0.0, 0 < (int)fStack_84)) {
      fStack_78 = (float)(local_68[0] + 0xc);
      piStack_70 = (int *)(local_68[3] + 0xc);
      do {
        iVar8 = FUN_00414b10(fStack_88);
        iVar12 = 0;
        do {
          iVar14 = FUN_00414b10(iVar12);
          if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
            fStack_74 = (float)FUN_00401f00(0x24);
            uStack_4 = 6;
            if (fStack_74 == 0.0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              puVar10 = (undefined4 *)FUN_004149a0(iVar8);
            }
            uStack_4 = 0xffffffff;
            cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
            if (cVar4 == '\0') {
              FUN_00414b90(puVar10);
              iStack_80 = iStack_80 + 1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)fStack_84);
        fStack_88 = (float)((int)fStack_88 + 1);
      } while ((int)fStack_88 < (int)fStack_84);
    }
  }
LAB_005944d2:
  if (local_68[1] != 0) {
    if (local_68[2] != 0) {
      fStack_88 = 0.0;
      if (0 < (int)fStack_84) {
        do {
          iVar8 = FUN_00414b10(fStack_88);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_74 = (float)FUN_00401f00(0x24);
              uStack_4 = 7;
              if (fStack_74 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_88 = (float)((int)fStack_88 + 1);
        } while ((int)fStack_88 < (int)fStack_84);
      }
      if (local_68[3] == 0) goto LAB_00594777;
      fStack_78 = 0.0;
      if (0 < (int)fStack_84) {
        do {
          iVar8 = FUN_00414b10(fStack_78);
          iVar12 = 0;
          do {
            iVar14 = FUN_00414b10(iVar12);
            if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
              fStack_88 = (float)FUN_00401f00(0x24);
              uStack_4 = 8;
              if (fStack_88 == 0.0) {
                puVar10 = (undefined4 *)0x0;
              }
              else {
                puVar10 = (undefined4 *)FUN_004149a0(iVar8);
              }
              uStack_4 = 0xffffffff;
              cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
              if (cVar4 == '\0') {
                FUN_00414b90(puVar10);
                iStack_80 = iStack_80 + 1;
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < (int)fStack_84);
          fStack_78 = (float)((int)fStack_78 + 1);
        } while ((int)fStack_78 < (int)fStack_84);
      }
    }
    if ((local_68[3] != 0) && (fStack_88 = 0.0, 0 < (int)fStack_84)) {
      fStack_74 = (float)(local_68[1] + 0xc);
      do {
        iVar8 = FUN_00414b10(fStack_88);
        iVar12 = 0;
        do {
          iVar14 = FUN_00414b10(iVar12);
          if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
            fStack_78 = (float)FUN_00401f00(0x24);
            uStack_4 = 9;
            if (fStack_78 == 0.0) {
              puVar10 = (undefined4 *)0x0;
            }
            else {
              puVar10 = (undefined4 *)FUN_004149a0(iVar8);
            }
            uStack_4 = 0xffffffff;
            cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
            if (cVar4 == '\0') {
              FUN_00414b90(puVar10);
              iStack_80 = iStack_80 + 1;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < (int)fStack_84);
        fStack_88 = (float)((int)fStack_88 + 1);
      } while ((int)fStack_88 < (int)fStack_84);
    }
  }
LAB_00594777:
  if (((local_68[2] != 0) && (local_68[3] != 0)) && (fStack_88 = 0.0, 0 < (int)fStack_84)) {
    fStack_6c = (float)(local_68[2] + 0xc);
    piStack_70 = (int *)(local_68[3] + 0xc);
    do {
      iVar8 = FUN_00414b10(fStack_88);
      iVar12 = 0;
      do {
        iVar14 = FUN_00414b10(iVar12);
        if (((iVar8 != 0) && (iVar14 != 0)) && (cVar4 = FUN_00412ef0(iVar14), cVar4 != '\0')) {
          fStack_74 = (float)FUN_00401f00(0x24);
          uStack_4 = 10;
          if (fStack_74 == 0.0) {
            puVar10 = (undefined4 *)0x0;
          }
          else {
            puVar10 = (undefined4 *)FUN_004149a0(iVar8);
          }
          uStack_4 = 0xffffffff;
          cVar4 = FUN_00414f00(*puVar10,puVar10[5]);
          if (cVar4 == '\0') {
            FUN_00414b90(puVar10);
            iStack_80 = iStack_80 + 1;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < (int)fStack_84);
      fStack_88 = (float)((int)fStack_88 + 1);
    } while ((int)fStack_88 < (int)fStack_84);
  }
LAB_0059485e:
  uVar6 = local_7c;
  uVar11 = FUN_0046e3f0(*(undefined4 *)(*(int *)(local_7c + 0x78) + 8));
  fStack_88 = (float)(uVar11 & 0xff);
  fStack_74 = (float)(int)fStack_88;
  local_7c = local_7c & 0xffffff00;
  fStack_54 = 0.0;
  fStack_58 = 0.0;
  fStack_84 = 0.0;
  cVar4 = FUN_00414eb0();
  if (cVar4 != '\0') {
    local_7c = CONCAT31(local_7c._1_3_,1);
  }
  if (*(int *)(uVar6 + 0x7c) != 0) {
    uVar11 = FUN_0046e3f0(*(undefined4 *)(*(int *)(uVar6 + 0x7c) + 8));
    fStack_88 = (float)(uVar11 & 0xff);
    fStack_54 = (float)(int)fStack_88;
  }
  if (*(int *)(uVar6 + 0x84) != 0) {
    uVar11 = FUN_0046e3f0(*(undefined4 *)(*(int *)(uVar6 + 0x84) + 8));
    fStack_88 = (float)(uVar11 & 0xff);
    fStack_58 = (float)(int)fStack_88;
  }
  if (*(int *)(uVar6 + 0x80) != 0) {
    uVar11 = FUN_0046e3f0(*(undefined4 *)(*(int *)(uVar6 + 0x80) + 8));
    fStack_88 = (float)(uVar11 & 0xff);
    fStack_84 = (float)(int)fStack_88;
  }
  cVar4 = '\0';
  fVar16 = (float10)FUN_005e0430(0x13);
  fStack_88 = (float)fVar16;
  *(float *)(uVar6 + 0x88) = fStack_88;
  fVar16 = (float10)FUN_00548400(fStack_74,fStack_88);
  fStack_78 = (float)fVar16;
  iVar8 = 0;
  do {
    piStack_70 = (int *)0x3f800000;
    fStack_6c = 1.0;
    iVar12 = FUN_00414b10(iVar8);
    if (iVar12 == 0) {
      if (iVar8 == 0) {
        if (*(char *)(uVar6 + 0xa4) != '\x02') {
          FUN_0057ff20(DAT_00b38900);
          FUN_00593710();
          *(undefined1 *)(uVar6 + 0xa4) = 0;
        }
        FUN_0058ceb0(0xfaf,0x3f800000);
        break;
      }
    }
    else {
      cVar5 = FUN_00413470();
      fStack_74 = (float)CONCAT31(fStack_74._1_3_,cVar5);
      if (cVar5 == '\0') {
        if (*(int *)(uVar6 + 0x84) == 0) goto LAB_005949b7;
        cVar4 = (-(*(int *)(uVar6 + 0x80) != 0) & 3U) + 1;
      }
      else if (*(int *)(uVar6 + 0x7c) == 0) {
LAB_005949b7:
        if (*(int *)(uVar6 + 0x80) != 0) {
          cVar4 = '\x03';
        }
      }
      else {
        cVar4 = (-(*(int *)(uVar6 + 0x80) != 0) & 3U) + 2;
      }
      fStack_88 = *(float *)(*(int *)(iVar12 + 0x1c) + 0x5c);
      uVar11 = *(uint *)(*(int *)(iVar12 + 0x1c) + 0x58);
      uVar13 = uVar11 >> 7;
      if (((uVar13 & 1) == 0) && ((uVar11 >> 8 & 1) == 0)) {
        FUN_00548420(&fStack_6c,&piStack_70,fStack_88,fStack_78,cVar4,fStack_74,fStack_58,fStack_54,
                     fStack_84,local_7c);
      }
      else if ((uVar13 & 1) == 0) {
        if ((uVar11 >> 8 & 1) == 0) {
          if ((uVar13 & 1) != 0) goto LAB_00594a85;
        }
        else {
          FUN_005486a0(&piStack_70,fStack_88,fStack_78,cVar4,fStack_74,fStack_58,fStack_54,fStack_84
                       ,local_7c);
        }
      }
      else {
LAB_00594a85:
        if ((uVar11 >> 8 & 1) == 0) {
          FUN_005487f0(&fStack_6c,fStack_88,fStack_78,cVar4,fStack_74,fStack_58,fStack_54,fStack_84,
                       local_7c);
        }
      }
      iVar14 = FUN_009828c0();
      fStack_88 = (float)(iVar14 + (uint)((float10)0.5 <= extraout_ST0 - (float10)iVar14));
      piStack_70 = (int *)(float)(int)fStack_88;
      iVar14 = FUN_009828c0();
      fStack_88 = (float)(iVar14 + (uint)(extraout_ST1 <= extraout_ST0_00 - (float10)iVar14));
      fStack_6c = (float)(int)fStack_88;
      iVar14 = FUN_009828c0();
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      FUN_004133e0(iVar14);
      iVar14 = FUN_009828c0();
      if (iVar14 < 1) {
        iVar14 = 1;
      }
      FUN_00413340(iVar14);
      FUN_00413390(0);
      FUN_00593b20(iVar12,iVar8);
      if ((*(char *)(uVar6 + 0xa4) == '\x02') || (*(char *)(uVar6 + 0xa4) == '\x03')) {
        uVar7 = FUN_00588c10(0xfde);
        FUN_004028d0(uVar7,0);
      }
      else if (iVar8 == 0) {
        FUN_00413a90(auStack_50);
        FUN_0057ff20(auStack_50);
        *(undefined1 *)(uVar6 + 0xa4) = 1;
        FUN_00593710();
      }
      FUN_0058ceb0(0xfaf,0x40000000);
    }
    uVar7 = FUN_009828c0();
    *(undefined4 *)(*(int *)(uVar6 + 0x94) + 0x78) = uVar7;
    pbVar1 = (byte *)(*(int *)(uVar6 + 0x94) + 0x7c);
    *pbVar1 = *pbVar1 | 1;
    iVar8 = iVar8 + 1;
  } while (iVar8 < iStack_80);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00594ca0(void)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  int unaff_EBP;
  int *piVar6;
  int *unaff_FS_OFFSET;
  char *pcVar7;
  undefined4 uVar8;
  float fVar9;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009cad7b;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  (**(code **)(*DAT_00b333c4 + 0x39c))(0x13,0,0,uVar3);
  DAT_00b333c4[0x1a2] = DAT_00b333c4[0x1a2] + 1;
  iVar4 = FUN_0044a750(*(undefined4 *)(in_ECX + 0x94));
  if (iVar4 == 0) {
    FUN_0044d950(*(undefined4 *)(in_ECX + 0x94));
    FUN_00459800(*(undefined4 *)(in_ECX + 0x94));
    *(undefined4 *)(*(int *)(in_ECX + 0x94) + 0x74) = *(undefined4 *)(in_ECX + 0x98);
    cVar2 = FUN_00414eb0();
    pcVar1 = *(code **)(*(int *)(*(int *)(in_ECX + 0x94) + 0x40) + 0x18);
    if (cVar2 == '\0') {
      (*pcVar1)("Clutter\\Potions\\Potion01.NIF");
      pcVar7 = "Clutter\\Potions\\IconPotion01.dds";
    }
    else {
      (*pcVar1)("Clutter\\Potions\\PotionPoison.NIF");
      pcVar7 = "Clutter\\Potions\\IconPotionPoison01.dds";
    }
    FUN_004028d0(pcVar7,0);
    FUN_004d8720(*(undefined4 *)(in_ECX + 0x94),0,1);
    iVar4 = FUN_00401f00(0x80);
    if (iVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = FUN_00412be0();
    }
    *(undefined4 *)(in_ECX + 0x94) = uVar8;
  }
  else {
    FUN_004d8720(iVar4,0,1);
  }
  FUN_0057acc0(DAT_00b388e8,0,1,0xbf800000);
  FUN_0057de50(0x12);
  *(undefined1 *)(in_ECX + 0xa4) = 3;
  piVar6 = (int *)(in_ECX + 0xb0);
  iVar4 = 4;
  do {
    if (*piVar6 != 0) {
      (**(code **)(*DAT_00b333c4 + 0x100))(*(undefined4 *)(*piVar6 + 8),0,1,0,0,0,0,0,1,1);
      iVar5 = FUN_004b2460();
      if (iVar5 == 1) {
        iVar5 = *piVar6;
        if (iVar5 != 0) {
          FUN_00484470();
          FUN_00401f20(iVar5);
        }
        *piVar6 = 0;
        FUN_0058ced0(0xfae,DAT_00b388f8);
        fVar9 = 1.0;
        uVar8 = 0xfa1;
      }
      else {
        iVar5 = FUN_004b2460();
        FUN_0060d020(iVar5 + -1);
        iVar5 = FUN_004b2460();
        fVar9 = (float)iVar5;
        uVar8 = 0xfae;
      }
      FUN_0058ceb0(uVar8,fVar9);
    }
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  FUN_00593cd0();
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00594f00(char param_1)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  float local_10c;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_10c;
  local_10c = 0.0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  piVar3 = (int *)(in_ECX + 0xb0);
  iVar2 = 4;
  do {
    if (*piVar3 == 0) {
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    else {
      *(int *)(in_ECX + 0x9c) = *(int *)(in_ECX + 0x9c) + 1;
      fVar4 = (float10)FUN_00470620(*(undefined4 *)(*piVar3 + 8));
      local_10c = (float)(fVar4 + (float10)local_10c);
    }
    piVar3 = piVar3 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(float *)(in_ECX + 0x98) = local_10c / (float)*(int *)(in_ECX + 0x9c);
  uVar1 = DAT_00b388f8;
  if (*(int *)(in_ECX + 0xb0 + DAT_00b3b270 * 4) != 0) {
    uVar1 = FUN_004851b0(DAT_00b333c4);
    _sprintf(local_108,"%s\\%s","Icons",uVar1);
    FUN_0058ced0(0xfe6,local_108);
    FUN_0058ceb0(0xfa1,0x40000000);
    local_10c = (float)FUN_004b2460();
    FUN_0058ceb0(0xfae,(float)(int)local_10c);
    uVar1 = FUN_00488df0();
  }
  FUN_0058ced0(0xfae,uVar1);
  if (param_1 != '\0') {
    if (*(char *)(in_ECX + 0xa4) == '\x03') {
      *(undefined1 *)(in_ECX + 0xa4) = 1;
    }
    FUN_0058e870();
    FUN_00593cd0();
    DAT_00b3b270 = 0;
  }
  return;
}



void FUN_00595080(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_0057d2f0();
  if (cVar1 == '\0') {
    if ((param_1 == 2) || (param_1 == 3)) {
      FUN_00592fb0();
      goto LAB_005950b7;
    }
  }
  else {
    FUN_0057dd90(0);
LAB_005950b7:
    FUN_00593710();
  }
  switch(param_1) {
  case 8:
    DAT_00b3b270 = 0;
    break;
  case 9:
    DAT_00b3b270 = 1;
    break;
  case 10:
    DAT_00b3b270 = 2;
    break;
  case 0xb:
    DAT_00b3b270 = 3;
    break;
  default:
    goto switchD_005950c6_caseD_c;
  case 0xe:
    FUN_00594ca0();
    return;
  case 0xf:
    FUN_005932b0();
    return;
  }
  FUN_005d2070(3,0,0,0);
switchD_005950c6_caseD_c:
  return;
}



void FUN_00595150(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  *in_ECX = &PTR_FUN_00a6b29c;
  return;
}



undefined4 FUN_00595240(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0xc) {
    return *(undefined4 *)(in_ECX + 0x50);
  }
  if (param_1 == 1) {
    return *(undefined4 *)(in_ECX + 0x28);
  }
  if (param_1 == 2) {
    return *(undefined4 *)(in_ECX + 0x2c);
  }
  if (param_1 == 3) {
    return *(undefined4 *)(in_ECX + 0x30);
  }
  if (param_1 == 4) {
    return *(undefined4 *)(in_ECX + 0x34);
  }
  if (param_1 == 5) {
    return *(undefined4 *)(in_ECX + 0x38);
  }
  if (param_1 == 6) {
    return *(undefined4 *)(in_ECX + 0x3c);
  }
  if (param_1 == 7) {
    return *(undefined4 *)(in_ECX + 0x40);
  }
  if (param_1 == 8) {
    return *(undefined4 *)(in_ECX + 0x44);
  }
  if (param_1 == 9) {
    return *(undefined4 *)(in_ECX + 0x48);
  }
  if (param_1 == 10) {
    return *(undefined4 *)(in_ECX + 0x4c);
  }
  return 0;
}



void FUN_005952d0(void)

{
  FUN_0057d7a0();
  FUN_009828c0();
  return;
}



undefined4 FUN_00595300(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
        (*(int *)(in_ECX + 0x30) != 0)) &&
       ((*(int *)(in_ECX + 0x34) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
      ((*(int *)(in_ECX + 0x3c) != 0 &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))) &&
     ((*(int *)(in_ECX + 0x48) != 0 &&
      ((*(int *)(in_ECX + 0x4c) != 0 && (*(int *)(in_ECX + 0x50) != 0)))))) {
    return 1;
  }
  return 0;
}



void FUN_00595350(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6b29c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_00595380(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3f9);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar6 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Options\\audio_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x3f9) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  FUN_0058fba0(0);
  uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar3);
  FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e44,0);
  cVar1 = FUN_00595300();
  if (cVar1 != '\0') {
    fVar7 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar7 == (float10)6006.0) ||
       (fVar7 = (float10)FUN_00588bd0(0xfa5), fVar7 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar6);
    }
    iVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfb0,0x42c80000);
    FUN_0058ceb0(0xfb2,0x41c80000);
    FUN_0058ceb0(0xfb3,(float)iVar5);
    FUN_0058ceb0(0xfb3,0);
    FUN_006a8e00();
    iVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfb0,0x42c80000);
    FUN_0058ceb0(0xfb2,0x41c80000);
    FUN_0058ceb0(0xfb3,(float)iVar5);
    FUN_0058ceb0(0xfb3,0);
    iVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfb0,0x42c80000);
    FUN_0058ceb0(0xfb2,0x41c80000);
    FUN_0058ceb0(0xfb3,(float)iVar5);
    FUN_0058ceb0(0xfb3,0);
    iVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfb0,0x42c80000);
    FUN_0058ceb0(0xfb2,0x41c80000);
    FUN_0058ceb0(0xfb3,(float)iVar5);
    FUN_0058ceb0(0xfb3,0);
    iVar5 = FUN_009828c0();
    FUN_0058ceb0(0xfaf,0);
    FUN_0058ceb0(0xfb0,0x42c80000);
    FUN_0058ceb0(0xfb2,0x41c80000);
    FUN_0058ceb0(0xfb3,(float)iVar5);
    FUN_0058ceb0(0xfb3,0);
    FUN_00585190(0);
    return 1;
  }
  FUN_004a7a60("Audio Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_00595740(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f9);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_00595a20(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  
  iVar1 = *(int *)(DAT_00b33398 + 0x24);
  FUN_00588bd0(0xfb5);
  iVar7 = FUN_009828c0();
  FUN_00588bd0(0xfb5);
  iVar8 = FUN_009828c0();
  FUN_00588bd0(0xfb5);
  iVar9 = FUN_009828c0();
  FUN_00588bd0(0xfb5);
  iVar10 = FUN_009828c0();
  FUN_00588bd0(0xfb5);
  iVar11 = FUN_009828c0();
  fVar6 = (float)iVar7;
  bVar2 = fVar6 != *(float *)(iVar1 + 0xb8) * 100.0;
  if (bVar2) {
    *(float *)(iVar1 + 0xb8) = fVar6 / 100.0;
  }
  fVar12 = (float10)FUN_006a8e00();
  fVar13 = (float10)iVar11;
  bVar3 = fVar13 != fVar12 * (float10)100.0;
  if (bVar3) {
    FUN_006aa1a0((float)(fVar13 / (float10)100.0),1);
  }
  fVar6 = (float)iVar10;
  bVar4 = fVar6 != *(float *)(iVar1 + 0xc4) * 100.0;
  if (bVar4) {
    *(float *)(iVar1 + 0xc4) = fVar6 / 100.0;
  }
  fVar6 = (float)iVar8;
  bVar5 = fVar6 != *(float *)(iVar1 + 0xbc) * 100.0;
  if (bVar5) {
    *(float *)(iVar1 + 0xbc) = fVar6 / 100.0;
  }
  if ((float)iVar9 == *(float *)(iVar1 + 0xc0) * 100.0) {
    if (!bVar5 && (!bVar4 && (!bVar3 && !bVar2))) {
      return;
    }
    FUN_006aa280();
    return;
  }
  *(float *)(iVar1 + 0xc0) = (float)iVar9 / 100.0;
  FUN_006aa280();
  return;
}



void FUN_00595be0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  *in_ECX = &PTR_FUN_00a6b334;
  return;
}



void FUN_00595c40(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6b334;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00595c70(int param_1)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    fVar2 = (float10)FUN_00588cf0();
    *(float *)(in_ECX + 0x38) = (float)(fVar2 - (float10)iVar1);
  }
  return;
}



void FUN_00595cd0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb3,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb3,(float)iVar1);
    FUN_0058ceb0(0xfb3,0);
  }
  return;
}



void FUN_00595da0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  FUN_00582160(0,1);
  fVar3 = (float10)FUN_00588bd0(0xfae);
  if (fVar3 == (float10)1.0) {
    FUN_00588bd0(0xfb5);
    iVar1 = FUN_009828c0();
    iVar2 = FUN_009828c0();
    iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
    FUN_0058ceb0(0xfb7,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
    FUN_0058ceb0(0xfb7,0);
    fVar3 = (float10)FUN_00588bd0(0xfb5);
    if ((float10)iVar1 != fVar3) {
      (**(code **)(*in_ECX + 0x14))(param_1,param_2);
      uVar4 = 0;
      FUN_00582160(0,1,0);
      FUN_0057d730(uVar4);
      return;
    }
  }
  else {
    FUN_00588bd0(0xfb7);
    iVar1 = FUN_009828c0();
    iVar2 = FUN_009828c0();
    if (iVar2 < 1) {
      uVar4 = 0x40000000;
    }
    else {
      uVar4 = 0xc0000000;
    }
    FUN_0058ceb0(0xfb4,uVar4);
    FUN_0058ceb0(0xfb4,0);
    fVar3 = (float10)FUN_00588bd0(0xfb7);
    if ((float10)iVar1 != fVar3) {
      FUN_00588bd0(0xfb6);
      iVar1 = FUN_009828c0();
      if (iVar1 != 0) {
        FUN_00582160(0,1);
        FUN_0057de50(iVar1);
      }
    }
  }
  return;
}



void FUN_00595f30(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00589b70(0x402);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_005898f0();
      FUN_00584740();
      if ((*(byte *)(*(int *)(in_ECX + 0x34) + 0x88) & 1) != 0) {
        FUN_0057de50(0x1a);
        return;
      }
      FUN_0057de50(0x1c);
    }
  }
  return;
}



void FUN_00596020(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  int unaff_EBP;
  int *unaff_FS_OFFSET;
  int unaff_retaddr;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(param_1 + 0x88) & 1) == 0) {
    uVar2 = 0x40000000;
  }
  else {
    uVar2 = 0x3f800000;
  }
  FUN_0058ceb0(0xfae,uVar2);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x80) + 0x10))(0,0x43534544,uVar1);
  FUN_0058ced0(0xfb0,uVar2);
  *(int *)(in_ECX + 0x30) = unaff_retaddr;
  if ((unaff_retaddr == 0) || ((*(byte *)(param_1 + 0x88) & 2) != 0)) {
    uVar2 = 0x3f800000;
  }
  else {
    uVar2 = 0x40000000;
  }
  FUN_0058ceb0(0xfb1,uVar2);
  uVar2 = (**(code **)(*(int *)(param_1 + 0x80) + 0x10))(0,0x43534544);
  FUN_004028d0(uVar2,0);
  FUN_0058ceb0(0xfb4,0xc7c34f80);
  FUN_0058ceb0(0xfb4,0);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = unaff_EBP;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00596150(void)

{
  undefined4 uVar1;
  uint uVar2;
  int *unaff_FS_OFFSET;
  undefined4 local_174;
  undefined2 local_170;
  undefined2 local_16e;
  undefined4 local_16c;
  undefined4 local_168;
  char local_140;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfe61;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_174;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xfffffe80;
  *unaff_FS_OFFSET = (int)&local_c;
  local_16c = 0;
  local_168 = 0;
  FUN_004028d0("Data\\Menus\\workbook.html",0);
  uVar1 = local_16c;
  local_4 = 0;
  FUN_00430970(local_16c,0,0x2800,0);
  local_174 = 0;
  local_170 = 0;
  local_16e = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0042fe80(0,0);
  if (local_140 == '\0') {
    FUN_00579b60("ERROR: Opening workbook file: %s \n",uVar1,local_168,uVar2);
    FUN_00401f20(local_174);
  }
  else {
    FUN_00430700(&local_174,0xffffffff);
    FUN_0058ced0(0xfb0,local_174);
    FUN_0058ceb0(0xfb4,0xc7c34f80);
    FUN_0058ceb0(0xfb4,0);
    FUN_00401f20(local_174);
  }
  local_174 = 0;
  local_16e = 0;
  local_170 = 0;
  local_4 = local_4 & 0xffffff00;
  FUN_00430670();
  FUN_00401f20(uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_005962c0(int param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x402);
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  if (param_1 == 0) {
    return 0;
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\book_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  pcVar1 = *(code **)(*piVar4 + 0x34);
  piVar4[0xd] = param_1;
  iVar5 = (*pcVar1)();
  if (iVar5 != 0x402) {
    if (piVar4[1] != 0) {
      (**(code **)*piVar4)(1);
    }
    return 0;
  }
  uVar6 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar6);
  iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13330,0);
  if ((*(int *)(iVar5 + 0x28) == 0) || (*(int *)(iVar5 + 0x2c) == 0)) {
    FUN_004a7a60("Book Menu Creation Failed... Are your menu and art resources up to date?");
    return 0;
  }
  fVar8 = (float10)FUN_00588bd0(0xfa5);
  if (fVar8 != (float10)6006.0) {
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if (fVar8 != (float10)102.0) goto LAB_005963cf;
  }
  FUN_0058ceb0(0xfab,(float)fVar7);
LAB_005963cf:
  FUN_00596020(param_1,param_2);
  if ((*(byte *)(*(int *)(iVar5 + 0x34) + 0x88) & 1) == 0) {
    uVar6 = 0x1b;
  }
  else {
    uVar6 = 0x19;
  }
  FUN_0057de50(uVar6);
  FUN_00585190(0);
  return uVar3;
}



void FUN_00596420(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  *in_ECX = &PTR_FUN_00a6b404;
  return;
}



float10 FUN_00596470(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x415);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e5c,0);
    iVar1 = FUN_009832e6(uVar2);
    return (float10)*(int *)(iVar1 + 0x30);
  }
  return (float10)1;
}



void FUN_005964b0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x415);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584740();
      return;
    }
  }
  return;
}



void FUN_005964e0(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x415);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      FUN_00584390();
      return;
    }
  }
  return;
}



void FUN_00596520(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6b404;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00596550(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_00589b70(0x415);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e5c,0);
    iVar1 = FUN_009832e6(uVar2);
    iVar3 = FUN_009828c0();
    if (*(int *)(iVar1 + 0x30) != iVar3) {
      *(int *)(iVar1 + 0x30) = iVar3;
      FUN_0058ceb0(0xfaf,(float)iVar3);
    }
  }
  return;
}



undefined4 FUN_005965c0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x415);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  FUN_00582160(0,1);
  uVar2 = FUN_00590420("Data\\Menus\\breath_meter_menu.xml");
  piVar3 = (int *)FUN_005898f0();
  if (piVar3 != (int *)0x0) {
    iVar4 = (**(code **)(*piVar3 + 0x34))();
    if (iVar4 == 0x415) {
      uVar5 = FUN_009832e6(uVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar5);
      iVar4 = FUN_009832e6(piVar3,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13e5c,0);
      if (*(int *)(iVar4 + 0x2c) == 0) {
        FUN_004a7a60(
                    "Breath Meter Menu Creation Failed... Are your menu and art resources up to date?"
                    );
        (**(code **)*piVar3)(1);
        return 0;
      }
      FUN_00596550(0x3f800000);
      FUN_0058fba0(0);
      return uVar2;
    }
    if (piVar3[1] != 0) {
      (**(code **)*piVar3)(1);
    }
  }
  return 0;
}



undefined4 FUN_005966f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00582160(0,1);
  *(int *)(iVar1 + 0x8c) = *(int *)(iVar1 + 0x8c) + param_1;
  return *(undefined4 *)(iVar1 + 0x8c);
}



void FUN_00596710(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x406);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_00596760(float param_1)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 extraout_ST0;
  float10 extraout_ST1;
  
  if (param_1 == 4.2039e-45) {
    FUN_00582160(0,1);
    fVar2 = (float10)FUN_00588bd0(0xfb0);
    fVar3 = (float10)FUN_00588bd0(0xfaf);
    FUN_0057d7f0();
    FUN_0057d7f0();
    iVar1 = FUN_009828c0();
    fVar4 = (float10)FUN_00588cf0();
    fVar5 = (float10)FUN_00588bd0(0xfca);
    param_1 = (float)((float10)(double)((float10)iVar1 - fVar4) / fVar5);
    if (param_1 < 1.0) {
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
    }
    else {
      param_1 = 1.0;
    }
    fVar2 = (float10)(((float)fVar2 - (float)fVar3) * param_1);
    iVar1 = FUN_009828c0();
    fVar4 = (float10)iVar1;
    if (extraout_ST0 - fVar4 < (float10)0.0) {
      fVar4 = fVar4 - (float10)1.0;
    }
    if (fVar2 - (float10)(float)fVar4 < (float10)0.5 ==
        (fVar2 - (float10)(float)fVar4 == (float10)0.5)) {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
      fVar2 = fVar2 + (float10)1.0 + (float10)(float)fVar3;
    }
    else {
      fVar2 = (float10)FUN_00404f70((float)extraout_ST1);
    }
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    FUN_0058ceb0(0xfb7,(float)fVar2);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



undefined4 FUN_00596980(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if (iVar2 == iVar1) {
    if (param_1 == 9) {
      iVar1 = FUN_00582160(0,0);
      (**(code **)(*in_ECX + 0xc))(99,*(undefined4 *)(iVar1 + 0x88));
      return 1;
    }
    if (param_1 == 10) {
      (**(code **)(*in_ECX + 0xc))(4,0);
      return 1;
    }
    if (param_1 == 0xb) {
      (**(code **)(*in_ECX + 0xc))(5,0);
      return 1;
    }
  }
  return 0;
}



int FUN_00596bc0(void)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  FUN_00588bd0(0xfaa);
  iVar4 = FUN_009828c0();
  iVar5 = 0;
  piVar6 = (int *)(DAT_00b33a98 + 0x54);
  iVar2 = 0;
  while (((piVar6 != (int *)0x0 && (iVar1 = *piVar6, iVar1 != 0)) && (iVar5 <= iVar4))) {
    cVar3 = FUN_0051bec0();
    if (cVar3 != '\0') {
      iVar5 = iVar5 + 1;
    }
    piVar6 = (int *)piVar6[1];
    iVar2 = iVar1;
  }
  return iVar2;
}



void FUN_00596c50(void)

{
  int in_ECX;
  
  FUN_00401f20(*(undefined4 *)(in_ECX + 0x28));
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined2 *)(in_ECX + 0x2e) = 0;
  *(undefined2 *)(in_ECX + 0x2c) = 0;
  return;
}



void FUN_00596c70(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b49c;
  FUN_00401f20(in_ECX[0x21],uVar1);
  in_ECX[0x21] = 0;
  *(undefined2 *)((int)in_ECX + 0x8a) = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00596cf0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  undefined1 *puVar5;
  float10 fVar6;
  float fVar7;
  
  if (param_1 == 0) {
    param_1 = *(int *)(in_ECX + 0x3c);
  }
  iVar4 = 0;
  do {
    uVar2 = FUN_0051bf00(iVar4);
    uVar2 = FUN_0052e800(uVar2);
    FUN_0058ced0(iVar4 + 0xfaf,uVar2);
    iVar3 = FUN_0051bf00(iVar4);
    FUN_0058ceb0(iVar4 + 0xfb9,(float)iVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 7);
  uVar2 = FUN_006ecc80();
  uVar2 = FUN_0052e7e0(uVar2);
  FUN_0058ced0(0xfb6,uVar2);
  iVar4 = FUN_006ecc80();
  FUN_0058ceb0(0xfc0,(float)iVar4);
  uVar2 = FUN_00780f70();
  uVar2 = FUN_0051be50(uVar2);
  FUN_0058ced0(0xfb7,uVar2);
  iVar4 = FUN_00780f70();
  FUN_0058ceb0(0xfc1,(float)iVar4);
  uVar2 = FUN_00422de0();
  uVar2 = FUN_0051be50(uVar2);
  FUN_0058ced0(0xfb8,uVar2);
  iVar4 = FUN_00422de0();
  FUN_0058ceb0(0xfc2,(float)iVar4);
  puVar5 = *(undefined1 **)(param_1 + 0x30);
  if (puVar5 == (undefined1 *)0x0) {
    puVar5 = &DAT_00a2f7ec;
  }
  FUN_0058ced0(0xfc3,puVar5);
  puVar1 = *(undefined4 **)(*(int *)(in_ECX + 0x28) + 0x34);
  while (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
    fVar6 = (float10)FUN_00588bd0(0xfaa);
    if ((float10)*(int *)(in_ECX + 0x44) == fVar6) {
      FUN_0058ceb0(0xfb0,0x40000000);
      FUN_00582160(0,1);
      iVar4 = FUN_00582160(0,1);
      *(int *)(iVar4 + 0x8c) = *(int *)(iVar4 + 0x8c) + 1;
      fVar7 = (float)*(int *)(iVar4 + 0x8c);
      if (*(int *)(iVar4 + 0x8c) < 0) {
        fVar7 = fVar7 + 4.2949673e+09;
      }
      uVar2 = 0xff0;
    }
    else {
      fVar7 = 1.0;
      uVar2 = 0xfb0;
    }
    FUN_0058ceb0(uVar2,fVar7);
  }
  return;
}



void FUN_00596ef0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bfea3;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00584640(uVar1);
  *in_ECX = &PTR_FUN_00a6b49c;
  in_ECX[0x21] = 0;
  *(undefined2 *)(in_ECX + 0x22) = 0;
  *(undefined2 *)((int)in_ECX + 0x8a) = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  local_4 = 1;
  uVar2 = FUN_004473a0(DAT_00b37c88);
  in_ECX[0x10] = uVar2;
  in_ECX[0x17] = 0xffffffff;
  in_ECX[0x19] = 0xffffffff;
  in_ECX[0x18] = 0xffffffff;
  in_ECX[0x11] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  in_ECX[0x1a] = 0xffffffff;
  in_ECX[0x1b] = 0xffffffff;
  in_ECX[0x1c] = 0xffffffff;
  in_ECX[0x1d] = 0xffffffff;
  in_ECX[0x1e] = 0xffffffff;
  in_ECX[0x1f] = 0xffffffff;
  in_ECX[0x20] = 0xffffffff;
  in_ECX[0x12] = 0xffffffff;
  in_ECX[0x13] = 0xffffffff;
  in_ECX[0x14] = 0xffffffff;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00596fc0(byte param_1)

{
  FUN_00596c70();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00596fe0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  char *pcVar5;
  int *unaff_FS_OFFSET;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b7148;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 == 4) {
    local_14 = 0;
    local_10 = 0;
    local_e = 0;
    pcVar5 = *(char **)(*(int *)(in_ECX + 0x3c) + 0x1c);
    local_4 = 0;
    if (pcVar5 == (char *)0x0) {
      pcVar5 = "";
    }
    uVar4 = 0;
    if ((pcVar5 != (char *)0x0) &&
       ((((((cVar1 = *pcVar5, cVar1 == 'a' || (cVar1 == 'e')) || (cVar1 == 'i')) ||
          ((cVar1 == 'o' || (cVar1 == 'u')))) ||
         ((cVar1 == 'A' || ((cVar1 == 'E' || (cVar1 == 'I')))))) ||
        ((cVar1 == 'O' || (uVar4 = DAT_00b38660, cVar1 == 'U')))))) {
      uVar4 = DAT_00b38668;
    }
    FUN_00402e30(&local_14,"%s %s?",uVar4,pcVar5);
    uVar4 = local_14;
    FUN_00579c10(local_14,&LAB_00596a00,1,DAT_00b38d00,DAT_00b38cf8,0);
    FUN_00401f20(uVar4);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 99) {
    FUN_0058ceb0(0xfb0,0x40000000);
    iVar3 = FUN_00596bc0(param_2);
    if (iVar3 != 0) {
      FUN_0057de50(0xb);
      FUN_00588bd0(0xfaa);
      uVar4 = FUN_009828c0();
      *(undefined4 *)(in_ECX + 0x44) = uVar4;
      *(int *)(in_ECX + 0x3c) = iVar3;
      FUN_00596cf0(0);
      *unaff_FS_OFFSET = local_c;
      return;
    }
  }
  else if (param_1 == 5) {
    FUN_0057de50(1,uVar2);
    *(undefined4 *)(in_ECX + 0x58) = 1;
    FUN_00584740();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_005971e0(int param_1,int param_2,int param_3,int param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  int in_ECX;
  int iVar5;
  int local_108;
  char local_104 [256];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)&local_108;
  local_108 = param_2;
  iVar3 = FUN_00585410(*(undefined4 *)(in_ECX + 0x28),"class_template",0);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar5 = 0;
    do {
      pcVar1 = local_104 + iVar5;
      cVar2 = pcVar1[param_1 - (int)local_104];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar5 = iVar5 + 1, iVar5 < 0x100));
    local_104[0xff] = 0;
    FUN_004028d0(local_104,0);
    FUN_0058ceb0(0xfaa,(float)param_3);
    FUN_0058ced0(0xfaf,param_1);
    iVar5 = local_108;
    if (local_108 == *(int *)(in_ECX + 0x40)) {
      *(int *)(in_ECX + 0x34) = iVar3;
    }
    if (param_4 == 0) {
      FUN_0058ceb0(0xfb0,0x3f800000);
      FUN_0058ceb0(0xff0,0x3f800000);
    }
    else {
      FUN_0058ceb0(0xff0,(float)param_4);
      FUN_0058ceb0(0xfb0,0x40000000);
      if (iVar5 != 0) {
        puVar4 = *(undefined1 **)(iVar5 + 0x30);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_00a2f7ec;
        }
        FUN_0058ced0(0xfc3,puVar4);
      }
    }
  }
  return iVar3;
}



void FUN_00597340(char param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int iVar8;
  
  FUN_005893f0();
  iVar7 = 0;
  iVar8 = 0;
  piVar3 = (int *)(DAT_00b33a98 + 0x54);
  if (piVar3 != (int *)0x0) {
    do {
      iVar1 = *piVar3;
      if (iVar1 == 0) break;
      cVar2 = FUN_0051bec0();
      if (cVar2 != '\0') {
        puVar4 = *(undefined1 **)(iVar1 + 0x1c);
        if (puVar4 == (undefined1 *)0x0) {
          puVar4 = &DAT_00a2f7ec;
        }
        iVar5 = FUN_005971e0(puVar4,iVar1,iVar7,(iVar1 != in_ECX[0xf]) - 1U & 2);
        iVar7 = iVar7 + 1;
        if ((iVar8 == 0) || (in_ECX[0xf] == iVar1)) {
          iVar8 = iVar5;
        }
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if ((iVar8 != 0) && (param_1 != '\0')) {
      iVar7 = *in_ECX;
      FUN_00588bd0(0xfa8);
      uVar6 = FUN_009828c0(iVar8);
      (**(code **)(iVar7 + 0xc))(uVar6);
    }
  }
  return;
}



void FUN_005973f0(void)

{
  char cVar1;
  undefined1 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  int iVar4;
  
  *(undefined4 *)(DAT_00b333c4 + 0x654) = *(undefined4 *)(in_ECX + 0x3c);
  cVar1 = FUN_0051bec0();
  if (cVar1 == '\0') {
    FUN_0051bed0(1);
  }
  puVar2 = *(undefined1 **)(*(int *)(in_ECX + 0x3c) + 0x30);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = &DAT_00a2f7ec;
  }
  FUN_004028d0(puVar2,0);
  FUN_0060e0d0(*(undefined4 *)(in_ECX + 0x5c));
  FUN_0051c0d0(*(undefined4 *)(in_ECX + 0x60));
  FUN_0051c0e0(*(undefined4 *)(in_ECX + 100));
  FUN_004028d0(*(undefined4 *)(in_ECX + 0x84),0);
  iVar4 = 0;
  puVar3 = (undefined4 *)(in_ECX + 0x68);
  do {
    FUN_0051c0f0(iVar4,*puVar3);
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar4 < 7);
  FUN_0065c620(*(undefined4 *)(in_ECX + 0x40));
  FUN_00416650(*(undefined4 *)(in_ECX + 0x40),&LAB_00596c20);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(in_ECX + 0x40);
  FUN_00596cf0(0);
  FUN_00597340(1);
  return;
}



void FUN_005976b0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *unaff_FS_OFFSET;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00578fe0(uVar1);
  if (iVar2 != 0x41b) {
    iVar2 = (**(code **)(*in_ECX + 0x34))();
    iVar3 = FUN_00578fe0(uVar1);
    if ((iVar3 == iVar2) && ((char)in_ECX[0x15] == '\0')) {
      if (DAT_00b3b274 != '\0') {
        iVar2 = (**(code **)(*in_ECX + 0x34))();
        iVar3 = FUN_00578fe0(uVar1);
        if (iVar3 == iVar2) {
          DAT_00b3b274 = '\0';
          if ((DAT_00b3b738 == (char *)0x0) || (*DAT_00b3b738 == '\0')) {
            in_ECX[0x16] = in_ECX[0x16] + -1;
          }
          else {
            FUN_00488810(DAT_00b3b738);
            in_ECX[0x16] = in_ECX[0x16] + 1;
          }
        }
      }
      switch(in_ECX[0x16]) {
      case 1:
        FUN_005d6390(in_ECX[0x14],2);
        *unaff_FS_OFFSET = local_c;
        return;
      case 2:
        FUN_005d6390(in_ECX[0x13],1);
        *unaff_FS_OFFSET = local_c;
        return;
      case 3:
        FUN_005d6390(in_ECX[0x12],0);
        *unaff_FS_OFFSET = local_c;
        return;
      case 4:
        puVar5 = *(undefined1 **)(in_ECX[0x10] + 0x1c);
        if (puVar5 == (undefined1 *)0x0) {
          puVar5 = &DAT_00a2f7ec;
        }
        FUN_005dcf20(DAT_00b38658,puVar5);
        *unaff_FS_OFFSET = local_c;
        return;
      case 5:
        *(undefined1 *)(in_ECX + 0x15) = 1;
        uStack_14 = 0;
        uStack_10 = 0;
        uStack_e = 0;
        uStack_4 = 0;
        if (in_ECX[0xd] == 0) {
          puVar5 = (undefined1 *)in_ECX[0x21];
          uVar4 = DAT_00b38648;
        }
        else {
          puVar5 = *(undefined1 **)(in_ECX[0x10] + 0x1c);
          uVar4 = DAT_00b38650;
          if (puVar5 == (undefined1 *)0x0) {
            puVar5 = &DAT_00a2f7ec;
          }
        }
        FUN_00402e30(&uStack_14,"%s %s %s?",uVar4,puVar5,DAT_00b38f40);
        FUN_00579c10(uStack_14,&LAB_005974e0,1,DAT_00b38cf8,DAT_00b38d00,0);
        uStack_4 = 0xffffffff;
        FUN_00402da0();
      }
    }
    *unaff_FS_OFFSET = local_c;
    return;
  }
  DAT_00b3b274 = 1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005978d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b574;
  local_4 = 0;
  FUN_00446c10(uVar1);
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00597a40(uint param_1)

{
  byte *in_ECX;
  
  if (param_1 < 0x80) {
    *in_ECX = *in_ECX & 0x80 | (byte)param_1;
  }
  return;
}



void FUN_00597a60(void)

{
  byte bVar1;
  byte *in_ECX;
  
  bVar1 = *in_ECX;
  if ((~(bVar1 >> 7) & 1) != 0) {
    *in_ECX = bVar1 | 0x80;
    return;
  }
  *in_ECX = bVar1 & 0x7f;
  return;
}



void FUN_00597a90(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6b574;
  *(undefined1 *)(in_ECX + 0x18) = 0;
  in_ECX[0x14] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  *(undefined1 *)((int)in_ECX + 0x61) = 0;
  *(undefined1 *)((int)in_ECX + 0x62) = 0;
  *(undefined1 *)(in_ECX + 0x15) = 0;
  *(undefined1 *)((int)in_ECX + 0x55) = 0;
  *(undefined1 *)((int)in_ECX + 0x56) = 0;
  in_ECX[0x10] = 0xf;
  *(undefined1 *)(in_ECX + 0x19) = 1;
  DAT_00b3b278 = 0;
  return;
}



void FUN_00597af0(byte param_1)

{
  FUN_005978d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00597b80(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  
  FUN_00582160(0,1);
  FUN_0057d7f0();
  FUN_0057d7f0();
  iVar1 = FUN_009828c0();
  fVar2 = (float10)FUN_00588cf0();
  *(float *)(in_ECX + 0x50) = (float)(fVar2 - (float10)iVar1);
  return;
}



void FUN_00597bd0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0xc) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



void FUN_00597ca0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00589b70(0x3f0);
  if ((((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) &&
      (iVar2 = FUN_009832e6(*(undefined4 *)(iVar1 + 0x44),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0),
      *(char *)(iVar1 + 0x61) != '\0')) && (iVar2 != 0)) {
    FUN_00422d20((float)param_1);
  }
  return;
}



void FUN_00597d00(int param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  float10 fVar9;
  float10 fVar10;
  float10 extraout_ST0;
  undefined4 uVar11;
  undefined1 uVar12;
  undefined4 uVar13;
  
  if (((param_1 != 0x33) && (4 < param_1 - 0x10U)) || (param_2 == 0)) {
    return;
  }
  if ((param_1 == 0x10) && (cVar4 = FUN_005893b0(), cVar4 == '\0')) {
    param_2 = FUN_0058b800(param_2,"cont_p4p5_header_text");
    uVar13 = 0;
    uVar11 = 0xfdd;
    iVar5 = param_2;
    FUN_00582160(0,1,param_2,0xfdd,0);
    FUN_0057f9f0(iVar5,uVar11,uVar13);
  }
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  FUN_0057bd80();
  if ((param_2 == 0) || (*(int *)(in_ECX + 0x34) == 0)) {
    if (*(int *)(in_ECX + 0x34) == 0) {
      return;
    }
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar5 = FUN_00582160(0,1);
    *(undefined4 *)(iVar5 + 0x88) = 0;
    return;
  }
  FUN_0057de50(4);
  FUN_00588bd0(0xfe0);
  iVar5 = FUN_009828c0();
  fVar9 = (float10)FUN_00588bd0(0xfd1);
  if (fVar9 == (float10)2.0) {
    FUN_00588bd0(0xfcb);
  }
  fVar9 = (float10)FUN_00588d90();
  FUN_00589390();
  fVar10 = (float10)FUN_00588d90();
  FUN_0058ceb0(0xfab,(float)((float10)(double)(fVar9 - (float10)0.5) - fVar10));
  fVar9 = (float10)FUN_00588bd0(0xfcb);
  FUN_0058ceb0(0xfcb,(float)(fVar9 - (float10)(iVar5 * 2)));
  fVar9 = (float10)FUN_00588bd0(0xfca);
  FUN_0058ceb0(0xfca,(float)(fVar9 - (float10)(iVar5 * 2)));
  FUN_00588c50();
  iVar6 = FUN_009828c0();
  FUN_0058ceb0(0xfad,(float)(extraout_ST0 - (float10)iVar6));
  fVar9 = (float10)FUN_00588cf0();
  FUN_0058ceb0(0xfac,(float)(fVar9 + (float10)iVar5));
  FUN_0058ceb0(0xfa1,0x40000000);
  *(int *)(in_ECX + 0x3c) = param_2;
  if (param_1 != 0x33) {
    return;
  }
  if (*(char *)(in_ECX + 100) == '\0') {
    FUN_00588bd0(0xfaa);
    uVar11 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x58) = uVar11;
  }
  else {
    FUN_00588bd0(0xfaa);
    uVar11 = FUN_009828c0();
    *(undefined4 *)(in_ECX + 0x5c) = uVar11;
  }
  FUN_00588bd0(0xfb9);
  uVar11 = FUN_009828c0();
  if (*(char *)(in_ECX + 100) == '\0') {
    uVar12 = 0;
  }
  else {
    uVar12 = *(undefined1 *)(in_ECX + 0x61);
  }
  iVar5 = FUN_004d88f0(uVar11,uVar12);
  if (iVar5 == 0) {
    if (*(int *)(in_ECX + 0x34) == 0) {
      return;
    }
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar5 = FUN_00582160(0,1);
    *(undefined4 *)(iVar5 + 0x88) = 0;
    return;
  }
  iVar6 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b084f0,0);
  iVar7 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0);
  iVar8 = FUN_009832e6(*(undefined4 *)(iVar5 + 8),0,&PTR_PTR_00b03248,&PTR_PTR_00b03280,0);
  fVar9 = (float10)FUN_00588bd0(0xfb8);
  fVar1 = (float)fVar9;
  fVar9 = (float10)FUN_00588bd0(0xfc5);
  fVar10 = (float10)FUN_00588d90();
  fVar2 = (float)(fVar10 + (float10)(double)fVar9);
  FUN_00582160(0,1);
  fVar9 = (float10)FUN_0057d7f0();
  fVar10 = (float10)FUN_00588bd0(0xfc4);
  fVar3 = (float)((float10)(double)fVar9 - fVar10);
  if (((iVar6 == 0) || ((*(byte *)(iVar6 + 0x88) & 1) == 0)) ||
     (iVar6 = *(int *)(iVar6 + 100), iVar6 == 0)) {
    if ((iVar7 == 0) || (iVar6 = *(int *)(iVar7 + 4), iVar7 = iVar5, iVar6 == 0)) {
      if (iVar8 == 0) {
        cVar4 = *(char *)(*(int *)(iVar5 + 8) + 4);
        if (((cVar4 == '&') || (cVar4 == '*')) || ((cVar4 == '!' || (cVar4 == '\x14')))) {
          fVar9 = (float10)FUN_00588cf0(fVar3,fVar2);
          FUN_0057bcc0(iVar5,fVar1,(float)fVar9);
        }
        else {
          FUN_0057bd80();
        }
      }
      else {
        fVar9 = (float10)FUN_00588cf0(fVar3,iVar5,fVar2);
        FUN_0057bb20(iVar8,fVar1,(float)fVar9);
      }
      goto LAB_005980fa;
    }
  }
  else {
    iVar7 = 0;
  }
  fVar9 = (float10)FUN_00588cf0(fVar3,iVar7,fVar2);
  FUN_0057bb20(iVar6 + 0x18,fVar1,(float)fVar9);
LAB_005980fa:
  FUN_00484470();
  FUN_00401f20(iVar5);
  return;
}



void FUN_00598190(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0057bd80();
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_0058ceb0(0xfa1,0x3f800000);
    iVar1 = FUN_00582160(0,1);
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return;
}



void FUN_005981d0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  undefined4 uVar4;
  
  FUN_00588bd0(0xfb5);
  iVar1 = FUN_009828c0();
  FUN_00582160(0,1);
  iVar2 = FUN_009828c0();
  iVar2 = (int)((ulonglong)((longlong)iVar2 * 0x77777777) >> 0x20) - iVar2;
  FUN_0058ceb0(0xfb7,(float)((iVar2 >> 6) - (iVar2 >> 0x1f)));
  FUN_0058ceb0(0xfb7,0);
  fVar3 = (float10)FUN_00588bd0(0xfb5);
  if ((float10)iVar1 != fVar3) {
    (**(code **)(*in_ECX + 0x14))(param_1,param_2);
    uVar4 = 0;
    FUN_00582160(0,1,0);
    FUN_0057d730(uVar4);
  }
  return;
}



void FUN_005982a0(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  
  cVar1 = FUN_005790e0(0x401,0);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = FUN_005790e0(0x3f8,0);
  if (cVar1 != '\0') {
    return;
  }
  cVar1 = FUN_005790e0(0x3e9,0);
  if (cVar1 != '\0') {
    return;
  }
  iVar3 = FUN_00589b70(0x3f0);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = FUN_005898f0();
  if (iVar3 != 0) {
    FUN_006ac3d0();
    FUN_005b3e90();
    piVar4 = (int *)FUN_009832e6(*(undefined4 *)(iVar3 + 0x44),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070
                                 ,0);
    cVar1 = *(char *)(iVar3 + 99);
    uVar5 = FUN_004db6b0();
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_005898f0();
    FUN_00584740();
    DAT_00b13e94 = 0xffffffff;
    if (((piVar4 != (int *)0x0) && (cVar2 = FUN_004d7f80(), cVar2 != '\0')) &&
       ((int *)piVar4[0x16] != (int *)0x0)) {
      (**(code **)(*(int *)piVar4[0x16] + 0x318))(piVar4);
    }
    if (((cVar1 == '\0') || (cVar1 = (**(code **)(*piVar4 + 0x19c))(), cVar1 != '\0')) ||
       (DAT_00b13e90 == '\0')) {
      if ((DAT_00b3b279 != '\0') && (0 < DAT_00b3b27c)) {
        (**(code **)(*DAT_00b333c4 + 0x238))(*(undefined4 *)(iVar3 + 0x44),0,0,DAT_00b3b27c,uVar5);
        DAT_00b3b279 = '\0';
      }
    }
    else {
      (**(code **)(*DAT_00b333c4 + 0x39c))(0x1f,1,0);
      uVar5 = (**(code **)(*DAT_00b333c4 + 0x284))(7);
      uVar5 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1f,uVar5);
      FUN_00547b90(uVar5);
      uVar5 = FUN_009828c0();
      piVar6 = (int *)FUN_009832e6(*(undefined4 *)(iVar3 + 0x44),0,&PTR_PTR_00b03054,
                                   &PTR_PTR_00b03070,0);
      uVar7 = (**(code **)(*piVar6 + 0x284))(7);
      uVar7 = (**(code **)(*piVar6 + 0x284))(0x1f,uVar7);
      FUN_00547b90(uVar7);
      uVar7 = FUN_009828c0();
      iVar8 = FUN_00546660(uVar5,uVar7,0);
      iVar9 = FUN_0047df80(0);
      if (iVar8 < iVar9 % 100) {
        (**(code **)(*DAT_00b333c4 + 0x23c))(piVar6,0,0);
      }
    }
    if (*(char *)(iVar3 + 0x61) != '\0') {
      if (*(char *)(iVar3 + 0x62) == '\0') {
        *(undefined1 *)(DAT_00b333c4 + 0x43) = 0;
      }
      else {
        iVar8 = FUN_00589b70(0x3f1);
        if ((iVar8 != 0) && (piVar4 != (int *)0x0)) {
          FUN_0058fba0(0);
          if (*(char *)(iVar3 + 0x55) != '\0') {
            iVar8 = FUN_005898f0();
            FUN_005ef930();
            *(undefined1 *)(iVar8 + 0x96) = 1;
            FUN_0059e030();
          }
          FUN_0058ceb0(0xfa1,0x40000000);
        }
      }
    }
    if (*(int *)(iVar3 + 0x44) != 0) {
      iVar8 = (**(code **)(**(int **)(iVar3 + 0x44) + 0x170))();
      if (*(byte *)(iVar8 + 4) == 0x17) {
        iVar3 = (**(code **)(**(int **)(iVar3 + 0x44) + 0x170))();
        iVar3 = *(int *)(iVar3 + 0x74);
      }
      else {
        if ((1 < *(byte *)(iVar8 + 4) - 0x23) ||
           (cVar1 = (**(code **)(**(int **)(iVar3 + 0x44) + 0x198))(0), cVar1 == '\0'))
        goto LAB_00598622;
        uVar5 = FUN_0046b280("DRSBodyClose",0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
        iVar3 = FUN_009832e6(uVar5);
      }
      if (((iVar3 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
         (iVar3 = FUN_006ae0a0(*(undefined4 *)(iVar3 + 0xc),0x121,0), iVar3 != 0)) {
        if (DAT_00b3b278 == '\0') {
          FUN_006b7190(0);
        }
        else {
          FUN_006b71f0(0x14d,0);
        }
        FUN_006b73e0();
        FUN_00401f20(iVar3);
      }
    }
  }
LAB_00598622:
  DAT_00b3b27c = 0;
  *(undefined1 *)(DAT_00b333c4 + 0x49) = 0;
  return;
}



void FUN_00598640(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x3f0);
  if (iVar1 != 0) {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0x54) = 0;
    }
  }
  return;
}



void FUN_00598670(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009bfec8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b5dc;
  local_4 = 0;
  FUN_00573880(uVar1);
  *in_ECX = &PTR_LAB_00a6b5b4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_005986d0(int *param_1,int *param_2)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)(**(code **)(*in_ECX + 4))();
  piVar1[2] = *param_2;
  piVar1[1] = (int)param_1;
  *piVar1 = *param_1;
  if (*param_1 != 0) {
    *(int **)(*param_1 + 4) = piVar1;
    *param_1 = (int)piVar1;
    in_ECX[3] = in_ECX[3] + 1;
    return;
  }
  in_ECX[2] = (int)piVar1;
  *param_1 = (int)piVar1;
  in_ECX[3] = in_ECX[3] + 1;
  return;
}



void FUN_005987d0(byte param_1)

{
  FUN_00598670();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_005987f0(uint param_1)

{
  int iVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  float10 fVar9;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  uint local_8;
  int local_4;
  
  local_4 = *(int *)(in_ECX + 0x30);
  iVar7 = *(int *)(local_4 + 0x38);
  iVar8 = -1;
  local_14 = 0;
  local_20 = -1;
  FUN_0058ceb0(0xfaf,0xc0000000);
  FUN_0058ceb0(0xfb0,0xc0000000);
  FUN_0058ceb0(0xfb1,0xc0000000);
  FUN_0058ceb0(0xfb2,0xc0000000);
  FUN_0058ceb0(0xfbd,0xc0000000);
  FUN_0058ceb0(0xfbe,0xc0000000);
  FUN_0058ceb0(0xfbf,0xc0000000);
  FUN_0058ceb0(0xfc0,0xc0000000);
  FUN_0058ceb0(0xfc1,0xc0000000);
  FUN_0058ceb0(0xfaf,0xc0000000);
  FUN_0058ceb0(0xfb0,0xc0000000);
  FUN_0058ceb0(0xfb1,0xc0000000);
  FUN_0058ceb0(0xfb2,0xc0000000);
  local_10 = *(int *)(in_ECX + 0x58);
  if (*(char *)(in_ECX + 100) != '\0') {
    local_10 = *(int *)(in_ECX + 0x5c);
  }
  bVar3 = false;
joined_r0x00598958:
  do {
    if (iVar7 == 0) {
      uVar4 = iVar8 - 1;
      FUN_0058ceb0(0xfae,(float)(int)(((int)uVar4 < 0) - 1 & uVar4));
      FUN_0058ceb0(0xfb3,(float)(int)(((int)uVar4 < 0) - 1 & uVar4));
      fVar9 = (float10)FUN_00588bd0(0xfc1);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb3);
        FUN_0058ceb0(0xfc1,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfc0);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfc1);
        FUN_0058ceb0(0xfc0,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfbf);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfc0);
        FUN_0058ceb0(0xfbf,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfbe);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfbf);
        FUN_0058ceb0(0xfbe,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfbd);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfbe);
        FUN_0058ceb0(0xfbd,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb2);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfbd);
        FUN_0058ceb0(0xfb2,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb1);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb2);
        FUN_0058ceb0(0xfb1,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb0);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb1);
        FUN_0058ceb0(0xfb0,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfaf);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb0);
        FUN_0058ceb0(0xfaf,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb2);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb3);
        FUN_0058ceb0(0xfb2,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb1);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb2);
        FUN_0058ceb0(0xfb1,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfb0);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb1);
        FUN_0058ceb0(0xfb0,(float)fVar9);
      }
      fVar9 = (float10)FUN_00588bd0(0xfaf);
      if (fVar9 == (float10)-2.0) {
        fVar9 = (float10)FUN_00588bd0(0xfb0);
        FUN_0058ceb0(0xfaf,(float)fVar9);
      }
      return;
    }
    iVar1 = *(int *)(iVar7 + 8);
    local_c = *(int *)(iVar7 + 4);
    local_18 = iVar1;
    FUN_00588bd0(0xfb7);
    uVar4 = FUN_009828c0();
    local_1c = uVar4;
    local_8 = uVar4;
    if (iVar1 != 0) {
      if (*(char *)(in_ECX + 100) == '\0') {
        uVar5 = 0;
        FUN_00588bd0(0xfb9);
        uVar6 = FUN_009828c0(uVar5);
      }
      else {
        uVar5 = (uint)*(byte *)(in_ECX + 0x61);
        FUN_00588bd0(0xfb9);
        uVar6 = FUN_009828c0(uVar5);
      }
      iVar7 = FUN_004d88f0(uVar6,uVar5);
      if (iVar7 != 0) {
        FUN_005aa210(&local_1c,*(undefined4 *)(iVar7 + 8));
        FUN_00484470();
        FUN_00401f20(iVar7);
        uVar4 = local_1c;
      }
    }
    if (((uVar4 != local_14) && ((param_1 & uVar4) != 0)) &&
       (fVar9 = (float10)FUN_00588bd0(0xfbc),
       (fVar9 == (float10)2.0) == (bool)*(char *)(in_ECX + 100))) {
      if (uVar4 == 1) {
        uVar6 = 0xfaf;
      }
      else if (uVar4 == 2) {
        uVar6 = 0xfb0;
      }
      else if ((param_1 == 4) || (param_1 == 8)) {
        if (uVar4 == 4) {
          uVar6 = 0xfaf;
        }
        else if (uVar4 == 5) {
          uVar6 = 0xfb0;
        }
        else if (uVar4 == 6) {
          uVar6 = 0xfb1;
        }
        else if (uVar4 == 8) {
          uVar6 = 0xfaf;
        }
        else if (uVar4 == 9) {
          uVar6 = 0xfb0;
        }
        else {
          if (uVar4 != 10) {
            if (uVar4 == 0xb) goto LAB_00598bdc;
            goto LAB_00598bf4;
          }
          uVar6 = 0xfb1;
        }
      }
      else {
        if ((int)param_1 < 0xf) goto LAB_00598bf4;
        if (uVar4 == 4) {
          uVar6 = 0xfb1;
        }
        else if (uVar4 == 5) {
LAB_00598bdc:
          uVar6 = 0xfb2;
        }
        else if (uVar4 == 6) {
          uVar6 = 0xfbd;
        }
        else if (uVar4 == 8) {
          uVar6 = 0xfbe;
        }
        else if (uVar4 == 9) {
          uVar6 = 0xfbf;
        }
        else if (uVar4 == 10) {
          uVar6 = 0xfc0;
        }
        else {
          if (uVar4 != 0xb) goto LAB_00598bf4;
          uVar6 = 0xfc1;
        }
      }
      FUN_0058ceb0(uVar6,(float)local_20);
      iVar8 = iVar8 + 1;
      local_20 = iVar8;
    }
LAB_00598bf4:
    fVar9 = (float10)FUN_00588bd0(0xfbc);
    if ((fVar9 == (float10)2.0) == (bool)*(char *)(in_ECX + 100)) {
      local_14 = uVar4;
    }
    if ((local_8 & param_1) != 0) {
      fVar9 = (float10)FUN_00588bd0(0xfbc);
      if (((float10)2.0 == fVar9) == (bool)*(char *)(in_ECX + 100)) {
        FUN_0058ceb0(0xfb6,(float)(float10)2.0);
        FUN_0058ceb0(0xfaa,(float)local_20);
        iVar8 = iVar8 + 1;
        iVar7 = local_c;
        local_20 = iVar8;
        if ((local_10 < iVar8) && (!bVar3)) {
          FUN_00582160(0,1);
          iVar7 = FUN_00582160(0,1);
          *(int *)(iVar7 + 0x8c) = *(int *)(iVar7 + 0x8c) + 1;
          fVar2 = (float)*(int *)(iVar7 + 0x8c);
          if (*(int *)(iVar7 + 0x8c) < 0) {
            fVar2 = fVar2 + 4.2949673e+09;
          }
          FUN_0058ceb0(0xff0,fVar2);
          bVar3 = true;
          iVar7 = local_c;
        }
        goto joined_r0x00598958;
      }
    }
    FUN_0058ceb0(0xfb6,0x3f800000);
    if ((int)param_1 < (int)uVar4) {
      uVar6 = 0x47c34f80;
    }
    else {
      uVar6 = 0xc0000000;
    }
    FUN_0058ceb0(0xfaa,uVar6);
    iVar7 = local_c;
  } while( true );
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_00599070(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int *unaff_FS_OFFSET;
  undefined4 local_120;
  undefined2 local_11c;
  undefined2 local_11a;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  char local_110 [256];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bff06;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_120;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffed0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_120 = 0;
  local_11c = 0;
  local_11a = 0;
  FUN_004028d0(param_1,0);
  local_4 = 0;
  local_118 = 0;
  local_114 = 0;
  local_112 = 0;
  FUN_004028d0("item_template",0);
  uVar3 = local_118;
  local_4 = CONCAT31(local_4._1_3_,1);
  iVar5 = FUN_00585410(*(undefined4 *)(in_ECX + 0x30),local_118,0);
  if (iVar5 != 0) {
    FUN_0058ced0(0xfaf,param_2);
    iVar6 = 0;
    do {
      pcVar1 = local_110 + iVar6;
      cVar2 = pcVar1[param_2 - (int)local_110];
      *pcVar1 = cVar2;
      if (cVar2 == ' ') {
        *pcVar1 = '_';
      }
    } while ((*pcVar1 != '\0') && (iVar6 = iVar6 + 1, iVar6 < 0x100));
    local_110[0xff] = 0;
    FUN_004028d0(local_110,0);
    FUN_0058ced0(0xfb4,local_120);
    FUN_0058ceb0(0xfb7,(float)param_3);
    FUN_0058ceb0(0xfaa,(float)param_4);
    FUN_0058ceb0(0xfa8,(float)param_5);
  }
  FUN_00401f20(uVar3,uVar4);
  FUN_00401f20(local_120);
  *unaff_FS_OFFSET = local_c;
  return iVar5;
}



void FUN_00599200(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  
  FUN_0058ceb0(0xfae,(float)param_1);
  if (param_1 < 2) {
    in_ECX[0x10] = 0x1f;
  }
  else {
    in_ECX[0x10] = 1 << ((char)param_1 - 2U & 0x1f);
  }
  FUN_005987f0(in_ECX[0x10]);
  iVar2 = FUN_00582160(0,1);
  if (*(char *)(iVar2 + 0xb9) != '\0') {
    FUN_0058ceb0(0xfb7,0xcb18967f);
    FUN_0058ceb0(0xfb7,0);
  }
  iVar2 = FUN_00582160(0,1);
  iVar2 = *(int *)(iVar2 + 0x88);
  if (iVar2 != 0) {
    iVar1 = *in_ECX;
    FUN_00588bd0(0xfa8);
    uVar3 = FUN_009828c0(iVar2);
    (**(code **)(iVar1 + 0x14))(uVar3);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_005992c0(void)

{
  undefined4 *puVar1;
  float fVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uchar *_Str1;
  undefined4 uVar11;
  int *piVar12;
  undefined4 *puVar13;
  int *unaff_FS_OFFSET;
  float10 fVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  int *piStack_160;
  int local_15c;
  int local_158;
  char local_151;
  int local_150;
  int local_14c;
  undefined4 *puStack_148;
  undefined **local_144;
  undefined4 *local_140;
  undefined4 *local_13c;
  int local_138;
  int local_134;
  int iStack_130;
  int local_12c;
  int local_128;
  int local_124;
  float fStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  char acStack_114 [260];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bff4b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&piStack_160;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffe90;
  *unaff_FS_OFFSET = (int)&local_c;
  local_134 = FUN_00589b70(0x3f0,uVar4);
  if (((local_134 != 0) && (iVar5 = FUN_005898f0(), DAT_00b333c4 != 0)) &&
     (iVar9 = *(int *)(iVar5 + 0x44), iVar9 != 0)) {
    local_124 = *(int *)(iVar5 + 0x30);
    local_158 = iVar9;
    iVar6 = FUN_004d8950(*(undefined1 *)(iVar5 + 0x61));
    local_12c = iVar6;
    local_128 = FUN_009832e6(*(undefined4 *)(iVar5 + 0x44),0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
    FUN_005b3e50();
    local_138 = 0;
    local_140 = (undefined4 *)0x0;
    local_13c = (undefined4 *)0x0;
    local_144 = &PTR_FUN_00a6b5fc;
    local_4 = 0;
    local_150 = 0;
    do {
      local_15c = 0;
      if (0 < iVar6) {
        do {
          if (iVar9 == DAT_00b333c4) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined1 *)(iVar5 + 0x61);
          }
          iVar6 = FUN_004d88f0(local_15c,uVar15);
          if (iVar6 == 0) {
LAB_005994d5:
            puVar13 = local_13c;
            local_14c = 0;
            puVar1 = puStack_148;
            if (iVar6 != 0) {
              local_14c = FUN_00485150();
              FUN_005aa210(&local_14c,*(undefined4 *)(iVar6 + 8));
              puVar1 = puStack_148;
            }
            while( true ) {
              puStack_148 = puVar13;
              if (puStack_148 == (undefined4 *)0x0) {
                if (iVar6 != 0) {
                  puStack_148 = puVar1;
                  piVar12 = (int *)FUN_00401f00(0xc);
                  if (piVar12 == (int *)0x0) {
                    piVar12 = (int *)0x0;
                  }
                  else {
                    *piVar12 = iVar6;
                    piVar12[1] = local_15c;
                    *(bool *)(piVar12 + 2) = local_150 == 0;
                  }
                  puVar13 = (undefined4 *)(*(code *)local_144[1])();
                  puVar13[2] = piVar12;
                  puVar13[1] = 0;
                  *puVar13 = local_140;
                  puVar1 = puStack_148;
                  if (local_140 == (undefined4 *)0x0) {
                    local_138 = local_138 + 1;
                    local_140 = puVar13;
                    local_13c = puVar13;
                  }
                  else {
                    local_140[1] = puVar13;
                    local_138 = local_138 + 1;
                    local_140 = puVar13;
                  }
                }
                goto LAB_00599617;
              }
              iVar9 = local_158;
              if (iVar6 == 0) goto LAB_00599617;
              iVar9 = *(int *)puStack_148[2];
              puVar13 = (undefined4 *)puStack_148[1];
              iStack_130 = FUN_00485150();
              FUN_005aa210(&iStack_130,*(undefined4 *)(iVar9 + 8));
              fVar14 = (float10)FUN_004852b0(1,0,0,0);
              fStack_120 = (float)fVar14;
              fVar14 = (float10)FUN_004852b0(1,0,0,0);
              piStack_160 = (int *)(float)fVar14;
              iVar8 = FUN_00584500(iVar9,iVar6);
              if (iStack_130 < local_14c) break;
              iVar9 = local_158;
              puVar1 = puStack_148;
              if (iStack_130 == local_14c) {
                if (iVar8 < 0) {
                  piStack_160 = (int *)FUN_00401f00(0xc);
                  if (piStack_160 == (int *)0x0) {
                    piStack_160 = (int *)0x0;
                  }
                  else {
                    piStack_160[1] = local_15c;
                    *piStack_160 = iVar6;
                    *(bool *)(piStack_160 + 2) = local_150 == 0;
                  }
                  goto LAB_0059960a;
                }
                if ((iVar8 == 0) && (fStack_120 < (float)piStack_160)) break;
              }
            }
            piStack_160 = (int *)FUN_00401f00(0xc);
            if (piStack_160 == (int *)0x0) {
              piStack_160 = (int *)0x0;
            }
            else {
              *piStack_160 = iVar6;
              piStack_160[1] = local_15c;
              *(bool *)(piStack_160 + 2) = local_150 == 0;
            }
LAB_0059960a:
            FUN_005986d0(puStack_148,&piStack_160);
            iVar9 = local_158;
            puVar1 = puStack_148;
          }
          else {
            if (((iVar9 == DAT_00b333c4) || (*(char *)(iVar5 + 99) == '\0')) &&
               (*(char *)(iVar5 + 0x61) == '\0')) {
              iVar8 = local_128;
              if (iVar9 == DAT_00b333c4) {
                iVar8 = DAT_00b333c4;
              }
              local_151 = FUN_004854f0(iVar8,0,1,1,0);
LAB_0059949f:
              if (local_151 != '\0') {
                if (((local_150 == 1) || (*(char *)(iVar5 + 0x61) != '\0')) &&
                   (cVar3 = FUN_00469980(*(undefined4 *)(iVar6 + 8)), cVar3 != '\0')) {
                  FUN_00484470();
                  FUN_00401f20(iVar6);
                  iVar6 = 0;
                }
                goto LAB_005994d5;
              }
            }
            else {
              uVar7 = 0;
              if (*(char *)(iVar5 + 99) != '\0') {
                FUN_00402bd0();
                uVar7 = FUN_009828c0();
              }
              iVar8 = local_128;
              local_151 = FUN_004854f0(local_128,*(undefined1 *)(iVar5 + 0x61),uVar7,0,0);
              if (local_151 != '\0') {
                if (iVar9 != DAT_00b333c4) {
                  if ((*(char *)(iVar5 + 0x61) != '\0') &&
                     (fVar14 = (float10)FUN_00488e50(1,iVar8,1),
                     fVar14 < (float10)9.999999747378752e-05 !=
                     (fVar14 == (float10)9.999999747378752e-05))) goto LAB_0059946c;
                  if (iVar9 != DAT_00b333c4) goto LAB_0059949f;
                }
                if ((*(char *)(iVar5 + 0x61) == '\0') ||
                   (cVar3 = (**(code **)(**(int **)(iVar6 + 8) + 0x78))(), cVar3 == '\0'))
                goto LAB_0059949f;
              }
            }
LAB_0059946c:
            FUN_00484470();
            FUN_00401f20(iVar6);
            puVar1 = puStack_148;
          }
LAB_00599617:
          puStack_148 = puVar1;
          local_15c = local_15c + 1;
        } while (local_15c < local_12c);
      }
      iVar9 = DAT_00b333c4;
      local_158 = DAT_00b333c4;
      iVar6 = FUN_004d8950(0);
      local_150 = local_150 + 1;
      local_12c = iVar6;
    } while (local_150 < 2);
    iVar9 = FUN_00582160(0,1);
    if ((*(int *)(iVar9 + 0x88) != 0) &&
       (fVar14 = (float10)FUN_00588bd0(0xfa8), fVar14 == (float10)51.0)) {
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      FUN_0058ceb0(0xfa1,0x3f800000);
      iVar9 = FUN_00582160(0,1);
      *(undefined4 *)(iVar9 + 0x88) = 0;
    }
    puVar13 = *(undefined4 **)(local_124 + 0x34);
    while (puVar13 != (undefined4 *)0x0) {
      puVar13 = (undefined4 *)*puVar13;
      iVar9 = FUN_00588b50(0xfb8);
      if (iVar9 != 0) {
        FUN_0058ceb0(0xfaa,0xc2c60000);
      }
    }
    FUN_0058ceb0(0xfaf,0xc0000000);
    FUN_0058ceb0(0xfb0,0xc0000000);
    FUN_0058ceb0(0xfb1,0xc0000000);
    FUN_0058ceb0(0xfb2,0xc0000000);
    local_15c = -1;
    local_12c = 0;
    iVar9 = local_124;
    puStack_148 = local_140;
    while (local_124 = iVar9, puStack_148 != (undefined4 *)0x0) {
      iStack_130 = puStack_148[2];
      puStack_148 = (undefined4 *)*puStack_148;
      local_14c = *(int *)(iStack_130 + 4);
      uVar4 = (uint)local_158 >> 8;
      local_158 = CONCAT31((int3)uVar4,*(undefined1 *)(iStack_130 + 8));
      local_150 = FUN_00485150();
      iVar9 = local_12c;
      if (local_150 != local_12c) {
        iVar9 = local_150;
        if (local_150 == 1) {
          uVar7 = 0xfaf;
        }
        else if (local_150 == 2) {
          uVar7 = 0xfb0;
        }
        else if (local_150 == 4) {
          uVar7 = 0xfb1;
        }
        else {
          if (local_150 != 8) goto LAB_005998a4;
          uVar7 = 0xfb2;
        }
        FUN_0058ceb0(uVar7,(float)local_15c);
        local_15c = local_15c + 1;
      }
LAB_005998a4:
      local_12c = iVar9;
      uVar7 = FUN_004851b0(DAT_00b333c4);
      _sprintf(acStack_114,"%s\\%s","Icons",uVar7);
      iVar9 = *(int *)(local_124 + 0x38);
      iVar6 = local_15c;
      do {
        do {
          local_15c = iVar6;
          if (iVar9 == 0) {
            uVar16 = 0x33;
            uVar7 = FUN_00485150(iVar6,0x33);
            uVar11 = FUN_00488df0(uVar7);
            FUN_00599070(acStack_114,uVar11,uVar7,iVar6,uVar16);
            uVar7 = FUN_0048f450(1,1,*(undefined1 *)(iVar5 + 0x61),*(undefined4 *)(iVar5 + 0x44),
                                 local_158);
            FUN_0058ced0(0xfb0,uVar7);
            uVar7 = FUN_0048f450(2,1,0,0,0);
            FUN_0058ced0(0xfb1,uVar7);
            uVar7 = FUN_0048f450(3,1,0,0,0);
            FUN_0058ced0(0xfb2,uVar7);
            uVar7 = FUN_0048f450(4,1,0,0,0);
            FUN_0058ced0(0xfb3,uVar7);
            uVar7 = FUN_0048f450(0,1,0,0,0);
            FUN_0058ced0(0xfb5,uVar7);
            cVar3 = FUN_00484e80(0);
            piStack_160 = (int *)((cVar3 != '\0') + 1);
            FUN_0058ceb0(0xfb8,(float)(int)piStack_160);
            FUN_0058ceb0(0xfb9,(float)local_14c);
            piStack_160 = (int *)(((char)local_158 != '\0') + 1);
            FUN_0058ceb0(0xfbc,(float)(int)piStack_160);
            piVar12 = (int *)FUN_00485c00();
            piStack_160 = piVar12;
            FUN_0058ceb0(0xfba,(float)(int)piVar12);
            uVar7 = FUN_0048f6a0(piVar12);
            FUN_0058ced0(0xfbb,uVar7);
            goto LAB_00599adc;
          }
          iVar8 = *(int *)(iVar9 + 8);
          iVar9 = *(int *)(iVar9 + 4);
          FUN_00588bd0(0xfbc);
          fStack_120 = (float)FUN_009828c0();
          iVar10 = FUN_00588c10(0xfaf);
          iVar6 = local_15c;
        } while (((iVar10 == 0) || (iVar10 = FUN_00488df0(), iVar6 = local_15c, iVar10 == 0)) ||
                (fVar14 = (float10)FUN_00588bd0(0xfaa), iVar6 = local_15c, fVar14 != (float10)-99.0)
                );
        piStack_160 = (int *)FUN_00488df0();
        _Str1 = (uchar *)FUN_00588c10(0xfaf);
        iVar10 = __mbscmp(_Str1,(uchar *)piStack_160);
        iVar6 = local_15c;
      } while ((iVar10 != 0) || (fStack_120 != (float)(((char)local_158 != '\0') + 1)));
      uVar7 = FUN_00488df0();
      FUN_0058ced0(0xfaf,uVar7);
      uVar7 = FUN_0048f450(1,1,*(undefined1 *)(iVar5 + 0x61),*(undefined4 *)(iVar5 + 0x44),local_158
                          );
      FUN_0058ced0(0xfb0,uVar7);
      uVar7 = FUN_0048f450(2,1,0,0,0);
      FUN_0058ced0(0xfb1,uVar7);
      uVar7 = FUN_0048f450(3,1,0,0,0);
      FUN_0058ced0(0xfb2,uVar7);
      uVar7 = FUN_0048f450(4,1,0,0,0);
      FUN_0058ced0(0xfb3,uVar7);
      FUN_0058ced0(0xfb4,acStack_114);
      uVar7 = FUN_0048f450(0,1,0,0,0);
      FUN_0058ced0(0xfb5,uVar7);
      FUN_0058ceb0(0xfb7,(float)local_150);
      cVar3 = FUN_00484e80(0);
      piStack_160 = (int *)((cVar3 != '\0') + 1);
      FUN_0058ceb0(0xfb8,(float)(int)piStack_160);
      FUN_0058ceb0(0xfb9,(float)local_14c);
      FUN_0058ceb0(0xfaa,(float)local_15c);
      piVar12 = (int *)FUN_00485c00();
      piStack_160 = piVar12;
      FUN_0058ceb0(0xfba,(float)(int)piVar12);
      uVar7 = FUN_0048f6a0(piVar12);
      FUN_0058ced0(0xfbb,uVar7);
      piStack_160 = (int *)(((char)local_158 != '\0') + 1);
      FUN_0058ceb0(0xfbc,(float)(int)piStack_160);
      piVar12 = *(int **)(*(int *)(iVar8 + 0x10) + 0x34);
      do {
        piStack_160 = piVar12;
        if (piStack_160 == (int *)0x0) {
          piStack_160 = (int *)0x0;
          break;
        }
        piVar12 = (int *)*piStack_160;
      } while (iVar8 != piStack_160[2]);
      if (piStack_160 != (int *)0x0) {
        FUN_007aa860(&piStack_160);
      }
      iVar9 = *(int *)(iVar8 + 0x10);
      puVar13 = (undefined4 *)(**(code **)(*(int *)(iVar9 + 0x30) + 4))();
      puVar13[2] = iVar8;
      puVar13[1] = 0;
      *puVar13 = *(undefined4 *)(iVar9 + 0x34);
      if (*(int *)(iVar9 + 0x34) == 0) {
        *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + 1;
        *(undefined4 **)(iVar9 + 0x38) = puVar13;
        *(undefined4 **)(iVar9 + 0x34) = puVar13;
      }
      else {
        *(undefined4 **)(*(int *)(iVar9 + 0x34) + 4) = puVar13;
        *(int *)(iVar9 + 0x3c) = *(int *)(iVar9 + 0x3c) + 1;
        *(undefined4 **)(iVar9 + 0x34) = puVar13;
      }
LAB_00599adc:
      local_15c = local_15c + 1;
      iVar9 = local_124;
    }
    piStack_160 = (int *)(local_15c + -1);
    FUN_0058ceb0(0xfae,(float)(int)piStack_160);
    puVar13 = *(undefined4 **)(iVar9 + 0x34);
    while (puVar1 = local_140, puVar13 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar13[2];
      puVar13 = (undefined4 *)*puVar13;
      fVar14 = (float10)FUN_00588bd0(0xfaa);
      if ((fVar14 == (float10)-99.0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    while (local_138 != 0) {
      if (puVar1[2] != 0) {
        local_140 = (undefined4 *)*puVar1;
        if (local_140 == (undefined4 *)0x0) {
          local_13c = (undefined4 *)0x0;
        }
        else {
          local_140[1] = 0;
        }
        piVar12 = (int *)puVar1[2];
        (*(code *)local_144[2])(puVar1);
        local_138 = local_138 + -1;
        puVar1 = local_140;
        if (piVar12 != (int *)0x0) {
          iVar9 = *piVar12;
          if (iVar9 != 0) {
            FUN_00484470();
            FUN_00401f20(iVar9);
          }
          FUN_00401f20(piVar12);
          puVar1 = local_140;
        }
      }
    }
    FUN_005987f0(*(undefined4 *)(iVar5 + 0x40));
    uStack_118 = 0;
    uStack_11c = 0;
    FUN_0065dfa0(&uStack_118,&uStack_11c);
    piStack_160 = (int *)FUN_009828c0();
    FUN_0058ceb0(0xfbb,(float)(int)piStack_160);
    local_134 = FUN_009828c0();
    FUN_0058ceb0(0xfbc,(float)local_134);
    local_134 = FUN_005e4420();
    FUN_0058ceb0(0xfb4,(float)local_134);
    if (local_128 != 0) {
      uVar7 = FUN_004da2a0();
      FUN_0058ced0(0xfb9,uVar7);
      local_134 = FUN_005faa70();
      fVar2 = (float)local_134;
      if (local_134 < 0) {
        fVar2 = fVar2 + 4.2949673e+09;
      }
      FUN_0058ceb0(0xfba,fVar2);
    }
    local_4 = 0xffffffff;
    FUN_00598670();
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_00599ee0(int *param_1,char param_2,undefined1 param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  if (param_1 != (int *)0x0) {
    iVar2 = (**(code **)(*param_1 + 0x170))();
    if (*(byte *)(iVar2 + 4) == 0x17) {
      iVar2 = (**(code **)(*param_1 + 0x170))();
      iVar2 = *(int *)(iVar2 + 0x70);
    }
    else {
      if ((1 < *(byte *)(iVar2 + 4) - 0x23) ||
         (cVar1 = (**(code **)(*param_1 + 0x198))(0), cVar1 == '\0')) goto LAB_00599f9a;
      uVar3 = FUN_0046b280("DRSBodyOpen",0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03500,0);
      iVar2 = FUN_009832e6(uVar3);
    }
    if (((iVar2 != 0) && (*(int *)(DAT_00b33398 + 0x24) != 0)) &&
       (iVar2 = FUN_006ae0a0(*(undefined4 *)(iVar2 + 0xc),0x121,0), iVar2 != 0)) {
      FUN_006b7190(0);
      FUN_006b73e0();
      FUN_00401f20(iVar2);
    }
  }
LAB_00599f9a:
  puVar4 = (undefined4 *)FUN_00589b70(0x3f0);
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(1);
  }
  FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  DAT_00b3b27a = 0;
  if (param_1 == DAT_00b3bad4) {
    DAT_00b3b279 = 0;
    iVar2 = FUN_0041e6f0();
    if (iVar2 != 0) {
      FUN_00492e70(param_1,DAT_00b333c4,DAT_00b3b279,0,0);
    }
    FUN_0057de50(0x1d);
    FUN_0057acc0(DAT_00b38b10,0,1,0xbf800000);
    DAT_00b3bad4 = (int *)0x0;
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)FUN_00590420("Data\\Menus\\container_menu.xml");
  piVar5 = (int *)FUN_005898f0();
  if (piVar5 == (int *)0x0) {
    return (undefined4 *)0x0;
  }
  iVar2 = (**(code **)(*piVar5 + 0x34))();
  if (iVar2 == 0x3f0) {
    uVar3 = FUN_009832e6(puVar4,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
    FUN_00584880(uVar3);
    iVar2 = FUN_009832e6(piVar5,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13254,0);
    if (((*(int *)(iVar2 + 0x28) != 0) && (*(int *)(iVar2 + 0x2c) != 0)) &&
       ((*(int *)(iVar2 + 0x30) != 0 &&
        ((*(int *)(iVar2 + 0x34) != 0 && (*(int *)(iVar2 + 0x38) != 0)))))) {
      fVar8 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar8 == (float10)6006.0) ||
         (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,(float)fVar7);
      }
      FUN_004046a0();
      FUN_0058ceb0(0xfaf,0xc0000000);
      FUN_0058ceb0(0xfb0,0xc0000000);
      FUN_0058ceb0(0xfb1,0xc0000000);
      FUN_0058ceb0(0xfb2,0xc0000000);
      FUN_0058ceb0(0xfb3,0);
      FUN_0058ceb0(0xfb4,0);
      FUN_0058ceb0(0xfb5,0x40000000);
      FUN_0058ceb0(0xfb6,0x40000000);
      FUN_0058ceb0(0xfb7,0x40000000);
      FUN_0058ceb0(0xfb3,0xc97423f0);
      FUN_0058ceb0(0xfb3,0);
      *(char *)(iVar2 + 0x61) = param_2;
      *(char *)(iVar2 + 99) = param_4;
      DAT_00b13e90 = 1;
      if (((((param_2 == '\0') && (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 != '\0')) &&
           (cVar1 = FUN_004d7f80(), cVar1 != '\0')) &&
          (cVar1 = (**(code **)(*param_1 + 0x198))(0), cVar1 == '\0')) ||
         (((iVar6 = FUN_004db6b0(), iVar6 != 0 &&
           (cVar1 = FUN_004de770(DAT_00b333c4,1), cVar1 == '\0')) &&
          (cVar1 = (**(code **)(*param_1 + 400))(), cVar1 == '\0')))) {
        DAT_00b3b279 = 1;
      }
      else {
        DAT_00b3b279 = 0;
      }
      if (param_4 != '\0') {
        FUN_0058ceb0(0xfb6,0x3f800000);
      }
      if (param_2 == '\0') {
        FUN_0058ceb0(0xfb7,0x3f800000);
      }
      else {
        FUN_0058ceb0(0xfb6,0x3f800000);
        FUN_00448f40(param_1);
        *(undefined1 *)(DAT_00b333c4 + 0x124) = 1;
        *(undefined1 *)(iVar2 + 0x62) = param_3;
        uVar3 = FUN_0052ed50(5,1);
        piVar5 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03070,0);
        if (piVar5 != (int *)0x0) {
          FUN_006ac3d0();
          (**(code **)(*piVar5 + 0xdc))(uVar3,DAT_00b333c4,1,1,0);
        }
      }
      *(int **)(iVar2 + 0x44) = param_1;
      FUN_0058ceb0(0xfb5,(float)(byte)((*(char *)(iVar2 + 100) != '\0') + 1));
      FUN_0058ceb0(0xfb3,0);
      if (*(char *)(iVar2 + 0x61) != '\0') {
        FUN_00422dc0();
        uVar3 = FUN_009828c0();
        *(undefined4 *)(DAT_00b333c4 + 0x11c) = uVar3;
      }
      FUN_005992c0();
      FUN_00599200(1,0);
      FUN_00585190(0);
      return puVar4;
    }
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
    FUN_004a7a60("Container Menu Creation Failed... Are your menu and art resources up to date?");
    return (undefined4 *)0x0;
  }
  if (piVar5[1] == 0) {
    return (undefined4 *)0x0;
  }
  (**(code **)*piVar5)(1);
  return (undefined4 *)0x0;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0059a400(int *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int in_ECX;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined2 in_FPUControlWord;
  float10 fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_350 [3];
  char local_34d;
  int *piStack_34c;
  char cStack_345;
  longlong local_344;
  int *local_33c;
  int *local_338;
  int *local_334;
  char acStack_330 [800];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009bff8b;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_350;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xfffffca0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_33c = param_2;
  cVar2 = FUN_005790e0(0x3e9,0,uVar5);
  if (cVar2 != '\0') goto LAB_0059b60e;
  if ((int)param_1 - 1U < 5) {
    FUN_0057de50(5);
  }
  else {
    if ((param_1 != (int *)0x7) && (param_1 != (int *)0x8)) {
      if (param_1 + -4 < (int *)0x5) {
        if ((int *)(*(byte *)(in_ECX + 0x60) & 0x7f) == param_1 + -4) {
          FUN_00597a60();
          FUN_005992c0();
        }
        else {
          FUN_00597a40(param_1 + -4);
          *(byte *)(in_ECX + 0x60) = *(byte *)(in_ECX + 0x60) & 0x7f;
          FUN_005992c0();
        }
        goto LAB_0059b60e;
      }
      if (param_1 != (int *)0x33) {
        if (param_1 == (int *)0x2a) {
          if (*(char *)(in_ECX + 100) == '\0') goto LAB_0059b60e;
          FUN_0057de50(0xe);
          FUN_00588bd0(0xfb5);
          uVar6 = FUN_009828c0();
          *(undefined4 *)(in_ECX + 0x4c) = uVar6;
          FUN_0058ceb0(0xfb7,0xcb18967f);
          FUN_0058ceb0(0xfb7,(float)*(int *)(in_ECX + 0x48));
          FUN_0058ceb0(0xfb7,0);
          uVar6 = 0x3f800000;
          *(bool *)(in_ECX + 100) = *(char *)(in_ECX + 100) == '\0';
        }
        else {
          if (param_1 != (int *)0x2b) {
            if (param_1 == (int *)0x20) {
              if (*(char *)(in_ECX + 100) == '\0') {
                piVar9 = *(int **)(in_ECX + 0x44);
                piVar7 = DAT_00b333c4;
              }
              else {
                piVar9 = DAT_00b333c4;
                piVar7 = *(int **)(in_ECX + 0x44);
              }
              iVar8 = FUN_0041e6f0();
              cVar2 = (**(code **)(**(int **)(in_ECX + 0x44) + 400))();
              if (cVar2 != '\0') {
                FUN_004876c0(*(undefined4 *)(in_ECX + 0x44));
              }
              if (iVar8 != 0) {
                FUN_00492e70(piVar7,piVar9,DAT_00b3b279,0,0);
                DAT_00b3b27c = FUN_009828c0();
              }
              if (0 < DAT_00b3b7d0) {
                FUN_00607b90(piVar7,1);
              }
              FUN_0057de50(0x1d);
              DAT_00b3b278 = 1;
              FUN_005982a0();
            }
            else if (param_1 == (int *)0x22) {
              if (*(char *)(in_ECX + 100) == '\0') {
                piVar9 = *(int **)(in_ECX + 0x44);
                piVar7 = DAT_00b333c4;
              }
              else {
                piVar9 = DAT_00b333c4;
                piVar7 = *(int **)(in_ECX + 0x44);
              }
              FUN_0057de50(1);
              if (piVar7 == DAT_00b333c4) {
                FUN_00422dc0();
                uVar6 = FUN_009828c0();
                local_344 = CONCAT44(local_344._4_4_,uVar6);
                FUN_005bd080(&local_344,piVar9,0);
              }
              else {
                FUN_00422dc0();
                local_334 = (int *)FUN_009828c0();
                FUN_005bd080(&local_334,piVar7,1);
              }
            }
            else if (param_1 == (int *)0x21) {
              FUN_0058ceb0(0xfa7,0x437f0000);
              if (*(char *)(in_ECX + 0x61) != '\0') {
                FUN_00446c10();
              }
              FUN_0057de50(2);
              FUN_005982a0();
            }
            goto LAB_0059b60e;
          }
          if (*(char *)(in_ECX + 100) != '\0') goto LAB_0059b60e;
          FUN_0057de50(0xe);
          FUN_00588bd0(0xfb5);
          uVar6 = FUN_009828c0();
          *(undefined4 *)(in_ECX + 0x48) = uVar6;
          FUN_0058ceb0(0xfb7,0xcb18967f);
          FUN_0058ceb0(0xfb7,(float)*(int *)(in_ECX + 0x4c));
          FUN_0058ceb0(0xfb7,0);
          uVar6 = 0x40000000;
          *(bool *)(in_ECX + 100) = *(char *)(in_ECX + 100) == '\0';
        }
        FUN_0058ceb0(0xfb5,uVar6);
        FUN_005992c0();
        goto LAB_0059b60e;
      }
      if (*(char *)(in_ECX + 0x54) != '\0') goto LAB_0059b60e;
      if (*(char *)(in_ECX + 100) == '\0') {
        local_334 = *(int **)(in_ECX + 0x44);
        piVar9 = DAT_00b333c4;
      }
      else {
        local_334 = DAT_00b333c4;
        piVar9 = *(int **)(in_ECX + 0x44);
      }
      local_34d = '\x01';
      if (*(char *)(in_ECX + 99) != '\0') {
        DAT_00b13e90 = 0;
      }
      local_338 = piVar9;
      FUN_00588bd0(0xfb9);
      uVar6 = FUN_009828c0();
      if (piVar9 == DAT_00b333c4) {
        piVar7 = (int *)FUN_004d88f0(uVar6,0);
        cVar2 = (**(code **)(*(int *)piVar7[2] + 0x78))();
        uVar6 = DAT_00b38568;
        if ((cVar2 == '\0') &&
           ((((iVar8 = (**(code **)(*DAT_00b333c4 + 0x380))(), iVar8 == 0 ||
              (iVar8 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0xec))(0), iVar8 == 0)) ||
             (cVar2 = FUN_00484e80(0), cVar2 == '\0')) ||
            (iVar8 = (**(code **)(*(int *)DAT_00b333c4[0x16] + 0xec))(0), uVar6 = DAT_00b38a40,
            piVar7[2] != *(int *)(iVar8 + 8))))) goto LAB_0059a5f9;
        FUN_0057acc0(uVar6,0,1,0xbf800000);
        goto LAB_0059a574;
      }
      piVar7 = (int *)FUN_004d88f0(uVar6,*(undefined1 *)(in_ECX + 0x61));
LAB_0059a5f9:
      if (piVar7 != (int *)0x0) {
        if ((((int *)*piVar7 != (int *)0x0) && (*(int *)*piVar7 != 0)) &&
           (cVar2 = FUN_0041df50(), cVar2 != '\0')) goto LAB_0059b60e;
        uVar14 = 0;
        uVar13 = 0xfdd;
        uVar6 = 0;
        FUN_00582160(0,1,0,0xfdd,0);
        FUN_0057f9f0(uVar6,uVar13,uVar14);
        piVar1 = *(int **)(in_ECX + 0x44);
        if (((DAT_00b3b27a != '\0') && (*(char *)(in_ECX + 0x61) != '\0')) ||
           (*(char *)(in_ECX + 0x61) == '\0')) {
          FUN_005e99c0(piVar7[2],piVar9 != DAT_00b333c4,0);
        }
        iVar8 = 1;
        local_344 = CONCAT44(local_344._4_4_,1);
        if (DAT_00b13e94 == -1) {
          if ((local_334 == DAT_00b333c4) &&
             ((cVar2 = FUN_00469980(piVar7[2]), cVar2 != '\0' ||
              ((*(char *)(in_ECX + 0x61) == '\0' && (piVar7[2] == DAT_00b35ec8)))))) {
            DAT_00b13e94 = FUN_004b2460();
          }
          else {
            iVar11 = FUN_004b2460();
            if (DAT_00b38688 <= iVar11) {
              *(undefined1 *)(in_ECX + 0x54) = 1;
              uVar6 = FUN_004b2460(0);
              FUN_005c05d0(&DAT_00b13e94,0x33,local_33c,uVar6);
              goto LAB_0059a574;
            }
          }
        }
        else {
          local_344 = CONCAT44(local_344._4_4_,DAT_00b13e94);
          iVar8 = DAT_00b13e94;
        }
        cStack_345 = '\0';
        if (*(char *)(in_ECX + 0x61) == '\0') {
LAB_0059abd7:
          if (DAT_00b13e94 == -1) {
            DAT_00b13e94 = 1;
          }
          if ((*(char *)(in_ECX + 99) != '\0') && (local_338 == DAT_00b333c4)) {
            DAT_00b3b279 = '\0';
            fVar12 = (float10)FUN_00470620(piVar7[2]);
            local_344 = CONCAT44(local_344._4_4_,(float)fVar12);
            cVar2 = FUN_004d7f80();
            if ((cVar2 == '\0') ||
               ((cVar2 = (**(code **)(**(int **)(in_ECX + 0x44) + 0x198))(0), cVar2 != '\0' ||
                ((float)(int *)local_344 <= 0.0)))) goto LAB_0059af11;
            FUN_00579c10(DAT_00b38c40,0,1,DAT_00b38cf0,0);
LAB_0059a574:
            FUN_00484470();
            FUN_00401f20(piVar7);
            goto LAB_0059b60e;
          }
LAB_0059af11:
          local_33c = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x44),0,&PTR_PTR_00b03054,
                                          &PTR_PTR_00b03070,0);
          if ((*(char *)(in_ECX + 99) != '\0') && (local_338 != DAT_00b333c4)) {
            local_34d = '\0';
            iVar8 = FUN_004842e0();
            piStack_34c = (int *)(float)(iVar8 * DAT_00b13e94);
            local_344._0_4_ = (int *)(iVar8 * DAT_00b13e94);
            uVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(7);
            uVar6 = (**(code **)(*DAT_00b333c4 + 0x284))(0x1f,uVar6);
            FUN_00547b90(uVar6);
            piStack_34c = (int *)FUN_009828c0();
            piVar9 = (int *)local_344;
            uVar6 = (**(code **)(*(int *)local_344 + 0x284))(7);
            uVar6 = (**(code **)(*piVar9 + 0x284))(0x1f,uVar6);
            FUN_00547b90(uVar6);
            uVar6 = FUN_009828c0();
            uVar6 = FUN_00546660((int *)local_344,uVar6,piStack_34c);
            local_344 = CONCAT44(local_344._4_4_,uVar6);
            iVar8 = FUN_0047df80(0);
            iVar11 = (int)((ulonglong)((longlong)iVar8 * -0x51eb851f) >> 0x20);
            iVar8 = iVar8 + ((iVar11 >> 5) - (iVar11 >> 0x1f)) * 100;
            if (iVar8 < (int)(int *)local_344) {
              cVar2 = FUN_00469980(piVar7[2]);
              if (cVar2 == '\0') {
                DAT_00b333c4[0x1b3] = DAT_00b333c4[0x1b3] + DAT_00b13e94;
              }
            }
            else {
              local_34d = '\x01';
            }
            uVar6 = FUN_004da2a0("pickpocketed  chance of ",(int *)local_344,"random chance is ",
                                 iVar8);
            _sprintf(acStack_330,"%s %s %d %s %d ",uVar6);
            FUN_00404ee0(acStack_330);
            if ((local_34d != '\0') && (cVar2 = (**(code **)(*piVar1 + 0x19c))(), cVar2 == '\0')) {
              DAT_00b3b279 = cVar2;
              FUN_005982a0();
              (**(code **)(*DAT_00b333c4 + 0x23c))(local_33c,piVar7[2],DAT_00b13e94);
              goto LAB_0059a574;
            }
          }
          local_344 = CONCAT44(local_344._4_4_,piVar7[2]);
          if ((DAT_00b3b279 != '\0') && (local_338 != DAT_00b333c4)) {
            iVar8 = (**(code **)(*DAT_00b333c4 + 0x170))();
            iVar11 = FUN_00484b70();
            if (iVar11 == iVar8) {
              DAT_00b3b279 = '\0';
            }
            else {
              iVar8 = FUN_004842e0();
              DAT_00b3b27c = DAT_00b3b27c + iVar8 * DAT_00b13e94;
              DAT_00b333c4[0x1b2] = DAT_00b333c4[0x1b2] + DAT_00b13e94;
            }
          }
          if ((*(char *)(in_ECX + 0x61) != '\0') && (piVar1 != (int *)0x0)) {
            piVar9 = (int *)FUN_00420680();
            if (piVar9 != (int *)0x0) {
              local_334 = piVar9;
            }
            DAT_00b3b279 = '\0';
          }
          iVar8 = DAT_00b13e94;
          piVar9 = (int *)*piVar7;
          if (piVar9 == (int *)0x0) {
LAB_0059b247:
            if (0 < DAT_00b13e94) {
              iVar8 = 0;
              goto LAB_0059b26b;
            }
          }
          else {
            if (DAT_00b13e94 != 1) {
              cVar2 = FUN_0046cb60();
              if (cVar2 == '\0') {
                for (; ((piStack_34c = piVar9, iVar8 != 0 && (piVar9 != (int *)0x0)) &&
                       (*piVar9 != 0)); piVar9 = (int *)piVar9[1]) {
                  sVar3 = FUN_0041e860();
                  if (0 < sVar3) {
                    sVar4 = FUN_0041e860();
                    iVar8 = (int)sVar3;
                    if (DAT_00b13e94 < sVar4) {
                      iVar8 = DAT_00b13e94;
                    }
                    iVar11 = *piStack_34c;
                    if ((cStack_345 != '\0') &&
                       ((*(char *)(in_ECX + 0x61) != '\0' || (*(char *)(piVar7[2] + 4) == '\"')))) {
                      FUN_0041f600();
                    }
                    (**(code **)(*local_338 + 0x100))
                              (piVar7[2],iVar11,iVar8,DAT_00b3b279,0,local_334,0,0,1,0);
                    DAT_00b13e94 = DAT_00b13e94 - iVar8;
                    piVar9 = piStack_34c;
                  }
                  iVar8 = DAT_00b13e94;
                }
              }
              goto LAB_0059b247;
            }
            iVar8 = *piVar9;
            if ((cStack_345 != '\0') &&
               ((*(char *)(in_ECX + 0x61) != '\0' || (*(char *)(piVar7[2] + 4) == '\"')))) {
              FUN_0041f600();
            }
LAB_0059b26b:
            (**(code **)(*local_338 + 0x100))
                      (piVar7[2],iVar8,DAT_00b13e94,DAT_00b3b279,0,local_334,0,0,1,0);
          }
          if (*(char *)(in_ECX + 0x61) != '\0') {
            FUN_00446c10();
            FUN_00448f40(*(undefined4 *)(in_ECX + 0x44));
          }
          piVar9 = local_33c;
          if ((local_33c != (int *)0x0) && (iVar8 = (**(code **)(*local_33c + 0x154))(), iVar8 != 0)
             ) {
            (**(code **)(*(int *)piVar9[0x16] + 0x42c))(piVar9,1,0,0);
            if (((int *)local_344 != (int *)0x0) &&
               ((*(char *)((int)(int *)local_344 + 4) == '\"' && (0 < DAT_00b3b7d0)))) {
              FUN_00607f90((int *)local_344,0x7fffffff,piVar9,1,0);
            }
          }
          DAT_00b13e94 = -1;
          FUN_005992c0();
        }
        else {
          if (DAT_00b3b27a == '\0') {
            local_344 = 0;
            uStack_4 = 0;
            if (local_338 == DAT_00b333c4) {
              fVar12 = (float10)FUN_00488e50(1,piVar1,0);
              uVar13 = DAT_00b38cc0;
              uVar6 = DAT_00b38cb8;
              piStack_34c = (int *)(float)fVar12;
              if (DAT_00b13e94 != -1) {
                piStack_34c = (int *)((float)DAT_00b13e94 * (float)piStack_34c);
              }
              if (1.0 <= (float)piStack_34c) {
                if (iVar8 != 1) goto LAB_0059a8a6;
                FUN_00404f70(piStack_34c,DAT_00b38d20);
                uVar13 = FUN_009828c0();
                uVar13 = FUN_00488df0(DAT_00b38d10,uVar13);
                FUN_00402e30(&local_344,"%s %s %s %i %s?",uVar6,uVar13);
              }
              else {
                DAT_00b3b288 = '\x01';
                if (iVar8 < 2) {
                  uVar6 = FUN_00488df0();
                  FUN_00402e30(&local_344,"%s %s?",uVar13,uVar6);
                }
                else {
                  uVar6 = FUN_00488df0();
                  FUN_00402e30(&local_344,"%s %i %s?",uVar13,iVar8,uVar6);
                }
              }
            }
            else {
              fVar12 = (float10)FUN_00488e50(1,piVar1,1);
              uVar6 = DAT_00b38cb0;
              piStack_34c = (int *)(float)fVar12;
              if (DAT_00b13e94 != -1) {
                piStack_34c = (int *)((float)DAT_00b13e94 * (float)piStack_34c);
              }
              if (iVar8 == 1) {
                FUN_00404f70(piStack_34c,DAT_00b38d20);
                uVar13 = FUN_009828c0();
                uVar13 = FUN_00488df0(DAT_00b38d10,uVar13);
                FUN_00402e30(&local_344,"%s %s %s %i %s?",uVar6,uVar13);
              }
              else {
LAB_0059a8a6:
                FUN_00404f70(piStack_34c,DAT_00b38d20);
                uVar13 = FUN_009828c0();
                uVar13 = FUN_00488df0(DAT_00b38d10,uVar13);
                FUN_00402e30(&local_344,"%s %i %s %s %i %s?",uVar6,iVar8,uVar13);
              }
            }
            DAT_00b3b280 = local_33c;
            DAT_00b3b284 = 0x33;
            FUN_00579c10((int *)local_344,&LAB_00597b10,1,DAT_00b38cf8,DAT_00b38d00,0);
            FUN_00484470();
            FUN_00401f20(piVar7);
            uStack_4 = 0xffffffff;
            FUN_00402da0();
            goto LAB_0059b60e;
          }
          iVar8 = FUN_00484b70();
          if ((iVar8 != 0) && (piVar9 = (int *)FUN_00484b70(), piVar9 != DAT_00b333c4)) {
            cStack_345 = '\x01';
          }
          if (local_338 == DAT_00b333c4) {
            fVar12 = (float10)FUN_00488e50(1,piVar1,0);
            piStack_34c = (int *)(float)fVar12;
            if (DAT_00b13e94 != -1) {
              piStack_34c = (int *)((float)DAT_00b13e94 * (float)piStack_34c);
            }
            iVar8 = FUN_00484b70();
            if ((iVar8 != 0) && (piVar9 = (int *)FUN_00484b70(), piVar9 != DAT_00b333c4)) {
              cStack_345 = '\x01';
            }
            if ((1.0 <= (float)piStack_34c) && (cVar2 = FUN_005e10f0(DAT_00b333c4), cVar2 == '\0'))
            {
              FUN_00404f70(piStack_34c);
              iVar8 = FUN_009828c0();
              fVar12 = (float10)FUN_005489e0(-iVar8);
              local_344 = CONCAT44(local_344._4_4_,(float)fVar12);
              (**(code **)(*piVar1 + 0x374))(DAT_00b333c4,(float)fVar12);
              uVar6 = FUN_0052ed50(5,2);
              FUN_006ac3d0();
              (**(code **)(*piVar1 + 0xdc))(uVar6,DAT_00b333c4,1,1,0);
              FUN_0057acc0(DAT_00b38db8,0,1,0xbf800000);
              local_34d = '\0';
              goto LAB_0059abc5;
            }
            fVar12 = (float10)FUN_00404f70(piStack_34c);
            piStack_34c = (int *)CONCAT22(piStack_34c._2_2_,in_FPUControlWord);
            local_344 = (longlong)ROUND(fVar12);
            uVar5 = (uint)(int *)local_344;
            uVar10 = FUN_005faa70();
            if (uVar5 <= uVar10) {
              if (0 < (int)uVar5) {
                fVar12 = (float10)FUN_005489e0(uVar5);
                local_344._0_4_ = (int *)(float)fVar12;
                (**(code **)(*piVar1 + 0x374))(DAT_00b333c4,(float)fVar12);
                DAT_00b3b27a = '\0';
                uVar6 = FUN_004471a0(0xf);
                FUN_004d8720(uVar6,0,uVar5);
                uVar6 = 0;
                if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
                  uVar6 = *(undefined4 *)*piVar7;
                }
                if (cStack_345 != '\0') {
                  DAT_00b333c4[0x185] = DAT_00b333c4[0x185] + uVar5;
                }
                FUN_004fbf90(DAT_00b333c4,uVar6,0x4000);
                iVar8 = FUN_0052ed50(5,7);
                local_344 = CONCAT44(local_344._4_4_,iVar8);
                if ((iVar8 != 0) &&
                   (piVar9 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x44),0,&PTR_PTR_00b03054,
                                                 &PTR_PTR_00b03070,0), piVar9 != (int *)0x0)) {
                  FUN_006ac3d0();
                  (**(code **)(*piVar9 + 0xdc))((int *)local_344,DAT_00b333c4,1,1,0);
                }
              }
              if (DAT_00b3b288 == '\0') {
                local_344 = CONCAT44(local_344._4_4_,DAT_00b333c4[0x47] / 100);
                (**(code **)(*DAT_00b333c4 + 0x39c))(0x1d,0,(float)(DAT_00b333c4[0x47] / 100));
              }
              goto LAB_0059abc5;
            }
            uVar6 = FUN_0052ed50(5,2);
            FUN_006ac3d0();
            (**(code **)(*piVar1 + 0xdc))(uVar6,DAT_00b333c4,0,1,0);
            FUN_0057acc0("Merchant does not have enough gold.",0,1,0xbf800000);
            DAT_00b13e94 = 1;
            *(undefined1 *)(in_ECX + 0x54) = 0;
            goto LAB_0059a574;
          }
          fVar12 = (float10)FUN_00488e50(1,piVar1,1);
          piStack_34c = (int *)(float)fVar12;
          if (DAT_00b13e94 != -1) {
            piStack_34c = (int *)((float)DAT_00b13e94 * (float)piStack_34c);
          }
          if (((float)piStack_34c < 1.0) || (cVar2 = FUN_005e10f0(DAT_00b333c4), cVar2 != '\0')) {
            FUN_00404f70(piStack_34c);
            iVar8 = FUN_009828c0();
            iVar11 = FUN_005e4420();
            if (iVar8 <= iVar11) {
              fVar12 = (float10)FUN_005489e0(iVar8);
              local_33c = (int *)(float)fVar12;
              (**(code **)(*piVar1 + 0x374))(DAT_00b333c4,local_33c);
              if (0 < iVar8) {
                FUN_0041e6f0();
                FUN_00491700(DAT_00b333c4,iVar8,0);
              }
              uVar6 = 0;
              if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
                uVar6 = *(undefined4 *)*piVar7;
              }
              FUN_004fbf90(piVar1,uVar6,0x4000);
              FUN_0044d340(piVar7,(int *)local_344,piVar1);
              DAT_00b13e94 = -1;
              iVar8 = FUN_0052ed50(5,6);
              if ((iVar8 != 0) &&
                 (piVar9 = (int *)FUN_009832e6(*(undefined4 *)(in_ECX + 0x44),0,&PTR_PTR_00b03054,
                                               &PTR_PTR_00b03070,0), piVar9 != (int *)0x0)) {
                FUN_006ac3d0();
                (**(code **)(*piVar9 + 0xdc))(iVar8,DAT_00b333c4,1,1,0);
              }
              FUN_00446c10();
              if (*(int *)(DAT_00b33a98 + 0xcdc) != 0) {
                FUN_00448f40(*(undefined4 *)(in_ECX + 0x44));
              }
              FUN_005992c0();
              goto LAB_0059a574;
            }
            FUN_0057acc0(DAT_00b38db0,0,1,0xbf800000);
            local_34d = '\0';
          }
          else {
            FUN_00404f70(piStack_34c);
            iVar8 = FUN_009828c0();
            fVar12 = (float10)FUN_005489e0(-iVar8);
            local_344 = CONCAT44(local_344._4_4_,(float)fVar12);
            (**(code **)(*piVar1 + 0x374))(DAT_00b333c4,(float)fVar12);
            uVar6 = FUN_0052ed50(5,2);
            FUN_006ac3d0();
            (**(code **)(*piVar1 + 0xdc))(uVar6,DAT_00b333c4,1,1,0);
            FUN_0057acc0(DAT_00b38db8,0,1,0xbf800000);
            local_34d = '\0';
          }
LAB_0059abc5:
          DAT_00b3b288 = '\0';
          if (local_34d != '\0') goto LAB_0059abd7;
        }
        FUN_00484470();
        FUN_00401f20(piVar7);
        piVar9 = local_338;
      }
      DAT_00b3b27a = '\0';
      if (piVar9 == DAT_00b333c4) {
        FUN_005c1900();
      }
      goto LAB_0059b60e;
    }
    FUN_00588bd0(0xfae);
    iVar8 = FUN_009828c0();
    if (param_1 == (int *)0x7) {
      param_1 = (int *)(iVar8 + -1);
    }
    else {
      param_1 = (int *)(iVar8 + 1);
    }
    if ((int)param_1 < 1) {
      param_1 = (int *)0x5;
    }
    else if (5 < (int)param_1) {
      param_1 = (int *)0x1;
    }
    local_33c = param_1;
    FUN_0057de50(6);
    FUN_0058ceb0(0xfae,(float)(int)local_33c);
    param_2 = (int *)0x0;
  }
  FUN_00599200(param_1,param_2);
LAB_0059b60e:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0059b640(int param_1)

{
  if (param_1 != 0) {
    FUN_0058ced0();
    return;
  }
  return;
}



undefined4 FUN_0059b670(int param_1)

{
  if (((((((param_1 != 0) && (param_1 != 1)) && (param_1 != 2)) &&
        ((param_1 != 3 && (param_1 != 4)))) &&
       (((param_1 != 5 && ((param_1 != 6 && (param_1 != 7)))) && (param_1 != 8)))) &&
      ((((param_1 != 9 && (param_1 != 10)) && (param_1 != 0xb)) &&
       (((param_1 != 0xc && (param_1 != 0xd)) &&
        ((param_1 != 0xe && ((param_1 != 0xf && (param_1 != 0x10)))))))))) &&
     ((param_1 != 0x1a && ((param_1 != 0x1b && (param_1 != 0x1c)))))) {
    return 0;
  }
  return 1;
}



bool FUN_0059b920(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  char cVar4;
  
  cVar4 = '\x03';
  do {
    *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + 1;
    if (2 < *(int *)(in_ECX + 0x5c)) {
      *(undefined4 *)(in_ECX + 0x5c) = 0;
    }
    iVar1 = *(int *)(DAT_00b33398 + 0x20);
    iVar2 = *(int *)(in_ECX + 0x5c);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 0x28);
LAB_0059b962:
      uVar3 = (uint)(iVar1 != 0);
LAB_0059b965:
      if (uVar3 != 0) break;
    }
    else {
      if (iVar2 == 1) {
        iVar1 = *(int *)(iVar1 + 0x2c);
        goto LAB_0059b962;
      }
      if (iVar2 == 2) {
        uVar3 = *(uint *)(iVar1 + 0x18f0);
        goto LAB_0059b965;
      }
    }
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  return cVar4 != '\0';
}



bool FUN_0059b980(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  char cVar4;
  
  cVar4 = '\x03';
  do {
    if (*(int *)(in_ECX + 0x5c) == 0) {
      *(undefined4 *)(in_ECX + 0x5c) = 2;
    }
    else {
      *(int *)(in_ECX + 0x5c) = *(int *)(in_ECX + 0x5c) + -1;
    }
    iVar1 = *(int *)(DAT_00b33398 + 0x20);
    iVar2 = *(int *)(in_ECX + 0x5c);
    if (iVar2 == 0) {
      iVar1 = *(int *)(iVar1 + 0x28);
LAB_0059b9c7:
      uVar3 = (uint)(iVar1 != 0);
LAB_0059b9ca:
      if (uVar3 != 0) break;
    }
    else {
      if (iVar2 == 1) {
        iVar1 = *(int *)(iVar1 + 0x2c);
        goto LAB_0059b9c7;
      }
      if (iVar2 == 2) {
        uVar3 = *(uint *)(iVar1 + 0x18f0);
        goto LAB_0059b9ca;
      }
    }
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  return cVar4 != '\0';
}



void FUN_0059b9e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x3fd);
  if (iVar1 != 0) {
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ae4,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_0058ceb0(0x1772,0x40000000);
      FUN_00584740();
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0059ba40(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  int iStack_c;
  
  puVar2 = (undefined4 *)FUN_00589b70(0x3fd);
  iVar7 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    (**(code **)*puVar2)(1);
  }
  FUN_00582160(0,1);
  fVar8 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Options\\controls_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 != (int *)0x0) {
    iVar5 = (**(code **)(*piVar4 + 0x34))();
    if (iVar5 == 0x3fd) {
      uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
      FUN_00584880(uVar3);
      iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13ae4,0);
      cVar1 = FUN_0059b920();
      if (cVar1 == '\0') {
        FUN_00579c10(DAT_00b38ec8,0,1,DAT_00b38cf0,0);
      }
      iVar6 = 0;
      piVar4 = (int *)(iVar5 + 0x28);
      do {
        if (*piVar4 == 0) {
          FUN_004a7a60(
                      "Controls Menu Creation Failed... Are your menu and art resources up to date?"
                      );
          return 0;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar6 < 0xd);
      fVar9 = (float10)FUN_00588bd0(0xfa5);
      if ((fVar9 == (float10)6006.0) ||
         (fVar9 = (float10)FUN_00588bd0(0xfa5), fVar9 == (float10)102.0)) {
        FUN_0058ceb0(0xfab,(float)fVar8);
      }
      FUN_0058ceb0(0xfb3,((_DAT_00b14ee8 - 0.0005) / 0.0095) * 100.0);
      FUN_0058ceb0(0xfb3,0);
      FUN_0059b640(*(undefined4 *)(iVar5 + 0x40),DAT_00b14f38);
      if (*(int *)(*(int *)(DAT_00b33398 + 0x20) + 0x18f0) == 0) {
        FUN_0058ceb0(0xfc9,0x3f800000);
      }
      iStack_c = 0;
      do {
        cVar1 = FUN_0059b670(iVar7);
        if ((cVar1 != '\0') &&
           (iVar6 = FUN_00585410(*(undefined4 *)(iVar5 + 0x34),"controls_template",0), iVar6 != 0))
        {
          FUN_0058ceb0(0xfa8,(float)(iVar7 + 0xe));
          FUN_0058ceb0(0xfae,(float)iStack_c);
          iStack_c = iStack_c + 1;
          if ((undefined4 *)(&DAT_00b399d0)[iVar7] == (undefined4 *)0x0) {
            uVar3 = 0;
          }
          else {
            uVar3 = *(undefined4 *)(&DAT_00b399d0)[iVar7];
          }
          FUN_0058ced0(0xfaf,uVar3);
          fVar8 = (float10)FUN_00588bd0(0xfaf);
          FUN_0058ceb0(0xfca,(float)fVar8);
          fVar8 = (float10)FUN_00588bd0(0xfcc);
          FUN_0058ceb0(0xfcc,(float)fVar8);
          fVar8 = (float10)FUN_00588bd0(0xfcd);
          FUN_0058ceb0(0xfcd,(float)fVar8);
          fVar8 = (float10)FUN_00588bd0(0xfce);
          FUN_0058ceb0(0xfce,(float)fVar8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < 0x1d);
      FUN_0058ceb0(0xfb3,0xcb18967f);
      FUN_0058ceb0(0xfb3,0);
      fVar8 = (float10)FUN_00588bd0(0xfb1);
      *(float *)(iVar5 + 0xdc) = (float)fVar8;
      fVar8 = (float10)FUN_00588bd0(0xfb2);
      *(float *)(iVar5 + 0xe0) = (float)fVar8;
      *(undefined1 *)(iVar5 + 0xd4) = 1;
      FUN_00585190(0);
      return 1;
    }
    if (piVar4[1] != 0) {
      (**(code **)*piVar4)(1);
    }
  }
  return 0;
}



void FUN_0059bd80(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  DWORD DVar9;
  int in_ECX;
  uint uVar10;
  int iVar11;
  int *unaff_FS_OFFSET;
  undefined *puVar12;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009bd878;
  local_14 = *unaff_FS_OFFSET;
  uVar5 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_14;
  if (*(char *)(in_ECX + 0xd4) == '\0') {
    iVar11 = FUN_004031e0(0,2);
    if (iVar11 != 0) {
      *(undefined1 *)(in_ECX + 0xe4) = 0;
    }
  }
  else {
    if ((undefined4 *)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)] == (undefined4 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined4 *)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)];
    }
    FUN_0058ced0(0xfb3,uVar6);
    puVar2 = *(undefined4 **)(*(int *)(in_ECX + 0x34) + 0x34);
    while (puVar2 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)*puVar2;
      FUN_00588bd0(0xfa8);
      iVar7 = FUN_009828c0(uVar5);
      iVar11 = *(int *)(in_ECX + 0x5c);
      bVar1 = *(byte *)(iVar11 * 0x1d + *(int *)(DAT_00b33398 + 0x20) + iVar7 + 0x1b70);
      local_20 = 0;
      local_1c = 0;
      local_1a = 0;
      local_c = 0;
      if (bVar1 == 0xff) {
        FUN_004028d0(&DAT_00a6b770,0);
        goto LAB_0059bf20;
      }
      if (((iVar11 == 0) && (bVar1 < 0xee)) && ((uint *)(&DAT_00b39578)[bVar1] != (uint *)0x0)) {
        uVar10 = *(uint *)(&DAT_00b39578)[bVar1];
        puVar12 = &DAT_00a2f864;
LAB_0059bf18:
        FUN_00402e30(&local_20,puVar12,uVar10);
      }
      else {
        if (((iVar11 == 1) && (bVar1 < 9)) && ((uint *)(&DAT_00b39554)[bVar1] != (uint *)0x0)) {
          uVar10 = *(uint *)(&DAT_00b39554)[bVar1];
          puVar12 = &DAT_00a2f864;
          goto LAB_0059bf18;
        }
        if (iVar11 != 2) {
          uVar10 = (uint)bVar1;
          puVar12 = &DAT_00a2f860;
          goto LAB_0059bf18;
        }
        uVar10 = (uint)bVar1;
        iVar11 = FUN_004030b0(0);
        if ((int)uVar10 < iVar11) {
          FUN_00402e30(&local_20,"%s %d",DAT_00b38eb0,uVar10 + 1);
        }
        else {
          if (((byte)(bVar1 - 0x20) < 8) && (*(uint **)(&DAT_00b398b0 + uVar10 * 4) != (uint *)0x0))
          {
            uVar10 = **(uint **)(&DAT_00b398b0 + uVar10 * 4);
            puVar12 = &DAT_00a2f864;
            goto LAB_0059bf18;
          }
          FUN_004028d0(&DAT_00a6b770,0);
        }
      }
LAB_0059bf20:
      uVar6 = local_20;
      FUN_0058ced0(0xfb1,local_20);
      FUN_0058ceb0(0xfc9,0x40000000);
      FUN_0058ceb0(0xfcc,0x42ea0000);
      FUN_0058ceb0(0xfcd,0x426c0000);
      FUN_0058ceb0(0xfce,0x42040000);
      local_c = 0xffffffff;
      FUN_00401f20(uVar6);
      local_20 = 0;
      local_1a = 0;
      local_1c = 0;
    }
    if (DAT_00b14ed0 == 1) {
      FUN_0058ced0(0xfb0,DAT_00b38ec0);
      uVar6 = DAT_00b38eb8;
    }
    else {
      FUN_0058ced0(0xfb0,DAT_00b38eb8);
      uVar6 = DAT_00b38ec0;
    }
    FUN_0058ced0(0xfb1,uVar6);
    if (*(int *)(in_ECX + 0xd8) != 0) {
      FUN_0058ceb0(0xfc9,0x40000000);
      FUN_0058ceb0(0xfc9,0x40000000);
      FUN_0058ceb0(0xfdd,0);
      FUN_0058ceb0(0xfb1,*(undefined4 *)(in_ECX + 0xdc));
      FUN_0058ceb0(0xfb2,*(undefined4 *)(in_ECX + 0xe0));
      FUN_0058ceb0(0xfb2,0x40000000);
      *(undefined4 *)(in_ECX + 0xd8) = 0;
    }
    *(undefined1 *)(in_ECX + 0xd4) = 0;
  }
  if (*(int *)(in_ECX + 0xd8) != 0) {
    FUN_0058ceb0(0xfdd,0x3f800000);
    FUN_00588bd0(0xfa8);
    iVar7 = FUN_009828c0(uVar5);
    iVar11 = *(int *)(in_ECX + 0x5c);
    iVar7 = iVar7 + -0xe;
    if (iVar11 == 0) {
      uVar5 = 0;
      while (iVar11 = FUN_004032d0(uVar5,1), iVar11 == 0) {
        uVar5 = uVar5 + 1;
        if ((uVar5 & 0x100) != 0) {
          *unaff_FS_OFFSET = local_14;
          return;
        }
      }
      cVar4 = FUN_00403f50(iVar7,0,uVar5);
      if ((cVar4 == '\0') && (uVar5 != 1)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      *(undefined1 *)(in_ECX + 0xd4) = uVar3;
      FUN_0057de50(0xb);
      if (*(char *)(in_ECX + 0xd4) == '\0') {
        FUN_00579c10(DAT_00b38ed0,0,1,DAT_00b38cf0,0);
      }
    }
    else if (iVar11 == 1) {
      iVar11 = 0;
      if (*(char *)(in_ECX + 0xd4) == '\0') {
        iVar11 = 0;
        do {
          iVar8 = FUN_004031d0();
          if (iVar8 <= iVar11) break;
          iVar8 = FUN_004031e0(iVar11,1);
          if (iVar8 != 0) {
            FUN_0057de50(0xb);
            uVar3 = FUN_00403f50(iVar7,1,iVar11);
            *(undefined1 *)(in_ECX + 0xd4) = uVar3;
          }
          iVar11 = iVar11 + 1;
        } while (*(char *)(in_ECX + 0xd4) == '\0');
      }
      iVar8 = FUN_00403520(0x1d,1);
      if (iVar8 != 0) {
        *(undefined1 *)(in_ECX + 0xd4) = 1;
        FUN_00403b80(iVar7,1,0xff);
        FUN_0057de50(0xb);
      }
      if ((*(char *)(in_ECX + 0xd4) != '\0') && (iVar11 == 1)) {
        *(undefined1 *)(in_ECX + 0xe4) = 1;
        *unaff_FS_OFFSET = local_14;
        return;
      }
    }
    else if (iVar11 == 2) {
      cVar4 = *(char *)(in_ECX + 0xd4);
      for (iVar11 = 0; (cVar4 == '\0' && (iVar8 = FUN_004030b0(0), iVar11 < iVar8));
          iVar11 = iVar11 + 1) {
        iVar8 = FUN_00402fc0(0,iVar11,1);
        if (iVar8 != 0) {
          uVar3 = FUN_00403f50(iVar7,2,iVar11);
          *(undefined1 *)(in_ECX + 0xd4) = uVar3;
          FUN_0057de50(0xb);
        }
        cVar4 = *(char *)(in_ECX + 0xd4);
      }
      cVar4 = *(char *)(in_ECX + 0xd4);
      for (iVar11 = 0; (cVar4 == '\0' && (iVar8 = FUN_004030d0(0), iVar11 < iVar8));
          iVar11 = iVar11 + 1) {
        iVar8 = FUN_00403070(0,iVar11);
        if ((iVar8 == -1) ||
           ((DVar9 = GetTickCount(), DVar9 < DAT_00b3b28c ||
            (cVar4 = FUN_00403f50(iVar7,2,iVar8), cVar4 == '\0')))) {
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
        *(undefined1 *)(in_ECX + 0xd4) = uVar3;
        FUN_0057de50(0xb);
        if (*(char *)(in_ECX + 0xd4) != '\0') {
          DVar9 = GetTickCount();
          DAT_00b3b28c = DVar9 + 100;
        }
        cVar4 = *(char *)(in_ECX + 0xd4);
      }
      iVar11 = FUN_00403520(0x1d,1);
      if (iVar11 != 0) {
        *(undefined1 *)(in_ECX + 0xd4) = 1;
        FUN_00403b80(iVar7,2,0xff);
        FUN_0057de50(0xb);
        *unaff_FS_OFFSET = local_14;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_14;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0059c3f0(int param_1)

{
  int *piVar1;
  uchar uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  uchar *puVar5;
  uchar *puVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  uchar local_20 [16];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bffc8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_28;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    puVar3 = *(undefined4 **)(*(int *)(in_ECX + 0x34) + 0x34);
    while (puVar3 != (undefined4 *)0x0) {
      piVar1 = puVar3 + 2;
      puVar3 = (undefined4 *)*puVar3;
      if ((*piVar1 != 0) && (*piVar1 != param_1)) {
        FUN_0058ceb0(0xfc9,0x3f800000);
        FUN_0058ceb0(0xfcc,0x43000000);
        FUN_0058ceb0(0xfcd,0x43000000);
        FUN_0058ceb0(0xfce,0x43000000);
      }
    }
    FUN_0058ceb0(0xfc9,0x3f800000);
    FUN_0058ceb0(0xfc9,0x3f800000);
    fVar7 = (float10)FUN_00588bd0(0xfb1);
    *(float *)(in_ECX + 0xdc) = (float)fVar7;
    fVar7 = (float10)FUN_00588bd0(0xfb2);
    *(float *)(in_ECX + 0xe0) = (float)fVar7;
    FUN_0058ceb0(0xfb1,0);
    FUN_0058ceb0(0xfb2,0);
    FUN_0058ceb0(0xfb2,0x3f800000);
    uVar4 = DAT_00b38ee8;
    local_28 = 0;
    local_24 = 0;
    local_22 = 0;
    local_4 = 0;
    if ((undefined4 *)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)] == (undefined4 *)0x0) {
      puVar5 = (uchar *)0x0;
    }
    else {
      puVar5 = *(uchar **)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)];
    }
    puVar6 = local_20;
    do {
      uVar2 = *puVar5;
      *puVar6 = uVar2;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 != '\0');
    puVar5 = FID_conflict___mbslwr(local_20);
    FUN_00402e30(&local_28,"%s %s %s",DAT_00b38ee0,puVar5,uVar4);
    uVar4 = local_28;
    FUN_0058ced0(0xfde,local_28);
    *(int *)(in_ECX + 0xd8) = param_1;
    FUN_00401f20(uVar4);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059c5e0(int param_1,undefined4 param_2)

{
  uchar uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int in_ECX;
  uchar *puVar7;
  uchar *puVar8;
  int *unaff_FS_OFFSET;
  float10 fVar9;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  uchar local_20 [16];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bffc8;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_28;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xffffffc8;
  *unaff_FS_OFFSET = (int)&local_c;
  if (*(int *)(in_ECX + 0xd8) != 0) goto LAB_0059c835;
  switch(param_1) {
  case 1:
    fVar9 = (float10)FUN_00588bd0(0xfae);
    if (fVar9 == (float10)2.0) {
      uVar6 = 0x3f800000;
      goto LAB_0059c797;
    }
    fVar9 = (float10)FUN_00588bd0(0xfb5);
    _DAT_00b14ee8 =
         (float)((fVar9 / (float10)100.0) * (float10)0.009499999694526196 +
                (float10)0.0005000000237487257);
    FUN_00404400();
LAB_0059c699:
    FUN_0059b9e0();
    FUN_005bd610();
    break;
  case 7:
    FUN_0057de50(3,uVar4);
    DAT_00b14f38 = DAT_00b14f38 == '\0';
    uVar6 = FUN_00404e10();
    FUN_0059b640(param_2,uVar6);
    break;
  case 8:
    FUN_0057de50(3,uVar4);
    uVar2 = DAT_00b14ee0;
    uVar6 = DAT_00b14ec8;
    DAT_00b14ec8 = DAT_00b14ed8;
    DAT_00b14ed8 = uVar6;
    DAT_00b14ee0 = DAT_00b14ed0;
    DAT_00b14ed0 = uVar2;
    *(undefined1 *)(in_ECX + 0xd4) = 1;
    break;
  case 9:
    FUN_0057de50(1,uVar4);
    uVar6 = 0x40000000;
LAB_0059c797:
    FUN_0058ceb0(0xfae,uVar6);
    break;
  case 10:
    FUN_0057de50(1,uVar4);
    local_28 = 0;
    local_24 = 0;
    local_22 = 0;
    local_4 = 0;
    if ((undefined4 *)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)] == (undefined4 *)0x0) {
      puVar7 = (uchar *)0x0;
    }
    else {
      puVar7 = *(uchar **)(&DAT_00b39548)[*(int *)(in_ECX + 0x5c)];
    }
    puVar8 = local_20;
    do {
      uVar1 = *puVar7;
      *puVar8 = uVar1;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    } while (uVar1 != '\0');
    FID_conflict___mbslwr(local_20);
    FUN_00402e30(&local_28,"%s %s %s?",DAT_00b38ef0,local_20,DAT_00b38ef8);
    FUN_00579c10(local_28,&LAB_0059b8c0,1,DAT_00b38d00,DAT_00b38cf8,0);
    local_4 = 0xffffffff;
    FUN_00402da0();
    break;
  case 0xc:
  case 0xd:
    FUN_0057de50(1,uVar4);
    iVar5 = FUN_00587500(param_1);
    if (iVar5 == 0xb) {
      cVar3 = FUN_0059b980();
    }
    else {
      cVar3 = FUN_0059b920();
    }
    if (cVar3 == '\0') goto LAB_0059c699;
    *(undefined1 *)(in_ECX + 0xd4) = 1;
  }
  if ((0xd < param_1) && (*(char *)(in_ECX + 0xe4) == '\0')) {
    FUN_0059c3f0(param_2);
  }
LAB_0059c835:
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0059c890(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0388;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b784;
  local_4 = 0;
  if (DAT_00b3b290 != '\0') {
    iVar2 = FUN_00589b70(0x414,uVar1);
    if (iVar2 != 0) {
      uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13f90,0);
      iVar2 = FUN_009832e6(uVar3);
      if (iVar2 != 0) {
        FUN_005b5a30();
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0059c960(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6b784;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  in_ECX[10] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0xf] = 1;
  in_ECX[0x10] = 1;
  in_ECX[0x13] = DAT_00b25ae0;
  in_ECX[0x14] = DAT_00b25ae4;
  in_ECX[0x15] = DAT_00b25ae8;
  in_ECX[0x16] = DAT_00b25aec;
  DAT_00b3b290 = 1;
  return;
}



void FUN_0059c9d0(byte param_1)

{
  FUN_0059c890();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0059c9f0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00589b70(0x417);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    FUN_00589b70(0x414);
    uVar2 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13f90,0);
    iVar1 = FUN_009832e6(uVar2);
    if (iVar1 != 0) {
      FUN_005b5a30();
      return;
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0059cb70(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_ECX;
  int iVar5;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)local_108;
  iVar2 = *(int *)(in_ECX + 0x38);
  cVar1 = *(char *)(*(int *)(in_ECX + 0x30) + iVar2);
  iVar5 = 0;
  while ((((cVar1 != '\r' && (cVar1 != '<')) && (cVar1 != '>')) && (cVar1 != '*'))) {
    uVar3 = *(uint *)(in_ECX + 0x34);
    if (uVar3 <= *(uint *)(in_ECX + 0x30)) break;
    uVar4 = *(uint *)(in_ECX + 0x30) + 1;
    local_108[iVar5] = cVar1;
    iVar5 = iVar5 + 1;
    *(uint *)(in_ECX + 0x30) = uVar4;
    if (uVar4 < uVar3) {
      cVar1 = *(char *)(uVar4 + iVar2);
    }
  }
  local_108[iVar5] = '\0';
  FUN_004028d0(local_108,0);
  return;
}



int * FUN_0059cc00(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int in_ECX;
  int *piVar9;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 *local_4;
  
  local_4 = (undefined4 *)0xffffffff;
  puStack_8 = &LAB_009c002f;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffcc;
  *unaff_FS_OFFSET = (int)&local_c;
  puVar2 = (undefined4 *)FUN_00401f00(0x30,uVar1);
  puVar3 = (undefined4 *)FUN_00401f00(0x20);
  puVar4 = (undefined2 *)FUN_00401f00(0xc);
  *puVar2 = 0;
  puVar2[1] = 0x3c23d70a;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0x3c23d70a;
  puVar2[5] = (float)-param_3;
  puVar2[6] = (float)param_2;
  puVar2[7] = 0x3c23d70a;
  puVar2[8] = 0;
  puVar2[9] = (float)param_2;
  puVar2[10] = 0x3c23d70a;
  puVar2[0xb] = (float)-param_3;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0x3f800000;
  puVar3[4] = 0x3f800000;
  puVar3[5] = 0;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0x3f800000;
  piVar9 = (int *)0x0;
  *puVar4 = 0;
  puVar4[1] = 1;
  puVar4[2] = 2;
  puVar4[3] = 2;
  puVar4[4] = 1;
  puVar4[5] = 3;
  iVar5 = FUN_00401f00(0xdc);
  local_4 = (undefined4 *)0x0;
  if (iVar5 != 0) {
    piVar9 = (int *)FUN_0070b780(0);
  }
  local_4 = (undefined4 *)0xffffffff;
  FUN_006ff420(*param_1);
  param_3 = *(int *)(in_ECX + 0x44);
  if (*(int *)(in_ECX + 0x40) == 2) {
    param_3 = FUN_009828c0();
  }
  else if (*(int *)(in_ECX + 0x40) == 4) {
    param_3 = param_3 - param_2;
  }
  iVar5 = *(int *)(in_ECX + 0x48);
  piVar9[0x15] = (int)(float)param_3;
  piVar9[0x16] = 0;
  piVar9[0x17] = (int)(float)iVar5;
  puVar6 = (undefined4 *)FUN_00401f00(0x1c);
  local_4 = (undefined4 *)0x1;
  if (puVar6 == (undefined4 *)0x0) {
    puVar6 = (undefined4 *)0x0;
  }
  else {
    FUN_006ffd30();
    *puVar6 = &PTR_FUN_00a3d604;
    *(undefined2 *)(puVar6 + 6) = 0xec;
    *(undefined1 *)((int)puVar6 + 0x1a) = 0;
  }
  *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) | 1;
  local_4 = (undefined4 *)0xffffffff;
  FUN_00405680(puVar6);
  iVar5 = FUN_00401f00(0xc0);
  local_4 = (undefined4 *)0x2;
  if (iVar5 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = FUN_007174b0(4,puVar2,0,0,puVar3,1,0,2,puVar4);
  }
  local_4 = (undefined4 *)0xffffffff;
  (**(code **)(*piVar9 + 0x84))(uVar7,1);
  local_c = 3;
  FUN_00402e30(&stack0xffffffd8,"Textures\\Menus\\Credits\\%s",*local_4);
  FUN_006ff420(0);
  uVar7 = FUN_00701e00(0,&DAT_00b256d0,1);
  local_4 = (undefined4 *)FUN_00401f00(0x30);
  local_c._0_1_ = 4;
  if (local_4 == (undefined4 *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_007043b0();
  }
  local_c._0_1_ = 3;
  FUN_004057b0(uVar7);
  *(ushort *)(iVar8 + 0x18) = *(ushort *)(iVar8 + 0x18) & 0xfff5 | 4;
  FUN_00405680(iVar8);
  iVar8 = FUN_00401f00(0x5c);
  local_c._0_1_ = 5;
  if (iVar8 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_007095a0();
  }
  *(undefined4 *)(iVar8 + 0x40) = DAT_00b25ac4;
  *(undefined4 *)(iVar8 + 0x44) = DAT_00b25ac8;
  uVar7 = DAT_00b25acc;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  *(undefined4 *)(iVar8 + 0x48) = uVar7;
  *(undefined4 *)(iVar8 + 0x1c) = DAT_00b25ac4;
  *(undefined4 *)(iVar8 + 0x20) = DAT_00b25ac8;
  uVar7 = DAT_00b25acc;
  *(int *)(iVar8 + 0x54) = *(int *)(iVar8 + 0x54) + 1;
  local_c = CONCAT31(local_c._1_3_,3);
  *(undefined4 *)(iVar8 + 0x24) = uVar7;
  FUN_00405680(iVar8);
  FUN_0072a0f0(4,puVar2);
  FUN_007b8940(piVar9,1,0,1);
  FUN_004a2a90(piVar9,iVar5);
  FUN_00401f20(0);
  *unaff_FS_OFFSET = 0;
  return piVar9;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0059d030(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 *puStack_19c;
  int iStack_198;
  undefined4 uStack_194;
  undefined2 uStack_190;
  undefined2 uStack_18e;
  float fStack_18c;
  undefined4 uStack_188;
  undefined4 *puStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  int local_178;
  code *pcStack_174;
  uint local_1c;
  int local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_009c0082;
  local_14 = *unaff_FS_OFFSET;
  local_1c = DAT_00b30aac ^ (uint)&puStack_19c;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffe58;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_00430970("Data\\Credits.txt",0,0x2800,0);
  local_c = 0;
  cVar2 = (**(code **)(local_178 + 4))(uVar3);
  if (cVar2 != '\0') {
    iVar4 = FUN_00430240();
    *(int *)(in_ECX + 0x34) = iVar4 + 1;
    iVar4 = FUN_00401f00(iVar4 + 1);
    *(int *)(in_ECX + 0x38) = iVar4;
    *(undefined1 *)(*(int *)(in_ECX + 0x34) + -1 + iVar4) = 0;
    iStack_198 = 1;
    iVar4 = (*pcStack_174)(&local_178,*(undefined4 *)(in_ECX + 0x38),*(int *)(in_ECX + 0x34) + -1,
                           &iStack_198,1);
    if (iVar4 == *(int *)(in_ECX + 0x34) + -1) {
      puStack_19c = (undefined4 *)FUN_00401f00(0xdc);
      local_c._0_1_ = 1;
      if (puStack_19c == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_0070b780(0);
      }
      local_c._0_1_ = 0;
      *(undefined4 *)(in_ECX + 0x2c) = uVar5;
      FUN_006ff420("Credits Scroll Root");
      fStack_18c = 0.0;
      iVar4 = *(int *)(in_ECX + 0x2c);
      uStack_188 = 0;
      iStack_198 = -DAT_00b06c50;
      puStack_184 = (undefined4 *)(float)iStack_198;
      *(undefined4 *)(iVar4 + 0x54) = 0;
      *(undefined4 *)(iVar4 + 0x58) = 0;
      *(undefined4 **)(iVar4 + 0x5c) = puStack_184;
      (**(code **)(**(int **)(*(int *)(in_ECX + 0x28) + 0x24) + 0x84))
                (*(undefined4 *)(in_ECX + 0x2c),1);
      puVar6 = (undefined4 *)FUN_00401f00(0x1c);
      local_c._0_1_ = 2;
      puStack_19c = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)0x0;
      }
      else {
        FUN_006ffd30();
        *puVar6 = &PTR_FUN_00a3d604;
        *(undefined2 *)(puVar6 + 6) = 0xec;
        *(undefined1 *)((int)puVar6 + 0x1a) = 0;
      }
      *(ushort *)(puVar6 + 6) = *(ushort *)(puVar6 + 6) | 1;
      local_c._0_1_ = 0;
      FUN_00405680(puVar6);
      iVar4 = *(int *)(in_ECX + 0x3c);
      iVar7 = FUN_00576a30();
      iVar4 = *(int *)(iVar7 + iVar4 * 4);
      uStack_194 = 0;
      uStack_190 = 0;
      uStack_18e = 0;
      local_c = CONCAT31(local_c._1_3_,3);
      iStack_198 = iVar4;
      if (*(uint *)(in_ECX + 0x30) < *(uint *)(in_ECX + 0x34)) {
        do {
          iVar7 = *(int *)(in_ECX + 0x30);
          iVar1 = *(int *)(in_ECX + 0x38);
          if (*(char *)(iVar7 + iVar1) == '\r') {
            fStack_180 = *(float *)(iVar4 + 0x2c);
            uVar5 = FUN_009828c0();
            *(undefined4 *)(in_ECX + 0x48) = uVar5;
          }
          cVar2 = *(char *)(iVar7 + iVar1);
          while (cVar2 != '\n') {
            uVar3 = *(uint *)(in_ECX + 0x30);
            if (*(uint *)(in_ECX + 0x34) <= uVar3) break;
            iVar7 = *(int *)(in_ECX + 0x38);
            cVar2 = *(char *)(uVar3 + iVar7);
            if (cVar2 == '*') {
              do {
                if (*(uint *)(in_ECX + 0x34) <= *(uint *)(in_ECX + 0x30)) break;
                iVar7 = *(uint *)(in_ECX + 0x30) + 1;
                *(int *)(in_ECX + 0x30) = iVar7;
              } while (*(char *)(iVar7 + *(int *)(in_ECX + 0x38)) != '\n');
            }
            else if (cVar2 == '<') {
              *(uint *)(in_ECX + 0x30) = uVar3 + 1;
              switch(*(undefined1 *)(uVar3 + 1 + iVar7)) {
              case 0x43:
                puStack_19c = (undefined4 *)_atol((char *)(uVar3 + 3 + iVar7));
                *(float *)(in_ECX + 0x4c) = (float)(int)puStack_19c / 255.0;
                puStack_19c = (undefined4 *)
                              _atol((char *)(*(int *)(in_ECX + 0x30) + 6 + *(int *)(in_ECX + 0x38)))
                ;
                *(float *)(in_ECX + 0x50) = (float)(int)puStack_19c / 255.0;
                puStack_19c = (undefined4 *)
                              _atol((char *)(*(int *)(in_ECX + 0x30) + 10 + *(int *)(in_ECX + 0x38))
                                   );
                *(float *)(in_ECX + 0x54) = (float)(int)puStack_19c / 255.0;
                puStack_19c = (undefined4 *)
                              _atol((char *)(*(int *)(in_ECX + 0x30) + 0xe + *(int *)(in_ECX + 0x38)
                                            ));
                *(float *)(in_ECX + 0x58) = (float)(int)puStack_19c / 255.0;
                break;
              case 0x46:
                iVar7 = *(char *)(uVar3 + 3 + iVar7) + -0x31;
                *(int *)(in_ECX + 0x3c) = iVar7;
                iVar4 = FUN_00576a30();
                iVar4 = *(int *)(iVar4 + iVar7 * 4);
                iStack_198 = iVar4;
                break;
              case 0x49:
                lVar8 = _atol((char *)(uVar3 + 3 + iVar7));
                lVar9 = _atol((char *)(*(int *)(in_ECX + 0x30) + 7 + *(int *)(in_ECX + 0x38)));
                lVar10 = _atol((char *)(*(int *)(in_ECX + 0x30) + 0xc + *(int *)(in_ECX + 0x38)));
                *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 0x10;
                puStack_19c = (undefined4 *)((float)lVar10 / 255.0);
                FUN_0059cb70(&uStack_194);
                uVar5 = FUN_0059cc00(&uStack_194,lVar8,lVar9,puStack_19c);
                (**(code **)(**(int **)(in_ECX + 0x2c) + 0x84))(uVar5,1);
                *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) - lVar9;
                iVar4 = iStack_198;
                break;
              case 0x4a:
                cVar2 = *(char *)(uVar3 + 3 + iVar7);
                if (cVar2 == 'C') {
                  *(undefined4 *)(in_ECX + 0x40) = 2;
                }
                else {
                  *(uint *)(in_ECX + 0x40) = (-(uint)(cVar2 != 'R') & 0xfffffffd) + 4;
                }
                break;
              case 0x58:
                cVar2 = *(char *)(uVar3 + 3 + iVar7);
                if (cVar2 == '+') {
                  lVar8 = _atol((char *)(uVar3 + 4 + iVar7));
                  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) + lVar8;
                }
                else if (cVar2 == '-') {
                  lVar8 = _atol((char *)(uVar3 + 4 + iVar7));
                  *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x44) - lVar8;
                }
                else {
                  lVar8 = _atol((char *)(uVar3 + 3 + iVar7));
                  *(long *)(in_ECX + 0x44) = lVar8;
                }
                break;
              case 0x59:
                cVar2 = *(char *)(uVar3 + 3 + iVar7);
                if (cVar2 == '+') {
                  lVar8 = _atol((char *)(uVar3 + 4 + iVar7));
                  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) - lVar8;
                }
                else if (cVar2 == '-') {
                  lVar8 = _atol((char *)(uVar3 + 4 + iVar7));
                  *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + lVar8;
                }
                else {
                  lVar8 = _atol((char *)(uVar3 + 3 + iVar7));
                  *(long *)(in_ECX + 0x48) = lVar8;
                }
              }
              if (*(char *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x38)) != '>') {
                do {
                  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
                  if (*(uint *)(in_ECX + 0x34) <= *(uint *)(in_ECX + 0x30)) goto LAB_0059d578;
                } while (*(char *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x38)) != '>');
              }
              *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
            }
            else if (cVar2 < ' ') {
              *(uint *)(in_ECX + 0x30) = uVar3 + 1;
            }
            else {
              FUN_0059cb70(&uStack_194);
              uStack_17c = 0x500;
              iVar7 = FUN_00575870(0,0,0,&uStack_194,&uStack_17c,*(undefined4 *)(in_ECX + 0x40),
                                   in_ECX + 0x4c,1);
              fStack_18c = (float)*(int *)(in_ECX + 0x44);
              puStack_19c = (undefined4 *)(float)*(int *)(in_ECX + 0x48);
              *(float *)(iVar7 + 0x54) = fStack_18c;
              uStack_188 = 0;
              *(undefined4 *)(iVar7 + 0x58) = 0;
              *(undefined4 **)(iVar7 + 0x5c) = puStack_19c;
              puStack_184 = puStack_19c;
              fStack_180 = fStack_18c;
              FUN_006ff420(uStack_194);
              (**(code **)(**(int **)(in_ECX + 0x2c) + 0x84))(iVar7,1);
              puStack_19c = *(undefined4 **)(iVar4 + 0x2c);
              uVar5 = FUN_009828c0();
              *(undefined4 *)(in_ECX + 0x48) = uVar5;
            }
LAB_0059d578:
            cVar2 = *(char *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x38));
          }
          if (*(char *)(*(int *)(in_ECX + 0x30) + *(int *)(in_ECX + 0x38)) != '\n') {
            do {
              if (*(uint *)(in_ECX + 0x34) <= *(uint *)(in_ECX + 0x30)) break;
              iVar7 = *(uint *)(in_ECX + 0x30) + 1;
              *(int *)(in_ECX + 0x30) = iVar7;
            } while (*(char *)(iVar7 + *(int *)(in_ECX + 0x38)) != '\n');
          }
          *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
        } while (*(uint *)(in_ECX + 0x30) < *(uint *)(in_ECX + 0x34));
      }
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x38));
      *(undefined4 *)(in_ECX + 0x38) = 0;
      FUN_00707610();
      FUN_00707980();
      FUN_00707370(0,1);
      FUN_00401f20(uStack_194);
      uStack_194 = 0;
      uStack_18e = 0;
      uStack_190 = 0;
    }
    else {
      FUN_00401f20(*(undefined4 *)(in_ECX + 0x38));
      *(undefined4 *)(in_ECX + 0x38) = 0;
    }
  }
  local_c = 0xffffffff;
  FUN_00430670();
  *unaff_FS_OFFSET = local_14;
  return;
}



undefined4 FUN_0059d680(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  
  puVar1 = (undefined4 *)FUN_00589b70(0x417);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(1);
  }
  iVar2 = FUN_00582160(0,1);
  fVar7 = (float10)thunk_FUN_00584980();
  uVar3 = FUN_00590420("Data\\Menus\\Options\\credits_menu.xml");
  piVar4 = (int *)FUN_005898f0();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar4 + 0x34))();
  if (iVar5 != 0x417) {
    if (piVar4[1] == 0) {
      return 0;
    }
    (**(code **)*piVar4)(1);
    return 0;
  }
  uVar3 = FUN_009832e6(uVar3,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
  FUN_00584880(uVar3);
  iVar5 = FUN_009832e6(piVar4,0,&PTR_PTR_00b0a018,&PTR_PTR_00b13fa8,0);
  if (*(int *)(iVar5 + 0x28) != 0) {
    if (DAT_00b3b290 != '\0') {
      iVar6 = FUN_00589930("background");
      if (iVar6 != 0) {
        FUN_0058ceb0(0xfa7,0);
      }
      iVar6 = FUN_00589b70(0x414);
      if (iVar6 != 0) {
        uVar3 = FUN_005898f0(0,&PTR_PTR_00b0a018,&PTR_PTR_00b13f90,0);
        iVar6 = FUN_009832e6(uVar3);
        if (iVar6 != 0) {
          FUN_005b5a80();
        }
      }
    }
    fVar8 = (float10)FUN_00588bd0(0xfa5);
    if ((fVar8 == (float10)6006.0) ||
       (fVar8 = (float10)FUN_00588bd0(0xfa5), fVar8 == (float10)102.0)) {
      FUN_0058ceb0(0xfab,(float)fVar7);
    }
    FUN_0058ceb0(0xfae,(float)(*(char *)(iVar2 + 8) != '\x01'));
    FUN_0059d030();
    if ((double)DAT_00b06c50 / (double)DAT_00b06c4c != 0.75) {
      iVar2 = *(int *)(*(int *)(iVar5 + 0x28) + 0x24);
      *(float *)(iVar2 + 0x54) = *(float *)(iVar2 + 0x54) + 214.0;
      *(undefined4 *)(iVar2 + 0x58) = *(undefined4 *)(iVar2 + 0x58);
      *(undefined4 *)(iVar2 + 0x5c) = *(undefined4 *)(iVar2 + 0x5c);
      FUN_00707370(0,0);
    }
    return 1;
  }
  FUN_004a7a60("Credits Menu Creation Failed... Are your menu and art resources up to date?");
  return 0;
}



void FUN_0059d890(void)

{
  DAT_00b3b294 = 0;
  return;
}



undefined1 FUN_0059d8a0(void)

{
  int in_ECX;
  
  if ((((((*(int *)(in_ECX + 0x28) != 0) && (*(int *)(in_ECX + 0x2c) != 0)) &&
        (*(int *)(in_ECX + 0x34) != 0)) &&
       ((*(int *)(in_ECX + 0x30) != 0 && (*(int *)(in_ECX + 0x38) != 0)))) &&
      ((*(int *)(in_ECX + 0x3c) != 0 &&
       ((*(int *)(in_ECX + 0x40) != 0 && (*(int *)(in_ECX + 0x44) != 0)))))) &&
     ((*(int *)(in_ECX + 0x48) != 0 &&
      ((*(int *)(in_ECX + 0x50) != 0 && (*(int *)(in_ECX + 0x4c) != 0)))))) {
    return 1;
  }
  return 0;
}



undefined4 FUN_0059d9d0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  float10 fVar3;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if ((iVar2 == iVar1) && (in_ECX[0xd] != 0)) {
    fVar3 = (float10)FUN_00588bd0(0xfa1);
    if ((fVar3 == (float10)2.0) && (param_1 - 9U < 4)) {
      (**(code **)(*in_ECX + 0xc))(4,in_ECX[0xd]);
      return 1;
    }
  }
  return 0;
}



void FUN_0059daa0(int param_1)

{
  int iVar1;
  
  if (param_1 == 0xf) {
    FUN_00582160(0,1);
    FUN_0057d7f0();
    FUN_0057d7f0();
    FUN_009828c0();
    FUN_00588cf0();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059dd40(void)

{
  int *piVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 unaff_EBP;
  undefined4 unaff_EDI;
  
  cVar3 = (char)((uint)unaff_EDI >> 0x18);
  iVar4 = FUN_00589b70(0x3f1);
  iVar5 = FUN_006b8660();
  if (((iVar4 != 0) && (iVar5 != 0)) && (iVar4 = FUN_005898f0(), iVar4 != 0)) {
    cVar2 = *(char *)(iVar4 + 0x88);
    *(undefined4 *)(iVar4 + 0x68) = 0;
    piVar1 = *(int **)(iVar4 + 0x60);
    *(undefined4 *)(iVar4 + 0x6c) = 0xffffffff;
    if (piVar1 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar1 + 0x130))(0);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*piVar1 + 0x130))(0);
        *(undefined1 *)(iVar4 + 0x112) = 0;
      }
      iVar4 = (**(code **)(*piVar1 + 0x134))(0);
      if (iVar4 != 0) {
        iVar4 = (**(code **)(*piVar1 + 0x134))(0);
        *(undefined1 *)(iVar4 + 0x112) = 0;
      }
    }
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    if ((DAT_00b3b294 != 0) && (cVar2 == '\0')) {
      FUN_00531470(piVar1);
      FUN_005308d0();
      DAT_00b3b294 = 0;
    }
    FUN_005ef930();
    (**(code **)(*piVar1 + 0x234))(0);
    (**(code **)(*DAT_00b333c4 + 0x234))(0);
    (**(code **)(*piVar1 + 0x30c))();
    if ((int *)piVar1[0x16] != (int *)0x0) {
      (**(code **)(*(int *)piVar1[0x16] + 0x1e0))(0);
      cVar2 = (**(code **)(*piVar1 + 0x334))(1);
      if (cVar2 == '\0') {
        (**(code **)(*(int *)piVar1[0x16] + 0x18))(piVar1,1);
      }
    }
    if ((char)((uint)unaff_EBP >> 0x18) == '\0') {
      *(undefined1 *)((int *)piVar1[0x16] + 0x68) = 1;
    }
    else {
      (**(code **)(*(int *)piVar1[0x16] + 0x4a8))();
    }
    (**(code **)(*(int *)piVar1[0x16] + 0x364))(_DAT_00b36ae8);
    FUN_005e05f0(0x30);
    FUN_0065da10();
    if ((DAT_00b3b294 != 0) && (cVar3 != '\0')) {
      FUN_00531470(piVar1);
      FUN_005308d0();
      DAT_00b3b294 = 0;
      cVar3 = (**(code **)(*piVar1 + 0x334))(1);
      if ((cVar3 == '\0') && ((int *)piVar1[0x16] != (int *)0x0)) {
        (**(code **)(*(int *)piVar1[0x16] + 0x18))(piVar1,1);
      }
      piVar6 = (int *)(**(code **)(*piVar1 + 0x380))();
      if (piVar6 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar6 + 0x164))();
        iVar5 = (**(code **)(*piVar1 + 0x164))();
        if ((iVar4 != 0) && (iVar5 != 0)) {
          *(undefined4 *)(iVar4 + 0x94) = *(undefined4 *)(iVar5 + 0x94);
        }
      }
    }
    thunk_FUN_005a4510();
    DAT_00b2d91c = 1;
  }
  return;
}



void FUN_0059df70(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_0052ed50(3,0x26);
  iVar2 = FUN_0052f790(*(undefined4 *)(in_ECX + 0x60),DAT_00b333c4,0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_006b7ba0();
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_006b7c20();
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar3);
      *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x80) = 2;
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
      FUN_0058ced0(0xfde,*puVar3);
    }
    FUN_006b81d0();
    FUN_00401f20(iVar2);
  }
  return;
}



void FUN_0059e030(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_0052ed50(5,8);
  iVar2 = FUN_0052f790(*(undefined4 *)(in_ECX + 0x60),DAT_00b333c4,0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_006b7ba0();
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_006b7c20();
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar3);
      *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x80) = 2;
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
      FUN_0058ced0(0xfde,*puVar3);
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    FUN_006b81d0();
    FUN_00401f20(iVar2);
  }
  return;
}



void FUN_0059e100(void)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  
  FUN_0052ed50(5,0xd);
  iVar2 = FUN_0052f790(*(undefined4 *)(in_ECX + 0x60),DAT_00b333c4,0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_006b7ba0();
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_006b7c20();
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar3);
      *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x80) = 2;
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
      FUN_0058ced0(0xfde,*puVar3);
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    FUN_006b81d0();
    FUN_00401f20(iVar2);
  }
  return;
}



void FUN_0059e1d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = 0xc;
  }
  FUN_0052ed50(5,uVar4);
  iVar2 = FUN_0052f790(*(undefined4 *)(in_ECX + 0x60),DAT_00b333c4,0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_006b7ba0();
    if (cVar1 != '\0') {
      puVar3 = (undefined4 *)FUN_006b7c20();
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar3);
      *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x80) = 2;
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
      FUN_0058ced0(0xfde,*puVar3);
      FUN_0058ceb0(0xfa1,0x3f800000);
    }
    FUN_006b81d0();
    FUN_00401f20(iVar2);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e2b0(char param_1)

{
  float fVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  int in_ECX;
  undefined4 uVar7;
  int local_4;
  
  cVar5 = param_1;
  fVar1 = (float)(byte)((param_1 != '\0') + 1);
  FUN_0058ceb0(0xfa1,fVar1);
  FUN_0058ceb0(0xfa1,fVar1);
  if (*(int *)(in_ECX + 0x60) == 0) {
    return;
  }
  cVar2 = FUN_005e1ab0();
  if (cVar2 != '\0') {
    FUN_0058ceb0(0xfa1,0x3f800000);
  }
  iVar6 = *(int *)(*(int *)(*(int *)(in_ECX + 0x60) + 0x58) + 8);
  if (iVar6 == 0) {
    return;
  }
  cVar2 = FUN_00567770();
  if (cVar2 != '\0') {
    iVar6 = FUN_0041fb20();
  }
  if (iVar6 == 0) {
    return;
  }
  if ((*(byte *)(iVar6 + 0x1c) & 1) == 0) {
    return;
  }
  if (param_1 == '\0') {
LAB_0059e375:
    local_4 = 1;
  }
  else {
    cVar2 = FUN_005e8900();
    local_4 = 2;
    if (cVar2 == '\0') goto LAB_0059e375;
  }
  FUN_0058ceb0(0xfa1,(float)local_4);
  cVar2 = '\0';
  if ((param_1 != '\0') && (cVar3 = FUN_005e89b0(), cVar3 != '\0')) {
    FUN_005e02e0(0);
    uVar4 = FUN_00468260();
    cVar2 = '\x01';
    iVar6 = FUN_0056a300(uVar4);
    if ((iVar6 == 4) && (iVar6 = FUN_0052ed50(5,0), iVar6 != 0)) {
      _DAT_00b131f8 = 2;
      iVar6 = FUN_0052f790(*(undefined4 *)(in_ECX + 0x60),DAT_00b333c4,iVar6,0);
      _DAT_00b131f8 = 0xffffffff;
      if (iVar6 != 0) {
        cVar2 = '\0';
      }
    }
  }
  FUN_0058ceb0(0xfa1,(float)(byte)(cVar2 + 1));
  if (param_1 == '\0') {
LAB_0059e443:
    _param_1 = 1;
  }
  else {
    cVar2 = FUN_005e8a20();
    _param_1 = 2;
    if (cVar2 == '\0') goto LAB_0059e443;
  }
  FUN_0058ceb0(0xfa1,(float)_param_1);
  if (cVar5 == '\0') {
LAB_0059e474:
    _param_1 = 1;
  }
  else {
    cVar2 = FUN_005e8890();
    _param_1 = 2;
    if (cVar2 == '\0') goto LAB_0059e474;
  }
  FUN_0058ceb0(0xfa1,(float)_param_1);
  if (cVar5 != '\0') {
    uVar7 = 0x800;
    FUN_005e02e0(0);
    cVar5 = FUN_00468240(uVar7);
    _param_1 = 2;
    if (cVar5 != '\0') goto LAB_0059e4be;
  }
  _param_1 = 1;
LAB_0059e4be:
  FUN_0058ceb0(0xfa1,(float)_param_1);
  return;
}



void FUN_0059e4e0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  *in_ECX = &PTR_FUN_00a6b88c;
  in_ECX[0x23] = 0;
  *(undefined2 *)(in_ECX + 0x24) = 0;
  *(undefined2 *)((int)in_ECX + 0x92) = 0;
  in_ECX[0x21] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1e] = 0;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  *(undefined1 *)(in_ECX + 0x22) = 0;
  *(undefined1 *)(in_ECX + 0x25) = 0;
  *(undefined1 *)((int)in_ECX + 0x95) = 0;
  *(undefined1 *)((int)in_ECX + 0x96) = 0;
  in_ECX[0x1b] = 1;
  in_ECX[0x20] = 1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059e580(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int iVar2;
  undefined4 uVar3;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c00f6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a6b88c;
  local_4 = 1;
  if (((DAT_00b33398 != (char *)0x0) && (*DAT_00b33398 == '\0')) && (DAT_00b33398[1] == '\0')) {
    FUN_00411160(_DAT_00b0313c,0);
    if (DAT_00b333c4 != 0) {
      FUN_0066c580(*(char *)(in_ECX + 0x1f) == '\0');
    }
  }
  iVar2 = in_ECX[5];
  if (iVar2 != 0) {
    uVar3 = 0;
    FUN_00582160(0,1,iVar2,0,uVar1);
    FUN_0057cfe0(iVar2,uVar3);
  }
  FUN_00401f20(in_ECX[0x23]);
  in_ECX[0x23] = 0;
  *(undefined2 *)((int)in_ECX + 0x92) = 0;
  *(undefined2 *)(in_ECX + 0x24) = 0;
  local_4 = 0xffffffff;
  FUN_00585330();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0059e660(byte param_1)

{
  FUN_0059e580();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



undefined4 FUN_0059e680(void)

{
  char *_Str2;
  float fVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  int local_34;
  int local_30;
  int iStack_2c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined4 uStack_20;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  int local_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_009c0130;
  local_14 = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffb8;
  *unaff_FS_OFFSET = (int)&local_14;
  FUN_006b8660(uVar3);
  local_30 = *(int *)(*(int *)(in_ECX + 0x28) + 0x34);
  while (local_30 != 0) {
    puVar4 = (undefined4 *)FUN_007aa860(&local_30);
    if (puVar4 != (undefined4 *)0x0) {
      (**(code **)*puVar4)(1);
    }
  }
  local_34 = 0;
  cVar2 = FUN_006b85c0(1);
  if (cVar2 == '\0') {
    uVar5 = 0x3f800000;
  }
  else {
    uVar5 = 0x40000000;
  }
  FUN_0058ceb0(0xfa1,uVar5);
  if (*(char *)(in_ECX + 0x88) != '\0') {
    *(undefined1 *)(in_ECX + 100) = 0;
    FUN_0059dd40();
    *unaff_FS_OFFSET = local_14;
    return 1;
  }
  uVar5 = *(undefined4 *)(in_ECX + 0x28);
  local_30 = 0;
  if (cVar2 != '\0') {
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_22 = 0;
    do {
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_1a = 0;
      FUN_004028d0("topic_template",0);
      iStack_c = 0;
      uVar5 = FUN_00585410(*(undefined4 *)(in_ECX + 0x28),uStack_20,uVar5);
      puVar4 = (undefined4 *)FUN_006b8650();
      FUN_004028d0(*puVar4,0);
      iStack_c._0_1_ = 1;
      FUN_004028d0(uStack_28,0);
      iStack_c = (uint)iStack_c._1_3_ << 8;
      FUN_00401f20(uStack_28);
      uStack_28 = 0;
      uStack_22 = 0;
      uStack_24 = 0;
      puVar4 = (undefined4 *)FUN_006b8650();
      FUN_0058ced0(0xfde,*puVar4);
      iStack_2c = local_34 + 0x65;
      FUN_0058ceb0(0xfa8,(float)iStack_2c);
      FUN_0058ceb0(0xfaa,(float)local_34);
      local_34 = local_34 + 1;
      if (local_30 == 0) {
        FUN_00582160(0,1);
        iVar6 = FUN_00582160(0,1);
        *(int *)(iVar6 + 0x8c) = *(int *)(iVar6 + 0x8c) + 1;
        iStack_2c = *(int *)(iVar6 + 0x8c);
        fVar1 = (float)iStack_2c;
        if (iStack_2c < 0) {
          fVar1 = fVar1 + 4.2949673e+09;
        }
        FUN_0058ceb0(0xff0,fVar1);
      }
      iVar6 = FUN_006b8650();
      if (*(char *)(iVar6 + 0x21) == '\0') {
        FUN_0058ceb0(0xfb0,0);
        fVar7 = (float10)FUN_00588bd0(0xfb5);
        FUN_0058ceb0(0xfcc,(float)fVar7);
        fVar7 = (float10)FUN_00588bd0(0xfb6);
        FUN_0058ceb0(0xfcd,(float)fVar7);
        fVar7 = (float10)FUN_00588bd0(0xfb7);
        FUN_0058ceb0(0xfce,(float)fVar7);
        puVar4 = (undefined4 *)FUN_006b8650();
        _Str2 = (char *)*puVar4;
        if ((_Str2 == (char *)0x0) || (*(char **)(in_ECX + 0x8c) == (char *)0x0)) {
          iVar6 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
        }
        else {
          iVar6 = __stricmp(*(char **)(in_ECX + 0x8c),_Str2);
        }
        if (iVar6 == 0) {
          FUN_00582160(0,1);
          iVar6 = FUN_00582160(0,1);
          *(int *)(iVar6 + 0x8c) = *(int *)(iVar6 + 0x8c) + 1;
          fVar1 = (float)*(int *)(iVar6 + 0x8c);
          if (*(int *)(iVar6 + 0x8c) < 0) {
            fVar1 = fVar1 + 4.2949673e+09;
          }
          FUN_0058ceb0(0xff0,fVar1);
        }
      }
      cVar2 = FUN_006b85f0();
      local_30 = local_30 + 1;
      iStack_c = 0xffffffff;
      FUN_00401f20(uStack_20);
      uStack_20 = 0;
      uStack_1a = 0;
      uStack_1c = 0;
    } while (cVar2 != '\0');
    if (local_30 != 0) goto LAB_0059e9bb;
  }
  FUN_0058ceb0(0xfa1,0x40000000);
LAB_0059e9bb:
  FUN_006b85c0(0);
  FUN_0058fba0(0);
  iVar6 = FUN_00582160(0,1);
  if (*(char *)(iVar6 + 0xb9) == '\0') {
    FUN_00582160(0,1);
    FUN_0057fd60();
  }
  *unaff_FS_OFFSET = local_14;
  return 0;
}



void FUN_0059ea10(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  puVar2 = (undefined4 *)FUN_006b8660();
  if (*(char *)(in_ECX + 0x96) != '\0') {
    *puVar2 = 0;
    FUN_0059e2b0(1);
  }
  uVar1 = FUN_006b92c0(param_1,param_2);
  *(undefined1 *)(in_ECX + 0x88) = uVar1;
  *(undefined1 *)(in_ECX + 0x96) = 0;
  FUN_0059e680();
  return;
}



void FUN_0059ea60(undefined4 param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  FUN_006b8660();
  uVar1 = FUN_006b93b0(*(undefined4 *)(in_ECX + 0x60),param_1);
  *(undefined1 *)(in_ECX + 0x88) = 0;
  FUN_0059e680();
  *(undefined1 *)(in_ECX + 0x88) = uVar1;
  return;
}



void FUN_0059eaa0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  FUN_0058ceb0(0xfa1,0x3f800000);
  if (param_1 != 0) {
    cVar1 = FUN_006b7ba0();
    if (cVar1 != '\0') {
      puVar2 = (undefined4 *)FUN_006b7c20();
      (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar2);
      *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
      *(undefined4 *)(in_ECX + 0x80) = 2;
      FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
      FUN_0058ced0(0xfde,*puVar2);
      FUN_0058ceb0(0xfa1,0x3f800000);
      return;
    }
    FUN_0058ceb0(0xfa1,0x40000000);
    FUN_0059e2b0(1);
    FUN_0059ea10(1,0);
  }
  return;
}



void FUN_0059eb90(void)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int in_ECX;
  
  FUN_0058ceb0(0xfa1,0x3f800000);
  piVar3 = (int *)FUN_006b8660();
  iVar4 = FUN_006b8650();
  if ((iVar4 != 0) && (puVar5 = (undefined4 *)FUN_006b85b0(), puVar5 != (undefined4 *)0x0)) {
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,puVar5);
    *(undefined4 *)(in_ECX + 0x84) = 0x40000000;
    *(undefined4 *)(in_ECX + 0x80) = 2;
    *piVar3 = (int)(piVar3 + 1);
    iVar6 = FUN_006b8650();
    while ((iVar6 != 0 && (iVar6 = FUN_006b8650(), iVar6 != iVar4))) {
      FUN_006b85f0();
      iVar6 = FUN_006b8650();
    }
    FUN_006b8560();
    iVar4 = FUN_006b85b0();
    while ((iVar4 != 0 && (puVar7 = (undefined4 *)FUN_006b85b0(), puVar7 != puVar5))) {
      FUN_006b8580();
      iVar4 = FUN_006b85b0();
    }
    FUN_0058ceb0(0xfa1,(float)(byte)((DAT_00b13200 != '\0') + 1));
    FUN_0058ced0(0xfde,*puVar5);
    FUN_006b8580();
    FUN_0058ceb0(0xfa1,0x3f800000);
    return;
  }
  FUN_0058ceb0(0xfa1,0x40000000);
  if ((iVar4 == 0) || (*(char *)(iVar4 + 8) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  FUN_0059e2b0(!bVar1);
  puVar5 = (undefined4 *)FUN_006b8660();
  if (*(char *)(in_ECX + 0x96) != '\0') {
    *puVar5 = 0;
    FUN_0059e2b0(1);
  }
  uVar2 = FUN_006b92c0(1,0);
  *(undefined1 *)(in_ECX + 0x88) = uVar2;
  *(undefined1 *)(in_ECX + 0x96) = 0;
  FUN_0059e680();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0059ed30(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  DAT_00b2d91c = 0;
  _DAT_00b46124 = 0;
  _DAT_00b46120 = 0;
  iVar2 = (**(code **)(*param_1 + 0x130))(0);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x130))(0);
    *(undefined1 *)(iVar2 + 0x112) = 1;
  }
  iVar2 = (**(code **)(*param_1 + 0x134))(0);
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*param_1 + 0x134))(0);
    *(undefined1 *)(iVar2 + 0x112) = 1;
  }
  FUN_005eae70();
  uVar8 = 1;
  (**(code **)(*DAT_00b333c4 + 0x234))(1);
  (**(code **)(*param_1 + 0x2f4))(DAT_00b333c4,1,0);
  iVar2 = FUN_00589b70(0x3f1);
  if (iVar2 == 0) {
    FUN_00582160(0,1);
    fVar6 = (float10)thunk_FUN_00584980();
    fVar7 = (float)fVar6;
    iVar2 = FUN_00590420("Data\\Menus\\Dialog\\dialog_menu.xml");
    piVar3 = (int *)FUN_005898f0();
    if (piVar3 != (int *)0x0) {
      iVar4 = (**(code **)(*piVar3 + 0x34))();
      if (iVar4 == 0x3f1) {
        FUN_005a8fa0();
        uVar5 = FUN_009832e6(iVar2,0,&PTR_PTR_00b13240,&PTR_PTR_00b13a74,0);
        FUN_00584880(uVar5);
        cVar1 = FUN_0059d8a0();
        if (cVar1 == '\0') {
          FUN_004a7a60(
                      "Dialogue Menu Creation Failed... Are your menu and art resources up to date?"
                      );
          return 0;
        }
        fVar6 = (float10)FUN_00588bd0(0xfa5);
        if ((fVar6 == (float10)6006.0) ||
           (fVar6 = (float10)FUN_00588bd0(0xfa5), fVar6 == (float10)102.0)) {
          FUN_0058ceb0(0xfab,fVar7);
        }
        piVar3[0x1a] = 0;
        piVar3[0x18] = (int)param_1;
        *(undefined1 *)(piVar3 + 0x19) = 1;
        uVar5 = FUN_004da2a0();
        FUN_0058ced0(0xfb2,uVar5);
        *(char *)(piVar3 + 0x1f) = (char)DAT_00b333c4[0x162];
        FUN_0066c6f0(param_1,0,0);
        FUN_00585190(0);
        FUN_0058ceb0(0xfa1,0x40000000);
        FUN_0059ea60(uVar8);
        FUN_0058ceb0(0xfa1,0x3f800000);
        FUN_006b8660();
        iVar4 = FUN_004b2460();
        if ((iVar4 == 0) || (cVar1 = FUN_006b8560(), cVar1 == '\0')) {
          cVar1 = FUN_0059ea10(1,0);
          if (cVar1 != '\0') {
            return 0;
          }
        }
        else {
          FUN_0059eb90();
        }
        iVar4 = FUN_00589b70(0x3ed);
        if (iVar4 != 0) {
          FUN_005898f0();
          FUN_00584740();
        }
        FUN_0059e2b0(1);
        FUN_00585190(0);
        fVar6 = (float10)FUN_00572ea0(2);
        if ((float10)0.0 < fVar6) {
          FUN_00440af0(0,0,0);
          FUN_00572ec0(2,0);
        }
        FUN_00578cf0(0);
        return iVar2;
      }
      if (piVar3[1] != 0) {
        (**(code **)*piVar3)(1);
      }
    }
    return 0;
  }
  return iVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059f640(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  int in_ECX;
  float10 fVar6;
  undefined4 uVar7;
  float fVar8;
  
  iVar2 = (**(code **)(**(int **)(*(int *)(in_ECX + 0x60) + 0x58) + 0x33c))(0);
  iVar3 = FUN_00578fe0();
  if (((((iVar3 != 0x3f1) && (iVar3 != 0x3f0)) && (iVar3 != 0x40d)) &&
      ((iVar3 != 0x404 && (iVar3 != 0x40b)))) &&
     ((iVar3 != 0x419 && (-1 < *(int *)(in_ECX + 0x6c))))) {
    if (iVar2 == 0) {
      return;
    }
    if (DAT_00b3b298 != '\0') {
      return;
    }
    FUN_006b7220();
    DAT_00b3b298 = 1;
    return;
  }
  if ((*(int *)(in_ECX + 0x44) != 0) && (*(int *)(in_ECX + 0x48) != 0)) {
    FUN_00588bd0(0xfb0);
    iVar3 = FUN_009828c0();
    if (iVar3 < 1) {
      uVar7 = 0x3f800000;
    }
    else {
      uVar7 = 0x40000000;
    }
    FUN_0058ceb0(0xfa1,uVar7);
  }
  if ((iVar2 != 0) && (DAT_00b3b298 != '\0')) {
    FUN_006b7190(0);
    DAT_00b3b298 = '\0';
  }
  if (*(int **)(in_ECX + 0x60) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x60) + 0x304))(0,0);
    FUN_0066b710(0);
  }
  if (*(int *)(in_ECX + 0x6c) != 0) {
    *(float *)(in_ECX + 0x68) = *(float *)(in_ECX + 0x68) + _DAT_00b33e9c;
    fVar6 = (float10)FUN_00588bd0(0xfb0);
    if (*(int *)(in_ECX + 0x6c) < 0) {
      fVar6 = (float10)FUN_00588bd0(0xfb1);
    }
    fVar8 = (float)fVar6;
    if (fVar8 < 0.0 != (fVar8 == 0.0)) {
      fVar8 = 0.001;
    }
    _DAT_00b13fcc = *(float *)(in_ECX + 0x68) / fVar8;
    if (1.0 <= _DAT_00b13fcc) {
      _DAT_00b13fcc = 1.0;
    }
    if (*(int *)(in_ECX + 0x6c) < 0) {
      _DAT_00b13fcc = 1.0 - _DAT_00b13fcc;
    }
    if (fVar8 < *(float *)(in_ECX + 0x68)) {
      *(undefined4 *)(in_ECX + 0x6c) = 0;
    }
  }
  cVar1 = FUN_005e6c10();
  if (cVar1 == '\0') {
    uVar7 = *(undefined4 *)(in_ECX + 0x60);
  }
  else {
    uVar7 = *(undefined4 *)(in_ECX + 0x60);
  }
  FUN_0066c6f0(uVar7,_DAT_00b13fcc,cVar1 == '\0');
  if (*(int *)(in_ECX + 0x60) == 0) {
    return;
  }
  fVar6 = (float10)FUN_00588bd0(0xfa1);
  if (fVar6 != (float10)1.0) {
    return;
  }
  if ((*(int *)(in_ECX + 0x80) != 3) ||
     (piVar4 = (int *)FUN_009832e6(*(undefined4 *)(*(int *)(in_ECX + 0x60) + 0x58),0,
                                   &PTR_PTR_00b05908,&PTR_PTR_00b05924,0), piVar4 == (int *)0x0))
  goto LAB_0059f8fa;
  iVar2 = (**(code **)(*piVar4 + 0x33c))(0);
  if (iVar2 == 0) {
LAB_0059f8b2:
    iVar2 = (**(code **)(*piVar4 + 0x33c))(0);
    if (iVar2 != 0) goto LAB_0059f8fa;
    *(undefined4 *)(in_ECX + 0x80) = 4;
    fVar6 = (float10)(**(code **)(*piVar4 + 0x208))();
    pfVar5 = (float *)FUN_00403c00();
    fVar8 = *pfVar5 + (float)fVar6;
  }
  else {
    (**(code **)(*piVar4 + 0x33c))(0);
    cVar1 = FUN_006b7260();
    if (cVar1 != '\0') goto LAB_0059f8b2;
    *(undefined4 *)(in_ECX + 0x80) = 4;
    pfVar5 = (float *)FUN_00403c00();
    fVar8 = *pfVar5;
  }
  *(float *)(in_ECX + 0x84) = fVar8 + 1.0;
LAB_0059f8fa:
  if (*(int *)(in_ECX + 0x80) != 4) {
    if ((*(int *)(in_ECX + 0x80) == 2) &&
       (fVar8 = *(float *)(in_ECX + 0x84) - _DAT_00b33e9c, *(float *)(in_ECX + 0x84) = fVar8,
       fVar8 <= 0.0)) {
      *(undefined4 *)(in_ECX + 0x80) = 3;
    }
    return;
  }
  *(undefined4 *)(in_ECX + 0x80) = 1;
  (**(code **)(**(int **)(*(int *)(in_ECX + 0x60) + 0x58) + 0x344))(0);
  FUN_0059eb90();
  return;
}



void FUN_0059f9b0(void)

{
  undefined4 *in_ECX;
  
  FUN_00584640();
  in_ECX[0x1d] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
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
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined1 *)((int)in_ECX + 0x71) = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x25] = 0;
  *in_ECX = &PTR_FUN_00a6b92c;
  *(undefined1 *)(in_ECX + 0x1c) = 0xff;
  return;
}



undefined4 FUN_0059fa20(undefined4 param_1)

{
  int in_ECX;
  
  switch(param_1) {
  case 0xe:
    return *(undefined4 *)(in_ECX + 0x44);
  case 0xf:
    return *(undefined4 *)(in_ECX + 0x48);
  case 0x10:
    return *(undefined4 *)(in_ECX + 0x50);
  case 0x11:
    return *(undefined4 *)(in_ECX + 0x54);
  case 0x12:
    return *(undefined4 *)(in_ECX + 0x58);
  case 0x13:
    return *(undefined4 *)(in_ECX + 0x5c);
  default:
    return 0;
  case 0x22:
    return *(undefined4 *)(in_ECX + 0x40);
  case 0x24:
    return *(undefined4 *)(in_ECX + 0x4c);
  }
}



void FUN_0059fbf0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x78) != 0) {
    FUN_00414b90();
    return;
  }
  if (*(int *)(in_ECX + 0x7c) != 0) {
    FUN_00414b90();
    return;
  }
  return;
}



void FUN_0059fc30(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a6b92c;
  FUN_00585330();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0059fc60(void)

{
  int iVar1;
  
  iVar1 = FUN_00589b70(0x413);
  if ((iVar1 != 0) && (iVar1 = FUN_005898f0(), iVar1 != 0)) {
    if (*(int *)(iVar1 + 0x78) == 0) {
      if (*(int *)(iVar1 + 0x7c) != 0) {
        FUN_005a2160();
        FUN_005a2520();
      }
    }
    else {
      FUN_005d8180();
      FUN_005d8370();
    }
    FUN_0058ceb0(0x1772,0x40000000);
    FUN_00584740();
    return;
  }
  return;
}



void FUN_0059fcd0(int param_1)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  float10 fVar3;
  
  FUN_00582160(0,1);
  if (((param_1 == 0x11) || (param_1 == 0x13)) || (param_1 == 0xf)) {
    iVar1 = FUN_0059fa20(param_1);
    if (iVar1 != 0) {
      FUN_0057d7a0();
      FUN_009828c0();
      fVar2 = (float10)FUN_0059fa20(param_1);
      fVar3 = (float10)FUN_00588c50();
      *(float *)(in_ECX + 0x74) = (float)((float10)(double)fVar2 - fVar3);
    }
  }
  return;
}



void FUN_0059fd50(int param_1)

{
  int iVar1;
  int extraout_EDX;
  
  FUN_00582160(0,1);
  if (((param_1 == 0x11) || (param_1 == 0x13)) || (param_1 == 0xf)) {
    FUN_0059fa20(param_1);
    FUN_0059fa20(extraout_EDX + -1);
    FUN_0057d7a0();
    FUN_009828c0();
    FUN_00588c50();
    FUN_00588bd0(0xfb6);
    FUN_0058ceb0(0xfb7,0xce6e6b28);
    iVar1 = FUN_009828c0();
    FUN_0058ceb0(0xfb7,(float)iVar1);
    FUN_0058ceb0(0xfb7,0);
  }
  return;
}



void FUN_0059fe30(int param_1)

{
  int in_ECX;
  
  if (((*(int *)(in_ECX + 0x78) != 0) || (*(int *)(in_ECX + 0x7c) != 0)) &&
     (FUN_00414bc0(param_1), param_1 != 0)) {
    FUN_00413bb0();
    FUN_00401f20(param_1);
  }
  return;
}



void FUN_0059fe70(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_00589b70(0x411);
  if (iVar1 == 0) {
    iVar1 = FUN_00589b70(0x412);
    if (iVar1 != 0) {
      iVar1 = FUN_005898f0();
      if (iVar1 != 0) {
        *(int *)(in_ECX + 0x7c) = iVar1;
      }
    }
  }
  else {
    iVar1 = FUN_005898f0();
    if (iVar1 != 0) {
      *(int *)(in_ECX + 0x78) = iVar1;
      return;
    }
  }
  return;
}



void FUN_0059fec0(int param_1)

{
  int in_ECX;
  
  FUN_00413410(*(undefined4 *)(in_ECX + 0x8c));
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(in_ECX + 0x90);
  FUN_004133e0(*(undefined4 *)(in_ECX + 0x88));
  FUN_00413340(*(undefined4 *)(in_ECX + 0x84));
  FUN_00413390(*(undefined4 *)(in_ECX + 0x80));
  return;
}



undefined4 FUN_0059ff10(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = (**(code **)(*in_ECX + 0x34))();
  iVar2 = FUN_00578fe0();
  if ((iVar2 == iVar1) && (param_1 == 9)) {
    iVar1 = FUN_00582160(0,0);
    if (*(int *)(iVar1 + 0x88) == in_ECX[0xf]) {
      return 1;
    }
  }
  return 0;
}


