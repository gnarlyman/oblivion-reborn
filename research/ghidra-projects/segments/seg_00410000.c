
void FUN_00410110(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x40) + uVar2 * 4) != 0) {
          piVar1 = *(int **)(*(int *)(param_1 + 0x40) + uVar2 * 4);
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0x20));
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    FUN_00401e40(param_1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_00410160(char *param_1,char param_2,char param_3,char param_4)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  int iVar4;
  DWORD DVar5;
  int *in_ECX;
  uint uVar6;
  undefined1 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_140 [3];
  char local_13d;
  char *local_13c;
  undefined1 local_138 [20];
  int local_124;
  char cStack_109;
  char local_108 [260];
  uint local_4;
  
  local_4 = DAT_00b30aac ^ (uint)auStack_140;
  builtin_strncpy(local_108,"Data\\Vid",8);
  builtin_strncpy(local_108 + 8,"eo\\",4);
  local_13c = param_1;
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar9 = &cStack_109;
  do {
    pcVar8 = pcVar9 + 1;
    pcVar9 = pcVar9 + 1;
  } while (*pcVar8 != '\0');
  pcVar8 = param_1;
  for (uVar6 = (uint)((int)pcVar3 - (int)param_1) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
    pcVar8 = pcVar8 + 4;
    pcVar9 = pcVar9 + 4;
  }
  for (uVar6 = (int)pcVar3 - (int)param_1 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
    *pcVar9 = *pcVar8;
    pcVar8 = pcVar8 + 1;
    pcVar9 = pcVar9 + 1;
  }
  uVar6 = 0;
  if ((param_3 != '\0') || (param_4 != '\0')) {
    iVar4 = __stat64i32(local_108,local_138);
    if ((iVar4 != -1) && ((local_124 <= DAT_00b030bc || (param_4 != '\0')))) {
      uVar6 = 0x2000;
    }
  }
  local_13d = '\0';
  uVar7 = 1;
  if (DAT_00b33398 != 0) {
    DVar2 = *(DWORD *)(DAT_00b33398 + 0x10);
    DVar5 = GetCurrentThreadId();
    if (DVar5 != DVar2) {
      local_13d = '\x01';
      SuspendThread(*(HANDLE *)(DAT_00b33398 + 0x14));
      uVar6 = uVar6 | 0x8000000;
    }
  }
  iVar4 = _BinkOpen_8(local_108,uVar6);
  *in_ECX = iVar4;
  if (iVar4 == 0) {
    if (param_2 == '\0') {
      FUN_004a7a60("Could not open %s for playback.",local_13c);
    }
    in_ECX[8] = 0;
    uVar7 = 0;
  }
  if (local_13d != '\0') {
    ResumeThread(*(HANDLE *)(DAT_00b33398 + 0x14));
  }
  return uVar7;
}



void FUN_004102c0(void)

{
  int *in_ECX;
  
  if (*in_ECX != 0) {
    _BinkClose_4(*in_ECX);
  }
  if (in_ECX[2] != 0) {
    FUN_00410110(in_ECX[2]);
  }
  *in_ECX = 0;
  in_ECX[5] = 0x3f800000;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[6] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = 0;
  return;
}



void FUN_00410340(void)

{
  if (DAT_00b33428 != (undefined4 *)0x0) {
    if (DAT_00b3342c != (undefined4 *)0x0) {
      FUN_004a7a60(
                  "Trying to pause a movie while another movie is already paused.  This is not currently supported."
                  );
    }
    _BinkPause_8(*DAT_00b33428,1);
    DAT_00b3342c = DAT_00b33428;
    DAT_00b33428 = (undefined4 *)0x0;
  }
  return;
}



undefined4 FUN_00410390(void)

{
  int iVar1;
  int unaff_ESI;
  char unaff_retaddr;
  tagMSG local_1c;
  
  iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  while (iVar1 != 0) {
    TranslateMessage(&local_1c);
    DispatchMessageA(&local_1c);
    iVar1 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
  }
  iVar1 = (**(code **)(**(int **)(DAT_00b3f928 + 0x280) + 0xc))(*(int **)(DAT_00b3f928 + 0x280));
  if (((-1 < iVar1) && (DAT_00b33426 == '\0')) &&
     ((iVar1 = FUN_00582160(0,1), iVar1 == 0 ||
      (((DAT_00b33428 == 0 || (*(int *)(DAT_00b33428 + 0x20) == 2)) ||
       (iVar1 = FUN_00589b70(0x3e9), iVar1 == 0)))))) {
    if ((unaff_retaddr != '\0') || (DAT_00b33425 != '\0')) {
      FUN_004046a0();
      iVar1 = FUN_00403520(5,1);
      if ((iVar1 != 0) || (iVar1 = FUN_00403520(0x1d,1), iVar1 != 0)) {
        if ((DAT_00b33434 != (HANDLE)0x0) &&
           (GetExitCodeThread(DAT_00b33434,(LPDWORD)&stack0xffffffdc), unaff_ESI == 0x103)) {
          DAT_00b33426 = '\x01';
        }
        FUN_004046a0();
        return 0;
      }
    }
    return 1;
  }
  return 0;
}



undefined4 FUN_004104c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int *in_ECX;
  int iVar9;
  
  cVar6 = param_4;
  if ((*in_ECX != 0) || (cVar7 = FUN_00410160(param_1,param_2,param_3,0), cVar7 != '\0')) {
    piVar1 = (int *)*in_ECX;
    in_ECX[1] = *(int *)(DAT_00b350d8 + 0x280);
    if (param_4 == '\0') {
      iVar9 = piVar1[1];
      iVar8 = piVar1[1];
      iVar2 = DAT_00b06c50;
    }
    else {
      iVar9 = *piVar1;
      iVar8 = *piVar1;
      iVar2 = DAT_00b06c4c;
    }
    fVar3 = (float)iVar8;
    if (iVar9 < 0) {
      fVar3 = fVar3 + 4.2949673e+09;
    }
    fVar3 = (float)iVar2 / fVar3;
    in_ECX[5] = (int)fVar3;
    fVar4 = 0.0;
    if (param_4 == '\0') {
      fVar5 = (float)*piVar1;
      if (*piVar1 < 0) {
        fVar5 = fVar5 + 4.2949673e+09;
      }
      _param_4 = ((float)DAT_00b06c4c - fVar5 * fVar3) * 0.5;
    }
    else {
      _param_4 = 0.0;
    }
    in_ECX[6] = (int)_param_4;
    if (cVar6 != '\0') {
      fVar4 = (float)piVar1[1];
      if (piVar1[1] < 0) {
        fVar4 = fVar4 + 4.2949673e+09;
      }
      fVar4 = ((float)DAT_00b06c50 - fVar4 * fVar3) * 0.5;
    }
    in_ECX[7] = (int)fVar4;
    iVar8 = FUN_0040fee0(in_ECX[1],*piVar1,piVar1[1],4,0x100,0x16);
    in_ECX[2] = iVar8;
    if (iVar8 != 0) {
      return 1;
    }
    if ((char)param_2 == '\0') {
      FUN_004a7a60("Could not allocate textures for %s playback.",param_1);
    }
    in_ECX[8] = 0;
  }
  return 0;
}



undefined4 FUN_004105f0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  
  in_ECX[8] = 2;
  *(undefined1 *)(in_ECX + 9) = 1;
  if (*in_ECX == 0) {
    cVar5 = FUN_00410160(param_1,1,param_2,0);
    if (cVar5 == '\0') goto LAB_004106a0;
  }
  in_ECX[1] = *(int *)(DAT_00b350d8 + 0x280);
  fVar3 = (float)DAT_00b06c50;
  piVar1 = (int *)*in_ECX;
  fVar2 = (float)piVar1[1];
  if (piVar1[1] < 0) {
    fVar2 = fVar2 + 4.2949673e+09;
  }
  in_ECX[5] = (int)(fVar3 / fVar2);
  fVar4 = (float)*piVar1;
  if (*piVar1 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  in_ECX[6] = (int)(((float)DAT_00b06c4c - fVar4 * (fVar3 / fVar2)) * 0.5);
  in_ECX[7] = 0;
  iVar6 = FUN_0040fee0(in_ECX[1],*piVar1,piVar1[1],4,0x100,0x16);
  in_ECX[2] = iVar6;
  if (iVar6 != 0) {
    *(undefined1 *)(in_ECX + 9) = 0;
    return 1;
  }
  in_ECX[8] = 0;
LAB_004106a0:
  *(undefined1 *)(in_ECX + 9) = 0;
  return 0;
}



undefined1 FUN_004106c0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int *in_ECX;
  
  cVar1 = FUN_00410390(param_1);
  if (cVar1 == '\0') {
    return 0;
  }
  if (DAT_00b33424 == '\0') {
    iVar2 = _BinkWait_4(*in_ECX);
    if (iVar2 == 0) {
      cVar1 = FUN_0040fca0(0);
      if (cVar1 != '\0') {
        in_ECX[4] = in_ECX[4] + 1;
        FUN_0040fec0("Bink playback: Skipped frame #%i.  Total skipped: %i",in_ECX[3],in_ECX[4]);
      }
      _BinkNextFrame_4(*in_ECX);
      in_ECX[3] = in_ECX[3] + 1;
    }
    else if (in_ECX[8] != 2) {
      Sleep(1);
      return 1;
    }
  }
  iVar2 = DAT_00b350d8;
  cVar1 = '\0';
  (**(code **)(*(int *)in_ECX[1] + 0xac))((int *)in_ECX[1],0,0,1,0xff000000,0x3f800000,0);
  if (*(int *)(iVar2 + 0x200) != 1) {
    (**(code **)(*(int *)in_ECX[1] + 0xa4))((int *)in_ECX[1]);
  }
  FUN_0040fa20(in_ECX[2],in_ECX[6],in_ECX[7],in_ECX[5],in_ECX[5]);
  if (*(int *)(iVar2 + 0x200) != 1) {
    (**(code **)(*(int *)in_ECX[1] + 0xa8))((int *)in_ECX[1]);
  }
  if (in_ECX[8] != 2) {
    (**(code **)(*(int *)in_ECX[1] + 0x44))((int *)in_ECX[1],0,0,0,0);
  }
  FUN_00768960(0x104);
  if ((*(uint *)(*in_ECX + 8) <= (uint)in_ECX[3]) && (cVar1 == '\0')) {
    return 0;
  }
  return 1;
}



uint FUN_00410810(undefined4 param_1,undefined4 param_2)

{
  uint in_EAX;
  uint uVar1;
  
  if ((DAT_00b33428 != 0) && (*(int *)(DAT_00b33428 + 0x20) != 0)) {
    uVar1 = FUN_004106c0(param_1,param_2);
    return uVar1;
  }
  return in_EAX & 0xffffff00;
}



bool FUN_00410a70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int *in_ECX;
  
  in_ECX[8] = 1;
  iVar2 = *(int *)(DAT_00b33398 + 0x24);
  if (iVar2 != 0) {
    FUN_006a9b40();
  }
  *(undefined1 *)(in_ECX + 9) = 1;
  cVar4 = FUN_004104c0(param_1,param_3,param_5,param_6);
  *(undefined1 *)(in_ECX + 9) = 0;
  if (cVar4 != '\0') {
    do {
      cVar4 = FUN_004106c0(param_2,param_4);
    } while (cVar4 != '\0');
    uVar3 = in_ECX[3];
    uVar1 = *(uint *)(*in_ECX + 8);
    FUN_004102c0();
    if (iVar2 != 0) {
      FUN_006a9c00();
      FUN_006a9c00();
    }
    return uVar1 <= uVar3;
  }
  return false;
}



void FUN_00410b00(void)

{
  int *piVar1;
  
  piVar1 = DAT_00b33428;
  if (DAT_00b33428 != (int *)0x0) {
    if (*DAT_00b33428 != 0) {
      _BinkClose_4(*DAT_00b33428);
    }
    if (piVar1[2] != 0) {
      FUN_00410110(piVar1[2]);
    }
    piVar1[5] = 0x3f800000;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[6] = 0;
    piVar1[2] = 0;
    piVar1[7] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[8] = 0;
    *(undefined1 *)(piVar1 + 9) = 0;
    FUN_00401f20(piVar1);
    DAT_00b33428 = (int *)0x0;
  }
  piVar1 = DAT_00b3342c;
  if (DAT_00b3342c != (int *)0x0) {
    DAT_00b33428 = DAT_00b3342c;
    DAT_00b3342c = (int *)0x0;
    _BinkPause_8(*piVar1,0);
  }
  return;
}



undefined1
FUN_00410ba0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  
  if (param_7 == '\0') {
    FUN_00410340();
    puVar1 = DAT_00b33440;
    if ((DAT_00b33431 == '\0') || (DAT_00b33440 == (undefined4 *)0x0)) {
      DAT_00b33428 = (undefined4 *)FUN_00401f00(0x28);
      if (DAT_00b33428 == (undefined4 *)0x0) {
        DAT_00b33428 = (undefined4 *)0x0;
      }
      else {
        *DAT_00b33428 = 0;
        DAT_00b33428[5] = 0x3f800000;
        DAT_00b33428[1] = 0;
        DAT_00b33428[2] = 0;
        DAT_00b33428[6] = 0;
        DAT_00b33428[3] = 0;
        DAT_00b33428[7] = 0;
        DAT_00b33428[4] = 0;
        DAT_00b33428[8] = 0;
        *(undefined1 *)(DAT_00b33428 + 9) = 0;
      }
    }
    else {
      DAT_00b33440 = (undefined4 *)0x0;
      DAT_00b33431 = '\0';
      DAT_00b33428 = puVar1;
    }
  }
  uVar2 = FUN_00410a70(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_00410b00();
  return uVar2;
}



uint FUN_00410c40(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if (DAT_00b33428 != (undefined4 *)0x0) {
    if (DAT_00b3342c != (undefined4 *)0x0) {
      FUN_004a7a60(
                  "Trying to pause a movie while another movie is already paused.  This is not currently supported."
                  );
    }
    _BinkPause_8(*DAT_00b33428,1);
    DAT_00b3342c = DAT_00b33428;
    DAT_00b33428 = (undefined4 *)0x0;
  }
  puVar1 = DAT_00b33440;
  if ((DAT_00b33431 == '\0') || (DAT_00b33440 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)FUN_00401f00(0x28);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = 0;
      puVar1[5] = 0x3f800000;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[6] = 0;
      puVar1[3] = 0;
      puVar1[7] = 0;
      puVar1[4] = 0;
      puVar1[8] = 0;
      *(undefined1 *)(puVar1 + 9) = 0;
    }
  }
  else {
    DAT_00b33440 = (undefined4 *)0x0;
    DAT_00b33431 = '\0';
  }
  DAT_00b33428 = puVar1;
  uVar2 = FUN_004105f0(param_1,param_2);
  if ((char)uVar2 == '\0') {
    uVar2 = FUN_00410b00();
    uVar2 = uVar2 & 0xffffff00;
  }
  return uVar2;
}



float10 FUN_00410eb0(float param_1,float param_2,float param_3,float param_4,float param_5)

{
  return (float10)(((param_5 - param_3) / (param_4 - param_3)) * (param_2 - param_1) + param_1);
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00410ee0(void)

{
  char cVar1;
  float *pfVar2;
  int in_ECX;
  float10 fVar3;
  float local_4;
  
  if (*(char *)(in_ECX + 0xe8) != '\0') {
    return (float10)20480.0;
  }
  cVar1 = FUN_004e9f40();
  if (cVar1 == '\0') {
    local_4 = _DAT_00b03124;
    if (((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x34) != 0)) &&
       (*(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 0xdc) == 1)) {
      fVar3 = (float10)FUN_004c9a60();
      local_4 = (float)fVar3;
      if ((local_4 <= 0.0) || (pfVar2 = (float *)FUN_00403c00(), *pfVar2 < local_4)) {
        pfVar2 = (float *)FUN_00403c00();
        local_4 = *pfVar2;
      }
    }
    return (float10)(((_DAT_00b0312c - 0.0) / 1.0) * (local_4 - _DAT_00b0311c) + _DAT_00b0311c);
  }
  if (((DAT_00b333a0 != 0) && (*(int *)(DAT_00b333a0 + 0x34) != 0)) &&
     (*(int *)(*(int *)(DAT_00b333a0 + 0x5c) + 0xdc) == 1)) {
    fVar3 = (float10)FUN_004c9a60();
    fVar3 = (float10)(float)fVar3;
    if ((fVar3 < (float10)0 == (fVar3 == (float10)0)) && (fVar3 <= (float10)283840.0)) {
      return fVar3;
    }
    return (float10)(float)(float10)283840.0;
  }
  return (float10)283840.0;
}



void FUN_00410ff0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009aaca6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a31bd4;
  local_4 = 1;
  FUN_0040fec0("SceneGraph \'%s\' Released.",in_ECX[2],uVar2);
  puVar1 = (undefined4 *)in_ECX[0x37];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[0x37] = 0;
  }
  if ((undefined4 *)in_ECX[0x39] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x39])(1);
  }
  puVar1 = (undefined4 *)in_ECX[0x38];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00401f20(*puVar1);
    FUN_00401f20(puVar1);
  }
  puVar1 = (undefined4 *)in_ECX[0x37];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  local_4 = 0xffffffff;
  FUN_0070b810();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00411100(void)

{
  int in_ECX;
  int iVar1;
  int *piVar2;
  
  if (*(short *)(in_ECX + 0xb6) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(in_ECX + 0xb0);
  }
  if (*(int *)(*(int *)(in_ECX + 0xdc) + 0x1c) != iVar1) {
    if (*(short *)(in_ECX + 0xb6) == 0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = (int *)**(undefined4 **)(in_ECX + 0xb0);
    }
    (**(code **)(*piVar2 + 0x84))(*(int *)(in_ECX + 0xdc),1);
    FUN_00707370(0,1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411160(float param_1,char param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int in_ECX;
  float10 fVar4;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  
  if ((param_2 == '\0') && (param_1 == *(float *)(in_ECX + 0xec))) {
    return;
  }
  *(float *)(in_ECX + 0xec) = param_1;
  FUN_0070de60(0);
  fVar4 = (float10)FUN_00410ee0();
  local_8 = (float)fVar4;
  local_c = _DAT_00b03134;
  *(float *)(*(int *)(in_ECX + 0xdc) + 0x10c) = local_8 / _DAT_00b03134;
  fVar2 = (float)DAT_00b06c50 / (float)DAT_00b06c4c;
  if (*(char *)(in_ECX + 0xe8) == '\0') {
    fVar3 = 0.75 / fVar2;
    fVar4 = (float10)FUN_00983af0();
    fVar1 = (float)fVar4;
    local_1c = fVar3 * -fVar1;
    local_18 = fVar1 * fVar3;
    local_10 = fVar3 * fVar2 * -fVar1;
    local_14 = fVar1 * fVar2 * fVar3;
  }
  else {
    fVar4 = (float10)FUN_00983af0();
    local_18 = (float)fVar4;
    local_1c = -local_18;
    local_10 = fVar2 * local_1c;
    local_14 = local_18 * fVar2;
  }
  FUN_0070c190(&local_1c);
  FUN_00707370(0,1);
  *(float *)(*(int *)(in_ECX + 0xdc) + 0x120) = param_1 / _DAT_00b0313c;
  return;
}



void FUN_004112e0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xdc);
  *(undefined4 *)(iVar1 + 0x110) = 0;
  *(undefined4 *)(iVar1 + 0x114) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x118) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x11c) = 0;
  FUN_00411160(*(undefined4 *)(in_ECX + 0xec),1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00411330(void)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *unaff_FS_OFFSET;
  float10 fVar7;
  float local_30;
  undefined4 local_28 [5];
  float local_14;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aacde;
  local_c = *unaff_FS_OFFSET;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xffffffc4;
  *unaff_FS_OFFSET = (int)&local_c;
  if (DAT_00b03144 != '\0') {
    if ((_DAT_00b33450 & 1) == 0) {
      _DAT_00b33450 = _DAT_00b33450 | 1;
      local_4 = 0;
      fVar7 = (float10)FUN_00410ee0(uVar3);
      _DAT_00b3344c = (float)fVar7;
    }
    local_4 = 0xffffffff;
    if ((1.0 / (float)_DAT_00b0314c < _DAT_00b33e9c) || (_DAT_00b33e9c < 1.0 / (float)_DAT_00b03154)
       ) {
      fVar7 = (float10)FUN_00410ee0(uVar3);
      fVar1 = (float)_DAT_00b0315c;
      fVar2 = (1.0 / _DAT_00b33e9c - (float)_DAT_00b0314c) / (float)_DAT_00b03154;
      local_30 = (float)fVar7;
      if ((fVar2 <= 1.0) && (local_30 = fVar1, 0.0 < fVar2)) {
        local_30 = ((float)fVar7 - fVar1) * fVar2 + fVar1;
      }
      if (10.0 < ABS(local_30 - _DAT_00b3344c)) {
        _DAT_00b3344c = _DAT_00b3344c + (local_30 - _DAT_00b3344c) * _DAT_00b33e9c;
        puVar5 = (undefined4 *)(*(int *)(DAT_00b333cc + 0xdc) + 0xec);
        puVar6 = local_28;
        for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        local_14 = _DAT_00b3344c;
        FUN_0070c190(local_28);
        *unaff_FS_OFFSET = local_c;
        return;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004114e0(undefined4 param_1,undefined1 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  float10 fVar8;
  int local_30 [10];
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009aad37;
  local_30[9] = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffac;
  *unaff_FS_OFFSET = (int)(local_30 + 9);
  FUN_0070b780(0);
  piVar1 = in_ECX + 0x37;
  *in_ECX = &PTR_FUN_00a31bd4;
  *piVar1 = 0;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  if (param_3 == 0) {
    pcVar5 = "CreateNewCamera";
  }
  else {
    pcVar5 = *(char **)(param_3 + 8);
  }
  FUN_0040fec0("SceneGraph \'%s\' Created. Camera name \'%s\'.",param_1,pcVar5,uVar2);
  *(undefined1 *)(in_ECX + 0x3a) = param_2;
  iVar3 = FUN_00401f00(0x90);
  local_4._0_1_ = 2;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0070df30(0);
  }
  local_4._0_1_ = 1;
  in_ECX[0x39] = uVar4;
  in_ECX[0x38] = 0;
  pcVar5 = (char *)FUN_007616d0();
  _sprintf(pcVar5,"%sRoot Node",param_1);
  FUN_006ff420(pcVar5);
  iVar3 = FUN_00401f00(0xdc);
  local_4._0_1_ = 3;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0070b780(0);
  }
  local_4._0_1_ = 1;
  _sprintf(pcVar5,"%sRoot CameraNode",param_1);
  FUN_006ff420(pcVar5);
  FUN_0070af00(uVar4,1);
  if (param_3 == 0) {
    iVar3 = FUN_00401f00(0x124);
    local_4._0_1_ = 4;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0070d590();
    }
    local_4._0_1_ = 1;
    FUN_0075fa90(uVar4);
    _sprintf(pcVar5,"%sRoot Camera",param_1);
    FUN_006ff420(pcVar5);
    iVar3 = *piVar1;
    *(undefined4 *)(iVar3 + 0x110) = 0;
    *(undefined4 *)(iVar3 + 0x114) = 0x3f800000;
    local_30[0] = 0;
    local_30[1] = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0x3f800000;
    local_30[4] = 0;
    local_30[5] = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    local_30[6] = 0;
    local_30[8] = 0;
    local_30[2] = 0x3f800000;
    local_30[3] = 0x3f800000;
    local_30[7] = 0x3f800000;
    piVar6 = local_30;
    piVar7 = (int *)(*piVar1 + 0x30);
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar7 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar7 = piVar7 + 1;
    }
    *(undefined4 *)(*piVar1 + 0x108) = 0x3f800000;
    iVar3 = *piVar1;
    fVar8 = (float10)FUN_00410ee0();
    *(float *)(iVar3 + 0x10c) = (float)(fVar8 / (float10)_DAT_00b03134);
    FUN_00411160(_DAT_00b0313c,1);
  }
  else {
    FUN_0075fa90(param_3);
  }
  FUN_00411100();
  *unaff_FS_OFFSET = local_30[9];
  return;
}



void FUN_00411730(byte param_1)

{
  FUN_00410ff0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00411750(void)

{
  int iVar1;
  undefined1 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint _MaxCharCount;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  void *pvVar15;
  int iVar16;
  void *_Dst;
  undefined4 *puVar17;
  int *unaff_FS_OFFSET;
  char *pcVar18;
  int *piVar19;
  int *piVar20;
  int iVar21;
  int aiStack_2e4 [3];
  undefined2 uStack_2d8;
  undefined4 uStack_2d6;
  undefined2 uStack_2d2;
  undefined2 uStack_2d0;
  undefined4 uStack_2ce;
  undefined4 uStack_2ca;
  int iStack_2c6;
  int iStack_2c2;
  undefined2 uStack_2be;
  undefined2 uStack_2bc;
  undefined4 uStack_2ba;
  uint uStack_2b6;
  undefined4 uStack_2b2;
  undefined4 uStack_2ae;
  undefined4 uStack_2aa;
  undefined4 uStack_2a6;
  undefined1 auStack_298 [28];
  undefined4 local_27c [12];
  undefined1 auStack_24c [16];
  char acStack_23c [260];
  char acStack_138 [280];
  char *pcStack_20;
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aaf1e;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)aiStack_2e4;
  piVar6 = (int *)(DAT_00b30aac ^ (uint)&stack0xfffffd0c);
  *unaff_FS_OFFSET = (int)&local_c;
  piVar19 = DAT_00b350d8;
  FUN_0070f2e0();
  piVar9 = (int *)piVar19[0xa0];
  iVar7 = (**(code **)(*piVar19 + 0x8c))();
  if (*(int **)(iVar7 + 0x10) == (int *)0x0) {
    puVar8 = (undefined4 *)0x0;
  }
  else {
    puVar8 = (undefined4 *)(**(code **)(**(int **)(iVar7 + 0x10) + 0xc))();
  }
  puVar17 = local_27c;
  for (iVar7 = 0x11; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar17 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar17 = puVar17 + 1;
  }
  FUN_0076bef0(local_27c);
  piVar20 = (int *)0x0;
  piVar19 = (int *)0x0;
  iVar7 = (**(code **)(*piVar9 + 0x48))(piVar9,0,0,0,aiStack_2e4);
  if (iVar7 == 0) {
    iVar7 = (**(code **)(*piVar6 + 0x30))(piVar6,auStack_24c);
    if (iVar7 == 0) {
      iVar7 = (**(code **)(*piVar20 + 0x34))(piVar20,&uStack_2d8,0,0x800);
      if (iVar7 == 0) {
        iVar7 = FUN_00401f00(0x70);
        pcStack_20 = (char *)0x0;
        if (iVar7 == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = (int *)FUN_0070e560(DAT_00b06c4c,DAT_00b06c50,auStack_298,1,1);
        }
        iVar7 = *(int *)piVar9[0x15];
        iVar10 = piVar9[0x19];
        _Dst = (void *)(*(int *)piVar9[0x17] + piVar9[0x14]);
        pvVar15 = (void *)CONCAT22(uStack_2d2,uStack_2d6._2_2_);
        pcStack_20 = (char *)0xffffffff;
        iVar21 = 0;
        if (0 < DAT_00b06c50) {
          do {
            _memcpy(_Dst,pvVar15,iVar7 * iVar10);
            pvVar15 = (void *)((int)pvVar15 + CONCAT22((undefined2)uStack_2d6,uStack_2d8));
            iVar21 = iVar21 + 1;
            _Dst = (void *)((int)_Dst + iVar7 * iVar10);
          } while (iVar21 < DAT_00b06c50);
        }
        (**(code **)(*piVar20 + 0x38))(piVar20);
        (**(code **)(*piVar19 + 8))(piVar19);
        if (pcStack_20 == (char *)0x0) {
          _sprintf(acStack_23c,"%s%d.bmp",PTR_s_ScreenShot_00b03164,DAT_00b0316c);
        }
        else {
          iVar7 = (int)acStack_23c - (int)pcStack_20;
          pcVar18 = pcStack_20;
          do {
            cVar3 = *pcVar18;
            pcVar18[iVar7] = cVar3;
            pcVar18 = pcVar18 + 1;
          } while (cVar3 != '\0');
        }
        iVar10 = __open(acStack_23c,0x8301,0x180);
        iVar7 = DAT_00b06c50;
        if (iVar10 == -1) {
          FUN_004a7a60("ScreenShot: Unable to create file \'%s\'.",acStack_23c);
        }
        else {
          iVar4 = *(int *)piVar9[0x15];
          iVar5 = piVar9[0x19];
          iVar16 = *(int *)piVar9[0x17] + piVar9[0x14];
          pvVar15 = (void *)thunk_FUN_00401aa0(DAT_00b06c50 * iVar4 * 3,1);
          iVar21 = iVar7 + -1;
          iVar13 = 0;
          if (-1 < iVar21) {
            iVar11 = iVar21 * iVar5 * iVar4;
            aiStack_2e4[0] = -(iVar5 * iVar4);
            do {
              if (iVar4 != 0) {
                iVar1 = iVar16 + 1;
                puVar12 = (undefined1 *)(iVar11 + iVar1);
                iVar14 = iVar4;
                do {
                  *(undefined1 *)((int)pvVar15 + iVar13) = puVar12[iVar16 - iVar1];
                  *(undefined1 *)((int)pvVar15 + iVar13 + 1) = *puVar12;
                  puVar2 = puVar12 + (iVar16 - iVar1) + 2;
                  puVar12 = puVar12 + iVar5;
                  *(undefined1 *)((int)pvVar15 + iVar13 + 2) = *puVar2;
                  iVar13 = iVar13 + 3;
                  iVar14 = iVar14 + -1;
                  piVar9 = piVar20;
                } while (iVar14 != 0);
              }
              iVar11 = iVar11 + aiStack_2e4[0];
              iVar21 = iVar21 + -1;
            } while (-1 < iVar21);
          }
          uStack_2d2 = 0;
          uStack_2d0 = 0;
          uStack_2ba = 0;
          uStack_2b2 = 0;
          uStack_2ae = 0;
          uStack_2aa = 0;
          uStack_2a6 = 0;
          _MaxCharCount = iVar7 * iVar4 * 3;
          uStack_2d6 = _MaxCharCount + 0x36;
          uStack_2d8 = 0x4d42;
          uStack_2ce = 0x36;
          uStack_2ca = 0x28;
          iStack_2c2 = iVar7;
          uStack_2be = 1;
          uStack_2bc = 0x18;
          iStack_2c6 = iVar4;
          uStack_2b6 = _MaxCharCount;
          __write(iVar10,&uStack_2d8,0x36);
          __write(iVar10,pvVar15,_MaxCharCount);
          __close(iVar10);
          FUN_00401e40(pvVar15);
          if (pcStack_20 == (char *)0x0) {
            _sprintf(acStack_138,"ScreenShot: File \'%s\' created.",acStack_23c);
            FUN_0057acc0(acStack_138,0,1,0x40a00000);
            DAT_00b0316c = DAT_00b0316c + 1;
          }
        }
        (**(code **)*piVar9)(1);
        goto LAB_00411b48;
      }
      if (DAT_00b34fc0 < 2) {
        pcVar18 = 
        "ScreenShot: Not enabled. Add \'bAllowScreenShot = 1\' to the [Display] section of Oblivion.INI file."
        ;
      }
      else {
        pcVar18 = 
        "ScreenShot: Not enabled. Can\'t lock the backbuffer when multisampling is enabled.";
      }
    }
    else {
      pcVar18 = "ScreenShot: Unable to aquire BackBuffer Description";
    }
    FUN_004a7a60(pcVar18);
    (**(code **)(*piVar20 + 8))(piVar20);
  }
  else {
    FUN_004a7a60("ScreenShot: Unable to get back buffer.");
  }
LAB_00411b48:
  *unaff_FS_OFFSET = (int)pcStack_20;
  return;
}



int FUN_00411b70(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  LONG LVar4;
  undefined1 *puVar5;
  int iVar6;
  int unaff_ESI;
  int *unaff_EDI;
  int *unaff_FS_OFFSET;
  int *piVar7;
  int *piStack_98;
  int iStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 *puStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 uStack_24;
  int local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_009aaf69;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  piVar7 = (int *)DAT_00b350d8[0xa0];
  iVar1 = (**(code **)(*DAT_00b350d8 + 0x8c))();
  if (*(int **)(iVar1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(iVar1 + 0x10) + 0xc))();
  }
  FUN_0070f010();
  uStack_84 = 6;
  uStack_7c = 0;
  uStack_80 = 0;
  puVar2 = (undefined4 *)FUN_007d6f40(*param_2,*param_1,&uStack_84,1);
  puStack_88 = puVar2;
  if (puVar2 != (undefined4 *)0x0) {
    InterlockedIncrement(puVar2 + 1);
  }
  uStack_4 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_004a7a60();
    iVar1 = 0;
  }
  else {
    fStack_90 = (float)DAT_00b06c50 / (float)DAT_00b06c4c;
    iStack_94 = FUN_009828c0();
    FUN_0066b710();
    iVar1 = *(int *)(DAT_00b333cc + 0xdc);
    *(undefined4 *)(iVar1 + 0x110) = 0;
    *(undefined4 *)(iVar1 + 0x114) = 0x3f800000;
    piStack_98 = (int *)(1.0 - fStack_90);
    *(undefined4 *)(iVar1 + 0x118) = 0x3f800000;
    *(int **)(iVar1 + 0x11c) = piStack_98;
    FUN_0040c830();
    iVar1 = *(int *)(DAT_00b333cc + 0xdc);
    *(undefined4 *)(iVar1 + 0x110) = 0;
    *(undefined4 *)(iVar1 + 0x114) = 0x3f800000;
    *(undefined4 *)(iVar1 + 0x118) = 0x3f800000;
    piStack_98 = (int *)0x0;
    *(undefined4 *)(iVar1 + 0x11c) = 0;
    iVar1 = FUN_00405a30();
    piVar3 = (int *)(**(code **)(**(int **)(iVar1 + 0x24) + 0x18))();
    piVar3 = (int *)(**(code **)(*piVar3 + 0x14))();
    (**(code **)(*piVar3 + 0x44))(piVar3,0);
    (**(code **)(*piVar3 + 0x48))(piVar3,0,&piStack_98);
    iVar1 = (**(code **)(*piVar7 + 0x90))(piVar7,*param_2,*param_1,puStack_88,2,&stack0xffffff40,0);
    if (iVar1 == 0) {
      (**(code **)(*piVar7 + 0x80))(piVar7,uStack_8c);
      piVar3 = piStack_98;
      (**(code **)(*piStack_98 + 8))();
      (**(code **)(*unaff_EDI + 0x34))(unaff_EDI,&puStack_88,0,0x800);
      *param_2 = unaff_ESI;
      iVar1 = FUN_00401f00(0x70);
      uStack_24 = 1;
      if (iVar1 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = FUN_0070e560(*param_1,*param_2,&DAT_00b25e48,1,1);
      }
      puVar5 = (undefined1 *)(**(int **)(iVar1 + 0x5c) + *(int *)(iVar1 + 0x50));
      iVar6 = 0;
      uStack_24 = 0;
      if (0 < *param_1 * *param_2 * 4) {
        do {
          *puVar5 = *(undefined1 *)(iStack_94 + 2 + iVar6);
          puVar5[1] = *(undefined1 *)(iStack_94 + 1 + iVar6);
          puVar5[2] = *(undefined1 *)(iStack_94 + iVar6);
          iVar6 = iVar6 + 4;
          puVar5 = puVar5 + 3;
        } while (iVar6 < *param_1 * *param_2 * 4);
      }
      (**(code **)(*piVar7 + 0x38))(piVar7);
      (**(code **)(*piVar3 + 8))(piVar3);
      puVar2 = puStack_88;
      LVar4 = InterlockedDecrement(puStack_88 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar2)();
      }
    }
    else {
      FUN_004a7a60();
      puVar2 = puStack_88;
      uStack_4 = 0xffffffff;
      LVar4 = InterlockedDecrement(puStack_88 + 1);
      if (LVar4 == 0) {
        (**(code **)*puVar2)();
      }
      iVar1 = 0;
    }
  }
  *unaff_FS_OFFSET = local_c;
  return iVar1;
}



void FUN_00411ec0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_LAB_00a3201c;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_00411f00(void)

{
  return (float10)_DAT_00b03174;
}



void FUN_00411f60(undefined1 param_1,undefined1 param_2)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  *(undefined1 *)(in_ECX + 9) = param_1;
  *in_ECX = &PTR_FUN_00a32034;
  *(undefined1 *)((int)in_ECX + 0x25) = param_2;
  in_ECX[10] = 0;
  return;
}



void FUN_00411fa0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aaff8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a32034;
  local_4 = 0;
  if ((undefined4 *)in_ECX[10] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[10])(1,uVar1);
  }
  *in_ECX = &PTR_LAB_00a3201c;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00412040(int param_1)

{
  int iVar1;
  int in_ECX;
  
  FUN_0045b9a0(in_ECX + 4,0x20);
  if ((char)param_1 == '\0') {
    param_1 = 1;
    for (iVar1 = *(int *)(in_ECX + 0x28); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x28)) {
      param_1 = param_1 + 1;
    }
    FUN_0045b9a0(&param_1,2);
  }
  FUN_0045b9a0(in_ECX + 0x24,1);
  FUN_0045b9a0(in_ECX + 0x25,1);
  if (*(int *)(in_ECX + 0x28) != 0) {
    param_1 = 1;
                    /* WARNING: Could not recover jumptable at 0x004120c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(in_ECX + 0x28) + 0xc))();
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004120d0(int param_1)

{
  int *piVar1;
  int in_ECX;
  
  FUN_004534d0(in_ECX + 4,0x20);
  if ((short)param_1 == -1) {
    FUN_004534d0(&param_1,2);
  }
  FUN_004534d0(in_ECX + 0x24,1);
  FUN_004534d0(in_ECX + 0x25,1);
  param_1 = param_1 + 0xffff;
  if ((short)param_1 != 0) {
    piVar1 = (int *)FUN_00401f00(0x2c);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = 0;
      piVar1[2] = 0;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[6] = 0;
      piVar1[7] = 0;
      piVar1[8] = 0;
      *(undefined1 *)(piVar1 + 9) = 0;
      *(undefined1 *)((int)piVar1 + 0x25) = 0;
      piVar1[10] = 0;
      *piVar1 = (int)&PTR_FUN_00a32034;
      *(int **)(in_ECX + 0x28) = piVar1;
      (**(code **)(*piVar1 + 0x10))(param_1);
      return;
    }
    *(undefined4 *)(in_ECX + 0x28) = 0;
    (**(code **)(_DAT_00000000 + 0x10))(param_1);
  }
  return;
}



void FUN_004121a0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  return;
}



void FUN_004121d0(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 + *in_ECX;
  in_ECX[1] = param_1[1] + in_ECX[1];
  in_ECX[2] = param_1[2] + in_ECX[2];
  return;
}



undefined4 FUN_00412220(int param_1,int param_2)

{
  int in_ECX;
  uint uVar1;
  
  uVar1 = param_2 * 0x10 + param_1;
  return CONCAT31((uint3)(uVar1 >> 0xd),
                  (*(uint *)(in_ECX + 4 + (uVar1 >> 5) * 4) & 1 << ((byte)uVar1 & 0x1f)) != 0);
}



/* WARNING: Removing unreachable block (ram,0x00412270) */
/* WARNING: Removing unreachable block (ram,0x00412294) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412250(uint param_1,float *param_2)

{
  float fVar1;
  
  if (param_1 < DAT_00b03178) {
    fVar1 = (float)(param_1 >> 4) * _DAT_00b03174;
    *param_2 = _DAT_00b03174 * (float)(param_1 & 0xf);
    param_2[1] = fVar1;
    param_2[2] = 0.0;
    return;
  }
  *param_2 = 3.4028235e+38;
  param_2[1] = 3.4028235e+38;
  param_2[2] = 3.4028235e+38;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004122f0(float *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 extraout_ST0;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  iVar3 = FUN_009828c0();
  iVar4 = FUN_009828c0();
  *param_1 = (float)(extraout_ST0 * (float10)iVar3 + (float10)(((int)ROUND(fVar1) >> 0xc) << 0xc));
  param_1[1] = (float)iVar4 * _DAT_00b03174 + (float)(((int)ROUND(fVar2) >> 0xc) << 0xc);
  param_1[2] = 0.0;
  return;
}



void FUN_004123c0(float *param_1,char param_2,int *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == '\0') {
    fVar1 = param_1[1];
    iVar3 = (int)ROUND(*param_1) - ((int)ROUND(*param_1) & 0xfffff000U);
    *param_3 = iVar3;
    iVar2 = FUN_009828c0();
    *param_3 = iVar3 / iVar2;
    iVar2 = (int)ROUND(param_1[1]) - ((int)ROUND(fVar1) & 0xfffff000U);
  }
  else {
    fVar1 = param_1[1];
    iVar3 = ((int)ROUND(*param_1) - ((int)ROUND(*param_1) - 0x800U & 0xfffff000)) + -0x800;
    *param_3 = iVar3;
    iVar2 = FUN_009828c0();
    *param_3 = iVar3 / iVar2;
    iVar2 = ((int)ROUND(param_1[1]) - ((int)ROUND(fVar1) - 0x800U & 0xfffff000)) + -0x800;
  }
  *param_4 = iVar2;
  iVar3 = FUN_009828c0();
  *param_4 = iVar2 / iVar3;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412500(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if (param_1 != (int *)0x0) {
    local_10 = 0x3f800000;
    uVar3 = 0;
    local_c = 0;
    local_8 = 0;
    local_4 = 0;
    fVar1 = _DAT_00b03174 * 0.5;
    if (DAT_00b03178 != 0) {
      do {
        if ((*(uint *)(in_ECX + 4 + (uVar3 >> 5) * 4) & 1 << ((byte)uVar3 & 0x1f)) != 0) {
          FUN_00412250(uVar3,&local_28);
          local_28 = *param_2 + local_28;
          local_24 = param_2[1] + local_24;
          local_20 = param_2[2] + local_20;
          iVar2 = FUN_0047f1a0(_DAT_00b03174,&local_10);
          (**(code **)(*param_1 + 0x84))(iVar2,0);
          fStack_1c = fVar1 + local_28;
          *(float *)(iVar2 + 0x54) = fStack_1c;
          fStack_18 = fVar1 + local_24;
          *(float *)(iVar2 + 0x58) = fStack_18;
          fStack_14 = local_20;
          *(float *)(iVar2 + 0x5c) = local_20;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < DAT_00b03178);
    }
  }
  return;
}



void FUN_00412620(byte param_1)

{
  FUN_00411fa0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00412640(undefined4 param_1,int param_2,undefined4 param_3)

{
  int in_ECX;
  float local_c;
  float local_8;
  undefined4 local_4;
  
  local_c = (float)(*(char *)(in_ECX + 0x24) * 0x1000 + 0x800);
  local_8 = (float)(*(char *)(in_ECX + 0x25) * 0x1000 + 0x800);
  local_4 = *(undefined4 *)(param_2 + 8);
  FUN_00412500(param_1,&local_c,param_3);
  if (*(int *)(in_ECX + 0x28) != 0) {
    (**(code **)(**(int **)(in_ECX + 0x28) + 4))(param_1,param_2,param_3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004126c0(float *param_1,float *param_2)

{
  uint *puVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  float10 fVar4;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  uVar3 = 0;
  iVar2 = 0;
  if (DAT_00b03178 != 0) {
    do {
      if ((*(uint *)(in_ECX + 4 + (uVar3 >> 5) * 4) & 1 << ((byte)uVar3 & 0x1f)) == 0) {
        FUN_00412250(uVar3,&local_18);
        local_18 = *param_2 + local_18;
        local_14 = param_2[1] + local_14;
        local_10 = param_2[2] + local_10;
        local_c = local_18 - *param_1;
        local_8 = local_14 - param_1[1];
        local_4 = local_10 - param_1[2];
        fVar4 = (float10)FUN_00982c30();
        if ((float)fVar4 < _DAT_00b35c14) {
          puVar1 = (uint *)(in_ECX + 4 + (uVar3 >> 5) * 4);
          *puVar1 = *puVar1 | 1 << ((byte)uVar3 & 0x1f);
          goto LAB_004127ab;
        }
      }
      else {
LAB_004127ab:
        iVar2 = iVar2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < DAT_00b03178);
  }
  return DAT_00b0317c <= iVar2;
}



void FUN_004127e0(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b41d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0041a5a0(uVar1);
  local_4 = 0xffffffff;
  FUN_004b3010();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00412840(void)

{
  undefined4 *in_ECX;
  
  FUN_0046ffd0();
  *in_ECX = &PTR_FUN_00a320a4;
  return;
}



void FUN_00412860(void)

{
  FUN_00414c70();
  thunk_FUN_0046b170();
  return;
}



void FUN_00412880(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ab4fd;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a3217c;
  in_ECX[9] = &PTR_FUN_00a32134;
  in_ECX[0xc] = &PTR_LAB_00a32124;
  in_ECX[0x10] = &PTR_FUN_00a32104;
  in_ECX[0x16] = &PTR_FUN_00a320e8;
  in_ECX[0x19] = &PTR_LAB_00a320d4;
  in_ECX[0x1c] = &PTR_LAB_00a320c0;
  local_4 = 3;
  FUN_00414c70(uVar1);
  thunk_FUN_0046b170();
  local_4._0_1_ = 2;
  FUN_00470580();
  local_4._0_1_ = 1;
  FUN_00470040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_004127e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined1 * FUN_00412ab0(void)

{
  undefined1 *puVar1;
  int in_ECX;
  
  puVar1 = *(undefined1 **)(in_ECX + 4);
  if (puVar1 == (undefined1 *)0x0) {
    puVar1 = &DAT_00a2f7ec;
  }
  return puVar1;
}



void FUN_00412ac0(byte param_1)

{
  FUN_00412880();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00412ae0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab5a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a322a0;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  local_4 = 0;
  FUN_00414a00(uVar1);
  *in_ECX = &PTR_FUN_00a322c4;
  in_ECX[3] = &PTR_FUN_00a322b4;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00412b50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab058;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004b2ff0(uVar1);
  local_4 = 0;
  FUN_00412ae0();
  *in_ECX = &PTR_FUN_00a32364;
  in_ECX[9] = &PTR_FUN_00a3231c;
  in_ECX[0xc] = &PTR_FUN_00a32308;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00412bc0(byte param_1)

{
  FUN_004127e0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00412be0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab549;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00412b50(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 1;
  FUN_0046ffd0();
  in_ECX[0x16] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 2;
  FUN_0046ef60();
  FUN_004705a0();
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_00a3217c;
  in_ECX[9] = &PTR_FUN_00a32134;
  in_ECX[0xc] = &PTR_LAB_00a32124;
  in_ECX[0x10] = &PTR_FUN_00a32104;
  in_ECX[0x16] = &PTR_FUN_00a320e8;
  in_ECX[0x19] = &PTR_LAB_00a320d4;
  in_ECX[0x1c] = &PTR_LAB_00a320c0;
  *(undefined1 *)(in_ECX + 1) = 0x28;
  in_ECX[0x1e] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00412cb0(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x10);
  }
  return 0;
}



void FUN_00412cc0(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0x18) != (int *)0x0) && (iVar1 = **(int **)(in_ECX + 0x18), iVar1 != 0)) {
    uVar2 = FUN_0046b250(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03358,0);
    FUN_009832e6(uVar2);
  }
  return;
}



void FUN_00412d00(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a32488;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00412d30(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  
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
  if ((char)in_ECX[4] == '\0') {
    puVar3[1] = param_1;
  }
  puVar3[2] = param_1;
  return;
}



int FUN_00412dc0(int param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar5 = (char *)(param_1 + -1);
  do {
    pcVar4 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = param_2;
  for (uVar3 = (uint)((int)pcVar2 - (int)param_2) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(undefined4 *)pcVar5 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar5 = pcVar5 + 4;
  }
  for (uVar3 = (int)pcVar2 - (int)param_2 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar5 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar5 = pcVar5 + 1;
  }
  return param_1;
}



undefined4 FUN_00412e00(int param_1)

{
  if ((undefined4 *)(&PTR_DAT_00b037e4)[param_1] != (undefined4 *)0x0) {
    return *(undefined4 *)(&PTR_DAT_00b037e4)[param_1];
  }
  return 0;
}



void FUN_00412e20(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = param_1;
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    cVar2 = FUN_0055e000(*(int *)(param_1 + 4),&param_1);
    if (cVar2 != '\0') {
      FUN_004a7a60("Setting key \'%s\' already used in map.\nSetting keys must be unique.\n",
                   *(undefined4 *)(iVar1 + 4));
      return;
    }
    FUN_00412d30(*(undefined4 *)(iVar1 + 4),iVar1);
  }
  return;
}



void FUN_00412e70(char *param_1)

{
  char *pcVar1;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar1 = param_1;
    if ((int)(0xffffffff / ZEXT48(param_1)) == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_00a32488;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(local_c,&DAT_00ad7f34);
    }
  }
  FUN_00401f00(pcVar1);
  return;
}



undefined4 FUN_00412ef0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined3 uVar3;
  
  iVar1 = *param_1;
  uVar3 = (undefined3)((uint)iVar1 >> 8);
  uVar2 = CONCAT31(uVar3,iVar1 == *in_ECX);
  if ((iVar1 == *in_ECX) && ((*(uint *)(in_ECX[7] + 0x58) & 0x180000) != 0)) {
    uVar2 = CONCAT31(uVar3,param_1[5] == in_ECX[5]);
  }
  return uVar2;
}



undefined4 FUN_00412f20(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x18) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4);
  }
  return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 100);
}



int FUN_00412f40(byte *param_1,char param_2)

{
  byte bVar1;
  int iVar2;
  byte *_Str1;
  undefined4 *in_ECX;
  bool bVar3;
  
  if ((param_1 == (byte *)0x0) || (_Str1 = (byte *)*in_ECX, _Str1 == (byte *)0x0)) {
    return (uint)(param_1 == (byte *)0x0) * 2 + -1;
  }
  if (param_2 != '\0') {
    iVar2 = __stricmp((char *)_Str1,(char *)param_1);
    return iVar2;
  }
  while( true ) {
    bVar1 = *_Str1;
    bVar3 = bVar1 < *param_1;
    if (bVar1 != *param_1) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = _Str1[1];
    bVar3 = bVar1 < param_1[1];
    if (bVar1 != param_1[1]) break;
    _Str1 = _Str1 + 2;
    param_1 = param_1 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar3) - (uint)(bVar3 != 0);
}



void FUN_00412fa0(char *param_1)

{
  char cVar1;
  undefined2 uVar2;
  char *pcVar3;
  int *in_ECX;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  
  if (param_1 == (char *)0x0) {
    return;
  }
  pcVar7 = (char *)*in_ECX;
  if (pcVar7 == (char *)0x0) {
    FUN_004028d0(param_1,0);
    return;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (*(ushort *)(in_ECX + 1) == 0xffff) {
    pcVar4 = pcVar7;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)(pcVar7 + 1);
  }
  else {
    uVar5 = (uint)*(ushort *)(in_ECX + 1);
  }
  pcVar3 = pcVar3 + (uVar5 - (int)(param_1 + 1));
  pcVar4 = param_1;
  if ((char *)(uint)*(ushort *)((int)in_ECX + 6) < pcVar3) {
    FUN_004028d0(pcVar7,pcVar3);
  }
  else {
    uVar2 = SUB42(pcVar3,0);
    if ((char *)0xffff < pcVar3) {
      uVar2 = 0xffff;
    }
    *(undefined2 *)(in_ECX + 1) = uVar2;
  }
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)param_1;
  pcVar7 = (char *)(*in_ECX + -1);
  do {
    pcVar3 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
  } while (*pcVar3 != '\0');
  for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
    *(undefined4 *)pcVar7 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pcVar7 = pcVar7 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar7 = *param_1;
    param_1 = param_1 + 1;
    pcVar7 = pcVar7 + 1;
  }
  return;
}



/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00413070(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0x18;
  local_18 = 0x54494645;
  local_1c = 0x41308e;
  FUN_0046ae40();
  if ((*(int *)(*(int *)(in_ECX + 0x1c) + 0x98) == 0x46464553) && (*(int *)(in_ECX + 0x18) != 0)) {
    local_18 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4);
    local_1c = **(undefined4 **)(in_ECX + 0x18);
    local_14 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x10);
    local_10 = CONCAT31(0x4130,*(undefined1 *)(*(int *)(in_ECX + 0x18) + 0x14));
    FUN_0046ae40(0x54494353,&local_1c,0x10);
    pcVar2 = *(char **)(*(int *)(in_ECX + 0x18) + 8);
    if (pcVar2 != (char *)0x0) {
      pcVar3 = pcVar2;
      do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
      } while (cVar1 != '\0');
      thunk_FUN_0046ae40(0x4c4c5546,pcVar2,pcVar3 + (1 - (int)(pcVar2 + 1)));
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */
/* WARNING: Unable to track spacebase fully for stack */

undefined4 FUN_00413130(size_t param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  undefined4 uVar3;
  size_t *in_ECX;
  int iVar4;
  undefined4 uStack_38;
  char *pcStack_34;
  char *pcStack_30;
  size_t sStack_2c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00b30aac ^ (uint)&stack0xfffffffc;
  sStack_2c = 0x41314f;
  FUN_0044fea0();
  sStack_2c = 0x413156;
  iVar1 = FUN_004510b0();
  if (iVar1 == 0x54494645) {
    *in_ECX = 0;
    in_ECX[1] = 0;
    in_ECX[2] = 0;
    in_ECX[3] = 0;
    sStack_2c = 0x18;
    in_ECX[4] = 0;
    in_ECX[5] = 0;
    pcStack_34 = (char *)0x41317e;
    FUN_00450c20();
    sStack_2c = *in_ECX;
    pcStack_30 = (char *)0x413186;
    sVar2 = FUN_00416870();
    in_ECX[7] = sVar2;
    if (sVar2 == 0) {
      if (param_2 == (char *)0x0) {
        param_2 = "{unknown}";
      }
      pcStack_30 = (char *)*in_ECX;
      pcStack_34 = 
      "Unknown EffectSetting \'%d\' encountered when loading EffectItem in spell \'%s\'";
      uStack_38 = 0x4131aa;
      sStack_2c = (size_t)param_2;
      FUN_004a7a60();
      return 1;
    }
    if (((*(uint *)(sVar2 + 0x58) & 0x1180000) != 0) && ((*(uint *)(sVar2 + 0x58) >> 0x18 & 1) != 0)
       ) {
      in_ECX[5] = *(size_t *)(sVar2 + 0x60);
    }
    if (*(int *)(sVar2 + 0x98) == 0x46464553) {
      sStack_2c = 0x4131e6;
      FUN_0044fea0();
      sStack_2c = 0x4131ed;
      iVar1 = FUN_004510b0();
      if (iVar1 != 0x54494353) goto LAB_00413302;
      if (in_ECX[6] == 0) {
        sStack_2c = 0x18;
        pcStack_30 = (char *)0x413206;
        sVar2 = FUN_00401f00();
        if (sVar2 == 0) {
          sVar2 = 0;
        }
        else {
          *(undefined4 *)(sVar2 + 8) = 0;
          *(undefined2 *)(sVar2 + 0xc) = 0;
          *(undefined2 *)(sVar2 + 0xe) = 0;
        }
        in_ECX[6] = sVar2;
        if (sVar2 == 0) {
          if (param_2 == (char *)0x0) {
            param_2 = "{unknown}";
          }
          pcStack_30 = "Unable to allocate Script Effect Data in spell \'%s\'";
          pcStack_34 = (char *)0x4132fb;
          sStack_2c = (size_t)param_2;
          FUN_004a7a60();
          goto LAB_004132fe;
        }
      }
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      sStack_2c = 0x10;
      pcStack_30 = (char *)&local_18;
      pcStack_34 = (char *)0x413242;
      FUN_00450c20();
      *(undefined4 *)(in_ECX[6] + 4) = local_14;
      *(undefined4 *)in_ECX[6] = local_18;
      *(undefined4 *)(in_ECX[6] + 0x10) = local_10;
      *(undefined1 *)(in_ECX[6] + 0x14) = (undefined1)local_c;
      pcStack_30 = (char *)in_ECX[6];
      sStack_2c = param_1;
      pcStack_34 = (char *)0x41326f;
      FUN_0046bb20();
      sStack_2c = *(size_t *)(in_ECX[6] + 0x10);
      if (sStack_2c != 0) {
        pcStack_30 = (char *)0x413282;
        iVar1 = FUN_00416870();
        if (iVar1 == 0) {
          *(undefined4 *)(in_ECX[6] + 0x10) = 0;
        }
      }
      sStack_2c = 0x413296;
      FUN_0044fea0();
      sStack_2c = 0x41329d;
      iVar1 = FUN_004510b0();
      if (iVar1 == 0x4c4c5546) {
        iVar4 = *(int *)(param_1 + 0x254) + 1;
        sStack_2c = 0x4132b4;
        iVar1 = -iVar4;
        *(int *)((int)&sStack_2c + iVar1) = iVar4;
        *(undefined4 *)((int)&pcStack_30 + iVar1) = 0;
        *(undefined1 **)((int)&pcStack_34 + iVar1) = &stack0xffffffd8 + iVar1;
        *(undefined4 *)((int)&uStack_38 + iVar1) = 0x4132c2;
        _memset(*(void **)((int)&pcStack_34 + iVar1),*(int *)((int)&pcStack_30 + iVar1),
                *(size_t *)((int)&sStack_2c + iVar1));
        *(undefined4 *)((int)&sStack_2c + iVar1) = 0;
        *(undefined1 **)((int)&pcStack_30 + iVar1) = &stack0xffffffd8 + iVar1;
        *(undefined4 *)((int)&pcStack_34 + iVar1) = 0x4132d2;
        FUN_00450c20();
        *(undefined4 *)((int)&sStack_2c + iVar1) = 0;
        *(undefined1 **)((int)&pcStack_30 + iVar1) = &stack0xffffffd8 + iVar1;
        *(undefined4 *)((int)&pcStack_34 + iVar1) = 0x4132e0;
        FUN_004028d0();
        return 1;
      }
    }
LAB_004132fe:
    uVar3 = 1;
  }
  else {
LAB_00413302:
    uVar3 = 0;
  }
  return uVar3;
}



undefined4 FUN_00413320(void)

{
  int in_ECX;
  
  if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 8 & 1) != 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 4);
}



undefined1 FUN_00413340(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 8 & 1) == 0) && (-1 < param_1)) {
    *(int *)(in_ECX + 4) = param_1;
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 FUN_00413370(void)

{
  int in_ECX;
  
  if (((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 9 & 1) == 0) && (*(int *)(in_ECX + 0x10) != 0))
  {
    return *(undefined4 *)(in_ECX + 8);
  }
  return 0;
}



undefined1 FUN_00413390(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if ((((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 9 & 1) == 0) && (*(int *)(in_ECX + 0x10) != 0)
      ) && (-1 < param_1)) {
    *(int *)(in_ECX + 8) = param_1;
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 FUN_004133c0(void)

{
  int in_ECX;
  
  if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 7 & 1) != 0) {
    return 0;
  }
  return *(undefined4 *)(in_ECX + 0xc);
}



undefined1 FUN_004133e0(int param_1)

{
  undefined1 uVar1;
  int in_ECX;
  
  uVar1 = 0;
  if (((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 7 & 1) == 0) && (-1 < param_1)) {
    *(int *)(in_ECX + 0xc) = param_1;
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 FUN_00413410(int param_1)

{
  int in_ECX;
  
  if (param_1 == 1) {
    if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 5 & 1) == 0) {
      return 0;
    }
  }
  else if (param_1 == 2) {
    if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 6 & 1) == 0) {
      return 0;
    }
  }
  else {
    if (param_1 != 0) {
      return 0;
    }
    if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) >> 4 & 1) == 0) {
      return 0;
    }
  }
  *(int *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
  return 1;
}



uint FUN_00413470(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    return CONCAT31((int3)((uint)iVar1 >> 8),*(undefined1 *)(iVar1 + 0x14));
  }
  return CONCAT31((int3)((uint)*(int *)(in_ECX + 0x1c) >> 8),
                  *(undefined1 *)(*(int *)(in_ECX + 0x1c) + 0x58)) & 0xffffff01;
}



undefined4 * FUN_00413490(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  FUN_004028d0(*(undefined4 *)(in_ECX + 4),0);
  return param_1;
}



undefined4 FUN_004134c0(undefined4 param_1)

{
  FUN_00413490(param_1);
  return param_1;
}



void FUN_004134e0(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = (uint)param_1;
  if (*(uint *)(in_ECX + 0x14) < param_1) {
    FUN_009805af();
  }
  uVar2 = *(int *)(in_ECX + 0x14) - (int)param_1;
  if (uVar2 < param_2) {
    param_2 = uVar2;
  }
  if (param_2 != 0) {
    puVar5 = (undefined4 *)(in_ECX + 4);
    puVar4 = puVar5;
    param_1 = puVar5;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar4 = (undefined4 *)*puVar5;
      param_1 = (undefined4 *)*puVar5;
    }
    _memmove_s((void *)((int)puVar4 + uVar1),*(uint *)(in_ECX + 0x18) - uVar1,
               (void *)((int)param_1 + param_2 + uVar1),uVar2 - param_2);
    iVar3 = *(int *)(in_ECX + 0x14) - param_2;
    *(int *)(in_ECX + 0x14) = iVar3;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar5 = (undefined4 *)*puVar5;
    }
    *(undefined1 *)(iVar3 + (int)puVar5) = 0;
  }
  return;
}



void FUN_00413570(char param_1,rsize_t param_2)

{
  void *_Src;
  int in_ECX;
  
  if ((param_1 != '\0') && (0xf < *(uint *)(in_ECX + 0x18))) {
    _Src = *(void **)(in_ECX + 4);
    if (param_2 != 0) {
      _memcpy_s((undefined4 *)(in_ECX + 4),0x10,_Src,param_2);
    }
    FUN_00401f20(_Src);
  }
  *(rsize_t *)(in_ECX + 0x14) = param_2;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined1 *)(in_ECX + 4 + param_2) = 0;
  return;
}



void FUN_004135c0(uint param_1,rsize_t param_2)

{
  uint uVar1;
  undefined4 *_Dst;
  void *_Src;
  undefined4 *puVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_009ab080;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  uVar4 = param_1 | 0xf;
  if (uVar4 != 0xffffffff) {
    uVar1 = *(uint *)(in_ECX + 0x18);
    uVar3 = uVar1 >> 1;
    param_1 = uVar4;
    if ((uVar4 / 3 < uVar3) && (uVar1 <= -uVar3 - 2)) {
      param_1 = uVar3 + uVar1;
    }
  }
  local_8 = 0;
  _Dst = (undefined4 *)FUN_00412e70(param_1 + 1,0);
  if (param_2 != 0) {
    if (*(uint *)(in_ECX + 0x18) < 0x10) {
      _Src = (void *)(in_ECX + 4);
    }
    else {
      _Src = *(void **)(in_ECX + 4);
    }
    _memcpy_s(_Dst,param_1 + 1,_Src,param_2);
  }
  if (0xf < *(uint *)(in_ECX + 0x18)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 4));
  }
  puVar2 = (undefined4 *)(in_ECX + 4);
  *(undefined1 *)puVar2 = 0;
  *puVar2 = _Dst;
  *(uint *)(in_ECX + 0x18) = param_1;
  *(rsize_t *)(in_ECX + 0x14) = param_2;
  if (0xf < param_1) {
    puVar2 = _Dst;
  }
  *(undefined1 *)((int)puVar2 + param_2) = 0;
  *unaff_FS_OFFSET = local_10;
  return;
}



void FUN_00413710(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b5bd8;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffdc;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((in_ECX[6] == 0) && (*(int *)(param_1 + 0x98) == 0x46464553)) {
    iVar3 = FUN_00401f00(0x18,uVar2);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      *(undefined4 *)(iVar3 + 8) = 0;
      *(undefined2 *)(iVar3 + 0xc) = 0;
      *(undefined2 *)(iVar3 + 0xe) = 0;
    }
    in_ECX[6] = iVar3;
    puVar4 = (undefined4 *)FUN_004134c0(local_14);
    local_4 = 0;
    FUN_004028d0(*puVar4,0);
    FUN_00401f20(local_14[0]);
    *(undefined4 *)(in_ECX[6] + 4) = 0;
    *(undefined4 *)in_ECX[6] = 0;
    *(undefined4 *)(in_ECX[6] + 0x10) = 0;
  }
  iVar3 = in_ECX[6];
  if ((iVar3 != 0) && (*(int *)(param_1 + 0x98) != 0x46464553)) {
    FUN_00401f20(*(undefined4 *)(iVar3 + 8));
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined2 *)(iVar3 + 0xe) = 0;
    *(undefined2 *)(iVar3 + 0xc) = 0;
    FUN_00401f20(iVar3);
    in_ECX[6] = 0;
  }
  in_ECX[7] = param_1;
  uVar1 = *(undefined4 *)(param_1 + 0x98);
  in_ECX[8] = 0xbf800000;
  *in_ECX = uVar1;
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_00413810(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 uVar4;
  undefined4 uVar5;
  float10 fVar6;
  
  if (*(float *)(in_ECX + 0x20) < 0.0) {
    iVar1 = *(int *)(in_ECX + 0x1c);
    uVar2 = *(uint *)(iVar1 + 0x58);
    if ((uVar2 >> 8 & 1) == 0) {
      uVar5 = *(undefined4 *)(in_ECX + 4);
    }
    else {
      uVar5 = 0;
    }
    if ((uVar2 >> 7 & 1) == 0) {
      uVar4 = *(undefined4 *)(in_ECX + 0xc);
    }
    else {
      uVar4 = 0;
    }
    if (((uVar2 >> 9 & 1) == 0) && (*(int *)(in_ECX + 0x10) != 0)) {
      uVar3 = *(undefined4 *)(in_ECX + 8);
    }
    else {
      uVar3 = 0;
    }
    fVar6 = (float10)FUN_00548b50(*(undefined4 *)(iVar1 + 0x5c),uVar3,uVar4,uVar5,
                                  CONCAT31((int3)((uint)iVar1 >> 8),*(int *)(in_ECX + 0x10) == 2));
    *(float *)(in_ECX + 0x20) = (float)fVar6;
  }
  return (float10)*(float *)(in_ECX + 0x20);
}



float10 FUN_00413890(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  float10 fVar4;
  float10 extraout_ST0;
  
  fVar4 = (float10)FUN_00413810();
  if (param_1 != (int *)0x0) {
    if (*(int *)(in_ECX + 0x18) == 0) {
      uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 100);
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4);
    }
    iVar3 = *param_1;
    uVar1 = (**(code **)(iVar3 + 0x284))(7);
    uVar2 = FUN_0041b770(uVar2,uVar1);
    uVar2 = (**(code **)(iVar3 + 0x284))(uVar2);
    FUN_00548c00((float)fVar4,uVar2);
  }
  iVar3 = FUN_009828c0();
  fVar4 = (float10)iVar3;
  if (extraout_ST0 - fVar4 < (float10)0.0) {
    fVar4 = fVar4 - (float10)1.0;
  }
  if (1.0 < (float)fVar4) {
    return (float10)(float)fVar4;
  }
  return (float10)1.0;
}



void FUN_00413960(char *param_1)

{
  char *_Str1;
  uint uVar1;
  int iVar2;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009c0f88;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  if (*(int *)(in_ECX + 0x18) != 0) {
    if ((param_1 == (char *)0x0) ||
       (_Str1 = *(char **)(*(int *)(in_ECX + 0x18) + 8), _Str1 == (char *)0x0)) {
      iVar2 = (uint)(param_1 == (char *)0x0) * 2 + -1;
    }
    else {
      iVar2 = __stricmp(_Str1,param_1);
    }
    if (iVar2 != 0) {
      FUN_004028d0(param_1,0);
    }
  }
  FUN_00401f20(param_1,uVar1);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_004139f0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab0d2;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)FUN_004134c0(local_14);
    local_4 = 1;
  }
  else {
    puVar3 = (undefined4 *)(iVar1 + 8);
  }
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  FUN_004028d0(*puVar3,0);
  if (iVar1 == 0) {
    FUN_00401f20(local_14[0],uVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_00413a90(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *in_ECX;
  char *pcVar6;
  undefined4 uVar7;
  undefined4 local_8 [2];
  
  uVar5 = DAT_00b334c0;
  iVar2 = *in_ECX;
  if (iVar2 < 0x54414553) {
    uVar3 = DAT_00b334c8;
    if (iVar2 != 0x54414552) {
      uVar7 = DAT_00b334e0;
      if (iVar2 < 0x4b535245) {
        uVar3 = DAT_00b334d0;
        if (iVar2 == 0x4b535244) goto LAB_00413b00;
        if (iVar2 == 0x4b534241) goto LAB_00413b80;
        if (iVar2 == 0x4b534f46) goto LAB_00413abe;
      }
      else if (iVar2 == 0x54414241) {
LAB_00413b80:
        uVar5 = FUN_00565cc0(in_ECX[5]);
        _sprintf(param_1,"%s %s",uVar7,uVar5);
        return;
      }
LAB_00413b39:
      puVar4 = (undefined4 *)FUN_004139f0(local_8);
      pcVar6 = (char *)*puVar4;
      do {
        cVar1 = *pcVar6;
        *param_1 = cVar1;
        pcVar6 = pcVar6 + 1;
        param_1 = param_1 + 1;
      } while (cVar1 != '\0');
      FUN_00401f20(local_8[0]);
      return;
    }
  }
  else {
    uVar7 = DAT_00b334d8;
    if (iVar2 == 0x54414744) goto LAB_00413b80;
    if (iVar2 == 0x54414f46) {
LAB_00413abe:
      uVar3 = FUN_00565cc0(in_ECX[5]);
      _sprintf(param_1,"%s %s",uVar5,uVar3);
      return;
    }
    uVar3 = DAT_00b334d0;
    if (iVar2 != 0x54415244) goto LAB_00413b39;
  }
LAB_00413b00:
  uVar5 = FUN_00565cc0(in_ECX[5]);
  _sprintf(param_1,"%s %s",uVar3,uVar5);
  return;
}



void FUN_00413bb0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x18);
  if (iVar1 != 0) {
    FUN_00401f20(*(undefined4 *)(iVar1 + 8));
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined2 *)(iVar1 + 0xe) = 0;
    *(undefined2 *)(iVar1 + 0xc) = 0;
    FUN_00401f20(iVar1);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_00413be0(undefined4 *param_1,int param_2,undefined4 param_3,char param_4,char param_5,
            char param_6)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  char *_Format;
  int local_84 [2];
  undefined4 local_7c;
  undefined4 *local_78;
  char local_74 [100];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ab11f;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)local_84;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_78 = param_1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  local_4 = 0;
  local_7c = 1;
  FUN_00401f20(0,uVar1);
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar6 = in_ECX[7];
  if (((*(uint *)(iVar6 + 0x58) & 0x1180000) == 0) || ((*(byte *)(iVar6 + 0x5b) & 1) != 0)) {
    if (*in_ECX == 0x4b434f4c) {
      FUN_004028d0(DAT_00b334b0,0);
    }
    else {
      puVar2 = (undefined4 *)FUN_004139f0(local_84);
      local_4 = 2;
      FUN_004028d0(*puVar2,0);
      local_4 = local_4 & 0xffffff00;
      FUN_00401f20(local_84[0],uVar1);
    }
  }
  else if (((*(uint *)(iVar6 + 0x58) >> 0x14 & 1) == 0) &&
          ((*(uint *)(iVar6 + 0x58) >> 0x13 & 1) == 0)) {
    puVar2 = (undefined4 *)FUN_004139f0(local_84);
    local_4 = 1;
    uVar5 = *puVar2;
    uVar3 = FUN_00565cc0(in_ECX[5]);
    _sprintf(local_74,"%s %s",uVar5,uVar3);
    local_4 = local_4 & 0xffffff00;
    FUN_00401f20(local_84[0]);
    FUN_004028d0(local_74,0);
  }
  else {
    FUN_00413a90(local_74);
    FUN_004028d0(local_74,0);
  }
  if (param_2 != 8) {
    iVar6 = in_ECX[7];
    if ((((*(uint *)(iVar6 + 0x58) >> 8 & 1) == 0) && ((*(uint *)(iVar6 + 0x58) >> 8 & 1) == 0)) &&
       (iVar4 = in_ECX[1], iVar4 != 0)) {
      local_84[0] = iVar4;
      if ((*in_ECX == 0x4e45504f) || (*in_ECX == 0x4b434f4c)) {
        iVar6 = FUN_004299e0(iVar4);
        if ((int *)(&PTR_DAT_00b03e1c)[iVar6] == (int *)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(&PTR_DAT_00b03e1c)[iVar6];
        }
        _Format = " %s %s";
        uVar5 = DAT_00b334a8;
      }
      else if ((*(uint *)(iVar6 + 0x58) >> 3 & 1) == 0) {
        if ((*(uint *)(iVar6 + 0x58) >> 0x1e & 1) == 0) {
          if (*(int *)(iVar6 + 0x58) < 0) {
            _Format = " %d %s";
            uVar5 = DAT_00b334a0;
          }
          else {
            uVar5 = DAT_00b33488;
            if (iVar4 != 1) {
              uVar5 = DAT_00b33498;
            }
            _Format = " %d %s";
          }
        }
        else {
          FUN_00403c00();
          uVar5 = FUN_009828c0();
          _Format = " %s %d";
          iVar4 = DAT_00b334b8;
        }
      }
      else {
        _Format = " %d %s";
        uVar5 = DAT_00b33480;
      }
      _sprintf(local_74,_Format,iVar4,uVar5);
      FUN_00412fa0(local_74);
    }
    if (param_2 != 1) {
      if ((((*(uint *)(in_ECX[7] + 0x58) >> 9 & 1) == 0) &&
          ((*(uint *)(in_ECX[7] + 0x58) >> 9 & 1) == 0)) && ((in_ECX[4] != 0 && (0 < in_ECX[2])))) {
        uVar5 = FUN_00413370(DAT_00b334a0);
        _sprintf(local_74," %s %d %s",DAT_00b33470,uVar5);
        FUN_00412fa0(local_74);
      }
      if (((((*(uint *)(in_ECX[7] + 0x58) >> 7 & 1) == 0) &&
           ((*(uint *)(in_ECX[7] + 0x58) >> 7 & 1) == 0)) && (0 < in_ECX[3])) && (param_4 == '\0'))
      {
        iVar6 = FUN_004133c0();
        uVar5 = DAT_00b33478;
        if (iVar6 != 1) {
          uVar5 = DAT_00b33490;
        }
        _sprintf(local_74," %s %d %s",DAT_00b33460,iVar6,uVar5);
        FUN_00412fa0(local_74);
      }
      if (param_5 == '\0') {
        uVar5 = DAT_00b334e8;
        if (param_6 == '\0') {
          if ((undefined4 *)(&PTR_DAT_00b037e4)[in_ECX[4]] == (undefined4 *)0x0) {
            uVar5 = 0;
          }
          else {
            uVar5 = *(undefined4 *)(&PTR_DAT_00b037e4)[in_ECX[4]];
          }
        }
        _sprintf(local_74," %s %s",DAT_00b33468,uVar5);
        FUN_00412fa0(local_74);
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_00413fc0(undefined4 *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 uVar5;
  int iStack_18;
  undefined4 uStack_14;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1[7];
  uStack_14 = *param_1;
  iStack_18 = 0x413fd8;
  uStack_14 = FUN_00416870();
  *(undefined4 *)(in_ECX + 0x1c) = uStack_14;
  iStack_18 = 0x413fe6;
  FUN_00413710();
  uStack_14 = param_1[4];
  iStack_18 = 0x413ff1;
  FUN_00413410();
  if ((*(uint *)(param_1[7] + 0x58) >> 8 & 1) == 0) {
    iVar3 = param_1[1];
  }
  else {
    iVar3 = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (((*(uint *)(iVar1 + 0x58) >> 8 & 1) == 0) && (-1 < iVar3)) {
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    *(int *)(in_ECX + 4) = iVar3;
  }
  if (((*(uint *)(param_1[7] + 0x58) >> 9 & 1) == 0) && (param_1[4] != 0)) {
    iVar3 = param_1[2];
  }
  else {
    iVar3 = 0;
  }
  if ((((*(uint *)(iVar1 + 0x58) >> 9 & 1) == 0) && (*(int *)(in_ECX + 0x10) != 0)) && (-1 < iVar3))
  {
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    *(int *)(in_ECX + 8) = iVar3;
  }
  if ((*(uint *)(param_1[7] + 0x58) >> 7 & 1) == 0) {
    iVar3 = param_1[3];
  }
  else {
    iVar3 = 0;
  }
  if (((*(uint *)(iVar1 + 0x58) >> 7 & 1) == 0) && (-1 < iVar3)) {
    *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    *(int *)(in_ECX + 0xc) = iVar3;
  }
  iVar3 = *(int *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x14) = param_1[5];
  if (iVar3 != 0) {
    uStack_14 = *(undefined4 *)(iVar3 + 8);
    iStack_18 = 0x41409b;
    FUN_00401f20();
    *(undefined4 *)(iVar3 + 8) = 0;
    *(undefined2 *)(iVar3 + 0xe) = 0;
    *(undefined2 *)(iVar3 + 0xc) = 0;
    iStack_18 = iVar3;
    FUN_00401f20();
    *(undefined4 *)(in_ECX + 0x18) = 0;
  }
  if ((*(int *)(param_1[7] + 0x98) == 0x46464553) && (param_1[6] != 0)) {
    uStack_14 = 0x18;
    iStack_18 = 0x4140dd;
    puVar4 = (undefined4 *)FUN_00401f00();
    if (puVar4 == (undefined4 *)0x0) {
      puVar4 = (undefined4 *)0x0;
    }
    else {
      puVar4[2] = 0;
      *(undefined2 *)(puVar4 + 3) = 0;
      *(undefined2 *)((int)puVar4 + 0xe) = 0;
    }
    *(undefined4 **)(in_ECX + 0x18) = puVar4;
    if ((undefined4 *)param_1[6] == (undefined4 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)param_1[6];
    }
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = uVar5;
    }
    FUN_004139f0(&iStack_18);
    FUN_00413960();
    if (param_1[6] == 0) {
      uVar5 = *(undefined4 *)(param_1[7] + 100);
    }
    else {
      uVar5 = *(undefined4 *)(param_1[6] + 4);
    }
    if (*(int *)(in_ECX + 0x18) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x18) + 4) = uVar5;
      *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
    }
    if (param_1[6] == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(param_1[6] + 0x10);
    }
    if (*(int *)(in_ECX + 0x18) != 0) {
      *(undefined4 *)(*(int *)(in_ECX + 0x18) + 0x10) = uVar5;
    }
    if (param_1[6] == 0) {
      bVar2 = *(byte *)(param_1[7] + 0x58) & 1;
    }
    else {
      bVar2 = *(byte *)(param_1[6] + 0x14);
    }
    if (*(int *)(in_ECX + 0x18) != 0) {
      *(byte *)(*(int *)(in_ECX + 0x18) + 0x14) = bVar2;
    }
  }
  *(undefined4 *)(in_ECX + 0x20) = 0xbf800000;
  return;
}



undefined1 FUN_00414190(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  char *_Str2;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  int *in_ECX;
  int iVar13;
  char extraout_DL;
  undefined1 uVar14;
  int *unaff_FS_OFFSET;
  undefined4 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab169;
  local_c = *unaff_FS_OFFSET;
  uVar8 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar6 = false;
  bVar5 = false;
  if (*param_1 == *in_ECX) {
    uVar1 = *(uint *)(param_1[7] + 0x58);
    if ((uVar1 >> 8 & 1) == 0) {
      iVar13 = param_1[1];
    }
    else {
      iVar13 = 0;
    }
    iVar12 = in_ECX[7];
    uVar2 = *(uint *)(iVar12 + 0x58);
    if ((uVar2 >> 8 & 1) == 0) {
      iVar9 = in_ECX[1];
    }
    else {
      iVar9 = 0;
    }
    if (iVar13 == iVar9) {
      if (((uVar1 >> 9 & 1) == 0) && (param_1[4] != 0)) {
        iVar13 = param_1[2];
      }
      else {
        iVar13 = 0;
      }
      if (((uVar2 >> 9 & 1) == 0) && (in_ECX[4] != 0)) {
        iVar9 = in_ECX[2];
      }
      else {
        iVar9 = 0;
      }
      if (iVar13 == iVar9) {
        if ((uVar1 >> 7 & 1) == 0) {
          iVar13 = param_1[3];
        }
        else {
          iVar13 = 0;
        }
        if ((uVar2 >> 7 & 1) == 0) {
          iVar9 = in_ECX[3];
        }
        else {
          iVar9 = 0;
        }
        if ((((iVar13 == iVar9) && (param_1[4] == in_ECX[4])) && (param_1[5] == in_ECX[5])) &&
           ((*(int *)(param_1[7] + 0x98) == 0x46464553) == (*(int *)(iVar12 + 0x98) == 0x46464553)))
        {
          uVar14 = 0;
          if (*(int *)(iVar12 + 0x98) != 0x46464553) goto LAB_004143bb;
          piVar3 = (int *)param_1[6];
          if (piVar3 == (int *)0x0) {
            iVar13 = 0;
          }
          else {
            iVar13 = *piVar3;
          }
          piVar4 = (int *)in_ECX[6];
          if (piVar4 == (int *)0x0) {
            iVar9 = 0;
          }
          else {
            iVar9 = *piVar4;
          }
          if (iVar13 == iVar9) {
            if (piVar3 == (int *)0x0) {
              iVar13 = *(int *)(param_1[7] + 100);
            }
            else {
              iVar13 = piVar3[1];
            }
            if (piVar4 == (int *)0x0) {
              iVar12 = *(int *)(iVar12 + 100);
            }
            else {
              iVar12 = piVar4[1];
            }
            if (iVar13 != iVar12) goto LAB_0041437a;
            puVar10 = (undefined4 *)FUN_004139f0(local_14);
            local_4 = 0;
            puVar11 = (undefined4 *)FUN_004139f0(&local_1c);
            _Str2 = (char *)*puVar10;
            bVar6 = true;
            bVar5 = true;
            if ((_Str2 == (char *)0x0) || ((char *)*puVar11 == (char *)0x0)) {
              iVar13 = (uint)(_Str2 == (char *)0x0) * 2 + -1;
            }
            else {
              iVar13 = __stricmp((char *)*puVar11,_Str2);
            }
            if (iVar13 != 0) goto LAB_0041437a;
            FUN_00413470();
            cVar7 = FUN_00413470();
            if (extraout_DL != cVar7) goto LAB_0041437a;
            if (param_1[6] == 0) {
              iVar13 = 0;
            }
            else {
              iVar13 = *(int *)(param_1[6] + 0x10);
            }
            if (in_ECX[6] == 0) {
              iVar12 = 0;
            }
            else {
              iVar12 = *(int *)(in_ECX[6] + 0x10);
            }
            if (iVar13 != iVar12) goto LAB_0041437a;
            uVar14 = 0;
          }
          else {
LAB_0041437a:
            uVar14 = 1;
          }
          if (bVar5) {
            FUN_00401f20(local_1c,uVar8);
            local_1c = 0;
            local_16 = 0;
            local_18 = 0;
          }
          if (bVar6) {
            FUN_00401f20(local_14[0],uVar8);
          }
          goto LAB_004143bb;
        }
      }
    }
  }
  uVar14 = 1;
LAB_004143bb:
  *unaff_FS_OFFSET = local_c;
  return uVar14;
}



void FUN_004143e0(void)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a32594;
  if (0xf < *(uint *)(in_ECX + 0x24)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  in_ECX[0x10] = (exception)0x0;
  exception::~exception(in_ECX);
  return;
}



void FUN_00414420(int param_1,uint param_2,uint param_3)

{
  undefined4 *_Dst;
  int in_ECX;
  undefined4 *puVar1;
  uint _MaxCount;
  
  if (*(uint *)(param_1 + 0x14) < param_2) {
    FUN_009805af();
  }
  _MaxCount = *(int *)(param_1 + 0x14) - param_2;
  if (param_3 < _MaxCount) {
    _MaxCount = param_3;
  }
  if (in_ECX != param_1) {
    if (_MaxCount == 0xffffffff) {
      FUN_00980570();
    }
    if (*(uint *)(in_ECX + 0x18) < _MaxCount) {
      FUN_004135c0(_MaxCount,*(undefined4 *)(in_ECX + 0x14));
    }
    else if (_MaxCount == 0) {
      *(undefined4 *)(in_ECX + 0x14) = 0;
      if (*(uint *)(in_ECX + 0x18) < 0x10) {
        *(undefined1 *)(in_ECX + 4) = 0;
        return;
      }
      **(undefined1 **)(in_ECX + 4) = 0;
      return;
    }
    if (_MaxCount != 0) {
      if (*(uint *)(param_1 + 0x18) < 0x10) {
        param_1 = param_1 + 4;
      }
      else {
        param_1 = *(int *)(param_1 + 4);
      }
      puVar1 = (undefined4 *)(in_ECX + 4);
      _Dst = puVar1;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        _Dst = (undefined4 *)*puVar1;
      }
      _memcpy_s(_Dst,*(uint *)(in_ECX + 0x18),(void *)(param_1 + param_2),_MaxCount);
      *(uint *)(in_ECX + 0x14) = _MaxCount;
      if (0xf < *(uint *)(in_ECX + 0x18)) {
        puVar1 = (undefined4 *)*puVar1;
      }
      *(undefined1 *)((int)puVar1 + _MaxCount) = 0;
    }
    return;
  }
  FUN_004134e0(_MaxCount + param_2,0xffffffff);
  FUN_004134e0(0,param_2);
  return;
}



void FUN_00414500(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(in_ECX + 0x18);
  puVar3 = (undefined4 *)(in_ECX + 4);
  puVar2 = puVar3;
  if (0xf < uVar1) {
    puVar2 = (undefined4 *)*puVar3;
  }
  if (puVar2 <= param_1) {
    puVar2 = puVar3;
    if (0xf < uVar1) {
      puVar2 = (undefined4 *)*puVar3;
    }
    if (param_1 < (undefined4 *)(*(int *)(in_ECX + 0x14) + (int)puVar2)) {
      if (0xf < uVar1) {
        puVar3 = (undefined4 *)*puVar3;
      }
      FUN_00414420(in_ECX,(int)param_1 - (int)puVar3,param_2);
      return;
    }
  }
  if (param_2 == 0xffffffff) {
    FUN_00980570();
  }
  if (*(uint *)(in_ECX + 0x18) < param_2) {
    FUN_004135c0(param_2,*(undefined4 *)(in_ECX + 0x14));
  }
  else if (param_2 == 0) {
    *(undefined4 *)(in_ECX + 0x14) = 0;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)puVar3 = 0;
    return;
  }
  if (param_2 != 0) {
    puVar2 = puVar3;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar2 = (undefined4 *)*puVar3;
    }
    _memcpy_s(puVar2,*(uint *)(in_ECX + 0x18),param_1,param_2);
    *(uint *)(in_ECX + 0x14) = param_2;
    if (0xf < *(uint *)(in_ECX + 0x18)) {
      puVar3 = (undefined4 *)*puVar3;
    }
    *(undefined1 *)((int)puVar3 + param_2) = 0;
  }
  return;
}



undefined4 FUN_004145d0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_8;
  uint local_4;
  
  piVar1 = param_2;
  iVar3 = FUN_009832e6(param_2,0,&PTR_PTR_00b03280,&PTR_PTR_00b033c8,0);
  if (iVar3 == 0) {
    local_4 = 0;
    param_2 = (int *)0x0;
  }
  else {
    local_4 = (uint)(*(int *)(iVar3 + 0x34) == 3);
    param_2 = (int *)(uint)(*(int *)(iVar3 + 0x34) == 2);
  }
  iVar3 = (**(code **)(*piVar1 + 0x18))();
  if (iVar3 == 7) {
    cVar2 = FUN_00414eb0();
    uStack_8 = 1;
    if (cVar2 != '\0') goto LAB_0041463f;
  }
  uStack_8 = 0;
LAB_0041463f:
  uVar4 = (**(code **)(*piVar1 + 0x18))(param_3,local_4,uStack_8,param_2);
  FUN_00413be0(param_1,uVar4,param_3,local_4,uStack_8,param_2);
  return param_1;
}



void FUN_00414680(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_1,0,0xffffffff);
  return;
}



void FUN_004146b0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}



void FUN_004146e0(undefined4 param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8e58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00983c94(uVar1);
  *in_ECX = &PTR_FUN_00a32594;
  in_ECX[8] = 0;
  in_ECX[9] = 0xf;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  FUN_00414420(param_1,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00414750(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_00414500(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}



void FUN_00414790(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_ECX;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  undefined ***pppuStack_64;
  char *pcStack_60;
  uint uStack_5c;
  undefined1 local_50 [28];
  undefined **local_34 [10];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab198;
  local_c = *unaff_FS_OFFSET;
  uStack_5c = DAT_00b30aac ^ (uint)&stack0xffffffa8;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[7] = param_1;
  *in_ECX = *(undefined4 *)(param_1 + 0x98);
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[1] = 0;
  if ((*(uint *)(param_1 + 0x58) & 0x1180000) == 0) {
    uVar3 = 0x48;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x60);
  }
  in_ECX[5] = uVar3;
  in_ECX[8] = 0xbf800000;
  if (*(int *)(param_1 + 0x98) == 0x46464553) {
    pcStack_60 = (char *)0x18;
    pppuStack_64 = (undefined ***)0x414805;
    iVar2 = FUN_00401f00();
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined2 *)(iVar2 + 0xc) = 0;
      *(undefined2 *)(iVar2 + 0xe) = 0;
    }
    in_ECX[6] = iVar2;
    FUN_004134c0(&pppuStack_64);
    FUN_00413960();
    if (in_ECX[6] != 0) {
      *(undefined4 *)(in_ECX[6] + 4) = 4;
      in_ECX[8] = 0xbf800000;
    }
    if ((undefined4 *)in_ECX[6] != (undefined4 *)0x0) {
      *(undefined4 *)in_ECX[6] = 0;
    }
    if (in_ECX[6] != 0) {
      *(undefined4 *)(in_ECX[6] + 0x10) = 0;
    }
    if (in_ECX[6] != 0) {
      *(undefined1 *)(in_ECX[6] + 0x14) = 0;
    }
  }
  else {
    in_ECX[6] = 0;
  }
  uVar1 = *(uint *)(in_ECX[7] + 0x58);
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 5 & 1) == 0) {
      if ((uVar1 >> 6 & 1) == 0) {
        pcStack_60 = "EffectID does not allow any Range setting!";
        pppuStack_64 = (undefined ***)0x4148cd;
        FUN_00414750();
        pcStack_60 = local_50;
        local_4 = 0;
        pppuStack_64 = (undefined ***)0x4148df;
        FUN_004146e0();
        pcStack_60 = "";
        pppuStack_64 = local_34;
        local_34[0] = &PTR_FUN_00a325a0;
                    /* WARNING: Subroutine does not return */
        __CxxThrowException_8();
      }
      in_ECX[4] = 2;
    }
    else {
      in_ECX[4] = 1;
    }
  }
  else {
    in_ECX[4] = 0;
  }
  in_ECX[8] = 0xbf800000;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00414900(exception *param_1)

{
  exception *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c8f48;
  local_c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_c;
  std::exception::exception(in_ECX,param_1);
  *(undefined ***)in_ECX = &PTR_FUN_00a32594;
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  local_4 = 0;
  in_ECX[0x10] = (exception)0x0;
  FUN_00414420(param_1 + 0xc,0,0xffffffff);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004149a0(int param_1)

{
  int in_ECX;
  
  FUN_00414790(*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  FUN_00413fc0(param_1);
  return;
}



void FUN_004149d0(undefined4 param_1)

{
  FUN_00414790(param_1);
  return;
}



bool FUN_004149f0(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0xc);
}



void FUN_00414a00(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a3282c;
  in_ECX[3] = 0;
  return;
}



void FUN_00414a20(void)

{
  int in_ECX;
  undefined4 local_4;
  
  while( true ) {
    if (in_ECX == 0) {
      return;
    }
    if (*(undefined4 **)(in_ECX + 4) != (undefined4 *)0x0) {
      local_4 = **(undefined4 **)(in_ECX + 4);
      FUN_0046ae40(0x44494645,&local_4,4);
      FUN_00413070();
    }
    if (*(int *)(in_ECX + 8) == 0) break;
    in_ECX = *(int *)(in_ECX + 8) + -4;
  }
  return;
}



undefined4 FUN_00414a70(int param_1)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  for (piVar1 = (int *)(param_1 + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar4 = iVar4 + 1;
    }
  }
  iVar3 = 0;
  for (piVar1 = (int *)(in_ECX + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    if (*piVar1 != 0) {
      iVar3 = iVar3 + 1;
    }
  }
  if (iVar4 == iVar3) {
    if ((*(int *)(in_ECX + 8) != 0) || (*(int *)(in_ECX + 4) != 0)) {
      while (in_ECX != 0) {
        if (((*(int *)(in_ECX + 4) != 0) && (*(int *)(param_1 + 4) != 0)) &&
           (cVar2 = FUN_00414190(*(int *)(param_1 + 4)), cVar2 != '\0')) {
          return 1;
        }
        if (*(int *)(in_ECX + 8) == 0) {
          in_ECX = 0;
        }
        else {
          in_ECX = *(int *)(in_ECX + 8) + -4;
        }
        if (*(int *)(param_1 + 8) == 0) {
          param_1 = 0;
        }
        else {
          param_1 = *(int *)(param_1 + 8) + -4;
        }
      }
    }
    return 0;
  }
  return 1;
}



void FUN_00414b10(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = 0;
  if (-1 < param_1) {
    iVar6 = 0;
    for (piVar1 = (int *)(in_ECX + 4); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
      if (*piVar1 != 0) {
        iVar6 = iVar6 + 1;
      }
    }
    if ((param_1 < iVar6) && (iVar6 = 0, in_ECX != 0)) {
      while( true ) {
        piVar1 = (int *)(in_ECX + 4);
        iVar5 = 0;
        piVar4 = piVar1;
        if (piVar1 == (int *)0x0) break;
        do {
          if (*piVar4 != 0) {
            iVar5 = iVar5 + 1;
          }
          piVar2 = piVar4 + 1;
          piVar4 = (int *)*piVar2;
        } while ((int *)*piVar2 != (int *)0x0);
        if (iVar5 == 0) {
          return;
        }
        if (param_1 < iVar6) {
          return;
        }
        if (iVar3 != 0) {
          return;
        }
        if (iVar6 == param_1) {
          iVar3 = *piVar1;
        }
        else {
          iVar6 = iVar6 + 1;
          if (*(int *)(in_ECX + 8) == 0) {
            return;
          }
          in_ECX = *(int *)(in_ECX + 8) + -4;
        }
        if (in_ECX == 0) {
          return;
        }
      }
    }
  }
  return;
}



void FUN_00414b90(undefined4 param_1)

{
  char cVar1;
  int in_ECX;
  
  FUN_0067b1e0(param_1);
  cVar1 = FUN_00413470();
  if (cVar1 != '\0') {
    *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  }
  return;
}



void FUN_00414bc0(int param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  piVar2 = (int *)(in_ECX + 4);
  if (piVar2 != (int *)0x0) {
    while (*piVar2 != param_1) {
      piVar2 = (int *)piVar2[1];
      if (piVar2 == (int *)0x0) {
        return;
      }
    }
    FUN_0065c620(param_1);
    cVar1 = FUN_00413470();
    if (cVar1 != '\0') {
      *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + -1;
    }
  }
  return;
}



void FUN_00414c00(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  bVar1 = false;
  if (0 < param_2) {
    if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 4) == 0)) {
      return;
    }
    if (param_1 != 0) {
      while (!bVar1) {
        if ((*(int **)(param_1 + 4) != (int *)0x0) && (iVar2 = 0, 0 < param_2)) {
          piVar3 = &param_2;
          do {
            if (bVar1) break;
            piVar3 = piVar3 + 1;
            if (**(int **)(param_1 + 4) == *piVar3) {
              bVar1 = true;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < param_2);
        }
        if (*(int *)(param_1 + 8) == 0) {
          return;
        }
        param_1 = *(int *)(param_1 + 8) + -4;
        if (param_1 == 0) {
          return;
        }
      }
    }
  }
  return;
}



void FUN_00414c70(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  while( true ) {
    while( true ) {
      if (in_ECX == 0) {
        return;
      }
      iVar1 = *(int *)(in_ECX + 4);
      if (iVar1 == 0) break;
      FUN_00413bb0();
      FUN_00401f20(iVar1);
      puVar2 = *(undefined4 **)(in_ECX + 8);
      if (puVar2 == (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 4) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 8) = puVar2[1];
        *(undefined4 *)(in_ECX + 4) = *puVar2;
        FUN_00401f20(puVar2);
      }
    }
    if (*(int *)(in_ECX + 8) == 0) break;
    in_ECX = *(int *)(in_ECX + 8) + -4;
  }
  return;
}



void FUN_00414cd0(void)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  
  bVar2 = false;
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return;
  }
  if (in_ECX != 0) {
    while (!bVar2) {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x58) >> 0x12 & 1) != 0)) {
        bVar2 = true;
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return;
      }
    }
  }
  return;
}



void FUN_00414d10(void)

{
  int iVar1;
  bool bVar2;
  int in_ECX;
  
  bVar2 = false;
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return;
  }
  if (in_ECX != 0) {
    while (!bVar2) {
      iVar1 = *(int *)(*(int *)(in_ECX + 4) + 0x1c);
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x58) & 0x70000) != 0)) {
        bVar2 = true;
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return;
      }
    }
  }
  return;
}



char FUN_00414d50(int param_1)

{
  char cVar1;
  int in_ECX;
  int *piVar2;
  
  cVar1 = '\0';
  if (in_ECX != 0) {
    for (piVar2 = (int *)(in_ECX + 4); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      if (param_1 == *piVar2) {
        return cVar1;
      }
      cVar1 = cVar1 + '\x01';
    }
  }
  FUN_004a7a60(
              "When trying to get an effect item index, the effect item was not found in the effect item list."
              );
  return '\0';
}



undefined4 FUN_00414d80(char param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  char cVar2;
  
  cVar2 = '\0';
  if (in_ECX != 0) {
    for (puVar1 = (undefined4 *)(in_ECX + 4); puVar1 != (undefined4 *)0x0;
        puVar1 = (undefined4 *)puVar1[1]) {
      if (cVar2 == param_1) {
        return *puVar1;
      }
      cVar2 = cVar2 + '\x01';
    }
  }
  FUN_004a7a60(
              "When trying to get an effect item by its index, the index was larger than the size of the list."
              );
  return 0;
}



void FUN_00414dc0(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int in_ECX;
  int *piVar6;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009bd8ab;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00414c70(uVar2);
  for (; param_1 != 0; param_1 = *(int *)(param_1 + 8) + -4) {
    iVar4 = *(int *)(param_1 + 4);
    if (iVar4 != 0) {
      iVar3 = FUN_00401f00(0x24);
      local_4 = 0;
      if (iVar3 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = FUN_004149a0(iVar4);
      }
      local_4 = 0xffffffff;
      if (iVar4 != 0) {
        piVar6 = (int *)(in_ECX + 4);
        iVar3 = *(int *)(in_ECX + 8);
        while (iVar3 != 0) {
          piVar6 = (int *)piVar6[1];
          iVar3 = piVar6[1];
        }
        if (*piVar6 == 0) {
          *piVar6 = iVar4;
        }
        else {
          piVar5 = (int *)FUN_00401f00(8);
          if (piVar5 == (int *)0x0) {
            piVar6[1] = 0;
          }
          else {
            *piVar5 = iVar4;
            piVar5[1] = 0;
            piVar6[1] = (int)piVar5;
          }
        }
      }
      cVar1 = FUN_00413470();
      if (cVar1 != '\0') {
        *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
      }
    }
    if (*(int *)(param_1 + 8) == 0) break;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_00414eb0(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return 0;
  }
  while( true ) {
    if (in_ECX == 0) {
      return 1;
    }
    if (((*(int *)(in_ECX + 4) != 0) &&
        ((*(uint *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x58) >> 0x16 & 1) == 0)) &&
       (cVar1 = FUN_00413470(), cVar1 == '\0')) break;
    if (*(int *)(in_ECX + 8) == 0) {
      return 1;
    }
    in_ECX = *(int *)(in_ECX + 8) + -4;
  }
  return 0;
}



char FUN_00414f00(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int in_ECX;
  bool bVar3;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar2 = '\0';
  if (in_ECX != 0) {
    while (cVar2 == '\0') {
      piVar1 = *(int **)(in_ECX + 4);
      bVar3 = true;
      if (piVar1 != (int *)0x0) {
        if ((param_2 != 0x48) && ((*(uint *)(piVar1[7] + 0x58) & 0x180000) != 0)) {
          bVar3 = piVar1[5] == param_2;
        }
        if (((*piVar1 == param_1) && ((*(uint *)(piVar1[7] + 0x58) >> 0x16 & 1) == 0)) && (bVar3)) {
          cVar2 = '\x01';
        }
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar2;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar2;
      }
    }
  }
  return cVar2;
}



char FUN_00414f80(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  char cVar3;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar3 = '\0';
  if (in_ECX != 0) {
    while (cVar3 == '\0') {
      iVar1 = *(int *)(in_ECX + 4);
      if (((iVar1 != 0) && (iVar2 = FUN_00412cc0(), iVar2 == param_1)) &&
         ((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0)) {
        cVar3 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar3;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar3;
      }
    }
  }
  return cVar3;
}



char FUN_00414fe0(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar2 = '\0';
  if (in_ECX != 0) {
    while (cVar2 == '\0') {
      iVar1 = *(int *)(in_ECX + 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == 2)) &&
         ((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0)) {
        cVar2 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar2;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar2;
      }
    }
  }
  return cVar2;
}



char FUN_00415030(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar2 = '\0';
  if (in_ECX != 0) {
    while (cVar2 == '\0') {
      iVar1 = *(int *)(in_ECX + 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == 1)) &&
         ((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0)) {
        cVar2 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar2;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar2;
      }
    }
  }
  return cVar2;
}



char FUN_00415080(void)

{
  int iVar1;
  char cVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar2 = '\0';
  if (in_ECX != 0) {
    while (cVar2 == '\0') {
      iVar1 = *(int *)(in_ECX + 4);
      if (((iVar1 != 0) && (*(int *)(iVar1 + 0x10) == 0)) &&
         ((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0)) {
        cVar2 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar2;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar2;
      }
    }
  }
  return cVar2;
}



char FUN_004150d0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  char cVar3;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar3 = '\0';
  if (in_ECX != 0) {
    while (cVar3 == '\0') {
      iVar1 = *(int *)(in_ECX + 4);
      if (((iVar1 != 0) && (iVar2 = FUN_00413370(), 1 < iVar2)) &&
         ((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0)) {
        cVar3 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar3;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar3;
      }
    }
  }
  return cVar3;
}



char FUN_00415130(uint param_1)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return '\0';
  }
  cVar2 = '\0';
  if (in_ECX != 0) {
    while (cVar2 == '\0') {
      if (((*(int *)(in_ECX + 4) != 0) &&
          (uVar1 = *(uint *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x58), (param_1 & uVar1) != 0))
         && ((uVar1 >> 0x16 & 1) == 0)) {
        cVar2 = '\x01';
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return cVar2;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return cVar2;
      }
    }
  }
  return cVar2;
}



void FUN_00415180(void)

{
  bool bVar1;
  int in_ECX;
  
  bVar1 = false;
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return;
  }
  if (in_ECX != 0) {
    while (!bVar1) {
      if ((*(int *)(in_ECX + 4) != 0) &&
         ((*(uint *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x58) >> 0x16 & 1) != 0)) {
        bVar1 = true;
      }
      if (*(int *)(in_ECX + 8) == 0) {
        return;
      }
      in_ECX = *(int *)(in_ECX + 8) + -4;
      if (in_ECX == 0) {
        return;
      }
    }
  }
  return;
}



float10 FUN_004151c0(undefined4 param_1)

{
  int in_ECX;
  float10 fVar1;
  float local_4;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return (float10)0;
  }
  local_4 = 0.0;
  if (in_ECX != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x58) >> 0x16 & 1) == 0) {
        fVar1 = (float10)FUN_00413890(param_1);
        local_4 = (float)(fVar1 + (float10)local_4);
      }
    } while ((*(int *)(in_ECX + 8) != 0) && (in_ECX = *(int *)(in_ECX + 8) + -4, in_ECX != 0));
    fVar1 = (float10)0;
    if ((float10)local_4 < fVar1) goto LAB_00415231;
  }
  fVar1 = (float10)FUN_00404f70(local_4);
LAB_00415231:
  return (float10)(float)fVar1;
}



float10 FUN_00415240(void)

{
  int in_ECX;
  float10 fVar1;
  float local_4;
  
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return (float10)0;
  }
  local_4 = 0.0;
  if (in_ECX != 0) {
    do {
      if ((*(uint *)(*(int *)(*(int *)(in_ECX + 4) + 0x1c) + 0x58) >> 0x16 & 1) == 0) {
        fVar1 = (float10)FUN_00413810();
        local_4 = (float)(fVar1 + (float10)local_4);
      }
    } while ((*(int *)(in_ECX + 8) != 0) && (in_ECX = *(int *)(in_ECX + 8) + -4, in_ECX != 0));
    fVar1 = (float10)0;
    if ((float10)local_4 < fVar1) goto LAB_004152a9;
  }
  fVar1 = (float10)FUN_00404f70(local_4);
LAB_004152a9:
  return (float10)(float)fVar1;
}



int FUN_004152c0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if ((*(int *)(in_ECX + 8) == 0) && (*(int *)(in_ECX + 4) == 0)) {
    return 0;
  }
  iVar4 = -1;
  while( true ) {
    if (in_ECX == 0) {
      return local_4;
    }
    iVar1 = *(int *)(in_ECX + 4);
    FUN_00413890(0);
    iVar2 = FUN_009828c0();
    if (((((*(uint *)(*(int *)(iVar1 + 0x1c) + 0x58) >> 0x16 & 1) == 0) && (iVar4 < iVar2)) &&
        ((param_2 == '\0' || (iVar3 = FUN_00413370(), 0 < iVar3)))) &&
       ((param_1 == 3 || (*(int *)(iVar1 + 0x10) == param_1)))) {
      iVar4 = iVar2;
      local_4 = iVar1;
    }
    if (*(int *)(in_ECX + 8) == 0) break;
    in_ECX = *(int *)(in_ECX + 8) + -4;
  }
  return local_4;
}



undefined4 FUN_00415360(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004152c0(3,0);
  if (iVar1 != 0) {
    uVar2 = FUN_00412f20();
    uVar2 = FUN_0041b770(uVar2);
    return uVar2;
  }
  return 0xffffffff;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_00415390(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *unaff_FS_OFFSET;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  char acStack_74 [100];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab209;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_84;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff6c;
  *unaff_FS_OFFSET = (int)&local_c;
  local_78 = param_1;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  local_4 = 0;
  local_80 = 1;
  FUN_00401f20(0,uVar1);
  *param_1 = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  iVar2 = FUN_004152c0(3,0);
  if (iVar2 != 0) {
    local_7c = DAT_00b334f8;
    local_84 = DAT_00b334f0;
    uVar3 = (**(code **)(*in_ECX + 8))();
    uVar3 = FUN_0056a360(uVar3);
    uVar3 = FUN_00412f20(local_7c,uVar3);
    uVar3 = FUN_0041b770(uVar3);
    uVar3 = FUN_00565cc0(uVar3);
    _sprintf(acStack_74,"%s%s%s%d",local_84,uVar3);
    FUN_004028d0(acStack_74,0);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_004154b0(undefined4 param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  char *pcVar9;
  int *unaff_FS_OFFSET;
  undefined4 local_20;
  int local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14 [2];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab25b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffd0;
  *unaff_FS_OFFSET = (int)&local_c;
  local_20 = 0xffffffff;
  FUN_004510e0(&local_20);
  iVar3 = FUN_00416870(local_20,uVar2);
  iVar8 = 0;
  if (iVar3 == 0) {
    piVar4 = (int *)FUN_009832e6();
    if (piVar4 == (int *)0x0) {
      if (param_2 == (char *)0x0) {
        param_2 = "{unknown}";
      }
      FUN_004a7a60("Unable to find EffectSetting %d in spell \'%s\'.",local_20,param_2);
    }
    else {
      uVar7 = (**(code **)(*piVar4 + 0xd4))(piVar4[3]);
      FUN_004a7a60("Unable to find EffectSetting %d in spell \'%s\' (%08X).",local_20,uVar7);
    }
  }
  else {
    local_1c = FUN_00401f00(0x24);
    local_4 = 0;
    if (local_1c != 0) {
      iVar8 = FUN_004149d0(iVar3);
    }
    local_4 = 0xffffffff;
    if (iVar8 != 0) {
      cVar1 = FUN_00413130(param_1,param_2);
      if (cVar1 == '\0') {
        piVar4 = (int *)FUN_009832e6();
        if (piVar4 == (int *)0x0) {
          pcVar9 = "{unknown}";
          if (param_2 != (char *)0x0) {
            pcVar9 = param_2;
          }
          puVar5 = (undefined4 *)FUN_004134c0(&local_1c);
          local_4 = 2;
          FUN_004a7a60("Unable to load EffectItem \'%s\' in spell \'%s\'",*puVar5,pcVar9);
          local_4 = 0xffffffff;
          FUN_00401f20(local_1c);
          local_1c = 0;
          local_16 = 0;
          local_18 = 0;
        }
        else {
          puVar5 = (undefined4 *)FUN_004134c0(local_14);
          uVar7 = *puVar5;
          local_4 = 1;
          uVar6 = (**(code **)(*piVar4 + 0xd4))(piVar4[3]);
          FUN_004a7a60("Unable to load EffectItem \'%s\' in spell \'%s\' (%08X).",uVar7,uVar6);
          local_4 = 0xffffffff;
          FUN_00401f20(local_14[0]);
        }
        FUN_00413bb0();
        FUN_00401f20(iVar8);
      }
      else {
        FUN_0067b1e0(iVar8);
        cVar1 = FUN_00413470();
        if (cVar1 != '\0') {
          *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
        }
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_004156b0(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab299;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  local_4 = 0;
  iVar3 = FUN_004152c0(3,0);
  uVar1 = DAT_00b33500;
  if (iVar3 != 0) {
    uVar4 = FUN_00412f20(uVar2);
    uVar4 = FUN_0041b770(uVar4);
    uVar4 = FUN_00565cc0(uVar4);
    FUN_00402e30(param_1,"%s: %s",uVar1,uVar4);
  }
  *unaff_FS_OFFSET = local_c;
  return param_1;
}



void FUN_00415740(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa4);
  if (iVar1 < 0) {
    *(int *)(in_ECX + 0xa4) = iVar1 + -1;
    return;
  }
  *(int *)(in_ECX + 0xa4) = iVar1 + 1;
  return;
}



void FUN_00415760(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa4);
  if (iVar1 < 0) {
    *(int *)(in_ECX + 0xa4) = iVar1 + 1;
    return;
  }
  if (0 < iVar1) {
    *(int *)(in_ECX + 0xa4) = iVar1 + -1;
  }
  return;
}



bool FUN_00415780(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0xa4);
}



bool FUN_00415790(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0xa4) < 0;
}



void FUN_004157a0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa0);
  if (iVar1 < 0) {
    *(int *)(in_ECX + 0xa0) = iVar1 + -1;
    return;
  }
  *(int *)(in_ECX + 0xa0) = iVar1 + 1;
  return;
}



void FUN_004157c0(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0xa0);
  if (iVar1 < 0) {
    *(int *)(in_ECX + 0xa0) = iVar1 + 1;
    return;
  }
  if (0 < iVar1) {
    *(int *)(in_ECX + 0xa0) = iVar1 + -1;
  }
  return;
}



bool FUN_004157e0(void)

{
  int in_ECX;
  
  return 0 < *(int *)(in_ECX + 0xa0);
}



bool FUN_004157f0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0xa0) < 0;
}



void FUN_00415800(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  
  FUN_0046b990();
  FUN_0046c730();
  FUN_0046a700();
  FUN_00470070(0x4e4f4349);
  FUN_0046d8b0(0x4c444f4d,0x42444f4d,0x54444f4d);
  iVar1 = *(int *)(in_ECX + 0x80);
  if (iVar1 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar1 + 0xc);
  }
  *(undefined4 *)(in_ECX + 0x80) = uVar8;
  iVar2 = *(int *)(in_ECX + 0x84);
  if (iVar2 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar2 + 0xc);
  }
  *(undefined4 *)(in_ECX + 0x84) = uVar8;
  iVar3 = *(int *)(in_ECX + 0x88);
  if (iVar3 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar3 + 0xc);
  }
  *(undefined4 *)(in_ECX + 0x88) = uVar8;
  iVar4 = *(int *)(in_ECX + 0x8c);
  if (iVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar4 + 0xc);
  }
  iVar5 = *(int *)(in_ECX + 0x78);
  *(undefined4 *)(in_ECX + 0x8c) = uVar8;
  if (iVar5 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar5 + 0xc);
  }
  iVar6 = *(int *)(in_ECX + 0x7c);
  *(undefined4 *)(in_ECX + 0x78) = uVar8;
  if (iVar6 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar6 + 0xc);
  }
  iVar7 = *(int *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x7c) = uVar8;
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(iVar7 + 0xc);
  }
  *(undefined4 *)(in_ECX + 0x70) = uVar8;
  FUN_0046ae40(0x41544144,in_ECX + 0x58,0x40);
  *(int *)(in_ECX + 0x88) = iVar3;
  *(int *)(in_ECX + 0x70) = iVar7;
  *(int *)(in_ECX + 0x80) = iVar1;
  *(int *)(in_ECX + 0x78) = iVar5;
  *(int *)(in_ECX + 0x7c) = iVar6;
  *(int *)(in_ECX + 0x84) = iVar2;
  *(int *)(in_ECX + 0x8c) = iVar4;
  if ((*(short *)(in_ECX + 0x6c) != 0) && (*(int *)(in_ECX + 0x9c) != 0)) {
    FUN_0046ae40(0x45435345,*(int *)(in_ECX + 0x9c),*(short *)(in_ECX + 0x6c) * 4);
  }
  FUN_0046b9f0();
  return;
}



undefined4 FUN_00415bc0(undefined4 param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  
  iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03534,0);
  if (((((((iVar3 != 0) && (cVar2 = FUN_0046ad70(param_1), cVar2 == '\0')) &&
         (*(int *)(in_ECX + 0x98) == *(int *)(iVar3 + 0x98))) &&
        ((*(int *)(in_ECX + 0x58) == *(int *)(iVar3 + 0x58) &&
         (*(float *)(iVar3 + 0x5c) == *(float *)(in_ECX + 0x5c))))) &&
       ((*(int *)(in_ECX + 0x60) == *(int *)(iVar3 + 0x60) &&
        ((*(int *)(in_ECX + 100) == *(int *)(iVar3 + 100) &&
         (*(int *)(in_ECX + 0x68) == *(int *)(iVar3 + 0x68))))))) &&
      (*(int *)(in_ECX + 0x70) == *(int *)(iVar3 + 0x70))) &&
     (((((*(int *)(in_ECX + 0x78) == *(int *)(iVar3 + 0x78) &&
         (*(int *)(in_ECX + 0x7c) == *(int *)(iVar3 + 0x7c))) &&
        (*(float *)(iVar3 + 0x74) == *(float *)(in_ECX + 0x74))) &&
       (((*(int *)(in_ECX + 0x80) == *(int *)(iVar3 + 0x80) &&
         (*(int *)(in_ECX + 0x84) == *(int *)(iVar3 + 0x84))) &&
        ((*(int *)(in_ECX + 0x88) == *(int *)(iVar3 + 0x88) &&
         ((*(int *)(in_ECX + 0x8c) == *(int *)(iVar3 + 0x8c) &&
          (*(float *)(iVar3 + 0x90) == *(float *)(in_ECX + 0x90))))))))) &&
      ((*(float *)(iVar3 + 0x94) == *(float *)(in_ECX + 0x94) &&
       (sVar1 = *(short *)(in_ECX + 0x6c), sVar1 == *(short *)(iVar3 + 0x6c))))))) {
    iVar4 = 0;
    if (0 < sVar1) {
      piVar5 = *(int **)(in_ECX + 0x9c);
      iVar3 = *(int *)(iVar3 + 0x9c) - (int)piVar5;
      do {
        if (*piVar5 != *(int *)(iVar3 + (int)piVar5)) {
          return 1;
        }
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar4 < sVar1);
    }
    return 0;
  }
  return 1;
}



void FUN_00415d40(ushort param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_00401e40(*(int *)(in_ECX + 0x9c));
    *(undefined4 *)(in_ECX + 0x9c) = 0;
  }
  if (param_1 != 0) {
    uVar3 = (uint)param_1;
    iVar2 = thunk_FUN_00401aa0(uVar3 * 4,1);
    *(int *)(in_ECX + 0x9c) = iVar2;
    if (iVar2 != 0) {
      iVar2 = 0;
      *(ushort *)(in_ECX + 0x6c) = param_1;
      if (uVar3 != 0) {
        param_2 = param_2 + -4;
        do {
          puVar1 = (undefined4 *)(param_2 + 4);
          param_2 = param_2 + 4;
          *(undefined4 *)(*(int *)(in_ECX + 0x9c) + iVar2 * 4) = *puVar1;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)uVar3);
      }
    }
  }
  return;
}



void FUN_00415dc0(ushort param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  
  if (0 < *(short *)(in_ECX + 0x6c)) {
    FUN_00401e40(*(undefined4 *)(in_ECX + 0x9c));
    *(undefined4 *)(in_ECX + 0x9c) = 0;
    *(undefined2 *)(in_ECX + 0x6c) = 0;
  }
  if (param_1 != 0) {
    uVar2 = (uint)param_1;
    iVar1 = thunk_FUN_00401aa0(uVar2 * 4,1);
    *(int *)(in_ECX + 0x9c) = iVar1;
    if (iVar1 != 0) {
      iVar1 = 0;
      *(ushort *)(in_ECX + 0x6c) = param_1;
      if (uVar2 != 0) {
        do {
          *(undefined4 *)(*(int *)(in_ECX + 0x9c) + iVar1 * 4) =
               *(undefined4 *)(param_2 + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < (int)uVar2);
      }
    }
  }
  return;
}



int FUN_00415e50(void)

{
  int iVar1;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0xa4)) {
    FUN_004a7a60("Trying to Queue up a Magic Effect Associated Item which is already loaded");
    return *(int *)(in_ECX + 0xa4);
  }
  iVar1 = *(int *)(in_ECX + 0xa4) + -1;
  *(int *)(in_ECX + 0xa4) = iVar1;
  return iVar1;
}



void FUN_00415e80(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_009828c0();
  *(undefined4 *)(in_ECX + 0xa4) = uVar1;
  return;
}



int FUN_00415eb0(void)

{
  int iVar1;
  int in_ECX;
  
  if (0 < *(int *)(in_ECX + 0xa0)) {
    FUN_004a7a60("Trying to Queue up a Magic Effect Associated Item which is already loaded");
    return *(int *)(in_ECX + 0xa0);
  }
  iVar1 = *(int *)(in_ECX + 0xa0) + -1;
  *(int *)(in_ECX + 0xa0) = iVar1;
  return iVar1;
}



void FUN_00415ee0(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = FUN_009828c0();
  *(undefined4 *)(in_ECX + 0xa0) = uVar1;
  return;
}



void FUN_00415f10(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ab33d;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a32b14;
  in_ECX[6] = &PTR_FUN_00a32af0;
  in_ECX[0xc] = &PTR_LAB_00a32ad8;
  in_ECX[0xe] = &PTR_FUN_00a32ac4;
  in_ECX[0x11] = &PTR_FUN_00a32aa8;
  local_4 = 3;
  if (in_ECX[0x27] != 0) {
    FUN_00401e40(in_ECX[0x27]);
  }
  thunk_FUN_0046b170(uVar1);
  local_4._0_1_ = 2;
  FUN_00470040();
  FUN_00401f20(in_ECX[0xf]);
  in_ECX[0xf] = 0;
  *(undefined2 *)((int)in_ECX + 0x42) = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00416000(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uVar3;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03534,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(iVar1 + 0x98);
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(iVar1 + 0x90);
    *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(iVar1 + 0x94);
    *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(iVar1 + 0x78);
    *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(iVar1 + 0x84);
    *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(iVar1 + 0x88);
    *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
    FUN_00415dc0(*(undefined2 *)(iVar1 + 0x6c),*(undefined4 *)(iVar1 + 0x9c));
    if (((*(uint *)(in_ECX + 8) >> 0xe & 1) == 0) && (*(int *)(in_ECX + 0xc) == 0)) {
      uVar3 = 1;
      uVar2 = FUN_00448d40(1);
      FUN_0046c300(uVar2,uVar3);
    }
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_00416100(undefined4 param_1)

{
  uint *_Dst;
  byte bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int *in_ECX;
  uint uVar8;
  
  iVar4 = FUN_004511c0();
  if (iVar4 == 0xc) {
    FUN_00451210(in_ECX);
    iVar4 = FUN_004510b0();
    while (iVar4 != 0) {
      if (iVar4 < 0x45435346) {
        if (iVar4 == 0x45435345) {
          if (in_ECX[0x27] != 0) {
            FUN_00401e40(in_ECX[0x27]);
          }
          if ((short)in_ECX[0x1b] != 0) {
            iVar4 = (short)in_ECX[0x1b] * 4;
            iVar6 = thunk_FUN_00401aa0(iVar4,1);
            in_ECX[0x27] = iVar6;
            if (iVar6 != 0) {
              FUN_00450c20(iVar6,iVar4);
            }
          }
        }
        else if (iVar4 < 0x43534545) {
          if (iVar4 == 0x43534544) {
            if (in_ECX == (int *)0x0) {
              FUN_0046a390(0,param_1);
            }
            else {
              FUN_0046a390(in_ECX + 0xc,param_1);
            }
          }
          else if (iVar4 == 0x41544144) {
            iVar4 = in_ECX[0x18];
            uVar8 = in_ECX[0x16];
            _Dst = (uint *)(in_ECX + 0x16);
            bVar1 = *(byte *)((int)in_ECX + 0x5b);
            _memset(_Dst,0,0x40);
            in_ECX[0x1d] = 0x3f800000;
            FUN_00450c20(_Dst,0x40);
            iVar6 = 0;
            if (0 < DAT_00b034c0) {
              do {
                if ((&DAT_00b0341c)[iVar6 * 8] != '\0') {
                  uVar2 = (&DAT_00b03418)[iVar6 * 2];
                  if ((*_Dst & uVar2) == 0) {
                    uVar8 = uVar8 & ~uVar2;
                  }
                  else {
                    uVar8 = uVar8 | uVar2;
                  }
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < DAT_00b034c0);
            }
            iVar6 = 0;
            if (0 < DAT_00b034dc) {
              do {
                uVar2 = (&DAT_00b034c4)[iVar6];
                if ((*_Dst & uVar2) == 0) {
                  uVar8 = uVar8 & ~uVar2;
                }
                else {
                  uVar8 = uVar8 | uVar2;
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < DAT_00b034dc);
            }
            *_Dst = uVar8;
            if ((bVar1 & 1) != 0) {
              *_Dst = uVar8 | 0x1000000;
              in_ECX[0x18] = iVar4;
            }
            *_Dst = *_Dst & 0xffdfffff;
          }
          else if (iVar4 == 0x42444f4d) goto LAB_00416325;
        }
        else if (iVar4 == 0x44494445) {
          FUN_00450c20(&stack0xffffffe8,0x200);
          (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
        }
      }
      else if (iVar4 < 0x4e4f434a) {
        if (iVar4 == 0x4e4f4349) {
          if (in_ECX == (int *)0x0) {
            FUN_004700e0(0,param_1);
          }
          else {
            FUN_004700e0(in_ECX + 0x11,param_1);
          }
        }
        else {
          if (iVar4 == 0x4c444f4d) goto LAB_00416325;
          if (iVar4 == 0x4c4c5546) {
            if (in_ECX == (int *)0x0) {
              FUN_0046c7a0(0,param_1);
            }
            else {
              FUN_0046c7a0(in_ECX + 0xe,param_1);
            }
          }
        }
      }
      else if (iVar4 == 0x54444f4d) {
LAB_00416325:
        if (in_ECX == (int *)0x0) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = in_ECX + 6;
        }
        FUN_0046db00(piVar7,param_1);
      }
      cVar3 = FUN_0044fea0();
      if (cVar3 == '\0') break;
      iVar4 = FUN_004510b0();
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



undefined4 FUN_00416370(int param_1,char param_2,uint param_3)

{
  uint uVar1;
  char cVar2;
  int in_ECX;
  bool bVar3;
  
  if (param_1 == 0) {
    return 1;
  }
  if ((*(code **)(param_1 + 0x50) != (code *)0x0) &&
     (cVar2 = (**(code **)(param_1 + 0x50))(), cVar2 == '\0')) {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x58);
  if (uVar1 != 0) {
    if (param_2 == '\0') {
      bVar3 = (*(uint *)(in_ECX + 0x58) & uVar1) == uVar1;
    }
    else {
      bVar3 = (*(uint *)(in_ECX + 0x58) & uVar1) != 0;
    }
    if (!bVar3) {
      return 0;
    }
  }
  if ((((param_3 == 0) || ((*(uint *)(in_ECX + 0x58) & param_3) != param_3)) &&
      ((*(uint *)(in_ECX + 0x58) >> 0x17 & 1) == 0)) &&
     ((*(int *)(param_1 + 100) == 6 || (*(int *)(in_ECX + 100) == *(int *)(param_1 + 100))))) {
    return 1;
  }
  return 0;
}



int FUN_00416410(void)

{
  int in_ECX;
  
  return (*(uint *)(in_ECX + 0x58) >> 0x1a & 1) + (*(uint *)(in_ECX + 0x58) >> 0x19 & 1) * 2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416430(void)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab37e;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar2);
  local_4 = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 1;
  FUN_0046a400();
  in_ECX[0xe] = &PTR_FUN_00a322a0;
  in_ECX[0xf] = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)((int)in_ECX + 0x42) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_0046ffd0();
  in_ECX[0x11] = &PTR_FUN_00a320a4;
  in_ECX[0x17] = 0;
  *in_ECX = &PTR_FUN_00a32b14;
  in_ECX[0x1d] = 0x3f800000;
  in_ECX[6] = &PTR_FUN_00a32af0;
  in_ECX[0xc] = &PTR_LAB_00a32ad8;
  in_ECX[0xe] = &PTR_FUN_00a32ac4;
  in_ECX[0x11] = &PTR_FUN_00a32aa8;
  in_ECX[0x26] = 0xffffffff;
  in_ECX[0x16] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 6;
  in_ECX[0x1a] = 0x48;
  *(undefined2 *)(in_ECX + 0x1b) = 0;
  in_ECX[0x1c] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0;
  in_ECX[0x23] = 0;
  in_ECX[0x24] = _DAT_00b33704;
  uVar1 = _DAT_00b3370c;
  in_ECX[0x27] = 0;
  in_ECX[0x25] = uVar1;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 1) = 0xc;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00416560(byte param_1)

{
  FUN_00415f10();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00416580(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_8 [2];
  
  puVar1 = (undefined4 *)FUN_004134c0(local_8);
  if ((param_1 == (char *)0x0) || ((char *)*puVar1 == (char *)0x0)) {
    iVar2 = (uint)(param_1 == (char *)0x0) * 2 + -1;
  }
  else {
    iVar2 = __stricmp((char *)*puVar1,param_1);
  }
  FUN_00401f20(local_8[0]);
  if (iVar2 != 0) {
    FUN_004028d0(param_1,0);
  }
  return;
}



void FUN_004165e0(void)

{
  uint uVar1;
  int iVar2;
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
  local_10 = FUN_00401f00(0xa8,uVar1);
  local_4 = 0;
  if (local_10 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00416430();
  }
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 100) = 6;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00416650(int param_1,code *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  
  if (param_1 != 0) {
    bVar1 = false;
    piVar4 = (int *)0x0;
    while ((in_ECX != (int *)0x0 && (!bVar1))) {
      if (*in_ECX == 0) {
        *in_ECX = param_1;
LAB_004166ef:
        bVar1 = true;
      }
      else {
        iVar2 = (*param_2)(param_1,*in_ECX);
        if (iVar2 < 1) {
          if (piVar4 == (int *)0x0) {
            FUN_00446cb0(param_1);
          }
          else {
            piVar3 = (int *)FUN_00401f00(8);
            if (piVar3 == (int *)0x0) {
              piVar4[1] = 0;
              _DAT_00000004 = in_ECX;
            }
            else {
              *piVar3 = param_1;
              piVar3[1] = 0;
              piVar4[1] = (int)piVar3;
              piVar3[1] = (int)in_ECX;
            }
          }
          goto LAB_004166ef;
        }
        bVar1 = false;
        if (in_ECX[1] == 0) {
          piVar4 = (int *)FUN_00401f00(8);
          if (piVar4 == (int *)0x0) {
            piVar4 = (int *)0x0;
          }
          else {
            *piVar4 = param_1;
            piVar4[1] = 0;
          }
          in_ECX[1] = (int)piVar4;
          goto LAB_004166ef;
        }
      }
      piVar4 = in_ECX;
      in_ECX = (int *)in_ECX[1];
    }
  }
  return;
}



void FUN_00416710(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a32bf4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  return;
}



void FUN_00416730(byte param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = &PTR_FUN_00a32bf4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00416760(void)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  int *local_c;
  int local_8;
  undefined1 local_4 [4];
  
  uVar1 = 0;
  if (*(uint *)(in_ECX + 4) != 0) {
    piVar2 = *(int **)(in_ECX + 8);
    do {
      if (*piVar2 != 0) {
        local_8 = (*(int **)(in_ECX + 8))[uVar1];
        goto joined_r0x0041678c;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
    } while (uVar1 < *(uint *)(in_ECX + 4));
  }
  local_8 = 0;
joined_r0x0041678c:
  while (local_8 != 0) {
    local_c = (int *)0x0;
    FUN_00452600(&local_8,local_4,&local_c);
    if (local_c != (int *)0x0) {
      (**(code **)(*local_c + 0x10))(1);
    }
  }
  FUN_007c2a40();
  return;
}



void FUN_004167e0(void)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  uVar4 = 0;
  if (DAT_00b3350c != 0) {
    do {
      if (*(int *)(DAT_00b33510 + uVar4 * 4) != 0) {
        piVar3 = *(int **)(DAT_00b33510 + uVar4 * 4);
        goto joined_r0x00416803;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_00b3350c);
  }
  piVar3 = (int *)0x0;
joined_r0x00416803:
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    piVar5 = (int *)*piVar3;
    iVar2 = piVar3[2];
    if (piVar5 == (int *)0x0) {
      uVar4 = (**(code **)(DAT_00b33508 + 4))(piVar3[1]);
      do {
        uVar4 = uVar4 + 1;
        if (DAT_00b3350c <= uVar4) {
          piVar5 = (int *)0x0;
          break;
        }
        piVar5 = *(int **)(DAT_00b33510 + uVar4 * 4);
      } while (piVar5 == (int *)0x0);
    }
    piVar3 = piVar5;
    if (iVar2 != 0) {
      puVar1 = (uint *)(iVar2 + 0x58);
      *puVar1 = *puVar1 & 0xffdfffff;
    }
  } while( true );
}



undefined4 FUN_00416870(undefined4 param_1)

{
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0055e000(param_1,&local_4);
  return local_4;
}



undefined4 FUN_004168a0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 local_4;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar2 - (int)(param_1 + 1)) < 4) {
    return 0;
  }
  local_4 = 0;
  FUN_0055e000((((int)param_1[3] << 8 | (int)param_1[2]) << 8 | (int)param_1[1]) << 8 |
               (int)*param_1,&local_4);
  return local_4;
}



void FUN_00416900(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  uVar2 = 0;
  if (DAT_00b3350c != 0) {
    do {
      if (*(int *)(DAT_00b33510 + uVar2 * 4) != 0) {
        piVar3 = *(int **)(DAT_00b33510 + uVar2 * 4);
        goto joined_r0x00416926;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < DAT_00b3350c);
  }
  piVar3 = (int *)0x0;
joined_r0x00416926:
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    piVar4 = (int *)*piVar3;
    piVar1 = (int *)piVar3[2];
    if (piVar4 == (int *)0x0) {
      uVar2 = (**(code **)(DAT_00b33508 + 4))(piVar3[1]);
      do {
        uVar2 = uVar2 + 1;
        if (DAT_00b3350c <= uVar2) {
          piVar4 = (int *)0x0;
          break;
        }
        piVar4 = *(int **)(DAT_00b33510 + uVar2 * 4);
      } while (piVar4 == (int *)0x0);
    }
    (**(code **)(*piVar1 + 0x6c))();
    piVar3 = piVar4;
  } while( true );
}



void FUN_00416990(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab3a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a32c14;
  local_4 = 0;
  FUN_007c2a40(uVar1);
  local_4 = 0xffffffff;
  *in_ECX = &PTR_FUN_00a32bf4;
  FUN_007c2a40();
  FUN_00401f20(in_ECX[2]);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00416a00(byte param_1)

{
  FUN_00416990();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
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
  
  puStack_8 = &LAB_009ab3d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FID_conflict__scalar_deleting_destructor__00a32c34;
  local_4 = 0;
  FUN_00416760(uVar1);
  local_4 = 0xffffffff;
  FUN_00416990();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_00416a80(void)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    iVar8 = 6;
  }
  iVar8 = iVar8 + 4;
  uVar4 = 0;
  if (DAT_00b3350c != 0) {
    do {
      if (*(int *)(DAT_00b33510 + uVar4 * 4) != 0) {
        piVar6 = *(int **)(DAT_00b33510 + uVar4 * 4);
        goto joined_r0x00416ac1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < DAT_00b3350c);
  }
  piVar6 = (int *)0x0;
joined_r0x00416ac1:
  do {
    if (piVar6 == (int *)0x0) {
      if (DAT_00b05bac != '\0') {
        puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        if (puVar2 != (undefined4 *)0x0) {
          piVar6 = (int *)FUN_0046b250(*puVar2);
          uVar7 = (**(code **)(*piVar6 + 0xd4))
                            (*(undefined4 *)((int)puVar2 + 5),0x6d,
                             "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
          FUN_0040fec0("GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,iVar8,*puVar2,uVar7);
          return iVar8;
        }
        FUN_0040fec0("GetSaveSize(): %-5i ending at line %i in file %s",iVar8,0x6d,
                     "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
      }
      return iVar8;
    }
    piVar5 = (int *)*piVar6;
    iVar1 = piVar6[2];
    if (piVar5 == (int *)0x0) {
      uVar4 = (**(code **)(DAT_00b33508 + 4))(piVar6[1]);
      do {
        uVar4 = uVar4 + 1;
        if (DAT_00b3350c <= uVar4) {
          piVar5 = (int *)0x0;
          break;
        }
        piVar5 = *(int **)(DAT_00b33510 + uVar4 * 4);
      } while (piVar5 == (int *)0x0);
    }
    piVar6 = piVar5;
    if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x58) >> 0x15 & 1) != 0)) {
      iVar8 = iVar8 + 4;
    }
  } while( true );
}



void FUN_00416ba0(void)

{
  int iVar1;
  undefined4 *puVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int local_14;
  int local_10;
  int local_c;
  short *local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = *(int *)(DAT_00b33b00 + 0x14);
  local_8 = (short *)0x0;
  cVar4 = FUN_0045a170();
  if (cVar4 != '\0') {
    local_c = 0x4b4f4c42;
    FUN_0045b9a0(&local_c,4);
    local_8 = *(short **)(DAT_00b33b00 + 0x14);
    FUN_0045b9a0(&local_4,2);
  }
  iVar10 = 0;
  local_14 = 0;
  uVar8 = DAT_00b3350c;
  iVar9 = DAT_00b33510;
  do {
    uVar5 = 0;
    if (uVar8 != 0) {
      do {
        if (*(int *)(iVar9 + uVar5 * 4) != 0) {
          piVar6 = *(int **)(iVar9 + uVar5 * 4);
          goto joined_r0x00416c43;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar8);
    }
    piVar6 = (int *)0x0;
joined_r0x00416c43:
    while (piVar6 != (int *)0x0) {
      local_c = piVar6[1];
      piVar11 = (int *)*piVar6;
      iVar1 = piVar6[2];
      if (piVar11 == (int *)0x0) {
        uVar5 = (**(code **)(DAT_00b33508 + 4))(piVar6[1]);
        do {
          uVar5 = uVar5 + 1;
          uVar8 = DAT_00b3350c;
          iVar9 = DAT_00b33510;
          if (DAT_00b3350c <= uVar5) {
            piVar11 = (int *)0x0;
            break;
          }
          piVar11 = *(int **)(DAT_00b33510 + uVar5 * 4);
        } while (piVar11 == (int *)0x0);
      }
      piVar6 = piVar11;
      if ((iVar1 != 0) && ((*(uint *)(iVar1 + 0x58) >> 0x15 & 1) != 0)) {
        if (iVar10 == 0) {
          local_14 = local_14 + 1;
        }
        else {
          FUN_0045b9a0(&local_c,4);
          uVar8 = DAT_00b3350c;
          iVar9 = DAT_00b33510;
        }
      }
    }
    if (((iVar10 == 0) &&
        (FUN_0045b9a0(&local_14,4), uVar8 = DAT_00b3350c, iVar9 = DAT_00b33510, local_14 == 0)) ||
       (iVar10 = iVar10 + 1, 1 < iVar10)) {
      if (DAT_00b05bac != '\0') {
        puVar2 = *(undefined4 **)(DAT_00b33b00 + 0x84);
        iVar9 = *(int *)(DAT_00b33b00 + 0x14);
        if (puVar2 == (undefined4 *)0x0) {
          FUN_0040fec0("SaveGame(): %-5i ending at line %i in file %s",iVar9 - local_10,0x9d,
                       "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
        }
        else {
          piVar6 = (int *)FUN_0046b250(*puVar2);
          uVar7 = (**(code **)(*piVar6 + 0xd4))
                            (*(undefined4 *)((int)puVar2 + 5),0x9d,
                             "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
          FUN_0040fec0("SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s"
                       ,iVar9 - local_10,*puVar2,uVar7);
        }
      }
      cVar4 = FUN_0045a170();
      psVar3 = local_8;
      if (cVar4 != '\0') {
        uVar8 = *(uint *)(DAT_00b33b00 + 0x14);
        if ((int)local_8 + 0xffffU < uVar8) {
          FUN_004a7a60("Save Game Block in file %s on line %i is greater than maximum short size",
                       "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",0x9d);
        }
        *psVar3 = (short)uVar8 - (short)psVar3;
      }
      return;
    }
  } while( true );
}



void FUN_00416de0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_14;
  int local_10;
  int iStack_c;
  undefined4 uStack_8;
  int local_4;
  
  local_14 = 0;
  iVar7 = 0;
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    FUN_004534d0(&local_4,4);
    if (local_4 != 0x4b4f4c42) {
      puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
      if (puVar1 == (undefined4 *)0x0) {
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i"
                     ,"..\\TES Shared\\Magic\\EffectSettingCollection.cpp",0xa4,
                     *(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
      else {
        piVar4 = (int *)FUN_0046b250(*puVar1);
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,"..\\TES Shared\\Magic\\EffectSettingCollection.cpp",0xa4,*puVar1,uVar5);
      }
    }
    iVar7 = *(int *)(DAT_00b33b00 + 0x14);
    FUN_004534d0(&local_14,2);
  }
  local_10 = 0;
  FUN_004534d0(&local_10,4);
  iVar8 = 0;
  if (0 < local_10) {
    do {
      FUN_004534d0(&uStack_8,4);
      iStack_c = 0;
      FUN_0055e000(uStack_8,&iStack_c);
      if (iStack_c == 0) {
        FUN_004a7a60("Player Load: Failed to find known effect setting ID %08X",uStack_8);
      }
      else {
        *(uint *)(iStack_c + 0x58) = *(uint *)(iStack_c + 0x58) | 0x200000;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < local_10);
  }
  cVar3 = FUN_0045a170();
  if (cVar3 != '\0') {
    puVar1 = *(undefined4 **)(DAT_00b33b00 + 0x80);
    uVar2 = *(uint *)(DAT_00b33b00 + 0x14);
    if (puVar1 == (undefined4 *)0x0) {
      uVar6 = local_14 & 0xffff;
      if (uVar6 + iVar7 < uVar2) {
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar2 - uVar6) - iVar7,"..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                     0xb8,*(undefined1 *)(DAT_00b33b00 + 0x7c));
        return;
      }
      if (uVar2 < uVar6 + iVar7) {
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i"
                     ,(uVar6 - uVar2) + iVar7,"..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                     0xb8,*(undefined1 *)(DAT_00b33b00 + 0x7c));
      }
    }
    else {
      piVar4 = (int *)FUN_0046b250(*puVar1);
      uVar6 = (local_14 & 0xffff) + iVar7;
      if (uVar6 < uVar2) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,(uVar2 - (local_14 & 0xffff)) - iVar7,
                     "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",0xb8,*puVar1,uVar5);
        return;
      }
      if (uVar2 < uVar6) {
        uVar5 = (**(code **)(*piVar4 + 0xd4))
                          (*(undefined1 *)((int)puVar1 + 9),*(undefined4 *)((int)puVar1 + 5));
        FUN_004a7a60("LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X"
                     ,((local_14 & 0xffff) - uVar2) + iVar7,
                     "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",0xb8,*puVar1,uVar5);
        return;
      }
    }
  }
  return;
}



/* Library Function - Multiple Matches With Different Base Names
    public: virtual void * __thiscall CButton::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CComboBox::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDateTimeCtrl::`scalar deleting destructor'(unsigned int)
    public: virtual void * __thiscall CDialogBar::`scalar deleting destructor'(unsigned int)
     19 names - too many to list
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release */

void FID_conflict__scalar_deleting_destructor_(byte param_1)

{
  FID_conflict__CProgressCtrl();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



int * FUN_004170b0(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  uint uVar5;
  int *piVar6;
  
  piVar4 = (int *)FUN_00401f00(8);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
    piVar4[1] = 0;
  }
  uVar5 = 0;
  if (DAT_00b3350c != 0) {
    do {
      if (*(int *)(DAT_00b33510 + uVar5 * 4) != 0) {
        piVar2 = *(int **)(DAT_00b33510 + uVar5 * 4);
        goto joined_r0x004170f8;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < DAT_00b3350c);
  }
  piVar2 = (int *)0x0;
joined_r0x004170f8:
  do {
    if (piVar2 == (int *)0x0) {
      return piVar4;
    }
    piVar6 = (int *)*piVar2;
    iVar1 = piVar2[2];
    if (piVar6 == (int *)0x0) {
      uVar5 = (**(code **)(DAT_00b33508 + 4))(piVar2[1]);
      do {
        uVar5 = uVar5 + 1;
        if (DAT_00b3350c <= uVar5) {
          piVar6 = (int *)0x0;
          break;
        }
        piVar6 = *(int **)(DAT_00b33510 + uVar5 * 4);
      } while (piVar6 == (int *)0x0);
    }
    piVar2 = piVar6;
    if ((param_1 == 0) || (cVar3 = FUN_00416370(param_1,param_2,param_3), cVar3 != '\0')) {
      if (param_4 == '\0') {
        if (iVar1 != 0) {
          if (*piVar4 != 0) {
            piVar6 = (int *)FUN_00401f00(8);
            if (piVar6 == (int *)0x0) {
              piVar6 = (int *)0x0;
            }
            else {
              *piVar6 = *piVar4;
              piVar6[1] = 0;
            }
            piVar6[1] = piVar4[1];
            piVar4[1] = (int)piVar6;
          }
          *piVar4 = iVar1;
        }
      }
      else {
        FUN_00416650(iVar1,&LAB_00417040);
      }
    }
  } while( true );
}



void FUN_004171d0(byte param_1)

{
  exception *in_ECX;
  
  *(undefined ***)in_ECX = &PTR_FUN_00a32594;
  if (0xf < *(uint *)(in_ECX + 0x24)) {
    FUN_00401f20(*(undefined4 *)(in_ECX + 0x10));
  }
  *(undefined4 *)(in_ECX + 0x24) = 0xf;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  in_ECX[0x10] = (exception)0x0;
  exception::~exception(in_ECX);
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00417220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  undefined1 local_94 [4];
  undefined1 local_90;
  undefined4 local_80;
  undefined4 local_7c;
  undefined **local_78 [10];
  undefined **local_50 [10];
  undefined1 local_28 [28];
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab421;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffff60;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0xa8,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_00416430();
  }
  local_4 = 0xffffffff;
  *(uint *)(iVar2 + 0x58) = param_6;
  if (((param_1 != 0x46464553) && ((param_6 >> 0x17 & 1) == 0)) && ((param_6 & 0x70) == 0)) {
    FUN_00414750("Registered EffectSetting does not allow any range!");
    local_4 = 1;
    FUN_004146e0(local_28);
    local_50[0] = &PTR_FUN_00a330c0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_50,&DAT_00ad82dc);
  }
  if (((((param_6 >> 0x14 & 1) == 0) && ((param_6 >> 0x13 & 1) == 0)) &&
      (((param_6 >> 0x10 & 1) == 0 && (((param_6 >> 0x11 & 1) == 0 && ((param_6 >> 0x12 & 1) == 0)))
       ))) && (1 < (param_6 >> 0x18 & 1))) {
    local_7c = 0xf;
    local_80 = 0;
    local_90 = 0;
    FUN_00414500("Registered EffectSetting contains multiple ASSOCIATED flags!",0x3c);
    local_4 = 2;
    FUN_004146e0(local_94);
    local_78[0] = &PTR_FUN_00a330cc;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_78,&DAT_00ad82cc);
  }
  *(int *)(iVar2 + 0x98) = param_1;
  FUN_00416580(param_2);
  *(undefined4 *)(iVar2 + 0x5c) = param_4;
  *(undefined4 *)(iVar2 + 0x60) = param_5;
  *(undefined4 *)(iVar2 + 100) = param_3;
  *(undefined4 *)(iVar2 + 0x68) = param_7;
  if ((short)param_8 != 0) {
    FUN_00415d40(param_8,&stack0x00000024);
  }
  FUN_00452570(param_1,iVar2);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00417420(void)

{
  FUN_00417220(0x52424157,"Water Breathing",0,0,0x37,0x1000172,0xffffffff,0);
  FUN_00417220(0x41574157,"Water Walking",0,0,0x38,0x1000172,0xffffffff,0);
  FUN_00417220(0x444c4853,"Shield",0,0,0x2b,0x100007a,0xffffffff,0);
  FUN_00417220(0x48534946,"Fire Shield",0,0,0x3d,0x100007a,0xffffffff,0);
  FUN_00417220(0x4853494c,"Lightning Shield",0,0,0x44,0x100007a,0xffffffff,0);
  FUN_00417220(0x48535246,"Frost Shield",0,0,0x3e,0x100007a,0xffffffff,0);
  FUN_00417220(0x4e445242,"Burden",0,0,0xb,0x1000073,0x40,2,0x4c505344,0x52485446);
  FUN_00417220(0x52485446,"Feather",0,0,0xb,0x1000076,0x40,1,0x4c505344);
  FUN_00417220(0x4b434f4c,&DAT_00a32700,0,0,0,0xe0,0xffffffff,0);
  FUN_00417220(0x4e45504f,&DAT_00a33bb4,0,0,0,0xc0,0xffffffff,0);
  FUN_00417220(0x47444946,"Fire Damage",2,0,8,0x21000475,0x3d,3,0x4c505344,0x49465352,0x48534946);
  FUN_00417220(0x47444853,"Shock Damage",2,0,8,0x21000075,0x44,3,0x4c505344,0x48535352,0x4853494c);
  FUN_00417220(0x47445246,"Frost Damage",2,0,8,0x1000075,0x3e,3,0x4c505344,0x52465352,0x48535246);
  FUN_00417220(0x54414744,"Damage Attribute",2,0,0,0x100075,0x40,4,0x4c505344,0x54414552,0x54414f46,
               0x54414241);
  FUN_00417220(0x45484744,"Damage Health",2,0,8,0x21000075,0x40,4,0x4c505344,0x45484552,0x45484f46,
               0x45484241);
  FUN_00417220(0x50534744,"Damage Spell Points",2,0,9,0x1000075,0x40,4,0x4c505344,0x50534552,
               0x50534f46,0x50534241);
  FUN_00417220(0x41464744,"Damage Fatigue",2,0,10,0x1000075,0x40,4,0x4c505344,0x41464552,0x41464f46,
               0x41464241);
  FUN_00417220(0x54415244,"Drain Attribute",2,0,0,0x100077,0x40,4,0x4c505344,0x54414552,0x54414f46,
               0x54414241);
  FUN_00417220(0x4b535244,"Drain Skill",2,0,0,0x80077,0x40,3,0x4c505344,0x4b534f46,0x4b534241);
  FUN_00417220(0x45485244,"Drain Health",2,0,8,0x1000077,0x40,4,0x4c505344,0x45484552,0x45484f46,
               0x45484241);
  FUN_00417220(0x50535244,"Drain Spell Points",2,0,9,0x1000077,0x40,4,0x4c505344,0x50534552,
               0x50534f46,0x50534241);
  FUN_00417220(0x41465244,"Drain Fatigue",2,0,10,0x1000077,0x40,4,0x4c505344,0x41464552,0x41464f46,
               0x41464241);
  FUN_00417220(0x49464b57,"Weakness to Fire",2,0,0x3d,0x100007f,0x40,3,0x48534946,0x49465352,
               0x4c505344);
  FUN_00417220(0x52464b57,"Weakness to Frost",2,0,0x3e,0x100007f,0x40,3,0x48535246,0x52465352,
               0x4c505344);
  FUN_00417220(0x48534b57,"Weakness to Shock",2,0,0x44,0x100007f,0x40,3,0x4853494c,0x48535352,
               0x4c505344);
  FUN_00417220(0x414d4b57,"Weakness to Magic",2,0,0x40,0x100007f,0x40,2,0x414d5352,0x4c505344);
  FUN_00417220(0x49444b57,"Weakness to Disease",2,0,0x3f,0x100007f,0x40,2,0x49445352,0x4c505344);
  FUN_00417220(0x4f504b57,"Weakness to Poison",2,0,0x43,0x100007f,0x40,2,0x4f505352,0x4c505344);
  FUN_00417220(0x574e4b57,"Weakness to Normal Weapons",2,0,0x41,0x100007f,0x40,2,0x574e5352,
               0x4c505344);
  FUN_00417220(0x52414944,"Disintegrate Armor",2,0,0,0x75,0x40,5,0x4c505344,0x444c4853,0x48534946,
               0x4853494c,0x48535246);
  FUN_00417220(0x45574944,"Disintegrate Weapons",2,0,0,0x75,0x40,5,0x4c505344,0x444c4853,0x48534946,
               0x4853494c,0x48535246);
  FUN_00417220(0x504d4156,"Vampirism",2,0,0,0x10000092,0x3f,0);
  FUN_00417220(0x47445553,"Sun Damage",2,0,0,0x14,0xffffffff,0);
  FUN_00417220(0x414d5453,"Stunted Magicka",2,0,0x39,0x1000112,0xffffffff,0);
  FUN_00417220(0x4e534f50,"Poison Info",2,0,0,0x800000,0x43,1,0x4f505543);
  FUN_00417220(0x45534944,"Disease Info",2,0,0,0x800000,0x3f,1,0x49445543);
  FUN_00417220(0x594d5544,"Mehrunes Dagon Custom Effect",2,0,8,0x21000075,0x40,4,0x4c505344,
               0x45484552,0x45484f46,0x45484241);
  FUN_00417220(0x49564e49,"Invisibility",3,0,0x2f,0x1000172,0xffffffff,0);
  FUN_00417220(0x4c4d4843,"Chameleon",3,0,0x2e,0x100007a,0xffffffff,0);
  FUN_00417220(0x41524150,"Paralyze",3,0,0x30,0x1000173,0x42,2,0x41505543,0x4c505344);
  FUN_00417220(0x434e4c53,"Silence",3,0,0x31,0x1000173,0x40,1,0x4c505344);
  FUN_00417220(0x4d524843,"Charm",3,0,6,0x1000062,0x40,1,0x4c505344);
  FUN_00417220(0x4f4d4544,"Demoralize",3,0,0x22,0x41000066,0x40,2,0x4c505344,0x594c4152);
  FUN_00417220(0x594c4152,"Rally",3,0,0x22,0x1000062,0x40,2,0x4c505344,0x4f4d4544);
  FUN_00417220(0x5a4e5246,"Frenzy",3,0,0x21,0x41000062,0x40,2,0x4c505344,0x4d4c4143);
  FUN_00417220(0x4d4c4143,&DAT_00a33970,3,0,0x21,0x41000066,0x40,2,0x4c505344,0x5a4e5246);
  FUN_00417220(0x4559454e,"Night-Eye",3,0,0x29,0x1000112,0xffffffff,0);
  FUN_00417220(0x5448474c,"Light",3,0,0,0x80000072,0xffffffff,0);
  FUN_00417220(0x4b524144,"Darkness",3,0,0x46,0x81000072,0xffffffff,0);
  FUN_00417220(0x4c505344,"Dispel",4,0,0,0xf0,0x40,0);
  FUN_00417220(0x50525453,"Soul Trap",4,0,0,0x163,0x40,1,0x4c505344);
  FUN_00417220(0x454c4554,"Telekinesis",4,0,0x3c,0x81000242,0xffffffff,0);
  FUN_00417220(0x54435444,"Detect Life",4,0,0x3a,0x81000012,0xffffffff,0);
  FUN_00417220(0x53424153,"Spell Absorption",4,0,0x34,0x1000072,0x40,0);
  FUN_00417220(0x434c4652,"Reflect",4,0,0x35,0x100007a,0xffffffff,0);
  FUN_00417220(0x47444552,"Reflect Damage",4,0,0x3b,0x100001a,0xffffffff,0);
  FUN_00417220(0x54414552,"Restore Attribute",5,0,0,0x100070,0xffffffff,0);
  FUN_00417220(0x45484552,"Restore Health",5,0,8,0x1000070,0xffffffff,0);
  FUN_00417220(0x50534552,"Restore Spell Points",5,0,9,0x1000070,0xffffffff,0);
  FUN_00417220(0x41464552,"Restore Fatigue",5,0,10,0x1000070,0xffffffff,0);
  FUN_00417220(0x54414f46,"Fortify Attribute",5,0,0,0x100072,0xffffffff,0);
  FUN_00417220(0x4b534f46,"Fortify Skill",5,0,0,0x80072,0xffffffff,0);
  FUN_00417220(0x45484f46,"Fortify Health",5,0,8,0x1000072,0xffffffff,0);
  FUN_00417220(0x50534f46,"Fortify Spell Points",5,0,9,0x1000072,0xffffffff,0);
  FUN_00417220(0x41464f46,"Fortify Fatigue",5,0,10,0x1000072,0xffffffff,0);
  FUN_00417220(0x4b534241,"Absorb Skill",5,0,0,0x80027,0x40,3,0x4c505344,0x4b534241,0x4b535244);
  FUN_00417220(0x54414241,"Absorb Attribute",5,0,0,0x100027,0x40,4,0x4c505344,0x54414241,0x54415244,
               0x54414744);
  FUN_00417220(0x45484241,"Absorb Health",5,0,8,0x1000025,0x40,4,0x4c505344,0x45484241,0x45485244,
               0x45484744,0x594d5544);
  FUN_00417220(0x41464241,"Absorb Fatigue",5,0,10,0x1000025,0x40,4,0x4c505344,0x41464241,0x41465244,
               0x41464744);
  FUN_00417220(0x50534241,"Absorb Spell Points",5,0,9,0x1000025,0x40,4,0x4c505344,0x50534241,
               0x50535244,0x50534744);
  FUN_00417220(0x49465352,"Resist Fire",5,0,0x3d,0x100007a,0xffffffff,0);
  FUN_00417220(0x52465352,"Resist Frost",5,0,0x3e,0x100007a,0xffffffff,0);
  FUN_00417220(0x48535352,"Resist Shock",5,0,0x44,0x100007a,0xffffffff,0);
  FUN_00417220(0x414d5352,"Resist Magic",5,0,0x40,0x100007a,0xffffffff,0);
  FUN_00417220(0x49445352,"Resist Disease",5,0,0x3f,0x100007a,0xffffffff,0);
  FUN_00417220(0x4f505352,"Resist Poison",5,0,0x43,0x100007a,0xffffffff,0);
  FUN_00417220(0x41505352,"Resist Paralysis",5,0,0x42,0x100007a,0xffffffff,0);
  FUN_00417220(0x574e5352,"Resist Normal Weapons",5,0,0x41,0x100007a,0xffffffff,0);
  FUN_00417220(0x44575352,"Resist Water Damage",5,0,0x47,0x100017a,0xffffffff,0);
  FUN_00417220(0x49445543,"Cure Disease",5,0,0,0x1f0,0xffffffff,0);
  FUN_00417220(0x4f505543,"Cure Poison",5,0,0,0x1f0,0xffffffff,0);
  FUN_00417220(0x41505543,"Cure Paralysis",5,0,0,0x1f0,0xffffffff,0);
  FUN_00417220(0x4d4d4f46,"Fortify Magicka Multiplier",5,0,0x28,0x1000012,0xffffffff,0);
  FUN_00417220(0x4f48475a,"Summon Ghost",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x43494c5a,"Summon Lich",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x454b535a,"Summon Skeleton",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x414b535a,"Summon Skeleton Archer",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x434b535a,"Summon Skeleton Champion",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x484b535a,"Summon Skeleton Hero",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4152575a,"Summon Wraith",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4c52575a,"Summon Wraith Lord",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4d4f5a5a,"Summon Zombie",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x5a44485a,"Summon Headless Zombie",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4149465a,"Summon Fire Atronach",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4152465a,"Summon Frost Atronach",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4154535a,"Summon Storm Atronach",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4541445a,"Summon Daedroth",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4552445a,"Summon Dremora",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4c52445a,"Summon Dremora Lord",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4143535a,"Summon Scamp",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x414c435a,"Summon Clannfear",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x4450535a,"Summon Spider Daedra",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x5649585a,"Summon Xivilai",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3130305a,"Extra Summon 01",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3230305a,"Extra Summon 02",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3330305a,"Extra Summon 03",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3430305a,"Extra Summon 04",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3530305a,"Extra Summon 05",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3630305a,"Extra Summon 06",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3730305a,"Extra Summon 07",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3830305a,"Extra Summon 08",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3930305a,"Extra Summon 09",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3031305a,"Extra Summon 10",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3131305a,"Extra Summon 11",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3231305a,"Extra Summon 12",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3331305a,"Extra Summon 13",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3431305a,"Extra Summon 14",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3531305a,"Extra Summon 15",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3631305a,"Extra Summon 16",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3731305a,"Extra Summon 17",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3831305a,"Extra Summon 18",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3931305a,"Extra Summon 19",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x3032305a,"Extra Summon 20",1,0,0,0x40112,0xffffffff,0);
  FUN_00417220(0x55484f43,"Command Humanoid",3,0,0,0x40000062,0xffffffff,1,0x4c505344);
  FUN_00417220(0x52434f43,"Command Creature",3,0,0,0x40000062,0xffffffff,1,0x4c505344);
  FUN_00417220(0x58415742,"Bound Axe",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x4f425742,"Bound Bow",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x41445742,"Bound Dagger",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x414d5742,"Bound Mace",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x57535742,"Bound Sword",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x4f424142,"Bound Boots",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x55434142,"Bound Cuirass",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x41474142,"Bound Gauntlets",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x52474142,"Bound Greaves",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x45484142,"Bound Helmet",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x48534142,"Bound Shield",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x31304142,"Bound Armor Extra 01",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x32304142,"Bound Armor Extra 02",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x33304142,"Bound Armor Extra 03",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x34304142,"Bound Armor Extra 04",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x35304142,"Bound Armor Extra 05",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x36304142,"Bound Armor Extra 06",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x37304142,"Bound Armor Extra 07",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x38304142,"Bound Armor Extra 08",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x39304142,"Bound Armor Extra 09",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x30314142,"Bound Armor Extra 10",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x31305742,"Bound Weapon Extra 01",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x32305742,"Bound Weapon Extra 02",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x33305742,"Bound Weapon Extra 03",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x34305742,"Bound Weapon Extra 04",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x35305742,"Bound Weapon Extra 05",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x36305742,"Bound Weapon Extra 06",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x37305742,"Bound Weapon Extra 07",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x38305742,"Bound Weapon Extra 08",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x39305742,"Bound Weapon Extra 09",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x30315742,"Bound Weapon Extra 10",1,0,0,0x10112,0xffffffff,0);
  FUN_00417220(0x4e525554,"Turn Undead",1,0,0,0x40000063,0x40,2,0x4c505344,0x594c4152);
  FUN_00417220(0x46464553,"Script Effect",6,0,0,0x170,0xffffffff,1,0x4c505344);
  FUN_00417220(0x4854594d,"Summon Mythic Dawn Armor",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x4c48594d,"Summon Mythic Dawn Helm",1,0,0,0x20112,0xffffffff,0);
  FUN_00417220(0x4e414552,"Reanimate",1,0,0,0x10000360,0xffffffff,0);
  return;
}



void FUN_00418db0(void)

{
  uint uVar1;
  void *_Dst;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab3d8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = 0x25;
  *in_ECX = &PTR_FUN_00a32bf4;
  in_ECX[3] = 0;
  _Dst = (void *)FUN_00401f00(0x94,uVar1);
  in_ECX[2] = _Dst;
  _memset(_Dst,0,in_ECX[1] * 4);
  local_4 = 0;
  *in_ECX = &PTR_FID_conflict__scalar_deleting_destructor__00a32c34;
  FUN_00417420();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00418e50(void)

{
  FUN_00416760();
  FUN_00417420();
  return;
}



void FUN_00418e90(void)

{
  uint uVar1;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009b2b48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  local_4 = 0;
  FUN_0041a5a0(uVar1);
  local_4 = 0xffffffff;
  FUN_0046c280();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00418f10(void)

{
  FUN_00414c70();
  thunk_FUN_0046b170();
  return;
}



undefined4 FUN_00418f30(void)

{
  int in_ECX;
  
  if ((*(uint *)(*(int *)(in_ECX + 0x1c) + 0x58) & 0x70000) != 0) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x1c) + 0x60);
  }
  return 0;
}



void FUN_00418f50(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab458;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a33c84;
  in_ECX[6] = &PTR_FUN_00a33c3c;
  in_ECX[9] = &PTR_LAB_00a33c28;
  local_4 = 0;
  FUN_00414c70(uVar1);
  thunk_FUN_0046b170();
  local_4 = 0xffffffff;
  FUN_00418e90();
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_004190c0(undefined4 param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  
  uVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03268,0);
  if (uVar2 != 0) {
    switch(*(undefined1 *)(uVar2 + 4)) {
    case 0x14:
      cVar1 = FUN_00415130(0x20000);
      if ((cVar1 == '\0') && (*(int *)(in_ECX + 0x34) == 3)) {
        return 1;
      }
      return 0;
    case 0x15:
      if ((*(byte *)(uVar2 + 0x88) & 1) != 0) {
        return (uint)(*(int *)(in_ECX + 0x34) == 0);
      }
      break;
    case 0x16:
      iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
      uVar2 = 0;
      if ((iVar3 != 0) &&
         ((cVar1 = FUN_00469050(), cVar1 != '\0' ||
          (uVar2 = FUN_00415130(0x20000), (char)uVar2 == '\0')))) {
        return (uint)(*(int *)(in_ECX + 0x34) == 3);
      }
      break;
    case 0x21:
      iVar3 = FUN_009832e6(uVar2,0,&PTR_PTR_00b03268,&PTR_PTR_00b036fc,0);
      uVar2 = 0;
      if (iVar3 != 0) {
        if (*(char *)(iVar3 + 0x90) == '\x04') {
          return (uint)(*(int *)(in_ECX + 0x34) == 1);
        }
        goto switchD_004190fe_caseD_22;
      }
      break;
    case 0x22:
switchD_004190fe_caseD_22:
      return (uint)(*(int *)(in_ECX + 0x34) == 2);
    }
  }
  return uVar2 & 0xffffff00;
}



void FUN_00419200(byte param_1)

{
  FUN_00418f50();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



bool FUN_00419220(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int in_ECX;
  int iVar7;
  
  piVar3 = (int *)(in_ECX + 0x28);
  iVar7 = 0;
  if (piVar3 != (int *)0x0) {
    do {
      if (*piVar3 != 0) {
        iVar7 = iVar7 + 1;
      }
      piVar3 = (int *)piVar3[1];
    } while (piVar3 != (int *)0x0);
    if (iVar7 != 0) {
      uVar1 = *(uint *)(param_1 + 0x58);
      if ((uVar1 & 0x70000) == 0) {
        return true;
      }
      if ((uVar1 >> 0x10 & 1) != 0) {
        cVar2 = FUN_00415130(0x10000);
        return cVar2 == '\0';
      }
      if ((uVar1 >> 0x11 & 1) == 0) {
        return true;
      }
      iVar7 = in_ECX + 0x24;
      cVar2 = FUN_00414f00(*(undefined4 *)(param_1 + 0x98),0x48);
      if (cVar2 == '\0') {
        uVar4 = FUN_0046b250(*(undefined4 *)(param_1 + 0x60),0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0
                            );
        iVar5 = FUN_009832e6(uVar4);
        if (iVar5 == 0) {
          return true;
        }
        if (in_ECX == 0) {
          return true;
        }
        do {
          do {
            if (iVar7 == 0) {
              return true;
            }
            piVar3 = (int *)(iVar7 + 4);
            if (*(int *)(iVar7 + 8) == 0) {
              iVar7 = 0;
            }
            else {
              iVar7 = *(int *)(iVar7 + 8) + -4;
            }
          } while ((*piVar3 == 0) || ((*(uint *)(*(int *)(*piVar3 + 0x1c) + 0x58) >> 0x11 & 1) == 0)
                  );
          uVar4 = FUN_00418f30(0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
          uVar4 = FUN_0046b250(uVar4);
          iVar6 = FUN_009832e6(uVar4);
        } while ((iVar6 == 0) || (cVar2 = FUN_00468fd0(iVar5), cVar2 == '\0'));
      }
      return false;
    }
  }
  return true;
}



undefined4 FUN_00419350(int param_1,int param_2,int param_3,char param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  if ((((param_1 == 0) || (param_3 == 0)) ||
      (iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b03718,0), iVar3 == 0)) ||
     ((param_4 != '\0' && ((*(uint *)(param_3 + 0x58) >> 0xc & 1) == 0)))) {
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0x14:
  case 0x16:
    uVar1 = *(uint *)(param_3 + 0x58);
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    if ((uVar1 >> 0x12 & 1) != 0) {
      return 0;
    }
    if ((uVar1 >> 7 & 1) != 0) {
      return 0;
    }
    if (((((uVar1 >> 8 & 1) != 0) && (iVar3 = *(int *)(param_3 + 0x98), iVar3 != 0x52424157)) &&
        (iVar3 != 0x41574157)) && ((iVar3 != 0x4559454e && (iVar3 != 0x434e4c53)))) {
      return 0;
    }
    if ((param_2 != 0) && (cVar2 = FUN_0041df40(), cVar2 != '\0')) {
      return 0;
    }
    iVar3 = FUN_009832e6(param_1,0,&PTR_PTR_00b03248,&PTR_PTR_00b036dc,0);
    if (iVar3 == 0) {
      return 0;
    }
    cVar2 = FUN_00469050();
    if ((cVar2 == '\0') && ((*(uint *)(param_3 + 0x58) >> 0x11 & 1) != 0)) {
      return 0;
    }
    if (*(int *)(param_3 + 0x98) == 0x49564e49) {
      return 0;
    }
    break;
  case 0x21:
  case 0x22:
    if ((*(uint *)(param_3 + 0x58) >> 5 & 1) == 0) {
      return 0;
    }
    if ((param_2 != 0) && (cVar2 = FUN_0041df40(), cVar2 != '\0')) {
      return 0;
    }
    if (*(int *)(param_3 + 0x98) == 0x4b434f4c) {
      return 0;
    }
    if (*(int *)(param_3 + 0x98) == 0x4e45504f) {
      return 0;
    }
  }
  return 1;
}



uint FUN_004194b0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  uint in_EAX;
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return in_EAX & 0xffffff00;
  }
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)*param_1;
  }
  uVar2 = FUN_00419350(param_1[2],uVar1,param_2,param_3);
  return uVar2;
}



void FUN_004194e0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009b4a48;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_0046c460(uVar1);
  local_4 = 0;
  FUN_00412ae0();
  *in_ECX = &PTR_FUN_00a33dbc;
  in_ECX[6] = &PTR_FUN_00a33d74;
  in_ECX[9] = &PTR_FUN_00a33d64;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00419550(byte param_1)

{
  FUN_00418e90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_00419570(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab458;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004194e0(uVar1);
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *in_ECX = &PTR_FUN_00a33c84;
  in_ECX[6] = &PTR_FUN_00a33c3c;
  in_ECX[9] = &PTR_LAB_00a33c28;
  *(undefined1 *)(in_ECX + 1) = 0xf;
  in_ECX[0xf] = 0xffffffff;
  in_ECX[0xe] = 0xffffffff;
  in_ECX[0xd] = 2;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00419640(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ab4fd;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffd4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a33f5c;
  in_ECX[9] = &PTR_FUN_00a33f14;
  in_ECX[0xc] = &PTR_LAB_00a33f00;
  in_ECX[0x10] = &PTR_FUN_00a33ee0;
  in_ECX[0x16] = &PTR_FUN_00a33ec4;
  in_ECX[0x19] = &PTR_LAB_00a33eb0;
  in_ECX[0x1c] = &PTR_LAB_00a33e9c;
  local_4 = 3;
  FUN_00414c70(uVar1);
  thunk_FUN_0046b170();
  local_4._0_1_ = 2;
  FUN_00470580();
  local_4._0_1_ = 1;
  FUN_00470040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0046d850();
  local_4 = 0xffffffff;
  FUN_004127e0();
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_004198d0(byte param_1)

{
  FUN_00419640();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_004198f0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab549;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_00412b50(uVar1);
  local_4 = 0;
  FUN_0046d7e0();
  local_4._0_1_ = 1;
  FUN_0046ffd0();
  in_ECX[0x16] = &PTR_FUN_00a320a4;
  local_4._0_1_ = 2;
  FUN_0046ef60();
  FUN_004705a0();
  local_4 = CONCAT31(local_4._1_3_,3);
  *in_ECX = &PTR_FUN_00a33f5c;
  in_ECX[9] = &PTR_FUN_00a33f14;
  in_ECX[0xc] = &PTR_LAB_00a33f00;
  in_ECX[0x10] = &PTR_FUN_00a33ee0;
  in_ECX[0x16] = &PTR_FUN_00a33ec4;
  in_ECX[0x19] = &PTR_LAB_00a33eb0;
  in_ECX[0x1c] = &PTR_LAB_00a33e9c;
  *(undefined1 *)(in_ECX + 1) = 0x19;
  in_ECX[0x1e] = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x1f) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_004199c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0046b250(param_1);
  if (iVar1 != 0) {
    iVar2 = FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036c0,0);
    iVar1 = FUN_009832e6(iVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03228,0);
    if (iVar2 != 0) {
      return iVar2 + 0x18;
    }
    if (iVar1 != 0) {
      return iVar1 + 0x24;
    }
  }
  return 0;
}



undefined4 FUN_00419a20(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_009832e6();
  iVar2 = FUN_009832e6();
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  if (iVar2 != 0) {
    return *(undefined4 *)(iVar2 + 0xc);
  }
  return 0;
}



void FUN_00419a70(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab578;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  in_ECX[1] = param_1;
  *in_ECX = param_2;
  local_4 = 0;
  if (param_1 != 0) {
    cVar1 = FUN_0055e000(param_1,&param_1);
    if (cVar1 != '\0') {
      FUN_004a7a60("Setting key \'%s\' already used in map.\nSetting keys must be unique.\n",
                   in_ECX[1],uVar2);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    FUN_00412d30(in_ECX[1],in_ECX);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_00419b10(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 1) = 0;
  *(undefined2 *)((int)in_ECX + 6) = 0;
  FUN_004028d0(param_1,0);
  return;
}



int FUN_00419b30(int param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int *piStack_4;
  
  iVar4 = (**(code **)(*in_ECX + 0x18))();
  if ((iVar4 == 5) ||
     ((iVar4 = (**(code **)(*in_ECX + 0x18))(), iVar4 == 7 &&
      (cVar3 = FUN_00414eb0(), cVar3 != '\0')))) {
    iVar4 = FUN_00416870(0x4e534f50);
    return iVar4;
  }
  iVar4 = (**(code **)(*in_ECX + 0x18))();
  if (iVar4 == 1) {
    iVar4 = FUN_00416870(0x45534944);
    return iVar4;
  }
  piVar6 = in_ECX + 3;
  piStack_4 = (int *)0x0;
  if ((in_ECX[5] == 0) && (in_ECX[4] == 0)) {
    return 0;
  }
  iVar4 = -1;
  if (piVar6 != (int *)0x0) {
    do {
      piVar1 = (int *)piVar6[1];
      FUN_00413890(0);
      iVar5 = FUN_009828c0();
      iVar2 = piVar1[4];
      if (((*(uint *)(piVar1[7] + 0x58) >> 0x16 & 1) == 0) &&
         ((param_1 < iVar2 || ((iVar2 == param_1 && (iVar4 < iVar5)))))) {
        iVar4 = iVar5;
        param_1 = iVar2;
        piStack_4 = piVar1;
      }
    } while ((piVar6[2] != 0) && (piVar6 = (int *)(piVar6[2] + -4), piVar6 != (int *)0x0));
    if (piStack_4 != (int *)0x0) {
      if ((*piStack_4 == 0x46464553) && (iVar4 = FUN_00412cb0(), iVar4 != 0)) {
        iVar4 = FUN_00416870(iVar4);
        return iVar4;
      }
      return piStack_4[7];
    }
  }
  return 0;
}



undefined4 FUN_00419c50(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  undefined4 uVar4;
  
  if (DAT_00b33518 < DAT_00b33554) {
    return 1;
  }
  if ((DAT_00b33518 == DAT_00b33554) && (iVar3 = FUN_0065d4a0(), iVar3 != 0)) {
    uVar4 = 0x40000;
    FUN_0065d4a0(0x40000);
    cVar2 = FUN_00415130(uVar4);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  if ((in_ECX != 0) && (iVar3 = in_ECX + 0xc, iVar3 != 0)) {
    while ((*(int *)(iVar3 + 8) != 0 || (*(int *)(iVar3 + 4) != 0))) {
      uVar1 = *(uint *)(*(int *)(*(int *)(iVar3 + 4) + 0x1c) + 0x58);
      if (((((uVar1 & 0x70000) != 0) && ((uVar1 >> 0x12 & 1) != 0)) &&
          (cVar2 = FUN_00415780(), cVar2 == '\0')) && (cVar2 = FUN_00415790(), cVar2 == '\0')) {
        return 0;
      }
      if (*(int *)(iVar3 + 8) == 0) {
        return 1;
      }
      iVar3 = *(int *)(iVar3 + 8) + -4;
      if (iVar3 == 0) {
        return 1;
      }
    }
  }
  return 1;
}



undefined4 FUN_00419cf0(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  
  iVar3 = FUN_00419b30(0);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 0x20) == 0xffff) {
      pcVar5 = *(char **)(iVar3 + 0x1c);
      pcVar1 = pcVar5 + 1;
      do {
        cVar2 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar2 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    if ((uVar6 != 0) && (cVar2 = FUN_004157e0(), cVar2 == '\0')) {
      return 0;
    }
  }
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0xc;
  }
  if ((*(int *)(iVar3 + 8) != 0) || (*(int *)(iVar3 + 4) != 0)) {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8) + -4) {
      if (*(int *)(iVar3 + 4) == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*(int *)(iVar3 + 4) + 0x1c);
      }
      if (((iVar4 != 0) && ((*(uint *)(iVar4 + 0x58) & 0x70000) != 0)) &&
         (cVar2 = FUN_00415780(), cVar2 == '\0')) {
        return 0;
      }
      if (*(int *)(iVar3 + 8) == 0) {
        return 1;
      }
    }
  }
  return 1;
}



undefined4 FUN_00419d90(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int in_ECX;
  int iVar6;
  
  iVar3 = FUN_00419b30(0);
  if (iVar3 != 0) {
    if (*(ushort *)(iVar3 + 0x20) == 0xffff) {
      pcVar4 = *(char **)(iVar3 + 0x1c);
      pcVar1 = pcVar4 + 1;
      do {
        cVar2 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar2 != '\0');
      uVar5 = (int)pcVar4 - (int)pcVar1;
    }
    else {
      uVar5 = (uint)*(ushort *)(iVar3 + 0x20);
    }
    if (((uVar5 != 0) && (cVar2 = FUN_004157e0(), cVar2 == '\0')) &&
       (cVar2 = FUN_004157f0(), cVar2 == '\0')) {
      return 0;
    }
  }
  if (in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = in_ECX + 0xc;
  }
  if ((*(int *)(iVar3 + 8) != 0) || (*(int *)(iVar3 + 4) != 0)) {
    for (; iVar3 != 0; iVar3 = *(int *)(iVar3 + 8) + -4) {
      if (*(int *)(iVar3 + 4) == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(*(int *)(iVar3 + 4) + 0x1c);
      }
      if (((iVar6 != 0) && ((*(uint *)(iVar6 + 0x58) & 0x70000) != 0)) &&
         ((cVar2 = FUN_00415780(), cVar2 == '\0' && (cVar2 = FUN_00415790(), cVar2 == '\0')))) {
        return 0;
      }
      if (*(int *)(iVar3 + 8) == 0) {
        return 1;
      }
    }
  }
  return 1;
}



bool FUN_00419e50(void)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  
  iVar4 = FUN_00419b30(0);
  bVar2 = true;
  if (iVar4 != 0) {
    if (*(ushort *)(iVar4 + 0x20) == 0xffff) {
      pcVar5 = *(char **)(iVar4 + 0x1c);
      pcVar1 = pcVar5 + 1;
      do {
        cVar3 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar3 != '\0');
      uVar6 = (int)pcVar5 - (int)pcVar1;
    }
    else {
      uVar6 = (uint)*(ushort *)(iVar4 + 0x20);
    }
    if ((uVar6 != 0) && (cVar3 = FUN_004157e0(), cVar3 == '\0')) {
      bVar2 = false;
      cVar3 = FUN_004157f0();
      if (cVar3 == '\0') {
        return false;
      }
    }
  }
  if (in_ECX == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = in_ECX + 0xc;
  }
  if ((*(int *)(iVar4 + 8) != 0) || (*(int *)(iVar4 + 4) != 0)) {
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 8) + -4) {
      if (*(int *)(iVar4 + 4) == 0) {
        iVar7 = 0;
      }
      else {
        iVar7 = *(int *)(*(int *)(iVar4 + 4) + 0x1c);
      }
      if (((iVar7 != 0) && ((*(uint *)(iVar7 + 0x58) & 0x70000) != 0)) &&
         (cVar3 = FUN_00415780(), cVar3 == '\0')) {
        bVar2 = false;
        cVar3 = FUN_00415790();
        if (cVar3 == '\0') {
          return false;
        }
      }
      if (*(int *)(iVar4 + 8) == 0) break;
    }
  }
  return !bVar2;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00419f10(undefined4 param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  int in_ECX;
  uint uVar13;
  char *pcVar14;
  int *unaff_FS_OFFSET;
  undefined4 uVar15;
  undefined1 *puVar16;
  undefined1 auStack_138 [3];
  char local_135;
  char *pcStack_134;
  int local_130;
  int local_12c;
  int local_128;
  undefined1 local_124 [15];
  char cStack_115;
  char acStack_114 [12];
  char acStack_108 [248];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab5db;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_138;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb8;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar2 = FUN_00419d90(uVar3);
  if (cVar2 != '\0') {
    iVar4 = FUN_00419b30(0);
    local_135 = '\0';
    cVar2 = FUN_00419e50();
    if (cVar2 != '\0') {
      local_135 = '\x01';
    }
    if (iVar4 != 0) {
      if (*(ushort *)(iVar4 + 0x20) == 0xffff) {
        pcVar5 = *(char **)(iVar4 + 0x1c);
        pcVar11 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        uVar3 = (int)pcVar5 - (int)pcVar11;
      }
      else {
        uVar3 = (uint)*(ushort *)(iVar4 + 0x20);
      }
      if (uVar3 != 0) {
        if (local_135 == '\0') {
          uVar15 = 1;
          uVar8 = param_1;
          uVar6 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x14))(param_1,1);
          FUN_004384e0(uVar6,uVar8,uVar15);
        }
        FUN_004157c0();
      }
    }
    if (in_ECX == 0) {
      local_130 = 0;
    }
    else {
      local_130 = in_ECX + 0xc;
    }
    if ((*(int *)(local_130 + 8) != 0) || (*(int *)(local_130 + 4) != 0)) {
      for (; local_130 != 0; local_130 = *(int *)(local_130 + 8) + -4) {
        local_12c = *(int *)(*(int *)(local_130 + 4) + 0x1c);
        if ((*(uint *)(local_12c + 0x58) & 0x70000) != 0) {
          if ((local_135 == '\0') &&
             (iVar4 = FUN_0046b250(*(undefined4 *)(local_12c + 0x60)), iVar4 != 0)) {
            uVar3 = *(uint *)(local_12c + 0x58);
            if ((uVar3 >> 0x10 & 1) == 0) {
              if ((uVar3 >> 0x11 & 1) == 0) {
                if ((uVar3 >> 0x12 & 1) != 0) {
                  if (*(char *)(iVar4 + 4) == '%') {
                    FUN_00469690();
                    puVar16 = local_124;
                    uVar6 = 1;
                    local_4 = 0;
                    uVar8 = FUN_005e1fd0(1,puVar16);
                    FUN_0046cde0(uVar8,uVar6,puVar16);
                    iVar4 = FUN_00469c70(0);
                    local_4 = 0xffffffff;
                    FUN_0046a010();
                  }
                  iVar7 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
                  if (iVar7 != 0) {
                    piVar9 = (int *)FUN_005234f0(1,1);
                    for (piVar1 = piVar9;
                        (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
                        piVar1 = (int *)piVar1[1]) {
                      FUN_004384e0(*piVar1,param_1,1);
                    }
                    FUN_004526e0();
                    FUN_00401f20(piVar9);
                  }
                  local_128 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0375c,0);
                  if (local_128 != 0) {
                    piVar1 = (int *)(local_128 + 0xac);
                    uVar15 = 1;
                    uVar8 = param_1;
                    uVar6 = (**(code **)(*(int *)(local_128 + 0xac) + 0x14))(param_1,1);
                    FUN_004384e0(uVar6,uVar8,uVar15);
                    pcVar5 = (char *)(**(code **)(*piVar1 + 0x14))();
                    puVar10 = (undefined4 *)FUN_006899c0();
                    pcVar11 = pcVar5;
                    do {
                      cVar2 = *pcVar11;
                      pcVar11[(int)(acStack_114 + -(int)pcVar5)] = cVar2;
                      pcVar11 = pcVar11 + 1;
                    } while (cVar2 != '\0');
                    pcVar11 = _strrchr(acStack_114,0x5c);
                    pcStack_134 = pcVar11;
                    if (pcVar11 != (char *)0x0) {
                      for (; puVar10 != (undefined4 *)0x0; puVar10 = (undefined4 *)puVar10[1]) {
                        pcVar11[1] = '\0';
                        pcVar14 = (char *)*puVar10;
                        pcVar12 = pcVar14;
                        if (pcVar14 != (char *)0x0) {
                          do {
                            cVar2 = *pcVar12;
                            pcVar12 = pcVar12 + 1;
                          } while (cVar2 != '\0');
                          uVar3 = (int)pcVar12 - (int)pcVar14;
                          pcVar11 = &cStack_115;
                          do {
                            pcVar12 = pcVar11 + 1;
                            pcVar11 = pcVar11 + 1;
                          } while (*pcVar12 != '\0');
                          for (uVar13 = uVar3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                            *(undefined4 *)pcVar11 = *(undefined4 *)pcVar14;
                            pcVar14 = pcVar14 + 4;
                            pcVar11 = pcVar11 + 4;
                          }
                          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                            *pcVar11 = *pcVar14;
                            pcVar14 = pcVar14 + 1;
                            pcVar11 = pcVar11 + 1;
                          }
                          FUN_004384e0(acStack_114,param_1,1);
                          pcVar11 = pcStack_134;
                        }
                      }
                    }
                    pcVar11 = _strrchr(pcVar5,0x5c);
                    if ((pcVar11 != (char *)0x0) &&
                       (iVar4 = __strnicmp(pcVar11 + 1,"Skeleton",8), iVar4 == 0)) {
                      piVar9 = (int *)FUN_00435830(pcVar5,0);
                      for (piVar1 = piVar9; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
                        iVar4 = *piVar1;
                        if (iVar4 != 0) {
                          FUN_00438540(iVar4,param_1);
                        }
                        FUN_00401f20(iVar4);
                      }
                      FUN_004526e0();
                      FUN_00401f20(piVar9);
                    }
                    cVar2 = FUN_004688b0();
                    if (cVar2 != '\0') {
                      pcStack_134[1] = '\0';
                      pcVar11 = &cStack_115;
                      do {
                        pcVar5 = pcVar11;
                        pcVar11 = pcVar5 + 1;
                      } while (pcVar5[1] != '\0');
                      builtin_strncpy(pcVar5 + 1,"SpecialAnims",0xd);
                      pcVar11 = &cStack_115;
                      do {
                        pcVar5 = pcVar11 + 1;
                        pcVar11 = pcVar11 + 1;
                      } while (*pcVar5 != '\0');
                      pcVar11[0] = '\\';
                      pcVar11[1] = '\0';
                      pcStack_134 = _strrchr(acStack_114,0x5c);
                      for (puVar10 = (undefined4 *)FUN_006899c0(); puVar10 != (undefined4 *)0x0;
                          puVar10 = (undefined4 *)puVar10[1]) {
                        pcStack_134[1] = '\0';
                        pcVar11 = (char *)*puVar10;
                        pcVar5 = pcVar11;
                        if (pcVar11 != (char *)0x0) {
                          do {
                            cVar2 = *pcVar5;
                            pcVar5 = pcVar5 + 1;
                          } while (cVar2 != '\0');
                          uVar3 = (int)pcVar5 - (int)pcVar11;
                          pcVar5 = &cStack_115;
                          do {
                            pcVar14 = pcVar5 + 1;
                            pcVar5 = pcVar5 + 1;
                          } while (*pcVar14 != '\0');
                          for (uVar13 = uVar3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                            *(undefined4 *)pcVar5 = *(undefined4 *)pcVar11;
                            pcVar11 = pcVar11 + 4;
                            pcVar5 = pcVar5 + 4;
                          }
                          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                            *pcVar5 = *pcVar11;
                            pcVar11 = pcVar11 + 1;
                            pcVar5 = pcVar5 + 1;
                          }
                          FUN_00438540(acStack_114,param_1);
                        }
                      }
                    }
                  }
                }
              }
              else {
                iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
                if (iVar4 != 0) {
                  uVar15 = 1;
                  uVar8 = param_1;
                  uVar6 = FUN_00469330(0);
                  FUN_004384e0(uVar6,uVar8,uVar15);
                  uVar15 = 1;
                  uVar8 = param_1;
                  uVar6 = FUN_00469330(1);
                  FUN_004384e0(uVar6,uVar8,uVar15);
                }
              }
            }
            else {
              iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
              if (iVar4 != 0) {
                iVar7 = FUN_00449190();
                if (iVar7 != 0) {
                  uVar15 = 1;
                  uVar8 = param_1;
                  uVar6 = (**(code **)(*(int *)(iVar4 + 0x30) + 0x14))(param_1,1);
                  FUN_004384e0(uVar6,uVar8,uVar15);
                }
              }
            }
          }
          iVar4 = local_12c;
          FUN_00415760();
          cVar2 = FUN_00415780();
          if (((cVar2 == '\0') && (cVar2 = FUN_00415790(), cVar2 == '\0')) &&
             ((*(uint *)(iVar4 + 0x58) >> 0x12 & 1) != 0)) {
            DAT_00b33518 = DAT_00b33518 + -1;
          }
        }
        if (*(int *)(local_130 + 8) == 0) break;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 * FUN_0041a4b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00b3351c;
  switch(param_2) {
  case 1:
    FUN_00419b10(DAT_00b33524);
    return param_1;
  case 2:
    FUN_00419b10(DAT_00b33534);
    return param_1;
  case 3:
    FUN_00419b10(DAT_00b3352c);
    return param_1;
  case 4:
    FUN_00419b10(DAT_00b3353c);
    return param_1;
  case 5:
    FUN_00419b10(DAT_00b33544);
    return param_1;
  case 6:
    FUN_00419b10(DAT_00b3354c);
    return param_1;
  default:
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
    *(undefined2 *)((int)param_1 + 6) = 0;
    FUN_004028d0(uVar1,0);
    return param_1;
  }
}



void FUN_0041a5a0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab5a8;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a322c4;
  in_ECX[3] = &PTR_FUN_00a322b4;
  local_4 = 0;
  FUN_00414c70(uVar1);
  FUN_00401f20(in_ECX[1]);
  in_ECX[1] = 0;
  *(undefined2 *)((int)in_ECX + 10) = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0041a610(char param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  int in_ECX;
  uint uVar13;
  int *unaff_FS_OFFSET;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 *puVar17;
  undefined1 auStack_138 [3];
  char local_135;
  int local_134;
  int local_130;
  int local_12c;
  char *pcStack_128;
  undefined1 local_124 [15];
  char cStack_115;
  char acStack_114 [12];
  char acStack_108 [248];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab5db;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)auStack_138;
  uVar3 = DAT_00b30aac ^ (uint)&stack0xfffffeb8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar4 = FUN_00419b30(0);
  if ((param_1 == '\0') && (cVar2 = FUN_00419cf0(uVar3), cVar2 == '\0')) {
    cVar2 = FUN_00419e50();
    if (cVar2 == '\0') {
      FUN_00438300(in_ECX,iVar4,0);
      goto LAB_0041ab61;
    }
    local_135 = '\0';
  }
  else {
    local_135 = '\x01';
  }
  if (iVar4 != 0) {
    if (local_135 != '\0') {
      if (*(ushort *)(iVar4 + 0x20) == 0xffff) {
        pcVar5 = *(char **)(iVar4 + 0x1c);
        pcVar10 = pcVar5 + 1;
        do {
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        uVar3 = (int)pcVar5 - (int)pcVar10;
      }
      else {
        uVar3 = (uint)*(ushort *)(iVar4 + 0x20);
      }
      if (uVar3 != 0) {
        uVar16 = 1;
        uVar15 = 0;
        uVar14 = 0;
        uVar6 = (**(code **)(*(int *)(iVar4 + 0x18) + 0x14))(0,0,1);
        FUN_00439eb0(uVar6,uVar14,uVar15,uVar16);
      }
    }
    FUN_004157a0();
  }
  if (in_ECX == 0) {
    local_130 = 0;
  }
  else {
    local_130 = in_ECX + 0xc;
  }
  if ((*(int *)(local_130 + 8) != 0) || (*(int *)(local_130 + 4) != 0)) {
    for (; local_130 != 0; local_130 = *(int *)(local_130 + 8) + -4) {
      local_134 = *(int *)(*(int *)(local_130 + 4) + 0x1c);
      if ((*(uint *)(local_134 + 0x58) & 0x70000) != 0) {
        if ((local_135 != '\0') &&
           (iVar4 = FUN_0046b250(*(undefined4 *)(local_134 + 0x60)), iVar4 != 0)) {
          uVar3 = *(uint *)(local_134 + 0x58);
          if ((uVar3 >> 0x10 & 1) == 0) {
            if ((uVar3 >> 0x11 & 1) == 0) {
              if ((uVar3 >> 0x12 & 1) != 0) {
                if (*(char *)(iVar4 + 4) == '%') {
                  FUN_00469690();
                  puVar17 = local_124;
                  uVar14 = 1;
                  local_4 = 0;
                  uVar6 = FUN_005e1fd0(1,puVar17);
                  FUN_0046cde0(uVar6,uVar14,puVar17);
                  iVar4 = FUN_00469c70(0);
                  local_4 = 0xffffffff;
                  FUN_0046a010();
                }
                iVar7 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
                if (iVar7 != 0) {
                  piVar8 = (int *)FUN_005234f0(1,1);
                  for (piVar1 = piVar8;
                      (piVar1 != (int *)0x0 && ((piVar1[1] != 0 || (*piVar1 != 0))));
                      piVar1 = (int *)piVar1[1]) {
                    FUN_00439eb0(*piVar1,0,0,1);
                  }
                  FUN_004526e0();
                  FUN_00401f20(piVar8);
                }
                local_12c = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0375c,0);
                if (local_12c != 0) {
                  uVar16 = 1;
                  piVar1 = (int *)(local_12c + 0xac);
                  uVar15 = 0;
                  uVar14 = 0;
                  uVar6 = (**(code **)(*(int *)(local_12c + 0xac) + 0x14))(0,0,1);
                  FUN_00439eb0(uVar6,uVar14,uVar15,uVar16);
                  pcVar5 = (char *)(**(code **)(*piVar1 + 0x14))();
                  puVar9 = (undefined4 *)FUN_006899c0();
                  pcVar10 = pcVar5;
                  do {
                    cVar2 = *pcVar10;
                    pcVar10[(int)(acStack_114 + -(int)pcVar5)] = cVar2;
                    pcVar10 = pcVar10 + 1;
                  } while (cVar2 != '\0');
                  pcVar10 = _strrchr(acStack_114,0x5c);
                  pcStack_128 = pcVar10;
                  if (pcVar10 != (char *)0x0) {
                    for (; puVar9 != (undefined4 *)0x0; puVar9 = (undefined4 *)puVar9[1]) {
                      pcVar10[1] = '\0';
                      pcVar12 = (char *)*puVar9;
                      pcVar11 = pcVar12;
                      if (pcVar12 != (char *)0x0) {
                        do {
                          cVar2 = *pcVar11;
                          pcVar11 = pcVar11 + 1;
                        } while (cVar2 != '\0');
                        uVar3 = (int)pcVar11 - (int)pcVar12;
                        pcVar10 = &cStack_115;
                        do {
                          pcVar11 = pcVar10 + 1;
                          pcVar10 = pcVar10 + 1;
                        } while (*pcVar11 != '\0');
                        for (uVar13 = uVar3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar12;
                          pcVar12 = pcVar12 + 4;
                          pcVar10 = pcVar10 + 4;
                        }
                        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                          *pcVar10 = *pcVar12;
                          pcVar12 = pcVar12 + 1;
                          pcVar10 = pcVar10 + 1;
                        }
                        FUN_00439eb0(acStack_114,0,0,1);
                        pcVar10 = pcStack_128;
                      }
                    }
                  }
                  pcVar10 = _strrchr(pcVar5,0x5c);
                  if ((pcVar10 != (char *)0x0) &&
                     (iVar4 = __strnicmp(pcVar10 + 1,"Skeleton",8), iVar4 == 0)) {
                    piVar8 = (int *)FUN_00435830(pcVar5,0);
                    for (piVar1 = piVar8; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
                      iVar4 = *piVar1;
                      if (iVar4 != 0) {
                        FUN_00439ff0(iVar4);
                      }
                      FUN_00401f20(iVar4);
                    }
                    FUN_004526e0();
                    FUN_00401f20(piVar8);
                  }
                  cVar2 = FUN_004688b0();
                  if (cVar2 != '\0') {
                    pcStack_128[1] = '\0';
                    pcVar10 = &cStack_115;
                    do {
                      pcVar5 = pcVar10;
                      pcVar10 = pcVar5 + 1;
                    } while (pcVar5[1] != '\0');
                    builtin_strncpy(pcVar5 + 1,"SpecialAnims",0xd);
                    pcVar10 = &cStack_115;
                    do {
                      pcVar5 = pcVar10 + 1;
                      pcVar10 = pcVar10 + 1;
                    } while (*pcVar5 != '\0');
                    pcVar10[0] = '\\';
                    pcVar10[1] = '\0';
                    pcVar10 = _strrchr(acStack_114,0x5c);
                    for (puVar9 = (undefined4 *)FUN_006899c0(); puVar9 != (undefined4 *)0x0;
                        puVar9 = (undefined4 *)puVar9[1]) {
                      pcVar10[1] = '\0';
                      pcVar5 = (char *)*puVar9;
                      pcVar12 = pcVar5;
                      if (pcVar5 != (char *)0x0) {
                        do {
                          cVar2 = *pcVar12;
                          pcVar12 = pcVar12 + 1;
                        } while (cVar2 != '\0');
                        uVar3 = (int)pcVar12 - (int)pcVar5;
                        pcVar12 = &cStack_115;
                        do {
                          pcVar11 = pcVar12 + 1;
                          pcVar12 = pcVar12 + 1;
                        } while (*pcVar11 != '\0');
                        for (uVar13 = uVar3 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
                          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar5;
                          pcVar5 = pcVar5 + 4;
                          pcVar12 = pcVar12 + 4;
                        }
                        for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                          *pcVar12 = *pcVar5;
                          pcVar5 = pcVar5 + 1;
                          pcVar12 = pcVar12 + 1;
                        }
                        FUN_00439ff0(acStack_114);
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
              if (iVar4 != 0) {
                uVar16 = 1;
                uVar15 = 0;
                uVar14 = 0;
                uVar6 = FUN_00469330(0);
                FUN_00439eb0(uVar6,uVar14,uVar15,uVar16);
                uVar16 = 1;
                uVar15 = 0;
                uVar14 = 0;
                uVar6 = FUN_00469330(1);
                FUN_00439eb0(uVar6,uVar14,uVar15,uVar16);
              }
            }
          }
          else {
            iVar4 = FUN_009832e6(iVar4,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
            if (iVar4 != 0) {
              iVar7 = FUN_00449190();
              if (iVar7 != 0) {
                uVar16 = 1;
                uVar15 = 0;
                uVar14 = 0;
                uVar6 = (**(code **)(*(int *)(iVar4 + 0x30) + 0x14))(0,0,1);
                FUN_00439eb0(uVar6,uVar14,uVar15,uVar16);
              }
            }
          }
        }
        iVar4 = local_134;
        cVar2 = FUN_00415780();
        if (((cVar2 == '\0') && (cVar2 = FUN_00415790(), cVar2 == '\0')) &&
           ((*(uint *)(iVar4 + 0x58) >> 0x12 & 1) != 0)) {
          DAT_00b33518 = DAT_00b33518 + 1;
        }
        FUN_00415740();
      }
      if (*(int *)(local_130 + 8) == 0) break;
    }
  }
LAB_0041ab61:
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0041ab90(void)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *puVar11;
  char *pcVar12;
  char *pcVar13;
  int in_ECX;
  uint uVar14;
  undefined4 uVar15;
  int *unaff_FS_OFFSET;
  undefined1 *puVar16;
  int local_13c;
  int local_138;
  char *pcStack_134;
  int local_130;
  char *local_12c [2];
  undefined1 local_124 [15];
  char cStack_115;
  char acStack_114 [12];
  char acStack_108 [248];
  uint local_10;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab626;
  local_c = *unaff_FS_OFFSET;
  local_10 = DAT_00b30aac ^ (uint)&local_13c;
  uVar4 = DAT_00b30aac ^ (uint)&stack0xfffffeb4;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar5 = FUN_00419b30(0);
  cVar3 = FUN_00419e50(uVar4);
  if (cVar3 == '\0') {
    FUN_0041a610(1);
    FUN_00419f10(1);
  }
  else {
    if (iVar5 != 0) {
      uVar15 = 0;
      cVar3 = FUN_004157f0();
      if (cVar3 != '\0') {
        uVar15 = FUN_00415ee0();
      }
      if (*(ushort *)(iVar5 + 0x20) == 0xffff) {
        pcVar6 = *(char **)(iVar5 + 0x1c);
        pcVar12 = pcVar6 + 1;
        do {
          cVar3 = *pcVar6;
          pcVar6 = pcVar6 + 1;
        } while (cVar3 != '\0');
        uVar4 = (int)pcVar6 - (int)pcVar12;
      }
      else {
        uVar4 = (uint)*(ushort *)(iVar5 + 0x20);
      }
      if (uVar4 == 0) {
        if (*(int *)(iVar5 + 0x98) != 0x46464553) {
          puVar11 = (undefined4 *)FUN_004134c0(local_12c);
          local_4 = 0;
          FUN_004a7a60("The %s effect has no associated spell art.",*puVar11);
          local_4 = 0xffffffff;
          FUN_00401f20(local_12c[0]);
        }
      }
      else {
        uVar7 = (**(code **)(*(int *)(iVar5 + 0x18) + 0x14))();
        iVar5 = ModelLoader_IsModelLoaded(uVar7);
        if (iVar5 != 0) {
          FUN_00434c00(uVar15);
        }
      }
    }
    if (in_ECX == 0) {
      local_138 = 0;
    }
    else {
      local_138 = in_ECX + 0xc;
    }
    if ((*(int *)(local_138 + 8) != 0) || (*(int *)(local_138 + 4) != 0)) {
      for (; local_138 != 0; local_138 = *(int *)(local_138 + 8) + -4) {
        iVar5 = *(int *)(*(int *)(local_138 + 4) + 0x1c);
        iVar8 = FUN_0046b250(*(undefined4 *)(iVar5 + 0x60));
        cVar3 = FUN_00415790();
        if (((cVar3 != '\0') && (local_13c = FUN_00415e80(), local_13c != 0)) && (iVar8 != 0)) {
          uVar4 = *(uint *)(iVar5 + 0x58);
          if ((uVar4 >> 0x10 & 1) == 0) {
            if ((uVar4 >> 0x11 & 1) == 0) {
              if ((uVar4 >> 0x12 & 1) != 0) {
                if (*(char *)(iVar8 + 4) == '%') {
                  FUN_00469690();
                  puVar16 = local_124;
                  uVar7 = 1;
                  local_4 = 1;
                  uVar15 = FUN_005e1fd0(1,puVar16);
                  FUN_0046cde0(uVar15,uVar7,puVar16);
                  iVar8 = FUN_00469c70(0);
                  local_4 = 0xffffffff;
                  FUN_0046a010();
                }
                iVar5 = FUN_009832e6(iVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b02fb4,0);
                if (iVar5 != 0) {
                  piVar9 = (int *)FUN_005234f0(1,1);
                  iVar5 = local_13c;
                  for (piVar2 = piVar9;
                      (piVar2 != (int *)0x0 && ((piVar2[1] != 0 || (*piVar2 != 0))));
                      piVar2 = (int *)piVar2[1]) {
                    iVar10 = ModelLoader_IsModelLoaded(*piVar2);
                    if (iVar10 != 0) {
                      FUN_00434c00(iVar5);
                    }
                  }
                  FUN_004526e0();
                  FUN_00401f20(piVar9);
                }
                local_130 = FUN_009832e6(iVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b0375c,0);
                if (local_130 != 0) {
                  uVar15 = (**(code **)(*(int *)(local_130 + 0xac) + 0x14))();
                  puVar11 = (undefined4 *)ModelLoader_IsModelLoaded(uVar15);
                  if (puVar11 != (undefined4 *)0x0) {
                    if (0 < local_13c) {
                      iVar5 = local_13c;
                      do {
                        InterlockedIncrement(puVar11 + 1);
                        iVar5 = iVar5 + -1;
                      } while (iVar5 != 0);
                    }
                    pcVar12 = (char *)*puVar11;
                    local_12c[0] = pcVar12;
                    puVar11 = (undefined4 *)FUN_006899c0();
                    iVar5 = -(int)pcVar12;
                    do {
                      cVar3 = *pcVar12;
                      pcVar12[(int)(acStack_114 + iVar5)] = cVar3;
                      pcVar12 = pcVar12 + 1;
                    } while (cVar3 != '\0');
                    pcVar12 = _strrchr(acStack_114,0x5c);
                    pcStack_134 = pcVar12;
                    if (pcVar12 != (char *)0x0) {
                      for (; puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)puVar11[1]) {
                        pcVar12[1] = '\0';
                        pcVar6 = (char *)*puVar11;
                        pcVar13 = pcVar6;
                        if (pcVar6 != (char *)0x0) {
                          do {
                            cVar3 = *pcVar13;
                            pcVar13 = pcVar13 + 1;
                          } while (cVar3 != '\0');
                          uVar4 = (int)pcVar13 - (int)pcVar6;
                          pcVar13 = &cStack_115;
                          do {
                            pcVar1 = pcVar13 + 1;
                            pcVar13 = pcVar13 + 1;
                          } while (*pcVar1 != '\0');
                          for (uVar14 = uVar4 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                            *(undefined4 *)pcVar13 = *(undefined4 *)pcVar6;
                            pcVar6 = pcVar6 + 4;
                            pcVar13 = pcVar13 + 4;
                          }
                          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *pcVar13 = *pcVar6;
                            pcVar6 = pcVar6 + 1;
                            pcVar13 = pcVar13 + 1;
                          }
                          iVar5 = ModelLoader_IsModelLoaded(acStack_114);
                          if (iVar5 != 0) {
                            FUN_00434c00(local_13c);
                          }
                        }
                      }
                    }
                    pcVar6 = _strrchr(local_12c[0],0x5c);
                    if ((pcVar6 != (char *)0x0) &&
                       (iVar5 = __strnicmp(pcVar6 + 1,"Skeleton",8), iVar5 == 0)) {
                      piVar9 = (int *)FUN_00435830(local_12c[0],0);
                      iVar5 = local_13c;
                      for (piVar2 = piVar9; local_13c = iVar5, piVar2 != (int *)0x0;
                          piVar2 = (int *)piVar2[1]) {
                        iVar8 = *piVar2;
                        if ((iVar8 != 0) && (0 < iVar5)) {
                          do {
                            FUN_00439ff0(iVar8);
                            iVar5 = iVar5 + -1;
                          } while (iVar5 != 0);
                        }
                        FUN_00401f20(iVar8);
                        iVar5 = local_13c;
                      }
                      FUN_004526e0();
                      FUN_00401f20(piVar9);
                      pcVar12 = pcStack_134;
                    }
                    cVar3 = FUN_004688b0();
                    if (cVar3 != '\0') {
                      pcVar12[1] = '\0';
                      pcVar12 = &cStack_115;
                      do {
                        pcVar6 = pcVar12;
                        pcVar12 = pcVar6 + 1;
                      } while (pcVar6[1] != '\0');
                      builtin_strncpy(pcVar6 + 1,"SpecialAnims",0xd);
                      pcVar12 = &cStack_115;
                      do {
                        pcVar6 = pcVar12 + 1;
                        pcVar12 = pcVar12 + 1;
                      } while (*pcVar6 != '\0');
                      pcVar12[0] = '\\';
                      pcVar12[1] = '\0';
                      pcStack_134 = _strrchr(acStack_114,0x5c);
                      puVar11 = (undefined4 *)FUN_006899c0();
                      iVar5 = local_13c;
                      for (; puVar11 != (undefined4 *)0x0; puVar11 = (undefined4 *)puVar11[1]) {
                        pcStack_134[1] = '\0';
                        pcVar12 = (char *)*puVar11;
                        pcVar6 = pcVar12;
                        if (pcVar12 != (char *)0x0) {
                          do {
                            cVar3 = *pcVar6;
                            pcVar6 = pcVar6 + 1;
                          } while (cVar3 != '\0');
                          uVar4 = (int)pcVar6 - (int)pcVar12;
                          pcVar6 = &cStack_115;
                          do {
                            pcVar13 = pcVar6 + 1;
                            pcVar6 = pcVar6 + 1;
                          } while (*pcVar13 != '\0');
                          for (uVar14 = uVar4 >> 2; uVar14 != 0; uVar14 = uVar14 - 1) {
                            *(undefined4 *)pcVar6 = *(undefined4 *)pcVar12;
                            pcVar12 = pcVar12 + 4;
                            pcVar6 = pcVar6 + 4;
                          }
                          for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
                            *pcVar6 = *pcVar12;
                            pcVar12 = pcVar12 + 1;
                            pcVar6 = pcVar6 + 1;
                          }
                          iVar8 = iVar5;
                          if (0 < iVar5) {
                            do {
                              FUN_00439ff0(acStack_114);
                              iVar8 = iVar8 + -1;
                            } while (iVar8 != 0);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              iVar5 = FUN_009832e6(iVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03778,0);
              if (iVar5 != 0) {
                uVar15 = FUN_00469330(0);
                iVar5 = ModelLoader_IsModelLoaded(uVar15);
                if (iVar5 != 0) {
                  FUN_00434c00(local_13c);
                }
                uVar15 = FUN_00469330(1);
                iVar5 = ModelLoader_IsModelLoaded(uVar15);
                if (iVar5 != 0) {
                  FUN_00434c00(local_13c);
                }
              }
            }
          }
          else {
            iVar5 = FUN_009832e6(iVar8,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036fc,0);
            if (iVar5 != 0) {
              iVar8 = FUN_00449190();
              if (iVar8 != 0) {
                uVar15 = (**(code **)(*(int *)(iVar5 + 0x30) + 0x14))();
                iVar5 = ModelLoader_IsModelLoaded(uVar15);
                if (iVar5 != 0) {
                  FUN_00434c00(local_13c);
                }
              }
            }
          }
        }
        if (*(int *)(local_138 + 8) == 0) break;
      }
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041b1b0(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_0046b990();
  piVar1 = (int *)(in_ECX + 0x18);
  FUN_0046c730();
  (**(code **)(*piVar1 + 0x38))();
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  uVar2 = (**(code **)(*piVar1 + 0x28))(uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))(uVar2);
  FUN_0046ae40(uVar2);
  FUN_00414a20();
  FUN_0046b9f0();
  return;
}



bool FUN_0041b210(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036c0,0);
  if (iVar2 != 0) {
    cVar1 = FUN_0046ad70(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(int *)(in_ECX + 0x18) + 0x30))(iVar2 + 0x18);
      if (cVar1 == '\0') {
        cVar1 = FUN_00414a70(iVar2 + 0x24);
        return cVar1 != '\0';
      }
    }
  }
  return true;
}



void FUN_0041b280(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036c0,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    (**(code **)(*(int *)(in_ECX + 0x18) + 0x34))(iVar1 + 0x18);
    FUN_00414dc0(iVar1 + 0x24);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0041b2d0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  size_t _Size;
  void *_Dst;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *in_ECX;
  
  FUN_00451210(in_ECX);
  iVar2 = FUN_004510b0();
  if (iVar2 != 0) {
    piVar7 = in_ECX + 6;
    do {
      if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xffffffe8,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
      }
      else if (iVar2 == 0x44494645) {
        iVar4 = (**(code **)(*in_ECX + 0xd4))();
        if ((iVar4 == 0) || (pcVar3 = (char *)(**(code **)(*in_ECX + 0xd4))(), *pcVar3 == '\0')) {
          puVar8 = (undefined1 *)in_ECX[7];
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          FUN_004154b0(param_1,puVar8);
        }
        else {
          uVar5 = (**(code **)(*in_ECX + 0xd4))();
          FUN_004154b0(param_1,uVar5);
        }
      }
      else if (iVar2 == 0x4c4c5546) {
        FUN_0046c7a0(-(uint)(in_ECX != (int *)0x0) & (uint)piVar7,param_1);
      }
      (**(code **)(*piVar7 + 0x3c))(param_1,iVar2);
      iVar4 = (**(code **)(*piVar7 + 0x24))();
      if (iVar2 == iVar4) {
        _Size = (**(code **)(*piVar7 + 0x2c))();
        iVar2 = 0;
        _Dst = (void *)(**(code **)(*piVar7 + 0x28))();
        _memset(_Dst,iVar2,_Size);
        uVar5 = (**(code **)(*piVar7 + 0x2c))();
        uVar6 = (**(code **)(*piVar7 + 0x28))(uVar5);
        FUN_00450c20(uVar6,uVar5);
      }
      cVar1 = FUN_0044fea0();
    } while ((cVar1 != '\0') && (iVar2 = FUN_004510b0(), iVar2 != 0));
  }
  piVar7 = in_ECX + 10;
  iVar2 = 0;
  if (piVar7 != (int *)0x0) {
    do {
      if (*piVar7 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  puVar8 = (undefined1 *)in_ECX[7];
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_00a2f7ec;
  }
  FUN_004a7a60("Magic Item (%08X) %s has no effects defined.",in_ECX[3],puVar8);
  return 1;
}



void FUN_0041b490(void)

{
  int *piVar1;
  undefined4 uVar2;
  int in_ECX;
  
  FUN_0046b990();
  piVar1 = (int *)(in_ECX + 0x24);
  FUN_0046c730();
  (**(code **)(*piVar1 + 0x38))();
  uVar2 = (**(code **)(*piVar1 + 0x2c))();
  uVar2 = (**(code **)(*piVar1 + 0x28))(uVar2);
  uVar2 = (**(code **)(*piVar1 + 0x24))(uVar2);
  FUN_0046ae40(uVar2);
  FUN_00414a20();
  FUN_0046b9f0();
  return;
}



bool FUN_0041b4f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  
  iVar2 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03228,0);
  if (iVar2 != 0) {
    cVar1 = FUN_0046ad70(param_1);
    if (cVar1 == '\0') {
      cVar1 = (**(code **)(*(int *)(in_ECX + 0x24) + 0x30))(iVar2 + 0x24);
      if (cVar1 == '\0') {
        cVar1 = FUN_00414a70(iVar2 + 0x30);
        return cVar1 != '\0';
      }
    }
  }
  return true;
}



void FUN_0041b560(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_009832e6(param_1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b03228,0);
  if (iVar1 != 0) {
    FUN_0046acb0(param_1);
    (**(code **)(*(int *)(in_ECX + 0x24) + 0x34))(iVar1 + 0x24);
    FUN_00414dc0(iVar1 + 0x30);
  }
  return;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

undefined4 FUN_0041b5b0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  size_t _Size;
  void *_Dst;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 *puVar8;
  int *in_ECX;
  
  FUN_00451210(in_ECX);
  iVar2 = FUN_004510b0();
  if (iVar2 != 0) {
    piVar7 = in_ECX + 9;
    do {
      if (iVar2 == 0x44494445) {
        FUN_00450c20(&stack0xffffffe8,0x200);
        (**(code **)(*in_ECX + 0xd8))(&stack0xffffffe8);
      }
      else if (iVar2 == 0x44494645) {
        iVar4 = (**(code **)(*in_ECX + 0xd4))();
        if ((iVar4 == 0) || (pcVar3 = (char *)(**(code **)(*in_ECX + 0xd4))(), *pcVar3 == '\0')) {
          puVar8 = (undefined1 *)in_ECX[10];
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_00a2f7ec;
          }
          FUN_004154b0(param_1,puVar8);
        }
        else {
          uVar5 = (**(code **)(*in_ECX + 0xd4))();
          FUN_004154b0(param_1,uVar5);
        }
      }
      else if (iVar2 == 0x4c4c5546) {
        FUN_0046c7a0(-(uint)(in_ECX != (int *)0x0) & (uint)piVar7,param_1);
      }
      (**(code **)(*piVar7 + 0x3c))(param_1,iVar2);
      iVar4 = (**(code **)(*piVar7 + 0x24))();
      if (iVar2 == iVar4) {
        _Size = (**(code **)(*piVar7 + 0x2c))();
        iVar2 = 0;
        _Dst = (void *)(**(code **)(*piVar7 + 0x28))();
        _memset(_Dst,iVar2,_Size);
        uVar5 = (**(code **)(*piVar7 + 0x2c))();
        uVar6 = (**(code **)(*piVar7 + 0x28))(uVar5);
        FUN_00450c20(uVar6,uVar5);
      }
      cVar1 = FUN_0044fea0();
    } while ((cVar1 != '\0') && (iVar2 = FUN_004510b0(), iVar2 != 0));
  }
  piVar7 = in_ECX + 0xd;
  iVar2 = 0;
  if (piVar7 != (int *)0x0) {
    do {
      if (*piVar7 != 0) {
        iVar2 = iVar2 + 1;
      }
      piVar7 = (int *)piVar7[1];
    } while (piVar7 != (int *)0x0);
    if (iVar2 != 0) {
      return 1;
    }
  }
  puVar8 = (undefined1 *)in_ECX[10];
  if (puVar8 == (undefined1 *)0x0) {
    puVar8 = &DAT_00a2f7ec;
  }
  FUN_004a7a60("Magic Item (%08X) %s has no effects defined.",in_ECX[3],puVar8);
  return 1;
}



undefined4 FUN_0041b770(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(param_1) {
  case 0:
    return 0x14;
  case 1:
    return 0x15;
  case 2:
    return 0x16;
  case 3:
    return 0x17;
  case 4:
    return 0x18;
  case 5:
    uVar1 = 0x19;
  }
  return uVar1;
}



undefined4 FUN_0041b7c0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 6;
  switch(param_1) {
  case 0x14:
    return 0;
  case 0x15:
    return 1;
  case 0x16:
    return 2;
  case 0x17:
    return 3;
  case 0x18:
    return 4;
  case 0x19:
    uVar1 = 5;
  }
  return uVar1;
}



undefined4 FUN_0041b820(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return DAT_00b33560;
  case 1:
    return DAT_00b33564;
  case 2:
    return DAT_00b33568;
  case 3:
    return DAT_00b3356c;
  case 4:
    return DAT_00b33570;
  case 5:
    return DAT_00b33574;
  default:
    return 0;
  }
}



undefined4 FUN_0041b870(void)

{
  return DAT_00b335a8;
}



undefined4 FUN_0041b880(void)

{
  return DAT_00b335ac;
}



undefined4 FUN_0041b890(void)

{
  return DAT_00b335b0;
}



undefined4 FUN_0041b8a0(void)

{
  return DAT_00b335b4;
}



undefined4 FUN_0041b8b0(void)

{
  return DAT_00b335b8;
}



uint FUN_0041b8c0(int param_1,int param_2)

{
  switch(param_1 - 1U) {
  case 0:
    return (uint)(param_2 == 0x48534946);
  case 1:
    return (uint)(param_2 == 0x48535246);
  default:
    return param_1 - 1U & 0xffffff00;
  case 3:
    return (uint)(param_2 == 0x4853494c);
  case 7:
    break;
  }
  if (((param_2 != 0x444c4853) && (param_2 != 0x574e5352)) && (param_2 != 0x47444552)) {
    return 0;
  }
  return 1;
}



undefined4 FUN_0041b950(int param_1)

{
  if (param_1 < 0x4853494d) {
    if (param_1 == 0x4853494c) {
      return 4;
    }
    if ((param_1 == 0x444c4853) || (param_1 == 0x47444552)) {
      return 8;
    }
    if (param_1 == 0x48534946) {
      return 1;
    }
  }
  else {
    if (param_1 == 0x48535246) {
      return 2;
    }
    if (param_1 == 0x574e5352) {
      return 8;
    }
  }
  return 0;
}



byte FUN_0041b9a0(int param_1)

{
  if (param_1 == 0x47444853) {
    return 4;
  }
  if (param_1 != 0x47444946) {
    return (param_1 != 0x47445246) - 1U & 2;
  }
  return 1;
}



undefined4 FUN_0041b9e0(int param_1)

{
  if ((undefined4 *)(&PTR_DAT_00b037ac)[param_1] != (undefined4 *)0x0) {
    return *(undefined4 *)(&PTR_DAT_00b037ac)[param_1];
  }
  return 0;
}



undefined4 FUN_0041ba00(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0056a300(param_1);
  switch(uVar1) {
  case 1:
    return DAT_00b336d4;
  case 2:
    return DAT_00b336dc;
  case 3:
    return DAT_00b336e4;
  case 4:
    return DAT_00b336ec;
  default:
    return DAT_00b336cc;
  }
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041ba50(void)

{
  return (float10)_DAT_00b336f4;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 FUN_0041ba60(void)

{
  return (float10)_DAT_00b336fc;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041ba70(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 0x447a0000;
  *param_3 = 0x44fa0000;
  if (param_1 == 1) {
    *param_2 = _DAT_00b3369c;
    *param_3 = _DAT_00b336a4;
    return;
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      *param_2 = _DAT_00b3368c;
      *param_3 = _DAT_00b33694;
      return;
    }
    *param_2 = _DAT_00b336bc;
    *param_3 = _DAT_00b336c4;
    return;
  }
  *param_2 = _DAT_00b336ac;
  *param_3 = _DAT_00b336b4;
  return;
}



void FUN_0041bae0(int param_1,undefined4 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab578;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = param_2;
  in_ECX[1] = param_1;
  local_4 = 0;
  if (param_1 != 0) {
    cVar1 = FUN_0055e000(param_1,&param_1);
    if (cVar1 != '\0') {
      FUN_004a7a60("Setting key \'%s\' already used in map.\nSetting keys must be unique.\n",
                   in_ECX[1],uVar2);
      *unaff_FS_OFFSET = local_c;
      return;
    }
    FUN_00412d30(in_ECX[1],in_ECX);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041bb80(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  undefined4 uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab747;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(300);
  DAT_00b33560 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7,uVar1);
  if (DAT_00b33560 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0;
    if (iVar3 == 0) {
      DAT_00b33560 = (int *)0x0;
    }
    else {
      DAT_00b33560 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(300,1);
    (**(code **)(*DAT_00b33560 + 0xd8))("MagicFailureSoundAlteration");
    (**(code **)(*DAT_00b33560 + 0x90))(0);
    FUN_00446cb0(DAT_00b33560);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x12d);
  DAT_00b33564 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7,uVar1);
  if (DAT_00b33564 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 1;
    if (iVar3 == 0) {
      DAT_00b33564 = (int *)0x0;
    }
    else {
      DAT_00b33564 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x12d,1);
    (**(code **)(*DAT_00b33564 + 0xd8))("MagicFailureSoundConjuration");
    (**(code **)(*DAT_00b33564 + 0x90))(0);
    FUN_00446cb0(DAT_00b33564);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x12e);
  DAT_00b33568 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33568 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 2;
    if (iVar3 == 0) {
      DAT_00b33568 = (int *)0x0;
    }
    else {
      DAT_00b33568 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x12e,1);
    (**(code **)(*DAT_00b33568 + 0xd8))("MagicFailureSoundDestruction");
    (**(code **)(*DAT_00b33568 + 0x90))(0);
    FUN_00446cb0(DAT_00b33568);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x12f);
  DAT_00b3356c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3356c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 3;
    if (iVar3 == 0) {
      DAT_00b3356c = (int *)0x0;
    }
    else {
      DAT_00b3356c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x12f,1);
    (**(code **)(*DAT_00b3356c + 0xd8))("MagicFailureSoundIllusion");
    (**(code **)(*DAT_00b3356c + 0x90))(0);
    FUN_00446cb0(DAT_00b3356c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x130);
  DAT_00b33570 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33570 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 4;
    if (iVar3 == 0) {
      DAT_00b33570 = (int *)0x0;
    }
    else {
      DAT_00b33570 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x130,1);
    (**(code **)(*DAT_00b33570 + 0xd8))("MagicFailureSoundMysticism");
    (**(code **)(*DAT_00b33570 + 0x90))(0);
    FUN_00446cb0(DAT_00b33570);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x131);
  DAT_00b33574 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33574 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 5;
    if (iVar3 == 0) {
      DAT_00b33574 = (int *)0x0;
    }
    else {
      DAT_00b33574 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x131,1);
    (**(code **)(*DAT_00b33574 + 0xd8))("MagicFailureSoundRestoration");
    (**(code **)(*DAT_00b33574 + 0x90))(0);
    FUN_00446cb0(DAT_00b33574);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x138);
  DAT_00b33578 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33578 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 6;
    if (iVar3 == 0) {
      DAT_00b33578 = (int *)0x0;
    }
    else {
      DAT_00b33578 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x138,1);
    (**(code **)(*DAT_00b33578 + 0xd8))("MagicEnchantDrawSoundAlteration");
    (**(code **)(*DAT_00b33578 + 0x90))(0);
    FUN_00446cb0(DAT_00b33578);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x139);
  DAT_00b3357c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3357c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 7;
    if (iVar3 == 0) {
      DAT_00b3357c = (int *)0x0;
    }
    else {
      DAT_00b3357c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x139,1);
    (**(code **)(*DAT_00b3357c + 0xd8))("MagicEnchantDrawSoundConjuration");
    (**(code **)(*DAT_00b3357c + 0x90))(0);
    FUN_00446cb0(DAT_00b3357c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13a);
  DAT_00b33580 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33580 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 8;
    if (iVar3 == 0) {
      DAT_00b33580 = (int *)0x0;
    }
    else {
      DAT_00b33580 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13a,1);
    (**(code **)(*DAT_00b33580 + 0xd8))("MagicEnchantDrawSoundDestruction");
    (**(code **)(*DAT_00b33580 + 0x90))(0);
    FUN_00446cb0(DAT_00b33580);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13b);
  DAT_00b33584 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33584 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 9;
    if (iVar3 == 0) {
      DAT_00b33584 = (int *)0x0;
    }
    else {
      DAT_00b33584 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13b,1);
    (**(code **)(*DAT_00b33584 + 0xd8))("MagicEnchantDrawSoundIllusion");
    (**(code **)(*DAT_00b33584 + 0x90))(0);
    FUN_00446cb0(DAT_00b33584);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13c);
  DAT_00b33588 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33588 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 10;
    if (iVar3 == 0) {
      DAT_00b33588 = (int *)0x0;
    }
    else {
      DAT_00b33588 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13c,1);
    (**(code **)(*DAT_00b33588 + 0xd8))("MagicEnchantDrawSoundMysticism");
    (**(code **)(*DAT_00b33588 + 0x90))(0);
    FUN_00446cb0(DAT_00b33588);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13d);
  DAT_00b3358c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3358c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xb;
    if (iVar3 == 0) {
      DAT_00b3358c = (int *)0x0;
    }
    else {
      DAT_00b3358c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13d,1);
    (**(code **)(*DAT_00b3358c + 0xd8))("MagicEnchantDrawSoundRestoration");
    (**(code **)(*DAT_00b3358c + 0x90))(0);
    FUN_00446cb0(DAT_00b3358c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13e);
  DAT_00b33590 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33590 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xc;
    if (iVar3 == 0) {
      DAT_00b33590 = (int *)0x0;
    }
    else {
      DAT_00b33590 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13e,1);
    (**(code **)(*DAT_00b33590 + 0xd8))("MagicEnchantHitSoundAlteration");
    (**(code **)(*DAT_00b33590 + 0x90))(0);
    FUN_00446cb0(DAT_00b33590);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x13f);
  DAT_00b33594 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33594 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xd;
    if (iVar3 == 0) {
      DAT_00b33594 = (int *)0x0;
    }
    else {
      DAT_00b33594 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x13f,1);
    (**(code **)(*DAT_00b33594 + 0xd8))("MagicEnchantHitSoundConjuration");
    (**(code **)(*DAT_00b33594 + 0x90))(0);
    FUN_00446cb0(DAT_00b33594);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x140);
  DAT_00b33598 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b33598 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xe;
    if (iVar3 == 0) {
      DAT_00b33598 = (int *)0x0;
    }
    else {
      DAT_00b33598 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x140,1);
    (**(code **)(*DAT_00b33598 + 0xd8))("MagicEnchantHitSoundDestruction");
    (**(code **)(*DAT_00b33598 + 0x90))(0);
    FUN_00446cb0(DAT_00b33598);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x141);
  DAT_00b3359c = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b3359c == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0xf;
    if (iVar3 == 0) {
      DAT_00b3359c = (int *)0x0;
    }
    else {
      DAT_00b3359c = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x141,1);
    (**(code **)(*DAT_00b3359c + 0xd8))("MagicEnchantHitSoundIllusion");
    (**(code **)(*DAT_00b3359c + 0x90))(0);
    FUN_00446cb0(DAT_00b3359c);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x142);
  DAT_00b335a0 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335a0 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x10;
    if (iVar3 == 0) {
      DAT_00b335a0 = (int *)0x0;
    }
    else {
      DAT_00b335a0 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x142,1);
    (**(code **)(*DAT_00b335a0 + 0xd8))("MagicEnchantHitSoundMysticism");
    (**(code **)(*DAT_00b335a0 + 0x90))(0);
    FUN_00446cb0(DAT_00b335a0);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03500;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x143);
  DAT_00b335a4 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335a4 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x44);
    local_4 = 0x11;
    if (iVar3 == 0) {
      DAT_00b335a4 = (int *)0x0;
    }
    else {
      DAT_00b335a4 = (int *)FUN_00517f40();
    }
    local_4 = 0xffffffff;
    FUN_0046c300(0x143,1);
    (**(code **)(*DAT_00b335a4 + 0xd8))("MagicEnchantHitSoundRestoration");
    (**(code **)(*DAT_00b335a4 + 0x90))(0);
    FUN_00446cb0(DAT_00b335a4);
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03800;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x136);
  DAT_00b335a8 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335a8 == (int *)0x0) {
    DAT_00b335a8 = (int *)FUN_0041d4a0();
    if (DAT_00b335a8 != (int *)0x0) {
      FUN_0046c300(0x136,1);
      (**(code **)(*DAT_00b335a8 + 0xd8))("DefaultPlayerSpell");
      (**(code **)(*DAT_00b335a8 + 0x90))(0);
      FUN_00446cb0(DAT_00b335a8);
    }
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b03800;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x137);
  DAT_00b335ac = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335ac == (int *)0x0) {
    DAT_00b335ac = (int *)FUN_0041d590();
    if (DAT_00b335ac != (int *)0x0) {
      FUN_0046c300(0x137,1);
      (**(code **)(*DAT_00b335ac + 0xd8))("DefaultMarksmanParalyzeSpell");
      (**(code **)(*DAT_00b335ac + 0x90))(0);
      FUN_00446cb0(DAT_00b335ac);
    }
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b034e0;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x144);
  DAT_00b335b0 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335b0 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x110);
    local_4 = 0x12;
    if (iVar3 == 0) {
      DAT_00b335b0 = (int *)0x0;
    }
    else {
      DAT_00b335b0 = (int *)FUN_004adc00();
    }
    local_4 = 0xffffffff;
    if (DAT_00b335b0 != (int *)0x0) {
      FUN_0046c300(0x144,1);
      (**(code **)(*DAT_00b335b0 + 0xd8))("effectAbsorb");
      (**(code **)(*DAT_00b335b0 + 0x90))(0);
      FUN_00446cb0(DAT_00b335b0);
    }
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b034e0;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x145);
  DAT_00b335b4 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335b4 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x110);
    local_4 = 0x13;
    if (iVar3 == 0) {
      DAT_00b335b4 = (int *)0x0;
    }
    else {
      DAT_00b335b4 = (int *)FUN_004adc00();
    }
    local_4 = 0xffffffff;
    if (DAT_00b335b4 != (int *)0x0) {
      FUN_0046c300(0x145,1);
      (**(code **)(*DAT_00b335b4 + 0xd8))("effectReflect");
      (**(code **)(*DAT_00b335b4 + 0x90))(0);
      FUN_00446cb0(DAT_00b335b4);
    }
  }
  uVar7 = 0;
  ppuVar6 = &PTR_PTR_00b034e0;
  ppuVar5 = &PTR_PTR_00b02f9c;
  uVar4 = 0;
  uVar2 = FUN_004471a0(0x146);
  DAT_00b335b8 = (int *)FUN_009832e6(uVar2,uVar4,ppuVar5,ppuVar6,uVar7);
  if (DAT_00b335b8 == (int *)0x0) {
    iVar3 = FUN_00401f00(0x110);
    local_4 = 0x14;
    if (iVar3 == 0) {
      DAT_00b335b8 = (int *)0x0;
    }
    else {
      DAT_00b335b8 = (int *)FUN_004adc00();
    }
    local_4 = 0xffffffff;
    if (DAT_00b335b8 != (int *)0x0) {
      FUN_0046c300(0x146,1);
      (**(code **)(*DAT_00b335b8 + 0xd8))("LifeDetected");
      (**(code **)(*DAT_00b335b8 + 0x90))(0);
      FUN_00446cb0(DAT_00b335b8);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



uint FUN_0041cac0(int param_1,int param_2)

{
  uint in_EAX;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint3 uVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return in_EAX & 0xffffff00;
  }
  uVar5 = *(uint *)(*(int *)(param_1 + 0x1c) + 0x58);
  if (((uVar5 >> 0x11 & 1) != 0) && ((*(uint *)(*(int *)(param_2 + 0x1c) + 0x58) >> 0x11 & 1) != 0))
  {
    if ((uVar5 & 0x70000) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x60);
    }
    uVar1 = FUN_004471a0(uVar1);
    if ((*(uint *)(*(int *)(param_2 + 0x1c) + 0x58) & 0x70000) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(undefined4 *)(*(int *)(param_2 + 0x1c) + 0x60);
    }
    uVar2 = FUN_004471a0(uVar2);
    iVar3 = FUN_009832e6(uVar1,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
    iVar4 = FUN_009832e6(uVar2,0,&PTR_PTR_00b02f9c,&PTR_PTR_00b036dc,0);
    if ((iVar3 != 0) && (iVar4 != 0)) {
      uVar5 = FUN_00468fd0(iVar4);
      return uVar5;
    }
  }
  uVar6 = (uint3)((uint)*(int *)(param_1 + 0x1c) >> 8);
  if (((*(byte *)(*(int *)(param_1 + 0x1c) + 0x5a) & 1) != 0) &&
     ((*(byte *)(*(int *)(param_2 + 0x1c) + 0x5a) & 1) != 0)) {
    return CONCAT31(uVar6,1);
  }
  return (uint)uVar6 << 8;
}



/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0041cbb0(int param_1,int param_2,int *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 auStack_274 [12];
  int local_268;
  int *local_264;
  int *local_260;
  undefined4 local_25c;
  undefined4 *local_258;
  int *piStack_254;
  int *piStack_250;
  float fStack_24c;
  char acStack_248 [104];
  char acStack_1e0 [200];
  char acStack_118 [104];
  undefined1 auStack_b0 [108];
  uint local_44;
  
  local_44 = DAT_00b30aac ^ (uint)auStack_274;
  iVar6 = *param_3;
  local_260 = param_3;
  local_25c = *param_4;
  local_258 = param_4;
  local_268 = iVar6;
  FUN_0057b8e0("MAGIC INFO",(float)DAT_00b02e24,(float)iVar6,1);
  iVar6 = iVar6 + param_2;
  local_268 = iVar6;
  uVar1 = FUN_004da2a0((float)DAT_00b02e24,(float)iVar6,1);
  FUN_0057b8e0(uVar1);
  iVar6 = iVar6 + param_2;
  local_268 = iVar6;
  local_264 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03834);
  if ((local_264 == (int *)0x0) || ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0)) {
    FUN_0057b8e0("Current ref is not a MagicCaster.",(float)DAT_00b02e24,(float)local_268,1);
    iVar6 = iVar6 + param_2;
  }
  else {
    piVar2 = (int *)FUN_009832e6(local_264,0,&PTR_PTR_00b03834,&PTR_PTR_00b03070);
    if (piVar2 != (int *)0x0) {
      FUN_005f1910();
      uVar1 = (**(code **)(*piVar2 + 0x284))(9);
      _sprintf(acStack_1e0,"Caster Magicka: %d/%d",uVar1);
      FUN_0057b8e0(acStack_1e0,(float)DAT_00b02e24,(float)local_268,1);
      iVar6 = iVar6 + param_2;
      local_268 = iVar6;
    }
    iVar3 = (**(code **)(*local_264 + 0x30))();
    if (iVar3 == 0) {
      FUN_0057b8e0("Caster Inactive",(float)DAT_00b02e24,(float)local_268,1);
      iVar6 = iVar6 + param_2;
    }
    else {
      (**(code **)(*local_264 + 0x30))();
      _sprintf(acStack_1e0,"Current Spell: %s:");
      FUN_0057b8e0(acStack_1e0,(float)DAT_00b02e24,(float)local_268,1);
      local_268 = iVar6 + param_2;
      iVar3 = FUN_00452a60();
      if (((((iVar3 != 0) && (iVar3 = FUN_00452a60(), iVar3 != 1)) &&
           (iVar3 = FUN_00452a60(), iVar3 != 2)) &&
          ((iVar3 = FUN_00452a60(), iVar3 != 4 && (iVar3 = FUN_00452a60(), iVar3 != 5)))) &&
         (iVar3 = FUN_00452a60(), iVar3 != 6)) {
        FUN_00452a60();
      }
      _sprintf(acStack_1e0,"Casting State: %s");
      FUN_0057b8e0(acStack_1e0,(float)DAT_00b02e24,(float)local_268,1);
      iVar6 = iVar6 + param_2 + param_2;
    }
  }
  local_268 = iVar6;
  piVar2 = (int *)FUN_009832e6(param_1,0,&PTR_PTR_00b03054,&PTR_PTR_00b03818);
  if ((piVar2 == (int *)0x0) || ((*(uint *)(param_1 + 8) >> 0xb & 1) != 0)) {
    FUN_0057b8e0("Current ref is not a MagicTarget.",(float)DAT_00b02e24,(float)local_268,1,
                 0xffffffff);
    iVar6 = iVar6 + param_2;
  }
  else {
    piStack_250 = (int *)(**(code **)(*piVar2 + 8))();
    if (piStack_250 != (int *)0x0) {
      if ((piStack_250[1] != 0) || (*piStack_250 != 0)) {
        FUN_0057b8e0("CURRENT EFFECTS:",(float)DAT_00b02e24,(float)local_268,1);
        iVar6 = iVar6 + param_2;
        local_268 = iVar6;
      }
      do {
        iVar3 = *piStack_250;
        piStack_250 = (int *)piStack_250[1];
        if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
          piStack_254 = (int *)FUN_009832e6(local_264,0,&PTR_PTR_00b03834,&PTR_PTR_00b03070);
          if (*(float *)(iVar3 + 0x1c) == 0.0) {
            _sprintf(acStack_118,"");
          }
          else {
            _sprintf(acStack_118,", %0.f/%0.fsec",(double)*(float *)(iVar3 + 4),
                     (double)*(float *)(iVar3 + 0x1c));
          }
          FUN_00413a90();
          iVar4 = (**(code **)(**(int **)(iVar3 + 8) + 0x18))();
          if (iVar4 == 6) {
            iVar4 = FUN_009832e6(*(undefined4 *)(iVar3 + 0x30),0,&PTR_PTR_00b03248,&PTR_PTR_00b03298
                                );
            if (iVar4 != 0) {
              puVar7 = *(undefined1 **)(iVar4 + 4);
              if (puVar7 == (undefined1 *)0x0) {
                puVar7 = &DAT_00a2f7ec;
              }
              iVar4 = (**(code **)(**(int **)(iVar3 + 8) + 0x18))();
              if ((undefined4 *)(&PTR_DAT_00b037ac)[iVar4] == (undefined4 *)0x0) {
                lVar8 = ZEXT48(puVar7) << 0x20;
              }
              else {
                lVar8 = CONCAT44(puVar7,*(undefined4 *)(&PTR_DAT_00b037ac)[iVar4]);
              }
              goto LAB_0041d065;
            }
            builtin_strncpy(acStack_248,"Unknown Enchantment",0x14);
          }
          else {
            iVar4 = (**(code **)(**(int **)(iVar3 + 8) + 0x18))();
            if ((undefined4 *)(&PTR_DAT_00b037ac)[iVar4] == (undefined4 *)0x0) {
              uVar1 = 0;
            }
            else {
              uVar1 = *(undefined4 *)(&PTR_DAT_00b037ac)[iVar4];
            }
            puVar7 = *(undefined1 **)(*(int *)(iVar3 + 8) + 4);
            if (puVar7 == (undefined1 *)0x0) {
              puVar7 = &DAT_00a2f7ec;
            }
            lVar8 = CONCAT44(uVar1,puVar7);
LAB_0041d065:
            _sprintf(acStack_248,"%s %s",lVar8);
          }
          piVar2 = piStack_254;
          if ((piStack_254 == (int *)0x0) || (*(int *)(*(int *)(iVar3 + 0xc) + 0x14) == 0x48)) {
            _sprintf(acStack_1e0,"%s: Mag=%.2f, %s from %s",auStack_b0,
                     (double)*(float *)(iVar3 + 0x18),acStack_118);
          }
          else {
            fStack_24c = *(float *)(iVar3 + 0x18);
            uVar1 = *(undefined4 *)(*(int *)(iVar3 + 0xc) + 0x14);
            uVar9 = CONCAT44(acStack_248,acStack_118);
            uVar5 = FUN_005f1910();
            uVar5 = (**(code **)(*piVar2 + 0x284))(uVar1,uVar5,uVar9);
            uVar1 = FUN_00565cc0(uVar1,uVar5);
            _sprintf(acStack_1e0,"%s: Mag=%.2f, %s=%d/%d%s from %s",auStack_b0,(double)fStack_24c,
                     uVar1);
          }
          FUN_0057b8e0(acStack_1e0,(float)DAT_00b02e24,(float)local_268,1);
          iVar6 = iVar6 + param_2;
          local_268 = iVar6;
        }
      } while (piStack_250 != (int *)0x0);
    }
  }
  *local_260 = iVar6;
  *local_258 = local_25c;
  return;
}



void FUN_0041d1d0(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab458;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a34c3c;
  in_ECX[6] = &PTR_FUN_00a34bf4;
  in_ECX[9] = &PTR_FUN_00a34be4;
  local_4 = 0;
  FUN_00414c70(uVar1);
  thunk_FUN_0046b170();
  local_4 = 0xffffffff;
  FUN_00418e90();
  *unaff_FS_OFFSET = local_c;
  return;
}



float10 FUN_0041d320(int *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 unaff_ESI;
  float10 fVar4;
  
  iVar2 = (**(code **)(*(int *)(in_ECX + -0xc) + 0x18))();
  if ((iVar2 == 2) || (iVar2 = (**(code **)(*(int *)(in_ECX + -0xc) + 0x18))(), iVar2 == 3)) {
    param_1 = (int *)0x0;
  }
  if ((*(byte *)(in_ECX + 0x1c) & 1) == 0) {
    fVar4 = (float10)FUN_004151c0(param_1);
    fVar1 = (float)fVar4;
  }
  else {
    fVar1 = (float)*(int *)(in_ECX + 0x14);
    if (param_1 != (int *)0x0) {
      iVar2 = *param_1;
      uVar3 = (**(code **)(iVar2 + 0x284))(7);
      uVar3 = FUN_00415360(uVar3);
      uVar3 = (**(code **)(iVar2 + 0x284))(uVar3);
      fVar4 = (float10)FUN_00548c00(unaff_ESI,uVar3);
      return (float10)(float)fVar4;
    }
  }
  param_1 = (int *)fVar1;
  return (float10)(float)param_1;
}



void FUN_0041d400(byte param_1)

{
  FUN_0041d1d0();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0041d420(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab458;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  FUN_004194e0(uVar1);
  local_4 = 0;
  *in_ECX = &PTR_FUN_00a34c3c;
  in_ECX[6] = &PTR_FUN_00a34bf4;
  in_ECX[9] = &PTR_FUN_00a34be4;
  *(undefined1 *)(in_ECX + 1) = 0x10;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0xffffffff;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  thunk_FUN_0046b090();
  *unaff_FS_OFFSET = local_c;
  return;
}



int FUN_0041d4a0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_00401f00(0x44,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0041d420();
  }
  local_4 = 0xffffffff;
  iVar3 = FUN_00401f00(0x24,uVar1);
  local_4 = 1;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_00416870(0x45484552);
    uVar4 = FUN_004149d0(uVar4);
  }
  local_4 = 0xffffffff;
  FUN_00413410(0);
  FUN_004133e0(0);
  FUN_00413340(5);
  FUN_00413390(0);
  FUN_00414b90(uVar4);
  FUN_004028d0("Default Player Spell",0);
  *(undefined4 *)(iVar2 + 0x34) = 0;
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



int FUN_0041d590(void)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d00c6;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_00401f00(0x44,uVar2);
  local_4 = 0;
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_0041d420();
  }
  local_4 = 0xffffffff;
  iVar4 = FUN_00401f00(0x24,uVar2);
  local_4 = 1;
  if (iVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_00416870(0x41524150);
    uVar5 = FUN_004149d0(uVar5);
  }
  local_4 = 0xffffffff;
  FUN_00413410(0);
  FUN_004133e0(10);
  FUN_00413340(0);
  FUN_00413390(0);
  FUN_00414b90(uVar5);
  FUN_004028d0("Master Marksman Paralysis",0);
  pcVar1 = *(code **)(*(int *)(iVar3 + 0x18) + 0x14);
  *(undefined4 *)(iVar3 + 0x34) = 0;
  *(undefined4 *)(iVar3 + 0x38) = 0;
  (*pcVar1)(0);
  *unaff_FS_OFFSET = iVar4;
  return iVar3;
}



/* WARNING: Removing unreachable block (ram,0x0041d83b) */
/* WARNING: Removing unreachable block (ram,0x0041d849) */
/* WARNING: Removing unreachable block (ram,0x0041d84d) */
/* WARNING: Removing unreachable block (ram,0x0041d857) */

void FUN_0041d7f0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  undefined1 local_c [12];
  
  iVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)local_c;
  *(undefined1 *)(in_ECX + 1) = 3;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a34d5c;
  in_ECX[3] = 0;
  *unaff_FS_OFFSET = iVar1;
  return;
}



void FUN_0041d870(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ab783;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a34d5c;
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1,uVar2);
    }
    in_ECX[3] = 0;
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041d920(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = param_1;
  *(undefined1 *)(in_ECX + 1) = 4;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34d68;
  return;
}



void FUN_0041d940(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 8;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34d74;
  in_ECX[3] = param_1;
  return;
}



void FUN_0041d960(undefined1 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0xb;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34d80;
  *(undefined1 *)(in_ECX + 3) = param_1;
  return;
}



void FUN_0041d980(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0xc;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34d8c;
  in_ECX[3] = param_1;
  return;
}



void FUN_0041d9a0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 5;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34d98;
  in_ECX[3] = 0;
  return;
}



void FUN_0041d9c0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0xd;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34da4;
  in_ECX[3] = 0;
  return;
}



void FUN_0041d9e0(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 9;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a34db0;
  in_ECX[3] = 0;
  return;
}



void FUN_0041da00(void)

{
  uint uVar1;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009aba58;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a34db0;
  local_4 = 0;
  if ((undefined4 *)in_ECX[3] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[3])(1,uVar1);
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041da60(void)

{
  undefined4 *in_ECX;
  
  in_ECX[3] = 0;
  *(undefined1 *)(in_ECX + 1) = 0x4c;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34dbc;
  return;
}



void FUN_0041da80(void)

{
  undefined4 *in_ECX;
  
  *(undefined1 *)(in_ECX + 1) = 0x10;
  in_ECX[2] = 0;
  *in_ECX = &PTR_LAB_00a34dc8;
  in_ECX[3] = 0;
  return;
}



void FUN_0041daa0(byte param_1)

{
  FUN_0041d870();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0041dac0(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab7be;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 2;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a34dd4;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = 2;
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[3] = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041db90(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_009ab7fe;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe4;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a34dd4;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 2;
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
  puVar1 = (undefined4 *)in_ECX[4];
  local_4._0_1_ = 1;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  puVar1 = (undefined4 *)in_ECX[3];
  local_4 = (uint)local_4._1_3_ << 8;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041dc80(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_009ab833;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *(undefined1 *)(in_ECX + 1) = 0xf;
  in_ECX[2] = 0;
  *in_ECX = &PTR_FUN_00a34de0;
  in_ECX[4] = 0;
  in_ECX[3] = param_1;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = 1;
  if (puVar1 != param_2) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar3 = InterlockedDecrement(puVar1 + 1);
      if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1,uVar2);
      }
    }
    in_ECX[4] = param_2;
    if (param_2 != (undefined4 *)0x0) {
      InterlockedIncrement(param_2 + 1);
    }
  }
  in_ECX[6] = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041dd30(void)

{
  undefined4 *puVar1;
  uint uVar2;
  LONG LVar3;
  undefined4 *in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_009ab833;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe0;
  *unaff_FS_OFFSET = (int)&local_c;
  *in_ECX = &PTR_FUN_00a34de0;
  local_4 = 1;
  in_ECX[3] = 0;
  FUN_00977c50(3,uVar2);
  puVar1 = (undefined4 *)in_ECX[4];
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    in_ECX[4] = 0;
  }
  FUN_00977c50(2,uVar2);
  in_ECX[6] = 0;
  puVar1 = (undefined4 *)in_ECX[4];
  local_4 = local_4 & 0xffffff00;
  if (puVar1 != (undefined4 *)0x0) {
    LVar3 = InterlockedDecrement(puVar1 + 1);
    if ((LVar3 == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
  }
  *in_ECX = &PTR_LAB_00a34d50;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ddf0(byte param_1)

{
  FUN_0041da00();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0041de10(byte param_1)

{
  FUN_0041db90();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0041de30(byte param_1)

{
  FUN_0041dd30();
  if ((param_1 & 1) != 0) {
    FUN_00401f20();
  }
  return;
}



void FUN_0041de50(int param_1)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  DAT_00b33780 = DAT_00b33780 + 1;
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  if (param_1 == *(int *)(iVar1 + 8)) {
    _memset((void *)(iVar1 + 0x10),0,0x174);
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  return;
}



void FUN_0041dea0(void)

{
  int iVar1;
  int iVar2;
  int unaff_FS_OFFSET;
  
  iVar2 = DAT_00b33780;
  iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
  if (*(int *)(iVar1 + 0xc) != DAT_00b33780) {
    *(undefined4 *)(iVar1 + 8) = 0;
    _memset((void *)(iVar1 + 0x10),0,0x174);
    *(int *)(iVar1 + 0xc) = iVar2;
  }
  return;
}



bool FUN_0041def0(void)

{
  int in_ECX;
  
  return (*(byte *)(in_ECX + 0xe) & 0x40) != 0;
}



byte FUN_0041df00(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xc) >> 5 & 1;
}



byte FUN_0041df10(char param_1)

{
  int in_ECX;
  
  if (param_1 != '\0') {
    return *(byte *)(in_ECX + 0xb) >> 4 & 1;
  }
  if ((*(byte *)(in_ECX + 0xb) & 0x18) == 0) {
    return 0;
  }
  return 1;
}



byte FUN_0041df40(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x10) >> 7;
}



byte FUN_0041df50(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0x12) & 1;
}



byte FUN_0041df60(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 0xe) >> 5 & 1;
}



void FUN_0041df90(int param_1,int param_2)

{
  int iVar1;
  int unaff_FS_OFFSET;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    if (param_1 != *(int *)(iVar1 + 8)) {
      _memset((void *)(iVar1 + 0x10),0,0x174);
      *(int *)(iVar1 + 8) = param_1;
    }
    *(int *)(iVar1 + 0x10 + (uint)*(byte *)(param_2 + 4) * 4) = param_2;
  }
  return;
}



void FUN_0041dff0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  char unaff_retaddr;
  
  FUN_00401020("BaseExtraList::RemoveAll");
  FUN_0041de50();
  if (unaff_retaddr == '\0') {
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  else {
    puVar2 = *(undefined4 **)(in_ECX + 4);
    while (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)puVar2[2];
      *(undefined4 **)(in_ECX + 4) = puVar1;
      (**(code **)*puVar2)(1);
      puVar2 = puVar1;
    }
  }
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_00401040();
  return;
}



int FUN_0041e060(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_00401020("BaseExtraList::ItemsInList");
  iVar2 = 0;
  for (iVar1 = *(int *)(in_ECX + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    iVar2 = iVar2 + 1;
  }
  FUN_00401040();
  return iVar2;
}



/* WARNING: Removing unreachable block (ram,0x0041e0f3) */

void FUN_0041e0a0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int in_ECX;
  int unaff_retaddr;
  
  FUN_00401020("BaseExtraList::AddExtra");
  switch(*(undefined1 *)(unaff_retaddr + 4)) {
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x1a:
  case 0x32:
    if (*(int *)(in_ECX + 4) != 0) {
      *(int *)(unaff_retaddr + 8) = *(int *)(in_ECX + 4);
    }
    break;
  default:
    iVar2 = *(int *)(in_ECX + 4);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 8);
      while (iVar3 != 0) {
        iVar2 = *(int *)(iVar2 + 8);
        iVar3 = *(int *)(iVar2 + 8);
      }
      *(int *)(iVar2 + 8) = unaff_retaddr;
      goto LAB_0041e0dd;
    }
  }
  *(int *)(in_ECX + 4) = unaff_retaddr;
LAB_0041e0dd:
  uVar4 = (uint)(*(byte *)(unaff_retaddr + 4) >> 3);
  if (uVar4 < 0xc) {
    pbVar1 = (byte *)(uVar4 + 8 + in_ECX);
    *pbVar1 = *pbVar1 | '\x01' << (*(byte *)(unaff_retaddr + 4) & 7);
  }
  FUN_00401040();
  return;
}



/* WARNING: Removing unreachable block (ram,0x0041e1c2) */

void FUN_0041e160(void)

{
  byte *pbVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int in_ECX;
  int unaff_FS_OFFSET;
  byte unaff_retaddr;
  
  FUN_00401020("BaseExtraList::RemoveExtra");
  puVar5 = *(undefined4 **)(in_ECX + 4);
  puVar4 = (undefined4 *)0x0;
  do {
    puVar3 = puVar5;
    if (puVar3 == (undefined4 *)0x0) {
LAB_0041e1ab:
      if (unaff_retaddr >> 3 < 0xc) {
        pbVar1 = (byte *)((unaff_retaddr >> 3) + 8 + in_ECX);
        *pbVar1 = *pbVar1 & ~('\x01' << (unaff_retaddr & 7));
      }
      iVar2 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
      if ((in_ECX == *(int *)(iVar2 + 8)) && (unaff_retaddr < 0x5d)) {
        *(undefined4 *)(iVar2 + 0x10 + (uint)unaff_retaddr * 4) = 0;
      }
      FUN_00401040();
      return;
    }
    if (*(byte *)(puVar3 + 1) == unaff_retaddr) {
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(in_ECX + 4) = puVar3[2];
      }
      else {
        puVar4[2] = puVar3[2];
      }
      (**(code **)*puVar3)(1);
      goto LAB_0041e1ab;
    }
    puVar5 = (undefined4 *)puVar3[2];
    puVar4 = puVar3;
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x0041e22d) */

int FUN_0041e210(byte param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int unaff_FS_OFFSET;
  char unaff_retaddr;
  
  if ((param_1 >> 3 < 0xc) &&
     ((*(byte *)((param_1 >> 3) + 8 + in_ECX) & (byte)(1 << (param_1 & 7))) != 0)) {
    iVar1 = *(int *)(*(int *)(unaff_FS_OFFSET + 0x2c) + _tls_index * 4);
    iVar2 = 0;
    if ((in_ECX == *(int *)(iVar1 + 8)) && (FUN_0041dea0(), param_1 < 0x5d)) {
      iVar2 = *(int *)(iVar1 + 0x10 + (uint)param_1 * 4);
    }
    if (iVar2 == 0) {
      FUN_00401020("BaseExtraList::GetExtraData");
      iVar1 = *(int *)(in_ECX + 4);
      while ((iVar1 != 0 && (iVar2 == 0))) {
        if (*(char *)(iVar1 + 4) == unaff_retaddr) {
          FUN_0041df90();
          iVar2 = iVar1;
        }
        iVar1 = *(int *)(iVar1 + 8);
      }
      FUN_00401040();
    }
    return iVar2;
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0041e2ed) */

int FUN_0041e2d0(byte param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if ((param_1 >> 3 < 0xc) &&
     ((*(byte *)((param_1 >> 3) + 8 + in_ECX) & (byte)(1 << (param_1 & 7))) != 0)) {
    FUN_00401020("BaseExtraList::GetPrevExtraData");
    iVar3 = *(int *)(in_ECX + 4);
    iVar2 = 0;
    while ((iVar1 = iVar3, iVar1 != 0 && (*(byte *)(iVar1 + 4) != param_1))) {
      iVar2 = iVar1;
      iVar3 = *(int *)(iVar1 + 8);
    }
    FUN_00401040();
    return iVar2;
  }
  return 0;
}



undefined1 FUN_0041e340(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    switch(*(undefined1 *)(param_1 + 4)) {
    case 2:
    case 3:
    case 8:
    case 0x11:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x1a:
    case 0x30:
    case 0x3b:
    case 0x49:
    case 0x56:
      uVar1 = 0;
    }
  }
  return uVar1;
}



void FUN_0041e3d0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  char cVar5;
  int in_ECX;
  undefined4 *extraout_EDX;
  char unaff_retaddr;
  
  FUN_00401020("ExtraDataList::RemoveAllCopyableExtra");
  iVar2 = *(int *)(in_ECX + 4);
  puVar4 = (undefined4 *)0x0;
  while (puVar3 = puVar4, iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 8);
    cVar5 = FUN_0041e340(iVar2);
    iVar2 = iVar1;
    puVar4 = extraout_EDX;
    if (cVar5 != '\0') {
      if (extraout_EDX == *(undefined4 **)(in_ECX + 4)) {
        *(int *)(in_ECX + 4) = iVar1;
      }
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[2] = iVar1;
      }
      puVar4 = puVar3;
      if (unaff_retaddr != '\0') {
        (**(code **)*extraout_EDX)(1);
      }
    }
  }
  FUN_0041de50();
  FUN_00401040();
  return;
}



void FUN_0041e450(void)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  FUN_00401020("ExtraDataList::RemoveNonPersistentCellData");
  puVar2 = *(undefined4 **)(in_ECX + 4);
  puVar4 = (undefined4 *)0x0;
joined_r0x0041e46b:
  while( true ) {
    puVar3 = puVar4;
    puVar4 = puVar2;
    if (puVar4 == (undefined4 *)0x0) {
      FUN_0041de50();
      FUN_00401040();
      return;
    }
    bVar1 = *(byte *)(puVar4 + 1);
    puVar2 = (undefined4 *)puVar4[2];
    if (bVar1 < 2) break;
    if (bVar1 < 4) goto LAB_0041e488;
    if (bVar1 != 8) break;
  }
  goto LAB_0041e49c;
LAB_0041e488:
  if ((*(uint *)(DAT_00b33b00 + 0x18) >> 2 & 1) == 0) {
LAB_0041e49c:
    if (puVar4 == *(undefined4 **)(in_ECX + 4)) {
      *(undefined4 **)(in_ECX + 4) = puVar2;
    }
    if (puVar3 != (undefined4 *)0x0) {
      puVar3[2] = puVar2;
    }
    (**(code **)*puVar4)(1);
    puVar4 = puVar3;
  }
  goto joined_r0x0041e46b;
}



undefined4 FUN_0041e4d0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int unaff_retaddr;
  
  FUN_00401020("ExtraDataList::CompareListForContainer");
  iVar1 = *(int *)(unaff_retaddr + 4);
  while( true ) {
    if (iVar1 == 0) {
      FUN_00401040();
      return 0;
    }
    cVar2 = *(char *)(iVar1 + 4);
    if (((cVar2 == '\x12') || (cVar2 == '\'')) ||
       ((cVar2 != '*' &&
        ((piVar3 = (int *)FUN_0041e210(cVar2), piVar3 == (int *)0x0 ||
         (cVar2 = (**(code **)(*piVar3 + 4))(iVar1), cVar2 != '\0')))))) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  FUN_00401040();
  return 1;
}



undefined4 FUN_0041e550(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int unaff_retaddr;
  
  FUN_00401020("ExtraDataList::CompareList");
  for (iVar3 = *(int *)(unaff_retaddr + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
    cVar1 = FUN_0041e340(iVar3);
    if ((cVar1 != '\0') &&
       ((piVar2 = (int *)FUN_0041e210(*(undefined1 *)(iVar3 + 4)), piVar2 == (int *)0x0 ||
        (cVar1 = (**(code **)(*piVar2 + 4))(iVar3), cVar1 != '\0')))) goto LAB_0041e5ff;
  }
  iVar3 = FUN_0041e060();
  iVar4 = FUN_0041e060();
  if (iVar4 != iVar3) {
    for (iVar3 = *(int *)(in_ECX + 4); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      cVar1 = FUN_0041e340(iVar3);
      if ((cVar1 != '\0') && (iVar4 = FUN_0041e210(*(undefined1 *)(iVar3 + 4)), iVar4 == 0)) {
LAB_0041e5ff:
        FUN_00401040();
        return 1;
      }
    }
  }
  FUN_00401040();
  return 0;
}



void FUN_0041e620(void)

{
  FUN_0041e210(0x34);
  return;
}



undefined4 FUN_0041e630(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x15);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e650(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x30);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e670(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x49);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e690(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x31);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e6b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x32);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e6d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x33);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e6f0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1a);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_0041e710(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x26);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429de0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0041e790(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x26);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e7b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x27);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e7d0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x28);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e7f0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x29);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0xffffffff;
}



float10 FUN_0041e810(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2b);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)-1.0;
}



undefined1 FUN_0041e830(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2c);
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_0041e850(void)

{
  FUN_0041e210(0x36);
  return;
}



undefined2 FUN_0041e860(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2a);
  if (iVar1 != 0) {
    return *(undefined2 *)(iVar1 + 0xc);
  }
  return 1;
}



float10 FUN_0041e880(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2d);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)-1.0;
}



float10 FUN_0041e8a0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2e);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)-1.0;
}



int FUN_0041e8c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x2f);
  if (iVar1 != 0) {
    return (int)*(char *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e8e0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x48);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e900(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x12);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041e920(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x12);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}



float10 FUN_0041e940(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x37);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)1;
}



int FUN_0041e960(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x5b);
  if ((iVar1 == 0) || (iVar1 = *(int *)(iVar1 + 0xc), iVar1 == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 FUN_0041e980(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x52);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



undefined1 FUN_0041e990(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x38);
  if (iVar1 == 0) {
    return 0xff;
  }
  return *(undefined1 *)(iVar1 + 0xc);
}



int FUN_0041e9b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1e);
  if (iVar1 == 0) {
    return 0;
  }
  return iVar1 + 0xc;
}



int FUN_0041e9c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(0x15);
  if (iVar3 == 0) {
    iVar3 = FUN_00401f00(0x10,uVar2);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_004298c0(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
  }
  else {
    iVar1 = *(int *)(iVar3 + 0xc);
    if (iVar1 != 0) {
      FUN_00475b60();
      FUN_00401f20(iVar1);
    }
    *(undefined4 *)(iVar3 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar3;
}



int FUN_0041ea70(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x14);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x24,uVar1);
    local_4 = 0;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_0042ac40(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



int FUN_0041eaf0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x31);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_00429a80(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  else {
    FUN_00401f20(*(undefined4 *)(iVar2 + 0xc));
    *(undefined4 *)(iVar2 + 0xc) = param_1;
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



int FUN_0041eb90(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x13);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x14,uVar1);
    local_4 = 0;
    iVar2 = 0;
    if (iVar3 != 0) {
      iVar2 = FUN_00429d30();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
  }
  *unaff_FS_OFFSET = local_c;
  return iVar2;
}



void FUN_0041ec10(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_1 != 0) {
    iVar2 = FUN_0041e210(0x1a);
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0xc) = param_1;
      *unaff_FS_OFFSET = local_c;
      return;
    }
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00429d50(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ecb0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2b);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429e80(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ed50(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2c);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xc) = (undefined1)param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429ea0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041edf0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2d);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429ec0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ee90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2e);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429ee0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ef30(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x2f);
  if (iVar2 != 0) {
    *(undefined1 *)(iVar2 + 0xc) = (undefined1)param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429f00(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041efd0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x48);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042a700(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f090(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x12);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x14,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00429f20(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f130(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x12);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return;
}



void FUN_0041f150(char param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar4;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar4 = (*(byte *)(in_ECX + 0xc) & 0x20) != 0;
  if (param_1 == '\0') {
    if (bVar4) {
      FUN_0041e160(0x25);
    }
  }
  else if (!bVar4) {
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_00429fd0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f200(char param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar4;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ab866;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  if (param_2 == '\0') {
    bVar4 = (*(byte *)(in_ECX + 0xb) & 8) != 0;
    if (param_1 == '\0') {
      if (!bVar4) goto LAB_0041f2d7;
      uVar3 = 0x1b;
      goto LAB_0041f2d0;
    }
    if (bVar4) goto LAB_0041f2d7;
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 1;
    if (iVar2 != 0) {
      uVar3 = FUN_00429ff0();
      goto LAB_0041f2a7;
    }
  }
  else {
    bVar4 = (*(byte *)(in_ECX + 0xb) & 0x10) != 0;
    if (param_1 == '\0') {
      if (!bVar4) goto LAB_0041f2d7;
      uVar3 = 0x1c;
LAB_0041f2d0:
      FUN_0041e160(uVar3);
LAB_0041f2d7:
      *unaff_FS_OFFSET = local_c;
      return;
    }
    if (bVar4) goto LAB_0041f2d7;
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_0042a030();
      goto LAB_0041f2a7;
    }
  }
  uVar3 = 0;
LAB_0041f2a7:
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f2f0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  if ((*(byte *)(in_ECX + 0x12) & 1) == 0) {
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a010();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f370(char param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *unaff_FS_OFFSET;
  bool bVar4;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009afadb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xfffffff0;
  *unaff_FS_OFFSET = (int)&local_c;
  bVar4 = *(char *)(in_ECX + 0x10) < '\0';
  if (param_1 == '\0') {
    if (bVar4) {
      FUN_0041e160(0x47);
    }
  }
  else if (!bVar4) {
    iVar2 = FUN_00401f00(0xc,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a050();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f420(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x52);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x10,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042a070(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f4c0(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009d62eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x1e);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x20,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_0042ae70(param_1,param_2,param_3,param_4);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar3);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  if (param_1 == 0) {
    *(undefined4 *)(iVar2 + 0xc) = param_2;
  }
  else {
    *(int *)(iVar2 + 0xc) = param_1;
  }
  *(undefined4 *)(iVar2 + 0x10) = *param_3;
  *(undefined4 *)(iVar2 + 0x14) = param_3[1];
  *(undefined4 *)(iVar2 + 0x18) = param_3[2];
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041f590(void)

{
  FUN_0041e160(0x15);
  return;
}



void FUN_0041f5a0(void)

{
  FUN_0041e160(0x34);
  return;
}



void FUN_0041f5b0(void)

{
  FUN_0041e160(0x30);
  return;
}



void FUN_0041f5c0(void)

{
  FUN_0041e160(0x49);
  return;
}



void FUN_0041f5d0(void)

{
  FUN_0041e160(0x31);
  return;
}



void FUN_0041f5e0(void)

{
  FUN_0041e160(0x32);
  return;
}



void FUN_0041f5f0(void)

{
  FUN_0041e160(0x1a);
  return;
}



void FUN_0041f600(void)

{
  FUN_0041e160(0x27);
  return;
}



void FUN_0041f610(void)

{
  FUN_0041e160(0x2b);
  return;
}



void FUN_0041f620(void)

{
  FUN_0041e160(0x2a);
  return;
}



void FUN_0041f630(void)

{
  FUN_0041e160(0x2d);
  return;
}



void FUN_0041f640(void)

{
  FUN_0041e160(0x2e);
  return;
}



void FUN_0041f650(void)

{
  FUN_0041e160(0x2f);
  return;
}



void FUN_0041f660(void)

{
  FUN_0041e160(0x48);
  return;
}



void FUN_0041f670(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x12);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x10) = 0;
  }
  return;
}



void FUN_0041f690(void)

{
  FUN_0041e160(0x37);
  return;
}



void FUN_0041f6a0(char param_1)

{
  if (param_1 != '\0') {
    FUN_0041e160();
    return;
  }
  FUN_0041e160();
  return;
}



void FUN_0041f6d0(void)

{
  FUN_0041e160(0x47);
  return;
}



void FUN_0041f6e0(void)

{
  FUN_0041e160(0x1e);
  return;
}



undefined4 * FUN_0041f6f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0041e210(0x14);
  if (iVar2 == 0) {
    iVar2 = FUN_0041ea70(param_2);
  }
  *param_1 = *(undefined4 *)(iVar2 + 0x18);
  uVar1 = *(undefined4 *)(iVar2 + 0x20);
  param_1[1] = *(undefined4 *)(iVar2 + 0x1c);
  param_1[2] = uVar1;
  return param_1;
}



undefined4 * FUN_0041f730(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_0041e210(0x14);
  if (iVar2 == 0) {
    iVar2 = FUN_0041ea70(param_2);
  }
  *param_1 = *(undefined4 *)(iVar2 + 0xc);
  uVar1 = *(undefined4 *)(iVar2 + 0x14);
  param_1[1] = *(undefined4 *)(iVar2 + 0x10);
  param_1[2] = uVar1;
  return param_1;
}



void FUN_0041f770(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x14);
  if (iVar1 == 0) {
    iVar1 = FUN_0041ea70(param_2);
  }
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  *(undefined4 *)(iVar1 + 0x20) = param_5;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  return;
}



void FUN_0041f7b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x14);
  if (iVar1 == 0) {
    iVar1 = FUN_0041ea70(param_2);
  }
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_5;
  return;
}



undefined4 FUN_0041f7f0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x53);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined1 FUN_0041f810(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 0xc);
  }
  return 1;
}



bool FUN_0041f830(byte param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 != 0) {
    return (param_1 & *(byte *)(iVar1 + 0xc)) != 0;
  }
  return (param_1 & 1) != 0;
}



undefined4 FUN_0041f860(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x13);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0x10);
}



float10 FUN_0041f870(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(4);
  if (iVar1 == 0) {
    return (float10)0;
  }
  return (float10)*(float *)(iVar1 + 0xc);
}



void FUN_0041f890(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  LONG LVar5;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c829b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar3 = FUN_0041e210(2);
  if ((param_1 != (undefined4 *)0x0) && (iVar3 == 0)) {
    iVar4 = FUN_00401f00(0x14,uVar2);
    if (iVar4 == 0) {
      iVar3 = 0;
    }
    else {
      local_4 = iVar3;
      iVar3 = FUN_0041dac0(0);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar3);
  }
  puVar1 = *(undefined4 **)(iVar3 + 0x10);
  if (puVar1 != param_1) {
    if (puVar1 != (undefined4 *)0x0) {
      LVar5 = InterlockedDecrement(puVar1 + 1);
      if ((LVar5 == 0) && (puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
    }
    *(undefined4 **)(iVar3 + 0x10) = param_1;
    if (param_1 != (undefined4 *)0x0) {
      InterlockedIncrement(param_1 + 1);
    }
  }
  *unaff_FS_OFFSET = local_c;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0041f988) */
/* WARNING: Removing unreachable block (ram,0x0041f996) */

undefined4 FUN_0041f950(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar2 = &stack0xffffffec;
  puVar1 = (undefined1 *)FUN_0041e210();
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = puVar1;
  }
  return *(undefined4 *)(puVar2 + 0x10);
}



undefined4 FUN_0041f9b0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(8);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



int FUN_0041f9c0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0xb);
  if (iVar1 == 0) {
    return 0;
  }
  return (int)*(char *)(iVar1 + 0xc);
}



undefined4 FUN_0041f9e0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0xc);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



undefined4 FUN_0041f9f0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0xf);
  *param_1 = 0;
  *param_2 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(undefined4 *)(iVar1 + 0x10);
  *param_2 = iVar1 + 0x14;
  return *(undefined4 *)(iVar1 + 0xc);
}



undefined4 FUN_0041fa30(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(10);
  if (iVar1 == 0) {
    return 0;
  }
  return *(undefined4 *)(iVar1 + 0xc);
}



void FUN_0041fa40(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009c309b;
  local_c = *unaff_FS_OFFSET;
  uVar2 = DAT_00b30aac ^ (uint)&stack0xffffffec;
  *unaff_FS_OFFSET = (int)&local_c;
  cVar1 = FUN_0045a500(uVar2);
  if ((cVar1 == '\0') && (param_1 != 0)) {
    cVar1 = FUN_004db4a0();
    if (cVar1 == '\0') goto LAB_0041fae0;
  }
  iVar3 = FUN_0041e210(0x22);
  if (iVar3 == 0) {
    iVar3 = FUN_00401f00(0x10);
    local_4 = 0;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0042a180(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar4);
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(int *)(iVar3 + 0xc) = param_1;
LAB_0041fae0:
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0041fb00(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x22);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041fb20(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041fb40(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x10);
  }
  return 0;
}



undefined4 FUN_0041fb60(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0x14);
  }
  return 0;
}



undefined1 FUN_0041fb80(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 0x18);
  }
  return 0;
}



undefined1 FUN_0041fba0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x1f);
  if (iVar1 != 0) {
    return *(undefined1 *)(iVar1 + 0x19);
  }
  return 0;
}



void FUN_0041fbc0(undefined4 param_1)

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
  iVar2 = FUN_0041e210(0x20);
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0xc) + 0x10))(1);
    }
    *(undefined4 *)(iVar2 + 0xc) = param_1;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  iVar2 = FUN_00401f00(0x10,uVar1);
  local_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042a1e0(param_1);
  }
  local_4 = 0xffffffff;
  FUN_0041e0a0(uVar3);
  *unaff_FS_OFFSET = local_c;
  return;
}



undefined4 FUN_0041fc70(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x20);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



float10 FUN_0041fc90(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x3d);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 0xc);
  }
  return (float10)0;
}



undefined1 FUN_0041fcb0(void)

{
  int iVar1;
  int in_ECX;
  undefined1 uVar2;
  
  FUN_00401020("ExtraDataList::IsExtraDefaultforContainer");
  iVar1 = *(int *)(in_ECX + 4);
  uVar2 = 0;
  if (iVar1 == 0) {
LAB_0041fd08:
    FUN_00401040();
    return 0;
  }
  do {
    switch(*(undefined1 *)(iVar1 + 4)) {
    default:
      goto LAB_0041fd08;
    case 0x27:
      uVar2 = 1;
    case 0x12:
    case 0x22:
    case 0x26:
    case 0x2a:
    case 0x2d:
    case 0x36:
    case 0x37:
    case 0x55:
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        FUN_00401040();
        return uVar2;
      }
    }
  } while( true );
}



undefined4 FUN_0041fd70(void)

{
  int iVar1;
  int in_ECX;
  char unaff_retaddr;
  
  FUN_00401020("ExtraDataList::IsExtraDefaultforContainer");
  iVar1 = *(int *)(in_ECX + 4);
  while( true ) {
    if (iVar1 == 0) {
      FUN_00401040();
      return 1;
    }
    if (unaff_retaddr != '\0') break;
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 0x12:
    case 0x22:
    case 0x26:
    case 0x27:
    case 0x2a:
    case 0x2d:
    case 0x36:
    case 0x37:
    case 0x55:
switchD_0041fda7_caseD_12:
      iVar1 = *(int *)(iVar1 + 8);
      break;
    default:
      goto switchD_0041fda7_caseD_13;
    }
  }
  switch(*(undefined1 *)(iVar1 + 4)) {
  case 0x12:
  case 0x1b:
  case 0x22:
  case 0x26:
  case 0x27:
  case 0x2a:
  case 0x2d:
  case 0x36:
  case 0x37:
  case 0x55:
    goto switchD_0041fda7_caseD_12;
  default:
switchD_0041fda7_caseD_13:
    FUN_00401040();
    return 0;
  }
}



void FUN_0041fe90(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x36);
  if (iVar2 == 0) {
    iVar2 = FUN_00401f00(0x14,uVar1);
    local_4 = 0;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = FUN_0042a2b0(param_1);
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(iVar2);
    *(undefined1 *)(iVar2 + 0x10) = 0;
    *unaff_FS_OFFSET = local_c;
    return;
  }
  *(undefined4 *)(iVar2 + 0xc) = param_1;
  *(undefined1 *)(iVar2 + 0x10) = 0;
  *unaff_FS_OFFSET = local_c;
  return;
}



void FUN_0041ff40(undefined1 param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x36);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x10) = param_1;
  }
  return;
}



undefined4 FUN_0041ff60(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x36);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0xffffffff;
}



undefined4 FUN_0041ff80(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x11);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



undefined4 FUN_0041ffa0(void)

{
  int iVar1;
  
  iVar1 = FUN_0041e210(0x19);
  if (iVar1 != 0) {
    return *(undefined4 *)(iVar1 + 0xc);
  }
  return 0;
}



void FUN_0041ffc0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *unaff_FS_OFFSET;
  int local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_009ca7eb;
  local_c = *unaff_FS_OFFSET;
  uVar1 = DAT_00b30aac ^ (uint)&stack0xffffffe8;
  *unaff_FS_OFFSET = (int)&local_c;
  iVar2 = FUN_0041e210(0x21);
  if (iVar2 == 0) {
    iVar3 = FUN_00401f00(0x10,uVar1);
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      local_4 = iVar2;
      uVar4 = FUN_0042a3b0();
    }
    local_4 = 0xffffffff;
    FUN_0041e0a0(uVar4);
  }
  FUN_0042a440(param_1,param_2);
  *unaff_FS_OFFSET = local_c;
  return;
}


